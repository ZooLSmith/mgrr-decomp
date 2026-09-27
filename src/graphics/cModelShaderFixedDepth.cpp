// src/graphics/cModelShaderFixedDepth.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F921E0..015F41A0, 4 functions

#include "types.h"

// 00F921E0  cModelShaderFixedDepth::cModelShaderFixedDepth  size=30  [class]
undefined4 * __fastcall cModelShaderFixedDepth::cModelShaderFixedDepth(undefined4 *param_1)

{
  Hw::cVertexShader::cVertexShader();
  *param_1 = vftable;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0xffffffff;
  return param_1;
}

// 00F92220  cModelShaderFixedDepth::vf04  size=17  [class]
void __fastcall cModelShaderFixedDepth::vf04(int param_1)

{
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  Hw::cShader::vf04();
  return;
}

// 00F94720  cModelShaderFixedDepth::vf00  size=48  [class]
undefined4 * __thiscall cModelShaderFixedDepth::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0xffffffff;
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 015F41A0  cModelShaderFixedDepth::cModelShaderFixedDepth_2  size=38  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderFixedDepth::cModelShaderFixedDepth_2(void)

{
  _DAT_01eeec5c = vftable;
  _DAT_01eeec84 = 0xffffffff;
  _DAT_01eeec88 = 0xffffffff;
  _DAT_01eeec8c = 0xffffffff;
  Hw::cVertexShader::cVertexShader_8();
  return;
}

