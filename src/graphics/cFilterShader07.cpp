// src/graphics/cFilterShader07.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EBFF80..015F1950, 4 functions

#include "mgrr.h"
#include "cFilterShader07.h"

// 00EBFF80  cFilterShader07::cFilterShader07  size=272  [class]
/* WARNING: Removing unreachable block (ram,0x00ebffe2) */
/* WARNING: Removing unreachable block (ram,0x00ec004d) */

undefined4 * __fastcall cFilterShader07::cFilterShader07(undefined4 *param_1)

{
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
  return param_1;
}

// 00EC00D0  cFilterShader07::vf04  size=57  [class]
void __fastcall cFilterShader07::vf04(int param_1)

{
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x60) = 0x1111111;
  Hw::cShader::vf04();
  return;
}

// 00EC3EE0  cFilterShader07::vf00  size=88  [class]
undefined4 * __thiscall cFilterShader07::vf00(undefined4 *param_1,byte param_2)

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
  param_1[0x12] = 0xffffffff;
  param_1[0x13] = 0xffffffff;
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0xffffffff;
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 0xffffffff;
  param_1[0x18] = 0x1111111;
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 015F1950  cFilterShader07::cFilterShader07_2  size=103  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cFilterShader07::cFilterShader07_2(void)

{
  _DAT_01edcae8 = vftable;
  _DAT_01edcb10 = 0xffffffff;
  _DAT_01edcb14 = 0xffffffff;
  _DAT_01edcb18 = 0xffffffff;
  _DAT_01edcb1c = 0xffffffff;
  _DAT_01edcb20 = 0xffffffff;
  _DAT_01edcb24 = 0xffffffff;
  _DAT_01edcb28 = 0xffffffff;
  _DAT_01edcb2c = 0xffffffff;
  _DAT_01edcb30 = 0xffffffff;
  _DAT_01edcb34 = 0xffffffff;
  _DAT_01edcb38 = 0xffffffff;
  _DAT_01edcb3c = 0xffffffff;
  _DAT_01edcb40 = 0xffffffff;
  _DAT_01edcb44 = 0xffffffff;
  _DAT_01edcb48 = 0x1111111;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

