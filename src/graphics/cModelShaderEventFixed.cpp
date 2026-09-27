// src/graphics/cModelShaderEventFixed.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F8FDB0..015F4120, 5 functions

#include "types.h"

// 00F8FDB0  cModelShaderEventFixed::cModelShaderEventFixed_2  size=18  [class]
undefined4 * __fastcall cModelShaderEventFixed::cModelShaderEventFixed_2(undefined4 *param_1)

{
  Hw::cVertexShader::cVertexShader();
  *param_1 = vftable;
  return param_1;
}

// 00F8FDD0  cModelShaderEventFixed::cModelShaderEventFixed  size=22  [class]
void __fastcall cModelShaderEventFixed::cModelShaderEventFixed(undefined4 *param_1)

{
  *param_1 = vftable;
  Hw::cShader::vf04();
  Hw::cVertexShader::cVertexShader_8();
  return;
}

// 00F8FDF0  cModelShaderEventFixed::vf00  size=43  [class]
undefined4 * __thiscall cModelShaderEventFixed::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  Hw::cShader::vf04();
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00F90120  cModelShaderEventFixed::vf04  size=16  [class]
void cModelShaderEventFixed::vf04(void)

{
  FUN_00f99300();
  Hw::cShader::vf04();
  return;
}

// 015F4120  cModelShaderEventFixed::cModelShaderEventFixed_3  size=30  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderEventFixed::cModelShaderEventFixed_3(void)

{
  _DAT_01eeeae0 = vftable;
  Hw::cShader::vf04();
  Hw::cVertexShader::cVertexShader_8();
  return;
}

