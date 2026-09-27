// src/managers/triggermanager/actions/TrgActItemGet.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C80740..00C80740, 1 functions

#include "mgrr.h"

// 00C80740  Trigger::Act::ITEM_GET  size=45  [class]
undefined4 __fastcall Trigger::Act::ITEM_GET(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016ab5fc);
    return 0;
  }
  FUN_00953e30(*(undefined4 *)(*(int *)(param_1 + 4) + 8));
  return 1;
}

