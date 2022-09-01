// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Veleasm63.h for the primary calling header

#include "Veleasm63___024root.h"
#include "Veleasm63__Syms.h"

//==========


void Veleasm63___024root___ctor_var_reset(Veleasm63___024root* vlSelf);

Veleasm63___024root::Veleasm63___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Veleasm63___024root___ctor_var_reset(this);
}

void Veleasm63___024root::__Vconfigure(Veleasm63__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Veleasm63___024root::~Veleasm63___024root() {
}

extern const VlUnpacked<CData/*0:0*/, 8> Veleasm63__ConstPool__TABLE_e4d6d9c5_0;
extern const VlUnpacked<CData/*1:0*/, 8> Veleasm63__ConstPool__TABLE_678979d9_0;

void Veleasm63___024root___settle__TOP__2(Veleasm63___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Veleasm63__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Veleasm63___024root___settle__TOP__2\n"); );
    // Variables
    CData/*2:0*/ __Vtableidx2;
    // Body
    if ((((0U == (IData)(vlSelf->eleasm63__DOT__state)) 
          | (1U == (IData)(vlSelf->eleasm63__DOT__state))) 
         | (2U == (IData)(vlSelf->eleasm63__DOT__state)))) {
        vlSelf->dir = 0U;
    } else if ((((3U == (IData)(vlSelf->eleasm63__DOT__state)) 
                 | (4U == (IData)(vlSelf->eleasm63__DOT__state))) 
                | (5U == (IData)(vlSelf->eleasm63__DOT__state)))) {
        vlSelf->dir = 1U;
    }
    __Vtableidx2 = vlSelf->eleasm63__DOT__state;
    if (Veleasm63__ConstPool__TABLE_e4d6d9c5_0[__Vtableidx2]) {
        vlSelf->floor = Veleasm63__ConstPool__TABLE_678979d9_0
            [__Vtableidx2];
    }
}

void Veleasm63___024root___eval_initial(Veleasm63___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Veleasm63__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Veleasm63___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

void Veleasm63___024root___eval_settle(Veleasm63___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Veleasm63__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Veleasm63___024root___eval_settle\n"); );
    // Body
    Veleasm63___024root___settle__TOP__2(vlSelf);
}

void Veleasm63___024root___final(Veleasm63___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Veleasm63__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Veleasm63___024root___final\n"); );
}

void Veleasm63___024root___ctor_var_reset(Veleasm63___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Veleasm63__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Veleasm63___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->ra = VL_RAND_RESET_I(1);
    vlSelf->rb = VL_RAND_RESET_I(1);
    vlSelf->rc = VL_RAND_RESET_I(1);
    vlSelf->rd = VL_RAND_RESET_I(1);
    vlSelf->floor = VL_RAND_RESET_I(2);
    vlSelf->dir = VL_RAND_RESET_I(1);
    vlSelf->eleasm63__DOT__state = VL_RAND_RESET_I(3);
}
