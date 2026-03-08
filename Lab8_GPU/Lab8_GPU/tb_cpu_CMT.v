`timescale 1ns / 1ps

module tb_cpu_CMT();

    reg CLK;
    reg RSTB;

    // Debug Ports
    reg  [8:0]  debug_pc;
    reg         debug_enable;
    reg  [31:0] debug_instr_in;
    reg         debug_instr_write_en;
    wire [31:0] debug_instr_out;
    
    reg  [7:0]  debug_addr_in;
    reg  [63:0] debug_data_in;
    reg         debug_data_write_en;
    wire [63:0] debug_data_out;
    wire [8:0]  PC_END;

    // Instantiate the CPU
    cpu_CMT uut (
        .CLK(CLK),
        .RSTB(RSTB),
        .debug_pc(debug_pc),
        .debug_enable(debug_enable),
        .debug_instr_in(debug_instr_in),
        .debug_instr_write_en(debug_instr_write_en),
        .debug_instr_out(debug_instr_out),
        .debug_addr_in(debug_addr_in),
        .debug_data_in(debug_data_in),
        .debug_data_write_en(debug_data_write_en),
        .debug_data_out(debug_data_out),
        .PC_END(PC_END)
    );

    // 100MHz Clock
    always #5 CLK = ~CLK;

    initial begin
        // Initialize Signals
        CLK = 0;
        RSTB = 0; // Hold CPU in reset
        debug_enable = 1;
        debug_instr_write_en = 0;
        debug_data_write_en = 0;
        
        // Wait a few cycles
        #25; 

        // ==========================================
        // 1. PRE-LOAD DATA MEMORY
        // ==========================================
        @(negedge CLK);
        debug_data_write_en = 1;

        debug_addr_in = 8'd0; debug_data_in = 64'hc0e5_4097_3f80_4000; @(negedge CLK); // Vector 1 ($1)
        debug_addr_in = 8'd1; debug_data_in = 64'h4097_4097_4000_4080; @(negedge CLK); // Vector 2 ($2)
        
        // New: Load a test Bias Vector. I included some negative values (c000) 
        // to ensure the ReLU zero-masking works properly.
        debug_addr_in = 8'd2; debug_data_in = 64'hc000_4000_c000_4000; @(negedge CLK); // Bias Vector ($6)
        
        debug_data_write_en = 0; // Disable data write

        // ==========================================
        // 2. PRE-LOAD INSTRUCTION MEMORY
        // ==========================================
        debug_instr_write_en = 1;

        // Load Vectors from Data Memory to Registers
        debug_pc = 9'd0;  debug_instr_in = 32'h8C010000; @(negedge CLK); // LW $1, 0($0) -> Load Vec 1
        debug_pc = 9'd1;  debug_instr_in = 32'h8C020001; @(negedge CLK); // LW $2, 1($0) -> Load Vec 2
        debug_pc = 9'd2;  debug_instr_in = 32'h8C060002; @(negedge CLK); // LW $6, 2($0) -> Load Bias to $6
        
        // Pipeline Data Hazard NOPs (Wait 5 cycles for LW to reach Writeback stage)
        debug_pc = 9'd3;  debug_instr_in = 32'h00000000; @(negedge CLK); 
        debug_pc = 9'd4;  debug_instr_in = 32'h00000000; @(negedge CLK);
        debug_pc = 9'd5;  debug_instr_in = 32'h00000000; @(negedge CLK);
        debug_pc = 9'd6;  debug_instr_in = 32'h00000000; @(negedge CLK);
        debug_pc = 9'd7;  debug_instr_in = 32'h00000000; @(negedge CLK);
          
        // ADDFP Operation
        debug_pc = 9'd8;  debug_instr_in = 32'h10221800; @(negedge CLK); // ADDFP $3, $1, $2
        
        // MULTFP Operation
        debug_pc = 9'd12; debug_instr_in = 32'h14222000; @(negedge CLK); // MULTFP $4, $1, $2
      
        // MAC Operation
        debug_pc = 9'd16; debug_instr_in = 32'h1C223980; @(negedge CLK); // MAC $7, $6, $1, $2
        
        // Pipeline Data Hazard NOPs (Wait 5 cycles for MAC to reach Writeback stage)
        debug_pc = 9'd17; debug_instr_in = 32'h00000000; @(negedge CLK);
        debug_pc = 9'd18; debug_instr_in = 32'h00000000; @(negedge CLK);
        debug_pc = 9'd19; debug_instr_in = 32'h00000000; @(negedge CLK);
        debug_pc = 9'd20; debug_instr_in = 32'h00000000; @(negedge CLK);
        debug_pc = 9'd21; debug_instr_in = 32'h00000000; @(negedge CLK);

        // ReLU Operation
        debug_pc = 9'd22; debug_instr_in = 32'h18E04000; @(negedge CLK); // RELU $8, $7 -> $8 = MAX(0, $7)
        
        // Pipeline Data Hazard NOPs (Wait 5 cycles for ReLU to reach Writeback stage)
        debug_pc = 9'd23; debug_instr_in = 32'h00000000; @(negedge CLK);
        debug_pc = 9'd24; debug_instr_in = 32'h00000000; @(negedge CLK);
        debug_pc = 9'd25; debug_instr_in = 32'h00000000; @(negedge CLK);
        debug_pc = 9'd26; debug_instr_in = 32'h00000000; @(negedge CLK);
        debug_pc = 9'd27; debug_instr_in = 32'h00000000; @(negedge CLK);

        // Store Results back to Memory
        debug_pc = 9'd28; debug_instr_in = 32'hAC030003; @(negedge CLK); // SW $3, 3($0) -> Store ADDFP
        debug_pc = 9'd29; debug_instr_in = 32'hAC040004; @(negedge CLK); // SW $4, 4($0) -> Store MULTFP
        debug_pc = 9'd30; debug_instr_in = 32'hAC070005; @(negedge CLK); // SW $7, 5($0) -> Store MAC
        debug_pc = 9'd31; debug_instr_in = 32'hAC080006; @(negedge CLK); // SW $8, 6($0) -> Store ReLU
        
        debug_pc = 9'd34; debug_instr_in = 32'hFC000000; @(negedge CLK); // HALT
        debug_pc = 9'd35; debug_instr_in = 32'h00000000; @(negedge CLK); // Infinite NOP buffer
        
        debug_instr_write_en = 0; // Disable instruction write
        debug_enable = 0; // Release debug control so CPU can run memory
        
        // ==========================================
        // 3. EXECUTE
        // ==========================================
        @(negedge CLK);
        RSTB = 1; // Start CPU
        
        #(60 * 10); // Wait enough cycles for the pipeline to finish
        
        // ==========================================
        // 4. VERIFY RESULTS
        // ==========================================
        @(negedge CLK);
        debug_enable = 1; // Re-enable debug mode
        
        // Read Address 3 (MAC Result)
        debug_addr_in = 8'd3;
        @(negedge CLK); @(negedge CLK); // Wait for block RAM read latency
        $display("-------------------------------------------------");
        $display("Raw ADD Result (Addr 3) : %h", debug_data_out);
		  
        
        // Read Address 4 (MAC + ReLU Result)
        debug_addr_in = 8'd4;
        @(negedge CLK); @(negedge CLK); // Wait for block RAM read latency
        $display("MULT Result(Addr 4) : %h", debug_data_out);
        $display("-------------------------------------------------");
		  debug_addr_in = 8'd5;
        @(negedge CLK); @(negedge CLK); // Wait for block RAM read latency
        $display("-------------------------------------------------");
        $display("Raw MAC Result (Addr 3) : %h", debug_data_out);
        
		  
		  debug_addr_in = 8'd6;
        @(negedge CLK); @(negedge CLK); // Wait for block RAM read latency
        $display("MAC+ReLU Result(Addr 4) : %h", debug_data_out);
        $display("-------------------------------------------------");
        
        $stop;
    end
endmodule