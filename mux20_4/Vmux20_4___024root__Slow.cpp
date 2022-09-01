// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmux20_4.h for the primary calling header

#include "Vmux20_4___024root.h"
#include "Vmux20_4__Syms.h"

//==========


void Vmux20_4___024root___ctor_var_reset(Vmux20_4___024root* vlSelf);

Vmux20_4___024root::Vmux20_4___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vmux20_4___024root___ctor_var_reset(this);
}

void Vmux20_4___024root::__Vconfigure(Vmux20_4__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vmux20_4___024root::~Vmux20_4___024root() {
}

void Vmux20_4___024root___eval_initial(Vmux20_4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux20_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux20_4___024root___eval_initial\n"); );
}

void Vmux20_4___024root___combo__TOP__1(Vmux20_4___024root* vlSelf);

void Vmux20_4___024root___eval_settle(Vmux20_4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux20_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux20_4___024root___eval_settle\n"); );
    // Body
    Vmux20_4___024root___combo__TOP__1(vlSelf);
}

void Vmux20_4___024root___final(Vmux20_4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux20_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux20_4___024root___final\n"); );
}

void Vmux20_4___024root___ctor_var_reset(Vmux20_4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmux20_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmux20_4___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->in = VL_RAND_RESET_I(16);
    vlSelf->s = VL_RAND_RESET_I(4);
    vlSelf->out = VL_RAND_RESET_I(1);
}
