// src/managers/triggermanager/actions/TrgActEnmAppearResetPos.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C81570..00C815A0, 2 functions

#include "mgrr.h"

// 00C81570  Trigger::Act::ENM_APPEAR_RESET_POS  size=47  [class]
undefined4 __fastcall Trigger::Act::ENM_APPEAR_RESET_POS(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016abf20);
    return 0;
  }
  FUN_00c18b60(*(undefined4 *)(*(int *)(param_1 + 4) + 8));
  return 1;
}

// 00C815A0  Trigger::Act::ENM_APPEAR_RESET_POS_2  size=51  [class]
undefined4 __fastcall Trigger::Act::ENM_APPEAR_RESET_POS_2(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016abf20);
    return 0;
  }
  FUN_00c18b30(*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc));
  return 1;
}

