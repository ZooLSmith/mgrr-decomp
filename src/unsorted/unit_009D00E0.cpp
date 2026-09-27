// src/unsorted/unit_009D00E0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009D00E0..009D00E0, 1 functions

#include "types.h"

// 009D00E0  FUN_009d00e0  size=1039  [run]
/* WARNING: Removing unreachable block (ram,0x009d026b) */
/* WARNING: Removing unreachable block (ram,0x009d01f3) */
/* WARNING: Removing unreachable block (ram,0x009d022f) */

undefined4 __fastcall FUN_009d00e0(int param_1)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  float *pfVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int local_54;
  int local_50;
  int local_4c;
  
  *(int *)(param_1 + 0x4c0) = *(int *)(param_1 + 0x450) + -3;
  iVar12 = FUN_00dd29b0(*(int *)(param_1 + 0x450) * 0xc,4,0,0);
  *(int *)(param_1 + 0x4c4) = iVar12;
  if (iVar12 == 0) {
    return 0;
  }
  if (*(float *)(param_1 + 0x4f4) == 0.0) {
    *(undefined4 *)(param_1 + 0x4f4) = 0x42480000;
  }
  uVar17 = 0;
  if (*(int *)(param_1 + 0x450) != 0) {
    iVar12 = 0;
    do {
      *(undefined4 *)(iVar12 + *(int *)(param_1 + 0x4c4)) = 0;
      uVar17 = uVar17 + 1;
      *(undefined4 *)(*(int *)(param_1 + 0x4c4) + 4 + iVar12) = *(undefined4 *)(param_1 + 0x4d8);
      iVar12 = iVar12 + 0xc;
      *(undefined4 *)(*(int *)(param_1 + 0x4c4) + -4 + iVar12) = 0;
    } while (uVar17 < *(uint *)(param_1 + 0x450));
  }
  fVar5 = 0.0;
  fVar4 = 0.0;
  fVar3 = 0.0;
  uVar17 = 1;
  if (1 < *(int *)(param_1 + 0x450) - 1U) {
    iVar12 = 0xc;
    do {
      if ((*(uint *)(param_1 + 0x4f8) == 0) || (uVar17 % *(uint *)(param_1 + 0x4f8) == 0)) {
        uVar13 = *(int *)(param_1 + 0x114) * 0x19660d + 0x3c6ef35f;
        *(uint *)(param_1 + 0x114) = uVar13;
        uVar14 = *(int *)(param_1 + 0x114) * 0x19660d + 0x3c6ef35f;
        *(uint *)(param_1 + 0x114) = uVar14;
        fVar4 = (1.0 - (float)(uVar13 >> 8) * 5.960465e-08 * 2.0) * *(float *)(param_1 + 0x4d0) +
                fVar4;
        uVar13 = *(int *)(param_1 + 0x114) * 0x19660d + 0x3c6ef35f;
        *(uint *)(param_1 + 0x114) = uVar13;
        fVar5 = (1.0 - (float)(uVar14 >> 8) * 5.960465e-08 * 2.0) * *(float *)(param_1 + 0x4d4) +
                fVar5;
        pfVar15 = (float *)(*(int *)(param_1 + 0x4c4) + iVar12);
        fVar3 = (1.0 - (float)(uVar13 >> 8) * 5.960465e-08 * 2.0) * *(float *)(param_1 + 0x4d0) +
                fVar3;
        *pfVar15 = fVar4 + *pfVar15;
        pfVar15[1] = fVar5 + pfVar15[1];
        pfVar15[2] = fVar3 + pfVar15[2];
        pfVar15 = (float *)(*(int *)(param_1 + 0x4c4) + -0xc + iVar12);
        fVar4 = fVar4 * 0.5;
        fVar5 = fVar5 * 0.5;
        fVar3 = fVar3 * 0.5;
        *pfVar15 = *pfVar15 + fVar4;
        pfVar15[1] = pfVar15[1] + fVar5;
        pfVar15[2] = pfVar15[2] + fVar3;
        pfVar15 = (float *)(*(int *)(param_1 + 0x4c4) + 0xc + iVar12);
        *pfVar15 = *(float *)(*(int *)(param_1 + 0x4c4) + 0xc + iVar12) + fVar4;
        pfVar15[1] = pfVar15[1] + fVar5;
        pfVar15[2] = pfVar15[2] + fVar3;
      }
      uVar17 = uVar17 + 1;
      iVar12 = iVar12 + 0xc;
    } while (uVar17 < *(int *)(param_1 + 0x450) - 1U);
  }
  local_4c = 0;
  if (0 < *(int *)(param_1 + 0x4f0)) {
    do {
      if (1 < *(int *)(param_1 + 0x450) + -1) {
        iVar18 = 0xc;
        iVar12 = 0;
        do {
          local_50 = iVar12 + -1;
          if (local_50 < 0) {
            local_50 = 0;
          }
          local_54 = iVar12;
          if (iVar12 < 0) {
            local_54 = 0;
          }
          iVar16 = *(int *)(param_1 + 0x450) + -1;
          iVar20 = iVar12 + 2;
          if (iVar16 < iVar12 + 2) {
            iVar20 = iVar16;
          }
          iVar19 = iVar12 + 3;
          if (iVar16 < iVar12 + 3) {
            iVar19 = iVar16;
          }
          iVar11 = *(int *)(param_1 + 0x4c4);
          iVar16 = iVar11 + iVar19 * 0xc;
          fVar3 = *(float *)(iVar16 + 4);
          fVar4 = *(float *)(iVar16 + 8);
          pfVar15 = (float *)(iVar11 + iVar20 * 0xc);
          fVar5 = pfVar15[1];
          fVar6 = pfVar15[2];
          pfVar1 = (float *)(iVar11 + local_54 * 0xc);
          fVar7 = pfVar1[1];
          fVar8 = pfVar1[2];
          pfVar2 = (float *)(iVar11 + local_50 * 0xc);
          fVar9 = pfVar2[1];
          fVar10 = pfVar2[2];
          *(float *)(iVar18 + iVar11) =
               *(float *)(iVar18 + iVar11) + *pfVar1 * 0.5 + *pfVar2 * 0.25 + *pfVar15 * 0.5 +
               *(float *)(iVar11 + iVar19 * 0xc) * 0.25;
          *(float *)(iVar18 + 4 + iVar11) =
               *(float *)(iVar18 + 4 + iVar11) + fVar9 * 0.25 + fVar7 * 0.5 + fVar5 * 0.5 +
               fVar3 * 0.25;
          *(float *)(iVar18 + 8 + iVar11) =
               *(float *)(iVar18 + 8 + iVar11) + fVar10 * 0.25 + fVar8 * 0.5 + fVar6 * 0.5 +
               fVar4 * 0.25;
          pfVar15 = (float *)(*(int *)(param_1 + 0x4c4) + iVar18);
          *pfVar15 = *(float *)(*(int *)(param_1 + 0x4c4) + iVar18) * 0.4;
          iVar18 = iVar18 + 0xc;
          pfVar15[1] = pfVar15[1] * 0.4;
          pfVar15[2] = pfVar15[2] * 0.4;
          iVar20 = iVar12 + 2;
          iVar12 = iVar12 + 1;
        } while (iVar20 < *(int *)(param_1 + 0x450) + -1);
      }
      local_4c = local_4c + 1;
    } while (local_4c < *(int *)(param_1 + 0x4f0));
  }
  return 1;
}

