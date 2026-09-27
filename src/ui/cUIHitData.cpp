// src/ui/cUIHitData.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CFD4B0..00CFD4B0, 1 functions

#include "mgrr.h"

// 00CFD4B0  cUIHitData::HIT  size=243  [class]
undefined4 __thiscall cUIHitData::HIT(int param_1,int param_2)

{
  int *piVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 local_30;
  int local_28 [10];
  
  bVar2 = false;
  if (*(int *)(param_1 + 0x38) <= *(int *)(param_1 + 0x3c)) {
    FUN_00dd5650(&DAT_016b9514);
    return 0;
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  }
  piVar3 = *(int **)(param_1 + 0x34);
  piVar1 = piVar3 + *(int *)(param_1 + 0x3c) * 10;
  if (piVar3 != piVar1) {
    do {
      piVar5 = piVar3;
      piVar6 = local_28;
      for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar6 = *piVar5;
        piVar5 = piVar5 + 1;
        piVar6 = piVar6 + 1;
      }
      if (local_28[0] == param_2) {
        bVar2 = true;
      }
      piVar3 = piVar3 + 10;
    } while (piVar3 != piVar1);
    if (bVar2) {
      FUN_00dd5650(&DAT_016b94ec);
      local_30 = 0;
      goto LAB_00cfd589;
    }
  }
  if (*(int *)(param_1 + 0x3c) < *(int *)(param_1 + 0x38)) {
    puVar7 = (undefined4 *)(*(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x3c) * 0x28);
    if (puVar7 != (undefined4 *)0x0) {
      for (iVar4 = 10; register0x00000010 = (BADSPACEBASE *)((int)register0x00000010 + 4),
          iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar7 = *(undefined4 *)register0x00000010;
        puVar7 = puVar7 + 1;
      }
    }
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
  }
  local_30 = 1;
LAB_00cfd589:
  if (*(int *)(param_1 + 0x28) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  }
  return local_30;
}

