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
    tracep->declBit(c+57,"clk", false,-1);
    tracep->declBit(c+58,"rst", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBus(c+66,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+57,"clk", false,-1);
    tracep->declBit(c+58,"rst", false,-1);
    tracep->declBus(c+34,"pc_f", false,-1, 31,0);
    tracep->declBus(c+35,"pc_plus_4f", false,-1, 31,0);
    tracep->declBus(c+36,"ins", false,-1, 31,0);
    tracep->declBit(c+45,"reg_write_d", false,-1);
    tracep->declBus(c+46,"result_src_d", false,-1, 1,0);
    tracep->declBit(c+47,"mem_write_d", false,-1);
    tracep->declBit(c+48,"pc_src", false,-1);
    tracep->declBus(c+49,"alu_control_d", false,-1, 3,0);
    tracep->declBit(c+50,"alu_src_d", false,-1);
    tracep->declBus(c+59,"rd_1", false,-1, 31,0);
    tracep->declBus(c+60,"rd_2", false,-1, 31,0);
    tracep->declBus(c+34,"pc_d_o", false,-1, 31,0);
    tracep->declBus(c+37,"rd_d", false,-1, 4,0);
    tracep->declBus(c+51,"imm_ext_d", false,-1, 31,0);
    tracep->declBus(c+35,"pc_plus_4d_o", false,-1, 31,0);
    tracep->declBit(c+61,"zero_e", false,-1);
    tracep->declBit(c+45,"reg_write_e_o", false,-1);
    tracep->declBus(c+46,"result_src_e_o", false,-1, 1,0);
    tracep->declBit(c+47,"mem_write_e_o", false,-1);
    tracep->declBus(c+52,"alu_result_e", false,-1, 31,0);
    tracep->declBus(c+60,"write_data_e", false,-1, 31,0);
    tracep->declBus(c+37,"rd_e_o", false,-1, 4,0);
    tracep->declBus(c+35,"pc_plus_4e_o", false,-1, 31,0);
    tracep->declBus(c+62,"pc_target_e", false,-1, 31,0);
    tracep->declBus(c+63,"read_data_m", false,-1, 31,0);
    tracep->declBit(c+45,"reg_write_m_o", false,-1);
    tracep->declBus(c+46,"result_src_m_o", false,-1, 1,0);
    tracep->declBus(c+37,"rd_m_o", false,-1, 4,0);
    tracep->declBus(c+35,"pc_plus_4_m_o", false,-1, 31,0);
    tracep->declBus(c+52,"alu_result_m_o", false,-1, 31,0);
    tracep->declBit(c+45,"reg_write_w_o", false,-1);
    tracep->declBus(c+37,"rd_w_o", false,-1, 4,0);
    tracep->declBus(c+64,"result_w", false,-1, 31,0);
    tracep->pushNamePrefix("u_decode ");
    tracep->declBus(c+66,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+57,"clk", false,-1);
    tracep->declBit(c+61,"zero_e", false,-1);
    tracep->declBit(c+45,"reg_write_w", false,-1);
    tracep->declBus(c+36,"ins", false,-1, 31,0);
    tracep->declBus(c+34,"pc_d_i", false,-1, 31,0);
    tracep->declBus(c+35,"pc_plus_4d_i", false,-1, 31,0);
    tracep->declBus(c+64,"result_w", false,-1, 31,0);
    tracep->declBus(c+37,"rd_w", false,-1, 4,0);
    tracep->declBit(c+45,"reg_write_d", false,-1);
    tracep->declBus(c+46,"result_src_d", false,-1, 1,0);
    tracep->declBit(c+47,"mem_write_d", false,-1);
    tracep->declBit(c+48,"pc_src", false,-1);
    tracep->declBus(c+49,"alu_control_d", false,-1, 3,0);
    tracep->declBit(c+50,"alu_src_d", false,-1);
    tracep->declBus(c+59,"rd_1", false,-1, 31,0);
    tracep->declBus(c+60,"rd_2", false,-1, 31,0);
    tracep->declBus(c+34,"pc_d_o", false,-1, 31,0);
    tracep->declBus(c+37,"rd_d", false,-1, 4,0);
    tracep->declBus(c+51,"imm_ext_d", false,-1, 31,0);
    tracep->declBus(c+35,"pc_plus_4d_o", false,-1, 31,0);
    tracep->declBus(c+53,"imm_src_d", false,-1, 2,0);
    tracep->pushNamePrefix("cu ");
    tracep->declBus(c+66,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+36,"ins", false,-1, 31,0);
    tracep->declBit(c+61,"eq", false,-1);
    tracep->declBit(c+48,"pc_src", false,-1);
    tracep->declBus(c+46,"result_src", false,-1, 1,0);
    tracep->declBit(c+47,"mem_write", false,-1);
    tracep->declBus(c+49,"alu_ctrl", false,-1, 3,0);
    tracep->declBit(c+50,"alu_src", false,-1);
    tracep->declBus(c+53,"imm_src", false,-1, 2,0);
    tracep->declBit(c+45,"reg_write", false,-1);
    tracep->declBus(c+38,"opcode", false,-1, 6,0);
    tracep->declBus(c+39,"funct7", false,-1, 6,0);
    tracep->declBus(c+40,"funct3", false,-1, 2,0);
    tracep->declBus(c+54,"alu_logic", false,-1, 2,0);
    tracep->pushNamePrefix("decoder_1 ");
    tracep->declBus(c+38,"opcode", false,-1, 6,0);
    tracep->declBit(c+61,"eq", false,-1);
    tracep->declBit(c+48,"pc_src", false,-1);
    tracep->declBus(c+46,"result_src", false,-1, 1,0);
    tracep->declBit(c+47,"mem_write", false,-1);
    tracep->declBit(c+50,"alu_src", false,-1);
    tracep->declBus(c+53,"imm_src", false,-1, 2,0);
    tracep->declBit(c+45,"reg_write", false,-1);
    tracep->declBus(c+54,"alu_op", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("decoder_2 ");
    tracep->declBus(c+54,"alu_op", false,-1, 2,0);
    tracep->declBit(c+41,"opcode_5", false,-1);
    tracep->declBus(c+40,"funct3", false,-1, 2,0);
    tracep->declBit(c+42,"funct7_5", false,-1);
    tracep->declBus(c+49,"alu_ctrl", false,-1, 3,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("rf ");
    tracep->declBus(c+66,"D_WIDTH", false,-1, 31,0);
    tracep->declBus(c+67,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBit(c+57,"clk", false,-1);
    tracep->declBit(c+45,"wr_en", false,-1);
    tracep->declBus(c+37,"a3", false,-1, 4,0);
    tracep->declBus(c+43,"a1", false,-1, 4,0);
    tracep->declBus(c+44,"a2", false,-1, 4,0);
    tracep->declBus(c+64,"din", false,-1, 31,0);
    tracep->declBus(c+59,"dout1", false,-1, 31,0);
    tracep->declBus(c+60,"dout2", false,-1, 31,0);
    tracep->declBus(c+68,"DEPTH", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+2+i*1,"ram_array", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("se ");
    tracep->declBus(c+66,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+53,"imm_src", false,-1, 2,0);
    tracep->declBus(c+36,"ins", false,-1, 31,0);
    tracep->declBus(c+51,"imm_op", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_execute ");
    tracep->declBus(c+66,"D_WIDTH", false,-1, 31,0);
    tracep->declBit(c+45,"reg_write_e_i", false,-1);
    tracep->declBus(c+46,"result_src_e_i", false,-1, 1,0);
    tracep->declBit(c+47,"mem_write_e_i", false,-1);
    tracep->declBus(c+49,"alu_ctrl_e", false,-1, 3,0);
    tracep->declBit(c+50,"alu_src_e", false,-1);
    tracep->declBus(c+59,"rd1_e", false,-1, 31,0);
    tracep->declBus(c+60,"rd2_e", false,-1, 31,0);
    tracep->declBus(c+34,"pc_e", false,-1, 31,0);
    tracep->declBus(c+37,"rd_e_i", false,-1, 4,0);
    tracep->declBus(c+51,"imm_ext_e", false,-1, 31,0);
    tracep->declBus(c+35,"pc_plus_4e_i", false,-1, 31,0);
    tracep->declBit(c+61,"zero_e", false,-1);
    tracep->declBit(c+45,"reg_write_e_o", false,-1);
    tracep->declBus(c+46,"result_src_e_o", false,-1, 1,0);
    tracep->declBit(c+47,"mem_write_e_o", false,-1);
    tracep->declBus(c+52,"alu_result", false,-1, 31,0);
    tracep->declBus(c+60,"write_data_e", false,-1, 31,0);
    tracep->declBus(c+37,"rd_e_o", false,-1, 4,0);
    tracep->declBus(c+35,"pc_plus_4e_o", false,-1, 31,0);
    tracep->declBus(c+62,"pc_target_e", false,-1, 31,0);
    tracep->declBus(c+55,"src_b_e", false,-1, 31,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+66,"D_WIDTH", false,-1, 31,0);
    tracep->declBus(c+59,"aluop1", false,-1, 31,0);
    tracep->declBus(c+55,"aluop2", false,-1, 31,0);
    tracep->declBus(c+49,"aluctrl", false,-1, 3,0);
    tracep->declBus(c+52,"aluout", false,-1, 31,0);
    tracep->declBit(c+61,"eq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("imm_mux ");
    tracep->declBus(c+66,"D_WIDTH", false,-1, 31,0);
    tracep->declBus(c+60,"in0", false,-1, 31,0);
    tracep->declBus(c+51,"in1", false,-1, 31,0);
    tracep->declBit(c+50,"sel", false,-1);
    tracep->declBus(c+55,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_branch ");
    tracep->declBus(c+66,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+34,"pc", false,-1, 31,0);
    tracep->declBus(c+51,"imm", false,-1, 31,0);
    tracep->declBus(c+62,"branch_pc", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_fetch ");
    tracep->declBus(c+66,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+57,"clk", false,-1);
    tracep->declBit(c+58,"rst", false,-1);
    tracep->declBus(c+62,"pc_target_ext", false,-1, 31,0);
    tracep->declBit(c+48,"pc_src", false,-1);
    tracep->declBus(c+35,"pc_plus_4f", false,-1, 31,0);
    tracep->declBus(c+34,"pc_f", false,-1, 31,0);
    tracep->declBus(c+36,"ins", false,-1, 31,0);
    tracep->declBus(c+65,"next_pc", false,-1, 31,0);
    tracep->declBus(c+35,"pc_plus_4", false,-1, 31,0);
    tracep->pushNamePrefix("u_instr_mem ");
    tracep->declBus(c+66,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+66,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+69,"SIZE", false,-1, 31,0);
    tracep->declBus(c+34,"addr", false,-1, 31,0);
    tracep->declBus(c+36,"dout", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_pc_inc ");
    tracep->declBus(c+66,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+34,"pc", false,-1, 31,0);
    tracep->declBus(c+35,"inc_pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_pc_mux ");
    tracep->declBus(c+66,"D_WIDTH", false,-1, 31,0);
    tracep->declBus(c+35,"in0", false,-1, 31,0);
    tracep->declBus(c+62,"in1", false,-1, 31,0);
    tracep->declBit(c+48,"sel", false,-1);
    tracep->declBus(c+65,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_pc_reg ");
    tracep->declBus(c+66,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+57,"clk", false,-1);
    tracep->declBit(c+58,"rst", false,-1);
    tracep->declBus(c+65,"pc_in", false,-1, 31,0);
    tracep->declBus(c+34,"pc_out", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_memory ");
    tracep->declBus(c+66,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+52,"alu_result_m_i", false,-1, 31,0);
    tracep->declBus(c+60,"write_data_m", false,-1, 31,0);
    tracep->declBit(c+57,"clk", false,-1);
    tracep->declBit(c+47,"mem_write_m", false,-1);
    tracep->declBit(c+45,"reg_write_m_i", false,-1);
    tracep->declBus(c+46,"result_src_m_i", false,-1, 1,0);
    tracep->declBus(c+37,"rd_m_i", false,-1, 4,0);
    tracep->declBus(c+35,"pc_plus_4_m_i", false,-1, 31,0);
    tracep->declBus(c+63,"read_data", false,-1, 31,0);
    tracep->declBit(c+45,"reg_write_m_o", false,-1);
    tracep->declBus(c+46,"result_src_m_o", false,-1, 1,0);
    tracep->declBus(c+37,"rd_m_o", false,-1, 4,0);
    tracep->declBus(c+35,"pc_plus_4_m_o", false,-1, 31,0);
    tracep->declBus(c+52,"alu_result_m_o", false,-1, 31,0);
    tracep->pushNamePrefix("data_mem ");
    tracep->declBus(c+66,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+70,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+71,"SIZE", false,-1, 31,0);
    tracep->declBus(c+52,"adr", false,-1, 31,0);
    tracep->declBus(c+60,"write_data", false,-1, 31,0);
    tracep->declBit(c+57,"clk", false,-1);
    tracep->declBit(c+47,"write_enable", false,-1);
    tracep->declBus(c+63,"read_data", false,-1, 31,0);
    tracep->declBus(c+56,"index", false,-1, 16,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_writeback ");
    tracep->declBus(c+66,"D_WIDTH", false,-1, 31,0);
    tracep->declBit(c+45,"reg_write_w_i", false,-1);
    tracep->declBus(c+46,"result_src_w", false,-1, 1,0);
    tracep->declBus(c+52,"alu_result_w", false,-1, 31,0);
    tracep->declBus(c+63,"read_data_w", false,-1, 31,0);
    tracep->declBus(c+37,"rd_w_i", false,-1, 4,0);
    tracep->declBus(c+35,"pc_plus4", false,-1, 31,0);
    tracep->declBit(c+45,"reg_write_w_o", false,-1);
    tracep->declBus(c+37,"rd_w_o", false,-1, 4,0);
    tracep->declBus(c+64,"result_w", false,-1, 31,0);
    tracep->pushNamePrefix("writeback_mux ");
    tracep->declBus(c+66,"D_WIDTH", false,-1, 31,0);
    tracep->declBus(c+52,"in0", false,-1, 31,0);
    tracep->declBus(c+63,"in1", false,-1, 31,0);
    tracep->declBus(c+35,"in2", false,-1, 31,0);
    tracep->declBus(c+72,"in3", false,-1, 31,0);
    tracep->declBus(c+46,"sel", false,-1, 1,0);
    tracep->declBus(c+64,"out", false,-1, 31,0);
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
    bufp->fullIData(oldp+2,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[0]),32);
    bufp->fullIData(oldp+3,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[1]),32);
    bufp->fullIData(oldp+4,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[2]),32);
    bufp->fullIData(oldp+5,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[3]),32);
    bufp->fullIData(oldp+6,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[4]),32);
    bufp->fullIData(oldp+7,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[5]),32);
    bufp->fullIData(oldp+8,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[6]),32);
    bufp->fullIData(oldp+9,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[7]),32);
    bufp->fullIData(oldp+10,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[8]),32);
    bufp->fullIData(oldp+11,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[9]),32);
    bufp->fullIData(oldp+12,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[10]),32);
    bufp->fullIData(oldp+13,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[11]),32);
    bufp->fullIData(oldp+14,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[12]),32);
    bufp->fullIData(oldp+15,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[13]),32);
    bufp->fullIData(oldp+16,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[14]),32);
    bufp->fullIData(oldp+17,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[15]),32);
    bufp->fullIData(oldp+18,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[16]),32);
    bufp->fullIData(oldp+19,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[17]),32);
    bufp->fullIData(oldp+20,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[18]),32);
    bufp->fullIData(oldp+21,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[19]),32);
    bufp->fullIData(oldp+22,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[20]),32);
    bufp->fullIData(oldp+23,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[21]),32);
    bufp->fullIData(oldp+24,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[22]),32);
    bufp->fullIData(oldp+25,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[23]),32);
    bufp->fullIData(oldp+26,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[24]),32);
    bufp->fullIData(oldp+27,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[25]),32);
    bufp->fullIData(oldp+28,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[26]),32);
    bufp->fullIData(oldp+29,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[27]),32);
    bufp->fullIData(oldp+30,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[28]),32);
    bufp->fullIData(oldp+31,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[29]),32);
    bufp->fullIData(oldp+32,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[30]),32);
    bufp->fullIData(oldp+33,(vlSelf->cpu__DOT__u_decode__DOT__rf__DOT__ram_array[31]),32);
    bufp->fullIData(oldp+34,(vlSelf->cpu__DOT__pc_f),32);
    bufp->fullIData(oldp+35,(((IData)(4U) + vlSelf->cpu__DOT__pc_f)),32);
    bufp->fullIData(oldp+36,(vlSelf->cpu__DOT__ins),32);
    bufp->fullCData(oldp+37,((0x1fU & (vlSelf->cpu__DOT__ins 
                                       >> 7U))),5);
    bufp->fullCData(oldp+38,((0x7fU & vlSelf->cpu__DOT__ins)),7);
    bufp->fullCData(oldp+39,((vlSelf->cpu__DOT__ins 
                              >> 0x19U)),7);
    bufp->fullCData(oldp+40,((7U & (vlSelf->cpu__DOT__ins 
                                    >> 0xcU))),3);
    bufp->fullBit(oldp+41,((1U & (vlSelf->cpu__DOT__ins 
                                  >> 5U))));
    bufp->fullBit(oldp+42,((1U & (vlSelf->cpu__DOT__ins 
                                  >> 0x1eU))));
    bufp->fullCData(oldp+43,((0x1fU & (vlSelf->cpu__DOT__ins 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+44,((0x1fU & (vlSelf->cpu__DOT__ins 
                                       >> 0x14U))),5);
    bufp->fullBit(oldp+45,(vlSelf->cpu__DOT__reg_write_d));
    bufp->fullCData(oldp+46,(vlSelf->cpu__DOT__result_src_d),2);
    bufp->fullBit(oldp+47,(vlSelf->cpu__DOT__mem_write_d));
    bufp->fullBit(oldp+48,(vlSelf->cpu__DOT__pc_src));
    bufp->fullCData(oldp+49,(vlSelf->cpu__DOT__alu_control_d),4);
    bufp->fullBit(oldp+50,(vlSelf->cpu__DOT__alu_src_d));
    bufp->fullIData(oldp+51,(vlSelf->cpu__DOT__imm_ext_d),32);
    bufp->fullIData(oldp+52,(vlSelf->cpu__DOT__alu_result_e),32);
    bufp->fullCData(oldp+53,(vlSelf->cpu__DOT__u_decode__DOT__imm_src_d),3);
    bufp->fullCData(oldp+54,(vlSelf->cpu__DOT__u_decode__DOT__cu__DOT__alu_logic),3);
    bufp->fullIData(oldp+55,(vlSelf->cpu__DOT__u_execute__DOT__src_b_e),32);
    bufp->fullIData(oldp+56,((0x1ffffU & vlSelf->cpu__DOT__alu_result_e)),17);
    bufp->fullBit(oldp+57,(vlSelf->clk));
    bufp->fullBit(oldp+58,(vlSelf->rst));
    bufp->fullIData(oldp+59,(vlSelf->cpu__DOT__rd_1),32);
    bufp->fullIData(oldp+60,(vlSelf->cpu__DOT__rd_2),32);
    bufp->fullBit(oldp+61,(((~ ((IData)(vlSelf->cpu__DOT__alu_control_d) 
                                >> 3U)) & ((4U & (IData)(vlSelf->cpu__DOT__alu_control_d))
                                            ? ((2U 
                                                & (IData)(vlSelf->cpu__DOT__alu_control_d))
                                                ? (
                                                   (~ (IData)(vlSelf->cpu__DOT__alu_control_d)) 
                                                   & (vlSelf->cpu__DOT__rd_1 
                                                      < vlSelf->cpu__DOT__u_execute__DOT__src_b_e))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->cpu__DOT__alu_control_d))
                                                    ? 
                                                   VL_LTS_III(32, vlSelf->cpu__DOT__rd_1, vlSelf->cpu__DOT__u_execute__DOT__src_b_e)
                                                    : 
                                                   (1U 
                                                    == 
                                                    (vlSelf->cpu__DOT__rd_1 
                                                     ^ vlSelf->cpu__DOT__u_execute__DOT__src_b_e))))
                                            : ((2U 
                                                & (IData)(vlSelf->cpu__DOT__alu_control_d))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->cpu__DOT__alu_control_d))
                                                    ? 
                                                   (1U 
                                                    == 
                                                    (vlSelf->cpu__DOT__rd_1 
                                                     | vlSelf->cpu__DOT__u_execute__DOT__src_b_e))
                                                    : 
                                                   (1U 
                                                    == 
                                                    (vlSelf->cpu__DOT__rd_1 
                                                     & vlSelf->cpu__DOT__u_execute__DOT__src_b_e)))
                                                : ((IData)(vlSelf->cpu__DOT__alu_control_d) 
                                                   & (0U 
                                                      == 
                                                      (vlSelf->cpu__DOT__rd_1 
                                                       - vlSelf->cpu__DOT__u_execute__DOT__src_b_e))))))));
    bufp->fullIData(oldp+62,((vlSelf->cpu__DOT__pc_f 
                              + vlSelf->cpu__DOT__imm_ext_d)),32);
    bufp->fullIData(oldp+63,(((vlSelf->cpu__DOT__u_memory__DOT__data_mem__DOT__data_array
                               [(0x1ffffU & ((IData)(3U) 
                                             + vlSelf->cpu__DOT__alu_result_e))] 
                               << 0x18U) | ((vlSelf->cpu__DOT__u_memory__DOT__data_mem__DOT__data_array
                                             [(0x1ffffU 
                                               & ((IData)(2U) 
                                                  + vlSelf->cpu__DOT__alu_result_e))] 
                                             << 0x10U) 
                                            | ((vlSelf->cpu__DOT__u_memory__DOT__data_mem__DOT__data_array
                                                [(0x1ffffU 
                                                  & ((IData)(1U) 
                                                     + vlSelf->cpu__DOT__alu_result_e))] 
                                                << 8U) 
                                               | vlSelf->cpu__DOT__u_memory__DOT__data_mem__DOT__data_array
                                               [(0x1ffffU 
                                                 & vlSelf->cpu__DOT__alu_result_e)])))),32);
    bufp->fullIData(oldp+64,(((2U & (IData)(vlSelf->cpu__DOT__result_src_d))
                               ? ((1U & (IData)(vlSelf->cpu__DOT__result_src_d))
                                   ? 0U : ((IData)(4U) 
                                           + vlSelf->cpu__DOT__pc_f))
                               : ((1U & (IData)(vlSelf->cpu__DOT__result_src_d))
                                   ? ((vlSelf->cpu__DOT__u_memory__DOT__data_mem__DOT__data_array
                                       [(0x1ffffU & 
                                         ((IData)(3U) 
                                          + vlSelf->cpu__DOT__alu_result_e))] 
                                       << 0x18U) | 
                                      ((vlSelf->cpu__DOT__u_memory__DOT__data_mem__DOT__data_array
                                        [(0x1ffffU 
                                          & ((IData)(2U) 
                                             + vlSelf->cpu__DOT__alu_result_e))] 
                                        << 0x10U) | 
                                       ((vlSelf->cpu__DOT__u_memory__DOT__data_mem__DOT__data_array
                                         [(0x1ffffU 
                                           & ((IData)(1U) 
                                              + vlSelf->cpu__DOT__alu_result_e))] 
                                         << 8U) | vlSelf->cpu__DOT__u_memory__DOT__data_mem__DOT__data_array
                                        [(0x1ffffU 
                                          & vlSelf->cpu__DOT__alu_result_e)])))
                                   : vlSelf->cpu__DOT__alu_result_e))),32);
    bufp->fullIData(oldp+65,(((IData)(vlSelf->cpu__DOT__pc_src)
                               ? (vlSelf->cpu__DOT__pc_f 
                                  + vlSelf->cpu__DOT__imm_ext_d)
                               : ((IData)(4U) + vlSelf->cpu__DOT__pc_f))),32);
    bufp->fullIData(oldp+66,(0x20U),32);
    bufp->fullIData(oldp+67,(5U),32);
    bufp->fullIData(oldp+68,(0x20U),32);
    bufp->fullIData(oldp+69,(0xcU),32);
    bufp->fullIData(oldp+70,(8U),32);
    bufp->fullIData(oldp+71,(0x11U),32);
    bufp->fullIData(oldp+72,(0U),32);
}
