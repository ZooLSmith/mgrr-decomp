// src/managers/triggermanager/conditions/TrgCondNotGameFlag.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7B350..00C7C990, 2 functions

#include "mgrr.h"

// 00C7B350  Trigger::Cond::NOT_GAME_FLAG  size=67  [class]
bool __fastcall Trigger::Cond::NOT_GAME_FLAG(int param_1)

{
  if (-1 < *(int *)(param_1 + 0x10)) {
    return (0x80000000U >> ((byte)*(uint *)(&DAT_018ab9ac + *(int *)(param_1 + 0x10) * 8) & 0x1f) &
           (&DAT_01bea090)[*(uint *)(&DAT_018ab9ac + *(int *)(param_1 + 0x10) * 8) >> 5]) == 0;
  }
  FUN_00dd5650(&DAT_016a9490);
  return false;
}

// 00C7C990  Trigger::Cond::NOT_GAME_FLAG_2  size=67  [class]
bool __fastcall Trigger::Cond::NOT_GAME_FLAG_2(int param_1)

{
  if (-1 < *(int *)(param_1 + 0x10)) {
    return (0x80000000U >> ((byte)*(uint *)(&DAT_018abb5c + *(int *)(param_1 + 0x10) * 8) & 0x1f) &
           (&DAT_01bea060)[*(uint *)(&DAT_018abb5c + *(int *)(param_1 + 0x10) * 8) >> 5]) == 0;
  }
  FUN_00dd5650(&DAT_016a9490);
  return false;
}

