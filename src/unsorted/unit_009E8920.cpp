// src/unsorted/unit_009E8920.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009E8920..009E8920, 1 functions

#include "types.h"

// 009E8920  FUN_009e8920  size=926  [run]
undefined4 __fastcall FUN_009e8920(int param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  float *pfVar10;
  int iVar11;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_28;
  undefined1 local_20 [28];
  
  if (*(int *)(param_1 + 0x4cc) == 0) {
    local_70 = 0.0;
    local_6c = 0.0;
    local_68 = 0.0;
    local_64 = 0.0;
    iVar9 = FUN_009e28e0(&local_70);
    if (iVar9 == 0) {
      return 0;
    }
    fVar2 = *(float *)(param_1 + 0x4f4);
    *(undefined4 *)(param_1 + 0x4cc) = 1;
    fVar3 = local_68 * local_68 + local_70 * local_70 + local_6c * local_6c;
    if (fVar3 <= 0.0) {
      FUN_00dd5650(&DAT_0163d0ac);
      local_70 = 0.0;
      local_6c = 1.0;
      local_68 = 0.0;
    }
    else {
      FUN_00ddf460(&local_70,&local_70);
    }
    local_60 = *(float *)(param_1 + 400);
    local_5c = *(float *)(param_1 + 0x194);
    local_58 = *(float *)(param_1 + 0x198);
    local_54 = *(float *)(param_1 + 0x19c);
    local_28 = local_68 * fVar2;
    local_50 = local_70 * fVar2 + local_60;
    local_4c = local_6c * fVar2 + local_5c;
    local_48 = local_28 + local_58;
    local_44 = local_64 * fVar2 + local_54;
    *(float *)(param_1 + 0x4bc) = local_44;
    *(float *)(param_1 + 0x4b0) = local_50;
    *(float *)(param_1 + 0x4b4) = local_4c;
    *(float *)(param_1 + 0x4b8) = local_48;
    *(float *)(param_1 + 0x4c8) = *(float *)(param_1 + 0x4f4) / SQRT(fVar3);
    iVar9 = FUN_0090dc50(&local_40,local_20,0,&local_60,&local_50,0x1e,"esp102");
    if (iVar9 == 0) {
      *(float *)(param_1 + 0x4e4) = *(float *)(param_1 + 0x4c8) - 1.0;
    }
    else {
      fVar2 = SQRT((local_58 - local_38) * (local_58 - local_38) +
                   (local_5c - local_3c) * (local_5c - local_3c) +
                   (local_60 - local_40) * (local_60 - local_40));
      local_40 = *(float *)(param_1 + 400) - local_40;
      local_3c = *(float *)(param_1 + 0x194) - local_3c;
      local_38 = *(float *)(param_1 + 0x198) - local_38;
      fVar4 = *(float *)(param_1 + 400) - *(float *)(param_1 + 0x4b0);
      fVar5 = *(float *)(param_1 + 0x194) - *(float *)(param_1 + 0x4b4);
      fVar3 = *(float *)(param_1 + 0x198) - *(float *)(param_1 + 0x4b8);
      fVar3 = SQRT(local_3c * local_3c + local_40 * local_40 + local_38 * local_38) /
              SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
      if (1.0 < fVar3) {
        fVar3 = 1.0;
      }
      *(float *)(param_1 + 0x4e4) = (*(float *)(param_1 + 0x4c8) - 1.0) * fVar3;
    }
    fVar2 = fVar2 / (*(float *)(param_1 + 0x4f4) * 0.25) + 0.25;
    if (2.0 < fVar2) {
      fVar2 = 2.0;
    }
    iVar9 = 0;
    if (*(int *)(param_1 + 0x4c0) != -1 && -1 < *(int *)(param_1 + 0x4c0) + 1) {
      iVar11 = 0;
      do {
        pfVar1 = (float *)(*(int *)(param_1 + 0x4c4) + iVar11);
        pfVar10 = (float *)(*(int *)(param_1 + 0x4c4) + iVar11);
        iVar9 = iVar9 + 1;
        iVar11 = iVar11 + 0xc;
        *pfVar10 = *pfVar1 * fVar2;
        pfVar10[1] = pfVar10[1] * fVar2;
        pfVar10[2] = pfVar10[2] * fVar2;
      } while (iVar9 < *(int *)(param_1 + 0x4c0) + 1);
    }
  }
  iVar9 = *(int *)(param_1 + 0x50);
  if (iVar9 != 0) {
    fVar2 = *(float *)(iVar9 + 0x44);
    fVar3 = *(float *)(iVar9 + 0x48);
    fVar4 = *(float *)(iVar9 + 0x4c);
    fVar6 = *(float *)(iVar9 + 0x40) - *(float *)(param_1 + 0x4a0);
    fVar7 = fVar2 - *(float *)(param_1 + 0x4a4);
    fVar8 = fVar3 - *(float *)(param_1 + 0x4a8);
    fVar5 = *(float *)(param_1 + 0x4ac);
    *(float *)(param_1 + 0x4a0) = *(float *)(iVar9 + 0x40);
    *(float *)(param_1 + 0x4a4) = fVar2;
    *(float *)(param_1 + 0x4a8) = fVar3;
    *(float *)(param_1 + 0x4ac) = fVar4;
    if (fVar8 * fVar8 + fVar6 * fVar6 + fVar7 * fVar7 != 0.0) {
      *(float *)(param_1 + 0x150) = fVar6 * -1.0;
      *(float *)(param_1 + 0x154) = fVar7 * -1.0;
      *(float *)(param_1 + 0x158) = fVar8 * -1.0;
      *(float *)(param_1 + 0x15c) = (fVar4 - fVar5) * -1.0;
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x4000;
      return 1;
    }
  }
  return 1;
}

