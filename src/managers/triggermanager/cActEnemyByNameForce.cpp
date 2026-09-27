// src/managers/triggermanager/cActEnemyByNameForce.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7ECB0..00C919C0, 3 functions

#include "mgrr.h"

// 00C7ECB0  Trigger::cActEnemyByNameForce::vf24  size=32  [class]
undefined4 __fastcall Trigger::cActEnemyByNameForce::vf24(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  uVar1 = FUN_00c194f0(DAT_01d5bad4,*(int *)(param_1 + 4) + 8);
  return uVar1;
}

// 00C919B0  Trigger::cActEnemyByNameForce::vf00  size=6  [class]
undefined * Trigger::cActEnemyByNameForce::vf00(void)

{
  return &DAT_01dbe06c;
}

// 00C919C0  Trigger::cActEnemyByNameForce::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActEnemyByNameForce::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

