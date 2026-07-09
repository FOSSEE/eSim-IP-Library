`timescale 1ns / 1ps

module triangle_gen (
    input  wire       clk,
    input  wire       rst_n,
    output reg  [7:0] wave_out
);
    reg going_up;

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            wave_out <= 8'd128; // Start at middle voltage
            going_up <= 1'b1;
        end else begin
            if (going_up) begin
                wave_out <= wave_out + 8'd1;
                if (wave_out == 8'd254) going_up <= 1'b0; // Hit ceiling, reverse
            end else begin
                wave_out <= wave_out - 8'd1;
                if (wave_out == 8'd1) going_up <= 1'b1;   // Hit floor, reverse
            end
        end
    end
endmodule