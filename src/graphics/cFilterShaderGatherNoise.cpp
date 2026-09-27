// src/graphics/cFilterShaderGatherNoise.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EC1D30..00EC4550, 3 functions

#include "mgrr.h"
#include "cFilterShaderGatherNoise.h"

// 00EC1D30  cFilterShaderGatherNoise::cFilterShaderGatherNoise  size=265  [class]
/* WARNING: Removing unreachable block (ram,0x00ec1d6d) */
/* WARNING: Removing unreachable block (ram,0x00ec1df1) */

undefined4 * __fastcall cFilterShaderGatherNoise::cFilterShaderGatherNoise(undefined4 *param_1)

{
  cFilterShaderGather::cFilterShaderGather_2();
  *param_1 = vftable;
  param_1[0x27] = 0x1000000;
  param_1[0x27] = 0x1000111;
  param_1[0x27] = 0x1111111;
  param_1[0x27] = param_1[0x27] & 0x7fffffff;
  param_1[0x25] = 0xffffffff;
  param_1[0x26] = 0xffffffff;
  param_1[0x27] = 0x1000000;
  param_1[0x27] = 0x1111111;
  param_1[0x27] = param_1[0x27] & 0x7fffffff;
  return param_1;
}

// 00EC1E40  cFilterShaderGatherNoise::vf04  size=16  [class]
void cFilterShaderGatherNoise::vf04(void)

{
  FUN_00ec1070();
  Hw::cShader::vf04();
  return;
}

// 00EC4550  cFilterShaderGatherNoise::vf00  size=30  [class]
undefined4 __thiscall cFilterShaderGatherNoise::vf00(undefined4 param_1,byte param_2)

{
  cFilterShaderGather::cFilterShaderGather();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

