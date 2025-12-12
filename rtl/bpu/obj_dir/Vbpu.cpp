// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vbpu.h"
#include "Vbpu__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vbpu::Vbpu(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vbpu__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , eq{vlSymsp->TOP.eq}
    , jump{vlSymsp->TOP.jump}
    , branch{vlSymsp->TOP.branch}
    , branch_predicted_e{vlSymsp->TOP.branch_predicted_e}
    , branch_predicted{vlSymsp->TOP.branch_predicted}
    , flush_o{vlSymsp->TOP.flush_o}
    , ins{vlSymsp->TOP.ins}
    , pc{vlSymsp->TOP.pc}
    , pc_tu{vlSymsp->TOP.pc_tu}
    , pcplusimm_tu{vlSymsp->TOP.pcplusimm_tu}
    , pc_circuit{vlSymsp->TOP.pc_circuit}
    , pc_next{vlSymsp->TOP.pc_next}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vbpu::Vbpu(const char* _vcname__)
    : Vbpu(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vbpu::~Vbpu() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vbpu___024root___eval_initial(Vbpu___024root* vlSelf);
void Vbpu___024root___eval_settle(Vbpu___024root* vlSelf);
void Vbpu___024root___eval(Vbpu___024root* vlSelf);
#ifdef VL_DEBUG
void Vbpu___024root___eval_debug_assertions(Vbpu___024root* vlSelf);
#endif  // VL_DEBUG
void Vbpu___024root___final(Vbpu___024root* vlSelf);

static void _eval_initial_loop(Vbpu__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vbpu___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vbpu___024root___eval_settle(&(vlSymsp->TOP));
        Vbpu___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vbpu::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vbpu::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vbpu___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vbpu___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vbpu::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vbpu::final() {
    Vbpu___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vbpu::hierName() const { return vlSymsp->name(); }
const char* Vbpu::modelName() const { return "Vbpu"; }
unsigned Vbpu::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vbpu::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vbpu___024root__trace_init_top(Vbpu___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vbpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vbpu___024root*>(voidSelf);
    Vbpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vbpu___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vbpu___024root__trace_register(Vbpu___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vbpu::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vbpu___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
