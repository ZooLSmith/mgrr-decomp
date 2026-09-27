// src/misc/SplineLoop.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009E7FC0..009E7FC0, 1 functions

#include "mgrr.h"

// 009E7FC0  SplineLoop<float>::vf00  size=31  [class]
undefined4 * __thiscall SplineLoop<float>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Spline<float>::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

