// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclaadd95.h for the primary calling header

#include "Vclaadd95___024root.h"
#include "Vclaadd95__Syms.h"

//==========


void Vclaadd95___024root___ctor_var_reset(Vclaadd95___024root* vlSelf);

Vclaadd95___024root::Vclaadd95___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vclaadd95___024root___ctor_var_reset(this);
}

void Vclaadd95___024root::__Vconfigure(Vclaadd95__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vclaadd95___024root::~Vclaadd95___024root() {
}

void Vclaadd95___024root___eval_initial(Vclaadd95___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclaadd95__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclaadd95___024root___eval_initial\n"); );
}

void Vclaadd95___024root___combo__TOP__1(Vclaadd95___024root* vlSelf);

void Vclaadd95___024root___eval_settle(Vclaadd95___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclaadd95__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclaadd95___024root___eval_settle\n"); );
    // Body
    Vclaadd95___024root___combo__TOP__1(vlSelf);
}

void Vclaadd95___024root___final(Vclaadd95___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclaadd95__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclaadd95___024root___final\n"); );
}

void Vclaadd95___024root___ctor_var_reset(Vclaadd95___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclaadd95__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclaadd95___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->sum = VL_RAND_RESET_I(4);
    vlSelf->c_out = VL_RAND_RESET_I(1);
    vlSelf->a = VL_RAND_RESET_I(4);
    vlSelf->b = VL_RAND_RESET_I(4);
    vlSelf->c_in = VL_RAND_RESET_I(1);
}
