// src/managers/triggermanager/cActEnemyRequestEnd.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7FC90..00C93100, 4 functions

#include "mgrr.h"

// 00C7FC90  Trigger::cActEnemyRequestEnd::vf18  size=51  [class]
undefined4 __fastcall Trigger::cActEnemyRequestEnd::vf18(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016aa78c);
    return 0;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 8);
  if (-1 < iVar1) {
    EnemySetReader::requestEnd(iVar1);
  }
  return 1;
}

// 00C7FCD0  Trigger::cActEnemyRequestEnd::vf24  size=15  [class]
undefined4 __fastcall Trigger::cActEnemyRequestEnd::vf24(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 8);
}

// 00C930F0  Trigger::cActEnemyRequestEnd::vf00  size=6  [class]
undefined * Trigger::cActEnemyRequestEnd::vf00(void)

{
  return &DAT_01dbe170;
}

// 00C93100  Trigger::cActEnemyRequestEnd::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActEnemyRequestEnd::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

