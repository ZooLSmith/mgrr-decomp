// src/graphics/cFilterShaderGather.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EC0D20..015F1BF0, 6 functions

#include "mgrr.h"
#include "cFilterShaderGather.h"

// 00EC0D20  cFilterShaderGather::cFilterShaderGather  size=772  [class]
/* WARNING: Removing unreachable block (ram,0x00ec0d70) */
/* WARNING: Removing unreachable block (ram,0x00ec0de1) */
/* WARNING: Removing unreachable block (ram,0x00ec0f5b) */
/* WARNING: Removing unreachable block (ram,0x00ec0e4c) */
/* WARNING: Removing unreachable block (ram,0x00ec0ebd) */
/* WARNING: Removing unreachable block (ram,0x00ec0fdf) */

undefined4 * __fastcall cFilterShaderGather::cFilterShaderGather(undefined4 *param_1)

{
  uint uVar1;
  
  Hw::cPixelShader::cPixelShader();
  *param_1 = vftable;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0xffffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0xffffffff;
  param_1[0x12] = 0x1000000;
  param_1[0x12] = 0x1000111;
  param_1[0x12] = 0x1111111;
  param_1[0x12] = param_1[0x12] & 0x7fffffff;
  param_1[0x10] = 0xffffffff;
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0x1000000;
  param_1[0x12] = 0x1111111;
  param_1[0x12] = param_1[0x12] & 0x7fffffff;
  param_1[0x15] = 0;
  uVar1 = param_1[0x15];
  param_1[0x15] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x15] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x15] = param_1[0x15] & 0x7fffffff;
  param_1[0x13] = 0xffffffff;
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0;
  uVar1 = param_1[0x15];
  param_1[0x15] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x15] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x15] = param_1[0x15] & 0x7fffffff;
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 0xffffffff;
  param_1[0x18] = 0xffffffff;
  param_1[0x19] = 0xffffffff;
  param_1[0x1a] = 0xffffffff;
  param_1[0x1b] = 0xffffffff;
  param_1[0x1c] = 0xffffffff;
  param_1[0x1d] = 0xffffffff;
  param_1[0x1e] = 0xffffffff;
  param_1[0x1f] = 0xffffffff;
  param_1[0x20] = 0xffffffff;
  param_1[0x21] = 0xffffffff;
  param_1[0x24] = 0;
  uVar1 = param_1[0x24];
  param_1[0x24] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x24] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x24] = param_1[0x24] & 0x7fffffff;
  param_1[0x22] = 0xffffffff;
  param_1[0x23] = 0xffffffff;
  param_1[0x24] = 0;
  uVar1 = param_1[0x24];
  param_1[0x24] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x24] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x24] = param_1[0x24] & 0x7fffffff;
  return param_1;
}

// 00EC1030  cFilterShaderGather::vf04  size=58  [class]
void __fastcall cFilterShaderGather::vf04(int param_1)

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
  *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x90) = 0x1111111;
  Hw::cShader::vf04();
  return;
}

// 00EC1070  FUN_00ec1070  size=90  [callgraph]
void __fastcall FUN_00ec1070(int param_1)

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
  *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x90) = 0x1111111;
  Hw::cShader::vf04();
  *(undefined4 *)(param_1 + 0x94) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x98) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x9c) = 0x1111111;
  return;
}

// 00EC22A0  cFilterShaderGather::cFilterShaderGather  size=95  [class]
void __fastcall cFilterShaderGather::cFilterShaderGather(undefined4 *param_1)

{
  *param_1 = cFilterShaderGatherNoise::vftable;
  FUN_00ec1070();
  Hw::cShader::vf04();
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
  param_1[0x22] = 0xffffffff;
  param_1[0x23] = 0xffffffff;
  param_1[0x24] = 0x1111111;
  Hw::cShader::vf04();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 00EC42C0  cFilterShaderGather::vf00  size=98  [class]
undefined4 * __thiscall cFilterShaderGather::vf00(undefined4 *param_1,byte param_2)

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
  param_1[0x22] = 0xffffffff;
  param_1[0x23] = 0xffffffff;
  param_1[0x24] = 0x1111111;
  Hw::cShader::vf04();
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 015F1BF0  cFilterShaderGather::~cFilterShaderGather  size=100  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cFilterShaderGather::~cFilterShaderGather(void)

{
  _DAT_01edce58 = 0x1111111;
  _DAT_01edcea0 = 0x1111111;
  _DAT_01edce10 = vftable;
  _DAT_01edce38 = 0xffffffff;
  _DAT_01edce3c = 0xffffffff;
  _DAT_01edce40 = 0xffffffff;
  _DAT_01edce44 = 0xffffffff;
  _DAT_01edce48 = 0xffffffff;
  _DAT_01edce4c = 0xffffffff;
  _DAT_01edce50 = 0xffffffff;
  _DAT_01edce54 = 0xffffffff;
  _DAT_01edce98 = 0xffffffff;
  _DAT_01edce9c = 0xffffffff;
  Hw::cShader::vf04();
  Hw::cVertexShader::cVertexShader();
  return;
}

