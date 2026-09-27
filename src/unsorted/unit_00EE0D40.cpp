// src/unsorted/unit_00EE0D40.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EE0D40..00EE0D40, 1 functions

#include "mgrr.h"

// 00EE0D40  FUN_00ee0d40  size=4819  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00ee0d40(int param_1,float *param_2,int param_3,float *param_4,float param_5)

{
  float *pfVar1;
  float *pfVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined2 in_FPUControlWord;
  float10 fVar13;
  uint local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_e4;
  float local_e0;
  float fStack_dc;
  float local_d8;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  undefined8 local_b0;
  float local_a8;
  float local_a0;
  float local_9c;
  float local_98;
  float local_90;
  float local_8c;
  float local_88;
  undefined4 local_84;
  float local_74;
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
  float local_30;
  float local_2c;
  float local_28;
  float local_1c;
  float local_18;
  float local_14;
  
  local_c0 = *(float *)(param_3 + 0x110) - *(float *)(param_3 + 0x100);
  local_bc = *(float *)(param_3 + 0x114) - *(float *)(param_3 + 0x104);
  local_b8 = *(float *)(param_3 + 0x118) - *(float *)(param_3 + 0x108);
  local_b4 = *(float *)(param_3 + 0x11c) - *(float *)(param_3 + 0x10c);
  fVar4 = local_bc * local_bc + local_c0 * local_c0 + local_b8 * local_b8;
  if (fVar4 < 0.0 == (fVar4 == 0.0)) {
    FUN_00ddf460(&local_c0,&local_c0);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    local_c0 = 0.0;
    local_bc = 1.0;
    local_b8 = 0.0;
  }
  if (*(int *)(param_1 + 0x484) != 0) {
    if ((_DAT_01ee1230 & 1) == 0) {
      _DAT_01ee1230 = _DAT_01ee1230 | 1;
      _DAT_01ee1220 = 0.2;
      _DAT_01ee1224 = 0.5;
      _DAT_01ee1228 = 0.0;
      _DAT_01ee122c = 0.0;
    }
    local_c0 = local_c0 + _DAT_01ee1220;
    local_bc = local_bc + _DAT_01ee1224;
    local_b8 = local_b8 + _DAT_01ee1228;
    local_b4 = local_b4 + _DAT_01ee122c;
    fVar4 = local_bc * local_bc + local_c0 * local_c0 + local_b8 * local_b8;
    if (fVar4 < 0.0 == (fVar4 == 0.0)) {
      FUN_00ddf460(&local_c0,&local_c0);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_c0 = 0.0;
      local_bc = 1.0;
      local_b8 = 0.0;
    }
  }
  local_100 = 0.0;
  local_fc = 0.0;
  local_f8 = 0.0;
  local_64 = *(float *)(param_1 + 0x460);
  if (local_64 != 0.0) {
    local_e4 = (float)CONCAT22(local_e4._2_2_,in_FPUControlWord);
    local_e0 = (float)(longlong)ROUND(local_64);
    fVar4 = (float)(int)local_e0;
    if ((int)local_e0 < 0) {
      fVar4 = fVar4 + 4.2949673e+09;
    }
    local_64 = 1.0 - (local_64 - fVar4);
  }
  uVar12 = *(uint *)(param_1 + 0x454);
  iVar9 = (*(int *)(param_1 + 0x450) + -4) * uVar12 + 1;
  local_6c = (float)iVar9;
  if (iVar9 < 0) {
    local_6c = local_6c + 4.2949673e+09;
  }
  local_6c = 1.0 / local_6c;
  local_5c = 1.0;
  if (1 < uVar12) {
    local_5c = (float)(int)uVar12;
    if ((int)uVar12 < 0) {
      local_5c = local_5c + 4.2949673e+09;
    }
    local_5c = 1.0 / local_5c;
  }
  if (param_2 != (float *)0x0) {
    local_90 = param_2[3] - *param_2;
    local_8c = param_2[4] - param_2[1];
    local_d8 = param_2[5] - param_2[2];
    local_84 = 0x3f800000;
    local_70 = local_8c * local_8c + local_90 * local_90 + local_d8 * local_d8;
    local_88 = local_d8;
    local_e0 = local_90;
    fStack_dc = local_8c;
    fVar13 = (float10)FUN_00fdef70();
    if ((float)fVar13 <= 0.000125) {
      if (((local_e0 != 0.0) || (fStack_dc != 0.0)) || (local_d8 != 0.0)) {
        if (local_70 <= 0.0) {
          FUN_00dd5650(&DAT_0163d0ac);
          local_90 = 0.0;
          local_8c = 1.0;
          local_88 = 0.0;
        }
        else {
          FUN_00ddf460(&local_90,&local_90);
        }
        local_100 = local_88 * local_bc - local_8c * local_b8;
        local_fc = local_90 * local_b8 - local_c0 * local_88;
        local_f8 = local_c0 * local_8c - local_90 * local_bc;
        fVar4 = local_100 * local_100 + local_fc * local_fc + local_f8 * local_f8;
        local_d8 = local_f8;
        fStack_dc = local_fc;
        if (fVar4 < 0.0 == (fVar4 == 0.0)) {
          local_e0 = local_100;
          if (fVar4 < 0.0 == (fVar4 == 0.0)) {
            FUN_00ddf460(&local_100,&local_100);
          }
          else {
            FUN_00dd5650(&DAT_0163d0ac);
            local_100 = 0.0;
            local_fc = 1.0;
            local_f8 = 0.0;
          }
        }
      }
    }
    else {
      local_100 = local_d8 * local_bc - fStack_dc * local_b8;
      local_fc = local_e0 * local_b8 - local_c0 * local_d8;
      local_b0 = CONCAT44(local_fc,local_100);
      local_f8 = local_c0 * fStack_dc - local_e0 * local_bc;
      fVar4 = local_100 * local_100 + local_fc * local_fc + local_f8 * local_f8;
      local_a8 = local_f8;
      if (fVar4 < 0.0 == (fVar4 == 0.0)) {
        if (fVar4 < 0.0 == (fVar4 == 0.0)) {
          FUN_00ddf460(&local_100,&local_100);
        }
        else {
          FUN_00dd5650(&DAT_0163d0ac);
          local_100 = 0.0;
          local_fc = 1.0;
          local_f8 = 0.0;
        }
      }
    }
    fVar4 = *(float *)(param_1 + 0x100);
    iVar9 = 2;
    local_70 = 1.4013e-45;
    local_100 = fVar4 * local_100;
    fVar5 = local_fc * fVar4;
    fVar6 = local_f8 * fVar4;
    local_f4 = fVar4 * local_f4;
    local_d0 = *param_2;
    local_cc = param_2[1];
    local_c8 = param_2[2];
    *param_4 = local_d0 + local_100;
    param_4[1] = fVar5 + local_cc;
    param_4[2] = fVar6 + local_c8;
    local_a0 = local_d0 - local_100;
    local_9c = local_cc - fVar5;
    local_98 = local_c8 - fVar6;
    param_4[3] = local_a0;
    param_4[4] = local_9c;
    param_4[5] = local_98;
    local_e0 = (float)(*(int *)(param_1 + 0x450) - 3);
    local_68 = local_5c + 0.0;
    local_fc = fVar5;
    local_f8 = fVar6;
    local_30 = local_d0;
    local_2c = local_cc;
    local_28 = local_c8;
    if (1 < (uint)local_e0) {
      do {
        local_104 = 0;
        if (*(int *)(param_1 + 0x454) != 0) {
          pfVar8 = param_4 + iVar9 * 3;
          do {
            local_b0 = (longlong)ROUND(local_68 + local_64);
            local_74 = (float)(int)(float)local_b0;
            if ((int)(float)local_b0 < 0) {
              local_74 = local_74 + 4.2949673e+09;
            }
            local_74 = (local_68 + local_64) - local_74;
            pfVar1 = param_2 + (int)(float)local_b0 * 3 + 6;
            pfVar2 = param_2 + (int)(float)local_b0 * 3;
            local_1c = *pfVar1 - pfVar2[3];
            local_18 = pfVar1[1] - pfVar2[4];
            local_14 = pfVar1[2] - pfVar2[5];
            if (((pfVar2[3] == *pfVar2) && (pfVar2[4] == pfVar2[1])) && (pfVar2[5] == pfVar2[2])) {
              local_d0 = *pfVar2;
              local_cc = pfVar2[1];
              local_c8 = pfVar2[2];
            }
            else {
              fVar7 = local_74 * local_74;
              fVar4 = fVar7 * local_74;
              fVar6 = fVar7 * 3.0;
              fVar5 = (fVar4 * 2.0 - fVar6) + 0.0 + 1.0;
              local_74 = (fVar4 - fVar7 * 2.0) + local_74;
              local_60 = fVar6 - fVar4 * 2.0;
              fVar4 = fVar4 - fVar7;
              local_b0._4_4_ = (undefined4)((ulonglong)(double)fVar6 >> 0x20);
              local_b0 = CONCAT44(local_b0._4_4_,fVar4);
              local_d0 = fVar4 * local_1c +
                         local_60 * pfVar2[3] + local_74 * local_90 + fVar5 * *pfVar2;
              local_cc = fVar4 * local_18 +
                         local_60 * pfVar2[4] + local_74 * local_8c + pfVar2[1] * fVar5;
              local_c8 = pfVar2[2] * fVar5 + local_88 * local_74 + pfVar2[5] * local_60 +
                         local_14 * fVar4;
            }
            local_90 = local_d0 - local_30;
            local_8c = local_cc - local_2c;
            local_88 = local_c8 - local_28;
            local_84 = 0;
            local_e4 = local_8c * local_8c + local_90 * local_90 + local_88 * local_88;
            local_40 = local_90;
            local_3c = local_8c;
            local_38 = local_88;
            fVar13 = (float10)FUN_00fdef70();
            fVar4 = (float)fVar13;
            if (fVar4 <= 0.000125) {
              if (0.000125 < fVar4) {
                local_b0._0_4_ = fVar4;
                if (local_e4 <= 0.0) {
                  FUN_00dd5650(&DAT_0163d0ac);
                  local_90 = 0.0;
                  local_8c = 1.0;
                  local_88 = 0.0;
                }
                else {
                  FUN_00ddf460(&local_90,&local_90);
                }
                local_100 = local_88 * local_bc - local_8c * local_b8;
                local_fc = local_90 * local_b8 - local_c0 * local_88;
                local_f8 = local_c0 * local_8c - local_90 * local_bc;
                local_b0._0_4_ = local_100 * local_100 + local_fc * local_fc + local_f8 * local_f8;
                local_58 = local_100;
                local_54 = local_fc;
                local_50 = local_f8;
                if ((float)local_b0 < 0.0 == ((float)local_b0 == 0.0)) {
                  if ((float)local_b0 < 0.0 == ((float)local_b0 == 0.0)) {
                    FUN_00ddf460(&local_100,&local_100);
                  }
                  else {
                    FUN_00dd5650(&DAT_0163d0ac);
                    local_100 = 0.0;
                    local_fc = 1.0;
                    local_f8 = 0.0;
                  }
                }
              }
            }
            else {
              local_100 = local_38 * local_bc - local_3c * local_b8;
              local_fc = local_40 * local_b8 - local_c0 * local_38;
              local_f8 = local_c0 * local_3c - local_40 * local_bc;
              local_b0._0_4_ = local_100 * local_100 + local_fc * local_fc + local_f8 * local_f8;
              local_4c = local_100;
              local_48 = local_fc;
              local_44 = local_f8;
              if ((float)local_b0 < 0.0 == ((float)local_b0 == 0.0)) {
                if ((float)local_b0 < 0.0 == ((float)local_b0 == 0.0)) {
                  FUN_00ddf460(&local_100,&local_100);
                }
                else {
                  FUN_00dd5650(&DAT_0163d0ac);
                  local_100 = 0.0;
                  local_fc = 1.0;
                  local_f8 = 0.0;
                }
              }
            }
            iVar10 = *(int *)(param_1 + 0x454) * (int)local_70 + local_104;
            fVar4 = (float)iVar10;
            if (iVar10 < 0) {
              fVar4 = fVar4 + 4.2949673e+09;
            }
            local_104 = local_104 + 1;
            iVar9 = iVar9 + 2;
            fVar4 = (1.0 - fVar4 * local_6c) * *(float *)(param_1 + 0x100) +
                    *(float *)(param_1 + 0x104) * fVar4 * local_6c;
            local_b0 = CONCAT44(local_b0._4_4_,fVar4);
            local_100 = fVar4 * local_100;
            fVar5 = local_fc * fVar4;
            fVar6 = local_f8 * fVar4;
            local_f4 = fVar4 * local_f4;
            local_30 = local_d0;
            local_2c = local_cc;
            local_28 = local_c8;
            *pfVar8 = local_d0 + local_100;
            pfVar8[1] = fVar5 + local_cc;
            pfVar8[2] = fVar6 + local_c8;
            local_a0 = local_d0 - local_100;
            local_9c = local_cc - fVar5;
            local_98 = local_c8 - fVar6;
            pfVar8[3] = local_a0;
            pfVar8[4] = local_9c;
            pfVar8[5] = local_98;
            local_68 = local_5c + local_68;
            pfVar8 = pfVar8 + 6;
            local_fc = fVar5;
            local_f8 = fVar6;
          } while (local_104 < *(uint *)(param_1 + 0x454));
        }
        local_70 = (float)((int)local_70 + 1);
      } while ((uint)local_70 < (uint)local_e0);
    }
    fVar4 = local_100 * local_100;
    fVar13 = (float10)FUN_00fdef70();
    _local_e0 = CONCAT44(fStack_dc,(float)fVar13);
    if (0.000125 < (float)fVar13) {
      if (fVar6 * fVar6 + fVar4 + fVar5 * fVar5 <= 0.0) {
        FUN_00dd5650(&DAT_0163d0ac);
        local_100 = 0.0;
        local_fc = 1.0;
        local_f8 = 0.0;
      }
      else {
        FUN_00ddf460(&local_100,&local_100);
      }
      fVar4 = *(float *)(param_1 + 0x104);
      local_100 = fVar4 * local_100;
      local_fc = fVar4 * local_fc;
      local_f8 = fVar4 * local_f8;
      local_f4 = fVar4 * local_f4;
    }
    local_e4 = (float)CONCAT22(local_e4._2_2_,in_FPUControlWord);
    lVar3 = (longlong)ROUND(local_68 + local_64);
    local_e0 = (float)lVar3;
    fStack_dc = (float)((ulonglong)lVar3 >> 0x20);
    fVar4 = (float)(int)local_e0;
    if ((int)local_e0 < 0) {
      fVar4 = fVar4 + 4.2949673e+09;
    }
    fVar4 = (local_68 + local_64) - fVar4;
    param_2 = param_2 + (int)local_e0 * 3;
    if (((param_2[3] == *param_2) && (param_2[4] == param_2[1])) && (param_2[5] == param_2[2])) {
      local_d0 = *param_2;
      local_cc = param_2[1];
      local_c8 = param_2[2];
      fVar5 = fVar4;
    }
    else {
      fVar6 = fVar4 * fVar4;
      local_60 = fVar6 * fVar4;
      fVar5 = (local_60 * 2.0 - fVar6 * 3.0) + 0.0 + 1.0;
      local_6c = (local_60 - fVar6 * 2.0) + fVar4;
      fVar4 = fVar6 * 3.0 - local_60 * 2.0;
      local_b0 = CONCAT44(local_b0._4_4_,fVar4);
      local_60 = local_60 - fVar6;
      local_d0 = fVar4 * param_2[3] + fVar5 * *param_2 + local_90 * local_6c + local_60 * local_90;
      local_cc = param_2[4] * fVar4 + param_2[1] * fVar5 + local_8c * local_6c + local_60 * local_8c
      ;
      local_c8 = param_2[2] * fVar5 + local_88 * local_6c + param_2[5] * fVar4 + local_60 * local_88
      ;
    }
    _local_e0 = CONCAT44(fStack_dc,fVar5);
    fVar4 = 0.0;
    pfVar8 = param_4 + iVar9 * 3;
    *pfVar8 = local_d0 + local_100;
    pfVar8[1] = local_fc + local_cc;
    pfVar8[2] = local_f8 + local_c8;
    pfVar8 = param_4 + iVar9 * 3 + 3;
    local_a0 = local_d0 - local_100;
    uVar12 = iVar9 + 2;
    local_9c = local_cc - local_fc;
    local_98 = local_c8 - local_f8;
    *pfVar8 = local_a0;
    pfVar8[1] = local_9c;
    pfVar8[2] = local_98;
    if (param_5 != 0.0) {
      local_d0 = *(float *)(param_3 + 0x100) - *(float *)(param_1 + 400);
      local_cc = *(float *)(param_3 + 0x104) - *(float *)(param_1 + 0x194);
      local_c8 = *(float *)(param_3 + 0x108) - *(float *)(param_1 + 0x198);
      local_c4 = *(float *)(param_3 + 0x10c) - *(float *)(param_1 + 0x19c);
      if (((local_d0 == 0.0) && (local_cc == 0.0)) && (local_c8 == 0.0)) {
        local_d0 = 0.0;
        local_cc = 0.0;
      }
      else {
        FUN_00ddf460(&local_d0,&local_d0);
        local_d0 = param_5 * local_d0;
        local_cc = local_cc * param_5;
        fVar4 = param_5 * local_c8;
      }
      uVar11 = 0;
      if (3 < (int)uVar12) {
        iVar9 = (iVar9 - 2U >> 2) + 1;
        uVar11 = iVar9 * 4;
        pfVar8 = param_4 + 5;
        do {
          iVar9 = iVar9 + -1;
          pfVar8[-5] = local_d0 + pfVar8[-5];
          pfVar8[-4] = local_cc + pfVar8[-4];
          pfVar8[-3] = pfVar8[-3] + fVar4;
          pfVar8[-2] = pfVar8[-2] + local_d0;
          pfVar8[-1] = pfVar8[-1] + local_cc;
          *pfVar8 = *pfVar8 + fVar4;
          pfVar8[1] = local_d0 + pfVar8[1];
          pfVar8[2] = local_cc + pfVar8[2];
          pfVar8[3] = pfVar8[3] + fVar4;
          pfVar8[4] = pfVar8[4] + local_d0;
          pfVar8[5] = pfVar8[5] + local_cc;
          pfVar8[6] = pfVar8[6] + fVar4;
          pfVar8 = pfVar8 + 0xc;
        } while (iVar9 != 0);
      }
      if (uVar11 < uVar12) {
        iVar9 = uVar12 - uVar11;
        pfVar8 = param_4 + uVar11 * 3 + 2;
        do {
          iVar9 = iVar9 + -1;
          pfVar8[-2] = pfVar8[-2] + local_d0;
          pfVar8[-1] = pfVar8[-1] + local_cc;
          *pfVar8 = *pfVar8 + fVar4;
          pfVar8 = pfVar8 + 3;
        } while (iVar9 != 0);
      }
    }
  }
  return;
}

