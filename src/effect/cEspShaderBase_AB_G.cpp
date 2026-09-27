// src/effect/cEspShaderBase_AB_G.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F65070..00F8CFA0, 3 functions

#include "mgrr.h"
#include "cEspShaderBase_AB_G.h"

// 00F65070  cEspShaderBase_AB_G::vf08  size=288  [class]
undefined4 __fastcall cEspShaderBase_AB_G::vf08(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = Fw::StringCopyCat("EspShaderBase_AB_G");
  uVar3 = Fw::StringCopyCat_2("EspShaderBase_AB_G");
  iVar4 = FUN_00fa01a0(uVar2,uVar3);
  if (iVar4 != 0) {
    iVar4 = FUN_00f9e6d0(param_1 + 10,"g_WorldViewProjMatrix");
    if (iVar4 != 0) {
      iVar4 = FUN_00f9e6d0(param_1 + 0xd,"g_MatrialColor");
      if (iVar4 != 0) {
        iVar4 = FUN_00f9e6d0(param_1 + 0x16,"g_BlendRate");
        if (iVar4 != 0) {
          iVar4 = FUN_00fa39a0(param_1 + 0x10,PTR_s_g_Sampler0_0188ff1c);
          if (iVar4 != 0) {
            uVar5 = 2;
            iVar4 = 2;
            if ((*(byte *)((int)param_1 + 0x4b) & 0x1f) != 1) {
              uVar5 = 3;
              iVar4 = 3;
            }
            uVar1 = param_1[0x12];
            param_1[0x12] = iVar4 << 8 | uVar1 & 0xfffff020 | uVar5 | 0x20;
            param_1[0x12] = iVar4 << 8 | uVar1 & 0xff111020 | uVar5 | 0x111020;
            iVar4 = FUN_009e01e0(param_1 + 0x19,"g_MaskTexture0",1,2,1);
            if (iVar4 != 0) {
              iVar4 = FUN_009e01e0(param_1 + 0x1f,"g_Texture1",2,2,1);
              if (iVar4 != 0) {
                (**(code **)(*param_1 + 0xc))();
                param_1[0x22] = 1;
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

// 00F8CF80  cEspShaderBase_AB_G::cEspShaderBase_AB_G  size=18  [class]
undefined4 * __fastcall cEspShaderBase_AB_G::cEspShaderBase_AB_G(undefined4 *param_1)

{
  cEspShaderBase2::cEspShaderBase2();
  *param_1 = vftable;
  return param_1;
}

// 00F8CFA0  cEspShaderBase_AB_G::vf00  size=97  [class]
undefined4 * __thiscall cEspShaderBase_AB_G::vf00(undefined4 *param_1,byte param_2)

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
  param_1[0x1c] = 0xffffffff;
  param_1[0x1d] = 0xffffffff;
  param_1[0x1e] = 0x1111111;
  param_1[0x1f] = 0xffffffff;
  param_1[0x20] = 0xffffffff;
  param_1[0x21] = 0x1111111;
  *param_1 = cEspShaderBase::vftable;
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

