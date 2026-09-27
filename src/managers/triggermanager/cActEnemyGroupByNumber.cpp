// src/managers/triggermanager/cActEnemyGroupByNumber.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C80410..00C93760, 4 functions

#include "mgrr.h"

// 00C80410  Trigger::cActEnemyGroupByNumber::vf18  size=46  [class]
undefined4 __fastcall Trigger::cActEnemyGroupByNumber::vf18(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016aa78c);
    return 0;
  }
  uVar2 = FUN_00c18610(*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc));
  return uVar2;
}

// 00C80440  Trigger::cActEnemyGroupByNumber::vf24  size=15  [class]
undefined4 __fastcall Trigger::cActEnemyGroupByNumber::vf24(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + 0xc);
}

// 00C93750  Trigger::cActEnemyGroupByNumber::vf00  size=6  [class]
undefined * Trigger::cActEnemyGroupByNumber::vf00(void)

{
  return &DAT_01dbe1c0;
}

// 00C93760  Trigger::cActEnemyGroupByNumber::vf04  size=31  [class]
undefined4 * __thiscall Trigger::cActEnemyGroupByNumber::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = cActionAbstract::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

