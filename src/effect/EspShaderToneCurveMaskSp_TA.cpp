// src/effect/EspShaderToneCurveMaskSp_TA.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F6CB60..00F8EBA0, 3 functions

#include "mgrr.h"
#include "EspShaderToneCurveMaskSp_TA.h"

// 00F6CB60  EspShaderToneCurveMaskSp_TA::vf08  size=313  [class]
/* WARNING: Removing unreachable block (ram,0x00f6cc69) */

undefined4 __fastcall EspShaderToneCurveMaskSp_TA::vf08(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar2 = Fw::StringCopyCat("EspShaderToneCurveMaskSp_ta");
  uVar3 = Fw::StringCopyCat_2("EspShaderToneCurveMaskSp_ta");
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

// 00F85800  EspShaderToneCurveMaskSp_TA::EspShaderToneCurveMaskSp_TA  size=293  [class]
/* WARNING: Removing unreachable block (ram,0x00f85855) */
/* WARNING: Removing unreachable block (ram,0x00f858dd) */

undefined4 * __fastcall
EspShaderToneCurveMaskSp_TA::EspShaderToneCurveMaskSp_TA(undefined4 *param_1)

{
  uint uVar1;
  
  EspShaderToneCurveMask_TA::EspShaderToneCurveMask_TA();
  *param_1 = vftable;
  param_1[0x1c] = 0xffffffff;
  param_1[0x1d] = 0xffffffff;
  param_1[0x1e] = 0xffffffff;
  param_1[0x21] = 0;
  uVar1 = param_1[0x21];
  param_1[0x21] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x21] = uVar1 & 0xe1fff010 | 0x1000111;
  param_1[0x21] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x21] = param_1[0x21] & 0x7fffffff;
  param_1[0x1f] = 0xffffffff;
  param_1[0x20] = 0xffffffff;
  param_1[0x21] = 0;
  uVar1 = param_1[0x21];
  param_1[0x21] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x21] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x21] = param_1[0x21] & 0x7fffffff;
  return param_1;
}

// 00F8EBA0  EspShaderToneCurveMaskSp_TA::vf00  size=36  [class]
undefined4 * __thiscall EspShaderToneCurveMaskSp_TA::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cEspShaderBase::vftable;
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

