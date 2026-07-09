`timescale 1ns / 1ps

module integrator (
    input  wire        clk,        // System clock
    input  wire        rst_n,      // Active-low reset
    input  wire [7:0]  data_in,    // 8-bit ADC input (analog waveform)
    
    output reg  [7:0]  data_out    // 8-bit DAC output (the integral)
);

    // Calculate the scaled integration step
    // We divide by 32 (>> 5) to slow down the digital charging/discharging,
    // perfectly mimicking the Time Constant (RC) of an analog capacitor.
    wire [7:0] step = (data_in >= 8'd128) ? ((data_in - 8'd128) >> 5) : ((8'd128 - data_in) >> 5);

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            data_out <= 8'd128;   // Default to mid-rail (2.5V)
        end else begin
            // Execute Discrete Integration: y[n] = y[n-1] + x[n]
            if (data_in >= 8'd128) begin
                // Positive Integration (Charging Capacitor)
                // Use 9-bit math to prevent invisible overflow wrapping
                if ({1'b0, data_out} + {1'b0, step} > 9'd255) 
                    data_out <= 8'd255; 
                else 
                    data_out <= data_out + step;
                    
            end else begin
                // Negative Integration (Discharging Capacitor)
                if (data_out < step) 
                    data_out <= 8'd0; 
                else 
                    data_out <= data_out - step;
            end
        end
    end

endmodule