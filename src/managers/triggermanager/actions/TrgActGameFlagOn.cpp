// src/managers/triggermanager/actions/TrgActGameFlagOn.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C87D80..00C87D80, 1 functions

#include "mgrr.h"

// 00C87D80  Trigger::Act::GAME_FLAG_ON  size=95  [class]
undefined4 __fastcall Trigger::Act::GAME_FLAG_ON(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016ac90c);
    return 0;
  }
  if (-1 < *(int *)(param_1 + 8)) {
    (&DAT_01bea090)[*(uint *)(&DAT_018ab9ac + *(int *)(param_1 + 8) * 8) >> 5] =
         (&DAT_01bea090)[*(uint *)(&DAT_018ab9ac + *(int *)(param_1 + 8) * 8) >> 5] |
         0x80000000U >> ((byte)*(uint *)(&DAT_018ab9ac + *(int *)(param_1 + 8) * 8) & 0x1f);
    return 1;
  }
  FUN_00dd5650(&DAT_016ab358);
  return 0;
}

