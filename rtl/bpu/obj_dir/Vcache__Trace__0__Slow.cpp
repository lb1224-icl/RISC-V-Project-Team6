// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcache__Syms.h"


VL_ATTR_COLD void Vcache___024root__trace_init_sub__TOP__0(Vcache___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+82,"clk", false,-1);
    tracep->declBit(c+83,"reset", false,-1);
    tracep->declBus(c+84,"wr_addr", false,-1, 31,0);
    tracep->declBus(c+85,"rd_addr", false,-1, 31,0);
    tracep->declBus(c+86,"data_in0", false,-1, 31,0);
    tracep->declBus(c+87,"data_in1", false,-1, 31,0);
    tracep->declBus(c+88,"data_in2", false,-1, 1,0);
    tracep->declBit(c+89,"write_en", false,-1);
    tracep->declBus(c+90,"data_out1", false,-1, 31,0);
    tracep->declBus(c+91,"data_out2", false,-1, 1,0);
    tracep->declBus(c+92,"data_out3", false,-1, 1,0);
    tracep->declBit(c+93,"hit1", false,-1);
    tracep->declBit(c+94,"hit2", false,-1);
    tracep->pushNamePrefix("cache ");
    tracep->declBus(c+99,"CACHE_SIZE", false,-1, 31,0);
    tracep->declBus(c+100,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+100,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+82,"clk", false,-1);
    tracep->declBit(c+83,"reset", false,-1);
    tracep->declBus(c+84,"wr_addr", false,-1, 31,0);
    tracep->declBus(c+85,"rd_addr", false,-1, 31,0);
    tracep->declBus(c+86,"data_in0", false,-1, 31,0);
    tracep->declBus(c+87,"data_in1", false,-1, 31,0);
    tracep->declBus(c+88,"data_in2", false,-1, 1,0);
    tracep->declBit(c+89,"write_en", false,-1);
    tracep->declBus(c+90,"data_out1", false,-1, 31,0);
    tracep->declBus(c+91,"data_out2", false,-1, 1,0);
    tracep->declBus(c+92,"data_out3", false,-1, 1,0);
    tracep->declBit(c+93,"hit1", false,-1);
    tracep->declBit(c+94,"hit2", false,-1);
    tracep->declBus(c+101,"LINE_ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+102,"TAG_WIDTH", false,-1, 31,0);
    tracep->declBus(c+95,"wr_line_index", false,-1, 3,0);
    tracep->declBus(c+96,"rd_line_index", false,-1, 3,0);
    tracep->declBus(c+97,"wr_addr_tag", false,-1, 27,0);
    tracep->declBus(c+98,"rd_addr_tag", false,-1, 27,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1+i*1,"cache_data0", true,(i+0), 31,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+17+i*1,"cache_data1", true,(i+0), 31,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+33+i*1,"state", true,(i+0), 1,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBit(c+49+i*1,"valid", true,(i+0));
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+65+i*1,"tag", true,(i+0), 27,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+81,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vcache___024root__trace_init_top(Vcache___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache___024root__trace_init_top\n"); );
    // Body
    Vcache___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vcache___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcache___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcache___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vcache___024root__trace_register(Vcache___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vcache___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vcache___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vcache___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vcache___024root__trace_full_sub_0(Vcache___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcache___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache___024root__trace_full_top_0\n"); );
    // Init
    Vcache___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcache___024root*>(voidSelf);
    Vcache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcache___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcache___024root__trace_full_sub_0(Vcache___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcache__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcache___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->cache__DOT__cache_data0[0]),32);
    bufp->fullIData(oldp+2,(vlSelf->cache__DOT__cache_data0[1]),32);
    bufp->fullIData(oldp+3,(vlSelf->cache__DOT__cache_data0[2]),32);
    bufp->fullIData(oldp+4,(vlSelf->cache__DOT__cache_data0[3]),32);
    bufp->fullIData(oldp+5,(vlSelf->cache__DOT__cache_data0[4]),32);
    bufp->fullIData(oldp+6,(vlSelf->cache__DOT__cache_data0[5]),32);
    bufp->fullIData(oldp+7,(vlSelf->cache__DOT__cache_data0[6]),32);
    bufp->fullIData(oldp+8,(vlSelf->cache__DOT__cache_data0[7]),32);
    bufp->fullIData(oldp+9,(vlSelf->cache__DOT__cache_data0[8]),32);
    bufp->fullIData(oldp+10,(vlSelf->cache__DOT__cache_data0[9]),32);
    bufp->fullIData(oldp+11,(vlSelf->cache__DOT__cache_data0[10]),32);
    bufp->fullIData(oldp+12,(vlSelf->cache__DOT__cache_data0[11]),32);
    bufp->fullIData(oldp+13,(vlSelf->cache__DOT__cache_data0[12]),32);
    bufp->fullIData(oldp+14,(vlSelf->cache__DOT__cache_data0[13]),32);
    bufp->fullIData(oldp+15,(vlSelf->cache__DOT__cache_data0[14]),32);
    bufp->fullIData(oldp+16,(vlSelf->cache__DOT__cache_data0[15]),32);
    bufp->fullIData(oldp+17,(vlSelf->cache__DOT__cache_data1[0]),32);
    bufp->fullIData(oldp+18,(vlSelf->cache__DOT__cache_data1[1]),32);
    bufp->fullIData(oldp+19,(vlSelf->cache__DOT__cache_data1[2]),32);
    bufp->fullIData(oldp+20,(vlSelf->cache__DOT__cache_data1[3]),32);
    bufp->fullIData(oldp+21,(vlSelf->cache__DOT__cache_data1[4]),32);
    bufp->fullIData(oldp+22,(vlSelf->cache__DOT__cache_data1[5]),32);
    bufp->fullIData(oldp+23,(vlSelf->cache__DOT__cache_data1[6]),32);
    bufp->fullIData(oldp+24,(vlSelf->cache__DOT__cache_data1[7]),32);
    bufp->fullIData(oldp+25,(vlSelf->cache__DOT__cache_data1[8]),32);
    bufp->fullIData(oldp+26,(vlSelf->cache__DOT__cache_data1[9]),32);
    bufp->fullIData(oldp+27,(vlSelf->cache__DOT__cache_data1[10]),32);
    bufp->fullIData(oldp+28,(vlSelf->cache__DOT__cache_data1[11]),32);
    bufp->fullIData(oldp+29,(vlSelf->cache__DOT__cache_data1[12]),32);
    bufp->fullIData(oldp+30,(vlSelf->cache__DOT__cache_data1[13]),32);
    bufp->fullIData(oldp+31,(vlSelf->cache__DOT__cache_data1[14]),32);
    bufp->fullIData(oldp+32,(vlSelf->cache__DOT__cache_data1[15]),32);
    bufp->fullCData(oldp+33,(vlSelf->cache__DOT__state[0]),2);
    bufp->fullCData(oldp+34,(vlSelf->cache__DOT__state[1]),2);
    bufp->fullCData(oldp+35,(vlSelf->cache__DOT__state[2]),2);
    bufp->fullCData(oldp+36,(vlSelf->cache__DOT__state[3]),2);
    bufp->fullCData(oldp+37,(vlSelf->cache__DOT__state[4]),2);
    bufp->fullCData(oldp+38,(vlSelf->cache__DOT__state[5]),2);
    bufp->fullCData(oldp+39,(vlSelf->cache__DOT__state[6]),2);
    bufp->fullCData(oldp+40,(vlSelf->cache__DOT__state[7]),2);
    bufp->fullCData(oldp+41,(vlSelf->cache__DOT__state[8]),2);
    bufp->fullCData(oldp+42,(vlSelf->cache__DOT__state[9]),2);
    bufp->fullCData(oldp+43,(vlSelf->cache__DOT__state[10]),2);
    bufp->fullCData(oldp+44,(vlSelf->cache__DOT__state[11]),2);
    bufp->fullCData(oldp+45,(vlSelf->cache__DOT__state[12]),2);
    bufp->fullCData(oldp+46,(vlSelf->cache__DOT__state[13]),2);
    bufp->fullCData(oldp+47,(vlSelf->cache__DOT__state[14]),2);
    bufp->fullCData(oldp+48,(vlSelf->cache__DOT__state[15]),2);
    bufp->fullBit(oldp+49,(vlSelf->cache__DOT__valid[0]));
    bufp->fullBit(oldp+50,(vlSelf->cache__DOT__valid[1]));
    bufp->fullBit(oldp+51,(vlSelf->cache__DOT__valid[2]));
    bufp->fullBit(oldp+52,(vlSelf->cache__DOT__valid[3]));
    bufp->fullBit(oldp+53,(vlSelf->cache__DOT__valid[4]));
    bufp->fullBit(oldp+54,(vlSelf->cache__DOT__valid[5]));
    bufp->fullBit(oldp+55,(vlSelf->cache__DOT__valid[6]));
    bufp->fullBit(oldp+56,(vlSelf->cache__DOT__valid[7]));
    bufp->fullBit(oldp+57,(vlSelf->cache__DOT__valid[8]));
    bufp->fullBit(oldp+58,(vlSelf->cache__DOT__valid[9]));
    bufp->fullBit(oldp+59,(vlSelf->cache__DOT__valid[10]));
    bufp->fullBit(oldp+60,(vlSelf->cache__DOT__valid[11]));
    bufp->fullBit(oldp+61,(vlSelf->cache__DOT__valid[12]));
    bufp->fullBit(oldp+62,(vlSelf->cache__DOT__valid[13]));
    bufp->fullBit(oldp+63,(vlSelf->cache__DOT__valid[14]));
    bufp->fullBit(oldp+64,(vlSelf->cache__DOT__valid[15]));
    bufp->fullIData(oldp+65,(vlSelf->cache__DOT__tag[0]),28);
    bufp->fullIData(oldp+66,(vlSelf->cache__DOT__tag[1]),28);
    bufp->fullIData(oldp+67,(vlSelf->cache__DOT__tag[2]),28);
    bufp->fullIData(oldp+68,(vlSelf->cache__DOT__tag[3]),28);
    bufp->fullIData(oldp+69,(vlSelf->cache__DOT__tag[4]),28);
    bufp->fullIData(oldp+70,(vlSelf->cache__DOT__tag[5]),28);
    bufp->fullIData(oldp+71,(vlSelf->cache__DOT__tag[6]),28);
    bufp->fullIData(oldp+72,(vlSelf->cache__DOT__tag[7]),28);
    bufp->fullIData(oldp+73,(vlSelf->cache__DOT__tag[8]),28);
    bufp->fullIData(oldp+74,(vlSelf->cache__DOT__tag[9]),28);
    bufp->fullIData(oldp+75,(vlSelf->cache__DOT__tag[10]),28);
    bufp->fullIData(oldp+76,(vlSelf->cache__DOT__tag[11]),28);
    bufp->fullIData(oldp+77,(vlSelf->cache__DOT__tag[12]),28);
    bufp->fullIData(oldp+78,(vlSelf->cache__DOT__tag[13]),28);
    bufp->fullIData(oldp+79,(vlSelf->cache__DOT__tag[14]),28);
    bufp->fullIData(oldp+80,(vlSelf->cache__DOT__tag[15]),28);
    bufp->fullIData(oldp+81,(vlSelf->cache__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+82,(vlSelf->clk));
    bufp->fullBit(oldp+83,(vlSelf->reset));
    bufp->fullIData(oldp+84,(vlSelf->wr_addr),32);
    bufp->fullIData(oldp+85,(vlSelf->rd_addr),32);
    bufp->fullIData(oldp+86,(vlSelf->data_in0),32);
    bufp->fullIData(oldp+87,(vlSelf->data_in1),32);
    bufp->fullCData(oldp+88,(vlSelf->data_in2),2);
    bufp->fullBit(oldp+89,(vlSelf->write_en));
    bufp->fullIData(oldp+90,(vlSelf->data_out1),32);
    bufp->fullCData(oldp+91,(vlSelf->data_out2),2);
    bufp->fullCData(oldp+92,(vlSelf->data_out3),2);
    bufp->fullBit(oldp+93,(vlSelf->hit1));
    bufp->fullBit(oldp+94,(vlSelf->hit2));
    bufp->fullCData(oldp+95,((0xfU & vlSelf->wr_addr)),4);
    bufp->fullCData(oldp+96,((0xfU & vlSelf->rd_addr)),4);
    bufp->fullIData(oldp+97,((vlSelf->wr_addr >> 4U)),28);
    bufp->fullIData(oldp+98,((vlSelf->rd_addr >> 4U)),28);
    bufp->fullIData(oldp+99,(0x10U),32);
    bufp->fullIData(oldp+100,(0x20U),32);
    bufp->fullIData(oldp+101,(4U),32);
    bufp->fullIData(oldp+102,(0x1cU),32);
}
