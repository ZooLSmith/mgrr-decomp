// src/managers/triggermanager/cCondEnemyGroupCountByNumber.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7BCD0..00C86200, 3 functions

#include "mgrr.h"

// 00C7BCD0  Trigger::cCondEnemyGroupCountByNumber::cCondEnemyGroupCountByNumber  size=32  [class]
void __fastcall
Trigger::cCondEnemyGroupCountByNumber::cCondEnemyGroupCountByNumber(undefined4 *param_1)

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

// 00C7BDC0  Trigger::cCondEnemyGroupCountByNumber::vf1C  size=34  [class]
void __thiscall Trigger::cCondEnemyGroupCountByNumber::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x14);
  return;
}

// 00C86200  Trigger::cCondEnemyGroupCountByNumber::vf00  size=31  [class]
undefined4 * __thiscall
Trigger::cCondEnemyGroupCountByNumber::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

