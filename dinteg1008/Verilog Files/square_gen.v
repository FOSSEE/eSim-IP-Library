`timescale 1ns / 1ps

module square_gen (
    input  wire       clk,
    input  wire       rst_n,
    output reg  [7:0] wave_out
);
    
    reg [6:0] counter; // 7-bit counter (0 to 127)

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            counter  <= 7'd0;
            wave_out <= 8'd128;
        end else begin
            counter <= counter + 1'b1;
            
            // Toggle output between High and Low every 64 clock cycles
            if (counter < 7'd64) begin
                wave_out <= 8'd192; // Positive amplitude (charges integrator)
            end else begin
                wave_out <= 8'd64;  // Negative amplitude (discharges integrator)
            end
        end
    end
    
endmodule