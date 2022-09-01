// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpwm11.h for the primary calling header

#include "Vpwm11___024root.h"
#include "Vpwm11__Syms.h"

//==========

VL_INLINE_OPT void Vpwm11___024root___sequent__TOP__1(Vpwm11___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpwm11__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpwm11___024root___sequent__TOP__1\n"); );
    // Body
    vlSelf->pwm11__DOT__counter = (0xffU & ((IData)(1U) 
                                            + (IData)(vlSelf->pwm11__DOT__counter)));
    vlSelf->led = ((0x50U > (IData)(vlSelf->pwm11__DOT__counter))
                    ? 1U : 0U);
}

void Vpwm11___024root___eval(Vpwm11___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpwm11__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpwm11___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vpwm11___024root___sequent__TOP__1(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vpwm11___024root___change_request_1(Vpwm11___024root* vlSelf);

VL_INLINE_OPT QData Vpwm11___024root___change_request(Vpwm11___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpwm11__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpwm11___024root___change_request\n"); );
    // Body
    return (Vpwm11___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vpwm11___024root___change_request_1(Vpwm11___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpwm11__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpwm11___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vpwm11___024root___eval_debug_assertions(Vpwm11___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vpwm11__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpwm11___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
