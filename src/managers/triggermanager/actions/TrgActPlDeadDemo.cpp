// src/managers/triggermanager/actions/TrgActPlDeadDemo.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7F9E0..00C7F9E0, 1 functions

#include "mgrr.h"

// 00C7F9E0  Trigger::Act::PL_DEAD_DEMO  size=32  [class]
undefined4 __fastcall Trigger::Act::PL_DEAD_DEMO(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016ab028);
    return 0;
  }
  return 1;
}

