module mux2(
    input d0,
    input d1,
    input sel,
    output ya,
    output yb
    );
    
assign ya = (~sel & d0) | (sel & d1);

assign yb = (sel == 0) ?  d0 : d1;
    
endmodule
