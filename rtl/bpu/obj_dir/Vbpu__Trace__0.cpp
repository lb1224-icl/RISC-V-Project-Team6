// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vbpu__Syms.h"


void Vbpu___024root__trace_chg_sub_0(Vbpu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vbpu___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbpu___024root__trace_chg_top_0\n"); );
    // Init
    Vbpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbpu___024root*>(voidSelf);
    Vbpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vbpu___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vbpu___024root__trace_chg_sub_0(Vbpu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vbpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbpu___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->bpu__DOT__branch_en));
        bufp->chgIData(oldp+1,(vlSelf->bpu__DOT__pc_target),32);
        bufp->chgBit(oldp+2,(vlSelf->bpu__DOT__flush));
        bufp->chgCData(oldp+3,(vlSelf->bpu__DOT__TUU__DOT__next_state),2);
        bufp->chgBit(oldp+4,(vlSelf->bpu__DOT__TUU__DOT__hit1));
        bufp->chgBit(oldp+5,(vlSelf->bpu__DOT__TUU__DOT__hit2));
        bufp->chgBit(oldp+6,(vlSelf->bpu__DOT__TUU__DOT__write_en));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+7,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__cache_data0[0]),32);
        bufp->chgIData(oldp+8,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__cache_data0[1]),32);
        bufp->chgIData(oldp+9,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__cache_data0[2]),32);
        bufp->chgIData(oldp+10,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__cache_data0[3]),32);
        bufp->chgIData(oldp+11,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__cache_data0[4]),32);
        bufp->chgIData(oldp+12,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__cache_data0[5]),32);
        bufp->chgIData(oldp+13,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__cache_data0[6]),32);
        bufp->chgIData(oldp+14,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__cache_data0[7]),32);
        bufp->chgIData(oldp+15,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__cache_data0[8]),32);
        bufp->chgIData(oldp+16,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__cache_data0[9]),32);
        bufp->chgIData(oldp+17,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__cache_data0[10]),32);
        bufp->chgIData(oldp+18,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__cache_data0[11]),32);
        bufp->chgIData(oldp+19,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__cache_data0[12]),32);
        bufp->chgIData(oldp+20,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__cache_data0[13]),32);
        bufp->chgIData(oldp+21,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__cache_data0[14]),32);
        bufp->chgIData(oldp+22,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__cache_data0[15]),32);
        bufp->chgIData(oldp+23,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__cache_data1[0]),32);
        bufp->chgIData(oldp+24,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__cache_data1[1]),32);
        bufp->chgIData(oldp+25,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__cache_data1[2]),32);
        bufp->chgIData(oldp+26,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__cache_data1[3]),32);
        bufp->chgIData(oldp+27,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__cache_data1[4]),32);
        bufp->chgIData(oldp+28,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__cache_data1[5]),32);
        bufp->chgIData(oldp+29,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__cache_data1[6]),32);
        bufp->chgIData(oldp+30,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__cache_data1[7]),32);
        bufp->chgIData(oldp+31,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__cache_data1[8]),32);
        bufp->chgIData(oldp+32,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__cache_data1[9]),32);
        bufp->chgIData(oldp+33,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__cache_data1[10]),32);
        bufp->chgIData(oldp+34,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__cache_data1[11]),32);
        bufp->chgIData(oldp+35,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__cache_data1[12]),32);
        bufp->chgIData(oldp+36,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__cache_data1[13]),32);
        bufp->chgIData(oldp+37,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__cache_data1[14]),32);
        bufp->chgIData(oldp+38,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__cache_data1[15]),32);
        bufp->chgCData(oldp+39,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__state[0]),2);
        bufp->chgCData(oldp+40,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__state[1]),2);
        bufp->chgCData(oldp+41,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__state[2]),2);
        bufp->chgCData(oldp+42,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__state[3]),2);
        bufp->chgCData(oldp+43,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__state[4]),2);
        bufp->chgCData(oldp+44,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__state[5]),2);
        bufp->chgCData(oldp+45,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__state[6]),2);
        bufp->chgCData(oldp+46,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__state[7]),2);
        bufp->chgCData(oldp+47,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__state[8]),2);
        bufp->chgCData(oldp+48,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__state[9]),2);
        bufp->chgCData(oldp+49,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__state[10]),2);
        bufp->chgCData(oldp+50,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__state[11]),2);
        bufp->chgCData(oldp+51,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__state[12]),2);
        bufp->chgCData(oldp+52,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__state[13]),2);
        bufp->chgCData(oldp+53,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__state[14]),2);
        bufp->chgCData(oldp+54,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__state[15]),2);
        bufp->chgBit(oldp+55,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__valid[0]));
        bufp->chgBit(oldp+56,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__valid[1]));
        bufp->chgBit(oldp+57,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__valid[2]));
        bufp->chgBit(oldp+58,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__valid[3]));
        bufp->chgBit(oldp+59,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__valid[4]));
        bufp->chgBit(oldp+60,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__valid[5]));
        bufp->chgBit(oldp+61,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__valid[6]));
        bufp->chgBit(oldp+62,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__valid[7]));
        bufp->chgBit(oldp+63,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__valid[8]));
        bufp->chgBit(oldp+64,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__valid[9]));
        bufp->chgBit(oldp+65,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__valid[10]));
        bufp->chgBit(oldp+66,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__valid[11]));
        bufp->chgBit(oldp+67,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__valid[12]));
        bufp->chgBit(oldp+68,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__valid[13]));
        bufp->chgBit(oldp+69,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__valid[14]));
        bufp->chgBit(oldp+70,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__valid[15]));
        bufp->chgIData(oldp+71,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__tag[0]),28);
        bufp->chgIData(oldp+72,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__tag[1]),28);
        bufp->chgIData(oldp+73,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__tag[2]),28);
        bufp->chgIData(oldp+74,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__tag[3]),28);
        bufp->chgIData(oldp+75,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__tag[4]),28);
        bufp->chgIData(oldp+76,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__tag[5]),28);
        bufp->chgIData(oldp+77,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__tag[6]),28);
        bufp->chgIData(oldp+78,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__tag[7]),28);
        bufp->chgIData(oldp+79,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__tag[8]),28);
        bufp->chgIData(oldp+80,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__tag[9]),28);
        bufp->chgIData(oldp+81,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__tag[10]),28);
        bufp->chgIData(oldp+82,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__tag[11]),28);
        bufp->chgIData(oldp+83,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__tag[12]),28);
        bufp->chgIData(oldp+84,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__tag[13]),28);
        bufp->chgIData(oldp+85,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__tag[14]),28);
        bufp->chgIData(oldp+86,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__tag[15]),28);
        bufp->chgIData(oldp+87,(vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__unnamedblk1__DOT__i),32);
    }
    bufp->chgBit(oldp+88,(vlSelf->clk));
    bufp->chgBit(oldp+89,(vlSelf->rst));
    bufp->chgIData(oldp+90,(vlSelf->ins),32);
    bufp->chgIData(oldp+91,(vlSelf->pc),32);
    bufp->chgIData(oldp+92,(vlSelf->pc_tu),32);
    bufp->chgIData(oldp+93,(vlSelf->pcplusimm_tu),32);
    bufp->chgBit(oldp+94,(vlSelf->eq));
    bufp->chgBit(oldp+95,(vlSelf->jump));
    bufp->chgBit(oldp+96,(vlSelf->branch));
    bufp->chgIData(oldp+97,(vlSelf->pc_circuit),32);
    bufp->chgBit(oldp+98,(vlSelf->branch_predicted_e));
    bufp->chgIData(oldp+99,(vlSelf->pc_next),32);
    bufp->chgBit(oldp+100,(vlSelf->branch_predicted));
    bufp->chgBit(oldp+101,(vlSelf->flush_o));
    bufp->chgIData(oldp+102,(((IData)(vlSelf->bpu__DOT__branch_en)
                               ? vlSelf->bpu__DOT__pc_target
                               : vlSelf->pc_circuit)),32);
    bufp->chgIData(oldp+103,(((IData)(4U) + vlSelf->pc_tu)),32);
    bufp->chgBit(oldp+104,((((0x63U == (0x7fU & vlSelf->ins)) 
                             | (0x6fU == (0x7fU & vlSelf->ins))) 
                            | (0x67U == (0x7fU & vlSelf->ins)))));
    bufp->chgCData(oldp+105,(((IData)(vlSelf->bpu__DOT__TUU__DOT__hit2)
                               ? vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__state
                              [(0xfU & vlSelf->pc_tu)]
                               : 0U)),2);
    bufp->chgCData(oldp+106,(((IData)(vlSelf->bpu__DOT__TUU__DOT__hit1)
                               ? vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__state
                              [(0xfU & vlSelf->pc)]
                               : 0U)),2);
    bufp->chgIData(oldp+107,(((IData)(vlSelf->bpu__DOT__TUU__DOT__hit1)
                               ? vlSelf->bpu__DOT__TUU__DOT__bp_cache__DOT__cache_data1
                              [(0xfU & vlSelf->pc)]
                               : 0U)),32);
    bufp->chgCData(oldp+108,((0xfU & vlSelf->pc_tu)),4);
    bufp->chgCData(oldp+109,((0xfU & vlSelf->pc)),4);
    bufp->chgIData(oldp+110,((vlSelf->pc_tu >> 4U)),28);
    bufp->chgIData(oldp+111,((vlSelf->pc >> 4U)),28);
}

void Vbpu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbpu___024root__trace_cleanup\n"); );
    // Init
    Vbpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbpu___024root*>(voidSelf);
    Vbpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
