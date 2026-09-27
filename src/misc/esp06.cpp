// src/misc/esp06.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ED2CE0..00F2E930, 5 functions

#include "mgrr.h"
#include "esp06.h"

// 00ED2CE0  esp06::esp06  size=18  [class]
undefined4 * __fastcall esp06::esp06(undefined4 *param_1)

{
  FixedSplineLerp<Hw::cVec4>::FixedSplineLerp<Hw::cVec4>();
  *param_1 = vftable;
  return param_1;
}

// 00ED2D10  esp06::vf00  size=30  [class]
undefined4 __thiscall esp06::vf00(undefined4 param_1,byte param_2)

{
  Spline<Hw::cVec4>::Spline<Hw::cVec4>();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00EEDD30  esp06::vf28  size=9918  [class]
void __fastcall esp06::vf28(int param_1)

{
  float fVar1;
  float fVar2;
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
  int iVar13;
  uint uVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  undefined4 *puVar22;
  float *pfVar23;
  float *pfVar24;
  int iVar25;
  int iVar26;
  undefined4 *puVar27;
  float *pfVar28;
  undefined4 *puVar29;
  int iVar30;
  int iVar31;
  float *pfVar32;
  uint uVar33;
  undefined4 *puVar34;
  int iVar35;
  float *pfVar36;
  int iVar37;
  float10 fVar38;
  undefined *puVar39;
  float local_15c;
  float local_158;
  uint local_14c;
  float local_148;
  float *local_144;
  int local_140;
  float *local_134;
  int local_fc;
  int local_f8;
  
  iVar13 = *(int *)(param_1 + 0x458);
  iVar18 = (*(int *)(param_1 + 0x450) + -4) * *(int *)(param_1 + 0x454);
  iVar19 = iVar18 + 2;
  local_f8 = (int)(longlong)ROUND(*(float *)(param_1 + 0x528));
  fVar16 = (float)local_f8;
  if (local_f8 < 0) {
    fVar16 = fVar16 + 4.2949673e+09;
  }
  iVar37 = *(int *)(param_1 + 0x540);
  fVar16 = *(float *)(param_1 + 0x528) - fVar16;
  local_fc = 0;
  if (0 < iVar37) {
    fVar17 = (float)iVar19;
    if (iVar19 < 0) {
      fVar17 = fVar17 + 4.2949673e+09;
    }
    do {
      uVar14 = *(uint *)(param_1 + 0x450);
      iVar20 = (iVar19 * 2 + 2) * local_fc;
      iVar30 = *(int *)(param_1 + 0x45c + local_fc * 4);
      if (uVar14 < 3) {
        FUN_00dd5650(&DAT_016df4c0,uVar14);
      }
      else {
        uVar21 = *(uint *)(param_1 + 0x55c);
        if (uVar21 < uVar14) {
          puVar39 = &DAT_016df478;
LAB_00eede92:
          FUN_00dd5650(puVar39,CONCAT44(uVar21,uVar14));
        }
        else if (*(int *)(param_1 + 0x560) == 0) {
          FUN_00dd5650();
        }
        else {
          uVar21 = 0;
          if (3 < (int)uVar14) {
            iVar31 = 0;
            iVar35 = (uVar14 - 4 >> 2) + 1;
            uVar21 = iVar35 * 4;
            puVar22 = (undefined4 *)(iVar30 + 0x14);
            do {
              iVar25 = *(int *)(param_1 + 0x560);
              *(undefined4 *)(iVar25 + iVar31) = puVar22[-5];
              iVar25 = iVar25 + iVar31;
              iVar26 = iVar31 + 0x30;
              *(undefined4 *)(iVar25 + 4) = puVar22[-4];
              *(undefined4 *)(iVar25 + 8) = puVar22[-3];
              *(undefined4 *)(iVar25 + 0xc) = 0x3f800000;
              puVar27 = (undefined4 *)(iVar31 + 0x10 + *(int *)(param_1 + 0x560));
              *puVar27 = puVar22[-2];
              iVar31 = iVar31 + 0x40;
              puVar27[1] = puVar22[-1];
              puVar27[2] = *puVar22;
              puVar27[3] = 0x3f800000;
              puVar27 = (undefined4 *)(*(int *)(param_1 + 0x560) + -0x10 + iVar26);
              *puVar27 = puVar22[1];
              puVar27[1] = puVar22[2];
              puVar27[2] = puVar22[3];
              puVar27[3] = 0x3f800000;
              puVar27 = (undefined4 *)(*(int *)(param_1 + 0x560) + iVar26);
              iVar35 = iVar35 + -1;
              *puVar27 = puVar22[4];
              puVar27[1] = puVar22[5];
              puVar27[2] = puVar22[6];
              puVar27[3] = 0x3f800000;
              puVar22 = puVar22 + 0xc;
            } while (iVar35 != 0);
          }
          if (uVar21 < uVar14) {
            iVar31 = uVar21 << 4;
            iVar35 = uVar14 - uVar21;
            puVar22 = (undefined4 *)(iVar30 + 8 + uVar21 * 0xc);
            do {
              puVar27 = (undefined4 *)(*(int *)(param_1 + 0x560) + iVar31);
              *puVar27 = puVar22[-2];
              iVar31 = iVar31 + 0x10;
              iVar35 = iVar35 + -1;
              puVar27[1] = puVar22[-1];
              puVar27[2] = *puVar22;
              puVar27[3] = 0x3f800000;
              puVar22 = puVar22 + 3;
            } while (iVar35 != 0);
          }
          uVar21 = *(uint *)(param_1 + 0x55c);
          if (uVar21 < uVar14) {
            puVar39 = &DAT_016d98c0;
            goto LAB_00eede92;
          }
          *(undefined4 *)(param_1 + 0x548) = *(undefined4 *)(param_1 + 0x560);
          puVar22 = *(undefined4 **)(param_1 + 0x550);
          *puVar22 = 0;
          uVar21 = uVar14 - 1;
          puVar22[1] = 0;
          puVar22[2] = 0;
          iVar30 = uVar21 * 0x10;
          puVar22[3] = 0;
          puVar22 = (undefined4 *)(*(int *)(param_1 + 0x550) + iVar30);
          *puVar22 = 0;
          puVar22[1] = 0;
          puVar22[2] = 0;
          local_15c = 1.4013e-45;
          puVar22[3] = 0;
          if (1 < uVar21) {
            if (3 < (int)(uVar14 - 2)) {
              iVar35 = (uVar14 - 6 >> 2) + 1;
              local_15c = (float)(iVar35 * 4 + 1);
              iVar31 = 0x10;
              do {
                pfVar32 = (float *)(iVar31 + *(int *)(param_1 + 0x548));
                fVar9 = pfVar32[-3];
                fVar10 = pfVar32[5];
                fVar1 = pfVar32[-2];
                fVar2 = pfVar32[6];
                fVar3 = pfVar32[-1];
                fVar4 = pfVar32[7];
                fVar5 = pfVar32[1];
                fVar6 = pfVar32[2];
                fVar7 = pfVar32[3];
                pfVar23 = (float *)(*(int *)(param_1 + 0x550) + iVar31);
                *pfVar23 = ((*(float *)(iVar31 + -0x10 + *(int *)(param_1 + 0x548)) + pfVar32[4]) -
                           *pfVar32 * 2.0) * 3.0;
                pfVar23[1] = ((fVar9 + fVar10) - fVar5 * 2.0) * 3.0;
                pfVar23[2] = ((fVar1 + fVar2) - fVar6 * 2.0) * 3.0;
                pfVar23[3] = ((fVar3 + fVar4) - fVar7 * 2.0) * 3.0;
                iVar15 = *(int *)(param_1 + 0x548);
                iVar26 = iVar31 + 0x20;
                fVar9 = *(float *)(iVar31 + 4 + iVar15);
                fVar10 = *(float *)(iVar31 + 0x24 + iVar15);
                fVar1 = *(float *)(iVar31 + 8 + iVar15);
                fVar2 = *(float *)(iVar31 + 0x28 + iVar15);
                fVar3 = *(float *)(iVar31 + 0xc + iVar15);
                fVar4 = *(float *)(iVar31 + 0x2c + iVar15);
                fVar5 = *(float *)(iVar31 + 0x14 + iVar15);
                fVar6 = *(float *)(iVar31 + 0x18 + iVar15);
                fVar7 = *(float *)(iVar31 + 0x1c + iVar15);
                pfVar32 = (float *)(iVar31 + 0x10 + *(int *)(param_1 + 0x550));
                iVar25 = iVar31 + 0x30;
                *pfVar32 = ((*(float *)(iVar31 + iVar15) + *(float *)(iVar26 + iVar15)) -
                           *(float *)(iVar31 + 0x10 + iVar15) * 2.0) * 3.0;
                pfVar32[1] = ((fVar9 + fVar10) - fVar5 * 2.0) * 3.0;
                pfVar32[2] = ((fVar1 + fVar2) - fVar6 * 2.0) * 3.0;
                pfVar32[3] = ((fVar3 + fVar4) - fVar7 * 2.0) * 3.0;
                iVar15 = *(int *)(param_1 + 0x548);
                fVar9 = *(float *)(iVar31 + 0x14 + iVar15);
                fVar10 = *(float *)(iVar31 + 0x34 + iVar15);
                fVar1 = *(float *)(iVar31 + 0x18 + iVar15);
                fVar2 = *(float *)(iVar31 + 0x38 + iVar15);
                fVar3 = *(float *)(iVar31 + 0x1c + iVar15);
                fVar4 = *(float *)(iVar31 + 0x3c + iVar15);
                fVar5 = *(float *)(iVar31 + 0x24 + iVar15);
                fVar6 = *(float *)(iVar31 + 0x28 + iVar15);
                fVar7 = *(float *)(iVar31 + 0x2c + iVar15);
                pfVar32 = (float *)(*(int *)(param_1 + 0x550) + iVar26);
                *pfVar32 = ((*(float *)(iVar31 + 0x10 + iVar15) + *(float *)(iVar25 + iVar15)) -
                           *(float *)(iVar26 + iVar15) * 2.0) * 3.0;
                pfVar32[1] = ((fVar9 + fVar10) - fVar5 * 2.0) * 3.0;
                pfVar32[2] = ((fVar1 + fVar2) - fVar6 * 2.0) * 3.0;
                pfVar32[3] = ((fVar3 + fVar4) - fVar7 * 2.0) * 3.0;
                iVar15 = *(int *)(param_1 + 0x548);
                fVar9 = *(float *)(iVar31 + 0x24 + iVar15);
                fVar10 = *(float *)(iVar31 + 0x44 + iVar15);
                fVar1 = *(float *)(iVar31 + 0x28 + iVar15);
                fVar2 = *(float *)(iVar31 + 0x48 + iVar15);
                fVar3 = *(float *)(iVar31 + 0x2c + iVar15);
                fVar4 = *(float *)(iVar31 + 0x4c + iVar15);
                pfVar32 = (float *)(*(int *)(param_1 + 0x550) + iVar25);
                iVar35 = iVar35 + -1;
                fVar5 = *(float *)(iVar31 + 0x34 + iVar15);
                fVar6 = *(float *)(iVar31 + 0x38 + iVar15);
                fVar7 = *(float *)(iVar31 + 0x3c + iVar15);
                *pfVar32 = ((*(float *)(iVar26 + iVar15) + *(float *)(iVar31 + 0x40 + iVar15)) -
                           *(float *)(iVar25 + iVar15) * 2.0) * 3.0;
                pfVar32[1] = ((fVar9 + fVar10) - fVar5 * 2.0) * 3.0;
                pfVar32[2] = ((fVar1 + fVar2) - fVar6 * 2.0) * 3.0;
                pfVar32[3] = ((fVar3 + fVar4) - fVar7 * 2.0) * 3.0;
                iVar31 = iVar31 + 0x40;
              } while (iVar35 != 0);
            }
            if ((uint)local_15c < uVar21) {
              iVar31 = (int)local_15c << 4;
              iVar35 = uVar21 - (int)local_15c;
              do {
                pfVar32 = (float *)(*(int *)(param_1 + 0x548) + -0x10 + iVar31);
                pfVar23 = (float *)(*(int *)(param_1 + 0x548) + iVar31);
                fVar9 = pfVar23[-3];
                fVar10 = pfVar23[5];
                fVar1 = pfVar23[-2];
                fVar2 = pfVar23[6];
                fVar3 = pfVar23[-1];
                fVar4 = pfVar23[7];
                fVar5 = pfVar23[1];
                fVar6 = pfVar23[2];
                fVar7 = pfVar23[3];
                pfVar24 = (float *)(*(int *)(param_1 + 0x550) + iVar31);
                iVar31 = iVar31 + 0x10;
                iVar35 = iVar35 + -1;
                *pfVar24 = ((*pfVar32 + pfVar23[4]) - *pfVar23 * 2.0) * 3.0;
                pfVar24[1] = ((fVar9 + fVar10) - fVar5 * 2.0) * 3.0;
                pfVar24[2] = ((fVar1 + fVar2) - fVar6 * 2.0) * 3.0;
                pfVar24[3] = ((fVar3 + fVar4) - fVar7 * 2.0) * 3.0;
              } while (iVar35 != 0);
            }
          }
          uVar33 = 1;
          if (1 < uVar21) {
            if (3 < (int)(uVar14 - 2)) {
              iVar31 = 0x10;
              do {
                pfVar32 = (float *)(*(int *)(param_1 + 0x550) + iVar31);
                fVar9 = (float)(&DAT_01dd8f60)[uVar33];
                *pfVar32 = fVar9 * (*(float *)(*(int *)(param_1 + 0x550) + iVar31) - pfVar32[-4]);
                pfVar32[1] = (pfVar32[1] - pfVar32[-3]) * fVar9;
                pfVar32[2] = (pfVar32[2] - pfVar32[-2]) * fVar9;
                pfVar32[3] = fVar9 * (pfVar32[3] - pfVar32[-1]);
                pfVar32 = (float *)(*(int *)(param_1 + 0x550) + iVar31);
                fVar9 = (float)(&DAT_01dd8f64)[uVar33];
                pfVar32[4] = fVar9 * (*(float *)(*(int *)(param_1 + 0x550) + 0x10 + iVar31) -
                                     *pfVar32);
                pfVar32[5] = (pfVar32[5] - pfVar32[1]) * fVar9;
                pfVar32[6] = (pfVar32[6] - pfVar32[2]) * fVar9;
                pfVar32[7] = fVar9 * (pfVar32[7] - pfVar32[3]);
                iVar35 = *(int *)(param_1 + 0x550);
                fVar9 = (float)(&DAT_01dd8f68)[uVar33];
                *(float *)(iVar31 + 0x20 + iVar35) =
                     fVar9 * (*(float *)(iVar31 + 0x20 + iVar35) -
                             *(float *)(iVar31 + 0x10 + iVar35));
                *(float *)(iVar31 + 0x24 + iVar35) =
                     (*(float *)(iVar31 + 0x24 + iVar35) - *(float *)(iVar31 + 0x14 + iVar35)) *
                     fVar9;
                *(float *)(iVar31 + 0x28 + iVar35) =
                     (*(float *)(iVar31 + 0x28 + iVar35) - *(float *)(iVar31 + 0x18 + iVar35)) *
                     fVar9;
                uVar33 = uVar33 + 4;
                *(float *)(iVar31 + 0x2c + iVar35) =
                     fVar9 * (*(float *)(iVar31 + 0x2c + iVar35) -
                             *(float *)(iVar31 + 0x1c + iVar35));
                iVar35 = *(int *)(param_1 + 0x550);
                fVar9 = *(float *)(uVar33 * 4 + 0x1dd8f5c);
                *(float *)(iVar31 + 0x30 + iVar35) =
                     fVar9 * (*(float *)(iVar31 + 0x30 + iVar35) -
                             *(float *)(iVar31 + 0x20 + iVar35));
                *(float *)(iVar31 + 0x34 + iVar35) =
                     (*(float *)(iVar31 + 0x34 + iVar35) - *(float *)(iVar31 + 0x24 + iVar35)) *
                     fVar9;
                *(float *)(iVar31 + 0x38 + iVar35) =
                     (*(float *)(iVar31 + 0x38 + iVar35) - *(float *)(iVar31 + 0x28 + iVar35)) *
                     fVar9;
                *(float *)(iVar31 + 0x3c + iVar35) =
                     fVar9 * (*(float *)(iVar31 + 0x3c + iVar35) -
                             *(float *)(iVar31 + 0x2c + iVar35));
                iVar31 = iVar31 + 0x40;
              } while (uVar33 < uVar14 - 4);
            }
            if (uVar33 < uVar21) {
              iVar31 = uVar33 << 4;
              do {
                pfVar32 = (float *)(*(int *)(param_1 + 0x550) + iVar31);
                pfVar23 = (float *)(*(int *)(param_1 + 0x550) + iVar31);
                uVar33 = uVar33 + 1;
                iVar31 = iVar31 + 0x10;
                fVar9 = *(float *)(uVar33 * 4 + 0x1dd8f5c);
                *pfVar23 = fVar9 * (*pfVar32 - pfVar23[-4]);
                pfVar23[1] = (pfVar23[1] - pfVar23[-3]) * fVar9;
                pfVar23[2] = (pfVar23[2] - pfVar23[-2]) * fVar9;
                pfVar23[3] = fVar9 * (pfVar23[3] - pfVar23[-1]);
              } while (uVar33 < uVar21);
            }
          }
          iVar31 = uVar14 - 2;
          if (iVar31 != 0) {
            iVar35 = iVar31 * 0x10;
            do {
              fVar9 = (float)(&DAT_01dd8f60)[iVar31] * -1.0;
              pfVar32 = (float *)(*(int *)(param_1 + 0x550) + iVar35);
              iVar35 = iVar35 + -0x10;
              iVar31 = iVar31 + -1;
              *pfVar32 = fVar9 * pfVar32[4] + *pfVar32;
              pfVar32[1] = pfVar32[1] + pfVar32[5] * fVar9;
              pfVar32[2] = pfVar32[2] + pfVar32[6] * fVar9;
              pfVar32[3] = pfVar32[3] + fVar9 * pfVar32[7];
            } while (iVar31 != 0);
          }
          puVar22 = (undefined4 *)(*(int *)(param_1 + 0x54c) + iVar30);
          *puVar22 = 0;
          uVar33 = 0;
          puVar22[1] = 0;
          puVar22[2] = 0;
          puVar22[3] = 0;
          if (3 < (int)uVar21) {
            iVar35 = (uVar14 - 5 >> 2) + 1;
            uVar33 = iVar35 * 4;
            iVar31 = 0x20;
            do {
              iVar26 = iVar31 + -0x20;
              pfVar32 = (float *)(*(int *)(param_1 + 0x550) + iVar26);
              fVar9 = pfVar32[5];
              fVar10 = pfVar32[1];
              fVar1 = pfVar32[6];
              fVar2 = pfVar32[2];
              fVar3 = pfVar32[7];
              fVar4 = pfVar32[3];
              pfVar23 = (float *)(*(int *)(param_1 + 0x554) + iVar26);
              *pfVar23 = (*(float *)(*(int *)(param_1 + 0x550) + 0x10 + iVar26) - *pfVar32) *
                         0.33333334;
              pfVar23[1] = (fVar9 - fVar10) * 0.33333334;
              pfVar23[2] = (fVar1 - fVar2) * 0.33333334;
              pfVar23[3] = (fVar3 - fVar4) * 0.33333334;
              iVar26 = *(int *)(param_1 + 0x550);
              fVar9 = *(float *)(iVar31 + 4 + iVar26);
              fVar10 = *(float *)(iVar31 + -0xc + iVar26);
              fVar1 = *(float *)(iVar31 + 8 + iVar26);
              fVar2 = *(float *)(iVar31 + -8 + iVar26);
              fVar3 = *(float *)(iVar31 + 0xc + iVar26);
              fVar4 = *(float *)(iVar31 + -4 + iVar26);
              pfVar32 = (float *)(iVar31 + -0x10 + *(int *)(param_1 + 0x554));
              *pfVar32 = (*(float *)(iVar31 + iVar26) - *(float *)(iVar31 + -0x10 + iVar26)) *
                         0.33333334;
              pfVar32[1] = (fVar9 - fVar10) * 0.33333334;
              pfVar32[2] = (fVar1 - fVar2) * 0.33333334;
              pfVar32[3] = (fVar3 - fVar4) * 0.33333334;
              iVar26 = *(int *)(param_1 + 0x550);
              fVar9 = *(float *)(iVar31 + 0x14 + iVar26);
              fVar10 = *(float *)(iVar31 + 4 + iVar26);
              fVar1 = *(float *)(iVar31 + 0x18 + iVar26);
              fVar2 = *(float *)(iVar31 + 8 + iVar26);
              fVar3 = *(float *)(iVar31 + 0x1c + iVar26);
              fVar4 = *(float *)(iVar31 + 0xc + iVar26);
              pfVar32 = (float *)(*(int *)(param_1 + 0x554) + iVar31);
              *pfVar32 = (*(float *)(iVar31 + 0x10 + iVar26) - *(float *)(iVar31 + iVar26)) *
                         0.33333334;
              pfVar32[1] = (fVar9 - fVar10) * 0.33333334;
              pfVar32[2] = (fVar1 - fVar2) * 0.33333334;
              pfVar32[3] = (fVar3 - fVar4) * 0.33333334;
              iVar26 = *(int *)(param_1 + 0x550);
              fVar9 = *(float *)(iVar31 + 0x24 + iVar26);
              fVar10 = *(float *)(iVar31 + 0x14 + iVar26);
              fVar1 = *(float *)(iVar31 + 0x28 + iVar26);
              fVar2 = *(float *)(iVar31 + 0x18 + iVar26);
              fVar3 = *(float *)(iVar31 + 0x2c + iVar26);
              fVar4 = *(float *)(iVar31 + 0x1c + iVar26);
              pfVar32 = (float *)(*(int *)(param_1 + 0x554) + iVar31 + 0x10);
              iVar35 = iVar35 + -1;
              *pfVar32 = (*(float *)(iVar31 + 0x20 + iVar26) - *(float *)(iVar31 + 0x10 + iVar26)) *
                         0.33333334;
              pfVar32[1] = (fVar9 - fVar10) * 0.33333334;
              pfVar32[2] = (fVar1 - fVar2) * 0.33333334;
              pfVar32[3] = (fVar3 - fVar4) * 0.33333334;
              iVar31 = iVar31 + 0x40;
            } while (iVar35 != 0);
          }
          if (uVar33 < uVar21) {
            iVar31 = uVar33 << 4;
            iVar35 = uVar21 - uVar33;
            do {
              pfVar32 = (float *)(*(int *)(param_1 + 0x550) + 0x10 + iVar31);
              pfVar23 = (float *)(*(int *)(param_1 + 0x550) + iVar31);
              fVar9 = pfVar23[5];
              fVar10 = pfVar23[1];
              fVar1 = pfVar23[6];
              fVar2 = pfVar23[2];
              fVar3 = pfVar23[7];
              fVar4 = pfVar23[3];
              pfVar24 = (float *)(*(int *)(param_1 + 0x554) + iVar31);
              iVar31 = iVar31 + 0x10;
              iVar35 = iVar35 + -1;
              *pfVar24 = (*pfVar32 - *pfVar23) * 0.33333334;
              pfVar24[1] = (fVar9 - fVar10) * 0.33333334;
              pfVar24[2] = (fVar1 - fVar2) * 0.33333334;
              pfVar24[3] = (fVar3 - fVar4) * 0.33333334;
            } while (iVar35 != 0);
          }
          puVar22 = (undefined4 *)(*(int *)(param_1 + 0x554) + iVar30);
          local_15c = 0.0;
          *puVar22 = 0;
          puVar22[1] = 0;
          puVar22[2] = 0;
          puVar22[3] = 0;
          if (3 < (int)uVar21) {
            iVar31 = (uVar14 - 5 >> 2) + 1;
            local_15c = (float)(iVar31 * 4);
            iVar30 = 0x20;
            do {
              iVar35 = iVar30 + -0x20;
              pfVar32 = (float *)(*(int *)(param_1 + 0x548) + iVar35);
              pfVar36 = (float *)(*(int *)(param_1 + 0x550) + iVar35);
              fVar9 = pfVar32[5];
              fVar10 = pfVar32[1];
              fVar1 = pfVar32[6];
              fVar2 = pfVar32[2];
              fVar3 = pfVar32[7];
              fVar4 = pfVar32[3];
              pfVar23 = (float *)(*(int *)(param_1 + 0x554) + iVar35);
              fVar5 = pfVar36[1];
              fVar6 = pfVar23[1];
              fVar7 = pfVar36[2];
              fVar8 = pfVar23[2];
              fVar11 = pfVar36[3];
              fVar12 = pfVar23[3];
              pfVar24 = (float *)(*(int *)(param_1 + 0x54c) + iVar35);
              *pfVar24 = (*(float *)(*(int *)(param_1 + 0x548) + 0x10 + iVar35) - *pfVar32) -
                         (*pfVar36 + *pfVar23);
              pfVar24[1] = (fVar9 - fVar10) - (fVar5 + fVar6);
              pfVar24[2] = (fVar1 - fVar2) - (fVar7 + fVar8);
              pfVar24[3] = (fVar3 - fVar4) - (fVar11 + fVar12);
              iVar26 = *(int *)(param_1 + 0x548);
              pfVar32 = (float *)(iVar30 + -0x10 + *(int *)(param_1 + 0x550));
              fVar9 = *(float *)(iVar26 + 4 + iVar30);
              fVar10 = *(float *)(iVar26 + 0x14 + iVar35);
              fVar1 = *(float *)(iVar26 + 8 + iVar30);
              fVar2 = *(float *)(iVar26 + 0x18 + iVar35);
              fVar3 = *(float *)(iVar26 + 0xc + iVar30);
              fVar4 = *(float *)(iVar26 + 0x1c + iVar35);
              pfVar23 = (float *)(iVar30 + -0x10 + *(int *)(param_1 + 0x554));
              fVar5 = pfVar32[1];
              fVar6 = pfVar23[1];
              fVar7 = pfVar32[2];
              fVar8 = pfVar23[2];
              fVar11 = pfVar32[3];
              fVar12 = pfVar23[3];
              pfVar24 = (float *)(iVar30 + -0x10 + *(int *)(param_1 + 0x54c));
              *pfVar24 = (*(float *)(iVar26 + iVar30) - *(float *)(iVar26 + 0x10 + iVar35)) -
                         (*pfVar32 + *pfVar23);
              pfVar24[1] = (fVar9 - fVar10) - (fVar5 + fVar6);
              pfVar24[2] = (fVar1 - fVar2) - (fVar7 + fVar8);
              pfVar24[3] = (fVar3 - fVar4) - (fVar11 + fVar12);
              iVar26 = *(int *)(param_1 + 0x548);
              iVar35 = iVar30 + 0x10;
              pfVar24 = (float *)(*(int *)(param_1 + 0x550) + iVar30);
              fVar9 = *(float *)(iVar26 + 4 + iVar35);
              fVar10 = *(float *)(iVar26 + 4 + iVar30);
              fVar1 = *(float *)(iVar26 + 8 + iVar35);
              fVar2 = *(float *)(iVar26 + 8 + iVar30);
              fVar3 = *(float *)(iVar26 + 0xc + iVar35);
              fVar4 = *(float *)(iVar26 + 0xc + iVar30);
              pfVar32 = (float *)(*(int *)(param_1 + 0x554) + iVar30);
              fVar5 = pfVar24[1];
              fVar6 = pfVar32[1];
              fVar7 = pfVar24[2];
              fVar8 = pfVar32[2];
              fVar11 = pfVar24[3];
              fVar12 = pfVar32[3];
              pfVar23 = (float *)(*(int *)(param_1 + 0x54c) + iVar30);
              *pfVar23 = (*(float *)(iVar26 + 0x10 + iVar30) - *(float *)(iVar26 + iVar30)) -
                         (*pfVar24 + *pfVar32);
              pfVar23[1] = (fVar9 - fVar10) - (fVar5 + fVar6);
              pfVar23[2] = (fVar1 - fVar2) - (fVar7 + fVar8);
              pfVar23[3] = (fVar3 - fVar4) - (fVar11 + fVar12);
              iVar26 = *(int *)(param_1 + 0x548);
              pfVar32 = (float *)(iVar26 + 0x20 + iVar30);
              fVar9 = *(float *)(iVar26 + 0x24 + iVar30);
              fVar10 = *(float *)(iVar26 + 4 + iVar35);
              fVar1 = *(float *)(iVar26 + 0x28 + iVar30);
              fVar2 = *(float *)(iVar26 + 8 + iVar35);
              fVar3 = *(float *)(iVar26 + 0x2c + iVar30);
              fVar4 = *(float *)(iVar26 + 0xc + iVar35);
              pfVar23 = (float *)(*(int *)(param_1 + 0x554) + iVar35);
              pfVar36 = (float *)(*(int *)(param_1 + 0x550) + iVar35);
              fVar5 = pfVar36[1];
              fVar6 = pfVar23[1];
              fVar7 = pfVar36[2];
              fVar8 = pfVar23[2];
              fVar11 = pfVar36[3];
              fVar12 = pfVar23[3];
              pfVar24 = (float *)(*(int *)(param_1 + 0x54c) + iVar35);
              iVar30 = iVar30 + 0x40;
              iVar31 = iVar31 + -1;
              *pfVar24 = (*pfVar32 - *(float *)(iVar26 + iVar35)) - (*pfVar36 + *pfVar23);
              pfVar24[1] = (fVar9 - fVar10) - (fVar5 + fVar6);
              pfVar24[2] = (fVar1 - fVar2) - (fVar7 + fVar8);
              pfVar24[3] = (fVar3 - fVar4) - (fVar11 + fVar12);
            } while (iVar31 != 0);
          }
          if ((uint)local_15c < uVar21) {
            iVar30 = (int)local_15c << 4;
            iVar31 = uVar21 - (int)local_15c;
            do {
              pfVar32 = (float *)(*(int *)(param_1 + 0x548) + 0x10 + iVar30);
              pfVar23 = (float *)(*(int *)(param_1 + 0x548) + iVar30);
              pfVar28 = (float *)(*(int *)(param_1 + 0x550) + iVar30);
              fVar9 = pfVar23[5];
              fVar10 = pfVar23[1];
              fVar1 = pfVar23[6];
              fVar2 = pfVar23[2];
              fVar3 = pfVar23[7];
              fVar4 = pfVar23[3];
              pfVar24 = (float *)(*(int *)(param_1 + 0x554) + iVar30);
              fVar5 = pfVar28[1];
              fVar6 = pfVar24[1];
              fVar7 = pfVar28[2];
              fVar8 = pfVar24[2];
              fVar11 = pfVar28[3];
              fVar12 = pfVar24[3];
              pfVar36 = (float *)(*(int *)(param_1 + 0x54c) + iVar30);
              iVar30 = iVar30 + 0x10;
              iVar31 = iVar31 + -1;
              *pfVar36 = (*pfVar32 - *pfVar23) - (*pfVar28 + *pfVar24);
              pfVar36[1] = (fVar9 - fVar10) - (fVar5 + fVar6);
              pfVar36[2] = (fVar1 - fVar2) - (fVar7 + fVar8);
              pfVar36[3] = (fVar3 - fVar4) - (fVar11 + fVar12);
            } while (iVar31 != 0);
          }
          *(uint *)(param_1 + 0x558) = uVar14;
        }
      }
      local_15c = 0.0;
      iVar30 = *(int *)(param_1 + 0x450) + -2;
      fVar9 = (float)iVar30;
      if (iVar30 < 0) {
        fVar9 = fVar9 + 4.2949673e+09;
      }
      if (iVar19 != 0) {
        local_14c = iVar19;
        local_144 = (float *)(iVar13 + 8 + iVar20 * 0xc);
        do {
          if (fVar16 <= local_15c) {
            fVar10 = (local_15c + 1.0) - fVar16;
          }
          else {
            fVar10 = local_15c / fVar16;
          }
          fVar38 = (float10)FUN_00fddce0();
          fVar1 = (float)fVar38;
          iVar30 = *(int *)(param_1 + 0x558) + -1;
          fVar2 = (float)iVar30;
          if (iVar30 < 0) {
            fVar2 = fVar2 + 4.2949673e+09;
          }
          if (fVar1 <= 0.0) {
            fVar1 = 0.0;
          }
          if (fVar2 < fVar1) {
            fVar1 = fVar2;
          }
          iVar30 = *(int *)(param_1 + 0x554);
          iVar31 = *(int *)(param_1 + 0x550);
          iVar35 = *(int *)(param_1 + 0x54c);
          iVar26 = *(int *)(param_1 + 0x548);
          local_158 = (float)(longlong)ROUND(fVar1);
          fVar10 = fVar10 - fVar1;
          fVar1 = *(float *)(iVar30 + 4 + (int)local_158 * 0x10);
          fVar2 = *(float *)(iVar30 + 8 + (int)local_158 * 0x10);
          fVar3 = *(float *)(iVar31 + 4 + (int)local_158 * 0x10);
          fVar4 = *(float *)(iVar31 + 8 + (int)local_158 * 0x10);
          fVar5 = *(float *)(iVar35 + 4 + (int)local_158 * 0x10);
          fVar6 = *(float *)(iVar35 + 8 + (int)local_158 * 0x10);
          fVar7 = *(float *)(iVar26 + 4 + (int)local_158 * 0x10);
          fVar8 = *(float *)(iVar26 + 8 + (int)local_158 * 0x10);
          local_144[-2] =
               ((fVar10 * *(float *)(iVar30 + (int)local_158 * 0x10) +
                *(float *)(iVar31 + (int)local_158 * 0x10)) * fVar10 +
               *(float *)(iVar35 + (int)local_158 * 0x10)) * fVar10 +
               *(float *)(iVar26 + (int)local_158 * 0x10);
          local_144[-1] = fVar7 + fVar10 * (fVar5 + fVar10 * (fVar3 + fVar1 * fVar10));
          *local_144 = fVar8 + fVar10 * (fVar6 + fVar10 * (fVar4 + fVar2 * fVar10));
          local_15c = fVar9 / fVar17 + local_15c;
          local_14c = local_14c + -1;
          local_144 = local_144 + 6;
        } while (local_14c != 0);
      }
      uVar14 = *(uint *)(param_1 + 0x450);
      iVar30 = *(int *)(param_1 + 0x460 + local_fc * 4);
      if (uVar14 < 3) {
        FUN_00dd5650(&DAT_016df4c0,uVar14);
      }
      else {
        uVar21 = *(uint *)(param_1 + 0x55c);
        if (uVar21 < uVar14) {
          puVar39 = &DAT_016df478;
LAB_00eef066:
          FUN_00dd5650(puVar39,CONCAT44(uVar21,uVar14));
        }
        else if (*(int *)(param_1 + 0x560) == 0) {
          FUN_00dd5650();
        }
        else {
          uVar21 = 0;
          if (3 < (int)uVar14) {
            iVar35 = (uVar14 - 4 >> 2) + 1;
            uVar21 = iVar35 * 4;
            puVar22 = (undefined4 *)(iVar30 + 0x14);
            iVar31 = 0;
            do {
              iVar26 = *(int *)(param_1 + 0x560);
              *(undefined4 *)(iVar26 + iVar31) = puVar22[-5];
              iVar26 = iVar26 + iVar31;
              *(undefined4 *)(iVar26 + 4) = puVar22[-4];
              *(undefined4 *)(iVar26 + 8) = puVar22[-3];
              *(undefined4 *)(iVar26 + 0xc) = 0x3f800000;
              puVar27 = (undefined4 *)(iVar31 + 0x10 + *(int *)(param_1 + 0x560));
              *puVar27 = puVar22[-2];
              puVar27[1] = puVar22[-1];
              puVar27[2] = *puVar22;
              puVar27[3] = 0x3f800000;
              puVar27 = (undefined4 *)(iVar31 + 0x20 + *(int *)(param_1 + 0x560));
              *puVar27 = puVar22[1];
              puVar27[1] = puVar22[2];
              puVar27[2] = puVar22[3];
              puVar27[3] = 0x3f800000;
              puVar27 = (undefined4 *)(*(int *)(param_1 + 0x560) + iVar31 + 0x30);
              iVar35 = iVar35 + -1;
              *puVar27 = puVar22[4];
              puVar27[1] = puVar22[5];
              puVar27[2] = puVar22[6];
              puVar27[3] = 0x3f800000;
              puVar22 = puVar22 + 0xc;
              iVar31 = iVar31 + 0x40;
            } while (iVar35 != 0);
          }
          if (uVar21 < uVar14) {
            iVar31 = uVar21 << 4;
            iVar35 = uVar14 - uVar21;
            puVar22 = (undefined4 *)(iVar30 + 8 + uVar21 * 0xc);
            do {
              puVar27 = (undefined4 *)(*(int *)(param_1 + 0x560) + iVar31);
              *puVar27 = puVar22[-2];
              iVar31 = iVar31 + 0x10;
              iVar35 = iVar35 + -1;
              puVar27[1] = puVar22[-1];
              puVar27[2] = *puVar22;
              puVar27[3] = 0x3f800000;
              puVar22 = puVar22 + 3;
            } while (iVar35 != 0);
          }
          uVar21 = *(uint *)(param_1 + 0x55c);
          if (uVar21 < uVar14) {
            puVar39 = &DAT_016d98c0;
            goto LAB_00eef066;
          }
          *(undefined4 *)(param_1 + 0x548) = *(undefined4 *)(param_1 + 0x560);
          puVar22 = *(undefined4 **)(param_1 + 0x550);
          *puVar22 = 0;
          uVar21 = uVar14 - 1;
          puVar22[1] = 0;
          puVar22[2] = 0;
          iVar30 = uVar21 * 0x10;
          puVar22[3] = 0;
          puVar22 = (undefined4 *)(*(int *)(param_1 + 0x550) + iVar30);
          *puVar22 = 0;
          puVar22[1] = 0;
          puVar22[2] = 0;
          local_14c = 1;
          puVar22[3] = 0;
          if (1 < uVar21) {
            if (3 < (int)(uVar14 - 2)) {
              iVar35 = (uVar14 - 6 >> 2) + 1;
              local_14c = iVar35 * 4 + 1;
              iVar31 = 0x10;
              do {
                pfVar32 = (float *)(iVar31 + *(int *)(param_1 + 0x548));
                fVar9 = pfVar32[5];
                fVar10 = pfVar32[-3];
                fVar1 = pfVar32[6];
                fVar2 = pfVar32[-2];
                fVar3 = pfVar32[7];
                fVar4 = pfVar32[-1];
                fVar5 = pfVar32[1];
                fVar6 = pfVar32[2];
                fVar7 = pfVar32[3];
                pfVar23 = (float *)(*(int *)(param_1 + 0x550) + iVar31);
                *pfVar23 = ((*(float *)(iVar31 + 0x10 + *(int *)(param_1 + 0x548)) + pfVar32[-4]) -
                           *pfVar32 * 2.0) * 3.0;
                pfVar23[1] = ((fVar9 + fVar10) - fVar5 * 2.0) * 3.0;
                pfVar23[2] = ((fVar1 + fVar2) - fVar6 * 2.0) * 3.0;
                pfVar23[3] = ((fVar3 + fVar4) - fVar7 * 2.0) * 3.0;
                iVar15 = *(int *)(param_1 + 0x548);
                iVar26 = iVar31 + 0x20;
                fVar9 = *(float *)(iVar31 + 0x24 + iVar15);
                fVar10 = *(float *)(iVar31 + 4 + iVar15);
                fVar1 = *(float *)(iVar31 + 0x28 + iVar15);
                fVar2 = *(float *)(iVar31 + 8 + iVar15);
                fVar3 = *(float *)(iVar31 + 0x2c + iVar15);
                fVar4 = *(float *)(iVar31 + 0xc + iVar15);
                fVar5 = *(float *)(iVar31 + 0x14 + iVar15);
                fVar6 = *(float *)(iVar31 + 0x18 + iVar15);
                fVar7 = *(float *)(iVar31 + 0x1c + iVar15);
                pfVar32 = (float *)(iVar31 + 0x10 + *(int *)(param_1 + 0x550));
                iVar25 = iVar31 + 0x30;
                *pfVar32 = ((*(float *)(iVar31 + 0x20 + iVar15) + *(float *)(iVar31 + iVar15)) -
                           *(float *)(iVar31 + 0x10 + iVar15) * 2.0) * 3.0;
                pfVar32[1] = ((fVar9 + fVar10) - fVar5 * 2.0) * 3.0;
                pfVar32[2] = ((fVar1 + fVar2) - fVar6 * 2.0) * 3.0;
                pfVar32[3] = ((fVar3 + fVar4) - fVar7 * 2.0) * 3.0;
                iVar15 = *(int *)(param_1 + 0x548);
                fVar9 = *(float *)(iVar31 + 0x34 + iVar15);
                fVar10 = *(float *)(iVar31 + 0x14 + iVar15);
                fVar1 = *(float *)(iVar31 + 0x38 + iVar15);
                fVar2 = *(float *)(iVar31 + 0x18 + iVar15);
                fVar3 = *(float *)(iVar31 + 0x3c + iVar15);
                fVar4 = *(float *)(iVar31 + 0x1c + iVar15);
                fVar5 = *(float *)(iVar31 + 0x24 + iVar15);
                fVar6 = *(float *)(iVar31 + 0x28 + iVar15);
                fVar7 = *(float *)(iVar31 + 0x2c + iVar15);
                pfVar32 = (float *)(*(int *)(param_1 + 0x550) + iVar26);
                *pfVar32 = ((*(float *)(iVar25 + iVar15) + *(float *)(iVar31 + 0x10 + iVar15)) -
                           *(float *)(iVar26 + iVar15) * 2.0) * 3.0;
                pfVar32[1] = ((fVar9 + fVar10) - fVar5 * 2.0) * 3.0;
                pfVar32[2] = ((fVar1 + fVar2) - fVar6 * 2.0) * 3.0;
                pfVar32[3] = ((fVar3 + fVar4) - fVar7 * 2.0) * 3.0;
                iVar15 = *(int *)(param_1 + 0x548);
                fVar9 = *(float *)(iVar31 + 0x44 + iVar15);
                fVar10 = *(float *)(iVar31 + 0x24 + iVar15);
                fVar1 = *(float *)(iVar31 + 0x48 + iVar15);
                fVar2 = *(float *)(iVar31 + 0x28 + iVar15);
                fVar3 = *(float *)(iVar31 + 0x4c + iVar15);
                fVar4 = *(float *)(iVar31 + 0x2c + iVar15);
                pfVar32 = (float *)(*(int *)(param_1 + 0x550) + iVar25);
                iVar35 = iVar35 + -1;
                fVar5 = *(float *)(iVar31 + 0x34 + iVar15);
                fVar6 = *(float *)(iVar31 + 0x38 + iVar15);
                fVar7 = *(float *)(iVar31 + 0x3c + iVar15);
                *pfVar32 = ((*(float *)(iVar31 + 0x40 + iVar15) + *(float *)(iVar26 + iVar15)) -
                           *(float *)(iVar25 + iVar15) * 2.0) * 3.0;
                pfVar32[1] = ((fVar9 + fVar10) - fVar5 * 2.0) * 3.0;
                pfVar32[2] = ((fVar1 + fVar2) - fVar6 * 2.0) * 3.0;
                pfVar32[3] = ((fVar3 + fVar4) - fVar7 * 2.0) * 3.0;
                iVar31 = iVar31 + 0x40;
              } while (iVar35 != 0);
            }
            if (local_14c < uVar21) {
              iVar31 = local_14c << 4;
              iVar35 = uVar21 - local_14c;
              do {
                pfVar32 = (float *)(*(int *)(param_1 + 0x548) + 0x10 + iVar31);
                pfVar23 = (float *)(*(int *)(param_1 + 0x548) + iVar31);
                fVar9 = pfVar23[5];
                fVar10 = pfVar23[-3];
                fVar1 = pfVar23[6];
                fVar2 = pfVar23[-2];
                fVar3 = pfVar23[7];
                fVar4 = pfVar23[-1];
                fVar5 = pfVar23[1];
                fVar6 = pfVar23[2];
                fVar7 = pfVar23[3];
                pfVar24 = (float *)(*(int *)(param_1 + 0x550) + iVar31);
                iVar31 = iVar31 + 0x10;
                iVar35 = iVar35 + -1;
                *pfVar24 = ((*pfVar32 + pfVar23[-4]) - *pfVar23 * 2.0) * 3.0;
                pfVar24[1] = ((fVar9 + fVar10) - fVar5 * 2.0) * 3.0;
                pfVar24[2] = ((fVar1 + fVar2) - fVar6 * 2.0) * 3.0;
                pfVar24[3] = ((fVar3 + fVar4) - fVar7 * 2.0) * 3.0;
              } while (iVar35 != 0);
            }
          }
          uVar33 = 1;
          if (1 < uVar21) {
            if (3 < (int)(uVar14 - 2)) {
              iVar31 = 0x10;
              do {
                pfVar32 = (float *)(*(int *)(param_1 + 0x550) + iVar31);
                fVar9 = (float)(&DAT_01dd8f60)[uVar33];
                *pfVar32 = fVar9 * (*(float *)(*(int *)(param_1 + 0x550) + iVar31) - pfVar32[-4]);
                pfVar32[1] = fVar9 * (pfVar32[1] - pfVar32[-3]);
                pfVar32[2] = fVar9 * (pfVar32[2] - pfVar32[-2]);
                pfVar32[3] = fVar9 * (pfVar32[3] - pfVar32[-1]);
                pfVar32 = (float *)(*(int *)(param_1 + 0x550) + iVar31);
                fVar9 = (float)(&DAT_01dd8f64)[uVar33];
                pfVar32[4] = fVar9 * (*(float *)(*(int *)(param_1 + 0x550) + 0x10 + iVar31) -
                                     *pfVar32);
                pfVar32[5] = fVar9 * (pfVar32[5] - pfVar32[1]);
                pfVar32[6] = fVar9 * (pfVar32[6] - pfVar32[2]);
                pfVar32[7] = fVar9 * (pfVar32[7] - pfVar32[3]);
                iVar35 = *(int *)(param_1 + 0x550);
                pfVar32 = (float *)(iVar35 + 0x2c + iVar31);
                pfVar23 = (float *)(iVar35 + 0x1c + iVar31);
                fVar9 = (float)(&DAT_01dd8f68)[uVar33];
                *(float *)(iVar35 + 0x20 + iVar31) =
                     fVar9 * (*(float *)(iVar35 + 0x20 + iVar31) -
                             *(float *)(iVar35 + 0x10 + iVar31));
                *(float *)(iVar35 + 0x24 + iVar31) =
                     fVar9 * (*(float *)(iVar35 + 0x24 + iVar31) -
                             *(float *)(iVar35 + 0x14 + iVar31));
                *(float *)(iVar35 + 0x28 + iVar31) =
                     fVar9 * (*(float *)(iVar35 + 0x28 + iVar31) -
                             *(float *)(iVar35 + 0x18 + iVar31));
                uVar33 = uVar33 + 4;
                iVar31 = iVar31 + 0x40;
                *(float *)(iVar35 + -0x14 + iVar31) = fVar9 * (*pfVar32 - *pfVar23);
                iVar35 = *(int *)(param_1 + 0x550);
                fVar9 = *(float *)(uVar33 * 4 + 0x1dd8f5c);
                *(float *)(iVar35 + -0x10 + iVar31) =
                     fVar9 * (*(float *)(iVar35 + -0x10 + iVar31) -
                             *(float *)(iVar35 + -0x20 + iVar31));
                *(float *)(iVar35 + -0xc + iVar31) =
                     fVar9 * (*(float *)(iVar35 + -0xc + iVar31) -
                             *(float *)(iVar35 + -0x1c + iVar31));
                *(float *)(iVar35 + -8 + iVar31) =
                     fVar9 * (*(float *)(iVar35 + -8 + iVar31) - *(float *)(iVar35 + -0x18 + iVar31)
                             );
                *(float *)(iVar35 + -4 + iVar31) =
                     fVar9 * (*(float *)(iVar35 + -4 + iVar31) - *(float *)(iVar35 + -0x14 + iVar31)
                             );
              } while (uVar33 < uVar14 - 4);
            }
            if (uVar33 < uVar21) {
              iVar31 = uVar33 << 4;
              do {
                pfVar32 = (float *)(*(int *)(param_1 + 0x550) + iVar31);
                pfVar23 = (float *)(*(int *)(param_1 + 0x550) + iVar31);
                uVar33 = uVar33 + 1;
                iVar31 = iVar31 + 0x10;
                fVar9 = *(float *)(uVar33 * 4 + 0x1dd8f5c);
                *pfVar23 = fVar9 * (*pfVar32 - pfVar23[-4]);
                pfVar23[1] = fVar9 * (pfVar23[1] - pfVar23[-3]);
                pfVar23[2] = fVar9 * (pfVar23[2] - pfVar23[-2]);
                pfVar23[3] = fVar9 * (pfVar23[3] - pfVar23[-1]);
              } while (uVar33 < uVar21);
            }
          }
          iVar31 = uVar14 - 2;
          if (iVar31 != 0) {
            iVar35 = iVar31 * 0x10;
            do {
              fVar9 = (float)(&DAT_01dd8f60)[iVar31] * -1.0;
              pfVar32 = (float *)(*(int *)(param_1 + 0x550) + iVar35);
              iVar35 = iVar35 + -0x10;
              iVar31 = iVar31 + -1;
              *pfVar32 = *pfVar32 + fVar9 * pfVar32[4];
              pfVar32[1] = pfVar32[1] + pfVar32[5] * fVar9;
              pfVar32[2] = pfVar32[2] + pfVar32[6] * fVar9;
              pfVar32[3] = pfVar32[3] + fVar9 * pfVar32[7];
            } while (iVar31 != 0);
          }
          puVar22 = (undefined4 *)(*(int *)(param_1 + 0x54c) + iVar30);
          *puVar22 = 0;
          uVar33 = 0;
          puVar22[1] = 0;
          puVar22[2] = 0;
          puVar22[3] = 0;
          if (3 < (int)uVar21) {
            iVar35 = (uVar14 - 5 >> 2) + 1;
            iVar31 = 0x20;
            uVar33 = iVar35 * 4;
            do {
              iVar26 = iVar31 + -0x20;
              pfVar32 = (float *)(*(int *)(param_1 + 0x550) + iVar26);
              fVar9 = pfVar32[5];
              fVar10 = pfVar32[1];
              fVar1 = pfVar32[6];
              fVar2 = pfVar32[2];
              fVar3 = pfVar32[7];
              fVar4 = pfVar32[3];
              pfVar23 = (float *)(*(int *)(param_1 + 0x554) + iVar26);
              *pfVar23 = (*(float *)(*(int *)(param_1 + 0x550) + 0x10 + iVar26) - *pfVar32) *
                         0.33333334;
              pfVar23[1] = (fVar9 - fVar10) * 0.33333334;
              pfVar23[2] = (fVar1 - fVar2) * 0.33333334;
              pfVar23[3] = (fVar3 - fVar4) * 0.33333334;
              iVar25 = *(int *)(param_1 + 0x550);
              fVar9 = *(float *)(iVar25 + 4 + iVar31);
              fVar10 = *(float *)(iVar25 + 0x14 + iVar26);
              fVar1 = *(float *)(iVar25 + 8 + iVar31);
              fVar2 = *(float *)(iVar25 + 0x18 + iVar26);
              fVar3 = *(float *)(iVar25 + 0xc + iVar31);
              fVar4 = *(float *)(iVar25 + 0x1c + iVar26);
              pfVar32 = (float *)(iVar31 + -0x10 + *(int *)(param_1 + 0x554));
              *pfVar32 = (*(float *)(iVar25 + iVar31) - *(float *)(iVar25 + 0x10 + iVar26)) *
                         0.33333334;
              pfVar32[1] = (fVar9 - fVar10) * 0.33333334;
              pfVar32[2] = (fVar1 - fVar2) * 0.33333334;
              pfVar32[3] = (fVar3 - fVar4) * 0.33333334;
              iVar25 = *(int *)(param_1 + 0x550);
              iVar26 = iVar31 + 0x10;
              fVar9 = *(float *)(iVar25 + 4 + iVar26);
              fVar10 = *(float *)(iVar25 + 4 + iVar31);
              fVar1 = *(float *)(iVar25 + 8 + iVar26);
              fVar2 = *(float *)(iVar25 + 8 + iVar31);
              fVar3 = *(float *)(iVar25 + 0xc + iVar26);
              fVar4 = *(float *)(iVar25 + 0xc + iVar31);
              pfVar32 = (float *)(*(int *)(param_1 + 0x554) + iVar31);
              *pfVar32 = (*(float *)(iVar25 + 0x10 + iVar31) - *(float *)(iVar25 + iVar31)) *
                         0.33333334;
              pfVar32[1] = (fVar9 - fVar10) * 0.33333334;
              pfVar32[2] = (fVar1 - fVar2) * 0.33333334;
              iVar31 = iVar31 + 0x40;
              pfVar32[3] = (fVar3 - fVar4) * 0.33333334;
              iVar25 = *(int *)(param_1 + 0x550);
              fVar9 = *(float *)(iVar25 + -0x1c + iVar31);
              fVar10 = *(float *)(iVar25 + 4 + iVar26);
              fVar1 = *(float *)(iVar25 + -0x18 + iVar31);
              fVar2 = *(float *)(iVar25 + 8 + iVar26);
              fVar3 = *(float *)(iVar25 + -0x14 + iVar31);
              fVar4 = *(float *)(iVar25 + 0xc + iVar26);
              pfVar32 = (float *)(*(int *)(param_1 + 0x554) + iVar26);
              iVar35 = iVar35 + -1;
              *pfVar32 = (*(float *)(iVar25 + -0x20 + iVar31) - *(float *)(iVar25 + iVar26)) *
                         0.33333334;
              pfVar32[1] = (fVar9 - fVar10) * 0.33333334;
              pfVar32[2] = (fVar1 - fVar2) * 0.33333334;
              pfVar32[3] = (fVar3 - fVar4) * 0.33333334;
            } while (iVar35 != 0);
          }
          if (uVar33 < uVar21) {
            iVar31 = uVar33 << 4;
            iVar35 = uVar21 - uVar33;
            do {
              pfVar32 = (float *)(*(int *)(param_1 + 0x550) + 0x10 + iVar31);
              pfVar23 = (float *)(*(int *)(param_1 + 0x550) + iVar31);
              fVar9 = pfVar23[5];
              fVar10 = pfVar23[1];
              fVar1 = pfVar23[6];
              fVar2 = pfVar23[2];
              fVar3 = pfVar23[7];
              fVar4 = pfVar23[3];
              pfVar24 = (float *)(*(int *)(param_1 + 0x554) + iVar31);
              iVar31 = iVar31 + 0x10;
              iVar35 = iVar35 + -1;
              *pfVar24 = (*pfVar32 - *pfVar23) * 0.33333334;
              pfVar24[1] = (fVar9 - fVar10) * 0.33333334;
              pfVar24[2] = (fVar1 - fVar2) * 0.33333334;
              pfVar24[3] = (fVar3 - fVar4) * 0.33333334;
            } while (iVar35 != 0);
          }
          puVar22 = (undefined4 *)(*(int *)(param_1 + 0x554) + iVar30);
          *puVar22 = 0;
          local_14c = 0;
          puVar22[1] = 0;
          puVar22[2] = 0;
          puVar22[3] = 0;
          if (3 < (int)uVar21) {
            iVar31 = (uVar14 - 5 >> 2) + 1;
            local_14c = iVar31 * 4;
            iVar30 = 0x20;
            do {
              iVar35 = iVar30 + -0x20;
              pfVar32 = (float *)(*(int *)(param_1 + 0x548) + iVar35);
              pfVar36 = (float *)(*(int *)(param_1 + 0x550) + iVar35);
              fVar9 = pfVar32[5];
              fVar10 = pfVar32[1];
              fVar1 = pfVar32[6];
              fVar2 = pfVar32[2];
              fVar3 = pfVar32[7];
              fVar4 = pfVar32[3];
              pfVar23 = (float *)(*(int *)(param_1 + 0x554) + iVar35);
              fVar5 = pfVar36[1];
              fVar6 = pfVar23[1];
              fVar7 = pfVar36[2];
              fVar8 = pfVar23[2];
              fVar11 = pfVar36[3];
              fVar12 = pfVar23[3];
              pfVar24 = (float *)(*(int *)(param_1 + 0x54c) + iVar35);
              *pfVar24 = (*(float *)(*(int *)(param_1 + 0x548) + 0x10 + iVar35) - *pfVar32) -
                         (*pfVar36 + *pfVar23);
              pfVar24[1] = (fVar9 - fVar10) - (fVar5 + fVar6);
              pfVar24[2] = (fVar1 - fVar2) - (fVar7 + fVar8);
              pfVar24[3] = (fVar3 - fVar4) - (fVar11 + fVar12);
              iVar26 = *(int *)(param_1 + 0x548);
              pfVar32 = (float *)(iVar30 + -0x10 + *(int *)(param_1 + 0x550));
              fVar9 = *(float *)(iVar26 + 4 + iVar30);
              fVar10 = *(float *)(iVar26 + 0x14 + iVar35);
              fVar1 = *(float *)(iVar26 + 8 + iVar30);
              fVar2 = *(float *)(iVar26 + 0x18 + iVar35);
              fVar3 = *(float *)(iVar26 + 0xc + iVar30);
              fVar4 = *(float *)(iVar26 + 0x1c + iVar35);
              pfVar23 = (float *)(iVar30 + -0x10 + *(int *)(param_1 + 0x554));
              fVar5 = pfVar32[1];
              fVar6 = pfVar23[1];
              fVar7 = pfVar32[2];
              fVar8 = pfVar23[2];
              fVar11 = pfVar32[3];
              fVar12 = pfVar23[3];
              pfVar24 = (float *)(iVar30 + -0x10 + *(int *)(param_1 + 0x54c));
              *pfVar24 = (*(float *)(iVar26 + iVar30) - *(float *)(iVar26 + 0x10 + iVar35)) -
                         (*pfVar32 + *pfVar23);
              pfVar24[1] = (fVar9 - fVar10) - (fVar5 + fVar6);
              pfVar24[2] = (fVar1 - fVar2) - (fVar7 + fVar8);
              pfVar24[3] = (fVar3 - fVar4) - (fVar11 + fVar12);
              iVar26 = *(int *)(param_1 + 0x548);
              iVar35 = iVar30 + 0x10;
              pfVar24 = (float *)(*(int *)(param_1 + 0x550) + iVar30);
              fVar9 = *(float *)(iVar26 + 4 + iVar35);
              fVar10 = *(float *)(iVar26 + 4 + iVar30);
              fVar1 = *(float *)(iVar26 + 8 + iVar35);
              fVar2 = *(float *)(iVar26 + 8 + iVar30);
              fVar3 = *(float *)(iVar26 + 0xc + iVar35);
              fVar4 = *(float *)(iVar26 + 0xc + iVar30);
              pfVar32 = (float *)(*(int *)(param_1 + 0x554) + iVar30);
              fVar5 = pfVar24[1];
              fVar6 = pfVar32[1];
              fVar7 = pfVar24[2];
              fVar8 = pfVar32[2];
              fVar11 = pfVar24[3];
              fVar12 = pfVar32[3];
              pfVar23 = (float *)(*(int *)(param_1 + 0x54c) + iVar30);
              *pfVar23 = (*(float *)(iVar26 + 0x10 + iVar30) - *(float *)(iVar26 + iVar30)) -
                         (*pfVar24 + *pfVar32);
              pfVar23[1] = (fVar9 - fVar10) - (fVar5 + fVar6);
              pfVar23[2] = (fVar1 - fVar2) - (fVar7 + fVar8);
              pfVar23[3] = (fVar3 - fVar4) - (fVar11 + fVar12);
              iVar26 = *(int *)(param_1 + 0x548);
              pfVar32 = (float *)(iVar26 + 0x20 + iVar30);
              fVar9 = *(float *)(iVar26 + 0x24 + iVar30);
              fVar10 = *(float *)(iVar26 + 4 + iVar35);
              fVar1 = *(float *)(iVar26 + 0x28 + iVar30);
              fVar2 = *(float *)(iVar26 + 8 + iVar35);
              fVar3 = *(float *)(iVar26 + 0x2c + iVar30);
              fVar4 = *(float *)(iVar26 + 0xc + iVar35);
              pfVar23 = (float *)(*(int *)(param_1 + 0x554) + iVar35);
              pfVar36 = (float *)(*(int *)(param_1 + 0x550) + iVar35);
              fVar5 = pfVar36[1];
              fVar6 = pfVar23[1];
              fVar7 = pfVar36[2];
              fVar8 = pfVar23[2];
              fVar11 = pfVar36[3];
              fVar12 = pfVar23[3];
              pfVar24 = (float *)(*(int *)(param_1 + 0x54c) + iVar35);
              iVar30 = iVar30 + 0x40;
              iVar31 = iVar31 + -1;
              *pfVar24 = (*pfVar32 - *(float *)(iVar26 + iVar35)) - (*pfVar36 + *pfVar23);
              pfVar24[1] = (fVar9 - fVar10) - (fVar5 + fVar6);
              pfVar24[2] = (fVar1 - fVar2) - (fVar7 + fVar8);
              pfVar24[3] = (fVar3 - fVar4) - (fVar11 + fVar12);
            } while (iVar31 != 0);
          }
          if (local_14c < uVar21) {
            iVar30 = local_14c << 4;
            iVar31 = uVar21 - local_14c;
            do {
              pfVar32 = (float *)(*(int *)(param_1 + 0x548) + 0x10 + iVar30);
              pfVar23 = (float *)(*(int *)(param_1 + 0x548) + iVar30);
              pfVar28 = (float *)(*(int *)(param_1 + 0x550) + iVar30);
              fVar9 = pfVar23[5];
              fVar10 = pfVar23[1];
              fVar1 = pfVar23[6];
              fVar2 = pfVar23[2];
              fVar3 = pfVar23[7];
              fVar4 = pfVar23[3];
              pfVar24 = (float *)(*(int *)(param_1 + 0x554) + iVar30);
              fVar5 = pfVar28[1];
              fVar6 = pfVar24[1];
              fVar7 = pfVar28[2];
              fVar8 = pfVar24[2];
              fVar11 = pfVar28[3];
              fVar12 = pfVar24[3];
              pfVar36 = (float *)(*(int *)(param_1 + 0x54c) + iVar30);
              iVar30 = iVar30 + 0x10;
              iVar31 = iVar31 + -1;
              *pfVar36 = (*pfVar32 - *pfVar23) - (*pfVar28 + *pfVar24);
              pfVar36[1] = (fVar9 - fVar10) - (fVar5 + fVar6);
              pfVar36[2] = (fVar1 - fVar2) - (fVar7 + fVar8);
              pfVar36[3] = (fVar3 - fVar4) - (fVar11 + fVar12);
            } while (iVar31 != 0);
          }
          *(uint *)(param_1 + 0x558) = uVar14;
        }
      }
      local_148 = 0.0;
      iVar30 = *(int *)(param_1 + 0x450) + -2;
      fVar9 = (float)iVar30;
      if (iVar30 < 0) {
        fVar9 = fVar9 + 4.2949673e+09;
      }
      if (iVar19 != 0) {
        local_14c = iVar19;
        local_134 = (float *)(iVar13 + 8 + (iVar20 * 3 + 3) * 4);
        do {
          if (fVar16 <= local_148) {
            fVar10 = (local_148 + 1.0) - fVar16;
          }
          else {
            fVar10 = local_148 / fVar16;
          }
          fVar38 = (float10)FUN_00fddce0();
          local_158 = (float)fVar38;
          iVar30 = *(int *)(param_1 + 0x558) + -1;
          fVar1 = (float)iVar30;
          if (iVar30 < 0) {
            fVar1 = fVar1 + 4.2949673e+09;
          }
          if (local_158 <= 0.0) {
            local_158 = 0.0;
          }
          if (fVar1 < local_158) {
            local_158 = fVar1;
          }
          iVar30 = *(int *)(param_1 + 0x554);
          iVar20 = *(int *)(param_1 + 0x550);
          iVar31 = *(int *)(param_1 + 0x54c);
          iVar35 = *(int *)(param_1 + 0x548);
          local_140 = (int)(longlong)ROUND(local_158);
          fVar10 = fVar10 - local_158;
          fVar1 = *(float *)(iVar30 + 4 + local_140 * 0x10);
          fVar2 = *(float *)(iVar30 + 8 + local_140 * 0x10);
          fVar3 = *(float *)(iVar20 + 4 + local_140 * 0x10);
          fVar4 = *(float *)(iVar20 + 8 + local_140 * 0x10);
          fVar5 = *(float *)(iVar31 + 4 + local_140 * 0x10);
          fVar6 = *(float *)(iVar31 + 8 + local_140 * 0x10);
          fVar7 = *(float *)(iVar35 + 4 + local_140 * 0x10);
          fVar8 = *(float *)(iVar35 + 8 + local_140 * 0x10);
          local_134[-2] =
               (*(float *)(iVar31 + local_140 * 0x10) +
               (*(float *)(iVar20 + local_140 * 0x10) +
               fVar10 * *(float *)(iVar30 + local_140 * 0x10)) * fVar10) * fVar10 +
               *(float *)(iVar35 + local_140 * 0x10);
          local_134[-1] = fVar7 + fVar10 * (fVar5 + fVar10 * (fVar3 + fVar1 * fVar10));
          *local_134 = fVar8 + fVar10 * (fVar6 + fVar10 * (fVar4 + fVar2 * fVar10));
          local_148 = fVar9 / fVar17 + local_148;
          local_14c = local_14c + -1;
          local_134 = local_134 + 6;
        } while (local_14c != 0);
      }
      local_fc = local_fc + 1;
    } while (local_fc < iVar37);
  }
  iVar30 = *(int *)(param_1 + 0x540);
  iVar37 = 1;
  if (1 < iVar30) {
    if (3 < iVar30 + -1) {
      puVar22 = (undefined4 *)(iVar13 + 4 + iVar19 * 0x18);
      puVar27 = (undefined4 *)(iVar19 * 0x60 + 0x4c + iVar13);
      puVar34 = (undefined4 *)(iVar13 + 0x34 + iVar19 * 0x48);
      puVar29 = (undefined4 *)(iVar13 + 0x1c + iVar19 * 0x30);
      local_134 = (float *)((iVar30 - 5U >> 2) + 1);
      iVar37 = (int)local_134 * 4 + 1;
      do {
        puVar22[-1] = puVar22[-4];
        *puVar22 = puVar22[-3];
        puVar22[1] = puVar22[-2];
        puVar22[2] = puVar22[5];
        puVar22[3] = puVar22[6];
        puVar22[4] = puVar22[7];
        puVar22 = puVar22 + iVar19 * 0x18 + 0x18;
        puVar29[-1] = puVar29[-4];
        *puVar29 = puVar29[-3];
        puVar29[1] = puVar29[-2];
        puVar29[2] = puVar29[5];
        puVar29[3] = puVar29[6];
        puVar29[4] = puVar29[7];
        puVar29 = puVar29 + iVar19 * 0x18 + 0x18;
        puVar34[-1] = puVar34[-4];
        *puVar34 = puVar34[-3];
        puVar34[1] = puVar34[-2];
        puVar34[2] = puVar34[5];
        puVar34[3] = puVar34[6];
        puVar34[4] = puVar34[7];
        puVar34 = puVar34 + iVar19 * 0x18 + 0x18;
        puVar27[-1] = puVar27[-4];
        *puVar27 = puVar27[-3];
        puVar27[1] = puVar27[-2];
        puVar27[2] = puVar27[5];
        puVar27[3] = puVar27[6];
        puVar27[4] = puVar27[7];
        puVar27 = puVar27 + iVar19 * 0x18 + 0x18;
        local_134 = (float *)((int)local_134 + -1);
      } while (local_134 != (float *)0x0);
    }
    if (iVar37 < iVar30) {
      puVar22 = (undefined4 *)(iVar13 + -0x14 + (iVar18 + 3) * iVar37 * 0x18);
      iVar30 = iVar30 - iVar37;
      do {
        puVar22[-1] = puVar22[-4];
        *puVar22 = puVar22[-3];
        puVar22[1] = puVar22[-2];
        puVar22[2] = puVar22[5];
        puVar22[3] = puVar22[6];
        puVar22[4] = puVar22[7];
        puVar22 = puVar22 + (iVar19 * 3 + 3) * 2;
        iVar30 = iVar30 + -1;
      } while (iVar30 != 0);
    }
  }
  FUN_00f99d50(iVar13,0xc,*(int *)(param_1 + 0x520) * iVar19 + *(int *)(param_1 + 0x524));
  return;
}

// 00F144A0  esp06::vf08  size=1091  [class]
void __fastcall esp06::vf08(int param_1)

{
  float *pfVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  float fVar5;
  undefined4 *puVar6;
  short sVar7;
  int *piVar8;
  float10 fVar9;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_28;
  int local_24;
  float local_20;
  float local_1c;
  float local_18;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&local_44;
  piVar8 = (int *)(param_1 + 0x3a0);
  FUN_00edfc20(piVar8);
  FUN_00f0b530(piVar8);
  if (*(int *)(param_1 + 0x50) == 0) {
    *piVar8 = 0;
  }
  else {
    *piVar8 = *(int *)(param_1 + 0x50) + 0x10;
  }
  FUN_00efb130(piVar8);
  FUN_00efbd40(piVar8);
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_1 + 400);
  *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_1 + 0x194);
  *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_1 + 0x198);
  *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_1 + 0x19c);
  if (*(float *)(param_1 + 0x110) <= 0.01) {
    *(undefined4 *)(param_1 + 0x5bc) = 2;
  }
  if (*(int *)(param_1 + 0x5bc) < 1) {
    local_44 = *(float *)(param_1 + 0x530) * *(float *)(param_1 + 0x110);
    *(undefined4 *)(param_1 + 0x52c) = *(undefined4 *)(param_1 + 0x528);
    *(float *)(param_1 + 0x528) = *(float *)(param_1 + 0x528) + local_44;
    iVar4 = FUN_00fdbc60();
    iVar2 = FUN_00fdbc60();
    if ((iVar2 != iVar4) && (iVar4 = *(int *)(param_1 + 0x51c), 0 < iVar4)) {
      piVar8 = (int *)(param_1 + 0x45c);
      do {
        iVar2 = *(int *)(param_1 + 0x450) + -1;
        if (iVar2 != 0) {
          puVar6 = (undefined4 *)(*piVar8 + iVar2 * 0xc);
          puVar3 = puVar6 + -1;
          do {
            *puVar6 = puVar3[-2];
            iVar2 = iVar2 + -1;
            puVar3[2] = puVar3[-1];
            puVar3[3] = *puVar3;
            puVar3 = puVar3 + -3;
            puVar6 = puVar6 + -3;
          } while (iVar2 != 0);
        }
        piVar8 = piVar8 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  else {
    *(int *)(param_1 + 0x5bc) = *(int *)(param_1 + 0x5bc) + -1;
  }
  sVar7 = *(short *)(param_1 + 0x5b4);
  if (*(short *)(param_1 + 0x4e) <= *(short *)(param_1 + 0x5b4)) {
    sVar7 = *(short *)(param_1 + 0x4e);
  }
  iVar4 = FUN_00a7c990(&DAT_01ee11f4);
  if (iVar4 == 0) {
    iVar4 = FUN_00a81330();
    if (iVar4 != 0) {
      local_24 = FUN_00a7c800();
      goto LAB_00f14631;
    }
  }
  local_24 = 0;
LAB_00f14631:
  if (0 < (int)*(float *)(param_1 + 0x51c)) {
    local_28 = (float)(int)sVar7;
    piVar8 = (int *)(param_1 + 0x45c);
    local_44 = *(float *)(param_1 + 0x51c);
    do {
      iVar4 = FUN_00a12290(local_28);
      pfVar1 = (float *)*piVar8;
      if (iVar4 == 0) {
        local_40 = *(float *)(param_1 + 0x180) + *(float *)(param_1 + 0x170);
        local_3c = *(float *)(param_1 + 0x174) + *(float *)(param_1 + 0x184);
        local_38 = *(float *)(param_1 + 0x178) + *(float *)(param_1 + 0x188);
        local_34 = *(float *)(param_1 + 0x17c) + *(float *)(param_1 + 0x18c);
      }
      else {
        FUN_00f00870(&local_40,param_1 + 0x180,iVar4,iVar4 + 0x10,*(undefined4 *)(param_1 + 0x84),1)
        ;
      }
      local_28 = (float)((int)local_28 + 1);
      *pfVar1 = local_40;
      piVar8 = piVar8 + 1;
      local_44 = (float)((int)local_44 + -1);
      pfVar1[1] = local_3c;
      pfVar1[2] = local_38;
    } while (local_44 != 0.0);
  }
  if (*(float *)(param_1 + 0x5c0) != 0.0) {
    local_18 = *(float *)(param_1 + 0x5c0);
    fVar5 = *(float *)(param_1 + 0x450);
    local_44 = *(float *)(param_1 + 0x5c0);
    local_1c = local_44 * local_44;
    if (0 < *(int *)(param_1 + 0x51c)) {
      piVar8 = (int *)(param_1 + 0x45c);
      local_24 = *(int *)(param_1 + 0x51c);
      local_20 = fVar5;
      do {
        if (1 < (uint)fVar5) {
          local_44 = (float)((int)fVar5 - 1);
          iVar4 = 0xc;
          do {
            iVar2 = iVar4 + *piVar8;
            local_40 = *(float *)(iVar4 + *piVar8) - *(float *)(iVar2 + -0xc);
            local_3c = *(float *)(iVar2 + 4) - *(float *)(iVar2 + -8);
            local_38 = *(float *)(iVar2 + 8) - *(float *)(iVar2 + -4);
            local_28 = local_38 * local_38 + local_40 * local_40 + local_3c * local_3c;
            if (local_1c < local_28) {
              FUN_00ddf460(&local_40,&local_40);
              pfVar1 = (float *)(iVar4 + *piVar8);
              local_34 = local_18 * local_34;
              *pfVar1 = local_18 * local_40 + pfVar1[-3];
              pfVar1[1] = pfVar1[-2] + local_3c * local_18;
              pfVar1[2] = pfVar1[-1] + local_38 * local_18;
            }
            iVar4 = iVar4 + 0xc;
            local_44 = (float)((int)local_44 + -1);
          } while (local_44 != 0.0);
          local_44 = 0.0;
          fVar5 = local_20;
        }
        piVar8 = piVar8 + 1;
        local_24 = local_24 + -1;
      } while (local_24 != 0);
    }
  }
  pfVar1 = *(float **)(param_1 + 0x45c);
  iVar4 = *(int *)(param_1 + 0x450);
  local_40 = pfVar1[iVar4 * 3 + -3] + *pfVar1;
  local_3c = pfVar1[1] + pfVar1[iVar4 * 3 + -2];
  local_38 = pfVar1[2] + pfVar1[iVar4 * 3 + -1];
  *(float *)(param_1 + 0x130) = local_40 * 0.5;
  *(float *)(param_1 + 0x134) = local_3c * 0.5;
  *(float *)(param_1 + 0x138) = local_38 * 0.5;
  *(float *)(param_1 + 0x13c) = local_34 * 0.5;
  local_20 = local_38 * local_38 + local_3c * local_3c + local_40 * local_40;
  fVar9 = (float10)FUN_00fdef70();
  local_20 = (float)fVar9;
  *(float *)(param_1 + 300) = local_20;
  FUN_00ed7ce0();
  __security_check_cookie(local_14 ^ (uint)&local_44);
  return;
}

// 00F2E930  esp06::preTrans  size=1760  [class]
undefined4 __thiscall
esp06::preTrans(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  short *psVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int *local_34;
  int local_30;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  puVar3 = (undefined4 *)(param_1 + 0x45c);
  for (iVar6 = 0x30; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  iVar6 = cEsp::preTrans(param_2,param_3,param_4);
  if (iVar6 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x454) = 1;
  *(undefined4 *)(param_1 + 0x530) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x450) = 4;
  *(undefined4 *)(param_1 + 0x538) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x53c) = 0x3f800000;
  if ((*(int *)(param_1 + 0x58) != 0) &&
     (puVar3 = (undefined4 *)(*(int *)(param_1 + 0x58) + 0x80), puVar3 != (undefined4 *)0x0)) {
    psVar2 = (short *)*puVar3;
    if ((short *)((int)psVar2 + 0xfU & 0xfffffff0) != psVar2) {
      uVar4 = FUN_00f59ed0(8);
      FUN_00dd5650(&DAT_016597b4,uVar4);
    }
    if (psVar2 != (short *)0x0) {
      *(int *)(param_1 + 0x450) = *(int *)(param_1 + 0x450) + (int)*psVar2;
      *(int *)(param_1 + 0x454) = *(int *)(param_1 + 0x454) + (int)psVar2[1];
      if (psVar2[2] != 0) {
        *(float *)(param_1 + 0x530) = *(float *)(param_1 + 0x530) / (float)(psVar2[2] + 1);
      }
      *(short *)(param_1 + 0x5b4) = psVar2[3];
      *(float *)(param_1 + 0x538) = *(float *)(param_1 + 0x538) + (float)(int)psVar2[4] * 0.1;
      *(float *)(param_1 + 0x53c) = (float)(int)psVar2[5] * 0.1 + *(float *)(param_1 + 0x53c);
    }
  }
  iVar11 = (int)*(short *)(param_1 + 0x4e);
  iVar6 = (int)*(short *)(param_1 + 0x5b4);
  if (*(short *)(param_1 + 0x5b4) < *(short *)(param_1 + 0x4e)) {
    iVar7 = iVar11 - iVar6;
  }
  else {
    iVar7 = iVar6 - iVar11;
  }
  iVar8 = iVar7 + 1;
  *(int *)(param_1 + 0x51c) = iVar8;
  *(int *)(param_1 + 0x540) = iVar7;
  if (iVar7 < 1) {
    FUN_009cca90(param_1,&DAT_016dae1c,iVar11,iVar6);
    return 0;
  }
  iVar6 = *(int *)(param_1 + 0x450);
  if (0x280 < (uint)((iVar7 + 1) * *(int *)(param_1 + 0x454) * iVar6)) {
    FUN_009cca90(param_1,&DAT_016dae44);
    return 0;
  }
  if (0x2f < iVar8) {
    FUN_009cca90(param_1,&DAT_016dae60);
    return 0;
  }
  *(undefined4 *)(param_1 + 0x520) = 2;
  *(undefined4 *)(param_1 + 0x524) = 0;
  if (1 < iVar7) {
    *(int *)(param_1 + 0x520) = iVar7 * 2;
    *(int *)(param_1 + 0x524) = iVar7 * 2 + -2;
  }
  uVar13 = iVar6 * 0xc + 0xfU & 0xfffffff0;
  uVar12 = (((iVar6 + -4) * *(int *)(param_1 + 0x454) + 2) * *(int *)(param_1 + 0x520) +
           *(int *)(param_1 + 0x524)) * 0xc + 0xfU & 0xfffffff0;
  iVar6 = FUN_00dd29b0(iVar8 * uVar13 + uVar12,0x20,0,0);
  *(int *)(param_1 + 0x458) = iVar6;
  if (iVar6 == 0) {
    FUN_009cca90(param_1,&DAT_016dae90);
    return 0;
  }
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x51c)) {
    piVar9 = (int *)(param_1 + 0x45c);
    do {
      *piVar9 = *(int *)(param_1 + 0x458) + uVar12;
      iVar6 = iVar6 + 1;
      piVar9 = piVar9 + 1;
      uVar12 = uVar12 + uVar13;
    } while (iVar6 < *(int *)(param_1 + 0x51c));
  }
  if ((*(int *)(param_1 + 0x540) != 0) &&
     (iVar6 = FUN_00f3f0f0(0x40,&DAT_01b7bdf8,0x20), iVar6 == 0)) {
    FUN_009cca90(param_1,&DAT_016daec0);
    return 0;
  }
  *(undefined4 *)(param_1 + 0x528) = 0xba83126f;
  *(undefined4 *)(param_1 + 0x52c) = 0xbf8020c5;
  if ((*(uint **)(param_1 + 0x58) != (uint *)0x0) &&
     (uVar12 = **(uint **)(param_1 + 0x58), (uVar12 + 0xf & 0xfffffff0) != uVar12)) {
    uVar4 = FUN_00f59ed0(0);
    FUN_00dd5650(&DAT_016597b4,uVar4);
  }
  if ((*(int *)(param_1 + 0x58) != 0) &&
     (puVar5 = (uint *)(*(int *)(param_1 + 0x58) + 0x80), puVar5 != (uint *)0x0)) {
    uVar12 = *puVar5;
    if ((uVar12 + 0xf & 0xfffffff0) != uVar12) {
      uVar4 = FUN_00f59ed0(8);
      FUN_00dd5650(&DAT_016597b4,uVar4);
    }
    if (uVar12 != 0) {
      uVar12 = (uint)*(char *)(uVar12 + 0x10);
      *(uint *)(param_1 + 0x5b8) = uVar12;
      if (uVar12 == 1) {
        *(undefined4 *)(param_1 + 0x5a0) = *(undefined4 *)(param_1 + 0x180);
        *(undefined4 *)(param_1 + 0x5a4) = *(undefined4 *)(param_1 + 0x184);
        *(undefined4 *)(param_1 + 0x5a8) = *(undefined4 *)(param_1 + 0x188);
        *(undefined4 *)(param_1 + 0x5ac) = *(undefined4 *)(param_1 + 0x18c);
      }
      else if (1 < uVar12) {
        FUN_009cca90(param_1,&DAT_016daef4,uVar12);
        return 0;
      }
    }
  }
  if ((*(int *)(param_1 + 0x58) != 0) &&
     (puVar3 = (undefined4 *)(*(int *)(param_1 + 0x58) + 0x70), puVar3 != (undefined4 *)0x0)) {
    puVar3 = (undefined4 *)*puVar3;
    if ((undefined4 *)((int)puVar3 + 0xfU & 0xfffffff0) != puVar3) {
      uVar4 = FUN_00f59ed0(7);
      FUN_00dd5650(&DAT_016597b4,uVar4);
    }
    if (puVar3 != (undefined4 *)0x0) {
      *(undefined4 *)(param_1 + 0x590) = *puVar3;
      *(undefined4 *)(param_1 + 0x594) = puVar3[1];
      *(undefined4 *)(param_1 + 0x598) = puVar3[2];
      *(undefined4 *)(param_1 + 0x59c) = 0x3f800000;
      *(float *)(param_1 + 0x5c0) = (float)puVar3[3] * 0.1;
      goto LAB_00f2ed36;
    }
  }
  *(undefined4 *)(param_1 + 0x590) = 0;
  *(undefined4 *)(param_1 + 0x594) = 0;
  *(undefined4 *)(param_1 + 0x598) = 0;
  *(undefined4 *)(param_1 + 0x59c) = local_14;
LAB_00f2ed36:
  iVar6 = FUN_00a7c990(&DAT_01ee11f4);
  if ((((iVar6 != 0) || (iVar6 = FUN_00a81330(), iVar6 == 0)) ||
      (iVar6 = FUN_00a7c800(), iVar6 == 0)) || (*(short *)(param_1 + 0x5b4) < -1)) {
    FUN_009cca90(param_1,&DAT_016daf38);
    return 0;
  }
  iVar11 = (int)*(short *)(param_1 + 0x5b4);
  iVar6 = FUN_00a7c990(&DAT_01ee11f4);
  if (((iVar6 == 0) && (iVar6 = FUN_00a81330(), iVar6 != 0)) &&
     ((iVar6 = FUN_00a7c800(), iVar6 != 0 && (iVar11 != -1)))) {
    if (*(int *)(iVar6 + 0x330) == 0) {
      iVar6 = 0xfff;
    }
    else {
      iVar6 = FUN_00a06de0(iVar11);
    }
    if (iVar6 == 0xfff) {
      FUN_009cca90(param_1,&DAT_016daf08,(int)*(short *)(param_1 + 0x5b4));
      return 0;
    }
  }
  iVar6 = FUN_00a7c990(&DAT_01ee11f4);
  if (((iVar6 == 0) && (iVar6 = FUN_00a81330(), iVar6 != 0)) && (iVar6 = FUN_00a7c800(), iVar6 != 0)
     ) {
    uVar4 = FUN_00a12290(iVar11);
  }
  else {
    uVar4 = 0;
  }
  *(undefined4 *)(param_1 + 0x5b0) = uVar4;
  FUN_00edfc20(param_1 + 0x3a0);
  FUN_00efb130(param_1 + 0x3a0);
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_1 + 400);
  *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_1 + 0x194);
  *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_1 + 0x198);
  *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_1 + 0x19c);
  sVar1 = *(short *)(param_1 + 0x5b4);
  if (*(short *)(param_1 + 0x4e) <= *(short *)(param_1 + 0x5b4)) {
    sVar1 = *(short *)(param_1 + 0x4e);
  }
  iVar6 = FUN_00a7c990(&DAT_01ee11f4);
  if ((iVar6 == 0) && (iVar6 = FUN_00a81330(), iVar6 != 0)) {
    FUN_00a7c800();
  }
  iVar6 = *(int *)(param_1 + 0x51c);
  uVar12 = *(uint *)(param_1 + 0x450);
  local_30 = 0;
  if (0 < iVar6) {
    local_34 = (int *)(param_1 + 0x45c);
    do {
      uVar4 = FUN_00a12290(sVar1 + local_30);
      FUN_00f0dcb0(&local_20,param_1 + 0x180,uVar4,1);
      uVar13 = 0;
      if (3 < (int)uVar12) {
        iVar11 = (uVar12 - 4 >> 2) + 1;
        uVar13 = iVar11 * 4;
        puVar3 = (undefined4 *)(*local_34 + 8);
        puVar10 = (undefined4 *)(*local_34 + 0x14);
        do {
          puVar3[-2] = local_20;
          iVar11 = iVar11 + -1;
          puVar3[-1] = local_1c;
          *puVar3 = local_18;
          puVar3[1] = local_20;
          puVar10[-1] = local_1c;
          *puVar10 = local_18;
          puVar3[4] = local_20;
          puVar10[2] = local_1c;
          puVar10[3] = local_18;
          puVar3[7] = local_20;
          puVar10[5] = local_1c;
          puVar10[6] = local_18;
          puVar3 = puVar3 + 0xc;
          puVar10 = puVar10 + 0xc;
        } while (iVar11 != 0);
      }
      if (uVar13 < uVar12) {
        iVar11 = uVar12 - uVar13;
        puVar3 = (undefined4 *)(*local_34 + uVar13 * 0xc);
        do {
          *puVar3 = local_20;
          iVar11 = iVar11 + -1;
          puVar3[1] = local_1c;
          puVar3[2] = local_18;
          puVar3 = puVar3 + 3;
        } while (iVar11 != 0);
      }
      local_34 = local_34 + 1;
      local_30 = local_30 + 1;
    } while (local_30 < iVar6);
  }
  return 1;
}

