// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmmu__Syms.h"


VL_ATTR_COLD void Vmmu___024root__trace_init_sub__TOP__0(Vmmu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmmu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmmu___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+23,"clk", false,-1);
    tracep->declBit(c+24,"rst", false,-1);
    tracep->declBit(c+25,"mem_valid", false,-1);
    tracep->declBit(c+26,"mem_we", false,-1);
    tracep->declBus(c+27,"mem_addr", false,-1, 31,0);
    tracep->declBus(c+28,"mem_w_data", false,-1, 31,0);
    tracep->declBus(c+29,"mem_r_data", false,-1, 31,0);
    tracep->declBit(c+30,"mem_ready", false,-1);
    tracep->declBit(c+31,"cache_hit", false,-1);
    tracep->pushNamePrefix("mmu ");
    tracep->declBus(c+39,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+39,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+40,"CACHE_SIZE", false,-1, 31,0);
    tracep->declBus(c+41,"LINE_SIZE", false,-1, 31,0);
    tracep->declBit(c+23,"clk", false,-1);
    tracep->declBit(c+24,"rst", false,-1);
    tracep->declBit(c+25,"mem_valid", false,-1);
    tracep->declBit(c+26,"mem_we", false,-1);
    tracep->declBus(c+27,"mem_addr", false,-1, 31,0);
    tracep->declBus(c+28,"mem_w_data", false,-1, 31,0);
    tracep->declBus(c+29,"mem_r_data", false,-1, 31,0);
    tracep->declBit(c+30,"mem_ready", false,-1);
    tracep->declBit(c+31,"cache_hit", false,-1);
    tracep->declBus(c+32,"cache_r_data", false,-1, 31,0);
    tracep->declBit(c+14,"cache_hit_int", false,-1);
    tracep->declBit(c+1,"fill_en", false,-1);
    tracep->declBus(c+2,"fill_addr", false,-1, 31,0);
    tracep->declBus(c+3,"fill_data", false,-1, 31,0);
    tracep->declBit(c+4,"fill_mark_valid", false,-1);
    tracep->declBus(c+15,"ram_addr", false,-1, 31,0);
    tracep->declBus(c+16,"ram_r_data", false,-1, 31,0);
    tracep->declBus(c+28,"ram_w_data", false,-1, 31,0);
    tracep->declBit(c+17,"ram_we", false,-1);
    tracep->declBus(c+42,"OFFSET_BITS", false,-1, 31,0);
    tracep->declBus(c+5,"state", false,-1, 1,0);
    tracep->declBus(c+6,"miss_addr_base", false,-1, 31,0);
    tracep->declBus(c+7,"fill_count", false,-1, 1,0);
    tracep->declBus(c+8,"saved_mem_addr", false,-1, 31,0);
    tracep->pushNamePrefix("u_l1 ");
    tracep->declBus(c+39,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+39,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+40,"CACHE_SIZE", false,-1, 31,0);
    tracep->declBus(c+41,"LINE_SIZE", false,-1, 31,0);
    tracep->declBit(c+23,"clk", false,-1);
    tracep->declBit(c+24,"rst", false,-1);
    tracep->declBit(c+25,"mem_valid", false,-1);
    tracep->declBit(c+26,"mem_we", false,-1);
    tracep->declBus(c+27,"mem_addr", false,-1, 31,0);
    tracep->declBus(c+28,"mem_w_data", false,-1, 31,0);
    tracep->declBus(c+32,"mem_r_data", false,-1, 31,0);
    tracep->declBit(c+14,"cache_hit", false,-1);
    tracep->declBit(c+1,"fill_en", false,-1);
    tracep->declBus(c+2,"fill_addr", false,-1, 31,0);
    tracep->declBus(c+3,"fill_data", false,-1, 31,0);
    tracep->declBit(c+4,"fill_mark_valid", false,-1);
    tracep->declBus(c+43,"LINES", false,-1, 31,0);
    tracep->declBus(c+42,"OFFSET_BITS", false,-1, 31,0);
    tracep->declBus(c+44,"SET_BITS", false,-1, 31,0);
    tracep->declBus(c+45,"TAG_BITS", false,-1, 31,0);
    tracep->declBus(c+42,"BYTES_PER_WORD", false,-1, 31,0);
    tracep->declBus(c+42,"WORDS_PER_LINE", false,-1, 31,0);
    tracep->declBus(c+46,"WORD_SEL_BITS", false,-1, 31,0);
    tracep->declBus(c+47,"LINE_BITS", false,-1, 31,0);
    tracep->declBus(c+33,"mem_tag", false,-1, 19,0);
    tracep->declBus(c+34,"mem_set", false,-1, 7,0);
    tracep->declBus(c+35,"mem_offset", false,-1, 3,0);
    tracep->declBus(c+36,"mem_word_index", false,-1, 1,0);
    tracep->declBus(c+37,"line_tag", false,-1, 19,0);
    tracep->declBit(c+38,"line_valid", false,-1);
    tracep->declArray(c+18,"line_data", false,-1, 127,0);
    tracep->declBus(c+32,"line_word", false,-1, 31,0);
    tracep->declBus(c+9,"fill_tag", false,-1, 19,0);
    tracep->declBus(c+10,"fill_index", false,-1, 7,0);
    tracep->declBus(c+11,"fill_offset", false,-1, 3,0);
    tracep->declBus(c+12,"fill_word_index", false,-1, 1,0);
    tracep->declBus(c+13,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_ram ");
    tracep->declBus(c+39,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+48,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+49,"SIZE", false,-1, 31,0);
    tracep->declBus(c+15,"addr", false,-1, 31,0);
    tracep->declBus(c+28,"write_data", false,-1, 31,0);
    tracep->declBit(c+23,"clk", false,-1);
    tracep->declBit(c+17,"write_enable", false,-1);
    tracep->declBus(c+16,"read_data", false,-1, 31,0);
    tracep->declBus(c+22,"index", false,-1, 16,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vmmu___024root__trace_init_top(Vmmu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmmu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmmu___024root__trace_init_top\n"); );
    // Body
    Vmmu___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vmmu___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmmu___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vmmu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vmmu___024root__trace_register(Vmmu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmmu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmmu___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vmmu___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vmmu___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vmmu___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vmmu___024root__trace_full_sub_0(Vmmu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vmmu___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmmu___024root__trace_full_top_0\n"); );
    // Init
    Vmmu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmmu___024root*>(voidSelf);
    Vmmu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vmmu___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vmmu___024root__trace_full_sub_0(Vmmu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vmmu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmmu___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->mmu__DOT__fill_en));
    bufp->fullIData(oldp+2,(vlSelf->mmu__DOT__fill_addr),32);
    bufp->fullIData(oldp+3,(vlSelf->mmu__DOT__fill_data),32);
    bufp->fullBit(oldp+4,(vlSelf->mmu__DOT__fill_mark_valid));
    bufp->fullCData(oldp+5,(vlSelf->mmu__DOT__state),2);
    bufp->fullIData(oldp+6,(vlSelf->mmu__DOT__miss_addr_base),32);
    bufp->fullCData(oldp+7,(vlSelf->mmu__DOT__fill_count),2);
    bufp->fullIData(oldp+8,(vlSelf->mmu__DOT__saved_mem_addr),32);
    bufp->fullIData(oldp+9,((vlSelf->mmu__DOT__fill_addr 
                             >> 0xcU)),20);
    bufp->fullCData(oldp+10,((0xffU & (vlSelf->mmu__DOT__fill_addr 
                                       >> 4U))),8);
    bufp->fullCData(oldp+11,((0xfU & vlSelf->mmu__DOT__fill_addr)),4);
    bufp->fullCData(oldp+12,((3U & (vlSelf->mmu__DOT__fill_addr 
                                    >> 2U))),2);
    bufp->fullIData(oldp+13,(vlSelf->mmu__DOT__u_l1__DOT__i),32);
    bufp->fullBit(oldp+14,(vlSelf->mmu__DOT__cache_hit_int));
    bufp->fullIData(oldp+15,(vlSelf->mmu__DOT__ram_addr),32);
    bufp->fullIData(oldp+16,(vlSelf->mmu__DOT__ram_r_data),32);
    bufp->fullBit(oldp+17,(vlSelf->mmu__DOT__ram_we));
    bufp->fullWData(oldp+18,(vlSelf->mmu__DOT__u_l1__DOT__line_data),128);
    bufp->fullIData(oldp+22,((0x1ffffU & vlSelf->mmu__DOT__ram_addr)),17);
    bufp->fullBit(oldp+23,(vlSelf->clk));
    bufp->fullBit(oldp+24,(vlSelf->rst));
    bufp->fullBit(oldp+25,(vlSelf->mem_valid));
    bufp->fullBit(oldp+26,(vlSelf->mem_we));
    bufp->fullIData(oldp+27,(vlSelf->mem_addr),32);
    bufp->fullIData(oldp+28,(vlSelf->mem_w_data),32);
    bufp->fullIData(oldp+29,(vlSelf->mem_r_data),32);
    bufp->fullBit(oldp+30,(vlSelf->mem_ready));
    bufp->fullBit(oldp+31,(vlSelf->cache_hit));
    bufp->fullIData(oldp+32,(((0U == (3U & (vlSelf->mem_addr 
                                            >> 2U)))
                               ? vlSelf->mmu__DOT__u_l1__DOT__line_data[0U]
                               : ((1U == (3U & (vlSelf->mem_addr 
                                                >> 2U)))
                                   ? vlSelf->mmu__DOT__u_l1__DOT__line_data[1U]
                                   : ((2U == (3U & 
                                              (vlSelf->mem_addr 
                                               >> 2U)))
                                       ? vlSelf->mmu__DOT__u_l1__DOT__line_data[2U]
                                       : ((3U == (3U 
                                                  & (vlSelf->mem_addr 
                                                     >> 2U)))
                                           ? vlSelf->mmu__DOT__u_l1__DOT__line_data[3U]
                                           : 0U))))),32);
    bufp->fullIData(oldp+33,((vlSelf->mem_addr >> 0xcU)),20);
    bufp->fullCData(oldp+34,((0xffU & (vlSelf->mem_addr 
                                       >> 4U))),8);
    bufp->fullCData(oldp+35,((0xfU & vlSelf->mem_addr)),4);
    bufp->fullCData(oldp+36,((3U & (vlSelf->mem_addr 
                                    >> 2U))),2);
    bufp->fullIData(oldp+37,(vlSelf->mmu__DOT__u_l1__DOT__tag_array
                             [(0xffU & (vlSelf->mem_addr 
                                        >> 4U))]),20);
    bufp->fullBit(oldp+38,(vlSelf->mmu__DOT__u_l1__DOT__valid_array
                           [(0xffU & (vlSelf->mem_addr 
                                      >> 4U))]));
    bufp->fullIData(oldp+39,(0x20U),32);
    bufp->fullIData(oldp+40,(0x1000U),32);
    bufp->fullIData(oldp+41,(0x10U),32);
    bufp->fullIData(oldp+42,(4U),32);
    bufp->fullIData(oldp+43,(0x100U),32);
    bufp->fullIData(oldp+44,(8U),32);
    bufp->fullIData(oldp+45,(0x14U),32);
    bufp->fullIData(oldp+46,(2U),32);
    bufp->fullIData(oldp+47,(0x80U),32);
    bufp->fullIData(oldp+48,(8U),32);
    bufp->fullIData(oldp+49,(0x11U),32);
}
