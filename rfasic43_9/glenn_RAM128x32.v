module glenn_RAM128x32

( //ports

input wire clk,

input wire we,

input wire [6:0] address,

input wire [31:0] d,

output reg [31:0] q

);
   
reg [31:0]MEMORY[2**7-1:0];

always@(posedge clk)

begin

if(we)

MEMORY[address]<=d;

else

MEMORY[address]<=32'hxxxxxxxx;

end

assign q=MEMORY[address];

endmodule