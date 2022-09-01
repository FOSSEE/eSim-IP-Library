// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VFULLSUB32__SYMS_H_
#define VERILATED_VFULLSUB32__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vfullsub32.h"

// INCLUDE MODULE CLASSES
#include "Vfullsub32___024root.h"

// SYMS CLASS (contains all model state)
class Vfullsub32__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vfullsub32* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vfullsub32___024root           TOP;

    // CONSTRUCTORS
    Vfullsub32__Syms(VerilatedContext* contextp, const char* namep, Vfullsub32* modelp);
    ~Vfullsub32__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
