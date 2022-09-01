module count23(input clk, reset, output[2:0] counter);
reg [2:0] counter_up;
always @(negedge clk or posedge reset)
begin
if(reset)
 counter_up <= 3'd0;
else
 counter_up <= counter_up + 3'd1;
end 
assign counter = counter_up;
endmodule
