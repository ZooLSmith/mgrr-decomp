// src/graphics/cFilterShader2xAAResolve.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EC16E0..015F1E20, 5 functions

#include "mgrr.h"
#include "cFilterShader2xAAResolve.h"

// 00EC16E0  cFilterShader2xAAResolve::cFilterShader2xAAResolve  size=257  [class]
/* WARNING: Removing unreachable block (ram,0x00ec172c) */
/* WARNING: Removing unreachable block (ram,0x00ec179f) */

undefined4 * __fastcall cFilterShader2xAAResolve::cFilterShader2xAAResolve(undefined4 *param_1)

{
  uint uVar1;
  
  Hw::cVertexShader::cVertexShader();
  *param_1 = vftable;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0xffffffff;
  param_1[0xf] = 0;
  uVar1 = param_1[0xf];
  param_1[0xf] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0xf] = uVar1 & 0xe1fff010 | 0x1000111;
  param_1[0xf] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0xf] = param_1[0xf] & 0x7fffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0;
  uVar1 = param_1[0xf];
  param_1[0xf] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0xf] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0xf] = param_1[0xf] & 0x7fffffff;
  return param_1;
}

// 00EC17F0  cFilterShader2xAAResolve::vf04  size=30  [class]
void __fastcall cFilterShader2xAAResolve::vf04(int param_1)

{
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0x1111111;
  Hw::cShader::vf04();
  return;
}

// 00EC4470  cFilterShader2xAAResolve::vf00  size=68  [class]
undefined4 * __thiscall cFilterShader2xAAResolve::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0xffffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0x1111111;
  Hw::cShader::vf04();
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 015F1DD0  cFilterShader2xAAResolve::cFilterShader2xAAResolve_2  size=68  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cFilterShader2xAAResolve::cFilterShader2xAAResolve_2(void)

{
  _DAT_01edd0c8 = vftable;
  _DAT_01edd0f0 = 0xffffffff;
  _DAT_01edd0f4 = 0xffffffff;
  _DAT_01edd0f8 = 0xffffffff;
  _DAT_01edd0fc = 0xffffffff;
  _DAT_01edd100 = 0xffffffff;
  _DAT_01edd104 = 0x1111111;
  Hw::cShader::vf04();
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 015F1E20  cFilterShader2xAAResolve::cFilterShader2xAAResolve_3  size=68  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cFilterShader2xAAResolve::cFilterShader2xAAResolve_3(void)

{
  _DAT_01edd108 = vftable;
  _DAT_01edd130 = 0xffffffff;
  _DAT_01edd134 = 0xffffffff;
  _DAT_01edd138 = 0xffffffff;
  _DAT_01edd13c = 0xffffffff;
  _DAT_01edd140 = 0xffffffff;
  _DAT_01edd144 = 0x1111111;
  Hw::cShader::vf04();
  Hw::cVertexShader::cVertexShader_8();
  return;
}

