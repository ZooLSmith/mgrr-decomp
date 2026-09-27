// src/managers/triggermanager/cCondPlayerHpGaugeState.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7AAF0..00C85890, 4 functions

#include "mgrr.h"

// 00C7AAF0  Trigger::cCondPlayerHpGaugeState::vf10  size=1  [class]
void Trigger::cCondPlayerHpGaugeState::vf10(void)

{
  return;
}

// 00C7AB00  Trigger::cCondPlayerHpGaugeState::vf1C  size=16  [class]
void __thiscall Trigger::cCondPlayerHpGaugeState::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  return;
}

// 00C85870  Trigger::cCondPlayerHpGaugeState::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondPlayerHpGaugeState::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C85890  Trigger::cCondPlayerHpGaugeState::vf14  size=253  [class]
undefined4 __fastcall Trigger::cCondPlayerHpGaugeState::vf14(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  
  piVar1 = (int *)FUN_00c13920();
  iVar2 = (**(code **)(*piVar1 + 0x28))(0xffffffff);
  if (iVar2 == 0) {
    return 0;
  }
  piVar1 = (int *)FUN_00a7c8a0();
  if (piVar1 != (int *)0x0) {
    puVar4 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar4);
    if (iVar2 != 0) {
      iVar2 = FUN_00e03ea0(&DAT_016ac580);
      if ((*(int *)(param_1 + 0x10) == iVar2) ||
         (iVar2 = FUN_00e03ea0(&DAT_016ac57c), *(int *)(param_1 + 0x10) == iVar2)) {
        iVar2 = FUN_00b7cb80();
        if ((iVar2 == 0) && (iVar2 = FUN_00b7cc20(), iVar2 == 0)) {
          return 1;
        }
        return 0;
      }
      iVar2 = FUN_00e03ea0(&DAT_01662d38);
      if ((*(int *)(param_1 + 0x10) != iVar2) &&
         (iVar2 = FUN_00e03ea0(&DAT_016ac578), *(int *)(param_1 + 0x10) != iVar2)) {
        iVar2 = FUN_00e03ea0(&DAT_0165933c);
        if ((*(int *)(param_1 + 0x10) != iVar2) &&
           (iVar2 = FUN_00e03ea0(&DAT_016ac574), *(int *)(param_1 + 0x10) != iVar2)) {
          return 0;
        }
        uVar3 = FUN_00b7cb80();
        return uVar3;
      }
      uVar3 = FUN_00b7cc20();
      return uVar3;
    }
  }
  return 0;
}

