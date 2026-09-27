// src/graphics/cFilterShaderZCullReload.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EB2440..015F1640, 4 functions

#include "types.h"

// 00EB2440  cFilterShaderZCullReload::cFilterShaderZCullReload  size=39  [class]
undefined4 * __fastcall cFilterShaderZCullReload::cFilterShaderZCullReload(undefined4 *param_1)

{
  Hw::cVertexShader::cVertexShader();
  *param_1 = vftable;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0xffffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0xffffffff;
  return param_1;
}

// 00EB2470  cFilterShaderZCullReload::vf04  size=26  [class]
void __fastcall cFilterShaderZCullReload::vf04(int param_1)

{
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  Hw::cShader::vf04();
  return;
}

// 00EC39C0  cFilterShaderZCullReload::vf00  size=64  [class]
undefined4 * __thiscall cFilterShaderZCullReload::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0xffffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0xffffffff;
  Hw::cShader::vf04();
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 015F1640  cFilterShaderZCullReload::cFilterShaderZCullReload_2  size=63  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cFilterShaderZCullReload::cFilterShaderZCullReload_2(void)

{
  _DAT_01edd038 = vftable;
  _DAT_01edd060 = 0xffffffff;
  _DAT_01edd064 = 0xffffffff;
  _DAT_01edd068 = 0xffffffff;
  _DAT_01edd06c = 0xffffffff;
  _DAT_01edd070 = 0xffffffff;
  _DAT_01edd074 = 0xffffffff;
  Hw::cShader::vf04();
  Hw::cVertexShader::cVertexShader_8();
  return;
}

