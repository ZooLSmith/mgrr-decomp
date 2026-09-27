// src/managers/triggermanager/actions/TrgActGameFlagOff.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C87DF0..00C87DF0, 1 functions

#include "mgrr.h"

// 00C87DF0  Trigger::Act::GAME_FLAG_OFF  size=97  [class]
undefined4 __fastcall Trigger::Act::GAME_FLAG_OFF(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016ac96c);
    return 0;
  }
  if (-1 < *(int *)(param_1 + 8)) {
    (&DAT_01bea090)[*(uint *)(&DAT_018ab9ac + *(int *)(param_1 + 8) * 8) >> 5] =
         (&DAT_01bea090)[*(uint *)(&DAT_018ab9ac + *(int *)(param_1 + 8) * 8) >> 5] &
         ~(0x80000000U >> ((byte)*(uint *)(&DAT_018ab9ac + *(int *)(param_1 + 8) * 8) & 0x1f));
    return 1;
  }
  FUN_00dd5650(&DAT_016ac93c);
  return 0;
}

