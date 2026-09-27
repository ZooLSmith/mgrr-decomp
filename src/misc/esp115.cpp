// src/misc/esp115.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009D4370..009EE740, 5 functions

#include "types.h"

// 009D4370  esp115::esp115  size=18  [class]
undefined4 * __fastcall esp115::esp115(undefined4 *param_1)

{
  cEspBase::cEspBase_4();
  *param_1 = vftable;
  return param_1;
}

// 009D9680  esp115::vf14  size=50  [class]
void __fastcall esp115::vf14(int param_1)

{
  FUN_00ee0ac0();
  if ((*(int *)(param_1 + 0x4c4) != 0) && (*(int *)(param_1 + 0x4c4) != 0)) {
    FUN_00dd48d0(*(int *)(param_1 + 0x4c4),0);
    *(undefined4 *)(param_1 + 0x4c4) = 0;
  }
  return;
}

// 009D96C0  esp115::vf04  size=493  [class]
undefined4 __thiscall
esp115::vf04(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  float fVar1;
  float *pfVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint *puVar7;
  int local_8;
  
  iVar4 = cEspModel::vf04(param_2,param_3,param_4);
  if (iVar4 == 0) {
    return 0;
  }
  iVar4 = FUN_00f12b50();
  if (iVar4 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x4f0) = 1;
  *(undefined4 *)(param_1 + 0x4fc) = 1;
  if ((*(int *)(param_1 + 0x58) != 0) &&
     (puVar5 = (undefined4 *)(*(int *)(param_1 + 0x58) + 0x70), puVar5 != (undefined4 *)0x0)) {
    pfVar2 = (float *)*puVar5;
    if ((float *)((int)pfVar2 + 0xfU & 0xfffffff0) != pfVar2) {
      uVar6 = FUN_00f59ed0(7);
      FUN_00dd5650(&DAT_016597b4,uVar6);
    }
    if (pfVar2 != (float *)0x0) {
      *(float *)(param_1 + 0x47c) = *pfVar2 * 0.1;
      *(float *)(param_1 + 0x494) = pfVar2[1] * 0.001;
      *(float *)(param_1 + 0x498) = pfVar2[2] * 0.001;
      *(float *)(param_1 + 0x4d0) = pfVar2[3] * 0.01;
      *(float *)(param_1 + 0x4d4) = pfVar2[4] * 0.01;
      *(float *)(param_1 + 0x4d8) = pfVar2[5] * 0.01;
      *(float *)(param_1 + 0x4dc) = pfVar2[6] * 10.0;
      local_8 = (int)(longlong)ROUND(pfVar2[7]);
      *(int *)(param_1 + 0x4f8) = local_8 + 1;
      iVar4 = FUN_00fdbc60();
      *(int *)(param_1 + 0x4f0) = *(int *)(param_1 + 0x4f0) + iVar4;
      fVar1 = pfVar2[9];
      goto LAB_009d9813;
    }
  }
  fVar1 = 0.0;
  *(undefined4 *)(param_1 + 0x4f8) = 0;
  *(undefined4 *)(param_1 + 0x4d0) = 0;
  *(undefined4 *)(param_1 + 0x4f0) = 0;
  *(undefined4 *)(param_1 + 0x4d4) = 0;
  *(undefined4 *)(param_1 + 0x4d8) = 0;
  *(undefined4 *)(param_1 + 0x4dc) = 0;
LAB_009d9813:
  *(float *)(param_1 + 0x4f4) = fVar1;
  if ((*(int *)(param_1 + 0x58) != 0) &&
     (puVar7 = (uint *)(*(int *)(param_1 + 0x58) + 0x80), puVar7 != (uint *)0x0)) {
    uVar3 = *puVar7;
    if ((uVar3 + 0xf & 0xfffffff0) != uVar3) {
      uVar6 = FUN_00f59ed0(8);
      FUN_00dd5650(&DAT_016597b4,uVar6);
    }
    if (uVar3 != 0) {
      *(int *)(param_1 + 0x470) = (int)*(char *)(uVar3 + 0x11);
    }
  }
  FUN_009d00e0();
  FUN_00ed54f0();
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x800000;
  iVar4 = *(int *)(param_1 + 0x50);
  if (iVar4 != 0) {
    *(undefined4 *)(param_1 + 0x4a0) = *(undefined4 *)(iVar4 + 0x40);
    *(undefined4 *)(param_1 + 0x4a4) = *(undefined4 *)(iVar4 + 0x44);
    *(undefined4 *)(param_1 + 0x4a8) = *(undefined4 *)(iVar4 + 0x48);
    *(undefined4 *)(param_1 + 0x4ac) = *(undefined4 *)(iVar4 + 0x4c);
  }
  *(undefined4 *)(param_1 + 0x4ec) = 0;
  return 1;
}

// 009DF590  esp115::vf00  size=30  [class]
undefined4 __thiscall esp115::vf00(undefined4 param_1,byte param_2)

{
  cEspBase::cEspBase_5();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009EE740  esp115::vf08  size=1149  [class]
void __fastcall esp115::vf08(int param_1)

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
  int iVar10;
  int iVar11;
  float *pfVar12;
  uint uVar13;
  float local_1c;
  uint local_10;
  uint local_8;
  
  iVar10 = FUN_009e8920();
  if (iVar10 != 0) {
    esp39::vf08();
    iVar10 = *(int *)(param_1 + 0x84);
    if ((iVar10 != 0) && (*(int *)(iVar10 + 0x10) == 1)) {
      *(undefined4 *)(param_1 + 0x4e8) = 1;
      fVar8 = *(float *)(param_1 + 400) - *(float *)(iVar10 + 0x14);
      fVar1 = *(float *)(param_1 + 0x194) - *(float *)(iVar10 + 0x18);
      fVar9 = *(float *)(param_1 + 0x198) - *(float *)(iVar10 + 0x1c);
      fVar7 = *(float *)(param_1 + 400) - *(float *)(param_1 + 0x4b0);
      fVar6 = *(float *)(param_1 + 0x194) - *(float *)(param_1 + 0x4b4);
      fVar5 = *(float *)(param_1 + 0x198) - *(float *)(param_1 + 0x4b8);
      fVar8 = SQRT(fVar1 * fVar1 + fVar8 * fVar8 + fVar9 * fVar9) /
              SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
      if (1.0 < fVar8) {
        fVar8 = 1.0;
      }
      *(float *)(param_1 + 0x4e0) = (*(float *)(param_1 + 0x4c8) - 1.0) * fVar8;
    }
    if (*(int *)(param_1 + 0x4e8) != 1) {
      fVar8 = *(float *)(param_1 + 0x118) - 4.0;
      *(float *)(param_1 + 0x4e0) = fVar8;
      if (fVar8 < 0.0) {
        *(undefined4 *)(param_1 + 0x4e0) = 0;
      }
      if (*(float *)(param_1 + 0x4e4) < *(float *)(param_1 + 0x4e0)) {
        *(undefined4 *)(param_1 + 0x4e0) = *(undefined4 *)(param_1 + 0x4e4);
      }
    }
    if ((*(uint *)(param_1 + 0x45c) == 0) ||
       (local_8 = (uint)(longlong)ROUND(*(float *)(param_1 + 0x460)),
       local_8 < *(uint *)(param_1 + 0x45c))) {
      iVar10 = *(int *)(param_1 + 0x450) + -1;
      fVar7 = 1.0 - *(float *)(param_1 + 0x4dc) * 0.01;
      fVar5 = *(float *)(param_1 + 0x4c8) - 1.0;
      fVar9 = *(float *)(param_1 + 0x4e0) / fVar5;
      fVar8 = 1.0 - fVar9;
      fVar6 = (float)iVar10;
      if (iVar10 < 0) {
        fVar6 = fVar6 + 4.2949673e+09;
      }
      uVar13 = 0;
      iVar10 = 0;
      local_10 = (uint)(longlong)ROUND((fVar6 * *(float *)(param_1 + 0x4e0)) / fVar5);
      local_1c = 0.0;
      do {
        iVar11 = *(int *)(param_1 + 0x450) + -1;
        fVar5 = (float)iVar11;
        if (iVar11 < 0) {
          fVar5 = fVar5 + 4.2949673e+09;
        }
        fVar5 = local_1c / fVar5;
        fVar6 = 1.0 - fVar5;
        if ((*(float *)(param_1 + 0x4e4) == *(float *)(param_1 + 0x4e0)) || (fVar5 + 0.05 <= fVar9))
        {
          if (*(uint *)(param_1 + 0x4ec) < uVar13) {
            iVar11 = *(int *)(param_1 + 0x458);
            fVar1 = *(float *)(param_1 + 0x4b4);
            fVar2 = *(float *)(param_1 + 0x4b8);
            fVar3 = *(float *)(param_1 + 0x194);
            fVar4 = *(float *)(param_1 + 0x198);
            *(float *)(iVar11 + iVar10) =
                 fVar6 * *(float *)(param_1 + 400) + fVar5 * *(float *)(param_1 + 0x4b0);
            *(float *)(iVar11 + 4 + iVar10) = fVar3 * fVar6 + fVar1 * fVar5;
            *(float *)(iVar11 + 8 + iVar10) = fVar4 * fVar6 + fVar2 * fVar5;
            *(int *)(param_1 + 0x4ec) = *(int *)(param_1 + 0x4ec) + 1;
          }
          else {
            iVar11 = *(int *)(param_1 + 0x4c4);
            fVar5 = *(float *)(param_1 + 0x110);
            fVar6 = *(float *)(iVar11 + 4 + iVar10);
            fVar1 = *(float *)(iVar11 + 8 + iVar10);
            pfVar12 = (float *)(*(int *)(param_1 + 0x458) + iVar10);
            *pfVar12 = *pfVar12 + *(float *)(iVar11 + iVar10) * fVar5;
            pfVar12[1] = fVar6 * fVar5 + pfVar12[1];
            pfVar12[2] = fVar1 * fVar5 + pfVar12[2];
            pfVar12 = (float *)(*(int *)(param_1 + 0x4c4) + iVar10);
            fVar5 = fVar7 / ((*(float *)(param_1 + 0x110) - *(float *)(param_1 + 0x110) * fVar7) +
                            fVar7);
            *pfVar12 = fVar5 * *pfVar12;
            pfVar12[1] = fVar5 * pfVar12[1];
            pfVar12[2] = fVar5 * pfVar12[2];
          }
        }
        else {
          iVar11 = *(int *)(param_1 + 0x458);
          fVar1 = *(float *)(param_1 + 0x4b4);
          fVar2 = *(float *)(param_1 + 0x4b8);
          fVar3 = *(float *)(param_1 + 0x194);
          fVar4 = *(float *)(param_1 + 0x198);
          *(float *)(iVar11 + iVar10) =
               fVar6 * *(float *)(param_1 + 400) + fVar5 * *(float *)(param_1 + 0x4b0);
          *(float *)(iVar11 + 4 + iVar10) = fVar3 * fVar6 + fVar1 * fVar5;
          *(float *)(iVar11 + 8 + iVar10) = fVar4 * fVar6 + fVar2 * fVar5;
        }
        uVar13 = uVar13 + 1;
        local_1c = local_1c + 1.0;
        iVar10 = iVar10 + 0xc;
      } while (uVar13 <= local_10);
      fVar5 = *(float *)(param_1 + 0x4b0);
      fVar6 = *(float *)(param_1 + 0x4b4);
      fVar7 = *(float *)(param_1 + 0x4b8);
      fVar1 = *(float *)(param_1 + 400);
      fVar2 = *(float *)(param_1 + 0x194);
      fVar3 = *(float *)(param_1 + 0x198);
      if (uVar13 < *(uint *)(param_1 + 0x450)) {
        iVar10 = uVar13 * 0xc;
        do {
          iVar11 = *(int *)(param_1 + 0x458);
          *(float *)(iVar11 + iVar10) = fVar8 * fVar1 + fVar9 * fVar5;
          uVar13 = uVar13 + 1;
          iVar10 = iVar10 + 0xc;
          *(float *)(iVar11 + -8 + iVar10) = fVar2 * fVar8 + fVar6 * fVar9;
          *(float *)(iVar11 + -4 + iVar10) = fVar3 * fVar8 + fVar7 * fVar9;
        } while (uVar13 < *(uint *)(param_1 + 0x450));
      }
    }
    pfVar12 = *(float **)(param_1 + 0x458);
    iVar10 = *(int *)(param_1 + 0x4c0);
    fVar8 = pfVar12[1];
    fVar5 = pfVar12[iVar10 * 3 + -2];
    fVar6 = pfVar12[2];
    fVar7 = pfVar12[iVar10 * 3 + -1];
    *(float *)(param_1 + 0x130) = (pfVar12[iVar10 * 3 + -3] + *pfVar12) * 0.5;
    *(float *)(param_1 + 0x134) = (fVar8 + fVar5) * 0.5;
    *(float *)(param_1 + 0x138) = (fVar6 + fVar7) * 0.5;
    *(undefined4 *)(param_1 + 0x13c) = 0x3f800000;
    pfVar12 = *(float **)(param_1 + 0x458);
    iVar10 = *(int *)(param_1 + 0x4c0);
    *(float *)(param_1 + 300) =
         SQRT((*pfVar12 - pfVar12[iVar10 * 3 + -3]) * (*pfVar12 - pfVar12[iVar10 * 3 + -3]) +
              (pfVar12[1] - pfVar12[iVar10 * 3 + -2]) * (pfVar12[1] - pfVar12[iVar10 * 3 + -2]) +
              (pfVar12[2] - pfVar12[iVar10 * 3 + -1]) * (pfVar12[2] - pfVar12[iVar10 * 3 + -1]));
    FUN_00ed6110();
    return;
  }
  esp39::vf08();
  return;
}

