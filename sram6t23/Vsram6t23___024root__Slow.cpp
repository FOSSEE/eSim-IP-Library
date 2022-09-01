// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsram6t23.h for the primary calling header

#include "Vsram6t23___024root.h"
#include "Vsram6t23__Syms.h"

//==========


void Vsram6t23___024root___ctor_var_reset(Vsram6t23___024root* vlSelf);

Vsram6t23___024root::Vsram6t23___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vsram6t23___024root___ctor_var_reset(this);
}

void Vsram6t23___024root::__Vconfigure(Vsram6t23__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vsram6t23___024root::~Vsram6t23___024root() {
}

void Vsram6t23___024root___eval_initial(Vsram6t23___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsram6t23__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsram6t23___024root___eval_initial\n"); );
}

void Vsram6t23___024root___combo__TOP__1(Vsram6t23___024root* vlSelf);

void Vsram6t23___024root___eval_settle(Vsram6t23___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsram6t23__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsram6t23___024root___eval_settle\n"); );
    // Body
    Vsram6t23___024root___combo__TOP__1(vlSelf);
}

void Vsram6t23___024root___final(Vsram6t23___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsram6t23__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsram6t23___024root___final\n"); );
}

void Vsram6t23___024root___ctor_var_reset(Vsram6t23___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsram6t23__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsram6t23___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->din = VL_RAND_RESET_I(1);
    vlSelf->wen = VL_RAND_RESET_I(1);
    vlSelf->q = VL_RAND_RESET_I(1);
}
