// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VDECCOUNT24__SYMS_H_
#define VERILATED_VDECCOUNT24__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vdeccount24.h"

// INCLUDE MODULE CLASSES
#include "Vdeccount24___024root.h"

// SYMS CLASS (contains all model state)
class Vdeccount24__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vdeccount24* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vdeccount24___024root          TOP;

    // CONSTRUCTORS
    Vdeccount24__Syms(VerilatedContext* contextp, const char* namep, Vdeccount24* modelp);
    ~Vdeccount24__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
