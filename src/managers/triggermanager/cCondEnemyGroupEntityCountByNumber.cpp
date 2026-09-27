// src/managers/triggermanager/cCondEnemyGroupEntityCountByNumber.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7C160..00C86280, 3 functions

#include "mgrr.h"

// 00C7C160  Trigger::cCondEnemyGroupEntityCountByNumber::cCondEnemyGroupEntityCountByNumber  size=32  [class]
void __fastcall
Trigger::cCondEnemyGroupEntityCountByNumber::cCondEnemyGroupEntityCountByNumber(undefined4 *param_1)

{
  param_1[3] = 0xffffffff;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  *param_1 = vftable;
  param_1[4] = 0;
  param_1[6] = 0xffffffff;
  param_1[7] = 0xffffffff;
  return;
}

// 00C7C250  Trigger::cCondEnemyGroupEntityCountByNumber::vf1C  size=34  [class]
void __thiscall Trigger::cCondEnemyGroupEntityCountByNumber::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x14);
  return;
}

// 00C86280  Trigger::cCondEnemyGroupEntityCountByNumber::vf00  size=31  [class]
undefined4 * __thiscall
Trigger::cCondEnemyGroupEntityCountByNumber::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

