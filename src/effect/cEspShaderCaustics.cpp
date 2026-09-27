// src/effect/cEspShaderCaustics.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F5C480..00F8AE80, 4 functions

#include "mgrr.h"
#include "cEspShaderCaustics.h"

// 00F5C480  cEspShaderCaustics::vf0C  size=1  [class]
void cEspShaderCaustics::vf0C(void)

{
  return;
}

// 00F5F5A0  cEspShaderCaustics::vf08  size=274  [class]
/* WARNING: Removing unreachable block (ram,0x00f5f685) */

undefined4 __fastcall cEspShaderCaustics::vf08(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar2 = Fw::StringCopyCat("EspShaderCaustics");
  uVar3 = Fw::StringCopyCat_2("EspShaderCaustics");
  iVar4 = FUN_00fa01a0(uVar2,uVar3);
  if ((((iVar4 != 0) && (iVar4 = FUN_00f9e6d0(param_1 + 10,"g_WorldViewProjMatrix"), iVar4 != 0)) &&
      (iVar4 = FUN_00f9e6d0(param_1 + 0x19,"g_InvViewProjMatrix"), iVar4 != 0)) &&
     (((iVar4 = FUN_00f9e6d0(param_1 + 0xd,"g_MatrialColor"), iVar4 != 0 &&
       (iVar4 = FUN_00f9e6d0(param_1 + 0x13,"g_Rate"), iVar4 != 0)) &&
      ((iVar4 = FUN_009e01e0(param_1 + 0x10,"g_Texture0",0,2,1), iVar4 != 0 &&
       (iVar4 = FUN_009e01e0(param_1 + 0x16,"g_BgTexture0",1,1,3), iVar4 != 0)))))) {
    uVar1 = param_1[0x18];
    param_1[0x18] = uVar1 & 0xe1ffffff | 0x1000000;
    param_1[0x18] = uVar1 & 0xe1fff000 | 0x1000101;
    (**(code **)(*param_1 + 0xc))();
    return 1;
  }
  return 0;
}

// 00F81540  cEspShaderCaustics::cEspShaderCaustics  size=254  [class]
/* WARNING: Removing unreachable block (ram,0x00f81587) */
/* WARNING: Removing unreachable block (ram,0x00f815f2) */

undefined4 * __fastcall cEspShaderCaustics::cEspShaderCaustics(undefined4 *param_1)

{
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
  param_1[0x19] = 0xffffffff;
  param_1[0x1a] = 0xffffffff;
  param_1[0x1b] = 0xffffffff;
  return param_1;
}

// 00F8AE80  cEspShaderCaustics::vf00  size=36  [class]
undefined4 * __thiscall cEspShaderCaustics::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cEspShaderBase::vftable;
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

