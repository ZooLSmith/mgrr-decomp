// src/graphics/cFilterShaderDepthWrite.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EBDC10..015F1B40, 5 functions

#include "mgrr.h"
#include "cFilterShaderDepthWrite.h"

// 00EBDC10  cFilterShaderDepthWrite::vf04  size=21  [class]
void __fastcall cFilterShaderDepthWrite::vf04(int param_1)

{
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0x1111111;
  Hw::cShader::vf04();
  return;
}

// 00EC1480  cFilterShaderDepthWrite::cFilterShaderDepthWrite  size=238  [class]
/* WARNING: Removing unreachable block (ram,0x00ec14ba) */
/* WARNING: Removing unreachable block (ram,0x00ec152c) */

undefined4 * __fastcall cFilterShaderDepthWrite::cFilterShaderDepthWrite(undefined4 *param_1)

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

// 00EC1570  cFilterShaderDepthWrite::cFilterShaderDepthWrite_2  size=38  [class]
void __fastcall cFilterShaderDepthWrite::cFilterShaderDepthWrite_2(undefined4 *param_1)

{
  *param_1 = vftable;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0x1111111;
  Hw::cShader::vf04();
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 00EC40E0  cFilterShaderDepthWrite::vf00  size=59  [class]
undefined4 * __thiscall cFilterShaderDepthWrite::vf00(undefined4 *param_1,byte param_2)

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

// 015F1B40  cFilterShaderDepthWrite::cFilterShaderDepthWrite_3  size=53  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cFilterShaderDepthWrite::cFilterShaderDepthWrite_3(void)

{
  _DAT_01edc7c4 = vftable;
  _DAT_01edc7ec = 0xffffffff;
  _DAT_01edc7f0 = 0xffffffff;
  _DAT_01edc7f4 = 0x1111111;
  Hw::cShader::vf04();
  Hw::cVertexShader::cVertexShader_8();
  return;
}

