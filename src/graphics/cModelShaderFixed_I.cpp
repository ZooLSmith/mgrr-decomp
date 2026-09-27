// src/graphics/cModelShaderFixed_I.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F93620..00F953D0, 3 functions

#include "mgrr.h"
#include "cModelShaderFixed_I.h"

// 00F93620  cModelShaderFixed_I::cModelShaderFixed_I  size=282  [class]
/* WARNING: Removing unreachable block (ram,0x00f9365d) */
/* WARNING: Removing unreachable block (ram,0x00f936dc) */

undefined4 * __fastcall cModelShaderFixed_I::cModelShaderFixed_I(undefined4 *param_1)

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
  param_1[0x55] = 0xffffffff;
  param_1[0x56] = 0xffffffff;
  param_1[0x57] = 0xffffffff;
  return param_1;
}

// 00F93790  cModelShaderFixed_I::vf04  size=59  [class]
void __fastcall cModelShaderFixed_I::vf04(int param_1)

{
  FUN_00f99300();
  *(undefined4 *)(param_1 + 0x154) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x158) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x15c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x148) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x14c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x150) = 0x1111111;
  Hw::cShader::vf04();
  return;
}

// 00F953D0  cModelShaderFixed_I::vf00  size=86  [class]
undefined4 * __thiscall cModelShaderFixed_I::vf00(undefined4 *param_1,byte param_2)

{
  param_1[0x55] = 0xffffffff;
  param_1[0x56] = 0xffffffff;
  param_1[0x57] = 0xffffffff;
  param_1[0x52] = 0xffffffff;
  param_1[0x53] = 0xffffffff;
  param_1[0x54] = 0x1111111;
  *param_1 = cModelShaderGBuffer::vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

