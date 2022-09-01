// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VRFASIC43_9__SYMS_H_
#define VERILATED_VRFASIC43_9__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vrfasic43_9.h"

// INCLUDE MODULE CLASSES
#include "Vrfasic43_9___024root.h"

// SYMS CLASS (contains all model state)
class Vrfasic43_9__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vrfasic43_9* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vrfasic43_9___024root          TOP;

    // CONSTRUCTORS
    Vrfasic43_9__Syms(VerilatedContext* contextp, const char* namep, Vrfasic43_9* modelp);
    ~Vrfasic43_9__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
