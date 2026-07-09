`timescale 1ns / 1ps

module tb_debouncer;

    // Inputs
    reg clk;
    reg rst_n;
    reg button_in;

    // Outputs
    wire button_out;

    // Instantiate the Unit Under Test (UUT)
    // We override the parameter to '50' for faster simulation viewing
    debouncer #(.DEBOUNCE_LIMIT(16'd50)) uut (
        .clk(clk), 
        .rst_n(rst_n), 
        .button_in(button_in), 
        .button_out(button_out)
    );

    // Generate 10 MHz System Clock (100ns period)
    initial begin
        clk = 0;
        forever #50 clk = ~clk;
    end

    // TASK: Simulate a terrible, cheap mechanical button bouncing
    task mechanical_press;
        begin
            $display("Time: %0t ns | Physical Button Pressed! (Bouncing starts)", $time);
            button_in = 1; #120;  // Initial contact
            button_in = 0; #80;   // Bounces off
            button_in = 1; #200;  // Hits again
            button_in = 0; #350;  // Bounces off harder
            button_in = 1; #90;   // Hits again
            button_in = 0; #40;   // Micro bounce
            button_in = 1;        // Finally settles and stays connected
        end
    endtask

    task mechanical_release;
        begin
            $display("Time: %0t ns | Physical Button Released! (Bouncing starts)", $time);
            button_in = 0; #150;  
            button_in = 1; #90;   
            button_in = 0; #210;  
            button_in = 1; #50;   
            button_in = 0;        // Finally settles open
        end
    endtask

    // Main Test Stimulus
    initial begin
        // Setup GTKWave Output
        $dumpfile("debounce_sim.vcd");
        $dumpvars(0, tb_debouncer);

        // Initialize Inputs
        rst_n = 0;
        button_in = 0;

        // Release Reset
        #200;
        rst_n = 1;

        // 1. Simulate a messy button press
        #500;
        mechanical_press();

        // Wait for the debouncer to recognize the solid signal
        #10000;

        // 2. Simulate a messy button release
        mechanical_release();

        #10000;
        $display("--- Simulation Complete ---");
        $finish;
    end

endmodule