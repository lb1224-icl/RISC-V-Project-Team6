// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcpu__Syms.h"


VL_ATTR_COLD void Vcpu___024root__trace_init_sub__TOP__0(Vcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+309,"clk", false,-1);
    tracep->declBit(c+310,"rst", false,-1);
    tracep->declBit(c+311,"trigger", false,-1);
    tracep->declBus(c+312,"a0", false,-1, 31,0);
    tracep->pushNamePrefix("cpu ");
    tracep->declBus(c+316,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+309,"clk", false,-1);
    tracep->declBit(c+310,"rst", false,-1);
    tracep->declBit(c+311,"trigger", false,-1);
    tracep->declBus(c+312,"a0", false,-1, 31,0);
    tracep->declBit(c+311,"unused_trigger", false,-1);
    tracep->declBus(c+180,"pc_target_e", false,-1, 31,0);
    tracep->declBit(c+230,"pc_src_e", false,-1);
    tracep->declBus(c+231,"pc_plus4_f", false,-1, 31,0);
    tracep->declBus(c+232,"pc_f", false,-1, 31,0);
    tracep->declBus(c+233,"instr_f", false,-1, 31,0);
    tracep->declBus(c+3,"pc_d", false,-1, 31,0);
    tracep->declBus(c+4,"pc_plus4_d", false,-1, 31,0);
    tracep->declBus(c+234,"instr_d", false,-1, 31,0);
    tracep->declBit(c+235,"reg_write_w", false,-1);
    tracep->declBus(c+236,"result_w", false,-1, 31,0);
    tracep->declBus(c+237,"rd_w", false,-1, 4,0);
    tracep->declBit(c+238,"reg_write_d", false,-1);
    tracep->declBus(c+239,"result_src_d", false,-1, 1,0);
    tracep->declBit(c+240,"mem_write_d", false,-1);
    tracep->declBit(c+241,"jump_d", false,-1);
    tracep->declBit(c+242,"branch_d", false,-1);
    tracep->declBus(c+243,"alu_ctrl_d", false,-1, 3,0);
    tracep->declBit(c+244,"alu_src_d", false,-1);
    tracep->declBus(c+313,"rd1_d", false,-1, 31,0);
    tracep->declBus(c+314,"rd2_d", false,-1, 31,0);
    tracep->declBus(c+245,"rd_d", false,-1, 4,0);
    tracep->declBus(c+246,"rs1_d", false,-1, 4,0);
    tracep->declBus(c+247,"rs2_d", false,-1, 4,0);
    tracep->declBus(c+248,"imm_ext_d", false,-1, 31,0);
    tracep->declBus(c+249,"funct3_d", false,-1, 2,0);
    tracep->declBit(c+250,"jalr_d", false,-1);
    tracep->declBit(c+251,"op1_pc_d", false,-1);
    tracep->declBit(c+252,"rs1_used_d", false,-1);
    tracep->declBit(c+253,"rs2_used_d", false,-1);
    tracep->declBus(c+254,"mul_ctrl_d", false,-1, 1,0);
    tracep->declBus(c+255,"div_ctrl_d", false,-1, 1,0);
    tracep->declBit(c+256,"mul_en_d", false,-1);
    tracep->declBit(c+257,"div_en_d", false,-1);
    tracep->declBit(c+258,"reg_write_e", false,-1);
    tracep->declBus(c+5,"result_src_e", false,-1, 1,0);
    tracep->declBit(c+259,"mem_write_e", false,-1);
    tracep->declBit(c+6,"jump_e", false,-1);
    tracep->declBit(c+7,"branch_e", false,-1);
    tracep->declBus(c+8,"alu_ctrl_e", false,-1, 3,0);
    tracep->declBit(c+9,"alu_src_e", false,-1);
    tracep->declBus(c+10,"funct3_e", false,-1, 2,0);
    tracep->declBit(c+11,"jalr_e", false,-1);
    tracep->declBit(c+12,"op1_pc_e", false,-1);
    tracep->declBus(c+13,"rd1_e", false,-1, 31,0);
    tracep->declBus(c+14,"rd2_e", false,-1, 31,0);
    tracep->declBus(c+15,"pc_e", false,-1, 31,0);
    tracep->declBus(c+260,"rd_e", false,-1, 4,0);
    tracep->declBus(c+16,"rs1_e", false,-1, 4,0);
    tracep->declBus(c+17,"rs2_e", false,-1, 4,0);
    tracep->declBus(c+18,"imm_ext_e", false,-1, 31,0);
    tracep->declBus(c+19,"pc_plus4_e", false,-1, 31,0);
    tracep->declBit(c+20,"rs1_used_e", false,-1);
    tracep->declBit(c+21,"rs2_used_e", false,-1);
    tracep->declBus(c+22,"mul_ctrl_e", false,-1, 1,0);
    tracep->declBus(c+261,"div_ctrl_e", false,-1, 1,0);
    tracep->declBit(c+23,"mul_en_e", false,-1);
    tracep->declBit(c+24,"div_en_e", false,-1);
    tracep->declBus(c+25,"ex_out_m", false,-1, 31,0);
    tracep->declBus(c+262,"fwd_rs1", false,-1, 1,0);
    tracep->declBus(c+263,"fwd_rs2", false,-1, 1,0);
    tracep->declBus(c+315,"ex_out_e", false,-1, 31,0);
    tracep->declBus(c+264,"write_data_e", false,-1, 31,0);
    tracep->declBit(c+317,"div_done_e", false,-1);
    tracep->declBit(c+265,"reg_write_m", false,-1);
    tracep->declBus(c+26,"result_src_m", false,-1, 1,0);
    tracep->declBit(c+266,"mem_write_m", false,-1);
    tracep->declBus(c+27,"write_data_m", false,-1, 31,0);
    tracep->declBus(c+267,"rd_m", false,-1, 4,0);
    tracep->declBus(c+28,"pc_plus4_m", false,-1, 31,0);
    tracep->declBus(c+29,"funct3_m", false,-1, 2,0);
    tracep->declBit(c+268,"mem_valid_m", false,-1);
    tracep->declBit(c+181,"mem_ready_m", false,-1);
    tracep->declBus(c+182,"read_data_m", false,-1, 31,0);
    tracep->declBus(c+30,"result_src_w", false,-1, 1,0);
    tracep->declBus(c+31,"ex_out_w", false,-1, 31,0);
    tracep->declBus(c+32,"read_data_w", false,-1, 31,0);
    tracep->declBus(c+33,"pc_plus4_w", false,-1, 31,0);
    tracep->declBit(c+269,"stall", false,-1);
    tracep->declBit(c+270,"flush", false,-1);
    tracep->declBit(c+271,"div_stall", false,-1);
    tracep->declBit(c+272,"cache_stall", false,-1);
    tracep->declBit(c+183,"div_busy_e", false,-1);
    tracep->pushNamePrefix("de_register ");
    tracep->declBus(c+316,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+309,"clk", false,-1);
    tracep->declBit(c+310,"rst", false,-1);
    tracep->declBit(c+269,"stall", false,-1);
    tracep->declBit(c+270,"flush", false,-1);
    tracep->declBit(c+238,"reg_write_d", false,-1);
    tracep->declBus(c+239,"result_src_d", false,-1, 1,0);
    tracep->declBit(c+240,"mem_write_d", false,-1);
    tracep->declBit(c+241,"jump_d", false,-1);
    tracep->declBit(c+242,"branch_d", false,-1);
    tracep->declBus(c+243,"alu_ctrl_d", false,-1, 3,0);
    tracep->declBit(c+244,"alu_src_d", false,-1);
    tracep->declBus(c+249,"funct3_d", false,-1, 2,0);
    tracep->declBit(c+250,"jalr_d", false,-1);
    tracep->declBit(c+251,"op1_pc_d", false,-1);
    tracep->declBit(c+252,"rs1_used_d", false,-1);
    tracep->declBit(c+253,"rs2_used_d", false,-1);
    tracep->declBus(c+313,"rd1_d", false,-1, 31,0);
    tracep->declBus(c+314,"rd2_d", false,-1, 31,0);
    tracep->declBus(c+3,"pc_d", false,-1, 31,0);
    tracep->declBus(c+245,"rd_d", false,-1, 4,0);
    tracep->declBus(c+246,"rs1_d", false,-1, 4,0);
    tracep->declBus(c+247,"rs2_d", false,-1, 4,0);
    tracep->declBus(c+248,"imm_ext_d", false,-1, 31,0);
    tracep->declBus(c+4,"pc_plus4_d", false,-1, 31,0);
    tracep->declBus(c+254,"mul_ctrl_d", false,-1, 1,0);
    tracep->declBus(c+255,"div_ctrl_d", false,-1, 1,0);
    tracep->declBit(c+256,"mul_en_d", false,-1);
    tracep->declBit(c+257,"div_en_d", false,-1);
    tracep->declBit(c+271,"div_stall", false,-1);
    tracep->declBit(c+272,"cache_stall", false,-1);
    tracep->declBit(c+258,"reg_write_e", false,-1);
    tracep->declBus(c+5,"result_src_e", false,-1, 1,0);
    tracep->declBit(c+259,"mem_write_e", false,-1);
    tracep->declBit(c+6,"jump_e", false,-1);
    tracep->declBit(c+7,"branch_e", false,-1);
    tracep->declBus(c+8,"alu_ctrl_e", false,-1, 3,0);
    tracep->declBit(c+9,"alu_src_e", false,-1);
    tracep->declBus(c+10,"funct3_e", false,-1, 2,0);
    tracep->declBit(c+11,"jalr_e", false,-1);
    tracep->declBit(c+12,"op1_pc_e", false,-1);
    tracep->declBus(c+13,"rd1_e", false,-1, 31,0);
    tracep->declBus(c+14,"rd2_e", false,-1, 31,0);
    tracep->declBus(c+15,"pc_e", false,-1, 31,0);
    tracep->declBus(c+260,"rd_e", false,-1, 4,0);
    tracep->declBus(c+16,"rs1_e", false,-1, 4,0);
    tracep->declBus(c+17,"rs2_e", false,-1, 4,0);
    tracep->declBus(c+18,"imm_ext_e", false,-1, 31,0);
    tracep->declBus(c+19,"pc_plus4_e", false,-1, 31,0);
    tracep->declBit(c+20,"rs1_used_e", false,-1);
    tracep->declBit(c+21,"rs2_used_e", false,-1);
    tracep->declBus(c+22,"mul_ctrl_e", false,-1, 1,0);
    tracep->declBus(c+261,"div_ctrl_e", false,-1, 1,0);
    tracep->declBit(c+23,"mul_en_e", false,-1);
    tracep->declBit(c+24,"div_en_e", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("em_register ");
    tracep->declBus(c+316,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+309,"clk", false,-1);
    tracep->declBit(c+310,"rst", false,-1);
    tracep->declBit(c+258,"reg_write_e", false,-1);
    tracep->declBus(c+5,"result_src_e", false,-1, 1,0);
    tracep->declBit(c+259,"mem_write_e", false,-1);
    tracep->declBus(c+315,"ex_out_e", false,-1, 31,0);
    tracep->declBus(c+264,"write_data_e", false,-1, 31,0);
    tracep->declBus(c+260,"rd_e", false,-1, 4,0);
    tracep->declBus(c+19,"pc_plus4_e", false,-1, 31,0);
    tracep->declBus(c+10,"funct3_e", false,-1, 2,0);
    tracep->declBit(c+271,"div_stall", false,-1);
    tracep->declBit(c+272,"cache_stall", false,-1);
    tracep->declBit(c+265,"reg_write_m", false,-1);
    tracep->declBus(c+26,"result_src_m", false,-1, 1,0);
    tracep->declBit(c+266,"mem_write_m", false,-1);
    tracep->declBus(c+25,"ex_out_m", false,-1, 31,0);
    tracep->declBus(c+27,"write_data_m", false,-1, 31,0);
    tracep->declBus(c+267,"rd_m", false,-1, 4,0);
    tracep->declBus(c+28,"pc_plus4_m", false,-1, 31,0);
    tracep->declBus(c+29,"funct3_m", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fd_register ");
    tracep->declBus(c+316,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+309,"clk", false,-1);
    tracep->declBit(c+310,"rst", false,-1);
    tracep->declBit(c+270,"flush", false,-1);
    tracep->declBit(c+269,"stall", false,-1);
    tracep->declBus(c+232,"pc_f", false,-1, 31,0);
    tracep->declBus(c+231,"pc_plus4_f", false,-1, 31,0);
    tracep->declBus(c+233,"instr_f", false,-1, 31,0);
    tracep->declBit(c+271,"div_stall", false,-1);
    tracep->declBit(c+272,"cache_stall", false,-1);
    tracep->declBus(c+3,"pc_d", false,-1, 31,0);
    tracep->declBus(c+4,"pc_plus4_d", false,-1, 31,0);
    tracep->declBus(c+234,"instr_d", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("hu ");
    tracep->declBus(c+260,"rd_e", false,-1, 4,0);
    tracep->declBus(c+267,"rd_m", false,-1, 4,0);
    tracep->declBus(c+237,"rd_w", false,-1, 4,0);
    tracep->declBus(c+246,"rs1_d", false,-1, 4,0);
    tracep->declBus(c+247,"rs2_d", false,-1, 4,0);
    tracep->declBus(c+16,"rs1_e", false,-1, 4,0);
    tracep->declBus(c+17,"rs2_e", false,-1, 4,0);
    tracep->declBit(c+252,"rs1_used_d", false,-1);
    tracep->declBit(c+253,"rs2_used_d", false,-1);
    tracep->declBit(c+20,"rs1_used_e", false,-1);
    tracep->declBit(c+21,"rs2_used_e", false,-1);
    tracep->declBit(c+265,"reg_write_m", false,-1);
    tracep->declBit(c+235,"reg_write_w", false,-1);
    tracep->declBit(c+34,"load_e", false,-1);
    tracep->declBit(c+230,"branch_taken", false,-1);
    tracep->declBit(c+183,"div_busy_e", false,-1);
    tracep->declBit(c+181,"mem_ready_m", false,-1);
    tracep->declBit(c+269,"stall", false,-1);
    tracep->declBit(c+270,"flush", false,-1);
    tracep->declBus(c+262,"fwd_rs1", false,-1, 1,0);
    tracep->declBus(c+263,"fwd_rs2", false,-1, 1,0);
    tracep->declBit(c+271,"div_stall", false,-1);
    tracep->declBit(c+272,"cache_stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mw_register ");
    tracep->declBus(c+316,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+309,"clk", false,-1);
    tracep->declBit(c+310,"rst", false,-1);
    tracep->declBit(c+265,"reg_write_m", false,-1);
    tracep->declBus(c+26,"result_src_m", false,-1, 1,0);
    tracep->declBus(c+25,"ex_out_m", false,-1, 31,0);
    tracep->declBus(c+182,"read_data_m", false,-1, 31,0);
    tracep->declBus(c+267,"rd_m", false,-1, 4,0);
    tracep->declBus(c+28,"pc_plus4_m", false,-1, 31,0);
    tracep->declBit(c+272,"cache_stall", false,-1);
    tracep->declBit(c+235,"reg_write_w", false,-1);
    tracep->declBus(c+30,"result_src_w", false,-1, 1,0);
    tracep->declBus(c+31,"ex_out_w", false,-1, 31,0);
    tracep->declBus(c+32,"read_data_w", false,-1, 31,0);
    tracep->declBus(c+237,"rd_w", false,-1, 4,0);
    tracep->declBus(c+33,"pc_plus4_w", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_decode ");
    tracep->declBus(c+316,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+309,"clk", false,-1);
    tracep->declBit(c+235,"reg_write_w", false,-1);
    tracep->declBus(c+234,"instr_d", false,-1, 31,0);
    tracep->declBus(c+236,"result_w", false,-1, 31,0);
    tracep->declBus(c+237,"rd_w", false,-1, 4,0);
    tracep->declBit(c+238,"reg_write_d", false,-1);
    tracep->declBus(c+239,"result_src_d", false,-1, 1,0);
    tracep->declBit(c+240,"mem_write_d", false,-1);
    tracep->declBit(c+241,"jump_d", false,-1);
    tracep->declBit(c+242,"branch_d", false,-1);
    tracep->declBus(c+243,"alu_control_d", false,-1, 3,0);
    tracep->declBit(c+244,"alu_src_d", false,-1);
    tracep->declBus(c+313,"rd1_d", false,-1, 31,0);
    tracep->declBus(c+314,"rd2_d", false,-1, 31,0);
    tracep->declBus(c+245,"rd_d", false,-1, 4,0);
    tracep->declBus(c+246,"rs1_d", false,-1, 4,0);
    tracep->declBus(c+247,"rs2_d", false,-1, 4,0);
    tracep->declBus(c+248,"imm_ext_d", false,-1, 31,0);
    tracep->declBus(c+312,"a0", false,-1, 31,0);
    tracep->declBus(c+249,"funct3_d", false,-1, 2,0);
    tracep->declBit(c+250,"jalr_d", false,-1);
    tracep->declBit(c+251,"op1_pc_d", false,-1);
    tracep->declBit(c+252,"rs1_used_d", false,-1);
    tracep->declBit(c+253,"rs2_used_d", false,-1);
    tracep->declBus(c+254,"mul_ctrl_d", false,-1, 1,0);
    tracep->declBus(c+255,"div_ctrl_d", false,-1, 1,0);
    tracep->declBit(c+256,"mul_en_d", false,-1);
    tracep->declBit(c+257,"div_en_d", false,-1);
    tracep->declBus(c+273,"imm_src_d", false,-1, 2,0);
    tracep->pushNamePrefix("cu ");
    tracep->declBus(c+316,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+234,"ins", false,-1, 31,0);
    tracep->declBit(c+241,"jump_d", false,-1);
    tracep->declBit(c+242,"branch_d", false,-1);
    tracep->declBus(c+239,"result_src", false,-1, 1,0);
    tracep->declBit(c+240,"mem_write", false,-1);
    tracep->declBus(c+243,"alu_ctrl", false,-1, 3,0);
    tracep->declBit(c+244,"alu_src", false,-1);
    tracep->declBus(c+273,"imm_src", false,-1, 2,0);
    tracep->declBit(c+238,"reg_write", false,-1);
    tracep->declBit(c+251,"op1_pc", false,-1);
    tracep->declBus(c+249,"funct3", false,-1, 2,0);
    tracep->declBit(c+250,"jalr", false,-1);
    tracep->declBit(c+252,"rs1_signal", false,-1);
    tracep->declBit(c+253,"rs2_signal", false,-1);
    tracep->declBus(c+254,"mul_ctrl", false,-1, 1,0);
    tracep->declBus(c+255,"div_ctrl", false,-1, 1,0);
    tracep->declBit(c+256,"mul_en", false,-1);
    tracep->declBit(c+257,"div_en", false,-1);
    tracep->declBus(c+274,"opcode", false,-1, 6,0);
    tracep->declBus(c+275,"funct7", false,-1, 6,0);
    tracep->declBus(c+276,"alu_logic", false,-1, 2,0);
    tracep->pushNamePrefix("decoder_1 ");
    tracep->declBus(c+274,"opcode", false,-1, 6,0);
    tracep->declBus(c+249,"funct3", false,-1, 2,0);
    tracep->declBus(c+275,"funct7", false,-1, 6,0);
    tracep->declBit(c+241,"jump_d", false,-1);
    tracep->declBit(c+242,"branch_d", false,-1);
    tracep->declBus(c+239,"result_src", false,-1, 1,0);
    tracep->declBit(c+240,"mem_write", false,-1);
    tracep->declBit(c+244,"alu_src", false,-1);
    tracep->declBus(c+273,"imm_src", false,-1, 2,0);
    tracep->declBit(c+238,"reg_write", false,-1);
    tracep->declBus(c+276,"alu_op", false,-1, 2,0);
    tracep->declBit(c+250,"jalr", false,-1);
    tracep->declBit(c+251,"op1_pc", false,-1);
    tracep->declBit(c+252,"rs1_signal", false,-1);
    tracep->declBit(c+253,"rs2_signal", false,-1);
    tracep->declBit(c+256,"mul_en", false,-1);
    tracep->declBit(c+257,"div_en", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("decoder_2 ");
    tracep->declBus(c+276,"alu_op", false,-1, 2,0);
    tracep->declBit(c+277,"opcode_5", false,-1);
    tracep->declBus(c+249,"funct3", false,-1, 2,0);
    tracep->declBit(c+278,"funct7_5", false,-1);
    tracep->declBus(c+243,"alu_ctrl", false,-1, 3,0);
    tracep->declBus(c+254,"mul_ctrl", false,-1, 1,0);
    tracep->declBus(c+255,"div_ctrl", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("rf ");
    tracep->declBus(c+316,"D_WIDTH", false,-1, 31,0);
    tracep->declBus(c+318,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBit(c+309,"clk", false,-1);
    tracep->declBit(c+235,"wr_en", false,-1);
    tracep->declBus(c+237,"a3", false,-1, 4,0);
    tracep->declBus(c+246,"a1", false,-1, 4,0);
    tracep->declBus(c+247,"a2", false,-1, 4,0);
    tracep->declBus(c+236,"din", false,-1, 31,0);
    tracep->declBus(c+313,"dout1", false,-1, 31,0);
    tracep->declBus(c+314,"dout2", false,-1, 31,0);
    tracep->declBus(c+312,"a0", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+198+i*1,"ram_array", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("se ");
    tracep->declBus(c+316,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+273,"imm_src", false,-1, 2,0);
    tracep->declBus(c+234,"ins", false,-1, 31,0);
    tracep->declBus(c+248,"imm_op", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_execute ");
    tracep->declBus(c+316,"D_WIDTH", false,-1, 31,0);
    tracep->declBit(c+309,"clk", false,-1);
    tracep->declBit(c+310,"rst", false,-1);
    tracep->declBus(c+8,"alu_ctrl_e", false,-1, 3,0);
    tracep->declBit(c+9,"alu_src_e", false,-1);
    tracep->declBus(c+13,"rd1_e", false,-1, 31,0);
    tracep->declBus(c+14,"rd2_e", false,-1, 31,0);
    tracep->declBus(c+15,"pc_e", false,-1, 31,0);
    tracep->declBus(c+18,"imm_ext_e", false,-1, 31,0);
    tracep->declBit(c+6,"jump_e", false,-1);
    tracep->declBit(c+7,"branch_e", false,-1);
    tracep->declBus(c+10,"funct3_e", false,-1, 2,0);
    tracep->declBit(c+11,"jalr_e", false,-1);
    tracep->declBit(c+12,"op1_pc_e", false,-1);
    tracep->declBus(c+236,"result_w", false,-1, 31,0);
    tracep->declBus(c+25,"ex_out_m", false,-1, 31,0);
    tracep->declBus(c+262,"fwd_rs1", false,-1, 1,0);
    tracep->declBus(c+263,"fwd_rs2", false,-1, 1,0);
    tracep->declBus(c+22,"mul_ctrl_e", false,-1, 1,0);
    tracep->declBus(c+261,"div_ctrl_e", false,-1, 1,0);
    tracep->declBit(c+23,"mul_en_e", false,-1);
    tracep->declBit(c+24,"div_en_e", false,-1);
    tracep->declBit(c+319,"cache_stall", false,-1);
    tracep->declBit(c+230,"pc_src_e", false,-1);
    tracep->declBus(c+315,"ex_out_e", false,-1, 31,0);
    tracep->declBus(c+264,"write_data_e", false,-1, 31,0);
    tracep->declBus(c+180,"pc_target_e", false,-1, 31,0);
    tracep->declBit(c+183,"div_busy_e", false,-1);
    tracep->declBit(c+184,"zero_e", false,-1);
    tracep->declBus(c+279,"src_a_e", false,-1, 31,0);
    tracep->declBus(c+280,"src_b_e", false,-1, 31,0);
    tracep->declBus(c+281,"alu_res", false,-1, 31,0);
    tracep->declBus(c+35,"pc_imm", false,-1, 31,0);
    tracep->declBus(c+185,"fwd_aluop1_raw", false,-1, 31,0);
    tracep->declBus(c+264,"fwd_aluop2_out", false,-1, 31,0);
    tracep->declBus(c+282,"mul_out_e", false,-1, 31,0);
    tracep->declBus(c+187,"div_out_e", false,-1, 31,0);
    tracep->declBus(c+315,"ex_result", false,-1, 31,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+316,"D_WIDTH", false,-1, 31,0);
    tracep->declBus(c+279,"aluop1", false,-1, 31,0);
    tracep->declBus(c+280,"aluop2", false,-1, 31,0);
    tracep->declBus(c+8,"aluctrl", false,-1, 3,0);
    tracep->declBus(c+10,"funct3", false,-1, 2,0);
    tracep->declBus(c+281,"aluout", false,-1, 31,0);
    tracep->declBit(c+184,"eq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("divider ");
    tracep->declBus(c+316,"D_WIDTH", false,-1, 31,0);
    tracep->declBit(c+309,"clk", false,-1);
    tracep->declBit(c+310,"rst", false,-1);
    tracep->declBit(c+319,"cache_stall", false,-1);
    tracep->declBit(c+24,"start", false,-1);
    tracep->declBus(c+261,"div_ctrl", false,-1, 1,0);
    tracep->declBus(c+279,"numerator", false,-1, 31,0);
    tracep->declBus(c+280,"denominator", false,-1, 31,0);
    tracep->declBus(c+187,"result", false,-1, 31,0);
    tracep->declBit(c+183,"div_busy", false,-1);
    tracep->declBus(c+283,"counter", false,-1, 5,0);
    tracep->declBus(c+284,"state", false,-1, 1,0);
    tracep->declBus(c+285,"next_state", false,-1, 1,0);
    tracep->declQuad(c+188,"div_r", false,-1, 32,0);
    tracep->declBus(c+190,"div_q", false,-1, 31,0);
    tracep->declBus(c+191,"div_shift", false,-1, 31,0);
    tracep->declQuad(c+192,"div_d", false,-1, 32,0);
    tracep->declBus(c+286,"n_reg", false,-1, 31,0);
    tracep->declBus(c+287,"d_reg", false,-1, 31,0);
    tracep->declBit(c+194,"sign_q", false,-1);
    tracep->declBit(c+195,"sign_r", false,-1);
    tracep->declBit(c+288,"is_signed", false,-1);
    tracep->declBit(c+289,"start_q", false,-1);
    tracep->declBit(c+290,"busy_q", false,-1);
    tracep->declBit(c+291,"start_pulse", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declQuad(c+196,"div_r_next", false,-1, 32,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("fwd_aluop1 ");
    tracep->declBus(c+316,"D_WIDTH", false,-1, 31,0);
    tracep->declBus(c+13,"in0", false,-1, 31,0);
    tracep->declBus(c+236,"in1", false,-1, 31,0);
    tracep->declBus(c+25,"in2", false,-1, 31,0);
    tracep->declBus(c+320,"in3", false,-1, 31,0);
    tracep->declBus(c+262,"sel", false,-1, 1,0);
    tracep->declBus(c+185,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd_aluop2 ");
    tracep->declBus(c+316,"D_WIDTH", false,-1, 31,0);
    tracep->declBus(c+14,"in0", false,-1, 31,0);
    tracep->declBus(c+236,"in1", false,-1, 31,0);
    tracep->declBus(c+25,"in2", false,-1, 31,0);
    tracep->declBus(c+320,"in3", false,-1, 31,0);
    tracep->declBus(c+263,"sel", false,-1, 1,0);
    tracep->declBus(c+264,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("imm_mux ");
    tracep->declBus(c+316,"D_WIDTH", false,-1, 31,0);
    tracep->declBus(c+264,"in0", false,-1, 31,0);
    tracep->declBus(c+18,"in1", false,-1, 31,0);
    tracep->declBit(c+9,"sel", false,-1);
    tracep->declBus(c+280,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mul_div_alu ");
    tracep->declBus(c+316,"D_WIDTH", false,-1, 31,0);
    tracep->declBus(c+281,"in0", false,-1, 31,0);
    tracep->declBus(c+282,"in1", false,-1, 31,0);
    tracep->declBus(c+187,"in2", false,-1, 31,0);
    tracep->declBus(c+320,"in3", false,-1, 31,0);
    tracep->declBus(c+36,"sel", false,-1, 1,0);
    tracep->declBus(c+315,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("multiplier ");
    tracep->declBus(c+316,"D_WIDTH", false,-1, 31,0);
    tracep->declBus(c+279,"op1", false,-1, 31,0);
    tracep->declBus(c+280,"op2", false,-1, 31,0);
    tracep->declBus(c+22,"mul_ctrl", false,-1, 1,0);
    tracep->declBus(c+282,"result", false,-1, 31,0);
    tracep->declQuad(c+292,"full_result", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_mux ");
    tracep->declBus(c+316,"D_WIDTH", false,-1, 31,0);
    tracep->declBus(c+35,"in0", false,-1, 31,0);
    tracep->declBus(c+281,"in1", false,-1, 31,0);
    tracep->declBit(c+11,"sel", false,-1);
    tracep->declBus(c+180,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_branch ");
    tracep->declBus(c+316,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+15,"pc", false,-1, 31,0);
    tracep->declBus(c+18,"imm", false,-1, 31,0);
    tracep->declBus(c+35,"branch_pc", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_fetch ");
    tracep->declBus(c+316,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+309,"clk", false,-1);
    tracep->declBit(c+310,"rst", false,-1);
    tracep->declBit(c+269,"stall", false,-1);
    tracep->declBit(c+271,"div_stall", false,-1);
    tracep->declBit(c+272,"cache_stall", false,-1);
    tracep->declBus(c+180,"pc_target_e", false,-1, 31,0);
    tracep->declBit(c+230,"pc_src_e", false,-1);
    tracep->declBus(c+231,"pc_plus4_f", false,-1, 31,0);
    tracep->declBus(c+232,"pc_f", false,-1, 31,0);
    tracep->declBus(c+233,"instr_f", false,-1, 31,0);
    tracep->declBus(c+186,"next_pc", false,-1, 31,0);
    tracep->declBus(c+231,"pc_plus4", false,-1, 31,0);
    tracep->pushNamePrefix("u_instr_mem ");
    tracep->declBus(c+316,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+316,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+321,"SIZE", false,-1, 31,0);
    tracep->declBus(c+232,"addr", false,-1, 31,0);
    tracep->declBus(c+233,"dout", false,-1, 31,0);
    tracep->declBus(c+294,"byte_addr", false,-1, 13,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_pc_inc ");
    tracep->declBus(c+316,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+232,"pc", false,-1, 31,0);
    tracep->declBus(c+231,"inc_pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_pc_mux ");
    tracep->declBus(c+316,"D_WIDTH", false,-1, 31,0);
    tracep->declBus(c+231,"in0", false,-1, 31,0);
    tracep->declBus(c+180,"in1", false,-1, 31,0);
    tracep->declBit(c+230,"sel", false,-1);
    tracep->declBus(c+186,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_pc_reg ");
    tracep->declBus(c+316,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+309,"clk", false,-1);
    tracep->declBit(c+310,"rst", false,-1);
    tracep->declBit(c+269,"stall", false,-1);
    tracep->declBit(c+271,"div_stall", false,-1);
    tracep->declBit(c+272,"cache_stall", false,-1);
    tracep->declBus(c+186,"pc_in", false,-1, 31,0);
    tracep->declBus(c+232,"pc_out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_memory ");
    tracep->declBus(c+316,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+309,"clk", false,-1);
    tracep->declBit(c+310,"rst", false,-1);
    tracep->declBit(c+268,"mem_valid", false,-1);
    tracep->declBus(c+25,"ex_out_m", false,-1, 31,0);
    tracep->declBus(c+27,"write_data_m", false,-1, 31,0);
    tracep->declBit(c+266,"mem_write_m", false,-1);
    tracep->declBus(c+29,"funct3_m", false,-1, 2,0);
    tracep->declBit(c+181,"mem_ready", false,-1);
    tracep->declBus(c+182,"read_data_m", false,-1, 31,0);
    tracep->declBus(c+295,"mem_word", false,-1, 31,0);
    tracep->declBus(c+296,"store_data", false,-1, 31,0);
    tracep->declBus(c+37,"byte_en", false,-1, 3,0);
    tracep->declBus(c+297,"selected_byte", false,-1, 7,0);
    tracep->declBus(c+298,"selected_half", false,-1, 15,0);
    tracep->declBus(c+38,"byte_offset", false,-1, 1,0);
    tracep->declBus(c+39,"byte_shift", false,-1, 4,0);
    tracep->pushNamePrefix("u_mmu ");
    tracep->declBus(c+316,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+316,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+322,"LINE_SIZE", false,-1, 31,0);
    tracep->declBit(c+309,"clk", false,-1);
    tracep->declBit(c+310,"rst", false,-1);
    tracep->declBit(c+268,"mem_valid", false,-1);
    tracep->declBit(c+266,"mem_we", false,-1);
    tracep->declBus(c+25,"mem_addr", false,-1, 31,0);
    tracep->declBus(c+296,"mem_w_data", false,-1, 31,0);
    tracep->declBus(c+299,"mem_byte_en", false,-1, 3,0);
    tracep->declBus(c+295,"mem_r_data", false,-1, 31,0);
    tracep->declBit(c+181,"mem_ready", false,-1);
    tracep->declBit(c+40,"cache_hit", false,-1);
    tracep->declBus(c+323,"BYTES_PER_WORD", false,-1, 31,0);
    tracep->declBus(c+323,"WORDS_PER_LINE", false,-1, 31,0);
    tracep->declBus(c+324,"BLOCK_BITS", false,-1, 31,0);
    tracep->declBus(c+323,"OFFSET_BITS", false,-1, 31,0);
    tracep->declBus(c+325,"WORD_SEL_BITS", false,-1, 31,0);
    tracep->declBus(c+41,"addr_word_index", false,-1, 1,0);
    tracep->declBus(c+42,"addr_block_base", false,-1, 31,0);
    tracep->declBus(c+43,"l1_r_word", false,-1, 31,0);
    tracep->declBit(c+44,"l1_hit", false,-1);
    tracep->declBit(c+45,"l1_fill_en", false,-1);
    tracep->declBus(c+46,"l1_fill_addr", false,-1, 31,0);
    tracep->declArray(c+47,"l1_fill_data", false,-1, 127,0);
    tracep->declBit(c+51,"l1_fill_mark_valid", false,-1);
    tracep->declArray(c+52,"l2_r_block", false,-1, 127,0);
    tracep->declBit(c+56,"l2_hit", false,-1);
    tracep->declBit(c+57,"l2_fill_en", false,-1);
    tracep->declBus(c+58,"l2_fill_addr", false,-1, 31,0);
    tracep->declArray(c+59,"l2_fill_data", false,-1, 127,0);
    tracep->declBit(c+63,"l2_fill_mark_valid", false,-1);
    tracep->declArray(c+64,"l3_r_block", false,-1, 127,0);
    tracep->declBit(c+68,"l3_hit", false,-1);
    tracep->declBit(c+69,"l3_fill_en", false,-1);
    tracep->declBus(c+70,"l3_fill_addr", false,-1, 31,0);
    tracep->declArray(c+71,"l3_fill_data", false,-1, 127,0);
    tracep->declBit(c+75,"l3_fill_mark_valid", false,-1);
    tracep->declBus(c+300,"ram_addr", false,-1, 31,0);
    tracep->declBus(c+301,"ram_r_data", false,-1, 31,0);
    tracep->declBus(c+296,"ram_w_data", false,-1, 31,0);
    tracep->declBus(c+76,"state", false,-1, 0,0);
    tracep->declBus(c+77,"saved_addr", false,-1, 31,0);
    tracep->declBus(c+78,"saved_word_index", false,-1, 1,0);
    tracep->declBus(c+79,"fill_count", false,-1, 1,0);
    tracep->declArray(c+80,"block_buf", false,-1, 127,0);
    tracep->declBit(c+84,"resp_valid", false,-1);
    tracep->declBus(c+85,"resp_word_index", false,-1, 1,0);
    tracep->declBit(c+40,"last_read_hit", false,-1);
    tracep->declBus(c+295,"resp_data_comb", false,-1, 31,0);
    tracep->pushNamePrefix("u_l1 ");
    tracep->declBus(c+316,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+316,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+326,"CACHE_SIZE", false,-1, 31,0);
    tracep->declBus(c+322,"LINE_SIZE", false,-1, 31,0);
    tracep->declBus(c+327,"WAYS", false,-1, 31,0);
    tracep->declBit(c+309,"clk", false,-1);
    tracep->declBit(c+310,"rst", false,-1);
    tracep->declBit(c+268,"mem_valid", false,-1);
    tracep->declBit(c+266,"mem_we", false,-1);
    tracep->declBus(c+25,"mem_addr", false,-1, 31,0);
    tracep->declBus(c+296,"mem_w_data", false,-1, 31,0);
    tracep->declBus(c+299,"mem_byte_en", false,-1, 3,0);
    tracep->declBus(c+43,"mem_r_data", false,-1, 31,0);
    tracep->declBit(c+44,"cache_hit", false,-1);
    tracep->declBit(c+45,"fill_en", false,-1);
    tracep->declBus(c+46,"fill_addr", false,-1, 31,0);
    tracep->declArray(c+47,"fill_data", false,-1, 127,0);
    tracep->declBit(c+51,"fill_mark_valid", false,-1);
    tracep->declBus(c+328,"LINES", false,-1, 31,0);
    tracep->declBus(c+324,"SETS", false,-1, 31,0);
    tracep->declBus(c+323,"OFFSET_BITS", false,-1, 31,0);
    tracep->declBus(c+329,"SET_BITS", false,-1, 31,0);
    tracep->declBus(c+330,"TAG_BITS", false,-1, 31,0);
    tracep->declBus(c+323,"BYTES_PER_WORD", false,-1, 31,0);
    tracep->declBus(c+323,"WORDS_PER_LINE", false,-1, 31,0);
    tracep->declBus(c+325,"WORD_SEL_BITS", false,-1, 31,0);
    tracep->declBus(c+324,"LINE_BITS", false,-1, 31,0);
    tracep->declBus(c+331,"WAY_BITS", false,-1, 31,0);
    tracep->declBus(c+86,"mem_tag", false,-1, 20,0);
    tracep->declBus(c+87,"mem_set", false,-1, 6,0);
    tracep->declBus(c+88,"mem_off", false,-1, 3,0);
    tracep->declBus(c+89,"mem_word_index", false,-1, 1,0);
    tracep->declBus(c+90,"way_hit", false,-1, 1,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declArray(c+91+i*4,"way_data", true,(i+0), 127,0);
    }
    tracep->declBus(c+43,"selected_word", false,-1, 31,0);
    tracep->declBus(c+99,"fill_tag", false,-1, 20,0);
    tracep->declBus(c+100,"fill_set", false,-1, 6,0);
    tracep->declBus(c+101,"repl_way", false,-1, 0,0);
    tracep->declBus(c+302,"byte_mask", false,-1, 31,0);
    tracep->declBus(c+303,"masked_write", false,-1, 31,0);
    tracep->declBus(c+102,"s", false,-1, 31,0);
    tracep->declBus(c+103,"w", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+332,"w", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+332,"w", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+332,"w", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+333,"b", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->declBus(c+104,"ww", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk6 ");
    tracep->declBus(c+105,"cur_word", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("u_l2 ");
    tracep->declBus(c+316,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+316,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+334,"CACHE_SIZE", false,-1, 31,0);
    tracep->declBus(c+322,"LINE_SIZE", false,-1, 31,0);
    tracep->declBus(c+335,"WAYS", false,-1, 31,0);
    tracep->declBit(c+309,"clk", false,-1);
    tracep->declBit(c+310,"rst", false,-1);
    tracep->declBit(c+268,"mem_valid", false,-1);
    tracep->declBit(c+266,"mem_we", false,-1);
    tracep->declBus(c+25,"mem_addr", false,-1, 31,0);
    tracep->declBus(c+296,"mem_w_data", false,-1, 31,0);
    tracep->declBus(c+299,"mem_byte_en", false,-1, 3,0);
    tracep->declArray(c+52,"mem_r_data", false,-1, 127,0);
    tracep->declBit(c+56,"cache_hit", false,-1);
    tracep->declBit(c+57,"fill_en", false,-1);
    tracep->declBus(c+58,"fill_addr", false,-1, 31,0);
    tracep->declArray(c+59,"fill_data", false,-1, 127,0);
    tracep->declBit(c+63,"fill_mark_valid", false,-1);
    tracep->declBus(c+336,"LINES", false,-1, 31,0);
    tracep->declBus(c+328,"SETS", false,-1, 31,0);
    tracep->declBus(c+323,"OFFSET_BITS", false,-1, 31,0);
    tracep->declBus(c+337,"SET_BITS", false,-1, 31,0);
    tracep->declBus(c+338,"TAG_BITS", false,-1, 31,0);
    tracep->declBus(c+323,"BYTES_PER_WORD", false,-1, 31,0);
    tracep->declBus(c+323,"WORDS_PER_LINE", false,-1, 31,0);
    tracep->declBus(c+325,"WORD_SEL_BITS", false,-1, 31,0);
    tracep->declBus(c+324,"LINE_BITS", false,-1, 31,0);
    tracep->declBus(c+325,"WAY_BITS", false,-1, 31,0);
    tracep->declBus(c+106,"mem_tag", false,-1, 19,0);
    tracep->declBus(c+107,"mem_set", false,-1, 7,0);
    tracep->declBus(c+88,"mem_off", false,-1, 3,0);
    tracep->declBus(c+89,"mem_word_index", false,-1, 1,0);
    tracep->declBus(c+108,"way_hit", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declArray(c+109+i*4,"way_data", true,(i+0), 127,0);
    }
    tracep->declArray(c+52,"selected_line", false,-1, 127,0);
    tracep->declBus(c+125,"fill_tag", false,-1, 19,0);
    tracep->declBus(c+126,"fill_set", false,-1, 7,0);
    tracep->declBus(c+127,"repl_way", false,-1, 1,0);
    tracep->declBus(c+304,"byte_mask", false,-1, 31,0);
    tracep->declBus(c+305,"masked_write", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+333,"w", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+333,"w", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+333,"b", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+333,"w", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->declBus(c+128,"s", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk6 ");
    tracep->declBus(c+129,"w", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk7 ");
    tracep->declBus(c+130,"w", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk8 ");
    tracep->declBus(c+131,"cur_word", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("u_l3 ");
    tracep->declBus(c+316,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+316,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+339,"CACHE_SIZE", false,-1, 31,0);
    tracep->declBus(c+322,"LINE_SIZE", false,-1, 31,0);
    tracep->declBus(c+340,"WAYS", false,-1, 31,0);
    tracep->declBit(c+309,"clk", false,-1);
    tracep->declBit(c+310,"rst", false,-1);
    tracep->declBit(c+268,"mem_valid", false,-1);
    tracep->declBit(c+266,"mem_we", false,-1);
    tracep->declBus(c+25,"mem_addr", false,-1, 31,0);
    tracep->declBus(c+296,"mem_w_data", false,-1, 31,0);
    tracep->declBus(c+299,"mem_byte_en", false,-1, 3,0);
    tracep->declArray(c+64,"mem_r_data", false,-1, 127,0);
    tracep->declBit(c+68,"cache_hit", false,-1);
    tracep->declBit(c+69,"fill_en", false,-1);
    tracep->declBus(c+70,"fill_addr", false,-1, 31,0);
    tracep->declArray(c+71,"fill_data", false,-1, 127,0);
    tracep->declBit(c+75,"fill_mark_valid", false,-1);
    tracep->declBus(c+341,"LINES", false,-1, 31,0);
    tracep->declBus(c+342,"SETS", false,-1, 31,0);
    tracep->declBus(c+323,"OFFSET_BITS", false,-1, 31,0);
    tracep->declBus(c+343,"SET_BITS", false,-1, 31,0);
    tracep->declBus(c+344,"TAG_BITS", false,-1, 31,0);
    tracep->declBus(c+323,"BYTES_PER_WORD", false,-1, 31,0);
    tracep->declBus(c+323,"WORDS_PER_LINE", false,-1, 31,0);
    tracep->declBus(c+325,"WORD_SEL_BITS", false,-1, 31,0);
    tracep->declBus(c+324,"LINE_BITS", false,-1, 31,0);
    tracep->declBus(c+345,"WAY_BITS", false,-1, 31,0);
    tracep->declBus(c+132,"mem_tag", false,-1, 18,0);
    tracep->declBus(c+133,"mem_set", false,-1, 8,0);
    tracep->declBus(c+88,"mem_off", false,-1, 3,0);
    tracep->declBus(c+89,"mem_word_index", false,-1, 1,0);
    tracep->declBus(c+134,"way_hit", false,-1, 7,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declArray(c+135+i*4,"way_data", true,(i+0), 127,0);
    }
    tracep->declArray(c+64,"selected_line", false,-1, 127,0);
    tracep->declBus(c+167,"fill_tag", false,-1, 18,0);
    tracep->declBus(c+168,"fill_set", false,-1, 8,0);
    tracep->declBus(c+169,"repl_way", false,-1, 2,0);
    tracep->declBus(c+306,"byte_mask", false,-1, 31,0);
    tracep->declBus(c+307,"masked_write", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+346,"w", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+346,"w", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+333,"b", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+346,"w", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->declBus(c+170,"s", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk6 ");
    tracep->declBus(c+171,"w", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk7 ");
    tracep->declBus(c+172,"w", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk8 ");
    tracep->declBus(c+173,"cur_word", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("u_ram ");
    tracep->declBus(c+316,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+340,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+347,"SIZE", false,-1, 31,0);
    tracep->declBus(c+300,"addr", false,-1, 31,0);
    tracep->declBus(c+296,"write_data", false,-1, 31,0);
    tracep->declBit(c+309,"clk", false,-1);
    tracep->declBit(c+266,"write_enable", false,-1);
    tracep->declBus(c+299,"byte_en", false,-1, 3,0);
    tracep->declBus(c+301,"read_data", false,-1, 31,0);
    tracep->declBus(c+308,"index", false,-1, 16,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+2,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+174,"any_hit", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declArray(c+175,"block_next", false,-1, 127,0);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+179,"base", false,-1, 31,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("u_writeback ");
    tracep->declBus(c+316,"D_WIDTH", false,-1, 31,0);
    tracep->declBus(c+30,"result_src_w", false,-1, 1,0);
    tracep->declBus(c+31,"ex_out_w", false,-1, 31,0);
    tracep->declBus(c+32,"read_data_w", false,-1, 31,0);
    tracep->declBus(c+33,"pc_plus4_w", false,-1, 31,0);
    tracep->declBus(c+236,"result_w", false,-1, 31,0);
    tracep->pushNamePrefix("writeback_mux ");
    tracep->declBus(c+316,"D_WIDTH", false,-1, 31,0);
    tracep->declBus(c+31,"in0", false,-1, 31,0);
    tracep->declBus(c+32,"in1", false,-1, 31,0);
    tracep->declBus(c+33,"in2", false,-1, 31,0);
    tracep->declBus(c+320,"in3", false,-1, 31,0);
    tracep->declBus(c+30,"sel", false,-1, 1,0);
    tracep->declBus(c+236,"out", false,-1, 31,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vcpu___024root__trace_init_top(Vcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_init_top\n"); );
    // Body
    Vcpu___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vcpu___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcpu___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcpu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vcpu___024root__trace_register(Vcpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vcpu___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vcpu___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vcpu___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vcpu___024root__trace_full_sub_0(Vcpu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcpu___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_full_top_0\n"); );
    // Init
    Vcpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu___024root*>(voidSelf);
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcpu___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcpu___024root__trace_full_sub_0(Vcpu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+2,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_ram__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+3,(vlSelf->cpu__DOT__pc_d),32);
    bufp->fullIData(oldp+4,(vlSelf->cpu__DOT__pc_plus4_d),32);
    bufp->fullCData(oldp+5,(vlSelf->cpu__DOT__result_src_e),2);
    bufp->fullBit(oldp+6,(vlSelf->cpu__DOT__jump_e));
    bufp->fullBit(oldp+7,(vlSelf->cpu__DOT__branch_e));
    bufp->fullCData(oldp+8,(vlSelf->cpu__DOT__alu_ctrl_e),4);
    bufp->fullBit(oldp+9,(vlSelf->cpu__DOT__alu_src_e));
    bufp->fullCData(oldp+10,(vlSelf->cpu__DOT__funct3_e),3);
    bufp->fullBit(oldp+11,(vlSelf->cpu__DOT__jalr_e));
    bufp->fullBit(oldp+12,(vlSelf->cpu__DOT__op1_pc_e));
    bufp->fullIData(oldp+13,(vlSelf->cpu__DOT__rd1_e),32);
    bufp->fullIData(oldp+14,(vlSelf->cpu__DOT__rd2_e),32);
    bufp->fullIData(oldp+15,(vlSelf->cpu__DOT__pc_e),32);
    bufp->fullCData(oldp+16,(vlSelf->cpu__DOT__rs1_e),5);
    bufp->fullCData(oldp+17,(vlSelf->cpu__DOT__rs2_e),5);
    bufp->fullIData(oldp+18,(vlSelf->cpu__DOT__imm_ext_e),32);
    bufp->fullIData(oldp+19,(vlSelf->cpu__DOT__pc_plus4_e),32);
    bufp->fullBit(oldp+20,(vlSelf->cpu__DOT__rs1_used_e));
    bufp->fullBit(oldp+21,(vlSelf->cpu__DOT__rs2_used_e));
    bufp->fullCData(oldp+22,(vlSelf->cpu__DOT__mul_ctrl_e),2);
    bufp->fullBit(oldp+23,(vlSelf->cpu__DOT__mul_en_e));
    bufp->fullBit(oldp+24,(vlSelf->cpu__DOT__div_en_e));
    bufp->fullIData(oldp+25,(vlSelf->cpu__DOT__ex_out_m),32);
    bufp->fullCData(oldp+26,(vlSelf->cpu__DOT__result_src_m),2);
    bufp->fullIData(oldp+27,(vlSelf->cpu__DOT__write_data_m),32);
    bufp->fullIData(oldp+28,(vlSelf->cpu__DOT__pc_plus4_m),32);
    bufp->fullCData(oldp+29,(vlSelf->cpu__DOT__funct3_m),3);
    bufp->fullCData(oldp+30,(vlSelf->cpu__DOT__result_src_w),2);
    bufp->fullIData(oldp+31,(vlSelf->cpu__DOT__ex_out_w),32);
    bufp->fullIData(oldp+32,(vlSelf->cpu__DOT__read_data_w),32);
    bufp->fullIData(oldp+33,(vlSelf->cpu__DOT__pc_plus4_w),32);
    bufp->fullBit(oldp+34,((1U == (IData)(vlSelf->cpu__DOT__result_src_e))));
    bufp->fullIData(oldp+35,((vlSelf->cpu__DOT__pc_e 
                              + vlSelf->cpu__DOT__imm_ext_e)),32);
    bufp->fullCData(oldp+36,(vlSelf->cpu__DOT__u_execute__DOT____Vcellinp__mul_div_alu__sel),2);
    bufp->fullCData(oldp+37,((0xfU & ((0U == (IData)(vlSelf->cpu__DOT__funct3_m))
                                       ? ((IData)(1U) 
                                          << (3U & vlSelf->cpu__DOT__ex_out_m))
                                       : ((1U == (IData)(vlSelf->cpu__DOT__funct3_m))
                                           ? ((IData)(3U) 
                                              << (3U 
                                                  & vlSelf->cpu__DOT__ex_out_m))
                                           : ((2U == (IData)(vlSelf->cpu__DOT__funct3_m))
                                               ? 0xfU
                                               : 0U))))),4);
    bufp->fullCData(oldp+38,((3U & vlSelf->cpu__DOT__ex_out_m)),2);
    bufp->fullCData(oldp+39,((0x18U & (vlSelf->cpu__DOT__ex_out_m 
                                       << 3U))),5);
    bufp->fullBit(oldp+40,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__last_read_hit));
    bufp->fullCData(oldp+41,((3U & (vlSelf->cpu__DOT__ex_out_m 
                                    >> 2U))),2);
    bufp->fullIData(oldp+42,((0xfffffff0U & vlSelf->cpu__DOT__ex_out_m)),32);
    bufp->fullIData(oldp+43,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l1__DOT__selected_word),32);
    bufp->fullBit(oldp+44,((0U != (IData)(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l1__DOT__way_hit))));
    bufp->fullBit(oldp+45,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__l1_fill_en));
    bufp->fullIData(oldp+46,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__l1_fill_addr),32);
    bufp->fullWData(oldp+47,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__l1_fill_data),128);
    bufp->fullBit(oldp+51,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__l1_fill_mark_valid));
    bufp->fullWData(oldp+52,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l2__DOT__selected_line),128);
    bufp->fullBit(oldp+56,((0U != (IData)(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l2__DOT__way_hit))));
    bufp->fullBit(oldp+57,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__l2_fill_en));
    bufp->fullIData(oldp+58,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__l2_fill_addr),32);
    bufp->fullWData(oldp+59,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__l2_fill_data),128);
    bufp->fullBit(oldp+63,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__l2_fill_mark_valid));
    bufp->fullWData(oldp+64,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l3__DOT__selected_line),128);
    bufp->fullBit(oldp+68,((0U != (IData)(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l3__DOT__way_hit))));
    bufp->fullBit(oldp+69,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__l3_fill_en));
    bufp->fullIData(oldp+70,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__l3_fill_addr),32);
    bufp->fullWData(oldp+71,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__l3_fill_data),128);
    bufp->fullBit(oldp+75,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__l3_fill_mark_valid));
    bufp->fullBit(oldp+76,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__state));
    bufp->fullIData(oldp+77,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__saved_addr),32);
    bufp->fullCData(oldp+78,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__saved_word_index),2);
    bufp->fullCData(oldp+79,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__fill_count),2);
    bufp->fullWData(oldp+80,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__block_buf),128);
    bufp->fullBit(oldp+84,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__resp_valid));
    bufp->fullCData(oldp+85,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__resp_word_index),2);
    bufp->fullIData(oldp+86,((vlSelf->cpu__DOT__ex_out_m 
                              >> 0xbU)),21);
    bufp->fullCData(oldp+87,((0x7fU & (vlSelf->cpu__DOT__ex_out_m 
                                       >> 4U))),7);
    bufp->fullCData(oldp+88,((0xfU & vlSelf->cpu__DOT__ex_out_m)),4);
    bufp->fullCData(oldp+89,((3U & (vlSelf->cpu__DOT__ex_out_m 
                                    >> 2U))),2);
    bufp->fullCData(oldp+90,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l1__DOT__way_hit),2);
    bufp->fullWData(oldp+91,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l1__DOT__way_data[0]),128);
    bufp->fullWData(oldp+95,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l1__DOT__way_data[1]),128);
    bufp->fullIData(oldp+99,((vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__l1_fill_addr 
                              >> 0xbU)),21);
    bufp->fullCData(oldp+100,((0x7fU & (vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__l1_fill_addr 
                                        >> 4U))),7);
    bufp->fullBit(oldp+101,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l1__DOT__repl_way));
    bufp->fullIData(oldp+102,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l1__DOT__s),32);
    bufp->fullIData(oldp+103,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l1__DOT__w),32);
    bufp->fullIData(oldp+104,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l1__DOT__unnamedblk5__DOT__ww),32);
    bufp->fullIData(oldp+105,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l1__DOT__unnamedblk5__DOT__unnamedblk6__DOT__cur_word),32);
    bufp->fullIData(oldp+106,((vlSelf->cpu__DOT__ex_out_m 
                               >> 0xcU)),20);
    bufp->fullCData(oldp+107,((0xffU & (vlSelf->cpu__DOT__ex_out_m 
                                        >> 4U))),8);
    bufp->fullCData(oldp+108,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l2__DOT__way_hit),4);
    bufp->fullWData(oldp+109,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l2__DOT__way_data[0]),128);
    bufp->fullWData(oldp+113,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l2__DOT__way_data[1]),128);
    bufp->fullWData(oldp+117,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l2__DOT__way_data[2]),128);
    bufp->fullWData(oldp+121,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l2__DOT__way_data[3]),128);
    bufp->fullIData(oldp+125,((vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__l2_fill_addr 
                               >> 0xcU)),20);
    bufp->fullCData(oldp+126,((0xffU & (vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__l2_fill_addr 
                                        >> 4U))),8);
    bufp->fullCData(oldp+127,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l2__DOT__repl_way),2);
    bufp->fullIData(oldp+128,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l2__DOT__unnamedblk5__DOT__s),32);
    bufp->fullIData(oldp+129,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l2__DOT__unnamedblk5__DOT__unnamedblk6__DOT__w),32);
    bufp->fullIData(oldp+130,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l2__DOT__unnamedblk7__DOT__w),32);
    bufp->fullIData(oldp+131,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l2__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word),32);
    bufp->fullIData(oldp+132,((vlSelf->cpu__DOT__ex_out_m 
                               >> 0xdU)),19);
    bufp->fullSData(oldp+133,((0x1ffU & (vlSelf->cpu__DOT__ex_out_m 
                                         >> 4U))),9);
    bufp->fullCData(oldp+134,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l3__DOT__way_hit),8);
    bufp->fullWData(oldp+135,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l3__DOT__way_data[0]),128);
    bufp->fullWData(oldp+139,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l3__DOT__way_data[1]),128);
    bufp->fullWData(oldp+143,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l3__DOT__way_data[2]),128);
    bufp->fullWData(oldp+147,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l3__DOT__way_data[3]),128);
    bufp->fullWData(oldp+151,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l3__DOT__way_data[4]),128);
    bufp->fullWData(oldp+155,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l3__DOT__way_data[5]),128);
    bufp->fullWData(oldp+159,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l3__DOT__way_data[6]),128);
    bufp->fullWData(oldp+163,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l3__DOT__way_data[7]),128);
    bufp->fullIData(oldp+167,((vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__l3_fill_addr 
                               >> 0xdU)),19);
    bufp->fullSData(oldp+168,((0x1ffU & (vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__l3_fill_addr 
                                         >> 4U))),9);
    bufp->fullCData(oldp+169,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l3__DOT__repl_way),3);
    bufp->fullIData(oldp+170,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l3__DOT__unnamedblk5__DOT__s),32);
    bufp->fullIData(oldp+171,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l3__DOT__unnamedblk5__DOT__unnamedblk6__DOT__w),32);
    bufp->fullIData(oldp+172,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l3__DOT__unnamedblk7__DOT__w),32);
    bufp->fullIData(oldp+173,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l3__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word),32);
    bufp->fullBit(oldp+174,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__unnamedblk1__DOT__any_hit));
    bufp->fullWData(oldp+175,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__unnamedblk2__DOT__block_next),128);
    bufp->fullIData(oldp+179,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__unnamedblk2__DOT__unnamedblk3__DOT__base),32);
    bufp->fullIData(oldp+180,(((IData)(vlSelf->cpu__DOT__jalr_e)
                                ? vlSelf->cpu__DOT__u_execute__DOT__alu_res
                                : (vlSelf->cpu__DOT__pc_e 
                                   + vlSelf->cpu__DOT__imm_ext_e))),32);
    bufp->fullBit(oldp+181,((1U & ((~ (IData)(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__state)) 
                                   & (~ (((IData)(vlSelf->cpu__DOT__mem_valid_m) 
                                          & (~ (IData)(vlSelf->cpu__DOT__mem_write_m))) 
                                         & (~ (((0U 
                                                 != (IData)(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l1__DOT__way_hit)) 
                                                | (0U 
                                                   != (IData)(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l2__DOT__way_hit))) 
                                               | (0U 
                                                  != (IData)(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l3__DOT__way_hit))))))))));
    bufp->fullIData(oldp+182,(((4U & (IData)(vlSelf->cpu__DOT__funct3_m))
                                ? ((2U & (IData)(vlSelf->cpu__DOT__funct3_m))
                                    ? vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__resp_data_comb
                                    : ((1U & (IData)(vlSelf->cpu__DOT__funct3_m))
                                        ? (IData)(vlSelf->cpu__DOT__u_memory__DOT__selected_half)
                                        : (IData)(vlSelf->cpu__DOT__u_memory__DOT__selected_byte)))
                                : ((2U & (IData)(vlSelf->cpu__DOT__funct3_m))
                                    ? vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__resp_data_comb
                                    : ((1U & (IData)(vlSelf->cpu__DOT__funct3_m))
                                        ? (((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->cpu__DOT__u_memory__DOT__selected_half) 
                                                           >> 0xfU)))) 
                                            << 0x10U) 
                                           | (IData)(vlSelf->cpu__DOT__u_memory__DOT__selected_half))
                                        : (((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->cpu__DOT__u_memory__DOT__selected_byte) 
                                                           >> 7U)))) 
                                            << 8U) 
                                           | (IData)(vlSelf->cpu__DOT__u_memory__DOT__selected_byte)))))),32);
    bufp->fullBit(oldp+183,(((IData)(vlSelf->cpu__DOT__div_en_e) 
                             & (IData)(vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__busy_q))));
    bufp->fullBit(oldp+184,(((4U & (IData)(vlSelf->cpu__DOT__funct3_e))
                              ? ((2U & (IData)(vlSelf->cpu__DOT__funct3_e))
                                  ? ((1U & (IData)(vlSelf->cpu__DOT__funct3_e))
                                      ? (vlSelf->cpu__DOT__u_execute__DOT__src_a_e 
                                         >= vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                      : (vlSelf->cpu__DOT__u_execute__DOT__src_a_e 
                                         < vlSelf->cpu__DOT__u_execute__DOT__src_b_e))
                                  : ((1U & (IData)(vlSelf->cpu__DOT__funct3_e))
                                      ? VL_GTES_III(32, vlSelf->cpu__DOT__u_execute__DOT__src_a_e, vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                      : VL_LTS_III(32, vlSelf->cpu__DOT__u_execute__DOT__src_a_e, vlSelf->cpu__DOT__u_execute__DOT__src_b_e)))
                              : ((~ ((IData)(vlSelf->cpu__DOT__funct3_e) 
                                     >> 1U)) & ((1U 
                                                 & (IData)(vlSelf->cpu__DOT__funct3_e))
                                                 ? 
                                                (vlSelf->cpu__DOT__u_execute__DOT__src_a_e 
                                                 != vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                                 : 
                                                (vlSelf->cpu__DOT__u_execute__DOT__src_a_e 
                                                 == vlSelf->cpu__DOT__u_execute__DOT__src_b_e))))));
    bufp->fullIData(oldp+185,(((2U & (IData)(vlSelf->cpu__DOT__fwd_rs1))
                                ? ((1U & (IData)(vlSelf->cpu__DOT__fwd_rs1))
                                    ? 0U : vlSelf->cpu__DOT__ex_out_m)
                                : ((1U & (IData)(vlSelf->cpu__DOT__fwd_rs1))
                                    ? vlSelf->cpu__DOT__result_w
                                    : vlSelf->cpu__DOT__rd1_e))),32);
    bufp->fullIData(oldp+186,(((IData)(vlSelf->cpu__DOT__pc_src_e)
                                ? ((IData)(vlSelf->cpu__DOT__jalr_e)
                                    ? vlSelf->cpu__DOT__u_execute__DOT__alu_res
                                    : (vlSelf->cpu__DOT__pc_e 
                                       + vlSelf->cpu__DOT__imm_ext_e))
                                : ((IData)(4U) + vlSelf->cpu__DOT__pc_f))),32);
    bufp->fullIData(oldp+187,(vlSelf->cpu__DOT__u_execute__DOT__div_out_e),32);
    bufp->fullQData(oldp+188,(vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__div_r),33);
    bufp->fullIData(oldp+190,(vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__div_q),32);
    bufp->fullIData(oldp+191,(vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__div_shift),32);
    bufp->fullQData(oldp+192,(vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__div_d),33);
    bufp->fullBit(oldp+194,(vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__sign_q));
    bufp->fullBit(oldp+195,(vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__sign_r));
    bufp->fullQData(oldp+196,(vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__unnamedblk1__DOT__div_r_next),33);
    bufp->fullIData(oldp+198,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[0]),32);
    bufp->fullIData(oldp+199,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[1]),32);
    bufp->fullIData(oldp+200,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[2]),32);
    bufp->fullIData(oldp+201,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[3]),32);
    bufp->fullIData(oldp+202,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[4]),32);
    bufp->fullIData(oldp+203,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[5]),32);
    bufp->fullIData(oldp+204,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[6]),32);
    bufp->fullIData(oldp+205,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[7]),32);
    bufp->fullIData(oldp+206,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[8]),32);
    bufp->fullIData(oldp+207,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[9]),32);
    bufp->fullIData(oldp+208,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[10]),32);
    bufp->fullIData(oldp+209,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[11]),32);
    bufp->fullIData(oldp+210,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[12]),32);
    bufp->fullIData(oldp+211,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[13]),32);
    bufp->fullIData(oldp+212,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[14]),32);
    bufp->fullIData(oldp+213,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[15]),32);
    bufp->fullIData(oldp+214,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[16]),32);
    bufp->fullIData(oldp+215,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[17]),32);
    bufp->fullIData(oldp+216,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[18]),32);
    bufp->fullIData(oldp+217,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[19]),32);
    bufp->fullIData(oldp+218,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[20]),32);
    bufp->fullIData(oldp+219,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[21]),32);
    bufp->fullIData(oldp+220,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[22]),32);
    bufp->fullIData(oldp+221,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[23]),32);
    bufp->fullIData(oldp+222,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[24]),32);
    bufp->fullIData(oldp+223,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[25]),32);
    bufp->fullIData(oldp+224,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[26]),32);
    bufp->fullIData(oldp+225,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[27]),32);
    bufp->fullIData(oldp+226,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[28]),32);
    bufp->fullIData(oldp+227,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[29]),32);
    bufp->fullIData(oldp+228,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[30]),32);
    bufp->fullIData(oldp+229,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[31]),32);
    bufp->fullBit(oldp+230,(vlSelf->cpu__DOT__pc_src_e));
    bufp->fullIData(oldp+231,(((IData)(4U) + vlSelf->cpu__DOT__pc_f)),32);
    bufp->fullIData(oldp+232,(vlSelf->cpu__DOT__pc_f),32);
    bufp->fullIData(oldp+233,(((vlSelf->cpu__DOT__u_fetch__DOT__u_instr_mem__DOT__mem_array
                                [(0x3fffU & ((IData)(3U) 
                                             + vlSelf->cpu__DOT__pc_f))] 
                                << 0x18U) | ((vlSelf->cpu__DOT__u_fetch__DOT__u_instr_mem__DOT__mem_array
                                              [(0x3fffU 
                                                & ((IData)(2U) 
                                                   + vlSelf->cpu__DOT__pc_f))] 
                                              << 0x10U) 
                                             | ((vlSelf->cpu__DOT__u_fetch__DOT__u_instr_mem__DOT__mem_array
                                                 [(0x3fffU 
                                                   & ((IData)(1U) 
                                                      + vlSelf->cpu__DOT__pc_f))] 
                                                 << 8U) 
                                                | vlSelf->cpu__DOT__u_fetch__DOT__u_instr_mem__DOT__mem_array
                                                [(0x3fffU 
                                                  & vlSelf->cpu__DOT__pc_f)])))),32);
    bufp->fullIData(oldp+234,(vlSelf->cpu__DOT__instr_d),32);
    bufp->fullBit(oldp+235,(vlSelf->cpu__DOT__reg_write_w));
    bufp->fullIData(oldp+236,(vlSelf->cpu__DOT__result_w),32);
    bufp->fullCData(oldp+237,(vlSelf->cpu__DOT__rd_w),5);
    bufp->fullBit(oldp+238,(vlSelf->cpu__DOT__reg_write_d));
    bufp->fullCData(oldp+239,(vlSelf->cpu__DOT__result_src_d),2);
    bufp->fullBit(oldp+240,(vlSelf->cpu__DOT__mem_write_d));
    bufp->fullBit(oldp+241,(vlSelf->cpu__DOT__jump_d));
    bufp->fullBit(oldp+242,(vlSelf->cpu__DOT__branch_d));
    bufp->fullCData(oldp+243,(vlSelf->cpu__DOT__alu_ctrl_d),4);
    bufp->fullBit(oldp+244,(vlSelf->cpu__DOT__alu_src_d));
    bufp->fullCData(oldp+245,((0x1fU & (vlSelf->cpu__DOT__instr_d 
                                        >> 7U))),5);
    bufp->fullCData(oldp+246,((0x1fU & (vlSelf->cpu__DOT__instr_d 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+247,((0x1fU & (vlSelf->cpu__DOT__instr_d 
                                        >> 0x14U))),5);
    bufp->fullIData(oldp+248,(vlSelf->cpu__DOT__imm_ext_d),32);
    bufp->fullCData(oldp+249,((7U & (vlSelf->cpu__DOT__instr_d 
                                     >> 0xcU))),3);
    bufp->fullBit(oldp+250,(vlSelf->cpu__DOT__jalr_d));
    bufp->fullBit(oldp+251,(vlSelf->cpu__DOT__op1_pc_d));
    bufp->fullBit(oldp+252,(vlSelf->cpu__DOT__rs1_used_d));
    bufp->fullBit(oldp+253,(vlSelf->cpu__DOT__rs2_used_d));
    bufp->fullCData(oldp+254,(vlSelf->cpu__DOT__mul_ctrl_d),2);
    bufp->fullCData(oldp+255,(vlSelf->cpu__DOT__div_ctrl_d),2);
    bufp->fullBit(oldp+256,(vlSelf->cpu__DOT__mul_en_d));
    bufp->fullBit(oldp+257,(vlSelf->cpu__DOT__div_en_d));
    bufp->fullBit(oldp+258,(vlSelf->cpu__DOT__reg_write_e));
    bufp->fullBit(oldp+259,(vlSelf->cpu__DOT__mem_write_e));
    bufp->fullCData(oldp+260,(vlSelf->cpu__DOT__rd_e),5);
    bufp->fullCData(oldp+261,(vlSelf->cpu__DOT__div_ctrl_e),2);
    bufp->fullCData(oldp+262,(vlSelf->cpu__DOT__fwd_rs1),2);
    bufp->fullCData(oldp+263,(vlSelf->cpu__DOT__fwd_rs2),2);
    bufp->fullIData(oldp+264,(vlSelf->cpu__DOT__u_execute__DOT__fwd_aluop2_out),32);
    bufp->fullBit(oldp+265,(vlSelf->cpu__DOT__reg_write_m));
    bufp->fullBit(oldp+266,(vlSelf->cpu__DOT__mem_write_m));
    bufp->fullCData(oldp+267,(vlSelf->cpu__DOT__rd_m),5);
    bufp->fullBit(oldp+268,(vlSelf->cpu__DOT__mem_valid_m));
    bufp->fullBit(oldp+269,(vlSelf->cpu__DOT__stall));
    bufp->fullBit(oldp+270,(vlSelf->cpu__DOT__flush));
    bufp->fullBit(oldp+271,(vlSelf->cpu__DOT__div_stall));
    bufp->fullBit(oldp+272,(vlSelf->cpu__DOT__cache_stall));
    bufp->fullCData(oldp+273,(vlSelf->cpu__DOT__u_decode__DOT__imm_src_d),3);
    bufp->fullCData(oldp+274,((0x7fU & vlSelf->cpu__DOT__instr_d)),7);
    bufp->fullCData(oldp+275,((vlSelf->cpu__DOT__instr_d 
                               >> 0x19U)),7);
    bufp->fullCData(oldp+276,(vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__alu_logic),3);
    bufp->fullBit(oldp+277,((1U & (vlSelf->cpu__DOT__instr_d 
                                   >> 5U))));
    bufp->fullBit(oldp+278,((1U & (vlSelf->cpu__DOT__instr_d 
                                   >> 0x1eU))));
    bufp->fullIData(oldp+279,(vlSelf->cpu__DOT__u_execute__DOT__src_a_e),32);
    bufp->fullIData(oldp+280,(vlSelf->cpu__DOT__u_execute__DOT__src_b_e),32);
    bufp->fullIData(oldp+281,(vlSelf->cpu__DOT__u_execute__DOT__alu_res),32);
    bufp->fullIData(oldp+282,(vlSelf->cpu__DOT__u_execute__DOT__mul_out_e),32);
    bufp->fullCData(oldp+283,(vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__counter),6);
    bufp->fullCData(oldp+284,(vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__state),2);
    bufp->fullCData(oldp+285,(vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__next_state),2);
    bufp->fullIData(oldp+286,(vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__n_reg),32);
    bufp->fullIData(oldp+287,(vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__d_reg),32);
    bufp->fullBit(oldp+288,(vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__is_signed));
    bufp->fullBit(oldp+289,(vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__start_q));
    bufp->fullBit(oldp+290,(vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__busy_q));
    bufp->fullBit(oldp+291,(vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__start_pulse));
    bufp->fullQData(oldp+292,(vlSelf->cpu__DOT__u_execute__DOT__multiplier__DOT__full_result),64);
    bufp->fullSData(oldp+294,((0x3fffU & vlSelf->cpu__DOT__pc_f)),14);
    bufp->fullIData(oldp+295,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__resp_data_comb),32);
    bufp->fullIData(oldp+296,(vlSelf->cpu__DOT__u_memory__DOT__store_data),32);
    bufp->fullCData(oldp+297,(vlSelf->cpu__DOT__u_memory__DOT__selected_byte),8);
    bufp->fullSData(oldp+298,(vlSelf->cpu__DOT__u_memory__DOT__selected_half),16);
    bufp->fullCData(oldp+299,(vlSelf->cpu__DOT__u_memory__DOT____Vcellinp__u_mmu__mem_byte_en),4);
    bufp->fullIData(oldp+300,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__ram_addr),32);
    bufp->fullIData(oldp+301,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__ram_r_data),32);
    bufp->fullIData(oldp+302,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l1__DOT__byte_mask),32);
    bufp->fullIData(oldp+303,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l1__DOT__masked_write),32);
    bufp->fullIData(oldp+304,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l2__DOT__byte_mask),32);
    bufp->fullIData(oldp+305,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l2__DOT__masked_write),32);
    bufp->fullIData(oldp+306,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l3__DOT__byte_mask),32);
    bufp->fullIData(oldp+307,(vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__u_l3__DOT__masked_write),32);
    bufp->fullIData(oldp+308,((0x1ffffU & vlSelf->cpu__DOT__u_memory__DOT__u_mmu__DOT__ram_addr)),17);
    bufp->fullBit(oldp+309,(vlSelf->clk));
    bufp->fullBit(oldp+310,(vlSelf->rst));
    bufp->fullBit(oldp+311,(vlSelf->trigger));
    bufp->fullIData(oldp+312,(vlSelf->a0),32);
    bufp->fullIData(oldp+313,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array
                              [(0x1fU & (vlSelf->cpu__DOT__instr_d 
                                         >> 0xfU))]),32);
    bufp->fullIData(oldp+314,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array
                              [(0x1fU & (vlSelf->cpu__DOT__instr_d 
                                         >> 0x14U))]),32);
    bufp->fullIData(oldp+315,(((2U & (IData)(vlSelf->cpu__DOT__u_execute__DOT____Vcellinp__mul_div_alu__sel))
                                ? ((1U & (IData)(vlSelf->cpu__DOT__u_execute__DOT____Vcellinp__mul_div_alu__sel))
                                    ? 0U : vlSelf->cpu__DOT__u_execute__DOT__div_out_e)
                                : ((1U & (IData)(vlSelf->cpu__DOT__u_execute__DOT____Vcellinp__mul_div_alu__sel))
                                    ? vlSelf->cpu__DOT__u_execute__DOT__mul_out_e
                                    : vlSelf->cpu__DOT__u_execute__DOT__alu_res))),32);
    bufp->fullIData(oldp+316,(0x20U),32);
    bufp->fullBit(oldp+317,(vlSelf->cpu__DOT__div_done_e));
    bufp->fullIData(oldp+318,(5U),32);
    bufp->fullBit(oldp+319,(vlSelf->cpu__DOT__u_execute__DOT__cache_stall));
    bufp->fullIData(oldp+320,(0U),32);
    bufp->fullIData(oldp+321,(0xeU),32);
    bufp->fullIData(oldp+322,(0x10U),32);
    bufp->fullIData(oldp+323,(4U),32);
    bufp->fullIData(oldp+324,(0x80U),32);
    bufp->fullIData(oldp+325,(2U),32);
    bufp->fullIData(oldp+326,(0x1000U),32);
    bufp->fullIData(oldp+327,(2U),32);
    bufp->fullIData(oldp+328,(0x100U),32);
    bufp->fullIData(oldp+329,(7U),32);
    bufp->fullIData(oldp+330,(0x15U),32);
    bufp->fullIData(oldp+331,(1U),32);
    bufp->fullIData(oldp+332,(2U),32);
    bufp->fullIData(oldp+333,(4U),32);
    bufp->fullIData(oldp+334,(0x4000U),32);
    bufp->fullIData(oldp+335,(4U),32);
    bufp->fullIData(oldp+336,(0x400U),32);
    bufp->fullIData(oldp+337,(8U),32);
    bufp->fullIData(oldp+338,(0x14U),32);
    bufp->fullIData(oldp+339,(0x10000U),32);
    bufp->fullIData(oldp+340,(8U),32);
    bufp->fullIData(oldp+341,(0x1000U),32);
    bufp->fullIData(oldp+342,(0x200U),32);
    bufp->fullIData(oldp+343,(9U),32);
    bufp->fullIData(oldp+344,(0x13U),32);
    bufp->fullIData(oldp+345,(3U),32);
    bufp->fullIData(oldp+346,(8U),32);
    bufp->fullIData(oldp+347,(0x11U),32);
}
