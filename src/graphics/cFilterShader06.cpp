// src/graphics/cFilterShader06.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EBFDF0..015F18E0, 4 functions

#include "mgrr.h"
#include "cFilterShader06.h"

// 00EBFDF0  cFilterShader06::cFilterShader06  size=272  [class]
/* WARNING: Removing unreachable block (ram,0x00ebfe52) */
/* WARNING: Removing unreachable block (ram,0x00ebfebd) */

undefined4 * __fastcall cFilterShader06::cFilterShader06(undefined4 *param_1)

{
  Hw::cPixelShader::cPixelShader();
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

// 00EBFF40  cFilterShader06::vf04  size=57  [class]
void __fastcall cFilterShader06::vf04(int param_1)

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

// 00EC3E80  cFilterShader06::vf00  size=88  [class]
undefined4 * __thiscall cFilterShader06::vf00(undefined4 *param_1,byte param_2)

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
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 015F18E0  cFilterShader06::~cFilterShader06  size=103  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cFilterShader06::~cFilterShader06(void)

{
  _DAT_01edca68 = vftable;
  _DAT_01edca90 = 0xffffffff;
  _DAT_01edca94 = 0xffffffff;
  _DAT_01edca98 = 0xffffffff;
  _DAT_01edca9c = 0xffffffff;
  _DAT_01edcaa0 = 0xffffffff;
  _DAT_01edcaa4 = 0xffffffff;
  _DAT_01edcaa8 = 0xffffffff;
  _DAT_01edcaac = 0xffffffff;
  _DAT_01edcab0 = 0xffffffff;
  _DAT_01edcab4 = 0xffffffff;
  _DAT_01edcab8 = 0xffffffff;
  _DAT_01edcabc = 0xffffffff;
  _DAT_01edcac0 = 0xffffffff;
  _DAT_01edcac4 = 0xffffffff;
  _DAT_01edcac8 = 0x1111111;
  Hw::cVertexShader::cVertexShader();
  return;
}

