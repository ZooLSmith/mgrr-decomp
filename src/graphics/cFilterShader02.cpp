// src/graphics/cFilterShader02.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EBF730..00EC3D20, 2 functions

#include "types.h"

// 00EBF730  cFilterShader02::cFilterShader02  size=18  [class]
undefined4 * __fastcall cFilterShader02::cFilterShader02(undefined4 *param_1)

{
  cFilterShader01::cFilterShader01();
  *param_1 = vftable;
  return param_1;
}

// 00EC3D20  cFilterShader02::vf00  size=82  [class]
undefined4 * __thiscall cFilterShader02::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cFilterShader01::vftable;
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
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

