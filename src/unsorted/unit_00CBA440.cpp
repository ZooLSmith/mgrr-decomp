// src/unsorted/unit_00CBA440.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CBA440..00CBA930, 4 functions

#include "types.h"

// 00CBA440  FUN_00cba440  size=116  [run]
void __fastcall FUN_00cba440(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0xb0);
  }
  *(uint *)(param_1 + 0x1c) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0x100);
  }
  *(uint *)(param_1 + 0x20) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0x114);
  }
  *(uint *)(param_1 + 0x24) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0x128);
  }
  *(uint *)(param_1 + 0x28) = uVar2;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(iVar1 + 0x14c);
  }
  *(uint *)(param_1 + 0x2c) = uVar2;
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x1f8) = 1;
  }
  return;
}

// 00CBA4C0  FUN_00cba4c0  size=572  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00cba4c0(int param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int aiStack_60 [3];
  float local_54;
  undefined1 local_50 [76];
  
  aiStack_60[2] = FUN_00f98a90();
  local_54 = (float)aiStack_60[2] + 50.0;
  aiStack_60[2] = FUN_00f98aa0();
  if ((((*(float *)(param_1 + 0x80) < param_4) || (param_2 < 0.0)) || (local_54 < param_2)) ||
     ((param_3 < 0.0 || ((float)aiStack_60[2] + 50.0 < param_3)))) {
    if (*(int *)(param_1 + 0x6c) != 0) {
      *(undefined4 *)(param_1 + 0x3c) = 0;
    }
    fVar1 = *(float *)(param_1 + 0x3c) - _DAT_018b6514;
    *(float *)(param_1 + 0x3c) = fVar1;
    if (fVar1 < 0.0) {
      *(undefined4 *)(param_1 + 0x3c) = 0;
    }
    if (*(int *)(param_1 + 0x14) != 0) {
      *(uint *)(*(int *)(param_1 + 0x14) + 4) = (uint)(*(float *)(param_1 + 0x3c) != 0.0);
    }
  }
  else {
    param_4 = param_4 / *(float *)(param_1 + 0x80);
    if (1.0 < param_4) {
      param_4 = 1.0;
    }
    fVar1 = 1.2 - param_4 * 0.9;
    if (*(int *)(param_1 + 0x6c) != 0) {
      *(float *)(param_1 + 0x38) = fVar1;
    }
    fVar2 = _DAT_018b6514;
    if (*(float *)(param_1 + 0x38) <= fVar1) {
      if ((*(float *)(param_1 + 0x38) < fVar1) &&
         (fVar3 = *(float *)(param_1 + 0x38) + _DAT_018b6514, *(float *)(param_1 + 0x38) = fVar3,
         fVar1 < fVar3)) {
        *(float *)(param_1 + 0x38) = fVar1;
      }
    }
    else {
      fVar3 = *(float *)(param_1 + 0x38) - _DAT_018b6514;
      *(float *)(param_1 + 0x38) = fVar3;
      if (fVar3 < fVar1) {
        *(float *)(param_1 + 0x38) = fVar1;
      }
    }
    if (*(int *)(param_1 + 0x6c) != 0) {
      *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
    }
    fVar2 = fVar2 + *(float *)(param_1 + 0x3c);
    *(float *)(param_1 + 0x3c) = fVar2;
    if (1.0 < fVar2) {
      *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
    }
  }
  if (*(int *)(param_1 + 0x48) == 0) {
    fVar1 = *(float *)(param_1 + 0x40) + 0.2;
    *(float *)(param_1 + 0x40) = fVar1;
    if (1.0 < fVar1) {
      *(undefined4 *)(param_1 + 0x40) = 0x3f800000;
    }
  }
  else {
    fVar1 = *(float *)(param_1 + 0x40) - 0.2;
    *(float *)(param_1 + 0x40) = fVar1;
    if (fVar1 < 0.0) {
      *(undefined4 *)(param_1 + 0x40) = 0;
    }
  }
  D3DXMatrixScaling(local_50,*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x38),
                    *(undefined4 *)(param_1 + 0x38));
  if (*(int *)(param_1 + 0x18) != 0) {
    piVar5 = aiStack_60;
    piVar6 = (int *)(*(int *)(param_1 + 0x18) + 0x10);
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar6 = *piVar5;
      piVar5 = piVar5 + 1;
      piVar6 = piVar6 + 1;
    }
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    *(float *)(*(int *)(param_1 + 0x18) + 0x40) = param_2;
    *(float *)(*(int *)(param_1 + 0x18) + 0x44) = param_3;
    *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x48) = 0;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    *(float *)(*(int *)(param_1 + 0x18) + 0x5c) =
         *(float *)(param_1 + 0x40) * *(float *)(param_1 + 0x3c);
  }
  *(undefined4 *)(param_1 + 0x30) = 1;
  return;
}

// 00CBA780  FUN_00cba780  size=432  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00cba780(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  iVar4 = FUN_00f98a90();
  iVar1 = *(int *)(param_1 + 0x18);
  fVar2 = (float)iVar4 * 0.00078125 * 154.0;
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0xa8) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0xa8) * 0x400 + 0x2a0 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    if (param_2 == 0) {
      if ((0.0 < *(float *)(iVar1 + 0xc0)) &&
         (fVar2 = *(float *)(iVar1 + 0xc0) - _DAT_018b6524 * fVar2, *(float *)(iVar1 + 0xc0) = fVar2
         , fVar2 < 0.0)) {
        *(undefined4 *)(iVar1 + 0xc0) = 0;
      }
    }
    else if ((*(float *)(iVar1 + 0xc0) < fVar2) &&
            (fVar3 = _DAT_018b6524 * fVar2 + *(float *)(iVar1 + 0xc0),
            *(float *)(iVar1 + 0xc0) = fVar3, fVar2 < fVar3)) {
      *(float *)(iVar1 + 0xc0) = fVar2;
    }
  }
  fVar3 = _DAT_018b6520;
  fVar2 = _DAT_018b6518;
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0xa4) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0xa4) * 0x400 + 0x2a0 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    if (param_2 == 0) {
      if (_DAT_018b6518 < *(float *)(iVar1 + 0xe4)) {
        fVar3 = _DAT_018b651c * _DAT_018b6518 + *(float *)(iVar1 + 0xe4);
        *(float *)(iVar1 + 0xe4) = fVar3;
        if (fVar3 < fVar2) {
          *(float *)(iVar1 + 0xe4) = fVar2;
        }
        FUN_00cb2a90(*(undefined4 *)(param_1 + 0xa4),*(undefined4 *)(iVar1 + 0xe4));
        return;
      }
    }
    else if (*(float *)(iVar1 + 0xe4) < _DAT_018b6520) {
      fVar2 = _DAT_018b651c * _DAT_018b6520 + *(float *)(iVar1 + 0xe4);
      *(float *)(iVar1 + 0xe4) = fVar2;
      if (fVar3 < fVar2) {
        *(float *)(iVar1 + 0xe4) = fVar3;
      }
      FUN_00cb2a90(*(undefined4 *)(param_1 + 0xa4),*(undefined4 *)(iVar1 + 0xe4));
      return;
    }
  }
  return;
}

// 00CBA930  FUN_00cba930  size=129  [run]
void __thiscall FUN_00cba930(int param_1,float *param_2,float *param_3)

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

