`timescale 1ns / 1ps

module tb_integrator;

    reg clk;
    reg rst_n;
    
    wire [7:0] square_wave; // Output from generator, input to integrator
    wire [7:0] triangle_wave; // Output from integrator

    // Instantiate the Square Wave Generator
    square_gen gen (
        .clk(clk),
        .rst_n(rst_n),
        .wave_out(square_wave)
    );

    // Instantiate the Digital Integrator
    integrator uut (
        .clk(clk),
        .rst_n(rst_n),
        .data_in(square_wave),
        .data_out(triangle_wave)
    );

    // 10 MHz System Clock (100ns period)
    initial begin
        clk = 0;
        forever #50 clk = ~clk; 
    end

    initial begin
        // Setup GTKWave dump
        $dumpfile("integrator_sim.vcd");
        $dumpvars(0, tb_integrator);

        // Initialize reset
        rst_n = 0;
        
        // Hold reset for a couple of clock cycles
        #200;
        rst_n = 1;

        // The square wave takes 12.8 microseconds for a full period.
        // We will run the simulation for 50 microseconds to see a few full waves.
        #50000;
        
        $display("--- Digital Simulation Complete ---");
        $finish;
    end

endmodule