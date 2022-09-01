// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vwallacemul66.h for the primary calling header

#include "Vwallacemul66___024root.h"
#include "Vwallacemul66__Syms.h"

//==========

VL_INLINE_OPT void Vwallacemul66___024root___combo__TOP__1(Vwallacemul66___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwallacemul66__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwallacemul66___024root___combo__TOP__1\n"); );
    // Variables
    CData/*0:0*/ wallacemul66__DOT__s13;
    CData/*0:0*/ wallacemul66__DOT__c11;
    CData/*0:0*/ wallacemul66__DOT__c12;
    CData/*0:0*/ wallacemul66__DOT__c13;
    CData/*0:0*/ wallacemul66__DOT__c22;
    CData/*0:0*/ wallacemul66__DOT__c32;
    CData/*2:0*/ wallacemul66__DOT__p0;
    CData/*2:0*/ wallacemul66__DOT__p1;
    CData/*2:0*/ wallacemul66__DOT__p2;
    CData/*0:0*/ wallacemul66__DOT__fa12__DOT__ha1_sum;
    CData/*0:0*/ wallacemul66__DOT__fa12__DOT__ha2_sum;
    CData/*0:0*/ wallacemul66__DOT__fa23__DOT__ha1_sum;
    CData/*0:0*/ wallacemul66__DOT__fa24__DOT__ha1_sum;
    // Body
    wallacemul66__DOT__p2 = ((IData)(vlSelf->A) & (- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->B) 
                                                                 >> 2U)))));
    wallacemul66__DOT__p0 = ((IData)(vlSelf->A) & (- (IData)(
                                                             (1U 
                                                              & (IData)(vlSelf->B)))));
    wallacemul66__DOT__p1 = ((IData)(vlSelf->A) & (- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->B) 
                                                                 >> 1U)))));
    wallacemul66__DOT__c11 = (1U & (((IData)(wallacemul66__DOT__p0) 
                                     >> 1U) & (IData)(wallacemul66__DOT__p1)));
    wallacemul66__DOT__fa12__DOT__ha1_sum = (1U & (
                                                   ((IData)(wallacemul66__DOT__p0) 
                                                    >> 2U) 
                                                   ^ 
                                                   ((IData)(wallacemul66__DOT__p1) 
                                                    >> 1U)));
    wallacemul66__DOT__c12 = (1U & ((((IData)(wallacemul66__DOT__p0) 
                                      >> 2U) & ((IData)(wallacemul66__DOT__p1) 
                                                >> 1U)) 
                                    | ((IData)(wallacemul66__DOT__c11) 
                                       & (IData)(wallacemul66__DOT__fa12__DOT__ha1_sum))));
    wallacemul66__DOT__fa12__DOT__ha2_sum = ((IData)(wallacemul66__DOT__c11) 
                                             ^ (IData)(wallacemul66__DOT__fa12__DOT__ha1_sum));
    wallacemul66__DOT__c13 = (((IData)(wallacemul66__DOT__p1) 
                               >> 2U) & (IData)(wallacemul66__DOT__c12));
    wallacemul66__DOT__s13 = (1U & (((IData)(wallacemul66__DOT__p1) 
                                     >> 2U) ^ (IData)(wallacemul66__DOT__c12)));
    vlSelf->prod = ((0x38U & (IData)(vlSelf->prod)) 
                    | ((4U & (((IData)(wallacemul66__DOT__p2) 
                               ^ (IData)(wallacemul66__DOT__fa12__DOT__ha2_sum)) 
                              << 2U)) | ((2U & ((0xfffffffeU 
                                                 & (IData)(wallacemul66__DOT__p0)) 
                                                ^ ((IData)(wallacemul66__DOT__p1) 
                                                   << 1U))) 
                                         | (1U & (IData)(wallacemul66__DOT__p0)))));
    wallacemul66__DOT__c22 = ((IData)(wallacemul66__DOT__p2) 
                              & (IData)(wallacemul66__DOT__fa12__DOT__ha2_sum));
    wallacemul66__DOT__fa24__DOT__ha1_sum = (1U & (
                                                   ((IData)(wallacemul66__DOT__p2) 
                                                    >> 2U) 
                                                   ^ (IData)(wallacemul66__DOT__c13)));
    wallacemul66__DOT__fa23__DOT__ha1_sum = (1U & (
                                                   ((IData)(wallacemul66__DOT__p2) 
                                                    >> 1U) 
                                                   ^ (IData)(wallacemul66__DOT__c22)));
    wallacemul66__DOT__c32 = ((((IData)(wallacemul66__DOT__p2) 
                                >> 1U) & (IData)(wallacemul66__DOT__c22)) 
                              | ((IData)(wallacemul66__DOT__s13) 
                                 & (IData)(wallacemul66__DOT__fa23__DOT__ha1_sum)));
    vlSelf->prod = ((7U & (IData)(vlSelf->prod)) | 
                    (((0xffffffe0U & (((IData)(wallacemul66__DOT__p2) 
                                       << 3U) & ((IData)(wallacemul66__DOT__c13) 
                                                 << 5U))) 
                      | (((IData)(wallacemul66__DOT__c32) 
                          & (IData)(wallacemul66__DOT__fa24__DOT__ha1_sum)) 
                         << 5U)) | ((((IData)(wallacemul66__DOT__c32) 
                                      ^ (IData)(wallacemul66__DOT__fa24__DOT__ha1_sum)) 
                                     << 4U) | (((IData)(wallacemul66__DOT__s13) 
                                                ^ (IData)(wallacemul66__DOT__fa23__DOT__ha1_sum)) 
                                               << 3U))));
}

void Vwallacemul66___024root___eval(Vwallacemul66___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwallacemul66__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwallacemul66___024root___eval\n"); );
    // Body
    Vwallacemul66___024root___combo__TOP__1(vlSelf);
}

QData Vwallacemul66___024root___change_request_1(Vwallacemul66___024root* vlSelf);

VL_INLINE_OPT QData Vwallacemul66___024root___change_request(Vwallacemul66___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwallacemul66__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwallacemul66___024root___change_request\n"); );
    // Body
    return (Vwallacemul66___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vwallacemul66___024root___change_request_1(Vwallacemul66___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwallacemul66__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwallacemul66___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vwallacemul66___024root___eval_debug_assertions(Vwallacemul66___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vwallacemul66__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vwallacemul66___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->A & 0xf8U))) {
        Verilated::overWidthError("A");}
    if (VL_UNLIKELY((vlSelf->B & 0xf8U))) {
        Verilated::overWidthError("B");}
}
#endif  // VL_DEBUG
