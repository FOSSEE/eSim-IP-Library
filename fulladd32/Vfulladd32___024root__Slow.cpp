// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfulladd32.h for the primary calling header

#include "Vfulladd32___024root.h"
#include "Vfulladd32__Syms.h"

//==========


void Vfulladd32___024root___ctor_var_reset(Vfulladd32___024root* vlSelf);

Vfulladd32___024root::Vfulladd32___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vfulladd32___024root___ctor_var_reset(this);
}

void Vfulladd32___024root::__Vconfigure(Vfulladd32__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vfulladd32___024root::~Vfulladd32___024root() {
}

void Vfulladd32___024root___eval_initial(Vfulladd32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfulladd32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfulladd32___024root___eval_initial\n"); );
}

void Vfulladd32___024root___combo__TOP__1(Vfulladd32___024root* vlSelf);

void Vfulladd32___024root___eval_settle(Vfulladd32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfulladd32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfulladd32___024root___eval_settle\n"); );
    // Body
    Vfulladd32___024root___combo__TOP__1(vlSelf);
}

void Vfulladd32___024root___final(Vfulladd32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfulladd32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfulladd32___024root___final\n"); );
}

void Vfulladd32___024root___ctor_var_reset(Vfulladd32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfulladd32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfulladd32___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->a = VL_RAND_RESET_I(1);
    vlSelf->b = VL_RAND_RESET_I(1);
    vlSelf->c_in = VL_RAND_RESET_I(1);
    vlSelf->s = VL_RAND_RESET_I(1);
    vlSelf->c_out = VL_RAND_RESET_I(1);
}
