// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstaircase14.h for the primary calling header

#include "Vstaircase14___024root.h"
#include "Vstaircase14__Syms.h"

//==========


void Vstaircase14___024root___ctor_var_reset(Vstaircase14___024root* vlSelf);

Vstaircase14___024root::Vstaircase14___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vstaircase14___024root___ctor_var_reset(this);
}

void Vstaircase14___024root::__Vconfigure(Vstaircase14__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vstaircase14___024root::~Vstaircase14___024root() {
}

void Vstaircase14___024root___eval_initial(Vstaircase14___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vstaircase14__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstaircase14___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vstaircase14___024root___eval_settle(Vstaircase14___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vstaircase14__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstaircase14___024root___eval_settle\n"); );
}

void Vstaircase14___024root___final(Vstaircase14___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vstaircase14__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstaircase14___024root___final\n"); );
}

void Vstaircase14___024root___ctor_var_reset(Vstaircase14___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vstaircase14__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstaircase14___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->val = VL_RAND_RESET_I(4);
}
