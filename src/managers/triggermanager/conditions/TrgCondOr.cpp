// src/managers/triggermanager/conditions/TrgCondOr.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C79670..00C9C650, 2 functions

#include "mgrr.h"

// 00C79670  Trigger::Cond::OR  size=98  [class]
undefined4 __fastcall Trigger::Cond::OR(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x88)) {
    piVar3 = (int *)(param_1 + 0x10);
    do {
      if (*piVar3 == 0) {
        FUN_00dd5650(&DAT_016a8cac,iVar2 + 1);
        return 0;
      }
      iVar1 = (**(code **)(*(int *)*piVar3 + 0xc))();
      iVar2 = iVar2 + 1;
      if (iVar1 == 0) {
        FUN_00dd5650(&DAT_016a8c80,iVar2);
        return 0;
      }
      piVar3 = piVar3 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x88));
  }
  return 1;
}

// 00C9C650  Trigger::Cond::OR_2  size=109  [class]
void __thiscall Trigger::Cond::OR_2(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  piVar4 = (int *)(param_2 + 8);
  *(int *)(param_1 + 4) = param_2;
  iVar1 = *piVar4;
  *(int *)(param_1 + 0x88) = iVar1;
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
      } while (iVar3 < *(int *)(param_1 + 0x88));
    }
    return;
  }
  FUN_00dd5650(&DAT_016b18f8);
  return;
}

