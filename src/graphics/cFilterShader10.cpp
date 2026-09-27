// src/graphics/cFilterShader10.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EC0840..015F1AD0, 4 functions

#include "types.h"

// 00EC0840  cFilterShader10::cFilterShader10  size=587  [class]
/* WARNING: Removing unreachable block (ram,0x00ec08cf) */
/* WARNING: Removing unreachable block (ram,0x00ec094c) */
/* WARNING: Removing unreachable block (ram,0x00ec09c3) */
/* WARNING: Removing unreachable block (ram,0x00ec0a46) */

undefined4 * __fastcall cFilterShader10::cFilterShader10(undefined4 *param_1)

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
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 0xffffffff;
  param_1[0x18] = 0xffffffff;
  param_1[0x19] = 0xffffffff;
  param_1[0x1a] = 0xffffffff;
  param_1[0x1b] = 0xffffffff;
  param_1[0x1c] = 0xffffffff;
  param_1[0x1d] = 0xffffffff;
  param_1[0x1e] = 0xffffffff;
  param_1[0x1f] = 0xffffffff;
  param_1[0x20] = 0xffffffff;
  param_1[0x21] = 0xffffffff;
  param_1[0x24] = 0x1000000;
  param_1[0x24] = 0x1000111;
  param_1[0x24] = 0x1111111;
  param_1[0x24] = param_1[0x24] & 0x7fffffff;
  param_1[0x22] = 0xffffffff;
  param_1[0x23] = 0xffffffff;
  param_1[0x24] = 0x1000000;
  param_1[0x24] = 0x1111111;
  param_1[0x24] = param_1[0x24] & 0x7fffffff;
  param_1[0x27] = 0;
  uVar1 = param_1[0x27];
  param_1[0x27] = uVar1 & 0xe1ffffff | 0x1000000;
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

// 00EC0AA0  cFilterShader10::vf04  size=10  [class]
void cFilterShader10::vf04(void)

{
  FUN_00ebda80();
  Hw::cShader::vf04();
  return;
}

// 00EC4060  cFilterShader10::vf00  size=41  [class]
undefined4 * __thiscall cFilterShader10::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  FUN_00ebda80();
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 015F1AD0  cFilterShader10::cFilterShader10_2  size=25  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cFilterShader10::cFilterShader10_2(void)

{
  _DAT_01edcc90 = vftable;
  FUN_00ebda80();
  Hw::cVertexShader::cVertexShader_8();
  return;
}

