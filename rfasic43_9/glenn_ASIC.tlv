\TLV_version 1d: tl-x.org
\SV
/* verilator lint_off UNUSED*/  /* verilator lint_off DECLFILENAME*/  /* verilator lint_off BLKSEQ*/  /* verilator lint_off WIDTH*/  /* verilator lint_off SELRANGE*/  /* verilator lint_off PINCONNECTEMPTY*/  /* verilator lint_off DEFPARAM*/  /* verilator lint_off IMPLICIT*/  /* verilator lint_off COMBDLY*/  /* verilator lint_off SYNCASYNCNET*/  /* verilator lint_off UNOPTFLAT */  /* verilator lint_off UNSIGNED*/  /* verilator lint_off CASEINCOMPLETE*/  /* verilator lint_off UNDRIVEN*/  /* verilator lint_off VARHIDDEN*/  /* verilator lint_off CASEX*/  /* verilator lint_off CASEOVERLAP*/  /* verilator lint_off PINMISSING*/  /* verilator lint_off BLKANDNBLK*/  /* verilator lint_off MULTIDRIVEN*/  /* verilator lint_off WIDTHCONCAT*/  /* verilator lint_off ASSIGNDLY*/  /* verilator lint_off MODDUP*/  /* verilator lint_off STMTDLY*/  /* verilator lint_off LITENDIAN*/  /* verilator lint_off INITIALDLY*/ 

//Your Verilog/System Verilog Code Starts Here:
module glenn_ASIC(
	input [7:0]in_Sensor1, //light
	input [7:0]in_Sensor2, //moist
	input [7:0]in_Sensor3, //rain
	input [7:0]in_Sensor4, //temp
	input [7:0]in_Sensor5, //humidity
	input in_Global_Clock,
	input in_Clk,
	input in_RST,
	output [7:0]out_Light,
	output reg  out_Tx_Serial
);
	reg [7:0]reg_light = in_Sensor1;
	reg [7:0]reg_moist = in_Sensor2;
	reg [7:0]reg_rain  = in_Sensor3;
	reg [7:0]reg_temp = in_Sensor4;
	reg [7:0]reg_humidity  = in_Sensor5;
	reg [3:0] In3=3'b000;
	reg d0,d1,d2,d3,d4,d5,d6,d7;
	reg [3:0]reg_Out1 = 0;
    reg en = 1'b1;
	reg reg_1minRecord = 0;
	reg reg_5minTransmit = 0;
	reg [7:0]reg_address = 0;
	reg [31:0]reg_d = 0;
	reg [31:0]reg_q = 0;
	reg reg_Tx_Active;
	reg reg_Tx_Done;
	reg [7:0]reg_Tx_8bitData;
	reg [7:0]reg_trackaddress = 0;
	
	
	assign In3[0]=(reg_light<20)?1:0; //if night set In3 bit0 to 1
	assign In3[1]=(reg_moist<10)?1:0; //if dry set In3 bit1 to 1
	assign In3[2]=(reg_rain<50)?1:0;  //if raining set In3 bit2 to 1
	
	always@(posedge in_Clk)
	begin
	if (reg_1minRecord==1)
	begin
	reg_address = reg_address + 1;
	reg_d[31:24] = in_Sensor2;
	reg_d[23:16] = in_Sensor3;
	reg_d[15:8] = in_Sensor4;
	reg_d[7:0] = in_Sensor5;
	end
	else
	reg_1minRecord = 0;
	end
	if (reg_5minTransmit==1)
		begin
		assign reg_trackaddress = reg_address;
		assign reg_address = 0;
		end
		if (reg_address<reg_trackaddress)
		assign reg_Tx_8bitData=reg_q[7:0];
			if(reg_Tx_Done==1)
			assign reg_Tx_8bitData =reg_q[15:8];
				if(reg_Tx_Done==1)
				assign reg_Tx_8bitData =reg_q[23:16];
					if(reg_Tx_Done==1)
					assign reg_Tx_8bitData =reg_q[31:24];
						if(reg_Tx_Done==1)
						assign reg_address = reg_address + 1;
		else
		begin
		assign reg_trackaddress = 0;
		assign reg_address = 0;
		assign reg_5minTransmit = 0;
		end
	end 
	
	
	
glenn_FSM glenn_FSM(.In3(In3), .RST(in_RST), .clk(in_Global_Clock), .Out1(reg_Out1));
glenn_3bitDecoder glenn_3bitDecoder(.in3(reg_Out1), .en(en), .d0(d0), .d1(d1), .d2(d2), .d3(d3), .d4(d4), .d5(d5), .d6(d6), .d7(d7));
glenn_RAM128x32 glenn_RAM128x32(.clk(in_Global_Clock), .we(reg_1minRecord), .address(reg_address), .d(reg_d), .q(reg_q));
glenn_TIMER glenn_TIMER(.in_Clk(in_Clk), .out_1minRecord(reg_1minRecord), .out_5minTransmit(reg_5minTransmit));
glenn_UART glenn_UART(.in_UART_Clock(in_Global_Clock), .in_Tx_En(reg_5minTransmit), .in_Tx_8bitData(reg_Tx_8bitData), .out_Tx_Active(reg_Tx_Active), .out_Tx_Serial(out_Tx_Serial), .out_Tx_Done(reg_Tx_Done));
endmodule

//Top Module Code Starts here:
	module top(input logic clk, input logic reset, input logic [31:0] cyc_cnt, output logic passed, output logic failed);
		logic  [7:0] in_Sensor1;//input
		logic  [7:0] in_Sensor2;//input
		logic  [7:0] in_Sensor3;//input
		logic  [7:0] in_Sensor4;//input
		logic  [7:0] in_Sensor5;//input
		logic  in_Global_Clock;//input
		logic  in_Clk;//input
		logic  in_RST;//input
		logic  [7:0] out_Light;//output
		logic  out_Tx_Serial;//output
//The $random() can be replaced if user wants to assign values
		assign in_Sensor1 = cyc_cnt;
		assign in_Sensor2 = cyc_cnt;
		assign in_Sensor3 = 100;
		assign in_Sensor4 = 5;
		assign in_Sensor5 = 5;
		assign in_Global_Clock = clk;
		assign in_Clk = clk;
		assign in_RST = 1'b1;
		glenn_ASIC glenn_ASIC(.in_Sensor1(in_Sensor1), .in_Sensor2(in_Sensor2), .in_Sensor3(in_Sensor3), .in_Sensor4(in_Sensor4), .in_Sensor5(in_Sensor5), .in_Global_Clock(in_Global_Clock), .in_Clk(in_Clk), .in_RST(in_RST), .out_Light(out_Light), .out_Tx_Serial(out_Tx_Serial));
	
\TLV
//Add \TLV here if desired                                     
\SV
endmodule
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
module glenn_3bitDecoder(

input [2:0]  in3,

input en,

output d0,d1,d2,d3,d4,d5,d6,d7
   
);

reg a,b,c;
reg [7:0]d;
assign c=in3[0];
assign b=in3[1];
assign a=in3[2];

always @(in3 or en)

begin
      if(en) 
      begin
      d[0]=((~a)&(~b)&(~c));
		d[1]=((~a)&(~b)&c);
		d[2]=((~a)&b&(~c));
		d[3]=((~a)&b&c);
		d[4]=(a&(~b)&(~c));
		d[5]=(a&(~b)&c);
		d[6]=(a&b&(~c));
		d[7]=(a&b&c);
      end
	   else
      d=8'b0000000;
end
assign d0=d[0];
assign d1=d[1];
assign d2=d[2];
assign d3=d[3];
assign d4=d[4];
assign d5=d[5];
assign d6=d[6];
assign d7=d[7];
endmodule

module glenn_TIMER(
	input in_Clk,
	output reg out_1minRecord,
	output reg out_5minTransmit
	);
	reg [5:0]reg_Countsec = 0;
	reg [5:0]reg_Countmin = 0;
	always@(posedge in_Clk)
	  begin
		  begin
		  if(reg_Countmin<5)
		    begin
			 if(reg_Countsec<60)
			   begin
			   reg_Countsec = reg_Countsec + 1;
			   out_1minRecord = 1'b0;
			   end
			 else
			   begin
			   reg_Countsec = 0;
			   out_1minRecord = 1'b1;
			   reg_Countmin = reg_Countmin + 1;
            out_5minTransmit = 1'b0;
			   end
			 end
		  else
		    begin
		    reg_Countmin = 0;
		    out_5minTransmit = 1'b1;
		    end
		  end
	  end
endmodule

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
module glenn_UART(
   input       in_UART_Clock,
   input       in_Tx_En,
   input [7:0] in_Tx_8bitData, 
   output      out_Tx_Active,
   output reg  out_Tx_Serial,
   output      out_Tx_Done
   );
  
  parameter STATE_IDLE = 3'b000;
  parameter STATE_TX_START_BIT = 3'b001;
  parameter STATE_TX_DATA_BITS = 3'b010;
  parameter STATE_TX_STOP_BIT  = 3'b011;
  parameter STATE_CLEANUP = 3'b100;
  parameter CLKS_PER_BIT =1; 				//clock freq divided by UART freq(in this case 1 because clock freq equals UART freq)
   
  reg [2:0]    reg_State_Main = 0;
  reg [7:0]    reg_Clock_Count = 0;				//use to syncronized the clock frequency and UART frequency
  reg [2:0]    reg_Bit_Index = 0;				//tracks the bit of data to be transmitted
  reg [7:0]    reg_Tx_Data = 0;
  reg          reg_Tx_Done = 0;
  reg          reg_Tx_Active   = 0;
     
  always @(posedge in_UART_Clock)
    begin
      // case: STATE_IDLE 
      case (reg_State_Main)
        STATE_IDLE :
          begin
            out_Tx_Serial   <= 1'b1;         //drive line high for idle
            reg_Tx_Done     <= 1'b0;
            reg_Clock_Count <= 0;
            reg_Bit_Index   <= 0;
             
            if (in_Tx_En == 1'b1)
              begin
                reg_Tx_Active <= 1'b1;
                reg_Tx_Data   <= in_Tx_8bitData;
                reg_State_Main   <= STATE_TX_START_BIT;
              end
            else
              reg_State_Main <= STATE_IDLE;
          end 
         
         
        // case: STATE_TX_START_BIT
        STATE_TX_START_BIT :
          begin
            out_Tx_Serial <= 1'b0;			//send out start bit. start bit = 0
             
            // wait CLKS_PER_BIT-1 clock cycles for start bit to finish
            if (reg_Clock_Count < CLKS_PER_BIT-1)
              begin
                reg_Clock_Count <= reg_Clock_Count + 1;
                reg_State_Main  <= STATE_TX_START_BIT;
              end
            else
              begin
                reg_Clock_Count <= 0;
                reg_State_Main  <= STATE_TX_DATA_BITS;
              end
          end 
         
        
        // case: STATE_TX_DATA_BITS 
        STATE_TX_DATA_BITS :
          begin
            out_Tx_Serial <= reg_Tx_Data[reg_Bit_Index];
            // Wait CLKS_PER_BIT-1 clock cycles for data bits to finish 
            if (reg_Clock_Count < CLKS_PER_BIT-1)
              begin
                reg_Clock_Count <= reg_Clock_Count + 1;
                reg_State_Main  <= STATE_TX_DATA_BITS;
              end
            else
              begin
                reg_Clock_Count <= 0;
                 
                // Check if we have sent out all bits
                if (reg_Bit_Index < 7)
                  begin
                    reg_Bit_Index  <= reg_Bit_Index + 1;
                    reg_State_Main <= STATE_TX_DATA_BITS;
                  end
                else
                  begin
                    reg_Bit_Index  <= 0;
                    reg_State_Main <= STATE_TX_STOP_BIT;
                  end
              end
          end 
         
         
        // case: STATE_TX_STOP_BIT
        STATE_TX_STOP_BIT :
          begin
            out_Tx_Serial <= 1'b1; // Send out Stop bit.  Stop bit = 1            
            // Wait CLKS_PER_BIT-1 clock cycles for Stop bit to finish
            if (reg_Clock_Count < CLKS_PER_BIT-1)
              begin
                reg_Clock_Count <= reg_Clock_Count + 1;
                reg_State_Main     <= STATE_TX_STOP_BIT;
              end
            else
              begin
                reg_Tx_Done     <= 1'b1;
                reg_Clock_Count <= 0;
                reg_State_Main  <= STATE_CLEANUP;
                reg_Tx_Active   <= 1'b0;
              end
          end 
         
         
        // case: STATE_CLEANUP
        STATE_CLEANUP :
          begin
            reg_Tx_Done <= 1'b1;
            reg_State_Main <= STATE_IDLE;
          end
         
         
        default :
          reg_State_Main <= STATE_IDLE;
         
      endcase
    end
 
  assign out_Tx_Active = reg_Tx_Active;
  assign out_Tx_Done   = reg_Tx_Done;
   
endmodule
