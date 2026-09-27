// src/graphics/cLightDataMinimum.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A40810..00A40820, 2 functions

#include "types.h"

// 00A40810  cLightDataMinimum::vf00  size=6  [class]
undefined ** cLightDataMinimum::vf00(void)

{
  return &PTR_s_cLightDataMinimum_0189f69c;
}

// 00A40820  cLightDataMinimum::vf04  size=30  [class]
undefined4 __thiscall cLightDataMinimum::vf04(undefined4 param_1,byte param_2)

{
  cObject::cObject_2();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

