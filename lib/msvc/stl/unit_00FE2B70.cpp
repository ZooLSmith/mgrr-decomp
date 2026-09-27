// lib/msvc/stl/unit_00FE2B70.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00FE2B70..00FE2B99, 2 functions

#include "mgrr.h"

// 00FE2B70  std::bad_exception::bad_exception_2  size=30  [run]
exception * __fastcall std::bad_exception::bad_exception_2(exception *param_1)

{
  exception::exception(param_1,(char **)&stack0x00000004);
  *(undefined ***)param_1 = vftable;
  return param_1;
}

// 00FE2B99  std::bad_exception::vf00  size=39  [run]
undefined4 * __thiscall std::bad_exception::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  exception::exception_2();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

