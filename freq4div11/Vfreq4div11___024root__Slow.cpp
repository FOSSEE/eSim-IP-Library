// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfreq4div11.h for the primary calling header

#include "Vfreq4div11___024root.h"
#include "Vfreq4div11__Syms.h"

//==========


void Vfreq4div11___024root___ctor_var_reset(Vfreq4div11___024root* vlSelf);

Vfreq4div11___024root::Vfreq4div11___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vfreq4div11___024root___ctor_var_reset(this);
}

void Vfreq4div11___024root::__Vconfigure(Vfreq4div11__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vfreq4div11___024root::~Vfreq4div11___024root() {
}

void Vfreq4div11___024root___settle__TOP__2(Vfreq4div11___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfreq4div11__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfreq4div11___024root___settle__TOP__2\n"); );
    // Body
    vlSelf->freq4div11__DOT__C1 = (1U & (~ (IData)(vlSelf->freq4div11__DOT__TFF1__DOT__state)));
    vlSelf->COUNT = (1U & (~ (IData)(vlSelf->freq4div11__DOT__TFF2__DOT__state)));
}

void Vfreq4div11___024root___eval_initial(Vfreq4div11___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfreq4div11__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfreq4div11___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__CLK = vlSelf->CLK;
    vlSelf->__Vclklast__TOP__freq4div11__DOT__C1 = vlSelf->freq4div11__DOT__C1;
}

void Vfreq4div11___024root___eval_settle(Vfreq4div11___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfreq4div11__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfreq4div11___024root___eval_settle\n"); );
    // Body
    Vfreq4div11___024root___settle__TOP__2(vlSelf);
}

void Vfreq4div11___024root___final(Vfreq4div11___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfreq4div11__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfreq4div11___024root___final\n"); );
}

void Vfreq4div11___024root___ctor_var_reset(Vfreq4div11___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfreq4div11__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfreq4div11___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->CLK = VL_RAND_RESET_I(1);
    vlSelf->COUNT = VL_RAND_RESET_I(1);
    vlSelf->freq4div11__DOT__C1 = VL_RAND_RESET_I(1);
    vlSelf->freq4div11__DOT__TFF1__DOT__state = VL_RAND_RESET_I(1);
    vlSelf->freq4div11__DOT__TFF2__DOT__state = VL_RAND_RESET_I(1);
}
