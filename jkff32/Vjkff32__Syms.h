// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VJKFF32__SYMS_H_
#define VERILATED_VJKFF32__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vjkff32.h"

// INCLUDE MODULE CLASSES
#include "Vjkff32___024root.h"

// SYMS CLASS (contains all model state)
class Vjkff32__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vjkff32* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vjkff32___024root              TOP;

    // CONSTRUCTORS
    Vjkff32__Syms(VerilatedContext* contextp, const char* namep, Vjkff32* modelp);
    ~Vjkff32__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
