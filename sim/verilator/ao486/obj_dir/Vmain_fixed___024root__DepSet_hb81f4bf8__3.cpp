// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmain_fixed.h for the primary calling header

#include "Vmain_fixed__pch.h"
#include "Vmain_fixed___024root.h"

void Vmain_fixed___024root___eval_triggers__act(Vmain_fixed___024root* vlSelf);
void Vmain_fixed___024root___eval_act(Vmain_fixed___024root* vlSelf);

bool Vmain_fixed___024root___eval_phase__act(Vmain_fixed___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain_fixed__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_fixed___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vmain_fixed___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vmain_fixed___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vmain_fixed___024root___eval_nba(Vmain_fixed___024root* vlSelf);

bool Vmain_fixed___024root___eval_phase__nba(Vmain_fixed___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain_fixed__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_fixed___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vmain_fixed___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmain_fixed___024root___dump_triggers__ico(Vmain_fixed___024root* vlSelf);
#endif  // VL_DEBUG
bool Vmain_fixed___024root___eval_phase__ico(Vmain_fixed___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmain_fixed___024root___dump_triggers__nba(Vmain_fixed___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmain_fixed___024root___dump_triggers__act(Vmain_fixed___024root* vlSelf);
#endif  // VL_DEBUG

void Vmain_fixed___024root___eval(Vmain_fixed___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain_fixed__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_fixed___024root___eval\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vmain_fixed___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("main_fixed.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vmain_fixed___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vmain_fixed___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("main_fixed.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vmain_fixed___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("main_fixed.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vmain_fixed___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vmain_fixed___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vmain_fixed___024root___eval_debug_assertions(Vmain_fixed___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain_fixed__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_fixed___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelfRef.rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY((vlSelfRef.interrupt_do & 0xfeU))) {
        Verilated::overWidthError("interrupt_do");}
    if (VL_UNLIKELY((vlSelfRef.avm_waitrequest & 0xfeU))) {
        Verilated::overWidthError("avm_waitrequest");}
    if (VL_UNLIKELY((vlSelfRef.avm_readdatavalid & 0xfeU))) {
        Verilated::overWidthError("avm_readdatavalid");}
    if (VL_UNLIKELY((vlSelfRef.avalon_io_readdatavalid 
                     & 0xfeU))) {
        Verilated::overWidthError("avalon_io_readdatavalid");}
    if (VL_UNLIKELY((vlSelfRef.avalon_io_waitrequest 
                     & 0xfeU))) {
        Verilated::overWidthError("avalon_io_waitrequest");}
}
#endif  // VL_DEBUG
