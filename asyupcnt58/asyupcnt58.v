module asyupcnt58(input clk,input [3:0]rst,output [3:0]q,qb);

jk_ff t1(1'b1,1'b1,rst[0],clk,q[0],qb[0]);
jk_ff t2(1'b1,1'b1,rst[1],qb[0],q[1],qb[1]);
jk_ff t3(1'b1,1'b1,rst[2],qb[1],q[2],qb[2]);
jk_ff t4(1'b1,1'b1,rst[3],qb[2],q[3],qb[3]);

endmodule
