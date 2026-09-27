// src/unsorted/unit_004B72D0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 004B72D0..004B7400, 4 functions

#include "types.h"

// 004B72D0  FUN_004b72d0  size=50  [run]
int __fastcall FUN_004b72d0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = 0;
  piVar2 = (int *)(param_1 + 0xdec);
  do {
    if (piVar2[-9] != 0) {
      iVar1 = iVar1 + 1;
    }
    if ((iVar3 + 1 < 0xe) && (*piVar2 != 0)) {
      iVar1 = iVar1 + 1;
    }
    iVar3 = iVar3 + 2;
    piVar2 = piVar2 + 0x12;
  } while (iVar3 < 0xe);
  return iVar1;
}

// 004B7330  FUN_004b7330  size=32  [run]
void FUN_004b7330(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_00a7c7f0();
    FUN_00a7c960(uVar1);
  }
  return;
}

// 004B7370  FUN_004b7370  size=68  [run]
void __fastcall FUN_004b7370(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 0xfcc) = 1;
  iVar3 = 0xe;
  do {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00a7c8a0();
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0xf8))(0);
      }
    }
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}

// 004B7400  FUN_004b7400  size=60  [run]
void FUN_004b7400(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (param_1 != 0) {
    iVar1 = FUN_00a12210(param_2);
    iVar2 = FUN_00a12210(param_2);
    if ((iVar1 != 0) && (iVar2 != 0)) {
      puVar4 = (undefined4 *)(iVar1 + 0x10);
      puVar5 = (undefined4 *)(iVar2 + 0x10);
      for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
    }
  }
  return;
}

