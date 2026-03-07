`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:52:23 03/06/2026 
// Design Name: 
// Module Name:    network_processor 
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

module network_processor
	 #(
	 parameter DATA_WIDTH       = 64,
	 parameter CTRL_WIDTH       = 8,
    parameter FIFO_DEPTH_WORDS = 256
	 )
	 (
	 input 										 memory_port_master,
    // --- Data path interface (output)
    output wire [DATA_WIDTH-1:0]        out_data,
    output wire [CTRL_WIDTH-1:0]        out_ctrl,
    output wire                         out_wr,
    input                               out_rdy,

    // --- Data path interface (input)
    input      [DATA_WIDTH-1:0]         in_data,
    input      [CTRL_WIDTH-1:0]         in_ctrl,
    input                               in_wr,
    output wire                         in_rdy,

    // --- Misc
    input                               clk,
    input                               reset
  );
  
  wire [7:0] cpu_mem_addr;
  wire cpu_mem_we,cpu_mem_en;
  wire [63:0] cpu_mem_wr_data, cpu_mem_rd_data;
  
  single_packet_fifo #(
    .DATA_WIDTH(DATA_WIDTH),
    .CTRL_WIDTH(CTRL_WIDTH),
    .FIFO_DEPTH_WORDS(FIFO_DEPTH_WORDS)
  ) fifo_instance(
	 .port_master(memory_port_master),
    .out_data(out_data),
    .out_ctrl(out_ctrl),
    .out_wr(out_wr),
    .out_rdy(out_rdy),

    .in_data(in_data),
    .in_ctrl(in_ctrl),
    .in_wr(in_wr),
    .in_rdy(in_rdy),

    .clk(clk),
    .reset(reset),

    .cpu_addr(cpu_mem_addr),
    .cpu_in_data(cpu_mem_wr_data),
    .cpu_in_ctrl(8'd0), 
    .cpu_we(cpu_mem_we),
    .cpu_out_data(cpu_mem_rd_data),
    .cpu_out_ctrl(),
    .cpu_en(cpu_mem_en)
    
  );
  
  
  cpu_CMT cpu_instance(
    .CLK(clk), 
    .RSTB(reset),
    .mem_addr(cpu_mem_addr),
    .mem_we(cpu_mem_we),
    .mem_en(cpu_mem_en),
    .mem_wr_data(cpu_mem_wr_data),
    .mem_rd_data(cpu_mem_rd_data)
    );


endmodule
