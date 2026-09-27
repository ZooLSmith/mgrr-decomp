// src/misc/SplineBuffer.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009DE910..00ECEC70, 4 functions

#include "types.h"

// 009DE910  SplineBuffer<float>::vf04  size=145  [class]
void __thiscall SplineBuffer<float>::vf04(int param_1,void *param_2,uint param_3)

{
  void *_Dst;
  
  if (param_3 < 3) {
    FUN_00dd5650(&DAT_0165a7a8,param_3);
    return;
  }
  if (*(uint *)(param_1 + 0x18) < param_3) {
    FUN_00dd5650(&DAT_0165a76c,param_3,*(uint *)(param_1 + 0x18));
    return;
  }
  _Dst = *(void **)(param_1 + 0x1c);
  if (_Dst == (void *)0x0) {
    FUN_00dd5650(&DAT_0165a738);
    return;
  }
  if (_Dst == param_2) {
    FUN_00dd5650(&DAT_0165a708);
    return;
  }
  FID_conflict__memcpy(_Dst,param_2,param_3 * 4);
  StaticSpline<float,18>::vf04(*(undefined4 *)(param_1 + 0x1c),param_3);
  return;
}

// 009DE9B0  SplineBuffer<float>::vf00  size=31  [class]
undefined4 * __thiscall SplineBuffer<float>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Spline<float>::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00ECCAA0  SplineBuffer<Hw::cVec4>::vf00  size=31  [class]
undefined4 * __thiscall SplineBuffer<Hw::cVec4>::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Spline<Hw::cVec4>::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00ECEC70  SplineBuffer<Hw::cVec4>::vf04  size=3290  [class]
void __thiscall SplineBuffer<Hw::cVec4>::vf04(int param_1,void *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  void *_Dst;
  int iVar15;
  int iVar16;
  uint uVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  undefined4 *puVar21;
  float *pfVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  float *pfVar26;
  
  if (param_3 < 3) {
    FUN_00dd5650(&DAT_016d8ea4,param_3);
    return;
  }
  if (*(uint *)(param_1 + 0x18) < param_3) {
    FUN_00dd5650(&DAT_016d71d4,param_3,*(uint *)(param_1 + 0x18));
    return;
  }
  _Dst = *(void **)(param_1 + 0x1c);
  if (_Dst == (void *)0x0) {
    FUN_00dd5650(&DAT_016d725c);
    return;
  }
  if (_Dst != param_2) {
    FID_conflict__memcpy(_Dst,param_2,param_3 << 4);
    if (param_3 <= *(uint *)(param_1 + 0x18)) {
      *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 0x1c);
      puVar21 = *(undefined4 **)(param_1 + 0xc);
      *puVar21 = 0;
      puVar21[1] = 0;
      uVar25 = param_3 - 1;
      puVar21[2] = 0;
      puVar21[3] = 0;
      iVar23 = uVar25 * 0x10;
      iVar16 = *(int *)(param_1 + 0xc);
      *(undefined4 *)(iVar16 + iVar23) = 0;
      iVar16 = iVar16 + iVar23;
      *(undefined4 *)(iVar16 + 4) = 0;
      *(undefined4 *)(iVar16 + 8) = 0;
      *(undefined4 *)(iVar16 + 0xc) = 0;
      uVar17 = 1;
      if (1 < uVar25) {
        if (3 < (int)(param_3 - 2)) {
          iVar24 = (param_3 - 6 >> 2) + 1;
          uVar17 = iVar24 * 4 + 1;
          iVar16 = 0x10;
          do {
            pfVar18 = (float *)(*(int *)(param_1 + 4) + iVar16);
            fVar3 = pfVar18[-3];
            fVar4 = pfVar18[5];
            fVar5 = pfVar18[-2];
            fVar6 = pfVar18[6];
            fVar7 = pfVar18[-1];
            fVar8 = pfVar18[7];
            fVar9 = pfVar18[1];
            fVar10 = pfVar18[2];
            fVar11 = pfVar18[3];
            pfVar19 = (float *)(*(int *)(param_1 + 0xc) + iVar16);
            *pfVar19 = ((*(float *)(*(int *)(param_1 + 4) + -0x10 + iVar16) + pfVar18[4]) -
                       *pfVar18 * 2.0) * 3.0;
            pfVar19[1] = ((fVar3 + fVar4) - fVar9 * 2.0) * 3.0;
            pfVar19[2] = ((fVar5 + fVar6) - fVar10 * 2.0) * 3.0;
            pfVar19[3] = ((fVar7 + fVar8) - fVar11 * 2.0) * 3.0;
            iVar15 = *(int *)(param_1 + 4);
            iVar1 = iVar16 + 0x20;
            fVar3 = *(float *)(iVar16 + 4 + iVar15);
            fVar4 = *(float *)(iVar15 + 4 + iVar1);
            fVar5 = *(float *)(iVar16 + 8 + iVar15);
            fVar6 = *(float *)(iVar15 + 8 + iVar1);
            fVar7 = *(float *)(iVar16 + 0xc + iVar15);
            fVar8 = *(float *)(iVar15 + 0xc + iVar1);
            fVar9 = *(float *)(iVar16 + 0x14 + iVar15);
            fVar10 = *(float *)(iVar16 + 0x18 + iVar15);
            fVar11 = *(float *)(iVar16 + 0x1c + iVar15);
            pfVar18 = (float *)(iVar16 + 0x10 + *(int *)(param_1 + 0xc));
            iVar2 = iVar16 + 0x30;
            *pfVar18 = ((*(float *)(iVar16 + iVar15) + *(float *)(iVar15 + iVar1)) -
                       *(float *)(iVar16 + 0x10 + iVar15) * 2.0) * 3.0;
            pfVar18[1] = ((fVar3 + fVar4) - fVar9 * 2.0) * 3.0;
            pfVar18[2] = ((fVar5 + fVar6) - fVar10 * 2.0) * 3.0;
            pfVar18[3] = ((fVar7 + fVar8) - fVar11 * 2.0) * 3.0;
            iVar15 = *(int *)(param_1 + 4);
            fVar3 = *(float *)(iVar16 + 0x14 + iVar15);
            fVar4 = *(float *)(iVar15 + 4 + iVar2);
            fVar5 = *(float *)(iVar16 + 0x18 + iVar15);
            fVar6 = *(float *)(iVar15 + 8 + iVar2);
            fVar7 = *(float *)(iVar16 + 0x1c + iVar15);
            fVar8 = *(float *)(iVar15 + 0xc + iVar2);
            fVar9 = *(float *)(iVar15 + 4 + iVar1);
            fVar10 = *(float *)(iVar15 + 8 + iVar1);
            fVar11 = *(float *)(iVar15 + 0xc + iVar1);
            pfVar18 = (float *)(*(int *)(param_1 + 0xc) + iVar1);
            *pfVar18 = ((*(float *)(iVar16 + 0x10 + iVar15) + *(float *)(iVar15 + iVar2)) -
                       *(float *)(iVar15 + iVar1) * 2.0) * 3.0;
            pfVar18[1] = ((fVar3 + fVar4) - fVar9 * 2.0) * 3.0;
            pfVar18[2] = ((fVar5 + fVar6) - fVar10 * 2.0) * 3.0;
            pfVar18[3] = ((fVar7 + fVar8) - fVar11 * 2.0) * 3.0;
            iVar15 = *(int *)(param_1 + 4);
            fVar3 = *(float *)(iVar15 + 4 + iVar1);
            fVar4 = *(float *)(iVar15 + 0x24 + iVar1);
            iVar16 = iVar16 + 0x40;
            fVar5 = *(float *)(iVar15 + 8 + iVar1);
            fVar6 = *(float *)(iVar15 + 0x28 + iVar1);
            fVar7 = *(float *)(iVar15 + 0xc + iVar1);
            fVar8 = *(float *)(iVar15 + 0x2c + iVar1);
            pfVar18 = (float *)(*(int *)(param_1 + 0xc) + iVar2);
            iVar24 = iVar24 + -1;
            fVar9 = *(float *)(iVar15 + 4 + iVar2);
            fVar10 = *(float *)(iVar15 + 8 + iVar2);
            fVar11 = *(float *)(iVar15 + 0xc + iVar2);
            *pfVar18 = ((*(float *)(iVar15 + iVar1) + *(float *)(iVar15 + 0x20 + iVar1)) -
                       *(float *)(iVar15 + iVar2) * 2.0) * 3.0;
            pfVar18[1] = ((fVar3 + fVar4) - fVar9 * 2.0) * 3.0;
            pfVar18[2] = ((fVar5 + fVar6) - fVar10 * 2.0) * 3.0;
            pfVar18[3] = ((fVar7 + fVar8) - fVar11 * 2.0) * 3.0;
          } while (iVar24 != 0);
        }
        if (uVar17 < uVar25) {
          iVar16 = uVar17 << 4;
          iVar24 = uVar25 - uVar17;
          do {
            pfVar18 = (float *)(*(int *)(param_1 + 4) + -0x10 + iVar16);
            pfVar19 = (float *)(*(int *)(param_1 + 4) + iVar16);
            fVar3 = pfVar19[-3];
            fVar4 = pfVar19[5];
            fVar5 = pfVar19[-2];
            fVar6 = pfVar19[6];
            fVar7 = pfVar19[-1];
            fVar8 = pfVar19[7];
            fVar9 = pfVar19[1];
            fVar10 = pfVar19[2];
            fVar11 = pfVar19[3];
            pfVar20 = (float *)(*(int *)(param_1 + 0xc) + iVar16);
            iVar16 = iVar16 + 0x10;
            iVar24 = iVar24 + -1;
            *pfVar20 = ((*pfVar18 + pfVar19[4]) - *pfVar19 * 2.0) * 3.0;
            pfVar20[1] = ((fVar3 + fVar4) - fVar9 * 2.0) * 3.0;
            pfVar20[2] = ((fVar5 + fVar6) - fVar10 * 2.0) * 3.0;
            pfVar20[3] = ((fVar7 + fVar8) - fVar11 * 2.0) * 3.0;
          } while (iVar24 != 0);
        }
      }
      uVar17 = 1;
      if (1 < uVar25) {
        if (3 < (int)(param_3 - 2)) {
          iVar16 = 0x10;
          do {
            pfVar18 = (float *)(*(int *)(param_1 + 0xc) + iVar16);
            fVar3 = (float)(&DAT_01dd8f60)[uVar17];
            *pfVar18 = fVar3 * (*(float *)(*(int *)(param_1 + 0xc) + iVar16) - pfVar18[-4]);
            pfVar18[1] = (pfVar18[1] - pfVar18[-3]) * fVar3;
            pfVar18[2] = (pfVar18[2] - pfVar18[-2]) * fVar3;
            pfVar18[3] = fVar3 * (pfVar18[3] - pfVar18[-1]);
            pfVar18 = (float *)(*(int *)(param_1 + 0xc) + iVar16);
            fVar3 = (float)(&DAT_01dd8f64)[uVar17];
            pfVar18[4] = fVar3 * (*(float *)(*(int *)(param_1 + 0xc) + 0x10 + iVar16) - *pfVar18);
            pfVar18[5] = (pfVar18[5] - pfVar18[1]) * fVar3;
            pfVar18[6] = (pfVar18[6] - pfVar18[2]) * fVar3;
            pfVar18[7] = fVar3 * (pfVar18[7] - pfVar18[3]);
            iVar24 = *(int *)(param_1 + 0xc);
            fVar3 = *(float *)(iVar24 + 0x14 + iVar16);
            fVar4 = *(float *)(iVar24 + 0x18 + iVar16);
            fVar5 = *(float *)(iVar24 + 0x1c + iVar16);
            fVar6 = (float)(&DAT_01dd8f68)[uVar17];
            *(float *)(iVar16 + 0x20 + iVar24) =
                 fVar6 * (*(float *)(iVar16 + 0x20 + iVar24) - *(float *)(iVar24 + 0x10 + iVar16));
            *(float *)(iVar16 + 0x24 + iVar24) =
                 (*(float *)(iVar16 + 0x24 + iVar24) - fVar3) * fVar6;
            *(float *)(iVar16 + 0x28 + iVar24) =
                 (*(float *)(iVar16 + 0x28 + iVar24) - fVar4) * fVar6;
            uVar17 = uVar17 + 4;
            *(float *)(iVar16 + 0x2c + iVar24) =
                 fVar6 * (*(float *)(iVar16 + 0x2c + iVar24) - fVar5);
            iVar24 = *(int *)(param_1 + 0xc);
            fVar3 = *(float *)(uVar17 * 4 + 0x1dd8f5c);
            *(float *)(iVar16 + 0x30 + iVar24) =
                 fVar3 * (*(float *)(iVar16 + 0x30 + iVar24) - *(float *)(iVar16 + 0x20 + iVar24));
            *(float *)(iVar16 + 0x34 + iVar24) =
                 (*(float *)(iVar16 + 0x34 + iVar24) - *(float *)(iVar16 + 0x24 + iVar24)) * fVar3;
            *(float *)(iVar16 + 0x38 + iVar24) =
                 (*(float *)(iVar16 + 0x38 + iVar24) - *(float *)(iVar16 + 0x28 + iVar24)) * fVar3;
            *(float *)(iVar16 + 0x3c + iVar24) =
                 fVar3 * (*(float *)(iVar16 + 0x3c + iVar24) - *(float *)(iVar16 + 0x2c + iVar24));
            iVar16 = iVar16 + 0x40;
          } while (uVar17 < param_3 - 4);
        }
        if (uVar17 < uVar25) {
          iVar16 = uVar17 << 4;
          do {
            pfVar18 = (float *)(*(int *)(param_1 + 0xc) + iVar16);
            pfVar19 = (float *)(*(int *)(param_1 + 0xc) + iVar16);
            uVar17 = uVar17 + 1;
            iVar16 = iVar16 + 0x10;
            fVar3 = *(float *)(uVar17 * 4 + 0x1dd8f5c);
            *pfVar19 = fVar3 * (*pfVar18 - pfVar19[-4]);
            pfVar19[1] = (pfVar19[1] - pfVar19[-3]) * fVar3;
            pfVar19[2] = (pfVar19[2] - pfVar19[-2]) * fVar3;
            pfVar19[3] = fVar3 * (pfVar19[3] - pfVar19[-1]);
          } while (uVar17 < uVar25);
        }
      }
      iVar16 = param_3 - 2;
      if (iVar16 != 0) {
        iVar24 = iVar16 * 0x10;
        do {
          fVar3 = (float)(&DAT_01dd8f60)[iVar16] * -1.0;
          pfVar18 = (float *)(*(int *)(param_1 + 0xc) + iVar24);
          iVar24 = iVar24 + -0x10;
          iVar16 = iVar16 + -1;
          *pfVar18 = *pfVar18 + fVar3 * pfVar18[4];
          pfVar18[1] = pfVar18[1] + pfVar18[5] * fVar3;
          pfVar18[2] = pfVar18[2] + pfVar18[6] * fVar3;
          pfVar18[3] = pfVar18[3] + fVar3 * pfVar18[7];
        } while (iVar16 != 0);
      }
      iVar16 = *(int *)(param_1 + 8);
      *(undefined4 *)(iVar16 + iVar23) = 0;
      iVar16 = iVar16 + iVar23;
      *(undefined4 *)(iVar16 + 4) = 0;
      *(undefined4 *)(iVar16 + 8) = 0;
      *(undefined4 *)(iVar16 + 0xc) = 0;
      uVar17 = 0;
      if (3 < (int)uVar25) {
        iVar24 = (param_3 - 5 >> 2) + 1;
        uVar17 = iVar24 * 4;
        iVar16 = 0x20;
        do {
          iVar1 = iVar16 + -0x20;
          pfVar18 = (float *)(*(int *)(param_1 + 0xc) + iVar1);
          fVar3 = pfVar18[5];
          fVar4 = pfVar18[1];
          fVar5 = pfVar18[6];
          fVar6 = pfVar18[2];
          fVar7 = pfVar18[7];
          fVar8 = pfVar18[3];
          pfVar19 = (float *)(*(int *)(param_1 + 0x10) + iVar1);
          *pfVar19 = (*(float *)(*(int *)(param_1 + 0xc) + 0x10 + iVar1) - *pfVar18) * 0.33333334;
          pfVar19[1] = (fVar3 - fVar4) * 0.33333334;
          pfVar19[2] = (fVar5 - fVar6) * 0.33333334;
          pfVar19[3] = (fVar7 - fVar8) * 0.33333334;
          iVar2 = *(int *)(param_1 + 0xc);
          fVar3 = *(float *)(iVar16 + 4 + iVar2);
          fVar4 = *(float *)(iVar16 + -0xc + iVar2);
          fVar5 = *(float *)(iVar16 + 8 + iVar2);
          fVar6 = *(float *)(iVar16 + -8 + iVar2);
          fVar7 = *(float *)(iVar16 + 0xc + iVar2);
          fVar8 = *(float *)(iVar16 + -4 + iVar2);
          pfVar18 = (float *)(*(int *)(param_1 + 0x10) + 0x10 + iVar1);
          *pfVar18 = (*(float *)(iVar16 + iVar2) - *(float *)(iVar16 + -0x10 + iVar2)) * 0.33333334;
          pfVar18[1] = (fVar3 - fVar4) * 0.33333334;
          pfVar18[2] = (fVar5 - fVar6) * 0.33333334;
          pfVar18[3] = (fVar7 - fVar8) * 0.33333334;
          iVar1 = *(int *)(param_1 + 0xc);
          fVar3 = *(float *)(iVar16 + 0x14 + iVar1);
          fVar4 = *(float *)(iVar16 + 4 + iVar1);
          fVar5 = *(float *)(iVar16 + 0x18 + iVar1);
          fVar6 = *(float *)(iVar16 + 8 + iVar1);
          fVar7 = *(float *)(iVar16 + 0x1c + iVar1);
          fVar8 = *(float *)(iVar16 + 0xc + iVar1);
          pfVar18 = (float *)(*(int *)(param_1 + 0x10) + iVar16);
          *pfVar18 = (*(float *)(iVar16 + 0x10 + iVar1) - *(float *)(iVar16 + iVar1)) * 0.33333334;
          pfVar18[1] = (fVar3 - fVar4) * 0.33333334;
          pfVar18[2] = (fVar5 - fVar6) * 0.33333334;
          pfVar18[3] = (fVar7 - fVar8) * 0.33333334;
          iVar1 = *(int *)(param_1 + 0xc);
          fVar3 = *(float *)(iVar16 + 0x24 + iVar1);
          fVar4 = *(float *)(iVar16 + 0x14 + iVar1);
          fVar5 = *(float *)(iVar16 + 0x28 + iVar1);
          fVar6 = *(float *)(iVar16 + 0x18 + iVar1);
          fVar7 = *(float *)(iVar16 + 0x2c + iVar1);
          fVar8 = *(float *)(iVar16 + 0x1c + iVar1);
          pfVar18 = (float *)(*(int *)(param_1 + 0x10) + iVar16 + 0x10);
          iVar24 = iVar24 + -1;
          *pfVar18 = (*(float *)(iVar16 + 0x20 + iVar1) - *(float *)(iVar16 + 0x10 + iVar1)) *
                     0.33333334;
          pfVar18[1] = (fVar3 - fVar4) * 0.33333334;
          pfVar18[2] = (fVar5 - fVar6) * 0.33333334;
          pfVar18[3] = (fVar7 - fVar8) * 0.33333334;
          iVar16 = iVar16 + 0x40;
        } while (iVar24 != 0);
      }
      if (uVar17 < uVar25) {
        iVar16 = uVar17 << 4;
        iVar24 = uVar25 - uVar17;
        do {
          pfVar18 = (float *)(*(int *)(param_1 + 0xc) + 0x10 + iVar16);
          pfVar19 = (float *)(*(int *)(param_1 + 0xc) + iVar16);
          fVar3 = pfVar19[5];
          fVar4 = pfVar19[1];
          fVar5 = pfVar19[6];
          fVar6 = pfVar19[2];
          fVar7 = pfVar19[7];
          fVar8 = pfVar19[3];
          pfVar20 = (float *)(*(int *)(param_1 + 0x10) + iVar16);
          iVar16 = iVar16 + 0x10;
          iVar24 = iVar24 + -1;
          *pfVar20 = (*pfVar18 - *pfVar19) * 0.33333334;
          pfVar20[1] = (fVar3 - fVar4) * 0.33333334;
          pfVar20[2] = (fVar5 - fVar6) * 0.33333334;
          pfVar20[3] = (fVar7 - fVar8) * 0.33333334;
        } while (iVar24 != 0);
      }
      puVar21 = (undefined4 *)(*(int *)(param_1 + 0x10) + iVar23);
      *puVar21 = 0;
      puVar21[1] = 0;
      puVar21[2] = 0;
      puVar21[3] = 0;
      uVar17 = 0;
      if (3 < (int)uVar25) {
        iVar23 = (param_3 - 5 >> 2) + 1;
        uVar17 = iVar23 * 4;
        iVar16 = 0x20;
        do {
          iVar24 = iVar16 + -0x20;
          pfVar18 = (float *)(*(int *)(param_1 + 4) + iVar24);
          pfVar26 = (float *)(*(int *)(param_1 + 0xc) + iVar24);
          fVar3 = pfVar18[5];
          fVar4 = pfVar18[1];
          fVar5 = pfVar18[6];
          fVar6 = pfVar18[2];
          fVar7 = pfVar18[7];
          fVar8 = pfVar18[3];
          pfVar19 = (float *)(*(int *)(param_1 + 0x10) + iVar24);
          fVar9 = pfVar26[1];
          fVar10 = pfVar19[1];
          fVar11 = pfVar26[2];
          fVar12 = pfVar19[2];
          fVar13 = pfVar26[3];
          fVar14 = pfVar19[3];
          pfVar20 = (float *)(*(int *)(param_1 + 8) + iVar24);
          *pfVar20 = (*(float *)(*(int *)(param_1 + 4) + 0x10 + iVar24) - *pfVar18) -
                     (*pfVar19 + *pfVar26);
          pfVar20[1] = (fVar3 - fVar4) - (fVar9 + fVar10);
          pfVar20[2] = (fVar5 - fVar6) - (fVar11 + fVar12);
          pfVar20[3] = (fVar7 - fVar8) - (fVar13 + fVar14);
          iVar1 = *(int *)(param_1 + 4);
          pfVar18 = (float *)(iVar16 + -0x10 + *(int *)(param_1 + 0xc));
          fVar3 = *(float *)(iVar16 + 4 + iVar1);
          fVar4 = *(float *)(iVar16 + -0xc + iVar1);
          fVar5 = *(float *)(iVar16 + 8 + iVar1);
          fVar6 = *(float *)(iVar16 + -8 + iVar1);
          fVar7 = *(float *)(iVar16 + 0xc + iVar1);
          fVar8 = *(float *)(iVar16 + -4 + iVar1);
          pfVar19 = (float *)(*(int *)(param_1 + 0x10) + 0x10 + iVar24);
          fVar9 = pfVar18[1];
          fVar10 = pfVar19[1];
          fVar11 = pfVar18[2];
          fVar12 = pfVar19[2];
          fVar13 = pfVar18[3];
          fVar14 = pfVar19[3];
          pfVar20 = (float *)(iVar16 + -0x10 + *(int *)(param_1 + 8));
          *pfVar20 = (*(float *)(iVar16 + iVar1) - *(float *)(iVar16 + -0x10 + iVar1)) -
                     (*pfVar19 + *pfVar18);
          pfVar20[1] = (fVar3 - fVar4) - (fVar9 + fVar10);
          pfVar20[2] = (fVar5 - fVar6) - (fVar11 + fVar12);
          pfVar20[3] = (fVar7 - fVar8) - (fVar13 + fVar14);
          iVar1 = *(int *)(param_1 + 4);
          iVar24 = iVar16 + 0x10;
          pfVar20 = (float *)(*(int *)(param_1 + 0xc) + iVar16);
          fVar3 = *(float *)(iVar16 + 0x14 + iVar1);
          fVar4 = *(float *)(iVar16 + 4 + iVar1);
          fVar5 = *(float *)(iVar16 + 0x18 + iVar1);
          fVar6 = *(float *)(iVar16 + 8 + iVar1);
          fVar7 = *(float *)(iVar16 + 0x1c + iVar1);
          fVar8 = *(float *)(iVar16 + 0xc + iVar1);
          pfVar18 = (float *)(*(int *)(param_1 + 0x10) + iVar16);
          fVar9 = pfVar20[1];
          fVar10 = pfVar18[1];
          fVar11 = pfVar20[2];
          fVar12 = pfVar18[2];
          fVar13 = pfVar20[3];
          fVar14 = pfVar18[3];
          pfVar19 = (float *)(*(int *)(param_1 + 8) + iVar16);
          *pfVar19 = (*(float *)(iVar16 + 0x10 + iVar1) - *(float *)(iVar16 + iVar1)) -
                     (*pfVar18 + *pfVar20);
          pfVar19[1] = (fVar3 - fVar4) - (fVar9 + fVar10);
          pfVar19[2] = (fVar5 - fVar6) - (fVar11 + fVar12);
          pfVar19[3] = (fVar7 - fVar8) - (fVar13 + fVar14);
          iVar2 = *(int *)(param_1 + 4);
          iVar1 = iVar16 + 0x20;
          fVar3 = *(float *)(iVar16 + 0x24 + iVar2);
          fVar4 = *(float *)(iVar16 + 0x14 + iVar2);
          fVar5 = *(float *)(iVar16 + 0x28 + iVar2);
          fVar6 = *(float *)(iVar16 + 0x18 + iVar2);
          fVar7 = *(float *)(iVar16 + 0x2c + iVar2);
          fVar8 = *(float *)(iVar16 + 0x1c + iVar2);
          pfVar18 = (float *)(*(int *)(param_1 + 0x10) + iVar24);
          pfVar20 = (float *)(*(int *)(param_1 + 0xc) + iVar24);
          fVar9 = pfVar20[1];
          fVar10 = pfVar18[1];
          fVar11 = pfVar20[2];
          fVar12 = pfVar18[2];
          fVar13 = pfVar20[3];
          fVar14 = pfVar18[3];
          pfVar19 = (float *)(*(int *)(param_1 + 8) + iVar24);
          iVar16 = iVar16 + 0x40;
          iVar23 = iVar23 + -1;
          *pfVar19 = (*(float *)(iVar1 + iVar2) - *(float *)(iVar24 + iVar2)) -
                     (*pfVar18 + *pfVar20);
          pfVar19[1] = (fVar3 - fVar4) - (fVar9 + fVar10);
          pfVar19[2] = (fVar5 - fVar6) - (fVar11 + fVar12);
          pfVar19[3] = (fVar7 - fVar8) - (fVar13 + fVar14);
        } while (iVar23 != 0);
      }
      if (uVar17 < uVar25) {
        iVar16 = uVar17 << 4;
        iVar23 = uVar25 - uVar17;
        do {
          pfVar18 = (float *)(*(int *)(param_1 + 4) + 0x10 + iVar16);
          pfVar19 = (float *)(*(int *)(param_1 + 4) + iVar16);
          pfVar22 = (float *)(*(int *)(param_1 + 0xc) + iVar16);
          fVar3 = pfVar19[5];
          fVar4 = pfVar19[1];
          fVar5 = pfVar19[6];
          fVar6 = pfVar19[2];
          fVar7 = pfVar19[7];
          fVar8 = pfVar19[3];
          pfVar20 = (float *)(*(int *)(param_1 + 0x10) + iVar16);
          fVar9 = pfVar22[1];
          fVar10 = pfVar20[1];
          fVar11 = pfVar22[2];
          fVar12 = pfVar20[2];
          fVar13 = pfVar22[3];
          fVar14 = pfVar20[3];
          pfVar26 = (float *)(*(int *)(param_1 + 8) + iVar16);
          iVar16 = iVar16 + 0x10;
          iVar23 = iVar23 + -1;
          *pfVar26 = (*pfVar18 - *pfVar19) - (*pfVar20 + *pfVar22);
          pfVar26[1] = (fVar3 - fVar4) - (fVar9 + fVar10);
          pfVar26[2] = (fVar5 - fVar6) - (fVar11 + fVar12);
          pfVar26[3] = (fVar7 - fVar8) - (fVar13 + fVar14);
        } while (iVar23 != 0);
      }
      *(uint *)(param_1 + 0x14) = param_3;
      return;
    }
    FUN_00dd5650(&DAT_016d98c0,param_3,*(uint *)(param_1 + 0x18));
    return;
  }
  FUN_00dd5650(&DAT_016d8edc);
  return;
}

