// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdeccount24.h for the primary calling header

#include "Vdeccount24___024root.h"
#include "Vdeccount24__Syms.h"

//==========

VL_INLINE_OPT void Vdeccount24___024root___sequent__TOP__1(Vdeccount24___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdeccount24__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdeccount24___024root___sequent__TOP__1\n"); );
    // Body
    vlSelf->q = (((IData)(vlSelf->reset) | (IData)(vlSelf->deccount24__DOT__a))
                  ? 0U : (0xfU & ((IData)(1U) + (IData)(vlSelf->q))));
    vlSelf->deccount24__DOT__a = (IData)((0xaU == (0xaU 
                                                   & (IData)(vlSelf->q))));
}

void Vdeccount24___024root___eval(Vdeccount24___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdeccount24__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdeccount24___024root___eval\n"); );
    // Body
    if (((((~ (IData)(vlSelf->clk)) & (IData)(vlSelf->__Vclklast__TOP__clk)) 
          | ((IData)(vlSelf->__VinpClk__TOP__deccount24__DOT__a) 
             & (~ (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__deccount24__DOT__a)))) 
         | ((IData)(vlSelf->reset) & (~ (IData)(vlSelf->__Vclklast__TOP__reset))))) {
        Vdeccount24___024root___sequent__TOP__1(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__deccount24__DOT__a 
        = vlSelf->__VinpClk__TOP__deccount24__DOT__a;
    vlSelf->__Vclklast__TOP__reset = vlSelf->reset;
    vlSelf->__VinpClk__TOP__deccount24__DOT__a = vlSelf->deccount24__DOT__a;
}

QData Vdeccount24___024root___change_request_1(Vdeccount24___024root* vlSelf);

VL_INLINE_OPT QData Vdeccount24___024root___change_request(Vdeccount24___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdeccount24__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdeccount24___024root___change_request\n"); );
    // Body
    return (Vdeccount24___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vdeccount24___024root___change_request_1(Vdeccount24___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdeccount24__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdeccount24___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->deccount24__DOT__a ^ vlSelf->__Vchglast__TOP__deccount24__DOT__a));
    VL_DEBUG_IF( if(__req && ((vlSelf->deccount24__DOT__a ^ vlSelf->__Vchglast__TOP__deccount24__DOT__a))) VL_DBG_MSGF("        CHANGE: deccount24.v:4: deccount24.a\n"); );
    // Final
    vlSelf->__Vchglast__TOP__deccount24__DOT__a = vlSelf->deccount24__DOT__a;
    return __req;
}

#ifdef VL_DEBUG
void Vdeccount24___024root___eval_debug_assertions(Vdeccount24___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdeccount24__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdeccount24___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
