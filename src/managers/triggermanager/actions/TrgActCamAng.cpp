// src/managers/triggermanager/actions/TrgActCamAng.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7F050..00C7F050, 1 functions

#include "mgrr.h"

// 00C7F050  Trigger::Act::CAM_ANG  size=64  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall Trigger::Act::CAM_ANG(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016aa9f0);
    return 0;
  }
  _DAT_01dbd870 = _DAT_01dbd870 | 1;
  _DAT_01dbd878 = 0;
  _DAT_01dbd874 = *(float *)(*(int *)(param_1 + 4) + 8) * 0.017453292;
  return 1;
}

