// src/unsorted/unit_00ACDBE0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ACDBE0..00ACDC90, 2 functions

#include "mgrr.h"

// 00ACDBE0  FUN_00acdbe0  size=169  [run]
void __fastcall FUN_00acdbe0(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    *(undefined4 *)(param_1 + 0x4e4) = 1;
    FUN_00a8c480();
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  if (*(short *)(param_1 + 0x324) < 1) {
    FUN_00dd5650(&DAT_0164524c);
    fVar1 = 0.0;
  }
  else {
    fVar1 = *(float *)(*(int *)(param_1 + 800) + 0x1c);
  }
  fVar1 = fVar1 - 0.006666667;
  if (fVar1 < 0.0) {
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_009fdde0();
    fVar1 = 0.0;
  }
  iVar3 = 0;
  iVar2 = 0;
  if (0 < *(short *)(param_1 + 0x324)) {
    do {
      *(float *)(*(int *)(param_1 + 800) + 0x1c + iVar3) = fVar1;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x70;
    } while (iVar2 < *(short *)(param_1 + 0x324));
  }
  return;
}

// 00ACDC90  FUN_00acdc90  size=196  [run]
int * FUN_00acdc90(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined *puVar4;
  
  if (param_1 != 0) {
    iVar1 = FUN_00a82090(param_4,param_2,param_3);
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00a7c8a0();
      if (piVar2 != (int *)0x0) {
        puVar4 = &DAT_01be9ca0;
        (**(code **)(*piVar2 + 4))(&DAT_01be9ca0);
        iVar1 = FUN_00dd6d80(puVar4);
        if (iVar1 != 0) {
          uVar3 = FUN_00a7c7f0();
          FUN_00a7c940(uVar3);
          FUN_00a7c960(&param_1);
          FUN_00a7c8a0();
          uVar3 = FUN_009f8b40();
          FUN_009f8ae0(uVar3);
          uVar3 = FUN_00a7c8a0();
          FUN_009f8a10(uVar3);
          iVar1 = FUN_00a7c8a0();
          if (iVar1 != 0) {
            piVar2[0x210] = *(int *)(iVar1 + 0x840);
            piVar2[0x211] = *(int *)(iVar1 + 0x844);
          }
          return piVar2;
        }
      }
      return (int *)0x0;
    }
  }
  return (int *)0x0;
}

