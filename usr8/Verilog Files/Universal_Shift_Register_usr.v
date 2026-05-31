‘timescale 1 ns / 1 ps
module Universal_Shift_Register_usr (
    input clk ,
    input rst ,
    input [7:0] parallel_in ,
    input left_bit ,
    input right_bit ,
    input [1:0] mode ,
    output reg [7:0] parallel_out ,
    output reg serial_out
);
localparam [1:0] HOLD = 2’ b00 ,
SHIFT_LEFT = 2’ b01 ,
SHIFT_RIGHT = 2’ b10 ,
PARALLEL_LOAD = 2 ’ b11 ;
always @( posedge clk or negedge rst ) begin
    if (! rst ) begin
        parallel_out <= 8’ b00000000 ;
        serial_out <= 1’ b0 ;
    end
    else begin
        case ( mode )
            HOLD : begin
                parallel_out <= parallel_out ;
                serial_out <= serial_out ;
            end
            SHIFT_LEFT : begin
                serial_out <= parallel_out [7];
                parallel_out <= { parallel_out [6:0] , left_bit };
            end
            SHIFT_RIGHT : begin
                serial_out <= parallel_out [0];
                parallel_out <= { right_bit , parallel_out [7:1]};
            end
            PARALLEL_LOAD : begin
                parallel_out <= parallel_in ;
                serial_out <= serial_out ;
            end
            default : begin
                parallel_out <= parallel_out ;
                serial_out <= serial_out ;
            end
        endcase
    end
end
endmodule