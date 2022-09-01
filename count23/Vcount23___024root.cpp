// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcount23.h for the primary calling header

#include "Vcount23___024root.h"
#include "Vcount23__Syms.h"

//==========

VL_INLINE_OPT void Vcount23___024root___sequent__TOP__1(Vcount23___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcount23__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcount23___024root___sequent__TOP__1\n"); );
    // Body
    vlSelf->count23__DOT__counter_up = ((IData)(vlSelf->reset)
                                         ? 0U : (7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->count23__DOT__counter_up))));
    vlSelf->counter = vlSelf->count23__DOT__counter_up;
}

void Vcount23___024root___eval(Vcount23___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcount23__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcount23___024root___eval\n"); );
    // Body
    if ((((~ (IData)(vlSelf->clk)) & (IData)(vlSelf->__Vclklast__TOP__clk)) 
         | ((IData)(vlSelf->reset) & (~ (IData)(vlSelf->__Vclklast__TOP__reset))))) {
        Vcount23___024root___sequent__TOP__1(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__reset = vlSelf->reset;
}

QData Vcount23___024root___change_request_1(Vcount23___024root* vlSelf);

VL_INLINE_OPT QData Vcount23___024root___change_request(Vcount23___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcount23__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcount23___024root___change_request\n"); );
    // Body
    return (Vcount23___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vcount23___024root___change_request_1(Vcount23___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcount23__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcount23___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vcount23___024root___eval_debug_assertions(Vcount23___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcount23__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcount23___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
