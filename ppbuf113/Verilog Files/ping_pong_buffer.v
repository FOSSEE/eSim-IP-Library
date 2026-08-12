module ping_pong_buffer(
    input clk,
    input reset,

    input write_en,
    input [7:0] data_in,

    output reg active_buf,
    output reg full_a,
    output reg full_b
);

reg [7:0] bufA0;
reg [7:0] bufA1;
reg [7:0] bufA2;
reg [7:0] bufA3;

reg [7:0] bufB0;
reg [7:0] bufB1;
reg [7:0] bufB2;
reg [7:0] bufB3;

reg [1:0] ptr;

always @(posedge clk)
begin

    if(reset)
    begin
        active_buf <= 0;
        ptr <= 0;

        full_a <= 0;
        full_b <= 0;
    end

    else
    begin

        if(write_en)
        begin

            if(active_buf == 0)
            begin

                if(ptr == 0)
                    bufA0 <= data_in;
                else if(ptr == 1)
                    bufA1 <= data_in;
                else if(ptr == 2)
                    bufA2 <= data_in;
                else
                    bufA3 <= data_in;

            end

            else
            begin

                if(ptr == 0)
                    bufB0 <= data_in;
                else if(ptr == 1)
                    bufB1 <= data_in;
                else if(ptr == 2)
                    bufB2 <= data_in;
                else
                    bufB3 <= data_in;

            end

            if(ptr == 3)
            begin

                if(active_buf == 0)
                    full_a <= 1;
                else
                    full_b <= 1;

                active_buf <= ~active_buf;
                ptr <= 0;
            end
            else
            begin
                ptr <= ptr + 1;
            end

        end

    end

end

endmodule
