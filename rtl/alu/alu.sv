module alu #(
    parameter D_WIDTH = 32
) (
    input  logic [D_WIDTH-1:0] aluop1,
    input  logic [D_WIDTH-1:0] aluop2,
    input  logic [2:0]         aluctrl,
    output logic [D_WIDTH-1:0] aluout,
    output logic               eq
);

always_comb begin
    case (aluctrl)
        3'b0: begin//add
            aluout = aluop1 + aluop2;
            eq = 1'b0;
        end
        3'b1: begin //subtract
            aluout = aluop1 - aluop2;
            eq = aluout == 32'b0;
        end
        3'b10: begin //and
            aluout = aluop1&aluop2;
            eq = 1'b0;
        end
        3'b11: begin //or
            aluout = aluop1 | aluop2;
            eq = 1'b0;
        end
        3'b101: begin //set less than
            aluout = $signed(aluop1) < $signed(aluop2);
            eq1 = 1'b0;
        end
        default: begin
            aluout = 32'b0;
            eq = 1'b0;
        end
    endcase
end

endmodule