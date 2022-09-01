module sram6T23(din, wen, q);
input din, wen;
output reg q;
always @(din, wen) begin
    if(wen == 1) q = din;
end
endmodule
