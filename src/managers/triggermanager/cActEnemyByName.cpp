// src/managers/triggermanager/cActEnemyByName.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7EBF0..00C91940, 8 functions

#include "mgrr.h"

// 00C7EBF0  Trigger::cActEnemyByName::vf18  size=42  [class]
undefined4 __fastcall Trigger::cActEnemyByName::vf18(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016aa78c);
    return 0;
  }
  uVar1 = FUN_00c2a520();
  return uVar1;
}

// 00C7EC20  Trigger::cActEnemyByName::vf24  size=26  [class]
undefined4 __fastcall Trigger::cActEnemyByName::vf24(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  uVar1 = FUN_00c18740(*(int *)(param_1 + 4) + 8);
  return uVar1;
}

// 00C896F0  Trigger::cActEnemyByName::vf08  size=1  [class]
void Trigger::cActEnemyByName::vf08(void)

{
  return;
}

// 00C89700  Trigger::cActEnemyByName::vf0C  size=1  [class]
void Trigger::cActEnemyByName::vf0C(void)

{
  return;
}

// 00C89710  Trigger::cActEnemyByName::vf10  size=1  [class]
void Trigger::cActEnemyByName::vf10(void)

{
  return;
}

// 00C89720  Trigger::cActEnemyByName::vf14  size=1  [class]
void Trigger::cActEnemyByName::vf14(void)

{
  return;
}

// 00C91930  Trigger::cActEnemyByName::vf00  size=6  [class]
undefined * Trigger::cActEnemyByName::vf00(void)

{
  return &DAT_01dbe064;
}

// 00C91940  Trigger::cActEnemyByName::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActEnemyByName::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

