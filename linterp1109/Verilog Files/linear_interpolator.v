`timescale 1ns / 1ps

module linear_interpolator (
    input  wire              clk_fast,  // High-speed master clock
    input  wire              rst_n,     // Active-low asynchronous reset
    input  wire              valid_in,  // Pulses HIGH every 4th clock cycle
    input  wire signed [7:0] data_in,   // New low-sample-rate data point
    
    output reg  signed [7:0] data_out,  // Smoothed high-sample-rate output
    output reg               valid_out  // Output valid strobe
);

    reg signed [7:0] y1;       // The target data point we are moving towards
    reg signed [7:0] step_val; // The computed fractional step

    always @(posedge clk_fast or negedge rst_n) begin
        if (!rst_n) begin
            y1        <= 8'd0;
            step_val  <= 8'd0;
            data_out  <= 8'd0;
            valid_out <= 1'b0;
        end else begin
            if (valid_in) begin
                // A new sample arrived. 
                // The old target (y1) becomes our exact starting point.
                data_out <= y1; 
                
                // Store the new target
                y1 <= data_in;
                
                // Calculate the fractional step: (New Target - Old Target) / 4
                step_val <= (data_in - y1) >>> 2; 
                
                valid_out <= 1'b1;
            end else begin
                // No new sample. Smoothly step towards the target.
                data_out  <= data_out + step_val;
                valid_out <= 1'b1;
            end
        end
    end

endmodule