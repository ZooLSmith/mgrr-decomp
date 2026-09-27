// lib/msvc/stl/unit_00FDB1D4.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00FDB1D4..00FDB1EF, 2 functions

#include "mgrr.h"

// 00FDB1D4  std::_Mutex::_Mutex_ctor  size=27  [run]
/* Library Function - Single Match
    private: static void __cdecl std::_Mutex::_Mutex_ctor(class std::_Mutex *)
   
   Library: Visual Studio */

void __cdecl std::_Mutex::_Mutex_ctor(_Mutex *param_1)

{
  _Rmtx *p_Var1;
  
  p_Var1 = (_Rmtx *)FUN_00dd34e0(0x18);
  *(_Rmtx **)param_1 = p_Var1;
  __Mtxinit(p_Var1);
  return;
}

// 00FDB1EF  std::_Mutex::_Mutex_dtor  size=28  [run]
/* Library Function - Single Match
    private: static void __cdecl std::_Mutex::_Mutex_dtor(class std::_Mutex *)
   
   Library: Visual Studio */

void __cdecl std::_Mutex::_Mutex_dtor(_Mutex *param_1)

{
  __Mtxdst(*(_Rmtx **)param_1);
  FUN_00dd4920(*(undefined4 *)param_1);
  return;
}

