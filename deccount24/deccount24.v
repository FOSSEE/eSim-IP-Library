module deccount24(q,reset,clk);
input clk,reset;
output reg [3:0]q;
wire a;
assign a=q[1]&&q[3];
always@(posedge reset or negedge clk or posedge a)
begin
if(reset || a)
q<=4'b0;
else
q<=q+1;
end
endmodule
