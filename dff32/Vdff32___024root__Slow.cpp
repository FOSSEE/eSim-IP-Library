// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdff32.h for the primary calling header

#include "Vdff32___024root.h"
#include "Vdff32__Syms.h"

//==========


void Vdff32___024root___ctor_var_reset(Vdff32___024root* vlSelf);

Vdff32___024root::Vdff32___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vdff32___024root___ctor_var_reset(this);
}

void Vdff32___024root::__Vconfigure(Vdff32__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vdff32___024root::~Vdff32___024root() {
}

void Vdff32___024root___eval_initial(Vdff32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdff32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdff32___024root___eval_initial\n"); );
}

void Vdff32___024root___combo__TOP__1(Vdff32___024root* vlSelf);

void Vdff32___024root___eval_settle(Vdff32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdff32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdff32___024root___eval_settle\n"); );
    // Body
    Vdff32___024root___combo__TOP__1(vlSelf);
}

void Vdff32___024root___final(Vdff32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdff32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdff32___024root___final\n"); );
}

void Vdff32___024root___ctor_var_reset(Vdff32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdff32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdff32___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->Q = VL_RAND_RESET_I(1);
    vlSelf->Qbar = VL_RAND_RESET_I(1);
    vlSelf->D = VL_RAND_RESET_I(1);
    vlSelf->Clk = VL_RAND_RESET_I(1);
    vlSelf->Reset = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__Q = VL_RAND_RESET_I(1);
}
