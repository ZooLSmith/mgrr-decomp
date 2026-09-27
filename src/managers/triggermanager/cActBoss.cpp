// src/managers/triggermanager/cActBoss.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7EBE0..00C96650, 3 functions

#include "mgrr.h"

// 00C7EBE0  Trigger::cActBoss::vf24  size=4  [class]
undefined4 Trigger::cActBoss::vf24(void)

{
  return 0xffffffff;
}

// 00C96640  Trigger::cActBoss::vf00  size=6  [class]
undefined * Trigger::cActBoss::vf00(void)

{
  return &DAT_01dbe060;
}

// 00C96650  Trigger::cActBoss::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActBoss::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

