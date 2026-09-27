// src/effect/EspShaderToneCurve_TA.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F6C8B0..00F8EB10, 3 functions

#include "mgrr.h"
#include "EspShaderToneCurve_TA.h"

// 00F6C8B0  EspShaderToneCurve_TA::vf08  size=177  [class]
undefined4 __fastcall EspShaderToneCurve_TA::vf08(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = Fw::StringCopyCat("espshadertonecurve_ta");
  uVar2 = Fw::StringCopyCat_2("espshadertonecurve_ta");
  iVar3 = FUN_00fa01a0(uVar1,uVar2);
  if (iVar3 != 0) {
    iVar3 = FUN_00f9e6d0(param_1 + 10,"g_WorldViewProjMatrix");
    if (iVar3 != 0) {
      iVar3 = FUN_00f9e6d0(param_1 + 0xd,"g_MatrialColor");
      if (iVar3 != 0) {
        iVar3 = FUN_00f9e6d0(param_1 + 0x13,"g_Rate");
        if (iVar3 != 0) {
          iVar3 = FUN_00f9e6d0(param_1 + 0x16,"g_AlphaRate");
          if (iVar3 != 0) {
            iVar3 = FUN_009e01e0(param_1 + 0x10,"g_Texture0",0,2,1);
            if (iVar3 != 0) {
              (**(code **)(*param_1 + 0xc))();
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}

// 00F855B0  EspShaderToneCurve_TA::EspShaderToneCurve_TA  size=39  [class]
undefined4 * __fastcall EspShaderToneCurve_TA::EspShaderToneCurve_TA(undefined4 *param_1)

{
  cEspShaderBase::cEspShaderBase_3();
  param_1[0x13] = 0xffffffff;
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0xffffffff;
  *param_1 = vftable;
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 0xffffffff;
  param_1[0x18] = 0xffffffff;
  return param_1;
}

// 00F8EB10  EspShaderToneCurve_TA::vf00  size=36  [class]
undefined4 * __thiscall EspShaderToneCurve_TA::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cEspShaderBase::vftable;
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

