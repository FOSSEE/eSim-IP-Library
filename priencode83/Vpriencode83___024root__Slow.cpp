// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpriencode83.h for the primary calling header

#include "Vpriencode83___024root.h"
#include "Vpriencode83__Syms.h"

//==========


void Vpriencode83___024root___ctor_var_reset(Vpriencode83___024root* vlSelf);

Vpriencode83___024root::Vpriencode83___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vpriencode83___024root___ctor_var_reset(this);
}

void Vpriencode83___024root::__Vconfigure(Vpriencode83__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vpriencode83___024root::~Vpriencode83___024root() {
}

void Vpriencode83___024root___eval_initial(Vpriencode83___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpriencode83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpriencode83___024root___eval_initial\n"); );
}

void Vpriencode83___024root___combo__TOP__1(Vpriencode83___024root* vlSelf);

void Vpriencode83___024root___eval_settle(Vpriencode83___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpriencode83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpriencode83___024root___eval_settle\n"); );
    // Body
    Vpriencode83___024root___combo__TOP__1(vlSelf);
}

void Vpriencode83___024root___final(Vpriencode83___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpriencode83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpriencode83___024root___final\n"); );
}

void Vpriencode83___024root___ctor_var_reset(Vpriencode83___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpriencode83__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpriencode83___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->din = VL_RAND_RESET_I(8);
    vlSelf->dout = VL_RAND_RESET_I(3);
}
