module inderjit_4bitcounter(input clk, 
input rst,
output reg[3:0] out);
//This is a code for 4 bit counter

always @ (posedge clk) begin 

if ( rst)
out <= 0; 
else
out <= out + 1;
end
endmodule 
