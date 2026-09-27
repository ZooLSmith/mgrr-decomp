// src/graphics/cFilterShader09_Sub2.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EC06F0..015F1AA0, 4 functions

#include "mgrr.h"
#include "cFilterShader09_Sub2.h"

// 00EC06F0  cFilterShader09_Sub2::cFilterShader09_Sub2  size=257  [class]
/* WARNING: Removing unreachable block (ram,0x00ec073c) */
/* WARNING: Removing unreachable block (ram,0x00ec07af) */

undefined4 * __fastcall cFilterShader09_Sub2::cFilterShader09_Sub2(undefined4 *param_1)

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

// 00EC0820  cFilterShader09_Sub2::vf04  size=21  [class]
void __fastcall cFilterShader09_Sub2::vf04(int param_1)

{
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0x1111111;
  Hw::cShader::vf04();
  return;
}

// 00EC4020  cFilterShader09_Sub2::vf00  size=52  [class]
undefined4 * __thiscall cFilterShader09_Sub2::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0x1111111;
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 015F1AA0  cFilterShader09_Sub2::cFilterShader09_Sub2_2  size=43  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cFilterShader09_Sub2::cFilterShader09_Sub2_2(void)

{
  _DAT_01edcc50 = vftable;
  _DAT_01edcc84 = 0xffffffff;
  _DAT_01edcc88 = 0xffffffff;
  _DAT_01edcc8c = 0x1111111;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

