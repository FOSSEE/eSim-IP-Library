module serializer_verilog (
    input clk,
    input rst,
    input load,
    input [3:0] data_in,
    output reg serial_out,
    output reg done
);

    reg [3:0] shift_reg;
    reg [2:0] count;
    reg active;   // NEW: transmission active flag
    

    always @(posedge clk or posedge rst) begin
        if (rst) begin
            shift_reg <= 0;
            count <= 0;
            done <= 0;
            active <= 0;
            serial_out <= 0;
        end 
        else begin
            // Load new data
            if (load && !active) begin
    		shift_reg <= data_in;
    		count <= 0;
    		done <= 0;
    		active <= 1;
	    end 
            
            // Transmission phase
            else if (active) begin
                serial_out <= shift_reg[0];
                shift_reg <= shift_reg >> 1;
                count <= count + 1;

                if (count == 3) begin
                    done <= 1;
                    active <= 0;   // STOP after 4 bits
                end
            end 
            
            else begin
                done <= 0;
                serial_out <= 0;
            end
        end
    end

endmodule