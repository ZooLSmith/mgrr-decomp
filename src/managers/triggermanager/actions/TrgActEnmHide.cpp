// src/managers/triggermanager/actions/TrgActEnmHide.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C811B0..00C811B0, 1 functions

#include "mgrr.h"

// 00C811B0  Trigger::Act::ENM_HIDE  size=51  [class]
undefined4 __fastcall Trigger::Act::ENM_HIDE(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016abc3c);
    return 0;
  }
  FUN_00c18a80(*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc));
  return 1;
}

