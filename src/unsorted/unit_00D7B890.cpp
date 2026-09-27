// src/unsorted/unit_00D7B890.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D7B890..00D7B8E0, 2 functions

#include "mgrr.h"

// 00D7B890  FUN_00d7b890  size=77  [run]
void __fastcall FUN_00d7b890(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x358) != 0) {
    FUN_00d7acc0();
  }
  uVar1 = (**(code **)*DAT_01dc52e4)();
  *(undefined4 *)(param_1 + 0x420) = 0;
  *(undefined4 *)(param_1 + 0x358) = uVar1;
  *(undefined4 *)(param_1 + 0x35c) = 1;
  if (*(int *)(param_1 + 0x37c) != 0) {
    FUN_00900a90(*(undefined4 *)(*(int *)(param_1 + 0x37c) + 0x44));
  }
  return;
}

// 00D7B8E0  FUN_00d7b8e0  size=147  [run]
undefined4 __fastcall FUN_00d7b8e0(int param_1)

{
  int iVar1;
  float fVar2;
  
  if (0.0 < *(float *)(param_1 + 0x420)) {
    fVar2 = *(float *)(param_1 + 0x420) - 0.016666668;
    *(float *)(param_1 + 0x420) = fVar2;
    if (fVar2 < 0.0 != (fVar2 == 0.0)) {
      FUN_00d7b0f0();
      *(undefined4 *)(param_1 + 0x420) = 0;
    }
  }
  if ((*(int *)(param_1 + 0x3f4) != 0) && ((*(byte *)(*(int *)(param_1 + 0x3f4) + 0x28) & 2) != 0))
  {
    *(undefined4 *)(param_1 + 0x3f4) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x360);
  if (iVar1 < 4) {
    if (0 < iVar1) {
      *(int *)(param_1 + 0x360) = iVar1 + 1;
    }
    if (*(int *)(param_1 + 0x360) == 2) {
      FUN_00d7acc0();
    }
    return 1;
  }
  FUN_00d7b080();
  return 0;
}

