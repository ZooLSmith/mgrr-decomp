// src/unsorted/unit_00F972F0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F972F0..00F974A0, 3 functions

#include "mgrr.h"

// 00F972F0  FUN_00f972f0  size=18  [run]
void __fastcall FUN_00f972f0(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}

// 00F97440  FUN_00f97440  size=94  [run]
undefined4 __thiscall FUN_00f97440(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 local_8;
  undefined4 uStack_4;
  
  piVar1 = *(int **)(param_1 + 0x20);
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x4c))(piVar1,0,&local_8,0,0x10);
    if (-1 < iVar2) {
      *param_2 = uStack_4;
      *param_3 = local_8;
      return 1;
    }
  }
  *param_2 = 0;
  *param_3 = 0;
  return 1;
}

// 00F974A0  FUN_00f974a0  size=97  [run]
undefined4 __thiscall FUN_00f974a0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 local_8;
  undefined4 uStack_4;
  
  piVar1 = *(int **)(param_1 + 0x20);
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x4c))(piVar1,0,&local_8,0,0x2000);
    if (-1 < iVar2) {
      *param_2 = uStack_4;
      *param_3 = local_8;
      return 1;
    }
  }
  *param_2 = 0;
  *param_3 = 0;
  return 1;
}

