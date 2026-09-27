// src/managers/triggermanager/cActSubTrgAddFunc.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C94EC0..00C94ED0, 2 functions

#include "mgrr.h"

// 00C94EC0  Trigger::cActSubTrgAddFunc::vf00  size=6  [class]
undefined * Trigger::cActSubTrgAddFunc::vf00(void)

{
  return &DAT_01dbe2f4;
}

// 00C94ED0  Trigger::cActSubTrgAddFunc::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActSubTrgAddFunc::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

