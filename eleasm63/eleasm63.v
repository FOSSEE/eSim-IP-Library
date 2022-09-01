module eleasm63(clk,rst,ra,rb,rc,rd,floor,dir);
	input clk,rst,ra,rb,rc,rd;
	output reg [1:0] floor;
	output reg dir;
	//reg [1:0] floor;
	reg[2:0] state;

	parameter AU=0,BU=1,CU=2,BD=3,CD=4,DD=5;
	parameter UP=0,DOWN=1;


	always @ (posedge clk or posedge rst)
	begin
		if(rst) state<=AU;
		else
		case(state)
			AU: case(1)
				ra: state<=AU;
				rb: state<=BU;
				rc: state<=CU;
				rd: state<=DD;
				default : state<=AU;
				endcase
			BU: case(1)
				rb: state<=BU;
				rc: state<=CU;
				rd: state<=DD;
				ra: state<=AU;
				default : state<=BU;
				endcase
			BD:case(1)
				rb: state<=BD;
				ra: state<=AU;
				rc: state<=CU;
				rd: state<=DD;
				default : state<=BD;
				endcase
			CU: case(1)
				rc: state<=CU;
				rd: state<=DD;
				rb: state<=BD;
				ra: state<=AU;
				default : state<=CU;
				endcase
			CD:case(1)
				rc: state<=CD;
				rb: state<=BD;
				ra: state<=AU;
				rd: state<=DD;
				default : state<=CD;
				endcase
			DD: case(1)
				rd: state<=DD;
				rc: state<=CD;
				rb: state<=BD;
				ra: state<=AU;
				default : state<=DD;
				endcase
				
		endcase
	end


	always @ (*)
	begin
	   case (state)
	    AU   : floor=0;
		BU,BD: floor=1;
		CU,CD: floor=2;
		DD   : floor=3;
	   endcase
	end

	always @ (state)
	begin
		case(state)
		AU,BU,CU:dir=UP;
		BD,CD,DD:dir=DOWN;
		endcase
	end
endmodule
