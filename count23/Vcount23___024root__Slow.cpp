// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcount23.h for the primary calling header

#include "Vcount23___024root.h"
#include "Vcount23__Syms.h"

//==========


void Vcount23___024root___ctor_var_reset(Vcount23___024root* vlSelf);

Vcount23___024root::Vcount23___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vcount23___024root___ctor_var_reset(this);
}

void Vcount23___024root::__Vconfigure(Vcount23__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vcount23___024root::~Vcount23___024root() {
}

void Vcount23___024root___settle__TOP__2(Vcount23___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcount23__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcount23___024root___settle__TOP__2\n"); );
    // Body
    vlSelf->counter = vlSelf->count23__DOT__counter_up;
}

void Vcount23___024root___eval_initial(Vcount23___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcount23__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcount23___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__reset = vlSelf->reset;
}

void Vcount23___024root___eval_settle(Vcount23___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcount23__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcount23___024root___eval_settle\n"); );
    // Body
    Vcount23___024root___settle__TOP__2(vlSelf);
}

void Vcount23___024root___final(Vcount23___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcount23__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcount23___024root___final\n"); );
}

void Vcount23___024root___ctor_var_reset(Vcount23___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcount23__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcount23___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->counter = VL_RAND_RESET_I(3);
    vlSelf->count23__DOT__counter_up = VL_RAND_RESET_I(3);
}
