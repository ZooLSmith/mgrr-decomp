// src/managers/triggermanager/cActEnemyRequestEndAll.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7FD90..00C931C0, 4 functions

#include "mgrr.h"

// 00C7FD90  Trigger::cActEnemyRequestEndAll::vf18  size=42  [class]
undefined4 __fastcall Trigger::cActEnemyRequestEndAll::vf18(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016aa78c);
    return 0;
  }
  FUN_00ca5770();
  return 1;
}

// 00C7FDC0  Trigger::cActEnemyRequestEndAll::vf24  size=4  [class]
undefined4 Trigger::cActEnemyRequestEndAll::vf24(void)

{
  return 0xffffffff;
}

// 00C931B0  Trigger::cActEnemyRequestEndAll::vf00  size=6  [class]
undefined * Trigger::cActEnemyRequestEndAll::vf00(void)

{
  return &DAT_01dbe17c;
}

// 00C931C0  Trigger::cActEnemyRequestEndAll::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActEnemyRequestEndAll::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

