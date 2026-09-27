// src/effect/cEspShaderWaterComp.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F6B180..00F8E710, 3 functions

#include "mgrr.h"
#include "cEspShaderWaterComp.h"

// 00F6B180  cEspShaderWaterComp::vf08  size=302  [class]
/* WARNING: Removing unreachable block (ram,0x00f6b209) */
/* WARNING: Removing unreachable block (ram,0x00f6b278) */

undefined4 __fastcall cEspShaderWaterComp::vf08(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar2 = Fw::StringCopyCat("espshaderwavecomp");
  uVar3 = Fw::StringCopyCat_2("espshaderwavecomp");
  iVar4 = FUN_00fa01a0(uVar2,uVar3);
  if (((iVar4 != 0) && (iVar4 = FUN_00f9e6d0(param_1 + 0x4c,"g_WorldViewProjMatrix"), iVar4 != 0))
     && (iVar4 = FUN_00fa39a0(param_1 + 0x58,PTR_s_g_Sampler0_0188ff1c), iVar4 != 0)) {
    uVar1 = *(uint *)(param_1 + 0x60);
    *(uint *)(param_1 + 0x60) = uVar1 & 0xe1ffffff | 0x1000000;
    *(uint *)(param_1 + 0x60) = uVar1 & 0xe1444010 | 0x1444111;
    iVar4 = FUN_00fa39a0(param_1 + 100,PTR_s_g_Sampler1_0188ff20);
    if (iVar4 != 0) {
      uVar1 = *(uint *)(param_1 + 0x6c);
      *(uint *)(param_1 + 0x6c) = uVar1 & 0xe1ffffff | 0x1000000;
      *(uint *)(param_1 + 0x6c) = uVar1 & 0xe1444010 | 0x1444111;
      return 1;
    }
  }
  return 0;
}

// 00F846B0  cEspShaderWaterComp::cEspShaderWaterComp  size=458  [class]
/* WARNING: Removing unreachable block (ram,0x00f846f7) */
/* WARNING: Removing unreachable block (ram,0x00f84762) */
/* WARNING: Removing unreachable block (ram,0x00f847ca) */
/* WARNING: Removing unreachable block (ram,0x00f8483b) */

undefined4 * __fastcall cEspShaderWaterComp::cEspShaderWaterComp(undefined4 *param_1)

{
  uint uVar1;
  
  cEspShaderBase::cEspShaderBase();
  *param_1 = vftable;
  param_1[0x13] = 0xffffffff;
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0xffffffff;
  param_1[0x18] = 0x1000000;
  param_1[0x18] = 0x1000111;
  param_1[0x18] = 0x1111111;
  param_1[0x18] = param_1[0x18] & 0x7fffffff;
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 0xffffffff;
  param_1[0x18] = 0x1000000;
  param_1[0x18] = 0x1111111;
  param_1[0x18] = param_1[0x18] & 0x7fffffff;
  param_1[0x1b] = 0;
  uVar1 = param_1[0x1b];
  param_1[0x1b] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x1b] = uVar1 & 0xe1fff010 | 0x1000111;
  param_1[0x1b] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x1b] = param_1[0x1b] & 0x7fffffff;
  param_1[0x19] = 0xffffffff;
  param_1[0x1a] = 0xffffffff;
  param_1[0x1b] = 0;
  uVar1 = param_1[0x1b];
  param_1[0x1b] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x1b] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x1b] = param_1[0x1b] & 0x7fffffff;
  return param_1;
}

// 00F8E710  cEspShaderWaterComp::vf00  size=36  [class]
undefined4 * __thiscall cEspShaderWaterComp::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cEspShaderBase::vftable;
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

