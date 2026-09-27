// src/managers/triggermanager/cCondNotGameFlag.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7B3A0..00C85CF0, 2 functions

#include "mgrr.h"

// 00C7B3A0  Trigger::cCondNotGameFlag::vf1C  size=58  [class]
void __thiscall Trigger::cCondNotGameFlag::vf1C(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  *(int *)(param_1 + 4) = param_2;
  uVar2 = 0;
  do {
    iVar1 = FUN_00e03ea0((&PTR_s_GAME_RECVCOMMU_018ab9a8)[uVar2 * 2]);
    if (*(int *)(param_2 + 8) == iVar1) {
      *(uint *)(param_1 + 0x10) = uVar2;
      return;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x36);
  return;
}

// 00C85CF0  Trigger::cCondNotGameFlag::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondNotGameFlag::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

