// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjkff32.h for the primary calling header

#include "Vjkff32___024root.h"
#include "Vjkff32__Syms.h"

//==========


void Vjkff32___024root___ctor_var_reset(Vjkff32___024root* vlSelf);

Vjkff32___024root::Vjkff32___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vjkff32___024root___ctor_var_reset(this);
}

void Vjkff32___024root::__Vconfigure(Vjkff32__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vjkff32___024root::~Vjkff32___024root() {
}

void Vjkff32___024root___initial__TOP__2(Vjkff32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjkff32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjkff32___024root___initial__TOP__2\n"); );
    // Body
    vlSelf->q = 0U;
    vlSelf->qb = 1U;
}

void Vjkff32___024root___eval_initial(Vjkff32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjkff32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjkff32___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    Vjkff32___024root___initial__TOP__2(vlSelf);
}

void Vjkff32___024root___eval_settle(Vjkff32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjkff32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjkff32___024root___eval_settle\n"); );
}

void Vjkff32___024root___final(Vjkff32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjkff32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjkff32___024root___final\n"); );
}

void Vjkff32___024root___ctor_var_reset(Vjkff32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjkff32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjkff32___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->j = VL_RAND_RESET_I(1);
    vlSelf->k = VL_RAND_RESET_I(1);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->q = VL_RAND_RESET_I(1);
    vlSelf->qb = VL_RAND_RESET_I(1);
}
