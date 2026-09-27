// src/misc/SplineLerp.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ECD950..00ECD950, 1 functions

#include "types.h"

// 00ECD950  SplineLerp<Hw::cVec4>::vf00  size=31  [class]
undefined4 * __thiscall SplineLerp<Hw::cVec4>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Spline<Hw::cVec4>::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

