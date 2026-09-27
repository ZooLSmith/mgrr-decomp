// src/managers/triggermanager/actions/TrgActPlMaxHp.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C88640..00C88640, 1 functions

#include "mgrr.h"

// 00C88640  Trigger::Act::PL_MAX_HP  size=115  [class]
undefined4 __fastcall Trigger::Act::PL_MAX_HP(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  
  if (*(int *)(param_1 + 4) != 0) {
    uVar3 = 0;
    piVar1 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar1 + 0x28))(0xffffffff);
    if ((iVar2 != 0) && (piVar1 = (int *)FUN_00a7c8a0(), piVar1 != (int *)0x0)) {
      puVar4 = &DAT_01be9db8;
      (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
      iVar2 = FUN_00dd6d80(puVar4);
      if (iVar2 != 0) {
        uVar3 = FUN_00b7c980(1);
        FUN_00b7c9c0(uVar3);
        uVar3 = 1;
      }
    }
    return uVar3;
  }
  FUN_00dd5650(&DAT_016acaec);
  return 0;
}

