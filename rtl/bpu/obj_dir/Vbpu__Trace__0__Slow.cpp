// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vbpu__Syms.h"


VL_ATTR_COLD void Vbpu___024root__trace_init_sub__TOP__0(Vbpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vbpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbpu___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+89,"clk", false,-1);
    tracep->declBit(c+90,"rst", false,-1);
    tracep->declBus(c+91,"ins", false,-1, 31,0);
    tracep->declBus(c+92,"pc", false,-1, 31,0);
    tracep->declBus(c+93,"pc_tu", false,-1, 31,0);
    tracep->declBus(c+94,"pcplusimm_tu", false,-1, 31,0);
    tracep->declBit(c+95,"eq", false,-1);
    tracep->declBit(c+96,"jump", false,-1);
    tracep->declBit(c+97,"branch", false,-1);
    tracep->declBus(c+98,"pc_circuit", false,-1, 31,0);
    tracep->declBit(c+99,"branch_predicted_e", false,-1);
    tracep->declBus(c+100,"pc_next", false,-1, 31,0);
    tracep->declBit(c+101,"branch_predicted", false,-1);
    tracep->declBit(c+102,"flush_o", false,-1);
    tracep->pushNamePrefix("bpu ");
    tracep->declBus(c+113,"CACHE_SIZE", false,-1, 31,0);
    tracep->declBus(c+114,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+114,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+89,"clk", false,-1);
    tracep->declBit(c+90,"rst", false,-1);
    tracep->declBus(c+91,"ins", false,-1, 31,0);
    tracep->declBus(c+92,"pc", false,-1, 31,0);
    tracep->declBus(c+93,"pc_tu", false,-1, 31,0);
    tracep->declBus(c+94,"pcplusimm_tu", false,-1, 31,0);
    tracep->declBit(c+95,"eq", false,-1);
    tracep->declBit(c+96,"jump", false,-1);
    tracep->declBit(c+97,"branch", false,-1);
    tracep->declBus(c+98,"pc_circuit", false,-1, 31,0);
    tracep->declBit(c+99,"branch_predicted_e", false,-1);
    tracep->declBus(c+100,"pc_next", false,-1, 31,0);
    tracep->declBit(c+101,"branch_predicted", false,-1);
    tracep->declBit(c+102,"flush_o", false,-1);
    tracep->declBus(c+93,"pc_tu_o", false,-1, 31,0);
    tracep->declBit(c+1,"branch_en", false,-1);
    tracep->declBus(c+2,"pc_target", false,-1, 31,0);
    tracep->declBit(c+3,"flush", false,-1);
    tracep->pushNamePrefix("NPU ");
    tracep->declBus(c+114,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+98,"pc_circuit", false,-1, 31,0);
    tracep->declBit(c+3,"flush", false,-1);
    tracep->declBus(c+93,"pc_tu", false,-1, 31,0);
    tracep->declBit(c+1,"branch_en", false,-1);
    tracep->declBus(c+2,"pc_target", false,-1, 31,0);
    tracep->declBus(c+100,"pc_next", false,-1, 31,0);
    tracep->declBit(c+101,"branch_predicted", false,-1);
    tracep->declBus(c+103,"pc_branch_en", false,-1, 31,0);
    tracep->declBus(c+104,"pc_tu_p4", false,-1, 31,0);
    tracep->pushNamePrefix("pc_from_TUU_mux ");
    tracep->declBus(c+114,"D_WIDTH", false,-1, 31,0);
    tracep->declBus(c+98,"in0", false,-1, 31,0);
    tracep->declBus(c+2,"in1", false,-1, 31,0);
    tracep->declBit(c+1,"sel", false,-1);
    tracep->declBus(c+103,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_out_mux ");
    tracep->declBus(c+114,"D_WIDTH", false,-1, 31,0);
    tracep->declBus(c+103,"in0", false,-1, 31,0);
    tracep->declBus(c+104,"in1", false,-1, 31,0);
    tracep->declBit(c+3,"sel", false,-1);
    tracep->declBus(c+100,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_pc_inc ");
    tracep->declBus(c+114,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+93,"pc", false,-1, 31,0);
    tracep->declBus(c+104,"inc_pc", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("TUU ");
    tracep->declBus(c+114,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+89,"clk", false,-1);
    tracep->declBit(c+90,"rst", false,-1);
    tracep->declBus(c+91,"ins", false,-1, 31,0);
    tracep->declBus(c+92,"pc", false,-1, 31,0);
    tracep->declBus(c+93,"pc_tu_i", false,-1, 31,0);
    tracep->declBus(c+94,"pcplusimm_tu", false,-1, 31,0);
    tracep->declBit(c+95,"eq", false,-1);
    tracep->declBit(c+96,"jump", false,-1);
    tracep->declBit(c+97,"branch", false,-1);
    tracep->declBit(c+99,"branch_predicted_e", false,-1);
    tracep->declBus(c+93,"pc_tu_o", false,-1, 31,0);
    tracep->declBit(c+1,"branch_en", false,-1);
    tracep->declBus(c+2,"pc_target", false,-1, 31,0);
    tracep->declBit(c+3,"flush", false,-1);
    tracep->declBit(c+105,"b_or_j", false,-1);
    tracep->declBus(c+106,"state_wr_int1", false,-1, 1,0);
    tracep->declBus(c+4,"next_state", false,-1, 1,0);
    tracep->declBus(c+107,"state_rd_intermediate", false,-1, 1,0);
    tracep->declBit(c+5,"hit1", false,-1);
    tracep->declBit(c+6,"hit2", false,-1);
    tracep->declBit(c+7,"write_en", false,-1);
    tracep->declBus(c+108,"pc_intermediate", false,-1, 31,0);
    tracep->pushNamePrefix("FD ");
    tracep->declBit(c+95,"eq", false,-1);
    tracep->declBit(c+99,"branch_predicted", false,-1);
    tracep->declBit(c+96,"jump", false,-1);
    tracep->declBit(c+97,"branch", false,-1);
    tracep->declBit(c+3,"flush", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("bp_cache ");
    tracep->declBus(c+113,"CACHE_SIZE", false,-1, 31,0);
    tracep->declBus(c+114,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+114,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+89,"clk", false,-1);
    tracep->declBit(c+90,"reset", false,-1);
    tracep->declBus(c+93,"wr_addr", false,-1, 31,0);
    tracep->declBus(c+92,"rd_addr", false,-1, 31,0);
    tracep->declBus(c+93,"data_in0", false,-1, 31,0);
    tracep->declBus(c+94,"data_in1", false,-1, 31,0);
    tracep->declBus(c+4,"data_in2", false,-1, 1,0);
    tracep->declBit(c+7,"write_en", false,-1);
    tracep->declBus(c+108,"data_out1", false,-1, 31,0);
    tracep->declBus(c+107,"data_out2", false,-1, 1,0);
    tracep->declBus(c+106,"data_out3", false,-1, 1,0);
    tracep->declBit(c+5,"hit1", false,-1);
    tracep->declBit(c+6,"hit2", false,-1);
    tracep->declBus(c+115,"LINE_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+116,"TAG_WIDTH", false,-1, 31,0);
    tracep->declBus(c+109,"wr_line_index", false,-1, 3,0);
    tracep->declBus(c+110,"rd_line_index", false,-1, 3,0);
    tracep->declBus(c+111,"wr_addr_tag", false,-1, 27,0);
    tracep->declBus(c+112,"rd_addr_tag", false,-1, 27,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+8+i*1,"cache_data0", true,(i+0), 31,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+24+i*1,"cache_data1", true,(i+0), 31,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+40+i*1,"state", true,(i+0), 1,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBit(c+56+i*1,"valid", true,(i+0));
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+72+i*1,"tag", true,(i+0), 27,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+88,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pc_mux ");
    tracep->declBus(c+114,"D_WIDTH", false,-1, 31,0);
    tracep->declBus(c+92,"in0", false,-1, 31,0);
    tracep->declBus(c+108,"in1", false,-1, 31,0);
    tracep->declBit(c+5,"sel", false,-1);
    tracep->declBus(c+2,"out", false,-1, 31,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vbpu___024root__trace_init_top(Vbpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vbpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbpu___024root__trace_init_top\n"); );
    // Body
    Vbpu___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vbpu___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vbpu___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vbpu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vbpu___024root__trace_register(Vbpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vbpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbpu___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vbpu___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vbpu___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vbpu___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vbpu___024root__trace_full_sub_0(Vbpu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vbpu___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbpu___024root__trace_full_top_0\n"); );
    // Init
    Vbpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbpu___024root*>(voidSelf);
    Vbpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vbpu___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vbpu___024root__trace_full_sub_0(Vbpu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vbpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbpu___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->bpu__DOT__branch_en));
    bufp->fullIData(oldp+2,(vlSelf->bpu__DOT__pc_target),32);
    bufp->fullBit(oldp+3,(vlSelf->bpu__DOT__flush));
    bufp->fullCData(oldp+4,(vlSelf->bpu__DOT__TUU__DOT__next_state),2);
    bufp->fullBit(oldp+5,(vlSelf->bpu__DOT__TUU__DOT__hit1));
    bufp->fullBit(oldp+6,(vlSelf->bpu__DOT__TUU__DOT__hit2));
    bufp->fullBit(oldp+7,(vlSelf->bpu__DOT__TUU__DOT__write_en));
    bufp->fullIData(oldp+8,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__cache_data0[0]),32);
    bufp->fullIData(oldp+9,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__cache_data0[1]),32);
    bufp->fullIData(oldp+10,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__cache_data0[2]),32);
    bufp->fullIData(oldp+11,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__cache_data0[3]),32);
    bufp->fullIData(oldp+12,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__cache_data0[4]),32);
    bufp->fullIData(oldp+13,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__cache_data0[5]),32);
    bufp->fullIData(oldp+14,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__cache_data0[6]),32);
    bufp->fullIData(oldp+15,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__cache_data0[7]),32);
    bufp->fullIData(oldp+16,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__cache_data0[8]),32);
    bufp->fullIData(oldp+17,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__cache_data0[9]),32);
    bufp->fullIData(oldp+18,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__cache_data0[10]),32);
    bufp->fullIData(oldp+19,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__cache_data0[11]),32);
    bufp->fullIData(oldp+20,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__cache_data0[12]),32);
    bufp->fullIData(oldp+21,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__cache_data0[13]),32);
    bufp->fullIData(oldp+22,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__cache_data0[14]),32);
    bufp->fullIData(oldp+23,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__cache_data0[15]),32);
    bufp->fullIData(oldp+24,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__cache_data1[0]),32);
    bufp->fullIData(oldp+25,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__cache_data1[1]),32);
    bufp->fullIData(oldp+26,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__cache_data1[2]),32);
    bufp->fullIData(oldp+27,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__cache_data1[3]),32);
    bufp->fullIData(oldp+28,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__cache_data1[4]),32);
    bufp->fullIData(oldp+29,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__cache_data1[5]),32);
    bufp->fullIData(oldp+30,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__cache_data1[6]),32);
    bufp->fullIData(oldp+31,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__cache_data1[7]),32);
    bufp->fullIData(oldp+32,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__cache_data1[8]),32);
    bufp->fullIData(oldp+33,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__cache_data1[9]),32);
    bufp->fullIData(oldp+34,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__cache_data1[10]),32);
    bufp->fullIData(oldp+35,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__cache_data1[11]),32);
    bufp->fullIData(oldp+36,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__cache_data1[12]),32);
    bufp->fullIData(oldp+37,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__cache_data1[13]),32);
    bufp->fullIData(oldp+38,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__cache_data1[14]),32);
    bufp->fullIData(oldp+39,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__cache_data1[15]),32);
    bufp->fullCData(oldp+40,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__state[0]),2);
    bufp->fullCData(oldp+41,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__state[1]),2);
    bufp->fullCData(oldp+42,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__state[2]),2);
    bufp->fullCData(oldp+43,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__state[3]),2);
    bufp->fullCData(oldp+44,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__state[4]),2);
    bufp->fullCData(oldp+45,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__state[5]),2);
    bufp->fullCData(oldp+46,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__state[6]),2);
    bufp->fullCData(oldp+47,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__state[7]),2);
    bufp->fullCData(oldp+48,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__state[8]),2);
    bufp->fullCData(oldp+49,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__state[9]),2);
    bufp->fullCData(oldp+50,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__state[10]),2);
    bufp->fullCData(oldp+51,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__state[11]),2);
    bufp->fullCData(oldp+52,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__state[12]),2);
    bufp->fullCData(oldp+53,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__state[13]),2);
    bufp->fullCData(oldp+54,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__state[14]),2);
    bufp->fullCData(oldp+55,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__state[15]),2);
    bufp->fullBit(oldp+56,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__valid[0]));
    bufp->fullBit(oldp+57,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__valid[1]));
    bufp->fullBit(oldp+58,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__valid[2]));
    bufp->fullBit(oldp+59,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__valid[3]));
    bufp->fullBit(oldp+60,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__valid[4]));
    bufp->fullBit(oldp+61,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__valid[5]));
    bufp->fullBit(oldp+62,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__valid[6]));
    bufp->fullBit(oldp+63,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__valid[7]));
    bufp->fullBit(oldp+64,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__valid[8]));
    bufp->fullBit(oldp+65,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__valid[9]));
    bufp->fullBit(oldp+66,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__valid[10]));
    bufp->fullBit(oldp+67,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__valid[11]));
    bufp->fullBit(oldp+68,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__valid[12]));
    bufp->fullBit(oldp+69,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__valid[13]));
    bufp->fullBit(oldp+70,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__valid[14]));
    bufp->fullBit(oldp+71,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__valid[15]));
    bufp->fullIData(oldp+72,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__tag[0]),28);
    bufp->fullIData(oldp+73,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__tag[1]),28);
    bufp->fullIData(oldp+74,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__tag[2]),28);
    bufp->fullIData(oldp+75,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__tag[3]),28);
    bufp->fullIData(oldp+76,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__tag[4]),28);
    bufp->fullIData(oldp+77,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__tag[5]),28);
    bufp->fullIData(oldp+78,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__tag[6]),28);
    bufp->fullIData(oldp+79,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__tag[7]),28);
    bufp->fullIData(oldp+80,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__tag[8]),28);
    bufp->fullIData(oldp+81,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__tag[9]),28);
    bufp->fullIData(oldp+82,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__tag[10]),28);
    bufp->fullIData(oldp+83,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__tag[11]),28);
    bufp->fullIData(oldp+84,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__tag[12]),28);
    bufp->fullIData(oldp+85,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__tag[13]),28);
    bufp->fullIData(oldp+86,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__tag[14]),28);
    bufp->fullIData(oldp+87,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__tag[15]),28);
    bufp->fullIData(oldp+88,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+89,(vlSelf->clk));
    bufp->fullBit(oldp+90,(vlSelf->rst));
    bufp->fullIData(oldp+91,(vlSelf->ins),32);
    bufp->fullIData(oldp+92,(vlSelf->pc),32);
    bufp->fullIData(oldp+93,(vlSelf->pc_tu),32);
    bufp->fullIData(oldp+94,(vlSelf->pcplusimm_tu),32);
    bufp->fullBit(oldp+95,(vlSelf->eq));
    bufp->fullBit(oldp+96,(vlSelf->jump));
    bufp->fullBit(oldp+97,(vlSelf->branch));
    bufp->fullIData(oldp+98,(vlSelf->pc_circuit),32);
    bufp->fullBit(oldp+99,(vlSelf->branch_predicted_e));
    bufp->fullIData(oldp+100,(vlSelf->pc_next),32);
    bufp->fullBit(oldp+101,(vlSelf->branch_predicted));
    bufp->fullBit(oldp+102,(vlSelf->flush_o));
    bufp->fullIData(oldp+103,(((IData)(vlSelf->bpu__DOT__branch_en)
                                ? vlSelf->bpu__DOT__pc_target
                                : vlSelf->pc_circuit)),32);
    bufp->fullIData(oldp+104,(((IData)(4U) + vlSelf->pc_tu)),32);
    bufp->fullBit(oldp+105,((((0x63U == (0x7fU & vlSelf->ins)) 
                              | (0x6fU == (0x7fU & vlSelf->ins))) 
                             | (0x67U == (0x7fU & vlSelf->ins)))));
    bufp->fullCData(oldp+106,(((IData)(vlSelf->bpu__DOT__TUU__DOT__hit2)
                                ? vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__state
                               [(0xfU & vlSelf->pc_tu)]
                                : 0U)),2);
    bufp->fullCData(oldp+107,(((IData)(vlSelf->bpu__DOT__TUU__DOT__hit1)
                                ? vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__state
                               [(0xfU & vlSelf->pc)]
                                : 0U)),2);
    bufp->fullIData(oldp+108,(((IData)(vlSelf->bpu__DOT__TUU__DOT__hit1)
                                ? vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__cache_data1
                               [(0xfU & vlSelf->pc)]
                                : 0U)),32);
    bufp->fullCData(oldp+109,((0xfU & vlSelf->pc_tu)),4);
    bufp->fullCData(oldp+110,((0xfU & vlSelf->pc)),4);
    bufp->fullIData(oldp+111,((vlSelf->pc_tu >> 4U)),28);
    bufp->fullIData(oldp+112,((vlSelf->pc >> 4U)),28);
    bufp->fullIData(oldp+113,(0x10U),32);
    bufp->fullIData(oldp+114,(0x20U),32);
    bufp->fullIData(oldp+115,(4U),32);
    bufp->fullIData(oldp+116,(0x1cU),32);
}
