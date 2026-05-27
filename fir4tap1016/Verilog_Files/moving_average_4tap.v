module moving_average_4tap (
    input wire clk,
    input wire reset,
    input wire [7:0] data_in,
    output reg [7:0] data_out
);

    // The 4-stage pipeline registers to hold our samples
    reg [7:0] reg1, reg2, reg3, reg4;
    
    // 10-bit wire for the sum to prevent overflow (8-bit + 8-bit + 8-bit + 8-bit = max 10 bits)
    wire [9:0] sum;

    // Continuous combinational addition of the pipeline
    assign sum = reg1 + reg2 + reg3 + reg4;

    // Sequential logic triggered on the clock edge
    always @(posedge clk or posedge reset) begin
        if (reset) begin
            reg1 <= 8'd0;
            reg2 <= 8'd0;
            reg3 <= 8'd0;
            reg4 <= 8'd0;
            data_out <= 8'd0;
        end else begin
            // Shift the new data into the pipeline
            reg1 <= data_in;
            reg2 <= reg1;
            reg3 <= reg2;
            reg4 <= reg3;
            
            // Output the average (sum divided by 4)
            data_out <= sum[9:2]; 
        end
    end
    
endmodule