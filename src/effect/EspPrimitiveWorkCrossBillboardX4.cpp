// src/effect/EspPrimitiveWorkCrossBillboardX4.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F4F410..00F593D0, 5 functions

#include "mgrr.h"
#include "EspPrimitiveWorkCrossBillboardX4.h"

// 00F4F410  EspPrimitiveWorkCrossBillboardX4::EspPrimitiveWorkCrossBillboardX4  size=48  [class]
undefined4 * __fastcall
EspPrimitiveWorkCrossBillboardX4::EspPrimitiveWorkCrossBillboardX4(undefined4 *param_1)

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

// 00F4F490  EspPrimitiveWorkCrossBillboardX4::vf08  size=36  [class]
void EspPrimitiveWorkCrossBillboardX4::vf08(void)

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

// 00F4F4C0  EspPrimitiveWorkCrossBillboardX4::vf0C  size=95  [class]
void __thiscall EspPrimitiveWorkCrossBillboardX4::vf0C(int param_1,int param_2)

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

// 00F530A0  EspPrimitiveWorkCrossBillboardX4::vf04  size=2440  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void EspPrimitiveWorkCrossBillboardX4::vf04(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  float *pfVar3;
  float unaff_EDI;
  undefined *puVar4;
  undefined4 uStack_21c;
  undefined1 *puStack_218;
  float fVar5;
  undefined1 auStack_204 [8];
  undefined4 uStack_1fc;
  undefined1 auStack_1f8 [20];
  undefined4 local_1e4;
  undefined1 local_1e0 [24];
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 auStack_1b0 [10];
  float fStack_188;
  float fStack_184;
  float fStack_180;
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [32];
  float fStack_148;
  float fStack_144;
  float fStack_140;
  undefined4 uStack_13c;
  undefined4 auStack_138 [2];
  float afStack_130 [13];
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
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
  float afStack_ac [18];
  float afStack_64 [14];
  uint uStack_2c;
  uint local_14;
  
  local_14 = DAT_018e8764 ^ (uint)auStack_204;
  local_1e4 = param_1;
  if ((DAT_01ee7380 & 1) == 0) {
    DAT_01ee7380 = DAT_01ee7380 | 1;
    _DAT_01ee7220 = 0xbf000000;
    _DAT_01ee7224 = 0x3f000000;
    _DAT_01ee7230 = 0x3f000000;
    _DAT_01ee7234 = 0x3f000000;
    _DAT_01ee7250 = 0x3f000000;
    _DAT_01ee7260 = 0x3f000000;
    _DAT_01ee7278 = 0x3f000000;
    _DAT_01ee7288 = 0x3f000000;
    _DAT_01ee7228 = 0;
    _DAT_01ee7238 = 0;
    _DAT_01ee7248 = 0;
    _DAT_01ee7258 = 0;
    _DAT_01ee7268 = 0;
    _DAT_01ee7274 = 0;
    _DAT_01ee7284 = 0;
    _DAT_01ee7294 = 0;
    _DAT_01ee7240 = 0xbf000000;
    _DAT_01ee7244 = 0xbf000000;
    _DAT_01ee7254 = 0xbf000000;
    _DAT_01ee7264 = 0xbf000000;
    _DAT_01ee7270 = 0xbf000000;
    _DAT_01ee7280 = 0xbf000000;
    _DAT_01ee7290 = 0xbf000000;
    _DAT_01ee7298 = 0xbf000000;
    _DAT_01ee72a0 = 0xbf000000;
    _DAT_01ee72a4 = 0xbf800000;
    _DAT_01ee72b4 = 0xbf800000;
    _DAT_01ee72c4 = 0xbf800000;
    _DAT_01ee72a8 = 0x3f000000;
    _DAT_01ee72d4 = 0x3f000000;
    _DAT_01ee72e4 = 0x3f000000;
    _DAT_01ee72f0 = 0x3f000000;
    _DAT_01ee72f4 = 0x3f000000;
    _DAT_01ee7310 = 0x3f000000;
    _DAT_01ee7320 = 0x3f000000;
    _DAT_01ee7334 = 0x3f000000;
    _DAT_01ee7344 = 0x3f000000;
    _DAT_01ee7350 = 0x3f000000;
    _DAT_01ee7354 = 0x3f000000;
    _DAT_01ee7370 = 0x3f000000;
    _DAT_01ee72b0 = 0xbf000000;
    _DAT_01ee72b8 = 0xbf000000;
    _DAT_01ee72c0 = 0xbf000000;
    _DAT_01ee72c8 = 0xbf000000;
    _DAT_01ee72d0 = 0xbf000000;
    _DAT_01ee72e0 = 0xbf000000;
    _DAT_01ee7300 = 0xbf000000;
    _DAT_01ee7304 = 0xbf000000;
    _DAT_01ee7314 = 0xbf000000;
    _DAT_01ee7324 = 0xbf000000;
    _DAT_01ee7330 = 0xbf000000;
    _DAT_01ee7340 = 0xbf000000;
    _DAT_01ee7360 = 0xbf000000;
    _DAT_01ee7364 = 0xbf000000;
    _DAT_01ee7374 = 0xbf000000;
    _DAT_01ee72d8 = 0;
    _DAT_01ee72e8 = 0;
    _DAT_01ee72f8 = 0;
    _DAT_01ee7308 = 0;
    _DAT_01ee7318 = 0;
    _DAT_01ee7328 = 0;
    _DAT_01ee7338 = 0;
    _DAT_01ee7348 = 0;
    _DAT_01ee7358 = 0;
    _DAT_01ee7368 = 0;
    _DAT_01ee7378 = 0;
  }
  if ((DAT_01ee7380 & 2) == 0) {
    DAT_01ee7380 = DAT_01ee7380 | 2;
    _DAT_01ee6f58 = 0x3f800000;
    _DAT_01ee6f68 = 0x3f800000;
    _DAT_01ee6f6c = 0x3f800000;
    _DAT_01ee6f74 = 0x3f800000;
    _DAT_01ee6f7c = 0x3f800000;
    _DAT_01ee6f80 = 0x3f800000;
    _DAT_01ee6f88 = 0x3f800000;
    _DAT_01ee6f98 = 0x3f800000;
    _DAT_01ee6f9c = 0x3f800000;
    _DAT_01ee6fa4 = 0x3f800000;
    _DAT_01ee6fac = 0x3f800000;
    _DAT_01ee6fb0 = 0x3f800000;
    _DAT_01ee6fb8 = 0x3f800000;
    _DAT_01ee6fc8 = 0x3f800000;
    _DAT_01ee6fcc = 0x3f800000;
    _DAT_01ee6fd4 = 0x3f800000;
    _DAT_01ee6fdc = 0x3f800000;
    _DAT_01ee6fe0 = 0x3f800000;
    _DAT_01ee6fe8 = 0x3f800000;
    _DAT_01ee6ff8 = 0x3f800000;
    _DAT_01ee6ffc = 0x3f800000;
    _DAT_01ee7004 = 0x3f800000;
    _DAT_01ee7010 = 0x3f800000;
    _DAT_01ee701c = 0x3f800000;
    _DAT_01ee7020 = 0x3f800000;
    _DAT_01ee7024 = 0x3f800000;
    _DAT_01ee7028 = 0x3f800000;
    _DAT_01ee702c = 0x3f800000;
    _DAT_01ee7040 = 0x3f800000;
    _DAT_01ee704c = 0x3f800000;
    _DAT_01ee7050 = 0x3f800000;
    _DAT_01ee7054 = 0x3f800000;
    _DAT_01ee7058 = 0x3f800000;
    _DAT_01ee705c = 0x3f800000;
    _DAT_01ee7070 = 0x3f800000;
    _DAT_01ee707c = 0x3f800000;
    _DAT_01ee7080 = 0x3f800000;
    _DAT_01ee7084 = 0x3f800000;
    _DAT_01ee7088 = 0x3f800000;
    _DAT_01ee708c = 0x3f800000;
    _DAT_01ee70a0 = 0x3f800000;
    _DAT_01ee70ac = 0x3f800000;
    _DAT_01ee70b0 = 0x3f800000;
    _DAT_01ee70b4 = 0x3f800000;
    _DAT_01ee70b8 = 0x3f800000;
    _DAT_01ee70bc = 0x3f800000;
    _DAT_01ee70c4 = 0x3f800000;
    _DAT_01ee70c8 = 0x3f800000;
    _DAT_01ee70e0 = 0x3f800000;
    _DAT_01ee70e4 = 0x3f800000;
    _DAT_01ee70e8 = 0x3f800000;
    _DAT_01ee70ec = 0x3f800000;
    _DAT_01ee70f4 = 0x3f800000;
    _DAT_01ee70f8 = 0x3f800000;
    _DAT_01ee7110 = 0x3f800000;
    _DAT_01ee7114 = 0x3f800000;
    _DAT_01ee7118 = 0x3f800000;
    _DAT_01ee711c = 0x3f800000;
    _DAT_01ee7124 = 0x3f800000;
    _DAT_01ee7128 = 0x3f800000;
    _DAT_01ee7140 = 0x3f800000;
    _DAT_01ee7144 = 0x3f800000;
    _DAT_01ee7148 = 0x3f800000;
    _DAT_01ee714c = 0x3f800000;
    _DAT_01ee7154 = 0x3f800000;
    _DAT_01ee7158 = 0x3f800000;
    _DAT_01ee716c = 0x3f800000;
    _DAT_01ee7170 = 0x3f800000;
    _DAT_01ee7174 = 0x3f800000;
    _DAT_01ee7180 = 0x3f800000;
    _DAT_01ee7188 = 0x3f800000;
    _DAT_01ee7194 = 0x3f800000;
    _DAT_01ee719c = 0x3f800000;
    _DAT_01ee71a0 = 0x3f800000;
    _DAT_01ee71a4 = 0x3f800000;
    _DAT_01ee71b0 = 0x3f800000;
    _DAT_01ee71b8 = 0x3f800000;
    _DAT_01ee71c4 = 0x3f800000;
    _DAT_01ee71cc = 0x3f800000;
    _DAT_01ee71d0 = 0x3f800000;
    _DAT_01ee71d4 = 0x3f800000;
    _DAT_01ee71e0 = 0x3f800000;
    _DAT_01ee71e8 = 0x3f800000;
    _DAT_01ee71f4 = 0x3f800000;
    _DAT_01ee71fc = 0x3f800000;
    _DAT_01ee7200 = 0x3f800000;
    _DAT_01ee7204 = 0x3f800000;
    _DAT_01ee7210 = 0x3f800000;
    _DAT_01ee6f5c = 0;
    _DAT_01ee6f60 = 0;
    _DAT_01ee6f64 = 0;
    _DAT_01ee6f70 = 0;
    _DAT_01ee6f78 = 0;
    _DAT_01ee6f84 = 0;
    _DAT_01ee6f8c = 0;
    _DAT_01ee6f90 = 0;
    _DAT_01ee6f94 = 0;
    _DAT_01ee6fa0 = 0;
    _DAT_01ee6fa8 = 0;
    _DAT_01ee6fb4 = 0;
    _DAT_01ee6fbc = 0;
    _DAT_01ee6fc0 = 0;
    _DAT_01ee6fc4 = 0;
    _DAT_01ee6fd0 = 0;
    _DAT_01ee6fd8 = 0;
    _DAT_01ee6fe4 = 0;
    _DAT_01ee6fec = 0;
    _DAT_01ee6ff0 = 0;
    _DAT_01ee6ff4 = 0;
    _DAT_01ee7000 = 0;
    _DAT_01ee7008 = 0;
    _DAT_01ee700c = 0;
    _DAT_01ee7014 = 0;
    _DAT_01ee7018 = 0;
    _DAT_01ee7030 = 0;
    _DAT_01ee7034 = 0;
    _DAT_01ee7038 = 0;
    _DAT_01ee703c = 0;
    _DAT_01ee7044 = 0;
    _DAT_01ee7048 = 0;
    _DAT_01ee7060 = 0;
    _DAT_01ee7064 = 0;
    _DAT_01ee7068 = 0;
    _DAT_01ee706c = 0;
    _DAT_01ee7074 = 0;
    _DAT_01ee7078 = 0;
    _DAT_01ee7090 = 0;
    _DAT_01ee7094 = 0;
    _DAT_01ee7098 = 0;
    _DAT_01ee709c = 0;
    _DAT_01ee70a4 = 0;
    _DAT_01ee70a8 = 0;
    _DAT_01ee70c0 = 0;
    _DAT_01ee70cc = 0;
    _DAT_01ee70d0 = 0;
    _DAT_01ee70d4 = 0;
    _DAT_01ee70d8 = 0;
    _DAT_01ee70dc = 0;
    _DAT_01ee70f0 = 0;
    _DAT_01ee70fc = 0;
    _DAT_01ee7100 = 0;
    _DAT_01ee7104 = 0;
    _DAT_01ee7108 = 0;
    _DAT_01ee710c = 0;
    _DAT_01ee7120 = 0;
    _DAT_01ee712c = 0;
    _DAT_01ee7130 = 0;
    _DAT_01ee7134 = 0;
    _DAT_01ee7138 = 0;
    _DAT_01ee713c = 0;
    _DAT_01ee7150 = 0;
    _DAT_01ee715c = 0;
    _DAT_01ee7160 = 0;
    _DAT_01ee7164 = 0;
    _DAT_01ee7168 = 0;
    _DAT_01ee7178 = 0;
    _DAT_01ee717c = 0;
    _DAT_01ee7184 = 0;
    _DAT_01ee718c = 0;
    _DAT_01ee7190 = 0;
    _DAT_01ee7198 = 0;
    _DAT_01ee71a8 = 0;
    _DAT_01ee71ac = 0;
    _DAT_01ee71b4 = 0;
    _DAT_01ee71bc = 0;
    _DAT_01ee71c0 = 0;
    _DAT_01ee71c8 = 0;
    _DAT_01ee71d8 = 0;
    _DAT_01ee71dc = 0;
    _DAT_01ee71e4 = 0;
    _DAT_01ee71ec = 0;
    _DAT_01ee71f0 = 0;
    _DAT_01ee71f8 = 0;
    _DAT_01ee7208 = 0;
    _DAT_01ee720c = 0;
    _DAT_01ee7214 = 0;
    puStack_218 = (undefined1 *)0xf536c5;
    _atexit((_func_4879 *)&DAT_015f2340);
  }
  puStack_218 = local_1e0;
  fVar5 = 3.1415927;
  uStack_21c = 0xf536e0;
  D3DXMatrixRotationY();
  uStack_1b8 = 0xbf000000;
  uStack_1b4 = 0xbf000000;
  auStack_1b0[0] = 0;
  uStack_21c = 0x407b53d1;
  D3DXMatrixRotationY(auStack_168);
  fStack_140 = -0.5;
  uStack_13c = 0xbf000000;
  auStack_138[0] = 0;
  D3DXMatrixRotationY(auStack_1b0,0xc07b53d1);
  fStack_188 = -0.5;
  puVar4 = &DAT_01ee7220;
  fStack_184 = -0.5;
  fStack_180 = 0.0;
  pfVar3 = afStack_130;
  do {
    D3DXVec3TransformNormal(&puStack_218,puVar4,auStack_1f8);
    puStack_218 = (undefined1 *)(fStack_1c8 + (float)puStack_218);
    puVar4 = puVar4 + 0x10;
    fVar5 = fStack_1c4 + fVar5;
    unaff_EDI = fStack_1c0 + unaff_EDI;
    pfVar3[-2] = (float)puStack_218;
    pfVar3[-1] = fVar5;
    *pfVar3 = unaff_EDI;
    pfVar3 = pfVar3 + 3;
  } while ((int)puVar4 < 0x1ee7270);
  puVar4 = &DAT_01ee72d0;
  uStack_fc = _DAT_01ee7270;
  uStack_f8 = _DAT_01ee7274;
  uStack_f4 = _DAT_01ee7278;
  uStack_f0 = _DAT_01ee7280;
  uStack_ec = _DAT_01ee7284;
  uStack_e8 = _DAT_01ee7288;
  uStack_e4 = _DAT_01ee7290;
  uStack_e0 = _DAT_01ee7294;
  uStack_dc = _DAT_01ee7298;
  uStack_d8 = _DAT_01ee72a0;
  uStack_d4 = _DAT_01ee72a4;
  uStack_d0 = _DAT_01ee72a8;
  uStack_cc = _DAT_01ee72b0;
  uStack_c8 = _DAT_01ee72b4;
  uStack_c4 = _DAT_01ee72b8;
  uStack_c0 = _DAT_01ee72c0;
  uStack_bc = _DAT_01ee72c4;
  uStack_b8 = _DAT_01ee72c8;
  pfVar3 = afStack_ac;
  do {
    D3DXVec3TransformNormal(&puStack_218,puVar4,auStack_178);
    puStack_218 = (undefined1 *)(fStack_148 + (float)puStack_218);
    puVar4 = puVar4 + 0x10;
    fVar5 = fStack_144 + fVar5;
    unaff_EDI = fStack_140 + unaff_EDI;
    pfVar3[-2] = (float)puStack_218;
    pfVar3[-1] = fVar5;
    *pfVar3 = unaff_EDI;
    pfVar3 = pfVar3 + 3;
  } while ((int)puVar4 < 0x1ee7330);
  puVar4 = &DAT_01ee7330;
  pfVar3 = afStack_64;
  do {
    D3DXVec3TransformNormal(&puStack_218,puVar4,&uStack_1b8);
    puStack_218 = (undefined1 *)(fStack_188 + (float)puStack_218);
    puVar4 = puVar4 + 0x10;
    fVar5 = fStack_184 + fVar5;
    unaff_EDI = fStack_180 + unaff_EDI;
    pfVar3[-2] = (float)puStack_218;
    pfVar3[-1] = fVar5;
    *pfVar3 = unaff_EDI;
    pfVar3 = pfVar3 + 3;
  } while ((int)puVar4 < 0x1ee7380);
  iVar1 = FUN_00f9cae0(0xc,0x16,uStack_1fc);
  if ((iVar1 != 0) && (iVar1 = FUN_00f99d50(auStack_138,0xc,0x16), iVar1 != 0)) {
    puVar4 = &DAT_01ee6f58;
    uVar2 = 0;
    while ((iVar1 = FUN_00f9cae0(8,0x16,uStack_1fc), iVar1 != 0 &&
           (iVar1 = FUN_00f99d50(puVar4,8,0x16), iVar1 != 0))) {
      uVar2 = uVar2 + 0xb0;
      puVar4 = puVar4 + 0xb0;
      if (0x2bf < uVar2) {
        __security_check_cookie(uStack_2c ^ (uint)&uStack_21c);
        return;
      }
    }
  }
  __security_check_cookie(uStack_2c ^ (uint)&uStack_21c);
  return;
}

// 00F593D0  EspPrimitiveWorkCrossBillboardX4::vf00  size=73  [class]
undefined4 * __thiscall EspPrimitiveWorkCrossBillboardX4::vf00(undefined4 *param_1,byte param_2)

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

