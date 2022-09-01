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
	reg [3:0] reg_In3=3'b000;
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
   reg [2:0] reg_Tx_Byte = 0;
	
	
	assign reg_In3[0]=(reg_light<20)?1:0; //if night set In3 bit0 to 1
	assign reg_In3[1]=(reg_moist<10)?1:0; //if dry set In3 bit1 to 1
	assign reg_In3[2]=(reg_rain<50)?1:0;  //if raining set In3 bit2 to 1
	assign reg_d[31:24] = in_Sensor2;
	assign reg_d[23:16] = in_Sensor3;
	assign reg_d[15:8] = in_Sensor4;
	assign reg_d[7:0] = in_Sensor5;
	
	always@(posedge in_Clk)
	begin
	if (reg_1minRecord==1)
      begin
      reg_address = reg_address + 1;
      if (reg_5minTransmit==1 )
         begin
         reg_trackaddress = reg_address;
         reg_address = 0;
         if (reg_address<reg_trackaddress)
			begin
			reg_Tx_8bitData=reg_q[7:0];
            if(reg_Tx_Done==1 && reg_Tx_Byte == 0)
               begin
               reg_Tx_8bitData =reg_q[15:8];
			   reg_Tx_Byte = 1;
               end   
            else if(reg_Tx_Done==1 && reg_Tx_Byte == 1)
               begin
               reg_Tx_8bitData =reg_q[23:16];
			   reg_Tx_Byte =2;
               end   
            else if(reg_Tx_Done==1 && reg_Tx_Byte == 2)
               begin
			   reg_Tx_8bitData =reg_q[31:24];
			   reg_Tx_Byte = 3;
               end   
            else if(reg_Tx_Done==1 && reg_Tx_Byte == 3)
               begin
               reg_address = reg_address + 1;
			   reg_Tx_Byte = 4;
               end   
         	else
			   reg_Tx_Byte = 0; 
			end   
         else
			begin        				
			reg_trackaddress = 0;
			reg_address = 0;
			reg_5minTransmit = 0;
			end
		 end
	  else
	   reg_Tx_Byte = 0; 
	  end 
	else
	 reg_1minRecord = 0;  
    end
	
	
	
glenn_FSM glenn_FSM(.In3(reg_In3), .RST(in_RST), .clk(in_Global_Clock), .Out1(reg_Out1));
glenn_3bitDecoder glenn_3bitDecoder(.in3(reg_Out1), .en(en), .d0(d0), .d1(d1), .d2(d2), .d3(d3), .d4(d4), .d5(d5), .d6(d6), .d7(d7));
glenn_RAM128x32 glenn_RAM128x32(.clk(in_Global_Clock), .we(reg_1minRecord), .address(reg_address), .d(reg_d), .q(reg_q));
glenn_TIMER glenn_TIMER(.in_Clk(in_Clk), .out_1minRecord(reg_1minRecord), .out_5minTransmit(reg_5minTransmit));
glenn_UART glenn_UART(.in_UART_Clock(in_Global_Clock), .in_Tx_En(reg_5minTransmit), .in_Tx_8bitData(reg_Tx_8bitData), .out_Tx_Active(reg_Tx_Active), .out_Tx_Serial(out_Tx_Serial), .out_Tx_Done(reg_Tx_Done));
endmodule