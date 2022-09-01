// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux21.h for the primary calling header

#include "Vmux21___024root.h"
#include "Vmux21__Syms.h"

//==========


void Vmux21___024root___ctor_var_reset(Vmux21___024root* vlSelf);

Vmux21___024root::Vmux21___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vmux21___024root___ctor_var_reset(this);
}

void Vmux21___024root::__Vconfigure(Vmux21__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vmux21___024root::~Vmux21___024root() {
}

void Vmux21___024root___eval_initial(Vmux21___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux21__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux21___024root___eval_initial\n"); );
}

void Vmux21___024root___combo__TOP__1(Vmux21___024root* vlSelf);

void Vmux21___024root___eval_settle(Vmux21___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux21__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux21___024root___eval_settle\n"); );
    // Body
    Vmux21___024root___combo__TOP__1(vlSelf);
}

void Vmux21___024root___final(Vmux21___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux21__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux21___024root___final\n"); );
}

void Vmux21___024root___ctor_var_reset(Vmux21___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux21__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux21___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->i0 = VL_RAND_RESET_I(1);
    vlSelf->i1 = VL_RAND_RESET_I(1);
    vlSelf->sel = VL_RAND_RESET_I(1);
    vlSelf->y = VL_RAND_RESET_I(1);
}
