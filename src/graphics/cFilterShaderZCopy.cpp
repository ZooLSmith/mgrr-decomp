// src/graphics/cFilterShaderZCopy.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EC10D0..015F1C60, 4 functions

#include "mgrr.h"
#include "cFilterShaderZCopy.h"

// 00EC10D0  cFilterShaderZCopy::cFilterShaderZCopy  size=266  [class]
/* WARNING: Removing unreachable block (ram,0x00ec1125) */
/* WARNING: Removing unreachable block (ram,0x00ec1198) */

undefined4 * __fastcall cFilterShaderZCopy::cFilterShaderZCopy(undefined4 *param_1)

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

// 00EC11E0  cFilterShaderZCopy::vf04  size=30  [class]
void __fastcall cFilterShaderZCopy::vf04(int param_1)

{
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x48) = 0x1111111;
  Hw::cShader::vf04();
  return;
}

// 00EC4330  cFilterShaderZCopy::vf00  size=68  [class]
undefined4 * __thiscall cFilterShaderZCopy::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0xffffffff;
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

// 015F1C60  cFilterShaderZCopy::cFilterShaderZCopy_2  size=68  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cFilterShaderZCopy::cFilterShaderZCopy_2(void)

{
  _DAT_01edcf48 = vftable;
  _DAT_01edcf70 = 0xffffffff;
  _DAT_01edcf74 = 0xffffffff;
  _DAT_01edcf78 = 0xffffffff;
  _DAT_01edcf88 = 0xffffffff;
  _DAT_01edcf8c = 0xffffffff;
  DAT_01edcf90 = 0x1111111;
  Hw::cShader::vf04();
  Hw::cVertexShader::cVertexShader_8();
  return;
}

