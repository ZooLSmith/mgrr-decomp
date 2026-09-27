// src/graphics/cFilterShaderOculus.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EBDB30..015F1AF0, 4 functions

#include "mgrr.h"
#include "cFilterShaderOculus.h"

// 00EBDB30  cFilterShaderOculus::vf04  size=30  [class]
void __fastcall cFilterShaderOculus::vf04(int param_1)

{
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0x1111111;
  Hw::cShader::vf04();
  return;
}

// 00EC0BF0  cFilterShaderOculus::cFilterShaderOculus  size=246  [class]
/* WARNING: Removing unreachable block (ram,0x00ec0c2a) */
/* WARNING: Removing unreachable block (ram,0x00ec0c97) */

undefined4 * __fastcall cFilterShaderOculus::cFilterShaderOculus(undefined4 *param_1)

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
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0xffffffff;
  return param_1;
}

// 00EC4090  cFilterShaderOculus::vf00  size=68  [class]
undefined4 * __thiscall cFilterShaderOculus::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0xffffffff;
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

// 015F1AF0  cFilterShaderOculus::cFilterShaderOculus_2  size=68  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cFilterShaderOculus::cFilterShaderOculus_2(void)

{
  _DAT_01edcdd0 = vftable;
  _DAT_01edce04 = 0xffffffff;
  _DAT_01edce08 = 0xffffffff;
  _DAT_01edce0c = 0xffffffff;
  _DAT_01edcdf8 = 0xffffffff;
  _DAT_01edcdfc = 0xffffffff;
  _DAT_01edce00 = 0x1111111;
  Hw::cShader::vf04();
  Hw::cVertexShader::cVertexShader_8();
  return;
}

