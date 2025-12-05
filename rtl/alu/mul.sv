module module name #(
    parameters D_WIDTH = 32;
) (
    input  logic [D_WIDTH-1:0] rd1, 
    input  logic [D_WIDTH-1:0] rd2, 
    input  logic [1:0] mul_ctrl,     // func3[1:0]

    output logic [D_WIDTH-1:0] result;
);

logic [D_WIDTH*2-1:0] full_result;

always_comb begin
    case (mul_ctrl)
    2'b00: begin    ///MUL
        full_result = rd1*rd2;
        result = full_result[D_WIDTH*2-1:D_WIDTH];
    end
    2'b01: begin    ///MULH
        full_result = $signed(rd1)*$signed(rd2); 
        result = full_result[D_WIDTH*2-1:D_WIDTH];
    end
    2'b10: begin    ///MULHSU
        full_result = $signed(rd1)*$unsigned(rd2); 
        result = full_result[D_WIDTH*2-1:D_WIDTH];
    end
    2'b11: begin    ///MULHU
        full_result = $unsigned(rd1)*$unsigned(rd2); 
        result = full_result[D_WIDTH*2-1:D_WIDTH];
    end
    endcase
end
    
endmodule
