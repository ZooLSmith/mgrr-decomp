// src/effect/cEspShaderBlurMaskSoftPt3D.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F64250..00F8C9A0, 3 functions

#include "mgrr.h"
#include "cEspShaderBlurMaskSoftPt3D.h"

// 00F64250  cEspShaderBlurMaskSoftPt3D::vf08  size=304  [class]
/* WARNING: Removing unreachable block (ram,0x00f64359) */

undefined4 __fastcall cEspShaderBlurMaskSoftPt3D::vf08(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar2 = Fw::StringCopyCat("espshaderblurmasksoftpt");
  uVar3 = Fw::StringCopyCat_2("espshaderblurmasksoftpt");
  iVar4 = FUN_00fa01a0(uVar2,uVar3);
  if (((((iVar4 != 0) && (iVar4 = FUN_00f9e6d0(param_1 + 0x28,"g_WorldViewProjMatrix"), iVar4 != 0))
       && (iVar4 = FUN_00f9e6d0(param_1 + 0x34,"g_MatrialColor"), iVar4 != 0)) &&
      ((iVar4 = FUN_00f9e6d0(param_1 + 0x4c,"g_Rate"), iVar4 != 0 &&
       (iVar4 = FUN_00f9e6d0(param_1 + 0x58,"g_Blur"), iVar4 != 0)))) &&
     ((iVar4 = FUN_009e01e0(param_1 + 100,"g_BgTexture0",1,2,3), iVar4 != 0 &&
      ((iVar4 = FUN_009e01e0(param_1 + 0x70,"g_MaskTexture0",2,2,1), iVar4 != 0 &&
       (iVar4 = FUN_009e01e0(param_1 + 0x7c,"g_ZTexture",3,1,3), iVar4 != 0)))))) {
    uVar1 = *(uint *)(param_1 + 0x84);
    *(uint *)(param_1 + 0x84) = uVar1 & 0xe1ffffff | 0x1000000;
    *(uint *)(param_1 + 0x84) = uVar1 & 0xe1fff000 | 0x1000101;
    return 1;
  }
  return 0;
}

// 00F82880  cEspShaderBlurMaskSoftPt3D::cEspShaderBlurMaskSoftPt3D  size=262  [class]
/* WARNING: Removing unreachable block (ram,0x00f828bd) */
/* WARNING: Removing unreachable block (ram,0x00f8293e) */

undefined4 * __fastcall cEspShaderBlurMaskSoftPt3D::cEspShaderBlurMaskSoftPt3D(undefined4 *param_1)

{
  cEspShaderBlurMask::cEspShaderBlurMask();
  *param_1 = vftable;
  param_1[0x21] = 0x1000000;
  param_1[0x21] = 0x1000111;
  param_1[0x21] = 0x1111111;
  param_1[0x21] = param_1[0x21] & 0x7fffffff;
  param_1[0x1f] = 0xffffffff;
  param_1[0x20] = 0xffffffff;
  param_1[0x21] = 0x1000000;
  param_1[0x21] = 0x1111111;
  param_1[0x21] = param_1[0x21] & 0x7fffffff;
  return param_1;
}

// 00F8C9A0  cEspShaderBlurMaskSoftPt3D::vf00  size=36  [class]
undefined4 * __thiscall cEspShaderBlurMaskSoftPt3D::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cEspShaderBase::vftable;
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

