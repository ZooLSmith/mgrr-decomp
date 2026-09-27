// src/graphics/cFilterShader09.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EC0380..015F1A30, 4 functions

#include "types.h"

// 00EC0380  cFilterShader09::cFilterShader09  size=458  [class]
/* WARNING: Removing unreachable block (ram,0x00ec03c7) */
/* WARNING: Removing unreachable block (ram,0x00ec0432) */
/* WARNING: Removing unreachable block (ram,0x00ec049a) */
/* WARNING: Removing unreachable block (ram,0x00ec050b) */

undefined4 * __fastcall cFilterShader09::cFilterShader09(undefined4 *param_1)

{
  uint uVar1;
  
  Hw::cVertexShader::cVertexShader();
  *param_1 = vftable;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0xffffffff;
  param_1[0xf] = 0x1000000;
  param_1[0xf] = 0x1000111;
  param_1[0xf] = 0x1111111;
  param_1[0xf] = param_1[0xf] & 0x7fffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0x1000000;
  param_1[0xf] = 0x1111111;
  param_1[0xf] = param_1[0xf] & 0x7fffffff;
  param_1[0x12] = 0;
  uVar1 = param_1[0x12];
  param_1[0x12] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x12] = uVar1 & 0xe1fff010 | 0x1000111;
  param_1[0x12] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x12] = param_1[0x12] & 0x7fffffff;
  param_1[0x10] = 0xffffffff;
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0;
  uVar1 = param_1[0x12];
  param_1[0x12] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x12] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x12] = param_1[0x12] & 0x7fffffff;
  return param_1;
}

// 00EC0580  cFilterShader09::vf04  size=31  [class]
void __fastcall cFilterShader09::vf04(int param_1)

{
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0x1111111;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x48) = 0x1111111;
  Hw::cShader::vf04();
  return;
}

// 00EC3FA0  cFilterShader09::vf00  size=64  [class]
undefined4 * __thiscall cFilterShader09::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0x1111111;
  param_1[0x10] = 0xffffffff;
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0x1111111;
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 015F1A30  cFilterShader09::cFilterShader09_2  size=60  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cFilterShader09::cFilterShader09_2(void)

{
  _DAT_01edcbfc = 0x1111111;
  _DAT_01edcc08 = 0x1111111;
  _DAT_01edcbc0 = vftable;
  _DAT_01edcbf4 = 0xffffffff;
  _DAT_01edcbf8 = 0xffffffff;
  _DAT_01edcc00 = 0xffffffff;
  _DAT_01edcc04 = 0xffffffff;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

