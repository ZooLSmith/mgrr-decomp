// src/effect/cEspShaderRangeLightTex.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F5D650..00F8E6B0, 4 functions

#include "mgrr.h"
#include "cEspShaderRangeLightTex.h"

// 00F5D650  cEspShaderRangeLightTex::vf0C  size=1  [class]
void cEspShaderRangeLightTex::vf0C(void)

{
  return;
}

// 00F80A50  cEspShaderRangeLightTex::vf08  size=61  [class]
void cEspShaderRangeLightTex::vf08(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = Fw::StringCopyCat("EspShaderRangeLightTex");
  uVar2 = Fw::StringCopyCat_2("EspShaderRangeLightTex");
  iVar3 = FUN_00fa01a0(uVar1,uVar2);
  if (iVar3 == 0) {
    return;
  }
  FUN_00f6af30();
  return;
}

// 00F84190  cEspShaderRangeLightTex::cEspShaderRangeLightTex  size=564  [class]
/* WARNING: Removing unreachable block (ram,0x00f84204) */
/* WARNING: Removing unreachable block (ram,0x00f84281) */
/* WARNING: Removing unreachable block (ram,0x00f842f8) */
/* WARNING: Removing unreachable block (ram,0x00f8437b) */

undefined4 * __fastcall cEspShaderRangeLightTex::cEspShaderRangeLightTex(undefined4 *param_1)

{
  uint uVar1;
  
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
  param_1[0x1c] = 0xffffffff;
  param_1[0x1d] = 0xffffffff;
  param_1[0x1e] = 0xffffffff;
  param_1[0x1f] = 0xffffffff;
  param_1[0x20] = 0xffffffff;
  param_1[0x21] = 0xffffffff;
  param_1[0x24] = 0x1000000;
  param_1[0x24] = 0x1000111;
  param_1[0x24] = 0x1111111;
  param_1[0x24] = param_1[0x24] & 0x7fffffff;
  param_1[0x22] = 0xffffffff;
  param_1[0x23] = 0xffffffff;
  param_1[0x24] = 0x1000000;
  param_1[0x24] = 0x1111111;
  param_1[0x24] = param_1[0x24] & 0x7fffffff;
  param_1[0x27] = 0;
  uVar1 = param_1[0x27];
  param_1[0x27] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x27] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x27] = param_1[0x27] & 0x7fffffff;
  param_1[0x25] = 0xffffffff;
  param_1[0x26] = 0xffffffff;
  param_1[0x27] = 0;
  uVar1 = param_1[0x27];
  param_1[0x27] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x27] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x27] = param_1[0x27] & 0x7fffffff;
  return param_1;
}

// 00F8E6B0  cEspShaderRangeLightTex::vf00  size=36  [class]
undefined4 * __thiscall cEspShaderRangeLightTex::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cEspShaderBase::vftable;
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

