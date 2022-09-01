// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vjscount24__Syms.h"
#include "Vjscount24.h"
#include "Vjscount24___024root.h"

// FUNCTIONS
Vjscount24__Syms::~Vjscount24__Syms()
{
}

Vjscount24__Syms::Vjscount24__Syms(VerilatedContext* contextp, const char* namep,Vjscount24* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp(modelp)
    // Setup module instances
    , TOP(namep)
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(this, true);
}
