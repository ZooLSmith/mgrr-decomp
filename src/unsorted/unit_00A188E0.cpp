// src/unsorted/unit_00A188E0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A188E0..00A18A00, 4 functions

#include "mgrr.h"

// 00A188E0  FUN_00a188e0  size=76  [run]
void __thiscall FUN_00a188e0(int param_1,int param_2)

{
  int iVar1;
  
  FUN_00a135c0(param_2);
  iVar1 = *(int *)(param_2 + 0x1c);
  if ((*(uint *)(param_1 + 0x364) & 0x10000) != 0) {
    FUN_00a0c350();
    FUN_00a15bc0(iVar1,iVar1 + 0x350);
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) & 0xfffeffff;
  }
  return;
}

// 00A18940  FUN_00a18940  size=63  [run]
undefined4 FUN_00a18940(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_00a04f60();
  iVar1 = FUN_00a15f50(param_1,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_00dd7240();
  DAT_01b7b398 = 0;
  DAT_01b7b394 = 0;
  DAT_01b7b390 = 0;
  return 1;
}

// 00A18980  FUN_00a18980  size=76  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a18980(void)

{
  if ((DAT_0189ef28 != 0) && (DAT_0189ef30 != 0)) {
    FUN_00dd3d90(DAT_0189ef28,0);
  }
  _DAT_0189ef18 = 0;
  _DAT_0189ef1c = 0;
  _DAT_0189ef20 = 0;
  DAT_0189ef30 = 0;
  DAT_0189ef28 = 0;
  DAT_0189ef2c = 0;
  FUN_00dd7270();
  return;
}

// 00A18A00  FUN_00a18a00  size=57  [run]
void __fastcall FUN_00a18a00(int param_1)

{
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  if ((*(int *)(param_1 + 0x18) != 0) && (*(int *)(param_1 + 0x20) != 0)) {
    FUN_00dd3d90(*(int *)(param_1 + 0x18),0);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}

