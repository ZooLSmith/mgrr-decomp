// src/managers/triggermanager/cActEnemyRequestByName.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7FE20..00C93240, 4 functions

#include "mgrr.h"

// 00C7FE20  Trigger::cActEnemyRequestByName::vf18  size=47  [class]
undefined4 __fastcall Trigger::cActEnemyRequestByName::vf18(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016aa78c);
    return 0;
  }
  EnemySetReader::requestStart_2(*(int *)(param_1 + 4) + 8);
  return 1;
}

// 00C7FE50  Trigger::cActEnemyRequestByName::vf24  size=32  [class]
undefined4 __fastcall Trigger::cActEnemyRequestByName::vf24(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  uVar1 = FUN_00c194f0(DAT_01d5bad4,*(int *)(param_1 + 4) + 8);
  return uVar1;
}

// 00C93230  Trigger::cActEnemyRequestByName::vf00  size=6  [class]
undefined * Trigger::cActEnemyRequestByName::vf00(void)

{
  return &DAT_01dbe184;
}

// 00C93240  Trigger::cActEnemyRequestByName::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActEnemyRequestByName::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

