// src/effect/cEsp103Strip.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009CF990..009D7D10, 8 functions

#include "mgrr.h"
#include "cEsp103Strip.h"

// 009CF990  cEsp103Strip::vf1C  size=897  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cEsp103Strip::vf1C(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float *pfVar11;
  int iVar12;
  uint uVar13;
  
  pfVar11 = (float *)FUN_00f99ca0();
  fVar4 = *(float *)(param_1 + 0x4c4) / *(float *)(param_1 + 0x4c8);
  iVar5 = *(int *)(param_1 + 0x450);
  iVar12 = (iVar5 + -4) * *(int *)(param_1 + 0x454);
  fVar1 = *(float *)(param_1 + 0x478);
  if (*(int *)(param_1 + 0x480) == 1) {
    fVar3 = (float)iVar5;
    if (iVar5 < 0) {
      fVar3 = fVar3 + 4.2949673e+09;
    }
    if (*(float *)(param_1 + 0x460) - 1.0 < fVar3) {
      fVar2 = *(float *)(param_1 + 0x460);
      if (fVar2 < 3.0) {
        fVar2 = 3.0;
      }
      uVar13 = 0;
      fVar4 = ((fVar3 - _DAT_0188f9dc) / (_DAT_0188f9d8 + fVar2)) * fVar4;
      fVar3 = *(float *)(param_1 + 0x474) - 0.01;
      if (iVar12 != -2) {
        fVar2 = 0.0;
        pfVar11 = pfVar11 + 2;
        do {
          uVar6 = *(uint *)(param_1 + 0x38);
          fVar9 = fVar1;
          fVar10 = fVar1;
          if ((uVar6 & 0x40000) == 0) {
            if ((uVar6 & 0x80000) == 0) {
              fVar7 = (float)(int)uVar13;
              fVar10 = fVar2;
              if ((int)uVar13 < 0) {
                fVar7 = fVar7 + 4.2949673e+09;
              }
            }
            else {
              fVar7 = (float)(int)uVar13;
              fVar9 = fVar2;
              if ((int)uVar13 < 0) {
                fVar7 = fVar7 + 4.2949673e+09;
              }
            }
            fVar7 = fVar7 * fVar4;
            fVar8 = fVar3;
            if (fVar7 <= fVar3) {
              fVar8 = fVar7;
            }
          }
          else {
            if ((uVar6 & 0x80000) == 0) {
              fVar7 = (float)(int)uVar13;
              fVar10 = fVar2;
              if ((int)uVar13 < 0) {
                fVar7 = fVar7 + 4.2949673e+09;
              }
            }
            else {
              fVar7 = (float)(int)uVar13;
              fVar9 = fVar2;
              if ((int)uVar13 < 0) {
                fVar7 = fVar7 + 4.2949673e+09;
              }
            }
            fVar8 = 1.0 - fVar7 * fVar4;
            if (fVar8 < 0.0) {
              fVar8 = fVar2;
            }
          }
          uVar13 = uVar13 + 1;
          *pfVar11 = fVar9;
          pfVar11[1] = fVar8;
          pfVar11[-2] = fVar10;
          pfVar11[-1] = fVar8;
          pfVar11 = pfVar11 + 4;
        } while (uVar13 < iVar12 + 2U);
      }
      FUN_00f99d30();
      return;
    }
  }
  uVar13 = *(uint *)(param_1 + 0x38);
  if ((uVar13 & 0x40000) == 0) {
    fVar4 = 1.0 - fVar4;
    fVar3 = *(float *)(param_1 + 0x4ac) + fVar4;
    if ((uVar13 & 0x80000) == 0) {
      *pfVar11 = *(float *)(param_1 + 0x4a8);
      pfVar11[1] = fVar3;
      fVar3 = *(float *)(param_1 + 0x4ac);
      pfVar11[2] = *(float *)(param_1 + 0x4a8) + fVar1;
      pfVar11[3] = fVar3 + fVar4;
      fVar4 = *(float *)(param_1 + 0x4ac);
      pfVar11[4] = *(float *)(param_1 + 0x4a8);
      pfVar11[5] = fVar4 + 1.0;
      fVar4 = *(float *)(param_1 + 0x4ac);
      pfVar11[6] = fVar1 + *(float *)(param_1 + 0x4a8);
      pfVar11[7] = fVar4 + 1.0;
      FUN_00f99d30();
      return;
    }
    pfVar11[2] = -*(float *)(param_1 + 0x4a8);
    pfVar11[3] = fVar3;
    fVar3 = *(float *)(param_1 + 0x4ac);
    *pfVar11 = fVar1 - *(float *)(param_1 + 0x4a8);
    pfVar11[1] = fVar3 + fVar4;
    fVar4 = *(float *)(param_1 + 0x4ac);
    pfVar11[6] = -*(float *)(param_1 + 0x4a8);
    pfVar11[7] = fVar4 + 1.0;
    fVar4 = *(float *)(param_1 + 0x4ac);
    pfVar11[4] = fVar1 - *(float *)(param_1 + 0x4a8);
    pfVar11[5] = fVar4 + 1.0;
    FUN_00f99d30();
    return;
  }
  fVar3 = fVar4 - *(float *)(param_1 + 0x4ac);
  if ((uVar13 & 0x80000) == 0) {
    *pfVar11 = *(float *)(param_1 + 0x4a8);
    pfVar11[1] = fVar3;
    fVar3 = *(float *)(param_1 + 0x4ac);
    pfVar11[2] = *(float *)(param_1 + 0x4a8) + fVar1;
    pfVar11[3] = fVar4 - fVar3;
    fVar4 = *(float *)(param_1 + 0x4ac);
    pfVar11[4] = *(float *)(param_1 + 0x4a8);
    pfVar11[5] = -fVar4;
    fVar4 = *(float *)(param_1 + 0x4ac);
    pfVar11[6] = *(float *)(param_1 + 0x4a8) + fVar1;
    pfVar11[7] = -fVar4;
    FUN_00f99d30();
    return;
  }
  pfVar11[2] = -*(float *)(param_1 + 0x4a8);
  pfVar11[3] = fVar3;
  fVar3 = *(float *)(param_1 + 0x4ac);
  *pfVar11 = fVar1 - *(float *)(param_1 + 0x4a8);
  pfVar11[1] = fVar4 - fVar3;
  fVar4 = *(float *)(param_1 + 0x4ac);
  pfVar11[6] = -*(float *)(param_1 + 0x4a8);
  pfVar11[7] = -fVar4;
  fVar4 = *(float *)(param_1 + 0x4ac);
  pfVar11[4] = fVar1 - *(float *)(param_1 + 0x4a8);
  pfVar11[5] = -fVar4;
  FUN_00f99d30();
  return;
}

// 009CFD20  cEsp103Strip::thunk_vf14  size=5  [class]
void __fastcall cEsp103Strip::thunk_vf14(int param_1)

{
  if ((*(int *)(param_1 + 0x458) != 0) && (*(int *)(param_1 + 0x458) != 0)) {
    FUN_00dd48d0(*(int *)(param_1 + 0x458),0);
    *(undefined4 *)(param_1 + 0x458) = 0;
  }
  return;
}

// 009D4490  cEsp103Strip::cEsp103Strip  size=18  [class]
undefined4 * __fastcall cEsp103Strip::cEsp103Strip(undefined4 *param_1)

{
  cEspBase::cEspBase_4();
  *param_1 = vftable;
  return param_1;
}

// 009D44E0  cEsp103Strip::vf00  size=30  [class]
undefined4 __thiscall cEsp103Strip::vf00(undefined4 param_1,byte param_2)

{
  cEspBase::cEspBase_5();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009D6E40  cEsp103Strip::vf20  size=3451  [class]
/* WARNING: Removing unreachable block (ram,0x009d78a5) */
/* WARNING: Removing unreachable block (ram,0x009d73dd) */
/* WARNING: Removing unreachable block (ram,0x009d7242) */
/* WARNING: Removing unreachable block (ram,0x009d77ca) */
/* WARNING: Removing unreachable block (ram,0x009d7a31) */

void __fastcall cEsp103Strip::vf20(int param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  byte bVar12;
  float *pfVar13;
  int iVar14;
  undefined *puVar15;
  float *pfVar16;
  uint uVar17;
  undefined2 in_FPUControlWord;
  float fStack_d4;
  float fStack_d0;
  float local_cc;
  undefined4 local_c8;
  float local_c4;
  undefined4 uStack_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_98;
  float local_94;
  undefined8 local_90;
  longlong local_88;
  float local_7c;
  uint local_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  longlong local_60;
  float *local_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  pfVar13 = (float *)FUN_00f99ca0();
  local_cc = 0.0;
  local_c8 = 1.0;
  local_c4 = 0.0;
  local_90._4_4_ = *(float *)(param_1 + 0x460);
  if (local_90._4_4_ != 0.0) {
    uStack_c0 = (float)CONCAT22(in_FPUControlWord,(undefined2)uStack_c0);
    local_88 = (longlong)ROUND(local_90._4_4_);
    fVar2 = (float)(int)(float)local_88;
    if ((int)(float)local_88 < 0) {
      fVar2 = fVar2 + 4.2949673e+09;
    }
    local_90._4_4_ = 1.0 - (local_90._4_4_ - fVar2);
  }
  uVar17 = *(uint *)(param_1 + 0x454);
  iVar14 = (*(int *)(param_1 + 0x450) + -4) * uVar17 + 1;
  fVar2 = (float)iVar14;
  if (iVar14 < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  local_88 = CONCAT44(local_88._4_4_,1.0 / fVar2);
  local_70 = 1.0;
  if (1 < uVar17) {
    local_60 = CONCAT44(local_60._4_4_,uVar17);
    local_70 = (float)(int)uVar17;
    if ((int)uVar17 < 0) {
      local_70 = local_70 + 4.2949673e+09;
    }
    local_70 = 1.0 / local_70;
  }
  pfVar16 = *(float **)(param_1 + 0x458);
  if (pfVar16 == (float *)0x0) {
    return;
  }
  local_bc = pfVar16[3] - *pfVar16;
  local_b8 = pfVar16[4] - pfVar16[1];
  local_b4 = pfVar16[5] - pfVar16[2];
  fVar2 = local_b4 * local_b4 + local_b8 * local_b8 + local_bc * local_bc;
  local_54 = pfVar13;
  if (SQRT(fVar2) <= 0.000125) {
    if (((local_bc == 0.0) && (local_b8 == 0.0)) && (local_b4 == 0.0)) {
      local_cc = 0.0;
      local_c4 = 0.0;
      local_c8 = 1.0;
      goto LAB_009d7012;
    }
    if (fVar2 < 0.0 != (fVar2 == 0.0)) {
      FUN_00dd5650(&DAT_0163d0ac);
      local_bc = 0.0;
      local_b8 = 1.0;
      local_b4 = 0.0;
    }
    D3DXVec3Normalize(&local_bc,&local_bc);
    puVar15 = DAT_01beb8c0;
    if (DAT_01beb8c0 == (undefined *)0x0) {
      puVar15 = &DAT_01bea1d0;
    }
    pfVar16 = *(float **)(param_1 + 0x458);
    local_b0 = *(float *)(puVar15 + 0x1b0) - *pfVar16;
    local_ac = *(float *)(puVar15 + 0x1b4) - pfVar16[1];
    local_a8 = *(float *)(puVar15 + 0x1b8) - pfVar16[2];
    fVar2 = local_a8 * local_a8 + local_ac * local_ac + local_b0 * local_b0;
    if (fVar2 < 0.0 == (fVar2 == 0.0)) {
      bVar12 = (byte)((ushort)((ushort)NAN(local_b0) << 10) >> 8);
      goto LAB_009d72d3;
    }
LAB_009d730e:
    FUN_00dd5650(&DAT_0163d0ac);
    local_b0 = 0.0;
    local_ac = 1.0;
    local_a8 = 0.0;
  }
  else {
    puVar15 = DAT_01beb8c0;
    if (DAT_01beb8c0 == (undefined *)0x0) {
      puVar15 = &DAT_01bea1d0;
    }
    local_b0 = *(float *)(puVar15 + 0x1b0) - *pfVar16;
    local_ac = *(float *)(puVar15 + 0x1b4) - pfVar16[1];
    local_a8 = *(float *)(puVar15 + 0x1b8) - pfVar16[2];
    fVar2 = local_a8 * local_a8 + local_ac * local_ac + local_b0 * local_b0;
    if (fVar2 < 0.0 != (fVar2 == 0.0)) goto LAB_009d730e;
    bVar12 = (byte)((ushort)((ushort)NAN(local_b0) << 10) >> 8);
LAB_009d72d3:
    if ((POPCOUNT(bVar12 | 0x40) & 1U) == 0) goto LAB_009d730e;
    FUN_00ddf460(&local_b0,&local_b0);
  }
  local_cc = local_ac * local_b4 - local_a8 * local_b8;
  local_c8 = local_a8 * local_bc - local_b0 * local_b4;
  local_c4 = local_b0 * local_b8 - local_ac * local_bc;
  fVar2 = local_c4 * local_c4 + local_cc * local_cc + local_c8 * local_c8;
  local_98 = local_cc;
  local_94 = local_c8;
  local_90._0_4_ = local_c4;
  if (fVar2 < 0.0 != (fVar2 == 0.0)) {
    FUN_00dd5650(&DAT_0163d0ac);
    local_cc = 0.0;
    local_c8 = 1.0;
    local_c4 = 0.0;
  }
  D3DXVec3Normalize(&local_cc,&local_cc);
LAB_009d7012:
  fVar2 = *(float *)(param_1 + 0x100);
  pfVar16 = *(float **)(param_1 + 0x458);
  local_cc = local_cc * fVar2;
  local_7c = 2.8026e-45;
  local_78 = 1;
  local_c8 = fVar2 * local_c8;
  local_c4 = fVar2 * local_c4;
  local_98 = *pfVar16;
  local_94 = pfVar16[1];
  local_90._0_4_ = pfVar16[2];
  *pfVar13 = local_98 + local_cc;
  pfVar13[1] = local_94 + local_c8;
  pfVar13[2] = (float)local_90 + local_c4;
  pfVar13[3] = local_98 - local_cc;
  pfVar13[4] = local_94 - local_c8;
  pfVar13[5] = (float)local_90 - local_c4;
  fStack_74 = local_70;
  fVar2 = local_70;
  if (1 < *(int *)(param_1 + 0x450) - 3U) {
    do {
      uVar17 = 0;
      if (*(int *)(param_1 + 0x454) != 0) {
        pfVar13 = local_54 + (int)local_7c * 3;
        do {
          uStack_c0 = (float)CONCAT22(in_FPUControlWord,(undefined2)uStack_c0);
          local_60 = (longlong)ROUND(fVar2 + local_90._4_4_);
          fVar5 = (float)(int)local_60;
          if ((int)local_60 < 0) {
            fVar5 = fVar5 + 4.2949673e+09;
          }
          iVar3 = *(int *)(param_1 + 0x458);
          fVar5 = (fVar2 + local_90._4_4_) - fVar5;
          iVar1 = (int)local_60 * 3 + 6;
          iVar14 = iVar3 + iVar1 * 4;
          iVar8 = (int)local_60 * 0xc;
          fStack_28 = *(float *)(iVar3 + iVar1 * 4) - *(float *)(iVar3 + 0xc + iVar8);
          fStack_24 = *(float *)(iVar14 + 4) - *(float *)(iVar3 + 0x10 + iVar8);
          fStack_20 = *(float *)(iVar14 + 8) - *(float *)(iVar3 + 0x14 + iVar8);
          if (((((float *)(iVar8 + iVar3))[3] == *(float *)(iVar8 + iVar3)) &&
              (*(float *)(iVar3 + 0x10 + iVar8) == *(float *)(iVar3 + 4 + iVar8))) &&
             (*(float *)(iVar8 + iVar3 + 0x14) == *(float *)(iVar8 + 8 + iVar3))) {
            fStack_6c = *(float *)(iVar3 + iVar8);
            fStack_68 = *(float *)(iVar3 + 4 + iVar8);
            fStack_64 = *(float *)(iVar3 + 8 + iVar8);
          }
          else {
            fVar7 = fVar5 * fVar5;
            pfVar16 = (float *)(*(int *)(param_1 + 0x458) + iVar8);
            fVar4 = fVar7 * fVar5;
            fVar2 = (fVar4 * 2.0 - fVar7 * 3.0) + 1.0;
            fVar5 = (fVar4 - fVar7 * 2.0) + fVar5;
            fVar6 = fVar7 * 3.0 - fVar4 * 2.0;
            fVar4 = fVar4 - fVar7;
            fStack_6c = fVar4 * fStack_28 + fVar6 * pfVar16[3] + fVar5 * local_bc + *pfVar16 * fVar2
            ;
            fStack_68 = fStack_24 * fVar4 +
                        pfVar16[4] * fVar6 + fVar5 * local_b8 + pfVar16[1] * fVar2;
            fStack_64 = fVar4 * fStack_20 +
                        fVar5 * local_b4 + pfVar16[2] * fVar2 + pfVar16[5] * fVar6;
          }
          local_bc = fStack_6c - local_98;
          local_b8 = fStack_68 - local_94;
          local_b4 = fStack_64 - (float)local_90;
          if (SQRT(local_b4 * local_b4 + local_bc * local_bc + local_b8 * local_b8) <= 0.000125) {
            if (((local_bc != 0.0) || (local_b8 != 0.0)) || (local_b4 != 0.0)) {
              puVar15 = DAT_01beb8c0;
              if (DAT_01beb8c0 == (undefined *)0x0) {
                puVar15 = &DAT_01bea1d0;
              }
              iVar14 = *(int *)(param_1 + 0x458);
              fStack_50 = *(float *)(puVar15 + 0x1b0) - *(float *)(iVar14 + iVar8);
              fStack_4c = *(float *)(puVar15 + 0x1b4) - *(float *)(iVar14 + 4 + iVar8);
              fStack_48 = *(float *)(puVar15 + 0x1b8) - *(float *)(iVar14 + 8 + iVar8);
              fVar2 = fStack_48 * fStack_48 + fStack_50 * fStack_50 + fStack_4c * fStack_4c;
              if (fVar2 < 0.0 == (fVar2 == 0.0)) {
                FUN_00ddf460(&fStack_50,&fStack_50);
              }
              else {
                FUN_00dd5650(&DAT_0163d0ac);
                fStack_50 = 0.0;
                fStack_4c = 1.0;
                fStack_48 = 0.0;
              }
              fVar2 = local_b4 * local_b4 + local_bc * local_bc + local_b8 * local_b8;
              if (fVar2 < 0.0 != (fVar2 == 0.0)) {
                FUN_00dd5650(&DAT_0163d0ac);
                local_bc = 0.0;
                local_b8 = 1.0;
                local_b4 = 0.0;
              }
              D3DXVec3Normalize(&local_bc,&local_bc);
              local_cc = fStack_4c * local_b4 - fStack_48 * local_b8;
              local_c8 = fStack_48 * local_bc - fStack_50 * local_b4;
              local_c4 = fStack_50 * local_b8 - fStack_4c * local_bc;
              fVar2 = local_c4 * local_c4 + local_cc * local_cc + local_c8 * local_c8;
              local_b0 = local_cc;
              local_ac = local_c8;
              local_a8 = local_c4;
              if (fVar2 < 0.0 == (fVar2 == 0.0)) {
                bVar12 = (byte)((ushort)((ushort)NAN(local_c8) << 10) >> 8);
                goto LAB_009d7895;
              }
              goto LAB_009d78ab;
            }
            local_cc = 0.0;
            local_c8 = 1.0;
            local_c4 = 0.0;
          }
          else {
            puVar15 = DAT_01beb8c0;
            if (DAT_01beb8c0 == (undefined *)0x0) {
              puVar15 = &DAT_01bea1d0;
            }
            iVar14 = *(int *)(param_1 + 0x458);
            fStack_40 = *(float *)(puVar15 + 0x1b0) - *(float *)(iVar14 + iVar8);
            fStack_3c = *(float *)(puVar15 + 0x1b4) - *(float *)(iVar14 + 4 + iVar8);
            fStack_38 = *(float *)(puVar15 + 0x1b8) - *(float *)(iVar14 + 8 + iVar8);
            fVar2 = fStack_38 * fStack_38 + fStack_40 * fStack_40 + fStack_3c * fStack_3c;
            if (fVar2 < 0.0 == (fVar2 == 0.0)) {
              FUN_00ddf460(&fStack_40,&fStack_40);
            }
            else {
              FUN_00dd5650(&DAT_0163d0ac);
              fStack_40 = 0.0;
              fStack_3c = 1.0;
              fStack_38 = 0.0;
            }
            local_cc = fStack_3c * local_b4 - fStack_38 * local_b8;
            local_c8 = fStack_38 * local_bc - fStack_40 * local_b4;
            local_c4 = fStack_40 * local_b8 - fStack_3c * local_bc;
            fVar2 = local_c4 * local_c4 + local_cc * local_cc + local_c8 * local_c8;
            fStack_1c = local_cc;
            fStack_18 = local_c8;
            fStack_14 = local_c4;
            if (fVar2 < 0.0 == (fVar2 == 0.0)) {
              bVar12 = (byte)((ushort)((ushort)NAN(local_c8) << 10) >> 8);
LAB_009d7895:
              if ((POPCOUNT(bVar12 | 0x40) & 1U) == 0) goto LAB_009d78ab;
            }
            else {
LAB_009d78ab:
              FUN_00dd5650(&DAT_0163d0ac);
              local_cc = 0.0;
              local_c8 = 1.0;
              local_c4 = 0.0;
            }
            D3DXVec3Normalize(&local_cc,&local_cc);
          }
          iVar14 = *(int *)(param_1 + 0x454) * local_78 + uVar17;
          local_60 = CONCAT44(local_60._4_4_,iVar14);
          fVar2 = (float)iVar14;
          if (iVar14 < 0) {
            fVar2 = fVar2 + 4.2949673e+09;
          }
          local_7c = (float)((int)local_7c + 2);
          uVar17 = uVar17 + 1;
          fVar2 = (1.0 - fVar2 * (float)local_88) * *(float *)(param_1 + 0x100) +
                  *(float *)(param_1 + 0x104) * fVar2 * (float)local_88;
          local_cc = local_cc * fVar2;
          local_c8 = fVar2 * local_c8;
          local_c4 = fVar2 * local_c4;
          *pfVar13 = fStack_6c + local_cc;
          pfVar13[1] = fStack_68 + local_c8;
          pfVar13[2] = local_c4 + fStack_64;
          pfVar13[3] = fStack_6c - local_cc;
          pfVar13[4] = fStack_68 - local_c8;
          pfVar13[5] = fStack_64 - local_c4;
          fVar2 = local_70 + fStack_74;
          pfVar13 = pfVar13 + 6;
          local_98 = fStack_6c;
          local_94 = fStack_68;
          fStack_74 = fVar2;
          local_90._0_4_ = fStack_64;
        } while (uVar17 < *(uint *)(param_1 + 0x454));
      }
      local_78 = local_78 + 1;
      pfVar13 = local_54;
    } while (local_78 < *(int *)(param_1 + 0x450) - 3U);
  }
  fVar5 = local_7c;
  fVar2 = local_c4 * local_c4 + local_cc * local_cc + local_c8 * local_c8;
  if (fVar2 < 0.0 != (fVar2 == 0.0)) {
    FUN_00dd5650(&DAT_0163d0ac);
    local_cc = 0.0;
    local_c8 = 1.0;
    local_c4 = 0.0;
  }
  D3DXVec3Normalize(&local_cc,&local_cc);
  fVar2 = *(float *)(param_1 + 0x104);
  local_c8 = (float)CONCAT22(in_FPUControlWord,(undefined2)local_c8);
  local_cc = fVar2 * local_cc;
  local_90 = (longlong)ROUND(local_7c + local_94);
  pfVar16 = (float *)(*(int *)(param_1 + 0x458) + (int)(float)local_90 * 0xc);
  fVar4 = (float)(int)(float)local_90;
  if ((int)(float)local_90 < 0) {
    fVar4 = fVar4 + 4.2949673e+09;
  }
  fVar4 = (local_7c + local_94) - fVar4;
  fVar6 = fVar4 * fVar4;
  fVar7 = fVar6 * fVar4;
  fVar11 = (fVar7 * 2.0 - fVar6 * 3.0) + 1.0;
  fVar4 = (fVar7 - fVar6 * 2.0) + fVar4;
  fVar10 = fVar6 * 3.0 - fVar7 * 2.0;
  fVar7 = fVar7 - fVar6;
  fVar9 = local_c4 * fVar7 + fVar10 * pfVar16[3] + *pfVar16 * fVar11 + fVar4 * local_c4;
  fVar6 = pfVar16[4] * fVar10 + pfVar16[1] * fVar11 + fVar4 * uStack_c0 + fVar7 * uStack_c0;
  pfVar13 = pfVar13 + (int)fVar5 * 3;
  fVar5 = pfVar16[2] * fVar11 + fVar4 * local_bc + pfVar16[5] * fVar10 + fVar7 * local_bc;
  *pfVar13 = fVar9 + fStack_d4 * fVar2;
  pfVar13[1] = fVar6 + fStack_d0 * fVar2;
  pfVar13[2] = fVar5 + local_cc;
  pfVar13[3] = fVar9 - fStack_d4 * fVar2;
  pfVar13[4] = fVar6 - fStack_d0 * fVar2;
  pfVar13[5] = fVar5 - local_cc;
  FUN_00f99d30();
  return;
}

// 009D7BC0  cEsp103Strip::vf04  size=124  [class]
undefined4 __thiscall
cEsp103Strip::vf04(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  undefined4 uVar4;
  
  iVar2 = cEspModel::vf04(param_2,param_3,param_4);
  if ((iVar2 != 0) && (iVar2 = FUN_00f12b50(), iVar2 != 0)) {
    if ((*(int *)(param_1 + 0x58) != 0) &&
       (puVar3 = (uint *)(*(int *)(param_1 + 0x58) + 0x70), puVar3 != (uint *)0x0)) {
      uVar1 = *puVar3;
      if ((uVar1 + 0xf & 0xfffffff0) != uVar1) {
        uVar4 = FUN_00f59ed0(7);
        FUN_00dd5650(&DAT_016597b4,uVar4);
      }
      if (uVar1 != 0) {
        *(undefined4 *)(param_1 + 0x4a0) = *(undefined4 *)(uVar1 + 4);
        *(undefined4 *)(param_1 + 0x4a4) = *(undefined4 *)(uVar1 + 8);
      }
    }
    return 1;
  }
  return 0;
}

// 009D7C40  cEsp103Strip::vf08  size=202  [class]
void __fastcall cEsp103Strip::vf08(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  int iVar6;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_30 [16];
  undefined1 local_20 [28];
  
  esp39::vf08();
  if (*(int *)(param_1 + 0x50) != 0) {
    iVar6 = *(int *)(param_1 + 0x50);
    local_40 = *(undefined4 *)(iVar6 + 0x40);
    local_3c = *(undefined4 *)(iVar6 + 0x44);
    local_38 = *(undefined4 *)(iVar6 + 0x48);
  }
  iVar6 = FUN_0090dc50(local_20,local_30,0,&local_40,param_1 + 400,0x1e,"esp103");
  if (iVar6 != 0) {
    *(undefined4 *)(param_1 + 0x4b0) = *(undefined4 *)(param_1 + 0x180);
    *(undefined4 *)(param_1 + 0x4b4) = *(undefined4 *)(param_1 + 0x184);
    *(undefined4 *)(param_1 + 0x4b8) = *(undefined4 *)(param_1 + 0x188);
    *(undefined4 *)(param_1 + 0x4bc) = *(undefined4 *)(param_1 + 0x18c);
    return;
  }
  fVar1 = *(float *)(param_1 + 0x184);
  fVar2 = *(float *)(param_1 + 0x174);
  fVar3 = *(float *)(param_1 + 0x188);
  fVar4 = *(float *)(param_1 + 0x178);
  pfVar5 = *(float **)(param_1 + 0x458);
  *pfVar5 = *(float *)(param_1 + 0x170) + *(float *)(param_1 + 0x180);
  pfVar5[1] = fVar1 + fVar2;
  pfVar5[2] = fVar3 + fVar4;
  return;
}

// 009D7D10  cEsp103Strip::vf10  size=299  [class]
void __fastcall cEsp103Strip::vf10(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  
  if (((DAT_01edd490 != 0) && (iVar1 = cPrimHeap::allocBuffer(0x180,0x20), iVar1 != 0)) &&
     (iVar1 = cEspDrawStrip::cEspDrawStrip(), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x78) = 0;
    *(undefined4 *)(iVar1 + 0x74) = 0;
    *(undefined4 *)(iVar1 + 0x70) = 0;
    *(undefined4 *)(iVar1 + 0x6c) = 0;
    *(undefined4 *)(iVar1 + 100) = 0;
    *(undefined4 *)(iVar1 + 0x60) = 0;
    *(undefined4 *)(iVar1 + 0x5c) = 0;
    *(undefined4 *)(iVar1 + 0x58) = 0;
    *(undefined4 *)(iVar1 + 0x50) = 0;
    *(undefined4 *)(iVar1 + 0x4c) = 0;
    *(undefined4 *)(iVar1 + 0x48) = 0;
    *(undefined4 *)(iVar1 + 0x44) = 0;
    *(undefined4 *)(iVar1 + 0x7c) = 0x3f800000;
    *(undefined4 *)(iVar1 + 0x68) = 0x3f800000;
    *(undefined4 *)(iVar1 + 0x54) = 0x3f800000;
    *(undefined4 *)(iVar1 + 0x40) = 0x3f800000;
    FUN_00efed20();
    FUN_00edfcd0(param_1 + 0xf2);
    FUN_00f26b40(iVar1);
    FUN_00ed4fa0(iVar1,param_1 + 0xf2,DAT_01b78870,param_1[0xf6]);
    iVar3 = (param_1[0x114] + -4) * param_1[0x115] * 2 + 4;
    iVar2 = FUN_00f51070(iVar1 + 0xd0,0xc,iVar3);
    if (iVar2 != 0) {
      (**(code **)(*param_1 + 0x20))(iVar1 + 0xd0);
      iVar3 = FUN_00f51070(iVar1 + 0xf8,8,iVar3);
      if (iVar3 != 0) {
        (**(code **)(*param_1 + 0x1c))(iVar1 + 0xf8);
        puVar4 = DAT_01beb8c0;
        if (DAT_01beb8c0 == (undefined *)0x0) {
          puVar4 = &DAT_01bea1d0;
        }
        FUN_00edc9e0(iVar1,iVar1,param_1 + 0xf2,puVar4 + 0x2d0,puVar4 + 0x1b0);
      }
    }
  }
  return;
}

