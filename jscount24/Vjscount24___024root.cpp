// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjscount24.h for the primary calling header

#include "Vjscount24___024root.h"
#include "Vjscount24__Syms.h"

//==========

VL_INLINE_OPT void Vjscount24___024root___sequent__TOP__1(Vjscount24___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjscount24__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjscount24___024root___sequent__TOP__1\n"); );
    // Body
    vlSelf->jscount24__DOT__q = ((IData)(vlSelf->reset)
                                  ? 0U : ((0xeU & ((IData)(vlSelf->jscount24__DOT__q) 
                                                   << 1U)) 
                                          | (1U & (~ 
                                                   ((IData)(vlSelf->jscount24__DOT__q) 
                                                    >> 3U)))));
    vlSelf->out = vlSelf->jscount24__DOT__q;
}

void Vjscount24___024root___eval(Vjscount24___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjscount24__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjscount24___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vjscount24___024root___sequent__TOP__1(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vjscount24___024root___change_request_1(Vjscount24___024root* vlSelf);

VL_INLINE_OPT QData Vjscount24___024root___change_request(Vjscount24___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjscount24__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjscount24___024root___change_request\n"); );
    // Body
    return (Vjscount24___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vjscount24___024root___change_request_1(Vjscount24___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjscount24__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjscount24___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vjscount24___024root___eval_debug_assertions(Vjscount24___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vjscount24__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjscount24___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
