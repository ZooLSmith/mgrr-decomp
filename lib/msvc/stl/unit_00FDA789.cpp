// lib/msvc/stl/unit_00FDA789.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00FDA789..00FDA789, 1 functions

#include "mgrr.h"

// 00FDA789  std::_Init_locks::_Init_locks  size=49  [run]
/* Library Function - Single Match
    public: __thiscall std::_Init_locks::_Init_locks(void)
   
   Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release */

_Init_locks * __thiscall std::_Init_locks::_Init_locks(_Init_locks *this)

{
  LONG LVar1;
  _Rmtx *p_Var2;
  
  LVar1 = InterlockedIncrement((LONG *)&DAT_018e85b8);
  if (LVar1 == 0) {
    p_Var2 = (_Rmtx *)&DAT_01f8ed38;
    do {
      __Mtxinit(p_Var2);
      p_Var2 = p_Var2 + 1;
    } while ((int)p_Var2 < 0x1f8ed98);
  }
  return this;
}

