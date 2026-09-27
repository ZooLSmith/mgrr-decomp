// src/managers/triggermanager/actions/TrgActFade.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C97E10..00C97E10, 1 functions

#include "mgrr.h"

// 00C97E10  Trigger::Act::FADE  size=114  [class]
bool __fastcall Trigger::Act::FADE(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_24;
  int local_20;
  int local_10;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016b16b4);
    return false;
  }
  iVar2 = cFade::set(0,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc),
                     *(undefined4 *)(iVar1 + 0x10),1,0,0x68);
  if (iVar2 != 0) {
    local_24 = 0;
    local_20 = iVar1;
    local_10 = iVar2;
    FUN_00c95710(&local_24);
  }
  return iVar2 != 0;
}

