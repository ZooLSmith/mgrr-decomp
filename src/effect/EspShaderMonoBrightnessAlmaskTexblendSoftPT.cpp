// src/effect/EspShaderMonoBrightnessAlmaskTexblendSoftPT.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F610F0..00F8B6A0, 3 functions

#include "mgrr.h"
#include "EspShaderMonoBrightnessAlmaskTexblendSoftPT.h"

// 00F610F0  EspShaderMonoBrightnessAlmaskTexblendSoftPT::vf08  size=237  [class]
undefined4 __fastcall EspShaderMonoBrightnessAlmaskTexblendSoftPT::vf08(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = Fw::StringCopyCat("EspShaderMonoBrightnessAlmaskTexblendSoftPT");
  uVar2 = Fw::StringCopyCat_2("EspShaderMonoBrightnessAlmaskTexblendSoftPT");
  iVar3 = FUN_00fa01a0(uVar1,uVar2);
  if (iVar3 != 0) {
    iVar3 = FUN_00f9e6d0(param_1 + 10,"g_WorldViewProjMatrix");
    if (iVar3 != 0) {
      iVar3 = FUN_00f9e6d0(param_1 + 0xd,"g_MatrialColor");
      if (iVar3 != 0) {
        iVar3 = FUN_00f9e6d0(param_1 + 0x16,"g_BlendRate");
        if (iVar3 != 0) {
          iVar3 = FUN_00f9e6d0(param_1 + 0x13,"g_Rate");
          if (iVar3 != 0) {
            iVar3 = FUN_009e01e0(param_1 + 0x10,"g_Texture0",0,2,1);
            if (iVar3 != 0) {
              iVar3 = FUN_009e01e0(param_1 + 0x19,&DAT_016e1c07,1,2,1);
              if (iVar3 != 0) {
                iVar3 = FUN_009e01e0(param_1 + 0x1c,&DAT_016e1c0d,2,2,1);
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
  }
  return 0;
}

// 00F81AC0  EspShaderMonoBrightnessAlmaskTexblendSoftPT::EspShaderMonoBrightnessAlmaskTexblendSoftPT  size=467  [class]
/* WARNING: Removing unreachable block (ram,0x00f81b10) */
/* WARNING: Removing unreachable block (ram,0x00f81b7b) */
/* WARNING: Removing unreachable block (ram,0x00f81be3) */
/* WARNING: Removing unreachable block (ram,0x00f81c54) */

undefined4 * __fastcall
EspShaderMonoBrightnessAlmaskTexblendSoftPT::EspShaderMonoBrightnessAlmaskTexblendSoftPT
          (undefined4 *param_1)

{
  uint uVar1;
  
  cEspShaderBase::cEspShaderBase_3();
  param_1[0x13] = 0xffffffff;
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0xffffffff;
  *param_1 = vftable;
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 0xffffffff;
  param_1[0x18] = 0xffffffff;
  param_1[0x1b] = 0x1000000;
  param_1[0x1b] = 0x1000111;
  param_1[0x1b] = 0x1111111;
  param_1[0x1b] = param_1[0x1b] & 0x7fffffff;
  param_1[0x19] = 0xffffffff;
  param_1[0x1a] = 0xffffffff;
  param_1[0x1b] = 0x1000000;
  param_1[0x1b] = 0x1111111;
  param_1[0x1b] = param_1[0x1b] & 0x7fffffff;
  param_1[0x1e] = 0;
  uVar1 = param_1[0x1e];
  param_1[0x1e] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x1e] = uVar1 & 0xe1fff010 | 0x1000111;
  param_1[0x1e] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x1e] = param_1[0x1e] & 0x7fffffff;
  param_1[0x1c] = 0xffffffff;
  param_1[0x1d] = 0xffffffff;
  param_1[0x1e] = 0;
  uVar1 = param_1[0x1e];
  param_1[0x1e] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x1e] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x1e] = param_1[0x1e] & 0x7fffffff;
  return param_1;
}

// 00F8B6A0  EspShaderMonoBrightnessAlmaskTexblendSoftPT::vf00  size=36  [class]
undefined4 * __thiscall
EspShaderMonoBrightnessAlmaskTexblendSoftPT::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cEspShaderBase::vftable;
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

