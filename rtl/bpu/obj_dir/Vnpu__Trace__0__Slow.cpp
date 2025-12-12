// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vnpu__Syms.h"


VL_ATTR_COLD void Vnpu___024root__trace_init_sub__TOP__0(Vnpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1,"pc_circuit", false,-1, 31,0);
    tracep->declBit(c+2,"flush", false,-1);
    tracep->declBus(c+3,"pc_tu", false,-1, 31,0);
    tracep->declBit(c+4,"branch_en", false,-1);
    tracep->declBus(c+5,"pc_target", false,-1, 31,0);
    tracep->declBus(c+6,"pc_next", false,-1, 31,0);
    tracep->declBit(c+7,"branch_predicted", false,-1);
    tracep->pushNamePrefix("npu ");
    tracep->declBus(c+10,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+1,"pc_circuit", false,-1, 31,0);
    tracep->declBit(c+2,"flush", false,-1);
    tracep->declBus(c+3,"pc_tu", false,-1, 31,0);
    tracep->declBit(c+4,"branch_en", false,-1);
    tracep->declBus(c+5,"pc_target", false,-1, 31,0);
    tracep->declBus(c+6,"pc_next", false,-1, 31,0);
    tracep->declBit(c+7,"branch_predicted", false,-1);
    tracep->declBus(c+8,"pc_branch_en", false,-1, 31,0);
    tracep->declBus(c+9,"pc_tu_p4", false,-1, 31,0);
    tracep->pushNamePrefix("pc_from_TUU_mux ");
    tracep->declBus(c+10,"D_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1,"in0", false,-1, 31,0);
    tracep->declBus(c+5,"in1", false,-1, 31,0);
    tracep->declBit(c+4,"sel", false,-1);
    tracep->declBus(c+8,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc_out_mux ");
    tracep->declBus(c+10,"D_WIDTH", false,-1, 31,0);
    tracep->declBus(c+8,"in0", false,-1, 31,0);
    tracep->declBus(c+9,"in1", false,-1, 31,0);
    tracep->declBit(c+2,"sel", false,-1);
    tracep->declBus(c+6,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_pc_inc ");
    tracep->declBus(c+10,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+3,"pc", false,-1, 31,0);
    tracep->declBus(c+9,"inc_pc", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vnpu___024root__trace_init_top(Vnpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu___024root__trace_init_top\n"); );
    // Body
    Vnpu___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vnpu___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vnpu___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vnpu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vnpu___024root__trace_register(Vnpu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vnpu___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vnpu___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vnpu___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vnpu___024root__trace_full_sub_0(Vnpu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vnpu___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu___024root__trace_full_top_0\n"); );
    // Init
    Vnpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vnpu___024root*>(voidSelf);
    Vnpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vnpu___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vnpu___024root__trace_full_sub_0(Vnpu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpu___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->pc_circuit),32);
    bufp->fullBit(oldp+2,(vlSelf->flush));
    bufp->fullIData(oldp+3,(vlSelf->pc_tu),32);
    bufp->fullBit(oldp+4,(vlSelf->branch_en));
    bufp->fullIData(oldp+5,(vlSelf->pc_target),32);
    bufp->fullIData(oldp+6,(vlSelf->pc_next),32);
    bufp->fullBit(oldp+7,(vlSelf->branch_predicted));
    bufp->fullIData(oldp+8,(((IData)(vlSelf->branch_en)
                              ? vlSelf->pc_target : vlSelf->pc_circuit)),32);
    bufp->fullIData(oldp+9,(((IData)(4U) + vlSelf->pc_tu)),32);
    bufp->fullIData(oldp+10,(0x20U),32);
}
