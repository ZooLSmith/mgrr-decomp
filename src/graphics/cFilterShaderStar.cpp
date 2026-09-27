// src/graphics/cFilterShaderStar.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EC1940..015F1EC0, 5 functions

#include "mgrr.h"
#include "cFilterShaderStar.h"

// 00EC1940  cFilterShaderStar::cFilterShaderStar  size=238  [class]
/* WARNING: Removing unreachable block (ram,0x00ec197a) */
/* WARNING: Removing unreachable block (ram,0x00ec19ec) */

undefined4 * __fastcall cFilterShaderStar::cFilterShaderStar(undefined4 *param_1)

{
  Hw::cVertexShader::cVertexShader();
  *param_1 = vftable;
  param_1[0xc] = 0x1000000;
  param_1[0xc] = 0x1000111;
  param_1[0xc] = 0x1111111;
  param_1[0xc] = param_1[0xc] & 0x7fffffff;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0x1000000;
  param_1[0xc] = 0x1111111;
  param_1[0xc] = param_1[0xc] & 0x7fffffff;
  return param_1;
}

// 00EC1A30  cFilterShaderStar::vf04  size=21  [class]
void __fastcall cFilterShaderStar::vf04(int param_1)

{
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0x1111111;
  Hw::cShader::vf04();
  return;
}

// 00EC1FA0  cFilterShaderStar::cFilterShaderStar_2  size=38  [class]
void __fastcall cFilterShaderStar::cFilterShaderStar_2(undefined4 *param_1)

{
  *param_1 = vftable;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0x1111111;
  Hw::cShader::vf04();
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 00EC4510  cFilterShaderStar::vf00  size=59  [class]
undefined4 * __thiscall cFilterShaderStar::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0x1111111;
  Hw::cShader::vf04();
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 015F1EC0  cFilterShaderStar::cFilterShaderStar_3  size=53  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cFilterShaderStar::cFilterShaderStar_3(void)

{
  _DAT_01edc9c4 = vftable;
  _DAT_01edc9ec = 0xffffffff;
  _DAT_01edc9f0 = 0xffffffff;
  _DAT_01edc9f4 = 0x1111111;
  Hw::cShader::vf04();
  Hw::cVertexShader::cVertexShader_8();
  return;
}

