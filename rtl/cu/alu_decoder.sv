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

    2'b00:   alu_ctrl = 3'b000;     // memory addressing calucations e.g. lw, sw  

    2'b01:   alu_ctrl = 3'b001;     // B-type ins

    2'b10:  if (funct3 == 3'b000)   // R-type ins and other logical/arithemetic based instructions
                if ({opcode_5, funct7_5} == 2'b11) 
                    alu_ctrl = 3'b001;      // sub
                else
                    alu_ctrl = 3'b000;      // add
            
            else if (funct3 == 3'b010)
                alu_ctrl = 3'b101;          // set less than

            else if (funct3 == 3'b110)
                alu_ctrl = 3'b011;          // or
            
            else if (funct3 == 3'b111)
                alu_ctrl = 3'b010;          // and

            else
                //include error statememt that no such funct3 operation exists
    
    default: // error message that no such alu_op exists

endcase

endmodule 
