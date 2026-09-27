// src/graphics/cFilterShader2xAAResolveRot90.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EC4120..00EC4170, 2 functions

#include "types.h"

// 00EC4120  cFilterShader2xAAResolveRot90::cFilterShader2xAAResolveRot90  size=18  [class]
undefined4 * __fastcall
cFilterShader2xAAResolveRot90::cFilterShader2xAAResolveRot90(undefined4 *param_1)

{
  cFilterShader2xAAResolve::cFilterShader2xAAResolve();
  *param_1 = vftable;
  return param_1;
}

// 00EC4170  cFilterShader2xAAResolveRot90::vf00  size=68  [class]
undefined4 * __thiscall cFilterShader2xAAResolveRot90::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cFilterShader2xAAResolve::vftable;
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

