// src/effect/cEspShaderToneCurveRGBA_AS_GT.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F68F70..00F8E030, 3 functions

#include "types.h"

// 00F68F70  cEspShaderToneCurveRGBA_AS_GT::vf08  size=323  [class]
/* WARNING: Removing unreachable block (ram,0x00f69079) */

undefined4 __fastcall cEspShaderToneCurveRGBA_AS_GT::vf08(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar2 = Fw::StringCopyCat("EspShaderToneCurveRGBA_AS_GT");
  uVar3 = Fw::StringCopyCat_2("EspShaderToneCurveRGBA_AS_GT");
  iVar4 = FUN_00fa01a0(uVar2,uVar3);
  if (((((iVar4 != 0) && (iVar4 = FUN_00f9e6d0(param_1 + 10,"g_WorldViewProjMatrix"), iVar4 != 0))
       && (iVar4 = FUN_00f9e6d0(param_1 + 0xd,"g_MatrialColor"), iVar4 != 0)) &&
      ((iVar4 = FUN_00f9e6d0(param_1 + 0x13,"g_Rate"), iVar4 != 0 &&
       (iVar4 = FUN_00f9e6d0(param_1 + 0x16,"g_Rate2"), iVar4 != 0)))) &&
     ((iVar4 = FUN_009e01e0(param_1 + 0x10,"g_Texture0",0,2,1), iVar4 != 0 &&
      ((iVar4 = FUN_009e01e0(param_1 + 0x1f,"g_BgTexture0",1,2,1), iVar4 != 0 &&
       (iVar4 = FUN_009e01e0(param_1 + 0x1c,"g_MaskTexture0",2,2,1), iVar4 != 0)))))) {
    uVar1 = param_1[0x21];
    param_1[0x21] = uVar1 & 0xe1ffffff | 0x1000000;
    param_1[0x21] = uVar1 & 0xe1fff000 | 0x1000101;
    (**(code **)(*param_1 + 0xc))();
    param_1[0x25] = 1;
    return 1;
  }
  return 0;
}

// 00F8E010  cEspShaderToneCurveRGBA_AS_GT::cEspShaderToneCurveRGBA_AS_GT  size=18  [class]
undefined4 * __fastcall
cEspShaderToneCurveRGBA_AS_GT::cEspShaderToneCurveRGBA_AS_GT(undefined4 *param_1)

{
  cEspShaderToneCurveBase::cEspShaderToneCurveBase();
  *param_1 = vftable;
  return param_1;
}

// 00F8E030  cEspShaderToneCurveRGBA_AS_GT::vf00  size=30  [class]
undefined4 __thiscall cEspShaderToneCurveRGBA_AS_GT::vf00(undefined4 param_1,byte param_2)

{
  cEspShaderBase::cEspShaderBase_4();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

