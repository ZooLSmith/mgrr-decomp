// src/effect/EspPrimitiveWorkCrossBillboard.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F4F1B0..00F59330, 5 functions

#include "types.h"

// 00F4F1B0  EspPrimitiveWorkCrossBillboard::EspPrimitiveWorkCrossBillboard  size=48  [class]
undefined4 * __fastcall
EspPrimitiveWorkCrossBillboard::EspPrimitiveWorkCrossBillboard(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = vftable;
  FUN_00f9c880();
  iVar1 = 3;
  do {
    FUN_00f9c880();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  return param_1;
}

// 00F4F230  EspPrimitiveWorkCrossBillboard::vf08  size=36  [class]
void EspPrimitiveWorkCrossBillboard::vf08(void)

{
  int iVar1;
  
  FUN_00fa45a0();
  iVar1 = 4;
  do {
    FUN_00fa45a0();
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

// 00F4F260  EspPrimitiveWorkCrossBillboard::vf0C  size=95  [class]
void __thiscall EspPrimitiveWorkCrossBillboard::vf0C(int param_1,int param_2)

{
  uint uVar1;
  
  if ((*(uint *)(param_2 + 8) & 0x800) == 0) {
    uVar1 = *(uint *)(param_2 + 8);
    FUN_00f98f80(&PTR_vftable_018da4d8);
    FUN_00f99010(1,param_1 + 0x2c + (uVar1 >> 2 & 3) * 0x28);
  }
  else {
    FUN_00f98f80(&PTR_vftable_018da4c0);
  }
  FUN_00f99010(0,param_1 + 4);
  FUN_00f9dfb0(5);
  return;
}

// 00F524B0  EspPrimitiveWorkCrossBillboard::vf04  size=1236  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void EspPrimitiveWorkCrossBillboard::vf04(undefined4 param_1)

{
  int iVar1;
  float unaff_EBX;
  uint uVar2;
  float unaff_ESI;
  float *pfVar3;
  float unaff_EDI;
  undefined *puVar4;
  undefined1 auStack_134 [16];
  undefined4 uStack_124;
  undefined1 auStack_120 [12];
  undefined4 local_114;
  undefined1 local_110 [32];
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  undefined4 uStack_e4;
  undefined4 auStack_e0 [2];
  undefined1 auStack_d8 [40];
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  undefined1 auStack_a0 [8];
  float afStack_98 [15];
  float afStack_5c [14];
  uint uStack_24;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_134;
  local_114 = param_1;
  if ((DAT_01ee6c40 & 1) == 0) {
    DAT_01ee6c40 = DAT_01ee6c40 | 1;
    _DAT_01ee6ba0 = 0xbf000000;
    _DAT_01ee6ba4 = 0x3f000000;
    _DAT_01ee6bb0 = 0x3f000000;
    _DAT_01ee6bb4 = 0x3f000000;
    _DAT_01ee6bd0 = 0x3f000000;
    _DAT_01ee6be0 = 0x3f000000;
    _DAT_01ee6bf4 = 0x3f000000;
    _DAT_01ee6c04 = 0x3f000000;
    _DAT_01ee6c10 = 0x3f000000;
    _DAT_01ee6c14 = 0x3f000000;
    _DAT_01ee6c30 = 0x3f000000;
    _DAT_01ee6ba8 = 0;
    _DAT_01ee6bb8 = 0;
    _DAT_01ee6bc8 = 0;
    _DAT_01ee6bd8 = 0;
    _DAT_01ee6be8 = 0;
    _DAT_01ee6bf8 = 0;
    _DAT_01ee6c08 = 0;
    _DAT_01ee6c18 = 0;
    _DAT_01ee6c28 = 0;
    _DAT_01ee6c38 = 0;
    _DAT_01ee6bc0 = 0xbf000000;
    _DAT_01ee6bc4 = 0xbf000000;
    _DAT_01ee6bd4 = 0xbf000000;
    _DAT_01ee6be4 = 0xbf000000;
    _DAT_01ee6bf0 = 0xbf000000;
    _DAT_01ee6c00 = 0xbf000000;
    _DAT_01ee6c20 = 0xbf000000;
    _DAT_01ee6c24 = 0xbf000000;
    _DAT_01ee6c34 = 0xbf000000;
  }
  if ((DAT_01ee6c40 & 2) == 0) {
    DAT_01ee6c40 = DAT_01ee6c40 | 2;
    _DAT_01ee6a60 = 0x3f800000;
    _DAT_01ee6a70 = 0x3f800000;
    _DAT_01ee6a74 = 0x3f800000;
    _DAT_01ee6a7c = 0x3f800000;
    _DAT_01ee6a84 = 0x3f800000;
    _DAT_01ee6a88 = 0x3f800000;
    _DAT_01ee6a90 = 0x3f800000;
    _DAT_01ee6aa0 = 0x3f800000;
    _DAT_01ee6aa4 = 0x3f800000;
    _DAT_01ee6aac = 0x3f800000;
    _DAT_01ee6ab8 = 0x3f800000;
    _DAT_01ee6ac4 = 0x3f800000;
    _DAT_01ee6ac8 = 0x3f800000;
    _DAT_01ee6acc = 0x3f800000;
    _DAT_01ee6ad0 = 0x3f800000;
    _DAT_01ee6ad4 = 0x3f800000;
    _DAT_01ee6ae8 = 0x3f800000;
    _DAT_01ee6af4 = 0x3f800000;
    _DAT_01ee6af8 = 0x3f800000;
    _DAT_01ee6afc = 0x3f800000;
    _DAT_01ee6b00 = 0x3f800000;
    _DAT_01ee6b04 = 0x3f800000;
    _DAT_01ee6b0c = 0x3f800000;
    _DAT_01ee6b10 = 0x3f800000;
    _DAT_01ee6b28 = 0x3f800000;
    _DAT_01ee6b2c = 0x3f800000;
    _DAT_01ee6b30 = 0x3f800000;
    _DAT_01ee6b34 = 0x3f800000;
    _DAT_01ee6b3c = 0x3f800000;
    _DAT_01ee6b40 = 0x3f800000;
    _DAT_01ee6b54 = 0x3f800000;
    _DAT_01ee6b58 = 0x3f800000;
    _DAT_01ee6b5c = 0x3f800000;
    _DAT_01ee6b68 = 0x3f800000;
    _DAT_01ee6b70 = 0x3f800000;
    _DAT_01ee6b7c = 0x3f800000;
    _DAT_01ee6b84 = 0x3f800000;
    _DAT_01ee6b88 = 0x3f800000;
    _DAT_01ee6b8c = 0x3f800000;
    _DAT_01ee6b98 = 0x3f800000;
    _DAT_01ee6a64 = 0;
    _DAT_01ee6a68 = 0;
    _DAT_01ee6a6c = 0;
    _DAT_01ee6a78 = 0;
    _DAT_01ee6a80 = 0;
    _DAT_01ee6a8c = 0;
    _DAT_01ee6a94 = 0;
    _DAT_01ee6a98 = 0;
    _DAT_01ee6a9c = 0;
    _DAT_01ee6aa8 = 0;
    _DAT_01ee6ab0 = 0;
    _DAT_01ee6ab4 = 0;
    _DAT_01ee6abc = 0;
    _DAT_01ee6ac0 = 0;
    _DAT_01ee6ad8 = 0;
    _DAT_01ee6adc = 0;
    _DAT_01ee6ae0 = 0;
    _DAT_01ee6ae4 = 0;
    _DAT_01ee6aec = 0;
    _DAT_01ee6af0 = 0;
    _DAT_01ee6b08 = 0;
    _DAT_01ee6b14 = 0;
    _DAT_01ee6b18 = 0;
    _DAT_01ee6b1c = 0;
    _DAT_01ee6b20 = 0;
    _DAT_01ee6b24 = 0;
    _DAT_01ee6b38 = 0;
    _DAT_01ee6b44 = 0;
    _DAT_01ee6b48 = 0;
    _DAT_01ee6b4c = 0;
    _DAT_01ee6b50 = 0;
    _DAT_01ee6b60 = 0;
    _DAT_01ee6b64 = 0;
    _DAT_01ee6b6c = 0;
    _DAT_01ee6b74 = 0;
    _DAT_01ee6b78 = 0;
    _DAT_01ee6b80 = 0;
    _DAT_01ee6b90 = 0;
    _DAT_01ee6b94 = 0;
    _DAT_01ee6b9c = 0;
    _atexit((_func_4879 *)&DAT_015f2320);
  }
  D3DXMatrixRotationY(local_110);
  fStack_e8 = -0.5;
  uStack_e4 = 0xbf000000;
  auStack_e0[0] = 0;
  D3DXMatrixRotationY(auStack_d8,0x4096cbe4);
  fStack_b0 = -0.5;
  puVar4 = &DAT_01ee6ba0;
  fStack_ac = -0.5;
  fStack_a8 = 0.0;
  pfVar3 = afStack_98;
  do {
    D3DXVec3TransformNormal(&stack0xfffffec0,puVar4,auStack_120);
    unaff_EDI = fStack_f0 + unaff_EDI;
    puVar4 = puVar4 + 0x10;
    unaff_ESI = fStack_ec + unaff_ESI;
    unaff_EBX = fStack_e8 + unaff_EBX;
    pfVar3[-2] = unaff_EDI;
    pfVar3[-1] = unaff_ESI;
    *pfVar3 = unaff_EBX;
    pfVar3 = pfVar3 + 3;
  } while ((int)puVar4 < 0x1ee6bf0);
  puVar4 = &DAT_01ee6bf0;
  pfVar3 = afStack_5c;
  do {
    D3DXVec3TransformNormal(&stack0xfffffec0,puVar4,auStack_e0);
    unaff_EDI = fStack_b0 + unaff_EDI;
    puVar4 = puVar4 + 0x10;
    unaff_ESI = fStack_ac + unaff_ESI;
    unaff_EBX = fStack_a8 + unaff_EBX;
    pfVar3[-2] = unaff_EDI;
    pfVar3[-1] = unaff_ESI;
    *pfVar3 = unaff_EBX;
    pfVar3 = pfVar3 + 3;
  } while ((int)puVar4 < 0x1ee6c40);
  iVar1 = FUN_00f9cae0(0xc,10,uStack_124);
  if ((iVar1 != 0) && (iVar1 = FUN_00f99d50(auStack_a0,0xc,10), iVar1 != 0)) {
    puVar4 = &DAT_01ee6a60;
    uVar2 = 0;
    while ((iVar1 = FUN_00f9cae0(8,10,uStack_124), iVar1 != 0 &&
           (iVar1 = FUN_00f99d50(puVar4,8,10), iVar1 != 0))) {
      uVar2 = uVar2 + 0x50;
      puVar4 = puVar4 + 0x50;
      if (0x13f < uVar2) {
        __security_check_cookie(uStack_24 ^ (uint)&stack0xfffffebc);
        return;
      }
    }
  }
  __security_check_cookie(uStack_24 ^ (uint)&stack0xfffffebc);
  return;
}

// 00F59330  EspPrimitiveWorkCrossBillboard::vf00  size=73  [class]
undefined4 * __thiscall EspPrimitiveWorkCrossBillboard::vf00(undefined4 *param_1,byte param_2)

{
  int iVar1;
  
  *param_1 = vftable;
  iVar1 = 3;
  do {
    thunk_FUN_00fa45a0();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  thunk_FUN_00fa45a0();
  *param_1 = EspPrimitiveWorkBase::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

