module alu_decoder #(
    WIDTH = 32
) (
    input logic               opcode_5,         // logic condition
    input logic  [2:0]        funct3,           // logic condition
    input logic               funct7_5,         // logic condition
    output logic [2:0]        alu_ctrl          // ALU operation: add, sub, OR...
);
    
assign opcode = ins[6:0];   // always true
assign funct3 = ins[14:12]; // true for all except U&I type

//--------     DECODER      --------//

always_comb
case (opcode)       // to determine the instruction type

    7'd51: begin
        funct3 <= ins[14:12];
        funct7_5 <= ins[30]; 

        case(funct3)
            3'd4: begin     // xor
                reg_write <= 1; 
                // imm_src <= XX
                alu_src <= 0;       // uses rs2
                mem_write <= 0;
                result_src <= 0;
                pc_src <= 0;
                alu_op <= 2; 
            end

            3'd6:
        endcase
    end
















    
endcase

endmodule 
