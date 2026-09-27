// src/managers/triggermanager/actions/TrgActPathWayStart.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7F670..00C7F670, 1 functions

#include "mgrr.h"

// 00C7F670  Trigger::Act::PATH_WAY_START  size=32  [class]
undefined4 __fastcall Trigger::Act::PATH_WAY_START(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016aad84);
    return 0;
  }
  return 1;
}

