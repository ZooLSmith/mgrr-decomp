// src/graphics/cFilterShader01.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EBF5A0..015F1770, 5 functions

#include "mgrr.h"
#include "cFilterShader01.h"

// 00EBF5A0  cFilterShader01::cFilterShader01  size=275  [class]
/* WARNING: Removing unreachable block (ram,0x00ebf5fe) */
/* WARNING: Removing unreachable block (ram,0x00ebf671) */

undefined4 * __fastcall cFilterShader01::cFilterShader01(undefined4 *param_1)

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
  param_1[0x15] = 0;
  uVar1 = param_1[0x15];
  param_1[0x15] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x15] = uVar1 & 0xe1fff010 | 0x1000111;
  param_1[0x15] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x15] = param_1[0x15] & 0x7fffffff;
  param_1[0x13] = 0xffffffff;
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0;
  uVar1 = param_1[0x15];
  param_1[0x15] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x15] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x15] = param_1[0x15] & 0x7fffffff;
  return param_1;
}

// 00EBF700  cFilterShader01::vf04  size=48  [class]
void __fastcall cFilterShader01::vf04(int param_1)

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
  *(undefined4 *)(param_1 + 0x54) = 0x1111111;
  Hw::cShader::vf04();
  return;
}

// 00EC3CD0  cFilterShader01::vf00  size=79  [class]
undefined4 * __thiscall cFilterShader01::vf00(undefined4 *param_1,byte param_2)

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
  param_1[0x15] = 0x1111111;
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 015F1710  cFilterShader01::~cFilterShader01  size=88  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cFilterShader01::~cFilterShader01(void)

{
  _DAT_01edc7f8 = vftable;
  _DAT_01edc820 = 0xffffffff;
  _DAT_01edc824 = 0xffffffff;
  _DAT_01edc828 = 0xffffffff;
  _DAT_01edc82c = 0xffffffff;
  _DAT_01edc830 = 0xffffffff;
  _DAT_01edc834 = 0xffffffff;
  _DAT_01edc838 = 0xffffffff;
  _DAT_01edc83c = 0xffffffff;
  _DAT_01edc840 = 0xffffffff;
  _DAT_01edc844 = 0xffffffff;
  _DAT_01edc848 = 0xffffffff;
  _DAT_01edc84c = 0x1111111;
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F1770  cFilterShader01::~cFilterShader01  size=88  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cFilterShader01::~cFilterShader01(void)

{
  _DAT_01edc850 = vftable;
  _DAT_01edc878 = 0xffffffff;
  _DAT_01edc87c = 0xffffffff;
  _DAT_01edc880 = 0xffffffff;
  _DAT_01edc884 = 0xffffffff;
  _DAT_01edc888 = 0xffffffff;
  _DAT_01edc88c = 0xffffffff;
  _DAT_01edc890 = 0xffffffff;
  _DAT_01edc894 = 0xffffffff;
  _DAT_01edc898 = 0xffffffff;
  _DAT_01edc89c = 0xffffffff;
  _DAT_01edc8a0 = 0xffffffff;
  _DAT_01edc8a4 = 0x1111111;
  Hw::cVertexShader::cVertexShader();
  return;
}

