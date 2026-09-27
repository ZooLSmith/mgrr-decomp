// src/managers/triggermanager/cCondPlayerDie.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7ABA0..00C859D0, 4 functions

#include "mgrr.h"

// 00C7ABA0  Trigger::cCondPlayerDie::vf10  size=1  [class]
void Trigger::cCondPlayerDie::vf10(void)

{
  return;
}

// 00C7ABB0  Trigger::cCondPlayerDie::vf1C  size=16  [class]
void __thiscall Trigger::cCondPlayerDie::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  return;
}

// 00C859B0  Trigger::cCondPlayerDie::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondPlayerDie::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C859D0  Trigger::cCondPlayerDie::vf14  size=157  [class]
undefined4 __fastcall Trigger::cCondPlayerDie::vf14(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  
  piVar1 = (int *)FUN_00c13920();
  (**(code **)(*piVar1 + 0x28))(0);
  if (*(int *)(param_1 + 0x10) == 1) {
    piVar1 = (int *)FUN_00a7c8a0();
    if (piVar1 != (int *)0x0) {
      puVar4 = &DAT_01be9db8;
      (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
      FUN_00dd6d80(puVar4);
    }
    iVar2 = FUN_00b7c970();
    if (0 < iVar2) {
      return 0;
    }
  }
  else {
    piVar1 = (int *)FUN_00a7c8a0();
    if (piVar1 == (int *)0x0) {
      uVar3 = 0;
    }
    else {
      puVar4 = &DAT_01be9c24;
      (**(code **)(*piVar1 + 4))(&DAT_01be9c24);
      iVar2 = FUN_00dd6d80(puVar4);
      uVar3 = -(uint)(iVar2 != 0) & (uint)piVar1;
    }
    iVar2 = FUN_00a8eea0();
    if ((0 < iVar2) && (*(int *)(uVar3 + 0x4e4) != 1)) {
      return 0;
    }
  }
  return 1;
}

