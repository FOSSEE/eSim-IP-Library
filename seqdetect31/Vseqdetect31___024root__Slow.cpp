// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vseqdetect31.h for the primary calling header

#include "Vseqdetect31___024root.h"
#include "Vseqdetect31__Syms.h"

//==========


void Vseqdetect31___024root___ctor_var_reset(Vseqdetect31___024root* vlSelf);

Vseqdetect31___024root::Vseqdetect31___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vseqdetect31___024root___ctor_var_reset(this);
}

void Vseqdetect31___024root::__Vconfigure(Vseqdetect31__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vseqdetect31___024root::~Vseqdetect31___024root() {
}

void Vseqdetect31___024root___eval_initial(Vseqdetect31___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vseqdetect31__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vseqdetect31___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__CLK = vlSelf->CLK;
    vlSelf->__Vclklast__TOP__RST = vlSelf->RST;
}

void Vseqdetect31___024root___eval_settle(Vseqdetect31___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vseqdetect31__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vseqdetect31___024root___eval_settle\n"); );
}

void Vseqdetect31___024root___final(Vseqdetect31___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vseqdetect31__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vseqdetect31___024root___final\n"); );
}

void Vseqdetect31___024root___ctor_var_reset(Vseqdetect31___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vseqdetect31__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vseqdetect31___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->I = VL_RAND_RESET_I(1);
    vlSelf->CLK = VL_RAND_RESET_I(1);
    vlSelf->RST = VL_RAND_RESET_I(1);
    vlSelf->Z = VL_RAND_RESET_I(1);
    vlSelf->seqdetect31__DOT__state = VL_RAND_RESET_I(5);
}
