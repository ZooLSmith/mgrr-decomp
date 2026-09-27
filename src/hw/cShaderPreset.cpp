// src/hw/cShaderPreset.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F9EFC0..00FAA430, 2 functions

#include "types.h"

// 00F9EFC0  Hw::cShaderPreset::vf04  size=35  [class]
void __fastcall Hw::cShaderPreset::vf04(int param_1)

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
  cShader::vf04();
  return;
}

// 00FAA430  Hw::cShaderPreset::vf00  size=50  [class]
undefined4 * __thiscall Hw::cShaderPreset::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cShader::vftable;
  cShader::vf04();
  param_1[5] = cPixelShader::vftable;
  param_1[1] = cVertexShader::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

