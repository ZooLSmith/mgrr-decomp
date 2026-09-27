// src/unsorted/unit_00A94360.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A94360..00A944D0, 5 functions

#include "types.h"

// 00A94360  FUN_00a94360  size=23  [run]
undefined4 __fastcall FUN_00a94360(int param_1)

{
  int iVar1;
  
  if ((*(int **)(param_1 + 0x7c4) != (int *)0x0) &&
     (iVar1 = **(int **)(param_1 + 0x7c4), iVar1 != 0)) {
    return *(undefined4 *)(iVar1 + 8);
  }
  return 0;
}

// 00A94380  FUN_00a94380  size=42  [run]
int __thiscall FUN_00a94380(int param_1,uint param_2)

{
  int iVar1;
  
  if (((*(int **)(param_1 + 0x7c4) != (int *)0x0) &&
      (iVar1 = **(int **)(param_1 + 0x7c4), iVar1 != 0)) && (param_2 < *(uint *)(iVar1 + 8))) {
    return param_2 * 0x50 + *(int *)(iVar1 + 4);
  }
  return 0;
}

// 00A943E0  FUN_00a943e0  size=65  [run]
int * __thiscall FUN_00a943e0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  if (((*(int **)(param_1 + 0x7c4) != (int *)0x0) &&
      (iVar1 = **(int **)(param_1 + 0x7c4), iVar1 != 0)) &&
     (piVar2 = *(int **)(iVar1 + 4), piVar2 != piVar2 + *(int *)(iVar1 + 8) * 0x14)) {
    piVar3 = piVar2 + *(int *)(iVar1 + 8) * 0x14;
    do {
      if (*piVar2 == param_2) {
        return piVar2;
      }
      piVar2 = piVar2 + 0x14;
    } while (piVar2 != piVar3);
  }
  return (int *)0x0;
}

// 00A94480  FUN_00a94480  size=76  [run]
undefined4 __thiscall FUN_00a94480(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  
  if (((*(int **)(param_1 + 0x7c4) != (int *)0x0) &&
      (iVar1 = **(int **)(param_1 + 0x7c4), iVar1 != 0)) &&
     (piVar2 = *(int **)(iVar1 + 4), piVar2 != piVar2 + *(int *)(iVar1 + 8) * 0x14)) {
    piVar4 = piVar2 + *(int *)(iVar1 + 8) * 0x14;
    do {
      if (*piVar2 == param_2) {
        uVar3 = FUN_00a81330();
        return uVar3;
      }
      piVar2 = piVar2 + 0x14;
    } while (piVar2 != piVar4);
  }
  return 0;
}

// 00A944D0  FUN_00a944d0  size=49  [run]
void __fastcall FUN_00a944d0(int param_1)

{
  if (*(int *)(param_1 + 0x7c4) != 0) {
    FUN_00a91a00();
  }
  if (*(int *)(param_1 + 0x7c4) != 0) {
    FUN_00dd4920(*(int *)(param_1 + 0x7c4));
    *(undefined4 *)(param_1 + 0x7c4) = 0;
  }
  return;
}

