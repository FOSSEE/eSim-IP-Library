module ps2_rx (
    input clk,
    input rst,
    input ps2_clk,
    input ps2_data,
    output reg rx_done,
    output reg [7:0] rx_data
);

    reg [3:0] bit_count;
    reg [10:0] shift_reg;
    reg [2:0] ps2_clk_sync;
    
    wire falling_edge;

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            ps2_clk_sync <= 3'b111;
        end else begin
            ps2_clk_sync <= {ps2_clk_sync[1:0], ps2_clk};
        end
    end

    assign falling_edge = (ps2_clk_sync[2:1] == 2'b10);

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            bit_count <= 4'd0;
            shift_reg <= 11'd0;
            rx_done <= 1'b0;
            rx_data <= 8'd0;
        end else begin
            rx_done <= 1'b0;
            if (falling_edge) begin
                shift_reg <= {ps2_data, shift_reg[10:1]};
                if (bit_count == 4'd10) begin
                    bit_count <= 4'd0;
                    rx_done <= 1'b1;
                    rx_data <= shift_reg[9:2];
                end else begin
                    bit_count <= bit_count + 1'b1;
                end
            end
        end
    end

endmodule