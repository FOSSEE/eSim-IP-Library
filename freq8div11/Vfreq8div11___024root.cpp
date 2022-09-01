// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfreq8div11.h for the primary calling header

#include "Vfreq8div11___024root.h"
#include "Vfreq8div11__Syms.h"

//==========

VL_INLINE_OPT void Vfreq8div11___024root___sequent__TOP__1(Vfreq8div11___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfreq8div11__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfreq8div11___024root___sequent__TOP__1\n"); );
    // Body
    vlSelf->freq8Div11__DOT__m = (7U & ((IData)(1U) 
                                        + (IData)(vlSelf->freq8Div11__DOT__m)));
    vlSelf->out_clk = (1U & ((IData)(vlSelf->freq8Div11__DOT__m) 
                             >> 2U));
}

void Vfreq8div11___024root___eval(Vfreq8div11___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfreq8div11__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfreq8div11___024root___eval\n"); );
    // Body
    if (((~ (IData)(vlSelf->clk)) & (IData)(vlSelf->__Vclklast__TOP__clk))) {
        Vfreq8div11___024root___sequent__TOP__1(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vfreq8div11___024root___change_request_1(Vfreq8div11___024root* vlSelf);

VL_INLINE_OPT QData Vfreq8div11___024root___change_request(Vfreq8div11___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfreq8div11__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfreq8div11___024root___change_request\n"); );
    // Body
    return (Vfreq8div11___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vfreq8div11___024root___change_request_1(Vfreq8div11___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfreq8div11__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfreq8div11___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vfreq8div11___024root___eval_debug_assertions(Vfreq8div11___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfreq8div11__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfreq8div11___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
