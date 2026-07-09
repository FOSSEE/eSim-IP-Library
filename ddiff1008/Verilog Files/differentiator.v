`timescale 1ns / 1ps

module differentiator (
    input  wire        clk,        // System clock
    input  wire        rst_n,      // Active-low reset
    input  wire [7:0]  data_in,    // 8-bit ADC input (analog waveform)
    
    output reg  [7:0]  data_out    // 8-bit DAC output (the derivative)
);

    // Register to hold the previous clock cycle's data (x[n-1])
    reg [7:0] data_prev;

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            data_prev <= 8'd128;   // Default to mid-rail
            data_out  <= 8'd128;   // Default derivative of 0 (flat slope)
        end else begin
            // 1. Shift the pipeline: capture current data for the next cycle
            data_prev <= data_in;

            // 2. Perform the First-Order Difference Equation: y[n] = x[n] - x[n-1]
            // We scale the difference by dividing by 2 (>> 1) to prevent 8-bit overflow,
            // and we add a 128 DC-offset so negative slopes don't roll under zero.
            
            if (data_in >= data_prev) begin
                // Positive slope (climbing) - Multiply difference by 64
                data_out <= 8'd128 + ((data_in - data_prev) >> 1);
            end else begin
                // Negative slope (falling) - Multiply difference by 64
                data_out <= 8'd128 - ((data_prev - data_in) >> 1);
            end
        end
    end

endmodule