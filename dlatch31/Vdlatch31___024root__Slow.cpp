// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdlatch31.h for the primary calling header

#include "Vdlatch31___024root.h"
#include "Vdlatch31__Syms.h"

//==========


void Vdlatch31___024root___ctor_var_reset(Vdlatch31___024root* vlSelf);

Vdlatch31___024root::Vdlatch31___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vdlatch31___024root___ctor_var_reset(this);
}

void Vdlatch31___024root::__Vconfigure(Vdlatch31__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vdlatch31___024root::~Vdlatch31___024root() {
}

void Vdlatch31___024root___eval_initial(Vdlatch31___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdlatch31__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdlatch31___024root___eval_initial\n"); );
}

void Vdlatch31___024root___combo__TOP__1(Vdlatch31___024root* vlSelf);

void Vdlatch31___024root___eval_settle(Vdlatch31___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdlatch31__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdlatch31___024root___eval_settle\n"); );
    // Body
    Vdlatch31___024root___combo__TOP__1(vlSelf);
}

void Vdlatch31___024root___final(Vdlatch31___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdlatch31__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdlatch31___024root___final\n"); );
}

void Vdlatch31___024root___ctor_var_reset(Vdlatch31___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdlatch31__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdlatch31___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->d = VL_RAND_RESET_I(1);
    vlSelf->en = VL_RAND_RESET_I(1);
    vlSelf->rstn = VL_RAND_RESET_I(1);
    vlSelf->q = VL_RAND_RESET_I(1);
}
