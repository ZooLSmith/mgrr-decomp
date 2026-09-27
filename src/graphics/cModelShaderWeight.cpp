// src/graphics/cModelShaderWeight.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F937D0..00F95430, 3 functions

#include "types.h"

// 00F937D0  cModelShaderWeight::cModelShaderWeight  size=603  [class]
/* WARNING: Removing unreachable block (ram,0x00f9386b) */
/* WARNING: Removing unreachable block (ram,0x00f938e8) */
/* WARNING: Removing unreachable block (ram,0x00f9395f) */
/* WARNING: Removing unreachable block (ram,0x00f939e2) */

undefined4 * __fastcall cModelShaderWeight::cModelShaderWeight(undefined4 *param_1)

{
  uint uVar1;
  
  cModelShaderGBuffer::cModelShaderGBuffer_2();
  *param_1 = vftable;
  param_1[0x52] = 0xffffffff;
  param_1[0x53] = 0xffffffff;
  param_1[0x54] = 0xffffffff;
  param_1[0x55] = 0xffffffff;
  param_1[0x56] = 0xffffffff;
  param_1[0x57] = 0xffffffff;
  param_1[0x58] = 0xffffffff;
  param_1[0x59] = 0xffffffff;
  param_1[0x5a] = 0xffffffff;
  param_1[0x5b] = 0xffffffff;
  param_1[0x5c] = 0xffffffff;
  param_1[0x5d] = 0xffffffff;
  param_1[0x5e] = 0xffffffff;
  param_1[0x5f] = 0xffffffff;
  param_1[0x60] = 0xffffffff;
  param_1[99] = 0x1000000;
  param_1[99] = 0x1000111;
  param_1[99] = 0x1111111;
  param_1[99] = param_1[99] & 0x7fffffff;
  param_1[0x61] = 0xffffffff;
  param_1[0x62] = 0xffffffff;
  param_1[99] = 0x1000000;
  param_1[99] = 0x1111111;
  param_1[99] = param_1[99] & 0x7fffffff;
  param_1[0x66] = 0;
  uVar1 = param_1[0x66];
  param_1[0x66] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x66] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x66] = param_1[0x66] & 0x7fffffff;
  param_1[100] = 0xffffffff;
  param_1[0x65] = 0xffffffff;
  param_1[0x66] = 0;
  uVar1 = param_1[0x66];
  param_1[0x66] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x66] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x66] = param_1[0x66] & 0x7fffffff;
  return param_1;
}

// 00F93A90  cModelShaderWeight::vf04  size=77  [class]
void __fastcall cModelShaderWeight::vf04(int param_1)

{
  FUN_00f99300();
  *(undefined4 *)(param_1 + 0x16c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x170) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x174) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x184) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x188) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x18c) = 0x1111111;
  *(undefined4 *)(param_1 + 0x178) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x17c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x180) = 0xffffffff;
  Hw::cShader::vf04();
  return;
}

// 00F95430  cModelShaderWeight::vf00  size=104  [class]
undefined4 * __thiscall cModelShaderWeight::vf00(undefined4 *param_1,byte param_2)

{
  param_1[0x5b] = 0xffffffff;
  param_1[0x5c] = 0xffffffff;
  param_1[0x5d] = 0xffffffff;
  param_1[0x61] = 0xffffffff;
  param_1[0x62] = 0xffffffff;
  param_1[99] = 0x1111111;
  param_1[0x5e] = 0xffffffff;
  param_1[0x5f] = 0xffffffff;
  param_1[0x60] = 0xffffffff;
  *param_1 = cModelShaderGBuffer::vftable;
  FUN_00fc0f40();
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

