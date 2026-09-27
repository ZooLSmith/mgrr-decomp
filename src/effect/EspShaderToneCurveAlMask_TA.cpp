// src/effect/EspShaderToneCurveAlMask_TA.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F6CCA0..00F8EBF0, 3 functions

#include "types.h"

// 00F6CCA0  EspShaderToneCurveAlMask_TA::vf08  size=207  [class]
undefined4 __fastcall EspShaderToneCurveAlMask_TA::vf08(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = Fw::StringCopyCat("EspShaderToneCurveAlMask_ta");
  uVar2 = Fw::StringCopyCat_2("EspShaderToneCurveAlMask_ta");
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
              iVar3 = FUN_009e01e0(param_1 + 0x19,"g_MaskTexture0",1,2,1);
              if (iVar3 != 0) {
                (**(code **)(*param_1 + 0xc))();
                return 1;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

// 00F8EBD0  EspShaderToneCurveAlMask_TA::EspShaderToneCurveAlMask_TA  size=18  [class]
undefined4 * __fastcall
EspShaderToneCurveAlMask_TA::EspShaderToneCurveAlMask_TA(undefined4 *param_1)

{
  EspShaderToneCurveMask_TA::EspShaderToneCurveMask_TA();
  *param_1 = vftable;
  return param_1;
}

// 00F8EBF0  EspShaderToneCurveAlMask_TA::vf00  size=36  [class]
undefined4 * __thiscall EspShaderToneCurveAlMask_TA::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cEspShaderBase::vftable;
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

