module noc_router_4x4(
    input clk,
    input reset,

    input [7:0] north_data,
    input [7:0] south_data,
    input [7:0] east_data,
    input [7:0] west_data,

    input [1:0] north_dest,
    input [1:0] south_dest,
    input [1:0] east_dest,
    input [1:0] west_dest,

    input north_valid,
    input south_valid,
    input east_valid,
    input west_valid,

    output reg [7:0] north_out,
    output reg [7:0] south_out,
    output reg [7:0] east_out,
    output reg [7:0] west_out,

    output reg north_out_valid,
    output reg south_out_valid,
    output reg east_out_valid,
    output reg west_out_valid
);

always @(posedge clk)
begin

    if(reset)
    begin
        north_out <= 0;
        south_out <= 0;
        east_out <= 0;
        west_out <= 0;

        north_out_valid <= 0;
        south_out_valid <= 0;
        east_out_valid <= 0;
        west_out_valid <= 0;
    end

    else
    begin

        north_out_valid <= 0;
        south_out_valid <= 0;
        east_out_valid <= 0;
        west_out_valid <= 0;

        if(north_valid)
        begin

            if(north_dest == 2'b00)
            begin
                north_out <= north_data;
                north_out_valid <= 1;
            end

            else if(north_dest == 2'b01)
            begin
                south_out <= north_data;
                south_out_valid <= 1;
            end

            else if(north_dest == 2'b10)
            begin
                east_out <= north_data;
                east_out_valid <= 1;
            end

            else
            begin
                west_out <= north_data;
                west_out_valid <= 1;
            end

        end

        if(south_valid)
        begin

            if(south_dest == 2'b00 && !north_out_valid)
            begin
                north_out <= south_data;
                north_out_valid <= 1;
            end

            else if(south_dest == 2'b01 && !south_out_valid)
            begin
                south_out <= south_data;
                south_out_valid <= 1;
            end

            else if(south_dest == 2'b10 && !east_out_valid)
            begin
                east_out <= south_data;
                east_out_valid <= 1;
            end

            else if(south_dest == 2'b11 && !west_out_valid)
            begin
                west_out <= south_data;
                west_out_valid <= 1;
            end

        end

        if(east_valid)
        begin

            if(east_dest == 2'b00 && !north_out_valid)
            begin
                north_out <= east_data;
                north_out_valid <= 1;
            end

            else if(east_dest == 2'b01 && !south_out_valid)
            begin
                south_out <= east_data;
                south_out_valid <= 1;
            end

            else if(east_dest == 2'b10 && !east_out_valid)
            begin
                east_out <= east_data;
                east_out_valid <= 1;
            end

            else if(east_dest == 2'b11 && !west_out_valid)
            begin
                west_out <= east_data;
                west_out_valid <= 1;
            end

        end

        if(west_valid)
        begin

            if(west_dest == 2'b00 && !north_out_valid)
            begin
                north_out <= west_data;
                north_out_valid <= 1;
            end

            else if(west_dest == 2'b01 && !south_out_valid)
            begin
                south_out <= west_data;
                south_out_valid <= 1;
            end

            else if(west_dest == 2'b10 && !east_out_valid)
            begin
                east_out <= west_data;
                east_out_valid <= 1;
            end

            else if(west_dest == 2'b11 && !west_out_valid)
            begin
                west_out <= west_data;
                west_out_valid <= 1;
            end

        end

    end

end

endmodule
