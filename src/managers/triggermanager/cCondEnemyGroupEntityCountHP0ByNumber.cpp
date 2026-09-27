// src/managers/triggermanager/cCondEnemyGroupEntityCountHP0ByNumber.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7C4A0..00C862C0, 2 functions

#include "mgrr.h"

// 00C7C4A0  Trigger::cCondEnemyGroupEntityCountHP0ByNumber::vf1C  size=34  [class]
void __thiscall Trigger::cCondEnemyGroupEntityCountHP0ByNumber::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x14);
  return;
}

// 00C862C0  Trigger::cCondEnemyGroupEntityCountHP0ByNumber::vf00  size=31  [class]
undefined4 * __thiscall
Trigger::cCondEnemyGroupEntityCountHP0ByNumber::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

