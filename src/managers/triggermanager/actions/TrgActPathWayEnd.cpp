// src/managers/triggermanager/actions/TrgActPathWayEnd.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7F690..00C7F690, 1 functions

#include "mgrr.h"

// 00C7F690  Trigger::Act::PATH_WAY_END  size=32  [class]
undefined4 __fastcall Trigger::Act::PATH_WAY_END(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016aadb8);
    return 0;
  }
  return 1;
}

