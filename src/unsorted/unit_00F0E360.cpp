// src/unsorted/unit_00F0E360.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F0E360..00F107C0, 7 functions

#include "types.h"

// 00F0E360  FUN_00f0e360  size=2068  [run]
void __thiscall FUN_00f0e360(int param_1,int param_2)

{
  float *_Src;
  int iVar1;
  void *_Src_00;
  uint uVar2;
  undefined4 uVar3;
  uint *puVar4;
  float10 fVar5;
  undefined1 auStack_184 [8];
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float fStack_160;
  undefined1 auStack_15c [4];
  float fStack_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  undefined1 auStack_13c [12];
  float local_130;
  float local_12c;
  float local_128;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  undefined4 uStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  undefined1 auStack_f0 [4];
  undefined1 auStack_ec [12];
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float local_b0;
  float local_ac;
  float local_a8 [2];
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint uStack_2c;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_184;
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
  iVar1 = *(int *)(param_1 + 0x50);
  if (iVar1 == 0) {
    if (&local_e0 != (float *)(param_1 + 0x200)) {
      FID_conflict__memcpy(&local_e0,(float *)(param_1 + 0x200),0x40);
    }
    local_b0 = local_b0 + local_150;
    local_ac = local_ac + local_14c;
    local_a8[0] = local_a8[0] + local_148;
  }
  else {
    _Src = (float *)(iVar1 + 0x10);
    if ((*(uint *)(param_1 + 0x3c) & 0x40000000) == 0) {
      D3DXVec3TransformNormal();
      if (&fStack_f8 != _Src) {
        FID_conflict__memcpy(&fStack_f8,_Src,0x40);
      }
    }
    else {
      local_108 = *_Src;
      local_104 = *(float *)(iVar1 + 0x14);
      local_110 = *(float *)(iVar1 + 0x20);
      local_114 = *(float *)(iVar1 + 0x24);
      local_178 = *(float *)(iVar1 + 0x28);
      local_154 = *(float *)(iVar1 + 0x30);
      local_10c = *(float *)(iVar1 + 0x34);
      local_17c = *(float *)(iVar1 + 0x38);
      local_174 = local_104 * local_104 + local_108 * local_108 +
                  *(float *)(iVar1 + 0x18) * *(float *)(iVar1 + 0x18);
      fVar5 = (float10)FUN_00fdef70();
      local_174 = (float)fVar5;
      local_178 = local_114 * local_114 + local_110 * local_110 + local_178 * local_178;
      local_170 = local_174;
      fVar5 = (float10)FUN_00fdef70();
      local_178 = (float)fVar5;
      local_17c = local_10c * local_10c + local_154 * local_154 + local_17c * local_17c;
      local_16c = local_178;
      fVar5 = (float10)FUN_00fdef70();
      local_17c = (float)fVar5;
      if (local_170 != 0.0) {
        local_170 = 1.0 / local_170;
      }
      if (local_16c != 0.0) {
        local_16c = 1.0 / local_16c;
      }
      local_168 = local_17c;
      if (local_17c != 0.0) {
        local_168 = 1.0 / local_17c;
      }
      FUN_00ddd140();
      D3DXMatrixMultiply();
      D3DXVec3TransformNormal(&local_14c,auStack_15c,auStack_ec);
    }
    fStack_c8 = fStack_c8 + fStack_158;
    fStack_c4 = fStack_c4 + local_154;
    fStack_c0 = fStack_c0 + local_150;
    D3DXMatrixMultiply(&fStack_f8,param_1 + 0x200,&fStack_f8);
  }
  local_b0 = local_b0 + local_130;
  local_ac = local_ac + local_12c;
  local_a8[0] = local_a8[0] + local_128;
  if (*(int *)(param_1 + 0x500) == 1) {
    local_17c = fStack_dc * fStack_dc + local_e0 * local_e0 + fStack_d8 * fStack_d8;
    local_170 = local_b0;
    local_16c = local_ac;
    local_168 = local_a8[0];
    fVar5 = (float10)FUN_00fdef70();
    local_150 = (float)fVar5;
    local_17c = fStack_cc * fStack_cc + fStack_d0 * fStack_d0 + fStack_c8 * fStack_c8;
    fVar5 = (float10)FUN_00fdef70();
    local_14c = (float)fVar5;
    local_17c = fStack_bc * fStack_bc + fStack_c0 * fStack_c0 + fStack_b8 * fStack_b8;
    fVar5 = (float10)FUN_00fdef70();
    local_17c = (float)fVar5;
    local_148 = local_17c;
    D3DXMatrixScaling(&local_e0);
    fStack_c0 = 0.0;
    fStack_bc = 0.0;
    fStack_b8 = 0.0;
    _Src_00 = (void *)FUN_00e9ff30();
    FID_conflict__memcpy(&local_b0,_Src_00,0x40);
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_78 = 0;
    D3DXMatrixMultiply(auStack_f0,auStack_f0,&local_b0);
    local_b0 = local_170;
    local_ac = local_16c;
    local_a8[0] = local_168;
  }
  if (*(int *)(param_1 + 0x500) == 5) {
    FUN_00f01f60();
  }
  else {
    uStack_68 = 0;
    uStack_6c = 0;
    uStack_70 = 0;
    uStack_74 = 0;
    uStack_7c = 0;
    uStack_80 = 0;
    uStack_84 = 0;
    uStack_88 = 0;
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
      D3DXMatrixMultiply(local_a8,&uStack_68);
    }
    if (*(float *)(param_1 + 0x1c4) != 0.0) {
      D3DXMatrixRotationY();
      D3DXMatrixMultiply(local_a8,&uStack_68);
    }
    if (*(float *)(param_1 + 0x1c0) != 0.0) {
      D3DXMatrixRotationX();
      D3DXMatrixMultiply(local_a8,&uStack_68);
    }
    D3DXMatrixMultiply();
  }
  uStack_100 = *(undefined4 *)(param_2 + 0x70);
  fStack_fc = *(float *)(param_2 + 0x74);
  fStack_f8 = *(float *)(param_2 + 0x78);
  FUN_00ddd140();
  D3DXMatrixMultiply();
  if ((*(int *)(param_1 + 0x58) == 0) ||
     (puVar4 = (uint *)(*(int *)(param_1 + 0x58) + 0xf0), puVar4 == (uint *)0x0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar4;
    if ((uVar2 + 0xf & 0xfffffff0) != uVar2) {
      uVar3 = FUN_00f59ed0(0xf);
      FUN_00dd5650(&DAT_016597b4,uVar3);
    }
  }
  fStack_f8 = *(float *)(uVar2 + 8) - 0.5;
  fStack_160 = *(float *)(uVar2 + 0xc) - 0.5;
  fStack_fc = *(float *)(uVar2 + 4) - 0.5;
  fStack_f4 = fStack_160;
  D3DXVec3TransformNormal(auStack_13c,&fStack_fc,auStack_ec);
  if ((float *)(param_2 + 0x10) != &fStack_f8) {
    FID_conflict__memcpy((float *)(param_2 + 0x10),&fStack_f8,0x40);
  }
  *(float *)(param_2 + 0x40) = local_148 + *(float *)(param_2 + 0x40);
  *(float *)(param_2 + 0x44) = local_144 + *(float *)(param_2 + 0x44);
  *(float *)(param_2 + 0x48) = local_140 + *(float *)(param_2 + 0x48);
  __security_check_cookie(uStack_2c ^ (uint)&stack0xfffffe64);
  return;
}

// 00F0EB80  FUN_00f0eb80  size=279  [run]
undefined4 __fastcall FUN_00f0eb80(int param_1)

{
  short sVar1;
  uint uVar2;
  undefined4 uVar3;
  
  sVar1 = *(short *)(param_1 + 0x51c);
  if (sVar1 == 0) {
    *(undefined4 *)(param_1 + 0x510) = *(undefined4 *)(param_1 + 0x60);
    *(undefined4 *)(param_1 + 0x514) = *(undefined4 *)(param_1 + 100);
    *(undefined4 *)(param_1 + 0x518) = *(undefined4 *)(param_1 + 0x68);
    if (*(uint **)(param_1 + 0x58) != (uint *)0x0) {
      uVar2 = **(uint **)(param_1 + 0x58);
      if ((uVar2 + 0xf & 0xfffffff0) != uVar2) {
        uVar3 = FUN_00f59ed0(0);
        FUN_00dd5650(&DAT_016597b4,uVar3);
      }
      if ((uVar2 != 0) && ((int)*(short *)(param_1 + 0x50a) == (uint)*(byte *)(uVar2 + 0x14))) {
        FUN_009cca90(param_1,&DAT_016db368,(int)*(short *)(param_1 + 0x50a));
        return 0;
      }
    }
  }
  else if (sVar1 == 1) {
    *(undefined4 *)(param_1 + 0x510) = 0;
    FUN_009df6d0();
    uVar3 = FUN_00f4b0b0(0);
    FUN_009df740();
    *(undefined4 *)(param_1 + 0x514) = uVar3;
    *(undefined2 *)(param_1 + 0x50a) = 0xff;
  }
  else if (sVar1 == 2) {
    *(undefined4 *)(param_1 + 0x510) = *(undefined4 *)(param_1 + 0x60);
    *(undefined4 *)(param_1 + 0x514) = *(undefined4 *)(param_1 + 100);
    *(undefined2 *)(param_1 + 0x50a) = 0xff;
  }
  if (*(int *)(param_1 + 0x510) == 0xfff) {
    FUN_009cca90(param_1,&DAT_016db3a4);
    return 0;
  }
  return 1;
}

// 00F0ECA0  FUN_00f0eca0  size=2279  [run]
void __thiscall FUN_00f0eca0(int param_1,int *param_2)

{
  int iVar1;
  float *pfVar2;
  float10 fVar3;
  undefined1 auStack_184 [8];
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  undefined1 auStack_13c [4];
  float fStack_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  undefined4 uStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  undefined1 auStack_f0 [4];
  undefined1 auStack_ec [12];
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float local_b0;
  float local_ac;
  float local_a8 [2];
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint uStack_2c;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_184;
  *(undefined4 *)(*param_2 + 0x70) = *(undefined4 *)(param_1 + 0x100);
  *(undefined4 *)(*param_2 + 0x74) = *(undefined4 *)(param_1 + 0x104);
  *(undefined4 *)(*param_2 + 0x78) = *(undefined4 *)(param_1 + 0x108);
  if ((*(uint *)(param_1 + 0x30) & 0x400) != 0) {
    *(float *)(*param_2 + 0x70) = *(float *)(*param_2 + 0x70) * -1.0;
  }
  local_130 = *(float *)(param_1 + 0x170) + *(float *)(param_1 + 0x180);
  local_12c = *(float *)(param_1 + 0x174) + *(float *)(param_1 + 0x184);
  local_128 = *(float *)(param_1 + 0x178) + *(float *)(param_1 + 0x188);
  local_124 = *(float *)(param_1 + 0x17c) + *(float *)(param_1 + 0x18c);
  local_154 = *(float *)(*(int *)(param_2[4] + 8) + 8);
  iVar1 = param_2[6];
  if (local_154 != 0.0) {
    local_170 = *(float *)(iVar1 + 0x40) - *(float *)(param_1 + 400);
    local_16c = *(float *)(iVar1 + 0x44) - *(float *)(param_1 + 0x194);
    local_168 = *(float *)(iVar1 + 0x48) - *(float *)(param_1 + 0x198);
    local_164 = *(float *)(iVar1 + 0x4c) - *(float *)(param_1 + 0x19c);
    if (((local_170 != 0.0) || (local_16c != 0.0)) || (local_168 != 0.0)) {
      FUN_00ddf460();
      local_170 = local_154 * local_170;
      local_16c = local_16c * local_154;
      local_168 = local_168 * local_154;
      local_164 = local_154 * local_164;
      goto LAB_00f0ee1e;
    }
  }
  local_170 = 0.0;
  local_16c = 0.0;
  local_168 = 0.0;
  local_164 = 1.0;
LAB_00f0ee1e:
  if (*(int *)(param_1 + 0x50) == 0) {
    if (&local_e0 != (float *)(param_1 + 0x200)) {
      FID_conflict__memcpy(&local_e0,(float *)(param_1 + 0x200),0x40);
    }
    local_b0 = local_b0 + local_130;
    local_ac = local_ac + local_12c;
    local_a8[0] = local_a8[0] + local_128;
  }
  else {
    if ((*(uint *)(param_1 + 0x3c) & 0x40000000) == 0) {
      pfVar2 = *(float **)param_2[4];
      D3DXVec3TransformNormal();
      if (&fStack_f8 != pfVar2) {
        FID_conflict__memcpy(&fStack_f8,pfVar2,0x40);
      }
    }
    else {
      pfVar2 = *(float **)param_2[4];
      local_108 = *pfVar2;
      local_154 = pfVar2[1];
      local_110 = pfVar2[4];
      local_104 = pfVar2[5];
      local_178 = pfVar2[6];
      local_134 = pfVar2[8];
      local_10c = pfVar2[9];
      local_17c = pfVar2[10];
      local_174 = local_154 * local_154 + local_108 * local_108 + pfVar2[2] * pfVar2[2];
      fVar3 = (float10)FUN_00fdef70();
      local_174 = (float)fVar3;
      local_178 = local_104 * local_104 + local_110 * local_110 + local_178 * local_178;
      local_150 = local_174;
      fVar3 = (float10)FUN_00fdef70();
      local_178 = (float)fVar3;
      local_17c = local_10c * local_10c + local_134 * local_134 + local_17c * local_17c;
      local_14c = local_178;
      fVar3 = (float10)FUN_00fdef70();
      local_17c = (float)fVar3;
      if (local_150 != 0.0) {
        local_150 = 1.0 / local_150;
      }
      if (local_14c != 0.0) {
        local_14c = 1.0 / local_14c;
      }
      local_148 = local_17c;
      if (local_17c != 0.0) {
        local_148 = 1.0 / local_17c;
      }
      FUN_00ddd140();
      D3DXMatrixMultiply();
      D3DXVec3TransformNormal(&local_12c,auStack_13c,auStack_ec);
    }
    fStack_c8 = fStack_c8 + fStack_138;
    fStack_c4 = fStack_c4 + local_134;
    fStack_c0 = fStack_c0 + local_130;
    D3DXMatrixMultiply(&fStack_f8,param_1 + 0x200,&fStack_f8);
  }
  local_b0 = local_b0 + local_170;
  local_ac = local_ac + local_16c;
  local_a8[0] = local_a8[0] + local_168;
  if (*(int *)(param_1 + 0x500) == 1) {
    local_17c = fStack_dc * fStack_dc + local_e0 * local_e0 + fStack_d8 * fStack_d8;
    local_150 = local_b0;
    local_14c = local_ac;
    local_148 = local_a8[0];
    fVar3 = (float10)FUN_00fdef70();
    local_130 = (float)fVar3;
    local_17c = fStack_cc * fStack_cc + fStack_d0 * fStack_d0 + fStack_c8 * fStack_c8;
    fVar3 = (float10)FUN_00fdef70();
    local_12c = (float)fVar3;
    local_17c = fStack_bc * fStack_bc + fStack_c0 * fStack_c0 + fStack_b8 * fStack_b8;
    fVar3 = (float10)FUN_00fdef70();
    local_17c = (float)fVar3;
    local_128 = local_17c;
    D3DXMatrixScaling(&local_e0);
    fStack_c0 = 0.0;
    fStack_bc = 0.0;
    fStack_b8 = 0.0;
    FID_conflict__memcpy(&local_b0,(void *)(param_2[6] + 0x70),0x40);
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_78 = 0;
    D3DXMatrixMultiply(auStack_f0,auStack_f0,&local_b0);
    local_b0 = local_150;
    local_ac = local_14c;
    local_a8[0] = local_148;
  }
  if (*(int *)(param_1 + 0x500) == 5) {
    FUN_00f02910();
  }
  else {
    uStack_68 = 0;
    uStack_6c = 0;
    uStack_70 = 0;
    uStack_74 = 0;
    uStack_7c = 0;
    uStack_80 = 0;
    uStack_84 = 0;
    uStack_88 = 0;
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
      D3DXMatrixMultiply(local_a8,&uStack_68);
    }
    if (*(float *)(param_1 + 0x1c4) != 0.0) {
      D3DXMatrixRotationY();
      D3DXMatrixMultiply(local_a8,&uStack_68);
    }
    if (*(float *)(param_1 + 0x1c0) != 0.0) {
      D3DXMatrixRotationX();
      D3DXMatrixMultiply(local_a8,&uStack_68);
    }
    D3DXMatrixMultiply();
  }
  iVar1 = *param_2;
  local_17c = *(float *)(iVar1 + 0x74);
  local_134 = *(float *)(iVar1 + 0x78);
  uStack_100 = *(undefined4 *)(iVar1 + 0x70);
  fStack_fc = local_17c;
  fStack_f8 = local_134;
  FUN_00ddd140();
  D3DXMatrixMultiply();
  fStack_fc = (float)param_2[1] - 0.5;
  fStack_f8 = (float)param_2[2] - 0.5;
  fStack_f4 = (float)param_2[3] - 0.5;
  iVar1 = *param_2;
  D3DXVec3TransformNormal(&local_12c,&fStack_fc,auStack_ec);
  if ((float *)(iVar1 + 0x10) != &fStack_f8) {
    FID_conflict__memcpy((float *)(iVar1 + 0x10),&fStack_f8,0x40);
  }
  *(float *)(iVar1 + 0x40) = fStack_138 + *(float *)(iVar1 + 0x40);
  *(float *)(iVar1 + 0x44) = local_134 + *(float *)(iVar1 + 0x44);
  *(float *)(iVar1 + 0x48) = local_130 + *(float *)(iVar1 + 0x48);
  __security_check_cookie(uStack_2c ^ (uint)&stack0xfffffe64);
  return;
}

// 00F0F590  FUN_00f0f590  size=2068  [run]
void __thiscall FUN_00f0f590(int param_1,int param_2)

{
  float *_Src;
  int iVar1;
  void *_Src_00;
  uint uVar2;
  undefined4 uVar3;
  uint *puVar4;
  float10 fVar5;
  undefined1 auStack_184 [8];
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float fStack_160;
  undefined1 auStack_15c [4];
  float fStack_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  undefined1 auStack_13c [12];
  float local_130;
  float local_12c;
  float local_128;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  undefined4 uStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  undefined1 auStack_f0 [4];
  undefined1 auStack_ec [12];
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float local_b0;
  float local_ac;
  float local_a8 [2];
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint uStack_2c;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_184;
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
  iVar1 = *(int *)(param_1 + 0x50);
  if (iVar1 == 0) {
    if (&local_e0 != (float *)(param_1 + 0x200)) {
      FID_conflict__memcpy(&local_e0,(float *)(param_1 + 0x200),0x40);
    }
    local_b0 = local_b0 + local_150;
    local_ac = local_ac + local_14c;
    local_a8[0] = local_a8[0] + local_148;
  }
  else {
    _Src = (float *)(iVar1 + 0x10);
    if ((*(uint *)(param_1 + 0x3c) & 0x40000000) == 0) {
      D3DXVec3TransformNormal();
      if (&fStack_f8 != _Src) {
        FID_conflict__memcpy(&fStack_f8,_Src,0x40);
      }
    }
    else {
      local_108 = *_Src;
      local_104 = *(float *)(iVar1 + 0x14);
      local_110 = *(float *)(iVar1 + 0x20);
      local_114 = *(float *)(iVar1 + 0x24);
      local_178 = *(float *)(iVar1 + 0x28);
      local_154 = *(float *)(iVar1 + 0x30);
      local_10c = *(float *)(iVar1 + 0x34);
      local_17c = *(float *)(iVar1 + 0x38);
      local_174 = local_104 * local_104 + local_108 * local_108 +
                  *(float *)(iVar1 + 0x18) * *(float *)(iVar1 + 0x18);
      fVar5 = (float10)FUN_00fdef70();
      local_174 = (float)fVar5;
      local_178 = local_114 * local_114 + local_110 * local_110 + local_178 * local_178;
      local_170 = local_174;
      fVar5 = (float10)FUN_00fdef70();
      local_178 = (float)fVar5;
      local_17c = local_10c * local_10c + local_154 * local_154 + local_17c * local_17c;
      local_16c = local_178;
      fVar5 = (float10)FUN_00fdef70();
      local_17c = (float)fVar5;
      if (local_170 != 0.0) {
        local_170 = 1.0 / local_170;
      }
      if (local_16c != 0.0) {
        local_16c = 1.0 / local_16c;
      }
      local_168 = local_17c;
      if (local_17c != 0.0) {
        local_168 = 1.0 / local_17c;
      }
      FUN_00ddd140();
      D3DXMatrixMultiply();
      D3DXVec3TransformNormal(&local_14c,auStack_15c,auStack_ec);
    }
    fStack_c8 = fStack_c8 + fStack_158;
    fStack_c4 = fStack_c4 + local_154;
    fStack_c0 = fStack_c0 + local_150;
    D3DXMatrixMultiply(&fStack_f8,param_1 + 0x200,&fStack_f8);
  }
  local_b0 = local_b0 + local_130;
  local_ac = local_ac + local_12c;
  local_a8[0] = local_a8[0] + local_128;
  if (*(int *)(param_1 + 0x4f0) == 1) {
    local_17c = fStack_dc * fStack_dc + local_e0 * local_e0 + fStack_d8 * fStack_d8;
    local_170 = local_b0;
    local_16c = local_ac;
    local_168 = local_a8[0];
    fVar5 = (float10)FUN_00fdef70();
    local_150 = (float)fVar5;
    local_17c = fStack_cc * fStack_cc + fStack_d0 * fStack_d0 + fStack_c8 * fStack_c8;
    fVar5 = (float10)FUN_00fdef70();
    local_14c = (float)fVar5;
    local_17c = fStack_bc * fStack_bc + fStack_c0 * fStack_c0 + fStack_b8 * fStack_b8;
    fVar5 = (float10)FUN_00fdef70();
    local_17c = (float)fVar5;
    local_148 = local_17c;
    D3DXMatrixScaling(&local_e0);
    fStack_c0 = 0.0;
    fStack_bc = 0.0;
    fStack_b8 = 0.0;
    _Src_00 = (void *)FUN_00e9ff30();
    FID_conflict__memcpy(&local_b0,_Src_00,0x40);
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_78 = 0;
    D3DXMatrixMultiply(auStack_f0,auStack_f0,&local_b0);
    local_b0 = local_170;
    local_ac = local_16c;
    local_a8[0] = local_168;
  }
  if (*(int *)(param_1 + 0x4f0) == 5) {
    FUN_00f02fa0();
  }
  else {
    uStack_68 = 0;
    uStack_6c = 0;
    uStack_70 = 0;
    uStack_74 = 0;
    uStack_7c = 0;
    uStack_80 = 0;
    uStack_84 = 0;
    uStack_88 = 0;
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
      D3DXMatrixMultiply(local_a8,&uStack_68);
    }
    if (*(float *)(param_1 + 0x1c4) != 0.0) {
      D3DXMatrixRotationY();
      D3DXMatrixMultiply(local_a8,&uStack_68);
    }
    if (*(float *)(param_1 + 0x1c0) != 0.0) {
      D3DXMatrixRotationX();
      D3DXMatrixMultiply(local_a8,&uStack_68);
    }
    D3DXMatrixMultiply();
  }
  uStack_100 = *(undefined4 *)(param_2 + 0x70);
  fStack_fc = *(float *)(param_2 + 0x74);
  fStack_f8 = *(float *)(param_2 + 0x78);
  FUN_00ddd140();
  D3DXMatrixMultiply();
  if ((*(int *)(param_1 + 0x58) == 0) ||
     (puVar4 = (uint *)(*(int *)(param_1 + 0x58) + 0xf0), puVar4 == (uint *)0x0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar4;
    if ((uVar2 + 0xf & 0xfffffff0) != uVar2) {
      uVar3 = FUN_00f59ed0(0xf);
      FUN_00dd5650(&DAT_016597b4,uVar3);
    }
  }
  fStack_f8 = *(float *)(uVar2 + 8) - 0.5;
  fStack_160 = *(float *)(uVar2 + 0xc) - 0.5;
  fStack_fc = *(float *)(uVar2 + 4) - 0.5;
  fStack_f4 = fStack_160;
  D3DXVec3TransformNormal(auStack_13c,&fStack_fc,auStack_ec);
  if ((float *)(param_2 + 0x10) != &fStack_f8) {
    FID_conflict__memcpy((float *)(param_2 + 0x10),&fStack_f8,0x40);
  }
  *(float *)(param_2 + 0x40) = local_148 + *(float *)(param_2 + 0x40);
  *(float *)(param_2 + 0x44) = local_144 + *(float *)(param_2 + 0x44);
  *(float *)(param_2 + 0x48) = local_140 + *(float *)(param_2 + 0x48);
  __security_check_cookie(uStack_2c ^ (uint)&stack0xfffffe64);
  return;
}

// 00F0FDB0  FUN_00f0fdb0  size=279  [run]
undefined4 __fastcall FUN_00f0fdb0(int param_1)

{
  short sVar1;
  uint uVar2;
  undefined4 uVar3;
  
  sVar1 = *(short *)(param_1 + 0x50c);
  if (sVar1 == 0) {
    *(undefined4 *)(param_1 + 0x500) = *(undefined4 *)(param_1 + 0x60);
    *(undefined4 *)(param_1 + 0x504) = *(undefined4 *)(param_1 + 100);
    *(undefined4 *)(param_1 + 0x508) = *(undefined4 *)(param_1 + 0x68);
    if (*(uint **)(param_1 + 0x58) != (uint *)0x0) {
      uVar2 = **(uint **)(param_1 + 0x58);
      if ((uVar2 + 0xf & 0xfffffff0) != uVar2) {
        uVar3 = FUN_00f59ed0(0);
        FUN_00dd5650(&DAT_016597b4,uVar3);
      }
      if ((uVar2 != 0) && ((int)*(short *)(param_1 + 0x4fa) == (uint)*(byte *)(uVar2 + 0x14))) {
        FUN_009cca90(param_1,&DAT_016db3ec,(int)*(short *)(param_1 + 0x4fa));
        return 0;
      }
    }
  }
  else if (sVar1 == 1) {
    *(undefined4 *)(param_1 + 0x500) = 0;
    FUN_009df6d0();
    uVar3 = FUN_00f4b0b0(0);
    FUN_009df740();
    *(undefined4 *)(param_1 + 0x504) = uVar3;
    *(undefined2 *)(param_1 + 0x4fa) = 0xff;
  }
  else if (sVar1 == 2) {
    *(undefined4 *)(param_1 + 0x500) = *(undefined4 *)(param_1 + 0x60);
    *(undefined4 *)(param_1 + 0x504) = *(undefined4 *)(param_1 + 100);
    *(undefined2 *)(param_1 + 0x4fa) = 0xff;
  }
  if (*(int *)(param_1 + 0x500) == 0xfff) {
    FUN_009cca90(param_1,&DAT_016db4d0);
    return 0;
  }
  return 1;
}

// 00F0FED0  FUN_00f0fed0  size=2279  [run]
void __thiscall FUN_00f0fed0(int param_1,int *param_2)

{
  int iVar1;
  float *pfVar2;
  float10 fVar3;
  undefined1 auStack_184 [8];
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  undefined1 auStack_13c [4];
  float fStack_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  undefined4 uStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  undefined1 auStack_f0 [4];
  undefined1 auStack_ec [12];
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float local_b0;
  float local_ac;
  float local_a8 [2];
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint uStack_2c;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_184;
  *(undefined4 *)(*param_2 + 0x70) = *(undefined4 *)(param_1 + 0x100);
  *(undefined4 *)(*param_2 + 0x74) = *(undefined4 *)(param_1 + 0x104);
  *(undefined4 *)(*param_2 + 0x78) = *(undefined4 *)(param_1 + 0x108);
  if ((*(uint *)(param_1 + 0x30) & 0x400) != 0) {
    *(float *)(*param_2 + 0x70) = *(float *)(*param_2 + 0x70) * -1.0;
  }
  local_130 = *(float *)(param_1 + 0x170) + *(float *)(param_1 + 0x180);
  local_12c = *(float *)(param_1 + 0x174) + *(float *)(param_1 + 0x184);
  local_128 = *(float *)(param_1 + 0x178) + *(float *)(param_1 + 0x188);
  local_124 = *(float *)(param_1 + 0x17c) + *(float *)(param_1 + 0x18c);
  local_154 = *(float *)(*(int *)(param_2[4] + 8) + 8);
  iVar1 = param_2[6];
  if (local_154 != 0.0) {
    local_170 = *(float *)(iVar1 + 0x40) - *(float *)(param_1 + 400);
    local_16c = *(float *)(iVar1 + 0x44) - *(float *)(param_1 + 0x194);
    local_168 = *(float *)(iVar1 + 0x48) - *(float *)(param_1 + 0x198);
    local_164 = *(float *)(iVar1 + 0x4c) - *(float *)(param_1 + 0x19c);
    if (((local_170 != 0.0) || (local_16c != 0.0)) || (local_168 != 0.0)) {
      FUN_00ddf460();
      local_170 = local_154 * local_170;
      local_16c = local_16c * local_154;
      local_168 = local_168 * local_154;
      local_164 = local_154 * local_164;
      goto LAB_00f1004e;
    }
  }
  local_170 = 0.0;
  local_16c = 0.0;
  local_168 = 0.0;
  local_164 = 1.0;
LAB_00f1004e:
  if (*(int *)(param_1 + 0x50) == 0) {
    if (&local_e0 != (float *)(param_1 + 0x200)) {
      FID_conflict__memcpy(&local_e0,(float *)(param_1 + 0x200),0x40);
    }
    local_b0 = local_b0 + local_130;
    local_ac = local_ac + local_12c;
    local_a8[0] = local_a8[0] + local_128;
  }
  else {
    if ((*(uint *)(param_1 + 0x3c) & 0x40000000) == 0) {
      pfVar2 = *(float **)param_2[4];
      D3DXVec3TransformNormal();
      if (&fStack_f8 != pfVar2) {
        FID_conflict__memcpy(&fStack_f8,pfVar2,0x40);
      }
    }
    else {
      pfVar2 = *(float **)param_2[4];
      local_108 = *pfVar2;
      local_154 = pfVar2[1];
      local_110 = pfVar2[4];
      local_104 = pfVar2[5];
      local_178 = pfVar2[6];
      local_134 = pfVar2[8];
      local_10c = pfVar2[9];
      local_17c = pfVar2[10];
      local_174 = local_154 * local_154 + local_108 * local_108 + pfVar2[2] * pfVar2[2];
      fVar3 = (float10)FUN_00fdef70();
      local_174 = (float)fVar3;
      local_178 = local_104 * local_104 + local_110 * local_110 + local_178 * local_178;
      local_150 = local_174;
      fVar3 = (float10)FUN_00fdef70();
      local_178 = (float)fVar3;
      local_17c = local_10c * local_10c + local_134 * local_134 + local_17c * local_17c;
      local_14c = local_178;
      fVar3 = (float10)FUN_00fdef70();
      local_17c = (float)fVar3;
      if (local_150 != 0.0) {
        local_150 = 1.0 / local_150;
      }
      if (local_14c != 0.0) {
        local_14c = 1.0 / local_14c;
      }
      local_148 = local_17c;
      if (local_17c != 0.0) {
        local_148 = 1.0 / local_17c;
      }
      FUN_00ddd140();
      D3DXMatrixMultiply();
      D3DXVec3TransformNormal(&local_12c,auStack_13c,auStack_ec);
    }
    fStack_c8 = fStack_c8 + fStack_138;
    fStack_c4 = fStack_c4 + local_134;
    fStack_c0 = fStack_c0 + local_130;
    D3DXMatrixMultiply(&fStack_f8,param_1 + 0x200,&fStack_f8);
  }
  local_b0 = local_b0 + local_170;
  local_ac = local_ac + local_16c;
  local_a8[0] = local_a8[0] + local_168;
  if (*(int *)(param_1 + 0x4f0) == 1) {
    local_17c = fStack_dc * fStack_dc + local_e0 * local_e0 + fStack_d8 * fStack_d8;
    local_150 = local_b0;
    local_14c = local_ac;
    local_148 = local_a8[0];
    fVar3 = (float10)FUN_00fdef70();
    local_130 = (float)fVar3;
    local_17c = fStack_cc * fStack_cc + fStack_d0 * fStack_d0 + fStack_c8 * fStack_c8;
    fVar3 = (float10)FUN_00fdef70();
    local_12c = (float)fVar3;
    local_17c = fStack_bc * fStack_bc + fStack_c0 * fStack_c0 + fStack_b8 * fStack_b8;
    fVar3 = (float10)FUN_00fdef70();
    local_17c = (float)fVar3;
    local_128 = local_17c;
    D3DXMatrixScaling(&local_e0);
    fStack_c0 = 0.0;
    fStack_bc = 0.0;
    fStack_b8 = 0.0;
    FID_conflict__memcpy(&local_b0,(void *)(param_2[6] + 0x70),0x40);
    uStack_80 = 0;
    uStack_7c = 0;
    uStack_78 = 0;
    D3DXMatrixMultiply(auStack_f0,auStack_f0,&local_b0);
    local_b0 = local_150;
    local_ac = local_14c;
    local_a8[0] = local_148;
  }
  if (*(int *)(param_1 + 0x4f0) == 5) {
    FUN_00f03950();
  }
  else {
    uStack_68 = 0;
    uStack_6c = 0;
    uStack_70 = 0;
    uStack_74 = 0;
    uStack_7c = 0;
    uStack_80 = 0;
    uStack_84 = 0;
    uStack_88 = 0;
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
      D3DXMatrixMultiply(local_a8,&uStack_68);
    }
    if (*(float *)(param_1 + 0x1c4) != 0.0) {
      D3DXMatrixRotationY();
      D3DXMatrixMultiply(local_a8,&uStack_68);
    }
    if (*(float *)(param_1 + 0x1c0) != 0.0) {
      D3DXMatrixRotationX();
      D3DXMatrixMultiply(local_a8,&uStack_68);
    }
    D3DXMatrixMultiply();
  }
  iVar1 = *param_2;
  local_17c = *(float *)(iVar1 + 0x74);
  local_134 = *(float *)(iVar1 + 0x78);
  uStack_100 = *(undefined4 *)(iVar1 + 0x70);
  fStack_fc = local_17c;
  fStack_f8 = local_134;
  FUN_00ddd140();
  D3DXMatrixMultiply();
  fStack_fc = (float)param_2[1] - 0.5;
  fStack_f8 = (float)param_2[2] - 0.5;
  fStack_f4 = (float)param_2[3] - 0.5;
  iVar1 = *param_2;
  D3DXVec3TransformNormal(&local_12c,&fStack_fc,auStack_ec);
  if ((float *)(iVar1 + 0x10) != &fStack_f8) {
    FID_conflict__memcpy((float *)(iVar1 + 0x10),&fStack_f8,0x40);
  }
  *(float *)(iVar1 + 0x40) = fStack_138 + *(float *)(iVar1 + 0x40);
  *(float *)(iVar1 + 0x44) = local_134 + *(float *)(iVar1 + 0x44);
  *(float *)(iVar1 + 0x48) = local_130 + *(float *)(iVar1 + 0x48);
  __security_check_cookie(uStack_2c ^ (uint)&stack0xfffffe64);
  return;
}

// 00F107C0  FUN_00f107c0  size=1893  [run]
/* WARNING: Removing unreachable block (ram,0x00f10c54) */
/* WARNING: Removing unreachable block (ram,0x00f10cc2) */
/* WARNING: Removing unreachable block (ram,0x00f10d1c) */

void __fastcall FUN_00f107c0(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  float10 fVar8;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  uint local_110;
  int local_10c;
  uint local_108;
  int local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_dc;
  float local_d8;
  float local_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  uint local_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  int local_a0;
  int iStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  uint uStack_78;
  undefined4 uStack_70;
  uint uStack_6c;
  undefined1 local_60 [76];
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)&local_124;
  if (((*(uint *)(param_1 + 0x30) & 0xc0000000) == 0) && (iVar3 = FUN_00a81330(), iVar3 != 0)) {
    iVar3 = FUN_00a7c800();
    local_10c = iVar3;
    FUN_00f043e0(iVar3);
    *(float *)(param_1 + 0x528) = *(float *)(param_1 + 0x4fc) + *(float *)(param_1 + 0x528);
    fVar1 = *(float *)(param_1 + 0x534) - *(float *)(param_1 + 0x110);
    *(float *)(param_1 + 0x534) = fVar1;
    *(float *)(param_1 + 0x538) = *(float *)(param_1 + 0x538) - *(float *)(param_1 + 0x110);
    if (fVar1 <= 0.0) {
      *(undefined4 *)(param_1 + 0x534) = 0x407fef9e;
    }
    local_108 = (uint)(fVar1 <= 0.0);
    local_f0 = *(float *)(param_1 + 0x250);
    iVar5 = *(int *)(param_1 + 0x84);
    local_ec = *(float *)(param_1 + 0x254);
    local_e8 = *(float *)(param_1 + 600);
    local_e4 = *(float *)(param_1 + 0x25c) * *(float *)(param_1 + 0x124);
    if ((iVar5 != 0) && ((*(byte *)(iVar5 + 0x68) & 8) != 0)) {
      local_f0 = *(float *)(iVar5 + 0x30) * local_f0;
      local_ec = *(float *)(iVar5 + 0x34) * local_ec;
      local_e8 = *(float *)(iVar5 + 0x38) * local_e8;
      local_e4 = *(float *)(iVar5 + 0x3c) * local_e4;
    }
    local_110 = 0;
    iVar5 = *(int *)(iVar3 + 0x360);
    if (*(int *)(iVar3 + 0x360) == 0) {
      iVar5 = iVar3;
    }
    local_b4 = (uint)*(short *)(iVar5 + 0x358);
    if (local_b4 != 0) {
      iVar3 = 0;
      local_104 = 0;
      do {
        uVar6 = local_110;
        pfVar4 = (float *)(*(int *)(param_1 + 0x4e0) + iVar3);
        if (pfVar4[0x1b] == 0.0) {
          local_120 = *pfVar4 - *(float *)(param_1 + 0x4d0);
          local_11c = pfVar4[1] - *(float *)(param_1 + 0x4d4);
          local_118 = pfVar4[2] - *(float *)(param_1 + 0x4d8);
          local_114 = pfVar4[3] - *(float *)(param_1 + 0x4dc);
          if (((local_120 == 0.0) && (local_11c == 0.0)) && (local_118 == 0.0)) {
            local_11c = 0.001;
          }
          local_124 = local_11c * local_11c + local_120 * local_120 + local_118 * local_118;
          fVar8 = (float10)FUN_00fdef70();
          local_124 = (float)fVar8;
          if ((local_124 < *(float *)(param_1 + 0x528)) ||
             ((((*(uint *)(param_1 + 0x51c) & 0x80000000) != 0 && (*(int *)(param_1 + 900) == 2)) &&
              (iVar5 = FUN_00fdbc60(), (int)uVar6 <= iVar5)))) {
            iVar5 = *(int *)(param_1 + 0x84);
            local_100 = 0.0;
            local_fc = 0.0;
            local_f8 = 0.0;
            local_f4 = 0.0;
            if ((iVar5 != 0) && ((*(byte *)(iVar5 + 0x68) & 4) != 0)) {
              local_124 = *(float *)(param_1 + 0x4f8);
              local_100 = local_124 * *(float *)(iVar5 + 0x50);
              local_fc = *(float *)(iVar5 + 0x54) * local_124;
              local_f8 = local_124 * *(float *)(iVar5 + 0x58);
              local_f4 = 1.0;
              local_dc = local_100;
              local_d8 = local_fc;
              local_d4 = local_f8;
              if (*(int *)(param_1 + 0x50) == 0) {
                puVar7 = (undefined1 *)(local_10c + 0x10);
              }
              else {
                D3DXMatrixMultiply(local_60,local_10c + 0x10,*(int *)(param_1 + 0x50) + 0x10);
                puVar7 = local_60;
              }
              D3DXMatrixTranspose(&local_a0,puVar7);
              D3DXVec3TransformNormal(&local_108,&local_108,&fStack_a8);
            }
            *(undefined4 *)(iVar3 + 0x6c + *(int *)(param_1 + 0x4e0)) = 1;
            local_124 = local_120 * local_120 + local_11c * local_11c + local_118 * local_118;
            if (local_124 < 0.0 == (local_124 == 0.0)) {
              FUN_00ddf460(&local_120,&local_120);
            }
            else {
              FUN_00dd5650(&DAT_0163d0ac);
              local_120 = 0.0;
              local_11c = 1.0;
              local_118 = 0.0;
            }
            fVar8 = (float10)FUN_00dde300(-*(float *)(param_1 + 0x4f0),
                                          *(undefined4 *)(param_1 + 0x4f0));
            pfVar4 = (float *)(iVar3 + 0x30 + *(int *)(param_1 + 0x4e0));
            fStack_a4 = (float)(fVar8 + (float10)*(float *)(param_1 + 0x500));
            fStack_b0 = fStack_a4 * local_120;
            fStack_ac = fStack_a4 * local_11c;
            fStack_a8 = fStack_a4 * local_118;
            fStack_a4 = fStack_a4 * local_114;
            fStack_d0 = fStack_b0 + local_100;
            fStack_cc = fStack_ac + local_fc;
            fStack_c8 = fStack_a8 + local_f8;
            fStack_c4 = fStack_a4 + local_f4;
            *pfVar4 = fStack_d0;
            pfVar4[1] = fStack_cc;
            pfVar4[2] = fStack_c8;
            pfVar4[3] = fStack_c4;
            uVar6 = *(int *)(param_1 + 0x114) * 0x19660d + 0x3c6ef35f;
            *(uint *)(param_1 + 0x114) = uVar6;
            *(float *)(iVar3 + 0x50 + *(int *)(param_1 + 0x4e0)) =
                 (1.0 - (float)(uVar6 >> 8) * 5.960465e-08 * 2.0) * *(float *)(param_1 + 0x508);
            uVar6 = *(int *)(param_1 + 0x114) * 0x19660d + 0x3c6ef35f;
            *(uint *)(param_1 + 0x114) = uVar6;
            *(float *)(iVar3 + 0x54 + *(int *)(param_1 + 0x4e0)) =
                 (1.0 - (float)(uVar6 >> 8) * 5.960465e-08 * 2.0) * *(float *)(param_1 + 0x508);
            uVar6 = *(int *)(param_1 + 0x114) * 0x19660d + 0x3c6ef35f;
            *(uint *)(param_1 + 0x114) = uVar6;
            local_124 = (1.0 - (float)(uVar6 >> 8) * 5.960465e-08 * 2.0) *
                        *(float *)(param_1 + 0x508);
            *(float *)(iVar3 + 0x58 + *(int *)(param_1 + 0x4e0)) = local_124;
            uVar6 = local_110;
          }
        }
        else if (0.0 < *(float *)(param_1 + 0x538)) {
          FUN_00ec7160();
          uStack_98 = *(undefined4 *)(param_1 + 0x504);
          uStack_94 = *(undefined4 *)(param_1 + 0x514);
          uStack_70 = *(undefined4 *)(param_1 + 0x52c);
          iStack_80 = param_1 + 0x114;
          uStack_90 = *(undefined4 *)(param_1 + 0x510);
          uStack_7c = *(undefined4 *)(param_1 + 0x4f4);
          uStack_8c = *(undefined4 *)(param_1 + 0x518);
          uStack_78 = local_108;
          uStack_88 = *(undefined4 *)(param_1 + 0x50c);
          uStack_84 = *(undefined4 *)(param_1 + 0x110);
          iVar5 = *(int *)(local_10c + 0x360);
          if (*(int *)(local_10c + 0x360) == 0) {
            iVar5 = local_10c;
          }
          if (((int)uVar6 < 0) || ((int)*(short *)(iVar5 + 0x358) <= (int)uVar6)) {
            iStack_9c = 0;
          }
          else {
            iStack_9c = *(int *)(iVar5 + 0x350) + local_104;
          }
          if ((*(uint *)(param_1 + 0x51c) & 0x40000000) == 0) {
            uStack_6c = uStack_6c & 0xbfffffff;
          }
          else {
            uStack_6c = uStack_6c | 0x40000000;
          }
          local_a0 = param_1;
          FUN_00eca790(&local_a0);
          if (local_108 != 0) {
            iVar5 = *(int *)(param_1 + 0x4e0);
            fVar1 = *(float *)(iVar5 + 4 + iVar3);
            fVar2 = *(float *)(iVar5 + 8 + iVar3);
            local_124 = fVar2 * fVar2 +
                        *(float *)(iVar5 + iVar3) * *(float *)(iVar5 + iVar3) + fVar1 * fVar1;
            fVar8 = (float10)FUN_00fdef70();
            local_124 = (float)fVar8;
            if (*(float *)(param_1 + 0x524) < local_124) {
              *(float *)(param_1 + 0x524) = local_124;
            }
          }
        }
        FUN_00ecb1f0(param_1,local_10c,&local_f0);
        local_104 = local_104 + 0xb0;
        local_110 = uVar6 + 1;
        iVar3 = iVar3 + 0x70;
      } while (local_110 < local_b4);
      __security_check_cookie(local_14 ^ (uint)&local_124);
      return;
    }
    local_b4 = 0;
  }
  __security_check_cookie(local_14 ^ (uint)&local_124);
  return;
}

