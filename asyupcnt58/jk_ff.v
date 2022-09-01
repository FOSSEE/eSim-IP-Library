module jk_ff(input j,k,rst,clk,output reg q,qb);
always @(posedge clk or posedge rst)
begin
if(rst)
begin q=1'b0;qb=1'b1; end
else if({j,k} == 2'b11)
begin q=~q;qb=~q; end
else if({j,k} == 2'b00)
begin q=q;qb=~q; end
else if({j,k} == 2'b01)
begin q=0;qb=1; end
else if({j,k} == 2'b10)
begin q=1;qb=0; end
end
endmodule

