// src/unsorted/unit_009D8550.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009D8550..009D85B0, 2 functions

#include "mgrr.h"

// 009D8550  FUN_009d8550  size=82  [run]
void __fastcall FUN_009d8550(int param_1)

{
  float fVar1;
  
  if (0.0 < *(float *)(param_1 + 0x490)) {
    fVar1 = *(float *)(param_1 + 0x490) - *(float *)(param_1 + 0x494);
    *(float *)(param_1 + 0x490) = fVar1;
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      if (*(int *)(param_1 + 0x484) == 0) {
        *(float *)(param_1 + 0x100) = fVar1;
        return;
      }
      if (*(int *)(param_1 + 0x484) != 1) {
        return;
      }
      *(float *)(param_1 + 0x104) = fVar1;
      return;
    }
  }
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x80000000;
  return;
}

// 009D85B0  FUN_009d85b0  size=286  [run]
void __thiscall FUN_009d85b0(int param_1,int param_2)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_2 + 0x18);
  if (*(int *)(param_1 + 0x49c) != 0) {
    *(undefined4 *)(param_1 + 900) = *(undefined4 *)(iVar5 + 0x10);
    *(undefined4 *)(param_1 + 0x388) = *(undefined4 *)(iVar5 + 0x14);
    *(undefined4 *)(param_1 + 0x38c) = *(undefined4 *)(iVar5 + 0x18);
    uVar1 = *(undefined4 *)(iVar5 + 0x1c);
    *(undefined4 *)(param_1 + 0x49c) = 0;
    *(undefined4 *)(param_1 + 0x390) = uVar1;
  }
  if (*(int *)(param_1 + 900) == 1) {
    *(undefined4 *)(param_1 + 900) = 0;
    *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_1 + 0x388);
    *(undefined4 *)(param_1 + 0x184) = *(undefined4 *)(param_1 + 0x38c);
    *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_1 + 0x390);
    if (*(int *)(param_1 + 0x480) == 0) {
      *(undefined4 *)(param_1 + 400) = *(undefined4 *)(param_1 + 0x180);
      *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(param_1 + 0x184);
      *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(param_1 + 0x188);
      *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(param_1 + 0x18c);
      FUN_00efbd40(param_2);
      FUN_009cfdd0();
    }
    if (iVar5 == 0) {
      fVar2 = *(float *)(param_1 + 0x154);
      fVar3 = *(float *)(param_1 + 0x150);
      fVar4 = *(float *)(param_1 + 0x158);
    }
    else {
      fVar2 = *(float *)(iVar5 + 0x44);
      fVar3 = *(float *)(iVar5 + 0x40);
      fVar4 = *(float *)(iVar5 + 0x48);
    }
    *(undefined4 *)(param_1 + 0x480) = 1;
    *(float *)(param_1 + 0x494) = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
    if (*(float *)(param_1 + 0x494) <= 0.0) {
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x80000000;
    }
  }
  return;
}

