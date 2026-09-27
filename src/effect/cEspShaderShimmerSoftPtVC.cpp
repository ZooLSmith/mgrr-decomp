// src/effect/cEspShaderShimmerSoftPtVC.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F69F80..00F8E410, 3 functions

#include "types.h"

// 00F69F80  cEspShaderShimmerSoftPtVC::vf08  size=442  [class]
/* WARNING: Removing unreachable block (ram,0x00f6a113) */

undefined4 __fastcall cEspShaderShimmerSoftPtVC::vf08(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = Fw::StringCopyCat("espshadershimmersoftparticlevc");
  uVar3 = Fw::StringCopyCat_2("espshadershimmersoftparticlevc");
  iVar4 = FUN_00fa01a0(uVar2,uVar3);
  if ((((iVar4 != 0) && (iVar4 = FUN_00f9e6d0(param_1 + 0x28,"g_WorldViewProjMatrix"), iVar4 != 0))
      && (iVar4 = FUN_00f9e6d0(param_1 + 0x4c,"g_Rate"), iVar4 != 0)) &&
     (iVar4 = FUN_00fa39a0(param_1 + 0x40,PTR_s_g_Sampler0_0188ff1c), iVar4 != 0)) {
    uVar5 = 2;
    iVar4 = 2;
    if ((*(byte *)(param_1 + 0x4b) & 0x1f) != 1) {
      uVar5 = 3;
      iVar4 = 3;
    }
    uVar1 = *(uint *)(param_1 + 0x48);
    *(uint *)(param_1 + 0x48) = iVar4 << 8 | uVar1 & 0xfffff020 | uVar5 | 0x20;
    *(uint *)(param_1 + 0x48) = iVar4 << 8 | uVar1 & 0xff111020 | uVar5 | 0x111020;
    iVar4 = FUN_00fa39a0(param_1 + 0x58,PTR_s_g_Sampler1_0188ff20);
    if (iVar4 != 0) {
      uVar5 = 2;
      iVar4 = 2;
      if ((*(byte *)(param_1 + 99) & 0x1f) != 1) {
        uVar5 = 3;
        iVar4 = 3;
      }
      uVar1 = *(uint *)(param_1 + 0x60);
      *(uint *)(param_1 + 0x60) = iVar4 << 8 | uVar1 & 0xfffff020 | uVar5 | 0x20;
      *(uint *)(param_1 + 0x60) = iVar4 << 8 | uVar1 & 0xff333020 | uVar5 | 0x333020;
      iVar4 = FUN_009e01e0(param_1 + 100,"g_MaskTexture0",2,2,1);
      if (((iVar4 != 0) && (iVar4 = FUN_009e01e0(param_1 + 0x7c,"g_ZTexture",3,1,3), iVar4 != 0)) &&
         (iVar4 = FUN_00f9e6d0(param_1 + 0x70,"g_SoftPTParameter"), iVar4 != 0)) {
        uVar5 = *(uint *)(param_1 + 0x84);
        *(uint *)(param_1 + 0x84) = uVar5 & 0xe1ffffff | 0x1000000;
        *(uint *)(param_1 + 0x84) = uVar5 & 0xe1fff000 | 0x1000101;
        return 1;
      }
    }
  }
  return 0;
}

// 00F8E3F0  cEspShaderShimmerSoftPtVC::cEspShaderShimmerSoftPtVC  size=18  [class]
undefined4 * __fastcall cEspShaderShimmerSoftPtVC::cEspShaderShimmerSoftPtVC(undefined4 *param_1)

{
  cEspShaderShimmerSoftPt::cEspShaderShimmerSoftPt();
  *param_1 = vftable;
  return param_1;
}

// 00F8E410  cEspShaderShimmerSoftPtVC::vf00  size=36  [class]
undefined4 * __thiscall cEspShaderShimmerSoftPtVC::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cEspShaderBase::vftable;
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

