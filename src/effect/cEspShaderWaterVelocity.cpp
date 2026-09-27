// src/effect/cEspShaderWaterVelocity.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F6B070..00F8E6E0, 3 functions

#include "types.h"

// 00F6B070  cEspShaderWaterVelocity::vf08  size=261  [class]
/* WARNING: Removing unreachable block (ram,0x00f6b10b) */

bool __fastcall cEspShaderWaterVelocity::vf08(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar2 = Fw::StringCopyCat("espshaderwavespd");
  uVar3 = Fw::StringCopyCat_2("espshaderwavespd");
  iVar4 = FUN_00fa01a0(uVar2,uVar3);
  if ((((iVar4 != 0) && (iVar4 = FUN_00f9e6d0(param_1 + 0x4c,"g_WorldViewProjMatrix"), iVar4 != 0))
      && (iVar4 = FUN_00f9e6d0(param_1 + 0x58,"g_MatrialColor"), iVar4 != 0)) &&
     (iVar4 = FUN_00fa39a0(param_1 + 100,"g_Sampler0"), iVar4 != 0)) {
    uVar1 = *(uint *)(param_1 + 0x6c);
    *(uint *)(param_1 + 0x6c) = uVar1 & 0xe1ffffff | 0x1000000;
    *(uint *)(param_1 + 0x6c) = uVar1 & 0xe1444010 | 0x1444111;
    iVar4 = FUN_009e01e0(param_1 + 0x70,"g_Sampler1",0xffffffff,1,4);
    if (iVar4 != 0) {
      iVar4 = FUN_009e01e0(param_1 + 0x7c,"g_Sampler2",0xffffffff,1,4);
      return iVar4 != 0;
    }
  }
  return false;
}

// 00F843D0  cEspShaderWaterVelocity::cEspShaderWaterVelocity  size=724  [class]
/* WARNING: Removing unreachable block (ram,0x00f84420) */
/* WARNING: Removing unreachable block (ram,0x00f8448b) */
/* WARNING: Removing unreachable block (ram,0x00f845d5) */
/* WARNING: Removing unreachable block (ram,0x00f844f3) */
/* WARNING: Removing unreachable block (ram,0x00f84564) */
/* WARNING: Removing unreachable block (ram,0x00f84655) */

undefined4 * __fastcall cEspShaderWaterVelocity::cEspShaderWaterVelocity(undefined4 *param_1)

{
  uint uVar1;
  
  cEspShaderBase::cEspShaderBase_3();
  *param_1 = vftable;
  param_1[0x13] = 0xffffffff;
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0xffffffff;
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 0xffffffff;
  param_1[0x18] = 0xffffffff;
  param_1[0x1b] = 0x1000000;
  param_1[0x1b] = 0x1000111;
  param_1[0x1b] = 0x1111111;
  param_1[0x1b] = param_1[0x1b] & 0x7fffffff;
  param_1[0x19] = 0xffffffff;
  param_1[0x1a] = 0xffffffff;
  param_1[0x1b] = 0x1000000;
  param_1[0x1b] = 0x1111111;
  param_1[0x1b] = param_1[0x1b] & 0x7fffffff;
  param_1[0x1e] = 0;
  uVar1 = param_1[0x1e];
  param_1[0x1e] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x1e] = uVar1 & 0xe1fff010 | 0x1000111;
  param_1[0x1e] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x1e] = param_1[0x1e] & 0x7fffffff;
  param_1[0x1c] = 0xffffffff;
  param_1[0x1d] = 0xffffffff;
  param_1[0x1e] = 0;
  uVar1 = param_1[0x1e];
  param_1[0x1e] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x1e] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x1e] = param_1[0x1e] & 0x7fffffff;
  param_1[0x21] = 0;
  uVar1 = param_1[0x21];
  param_1[0x21] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x21] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x21] = param_1[0x21] & 0x7fffffff;
  param_1[0x1f] = 0xffffffff;
  param_1[0x20] = 0xffffffff;
  param_1[0x21] = 0;
  uVar1 = param_1[0x21];
  param_1[0x21] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x21] = uVar1 & 0xe1fff010 | 0x1000111;
  param_1[0x21] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x21] = param_1[0x21] & 0x7fffffff;
  return param_1;
}

// 00F8E6E0  cEspShaderWaterVelocity::vf00  size=36  [class]
undefined4 * __thiscall cEspShaderWaterVelocity::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cEspShaderBase::vftable;
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

