// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmul__Syms.h"


VL_ATTR_COLD void Vmul___024root__trace_init_sub__TOP__0(Vmul___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1,"rd1", false,-1, 31,0);
    tracep->declBus(c+2,"rd2", false,-1, 31,0);
    tracep->declBus(c+3,"mul_ctrl", false,-1, 1,0);
    tracep->declBus(c+4,"result", false,-1, 31,0);
    tracep->pushNamePrefix("mul ");
    tracep->declBus(c+7,"D_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1,"rd1", false,-1, 31,0);
    tracep->declBus(c+2,"rd2", false,-1, 31,0);
    tracep->declBus(c+3,"mul_ctrl", false,-1, 1,0);
    tracep->declBus(c+4,"result", false,-1, 31,0);
    tracep->declQuad(c+5,"full_result", false,-1, 63,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vmul___024root__trace_init_top(Vmul___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul___024root__trace_init_top\n"); );
    // Body
    Vmul___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vmul___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmul___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmul___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vmul___024root__trace_register(Vmul___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vmul___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vmul___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vmul___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vmul___024root__trace_full_sub_0(Vmul___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vmul___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul___024root__trace_full_top_0\n"); );
    // Init
    Vmul___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmul___024root*>(voidSelf);
    Vmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vmul___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vmul___024root__trace_full_sub_0(Vmul___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vmul__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmul___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->rd1),32);
    bufp->fullIData(oldp+2,(vlSelf->rd2),32);
    bufp->fullCData(oldp+3,(vlSelf->mul_ctrl),2);
    bufp->fullIData(oldp+4,(vlSelf->result),32);
    bufp->fullQData(oldp+5,(vlSelf->mul__DOT__full_result),64);
    bufp->fullIData(oldp+7,(0x20U),32);
}
