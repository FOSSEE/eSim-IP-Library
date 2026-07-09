`timescale 1ns / 1ps

module debouncer #(
    parameter DEBOUNCE_LIMIT = 16'd2000
)(
    input  wire clk,          // High-speed system clock (e.g., 10 MHz)
    input  wire rst_n,        // Active-low reset
    input  wire button_in,    // The messy, bouncing physical button

    output reg  button_out    // The clean, debounced digital output
);

    //------------------------------------------------------------------------
    // 1. ASYNCHRONOUS SYNCHRONIZER
    //------------------------------------------------------------------------
    // A physical button press is asynchronous. We MUST align it to our clock.
    reg sync_1, sync_2;

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            sync_1 <= 1'b0;
            sync_2 <= 1'b0;
        end else begin
            sync_1 <= button_in;
            sync_2 <= sync_1;
        end
    end

    //------------------------------------------------------------------------
    // 2. THE STABILITY COUNTER
    //------------------------------------------------------------------------
    reg [15:0] counter;

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            counter    <= 16'd0;
            button_out <= 1'b0;
        end else begin
            // If the synchronized input matches our current output, 
            // the signal is stable. Do nothing and keep the counter at 0.
            if (sync_2 == button_out) begin
                counter <= 16'd0;
            end 
            // If they don't match, a transition (or a bounce) is happening!
            else begin
                counter <= counter + 16'd1;
                
                // If the signal has remained stable for the entire DEBOUNCE_LIMIT...
                if (counter >= DEBOUNCE_LIMIT) begin
                    button_out <= sync_2; // Accept the new state!
                    counter    <= 16'd0;  // Reset counter
                end
            end
        end
    end

endmodule