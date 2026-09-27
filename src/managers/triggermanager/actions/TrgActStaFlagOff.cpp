// src/managers/triggermanager/actions/TrgActStaFlagOff.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C80550..00C80550, 1 functions

#include "mgrr.h"

// 00C80550  Trigger::Act::STA_FLAG_OFF  size=97  [class]
undefined4 __fastcall Trigger::Act::STA_FLAG_OFF(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016ab4e0);
    return 0;
  }
  if (-1 < *(int *)(param_1 + 8)) {
    (&DAT_01bea060)[*(uint *)(&DAT_018abb5c + *(int *)(param_1 + 8) * 8) >> 5] =
         (&DAT_01bea060)[*(uint *)(&DAT_018abb5c + *(int *)(param_1 + 8) * 8) >> 5] &
         ~(0x80000000U >> ((byte)*(uint *)(&DAT_018abb5c + *(int *)(param_1 + 8) * 8) & 0x1f));
    return 1;
  }
  FUN_00dd5650(&DAT_016ab4b0);
  return 0;
}

