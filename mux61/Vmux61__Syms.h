// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VMUX61__SYMS_H_
#define VERILATED_VMUX61__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vmux61.h"

// INCLUDE MODULE CLASSES
#include "Vmux61___024root.h"

// SYMS CLASS (contains all model state)
class Vmux61__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vmux61* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vmux61___024root               TOP;

    // CONSTRUCTORS
    Vmux61__Syms(VerilatedContext* contextp, const char* namep, Vmux61* modelp);
    ~Vmux61__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
