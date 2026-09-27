// src/managers/triggermanager/actions/TrgActAnim.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7FF20..00C7FF50, 2 functions

#include "mgrr.h"

// 00C7FF20  Trigger::Act::ANIM  size=47  [class]
undefined4 __fastcall Trigger::Act::ANIM(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016ab1b8);
    return 0;
  }
  FUN_00c434a0(*(undefined4 *)(*(int *)(param_1 + 4) + 8));
  return 1;
}

// 00C7FF50  Trigger::Act::ANIM_2  size=51  [class]
undefined4 __fastcall Trigger::Act::ANIM_2(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016ab1b8);
    return 0;
  }
  FUN_00945210(*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc));
  return 1;
}

