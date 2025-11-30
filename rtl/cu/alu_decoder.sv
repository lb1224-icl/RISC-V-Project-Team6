module alu_decoder #(

) (
    input logic  [2:0]        alu_op,           // logic condition
    input logic               opcode_5,         // logic condition
    input logic  [2:0]        funct3,           // logic condition
    input logic               funct7_5,         // logic condition
    output logic [3:0]        alu_ctrl          // ALU operation signal
);

//--------     DECODER      --------//

always_comb
case (alu_op)       // to determine the ALU operation type

    2'b0:   alu_ctrl = 4'b0;     // memory addressing calucations e.g. lw, sw  

    2'b1:   alu_ctrl = 4'b1;     // B-type ins

    2'b10:  if (funct3 == 3'b0)   // R-type ins and other logical/arithemetic based instructions
                if (funct7_5 == 0) 
                    alu_ctrl = 4'b0;     // add
                else
                    alu_ctrl = 4'b1;     // sub

            else if (funct3 == 3'b1)
                alu_ctrl = 4'b111;        // logical shift left
            
            else if (funct3 == 3'b10)
                alu_ctrl = 4'b101;       // set less than

            else if (funct3 == 3'b11)
                alu_ctrl = 4'b110;       // set less than unsigned

            else if (funct3 == 3'b100)
                alu_ctrl = 4'b100;       // xor
            
            else if (funct3 == 3'b101)
                if (funct7_5 == 0)
                    alu_ctrl = 4'b1000;     // logical shift right
                else
                    alu_ctrl = 4'b1001;     // arithmetic shift right

            else if (funct3 == 3'b110)
                alu_ctrl = 4'b11;        // or
            
            else if (funct3 == 3'b111)
                alu_ctrl = 4'b10;        // and

            else
               $error("ALU_Decoder Error: funct3 out of range!");
    
    default: $error("ALU_Decoder Error: alu_op out of range!");

endcase

endmodule 
