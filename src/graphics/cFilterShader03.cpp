// src/graphics/cFilterShader03.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EBF790..00EC3D80, 3 functions

#include "types.h"

// 00EBF790  cFilterShader03::cFilterShader03  size=320  [class]
/* WARNING: Removing unreachable block (ram,0x00ebf7fd) */
/* WARNING: Removing unreachable block (ram,0x00ebf888) */

undefined4 * __fastcall cFilterShader03::cFilterShader03(undefined4 *param_1)

{
  uint uVar1;
  
  cFilterShader00::cFilterShader00_2();
  *param_1 = vftable;
  param_1[0x1f] = 0xffffffff;
  param_1[0x20] = 0xffffffff;
  param_1[0x21] = 0xffffffff;
  param_1[0x22] = 0xffffffff;
  param_1[0x23] = 0xffffffff;
  param_1[0x24] = 0xffffffff;
  param_1[0x27] = 0;
  uVar1 = param_1[0x27];
  param_1[0x27] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x27] = uVar1 & 0xe1fff010 | 0x1000111;
  param_1[0x27] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x27] = param_1[0x27] & 0x7fffffff;
  param_1[0x25] = 0xffffffff;
  param_1[0x26] = 0xffffffff;
  param_1[0x27] = 0;
  uVar1 = param_1[0x27];
  param_1[0x27] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x27] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x27] = param_1[0x27] & 0x7fffffff;
  return param_1;
}

// 00EBF960  cFilterShader03::vf04  size=63  [class]
void __fastcall cFilterShader03::vf04(int param_1)

{
  *(undefined4 *)(param_1 + 0x7c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x80) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x84) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x94) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x98) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x9c) = 0x1111111;
  Hw::cShader::vf04();
  return;
}

// 00EC3D80  cFilterShader03::vf00  size=30  [class]
undefined4 __thiscall cFilterShader03::vf00(undefined4 param_1,byte param_2)

{
  cFilterShader00::cFilterShader00();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

