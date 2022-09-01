// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vstaircase14__Syms.h"
#include "Vstaircase14.h"
#include "Vstaircase14___024root.h"

// FUNCTIONS
Vstaircase14__Syms::~Vstaircase14__Syms()
{
}

Vstaircase14__Syms::Vstaircase14__Syms(VerilatedContext* contextp, const char* namep,Vstaircase14* modelp)
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
