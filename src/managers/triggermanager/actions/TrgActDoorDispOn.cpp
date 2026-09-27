// src/managers/triggermanager/actions/TrgActDoorDispOn.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C81380..00C81380, 1 functions

#include "mgrr.h"

// 00C81380  Trigger::Act::DOOR_DISP_ON  size=42  [class]
undefined4 __fastcall Trigger::Act::DOOR_DISP_ON(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016abd70);
    return 0;
  }
  uVar1 = FUN_00c47d70();
  return uVar1;
}

