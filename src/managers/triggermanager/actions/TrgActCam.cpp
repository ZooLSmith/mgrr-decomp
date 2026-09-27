// src/managers/triggermanager/actions/TrgActCam.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7E8A0..00C7E8A0, 1 functions

#include "mgrr.h"

// 00C7E8A0  Trigger::Act::CAM  size=66  [class]
undefined4 __fastcall Trigger::Act::CAM(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016aa5d4);
    return 0;
  }
  if (DAT_01dbd8a8 != 0) {
    uVar1 = FUN_00ac9d90(*(undefined4 *)(*(int *)(param_1 + 4) + 8),*(undefined4 *)(param_1 + 8),
                         0x8000000);
    return uVar1;
  }
  return 0;
}

