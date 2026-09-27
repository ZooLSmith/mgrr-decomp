// src/misc/esp102.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009D4210..009E1280, 5 functions

#include "mgrr.h"
#include "esp102.h"

// 009D4210  esp102::esp102  size=18  [class]
undefined4 * __fastcall esp102::esp102(undefined4 *param_1)

{
  cEsp::cEsp();
  *param_1 = vftable;
  return param_1;
}

// 009D68B0  esp102::preTrans  size=1352  [class]
/* WARNING: Removing unreachable block (ram,0x009d6b1e) */
/* WARNING: Removing unreachable block (ram,0x009d6ae2) */
/* WARNING: Removing unreachable block (ram,0x009d6b5a) */

undefined4 __thiscall esp102::preTrans(int param_1,int param_2,int param_3,int param_4)

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
  undefined4 *puVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  float *pfVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int local_8;
  
  iVar12 = cEsp::preTrans(param_2,param_3,param_4);
  if ((iVar12 == 0) || (iVar12 = FUN_00f12b50(), iVar12 == 0)) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x4e8) = 1;
  if ((*(int *)(param_1 + 0x58) != 0) &&
     (puVar13 = (undefined4 *)(*(int *)(param_1 + 0x58) + 0x70), puVar13 != (undefined4 *)0x0)) {
    pfVar17 = (float *)*puVar13;
    if ((float *)((int)pfVar17 + 0xfU & 0xfffffff0) != pfVar17) {
      uVar14 = FUN_00f59ed0(7);
      FUN_00dd5650(&DAT_016597b4,uVar14);
    }
    if (pfVar17 != (float *)0x0) {
      *(float *)(param_1 + 0x4c8) = *pfVar17 * 0.01;
      *(float *)(param_1 + 0x4cc) = pfVar17[1] * 0.01;
      *(float *)(param_1 + 0x4d0) = pfVar17[2] * 0.01;
      *(float *)(param_1 + 0x4d4) = pfVar17[3] * 10.0;
      local_8 = (int)(longlong)ROUND(pfVar17[4]);
      *(int *)(param_1 + 0x4f0) = local_8 + 1;
      iVar12 = FUN_00fdbc60();
      *(int *)(param_1 + 0x4e8) = *(int *)(param_1 + 0x4e8) + iVar12;
      fVar3 = pfVar17[6];
      goto LAB_009d69cd;
    }
  }
  fVar3 = 0.0;
  *(undefined4 *)(param_1 + 0x4c8) = 0;
  *(undefined4 *)(param_1 + 0x4f0) = 0;
  *(undefined4 *)(param_1 + 0x4cc) = 0;
  *(undefined4 *)(param_1 + 0x4e8) = 0;
  *(undefined4 *)(param_1 + 0x4d0) = 0;
  *(undefined4 *)(param_1 + 0x4d4) = 0;
LAB_009d69cd:
  *(float *)(param_1 + 0x4ec) = fVar3;
  *(int *)(param_1 + 0x4a0) = *(int *)(param_1 + 0x450) + -3;
  iVar12 = FUN_00dd29b0(*(int *)(param_1 + 0x450) * 0xc,4,0,0);
  *(int *)(param_1 + 0x4a4) = iVar12;
  if (iVar12 == 0) {
    return 0;
  }
  if (*(float *)(param_1 + 0x4ec) == 0.0) {
    *(undefined4 *)(param_1 + 0x4ec) = 0x42480000;
  }
  uVar19 = 0;
  if (*(int *)(param_1 + 0x450) != 0) {
    iVar12 = 0;
    do {
      *(undefined4 *)(iVar12 + *(int *)(param_1 + 0x4a4)) = 0;
      uVar19 = uVar19 + 1;
      *(undefined4 *)(*(int *)(param_1 + 0x4a4) + 4 + iVar12) = *(undefined4 *)(param_1 + 0x4d0);
      iVar12 = iVar12 + 0xc;
      *(undefined4 *)(*(int *)(param_1 + 0x4a4) + -4 + iVar12) = 0;
    } while (uVar19 < *(uint *)(param_1 + 0x450));
  }
  fVar5 = 0.0;
  fVar4 = 0.0;
  fVar3 = 0.0;
  uVar19 = 1;
  if (1 < *(int *)(param_1 + 0x450) - 1U) {
    iVar12 = 0xc;
    do {
      if ((*(uint *)(param_1 + 0x4f0) == 0) || (uVar19 % *(uint *)(param_1 + 0x4f0) == 0)) {
        uVar15 = *(int *)(param_1 + 0x114) * 0x19660d + 0x3c6ef35f;
        *(uint *)(param_1 + 0x114) = uVar15;
        uVar16 = *(int *)(param_1 + 0x114) * 0x19660d + 0x3c6ef35f;
        *(uint *)(param_1 + 0x114) = uVar16;
        fVar4 = (1.0 - (float)(uVar15 >> 8) * 5.960465e-08 * 2.0) * *(float *)(param_1 + 0x4c8) +
                fVar4;
        uVar15 = *(int *)(param_1 + 0x114) * 0x19660d + 0x3c6ef35f;
        *(uint *)(param_1 + 0x114) = uVar15;
        fVar5 = (1.0 - (float)(uVar16 >> 8) * 5.960465e-08 * 2.0) * *(float *)(param_1 + 0x4cc) +
                fVar5;
        pfVar17 = (float *)(*(int *)(param_1 + 0x4a4) + iVar12);
        fVar3 = (1.0 - (float)(uVar15 >> 8) * 5.960465e-08 * 2.0) * *(float *)(param_1 + 0x4c8) +
                fVar3;
        *pfVar17 = *pfVar17 + fVar4;
        pfVar17[1] = pfVar17[1] + fVar5;
        pfVar17[2] = pfVar17[2] + fVar3;
        pfVar17 = (float *)(*(int *)(param_1 + 0x4a4) + -0xc + iVar12);
        fVar4 = fVar4 * 0.5;
        fVar5 = fVar5 * 0.5;
        fVar3 = fVar3 * 0.5;
        *pfVar17 = *pfVar17 + fVar4;
        pfVar17[1] = fVar5 + pfVar17[1];
        pfVar17[2] = fVar3 + pfVar17[2];
        pfVar17 = (float *)(*(int *)(param_1 + 0x4a4) + 0xc + iVar12);
        *pfVar17 = *(float *)(*(int *)(param_1 + 0x4a4) + 0xc + iVar12) + fVar4;
        pfVar17[1] = fVar5 + pfVar17[1];
        pfVar17[2] = fVar3 + pfVar17[2];
      }
      uVar19 = uVar19 + 1;
      iVar12 = iVar12 + 0xc;
    } while (uVar19 < *(int *)(param_1 + 0x450) - 1U);
  }
  param_2 = 0;
  if (0 < *(int *)(param_1 + 0x4e8)) {
    do {
      if (1 < *(int *)(param_1 + 0x450) + -1) {
        iVar20 = 0xc;
        iVar12 = 0;
        do {
          param_3 = iVar12 + -1;
          if (param_3 < 0) {
            param_3 = 0;
          }
          param_4 = iVar12;
          if (iVar12 < 0) {
            param_4 = 0;
          }
          iVar18 = *(int *)(param_1 + 0x450) + -1;
          iVar22 = iVar12 + 2;
          if (iVar18 < iVar12 + 2) {
            iVar22 = iVar18;
          }
          iVar21 = iVar12 + 3;
          if (iVar18 < iVar12 + 3) {
            iVar21 = iVar18;
          }
          iVar11 = *(int *)(param_1 + 0x4a4);
          iVar18 = iVar11 + iVar21 * 0xc;
          fVar3 = *(float *)(iVar18 + 4);
          fVar4 = *(float *)(iVar18 + 8);
          pfVar17 = (float *)(iVar11 + iVar22 * 0xc);
          fVar5 = pfVar17[1];
          fVar6 = pfVar17[2];
          pfVar1 = (float *)(iVar11 + param_4 * 0xc);
          fVar7 = pfVar1[1];
          fVar8 = pfVar1[2];
          pfVar2 = (float *)(iVar11 + param_3 * 0xc);
          fVar9 = pfVar2[1];
          fVar10 = pfVar2[2];
          *(float *)(iVar11 + iVar20) =
               *pfVar1 * 0.5 + *pfVar2 * 0.25 + *(float *)(iVar11 + iVar20) + *pfVar17 * 0.5 +
               *(float *)(iVar11 + iVar21 * 0xc) * 0.25;
          *(float *)(iVar11 + 4 + iVar20) =
               *(float *)(iVar11 + 4 + iVar20) + fVar9 * 0.25 + fVar7 * 0.5 + fVar5 * 0.5 +
               fVar3 * 0.25;
          *(float *)(iVar11 + 8 + iVar20) =
               *(float *)(iVar11 + 8 + iVar20) + fVar10 * 0.25 + fVar8 * 0.5 + fVar6 * 0.5 +
               fVar4 * 0.25;
          pfVar17 = (float *)(*(int *)(param_1 + 0x4a4) + iVar20);
          *pfVar17 = *(float *)(*(int *)(param_1 + 0x4a4) + iVar20) * 0.4;
          iVar22 = iVar12 + 2;
          iVar20 = iVar20 + 0xc;
          pfVar17[1] = pfVar17[1] * 0.4;
          pfVar17[2] = pfVar17[2] * 0.4;
          iVar12 = iVar12 + 1;
        } while (iVar22 < *(int *)(param_1 + 0x450) + -1);
      }
      param_2 = param_2 + 1;
    } while (param_2 < *(int *)(param_1 + 0x4e8));
  }
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xffffbfff;
  *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) | 0x48000;
  *(undefined4 *)(param_1 + 0x4e4) = 0;
  return 1;
}

// 009D6E00  esp102::vf14  size=50  [class]
void __fastcall esp102::vf14(int param_1)

{
  esp162::vf14();
  if ((*(int *)(param_1 + 0x4a4) != 0) && (*(int *)(param_1 + 0x4a4) != 0)) {
    FUN_00dd48d0(*(int *)(param_1 + 0x4a4),0);
    *(undefined4 *)(param_1 + 0x4a4) = 0;
  }
  return;
}

// 009DF3E0  esp102::vf00  size=30  [class]
undefined4 __thiscall esp102::vf00(undefined4 param_1,byte param_2)

{
  cEspBase::cEspBase();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009E1280  esp102::vf08  size=1946  [class]
void __fastcall esp102::vf08(int param_1)

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
  uint uVar10;
  int iVar11;
  float *pfVar12;
  float *pfVar13;
  int iVar14;
  uint uVar15;
  float local_7c;
  undefined8 local_70;
  float local_68;
  float local_64;
  undefined8 local_60;
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
  
  if (*(int *)(param_1 + 0x4c4) == 0) {
    iVar11 = *(int *)(param_1 + 0x84);
    fVar1 = *(float *)(param_1 + 0x4ec);
    *(undefined4 *)(param_1 + 0x4c4) = 1;
    if (iVar11 == 0) {
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x80000000;
      return;
    }
    if ((*(byte *)(iVar11 + 0x68) & 0x40) != 0) {
      *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(iVar11 + 0x40);
      *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(iVar11 + 0x44);
      *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(iVar11 + 0x48);
      *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(iVar11 + 0x4c);
    }
    fVar2 = *(float *)(param_1 + 0x150);
    local_60 = *(longlong *)(param_1 + 0x150);
    local_58 = *(float *)(param_1 + 0x158);
    local_54 = *(float *)(param_1 + 0x15c);
    fVar2 = local_58 * local_58 +
            *(float *)(param_1 + 0x154) * *(float *)(param_1 + 0x154) + fVar2 * fVar2;
    if (fVar2 <= 0.0) {
      FUN_00dd5650(&DAT_0163d0ac);
      local_60 = 0x3f80000000000000;
      local_58 = 0.0;
    }
    else {
      FUN_00ddf460(&local_60,&local_60);
    }
    local_70 = *(longlong *)(param_1 + 400);
    local_68 = *(float *)(param_1 + 0x198);
    local_64 = *(float *)(param_1 + 0x19c);
    local_28 = local_58 * fVar1;
    local_50 = (float)local_60 * fVar1 + *(float *)(param_1 + 400);
    local_4c = local_60._4_4_ * fVar1 + *(float *)(param_1 + 0x194);
    local_48 = local_28 + local_68;
    local_44 = local_54 * fVar1 + local_64;
    *(float *)(param_1 + 0x4bc) = local_44;
    *(float *)(param_1 + 0x4b0) = local_50;
    *(float *)(param_1 + 0x4b4) = local_4c;
    *(float *)(param_1 + 0x4b8) = local_48;
    *(float *)(param_1 + 0x4c0) = *(float *)(param_1 + 0x4ec) / SQRT(fVar2);
    iVar11 = FUN_0090dc50(&local_40,local_20,0,&local_70,&local_50,0x1e,"esp102");
    if (iVar11 == 0) {
      *(float *)(param_1 + 0x4dc) = *(float *)(param_1 + 0x4c0) - 1.0;
    }
    else {
      fVar1 = SQRT((local_68 - local_38) * (local_68 - local_38) +
                   ((float)local_70 - local_40) * ((float)local_70 - local_40) +
                   (local_70._4_4_ - local_3c) * (local_70._4_4_ - local_3c));
      local_40 = *(float *)(param_1 + 400) - local_40;
      local_3c = *(float *)(param_1 + 0x194) - local_3c;
      local_38 = *(float *)(param_1 + 0x198) - local_38;
      fVar8 = *(float *)(param_1 + 400) - *(float *)(param_1 + 0x4b0);
      fVar7 = *(float *)(param_1 + 0x194) - *(float *)(param_1 + 0x4b4);
      fVar2 = *(float *)(param_1 + 0x198) - *(float *)(param_1 + 0x4b8);
      fVar2 = SQRT(local_40 * local_40 + local_3c * local_3c + local_38 * local_38) /
              SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar2 * fVar2);
      if (1.0 < fVar2) {
        fVar2 = 1.0;
      }
      *(float *)(param_1 + 0x4dc) = (*(float *)(param_1 + 0x4c0) - 1.0) * fVar2;
    }
    fVar1 = fVar1 / (*(float *)(param_1 + 0x4ec) * 0.25) + 0.25;
    if (2.0 < fVar1) {
      fVar1 = 2.0;
    }
    iVar11 = 0;
    if (*(int *)(param_1 + 0x4a0) != -1 && -1 < *(int *)(param_1 + 0x4a0) + 1) {
      iVar14 = 0;
      do {
        pfVar13 = (float *)(*(int *)(param_1 + 0x4a4) + iVar14);
        pfVar12 = (float *)(*(int *)(param_1 + 0x4a4) + iVar14);
        iVar11 = iVar11 + 1;
        iVar14 = iVar14 + 0xc;
        *pfVar12 = fVar1 * *pfVar13;
        pfVar12[1] = pfVar12[1] * fVar1;
        pfVar12[2] = pfVar12[2] * fVar1;
      } while (iVar11 < *(int *)(param_1 + 0x4a0) + 1);
    }
  }
  esp39::vf08();
  iVar11 = *(int *)(param_1 + 0x84);
  if ((iVar11 != 0) && (*(int *)(iVar11 + 0x10) == 1)) {
    *(undefined4 *)(param_1 + 0x4e0) = 1;
    fVar1 = *(float *)(param_1 + 400) - *(float *)(iVar11 + 0x14);
    fVar3 = *(float *)(param_1 + 0x194) - *(float *)(iVar11 + 0x18);
    fVar9 = *(float *)(param_1 + 0x198) - *(float *)(iVar11 + 0x1c);
    fVar8 = *(float *)(param_1 + 400) - *(float *)(param_1 + 0x4b0);
    fVar7 = *(float *)(param_1 + 0x194) - *(float *)(param_1 + 0x4b4);
    fVar2 = *(float *)(param_1 + 0x198) - *(float *)(param_1 + 0x4b8);
    fVar1 = SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar9 * fVar9) /
            SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar2 * fVar2);
    if (1.0 < fVar1) {
      fVar1 = 1.0;
    }
    *(float *)(param_1 + 0x4d8) = (*(float *)(param_1 + 0x4c0) - 1.0) * fVar1;
  }
  if (*(int *)(param_1 + 0x4e0) != 1) {
    fVar1 = *(float *)(param_1 + 0x118) - 2.0;
    *(float *)(param_1 + 0x4d8) = fVar1;
    if (fVar1 < 0.0) {
      *(undefined4 *)(param_1 + 0x4d8) = 0;
    }
    if (*(float *)(param_1 + 0x4dc) < *(float *)(param_1 + 0x4d8)) {
      *(undefined4 *)(param_1 + 0x4d8) = *(undefined4 *)(param_1 + 0x4dc);
    }
  }
  if (*(uint *)(param_1 + 0x45c) != 0) {
    local_60 = (longlong)ROUND(*(float *)(param_1 + 0x460));
    if (*(uint *)(param_1 + 0x45c) <= (uint)(float)local_60) goto LAB_009e1979;
  }
  iVar11 = *(int *)(param_1 + 0x450) + -1;
  fVar8 = 1.0 - *(float *)(param_1 + 0x4d4) * 0.01;
  fVar2 = *(float *)(param_1 + 0x4c0) - 1.0;
  fVar9 = *(float *)(param_1 + 0x4d8) / fVar2;
  fVar1 = 1.0 - fVar9;
  local_60 = CONCAT44(local_60._4_4_,fVar1);
  fVar7 = (float)iVar11;
  if (iVar11 < 0) {
    fVar7 = fVar7 + 4.2949673e+09;
  }
  uVar15 = 0;
  iVar11 = 0;
  local_70 = (longlong)ROUND((fVar7 * *(float *)(param_1 + 0x4d8)) / fVar2);
  uVar10 = (uint)(float)local_70;
  local_7c = 0.0;
  do {
    iVar14 = *(int *)(param_1 + 0x450) + -1;
    local_70 = CONCAT44(local_70._4_4_,iVar14);
    fVar2 = (float)iVar14;
    if (iVar14 < 0) {
      fVar2 = fVar2 + 4.2949673e+09;
    }
    fVar2 = local_7c / fVar2;
    fVar7 = 1.0 - fVar2;
    if ((*(float *)(param_1 + 0x4dc) == *(float *)(param_1 + 0x4d8)) || (fVar2 + 0.05 <= fVar9)) {
      if (*(uint *)(param_1 + 0x4e4) < uVar15) {
        iVar14 = *(int *)(param_1 + 0x458);
        fVar3 = *(float *)(param_1 + 0x4b4);
        fVar4 = *(float *)(param_1 + 0x4b8);
        fVar5 = *(float *)(param_1 + 0x194);
        fVar6 = *(float *)(param_1 + 0x198);
        *(float *)(iVar14 + iVar11) =
             *(float *)(param_1 + 400) * fVar7 + *(float *)(param_1 + 0x4b0) * fVar2;
        *(float *)(iVar14 + 4 + iVar11) = fVar5 * fVar7 + fVar3 * fVar2;
        *(float *)(iVar14 + 8 + iVar11) = fVar6 * fVar7 + fVar4 * fVar2;
        *(int *)(param_1 + 0x4e4) = *(int *)(param_1 + 0x4e4) + 1;
      }
      else {
        iVar14 = *(int *)(param_1 + 0x4a4);
        fVar2 = *(float *)(param_1 + 0x110);
        fVar7 = *(float *)(iVar14 + 4 + iVar11);
        fVar3 = *(float *)(iVar14 + 8 + iVar11);
        pfVar13 = (float *)(*(int *)(param_1 + 0x458) + iVar11);
        *pfVar13 = fVar2 * *(float *)(iVar14 + iVar11) + *pfVar13;
        pfVar13[1] = fVar7 * fVar2 + pfVar13[1];
        pfVar13[2] = fVar3 * fVar2 + pfVar13[2];
        pfVar13 = (float *)(*(int *)(param_1 + 0x4a4) + iVar11);
        fVar2 = fVar8 / ((*(float *)(param_1 + 0x110) - *(float *)(param_1 + 0x110) * fVar8) + fVar8
                        );
        *pfVar13 = fVar2 * *pfVar13;
        pfVar13[1] = fVar2 * pfVar13[1];
        pfVar13[2] = fVar2 * pfVar13[2];
      }
    }
    else {
      iVar14 = *(int *)(param_1 + 0x458);
      fVar3 = *(float *)(param_1 + 0x4b4);
      fVar4 = *(float *)(param_1 + 0x4b8);
      fVar5 = *(float *)(param_1 + 0x194);
      fVar6 = *(float *)(param_1 + 0x198);
      *(float *)(iVar14 + iVar11) =
           *(float *)(param_1 + 400) * fVar7 + *(float *)(param_1 + 0x4b0) * fVar2;
      *(float *)(iVar14 + 4 + iVar11) = fVar5 * fVar7 + fVar3 * fVar2;
      *(float *)(iVar14 + 8 + iVar11) = fVar6 * fVar7 + fVar4 * fVar2;
    }
    uVar15 = uVar15 + 1;
    local_7c = local_7c + 1.0;
    iVar11 = iVar11 + 0xc;
  } while (uVar15 <= uVar10);
  fVar2 = *(float *)(param_1 + 0x4b0);
  fVar7 = *(float *)(param_1 + 0x4b4);
  fVar8 = *(float *)(param_1 + 0x4b8);
  fVar3 = *(float *)(param_1 + 400);
  fVar4 = *(float *)(param_1 + 0x194);
  fVar5 = *(float *)(param_1 + 0x198);
  if (uVar15 < *(uint *)(param_1 + 0x450)) {
    iVar11 = uVar15 * 0xc;
    do {
      iVar14 = *(int *)(param_1 + 0x458);
      *(float *)(iVar14 + iVar11) = fVar3 * fVar1 + fVar2 * fVar9;
      uVar15 = uVar15 + 1;
      iVar11 = iVar11 + 0xc;
      *(float *)(iVar14 + -8 + iVar11) = fVar4 * fVar1 + fVar7 * fVar9;
      *(float *)(iVar14 + -4 + iVar11) = fVar5 * fVar1 + fVar8 * fVar9;
    } while (uVar15 < *(uint *)(param_1 + 0x450));
  }
LAB_009e1979:
  pfVar13 = *(float **)(param_1 + 0x458);
  iVar11 = *(int *)(param_1 + 0x4a0);
  fVar1 = pfVar13[1];
  fVar2 = pfVar13[iVar11 * 3 + -2];
  fVar7 = pfVar13[2];
  fVar8 = pfVar13[iVar11 * 3 + -1];
  *(float *)(param_1 + 0x130) = (pfVar13[iVar11 * 3 + -3] + *pfVar13) * 0.5;
  *(float *)(param_1 + 0x134) = (fVar1 + fVar2) * 0.5;
  *(float *)(param_1 + 0x138) = (fVar7 + fVar8) * 0.5;
  *(undefined4 *)(param_1 + 0x13c) = 0x3f800000;
  pfVar13 = *(float **)(param_1 + 0x458);
  iVar11 = *(int *)(param_1 + 0x4a0);
  *(float *)(param_1 + 300) =
       SQRT((pfVar13[2] - pfVar13[iVar11 * 3 + -1]) * (pfVar13[2] - pfVar13[iVar11 * 3 + -1]) +
            (pfVar13[1] - pfVar13[iVar11 * 3 + -2]) * (pfVar13[1] - pfVar13[iVar11 * 3 + -2]) +
            (*pfVar13 - pfVar13[iVar11 * 3 + -3]) * (*pfVar13 - pfVar13[iVar11 * 3 + -3]));
  FUN_00ed6110();
  return;
}

