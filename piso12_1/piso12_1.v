module piso12_1(clk, load, Data_pr, Data_sr);
input clk, load;
input [9:0] Data_pr;
output reg Data_sr;
reg [9:0] tmp;
always @(posedge clk)
begin
  if(load)
  tmp<=Data_pr;
  else
  begin
  Data_sr <= tmp[9];
  tmp <= {tmp[8:0],1'b0};
  end
end
endmodule
