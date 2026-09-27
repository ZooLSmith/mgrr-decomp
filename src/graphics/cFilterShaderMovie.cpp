// src/graphics/cFilterShaderMovie.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EC15A0..015F1D70, 4 functions

#include "mgrr.h"
#include "cFilterShaderMovie.h"

// 00EC15A0  cFilterShaderMovie::cFilterShaderMovie  size=266  [class]
/* WARNING: Removing unreachable block (ram,0x00ec15f5) */
/* WARNING: Removing unreachable block (ram,0x00ec1668) */

undefined4 * __fastcall cFilterShaderMovie::cFilterShaderMovie(undefined4 *param_1)

{
  uint uVar1;
  
  Hw::cVertexShader::cVertexShader();
  *param_1 = vftable;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0xffffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0xffffffff;
  param_1[0x12] = 0;
  uVar1 = param_1[0x12];
  param_1[0x12] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x12] = uVar1 & 0xe1fff010 | 0x1000111;
  param_1[0x12] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x12] = param_1[0x12] & 0x7fffffff;
  param_1[0x10] = 0xffffffff;
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0;
  uVar1 = param_1[0x12];
  param_1[0x12] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x12] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x12] = param_1[0x12] & 0x7fffffff;
  return param_1;
}

// 00EC16B0  cFilterShaderMovie::vf04  size=39  [class]
void __fastcall cFilterShaderMovie::vf04(int param_1)

{
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x48) = 0x1111111;
  Hw::cShader::vf04();
  return;
}

// 00EC4420  cFilterShaderMovie::vf00  size=77  [class]
undefined4 * __thiscall cFilterShaderMovie::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0xffffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0xffffffff;
  param_1[0x10] = 0xffffffff;
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0x1111111;
  Hw::cShader::vf04();
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 015F1D70  cFilterShaderMovie::cFilterShaderMovie_2  size=83  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cFilterShaderMovie::cFilterShaderMovie_2(void)

{
  _DAT_01edd078 = vftable;
  _DAT_01edd0a0 = 0xffffffff;
  _DAT_01edd0a4 = 0xffffffff;
  _DAT_01edd0a8 = 0xffffffff;
  _DAT_01edd0ac = 0xffffffff;
  _DAT_01edd0b0 = 0xffffffff;
  _DAT_01edd0b4 = 0xffffffff;
  _DAT_01edd0b8 = 0xffffffff;
  _DAT_01edd0bc = 0xffffffff;
  _DAT_01edd0c0 = 0x1111111;
  Hw::cShader::vf04();
  Hw::cVertexShader::cVertexShader_8();
  return;
}

