// src/managers/triggermanager/cActEnemyByNumberForce.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7ED00..00C91A00, 3 functions

#include "mgrr.h"

// 00C7ED00  Trigger::cActEnemyByNumberForce::vf24  size=15  [class]
undefined4 __fastcall Trigger::cActEnemyByNumberForce::vf24(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 8);
}

// 00C919F0  Trigger::cActEnemyByNumberForce::vf00  size=6  [class]
undefined * Trigger::cActEnemyByNumberForce::vf00(void)

{
  return &DAT_01dbe070;
}

// 00C91A00  Trigger::cActEnemyByNumberForce::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActEnemyByNumberForce::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

