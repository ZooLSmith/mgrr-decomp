// src/effect/EspShaderToneCurveMaskSp_TexBlend.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F62A10..00F8C040, 3 functions

#include "mgrr.h"
#include "EspShaderToneCurveMaskSp_TexBlend.h"

// 00F62A10  EspShaderToneCurveMaskSp_TexBlend::vf08  size=337  [class]
/* WARNING: Removing unreachable block (ram,0x00f62b34) */

undefined4 __fastcall EspShaderToneCurveMaskSp_TexBlend::vf08(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar2 = Fw::StringCopyCat("EspShaderToneCurveMaskSp_TexBlend");
  uVar3 = Fw::StringCopyCat_2("EspShaderToneCurveMaskSp_TexBlend");
  iVar4 = FUN_00fa01a0(uVar2,uVar3);
  if ((((((iVar4 != 0) && (iVar4 = FUN_00f9e6d0(param_1 + 10,"g_WorldViewProjMatrix"), iVar4 != 0))
        && (iVar4 = FUN_00f9e6d0(param_1 + 0xd,"g_MatrialColor"), iVar4 != 0)) &&
       ((iVar4 = FUN_00f9e6d0(param_1 + 0x13,"g_Rate"), iVar4 != 0 &&
        (iVar4 = FUN_00f9e6d0(param_1 + 0x22,"g_BlendRate"), iVar4 != 0)))) &&
      ((iVar4 = FUN_009e01e0(param_1 + 0x10,"g_Texture0",0,2,1), iVar4 != 0 &&
       ((iVar4 = FUN_009e01e0(param_1 + 0x1c,"g_BgTexture0",1,2,3), iVar4 != 0 &&
        (iVar4 = FUN_009e01e0(param_1 + 0x16,"g_MaskTexture0",2,2,1), iVar4 != 0)))))) &&
     (iVar4 = FUN_009e01e0(param_1 + 0x1f,"g_Texture3",3,2,1), iVar4 != 0)) {
    uVar1 = param_1[0x1e];
    param_1[0x1e] = uVar1 & 0xe1ffffff | 0x1000000;
    param_1[0x1e] = uVar1 & 0xe1fff000 | 0x1000101;
    (**(code **)(*param_1 + 0xc))();
    return 1;
  }
  return 0;
}

// 00F82460  EspShaderToneCurveMaskSp_TexBlend::EspShaderToneCurveMaskSp_TexBlend  size=279  [class]
/* WARNING: Removing unreachable block (ram,0x00f8249d) */
/* WARNING: Removing unreachable block (ram,0x00f82519) */

undefined4 * __fastcall
EspShaderToneCurveMaskSp_TexBlend::EspShaderToneCurveMaskSp_TexBlend(undefined4 *param_1)

{
  cEspShaderToneCurveMaskSp::cEspShaderToneCurveMaskSp();
  *param_1 = vftable;
  param_1[0x21] = 0x1000000;
  param_1[0x21] = 0x1000111;
  param_1[0x21] = 0x1111111;
  param_1[0x21] = param_1[0x21] & 0x7fffffff;
  param_1[0x1f] = 0xffffffff;
  param_1[0x20] = 0xffffffff;
  param_1[0x21] = 0x1000000;
  param_1[0x21] = 0x1111111;
  param_1[0x21] = param_1[0x21] & 0x7fffffff;
  param_1[0x22] = 0xffffffff;
  param_1[0x23] = 0xffffffff;
  param_1[0x24] = 0xffffffff;
  return param_1;
}

// 00F8C040  EspShaderToneCurveMaskSp_TexBlend::vf00  size=36  [class]
undefined4 * __thiscall EspShaderToneCurveMaskSp_TexBlend::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cEspShaderBase::vftable;
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

