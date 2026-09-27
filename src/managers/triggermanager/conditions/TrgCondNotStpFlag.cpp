// src/managers/triggermanager/conditions/TrgCondNotStpFlag.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7CB00..00C7CB00, 1 functions

#include "mgrr.h"

// 00C7CB00  Trigger::Cond::NOT_STP_FLAG  size=67  [class]
bool __fastcall Trigger::Cond::NOT_STP_FLAG(int param_1)

{
  if (-1 < *(int *)(param_1 + 0x10)) {
    return (0x80000000U >> ((byte)*(uint *)(&DAT_018abc24 + *(int *)(param_1 + 0x10) * 8) & 0x1f) &
           (&DAT_01bea070)[*(uint *)(&DAT_018abc24 + *(int *)(param_1 + 0x10) * 8) >> 5]) == 0;
  }
  FUN_00dd5650(&DAT_016a9e54);
  return false;
}

