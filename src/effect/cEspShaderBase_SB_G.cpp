// src/effect/cEspShaderBase_SB_G.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F64E10..00F8CE80, 3 functions

#include "mgrr.h"
#include "cEspShaderBase_SB_G.h"

// 00F64E10  cEspShaderBase_SB_G::vf08  size=314  [class]
/* WARNING: Removing unreachable block (ram,0x00f64f13) */

undefined4 __fastcall cEspShaderBase_SB_G::vf08(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar2 = Fw::StringCopyCat("EspShaderBase_SB_G");
  uVar3 = Fw::StringCopyCat_2("EspShaderBase_SB_G");
  iVar4 = FUN_00fa01a0(uVar2,uVar3);
  if (((((iVar4 != 0) && (iVar4 = FUN_00f9e6d0(param_1 + 10,"g_WorldViewProjMatrix"), iVar4 != 0))
       && (iVar4 = FUN_00f9e6d0(param_1 + 0xd,"g_MatrialColor"), iVar4 != 0)) &&
      ((iVar4 = FUN_00f9e6d0(param_1 + 0x13,"g_Rate"), iVar4 != 0 &&
       (iVar4 = FUN_00f9e6d0(param_1 + 0x16,"g_BlendRate"), iVar4 != 0)))) &&
     ((iVar4 = FUN_009e01e0(param_1 + 0x10,"g_Texture0",0,2,1), iVar4 != 0 &&
      ((iVar4 = FUN_009e01e0(param_1 + 0x1c,"g_BgTexture0",1,2,1), iVar4 != 0 &&
       (iVar4 = FUN_009e01e0(param_1 + 0x1f,"g_Texture1",2,2,1), iVar4 != 0)))))) {
    uVar1 = param_1[0x1e];
    param_1[0x1e] = uVar1 & 0xe1ffffff | 0x1000000;
    param_1[0x1e] = uVar1 & 0xe1fff000 | 0x1000101;
    (**(code **)(*param_1 + 0xc))();
    param_1[0x22] = 1;
    return 1;
  }
  return 0;
}

// 00F8CE60  cEspShaderBase_SB_G::cEspShaderBase_SB_G  size=18  [class]
undefined4 * __fastcall cEspShaderBase_SB_G::cEspShaderBase_SB_G(undefined4 *param_1)

{
  cEspShaderBase2::cEspShaderBase2();
  *param_1 = vftable;
  return param_1;
}

// 00F8CE80  cEspShaderBase_SB_G::vf00  size=97  [class]
undefined4 * __thiscall cEspShaderBase_SB_G::vf00(undefined4 *param_1,byte param_2)

{
  param_1[0x13] = 0xffffffff;
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0xffffffff;
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 0xffffffff;
  param_1[0x18] = 0xffffffff;
  param_1[0x19] = 0xffffffff;
  param_1[0x1a] = 0xffffffff;
  param_1[0x1b] = 0x1111111;
  param_1[0x1c] = 0xffffffff;
  param_1[0x1d] = 0xffffffff;
  param_1[0x1e] = 0x1111111;
  param_1[0x1f] = 0xffffffff;
  param_1[0x20] = 0xffffffff;
  param_1[0x21] = 0x1111111;
  *param_1 = cEspShaderBase::vftable;
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

