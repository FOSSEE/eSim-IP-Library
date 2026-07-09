`timescale 1ns / 1ps

module dds_sine (
    input  wire        clk,          // High-speed system clock
    input  wire        rst_n,        // Active-low asynchronous reset
    input  wire [15:0] tuning_word,  // Controls the output frequency
    
    output reg  [7:0]  sine_out      // 8-bit Digital Sine Wave Output
);

    //------------------------------------------------------------------------
    // 1. THE PHASE ACCUMULATOR
    //------------------------------------------------------------------------
    reg [15:0] phase_acc;

    always @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            phase_acc <= 16'd0;
        end else begin
            // Continuously add the tuning word. 
            // It will naturally overflow and wrap around, creating a sawtooth phase.
            phase_acc <= phase_acc + tuning_word;
        end
    end

    // Extract the top 5 bits of the accumulator to act as our LUT address (0 to 31)
    wire [4:0] lut_index = phase_acc[15:11];

    //------------------------------------------------------------------------
    // 2. THE SINE WAVE LOOKUP TABLE (LUT)
    //------------------------------------------------------------------------
    // This combinational block maps the linear phase (0 to 31) into 
    // a non-linear sine wave amplitude (0 to 255) using pre-calculated values.
    
    always @(*) begin
        case (lut_index)
            // Quadrant 1 (0 to 90 degrees)
            5'd0  : sine_out = 8'd128;
            5'd1  : sine_out = 8'd153;
            5'd2  : sine_out = 8'd177;
            5'd3  : sine_out = 8'd199;
            5'd4  : sine_out = 8'd218;
            5'd5  : sine_out = 8'd234;
            5'd6  : sine_out = 8'd246;
            5'd7  : sine_out = 8'd253;
            
            // Quadrant 2 (90 to 180 degrees)
            5'd8  : sine_out = 8'd255; // Peak Positive
            5'd9  : sine_out = 8'd253;
            5'd10 : sine_out = 8'd246;
            5'd11 : sine_out = 8'd234;
            5'd12 : sine_out = 8'd218;
            5'd13 : sine_out = 8'd199;
            5'd14 : sine_out = 8'd177;
            5'd15 : sine_out = 8'd153;
            
            // Quadrant 3 (180 to 270 degrees)
            5'd16 : sine_out = 8'd128; // Zero Crossing
            5'd17 : sine_out = 8'd103;
            5'd18 : sine_out = 8'd79;
            5'd19 : sine_out = 8'd57;
            5'd20 : sine_out = 8'd38;
            5'd21 : sine_out = 8'd22;
            5'd22 : sine_out = 8'd10;
            5'd23 : sine_out = 8'd3;
            
            // Quadrant 4 (270 to 360 degrees)
            5'd24 : sine_out = 8'd0;   // Peak Negative
            5'd25 : sine_out = 8'd3;
            5'd26 : sine_out = 8'd10;
            5'd27 : sine_out = 8'd22;
            5'd28 : sine_out = 8'd38;
            5'd29 : sine_out = 8'd57;
            5'd30 : sine_out = 8'd79;
            5'd31 : sine_out = 8'd103;
            
            default : sine_out = 8'd128; // Safe fallback
        endcase
    end

endmodule