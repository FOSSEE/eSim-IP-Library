// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdaddamul88.h for the primary calling header

#include "Vdaddamul88___024root.h"
#include "Vdaddamul88__Syms.h"

//==========

VL_INLINE_OPT void Vdaddamul88___024root___combo__TOP__1(Vdaddamul88___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdaddamul88__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdaddamul88___024root___combo__TOP__1\n"); );
    // Variables
    CData/*0:0*/ daddamul88__DOT__fle1__DOT__w1;
    CData/*0:0*/ daddamul88__DOT__fle2__DOT__w1;
    CData/*0:0*/ daddamul88__DOT__fg1__DOT__w1;
    CData/*0:0*/ daddamul88__DOT__fg2__DOT__w1;
    CData/*0:0*/ daddamul88__DOT__fg3__DOT__w1;
    CData/*0:0*/ daddamul88__DOT__ff1__DOT__w1;
    CData/*0:0*/ daddamul88__DOT__ff1__DOT__a1;
    CData/*0:0*/ daddamul88__DOT__ff2__DOT__w1;
    CData/*0:0*/ daddamul88__DOT__ff2__DOT__a1;
    CData/*0:0*/ daddamul88__DOT__ff3__DOT__w1;
    // Body
    vlSelf->daddamul88__DOT__gen_pp[0U][0U] = (1U & 
                                               ((1U 
                                                 & (IData)(vlSelf->A)) 
                                                * (1U 
                                                   & (IData)(vlSelf->B))));
    vlSelf->daddamul88__DOT__gen_pp[0U][1U] = (1U & 
                                               ((1U 
                                                 & ((IData)(vlSelf->A) 
                                                    >> 1U)) 
                                                * (1U 
                                                   & (IData)(vlSelf->B))));
    vlSelf->daddamul88__DOT__gen_pp[0U][2U] = (1U & 
                                               ((1U 
                                                 & ((IData)(vlSelf->A) 
                                                    >> 2U)) 
                                                * (1U 
                                                   & (IData)(vlSelf->B))));
    vlSelf->daddamul88__DOT__gen_pp[0U][3U] = (1U & 
                                               ((1U 
                                                 & ((IData)(vlSelf->A) 
                                                    >> 3U)) 
                                                * (1U 
                                                   & (IData)(vlSelf->B))));
    vlSelf->daddamul88__DOT__gen_pp[1U][0U] = (1U & 
                                               ((1U 
                                                 & (IData)(vlSelf->A)) 
                                                * (1U 
                                                   & ((IData)(vlSelf->B) 
                                                      >> 1U))));
    vlSelf->daddamul88__DOT__gen_pp[1U][1U] = (1U & 
                                               ((1U 
                                                 & ((IData)(vlSelf->A) 
                                                    >> 1U)) 
                                                * (1U 
                                                   & ((IData)(vlSelf->B) 
                                                      >> 1U))));
    vlSelf->daddamul88__DOT__gen_pp[1U][2U] = (1U & 
                                               ((1U 
                                                 & ((IData)(vlSelf->A) 
                                                    >> 2U)) 
                                                * (1U 
                                                   & ((IData)(vlSelf->B) 
                                                      >> 1U))));
    vlSelf->daddamul88__DOT__gen_pp[1U][3U] = (1U & 
                                               ((1U 
                                                 & ((IData)(vlSelf->A) 
                                                    >> 3U)) 
                                                * (1U 
                                                   & ((IData)(vlSelf->B) 
                                                      >> 1U))));
    vlSelf->daddamul88__DOT__gen_pp[2U][0U] = (1U & 
                                               ((1U 
                                                 & (IData)(vlSelf->A)) 
                                                * (1U 
                                                   & ((IData)(vlSelf->B) 
                                                      >> 2U))));
    vlSelf->daddamul88__DOT__gen_pp[2U][1U] = (1U & 
                                               ((1U 
                                                 & ((IData)(vlSelf->A) 
                                                    >> 1U)) 
                                                * (1U 
                                                   & ((IData)(vlSelf->B) 
                                                      >> 2U))));
    vlSelf->daddamul88__DOT__gen_pp[2U][2U] = (1U & 
                                               ((1U 
                                                 & ((IData)(vlSelf->A) 
                                                    >> 2U)) 
                                                * (1U 
                                                   & ((IData)(vlSelf->B) 
                                                      >> 2U))));
    vlSelf->daddamul88__DOT__gen_pp[2U][3U] = (1U & 
                                               ((1U 
                                                 & ((IData)(vlSelf->A) 
                                                    >> 3U)) 
                                                * (1U 
                                                   & ((IData)(vlSelf->B) 
                                                      >> 2U))));
    vlSelf->daddamul88__DOT__gen_pp[3U][0U] = (1U & 
                                               ((1U 
                                                 & (IData)(vlSelf->A)) 
                                                * (1U 
                                                   & ((IData)(vlSelf->B) 
                                                      >> 3U))));
    vlSelf->daddamul88__DOT__gen_pp[3U][1U] = (1U & 
                                               ((1U 
                                                 & ((IData)(vlSelf->A) 
                                                    >> 1U)) 
                                                * (1U 
                                                   & ((IData)(vlSelf->B) 
                                                      >> 3U))));
    vlSelf->daddamul88__DOT__gen_pp[3U][2U] = (1U & 
                                               ((1U 
                                                 & ((IData)(vlSelf->A) 
                                                    >> 2U)) 
                                                * (1U 
                                                   & ((IData)(vlSelf->B) 
                                                      >> 3U))));
    vlSelf->daddamul88__DOT__gen_pp[3U][3U] = (1U & 
                                               ((1U 
                                                 & ((IData)(vlSelf->A) 
                                                    >> 3U)) 
                                                * (1U 
                                                   & ((IData)(vlSelf->B) 
                                                      >> 3U))));
    vlSelf->Y = ((0xfeU & (IData)(vlSelf->Y)) | vlSelf->daddamul88__DOT__gen_pp
                 [0U][0U]);
    vlSelf->Y = ((0xfdU & (IData)(vlSelf->Y)) | ((vlSelf->daddamul88__DOT__gen_pp
                                                  [0U]
                                                  [1U] 
                                                  ^ 
                                                  vlSelf->daddamul88__DOT__gen_pp
                                                  [1U]
                                                  [0U]) 
                                                 << 1U));
    vlSelf->daddamul88__DOT__sum[3U] = (vlSelf->daddamul88__DOT__gen_pp
                                        [3U][1U] ^ 
                                        vlSelf->daddamul88__DOT__gen_pp
                                        [2U][2U]);
    vlSelf->daddamul88__DOT__hcar[0U] = (vlSelf->daddamul88__DOT__gen_pp
                                         [0U][1U] & 
                                         vlSelf->daddamul88__DOT__gen_pp
                                         [1U][0U]);
    vlSelf->daddamul88__DOT__hcar[3U] = (vlSelf->daddamul88__DOT__gen_pp
                                         [3U][1U] & 
                                         vlSelf->daddamul88__DOT__gen_pp
                                         [2U][2U]);
    daddamul88__DOT__fle1__DOT__w1 = (vlSelf->daddamul88__DOT__gen_pp
                                      [1U][1U] ^ vlSelf->daddamul88__DOT__gen_pp
                                      [2U][0U]);
    daddamul88__DOT__fle2__DOT__w1 = (vlSelf->daddamul88__DOT__gen_pp
                                      [2U][1U] ^ vlSelf->daddamul88__DOT__gen_pp
                                      [3U][0U]);
    vlSelf->daddamul88__DOT__sum[1U] = ((IData)(daddamul88__DOT__fle1__DOT__w1) 
                                        ^ vlSelf->daddamul88__DOT__gen_pp
                                        [0U][2U]);
    vlSelf->daddamul88__DOT__hcar[1U] = (((IData)(daddamul88__DOT__fle1__DOT__w1) 
                                          & vlSelf->daddamul88__DOT__gen_pp
                                          [0U][2U]) 
                                         | (vlSelf->daddamul88__DOT__gen_pp
                                            [1U][1U] 
                                            & vlSelf->daddamul88__DOT__gen_pp
                                            [2U][0U]));
    vlSelf->daddamul88__DOT__sum[2U] = ((IData)(daddamul88__DOT__fle2__DOT__w1) 
                                        ^ vlSelf->daddamul88__DOT__gen_pp
                                        [1U][2U]);
    vlSelf->daddamul88__DOT__hcar[2U] = (((IData)(daddamul88__DOT__fle2__DOT__w1) 
                                          & vlSelf->daddamul88__DOT__gen_pp
                                          [1U][2U]) 
                                         | (vlSelf->daddamul88__DOT__gen_pp
                                            [2U][1U] 
                                            & vlSelf->daddamul88__DOT__gen_pp
                                            [3U][0U]));
    daddamul88__DOT__fg1__DOT__w1 = (vlSelf->daddamul88__DOT__sum
                                     [2U] ^ vlSelf->daddamul88__DOT__gen_pp
                                     [0U][3U]);
    vlSelf->Y = ((0xfbU & (IData)(vlSelf->Y)) | ((vlSelf->daddamul88__DOT__sum
                                                  [1U] 
                                                  ^ 
                                                  vlSelf->daddamul88__DOT__hcar
                                                  [0U]) 
                                                 << 2U));
    vlSelf->daddamul88__DOT__caar[0U] = (vlSelf->daddamul88__DOT__sum
                                         [1U] & vlSelf->daddamul88__DOT__hcar
                                         [0U]);
    daddamul88__DOT__fg3__DOT__w1 = (vlSelf->daddamul88__DOT__hcar
                                     [3U] ^ vlSelf->daddamul88__DOT__gen_pp
                                     [3U][2U]);
    daddamul88__DOT__fg2__DOT__w1 = (vlSelf->daddamul88__DOT__hcar
                                     [2U] ^ vlSelf->daddamul88__DOT__sum
                                     [3U]);
    vlSelf->daddamul88__DOT__smm[0U] = ((IData)(daddamul88__DOT__fg1__DOT__w1) 
                                        ^ vlSelf->daddamul88__DOT__hcar
                                        [1U]);
    vlSelf->daddamul88__DOT__caar[1U] = (((IData)(daddamul88__DOT__fg1__DOT__w1) 
                                          & vlSelf->daddamul88__DOT__hcar
                                          [1U]) | (
                                                   vlSelf->daddamul88__DOT__sum
                                                   [2U] 
                                                   & vlSelf->daddamul88__DOT__gen_pp
                                                   [0U]
                                                   [3U]));
    vlSelf->daddamul88__DOT__smm[2U] = ((IData)(daddamul88__DOT__fg3__DOT__w1) 
                                        ^ vlSelf->daddamul88__DOT__gen_pp
                                        [2U][3U]);
    vlSelf->daddamul88__DOT__caar[3U] = (((IData)(daddamul88__DOT__fg3__DOT__w1) 
                                          & vlSelf->daddamul88__DOT__gen_pp
                                          [2U][3U]) 
                                         | (vlSelf->daddamul88__DOT__hcar
                                            [3U] & 
                                            vlSelf->daddamul88__DOT__gen_pp
                                            [3U][2U]));
    vlSelf->daddamul88__DOT__smm[1U] = ((IData)(daddamul88__DOT__fg2__DOT__w1) 
                                        ^ vlSelf->daddamul88__DOT__gen_pp
                                        [1U][3U]);
    vlSelf->daddamul88__DOT__caar[2U] = (((IData)(daddamul88__DOT__fg2__DOT__w1) 
                                          & vlSelf->daddamul88__DOT__gen_pp
                                          [1U][3U]) 
                                         | (vlSelf->daddamul88__DOT__hcar
                                            [2U] & 
                                            vlSelf->daddamul88__DOT__sum
                                            [3U]));
    vlSelf->Y = ((0xf7U & (IData)(vlSelf->Y)) | ((vlSelf->daddamul88__DOT__caar
                                                  [0U] 
                                                  ^ 
                                                  vlSelf->daddamul88__DOT__smm
                                                  [0U]) 
                                                 << 3U));
    daddamul88__DOT__ff3__DOT__w1 = (vlSelf->daddamul88__DOT__caar
                                     [3U] ^ vlSelf->daddamul88__DOT__gen_pp
                                     [3U][3U]);
    daddamul88__DOT__ff1__DOT__w1 = (vlSelf->daddamul88__DOT__caar
                                     [1U] ^ vlSelf->daddamul88__DOT__smm
                                     [1U]);
    daddamul88__DOT__ff2__DOT__w1 = (vlSelf->daddamul88__DOT__caar
                                     [2U] ^ vlSelf->daddamul88__DOT__smm
                                     [2U]);
    vlSelf->daddamul88__DOT__crr[0U] = (vlSelf->daddamul88__DOT__caar
                                        [0U] & vlSelf->daddamul88__DOT__smm
                                        [0U]);
    daddamul88__DOT__ff1__DOT__a1 = ((IData)(daddamul88__DOT__ff1__DOT__w1) 
                                     & vlSelf->daddamul88__DOT__crr
                                     [0U]);
    daddamul88__DOT__ff2__DOT__a1 = ((IData)(daddamul88__DOT__ff2__DOT__w1) 
                                     & vlSelf->daddamul88__DOT__crr
                                     [1U]);
    vlSelf->Y = ((0xcfU & (IData)(vlSelf->Y)) | ((((IData)(daddamul88__DOT__ff2__DOT__w1) 
                                                   ^ 
                                                   vlSelf->daddamul88__DOT__crr
                                                   [1U]) 
                                                  << 5U) 
                                                 | (((IData)(daddamul88__DOT__ff1__DOT__w1) 
                                                     ^ 
                                                     vlSelf->daddamul88__DOT__crr
                                                     [0U]) 
                                                    << 4U)));
    vlSelf->Y = ((0x3fU & (IData)(vlSelf->Y)) | (((
                                                   ((IData)(daddamul88__DOT__ff3__DOT__w1) 
                                                    & vlSelf->daddamul88__DOT__crr
                                                    [2U]) 
                                                   | (vlSelf->daddamul88__DOT__caar
                                                      [3U] 
                                                      & vlSelf->daddamul88__DOT__gen_pp
                                                      [3U]
                                                      [3U])) 
                                                  << 7U) 
                                                 | (((IData)(daddamul88__DOT__ff3__DOT__w1) 
                                                     ^ 
                                                     vlSelf->daddamul88__DOT__crr
                                                     [2U]) 
                                                    << 6U)));
    vlSelf->daddamul88__DOT__crr[1U] = ((IData)(daddamul88__DOT__ff1__DOT__a1) 
                                        | (vlSelf->daddamul88__DOT__caar
                                           [1U] & vlSelf->daddamul88__DOT__smm
                                           [1U]));
    vlSelf->daddamul88__DOT__crr[2U] = ((IData)(daddamul88__DOT__ff2__DOT__a1) 
                                        | (vlSelf->daddamul88__DOT__caar
                                           [2U] & vlSelf->daddamul88__DOT__smm
                                           [2U]));
}

void Vdaddamul88___024root___eval(Vdaddamul88___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdaddamul88__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdaddamul88___024root___eval\n"); );
    // Body
    Vdaddamul88___024root___combo__TOP__1(vlSelf);
}

QData Vdaddamul88___024root___change_request_1(Vdaddamul88___024root* vlSelf);

VL_INLINE_OPT QData Vdaddamul88___024root___change_request(Vdaddamul88___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdaddamul88__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdaddamul88___024root___change_request\n"); );
    // Body
    return (Vdaddamul88___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vdaddamul88___024root___change_request_1(Vdaddamul88___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdaddamul88__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdaddamul88___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->daddamul88__DOT__crr[0U] ^ vlSelf->__Vchglast__TOP__daddamul88__DOT__crr
               [0U])
         | (vlSelf->daddamul88__DOT__crr[1U] ^ vlSelf->__Vchglast__TOP__daddamul88__DOT__crr
            [1U])
         | (vlSelf->daddamul88__DOT__crr[2U] ^ vlSelf->__Vchglast__TOP__daddamul88__DOT__crr
            [2U]));
    VL_DEBUG_IF( if(__req && ((vlSelf->daddamul88__DOT__crr
                               [0U] ^ vlSelf->__Vchglast__TOP__daddamul88__DOT__crr
                               [0U]))) VL_DBG_MSGF("        CHANGE: daddamul88.v:10\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->daddamul88__DOT__crr
                               [1U] ^ vlSelf->__Vchglast__TOP__daddamul88__DOT__crr
                               [1U]))) VL_DBG_MSGF("        CHANGE: daddamul88.v:10\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->daddamul88__DOT__crr
                               [2U] ^ vlSelf->__Vchglast__TOP__daddamul88__DOT__crr
                               [2U]))) VL_DBG_MSGF("        CHANGE: daddamul88.v:10\n"); );
    // Final
    vlSelf->__Vchglast__TOP__daddamul88__DOT__crr[0U] 
        = vlSelf->daddamul88__DOT__crr[0U];
    vlSelf->__Vchglast__TOP__daddamul88__DOT__crr[1U] 
        = vlSelf->daddamul88__DOT__crr[1U];
    vlSelf->__Vchglast__TOP__daddamul88__DOT__crr[2U] 
        = vlSelf->daddamul88__DOT__crr[2U];
    return __req;
}

#ifdef VL_DEBUG
void Vdaddamul88___024root___eval_debug_assertions(Vdaddamul88___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vdaddamul88__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdaddamul88___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->A & 0xf0U))) {
        Verilated::overWidthError("A");}
    if (VL_UNLIKELY((vlSelf->B & 0xf0U))) {
        Verilated::overWidthError("B");}
}
#endif  // VL_DEBUG
