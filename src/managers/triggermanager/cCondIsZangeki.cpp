// src/managers/triggermanager/cCondIsZangeki.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7DD80..00C86B10, 4 functions

#include "mgrr.h"

// 00C7DD80  Trigger::cCondIsZangeki::vf10  size=1  [class]
void Trigger::cCondIsZangeki::vf10(void)

{
  return;
}

// 00C7DD90  Trigger::cCondIsZangeki::vf1C  size=10  [class]
void __thiscall Trigger::cCondIsZangeki::vf1C(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}

// 00C86AF0  Trigger::cCondIsZangeki::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondIsZangeki::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C86B10  Trigger::cCondIsZangeki::vf14  size=108  [class]
undefined4 Trigger::cCondIsZangeki::vf14(void)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  piVar1 = (int *)FUN_00c13920();
  iVar2 = (**(code **)(*piVar1 + 0x28))(0xffffffff);
  if (iVar2 == 0) {
    return 0;
  }
  piVar1 = (int *)FUN_00a7c8a0();
  if (piVar1 != (int *)0x0) {
    puVar3 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar3);
    if (iVar2 != 0) {
      iVar2 = (**(code **)(*piVar1 + 0x32c))();
      if ((iVar2 == 1) || ((DAT_01bea060 & 0x400) != 0)) {
        return 1;
      }
    }
  }
  return 0;
}

