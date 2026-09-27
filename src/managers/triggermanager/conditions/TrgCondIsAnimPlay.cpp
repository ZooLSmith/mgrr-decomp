// src/managers/triggermanager/conditions/TrgCondIsAnimPlay.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7D010..00C7D010, 1 functions

#include "mgrr.h"

// 00C7D010  Trigger::Cond::IS_ANIM_PLAY  size=33  [class]
void __thiscall Trigger::Cond::IS_ANIM_PLAY(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  if (param_2 == 0) {
    FUN_00dd5650(&DAT_016aa018);
    return;
  }
  *(int *)(param_1 + 0x10) = param_2;
  return;
}

