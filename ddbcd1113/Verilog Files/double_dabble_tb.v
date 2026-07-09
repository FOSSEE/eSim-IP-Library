`timescale 1ns / 1ps

module double_dabble_tb;

    // Inputs
    reg clk;
    reg rst_n;
    reg start;
    reg [7:0] bin_in;

    // Outputs
    wire [11:0] bcd_out;
    wire done;

    // Instantiate the Unit Under Test (UUT)
    double_dabble uut (
        .clk(clk),
        .rst_n(rst_n),
        .start(start),
        .bin_in(bin_in),
        .bcd_out(bcd_out),
        .done(done)
    );

    // Clock generation (10ns period -> 100MHz)
    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end

    // Test Stimulus
    initial begin
        // 1. Setup VCD file dumping for GTKWave visualization
        $dumpfile("double_dabble.vcd");
        $dumpvars(0, double_dabble_tb);

        // 2. Initialize Inputs & Apply Reset
        rst_n  = 0;
        start  = 0;
        bin_in = 0;

        #20;
        rst_n = 1; // Release reset
        #15;       // Offset from clock edge to avoid race conditions

        // --- TEST CASE 1: Maximum 8-bit value (255) ---
        $display("--- Starting Test Case 1 ---");
        bin_in = 8'd255;
        start  = 1;
        #10;
        start  = 0; // Pulse start for exactly 1 clock cycle

        wait(done == 1'b1); // Block until FSM asserts done
        #10;
        // Print result in Hex (%x) so BCD prints visually as decimal numbers
        $display("Time: %0t | Binary: %d | BCD Output: %x (Expected: 255)", $time, bin_in, bcd_out);

        // --- TEST CASE 2: Random mid-range value (123) ---
        #30;
        $display("--- Starting Test Case 2 ---");
        bin_in = 8'd123;
        start  = 1;
        #10;
        start  = 0;

        wait(done == 1'b1);
        #10;
        $display("Time: %0t | Binary: %d | BCD Output: %x (Expected: 123)", $time, bin_in, bcd_out);

        // --- TEST CASE 3: Single digit value (9) ---
        #30;
        $display("--- Starting Test Case 3 ---");
        bin_in = 8'd9;
        start  = 1;
        #10;
        start  = 0;

        wait(done == 1'b1);
        #10;
        $display("Time: %0t | Binary: %d | BCD Output: %x (Expected: 009)", $time, bin_in, bcd_out);

        // 3. End simulation gracefully
        #50;
        $display("--- Simulation Complete ---");
        $finish;
    end

endmodule