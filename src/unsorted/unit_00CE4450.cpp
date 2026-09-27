// src/unsorted/unit_00CE4450.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CE4450..00CE4450, 1 functions

#include "mgrr.h"

// 00CE4450  FUN_00ce4450  size=1704  [run]
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __thiscall FUN_00ce4450(int param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  undefined2 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  byte *pbVar9;
  int iVar10;
  uint uVar11;
  float *pfVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int *piVar18;
  int iVar19;
  float10 extraout_ST0;
  int local_183c;
  int local_1834;
  byte *local_1830;
  float local_1824;
  int local_1810 [5];
  float local_17fc [4];
  undefined4 local_17ec;
  undefined4 local_17d8 [631];
  undefined4 local_dfc;
  undefined4 local_df8 [8];
  undefined4 local_dd8 [881];
  undefined4 uStack_14;
  
  uStack_14 = 0xce4460;
  local_183c = 0;
  iVar15 = 0x1f;
  puVar14 = &local_dfc;
  do {
    puVar14[-5] = 0;
    puVar14[-1] = 0;
    puVar14[0x14] = 0;
    *puVar14 = 0;
    iVar15 = iVar15 + -1;
    puVar14[1] = 0;
    puVar14[3] = 0;
    puVar14[4] = 0;
    puVar14[7] = 0;
    puVar14[8] = 0;
    puVar14[9] = 0;
    puVar14[10] = 0;
    puVar14[2] = 0x3f800000;
    puVar14[0xc] = 0x3f800000;
    puVar14[0xd] = 0x3f800000;
    puVar14[0xe] = 0x3f800000;
    puVar14[0xf] = 0x3f800000;
    puVar14[0x10] = 0x3f800000;
    puVar14[0x11] = 0x3f800000;
    puVar14[0x12] = 0x3f800000;
    puVar14[0x13] = 0x3f800000;
    puVar14 = puVar14 + 0x1c;
  } while (-1 < iVar15);
  *(undefined4 *)(param_1 + 0x30) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x34) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  if ((*(int *)(param_1 + 4) != 0) && (local_1830 = (byte *)*param_2, local_1830 != (byte *)0x0)) {
    pbVar9 = local_1830;
    do {
      bVar3 = *pbVar9;
      pbVar9 = pbVar9 + 1;
    } while (bVar3 != 0);
    iVar15 = (int)pbVar9 - (int)(local_1830 + 1);
    if ((0 < iVar15) && (iVar10 = FUN_00ccd800(param_2[1]), iVar10 != 0)) {
      local_1824 = (float)extraout_ST0;
      iVar5 = param_2[0x3ae];
      fVar1 = (float)extraout_ST0;
      iVar17 = iVar15;
      if (0 < iVar5) {
        iVar17 = param_2[0x3b2];
      }
      local_1834 = 0;
      if (0 < iVar17) {
        piVar18 = local_1810;
        do {
          uVar11 = 0;
          if (local_1830 != (byte *)0x0) {
            if (*local_1830 == 1) {
              uVar11 = 0x152;
            }
            else {
              uVar11 = (uint)*local_1830;
            }
          }
          if (0 < iVar5) {
            if ((int)param_2[0x3c4] <= param_2[0x3b3] - (local_1834 + 1) * param_2[0x3c3]) {
              uVar4 = *(undefined2 *)(iVar10 + 0x10);
              goto LAB_00ce4651;
            }
            iVar16 = iVar15;
            if (iVar15 < 1) {
              iVar16 = 1;
            }
            iVar19 = param_2[0x3b3] + local_1834;
            iVar19 = iVar19 - (iVar19 / iVar16) * iVar16;
            pbVar9 = local_1830;
            do {
              if (pbVar9 != (byte *)0x0) {
                if (*pbVar9 == 0) {
                  pbVar9 = (byte *)0x0;
                }
                else if (*pbVar9 == 1) {
                  pbVar9 = pbVar9 + 2;
                }
                else {
                  pbVar9 = pbVar9 + 1;
                }
              }
              if (((int)(char)*pbVar9 & 0xffff7fffU) == 0) {
                pbVar9 = (byte *)*param_2;
              }
              iVar19 = iVar19 + -1;
            } while ((0 < iVar19) || (((int)(char)*pbVar9 & 0x8000U) != 0));
            FUN_00ccd660(piVar18,*(undefined2 *)(iVar10 + 0x10),(short)(char)*pbVar9);
          }
          else {
            uVar4 = *(undefined2 *)(iVar10 + 0x10);
LAB_00ce4651:
            FUN_00ccd660(piVar18,uVar4,uVar11);
          }
          fVar2 = (float)piVar18[8];
          if (*piVar18 != -1) {
            piVar18[4] = (int)local_1824;
            piVar18[5] = 0;
            local_1824 = (float)piVar18[7] + (float)piVar18[2] + local_1824;
            if (local_1834 < iVar17 + -1) {
              local_1824 = local_1824 + (float)param_2[3];
            }
            local_183c = local_183c + 1;
            piVar18 = piVar18 + 0x14;
          }
          fVar8 = 0.0;
          if (local_1830 == (byte *)0x0) {
            pbVar9 = (byte *)0x0;
          }
          else if (*local_1830 == 0) {
            pbVar9 = (byte *)0x0;
          }
          else {
            pbVar9 = local_1830 + 2;
            if (*local_1830 != 1) {
              pbVar9 = local_1830 + 1;
            }
          }
        } while ((pbVar9 != (byte *)0x0) &&
                (local_1834 = local_1834 + 1, local_1830 = pbVar9, local_1834 < iVar17));
        if (fVar2 < 0.0 != (fVar2 == 0.0)) {
          return;
        }
        param_2[0x3a9] = 1;
        param_2[0x399] = local_1824;
        param_2[0x11] = local_1824;
        param_2[0x12] = fVar2;
        param_2[0x3aa] = param_2[3];
        param_2[0x3ab] = param_2[4];
        *(float *)(param_1 + 0x38) = local_1824;
        *(float *)(param_1 + 0x3c) = fVar2;
        iVar15 = param_2[0xf];
        if (iVar15 != 0) {
          if (iVar15 == 1) {
            fVar8 = local_1824 * -0.5;
          }
          else {
            fVar8 = local_1824;
            if (iVar15 == 2) {
              fVar8 = -local_1824;
            }
          }
        }
        iVar15 = param_2[0x10];
        if (iVar15 == 0) {
          fVar1 = 0.0;
        }
        else if (iVar15 == 1) {
          fVar1 = fVar2 * -0.5;
        }
        else if (iVar15 == 2) {
          fVar1 = -fVar2;
        }
        iVar15 = 0;
        if (3 < local_183c) {
          iVar10 = (local_183c - 4U >> 2) + 1;
          iVar15 = iVar10 * 4;
          pfVar12 = local_17fc;
          do {
            iVar10 = iVar10 + -1;
            pfVar12[-1] = pfVar12[-1] + fVar8;
            *pfVar12 = *pfVar12 + fVar1;
            pfVar12[0x13] = pfVar12[0x13] + fVar8;
            pfVar12[0x14] = fVar1 + pfVar12[0x14];
            pfVar12[0x27] = pfVar12[0x27] + fVar8;
            pfVar12[0x28] = pfVar12[0x28] + fVar1;
            pfVar12[0x3b] = pfVar12[0x3b] + fVar8;
            pfVar12[0x3c] = fVar1 + pfVar12[0x3c];
            pfVar12 = pfVar12 + 0x50;
          } while (iVar10 != 0);
        }
        if (iVar15 < local_183c) {
          iVar10 = local_183c - iVar15;
          pfVar12 = local_17fc + iVar15 * 0x14;
          do {
            iVar10 = iVar10 + -1;
            pfVar12[-1] = pfVar12[-1] + fVar8;
            *pfVar12 = *pfVar12 + fVar1;
            pfVar12 = pfVar12 + 0x14;
          } while (iVar10 != 0);
        }
        iVar15 = 0;
        if (3 < local_183c) {
          fVar1 = *(float *)(param_1 + 0x30);
          fVar2 = *(float *)(param_1 + 0x34);
          iVar10 = (local_183c - 4U >> 2) + 1;
          pfVar12 = local_17fc;
          iVar15 = iVar10 * 4;
          do {
            if (pfVar12[-1] < fVar1) {
              fVar1 = pfVar12[-1];
            }
            if (*pfVar12 < fVar2) {
              fVar2 = *pfVar12;
            }
            if (pfVar12[0x13] < fVar1) {
              fVar1 = pfVar12[0x13];
            }
            if (pfVar12[0x14] < fVar2) {
              fVar2 = pfVar12[0x14];
            }
            if (pfVar12[0x27] < fVar1) {
              fVar1 = pfVar12[0x27];
            }
            if (pfVar12[0x28] < fVar2) {
              fVar2 = pfVar12[0x28];
            }
            if (pfVar12[0x3b] < fVar1) {
              fVar1 = pfVar12[0x3b];
            }
            if (pfVar12[0x3c] < fVar2) {
              fVar2 = pfVar12[0x3c];
            }
            pfVar12 = pfVar12 + 0x50;
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
          *(float *)(param_1 + 0x30) = fVar1;
          *(float *)(param_1 + 0x34) = fVar2;
        }
        if (iVar15 < local_183c) {
          fVar1 = *(float *)(param_1 + 0x30);
          fVar2 = *(float *)(param_1 + 0x34);
          pfVar12 = local_17fc + iVar15 * 0x14;
          iVar15 = local_183c - iVar15;
          do {
            if (pfVar12[-1] < fVar1) {
              fVar1 = pfVar12[-1];
            }
            if (*pfVar12 < fVar2) {
              fVar2 = *pfVar12;
            }
            pfVar12 = pfVar12 + 0x14;
            iVar15 = iVar15 + -1;
          } while (iVar15 != 0);
          *(float *)(param_1 + 0x30) = fVar1;
          *(float *)(param_1 + 0x34) = fVar2;
        }
        if (0 < local_183c) {
          uVar6 = param_2[0xe];
          puVar13 = local_dd8;
          puVar14 = local_17d8;
          iVar15 = local_183c;
          do {
            uVar7 = puVar14[-7];
            puVar13[-10] = puVar14[-10];
            puVar13[-6] = uVar7;
            uVar7 = puVar14[-6];
            puVar13[-9] = puVar14[-9];
            puVar13[-5] = uVar7;
            iVar10 = puVar14[-0xe];
            puVar13[-2] = puVar14[-2];
            puVar13[-1] = puVar14[-1];
            *puVar13 = *puVar14;
            puVar13[1] = puVar14[1];
            puVar13[0xb] = uVar6;
            puVar13[3] = param_2[6];
            puVar13[4] = param_2[7];
            puVar13[5] = param_2[8];
            puVar13[6] = param_2[9];
            puVar13[7] = param_2[10];
            puVar13[8] = param_2[0xb];
            puVar13[9] = param_2[0xc];
            puVar13[10] = param_2[0xd];
            if ((iVar10 == 3) || (iVar10 == 5)) {
              puVar13[-0xe] = 1;
            }
            puVar14 = puVar14 + 0x14;
            puVar13 = puVar13 + 0x1c;
            iVar15 = iVar15 + -1;
          } while (iVar15 != 0);
        }
        param_2[0x13] = 0;
        param_2[0x14] = local_183c;
        param_2[0x15] = local_17ec;
        param_2[0x16] = local_183c;
        if (0 < local_183c) {
          puVar14 = param_2 + 0x1e;
          puVar13 = local_df8;
          do {
            uVar6 = puVar13[-6];
            puVar14[-2] = 0;
            puVar14[-1] = 0;
            local_183c = local_183c + -1;
            *puVar14 = 0;
            puVar14[2] = 0;
            puVar14[3] = 0;
            puVar14[6] = 0;
            puVar14[7] = 0;
            puVar14[8] = 0;
            puVar14[9] = 0;
            puVar14[1] = 0x3f800000;
            puVar14[0xb] = 0x3f800000;
            puVar14[0xc] = 0x3f800000;
            puVar14[0xd] = 0x3f800000;
            puVar14[0xe] = 0x3f800000;
            puVar14[0xf] = 0x3f800000;
            puVar14[0x10] = 0x3f800000;
            puVar14[0x11] = 0x3f800000;
            puVar14[0x12] = 0x3f800000;
            puVar14[-6] = uVar6;
            uVar6 = puVar13[2];
            puVar14[-2] = puVar13[-2];
            puVar14[-1] = puVar13[-1];
            *puVar14 = *puVar13;
            puVar14[1] = puVar13[1];
            puVar14[2] = uVar6;
            uVar6 = puVar13[6];
            puVar14[3] = puVar13[3];
            puVar14[6] = uVar6;
            uVar6 = puVar13[10];
            puVar14[7] = puVar13[7];
            puVar14[8] = puVar13[8];
            puVar14[9] = puVar13[9];
            puVar14[10] = uVar6;
            uVar6 = puVar13[0x13];
            puVar14[0xb] = puVar13[0xb];
            puVar14[0xc] = puVar13[0xc];
            puVar14[0xd] = puVar13[0xd];
            puVar14[0xe] = puVar13[0xe];
            puVar14[0xf] = puVar13[0xf];
            puVar14[0x10] = puVar13[0x10];
            puVar14[0x11] = puVar13[0x11];
            puVar14[0x12] = puVar13[0x12];
            puVar14[0x13] = uVar6;
            puVar14 = puVar14 + 0x1c;
            puVar13 = puVar13 + 0x1c;
          } while (local_183c != 0);
        }
      }
    }
  }
  return;
}

