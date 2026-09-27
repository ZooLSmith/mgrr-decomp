// src/effect/EspShaderToneCurveAlMaskSp_TA.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F6CD70..00F8EC40, 3 functions

#include "types.h"

// 00F6CD70  EspShaderToneCurveAlMaskSp_TA::vf08  size=313  [class]
/* WARNING: Removing unreachable block (ram,0x00f6ce79) */

undefined4 __fastcall EspShaderToneCurveAlMaskSp_TA::vf08(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar2 = Fw::StringCopyCat("EspShaderToneCurveAlMaskSp_ta");
  uVar3 = Fw::StringCopyCat_2("EspShaderToneCurveAlMaskSp_ta");
  iVar4 = FUN_00fa01a0(uVar2,uVar3);
  if (((((iVar4 != 0) && (iVar4 = FUN_00f9e6d0(param_1 + 10,"g_WorldViewProjMatrix"), iVar4 != 0))
       && (iVar4 = FUN_00f9e6d0(param_1 + 0xd,"g_MatrialColor"), iVar4 != 0)) &&
      ((iVar4 = FUN_00f9e6d0(param_1 + 0x13,"g_Rate"), iVar4 != 0 &&
       (iVar4 = FUN_00f9e6d0(param_1 + 0x16,"g_AlphaRate"), iVar4 != 0)))) &&
     ((iVar4 = FUN_009e01e0(param_1 + 0x10,"g_Texture0",0,2,1), iVar4 != 0 &&
      ((iVar4 = FUN_009e01e0(param_1 + 0x1f,"g_BgTexture0",1,2,3), iVar4 != 0 &&
       (iVar4 = FUN_009e01e0(param_1 + 0x19,"g_MaskTexture0",2,2,1), iVar4 != 0)))))) {
    uVar1 = param_1[0x21];
    param_1[0x21] = uVar1 & 0xe1ffffff | 0x1000000;
    param_1[0x21] = uVar1 & 0xe1fff000 | 0x1000101;
    (**(code **)(*param_1 + 0xc))();
    return 1;
  }
  return 0;
}

// 00F8EC20  EspShaderToneCurveAlMaskSp_TA::EspShaderToneCurveAlMaskSp_TA  size=18  [class]
undefined4 * __fastcall
EspShaderToneCurveAlMaskSp_TA::EspShaderToneCurveAlMaskSp_TA(undefined4 *param_1)

{
  EspShaderToneCurveMaskSp_TA::EspShaderToneCurveMaskSp_TA();
  *param_1 = vftable;
  return param_1;
}

// 00F8EC40  EspShaderToneCurveAlMaskSp_TA::vf00  size=36  [class]
undefined4 * __thiscall EspShaderToneCurveAlMaskSp_TA::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cEspShaderBase::vftable;
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

