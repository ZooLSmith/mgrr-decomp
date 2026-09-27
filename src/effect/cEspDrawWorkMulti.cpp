// src/effect/cEspDrawWorkMulti.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F3FA20..00F3FA20, 1 functions

#include "types.h"

// 00F3FA20  cEspDrawWorkMulti::vf00  size=31  [class]
undefined4 * __thiscall cEspDrawWorkMulti::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Hw::cOtWork::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

