// src/effect/cEspShaderShimmerSoftPt.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F69DF0..00F8E3C0, 3 functions

#include "types.h"

// 00F69DF0  cEspShaderShimmerSoftPt::vf08  size=399  [class]
/* WARNING: Removing unreachable block (ram,0x00f69f58) */

undefined4 __fastcall cEspShaderShimmerSoftPt::vf08(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = Fw::StringCopyCat("espshadershimmersoftparticle");
  uVar3 = Fw::StringCopyCat_2("espshadershimmersoftparticle");
  iVar4 = FUN_00fa01a0(uVar2,uVar3);
  if ((((iVar4 != 0) && (iVar4 = FUN_00f9e6d0(param_1 + 0x28,"g_WorldViewProjMatrix"), iVar4 != 0))
      && (iVar4 = FUN_00f9e6d0(param_1 + 0x34,"g_MatrialColor"), iVar4 != 0)) &&
     ((iVar4 = FUN_00f9e6d0(param_1 + 0x4c,"g_Rate"), iVar4 != 0 &&
      (iVar4 = FUN_00fa39a0(param_1 + 0x40,PTR_s_g_Sampler0_0188ff1c), iVar4 != 0)))) {
    uVar5 = 2;
    iVar4 = 2;
    if ((*(byte *)(param_1 + 0x4b) & 0x1f) != 1) {
      uVar5 = 3;
      iVar4 = 3;
    }
    uVar1 = *(uint *)(param_1 + 0x48);
    *(uint *)(param_1 + 0x48) = iVar4 << 8 | uVar1 & 0xfffff020 | uVar5 | 0x20;
    *(uint *)(param_1 + 0x48) = iVar4 << 8 | uVar1 & 0xff111020 | uVar5 | 0x111020;
    iVar4 = FUN_009e01e0(param_1 + 0x58,"g_BgTexture0",1,2,3);
    if (((iVar4 != 0) && (iVar4 = FUN_009e01e0(param_1 + 100,"g_MaskTexture0",2,2,1), iVar4 != 0))
       && ((iVar4 = FUN_009e01e0(param_1 + 0x7c,"g_ZTexture",3,1,3), iVar4 != 0 &&
           (iVar4 = FUN_00f9e6d0(param_1 + 0x70,"g_SoftPTParameter"), iVar4 != 0)))) {
      uVar5 = *(uint *)(param_1 + 0x84);
      *(uint *)(param_1 + 0x84) = uVar5 & 0xe1ffffff | 0x1000000;
      *(uint *)(param_1 + 0x84) = uVar5 & 0xe1fff000 | 0x1000101;
      return 1;
    }
  }
  return 0;
}

// 00F837A0  cEspShaderShimmerSoftPt::cEspShaderShimmerSoftPt  size=293  [class]
/* WARNING: Removing unreachable block (ram,0x00f837f5) */
/* WARNING: Removing unreachable block (ram,0x00f8387d) */

undefined4 * __fastcall cEspShaderShimmerSoftPt::cEspShaderShimmerSoftPt(undefined4 *param_1)

{
  uint uVar1;
  
  cEspShaderShimmer::cEspShaderShimmer();
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

// 00F8E3C0  cEspShaderShimmerSoftPt::vf00  size=36  [class]
undefined4 * __thiscall cEspShaderShimmerSoftPt::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cEspShaderBase::vftable;
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

