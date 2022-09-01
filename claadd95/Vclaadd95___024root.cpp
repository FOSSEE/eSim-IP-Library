// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclaadd95.h for the primary calling header

#include "Vclaadd95___024root.h"
#include "Vclaadd95__Syms.h"

//==========

VL_INLINE_OPT void Vclaadd95___024root___combo__TOP__1(Vclaadd95___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclaadd95__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclaadd95___024root___combo__TOP__1\n"); );
    // Variables
    CData/*0:0*/ claadd95__DOT__p0;
    CData/*0:0*/ claadd95__DOT__g0;
    CData/*0:0*/ claadd95__DOT__p1;
    CData/*0:0*/ claadd95__DOT__g1;
    CData/*0:0*/ claadd95__DOT__p2;
    CData/*0:0*/ claadd95__DOT__g2;
    CData/*0:0*/ claadd95__DOT__p3;
    // Body
    claadd95__DOT__p3 = (1U & (((IData)(vlSelf->a) 
                                ^ (IData)(vlSelf->b)) 
                               >> 3U));
    claadd95__DOT__g2 = (1U & (((IData)(vlSelf->a) 
                                & (IData)(vlSelf->b)) 
                               >> 2U));
    claadd95__DOT__p0 = (1U & ((IData)(vlSelf->a) ^ (IData)(vlSelf->b)));
    claadd95__DOT__p1 = (1U & (((IData)(vlSelf->a) 
                                ^ (IData)(vlSelf->b)) 
                               >> 1U));
    claadd95__DOT__p2 = (1U & (((IData)(vlSelf->a) 
                                ^ (IData)(vlSelf->b)) 
                               >> 2U));
    claadd95__DOT__g0 = (1U & ((IData)(vlSelf->a) & (IData)(vlSelf->b)));
    claadd95__DOT__g1 = (1U & (((IData)(vlSelf->a) 
                                & (IData)(vlSelf->b)) 
                               >> 1U));
    vlSelf->sum = ((8U & (IData)(vlSelf->sum)) | ((
                                                   ((IData)(claadd95__DOT__p2) 
                                                    ^ 
                                                    (((IData)(claadd95__DOT__g1) 
                                                      | ((IData)(claadd95__DOT__p1) 
                                                         & (IData)(claadd95__DOT__g0))) 
                                                     | (((IData)(claadd95__DOT__p1) 
                                                         & (IData)(claadd95__DOT__p0)) 
                                                        & (IData)(vlSelf->c_in)))) 
                                                   << 2U) 
                                                  | ((((IData)(claadd95__DOT__p1) 
                                                       ^ 
                                                       ((IData)(claadd95__DOT__g0) 
                                                        | ((IData)(claadd95__DOT__p0) 
                                                           & (IData)(vlSelf->c_in)))) 
                                                      << 1U) 
                                                     | ((IData)(claadd95__DOT__p0) 
                                                        ^ (IData)(vlSelf->c_in)))));
    vlSelf->sum = ((7U & (IData)(vlSelf->sum)) | (((IData)(claadd95__DOT__p3) 
                                                   ^ 
                                                   ((((IData)(claadd95__DOT__g2) 
                                                      | ((IData)(claadd95__DOT__p2) 
                                                         & (IData)(claadd95__DOT__g1))) 
                                                     | (((IData)(claadd95__DOT__p2) 
                                                         & (IData)(claadd95__DOT__p1)) 
                                                        & (IData)(claadd95__DOT__g0))) 
                                                    | ((((IData)(claadd95__DOT__p2) 
                                                         & (IData)(claadd95__DOT__p1)) 
                                                        & (IData)(claadd95__DOT__p0)) 
                                                       & (IData)(vlSelf->c_in)))) 
                                                  << 3U));
    vlSelf->c_out = (1U & (((((((IData)(vlSelf->a) 
                                & (IData)(vlSelf->b)) 
                               >> 3U) | ((IData)(claadd95__DOT__p3) 
                                         & (IData)(claadd95__DOT__g2))) 
                             | (((IData)(claadd95__DOT__p3) 
                                 & (IData)(claadd95__DOT__p2)) 
                                & (IData)(claadd95__DOT__g1))) 
                            | ((((IData)(claadd95__DOT__p3) 
                                 & (IData)(claadd95__DOT__p2)) 
                                & (IData)(claadd95__DOT__p1)) 
                               & (IData)(claadd95__DOT__g0))) 
                           | (((((IData)(claadd95__DOT__p3) 
                                 & (IData)(claadd95__DOT__p2)) 
                                & (IData)(claadd95__DOT__p1)) 
                               & (IData)(claadd95__DOT__p0)) 
                              & (IData)(vlSelf->c_in))));
}

void Vclaadd95___024root___eval(Vclaadd95___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclaadd95__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclaadd95___024root___eval\n"); );
    // Body
    Vclaadd95___024root___combo__TOP__1(vlSelf);
}

QData Vclaadd95___024root___change_request_1(Vclaadd95___024root* vlSelf);

VL_INLINE_OPT QData Vclaadd95___024root___change_request(Vclaadd95___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclaadd95__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclaadd95___024root___change_request\n"); );
    // Body
    return (Vclaadd95___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vclaadd95___024root___change_request_1(Vclaadd95___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclaadd95__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclaadd95___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vclaadd95___024root___eval_debug_assertions(Vclaadd95___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclaadd95__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclaadd95___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->a & 0xf0U))) {
        Verilated::overWidthError("a");}
    if (VL_UNLIKELY((vlSelf->b & 0xf0U))) {
        Verilated::overWidthError("b");}
    if (VL_UNLIKELY((vlSelf->c_in & 0xfeU))) {
        Verilated::overWidthError("c_in");}
}
#endif  // VL_DEBUG
