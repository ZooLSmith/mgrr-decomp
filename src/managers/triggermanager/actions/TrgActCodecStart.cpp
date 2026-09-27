// src/managers/triggermanager/actions/TrgActCodecStart.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C80200..00C80200, 1 functions

#include "mgrr.h"

// 00C80200  Trigger::Act::CODEC_START  size=77  [class]
undefined4 __fastcall Trigger::Act::CODEC_START(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016ab328);
    return 0;
  }
  iVar1 = *(int *)(param_1 + 4) + 8;
  iVar2 = FUN_0093b4a0(iVar1,0,0);
  if (iVar2 == 0) {
    FUN_00dd5650(&DAT_016ab2e0,iVar1);
    return 0;
  }
  return 1;
}

