// src/graphics/cFilterShaderCopyTexAlp.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EC1C50..00EC42A0, 2 functions

#include "mgrr.h"
#include "cFilterShaderCopyTexAlp.h"

// 00EC1C50  cFilterShaderCopyTexAlp::cFilterShaderCopyTexAlp  size=18  [class]
undefined4 * __fastcall cFilterShaderCopyTexAlp::cFilterShaderCopyTexAlp(undefined4 *param_1)

{
  cFilterShaderCopyTex::cFilterShaderCopyTex_2();
  *param_1 = vftable;
  return param_1;
}

// 00EC42A0  cFilterShaderCopyTexAlp::vf00  size=30  [class]
undefined4 __thiscall cFilterShaderCopyTexAlp::vf00(undefined4 param_1,byte param_2)

{
  cFilterShaderCopyTex::cFilterShaderCopyTex();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

