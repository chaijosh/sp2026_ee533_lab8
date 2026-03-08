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
  //assign ram_douta  = port_master == 2'b10 ? cpu_out_ctrl, cpu_out_data} :port_master == 2'b01 ? {cpu_out_ctrl, cpu_out_data} : fifo_dout;

// Instantiate the dual-port Block RAM, using convertible_FIFO as the memory core.
// This replaces the inferred data_mem and ctrl_mem arrays and merges them.
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

//  convertible_FIFO ram_inst (
//      .addra(cpu_addr),    // Port A for writing
//      .clka(clk),
//      .dina({cpu_in_ctrl, cpu_in_data}),
//      .wea(cpu_we),
//      .ena(cpu_en),
//      .dinb(72'b0),      // Unused
//      .douta({cpu_out_ctrl, cpu_out_data}),          // Unused
//
//      .addrb(8'b0),    // Port B for reading
//      .clkb(clk),
//      .doutb(ram_dout),
//      .enb(1'b0),
//      .web(1'b0)         // Port B is read-only
//  );
  


  // End-of-packet is indicated by a non-zero ctrl value in the NetFPGA framework
  wire is_eop = (in_ctrl != 0);

  assign fifo_we = ((state == STATE_IDLE || state == STATE_RECEIVING) && in_wr);
  assign fifo_din = {in_ctrl, in_data};

  // Combinational logic for state transitions and outputs
  always @(*) begin
    // Default values for outputs
    next_state = state;
    in_rdy     = 1'b0;
    out_data   = ram_dout[DATA_WIDTH-1:0];
    out_ctrl   = ram_dout[DATA_WIDTH+CTRL_WIDTH-1:DATA_WIDTH];

    case (state)
      STATE_IDLE: begin
        in_rdy = 1'b1; // Ready to accept a new packet
        if (in_wr) begin
          if (is_eop) begin
            next_state = STATE_FULL; // It's a single-word packet
          end else begin
            next_state = STATE_RECEIVING; // Start of a multi-word packet
          end
        end
      end

      STATE_RECEIVING: begin
        in_rdy = 1'b1; // Still ready to accept words of the current packet
        if (in_wr) begin
          if (is_eop) begin
            // This is the last word, packet is now fully received
            next_state = STATE_FULL;
          // If wr_ptr has wrapped back to 0, it means we have received a full
          // FIFO's worth of data without an EOP. This is an overflow.
          end else if (wr_ptr == 0) begin
            // Error: Packet is too large for buffer. Drop and reset.
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
        in_rdy = 1'b0; // Still full, stall the input
        // out_wr is now sequential to align with BRAM output latency

        // Check if we are about to send the last word
        if (out_rdy && (rd_ptr == pkt_len_words - 1)) begin
          next_state = STATE_IDLE; // Packet sent, return to idle
        end
      end
    endcase
  end

  // Sequential logic for state and pointer updates
  always @(posedge clk) begin
    if (reset) begin
      state         <= STATE_IDLE;
      wr_ptr        <= 0;
      rd_ptr        <= 0;
      pkt_len_words <= 0;
      out_wr        <= 1'b0;
    end else begin
      state <= next_state;

      // out_wr is registered to align with the 1-cycle read latency of the BRAM.
      // It is based on the *current* state, before it gets updated to next_state.
      out_wr <= (state == STATE_SENDING);

      // When transitioning back to IDLE (after a successful send or a dropped packet),
      // reset all pointers and the packet length to a clean state.
      if (next_state == STATE_IDLE && state != STATE_IDLE) begin
        wr_ptr        <= 0;
        rd_ptr        <= 0;
        pkt_len_words <= 0; // Fix: Reset packet length on drop/completion.
      end else begin
        // Otherwise, update pointers based on normal operation.
        if ((state == STATE_IDLE || state == STATE_RECEIVING) && in_wr) begin
          wr_ptr <= wr_ptr + 1;
          if (is_eop) begin
            pkt_len_words <= wr_ptr + 1; // Latch packet length
          end
        end
        if (state == STATE_SENDING && out_rdy) begin
          rd_ptr <= rd_ptr + 1;
        end
      end
    end
  end

endmodule
