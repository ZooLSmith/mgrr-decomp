// src/managers/triggermanager/cActEnemyByNumber.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7EC40..00C91980, 4 functions

#include "mgrr.h"

// 00C7EC40  Trigger::cActEnemyByNumber::vf18  size=42  [class]
undefined4 __fastcall Trigger::cActEnemyByNumber::vf18(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016aa78c);
    return 0;
  }
  uVar1 = FUN_00c185c0();
  return uVar1;
}

// 00C7EC70  Trigger::cActEnemyByNumber::vf24  size=15  [class]
undefined4 __fastcall Trigger::cActEnemyByNumber::vf24(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 8);
}

// 00C91970  Trigger::cActEnemyByNumber::vf00  size=6  [class]
undefined * Trigger::cActEnemyByNumber::vf00(void)

{
  return &DAT_01dbe068;
}

// 00C91980  Trigger::cActEnemyByNumber::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActEnemyByNumber::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

