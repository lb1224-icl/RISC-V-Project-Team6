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
    tracep->declBit(c+38,"clk", false,-1);
    tracep->declBit(c+39,"rst", false,-1);
    tracep->declBit(c+40,"mem_valid", false,-1);
    tracep->declBit(c+41,"mem_we", false,-1);
    tracep->declBus(c+42,"mem_addr", false,-1, 31,0);
    tracep->declBus(c+43,"mem_w_data", false,-1, 31,0);
    tracep->declBus(c+44,"mem_r_data", false,-1, 31,0);
    tracep->declBit(c+45,"mem_ready", false,-1);
    tracep->declBit(c+46,"cache_hit", false,-1);
    tracep->pushNamePrefix("mmu ");
    tracep->declBus(c+51,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+51,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+52,"CACHE_SIZE", false,-1, 31,0);
    tracep->declBus(c+53,"LINE_SIZE", false,-1, 31,0);
    tracep->declBit(c+38,"clk", false,-1);
    tracep->declBit(c+39,"rst", false,-1);
    tracep->declBit(c+40,"mem_valid", false,-1);
    tracep->declBit(c+41,"mem_we", false,-1);
    tracep->declBus(c+42,"mem_addr", false,-1, 31,0);
    tracep->declBus(c+43,"mem_w_data", false,-1, 31,0);
    tracep->declBus(c+44,"mem_r_data", false,-1, 31,0);
    tracep->declBit(c+45,"mem_ready", false,-1);
    tracep->declBit(c+46,"cache_hit", false,-1);
    tracep->declBus(c+18,"cache_r_data", false,-1, 31,0);
    tracep->declBit(c+19,"cache_hit_int", false,-1);
    tracep->declBit(c+1,"fill_en", false,-1);
    tracep->declBus(c+2,"fill_addr", false,-1, 31,0);
    tracep->declBus(c+3,"fill_data", false,-1, 31,0);
    tracep->declBit(c+4,"fill_mark_valid", false,-1);
    tracep->declBus(c+20,"ram_addr", false,-1, 31,0);
    tracep->declBus(c+21,"ram_r_data", false,-1, 31,0);
    tracep->declBus(c+43,"ram_w_data", false,-1, 31,0);
    tracep->declBit(c+22,"ram_we", false,-1);
    tracep->declBus(c+54,"OFFSET_BITS", false,-1, 31,0);
    tracep->declBus(c+5,"state", false,-1, 1,0);
    tracep->declBus(c+6,"miss_addr_base", false,-1, 31,0);
    tracep->declBus(c+7,"fill_count", false,-1, 1,0);
    tracep->declBus(c+8,"saved_mem_addr", false,-1, 31,0);
    tracep->pushNamePrefix("u_l1 ");
    tracep->declBus(c+51,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+51,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+52,"CACHE_SIZE", false,-1, 31,0);
    tracep->declBus(c+53,"LINE_SIZE", false,-1, 31,0);
    tracep->declBus(c+55,"WAYS", false,-1, 31,0);
    tracep->declBit(c+38,"clk", false,-1);
    tracep->declBit(c+39,"rst", false,-1);
    tracep->declBit(c+40,"mem_valid", false,-1);
    tracep->declBit(c+41,"mem_we", false,-1);
    tracep->declBus(c+42,"mem_addr", false,-1, 31,0);
    tracep->declBus(c+43,"mem_w_data", false,-1, 31,0);
    tracep->declBus(c+18,"mem_r_data", false,-1, 31,0);
    tracep->declBit(c+19,"cache_hit", false,-1);
    tracep->declBit(c+1,"fill_en", false,-1);
    tracep->declBus(c+2,"fill_addr", false,-1, 31,0);
    tracep->declBus(c+3,"fill_data", false,-1, 31,0);
    tracep->declBit(c+4,"fill_mark_valid", false,-1);
    tracep->declBus(c+56,"LINES", false,-1, 31,0);
    tracep->declBus(c+57,"SETS", false,-1, 31,0);
    tracep->declBus(c+54,"OFFSET_BITS", false,-1, 31,0);
    tracep->declBus(c+58,"SET_BITS", false,-1, 31,0);
    tracep->declBus(c+59,"TAG_BITS", false,-1, 31,0);
    tracep->declBus(c+54,"BYTES_PER_WORD", false,-1, 31,0);
    tracep->declBus(c+54,"WORDS_PER_LINE", false,-1, 31,0);
    tracep->declBus(c+60,"WORD_SEL_BITS", false,-1, 31,0);
    tracep->declBus(c+57,"LINE_BITS", false,-1, 31,0);
    tracep->declBus(c+47,"mem_tag", false,-1, 20,0);
    tracep->declBus(c+48,"mem_set", false,-1, 6,0);
    tracep->declBus(c+49,"mem_offset", false,-1, 3,0);
    tracep->declBus(c+50,"mem_word_index", false,-1, 1,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+23+i*1,"line_tag", true,(i+0), 20,0);
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+25+i*1,"line_valid", true,(i+0));
    }
    for (int i = 0; i < 2; ++i) {
        tracep->declArray(c+27+i*4,"line_data", true,(i+0), 127,0);
    }
    tracep->declBit(c+35,"hit_way0", false,-1);
    tracep->declBit(c+36,"hit_way1", false,-1);
    tracep->declBus(c+18,"line_word", false,-1, 31,0);
    tracep->declBus(c+9,"fill_tag", false,-1, 20,0);
    tracep->declBus(c+10,"fill_set", false,-1, 6,0);
    tracep->declBus(c+11,"fill_offset", false,-1, 3,0);
    tracep->declBus(c+12,"fill_word_index", false,-1, 1,0);
    tracep->declBit(c+13,"repl_way", false,-1);
    tracep->declBus(c+14,"i", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+61,"w", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBit(c+15,"v0", false,-1);
    tracep->declBit(c+16,"v1", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+17,"w", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_ram ");
    tracep->declBus(c+51,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+62,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+63,"SIZE", false,-1, 31,0);
    tracep->declBus(c+20,"addr", false,-1, 31,0);
    tracep->declBus(c+43,"write_data", false,-1, 31,0);
    tracep->declBit(c+38,"clk", false,-1);
    tracep->declBit(c+22,"write_enable", false,-1);
    tracep->declBus(c+21,"read_data", false,-1, 31,0);
    tracep->declBus(c+37,"index", false,-1, 16,0);
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
                             >> 0xbU)),21);
    bufp->fullCData(oldp+10,((0x7fU & (vlSelf->mmu__DOT__fill_addr 
                                       >> 4U))),7);
    bufp->fullCData(oldp+11,((0xfU & vlSelf->mmu__DOT__fill_addr)),4);
    bufp->fullCData(oldp+12,((3U & (vlSelf->mmu__DOT__fill_addr 
                                    >> 2U))),2);
    bufp->fullBit(oldp+13,(vlSelf->mmu__DOT__u_l1__DOT__repl_way));
    bufp->fullIData(oldp+14,(vlSelf->mmu__DOT__u_l1__DOT__i),32);
    bufp->fullBit(oldp+15,(vlSelf->mmu__DOT__u_l1__DOT__unnamedblk2__DOT__v0));
    bufp->fullBit(oldp+16,(vlSelf->mmu__DOT__u_l1__DOT__unnamedblk2__DOT__v1));
    bufp->fullIData(oldp+17,(vlSelf->mmu__DOT__u_l1__DOT__unnamedblk3__DOT__w),32);
    bufp->fullIData(oldp+18,(vlSelf->mmu__DOT__u_l1__DOT__line_word),32);
    bufp->fullBit(oldp+19,(vlSelf->mmu__DOT__cache_hit_int));
    bufp->fullIData(oldp+20,(vlSelf->mmu__DOT__ram_addr),32);
    bufp->fullIData(oldp+21,(vlSelf->mmu__DOT__ram_r_data),32);
    bufp->fullBit(oldp+22,(vlSelf->mmu__DOT__ram_we));
    bufp->fullIData(oldp+23,(vlSelf->mmu__DOT__u_l1__DOT__line_tag[0]),21);
    bufp->fullIData(oldp+24,(vlSelf->mmu__DOT__u_l1__DOT__line_tag[1]),21);
    bufp->fullBit(oldp+25,(vlSelf->mmu__DOT__u_l1__DOT__line_valid[0]));
    bufp->fullBit(oldp+26,(vlSelf->mmu__DOT__u_l1__DOT__line_valid[1]));
    bufp->fullWData(oldp+27,(vlSelf->mmu__DOT__u_l1__DOT__line_data[0]),128);
    bufp->fullWData(oldp+31,(vlSelf->mmu__DOT__u_l1__DOT__line_data[1]),128);
    bufp->fullBit(oldp+35,(vlSelf->mmu__DOT__u_l1__DOT__hit_way0));
    bufp->fullBit(oldp+36,(vlSelf->mmu__DOT__u_l1__DOT__hit_way1));
    bufp->fullIData(oldp+37,((0x1ffffU & vlSelf->mmu__DOT__ram_addr)),17);
    bufp->fullBit(oldp+38,(vlSelf->clk));
    bufp->fullBit(oldp+39,(vlSelf->rst));
    bufp->fullBit(oldp+40,(vlSelf->mem_valid));
    bufp->fullBit(oldp+41,(vlSelf->mem_we));
    bufp->fullIData(oldp+42,(vlSelf->mem_addr),32);
    bufp->fullIData(oldp+43,(vlSelf->mem_w_data),32);
    bufp->fullIData(oldp+44,(vlSelf->mem_r_data),32);
    bufp->fullBit(oldp+45,(vlSelf->mem_ready));
    bufp->fullBit(oldp+46,(vlSelf->cache_hit));
    bufp->fullIData(oldp+47,((vlSelf->mem_addr >> 0xbU)),21);
    bufp->fullCData(oldp+48,((0x7fU & (vlSelf->mem_addr 
                                       >> 4U))),7);
    bufp->fullCData(oldp+49,((0xfU & vlSelf->mem_addr)),4);
    bufp->fullCData(oldp+50,((3U & (vlSelf->mem_addr 
                                    >> 2U))),2);
    bufp->fullIData(oldp+51,(0x20U),32);
    bufp->fullIData(oldp+52,(0x1000U),32);
    bufp->fullIData(oldp+53,(0x10U),32);
    bufp->fullIData(oldp+54,(4U),32);
    bufp->fullIData(oldp+55,(2U),32);
    bufp->fullIData(oldp+56,(0x100U),32);
    bufp->fullIData(oldp+57,(0x80U),32);
    bufp->fullIData(oldp+58,(7U),32);
    bufp->fullIData(oldp+59,(0x15U),32);
    bufp->fullIData(oldp+60,(2U),32);
    bufp->fullIData(oldp+61,(2U),32);
    bufp->fullIData(oldp+62,(8U),32);
    bufp->fullIData(oldp+63,(0x11U),32);
}
