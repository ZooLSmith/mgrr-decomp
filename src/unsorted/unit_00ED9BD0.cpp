// src/unsorted/unit_00ED9BD0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ED9BD0..00ED9BD0, 1 functions

#include "mgrr.h"

// 00ED9BD0  FUN_00ed9bd0  size=1178  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00ed9bd0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  float *pfVar7;
  int iVar8;
  uint uVar9;
  float local_c;
  float local_8;
  float local_4;
  
  pfVar7 = (float *)FUN_00f99ca0();
  iVar4 = *(int *)(param_1 + 0x450);
  iVar8 = (iVar4 + -4) * *(int *)(param_1 + 0x454);
  fVar3 = (float)(iVar8 + 1);
  if (iVar8 + 1 < 0) {
    fVar3 = fVar3 + 4.2949673e+09;
  }
  fVar3 = *(float *)(param_1 + 0x474) / fVar3;
  fVar1 = *(float *)(param_1 + 0x478);
  if (*(int *)(param_1 + 0x480) == 1) {
    fVar2 = (float)iVar4;
    if (iVar4 < 0) {
      fVar2 = fVar2 + 4.2949673e+09;
    }
    if (*(float *)(param_1 + 0x460) - 1.0 < fVar2) {
      local_4 = *(float *)(param_1 + 0x460);
      if (local_4 < 3.0) {
        local_4 = 3.0;
      }
      uVar9 = 0;
      fVar3 = ((fVar2 - _DAT_018d6c64) / (_DAT_018d6c60 + local_4)) * fVar3;
      fVar2 = *(float *)(param_1 + 0x474) - 0.01;
      if (iVar8 == -2) {
        FUN_00f99d30();
        return;
      }
      pfVar7 = pfVar7 + 2;
      do {
        uVar5 = *(uint *)(param_1 + 0x38);
        local_8 = fVar1;
        local_4 = fVar1;
        if ((uVar5 & 0x40000) == 0) {
          if ((uVar5 & 0x80000) == 0) {
            local_4 = 0.0;
            local_c = (float)(int)uVar9;
            if ((int)uVar9 < 0) {
              local_c = local_c + 4.2949673e+09;
            }
          }
          else {
            local_8 = 0.0;
            local_c = (float)(int)uVar9;
            if ((int)uVar9 < 0) {
              local_c = local_c + 4.2949673e+09;
            }
          }
          local_c = local_c * fVar3;
          if (fVar2 < local_c) {
            local_c = fVar2;
          }
        }
        else {
          if ((uVar5 & 0x80000) == 0) {
            local_4 = 0.0;
            fVar6 = (float)(int)uVar9;
            if ((int)uVar9 < 0) {
              fVar6 = fVar6 + 4.2949673e+09;
            }
          }
          else {
            local_8 = 0.0;
            fVar6 = (float)(int)uVar9;
            if ((int)uVar9 < 0) {
              fVar6 = fVar6 + 4.2949673e+09;
            }
          }
          local_c = 1.0 - fVar6 * fVar3;
          if (local_c < 0.0) {
            local_c = 0.0;
          }
        }
        uVar9 = uVar9 + 1;
        *pfVar7 = local_8;
        pfVar7[1] = local_c;
        pfVar7[-2] = local_4;
        pfVar7[-1] = local_c;
        pfVar7 = pfVar7 + 4;
      } while (uVar9 < iVar8 + 2U);
      FUN_00f99d30();
      return;
    }
  }
  uVar9 = *(uint *)(param_1 + 0x38);
  if ((uVar9 & 0x40000) == 0) {
    fVar3 = 1.0 - fVar3;
    fVar2 = *(float *)(param_1 + 0x4a8) + fVar3;
    if ((uVar9 & 0x80000) == 0) {
      *pfVar7 = *(float *)(param_1 + 0x4ac);
      pfVar7[1] = fVar2;
      fVar2 = *(float *)(param_1 + 0x4a8);
      pfVar7[2] = fVar1 + *(float *)(param_1 + 0x4ac);
      pfVar7[3] = fVar3 + fVar2;
      fVar3 = *(float *)(param_1 + 0x4a8);
      pfVar7[4] = *(float *)(param_1 + 0x4ac);
      pfVar7[5] = fVar3 + 1.0;
      fVar3 = *(float *)(param_1 + 0x4a8) + 1.0;
      goto LAB_00ed9f44;
    }
    pfVar7[2] = -*(float *)(param_1 + 0x4ac);
    pfVar7[3] = fVar2;
    fVar2 = *(float *)(param_1 + 0x4a8);
    *pfVar7 = fVar1 - *(float *)(param_1 + 0x4ac);
    pfVar7[1] = fVar3 + fVar2;
    fVar3 = *(float *)(param_1 + 0x4a8);
    pfVar7[6] = -*(float *)(param_1 + 0x4ac);
    pfVar7[7] = fVar3 + 1.0;
    fVar3 = *(float *)(param_1 + 0x4a8) + 1.0;
  }
  else {
    fVar2 = fVar3 - *(float *)(param_1 + 0x4a8);
    if ((uVar9 & 0x80000) == 0) {
      *pfVar7 = *(float *)(param_1 + 0x4ac);
      pfVar7[1] = fVar2;
      fVar2 = *(float *)(param_1 + 0x4a8);
      pfVar7[2] = fVar1 + *(float *)(param_1 + 0x4ac);
      pfVar7[3] = fVar3 - fVar2;
      fVar3 = *(float *)(param_1 + 0x4a8);
      pfVar7[4] = *(float *)(param_1 + 0x4ac);
      pfVar7[5] = -fVar3;
      fVar3 = -*(float *)(param_1 + 0x4a8);
LAB_00ed9f44:
      pfVar7[6] = fVar1 + *(float *)(param_1 + 0x4ac);
      pfVar7[7] = fVar3;
      FUN_00f99d30();
      return;
    }
    pfVar7[2] = -*(float *)(param_1 + 0x4ac);
    pfVar7[3] = fVar2;
    fVar2 = *(float *)(param_1 + 0x4a8);
    *pfVar7 = fVar1 - *(float *)(param_1 + 0x4ac);
    pfVar7[1] = fVar3 - fVar2;
    fVar3 = *(float *)(param_1 + 0x4a8);
    pfVar7[6] = -*(float *)(param_1 + 0x4ac);
    pfVar7[7] = -fVar3;
    fVar3 = -*(float *)(param_1 + 0x4a8);
  }
  pfVar7[4] = fVar1 - *(float *)(param_1 + 0x4ac);
  pfVar7[5] = fVar3;
  FUN_00f99d30();
  return;
}

