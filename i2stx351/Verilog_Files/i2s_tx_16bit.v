module i2s_tx_16bit (
    input bclk,
    input rst,
    input [15:0] left_data,
    input [15:0] right_data,
    output reg lrclk,
    output reg sdata
);

    reg [4:0] bit_counter;
    reg [31:0] shift_reg;

    always @(posedge bclk or posedge rst) begin
        if (rst) begin
            bit_counter <= 5'd0;
            lrclk <= 1'b0;
            sdata <= 1'b0;
            shift_reg <= 32'd0;
        end else begin
            
            bit_counter <= bit_counter + 1'b1;
            
            if (bit_counter == 5'd15)
                lrclk <= 1'b1; 
            else if (bit_counter == 5'd31)
                lrclk <= 1'b0; 

            if (bit_counter == 5'd0) begin
                shift_reg <= {left_data, right_data};
            end else begin
                shift_reg <= {shift_reg[30:0], 1'b0};
            end

            sdata <= shift_reg[31];
        end
    end

endmodule