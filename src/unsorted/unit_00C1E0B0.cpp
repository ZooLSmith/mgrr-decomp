// src/unsorted/unit_00C1E0B0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C1E0B0..00C1E410, 9 functions

#include "mgrr.h"

// 00C1E0B0  FUN_00c1e0b0  size=93  [run]
undefined4 __thiscall FUN_00c1e0b0(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 4);
  param_1[1] = iVar2;
  if (param_3 == 0) {
    if (((iVar2 < 0) || (DAT_01d64170 <= iVar2)) ||
       ((int *)(&DAT_01d61bf0 + iVar2 * 0x60) == (int *)0x0)) {
      return 0;
    }
    param_3 = *(int *)(&DAT_01d61bf0 + iVar2 * 0x60);
  }
  *param_1 = param_3;
  param_1[3] = *(int *)(param_2 + 8);
  param_1[2] = param_2 + 0xc;
  piVar1 = (int *)(param_2 + 0xc + param_1[3] * 4);
  iVar2 = *piVar1;
  param_1[4] = (int)(piVar1 + 1);
  param_1[5] = iVar2;
  return 1;
}

// 00C1E220  FUN_00c1e220  size=9  [run]
void __fastcall FUN_00c1e220(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}

// 00C1E230  FUN_00c1e230  size=1  [run]
void FUN_00c1e230(void)

{
  return;
}

// 00C1E240  FUN_00c1e240  size=50  [run]
undefined4 __fastcall FUN_00c1e240(uint *param_1)

{
  uint *puVar1;
  
  if ((*param_1 != 0) && (((byte)DAT_01bea060 & 0x10) == 0)) {
    puVar1 = &DAT_01d64178;
    do {
      param_1 = param_1 + 1;
      if ((*param_1 & *puVar1) != 0) {
        return 0;
      }
      puVar1 = puVar1 + 1;
    } while ((int)puVar1 < 0x1d64188);
  }
  return 1;
}

// 00C1E300  FUN_00c1e300  size=14  [run]
bool __fastcall FUN_00c1e300(int param_1)

{
  return (*(uint *)(param_1 + 8) & 4) != 0;
}

// 00C1E370  FUN_00c1e370  size=38  [run]
int __thiscall FUN_00c1e370(int param_1,byte param_2)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00C1E3A0  FUN_00c1e3a0  size=1  [run]
void FUN_00c1e3a0(void)

{
  return;
}

// 00C1E3C0  FUN_00c1e3c0  size=66  [run]
void FUN_00c1e3c0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (((param_1 != 0) && (*(int *)(param_1 + 0xc) != 0)) && ((*(uint *)(param_1 + 8) & 8) == 0)) {
    uVar4 = 0;
    uVar3 = 0;
    uVar2 = 0;
    if ((*(uint *)(param_1 + 8) & 4) != 0) {
      uVar1 = 4;
      FUN_00a7c8a0(4);
      FUN_00a8caf0(uVar1,uVar2,uVar3,uVar4);
      return;
    }
    uVar1 = 3;
    FUN_00a7c8a0(3,0,0,0);
    FUN_00a8caf0(uVar1,uVar2,uVar3,uVar4);
  }
  return;
}

// 00C1E410  FUN_00c1e410  size=68  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c1e410(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00dd3500(0x10,&DAT_01b7bd48);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = 0;
    puVar1[3] = param_1;
    puVar1[1] = param_2;
    return;
  }
  uRam0000000c = param_1;
  _DAT_00000004 = param_2;
  return;
}

