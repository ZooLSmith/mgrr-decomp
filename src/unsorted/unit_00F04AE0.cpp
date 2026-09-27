// src/unsorted/unit_00F04AE0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F04AE0..00F08B70, 9 functions

#include "mgrr.h"

// 00F04AE0  FUN_00f04ae0  size=45  [run]
void __fastcall FUN_00f04ae0(int param_1)

{
  if ((*(int *)(param_1 + 0x458) != 0) && (*(int *)(param_1 + 0x458) != 0)) {
    FUN_00dd48d0(*(int *)(param_1 + 0x458),0);
    *(undefined4 *)(param_1 + 0x458) = 0;
  }
  return;
}

// 00F04B10  FUN_00f04b10  size=149  [run]
void __fastcall FUN_00f04b10(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x84) != 0) && (*(int *)(*(int *)(param_1 + 0x84) + 0x24) == 4)) {
    FUN_00ea9fc0();
  }
  if ((*(int *)(param_1 + 0x458) != 0) && (*(int *)(param_1 + 0x458) != 0)) {
    FUN_00dd48d0(*(int *)(param_1 + 0x458),0);
    *(undefined4 *)(param_1 + 0x458) = 0;
  }
  if ((*(int *)(param_1 + 0x540) != 0) && (*(int *)(param_1 + 0x540) != 0)) {
    FUN_00dd48d0(*(int *)(param_1 + 0x540),0);
    *(undefined4 *)(param_1 + 0x540) = 0;
  }
  iVar1 = FUN_00a7c990(&DAT_01ee11f4);
  if (iVar1 == 0) {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      FUN_00a7c800();
      return;
    }
  }
  return;
}

// 00F04BB0  FUN_00f04bb0  size=1549  [run]
void __thiscall FUN_00f04bb0(int param_1,int param_2)

{
  float *_Src;
  uint *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  float10 fVar5;
  float *pfStack_198;
  float *pfStack_194;
  float *pfStack_190;
  undefined1 auStack_174 [4];
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float fStack_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_130;
  float local_12c;
  float local_128;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float fStack_100;
  float afStack_f8 [3];
  float afStack_ec [3];
  undefined1 local_e0 [24];
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float local_b0;
  float local_ac;
  float local_a8 [2];
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  uint uStack_38;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_174;
  *(undefined4 *)(param_2 + 0x70) = *(undefined4 *)(param_1 + 0x100);
  *(undefined4 *)(param_2 + 0x74) = *(undefined4 *)(param_1 + 0x104);
  *(undefined4 *)(param_2 + 0x78) = *(undefined4 *)(param_1 + 0x108);
  if ((*(uint *)(param_1 + 0x30) & 0x400) != 0) {
    *(float *)(param_2 + 0x70) = *(float *)(param_2 + 0x70) * -1.0;
  }
  local_150 = *(float *)(param_1 + 0x170) + *(float *)(param_1 + 0x180);
  local_14c = *(float *)(param_1 + 0x174) + *(float *)(param_1 + 0x184);
  local_148 = *(float *)(param_1 + 0x178) + *(float *)(param_1 + 0x188);
  local_144 = *(float *)(param_1 + 0x17c) + *(float *)(param_1 + 0x18c);
  FUN_00ee0200();
  iVar2 = *(int *)(param_1 + 0x50);
  if (iVar2 == 0) {
    if (local_e0 != (undefined1 *)(param_1 + 0x200)) {
      pfStack_190 = (float *)0xf04ec9;
      FID_conflict__memcpy(local_e0,(undefined1 *)(param_1 + 0x200),0x40);
    }
    local_b0 = local_b0 + local_150;
    local_ac = local_ac + local_14c;
    local_a8[0] = local_a8[0] + local_148;
  }
  else {
    _Src = (float *)(iVar2 + 0x10);
    if ((*(uint *)(param_1 + 0x3c) & 0x40000000) == 0) {
      pfStack_190 = (float *)0xf04e41;
      D3DXVec3TransformNormal();
      if (afStack_f8 != _Src) {
        FID_conflict__memcpy(afStack_f8,_Src,0x40);
      }
    }
    else {
      local_108 = *_Src;
      local_104 = *(float *)(iVar2 + 0x14);
      local_114 = *(float *)(iVar2 + 0x20);
      local_10c = *(float *)(iVar2 + 0x24);
      local_168 = *(float *)(iVar2 + 0x28);
      local_164 = *(float *)(iVar2 + 0x30);
      local_110 = *(float *)(iVar2 + 0x34);
      local_170 = *(float *)(iVar2 + 0x38);
      local_16c = local_104 * local_104 + local_108 * local_108 +
                  *(float *)(iVar2 + 0x18) * *(float *)(iVar2 + 0x18);
      fVar5 = (float10)FUN_00fdef70();
      local_16c = (float)fVar5;
      local_168 = local_10c * local_10c + local_114 * local_114 + local_168 * local_168;
      local_160 = local_16c;
      fVar5 = (float10)FUN_00fdef70();
      local_168 = (float)fVar5;
      local_170 = local_110 * local_110 + local_164 * local_164 + local_170 * local_170;
      local_15c = local_168;
      fVar5 = (float10)FUN_00fdef70();
      local_170 = (float)fVar5;
      if (local_160 != 0.0) {
        local_160 = 1.0 / local_160;
      }
      if (local_15c != 0.0) {
        local_15c = 1.0 / local_15c;
      }
      local_158 = local_170;
      if (local_170 != 0.0) {
        local_158 = 1.0 / local_170;
      }
      FUN_00ddd140();
      pfStack_190 = (float *)0xf04e18;
      D3DXMatrixMultiply();
      pfStack_190 = afStack_ec;
      pfStack_194 = &local_15c;
      pfStack_198 = &local_14c;
      D3DXVec3TransformNormal();
    }
    fStack_c8 = fStack_c8 + local_158;
    fStack_c4 = fStack_c4 + fStack_154;
    fStack_c0 = fStack_c0 + local_150;
    D3DXMatrixMultiply(afStack_f8,param_1 + 0x200,afStack_f8);
  }
  local_b0 = local_b0 + local_130;
  local_ac = local_ac + local_12c;
  local_a8[0] = local_a8[0] + local_128;
  local_68 = 0.0;
  local_6c = 0;
  local_70 = 0;
  local_74 = 0;
  local_7c = 0;
  local_80 = 0;
  local_84 = 0;
  local_88 = 0;
  uStack_90 = 0;
  uStack_94 = 0;
  uStack_98 = 0;
  uStack_9c = 0;
  uStack_64 = 0x3f800000;
  uStack_78 = 0x3f800000;
  uStack_8c = 0x3f800000;
  local_a0 = 0x3f800000;
  if (*(float *)(param_1 + 0x1c8) != 0.0) {
    D3DXMatrixRotationZ();
    pfStack_194 = local_a8;
    pfStack_190 = (float *)&local_68;
    pfStack_198 = (float *)0xf04fee;
    D3DXMatrixMultiply();
  }
  if (*(float *)(param_1 + 0x1c4) != 0.0) {
    D3DXMatrixRotationY();
    pfStack_194 = local_a8;
    pfStack_190 = (float *)&local_68;
    pfStack_198 = (float *)0xf05032;
    D3DXMatrixMultiply();
  }
  if (*(float *)(param_1 + 0x1c0) != 0.0) {
    D3DXMatrixRotationX();
    pfStack_194 = local_a8;
    pfStack_190 = (float *)&local_68;
    pfStack_198 = (float *)0xf05072;
    D3DXMatrixMultiply();
  }
  pfStack_190 = (float *)0xf0508a;
  D3DXMatrixMultiply();
  local_10c = *(float *)(param_2 + 0x70);
  pfStack_190 = &local_10c;
  local_108 = *(float *)(param_2 + 0x74);
  pfStack_194 = (float *)&local_6c;
  local_104 = *(float *)(param_2 + 0x78);
  pfStack_198 = (float *)0xf050bd;
  FUN_00ddd140();
  pfStack_198 = afStack_ec;
  pfStack_194 = (float *)&local_6c;
  pfStack_190 = pfStack_198;
  D3DXMatrixMultiply();
  if ((*(int *)(param_1 + 0x58) == 0) ||
     (puVar1 = (uint *)(*(int *)(param_1 + 0x58) + 0xf0), puVar1 == (uint *)0x0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    if ((uVar3 + 0xf & 0xfffffff0) != uVar3) {
      uVar4 = FUN_00f59ed0(0xf);
      FUN_00dd5650(&DAT_016597b4,uVar4);
    }
  }
  local_104 = *(float *)(uVar3 + 8) - 0.5;
  fStack_100 = *(float *)(uVar3 + 0xc) - 0.5;
  local_108 = *(float *)(uVar3 + 4) - 0.5;
  D3DXVec3TransformNormal(&local_148,&local_108,afStack_f8);
  if ((float *)(param_2 + 0x10) != &local_104) {
    FID_conflict__memcpy((float *)(param_2 + 0x10),&local_104,0x40);
  }
  *(float *)(param_2 + 0x40) = fStack_154 + *(float *)(param_2 + 0x40);
  *(float *)(param_2 + 0x44) = local_150 + *(float *)(param_2 + 0x44);
  *(float *)(param_2 + 0x48) = local_14c + *(float *)(param_2 + 0x48);
  *(ushort *)(param_2 + 0xa2) = *(ushort *)(param_2 + 0xa2) | 4;
  __security_check_cookie(uStack_38 ^ (uint)&pfStack_198);
  return;
}

// 00F051C0  FUN_00f051c0  size=8450  [run]
void __thiscall FUN_00f051c0(int param_1,float *param_2)

{
  bool bVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  void *_Src;
  float fVar6;
  float unaff_EDI;
  float10 fVar7;
  undefined4 *puVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float local_1b4;
  float fStack_1b0;
  undefined8 uStack_1ac;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float local_174;
  float fStack_170;
  undefined8 uStack_16c;
  float fStack_164;
  float local_160;
  float local_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  undefined8 uStack_14c;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float afStack_12c [3];
  undefined1 auStack_120 [8];
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [12];
  float fStack_8c;
  float fStack_88;
  float afStack_84 [2];
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  uint auStack_60 [3];
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&fStack_1d4;
  local_190 = 0.0;
  local_18c = 0.0;
  local_188 = 0.0;
  if ((*(int *)(param_1 + 0x58) == 0) ||
     (pfVar2 = (float *)(*(int *)(param_1 + 0x58) + 0x30), pfVar2 == (float *)0x0)) {
    fVar6 = 0.0;
  }
  else {
    fVar6 = *pfVar2;
    if ((float)((int)fVar6 + 0xfU & 0xfffffff0) != fVar6) {
      FUN_00f59ed0();
      FUN_00dd5650();
    }
  }
  local_174 = fVar6;
  if (*(float *)((int)fVar6 + 8) == 0.0) {
    local_100 = *(float *)(param_1 + 400);
    local_fc = *(float *)(param_1 + 0x194);
    local_f8 = *(float *)(param_1 + 0x198);
    local_f4 = *(float *)(param_1 + 0x19c);
  }
  else {
    pfVar2 = (float *)FUN_00e9fe70();
    local_190 = *pfVar2 - *(float *)(param_1 + 400);
    local_18c = pfVar2[1] - *(float *)(param_1 + 0x194);
    local_188 = pfVar2[2] - *(float *)(param_1 + 0x198);
    local_184 = pfVar2[3] - *(float *)(param_1 + 0x19c);
    local_1b4 = local_190 * local_190 + local_18c * local_18c + local_188 * local_188;
    if (local_1b4 < 0.0 == (local_1b4 == 0.0)) {
      FUN_00ddf460();
    }
    else {
      FUN_00dd5650();
      local_190 = 0.0;
      local_18c = 1.0;
      local_188 = 0.0;
    }
    if ((*(int *)(param_1 + 0x50) != 0) &&
       ((((*(uint *)(param_1 + 0x38) & 0x100000) != 0 || ((*(uint *)(param_1 + 0x38) & 0x20) != 0))
        || ((*(byte *)(param_1 + 0x3c) & 1) != 0)))) {
      D3DXMatrixInverse();
      D3DXVec3TransformNormal();
    }
    if (*(float *)((int)fVar6 + 8) == 0.0) {
      local_100 = *(float *)(param_1 + 400);
      local_fc = *(float *)(param_1 + 0x194);
      local_f8 = *(float *)(param_1 + 0x198);
      local_f4 = *(float *)(param_1 + 0x19c);
    }
    else {
      local_1b4 = *(float *)((int)fVar6 + 8);
      local_190 = local_1b4 * local_190;
      local_18c = local_18c * local_1b4;
      local_188 = local_188 * local_1b4;
      local_184 = local_1b4 * local_184;
      fStack_1b0 = local_190 + *(float *)(param_1 + 400);
      local_fc = local_18c + *(float *)(param_1 + 0x194);
      local_f8 = local_188 + *(float *)(param_1 + 0x198);
      uStack_1ac = (double)CONCAT44(local_f8,local_fc);
      fStack_1a4 = local_184 + *(float *)(param_1 + 0x19c);
      local_100 = fStack_1b0;
      local_f4 = fStack_1a4;
    }
  }
  local_160 = *(float *)(param_1 + 0x1c0);
  local_15c = *(float *)(param_1 + 0x1c4);
  local_158 = *(float *)(param_1 + 0x1c8);
  if (((local_160 == 0.0) && (local_15c == 0.0)) && (local_158 == 0.0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((*(short *)(param_1 + 0x4e) == -3) || ((*(uint *)(param_1 + 0x30) & 0x100) != 0)) {
    param_2[0xe] = 0.0;
    param_2[0xd] = 0.0;
    param_2[0xc] = 0.0;
    param_2[0xb] = 0.0;
    param_2[9] = 0.0;
    param_2[8] = 0.0;
    param_2[7] = 0.0;
    param_2[6] = 0.0;
    param_2[4] = 0.0;
    param_2[3] = 0.0;
    param_2[2] = 0.0;
    param_2[1] = 0.0;
    param_2[0xf] = 1.0;
    param_2[10] = 1.0;
    param_2[5] = 1.0;
    *param_2 = 1.0;
    D3DXVec3TransformNormal();
    param_2[0xc] = fStack_17c + param_2[0xc];
    param_2[0xd] = fStack_178 + param_2[0xd];
    param_2[0xe] = local_174 + param_2[0xe];
    iVar3 = FUN_00f98a90();
    fStack_1c0 = (float)(iVar3 / 2);
    fVar6 = (float)(int)fStack_1c0;
    iVar3 = FUN_00f98aa0();
    fStack_1c0 = (float)(iVar3 / 2);
    local_174 = -10.0;
    fStack_17c = fVar6;
    fStack_178 = fStack_1c0;
    D3DXVec3TransformNormal();
    param_2[0xc] = uStack_16c._4_4_ + param_2[0xc];
    param_2[0xd] = fStack_164 + param_2[0xd];
    param_2[0xe] = local_160 + param_2[0xe];
    uStack_c0 = 0;
    uStack_c4 = 0;
    uStack_c8 = 0;
    uStack_cc = 0;
    uStack_d4 = 0;
    uStack_d8 = 0;
    uStack_dc = 0;
    local_e0 = 0;
    uStack_e8 = 0;
    uStack_ec = 0;
    uStack_f0 = 0;
    local_f4 = 0.0;
    uStack_bc = 0x3f800000;
    uStack_d0 = 0x3f800000;
    uStack_e4 = 0x3f800000;
    local_f8 = 1.0;
    D3DXMatrixRotationX();
    D3DXMatrixMultiply();
    D3DXMatrixMultiply();
    if (bVar1) {
      local_e0 = 0;
      uStack_e4 = 0;
      uStack_e8 = 0;
      uStack_ec = 0;
      local_f4 = 0.0;
      local_f8 = 0.0;
      local_fc = 0.0;
      local_100 = 0.0;
      uStack_108 = 0;
      uStack_10c = 0;
      uStack_110 = 0;
      uStack_114 = 0;
      uStack_dc = 0x3f800000;
      uStack_f0 = 0x3f800000;
      uStack_104 = 0x3f800000;
      uStack_118 = 0x3f800000;
      if (local_190 != 0.0) {
        D3DXMatrixRotationZ();
        D3DXMatrixMultiply(auStack_120,&local_e0,auStack_120);
      }
      if (fStack_194 != 0.0) {
        D3DXMatrixRotationY();
        D3DXMatrixMultiply(auStack_120,&local_e0,auStack_120);
      }
      if (fStack_198 != 0.0) {
        D3DXMatrixRotationX();
        D3DXMatrixMultiply(auStack_120,&local_e0,auStack_120);
      }
      D3DXMatrixMultiply(param_2);
    }
    FID_conflict__memcpy(auStack_98,param_2,0x40);
    if ((*(byte *)(param_1 + 0x3c) & 0x40) == 0) {
      local_184 = *(float *)(param_1 + 0x104) * 100.0;
      unaff_EDI = 1.0;
      local_188 = *(float *)(param_1 + 0x100) * 100.0;
    }
    else {
      fStack_1d4 = *(float *)(param_1 + 0x104) * 100.0;
      unaff_EDI = *(float *)(param_1 + 0x108) * 100.0;
      fStack_1d0 = unaff_EDI;
    }
    FUN_00ddd140();
    D3DXMatrixMultiply(param_2);
    D3DXVec3TransformNormal(&local_1b4,&stack0xfffffdec,param_2);
    param_2[0xc] = fStack_1c0 + param_2[0xc];
    param_2[0xd] = fStack_1bc + param_2[0xd];
    param_2[0xe] = param_2[0xe] + fStack_1b8;
    D3DXVec3TransformNormal(&fStack_1c0,&stack0xfffffde0,&uStack_b0);
    fStack_8c = fStack_1cc + fStack_8c;
    fStack_88 = fStack_88 + fStack_1c8;
    afStack_84[0] = afStack_84[0] + fStack_1c4;
    fStack_19c = -0.5;
    fStack_198 = -0.5;
    fStack_194 = 0.0;
    D3DXVec3TransformNormal(&fStack_1cc,&fStack_19c,param_2);
    if (afStack_12c != param_2) {
      FID_conflict__memcpy(afStack_12c,param_2,0x40);
    }
    local_fc = fStack_1bc + local_fc;
LAB_00f06e69:
    local_f8 = local_f8 + fStack_1b8;
    local_f4 = local_f4 + local_1b4;
  }
  else if ((*(uint *)(param_1 + 0x38) & 0x20) == 0) {
    if ((*(byte *)(param_1 + 0x3c) & 1) == 0) {
      if ((*(uint *)(param_1 + 0x38) & 0x100000) != 0) {
        fStack_1a0 = *(float *)(param_1 + 0x180) + *(float *)(param_1 + 0x170);
        fStack_19c = *(float *)(param_1 + 0x184) + *(float *)(param_1 + 0x174);
        fStack_198 = *(float *)(param_1 + 0x188) + *(float *)(param_1 + 0x178);
        fStack_194 = *(float *)(param_1 + 0x18c) + *(float *)(param_1 + 0x17c);
        fStack_1d0 = fStack_1a0 + local_190;
        fStack_1cc = fStack_19c + local_18c;
        fStack_1c8 = fStack_198 + local_188;
        fStack_1c4 = local_184 + fStack_194;
        if (*(int *)(param_1 + 0x50) == 0) {
          D3DXMatrixTranslation();
        }
        else {
          pfVar2 = (float *)(*(int *)(param_1 + 0x50) + 0x10);
          D3DXVec3TransformNormal();
          if (param_2 != pfVar2) {
            FID_conflict__memcpy(param_2,pfVar2,0x40);
          }
          param_2[0xc] = fStack_17c + param_2[0xc];
          param_2[0xd] = fStack_178 + param_2[0xd];
          param_2[0xe] = param_2[0xe] + local_174;
        }
        D3DXMatrixMultiply();
        uStack_c0 = 0;
        uStack_c4 = 0;
        uStack_c8 = 0;
        uStack_cc = 0;
        uStack_d4 = 0;
        uStack_d8 = 0;
        uStack_dc = 0;
        local_e0 = 0;
        uStack_e8 = 0;
        uStack_ec = 0;
        uStack_f0 = 0;
        local_f4 = 0.0;
        uStack_bc = 0x3f800000;
        uStack_d0 = 0x3f800000;
        uStack_e4 = 0x3f800000;
        local_f8 = 1.0;
        if (*(float *)(param_1 + 0x1c8) != 0.0) {
          D3DXMatrixRotationZ();
          D3DXMatrixMultiply();
        }
        if (*(float *)(param_1 + 0x1c4) != 0.0) {
          D3DXMatrixRotationY();
          D3DXMatrixMultiply();
        }
        if (*(float *)(param_1 + 0x1c0) != 0.0) {
          D3DXMatrixRotationX();
          D3DXMatrixMultiply();
        }
        D3DXMatrixMultiply();
        FID_conflict__memcpy(afStack_84,param_2,0x40);
        fStack_1d4 = *(float *)(param_1 + 0x100);
        if ((*(byte *)(param_1 + 0x3c) & 0x40) == 0) {
          fStack_1d0 = *(float *)(param_1 + 0x104);
          fStack_1cc = 1.0;
          fStack_1c8 = uStack_16c._4_4_;
          local_174 = fStack_1d4;
          fStack_170 = fStack_1d0;
        }
        else {
          fStack_1d0 = *(float *)(param_1 + 0x104);
          fStack_1cc = *(float *)(param_1 + 0x108);
          fStack_1c8 = fStack_1b8;
          fStack_1c4 = fStack_1d4;
          fStack_1c0 = fStack_1d0;
          fStack_1bc = fStack_1cc;
        }
        FUN_00ddd140();
        D3DXMatrixMultiply();
        fStack_170 = *(float *)((int)fStack_1a4 + 0x14);
        uStack_16c = (double)(ulonglong)*(uint *)((int)fStack_1a4 + 0x18);
        D3DXVec3TransformNormal();
        param_2[0xc] = (float)uStack_1ac + param_2[0xc];
        param_2[0xd] = uStack_1ac._4_4_ + param_2[0xd];
        param_2[0xe] = param_2[0xe] + fStack_1a4;
        uStack_16c = -3.0517599839186005e-05;
        fStack_164 = 0.0;
        D3DXVec3TransformNormal(&uStack_1ac,&uStack_16c);
        if (afStack_12c != param_2) {
          FID_conflict__memcpy(afStack_12c,param_2,0x40);
        }
        local_fc = fStack_1bc + local_fc;
        local_f8 = local_f8 + fStack_1b8;
        local_f4 = local_f4 + local_1b4;
        *(float *)(param_1 + 0x130) = local_fc;
        *(float *)(param_1 + 0x134) = local_f8;
        *(float *)(param_1 + 0x138) = local_f4;
        *(float *)(param_1 + 0x13c) = fStack_1b0;
        fStack_7c = param_2[0xc];
        fStack_78 = param_2[0xd];
        fStack_74 = param_2[0xe];
        goto LAB_00f06ec5;
      }
      _Src = (void *)FUN_00e9ff50();
      FID_conflict__memcpy(param_2,_Src,0x40);
      param_2[0xc] = local_100;
      param_2[0xd] = local_fc;
      param_2[0xe] = local_f8;
      if (bVar1) {
        uStack_a8 = 0;
        uStack_ac = 0;
        uStack_b0 = 0;
        uStack_b4 = 0;
        uStack_bc = 0;
        uStack_c0 = 0;
        uStack_c4 = 0;
        uStack_c8 = 0;
        uStack_d0 = 0;
        uStack_d4 = 0;
        uStack_d8 = 0;
        uStack_dc = 0;
        uStack_a4 = 0x3f800000;
        uStack_b8 = 0x3f800000;
        uStack_cc = 0x3f800000;
        local_e0 = 0x3f800000;
        if (local_158 != 0.0) {
          D3DXMatrixRotationZ();
          D3DXMatrixMultiply();
        }
        if (local_15c != 0.0) {
          D3DXMatrixRotationY();
          D3DXMatrixMultiply();
        }
        if (local_160 != 0.0) {
          D3DXMatrixRotationX();
          D3DXMatrixMultiply();
        }
        D3DXMatrixMultiply();
      }
      FID_conflict__memcpy(auStack_60,param_2,0x40);
      fStack_1b0 = *(float *)(param_1 + 0x100);
      if ((*(byte *)(param_1 + 0x3c) & 0x40) == 0) {
        uStack_14c = (double)CONCAT44(uStack_14c._4_4_,*(undefined4 *)(param_1 + 0x104));
        uStack_1ac = (double)CONCAT44(0x3f800000,*(undefined4 *)(param_1 + 0x104));
        fStack_1a4 = fStack_144;
        fStack_150 = fStack_1b0;
      }
      else {
        fStack_19c = *(float *)(param_1 + 0x104);
        fStack_198 = *(float *)(param_1 + 0x108);
        uStack_1ac = *(double *)(param_1 + 0x104);
        fStack_1a4 = fStack_194;
        fStack_1a0 = fStack_1b0;
      }
      FUN_00ddd140();
      D3DXMatrixMultiply();
      fStack_1d4 = 0.0;
      D3DXVec3TransformNormal();
      param_2[0xc] = param_2[0xc] + local_188;
      param_2[0xd] = local_184 + param_2[0xd];
      param_2[0xe] = param_2[0xe] + fStack_180;
      D3DXVec3TransformNormal();
      fStack_54 = fStack_54 + fStack_194;
      fStack_50 = fStack_50 + local_190;
      fStack_4c = fStack_4c + local_18c;
      fStack_164 = -0.5;
      local_160 = -0.5;
      local_15c = 0.0;
      D3DXVec3TransformNormal();
      if (afStack_12c != param_2) {
        FID_conflict__memcpy(afStack_12c,param_2,0x40);
      }
      local_fc = local_fc + fStack_1bc;
      goto LAB_00f06e69;
    }
    iVar3 = *(int *)(param_1 + 0x50);
    fStack_1b0 = *(float *)(param_1 + 0x180) + *(float *)(param_1 + 0x170);
    fStack_19c = *(float *)(param_1 + 0x174) + *(float *)(param_1 + 0x184);
    fStack_198 = *(float *)(param_1 + 0x178) + *(float *)(param_1 + 0x188);
    uStack_1ac = (double)CONCAT44(fStack_198,fStack_19c);
    fStack_1a4 = *(float *)(param_1 + 0x17c) + *(float *)(param_1 + 0x18c);
    fVar6 = fStack_1b0 + local_190;
    fStack_19c = fStack_19c + local_18c;
    fStack_198 = fStack_198 + local_188;
    fStack_194 = local_184 + fStack_1a4;
    fStack_1a0 = fVar6;
    if (iVar3 == 0) {
      D3DXMatrixTranslation();
      D3DXMatrixMultiply();
    }
    else {
      D3DXVec3TransformNormal();
      fStack_1d4 = *(float *)(iVar3 + 0x48) + fStack_1d4;
      D3DXMatrixTranslation();
      FID_conflict__memcpy(&local_fc,(void *)(*(int *)(param_1 + 0x50) + 0x10),0x40);
      uStack_c4 = 0;
      uStack_c8 = 0;
      uStack_cc = 0;
      fVar6 = param_2[0xc];
      fVar11 = param_2[0xd];
      fVar10 = param_2[0xe];
      FID_conflict__memcpy(param_2,&local_fc,0x40);
      param_2[0xc] = fVar6;
      param_2[0xd] = fVar11;
      param_2[0xe] = fVar10;
    }
    uStack_c4 = 0;
    uStack_c8 = 0;
    uStack_cc = 0;
    uStack_d0 = 0;
    uStack_d8 = 0;
    uStack_dc = 0;
    local_e0 = 0;
    uStack_e4 = 0;
    uStack_ec = 0;
    uStack_f0 = 0;
    local_f4 = 0.0;
    local_f8 = 0.0;
    uStack_c0 = 0x3f800000;
    uStack_d4 = 0x3f800000;
    uStack_e8 = 0x3f800000;
    local_fc = 1.0;
    if (local_174 != 0.0) {
      D3DXMatrixRotationZ();
      D3DXMatrixMultiply();
    }
    if (fStack_178 != 0.0) {
      D3DXMatrixRotationY();
      D3DXMatrixMultiply();
    }
    if (fStack_17c != 0.0) {
      D3DXMatrixRotationX();
      D3DXMatrixMultiply();
    }
    pfVar2 = param_2;
    D3DXMatrixMultiply();
    fVar11 = param_2[4];
    fStack_144 = param_2[5];
    fStack_140 = param_2[6];
    uStack_14c = (double)CONCAT44(fVar11,(undefined4)uStack_14c);
    fVar11 = fStack_140 * fStack_140 + fVar11 * fVar11 + fStack_144 * fStack_144;
    fStack_13c = fVar6;
    if (fVar11 < 0.0 == (fVar11 == 0.0)) {
      FUN_00ddf460();
    }
    else {
      FUN_00dd5650();
      uStack_14c = (double)((ulonglong)uStack_14c & 0xffffffff);
      fStack_144 = 1.0;
      fStack_140 = 0.0;
    }
    pfVar4 = (float *)FUN_00e9fe70();
    pfVar5 = (float *)FUN_00e9feb0();
    local_158 = *pfVar5 - *pfVar4;
    fStack_154 = pfVar5[1] - pfVar4[1];
    fStack_150 = pfVar5[2] - pfVar4[2];
    fVar6 = pfVar5[3] - pfVar4[3];
    uStack_14c = (double)CONCAT44(uStack_14c._4_4_,fVar6);
    fVar11 = fStack_150 * fStack_150 + fStack_154 * fStack_154 + local_158 * local_158;
    if (fVar11 < 0.0 == (fVar11 == 0.0)) {
      FUN_00ddf460();
    }
    else {
      FUN_00dd5650();
      local_158 = 0.0;
      fStack_154 = 1.0;
      fStack_150 = 0.0;
    }
    local_188 = fStack_150 * fStack_144 - fStack_154 * fStack_140;
    local_184 = local_158 * fStack_140 - uStack_14c._4_4_ * fStack_150;
    fStack_180 = uStack_14c._4_4_ * fStack_154 - local_158 * fStack_144;
    fVar11 = local_188 * local_188 + local_184 * local_184 + fStack_180 * fStack_180;
    fStack_138 = local_188;
    fStack_134 = local_184;
    fStack_130 = fStack_180;
    if (fVar11 < 0.0 == (fVar11 == 0.0)) {
      FUN_00ddf460();
    }
    else {
      FUN_00dd5650();
      fStack_138 = 0.0;
      fStack_134 = 1.0;
      fStack_130 = 0.0;
    }
    local_188 = fStack_134 * fStack_140 - fStack_130 * fStack_144;
    uStack_16c = (double)CONCAT44(local_188,(float)uStack_16c);
    local_184 = uStack_14c._4_4_ * fStack_130 - fStack_138 * fStack_140;
    fStack_180 = fStack_144 * fStack_138 - fStack_134 * uStack_14c._4_4_;
    fVar11 = local_188 * local_188 + local_184 * local_184 + fStack_180 * fStack_180;
    fStack_164 = local_184;
    local_160 = fStack_180;
    if (fVar11 < 0.0 == (fVar11 == 0.0)) {
      FUN_00ddf460();
    }
    else {
      FUN_00dd5650();
      uStack_16c = (double)((ulonglong)uStack_16c & 0xffffffff);
      fStack_164 = 1.0;
      local_160 = 0.0;
    }
    *param_2 = -fStack_138;
    param_2[1] = -fStack_134;
    param_2[2] = -fStack_130;
    param_2[4] = uStack_14c._4_4_;
    param_2[5] = fStack_144;
    param_2[6] = fStack_140;
    param_2[8] = uStack_16c._4_4_;
    param_2[9] = fStack_164;
    param_2[10] = local_160;
    FID_conflict__memcpy(&fStack_88,param_2,0x40);
    fStack_1d4 = *(float *)(param_1 + 0x104);
    if ((*(byte *)(param_1 + 0x3c) & 0x40) == 0) {
      fStack_1d0 = 1.0;
    }
    else {
      fStack_1d0 = *(float *)(param_1 + 0x108);
    }
    fStack_1cc = fVar6;
    FUN_00ddd140();
    puVar8 = &uStack_c8;
    pfVar5 = param_2;
    pfVar9 = param_2;
    D3DXMatrixMultiply();
    local_184 = *(float *)((int)uStack_1ac._4_4_ + 0x14);
    fStack_180 = *(float *)((int)uStack_1ac._4_4_ + 0x18);
    pfVar4 = &local_184;
    fStack_17c = 0.0;
    D3DXVec3TransformNormal();
    param_2[0xc] = (float)puVar8 + param_2[0xc];
    param_2[0xd] = (float)pfVar9 + param_2[0xd];
    param_2[0xe] = param_2[0xe] + (float)pfVar2;
    D3DXVec3TransformNormal(&stack0xfffffdf0,&local_190,auStack_a0);
    fStack_7c = (float)pfVar4 + fStack_7c;
    fStack_78 = fStack_78 + (float)param_2;
    fStack_74 = fStack_74 + (float)pfVar5;
    fStack_1bc = -0.5;
    fStack_1b8 = -0.5;
    local_1b4 = 0.0;
    D3DXVec3TransformNormal(&stack0xfffffde4,&fStack_1bc,param_2);
    if (afStack_12c != param_2) {
      FID_conflict__memcpy(afStack_12c,param_2,0x40);
    }
    local_fc = (float)pfVar4 + local_fc;
    local_f8 = local_f8 + (float)param_2;
    local_f4 = local_f4 + (float)pfVar5;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x50);
    fStack_1b0 = *(float *)(param_1 + 0x180) + *(float *)(param_1 + 0x170);
    fStack_1cc = *(float *)(param_1 + 0x174) + *(float *)(param_1 + 0x184);
    fStack_1c8 = *(float *)(param_1 + 0x178) + *(float *)(param_1 + 0x188);
    uStack_1ac = (double)CONCAT44(fStack_1c8,fStack_1cc);
    fStack_1a4 = *(float *)(param_1 + 0x17c) + *(float *)(param_1 + 0x18c);
    fStack_1d0 = fStack_1b0 + local_190;
    fStack_1cc = fStack_1cc + local_18c;
    fStack_1c8 = fStack_1c8 + local_188;
    fStack_1c4 = local_184 + fStack_1a4;
    if (iVar3 != 0) {
      D3DXVec3TransformNormal();
      fStack_140 = fStack_140 + *(float *)(iVar3 + 0x40);
      fStack_13c = *(float *)(iVar3 + 0x44) + fStack_13c;
      fStack_138 = *(float *)(iVar3 + 0x48) + fStack_138;
    }
    D3DXMatrixTranslation();
    iVar3 = FUN_00e9fe30();
    uStack_16c = (double)CONCAT44(uStack_16c._4_4_,*(float *)(iVar3 + 0x134) + (float)uStack_16c);
    uStack_b8 = 0;
    uStack_bc = 0;
    uStack_c0 = 0;
    uStack_c4 = 0;
    uStack_cc = 0;
    uStack_d0 = 0;
    uStack_d4 = 0;
    uStack_d8 = 0;
    local_e0 = 0;
    uStack_e4 = 0;
    uStack_e8 = 0;
    uStack_ec = 0;
    uStack_b4 = 0x3f800000;
    uStack_c8 = 0x3f800000;
    uStack_dc = 0x3f800000;
    uStack_f0 = 0x3f800000;
    if (uStack_16c._4_4_ != 0.0) {
      D3DXMatrixRotationZ();
      D3DXMatrixMultiply();
    }
    if ((float)uStack_16c != 0.0) {
      D3DXMatrixRotationY();
      D3DXMatrixMultiply();
    }
    if (fStack_170 != 0.0) {
      D3DXMatrixRotationX();
      D3DXMatrixMultiply();
    }
    D3DXMatrixMultiply();
    FID_conflict__memcpy(&fStack_7c,param_2,0x40);
    fStack_1bc = *(float *)(param_1 + 0x100);
    fStack_1b8 = *(float *)(param_1 + 0x104);
    uStack_14c = *(double *)(param_1 + 0x100);
    if ((*(byte *)(param_1 + 0x3c) & 0x40) == 0) {
      fStack_144 = 1.0;
    }
    else {
      fStack_144 = *(float *)(param_1 + 0x108);
      local_1b4 = fStack_144;
    }
    fStack_140 = fStack_1b0;
    FUN_00ddd140();
    D3DXMatrixMultiply();
    fStack_1d4 = *(float *)((int)fStack_19c + 0x18);
    fStack_1d0 = 0.0;
    D3DXVec3TransformNormal();
    param_2[0xc] = local_184 + param_2[0xc];
    param_2[0xd] = fStack_180 + param_2[0xd];
    param_2[0xe] = param_2[0xe] + fStack_17c;
    D3DXVec3TransformNormal();
    fStack_70 = local_190 + fStack_70;
    fStack_6c = fStack_6c + local_18c;
    fStack_68 = fStack_68 + local_188;
    fStack_150 = -0.5;
    uStack_14c = 1.5832077971655e-314;
    D3DXVec3TransformNormal(&local_190,&fStack_150,param_2);
    if (afStack_12c != param_2) {
      FID_conflict__memcpy(afStack_12c,param_2,0x40);
    }
    local_fc = fStack_19c + local_fc;
    local_f8 = local_f8 + fStack_198;
    local_f4 = local_f4 + fStack_194;
  }
  *(float *)(param_1 + 0x130) = local_fc;
  *(float *)(param_1 + 0x134) = local_f8;
  *(float *)(param_1 + 0x138) = local_f4;
  *(float *)(param_1 + 0x13c) = fStack_1b0;
LAB_00f06ec5:
  esp107::vf10();
  if ((*(uint *)(param_1 + 0x3c) & 0x100000) != 0) {
    iVar3 = FUN_009d49d0();
    if ((*(byte *)(iVar3 + 0x1c) == 0) && (*(char *)(iVar3 + 0x1d) == '\0')) {
      uStack_1ac = (double)CONCAT44(fStack_78,fStack_7c);
      fStack_1a4 = fStack_74;
      pfVar2 = (float *)FUN_00e9fe70();
      fVar6 = *pfVar2 - (float)uStack_1ac;
      fVar11 = pfVar2[1] - uStack_1ac._4_4_;
      fStack_1d4 = pfVar2[2] - fStack_1a4;
      fVar10 = fStack_1d4 * fStack_1d4 + fVar6 * fVar6 + fVar11 * fVar11;
      if (fVar10 < 0.0 == (fVar10 == 0.0)) {
        fStack_1d0 = unaff_EDI;
        FUN_00ddf460(&stack0xfffffe24,&stack0xfffffe24);
      }
      else {
        fStack_1d0 = unaff_EDI;
        FUN_00dd5650(&DAT_0163d0ac);
        fVar6 = 0.0;
        fVar11 = 1.0;
        fStack_1d4 = 0.0;
      }
      fVar6 = ABS(fStack_1d4 * afStack_84[0] + fVar6 * fStack_8c + fVar11 * fStack_88);
      fVar6 = fVar6 * fVar6;
    }
    else {
      fStack_134 = (float)*(byte *)(iVar3 + 0x1c);
      fStack_130 = (float)*(byte *)(iVar3 + 0x1d);
      uStack_1ac._0_4_ = fStack_7c;
      uStack_1ac._4_4_ = fStack_78;
      fStack_1a4 = fStack_74;
      pfVar2 = (float *)FUN_00e9fe70();
      fVar6 = *pfVar2 - (float)uStack_1ac;
      fVar11 = pfVar2[1] - uStack_1ac._4_4_;
      fStack_1d4 = pfVar2[2] - fStack_1a4;
      fVar10 = fStack_1d4 * fStack_1d4 + fVar6 * fVar6 + fVar11 * fVar11;
      if (fVar10 < 0.0 == (fVar10 == 0.0)) {
        fStack_1d0 = unaff_EDI;
        FUN_00ddf460(&stack0xfffffe24,&stack0xfffffe24);
      }
      else {
        fStack_1d0 = unaff_EDI;
        FUN_00dd5650(&DAT_0163d0ac);
        fVar6 = 0.0;
        fVar11 = 1.0;
        fStack_1d4 = 0.0;
      }
      uStack_16c = (double)fVar11;
      uStack_14c = (double)fVar6;
      uStack_1ac = (double)fStack_1d4;
      fStack_1c0 = ABS(fVar11 * fStack_88 + fVar6 * fStack_8c + afStack_84[0] * fStack_1d4);
      FUN_00fdef70();
      FUN_00fdef70();
      fVar7 = (float10)FUN_00fdc4e0();
      fVar11 = 90.0 - (float)fVar7 * 57.295776;
      fStack_1c0 = 1.0;
      fVar6 = fStack_1c0;
      if ((fVar11 < fStack_130) &&
         (fStack_1c0 = (fVar11 - fStack_134) / (fStack_130 - fStack_134), fVar6 = fStack_1c0,
         1.0 < fStack_1c0)) {
        fStack_1c0 = 1.0;
        fVar6 = fStack_1c0;
      }
    }
    *(float *)(param_1 + 0x124) = fVar6 * *(float *)(param_1 + 0x124);
  }
  __security_check_cookie(auStack_60[0] ^ (uint)&stack0xfffffde0);
  return;
}

// 00F072D0  FUN_00f072d0  size=1485  [run]
/* WARNING: Type propagation algorithm not settling */

void __thiscall FUN_00f072d0(int param_1,undefined4 *param_2)

{
  float fVar1;
  float *_Src;
  void *_Dst;
  undefined4 *puVar2;
  uint *puVar3;
  int iVar4;
  float **ppfStack_1c4;
  undefined1 *puStack_1c0;
  void *pvStack_1bc;
  undefined4 **ppuStack_1b8;
  float *pfStack_1b4;
  float *pfStack_1b0;
  void *pvStack_1ac;
  undefined4 *puStack_1a8;
  void *pvStack_1a4;
  undefined4 *puStack_1a0;
  undefined4 uStack_19c;
  float *pfStack_198;
  undefined4 *puStack_194;
  float *pfStack_190;
  uint *puStack_18c;
  uint *puStack_188;
  float *pfVar5;
  float *pfVar6;
  float *pfStack_178;
  undefined4 *puStack_174;
  float *pfStack_170;
  undefined4 *puStack_16c;
  uint *puStack_168;
  undefined4 *puStack_164;
  undefined1 *puStack_160;
  undefined4 uStack_15c;
  undefined4 **ppuStack_158;
  float *pfStack_154;
  float *pfStack_150;
  undefined4 *puStack_14c;
  undefined4 *puStack_148;
  float *pfStack_144;
  float afStack_134 [4];
  undefined4 *local_124;
  float local_120;
  float local_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  undefined4 *apuStack_10c [3];
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined1 auStack_e0 [4];
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  uint auStack_a4 [11];
  undefined1 auStack_78 [100];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)afStack_134;
  local_e8 = param_2[0xc];
  _Src = (float *)*param_2;
  _Dst = (void *)param_2[1];
  local_120 = *(float *)(param_1 + 0x1c0);
  local_124 = param_2;
  local_11c = *(float *)(param_1 + 0x1c4);
  local_118 = *(float *)(param_1 + 0x1c8);
  if (((local_120 != 0.0) || (local_11c != 0.0)) || (local_e4 = 0, local_118 != 0.0)) {
    local_e4 = 1;
  }
  if ((*(int *)(param_1 + 0x58) == 0) ||
     (puVar3 = (uint *)(*(int *)(param_1 + 0x58) + 0x30), puVar3 == (uint *)0x0)) {
    local_124 = (undefined4 *)0x0;
    puVar2 = local_124;
  }
  else {
    afStack_134[3] = (float)*puVar3;
    puVar2 = (undefined4 *)(uint)afStack_134[3];
    if ((float)((int)afStack_134[3] + 0xfU & 0xfffffff0) != afStack_134[3]) {
      pfStack_144 = (float *)0x3;
      puStack_148 = (undefined4 *)0xf07390;
      puStack_148 = (undefined4 *)FUN_00f59ed0();
      puStack_14c = (undefined4 *)&DAT_016597b4;
      pfStack_150 = (float *)0xf0739b;
      FUN_00dd5650();
      param_2 = local_124;
      puVar2 = (undefined4 *)afStack_134[3];
    }
  }
  local_124 = puVar2;
  _Src[0xe] = 0.0;
  _Src[0xd] = 0.0;
  puStack_148 = param_2 + 8;
  _Src[0xc] = 0.0;
  _Src[0xb] = 0.0;
  puStack_14c = &local_d0;
  _Src[9] = 0.0;
  _Src[8] = 0.0;
  _Src[7] = 0.0;
  _Src[6] = 0.0;
  _Src[4] = 0.0;
  _Src[3] = 0.0;
  _Src[2] = 0.0;
  _Src[1] = 0.0;
  _Src[0xf] = 1.0;
  _Src[10] = 1.0;
  _Src[5] = 1.0;
  *_Src = 1.0;
  pfStack_150 = (float *)0xf073ec;
  pfStack_144 = _Src;
  D3DXVec3TransformNormal();
  _Src[0xc] = _Src[0xc] + fStack_dc;
  _Src[0xd] = _Src[0xd] + fStack_d8;
  _Src[0xe] = fStack_d4 + _Src[0xe];
  pfStack_150 = (float *)0xf0740f;
  iVar4 = FUN_00f98a90();
  afStack_134[0] = (float)(iVar4 / 2);
  fStack_110 = (float)(int)afStack_134[0];
  pfStack_150 = (float *)0xf07425;
  iVar4 = FUN_00f98aa0();
  afStack_134[0] = (float)(iVar4 / 2);
  pfStack_154 = &fStack_dc;
  ppuStack_158 = apuStack_10c;
  fStack_dc = fStack_110;
  fStack_d4 = -10.0;
  uStack_15c = 0xf07466;
  pfStack_150 = _Src;
  fStack_d8 = afStack_134[0];
  D3DXVec3TransformNormal();
  _Src[0xc] = _Src[0xc] + local_118;
  _Src[0xd] = _Src[0xd] + fStack_114;
  _Src[0xe] = fStack_110 + _Src[0xe];
  auStack_a4[9] = 0;
  auStack_a4[8] = 0;
  auStack_a4[7] = 0;
  auStack_a4[6] = 0;
  auStack_a4[4] = 0;
  auStack_a4[3] = 0;
  auStack_a4[2] = 0;
  auStack_a4[1] = 0;
  uStack_a8 = 0;
  uStack_ac = 0;
  uStack_b0 = 0;
  uStack_b4 = 0;
  auStack_a4[10] = 0x3f800000;
  auStack_a4[5] = 0x3f800000;
  puStack_160 = auStack_78;
  auStack_a4[0] = 0x3f800000;
  uStack_b8 = 0x3f800000;
  uStack_15c = 0x40490fdb;
  puStack_164 = (undefined4 *)0xf0750f;
  D3DXMatrixRotationX();
  puStack_16c = &uStack_c0;
  puStack_168 = auStack_a4 + 9;
  pfStack_170 = (float *)0xf07527;
  puStack_164 = puStack_16c;
  D3DXMatrixMultiply();
  puStack_174 = &uStack_cc;
  pfStack_178 = _Src;
  pfStack_170 = _Src;
  D3DXMatrixMultiply();
  if (local_11c != 0.0) {
    auStack_a4[1] = 0;
    auStack_a4[0] = 0;
    uStack_a8 = 0;
    uStack_ac = 0;
    uStack_b4 = 0;
    uStack_b8 = 0;
    uStack_bc = 0;
    uStack_c0 = 0;
    uStack_c8 = 0;
    uStack_cc = 0;
    local_d0 = 0;
    fStack_d4 = 0.0;
    auStack_a4[2] = 0x3f800000;
    uStack_b0 = 0x3f800000;
    uStack_c4 = 0x3f800000;
    fStack_d8 = 1.0;
    if ((float)pfStack_150 != 0.0) {
      D3DXMatrixRotationZ();
      puStack_18c = (uint *)auStack_e0;
      puStack_188 = auStack_a4 + 1;
      pfStack_190 = (float *)0xf075f1;
      D3DXMatrixMultiply();
    }
    if ((float)pfStack_154 != 0.0) {
      D3DXMatrixRotationY();
      puStack_18c = (uint *)auStack_e0;
      puStack_188 = auStack_a4 + 1;
      pfStack_190 = (float *)0xf07633;
      D3DXMatrixMultiply();
    }
    if ((float)ppuStack_158 != 0.0) {
      D3DXMatrixRotationX();
      puStack_18c = (uint *)auStack_e0;
      puStack_188 = auStack_a4 + 1;
      pfStack_190 = (float *)0xf07673;
      D3DXMatrixMultiply();
    }
    puStack_188 = (uint *)0xf07686;
    D3DXMatrixMultiply();
  }
  puStack_188 = (uint *)0xf0768f;
  FID_conflict__memcpy(_Dst,_Src,0x40);
  if ((*(byte *)(param_1 + 0x3c) & 0x40) == 0) {
    fVar1 = *(float *)(param_1 + 0x100);
  }
  else {
    fVar1 = *(float *)(param_1 + 0x108);
  }
  ppuStack_158 = (undefined4 **)(fVar1 * 100.0);
  pfStack_154 = (float *)(*(float *)(param_1 + 0x104) * 100.0);
  fStack_110 = 1.0;
  apuStack_10c[0] = puStack_14c;
  local_118 = (float)ppuStack_158;
  fStack_114 = (float)pfStack_154;
  FUN_00ddd140();
  puVar3 = auStack_a4 + 3;
  puStack_188 = (uint *)0xf07700;
  pfVar5 = _Src;
  pfVar6 = _Src;
  D3DXMatrixMultiply();
  puStack_18c = auStack_a4;
  puStack_188 = (uint *)afStack_134[2];
  pfStack_190 = (float *)0xf07715;
  D3DXMatrixRotationY();
  puStack_194 = &uStack_ac;
  uStack_19c = 0xf07724;
  pfStack_198 = _Src;
  pfStack_190 = _Src;
  D3DXMatrixMultiply();
  puStack_1a0 = &uStack_b8;
  pvStack_1a4 = (void *)0xf07739;
  D3DXMatrixRotationY();
  puStack_1a8 = &uStack_c0;
  pfStack_1b0 = (float *)0xf07748;
  pvStack_1ac = _Dst;
  pvStack_1a4 = _Dst;
  D3DXMatrixMultiply();
  pfStack_170 = (float *)pfStack_190[6];
  pfStack_1b4 = afStack_134 + 2;
  afStack_134[2] = pfStack_190[5];
  ppuStack_1b8 = &puStack_16c;
  local_124 = (undefined4 *)0x0;
  pvStack_1bc = (void *)0xf07784;
  pfStack_1b0 = _Src;
  afStack_134[3] = (float)pfStack_170;
  D3DXVec3TransformNormal();
  puStack_1c0 = &stack0xfffffec8;
  ppfStack_1c4 = &pfStack_178;
  _Src[0xc] = (float)pfStack_178 + _Src[0xc];
  _Src[0xd] = (float)puStack_174 + _Src[0xd];
  _Src[0xe] = (float)pfStack_170 + _Src[0xe];
  pvStack_1bc = _Dst;
  D3DXVec3TransformNormal();
  *(float *)((int)_Dst + 0x30) = (float)pfVar5 + *(float *)((int)_Dst + 0x30);
  *(float *)((int)_Dst + 0x34) = (float)puVar3 + *(float *)((int)_Dst + 0x34);
  *(float *)((int)_Dst + 0x38) = (float)pfVar6 + *(float *)((int)_Dst + 0x38);
  afStack_134[0] = -0.5;
  afStack_134[1] = -0.5;
  afStack_134[2] = 0.0;
  D3DXVec3TransformNormal(&stack0xfffffe7c,afStack_134,_Src);
  if (afStack_134 + 1 != _Src) {
    FID_conflict__memcpy(afStack_134 + 1,_Src,0x40);
  }
  fStack_100 = fStack_100 + (float)pfStack_190;
  fStack_fc = fStack_fc + (float)puStack_18c;
  fStack_f8 = fStack_f8 + (float)puStack_188;
  *(float *)(param_1 + 0x130) = fStack_100;
  *(float *)(param_1 + 0x134) = fStack_fc;
  *(float *)(param_1 + 0x138) = fStack_f8;
  *(float *)(param_1 + 0x13c) = afStack_134[0];
  __security_check_cookie(auStack_a4[0] ^ (uint)&ppfStack_1c4);
  return;
}

// 00F078A0  FUN_00f078a0  size=1279  [run]
void __thiscall FUN_00f078a0(int param_1,undefined4 *param_2)

{
  float fVar1;
  void *_Dst;
  uint *_Src;
  uint *puVar2;
  int iVar3;
  float unaff_EBX;
  float unaff_ESI;
  float unaff_EDI;
  undefined4 **ppuStack_1a8;
  float *pfStack_1a4;
  void *pvStack_1a0;
  undefined4 *puStack_19c;
  uint *puStack_198;
  uint *puStack_194;
  void *pvStack_190;
  undefined4 *puStack_18c;
  void *pvStack_188;
  undefined4 *puStack_184;
  undefined4 uStack_180;
  uint *puStack_17c;
  undefined4 *puStack_178;
  uint *puStack_174;
  uint *puStack_170;
  undefined4 uStack_16c;
  undefined1 auStack_134 [4];
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  uint local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  uint uStack_100;
  uint uStack_fc;
  int local_f8;
  undefined4 local_f4;
  float fStack_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint auStack_88 [29];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_134;
  local_f4 = param_2[0xc];
  _Dst = (void *)param_2[1];
  local_e0 = (float)param_2[4];
  local_dc = (float)param_2[5];
  _Src = (uint *)*param_2;
  local_d8 = (float)param_2[6];
  local_d4 = (float)param_2[7];
  local_130 = *(undefined4 *)(param_1 + 0x1c0);
  local_12c = *(undefined4 *)(param_1 + 0x1c4);
  local_128 = *(undefined4 *)(param_1 + 0x1c8);
  if ((*(int *)(param_1 + 0x58) == 0) ||
     (puVar2 = (uint *)(*(int *)(param_1 + 0x58) + 0x30), puVar2 == (uint *)0x0)) {
    local_114 = 0;
  }
  else {
    local_114 = *puVar2;
    if ((local_114 + 0xf & 0xfffffff0) != local_114) {
      FUN_00f59ed0();
      FUN_00dd5650();
    }
  }
  local_110 = *(float *)(param_1 + 0x180) + *(float *)(param_1 + 0x170);
  local_10c = *(float *)(param_1 + 0x174) + *(float *)(param_1 + 0x184);
  local_108 = *(float *)(param_1 + 0x178) + *(float *)(param_1 + 0x188);
  local_104 = *(float *)(param_1 + 0x17c) + *(float *)(param_1 + 0x18c);
  local_d0 = local_110 + local_e0;
  local_cc = local_10c + local_dc;
  local_c8 = local_108 + local_d8;
  local_c4 = local_104 + local_d4;
  if (*(int *)(param_1 + 0x50) != 0) {
    local_f8 = *(int *)(param_1 + 0x50) + 0x10;
    D3DXVec3TransformNormal();
    local_110 = *(float *)(local_f8 + 0x30) + local_110;
    local_10c = *(float *)(local_f8 + 0x34) + local_10c;
    local_108 = *(float *)(local_f8 + 0x38) + local_108;
  }
  D3DXMatrixTranslation();
  iVar3 = FUN_00e9fe30();
  fVar1 = *(float *)(iVar3 + 0x134);
  auStack_88[4] = 0;
  auStack_88[3] = 0;
  auStack_88[2] = 0;
  auStack_88[1] = 0;
  uStack_8c = 0;
  uStack_90 = 0;
  uStack_94 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_a4 = 0;
  uStack_a8 = 0;
  uStack_ac = 0;
  auStack_88[5] = 0x3f800000;
  auStack_88[0] = 0x3f800000;
  uStack_9c = 0x3f800000;
  uStack_b0 = 0x3f800000;
  if (unaff_EBX != 0.0) {
    D3DXMatrixRotationZ();
    D3DXMatrixMultiply();
  }
  if (fVar1 + unaff_ESI != 0.0) {
    D3DXMatrixRotationY();
    D3DXMatrixMultiply();
  }
  if (unaff_EDI != 0.0) {
    D3DXMatrixRotationX();
    D3DXMatrixMultiply();
  }
  D3DXMatrixMultiply();
  uStack_16c = 0xf07b9b;
  FID_conflict__memcpy(_Dst,_Src,0x40);
  if ((*(byte *)(param_1 + 0x3c) & 0x40) == 0) {
    local_10c = *(float *)(param_1 + 0x100);
  }
  else {
    local_10c = *(float *)(param_1 + 0x108);
  }
  local_108 = *(float *)(param_1 + 0x104);
  local_104 = 1.0;
  FUN_00ddd140();
  puVar2 = auStack_88 + 3;
  uStack_16c = 0xf07c02;
  D3DXMatrixMultiply();
  puStack_170 = auStack_88;
  uStack_16c = uStack_11c;
  puStack_174 = (uint *)0xf07c17;
  D3DXMatrixRotationY();
  puStack_178 = &uStack_90;
  uStack_180 = 0xf07c26;
  puStack_17c = _Src;
  puStack_174 = _Src;
  D3DXMatrixMultiply();
  puStack_184 = &uStack_9c;
  uStack_180 = local_130;
  pvStack_188 = (void *)0xf07c3b;
  D3DXMatrixRotationY();
  puStack_18c = &uStack_a4;
  puStack_194 = (uint *)0xf07c4a;
  pvStack_190 = _Dst;
  pvStack_188 = _Dst;
  D3DXMatrixMultiply();
  uStack_fc = puVar2[6];
  puStack_19c = &uStack_180;
  uStack_100 = puVar2[5];
  puStack_198 = &uStack_100;
  local_f8 = 0;
  pvStack_1a0 = (void *)0xf07c86;
  puStack_194 = _Src;
  D3DXVec3TransformNormal();
  pfStack_1a4 = &local_10c;
  ppuStack_1a8 = &puStack_18c;
  _Src[0xc] = (uint)((float)puStack_18c + (float)_Src[0xc]);
  _Src[0xd] = (uint)((float)pvStack_188 + (float)_Src[0xd]);
  _Src[0xe] = (uint)((float)_Src[0xe] + (float)puStack_184);
  pvStack_1a0 = _Dst;
  D3DXVec3TransformNormal();
  *(float *)((int)_Dst + 0x30) = *(float *)((int)_Dst + 0x30) + (float)puStack_198;
  *(float *)((int)_Dst + 0x34) = (float)puStack_194 + *(float *)((int)_Dst + 0x34);
  *(float *)((int)_Dst + 0x38) = (float)pvStack_190 + *(float *)((int)_Dst + 0x38);
  local_128 = 0xbf000000;
  uStack_124 = 0xbf000000;
  uStack_120 = 0;
  D3DXVec3TransformNormal(&puStack_198,&local_128,_Src);
  if (&local_114 != _Src) {
    FID_conflict__memcpy(&local_114,_Src,0x40);
  }
  fStack_e4 = fStack_e4 + (float)pfStack_1a4;
  local_e0 = local_e0 + (float)pvStack_1a0;
  local_dc = local_dc + (float)puStack_19c;
  *(float *)(param_1 + 0x130) = fStack_e4;
  *(float *)(param_1 + 0x134) = local_e0;
  *(float *)(param_1 + 0x138) = local_dc;
  *(undefined4 *)(param_1 + 0x13c) = local_128;
  __security_check_cookie(auStack_88[0] ^ (uint)&ppuStack_1a8);
  return;
}

// 00F07DA0  FUN_00f07da0  size=2449  [run]
void __thiscall FUN_00f07da0(int param_1,undefined4 *param_2)

{
  float fVar1;
  float *_Dst;
  int iVar2;
  float fVar3;
  uint *puVar4;
  float *pfVar5;
  float *pfVar6;
  void *_Dst_00;
  float unaff_ESI;
  float *pfStack_1f4;
  float *pfStack_1f0;
  void *pvStack_1ec;
  undefined1 *puStack_1e8;
  float *pfStack_1e4;
  float *pfStack_1e0;
  void *pvStack_1dc;
  undefined4 *puStack_1d8;
  void *pvStack_1d4;
  undefined4 *puStack_1d0;
  float fStack_1cc;
  float *pfStack_1c8;
  undefined4 *puStack_1c4;
  float *pfStack_1c0;
  uint *puStack_1bc;
  float fStack_1b8;
  void *local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_138;
  uint local_134;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  undefined4 uStack_108;
  void *local_104;
  undefined4 uStack_100;
  float fStack_fc;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  uint auStack_94 [32];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&local_174;
  local_104 = (void *)param_2[0xc];
  _Dst_00 = (void *)param_2[1];
  local_160 = (float)param_2[4];
  _Dst = (float *)*param_2;
  local_15c = (float)param_2[5];
  local_158 = (float)param_2[6];
  local_154 = (float)param_2[7];
  local_150 = *(float *)(param_1 + 0x1c0);
  local_14c = *(float *)(param_1 + 0x1c4);
  local_148 = *(float *)(param_1 + 0x1c8);
  local_174 = _Dst_00;
  if ((*(int *)(param_1 + 0x58) == 0) ||
     (puVar4 = (uint *)(*(int *)(param_1 + 0x58) + 0x30), puVar4 == (uint *)0x0)) {
    local_134 = 0;
  }
  else {
    local_134 = *puVar4;
    if ((local_134 + 0xf & 0xfffffff0) != local_134) {
      FUN_00f59ed0();
      FUN_00dd5650();
    }
  }
  iVar2 = *(int *)(param_1 + 0x50);
  local_170 = *(float *)(param_1 + 0x180) + *(float *)(param_1 + 0x170);
  local_16c = *(float *)(param_1 + 0x174) + *(float *)(param_1 + 0x184);
  local_168 = *(float *)(param_1 + 0x178) + *(float *)(param_1 + 0x188);
  local_164 = *(float *)(param_1 + 0x17c) + *(float *)(param_1 + 0x18c);
  local_d0 = local_170 + local_160;
  local_cc = local_15c + local_16c;
  local_c8 = local_158 + local_168;
  local_c4 = local_164 + local_154;
  if (iVar2 == 0) {
    D3DXMatrixTranslation();
    D3DXMatrixMultiply();
  }
  else {
    D3DXVec3TransformNormal();
    _Dst_00 = (void *)(*(float *)(iVar2 + 0x48) + (float)local_174);
    local_174 = _Dst_00;
    D3DXMatrixTranslation();
    FID_conflict__memcpy(&uStack_bc,(void *)(*(int *)(param_1 + 0x50) + 0x10),0x40);
    auStack_94[4] = 0;
    auStack_94[3] = 0;
    auStack_94[2] = 0;
    unaff_ESI = _Dst[0xc];
    fVar1 = _Dst[0xd];
    local_174 = (void *)_Dst[0xe];
    fStack_1b8 = 2.2086256e-38;
    FID_conflict__memcpy(_Dst,&uStack_bc,0x40);
    _Dst[0xc] = unaff_ESI;
    _Dst[0xd] = fVar1;
    _Dst[0xe] = (float)local_174;
  }
  auStack_94[4] = 0;
  auStack_94[3] = 0;
  auStack_94[2] = 0;
  auStack_94[1] = 0;
  uStack_98 = 0;
  uStack_9c = 0;
  uStack_a0 = 0;
  uStack_a4 = 0;
  uStack_ac = 0;
  uStack_b0 = 0;
  uStack_b4 = 0;
  uStack_b8 = 0;
  auStack_94[5] = 0x3f800000;
  auStack_94[0] = 0x3f800000;
  uStack_a8 = 0x3f800000;
  uStack_bc = 0x3f800000;
  if (local_164 != 0.0) {
    D3DXMatrixRotationZ();
    D3DXMatrixMultiply();
  }
  if (local_168 != 0.0) {
    D3DXMatrixRotationY();
    D3DXMatrixMultiply();
  }
  if (local_16c != 0.0) {
    D3DXMatrixRotationX();
    D3DXMatrixMultiply();
  }
  D3DXMatrixMultiply();
  local_158 = _Dst[4];
  local_154 = _Dst[5];
  local_150 = _Dst[6];
  fVar1 = local_150 * local_150 + local_158 * local_158 + local_154 * local_154;
  local_14c = unaff_ESI;
  if (fVar1 < 0.0 == (fVar1 == 0.0)) {
    FUN_00ddf460();
  }
  else {
    FUN_00dd5650();
    local_158 = 0.0;
    local_154 = 1.0;
    local_150 = 0.0;
  }
  pfVar5 = (float *)FUN_00e9fe70();
  pfVar6 = (float *)FUN_00e9feb0();
  fStack_128 = *pfVar6 - *pfVar5;
  fStack_124 = pfVar6[1] - pfVar5[1];
  fStack_120 = pfVar6[2] - pfVar5[2];
  fStack_11c = pfVar6[3] - pfVar5[3];
  fVar1 = fStack_120 * fStack_120 + fStack_128 * fStack_128 + fStack_124 * fStack_124;
  if (fVar1 < 0.0 == (fVar1 == 0.0)) {
    FUN_00ddf460();
  }
  else {
    FUN_00dd5650();
    fStack_128 = 0.0;
    fStack_124 = 1.0;
    fStack_120 = 0.0;
  }
  local_148 = local_154 * fStack_120 - local_150 * fStack_124;
  fStack_144 = fStack_128 * local_150 - local_158 * fStack_120;
  fStack_140 = fStack_124 * local_158 - local_154 * fStack_128;
  fVar1 = local_148 * local_148 + fStack_144 * fStack_144 + fStack_140 * fStack_140;
  if (fVar1 < 0.0 == (fVar1 == 0.0)) {
    FUN_00ddf460();
  }
  else {
    FUN_00dd5650();
    local_148 = 0.0;
    fStack_144 = 1.0;
    fStack_140 = 0.0;
  }
  fStack_118 = fStack_144 * local_150 - fStack_140 * local_154;
  fStack_114 = local_158 * fStack_140 - local_148 * local_150;
  fVar1 = local_154 * local_148 - fStack_144 * local_158;
  fVar3 = fStack_118 * fStack_118 + fStack_114 * fStack_114 + fVar1 * fVar1;
  fStack_110 = fVar1;
  if (fVar3 < 0.0 == (fVar3 == 0.0)) {
    FUN_00ddf460();
  }
  else {
    FUN_00dd5650();
    fStack_118 = 0.0;
    fStack_114 = 1.0;
    fStack_110 = 0.0;
  }
  *_Dst = -local_148;
  _Dst[1] = -fStack_144;
  _Dst[2] = -fStack_140;
  _Dst[4] = local_158;
  _Dst[5] = local_154;
  _Dst[6] = local_150;
  _Dst[8] = fStack_118;
  _Dst[9] = fStack_114;
  _Dst[10] = fStack_110;
  fStack_1b8 = 2.2088273e-38;
  FID_conflict__memcpy(_Dst_00,_Dst,0x40);
  if ((*(byte *)(param_1 + 0x3c) & 0x40) == 0) {
    uStack_108 = *(undefined4 *)(param_1 + 0x100);
  }
  else {
    uStack_108 = *(undefined4 *)(param_1 + 0x108);
  }
  local_174 = *(void **)(param_1 + 0x104);
  uStack_100 = 0x3f800000;
  fStack_fc = local_16c;
  local_104 = local_174;
  FUN_00ddd140();
  puVar4 = auStack_94 + 3;
  fStack_1b8 = 2.2088438e-38;
  pfVar5 = _Dst;
  D3DXMatrixMultiply();
  puStack_1bc = auStack_94;
  fStack_1b8 = fStack_138;
  pfStack_1c0 = (float *)0xf085a9;
  D3DXMatrixRotationY();
  puStack_1c4 = &uStack_9c;
  fStack_1cc = 2.2088488e-38;
  pfStack_1c8 = _Dst;
  pfStack_1c0 = _Dst;
  D3DXMatrixMultiply();
  puStack_1d0 = &uStack_a8;
  fStack_1cc = local_14c;
  pvStack_1d4 = (void *)0xf085cd;
  D3DXMatrixRotationY();
  puStack_1d8 = &uStack_b0;
  pfStack_1e0 = (float *)0xf085dc;
  pvStack_1dc = _Dst_00;
  pvStack_1d4 = _Dst_00;
  D3DXMatrixMultiply();
  puStack_1d0 = *(undefined4 **)((int)fVar1 + 0x18);
  puStack_1e8 = &stack0xfffffe54;
  fStack_11c = *(float *)((int)fVar1 + 0x14);
  pfStack_1e4 = &fStack_11c;
  fStack_114 = 0.0;
  pvStack_1ec = (void *)0xf08618;
  pfStack_1e0 = _Dst;
  fStack_118 = (float)puStack_1d0;
  D3DXVec3TransformNormal();
  pfStack_1f0 = &fStack_128;
  pfStack_1f4 = &fStack_1b8;
  _Dst[0xc] = fStack_1b8 + _Dst[0xc];
  _Dst[0xd] = _Dst[0xd] + (float)pfVar5;
  _Dst[0xe] = _Dst[0xe] + (float)puVar4;
  pvStack_1ec = _Dst_00;
  D3DXVec3TransformNormal();
  *(float *)((int)_Dst_00 + 0x30) = *(float *)((int)_Dst_00 + 0x30) + (float)puStack_1c4;
  *(float *)((int)_Dst_00 + 0x34) = *(float *)((int)_Dst_00 + 0x34) + (float)pfStack_1c0;
  *(float *)((int)_Dst_00 + 0x38) = *(float *)((int)_Dst_00 + 0x38) + (float)puStack_1bc;
  fStack_124 = -0.5;
  fStack_120 = -0.5;
  fStack_11c = 0.0;
  D3DXVec3TransformNormal(&puStack_1c4,&fStack_124,_Dst);
  if (&fStack_120 != _Dst) {
    FID_conflict__memcpy(&fStack_120,_Dst,0x40);
  }
  fStack_f0 = fStack_f0 + (float)puStack_1d0;
  fStack_ec = fStack_ec + fStack_1cc;
  fStack_e8 = fStack_e8 + (float)pfStack_1c8;
  *(float *)(param_1 + 0x130) = fStack_f0;
  *(float *)(param_1 + 0x134) = fStack_ec;
  *(float *)(param_1 + 0x138) = fStack_e8;
  *(float *)(param_1 + 0x13c) = fStack_124;
  __security_check_cookie(auStack_94[0] ^ (uint)&pfStack_1f4);
  return;
}

// 00F08740  FUN_00f08740  size=1063  [run]
/* WARNING: Type propagation algorithm not settling */

void __thiscall FUN_00f08740(int param_1,undefined4 *param_2)

{
  undefined1 *_Dst;
  uint *puVar1;
  void *pvVar2;
  undefined4 **ppuStack_14c;
  float *pfStack_148;
  void *pvStack_144;
  undefined4 *puStack_140;
  float *pfStack_13c;
  undefined1 *puStack_138;
  void *pvStack_134;
  undefined4 *puStack_130;
  void *pvStack_12c;
  undefined4 *puStack_128;
  undefined4 uStack_124;
  undefined1 *puStack_120;
  undefined4 *puStack_11c;
  undefined1 *puStack_118;
  uint *puStack_114;
  uint *puStack_110;
  undefined4 uVar3;
  undefined1 auStack_f4 [4];
  float local_f0;
  float local_ec;
  float local_e8;
  float fStack_e4;
  uint local_e0;
  void *local_dc;
  undefined4 local_d8;
  int local_d4;
  float fStack_d0;
  undefined4 uStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  undefined1 auStack_b4 [12];
  undefined1 auStack_a8 [8];
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  uint local_6c [22];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_f4;
  local_d8 = param_2[0xc];
  local_dc = (void *)param_2[1];
  _Dst = (undefined1 *)*param_2;
  local_f0 = *(float *)(param_1 + 0x1c0);
  local_ec = *(float *)(param_1 + 0x1c4);
  local_e8 = *(float *)(param_1 + 0x1c8);
  if (((local_f0 == 0.0) && (local_ec == 0.0)) && (local_e8 == 0.0)) {
    local_d4 = 0;
  }
  else {
    local_d4 = 1;
  }
  if ((*(int *)(param_1 + 0x58) == 0) ||
     (puVar1 = (uint *)(*(int *)(param_1 + 0x58) + 0x30), puVar1 == (uint *)0x0)) {
    local_e0 = 0;
  }
  else {
    local_e0 = *puVar1;
    if ((local_e0 + 0xf & 0xfffffff0) != local_e0) {
      FUN_00f59ed0();
      puStack_110 = (uint *)0xf0880b;
      FUN_00dd5650();
    }
  }
  pvVar2 = (void *)FUN_00e9ff50();
  puStack_110 = (uint *)0xf08824;
  FID_conflict__memcpy(_Dst,pvVar2,0x40);
  *(undefined4 *)(_Dst + 0x30) = param_2[8];
  *(undefined4 *)(_Dst + 0x34) = param_2[9];
  *(undefined4 *)(_Dst + 0x38) = param_2[10];
  if (local_d4 != 0) {
    local_6c[1] = 0;
    local_6c[0] = 0;
    local_70 = 0;
    local_74 = 0;
    local_7c = 0;
    local_80 = 0;
    local_84 = 0;
    local_88 = 0;
    local_90 = 0;
    local_94 = 0;
    local_98 = 0;
    local_9c = 0;
    local_6c[2] = 0x3f800000;
    local_78 = 0x3f800000;
    local_8c = 0x3f800000;
    local_a0 = 0x3f800000;
    if (local_e8 != 0.0) {
      D3DXMatrixRotationZ();
      puStack_114 = (uint *)auStack_a8;
      puStack_110 = local_6c + 1;
      puStack_118 = (undefined1 *)0xf088db;
      D3DXMatrixMultiply();
    }
    if (local_ec != 0.0) {
      D3DXMatrixRotationY();
      puStack_114 = (uint *)auStack_a8;
      puStack_110 = local_6c + 1;
      puStack_118 = (undefined1 *)0xf0891a;
      D3DXMatrixMultiply();
    }
    if (local_f0 == 0.0) {
      puStack_110 = (uint *)0xf08973;
      D3DXMatrixMultiply();
    }
    else {
      D3DXMatrixRotationX();
      puStack_114 = (uint *)auStack_a8;
      puStack_110 = local_6c + 1;
      puStack_118 = (undefined1 *)0xf08957;
      D3DXMatrixMultiply();
      puStack_11c = (undefined4 *)auStack_b4;
      uStack_124 = 0xf08963;
      puStack_120 = _Dst;
      puStack_118 = _Dst;
      D3DXMatrixMultiply();
    }
  }
  pvVar2 = local_dc;
  puStack_110 = (uint *)0xf08984;
  FID_conflict__memcpy(local_dc,_Dst,0x40);
  if ((*(byte *)(param_1 + 0x3c) & 0x40) == 0) {
    local_f0 = *(float *)(param_1 + 0x100);
  }
  else {
    local_f0 = *(float *)(param_1 + 0x108);
  }
  local_ec = *(float *)(param_1 + 0x104);
  fStack_c8 = 1.0;
  fStack_c4 = fStack_e4;
  fStack_d0 = local_f0;
  uStack_cc = local_ec;
  FUN_00ddd140();
  puStack_110 = (uint *)0xf089eb;
  D3DXMatrixMultiply();
  puStack_114 = local_6c;
  puStack_110 = (uint *)fStack_e4;
  puStack_118 = (undefined1 *)0xf08a00;
  D3DXMatrixRotationY();
  puStack_11c = &local_74;
  uStack_124 = 0xf08a0f;
  puStack_120 = _Dst;
  puStack_118 = _Dst;
  D3DXMatrixMultiply();
  puStack_128 = &local_80;
  pvStack_12c = (void *)0xf08a24;
  D3DXMatrixRotationY();
  pvStack_12c = pvVar2;
  puStack_130 = &local_88;
  pvStack_134 = pvVar2;
  puStack_138 = (undefined1 *)0xf08a33;
  D3DXMatrixMultiply();
  puStack_110 = (uint *)puStack_114[6];
  pfStack_13c = &fStack_e4;
  fStack_e4 = (float)puStack_114[5];
  puStack_140 = &uStack_124;
  local_dc = (void *)0x0;
  pvStack_144 = (void *)0xf08a63;
  puStack_138 = _Dst;
  local_e0 = (uint)puStack_110;
  D3DXVec3TransformNormal();
  pvStack_144 = pvVar2;
  pfStack_148 = &local_f0;
  ppuStack_14c = &puStack_130;
  *(float *)(_Dst + 0x30) = *(float *)(_Dst + 0x30) + (float)puStack_130;
  *(float *)(_Dst + 0x34) = *(float *)(_Dst + 0x34) + (float)pvStack_12c;
  *(float *)(_Dst + 0x38) = (float)puStack_128 + *(float *)(_Dst + 0x38);
  D3DXVec3TransformNormal();
  *(float *)((int)pvVar2 + 0x30) = (float)pfStack_13c + *(float *)((int)pvVar2 + 0x30);
  *(float *)((int)pvVar2 + 0x34) = (float)puStack_138 + *(float *)((int)pvVar2 + 0x34);
  *(float *)((int)pvVar2 + 0x38) = *(float *)((int)pvVar2 + 0x38) + (float)pvStack_134;
  uVar3 = 0xbf000000;
  D3DXVec3TransformNormal(&pfStack_13c,&stack0xfffffef4,_Dst);
  if (&stack0xffffff08 != _Dst) {
    FID_conflict__memcpy(&stack0xffffff08,_Dst,0x40);
  }
  fStack_c8 = fStack_c8 + (float)pfStack_148;
  fStack_c4 = fStack_c4 + (float)pvStack_144;
  fStack_c0 = fStack_c0 + (float)puStack_140;
  *(float *)(param_1 + 0x130) = fStack_c8;
  *(float *)(param_1 + 0x134) = fStack_c4;
  *(float *)(param_1 + 0x138) = fStack_c0;
  *(undefined4 *)(param_1 + 0x13c) = uVar3;
  __security_check_cookie(local_6c[0] ^ (uint)&ppuStack_14c);
  return;
}

// 00F08B70  FUN_00f08b70  size=1207  [run]
void __thiscall FUN_00f08b70(int param_1,undefined4 *param_2)

{
  float *_Dst;
  uint *puVar1;
  float unaff_EBX;
  void *_Dst_00;
  float unaff_ESI;
  undefined4 **ppuStack_184;
  undefined4 **ppuStack_180;
  float *pfStack_17c;
  void *pvStack_178;
  undefined4 *puStack_174;
  void *pvStack_170;
  undefined4 *puStack_16c;
  float *pfStack_168;
  float *pfStack_164;
  undefined4 *puStack_160;
  float *pfStack_15c;
  undefined4 *puStack_158;
  float *pfStack_154;
  float *pfVar2;
  float *local_128;
  float *local_124;
  float fStack_114;
  float local_110;
  float local_10c;
  float *local_108;
  void *local_104;
  undefined4 uStack_100;
  uint local_fc;
  void *local_f8;
  undefined4 local_f4;
  float local_e0;
  float *local_dc;
  float *local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&fStack_114;
  local_f4 = param_2[0xc];
  _Dst_00 = (void *)param_2[1];
  local_110 = (float)param_2[4];
  _Dst = (float *)*param_2;
  local_10c = (float)param_2[5];
  local_108 = (float *)param_2[6];
  local_104 = (void *)param_2[7];
  local_f8 = _Dst_00;
  if ((*(int *)(param_1 + 0x58) == 0) ||
     (puVar1 = (uint *)(*(int *)(param_1 + 0x58) + 0x30), puVar1 == (uint *)0x0)) {
    local_fc = 0;
  }
  else {
    local_fc = *puVar1;
    if ((local_fc + 0xf & 0xfffffff0) != local_fc) {
      local_124 = (float *)0x3;
      FUN_00f59ed0();
      FUN_00dd5650();
    }
  }
  local_d0 = *(float *)(param_1 + 0x180) + *(float *)(param_1 + 0x170);
  local_cc = *(float *)(param_1 + 0x174) + *(float *)(param_1 + 0x184);
  local_c8 = *(float *)(param_1 + 0x178) + *(float *)(param_1 + 0x188);
  local_c4 = *(float *)(param_1 + 0x17c) + *(float *)(param_1 + 0x18c);
  local_e0 = local_d0 + local_110;
  local_128 = (float *)(local_cc + local_10c);
  local_124 = (float *)(local_c8 + (float)local_108);
  local_d4 = local_c4 + (float)local_104;
  local_d8 = local_124;
  local_dc = local_128;
  if (*(int *)(param_1 + 0x50) == 0) {
    D3DXMatrixTranslation();
  }
  else {
    pfVar2 = (float *)(*(int *)(param_1 + 0x50) + 0x10);
    local_124 = pfVar2;
    D3DXVec3TransformNormal();
    if (_Dst != pfVar2) {
      FID_conflict__memcpy(_Dst,pfVar2,0x40);
    }
    _Dst[0xc] = _Dst[0xc] + unaff_ESI;
    _Dst[0xd] = unaff_EBX + _Dst[0xd];
    _Dst[0xe] = fStack_114 + _Dst[0xe];
    _Dst_00 = local_104;
    local_128 = &local_e0;
  }
  pfVar2 = _Dst;
  D3DXMatrixMultiply();
  uStack_80 = 0;
  uStack_84 = 0;
  uStack_88 = 0;
  uStack_8c = 0;
  uStack_94 = 0;
  uStack_98 = 0;
  uStack_9c = 0;
  uStack_a0 = 0;
  uStack_a8 = 0;
  uStack_ac = 0;
  uStack_b0 = 0;
  uStack_b4 = 0;
  uStack_7c = 0x3f800000;
  uStack_90 = 0x3f800000;
  uStack_a4 = 0x3f800000;
  uStack_b8 = 0x3f800000;
  if (*(float *)(param_1 + 0x1c8) != 0.0) {
    D3DXMatrixRotationZ();
    D3DXMatrixMultiply();
  }
  if (*(float *)(param_1 + 0x1c4) != 0.0) {
    D3DXMatrixRotationY();
    D3DXMatrixMultiply();
  }
  if (*(float *)(param_1 + 0x1c0) != 0.0) {
    D3DXMatrixRotationX();
    D3DXMatrixMultiply();
  }
  D3DXMatrixMultiply();
  pfStack_154 = (float *)0xf08e3f;
  FID_conflict__memcpy(_Dst_00,_Dst,0x40);
  fStack_114 = *(float *)(param_1 + 0x100);
  local_110 = *(float *)(param_1 + 0x104);
  if ((*(byte *)(param_1 + 0x3c) & 0x40) == 0) {
    local_10c = 1.0;
  }
  else {
    local_10c = *(float *)(param_1 + 0x108);
  }
  local_108 = local_128;
  FUN_00ddd140();
  pfStack_154 = (float *)0xf08ebe;
  D3DXMatrixMultiply();
  puStack_158 = &uStack_90;
  pfStack_154 = local_124;
  pfStack_15c = (float *)0xf08ed3;
  D3DXMatrixRotationY();
  puStack_160 = &uStack_98;
  pfStack_168 = (float *)0xf08ee2;
  pfStack_164 = _Dst;
  pfStack_15c = _Dst;
  D3DXMatrixMultiply();
  pfStack_168 = pfVar2;
  puStack_16c = &uStack_a4;
  pvStack_170 = (void *)0xf08ef7;
  D3DXMatrixRotationY();
  puStack_174 = &uStack_ac;
  pfStack_17c = (float *)0xf08f06;
  pvStack_178 = _Dst_00;
  pvStack_170 = _Dst_00;
  D3DXMatrixMultiply();
  local_104 = (void *)pfStack_154[6];
  ppuStack_180 = &local_108;
  local_108 = (float *)pfStack_154[5];
  ppuStack_184 = &pfStack_168;
  uStack_100 = 0;
  pfStack_17c = _Dst;
  D3DXVec3TransformNormal();
  _Dst[0xc] = _Dst[0xc] + (float)puStack_174;
  _Dst[0xd] = (float)pvStack_170 + _Dst[0xd];
  _Dst[0xe] = (float)puStack_16c + _Dst[0xe];
  local_124 = (float *)0xbf000000;
  D3DXVec3TransformNormal(&puStack_174,&local_124,_Dst);
  if (&local_110 != _Dst) {
    FID_conflict__memcpy(&local_110,_Dst,0x40);
  }
  local_e0 = local_e0 + (float)ppuStack_180;
  local_dc = (float *)((float)local_dc + (float)pfStack_17c);
  local_d8 = (float *)((float)local_d8 + (float)pvStack_178);
  *(float *)(param_1 + 0x130) = local_e0;
  *(float **)(param_1 + 0x134) = local_dc;
  *(float **)(param_1 + 0x138) = local_d8;
  *(float **)(param_1 + 0x13c) = local_124;
  *(float *)((int)_Dst_00 + 0x30) = _Dst[0xc];
  *(float *)((int)_Dst_00 + 0x34) = _Dst[0xd];
  *(float *)((int)_Dst_00 + 0x38) = _Dst[0xe];
  __security_check_cookie(uStack_84 ^ (uint)&ppuStack_184);
  return;
}

