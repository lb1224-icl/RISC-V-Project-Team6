module main_decoder #(

)(
    input logic  [6:0]        opcode,        // first 7 bits of ins to determine op type
    input logic               eq,            // branch condition
    output logic              pc_src,        // pc branches or increments
    output logic [1:0]        result_src,    // whether we are taking the ALU result or data memory
    output logic              mem_write,     // write enable for data memory
    output logic              alu_src,       // whether 2nd ALU input is a register data or immediate
    output logic [2:0]        imm_src,       // type of ins: R, I, S, B....
    output logic              reg_write,     // register write enable
    output logic [2:0]        alu_op         // internal cu logic to be used in alu_decoder: ADD=0, SUB=1, and eveything else = 2
);


//--------     DECODER      --------//

always_latch
case (opcode)       // to determine the operation type

    7'd51:  begin     // R type
    $display ("Hit R");
                pc_src = 0;
                result_src = 0;  // we want the ALU result into reg_file
                mem_write = 0;
                alu_src = 0;       
                // imm_src = XX;
                reg_write = 1; 
                alu_op = 2; 
            end

    7'd3:   begin     // I type -> load op
    $display ("Hit I (load op)");
                pc_src = 0;
                result_src = 1;    // we want the Data Memory result into reg_file
                mem_write = 0;
                alu_src = 1;       // we want to use imm
                imm_src = 0;       // I-type sign extension is mode 0
                reg_write = 1; 
                alu_op = 0; 
            end

    7'd19:  begin     // I type -> logic op
    $display ("Hit I (logic op)");
                pc_src = 0;
                result_src = 0;
                mem_write = 0;
                alu_src = 1;       
                imm_src = 0;
                reg_write = 1; 
                alu_op = 2;   /////    CHECK  !!!!  
            end

    7'd35:  begin     // S type
    $display ("Hit S");
                pc_src = 0;
                // result_src = X; 
                mem_write = 1;     // want to store a register value into data memory
                alu_src = 1;       
                imm_src = 1;       // S-type sign extension is mode 1
                reg_write = 0; 
                alu_op = 0; 
            end
    
    7'd99:  begin     // B type
    $display ("Hit B");
                pc_src = eq;
                // result_src = X;
                mem_write = 0;    
                alu_src = 0;       
                imm_src = 2;       // B-type sign extension is mode 2
                reg_write = 0; 
                alu_op = 1;
            end

    7'd103: begin     // J type -> jalr 
    $display ("Hit JALR");
                pc_src = 1;   
                result_src = 2;
                mem_write = 0;    
                alu_src = 1;       
                imm_src = 3;       // J-type sign extension is mode 3
                reg_write = 1; 
                alu_op = 0;        // PC <- rs1 + Imm so therefore requires the ADD ALU Operation
            end

    7'd111: begin     // J type -> jal
                $display ("Hit JAL");
                pc_src = 1;  
                result_src = 2;
                mem_write = 0;    
                alu_src = 1;       
                imm_src = 3;       // J-type sign extension is mode 3
                reg_write = 1; 
                // alu_op = X;    // Doesn't require ALU calc or result because PC <- Imm
            end

    7'd000: $display ("Hit a zero?");

    default: $error ("OPcode out of range!");
    
endcase

endmodule 
