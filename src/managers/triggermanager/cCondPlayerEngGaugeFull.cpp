// src/managers/triggermanager/cCondPlayerEngGaugeFull.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C79C40..00C84E50, 4 functions

#include "mgrr.h"

// 00C79C40  Trigger::cCondPlayerEngGaugeFull::vf10  size=1  [class]
void Trigger::cCondPlayerEngGaugeFull::vf10(void)

{
  return;
}

// 00C79C50  Trigger::cCondPlayerEngGaugeFull::vf1C  size=10  [class]
void __thiscall Trigger::cCondPlayerEngGaugeFull::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C84E30  Trigger::cCondPlayerEngGaugeFull::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondPlayerEngGaugeFull::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C84E50  Trigger::cCondPlayerEngGaugeFull::vf14  size=114  [class]
undefined4 Trigger::cCondPlayerEngGaugeFull::vf14(void)

{
  int *piVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  undefined *puVar5;
  
  piVar1 = (int *)FUN_00c13920();
  iVar2 = (**(code **)(*piVar1 + 0x28))(0xffffffff);
  if (iVar2 == 0) {
    return 0;
  }
  piVar1 = (int *)FUN_00a7c8a0();
  if (piVar1 != (int *)0x0) {
    puVar5 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar5);
    if (iVar2 != 0) {
      fVar3 = (float10)FUN_00bc2f00(1);
      fVar4 = (float10)FUN_00bda020();
      if ((float10)(float)fVar3 == fVar4) {
        return 1;
      }
    }
  }
  return 0;
}

