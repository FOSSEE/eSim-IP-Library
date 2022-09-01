// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vbuf1_2.h for the primary calling header

#include "Vbuf1_2___024root.h"
#include "Vbuf1_2__Syms.h"

//==========


void Vbuf1_2___024root___ctor_var_reset(Vbuf1_2___024root* vlSelf);

Vbuf1_2___024root::Vbuf1_2___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vbuf1_2___024root___ctor_var_reset(this);
}

void Vbuf1_2___024root::__Vconfigure(Vbuf1_2__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vbuf1_2___024root::~Vbuf1_2___024root() {
}

void Vbuf1_2___024root___eval_initial(Vbuf1_2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbuf1_2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbuf1_2___024root___eval_initial\n"); );
}

void Vbuf1_2___024root___combo__TOP__1(Vbuf1_2___024root* vlSelf);

void Vbuf1_2___024root___eval_settle(Vbuf1_2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbuf1_2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbuf1_2___024root___eval_settle\n"); );
    // Body
    Vbuf1_2___024root___combo__TOP__1(vlSelf);
}

void Vbuf1_2___024root___final(Vbuf1_2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbuf1_2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbuf1_2___024root___final\n"); );
}

void Vbuf1_2___024root___ctor_var_reset(Vbuf1_2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vbuf1_2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vbuf1_2___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->a = VL_RAND_RESET_I(1);
    vlSelf->y = VL_RAND_RESET_I(1);
    vlSelf->ybar = VL_RAND_RESET_I(1);
}
