module main_decoder (
    input  logic [6:0]   opcode,
    input  logic         eq,

    output logic         branch_d,
    output logic         jump_d,
    output logic [1:0]   result_src,
    output logic         mem_write,
    output logic         alu_src,
    output logic [2:0]   imm_src,
    output logic         reg_write,
    output logic [2:0]   alu_op,

    output logic         jalr,

    output logic         rs1_signal,
    output logic         rs2_Signal,

    output logic         mul_en,
    output logic         div_en
);

always_comb begin
    // -------- DEFAULT VALUES (prevents latches) --------
    pc_src     = 0;
    result_src = 0;
    mem_write  = 0;
    alu_src    = 0;
    imm_src    = 0;
    reg_write  = 0;
    alu_op     = 0;
    jalr       = 0;
    rs1_signal = 0;
    rs2_signal = 0;
    
    unique case (opcode)

        7'd51: begin        // R type
            jump_d     = 0;
            branch_d   = 0;
            result_src = 0; 
            mem_write  = 0;
            alu_src    = 0;
            reg_write  = 1;
            alu_op     = 2;    // ALU decider will choose ADD/SUB/etc.
            rs1_signal = 1;
            rs2_signal = 1;
        end

        7'd3: begin         // I type --> load op
            jump_d     = 0;
            branch_d   = 0;
            result_src = 1;    // from memory
            mem_write  = 0;
            alu_src    = 1; 
            imm_src    = 0;    // I-type immediate
            reg_write  = 1;
            alu_op     = 0;    // ADD for address calculation
            rs1_signal = 1;
            rs2_signal = 0;
        end

        7'd19: begin        // I type --> logic op
            jump_d     = 0;
            branch_d   = 0;
            result_src = 0;
            mem_write  = 0;
            alu_src    = 1;
            imm_src    = 0;    // I-type immediate
            reg_write  = 1;
            alu_op     = 2;    // handled in ALU decoder
            rs1_signal = 1;
            rs2_signal = 0;
        end

        7'd35: begin        // S type 
            jump_d     = 0;
            branch_d   = 0;
            mem_write  = 1;
            alu_src    = 1;
            imm_src    = 1;    // S-type immediate
            reg_write  = 0;
            alu_op     = 0;
            rs1_signal = 1;
            rs2_signal = 1;
        end

        7'd99: begin        // B type
            jump_d     = 0;
            branch_d   = 1;   // branch taken?
            mem_write  = 0;
            alu_src    = 0;
            imm_src    = 2;    // B-type immediate
            reg_write  = 0;
            alu_op     = 1;    // SUB for compare
            rs1_signal = 1;
            rs2_signal = 1;
        end

        7'd103: begin       // I type --> jalr
            jump_d     = 1;
            branch_d   = 0;
            result_src = 0;    // ALU result
            mem_write  = 0;
            alu_src    = 1; 
            imm_src    = 0;    // I-type immediate
            reg_write  = 1;
            alu_op     = 0;    // ADD for PC = rs1 + imm
            jalr       = 1;
            rs1_signal = 1;
            rs2_signal = 0;
        end

        7'd111: begin       // J type --> jal
            jump_d     = 1;
            branch_d   = 0;
            result_src = 2;    // PC+4
            mem_write  = 0;
            alu_src    = 1; 
            imm_src    = 3;    // J-type immediate
            reg_write  = 1;
            jalr       = 0;
            rs1_signal = 0;
            rs2_signal = 0;       
        end

        7'd23: begin       // U type --> auipc
            jump_d     = 0;
            branch_d   = 0;
            mem_write  = 0;
            imm_src    = 4;    // U-type immediate
            reg_write  = 0;
            jalr       = 0;
            rs1_signal = 0;
            rs2_signal = 0;
        end

        7'd55: begin     // U type --> lui
            jump_d     = 0;
            branch_d   = 0;
            result_src = 0;   //ALU result
            mem_write  = 0;
            alu_src    = 1; 
            alu_op     = 3;
            imm_src    = 4;    // U-type immediate
            reg_write  = 1;
            jalr       = 0;
            rs1_signal = 0;
            rs2_signal = 0;
        end

        7'd67: begin     // R type --> Multiply 
            jump_d     = 0;
            branch_d   = 0;
            result_src = 0;   //ALU result
            mem_write  = 0;
            alu_src    = 1;  
            reg_write  = 1;
            jalr       = 0;
            rs1_signal = 1;
            rs2_signal = 1;
            mul_en     = 1;
            alu_op     = 4;
        end

        7'd68: begin     // R type --> Divide 
            jump_d     = 0;
            branch_d   = 0;
            result_src = 0;   //ALU result
            mem_write  = 0;
            alu_src    = 1; 
            reg_write  = 1;
            jalr       = 0;
            rs1_signal = 1;
            rs2_signal = 1;
            div_en     = 1;
            alu_op     = 5;
        end

        default: begin
            $display("ERROR: Invalid opcode %0d", opcode);
        end

    endcase
end

endmodule
