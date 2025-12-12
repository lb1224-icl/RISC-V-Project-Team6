// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcache__Syms.h"


void Vcache___024root__trace_chg_sub_0(Vcache___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vcache___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache___024root__trace_chg_top_0\n"); );
    // Init
    Vcache___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcache___024root*>(voidSelf);
    Vcache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vcache___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vcache___024root__trace_chg_sub_0(Vcache___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->cache__DOT__cache_data0[0]),32);
        bufp->chgIData(oldp+1,(vlSelf->cache__DOT__cache_data0[1]),32);
        bufp->chgIData(oldp+2,(vlSelf->cache__DOT__cache_data0[2]),32);
        bufp->chgIData(oldp+3,(vlSelf->cache__DOT__cache_data0[3]),32);
        bufp->chgIData(oldp+4,(vlSelf->cache__DOT__cache_data0[4]),32);
        bufp->chgIData(oldp+5,(vlSelf->cache__DOT__cache_data0[5]),32);
        bufp->chgIData(oldp+6,(vlSelf->cache__DOT__cache_data0[6]),32);
        bufp->chgIData(oldp+7,(vlSelf->cache__DOT__cache_data0[7]),32);
        bufp->chgIData(oldp+8,(vlSelf->cache__DOT__cache_data0[8]),32);
        bufp->chgIData(oldp+9,(vlSelf->cache__DOT__cache_data0[9]),32);
        bufp->chgIData(oldp+10,(vlSelf->cache__DOT__cache_data0[10]),32);
        bufp->chgIData(oldp+11,(vlSelf->cache__DOT__cache_data0[11]),32);
        bufp->chgIData(oldp+12,(vlSelf->cache__DOT__cache_data0[12]),32);
        bufp->chgIData(oldp+13,(vlSelf->cache__DOT__cache_data0[13]),32);
        bufp->chgIData(oldp+14,(vlSelf->cache__DOT__cache_data0[14]),32);
        bufp->chgIData(oldp+15,(vlSelf->cache__DOT__cache_data0[15]),32);
        bufp->chgIData(oldp+16,(vlSelf->cache__DOT__cache_data1[0]),32);
        bufp->chgIData(oldp+17,(vlSelf->cache__DOT__cache_data1[1]),32);
        bufp->chgIData(oldp+18,(vlSelf->cache__DOT__cache_data1[2]),32);
        bufp->chgIData(oldp+19,(vlSelf->cache__DOT__cache_data1[3]),32);
        bufp->chgIData(oldp+20,(vlSelf->cache__DOT__cache_data1[4]),32);
        bufp->chgIData(oldp+21,(vlSelf->cache__DOT__cache_data1[5]),32);
        bufp->chgIData(oldp+22,(vlSelf->cache__DOT__cache_data1[6]),32);
        bufp->chgIData(oldp+23,(vlSelf->cache__DOT__cache_data1[7]),32);
        bufp->chgIData(oldp+24,(vlSelf->cache__DOT__cache_data1[8]),32);
        bufp->chgIData(oldp+25,(vlSelf->cache__DOT__cache_data1[9]),32);
        bufp->chgIData(oldp+26,(vlSelf->cache__DOT__cache_data1[10]),32);
        bufp->chgIData(oldp+27,(vlSelf->cache__DOT__cache_data1[11]),32);
        bufp->chgIData(oldp+28,(vlSelf->cache__DOT__cache_data1[12]),32);
        bufp->chgIData(oldp+29,(vlSelf->cache__DOT__cache_data1[13]),32);
        bufp->chgIData(oldp+30,(vlSelf->cache__DOT__cache_data1[14]),32);
        bufp->chgIData(oldp+31,(vlSelf->cache__DOT__cache_data1[15]),32);
        bufp->chgCData(oldp+32,(vlSelf->cache__DOT__state[0]),2);
        bufp->chgCData(oldp+33,(vlSelf->cache__DOT__state[1]),2);
        bufp->chgCData(oldp+34,(vlSelf->cache__DOT__state[2]),2);
        bufp->chgCData(oldp+35,(vlSelf->cache__DOT__state[3]),2);
        bufp->chgCData(oldp+36,(vlSelf->cache__DOT__state[4]),2);
        bufp->chgCData(oldp+37,(vlSelf->cache__DOT__state[5]),2);
        bufp->chgCData(oldp+38,(vlSelf->cache__DOT__state[6]),2);
        bufp->chgCData(oldp+39,(vlSelf->cache__DOT__state[7]),2);
        bufp->chgCData(oldp+40,(vlSelf->cache__DOT__state[8]),2);
        bufp->chgCData(oldp+41,(vlSelf->cache__DOT__state[9]),2);
        bufp->chgCData(oldp+42,(vlSelf->cache__DOT__state[10]),2);
        bufp->chgCData(oldp+43,(vlSelf->cache__DOT__state[11]),2);
        bufp->chgCData(oldp+44,(vlSelf->cache__DOT__state[12]),2);
        bufp->chgCData(oldp+45,(vlSelf->cache__DOT__state[13]),2);
        bufp->chgCData(oldp+46,(vlSelf->cache__DOT__state[14]),2);
        bufp->chgCData(oldp+47,(vlSelf->cache__DOT__state[15]),2);
        bufp->chgBit(oldp+48,(vlSelf->cache__DOT__valid[0]));
        bufp->chgBit(oldp+49,(vlSelf->cache__DOT__valid[1]));
        bufp->chgBit(oldp+50,(vlSelf->cache__DOT__valid[2]));
        bufp->chgBit(oldp+51,(vlSelf->cache__DOT__valid[3]));
        bufp->chgBit(oldp+52,(vlSelf->cache__DOT__valid[4]));
        bufp->chgBit(oldp+53,(vlSelf->cache__DOT__valid[5]));
        bufp->chgBit(oldp+54,(vlSelf->cache__DOT__valid[6]));
        bufp->chgBit(oldp+55,(vlSelf->cache__DOT__valid[7]));
        bufp->chgBit(oldp+56,(vlSelf->cache__DOT__valid[8]));
        bufp->chgBit(oldp+57,(vlSelf->cache__DOT__valid[9]));
        bufp->chgBit(oldp+58,(vlSelf->cache__DOT__valid[10]));
        bufp->chgBit(oldp+59,(vlSelf->cache__DOT__valid[11]));
        bufp->chgBit(oldp+60,(vlSelf->cache__DOT__valid[12]));
        bufp->chgBit(oldp+61,(vlSelf->cache__DOT__valid[13]));
        bufp->chgBit(oldp+62,(vlSelf->cache__DOT__valid[14]));
        bufp->chgBit(oldp+63,(vlSelf->cache__DOT__valid[15]));
        bufp->chgIData(oldp+64,(vlSelf->cache__DOT__tag[0]),28);
        bufp->chgIData(oldp+65,(vlSelf->cache__DOT__tag[1]),28);
        bufp->chgIData(oldp+66,(vlSelf->cache__DOT__tag[2]),28);
        bufp->chgIData(oldp+67,(vlSelf->cache__DOT__tag[3]),28);
        bufp->chgIData(oldp+68,(vlSelf->cache__DOT__tag[4]),28);
        bufp->chgIData(oldp+69,(vlSelf->cache__DOT__tag[5]),28);
        bufp->chgIData(oldp+70,(vlSelf->cache__DOT__tag[6]),28);
        bufp->chgIData(oldp+71,(vlSelf->cache__DOT__tag[7]),28);
        bufp->chgIData(oldp+72,(vlSelf->cache__DOT__tag[8]),28);
        bufp->chgIData(oldp+73,(vlSelf->cache__DOT__tag[9]),28);
        bufp->chgIData(oldp+74,(vlSelf->cache__DOT__tag[10]),28);
        bufp->chgIData(oldp+75,(vlSelf->cache__DOT__tag[11]),28);
        bufp->chgIData(oldp+76,(vlSelf->cache__DOT__tag[12]),28);
        bufp->chgIData(oldp+77,(vlSelf->cache__DOT__tag[13]),28);
        bufp->chgIData(oldp+78,(vlSelf->cache__DOT__tag[14]),28);
        bufp->chgIData(oldp+79,(vlSelf->cache__DOT__tag[15]),28);
        bufp->chgIData(oldp+80,(vlSelf->cache__DOT__unnamedblk1__DOT__i),32);
    }
    bufp->chgBit(oldp+81,(vlSelf->clk));
    bufp->chgBit(oldp+82,(vlSelf->reset));
    bufp->chgIData(oldp+83,(vlSelf->wr_addr),32);
    bufp->chgIData(oldp+84,(vlSelf->rd_addr),32);
    bufp->chgIData(oldp+85,(vlSelf->data_in0),32);
    bufp->chgIData(oldp+86,(vlSelf->data_in1),32);
    bufp->chgCData(oldp+87,(vlSelf->data_in2),2);
    bufp->chgBit(oldp+88,(vlSelf->write_en));
    bufp->chgIData(oldp+89,(vlSelf->data_out1),32);
    bufp->chgCData(oldp+90,(vlSelf->data_out2),2);
    bufp->chgCData(oldp+91,(vlSelf->data_out3),2);
    bufp->chgBit(oldp+92,(vlSelf->hit1));
    bufp->chgBit(oldp+93,(vlSelf->hit2));
    bufp->chgCData(oldp+94,((0xfU & vlSelf->wr_addr)),4);
    bufp->chgCData(oldp+95,((0xfU & vlSelf->rd_addr)),4);
    bufp->chgIData(oldp+96,((vlSelf->wr_addr >> 4U)),28);
    bufp->chgIData(oldp+97,((vlSelf->rd_addr >> 4U)),28);
}

void Vcache___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache___024root__trace_cleanup\n"); );
    // Init
    Vcache___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcache___024root*>(voidSelf);
    Vcache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
