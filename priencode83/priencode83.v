module priencode83(din,dout);
  input[7:0]din;
  output reg[2:0]dout;
  
  always@(din)
    begin
casex(din)
8'b00000001 :dout = 3'b000;
8'b0000001X :dout = 3'b001;
8'b000001XX :dout = 3'b010;
8'b00001XXX :dout = 3'b011;
8'b0001XXXX :dout = 3'b100;
8'b001XXXXX :dout = 3'b101;
8'b01XXXXXX :dout = 3'b110;
8'b1XXXXXXX :dout = 3'b111;
endcase
    
    end
endmodule
