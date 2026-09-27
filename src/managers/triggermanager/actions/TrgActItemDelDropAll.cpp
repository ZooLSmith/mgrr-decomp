// src/managers/triggermanager/actions/TrgActItemDelDropAll.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C814D0..00C814D0, 1 functions

#include "mgrr.h"

// 00C814D0  Trigger::Act::ITEM_DEL_DROP_ALL  size=37  [class]
undefined4 __fastcall Trigger::Act::ITEM_DEL_DROP_ALL(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016abeb8);
    return 0;
  }
  FUN_00951930();
  return 1;
}

