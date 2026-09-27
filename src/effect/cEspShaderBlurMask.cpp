// src/effect/cEspShaderBlurMask.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F64150..00F8C970, 3 functions

#include "mgrr.h"
#include "cEspShaderBlurMask.h"

// 00F64150  cEspShaderBlurMask::vf08  size=191  [class]
bool __fastcall cEspShaderBlurMask::vf08(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = Fw::StringCopyCat("EspShaderBlurMask");
  uVar2 = Fw::StringCopyCat_2("EspShaderBlurMask");
  iVar3 = FUN_00fa01a0(uVar1,uVar2);
  if (iVar3 != 0) {
    iVar3 = FUN_00f9e6d0(param_1 + 0x28,"g_WorldViewProjMatrix");
    if (iVar3 != 0) {
      iVar3 = FUN_00f9e6d0(param_1 + 0x34,"g_MatrialColor");
      if (iVar3 != 0) {
        iVar3 = FUN_00f9e6d0(param_1 + 0x4c,"g_Rate");
        if (iVar3 != 0) {
          iVar3 = FUN_00f9e6d0(param_1 + 0x58,"g_Blur");
          if (iVar3 != 0) {
            iVar3 = FUN_009e01e0(param_1 + 100,"g_BgTexture0",1,2,3);
            if (iVar3 != 0) {
              iVar3 = FUN_009e01e0(param_1 + 0x70,"g_MaskTexture0",2,2,1);
              return iVar3 != 0;
            }
          }
        }
      }
    }
  }
  return false;
}

// 00F82790  cEspShaderBlurMask::cEspShaderBlurMask  size=238  [class]
/* WARNING: Removing unreachable block (ram,0x00f827ca) */
/* WARNING: Removing unreachable block (ram,0x00f8283c) */

undefined4 * __fastcall cEspShaderBlurMask::cEspShaderBlurMask(undefined4 *param_1)

{
  cEspShaderScreenBlur::cEspShaderScreenBlur();
  *param_1 = vftable;
  param_1[0x1e] = 0x1000000;
  param_1[0x1e] = 0x1000111;
  param_1[0x1e] = 0x1111111;
  param_1[0x1e] = param_1[0x1e] & 0x7fffffff;
  param_1[0x1c] = 0xffffffff;
  param_1[0x1d] = 0xffffffff;
  param_1[0x1e] = 0x1000000;
  param_1[0x1e] = 0x1111111;
  param_1[0x1e] = param_1[0x1e] & 0x7fffffff;
  return param_1;
}

// 00F8C970  cEspShaderBlurMask::vf00  size=36  [class]
undefined4 * __thiscall cEspShaderBlurMask::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cEspShaderBase::vftable;
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

