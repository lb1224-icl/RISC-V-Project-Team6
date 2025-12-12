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
    tracep->declBit(c+143,"clk", false,-1);
    tracep->declBit(c+144,"rst", false,-1);
    tracep->declBit(c+145,"mem_valid", false,-1);
    tracep->declBit(c+146,"mem_we", false,-1);
    tracep->declBus(c+147,"mem_addr", false,-1, 31,0);
    tracep->declBus(c+148,"mem_w_data", false,-1, 31,0);
    tracep->declBus(c+149,"mem_byte_en", false,-1, 3,0);
    tracep->declBus(c+150,"mem_r_data", false,-1, 31,0);
    tracep->declBit(c+151,"mem_ready", false,-1);
    tracep->declBit(c+152,"cache_hit", false,-1);
    tracep->pushNamePrefix("mmu ");
    tracep->declBus(c+163,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+163,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+164,"LINE_SIZE", false,-1, 31,0);
    tracep->declBit(c+143,"clk", false,-1);
    tracep->declBit(c+144,"rst", false,-1);
    tracep->declBit(c+145,"mem_valid", false,-1);
    tracep->declBit(c+146,"mem_we", false,-1);
    tracep->declBus(c+147,"mem_addr", false,-1, 31,0);
    tracep->declBus(c+148,"mem_w_data", false,-1, 31,0);
    tracep->declBus(c+149,"mem_byte_en", false,-1, 3,0);
    tracep->declBus(c+150,"mem_r_data", false,-1, 31,0);
    tracep->declBit(c+151,"mem_ready", false,-1);
    tracep->declBit(c+152,"cache_hit", false,-1);
    tracep->declBus(c+165,"BYTES_PER_WORD", false,-1, 31,0);
    tracep->declBus(c+165,"WORDS_PER_LINE", false,-1, 31,0);
    tracep->declBus(c+166,"BLOCK_BITS", false,-1, 31,0);
    tracep->declBus(c+165,"OFFSET_BITS", false,-1, 31,0);
    tracep->declBus(c+167,"WORD_SEL_BITS", false,-1, 31,0);
    tracep->declBus(c+153,"addr_word_index", false,-1, 1,0);
    tracep->declBus(c+154,"addr_block_base", false,-1, 31,0);
    tracep->declBus(c+61,"l1_r_word", false,-1, 31,0);
    tracep->declBit(c+62,"l1_hit", false,-1);
    tracep->declBit(c+2,"l1_fill_en", false,-1);
    tracep->declBus(c+3,"l1_fill_addr", false,-1, 31,0);
    tracep->declArray(c+4,"l1_fill_data", false,-1, 127,0);
    tracep->declBit(c+8,"l1_fill_mark_valid", false,-1);
    tracep->declArray(c+63,"l2_r_block", false,-1, 127,0);
    tracep->declBit(c+67,"l2_hit", false,-1);
    tracep->declBit(c+9,"l2_fill_en", false,-1);
    tracep->declBus(c+10,"l2_fill_addr", false,-1, 31,0);
    tracep->declArray(c+11,"l2_fill_data", false,-1, 127,0);
    tracep->declBit(c+15,"l2_fill_mark_valid", false,-1);
    tracep->declArray(c+68,"l3_r_block", false,-1, 127,0);
    tracep->declBit(c+72,"l3_hit", false,-1);
    tracep->declBit(c+16,"l3_fill_en", false,-1);
    tracep->declBus(c+17,"l3_fill_addr", false,-1, 31,0);
    tracep->declArray(c+18,"l3_fill_data", false,-1, 127,0);
    tracep->declBit(c+22,"l3_fill_mark_valid", false,-1);
    tracep->declBus(c+73,"ram_addr", false,-1, 31,0);
    tracep->declBus(c+74,"ram_r_data", false,-1, 31,0);
    tracep->declBus(c+148,"ram_w_data", false,-1, 31,0);
    tracep->declBus(c+23,"state", false,-1, 0,0);
    tracep->declBus(c+24,"saved_addr", false,-1, 31,0);
    tracep->declBus(c+25,"saved_word_index", false,-1, 1,0);
    tracep->declBus(c+26,"fill_count", false,-1, 1,0);
    tracep->declArray(c+27,"block_buf", false,-1, 127,0);
    tracep->declBit(c+31,"resp_valid", false,-1);
    tracep->declBus(c+32,"resp_word_index", false,-1, 1,0);
    tracep->declBit(c+33,"last_read_hit", false,-1);
    tracep->declBus(c+75,"resp_data_comb", false,-1, 31,0);
    tracep->pushNamePrefix("u_l1 ");
    tracep->declBus(c+163,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+163,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+168,"CACHE_SIZE", false,-1, 31,0);
    tracep->declBus(c+164,"LINE_SIZE", false,-1, 31,0);
    tracep->declBus(c+169,"WAYS", false,-1, 31,0);
    tracep->declBit(c+143,"clk", false,-1);
    tracep->declBit(c+144,"rst", false,-1);
    tracep->declBit(c+145,"mem_valid", false,-1);
    tracep->declBit(c+146,"mem_we", false,-1);
    tracep->declBus(c+147,"mem_addr", false,-1, 31,0);
    tracep->declBus(c+148,"mem_w_data", false,-1, 31,0);
    tracep->declBus(c+149,"mem_byte_en", false,-1, 3,0);
    tracep->declBus(c+61,"mem_r_data", false,-1, 31,0);
    tracep->declBit(c+62,"cache_hit", false,-1);
    tracep->declBit(c+2,"fill_en", false,-1);
    tracep->declBus(c+3,"fill_addr", false,-1, 31,0);
    tracep->declArray(c+4,"fill_data", false,-1, 127,0);
    tracep->declBit(c+8,"fill_mark_valid", false,-1);
    tracep->declBus(c+170,"LINES", false,-1, 31,0);
    tracep->declBus(c+166,"SETS", false,-1, 31,0);
    tracep->declBus(c+165,"OFFSET_BITS", false,-1, 31,0);
    tracep->declBus(c+171,"SET_BITS", false,-1, 31,0);
    tracep->declBus(c+172,"TAG_BITS", false,-1, 31,0);
    tracep->declBus(c+165,"BYTES_PER_WORD", false,-1, 31,0);
    tracep->declBus(c+165,"WORDS_PER_LINE", false,-1, 31,0);
    tracep->declBus(c+167,"WORD_SEL_BITS", false,-1, 31,0);
    tracep->declBus(c+166,"LINE_BITS", false,-1, 31,0);
    tracep->declBus(c+173,"WAY_BITS", false,-1, 31,0);
    tracep->declBus(c+155,"mem_tag", false,-1, 20,0);
    tracep->declBus(c+156,"mem_set", false,-1, 6,0);
    tracep->declBus(c+157,"mem_off", false,-1, 3,0);
    tracep->declBus(c+158,"mem_word_index", false,-1, 1,0);
    tracep->declBus(c+76,"way_hit", false,-1, 1,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declArray(c+77+i*4,"way_data", true,(i+0), 127,0);
    }
    tracep->declBus(c+61,"selected_word", false,-1, 31,0);
    tracep->declBus(c+34,"fill_tag", false,-1, 20,0);
    tracep->declBus(c+35,"fill_set", false,-1, 6,0);
    tracep->declBus(c+36,"repl_way", false,-1, 0,0);
    tracep->declBus(c+85,"byte_mask", false,-1, 31,0);
    tracep->declBus(c+86,"masked_write", false,-1, 31,0);
    tracep->declBus(c+37,"s", false,-1, 31,0);
    tracep->declBus(c+38,"w", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+174,"w", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+174,"w", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+174,"w", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+175,"b", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->declBus(c+39,"ww", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk6 ");
    tracep->declBus(c+40,"cur_word", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("u_l2 ");
    tracep->declBus(c+163,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+163,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+176,"CACHE_SIZE", false,-1, 31,0);
    tracep->declBus(c+164,"LINE_SIZE", false,-1, 31,0);
    tracep->declBus(c+177,"WAYS", false,-1, 31,0);
    tracep->declBit(c+143,"clk", false,-1);
    tracep->declBit(c+144,"rst", false,-1);
    tracep->declBit(c+145,"mem_valid", false,-1);
    tracep->declBit(c+146,"mem_we", false,-1);
    tracep->declBus(c+147,"mem_addr", false,-1, 31,0);
    tracep->declBus(c+148,"mem_w_data", false,-1, 31,0);
    tracep->declBus(c+149,"mem_byte_en", false,-1, 3,0);
    tracep->declArray(c+63,"mem_r_data", false,-1, 127,0);
    tracep->declBit(c+67,"cache_hit", false,-1);
    tracep->declBit(c+9,"fill_en", false,-1);
    tracep->declBus(c+10,"fill_addr", false,-1, 31,0);
    tracep->declArray(c+11,"fill_data", false,-1, 127,0);
    tracep->declBit(c+15,"fill_mark_valid", false,-1);
    tracep->declBus(c+178,"LINES", false,-1, 31,0);
    tracep->declBus(c+170,"SETS", false,-1, 31,0);
    tracep->declBus(c+165,"OFFSET_BITS", false,-1, 31,0);
    tracep->declBus(c+179,"SET_BITS", false,-1, 31,0);
    tracep->declBus(c+180,"TAG_BITS", false,-1, 31,0);
    tracep->declBus(c+165,"BYTES_PER_WORD", false,-1, 31,0);
    tracep->declBus(c+165,"WORDS_PER_LINE", false,-1, 31,0);
    tracep->declBus(c+167,"WORD_SEL_BITS", false,-1, 31,0);
    tracep->declBus(c+166,"LINE_BITS", false,-1, 31,0);
    tracep->declBus(c+167,"WAY_BITS", false,-1, 31,0);
    tracep->declBus(c+159,"mem_tag", false,-1, 19,0);
    tracep->declBus(c+160,"mem_set", false,-1, 7,0);
    tracep->declBus(c+157,"mem_off", false,-1, 3,0);
    tracep->declBus(c+158,"mem_word_index", false,-1, 1,0);
    tracep->declBus(c+87,"way_hit", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declArray(c+88+i*4,"way_data", true,(i+0), 127,0);
    }
    tracep->declArray(c+63,"selected_line", false,-1, 127,0);
    tracep->declBus(c+41,"fill_tag", false,-1, 19,0);
    tracep->declBus(c+42,"fill_set", false,-1, 7,0);
    tracep->declBus(c+43,"repl_way", false,-1, 1,0);
    tracep->declBus(c+104,"byte_mask", false,-1, 31,0);
    tracep->declBus(c+105,"masked_write", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+175,"w", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+175,"w", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+175,"b", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+175,"w", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->declBus(c+44,"s", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk6 ");
    tracep->declBus(c+45,"w", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk7 ");
    tracep->declBus(c+46,"w", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk8 ");
    tracep->declBus(c+47,"cur_word", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("u_l3 ");
    tracep->declBus(c+163,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+163,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+181,"CACHE_SIZE", false,-1, 31,0);
    tracep->declBus(c+164,"LINE_SIZE", false,-1, 31,0);
    tracep->declBus(c+182,"WAYS", false,-1, 31,0);
    tracep->declBit(c+143,"clk", false,-1);
    tracep->declBit(c+144,"rst", false,-1);
    tracep->declBit(c+145,"mem_valid", false,-1);
    tracep->declBit(c+146,"mem_we", false,-1);
    tracep->declBus(c+147,"mem_addr", false,-1, 31,0);
    tracep->declBus(c+148,"mem_w_data", false,-1, 31,0);
    tracep->declBus(c+149,"mem_byte_en", false,-1, 3,0);
    tracep->declArray(c+68,"mem_r_data", false,-1, 127,0);
    tracep->declBit(c+72,"cache_hit", false,-1);
    tracep->declBit(c+16,"fill_en", false,-1);
    tracep->declBus(c+17,"fill_addr", false,-1, 31,0);
    tracep->declArray(c+18,"fill_data", false,-1, 127,0);
    tracep->declBit(c+22,"fill_mark_valid", false,-1);
    tracep->declBus(c+183,"LINES", false,-1, 31,0);
    tracep->declBus(c+184,"SETS", false,-1, 31,0);
    tracep->declBus(c+165,"OFFSET_BITS", false,-1, 31,0);
    tracep->declBus(c+185,"SET_BITS", false,-1, 31,0);
    tracep->declBus(c+186,"TAG_BITS", false,-1, 31,0);
    tracep->declBus(c+165,"BYTES_PER_WORD", false,-1, 31,0);
    tracep->declBus(c+165,"WORDS_PER_LINE", false,-1, 31,0);
    tracep->declBus(c+167,"WORD_SEL_BITS", false,-1, 31,0);
    tracep->declBus(c+166,"LINE_BITS", false,-1, 31,0);
    tracep->declBus(c+187,"WAY_BITS", false,-1, 31,0);
    tracep->declBus(c+161,"mem_tag", false,-1, 18,0);
    tracep->declBus(c+162,"mem_set", false,-1, 8,0);
    tracep->declBus(c+157,"mem_off", false,-1, 3,0);
    tracep->declBus(c+158,"mem_word_index", false,-1, 1,0);
    tracep->declBus(c+106,"way_hit", false,-1, 7,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declArray(c+107+i*4,"way_data", true,(i+0), 127,0);
    }
    tracep->declArray(c+68,"selected_line", false,-1, 127,0);
    tracep->declBus(c+48,"fill_tag", false,-1, 18,0);
    tracep->declBus(c+49,"fill_set", false,-1, 8,0);
    tracep->declBus(c+50,"repl_way", false,-1, 2,0);
    tracep->declBus(c+139,"byte_mask", false,-1, 31,0);
    tracep->declBus(c+140,"masked_write", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+188,"w", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+188,"w", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+175,"b", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+188,"w", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->declBus(c+51,"s", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk6 ");
    tracep->declBus(c+52,"w", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk7 ");
    tracep->declBus(c+53,"w", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk8 ");
    tracep->declBus(c+54,"cur_word", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("u_ram ");
    tracep->declBus(c+163,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+182,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+189,"SIZE", false,-1, 31,0);
    tracep->declBus(c+73,"addr", false,-1, 31,0);
    tracep->declBus(c+148,"write_data", false,-1, 31,0);
    tracep->declBit(c+143,"clk", false,-1);
    tracep->declBit(c+146,"write_enable", false,-1);
    tracep->declBus(c+149,"byte_en", false,-1, 3,0);
    tracep->declBus(c+74,"read_data", false,-1, 31,0);
    tracep->declBus(c+141,"index", false,-1, 16,0);
    tracep->declBit(c+142,"unused_upper_addr", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+55,"any_hit", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declArray(c+56,"block_next", false,-1, 127,0);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+60,"base", false,-1, 31,0);
    tracep->popNamePrefix(3);
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
    bufp->fullIData(oldp+1,(vlSelf->mmu__DOT__u_ram__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+2,(vlSelf->mmu__DOT__l1_fill_en));
    bufp->fullIData(oldp+3,(vlSelf->mmu__DOT__l1_fill_addr),32);
    bufp->fullWData(oldp+4,(vlSelf->mmu__DOT__l1_fill_data),128);
    bufp->fullBit(oldp+8,(vlSelf->mmu__DOT__l1_fill_mark_valid));
    bufp->fullBit(oldp+9,(vlSelf->mmu__DOT__l2_fill_en));
    bufp->fullIData(oldp+10,(vlSelf->mmu__DOT__l2_fill_addr),32);
    bufp->fullWData(oldp+11,(vlSelf->mmu__DOT__l2_fill_data),128);
    bufp->fullBit(oldp+15,(vlSelf->mmu__DOT__l2_fill_mark_valid));
    bufp->fullBit(oldp+16,(vlSelf->mmu__DOT__l3_fill_en));
    bufp->fullIData(oldp+17,(vlSelf->mmu__DOT__l3_fill_addr),32);
    bufp->fullWData(oldp+18,(vlSelf->mmu__DOT__l3_fill_data),128);
    bufp->fullBit(oldp+22,(vlSelf->mmu__DOT__l3_fill_mark_valid));
    bufp->fullBit(oldp+23,(vlSelf->mmu__DOT__state));
    bufp->fullIData(oldp+24,(vlSelf->mmu__DOT__saved_addr),32);
    bufp->fullCData(oldp+25,(vlSelf->mmu__DOT__saved_word_index),2);
    bufp->fullCData(oldp+26,(vlSelf->mmu__DOT__fill_count),2);
    bufp->fullWData(oldp+27,(vlSelf->mmu__DOT__block_buf),128);
    bufp->fullBit(oldp+31,(vlSelf->mmu__DOT__resp_valid));
    bufp->fullCData(oldp+32,(vlSelf->mmu__DOT__resp_word_index),2);
    bufp->fullBit(oldp+33,(vlSelf->mmu__DOT__last_read_hit));
    bufp->fullIData(oldp+34,((vlSelf->mmu__DOT__l1_fill_addr 
                              >> 0xbU)),21);
    bufp->fullCData(oldp+35,((0x7fU & (vlSelf->mmu__DOT__l1_fill_addr 
                                       >> 4U))),7);
    bufp->fullBit(oldp+36,(vlSelf->mmu__DOT__u_l1__DOT__repl_way));
    bufp->fullIData(oldp+37,(vlSelf->mmu__DOT__u_l1__DOT__s),32);
    bufp->fullIData(oldp+38,(vlSelf->mmu__DOT__u_l1__DOT__w),32);
    bufp->fullIData(oldp+39,(vlSelf->mmu__DOT__u_l1__DOT__unnamedblk5__DOT__ww),32);
    bufp->fullIData(oldp+40,(vlSelf->mmu__DOT__u_l1__DOT__unnamedblk5__DOT__unnamedblk6__DOT__cur_word),32);
    bufp->fullIData(oldp+41,((vlSelf->mmu__DOT__l2_fill_addr 
                              >> 0xcU)),20);
    bufp->fullCData(oldp+42,((0xffU & (vlSelf->mmu__DOT__l2_fill_addr 
                                       >> 4U))),8);
    bufp->fullCData(oldp+43,(vlSelf->mmu__DOT__u_l2__DOT__repl_way),2);
    bufp->fullIData(oldp+44,(vlSelf->mmu__DOT__u_l2__DOT__unnamedblk5__DOT__s),32);
    bufp->fullIData(oldp+45,(vlSelf->mmu__DOT__u_l2__DOT__unnamedblk5__DOT__unnamedblk6__DOT__w),32);
    bufp->fullIData(oldp+46,(vlSelf->mmu__DOT__u_l2__DOT__unnamedblk7__DOT__w),32);
    bufp->fullIData(oldp+47,(vlSelf->mmu__DOT__u_l2__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word),32);
    bufp->fullIData(oldp+48,((vlSelf->mmu__DOT__l3_fill_addr 
                              >> 0xdU)),19);
    bufp->fullSData(oldp+49,((0x1ffU & (vlSelf->mmu__DOT__l3_fill_addr 
                                        >> 4U))),9);
    bufp->fullCData(oldp+50,(vlSelf->mmu__DOT__u_l3__DOT__repl_way),3);
    bufp->fullIData(oldp+51,(vlSelf->mmu__DOT__u_l3__DOT__unnamedblk5__DOT__s),32);
    bufp->fullIData(oldp+52,(vlSelf->mmu__DOT__u_l3__DOT__unnamedblk5__DOT__unnamedblk6__DOT__w),32);
    bufp->fullIData(oldp+53,(vlSelf->mmu__DOT__u_l3__DOT__unnamedblk7__DOT__w),32);
    bufp->fullIData(oldp+54,(vlSelf->mmu__DOT__u_l3__DOT__unnamedblk7__DOT__unnamedblk8__DOT__cur_word),32);
    bufp->fullBit(oldp+55,(vlSelf->mmu__DOT__unnamedblk1__DOT__any_hit));
    bufp->fullWData(oldp+56,(vlSelf->mmu__DOT__unnamedblk2__DOT__block_next),128);
    bufp->fullIData(oldp+60,(vlSelf->mmu__DOT__unnamedblk2__DOT__unnamedblk3__DOT__base),32);
    bufp->fullIData(oldp+61,(vlSelf->mmu__DOT__u_l1__DOT__selected_word),32);
    bufp->fullBit(oldp+62,((0U != (IData)(vlSelf->mmu__DOT__u_l1__DOT__way_hit))));
    bufp->fullWData(oldp+63,(vlSelf->mmu__DOT__u_l2__DOT__selected_line),128);
    bufp->fullBit(oldp+67,((0U != (IData)(vlSelf->mmu__DOT__u_l2__DOT__way_hit))));
    bufp->fullWData(oldp+68,(vlSelf->mmu__DOT__u_l3__DOT__selected_line),128);
    bufp->fullBit(oldp+72,((0U != (IData)(vlSelf->mmu__DOT__u_l3__DOT__way_hit))));
    bufp->fullIData(oldp+73,(vlSelf->mmu__DOT__ram_addr),32);
    bufp->fullIData(oldp+74,(vlSelf->mmu__DOT__ram_r_data),32);
    bufp->fullIData(oldp+75,(vlSelf->mmu__DOT__resp_data_comb),32);
    bufp->fullCData(oldp+76,(vlSelf->mmu__DOT__u_l1__DOT__way_hit),2);
    bufp->fullWData(oldp+77,(vlSelf->mmu__DOT__u_l1__DOT__way_data[0]),128);
    bufp->fullWData(oldp+81,(vlSelf->mmu__DOT__u_l1__DOT__way_data[1]),128);
    bufp->fullIData(oldp+85,(vlSelf->mmu__DOT__u_l1__DOT__byte_mask),32);
    bufp->fullIData(oldp+86,(vlSelf->mmu__DOT__u_l1__DOT__masked_write),32);
    bufp->fullCData(oldp+87,(vlSelf->mmu__DOT__u_l2__DOT__way_hit),4);
    bufp->fullWData(oldp+88,(vlSelf->mmu__DOT__u_l2__DOT__way_data[0]),128);
    bufp->fullWData(oldp+92,(vlSelf->mmu__DOT__u_l2__DOT__way_data[1]),128);
    bufp->fullWData(oldp+96,(vlSelf->mmu__DOT__u_l2__DOT__way_data[2]),128);
    bufp->fullWData(oldp+100,(vlSelf->mmu__DOT__u_l2__DOT__way_data[3]),128);
    bufp->fullIData(oldp+104,(vlSelf->mmu__DOT__u_l2__DOT__byte_mask),32);
    bufp->fullIData(oldp+105,(vlSelf->mmu__DOT__u_l2__DOT__masked_write),32);
    bufp->fullCData(oldp+106,(vlSelf->mmu__DOT__u_l3__DOT__way_hit),8);
    bufp->fullWData(oldp+107,(vlSelf->mmu__DOT__u_l3__DOT__way_data[0]),128);
    bufp->fullWData(oldp+111,(vlSelf->mmu__DOT__u_l3__DOT__way_data[1]),128);
    bufp->fullWData(oldp+115,(vlSelf->mmu__DOT__u_l3__DOT__way_data[2]),128);
    bufp->fullWData(oldp+119,(vlSelf->mmu__DOT__u_l3__DOT__way_data[3]),128);
    bufp->fullWData(oldp+123,(vlSelf->mmu__DOT__u_l3__DOT__way_data[4]),128);
    bufp->fullWData(oldp+127,(vlSelf->mmu__DOT__u_l3__DOT__way_data[5]),128);
    bufp->fullWData(oldp+131,(vlSelf->mmu__DOT__u_l3__DOT__way_data[6]),128);
    bufp->fullWData(oldp+135,(vlSelf->mmu__DOT__u_l3__DOT__way_data[7]),128);
    bufp->fullIData(oldp+139,(vlSelf->mmu__DOT__u_l3__DOT__byte_mask),32);
    bufp->fullIData(oldp+140,(vlSelf->mmu__DOT__u_l3__DOT__masked_write),32);
    bufp->fullIData(oldp+141,((0x1ffffU & vlSelf->mmu__DOT__ram_addr)),17);
    bufp->fullBit(oldp+142,((0U != (vlSelf->mmu__DOT__ram_addr 
                                    >> 0x11U))));
    bufp->fullBit(oldp+143,(vlSelf->clk));
    bufp->fullBit(oldp+144,(vlSelf->rst));
    bufp->fullBit(oldp+145,(vlSelf->mem_valid));
    bufp->fullBit(oldp+146,(vlSelf->mem_we));
    bufp->fullIData(oldp+147,(vlSelf->mem_addr),32);
    bufp->fullIData(oldp+148,(vlSelf->mem_w_data),32);
    bufp->fullCData(oldp+149,(vlSelf->mem_byte_en),4);
    bufp->fullIData(oldp+150,(vlSelf->mem_r_data),32);
    bufp->fullBit(oldp+151,(vlSelf->mem_ready));
    bufp->fullBit(oldp+152,(vlSelf->cache_hit));
    bufp->fullCData(oldp+153,((3U & (vlSelf->mem_addr 
                                     >> 2U))),2);
    bufp->fullIData(oldp+154,((0xfffffff0U & vlSelf->mem_addr)),32);
    bufp->fullIData(oldp+155,((vlSelf->mem_addr >> 0xbU)),21);
    bufp->fullCData(oldp+156,((0x7fU & (vlSelf->mem_addr 
                                        >> 4U))),7);
    bufp->fullCData(oldp+157,((0xfU & vlSelf->mem_addr)),4);
    bufp->fullCData(oldp+158,((3U & (vlSelf->mem_addr 
                                     >> 2U))),2);
    bufp->fullIData(oldp+159,((vlSelf->mem_addr >> 0xcU)),20);
    bufp->fullCData(oldp+160,((0xffU & (vlSelf->mem_addr 
                                        >> 4U))),8);
    bufp->fullIData(oldp+161,((vlSelf->mem_addr >> 0xdU)),19);
    bufp->fullSData(oldp+162,((0x1ffU & (vlSelf->mem_addr 
                                         >> 4U))),9);
    bufp->fullIData(oldp+163,(0x20U),32);
    bufp->fullIData(oldp+164,(0x10U),32);
    bufp->fullIData(oldp+165,(4U),32);
    bufp->fullIData(oldp+166,(0x80U),32);
    bufp->fullIData(oldp+167,(2U),32);
    bufp->fullIData(oldp+168,(0x1000U),32);
    bufp->fullIData(oldp+169,(2U),32);
    bufp->fullIData(oldp+170,(0x100U),32);
    bufp->fullIData(oldp+171,(7U),32);
    bufp->fullIData(oldp+172,(0x15U),32);
    bufp->fullIData(oldp+173,(1U),32);
    bufp->fullIData(oldp+174,(2U),32);
    bufp->fullIData(oldp+175,(4U),32);
    bufp->fullIData(oldp+176,(0x4000U),32);
    bufp->fullIData(oldp+177,(4U),32);
    bufp->fullIData(oldp+178,(0x400U),32);
    bufp->fullIData(oldp+179,(8U),32);
    bufp->fullIData(oldp+180,(0x14U),32);
    bufp->fullIData(oldp+181,(0x10000U),32);
    bufp->fullIData(oldp+182,(8U),32);
    bufp->fullIData(oldp+183,(0x1000U),32);
    bufp->fullIData(oldp+184,(0x200U),32);
    bufp->fullIData(oldp+185,(9U),32);
    bufp->fullIData(oldp+186,(0x13U),32);
    bufp->fullIData(oldp+187,(3U),32);
    bufp->fullIData(oldp+188,(8U),32);
    bufp->fullIData(oldp+189,(0x11U),32);
}
