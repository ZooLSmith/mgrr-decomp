// src/graphics/cModelShaderFixed.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F932A0..00F95310, 3 functions

#include "types.h"

// 00F932A0  cModelShaderFixed::cModelShaderFixed  size=349  [class]
/* WARNING: Removing unreachable block (ram,0x00f93305) */
/* WARNING: Removing unreachable block (ram,0x00f93382) */

undefined4 * __fastcall cModelShaderFixed::cModelShaderFixed(undefined4 *param_1)

{
  cModelShaderGBuffer::cModelShaderGBuffer_2();
  *param_1 = vftable;
  param_1[0x52] = 0xffffffff;
  param_1[0x53] = 0xffffffff;
  param_1[0x54] = 0xffffffff;
  param_1[0x55] = 0xffffffff;
  param_1[0x56] = 0xffffffff;
  param_1[0x57] = 0xffffffff;
  param_1[0x5a] = 0x1000000;
  param_1[0x5a] = 0x1000111;
  param_1[0x5a] = 0x1111111;
  param_1[0x5a] = param_1[0x5a] & 0x7fffffff;
  param_1[0x58] = 0xffffffff;
  param_1[0x59] = 0xffffffff;
  param_1[0x5a] = 0x1000000;
  param_1[0x5a] = 0x1111111;
  param_1[0x5a] = param_1[0x5a] & 0x7fffffff;
  param_1[0x5b] = 0xffffffff;
  param_1[0x5c] = 0xffffffff;
  param_1[0x5d] = 0xffffffff;
  param_1[0x5e] = 0xffffffff;
  param_1[0x5f] = 0xffffffff;
  param_1[0x60] = 0xffffffff;
  param_1[0x61] = 0xffffffff;
  param_1[0x62] = 0xffffffff;
  param_1[99] = 0xffffffff;
  return param_1;
}

// 00F93460  cModelShaderFixed::vf04  size=77  [class]
void __fastcall cModelShaderFixed::vf04(int param_1)

{
  FUN_00f99300();
  *(undefined4 *)(param_1 + 0x148) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x14c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x150) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x160) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x164) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x168) = 0x1111111;
  *(undefined4 *)(param_1 + 0x154) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x158) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x15c) = 0xffffffff;
  Hw::cShader::vf04();
  return;
}

// 00F95310  cModelShaderFixed::vf00  size=104  [class]
undefined4 * __thiscall cModelShaderFixed::vf00(undefined4 *param_1,byte param_2)

{
  param_1[0x52] = 0xffffffff;
  param_1[0x53] = 0xffffffff;
  param_1[0x54] = 0xffffffff;
  param_1[0x58] = 0xffffffff;
  param_1[0x59] = 0xffffffff;
  param_1[0x5a] = 0x1111111;
  param_1[0x55] = 0xffffffff;
  param_1[0x56] = 0xffffffff;
  param_1[0x57] = 0xffffffff;
  *param_1 = cModelShaderGBuffer::vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

