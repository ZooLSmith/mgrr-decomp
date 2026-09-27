// src/effect/EspPrimitiveWorkCrossBillboardX3.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F4F2E0..00F59380, 5 functions

#include "types.h"

// 00F4F2E0  EspPrimitiveWorkCrossBillboardX3::EspPrimitiveWorkCrossBillboardX3  size=48  [class]
undefined4 * __fastcall
EspPrimitiveWorkCrossBillboardX3::EspPrimitiveWorkCrossBillboardX3(undefined4 *param_1)

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

// 00F4F360  EspPrimitiveWorkCrossBillboardX3::vf08  size=36  [class]
void EspPrimitiveWorkCrossBillboardX3::vf08(void)

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

// 00F4F390  EspPrimitiveWorkCrossBillboardX3::vf0C  size=95  [class]
void __thiscall EspPrimitiveWorkCrossBillboardX3::vf0C(int param_1,int param_2)

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

// 00F52990  EspPrimitiveWorkCrossBillboardX3::vf04  size=1796  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void EspPrimitiveWorkCrossBillboardX3::vf04(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  float *pfVar3;
  float unaff_EDI;
  undefined *puVar4;
  undefined4 uStack_1dc;
  undefined1 *puStack_1d8;
  float fVar5;
  undefined1 auStack_1c4 [8];
  undefined4 uStack_1bc;
  undefined1 auStack_1b8 [20];
  undefined4 local_1a4;
  undefined1 local_1a0 [24];
  float fStack_188;
  float fStack_184;
  float fStack_180;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 auStack_170 [10];
  float fStack_148;
  float fStack_144;
  float fStack_140;
  undefined1 auStack_138 [16];
  undefined1 auStack_128 [32];
  float fStack_108;
  float fStack_104;
  float fStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined1 auStack_f0 [8];
  float afStack_e8 [15];
  float afStack_ac [18];
  float afStack_64 [14];
  uint uStack_2c;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_1c4;
  local_1a4 = param_1;
  if ((DAT_01ee6f50 & 1) == 0) {
    DAT_01ee6f50 = DAT_01ee6f50 | 1;
    _DAT_01ee6e50 = 0xbf000000;
    _DAT_01ee6e54 = 0x3f000000;
    _DAT_01ee6e60 = 0x3f000000;
    _DAT_01ee6e64 = 0x3f000000;
    _DAT_01ee6e80 = 0x3f000000;
    _DAT_01ee6e90 = 0x3f000000;
    _DAT_01ee6ea4 = 0x3f000000;
    _DAT_01ee6eb4 = 0x3f000000;
    _DAT_01ee6ec0 = 0x3f000000;
    _DAT_01ee6ec4 = 0x3f000000;
    _DAT_01ee6ee0 = 0x3f000000;
    _DAT_01ee6ef0 = 0x3f000000;
    _DAT_01ee6f04 = 0x3f000000;
    _DAT_01ee6f14 = 0x3f000000;
    _DAT_01ee6f20 = 0x3f000000;
    _DAT_01ee6f24 = 0x3f000000;
    _DAT_01ee6f40 = 0x3f000000;
    _DAT_01ee6e58 = 0;
    _DAT_01ee6e68 = 0;
    _DAT_01ee6e78 = 0;
    _DAT_01ee6e88 = 0;
    _DAT_01ee6e98 = 0;
    _DAT_01ee6ea8 = 0;
    _DAT_01ee6eb8 = 0;
    _DAT_01ee6ec8 = 0;
    _DAT_01ee6ed8 = 0;
    _DAT_01ee6ee8 = 0;
    _DAT_01ee6ef8 = 0;
    _DAT_01ee6f08 = 0;
    _DAT_01ee6f18 = 0;
    _DAT_01ee6f28 = 0;
    _DAT_01ee6f38 = 0;
    _DAT_01ee6f48 = 0;
    _DAT_01ee6e70 = 0xbf000000;
    _DAT_01ee6e74 = 0xbf000000;
    _DAT_01ee6e84 = 0xbf000000;
    _DAT_01ee6e94 = 0xbf000000;
    _DAT_01ee6ea0 = 0xbf000000;
    _DAT_01ee6eb0 = 0xbf000000;
    _DAT_01ee6ed0 = 0xbf000000;
    _DAT_01ee6ed4 = 0xbf000000;
    _DAT_01ee6ee4 = 0xbf000000;
    _DAT_01ee6ef4 = 0xbf000000;
    _DAT_01ee6f00 = 0xbf000000;
    _DAT_01ee6f10 = 0xbf000000;
    _DAT_01ee6f30 = 0xbf000000;
    _DAT_01ee6f34 = 0xbf000000;
    _DAT_01ee6f44 = 0xbf000000;
  }
  if ((DAT_01ee6f50 & 2) == 0) {
    DAT_01ee6f50 = DAT_01ee6f50 | 2;
    _DAT_01ee6c48 = 0x3f800000;
    _DAT_01ee6c58 = 0x3f800000;
    _DAT_01ee6c5c = 0x3f800000;
    _DAT_01ee6c64 = 0x3f800000;
    _DAT_01ee6c6c = 0x3f800000;
    _DAT_01ee6c70 = 0x3f800000;
    _DAT_01ee6c78 = 0x3f800000;
    _DAT_01ee6c88 = 0x3f800000;
    _DAT_01ee6c8c = 0x3f800000;
    _DAT_01ee6c94 = 0x3f800000;
    _DAT_01ee6c9c = 0x3f800000;
    _DAT_01ee6ca0 = 0x3f800000;
    _DAT_01ee6ca8 = 0x3f800000;
    _DAT_01ee6cb8 = 0x3f800000;
    _DAT_01ee6cbc = 0x3f800000;
    _DAT_01ee6cc4 = 0x3f800000;
    _DAT_01ee6cd0 = 0x3f800000;
    _DAT_01ee6cdc = 0x3f800000;
    _DAT_01ee6ce0 = 0x3f800000;
    _DAT_01ee6ce4 = 0x3f800000;
    _DAT_01ee6ce8 = 0x3f800000;
    _DAT_01ee6cec = 0x3f800000;
    _DAT_01ee6d00 = 0x3f800000;
    _DAT_01ee6d0c = 0x3f800000;
    _DAT_01ee6d10 = 0x3f800000;
    _DAT_01ee6d14 = 0x3f800000;
    _DAT_01ee6d18 = 0x3f800000;
    _DAT_01ee6d1c = 0x3f800000;
    _DAT_01ee6d30 = 0x3f800000;
    _DAT_01ee6d3c = 0x3f800000;
    _DAT_01ee6d40 = 0x3f800000;
    _DAT_01ee6d44 = 0x3f800000;
    _DAT_01ee6d48 = 0x3f800000;
    _DAT_01ee6d4c = 0x3f800000;
    _DAT_01ee6d54 = 0x3f800000;
    _DAT_01ee6d58 = 0x3f800000;
    _DAT_01ee6d70 = 0x3f800000;
    _DAT_01ee6d74 = 0x3f800000;
    _DAT_01ee6d78 = 0x3f800000;
    _DAT_01ee6d7c = 0x3f800000;
    _DAT_01ee6d84 = 0x3f800000;
    _DAT_01ee6d88 = 0x3f800000;
    _DAT_01ee6da0 = 0x3f800000;
    _DAT_01ee6da4 = 0x3f800000;
    _DAT_01ee6da8 = 0x3f800000;
    _DAT_01ee6dac = 0x3f800000;
    _DAT_01ee6db4 = 0x3f800000;
    _DAT_01ee6db8 = 0x3f800000;
    _DAT_01ee6dcc = 0x3f800000;
    _DAT_01ee6dd0 = 0x3f800000;
    _DAT_01ee6dd4 = 0x3f800000;
    _DAT_01ee6de0 = 0x3f800000;
    _DAT_01ee6de8 = 0x3f800000;
    _DAT_01ee6df4 = 0x3f800000;
    _DAT_01ee6dfc = 0x3f800000;
    _DAT_01ee6e00 = 0x3f800000;
    _DAT_01ee6e04 = 0x3f800000;
    _DAT_01ee6e10 = 0x3f800000;
    _DAT_01ee6e18 = 0x3f800000;
    _DAT_01ee6e24 = 0x3f800000;
    _DAT_01ee6e2c = 0x3f800000;
    _DAT_01ee6e30 = 0x3f800000;
    _DAT_01ee6e34 = 0x3f800000;
    _DAT_01ee6e40 = 0x3f800000;
    _DAT_01ee6c4c = 0;
    _DAT_01ee6c50 = 0;
    _DAT_01ee6c54 = 0;
    _DAT_01ee6c60 = 0;
    _DAT_01ee6c68 = 0;
    _DAT_01ee6c74 = 0;
    _DAT_01ee6c7c = 0;
    _DAT_01ee6c80 = 0;
    _DAT_01ee6c84 = 0;
    _DAT_01ee6c90 = 0;
    _DAT_01ee6c98 = 0;
    _DAT_01ee6ca4 = 0;
    _DAT_01ee6cac = 0;
    _DAT_01ee6cb0 = 0;
    _DAT_01ee6cb4 = 0;
    _DAT_01ee6cc0 = 0;
    _DAT_01ee6cc8 = 0;
    _DAT_01ee6ccc = 0;
    _DAT_01ee6cd4 = 0;
    _DAT_01ee6cd8 = 0;
    _DAT_01ee6cf0 = 0;
    _DAT_01ee6cf4 = 0;
    _DAT_01ee6cf8 = 0;
    _DAT_01ee6cfc = 0;
    _DAT_01ee6d04 = 0;
    _DAT_01ee6d08 = 0;
    _DAT_01ee6d20 = 0;
    _DAT_01ee6d24 = 0;
    _DAT_01ee6d28 = 0;
    _DAT_01ee6d2c = 0;
    _DAT_01ee6d34 = 0;
    _DAT_01ee6d38 = 0;
    _DAT_01ee6d50 = 0;
    _DAT_01ee6d5c = 0;
    _DAT_01ee6d60 = 0;
    _DAT_01ee6d64 = 0;
    _DAT_01ee6d68 = 0;
    _DAT_01ee6d6c = 0;
    _DAT_01ee6d80 = 0;
    _DAT_01ee6d8c = 0;
    _DAT_01ee6d90 = 0;
    _DAT_01ee6d94 = 0;
    _DAT_01ee6d98 = 0;
    _DAT_01ee6d9c = 0;
    _DAT_01ee6db0 = 0;
    _DAT_01ee6dbc = 0;
    _DAT_01ee6dc0 = 0;
    _DAT_01ee6dc4 = 0;
    _DAT_01ee6dc8 = 0;
    _DAT_01ee6dd8 = 0;
    _DAT_01ee6ddc = 0;
    _DAT_01ee6de4 = 0;
    _DAT_01ee6dec = 0;
    _DAT_01ee6df0 = 0;
    _DAT_01ee6df8 = 0;
    _DAT_01ee6e08 = 0;
    _DAT_01ee6e0c = 0;
    _DAT_01ee6e14 = 0;
    _DAT_01ee6e1c = 0;
    _DAT_01ee6e20 = 0;
    _DAT_01ee6e28 = 0;
    _DAT_01ee6e38 = 0;
    _DAT_01ee6e3c = 0;
    _DAT_01ee6e44 = 0;
    puStack_1d8 = (undefined1 *)0xf52e21;
    _atexit((_func_4879 *)&DAT_015f2330);
  }
  puStack_1d8 = local_1a0;
  fVar5 = 3.1415927;
  uStack_1dc = 0xf52e3c;
  D3DXMatrixRotationY();
  uStack_178 = 0xbf000000;
  uStack_174 = 0xbf000000;
  auStack_170[0] = 0;
  uStack_1dc = 0x40860a92;
  D3DXMatrixRotationY(auStack_128);
  fStack_100 = -0.5;
  uStack_fc = 0xbf000000;
  uStack_f8 = 0;
  D3DXMatrixRotationY(auStack_170,0xc0860a92);
  fStack_148 = -0.5;
  puVar4 = &DAT_01ee6e50;
  fStack_144 = -0.5;
  fStack_140 = 0.0;
  pfVar3 = afStack_e8;
  do {
    D3DXVec3TransformNormal(&puStack_1d8,puVar4,auStack_1b8);
    puStack_1d8 = (undefined1 *)(fStack_188 + (float)puStack_1d8);
    puVar4 = puVar4 + 0x10;
    fVar5 = fStack_184 + fVar5;
    unaff_EDI = fStack_180 + unaff_EDI;
    pfVar3[-2] = (float)puStack_1d8;
    pfVar3[-1] = fVar5;
    *pfVar3 = unaff_EDI;
    pfVar3 = pfVar3 + 3;
  } while ((int)puVar4 < 0x1ee6ea0);
  puVar4 = &DAT_01ee6ea0;
  pfVar3 = afStack_ac;
  do {
    D3DXVec3TransformNormal(&puStack_1d8,puVar4,auStack_138);
    puStack_1d8 = (undefined1 *)(fStack_108 + (float)puStack_1d8);
    puVar4 = puVar4 + 0x10;
    fVar5 = fStack_104 + fVar5;
    unaff_EDI = fStack_100 + unaff_EDI;
    pfVar3[-2] = (float)puStack_1d8;
    pfVar3[-1] = fVar5;
    *pfVar3 = unaff_EDI;
    pfVar3 = pfVar3 + 3;
  } while ((int)puVar4 < 0x1ee6f00);
  puVar4 = &DAT_01ee6f00;
  pfVar3 = afStack_64;
  do {
    D3DXVec3TransformNormal(&puStack_1d8,puVar4,&uStack_178);
    puStack_1d8 = (undefined1 *)(fStack_148 + (float)puStack_1d8);
    puVar4 = puVar4 + 0x10;
    fVar5 = fStack_144 + fVar5;
    unaff_EDI = fStack_140 + unaff_EDI;
    pfVar3[-2] = (float)puStack_1d8;
    pfVar3[-1] = fVar5;
    *pfVar3 = unaff_EDI;
    pfVar3 = pfVar3 + 3;
  } while ((int)puVar4 < 0x1ee6f50);
  iVar1 = FUN_00f9cae0(0xc,0x10,param_1);
  if ((iVar1 != 0) && (iVar1 = FUN_00f99d50(auStack_f0,0xc,0x10), iVar1 != 0)) {
    puVar4 = &DAT_01ee6c48;
    uVar2 = 0;
    while ((iVar1 = FUN_00f9cae0(8,0x10,uStack_1bc), iVar1 != 0 &&
           (iVar1 = FUN_00f99d50(puVar4,8,0x10), iVar1 != 0))) {
      uVar2 = uVar2 + 0x80;
      puVar4 = puVar4 + 0x80;
      if (0x1ff < uVar2) {
        __security_check_cookie(uStack_2c ^ (uint)&uStack_1dc);
        return;
      }
    }
  }
  __security_check_cookie(uStack_2c ^ (uint)&uStack_1dc);
  return;
}

// 00F59380  EspPrimitiveWorkCrossBillboardX3::vf00  size=73  [class]
undefined4 * __thiscall EspPrimitiveWorkCrossBillboardX3::vf00(undefined4 *param_1,byte param_2)

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

