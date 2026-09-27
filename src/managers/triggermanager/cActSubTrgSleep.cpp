// src/managers/triggermanager/cActSubTrgSleep.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C94E40..00C94E50, 2 functions

#include "mgrr.h"

// 00C94E40  Trigger::cActSubTrgSleep::vf00  size=6  [class]
undefined * Trigger::cActSubTrgSleep::vf00(void)

{
  return &DAT_01dbe2ec;
}

// 00C94E50  Trigger::cActSubTrgSleep::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActSubTrgSleep::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

