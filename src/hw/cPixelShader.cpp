// src/hw/cPixelShader.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F9C190..00FA8BD0, 2 functions

#include "mgrr.h"

// 00F9C190  Hw::cPixelShader::cPixelShader  size=48  [class]
void __fastcall Hw::cPixelShader::cPixelShader(undefined4 *param_1)

{
  *param_1 = cShader::vftable;
  param_1[1] = cVertexShader::vftable;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  param_1[5] = vftable;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  return;
}

// 00FA8BD0  Hw::cPixelShader::vf00  size=31  [class]
undefined4 * __thiscall Hw::cPixelShader::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

