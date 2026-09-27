// src/effect/EspShaderLaplacianRangeLight.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009D24E0..009E67C0, 4 functions

#include "types.h"

// 009D24E0  EspShaderLaplacianRangeLight::vf10  size=8  [class]
undefined4 EspShaderLaplacianRangeLight::vf10(void)

{
  return 1;
}

// 009DCD10  EspShaderLaplacianRangeLight::EspShaderLaplacianRangeLight  size=48  [class]
undefined4 * __fastcall
EspShaderLaplacianRangeLight::EspShaderLaplacianRangeLight(undefined4 *param_1)

{
  cEspShaderBase::cEspShaderBase_3();
  *param_1 = vftable;
  param_1[0x13] = 0xffffffff;
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0xffffffff;
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 0xffffffff;
  param_1[0x18] = 0xffffffff;
  param_1[0x19] = 0xffffffff;
  param_1[0x1a] = 0xffffffff;
  param_1[0x1b] = 0xffffffff;
  return param_1;
}

// 009DCD40  EspShaderLaplacianRangeLight::vf00  size=30  [class]
undefined4 __thiscall EspShaderLaplacianRangeLight::vf00(undefined4 param_1,byte param_2)

{
  cEspShaderBase::cEspShaderBase_2();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009E67C0  EspShaderLaplacianRangeLight::vf08  size=238  [class]
/* WARNING: Removing unreachable block (ram,0x009e683d) */

bool __fastcall EspShaderLaplacianRangeLight::vf08(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_00f5e2c0("EspShaderLaplacianRangeLight");
  if (((iVar2 != 0) && (iVar2 = FUN_00f9e6d0(param_1 + 0x28,"g_WorldViewProjMatrix"), iVar2 != 0))
     && (iVar2 = FUN_00f9e6d0(param_1 + 0x34,"g_MatrialColor"), iVar2 != 0)) {
    iVar2 = FUN_00fa39a0(param_1 + 0x40,PTR_s_g_Sampler0_0188ff1c);
    if (iVar2 != 0) {
      uVar1 = *(uint *)(param_1 + 0x48);
      *(uint *)(param_1 + 0x48) = uVar1 & 0xe1ffffff | 0x1000000;
      *(uint *)(param_1 + 0x48) = uVar1 & 0xe1333010 | 0x1333111;
      iVar2 = FUN_00f9e6d0(param_1 + 0x4c,"g_Center");
      if ((iVar2 != 0) && (iVar2 = FUN_00f9e6d0(param_1 + 0x58,"g_Range"), iVar2 != 0)) {
        iVar2 = FUN_00f9e6d0(param_1 + 100,"g_BlendColor");
        return iVar2 != 0;
      }
    }
    return false;
  }
  return false;
}

