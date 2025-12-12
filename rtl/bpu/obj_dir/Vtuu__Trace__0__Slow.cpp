// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtuu__Syms.h"


VL_ATTR_COLD void Vtuu___024root__trace_init_sub__TOP__0(Vtuu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtuu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtuu___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+86,"clk", false,-1);
    tracep->declBit(c+87,"rst", false,-1);
    tracep->declBus(c+88,"ins", false,-1, 31,0);
    tracep->declBus(c+89,"pc", false,-1, 31,0);
    tracep->declBus(c+90,"pc_tu_i", false,-1, 31,0);
    tracep->declBus(c+91,"pcplusimm_tu", false,-1, 31,0);
    tracep->declBit(c+92,"eq", false,-1);
    tracep->declBit(c+93,"jump", false,-1);
    tracep->declBit(c+94,"branch", false,-1);
    tracep->declBit(c+95,"branch_predicted_e", false,-1);
    tracep->declBus(c+96,"pc_tu_o", false,-1, 31,0);
    tracep->declBit(c+97,"branch_en", false,-1);
    tracep->declBus(c+98,"pc_target", false,-1, 31,0);
    tracep->declBit(c+99,"flush", false,-1);
    tracep->pushNamePrefix("tuu ");
    tracep->declBus(c+108,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+86,"clk", false,-1);
    tracep->declBit(c+87,"rst", false,-1);
    tracep->declBus(c+88,"ins", false,-1, 31,0);
    tracep->declBus(c+89,"pc", false,-1, 31,0);
    tracep->declBus(c+90,"pc_tu_i", false,-1, 31,0);
    tracep->declBus(c+91,"pcplusimm_tu", false,-1, 31,0);
    tracep->declBit(c+92,"eq", false,-1);
    tracep->declBit(c+93,"jump", false,-1);
    tracep->declBit(c+94,"branch", false,-1);
    tracep->declBit(c+95,"branch_predicted_e", false,-1);
    tracep->declBus(c+96,"pc_tu_o", false,-1, 31,0);
    tracep->declBit(c+97,"branch_en", false,-1);
    tracep->declBus(c+98,"pc_target", false,-1, 31,0);
    tracep->declBit(c+99,"flush", false,-1);
    tracep->declBit(c+100,"b_or_j", false,-1);
    tracep->declBus(c+101,"state_wr_int1", false,-1, 1,0);
    tracep->declBus(c+1,"next_state", false,-1, 1,0);
    tracep->declBus(c+102,"state_rd_intermediate", false,-1, 1,0);
    tracep->declBit(c+2,"hit1", false,-1);
    tracep->declBit(c+3,"hit2", false,-1);
    tracep->declBit(c+4,"write_en", false,-1);
    tracep->declBus(c+103,"pc_intermediate", false,-1, 31,0);
    tracep->pushNamePrefix("FD ");
    tracep->declBit(c+92,"eq", false,-1);
    tracep->declBit(c+95,"branch_predicted", false,-1);
    tracep->declBit(c+93,"jump", false,-1);
    tracep->declBit(c+94,"branch", false,-1);
    tracep->declBit(c+99,"flush", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("bp_cache ");
    tracep->declBus(c+109,"CACHE_SIZE", false,-1, 31,0);
    tracep->declBus(c+108,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+108,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+86,"clk", false,-1);
    tracep->declBit(c+87,"reset", false,-1);
    tracep->declBus(c+90,"wr_addr", false,-1, 31,0);
    tracep->declBus(c+89,"rd_addr", false,-1, 31,0);
    tracep->declBus(c+90,"data_in0", false,-1, 31,0);
    tracep->declBus(c+91,"data_in1", false,-1, 31,0);
    tracep->declBus(c+1,"data_in2", false,-1, 1,0);
    tracep->declBit(c+4,"write_en", false,-1);
    tracep->declBus(c+103,"data_out1", false,-1, 31,0);
    tracep->declBus(c+102,"data_out2", false,-1, 1,0);
    tracep->declBus(c+101,"data_out3", false,-1, 1,0);
    tracep->declBit(c+2,"hit1", false,-1);
    tracep->declBit(c+3,"hit2", false,-1);
    tracep->declBus(c+110,"LINE_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+111,"TAG_WIDTH", false,-1, 31,0);
    tracep->declBus(c+104,"wr_line_index", false,-1, 3,0);
    tracep->declBus(c+105,"rd_line_index", false,-1, 3,0);
    tracep->declBus(c+106,"wr_addr_tag", false,-1, 27,0);
    tracep->declBus(c+107,"rd_addr_tag", false,-1, 27,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+5+i*1,"cache_data0", true,(i+0), 31,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+21+i*1,"cache_data1", true,(i+0), 31,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+37+i*1,"state", true,(i+0), 1,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBit(c+53+i*1,"valid", true,(i+0));
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+69+i*1,"tag", true,(i+0), 27,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+85,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pc_mux ");
    tracep->declBus(c+108,"D_WIDTH", false,-1, 31,0);
    tracep->declBus(c+89,"in0", false,-1, 31,0);
    tracep->declBus(c+103,"in1", false,-1, 31,0);
    tracep->declBit(c+2,"sel", false,-1);
    tracep->declBus(c+98,"out", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtuu___024root__trace_init_top(Vtuu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtuu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtuu___024root__trace_init_top\n"); );
    // Body
    Vtuu___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtuu___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtuu___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtuu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtuu___024root__trace_register(Vtuu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtuu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtuu___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtuu___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtuu___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtuu___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtuu___024root__trace_full_sub_0(Vtuu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtuu___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtuu___024root__trace_full_top_0\n"); );
    // Init
    Vtuu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtuu___024root*>(voidSelf);
    Vtuu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtuu___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtuu___024root__trace_full_sub_0(Vtuu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtuu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtuu___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->tuu__DOT__next_state),2);
    bufp->fullBit(oldp+2,(vlSelf->tuu__DOT__hit1));
    bufp->fullBit(oldp+3,(vlSelf->tuu__DOT__hit2));
    bufp->fullBit(oldp+4,(vlSelf->tuu__DOT__write_en));
    bufp->fullIData(oldp+5,(vlSelf->tuu__DOT__bp_cache__DOT__cache_data0[0]),32);
    bufp->fullIData(oldp+6,(vlSelf->tuu__DOT__bp_cache__DOT__cache_data0[1]),32);
    bufp->fullIData(oldp+7,(vlSelf->tuu__DOT__bp_cache__DOT__cache_data0[2]),32);
    bufp->fullIData(oldp+8,(vlSelf->tuu__DOT__bp_cache__DOT__cache_data0[3]),32);
    bufp->fullIData(oldp+9,(vlSelf->tuu__DOT__bp_cache__DOT__cache_data0[4]),32);
    bufp->fullIData(oldp+10,(vlSelf->tuu__DOT__bp_cache__DOT__cache_data0[5]),32);
    bufp->fullIData(oldp+11,(vlSelf->tuu__DOT__bp_cache__DOT__cache_data0[6]),32);
    bufp->fullIData(oldp+12,(vlSelf->tuu__DOT__bp_cache__DOT__cache_data0[7]),32);
    bufp->fullIData(oldp+13,(vlSelf->tuu__DOT__bp_cache__DOT__cache_data0[8]),32);
    bufp->fullIData(oldp+14,(vlSelf->tuu__DOT__bp_cache__DOT__cache_data0[9]),32);
    bufp->fullIData(oldp+15,(vlSelf->tuu__DOT__bp_cache__DOT__cache_data0[10]),32);
    bufp->fullIData(oldp+16,(vlSelf->tuu__DOT__bp_cache__DOT__cache_data0[11]),32);
    bufp->fullIData(oldp+17,(vlSelf->tuu__DOT__bp_cache__DOT__cache_data0[12]),32);
    bufp->fullIData(oldp+18,(vlSelf->tuu__DOT__bp_cache__DOT__cache_data0[13]),32);
    bufp->fullIData(oldp+19,(vlSelf->tuu__DOT__bp_cache__DOT__cache_data0[14]),32);
    bufp->fullIData(oldp+20,(vlSelf->tuu__DOT__bp_cache__DOT__cache_data0[15]),32);
    bufp->fullIData(oldp+21,(vlSelf->tuu__DOT__bp_cache__DOT__cache_data1[0]),32);
    bufp->fullIData(oldp+22,(vlSelf->tuu__DOT__bp_cache__DOT__cache_data1[1]),32);
    bufp->fullIData(oldp+23,(vlSelf->tuu__DOT__bp_cache__DOT__cache_data1[2]),32);
    bufp->fullIData(oldp+24,(vlSelf->tuu__DOT__bp_cache__DOT__cache_data1[3]),32);
    bufp->fullIData(oldp+25,(vlSelf->tuu__DOT__bp_cache__DOT__cache_data1[4]),32);
    bufp->fullIData(oldp+26,(vlSelf->tuu__DOT__bp_cache__DOT__cache_data1[5]),32);
    bufp->fullIData(oldp+27,(vlSelf->tuu__DOT__bp_cache__DOT__cache_data1[6]),32);
    bufp->fullIData(oldp+28,(vlSelf->tuu__DOT__bp_cache__DOT__cache_data1[7]),32);
    bufp->fullIData(oldp+29,(vlSelf->tuu__DOT__bp_cache__DOT__cache_data1[8]),32);
    bufp->fullIData(oldp+30,(vlSelf->tuu__DOT__bp_cache__DOT__cache_data1[9]),32);
    bufp->fullIData(oldp+31,(vlSelf->tuu__DOT__bp_cache__DOT__cache_data1[10]),32);
    bufp->fullIData(oldp+32,(vlSelf->tuu__DOT__bp_cache__DOT__cache_data1[11]),32);
    bufp->fullIData(oldp+33,(vlSelf->tuu__DOT__bp_cache__DOT__cache_data1[12]),32);
    bufp->fullIData(oldp+34,(vlSelf->tuu__DOT__bp_cache__DOT__cache_data1[13]),32);
    bufp->fullIData(oldp+35,(vlSelf->tuu__DOT__bp_cache__DOT__cache_data1[14]),32);
    bufp->fullIData(oldp+36,(vlSelf->tuu__DOT__bp_cache__DOT__cache_data1[15]),32);
    bufp->fullCData(oldp+37,(vlSelf->tuu__DOT__bp_cache__DOT__state[0]),2);
    bufp->fullCData(oldp+38,(vlSelf->tuu__DOT__bp_cache__DOT__state[1]),2);
    bufp->fullCData(oldp+39,(vlSelf->tuu__DOT__bp_cache__DOT__state[2]),2);
    bufp->fullCData(oldp+40,(vlSelf->tuu__DOT__bp_cache__DOT__state[3]),2);
    bufp->fullCData(oldp+41,(vlSelf->tuu__DOT__bp_cache__DOT__state[4]),2);
    bufp->fullCData(oldp+42,(vlSelf->tuu__DOT__bp_cache__DOT__state[5]),2);
    bufp->fullCData(oldp+43,(vlSelf->tuu__DOT__bp_cache__DOT__state[6]),2);
    bufp->fullCData(oldp+44,(vlSelf->tuu__DOT__bp_cache__DOT__state[7]),2);
    bufp->fullCData(oldp+45,(vlSelf->tuu__DOT__bp_cache__DOT__state[8]),2);
    bufp->fullCData(oldp+46,(vlSelf->tuu__DOT__bp_cache__DOT__state[9]),2);
    bufp->fullCData(oldp+47,(vlSelf->tuu__DOT__bp_cache__DOT__state[10]),2);
    bufp->fullCData(oldp+48,(vlSelf->tuu__DOT__bp_cache__DOT__state[11]),2);
    bufp->fullCData(oldp+49,(vlSelf->tuu__DOT__bp_cache__DOT__state[12]),2);
    bufp->fullCData(oldp+50,(vlSelf->tuu__DOT__bp_cache__DOT__state[13]),2);
    bufp->fullCData(oldp+51,(vlSelf->tuu__DOT__bp_cache__DOT__state[14]),2);
    bufp->fullCData(oldp+52,(vlSelf->tuu__DOT__bp_cache__DOT__state[15]),2);
    bufp->fullBit(oldp+53,(vlSelf->tuu__DOT__bp_cache__DOT__valid[0]));
    bufp->fullBit(oldp+54,(vlSelf->tuu__DOT__bp_cache__DOT__valid[1]));
    bufp->fullBit(oldp+55,(vlSelf->tuu__DOT__bp_cache__DOT__valid[2]));
    bufp->fullBit(oldp+56,(vlSelf->tuu__DOT__bp_cache__DOT__valid[3]));
    bufp->fullBit(oldp+57,(vlSelf->tuu__DOT__bp_cache__DOT__valid[4]));
    bufp->fullBit(oldp+58,(vlSelf->tuu__DOT__bp_cache__DOT__valid[5]));
    bufp->fullBit(oldp+59,(vlSelf->tuu__DOT__bp_cache__DOT__valid[6]));
    bufp->fullBit(oldp+60,(vlSelf->tuu__DOT__bp_cache__DOT__valid[7]));
    bufp->fullBit(oldp+61,(vlSelf->tuu__DOT__bp_cache__DOT__valid[8]));
    bufp->fullBit(oldp+62,(vlSelf->tuu__DOT__bp_cache__DOT__valid[9]));
    bufp->fullBit(oldp+63,(vlSelf->tuu__DOT__bp_cache__DOT__valid[10]));
    bufp->fullBit(oldp+64,(vlSelf->tuu__DOT__bp_cache__DOT__valid[11]));
    bufp->fullBit(oldp+65,(vlSelf->tuu__DOT__bp_cache__DOT__valid[12]));
    bufp->fullBit(oldp+66,(vlSelf->tuu__DOT__bp_cache__DOT__valid[13]));
    bufp->fullBit(oldp+67,(vlSelf->tuu__DOT__bp_cache__DOT__valid[14]));
    bufp->fullBit(oldp+68,(vlSelf->tuu__DOT__bp_cache__DOT__valid[15]));
    bufp->fullIData(oldp+69,(vlSelf->tuu__DOT__bp_cache__DOT__tag[0]),28);
    bufp->fullIData(oldp+70,(vlSelf->tuu__DOT__bp_cache__DOT__tag[1]),28);
    bufp->fullIData(oldp+71,(vlSelf->tuu__DOT__bp_cache__DOT__tag[2]),28);
    bufp->fullIData(oldp+72,(vlSelf->tuu__DOT__bp_cache__DOT__tag[3]),28);
    bufp->fullIData(oldp+73,(vlSelf->tuu__DOT__bp_cache__DOT__tag[4]),28);
    bufp->fullIData(oldp+74,(vlSelf->tuu__DOT__bp_cache__DOT__tag[5]),28);
    bufp->fullIData(oldp+75,(vlSelf->tuu__DOT__bp_cache__DOT__tag[6]),28);
    bufp->fullIData(oldp+76,(vlSelf->tuu__DOT__bp_cache__DOT__tag[7]),28);
    bufp->fullIData(oldp+77,(vlSelf->tuu__DOT__bp_cache__DOT__tag[8]),28);
    bufp->fullIData(oldp+78,(vlSelf->tuu__DOT__bp_cache__DOT__tag[9]),28);
    bufp->fullIData(oldp+79,(vlSelf->tuu__DOT__bp_cache__DOT__tag[10]),28);
    bufp->fullIData(oldp+80,(vlSelf->tuu__DOT__bp_cache__DOT__tag[11]),28);
    bufp->fullIData(oldp+81,(vlSelf->tuu__DOT__bp_cache__DOT__tag[12]),28);
    bufp->fullIData(oldp+82,(vlSelf->tuu__DOT__bp_cache__DOT__tag[13]),28);
    bufp->fullIData(oldp+83,(vlSelf->tuu__DOT__bp_cache__DOT__tag[14]),28);
    bufp->fullIData(oldp+84,(vlSelf->tuu__DOT__bp_cache__DOT__tag[15]),28);
    bufp->fullIData(oldp+85,(vlSelf->tuu__DOT__bp_cache__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+86,(vlSelf->clk));
    bufp->fullBit(oldp+87,(vlSelf->rst));
    bufp->fullIData(oldp+88,(vlSelf->ins),32);
    bufp->fullIData(oldp+89,(vlSelf->pc),32);
    bufp->fullIData(oldp+90,(vlSelf->pc_tu_i),32);
    bufp->fullIData(oldp+91,(vlSelf->pcplusimm_tu),32);
    bufp->fullBit(oldp+92,(vlSelf->eq));
    bufp->fullBit(oldp+93,(vlSelf->jump));
    bufp->fullBit(oldp+94,(vlSelf->branch));
    bufp->fullBit(oldp+95,(vlSelf->branch_predicted_e));
    bufp->fullIData(oldp+96,(vlSelf->pc_tu_o),32);
    bufp->fullBit(oldp+97,(vlSelf->branch_en));
    bufp->fullIData(oldp+98,(vlSelf->pc_target),32);
    bufp->fullBit(oldp+99,(vlSelf->flush));
    bufp->fullBit(oldp+100,((((0x63U == (0x7fU & vlSelf->ins)) 
                              | (0x6fU == (0x7fU & vlSelf->ins))) 
                             | (0x67U == (0x7fU & vlSelf->ins)))));
    bufp->fullCData(oldp+101,(((IData)(vlSelf->tuu__DOT__hit2)
                                ? vlSelf->tuu__DOT__bp_cache__DOT__state
                               [(0xfU & vlSelf->pc_tu_i)]
                                : 0U)),2);
    bufp->fullCData(oldp+102,(((IData)(vlSelf->tuu__DOT__hit1)
                                ? vlSelf->tuu__DOT__bp_cache__DOT__state
                               [(0xfU & vlSelf->pc)]
                                : 0U)),2);
    bufp->fullIData(oldp+103,(((IData)(vlSelf->tuu__DOT__hit1)
                                ? vlSelf->tuu__DOT__bp_cache__DOT__cache_data1
                               [(0xfU & vlSelf->pc)]
                                : 0U)),32);
    bufp->fullCData(oldp+104,((0xfU & vlSelf->pc_tu_i)),4);
    bufp->fullCData(oldp+105,((0xfU & vlSelf->pc)),4);
    bufp->fullIData(oldp+106,((vlSelf->pc_tu_i >> 4U)),28);
    bufp->fullIData(oldp+107,((vlSelf->pc >> 4U)),28);
    bufp->fullIData(oldp+108,(0x20U),32);
    bufp->fullIData(oldp+109,(0x10U),32);
    bufp->fullIData(oldp+110,(4U),32);
    bufp->fullIData(oldp+111,(0x1cU),32);
}
