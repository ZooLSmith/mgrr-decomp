// src/effect/cEspShaderToneCurveBase.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F82C70..00F8D5B0, 2 functions

#include "mgrr.h"
#include "cEspShaderToneCurveBase.h"

// 00F82C70  cEspShaderToneCurveBase::cEspShaderToneCurveBase  size=726  [class]
/* WARNING: Removing unreachable block (ram,0x00f82e7d) */
/* WARNING: Removing unreachable block (ram,0x00f82d9a) */
/* WARNING: Removing unreachable block (ram,0x00f82cc9) */
/* WARNING: Removing unreachable block (ram,0x00f82d33) */
/* WARNING: Removing unreachable block (ram,0x00f82e10) */
/* WARNING: Removing unreachable block (ram,0x00f82ef7) */

undefined4 * __fastcall cEspShaderToneCurveBase::cEspShaderToneCurveBase(undefined4 *param_1)

{
  cEspShaderBase::cEspShaderBase_3();
  *param_1 = vftable;
  param_1[0x13] = 0xffffffff;
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0xffffffff;
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 0xffffffff;
  param_1[0x18] = 0xffffffff;
  param_1[0x19] = 0xffffffff;
  param_1[0x1a] = 0xffffffff;
  param_1[0x1b] = 0xffffffff;
  param_1[0x1e] = 0x1000000;
  param_1[0x1e] = 0x1000111;
  param_1[0x1e] = 0x1111111;
  param_1[0x1e] = param_1[0x1e] & 0x7fffffff;
  param_1[0x1c] = 0xffffffff;
  param_1[0x1d] = 0xffffffff;
  param_1[0x1e] = 0x1000000;
  param_1[0x1e] = 0x1111111;
  param_1[0x1e] = param_1[0x1e] & 0x7fffffff;
  param_1[0x21] = 0x1000000;
  param_1[0x21] = 0x1111111;
  param_1[0x21] = param_1[0x21] & 0x7fffffff;
  param_1[0x1f] = 0xffffffff;
  param_1[0x20] = 0xffffffff;
  param_1[0x21] = 0x1000000;
  param_1[0x21] = 0x1111111;
  param_1[0x21] = param_1[0x21] & 0x7fffffff;
  param_1[0x24] = 0x1000000;
  param_1[0x24] = 0x1111111;
  param_1[0x24] = param_1[0x24] & 0x7fffffff;
  param_1[0x22] = 0xffffffff;
  param_1[0x23] = 0xffffffff;
  param_1[0x24] = 0x1000000;
  param_1[0x24] = 0x1111111;
  param_1[0x24] = param_1[0x24] & 0x7fffffff;
  param_1[0x25] = 0;
  return param_1;
}

// 00F8D5B0  cEspShaderToneCurveBase::vf00  size=30  [class]
undefined4 __thiscall cEspShaderToneCurveBase::vf00(undefined4 param_1,byte param_2)

{
  cEspShaderBase::cEspShaderBase_4();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

