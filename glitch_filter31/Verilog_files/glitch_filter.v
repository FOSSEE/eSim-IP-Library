`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// IP Block Name: Glitch Filter
// Description: Continuous-time sampling frontline conditioning filter block. 
//              Suppresses spurious high-frequency transient anomalies.
//////////////////////////////////////////////////////////////////////////////////

module glitch_filter_ip (
    input  wire clk0,       // Reference system operational sampling clock
    input  wire rst_n0,     // Active-low system reset register initialization
    input  wire async_in0,  // Raw noisy asynchronous input line trace

    output reg  sync_out0   // Clean, validated glitch-free output signal
);

    // Multi-stage history capturing shift register tracking line
    reg [2:0] filter_reg;

    always @(posedge clk0 or negedge rst_n0) begin
        if (!rst_n0) begin
            filter_reg <= 3'b000;
            sync_out0  <= 1'b0;
        end else begin
            // Shift consecutive raw input samples through the pipeline registers
            filter_reg <= {filter_reg[1:0], async_in0};

            // Full window pipeline check logic (Majority voting sequence gating)
            if (filter_reg == 3'b111) begin
                sync_out0 <= 1'b1; // Drive output high only if signal is stable
            end else if (filter_reg == 3'b000) begin
                sync_out0 <= 1'b0; // Drive output low only if signal is stable
            end
            // Hold the previous stable state if samples are mixed (transient glitch detected)
        end
    end

endmodule