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
    tracep->declBit(c+149,"clk", false,-1);
    tracep->declBit(c+150,"rst", false,-1);
    tracep->declBit(c+151,"trigger", false,-1);
    tracep->declBus(c+152,"a0", false,-1, 31,0);
    tracep->declBus(c+153,"debug_pc_f", false,-1, 31,0);
    tracep->declBus(c+154,"debug_instr_f", false,-1, 31,0);
    tracep->pushNamePrefix("cpu ");
    tracep->declBus(c+162,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+149,"clk", false,-1);
    tracep->declBit(c+150,"rst", false,-1);
    tracep->declBit(c+151,"trigger", false,-1);
    tracep->declBus(c+152,"a0", false,-1, 31,0);
    tracep->declBus(c+153,"debug_pc_f", false,-1, 31,0);
    tracep->declBus(c+154,"debug_instr_f", false,-1, 31,0);
    tracep->declBit(c+151,"unused_trigger", false,-1);
    tracep->declBus(c+155,"pc_target_e", false,-1, 31,0);
    tracep->declBit(c+69,"pc_src_e", false,-1);
    tracep->declBus(c+3,"pc_plus4_f", false,-1, 31,0);
    tracep->declBus(c+4,"pc_f", false,-1, 31,0);
    tracep->declBus(c+70,"instr_f", false,-1, 31,0);
    tracep->declBus(c+5,"pc_d", false,-1, 31,0);
    tracep->declBus(c+6,"pc_plus4_d", false,-1, 31,0);
    tracep->declBus(c+71,"instr_d", false,-1, 31,0);
    tracep->declBit(c+38,"reg_write_w", false,-1);
    tracep->declBus(c+39,"result_w", false,-1, 31,0);
    tracep->declBus(c+40,"rd_w", false,-1, 4,0);
    tracep->declBit(c+72,"reg_write_d", false,-1);
    tracep->declBus(c+73,"result_src_d", false,-1, 1,0);
    tracep->declBit(c+74,"mem_write_d", false,-1);
    tracep->declBit(c+75,"jump_d", false,-1);
    tracep->declBit(c+76,"branch_d", false,-1);
    tracep->declBus(c+77,"alu_ctrl_d", false,-1, 3,0);
    tracep->declBit(c+78,"alu_src_d", false,-1);
    tracep->declBus(c+156,"rd1_d", false,-1, 31,0);
    tracep->declBus(c+157,"rd2_d", false,-1, 31,0);
    tracep->declBus(c+79,"rd_d", false,-1, 4,0);
    tracep->declBus(c+80,"rs1_d", false,-1, 4,0);
    tracep->declBus(c+81,"rs2_d", false,-1, 4,0);
    tracep->declBus(c+82,"imm_ext_d", false,-1, 31,0);
    tracep->declBus(c+83,"funct3_d", false,-1, 2,0);
    tracep->declBit(c+84,"jalr_d", false,-1);
    tracep->declBit(c+85,"op1_pc_d", false,-1);
    tracep->declBit(c+86,"rs1_used_d", false,-1);
    tracep->declBit(c+87,"rs2_used_d", false,-1);
    tracep->declBus(c+88,"mul_ctrl_d", false,-1, 1,0);
    tracep->declBus(c+89,"div_ctrl_d", false,-1, 1,0);
    tracep->declBit(c+90,"mul_en_d", false,-1);
    tracep->declBit(c+91,"div_en_d", false,-1);
    tracep->declBit(c+41,"reg_write_e", false,-1);
    tracep->declBus(c+7,"result_src_e", false,-1, 1,0);
    tracep->declBit(c+42,"mem_write_e", false,-1);
    tracep->declBit(c+8,"jump_e", false,-1);
    tracep->declBit(c+9,"branch_e", false,-1);
    tracep->declBus(c+10,"alu_ctrl_e", false,-1, 3,0);
    tracep->declBit(c+11,"alu_src_e", false,-1);
    tracep->declBus(c+12,"funct3_e", false,-1, 2,0);
    tracep->declBit(c+13,"jalr_e", false,-1);
    tracep->declBit(c+163,"op1_pc_e", false,-1);
    tracep->declBus(c+92,"rd1_e", false,-1, 31,0);
    tracep->declBus(c+93,"rd2_e", false,-1, 31,0);
    tracep->declBus(c+14,"pc_e", false,-1, 31,0);
    tracep->declBus(c+43,"rd_e", false,-1, 4,0);
    tracep->declBus(c+15,"rs1_e", false,-1, 4,0);
    tracep->declBus(c+16,"rs2_e", false,-1, 4,0);
    tracep->declBus(c+17,"imm_ext_e", false,-1, 31,0);
    tracep->declBus(c+18,"pc_plus4_e", false,-1, 31,0);
    tracep->declBit(c+19,"rs1_used_e", false,-1);
    tracep->declBit(c+20,"rs2_used_e", false,-1);
    tracep->declBus(c+21,"mul_ctrl_e", false,-1, 1,0);
    tracep->declBus(c+94,"div_ctrl_e", false,-1, 1,0);
    tracep->declBit(c+22,"mul_en_e", false,-1);
    tracep->declBit(c+23,"div_en_e", false,-1);
    tracep->declBus(c+44,"alu_result_m", false,-1, 31,0);
    tracep->declBus(c+45,"fwd_rs1", false,-1, 1,0);
    tracep->declBus(c+46,"fwd_rs2", false,-1, 1,0);
    tracep->declBus(c+158,"alu_result_e", false,-1, 31,0);
    tracep->declBus(c+95,"write_data_e", false,-1, 31,0);
    tracep->declBit(c+24,"div_done_e", false,-1);
    tracep->declBit(c+47,"reg_write_m", false,-1);
    tracep->declBus(c+25,"result_src_m", false,-1, 1,0);
    tracep->declBit(c+48,"mem_write_m", false,-1);
    tracep->declBus(c+49,"write_data_m", false,-1, 31,0);
    tracep->declBus(c+50,"rd_m", false,-1, 4,0);
    tracep->declBus(c+26,"pc_plus4_m", false,-1, 31,0);
    tracep->declBus(c+27,"funct3_m", false,-1, 2,0);
    tracep->declBus(c+159,"read_data_m", false,-1, 31,0);
    tracep->declBus(c+28,"result_src_w", false,-1, 1,0);
    tracep->declBus(c+29,"alu_result_w", false,-1, 31,0);
    tracep->declBus(c+30,"read_data_w", false,-1, 31,0);
    tracep->declBus(c+31,"pc_plus4_w", false,-1, 31,0);
    tracep->declBit(c+96,"stall", false,-1);
    tracep->declBit(c+97,"flush", false,-1);
    tracep->declBit(c+98,"div_stall", false,-1);
    tracep->pushNamePrefix("de_register ");
    tracep->declBus(c+162,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+149,"clk", false,-1);
    tracep->declBit(c+150,"rst", false,-1);
    tracep->declBit(c+96,"stall", false,-1);
    tracep->declBit(c+97,"flush", false,-1);
    tracep->declBit(c+72,"reg_write_d", false,-1);
    tracep->declBus(c+73,"result_src_d", false,-1, 1,0);
    tracep->declBit(c+74,"mem_write_d", false,-1);
    tracep->declBit(c+75,"jump_d", false,-1);
    tracep->declBit(c+76,"branch_d", false,-1);
    tracep->declBus(c+77,"alu_ctrl_d", false,-1, 3,0);
    tracep->declBit(c+78,"alu_src_d", false,-1);
    tracep->declBus(c+83,"funct3_d", false,-1, 2,0);
    tracep->declBit(c+84,"jalr_d", false,-1);
    tracep->declBit(c+85,"op1_pc_d", false,-1);
    tracep->declBit(c+86,"rs1_used_d", false,-1);
    tracep->declBit(c+87,"rs2_used_d", false,-1);
    tracep->declBus(c+156,"rd1_d", false,-1, 31,0);
    tracep->declBus(c+157,"rd2_d", false,-1, 31,0);
    tracep->declBus(c+5,"pc_d", false,-1, 31,0);
    tracep->declBus(c+79,"rd_d", false,-1, 4,0);
    tracep->declBus(c+80,"rs1_d", false,-1, 4,0);
    tracep->declBus(c+81,"rs2_d", false,-1, 4,0);
    tracep->declBus(c+82,"imm_ext_d", false,-1, 31,0);
    tracep->declBus(c+6,"pc_plus4_d", false,-1, 31,0);
    tracep->declBus(c+88,"mul_ctrl_d", false,-1, 1,0);
    tracep->declBus(c+89,"div_ctrl_d", false,-1, 1,0);
    tracep->declBit(c+90,"mul_en_d", false,-1);
    tracep->declBit(c+91,"div_en_d", false,-1);
    tracep->declBit(c+98,"div_stall", false,-1);
    tracep->declBit(c+41,"reg_write_e", false,-1);
    tracep->declBus(c+7,"result_src_e", false,-1, 1,0);
    tracep->declBit(c+42,"mem_write_e", false,-1);
    tracep->declBit(c+8,"jump_e", false,-1);
    tracep->declBit(c+9,"branch_e", false,-1);
    tracep->declBus(c+10,"alu_ctrl_e", false,-1, 3,0);
    tracep->declBit(c+11,"alu_src_e", false,-1);
    tracep->declBus(c+12,"funct3_e", false,-1, 2,0);
    tracep->declBit(c+13,"jalr_e", false,-1);
    tracep->declBit(c+163,"op1_pc_e", false,-1);
    tracep->declBus(c+92,"rd1_e", false,-1, 31,0);
    tracep->declBus(c+93,"rd2_e", false,-1, 31,0);
    tracep->declBus(c+14,"pc_e", false,-1, 31,0);
    tracep->declBus(c+43,"rd_e", false,-1, 4,0);
    tracep->declBus(c+15,"rs1_e", false,-1, 4,0);
    tracep->declBus(c+16,"rs2_e", false,-1, 4,0);
    tracep->declBus(c+17,"imm_ext_e", false,-1, 31,0);
    tracep->declBus(c+18,"pc_plus4_e", false,-1, 31,0);
    tracep->declBit(c+19,"rs1_used_e", false,-1);
    tracep->declBit(c+20,"rs2_used_e", false,-1);
    tracep->declBus(c+21,"mul_ctrl_e", false,-1, 1,0);
    tracep->declBus(c+94,"div_ctrl_e", false,-1, 1,0);
    tracep->declBit(c+22,"mul_en_e", false,-1);
    tracep->declBit(c+23,"div_en_e", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("em_register ");
    tracep->declBus(c+162,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+149,"clk", false,-1);
    tracep->declBit(c+150,"rst", false,-1);
    tracep->declBit(c+41,"reg_write_e", false,-1);
    tracep->declBus(c+7,"result_src_e", false,-1, 1,0);
    tracep->declBit(c+42,"mem_write_e", false,-1);
    tracep->declBus(c+158,"alu_result_e", false,-1, 31,0);
    tracep->declBus(c+95,"write_data_e", false,-1, 31,0);
    tracep->declBus(c+43,"rd_e", false,-1, 4,0);
    tracep->declBus(c+18,"pc_plus4_e", false,-1, 31,0);
    tracep->declBus(c+12,"funct3_e", false,-1, 2,0);
    tracep->declBit(c+98,"div_stall", false,-1);
    tracep->declBit(c+47,"reg_write_m", false,-1);
    tracep->declBus(c+25,"result_src_m", false,-1, 1,0);
    tracep->declBit(c+48,"mem_write_m", false,-1);
    tracep->declBus(c+44,"alu_result_m", false,-1, 31,0);
    tracep->declBus(c+49,"write_data_m", false,-1, 31,0);
    tracep->declBus(c+50,"rd_m", false,-1, 4,0);
    tracep->declBus(c+26,"pc_plus4_m", false,-1, 31,0);
    tracep->declBus(c+27,"funct3_m", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fd_register ");
    tracep->declBus(c+162,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+149,"clk", false,-1);
    tracep->declBit(c+150,"rst", false,-1);
    tracep->declBit(c+97,"flush", false,-1);
    tracep->declBit(c+96,"stall", false,-1);
    tracep->declBus(c+4,"pc_f", false,-1, 31,0);
    tracep->declBus(c+3,"pc_plus4_f", false,-1, 31,0);
    tracep->declBus(c+70,"instr_f", false,-1, 31,0);
    tracep->declBit(c+98,"div_stall", false,-1);
    tracep->declBus(c+5,"pc_d", false,-1, 31,0);
    tracep->declBus(c+6,"pc_plus4_d", false,-1, 31,0);
    tracep->declBus(c+71,"instr_d", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("hu ");
    tracep->declBus(c+43,"rd_e", false,-1, 4,0);
    tracep->declBus(c+50,"rd_m", false,-1, 4,0);
    tracep->declBus(c+40,"rd_w", false,-1, 4,0);
    tracep->declBus(c+80,"rs1_d", false,-1, 4,0);
    tracep->declBus(c+81,"rs2_d", false,-1, 4,0);
    tracep->declBus(c+15,"rs1_e", false,-1, 4,0);
    tracep->declBus(c+16,"rs2_e", false,-1, 4,0);
    tracep->declBit(c+86,"rs1_used_d", false,-1);
    tracep->declBit(c+87,"rs2_used_d", false,-1);
    tracep->declBit(c+19,"rs1_used_e", false,-1);
    tracep->declBit(c+20,"rs2_used_e", false,-1);
    tracep->declBit(c+47,"reg_write_m", false,-1);
    tracep->declBit(c+38,"reg_write_w", false,-1);
    tracep->declBit(c+32,"load_e", false,-1);
    tracep->declBit(c+69,"branch_taken", false,-1);
    tracep->declBit(c+24,"div_done_e", false,-1);
    tracep->declBit(c+23,"div_en_e", false,-1);
    tracep->declBit(c+96,"stall", false,-1);
    tracep->declBit(c+97,"flush", false,-1);
    tracep->declBus(c+45,"fwd_rs1", false,-1, 1,0);
    tracep->declBus(c+46,"fwd_rs2", false,-1, 1,0);
    tracep->declBit(c+98,"div_stall", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mw_register ");
    tracep->declBus(c+162,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+149,"clk", false,-1);
    tracep->declBit(c+150,"rst", false,-1);
    tracep->declBit(c+47,"reg_write_m", false,-1);
    tracep->declBus(c+25,"result_src_m", false,-1, 1,0);
    tracep->declBus(c+44,"alu_result_m", false,-1, 31,0);
    tracep->declBus(c+159,"read_data_m", false,-1, 31,0);
    tracep->declBus(c+50,"rd_m", false,-1, 4,0);
    tracep->declBus(c+26,"pc_plus4_m", false,-1, 31,0);
    tracep->declBit(c+38,"reg_write_w", false,-1);
    tracep->declBus(c+28,"result_src_w", false,-1, 1,0);
    tracep->declBus(c+29,"alu_result_w", false,-1, 31,0);
    tracep->declBus(c+30,"read_data_w", false,-1, 31,0);
    tracep->declBus(c+40,"rd_w", false,-1, 4,0);
    tracep->declBus(c+31,"pc_plus4_w", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_decode ");
    tracep->declBus(c+162,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+149,"clk", false,-1);
    tracep->declBit(c+38,"reg_write_w", false,-1);
    tracep->declBus(c+71,"instr_d", false,-1, 31,0);
    tracep->declBus(c+39,"result_w", false,-1, 31,0);
    tracep->declBus(c+40,"rd_w", false,-1, 4,0);
    tracep->declBit(c+72,"reg_write_d", false,-1);
    tracep->declBus(c+73,"result_src_d", false,-1, 1,0);
    tracep->declBit(c+74,"mem_write_d", false,-1);
    tracep->declBit(c+75,"jump_d", false,-1);
    tracep->declBit(c+76,"branch_d", false,-1);
    tracep->declBus(c+77,"alu_control_d", false,-1, 3,0);
    tracep->declBit(c+78,"alu_src_d", false,-1);
    tracep->declBus(c+156,"rd1_d", false,-1, 31,0);
    tracep->declBus(c+157,"rd2_d", false,-1, 31,0);
    tracep->declBus(c+79,"rd_d", false,-1, 4,0);
    tracep->declBus(c+80,"rs1_d", false,-1, 4,0);
    tracep->declBus(c+81,"rs2_d", false,-1, 4,0);
    tracep->declBus(c+82,"imm_ext_d", false,-1, 31,0);
    tracep->declBus(c+152,"a0", false,-1, 31,0);
    tracep->declBus(c+83,"funct3_d", false,-1, 2,0);
    tracep->declBit(c+84,"jalr_d", false,-1);
    tracep->declBit(c+85,"op1_pc_d", false,-1);
    tracep->declBit(c+86,"rs1_used_d", false,-1);
    tracep->declBit(c+87,"rs2_used_d", false,-1);
    tracep->declBus(c+88,"mul_ctrl_d", false,-1, 1,0);
    tracep->declBus(c+89,"div_ctrl_d", false,-1, 1,0);
    tracep->declBit(c+90,"mul_en_d", false,-1);
    tracep->declBit(c+91,"div_en_d", false,-1);
    tracep->declBus(c+99,"imm_src_d", false,-1, 2,0);
    tracep->pushNamePrefix("cu ");
    tracep->declBus(c+162,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+71,"ins", false,-1, 31,0);
    tracep->declBit(c+75,"jump_d", false,-1);
    tracep->declBit(c+76,"branch_d", false,-1);
    tracep->declBus(c+73,"result_src", false,-1, 1,0);
    tracep->declBit(c+74,"mem_write", false,-1);
    tracep->declBus(c+77,"alu_ctrl", false,-1, 3,0);
    tracep->declBit(c+78,"alu_src", false,-1);
    tracep->declBus(c+99,"imm_src", false,-1, 2,0);
    tracep->declBit(c+72,"reg_write", false,-1);
    tracep->declBit(c+85,"op1_pc", false,-1);
    tracep->declBus(c+83,"funct3", false,-1, 2,0);
    tracep->declBit(c+84,"jalr", false,-1);
    tracep->declBit(c+86,"rs1_signal", false,-1);
    tracep->declBit(c+87,"rs2_signal", false,-1);
    tracep->declBus(c+88,"mul_ctrl", false,-1, 1,0);
    tracep->declBus(c+89,"div_ctrl", false,-1, 1,0);
    tracep->declBit(c+90,"mul_en", false,-1);
    tracep->declBit(c+91,"div_en", false,-1);
    tracep->declBus(c+100,"opcode", false,-1, 6,0);
    tracep->declBus(c+101,"funct7", false,-1, 6,0);
    tracep->declBus(c+102,"alu_logic", false,-1, 2,0);
    tracep->declBit(c+103,"unused_ins_bits", false,-1);
    tracep->declBit(c+104,"unused_funct7_bits", false,-1);
    tracep->pushNamePrefix("decoder_1 ");
    tracep->declBus(c+100,"opcode", false,-1, 6,0);
    tracep->declBit(c+75,"jump_d", false,-1);
    tracep->declBit(c+76,"branch_d", false,-1);
    tracep->declBus(c+73,"result_src", false,-1, 1,0);
    tracep->declBit(c+74,"mem_write", false,-1);
    tracep->declBit(c+78,"alu_src", false,-1);
    tracep->declBus(c+99,"imm_src", false,-1, 2,0);
    tracep->declBit(c+72,"reg_write", false,-1);
    tracep->declBus(c+102,"alu_op", false,-1, 2,0);
    tracep->declBit(c+84,"jalr", false,-1);
    tracep->declBit(c+85,"op1_pc", false,-1);
    tracep->declBit(c+86,"rs1_signal", false,-1);
    tracep->declBit(c+87,"rs2_signal", false,-1);
    tracep->declBit(c+90,"mul_en", false,-1);
    tracep->declBit(c+91,"div_en", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("decoder_2 ");
    tracep->declBus(c+102,"alu_op", false,-1, 2,0);
    tracep->declBit(c+105,"opcode_5", false,-1);
    tracep->declBus(c+83,"funct3", false,-1, 2,0);
    tracep->declBit(c+106,"funct7_5", false,-1);
    tracep->declBus(c+77,"alu_ctrl", false,-1, 3,0);
    tracep->declBus(c+88,"mul_ctrl", false,-1, 1,0);
    tracep->declBus(c+89,"div_ctrl", false,-1, 1,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("rf ");
    tracep->declBus(c+162,"D_WIDTH", false,-1, 31,0);
    tracep->declBus(c+164,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBit(c+149,"clk", false,-1);
    tracep->declBit(c+38,"wr_en", false,-1);
    tracep->declBus(c+40,"a3", false,-1, 4,0);
    tracep->declBus(c+80,"a1", false,-1, 4,0);
    tracep->declBus(c+81,"a2", false,-1, 4,0);
    tracep->declBus(c+39,"din", false,-1, 31,0);
    tracep->declBus(c+156,"dout1", false,-1, 31,0);
    tracep->declBus(c+157,"dout2", false,-1, 31,0);
    tracep->declBus(c+152,"a0", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+117+i*1,"ram_array", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("se ");
    tracep->declBus(c+162,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+99,"imm_src", false,-1, 2,0);
    tracep->declBus(c+71,"ins", false,-1, 31,0);
    tracep->declBus(c+82,"imm_op", false,-1, 31,0);
    tracep->declBit(c+107,"unused_opcode_bits", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_execute ");
    tracep->declBus(c+162,"D_WIDTH", false,-1, 31,0);
    tracep->declBit(c+149,"clk", false,-1);
    tracep->declBit(c+150,"rst", false,-1);
    tracep->declBus(c+10,"alu_ctrl_e", false,-1, 3,0);
    tracep->declBit(c+11,"alu_src_e", false,-1);
    tracep->declBus(c+92,"rd1_e", false,-1, 31,0);
    tracep->declBus(c+93,"rd2_e", false,-1, 31,0);
    tracep->declBus(c+14,"pc_e", false,-1, 31,0);
    tracep->declBus(c+17,"imm_ext_e", false,-1, 31,0);
    tracep->declBit(c+8,"jump_e", false,-1);
    tracep->declBit(c+9,"branch_e", false,-1);
    tracep->declBus(c+12,"funct3_e", false,-1, 2,0);
    tracep->declBit(c+13,"jalr_e", false,-1);
    tracep->declBit(c+163,"op1_pc_e", false,-1);
    tracep->declBus(c+39,"result_w", false,-1, 31,0);
    tracep->declBus(c+44,"alu_result_m", false,-1, 31,0);
    tracep->declBus(c+45,"fwd_rs1", false,-1, 1,0);
    tracep->declBus(c+46,"fwd_rs2", false,-1, 1,0);
    tracep->declBus(c+21,"mul_ctrl_e", false,-1, 1,0);
    tracep->declBus(c+94,"div_ctrl_e", false,-1, 1,0);
    tracep->declBit(c+22,"mul_en_e", false,-1);
    tracep->declBit(c+23,"div_en_e", false,-1);
    tracep->declBit(c+69,"pc_src_e", false,-1);
    tracep->declBus(c+158,"alu_result_e", false,-1, 31,0);
    tracep->declBus(c+95,"write_data_e", false,-1, 31,0);
    tracep->declBus(c+155,"pc_target_e", false,-1, 31,0);
    tracep->declBit(c+24,"div_done_e", false,-1);
    tracep->declBit(c+160,"zero_e", false,-1);
    tracep->declBus(c+108,"src_a_e", false,-1, 31,0);
    tracep->declBus(c+109,"src_b_e", false,-1, 31,0);
    tracep->declBus(c+110,"alu_res", false,-1, 31,0);
    tracep->declBus(c+33,"pc_imm", false,-1, 31,0);
    tracep->declBus(c+108,"fwd_aluop1_raw", false,-1, 31,0);
    tracep->declBus(c+95,"fwd_aluop2_out", false,-1, 31,0);
    tracep->declBus(c+111,"mul_out_e", false,-1, 31,0);
    tracep->declBus(c+58,"div_out_e", false,-1, 31,0);
    tracep->declBus(c+158,"mda_out", false,-1, 31,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+162,"D_WIDTH", false,-1, 31,0);
    tracep->declBus(c+108,"aluop1", false,-1, 31,0);
    tracep->declBus(c+109,"aluop2", false,-1, 31,0);
    tracep->declBus(c+10,"aluctrl", false,-1, 3,0);
    tracep->declBus(c+12,"funct3", false,-1, 2,0);
    tracep->declBus(c+110,"aluout", false,-1, 31,0);
    tracep->declBit(c+160,"eq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("divider ");
    tracep->declBus(c+162,"D_WIDTH", false,-1, 31,0);
    tracep->declBit(c+149,"clk", false,-1);
    tracep->declBit(c+150,"rst", false,-1);
    tracep->declBit(c+23,"start", false,-1);
    tracep->declBus(c+94,"div_ctrl", false,-1, 1,0);
    tracep->declBus(c+92,"numerator", false,-1, 31,0);
    tracep->declBus(c+93,"denominator", false,-1, 31,0);
    tracep->declBus(c+58,"result", false,-1, 31,0);
    tracep->declBit(c+24,"division_done", false,-1);
    tracep->declBus(c+34,"counter", false,-1, 5,0);
    tracep->declBus(c+112,"state", false,-1, 1,0);
    tracep->declBus(c+113,"next_state", false,-1, 1,0);
    tracep->declQuad(c+59,"rem", false,-1, 32,0);
    tracep->declBus(c+61,"quo", false,-1, 31,0);
    tracep->declBus(c+62,"div_shift", false,-1, 31,0);
    tracep->declQuad(c+63,"den", false,-1, 32,0);
    tracep->declBit(c+65,"sign_q", false,-1);
    tracep->declBit(c+66,"sign_r", false,-1);
    tracep->declBit(c+114,"is_signed", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declQuad(c+67,"rem_next", false,-1, 32,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("fwd_aluop1 ");
    tracep->declBus(c+162,"D_WIDTH", false,-1, 31,0);
    tracep->declBus(c+92,"in0", false,-1, 31,0);
    tracep->declBus(c+39,"in1", false,-1, 31,0);
    tracep->declBus(c+44,"in2", false,-1, 31,0);
    tracep->declBus(c+165,"in3", false,-1, 31,0);
    tracep->declBus(c+45,"sel", false,-1, 1,0);
    tracep->declBus(c+108,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fwd_aluop2 ");
    tracep->declBus(c+162,"D_WIDTH", false,-1, 31,0);
    tracep->declBus(c+93,"in0", false,-1, 31,0);
    tracep->declBus(c+39,"in1", false,-1, 31,0);
    tracep->declBus(c+44,"in2", false,-1, 31,0);
    tracep->declBus(c+165,"in3", false,-1, 31,0);
    tracep->declBus(c+46,"sel", false,-1, 1,0);
    tracep->declBus(c+95,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("imm_mux ");
    tracep->declBus(c+162,"D_WIDTH", false,-1, 31,0);
    tracep->declBus(c+95,"in0", false,-1, 31,0);
    tracep->declBus(c+17,"in1", false,-1, 31,0);
    tracep->declBit(c+11,"sel", false,-1);
    tracep->declBus(c+109,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mul_div_alu ");
    tracep->declBus(c+162,"D_WIDTH", false,-1, 31,0);
    tracep->declBus(c+110,"in0", false,-1, 31,0);
    tracep->declBus(c+111,"in1", false,-1, 31,0);
    tracep->declBus(c+58,"in2", false,-1, 31,0);
    tracep->declBus(c+165,"in3", false,-1, 31,0);
    tracep->declBus(c+51,"sel", false,-1, 1,0);
    tracep->declBus(c+158,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("multiplier ");
    tracep->declBus(c+162,"D_WIDTH", false,-1, 31,0);
    tracep->declBus(c+92,"rd1", false,-1, 31,0);
    tracep->declBus(c+93,"rd2", false,-1, 31,0);
    tracep->declBus(c+21,"mul_ctrl", false,-1, 1,0);
    tracep->declBus(c+111,"result", false,-1, 31,0);
    tracep->declQuad(c+115,"full_result", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_mux ");
    tracep->declBus(c+162,"D_WIDTH", false,-1, 31,0);
    tracep->declBus(c+33,"in0", false,-1, 31,0);
    tracep->declBus(c+110,"in1", false,-1, 31,0);
    tracep->declBit(c+13,"sel", false,-1);
    tracep->declBus(c+155,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_branch ");
    tracep->declBus(c+162,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+14,"pc", false,-1, 31,0);
    tracep->declBus(c+17,"imm", false,-1, 31,0);
    tracep->declBus(c+33,"branch_pc", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_fetch ");
    tracep->declBus(c+162,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+149,"clk", false,-1);
    tracep->declBit(c+150,"rst", false,-1);
    tracep->declBit(c+96,"stall", false,-1);
    tracep->declBus(c+155,"pc_target_e", false,-1, 31,0);
    tracep->declBit(c+69,"pc_src_e", false,-1);
    tracep->declBus(c+3,"pc_plus4_f", false,-1, 31,0);
    tracep->declBus(c+4,"pc_f", false,-1, 31,0);
    tracep->declBus(c+70,"instr_f", false,-1, 31,0);
    tracep->declBus(c+161,"next_pc", false,-1, 31,0);
    tracep->declBus(c+35,"dbg_count", false,-1, 3,0);
    tracep->declBus(c+3,"pc_plus4", false,-1, 31,0);
    tracep->pushNamePrefix("u_instr_mem ");
    tracep->declBus(c+162,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+162,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+166,"SIZE", false,-1, 31,0);
    tracep->declBus(c+4,"addr", false,-1, 31,0);
    tracep->declBus(c+70,"dout", false,-1, 31,0);
    tracep->declBus(c+36,"byte_addr", false,-1, 13,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_pc_inc ");
    tracep->declBus(c+162,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+4,"pc", false,-1, 31,0);
    tracep->declBus(c+3,"inc_pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_pc_mux ");
    tracep->declBus(c+162,"D_WIDTH", false,-1, 31,0);
    tracep->declBus(c+3,"in0", false,-1, 31,0);
    tracep->declBus(c+155,"in1", false,-1, 31,0);
    tracep->declBit(c+69,"sel", false,-1);
    tracep->declBus(c+161,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_pc_reg ");
    tracep->declBus(c+162,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+149,"clk", false,-1);
    tracep->declBit(c+150,"rst", false,-1);
    tracep->declBit(c+96,"stall", false,-1);
    tracep->declBus(c+161,"pc_in", false,-1, 31,0);
    tracep->declBus(c+4,"pc_out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_memory ");
    tracep->declBus(c+162,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+149,"clk", false,-1);
    tracep->declBus(c+44,"alu_result_m", false,-1, 31,0);
    tracep->declBus(c+49,"write_data_m", false,-1, 31,0);
    tracep->declBit(c+48,"mem_write_m", false,-1);
    tracep->declBus(c+27,"funct3_m", false,-1, 2,0);
    tracep->declBus(c+159,"read_data_m", false,-1, 31,0);
    tracep->declBus(c+52,"mem_word", false,-1, 31,0);
    tracep->declBus(c+49,"store_data", false,-1, 31,0);
    tracep->declBus(c+37,"byte_en", false,-1, 3,0);
    tracep->declBus(c+53,"selected_byte", false,-1, 7,0);
    tracep->declBus(c+54,"selected_half", false,-1, 15,0);
    tracep->pushNamePrefix("data_mem ");
    tracep->declBus(c+162,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+167,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+168,"SIZE", false,-1, 31,0);
    tracep->declBus(c+44,"addr", false,-1, 31,0);
    tracep->declBus(c+49,"write_data", false,-1, 31,0);
    tracep->declBit(c+149,"clk", false,-1);
    tracep->declBit(c+48,"write_enable", false,-1);
    tracep->declBus(c+55,"byte_en", false,-1, 3,0);
    tracep->declBus(c+52,"read_data", false,-1, 31,0);
    tracep->declBus(c+56,"index", false,-1, 16,0);
    tracep->declBit(c+57,"unused_upper_addr", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+2,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("u_writeback ");
    tracep->declBus(c+162,"D_WIDTH", false,-1, 31,0);
    tracep->declBus(c+28,"result_src_w", false,-1, 1,0);
    tracep->declBus(c+29,"alu_result_w", false,-1, 31,0);
    tracep->declBus(c+30,"read_data_w", false,-1, 31,0);
    tracep->declBus(c+31,"pc_plus4_w", false,-1, 31,0);
    tracep->declBus(c+39,"result_w", false,-1, 31,0);
    tracep->pushNamePrefix("writeback_mux ");
    tracep->declBus(c+162,"D_WIDTH", false,-1, 31,0);
    tracep->declBus(c+29,"in0", false,-1, 31,0);
    tracep->declBus(c+30,"in1", false,-1, 31,0);
    tracep->declBus(c+31,"in2", false,-1, 31,0);
    tracep->declBus(c+165,"in3", false,-1, 31,0);
    tracep->declBus(c+28,"sel", false,-1, 1,0);
    tracep->declBus(c+39,"out", false,-1, 31,0);
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
    bufp->fullIData(oldp+2,(vlSelf->cpu__DOT__u_memory__DOT__data_mem__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+3,(((IData)(4U) + vlSelf->cpu__DOT__pc_f)),32);
    bufp->fullIData(oldp+4,(vlSelf->cpu__DOT__pc_f),32);
    bufp->fullIData(oldp+5,(vlSelf->cpu__DOT__pc_d),32);
    bufp->fullIData(oldp+6,(vlSelf->cpu__DOT__pc_plus4_d),32);
    bufp->fullCData(oldp+7,(vlSelf->cpu__DOT__result_src_e),2);
    bufp->fullBit(oldp+8,(vlSelf->cpu__DOT__jump_e));
    bufp->fullBit(oldp+9,(vlSelf->cpu__DOT__branch_e));
    bufp->fullCData(oldp+10,(vlSelf->cpu__DOT__alu_ctrl_e),4);
    bufp->fullBit(oldp+11,(vlSelf->cpu__DOT__alu_src_e));
    bufp->fullCData(oldp+12,(vlSelf->cpu__DOT__funct3_e),3);
    bufp->fullBit(oldp+13,(vlSelf->cpu__DOT__jalr_e));
    bufp->fullIData(oldp+14,(vlSelf->cpu__DOT__pc_e),32);
    bufp->fullCData(oldp+15,(vlSelf->cpu__DOT__rs1_e),5);
    bufp->fullCData(oldp+16,(vlSelf->cpu__DOT__rs2_e),5);
    bufp->fullIData(oldp+17,(vlSelf->cpu__DOT__imm_ext_e),32);
    bufp->fullIData(oldp+18,(vlSelf->cpu__DOT__pc_plus4_e),32);
    bufp->fullBit(oldp+19,(vlSelf->cpu__DOT__rs1_used_e));
    bufp->fullBit(oldp+20,(vlSelf->cpu__DOT__rs2_used_e));
    bufp->fullCData(oldp+21,(vlSelf->cpu__DOT__mul_ctrl_e),2);
    bufp->fullBit(oldp+22,(vlSelf->cpu__DOT__mul_en_e));
    bufp->fullBit(oldp+23,(vlSelf->cpu__DOT__div_en_e));
    bufp->fullBit(oldp+24,(vlSelf->cpu__DOT__div_done_e));
    bufp->fullCData(oldp+25,(vlSelf->cpu__DOT__result_src_m),2);
    bufp->fullIData(oldp+26,(vlSelf->cpu__DOT__pc_plus4_m),32);
    bufp->fullCData(oldp+27,(vlSelf->cpu__DOT__funct3_m),3);
    bufp->fullCData(oldp+28,(vlSelf->cpu__DOT__result_src_w),2);
    bufp->fullIData(oldp+29,(vlSelf->cpu__DOT__alu_result_w),32);
    bufp->fullIData(oldp+30,(vlSelf->cpu__DOT__read_data_w),32);
    bufp->fullIData(oldp+31,(vlSelf->cpu__DOT__pc_plus4_w),32);
    bufp->fullBit(oldp+32,((1U == (IData)(vlSelf->cpu__DOT__result_src_e))));
    bufp->fullIData(oldp+33,((vlSelf->cpu__DOT__pc_e 
                              + vlSelf->cpu__DOT__imm_ext_e)),32);
    bufp->fullCData(oldp+34,(vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__counter),6);
    bufp->fullCData(oldp+35,(vlSelf->cpu__DOT__u_fetch__DOT__dbg_count),4);
    bufp->fullSData(oldp+36,((0x3fffU & vlSelf->cpu__DOT__pc_f)),14);
    bufp->fullCData(oldp+37,(((0U == (IData)(vlSelf->cpu__DOT__funct3_m))
                               ? 1U : ((1U == (IData)(vlSelf->cpu__DOT__funct3_m))
                                        ? 3U : ((2U 
                                                 == (IData)(vlSelf->cpu__DOT__funct3_m))
                                                 ? 0xfU
                                                 : 0U)))),4);
    bufp->fullBit(oldp+38,(vlSelf->cpu__DOT__reg_write_w));
    bufp->fullIData(oldp+39,(vlSelf->cpu__DOT__result_w),32);
    bufp->fullCData(oldp+40,(vlSelf->cpu__DOT__rd_w),5);
    bufp->fullBit(oldp+41,(vlSelf->cpu__DOT__reg_write_e));
    bufp->fullBit(oldp+42,(vlSelf->cpu__DOT__mem_write_e));
    bufp->fullCData(oldp+43,(vlSelf->cpu__DOT__rd_e),5);
    bufp->fullIData(oldp+44,(vlSelf->cpu__DOT__alu_result_m),32);
    bufp->fullCData(oldp+45,(vlSelf->cpu__DOT__fwd_rs1),2);
    bufp->fullCData(oldp+46,(vlSelf->cpu__DOT__fwd_rs2),2);
    bufp->fullBit(oldp+47,(vlSelf->cpu__DOT__reg_write_m));
    bufp->fullBit(oldp+48,(vlSelf->cpu__DOT__mem_write_m));
    bufp->fullIData(oldp+49,(vlSelf->cpu__DOT__write_data_m),32);
    bufp->fullCData(oldp+50,(vlSelf->cpu__DOT__rd_m),5);
    bufp->fullCData(oldp+51,(vlSelf->cpu__DOT__u_execute__DOT____Vcellinp__mul_div_alu__sel),2);
    bufp->fullIData(oldp+52,(vlSelf->cpu__DOT__u_memory__DOT__mem_word),32);
    bufp->fullCData(oldp+53,((0xffU & vlSelf->cpu__DOT__u_memory__DOT__mem_word)),8);
    bufp->fullSData(oldp+54,((0xffffU & vlSelf->cpu__DOT__u_memory__DOT__mem_word)),16);
    bufp->fullCData(oldp+55,(vlSelf->cpu__DOT__u_memory__DOT____Vcellinp__data_mem__byte_en),4);
    bufp->fullIData(oldp+56,((0x1ffffU & vlSelf->cpu__DOT__alu_result_m)),17);
    bufp->fullBit(oldp+57,((0U != (vlSelf->cpu__DOT__alu_result_m 
                                   >> 0x11U))));
    bufp->fullIData(oldp+58,(vlSelf->cpu__DOT__u_execute__DOT__div_out_e),32);
    bufp->fullQData(oldp+59,(vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__rem),33);
    bufp->fullIData(oldp+61,(vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__quo),32);
    bufp->fullIData(oldp+62,(vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__div_shift),32);
    bufp->fullQData(oldp+63,(vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__den),33);
    bufp->fullBit(oldp+65,(vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__sign_q));
    bufp->fullBit(oldp+66,(vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__sign_r));
    bufp->fullQData(oldp+67,(vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__unnamedblk1__DOT__rem_next),33);
    bufp->fullBit(oldp+69,(vlSelf->cpu__DOT__pc_src_e));
    bufp->fullIData(oldp+70,(vlSelf->cpu__DOT__instr_f),32);
    bufp->fullIData(oldp+71,(vlSelf->cpu__DOT__instr_d),32);
    bufp->fullBit(oldp+72,(vlSelf->cpu__DOT__reg_write_d));
    bufp->fullCData(oldp+73,(vlSelf->cpu__DOT__result_src_d),2);
    bufp->fullBit(oldp+74,(vlSelf->cpu__DOT__mem_write_d));
    bufp->fullBit(oldp+75,(vlSelf->cpu__DOT__jump_d));
    bufp->fullBit(oldp+76,(vlSelf->cpu__DOT__branch_d));
    bufp->fullCData(oldp+77,(vlSelf->cpu__DOT__alu_ctrl_d),4);
    bufp->fullBit(oldp+78,(vlSelf->cpu__DOT__alu_src_d));
    bufp->fullCData(oldp+79,((0x1fU & (vlSelf->cpu__DOT__instr_d 
                                       >> 7U))),5);
    bufp->fullCData(oldp+80,((0x1fU & (vlSelf->cpu__DOT__instr_d 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+81,((0x1fU & (vlSelf->cpu__DOT__instr_d 
                                       >> 0x14U))),5);
    bufp->fullIData(oldp+82,(vlSelf->cpu__DOT__imm_ext_d),32);
    bufp->fullCData(oldp+83,((7U & (vlSelf->cpu__DOT__instr_d 
                                    >> 0xcU))),3);
    bufp->fullBit(oldp+84,(vlSelf->cpu__DOT__jalr_d));
    bufp->fullBit(oldp+85,(vlSelf->cpu__DOT__op1_pc_d));
    bufp->fullBit(oldp+86,(vlSelf->cpu__DOT__rs1_used_d));
    bufp->fullBit(oldp+87,(vlSelf->cpu__DOT__rs2_used_d));
    bufp->fullCData(oldp+88,(vlSelf->cpu__DOT__mul_ctrl_d),2);
    bufp->fullCData(oldp+89,(vlSelf->cpu__DOT__div_ctrl_d),2);
    bufp->fullBit(oldp+90,(vlSelf->cpu__DOT__mul_en_d));
    bufp->fullBit(oldp+91,(vlSelf->cpu__DOT__div_en_d));
    bufp->fullIData(oldp+92,(vlSelf->cpu__DOT__rd1_e),32);
    bufp->fullIData(oldp+93,(vlSelf->cpu__DOT__rd2_e),32);
    bufp->fullCData(oldp+94,(vlSelf->cpu__DOT__div_ctrl_e),2);
    bufp->fullIData(oldp+95,(vlSelf->cpu__DOT__u_execute__DOT__fwd_aluop2_out),32);
    bufp->fullBit(oldp+96,(vlSelf->cpu__DOT__stall));
    bufp->fullBit(oldp+97,(vlSelf->cpu__DOT__flush));
    bufp->fullBit(oldp+98,(vlSelf->cpu__DOT__div_stall));
    bufp->fullCData(oldp+99,(vlSelf->cpu__DOT__u_decode__DOT__imm_src_d),3);
    bufp->fullCData(oldp+100,((0x7fU & vlSelf->cpu__DOT__instr_d)),7);
    bufp->fullCData(oldp+101,((vlSelf->cpu__DOT__instr_d 
                               >> 0x19U)),7);
    bufp->fullCData(oldp+102,(vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__alu_logic),3);
    bufp->fullBit(oldp+103,((IData)((0U != (0x1ff8f80U 
                                            & vlSelf->cpu__DOT__instr_d)))));
    bufp->fullBit(oldp+104,((IData)((0U != (0xbe000000U 
                                            & vlSelf->cpu__DOT__instr_d)))));
    bufp->fullBit(oldp+105,((1U & (vlSelf->cpu__DOT__instr_d 
                                   >> 5U))));
    bufp->fullBit(oldp+106,((1U & (vlSelf->cpu__DOT__instr_d 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+107,((0U != (0x7fU & vlSelf->cpu__DOT__instr_d))));
    bufp->fullIData(oldp+108,(vlSelf->cpu__DOT__u_execute__DOT__fwd_aluop1_raw),32);
    bufp->fullIData(oldp+109,(vlSelf->cpu__DOT__u_execute__DOT__src_b_e),32);
    bufp->fullIData(oldp+110,(vlSelf->cpu__DOT__u_execute__DOT__alu_res),32);
    bufp->fullIData(oldp+111,(vlSelf->cpu__DOT__u_execute__DOT__mul_out_e),32);
    bufp->fullCData(oldp+112,(vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__state),2);
    bufp->fullCData(oldp+113,(vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__next_state),2);
    bufp->fullBit(oldp+114,(vlSelf->cpu__DOT__u_execute__DOT__divider__DOT__is_signed));
    bufp->fullQData(oldp+115,(vlSelf->cpu__DOT__u_execute__DOT__multiplier__DOT__full_result),64);
    bufp->fullIData(oldp+117,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[0]),32);
    bufp->fullIData(oldp+118,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[1]),32);
    bufp->fullIData(oldp+119,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[2]),32);
    bufp->fullIData(oldp+120,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[3]),32);
    bufp->fullIData(oldp+121,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[4]),32);
    bufp->fullIData(oldp+122,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[5]),32);
    bufp->fullIData(oldp+123,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[6]),32);
    bufp->fullIData(oldp+124,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[7]),32);
    bufp->fullIData(oldp+125,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[8]),32);
    bufp->fullIData(oldp+126,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[9]),32);
    bufp->fullIData(oldp+127,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[10]),32);
    bufp->fullIData(oldp+128,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[11]),32);
    bufp->fullIData(oldp+129,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[12]),32);
    bufp->fullIData(oldp+130,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[13]),32);
    bufp->fullIData(oldp+131,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[14]),32);
    bufp->fullIData(oldp+132,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[15]),32);
    bufp->fullIData(oldp+133,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[16]),32);
    bufp->fullIData(oldp+134,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[17]),32);
    bufp->fullIData(oldp+135,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[18]),32);
    bufp->fullIData(oldp+136,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[19]),32);
    bufp->fullIData(oldp+137,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[20]),32);
    bufp->fullIData(oldp+138,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[21]),32);
    bufp->fullIData(oldp+139,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[22]),32);
    bufp->fullIData(oldp+140,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[23]),32);
    bufp->fullIData(oldp+141,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[24]),32);
    bufp->fullIData(oldp+142,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[25]),32);
    bufp->fullIData(oldp+143,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[26]),32);
    bufp->fullIData(oldp+144,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[27]),32);
    bufp->fullIData(oldp+145,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[28]),32);
    bufp->fullIData(oldp+146,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[29]),32);
    bufp->fullIData(oldp+147,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[30]),32);
    bufp->fullIData(oldp+148,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[31]),32);
    bufp->fullBit(oldp+149,(vlSelf->clk));
    bufp->fullBit(oldp+150,(vlSelf->rst));
    bufp->fullBit(oldp+151,(vlSelf->trigger));
    bufp->fullIData(oldp+152,(vlSelf->a0),32);
    bufp->fullIData(oldp+153,(vlSelf->debug_pc_f),32);
    bufp->fullIData(oldp+154,(vlSelf->debug_instr_f),32);
    bufp->fullIData(oldp+155,(((IData)(vlSelf->cpu__DOT__jalr_e)
                                ? vlSelf->cpu__DOT__u_execute__DOT__alu_res
                                : (vlSelf->cpu__DOT__pc_e 
                                   + vlSelf->cpu__DOT__imm_ext_e))),32);
    bufp->fullIData(oldp+156,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array
                              [(0x1fU & (vlSelf->cpu__DOT__instr_d 
                                         >> 0xfU))]),32);
    bufp->fullIData(oldp+157,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array
                              [(0x1fU & (vlSelf->cpu__DOT__instr_d 
                                         >> 0x14U))]),32);
    bufp->fullIData(oldp+158,(((2U & (IData)(vlSelf->cpu__DOT__u_execute__DOT____Vcellinp__mul_div_alu__sel))
                                ? ((1U & (IData)(vlSelf->cpu__DOT__u_execute__DOT____Vcellinp__mul_div_alu__sel))
                                    ? 0U : vlSelf->cpu__DOT__u_execute__DOT__div_out_e)
                                : ((1U & (IData)(vlSelf->cpu__DOT__u_execute__DOT____Vcellinp__mul_div_alu__sel))
                                    ? vlSelf->cpu__DOT__u_execute__DOT__mul_out_e
                                    : vlSelf->cpu__DOT__u_execute__DOT__alu_res))),32);
    bufp->fullIData(oldp+159,(((4U & (IData)(vlSelf->cpu__DOT__funct3_m))
                                ? ((2U & (IData)(vlSelf->cpu__DOT__funct3_m))
                                    ? vlSelf->cpu__DOT__u_memory__DOT__mem_word
                                    : ((1U & (IData)(vlSelf->cpu__DOT__funct3_m))
                                        ? (0xffffU 
                                           & vlSelf->cpu__DOT__u_memory__DOT__mem_word)
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
                                            << 8U) 
                                           | (0xffU 
                                              & vlSelf->cpu__DOT__u_memory__DOT__mem_word)))))),32);
    bufp->fullBit(oldp+160,(((4U & (IData)(vlSelf->cpu__DOT__funct3_e))
                              ? ((2U & (IData)(vlSelf->cpu__DOT__funct3_e))
                                  ? ((1U & (IData)(vlSelf->cpu__DOT__funct3_e))
                                      ? (vlSelf->cpu__DOT__u_execute__DOT__fwd_aluop1_raw 
                                         >= vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                      : (vlSelf->cpu__DOT__u_execute__DOT__fwd_aluop1_raw 
                                         < vlSelf->cpu__DOT__u_execute__DOT__src_b_e))
                                  : ((1U & (IData)(vlSelf->cpu__DOT__funct3_e))
                                      ? VL_GTES_III(32, vlSelf->cpu__DOT__u_execute__DOT__fwd_aluop1_raw, vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                      : VL_LTS_III(32, vlSelf->cpu__DOT__u_execute__DOT__fwd_aluop1_raw, vlSelf->cpu__DOT__u_execute__DOT__src_b_e)))
                              : ((~ ((IData)(vlSelf->cpu__DOT__funct3_e) 
                                     >> 1U)) & ((1U 
                                                 & (IData)(vlSelf->cpu__DOT__funct3_e))
                                                 ? 
                                                (vlSelf->cpu__DOT__u_execute__DOT__fwd_aluop1_raw 
                                                 != vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                                 : 
                                                (vlSelf->cpu__DOT__u_execute__DOT__fwd_aluop1_raw 
                                                 == vlSelf->cpu__DOT__u_execute__DOT__src_b_e))))));
    bufp->fullIData(oldp+161,(((IData)(vlSelf->cpu__DOT__pc_src_e)
                                ? ((IData)(vlSelf->cpu__DOT__jalr_e)
                                    ? vlSelf->cpu__DOT__u_execute__DOT__alu_res
                                    : (vlSelf->cpu__DOT__pc_e 
                                       + vlSelf->cpu__DOT__imm_ext_e))
                                : ((IData)(4U) + vlSelf->cpu__DOT__pc_f))),32);
    bufp->fullIData(oldp+162,(0x20U),32);
    bufp->fullBit(oldp+163,(0U));
    bufp->fullIData(oldp+164,(5U),32);
    bufp->fullIData(oldp+165,(0U),32);
    bufp->fullIData(oldp+166,(0xeU),32);
    bufp->fullIData(oldp+167,(8U),32);
    bufp->fullIData(oldp+168,(0x11U),32);
}
