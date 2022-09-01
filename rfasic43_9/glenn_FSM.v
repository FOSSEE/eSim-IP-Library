

   
module glenn_FSM(

input [2:0]In3,

input RST,

input clk,

output reg [2:0] Out1

);

reg [2:0]current_state,next_state;

parameter A=3'b000,B=3'b001,C=3'b010,D=3'b011,E=3'b100,F=3'b101;

always@(posedge clk or negedge RST)

begin:STATE_MEMORY

if(!RST)

current_state<= current_state;

else

current_state<= next_state;

end

always@(current_state or In3)

begin : NEXT_STATE_LOGIC

case(current_state)
   
A : if(In3==3'b001) next_state = B; else if(In3==3'b010) next_state = C; else if(In3==3'b011) next_state = D; else if(In3==3'b1X1) next_state = E; else next_state = A;

B : if(In3==3'b001) next_state = B; else if(In3==3'b010) next_state = C; else if(In3==3'b011) next_state = D; else if(In3==3'b1X1) next_state = E; else next_state = F;

C : if(In3==3'b001) next_state = B; else if(In3==3'b010) next_state = C; else if(In3==3'b011) next_state = D; else if(In3==3'b1X1) next_state = E; else next_state = A;

D : if(In3==3'b001) next_state = B; else if(In3==3'b010) next_state = C; else if(In3==3'b011) next_state = D; else if(In3==3'b1X1) next_state = E; else next_state = F;

E : if(In3==3'b001) next_state = B; else if(In3==3'b010) next_state = C; else if(In3==3'b011) next_state = D; else if(In3==3'b1X1) next_state = E; else next_state = F;

F : if(In3==3'b001) next_state = B; else if(In3==3'b010) next_state = C; else if(In3==3'b011) next_state = D; else if(In3==3'b1X1) next_state = E; else next_state = A;

endcase

end

always@(current_state)

begin:OUTPUT_LOGIC

case(current_state)

A : Out1=3'b000;

B : Out1=3'b001;

C : Out1=3'b010;

D : Out1=3'b011;

E : Out1=3'b100;

F : Out1=3'b101;

endcase

end

endmodule



