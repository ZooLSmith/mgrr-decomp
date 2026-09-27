// src/graphics/cModelShaderVelocityWeight.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F93AE0..00F954A0, 3 functions

#include "mgrr.h"
#include "cModelShaderVelocityWeight.h"

// 00F93AE0  cModelShaderVelocityWeight::cModelShaderVelocityWeight  size=494  [class]
/* WARNING: Removing unreachable block (ram,0x00f93c0c) */
/* WARNING: Removing unreachable block (ram,0x00f93b1d) */
/* WARNING: Removing unreachable block (ram,0x00f93ba2) */
/* WARNING: Removing unreachable block (ram,0x00f93c8a) */

undefined4 * __fastcall cModelShaderVelocityWeight::cModelShaderVelocityWeight(undefined4 *param_1)

{
  cModelShaderGBuffer::cModelShaderGBuffer();
  *param_1 = vftable;
  param_1[0x54] = 0x1000000;
  param_1[0x54] = 0x1000111;
  param_1[0x54] = 0x1111111;
  param_1[0x54] = param_1[0x54] & 0x7fffffff;
  param_1[0x52] = 0xffffffff;
  param_1[0x53] = 0xffffffff;
  param_1[0x54] = 0x1000000;
  param_1[0x54] = 0x1111111;
  param_1[0x54] = param_1[0x54] & 0x7fffffff;
  param_1[0x57] = 0x1000000;
  param_1[0x57] = 0x1000111;
  param_1[0x57] = 0x1111111;
  param_1[0x57] = param_1[0x57] & 0x7fffffff;
  param_1[0x55] = 0xffffffff;
  param_1[0x56] = 0xffffffff;
  param_1[0x57] = 0x1000000;
  param_1[0x57] = 0x1111111;
  param_1[0x57] = param_1[0x57] & 0x7fffffff;
  return param_1;
}

// 00F93D20  cModelShaderVelocityWeight::vf04  size=60  [class]
void __fastcall cModelShaderVelocityWeight::vf04(int param_1)

{
  FUN_00f99300();
  *(undefined4 *)(param_1 + 0x148) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x14c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x150) = 0x1111111;
  *(undefined4 *)(param_1 + 0x154) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x158) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x15c) = 0x1111111;
  Hw::cShader::vf04();
  return;
}

// 00F954A0  cModelShaderVelocityWeight::vf00  size=89  [class]
undefined4 * __thiscall cModelShaderVelocityWeight::vf00(undefined4 *param_1,byte param_2)

{
  param_1[0x52] = 0xffffffff;
  param_1[0x53] = 0xffffffff;
  param_1[0x54] = 0x1111111;
  param_1[0x55] = 0xffffffff;
  param_1[0x56] = 0xffffffff;
  param_1[0x57] = 0x1111111;
  *param_1 = cModelShaderGBuffer::vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

