// src/managers/triggermanager/cActMainTrgSleep.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C94DC0..00C94DD0, 2 functions

#include "mgrr.h"

// 00C94DC0  Trigger::cActMainTrgSleep::vf00  size=6  [class]
undefined * Trigger::cActMainTrgSleep::vf00(void)

{
  return &DAT_01dbe2e4;
}

// 00C94DD0  Trigger::cActMainTrgSleep::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActMainTrgSleep::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

