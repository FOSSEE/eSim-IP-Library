// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcount24.h for the primary calling header

#include "Vcount24___024root.h"
#include "Vcount24__Syms.h"

//==========

VL_INLINE_OPT void Vcount24___024root___sequent__TOP__1(Vcount24___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcount24__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcount24___024root___sequent__TOP__1\n"); );
    // Body
    vlSelf->count = ((IData)(vlSelf->rst) ? 0U : (0xfU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->count))));
}

void Vcount24___024root___eval(Vcount24___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcount24__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcount24___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vcount24___024root___sequent__TOP__1(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

QData Vcount24___024root___change_request_1(Vcount24___024root* vlSelf);

VL_INLINE_OPT QData Vcount24___024root___change_request(Vcount24___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcount24__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcount24___024root___change_request\n"); );
    // Body
    return (Vcount24___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vcount24___024root___change_request_1(Vcount24___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcount24__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcount24___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vcount24___024root___eval_debug_assertions(Vcount24___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcount24__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcount24___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
