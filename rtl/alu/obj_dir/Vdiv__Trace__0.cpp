// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vdiv__Syms.h"


void Vdiv___024root__trace_chg_0_sub_0(Vdiv___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vdiv___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root__trace_chg_0\n"); );
    // Init
    Vdiv___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdiv___024root*>(voidSelf);
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vdiv___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vdiv___024root__trace_chg_0_sub_0(Vdiv___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root__trace_chg_0_sub_0\n"); );
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgCData(oldp+0,(vlSelfRef.div__DOT__counter),6);
        bufp->chgCData(oldp+1,(vlSelfRef.div__DOT__state),2);
        bufp->chgQData(oldp+2,(vlSelfRef.div__DOT__rem),33);
        bufp->chgIData(oldp+4,(vlSelfRef.div__DOT__quo),32);
        bufp->chgIData(oldp+5,(vlSelfRef.div__DOT__div_shift),32);
        bufp->chgQData(oldp+6,(vlSelfRef.div__DOT__den),33);
        bufp->chgBit(oldp+8,(vlSelfRef.div__DOT__sign_q));
        bufp->chgBit(oldp+9,(vlSelfRef.div__DOT__sign_r));
        bufp->chgQData(oldp+10,(vlSelfRef.div__DOT__unnamedblk1__DOT__rem_next),33);
    }
    bufp->chgBit(oldp+12,(vlSelfRef.clk));
    bufp->chgBit(oldp+13,(vlSelfRef.start));
    bufp->chgCData(oldp+14,(vlSelfRef.div_ctrl),2);
    bufp->chgIData(oldp+15,(vlSelfRef.numerator),32);
    bufp->chgIData(oldp+16,(vlSelfRef.denominator),32);
    bufp->chgIData(oldp+17,(vlSelfRef.result),32);
    bufp->chgBit(oldp+18,(vlSelfRef.division_done));
    bufp->chgCData(oldp+19,(vlSelfRef.div__DOT__next_state),2);
    bufp->chgBit(oldp+20,(vlSelfRef.div__DOT__is_signed));
}

void Vdiv___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdiv___024root__trace_cleanup\n"); );
    // Init
    Vdiv___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vdiv___024root*>(voidSelf);
    Vdiv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
