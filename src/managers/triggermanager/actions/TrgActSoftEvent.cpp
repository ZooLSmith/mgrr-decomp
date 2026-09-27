// src/managers/triggermanager/actions/TrgActSoftEvent.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7EB50..00C7EB50, 1 functions

#include "mgrr.h"

// 00C7EB50  Trigger::Act::SOFT_EVENT  size=40  [class]
undefined4 __fastcall Trigger::Act::SOFT_EVENT(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016aa70c);
    return 0;
  }
  uVar1 = FUN_00d7eb90(*(undefined4 *)(*(int *)(param_1 + 4) + 8));
  return uVar1;
}

