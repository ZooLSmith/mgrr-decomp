// src/effect/EspModelShaderBase.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009D2040..009D2070, 2 functions

#include "mgrr.h"
#include "EspModelShaderBase.h"

// 009D2040  EspModelShaderBase::EspModelShaderBase  size=18  [class]
undefined4 * __fastcall EspModelShaderBase::EspModelShaderBase(undefined4 *param_1)

{
  Hw::cPixelShader::cPixelShader();
  *param_1 = vftable;
  return param_1;
}

// 009D2070  EspModelShaderBase::vf00  size=36  [class]
undefined4 * __thiscall EspModelShaderBase::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

