// lib/msvc/stl/unit_00FDB191.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00FDB191..00FDB191, 1 functions

#include "types.h"

// 00FDB191  std::_Mutex::_Mutex  size=26  [run]
/* Library Function - Single Match
    public: __thiscall std::_Mutex::_Mutex(void)
   
   Library: Visual Studio */

_Mutex * __thiscall std::_Mutex::_Mutex(_Mutex *this)

{
  _Rmtx *p_Var1;
  
  p_Var1 = (_Rmtx *)FUN_00dd34e0(0x18);
  *(_Rmtx **)this = p_Var1;
  __Mtxinit(p_Var1);
  return this;
}

