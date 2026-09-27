// src/managers/triggermanager/conditions/TrgCondOutCam.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C853F0..00C853F0, 1 functions

#include "mgrr.h"

// 00C853F0  Trigger::Cond::OUT_CAM  size=122  [class]
undefined4 __fastcall Trigger::Cond::OUT_CAM(int param_1)

{
  int iVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  iVar1 = FUN_00c78580(*(undefined4 *)(param_1 + 0x10),&local_20);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x30) = local_20;
    *(undefined4 *)(param_1 + 0x34) = local_1c;
    *(undefined4 *)(param_1 + 0x38) = local_18;
    *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x14) = 1;
    return 1;
  }
  FUN_00dd5650(&DAT_016ac4e0,*(undefined4 *)(param_1 + 0x10));
  return 0;
}

