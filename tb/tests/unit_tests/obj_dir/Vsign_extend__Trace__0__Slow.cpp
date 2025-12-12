// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsign_extend__Syms.h"


VL_ATTR_COLD void Vsign_extend___024root__trace_init_sub__TOP__0(Vsign_extend___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsign_extend__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsign_extend___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1,"imm_src", false,-1, 2,0);
    tracep->declBus(c+2,"ins", false,-1, 31,0);
    tracep->declBus(c+3,"imm_op", false,-1, 31,0);
    tracep->pushNamePrefix("sign_extend ");
    tracep->declBus(c+4,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1,"imm_src", false,-1, 2,0);
    tracep->declBus(c+2,"ins", false,-1, 31,0);
    tracep->declBus(c+3,"imm_op", false,-1, 31,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vsign_extend___024root__trace_init_top(Vsign_extend___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsign_extend__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsign_extend___024root__trace_init_top\n"); );
    // Body
    Vsign_extend___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vsign_extend___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsign_extend___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsign_extend___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vsign_extend___024root__trace_register(Vsign_extend___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsign_extend__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsign_extend___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vsign_extend___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vsign_extend___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vsign_extend___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vsign_extend___024root__trace_full_sub_0(Vsign_extend___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vsign_extend___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsign_extend___024root__trace_full_top_0\n"); );
    // Init
    Vsign_extend___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsign_extend___024root*>(voidSelf);
    Vsign_extend__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vsign_extend___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vsign_extend___024root__trace_full_sub_0(Vsign_extend___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsign_extend__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsign_extend___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->imm_src),3);
    bufp->fullIData(oldp+2,(vlSelf->ins),32);
    bufp->fullIData(oldp+3,(vlSelf->imm_op),32);
    bufp->fullIData(oldp+4,(0x20U),32);
}
