// src/effect/EffectShaderWaterFluidWaveSimulate.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F6A680..00F8E530, 3 functions

#include "mgrr.h"
#include "EffectShaderWaterFluidWaveSimulate.h"

// 00F6A680  EffectShaderWaterFluidWaveSimulate::vf08  size=287  [class]
/* WARNING: Removing unreachable block (ram,0x00f6a71b) */
/* WARNING: Removing unreachable block (ram,0x00f6a76c) */

undefined4 __fastcall EffectShaderWaterFluidWaveSimulate::vf08(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar2 = Fw::StringCopyCat("effectwaterfluidwavesimulate");
  uVar3 = Fw::StringCopyCat_2("effectwaterfluidwavesimulate");
  iVar4 = FUN_00fa01a0(uVar2,uVar3);
  if ((((iVar4 != 0) && (iVar4 = FUN_00fa39a0(param_1 + 0x58,"g_Sampler0"), iVar4 != 0)) &&
      (iVar4 = FUN_00fa39a0(param_1 + 0x4c,"g_Sampler1"), iVar4 != 0)) &&
     (iVar4 = FUN_00f9e6d0(param_1 + 100,"g_Rate"), iVar4 != 0)) {
    uVar1 = *(uint *)(param_1 + 0x60);
    *(uint *)(param_1 + 0x60) = uVar1 & 0xe1ffffff | 0x1000000;
    *(uint *)(param_1 + 0x60) = uVar1 & 0xe1fff000 | 0x1000101;
    *(uint *)(param_1 + 0x60) = uVar1 & 0xe1333000 | 0x1333101;
    uVar1 = *(uint *)(param_1 + 0x54);
    *(uint *)(param_1 + 0x54) = uVar1 & 0xe1ffffff | 0x1000000;
    *(uint *)(param_1 + 0x54) = uVar1 & 0xe1fff000 | 0x1000101;
    *(uint *)(param_1 + 0x54) = uVar1 & 0xe1333000 | 0x1333101;
    return 1;
  }
  return 0;
}

// 00F839B0  EffectShaderWaterFluidWaveSimulate::EffectShaderWaterFluidWaveSimulate  size=458  [class]
/* WARNING: Removing unreachable block (ram,0x00f839eb) */
/* WARNING: Removing unreachable block (ram,0x00f83a59) */
/* WARNING: Removing unreachable block (ram,0x00f83ac1) */
/* WARNING: Removing unreachable block (ram,0x00f83b32) */

undefined4 * __fastcall
EffectShaderWaterFluidWaveSimulate::EffectShaderWaterFluidWaveSimulate(undefined4 *param_1)

{
  uint uVar1;
  
  cEspShaderBase::cEspShaderBase_3();
  *param_1 = vftable;
  param_1[0x15] = 0x1000000;
  param_1[0x15] = 0x1000111;
  param_1[0x15] = 0x1111111;
  param_1[0x15] = param_1[0x15] & 0x7fffffff;
  param_1[0x13] = 0xffffffff;
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0x1000000;
  param_1[0x15] = 0x1111111;
  param_1[0x15] = param_1[0x15] & 0x7fffffff;
  param_1[0x18] = 0;
  uVar1 = param_1[0x18];
  param_1[0x18] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x18] = uVar1 & 0xe1fff010 | 0x1000111;
  param_1[0x18] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x18] = param_1[0x18] & 0x7fffffff;
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 0xffffffff;
  param_1[0x18] = 0;
  uVar1 = param_1[0x18];
  param_1[0x18] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x18] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x18] = param_1[0x18] & 0x7fffffff;
  param_1[0x19] = 0xffffffff;
  param_1[0x1a] = 0xffffffff;
  param_1[0x1b] = 0xffffffff;
  return param_1;
}

// 00F8E530  EffectShaderWaterFluidWaveSimulate::vf00  size=36  [class]
undefined4 * __thiscall EffectShaderWaterFluidWaveSimulate::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cEspShaderBase::vftable;
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

