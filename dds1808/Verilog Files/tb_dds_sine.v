`timescale 1ns / 1ps

module tb_dds_sine;

    // Inputs
    reg clk;
    reg rst_n;
    reg [15:0] tuning_word;

    // Outputs
    wire [7:0] sine_out;

    // Instantiate the Unit Under Test (UUT)
    dds_sine uut (
        .clk(clk), 
        .rst_n(rst_n), 
        .tuning_word(tuning_word), 
        .sine_out(sine_out)
    );

    // Generate 10 MHz System Clock (100ns period -> 50ns half-period)
    initial begin
        clk = 0;
        forever #50 clk = ~clk;
    end

    // Main Test Stimulus
    initial begin
        // Setup GTKWave Output
        $dumpfile("dds_sim.vcd");
        $dumpvars(0, tb_dds_sine);

        // Initialize Inputs
        rst_n = 0;
        tuning_word = 16'd0;

        // Release Reset
        #200;
        rst_n = 1;
        $display("--- Starting DDS Synthesizer Simulation ---");

        // 1. Slow Frequency Sine Wave
        tuning_word = 16'd500; 
        #50000; // Let it run long enough to draw a few full waves

        // 2. Fast Frequency Sine Wave (4x faster)
        tuning_word = 16'd2000;
        #50000;
        
        $display("--- Simulation Complete ---");
        $finish;
    end

endmodule