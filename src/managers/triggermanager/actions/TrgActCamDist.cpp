// src/managers/triggermanager/actions/TrgActCamDist.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7EFC0..00C7EFC0, 1 functions

#include "mgrr.h"

// 00C7EFC0  Trigger::Act::CAM_DIST  size=71  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall Trigger::Act::CAM_DIST(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016aa9c4);
    return 0;
  }
  _DAT_01dbd870 = _DAT_01dbd870 | 2;
  _DAT_01dbd89c = *(undefined4 *)(*(int *)(param_1 + 4) + 8);
  _DAT_01dbd8a4 = 0;
  _DAT_01dbd8a0 = _DAT_01bea3c4;
  return 1;
}

