// src/unsorted/unit_00A06F30.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A06F30..00A073F0, 12 functions

#include "types.h"

// 00A06F30  FUN_00a06f30  size=4  [run]
undefined4 __fastcall FUN_00a06f30(int param_1)

{
  return *(undefined4 *)(param_1 + 0x5c);
}

// 00A06F70  FUN_00a06f70  size=30  [run]
int __thiscall FUN_00a06f70(int param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x68))) {
    return param_2 * 0x50 + *(int *)(param_1 + 100);
  }
  return 0;
}

// 00A06FF0  FUN_00a06ff0  size=13  [run]
uint __fastcall FUN_00a06ff0(int param_1)

{
  return *(uint *)(*(int *)(param_1 + 0xf8) + 0x1c) & 0x30;
}

// 00A07000  FUN_00a07000  size=103  [run]
undefined4 __thiscall FUN_00a07000(int param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0xf4) != 0) {
    uVar2 = FUN_00a06ab0();
    return uVar2;
  }
  if (((-1 < param_3) && (param_3 < (*(int **)(param_1 + 0x3c))[1])) &&
     (puVar1 = (undefined4 *)(param_3 * 0xb0 + 0x98 + **(int **)(param_1 + 0x3c)),
     puVar1 != (undefined4 *)0x0)) {
    *param_2 = *puVar1;
    param_2[1] = puVar1[1];
    param_2[2] = puVar1[2];
    param_2[3] = puVar1[3];
    param_2[4] = puVar1[4];
    param_2[5] = puVar1[5];
    return 1;
  }
  return 0;
}

// 00A07070  FUN_00a07070  size=111  [run]
undefined4 __thiscall FUN_00a07070(int param_1,undefined4 *param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar2 = *(int *)(param_1 + 0xf4);
  if (iVar2 == 0) {
    puVar3 = (undefined4 *)(*(int *)(param_1 + 0x90) + param_3 * 0x50);
    for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
      *param_2 = *puVar3;
      puVar3 = puVar3 + 1;
      param_2 = param_2 + 1;
    }
    return 1;
  }
  if ((-1 < param_3) && (param_3 < *(int *)(iVar2 + 0x80))) {
    puVar1 = (undefined4 *)(param_3 * 0x50 + *(int *)(iVar2 + 0x7c));
    puVar3 = puVar1;
    puVar4 = param_2;
    for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    *(undefined1 *)(puVar1 + 0x11) = 0;
    *(undefined1 *)((int)param_2 + 0x45) = 1;
    return 1;
  }
  return 0;
}

// 00A070E0  FUN_00a070e0  size=74  [run]
undefined4 __thiscall FUN_00a070e0(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0xf4) != 0) {
    uVar2 = FUN_00a06b50();
    return uVar2;
  }
  iVar1 = *(int *)(param_1 + 0xa0) + param_3 * 0x14;
  *param_2 = *(undefined4 *)(*(int *)(param_1 + 0xa0) + param_3 * 0x14);
  param_2[1] = *(undefined4 *)(iVar1 + 4);
  param_2[2] = *(undefined4 *)(iVar1 + 8);
  param_2[3] = *(undefined4 *)(iVar1 + 0xc);
  param_2[4] = *(undefined4 *)(iVar1 + 0x10);
  return 1;
}

// 00A07130  FUN_00a07130  size=16  [run]
void __fastcall FUN_00a07130(int param_1)

{
  if (*(int *)(param_1 + 0xf4) != 0) {
    FUN_00a06c00();
    return;
  }
  return;
}

// 00A071E0  FUN_00a071e0  size=112  [run]
void __fastcall FUN_00a071e0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (*param_1 != 0) {
    FUN_00dd4940(*param_1);
  }
  if (param_1[1] != 0) {
    FUN_00dd4940(param_1[1]);
  }
  if (param_1[3] != 0) {
    iVar1 = 0;
    if (0 < param_1[4]) {
      iVar2 = 0;
      do {
        if (*(int *)(iVar2 + param_1[3]) != 0) {
          FUN_00dd4940(*(int *)(iVar2 + param_1[3]));
        }
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + 0xc;
      } while (iVar1 < param_1[4]);
    }
    FUN_00dd4940(param_1[3]);
  }
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

// 00A07310  FUN_00a07310  size=38  [run]
int __thiscall FUN_00a07310(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < param_1[2]) {
    piVar2 = (int *)(*param_1 + 0x20);
    do {
      if (*piVar2 == param_2) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 0xc;
    } while (iVar1 < param_1[2]);
  }
  return -1;
}

// 00A07340  FUN_00a07340  size=37  [run]
undefined4 __thiscall FUN_00a07340(int *param_1,int param_2)

{
  if (((*param_1 != 0) && (-1 < param_2)) && (param_2 < param_1[2])) {
    return *(undefined4 *)(*param_1 + 0x20 + param_2 * 0x30);
  }
  return 0xffffffff;
}

// 00A073C0  FUN_00a073c0  size=37  [run]
undefined4 __thiscall FUN_00a073c0(int *param_1,int param_2)

{
  if ((((*param_1 != 0) && (param_1[1] != 0)) && (-1 < param_2)) && (param_2 < param_1[2])) {
    return *(undefined4 *)(param_1[1] + param_2 * 4);
  }
  return 0xffffffff;
}

// 00A073F0  FUN_00a073f0  size=30  [run]
int __thiscall FUN_00a073f0(int param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x10))) {
    return *(int *)(param_1 + 0xc) + param_2 * 0xc;
  }
  return 0;
}

