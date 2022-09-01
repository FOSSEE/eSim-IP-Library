// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VPRS8BITGEN__SYMS_H_
#define VERILATED_VPRS8BITGEN__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "Vprs8bitgen.h"

// INCLUDE MODULE CLASSES
#include "Vprs8bitgen___024root.h"

// SYMS CLASS (contains all model state)
class Vprs8bitgen__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vprs8bitgen* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vprs8bitgen___024root          TOP;

    // CONSTRUCTORS
    Vprs8bitgen__Syms(VerilatedContext* contextp, const char* namep, Vprs8bitgen* modelp);
    ~Vprs8bitgen__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
