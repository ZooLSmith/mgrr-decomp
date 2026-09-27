// src/managers/triggermanager/actions/TrgActVmPlay.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C80710..00C80710, 1 functions

#include "mgrr.h"

// 00C80710  Trigger::Act::VM_PLAY  size=47  [class]
undefined4 __fastcall Trigger::Act::VM_PLAY(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016ab5d0);
    return 0;
  }
  FUN_00c33070(*(int *)(param_1 + 4) + 8);
  return 1;
}

