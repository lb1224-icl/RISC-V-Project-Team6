// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vnpu__Syms.h"


void Vnpu___024root__trace_chg_sub_0(Vnpu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vnpu___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu___024root__trace_chg_top_0\n"); );
    // Init
    Vnpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vnpu___024root*>(voidSelf);
    Vnpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vnpu___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vnpu___024root__trace_chg_sub_0(Vnpu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgIData(oldp+0,(vlSelf->pc_circuit),32);
    bufp->chgBit(oldp+1,(vlSelf->flush));
    bufp->chgIData(oldp+2,(vlSelf->pc_tu),32);
    bufp->chgBit(oldp+3,(vlSelf->branch_en));
    bufp->chgIData(oldp+4,(vlSelf->pc_target),32);
    bufp->chgIData(oldp+5,(vlSelf->pc_next),32);
    bufp->chgBit(oldp+6,(vlSelf->branch_predicted));
    bufp->chgIData(oldp+7,(((IData)(vlSelf->branch_en)
                             ? vlSelf->pc_target : vlSelf->pc_circuit)),32);
    bufp->chgIData(oldp+8,(((IData)(4U) + vlSelf->pc_tu)),32);
}

void Vnpu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu___024root__trace_cleanup\n"); );
    // Init
    Vnpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vnpu___024root*>(voidSelf);
    Vnpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
