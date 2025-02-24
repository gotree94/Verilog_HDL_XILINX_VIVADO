`timescale 1ns / 1ps

// Testbench
module tb_daisy_chain_sensor;
    parameter NUM_SLAVES = 255;
    reg clk;
    reg rst;
    reg serial_in;
    wire serial_out;
    integer i;
    
    daisy_chain_sensor #(.NUM_SLAVES(NUM_SLAVES)) uut (
        .clk(clk),
        .rst(rst),
        .serial_in(serial_in),
        .serial_out(serial_out)
    );
    
    always #10 clk = ~clk;
    
    initial begin
        clk = 0;
        rst = 1;
        serial_in = 0;
        #20 rst = 0;
        
        for (i = 0; i < (59 * NUM_SLAVES) + 32; i = i + 1) begin
            serial_in = i % 2;
            #20;
        end
        
        #100;
        $display("Simulation completed. Serial output: %b", serial_out);
        $stop;
    end
endmodule