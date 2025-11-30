module alu #(
    parameter D_WIDTH = 32
) (
    input  logic [D_WIDTH-1:0] aluop1,
    input  logic [D_WIDTH-1:0] aluop2,
    input  logic [3:0]         aluctrl,
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
            aluout = $signed(aluop1) < $signed(aluop2);
        end
        4'b0110: begin //set less than unsigned
            aluout = aluop1 < aluop2;
        end
        4'b1001: begin //shift right arthimetic
            aluout = $signed(aluop1) >>> aluop2;
        end
        default: begin
            aluout = 32'b0;
        end
    endcase
end

always_comb begin
    case (alu_ctrl)
        4'b0001: begin //subtract
            eq = (aluop1 - aluop2) == 32'b0;
        end
        4'b0100: begin //xor
            eq = (aluop1 ^ aluop2) == 32'b1;
        end
        4'b0010: begin //and
            eq = (aluop1 & aluop2) == 32'b1;
        end
        4'b0011: begin //or
            eq = (aluop1 | aluop2) == 32'b1;
        end
        4'b0101: begin //set less than
            eq = ($signed(aluop1) < $signed(aluop2)) == 32'b1;
        end
        4'b0110: begin //set less than unsigned
            eq = (aluop1 < aluop2) == 32'b1;
        end
        default: begin
            eq = 1'b0;
        end
    endcase
end


endmodule
