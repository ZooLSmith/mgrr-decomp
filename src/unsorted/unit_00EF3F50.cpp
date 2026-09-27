// src/unsorted/unit_00EF3F50.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EF3F50..00EF59C0, 4 functions

#include "types.h"

// 00EF3F50  FUN_00ef3f50  size=1971  [run]
/* WARNING: Removing unreachable block (ram,0x00ef4248) */
/* WARNING: Removing unreachable block (ram,0x00ef4376) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00ef3f50(int param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  uint *puVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_94 [4];
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float local_54;
  float *local_50;
  int local_4c;
  undefined4 local_48;
  int local_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float local_20;
  float local_1c;
  float local_18;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_94;
  local_48 = param_2;
  local_4c = param_1;
  local_50 = (float *)FUN_00f99ca0();
  pfVar3 = (float *)FUN_00e9fe70();
  pfVar4 = (float *)FUN_00e9feb0();
  local_80 = *pfVar4 - *pfVar3;
  local_7c = pfVar4[1] - pfVar3[1];
  local_78 = pfVar4[2] - pfVar3[2];
  local_74 = pfVar4[3] - pfVar3[3];
  local_90 = local_80 * local_80 + local_7c * local_7c + local_78 * local_78;
  if (local_90 < 0.0 == (local_90 == 0.0)) {
    FUN_00ddf460(&local_80,&local_80);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    local_80 = 0.0;
    local_7c = 1.0;
    local_78 = 0.0;
  }
  if (*(int *)(param_1 + 0x484) != 0) {
    if ((_DAT_01ee1250 & 1) == 0) {
      _DAT_01ee1250 = _DAT_01ee1250 | 1;
      _DAT_01ee1240 = 0.2;
      _DAT_01ee1244 = 0.5;
      _DAT_01ee1248 = 0.0;
      _DAT_01ee124c = 0.0;
    }
    local_80 = local_80 + _DAT_01ee1240;
    local_7c = local_7c + _DAT_01ee1244;
    local_78 = local_78 + _DAT_01ee1248;
    local_74 = local_74 + _DAT_01ee124c;
    local_90 = local_80 * local_80 + local_7c * local_7c + local_78 * local_78;
    if (local_90 < 0.0 == (local_90 == 0.0)) {
      FUN_00ddf460(&local_80,&local_80);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_80 = 0.0;
      local_7c = 1.0;
      local_78 = 0.0;
    }
  }
  local_44 = *(int *)(param_1 + 0x458);
  if (local_44 == 0) {
    __security_check_cookie(local_14 ^ (uint)auStack_94);
    return;
  }
  uVar8 = *(uint *)(param_1 + 0x450);
  uVar9 = 0;
  local_90 = 0.0;
  if (uVar8 != 0) {
    pfVar3 = (float *)(local_44 + 4);
    pfVar4 = local_50;
    do {
      if (uVar8 - 1 <= (uint)local_90) {
        pfVar3 = (float *)(local_44 + (int)local_90 * 0xc);
        pfVar4 = local_50 + uVar9 * 3;
        fVar1 = pfVar3[1];
        fVar2 = pfVar3[2];
        *pfVar4 = fStack_40 + *(float *)(local_44 + (int)local_90 * 0xc);
        pfVar4[1] = fStack_3c + fVar1;
        pfVar4[2] = fStack_38 + fVar2;
        fStack_8c = *pfVar3 - fStack_40;
        fStack_88 = pfVar3[1] - fStack_3c;
        fStack_84 = pfVar3[2] - fStack_38;
        pfVar3 = local_50 + uVar9 * 3 + 3;
        uVar9 = uVar9 + 2;
        *pfVar3 = fStack_8c;
        pfVar3[1] = fStack_88;
        pfVar3[2] = fStack_84;
        param_1 = local_4c;
        break;
      }
      local_20 = pfVar3[2] - pfVar3[-1];
      local_1c = pfVar3[3] - *pfVar3;
      local_18 = pfVar3[4] - pfVar3[1];
      if (((local_20 != 0.0) || (local_1c != 0.0)) || (local_18 != 0.0)) {
        local_54 = local_18 * local_18 + local_20 * local_20 + local_1c * local_1c;
        if (local_54 < 0.0 != (local_54 == 0.0)) {
          FUN_00dd5650(&DAT_0163d0ac);
          local_20 = 0.0;
          local_1c = 1.0;
          local_18 = 0.0;
        }
        D3DXVec3Normalize(&local_20,&local_20);
        fStack_70 = local_18 * local_7c - local_1c * local_78;
        fStack_6c = local_20 * local_78 - local_80 * local_18;
        fStack_68 = local_80 * local_1c - local_20 * local_7c;
        fStack_2c = fStack_70;
        fStack_28 = fStack_6c;
        fStack_24 = fStack_68;
        if (((fStack_70 != 0.0) || (fStack_6c != 0.0)) || (fStack_68 != 0.0)) {
          local_54 = fStack_68 * fStack_68 + fStack_70 * fStack_70 + fStack_6c * fStack_6c;
          if (local_54 < 0.0 != (local_54 == 0.0)) {
            FUN_00dd5650(&DAT_0163d0ac);
            fStack_2c = 0.0;
            fStack_28 = 1.0;
            fStack_24 = 0.0;
          }
          D3DXVec3Normalize(&fStack_2c,&fStack_2c);
          local_54 = *(float *)(local_4c + 0x100);
          uVar9 = uVar9 + 2;
          fStack_40 = local_54 * fStack_2c;
          fStack_3c = local_54 * fStack_28;
          fStack_38 = local_54 * fStack_24;
          fVar1 = *pfVar3;
          fVar2 = pfVar3[1];
          *pfVar4 = fStack_40 + pfVar3[-1];
          pfVar4[1] = fVar1 + fStack_3c;
          pfVar4[2] = fStack_38 + fVar2;
          fStack_8c = pfVar3[-1] - fStack_40;
          fStack_88 = *pfVar3 - fStack_3c;
          fStack_84 = pfVar3[1] - fStack_38;
          pfVar4[3] = fStack_8c;
          pfVar4[4] = fStack_88;
          pfVar4[5] = fStack_84;
          pfVar4 = pfVar4 + 6;
          fStack_2c = fStack_40;
          fStack_28 = fStack_3c;
          fStack_24 = fStack_38;
        }
      }
      uVar8 = *(uint *)(local_4c + 0x450);
      local_90 = (float)((int)local_90 + 1);
      pfVar3 = pfVar3 + 3;
      param_1 = local_4c;
    } while ((uint)local_90 < uVar8);
  }
  if ((*(int *)(param_1 + 0x58) == 0) ||
     (puVar5 = (uint *)(*(int *)(param_1 + 0x58) + 0x30), puVar5 == (uint *)0x0)) {
    uVar8 = 0;
  }
  else {
    uVar8 = *puVar5;
    if ((uVar8 + 0xf & 0xfffffff0) != uVar8) {
      uVar6 = FUN_00f59ed0(3);
      FUN_00dd5650(&DAT_016597b4,uVar6);
    }
  }
  local_90 = *(float *)(uVar8 + 8);
  if (local_90 != 0.0) {
    pfVar3 = (float *)FUN_00e9fe70();
    fStack_70 = *pfVar3 - *(float *)(param_1 + 400);
    fStack_6c = pfVar3[1] - *(float *)(param_1 + 0x194);
    fStack_68 = pfVar3[2] - *(float *)(param_1 + 0x198);
    fStack_64 = pfVar3[3] - *(float *)(param_1 + 0x19c);
    fVar1 = 0.0;
    if (((fStack_70 == 0.0) && (fStack_6c == 0.0)) && (fStack_68 == 0.0)) {
      fStack_70 = 0.0;
      fStack_6c = 0.0;
    }
    else {
      FUN_00ddf460(&fStack_70,&fStack_70);
      fStack_70 = local_90 * fStack_70;
      fStack_6c = fStack_6c * local_90;
      fVar1 = local_90 * fStack_68;
    }
    uVar8 = 0;
    if (3 < (int)uVar9) {
      iVar7 = (uVar9 - 4 >> 2) + 1;
      uVar8 = iVar7 * 4;
      pfVar3 = local_50 + 5;
      do {
        iVar7 = iVar7 + -1;
        pfVar3[-5] = fStack_70 + pfVar3[-5];
        pfVar3[-4] = fStack_6c + pfVar3[-4];
        pfVar3[-3] = fVar1 + pfVar3[-3];
        pfVar3[-2] = pfVar3[-2] + fStack_70;
        pfVar3[-1] = fStack_6c + pfVar3[-1];
        *pfVar3 = fVar1 + *pfVar3;
        pfVar3[1] = fStack_70 + pfVar3[1];
        pfVar3[2] = fStack_6c + pfVar3[2];
        pfVar3[3] = fVar1 + pfVar3[3];
        pfVar3[4] = pfVar3[4] + fStack_70;
        pfVar3[5] = pfVar3[5] + fStack_6c;
        pfVar3[6] = fVar1 + pfVar3[6];
        pfVar3 = pfVar3 + 0xc;
      } while (iVar7 != 0);
    }
    fStack_68 = fVar1;
    if (uVar8 < uVar9) {
      iVar7 = uVar9 - uVar8;
      pfVar3 = local_50 + uVar8 * 3 + 2;
      do {
        iVar7 = iVar7 + -1;
        pfVar3[-2] = fStack_70 + pfVar3[-2];
        pfVar3[-1] = fStack_6c + pfVar3[-1];
        *pfVar3 = fVar1 + *pfVar3;
        pfVar3 = pfVar3 + 3;
      } while (iVar7 != 0);
    }
  }
  FUN_00f99d30();
  __security_check_cookie(local_14 ^ (uint)auStack_94);
  return;
}

// 00EF4710  FUN_00ef4710  size=4700  [run]
/* WARNING: Removing unreachable block (ram,0x00ef53c3) */
/* WARNING: Removing unreachable block (ram,0x00ef4dbd) */
/* WARNING: Removing unreachable block (ram,0x00ef4be7) */
/* WARNING: Removing unreachable block (ram,0x00ef51e4) */
/* WARNING: Removing unreachable block (ram,0x00ef54f5) */
/* WARNING: Removing unreachable block (ram,0x00ef5712) */

void __thiscall FUN_00ef4710(int param_1,float param_2)

{
  longlong lVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  float fVar12;
  undefined2 in_FPUControlWord;
  float10 fVar13;
  undefined1 auStack_104 [4];
  float local_100;
  float local_fc;
  float *local_f8;
  float local_f4;
  undefined8 local_f0;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float *local_d8;
  undefined4 uStack_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float fStack_b8;
  float local_b4;
  float local_b0;
  float fStack_ac;
  longlong local_a8;
  float local_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_64;
  float *pfStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float *pfStack_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float *local_1c;
  float local_18;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_104;
  local_30 = param_2;
  pfVar8 = (float *)FUN_00f99ca0();
  local_2c = 0.0;
  local_28 = 0.0;
  _local_d8 = CONCAT44(uStack_d4,pfVar8);
  local_24 = 0.0;
  local_b0 = *(float *)(param_1 + 0x460);
  if (local_b0 != 0.0) {
    local_e8 = (float)CONCAT22(local_e8._2_2_,in_FPUControlWord);
    local_a8 = (longlong)ROUND(local_b0);
    local_100 = (float)(int)(float)local_a8;
    if ((int)(float)local_a8 < 0) {
      local_100 = local_100 + 4.2949673e+09;
    }
    local_100 = local_b0 - local_100;
    local_b0 = 1.0 - local_100;
  }
  uVar3 = *(uint *)(param_1 + 0x454);
  iVar9 = (*(int *)(param_1 + 0x450) + -4) * uVar3 + 1;
  fVar12 = (float)iVar9;
  if (iVar9 < 0) {
    fVar12 = fVar12 + 4.2949673e+09;
  }
  local_a8 = CONCAT44(local_a8._4_4_,1.0 / fVar12);
  local_9c = 1.0;
  if (1 < uVar3) {
    local_f0 = CONCAT44(local_f0._4_4_,uVar3);
    local_9c = (float)(int)uVar3;
    if ((int)uVar3 < 0) {
      local_9c = local_9c + 4.2949673e+09;
    }
    local_9c = 1.0 / local_9c;
  }
  pfVar11 = *(float **)(param_1 + 0x458);
  if (pfVar11 == (float *)0x0) goto LAB_00ef5955;
  local_fc = pfVar11[3] - *pfVar11;
  local_f8 = (float *)(pfVar11[4] - pfVar11[1]);
  local_f4 = pfVar11[5] - pfVar11[2];
  local_b4 = local_fc * local_fc + (float)local_f8 * (float)local_f8 + local_f4 * local_f4;
  local_20 = local_fc;
  local_1c = local_f8;
  local_18 = local_f4;
  fVar13 = (float10)FUN_00fdef70();
  local_100 = (float)fVar13;
  if (local_100 <= 0.000125) {
    if (((local_fc != 0.0) || ((float)local_f8 != 0.0)) || (local_f4 != 0.0)) {
      if (local_b4 <= 0.0) {
        FUN_00dd5650(&DAT_0163d0ac);
        local_20 = 0.0;
        local_1c = (float *)0x3f800000;
        local_18 = 0.0;
      }
      D3DXVec3Normalize(&local_20,&local_20);
      pfVar11 = *(float **)(param_1 + 0x458);
      pfVar10 = (float *)FUN_00e9fe70();
      local_d0 = *pfVar10 - *pfVar11;
      local_cc = pfVar10[1] - pfVar11[1];
      local_c8 = pfVar10[2] - pfVar11[2];
      local_100 = local_cc * local_cc + local_d0 * local_d0 + local_c8 * local_c8;
      if (local_100 < 0.0 == (local_100 == 0.0)) {
        FUN_00ddf460(&local_d0,&local_d0);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        local_d0 = 0.0;
        local_cc = 1.0;
        local_c8 = 0.0;
      }
      local_fc = local_18 * local_cc - (float)local_1c * local_c8;
      local_f8 = (float *)(local_20 * local_c8 - local_d0 * local_18);
      local_f4 = local_d0 * (float)local_1c - local_20 * local_cc;
      local_100 = local_fc * local_fc + (float)local_f8 * (float)local_f8 + local_f4 * local_f4;
      goto LAB_00ef4d5e;
    }
    local_2c = 0.0;
    local_28 = 1.0;
    local_24 = 0.0;
  }
  else {
    pfVar10 = (float *)FUN_00e9fe70();
    local_d0 = *pfVar10 - *pfVar11;
    local_cc = pfVar10[1] - pfVar11[1];
    local_c8 = pfVar10[2] - pfVar11[2];
    local_100 = local_d0 * local_d0 + local_cc * local_cc + local_c8 * local_c8;
    if (local_100 < 0.0 == (local_100 == 0.0)) {
      FUN_00ddf460(&local_d0,&local_d0);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_d0 = 0.0;
      local_cc = 1.0;
      local_c8 = 0.0;
    }
    local_fc = local_18 * local_cc - (float)local_1c * local_c8;
    local_f8 = (float *)(local_20 * local_c8 - local_d0 * local_18);
    local_f4 = local_d0 * (float)local_1c - local_20 * local_cc;
    local_100 = (float)local_f8 * (float)local_f8 + local_fc * local_fc + local_f4 * local_f4;
LAB_00ef4d5e:
    local_2c = local_fc;
    local_24 = local_f4;
    local_28 = (float)local_f8;
    if (local_100 < 0.0 != (local_100 == 0.0)) {
      FUN_00dd5650(&DAT_0163d0ac);
      local_2c = 0.0;
      local_28 = 1.0;
      local_24 = 0.0;
    }
    D3DXVec3Normalize(&local_2c,&local_2c);
  }
  local_100 = *(float *)(param_1 + 0x100);
  pfVar11 = *(float **)(param_1 + 0x458);
  fVar12 = 2.8026e-45;
  local_98 = 2.8026e-45;
  local_b4 = 1.4013e-45;
  local_2c = local_100 * local_2c;
  local_28 = local_100 * local_28;
  local_24 = local_100 * local_24;
  local_fc = *pfVar11;
  local_f8 = (float *)pfVar11[1];
  local_f4 = pfVar11[2];
  *pfVar8 = local_fc + local_2c;
  pfVar8[1] = (float)local_f8 + local_28;
  pfVar8[2] = local_f4 + local_24;
  fStack_e4 = local_fc - local_2c;
  fStack_e0 = (float)local_f8 - local_28;
  fStack_dc = local_f4 - local_24;
  pfVar8[3] = fStack_e4;
  pfVar8[4] = fStack_e0;
  pfVar8[5] = fStack_dc;
  fStack_ac = local_9c + 0.0;
  fStack_40 = local_fc;
  fStack_3c = (float)local_f8;
  fStack_38 = local_f4;
  if (1 < *(int *)(param_1 + 0x450) - 3U) {
    do {
      local_100 = 0.0;
      if (*(int *)(param_1 + 0x454) != 0) {
        pfVar11 = pfVar8 + (int)fVar12 * 3;
        do {
          local_e8 = (float)CONCAT22(local_e8._2_2_,in_FPUControlWord);
          lVar1 = (longlong)ROUND(fStack_ac + local_b0);
          local_f0._0_4_ = (float *)lVar1;
          local_f0._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
          fStack_b8 = (float)(int)(float *)local_f0;
          if ((int)(float *)local_f0 < 0) {
            fStack_b8 = fStack_b8 + 4.2949673e+09;
          }
          iVar9 = *(int *)(param_1 + 0x458);
          fStack_b8 = (fStack_ac + local_b0) - fStack_b8;
          pfVar8 = (float *)(iVar9 + ((int)(float *)local_f0 * 3 + 6) * 4);
          iVar4 = (int)(float *)local_f0 * 0xc;
          local_d0 = *pfVar8 - *(float *)(iVar9 + 0xc + iVar4);
          local_cc = pfVar8[1] - *(float *)(iVar9 + 0x10 + iVar4);
          local_c8 = pfVar8[2] - *(float *)(iVar9 + 0x14 + iVar4);
          if (((*(float *)(iVar9 + 0xc + iVar4) == *(float *)(iVar9 + iVar4)) &&
              (*(float *)(iVar9 + iVar4 + 0x10) == *(float *)(iVar9 + 4 + iVar4))) &&
             (*(float *)(iVar9 + iVar4 + 0x14) == *(float *)(iVar9 + 8 + iVar4))) {
            local_fc = *(float *)(iVar9 + iVar4);
            local_f8 = *(float **)(iVar9 + 4 + iVar4);
            local_f4 = *(float *)(iVar9 + 8 + iVar4);
            local_f0 = lVar1;
          }
          else {
            pfVar8 = (float *)(*(int *)(param_1 + 0x458) + iVar4);
            fVar2 = fStack_b8 * fStack_b8;
            fVar12 = fVar2 * fStack_b8;
            local_e8 = (fVar12 * 2.0 - fVar2 * 3.0) + 0.0 + 1.0;
            fStack_b8 = (fVar12 - fVar2 * 2.0) + fStack_b8;
            fStack_94 = fVar2 * 3.0 - fVar12 * 2.0;
            fVar12 = fVar12 - fVar2;
            local_f0 = CONCAT44(local_f0._4_4_,fVar12);
            local_fc = fVar12 * local_d0 +
                       fStack_94 * pfVar8[3] + local_e8 * *pfVar8 + fStack_b8 * local_20;
            local_f8 = (float *)(fVar12 * local_cc +
                                pfVar8[4] * fStack_94 +
                                fStack_b8 * (float)local_1c + pfVar8[1] * local_e8);
            local_f4 = fVar12 * local_c8 +
                       fStack_94 * pfVar8[5] + pfVar8[2] * local_e8 + local_18 * fStack_b8;
          }
          fStack_64 = local_fc - fStack_40;
          pfStack_60 = (float *)((float)local_f8 - fStack_3c);
          fStack_5c = local_f4 - fStack_38;
          pfStack_34 = pfVar11;
          local_20 = fStack_64;
          local_1c = pfStack_60;
          local_18 = fStack_5c;
          local_f0._0_4_ =
               (float *)(fStack_64 * fStack_64 + (float)pfStack_60 * (float)pfStack_60 +
                        fStack_5c * fStack_5c);
          fVar13 = (float10)FUN_00fdef70();
          local_f0._0_4_ = (float *)(float)fVar13;
          if ((float)(float *)local_f0 <= 0.000125) {
            if (((fStack_64 == 0.0) && ((float)pfStack_60 == 0.0)) && (fStack_5c == 0.0)) {
              local_2c = 0.0;
              local_28 = 1.0;
              local_24 = 0.0;
              pfStack_34 = pfVar11;
            }
            else {
              iVar9 = *(int *)(param_1 + 0x458);
              pfVar8 = (float *)FUN_00e9fe70();
              fStack_90 = *pfVar8 - *(float *)(iVar9 + iVar4);
              fStack_8c = pfVar8[1] - *(float *)(iVar9 + 4 + iVar4);
              fStack_88 = pfVar8[2] - *(float *)(iVar9 + 8 + iVar4);
              fVar12 = fStack_8c * fStack_8c + fStack_90 * fStack_90 + fStack_88 * fStack_88;
              local_f0 = CONCAT44(local_f0._4_4_,fVar12);
              if (fVar12 < 0.0 == (fVar12 == 0.0)) {
                FUN_00ddf460(&fStack_90,&fStack_90);
              }
              else {
                FUN_00dd5650(&DAT_0163d0ac);
                fStack_90 = 0.0;
                fStack_8c = 1.0;
                fStack_88 = 0.0;
              }
              fVar12 = local_20 * local_20 + (float)local_1c * (float)local_1c + local_18 * local_18
              ;
              local_f0._0_4_ = (float *)fVar12;
              if (fVar12 < 0.0 != (fVar12 == 0.0)) {
                FUN_00dd5650(&DAT_0163d0ac);
                local_20 = 0.0;
                local_1c = (float *)0x3f800000;
                local_18 = 0.0;
              }
              D3DXVec3Normalize(&local_20,&local_20);
              pfStack_60 = (float *)(local_20 * fStack_94 - local_24 * fStack_90);
              fStack_5c = local_28 * fStack_90 - local_98 * local_20;
              fStack_58 = local_98 * local_24 - local_28 * fStack_94;
              local_f8 = (float *)((float)pfStack_60 * (float)pfStack_60 + fStack_5c * fStack_5c +
                                  fStack_58 * fStack_58);
              pfStack_34 = pfStack_60;
              local_30 = fStack_5c;
              local_2c = fStack_58;
              if ((float)local_f8 < 0.0 != ((float)local_f8 == 0.0)) {
                FUN_00dd5650(&DAT_0163d0ac);
                pfStack_34 = (float *)0x0;
                local_30 = 1.0;
                local_2c = 0.0;
              }
              D3DXVec3Normalize(&pfStack_34,&pfStack_34);
            }
          }
          else {
            local_f0._0_4_ = (float *)(*(int *)(param_1 + 0x458) + iVar4);
            pfVar8 = (float *)FUN_00e9fe70();
            fStack_80 = *pfVar8 - *(float *)local_f0;
            fStack_7c = pfVar8[1] - ((float *)local_f0)[1];
            fStack_78 = pfVar8[2] - ((float *)local_f0)[2];
            fVar12 = fStack_7c * fStack_7c + fStack_80 * fStack_80 + fStack_78 * fStack_78;
            local_f0 = CONCAT44(local_f0._4_4_,fVar12);
            if (fVar12 < 0.0 == (fVar12 == 0.0)) {
              FUN_00ddf460(&fStack_80,&fStack_80);
            }
            else {
              FUN_00dd5650(&DAT_0163d0ac);
              fStack_80 = 0.0;
              fStack_7c = 1.0;
              fStack_78 = 0.0;
            }
            fStack_4c = local_18 * fStack_7c - (float)local_1c * fStack_78;
            fStack_48 = local_20 * fStack_78 - fStack_80 * local_18;
            fStack_44 = fStack_80 * (float)local_1c - local_20 * fStack_7c;
            fVar12 = fStack_4c * fStack_4c + fStack_48 * fStack_48 + fStack_44 * fStack_44;
            local_2c = fStack_4c;
            local_28 = fStack_48;
            local_24 = fStack_44;
            local_f0._0_4_ = (float *)fVar12;
            if (fVar12 < 0.0 != (fVar12 == 0.0)) {
              FUN_00dd5650(&DAT_0163d0ac);
              local_2c = 0.0;
              local_28 = 1.0;
              local_24 = 0.0;
            }
            D3DXVec3Normalize(&local_2c,&local_2c);
            pfStack_34 = pfVar11;
          }
          iVar9 = *(int *)(param_1 + 0x454) * (int)local_b4 + (int)local_100;
          fVar2 = (float)iVar9;
          if (iVar9 < 0) {
            fVar2 = fVar2 + 4.2949673e+09;
          }
          local_100 = (float)((int)local_100 + 1);
          fVar12 = (float)((int)local_98 + 2);
          fVar2 = (1.0 - fVar2 * (float)local_a8) * *(float *)(param_1 + 0x100) +
                  *(float *)(param_1 + 0x104) * fVar2 * (float)local_a8;
          local_f0 = CONCAT44(local_f0._4_4_,fVar2);
          local_2c = fVar2 * local_2c;
          local_28 = fVar2 * local_28;
          local_24 = fVar2 * local_24;
          fStack_40 = local_fc;
          fStack_3c = (float)local_f8;
          fStack_38 = local_f4;
          *pfStack_34 = local_fc + local_2c;
          pfStack_34[1] = (float)local_f8 + local_28;
          pfStack_34[2] = local_f4 + local_24;
          pfVar11 = pfStack_34 + 6;
          fStack_e4 = local_fc - local_2c;
          fStack_e0 = (float)local_f8 - local_28;
          fStack_dc = local_f4 - local_24;
          pfStack_34[3] = fStack_e4;
          pfStack_34[4] = fStack_e0;
          pfStack_34[5] = fStack_dc;
          fStack_ac = local_9c + fStack_ac;
          local_98 = fVar12;
        } while ((uint)local_100 < (uint)*(float *)(param_1 + 0x454));
        pfVar8 = local_d8;
        pfStack_34 = pfVar11;
      }
      local_b4 = (float)((int)local_b4 + 1);
    } while ((uint)local_b4 < *(int *)(param_1 + 0x450) - 3U);
  }
  fVar2 = local_2c * local_2c + local_28 * local_28 + local_24 * local_24;
  _local_d8 = CONCAT44(uStack_d4,fVar2);
  if (fVar2 < 0.0 != (fVar2 == 0.0)) {
    FUN_00dd5650(&DAT_0163d0ac);
    local_2c = 0.0;
    local_28 = 1.0;
    local_24 = 0.0;
  }
  D3DXVec3Normalize(&local_2c,&local_2c);
  fVar2 = *(float *)(param_1 + 0x104);
  local_2c = fVar2 * local_2c;
  local_e8 = (float)CONCAT22(local_e8._2_2_,in_FPUControlWord);
  local_28 = fVar2 * local_28;
  local_24 = fVar2 * local_24;
  lVar1 = (longlong)ROUND(fStack_ac + local_b0);
  local_d8 = (float *)lVar1;
  uStack_d4 = (undefined4)((ulonglong)lVar1 >> 0x20);
  pfVar11 = (float *)(*(int *)(param_1 + 0x458) + (int)local_d8 * 0xc);
  fVar2 = (float)(int)local_d8;
  if ((int)local_d8 < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  fVar2 = (fStack_ac + local_b0) - fVar2;
  fVar7 = fVar2 * fVar2;
  fStack_94 = fVar7 * fVar2;
  fVar6 = (fStack_94 * 2.0 - fVar7 * 3.0) + 0.0 + 1.0;
  local_a8 = CONCAT44(local_a8._4_4_,fVar6);
  fVar2 = (fStack_94 - fVar7 * 2.0) + fVar2;
  _local_d8 = CONCAT44(uStack_d4,fVar2);
  fVar5 = fVar7 * 3.0 - fStack_94 * 2.0;
  local_f0 = CONCAT44(local_f0._4_4_,fVar5);
  fStack_94 = fStack_94 - fVar7;
  local_fc = local_20 * fVar2 + fVar6 * *pfVar11 + fVar5 * pfVar11[3] + fStack_94 * local_20;
  local_f8 = (float *)(pfVar11[4] * fVar5 + pfVar11[1] * fVar6 + (float)local_1c * fVar2 +
                      fStack_94 * (float)local_1c);
  local_f4 = fStack_94 * local_18 + fVar5 * pfVar11[5] + pfVar11[2] * fVar6 + local_18 * fVar2;
  pfVar8 = pfVar8 + (int)fVar12 * 3;
  *pfVar8 = local_fc + local_2c;
  pfVar8[1] = (float)local_f8 + local_28;
  pfVar8[2] = local_f4 + local_24;
  fStack_e4 = local_fc - local_2c;
  fStack_e0 = (float)local_f8 - local_28;
  fStack_dc = local_f4 - local_24;
  pfVar8[3] = fStack_e4;
  pfVar8[4] = fStack_e0;
  pfVar8[5] = fStack_dc;
  FUN_00f99d30();
LAB_00ef5955:
  __security_check_cookie(local_14 ^ (uint)auStack_104);
  return;
}

// 00EF5970  FUN_00ef5970  size=65  [run]
undefined4 __fastcall FUN_00ef5970(int param_1)

{
  if (*(char *)(param_1 + 0x4d8) != '\0') {
    if (*(int *)(param_1 + 0x84) != 0) {
      if (*(int *)(*(int *)(param_1 + 0x84) + 0x24) != 4) {
        FUN_009cca90(param_1,&DAT_016dcb30);
        return 0;
      }
      return 1;
    }
    FUN_009cca90(param_1,&DAT_016dcad8);
  }
  return 0;
}

// 00EF59C0  FUN_00ef59c0  size=61  [run]
undefined4 __fastcall FUN_00ef59c0(int param_1)

{
  if ((*(int *)(param_1 + 0x84) != 0) && (*(int *)(*(int *)(param_1 + 0x84) + 0x24) == 4)) {
    FUN_00ea9f40(param_1 + 0x4f0);
    FUN_00ea9f80(param_1 + 400);
    return 1;
  }
  return 0;
}

