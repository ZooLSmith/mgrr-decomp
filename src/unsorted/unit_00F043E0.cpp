// src/unsorted/unit_00F043E0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F043E0..00F043E0, 1 functions

#include "types.h"

// 00F043E0  FUN_00f043e0  size=1549  [run]
void __thiscall FUN_00f043e0(int param_1,int param_2)

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
      pfStack_190 = (float *)0xf046f9;
      FID_conflict__memcpy(local_e0,(undefined1 *)(param_1 + 0x200),0x40);
    }
    local_b0 = local_b0 + local_150;
    local_ac = local_ac + local_14c;
    local_a8[0] = local_a8[0] + local_148;
  }
  else {
    _Src = (float *)(iVar2 + 0x10);
    if ((*(uint *)(param_1 + 0x3c) & 0x40000000) == 0) {
      pfStack_190 = (float *)0xf04671;
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
      pfStack_190 = (float *)0xf04648;
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
    pfStack_198 = (float *)0xf0481e;
    D3DXMatrixMultiply();
  }
  if (*(float *)(param_1 + 0x1c4) != 0.0) {
    D3DXMatrixRotationY();
    pfStack_194 = local_a8;
    pfStack_190 = (float *)&local_68;
    pfStack_198 = (float *)0xf04862;
    D3DXMatrixMultiply();
  }
  if (*(float *)(param_1 + 0x1c0) != 0.0) {
    D3DXMatrixRotationX();
    pfStack_194 = local_a8;
    pfStack_190 = (float *)&local_68;
    pfStack_198 = (float *)0xf048a2;
    D3DXMatrixMultiply();
  }
  pfStack_190 = (float *)0xf048ba;
  D3DXMatrixMultiply();
  local_10c = *(float *)(param_2 + 0x70);
  pfStack_190 = &local_10c;
  local_108 = *(float *)(param_2 + 0x74);
  pfStack_194 = (float *)&local_6c;
  local_104 = *(float *)(param_2 + 0x78);
  pfStack_198 = (float *)0xf048ed;
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

