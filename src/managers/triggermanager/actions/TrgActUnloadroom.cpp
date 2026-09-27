// src/managers/triggermanager/actions/TrgActUnloadroom.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7F1F0..00C7F1F0, 1 functions

#include "mgrr.h"

// 00C7F1F0  Trigger::Act::UnloadRoom  size=47  [class]
undefined4 __fastcall Trigger::Act::UnloadRoom(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016aaaa0);
    return 0;
  }
  FUN_00a4ea90(*(undefined4 *)(*(int *)(param_1 + 4) + 8));
  return 1;
}

