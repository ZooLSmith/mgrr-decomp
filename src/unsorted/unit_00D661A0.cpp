// src/unsorted/unit_00D661A0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D661A0..00D662F0, 6 functions

#include "mgrr.h"

// 00D661A0  FUN_00d661a0  size=38  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00d661a0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    iVar1 = (**(code **)(_DAT_00000000 + 0x1c))(0);
    *param_1 = iVar1;
    return;
  }
  iVar1 = (**(code **)(**(int **)(iVar1 + -4) + 0x1c))(iVar1);
  *param_1 = iVar1;
  return;
}

// 00D661D0  FUN_00d661d0  size=74  [run]
void __fastcall FUN_00d661d0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0x1c))(0);
    while (iVar1 != 0) {
      iVar2 = (**(code **)(*(int *)(param_1 + 8) + 0x1c))(iVar1);
      FUN_00dd4920(iVar1);
      iVar1 = iVar2;
    }
  }
  Hw::cHeap::cHeap_3();
  return;
}

// 00D66220  FUN_00d66220  size=78  [run]
void __fastcall FUN_00d66220(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)(param_1 + 8);
  iVar2 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  if (iVar2 != 0) {
    iVar2 = (**(code **)(*piVar1 + 0x1c))(0);
    while (iVar2 != 0) {
      iVar3 = (**(code **)(*piVar1 + 0x1c))(iVar2);
      FUN_00dd4920(iVar2);
      iVar2 = iVar3;
    }
                    /* WARNING: Could not recover jumptable at 0x00d6626a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}

// 00D66270  FUN_00d66270  size=38  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00d66270(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    iVar1 = (**(code **)(_DAT_00000000 + 0x1c))(0);
    *param_1 = iVar1;
    return;
  }
  iVar1 = (**(code **)(**(int **)(iVar1 + -4) + 0x1c))(iVar1);
  *param_1 = iVar1;
  return;
}

// 00D662A0  FUN_00d662a0  size=74  [run]
void __fastcall FUN_00d662a0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*(int *)(param_1 + 8) + 0x1c))(0);
    while (iVar1 != 0) {
      iVar2 = (**(code **)(*(int *)(param_1 + 8) + 0x1c))(iVar1);
      FUN_00dd4920(iVar1);
      iVar1 = iVar2;
    }
  }
  Hw::cHeap::cHeap_3();
  return;
}

// 00D662F0  FUN_00d662f0  size=78  [run]
void __fastcall FUN_00d662f0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)(param_1 + 8);
  iVar2 = (**(code **)(*(int *)(param_1 + 8) + 0xc))();
  if (iVar2 != 0) {
    iVar2 = (**(code **)(*piVar1 + 0x1c))(0);
    while (iVar2 != 0) {
      iVar3 = (**(code **)(*piVar1 + 0x1c))(iVar2);
      FUN_00dd4920(iVar2);
      iVar2 = iVar3;
    }
                    /* WARNING: Could not recover jumptable at 0x00d6633a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}

