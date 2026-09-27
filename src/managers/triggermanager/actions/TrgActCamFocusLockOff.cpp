// src/managers/triggermanager/actions/TrgActCamFocusLockOff.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C888E0..00C888E0, 1 functions

#include "mgrr.h"

// 00C888E0  Trigger::Act::CAM_FOCUS_LOCK_OFF  size=52  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall Trigger::Act::CAM_FOCUS_LOCK_OFF(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016acbcc);
    return 0;
  }
  DAT_01bea070 = DAT_01bea070 & 0xfffdffff;
  _DAT_01dbd898 = 0x78;
  return 1;
}

