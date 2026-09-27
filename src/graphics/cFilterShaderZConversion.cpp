// src/graphics/cFilterShaderZConversion.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EC1200..015F1CB0, 4 functions

#include "mgrr.h"
#include "cFilterShaderZConversion.h"

// 00EC1200  cFilterShaderZConversion::cFilterShaderZConversion  size=266  [class]
/* WARNING: Removing unreachable block (ram,0x00ec1255) */
/* WARNING: Removing unreachable block (ram,0x00ec12c8) */

undefined4 * __fastcall cFilterShaderZConversion::cFilterShaderZConversion(undefined4 *param_1)

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

// 00EC1310  cFilterShaderZConversion::vf04  size=39  [class]
void __fastcall cFilterShaderZConversion::vf04(int param_1)

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

// 00EC4380  cFilterShaderZConversion::vf00  size=77  [class]
undefined4 * __thiscall cFilterShaderZConversion::vf00(undefined4 *param_1,byte param_2)

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

// 015F1CB0  cFilterShaderZConversion::cFilterShaderZConversion_2  size=83  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cFilterShaderZConversion::cFilterShaderZConversion_2(void)

{
  _DAT_01edcf98 = vftable;
  _DAT_01edcfc0 = 0xffffffff;
  _DAT_01edcfc4 = 0xffffffff;
  _DAT_01edcfc8 = 0xffffffff;
  _DAT_01edcfcc = 0xffffffff;
  _DAT_01edcfd0 = 0xffffffff;
  _DAT_01edcfd4 = 0xffffffff;
  _DAT_01edcfd8 = 0xffffffff;
  _DAT_01edcfdc = 0xffffffff;
  _DAT_01edcfe0 = 0x1111111;
  Hw::cShader::vf04();
  Hw::cVertexShader::cVertexShader_8();
  return;
}

