`timescale 1ns / 1ps

module counter_4bit_tb;
reg clk, reset_n;
wire [3:0] o_cnt;

//clk gen
always
    #5 clk = ~clk;

initial begin
//inittialize valie
$display("inittialize valie [%d]", $time);
    reset_n = 1;
    clk = 0;
    
//reset_n gen
$display("Reset! [%d]", $time);
# 100
    reset_n =0;
# 100
    reset_n =1;

//start
$display("Start! [%d]", $time);
# 1000
$display("Finish! [%d]", $time);
$finish;
end

//Call DUT
counter_4bit u_counter_4bit(
    .clk(clk),
    .reset_n(reset_n),
    .cnt(o_cnt)
);
endmodule