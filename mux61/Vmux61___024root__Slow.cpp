// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux61.h for the primary calling header

#include "Vmux61___024root.h"
#include "Vmux61__Syms.h"

//==========


void Vmux61___024root___ctor_var_reset(Vmux61___024root* vlSelf);

Vmux61___024root::Vmux61___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vmux61___024root___ctor_var_reset(this);
}

void Vmux61___024root::__Vconfigure(Vmux61__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vmux61___024root::~Vmux61___024root() {
}

void Vmux61___024root___eval_initial(Vmux61___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux61__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux61___024root___eval_initial\n"); );
}

void Vmux61___024root___combo__TOP__1(Vmux61___024root* vlSelf);

void Vmux61___024root___eval_settle(Vmux61___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux61__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux61___024root___eval_settle\n"); );
    // Body
    Vmux61___024root___combo__TOP__1(vlSelf);
}

void Vmux61___024root___final(Vmux61___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux61__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux61___024root___final\n"); );
}

void Vmux61___024root___ctor_var_reset(Vmux61___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux61__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux61___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->a = VL_RAND_RESET_I(1);
    vlSelf->b = VL_RAND_RESET_I(1);
    vlSelf->c = VL_RAND_RESET_I(1);
    vlSelf->d = VL_RAND_RESET_I(1);
    vlSelf->s0 = VL_RAND_RESET_I(1);
    vlSelf->s1 = VL_RAND_RESET_I(1);
    vlSelf->out = VL_RAND_RESET_I(1);
}
