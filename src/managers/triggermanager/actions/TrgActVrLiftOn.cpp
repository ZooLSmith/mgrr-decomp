// src/managers/triggermanager/actions/TrgActVrLiftOn.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C889D0..00C889D0, 1 functions

#include "mgrr.h"

// 00C889D0  Trigger::Act::VR_LIFT_ON  size=216  [class]
undefined4 __fastcall Trigger::Act::VR_LIFT_ON(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined *puVar7;
  
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    FUN_00dd5650(&DAT_016acc04);
    return 0;
  }
  uVar5 = 0;
  iVar1 = FUN_00d467a0();
  if ((iVar1 == 0) || (DAT_018b9174 != 0xd30)) {
    uVar6 = 0xd6000;
    uVar2 = FUN_00e03ea0(iVar3 + 8,0xd6000);
    iVar3 = FUN_00a18d70(uVar2,uVar6);
    if (iVar3 != 0) {
      piVar4 = (int *)FUN_00a7c8a0();
      if (piVar4 != (int *)0x0) {
        puVar7 = &DAT_01b354e8;
        (**(code **)(*piVar4 + 4))(&DAT_01b354e8);
        iVar3 = FUN_00dd6d80(puVar7);
        if (iVar3 != 0) {
          FUN_00603ef0();
          uVar5 = 1;
        }
      }
    }
  }
  else {
    uVar6 = 0xf5040;
    uVar2 = FUN_00e03ea0(iVar3 + 8,0xf5040);
    iVar3 = FUN_00a18d70(uVar2,uVar6);
    if (iVar3 != 0) {
      uVar2 = FUN_00a7c8a0();
      iVar3 = FUN_00c83bb0(uVar2);
      if (iVar3 != 0) {
        FUN_00603d90();
        return 1;
      }
    }
  }
  return uVar5;
}

