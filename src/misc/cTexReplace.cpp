// src/misc/cTexReplace.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00FCDE30..00FCDE30, 1 functions

#include "mgrr.h"

// 00FCDE30  cTexReplace::setRoomReplace  size=100  [class]
void __thiscall cTexReplace::setRoomReplace(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  
  if ((param_2 & 0x1f) == 0) {
    iVar1 = 0;
    piVar2 = (int *)(param_1 + 0x900);
    do {
      if (*piVar2 == -1) {
        *(uint *)((iVar1 + 0x48) * 0x20 + param_1) = (param_2 & 0x5fff0 | 0xa0000) >> 4;
        FUN_00fa25d0(param_3);
        return;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 8;
    } while (iVar1 < 8);
    FUN_00dd5650(&DAT_016f4378);
  }
  return;
}

