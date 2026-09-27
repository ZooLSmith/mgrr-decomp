// src/managers/triggermanager/actions/TrgActItemOnOff.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C81680..00C81680, 1 functions

#include "mgrr.h"

// 00C81680  Trigger::Act::ITEM_ON_OFF  size=49  [class]
undefined4 __fastcall Trigger::Act::ITEM_ON_OFF(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016abfe0);
    return 0;
  }
  FUN_00956870(*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc));
  return 1;
}

