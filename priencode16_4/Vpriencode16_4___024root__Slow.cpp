// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpriencode16_4.h for the primary calling header

#include "Vpriencode16_4___024root.h"
#include "Vpriencode16_4__Syms.h"

//==========


void Vpriencode16_4___024root___ctor_var_reset(Vpriencode16_4___024root* vlSelf);

Vpriencode16_4___024root::Vpriencode16_4___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vpriencode16_4___024root___ctor_var_reset(this);
}

void Vpriencode16_4___024root::__Vconfigure(Vpriencode16_4__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vpriencode16_4___024root::~Vpriencode16_4___024root() {
}

void Vpriencode16_4___024root___eval_initial(Vpriencode16_4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpriencode16_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpriencode16_4___024root___eval_initial\n"); );
}

void Vpriencode16_4___024root___combo__TOP__1(Vpriencode16_4___024root* vlSelf);

void Vpriencode16_4___024root___eval_settle(Vpriencode16_4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpriencode16_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpriencode16_4___024root___eval_settle\n"); );
    // Body
    Vpriencode16_4___024root___combo__TOP__1(vlSelf);
}

void Vpriencode16_4___024root___final(Vpriencode16_4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpriencode16_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpriencode16_4___024root___final\n"); );
}

void Vpriencode16_4___024root___ctor_var_reset(Vpriencode16_4___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpriencode16_4__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpriencode16_4___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->out = VL_RAND_RESET_I(4);
    vlSelf->i = VL_RAND_RESET_I(16);
}
