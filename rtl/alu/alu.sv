module alu #(
    parameter D_WIDTH = 32
) (
    input  logic [D_WIDTH-1:0] aluop1,
    input  logic [D_WIDTH-1:0] aluop2,
    input  logic [3:0]         aluctrl,
    input  logic [2:0]         funct3,
    output logic [D_WIDTH-1:0] aluout,
    output logic               eq
);

always_comb begin
    casez (aluctrl)
        4'b0000: begin//add
            aluout = aluop1 + aluop2;
        end
        4'b0001: begin //subtract
            aluout = aluop1 - aluop2;
        end
        4'b0111: begin //shift left by x
            aluout = aluop1 << aluop2;
        end
        4'b1000: begin //shift right by x
            aluout = aluop1 >> aluop2;
        end
        4'b0100: begin //xor
            aluout = aluop1 ^ aluop2;
        end
        4'b0010: begin //and
            aluout = aluop1 & aluop2;
        end
        4'b0011: begin //or
            aluout = aluop1 | aluop2;
        end
        4'b0101: begin //set less than
            aluout = {{D_WIDTH-1{1'b0}}, $signed(aluop1) < $signed(aluop2)};
        end
        4'b0110: begin //set less than unsigned
            aluout = {{D_WIDTH-1{1'b0}}, aluop1 < aluop2};
        end
        4'b1001: begin //shift right arthimetic
            aluout = $signed(aluop1) >>> aluop2;
        end
        4'b1111: begin //shift right arthimetic
            aluout = aluop2;
        end
        default: begin
            aluout = 32'b0;
        end
    endcase
end

always_comb begin
    case (funct3)
        // BEQ (branch if equal)
        3'b000: eq = aluop1 == aluop2;

        // BNE (branch if not equal)
        3'b001: eq = aluop1 != aluop2;

        // BLT (branch if less than)
        3'b100: eq = $signed(aluop1) < $signed(aluop2);

        // BGE (branch if greater or equal)
        3'b101: eq = $signed(aluop1) >= $signed(aluop2);

        // BLTU (branch if less than unsigned)
        3'b110: eq = aluop1 < aluop2;

        // BGEU (branch if greater or equal unsigned)
        3'b111: eq = aluop1 >= aluop2;

        default: eq = 1'b0;
    endcase
end


endmodule
