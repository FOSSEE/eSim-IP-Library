// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCLAADD95__SYMS_H_
#define VERILATED_VCLAADD95__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vclaadd95.h"

// INCLUDE MODULE CLASSES
#include "Vclaadd95___024root.h"

// SYMS CLASS (contains all model state)
class Vclaadd95__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vclaadd95* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vclaadd95___024root            TOP;

    // CONSTRUCTORS
    Vclaadd95__Syms(VerilatedContext* contextp, const char* namep, Vclaadd95* modelp);
    ~Vclaadd95__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
