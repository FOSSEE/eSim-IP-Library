module glenn_updownCounter(
    input in_Counter_Clk,
    input in_Reset,
    input in_UporDown,  //high for UP counter and low for Down counter
    output reg [7:0] out_Count
    );     
    
    always @(posedge(in_Counter_Clk) or posedge(in_Reset))
     begin
        if(in_Reset == 1) 
            out_Count = 0;
        else
		  begin
            if(in_UporDown == 1)   //Up mode selected
                if(out_Count == 255)
                out_Count <= 255;
                else
                 out_Count <= out_Count + 1; //Incremend Counter
            else  //Down mode selected
                if(out_Count == 0)
                out_Count <= 0;
                else
                out_Count <= out_Count - 1; //Decrement counter					
		  end
     end    
    
endmodule