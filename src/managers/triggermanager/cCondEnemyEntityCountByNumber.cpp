// src/managers/triggermanager/cCondEnemyEntityCountByNumber.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7B540..00C85D30, 2 functions

#include "mgrr.h"

// 00C7B540  Trigger::cCondEnemyEntityCountByNumber::vf1C  size=28  [class]
void __thiscall Trigger::cCondEnemyEntityCountByNumber::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x10);
  return;
}

// 00C85D30  Trigger::cCondEnemyEntityCountByNumber::vf00  size=31  [class]
undefined4 * __thiscall
Trigger::cCondEnemyEntityCountByNumber::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

