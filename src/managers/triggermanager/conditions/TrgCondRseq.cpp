// src/managers/triggermanager/conditions/TrgCondRseq.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C9CB20..00C9CB20, 1 functions

#include "mgrr.h"

// 00C9CB20  Trigger::Cond::RSEQ  size=115  [class]
void __thiscall Trigger::Cond::RSEQ(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  *(undefined4 **)(param_1 + 4) = param_2;
  iVar1 = param_2[2];
  *(int *)(param_1 + 0x8c) = iVar1;
  if (iVar1 < 0x10) {
    piVar4 = param_2 + 3;
    iVar3 = 0;
    if (0 < iVar1) {
      puVar5 = (undefined4 *)(param_1 + 0x4c);
      do {
        iVar1 = *piVar4;
        uVar2 = cCondPhaseJump::cCondPhaseJump(piVar4);
        puVar5[-0xf] = uVar2;
        *puVar5 = *param_2;
        iVar3 = iVar3 + 1;
        puVar5 = puVar5 + 1;
        piVar4 = (int *)((int)piVar4 + iVar1 + 4);
      } while (iVar3 < *(int *)(param_1 + 0x8c));
    }
    return;
  }
  FUN_00dd5650(&DAT_016b1950);
  return;
}

