// src/graphics/cFilterShaderCopyTex.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EC0AB0..015F1BE0, 6 functions

#include "mgrr.h"
#include "cFilterShaderCopyTex.h"

// 00EC0AB0  cFilterShaderCopyTex::cFilterShaderCopyTex  size=266  [class]
/* WARNING: Removing unreachable block (ram,0x00ec0b05) */
/* WARNING: Removing unreachable block (ram,0x00ec0b78) */

undefined4 * __fastcall cFilterShaderCopyTex::cFilterShaderCopyTex(undefined4 *param_1)

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

// 00EC0BC0  cFilterShaderCopyTex::vf04  size=39  [class]
void __fastcall cFilterShaderCopyTex::vf04(int param_1)

{
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x48) = 0x1111111;
  Hw::cShader::vf04();
  return;
}

// 00EC1C70  cFilterShaderCopyTex::cFilterShaderCopyTex  size=102  [class]
void __fastcall cFilterShaderCopyTex::cFilterShaderCopyTex(undefined4 *param_1)

{
  *param_1 = cFilterShaderCopyTexAlp::vftable;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0xffffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0xffffffff;
  param_1[0x10] = 0xffffffff;
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0x1111111;
  Hw::cShader::vf04();
  *param_1 = vftable;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0xffffffff;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0xffffffff;
  param_1[0x10] = 0xffffffff;
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0x1111111;
  Hw::cShader::vf04();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 00EC4250  cFilterShaderCopyTex::vf00  size=77  [class]
undefined4 * __thiscall cFilterShaderCopyTex::vf00(undefined4 *param_1,byte param_2)

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
  param_1[0x12] = 0x1111111;
  Hw::cShader::vf04();
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 015F1B80  cFilterShaderCopyTex::~cFilterShaderCopyTex  size=83  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cFilterShaderCopyTex::~cFilterShaderCopyTex(void)

{
  _DAT_01edcd30 = vftable;
  _DAT_01edcd58 = 0xffffffff;
  _DAT_01edcd5c = 0xffffffff;
  _DAT_01edcd60 = 0xffffffff;
  _DAT_01edcd64 = 0xffffffff;
  _DAT_01edcd68 = 0xffffffff;
  _DAT_01edcd6c = 0xffffffff;
  _DAT_01edcd70 = 0xffffffff;
  _DAT_01edcd74 = 0xffffffff;
  DAT_01edcd78 = 0x1111111;
  Hw::cShader::vf04();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 015F1BE0  FUN_015f1be0  size=10  [callgraph]
void FUN_015f1be0(void)

{
  cFilterShaderCopyTex::cFilterShaderCopyTex();
  return;
}

