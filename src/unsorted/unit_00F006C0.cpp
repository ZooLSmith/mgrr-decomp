// src/unsorted/unit_00F006C0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F006C0..00F00AD0, 3 functions

#include "mgrr.h"

// 00F006C0  FUN_00f006c0  size=428  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00f006c0(int param_1)

{
  char cVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  float *pfVar5;
  uint uVar6;
  int iVar7;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  
  local_20 = *(float *)(param_1 + 0x250);
  local_1c = *(float *)(param_1 + 0x254);
  local_18 = *(float *)(param_1 + 600);
  local_24 = *(float *)(param_1 + 0x25c) * *(float *)(param_1 + 0x124);
  if (((*(byte *)(param_1 + 0x33) & 1) == 0) && ((DAT_01bea070._3_1_ & 1) == 0)) {
    local_20 = _DAT_018d5df0 * local_20;
    local_1c = _DAT_018d5df0 * local_1c;
    local_18 = _DAT_018d5df0 * local_18;
  }
  iVar4 = *(int *)(param_1 + 0x84);
  if ((iVar4 != 0) && ((*(byte *)(iVar4 + 0x68) & 8) != 0)) {
    local_20 = local_20 * *(float *)(iVar4 + 0x30);
    local_1c = *(float *)(iVar4 + 0x34) * local_1c;
    local_18 = *(float *)(iVar4 + 0x38) * local_18;
    local_24 = *(float *)(iVar4 + 0x3c) * local_24;
  }
  cVar1 = *(char *)(param_1 + 0x440);
  if ((((cVar1 == '\x06') || (cVar1 == '\n')) || (cVar1 == '\f')) || (cVar1 == '\x0f')) {
    local_20 = local_24 * local_20;
    local_1c = local_24 * local_1c;
    local_18 = local_24 * local_18;
    if (cVar1 == '\x0f') {
      local_24 = 1.0;
    }
    else {
      if ((*(int *)(param_1 + 0x58) == 0) ||
         (puVar2 = (uint *)(*(int *)(param_1 + 0x58) + 0x30), puVar2 == (uint *)0x0)) {
        uVar6 = 0;
      }
      else {
        uVar6 = *puVar2;
        if ((uVar6 + 0xf & 0xfffffff0) != uVar6) {
          uVar3 = FUN_00f59ed0(3);
          FUN_00dd5650(&DAT_016597b4,uVar3);
        }
      }
      local_24 = *(float *)(uVar6 + 0x28) * 0.5 * local_24;
    }
  }
  iVar7 = ((*(int *)(param_1 + 0x450) + -4) * *(int *)(param_1 + 0x454) + 2) *
          *(int *)(param_1 + 0x520) + *(int *)(param_1 + 0x524);
  iVar4 = FUN_00f99ca0();
  if (iVar7 != 0) {
    pfVar5 = (float *)(iVar4 + 8);
    do {
      iVar7 = iVar7 + -1;
      pfVar5[-2] = local_20;
      pfVar5[-1] = local_1c;
      *pfVar5 = local_18;
      pfVar5[1] = local_24;
      pfVar5 = pfVar5 + 4;
    } while (iVar7 != 0);
  }
  FUN_00f99d30();
  return;
}

// 00F00870  FUN_00f00870  size=608  [run]
void __thiscall
FUN_00f00870(int param_1,float *param_2,float *param_3,int param_4,void *param_5,undefined4 param_6,
            int param_7)

{
  float fVar1;
  float10 fVar2;
  undefined1 auStack_98 [4];
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_50;
  float local_4c;
  float local_48;
  float local_40;
  float local_3c;
  float local_38;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_98;
  if (param_7 == 0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    fVar1 = param_3[3];
  }
  else {
    *param_2 = *param_3 + *(float *)(param_1 + 0x170);
    param_2[1] = *(float *)(param_1 + 0x174) + param_3[1];
    param_2[2] = *(float *)(param_1 + 0x178) + param_3[2];
    fVar1 = *(float *)(param_1 + 0x17c) + param_3[3];
  }
  param_2[3] = fVar1;
  if (param_4 != 0) {
    FID_conflict__memcpy(&local_60,param_5,0x40);
    local_80 = *param_2;
    local_7c = param_2[1];
    local_78 = param_2[2];
    local_74 = param_2[3];
    if ((*(uint *)(param_1 + 0x3c) & 0x40000000) != 0) {
      local_94 = local_5c * local_5c + local_60 * local_60 + local_58 * local_58;
      fVar2 = (float10)FUN_00fdef70();
      local_70 = 1.0 / (float)fVar2;
      local_94 = local_4c * local_4c + local_50 * local_50 + local_48 * local_48;
      fVar2 = (float10)FUN_00fdef70();
      local_6c = 1.0 / (float)fVar2;
      local_94 = local_3c * local_3c + local_40 * local_40 + local_38 * local_38;
      fVar2 = (float10)FUN_00fdef70();
      local_94 = (float)fVar2;
      local_68 = 1.0 / local_94;
      local_90 = local_70 * local_80;
      local_8c = local_6c * local_7c;
      local_88 = local_68 * local_78;
      local_84 = local_64 * local_74;
      local_80 = local_90;
      local_7c = local_8c;
      local_78 = local_88;
      local_74 = local_84;
    }
    D3DXVec3TransformNormal(&local_90,&local_80,&local_60);
    local_90 = fStack_30 + local_90;
    local_8c = fStack_2c + local_8c;
    local_88 = fStack_28 + local_88;
    *param_2 = local_90;
    param_2[1] = local_8c;
    param_2[2] = local_88;
    param_2[3] = local_84;
  }
  __security_check_cookie(local_14 ^ (uint)auStack_98);
  return;
}

// 00F00AD0  FUN_00f00ad0  size=4602  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00f00ad0(int param_1)

{
  int iVar1;
  uint *puVar2;
  undefined4 uVar3;
  float *pfVar4;
  uint uVar5;
  float10 fVar6;
  float10 fVar7;
  float fVar8;
  float fStack_168;
  float fStack_164;
  float fStack_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  undefined4 local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined1 auStack_e8 [8];
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  float local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 auStack_68 [8];
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&fStack_168;
  if (((*(uint *)(param_1 + 0x30) & 0xc0000000) != 0) || (iVar1 = FUN_00f41120(), iVar1 != 0))
  goto LAB_00f01cb6;
  if ((*(int *)(param_1 + 0x58) == 0) ||
     (puVar2 = (uint *)(*(int *)(param_1 + 0x58) + 0x30), puVar2 == (uint *)0x0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = *puVar2;
    if ((uVar5 + 0xf & 0xfffffff0) != uVar5) {
      uVar3 = FUN_00f59ed0(3);
      FUN_00dd5650(&DAT_016597b4,uVar3);
    }
  }
  *(undefined4 *)(param_1 + 0x124) = 0x3f800000;
  local_154 = *(float *)(uVar5 + 0xc) + *(float *)(uVar5 + 0x10);
  if ((local_154 != 0.0) || (*(float *)(param_1 + 0x474) != 0.0)) {
    pfVar4 = (float *)FUN_00e9fe70();
    local_120 = *pfVar4 - *(float *)(param_1 + 400);
    local_11c = pfVar4[1] - *(float *)(param_1 + 0x194);
    local_118 = pfVar4[2] - *(float *)(param_1 + 0x198);
    local_158 = local_118 * local_118 + local_120 * local_120 + local_11c * local_11c;
    fVar6 = (float10)FUN_00fdef70();
    fVar8 = (float)fVar6;
    if (local_154 != 0.0) {
      if (fVar8 <= local_154) {
        if (*(float *)(uVar5 + 0xc) <= fVar8) {
          if (*(float *)(uVar5 + 0x10) != 0.0) {
            *(float *)(param_1 + 0x124) =
                 (fVar8 - *(float *)(uVar5 + 0xc)) / *(float *)(uVar5 + 0x10);
          }
        }
        else {
          *(undefined4 *)(param_1 + 0x124) = 0;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x124) = 0x3f800000;
      }
    }
    local_158 = fVar8;
    if ((*(float *)(param_1 + 0x474) != 0.0) &&
       (local_158 = *(float *)(param_1 + 0x474) * 0.2, local_158 < fVar8)) {
      local_158 = 1.0 - (fVar8 - local_158) / (*(float *)(param_1 + 0x474) - local_158);
      *(float *)(param_1 + 0x124) = local_158 * *(float *)(param_1 + 0x124);
    }
  }
  if (*(float *)(uVar5 + 8) == 0.0) {
    local_130 = *(float *)(param_1 + 400);
    local_12c = *(float *)(param_1 + 0x194);
    local_128 = *(float *)(param_1 + 0x198);
    local_124 = *(float *)(param_1 + 0x19c);
  }
  else {
    pfVar4 = (float *)FUN_00e9fe70();
    local_130 = *pfVar4 - *(float *)(param_1 + 400);
    local_12c = pfVar4[1] - *(float *)(param_1 + 0x194);
    local_128 = pfVar4[2] - *(float *)(param_1 + 0x198);
    local_124 = pfVar4[3] - *(float *)(param_1 + 0x19c);
    local_158 = local_130 * local_130 + local_12c * local_12c + local_128 * local_128;
    if (local_158 < 0.0 == (local_158 == 0.0)) {
      FUN_00ddf460(&local_130,&local_130);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_130 = 0.0;
      local_12c = 1.0;
      local_128 = 0.0;
    }
    fVar8 = *(float *)(uVar5 + 8);
    local_134 = fVar8 * local_124;
    local_130 = *(float *)(param_1 + 400) + fVar8 * local_130;
    local_12c = local_12c * fVar8 + *(float *)(param_1 + 0x194);
    local_128 = local_128 * fVar8 + *(float *)(param_1 + 0x198);
    local_124 = local_134 + *(float *)(param_1 + 0x19c);
    local_110 = local_130;
    local_10c = local_12c;
    local_108 = local_128;
    local_104 = local_124;
  }
  if ((*(byte *)(param_1 + 0x30) & 0x10) == 0) {
    local_158 = 1.0;
  }
  else if (*(float *)(param_1 + 0x90) == 0.0) {
    local_158 = 0.0;
  }
  else {
    local_158 = *(float *)(param_1 + 0x9c) / *(float *)(param_1 + 0x90);
  }
  local_158 = *(float *)(param_1 + 0x124) * local_158;
  *(float *)(param_1 + 0x124) = local_158;
  local_140 = *(float *)(param_1 + 0x250);
  local_13c = *(float *)(param_1 + 0x254);
  local_138 = *(float *)(param_1 + 600);
  local_154 = local_158 * *(float *)(param_1 + 0x25c);
  if (((*(byte *)(param_1 + 0x33) & 1) == 0) && ((DAT_01bea070._3_1_ & 1) == 0)) {
    local_140 = _DAT_018d5df0 * local_140;
    local_13c = _DAT_018d5df0 * local_13c;
    local_138 = _DAT_018d5df0 * local_138;
  }
  iVar1 = *(int *)(param_1 + 0x84);
  if ((iVar1 != 0) && ((*(byte *)(iVar1 + 0x68) & 8) != 0)) {
    local_140 = *(float *)(iVar1 + 0x30) * local_140;
    local_13c = *(float *)(iVar1 + 0x34) * local_13c;
    local_138 = *(float *)(iVar1 + 0x38) * local_138;
    local_154 = *(float *)(iVar1 + 0x3c) * local_154;
  }
  local_140 = local_154 * local_140;
  local_13c = local_154 * local_13c;
  local_138 = local_154 * local_138;
  if ((local_154 < 0.01) ||
     (pfVar4 = (float *)EffectLightManager::setEffectLight_2(), pfVar4 == (float *)0x0))
  goto LAB_00f01cb6;
  switch(*(undefined4 *)(param_1 + 0x458)) {
  case 1:
    local_120 = *(float *)(param_1 + 0x100);
    local_11c = *(float *)(param_1 + 0x104);
    local_118 = *(float *)(param_1 + 0x464);
    local_114 = *(float *)(param_1 + 0x468);
    if (*(int *)(param_1 + 0x50) == 0) {
      local_150 = *(float *)(param_1 + 0x1c0);
      local_14c = *(float *)(param_1 + 0x1c4);
      local_148 = *(float *)(param_1 + 0x1c8);
    }
    else {
      local_100 = 0.0;
      local_fc = 1.0;
      local_14c = 1.0;
      local_a4 = 0x3f800000;
      local_b8 = 0x3f800000;
      local_cc = 0x3f800000;
      local_e0 = 0x3f800000;
      local_f8 = 0;
      local_f4 = 0;
      local_150 = 0.0;
      local_148 = 0.0;
      local_144 = 0;
      local_a8 = 0;
      local_ac = 0;
      local_b0 = 0.0;
      local_b4 = 0;
      local_bc = 0;
      local_c0 = 0;
      local_c4 = 0;
      local_c8 = 0;
      local_d0 = 0;
      local_d4 = 0;
      local_d8 = 0;
      local_dc = 0;
      if (*(float *)(param_1 + 0x1c8) != 0.0) {
        D3DXMatrixRotationZ(local_60,*(undefined4 *)(param_1 + 0x1c8));
        D3DXMatrixMultiply(auStack_e8,auStack_68,auStack_e8);
      }
      if (*(float *)(param_1 + 0x1c4) != 0.0) {
        D3DXMatrixRotationY(local_60,*(undefined4 *)(param_1 + 0x1c4));
        D3DXMatrixMultiply(auStack_e8,auStack_68,auStack_e8);
      }
      if (*(float *)(param_1 + 0x1c0) != 0.0) {
        D3DXMatrixRotationX(local_60,*(undefined4 *)(param_1 + 0x1c0));
        D3DXMatrixMultiply(auStack_e8,auStack_68,auStack_e8);
      }
      D3DXVec3TransformNormal(&local_150,&local_150,&local_e0);
      D3DXVec3TransformNormal(&fStack_15c,&fStack_15c,*(int *)(param_1 + 0x50) + 0x10);
      local_108 = 0.0;
      local_104 = 1.0;
      local_100 = 0.0;
      FUN_00de2bc0(&local_b8,&local_118,&fStack_168,&local_108,0x3f800000,0x40c90fdb);
      fVar6 = (float10)FUN_00fdef70();
      local_128 = (float)fVar6;
      fVar6 = (float10)FUN_00fdef70();
      local_124 = (float)fVar6;
      fVar6 = (float10)FUN_00fdef70();
      fVar7 = (float10)FUN_00fdecda();
      fVar8 = (float)fVar7;
      fVar6 = (float10)FUN_00ddbaa0(-local_b0 / (float)fVar6);
      fStack_164 = (float)fVar6;
      fStack_168 = fVar8;
      fVar6 = (float10)FUN_00fdecda();
      local_148 = (float)fVar6;
      fStack_15c = local_148;
    }
    pfVar4[0xb] = 1.4013e-45;
    pfVar4[4] = local_120;
    pfVar4[5] = local_11c;
    pfVar4[6] = local_118;
    fVar8 = local_114;
    break;
  case 2:
    local_120 = *(float *)(param_1 + 0x100) / *(float *)(param_1 + 0x1fc);
    local_11c = *(float *)(param_1 + 0x104) / *(float *)(param_1 + 0x1fc);
    local_118 = *(float *)(param_1 + 0x1fc);
    if (*(int *)(param_1 + 0x50) == 0) {
      local_150 = *(float *)(param_1 + 0x1c0);
      local_14c = *(float *)(param_1 + 0x1c4);
      fVar8 = *(float *)(param_1 + 0x1c8);
    }
    else {
      local_100 = 0.0;
      local_fc = 1.0;
      local_14c = 1.0;
      local_a4 = 0x3f800000;
      local_b8 = 0x3f800000;
      local_cc = 0x3f800000;
      local_e0 = 0x3f800000;
      local_f8 = 0;
      local_f4 = 0;
      local_150 = 0.0;
      local_148 = 0.0;
      local_144 = 0;
      local_a8 = 0;
      local_ac = 0;
      local_b0 = 0.0;
      local_b4 = 0;
      local_bc = 0;
      local_c0 = 0;
      local_c4 = 0;
      local_c8 = 0;
      local_d0 = 0;
      local_d4 = 0;
      local_d8 = 0;
      local_dc = 0;
      if (*(float *)(param_1 + 0x1c8) != 0.0) {
        D3DXMatrixRotationZ(local_60,*(undefined4 *)(param_1 + 0x1c8));
        D3DXMatrixMultiply(auStack_e8,auStack_68,auStack_e8);
      }
      if (*(float *)(param_1 + 0x1c4) != 0.0) {
        D3DXMatrixRotationY(local_60,*(undefined4 *)(param_1 + 0x1c4));
        D3DXMatrixMultiply(auStack_e8,auStack_68,auStack_e8);
      }
      if (*(float *)(param_1 + 0x1c0) != 0.0) {
        D3DXMatrixRotationX(local_60,*(undefined4 *)(param_1 + 0x1c0));
        D3DXMatrixMultiply(auStack_e8,auStack_68,auStack_e8);
      }
      D3DXVec3TransformNormal(&local_150,&local_150,&local_e0);
      D3DXVec3TransformNormal(&fStack_15c,&fStack_15c,*(int *)(param_1 + 0x50) + 0x10);
      local_108 = 0.0;
      local_104 = 1.0;
      local_100 = 0.0;
      FUN_00de2bc0(&local_b8,&local_118,&fStack_168,&local_108,0x3f800000,0x40c90fdb);
      fVar6 = (float10)FUN_00fdef70();
      local_128 = (float)fVar6;
      fVar6 = (float10)FUN_00fdef70();
      local_124 = (float)fVar6;
      fVar6 = (float10)FUN_00fdef70();
      fVar7 = (float10)FUN_00fdecda();
      fVar6 = (float10)FUN_00ddbaa0(-local_b0 / (float)fVar6);
      fStack_164 = (float)fVar6;
      fStack_168 = (float)fVar7;
      fVar6 = (float10)FUN_00fdecda();
      fVar8 = (float)fVar6;
      fStack_15c = fVar8;
    }
    pfVar4[0xb] = 2.8026e-45;
    pfVar4[4] = local_120;
    pfVar4[5] = local_11c;
    pfVar4[6] = local_118;
    pfVar4[7] = 0.0;
    *pfVar4 = local_130;
    pfVar4[1] = local_12c;
    pfVar4[2] = local_128;
    pfVar4[3] = local_124;
    pfVar4[8] = local_150;
    pfVar4[9] = local_14c;
    local_148 = fVar8;
    goto LAB_00f01c42;
  case 3:
  case 4:
    local_120 = *(float *)(param_1 + 0x100);
    local_11c = *(float *)(param_1 + 0x104);
    if ((**(uint **)(param_1 + 0x24) & 0x100000) == 0) {
      local_11c = 0.0;
    }
    if (*(int *)(param_1 + 0x50) == 0) {
      local_150 = *(float *)(param_1 + 0x1c0);
      local_14c = *(float *)(param_1 + 0x1c4);
      local_148 = *(float *)(param_1 + 0x1c8);
    }
    else {
      local_100 = 0.0;
      local_fc = 1.0;
      local_14c = 1.0;
      local_a4 = 0x3f800000;
      local_b8 = 0x3f800000;
      local_cc = 0x3f800000;
      local_e0 = 0x3f800000;
      local_f8 = 0;
      local_f4 = 0;
      local_150 = 0.0;
      local_148 = 0.0;
      local_144 = 0;
      local_a8 = 0;
      local_ac = 0;
      local_b0 = 0.0;
      local_b4 = 0;
      local_bc = 0;
      local_c0 = 0;
      local_c4 = 0;
      local_c8 = 0;
      local_d0 = 0;
      local_d4 = 0;
      local_d8 = 0;
      local_dc = 0;
      if (*(float *)(param_1 + 0x1c8) != 0.0) {
        D3DXMatrixRotationZ(local_60,*(undefined4 *)(param_1 + 0x1c8));
        D3DXMatrixMultiply(auStack_e8,auStack_68,auStack_e8);
      }
      if (*(float *)(param_1 + 0x1c4) != 0.0) {
        D3DXMatrixRotationY(local_60,*(undefined4 *)(param_1 + 0x1c4));
        D3DXMatrixMultiply(auStack_e8,auStack_68,auStack_e8);
      }
      if (*(float *)(param_1 + 0x1c0) != 0.0) {
        D3DXMatrixRotationX(local_60,*(undefined4 *)(param_1 + 0x1c0));
        D3DXMatrixMultiply(auStack_e8,auStack_68,auStack_e8);
      }
      D3DXVec3TransformNormal(&local_150,&local_150,&local_e0);
      D3DXVec3TransformNormal(&fStack_15c,&fStack_15c,*(int *)(param_1 + 0x50) + 0x10);
      local_108 = 0.0;
      local_104 = 1.0;
      local_100 = 0.0;
      FUN_00de2bc0(&local_b8,&local_118,&fStack_168,&local_108,0x3f800000,0x40c90fdb);
      fVar6 = (float10)FUN_00fdef70();
      local_128 = (float)fVar6;
      fVar6 = (float10)FUN_00fdef70();
      local_124 = (float)fVar6;
      fVar6 = (float10)FUN_00fdef70();
      fVar7 = (float10)FUN_00fdecda();
      fVar6 = (float10)FUN_00ddbaa0(-local_b0 / (float)fVar6);
      fStack_164 = (float)fVar6;
      fStack_168 = (float)fVar7;
      fVar6 = (float10)FUN_00fdecda();
      fStack_15c = (float)fVar6;
      local_148 = fStack_15c;
    }
    pfVar4[0xb] = *(float *)(param_1 + 0x458);
    pfVar4[4] = local_120;
    pfVar4[5] = local_11c;
    pfVar4[6] = 0.0;
    fVar8 = 0.0;
    break;
  default:
    local_100 = *(float *)(param_1 + 0x100);
    local_fc = *(float *)(param_1 + 0x104);
    fVar8 = 0.0;
    if ((**(uint **)(param_1 + 0x24) & 0x100000) == 0) {
      local_fc = 0.0;
    }
    pfVar4[0xb] = 0.0;
    pfVar4[4] = local_100;
    pfVar4[5] = local_fc;
    pfVar4[6] = 0.0;
    pfVar4[7] = 0.0;
    *pfVar4 = local_130;
    pfVar4[1] = local_12c;
    pfVar4[2] = local_128;
    pfVar4[3] = local_124;
    pfVar4[8] = 0.0;
    pfVar4[9] = 0.0;
LAB_00f01c42:
    pfVar4[10] = fVar8;
    pfVar4[0xc] = local_140;
    pfVar4[0xd] = local_13c;
    pfVar4[0xe] = local_138;
    pfVar4[0xf] = *(float *)(param_1 + 0x454);
    *(undefined1 *)((int)pfVar4 + 0x42) = *(undefined1 *)(param_1 + 0x460);
    *(undefined1 *)((int)pfVar4 + 0x43) = *(undefined1 *)(param_1 + 0x45c);
    *(undefined2 *)(pfVar4 + 0x10) = *(undefined2 *)(param_1 + 0x450);
    goto LAB_00f01c80;
  }
  pfVar4[7] = fVar8;
  *pfVar4 = local_130;
  pfVar4[1] = local_12c;
  pfVar4[2] = local_128;
  pfVar4[3] = local_124;
  pfVar4[8] = local_150;
  pfVar4[9] = local_14c;
  pfVar4[10] = local_148;
  pfVar4[0xc] = local_140;
  pfVar4[0xd] = local_13c;
  pfVar4[0xe] = local_138;
  pfVar4[0xf] = *(float *)(param_1 + 0x454);
  *(undefined1 *)((int)pfVar4 + 0x42) = *(undefined1 *)(param_1 + 0x460);
  *(undefined1 *)((int)pfVar4 + 0x43) = *(undefined1 *)(param_1 + 0x45c);
  *(undefined2 *)(pfVar4 + 0x10) = *(undefined2 *)(param_1 + 0x450);
LAB_00f01c80:
  pfVar4[0x12] = *(float *)(param_1 + 0x47c);
  pfVar4[0x13] = *(float *)(param_1 + 0x480);
  pfVar4[0x14] = *(float *)(param_1 + 0x484);
  pfVar4[0x15] = *(float *)(param_1 + 0x488);
  pfVar4[0x16] = *(float *)(param_1 + 0x48c);
  pfVar4[0x17] = *(float *)(param_1 + 0x490);
LAB_00f01cb6:
  __security_check_cookie(local_14 ^ (uint)&fStack_168);
  return;
}

