// src/managers/triggermanager/actions/TrgActSceneMovie.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7FFF0..00C7FFF0, 1 functions

#include "mgrr.h"

// 00C7FFF0  Trigger::Act::SCENE_MOVIE  size=84  [class]
undefined4 __fastcall Trigger::Act::SCENE_MOVIE(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016ab1e0);
    return 0;
  }
  if ((DAT_018b9174 == 0x520) && (*(int *)(iVar1 + 8) == 0xf07)) {
    FUN_0093db80();
  }
  uVar2 = FUN_00a4ac40(*(undefined4 *)(iVar1 + 8),iVar1 + 0xc,*(undefined4 *)(iVar1 + 0x2c));
  return uVar2;
}

