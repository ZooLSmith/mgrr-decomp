// src/unsorted/unit_00CD5DD0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CD5DD0..00CD5DD0, 1 functions

#include "types.h"

// 00CD5DD0  FUN_00cd5dd0  size=280  [run]
void __thiscall FUN_00cd5dd0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if ((param_2 != 4) && (*(int *)(param_1 + 0x60) != param_2)) {
    if (param_2 == 3) {
      FUN_00ccdf90(*(undefined4 *)(param_1 + 0x1c),1,3);
      FUN_00ccdf90(*(undefined4 *)(param_1 + 0x20),1,3);
      FUN_00ccdf90(*(undefined4 *)(param_1 + 0x24),1,3);
      FUN_00ccdf90(*(undefined4 *)(param_1 + 0x28),1,3);
      iVar3 = *(int *)(param_1 + 0x18);
      if (((iVar3 != 0) && (*(uint *)(param_1 + 0x2c) < *(uint *)(iVar3 + 0x80))) &&
         (iVar3 = *(uint *)(param_1 + 0x2c) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
        *(undefined4 *)(iVar3 + 0x3b0) = 1;
      }
      iVar3 = *(int *)(param_1 + 0x18);
      if (((iVar3 != 0) && (*(uint *)(param_1 + 0x30) < *(uint *)(iVar3 + 0x80))) &&
         (iVar3 = *(uint *)(param_1 + 0x30) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
        *(undefined4 *)(iVar3 + 0x3b0) = 1;
      }
    }
    iVar3 = *(int *)(param_1 + 0x18);
    iVar1 = *(int *)(&DAT_018b7170 + param_2 * 4);
    if (((iVar3 != 0) && (*(uint *)(param_1 + 0x34) < *(uint *)(iVar3 + 0x80))) &&
       (piVar2 = *(int **)(*(uint *)(param_1 + 0x34) * 0x400 + 0x3f0 + *(int *)(iVar3 + 0x7c)),
       piVar2 != (int *)0x0)) {
      iVar3 = (**(code **)(*piVar2 + 8))();
      if (iVar3 == 1) {
        piVar2[9] = iVar1;
      }
    }
    iVar3 = *(int *)(param_1 + 0x18);
    iVar1 = *(int *)(&DAT_018b7170 + param_2 * 4);
    if (((iVar3 != 0) && (*(uint *)(param_1 + 0x38) < *(uint *)(iVar3 + 0x80))) &&
       (piVar2 = *(int **)(*(uint *)(param_1 + 0x38) * 0x400 + 0x3f0 + *(int *)(iVar3 + 0x7c)),
       piVar2 != (int *)0x0)) {
      iVar3 = (**(code **)(*piVar2 + 8))();
      if (iVar3 == 1) {
        piVar2[9] = iVar1;
      }
    }
    *(int *)(param_1 + 0x60) = param_2;
  }
  return;
}

