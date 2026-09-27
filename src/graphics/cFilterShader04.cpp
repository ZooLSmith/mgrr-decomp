// src/graphics/cFilterShader04.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EBF9A0..015F17E0, 4 functions

#include "mgrr.h"
#include "cFilterShader04.h"

// 00EBF9A0  cFilterShader04::cFilterShader04  size=495  [class]
/* WARNING: Removing unreachable block (ram,0x00ebfa0b) */
/* WARNING: Removing unreachable block (ram,0x00ebfa76) */
/* WARNING: Removing unreachable block (ram,0x00ebfade) */
/* WARNING: Removing unreachable block (ram,0x00ebfb4c) */

undefined4 * __fastcall cFilterShader04::cFilterShader04(undefined4 *param_1)

{
  uint uVar1;
  
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
  param_1[0x1e] = 0;
  uVar1 = param_1[0x1e];
  param_1[0x1e] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x1e] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x1e] = param_1[0x1e] & 0x7fffffff;
  param_1[0x1c] = 0xffffffff;
  param_1[0x1d] = 0xffffffff;
  param_1[0x1e] = 0;
  uVar1 = param_1[0x1e];
  param_1[0x1e] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x1e] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x1e] = param_1[0x1e] & 0x7fffffff;
  return param_1;
}

// 00EBFBE0  cFilterShader04::vf04  size=67  [class]
void __fastcall cFilterShader04::vf04(int param_1)

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
  *(undefined4 *)(param_1 + 100) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x6c) = 0x1111111;
  *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x78) = 0x1111111;
  Hw::cShader::vf04();
  return;
}

// 00EC3DA0  cFilterShader04::vf00  size=100  [class]
undefined4 * __thiscall cFilterShader04::vf00(undefined4 *param_1,byte param_2)

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
  param_1[0x19] = 0xffffffff;
  param_1[0x1a] = 0xffffffff;
  param_1[0x1b] = 0x1111111;
  param_1[0x1c] = 0xffffffff;
  param_1[0x1d] = 0xffffffff;
  param_1[0x1e] = 0x1111111;
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 015F17E0  cFilterShader04::~cFilterShader04  size=120  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cFilterShader04::~cFilterShader04(void)

{
  _DAT_01edc9b4 = 0x1111111;
  _DAT_01edc9c0 = 0x1111111;
  _DAT_01edc948 = vftable;
  _DAT_01edc970 = 0xffffffff;
  _DAT_01edc974 = 0xffffffff;
  _DAT_01edc978 = 0xffffffff;
  _DAT_01edc97c = 0xffffffff;
  _DAT_01edc980 = 0xffffffff;
  _DAT_01edc984 = 0xffffffff;
  _DAT_01edc988 = 0xffffffff;
  _DAT_01edc98c = 0xffffffff;
  _DAT_01edc990 = 0xffffffff;
  _DAT_01edc994 = 0xffffffff;
  _DAT_01edc998 = 0xffffffff;
  _DAT_01edc99c = 0xffffffff;
  _DAT_01edc9ac = 0xffffffff;
  _DAT_01edc9b0 = 0xffffffff;
  _DAT_01edc9b8 = 0xffffffff;
  _DAT_01edc9bc = 0xffffffff;
  Hw::cVertexShader::cVertexShader();
  return;
}

