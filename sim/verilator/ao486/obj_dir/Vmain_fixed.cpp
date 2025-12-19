// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmain_fixed__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vmain_fixed::Vmain_fixed(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vmain_fixed__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , interrupt_do{vlSymsp->TOP.interrupt_do}
    , interrupt_vector{vlSymsp->TOP.interrupt_vector}
    , interrupt_done{vlSymsp->TOP.interrupt_done}
    , avm_byteenable{vlSymsp->TOP.avm_byteenable}
    , avm_burstcount{vlSymsp->TOP.avm_burstcount}
    , avm_write{vlSymsp->TOP.avm_write}
    , avm_read{vlSymsp->TOP.avm_read}
    , avm_waitrequest{vlSymsp->TOP.avm_waitrequest}
    , avm_readdatavalid{vlSymsp->TOP.avm_readdatavalid}
    , avalon_io_byteenable{vlSymsp->TOP.avalon_io_byteenable}
    , avalon_io_read{vlSymsp->TOP.avalon_io_read}
    , avalon_io_readdatavalid{vlSymsp->TOP.avalon_io_readdatavalid}
    , avalon_io_write{vlSymsp->TOP.avalon_io_write}
    , avalon_io_waitrequest{vlSymsp->TOP.avalon_io_waitrequest}
    , avalon_io_address{vlSymsp->TOP.avalon_io_address}
    , avm_address{vlSymsp->TOP.avm_address}
    , avm_writedata{vlSymsp->TOP.avm_writedata}
    , avm_readdata{vlSymsp->TOP.avm_readdata}
    , avalon_io_readdata{vlSymsp->TOP.avalon_io_readdata}
    , avalon_io_writedata{vlSymsp->TOP.avalon_io_writedata}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vmain_fixed::Vmain_fixed(const char* _vcname__)
    : Vmain_fixed(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vmain_fixed::~Vmain_fixed() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vmain_fixed___024root___eval_debug_assertions(Vmain_fixed___024root* vlSelf);
#endif  // VL_DEBUG
void Vmain_fixed___024root___eval_static(Vmain_fixed___024root* vlSelf);
void Vmain_fixed___024root___eval_initial(Vmain_fixed___024root* vlSelf);
void Vmain_fixed___024root___eval_settle(Vmain_fixed___024root* vlSelf);
void Vmain_fixed___024root___eval(Vmain_fixed___024root* vlSelf);

void Vmain_fixed::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmain_fixed::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vmain_fixed___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vmain_fixed___024root___eval_static(&(vlSymsp->TOP));
        Vmain_fixed___024root___eval_initial(&(vlSymsp->TOP));
        Vmain_fixed___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vmain_fixed___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vmain_fixed::eventsPending() { return false; }

uint64_t Vmain_fixed::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vmain_fixed::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vmain_fixed___024root___eval_final(Vmain_fixed___024root* vlSelf);

VL_ATTR_COLD void Vmain_fixed::final() {
    Vmain_fixed___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vmain_fixed::hierName() const { return vlSymsp->name(); }
const char* Vmain_fixed::modelName() const { return "Vmain_fixed"; }
unsigned Vmain_fixed::threads() const { return 1; }
void Vmain_fixed::prepareClone() const { contextp()->prepareClone(); }
void Vmain_fixed::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vmain_fixed::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vmain_fixed___024root__trace_decl_types(VerilatedVcd* tracep);

void Vmain_fixed___024root__trace_init_top(Vmain_fixed___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vmain_fixed___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmain_fixed___024root*>(voidSelf);
    Vmain_fixed__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vmain_fixed___024root__trace_decl_types(tracep);
    Vmain_fixed___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vmain_fixed___024root__trace_register(Vmain_fixed___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vmain_fixed::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vmain_fixed::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vmain_fixed___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
