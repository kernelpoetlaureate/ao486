// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmain_fixed__Syms.h"


void Vmain_fixed___024root__trace_chg_0_sub_1(Vmain_fixed___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain_fixed__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_fixed___024root__trace_chg_0_sub_1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 3454);
    // Body
    bufp->chgCData(oldp+0,(((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__resp_writeburst_done)
                             ? (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__resp_writeburst_dword_length)
                             : ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__resp_writeline_done)
                                 ? 4U : ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__avalon_mem_inst__DOT____VdfgRegularize_hda04a1ba_0_11)
                                          ? (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__resp_readburst_dword_length)
                                          : ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__avalon_mem_inst__DOT____VdfgRegularize_hda04a1ba_0_12)
                                              ? 4U : 
                                             ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__avalon_mem_inst__DOT____VdfgRegularize_hda04a1ba_0_20)
                                               ? 4U
                                               : (IData)(vlSelfRef.avm_burstcount))))))),3);
    bufp->chgIData(oldp+1,(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_to_icache_fifo_inst__DOT__dcache_to_icache_fifo_inst__DOT__mem
                           [vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_to_icache_fifo_inst__DOT__dcache_to_icache_fifo_inst__DOT__rd_index]),28);
}

void Vmain_fixed___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_fixed___024root__trace_cleanup\n"); );
    // Init
    Vmain_fixed___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmain_fixed___024root*>(voidSelf);
    Vmain_fixed__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
