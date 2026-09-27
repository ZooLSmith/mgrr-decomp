// src/managers/triggermanager/cCondGimmick.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7B0F0..00C85C70, 4 functions

#include "mgrr.h"

// 00C7B0F0  Trigger::cCondGimmick::vf10  size=1  [class]
void Trigger::cCondGimmick::vf10(void)

{
  return;
}

// 00C7B100  Trigger::cCondGimmick::vf14  size=53  [class]
uint __fastcall Trigger::cCondGimmick::vf14(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 4);
  uVar1 = 0;
  if (iVar2 == 0x34) {
    uVar1 = FUN_009451d0(*(undefined4 *)(param_1 + 0x10));
    return uVar1;
  }
  if (iVar2 == 0x7f) {
    iVar2 = FUN_009451d0(*(undefined4 *)(param_1 + 0x10));
    uVar1 = (uint)(iVar2 == 0);
  }
  return uVar1;
}

// 00C7B140  Trigger::cCondGimmick::vf1C  size=16  [class]
void __thiscall Trigger::cCondGimmick::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  return;
}

// 00C85C70  Trigger::cCondGimmick::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondGimmick::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

