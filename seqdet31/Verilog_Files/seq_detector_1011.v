module seq_detector_1011 (
    input wire clk,
    input wire reset,
    input wire data_in,
    output reg detected
);

    reg [3:0] shift_reg;

    always @(posedge clk or posedge reset) begin
        if (reset) begin
            shift_reg <= 4'b0000;
            detected <= 1'b0;
        end else begin
            // Shift the pipeline left and push the new data_in bit to the right
            shift_reg <= {shift_reg[2:0], data_in};
            
            // Constantly monitor the pipeline. If it matches 1011, trigger the output!
            if ({shift_reg[2:0], data_in} == 4'b1011)
                detected <= 1'b1;
            else
                detected <= 1'b0;
        end
    end
endmodule