// src/effect/cEspShaderToneCurveRGB_AS_G.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F66650..00F8D770, 3 functions

#include "mgrr.h"
#include "cEspShaderToneCurveRGB_AS_G.h"

// 00F66650  cEspShaderToneCurveRGB_AS_G::vf08  size=323  [class]
/* WARNING: Removing unreachable block (ram,0x00f66759) */

undefined4 __fastcall cEspShaderToneCurveRGB_AS_G::vf08(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar2 = Fw::StringCopyCat("EspShaderToneCurveRGB_AS_G");
  uVar3 = Fw::StringCopyCat_2("EspShaderToneCurveRGB_AS_G");
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

// 00F8D750  cEspShaderToneCurveRGB_AS_G::cEspShaderToneCurveRGB_AS_G  size=18  [class]
undefined4 * __fastcall
cEspShaderToneCurveRGB_AS_G::cEspShaderToneCurveRGB_AS_G(undefined4 *param_1)

{
  cEspShaderToneCurveBase::cEspShaderToneCurveBase();
  *param_1 = vftable;
  return param_1;
}

// 00F8D770  cEspShaderToneCurveRGB_AS_G::vf00  size=30  [class]
undefined4 __thiscall cEspShaderToneCurveRGB_AS_G::vf00(undefined4 param_1,byte param_2)

{
  cEspShaderBase::~cEspShaderBase();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

