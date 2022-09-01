// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfreq8div11.h for the primary calling header

#include "Vfreq8div11___024root.h"
#include "Vfreq8div11__Syms.h"

//==========


void Vfreq8div11___024root___ctor_var_reset(Vfreq8div11___024root* vlSelf);

Vfreq8div11___024root::Vfreq8div11___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vfreq8div11___024root___ctor_var_reset(this);
}

void Vfreq8div11___024root::__Vconfigure(Vfreq8div11__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vfreq8div11___024root::~Vfreq8div11___024root() {
}

void Vfreq8div11___024root___initial__TOP__2(Vfreq8div11___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfreq8div11__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfreq8div11___024root___initial__TOP__2\n"); );
    // Body
    vlSelf->freq8Div11__DOT__m = 0U;
}

void Vfreq8div11___024root___settle__TOP__3(Vfreq8div11___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfreq8div11__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfreq8div11___024root___settle__TOP__3\n"); );
    // Body
    vlSelf->out_clk = (1U & ((IData)(vlSelf->freq8Div11__DOT__m) 
                             >> 2U));
}

void Vfreq8div11___024root___eval_initial(Vfreq8div11___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfreq8div11__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfreq8div11___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    Vfreq8div11___024root___initial__TOP__2(vlSelf);
}

void Vfreq8div11___024root___eval_settle(Vfreq8div11___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfreq8div11__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfreq8div11___024root___eval_settle\n"); );
    // Body
    Vfreq8div11___024root___settle__TOP__3(vlSelf);
}

void Vfreq8div11___024root___final(Vfreq8div11___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfreq8div11__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfreq8div11___024root___final\n"); );
}

void Vfreq8div11___024root___ctor_var_reset(Vfreq8div11___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfreq8div11__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfreq8div11___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->out_clk = VL_RAND_RESET_I(1);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->freq8Div11__DOT__m = VL_RAND_RESET_I(3);
}
