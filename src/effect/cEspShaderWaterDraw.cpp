// src/effect/cEspShaderWaterDraw.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F6B2B0..00F8E740, 3 functions

#include "types.h"

// 00F6B2B0  cEspShaderWaterDraw::vf08  size=217  [class]
/* WARNING: Removing unreachable block (ram,0x00f6b34d) */

undefined4 __fastcall cEspShaderWaterDraw::vf08(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar2 = Fw::StringCopyCat("espshaderwavedraw");
  uVar3 = Fw::StringCopyCat_2("espshaderwavedraw");
  iVar4 = FUN_00fa01a0(uVar2,uVar3);
  if ((((iVar4 != 0) && (iVar4 = FUN_00f9e6d0(param_1 + 0x13,"g_WorldViewProjMatrix"), iVar4 != 0))
      && (iVar4 = FUN_00f9e6d0(param_1 + 0x16,"g_MatrialColor"), iVar4 != 0)) &&
     (iVar4 = FUN_00fa39a0(param_1 + 0x10,PTR_s_g_Sampler0_0188ff1c), iVar4 != 0)) {
    uVar1 = param_1[0x12];
    param_1[0x12] = uVar1 & 0xe1ffffff | 0x1000000;
    param_1[0x12] = uVar1 & 0xe1333010 | 0x1333111;
    (**(code **)(*param_1 + 0xc))();
    return 1;
  }
  return 0;
}

// 00F84880  cEspShaderWaterDraw::cEspShaderWaterDraw  size=39  [class]
undefined4 * __fastcall cEspShaderWaterDraw::cEspShaderWaterDraw(undefined4 *param_1)

{
  cEspShaderBase::cEspShaderBase_3();
  *param_1 = vftable;
  param_1[0x13] = 0xffffffff;
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0xffffffff;
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 0xffffffff;
  param_1[0x18] = 0xffffffff;
  return param_1;
}

// 00F8E740  cEspShaderWaterDraw::vf00  size=36  [class]
undefined4 * __thiscall cEspShaderWaterDraw::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cEspShaderBase::vftable;
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

