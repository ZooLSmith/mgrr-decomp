// src/managers/triggermanager/conditions/TrgCondGameFlag.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7B2A0..00C7B2A0, 1 functions

#include "mgrr.h"

// 00C7B2A0  Trigger::Cond::GAME_FLAG  size=64  [class]
bool __fastcall Trigger::Cond::GAME_FLAG(int param_1)

{
  if (-1 < *(int *)(param_1 + 0x10)) {
    return (0x80000000U >> ((byte)*(uint *)(&DAT_018ab9ac + *(int *)(param_1 + 0x10) * 8) & 0x1f) &
           (&DAT_01bea090)[*(uint *)(&DAT_018ab9ac + *(int *)(param_1 + 0x10) * 8) >> 5]) != 0;
  }
  FUN_00dd5650(&DAT_016a9438);
  return false;
}

