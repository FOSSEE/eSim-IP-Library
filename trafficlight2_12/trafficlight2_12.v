module trafficlight2_12(

       
       output reg [2:0]light_S1,
       output reg [2:0]light_S2,
       output reg [2:0]light_S3,
       output reg [2:0]light_S4,
       input clk,rst
       );

       parameter T1=0, T2=1, T3=2, T4=3, T5=4, T6=5;
       reg [3:0] count;
       reg [2:0] ps;
       parameter sec7=7, sec5=5, sec2=2, sec3=3;


       always@(posedge clk or posedge rst)
           begin
           if (rst==1)
           begin
           ps<=T1;
           count<=0;
           end
           else



                     case(ps)
                             T1: if(count<sec7)
                                        begin
                                        ps<=T1;
                                        count<=count+1;
                                        end

                                   else
                                        begin
                                        ps<=T2;
                                        count<=0;
                                        end
                              T2: if(count<sec2)
                                        begin
                                        ps<=T2;
                                        count<=count+1;
                                        end

                                   else
                                        begin
                                        ps<=T3;
                                        count<=0;
                                        end
                              T3: if(count<sec5)
                                        begin
                                        ps<=T3;
                                        count<=count+1;
                                        end

                                   else
                                        begin
                                        ps<=T4;
                                        count<=0;
                                        end
                              T4: if(count<sec2)
                                        begin
                                        ps<=T4;
                                        count<=count+1;
                                        end

                                   else
                                        begin
                                        ps<=T5;
                                        count<=0;
                                        end
                              T5: if(count<sec3)
                                        begin
                                        ps<=T5;
                                        count<=count+1;
                                        end

                                   else
                                        begin
                                        ps<=T6;
                                        count<=0;
                                        end
                              T6: if(count<sec2)
                                        begin
                                        ps<=T6;
                                        count<=count+1;
                                        end

                                   else
                                        begin
                                        ps<=T1;
                                        count<=0;
                                        end
                             default: ps<=T1;
                             endcase
                       end


                     always@(ps)
                     begin


                           case(ps)


                                   T1:
                                     begin
                                         light_S1<=3'b001;
                                         light_S2<=3'b001;
                                         light_S3<=3'b100;
                                         light_S4<=3'b100;
                                      end
                                   T2:
                                     begin
                                         light_S1<=3'b001;
                                         light_S2<=3'b010;
                                         light_S3<=3'b100;
                                         light_S4<=3'b100;
                                      end
                                   T3:
                                     begin
                                         light_S1<=3'b001;
                                         light_S2<=3'b100;
                                         light_S3<=3'b001;
                                         light_S4<=3'b100;
                                      end
                                   T4:
                                     begin
                                         light_S1<=3'b010;
                                         light_S2<=3'b100;
                                         light_S3<=3'b010;
                                         light_S4<=3'b100;
                                      end
                                    T5: 
                                        begin 
                                            light_S1<=3'b100; 
                                            light_S2<=3'b100; 
                                            light_S3<=3'b100; 
                                            light_S4<=3'b001; 
                                        end 
                                    T6: 
                                        begin 
                                            light_S1<=3'b100; 
                                            light_S2<=3'b100; 
                                            light_S3<=3'b100; 
                                            light_S4<=3'b001; 
                                        end 
                                        default: 
                                            begin 
                                                light_S1<=3'b000; 
                                                light_S2<=3'b000; 
                                                light_S3<=3'b000; 
                                                light_S4<=3'b000; 
                                            end 
                                        endcase 
                                    end

endmodule
