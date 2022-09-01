// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjscount24.h for the primary calling header

#include "Vjscount24___024root.h"
#include "Vjscount24__Syms.h"

//==========


void Vjscount24___024root___ctor_var_reset(Vjscount24___024root* vlSelf);

Vjscount24___024root::Vjscount24___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vjscount24___024root___ctor_var_reset(this);
}

void Vjscount24___024root::__Vconfigure(Vjscount24__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vjscount24___024root::~Vjscount24___024root() {
}

void Vjscount24___024root___settle__TOP__2(Vjscount24___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjscount24__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjscount24___024root___settle__TOP__2\n"); );
    // Body
    vlSelf->out = vlSelf->jscount24__DOT__q;
}

void Vjscount24___024root___eval_initial(Vjscount24___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjscount24__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjscount24___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vjscount24___024root___eval_settle(Vjscount24___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjscount24__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjscount24___024root___eval_settle\n"); );
    // Body
    Vjscount24___024root___settle__TOP__2(vlSelf);
}

void Vjscount24___024root___final(Vjscount24___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjscount24__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjscount24___024root___final\n"); );
}

void Vjscount24___024root___ctor_var_reset(Vjscount24___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjscount24__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjscount24___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->out = VL_RAND_RESET_I(4);
    vlSelf->jscount24__DOT__q = VL_RAND_RESET_I(4);
}
