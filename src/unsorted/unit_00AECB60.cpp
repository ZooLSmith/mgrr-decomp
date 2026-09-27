// src/unsorted/unit_00AECB60.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00AECB60..00AECF90, 2 functions

#include "mgrr.h"

// 00AECB60  FUN_00aecb60  size=544  [run]
void __fastcall FUN_00aecb60(int param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  undefined *puVar4;
  
  *(undefined4 *)(param_1 + 0x1cc0) = 1;
  *(undefined4 *)(param_1 + 0x1550) = 1;
  *(undefined4 *)(param_1 + 0x1554) = 1;
  *(undefined4 *)(param_1 + 0x154c) = 1;
  iVar2 = FUN_00a81330();
  if ((iVar2 != 0) && (piVar3 = (int *)FUN_00a7c8a0(), piVar3 != (int *)0x0)) {
    puVar4 = &DAT_01be9db8;
    (**(code **)(*piVar3 + 4))(&DAT_01be9db8);
    FUN_00dd6d80(puVar4);
  }
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    FUN_00aa4080(0xe1,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x920) = 0x43340000;
    *(undefined4 *)(param_1 + 0x924) = 0;
    FUN_00aa4080(0xd7,5,0x3e888889,0x3f800000,0x10,0,0x3f800000);
  case 1:
    fVar1 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x920) = fVar1;
    *(float *)(param_1 + 0x924) = *(float *)(param_1 + 0x924) + *(float *)(param_1 + 0x910);
    if (fVar1 < 0.0) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  case 2:
    FUN_00aa4080(0xe2,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x924) = 0;
    FUN_00a94bc0(5,0x3e888889);
  case 3:
    *(float *)(param_1 + 0x924) = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0x924);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_00a8caf0(0,0,0,0);
      *(undefined4 *)(param_1 + 0xdd8) = 0x42700000;
      iVar2 = FUN_00ac4780();
      if (iVar2 == 2) {
        *(undefined4 *)(param_1 + 0xdd8) = 0x41f00000;
      }
      iVar2 = FUN_00ac4780();
      if (2 < iVar2) {
        *(undefined4 *)(param_1 + 0xdd8) = 0x40c00000;
      }
    }
    if (30.0 < *(float *)(param_1 + 0x924)) {
      FUN_00ae93c0(1,1,1,1);
      return;
    }
  default:
    return;
  }
}

// 00AECF90  FUN_00aecf90  size=23  [run]
void __thiscall FUN_00aecf90(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x1c94) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x1c94) + 0xa60) = param_2;
  }
  return;
}

