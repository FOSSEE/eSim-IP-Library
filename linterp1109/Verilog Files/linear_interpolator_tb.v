`timescale 1ns / 1ps

module linear_interpolator_tb;

    // Parameters
    parameter WIDTH = 8;

    // Inputs
    reg clk_fast;
    reg rst_n;
    reg valid_in;
    reg signed [WIDTH-1:0] data_in;

    // Outputs
    wire signed [WIDTH-1:0] data_out;
    wire valid_out;

    // Instantiate the Unit Under Test (UUT)
    linear_interpolator #(WIDTH) uut (
        .clk_fast(clk_fast),
        .rst_n(rst_n),
        .valid_in(valid_in),
        .data_in(data_in),
        .data_out(data_out),
        .valid_out(valid_out)
    );

    // Clock Generation (10ns period -> 100MHz)
    initial begin
        clk_fast = 0;
        forever #5 clk_fast = ~clk_fast;
    end

    // Stimulus
    initial begin
        // Setup VCD dumping
        $dumpfile("interpolator.vcd");
        $dumpvars(0, linear_interpolator_tb);

        // Initialize Inputs
        rst_n = 0;
        valid_in = 0;
        data_in = 0;

        // Apply Reset
        #15;
        rst_n = 1;

        // --- Data Point 1: Jump to 100 ---
        // Expected out: 0 -> 25 -> 50 -> 75
        #5; 
        valid_in = 1; data_in = 8'd100;
        #10; valid_in = 0; 
        
        #30; // Wait 3 clock cycles for interpolation

        // --- Data Point 2: Small jump to 120 ---
        // Expected out: 100 -> 105 -> 110 -> 115
        valid_in = 1; data_in = 8'd120;
        #10; valid_in = 0;
        
        #30;

        // --- Data Point 3: Large negative drop to -40 ---
        // Expected out: 120 -> 80 -> 40 -> 0 
        valid_in = 1; data_in = -8'd40;
        #10; valid_in = 0;
        
        #30;

        // --- Data Point 4: Flatline at -40 ---
        // Expected out: -40 -> -40 -> -40 -> -40
        valid_in = 1; data_in = -8'd40;
        #10; valid_in = 0;

        #40;

        $display("Simulation Complete.");
        $finish;
    end

endmodule