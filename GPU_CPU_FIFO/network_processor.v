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
	 //output [1:0]								 memory_port_master,
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
	 
	 //-- instruction mem laod and store
	 input [8:0] debug_pc, input debug_enable, input [31:0] debug_instr_in, input debug_instr_write_en, output [31:0] debug_instr_out,output [8:0]  PC_END,
	 
    // --- Misc
    // --- Misc
    input                               clk,
    input                               reset_cpu,
	 input										 reset_gpu,
	 input                               fifo_reset 
	 
  );
  wire GPU_done;
  wire CPU_done;
  wire gpu_start;
  wire [1:0] w_memory_port_master;
  reg [1:0] mem_port_master;
  wire [1:0] state;
  wire [63:0] CG_mem_rd_data;
  wire [7:0] cpu_mem_addr;
  wire cpu_mem_we,cpu_mem_en;
  wire [63:0] cpu_mem_wr_data, cpu_mem_rd_data;
  wire fifo_freeze;
  wire [7:0] gpu_mem_addr;
  wire gpu_mem_we,gpu_mem_en;
  wire [63:0] gpu_mem_wr_data, gpu_mem_rd_data;
  
  assign cpu_mem_rd_data = CG_mem_rd_data;
  assign gpu_mem_rd_data = CG_mem_rd_data;
  
  assign fifo_freeze = CPU_done;
  
  always @(posedge CPU_done or posedge GPU_done or posedge gpu_start or state) begin
		if(state != 2'b10|| CPU_done)
			mem_port_master = 2'b00;
		else if(state == 2'b10) begin
			if (gpu_start)
				mem_port_master = 2'b10;
			else if(GPU_done)
				mem_port_master = 2'b01;
		end
  end
  
  assign w_memory_port_master = mem_port_master;
  
  single_packet_fifo #( 
    .DATA_WIDTH(DATA_WIDTH),
    .CTRL_WIDTH(CTRL_WIDTH),
    .FIFO_DEPTH_WORDS(FIFO_DEPTH_WORDS)
  ) fifo_instance(
	 .port_master(w_memory_port_master),
    .out_data(out_data),
    .out_ctrl(out_ctrl),
    .out_wr(out_wr),
    .out_rdy(out_rdy),

    .in_data(in_data),
    .in_ctrl(in_ctrl),
    .in_wr(in_wr),
    .in_rdy(in_rdy),
    .state(state),
	 .freeze(fifo_freeze),
    .clk(clk),
    .reset(fifo_reset),

    .cpu_addr(cpu_mem_addr),
    .cpu_in_data(cpu_mem_wr_data),
    .cpu_in_ctrl(8'd0), 
    .cpu_we(cpu_mem_we),
    .CG_out_data(CG_mem_rd_data),
    .CG_out_ctrl(),
    .cpu_en(cpu_mem_en),
	 
	 .gpu_addr(gpu_mem_addr),
    .gpu_in_data(gpu_mem_wr_data),
    .gpu_in_ctrl(8'd0), 
    .gpu_we(gpu_mem_we),
    .gpu_en(gpu_mem_en)
    
  );
  
  
  GPU_CMT gpu_instance(
    .CLK(clk), 
    .RSTB(reset_gpu),
	 .gpu_begin(gpu_start),
	 .debug_pc(debug_pc),
    .debug_enable(debug_enable),
    .debug_instr_in(debug_instr_in),
    .debug_instr_write_en(debug_instr_write_en),
    .debug_instr_out(debug_instr_out),
    .mem_addr(gpu_mem_addr),
    .mem_we(gpu_mem_we),
    .mem_en(gpu_mem_en),
    .mem_wr_data(gpu_mem_wr_data),
    .mem_rd_data(gpu_mem_rd_data),
	 .PC_END(PC_END),
	 .gpu_done(GPU_done)
    );
	
	  cpu_CMT cpu_instance(
    .CLK(clk), 
    .RSTB(reset_cpu),
    .mem_addr(cpu_mem_addr),
    .mem_we(cpu_mem_we),
    .mem_en(cpu_mem_en),
    .mem_wr_data(cpu_mem_wr_data),
    .mem_rd_data(cpu_mem_rd_data),
	 .CPU_done(CPU_done),
	 .GPU_active(gpu_start),
	 .GPU_done(GPU_done)
    );


endmodule
