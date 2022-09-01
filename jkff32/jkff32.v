module jkff32(j, k, clk, q, qb);
 input j, k, clk;
 output reg q, qb;
 initial
 begin
 q=1'b0;
 qb=1'b1;
 end
 
 always@(posedge clk)
  begin
 case({j,k})
2'd0:q=q;
2'd1:q=1'b0;
2'd2:q=1'b1;
2'd3:q=~q;
 endcase
qb=~q;
 end
 
 endmodule
