// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdut__Syms.h"


VL_ATTR_COLD void Vdut___024root__trace_init_sub__TOP__0(Vdut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+122,"clk", false,-1);
    tracep->declBit(c+123,"rst", false,-1);
    tracep->declBit(c+124,"trigger", false,-1);
    tracep->declBus(c+125,"a0", false,-1, 31,0);
    tracep->pushNamePrefix("cpu ");
    tracep->declBus(c+128,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+122,"clk", false,-1);
    tracep->declBit(c+123,"rst", false,-1);
    tracep->declBit(c+124,"trigger", false,-1);
    tracep->declBus(c+125,"a0", false,-1, 31,0);
    tracep->declBit(c+124,"unused_trigger", false,-1);
    tracep->declBus(c+32,"pc_target_e", false,-1, 31,0);
    tracep->declBit(c+72,"pc_src_e", false,-1);
    tracep->declBus(c+73,"pc_plus4_f", false,-1, 31,0);
    tracep->declBus(c+74,"pc_f", false,-1, 31,0);
    tracep->declBus(c+75,"instr_f", false,-1, 31,0);
    tracep->declBus(c+3,"pc_d", false,-1, 31,0);
    tracep->declBus(c+4,"pc_plus4_d", false,-1, 31,0);
    tracep->declBus(c+76,"instr_d", false,-1, 31,0);
    tracep->declBit(c+77,"reg_write_w", false,-1);
    tracep->declBus(c+78,"result_w", false,-1, 31,0);
    tracep->declBus(c+79,"rd_w", false,-1, 4,0);
    tracep->declBit(c+80,"reg_write_d", false,-1);
    tracep->declBus(c+81,"result_src_d", false,-1, 1,0);
    tracep->declBit(c+82,"mem_write_d", false,-1);
    tracep->declBit(c+129,"jump_d", false,-1);
    tracep->declBit(c+130,"branch_d", false,-1);
    tracep->declBus(c+83,"alu_ctrl_d", false,-1, 3,0);
    tracep->declBit(c+84,"alu_src_d", false,-1);
    tracep->declBus(c+126,"rd1_d", false,-1, 31,0);
    tracep->declBus(c+127,"rd2_d", false,-1, 31,0);
    tracep->declBus(c+85,"rd_d", false,-1, 4,0);
    tracep->declBus(c+86,"rs1_d", false,-1, 4,0);
    tracep->declBus(c+87,"rs2_d", false,-1, 4,0);
    tracep->declBus(c+88,"imm_ext_d", false,-1, 31,0);
    tracep->declBus(c+89,"funct3_d", false,-1, 2,0);
    tracep->declBit(c+90,"jalr_d", false,-1);
    tracep->declBit(c+91,"rs1_used_d", false,-1);
    tracep->declBit(c+92,"rs2_used_d", false,-1);
    tracep->declBit(c+93,"reg_write_e", false,-1);
    tracep->declBus(c+5,"result_src_e", false,-1, 1,0);
    tracep->declBit(c+94,"mem_write_e", false,-1);
    tracep->declBit(c+6,"jump_e", false,-1);
    tracep->declBit(c+7,"branch_e", false,-1);
    tracep->declBus(c+8,"alu_ctrl_e", false,-1, 3,0);
    tracep->declBit(c+9,"alu_src_e", false,-1);
    tracep->declBus(c+10,"funct3_e", false,-1, 2,0);
    tracep->declBit(c+11,"jalr_e", false,-1);
    tracep->declBus(c+12,"rd1_e", false,-1, 31,0);
    tracep->declBus(c+13,"rd2_e", false,-1, 31,0);
    tracep->declBus(c+14,"pc_e", false,-1, 31,0);
    tracep->declBus(c+95,"rd_e", false,-1, 4,0);
    tracep->declBus(c+15,"rs1_e", false,-1, 4,0);
    tracep->declBus(c+16,"rs2_e", false,-1, 4,0);
    tracep->declBus(c+17,"imm_ext_e", false,-1, 31,0);
    tracep->declBus(c+18,"pc_plus4_e", false,-1, 31,0);
    tracep->declBit(c+19,"rs1_used_e", false,-1);
    tracep->declBit(c+20,"rs2_used_e", false,-1);
    tracep->declBus(c+96,"alu_result_m", false,-1, 31,0);
    tracep->declBus(c+97,"fwd_rs1", false,-1, 1,0);
    tracep->declBus(c+98,"fwd_rs2", false,-1, 1,0);
    tracep->declBus(c+131,"alu_result_e", false,-1, 31,0);
    tracep->declBus(c+132,"write_data_e", false,-1, 31,0);
    tracep->declBit(c+99,"reg_write_m", false,-1);
    tracep->declBus(c+21,"result_src_m", false,-1, 1,0);
    tracep->declBit(c+100,"mem_write_m", false,-1);
    tracep->declBus(c+101,"write_data_m", false,-1, 31,0);
    tracep->declBus(c+102,"rd_m", false,-1, 4,0);
    tracep->declBus(c+22,"pc_plus4_m", false,-1, 31,0);
    tracep->declBus(c+23,"funct3_m", false,-1, 2,0);
    tracep->declBus(c+33,"read_data_m", false,-1, 31,0);
    tracep->declBus(c+24,"result_src_w", false,-1, 1,0);
    tracep->declBus(c+25,"alu_result_w", false,-1, 31,0);
    tracep->declBus(c+26,"read_data_w", false,-1, 31,0);
    tracep->declBus(c+27,"pc_plus4_w", false,-1, 31,0);
    tracep->declBit(c+103,"stall", false,-1);
    tracep->declBit(c+104,"flush", false,-1);
    tracep->pushNamePrefix("de_register ");
    tracep->declBus(c+128,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+122,"clk", false,-1);
    tracep->declBit(c+123,"rst", false,-1);
    tracep->declBit(c+103,"stall", false,-1);
    tracep->declBit(c+104,"flush", false,-1);
    tracep->declBit(c+80,"reg_write_d", false,-1);
    tracep->declBus(c+81,"result_src_d", false,-1, 1,0);
    tracep->declBit(c+82,"mem_write_d", false,-1);
    tracep->declBit(c+129,"jump_d", false,-1);
    tracep->declBit(c+130,"branch_d", false,-1);
    tracep->declBus(c+83,"alu_ctrl_d", false,-1, 3,0);
    tracep->declBit(c+84,"alu_src_d", false,-1);
    tracep->declBus(c+89,"funct3_d", false,-1, 2,0);
    tracep->declBit(c+90,"jalr_d", false,-1);
    tracep->declBit(c+91,"rs1_used_d", false,-1);
    tracep->declBit(c+92,"rs2_used_d", false,-1);
    tracep->declBus(c+126,"rd1_d", false,-1, 31,0);
    tracep->declBus(c+127,"rd2_d", false,-1, 31,0);
    tracep->declBus(c+3,"pc_d", false,-1, 31,0);
    tracep->declBus(c+85,"rd_d", false,-1, 4,0);
    tracep->declBus(c+86,"rs1_d", false,-1, 4,0);
    tracep->declBus(c+87,"rs2_d", false,-1, 4,0);
    tracep->declBus(c+88,"imm_ext_d", false,-1, 31,0);
    tracep->declBus(c+4,"pc_plus4_d", false,-1, 31,0);
    tracep->declBit(c+93,"reg_write_e", false,-1);
    tracep->declBus(c+5,"result_src_e", false,-1, 1,0);
    tracep->declBit(c+94,"mem_write_e", false,-1);
    tracep->declBit(c+6,"jump_e", false,-1);
    tracep->declBit(c+7,"branch_e", false,-1);
    tracep->declBus(c+8,"alu_ctrl_e", false,-1, 3,0);
    tracep->declBit(c+9,"alu_src_e", false,-1);
    tracep->declBus(c+10,"funct3_e", false,-1, 2,0);
    tracep->declBit(c+11,"jalr_e", false,-1);
    tracep->declBus(c+12,"rd1_e", false,-1, 31,0);
    tracep->declBus(c+13,"rd2_e", false,-1, 31,0);
    tracep->declBus(c+14,"pc_e", false,-1, 31,0);
    tracep->declBus(c+95,"rd_e", false,-1, 4,0);
    tracep->declBus(c+15,"rs1_e", false,-1, 4,0);
    tracep->declBus(c+16,"rs2_e", false,-1, 4,0);
    tracep->declBus(c+17,"imm_ext_e", false,-1, 31,0);
    tracep->declBus(c+18,"pc_plus4_e", false,-1, 31,0);
    tracep->declBit(c+19,"rs1_used_e", false,-1);
    tracep->declBit(c+20,"rs2_used_e", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("em_register ");
    tracep->declBus(c+128,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+122,"clk", false,-1);
    tracep->declBit(c+123,"rst", false,-1);
    tracep->declBit(c+93,"reg_write_e", false,-1);
    tracep->declBus(c+5,"result_src_e", false,-1, 1,0);
    tracep->declBit(c+94,"mem_write_e", false,-1);
    tracep->declBus(c+131,"alu_result_e", false,-1, 31,0);
    tracep->declBus(c+132,"write_data_e", false,-1, 31,0);
    tracep->declBus(c+95,"rd_e", false,-1, 4,0);
    tracep->declBus(c+18,"pc_plus4_e", false,-1, 31,0);
    tracep->declBus(c+10,"funct3_e", false,-1, 2,0);
    tracep->declBit(c+99,"reg_write_m", false,-1);
    tracep->declBus(c+21,"result_src_m", false,-1, 1,0);
    tracep->declBit(c+100,"mem_write_m", false,-1);
    tracep->declBus(c+96,"alu_result_m", false,-1, 31,0);
    tracep->declBus(c+101,"write_data_m", false,-1, 31,0);
    tracep->declBus(c+102,"rd_m", false,-1, 4,0);
    tracep->declBus(c+22,"pc_plus4_m", false,-1, 31,0);
    tracep->declBus(c+23,"funct3_m", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fd_register ");
    tracep->declBus(c+128,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+122,"clk", false,-1);
    tracep->declBit(c+123,"rst", false,-1);
    tracep->declBit(c+104,"flush", false,-1);
    tracep->declBit(c+103,"stall", false,-1);
    tracep->declBus(c+74,"pc_f", false,-1, 31,0);
    tracep->declBus(c+73,"pc_plus4_f", false,-1, 31,0);
    tracep->declBus(c+75,"instr_f", false,-1, 31,0);
    tracep->declBus(c+3,"pc_d", false,-1, 31,0);
    tracep->declBus(c+4,"pc_plus4_d", false,-1, 31,0);
    tracep->declBus(c+76,"instr_d", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("hu ");
    tracep->declBus(c+95,"rd_e", false,-1, 4,0);
    tracep->declBus(c+102,"rd_m", false,-1, 4,0);
    tracep->declBus(c+79,"rd_w", false,-1, 4,0);
    tracep->declBus(c+86,"rs1_d", false,-1, 4,0);
    tracep->declBus(c+87,"rs2_d", false,-1, 4,0);
    tracep->declBus(c+15,"rs1_e", false,-1, 4,0);
    tracep->declBus(c+16,"rs2_e", false,-1, 4,0);
    tracep->declBit(c+91,"rs1_used_d", false,-1);
    tracep->declBit(c+92,"rs2_used_d", false,-1);
    tracep->declBit(c+19,"rs1_used_e", false,-1);
    tracep->declBit(c+20,"rs2_used_e", false,-1);
    tracep->declBit(c+99,"reg_write_m", false,-1);
    tracep->declBit(c+77,"reg_write_w", false,-1);
    tracep->declBit(c+28,"load_e", false,-1);
    tracep->declBit(c+72,"branch_taken", false,-1);
    tracep->declBit(c+103,"stall", false,-1);
    tracep->declBit(c+104,"flush", false,-1);
    tracep->declBus(c+97,"fwd_rs1", false,-1, 1,0);
    tracep->declBus(c+98,"fwd_rs2", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mw_register ");
    tracep->declBus(c+128,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+122,"clk", false,-1);
    tracep->declBit(c+123,"rst", false,-1);
    tracep->declBit(c+99,"reg_write_m", false,-1);
    tracep->declBus(c+21,"result_src_m", false,-1, 1,0);
    tracep->declBus(c+96,"alu_result_m", false,-1, 31,0);
    tracep->declBus(c+33,"read_data_m", false,-1, 31,0);
    tracep->declBus(c+102,"rd_m", false,-1, 4,0);
    tracep->declBus(c+22,"pc_plus4_m", false,-1, 31,0);
    tracep->declBit(c+77,"reg_write_w", false,-1);
    tracep->declBus(c+24,"result_src_w", false,-1, 1,0);
    tracep->declBus(c+25,"alu_result_w", false,-1, 31,0);
    tracep->declBus(c+26,"read_data_w", false,-1, 31,0);
    tracep->declBus(c+79,"rd_w", false,-1, 4,0);
    tracep->declBus(c+27,"pc_plus4_w", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_decode ");
    tracep->declBus(c+128,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+122,"clk", false,-1);
    tracep->declBit(c+77,"reg_write_w", false,-1);
    tracep->declBus(c+76,"instr_d", false,-1, 31,0);
    tracep->declBus(c+78,"result_w", false,-1, 31,0);
    tracep->declBus(c+79,"rd_w", false,-1, 4,0);
    tracep->declBit(c+80,"reg_write_d", false,-1);
    tracep->declBus(c+81,"result_src_d", false,-1, 1,0);
    tracep->declBit(c+82,"mem_write_d", false,-1);
    tracep->declBit(c+130,"branch_d", false,-1);
    tracep->declBit(c+129,"jump_d", false,-1);
    tracep->declBus(c+83,"alu_control_d", false,-1, 3,0);
    tracep->declBit(c+84,"alu_src_d", false,-1);
    tracep->declBus(c+126,"rd1_d", false,-1, 31,0);
    tracep->declBus(c+127,"rd2_d", false,-1, 31,0);
    tracep->declBus(c+85,"rd_d", false,-1, 4,0);
    tracep->declBus(c+86,"rs1_d", false,-1, 4,0);
    tracep->declBus(c+87,"rs2_d", false,-1, 4,0);
    tracep->declBus(c+88,"imm_ext_d", false,-1, 31,0);
    tracep->declBus(c+125,"a0", false,-1, 31,0);
    tracep->declBus(c+89,"funct3_d", false,-1, 2,0);
    tracep->declBit(c+90,"jalr_d", false,-1);
    tracep->declBit(c+91,"rs1_used_d", false,-1);
    tracep->declBit(c+92,"rs2_used_d", false,-1);
    tracep->declBus(c+105,"imm_src_d", false,-1, 2,0);
    tracep->pushNamePrefix("cu ");
    tracep->declBus(c+128,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+76,"ins", false,-1, 31,0);
    tracep->declBit(c+129,"jump_d", false,-1);
    tracep->declBit(c+130,"branch_d", false,-1);
    tracep->declBus(c+81,"result_src", false,-1, 1,0);
    tracep->declBit(c+82,"mem_write", false,-1);
    tracep->declBus(c+83,"alu_ctrl", false,-1, 3,0);
    tracep->declBit(c+84,"alu_src", false,-1);
    tracep->declBus(c+105,"imm_src", false,-1, 2,0);
    tracep->declBit(c+80,"reg_write", false,-1);
    tracep->declBus(c+89,"funct3", false,-1, 2,0);
    tracep->declBit(c+90,"jalr", false,-1);
    tracep->declBit(c+91,"rs1_signal", false,-1);
    tracep->declBit(c+92,"rs2_signal", false,-1);
    tracep->declBus(c+106,"mul_ctrl", false,-1, 1,0);
    tracep->declBus(c+133,"div_ctrl", false,-1, 1,0);
    tracep->declBit(c+107,"mul_en", false,-1);
    tracep->declBit(c+108,"div_en", false,-1);
    tracep->declBus(c+109,"opcode", false,-1, 6,0);
    tracep->declBus(c+110,"funct7", false,-1, 6,0);
    tracep->declBus(c+111,"alu_logic", false,-1, 2,0);
    tracep->pushNamePrefix("decoder_1 ");
    tracep->declBus(c+109,"opcode", false,-1, 6,0);
    tracep->declBit(c+112,"branch_d", false,-1);
    tracep->declBit(c+113,"jump_d", false,-1);
    tracep->declBus(c+81,"result_src", false,-1, 1,0);
    tracep->declBit(c+82,"mem_write", false,-1);
    tracep->declBit(c+84,"alu_src", false,-1);
    tracep->declBus(c+105,"imm_src", false,-1, 2,0);
    tracep->declBit(c+80,"reg_write", false,-1);
    tracep->declBus(c+111,"alu_op", false,-1, 2,0);
    tracep->declBit(c+90,"jalr", false,-1);
    tracep->declBit(c+91,"rs1_signal", false,-1);
    tracep->declBit(c+92,"rs2_signal", false,-1);
    tracep->declBit(c+107,"mul_en", false,-1);
    tracep->declBit(c+108,"div_en", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("decoder_2 ");
    tracep->declBus(c+111,"alu_op", false,-1, 2,0);
    tracep->declBus(c+89,"funct3", false,-1, 2,0);
    tracep->declBit(c+114,"funct7_5", false,-1);
    tracep->declBus(c+83,"alu_ctrl", false,-1, 3,0);
    tracep->declBus(c+106,"mul_ctrl", false,-1, 1,0);
    tracep->declBus(c+133,"div_ctrl", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("rf ");
    tracep->declBus(c+128,"D_WIDTH", false,-1, 31,0);
    tracep->declBus(c+134,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBit(c+122,"clk", false,-1);
    tracep->declBit(c+77,"wr_en", false,-1);
    tracep->declBus(c+79,"a3", false,-1, 4,0);
    tracep->declBus(c+86,"a1", false,-1, 4,0);
    tracep->declBus(c+87,"a2", false,-1, 4,0);
    tracep->declBus(c+78,"din", false,-1, 31,0);
    tracep->declBus(c+126,"dout1", false,-1, 31,0);
    tracep->declBus(c+127,"dout2", false,-1, 31,0);
    tracep->declBus(c+125,"a0", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+40+i*1,"ram_array", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("se ");
    tracep->declBus(c+128,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+105,"imm_src", false,-1, 2,0);
    tracep->declBus(c+76,"ins", false,-1, 31,0);
    tracep->declBus(c+88,"imm_op", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_execute ");
    tracep->declBus(c+128,"D_WIDTH", false,-1, 31,0);
    tracep->declBus(c+8,"alu_ctrl_e", false,-1, 3,0);
    tracep->declBit(c+9,"alu_src_e", false,-1);
    tracep->declBus(c+12,"rd1_e", false,-1, 31,0);
    tracep->declBus(c+13,"rd2_e", false,-1, 31,0);
    tracep->declBus(c+14,"pc_e", false,-1, 31,0);
    tracep->declBus(c+17,"imm_ext_e", false,-1, 31,0);
    tracep->declBit(c+7,"branch_e", false,-1);
    tracep->declBit(c+6,"jump_e", false,-1);
    tracep->declBus(c+10,"funct3_e", false,-1, 2,0);
    tracep->declBit(c+11,"jalr_e", false,-1);
    tracep->declBus(c+78,"result_w", false,-1, 31,0);
    tracep->declBus(c+96,"alu_result_m", false,-1, 31,0);
    tracep->declBus(c+97,"fwd_rs1", false,-1, 1,0);
    tracep->declBus(c+98,"fwd_rs2", false,-1, 1,0);
    tracep->declBit(c+19,"rs1_used_e", false,-1);
    tracep->declBit(c+20,"rs2_used_e", false,-1);
    tracep->declBus(c+131,"alu_result_e", false,-1, 31,0);
    tracep->declBus(c+132,"write_data_e", false,-1, 31,0);
    tracep->declBus(c+32,"pc_target_e", false,-1, 31,0);
    tracep->declBit(c+72,"pc_src_e", false,-1);
    tracep->declBit(c+34,"zero_e", false,-1);
    tracep->declBus(c+115,"src_a_e", false,-1, 31,0);
    tracep->declBus(c+29,"src_b_e", false,-1, 31,0);
    tracep->declBus(c+35,"alu_res", false,-1, 31,0);
    tracep->declBus(c+30,"pc_imm", false,-1, 31,0);
    tracep->declBus(c+132,"fwd_aluop2_out", false,-1, 31,0);
    tracep->declBit(c+36,"alu_result", false,-1);
    tracep->declBit(c+37,"fwd_aloup2_out", false,-1);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+128,"D_WIDTH", false,-1, 31,0);
    tracep->declBus(c+115,"aluop1", false,-1, 31,0);
    tracep->declBus(c+29,"aluop2", false,-1, 31,0);
    tracep->declBus(c+8,"aluctrl", false,-1, 3,0);
    tracep->declBus(c+10,"funct3", false,-1, 2,0);
    tracep->declBus(c+35,"aluout", false,-1, 31,0);
    tracep->declBit(c+34,"eq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd_aluop1 ");
    tracep->declBus(c+128,"D_WIDTH", false,-1, 31,0);
    tracep->declBus(c+12,"in0", false,-1, 31,0);
    tracep->declBus(c+78,"in1", false,-1, 31,0);
    tracep->declBus(c+96,"in2", false,-1, 31,0);
    tracep->declBus(c+135,"in3", false,-1, 31,0);
    tracep->declBus(c+97,"sel", false,-1, 1,0);
    tracep->declBus(c+115,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd_aluop2 ");
    tracep->declBus(c+128,"D_WIDTH", false,-1, 31,0);
    tracep->declBus(c+13,"in0", false,-1, 31,0);
    tracep->declBus(c+78,"in1", false,-1, 31,0);
    tracep->declBus(c+96,"in2", false,-1, 31,0);
    tracep->declBus(c+135,"in3", false,-1, 31,0);
    tracep->declBus(c+98,"sel", false,-1, 1,0);
    tracep->declBus(c+38,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("imm_mux ");
    tracep->declBus(c+128,"D_WIDTH", false,-1, 31,0);
    tracep->declBus(c+132,"in0", false,-1, 31,0);
    tracep->declBus(c+17,"in1", false,-1, 31,0);
    tracep->declBit(c+9,"sel", false,-1);
    tracep->declBus(c+29,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_mux ");
    tracep->declBus(c+128,"D_WIDTH", false,-1, 31,0);
    tracep->declBus(c+30,"in0", false,-1, 31,0);
    tracep->declBus(c+35,"in1", false,-1, 31,0);
    tracep->declBit(c+11,"sel", false,-1);
    tracep->declBus(c+32,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_branch ");
    tracep->declBus(c+128,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+14,"pc", false,-1, 31,0);
    tracep->declBus(c+17,"imm", false,-1, 31,0);
    tracep->declBus(c+30,"branch_pc", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_fetch ");
    tracep->declBus(c+128,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+122,"clk", false,-1);
    tracep->declBit(c+123,"rst", false,-1);
    tracep->declBit(c+103,"stall", false,-1);
    tracep->declBus(c+32,"pc_target_e", false,-1, 31,0);
    tracep->declBit(c+72,"pc_src_e", false,-1);
    tracep->declBus(c+73,"pc_plus4_f", false,-1, 31,0);
    tracep->declBus(c+74,"pc_f", false,-1, 31,0);
    tracep->declBus(c+75,"instr_f", false,-1, 31,0);
    tracep->declBus(c+39,"next_pc", false,-1, 31,0);
    tracep->pushNamePrefix("u_instr_mem ");
    tracep->declBus(c+128,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+128,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+136,"SIZE", false,-1, 31,0);
    tracep->declBus(c+74,"addr", false,-1, 31,0);
    tracep->declBus(c+75,"dout", false,-1, 31,0);
    tracep->declBus(c+116,"byte_addr", false,-1, 13,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_pc_inc ");
    tracep->declBus(c+128,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+74,"pc", false,-1, 31,0);
    tracep->declBus(c+73,"inc_pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_pc_mux ");
    tracep->declBus(c+128,"D_WIDTH", false,-1, 31,0);
    tracep->declBus(c+73,"in0", false,-1, 31,0);
    tracep->declBus(c+32,"in1", false,-1, 31,0);
    tracep->declBit(c+72,"sel", false,-1);
    tracep->declBus(c+39,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_pc_reg ");
    tracep->declBus(c+128,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+122,"clk", false,-1);
    tracep->declBit(c+123,"rst", false,-1);
    tracep->declBit(c+103,"stall", false,-1);
    tracep->declBus(c+39,"pc_in", false,-1, 31,0);
    tracep->declBus(c+74,"pc_out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_memory ");
    tracep->declBus(c+128,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+122,"clk", false,-1);
    tracep->declBus(c+96,"alu_result_m", false,-1, 31,0);
    tracep->declBus(c+101,"write_data_m", false,-1, 31,0);
    tracep->declBit(c+100,"mem_write_m", false,-1);
    tracep->declBus(c+23,"funct3_m", false,-1, 2,0);
    tracep->declBus(c+33,"read_data_m", false,-1, 31,0);
    tracep->declBus(c+117,"mem_word", false,-1, 31,0);
    tracep->declBus(c+101,"store_data", false,-1, 31,0);
    tracep->declBus(c+31,"byte_en", false,-1, 3,0);
    tracep->declBus(c+118,"selected_byte", false,-1, 7,0);
    tracep->declBus(c+119,"selected_half", false,-1, 15,0);
    tracep->pushNamePrefix("data_mem ");
    tracep->declBus(c+128,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+137,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+138,"SIZE", false,-1, 31,0);
    tracep->declBus(c+96,"addr", false,-1, 31,0);
    tracep->declBus(c+101,"write_data", false,-1, 31,0);
    tracep->declBit(c+122,"clk", false,-1);
    tracep->declBit(c+100,"write_enable", false,-1);
    tracep->declBus(c+120,"byte_en", false,-1, 3,0);
    tracep->declBus(c+117,"read_data", false,-1, 31,0);
    tracep->declBus(c+121,"index", false,-1, 16,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+2,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("u_writeback ");
    tracep->declBus(c+128,"D_WIDTH", false,-1, 31,0);
    tracep->declBus(c+24,"result_src_w", false,-1, 1,0);
    tracep->declBus(c+25,"alu_result_w", false,-1, 31,0);
    tracep->declBus(c+26,"read_data_w", false,-1, 31,0);
    tracep->declBus(c+27,"pc_plus4_w", false,-1, 31,0);
    tracep->declBus(c+78,"result_w", false,-1, 31,0);
    tracep->pushNamePrefix("writeback_mux ");
    tracep->declBus(c+128,"D_WIDTH", false,-1, 31,0);
    tracep->declBus(c+25,"in0", false,-1, 31,0);
    tracep->declBus(c+26,"in1", false,-1, 31,0);
    tracep->declBus(c+27,"in2", false,-1, 31,0);
    tracep->declBus(c+135,"in3", false,-1, 31,0);
    tracep->declBus(c+24,"sel", false,-1, 1,0);
    tracep->declBus(c+78,"out", false,-1, 31,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vdut___024root__trace_init_top(Vdut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_init_top\n"); );
    // Body
    Vdut___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vdut___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdut___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vdut___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vdut___024root__trace_register(Vdut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vdut___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vdut___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vdut___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vdut___024root__trace_full_sub_0(Vdut___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vdut___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_full_top_0\n"); );
    // Init
    Vdut___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdut___024root*>(voidSelf);
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vdut___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vdut___024root__trace_full_sub_0(Vdut___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vdut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdut___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+2,(vlSelf->cpu__DOT__u_memory__DOT__data_mem__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+3,(vlSelf->cpu__DOT__pc_d),32);
    bufp->fullIData(oldp+4,(vlSelf->cpu__DOT__pc_plus4_d),32);
    bufp->fullCData(oldp+5,(vlSelf->cpu__DOT__result_src_e),2);
    bufp->fullBit(oldp+6,(vlSelf->cpu__DOT__jump_e));
    bufp->fullBit(oldp+7,(vlSelf->cpu__DOT__branch_e));
    bufp->fullCData(oldp+8,(vlSelf->cpu__DOT__alu_ctrl_e),4);
    bufp->fullBit(oldp+9,(vlSelf->cpu__DOT__alu_src_e));
    bufp->fullCData(oldp+10,(vlSelf->cpu__DOT__funct3_e),3);
    bufp->fullBit(oldp+11,(vlSelf->cpu__DOT__jalr_e));
    bufp->fullIData(oldp+12,(vlSelf->cpu__DOT__rd1_e),32);
    bufp->fullIData(oldp+13,(vlSelf->cpu__DOT__rd2_e),32);
    bufp->fullIData(oldp+14,(vlSelf->cpu__DOT__pc_e),32);
    bufp->fullCData(oldp+15,(vlSelf->cpu__DOT__rs1_e),5);
    bufp->fullCData(oldp+16,(vlSelf->cpu__DOT__rs2_e),5);
    bufp->fullIData(oldp+17,(vlSelf->cpu__DOT__imm_ext_e),32);
    bufp->fullIData(oldp+18,(vlSelf->cpu__DOT__pc_plus4_e),32);
    bufp->fullBit(oldp+19,(vlSelf->cpu__DOT__rs1_used_e));
    bufp->fullBit(oldp+20,(vlSelf->cpu__DOT__rs2_used_e));
    bufp->fullCData(oldp+21,(vlSelf->cpu__DOT__result_src_m),2);
    bufp->fullIData(oldp+22,(vlSelf->cpu__DOT__pc_plus4_m),32);
    bufp->fullCData(oldp+23,(vlSelf->cpu__DOT__funct3_m),3);
    bufp->fullCData(oldp+24,(vlSelf->cpu__DOT__result_src_w),2);
    bufp->fullIData(oldp+25,(vlSelf->cpu__DOT__alu_result_w),32);
    bufp->fullIData(oldp+26,(vlSelf->cpu__DOT__read_data_w),32);
    bufp->fullIData(oldp+27,(vlSelf->cpu__DOT__pc_plus4_w),32);
    bufp->fullBit(oldp+28,((1U == (IData)(vlSelf->cpu__DOT__result_src_e))));
    bufp->fullIData(oldp+29,(vlSelf->cpu__DOT__u_execute__DOT__src_b_e),32);
    bufp->fullIData(oldp+30,((vlSelf->cpu__DOT__pc_e 
                              + vlSelf->cpu__DOT__imm_ext_e)),32);
    bufp->fullCData(oldp+31,(((0U == (IData)(vlSelf->cpu__DOT__funct3_m))
                               ? 1U : ((1U == (IData)(vlSelf->cpu__DOT__funct3_m))
                                        ? 3U : ((2U 
                                                 == (IData)(vlSelf->cpu__DOT__funct3_m))
                                                 ? 0xfU
                                                 : 0U)))),4);
    bufp->fullIData(oldp+32,(((IData)(vlSelf->cpu__DOT__jalr_e)
                               ? ((8U & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                   ? ((4U & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                       ? 0U : ((2U 
                                                & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                                ? 0U
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                                    ? 
                                                   ((0x1fU 
                                                     >= vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                                     ? 
                                                    VL_SHIFTRS_III(32,32,32, vlSelf->cpu__DOT__u_execute__DOT__src_a_e, vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                                     : 
                                                    (- 
                                                     (vlSelf->cpu__DOT__u_execute__DOT__src_a_e 
                                                      >> 0x1fU)))
                                                    : 
                                                   ((0x1fU 
                                                     >= vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                                     ? 
                                                    (vlSelf->cpu__DOT__u_execute__DOT__src_a_e 
                                                     >> vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                                     : 0U))))
                                   : ((4U & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                       ? ((2U & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                           ? ((1U & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                               ? ((0x1fU 
                                                   >= vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                                   ? 
                                                  (vlSelf->cpu__DOT__u_execute__DOT__src_a_e 
                                                   << vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                                   : 0U)
                                               : (vlSelf->cpu__DOT__u_execute__DOT__src_a_e 
                                                  < vlSelf->cpu__DOT__u_execute__DOT__src_b_e))
                                           : ((1U & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                               ? VL_LTS_III(32, vlSelf->cpu__DOT__u_execute__DOT__src_a_e, vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                               : (vlSelf->cpu__DOT__u_execute__DOT__src_a_e 
                                                  ^ vlSelf->cpu__DOT__u_execute__DOT__src_b_e)))
                                       : ((2U & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                           ? ((1U & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                               ? (vlSelf->cpu__DOT__u_execute__DOT__src_a_e 
                                                  | vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                               : (vlSelf->cpu__DOT__u_execute__DOT__src_a_e 
                                                  & vlSelf->cpu__DOT__u_execute__DOT__src_b_e))
                                           : ((1U & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                               ? (vlSelf->cpu__DOT__u_execute__DOT__src_a_e 
                                                  - vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                               : (vlSelf->cpu__DOT__u_execute__DOT__src_a_e 
                                                  + vlSelf->cpu__DOT__u_execute__DOT__src_b_e)))))
                               : (vlSelf->cpu__DOT__pc_e 
                                  + vlSelf->cpu__DOT__imm_ext_e))),32);
    bufp->fullIData(oldp+33,(((4U & (IData)(vlSelf->cpu__DOT__funct3_m))
                               ? ((2U & (IData)(vlSelf->cpu__DOT__funct3_m))
                                   ? vlSelf->cpu__DOT__u_memory__DOT__mem_word
                                   : ((1U & (IData)(vlSelf->cpu__DOT__funct3_m))
                                       ? (0xffffU & vlSelf->cpu__DOT__u_memory__DOT__mem_word)
                                       : (0xffU & vlSelf->cpu__DOT__u_memory__DOT__mem_word)))
                               : ((2U & (IData)(vlSelf->cpu__DOT__funct3_m))
                                   ? vlSelf->cpu__DOT__u_memory__DOT__mem_word
                                   : ((1U & (IData)(vlSelf->cpu__DOT__funct3_m))
                                       ? (((- (IData)(
                                                      (1U 
                                                       & (vlSelf->cpu__DOT__u_memory__DOT__mem_word 
                                                          >> 0xfU)))) 
                                           << 0x10U) 
                                          | (0xffffU 
                                             & vlSelf->cpu__DOT__u_memory__DOT__mem_word))
                                       : (((- (IData)(
                                                      (1U 
                                                       & (vlSelf->cpu__DOT__u_memory__DOT__mem_word 
                                                          >> 7U)))) 
                                           << 8U) | 
                                          (0xffU & vlSelf->cpu__DOT__u_memory__DOT__mem_word)))))),32);
    bufp->fullBit(oldp+34,(((4U & (IData)(vlSelf->cpu__DOT__funct3_e))
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
                                                ? (vlSelf->cpu__DOT__u_execute__DOT__src_a_e 
                                                   != vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                                : (vlSelf->cpu__DOT__u_execute__DOT__src_a_e 
                                                   == vlSelf->cpu__DOT__u_execute__DOT__src_b_e))))));
    bufp->fullIData(oldp+35,(((8U & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                               ? ((4U & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                   ? 0U : ((2U & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                            ? 0U : 
                                           ((1U & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                             ? ((0x1fU 
                                                 >= vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                                 ? 
                                                VL_SHIFTRS_III(32,32,32, vlSelf->cpu__DOT__u_execute__DOT__src_a_e, vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                                 : 
                                                (- 
                                                 (vlSelf->cpu__DOT__u_execute__DOT__src_a_e 
                                                  >> 0x1fU)))
                                             : ((0x1fU 
                                                 >= vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                                 ? 
                                                (vlSelf->cpu__DOT__u_execute__DOT__src_a_e 
                                                 >> vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                                 : 0U))))
                               : ((4U & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                   ? ((2U & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                       ? ((1U & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                           ? ((0x1fU 
                                               >= vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                               ? (vlSelf->cpu__DOT__u_execute__DOT__src_a_e 
                                                  << vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                               : 0U)
                                           : (vlSelf->cpu__DOT__u_execute__DOT__src_a_e 
                                              < vlSelf->cpu__DOT__u_execute__DOT__src_b_e))
                                       : ((1U & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                           ? VL_LTS_III(32, vlSelf->cpu__DOT__u_execute__DOT__src_a_e, vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                           : (vlSelf->cpu__DOT__u_execute__DOT__src_a_e 
                                              ^ vlSelf->cpu__DOT__u_execute__DOT__src_b_e)))
                                   : ((2U & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                       ? ((1U & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                           ? (vlSelf->cpu__DOT__u_execute__DOT__src_a_e 
                                              | vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                           : (vlSelf->cpu__DOT__u_execute__DOT__src_a_e 
                                              & vlSelf->cpu__DOT__u_execute__DOT__src_b_e))
                                       : ((1U & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                           ? (vlSelf->cpu__DOT__u_execute__DOT__src_a_e 
                                              - vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                           : (vlSelf->cpu__DOT__u_execute__DOT__src_a_e 
                                              + vlSelf->cpu__DOT__u_execute__DOT__src_b_e)))))),32);
    bufp->fullBit(oldp+36,((1U & ((8U & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                   ? ((4U & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                       ? 0U : ((2U 
                                                & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                                ? 0U
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                                    ? 
                                                   ((0x1fU 
                                                     >= vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                                     ? 
                                                    VL_SHIFTRS_III(32,32,32, vlSelf->cpu__DOT__u_execute__DOT__src_a_e, vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                                     : 
                                                    (- 
                                                     (vlSelf->cpu__DOT__u_execute__DOT__src_a_e 
                                                      >> 0x1fU)))
                                                    : 
                                                   ((0x1fU 
                                                     >= vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                                     ? 
                                                    (vlSelf->cpu__DOT__u_execute__DOT__src_a_e 
                                                     >> vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                                     : 0U))))
                                   : ((4U & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                       ? ((2U & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                           ? ((1U & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                               ? ((0x1fU 
                                                   >= vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                                   ? 
                                                  (vlSelf->cpu__DOT__u_execute__DOT__src_a_e 
                                                   << vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                                   : 0U)
                                               : (vlSelf->cpu__DOT__u_execute__DOT__src_a_e 
                                                  < vlSelf->cpu__DOT__u_execute__DOT__src_b_e))
                                           : ((1U & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                               ? VL_LTS_III(32, vlSelf->cpu__DOT__u_execute__DOT__src_a_e, vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                               : (vlSelf->cpu__DOT__u_execute__DOT__src_a_e 
                                                  ^ vlSelf->cpu__DOT__u_execute__DOT__src_b_e)))
                                       : ((2U & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                           ? ((1U & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                               ? (vlSelf->cpu__DOT__u_execute__DOT__src_a_e 
                                                  | vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                               : (vlSelf->cpu__DOT__u_execute__DOT__src_a_e 
                                                  & vlSelf->cpu__DOT__u_execute__DOT__src_b_e))
                                           : ((1U & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                               ? (vlSelf->cpu__DOT__u_execute__DOT__src_a_e 
                                                  - vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                               : (vlSelf->cpu__DOT__u_execute__DOT__src_a_e 
                                                  + vlSelf->cpu__DOT__u_execute__DOT__src_b_e))))))));
    bufp->fullBit(oldp+37,((1U & ((2U & (IData)(vlSelf->cpu__DOT__fwd_rs2))
                                   ? ((1U & (IData)(vlSelf->cpu__DOT__fwd_rs2))
                                       ? 0U : vlSelf->cpu__DOT__alu_result_m)
                                   : ((1U & (IData)(vlSelf->cpu__DOT__fwd_rs2))
                                       ? vlSelf->cpu__DOT__result_w
                                       : vlSelf->cpu__DOT__rd2_e)))));
    bufp->fullIData(oldp+38,(((2U & (IData)(vlSelf->cpu__DOT__fwd_rs2))
                               ? ((1U & (IData)(vlSelf->cpu__DOT__fwd_rs2))
                                   ? 0U : vlSelf->cpu__DOT__alu_result_m)
                               : ((1U & (IData)(vlSelf->cpu__DOT__fwd_rs2))
                                   ? vlSelf->cpu__DOT__result_w
                                   : vlSelf->cpu__DOT__rd2_e))),32);
    bufp->fullIData(oldp+39,(((IData)(vlSelf->cpu__DOT__pc_src_e)
                               ? ((IData)(vlSelf->cpu__DOT__jalr_e)
                                   ? ((8U & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                       ? ((4U & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                           ? 0U : (
                                                   (2U 
                                                    & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                                     ? 
                                                    ((0x1fU 
                                                      >= vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                                      ? 
                                                     VL_SHIFTRS_III(32,32,32, vlSelf->cpu__DOT__u_execute__DOT__src_a_e, vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                                      : 
                                                     (- 
                                                      (vlSelf->cpu__DOT__u_execute__DOT__src_a_e 
                                                       >> 0x1fU)))
                                                     : 
                                                    ((0x1fU 
                                                      >= vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                                      ? 
                                                     (vlSelf->cpu__DOT__u_execute__DOT__src_a_e 
                                                      >> vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                                      : 0U))))
                                       : ((4U & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                           ? ((2U & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                               ? ((1U 
                                                   & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                                   ? 
                                                  ((0x1fU 
                                                    >= vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                                    ? 
                                                   (vlSelf->cpu__DOT__u_execute__DOT__src_a_e 
                                                    << vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                                    : 0U)
                                                   : 
                                                  (vlSelf->cpu__DOT__u_execute__DOT__src_a_e 
                                                   < vlSelf->cpu__DOT__u_execute__DOT__src_b_e))
                                               : ((1U 
                                                   & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                                   ? 
                                                  VL_LTS_III(32, vlSelf->cpu__DOT__u_execute__DOT__src_a_e, vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                                   : 
                                                  (vlSelf->cpu__DOT__u_execute__DOT__src_a_e 
                                                   ^ vlSelf->cpu__DOT__u_execute__DOT__src_b_e)))
                                           : ((2U & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                               ? ((1U 
                                                   & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                                   ? 
                                                  (vlSelf->cpu__DOT__u_execute__DOT__src_a_e 
                                                   | vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                                   : 
                                                  (vlSelf->cpu__DOT__u_execute__DOT__src_a_e 
                                                   & vlSelf->cpu__DOT__u_execute__DOT__src_b_e))
                                               : ((1U 
                                                   & (IData)(vlSelf->cpu__DOT__alu_ctrl_e))
                                                   ? 
                                                  (vlSelf->cpu__DOT__u_execute__DOT__src_a_e 
                                                   - vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                                   : 
                                                  (vlSelf->cpu__DOT__u_execute__DOT__src_a_e 
                                                   + vlSelf->cpu__DOT__u_execute__DOT__src_b_e)))))
                                   : (vlSelf->cpu__DOT__pc_e 
                                      + vlSelf->cpu__DOT__imm_ext_e))
                               : ((IData)(4U) + vlSelf->cpu__DOT__pc_f))),32);
    bufp->fullIData(oldp+40,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[0]),32);
    bufp->fullIData(oldp+41,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[1]),32);
    bufp->fullIData(oldp+42,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[2]),32);
    bufp->fullIData(oldp+43,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[3]),32);
    bufp->fullIData(oldp+44,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[4]),32);
    bufp->fullIData(oldp+45,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[5]),32);
    bufp->fullIData(oldp+46,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[6]),32);
    bufp->fullIData(oldp+47,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[7]),32);
    bufp->fullIData(oldp+48,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[8]),32);
    bufp->fullIData(oldp+49,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[9]),32);
    bufp->fullIData(oldp+50,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[10]),32);
    bufp->fullIData(oldp+51,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[11]),32);
    bufp->fullIData(oldp+52,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[12]),32);
    bufp->fullIData(oldp+53,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[13]),32);
    bufp->fullIData(oldp+54,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[14]),32);
    bufp->fullIData(oldp+55,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[15]),32);
    bufp->fullIData(oldp+56,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[16]),32);
    bufp->fullIData(oldp+57,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[17]),32);
    bufp->fullIData(oldp+58,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[18]),32);
    bufp->fullIData(oldp+59,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[19]),32);
    bufp->fullIData(oldp+60,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[20]),32);
    bufp->fullIData(oldp+61,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[21]),32);
    bufp->fullIData(oldp+62,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[22]),32);
    bufp->fullIData(oldp+63,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[23]),32);
    bufp->fullIData(oldp+64,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[24]),32);
    bufp->fullIData(oldp+65,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[25]),32);
    bufp->fullIData(oldp+66,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[26]),32);
    bufp->fullIData(oldp+67,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[27]),32);
    bufp->fullIData(oldp+68,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[28]),32);
    bufp->fullIData(oldp+69,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[29]),32);
    bufp->fullIData(oldp+70,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[30]),32);
    bufp->fullIData(oldp+71,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[31]),32);
    bufp->fullBit(oldp+72,(vlSelf->cpu__DOT__pc_src_e));
    bufp->fullIData(oldp+73,(((IData)(4U) + vlSelf->cpu__DOT__pc_f)),32);
    bufp->fullIData(oldp+74,(vlSelf->cpu__DOT__pc_f),32);
    bufp->fullIData(oldp+75,(((vlSelf->cpu__DOT__u_fetch__DOT__u_instr_mem__DOT__mem_array
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
    bufp->fullIData(oldp+76,(vlSelf->cpu__DOT__instr_d),32);
    bufp->fullBit(oldp+77,(vlSelf->cpu__DOT__reg_write_w));
    bufp->fullIData(oldp+78,(vlSelf->cpu__DOT__result_w),32);
    bufp->fullCData(oldp+79,(vlSelf->cpu__DOT__rd_w),5);
    bufp->fullBit(oldp+80,(vlSelf->cpu__DOT__reg_write_d));
    bufp->fullCData(oldp+81,(vlSelf->cpu__DOT__result_src_d),2);
    bufp->fullBit(oldp+82,(vlSelf->cpu__DOT__mem_write_d));
    bufp->fullCData(oldp+83,(vlSelf->cpu__DOT__alu_ctrl_d),4);
    bufp->fullBit(oldp+84,(vlSelf->cpu__DOT__alu_src_d));
    bufp->fullCData(oldp+85,((0x1fU & (vlSelf->cpu__DOT__instr_d 
                                       >> 7U))),5);
    bufp->fullCData(oldp+86,((0x1fU & (vlSelf->cpu__DOT__instr_d 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+87,((0x1fU & (vlSelf->cpu__DOT__instr_d 
                                       >> 0x14U))),5);
    bufp->fullIData(oldp+88,(vlSelf->cpu__DOT__imm_ext_d),32);
    bufp->fullCData(oldp+89,((7U & (vlSelf->cpu__DOT__instr_d 
                                    >> 0xcU))),3);
    bufp->fullBit(oldp+90,(vlSelf->cpu__DOT__jalr_d));
    bufp->fullBit(oldp+91,(vlSelf->cpu__DOT__rs1_used_d));
    bufp->fullBit(oldp+92,(vlSelf->cpu__DOT__rs2_used_d));
    bufp->fullBit(oldp+93,(vlSelf->cpu__DOT__reg_write_e));
    bufp->fullBit(oldp+94,(vlSelf->cpu__DOT__mem_write_e));
    bufp->fullCData(oldp+95,(vlSelf->cpu__DOT__rd_e),5);
    bufp->fullIData(oldp+96,(vlSelf->cpu__DOT__alu_result_m),32);
    bufp->fullCData(oldp+97,(vlSelf->cpu__DOT__fwd_rs1),2);
    bufp->fullCData(oldp+98,(vlSelf->cpu__DOT__fwd_rs2),2);
    bufp->fullBit(oldp+99,(vlSelf->cpu__DOT__reg_write_m));
    bufp->fullBit(oldp+100,(vlSelf->cpu__DOT__mem_write_m));
    bufp->fullIData(oldp+101,(vlSelf->cpu__DOT__write_data_m),32);
    bufp->fullCData(oldp+102,(vlSelf->cpu__DOT__rd_m),5);
    bufp->fullBit(oldp+103,(vlSelf->cpu__DOT__stall));
    bufp->fullBit(oldp+104,(vlSelf->cpu__DOT__flush));
    bufp->fullCData(oldp+105,(vlSelf->cpu__DOT__u_decode__DOT__imm_src_d),3);
    bufp->fullCData(oldp+106,(vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__mul_ctrl),2);
    bufp->fullBit(oldp+107,(vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__mul_en));
    bufp->fullBit(oldp+108,(vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__div_en));
    bufp->fullCData(oldp+109,((0x7fU & vlSelf->cpu__DOT__instr_d)),7);
    bufp->fullCData(oldp+110,((vlSelf->cpu__DOT__instr_d 
                               >> 0x19U)),7);
    bufp->fullCData(oldp+111,(vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__alu_logic),3);
    bufp->fullBit(oldp+112,(vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__decoder_1__DOT__branch_d));
    bufp->fullBit(oldp+113,(vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__decoder_1__DOT__jump_d));
    bufp->fullBit(oldp+114,((1U & (vlSelf->cpu__DOT__instr_d 
                                   >> 0x1eU))));
    bufp->fullIData(oldp+115,(vlSelf->cpu__DOT__u_execute__DOT__src_a_e),32);
    bufp->fullSData(oldp+116,((0x3fffU & vlSelf->cpu__DOT__pc_f)),14);
    bufp->fullIData(oldp+117,(vlSelf->cpu__DOT__u_memory__DOT__mem_word),32);
    bufp->fullCData(oldp+118,((0xffU & vlSelf->cpu__DOT__u_memory__DOT__mem_word)),8);
    bufp->fullSData(oldp+119,((0xffffU & vlSelf->cpu__DOT__u_memory__DOT__mem_word)),16);
    bufp->fullCData(oldp+120,(vlSelf->cpu__DOT__u_memory__DOT____Vcellinp__data_mem__byte_en),4);
    bufp->fullIData(oldp+121,((0x1ffffU & vlSelf->cpu__DOT__alu_result_m)),17);
    bufp->fullBit(oldp+122,(vlSelf->clk));
    bufp->fullBit(oldp+123,(vlSelf->rst));
    bufp->fullBit(oldp+124,(vlSelf->trigger));
    bufp->fullIData(oldp+125,(vlSelf->a0),32);
    bufp->fullIData(oldp+126,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array
                              [(0x1fU & (vlSelf->cpu__DOT__instr_d 
                                         >> 0xfU))]),32);
    bufp->fullIData(oldp+127,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array
                              [(0x1fU & (vlSelf->cpu__DOT__instr_d 
                                         >> 0x14U))]),32);
    bufp->fullIData(oldp+128,(0x20U),32);
    bufp->fullBit(oldp+129,(vlSelf->cpu__DOT__jump_d));
    bufp->fullBit(oldp+130,(vlSelf->cpu__DOT__branch_d));
    bufp->fullIData(oldp+131,(vlSelf->cpu__DOT__alu_result_e),32);
    bufp->fullIData(oldp+132,(vlSelf->cpu__DOT__u_execute__DOT__fwd_aluop2_out),32);
    bufp->fullCData(oldp+133,(vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__div_ctrl),2);
    bufp->fullIData(oldp+134,(5U),32);
    bufp->fullIData(oldp+135,(0U),32);
    bufp->fullIData(oldp+136,(0xeU),32);
    bufp->fullIData(oldp+137,(8U),32);
    bufp->fullIData(oldp+138,(0x11U),32);
}
