// src/managers/triggermanager/cActEnemyRequestBySubPhase.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7FE70..00C93280, 4 functions

#include "mgrr.h"

// 00C7FE70  Trigger::cActEnemyRequestBySubPhase::vf18  size=72  [class]
undefined4 __fastcall Trigger::cActEnemyRequestBySubPhase::vf18(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016aa78c);
  }
  else if ((DAT_01be9218 == 1) || (DAT_01be9218 == 0x100)) {
    FUN_00ca6a50(DAT_018b9174,*(int *)(param_1 + 4) + 8);
    return 1;
  }
  return 0;
}

// 00C7FEC0  Trigger::cActEnemyRequestBySubPhase::vf24  size=4  [class]
undefined4 Trigger::cActEnemyRequestBySubPhase::vf24(void)

{
  return 0xffffffff;
}

// 00C93270  Trigger::cActEnemyRequestBySubPhase::vf00  size=6  [class]
undefined * Trigger::cActEnemyRequestBySubPhase::vf00(void)

{
  return &DAT_01dbe188;
}

// 00C93280  Trigger::cActEnemyRequestBySubPhase::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActEnemyRequestBySubPhase::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

