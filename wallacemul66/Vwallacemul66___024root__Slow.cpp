// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vwallacemul66.h for the primary calling header

#include "Vwallacemul66___024root.h"
#include "Vwallacemul66__Syms.h"

//==========


void Vwallacemul66___024root___ctor_var_reset(Vwallacemul66___024root* vlSelf);

Vwallacemul66___024root::Vwallacemul66___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vwallacemul66___024root___ctor_var_reset(this);
}

void Vwallacemul66___024root::__Vconfigure(Vwallacemul66__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vwallacemul66___024root::~Vwallacemul66___024root() {
}

void Vwallacemul66___024root___eval_initial(Vwallacemul66___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwallacemul66__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwallacemul66___024root___eval_initial\n"); );
}

void Vwallacemul66___024root___combo__TOP__1(Vwallacemul66___024root* vlSelf);

void Vwallacemul66___024root___eval_settle(Vwallacemul66___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwallacemul66__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwallacemul66___024root___eval_settle\n"); );
    // Body
    Vwallacemul66___024root___combo__TOP__1(vlSelf);
}

void Vwallacemul66___024root___final(Vwallacemul66___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwallacemul66__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwallacemul66___024root___final\n"); );
}

void Vwallacemul66___024root___ctor_var_reset(Vwallacemul66___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwallacemul66__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwallacemul66___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->A = VL_RAND_RESET_I(3);
    vlSelf->B = VL_RAND_RESET_I(3);
    vlSelf->prod = VL_RAND_RESET_I(6);
}
