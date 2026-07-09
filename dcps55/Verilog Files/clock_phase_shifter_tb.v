`timescale 1ns / 1ps

module clock_phase_shifter_tb;

    // Inputs
    reg clk_in;
    reg rst_n;
    reg en;
    reg [1:0] phase_sel;

    // Outputs
    wire clk_0;
    wire clk_90;
    wire clk_180;
    wire clk_270;
    wire clk_out;

    // Instantiate the Unit Under Test (UUT)
    clock_phase_shifter uut (
        .clk_in(clk_in),
        .rst_n(rst_n),
        .en(en),
        .phase_sel(phase_sel),
        .clk_0(clk_0),
        .clk_90(clk_90),
        .clk_180(clk_180),
        .clk_270(clk_270),
        .clk_out(clk_out)
    );

    // Master Clock Generation: 40 MHz (25ns period) -> Output will be 10 MHz (100ns period)
    initial begin
        clk_in = 0;
        forever #12.5 clk_in = ~clk_in;
    end

    // Simulation Stimulus
    initial begin
        // 1. Setup VCD file dumping for GTKWave visualization
        $dumpfile("clock_phase_shifter.vcd");
        $dumpvars(0, clock_phase_shifter_tb);

        // 2. Initialization and Reset
        rst_n = 0;
        en = 0;
        phase_sel = 2'b00; // Start by selecting 0-degree phase
        
        #50; // Hold reset
        rst_n = 1; // Release reset
        
        #25;
        en = 1;    // Enable the clock generator
        $display("Time: %0t | System Enabled. Phase selected: 0 Degrees", $time);

        // --- TEST 1: Observe Phase 0 ---
        #300; 

        // --- TEST 2: Dynamic Switch to Phase 90 ---
        // Notice we switch it right in the middle of a clock cycle to test the glitch filter!
        phase_sel = 2'b01; 
        $display("Time: %0t | Switching to 90 Degrees. Watch for glitch suppression...", $time);
        #300;

        // --- TEST 3: Dynamic Switch to Phase 180 ---
        phase_sel = 2'b10;
        $display("Time: %0t | Switching to 180 Degrees...", $time);
        #300;

        // --- TEST 4: Dynamic Switch to Phase 270 ---
        phase_sel = 2'b11;
        $display("Time: %0t | Switching to 270 Degrees...", $time);
        #300;

        // --- TEST 5: Switch back to Phase 0 to complete loop ---
        phase_sel = 2'b00;
        $display("Time: %0t | Looping back to 0 Degrees...", $time);
        #300;

        // 3. End simulation gracefully
        $display("Time: %0t | Simulation Complete.", $time);
        $finish;
    end

endmodule