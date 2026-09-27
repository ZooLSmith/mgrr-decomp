// src/effect/cEspShaderShimmerBlurSoftParticle.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F69B40..00F8EDF0, 3 functions

#include "types.h"

// 00F69B40  cEspShaderShimmerBlurSoftParticle::vf08  size=428  [class]
/* WARNING: Removing unreachable block (ram,0x00f69cbf) */

undefined4 __fastcall cEspShaderShimmerBlurSoftParticle::vf08(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = Fw::StringCopyCat("EspShaderShimmerBlurSoftParticle");
  uVar3 = Fw::StringCopyCat_2("EspShaderShimmerBlurSoftParticle");
  iVar4 = FUN_00fa01a0(uVar2,uVar3);
  if ((((iVar4 != 0) && (iVar4 = FUN_00f9e6d0(param_1 + 10,"g_WorldViewProjMatrix"), iVar4 != 0)) &&
      (iVar4 = FUN_00f9e6d0(param_1 + 0xd,"g_MatrialColor"), iVar4 != 0)) &&
     (iVar4 = FUN_00fa39a0(param_1 + 0x10,PTR_s_g_Sampler0_0188ff1c), iVar4 != 0)) {
    uVar5 = 2;
    iVar4 = 2;
    if ((*(byte *)((int)param_1 + 0x4b) & 0x1f) != 1) {
      uVar5 = 3;
      iVar4 = 3;
    }
    uVar1 = param_1[0x12];
    param_1[0x12] = iVar4 << 8 | uVar1 & 0xfffff020 | uVar5 | 0x20;
    param_1[0x12] = iVar4 << 8 | uVar1 & 0xff111020 | uVar5 | 0x111020;
    iVar4 = FUN_00fa39a0(param_1 + 0x19,PTR_s_g_Sampler1_0188ff20);
    if (iVar4 != 0) {
      uVar5 = 2;
      iVar4 = 2;
      if ((*(byte *)((int)param_1 + 0x6f) & 0x1f) != 1) {
        uVar5 = 3;
        iVar4 = 3;
      }
      uVar1 = param_1[0x1b];
      param_1[0x1b] = iVar4 << 8 | uVar1 & 0xfffff020 | uVar5 | 0x20;
      param_1[0x1b] = iVar4 << 8 | uVar1 & 0xff333020 | uVar5 | 0x333020;
      FUN_009e01e0(param_1 + 0x1c,"g_TextureZMap",2,1,3);
      iVar4 = FUN_00f9e6d0(param_1 + 0x13,"g_Rate");
      if ((iVar4 != 0) && (iVar4 = FUN_00f9e6d0(param_1 + 0x16,"g_Blur"), iVar4 != 0)) {
        uVar5 = param_1[0x1e];
        param_1[0x1e] = uVar5 & 0xe1ffffff | 0x1000000;
        param_1[0x1e] = uVar5 & 0xe1fff000 | 0x1000101;
        (**(code **)(*param_1 + 0xc))();
        return 1;
      }
    }
  }
  return 0;
}

// 00F83470  cEspShaderShimmerBlurSoftParticle::cEspShaderShimmerBlurSoftParticle  size=238  [class]
/* WARNING: Removing unreachable block (ram,0x00f834aa) */
/* WARNING: Removing unreachable block (ram,0x00f8351c) */

undefined4 * __fastcall
cEspShaderShimmerBlurSoftParticle::cEspShaderShimmerBlurSoftParticle(undefined4 *param_1)

{
  cEspShaderShimmerBlur::cEspShaderShimmerBlur();
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
  return param_1;
}

// 00F8EDF0  cEspShaderShimmerBlurSoftParticle::vf00  size=52  [class]
undefined4 * __thiscall cEspShaderShimmerBlurSoftParticle::vf00(undefined4 *param_1,byte param_2)

{
  param_1[0x1c] = 0xffffffff;
  param_1[0x1d] = 0xffffffff;
  param_1[0x1e] = 0x1111111;
  *param_1 = cEspShaderBase::vftable;
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

