// src/effect/cEspShaderProjection_Fog.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F6BB80..00F8E8C0, 3 functions

#include "mgrr.h"
#include "cEspShaderProjection_Fog.h"

// 00F6BB80  cEspShaderProjection_Fog::vf08  size=349  [class]
/* WARNING: Removing unreachable block (ram,0x00f6bc7d) */

undefined4 __fastcall cEspShaderProjection_Fog::vf08(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar2 = Fw::StringCopyCat("EspShaderProjection_Fog");
  uVar3 = Fw::StringCopyCat_2("EspShaderProjection_Fog");
  iVar4 = FUN_00fa01a0(uVar2,uVar3);
  if (((((iVar4 != 0) && (iVar4 = FUN_00f9e6d0(param_1 + 10,"g_WorldViewProjMatrix"), iVar4 != 0))
       && (iVar4 = FUN_00f9e6d0(param_1 + 0x1c,"g_ViewTexMtx"), iVar4 != 0)) &&
      ((iVar4 = FUN_00f9e6d0(param_1 + 0xd,"g_MatrialColor"), iVar4 != 0 &&
       (iVar4 = FUN_00f9e6d0(param_1 + 0x13,"g_Rate"), iVar4 != 0)))) &&
     ((iVar4 = FUN_00f9e6d0(param_1 + 0x16,"g_ViewCenterPos"), iVar4 != 0 &&
      ((iVar4 = FUN_009e01e0(param_1 + 0x10,"g_Texture0",0,2,1), iVar4 != 0 &&
       (iVar4 = FUN_009e01e0(param_1 + 0x19,"g_BgTexture0",1,1,3), iVar4 != 0)))))) {
    uVar1 = param_1[0x1b];
    param_1[0x1b] = uVar1 & 0xe1ffffff | 0x1000000;
    param_1[0x1b] = uVar1 & 0xe1fff000 | 0x1000101;
    iVar4 = FUN_00f9e6d0(param_1 + 0x1f,&DAT_016e8a64);
    if ((iVar4 != 0) && (iVar4 = FUN_00f9e6d0(param_1 + 0x22,"fognearfar"), iVar4 != 0)) {
      (**(code **)(*param_1 + 0xc))();
      return 1;
    }
  }
  return 0;
}

// 00F850A0  cEspShaderProjection_Fog::cEspShaderProjection_Fog  size=54  [class]
undefined4 * __fastcall cEspShaderProjection_Fog::cEspShaderProjection_Fog(undefined4 *param_1)

{
  cEspShaderProjection::cEspShaderProjection();
  *param_1 = vftable;
  param_1[0x1f] = 0xffffffff;
  param_1[0x20] = 0xffffffff;
  param_1[0x21] = 0xffffffff;
  param_1[0x22] = 0xffffffff;
  param_1[0x23] = 0xffffffff;
  param_1[0x24] = 0xffffffff;
  return param_1;
}

// 00F8E8C0  cEspShaderProjection_Fog::vf00  size=36  [class]
undefined4 * __thiscall cEspShaderProjection_Fog::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cEspShaderBase::vftable;
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

