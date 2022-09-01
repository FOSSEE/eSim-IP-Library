// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfullsub32.h for the primary calling header

#include "Vfullsub32___024root.h"
#include "Vfullsub32__Syms.h"

//==========


void Vfullsub32___024root___ctor_var_reset(Vfullsub32___024root* vlSelf);

Vfullsub32___024root::Vfullsub32___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vfullsub32___024root___ctor_var_reset(this);
}

void Vfullsub32___024root::__Vconfigure(Vfullsub32__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vfullsub32___024root::~Vfullsub32___024root() {
}

void Vfullsub32___024root___eval_initial(Vfullsub32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfullsub32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfullsub32___024root___eval_initial\n"); );
}

void Vfullsub32___024root___combo__TOP__1(Vfullsub32___024root* vlSelf);

void Vfullsub32___024root___eval_settle(Vfullsub32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfullsub32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfullsub32___024root___eval_settle\n"); );
    // Body
    Vfullsub32___024root___combo__TOP__1(vlSelf);
}

void Vfullsub32___024root___final(Vfullsub32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfullsub32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfullsub32___024root___final\n"); );
}

void Vfullsub32___024root___ctor_var_reset(Vfullsub32___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfullsub32__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfullsub32___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->D = VL_RAND_RESET_I(1);
    vlSelf->B = VL_RAND_RESET_I(1);
    vlSelf->X = VL_RAND_RESET_I(1);
    vlSelf->Y = VL_RAND_RESET_I(1);
    vlSelf->Z = VL_RAND_RESET_I(1);
}
