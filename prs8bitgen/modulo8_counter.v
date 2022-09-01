module modulo8_counter 
  ( input   clk,  
    input   rst,  
    output  reg[3:0] out);  
//This is a code for 4 bit counter
  
  always @ (posedge clk) begin  
    if (!rst) begin  
      out <= 0;  
    end else begin  
      if (out == 7)  
        out <= 0;  
      else  
        out <= out + 1;  
    end  
  end  
endmodule  
