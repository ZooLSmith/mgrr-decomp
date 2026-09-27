// src/graphics/cFilterShader05.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EBFC30..015F1860, 4 functions

#include "types.h"

// 00EBFC30  cFilterShader05::cFilterShader05  size=281  [class]
/* WARNING: Removing unreachable block (ram,0x00ebfc9b) */
/* WARNING: Removing unreachable block (ram,0x00ebfd06) */

undefined4 * __fastcall cFilterShader05::cFilterShader05(undefined4 *param_1)

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
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 0xffffffff;
  param_1[0x18] = 0xffffffff;
  param_1[0x1b] = 0x1000000;
  param_1[0x1b] = 0x1000111;
  param_1[0x1b] = 0x1111111;
  param_1[0x1b] = param_1[0x1b] & 0x7fffffff;
  param_1[0x19] = 0xffffffff;
  param_1[0x1a] = 0xffffffff;
  param_1[0x1b] = 0x1000000;
  param_1[0x1b] = 0x1111111;
  param_1[0x1b] = param_1[0x1b] & 0x7fffffff;
  return param_1;
}

// 00EBFDA0  cFilterShader05::vf04  size=66  [class]
void __fastcall cFilterShader05::vf04(int param_1)

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
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  *(undefined4 *)(param_1 + 100) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6c) = 0x1111111;
  Hw::cShader::vf04();
  return;
}

// 00EC3E10  cFilterShader05::vf00  size=97  [class]
undefined4 * __thiscall cFilterShader05::vf00(undefined4 *param_1,byte param_2)

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
  param_1[0x18] = 0xffffffff;
  param_1[0x19] = 0xffffffff;
  param_1[0x1a] = 0xffffffff;
  param_1[0x1b] = 0x1111111;
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 015F1860  cFilterShader05::cFilterShader05_2  size=118  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cFilterShader05::cFilterShader05_2(void)

{
  _DAT_01edc9f8 = vftable;
  _DAT_01edca20 = 0xffffffff;
  _DAT_01edca24 = 0xffffffff;
  _DAT_01edca28 = 0xffffffff;
  _DAT_01edca2c = 0xffffffff;
  _DAT_01edca30 = 0xffffffff;
  _DAT_01edca34 = 0xffffffff;
  _DAT_01edca38 = 0xffffffff;
  _DAT_01edca3c = 0xffffffff;
  _DAT_01edca40 = 0xffffffff;
  _DAT_01edca44 = 0xffffffff;
  _DAT_01edca48 = 0xffffffff;
  _DAT_01edca4c = 0xffffffff;
  _DAT_01edca50 = 0xffffffff;
  _DAT_01edca54 = 0xffffffff;
  _DAT_01edca58 = 0xffffffff;
  _DAT_01edca5c = 0xffffffff;
  _DAT_01edca60 = 0xffffffff;
  _DAT_01edca64 = 0x1111111;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

