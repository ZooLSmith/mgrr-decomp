// lib/msvc/stl/unit_00E138B0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00E138B0..00E138B0, 1 functions

#include "types.h"

// 00E138B0  std::ios_base::vf00  size=40  [run]
ios_base * __thiscall std::ios_base::vf00(ios_base *param_1,byte param_2)

{
  *(undefined ***)param_1 = vftable;
  _Ios_base_dtor(param_1);
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

