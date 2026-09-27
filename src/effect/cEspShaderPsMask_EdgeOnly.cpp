// src/effect/cEspShaderPsMask_EdgeOnly.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F6A3E0..00F8E4D0, 3 functions

#include "mgrr.h"
#include "cEspShaderPsMask_EdgeOnly.h"

// 00F6A3E0  cEspShaderPsMask_EdgeOnly::vf08  size=207  [class]
undefined4 __fastcall cEspShaderPsMask_EdgeOnly::vf08(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = Fw::StringCopyCat("EspShaderPsMask_EdgeOnly");
  uVar2 = Fw::StringCopyCat_2("EspShaderPsMask_EdgeOnly");
  iVar3 = FUN_00fa01a0(uVar1,uVar2);
  if (iVar3 != 0) {
    iVar3 = FUN_00f9e6d0(param_1 + 10,"g_WorldViewProjMatrix");
    if (iVar3 != 0) {
      iVar3 = FUN_00f9e6d0(param_1 + 0xd,"g_MatrialColor");
      if (iVar3 != 0) {
        iVar3 = FUN_00f9e6d0(param_1 + 0x16,"g_Rate");
        if (iVar3 != 0) {
          iVar3 = FUN_00f9e6d0(param_1 + 0x19,"g_Color2");
          if (iVar3 != 0) {
            iVar3 = FUN_009e01e0(param_1 + 0x10,"g_Texture0",0,2,1);
            if (iVar3 != 0) {
              iVar3 = FUN_009e01e0(param_1 + 0x13,"g_Texture1",1,2,1);
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

// 00F83950  cEspShaderPsMask_EdgeOnly::cEspShaderPsMask_EdgeOnly  size=39  [class]
undefined4 * __fastcall cEspShaderPsMask_EdgeOnly::cEspShaderPsMask_EdgeOnly(undefined4 *param_1)

{
  cEspShaderMask::cEspShaderMask();
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 0xffffffff;
  param_1[0x18] = 0xffffffff;
  param_1[0x19] = 0xffffffff;
  param_1[0x1a] = 0xffffffff;
  param_1[0x1b] = 0xffffffff;
  *param_1 = vftable;
  return param_1;
}

// 00F8E4D0  cEspShaderPsMask_EdgeOnly::vf00  size=36  [class]
undefined4 * __thiscall cEspShaderPsMask_EdgeOnly::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cEspShaderBase::vftable;
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

