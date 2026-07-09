`timescale 1ns / 1ps

module tb_digital_tachometer;

    // Inputs
    reg clk_sys;
    reg rst_n;
    reg sensor_in;

    // Outputs
    wire [15:0] period_count;
    wire        data_valid;

    // Instantiate the Unit Under Test (UUT)
    digital_tachometer uut (
        .clk_sys(clk_sys), 
        .rst_n(rst_n), 
        .sensor_in(sensor_in), 
        .period_count(period_count), 
        .data_valid(data_valid)
    );

    // Generate 10 MHz System Clock (100ns period -> 50ns half-period)
    initial begin
        clk_sys = 0;
        forever #50 clk_sys = ~clk_sys;
    end

    // Task to simulate a messy, asynchronous motor pulse
    task generate_sensor_pulse;
        begin
            // The motor pulse doesn't care about system clock edges
            #17;       
            sensor_in = 1;
            #1500;     // Pulse stays high for a while
            sensor_in = 0;
        end
    endtask

    // Main Test Stimulus
    initial begin
        // Setup GTKWave Output
        $dumpfile("tachometer.vcd");
        $dumpvars(0, tb_digital_tachometer);

        // Initialize Inputs
        rst_n = 0;
        sensor_in = 0;

        // Release Reset
        #200;
        rst_n = 1;
        $display("--- Starting Digital Tachometer Simulation ---");

        // 1. Initial Pulse to start the "stopwatch"
        #300;
        generate_sensor_pulse();

        // 2. Slow Motor Rotation (Wait exactly 500,000 ns = 5,000 clock cycles)
        #500000;
        generate_sensor_pulse();

        // 3. Fast Motor Rotation (Wait exactly 250,000 ns = 2,500 clock cycles)
        #250000;
        generate_sensor_pulse();
        
        // Let the last valid pulse propagate
        #1000;
        $display("--- Simulation Complete ---");
        $finish;
    end

    // Monitor Output Data
    always @(posedge clk_sys) begin
        if (data_valid) begin
            $display("Time: %0t ns | Motor Lap Complete! | Clock Ticks Counted: %0d", $time, period_count);
        end
    end

endmodule