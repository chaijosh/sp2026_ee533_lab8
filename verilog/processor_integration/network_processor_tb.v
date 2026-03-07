`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:00:04 03/07/2026
// Design Name:   network_processor
// Module Name:   Z:/EE533/lab8_sp26/verilog/processor_integration/network_processor_tb.v
// Project Name:  processor_integration
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: network_processor
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module network_processor_tb;

	// Inputs
	reg out_rdy;
	reg [63:0] in_data;
	reg [7:0] in_ctrl;
	reg in_wr;
	reg clk;
	reg reset;

	// Outputs
	wire [63:0] out_data;
	wire [7:0] out_ctrl;
	wire out_wr;
	wire in_rdy;

	// Instantiate the Unit Under Test (UUT)
	network_processor uut (
		.out_data(out_data), 
		.out_ctrl(out_ctrl), 
		.out_wr(out_wr), 
		.out_rdy(out_rdy), 
		.in_data(in_data), 
		.in_ctrl(in_ctrl), 
		.in_wr(in_wr), 
		.in_rdy(in_rdy), 
		.clk(clk), 
		.reset(reset)
	);
	parameter CLK_PERIOD = 200;
	integer i;
	
	initial begin
		// Initialize Inputs
		out_rdy = 0;
		in_data = 0;
		in_ctrl = 0;
		in_wr = 0;
		clk = 0;
		reset = 0;
		
		forever #(CLK_PERIOD/2) clk = ~clk;
	end
		initial begin
    $display("Starting Testbench for basic CPU operations...");

    // 1. Apply Reset
    reset = 1'b0;
    #(CLK_PERIOD * 5); // Hold reset for 2 cycles
    reset = 1'b1;
    $display("Reset released at time %0t", $time);
    
    // --- Test Setup ---
    // Wait for one cycle after reset before accessing internal signals
    #(CLK_PERIOD); 

    // 2. Initialize Register File with test values
    // Hierarchical access is used to preset the DUT's internal state.
    $display("Initializing source registers...");
	 for (i = 0; i < 128; i = i + 1) begin
			uut.cpu_instance.reg_file[i] = 64'd0;
		end
	 #(CLK_PERIOD * 20);
	end
endmodule

