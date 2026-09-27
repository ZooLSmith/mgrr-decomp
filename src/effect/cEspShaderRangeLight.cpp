// src/effect/cEspShaderRangeLight.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F5D590..00F8E680, 4 functions

#include "mgrr.h"
#include "cEspShaderRangeLight.h"

// 00F5D590  cEspShaderRangeLight::vf0C  size=1  [class]
void cEspShaderRangeLight::vf0C(void)

{
  return;
}

// 00F6AE00  cEspShaderRangeLight::vf08  size=298  [class]
/* WARNING: Removing unreachable block (ram,0x00f6aefd) */

undefined4 __fastcall cEspShaderRangeLight::vf08(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar2 = Fw::StringCopyCat("EspShaderRangeLight");
  uVar3 = Fw::StringCopyCat_2("EspShaderRangeLight");
  iVar4 = FUN_00fa01a0(uVar2,uVar3);
  if (((((iVar4 != 0) && (iVar4 = FUN_00f9e6d0(param_1 + 10,"g_WorldViewProjMatrix"), iVar4 != 0))
       && (iVar4 = FUN_00f9e6d0(param_1 + 0xd,"g_MatrialColor"), iVar4 != 0)) &&
      ((iVar4 = FUN_00f9e6d0(param_1 + 0x13,"g_Rate"), iVar4 != 0 &&
       (iVar4 = FUN_00f9e6d0(param_1 + 0x16,"g_Rate2"), iVar4 != 0)))) &&
     ((iVar4 = FUN_00f9e6d0(param_1 + 0x19,"g_ViewPos"), iVar4 != 0 &&
      ((iVar4 = FUN_009e01e0(param_1 + 0x10,"g_Texture0",0,2,1), iVar4 != 0 &&
       (iVar4 = FUN_009e01e0(param_1 + 0x1c,"g_BgTexture0",1,1,3), iVar4 != 0)))))) {
    uVar1 = param_1[0x1e];
    param_1[0x1e] = uVar1 & 0xe1ffffff | 0x1000000;
    param_1[0x1e] = uVar1 & 0xe1fff000 | 0x1000101;
    (**(code **)(*param_1 + 0xc))();
    return 1;
  }
  return 0;
}

// 00F83F90  cEspShaderRangeLight::cEspShaderRangeLight  size=512  [class]
/* WARNING: Removing unreachable block (ram,0x00f83fe9) */
/* WARNING: Removing unreachable block (ram,0x00f84054) */
/* WARNING: Removing unreachable block (ram,0x00f840c5) */
/* WARNING: Removing unreachable block (ram,0x00f8414b) */

undefined4 * __fastcall cEspShaderRangeLight::cEspShaderRangeLight(undefined4 *param_1)

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
  param_1[0x19] = 0xffffffff;
  param_1[0x1a] = 0xffffffff;
  param_1[0x1b] = 0xffffffff;
  param_1[0x1e] = 0x1000000;
  param_1[0x1e] = 0x1000111;
  param_1[0x1e] = 0x1111111;
  param_1[0x1e] = param_1[0x1e] & 0x7fffffff;
  param_1[0x1c] = 0xffffffff;
  param_1[0x1d] = 0xffffffff;
  param_1[0x1e] = 0x1000000;
  param_1[0x1e] = 0x1111111;
  param_1[0x1e] = param_1[0x1e] & 0x7fffffff;
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

// 00F8E680  cEspShaderRangeLight::vf00  size=36  [class]
undefined4 * __thiscall cEspShaderRangeLight::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cEspShaderBase::vftable;
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

