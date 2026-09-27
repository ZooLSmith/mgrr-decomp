// src/managers/triggermanager/actions/TrgActCamFocusLock.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C887A0..00C887A0, 1 functions

#include "mgrr.h"

// 00C887A0  Trigger::Act::CAM_FOCUS_LOCK  size=297  [class]
undefined4 __fastcall Trigger::Act::CAM_FOCUS_LOCK(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined *puVar4;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 auStack_24 [4];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016acb98);
    return 0;
  }
  iVar2 = FUN_00c78580(*(undefined4 *)(iVar1 + 8),&local_30);
  if (iVar2 == 0) {
    FUN_00dd5650(&DAT_016acb70,*(undefined4 *)(iVar1 + 8));
    return 0;
  }
  local_20 = local_30;
  local_1c = local_2c;
  local_18 = local_28;
  local_14 = 0x3f800000;
  piVar3 = (int *)FUN_00c13920();
  iVar2 = (**(code **)(*piVar3 + 0x28))(0xffffffff);
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_00a7c8a0();
    if (piVar3 != (int *)0x0) {
      puVar4 = &DAT_01be9db8;
      (**(code **)(*piVar3 + 4))(&DAT_01be9db8);
      iVar2 = FUN_00dd6d80(puVar4);
      if (iVar2 != 0) {
        DAT_01bea070 = DAT_01bea070 | 0x20000;
        FUN_00b7ec60();
        FUN_00c783e0(auStack_24,*(float *)(iVar1 + 0x10) * -1.0,*(float *)(iVar1 + 0xc) * -1.0);
        return 1;
      }
    }
  }
  FUN_00dd5650(&DAT_016acb4c);
  return 0;
}

