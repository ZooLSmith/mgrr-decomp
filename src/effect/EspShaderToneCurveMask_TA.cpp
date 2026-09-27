// src/effect/EspShaderToneCurveMask_TA.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F6CA90..00F8EB70, 3 functions

#include "mgrr.h"
#include "EspShaderToneCurveMask_TA.h"

// 00F6CA90  EspShaderToneCurveMask_TA::vf08  size=207  [class]
undefined4 __fastcall EspShaderToneCurveMask_TA::vf08(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = Fw::StringCopyCat("EspShaderToneCurveMask_ta");
  uVar2 = Fw::StringCopyCat_2("EspShaderToneCurveMask_ta");
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

// 00F856F0  EspShaderToneCurveMask_TA::EspShaderToneCurveMask_TA  size=266  [class]
/* WARNING: Removing unreachable block (ram,0x00f85745) */
/* WARNING: Removing unreachable block (ram,0x00f857b8) */

undefined4 * __fastcall EspShaderToneCurveMask_TA::EspShaderToneCurveMask_TA(undefined4 *param_1)

{
  uint uVar1;
  
  cEspShaderBase::cEspShaderBase();
  param_1[0x13] = 0xffffffff;
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0xffffffff;
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 0xffffffff;
  param_1[0x18] = 0xffffffff;
  *param_1 = vftable;
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

// 00F8EB70  EspShaderToneCurveMask_TA::vf00  size=36  [class]
undefined4 * __thiscall EspShaderToneCurveMask_TA::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cEspShaderBase::vftable;
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

