// src/graphics/cFilterShader08.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EC0110..015F19C0, 4 functions

#include "types.h"

// 00EC0110  cFilterShader08::cFilterShader08  size=486  [class]
/* WARNING: Removing unreachable block (ram,0x00ec0172) */
/* WARNING: Removing unreachable block (ram,0x00ec01dd) */
/* WARNING: Removing unreachable block (ram,0x00ec0245) */
/* WARNING: Removing unreachable block (ram,0x00ec02b3) */

undefined4 * __fastcall cFilterShader08::cFilterShader08(undefined4 *param_1)

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
  param_1[0x10] = 0xffffffff;
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0xffffffff;
  param_1[0x13] = 0xffffffff;
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0xffffffff;
  param_1[0x18] = 0x1000000;
  param_1[0x18] = 0x1000111;
  param_1[0x18] = 0x1111111;
  param_1[0x18] = param_1[0x18] & 0x7fffffff;
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 0xffffffff;
  param_1[0x18] = 0x1000000;
  param_1[0x18] = 0x1111111;
  param_1[0x18] = param_1[0x18] & 0x7fffffff;
  param_1[0x1b] = 0;
  uVar1 = param_1[0x1b];
  param_1[0x1b] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x1b] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x1b] = param_1[0x1b] & 0x7fffffff;
  param_1[0x19] = 0xffffffff;
  param_1[0x1a] = 0xffffffff;
  param_1[0x1b] = 0;
  uVar1 = param_1[0x1b];
  param_1[0x1b] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x1b] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x1b] = param_1[0x1b] & 0x7fffffff;
  return param_1;
}

// 00EC0340  cFilterShader08::vf04  size=58  [class]
void __fastcall cFilterShader08::vf04(int param_1)

{
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x60) = 0x1111111;
  *(undefined4 *)(param_1 + 100) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6c) = 0x1111111;
  Hw::cShader::vf04();
  return;
}

// 00EC3F40  cFilterShader08::vf00  size=91  [class]
undefined4 * __thiscall cFilterShader08::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0xffffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0xffffffff;
  param_1[0x13] = 0xffffffff;
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0xffffffff;
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 0xffffffff;
  param_1[0x18] = 0x1111111;
  param_1[0x19] = 0xffffffff;
  param_1[0x1a] = 0xffffffff;
  param_1[0x1b] = 0x1111111;
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 015F19C0  cFilterShader08::cFilterShader08_2  size=105  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cFilterShader08::cFilterShader08_2(void)

{
  _DAT_01edcbb0 = 0x1111111;
  _DAT_01edcbbc = 0x1111111;
  _DAT_01edcb50 = vftable;
  _DAT_01edcb78 = 0xffffffff;
  _DAT_01edcb7c = 0xffffffff;
  _DAT_01edcb80 = 0xffffffff;
  _DAT_01edcb84 = 0xffffffff;
  _DAT_01edcb88 = 0xffffffff;
  _DAT_01edcb8c = 0xffffffff;
  _DAT_01edcb9c = 0xffffffff;
  _DAT_01edcba0 = 0xffffffff;
  _DAT_01edcba4 = 0xffffffff;
  _DAT_01edcba8 = 0xffffffff;
  _DAT_01edcbac = 0xffffffff;
  _DAT_01edcbb4 = 0xffffffff;
  _DAT_01edcbb8 = 0xffffffff;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

