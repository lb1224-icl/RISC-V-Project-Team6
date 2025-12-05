module main_decoder (
    input  logic [6:0]   opcode,
    input  logic         eq,

    output logic         pc_src,
    output logic [1:0]   result_src,
    output logic         mem_write,
    output logic         alu_src,
    output logic [2:0]   imm_src,
    output logic         reg_write,
    output logic [2:0]   alu_op,
    output logic         jalr   
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
    
    unique case (opcode)

        7'd51: begin
            pc_src     = 0;
            result_src = 0; 
            mem_write  = 0;
            alu_src    = 0;
            reg_write  = 1;
            alu_op     = 2;    // ALU decider will choose ADD/SUB/etc.
        end

        7'd3: begin
            pc_src     = 0;
            result_src = 1;    // from memory
            mem_write  = 0;
            alu_src    = 1; 
            imm_src    = 0;    // I-type immediate
            reg_write  = 1;
            alu_op     = 0;    // ADD for address calculation
        end

        7'd19: begin
            pc_src     = 0;
            result_src = 0;
            mem_write  = 0;
            alu_src    = 1;
            imm_src    = 0;
            reg_write  = 1;
            alu_op     = 2;    // handled in ALU decoder
        end

        7'd35: begin
            pc_src     = 0;
            mem_write  = 1;
            alu_src    = 1;
            imm_src    = 1;    // S-type immediate
            reg_write  = 0;
            alu_op     = 0;
        end

        7'd99: begin
            pc_src     = eq;   // branch taken?
            mem_write  = 0;
            alu_src    = 0;
            imm_src    = 2;    // B-type immediate
            reg_write  = 0;
            alu_op     = 1;    // SUB for compare
        end

        7'd103: begin
            pc_src     = 1;
            result_src = 0;    // ALU result
            mem_write  = 0;
            alu_src    = 1; 
            imm_src    = 0;    // I-type immediate
            reg_write  = 1;
            alu_op     = 0;    // ADD for PC = rs1 + imm
            jalr       = 1;
        end

        7'd111: begin
            pc_src     = 1;
            result_src = 2;    // PC+4
            mem_write  = 0;
            alu_src    = 1; 
            imm_src    = 3;    // J-type immediate
            reg_write  = 1;
            jalr       = 0;
        end

        default: begin
            $display("ERROR: Invalid opcode %0d", opcode);
        end

    endcase
end

endmodule
