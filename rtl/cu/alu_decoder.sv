module alu_decoder #(

) (
    input logic  [2:0]        alu_op,           // logic condition
    input logic  [2:0]        funct3,           // logic condition
    input logic               funct7_5,         // logic condition
    output logic [3:0]        alu_ctrl          // ALU operation signal

    output logic [1:0]        mul_ctrl,
    output logic [1:0]        div_ctrl
);

//--------     DECODER      --------//

always_comb
case (alu_op)       // to determine the ALU operation type

    3'b0:   alu_ctrl = 4'b0;     // memory addressing calucations e.g. lw, sw  

    3'b1:   alu_ctrl = 4'b1;     // b-type

    3'b10: begin if (funct3 == 3'b0)   // R-type ins and other logical/arithemetic based instructions
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
    end

    3'b11:   alu_ctrl = 4'b1111;     // lui

    // Multiply
    3'b100:  begin if (funct3 == 3'b0)  // MUL
                mul_ctrl = 2'b0;       
            
            else if (funct3 == 3'b1)  // MULH
                mul_ctrl = 2'b1;       

            else if (funct3 == 3'b10)  // MULHSU
                mul_ctrl = 2'b10;  

            else if (funct3 == 3'b11)  // MULHU
                mul_ctrl = 2'b11;  

            else
                $error("ALU_Decoder Multiply Logic Error: funct3 out of range!");
    end

    // Divide
    3'b101:  begin if (funct3 == 3'b0)  // DIV
                mul_ctrl = 2'b0;       
             
            else if (funct3 == 3'b1)  // DIVU
                mul_ctrl = 2'b1;       

            else if (funct3 == 3'b10)  // RE
                mul_ctrl = 2'b10;  

            else if (funct3 == 3'b11)  // REMU
                mul_ctrl = 2'b11;  
            
            else
                $error("ALU_Decoder Divide Logic Error: funct3 out of range!");
    end
    
    default: $error("ALU_Decoder Error: alu_op out of range!");

endcase

endmodule 
