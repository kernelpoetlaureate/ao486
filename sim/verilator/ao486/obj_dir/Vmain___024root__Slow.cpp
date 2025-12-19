// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmain.h for the primary calling header

#include "Vmain__pch.h"
#include "Vmain__Syms.h"
#include "Vmain___024root.h"

void Vmain___024root___ctor_var_reset(Vmain___024root* vlSelf);

Vmain___024root::Vmain___024root(Vmain__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vmain___024root___ctor_var_reset(this);
}

void Vmain___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vmain___024root::~Vmain___024root() {
}
