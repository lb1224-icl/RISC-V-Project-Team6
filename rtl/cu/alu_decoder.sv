module alu_decoder #(

) (
    input  logic [2:0] alu_op,   // logic condition
    input  logic       opcode_5, // distinguishes R-type vs I-type
    input  logic [2:0] funct3,   // logic condition
    input  logic       funct7_5, // logic condition
    output logic [3:0] alu_ctrl, // ALU operation signal

    output logic [1:0] mul_ctrl,
    output logic [1:0] div_ctrl
);

//--------     DECODER     --------//

always_comb begin
mul_ctrl = 2'b00;
div_ctrl = 2'b00;
alu_ctrl = 4'b0000;
case (alu_op) // to determine the ALU operation type

    3'b0:   alu_ctrl = 4'b0; // memory addressing calucations e.g. lw, sw  

    3'b1:   alu_ctrl = 4'b1; // b-type

    3'b10: begin
        alu_ctrl = 4'b0; // default to add/addi
        if (funct3 == 3'b0) begin
            if (opcode_5 && funct7_5)
                alu_ctrl = 4'b1;    // sub (only for R-type SUB/SRA)
            else
                alu_ctrl = 4'b0;    // add/addi
        end else if (funct3 == 3'b1)
            alu_ctrl = 4'b111;      // logical shift left

        else if (funct3 == 3'b10)
            alu_ctrl = 4'b101;      // set less than

        else if (funct3 == 3'b11)
            alu_ctrl = 4'b110;      // set less than unsigned

        else if (funct3 == 3'b100)
            alu_ctrl = 4'b100;      // xor

        else if (funct3 == 3'b101)
            if (funct7_5 == 0)
                alu_ctrl = 4'b1000; // logical shift right
            else
                alu_ctrl = 4'b1001; // arithmetic shift right

        else if (funct3 == 3'b110)
            alu_ctrl = 4'b11;       // or

        else if (funct3 == 3'b111)
            alu_ctrl = 4'b10;       // and

        else
            $error("ALU_Decoder Error: funct3 out of range!");
    end

    3'b11:   alu_ctrl = 4'b1111; // lui

    // multiply
    3'b100: begin
        mul_ctrl = funct3[1:0];  // 00 = MUL, 01 = MULH, 10 = MULHSU, 11 = MULHU
    end

    // divide
    3'b101: begin
        div_ctrl = funct3[1:0];  // 00 = DIV, 01 = DIVU, 10 = REM, 11 = REMU
    end
    
    default: $error("Error (alu_decoder): alu_op out of range!");
endcase
end

endmodule 
