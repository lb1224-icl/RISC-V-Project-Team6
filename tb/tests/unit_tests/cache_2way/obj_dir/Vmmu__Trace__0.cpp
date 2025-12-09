// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmmu__Syms.h"


void Vmmu___024root__trace_chg_sub_0(Vmmu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vmmu___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmmu___024root__trace_chg_top_0\n"); );
    // Init
    Vmmu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmmu___024root*>(voidSelf);
    Vmmu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vmmu___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vmmu___024root__trace_chg_sub_0(Vmmu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vmmu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmmu___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->mmu__DOT__fill_en));
        bufp->chgIData(oldp+1,(vlSelf->mmu__DOT__fill_addr),32);
        bufp->chgIData(oldp+2,(vlSelf->mmu__DOT__fill_data),32);
        bufp->chgBit(oldp+3,(vlSelf->mmu__DOT__fill_mark_valid));
        bufp->chgCData(oldp+4,(vlSelf->mmu__DOT__state),2);
        bufp->chgIData(oldp+5,(vlSelf->mmu__DOT__miss_addr_base),32);
        bufp->chgCData(oldp+6,(vlSelf->mmu__DOT__fill_count),2);
        bufp->chgIData(oldp+7,(vlSelf->mmu__DOT__saved_mem_addr),32);
        bufp->chgIData(oldp+8,((vlSelf->mmu__DOT__fill_addr 
                                >> 0xbU)),21);
        bufp->chgCData(oldp+9,((0x7fU & (vlSelf->mmu__DOT__fill_addr 
                                         >> 4U))),7);
        bufp->chgCData(oldp+10,((0xfU & vlSelf->mmu__DOT__fill_addr)),4);
        bufp->chgCData(oldp+11,((3U & (vlSelf->mmu__DOT__fill_addr 
                                       >> 2U))),2);
        bufp->chgBit(oldp+12,(vlSelf->mmu__DOT__u_l1__DOT__repl_way));
        bufp->chgIData(oldp+13,(vlSelf->mmu__DOT__u_l1__DOT__i),32);
        bufp->chgBit(oldp+14,(vlSelf->mmu__DOT__u_l1__DOT__unnamedblk2__DOT__v0));
        bufp->chgBit(oldp+15,(vlSelf->mmu__DOT__u_l1__DOT__unnamedblk2__DOT__v1));
        bufp->chgIData(oldp+16,(vlSelf->mmu__DOT__u_l1__DOT__unnamedblk3__DOT__w),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+17,(vlSelf->mmu__DOT__u_l1__DOT__line_word),32);
        bufp->chgBit(oldp+18,(vlSelf->mmu__DOT__cache_hit_int));
        bufp->chgIData(oldp+19,(vlSelf->mmu__DOT__ram_addr),32);
        bufp->chgIData(oldp+20,(vlSelf->mmu__DOT__ram_r_data),32);
        bufp->chgBit(oldp+21,(vlSelf->mmu__DOT__ram_we));
        bufp->chgIData(oldp+22,(vlSelf->mmu__DOT__u_l1__DOT__line_tag[0]),21);
        bufp->chgIData(oldp+23,(vlSelf->mmu__DOT__u_l1__DOT__line_tag[1]),21);
        bufp->chgBit(oldp+24,(vlSelf->mmu__DOT__u_l1__DOT__line_valid[0]));
        bufp->chgBit(oldp+25,(vlSelf->mmu__DOT__u_l1__DOT__line_valid[1]));
        bufp->chgWData(oldp+26,(vlSelf->mmu__DOT__u_l1__DOT__line_data[0]),128);
        bufp->chgWData(oldp+30,(vlSelf->mmu__DOT__u_l1__DOT__line_data[1]),128);
        bufp->chgBit(oldp+34,(vlSelf->mmu__DOT__u_l1__DOT__hit_way0));
        bufp->chgBit(oldp+35,(vlSelf->mmu__DOT__u_l1__DOT__hit_way1));
        bufp->chgIData(oldp+36,((0x1ffffU & vlSelf->mmu__DOT__ram_addr)),17);
    }
    bufp->chgBit(oldp+37,(vlSelf->clk));
    bufp->chgBit(oldp+38,(vlSelf->rst));
    bufp->chgBit(oldp+39,(vlSelf->mem_valid));
    bufp->chgBit(oldp+40,(vlSelf->mem_we));
    bufp->chgIData(oldp+41,(vlSelf->mem_addr),32);
    bufp->chgIData(oldp+42,(vlSelf->mem_w_data),32);
    bufp->chgIData(oldp+43,(vlSelf->mem_r_data),32);
    bufp->chgBit(oldp+44,(vlSelf->mem_ready));
    bufp->chgBit(oldp+45,(vlSelf->cache_hit));
    bufp->chgIData(oldp+46,((vlSelf->mem_addr >> 0xbU)),21);
    bufp->chgCData(oldp+47,((0x7fU & (vlSelf->mem_addr 
                                      >> 4U))),7);
    bufp->chgCData(oldp+48,((0xfU & vlSelf->mem_addr)),4);
    bufp->chgCData(oldp+49,((3U & (vlSelf->mem_addr 
                                   >> 2U))),2);
}

void Vmmu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmmu___024root__trace_cleanup\n"); );
    // Init
    Vmmu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmmu___024root*>(voidSelf);
    Vmmu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
