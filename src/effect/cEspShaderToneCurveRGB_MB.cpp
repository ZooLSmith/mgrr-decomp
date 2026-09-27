// src/effect/cEspShaderToneCurveRGB_MB.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F65FC0..00F8D5F0, 3 functions

#include "mgrr.h"
#include "cEspShaderToneCurveRGB_MB.h"

// 00F65FC0  cEspShaderToneCurveRGB_MB::vf08  size=250  [class]
undefined4 __fastcall cEspShaderToneCurveRGB_MB::vf08(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = Fw::StringCopyCat("EspShaderToneCurveRGB_MB");
  uVar2 = Fw::StringCopyCat_2("EspShaderToneCurveRGB_MB");
  iVar3 = FUN_00fa01a0(uVar1,uVar2);
  if (iVar3 != 0) {
    iVar3 = FUN_00f9e6d0(param_1 + 10,"g_WorldViewProjMatrix");
    if (iVar3 != 0) {
      iVar3 = FUN_00f9e6d0(param_1 + 0xd,"g_MatrialColor");
      if (iVar3 != 0) {
        iVar3 = FUN_00f9e6d0(param_1 + 0x13,"g_Rate");
        if (iVar3 != 0) {
          iVar3 = FUN_00f9e6d0(param_1 + 0x19,"g_BlendRate");
          if (iVar3 != 0) {
            iVar3 = FUN_009e01e0(param_1 + 0x10,"g_Texture0",0,2,1);
            if (iVar3 != 0) {
              iVar3 = FUN_009e01e0(param_1 + 0x1c,"g_MaskTexture0",1,2,1);
              if (iVar3 != 0) {
                iVar3 = FUN_009e01e0(param_1 + 0x22,"g_Texture1",2,2,1);
                if (iVar3 != 0) {
                  (**(code **)(*param_1 + 0xc))();
                  param_1[0x25] = 1;
                  return 1;
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

// 00F8D5D0  cEspShaderToneCurveRGB_MB::cEspShaderToneCurveRGB_MB  size=18  [class]
undefined4 * __fastcall cEspShaderToneCurveRGB_MB::cEspShaderToneCurveRGB_MB(undefined4 *param_1)

{
  cEspShaderToneCurveBase::cEspShaderToneCurveBase();
  *param_1 = vftable;
  return param_1;
}

// 00F8D5F0  cEspShaderToneCurveRGB_MB::vf00  size=30  [class]
undefined4 __thiscall cEspShaderToneCurveRGB_MB::vf00(undefined4 param_1,byte param_2)

{
  cEspShaderBase::cEspShaderBase_4();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

