// src/effect/EspShaderSoftPT3DAlMask_TexBlend.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F60240..00F8B2A0, 3 functions

#include "mgrr.h"
#include "EspShaderSoftPT3DAlMask_TexBlend.h"

// 00F60240  EspShaderSoftPT3DAlMask_TexBlend::vf08  size=399  [class]
/* WARNING: Removing unreachable block (ram,0x00f6038a) */

undefined4 __fastcall EspShaderSoftPT3DAlMask_TexBlend::vf08(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = Fw::StringCopyCat("EspShaderSoftPT3DAlMask_TexBlend");
  uVar3 = Fw::StringCopyCat_2("EspShaderSoftPT3DAlMask_TexBlend");
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
    iVar4 = FUN_009e01e0(param_1 + 0x16,"g_Sampler2",2,1,3);
    if (((iVar4 != 0) && (iVar4 = FUN_009e01e0(param_1 + 0x19,"g_Sampler1",1,2,1), iVar4 != 0)) &&
       (iVar4 = FUN_009e01e0(param_1 + 0x1c,"g_Sampler3",3,2,1), iVar4 != 0)) {
      uVar5 = param_1[0x18];
      param_1[0x18] = uVar5 & 0xe1ffffff | 0x1000000;
      param_1[0x18] = uVar5 & 0xe1fff000 | 0x1000101;
      iVar4 = FUN_00f9e6d0(param_1 + 0x1f,"g_BlendRate");
      if (iVar4 != 0) {
        (**(code **)(*param_1 + 0xc))();
        return 1;
      }
    }
  }
  return 0;
}

// 00F8B1A0  EspShaderSoftPT3DAlMask_TexBlend::EspShaderSoftPT3DAlMask_TexBlend  size=252  [class]
/* WARNING: Removing unreachable block (ram,0x00f8b1da) */
/* WARNING: Removing unreachable block (ram,0x00f8b247) */

undefined4 * __fastcall
EspShaderSoftPT3DAlMask_TexBlend::EspShaderSoftPT3DAlMask_TexBlend(undefined4 *param_1)

{
  cEspShaderSoftPT3DMask::cEspShaderSoftPT3DMask();
  *param_1 = vftable;
  param_1[0x1e] = 0x1000000;
  param_1[0x1e] = 0x1000111;
  param_1[0x1e] = 0x1111111;
  param_1[0x1e] = param_1[0x1e] & 0x7fffffff;
  param_1[0x1c] = 0xffffffff;
  param_1[0x1d] = 0xffffffff;
  param_1[0x1e] = 0x1000000;
  param_1[0x1e] = 0x1111111;
  param_1[0x1e] = param_1[0x1e] & 0x7fffffff;
  param_1[0x1f] = 0xffffffff;
  param_1[0x20] = 0xffffffff;
  param_1[0x21] = 0xffffffff;
  return param_1;
}

// 00F8B2A0  EspShaderSoftPT3DAlMask_TexBlend::vf00  size=36  [class]
undefined4 * __thiscall EspShaderSoftPT3DAlMask_TexBlend::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cEspShaderBase::vftable;
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

