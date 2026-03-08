///////////////////////////////////////////////////////////////////////////////
// vim:set shiftwidth=3 softtabstop=3 expandtab:
//
// Module: single_packet_fifo.v
// Project: NF2.1
// Description: A simple single-packet FIFO buffer. It receives and stores one
//              complete packet, then asserts backpressure (in_rdy=0) until
//              the packet has been fully transmitted downstream.
//
///////////////////////////////////////////////////////////////////////////////
`timescale 1ns/1ps

// It is assumed that `UDP_REG_ADDR_WIDTH and `CPCI_NF2_DATA_WIDTH are defined
// in a global `include file (e.g., `defines.v`).

module single_packet_fifo
  #(parameter DATA_WIDTH = 64,
    parameter CTRL_WIDTH = 8,
    parameter UDP_REG_SRC_WIDTH = 2,
    parameter FIFO_DEPTH_WORDS = 256 // 256 * 8 bytes = 2KB buffer
  )
  (
    input [1:0] 								 port_master,
    // --- Data path interface (output)
    output reg [DATA_WIDTH-1:0]         out_data,
    output reg [CTRL_WIDTH-1:0]         out_ctrl,
    output reg                          out_wr,
    input                               out_rdy,

    // --- Data path interface (input)
    input      [DATA_WIDTH-1:0]         in_data,
    input      [CTRL_WIDTH-1:0]         in_ctrl,
    input                               in_wr,
    output reg                          in_rdy,

    // CPU Data Memory interface

	input 		[7:0]					cpu_addr,
   input		[DATA_WIDTH-1:0]		cpu_in_data,
	input		[CTRL_WIDTH-1:0]		cpu_in_ctrl,
	input 								cpu_we,

	output 		[DATA_WIDTH-1:0]		CG_out_data,
	output		[CTRL_WIDTH-1:0]		CG_out_ctrl,
	input								cpu_en,
	
	    // CPU Data Memory interface

	input 	[7:0]						gpu_addr,
   input		[DATA_WIDTH-1:0]		gpu_in_data,
	input		[CTRL_WIDTH-1:0]		gpu_in_ctrl,
	input 								gpu_we,

	input									gpu_en,


    // --- Misc
    input                               clk,
    input                               reset
  );

  localparam ADDR_WIDTH = 8;

  // States for the Finite State Machine
  localparam STATE_IDLE      = 2'b00; // Empty and ready to receive
  localparam STATE_RECEIVING = 2'b01; // Actively receiving a packet
  localparam STATE_FULL      = 2'b10; // Packet stored, waiting for output to be ready
  localparam STATE_SENDING   = 2'b11; // Actively sending the packet

  reg [1:0] state, next_state;

  // Head (rd_ptr) and Tail (wr_ptr) pointers
  reg [ADDR_WIDTH-1:0] wr_ptr, rd_ptr;
  reg [ADDR_WIDTH:0]   pkt_len_words; // Stores the length of the buffered packet in words

  wire [DATA_WIDTH+CTRL_WIDTH-1:0] fifo_din;
  wire [DATA_WIDTH+CTRL_WIDTH-1:0] fifo_dout;
  wire                             fifo_we;

  // Wires for BRAM interface
  wire [DATA_WIDTH+CTRL_WIDTH-1:0] ram_dina;
  wire [DATA_WIDTH+CTRL_WIDTH-1:0] ram_douta;
  wire                             ram_wea;
  wire [7:0]                       ram_addra;
  wire                             ram_ena;
  
  wire [DATA_WIDTH+CTRL_WIDTH-1:0] ram_dout;
  wire [7:0]                       ram_addrb;
  wire                             ram_enb;
   
  assign ram_addra  = port_master == 2'b10 ? gpu_addr :port_master == 2'b01 ? cpu_addr  : wr_ptr;
  assign ram_dina   = port_master == 2'b10 ? {gpu_in_ctrl, gpu_in_data} :port_master == 2'b01 ? {cpu_in_ctrl, cpu_in_data}  : fifo_din;
  assign ram_wea    = port_master == 2'b10 ? gpu_we :port_master == 2'b01 ? cpu_we                       : fifo_we;
  assign ram_ena    = port_master == 2'b10 ? gpu_en :port_master == 2'b01 ? cpu_en                       : 1'b1;
  
  assign ram_addrb  = port_master == 2'b00 ? rd_ptr: 8'b0;
  assign ram_enb    = port_master == 2'b00 ? 1'b1  : 1'b0;
  
   convertible_FIFO ram_inst (
       .addra(ram_addra),    // Port A for writing
       .clka(clk),
       .dina(ram_dina),
       .wea(ram_wea),
       .ena(ram_ena),
       .douta({CG_out_ctrl, CG_out_data}),

       .addrb(rd_ptr),    // Port B for reading
       .clkb(clk),
       .dinb(72'b0),
       .web(1'b0),         // Port B is read-only
       .enb(ram_enb),
		 .doutb(ram_dout)
   );

  wire is_eop = (in_ctrl != 0);

  assign fifo_we = ((state == STATE_IDLE || state == STATE_RECEIVING) && in_wr);
  assign fifo_din = {in_ctrl, in_data};

  always @(*) begin
    // Default values for outputs
    next_state = state;
    in_rdy     = 1'b0;
    out_data   = ram_dout[DATA_WIDTH-1:0];
    out_ctrl   = ram_dout[DATA_WIDTH+CTRL_WIDTH-1:DATA_WIDTH];

    case (state)
      STATE_IDLE: begin
        in_rdy = 1'b1; 
        if (in_wr) begin
          if (is_eop)
            next_state = STATE_FULL; 
          else
            next_state = STATE_RECEIVING; 
        end
      end

      STATE_RECEIVING: begin
        in_rdy = 1'b1; 
        if (in_wr) begin
          if (is_eop) begin
            next_state = STATE_FULL;
          end else if (wr_ptr == 256) begin
            
            next_state = STATE_IDLE;
          end
        end
      end

      STATE_FULL: begin
        in_rdy = 1'b0; // FIFO is full, stall the input
        if (out_rdy) begin
          // Downstream is ready, so we can start sending
          next_state = STATE_SENDING;
        end
      end

      STATE_SENDING: begin
        in_rdy = 1'b0; 
        if (out_rdy && (rd_ptr == pkt_len_words - 1)) begin
          next_state = STATE_IDLE; 
        end
      end
    endcase
  end

 
  always @(posedge clk) begin
    if (reset) begin
      state         <= STATE_IDLE;
		// next_state    <= STATE_IDLE;
      wr_ptr        <= 0;
      rd_ptr        <= 0;
      pkt_len_words <= 0;
      out_wr        <= 1'b0;
    end else begin
      state <= next_state;

      out_wr <= (state == STATE_SENDING);

      if (next_state == STATE_IDLE && state != STATE_IDLE) begin
        wr_ptr        <= 0;
        rd_ptr        <= 0;
        pkt_len_words <= 0; 
      end else begin
        if ((state == STATE_IDLE || state == STATE_RECEIVING) && in_wr) begin
          wr_ptr <= wr_ptr + 1;
          if (is_eop) begin
            pkt_len_words <= wr_ptr + 1; 
          end
        end
        if (state == STATE_SENDING && out_rdy) begin
          rd_ptr <= rd_ptr + 1;
        end
      end
    end
  end

endmodule

