// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2018.3 (win64) Build 2405991 Thu Dec  6 23:38:27 MST 2018
// Date        : Thu Feb 20 18:39:36 2025
// Host        : WIN-6TFPI9ULA5U running 64-bit major release  (build 9200)
// Command     : write_verilog -mode timesim -nolib -sdf_anno true -force -file
//               C:/Users/Administrator/Desktop/fpga/counter_4bit/counter_4bit.sim/sim_1/impl/timing/xsim/counter_4bit_tb_time_impl.v
// Design      : counter_4bit
// Purpose     : This verilog netlist is a timing simulation representation of the design and should not be modified or
//               synthesized. Please ensure that this netlist is used with the corresponding SDF file.
// Device      : xc7a75tftg256-1
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps
`define XIL_TIMING

(* ECO_CHECKSUM = "f79d6d0c" *) 
(* NotValidForBitStream *)
module counter_4bit
   (clk,
    reset_n,
    cnt);
  input clk;
  input reset_n;
  output [3:0]cnt;

  wire clk;
  wire clk_IBUF;
  wire clk_IBUF_BUFG;
  wire [3:0]cnt;
  wire \cnt[3]_i_2_n_0 ;
  wire [3:0]cnt_OBUF;
  wire [3:0]p_0_in;
  wire reset_n;
  wire reset_n_IBUF;

initial begin
 $sdf_annotate("counter_4bit_tb_time_impl.sdf",,,,"tool_control");
end
  BUFG clk_IBUF_BUFG_inst
       (.I(clk_IBUF),
        .O(clk_IBUF_BUFG));
  IBUF clk_IBUF_inst
       (.I(clk),
        .O(clk_IBUF));
  (* SOFT_HLUTNM = "soft_lutpair1" *) 
  LUT1 #(
    .INIT(2'h1)) 
    \cnt[0]_i_1 
       (.I0(cnt_OBUF[0]),
        .O(p_0_in[0]));
  (* SOFT_HLUTNM = "soft_lutpair1" *) 
  LUT2 #(
    .INIT(4'h6)) 
    \cnt[1]_i_1 
       (.I0(cnt_OBUF[0]),
        .I1(cnt_OBUF[1]),
        .O(p_0_in[1]));
  (* SOFT_HLUTNM = "soft_lutpair0" *) 
  LUT3 #(
    .INIT(8'h78)) 
    \cnt[2]_i_1 
       (.I0(cnt_OBUF[0]),
        .I1(cnt_OBUF[1]),
        .I2(cnt_OBUF[2]),
        .O(p_0_in[2]));
  (* SOFT_HLUTNM = "soft_lutpair0" *) 
  LUT4 #(
    .INIT(16'h7F80)) 
    \cnt[3]_i_1 
       (.I0(cnt_OBUF[1]),
        .I1(cnt_OBUF[0]),
        .I2(cnt_OBUF[2]),
        .I3(cnt_OBUF[3]),
        .O(p_0_in[3]));
  LUT1 #(
    .INIT(2'h1)) 
    \cnt[3]_i_2 
       (.I0(reset_n_IBUF),
        .O(\cnt[3]_i_2_n_0 ));
  OBUF \cnt_OBUF[0]_inst 
       (.I(cnt_OBUF[0]),
        .O(cnt[0]));
  OBUF \cnt_OBUF[1]_inst 
       (.I(cnt_OBUF[1]),
        .O(cnt[1]));
  OBUF \cnt_OBUF[2]_inst 
       (.I(cnt_OBUF[2]),
        .O(cnt[2]));
  OBUF \cnt_OBUF[3]_inst 
       (.I(cnt_OBUF[3]),
        .O(cnt[3]));
  FDCE #(
    .INIT(1'b0)) 
    \cnt_reg[0] 
       (.C(clk_IBUF_BUFG),
        .CE(1'b1),
        .CLR(\cnt[3]_i_2_n_0 ),
        .D(p_0_in[0]),
        .Q(cnt_OBUF[0]));
  FDCE #(
    .INIT(1'b0)) 
    \cnt_reg[1] 
       (.C(clk_IBUF_BUFG),
        .CE(1'b1),
        .CLR(\cnt[3]_i_2_n_0 ),
        .D(p_0_in[1]),
        .Q(cnt_OBUF[1]));
  FDCE #(
    .INIT(1'b0)) 
    \cnt_reg[2] 
       (.C(clk_IBUF_BUFG),
        .CE(1'b1),
        .CLR(\cnt[3]_i_2_n_0 ),
        .D(p_0_in[2]),
        .Q(cnt_OBUF[2]));
  FDCE #(
    .INIT(1'b0)) 
    \cnt_reg[3] 
       (.C(clk_IBUF_BUFG),
        .CE(1'b1),
        .CLR(\cnt[3]_i_2_n_0 ),
        .D(p_0_in[3]),
        .Q(cnt_OBUF[3]));
  IBUF reset_n_IBUF_inst
       (.I(reset_n),
        .O(reset_n_IBUF));
endmodule
`ifndef GLBL
`define GLBL
`timescale  1 ps / 1 ps

module glbl ();

    parameter ROC_WIDTH = 100000;
    parameter TOC_WIDTH = 0;

//--------   STARTUP Globals --------------
    wire GSR;
    wire GTS;
    wire GWE;
    wire PRLD;
    tri1 p_up_tmp;
    tri (weak1, strong0) PLL_LOCKG = p_up_tmp;

    wire PROGB_GLBL;
    wire CCLKO_GLBL;
    wire FCSBO_GLBL;
    wire [3:0] DO_GLBL;
    wire [3:0] DI_GLBL;
   
    reg GSR_int;
    reg GTS_int;
    reg PRLD_int;

//--------   JTAG Globals --------------
    wire JTAG_TDO_GLBL;
    wire JTAG_TCK_GLBL;
    wire JTAG_TDI_GLBL;
    wire JTAG_TMS_GLBL;
    wire JTAG_TRST_GLBL;

    reg JTAG_CAPTURE_GLBL;
    reg JTAG_RESET_GLBL;
    reg JTAG_SHIFT_GLBL;
    reg JTAG_UPDATE_GLBL;
    reg JTAG_RUNTEST_GLBL;

    reg JTAG_SEL1_GLBL = 0;
    reg JTAG_SEL2_GLBL = 0 ;
    reg JTAG_SEL3_GLBL = 0;
    reg JTAG_SEL4_GLBL = 0;

    reg JTAG_USER_TDO1_GLBL = 1'bz;
    reg JTAG_USER_TDO2_GLBL = 1'bz;
    reg JTAG_USER_TDO3_GLBL = 1'bz;
    reg JTAG_USER_TDO4_GLBL = 1'bz;

    assign (strong1, weak0) GSR = GSR_int;
    assign (strong1, weak0) GTS = GTS_int;
    assign (weak1, weak0) PRLD = PRLD_int;

    initial begin
	GSR_int = 1'b1;
	PRLD_int = 1'b1;
	#(ROC_WIDTH)
	GSR_int = 1'b0;
	PRLD_int = 1'b0;
    end

    initial begin
	GTS_int = 1'b1;
	#(TOC_WIDTH)
	GTS_int = 1'b0;
    end

endmodule
`endif
