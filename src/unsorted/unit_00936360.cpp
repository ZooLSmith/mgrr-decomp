// src/unsorted/unit_00936360.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00936360..009366D0, 7 functions

#include "types.h"

// 00936360  FUN_00936360  size=89  [run]
void __thiscall FUN_00936360(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    if (*(int *)(param_1 + uVar3 * 4) != 0) {
      iVar2 = FUN_00a7c800();
      iVar2 = FUN_00fdbbd0(iVar2 + 0x870,param_3);
      if (iVar2 != 0) {
        if (*(int *)(param_2 + 8) <= *(int *)(param_2 + 0xc)) {
          return;
        }
        puVar1 = (undefined4 *)(*(int *)(param_2 + 4) + *(int *)(param_2 + 0xc) * 4);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = *(undefined4 *)(param_1 + uVar3 * 4);
        }
        *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
      }
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x200);
  return;
}

// 009363C0  FUN_009363c0  size=184  [run]
void __thiscall FUN_009363c0(int *param_1,undefined4 param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  char local_100 [256];
  
  bVar2 = false;
  iVar3 = 0;
  do {
    if (iVar3 == 0) {
      if (param_1[0x12] == 1) {
        iVar1 = FUN_00cc9f20(0);
        if (iVar1 != 0) {
          *param_1 = iVar1;
          param_1[6] = iVar1;
          param_1[0xc] = iVar1 + 0x10;
        }
      }
    }
    else if (((iVar3 == 1) || (iVar3 == 2)) && (param_1[0x12] == 0)) {
      iVar1 = FUN_00cc9f20(iVar3);
      if (iVar1 != 0) {
        param_1[iVar3] = iVar1;
        param_1[iVar3 + 6] = iVar1;
        param_1[iVar3 + 0xc] = iVar1 + 0x10;
        bVar2 = true;
      }
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 6);
  if (!bVar2) {
    _sprintf_s(local_100,0x100,".rad",param_2);
    iVar3 = FUN_00de4550(local_100,0);
    *param_1 = iVar3;
    param_1[6] = iVar3;
    param_1[0xc] = iVar3 + 0x10;
  }
  return;
}

// 009364D0  FUN_009364d0  size=38  [run]
void __fastcall FUN_009364d0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  param_1[7] = 0;
  param_1[2] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[9] = 0;
  param_1[4] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[0xb] = 0;
  return;
}

// 00936500  FUN_00936500  size=54  [run]
void __fastcall FUN_00936500(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00cc9f20(0);
  if (iVar1 != 0) {
    *param_1 = iVar1;
    param_1[6] = iVar1;
    param_1[0xc] = iVar1 + 0x10;
    return;
  }
  *param_1 = 0;
  param_1[6] = 0;
  param_1[0xc] = 0;
  return;
}

// 00936540  FUN_00936540  size=11  [run]
void __fastcall FUN_00936540(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[6] = 0;
  param_1[0xc] = 0;
  return;
}

// 00936580  FUN_00936580  size=119  [run]
void __fastcall FUN_00936580(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    param_1[iVar2] = 0;
    param_1[iVar2 + 6] = 0;
    param_1[iVar2 + 0xc] = 0;
    if (iVar2 == 0) {
      if (param_1[0x12] == 1) {
        iVar1 = FUN_00cc9f20(0);
        if (iVar1 != 0) {
          *param_1 = iVar1;
          param_1[6] = iVar1;
          param_1[0xc] = iVar1 + 0x10;
        }
      }
    }
    else if (((iVar2 == 1) || (iVar2 == 2)) && (param_1[0x12] == 0)) {
      iVar1 = FUN_00cc9f20(iVar2);
      if (iVar1 != 0) {
        param_1[iVar2] = iVar1;
        param_1[iVar2 + 6] = iVar1;
        param_1[iVar2 + 0xc] = iVar1 + 0x10;
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 6);
  return;
}

// 009366D0  FUN_009366d0  size=14  [run]
undefined4 __fastcall FUN_009366d0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (*(int *)(param_1 + 4) != 0) {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + 4);
  }
  return uVar1;
}

