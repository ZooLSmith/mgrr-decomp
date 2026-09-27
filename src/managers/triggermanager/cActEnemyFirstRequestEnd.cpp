// src/managers/triggermanager/cActEnemyFirstRequestEnd.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7FFB0..00C93400, 4 functions

#include "mgrr.h"

// 00C7FFB0  Trigger::cActEnemyFirstRequestEnd::vf18  size=42  [class]
undefined4 __fastcall Trigger::cActEnemyFirstRequestEnd::vf18(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016aa78c);
    return 0;
  }
  EnemySetReader::requestEnd_3();
  return 1;
}

// 00C7FFE0  Trigger::cActEnemyFirstRequestEnd::vf24  size=4  [class]
undefined4 Trigger::cActEnemyFirstRequestEnd::vf24(void)

{
  return 0xffffffff;
}

// 00C933F0  Trigger::cActEnemyFirstRequestEnd::vf00  size=6  [class]
undefined * Trigger::cActEnemyFirstRequestEnd::vf00(void)

{
  return &DAT_01dbe1a0;
}

// 00C93400  Trigger::cActEnemyFirstRequestEnd::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActEnemyFirstRequestEnd::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

