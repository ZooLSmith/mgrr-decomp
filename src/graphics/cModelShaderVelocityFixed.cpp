// src/graphics/cModelShaderVelocityFixed.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F934B0..00F95380, 3 functions

#include "types.h"

// 00F934B0  cModelShaderVelocityFixed::cModelShaderVelocityFixed  size=265  [class]
/* WARNING: Removing unreachable block (ram,0x00f934ed) */
/* WARNING: Removing unreachable block (ram,0x00f93571) */

undefined4 * __fastcall cModelShaderVelocityFixed::cModelShaderVelocityFixed(undefined4 *param_1)

{
  cModelShaderGBuffer::cModelShaderGBuffer_2();
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
  return param_1;
}

// 00F935F0  cModelShaderVelocityFixed::vf04  size=41  [class]
void __fastcall cModelShaderVelocityFixed::vf04(int param_1)

{
  FUN_00f99300();
  *(undefined4 *)(param_1 + 0x148) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x14c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x150) = 0x1111111;
  Hw::cShader::vf04();
  return;
}

// 00F95380  cModelShaderVelocityFixed::vf00  size=68  [class]
undefined4 * __thiscall cModelShaderVelocityFixed::vf00(undefined4 *param_1,byte param_2)

{
  param_1[0x52] = 0xffffffff;
  param_1[0x53] = 0xffffffff;
  param_1[0x54] = 0x1111111;
  *param_1 = cModelShaderGBuffer::vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

