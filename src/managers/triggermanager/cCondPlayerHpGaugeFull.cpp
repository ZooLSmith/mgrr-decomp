// src/managers/triggermanager/cCondPlayerHpGaugeFull.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7A8E0..00C85750, 4 functions

#include "mgrr.h"

// 00C7A8E0  Trigger::cCondPlayerHpGaugeFull::vf10  size=1  [class]
void Trigger::cCondPlayerHpGaugeFull::vf10(void)

{
  return;
}

// 00C7A8F0  Trigger::cCondPlayerHpGaugeFull::vf1C  size=10  [class]
void __thiscall Trigger::cCondPlayerHpGaugeFull::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C85730  Trigger::cCondPlayerHpGaugeFull::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondPlayerHpGaugeFull::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C85750  Trigger::cCondPlayerHpGaugeFull::vf14  size=101  [class]
undefined4 Trigger::cCondPlayerHpGaugeFull::vf14(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
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
      iVar2 = FUN_00b7c980(1);
      iVar3 = FUN_00b7c970();
      if (iVar2 == iVar3) {
        return 1;
      }
    }
  }
  return 0;
}

