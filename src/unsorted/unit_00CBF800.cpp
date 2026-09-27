// src/unsorted/unit_00CBF800.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CBF800..00CBFA60, 4 functions

#include "types.h"

// 00CBF800  FUN_00cbf800  size=156  [run]
void FUN_00cbf800(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  FUN_00a7c7f0();
  iVar2 = FUN_00a81330();
  if (((iVar2 != 0) && (iVar3 = FUN_00a7c800(), iVar3 != 0)) &&
     (iVar3 = FUN_00a7c800(), (*(byte *)(iVar3 + 0x4c0) & 1) != 0)) {
    uVar4 = 0;
    uVar5 = 0xffffffff;
    do {
      if ((&DAT_01dbf8f0)[uVar4] == 0) {
        if (uVar5 == 0xffffffff) {
          uVar5 = uVar4;
        }
      }
      else {
        uVar6 = uVar4;
        if ((&DAT_01dbf8f0)[uVar4] == iVar2) break;
      }
      uVar6 = uVar5;
      uVar4 = uVar4 + 1;
      uVar5 = uVar6;
    } while (uVar4 < 0x14);
    if (uVar6 != 0xffffffff) {
      (&DAT_01dbf8f0)[uVar6] = iVar2;
      (&DAT_01dc4ee0)[uVar6 * 4] = *param_2;
      (&DAT_01dc4ee4)[uVar6 * 4] = param_2[1];
      (&DAT_01dc4ee8)[uVar6 * 4] = param_2[2];
      uVar1 = param_2[3];
      (&DAT_01dbf8a0)[uVar6] = 1;
      (&DAT_01dc4eec)[uVar6 * 4] = uVar1;
    }
  }
  return;
}

// 00CBF8A0  FUN_00cbf8a0  size=10  [run]
void FUN_00cbf8a0(undefined4 param_1)

{
  DAT_01dbf89c = param_1;
  return;
}

// 00CBF8B0  FUN_00cbf8b0  size=432  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00cbf8b0(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  iVar4 = FUN_00f98a90();
  iVar1 = *(int *)(param_1 + 0x18);
  fVar2 = (float)iVar4 * 0.00078125 * 154.0;
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0xd0) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0xd0) * 0x400 + 0x2a0 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    if (param_2 == 0) {
      if ((0.0 < *(float *)(iVar1 + 0xc0)) &&
         (fVar2 = *(float *)(iVar1 + 0xc0) - _DAT_018b67c0 * fVar2, *(float *)(iVar1 + 0xc0) = fVar2
         , fVar2 < 0.0)) {
        *(undefined4 *)(iVar1 + 0xc0) = 0;
      }
    }
    else if ((*(float *)(iVar1 + 0xc0) < fVar2) &&
            (fVar3 = _DAT_018b67c0 * fVar2 + *(float *)(iVar1 + 0xc0),
            *(float *)(iVar1 + 0xc0) = fVar3, fVar2 < fVar3)) {
      *(float *)(iVar1 + 0xc0) = fVar2;
    }
  }
  fVar3 = _DAT_018b67bc;
  fVar2 = _DAT_018b67b4;
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0xcc) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0xcc) * 0x400 + 0x2a0 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    if (param_2 == 0) {
      if (_DAT_018b67b4 < *(float *)(iVar1 + 0xe4)) {
        fVar3 = _DAT_018b67b8 * _DAT_018b67b4 + *(float *)(iVar1 + 0xe4);
        *(float *)(iVar1 + 0xe4) = fVar3;
        if (fVar3 < fVar2) {
          *(float *)(iVar1 + 0xe4) = fVar2;
        }
        FUN_00cb2a90(*(undefined4 *)(param_1 + 0xcc),*(undefined4 *)(iVar1 + 0xe4));
        return;
      }
    }
    else if (*(float *)(iVar1 + 0xe4) < _DAT_018b67bc) {
      fVar2 = _DAT_018b67b8 * _DAT_018b67bc + *(float *)(iVar1 + 0xe4);
      *(float *)(iVar1 + 0xe4) = fVar2;
      if (fVar3 < fVar2) {
        *(float *)(iVar1 + 0xe4) = fVar3;
      }
      FUN_00cb2a90(*(undefined4 *)(param_1 + 0xcc),*(undefined4 *)(iVar1 + 0xe4));
      return;
    }
  }
  return;
}

// 00CBFA60  FUN_00cbfa60  size=129  [run]
void __thiscall FUN_00cbfa60(int param_1,float *param_2,float *param_3)

{
  int iVar1;
  
  iVar1 = FUN_00f98a90();
  *(float *)(param_1 + 0x100) = *param_2 / ((float)iVar1 * 0.00078125);
  iVar1 = FUN_00f98aa0();
  *(float *)(param_1 + 0x104) = param_2[1] / ((float)iVar1 * 0.0013888889);
  iVar1 = FUN_00f98a90();
  *(float *)(param_1 + 0x110) = *param_3 / ((float)iVar1 * 0.00078125);
  iVar1 = FUN_00f98aa0();
  *(float *)(param_1 + 0x114) = param_3[1] / ((float)iVar1 * 0.0013888889);
  return;
}

