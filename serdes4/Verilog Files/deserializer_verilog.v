module deserializer_verilog (
    input clk,
    input rst,
    input start,
    input serial_in,
    output reg [3:0] data_out,
    output reg done
);

    reg [3:0] shift_reg;
    reg [2:0] count;
    reg active; 
    reg serial_in_d; 
	
    always @(posedge clk or posedge rst) begin
    if (rst) begin
        shift_reg <= 0;
        count <= 0;
        done <= 0;
        active <= 0;
        data_out <= 4'b0000;
        serial_in_d <= 0;
    end 
    else begin
        // delay input
        serial_in_d <= serial_in;

        done <= 0;  

        if (start && !active) begin
            count <= 0;
            active <= 1;
        end 
        
        else if (active) begin
            shift_reg <= {serial_in_d, shift_reg[3:1]};
            count <= count + 1;

            if (count == 3) begin
                data_out <= {serial_in_d, shift_reg[3:1]};
                done <= 1;    
                active <= 0;
            end
        end
    end
end

endmodule
