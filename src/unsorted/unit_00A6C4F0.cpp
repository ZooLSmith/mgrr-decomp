// src/unsorted/unit_00A6C4F0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A6C4F0..00A6C680, 4 functions

#include "mgrr.h"

// 00A6C4F0  FUN_00a6c4f0  size=60  [run]
void __fastcall FUN_00a6c4f0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 00A6C580  FUN_00a6c580  size=106  [run]
int * __thiscall FUN_00a6c580(int *param_1,uint param_2)

{
  int iVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  iVar1 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = -0x80000000;
  param_1[4] = param_2;
  if (param_2 != 0) {
    pvVar2 = TlsGetValue(DAT_01f8fc4c);
    iVar1 = *(int *)((int)pvVar2 + 0xc);
    uVar3 = param_2 * 0x10 + 0x7f & 0xffffff80;
    if ((*(int *)((int)pvVar2 + 8) < (int)uVar3) || (*(uint *)((int)pvVar2 + 0x10) < iVar1 + uVar3))
    {
      iVar1 = FUN_0100b780(uVar3);
    }
    else {
      *(uint *)((int)pvVar2 + 0xc) = iVar1 + uVar3;
    }
  }
  param_1[2] = param_2 | 0x80000000;
  *param_1 = iVar1;
  param_1[3] = iVar1;
  return param_1;
}

// 00A6C5F0  FUN_00a6c5f0  size=141  [run]
void __fastcall FUN_00a6c5f0(int *param_1)

{
  int iVar1;
  int iVar2;
  LPVOID pvVar3;
  uint uVar4;
  
  iVar1 = param_1[3];
  if (iVar1 == *param_1) {
    param_1[1] = 0;
  }
  iVar2 = param_1[4];
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  uVar4 = iVar2 * 0x10 + 0x7fU & 0xffffff80;
  if (((*(int *)((int)pvVar3 + 8) < (int)uVar4) || (uVar4 + iVar1 != *(int *)((int)pvVar3 + 0xc)))
     || (*(int *)((int)pvVar3 + 0x14) == iVar1)) {
    FUN_0100b9b0(iVar1,uVar4);
  }
  else {
    *(int *)((int)pvVar3 + 0xc) = iVar1;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 00A6C680  FUN_00a6c680  size=158  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00a6c680(int *param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined4 uVar5;
  int unaff_EBP;
  
  if ((_DAT_01be9a08 & 1) == 0) {
    _DAT_01be9a08 = _DAT_01be9a08 | 1;
    DAT_01be9a04 = DAT_01884314;
    DAT_01884314 = DAT_01884314 + 1;
  }
  iVar1 = DAT_01be9a04;
  uVar4 = (**(code **)(*param_1 + 0x10))(param_2,DAT_01be9a04);
  if ((char)uVar4 == '\0') {
    return uVar4 & 0xffffff00;
  }
  cVar2 = (**(code **)(*param_1 + 0x10))(&DAT_01662d64,7);
  if (cVar2 == '\0') {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(*param_1 + 0x2c))(unaff_EBP + 0x14);
    (**(code **)(*param_1 + 0x14))(&DAT_01662d64,7);
  }
  uVar5 = (**(code **)(*param_1 + 0x14))(param_2,iVar1);
  return CONCAT31((int3)((uint)uVar5 >> 8),uVar3) & 0xffffff01;
}

