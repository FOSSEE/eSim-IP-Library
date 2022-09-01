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