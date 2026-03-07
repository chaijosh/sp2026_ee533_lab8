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

  localparam DATA_WIDTH       = 64;
  localparam CTRL_WIDTH       = 8;
  localparam FIFO_DEPTH_WORDS = 256;

	// Inputs
	reg master;
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
	
	
  // Testbench internal variables for checking
  reg [DATA_WIDTH-1:0]         sent_packet_data[0:FIFO_DEPTH_WORDS];
  reg [CTRL_WIDTH-1:0]         sent_packet_ctrl[0:FIFO_DEPTH_WORDS];
  integer                      sent_word_count;
  integer                      received_word_count;
  integer                      errors;

	// Instantiate the Unit Under Test (UUT)
	network_processor uut (
	   .memory_port_master(master),
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

  
  task send_word;
    input [DATA_WIDTH-1:0] data;
    input [CTRL_WIDTH-1:0] ctrl;
    begin
      @(posedge clk);
      in_data <= data;
      in_ctrl <= ctrl;
      in_wr   <= 1'b1;
      // Store for later checking
      sent_packet_data[sent_word_count] = data;
      sent_packet_ctrl[sent_word_count] = ctrl;
      sent_word_count = sent_word_count + 1;
      @(posedge clk);
      in_wr <= 1'b0;
    end
  endtask
  
	initial begin
		// Initialize Inputs
		out_rdy = 0;
		in_data = 0;
		in_ctrl = 0;
		in_wr = 0;
		clk = 0;
		reset = 0;
		master = 1;
		
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
	 #1200000;
	 
	 master = 0;
	 // --- TEST 4: Single-word packet ---
    $display("\n--- TEST 4: Single-word packet. ---");
    sent_word_count = 0;
    received_word_count = 0;
    out_rdy <= 1'b1;
    send_word(64'hFFFFFFFF_00000000, 8'hFF); // EOP
    // Fix the race condition by waiting for the checker to see the last word.
    wait (received_word_count == sent_word_count);
    @(posedge clk);
    $display("[%0t] INFO: Test 4 complete.", $time);

    // --- Final Check ---
    repeat(5) @(posedge clk);
    if (errors == 0) begin
      $display("\n--- ALL TESTS PASSED ---");
    end else begin
      $display("\n--- TEST FAILED with %0d errors ---", errors);
    end
    $finish;
	 end
	 
  //--================================================================
  //-- Verification and Monitoring
  //--================================================================
  always @(posedge clk) begin
    if (out_wr && out_rdy) begin
      if (received_word_count < sent_word_count) begin
        if (out_data !== sent_packet_data[received_word_count] || out_ctrl !== sent_packet_ctrl[received_word_count]) begin
          $display("[%0t] MISMATCH! Word: %0d. Expected data: %h, ctrl: %h. Got data: %h, ctrl: %h",
                 $time, received_word_count, sent_packet_data[received_word_count], sent_packet_ctrl[received_word_count],
                 out_data, out_ctrl);
          errors = errors + 1;
        end else begin
          $display("[%0t] MATCH. Word: %0d. Data: %h, Ctrl: %h",
                   $time, received_word_count, out_data, out_ctrl);
        end
        received_word_count = received_word_count + 1;
      end else begin
        $display("[%0t] UNEXPECTED DATA! Received more words than were sent in the last packet.", $time);
        errors = errors + 1;
      end
    end
  end
endmodule

