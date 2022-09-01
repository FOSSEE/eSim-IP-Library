module dff32(Q,Qbar,D,Clk,Reset);
output reg Q;
output reg Qbar;
input D,Clk,Reset;
assign Qbar = ~Q;
assign Q=Clk ? D:Q;
endmodule
