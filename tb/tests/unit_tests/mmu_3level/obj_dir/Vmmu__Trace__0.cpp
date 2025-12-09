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
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelf->mmu__DOT__u_ram__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+1,(vlSelf->mmu__DOT__l1_fill_en));
        bufp->chgIData(oldp+2,(vlSelf->mmu__DOT__l1_fill_addr),32);
        bufp->chgWData(oldp+3,(vlSelf->mmu__DOT__l1_fill_data),128);
        bufp->chgBit(oldp+7,(vlSelf->mmu__DOT__l1_fill_mark_valid));
        bufp->chgBit(oldp+8,(vlSelf->mmu__DOT__l2_fill_en));
        bufp->chgIData(oldp+9,(vlSelf->mmu__DOT__l2_fill_addr),32);
        bufp->chgWData(oldp+10,(vlSelf->mmu__DOT__l2_fill_data),128);
        bufp->chgBit(oldp+14,(vlSelf->mmu__DOT__l2_fill_mark_valid));
        bufp->chgBit(oldp+15,(vlSelf->mmu__DOT__l3_fill_en));
        bufp->chgIData(oldp+16,(vlSelf->mmu__DOT__l3_fill_addr),32);
        bufp->chgWData(oldp+17,(vlSelf->mmu__DOT__l3_fill_data),128);
        bufp->chgBit(oldp+21,(vlSelf->mmu__DOT__l3_fill_mark_valid));
        bufp->chgBit(oldp+22,(vlSelf->mmu__DOT__state));
        bufp->chgIData(oldp+23,(vlSelf->mmu__DOT__saved_addr),32);
        bufp->chgCData(oldp+24,(vlSelf->mmu__DOT__saved_word_index),2);
        bufp->chgCData(oldp+25,(vlSelf->mmu__DOT__fill_count),2);
        bufp->chgWData(oldp+26,(vlSelf->mmu__DOT__block_buf),128);
        bufp->chgBit(oldp+30,(vlSelf->mmu__DOT__resp_valid));
        bufp->chgCData(oldp+31,(vlSelf->mmu__DOT__resp_word_index),2);
        bufp->chgBit(oldp+32,(vlSelf->mmu__DOT__last_read_hit));
        bufp->chgIData(oldp+33,((vlSelf->mmu__DOT__l1_fill_addr 
                                 >> 0xbU)),21);
        bufp->chgCData(oldp+34,((0x7fU & (vlSelf->mmu__DOT__l1_fill_addr 
                                          >> 4U))),7);
        bufp->chgBit(oldp+35,(vlSelf->mmu__DOT__u_l1__DOT__repl_way));
        bufp->chgIData(oldp+36,(vlSelf->mmu__DOT__u_l1__DOT__s),32);
        bufp->chgIData(oldp+37,(vlSelf->mmu__DOT__u_l1__DOT__w),32);
        bufp->chgIData(oldp+38,(vlSelf->mmu__DOT__u_l1__DOT__unnamedblk5__DOT__ww),32);
        bufp->chgIData(oldp+39,(vlSelf->mmu__DOT__u_l1__DOT__unnamedblk5__DOT__unnamedblk6__DOT__cur_word),32);
        bufp->chgIData(oldp+40,((vlSelf->mmu__DOT__l2_fill_addr 
                                 >> 0xcU)),20);
        bufp->chgCData(oldp+41,((0xffU & (vlSelf->mmu__DOT__l2_fill_addr 
                                          >> 4U))),8);
        bufp->chgCData(oldp+42,(vlSelf->mmu__DOT__u_l2__DOT__repl_way),2);
        bufp->chgIData(oldp+43,(vlSelf->mmu__DOT__u_l2__DOT__unnamedblk5__DOT__s),32);
        bufp->chgIData(oldp+44,(vlSelf->mmu__DOT__u_l2__DOT__unnamedblk5__DOT__unnamedblk6__DOT__w),32);
        bufp->chgIData(oldp+45,(vlSelf->mmu__DOT__u_l2__DOT__unnamedblk7__DOT__w),32);
        bufp->chgIData(oldp+46,(vlSelf->mmu__DOT__u_l2__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word),32);
        bufp->chgIData(oldp+47,((vlSelf->mmu__DOT__l3_fill_addr 
                                 >> 0xdU)),19);
        bufp->chgSData(oldp+48,((0x1ffU & (vlSelf->mmu__DOT__l3_fill_addr 
                                           >> 4U))),9);
        bufp->chgCData(oldp+49,(vlSelf->mmu__DOT__u_l3__DOT__repl_way),3);
        bufp->chgIData(oldp+50,(vlSelf->mmu__DOT__u_l3__DOT__unnamedblk5__DOT__s),32);
        bufp->chgIData(oldp+51,(vlSelf->mmu__DOT__u_l3__DOT__unnamedblk5__DOT__unnamedblk6__DOT__w),32);
        bufp->chgIData(oldp+52,(vlSelf->mmu__DOT__u_l3__DOT__unnamedblk7__DOT__w),32);
        bufp->chgIData(oldp+53,(vlSelf->mmu__DOT__u_l3__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word),32);
        bufp->chgBit(oldp+54,(vlSelf->mmu__DOT__unnamedblk1__DOT__any_hit));
        bufp->chgWData(oldp+55,(vlSelf->mmu__DOT__unnamedblk2__DOT__block_next),128);
        bufp->chgIData(oldp+59,(vlSelf->mmu__DOT__unnamedblk2__DOT__unnamedblk3__DOT__base),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+60,(vlSelf->mmu__DOT__u_l1__DOT__selected_word),32);
        bufp->chgBit(oldp+61,((0U != (IData)(vlSelf->mmu__DOT__u_l1__DOT__way_hit))));
        bufp->chgWData(oldp+62,(vlSelf->mmu__DOT__u_l2__DOT__selected_line),128);
        bufp->chgBit(oldp+66,((0U != (IData)(vlSelf->mmu__DOT__u_l2__DOT__way_hit))));
        bufp->chgWData(oldp+67,(vlSelf->mmu__DOT__u_l3__DOT__selected_line),128);
        bufp->chgBit(oldp+71,((0U != (IData)(vlSelf->mmu__DOT__u_l3__DOT__way_hit))));
        bufp->chgIData(oldp+72,(vlSelf->mmu__DOT__ram_addr),32);
        bufp->chgIData(oldp+73,(vlSelf->mmu__DOT__ram_r_data),32);
        bufp->chgIData(oldp+74,(vlSelf->mmu__DOT__resp_data_comb),32);
        bufp->chgCData(oldp+75,(vlSelf->mmu__DOT__u_l1__DOT__way_hit),2);
        bufp->chgWData(oldp+76,(vlSelf->mmu__DOT__u_l1__DOT__way_data[0]),128);
        bufp->chgWData(oldp+80,(vlSelf->mmu__DOT__u_l1__DOT__way_data[1]),128);
        bufp->chgIData(oldp+84,(vlSelf->mmu__DOT__u_l1__DOT__byte_mask),32);
        bufp->chgIData(oldp+85,(vlSelf->mmu__DOT__u_l1__DOT__masked_write),32);
        bufp->chgCData(oldp+86,(vlSelf->mmu__DOT__u_l2__DOT__way_hit),4);
        bufp->chgWData(oldp+87,(vlSelf->mmu__DOT__u_l2__DOT__way_data[0]),128);
        bufp->chgWData(oldp+91,(vlSelf->mmu__DOT__u_l2__DOT__way_data[1]),128);
        bufp->chgWData(oldp+95,(vlSelf->mmu__DOT__u_l2__DOT__way_data[2]),128);
        bufp->chgWData(oldp+99,(vlSelf->mmu__DOT__u_l2__DOT__way_data[3]),128);
        bufp->chgIData(oldp+103,(vlSelf->mmu__DOT__u_l2__DOT__byte_mask),32);
        bufp->chgIData(oldp+104,(vlSelf->mmu__DOT__u_l2__DOT__masked_write),32);
        bufp->chgCData(oldp+105,(vlSelf->mmu__DOT__u_l3__DOT__way_hit),8);
        bufp->chgWData(oldp+106,(vlSelf->mmu__DOT__u_l3__DOT__way_data[0]),128);
        bufp->chgWData(oldp+110,(vlSelf->mmu__DOT__u_l3__DOT__way_data[1]),128);
        bufp->chgWData(oldp+114,(vlSelf->mmu__DOT__u_l3__DOT__way_data[2]),128);
        bufp->chgWData(oldp+118,(vlSelf->mmu__DOT__u_l3__DOT__way_data[3]),128);
        bufp->chgWData(oldp+122,(vlSelf->mmu__DOT__u_l3__DOT__way_data[4]),128);
        bufp->chgWData(oldp+126,(vlSelf->mmu__DOT__u_l3__DOT__way_data[5]),128);
        bufp->chgWData(oldp+130,(vlSelf->mmu__DOT__u_l3__DOT__way_data[6]),128);
        bufp->chgWData(oldp+134,(vlSelf->mmu__DOT__u_l3__DOT__way_data[7]),128);
        bufp->chgIData(oldp+138,(vlSelf->mmu__DOT__u_l3__DOT__byte_mask),32);
        bufp->chgIData(oldp+139,(vlSelf->mmu__DOT__u_l3__DOT__masked_write),32);
        bufp->chgIData(oldp+140,((0x1ffffU & vlSelf->mmu__DOT__ram_addr)),17);
        bufp->chgBit(oldp+141,((0U != (vlSelf->mmu__DOT__ram_addr 
                                       >> 0x11U))));
    }
    bufp->chgBit(oldp+142,(vlSelf->clk));
    bufp->chgBit(oldp+143,(vlSelf->rst));
    bufp->chgBit(oldp+144,(vlSelf->mem_valid));
    bufp->chgBit(oldp+145,(vlSelf->mem_we));
    bufp->chgIData(oldp+146,(vlSelf->mem_addr),32);
    bufp->chgIData(oldp+147,(vlSelf->mem_w_data),32);
    bufp->chgCData(oldp+148,(vlSelf->mem_byte_en),4);
    bufp->chgIData(oldp+149,(vlSelf->mem_r_data),32);
    bufp->chgBit(oldp+150,(vlSelf->mem_ready));
    bufp->chgBit(oldp+151,(vlSelf->cache_hit));
    bufp->chgCData(oldp+152,((3U & (vlSelf->mem_addr 
                                    >> 2U))),2);
    bufp->chgIData(oldp+153,((0xfffffff0U & vlSelf->mem_addr)),32);
    bufp->chgIData(oldp+154,((vlSelf->mem_addr >> 0xbU)),21);
    bufp->chgCData(oldp+155,((0x7fU & (vlSelf->mem_addr 
                                       >> 4U))),7);
    bufp->chgCData(oldp+156,((0xfU & vlSelf->mem_addr)),4);
    bufp->chgCData(oldp+157,((3U & (vlSelf->mem_addr 
                                    >> 2U))),2);
    bufp->chgIData(oldp+158,((vlSelf->mem_addr >> 0xcU)),20);
    bufp->chgCData(oldp+159,((0xffU & (vlSelf->mem_addr 
                                       >> 4U))),8);
    bufp->chgIData(oldp+160,((vlSelf->mem_addr >> 0xdU)),19);
    bufp->chgSData(oldp+161,((0x1ffU & (vlSelf->mem_addr 
                                        >> 4U))),9);
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
