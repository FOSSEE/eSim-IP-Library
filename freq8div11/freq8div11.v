module freq8Div11( clk,out_clk );

output out_clk;

input clk ;

reg [2:0]m;

initial m = 0;

always @ (negedge (clk)) begin
 m <= m + 1;
end

assign out_clk = m[2];


endmodule
