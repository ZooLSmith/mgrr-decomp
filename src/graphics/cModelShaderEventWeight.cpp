// src/graphics/cModelShaderEventWeight.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F901C0..015F4160, 5 functions

#include "mgrr.h"
#include "cModelShaderEventWeight.h"

// 00F901C0  cModelShaderEventWeight::vf04  size=16  [class]
void cModelShaderEventWeight::vf04(void)

{
  FUN_00f99300();
  Hw::cShader::vf04();
  return;
}

// 00F945A0  cModelShaderEventWeight::~cModelShaderEventWeight  size=34  [class]
void __fastcall cModelShaderEventWeight::~cModelShaderEventWeight(undefined4 *param_1)

{
  *param_1 = vftable;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0xffffffff;
  Hw::cShader::vf04();
  Hw::cVertexShader::cVertexShader();
  return;
}

// 00F945D0  cModelShaderEventWeight::vf00  size=55  [class]
undefined4 * __thiscall cModelShaderEventWeight::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0xffffffff;
  Hw::cShader::vf04();
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00F946C0  cModelShaderEventWeight::cModelShaderEventWeight  size=30  [class]
undefined4 * __fastcall cModelShaderEventWeight::cModelShaderEventWeight(undefined4 *param_1)

{
  Hw::cPixelShader::cPixelShader();
  *param_1 = vftable;
  param_1[10] = 0xffffffff;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0xffffffff;
  return param_1;
}

// 015F4160  cModelShaderEventWeight::~cModelShaderEventWeight  size=48  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cModelShaderEventWeight::~cModelShaderEventWeight(void)

{
  _DAT_01eeefb4 = vftable;
  _DAT_01eeefdc = 0xffffffff;
  _DAT_01eeefe0 = 0xffffffff;
  _DAT_01eeefe4 = 0xffffffff;
  Hw::cShader::vf04();
  Hw::cVertexShader::cVertexShader();
  return;
}

