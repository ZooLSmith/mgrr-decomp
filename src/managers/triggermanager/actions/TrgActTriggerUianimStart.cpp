// src/managers/triggermanager/actions/TrgActTriggerUianimStart.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C805C0..00C805C0, 1 functions

#include "mgrr.h"

// 00C805C0  Trigger::Act::TRIGGER_UIANIM_START  size=47  [class]
undefined4 __fastcall Trigger::Act::TRIGGER_UIANIM_START(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016ab510);
    return 0;
  }
  FUN_00cad340(*(undefined4 *)(*(int *)(param_1 + 4) + 8));
  return 1;
}

