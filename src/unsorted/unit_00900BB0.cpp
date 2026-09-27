// src/unsorted/unit_00900BB0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00900BB0..00900CA0, 3 functions

#include "types.h"

// 00900BB0  FUN_00900bb0  size=17  [run]
undefined4 __fastcall FUN_00900bb0(int *param_1)

{
  undefined4 *puVar1;
  
  if ((*param_1 != 0) && (puVar1 = (undefined4 *)(*param_1 + 0x10), puVar1 != (undefined4 *)0x0)) {
    return *puVar1;
  }
  return 0;
}

// 00900BD0  FUN_00900bd0  size=107  [run]
void __fastcall FUN_00900bd0(int *param_1)

{
  int *piVar1;
  
  if (*param_1 != 0) {
    FUN_004066f0();
    FUN_01194450(*param_1);
    FUN_010060a0();
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
        return;
      }
    }
  }
  return;
}

// 00900CA0  FUN_00900ca0  size=330  [run]
void __fastcall FUN_00900ca0(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  FUN_004066f0();
  iVar1 = param_1[2];
  if ((iVar1 != 0) && (piVar4 = *(int **)(iVar1 + 4), piVar4 != piVar4 + *(int *)(iVar1 + 8))) {
    do {
      piVar2 = (int *)*piVar4;
      FUN_011a3130(piVar2);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(1);
      }
      piVar4 = piVar4 + 1;
    } while (piVar4 != (int *)(*(int *)(param_1[2] + 4) + *(int *)(param_1[2] + 8) * 4));
  }
  if ((undefined4 *)param_1[2] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[2])(1);
    param_1[2] = 0;
  }
  iVar1 = param_1[1];
  if ((iVar1 != 0) && (piVar4 = *(int **)(iVar1 + 4), piVar4 != piVar4 + *(int *)(iVar1 + 8))) {
    do {
      puVar3 = (undefined4 *)*piVar4;
      FUN_011a30c0(puVar3);
      if (puVar3 != (undefined4 *)0x0) {
        (**(code **)*puVar3)(1);
      }
      piVar4 = piVar4 + 1;
    } while (piVar4 != (int *)(*(int *)(param_1[1] + 4) + *(int *)(param_1[1] + 8) * 4));
  }
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
    param_1[1] = 0;
  }
  if (param_1[3] != 0) {
    if (*param_1 == 0) goto LAB_00900d9f;
    FUN_011a3130(param_1[3]);
    if ((int *)param_1[3] != (int *)0x0) {
      (**(code **)(*(int *)param_1[3] + 8))(1);
      param_1[3] = 0;
    }
  }
  if (*param_1 != 0) {
    (**(code **)(*DAT_01b35dd8 + 0x1c))(*param_1);
  }
LAB_00900d9f:
  *param_1 = 0;
  if (DAT_01885d68 != 1) {
    piVar4 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar4 = *piVar4 + -1;
    if (((*piVar4 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
      return;
    }
  }
  return;
}

