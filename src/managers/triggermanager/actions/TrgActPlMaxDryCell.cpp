// src/managers/triggermanager/actions/TrgActPlMaxDryCell.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C886D0..00C886D0, 1 functions

#include "mgrr.h"

// 00C886D0  Trigger::Act::PL_MAX_DRY_CELL  size=119  [class]
undefined4 __fastcall Trigger::Act::PL_MAX_DRY_CELL(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  float10 fVar4;
  undefined *puVar5;
  
  if (*(int *)(param_1 + 4) != 0) {
    uVar3 = 0;
    piVar1 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar1 + 0x28))(0xffffffff);
    if ((iVar2 != 0) && (piVar1 = (int *)FUN_00a7c8a0(), piVar1 != (int *)0x0)) {
      puVar5 = &DAT_01be9db8;
      (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
      iVar2 = FUN_00dd6d80(puVar5);
      if (iVar2 != 0) {
        fVar4 = (float10)FUN_00bc2f00(1);
        FUN_00bda060((float)fVar4,0);
        uVar3 = 1;
      }
    }
    return uVar3;
  }
  FUN_00dd5650(&DAT_016acb18);
  return 0;
}

