// src/unsorted/unit_00ED8FA0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ED8FA0..00ED8FA0, 1 functions

#include "types.h"

// 00ED8FA0  FUN_00ed8fa0  size=233  [run]
void __thiscall FUN_00ed8fa0(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x4c8) == 0) || (*(int *)(param_1 + 0x50) == 0)) {
    *param_2 = *(undefined4 *)(param_1 + 0x4b4);
    param_2[1] = *(undefined4 *)(param_1 + 0x4b8);
    param_2[2] = *(undefined4 *)(param_1 + 0x4bc);
    param_2[3] = 0x3f800000;
    return;
  }
  if (*(int *)(param_1 + 0x4c8) != 2) {
    D3DXVec3TransformNormal(param_2,param_1 + 0x4b4,*(int *)(param_1 + 0x50) + 0x10);
    return;
  }
  iVar1 = FUN_00a7c990(&DAT_01ee11f4);
  if (iVar1 == 0) {
    iVar1 = FUN_00a81330();
    if (iVar1 == 0) {
      return;
    }
    iVar1 = FUN_00a7c800();
    if (iVar1 != 0) {
      iVar1 = FUN_00a7c990(&DAT_01ee11f4);
      if (((iVar1 == 0) && (iVar1 = FUN_00a81330(), iVar1 != 0)) &&
         (iVar1 = FUN_00a7c800(), iVar1 != 0)) {
        iVar1 = FUN_00a12290(0xffffffff);
      }
      else {
        iVar1 = 0;
      }
      D3DXVec3TransformNormal(param_2,param_1 + 0x4b4,iVar1 + 0x10);
      return;
    }
    return;
  }
  return;
}

