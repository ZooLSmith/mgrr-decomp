// src/ui/cUIFade.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CD9290..00CD9290, 1 functions

#include "mgrr.h"
#include "cUIFade.h"

// 00CD9290  cUIFade::vf00  size=59  [class]
undefined4 * __thiscall cUIFade::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if (DAT_01dc1364 != (undefined4 *)0x0) {
    (**(code **)*DAT_01dc1364)(1);
    DAT_01dc1364 = (undefined4 *)0x0;
  }
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

