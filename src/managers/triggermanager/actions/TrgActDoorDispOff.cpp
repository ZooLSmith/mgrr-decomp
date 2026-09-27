// src/managers/triggermanager/actions/TrgActDoorDispOff.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C813B0..00C813B0, 1 functions

#include "mgrr.h"

// 00C813B0  Trigger::Act::DOOR_DISP_OFF  size=42  [class]
undefined4 __fastcall Trigger::Act::DOOR_DISP_OFF(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016abda0);
    return 0;
  }
  uVar1 = FUN_00c47cf0();
  return uVar1;
}

