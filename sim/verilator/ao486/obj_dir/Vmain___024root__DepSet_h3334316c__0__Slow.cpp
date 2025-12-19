// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmain.h for the primary calling header

#include "Vmain__pch.h"
#include "Vmain___024root.h"

VL_ATTR_COLD void Vmain___024root___eval_static__TOP(Vmain___024root* vlSelf);
VL_ATTR_COLD void Vmain___024root____Vm_traceActivitySetAll(Vmain___024root* vlSelf);

VL_ATTR_COLD void Vmain___024root___eval_static(Vmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vmain___024root___eval_static__TOP(vlSelf);
    Vmain___024root____Vm_traceActivitySetAll(vlSelf);
}

VL_ATTR_COLD void Vmain___024root___eval_static__TOP(Vmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_static__TOP\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_to_icache_fifo_inst__DOT__dcache_to_icache_fifo_inst__DOT__rd_index = 0U;
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_to_icache_fifo_inst__DOT__dcache_to_icache_fifo_inst__DOT__wr_index = 0U;
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__prefetch_fifo_inst__DOT__prefetch_fifo_inst__DOT__rd_index = 0U;
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__prefetch_fifo_inst__DOT__prefetch_fifo_inst__DOT__wr_index = 0U;
}

VL_ATTR_COLD void Vmain___024root___eval_initial(Vmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
}

VL_ATTR_COLD void Vmain___024root___eval_final(Vmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmain___024root___dump_triggers__stl(Vmain___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vmain___024root___eval_phase__stl(Vmain___024root* vlSelf);

VL_ATTR_COLD void Vmain___024root___eval_settle(Vmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_settle\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vmain___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("main_fixed.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vmain___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmain___024root___dump_triggers__stl(Vmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___dump_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmain___024root___stl_sequent__TOP__0(Vmain___024root* vlSelf);
VL_ATTR_COLD void Vmain___024root___stl_sequent__TOP__1(Vmain___024root* vlSelf);
VL_ATTR_COLD void Vmain___024root___stl_sequent__TOP__2(Vmain___024root* vlSelf);

VL_ATTR_COLD void Vmain___024root___eval_stl(Vmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___eval_stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vmain___024root___stl_sequent__TOP__0(vlSelf);
        Vmain___024root____Vm_traceActivitySetAll(vlSelf);
        Vmain___024root___stl_sequent__TOP__1(vlSelf);
        Vmain___024root___stl_sequent__TOP__2(vlSelf);
    }
}

VL_ATTR_COLD void Vmain___024root___stl_sequent__TOP__0(Vmain___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain___024root___stl_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT____VdfgRegularize_h694aed34_0_12;
    main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT____VdfgRegularize_h694aed34_0_12 = 0;
    CData/*0:0*/ main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT____VdfgRegularize_h94f45732_0_14;
    main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT____VdfgRegularize_h94f45732_0_14 = 0;
    CData/*0:0*/ main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT____VdfgRegularize_h94f45732_0_76;
    main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT____VdfgRegularize_h94f45732_0_76 = 0;
    CData/*0:0*/ main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_15;
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_15 = 0;
    CData/*0:0*/ main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_24;
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_24 = 0;
    CData/*0:0*/ main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_31;
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_31 = 0;
    CData/*0:0*/ main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_32;
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_32 = 0;
    CData/*0:0*/ main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_35;
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_35 = 0;
    CData/*0:0*/ main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_38;
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_38 = 0;
    CData/*0:0*/ main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_47;
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_47 = 0;
    CData/*0:0*/ main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_48;
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_48 = 0;
    CData/*0:0*/ main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_49;
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_49 = 0;
    CData/*0:0*/ main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_51;
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_51 = 0;
    CData/*0:0*/ main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_53;
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_53 = 0;
    CData/*0:0*/ main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_55;
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_55 = 0;
    CData/*0:0*/ main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_59;
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_59 = 0;
    CData/*0:0*/ main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_60;
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_60 = 0;
    CData/*0:0*/ main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_64;
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_64 = 0;
    CData/*0:0*/ main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_78;
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_78 = 0;
    CData/*0:0*/ main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_80;
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_80 = 0;
    CData/*0:0*/ main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_83;
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_83 = 0;
    CData/*0:0*/ main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_85;
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_85 = 0;
    CData/*0:0*/ main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_88;
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_88 = 0;
    CData/*0:0*/ main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_89;
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_89 = 0;
    CData/*0:0*/ main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_92;
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_92 = 0;
    CData/*0:0*/ main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_95;
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_95 = 0;
    CData/*0:0*/ main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_96;
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_96 = 0;
    CData/*0:0*/ main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_100;
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_100 = 0;
    CData/*0:0*/ main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_108;
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_108 = 0;
    CData/*0:0*/ main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_109;
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_109 = 0;
    CData/*0:0*/ main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_112;
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_112 = 0;
    CData/*0:0*/ main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_114;
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_114 = 0;
    CData/*0:0*/ main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_12;
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_12 = 0;
    CData/*0:0*/ main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_14;
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_14 = 0;
    CData/*0:0*/ main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_54;
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_54 = 0;
    CData/*0:0*/ main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_58;
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_58 = 0;
    CData/*0:0*/ main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_64;
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_64 = 0;
    CData/*0:0*/ main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_117;
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_117 = 0;
    CData/*0:0*/ main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_121;
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_121 = 0;
    CData/*0:0*/ main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_320;
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_320 = 0;
    QData/*63:0*/ main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT____VdfgRegularize_hf83a959e_0_7;
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT____VdfgRegularize_hf83a959e_0_7 = 0;
    CData/*0:0*/ main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__exe_condition_inst__DOT____VdfgRegularize_hc2c49180_0_0;
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__exe_condition_inst__DOT____VdfgRegularize_hc2c49180_0_0 = 0;
    CData/*0:0*/ main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__exe_condition_inst__DOT____VdfgRegularize_hc2c49180_0_1;
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__exe_condition_inst__DOT____VdfgRegularize_hc2c49180_0_1 = 0;
    CData/*0:0*/ main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__exe_condition_inst__DOT____VdfgRegularize_hc2c49180_0_2;
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__exe_condition_inst__DOT____VdfgRegularize_hc2c49180_0_2 = 0;
    CData/*0:0*/ main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_35;
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_35 = 0;
    IData/*31:0*/ main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_152;
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_152 = 0;
    CData/*0:0*/ main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_194;
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_194 = 0;
    CData/*0:0*/ main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_256;
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_256 = 0;
    CData/*0:0*/ main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_257;
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_257 = 0;
    CData/*0:0*/ main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_258;
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_258 = 0;
    CData/*0:0*/ main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_259;
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_259 = 0;
    CData/*0:0*/ main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_260;
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_260 = 0;
    CData/*0:0*/ main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_261;
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_261 = 0;
    IData/*31:0*/ main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_stack_inst__DOT____VdfgRegularize_h143f96f3_0_1;
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_stack_inst__DOT____VdfgRegularize_h143f96f3_0_1 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_0_16;
    __VdfgRegularize_hd87f99a1_0_16 = 0;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    // Body
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_146 
        = (0xf30000000000ULL | (((QData)((IData)((0xfU 
                                                  & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_1 
                                                     >> 0xcU)))) 
                                 << 0x20U) | (QData)((IData)(
                                                             (0xffffU 
                                                              | (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_1 
                                                                 << 0x14U))))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__prefetch_fifo_inst__DOT__q[0U] 
        = vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__prefetch_fifo_inst__DOT__prefetch_fifo_inst__DOT__mem
        [vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__prefetch_fifo_inst__DOT__prefetch_fifo_inst__DOT__rd_index][0U];
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__prefetch_fifo_inst__DOT__q[1U] 
        = vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__prefetch_fifo_inst__DOT__prefetch_fifo_inst__DOT__mem
        [vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__prefetch_fifo_inst__DOT__prefetch_fifo_inst__DOT__rd_index][1U];
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__prefetch_fifo_inst__DOT__q[2U] 
        = vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__prefetch_fifo_inst__DOT__prefetch_fifo_inst__DOT__mem
        [vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__prefetch_fifo_inst__DOT__prefetch_fifo_inst__DOT__rd_index][2U];
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__prefetch_fifo_inst__DOT__q[3U] 
        = vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__prefetch_fifo_inst__DOT__prefetch_fifo_inst__DOT__mem
        [vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__prefetch_fifo_inst__DOT__prefetch_fifo_inst__DOT__rd_index][3U];
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__prefetch_fifo_inst__DOT__q[4U] 
        = vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__prefetch_fifo_inst__DOT__prefetch_fifo_inst__DOT__mem
        [vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__prefetch_fifo_inst__DOT__prefetch_fifo_inst__DOT__rd_index][4U];
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__address_bits_transform 
        = (IData)(((0x24U == (0x7cU & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd))) 
                   & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_effective_address_inst__DOT__xlat_offset 
        = (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ebx 
           + (0xffU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__eax));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_effective_address_inst__DOT__esp_for_enter_next 
        = (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__esp 
           - (0xffffU & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                         >> 8U)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_multiply_inst__DOT__mult_start 
        = ((0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_multiply_inst__DOT__mult_counter)) 
           & ((0x36U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
              | ((0x3bU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
                 | (0x1fU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)))));
    __Vtemp_2[0U] = (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_divide_inst__DOT__div_dividend);
    __Vtemp_2[1U] = (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_divide_inst__DOT__div_dividend 
                             >> 0x20U));
    __Vtemp_2[2U] = 0U;
    __Vtemp_3[0U] = (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_divide_inst__DOT__div_divisor);
    __Vtemp_3[1U] = (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_divide_inst__DOT__div_divisor 
                             >> 0x20U));
    __Vtemp_3[2U] = 0U;
    VL_SUB_W(3, __Vtemp_4, __Vtemp_2, __Vtemp_3);
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_divide_inst__DOT__div_diff[0U] 
        = __Vtemp_4[0U];
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_divide_inst__DOT__div_diff[1U] 
        = __Vtemp_4[1U];
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_divide_inst__DOT__div_diff[2U] 
        = (1U & __Vtemp_4[2U]);
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_debug_inst__DOT__wr_debug_read_current 
        = ((0U == (0xffU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__dr7))
            ? 0U : (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_debug_read));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__dcache_control_ram_inst__DOT__invd_counter_to_reg 
        = (0xffU & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__dcache_control_ram_inst__DOT__init_done)
                     ? ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__dcache_control_ram_inst__DOT__invd_counter) 
                        + (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__dcache_control_ram_inst__DOT__state)))
                     : ((IData)(1U) + (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__dcache_control_ram_inst__DOT__invd_counter))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__icache_inst__DOT__icache_control_ram_inst__DOT__invd_counter_to_reg 
        = (0xffU & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__icache_inst__DOT__icache_control_ram_inst__DOT__init_done)
                     ? ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__icache_inst__DOT__icache_control_ram_inst__DOT__invd_counter) 
                        + (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__icache_inst__DOT__icache_control_ram_inst__DOT__state))
                     : ((IData)(1U) + (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__icache_inst__DOT__icache_control_ram_inst__DOT__invd_counter))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__dec_prefix_group_1_lock 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decode_inst__DOT__prefix_group_1_lock) 
           | ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__dec_prefix_2byte)) 
              & (IData)(((0x86U == (0xfeU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decoder[0U])) 
                         & (3U != (3U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decoder[0U] 
                                         >> 0xeU)))))));
    if (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_operand_32bit) {
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_effective_address_inst__DOT__ebp_for_enter_next 
            = (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_effective_address_inst__DOT__ebp_for_enter 
               - (IData)(4U));
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_114 
            = (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__read_data);
    } else {
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_effective_address_inst__DOT__ebp_for_enter_next 
            = (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_effective_address_inst__DOT__ebp_for_enter 
               - (IData)(2U));
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_114 
            = (0xffffU & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__read_data));
    }
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__prefetchfifo_signal_limit_do 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__prefetch_inst__DOT__limit_signaled)) 
           & (0U == vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__prefetch_inst__DOT__limit));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decode_inst__DOT__decode_commands_inst__DOT____VdfgRegularize_hb6bcbde6_0_8 
        = (IData)(((0xc6U == (0xfeU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decoder[0U])) 
                   & (0U != (7U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decoder[0U] 
                                   >> 0xbU)))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__icache_inst__DOT__icache_control_ram_inst__DOT____VdfgRegularize_h31ca9ccd_0_2 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__icache_inst__DOT__icache_control_ram_inst__DOT__init_done)) 
           & (0xffU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__icache_inst__DOT__icache_control_ram_inst__DOT__invd_counter)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__dcache_control_ram_inst__DOT____VdfgRegularize_h80593286_0_8 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__dcache_control_ram_inst__DOT__init_done)) 
           & (0xffU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__dcache_control_ram_inst__DOT__invd_counter)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_effective_address_inst__DOT__address_bits_transform_reg 
        = ((0U == (7U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                         >> 0xbU))) ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__eax
            : ((1U == (7U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                             >> 0xbU))) ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ecx
                : ((2U == (7U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                                 >> 0xbU))) ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__edx
                    : ((3U == (7U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                                     >> 0xbU))) ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ebx
                        : ((4U == (7U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                                         >> 0xbU)))
                            ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__esp
                            : ((5U == (7U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                                             >> 0xbU)))
                                ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ebp
                                : ((6U == (7U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                                                 >> 0xbU)))
                                    ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__esi
                                    : vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__edi)))))));
    if (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_operand_32bit) {
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_130 
            = vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result2;
        main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_152 
            = vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result2;
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_137 
            = vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result2;
    } else {
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_130 
            = (0xffffffU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result2);
        main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_152 
            = ((0xffff0000U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__edx) 
               | (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result 
                  >> 0x10U));
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_137 
            = ((0xffff0000U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__eax) 
               | (0xffffU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result2));
    }
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__exception_inst__DOT__exception_eip_from_wr 
        = (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__wr_eip 
           - (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__wr_consumed));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__invdcode_done 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__icache_inst__DOT__icache_control_ram_inst__DOT__state) 
           & (0xffU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__icache_inst__DOT__icache_control_ram_inst__DOT__invd_counter)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__write_burst_byteenable_1 
        = (((3U == (3U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__address)) 
            & (2U == (7U & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__length))))
            ? 1U : (((2U == (3U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__address)) 
                     & (3U == (7U & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__length))))
                     ? 1U : (((3U == (3U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__address)) 
                              & (3U == (7U & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__length))))
                              ? 3U : (((1U == (3U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__address)) 
                                       & (4U == (7U 
                                                 & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__length))))
                                       ? 1U : (((2U 
                                                 == 
                                                 (3U 
                                                  & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__address)) 
                                                & (4U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__length))))
                                                ? 3U
                                                : 7U)))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__invddata_done 
        = ((1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__dcache_control_ram_inst__DOT__state)) 
           & (0xffU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__dcache_control_ram_inst__DOT__invd_counter)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__icache_inst__DOT__partial_length_current 
        = (((7U & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__icache_inst__DOT__partial_length)) 
            > (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__icache_inst__DOT__length))
            ? (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__icache_inst__DOT__length)
            : (7U & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__icache_inst__DOT__partial_length)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__avalon_mem_inst__DOT____VdfgRegularize_hda04a1ba_0_19 
        = ((1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__avalon_mem_inst__DOT__state)) 
           & ((~ (IData)(vlSelfRef.avm_waitrequest)) 
              & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__avalon_mem_inst__DOT__counter))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__write_burst_byteenable_0 
        = (((0U == (3U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__address)) 
            & (1U == (7U & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__length))))
            ? 1U : (((1U == (3U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__address)) 
                     & (1U == (7U & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__length))))
                     ? 2U : (((2U == (3U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__address)) 
                              & (1U == (7U & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__length))))
                              ? 4U : (((0U == (3U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__address)) 
                                       & (2U == (7U 
                                                 & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__length))))
                                       ? 3U : (((1U 
                                                 == 
                                                 (3U 
                                                  & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__address)) 
                                                & (2U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__length))))
                                                ? 6U
                                                : (
                                                   ((0U 
                                                     == 
                                                     (3U 
                                                      & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__address)) 
                                                    & (3U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__length))))
                                                    ? 7U
                                                    : 
                                                   (((1U 
                                                      == 
                                                      (3U 
                                                       & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__address)) 
                                                     & (3U 
                                                        <= 
                                                        (7U 
                                                         & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__length))))
                                                     ? 0xeU
                                                     : 
                                                    (((2U 
                                                       == 
                                                       (3U 
                                                        & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__address)) 
                                                      & (2U 
                                                         <= 
                                                         (7U 
                                                          & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__length))))
                                                      ? 0xcU
                                                      : 
                                                     (((0U 
                                                        == 
                                                        (3U 
                                                         & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__address)) 
                                                       & (4U 
                                                          == 
                                                          (7U 
                                                           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__length))))
                                                       ? 0xfU
                                                       : 8U)))))))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_effective_address_inst__DOT__address_disp32 
        = ((4U == (7U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                         >> 8U))) ? ((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[1U] 
                                      << 8U) | (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                                                >> 0x18U))
            : ((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[1U] 
                << 0x10U) | (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                             >> 0x10U)));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_44 = (IData)(
                                                        (0x600U 
                                                         == 
                                                         (0xc700U 
                                                          & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U])));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_45 = (IData)(
                                                        (0x500U 
                                                         == 
                                                         (0xc700U 
                                                          & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U])));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decode_inst__DOT__decode_regs_inst__DOT__total_count 
        = (0x1fU & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decode_inst__DOT__prefix_count) 
                    + (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decode_inst__DOT__decoder_count)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_104 
        = ((3U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_1) 
           == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__cs_rpl));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_effective_address_inst__DOT__base16 
        = (0xffffU & ((0U == (7U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                                    >> 8U))) ? (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ebx 
                                                + vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__esi)
                       : ((1U == (7U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                                        >> 8U))) ? 
                          (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ebx 
                           + vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__edi)
                           : ((2U == (7U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                                            >> 8U)))
                               ? (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ebp 
                                  + vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__esi)
                               : ((3U == (7U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                                                >> 8U)))
                                   ? (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ebp 
                                      + vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__edi)
                                   : ((4U == (7U & 
                                              (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                                               >> 8U)))
                                       ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__esi
                                       : ((5U == (7U 
                                                  & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                                                     >> 8U)))
                                           ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__edi
                                           : ((6U == 
                                               (7U 
                                                & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                                                   >> 8U)))
                                               ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ebp
                                               : vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ebx))))))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT____VdfgRegularize_h694aed34_0_15 
        = ((6U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__state)) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__link_writeburst_inst__DOT__done_delayed));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decode_inst__DOT__decode_prefix_inst__DOT____VdfgRegularize_he2c8ac58_0_18 
        = ((1U == (3U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decoder[0U] 
                         >> 0xeU))) | (2U == (3U & 
                                              (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decoder[0U] 
                                               >> 0xeU))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__pflag_result 
        = (1U & (~ (1U & VL_REDXOR_8((0xffU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result)))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_233 
        = ((4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           | ((0x57U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
              | ((0x58U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
                 | (0x1dU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_207 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_dst_is_reg) 
           | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_dst_is_rm));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_209 
        = (((IData)((0x14U == (0x14U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U]))) 
            << 0x12U) | ((0x20000U & (((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                                        << 0xbU) & 
                                       (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                                        << 0x11U)) 
                                      | (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                                         << 0x10U))) 
                         | ((0x10000U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                                         << 0x10U)) 
                            | (0xffffU & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__read_data)))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__write_burst_dword_length 
        = (((2U == (7U & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__length))) 
            & (3U == (3U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__address)))
            ? 2U : (((3U == (7U & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__length))) 
                     & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__address 
                        >> 1U)) ? 2U : (((4U == (7U 
                                                 & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__length))) 
                                         & (0U != (3U 
                                                   & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__address)))
                                         ? 2U : 1U)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__write_burst_data 
        = ((0U == (3U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__address))
            ? (QData)((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__write_data))
            : ((1U == (3U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__address))
                ? ((QData)((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__write_data)) 
                   << 8U) : ((2U == (3U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__address))
                              ? ((QData)((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__write_data)) 
                                 << 0x10U) : ((QData)((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__write_data)) 
                                              << 0x18U))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_272 
        = ((1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex))
            ? (0xffffU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__edx)
            : (0xffU & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_decoder 
                                >> 8U))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT____VdfgRegularize_h94f45732_0_52 
        = (1U | (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__su) 
                  << 2U) | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__rw) 
                            << 1U)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT____VdfgRegularize_h94f45732_0_53 
        = (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__su) 
            << 2U) | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__rw) 
                      << 1U));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_176 
        = ((0x57U != (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           & ((0x58U != (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
              & (0x1dU != (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_effective_address_inst__DOT__sib_index32 
        = ((0U == (7U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                         >> 0x13U))) ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__eax
            : ((1U == (7U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                             >> 0x13U))) ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ecx
                : ((2U == (7U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                                 >> 0x13U))) ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__edx
                    : ((3U == (7U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                                     >> 0x13U))) ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ebx
                        : ((4U == (7U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                                         >> 0x13U)))
                            ? 0U : ((5U == (7U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                                                  >> 0x13U)))
                                     ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ebp
                                     : ((6U == (7U 
                                                & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                                                   >> 0x13U)))
                                         ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__esi
                                         : vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__edi)))))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__w_sub_arith 
        = ((0xbU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_arith_index)) 
           | ((0xdU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_arith_index)) 
              | (0xfU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_arith_index))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_122 
        = ((0x28U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (9U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_223 
        = ((0x62U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)));
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_260 
        = (1U & ((~ (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result 
                     >> 7U)) & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_dst 
                                >> 7U)));
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_261 
        = (1U & ((~ (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_dst 
                     >> 7U)) & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result 
                                >> 7U)));
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_258 
        = (1U & ((~ (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result 
                     >> 0xfU)) & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_dst 
                                  >> 0xfU)));
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_259 
        = (1U & ((~ (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_dst 
                     >> 0xfU)) & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result 
                                  >> 0xfU)));
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_256 
        = ((~ (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result 
               >> 0x1fU)) & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_dst 
                             >> 0x1fU));
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_257 
        = ((~ (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_dst 
               >> 0x1fU)) & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result 
                             >> 0x1fU));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__avalon_mem_inst__DOT____VdfgRegularize_hda04a1ba_0_10 
        = (7U & ((IData)(vlSelfRef.avm_burstcount) 
                 - (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__avalon_mem_inst__DOT__counter)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_187 
        = ((0x3fU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & ((3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)) 
              | (5U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__avalon_io_inst__DOT____VdfgRegularize_h5ceef672_0_7 
        = ((0x20U == (IData)(vlSelfRef.avalon_io_address))
            ? (0xffff0000U | (0xffffU & vlSelfRef.avalon_io_readdata))
            : ((0x70U == (IData)(vlSelfRef.avalon_io_address))
                ? (0xffff0000U | (0xffffU & vlSelfRef.avalon_io_readdata))
                : ((0xa0U == (IData)(vlSelfRef.avalon_io_address))
                    ? (0xffff0000U | (0xffffU & vlSelfRef.avalon_io_readdata))
                    : ((0x388U == (IData)(vlSelfRef.avalon_io_address))
                        ? (0xffff0000U | (0xffffU & vlSelfRef.avalon_io_readdata))
                        : vlSelfRef.avalon_io_readdata))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcachetoicache_accept_address 
        = (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_to_icache_fifo_inst__DOT__dcache_to_icache_fifo_inst__DOT__mem
           [vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_to_icache_fifo_inst__DOT__dcache_to_icache_fifo_inst__DOT__rd_index] 
           << 4U);
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT____VdfgRegularize_h94f45732_0_90 
        = ((2U != (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__current_type)) 
           & (3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__current_type)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_111 
        = ((0x2cU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result_signals) 
              >> 2U));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_114 
        = (IData)(((0x38U == (0x7eU & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd))) 
                   & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result_signals) 
                      >> 2U)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_285 
        = (((IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor 
                     >> 0x30U)) << 0x10U) | (0xffffU 
                                             & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_131 
        = ((0x35U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_register_inst__DOT__w_index 
        = (7U & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_dst_is_rm)
                  ? ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_decoder) 
                     >> 8U) : ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_dst_is_reg)
                                ? ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_decoder) 
                                   >> 0xbU) : ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_dst_is_implicit_reg)
                                                ? (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_decoder)
                                                : 0U))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_221 
        = ((0x5bU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           | ((0x5cU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
              | (0x5dU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__rd_req_all 
        = ((0x6dU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (7U == (7U & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_139 
        = ((0x29U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_15 
        = ((3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (5U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_299 
        = ((~ ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__wr_mutex) 
               >> 2U)) & (0x54U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_298 
        = ((~ ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__wr_mutex) 
               >> 2U)) & (0x55U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_226 
        = ((0x57U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (5U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__avalon_mem_inst__DOT____VdfgRegularize_hda04a1ba_0_17 
        = ((1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__avalon_mem_inst__DOT__state)) 
           & ((~ (IData)(vlSelfRef.avm_waitrequest)) 
              & (0U != (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__avalon_mem_inst__DOT__counter))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_108 = ((0xffff0000U 
                                                   & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ecx) 
                                                  | (0xffffU 
                                                     & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ecx 
                                                        - (IData)(1U))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_100 
        = ((0x2bU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           | (0x2aU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_284 
        = ((0x6cU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           | (0x6bU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_bit_scan_forward 
        = ((1U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__src)
            ? 0U : ((2U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__src)
                     ? 1U : ((4U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__src)
                              ? 2U : ((8U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__src)
                                       ? 3U : ((0x10U 
                                                & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__src)
                                                ? 4U
                                                : (
                                                   (0x20U 
                                                    & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__src)
                                                    ? 5U
                                                    : 
                                                   ((0x40U 
                                                     & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__src)
                                                     ? 6U
                                                     : 
                                                    ((0x80U 
                                                      & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__src)
                                                      ? 7U
                                                      : 
                                                     ((0x100U 
                                                       & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__src)
                                                       ? 8U
                                                       : 
                                                      ((0x200U 
                                                        & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__src)
                                                        ? 9U
                                                        : 
                                                       ((0x400U 
                                                         & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__src)
                                                         ? 0xaU
                                                         : 
                                                        ((0x800U 
                                                          & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__src)
                                                          ? 0xbU
                                                          : 
                                                         ((0x1000U 
                                                           & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__src)
                                                           ? 0xcU
                                                           : 
                                                          ((0x2000U 
                                                            & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__src)
                                                            ? 0xdU
                                                            : 
                                                           ((0x4000U 
                                                             & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__src)
                                                             ? 0xeU
                                                             : 
                                                            ((0x8000U 
                                                              & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__src)
                                                              ? 0xfU
                                                              : 
                                                             ((0x10000U 
                                                               & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__src)
                                                               ? 0x10U
                                                               : 
                                                              ((0x20000U 
                                                                & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__src)
                                                                ? 0x11U
                                                                : 
                                                               ((0x40000U 
                                                                 & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__src)
                                                                 ? 0x12U
                                                                 : 
                                                                ((0x80000U 
                                                                  & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__src)
                                                                  ? 0x13U
                                                                  : 
                                                                 ((0x100000U 
                                                                   & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__src)
                                                                   ? 0x14U
                                                                   : 
                                                                  ((0x200000U 
                                                                    & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__src)
                                                                    ? 0x15U
                                                                    : 
                                                                   ((0x400000U 
                                                                     & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__src)
                                                                     ? 0x16U
                                                                     : 
                                                                    ((0x800000U 
                                                                      & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__src)
                                                                      ? 0x17U
                                                                      : 
                                                                     ((0x1000000U 
                                                                       & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__src)
                                                                       ? 0x18U
                                                                       : 
                                                                      ((0x2000000U 
                                                                        & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__src)
                                                                        ? 0x19U
                                                                        : 
                                                                       ((0x4000000U 
                                                                         & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__src)
                                                                         ? 0x1aU
                                                                         : 
                                                                        ((0x8000000U 
                                                                          & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__src)
                                                                          ? 0x1bU
                                                                          : 
                                                                         ((0x10000000U 
                                                                           & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__src)
                                                                           ? 0x1cU
                                                                           : 
                                                                          ((0x20000000U 
                                                                            & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__src)
                                                                            ? 0x1dU
                                                                            : 
                                                                           ((0x40000000U 
                                                                             & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__src)
                                                                             ? 0x1eU
                                                                             : 
                                                                            ((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__src 
                                                                              >> 0x1fU)
                                                                              ? 0x1fU
                                                                              : 0U))))))))))))))))))))))))))))))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_94 
        = (0xff0fU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst);
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_139 
        = ((0x36U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_dst_is_edx_eax));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_140 
        = ((0x3bU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_dst_is_edx_eax));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_143 
        = ((0x2cU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (1U != (3U & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_decoder 
                                   >> 0xcU)))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__exe_arith_and 
        = (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst 
           & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__src);
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_cmpxchg_sub 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__eax)) 
                             - (QData)((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_bcd_condition_cf 
        = ((0x99U < (0xffU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst)) 
           | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__cflag));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_96 
        = ((0x29U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_cmpxchg_eq 
        = (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__exe_is_8bit) 
            & ((0xffU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__eax) 
               == (0xffU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst))) 
           | (((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_operand_32bit)) 
               & ((0xffffU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__eax) 
                  == (0xffffU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst))) 
              | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_operand_32bit) 
                 & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__eax 
                    == vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_155 
        = ((0x49U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_37 
        = ((4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (0xfU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_40 
        = ((5U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (2U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_41 
        = ((5U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_101 
        = ((0x1dU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (0xaU <= (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_102 
        = ((0x1eU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_103 
        = ((0x1eU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_104 
        = ((0x1eU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (2U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_105 
        = ((0x1eU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_54 
        = ((0x12U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_69 
        = ((0x21U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_cr0_reg 
        = (0x10U | (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__cr0_pg) 
                     << 0x1fU) | (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__cr0_cd) 
                                   << 0x1eU) | (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__cr0_nw) 
                                                 << 0x1dU) 
                                                | (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__cr0_am) 
                                                    << 0x12U) 
                                                   | (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__cr0_wp) 
                                                       << 0x10U) 
                                                      | ((((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__cr0_ne) 
                                                           << 5U) 
                                                          | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__cr0_ts) 
                                                             << 3U)) 
                                                         | (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__cr0_em) 
                                                             << 2U) 
                                                            | (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__cr0_mp) 
                                                                << 1U) 
                                                               | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__cr0_pe))))))))));
    if (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__prefetch_fifo_inst__DOT__second_processing) {
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__prefetchfifo_accept_data[0U] 
            = vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__prefetch_fifo_inst__DOT__second[0U];
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__prefetchfifo_accept_data[1U] 
            = vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__prefetch_fifo_inst__DOT__second[1U];
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__prefetchfifo_accept_data[2U] 
            = (0xfU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__prefetch_fifo_inst__DOT__second[2U]);
    } else {
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__prefetchfifo_accept_data[0U] 
            = vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__prefetch_fifo_inst__DOT__prefetch_fifo_inst__DOT__mem
            [vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__prefetch_fifo_inst__DOT__prefetch_fifo_inst__DOT__rd_index][0U];
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__prefetchfifo_accept_data[1U] 
            = vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__prefetch_fifo_inst__DOT__prefetch_fifo_inst__DOT__mem
            [vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__prefetch_fifo_inst__DOT__prefetch_fifo_inst__DOT__rd_index][1U];
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__prefetchfifo_accept_data[2U] 
            = (0xfU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__prefetch_fifo_inst__DOT__prefetch_fifo_inst__DOT__mem
               [vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__prefetch_fifo_inst__DOT__prefetch_fifo_inst__DOT__rd_index][2U]);
    }
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__memory_read_inst__DOT____VdfgRegularize_h2f202e7f_0_9 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__read_ac) 
           | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__read_pf));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__memory_read_inst__DOT____VdfgRegularize_h2f202e7f_0_8 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__memory_read_inst__DOT__reset_waiting) 
           & ((0x11U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__state)) 
              & (3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__current_type))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT____VdfgRegularize_h94f45732_0_82 
        = ((1U != (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__write_double_state)) 
           & (0xdU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__state)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_121 
        = ((0x28U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (8U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_185 
        = ((0x3fU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (9U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_190 
        = ((0x49U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT____VdfgRegularize_h94f45732_0_33 
        = ((0xdU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__state)) 
           & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__write_double_state)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_0 
        = ((1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_191 
        = ((0x49U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_stack_inst__DOT____VdfgRegularize_h143f96f3_0_1 
        = ((0xffff0000U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__esp) 
           | (0xffffU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__wr_stack_offset));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_28 
        = ((4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (5U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_73 
        = ((0x1cU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (0xdU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    if ((0U == (3U & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__dcache_control_ram_inst__DOT__wbinvd_counter)))) {
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__dcache_control_ram_inst__DOT__wbinvd_line[0U] 
            = vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__data_ram0_q[0U];
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__dcache_control_ram_inst__DOT__wbinvd_line[1U] 
            = vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__data_ram0_q[1U];
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__dcache_control_ram_inst__DOT__wbinvd_line[2U] 
            = vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__data_ram0_q[2U];
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__dcache_control_ram_inst__DOT__wbinvd_line[3U] 
            = vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__data_ram0_q[3U];
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__dcache_control_ram_inst__DOT__wbinvd_line[4U] 
            = vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__data_ram0_q[4U];
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__dcache_control_ram_inst__DOT__wbinvd_valid 
            = (3U == (3U & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__dcache_control_ram_inst__DOT__ram_q_a)));
    } else if ((1U == (3U & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__dcache_control_ram_inst__DOT__wbinvd_counter)))) {
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__dcache_control_ram_inst__DOT__wbinvd_line[0U] 
            = vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__data_ram1_q[0U];
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__dcache_control_ram_inst__DOT__wbinvd_line[1U] 
            = vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__data_ram1_q[1U];
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__dcache_control_ram_inst__DOT__wbinvd_line[2U] 
            = vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__data_ram1_q[2U];
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__dcache_control_ram_inst__DOT__wbinvd_line[3U] 
            = vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__data_ram1_q[3U];
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__dcache_control_ram_inst__DOT__wbinvd_line[4U] 
            = vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__data_ram1_q[4U];
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__dcache_control_ram_inst__DOT__wbinvd_valid 
            = (3U == (3U & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__dcache_control_ram_inst__DOT__ram_q_a) 
                            >> 2U)));
    } else if ((2U == (3U & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__dcache_control_ram_inst__DOT__wbinvd_counter)))) {
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__dcache_control_ram_inst__DOT__wbinvd_line[0U] 
            = vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__data_ram2_q[0U];
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__dcache_control_ram_inst__DOT__wbinvd_line[1U] 
            = vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__data_ram2_q[1U];
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__dcache_control_ram_inst__DOT__wbinvd_line[2U] 
            = vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__data_ram2_q[2U];
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__dcache_control_ram_inst__DOT__wbinvd_line[3U] 
            = vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__data_ram2_q[3U];
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__dcache_control_ram_inst__DOT__wbinvd_line[4U] 
            = vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__data_ram2_q[4U];
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__dcache_control_ram_inst__DOT__wbinvd_valid 
            = (3U == (3U & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__dcache_control_ram_inst__DOT__ram_q_a) 
                            >> 4U)));
    } else {
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__dcache_control_ram_inst__DOT__wbinvd_line[0U] 
            = vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__data_ram3_q[0U];
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__dcache_control_ram_inst__DOT__wbinvd_line[1U] 
            = vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__data_ram3_q[1U];
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__dcache_control_ram_inst__DOT__wbinvd_line[2U] 
            = vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__data_ram3_q[2U];
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__dcache_control_ram_inst__DOT__wbinvd_line[3U] 
            = vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__data_ram3_q[3U];
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__dcache_control_ram_inst__DOT__wbinvd_line[4U] 
            = vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__data_ram3_q[4U];
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__dcache_control_ram_inst__DOT__wbinvd_valid 
            = (3U == (3U & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__dcache_control_ram_inst__DOT__ram_q_a) 
                            >> 6U)));
    }
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__avalon_mem_inst__DOT____VdfgRegularize_hda04a1ba_0_13 
        = ((2U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__avalon_mem_inst__DOT__state)) 
           & (IData)(vlSelfRef.avm_readdatavalid));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_134 
        = ((0xffff0000U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__eax) 
           | (0xffffU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__prefetch_control_inst__DOT____VdfgRegularize_h6cb41d31_0_5 
        = ((0xfffff000U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__prefetch_control_inst__DOT__physical) 
           | (0xfffU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__prefetch_inst__DOT__linear));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__offset_task 
        = ((0x66U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (9U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_24 
        = ((3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (0xdU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_25 
        = ((3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (0xeU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_29 
        = ((4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (8U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_30 
        = ((4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (9U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_98 
        = ((0x1dU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_99 
        = ((0x1dU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (2U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_100 
        = ((0x1dU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_87 
        = ((0x1cU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_88 
        = ((0x1cU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_146 
        = ((0x4fU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           | (0x50U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_138 
        = ((0x29U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_140 
        = ((0x29U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (2U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__prefetch_control_inst__DOT__offset_update 
        = (((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__prefetch_inst__DOT__linear 
             >> 0xcU) == (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__prefetch_control_inst__DOT__linear 
                          >> 0xcU)) & ((0xfffU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__prefetch_inst__DOT__linear) 
                                       != (0xfffU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__prefetch_control_inst__DOT__linear)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_115 
        = ((0x4cU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           & (0U == vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__eax));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_116 
        = ((0x4cU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           & (0U != vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__eax));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_98 
        = ((0x2cU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result_signals) 
              >> 3U));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_100 
        = (IData)(((0x38U == (0x7eU & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd))) 
                   & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result_signals) 
                      >> 3U)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__w_logic_arith 
        = (1U & ((~ ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_arith_index) 
                     >> 3U)) | ((9U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_arith_index)) 
                                | ((0xcU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_arith_index)) 
                                   | (0xeU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_arith_index))))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_244 
        = (((- (IData)((1U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__src 
                              >> 7U)))) << 8U) | (0xffU 
                                                  & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__src));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_112 
        = ((0x2eU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           & (3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_265 
        = ((0x6eU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_0 
        = (2U | (((((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ntflag) 
                    << 0xeU) | (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__iopl) 
                                 << 0xcU) | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__oflag) 
                                             << 0xbU))) 
                  | ((((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__dflag) 
                       << 0xaU) | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__iflag) 
                                   << 9U)) | (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__tflag) 
                                               << 8U) 
                                              | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__sflag) 
                                                 << 7U)))) 
                 | (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__zflag) 
                     << 6U) | (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__aflag) 
                                << 4U) | (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__pflag) 
                                           << 2U) | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__cflag))))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_16 
        = ((3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (6U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_227 
        = ((0x57U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (6U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__rd_src_is_imm_se 
        = ((0x57U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_10 
        = ((3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__prefetch_fifo_inst__DOT__empty 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__prefetch_fifo_inst__DOT____Vcellout__prefetch_fifo_inst__full)) 
           & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__prefetch_fifo_inst__DOT____Vcellout__prefetch_fifo_inst__usedw)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__avalon_mem_inst__DOT____VdfgRegularize_hda04a1ba_0_15 
        = ((3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__avalon_mem_inst__DOT__state)) 
           & (IData)(vlSelfRef.avm_readdatavalid));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__exe_arith_sub 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst)) 
                             - (QData)((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__src))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__exception_inst__DOT__shutdown_start 
        = ((2U < (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__exception_inst__DOT__count)) 
           | ((0U < (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__exception_inst__DOT__count)) 
              & (3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__exception_inst__DOT__last_type))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_204 
        = (((4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
            & (2U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex))) 
           | ((0x57U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
              & (0xdU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_seg_by_cmdex 
        = ((0U == (7U & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)))
            ? (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__es)
            : ((1U == (7U & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)))
                ? (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__cs)
                : ((2U == (7U & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)))
                    ? (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ss)
                    : ((3U == (7U & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)))
                        ? (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ds)
                        : ((4U == (7U & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)))
                            ? (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__fs)
                            : ((5U == (7U & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)))
                                ? (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__gs)
                                : ((6U == (7U & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)))
                                    ? (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ldtr)
                                    : (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__tr))))))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__exception_inst__DOT__vector 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__wr_debug_init)
            ? 1U : (0xffU & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__exception_inst__DOT__exc_vector_full)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_27 
        = ((6U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (~ ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex) 
                 >> 3U)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_131 
        = ((0x35U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (2U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__exe_arith_add 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__src)) 
                             + (QData)((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcachetoicache_accept_empty 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_to_icache_fifo_inst__DOT__dcache_to_icache_fifo_inst__DOT__full)) 
           & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_to_icache_fifo_inst__DOT__dcache_to_icache_fifo_inst__DOT__usedw)));
    if ((0x20U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd))) {
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_divide_inst__DOT__div_numer[0U] 
            = (0xffU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__eax);
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_divide_inst__DOT__div_numer[1U] = 0U;
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_divide_inst__DOT__div_numer[2U] = 0U;
    } else if (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__exe_is_8bit) {
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_divide_inst__DOT__div_numer[0U] 
            = (((IData)((0x1ffffffffffffULL & (- (QData)((IData)(
                                                                 ((0x2bU 
                                                                   == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
                                                                  & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__eax 
                                                                     >> 0xfU))))))) 
                << 0x10U) | (0xffffU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__eax));
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_divide_inst__DOT__div_numer[1U] 
            = (((IData)((0x1ffffffffffffULL & (- (QData)((IData)(
                                                                 ((0x2bU 
                                                                   == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
                                                                  & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__eax 
                                                                     >> 0xfU))))))) 
                >> 0x10U) | ((IData)(((0x1ffffffffffffULL 
                                       & (- (QData)((IData)(
                                                            ((0x2bU 
                                                              == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
                                                             & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__eax 
                                                                >> 0xfU)))))) 
                                      >> 0x20U)) << 0x10U));
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_divide_inst__DOT__div_numer[2U] 
            = ((IData)(((0x1ffffffffffffULL & (- (QData)((IData)(
                                                                 ((0x2bU 
                                                                   == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
                                                                  & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__eax 
                                                                     >> 0xfU)))))) 
                        >> 0x20U)) >> 0x10U);
    } else if (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_operand_32bit) {
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_divide_inst__DOT__div_numer[0U] 
            = (IData)((((QData)((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__edx)) 
                        << 0x20U) | (QData)((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__eax))));
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_divide_inst__DOT__div_numer[1U] 
            = (IData)(((((QData)((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__edx)) 
                         << 0x20U) | (QData)((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__eax))) 
                       >> 0x20U));
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_divide_inst__DOT__div_numer[2U] 
            = ((0x2bU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
               & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__edx 
                  >> 0x1fU));
    } else {
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_divide_inst__DOT__div_numer[0U] 
            = ((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__edx 
                << 0x10U) | (0xffffU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__eax));
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_divide_inst__DOT__div_numer[1U] 
            = (IData)((0x1ffffffffULL & (- (QData)((IData)(
                                                           ((0x2bU 
                                                             == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
                                                            & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__edx 
                                                               >> 0xfU)))))));
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_divide_inst__DOT__div_numer[2U] 
            = (IData)(((0x1ffffffffULL & (- (QData)((IData)(
                                                            ((0x2bU 
                                                              == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
                                                             & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__edx 
                                                                >> 0xfU)))))) 
                       >> 0x20U));
    }
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_120 
        = ((0x2eU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_162 
        = (IData)(((0x33U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
                   & (0xc000U == (0xc000U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U]))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_107 
        = ((0x6dU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           & (7U == (7U & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decode_inst__DOT__decode_commands_inst__DOT__cond_97 
        = (1U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decoder[0U] 
                 ^ (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decoder[0U] 
                    >> 2U)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_250 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result_signals)) 
           & (0x74U == (0x7eU & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT__e_shift_SAR 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__exe_prefix_2byte)) 
           & (0x3800ULL == (0x3800ULL & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_decoder)));
    if ((3U >= (0xfU & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor 
                                >> 0x28U))))) {
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__task_eip 
            = (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_buffer_shifted[0xcU] 
               >> 0x10U);
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__task_fs = 0U;
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__task_gs = 0U;
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__task_ldtr 
            = (0xffffU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_buffer_shifted[1U]);
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__rd_task_switch_linear_next 
            = ((IData)(2U) + vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__rd_task_switch_linear_reg);
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__task_eflags 
            = (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_buffer_shifted[0xbU] 
               >> 0x10U);
    } else {
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__task_eip 
            = ((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_buffer_shifted[0xdU] 
                << 0x10U) | (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_buffer_shifted[0xcU] 
                             >> 0x10U));
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__task_fs 
            = (0xffffU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_buffer_shifted[1U]);
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__task_gs 
            = (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_buffer_shifted[0U] 
               >> 0x10U);
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__task_ldtr 
            = (0xffffU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_buffer_shifted[0U]);
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__rd_task_switch_linear_next 
            = ((IData)(4U) + vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__rd_task_switch_linear_reg);
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__task_eflags 
            = ((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_buffer_shifted[0xcU] 
                << 0x10U) | (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_buffer_shifted[0xbU] 
                             >> 0x10U));
    }
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_220 
        = ((0x5aU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__exe_bcd_condition_af 
        = ((9U < (0xfU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst)) 
           | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__aflag));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_66 
        = ((0x20U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           | (0x1fU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_272 
        = ((0x70U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           | (0x71U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_273 
        = ((0x72U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           | (0x73U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_251 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result_signals)) 
           & (0x34U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT__e_shift_ROR 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__exe_prefix_2byte)) 
           & (0x800ULL == (0x3800ULL & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_decoder)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT__e_shift_RCR 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__exe_prefix_2byte)) 
           & (0x1800ULL == (0x3800ULL & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_decoder)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT__e_shift_SHR 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__exe_prefix_2byte)) 
           & (0x2800ULL == (0x3800ULL & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_decoder)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__req_readcode_done 
        = ((0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__avalon_mem_inst__DOT__state)) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__avalon_mem_inst__DOT__read_code_done_trigger));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_167 
        = ((0x4aU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & ((2U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)) 
              | (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT____VdfgRegularize_h694aed34_0_11 
        = ((3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__state)) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__link_writeline_inst__DOT__done_delayed));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_166 
        = ((0x49U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (2U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT__e_shift_SHRD 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__exe_prefix_2byte) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_modregrm_imm 
        = ((2U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__rd_modregrm_len))
            ? ((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[1U] 
                << 0x10U) | (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                             >> 0x10U)) : ((3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__rd_modregrm_len))
                                            ? ((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[1U] 
                                                << 8U) 
                                               | (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                                                  >> 0x18U))
                                            : ((4U 
                                                == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__rd_modregrm_len))
                                                ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[1U]
                                                : (
                                                   (6U 
                                                    == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__rd_modregrm_len))
                                                    ? 
                                                   ((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[2U] 
                                                     << 0x10U) 
                                                    | (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[1U] 
                                                       >> 0x10U))
                                                    : 
                                                   ((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[2U] 
                                                     << 8U) 
                                                    | (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[1U] 
                                                       >> 0x18U))))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__avalon_io_inst__DOT__address_out_of_bounds 
        = (((0x10U <= (IData)(vlSelfRef.avalon_io_address)) 
            & (0x20U > (IData)(vlSelfRef.avalon_io_address))) 
           | (((0x20U == (IData)(vlSelfRef.avalon_io_address)) 
               & (0U == (3U & (IData)(vlSelfRef.avalon_io_byteenable)))) 
              | (((0x24U <= (IData)(vlSelfRef.avalon_io_address)) 
                  & (0x40U > (IData)(vlSelfRef.avalon_io_address))) 
                 | (((0x44U <= (IData)(vlSelfRef.avalon_io_address)) 
                     & (0x60U > (IData)(vlSelfRef.avalon_io_address))) 
                    | (((0x68U <= (IData)(vlSelfRef.avalon_io_address)) 
                        & (0x70U > (IData)(vlSelfRef.avalon_io_address))) 
                       | (((0x70U == (IData)(vlSelfRef.avalon_io_address)) 
                           & (0U == (3U & (IData)(vlSelfRef.avalon_io_byteenable)))) 
                          | (((0x74U <= (IData)(vlSelfRef.avalon_io_address)) 
                              & (0x80U > (IData)(vlSelfRef.avalon_io_address))) 
                             | (((0xa0U == (IData)(vlSelfRef.avalon_io_address)) 
                                 & (0U == (3U & (IData)(vlSelfRef.avalon_io_byteenable)))) 
                                | (((0xa4U <= (IData)(vlSelfRef.avalon_io_address)) 
                                    & (0xc0U > (IData)(vlSelfRef.avalon_io_address))) 
                                   | (((0xe0U <= (IData)(vlSelfRef.avalon_io_address)) 
                                       & (0x1f0U > (IData)(vlSelfRef.avalon_io_address))) 
                                      | (((0x1f8U <= (IData)(vlSelfRef.avalon_io_address)) 
                                          & (0x220U 
                                             > (IData)(vlSelfRef.avalon_io_address))) 
                                         | (((0x230U 
                                              <= (IData)(vlSelfRef.avalon_io_address)) 
                                             & (0x388U 
                                                > (IData)(vlSelfRef.avalon_io_address))) 
                                            | (((0x388U 
                                                 == (IData)(vlSelfRef.avalon_io_address)) 
                                                & (0U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelfRef.avalon_io_byteenable)))) 
                                               | (((0x38cU 
                                                    <= (IData)(vlSelfRef.avalon_io_address)) 
                                                   & (0x3b0U 
                                                      > (IData)(vlSelfRef.avalon_io_address))) 
                                                  | (((0x3e0U 
                                                       <= (IData)(vlSelfRef.avalon_io_address)) 
                                                      & (0x3f0U 
                                                         > (IData)(vlSelfRef.avalon_io_address))) 
                                                     | (((0x3f8U 
                                                          <= (IData)(vlSelfRef.avalon_io_address)) 
                                                         & (0x8888U 
                                                            > (IData)(vlSelfRef.avalon_io_address))) 
                                                        | (0x8890U 
                                                           <= (IData)(vlSelfRef.avalon_io_address))))))))))))))))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_6 
        = ((1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__io_read_length 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_is_8bit)
            ? 1U : ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_operand_32bit)
                     ? 4U : 2U));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT__e_shift_ROL 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__exe_prefix_2byte)) 
           & (0ULL == (0x3800ULL & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_decoder)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT__e_shift_SHLD 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__exe_prefix_2byte));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_207 
        = ((0x68U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           | (0x69U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_0 
        = ((1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_49 
        = ((0xfU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_50 
        = ((0xfU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_120 
        = ((0x29U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_129 
        = ((0x31U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (7U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_step)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_144 
        = ((0x49U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_184 
        = ((0x61U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_209 
        = ((0x6dU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (7U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_step)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_130 
        = ((0x35U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & ((IData)(((1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_step)) 
                       & (0U == (0x1f000000U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_decoder[0U])))) 
              | ((IData)(((2U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_step)) 
                          & (0x1000000U == (0x1f000000U 
                                            & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_decoder[0U])))) 
                 | (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_step) 
                     > (0x1fU & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_decoder[0U] 
                                 >> 0x18U))) & (1U 
                                                < (0x1fU 
                                                   & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_decoder[0U] 
                                                      >> 0x18U)))))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT____VdfgRegularize_h94f45732_0_59 
        = ((0xfffff000U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__cr3) 
           | (0xffcU & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__linear 
                        >> 0x14U)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT____VdfgRegularize_h94f45732_0_60 
        = ((0xfffff000U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__pde) 
           | (0xffcU & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__linear 
                        >> 0xaU)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT____VdfgRegularize_h94f45732_0_58 
        = ((0xfffff000U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__pte) 
           | (0xfffU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__linear));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_68 = ((4U 
                                                  == 
                                                  (7U 
                                                   & (IData)(
                                                             (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_decoder 
                                                              >> 0xbU)))) 
                                                 | (6U 
                                                    == 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_decoder 
                                                                >> 0xbU)))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_111 
        = (1U & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__cr0_pe) 
                 ^ vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result2));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT__e_shift_count 
        = (0x1fU & (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__exe_prefix_2byte) 
                     & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)))
                     ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ecx
                     : (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__exe_prefix_2byte) 
                         & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)))
                         ? (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__exe_modregrm_imm)
                         : vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__src)));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__read_ac_fault) 
                                                | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__read_page_fault));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_18 
        = ((4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_61 
        = ((0x1cU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (0xbU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_210 
        = ((0x57U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (0xeU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT__e_shift_RCL 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__exe_prefix_2byte)) 
           & (0x1000ULL == (0x3800ULL & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_decoder)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_203 
        = ((0x58U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decode_inst__DOT__decode_commands_inst__DOT__cond_82 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decode_inst__DOT__prefix_group_1_lock) 
           & ((7U == (7U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decoder[0U] 
                            >> 0xbU))) | (3U == (3U 
                                                 & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decoder[0U] 
                                                    >> 0xeU)))));
    if (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__exe_is_8bit) {
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_divide_inst__DOT__div_denom 
            = (((QData)((IData)((0x1ffffffU & (- (IData)(
                                                         ((0x2bU 
                                                           == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
                                                          & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__src 
                                                             >> 7U))))))) 
                << 8U) | (QData)((IData)((0xffU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__src))));
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT__e_shift_dst_wire 
            = ((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst 
                << 0x18U) | ((0xff0000U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst 
                                           << 0x10U)) 
                             | ((0xff00U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst 
                                            << 8U)) 
                                | (0xffU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst))));
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_eip_next_sum 
            = (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__exe_eip 
               + (((- (IData)((1U & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_decoder 
                                             >> 0xfU))))) 
                   << 8U) | (0xffU & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_decoder 
                                              >> 8U)))));
    } else if (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_operand_32bit) {
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_divide_inst__DOT__div_denom 
            = (((QData)((IData)(((0x2bU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
                                 & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__src 
                                    >> 0x1fU)))) << 0x20U) 
               | (QData)((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__src)));
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT__e_shift_dst_wire 
            = vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst;
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_eip_next_sum 
            = (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__exe_eip 
               + (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_decoder 
                          >> 8U)));
    } else {
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_divide_inst__DOT__div_denom 
            = (((QData)((IData)((0x1ffffU & (- (IData)(
                                                       ((0x2bU 
                                                         == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
                                                        & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__src 
                                                           >> 0xfU))))))) 
                << 0x10U) | (QData)((IData)((0xffffU 
                                             & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__src))));
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT__e_shift_dst_wire 
            = ((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst 
                << 0x10U) | (0xffffU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst));
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_eip_next_sum 
            = (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__exe_eip 
               + (((- (IData)((1U & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_decoder 
                                             >> 0x17U))))) 
                   << 0x10U) | (0xffffU & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_decoder 
                                                   >> 8U)))));
    }
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_119 
        = ((0x2eU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_191 
        = (IData)(((0x3bU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
                   & (0xc000U == (0xc000U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U]))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_255 
        = ((0x6eU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_196 
        = (IData)(((0x74U == (0x7eU & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd))) 
                   & (0xc000U == (0xc000U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U]))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__wr_task_switch_linear_next 
        = ((3U >= (0xfU & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__tr_cache 
                                   >> 0x28U)))) ? ((IData)(2U) 
                                                   + vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__wr_task_switch_linear_reg)
            : ((IData)(4U) + vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__wr_task_switch_linear_reg));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_1 
        = ((3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_2 
        = ((3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_3 
        = ((3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (2U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_4 
        = ((3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_6 
        = ((3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (7U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_7 
        = ((3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (8U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_10 
        = ((3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (0xbU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_12 
        = ((3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (0xdU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_13 
        = ((3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (0xeU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_14 
        = ((3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (0xfU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_15 
        = ((4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_20 
        = ((4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_21 
        = ((4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_23 
        = ((4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (5U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_24 
        = ((4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (6U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_26 
        = ((4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (0xcU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_27 
        = ((4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (0xdU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_28 
        = ((4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (0xeU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_35 
        = ((5U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (2U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_36 
        = ((5U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_37 
        = ((5U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_38 
        = ((5U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (5U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_40 
        = ((4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (8U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_41 
        = ((4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (9U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_42 
        = ((4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (0xaU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_43 
        = ((9U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_44 
        = ((9U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_45 
        = ((0xaU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_46 
        = ((0xaU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_47 
        = ((0xbU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_48 
        = ((0xbU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_51 
        = ((0x12U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_52 
        = ((0x12U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_56 
        = ((0x1cU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_58 
        = ((0x1cU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (2U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_59 
        = ((0x1cU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_60 
        = ((0x1cU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_61 
        = ((0x1cU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (5U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_64 
        = ((0x1cU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (8U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_65 
        = ((0x1cU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (9U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_67 
        = ((0x1cU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (0xbU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_68 
        = ((0x1cU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (0xcU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_70 
        = ((0x1cU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (0xdU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    if (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_is_8bit) {
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__sflag_result 
            = (1U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result 
                     >> 7U));
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_string_inst__DOT__w_string_size = 1U;
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__io_write_length = 1U;
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_zflag_result 
            = (0U == (0xffU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result));
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_138 
            = ((0xffffff00U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__eax) 
               | (0xffU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result2));
    } else {
        if (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_operand_32bit) {
            vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__sflag_result 
                = (1U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result 
                         >> 0x1fU));
            vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_string_inst__DOT__w_string_size = 4U;
            vlSelfRef.main_fixed__DOT__ao486_inst__DOT__io_write_length = 4U;
            vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_zflag_result 
                = (0U == vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result);
        } else {
            vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__sflag_result 
                = (1U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result 
                         >> 0xfU));
            vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_string_inst__DOT__w_string_size = 2U;
            vlSelfRef.main_fixed__DOT__ao486_inst__DOT__io_write_length = 2U;
            vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_zflag_result 
                = (0U == (0xffffU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result));
        }
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_138 
            = vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_137;
    }
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_71 
        = ((0x1cU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (0xeU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_73 
        = ((0x1dU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (6U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_74 
        = ((0x1dU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (7U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_75 
        = ((0x1dU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (8U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_77 
        = ((0x1dU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (0xaU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_78 
        = ((0x1dU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (0xbU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_79 
        = ((0x1dU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (0xcU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_80 
        = ((0x1dU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (0xdU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_82 
        = ((0x1dU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (0xeU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_83 
        = ((0x1dU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (0xfU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_84 
        = ((0x1eU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_85 
        = ((0x1eU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_87 
        = ((0x1eU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_89 
        = ((0x1eU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_90 
        = ((0x1eU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (5U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_92 
        = ((0x1dU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_93 
        = ((0x1dU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_95 
        = ((0x1dU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_97 
        = ((0x1dU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_101 
        = ((0x23U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_102 
        = ((0x23U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_105 
        = ((0x23U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (5U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_106 
        = ((0x23U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (6U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_108 
        = ((0x23U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (7U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_109 
        = ((0x23U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (8U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_111 
        = ((0x23U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & ((0xaU <= (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)) 
              & (0xfU > (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_112 
        = ((0x23U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (0xfU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_113 
        = ((0x28U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (0xaU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_115 
        = ((0x28U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_116 
        = ((0x28U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (2U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_118 
        = ((0x28U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & ((4U <= (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)) 
              & (9U > (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_119 
        = ((0x28U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (9U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_121 
        = ((0x2dU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_122 
        = ((0x2dU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_123 
        = ((0x2eU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_124 
        = ((0x2eU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_128 
        = ((0x31U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (7U > (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_step)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_133 
        = ((0x3aU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_134 
        = ((0x3aU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_135 
        = ((0x3eU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_136 
        = ((0x3fU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_139 
        = ((0x3fU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_140 
        = ((0x3fU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (6U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_142 
        = ((0x3fU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (8U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_143 
        = ((0x3fU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (9U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_150 
        = ((0x4dU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (2U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_154 
        = ((0x54U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_156 
        = ((0x54U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (2U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_157 
        = ((0x54U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_160 
        = ((0x57U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_161 
        = ((0x57U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_162 
        = ((0x57U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (2U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_163 
        = ((0x57U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_167 
        = ((0x57U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (9U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_169 
        = ((0x57U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (0xbU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_174 
        = ((0x57U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (0xeU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_175 
        = ((0x57U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (0xfU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_177 
        = ((0x58U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_178 
        = ((0x58U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_179 
        = ((0x58U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (2U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_182 
        = ((0x59U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (2U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_183 
        = ((0x5eU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_186 
        = ((0x63U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (2U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_188 
        = ((0x63U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_189 
        = ((0x63U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (5U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_193 
        = ((0x63U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (7U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_194 
        = ((0x63U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (8U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_196 
        = ((0x63U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (9U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_197 
        = ((0x63U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (0xaU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_198 
        = ((0x64U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (0xdU > (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_199 
        = ((0x64U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (0xdU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_200 
        = ((0x63U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (0xbU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_201 
        = ((0x63U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (0xcU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_202 
        = ((0x63U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (0xdU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_203 
        = ((0x63U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (0xeU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_205 
        = ((0x65U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (0xfU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_206 
        = ((0x66U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (0xaU > (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_208 
        = ((0x6dU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (7U > (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_step)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_131 
        = ((0x35U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & ((IData)(((1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_step)) 
                       & (0x1000000U == (0x1f000000U 
                                         & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_decoder[0U])))) 
              | (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_step) 
                  == (0x1fU & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_decoder[0U] 
                               >> 0x18U))) & (1U < 
                                              (0x1fU 
                                               & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_decoder[0U] 
                                                  >> 0x18U))))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_132 
        = ((0x35U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_step) 
               < (0x1fU & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_decoder[0U] 
                           >> 0x18U))) & (1U < (0x1fU 
                                                & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_decoder[0U] 
                                                   >> 0x18U)))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_210 
        = ((0x6eU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_for_rd_ready 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__rd_one_mem_read) 
           | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__read_done) 
              & ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__read_page_fault)) 
                 & (~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__read_ac_fault)))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb2_ena 
        = (1U & ((IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb0 
                          >> 0x2aU)) & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb1 
                                                >> 0x2aU))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decode_inst__DOT__decode_commands_inst__DOT__cond_80 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decode_inst__DOT__prefix_group_1_lock) 
           & ((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decoder[0U] 
               >> 1U) | ((3U == (3U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decoder[0U] 
                                       >> 0xeU))) | 
                         (7U == (7U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decoder[0U] 
                                       >> 3U))))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decode_inst__DOT__decode_commands_inst__DOT__cond_8 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decode_inst__DOT__prefix_group_1_lock) 
           | (IData)((0xd800U == (0xf800U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decoder[0U]))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decode_inst__DOT__decode_commands_inst__DOT__cond_114 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decode_inst__DOT__prefix_group_1_lock) 
           | (IData)((0xe800U == (0xf800U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decoder[0U]))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_8 
        = ((3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (9U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_53 
        = ((0x12U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (2U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_62 
        = ((0x1cU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (6U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_100 
        = ((0x22U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_103 
        = ((0x23U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (2U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_117 
        = ((0x28U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_137 
        = ((0x3fU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (2U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_141 
        = ((0x3fU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (7U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_165 
        = ((0x57U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (7U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__exc_init 
        = (IData)((((((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__exception_inst__DOT__exc_vector_full) 
                      >> 8U) | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__wr_interrupt_possible)) 
                    | (IData)(vlSelfRef.interrupt_done)) 
                   | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__wr_debug_init)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_157 
        = (IData)(((0x24U == (0x7cU & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd))) 
                   & (0xc000U == (0xc000U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U]))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_170 
        = (IData)(((0x4eU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
                   & (0xc000U == (0xc000U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U]))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_163 
        = (IData)(((0x34U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
                   & (0xc000U == (0xc000U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U]))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_254 
        = ((0x6eU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_257 
        = ((0x70U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           | ((0x71U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
              | ((0x72U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
                 | (0x73U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_67 
        = ((0x20U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           | (0x1fU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_149 
        = (IData)(((0x40U == (0x78U & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd))) 
                   & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_156 
        = ((0x3dU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_142 
        = (IData)(((0x10U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
                   & (0xc000U == (0xc000U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U]))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__rd_src_is_implicit_reg 
        = ((0x4aU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__address_enter_init 
        = ((0x35U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decode_inst__DOT__decode_commands_inst__DOT__cond_62 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decode_inst__DOT__prefix_group_1_lock) 
           | ((0U != (7U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decoder[0U] 
                            >> 0xbU))) & ((2U != (7U 
                                                  & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decoder[0U] 
                                                     >> 0xbU))) 
                                          & (3U != 
                                             (7U & 
                                              (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decoder[0U] 
                                               >> 0xbU))))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_41 
        = (IData)(((0xeU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
                   & (0U == (0xeU & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_163 
        = ((0x49U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_153 
        = (IData)(((7U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
                   & (0xc000U == (0xc000U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U]))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__prefetchfifo_used 
        = (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__prefetch_fifo_inst__DOT____Vcellout__prefetch_fifo_inst__full) 
            << 4U) | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__prefetch_fifo_inst__DOT____Vcellout__prefetch_fifo_inst__usedw));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__prefetch_length 
        = ((0x10U < vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__prefetch_inst__DOT__limit)
            ? 0x10U : (0x1fU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__prefetch_inst__DOT__limit));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__exe_trigger_nm_fault 
        = (((0x32U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
            & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex))) 
           & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__cr0_em) 
              | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__cr0_ts)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_cpl_current 
        = (3U & ((0x100000U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_1)
                  ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_3
                  : (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__cs_rpl)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT____VdfgRegularize_h94f45732_0_44 
        = ((8U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__state)) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__link_dcachewrite_inst__DOT__done_delayed));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_186 
        = ((0x3fU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (0xaU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_26 
        = ((3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (0xfU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_19 
        = ((3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (8U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_47 
        = ((6U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (~ ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex) 
                 >> 3U)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_223 
        = ((0x57U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_296 
        = ((0x70U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           | ((0x71U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
              | ((0x72U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
                 | (0x73U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_142 
        = (IData)(((0x2cU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
                   & (0x1000ULL == (0x3000ULL & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_decoder))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_162 
        = ((0x35U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_79 
        = ((0x1eU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & ((4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)) 
              | (5U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT____VdfgRegularize_h94f45732_0_42 
        = ((6U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__state)) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__link_dcachewrite_inst__DOT__done_delayed));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_90 
        = (((- (IData)((1U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__src 
                              >> 0xfU)))) << 0x10U) 
           | (0xffffU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__src));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__ldtr_base 
        = (((IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ldtr_cache 
                     >> 0x38U)) << 0x18U) | (0xffffffU 
                                             & (IData)(
                                                       (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ldtr_cache 
                                                        >> 0x10U))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT____VdfgRegularize_hf83a959e_0_52 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__exe_is_8bit)) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_operand_32bit));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__es_base 
        = (((IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__es_cache 
                     >> 0x38U)) << 0x18U) | (0xffffffU 
                                             & (IData)(
                                                       (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__es_cache 
                                                        >> 0x10U))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__ss_base 
        = (((IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ss_cache 
                     >> 0x38U)) << 0x18U) | (0xffffffU 
                                             & (IData)(
                                                       (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ss_cache 
                                                        >> 0x10U))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_206 
        = (IData)(((0x40U == (0x78U & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd))) 
                   & (7U != (7U & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT____VdfgRegularize_h189848d7_0_0 
        = (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__gdtr_base 
           + (0xfff8U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_1));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_12 
        = ((3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_197 
        = ((1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)) 
           & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__wr_mutex) 
              >> 2U));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT____VdfgRegularize_h94f45732_0_77 
        = ((~ (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__pde 
               >> 5U)) & (5U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__state)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_desc_base 
        = (((IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor 
                     >> 0x38U)) << 0x18U) | (0xffffffU 
                                             & (IData)(
                                                       (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor 
                                                        >> 0x10U))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT____VdfgRegularize_hf83a959e_0_51 
        = (1U & ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__exe_is_8bit)) 
                 & (~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_operand_32bit))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__tr_base 
        = (((IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__tr_cache 
                     >> 0x38U)) << 0x18U) | (0xffffffU 
                                             & (IData)(
                                                       (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__tr_cache 
                                                        >> 0x10U))));
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_109 
        = ((0x4fU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           | ((0x50U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
              | ((0x51U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
                 | (0x52U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_23 
        = ((9U == (0xfU & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor 
                                   >> 0x28U)))) | (1U 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor 
                                                               >> 0x28U)))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_30 
        = ((0xcU == (0xfU & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor 
                                     >> 0x28U)))) | 
           (4U == (0xfU & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor 
                                   >> 0x28U)))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decode_inst__DOT__decode_commands_inst__DOT__cond_12 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decode_inst__DOT__prefix_group_1_lock) 
           | (6U <= (7U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decoder[0U] 
                           >> 0xbU))));
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_24 
        = ((4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (2U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_31 
        = ((4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (7U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_32 
        = ((4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (0xfU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_35 
        = ((5U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_38 
        = ((5U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_47 
        = ((0x1cU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_48 
        = ((0x1cU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (0xaU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_49 
        = ((0x1cU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (0xfU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_51 
        = ((0x1dU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (9U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_53 
        = ((0x1eU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (2U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_55 
        = ((0x1dU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (2U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_59 
        = ((0x23U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_78 
        = ((0x4bU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (2U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_89 
        = ((0x57U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (0xdU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_95 
        = ((0x63U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_96 
        = ((0x63U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_100 
        = ((0x63U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (6U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_250 
        = (1U & ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__tlbcheck_done)) 
                 & (~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__check_pf))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_138 
        = ((0x3fU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_debug_inst__DOT__wr_debug_write 
        = (((0U == (0xffU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__dr7))
             ? 0U : ((((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_debug_inst__DOT__wr_debug_b3_write_trigger) 
                       << 3U) | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_debug_inst__DOT__wr_debug_b2_write_trigger) 
                                 << 2U)) | (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_debug_inst__DOT__wr_debug_b1_write_trigger) 
                                             << 1U) 
                                            | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_debug_inst__DOT__wr_debug_b0_write_trigger)))) 
           | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_debug_write_reg));
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_112 
        = ((0x13U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           | ((0x14U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
              | (0x15U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd))));
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_60 
        = ((0x23U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (9U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_83 
        = ((0x54U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_85 
        = ((0x55U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    __VdfgRegularize_hd87f99a1_0_16 = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_operand_32bit) 
                                       & ((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_3 
                                           >> 0x11U) 
                                          & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__cs_rpl))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_249 
        = ((0x63U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (2U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_252 
        = ((0x63U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_253 
        = ((0x63U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_254 
        = ((0x63U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (5U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_255 
        = ((0x63U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (7U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_256 
        = ((0x63U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (8U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decode_inst__DOT__decode_commands_inst__DOT____VdfgRegularize_hb6bcbde6_0_33 
        = ((0xfcU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decoder[0U]) 
           | (1U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decoder[0U]));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_173 
        = ((0x4dU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (3U != (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_196 
        = ((0x54U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & ((1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)) 
              | (3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_138 
        = ((0x33U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (3U != (3U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                           >> 0xeU))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_244 
        = ((0x61U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_64 
        = ((0x2fU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           | (0x30U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__req_readburst_done 
        = ((0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__avalon_mem_inst__DOT__state)) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__avalon_mem_inst__DOT__read_burst_done_trigger));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_141 
        = ((0x2bU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           | (0x2aU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_106 
        = ((0x29U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (2U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_116 
        = ((0x2eU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_145 
        = ((1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)) 
           | (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_139 
        = ((2U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)) 
           | (3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__cond_38 
        = ((2U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__current_type)) 
           & (0U != (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__write_double_state)));
    main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT____VdfgRegularize_h94f45732_0_76 
        = ((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__pde 
            >> 5U) & (5U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__state)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_segment_inst__DOT__ds_limit 
        = ((1U & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ds_cache 
                          >> 0x37U))) ? (0xfffU | (
                                                   ((IData)(
                                                            (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ds_cache 
                                                             >> 0x30U)) 
                                                    << 0x1cU) 
                                                   | (0xffff000U 
                                                      & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ds_cache) 
                                                         << 0xcU))))
            : ((0xf0000U & ((IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ds_cache 
                                     >> 0x30U)) << 0x10U)) 
               | (0xffffU & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ds_cache))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_segment_inst__DOT__fs_limit 
        = ((1U & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__fs_cache 
                          >> 0x37U))) ? (0xfffU | (
                                                   ((IData)(
                                                            (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__fs_cache 
                                                             >> 0x30U)) 
                                                    << 0x1cU) 
                                                   | (0xffff000U 
                                                      & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__fs_cache) 
                                                         << 0xcU))))
            : ((0xf0000U & ((IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__fs_cache 
                                     >> 0x30U)) << 0x10U)) 
               | (0xffffU & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__fs_cache))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_segment_inst__DOT__gs_limit 
        = ((1U & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__gs_cache 
                          >> 0x37U))) ? (0xfffU | (
                                                   ((IData)(
                                                            (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__gs_cache 
                                                             >> 0x30U)) 
                                                    << 0x1cU) 
                                                   | (0xffff000U 
                                                      & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__gs_cache) 
                                                         << 0xcU))))
            : ((0xf0000U & ((IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__gs_cache 
                                     >> 0x30U)) << 0x10U)) 
               | (0xffffU & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__gs_cache))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_segment_inst__DOT____VdfgRegularize_h67f407af_0_45 
        = (IData)((0x40000000000ULL != (0xc0000000000ULL 
                                        & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__cs_cache)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_segment_inst__DOT____VdfgRegularize_h67f407af_0_43 
        = (IData)((0x40000000000ULL != (0xc0000000000ULL 
                                        & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ds_cache)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_segment_inst__DOT____VdfgRegularize_h67f407af_0_42 
        = (IData)((0x40000000000ULL != (0xc0000000000ULL 
                                        & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__fs_cache)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_segment_inst__DOT____VdfgRegularize_h67f407af_0_41 
        = (IData)((0x40000000000ULL != (0xc0000000000ULL 
                                        & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__gs_cache)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__icache_inst__DOT__icache_control_ram_inst__DOT____VdfgRegularize_h31ca9ccd_0_0 
        = (1U & ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__icache_inst__DOT__icache_control_ram_inst__DOT__init_done)) 
                 | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__icache_inst__DOT__icache_control_ram_inst__DOT__state)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_28 
        = ((6U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex) 
              >> 3U));
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_15 
        = ((3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (0xcU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_88 
        = ((0x57U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (0xaU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_7 
        = ((5U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)) 
           | (6U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__debug_len0 
        = ((0U == (3U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__dr7 
                         >> 0x12U))) ? 7U : ((1U == 
                                              (3U & 
                                               (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__dr7 
                                                >> 0x12U)))
                                              ? 6U : 
                                             ((2U == 
                                               (3U 
                                                & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__dr7 
                                                   >> 0x12U)))
                                               ? 0U
                                               : 4U)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__debug_len1 
        = ((0U == (3U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__dr7 
                         >> 0x16U))) ? 7U : ((1U == 
                                              (3U & 
                                               (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__dr7 
                                                >> 0x16U)))
                                              ? 6U : 
                                             ((2U == 
                                               (3U 
                                                & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__dr7 
                                                   >> 0x16U)))
                                               ? 0U
                                               : 4U)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__debug_len2 
        = ((0U == (3U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__dr7 
                         >> 0x1aU))) ? 7U : ((1U == 
                                              (3U & 
                                               (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__dr7 
                                                >> 0x1aU)))
                                              ? 6U : 
                                             ((2U == 
                                               (3U 
                                                & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__dr7 
                                                   >> 0x1aU)))
                                               ? 0U
                                               : 4U)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__debug_len3 
        = ((0U == (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__dr7 
                   >> 0x1eU)) ? 7U : ((1U == (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__dr7 
                                              >> 0x1eU))
                                       ? 6U : ((2U 
                                                == 
                                                (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__dr7 
                                                 >> 0x1eU))
                                                ? 0U
                                                : 4U)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_53 
        = ((0x12U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (2U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__tlbflushsingle_do 
        = ((0xaU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_stack_inst__DOT____VdfgRegularize_h143f96f3_0_9 
        = (IData)((0x40000000000ULL != (0xc0000000000ULL 
                                        & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_string_inst__DOT__w_string_es_no_write 
        = (IData)((0x20000000000ULL != (0xa0000000000ULL 
                                        & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__es_cache)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__req_readline_done 
        = ((0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__avalon_mem_inst__DOT__state)) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__avalon_mem_inst__DOT__read_line_done_trigger));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT____VdfgRegularize_h94f45732_0_105 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__su)) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__wp));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_124 = (((QData)((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__avalon_mem_inst__DOT__bus_1)) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__avalon_mem_inst__DOT__bus_0)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_219 
        = ((0x5aU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (2U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_48 
        = ((0x12U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_126 
        = ((0x3bU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (3U != (3U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                           >> 0xeU))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_224 
        = ((0x61U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_225 
        = ((0x61U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_134 
        = (IData)(((0x74U == (0x7eU & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd))) 
                   & (3U != (3U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                                   >> 0xeU)))));
    main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT____VdfgRegularize_h94f45732_0_14 
        = ((~ (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__pte 
               >> 6U)) & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__rw));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_77 
        = ((0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)) 
           | (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_88 
        = ((0x23U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (5U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_114 
        = ((0x2dU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_42 
        = ((0x12U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           & (3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_66 
        = ((0x1cU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (9U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_64 
        = ((0x1cU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (5U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_113 
        = ((0x21U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_65 
        = ((0x1cU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (6U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_239 
        = ((0x66U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_7 
        = ((3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_205 
        = ((0x57U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_154 
        = ((0x3dU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_segment_inst__DOT____VdfgRegularize_h67f407af_0_46 
        = (IData)((0x40000000000ULL != (0xc0000000000ULL 
                                        & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__es_cache)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__es_limit 
        = ((1U & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__es_cache 
                          >> 0x37U))) ? (0xfffU | (
                                                   ((IData)(
                                                            (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__es_cache 
                                                             >> 0x30U)) 
                                                    << 0x1cU) 
                                                   | (0xffff000U 
                                                      & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__es_cache) 
                                                         << 0xcU))))
            : ((0xf0000U & ((IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__es_cache 
                                     >> 0x30U)) << 0x10U)) 
               | (0xffffU & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__es_cache))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_155 
        = ((0x3dU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (2U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_169 
        = ((0x4aU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_107 
        = ((0x2bU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           | (0x2aU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_133 
        = ((0x36U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_135 
        = ((0x36U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_51 
        = ((0x12U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decode_inst__DOT__decode_commands_inst__DOT__cond_22 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decode_inst__DOT__prefix_group_1_lock) 
           | (3U == (3U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decoder[0U] 
                           >> 0xeU))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_233 
        = ((~ (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_1 
               >> 2U)) & ((4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
                          & (4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_231 
        = ((~ (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_1 
               >> 2U)) & ((0x1cU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
                          & (0xcU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_149 
        = (((0x58U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
            & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex))) 
           & (0U != (0x3fffU & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_1 
                                >> 2U))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_226 
        = ((~ (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_1 
               >> 2U)) & ((0x57U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
                          & (0xfU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_227 
        = ((0x63U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (6U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_101 
        = ((0x34U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (3U != (3U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                           >> 0xeU))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_106 
        = ((0x4eU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (3U != (3U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                           >> 0xeU))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_93 
        = ((7U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (3U != (3U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                           >> 0xeU))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_segment_inst__DOT____VdfgRegularize_h67f407af_0_44 
        = (IData)((0x40000000000ULL != (0xc0000000000ULL 
                                        & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ss_cache)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__ss_limit 
        = ((1U & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ss_cache 
                          >> 0x37U))) ? (0xfffU | (
                                                   ((IData)(
                                                            (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ss_cache 
                                                             >> 0x30U)) 
                                                    << 0x1cU) 
                                                   | (0xffff000U 
                                                      & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ss_cache) 
                                                         << 0xcU))))
            : ((0xf0000U & ((IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ss_cache 
                                     >> 0x30U)) << 0x10U)) 
               | (0xffffU & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ss_cache))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_246 
        = ((0x68U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           | (0x69U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_21 
        = ((4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (6U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_63 
        = ((0x1cU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (0xeU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_190 
        = (((0x1dU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
            & (8U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex))) 
           | ((4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
              & (0xeU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_209 
        = ((0x57U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (9U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_15 
        = ((3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (0xbU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_241 
        = ((0x66U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (2U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_248 
        = (((0x23U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
            & (5U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex))) 
           & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_1 
              >> 2U));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_89 
        = ((0x23U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (6U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_4 
        = ((0xffffU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__rd_memory_last) 
           + (0x1fffU & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_1 
                         >> 3U)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_87 
        = (IData)((0x100000000000ULL != (0x180000000000ULL 
                                         & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_243 
        = ((0x66U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & ((3U <= (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)) 
              & (8U >= (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_34 
        = ((4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (0xdU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_0 
        = ((1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_165 
        = ((0x49U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_110 
        = ((0x65U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & ((0xcU >= (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)) 
              | (3U < (0xfU & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor 
                                       >> 0x28U))))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_139 
        = (IData)(((0x38U == (0x7eU & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd))) 
                   & (0U != (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_140 
        = (IData)(((0x38U == (0x7eU & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd))) 
                   & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__rd_src_is_ecx 
        = ((0x2cU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__address_memoffset 
        = ((0x5aU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_110 
        = ((0x2cU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (0U != (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_40 
        = (IData)(((0xeU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
                   & (2U == (0xeU & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_76 
        = ((0x22U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)));
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_121 
        = (((0x2eU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
            & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex))) 
           & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__cs_rpl)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decode_inst__DOT__decode_commands_inst__DOT__cond_1 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decode_inst__DOT__prefix_group_1_lock) 
           & (0xc000U == (0xc000U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decoder[0U])));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__rd_req_reg_not_8bit 
        = ((0x6cU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           | (0x6bU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_145 
        = ((~ (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
               >> 1U)) & (7U != (7U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                                       >> 3U))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__exception_inst__DOT__cond_0 
        = (IData)((((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__exception_inst__DOT__exc_vector_full) 
                    >> 8U) | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__wr_debug_init)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_189 
        = (((0x1dU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
            & (7U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex))) 
           | ((4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
              & (0xdU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex))));
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_117 
        = ((((0x13U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
             | ((0x14U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
                | (0x15U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)))) 
            & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex))) 
           & ((0x13U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
              | (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__cs_rpl))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__prefetch_inst__DOT__cs_base 
        = (((IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__cs_cache 
                     >> 0x38U)) << 0x18U) | (0xffffffU 
                                             & (IData)(
                                                       (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__cs_cache 
                                                        >> 0x10U))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_28 
        = (IData)((0x20000000000ULL != (0x1f0000000000ULL 
                                        & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_334 
        = (IData)((0x80000000000ULL == (0xa0000000000ULL 
                                        & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_131 
        = ((0x23U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (6U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_273 
        = ((0x66U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (8U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_270 
        = ((0x66U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & ((4U <= (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)) 
              & (7U >= (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_95 
        = ((0x10U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (3U != (3U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                           >> 0xeU))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__exe_privilege_not_accepted 
        = (((3U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_1) 
            > (3U & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor 
                             >> 0x2dU)))) | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__cs_rpl) 
                                             > (3U 
                                                & (IData)(
                                                          (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor 
                                                           >> 0x2dU)))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_213 
        = (((4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
            & (0xeU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex))) 
           | ((0x1dU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
              & (8U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_232 
        = ((0x63U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & ((0xcU <= (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)) 
              & (0xeU >= (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_121 
        = (((0x2fU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
            | (0x30U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd))) 
           & ((8U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)) 
              | (9U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex))));
    if (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_operand_32bit) {
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_offset_inst__DOT__e_push_offset 
            = (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__esp 
               - (IData)(4U));
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_src_ze 
            = vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__src;
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_bit_selector 
            = (0x1fU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__src);
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_bound_dst 
            = vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst;
    } else {
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_offset_inst__DOT__e_push_offset 
            = (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__esp 
               - (IData)(2U));
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_src_ze 
            = (0xffffU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__src);
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_bit_selector 
            = (0x1fU & (0xfU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__src));
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_bound_dst 
            = (((- (IData)((1U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst 
                                  >> 0xfU)))) << 0x10U) 
               | (0xffffU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst));
    }
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_181 
        = ((2U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result_signals));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_12 
        = ((3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           & ((4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)) 
              | (0xaU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_182 
        = ((8U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result_signals));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_88 
        = ((0x28U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           & (0xaU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_183 
        = ((0x3cU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result_signals));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_178 
        = (((0x3fU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
            & (5U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex))) 
           | (((4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
               & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex))) 
              | (((4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
                  & (0xbU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex))) 
                 | (((5U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
                     & (6U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex))) 
                    | (((0x57U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
                        & (0xcU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex))) 
                       | ((0x58U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
                          & (3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex))))))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_204 
        = ((0x57U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           & ((4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)) 
              | (8U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_161 
        = ((0x3fU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (7U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_38 
        = ((0xfU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           & (2U != (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_149 
        = ((0x3fU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           & (3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_validate_seg_regs 
        = (((0x3fU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
            & (0xaU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex))) 
           | ((0x28U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
              & (9U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_98 
        = ((0x28U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & ((4U <= (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)) 
              & (6U >= (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__address_stack_add_4_to_saved 
        = ((0x23U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (0xaU <= (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_91 
        = ((0x23U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & ((7U <= (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)) 
              & (9U >= (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_96 
        = (IData)(((0x24U == (0x7cU & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd))) 
                   & (3U != (3U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                                   >> 0xeU)))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_115 
        = ((0x2dU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__address_enter 
        = ((0x35U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_110 
        = ((0x2eU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)));
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_64 
        = ((0x5aU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_43 
        = ((0xfU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (2U != (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_79 
        = ((0x23U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (2U >= (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_105 
        = ((0x29U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_222 
        = ((0x5eU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_90 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__cs_rpl) 
           <= (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__iopl));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_103 
        = ((0x29U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_225 
        = ((0x63U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__wr_int_soft_int_ib 
        = ((0x4bU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__wr_exception_external_set 
        = ((0x4bU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           & (3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_160 
        = ((0x4bU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_57 
        = ((0x1cU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_77 
        = ((0x51U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           | (0x52U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_242 
        = ((0x66U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           & (2U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_75 
        = ((0x22U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_80 
        = ((0x23U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           & (2U >= (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_97 
        = ((0x29U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_147 
        = ((0x3fU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_266 
        = ((0x6eU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_76 
        = ((0x4fU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           | (0x50U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_67 
        = ((0x21U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_113 
        = ((0x2eU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           & (4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_147 
        = (IData)(((0x40U == (0x78U & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd))) 
                   & (2U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__address_enter_last 
        = ((0x35U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_143 
        = (IData)(((0x40U == (0x78U & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd))) 
                   & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_255 
        = ((0x66U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           & (0xaU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__address_stack_for_iret_second 
        = ((0x28U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__exe_branch_eip 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_operand_32bit)
            ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_eip_next_sum
            : (0xffffU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_eip_next_sum));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__address_stack_pop_esp_prev 
        = ((0x3fU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (6U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_193 
        = ((0x54U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & ((0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)) 
              | (2U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_33 
        = ((0xbU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_12 
        = ((4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (0xcU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_14 
        = ((0x1dU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (6U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_35 
        = ((0xbU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_75 
        = ((0x22U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_175 
        = (IData)(((0x24U == (0x7cU & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd))) 
                   & (0U != (3U & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_222 
        = ((~ ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result_signals) 
               >> 4U)) & (0x2cU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_221 
        = (IData)(((~ ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result_signals) 
                       >> 4U)) & (0x38U == (0x7eU & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_98 
        = ((0x29U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           & (2U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_95 
        = ((0x10U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result_signals));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_99 
        = ((0x34U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result_signals));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_19 
        = ((2U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)) 
           | (5U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_23 
        = ((6U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex) 
              >> 3U));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_109 
        = ((0x2eU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__rd_ss_esp_from_tss_386 
        = ((9U == (0xfU & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__tr_cache 
                                   >> 0x28U)))) | (0xbU 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__tr_cache 
                                                               >> 0x28U)))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_246 
        = ((0x63U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_162 
        = ((0x4bU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           & (2U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_119 
        = ((0x2fU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           | (0x30U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_181 
        = ((~ (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor 
                       >> 0x28U))) & (0U != (0x3fffU 
                                             & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_1 
                                                >> 2U))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_34 
        = ((3U & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor 
                          >> 0x2dU))) != (3U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_1));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_22 
        = (IData)((0ULL == (0xa0000000000ULL & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_160 
        = ((0x3fU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (2U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__address_stack_for_ret_first 
        = ((0x3fU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_218 
        = ((0x3eU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (0U < (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__cs_rpl)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_193 
        = (((9U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
            & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex))) 
           & (0U < (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__cs_rpl)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_194 
        = (((0xaU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
            & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex))) 
           & (0U < (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__cs_rpl)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_196 
        = (((0xcU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
            & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex))) 
           & (0U < (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__cs_rpl)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_198 
        = ((((0x14U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
             | (0x15U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd))) 
            & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex))) 
           & (0U != (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__cs_rpl)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_216 
        = (((0x3aU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
            & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex))) 
           & (0U < (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__cs_rpl)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_13 
        = ((3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_225 
        = ((0x57U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_324 
        = ((~ ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__wr_mutex) 
               >> 1U)) & (2U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)));
    if (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_address_32bit) {
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__exe_jecxz_condition 
            = (0U == vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ecx);
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__exe_cmd_loop_ecx 
            = (1U != vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ecx);
    } else {
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__exe_jecxz_condition 
            = (0U == (0xffffU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ecx));
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__exe_cmd_loop_ecx 
            = (1U != (0xffffU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ecx));
    }
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_323 
        = ((~ ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__wr_mutex) 
               >> 8U)) & (8U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_io_allow_bits 
        = (0xfU & ((0U == (7U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_1))
                    ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__src
                    : ((1U == (7U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_1))
                        ? (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__src 
                           >> 1U) : ((2U == (7U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_1))
                                      ? (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__src 
                                         >> 2U) : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_1))
                                                    ? 
                                                   (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__src 
                                                    >> 3U)
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (7U 
                                                      & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_1))
                                                     ? 
                                                    (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__src 
                                                     >> 4U)
                                                     : 
                                                    ((5U 
                                                      == 
                                                      (7U 
                                                       & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_1))
                                                      ? 
                                                     (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__src 
                                                      >> 5U)
                                                      : 
                                                     ((6U 
                                                       == 
                                                       (7U 
                                                        & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_1))
                                                       ? 
                                                      (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__src 
                                                       >> 6U)
                                                       : 
                                                      (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__src 
                                                       >> 7U)))))))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_153 
        = ((0x2fU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           | (0x30U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_145 
        = ((0x2eU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_150 
        = ((0x2eU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__offset_new_stack 
        = ((0x1dU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (9U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__exe_task_switch_finished 
        = ((0x66U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (0xaU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_204 
        = (((0x1cU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
            & (8U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex))) 
           & ((7U | (0x7f8U & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__exception_inst__DOT__exc_vector_full) 
                               << 3U))) > (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__idtr_limit)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_211 
        = (((0x28U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
            & (3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex))) 
           & ((3U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_1) 
              != (3U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_3)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__offset_iret 
        = ((0x28U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_65 
        = ((0xfU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (2U != (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_123 
        = ((0x23U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_183 
        = ((0x3fU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_31 
        = ((4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (0xaU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_6 
        = ((4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_126 
        = ((0x23U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (2U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_17 
        = ((3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (7U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_146 
        = ((0x2eU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__exe_condition_inst__DOT____VdfgRegularize_hc2c49180_0_0 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__cflag) 
           | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__zflag));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_120 
        = ((0x28U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (6U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_184 
        = ((0x3fU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (8U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__offset_int_real 
        = ((0x1cU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (2U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_96 
        = ((0x1dU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_7 
        = ((0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)) 
           | (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_221 
        = (IData)((0U != (0x110U & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__wr_mutex))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_241 
        = ((0x5fU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           | (0x60U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_240 
        = ((0x5eU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_32 
        = (1U & ((IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor 
                          >> 0x2cU)) | ((9U != (0xfU 
                                                & (IData)(
                                                          (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor 
                                                           >> 0x28U)))) 
                                        & (1U != (0xfU 
                                                  & (IData)(
                                                            (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor 
                                                             >> 0x28U)))))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_201 
        = (((3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
            & (0xbU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex))) 
           | ((0x57U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
              & (9U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_211 
        = (((4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
            & (6U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex))) 
           | ((0x1cU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
              & (0xeU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_93 
        = ((0x1cU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (9U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_232 
        = ((0x58U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_207 
        = (((4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
            & (4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex))) 
           | (((0x57U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
               & (0xfU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex))) 
              | ((0x1cU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
                 & (0xcU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)))));
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_58 
        = ((0x51U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           | (0x52U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)));
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_54 
        = ((0x4fU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           | (0x50U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_254 
        = ((0x13U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           | ((0x14U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
              | (0x15U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_235 
        = ((2U == (3U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_1 
                         >> 0x10U))) | (1U == (3U & 
                                               (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_1 
                                                >> 0x10U))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__dec_operand_32bit 
        = (1U & ((IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__cs_cache 
                          >> 0x36U)) ^ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decode_inst__DOT__decode_prefix_inst__DOT__prefix_group_3)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_228 
        = ((3U == (3U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_1 
                         >> 0x10U))) | (0U == (3U & 
                                               (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_1 
                                                >> 0x10U))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_hlt_in_progress 
        = ((0xcU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_27 
        = ((5U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)) 
           | (6U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_74 
        = ((0x1dU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (7U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_216 
        = ((0x5eU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_156 
        = ((0x49U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_0 
        = ((1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_258 
        = ((0x68U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           | (0x69U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_227 
        = ((0x63U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           & (6U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_238 
        = ((0x66U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_177 
        = (((5U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
            & (5U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex))) 
           | ((0x1eU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
              & (4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_180 
        = (((0x3fU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
            & (9U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex))) 
           | (((0x28U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
               & (8U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex))) 
              | (((5U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
                  & (4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex))) 
                 | ((0x1eU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
                    & (5U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex))))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_179 
        = (((0x3fU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
            & (8U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex))) 
           | ((0x28U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
              & (6U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_174 
        = (((0x3fU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
            & (4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex))) 
           | (((0x28U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
               & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex))) 
              | (((4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
                  & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex))) 
                 | (((4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
                     & (0xaU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex))) 
                    | (((0x57U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
                        & (0xbU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex))) 
                       | (((0x58U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
                           & (2U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex))) 
                          | ((0x1dU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
                             & (4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)))))))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__tr_limit 
        = ((1U & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__tr_cache 
                          >> 0x37U))) ? (0xfffU | (
                                                   ((IData)(
                                                            (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__tr_cache 
                                                             >> 0x30U)) 
                                                    << 0x1cU) 
                                                   | (0xffff000U 
                                                      & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__tr_cache) 
                                                         << 0xcU))))
            : ((0xf0000U & ((IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__tr_cache 
                                     >> 0x30U)) << 0x10U)) 
               | (0xffffU & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__tr_cache))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_244 
        = ((0x66U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           & ((3U <= (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)) 
              & (8U >= (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_234 
        = ((0x63U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           & (0xbU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_60 
        = ((0x1cU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           & (7U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_62 
        = ((0x1dU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           & (5U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_63 
        = ((0x1eU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           & (6U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_21 
        = ((6U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           & (~ ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex) 
                 >> 3U)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_82 
        = ((0x23U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           & (3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_89 
        = ((0x28U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           & (2U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_93 
        = ((0x28U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           & (7U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_87 
        = ((0x23U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           & (0xfU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_130 
        = ((0x35U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_70 
        = ((0x21U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__wr_glob_param_3_set 
        = ((0x66U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_231 
        = ((0x63U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           & (0xaU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_232 
        = ((0x64U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           & (0xdU >= (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_14 
        = ((3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           & ((0xdU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)) 
              | (0xeU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__rd_string_ignore 
        = ((0U != (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_prefix_group_1_rep)) 
           & (((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_address_32bit)) 
               & (0U == (0xffffU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ecx))) 
              | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_address_32bit) 
                 & (0U == vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ecx))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_149 
        = ((3U & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor 
                          >> 0x2dU))) != (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__cs_rpl));
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__exe_condition_inst__DOT____VdfgRegularize_hc2c49180_0_2 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__oflag) 
           ^ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__sflag));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_230 
        = ((0x63U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           & (9U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_107 
        = ((0x2dU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_116 
        = ((0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)) 
           | (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_126 
        = ((3U & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor 
                          >> 0x2dU))) < (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__cs_rpl));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__rd_descriptor_not_in_limits 
        = (1U & (((~ (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_1 
                      >> 2U)) & ((7U | (0xfff8U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_1)) 
                                 > (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__gdtr_limit))) 
                 | ((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_1 
                     >> 2U) & ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ldtr_cache_valid)) 
                               | ((7U | (0xfff8U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_1)) 
                                  > ((1U & (IData)(
                                                   (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ldtr_cache 
                                                    >> 0x37U)))
                                      ? (0xfffU | (
                                                   ((IData)(
                                                            (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ldtr_cache 
                                                             >> 0x30U)) 
                                                    << 0x1cU) 
                                                   | (0xffff000U 
                                                      & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ldtr_cache) 
                                                         << 0xcU))))
                                      : ((0xf0000U 
                                          & ((IData)(
                                                     (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ldtr_cache 
                                                      >> 0x30U)) 
                                             << 0x10U)) 
                                         | (0xffffU 
                                            & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ldtr_cache)))))))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_253 
        = ((0x66U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           & (9U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_164 
        = (IData)((0x180000000000ULL != (0x180000000000ULL 
                                         & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_28 
        = ((7U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)) 
           | (8U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_150 
        = ((3U & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor 
                          >> 0x2dU))) > (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__cs_rpl));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_49 
        = ((8U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)) 
           | (9U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_333 
        = (IData)((0x80000000000ULL == (0xc0000000000ULL 
                                        & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_11 
        = (IData)((0xc0000000000ULL == (0xc0000000000ULL 
                                        & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_197 
        = ((0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)) 
           | (2U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_44 
        = (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_2 
           > ((1U & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor_2 
                             >> 0x37U))) ? (0xfffU 
                                            | (((IData)(
                                                        (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor_2 
                                                         >> 0x30U)) 
                                                << 0x1cU) 
                                               | (0xffff000U 
                                                  & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor_2) 
                                                     << 0xcU))))
               : ((0xf0000U & ((IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor_2 
                                        >> 0x30U)) 
                               << 0x10U)) | (0xffffU 
                                             & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor_2)))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__dcache_control_ram_inst__DOT____VdfgRegularize_h80593286_0_0 
        = (1U & ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__dcache_control_ram_inst__DOT__init_done)) 
                 | (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__dcache_control_ram_inst__DOT__state))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decode_inst__DOT__decode_prefix_inst__DOT__CRx_DRx_condition 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__dec_prefix_2byte) 
           & (0x20U == (0xfcU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decoder[0U])));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_170 
        = ((0x3aU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_55 
        = ((9U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decode_inst__DOT__is_prefix 
        = ((0xf2U == (0xffU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decoder[0U])) 
           | ((0xf3U == (0xffU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decoder[0U])) 
              | ((0xf0U == (0xffU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decoder[0U])) 
                 | ((0x26U == (0xffU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decoder[0U])) 
                    | ((0x2eU == (0xffU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decoder[0U])) 
                       | ((0x36U == (0xffU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decoder[0U])) 
                          | ((0x3eU == (0xffU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decoder[0U])) 
                             | ((0x64U == (0xffU & 
                                           vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decoder[0U])) 
                                | ((0x65U == (0xffU 
                                              & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decoder[0U])) 
                                   | ((0x66U == (0xffU 
                                                 & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decoder[0U])) 
                                      | ((0x67U == 
                                          (0xffU & 
                                           vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decoder[0U])) 
                                         | (0xfU == 
                                            (0xffU 
                                             & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decoder[0U])))))))))))));
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_35 
        = ((0xeU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)) 
           | (0xfU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__protected_mode 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__vmflag)) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__cr0_pe));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__io_allow_check_needed 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__cr0_pe) 
           & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__vmflag) 
              | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__cs_rpl) 
                 > (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__iopl))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_desc_limit 
        = ((1U & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor 
                          >> 0x37U))) ? (0xfffU | (
                                                   ((IData)(
                                                            (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor 
                                                             >> 0x30U)) 
                                                    << 0x1cU) 
                                                   | (0xffff000U 
                                                      & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor) 
                                                         << 0xcU))))
            : ((0xf0000U & ((IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor 
                                     >> 0x30U)) << 0x10U)) 
               | (0xffffU & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decode_inst__DOT__stop 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__dec_ud_fault) 
           | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__dec_gp_fault) 
              | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__dec_pf_fault)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__write_ac_fault 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__memory_write_inst__DOT__ac_fault) 
           | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__write_ac));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__write_page_fault 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__memory_write_inst__DOT__page_fault) 
           | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__write_pf));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__memory_write_inst__DOT__cond_5 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__write_ac) 
           | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__write_pf));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_29 
        = ((0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)) 
           | (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_26 
        = ((2U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)) 
           | (3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_string_finish 
        = ((0U != (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_prefix_group_1_rep)) 
           & (((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_address_32bit)) 
               & (1U == (0xffffU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ecx))) 
              | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_address_32bit) 
                 & (1U == vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ecx))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__prefetch_inst__DOT__cs_limit 
        = ((1U & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__cs_cache 
                          >> 0x37U))) ? (0xfffU | (
                                                   ((IData)(
                                                            (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__cs_cache 
                                                             >> 0x30U)) 
                                                    << 0x1cU) 
                                                   | (0xffff000U 
                                                      & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__cs_cache) 
                                                         << 0xcU))))
            : ((0xf0000U & ((IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__cs_cache 
                                     >> 0x30U)) << 0x10U)) 
               | (0xffffU & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__cs_cache))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__v8086_mode 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__cr0_pe) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__vmflag));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_string_ignore 
        = ((0U != (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_prefix_group_1_rep)) 
           & (((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_address_32bit)) 
               & (0U == (0xffffU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ecx))) 
              | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_address_32bit) 
                 & (0U == vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ecx))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlbwrite_done 
        = ((0xcU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__state)) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__link_dcachewrite_inst__DOT__done_delayed));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__dec_address_32bit 
        = (1U & ((IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__cs_cache 
                          >> 0x36U)) ^ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decode_inst__DOT__decode_prefix_inst__DOT__prefix_group_4)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__translate_do 
        = (((0xeU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__state)) 
            | ((0xaU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__state)) 
               | ((9U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__state)) 
                  | (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__state))))) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__cr0_pg));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_mutex) 
           | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__wr_mutex));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__icache_inst__DOT__icache_control_ram_inst__DOT__init_done_to_reg 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__icache_inst__DOT__icache_control_ram_inst__DOT____VdfgRegularize_h31ca9ccd_0_2) 
           | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__icache_inst__DOT__icache_control_ram_inst__DOT__init_done));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__dcache_control_ram_inst__DOT__init_done_to_reg 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__dcache_control_ram_inst__DOT____VdfgRegularize_h80593286_0_8) 
           | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__dcache_control_ram_inst__DOT__init_done));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__icache_inst__DOT__icache_control_ram_inst__DOT__after_invalidate_to_reg 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__icache_inst__DOT__icache_control_ram_inst__DOT____VdfgRegularize_h31ca9ccd_0_2) 
           | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__icache_inst__DOT__icache_control_ram_inst__DOT__state) 
              & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__invdcode_done) 
                 | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__icache_inst__DOT__icache_control_ram_inst__DOT__after_invalidate))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decode_inst__DOT__decode_regs_inst__DOT__acceptable_2 
        = ((0xfU > (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decode_inst__DOT__decode_regs_inst__DOT__total_count))
            ? (0xfU & ((IData)(0xfU) - (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decode_inst__DOT__decode_regs_inst__DOT__total_count)))
            : 0U);
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_220 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_104)
            ? 0U : (0xfffcU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_1));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_effective_address_inst__DOT__sib_base32_plus_index32_scaled 
        = (((0U == (7U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                          >> 0x10U))) ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__eax
             : ((1U == (7U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                              >> 0x10U))) ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ecx
                 : ((2U == (7U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                                  >> 0x10U))) ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__edx
                     : ((3U == (7U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                                      >> 0x10U))) ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ebx
                         : ((4U == (7U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                                          >> 0x10U)))
                             ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__esp
                             : ((IData)((0x50000U == 
                                         (0x7c000U 
                                          & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U])))
                                 ? ((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[1U] 
                                     << 8U) | (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                                               >> 0x18U))
                                 : ((5U == (7U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                                                  >> 0x10U)))
                                     ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ebp
                                     : ((6U == (7U 
                                                & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                                                   >> 0x10U)))
                                         ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__esi
                                         : vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__edi)))))))) 
           + ((0U == (3U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                            >> 0x16U))) ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_effective_address_inst__DOT__sib_index32
               : ((1U == (3U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                                >> 0x16U))) ? VL_SHIFTL_III(32,32,32, vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_effective_address_inst__DOT__sib_index32, 1U)
                   : ((2U == (3U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                                    >> 0x16U))) ? VL_SHIFTL_III(32,32,32, vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_effective_address_inst__DOT__sib_index32, 2U)
                       : VL_SHIFTL_III(32,32,32, vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_effective_address_inst__DOT__sib_index32, 3U)))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__offset_ret_far_se 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_187) 
           & (3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_60 = ((0xcU 
                                                  == 
                                                  (0xfU 
                                                   & (IData)(
                                                             (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor 
                                                              >> 0x28U))))
                                                  ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_285
                                                  : 
                                                 (0xffffU 
                                                  & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor)));
    if (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__dflag) {
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_string_inst__DOT__w_esi 
            = (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__esi 
               - vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_string_inst__DOT__w_string_size);
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_string_inst__DOT__w_edi 
            = (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__edi 
               - vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_string_inst__DOT__w_string_size);
    } else {
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_string_inst__DOT__w_esi 
            = (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__esi 
               + vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_string_inst__DOT__w_string_size);
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_string_inst__DOT__w_edi 
            = (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__edi 
               + vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_string_inst__DOT__w_string_size);
    }
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_bit_scan_reverse 
        = ((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_src_ze 
            >> 0x1fU) ? 0x1fU : ((0x40000000U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_src_ze)
                                  ? 0x1eU : ((0x20000000U 
                                              & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_src_ze)
                                              ? 0x1dU
                                              : ((0x10000000U 
                                                  & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_src_ze)
                                                  ? 0x1cU
                                                  : 
                                                 ((0x8000000U 
                                                   & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_src_ze)
                                                   ? 0x1bU
                                                   : 
                                                  ((0x4000000U 
                                                    & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_src_ze)
                                                    ? 0x1aU
                                                    : 
                                                   ((0x2000000U 
                                                     & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_src_ze)
                                                     ? 0x19U
                                                     : 
                                                    ((0x1000000U 
                                                      & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_src_ze)
                                                      ? 0x18U
                                                      : 
                                                     ((0x800000U 
                                                       & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_src_ze)
                                                       ? 0x17U
                                                       : 
                                                      ((0x400000U 
                                                        & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_src_ze)
                                                        ? 0x16U
                                                        : 
                                                       ((0x200000U 
                                                         & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_src_ze)
                                                         ? 0x15U
                                                         : 
                                                        ((0x100000U 
                                                          & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_src_ze)
                                                          ? 0x14U
                                                          : 
                                                         ((0x80000U 
                                                           & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_src_ze)
                                                           ? 0x13U
                                                           : 
                                                          ((0x40000U 
                                                            & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_src_ze)
                                                            ? 0x12U
                                                            : 
                                                           ((0x20000U 
                                                             & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_src_ze)
                                                             ? 0x11U
                                                             : 
                                                            ((0x10000U 
                                                              & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_src_ze)
                                                              ? 0x10U
                                                              : 
                                                             ((0x8000U 
                                                               & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_src_ze)
                                                               ? 0xfU
                                                               : 
                                                              ((0x4000U 
                                                                & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_src_ze)
                                                                ? 0xeU
                                                                : 
                                                               ((0x2000U 
                                                                 & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_src_ze)
                                                                 ? 0xdU
                                                                 : 
                                                                ((0x1000U 
                                                                  & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_src_ze)
                                                                  ? 0xcU
                                                                  : 
                                                                 ((0x800U 
                                                                   & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_src_ze)
                                                                   ? 0xbU
                                                                   : 
                                                                  ((0x400U 
                                                                    & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_src_ze)
                                                                    ? 0xaU
                                                                    : 
                                                                   ((0x200U 
                                                                     & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_src_ze)
                                                                     ? 9U
                                                                     : 
                                                                    ((0x100U 
                                                                      & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_src_ze)
                                                                      ? 8U
                                                                      : 
                                                                     ((0x80U 
                                                                       & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_src_ze)
                                                                       ? 7U
                                                                       : 
                                                                      ((0x40U 
                                                                        & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_src_ze)
                                                                        ? 6U
                                                                        : 
                                                                       ((0x20U 
                                                                         & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_src_ze)
                                                                         ? 5U
                                                                         : 
                                                                        ((0x10U 
                                                                          & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_src_ze)
                                                                          ? 4U
                                                                          : 
                                                                         ((8U 
                                                                           & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_src_ze)
                                                                           ? 3U
                                                                           : 
                                                                          ((4U 
                                                                            & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_src_ze)
                                                                            ? 2U
                                                                            : 
                                                                           ((2U 
                                                                             & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_src_ze)
                                                                             ? 1U
                                                                             : 0U)))))))))))))))))))))))))))))));
    if (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_address_32bit) {
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_string_inst__DOT__w_edi_offset 
            = vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__edi;
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_ecx_final 
            = (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ecx 
               - (IData)(1U));
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_esi_final 
            = vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_string_inst__DOT__w_esi;
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_edi_final 
            = vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_string_inst__DOT__w_edi;
    } else {
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_string_inst__DOT__w_edi_offset 
            = (0xffffU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__edi);
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_ecx_final 
            = vlSelfRef.__VdfgRegularize_hd87f99a1_0_108;
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_esi_final 
            = ((0xffff0000U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__esi) 
               | (0xffffU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_string_inst__DOT__w_esi));
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_edi_final 
            = ((0xffff0000U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__edi) 
               | (0xffffU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_string_inst__DOT__w_edi));
    }
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_147 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__cr0_pe)) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_69));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_9 = ((0U 
                                                 == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__fetch_inst__DOT__fetch_count))
                                                 ? 
                                                (((QData)((IData)(
                                                                  vlSelfRef.main_fixed__DOT__ao486_inst__DOT__prefetchfifo_accept_data[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelfRef.main_fixed__DOT__ao486_inst__DOT__prefetchfifo_accept_data[0U])))
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__fetch_inst__DOT__fetch_count))
                                                  ? 
                                                 (0xffffffffffffffULL 
                                                  & (((QData)((IData)(
                                                                      vlSelfRef.main_fixed__DOT__ao486_inst__DOT__prefetchfifo_accept_data[1U])) 
                                                      << 0x18U) 
                                                     | ((QData)((IData)(
                                                                        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__prefetchfifo_accept_data[0U])) 
                                                        >> 8U)))
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__fetch_inst__DOT__fetch_count))
                                                   ? 
                                                  (0xffffffffffffULL 
                                                   & (((QData)((IData)(
                                                                       vlSelfRef.main_fixed__DOT__ao486_inst__DOT__prefetchfifo_accept_data[1U])) 
                                                       << 0x10U) 
                                                      | ((QData)((IData)(
                                                                         vlSelfRef.main_fixed__DOT__ao486_inst__DOT__prefetchfifo_accept_data[0U])) 
                                                         >> 0x10U)))
                                                   : 
                                                  ((3U 
                                                    == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__fetch_inst__DOT__fetch_count))
                                                    ? 
                                                   (0xffffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__prefetchfifo_accept_data[1U])) 
                                                        << 8U) 
                                                       | ((QData)((IData)(
                                                                          vlSelfRef.main_fixed__DOT__ao486_inst__DOT__prefetchfifo_accept_data[0U])) 
                                                          >> 0x18U)))
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__fetch_inst__DOT__fetch_count))
                                                     ? (QData)((IData)(
                                                                       vlSelfRef.main_fixed__DOT__ao486_inst__DOT__prefetchfifo_accept_data[1U]))
                                                     : 
                                                    ((5U 
                                                      == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__fetch_inst__DOT__fetch_count))
                                                      ? (QData)((IData)(
                                                                        (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__prefetchfifo_accept_data[1U] 
                                                                         >> 8U)))
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__fetch_inst__DOT__fetch_count))
                                                       ? (QData)((IData)(
                                                                         (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__prefetchfifo_accept_data[1U] 
                                                                          >> 0x10U)))
                                                       : (QData)((IData)(
                                                                         (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__prefetchfifo_accept_data[1U] 
                                                                          >> 0x18U))))))))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__memory_read_inst__DOT__cond_3 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__memory_read_inst__DOT____VdfgRegularize_h2f202e7f_0_9) 
           | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__memory_read_inst__DOT____VdfgRegularize_h2f202e7f_0_8));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__write_double_linear_to_reg 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT____VdfgRegularize_h94f45732_0_33)
            ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__linear
            : vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__write_double_linear);
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_new_stack_esp 
        = ((1U & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor 
                          >> 0x36U))) ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__wr_stack_offset
            : main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_stack_inst__DOT____VdfgRegularize_h143f96f3_0_1);
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__avalon_mem_inst__DOT____VdfgRegularize_hda04a1ba_0_14 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__avalon_mem_inst__DOT____VdfgRegularize_hda04a1ba_0_13) 
           & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__avalon_mem_inst__DOT__counter)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_135 
        = ((1U & ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_operand_32bit)) 
                  | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_is_8bit)))
            ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_134
            : vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result);
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_200 
        = (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_146) 
            | ((0x51U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
               | (0x52U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)))) 
           & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__prefetch_control_inst__DOT____VdfgRegularize_h6cb41d31_0_4 
        = ((1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__prefetch_control_inst__DOT__state)) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__prefetch_control_inst__DOT__offset_update));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__aflag_arith 
        = (1U & ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__w_logic_arith)) 
                 & ((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_src 
                     ^ (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_dst 
                        ^ vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result)) 
                    >> 4U)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__oflag_arith 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__w_logic_arith)) 
           & (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__w_sub_arith) 
               & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_is_8bit))
               ? (((~ (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_src 
                       >> 7U)) & (IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_260)) 
                  | ((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_src 
                      >> 7U) & (IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_261)))
               : (((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_operand_32bit)) 
                   & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__w_sub_arith))
                   ? (((~ (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_src 
                           >> 0xfU)) & (IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_258)) 
                      | ((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_src 
                          >> 0xfU) & (IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_259)))
                   : ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__w_sub_arith)
                       ? (((~ (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_src 
                               >> 0x1fU)) & (IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_256)) 
                          | ((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_src 
                              >> 0x1fU) & (IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_257)))
                       : ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_is_8bit)
                           ? (((~ (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_src 
                                   >> 7U)) & (IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_261)) 
                              | ((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_src 
                                  >> 7U) & (IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_260)))
                           : ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_operand_32bit)
                               ? (((~ (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_src 
                                       >> 0x1fU)) & (IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_257)) 
                                  | ((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_src 
                                      >> 0x1fU) & (IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_256)))
                               : (((~ (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_src 
                                       >> 0xfU)) & (IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_259)) 
                                  | ((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_src 
                                      >> 0xfU) & (IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_258)))))))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cflag_arith 
        = (1U & ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__w_logic_arith)) 
                 & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_is_8bit)
                     ? ((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_src 
                         ^ (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_dst 
                            ^ vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result)) 
                        >> 8U) : ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_operand_32bit)
                                   ? ((8U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_arith_index))
                                       ? (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_arith_add_carry)
                                       : ((0xaU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_arith_index))
                                           ? (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_arith_adc_carry)
                                           : ((0xbU 
                                               == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_arith_index))
                                               ? (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_arith_sbb_carry)
                                               : (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_arith_sub_carry))))
                                   : ((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_src 
                                       ^ (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_dst 
                                          ^ vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result)) 
                                      >> 0x10U)))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_register_inst__DOT__w_operand_32bit 
        = ((0x10U != (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_operand_32bit) 
              | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_112) 
                 | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_265))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__exe_push_eflags 
        = (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__idflag) 
            << 0x15U) | (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__acflag) 
                          << 0x12U) | (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__vmflag) 
                                        << 0x11U) | 
                                       (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rflag) 
                                         << 0x10U) 
                                        | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_0)))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_265 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_16) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_operand_32bit));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_302 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_operand_32bit)) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_16));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_281 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_227) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_operand_32bit));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_297 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_operand_32bit)) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_227));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__prefetchfifo_accept_empty 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__prefetch_fifo_inst__DOT__second_processing)) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__prefetch_fifo_inst__DOT__empty));
    if (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__avalon_mem_inst__DOT____VdfgRegularize_hda04a1ba_0_15) {
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__avalon_mem_inst__DOT__bus_code_partial_to_reg 
            = vlSelfRef.avm_readdata;
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__avalon_mem_inst__DOT____VdfgRegularize_hda04a1ba_0_16 
            = (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__avalon_mem_inst__DOT__counter));
    } else {
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__avalon_mem_inst__DOT__bus_code_partial_to_reg 
            = vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__avalon_mem_inst__DOT__bus_code_partial;
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__avalon_mem_inst__DOT____VdfgRegularize_hda04a1ba_0_16 = 0U;
    }
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__exe_arith_sbb 
        = (0x1ffffffffULL & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__exe_arith_sub 
                             - (QData)((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__cflag))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_273 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_204) 
           & (4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_275 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_204) 
           & (0x57U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__exc_debug_start 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__exc_load) 
           & ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__exception_inst__DOT__interrupt_load)) 
              & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__exception_inst__DOT__vector))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__exception_inst__DOT__cond_1 
        = ((~ ((3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__exception_inst__DOT__vector)) 
               | (4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__exception_inst__DOT__vector)))) 
           & (0x12U != (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__exception_inst__DOT__vector)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__exception_inst__DOT__exception_type 
        = (((0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__exception_inst__DOT__vector)) 
            | ((0xaU <= (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__exception_inst__DOT__vector)) 
               & (0xdU >= (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__exception_inst__DOT__vector))))
            ? 1U : ((8U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__exception_inst__DOT__vector))
                     ? 3U : ((0xeU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__exception_inst__DOT__vector))
                              ? 2U : 0U)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_bit_selected 
        = (1U & ((0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_bit_selector))
                  ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst
                  : ((1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_bit_selector))
                      ? (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst 
                         >> 1U) : ((2U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_bit_selector))
                                    ? (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst 
                                       >> 2U) : ((3U 
                                                  == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_bit_selector))
                                                  ? 
                                                 (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst 
                                                  >> 3U)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_bit_selector))
                                                   ? 
                                                  (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst 
                                                   >> 4U)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_bit_selector))
                                                    ? 
                                                   (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst 
                                                    >> 5U)
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_bit_selector))
                                                     ? 
                                                    (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst 
                                                     >> 6U)
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_bit_selector))
                                                      ? 
                                                     (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst 
                                                      >> 7U)
                                                      : 
                                                     ((8U 
                                                       == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_bit_selector))
                                                       ? 
                                                      (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst 
                                                       >> 8U)
                                                       : 
                                                      ((9U 
                                                        == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_bit_selector))
                                                        ? 
                                                       (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst 
                                                        >> 9U)
                                                        : 
                                                       ((0xaU 
                                                         == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_bit_selector))
                                                         ? 
                                                        (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst 
                                                         >> 0xaU)
                                                         : 
                                                        ((0xbU 
                                                          == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_bit_selector))
                                                          ? 
                                                         (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst 
                                                          >> 0xbU)
                                                          : 
                                                         ((0xcU 
                                                           == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_bit_selector))
                                                           ? 
                                                          (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst 
                                                           >> 0xcU)
                                                           : 
                                                          ((0xdU 
                                                            == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_bit_selector))
                                                            ? 
                                                           (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst 
                                                            >> 0xdU)
                                                            : 
                                                           ((0xeU 
                                                             == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_bit_selector))
                                                             ? 
                                                            (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst 
                                                             >> 0xeU)
                                                             : 
                                                            ((0xfU 
                                                              == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_bit_selector))
                                                              ? 
                                                             (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst 
                                                              >> 0xfU)
                                                              : 
                                                             ((0x10U 
                                                               == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_bit_selector))
                                                               ? 
                                                              (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst 
                                                               >> 0x10U)
                                                               : 
                                                              ((0x11U 
                                                                == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_bit_selector))
                                                                ? 
                                                               (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst 
                                                                >> 0x11U)
                                                                : 
                                                               ((0x12U 
                                                                 == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_bit_selector))
                                                                 ? 
                                                                (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst 
                                                                 >> 0x12U)
                                                                 : 
                                                                ((0x13U 
                                                                  == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_bit_selector))
                                                                  ? 
                                                                 (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst 
                                                                  >> 0x13U)
                                                                  : 
                                                                 ((0x14U 
                                                                   == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_bit_selector))
                                                                   ? 
                                                                  (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst 
                                                                   >> 0x14U)
                                                                   : 
                                                                  ((0x15U 
                                                                    == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_bit_selector))
                                                                    ? 
                                                                   (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst 
                                                                    >> 0x15U)
                                                                    : 
                                                                   ((0x16U 
                                                                     == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_bit_selector))
                                                                     ? 
                                                                    (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst 
                                                                     >> 0x16U)
                                                                     : 
                                                                    ((0x17U 
                                                                      == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_bit_selector))
                                                                      ? 
                                                                     (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst 
                                                                      >> 0x17U)
                                                                      : 
                                                                     ((0x18U 
                                                                       == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_bit_selector))
                                                                       ? 
                                                                      (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst 
                                                                       >> 0x18U)
                                                                       : 
                                                                      ((0x19U 
                                                                        == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_bit_selector))
                                                                        ? 
                                                                       (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst 
                                                                        >> 0x19U)
                                                                        : 
                                                                       ((0x1aU 
                                                                         == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_bit_selector))
                                                                         ? 
                                                                        (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst 
                                                                         >> 0x1aU)
                                                                         : 
                                                                        ((0x1bU 
                                                                          == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_bit_selector))
                                                                          ? 
                                                                         (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst 
                                                                          >> 0x1bU)
                                                                          : 
                                                                         ((0x1cU 
                                                                           == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_bit_selector))
                                                                           ? 
                                                                          (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst 
                                                                           >> 0x1cU)
                                                                           : 
                                                                          ((0x1dU 
                                                                            == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_bit_selector))
                                                                            ? 
                                                                           (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst 
                                                                            >> 0x1dU)
                                                                            : 
                                                                           ((0x1eU 
                                                                             == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_bit_selector))
                                                                             ? 
                                                                            (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst 
                                                                             >> 0x1eU)
                                                                             : 
                                                                            (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst 
                                                                             >> 0x1fU)))))))))))))))))))))))))))))))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__exe_arith_adc 
        = (0x1ffffffffULL & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__exe_arith_add 
                             + (QData)((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__cflag))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_divide_inst__DOT__div_quotient_neg 
        = (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_divide_inst__DOT__div_numer[2U] 
           ^ (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_divide_inst__DOT__div_denom 
              >> 0x20U));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__div_result_remainder 
        = ((1U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_divide_inst__DOT__div_numer[2U])
            ? (- (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_divide_inst__DOT__div_dividend))
            : (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_divide_inst__DOT__div_dividend));
    if (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__exe_bcd_condition_af) {
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_daa_step1 
            = (0xffU & ((IData)(6U) + vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst));
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_das_step1 
            = (0xffU & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst 
                        - (IData)(6U)));
    } else {
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_daa_step1 
            = (0xffU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst);
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_das_step1 
            = (0xffU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst);
    }
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT____VdfgRegularize_hf83a959e_0_11 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_operand_32bit)) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT__e_shift_SHRD));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT____VdfgRegularize_he8fe0baf_0_3 
        = (((- (IData)((1U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_modregrm_imm 
                              >> 7U)))) << 8U) | (0xffU 
                                                  & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_modregrm_imm));
    vlSelfRef.avalon_io_read = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__avalon_io_inst__DOT__address_out_of_bounds)) 
                                & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__avalon_io_inst__DOT__avalon_io_read_reg));
    vlSelfRef.avalon_io_write = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__avalon_io_inst__DOT__address_out_of_bounds)) 
                                 & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__avalon_io_inst__DOT__avalon_io_write_reg));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__avalon_io_inst__DOT__avalon_io_readdata_final 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__avalon_io_inst__DOT__address_out_of_bounds)
            ? 0xffffffffU : vlSelfRef.main_fixed__DOT__ao486_inst__DOT__avalon_io_inst__DOT____VdfgRegularize_h5ceef672_0_7);
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__avalon_io_inst__DOT____VdfgRegularize_h5ceef672_0_30 
        = ((((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__avalon_io_inst__DOT__address_out_of_bounds)
              ? 0xffffffU : (0xffffffU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__avalon_io_inst__DOT____VdfgRegularize_h5ceef672_0_7)) 
            << 8U) | (0xffU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__io_read_data));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__avalon_io_inst__DOT__cond_4 
        = (1U & ((~ (IData)(vlSelfRef.avalon_io_waitrequest)) 
                 | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__avalon_io_inst__DOT__address_out_of_bounds)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__avalon_io_inst__DOT__cond_8 
        = ((IData)(vlSelfRef.avalon_io_readdatavalid) 
           | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__avalon_io_inst__DOT__address_out_of_bounds));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT__e_shift_cmd_rot 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT__e_shift_ROL) 
           | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT__e_shift_ROR));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT____VdfgRegularize_hf83a959e_0_6 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_operand_32bit)) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT__e_shift_SHLD));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT__e_shift_SHL 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__exe_prefix_2byte)) 
           & (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_68));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT__e_shift_cf_of_rotate_carry_8bit 
        = ((0U != (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT__e_shift_count)) 
           & ((9U != (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT__e_shift_count)) 
              & ((0x12U != (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT__e_shift_count)) 
                 & (0x1bU != (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT__e_shift_count)))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT__e_shift_cf_of_rotate_carry_16bit 
        = ((0U != (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT__e_shift_count)) 
           & (0x11U != (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT__e_shift_count)));
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT____VdfgRegularize_hf83a959e_0_7 
        = (((QData)((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT__e_shift_dst_wire)) 
            << 0x20U) | (QData)((IData)(((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__src 
                                          << 0x10U) 
                                         | (0xffffU 
                                            & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst)))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT__e_shift_cmd_carry 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT__e_shift_RCL) 
           | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT__e_shift_RCR));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT____VdfgRegularize_hf83a959e_0_5 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT__e_shift_RCL) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__exe_is_8bit));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb3_ena 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb2_ena) 
           & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb2 
                      >> 0x2aU)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_108 
        = ((0x6fU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_257));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__dcache_control_ram_inst__DOT____VdfgRegularize_h80593286_0_14 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__dcache_control_ram_inst__DOT__wbinvd_valid)) 
           & (2U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__dcache_control_ram_inst__DOT__state)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__control_ram_writeline_do 
        = ((2U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__dcache_control_ram_inst__DOT__state)) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__dcache_control_ram_inst__DOT__wbinvd_valid));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__prefetch_control_inst__DOT__length 
        = (0x1fU & (((0x1fffU & ((IData)(0x1000U) - 
                                 (0xfffU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__prefetch_inst__DOT__linear))) 
                     < (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__prefetch_length))
                     ? (- (0xfffU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__prefetch_inst__DOT__linear))
                     : (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__prefetch_length)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT____VdfgRegularize_h94f45732_0_69 
        = ((2U != (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__current_type)) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT____VdfgRegularize_h94f45732_0_44));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_316 
        = ((~ ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__wr_mutex) 
               >> 0xaU)) & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_26));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_238 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_223) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_operand_32bit));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_310 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_operand_32bit)) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_223));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_236 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_12) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_operand_32bit));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_312 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_operand_32bit)) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_12));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT____VdfgRegularize_hf83a959e_0_55 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT__e_shift_RCL) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT____VdfgRegularize_hf83a959e_0_51));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_152 
        = ((IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_109) 
           & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_151 
        = ((IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_109) 
           & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decode_inst__DOT__decode_commands_inst__DOT__cond_33 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decode_inst__DOT__decode_commands_inst__DOT__cond_12) 
           | (1U == (7U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decoder[0U] 
                           >> 0xbU))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_17 
        = ((IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_24) 
           & (0U == (0x3c0000U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_3)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_18 
        = ((IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_24) 
           & (0U != (0xfU & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_3 
                             >> 0x12U))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_29 
        = ((IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_32) 
           & (0U != (0x1fU & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_3 
                              >> 0x14U))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_34 
        = ((IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_32) 
           & (0U == (0x1f00000U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_3)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_30 
        = ((IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_35) 
           & (0x100000U == (0x1f00000U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_3)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_31 
        = ((IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_35) 
           & (1U != (0x1fU & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_3 
                              >> 0x14U))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_32 
        = ((IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_38) 
           & (0x100000U == (0x1f00000U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_3)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_33 
        = ((IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_38) 
           & (1U != (0x1fU & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_3 
                              >> 0x14U))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_57 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__cr0_pe)) 
           & (IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_47));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_63 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__cr0_pe) 
           & (IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_47));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_66 
        = ((IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_48) 
           & (0x50000000000ULL == (0xf0000000000ULL 
                                   & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_69 
        = ((IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_48) 
           & (5U != (0xfU & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor 
                                     >> 0x28U)))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_86 
        = ((IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_53) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__exc_push_error));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_88 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__exc_push_error)) 
           & (IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_53));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_94 
        = ((IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_55) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__exc_push_error));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_96 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__exc_push_error)) 
           & (IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_55));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_104 
        = ((IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_59) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ntflag));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_107 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ntflag)) 
           & (IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_59));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_146 
        = ((IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_78) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__oflag));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_147 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__oflag)) 
           & (IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_78));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_171 
        = ((IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_89) 
           & (0U == (0x3c0000U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_3)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_172 
        = ((IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_89) 
           & (0U != (0xfU & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_3 
                             >> 0x12U))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_185 
        = ((IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_95) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__cr0_pg));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_191 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__cr0_pg)) 
           & (IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_95));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_192 
        = ((IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_100) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__cr0_pg));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_195 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__cr0_pg)) 
           & (IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_100));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_211 
        = (((3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
            & (4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last))) 
           | (((3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
               & (0xaU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last))) 
              | (((4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
                  & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last))) 
                 | (((5U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
                     & (6U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last))) 
                    | (((4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
                        & (0xbU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last))) 
                       | (((9U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
                           & (2U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last))) 
                          | (((0xaU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
                              & (2U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last))) 
                             | (((0xcU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
                                 & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last))) 
                                | (((0xdU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
                                    & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last))) 
                                   | (((0x12U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
                                       & (3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last))) 
                                      | (((0x1cU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
                                          & (7U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last))) 
                                         | (((0x1eU 
                                              == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
                                             & (6U 
                                                == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last))) 
                                            | (((0x1dU 
                                                 == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
                                                & (5U 
                                                   == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last))) 
                                               | (((0x22U 
                                                    == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
                                                   & (1U 
                                                      == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last))) 
                                                  | (((0x23U 
                                                       == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
                                                      & (3U 
                                                         == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last))) 
                                                     | (((0x28U 
                                                          == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
                                                         & (0U 
                                                            == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last))) 
                                                        | (((0x2eU 
                                                             == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
                                                            & (2U 
                                                               == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last))) 
                                                           | (((0x2eU 
                                                                == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
                                                               & (5U 
                                                                  == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last))) 
                                                              | (((0x3aU 
                                                                   == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
                                                                  & (2U 
                                                                     == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last))) 
                                                                 | (((0x3eU 
                                                                      == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
                                                                     & (1U 
                                                                        == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last))) 
                                                                    | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_138) 
                                                                       | (((0x3fU 
                                                                            == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
                                                                           & (5U 
                                                                              == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last))) 
                                                                          | (((0x3fU 
                                                                               == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
                                                                              & (0xaU 
                                                                                == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last))) 
                                                                             | (((0x48U 
                                                                                == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
                                                                                & (0U 
                                                                                == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last))) 
                                                                                | (((0x4cU 
                                                                                == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
                                                                                & (0U 
                                                                                == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last))) 
                                                                                | (((0x4dU 
                                                                                == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
                                                                                & (3U 
                                                                                == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last))) 
                                                                                | (((0x53U 
                                                                                == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
                                                                                & (0U 
                                                                                == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last))) 
                                                                                | (((0x55U 
                                                                                == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
                                                                                & (1U 
                                                                                == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last))) 
                                                                                | (((0x57U 
                                                                                == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
                                                                                & (4U 
                                                                                == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last))) 
                                                                                | (((0x57U 
                                                                                == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
                                                                                & (8U 
                                                                                == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last))) 
                                                                                | (((0x57U 
                                                                                == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
                                                                                & (0xcU 
                                                                                == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last))) 
                                                                                | (((0x58U 
                                                                                == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
                                                                                & (3U 
                                                                                == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last))) 
                                                                                | (((0x59U 
                                                                                == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
                                                                                & (3U 
                                                                                == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last))) 
                                                                                | (((0x5eU 
                                                                                == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
                                                                                & (1U 
                                                                                == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last))) 
                                                                                | (((0x6aU 
                                                                                == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
                                                                                & (0U 
                                                                                == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last))) 
                                                                                | ((0x6eU 
                                                                                == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
                                                                                & (2U 
                                                                                == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last))))))))))))))))))))))))))))))))))))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_55 
        = ((IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_112) 
           & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_54 
        = ((IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_112) 
           & (1U != (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_110 
        = ((IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_60) 
           & (IData)(__VdfgRegularize_hd87f99a1_0_16));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_114 
        = ((~ (IData)(__VdfgRegularize_hd87f99a1_0_16)) 
           & (IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_60));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_173 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_253) 
           | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_254) 
              | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_255) 
                 | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_256))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__io_read_address 
        = (0xffffU & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_173)
                       ? ((0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex))
                           ? (0xffU & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                                       >> 8U)) : ((2U 
                                                   == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex))
                                                   ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_1
                                                   : vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__edx))
                       : ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_196)
                           ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__edx
                           : 0U)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__exe_bound_fault 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_244) 
           & (VL_LTS_III(32, vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_bound_dst, 
                         ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_operand_32bit)
                           ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_buffer
                           : (((- (IData)((1U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_buffer 
                                                 >> 0xfU)))) 
                               << 0x10U) | (0xffffU 
                                            & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_buffer)))) 
              | VL_GTS_III(32, vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_bound_dst, 
                           ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_operand_32bit)
                             ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__src
                             : vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_90))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_125 
        = ((IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_64) 
           & (8U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_126 
        = ((IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_64) 
           & (9U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_127 
        = ((IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_64) 
           & (0xaU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT____VdfgRegularize_h694aed34_0_10 
        = ((2U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__state)) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__req_readburst_done));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_divide_inst__DOT____VdfgRegularize_h9793d8a4_0_5 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_141) 
           | (0x20U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_158 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_106) 
           & (0xc000U == (0xc000U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U])));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_136 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_106) 
           & (3U != (3U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                           >> 0xeU))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_161 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_116) 
           & (0xc000U == (0xc000U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U])));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_137 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_116) 
           & (3U != (3U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                           >> 0xeU))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_196 
        = ((0x4dU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_145));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_236 
        = ((0x59U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_145));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_164 
        = ((0x35U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_139));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_330 
        = ((0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)) 
           | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_139));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT____VdfgRegularize_h94f45732_0_70 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__cond_38)) 
           & (0xbU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__state)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_segment_inst__DOT__ds_left 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_segment_inst__DOT____VdfgRegularize_h67f407af_0_43)
            ? (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_segment_inst__DOT__ds_limit 
               - vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_address_effective)
            : ((0xffffU | ((- (IData)((1U & (IData)(
                                                    (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ds_cache 
                                                     >> 0x36U))))) 
                           << 0x10U)) - vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_address_effective));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_segment_inst__DOT__fs_left 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_segment_inst__DOT____VdfgRegularize_h67f407af_0_42)
            ? (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_segment_inst__DOT__fs_limit 
               - vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_address_effective)
            : ((0xffffU | ((- (IData)((1U & (IData)(
                                                    (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__fs_cache 
                                                     >> 0x36U))))) 
                           << 0x10U)) - vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_address_effective));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_segment_inst__DOT__gs_left 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_segment_inst__DOT____VdfgRegularize_h67f407af_0_41)
            ? (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_segment_inst__DOT__gs_limit 
               - vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_address_effective)
            : ((0xffffU | ((- (IData)((1U & (IData)(
                                                    (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__gs_cache 
                                                     >> 0x36U))))) 
                           << 0x10U)) - vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_address_effective));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_3 = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__icache_inst__DOT__icache_control_ram_inst__DOT____VdfgRegularize_h31ca9ccd_0_0) 
                                                | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__icache_inst__DOT__icache_control_ram_inst__DOT__after_invalidate));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_152 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_28) 
           & (0xc000U == (0xc000U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U])));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_135 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_28) 
           & (3U != (3U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                           >> 0xeU))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_11 
        = ((IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_15) 
           & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor 
                      >> 0x2cU)));
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_114 
        = ((~ (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor 
                       >> 0x2cU))) & (IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_15));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_168 
        = ((IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_88) 
           & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor 
                      >> 0x2cU)));
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_108 
        = ((~ (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor 
                       >> 0x2cU))) & (IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_88));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_8 
        = ((3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_7));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_87 
        = ((0x57U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_7));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__avalon_io_inst__DOT____VdfgRegularize_h5ceef672_0_17 
        = ((4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__io_write_length)) 
           & (1U == (3U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_1)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__avalon_io_inst__DOT____VdfgRegularize_h5ceef672_0_18 
        = ((4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__io_write_length)) 
           & (2U == (3U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_1)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__avalon_io_inst__DOT____VdfgRegularize_h5ceef672_0_15 
        = ((2U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__io_write_length)) 
           & (3U == (3U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_1)));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_58 = ((0xfffffff8U 
                                                  & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__dr0) 
                                                 | (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__dr0 
                                                    & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__debug_len0)));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_56 = ((0xfffffff8U 
                                                  & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__dr1) 
                                                 | (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__dr1 
                                                    & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__debug_len1)));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_54 = ((0xfffffff8U 
                                                  & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__dr2) 
                                                 | (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__dr2 
                                                    & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__debug_len2)));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_52 = ((0xfffffff8U 
                                                  & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__dr3) 
                                                 | (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__dr3 
                                                    & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__debug_len3)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_314 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_operand_32bit) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_53));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_175 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_operand_32bit)) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_53));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT____VdfgRegularize_h9c4fdeb6_0_112 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__tlbflushsingle_do)
            ? (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_linear 
               >> 0xcU) : 0U);
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT____VdfgRegularize_h94f45732_0_89 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__tlbflushsingle_do)) 
           & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__state)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__tlbflushsingle_done 
        = ((0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__state)) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__tlbflushsingle_do));
    main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT____VdfgRegularize_h694aed34_0_12 
        = ((4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__state)) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__req_readline_done));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__req_readburst_data[0U] 
        = (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_124);
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__req_readburst_data[1U] 
        = (IData)((vlSelfRef.__VdfgRegularize_hd87f99a1_0_124 
                   >> 0x20U));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__req_readburst_data[2U] 
        = vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__avalon_mem_inst__DOT__bus_2;
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_173 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_219) 
           & (0xc000U == (0xc000U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U])));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_141 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_219) 
           & (3U != (3U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                           >> 0xeU))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT____VdfgRegularize_h94f45732_0_57 
        = (0x20U | (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__pte 
                    | ((IData)(main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT____VdfgRegularize_h94f45732_0_14)
                        ? 0x40U : 0U)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__cond_37 
        = (1U & ((~ (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__pte 
                     >> 5U)) | (IData)(main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT____VdfgRegularize_h94f45732_0_14)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_145 
        = ((0x4bU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_77) 
              | (3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last))));
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_80 
        = ((0x4dU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_77));
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_92 
        = ((0x59U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_77));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__address_esi 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_114) 
           | ((0x48U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
              | ((0x55U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
                 | (0x6aU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__exe_load_seg_ss_fault 
        = (IData)((((0x20000U == (0x270000U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_1)) 
                    & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_113)) 
                   & (~ (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor 
                         >> 0x2fU))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__exe_load_seg_np_fault 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_113) 
           & ((~ (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor 
                          >> 0x2fU))) & (IData)((0x20000U 
                                                 != 
                                                 (0x270000U 
                                                  & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_1)))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_186 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_7) 
           & (0xc000U == (0xc000U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U])));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_115 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_7) 
           & (3U != (3U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                           >> 0xeU))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_193 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_205) 
           & (0xc000U == (0xc000U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U])));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_131 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_205) 
           & (3U != (3U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                           >> 0xeU))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_167 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_154) 
           & (0xc000U == (0xc000U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U])));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_127 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_154) 
           & (3U != (3U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                           >> 0xeU))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_segment_inst__DOT__es_left 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_segment_inst__DOT____VdfgRegularize_h67f407af_0_46)
            ? (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__es_limit 
               - vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_address_effective)
            : ((0xffffU | ((- (IData)((1U & (IData)(
                                                    (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__es_cache 
                                                     >> 0x36U))))) 
                           << 0x10U)) - vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_address_effective));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_168 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_155) 
           & (0xc000U == (0xc000U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U])));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_128 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_155) 
           & (3U != (3U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                           >> 0xeU))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_192 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_169) 
           & (0xc000U == (0xc000U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U])));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_129 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_169) 
           & (3U != (3U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                           >> 0xeU))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_187 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_107) 
           & (0xc000U == (0xc000U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U])));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_120 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_107) 
           & (3U != (3U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                           >> 0xeU))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_189 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_133) 
           & (0xc000U == (0xc000U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U])));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_124 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_133) 
           & (3U != (3U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                           >> 0xeU))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_dst_is_edx_eax 
        = (1U & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_107) 
                 | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_135)
                     ? (~ (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                           >> 3U)) : (0x3bU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__rd_req_edx_eax 
        = (1U & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_107)
                  ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U]
                  : ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_135)
                      ? (IData)((1U == (9U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U])))
                      : ((0x3bU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
                         & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U]))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_190 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_135) 
           & (0xc000U == (0xc000U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U])));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_125 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_135) 
           & (3U != (3U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                           >> 0xeU))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_116 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_51) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_operand_32bit));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_segment_inst__DOT__ss_left 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_segment_inst__DOT____VdfgRegularize_h67f407af_0_44)
            ? (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__ss_limit 
               - vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_address_effective)
            : ((0xffffU | ((- (IData)((1U & (IData)(
                                                    (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ss_cache 
                                                     >> 0x36U))))) 
                           << 0x10U)) - vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_address_effective));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_200 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_246) 
           & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_259 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_34) 
           & (0U == (0xfffcU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_3)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_151 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_0) 
           & (0xc000U == (0xc000U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U])));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_91 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_0) 
           & (3U != (3U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                           >> 0xeU))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_169 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_165) 
           & (0xc000U == (0xc000U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U])));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_105 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_165) 
           & (3U != (3U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                           >> 0xeU))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_164 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_139) 
           & (0xc000U == (0xc000U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U])));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_102 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_139) 
           & (3U != (3U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                           >> 0xeU))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_165 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_140) 
           & (0xc000U == (0xc000U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U])));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_103 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_140) 
           & (3U != (3U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                           >> 0xeU))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_160 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__rd_src_is_ecx) 
           & (0xc000U == (0xc000U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U])));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_100 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__rd_src_is_ecx) 
           & (3U != (3U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                           >> 0xeU))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_239 
        = ((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
            >> 1U) & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__address_memoffset));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_279 
        = ((~ (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
               >> 1U)) & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__address_memoffset));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_159 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_110) 
           & (0xc000U == (0xc000U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U])));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_99 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_110) 
           & (3U != (3U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                           >> 0xeU))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_154 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_40) 
           & (0xc000U == (0xc000U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U])));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_94 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_40) 
           & (3U != (3U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                           >> 0xeU))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_188 
        = ((IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_121) 
           & (0xc000U == (0xc000U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U])));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_122 
        = ((IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_121) 
           & (3U != (3U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                           >> 0xeU))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_195 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__rd_req_reg_not_8bit) 
           & (0xc000U == (0xc000U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U])));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_133 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__rd_req_reg_not_8bit) 
           & (3U != (3U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                           >> 0xeU))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__exception_inst__DOT__external_to_reg 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__exception_inst__DOT__cond_0) 
           | ((IData)(vlSelfRef.interrupt_done) | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__exception_inst__DOT__external)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__exception_inst__DOT____VdfgRegularize_h8d8e5c8e_0_10 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__exception_inst__DOT__cond_0) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__exception_inst__DOT__shutdown_start));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__exception_inst__DOT____VdfgRegularize_h8d8e5c8e_0_8 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__exception_inst__DOT__cond_0) 
           & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__exception_inst__DOT__vector)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__exc_dec_reset 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__exception_inst__DOT__cond_0) 
           | ((IData)(vlSelfRef.interrupt_done) | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__exception_inst__DOT__shutdown)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_156 
        = ((IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_117) 
           & (0xc000U == (0xc000U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U])));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_118 
        = ((IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_117) 
           & (3U != (3U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                           >> 0xeU))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_debug_inst__DOT__wr_code_linear 
        = (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__prefetch_inst__DOT__cs_base 
           + vlSelfRef.main_fixed__DOT__ao486_inst__DOT__wr_eip);
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_253 
        = (((0x66U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
            & (2U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex))) 
           & ((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_2 
               >> 2U) | ((2U == (7U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_2)) 
                         | ((0U == (7U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_2)) 
                            & ((~ (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor 
                                           >> 0x2fU))) 
                               | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_28))))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_249 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_131) 
           & ((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_2 
               >> 1U) | ((IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor 
                                  >> 0x2cU)) | ((0xbU 
                                                 != 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor 
                                                             >> 0x28U)))) 
                                                & (3U 
                                                   != 
                                                   (0xfU 
                                                    & (IData)(
                                                              (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor 
                                                               >> 0x28U))))))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_84 
        = ((~ (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor 
                       >> 0x2cU))) & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__exe_privilege_not_accepted));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__offset_new_stack_minus 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_213) 
           & (4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_109 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_232) 
           & ((0xcU != (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)) 
              | ((3U < (0xfU & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor 
                                        >> 0x28U)))) 
                 & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__cr0_pg))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_effective_address_inst__DOT__ea_buffer_sum 
        = ((1U & ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_operand_32bit)) 
                  | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_121) 
                     | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_246))))
            ? ((IData)(2U) + vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_address_effective)
            : ((IData)(4U) + vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_address_effective));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_198 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_121) 
           & (9U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_123 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_121) 
           & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__cs_rpl)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_register_inst__DOT__es_invalidate 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_validate_seg_regs) 
           & (((3U & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__es_cache 
                              >> 0x2dU))) < (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__cs_rpl)) 
              & ((~ ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__es_cache_valid) 
                     & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__es_cache 
                                >> 0x2cU)))) | ((~ (IData)(
                                                           (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__es_cache 
                                                            >> 0x2bU))) 
                                                | (IData)(
                                                          (0x80000000000ULL 
                                                           == 
                                                           (0xc0000000000ULL 
                                                            & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__es_cache)))))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_register_inst__DOT__ds_invalidate 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_validate_seg_regs) 
           & (((3U & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ds_cache 
                              >> 0x2dU))) < (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__cs_rpl)) 
              & ((~ ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ds_cache_valid) 
                     & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ds_cache 
                                >> 0x2cU)))) | ((~ (IData)(
                                                           (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ds_cache 
                                                            >> 0x2bU))) 
                                                | (IData)(
                                                          (0x80000000000ULL 
                                                           == 
                                                           (0xc0000000000ULL 
                                                            & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ds_cache)))))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_register_inst__DOT__fs_invalidate 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_validate_seg_regs) 
           & (((3U & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__fs_cache 
                              >> 0x2dU))) < (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__cs_rpl)) 
              & ((~ ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__fs_cache_valid) 
                     & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__fs_cache 
                                >> 0x2cU)))) | ((~ (IData)(
                                                           (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__fs_cache 
                                                            >> 0x2bU))) 
                                                | (IData)(
                                                          (0x80000000000ULL 
                                                           == 
                                                           (0xc0000000000ULL 
                                                            & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__fs_cache)))))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_register_inst__DOT__gs_invalidate 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_validate_seg_regs) 
           & (((3U & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__gs_cache 
                              >> 0x2dU))) < (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__cs_rpl)) 
              & ((~ ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__gs_cache_valid) 
                     & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__gs_cache 
                                >> 0x2cU)))) | ((~ (IData)(
                                                           (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__gs_cache 
                                                            >> 0x2bU))) 
                                                | (IData)(
                                                          (0x80000000000ULL 
                                                           == 
                                                           (0xc0000000000ULL 
                                                            & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__gs_cache)))))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_76 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_98) 
           & (5U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__address_stack_for_iret_third 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_98) 
           & (4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__address_stack_for_iret_last 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_98) 
           & (6U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__address_stack_for_iret_to_v86 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__address_stack_add_4_to_saved) 
           & (0xaU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_78 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_91) 
           & (9U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__address_stack_for_iret_first 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_91) 
           & (7U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_183 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_91) 
           & (8U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_217 
        = ((~ (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
               >> 1U)) & (IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_64));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_216 
        = ((IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_64) 
           & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
              >> 1U));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_77 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_79) 
           & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_112 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_79) 
           & (2U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_182 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_79) 
           & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_dst_is_implicit_reg 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_41) 
           | ((0x11U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
              | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_103) 
                 | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_163) 
                    | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_220)))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_debug_trap_clear 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_57) 
           | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_225));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_132 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_242) 
           & (0U == (7U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_2)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__dr0_to_reg 
        = (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_266) 
            & (0U == (0x3800U & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_decoder))))
            ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result2
            : vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__dr0);
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__dr1_to_reg 
        = (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_266) 
            & (0x800U == (0x3800U & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_decoder))))
            ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result2
            : vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__dr1);
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__dr2_to_reg 
        = (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_266) 
            & (0x1000U == (0x3800U & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_decoder))))
            ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result2
            : vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__dr2);
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__dr3_to_reg 
        = (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_266) 
            & (0x1800U == (0x3800U & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_decoder))))
            ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result2
            : vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__dr3);
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_94 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_266) 
           & ((4U == (7U & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_decoder) 
                            >> 0xbU))) | (6U == (7U 
                                                 & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_decoder) 
                                                    >> 0xbU)))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_171 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_76) 
           & (2U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_165 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__cr0_pe)) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_67));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__cr2_to_reg 
        = (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_113) 
            & (0x1000U == (0x3800U & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_decoder))))
            ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result2
            : vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__cr2);
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_126 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_113) 
           & (0x1800U == (0x3800U & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_decoder))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_90 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_113) 
           & (0U == (0x3800U & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_decoder))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_166 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_147) 
           & (0xc000U == (0xc000U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U])));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_104 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_147) 
           & (3U != (3U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                           >> 0xeU))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_87 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_143) 
           & (0xc000U == (0xc000U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U])));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_89 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_143) 
           & (3U != (3U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                           >> 0xeU))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_debug_task_trigger 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_255) 
           & ((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_3 
               >> 0x11U) & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_buffer));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_glob_descriptor_2_set 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__address_stack_for_iret_second) 
           | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__address_stack_pop_esp_prev));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_effective_address_inst__DOT__stack_initial 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__address_stack_pop_esp_prev)
            ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__wr_esp_prev
            : vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__esp);
    if ((1U & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ss_cache 
                       >> 0x36U)))) {
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_effective_address_inst__DOT__ebp_for_enter_offset 
            = vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_effective_address_inst__DOT__ebp_for_enter_next;
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_stack_esp 
            = vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__wr_stack_offset;
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_effective_address_inst__DOT__stack 
            = vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_effective_address_inst__DOT__stack_initial;
    } else {
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_effective_address_inst__DOT__ebp_for_enter_offset 
            = (0xffffU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_effective_address_inst__DOT__ebp_for_enter_next);
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_stack_esp 
            = main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_stack_inst__DOT____VdfgRegularize_h143f96f3_0_1;
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_effective_address_inst__DOT__stack 
            = (0xffffU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_effective_address_inst__DOT__stack_initial);
    }
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__address_edi 
        = ((0xdU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_115) 
              | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_193)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_187 
        = ((IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_14) 
           | (IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_12));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_11 
        = ((3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_19));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_206 
        = ((0x57U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_19));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_203 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_162) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__oflag));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_88 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_119) 
           & (0x2fU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_128 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_119) 
           & (0x30U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_250 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_213) 
           & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_5 
              | (((3U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_1) 
                  != (3U & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor_2 
                                    >> 0x2dU)))) | (IData)(
                                                           (((0x100000000000ULL 
                                                              != 
                                                              (0x180000000000ULL 
                                                               & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor)) 
                                                             | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_22)) 
                                                            | ((3U 
                                                                & (IData)(
                                                                          (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor 
                                                                           >> 0x2dU))) 
                                                               != 
                                                               (3U 
                                                                & (IData)(
                                                                          (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor_2 
                                                                           >> 0x2dU)))))))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_195 
        = (((0xbU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
            & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex))) 
           & (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__exe_is_8bit) 
               & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_io_allow_bits)) 
              | ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__exe_is_8bit)) 
                 & (((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_operand_32bit)) 
                     & (0U != (3U & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_io_allow_bits)))) 
                    | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_operand_32bit) 
                       & (0U != (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_io_allow_bits)))))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__exe_cmd_loop_condition 
        = ((0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex))
            ? ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__zflag)) 
               & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__exe_cmd_loop_ecx))
            : ((1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex))
                ? ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__exe_cmd_loop_ecx) 
                   & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__zflag))
                : (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__exe_cmd_loop_ecx)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_215 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_153) 
           & (0U != (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__cs_rpl)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_212 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_145) 
           & (0U < (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__cs_rpl)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_214 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_150) 
           & ((0U < (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__cs_rpl)) 
              | (IData)(((0ULL == (0x3800ULL & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_decoder)) 
                         & ((IData)((0x80000000U == 
                                     (0x80000001U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__src))) 
                            | (IData)((0x20000000U 
                                       == (0x60000000U 
                                           & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__src))))))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_213 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_146) 
           & (0U < (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__cs_rpl)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_202 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__offset_int_real) 
           & ((3U | (0x3fcU & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__exception_inst__DOT__exc_vector_full) 
                               << 2U))) > (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__idtr_limit)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__address_stack_pop_for_call 
        = ((5U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_7));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_277 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_207) 
           & (4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_278 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_207) 
           & (0x57U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_279 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_207) 
           & (0x1cU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_223 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_207) 
           & ((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_1 
               >> 2U) | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_32)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_185 
        = ((IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_58) 
           & (2U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_181 
        = ((IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_54) 
           & (2U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_320 
        = ((IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_54) 
           | (IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_58));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_44 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_254) 
           & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_187 
        = ((IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_96) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_235));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_190 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_235)) 
           & (IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_96));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decode_inst__DOT__decode_ready_inst__DOT__call_jmp_imm_len 
        = ((3U == (3U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decoder[0U]))
            ? 2U : (((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decoder[0U] 
                      >> 1U) & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__dec_operand_32bit))
                     ? 7U : ((1U & ((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decoder[0U] 
                                     >> 1U) | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__dec_operand_32bit)))
                              ? 5U : 3U)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decode_inst__DOT__decode_ready_inst__DOT__one_imm_len 
        = (((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__dec_prefix_2byte)) 
            & ((0x16U == (0x1fU & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decoder[0U] 
                                   >> 3U))) | ((0xa8U 
                                                == 
                                                (0xffU 
                                                 & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decoder[0U])) 
                                               | ((0x6aU 
                                                   == 
                                                   (0xffU 
                                                    & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decoder[0U])) 
                                                  | (0U 
                                                     == 
                                                     ((6U 
                                                       & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decoder[0U] 
                                                          >> 5U)) 
                                                      | (1U 
                                                         & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decoder[0U])))))))
            ? 2U : ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__dec_operand_32bit)
                     ? 5U : 3U));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_7 
        = ((3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_27));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_123 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_216) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_operand_32bit));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_174 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_258) 
           & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_177 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_227) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_228));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_180 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_238) 
           & (0U != (3U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_1 
                           >> 0x10U))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_229 
        = ((IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor 
                    >> 0x28U)) & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_177));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_231 
        = ((~ (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor 
                       >> 0x28U))) & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_177));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_224 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_181)) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_180));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_170 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_180) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_181));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_226 
        = ((IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor 
                    >> 0x28U)) & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_179));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_228 
        = ((~ (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor 
                       >> 0x28U))) & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_179));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_246 
        = ((IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor 
                    >> 0x28U)) & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_174));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_248 
        = ((~ (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor 
                       >> 0x28U))) & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_174));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__rd_io_allow_1_fault 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_33) 
           & ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__tr_cache_valid)) 
              | (((9U != (0xfU & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__tr_cache 
                                          >> 0x28U)))) 
                  & (0xbU != (0xfU & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__tr_cache 
                                              >> 0x28U))))) 
                 | (0x67U > vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__tr_limit))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__rd_ss_esp_from_tss_fault 
        = (((IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_12) 
            | (IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_14)) 
           & (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__rd_ss_esp_from_tss_386)
                ? ((IData)(0xbU) + (0x18U & ((IData)(
                                                     (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor 
                                                      >> 0x2dU)) 
                                             << 3U)))
                : ((IData)(5U) + (0xcU & ((IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor 
                                                   >> 0x2dU)) 
                                          << 2U)))) 
              > vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__tr_limit));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__rd_io_allow_2_fault 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_35) 
           & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_4 
              >= vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__tr_limit));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_252 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_246) 
           & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__tr_limit 
              < ((3U >= (0xfU & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__tr_cache 
                                         >> 0x28U))))
                  ? 0x29U : 0x5fU)));
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_194 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_244) 
           & (0U != (3U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_2)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_164 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_244) 
           & ((0U == (3U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_2)) 
              & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor 
                         >> 0x28U))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_179 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_234) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_235));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__wr_exception_finished 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_60) 
           | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_62) 
              | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_63) 
                 | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_255))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_119 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_82) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_operand_32bit));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pr_reset 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_181) 
           | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_12) 
              | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_182) 
                 | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_38) 
                    | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_60) 
                       | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_62) 
                          | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_63) 
                             | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_82) 
                                | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_88) 
                                   | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_89) 
                                      | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_110) 
                                         | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_113) 
                                            | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_183) 
                                               | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_149) 
                                                  | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_178) 
                                                     | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_validate_seg_regs) 
                                                        | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_204) 
                                                           | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_255))))))))))))))))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_121 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_89) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_operand_32bit));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_122 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_93) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_operand_32bit));
    if (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_87) {
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__es_cache_to_reg 
            = (0xf3000000ffffULL | ((QData)((IData)(
                                                    (0xffffU 
                                                     & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_buffer_shifted[2U]))) 
                                    << 0x14U));
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__ds_cache_to_reg 
            = (0xf3000000ffffULL | ((QData)((IData)(
                                                    (0xffffU 
                                                     & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_buffer_shifted[1U]))) 
                                    << 0x14U));
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__ss_cache_to_reg 
            = (0xf3000000ffffULL | ((QData)((IData)(
                                                    (0xffffU 
                                                     & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_buffer_shifted[3U]))) 
                                    << 0x14U));
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__fs_cache_to_reg 
            = (0xf3000000ffffULL | ((QData)((IData)(
                                                    (0xffffU 
                                                     & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_buffer_shifted[0U]))) 
                                    << 0x14U));
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__gs_cache_to_reg 
            = (0xf3000000ffffULL | ((QData)((IData)(
                                                    (0xffffU 
                                                     & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_buffer))) 
                                    << 0x14U));
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__ss_to_reg 
            = (0xffffU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_buffer_shifted[3U]);
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__es_rpl_to_reg = 3U;
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__ds_rpl_to_reg = 3U;
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__ss_rpl_to_reg = 3U;
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__cs_to_reg 
            = (0xffffU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_1);
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__fs_rpl_to_reg = 3U;
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__gs_rpl_to_reg = 3U;
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__cs_rpl_to_reg = 3U;
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__cs_cache_to_reg 
            = (0xf3000000ffffULL | ((QData)((IData)(
                                                    (0xffffU 
                                                     & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_1))) 
                                    << 0x14U));
    } else {
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__es_cache_to_reg 
            = vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__es_cache;
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__ds_cache_to_reg 
            = vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ds_cache;
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__ss_cache_to_reg 
            = vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ss_cache;
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__fs_cache_to_reg 
            = vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__fs_cache;
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__gs_cache_to_reg 
            = vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__gs_cache;
        if (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__wr_glob_param_3_set) {
            vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__ss_to_reg 
                = (0xffffU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_buffer_shifted[2U]);
            vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__es_rpl_to_reg 
                = (3U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_buffer_shifted[3U]);
            vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__ds_rpl_to_reg 
                = (3U & ((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_buffer_shifted[1U] 
                          << 0x10U) | (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_buffer_shifted[1U] 
                                       >> 0x10U)));
            vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__ss_rpl_to_reg 
                = (3U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_buffer_shifted[2U]);
            vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__cs_to_reg 
                = (0xffffU & ((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_buffer_shifted[2U] 
                               << 0x10U) | (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_buffer_shifted[2U] 
                                            >> 0x10U)));
            if ((3U >= (0xfU & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor 
                                        >> 0x28U))))) {
                vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__fs_rpl_to_reg 
                    = (3U & 0U);
                vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__gs_rpl_to_reg 
                    = (3U & 0U);
            } else {
                vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__fs_rpl_to_reg 
                    = (3U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_buffer_shifted[1U]);
                vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__gs_rpl_to_reg 
                    = (3U & ((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_buffer_shifted[0U] 
                              << 0x10U) | (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_buffer_shifted[0U] 
                                           >> 0x10U)));
            }
            vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__cs_rpl_to_reg = 3U;
        } else {
            vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__ss_to_reg 
                = (0xffffU & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ss));
            vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__es_rpl_to_reg 
                = (3U & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__es_rpl));
            vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__ds_rpl_to_reg 
                = (3U & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__ds_rpl));
            vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__ss_rpl_to_reg 
                = (3U & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__ss_rpl));
            vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__cs_to_reg 
                = (0xffffU & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__cs));
            vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__fs_rpl_to_reg 
                = (3U & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__fs_rpl));
            vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__gs_rpl_to_reg 
                = (3U & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__gs_rpl));
            vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__cs_rpl_to_reg 
                = (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_244) 
                    & (3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)))
                    ? (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__wr_task_rpl)
                    : (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__cs_rpl));
        }
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__cs_cache_to_reg 
            = (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_90) 
                & ((~ vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result2) 
                   & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__cr0_pe)))
                ? (0x930000000000ULL | (((QData)((IData)(
                                                         (0xffffU 
                                                          & (IData)(
                                                                    (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__cs_cache 
                                                                     >> 0x30U))))) 
                                         << 0x30U) 
                                        | (((QData)((IData)(
                                                            (3U 
                                                             & (IData)(
                                                                       (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__cs_cache 
                                                                        >> 0x2dU))))) 
                                            << 0x2dU) 
                                           | (0xffffffffffULL 
                                              & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__cs_cache))))
                : vlSelfRef.main_fixed__DOT__ao486_inst__DOT__cs_cache);
    }
    if (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__wr_glob_param_3_set) {
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__wr_glob_param_3_value 
            = ((3U >= (0xfU & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor 
                                       >> 0x28U))))
                ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_3
                : (0x20000U | vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_3));
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__ldtr_to_reg 
            = vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__task_ldtr;
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__tr_to_reg 
            = (0xffffU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_1);
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__tr_cache_to_reg 
            = (0x20000000000ULL | vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor);
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__ldtr_rpl_to_reg 
            = (3U & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__task_ldtr));
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__tr_rpl_to_reg 
            = (3U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_1);
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__dr7_to_reg 
            = (0xfffffeaaU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__dr7);
    } else {
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__wr_glob_param_3_value = 0U;
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__ldtr_to_reg 
            = vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ldtr;
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__tr_to_reg 
            = (0xffffU & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__tr));
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__tr_cache_to_reg 
            = vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__tr_cache;
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__ldtr_rpl_to_reg 
            = (3U & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__ldtr_rpl));
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__tr_rpl_to_reg 
            = (3U & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__tr_rpl));
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__dr7_to_reg 
            = (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_266) 
                & ((5U == (7U & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_decoder) 
                                 >> 0xbU))) | (7U == 
                                               (7U 
                                                & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_decoder) 
                                                   >> 0xbU)))))
                ? (0x400U | vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result2)
                : vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__dr7);
    }
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__ss_cache_valid_to_reg 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_87) 
           | ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__wr_glob_param_3_set)) 
              & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ss_cache_valid)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__cs_cache_valid_to_reg 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_87) 
           | ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__wr_glob_param_3_set)) 
              & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__cs_cache_valid)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__wr_task_rpl_to_reg 
        = (3U & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_179)
                  ? (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__cs_rpl)
                  : ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__wr_glob_param_3_set)
                      ? ((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_buffer_shifted[2U] 
                          << 0x10U) | (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_buffer_shifted[2U] 
                                       >> 0x10U)) : (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__wr_task_rpl))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__vmflag_to_reg 
        = (1U & ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_62)) 
                 & ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_63)) 
                    & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_87)
                        ? (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_3 
                           >> 0x11U) : ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__wr_glob_param_3_set)
                                         ? (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__task_eflags 
                                            >> 0x11U)
                                         : (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__vmflag))))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__dflag_to_reg 
        = ((0x17U != (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           & ((0x1aU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
              | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_82)
                  ? (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_3 
                     >> 0xaU) : ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_87)
                                  ? (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_3 
                                     >> 0xaU) : ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_89)
                                                  ? 
                                                 (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_3 
                                                  >> 0xaU)
                                                  : 
                                                 ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_93)
                                                   ? 
                                                  (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_5 
                                                   >> 0xaU)
                                                   : 
                                                  ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_216)
                                                    ? 
                                                   (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result2 
                                                    >> 0xaU)
                                                    : 
                                                   ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__wr_glob_param_3_set)
                                                     ? 
                                                    (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__task_eflags 
                                                     >> 0xaU)
                                                     : (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__dflag)))))))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__tflag_to_reg 
        = (1U & ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_60)) 
                 & ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_62)) 
                    & ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_63)) 
                       & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_82)
                           ? (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_3 
                              >> 8U) : ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_87)
                                         ? (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_3 
                                            >> 8U) : 
                                        ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_89)
                                          ? (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_3 
                                             >> 8U)
                                          : ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_93)
                                              ? (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_5 
                                                 >> 8U)
                                              : ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_216)
                                                  ? 
                                                 (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result2 
                                                  >> 8U)
                                                  : 
                                                 ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__wr_glob_param_3_set)
                                                   ? 
                                                  (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__task_eflags 
                                                   >> 8U)
                                                   : (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__tflag)))))))))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__ntflag_to_reg 
        = (1U & ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_62)) 
                 & ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_63)) 
                    & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_82)
                        ? (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_3 
                           >> 0xeU) : ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_87)
                                        ? (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_3 
                                           >> 0xeU)
                                        : ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_89)
                                            ? (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_3 
                                               >> 0xeU)
                                            : ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_93)
                                                ? (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_5 
                                                   >> 0xeU)
                                                : ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_216)
                                                    ? 
                                                   (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result2 
                                                    >> 0xeU)
                                                    : 
                                                   ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__wr_glob_param_3_set)
                                                     ? 
                                                    ((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__task_eflags 
                                                      >> 0xeU) 
                                                     | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_235))
                                                     : (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ntflag))))))))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__ebx_to_reg 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_115)
            ? 0x696e6547U : ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_116)
                              ? 0x10000U : ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__wr_glob_param_3_set)
                                             ? ((3U 
                                                 >= 
                                                 (0xfU 
                                                  & (IData)(
                                                            (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor 
                                                             >> 0x28U))))
                                                 ? 
                                                (0xffff0000U 
                                                 | (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_buffer_shifted[7U] 
                                                    >> 0x10U))
                                                 : 
                                                ((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_buffer_shifted[8U] 
                                                  << 0x10U) 
                                                 | (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_buffer_shifted[7U] 
                                                    >> 0x10U)))
                                             : ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_107)
                                                 ? 
                                                ((((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_operand_32bit)
                                                    ? 
                                                   ((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_buffer_shifted[2U] 
                                                     << 0x10U) 
                                                    | (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_buffer_shifted[2U] 
                                                       >> 0x10U))
                                                    : 
                                                   (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ebx 
                                                    >> 0x10U)) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_buffer_shifted[2U]))
                                                 : vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ebx))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__ebp_to_reg 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_131)
            ? ((((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_operand_32bit)
                  ? (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_buffer 
                     >> 0x10U) : (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ebp 
                                  >> 0x10U)) << 0x10U) 
               | (0xffffU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_buffer))
            : ((0x37U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd))
                ? ((((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_operand_32bit)
                      ? (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result_push 
                         >> 0x10U) : (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ebp 
                                      >> 0x10U)) << 0x10U) 
                   | (0xffffU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result_push))
                : ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__wr_glob_param_3_set)
                    ? ((3U >= (0xfU & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor 
                                               >> 0x28U))))
                        ? (0xffff0000U | (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_buffer_shifted[5U] 
                                          >> 0x10U))
                        : ((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_buffer_shifted[6U] 
                            << 0x10U) | (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_buffer_shifted[5U] 
                                         >> 0x10U)))
                    : ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_107)
                        ? ((((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_operand_32bit)
                              ? ((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_buffer_shifted[4U] 
                                  << 0x10U) | (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_buffer_shifted[4U] 
                                               >> 0x10U))
                              : (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ebp 
                                 >> 0x10U)) << 0x10U) 
                           | (0xffffU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_buffer_shifted[4U]))
                        : vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ebp))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__edx_to_reg 
        = (((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_is_8bit)) 
            & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_100))
            ? main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_152
            : (((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_is_8bit)) 
                & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_139))
                ? main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_152
                : (((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_is_8bit)) 
                    & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_140))
                    ? main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_152
                    : ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_115)
                        ? 0x41656e75U : ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_116)
                                          ? 0U : ((
                                                   (0x5dU 
                                                    == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
                                                   & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_operand_32bit))
                                                   ? 
                                                  (- (IData)(
                                                             (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__eax 
                                                              >> 0x1fU)))
                                                   : 
                                                  (((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_operand_32bit)) 
                                                    & (0x5dU 
                                                       == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)))
                                                    ? 
                                                   ((0xffff0000U 
                                                     & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__edx) 
                                                    | (0xffffU 
                                                       & (- (IData)(
                                                                    (1U 
                                                                     & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__eax 
                                                                        >> 0xfU))))))
                                                    : 
                                                   ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__wr_glob_param_3_set)
                                                     ? 
                                                    ((3U 
                                                      >= 
                                                      (0xfU 
                                                       & (IData)(
                                                                 (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor 
                                                                  >> 0x28U))))
                                                      ? 
                                                     (0xffff0000U 
                                                      | (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_buffer_shifted[8U] 
                                                         >> 0x10U))
                                                      : 
                                                     ((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_buffer_shifted[9U] 
                                                       << 0x10U) 
                                                      | (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_buffer_shifted[8U] 
                                                         >> 0x10U)))
                                                     : 
                                                    ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_107)
                                                      ? 
                                                     ((((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_operand_32bit)
                                                         ? 
                                                        ((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_buffer_shifted[1U] 
                                                          << 0x10U) 
                                                         | (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_buffer_shifted[1U] 
                                                            >> 0x10U))
                                                         : 
                                                        (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__edx 
                                                         >> 0x10U)) 
                                                       << 0x10U) 
                                                      | (0xffffU 
                                                         & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_buffer_shifted[1U]))
                                                      : vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__edx)))))))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_127 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__wr_glob_param_3_set) 
           & ((9U <= (0xfU & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor 
                                      >> 0x28U)))) 
              & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__cr0_pg) 
                 & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__cr3 
                    != ((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_buffer_shifted[0xeU] 
                         << 0x10U) | (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_buffer_shifted[0xdU] 
                                      >> 0x10U))))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_178 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_232) 
           & ((3U < (0xfU & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__tr_cache 
                                     >> 0x28U)))) | 
              (0xbU >= (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__rd_dst_is_memory_last 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__rd_string_ignore)) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_115));
    main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__exe_condition_inst__DOT____VdfgRegularize_hc2c49180_0_1 
        = ((IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__exe_condition_inst__DOT____VdfgRegularize_hc2c49180_0_2) 
           | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__zflag));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__wr_task_switch_linear 
        = (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_230) 
            & (3U >= (0xfU & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__tr_cache 
                                      >> 0x28U)))))
            ? ((IData)(0xeU) + vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__tr_base)
            : (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_230) 
                & (3U < (0xfU & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__tr_cache 
                                         >> 0x28U)))))
                ? ((IData)(0x20U) + vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__tr_base)
                : vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__wr_task_switch_linear_next));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_39 
        = ((5U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_116));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_176 
        = (1U & (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__wr_mutex) 
                  >> 1U) | (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__wr_mutex) 
                             >> 8U) & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_116))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_286 
        = ((0x6eU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_116));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_113 
        = (IData)(((0x80000000000ULL == (0xc0000000000ULL 
                                         & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor)) 
                   & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_126)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_205 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_93) 
           & ((IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor 
                       >> 0x2cU)) | (((5U != (0xfU 
                                              & (IData)(
                                                        (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor 
                                                         >> 0x28U)))) 
                                      & ((0xeU != (0xfU 
                                                   & (IData)(
                                                             (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor 
                                                              >> 0x28U)))) 
                                         & ((6U != 
                                             (0xfU 
                                              & (IData)(
                                                        (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor 
                                                         >> 0x28U)))) 
                                            & ((0xfU 
                                                != 
                                                (0xfU 
                                                 & (IData)(
                                                           (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor 
                                                            >> 0x28U)))) 
                                               & (7U 
                                                  != 
                                                  (0xfU 
                                                   & (IData)(
                                                             (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor 
                                                              >> 0x28U)))))))) 
                                     | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__exc_soft_int) 
                                        & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_126)))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_202 
        = (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__rd_descriptor_not_in_limits) 
            << 1U) | (0U == (0x3fffU & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_1 
                                        >> 2U))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_180 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__rd_descriptor_not_in_limits)) 
           & (0U != (0x3fffU & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_1 
                                >> 2U))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_103 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_253) 
           & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_3 
              >> 0x10U));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_328 
        = ((0U == (0x3fffU & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_1 
                              >> 2U))) | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_164));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_8 
        = ((3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_28));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_24 
        = (((~ (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor 
                        >> 0x2bU))) | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_333)) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__exe_privilege_not_accepted));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_326 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_164) 
           | (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_333) 
               & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_34)) 
              | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_11) 
                 & ((3U & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor 
                                   >> 0x2dU))) > (3U 
                                                  & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_1)))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_151 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_11) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_150));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_242 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_197)) 
           & (0x54U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_315 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_44)) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_120));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_314 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_44)) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_184));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_200 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__offset_new_stack) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_44));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_208 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_120) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_44));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_221 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_184) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_44));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_190 
        = (((5U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
            & (4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex))) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_44));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__wbinvddata_do 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_wbinvd_data_done)) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_170));
    if (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_55) {
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__invdcode_do 
            = (1U & (~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_invd_code_done)));
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__invddata_do 
            = (1U & (~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_invd_data_done)));
    } else {
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__invdcode_do 
            = (1U & ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_wbinvd_code_done)) 
                     & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_170)));
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__invddata_do = 0U;
    }
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_18 
        = ((4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           & (IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_35));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_54 
        = ((0x1dU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           & ((0xaU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)) 
              | ((0xbU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)) 
                 | ((0xcU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)) 
                    | ((0xdU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)) 
                       | (IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_35))))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__iopl_to_reg 
        = (3U & (((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__cr0_pe)) 
                  & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_82))
                  ? (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_3 
                     >> 0xcU) : ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_87)
                                  ? (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_3 
                                     >> 0xcU) : (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_89) 
                                                  & (0U 
                                                     == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__cs_rpl)))
                                                  ? 
                                                 (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_3 
                                                  >> 0xcU)
                                                  : 
                                                 (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_93) 
                                                   & (0U 
                                                      == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__wr_task_rpl)))
                                                   ? 
                                                  (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_5 
                                                   >> 0xcU)
                                                   : 
                                                  (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_216) 
                                                    & ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__cr0_pe)) 
                                                       | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__protected_mode) 
                                                          & (0U 
                                                             == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__cs_rpl)))))
                                                    ? 
                                                   (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result2 
                                                    >> 0xcU)
                                                    : 
                                                   ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__wr_glob_param_3_set)
                                                     ? 
                                                    (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__task_eflags 
                                                     >> 0xcU)
                                                     : (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__iopl))))))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_148 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_69) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__protected_mode));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_98 
        = ((0x21U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__protected_mode)) 
              | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__protected_mode) 
                 & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last)))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_99 
        = ((0x21U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)) 
           & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__protected_mode) 
              & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmdex_last))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decode_inst__DOT__decode_commands_inst__DOT__cond_14 
        = (1U & ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__protected_mode)) 
                 | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decode_inst__DOT__prefix_group_1_lock)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_69 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__protected_mode) 
           & (0U == (0xfffcU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_1)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_322 
        = (((0x21U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
            & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex))) 
           & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__protected_mode) 
              & ((IData)(((0U == (0xfffcU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_1)) 
                          & ((2U == (7U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_1 
                                           >> 0x10U))) 
                             | ((7U == (7U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_1 
                                              >> 0x10U))) 
                                | (1U == (7U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_1 
                                                >> 0x10U))))))) 
                 | (((6U == (7U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_1 
                                   >> 0x10U))) | (7U 
                                                  == 
                                                  (7U 
                                                   & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_1 
                                                      >> 0x10U)))) 
                    & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_1 
                       >> 2U)))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_234 
        = ((~ ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__protected_mode) 
               & ((0U == (0x3fffU & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_1 
                                     >> 2U))) | (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_1 
                                                 >> 0x13U)))) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_70));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_153 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__io_allow_check_needed)) 
           & (IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_83));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_158 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__io_allow_check_needed)) 
           & (IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_85));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_155 
        = ((IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_83) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__io_allow_check_needed));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_159 
        = ((IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_85) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__io_allow_check_needed));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_195 
        = (1U & ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__rd_string_ignore)) 
                 & (~ ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__io_allow_check_needed) 
                       & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex))))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_168 
        = (1U & ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__io_allow_check_needed)) 
                 | (2U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_200 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__io_allow_check_needed) 
           & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_251 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_246) 
           & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_desc_limit 
              < ((3U >= (0xfU & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor 
                                         >> 0x28U))))
                  ? 0x2bU : 0x67U)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_7 
        = (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_2 
           > vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_desc_limit);
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decode_inst__DOT__instr_prefix 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decode_inst__DOT__stop)) 
           & ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__dec_prefix_2byte)) 
              & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decode_inst__DOT__is_prefix) 
                 & (0U < (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decode_inst__DOT__decoder_count)))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decode_inst__DOT__decode_ready_inst__DOT____VdfgRegularize_h69455ce0_0_8 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decode_inst__DOT__stop)) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__dec_prefix_2byte));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decode_inst__DOT__decode_ready_inst__DOT____VdfgRegularize_h69455ce0_0_9 
        = (1U & ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decode_inst__DOT__stop)) 
                 & ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decode_inst__DOT__is_prefix)) 
                    & (~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__dec_prefix_2byte)))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__memory_write_inst__DOT____VdfgRegularize_haaec85c8_0_2 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__memory_write_inst__DOT__cond_5)) 
           & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__memory_write_inst__DOT__state)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_11 
        = ((3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_29));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_132 
        = ((0x35U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_26));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_50 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_26) 
           | (4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_255 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_29) 
           | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_26));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_198 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_string_finish) 
           | (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_prefix_group_1_rep)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_string_zf_finish 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_string_finish) 
           | (((1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_prefix_group_1_rep)) 
               & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_zflag_result)) 
              | ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_zflag_result)) 
                 & (2U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_prefix_group_1_rep)))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_215 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_string_finish)) 
           & (0U != (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_prefix_group_1_rep)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_segment_inst__DOT__cs_left 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_segment_inst__DOT____VdfgRegularize_h67f407af_0_45)
            ? (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__prefetch_inst__DOT__cs_limit 
               - vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_address_effective)
            : ((0xffffU | ((- (IData)((1U & (IData)(
                                                    (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__cs_cache 
                                                     >> 0x36U))))) 
                           << 0x10U)) - vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_address_effective));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_107 = (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__wr_eip 
                                                  <= vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__prefetch_inst__DOT__cs_limit);
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_230 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__exe_task_switch_finished) 
           & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__exe_eip 
              > vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__prefetch_inst__DOT__cs_limit));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_14 
        = (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_2 
           > vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__prefetch_inst__DOT__cs_limit);
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_145 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_69) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__v8086_mode));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_91 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_63) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__v8086_mode));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_166 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_67) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__v8086_mode));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_76 
        = ((IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_51) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__v8086_mode));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_81 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__v8086_mode)) 
           & (IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_51));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_303 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__v8086_mode)) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_273));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_304 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__v8086_mode)) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_270));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_325 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__v8086_mode)) 
           & ((0x66U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
              & (3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_171 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_244) 
           & ((0U == (3U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_2)) 
              & ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__v8086_mode)) 
                 & (~ (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor 
                               >> 0x28U))))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_318 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_241) 
           & ((~ ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__wr_mutex) 
                  >> 8U)) & (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__protected_mode) 
                              & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__iopl) 
                                 < (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__cs_rpl))) 
                             | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__v8086_mode) 
                                & (3U != (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__iopl))))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_199 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_74) 
           & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__v8086_mode) 
              & (0U != (3U & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor 
                                      >> 0x2dU))))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__exe_int_2_int_trap_same_exception 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__v8086_mode) 
           & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_11) 
              | (0ULL != (0x600000000000ULL & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_159 
        = (1U & ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__cr0_pe)) 
                 | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__v8086_mode)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_124 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__v8086_mode) 
           & (3U > (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__iopl)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_245 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_string_ignore)) 
           & (0x48U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_253 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_string_ignore)) 
           & (0xdU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_252 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_string_ignore)) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_107));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__wr_string_es_fault 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_string_ignore)) 
           & (((0x53U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
               | (0x6aU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd))) 
              & (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_segment_inst__DOT____VdfgRegularize_h67f407af_0_46)
                   ? ((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__es_limit 
                       - vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_string_inst__DOT__w_edi_offset) 
                      < (7U & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__io_write_length) 
                               - (IData)(1U)))) : (
                                                   (((1U 
                                                      & (IData)(
                                                                (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__es_cache 
                                                                 >> 0x36U)))
                                                      ? 0xffffffffU
                                                      : 0xffffU) 
                                                    - vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_string_inst__DOT__w_edi_offset) 
                                                   < 
                                                   (7U 
                                                    & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__io_write_length) 
                                                       - (IData)(1U))))) 
                 | ((((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_segment_inst__DOT____VdfgRegularize_h67f407af_0_46) 
                      & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_string_inst__DOT__w_edi_offset 
                         > vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__es_limit)) 
                     | (IData)(((0x40000000000ULL == 
                                 (0xc0000000000ULL 
                                  & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__es_cache)) 
                                & ((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_string_inst__DOT__w_edi_offset 
                                    <= vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__es_limit) 
                                   | (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_string_inst__DOT__w_edi_offset 
                                      > ((1U & (IData)(
                                                       (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__es_cache 
                                                        >> 0x36U)))
                                          ? 0xffffffffU
                                          : 0xffffU)))))) 
                    | ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__es_cache_valid)) 
                       | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_string_inst__DOT__w_string_es_no_write))))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_244 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_string_ignore)) 
           & (0x53U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_239 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_string_ignore)) 
           & (0x6aU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__memory_write_inst__DOT__cond_6 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlbwrite_done) 
           & (0U != (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__memory_write_inst__DOT__length_2_reg)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decode_inst__DOT__decode_prefix_inst__DOT____VdfgRegularize_he2c8ac58_0_19 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__dec_address_32bit) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decode_inst__DOT__decode_prefix_inst__DOT____VdfgRegularize_he2c8ac58_0_18));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decode_inst__DOT__decode_prefix_inst__DOT____VdfgRegularize_he2c8ac58_0_14 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__dec_address_32bit) 
           & (0x4000U == (0xc000U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decoder[0U])));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decode_inst__DOT__decode_prefix_inst__DOT____VdfgRegularize_he2c8ac58_0_15 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__dec_address_32bit) 
           & (0x8000U == (0xc000U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decoder[0U])));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decode_inst__DOT__decode_prefix_inst__DOT____VdfgRegularize_he2c8ac58_0_3 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__dec_address_32bit)) 
           & (0U == (0xc000U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decoder[0U])));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decode_inst__DOT__decode_prefix_inst__DOT____VdfgRegularize_he2c8ac58_0_8 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__dec_address_32bit) 
           & (0U == (0xc000U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decoder[0U])));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb0_sel 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__translate_do) 
           & (((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__linear 
                >> 0xcU) == (0xfffffU & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb0))) 
              & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb0 
                         >> 0x2aU))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb1_sel 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__translate_do) 
           & (((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__linear 
                >> 0xcU) == (0xfffffU & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb1))) 
              & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb1 
                         >> 0x2aU))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb2_sel 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__translate_do) 
           & (((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__linear 
                >> 0xcU) == (0xfffffU & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb2))) 
              & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb2 
                         >> 0x2aU))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb3_sel 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__translate_do) 
           & (((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__linear 
                >> 0xcU) == (0xfffffU & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb3))) 
              & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb3 
                         >> 0x2aU))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb4_sel 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__translate_do) 
           & (((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__linear 
                >> 0xcU) == (0xfffffU & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb4))) 
              & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb4 
                         >> 0x2aU))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb5_sel 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__translate_do) 
           & (((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__linear 
                >> 0xcU) == (0xfffffU & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb5))) 
              & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb5 
                         >> 0x2aU))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb6_sel 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__translate_do) 
           & (((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__linear 
                >> 0xcU) == (0xfffffU & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb6))) 
              & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb6 
                         >> 0x2aU))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb7_sel 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__translate_do) 
           & (((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__linear 
                >> 0xcU) == (0xfffffU & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb7))) 
              & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb7 
                         >> 0x2aU))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb8_sel 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__translate_do) 
           & (((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__linear 
                >> 0xcU) == (0xfffffU & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb8))) 
              & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb8 
                         >> 0x2aU))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb9_sel 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__translate_do) 
           & (((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__linear 
                >> 0xcU) == (0xfffffU & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb9))) 
              & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb9 
                         >> 0x2aU))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb10_sel 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__translate_do) 
           & (((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__linear 
                >> 0xcU) == (0xfffffU & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb10))) 
              & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb10 
                         >> 0x2aU))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb11_sel 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__translate_do) 
           & (((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__linear 
                >> 0xcU) == (0xfffffU & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb11))) 
              & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb11 
                         >> 0x2aU))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb12_sel 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__translate_do) 
           & (((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__linear 
                >> 0xcU) == (0xfffffU & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb12))) 
              & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb12 
                         >> 0x2aU))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb13_sel 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__translate_do) 
           & (((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__linear 
                >> 0xcU) == (0xfffffU & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb13))) 
              & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb13 
                         >> 0x2aU))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb14_sel 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__translate_do) 
           & (((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__linear 
                >> 0xcU) == (0xfffffU & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb14))) 
              & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb14 
                         >> 0x2aU))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb15_sel 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__translate_do) 
           & (((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__linear 
                >> 0xcU) == (0xfffffU & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb15))) 
              & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb15 
                         >> 0x2aU))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb16_sel 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__translate_do) 
           & (((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__linear 
                >> 0xcU) == (0xfffffU & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb16))) 
              & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb16 
                         >> 0x2aU))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb17_sel 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__translate_do) 
           & (((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__linear 
                >> 0xcU) == (0xfffffU & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb17))) 
              & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb17 
                         >> 0x2aU))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb18_sel 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__translate_do) 
           & (((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__linear 
                >> 0xcU) == (0xfffffU & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb18))) 
              & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb18 
                         >> 0x2aU))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb19_sel 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__translate_do) 
           & (((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__linear 
                >> 0xcU) == (0xfffffU & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb19))) 
              & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb19 
                         >> 0x2aU))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb20_sel 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__translate_do) 
           & (((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__linear 
                >> 0xcU) == (0xfffffU & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb20))) 
              & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb20 
                         >> 0x2aU))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb21_sel 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__translate_do) 
           & (((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__linear 
                >> 0xcU) == (0xfffffU & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb21))) 
              & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb21 
                         >> 0x2aU))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb22_sel 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__translate_do) 
           & (((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__linear 
                >> 0xcU) == (0xfffffU & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb22))) 
              & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb22 
                         >> 0x2aU))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb23_sel 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__translate_do) 
           & (((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__linear 
                >> 0xcU) == (0xfffffU & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb23))) 
              & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb23 
                         >> 0x2aU))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb24_sel 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__translate_do) 
           & (((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__linear 
                >> 0xcU) == (0xfffffU & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb24))) 
              & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb24 
                         >> 0x2aU))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb25_sel 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__translate_do) 
           & (((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__linear 
                >> 0xcU) == (0xfffffU & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb25))) 
              & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb25 
                         >> 0x2aU))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb26_sel 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__translate_do) 
           & (((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__linear 
                >> 0xcU) == (0xfffffU & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb26))) 
              & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb26 
                         >> 0x2aU))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb27_sel 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__translate_do) 
           & (((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__linear 
                >> 0xcU) == (0xfffffU & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb27))) 
              & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb27 
                         >> 0x2aU))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb28_sel 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__translate_do) 
           & (((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__linear 
                >> 0xcU) == (0xfffffU & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb28))) 
              & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb28 
                         >> 0x2aU))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb29_sel 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__translate_do) 
           & (((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__linear 
                >> 0xcU) == (0xfffffU & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb29))) 
              & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb29 
                         >> 0x2aU))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb30_sel 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__translate_do) 
           & (((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__linear 
                >> 0xcU) == (0xfffffU & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb30))) 
              & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb30 
                         >> 0x2aU))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb31_sel 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__translate_do) 
           & (((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__linear 
                >> 0xcU) == (0xfffffU & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb31))) 
              & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb31 
                         >> 0x2aU))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__address_waiting_32bit_sib 
        = ((((0U == (7U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                           >> 0x13U))) | (0U == (7U 
                                                 & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                                                    >> 0x10U)))) 
            & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current)) 
           | ((((1U == (7U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                              >> 0x13U))) | (1U == 
                                             (7U & 
                                              (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                                               >> 0x10U)))) 
               & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
                  >> 1U)) | ((((2U == (7U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                                             >> 0x13U))) 
                               | (2U == (7U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                                               >> 0x10U)))) 
                              & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
                                 >> 2U)) | ((((3U == 
                                               (7U 
                                                & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                                                   >> 0x13U))) 
                                              | (3U 
                                                 == 
                                                 (7U 
                                                  & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                                                     >> 0x10U)))) 
                                             & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
                                                >> 3U)) 
                                            | ((IData)(
                                                       ((0x40000U 
                                                         == 
                                                         (0x70000U 
                                                          & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U])) 
                                                        & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
                                                           >> 4U))) 
                                               | ((((5U 
                                                     == 
                                                     (7U 
                                                      & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                                                         >> 0x13U))) 
                                                    | (IData)(
                                                              ((0x50000U 
                                                                == 
                                                                (0x70000U 
                                                                 & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U])) 
                                                               & (0U 
                                                                  != 
                                                                  (3U 
                                                                   & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                                                                      >> 0xeU)))))) 
                                                   & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
                                                      >> 5U)) 
                                                  | ((((6U 
                                                        == 
                                                        (7U 
                                                         & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                                                            >> 0x13U))) 
                                                       | (6U 
                                                          == 
                                                          (7U 
                                                           & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                                                              >> 0x10U)))) 
                                                      & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
                                                         >> 6U)) 
                                                     | (((7U 
                                                          == 
                                                          (7U 
                                                           & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                                                              >> 0x13U))) 
                                                         | (7U 
                                                            == 
                                                            (7U 
                                                             & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                                                                >> 0x10U)))) 
                                                        & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
                                                           >> 7U)))))))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_220 
        = ((~ ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
               >> 0xaU)) & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_18));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_219 
        = ((~ ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
               >> 0xaU)) & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_61));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_218 
        = ((~ ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
               >> 0xaU)) & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_210));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__rd_is_front 
        = ((~ ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
               >> 0xaU)) & (0U != (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__rd_dec_is_front 
        = ((~ ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
               >> 0xaU)) & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_306 
        = ((~ ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
               >> 0xaU)) & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_203));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__rd_mutex_busy_implicit_reg 
        = (((0U == (7U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U])) 
            & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current)) 
           | (((1U == (7U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U])) 
               & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
                  >> 1U)) | (((2U == (7U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U])) 
                              & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
                                 >> 2U)) | (((3U == 
                                              (7U & 
                                               vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U])) 
                                             & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
                                                >> 3U)) 
                                            | (((4U 
                                                 == 
                                                 (7U 
                                                  & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U])) 
                                                & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
                                                   >> 4U)) 
                                               | (((5U 
                                                    == 
                                                    (7U 
                                                     & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U])) 
                                                   & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
                                                      >> 5U)) 
                                                  | (((6U 
                                                       == 
                                                       (7U 
                                                        & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U])) 
                                                      & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
                                                         >> 6U)) 
                                                     | ((7U 
                                                         == 
                                                         (7U 
                                                          & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U])) 
                                                        & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
                                                           >> 7U)))))))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__rd_in_condition 
        = ((((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
             >> 0xaU) & ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__io_allow_check_needed)) 
                         & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_7))) 
           | ((1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)) 
              & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
                 >> 2U)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT____VdfgRegularize_h2e3d579a_0_43 
        = ((IData)(((0U == (0x700U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U])) 
                    & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current))) 
           | ((IData)(((0x100U == (0x700U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U])) 
                       & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
                          >> 1U))) | ((IData)(((0x200U 
                                                == 
                                                (0x700U 
                                                 & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U])) 
                                               & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
                                                  >> 2U))) 
                                      | (IData)(((0x300U 
                                                  == 
                                                  (0x700U 
                                                   & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U])) 
                                                 & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
                                                    >> 3U))))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT____VdfgRegularize_h2e3d579a_0_33 
        = (IData)(((0x500U == (0x700U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U])) 
                   & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
                      >> 5U)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT____VdfgRegularize_h2e3d579a_0_34 
        = (IData)(((0x600U == (0x700U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U])) 
                   & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
                      >> 6U)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT____VdfgRegularize_h2e3d579a_0_35 
        = (IData)(((0x700U == (0x700U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U])) 
                   & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
                      >> 7U)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT____VdfgRegularize_h2e3d579a_0_36 
        = (IData)(((0x700U == (0x700U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U])) 
                   & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
                      >> 3U)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_271 
        = ((~ ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
               >> 9U)) & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_43));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_269 
        = ((~ ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
               >> 9U)) & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_75));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_249 
        = ((~ ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
               >> 9U)) & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_222));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_248 
        = ((~ ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
               >> 9U)) & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_224));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_247 
        = ((~ ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
               >> 9U)) & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_225));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_242 
        = ((~ ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
               >> 9U)) & (0x6fU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_241 
        = ((~ ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
               >> 9U)) & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_134));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_310 
        = ((~ ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
               >> 9U)) & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__address_stack_for_ret_first));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_309 
        = ((~ ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
               >> 9U)) & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_160));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_299 
        = ((~ ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
               >> 9U)) & (0x37U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_system_qword 
        = ((~ ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
               >> 0xaU)) & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_66));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_216 
        = ((~ ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
               >> 0xaU)) & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_64));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_215 
        = ((~ ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
               >> 0xaU)) & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_65));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_224 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_239) 
           & ((~ ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
                  >> 0xaU)) & (0U != (3U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_1 
                                            >> 0x10U)))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_152 
        = (IData)((0U != (0x201U & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_84 
        = (1U & (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
                  >> 9U) | (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
                             >> 8U) & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__v8086_mode))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_49 
        = (1U & ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__rd_address_effective_ready)) 
                 | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
                    >> 9U)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_305 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_227) 
           & ((~ ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
                  >> 0xaU)) & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_228)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_284 
        = ((~ ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
               >> 9U)) & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_106));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_39 
        = (1U & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
                 | (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                    & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
                       >> 2U))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_296 
        = ((~ ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
               >> 9U)) & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_93));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_318 
        = ((~ ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
               >> 0xaU)) & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_190));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_304 
        = ((~ ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
               >> 0xaU)) & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_241));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_313 
        = ((~ ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
               >> 0xaU)) & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_89));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_302 
        = ((~ ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
               >> 0xaU)) & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_243));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_104 
        = (IData)((0U != (0x210U & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_113 
        = (IData)((0U != (0x202U & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_229 
        = ((~ ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
               >> 0xaU)) & (0U != (0x3fffU & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_1 
                                              >> 2U))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_194 
        = (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
            >> 1U) & (0U != (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_prefix_group_1_rep)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT____VdfgRegularize_h2e3d579a_0_44 
        = ((IData)(((0U == (0x3800U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U])) 
                    & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current))) 
           | ((IData)(((0x800U == (0x3800U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U])) 
                       & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
                          >> 1U))) | ((IData)(((0x1000U 
                                                == 
                                                (0x3800U 
                                                 & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U])) 
                                               & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
                                                  >> 2U))) 
                                      | (IData)(((0x1800U 
                                                  == 
                                                  (0x3800U 
                                                   & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U])) 
                                                 & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
                                                    >> 3U))))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT____VdfgRegularize_h2e3d579a_0_27 
        = (IData)(((0x2000U == (0x3800U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U])) 
                   & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
                      >> 4U)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT____VdfgRegularize_h2e3d579a_0_28 
        = (IData)(((0x2800U == (0x3800U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U])) 
                   & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
                      >> 5U)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT____VdfgRegularize_h2e3d579a_0_30 
        = (IData)(((0x3000U == (0x3800U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U])) 
                   & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
                      >> 6U)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT____VdfgRegularize_h2e3d579a_0_32 
        = (IData)(((0x3800U == (0x3800U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U])) 
                   & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
                      >> 7U)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT____VdfgRegularize_h2e3d579a_0_42 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_is_8bit));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT____VdfgRegularize_h2e3d579a_0_41 
        = (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
            >> 1U) & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_is_8bit));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT____VdfgRegularize_h2e3d579a_0_40 
        = (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
            >> 2U) & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_is_8bit));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_effective_address_inst__DOT__address_effective_modrm 
        = (((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_address_32bit)) 
            & (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_44))
            ? (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
               >> 0x10U) : (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_address_32bit) 
                             & (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_45))
                             ? ((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[1U] 
                                 << 0x10U) | (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                                              >> 0x10U))
                             : ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_address_32bit)
                                 ? (((0U == (7U & (
                                                   vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                                                   >> 8U)))
                                      ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__eax
                                      : ((1U == (7U 
                                                 & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                                                    >> 8U)))
                                          ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ecx
                                          : ((2U == 
                                              (7U & 
                                               (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                                                >> 8U)))
                                              ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__edx
                                              : ((3U 
                                                  == 
                                                  (7U 
                                                   & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                                                      >> 8U)))
                                                  ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ebx
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (7U 
                                                    & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                                                       >> 8U)))
                                                   ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_effective_address_inst__DOT__sib_base32_plus_index32_scaled
                                                   : 
                                                  ((5U 
                                                    == 
                                                    (7U 
                                                     & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                                                        >> 8U)))
                                                    ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ebp
                                                    : 
                                                   ((6U 
                                                     == 
                                                     (7U 
                                                      & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                                                         >> 8U)))
                                                     ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__esi
                                                     : vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__edi))))))) 
                                    + ((2U == (3U & 
                                               (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                                                >> 0xeU)))
                                        ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_effective_address_inst__DOT__address_disp32
                                        : ((1U == (3U 
                                                   & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                                                      >> 0xeU)))
                                            ? (((- (IData)(
                                                           (1U 
                                                            & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_effective_address_inst__DOT__address_disp32 
                                                               >> 7U)))) 
                                                << 8U) 
                                               | (0xffU 
                                                  & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_effective_address_inst__DOT__address_disp32))
                                            : 0U)))
                                 : (0xffffU & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_effective_address_inst__DOT__base16) 
                                               + ((2U 
                                                   == 
                                                   (3U 
                                                    & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                                                       >> 0xeU)))
                                                   ? 
                                                  ((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                                                      >> 0x10U))
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (3U 
                                                     & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                                                        >> 0xeU)))
                                                    ? 
                                                   ((0xff00U 
                                                     & ((- (IData)(
                                                                   (1U 
                                                                    & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                                                                       >> 0x17U)))) 
                                                        << 8U)) 
                                                    | (0xffU 
                                                       & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                                                          >> 0x10U)))
                                                    : 0U)))))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_offset_inst__DOT__e_final_offset 
        = ((0x37U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd))
            ? ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_operand_32bit)
                ? ((IData)(4U) + vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ebp)
                : ((IData)(2U) + vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ebp))
            : ((1U & (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_65) 
                       & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex))) 
                      | ((0x22U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
                         | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_123) 
                            | (((0x23U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
                                & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex))) 
                               | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_126) 
                                  | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_138) 
                                     | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_139) 
                                        | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_140) 
                                           | (((0x3fU 
                                                == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
                                               & (1U 
                                                  == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex))) 
                                              | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_183)
                                                  ? (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_decoder)
                                                  : 
                                                 ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__offset_ret_far_se)
                                                   ? (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_decoder)
                                                   : 
                                                  ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_240) 
                                                   | (0x6dU 
                                                      == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)))))))))))))))
                ? ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_operand_32bit)
                    ? ((IData)(4U) + vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__esp)
                    : ((IData)(2U) + vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__esp))
                : (((0x35U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
                    & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)))
                    ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__exe_address_effective
                    : ((1U & (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_65) 
                               & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex))) 
                              | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_183)
                                  ? (~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_decoder))
                                  : ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_decoder)) 
                                     & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__offset_ret_far_se)))))
                        ? ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_operand_32bit)
                            ? ((IData)(4U) + (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__esp 
                                              + (0xffffU 
                                                 & (IData)(
                                                           (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_decoder 
                                                            >> 8U)))))
                            : ((IData)(2U) + (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__esp 
                                              + (((- (IData)(
                                                             ((IData)(
                                                                      (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_decoder 
                                                                       >> 0x17U)) 
                                                              & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__offset_ret_far_se)))) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & (IData)(
                                                              (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_decoder 
                                                               >> 8U)))))))
                        : ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__offset_iret)
                            ? ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_operand_32bit)
                                ? ((IData)(0xcU) + vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__esp)
                                : ((IData)(6U) + vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__esp))
                            : (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_122) 
                                | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_186) 
                                   & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_decoder)))
                                ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_4
                                : (((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_decoder)) 
                                    & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_186))
                                    ? (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_4 
                                       + (0xffffU & (IData)(
                                                            (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_decoder 
                                                             >> 8U))))
                                    : (((3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
                                        & (0xcU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)))
                                        ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__esp
                                        : (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_24) 
                                            | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_25))
                                            ? ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_operand_32bit)
                                                ? (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__wr_stack_offset 
                                                   - (IData)(4U))
                                                : (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__wr_stack_offset 
                                                   - (IData)(2U)))
                                            : (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_26) 
                                                | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_31) 
                                                   | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_6)))
                                                ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__wr_stack_offset
                                                : (
                                                   ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_29) 
                                                    | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_96))
                                                    ? 
                                                   ((0x80000U 
                                                     & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_1)
                                                     ? 
                                                    (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__esp 
                                                     - (IData)(4U))
                                                     : 
                                                    (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__esp 
                                                     - (IData)(2U)))
                                                    : 
                                                   (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_30) 
                                                     | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_98) 
                                                        | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_99) 
                                                           | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_100))))
                                                     ? 
                                                    ((0x80000U 
                                                      & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_1)
                                                      ? 
                                                     (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__wr_stack_offset 
                                                      - (IData)(4U))
                                                      : 
                                                     (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__wr_stack_offset 
                                                      - (IData)(2U)))
                                                     : 
                                                    ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__offset_int_real)
                                                      ? 
                                                     (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__esp 
                                                      - (IData)(2U))
                                                      : 
                                                     (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_87) 
                                                       | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_88))
                                                       ? 
                                                      (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__wr_stack_offset 
                                                       - (IData)(2U))
                                                       : 
                                                      ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__offset_task)
                                                        ? 
                                                       ((0x20000U 
                                                         & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_3)
                                                         ? 
                                                        (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__esp 
                                                         - (IData)(4U))
                                                         : 
                                                        (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__esp 
                                                         - (IData)(2U)))
                                                        : vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_offset_inst__DOT__e_push_offset)))))))))))))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__memory_read_inst__DOT____VdfgRegularize_h2f202e7f_0_7 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__memory_read_inst__DOT__cond_3)) 
           & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__memory_read_inst__DOT__state)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__avalon_mem_inst__DOT__read_line_done_trigger_to_reg 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__req_readline_done)) 
           & (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__avalon_mem_inst__DOT____VdfgRegularize_hda04a1ba_0_14) 
               & (4U == (IData)(vlSelfRef.avm_burstcount))) 
              | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__avalon_mem_inst__DOT__read_line_done_trigger)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__avalon_mem_inst__DOT__read_burst_done_trigger_to_reg 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__req_readburst_done)) 
           & (((4U != (IData)(vlSelfRef.avm_burstcount)) 
               & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__avalon_mem_inst__DOT____VdfgRegularize_hda04a1ba_0_14)) 
              | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__avalon_mem_inst__DOT__read_burst_done_trigger)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_register_inst__DOT____VdfgRegularize_hcec3c5b1_2_15 
        = (1U & ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_is_8bit)) 
                 & (~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_register_inst__DOT__w_operand_32bit))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_register_inst__DOT____VdfgRegularize_hcec3c5b1_2_16 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_is_8bit)) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_register_inst__DOT__w_operand_32bit));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__fetch 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__prefetchfifo_accept_empty)
            ? 0ULL : vlSelfRef.__VdfgRegularize_hd87f99a1_0_9);
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__fetch_inst__DOT____VdfgRegularize_h4ed22d34_0_2 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__prefetchfifo_accept_empty)) 
           & (9U > (0xfU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__prefetchfifo_accept_data[2U])));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__fetch_valid 
        = (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__prefetchfifo_accept_empty) 
            | (9U <= (0xfU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__prefetchfifo_accept_data[2U])))
            ? 0U : (0xfU & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__prefetchfifo_accept_data[2U] 
                            - (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__fetch_inst__DOT__fetch_count))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__avalon_mem_inst__DOT__read_code_done_trigger_to_reg 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__req_readcode_done)) 
           & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__avalon_mem_inst__DOT____VdfgRegularize_hda04a1ba_0_16) 
              | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__avalon_mem_inst__DOT__read_code_done_trigger)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__avalon_mem_inst__DOT__bus_3_to_reg 
        = (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__avalon_mem_inst__DOT____VdfgRegularize_hda04a1ba_0_13) 
            & (4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__avalon_mem_inst__DOT____VdfgRegularize_hda04a1ba_0_10)))
            ? vlSelfRef.avm_readdata : ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__avalon_mem_inst__DOT____VdfgRegularize_hda04a1ba_0_16)
                                         ? vlSelfRef.avm_readdata
                                         : vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__avalon_mem_inst__DOT__bus_3));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__exception_inst__DOT____VdfgRegularize_h8d8e5c8e_0_11 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__exception_inst__DOT__cond_0) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__exception_inst__DOT__cond_1));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__exception_inst__DOT__cond_7 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__exception_inst__DOT__shutdown_start)) 
           & ((0U < (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__exception_inst__DOT__count)) 
              & ((3U != (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__exception_inst__DOT__exception_type)) 
                 & (((1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__exception_inst__DOT__last_type)) 
                     & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__exception_inst__DOT__exception_type))) 
                    | ((2U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__exception_inst__DOT__last_type)) 
                       & ((1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__exception_inst__DOT__exception_type)) 
                          | (2U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__exception_inst__DOT__exception_type))))))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_bit_value 
        = (1U & ((0x27U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd))
                  ? (~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_bit_selected))
                  : (0x26U != (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_divide_inst__DOT__div_overflow 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_141) 
           & (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__exe_is_8bit) 
               & (((0x2bU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
                   & (((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_divide_inst__DOT__div_quotient_neg)) 
                       & (0U != (3U & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_divide_inst__DOT__div_quotient 
                                               >> 7U))))) 
                      | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_divide_inst__DOT__div_quotient_neg) 
                         & (0x80U < (0x1ffU & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_divide_inst__DOT__div_quotient)))))) 
                  | ((0x2bU != (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
                     & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_divide_inst__DOT__div_quotient 
                                >> 8U))))) | (((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_operand_32bit)) 
                                               & (((0x2bU 
                                                    == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
                                                   & (((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_divide_inst__DOT__div_quotient_neg)) 
                                                       & (0U 
                                                          != 
                                                          (3U 
                                                           & (IData)(
                                                                     (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_divide_inst__DOT__div_quotient 
                                                                      >> 0xfU))))) 
                                                      | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_divide_inst__DOT__div_quotient_neg) 
                                                         & (0x8000U 
                                                            < 
                                                            (0x1ffffU 
                                                             & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_divide_inst__DOT__div_quotient)))))) 
                                                  | ((0x2bU 
                                                      != (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
                                                     & (IData)(
                                                               (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_divide_inst__DOT__div_quotient 
                                                                >> 0x10U))))) 
                                              | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_operand_32bit) 
                                                 & (((0x2bU 
                                                      == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
                                                     & (((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_divide_inst__DOT__div_quotient_neg)) 
                                                         & (0U 
                                                            != 
                                                            (3U 
                                                             & (IData)(
                                                                       (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_divide_inst__DOT__div_quotient 
                                                                        >> 0x1fU))))) 
                                                        | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_divide_inst__DOT__div_quotient_neg) 
                                                           & (0x80000000ULL 
                                                              < vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_divide_inst__DOT__div_quotient)))) 
                                                    | ((0x2bU 
                                                        != (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
                                                       & (IData)(
                                                                 (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_divide_inst__DOT__div_quotient 
                                                                  >> 0x20U))))))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__div_result_quotient 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_divide_inst__DOT__div_quotient_neg)
            ? (- (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_divide_inst__DOT__div_quotient))
            : (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_divide_inst__DOT__div_quotient));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__avalon_io_inst__DOT____VdfgRegularize_h5ceef672_0_38 
        = ((2U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__avalon_io_inst__DOT__state)) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__avalon_io_inst__DOT__cond_4));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__avalon_io_inst__DOT____VdfgRegularize_h5ceef672_0_36 
        = ((1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__avalon_io_inst__DOT__state)) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__avalon_io_inst__DOT__cond_4));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__avalon_io_inst__DOT____VdfgRegularize_h5ceef672_0_33 
        = ((4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__avalon_io_inst__DOT__state)) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__avalon_io_inst__DOT__cond_8));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__avalon_io_inst__DOT____VdfgRegularize_h5ceef672_0_32 
        = ((3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__avalon_io_inst__DOT__state)) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__avalon_io_inst__DOT__cond_8));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT__e_shift_cmd_shift 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT__e_shift_SHL) 
           | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT__e_shift_SHR) 
              | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT__e_shift_SAR) 
                 | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT__e_shift_SHLD) 
                    | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT__e_shift_SHRD)))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT____VdfgRegularize_hf83a959e_0_54 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT__e_shift_SHL) 
           | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT__e_shift_ROL) 
              | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT__e_shift_RCL) 
                 | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT__e_shift_SHLD))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT__e_shift_right_input 
        = (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT__e_shift_SAR) 
            & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__exe_is_8bit))
            ? (((- (QData)((IData)((1U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst 
                                          >> 7U))))) 
                << 8U) | (QData)((IData)((0xffU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst))))
            : (((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_operand_32bit)) 
                & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT__e_shift_SAR))
                ? (((- (QData)((IData)((1U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst 
                                              >> 0xfU))))) 
                    << 0x10U) | (QData)((IData)((0xffffU 
                                                 & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst))))
                : (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT__e_shift_SAR) 
                    & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_operand_32bit))
                    ? (((QData)((IData)((- (IData)(
                                                   (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst 
                                                    >> 0x1fU))))) 
                        << 0x20U) | (QData)((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst)))
                    : (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT__e_shift_SHR) 
                        & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__exe_is_8bit))
                        ? (QData)((IData)((0xffU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst)))
                        : (((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_operand_32bit)) 
                            & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT__e_shift_SHR))
                            ? (QData)((IData)((0xffffU 
                                               & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst)))
                            : (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT__e_shift_SHR) 
                                & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_operand_32bit))
                                ? (QData)((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst))
                                : ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT__e_shift_ROR)
                                    ? (((QData)((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT__e_shift_dst_wire)) 
                                        << 0x20U) | (QData)((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT__e_shift_dst_wire)))
                                    : (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT__e_shift_RCR) 
                                        & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__exe_is_8bit))
                                        ? (((QData)((IData)(
                                                            ((((0x10000000U 
                                                                & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst 
                                                                   << 0x1cU)) 
                                                               | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__cflag) 
                                                                  << 0x1bU)) 
                                                              | ((0x7f80000U 
                                                                  & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst 
                                                                     << 0x13U)) 
                                                                 | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__cflag) 
                                                                    << 0x12U))) 
                                                             | (((0x3fc00U 
                                                                  & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst 
                                                                     << 0xaU)) 
                                                                 | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__cflag) 
                                                                    << 9U)) 
                                                                | ((0x1feU 
                                                                    & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst 
                                                                       << 1U)) 
                                                                   | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__cflag)))))) 
                                            << 0x23U) 
                                           | (((QData)((IData)(
                                                               (((0x3fc00U 
                                                                  & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst 
                                                                     << 0xaU)) 
                                                                 | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__cflag) 
                                                                    << 9U)) 
                                                                | ((0x1feU 
                                                                    & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst 
                                                                       << 1U)) 
                                                                   | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__cflag))))) 
                                               << 0x11U) 
                                              | (QData)((IData)(
                                                                ((0x1fe00U 
                                                                  & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst 
                                                                     << 9U)) 
                                                                 | (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__cflag) 
                                                                     << 8U) 
                                                                    | (0xffU 
                                                                       & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst)))))))
                                        : (((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_operand_32bit)) 
                                            & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT__e_shift_RCR))
                                            ? (((QData)((IData)(
                                                                (((0x7ffc0000U 
                                                                   & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst 
                                                                      << 0x12U)) 
                                                                  | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__cflag) 
                                                                     << 0x11U)) 
                                                                 | ((0x1fffeU 
                                                                     & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst 
                                                                        << 1U)) 
                                                                    | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__cflag))))) 
                                                << 0x21U) 
                                               | (((QData)((IData)(
                                                                   (0xffffU 
                                                                    & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst))) 
                                                   << 0x11U) 
                                                  | (QData)((IData)(
                                                                    (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__cflag) 
                                                                      << 0x10U) 
                                                                     | (0xffffU 
                                                                        & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst))))))
                                            : (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT__e_shift_RCR) 
                                                & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_operand_32bit))
                                                ? (
                                                   ((QData)((IData)(
                                                                    ((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst 
                                                                      << 1U) 
                                                                     | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__cflag)))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst)))
                                                : ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT____VdfgRegularize_hf83a959e_0_11)
                                                    ? main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT____VdfgRegularize_hf83a959e_0_7
                                                    : 
                                                   (((QData)((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__src)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst))))))))))))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT__e_shift_left_input 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT__e_shift_SHL)
            ? ((QData)((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT__e_shift_dst_wire)) 
               << 0x20U) : ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT__e_shift_ROL)
                             ? (((QData)((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT__e_shift_dst_wire)) 
                                 << 0x20U) | (QData)((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT__e_shift_dst_wire)))
                             : ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT____VdfgRegularize_hf83a959e_0_5)
                                 ? (((QData)((IData)(
                                                     (((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst 
                                                        << 0x18U) 
                                                       | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__cflag) 
                                                          << 0x17U)) 
                                                      | (((0x7f8000U 
                                                           & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst 
                                                              << 0xfU)) 
                                                          | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__cflag) 
                                                             << 0xeU)) 
                                                         | ((0x3f00U 
                                                             & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst 
                                                                << 6U)) 
                                                            | (0xffU 
                                                               & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst)))))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 ((((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__cflag) 
                                                                    << 0x1fU) 
                                                                   | ((0x7f800000U 
                                                                       & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst 
                                                                          << 0x17U)) 
                                                                      | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__cflag) 
                                                                         << 0x16U))) 
                                                                  | (((0x3fc000U 
                                                                       & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst 
                                                                          << 0xeU)) 
                                                                      | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__cflag) 
                                                                         << 0xdU)) 
                                                                     | ((0x1fe0U 
                                                                         & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst 
                                                                            << 5U)) 
                                                                        | (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__cflag) 
                                                                            << 4U) 
                                                                           | (0xfU 
                                                                              & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst 
                                                                                >> 4U)))))))))
                                 : (((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_operand_32bit)) 
                                     & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT__e_shift_RCL))
                                     ? (((QData)((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT__e_shift_dst_wire)) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__cflag) 
                                                            << 0x1fU) 
                                                           | ((0x7fff8000U 
                                                               & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst 
                                                                  << 0xfU)) 
                                                              | (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__cflag) 
                                                                  << 0xeU) 
                                                                 | (0x3fffU 
                                                                    & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst 
                                                                       >> 2U))))))))
                                     : (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT__e_shift_RCL) 
                                         & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_operand_32bit))
                                         ? (((QData)((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT__e_shift_dst_wire)) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__cflag) 
                                                                << 0x1fU) 
                                                               | (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst 
                                                                  >> 1U)))))
                                         : ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT____VdfgRegularize_hf83a959e_0_6)
                                             ? main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT____VdfgRegularize_hf83a959e_0_7
                                             : (((QData)((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT__e_shift_dst_wire)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__src)))))))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb4_ena 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb3_ena) 
           & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__tlb_regs_inst__DOT__tlb3 
                      >> 0x2aU)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__dcache_control_ram_inst__DOT____VdfgRegularize_h80593286_0_10 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__dcache_control_ram_inst__DOT____VdfgRegularize_h80593286_0_14) 
           & (0x3ffU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__dcache_control_ram_inst__DOT__wbinvd_counter)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__dcache_control_ram_inst__DOT____VdfgRegularize_h80593286_0_7 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__control_ram_writeline_do) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__link_writeline_inst__DOT__done_delayed));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT____VdfgRegularize_h94f45732_0_45 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT____VdfgRegularize_h94f45732_0_69) 
           & (3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__current_type)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_105 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_210)
            ? 0x6eU : ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_211)
                        ? (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__mc_cmd)
                        : 0U));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__tlbcheck_do 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_249) 
           | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_252) 
              | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_173)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__avalon_io_inst__DOT____VdfgRegularize_h5ceef672_0_28 
        = ((4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__io_read_length)) 
           & (1U == (3U & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__io_read_address))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__avalon_io_inst__DOT____VdfgRegularize_h5ceef672_0_29 
        = ((4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__io_read_length)) 
           & (2U == (3U & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__io_read_address))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__avalon_io_inst__DOT____VdfgRegularize_h5ceef672_0_26 
        = ((2U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__io_read_length)) 
           & (3U == (3U & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__io_read_address))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__exe_div_exception 
        = (((0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_divide_inst__DOT__div_counter)) 
            & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_divide_inst__DOT____VdfgRegularize_h9793d8a4_0_5) 
               & (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__exe_is_8bit) 
                   & (0U == (0xffU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__src))) 
                  | (((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_operand_32bit)) 
                      & (0U == (0xffffU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__src))) 
                     | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_operand_32bit) 
                        & (0U == vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__src)))))) 
           | (((0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_divide_inst__DOT__div_counter)) 
               & ((0x2bU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
                  & (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__exe_is_8bit) 
                      & (0x8000U == (0xffffU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__eax))) 
                     | (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT____VdfgRegularize_hf83a959e_0_51) 
                         & ((0x8000U == (0xffffU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__edx)) 
                            & (0U == (0xffffU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__eax)))) 
                        | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_shift_inst__DOT____VdfgRegularize_hf83a959e_0_52) 
                           & ((0x80000000U == vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__edx) 
                              & (0U == vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__eax))))))) 
              | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_divide_inst__DOT__div_overflow_waiting)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_301 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_197)) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_196));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_296 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_197)) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_236));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_222 
        = ((0x57U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_330));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_8 
        = ((3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_330));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__icache_inst__DOT__icache_matched_inst__DOT____VdfgRegularize_h109e9115_0_15 
        = (1U & ((~ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_3)) 
                 & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__icache_inst__DOT__icache_control_ram_inst__DOT__ram_q_a) 
                    >> 4U)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__icache_inst__DOT__icache_matched_inst__DOT____VdfgRegularize_h109e9115_0_9 
        = ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_3)
            ? 0U : (0xfU & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__icache_inst__DOT__icache_control_ram_inst__DOT__ram_q_a)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__icache_inst__DOT__icache_matched_inst__DOT____VdfgRegularize_h109e9115_0_10 
        = (1U & ((~ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_3)) 
                 & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__icache_inst__DOT__icache_control_ram_inst__DOT__ram_q_a) 
                    >> 5U)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__icache_inst__DOT__icache_matched_inst__DOT____VdfgRegularize_h109e9115_0_8 
        = ((~ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_3)) 
           & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__icache_inst__DOT__icache_control_ram_inst__DOT__ram_q_a) 
              >> 6U));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__icache_inst__DOT__icache_matched_inst__DOT____VdfgRegularize_h109e9115_0_0 
        = (1U & ((~ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_3)) 
                 & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__icache_inst__DOT__icache_control_ram_inst__DOT__ram_q_a)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__icache_inst__DOT__icache_matched_inst__DOT____VdfgRegularize_h109e9115_0_2 
        = (1U & ((~ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_3)) 
                 & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__icache_inst__DOT__icache_control_ram_inst__DOT__ram_q_a) 
                    >> 1U)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__icache_inst__DOT__icache_matched_inst__DOT____VdfgRegularize_h109e9115_0_3 
        = (1U & ((~ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_3)) 
                 & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__icache_inst__DOT__icache_control_ram_inst__DOT__ram_q_a) 
                    >> 2U)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__icache_inst__DOT__icache_matched_inst__DOT____VdfgRegularize_h109e9115_0_4 
        = (1U & ((~ (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_3)) 
                 & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__icache_inst__DOT__icache_control_ram_inst__DOT__ram_q_a) 
                    >> 3U)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_240 
        = ((~ ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
               >> 9U)) & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_135));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_16 
        = ((IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_114) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_23));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_19 
        = ((IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_114) 
           & (0x50000000000ULL == (0xf0000000000ULL 
                                   & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_22 
        = ((IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_114) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_30));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_170 
        = ((IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_108) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_23));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_173 
        = ((IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_108) 
           & (0x50000000000ULL == (0xf0000000000ULL 
                                   & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_176 
        = ((IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_108) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_30));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_9 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_8) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__protected_mode));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_166 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_87) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__protected_mode));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__avalon_io_inst__DOT__write_1_byteenable 
        = (((1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__io_write_length)) 
            & (0U == (3U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_1)))
            ? 1U : (((1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__io_write_length)) 
                     & (1U == (3U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_1)))
                     ? 2U : (((1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__io_write_length)) 
                              & (2U == (3U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_1)))
                              ? 4U : (((1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__io_write_length)) 
                                       & (3U == (3U 
                                                 & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_1)))
                                       ? 8U : (((2U 
                                                 == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__io_write_length)) 
                                                & (0U 
                                                   == 
                                                   (3U 
                                                    & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_1)))
                                                ? 3U
                                                : (
                                                   ((2U 
                                                     == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__io_write_length)) 
                                                    & (1U 
                                                       == 
                                                       (3U 
                                                        & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_1)))
                                                    ? 6U
                                                    : 
                                                   (((2U 
                                                      == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__io_write_length)) 
                                                     & (2U 
                                                        == 
                                                        (3U 
                                                         & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_1)))
                                                     ? 0xcU
                                                     : 
                                                    ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__avalon_io_inst__DOT____VdfgRegularize_h5ceef672_0_15)
                                                      ? 8U
                                                      : 
                                                     (((4U 
                                                        == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__io_write_length)) 
                                                       & (0U 
                                                          == 
                                                          (3U 
                                                           & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_1)))
                                                       ? 0xfU
                                                       : 
                                                      ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__avalon_io_inst__DOT____VdfgRegularize_h5ceef672_0_17)
                                                        ? 0xeU
                                                        : 
                                                       ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__avalon_io_inst__DOT____VdfgRegularize_h5ceef672_0_18)
                                                         ? 0xcU
                                                         : 8U)))))))))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__avalon_io_inst__DOT__write_two_stage 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__avalon_io_inst__DOT____VdfgRegularize_h5ceef672_0_15) 
           | ((4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__io_write_length)) 
              & (1U <= (3U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_1))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT____VdfgRegularize_h694aed34_0_13 
        = ((IData)(main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT____VdfgRegularize_h694aed34_0_12) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__is_write));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT____VdfgRegularize_h694aed34_0_34 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT__is_write)) 
           & (IData)(main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_inst__DOT____VdfgRegularize_h694aed34_0_12));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__req_readline_line[0U] 
        = vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__req_readburst_data[0U];
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__req_readline_line[1U] 
        = vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__req_readburst_data[1U];
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__req_readline_line[2U] 
        = vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__req_readburst_data[2U];
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__req_readline_line[3U] 
        = vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__avalon_mem_inst__DOT__bus_3;
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT____VdfgRegularize_h94f45732_0_72 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__cond_37)) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT____VdfgRegularize_h94f45732_0_42));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT____VdfgRegularize_h94f45732_0_37 
        = ((IData)(main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT____VdfgRegularize_h94f45732_0_76) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__cond_37));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT____VdfgRegularize_h94f45732_0_75 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__cond_37)) 
           & (IData)(main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT____VdfgRegularize_h94f45732_0_76));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_148 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__io_allow_check_needed)) 
           & (IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_80));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_149 
        = ((IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_80) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__io_allow_check_needed));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_180 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__io_allow_check_needed)) 
           & (IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_92));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_181 
        = ((IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_92) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__io_allow_check_needed));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_273 
        = ((~ ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
               >> 9U)) & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_115));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_253 
        = ((~ ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
               >> 9U)) & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_131));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_257 
        = ((~ ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
               >> 9U)) & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_128));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_256 
        = ((~ ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
               >> 9U)) & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_129));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_261 
        = ((~ ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
               >> 9U)) & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_124));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_251 
        = ((~ ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
               >> 9U)) & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_279));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_292 
        = ((~ ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
               >> 9U)) & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_99));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_295 
        = ((~ ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
               >> 9U)) & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_94));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_263 
        = ((~ ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
               >> 9U)) & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_122));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_244 
        = ((~ ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
               >> 9U)) & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_133));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__exception_inst__DOT__shutdown_to_reg 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__exception_inst__DOT____VdfgRegularize_h8d8e5c8e_0_10) 
           | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__exception_inst__DOT__shutdown));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_176 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_156) 
           & (0x13U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_177 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_156) 
           & (0x14U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_178 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_156) 
           & (0x15U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_270 
        = ((~ ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
               >> 9U)) & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_118));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_offset_inst__DOT__e_new_stack_final_offset 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__offset_new_stack)
            ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_4
            : (((~ (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_3 
                    >> 0x13U)) & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__offset_new_stack_minus))
                ? (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_4 
                   - (IData)(2U)) : ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__offset_new_stack_minus)
                                      ? (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_4 
                                         - (IData)(4U))
                                      : ((0x80000U 
                                          & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_3)
                                          ? (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__wr_stack_offset 
                                             - (IData)(4U))
                                          : (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__wr_stack_offset 
                                             - (IData)(2U))))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_278 
        = ((~ ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
               >> 9U)) & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_109));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_262 
        = ((~ ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
               >> 9U)) & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_123));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_glob_param_4_set 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__address_stack_for_iret_third) 
           | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_161) 
              | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_189)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_172 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_217) 
           & (0xc000U == (0xc000U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U])));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_139 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_217) 
           & (3U != (3U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                           >> 0xeU))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_194 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_216) 
           & (0xc000U == (0xc000U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U])));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_132 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_216) 
           & (3U != (3U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                           >> 0xeU))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__ldtr_cache_to_reg 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_132)
            ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor
            : vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ldtr_cache);
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__ldtr_cache_valid_to_reg 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__wr_glob_param_3_set)) 
           & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_132) 
              | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ldtr_cache_valid)));
    if (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_94) {
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__dr6_breakpoints_to_reg 
            = (0xfU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result2);
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__dr6_b12_to_reg 
            = (1U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result2 
                     >> 0xcU));
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__dr6_bd_to_reg 
            = (1U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result2 
                     >> 0xdU));
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__dr6_bs_to_reg 
            = (1U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result2 
                     >> 0xeU));
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__dr6_bt_to_reg 
            = (1U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result2 
                     >> 0xfU));
    } else {
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__dr6_breakpoints_to_reg 
            = (0xfU & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__dr6_breakpoints));
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__dr6_b12_to_reg 
            = (1U & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__dr6_b12));
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__dr6_bd_to_reg 
            = (1U & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__dr6_bd));
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__dr6_bs_to_reg 
            = (1U & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__dr6_bs));
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__dr6_bt_to_reg 
            = (1U & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__dr6_bt));
    }
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_101 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_171) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_dst_is_reg));
    if (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_90) {
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__cr0_ne_to_reg 
            = (1U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result2 
                     >> 5U));
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__cr0_wp_to_reg 
            = (1U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result2 
                     >> 0x10U));
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__cr0_am_to_reg 
            = (1U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result2 
                     >> 0x12U));
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__cr0_nw_to_reg 
            = (1U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result2 
                     >> 0x1dU));
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__cr0_cd_to_reg 
            = (1U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result2 
                     >> 0x1eU));
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__cr0_pg_to_reg 
            = (1U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result2 
                     >> 0x1fU));
    } else {
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__cr0_ne_to_reg 
            = (1U & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__cr0_ne));
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__cr0_wp_to_reg 
            = (1U & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__cr0_wp));
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__cr0_am_to_reg 
            = (1U & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__cr0_am));
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__cr0_nw_to_reg 
            = (1U & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__cr0_nw));
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__cr0_cd_to_reg 
            = (1U & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__cr0_cd));
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__cr0_pg_to_reg 
            = (1U & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__cr0_pg));
    }
    if (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_110) {
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__cr0_pe_to_reg 
            = (1U & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__cr0_pe) 
                     | vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result2));
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__cr0_mp_to_reg 
            = (1U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result2 
                     >> 1U));
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__cr0_em_to_reg 
            = (1U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result2 
                     >> 2U));
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__cr0_ts_to_reg 
            = (1U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result2 
                     >> 3U));
    } else if (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_90) {
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__cr0_pe_to_reg 
            = (1U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result2);
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__cr0_mp_to_reg 
            = (1U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result2 
                     >> 1U));
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__cr0_em_to_reg 
            = (1U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result2 
                     >> 2U));
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__cr0_ts_to_reg 
            = (1U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result2 
                     >> 3U));
    } else {
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__cr0_pe_to_reg 
            = (1U & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__cr0_pe));
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__cr0_mp_to_reg 
            = (1U & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__cr0_mp));
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__cr0_em_to_reg 
            = (1U & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__cr0_em));
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__cr0_ts_to_reg 
            = (1U & ((0x3eU != (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
                     & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__wr_glob_param_3_set) 
                        | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__cr0_ts))));
    }
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_286 
        = ((~ ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
               >> 9U)) & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_104));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_88 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_87) 
           & (7U != (7U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_decoder[0U] 
                           >> 3U))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__rd_system_linear 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_33)
            ? ((IData)(0x66U) + vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__tr_base)
            : ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_35)
                ? (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__tr_base 
                   + vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_4)
                : ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_64)
                    ? (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__idtr_base 
                       + (0x3fcU & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__exception_inst__DOT__exc_vector_full) 
                                    << 2U))) : ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_65)
                                                 ? 
                                                (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__idtr_base 
                                                 + 
                                                 (2U 
                                                  | (0x3fcU 
                                                     & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__exception_inst__DOT__exc_vector_full) 
                                                        << 2U))))
                                                 : 
                                                ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_66)
                                                  ? 
                                                 (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__idtr_base 
                                                  + 
                                                  (0x7f8U 
                                                   & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__exception_inst__DOT__exc_vector_full) 
                                                      << 3U)))
                                                  : 
                                                 ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_88)
                                                   ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__tr_base
                                                   : 
                                                  ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_187)
                                                    ? 
                                                   (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__tr_base 
                                                    + 
                                                    ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__rd_ss_esp_from_tss_386)
                                                      ? 
                                                     ((IData)(8U) 
                                                      + 
                                                      (0x18U 
                                                       & ((IData)(
                                                                  (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor 
                                                                   >> 0x2dU)) 
                                                          << 3U)))
                                                      : 
                                                     ((IData)(4U) 
                                                      + 
                                                      (0xcU 
                                                       & ((IData)(
                                                                  (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor 
                                                                   >> 0x2dU)) 
                                                          << 2U)))))
                                                    : 
                                                   ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_189)
                                                     ? 
                                                    (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__tr_base 
                                                     + 
                                                     ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__rd_ss_esp_from_tss_386)
                                                       ? 
                                                      ((IData)(4U) 
                                                       + 
                                                       (0x18U 
                                                        & ((IData)(
                                                                   (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor 
                                                                    >> 0x2dU)) 
                                                           << 3U)))
                                                       : 
                                                      ((IData)(2U) 
                                                       + 
                                                       (0xcU 
                                                        & ((IData)(
                                                                   (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor 
                                                                    >> 0x2dU)) 
                                                           << 2U)))))
                                                     : 
                                                    ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_227)
                                                      ? 
                                                     ((IData)(4U) 
                                                      + 
                                                      (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__gdtr_base 
                                                       + 
                                                       (0xfff8U 
                                                        & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__tr))))
                                                      : 
                                                     (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_232) 
                                                       & ((0xcU 
                                                           == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)) 
                                                          & (3U 
                                                             >= 
                                                             (0xfU 
                                                              & (IData)(
                                                                        (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor 
                                                                         >> 0x28U))))))
                                                       ? 
                                                      ((IData)(0xcU) 
                                                       + vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_desc_base)
                                                       : 
                                                      (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_232) 
                                                        & ((0xcU 
                                                            == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)) 
                                                           & (3U 
                                                              < 
                                                              (0xfU 
                                                               & (IData)(
                                                                         (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_descriptor 
                                                                          >> 0x28U))))))
                                                        ? 
                                                       ((IData)(0x1cU) 
                                                        + vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_desc_base)
                                                        : 
                                                       (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_232) 
                                                         & ((0xdU 
                                                             == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)) 
                                                            | (0xeU 
                                                               == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex))))
                                                         ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__rd_task_switch_linear_next
                                                         : 
                                                        ((0x65U 
                                                          == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd))
                                                          ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__rd_task_switch_linear_next
                                                          : 
                                                         ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_239)
                                                           ? 
                                                          ((IData)(4U) 
                                                           + vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT____VdfgRegularize_h189848d7_0_0)
                                                           : 0U))))))))))))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_197 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_11) 
           & (5U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_272 
        = ((~ ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
               >> 9U)) & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_11));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_199 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_206) 
           & (5U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_252 
        = ((~ ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
               >> 9U)) & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_206));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__wr_int 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__wr_int_soft_int_ib) 
           | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_160) 
              | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__wr_exception_external_set) 
                 | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_203))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__gdtr_base_to_reg 
        = (((8U != (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)) 
            & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_88))
            ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_130
            : vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__gdtr_base);
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__gdtr_limit_to_reg 
        = (0xffffU & (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_88) 
                       & (8U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)))
                       ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result2
                       : (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__gdtr_limit)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__idtr_base_to_reg 
        = (((8U != (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)) 
            & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_128))
            ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_130
            : vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__idtr_base);
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__idtr_limit_to_reg 
        = (0xffffU & (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_128) 
                       & (8U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)))
                       ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result2
                       : (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__idtr_limit)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__address_stack_for_call_param_first 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__address_stack_pop_for_call) 
           & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_50 = ((~ 
                                                  (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_3 
                                                   >> 0x13U)) 
                                                 & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__address_stack_pop_for_call));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_319 
        = ((~ ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
               >> 0xaU)) & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__address_stack_pop_for_call));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__address_stack_pop_next 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__address_stack_pop_for_call) 
           | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_91) 
              | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__address_stack_add_4_to_saved) 
                 | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__address_stack_for_iret_second) 
                    | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_98) 
                       | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__address_stack_pop_esp_prev) 
                          | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__address_stack_for_ret_first)
                              ? (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__protected_mode)
                              : ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_160)
                                  ? (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__protected_mode)
                                  : (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_161)))))))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_298 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_181) 
           & ((~ ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_mutex) 
                  >> 0xaU)) & ((0U == (3U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_2)) 
                               & (((~ (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_2 
                                       >> 2U)) & (0x4fU 
                                                  == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd))) 
                                  | ((~ (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_2 
                                         >> 3U)) & 
                                     (0x50U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmd)))))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_178 
        = ((IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_320) 
           & (0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_179 
        = ((IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_320) 
           & (1U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rd_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_inhibit_interrupts_and_debug 
        = (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_44) 
            & (IData)(((0x13U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmd)) 
                       & (0x1000U == (0x3800U & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_decoder)))))) 
           | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_76) 
              & (0x10U == (0x38U & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_decoder)))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decode_inst__DOT__decode_ready_inst__DOT____VdfgRegularize_h69455ce0_0_6 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decode_inst__DOT__decoder_count) 
           >= (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__decode_inst__DOT__decode_ready_inst__DOT__one_imm_len));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_rmw_system_dword 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_177) 
           | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_180));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_34 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__rd_io_allow_1_fault) 
           | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_mutex_inst__DOT__rd_mutex_current) 
              >> 0xaU));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_274 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__rd_ss_esp_from_tss_fault)) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_187));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__rd_io_allow_fault 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__rd_io_allow_1_fault) 
           | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__rd_io_allow_2_fault));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT____VdfgRegularize_hba586a9b_0_225 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__rd_io_allow_2_fault)) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__read_inst__DOT__read_commands_inst__DOT__cond_35));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_195 
        = ((IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_194) 
           & (3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_196 
        = ((IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_194) 
           & (4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_197 
        = ((IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_194) 
           & (5U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_198 
        = ((IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_194) 
           & (6U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_199 
        = ((IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_194) 
           & (7U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_189 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_164) 
           & (3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_190 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_164) 
           & (4U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_191 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_164) 
           & (5U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_192 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_164) 
           & (6U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_193 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_164) 
           & (7U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_173 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_164) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__v8086_mode));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__dec_reset 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__exc_dec_reset) 
           | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pr_reset));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__prefetch_control_inst__DOT__cond_4 
        = (((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__prefetch_inst__DOT__linear 
             >> 0xcU) != (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__prefetch_control_inst__DOT__linear 
                          >> 0xcU)) | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pr_reset) 
                                       | (8U <= (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__prefetchfifo_used))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__icache_inst__DOT__cond_9 
        = (1U & ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pr_reset)) 
                 & (~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__icache_inst__DOT__reset_waiting))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__cond_26 
        = ((0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__current_type)) 
           & ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pr_reset)) 
              & (~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__pr_reset_waiting))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlbcoderequest_do 
        = ((0U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__prefetch_control_inst__DOT__state)) 
           & ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pr_reset)) 
              & ((0U < (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__prefetch_length)) 
                 & (3U > (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__prefetchfifo_used)))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__cond_23 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pr_reset) 
           | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__tlb_inst__DOT__pr_reset_waiting));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__idflag_to_reg 
        = (1U & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_119)
                  ? (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_3 
                     >> 0x15U) : ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_87)
                                   ? (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_3 
                                      >> 0x15U) : ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_121)
                                                    ? 
                                                   (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_3 
                                                    >> 0x15U)
                                                    : 
                                                   ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_122)
                                                     ? 
                                                    (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_5 
                                                     >> 0x15U)
                                                     : 
                                                    ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_123)
                                                      ? 
                                                     (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result2 
                                                      >> 0x15U)
                                                      : 
                                                     ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__wr_glob_param_3_set)
                                                       ? 
                                                      (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__task_eflags 
                                                       >> 0x15U)
                                                       : (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__idflag))))))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__acflag_to_reg 
        = (1U & ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_60)) 
                 & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_119)
                     ? (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_3 
                        >> 0x12U) : ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_87)
                                      ? (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_3 
                                         >> 0x12U) : 
                                     ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_121)
                                       ? (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_3 
                                          >> 0x12U)
                                       : ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_122)
                                           ? (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_5 
                                              >> 0x12U)
                                           : ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_123)
                                               ? (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result2 
                                                  >> 0x12U)
                                               : ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__wr_glob_param_3_set)
                                                   ? 
                                                  (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__task_eflags 
                                                   >> 0x12U)
                                                   : (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__acflag)))))))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__rflag_to_reg 
        = (1U & ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_60)) 
                 & ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_62)) 
                    & ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_63)) 
                       & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_119)
                           ? (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_3 
                              >> 0x10U) : ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_87)
                                            ? (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_3 
                                               >> 0x10U)
                                            : ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_121)
                                                ? (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_3 
                                                   >> 0x10U)
                                                : ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_122)
                                                    ? 
                                                   (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__glob_param_5 
                                                    >> 0x10U)
                                                    : 
                                                   ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_123)
                                                     ? 
                                                    (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result2 
                                                     >> 0x10U)
                                                     : 
                                                    ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__wr_glob_param_3_set)
                                                      ? 
                                                     (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__task_eflags 
                                                      >> 0x10U)
                                                      : (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__rflag)))))))))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_register_inst__DOT__ebx_value 
        = (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_is_8bit) 
            & (3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_register_inst__DOT__w_index)))
            ? ((0xffffff00U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ebx) 
               | (0xffU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result))
            : (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_is_8bit) 
                & (7U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_register_inst__DOT__w_index)))
                ? ((0xffff0000U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ebx) 
                   | ((0xff00U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result 
                                  << 8U)) | (0xffU 
                                             & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ebx)))
                : (((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_register_inst__DOT__w_operand_32bit)) 
                    & (3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_register_inst__DOT__w_index)))
                    ? ((0xffff0000U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__ebx) 
                       | (0xffffU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result))
                    : (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_register_inst__DOT__w_operand_32bit) 
                        & (3U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_register_inst__DOT__w_index)))
                        ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result
                        : vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__ebx_to_reg))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_register_inst__DOT__edx_value 
        = (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_is_8bit) 
            & (2U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_register_inst__DOT__w_index)))
            ? ((0xffffff00U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__edx) 
               | (0xffU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result))
            : (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_is_8bit) 
                & (6U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_register_inst__DOT__w_index)))
                ? ((0xffff0000U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__edx) 
                   | ((0xff00U & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result 
                                  << 8U)) | (0xffU 
                                             & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__edx)))
                : (((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_register_inst__DOT__w_operand_32bit)) 
                    & (2U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_register_inst__DOT__w_index)))
                    ? ((0xffff0000U & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__edx) 
                       | (0xffffU & vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result))
                    : (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_register_inst__DOT__w_operand_32bit) 
                        & (2U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_register_inst__DOT__w_index)))
                        ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result
                        : vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__edx_to_reg))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__cr3_to_reg 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_126)
            ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result2
            : ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_127)
                ? ((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_buffer_shifted[0xeU] 
                    << 0x10U) | (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_buffer_shifted[0xdU] 
                                 >> 0x10U)) : vlSelfRef.main_fixed__DOT__ao486_inst__DOT__cr3));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__tlbflushall_do 
        = (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_110) 
            & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_111)) 
           | (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_90) 
               & ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_111) 
                  | (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__cr0_wp) 
                      ^ (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result2 
                         >> 0x10U)) | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__cr0_pg) 
                                       ^ (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__result 
                                          >> 0x1fU))))) 
              | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_126) 
                 | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_127))));
    if (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_230) {
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_system_dword 
            = (3U < (0xfU & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__tr_cache 
                                     >> 0x28U))));
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_system_word 
            = (3U >= (0xfU & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__tr_cache 
                                      >> 0x28U))));
    } else if (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT__cond_231) {
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_system_dword 
            = (3U < (0xfU & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__tr_cache 
                                     >> 0x28U))));
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_system_word 
            = (3U >= (0xfU & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__tr_cache 
                                      >> 0x28U))));
    } else if (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_178) {
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_system_dword 
            = ((3U < (0xfU & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__tr_cache 
                                      >> 0x28U)))) 
               & (7U >= (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)));
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_system_word 
            = ((3U >= (0xfU & (IData)((vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__tr_cache 
                                       >> 0x28U)))) 
               | (7U < (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__wr_cmdex)));
    } else {
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_system_dword = 0U;
        vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_system_word 
            = vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__write_commands_inst__DOT____VdfgRegularize_hcd357836_0_179;
    }
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__exe_condition 
        = (1U & ((0U == (0xfU & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_decoder)))
                  ? (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__oflag)
                  : ((1U == (0xfU & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_decoder)))
                      ? (~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__oflag))
                      : ((2U == (0xfU & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_decoder)))
                          ? (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__cflag)
                          : ((3U == (0xfU & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_decoder)))
                              ? (~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__cflag))
                              : ((4U == (0xfU & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_decoder)))
                                  ? (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__zflag)
                                  : ((5U == (0xfU & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_decoder)))
                                      ? (~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__zflag))
                                      : ((6U == (0xfU 
                                                 & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_decoder)))
                                          ? (IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__exe_condition_inst__DOT____VdfgRegularize_hc2c49180_0_0)
                                          : ((7U == 
                                              (0xfU 
                                               & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_decoder)))
                                              ? (~ (IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__exe_condition_inst__DOT____VdfgRegularize_hc2c49180_0_0))
                                              : ((8U 
                                                  == 
                                                  (0xfU 
                                                   & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_decoder)))
                                                  ? (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__sflag)
                                                  : 
                                                 ((9U 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_decoder)))
                                                   ? 
                                                  (~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__sflag))
                                                   : 
                                                  ((0xaU 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_decoder)))
                                                    ? (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__pflag)
                                                    : 
                                                   ((0xbU 
                                                     == 
                                                     (0xfU 
                                                      & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_decoder)))
                                                     ? 
                                                    (~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__pflag))
                                                     : 
                                                    ((0xcU 
                                                      == 
                                                      (0xfU 
                                                       & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_decoder)))
                                                      ? (IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__exe_condition_inst__DOT____VdfgRegularize_hc2c49180_0_2)
                                                      : 
                                                     ((0xdU 
                                                       == 
                                                       (0xfU 
                                                        & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_decoder)))
                                                       ? 
                                                      (~ (IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__exe_condition_inst__DOT____VdfgRegularize_hc2c49180_0_2))
                                                       : 
                                                      ((0xeU 
                                                        == 
                                                        (0xfU 
                                                         & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_decoder)))
                                                        ? (IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__exe_condition_inst__DOT____VdfgRegularize_hc2c49180_0_1)
                                                        : 
                                                       (~ (IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__exe_condition_inst__DOT____VdfgRegularize_hc2c49180_0_1))))))))))))))))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_offset_inst__DOT____VdfgRegularize_hba806dfa_0_6 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__offset_new_stack) 
           | (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_37) 
               | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_39) 
                  | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_40) 
                     | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_41) 
                        | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_101) 
                           | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_102) 
                              | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_103) 
                                 | ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_104) 
                                    | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_105))))))))) 
              | (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__offset_new_stack_minus)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_321 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_176)) 
           & (0x3cU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_result2 
        = ((0x1fU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd))
            ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_multiply_inst__DOT__mult_inst__DOT__out_1[1U]
            : ((0x20U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd))
                ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__div_result_remainder
                : ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_141)
                    ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__div_result_remainder
                    : ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_145)
                        ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__src
                        : ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_150)
                            ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__src
                            : ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_153)
                                ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__src
                                : ((0x34U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd))
                                    ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst
                                    : ((0x36U == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd))
                                        ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_multiply_inst__DOT__mult_inst__DOT__out_1[1U]
                                        : ((0x3bU == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd))
                                            ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_multiply_inst__DOT__mult_inst__DOT__out_1[1U]
                                            : ((0x48U 
                                                == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd))
                                                ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__src
                                                : ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_190)
                                                    ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst
                                                    : 
                                                   (((0x4dU 
                                                      == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
                                                     & (2U 
                                                        == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)))
                                                     ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__src
                                                     : 
                                                    ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_196)
                                                      ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__src
                                                      : 
                                                     ((0x5aU 
                                                       == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd))
                                                       ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst
                                                       : 
                                                      ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_240)
                                                        ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__src
                                                        : 
                                                       (((0x64U 
                                                          == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
                                                         & (7U 
                                                            >= (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)))
                                                         ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__src
                                                         : 
                                                        (((0x64U 
                                                           == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
                                                          & (7U 
                                                             < (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)))
                                                          ? (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__e_seg_by_cmdex)
                                                          : 
                                                         (((0x66U 
                                                            == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd)) 
                                                           & (0U 
                                                              == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)))
                                                           ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__src
                                                           : 
                                                          (((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_286) 
                                                            & (1U 
                                                               == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmdex)))
                                                            ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__src
                                                            : 
                                                           ((0x6fU 
                                                             == (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__exe_cmd))
                                                             ? vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__dst
                                                             : 0U))))))))))))))))))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__exe_trigger_db_fault 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_286) 
           & (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__dr7 
              >> 0xdU));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT____VdfgRegularize_h7b806023_0_317 
        = ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__execute_inst__DOT__execute_commands_inst__DOT__cond_286) 
           & ((~ (vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__dr7 
                  >> 0xdU)) & (0U < (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__write_inst__DOT__cs_rpl))));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_25 
        = ((IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_31) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_113));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_39 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_113)) 
           & (IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_31));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_72 
        = ((IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_49) 
           & (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_113));
    vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT__cond_91 
        = ((~ (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_113)) 
           & (IData)(main_fixed__DOT__ao486_inst__DOT__pipeline_inst__DOT__microcode_inst__DOT__microcode_commands_inst__DOT____VdfgRegularize_hf9a7d827_0_49));
}
