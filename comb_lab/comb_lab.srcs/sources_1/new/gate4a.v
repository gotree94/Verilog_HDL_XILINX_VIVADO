module gate4a(
    input a,
    input b,
    input c,
    input d,
    output y_a,
    output y_b
    );
    
wire and_ab;
wire and_cd, or_bc;

assign and_ab = a & b;
assign and_cd = c & d;
assign or_bc = b | c;
    
assign y_a = (and_ab | and_cd);
assign y_b = (a & b) & or_bc;
        
endmodule
