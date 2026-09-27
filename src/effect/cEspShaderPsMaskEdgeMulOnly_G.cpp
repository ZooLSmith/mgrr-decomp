// src/effect/cEspShaderPsMaskEdgeMulOnly_G.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F69540..00F8E280, 3 functions

#include "types.h"

// 00F69540  cEspShaderPsMaskEdgeMulOnly_G::vf08  size=214  [class]
undefined4 __fastcall cEspShaderPsMaskEdgeMulOnly_G::vf08(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = Fw::StringCopyCat("EspShaderPsMaskEdgeMulOnly_G");
  uVar2 = Fw::StringCopyCat_2("EspShaderPsMaskEdgeMulOnly_G");
  iVar3 = FUN_00fa01a0(uVar1,uVar2);
  if (iVar3 != 0) {
    iVar3 = FUN_00f9e6d0(param_1 + 10,"g_WorldViewProjMatrix");
    if (iVar3 != 0) {
      iVar3 = FUN_00f9e6d0(param_1 + 0xd,"g_MatrialColor");
      if (iVar3 != 0) {
        iVar3 = FUN_00f9e6d0(param_1 + 0x13,"g_Rate");
        if (iVar3 != 0) {
          iVar3 = FUN_00f9e6d0(param_1 + 0x16,"g_EdgeColor");
          if (iVar3 != 0) {
            iVar3 = FUN_009e01e0(param_1 + 0x10,"g_Texture0",0,2,1);
            if (iVar3 != 0) {
              iVar3 = FUN_009e01e0(param_1 + 0x19,"g_MaskTexture0",1,2,1);
              if (iVar3 != 0) {
                (**(code **)(*param_1 + 0xc))();
                param_1[0x1c] = 1;
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

// 00F8E260  cEspShaderPsMaskEdgeMulOnly_G::cEspShaderPsMaskEdgeMulOnly_G  size=18  [class]
undefined4 * __fastcall
cEspShaderPsMaskEdgeMulOnly_G::cEspShaderPsMaskEdgeMulOnly_G(undefined4 *param_1)

{
  cEspShaderPsMaskBase::cEspShaderPsMaskBase();
  *param_1 = vftable;
  return param_1;
}

// 00F8E280  cEspShaderPsMaskEdgeMulOnly_G::vf00  size=70  [class]
undefined4 * __thiscall cEspShaderPsMaskEdgeMulOnly_G::vf00(undefined4 *param_1,byte param_2)

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
  *param_1 = cEspShaderBase::vftable;
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

