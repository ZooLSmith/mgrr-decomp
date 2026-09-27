// src/managers/triggermanager/actions/TrgActLoadroom.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7F1C0..00C7F1C0, 1 functions

#include "mgrr.h"

// 00C7F1C0  Trigger::Act::LoadRoom  size=47  [class]
undefined4 __fastcall Trigger::Act::LoadRoom(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016aaa74);
    return 0;
  }
  FUN_00a4e9e0(*(undefined4 *)(*(int *)(param_1 + 4) + 8));
  return 1;
}

