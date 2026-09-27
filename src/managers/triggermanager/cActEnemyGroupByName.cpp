// src/managers/triggermanager/cActEnemyGroupByName.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C80450..00C937A0, 4 functions

#include "mgrr.h"

// 00C80450  Trigger::cActEnemyGroupByName::vf18  size=46  [class]
undefined4 __fastcall Trigger::cActEnemyGroupByName::vf18(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016aa78c);
    return 0;
  }
  uVar2 = FUN_00c18650(*(undefined4 *)(iVar1 + 8),iVar1 + 0xc);
  return uVar2;
}

// 00C80480  Trigger::cActEnemyGroupByName::vf24  size=26  [class]
undefined4 __fastcall Trigger::cActEnemyGroupByName::vf24(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  uVar1 = FUN_00c18740(*(int *)(param_1 + 4) + 0xc);
  return uVar1;
}

// 00C93790  Trigger::cActEnemyGroupByName::vf00  size=6  [class]
undefined * Trigger::cActEnemyGroupByName::vf00(void)

{
  return &DAT_01dbe1c4;
}

// 00C937A0  Trigger::cActEnemyGroupByName::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActEnemyGroupByName::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

