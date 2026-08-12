module uart_tx(
    input clk,
    input reset,
    input tx_start,
    input [7:0] data_in,
    output reg tx,
    output reg tx_done
);

reg [3:0] bit_count;
reg [9:0] shift_reg;
reg transmitting;

always @(posedge clk or posedge reset)
begin
    if(reset)
    begin
        tx <= 1'b1;
        tx_done <= 1'b0;
        bit_count <= 4'd0;
        transmitting <= 1'b0;
        shift_reg <= 10'b1111111111;
    end
    else
    begin
        tx_done <= 1'b0;

        if(tx_start && !transmitting)
        begin
            shift_reg <= {1'b1, data_in, 1'b0};
            transmitting <= 1'b1;
            bit_count <= 4'd0;
        end
        else if(transmitting)
        begin
            tx <= shift_reg[0];

            shift_reg[0] <= shift_reg[1];
            shift_reg[1] <= shift_reg[2];
            shift_reg[2] <= shift_reg[3];
            shift_reg[3] <= shift_reg[4];
            shift_reg[4] <= shift_reg[5];
            shift_reg[5] <= shift_reg[6];
            shift_reg[6] <= shift_reg[7];
            shift_reg[7] <= shift_reg[8];
            shift_reg[8] <= shift_reg[9];
            shift_reg[9] <= 1'b1;

            bit_count <= bit_count + 1'b1;

            if(bit_count == 4'd9)
            begin
                transmitting <= 1'b0;
                tx_done <= 1'b1;
                tx <= 1'b1;
            end
        end
    end
end

endmodule