// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCOUNT24__SYMS_H_
#define VERILATED_VCOUNT24__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vcount24.h"

// INCLUDE MODULE CLASSES
#include "Vcount24___024root.h"

// SYMS CLASS (contains all model state)
class Vcount24__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vcount24* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vcount24___024root             TOP;

    // CONSTRUCTORS
    Vcount24__Syms(VerilatedContext* contextp, const char* namep, Vcount24* modelp);
    ~Vcount24__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
