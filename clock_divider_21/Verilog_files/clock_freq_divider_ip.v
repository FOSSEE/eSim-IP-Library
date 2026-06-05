module clock_freq_divider_ip(output reg clk_1,input clk,input reset);
reg [31:0]count;
localparam divider_value=2;
always@(posedge clk)
begin
if(~reset)begin
	clk_1<=0;
	count<=0;
end
else if(((count==divider_value) && (reset)) == 1)begin
	count<=0;
	clk_1<=~clk_1;
end
else
	count<=count+1;
end
endmodule