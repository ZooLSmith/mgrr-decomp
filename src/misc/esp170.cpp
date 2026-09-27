// src/misc/esp170.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009D1450..00F2FF00, 5 functions

#include "types.h"

// 009D1450  esp170::vf04  size=61  [class]
undefined4 __thiscall
esp170::vf04(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = esp13::vf04(param_2,param_3,param_4);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined2 *)(param_1 + 0x428) = 0x80;
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x1000000;
  return 1;
}

// 009E0180  esp170::esp170  size=18  [class]
undefined4 * __fastcall esp170::esp170(undefined4 *param_1)

{
  esp13::esp13();
  *param_1 = vftable;
  return param_1;
}

// 009E01B0  esp170::vf00  size=36  [class]
undefined4 * __thiscall esp170::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  cEspBase::cEspBase_5();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00F23340  esp170::vf08  size=64  [class]
void __fastcall esp170::vf08(int param_1)

{
  undefined4 uVar1;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar1 = FUN_00e9fef0();
  local_8 = FUN_00e9feb0();
  local_10 = param_1 + 0x3a0;
  local_4 = uVar1;
  local_c = FUN_00e9fe70();
  FUN_00f16b60(&local_10);
  return;
}

// 00F2FF00  esp170::vf10  size=5443  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall esp170::vf10(int param_1)

{
  float fVar1;
  char cVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  float10 fVar6;
  undefined1 auStack_168 [4];
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_100;
  float local_fc;
  float local_f8;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  undefined4 local_80;
  float local_7c;
  float local_78;
  undefined4 local_74;
  float local_70;
  float local_6c;
  undefined4 local_68;
  float local_64;
  float local_60;
  undefined4 local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_168;
  FUN_00efed20();
  if (0.01 < *(float *)(param_1 + 0x124)) {
    FUN_00edfcd0(param_1 + 0x3c8);
    FUN_00f20370(&local_110,param_1 + 0x3c8,*(undefined4 *)(param_1 + 0x28));
    if (0.01 < *(float *)(param_1 + 0x124)) {
      if ((*(byte *)(param_1 + 0x468) & 1) == 0) {
        local_160 = 1.0;
        local_15c = 1.0;
      }
      else {
        local_160 = *(float *)(param_1 + 0x450);
        local_15c = *(float *)(param_1 + 0x454);
      }
      iVar4 = *(int *)(param_1 + 0x4b0);
      if ((iVar4 != 0) || (*(int *)(param_1 + 0x4b4) != 0)) {
        local_150 = local_10c * local_10c + local_110 * local_110 + local_108 * local_108;
        fVar6 = (float10)FUN_00fdef70();
        local_130 = (float)fVar6;
        local_150 = local_fc * local_fc + local_100 * local_100 + local_f8 * local_f8;
        fVar6 = (float10)FUN_00fdef70();
        local_12c = (float)fVar6;
        if (iVar4 != 0) {
          local_160 = local_160 * local_130;
        }
        if (*(int *)(param_1 + 0x4b4) != 0) {
          local_15c = local_15c * local_12c;
        }
      }
      local_118 = *(float *)(param_1 + 0x460);
      local_114 = *(float *)(param_1 + 0x464);
      local_150 = local_118 + local_160;
      local_11c = local_114 + local_15c;
      local_160 = *(float *)(param_1 + 0x250);
      local_15c = *(float *)(param_1 + 0x254);
      local_158 = *(float *)(param_1 + 600);
      local_14c = *(float *)(param_1 + 0x25c) * *(float *)(param_1 + 0x124);
      if (((*(byte *)(param_1 + 0x33) & 1) == 0) && ((DAT_01bea070._3_1_ & 1) == 0)) {
        local_160 = _DAT_018d5df0 * local_160;
        local_15c = _DAT_018d5df0 * local_15c;
        local_158 = _DAT_018d5df0 * local_158;
      }
      iVar4 = *(int *)(param_1 + 0x84);
      if ((iVar4 != 0) && ((*(byte *)(iVar4 + 0x68) & 8) != 0)) {
        local_160 = *(float *)(iVar4 + 0x30) * local_160;
        local_15c = *(float *)(iVar4 + 0x34) * local_15c;
        local_158 = *(float *)(iVar4 + 0x38) * local_158;
        local_14c = *(float *)(iVar4 + 0x3c) * local_14c;
      }
      cVar2 = *(char *)(param_1 + 0x440);
      if ((((cVar2 == '\x06') || (cVar2 == '\n')) || (cVar2 == '\f')) || (cVar2 == '\x0f')) {
        local_160 = local_14c * local_160;
        local_15c = local_14c * local_15c;
        local_158 = local_14c * local_158;
        if (cVar2 == '\x0f') {
          local_14c = 1.0;
        }
        else {
          iVar4 = FUN_009d4a40();
          local_14c = *(float *)(iVar4 + 0x28) * 0.5 * local_14c;
        }
      }
      local_58 = local_160;
      local_54 = local_15c;
      local_50 = local_158;
      local_4c = local_14c;
      local_3c = local_14c;
      local_2c = local_14c;
      local_1c = local_14c;
      local_48 = local_160;
      local_38 = local_160;
      local_28 = local_160;
      local_44 = local_15c;
      local_34 = local_15c;
      local_24 = local_15c;
      local_40 = local_158;
      local_30 = local_158;
      local_20 = local_158;
      local_88 = -1.0;
      local_84 = 0.0;
      local_80 = 0;
      local_7c = 0.0;
      local_78 = 0.0;
      local_74 = 0;
      local_68 = 0;
      local_64 = 0.0;
      local_5c = 0;
      local_70 = -1.0;
      local_6c = -1.0;
      local_60 = -1.0;
      local_c0 = local_150;
      local_b4 = local_11c;
      local_ac = local_11c;
      local_b0 = local_150;
      local_a8 = 0.0;
      local_a4 = 0.0;
      local_9c = 0.0;
      local_98 = 0.0;
      local_a0 = 1.0;
      local_94 = 1.0;
      local_90 = 1.0;
      local_8c = 1.0;
      fVar1 = *(float *)(param_1 + 0x474);
      local_164 = fVar1;
      local_c8 = local_118;
      local_c4 = local_114;
      local_bc = local_114;
      local_b8 = local_118;
      if (fVar1 != 0.0) {
        local_13c = fVar1 - 0.0;
        if (0.0 < local_13c) {
          local_164 = local_13c;
          if (1.0 < local_13c) {
            local_164 = 1.0;
          }
        }
        else {
          local_164 = 0.0;
        }
        local_138 = 1.0 - local_118;
        local_c8 = (local_114 - local_118) * local_164 + local_118;
        local_c4 = (local_138 - local_114) * local_164 + local_114;
        local_134 = fVar1 - 1.0;
        if (0.0 < local_134) {
          local_164 = local_134;
          if (1.0 < local_134) {
            local_164 = 1.0;
          }
        }
        else {
          local_164 = 0.0;
        }
        fVar3 = 1.0 - local_114;
        local_c8 = (local_138 - local_c8) * local_164 + local_c8;
        local_c4 = (fVar3 - local_c4) * local_164 + local_c4;
        local_144 = fVar1 - 2.0;
        if (0.0 < local_144) {
          local_164 = local_144;
          if (1.0 < local_144) {
            local_164 = 1.0;
          }
        }
        else {
          local_164 = 0.0;
        }
        local_c8 = (fVar3 - local_c8) * local_164 + local_c8;
        local_c4 = (local_118 - local_c4) * local_164 + local_c4;
        local_140 = fVar1 - 3.0;
        if (0.0 < local_140) {
          local_164 = local_140;
          if (1.0 < local_140) {
            local_164 = 1.0;
          }
        }
        else {
          local_164 = 0.0;
        }
        local_c8 = local_c8 + local_164 * (local_118 - local_c8);
        local_c4 = local_c4 + local_164 * (local_114 - local_c4);
        if (0.0 < local_13c) {
          local_164 = local_13c;
          if (1.0 < local_13c) {
            local_164 = 1.0;
          }
        }
        else {
          local_164 = 0.0;
        }
        local_14c = 1.0 - local_150;
        local_c0 = (local_114 - local_150) * local_164 + local_150;
        local_bc = (local_14c - local_114) * local_164 + local_114;
        if (0.0 < local_134) {
          local_164 = local_134;
          if (1.0 < local_134) {
            local_164 = 1.0;
          }
        }
        else {
          local_164 = 0.0;
        }
        local_c0 = (local_14c - local_c0) * local_164 + local_c0;
        local_bc = (fVar3 - local_bc) * local_164 + local_bc;
        if (0.0 < local_144) {
          local_164 = local_144;
          if (1.0 < local_144) {
            local_164 = 1.0;
          }
        }
        else {
          local_164 = 0.0;
        }
        local_c0 = (fVar3 - local_c0) * local_164 + local_c0;
        local_bc = (local_150 - local_bc) * local_164 + local_bc;
        if (0.0 < local_140) {
          local_164 = local_140;
          if (1.0 < local_140) {
            local_164 = 1.0;
          }
        }
        else {
          local_164 = 0.0;
        }
        local_c0 = (local_150 - local_c0) * local_164 + local_c0;
        local_bc = (local_114 - local_bc) * local_164 + local_bc;
        if (0.0 < local_13c) {
          local_164 = local_13c;
          if (1.0 < local_13c) {
            local_164 = 1.0;
          }
        }
        else {
          local_164 = 0.0;
        }
        local_b8 = (local_11c - local_118) * local_164 + local_118;
        local_b4 = (local_138 - local_11c) * local_164 + local_11c;
        if (0.0 < local_134) {
          local_164 = local_134;
          if (1.0 < local_134) {
            local_164 = 1.0;
          }
        }
        else {
          local_164 = 0.0;
        }
        local_148 = 1.0 - local_11c;
        local_b8 = (local_138 - local_b8) * local_164 + local_b8;
        local_b4 = (local_148 - local_b4) * local_164 + local_b4;
        if (0.0 < local_144) {
          local_164 = local_144;
          if (1.0 < local_144) {
            local_164 = 1.0;
          }
        }
        else {
          local_164 = 0.0;
        }
        local_b8 = (local_148 - local_b8) * local_164 + local_b8;
        local_b4 = (local_118 - local_b4) * local_164 + local_b4;
        if (0.0 < local_140) {
          local_164 = local_140;
          if (1.0 < local_140) {
            local_164 = 1.0;
          }
        }
        else {
          local_164 = 0.0;
        }
        local_b8 = (local_118 - local_b8) * local_164 + local_b8;
        local_b4 = (local_11c - local_b4) * local_164 + local_b4;
        if (0.0 < local_13c) {
          local_164 = local_13c;
          if (1.0 < local_13c) {
            local_164 = 1.0;
          }
        }
        else {
          local_164 = 0.0;
        }
        local_160 = (local_11c - local_150) * local_164 + local_150;
        local_15c = (local_14c - local_11c) * local_164 + local_11c;
        if (0.0 < local_134) {
          local_164 = local_134;
          if (1.0 < local_134) {
            local_164 = 1.0;
          }
        }
        else {
          local_164 = 0.0;
        }
        local_160 = (local_14c - local_160) * local_164 + local_160;
        local_15c = (local_148 - local_15c) * local_164 + local_15c;
        if (0.0 < local_144) {
          local_164 = local_144;
          if (1.0 < local_144) {
            local_164 = 1.0;
          }
        }
        else {
          local_164 = 0.0;
        }
        local_160 = (local_148 - local_160) * local_164 + local_160;
        local_15c = (local_150 - local_15c) * local_164 + local_15c;
        if (0.0 < local_140) {
          local_164 = local_140;
          if (1.0 < local_140) {
            local_164 = 1.0;
          }
        }
        else {
          local_164 = 0.0;
        }
        local_160 = local_160 + local_164 * (local_150 - local_160);
        local_15c = local_15c + local_164 * (local_11c - local_15c);
        local_130 = local_148;
        local_12c = local_148;
        local_b0 = local_160;
        local_ac = local_15c;
      }
      if (*(float *)(param_1 + 0x484) == 0.0) {
        FUN_00f280b0(&local_88,&local_c8,&local_a8,&local_58,&local_110);
        __security_check_cookie(local_14 ^ (uint)auStack_168);
        return;
      }
      local_14c = *(float *)(param_1 + 0x484) * 0.5;
      local_13c = local_14c - 1.0;
      local_140 = -local_14c;
      local_80 = 0;
      local_74 = 0;
      local_68 = 0;
      local_5c = 0;
      local_148 = (local_150 - local_118) * local_14c;
      local_138 = (local_11c - local_114) * local_14c;
      local_134 = local_148 + local_118;
      local_164 = local_138 + local_114;
      local_148 = local_150 - local_148;
      local_138 = local_11c - local_138;
      local_144 = 1.0 - local_14c;
      local_c8 = local_134;
      local_c4 = local_164;
      local_c0 = local_148;
      local_bc = local_164;
      local_b8 = local_134;
      local_b4 = local_138;
      local_b0 = local_148;
      local_ac = local_138;
      local_a8 = local_14c;
      local_a4 = local_14c;
      local_a0 = local_144;
      local_9c = local_14c;
      local_98 = local_14c;
      local_94 = local_144;
      local_90 = local_144;
      local_8c = local_144;
      local_88 = local_13c;
      local_84 = local_140;
      local_7c = local_140;
      local_78 = local_140;
      local_70 = local_13c;
      local_6c = local_13c;
      local_64 = local_140;
      local_60 = local_13c;
      iVar4 = FUN_00f280b0(&local_88,&local_c8,&local_a8,&local_58,&local_110);
      if (iVar4 != 0) {
        uVar5 = 0;
        do {
          local_160 = *(float *)(param_1 + 0x25c) * *(float *)(param_1 + 0x124);
          local_3c = local_160;
          local_1c = local_160;
          if (uVar5 == 0) {
            local_88 = -1.0;
            local_84 = local_140;
            local_80 = 0;
            local_7c = local_13c;
            local_6c = local_13c;
            local_64 = local_13c;
            local_60 = local_13c;
            local_78 = local_140;
            local_74 = 0;
            local_68 = 0;
            local_5c = 0;
            local_70 = -1.0;
            local_c8 = local_118;
            local_c4 = local_164;
            local_c0 = local_134;
            local_bc = local_164;
            local_b8 = local_118;
            local_b4 = local_138;
            local_ac = local_138;
            local_b0 = local_134;
            local_a8 = 0.0;
            local_a4 = local_14c;
            local_a0 = local_14c;
            local_9c = local_14c;
            local_98 = 0.0;
            local_94 = local_144;
            local_8c = local_144;
            local_90 = local_14c;
            local_4c = 0.0;
            local_2c = 0.0;
            goto LAB_00f313f5;
          }
          local_4c = local_160;
          if (uVar5 == 1) {
            local_88 = local_13c;
            local_84 = local_13c;
            local_7c = local_140;
            local_78 = local_13c;
            local_70 = local_13c;
            local_6c = -1.0;
            local_60 = -1.0;
            local_64 = local_140;
            local_c8 = local_134;
            local_c4 = local_138;
            local_c0 = local_148;
            local_bc = local_138;
            local_b8 = local_134;
            local_b4 = local_11c;
            local_ac = local_11c;
            local_b0 = local_148;
            local_a8 = local_14c;
            local_a4 = local_144;
            local_a0 = local_144;
            local_9c = local_144;
            local_98 = local_14c;
            local_94 = 1.0;
            local_8c = 1.0;
            local_90 = local_144;
            local_2c = 0.0;
LAB_00f313ee:
            local_5c = 0;
            local_68 = 0;
            local_74 = 0;
            local_80 = 0;
            local_1c = 0.0;
          }
          else {
            local_2c = local_160;
            if (uVar5 == 2) {
              local_78 = local_140;
              local_60 = local_13c;
              local_bc = local_164;
              local_ac = local_138;
              local_9c = local_14c;
              local_8c = local_144;
LAB_00f313e7:
              local_64 = 0.0;
              local_7c = 0.0;
              local_88 = local_140;
              local_90 = 1.0;
              local_a0 = 1.0;
              local_a8 = local_144;
              local_c0 = local_150;
              local_c8 = local_148;
              local_3c = 0.0;
              local_c4 = local_bc;
              local_b8 = local_c8;
              local_b4 = local_ac;
              local_b0 = local_c0;
              local_a4 = local_9c;
              local_98 = local_a8;
              local_94 = local_8c;
              local_84 = local_78;
              local_70 = local_88;
              local_6c = local_60;
              goto LAB_00f313ee;
            }
            if (uVar5 != 3) {
              if (uVar5 == 4) {
                local_7c = -1.0;
                local_78 = 0.0;
                local_64 = local_13c;
                local_60 = 0.0;
                local_88 = -1.0;
                local_84 = local_140;
                local_6c = local_140;
                local_70 = local_13c;
                local_c0 = local_118;
                local_bc = local_114;
                local_b0 = local_134;
                local_ac = local_114;
                local_c8 = local_118;
                local_c4 = local_164;
                local_b4 = local_164;
                local_b8 = local_134;
                local_a0 = 0.0;
                local_9c = 0.0;
                local_90 = local_14c;
                local_a4 = local_14c;
                local_98 = local_14c;
                local_94 = local_14c;
                local_8c = 0.0;
                local_a8 = 0.0;
                local_3c = 0.0;
                local_4c = 0.0;
              }
              else {
                if (uVar5 != 5) {
                  if (uVar5 == 6) {
                    local_7c = local_140;
                    local_78 = local_13c;
                    local_74 = 0;
                    local_64 = 0.0;
                    local_5c = 0;
                    local_60 = local_13c;
                    local_88 = local_140;
                    local_84 = -1.0;
                    local_6c = -1.0;
                    local_80 = 0;
                    local_70 = 0.0;
                    local_68 = 0;
                    local_c0 = local_148;
                    local_bc = local_138;
                    local_b0 = local_150;
                    local_ac = local_138;
                    local_c8 = local_148;
                    local_c4 = local_11c;
                    local_b4 = local_11c;
                    local_b8 = local_150;
                    local_a0 = local_144;
                    local_9c = local_144;
                    local_90 = 1.0;
                    local_a4 = 1.0;
                    local_98 = 1.0;
                    local_94 = 1.0;
                    local_8c = local_144;
                    local_a8 = local_144;
                    local_4c = 0.0;
                    local_1c = 0.0;
                    local_2c = 0.0;
                  }
                  else if (uVar5 == 7) {
                    local_78 = 0.0;
                    local_60 = local_140;
                    local_bc = local_114;
                    local_ac = local_164;
                    local_9c = 0.0;
                    local_8c = local_14c;
                    local_4c = 0.0;
                    goto LAB_00f313e7;
                  }
                  goto LAB_00f313f5;
                }
                local_88 = -1.0;
                local_84 = local_13c;
                local_7c = local_13c;
                local_78 = local_13c;
                local_64 = local_13c;
                local_70 = -1.0;
                local_6c = -1.0;
                local_60 = -1.0;
                local_c8 = local_118;
                local_c4 = local_138;
                local_c0 = local_134;
                local_bc = local_138;
                local_b8 = local_118;
                local_b4 = local_11c;
                local_ac = local_11c;
                local_b0 = local_134;
                local_a8 = 0.0;
                local_a4 = local_144;
                local_a0 = local_14c;
                local_9c = local_144;
                local_98 = 0.0;
                local_94 = 1.0;
                local_8c = 1.0;
                local_90 = local_14c;
                local_4c = 0.0;
                local_2c = 0.0;
              }
              goto LAB_00f313ee;
            }
            local_88 = local_13c;
            local_84 = 0.0;
            local_80 = 0;
            local_7c = local_140;
            local_6c = local_140;
            local_64 = local_140;
            local_60 = local_140;
            local_78 = 0.0;
            local_74 = 0;
            local_68 = 0;
            local_5c = 0;
            local_70 = local_13c;
            local_c8 = local_134;
            local_c4 = local_114;
            local_c0 = local_148;
            local_bc = local_114;
            local_b8 = local_134;
            local_b4 = local_164;
            local_ac = local_164;
            local_b0 = local_148;
            local_a8 = local_14c;
            local_a4 = 0.0;
            local_a0 = local_144;
            local_90 = local_144;
            local_9c = 0.0;
            local_4c = 0.0;
            local_3c = 0.0;
            local_98 = local_14c;
            local_94 = local_14c;
            local_8c = local_14c;
          }
LAB_00f313f5:
          iVar4 = FUN_00f280b0(&local_88,&local_c8,&local_a8,&local_58,&local_110);
        } while ((iVar4 != 0) && (uVar5 = uVar5 + 1, uVar5 < 8));
      }
    }
  }
  __security_check_cookie(local_14 ^ (uint)auStack_168);
  return;
}

