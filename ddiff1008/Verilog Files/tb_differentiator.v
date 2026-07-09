`timescale 1ns / 1ps

module tb_differentiator;

    reg clk;
    reg rst_n;
    reg [7:0] data_in;
    wire [7:0] data_out;

    // Instantiate the Unit Under Test (UUT)
    differentiator uut (
        .clk(clk), 
        .rst_n(rst_n), 
        .data_in(data_in), 
        .data_out(data_out)
    );

    // 10 MHz Clock
    initial begin
        clk = 0;
        forever #50 clk = ~clk; 
    end

    // State variable for our artificial triangle wave generator
    reg going_up;

    initial begin
        $dumpfile("diff_sim.vcd");
        $dumpvars(0, tb_differentiator);

        // Initialize Inputs
        rst_n = 0;
        data_in = 8'd128;
        going_up = 1;

        #200;
        rst_n = 1;

        // Run for enough time to see the triangle complete a few cycles
        #30000;
        $display("--- Simulation Complete ---");
        $finish;
    end

    // Artificial Triangle Wave Generator
    always @(posedge clk) begin
        if (rst_n) begin
            if (going_up) begin
                data_in <= data_in + 8'd2; // Constant positive slope
                if (data_in >= 8'd200) going_up <= 0; // Peak reached, reverse direction
            end else begin
                data_in <= data_in - 8'd2; // Constant negative slope
                if (data_in <= 8'd50) going_up <= 1; // Trough reached, reverse direction
            end
        end
    end

endmodule