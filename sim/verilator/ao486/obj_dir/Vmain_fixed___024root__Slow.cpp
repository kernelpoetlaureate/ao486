// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmain_fixed.h for the primary calling header

#include "Vmain_fixed__pch.h"
#include "Vmain_fixed__Syms.h"
#include "Vmain_fixed___024root.h"

void Vmain_fixed___024root___ctor_var_reset(Vmain_fixed___024root* vlSelf);

Vmain_fixed___024root::Vmain_fixed___024root(Vmain_fixed__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vmain_fixed___024root___ctor_var_reset(this);
}

void Vmain_fixed___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vmain_fixed___024root::~Vmain_fixed___024root() {
}
