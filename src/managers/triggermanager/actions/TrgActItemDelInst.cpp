// src/managers/triggermanager/actions/TrgActItemDelInst.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C814A0..00C814A0, 1 functions

#include "mgrr.h"

// 00C814A0  Trigger::Act::ITEM_DEL_INST  size=45  [class]
undefined4 __fastcall Trigger::Act::ITEM_DEL_INST(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016abe88);
    return 0;
  }
  FUN_0094e9e0(*(undefined4 *)(*(int *)(param_1 + 4) + 8));
  return 1;
}

