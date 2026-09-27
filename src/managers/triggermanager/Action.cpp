// src/managers/triggermanager/Action.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C9D090..00C9D090, 1 functions

#include "mgrr.h"

// 00C9D090  Trigger::Action::Array  size=94  [class]
void __thiscall Trigger::Action::Array(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  
  *(int *)(param_1 + 4) = param_2;
  iVar1 = *(int *)(param_2 + 8);
  *(int *)(param_1 + 0x44) = iVar1;
  if (iVar1 < 0x10) {
    piVar5 = (int *)(param_2 + 0xc);
    iVar3 = 0;
    if (0 < iVar1) {
      puVar4 = (undefined4 *)(param_1 + 8);
      do {
        iVar1 = *piVar5;
        uVar2 = cActCamera::cActCamera(piVar5);
        piVar5 = (int *)((int)piVar5 + iVar1);
        *puVar4 = uVar2;
        iVar3 = iVar3 + 1;
        puVar4 = puVar4 + 1;
      } while (iVar3 < *(int *)(param_1 + 0x44));
    }
    return;
  }
  FUN_00dd5650(&DAT_016b19e4);
  return;
}

