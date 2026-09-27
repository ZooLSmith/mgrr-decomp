// src/effect/EspShaderShimmer_TexBlend.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F69890..00F8E330, 3 functions

#include "mgrr.h"
#include "EspShaderShimmer_TexBlend.h"

// 00F69890  EspShaderShimmer_TexBlend::vf08  size=332  [class]
undefined4 __fastcall EspShaderShimmer_TexBlend::vf08(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = Fw::StringCopyCat("EspShaderShimmer_texblend");
  uVar3 = Fw::StringCopyCat_2("EspShaderShimmer_texblend");
  iVar4 = FUN_00fa01a0(uVar2,uVar3);
  if (iVar4 != 0) {
    iVar4 = FUN_00f9e6d0(param_1 + 10,"g_WorldViewProjMatrix");
    if (iVar4 != 0) {
      iVar4 = FUN_00f9e6d0(param_1 + 0xd,"g_MatrialColor");
      if (iVar4 != 0) {
        iVar4 = FUN_00f9e6d0(param_1 + 0x13,"g_Rate");
        if (iVar4 != 0) {
          iVar4 = FUN_00fa39a0(param_1 + 0x10,PTR_s_g_Sampler0_0188ff1c);
          if (iVar4 != 0) {
            uVar5 = 2;
            iVar4 = 2;
            if ((*(byte *)((int)param_1 + 0x4b) & 0x1f) != 1) {
              uVar5 = 3;
              iVar4 = 3;
            }
            uVar1 = param_1[0x12];
            param_1[0x12] = iVar4 << 8 | uVar1 & 0xfffff020 | uVar5 | 0x20;
            param_1[0x12] = iVar4 << 8 | uVar1 & 0xff111020 | uVar5 | 0x111020;
            iVar4 = FUN_009e01e0(param_1 + 0x16,"g_BgTexture0",1,2,3);
            if (iVar4 != 0) {
              iVar4 = FUN_009e01e0(param_1 + 0x19,"g_MaskTexture0",2,2,1);
              if (iVar4 != 0) {
                iVar4 = FUN_009e01e0(param_1 + 0x1c,"g_Texture1",3,2,1);
                if (iVar4 != 0) {
                  iVar4 = FUN_00f9e6d0(param_1 + 0x1f,"g_BlendRate");
                  if (iVar4 != 0) {
                    (**(code **)(*param_1 + 0xc))();
                    return 1;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

// 00F83260  EspShaderShimmer_TexBlend::EspShaderShimmer_TexBlend  size=252  [class]
/* WARNING: Removing unreachable block (ram,0x00f8329a) */
/* WARNING: Removing unreachable block (ram,0x00f83307) */

undefined4 * __fastcall EspShaderShimmer_TexBlend::EspShaderShimmer_TexBlend(undefined4 *param_1)

{
  cEspShaderShimmer::cEspShaderShimmer();
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

// 00F8E330  EspShaderShimmer_TexBlend::vf00  size=36  [class]
undefined4 * __thiscall EspShaderShimmer_TexBlend::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cEspShaderBase::vftable;
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

