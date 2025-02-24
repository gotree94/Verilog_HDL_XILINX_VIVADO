module daisy_chain_sensor #(parameter NUM_SLAVES = 255)(
    input wire clk,         // Master Clock Signal
    input wire rst,         // Reset Signal
    input wire serial_in,   // Serial Data Input
    output reg serial_out   // Serial Data Output
);
    
    reg [7:0] id; // Unique ID for each sensor
    reg [19:0] sensor_data; // 20-bit sensor data
    reg [31:0] crc; // 32-bit CRC per sensor
    reg [31:0] total_crc; // 32-bit CRC for entire frame
    reg [NUM_SLAVES*59+31:0] shift_register; // ID + 20-bit sensor data + CRC-32 + Total CRC
    integer i;
    
    function [31:0] crc32;
        input [27:0] data;
        integer j;
        reg [31:0] crc_reg;
        begin
            crc_reg = 32'hFFFFFFFF;
            for (j = 0; j < 28; j = j + 1) begin
                crc_reg = (crc_reg >> 1) ^ ((crc_reg[0] ^ data[j]) ? 32'hEDB88320 : 0);
            end
            crc32 = ~crc_reg;
        end
    endfunction
    
    function [31:0] compute_total_crc;
        input [NUM_SLAVES*59-1:0] data;
        integer j;
        reg [31:0] crc_reg;
        begin
            crc_reg = 32'hFFFFFFFF;
            for (j = 0; j < NUM_SLAVES*59; j = j + 1) begin
                crc_reg = (crc_reg >> 1) ^ ((crc_reg[0] ^ data[j]) ? 32'hEDB88320 : 0);
            end
            compute_total_crc = ~crc_reg;
        end
    endfunction
    
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            shift_register <= 0;
            id <= 8'd1; // Each slave should have a unique ID set
            sensor_data <= 20'hABCDE;
            crc <= crc32({id, sensor_data});
        end else begin
            shift_register[58:0] <= {id, sensor_data, crc};
            for (i = 1; i < NUM_SLAVES; i = i + 1) begin
                shift_register[i*59 +: 59] <= shift_register[(i-1)*59 +: 59];
            end
            total_crc <= compute_total_crc(shift_register[NUM_SLAVES*59-1:0]);
            shift_register[NUM_SLAVES*59 +: 32] <= total_crc; // Append total CRC
        end
    end
    
    always @(posedge clk) begin
        serial_out <= shift_register[(NUM_SLAVES*59+31)]; // Output last bit in shift register
    end
    
endmodule