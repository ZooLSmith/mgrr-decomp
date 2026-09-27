// src/managers/triggermanager/conditions/TrgCondSeq.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C78FA0..00C9C500, 2 functions

#include "mgrr.h"

// 00C78FA0  Trigger::Cond::SEQ  size=95  [class]
undefined4 __fastcall Trigger::Cond::SEQ(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (0 < *(int *)(param_1 + 0x8c)) {
    if (*(int *)(param_1 + 0x10) == 0) {
      FUN_00dd5650(&DAT_016a8b24,1);
      return 0;
    }
    iVar1 = (**(code **)(**(int **)(param_1 + 0x10) + 0xc))();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_016a8af4,*(int *)(param_1 + 0x88) + 1);
      return 0;
    }
  }
  return 1;
}

// 00C9C500  Trigger::Cond::SEQ_2  size=109  [class]
void __thiscall Trigger::Cond::SEQ_2(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  piVar4 = (int *)(param_2 + 8);
  *(int *)(param_1 + 4) = param_2;
  iVar1 = *piVar4;
  *(int *)(param_1 + 0x8c) = iVar1;
  if (iVar1 < 0x10) {
    iVar3 = 0;
    if (0 < iVar1) {
      piVar5 = (int *)(param_1 + 0x4c);
      do {
        piVar4 = piVar4 + 1;
        iVar1 = *piVar4;
        iVar2 = cCondPhaseJump::cCondPhaseJump(piVar4);
        piVar4 = (int *)((int)piVar4 + iVar1);
        piVar5[-0xf] = iVar2;
        *piVar5 = *piVar4;
        iVar3 = iVar3 + 1;
        piVar5 = piVar5 + 1;
      } while (iVar3 < *(int *)(param_1 + 0x8c));
    }
    return;
  }
  FUN_00dd5650(&DAT_016b1868);
  return;
}

