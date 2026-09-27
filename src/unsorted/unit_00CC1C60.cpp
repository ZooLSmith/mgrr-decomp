// src/unsorted/unit_00CC1C60.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CC1C60..00CC1E10, 2 functions

#include "mgrr.h"

// 00CC1C60  FUN_00cc1c60  size=432  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00cc1c60(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  iVar4 = FUN_00f98a90();
  iVar1 = *(int *)(param_1 + 0x18);
  fVar2 = (float)iVar4 * 0.00078125 * 154.0;
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x9c) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0x9c) * 0x400 + 0x2a0 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    if (param_2 == 0) {
      if ((0.0 < *(float *)(iVar1 + 0xc0)) &&
         (fVar2 = *(float *)(iVar1 + 0xc0) - _DAT_018b68ac * fVar2, *(float *)(iVar1 + 0xc0) = fVar2
         , fVar2 < 0.0)) {
        *(undefined4 *)(iVar1 + 0xc0) = 0;
      }
    }
    else if ((*(float *)(iVar1 + 0xc0) < fVar2) &&
            (fVar3 = _DAT_018b68ac * fVar2 + *(float *)(iVar1 + 0xc0),
            *(float *)(iVar1 + 0xc0) = fVar3, fVar2 < fVar3)) {
      *(float *)(iVar1 + 0xc0) = fVar2;
    }
  }
  fVar3 = _DAT_018b68a8;
  fVar2 = _DAT_018b68a0;
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x98) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0x98) * 0x400 + 0x2a0 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    if (param_2 == 0) {
      if (_DAT_018b68a0 < *(float *)(iVar1 + 0xe4)) {
        fVar3 = _DAT_018b68a4 * _DAT_018b68a0 + *(float *)(iVar1 + 0xe4);
        *(float *)(iVar1 + 0xe4) = fVar3;
        if (fVar3 < fVar2) {
          *(float *)(iVar1 + 0xe4) = fVar2;
        }
        FUN_00cb2a90(*(undefined4 *)(param_1 + 0x98),*(undefined4 *)(iVar1 + 0xe4));
        return;
      }
    }
    else if (*(float *)(iVar1 + 0xe4) < _DAT_018b68a8) {
      fVar2 = _DAT_018b68a4 * _DAT_018b68a8 + *(float *)(iVar1 + 0xe4);
      *(float *)(iVar1 + 0xe4) = fVar2;
      if (fVar3 < fVar2) {
        *(float *)(iVar1 + 0xe4) = fVar3;
      }
      FUN_00cb2a90(*(undefined4 *)(param_1 + 0x98),*(undefined4 *)(iVar1 + 0xe4));
      return;
    }
  }
  return;
}

// 00CC1E10  FUN_00cc1e10  size=129  [run]
void __thiscall FUN_00cc1e10(int param_1,float *param_2,float *param_3)

{
  int iVar1;
  
  iVar1 = FUN_00f98a90();
  *(float *)(param_1 + 0xd0) = *param_2 / ((float)iVar1 * 0.00078125);
  iVar1 = FUN_00f98aa0();
  *(float *)(param_1 + 0xd4) = param_2[1] / ((float)iVar1 * 0.0013888889);
  iVar1 = FUN_00f98a90();
  *(float *)(param_1 + 0xe0) = *param_3 / ((float)iVar1 * 0.00078125);
  iVar1 = FUN_00f98aa0();
  *(float *)(param_1 + 0xe4) = param_3[1] / ((float)iVar1 * 0.0013888889);
  return;
}

