// src/managers/triggermanager/actions/TrgActTriggerSetUistartAnimNone.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C806C0..00C806C0, 1 functions

#include "mgrr.h"

// 00C806C0  Trigger::Act::TRIGGER_SET_UISTART_ANIM_NONE  size=47  [class]
undefined4 __fastcall Trigger::Act::TRIGGER_SET_UISTART_ANIM_NONE(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016ab590);
    return 0;
  }
  FUN_00cad360(*(undefined4 *)(*(int *)(param_1 + 4) + 8));
  return 1;
}

