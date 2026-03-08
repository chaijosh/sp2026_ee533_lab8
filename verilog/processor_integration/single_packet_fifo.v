`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:27:50 03/06/2026 
// Design Name: 
// Module Name:    single_packet_fifo 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description:    
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////


module single_packet_fifo
  #(parameter DATA_WIDTH = 64,
    parameter CTRL_WIDTH = 8,
    parameter UDP_REG_SRC_WIDTH = 2,
    parameter FIFO_DEPTH_WORDS = 256
  )
  (
    input port_master,
    // --- Data path interface (output). Goes to Output Queue in user_data_path.v
    output reg [DATA_WIDTH-1:0]         out_data,
    output reg [CTRL_WIDTH-1:0]         out_ctrl,
    output reg                          out_wr,
    input                               out_rdy,

    // --- Data path interface (input). Comes from  Input Arbiter in user_data_path.v
    input      [DATA_WIDTH-1:0]         in_data,
    input      [CTRL_WIDTH-1:0]         in_ctrl,
    input                               in_wr,
    output reg                          in_rdy,

    // CPU Data Memory interface
    input [7:0]					    cpu_addr,
    input	[DATA_WIDTH-1:0]	cpu_in_data,
    input	[CTRL_WIDTH-1:0]	cpu_in_ctrl,
    input 								  cpu_we,

    output [DATA_WIDTH-1:0]	cpu_out_data,
    output [CTRL_WIDTH-1:0]	cpu_out_ctrl,
    input								    cpu_en,

    input clk,
    input reset
  );

  localparam ADDR_WIDTH = 8;

  // FIFO state machine states:
  localparam STATE_IDLE      = 2'b00; // Empty and ready to receive
  localparam STATE_RECEIVING = 2'b01; // Actively receiving a packet
  localparam STATE_FULL      = 2'b10; // Packet stored, waiting for output to be ready
  localparam STATE_SENDING   = 2'b11; // Actively sending the packet

  reg [1:0] state, next_state;

  // Head and Tail pointers
  reg [ADDR_WIDTH:0] wr_ptr, rd_ptr;
  reg [ADDR_WIDTH:0]   pkt_len_words; // length of received packet

  // FIFO wires for accessing the BRAM
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
  

  // MUX logic
  assign ram_addra  = port_master ? cpu_addr                     : wr_ptr;
  assign ram_dina   = port_master ? {cpu_in_ctrl, cpu_in_data}   : fifo_din;
  assign ram_wea    = port_master ? cpu_we                       : fifo_we;
  assign ram_ena    = port_master ? cpu_en                       : 1'b1;
  
  assign ram_addrb  = port_master ? 8'b0  : rd_ptr;
  assign ram_enb    = port_master ? 1'b0  : 1'b1;
  //assign ram_doutb  = port_master ? 72'bz : fifo_dout;

   convertible_FIFO ram_inst (
       .addra(ram_addra),    // Port A for writing when FIFO is master
       .clka(clk),
       .dina(ram_dina),
       .wea(ram_wea),
       .ena(ram_ena),
       .douta({cpu_out_ctrl, cpu_out_data}),

       .addrb(rd_ptr[ADDR_WIDTH-1:0]),    // Port B for reading when FIFO is master
       .clkb(clk),
       .dinb(72'b0),
       .web(1'b0),
       .enb(ram_enb),
		 .doutb(ram_dout)
   );

  // End-of-packet is indicated by a non-zero ctrl value in the NetFPGA framework
  wire is_eop = (in_ctrl != 0);

  assign fifo_we = ((state == STATE_IDLE || state == STATE_RECEIVING) && in_wr);
  assign fifo_din = {in_ctrl, in_data};

  // State transition logic
  always @(*) begin
    next_state = state;
    in_rdy     = 1'b0;
    out_data   = ram_dout[DATA_WIDTH-1:0];
    out_ctrl   = ram_dout[DATA_WIDTH+CTRL_WIDTH-1:DATA_WIDTH];

    case (state)
      STATE_IDLE: begin
        in_rdy = 1'b1; // Accept new packet
        if (in_wr) begin
          if (is_eop)
            next_state = STATE_FULL; // If the first entry is the end of packet, become full
          else
            next_state = STATE_RECEIVING; // else, continue receiving further inputs of the packet
        end
      end

      STATE_RECEIVING: begin
        in_rdy = 1'b1; // continue receiving further inputs of the packet
        if (in_wr) begin
          
          if (is_eop) // Last entry of the packet
            next_state = STATE_FULL;
          
          else if (wr_ptr == 256) // In case we exceed FIFO size and still didnt receive end packet, drop it entirely
            next_state = STATE_IDLE;

        end
      end

      STATE_FULL: begin
        in_rdy = 1'b0; // FIFO is full, so do not accept new packet

        if (out_rdy) // Signal from Output Queue telling that it is ready to send packet
          next_state = STATE_SENDING;
      end

      STATE_SENDING: begin
        in_rdy = 1'b0; // keep denying new packet until current packet is sent out
        if (out_rdy && (rd_ptr == pkt_len_words - 1))
          next_state = STATE_IDLE; // Entire packet is sent now, so go to IDLE state and accept new packet
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

      // Reset everything to IDLE state whenever we go to it in the next CLK cycle
      if (next_state == STATE_IDLE && state != STATE_IDLE) begin
        wr_ptr        <= 0;
        rd_ptr        <= 0;
        pkt_len_words <= 0;
      end 
      else // Else, Increment Read/Write pointers
      begin
        if ((state == STATE_IDLE || state == STATE_RECEIVING) && in_wr) begin
          wr_ptr <= wr_ptr + 1;
          if (is_eop)
            pkt_len_words <= wr_ptr + 1;
        end

        if (state == STATE_SENDING && out_rdy)
          rd_ptr <= rd_ptr + 1;
      end
    end
  end

endmodule
