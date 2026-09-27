// src/unsorted/unit_00C4BA10.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C4BA10..00C4BBA0, 5 functions

#include "mgrr.h"

// 00C4BA10  FUN_00c4ba10  size=79  [run]
void __thiscall FUN_00c4ba10(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_1[2] <= param_1[3]) {
    *param_2 = *param_1;
    return;
  }
  iVar1 = param_1[3] * 8;
  iVar2 = param_1[1] + iVar1;
  if (iVar2 != 0) {
    FUN_00a7c940(param_3);
    *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  param_1[3] = param_1[3] + 1;
  *param_2 = param_1[1] + iVar1;
  return;
}

// 00C4BA60  FUN_00c4ba60  size=112  [run]
void __thiscall FUN_00c4ba60(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_3 - *(int *)(param_1 + 4) >> 3;
  iVar3 = iVar2;
  if (iVar2 < *(int *)(param_1 + 0xc) + -1) {
    do {
      iVar1 = *(int *)(param_1 + 4) + iVar3 * 8;
      FUN_00a7c960(iVar1 + 8);
      *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar1 + 0xc);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0xc) + -1);
  }
  iVar3 = *(int *)(param_1 + 0xc);
  iVar1 = *(int *)(param_1 + 4);
  FUN_00a7c950();
  *(undefined4 *)(iVar1 + iVar3 * 8 + -4) = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  *param_2 = *(int *)(param_1 + 4) + iVar2 * 8;
  return;
}

// 00C4BB00  FUN_00c4bb00  size=43  [run]
void __fastcall FUN_00c4bb00(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 4),0);
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

// 00C4BB50  FUN_00c4bb50  size=65  [run]
void __fastcall FUN_00c4bb50(undefined4 *param_1)

{
  if (param_1[1] != 0) {
    if (param_1[1] != 0) {
      FUN_00dd48d0(param_1[1],0);
      param_1[1] = 0;
    }
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = *param_1;
    param_1[5] = *param_1;
    param_1[6] = *param_1;
  }
  return;
}

// 00C4BBA0  FUN_00c4bba0  size=21  [run]
undefined4 * __fastcall FUN_00c4bba0(undefined4 *param_1)

{
  *param_1 = 0;
  Hw::cHeapFixed::cHeapFixed();
  return param_1;
}

