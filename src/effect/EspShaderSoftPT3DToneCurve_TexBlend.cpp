// src/effect/EspShaderSoftPT3DToneCurve_TexBlend.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F60900..00F8B4F0, 3 functions

#include "mgrr.h"
#include "EspShaderSoftPT3DToneCurve_TexBlend.h"

// 00F60900  EspShaderSoftPT3DToneCurve_TexBlend::vf08  size=369  [class]
/* WARNING: Removing unreachable block (ram,0x00f60a44) */

undefined4 __fastcall EspShaderSoftPT3DToneCurve_TexBlend::vf08(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = Fw::StringCopyCat("EspShaderSoftPT3DToneCurve_TexBlend");
  uVar3 = Fw::StringCopyCat_2("EspShaderSoftPT3DToneCurve_TexBlend");
  iVar4 = FUN_00fa01a0(uVar2,uVar3);
  if ((((iVar4 != 0) && (iVar4 = FUN_00f9e6d0(param_1 + 10,"g_WorldViewProjMatrix"), iVar4 != 0)) &&
      (iVar4 = FUN_00f9e6d0(param_1 + 0xd,"g_MatrialColor"), iVar4 != 0)) &&
     ((iVar4 = FUN_00f9e6d0(param_1 + 0x13,"g_Rate"), iVar4 != 0 &&
      (iVar4 = FUN_00fa39a0(param_1 + 0x10,PTR_s_g_Sampler0_0188ff1c), iVar4 != 0)))) {
    uVar5 = 2;
    iVar4 = 2;
    if ((*(byte *)((int)param_1 + 0x4b) & 0x1f) != 1) {
      uVar5 = 3;
      iVar4 = 3;
    }
    uVar1 = param_1[0x12];
    param_1[0x12] = iVar4 << 8 | uVar1 & 0xfffff020 | uVar5 | 0x20;
    param_1[0x12] = iVar4 << 8 | uVar1 & 0xff111020 | uVar5 | 0x111020;
    iVar4 = FUN_009e01e0(param_1 + 0x16,"g_BgTexture0",1,1,3);
    if (((iVar4 != 0) && (iVar4 = FUN_009e01e0(param_1 + 0x19,"g_Texture2",2,2,1), iVar4 != 0)) &&
       (iVar4 = FUN_00f9e6d0(param_1 + 0x1c,"g_BlendRate"), iVar4 != 0)) {
      uVar5 = param_1[0x18];
      param_1[0x18] = uVar5 & 0xe1ffffff | 0x1000000;
      param_1[0x18] = uVar5 & 0xe1fff000 | 0x1000101;
      (**(code **)(*param_1 + 0xc))();
      return 1;
    }
  }
  return 0;
}

// 00F8B3F0  EspShaderSoftPT3DToneCurve_TexBlend::EspShaderSoftPT3DToneCurve_TexBlend  size=246  [class]
/* WARNING: Removing unreachable block (ram,0x00f8b42a) */
/* WARNING: Removing unreachable block (ram,0x00f8b497) */

undefined4 * __fastcall
EspShaderSoftPT3DToneCurve_TexBlend::EspShaderSoftPT3DToneCurve_TexBlend(undefined4 *param_1)

{
  cEspShaderSoftPT::cEspShaderSoftPT();
  *param_1 = vftable;
  param_1[0x1b] = 0x1000000;
  param_1[0x1b] = 0x1000111;
  param_1[0x1b] = 0x1111111;
  param_1[0x1b] = param_1[0x1b] & 0x7fffffff;
  param_1[0x19] = 0xffffffff;
  param_1[0x1a] = 0xffffffff;
  param_1[0x1b] = 0x1000000;
  param_1[0x1b] = 0x1111111;
  param_1[0x1b] = param_1[0x1b] & 0x7fffffff;
  param_1[0x1c] = 0xffffffff;
  param_1[0x1d] = 0xffffffff;
  param_1[0x1e] = 0xffffffff;
  return param_1;
}

// 00F8B4F0  EspShaderSoftPT3DToneCurve_TexBlend::vf00  size=36  [class]
undefined4 * __thiscall EspShaderSoftPT3DToneCurve_TexBlend::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cEspShaderBase::vftable;
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

