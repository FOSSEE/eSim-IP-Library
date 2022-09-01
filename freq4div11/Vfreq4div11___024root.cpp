// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfreq4div11.h for the primary calling header

#include "Vfreq4div11___024root.h"
#include "Vfreq4div11__Syms.h"

//==========

VL_INLINE_OPT void Vfreq4div11___024root___sequent__TOP__1(Vfreq4div11___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfreq4div11__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfreq4div11___024root___sequent__TOP__1\n"); );
    // Body
    vlSelf->freq4div11__DOT__TFF1__DOT__state = (1U 
                                                 & (~ (IData)(vlSelf->freq4div11__DOT__TFF1__DOT__state)));
    vlSelf->freq4div11__DOT__C1 = (1U & (~ (IData)(vlSelf->freq4div11__DOT__TFF1__DOT__state)));
}

VL_INLINE_OPT void Vfreq4div11___024root___sequent__TOP__3(Vfreq4div11___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfreq4div11__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfreq4div11___024root___sequent__TOP__3\n"); );
    // Body
    vlSelf->freq4div11__DOT__TFF2__DOT__state = (1U 
                                                 & (~ (IData)(vlSelf->freq4div11__DOT__TFF2__DOT__state)));
    vlSelf->COUNT = (1U & (~ (IData)(vlSelf->freq4div11__DOT__TFF2__DOT__state)));
}

void Vfreq4div11___024root___eval(Vfreq4div11___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfreq4div11__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfreq4div11___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->CLK) & (~ (IData)(vlSelf->__Vclklast__TOP__CLK)))) {
        Vfreq4div11___024root___sequent__TOP__1(vlSelf);
    }
    if (((IData)(vlSelf->freq4div11__DOT__C1) & (~ (IData)(vlSelf->__Vclklast__TOP__freq4div11__DOT__C1)))) {
        Vfreq4div11___024root___sequent__TOP__3(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__CLK = vlSelf->CLK;
    vlSelf->__Vclklast__TOP__freq4div11__DOT__C1 = vlSelf->freq4div11__DOT__C1;
}

QData Vfreq4div11___024root___change_request_1(Vfreq4div11___024root* vlSelf);

VL_INLINE_OPT QData Vfreq4div11___024root___change_request(Vfreq4div11___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfreq4div11__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfreq4div11___024root___change_request\n"); );
    // Body
    return (Vfreq4div11___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vfreq4div11___024root___change_request_1(Vfreq4div11___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfreq4div11__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfreq4div11___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vfreq4div11___024root___eval_debug_assertions(Vfreq4div11___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfreq4div11__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfreq4div11___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->CLK & 0xfeU))) {
        Verilated::overWidthError("CLK");}
}
#endif  // VL_DEBUG
