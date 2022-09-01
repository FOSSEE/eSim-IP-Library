// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcount24.h for the primary calling header

#include "Vcount24___024root.h"
#include "Vcount24__Syms.h"

//==========


void Vcount24___024root___ctor_var_reset(Vcount24___024root* vlSelf);

Vcount24___024root::Vcount24___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vcount24___024root___ctor_var_reset(this);
}

void Vcount24___024root::__Vconfigure(Vcount24__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vcount24___024root::~Vcount24___024root() {
}

void Vcount24___024root___eval_initial(Vcount24___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcount24__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcount24___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

void Vcount24___024root___eval_settle(Vcount24___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcount24__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcount24___024root___eval_settle\n"); );
}

void Vcount24___024root___final(Vcount24___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcount24__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcount24___024root___final\n"); );
}

void Vcount24___024root___ctor_var_reset(Vcount24___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcount24__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcount24___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->count = VL_RAND_RESET_I(4);
}
