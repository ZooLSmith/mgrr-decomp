// src/graphics/cFilterShaderZTurn.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EC1810..015F1E70, 4 functions

#include "types.h"

// 00EC1810  cFilterShaderZTurn::cFilterShaderZTurn  size=257  [class]
/* WARNING: Removing unreachable block (ram,0x00ec185c) */
/* WARNING: Removing unreachable block (ram,0x00ec18cf) */

undefined4 * __fastcall cFilterShaderZTurn::cFilterShaderZTurn(undefined4 *param_1)

{
  uint uVar1;
  
  Hw::cVertexShader::cVertexShader();
  *param_1 = vftable;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0xffffffff;
  param_1[0xf] = 0;
  uVar1 = param_1[0xf];
  param_1[0xf] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0xf] = uVar1 & 0xe1fff010 | 0x1000111;
  param_1[0xf] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0xf] = param_1[0xf] & 0x7fffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0;
  uVar1 = param_1[0xf];
  param_1[0xf] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0xf] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0xf] = param_1[0xf] & 0x7fffffff;
  return param_1;
}

// 00EC1920  cFilterShaderZTurn::vf04  size=30  [class]
void __fastcall cFilterShaderZTurn::vf04(int param_1)

{
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0x1111111;
  Hw::cShader::vf04();
  return;
}

// 00EC44C0  cFilterShaderZTurn::vf00  size=68  [class]
undefined4 * __thiscall cFilterShaderZTurn::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0xffffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0x1111111;
  Hw::cShader::vf04();
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 015F1E70  cFilterShaderZTurn::cFilterShaderZTurn_2  size=68  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cFilterShaderZTurn::cFilterShaderZTurn_2(void)

{
  _DAT_01edd148 = vftable;
  _DAT_01edd170 = 0xffffffff;
  _DAT_01edd174 = 0xffffffff;
  _DAT_01edd178 = 0xffffffff;
  _DAT_01edd17c = 0xffffffff;
  _DAT_01edd180 = 0xffffffff;
  _DAT_01edd184 = 0x1111111;
  Hw::cShader::vf04();
  Hw::cVertexShader::cVertexShader_8();
  return;
}

