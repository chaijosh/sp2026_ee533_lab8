///////////////////////////////////////////////////////////////////////////////
// vim:set shiftwidth=3 softtabstop=3 expandtab:
//
// Module: single_packet_fifo_tb.v
// Project: NF2.1
// Description: A testbench for the single_packet_fifo module.
//
///////////////////////////////////////////////////////////////////////////////
`timescale 1ns/1ps

module single_packet_fifo_tb;

  //--================================================================
  //-- Parameters
  //--================================================================
  localparam DATA_WIDTH       = 64;
  localparam CTRL_WIDTH       = 8;
  localparam FIFO_DEPTH_WORDS = 256;
  localparam CLK_PERIOD       = 200; // 100 MHz clock

  //--================================================================
  //-- Testbench Signals
  //--================================================================
  reg                          clk;
  reg                          reset;

  // DUT inputs
  reg  [DATA_WIDTH-1:0]        in_data;
  reg  [CTRL_WIDTH-1:0]        in_ctrl;
  reg                          in_wr;
  reg                          out_rdy;

  // DUT outputs
  wire [DATA_WIDTH-1:0]        out_data;
  wire [CTRL_WIDTH-1:0]        out_ctrl;
  wire                         out_wr;
  wire                         in_rdy;

  // Testbench internal variables for checking
  reg [DATA_WIDTH-1:0]         sent_packet_data[0:FIFO_DEPTH_WORDS];
  reg [CTRL_WIDTH-1:0]         sent_packet_ctrl[0:FIFO_DEPTH_WORDS];
  integer                      sent_word_count;
  integer                      received_word_count;
  integer                      errors;

  //--================================================================
  //-- DUT Instantiation
  //--================================================================
  single_packet_fifo #(
    .DATA_WIDTH(DATA_WIDTH),
    .CTRL_WIDTH(CTRL_WIDTH),
    .FIFO_DEPTH_WORDS(FIFO_DEPTH_WORDS)
  ) dut (
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

  //--================================================================
  //-- Clock Generation
  //--================================================================
  initial begin
    clk = 1'b0;
    forever #(CLK_PERIOD/2) clk = ~clk;
  end

  //--================================================================
  //-- Test Tasks
  //--================================================================
  task apply_reset;
    begin
      reset = 1'b1;
      repeat (2) @(posedge clk);
      reset = 1'b0;
      @(posedge clk);
      $display("[%0t] INFO: Reset applied.", $time);
    end
  endtask

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
	 integer i;
  //--================================================================
  //-- Main Test Sequence
  //--================================================================
  initial begin
    errors = 0;
    sent_word_count = 0;
    received_word_count = 0;

    $display("--- Starting Testbench for single_packet_fifo ---");

    // Initialize all inputs
    in_data <= 0;
    in_ctrl <= 0;
    in_wr   <= 0;
    out_rdy <= 0;

    // 1. Reset the DUT
    apply_reset();

    // --- TEST 1: Basic packet send with output stalled ---
    $display("\n--- TEST 1: Basic packet send with output stalled. ---");
    sent_word_count = 0;
    received_word_count = 0;
    out_rdy <= 1'b0; // Keep downstream stalled

    send_word(64'hAAAAAAAA_AAAAAAAA, 8'h00);
    send_word(64'hBBBBBBBB_BBBBBBBB, 8'h00);
    send_word(64'hCCCCCCCC_CCCCCCCC, 8'h01); // End of packet

    $display("[%0t] INFO: Packet sent. FIFO should be full. Waiting 5 cycles.", $time);
    repeat (5) @(posedge clk);

    $display("[%0t] INFO: Enabling output. Expecting 3 words.", $time);
    out_rdy <= 1'b1;
    // Wait until the checker has received all the words we sent for this packet.
    // This is a more robust synchronization than waiting for in_rdy.
    wait (received_word_count == sent_word_count);
    @(posedge clk);
    out_rdy <= 1'b0;
    $display("[%0t] INFO: Test 1 complete.", $time);

    // --- TEST 2: Back-to-back packets with no stalling ---
    $display("\n--- TEST 2: Back-to-back packets, no stalling. ---");
    out_rdy <= 1'b1;

    // First packet
    $display("[%0t] INFO: Sending first packet (2 words).", $time);
    sent_word_count = 0;
    received_word_count = 0;
    send_word(64'h11111111_11111111, 8'h00);
    send_word(64'h22222222_22222222, 8'h02); // EOP

    // Wait for the first packet to be fully received by the checker
    // before resetting counters and sending the next one.
    wait (received_word_count == sent_word_count);
    @(posedge clk);

    // Second packet immediately
    $display("[%0t] INFO: Sending second packet (4 words).", $time);
    sent_word_count = 0;
    received_word_count = 0;
    send_word(64'h33333333_33333333, 8'h00);
    send_word(64'h44444444_44444444, 8'h00);
    send_word(64'h55555555_55555555, 8'h00);
    send_word(64'h66666666_66666666, 8'h04); // EOP

    // Wait for the second packet to be fully received.
    wait (received_word_count == sent_word_count);
    @(posedge clk);
    $display("[%0t] INFO: Test 2 complete.", $time);

    // --- TEST 3: Oversized packet ---
    $display("\n--- TEST 3: Oversized packet (should be dropped). ---");
    sent_word_count = 0;
    received_word_count = 0; // We expect to receive 0 words
    out_rdy <= 1'b0;

    $display("[%0t] INFO: Sending %0d words without EOP...", $time, FIFO_DEPTH_WORDS);
    // Send words one-by-one to fill the buffer. This is a clearer stimulus
    // than holding in_wr high for many cycles.
    for (i = 0; i < FIFO_DEPTH_WORDS; i=i+1) begin
        @(posedge clk);
        in_data <= i;
        in_ctrl <= 0;
        in_wr   <= 1'b1;
        @(posedge clk);
        in_wr   <= 1'b0;
    end

    $display("[%0t] INFO: Sending one more word to trigger overflow.", $time);
    @(posedge clk);
    in_data <= 64'hDEADBEEF_DEADBEEF;
    in_ctrl <= 0;
    in_wr   <= 1'b1;
    @(posedge clk);
    in_wr   <= 1'b0;

    wait (in_rdy == 1'b1); // Wait for DUT to drop packet and become ready. This is correct as no output is expected.
    $display("[%0t] INFO: FIFO is ready again. Oversized packet was dropped as expected.", $time);
    $display("[%0t] INFO: Test 3 complete.", $time);

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