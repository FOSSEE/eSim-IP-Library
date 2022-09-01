// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdeccount24.h for the primary calling header

#include "Vdeccount24___024root.h"
#include "Vdeccount24__Syms.h"

//==========


void Vdeccount24___024root___ctor_var_reset(Vdeccount24___024root* vlSelf);

Vdeccount24___024root::Vdeccount24___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vdeccount24___024root___ctor_var_reset(this);
}

void Vdeccount24___024root::__Vconfigure(Vdeccount24__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vdeccount24___024root::~Vdeccount24___024root() {
}

void Vdeccount24___024root___settle__TOP__2(Vdeccount24___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdeccount24__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdeccount24___024root___settle__TOP__2\n"); );
    // Body
    vlSelf->deccount24__DOT__a = (IData)((0xaU == (0xaU 
                                                   & (IData)(vlSelf->q))));
}

void Vdeccount24___024root___eval_initial(Vdeccount24___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdeccount24__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdeccount24___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__deccount24__DOT__a 
        = vlSelf->__VinpClk__TOP__deccount24__DOT__a;
    vlSelf->__Vclklast__TOP__reset = vlSelf->reset;
}

void Vdeccount24___024root___eval_settle(Vdeccount24___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdeccount24__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdeccount24___024root___eval_settle\n"); );
    // Body
    Vdeccount24___024root___settle__TOP__2(vlSelf);
}

void Vdeccount24___024root___final(Vdeccount24___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdeccount24__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdeccount24___024root___final\n"); );
}

void Vdeccount24___024root___ctor_var_reset(Vdeccount24___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdeccount24__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdeccount24___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->q = VL_RAND_RESET_I(4);
    vlSelf->deccount24__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__deccount24__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__deccount24__DOT__a = VL_RAND_RESET_I(1);
}
