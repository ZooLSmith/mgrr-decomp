// src/managers/triggermanager/cActEnemy.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C918F0..00C91900, 2 functions

#include "mgrr.h"

// 00C918F0  Trigger::cActEnemy::vf00  size=6  [class]
undefined * Trigger::cActEnemy::vf00(void)

{
  return &DAT_01dbd210;
}

// 00C91900  Trigger::cActEnemy::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActEnemy::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

