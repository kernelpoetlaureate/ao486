// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmain_fixed__Syms.h"


VL_ATTR_COLD void Vmain_fixed___024root__trace_full_0_sub_1(Vmain_fixed___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vmain_fixed__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmain_fixed___024root__trace_full_0_sub_1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+3454,(((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__resp_writeburst_done)
                                 ? (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__resp_writeburst_dword_length)
                                 : ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__resp_writeline_done)
                                     ? 4U : ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__avalon_mem_inst__DOT____VdfgRegularize_hda04a1ba_0_11)
                                              ? (IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__resp_readburst_dword_length)
                                              : ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__avalon_mem_inst__DOT____VdfgRegularize_hda04a1ba_0_12)
                                                  ? 4U
                                                  : 
                                                 ((IData)(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__avalon_mem_inst__DOT____VdfgRegularize_hda04a1ba_0_20)
                                                   ? 4U
                                                   : (IData)(vlSelfRef.avm_burstcount))))))),3);
    bufp->fullIData(oldp+3455,(vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_to_icache_fifo_inst__DOT__dcache_to_icache_fifo_inst__DOT__mem
                               [vlSelfRef.main_fixed__DOT__ao486_inst__DOT__memory_inst__DOT__dcache_to_icache_fifo_inst__DOT__dcache_to_icache_fifo_inst__DOT__rd_index]),28);
}
