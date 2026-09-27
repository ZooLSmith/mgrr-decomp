// src/managers/triggermanager/cCondGenericFlag.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7DF00..00C86C30, 3 functions

#include "mgrr.h"

// 00C7DF00  Trigger::cCondGenericFlag::vf14  size=48  [class]
uint __fastcall Trigger::cCondGenericFlag::vf14(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x10);
  if ((0 < iVar2) && (iVar2 < 0x21)) {
    if (*(int *)(*(int *)(param_1 + 4) + 4) == 0x73) {
      uVar1 = FUN_00c207d0(iVar2);
      return uVar1;
    }
    iVar2 = FUN_00c207d0(iVar2);
    return (uint)(iVar2 == 0);
  }
  return 0;
}

// 00C7DF30  Trigger::cCondGenericFlag::vf1C  size=19  [class]
void __thiscall Trigger::cCondGenericFlag::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(int *)(param_1 + 0x14) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  return;
}

// 00C86C30  Trigger::cCondGenericFlag::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondGenericFlag::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

