module vga_timing_gen (
    input wire clk,      // 25 MHz Pixel Clock
    input wire rst,      // Asynchronous reset
    output reg hsync,    // Horizontal sync pulse
    output reg vsync,    // Vertical sync pulse
    output wire video_on,// High when in the 640x480 visible area
    output reg [9:0] x_pos, // Current pixel column (0 to 799)
    output reg [9:0] y_pos  // Current pixel row (0 to 524)
);

    // --- VGA 640x480 @ 60Hz Industry Standard Parameters ---
    parameter H_DISPLAY = 640;
    parameter H_FRONT   = 16;
    parameter H_SYNC    = 96;
    parameter H_BACK    = 48;
    parameter H_TOTAL   = 800; // 640 + 16 + 96 + 48

    parameter V_DISPLAY = 480;
    parameter V_FRONT   = 10;
    parameter V_SYNC    = 2;
    parameter V_BACK    = 33;
    parameter V_TOTAL   = 525; // 480 + 10 + 2 + 33

    // --- Horizontal Pixel Counter ---
    always @(posedge clk or posedge rst) begin
        if (rst)
            x_pos <= 10'd0;
        else if (x_pos == H_TOTAL - 1)
            x_pos <= 10'd0;
        else
            x_pos <= x_pos + 10'd1;
    end

    // --- Vertical Line Counter ---
    // Only increments when the horizontal counter finishes a full row
    always @(posedge clk or posedge rst) begin
        if (rst)
            y_pos <= 10'd0;
        else if (x_pos == H_TOTAL - 1) begin
            if (y_pos == V_TOTAL - 1)
                y_pos <= 10'd0;
            else
                y_pos <= y_pos + 10'd1;
        end
    end

    // --- Sync Pulse Generation ---
    // Standard VGA requires active-low sync pulses
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            hsync <= 1'b1;
            vsync <= 1'b1;
        end else begin
            hsync <= ~((x_pos >= (H_DISPLAY + H_FRONT)) && (x_pos < (H_DISPLAY + H_FRONT + H_SYNC)));
            vsync <= ~((y_pos >= (V_DISPLAY + V_FRONT)) && (y_pos < (V_DISPLAY + V_FRONT + V_SYNC)));
        end
    end

    // --- Video On Flag ---
    // True only when the counters are inside the visible 640x480 grid
    assign video_on = (x_pos < H_DISPLAY) && (y_pos < V_DISPLAY);

endmodule