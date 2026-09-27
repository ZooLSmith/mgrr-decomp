// src/effect/cEspShaderPointLight2.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F5D510..00F8E650, 4 functions

#include "types.h"

// 00F5D510  cEspShaderPointLight2::vf0C  size=1  [class]
void cEspShaderPointLight2::vf0C(void)

{
  return;
}

// 00F6ACA0  cEspShaderPointLight2::vf08  size=344  [class]
/* WARNING: Removing unreachable block (ram,0x00f6adcb) */

undefined4 __fastcall cEspShaderPointLight2::vf08(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = Fw::StringCopyCat("EspShaderPointLight2");
  uVar3 = Fw::StringCopyCat_2("EspShaderPointLight2");
  iVar4 = FUN_00fa01a0(uVar2,uVar3);
  if ((((iVar4 != 0) && (iVar4 = FUN_00f9e6d0(param_1 + 10,"g_WorldViewProjMatrix"), iVar4 != 0)) &&
      (iVar4 = FUN_00f9e6d0(param_1 + 0xd,"g_MatrialColor"), iVar4 != 0)) &&
     ((iVar4 = FUN_00f9e6d0(param_1 + 0x13,"g_Rate"), iVar4 != 0 &&
      (iVar4 = FUN_00fa39a0(param_1 + 0x10,"g_Sampler0"), iVar4 != 0)))) {
    uVar5 = 2;
    iVar4 = 2;
    if ((*(byte *)((int)param_1 + 0x4b) & 0x1f) != 1) {
      uVar5 = 3;
      iVar4 = 3;
    }
    uVar1 = param_1[0x12];
    param_1[0x12] = iVar4 << 8 | uVar1 & 0xfffff020 | uVar5 | 0x20;
    param_1[0x12] = iVar4 << 8 | uVar1 & 0xff111020 | uVar5 | 0x111020;
    iVar4 = FUN_009e01e0(param_1 + 0x16,"g_Sampler1",0xffffffff,1,3);
    if ((iVar4 != 0) &&
       (iVar4 = FUN_009e01e0(param_1 + 0x19,"g_Sampler2",0xffffffff,2,1), iVar4 != 0)) {
      uVar5 = param_1[0x18];
      param_1[0x18] = uVar5 & 0xe1ffffff | 0x1000000;
      param_1[0x18] = uVar5 & 0xe1fff000 | 0x1000101;
      (**(code **)(*param_1 + 0xc))();
      return 1;
    }
  }
  return 0;
}

// 00F83DC0  cEspShaderPointLight2::cEspShaderPointLight2  size=458  [class]
/* WARNING: Removing unreachable block (ram,0x00f83e07) */
/* WARNING: Removing unreachable block (ram,0x00f83e72) */
/* WARNING: Removing unreachable block (ram,0x00f83eda) */
/* WARNING: Removing unreachable block (ram,0x00f83f4b) */

undefined4 * __fastcall cEspShaderPointLight2::cEspShaderPointLight2(undefined4 *param_1)

{
  uint uVar1;
  
  cEspShaderBase::cEspShaderBase_3();
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

// 00F8E650  cEspShaderPointLight2::vf00  size=36  [class]
undefined4 * __thiscall cEspShaderPointLight2::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cEspShaderBase::vftable;
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

