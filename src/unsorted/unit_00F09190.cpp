// src/unsorted/unit_00F09190.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F09190..00F093B0, 2 functions

#include "mgrr.h"

// 00F09190  FUN_00f09190  size=532  [run]
void __thiscall FUN_00f09190(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  local_20 = *(float *)(param_1 + 0x250);
  local_1c = *(float *)(param_1 + 0x254);
  local_18 = *(float *)(param_1 + 600);
  local_14 = *(float *)(param_1 + 0x25c) * *(float *)(param_1 + 0x124);
  iVar5 = *(int *)(param_1 + 0x84);
  if ((iVar5 != 0) && ((*(byte *)(iVar5 + 0x68) & 8) != 0)) {
    local_20 = *(float *)(iVar5 + 0x30) * local_20;
    local_1c = *(float *)(iVar5 + 0x34) * local_1c;
    local_18 = *(float *)(iVar5 + 0x38) * local_18;
    local_14 = *(float *)(iVar5 + 0x3c) * local_14;
  }
  uVar3 = (uint)*(short *)(param_2 + 0x324);
  if (uVar3 != 0) {
    uVar4 = 0;
    if (3 < (int)uVar3) {
      iVar5 = 2;
      iVar2 = 0;
      do {
        if ((((-1 < (int)uVar4) && ((int)uVar4 < (int)*(short *)(param_2 + 0x324))) &&
            (iVar1 = *(int *)(param_2 + 800) + iVar2, iVar1 != 0)) &&
           ((*(byte *)(iVar1 + 0x38) & 1) != 0)) {
          *(float *)(iVar1 + 0x20) = local_20;
          *(float *)(iVar1 + 0x24) = local_1c;
          *(float *)(iVar1 + 0x28) = local_18;
          *(float *)(iVar1 + 0x2c) = local_14;
        }
        if (((-1 < iVar5 + -1) && (iVar5 + -1 < (int)*(short *)(param_2 + 0x324))) &&
           ((iVar1 = *(int *)(param_2 + 800) + 0x70 + iVar2, iVar1 != 0 &&
            ((*(byte *)(iVar1 + 0x38) & 1) != 0)))) {
          *(float *)(iVar1 + 0x20) = local_20;
          *(float *)(iVar1 + 0x24) = local_1c;
          *(float *)(iVar1 + 0x28) = local_18;
          *(float *)(iVar1 + 0x2c) = local_14;
        }
        if (((-1 < iVar5) && (iVar5 < *(short *)(param_2 + 0x324))) &&
           ((iVar1 = *(int *)(param_2 + 800) + 0xe0 + iVar2, iVar1 != 0 &&
            ((*(byte *)(iVar1 + 0x38) & 1) != 0)))) {
          *(float *)(iVar1 + 0x20) = local_20;
          *(float *)(iVar1 + 0x24) = local_1c;
          *(float *)(iVar1 + 0x28) = local_18;
          *(float *)(iVar1 + 0x2c) = local_14;
        }
        if ((((-1 < iVar5 + 1) && (iVar5 + 1 < (int)*(short *)(param_2 + 0x324))) &&
            (iVar1 = *(int *)(param_2 + 800) + 0x150 + iVar2, iVar1 != 0)) &&
           ((*(byte *)(iVar1 + 0x38) & 1) != 0)) {
          *(float *)(iVar1 + 0x20) = local_20;
          *(float *)(iVar1 + 0x24) = local_1c;
          *(float *)(iVar1 + 0x28) = local_18;
          *(float *)(iVar1 + 0x2c) = local_14;
        }
        uVar4 = uVar4 + 4;
        iVar2 = iVar2 + 0x1c0;
        iVar5 = iVar5 + 4;
      } while (uVar4 < uVar3 - 3);
    }
    if (uVar4 < uVar3) {
      iVar5 = uVar4 * 0x70;
      do {
        if (((-1 < (int)uVar4) && ((int)uVar4 < (int)*(short *)(param_2 + 0x324))) &&
           ((iVar2 = *(int *)(param_2 + 800) + iVar5, iVar2 != 0 &&
            ((*(byte *)(iVar2 + 0x38) & 1) != 0)))) {
          *(float *)(iVar2 + 0x20) = local_20;
          *(float *)(iVar2 + 0x24) = local_1c;
          *(float *)(iVar2 + 0x28) = local_18;
          *(float *)(iVar2 + 0x2c) = local_14;
        }
        uVar4 = uVar4 + 1;
        iVar5 = iVar5 + 0x70;
      } while (uVar4 < uVar3);
    }
  }
  return;
}

// 00F093B0  FUN_00f093b0  size=1530  [run]
void __thiscall FUN_00f093b0(int param_1,int param_2)

{
  float *_Src;
  uint *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  float10 fVar5;
  float *pfStack_1a8;
  float *pfStack_1a4;
  float *pfStack_1a0;
  undefined1 auStack_184 [8];
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float fStack_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float fStack_14c;
  undefined1 auStack_148 [20];
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104 [3];
  float afStack_f8 [3];
  float afStack_ec [3];
  undefined1 local_e0 [12];
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
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
  
  local_14 = DAT_018e8764 ^ (uint)auStack_184;
  local_160 = *(float *)(param_1 + 0x180) + *(float *)(param_1 + 0x170);
  local_15c = *(float *)(param_1 + 0x184) + *(float *)(param_1 + 0x174);
  local_158 = *(float *)(param_1 + 0x188) + *(float *)(param_1 + 0x178);
  local_154 = *(float *)(param_1 + 0x18c) + *(float *)(param_1 + 0x17c);
  FUN_00ee0200();
  iVar2 = *(int *)(param_1 + 0x50);
  if (iVar2 == 0) {
    if (local_e0 != (undefined1 *)(param_1 + 0x200)) {
      pfStack_1a0 = (float *)0xf096b1;
      FID_conflict__memcpy(local_e0,(undefined1 *)(param_1 + 0x200),0x40);
    }
    local_b0 = local_b0 + local_160;
    local_ac = local_ac + local_15c;
    local_a8[0] = local_a8[0] + local_158;
  }
  else {
    _Src = (float *)(iVar2 + 0x10);
    if ((*(uint *)(param_1 + 0x3c) & 0x40000000) == 0) {
      pfStack_1a0 = (float *)0xf09629;
      D3DXVec3TransformNormal();
      if (afStack_f8 != _Src) {
        FID_conflict__memcpy(afStack_f8,_Src,0x40);
      }
    }
    else {
      local_108 = *_Src;
      local_104[0] = *(float *)(iVar2 + 0x14);
      local_110 = *(float *)(iVar2 + 0x20);
      local_134 = *(float *)(iVar2 + 0x24);
      local_178 = *(float *)(iVar2 + 0x28);
      local_114 = *(float *)(iVar2 + 0x30);
      local_10c = *(float *)(iVar2 + 0x34);
      local_17c = *(float *)(iVar2 + 0x38);
      local_174 = local_104[0] * local_104[0] + local_108 * local_108 +
                  *(float *)(iVar2 + 0x18) * *(float *)(iVar2 + 0x18);
      fVar5 = (float10)FUN_00fdef70();
      local_174 = (float)fVar5;
      local_178 = local_134 * local_134 + local_110 * local_110 + local_178 * local_178;
      local_170 = local_174;
      fVar5 = (float10)FUN_00fdef70();
      local_178 = (float)fVar5;
      local_17c = local_10c * local_10c + local_114 * local_114 + local_17c * local_17c;
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
      pfStack_1a0 = (float *)0xf09600;
      D3DXMatrixMultiply();
      pfStack_1a0 = afStack_ec;
      pfStack_1a4 = &local_16c;
      pfStack_1a8 = &local_15c;
      D3DXVec3TransformNormal();
    }
    fStack_c8 = fStack_c8 + local_168;
    fStack_c4 = fStack_c4 + fStack_164;
    fStack_c0 = fStack_c0 + local_160;
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
    pfStack_1a4 = local_a8;
    pfStack_1a0 = (float *)&local_68;
    pfStack_1a8 = (float *)0xf097d6;
    D3DXMatrixMultiply();
  }
  if (*(float *)(param_1 + 0x1c4) != 0.0) {
    D3DXMatrixRotationY();
    pfStack_1a4 = local_a8;
    pfStack_1a0 = (float *)&local_68;
    pfStack_1a8 = (float *)0xf0981a;
    D3DXMatrixMultiply();
  }
  if (*(float *)(param_1 + 0x1c0) != 0.0) {
    D3DXMatrixRotationX();
    pfStack_1a4 = local_a8;
    pfStack_1a0 = (float *)&local_68;
    pfStack_1a8 = (float *)0xf0985a;
    D3DXMatrixMultiply();
  }
  pfStack_1a0 = (float *)0xf09872;
  D3DXMatrixMultiply();
  local_10c = *(float *)(param_1 + 0x100);
  pfStack_1a0 = &local_10c;
  local_108 = *(float *)(param_1 + 0x104);
  pfStack_1a4 = (float *)&local_6c;
  local_104[0] = *(float *)(param_1 + 0x108);
  pfStack_1a8 = (float *)0xf098ae;
  FUN_00ddd140();
  pfStack_1a8 = afStack_ec;
  pfStack_1a4 = (float *)&local_6c;
  pfStack_1a0 = pfStack_1a8;
  D3DXMatrixMultiply();
  if ((*(int *)(param_1 + 0x58) == 0) ||
     (puVar1 = (uint *)(*(int *)(param_1 + 0x58) + 0x30), puVar1 == (uint *)0x0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    if ((uVar3 + 0xf & 0xfffffff0) != uVar3) {
      uVar4 = FUN_00f59ed0(3);
      FUN_00dd5650(&DAT_016597b4,uVar4);
    }
  }
  local_104[0] = *(float *)(uVar3 + 0x18) - 0.5;
  local_108 = *(float *)(uVar3 + 0x14) - 0.5;
  local_104[1] = 0.0;
  D3DXVec3TransformNormal(auStack_148,&local_108,afStack_f8);
  fStack_d4 = fStack_d4 + local_154;
  fStack_d0 = fStack_d0 + local_150;
  fStack_cc = fStack_cc + fStack_14c;
  FID_conflict__memcpy((void *)(param_2 + 0x10),local_104,0x40);
  __security_check_cookie(uStack_38 ^ (uint)&pfStack_1a8);
  return;
}

