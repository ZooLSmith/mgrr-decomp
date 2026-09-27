// src/effect/EspShaderDrawMirror.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009D2550..015ECCB0, 5 functions

#include "mgrr.h"
#include "EspShaderDrawMirror.h"

// 009D2550  EspShaderDrawMirror::EspShaderDrawMirror  size=18  [class]
undefined4 * __fastcall EspShaderDrawMirror::EspShaderDrawMirror(undefined4 *param_1)

{
  cEspShaderShimmer::cEspShaderShimmer();
  *param_1 = vftable;
  return param_1;
}

// 009DCD60  EspShaderDrawMirror::vf00  size=36  [class]
undefined4 * __thiscall EspShaderDrawMirror::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  cEspShaderBase::~cEspShaderBase();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009E68B0  EspShaderDrawMirror::vf08  size=243  [class]
undefined4 __fastcall EspShaderDrawMirror::vf08(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = FUN_00f5e2c0("EspShaderDrawMirror");
  if (iVar2 != 0) {
    iVar2 = FUN_00f9e6d0(param_1 + 10,"g_WorldViewProjMatrix");
    if (iVar2 != 0) {
      iVar2 = FUN_00f9e6d0(param_1 + 0xd,"g_MatrialColor");
      if (iVar2 != 0) {
        iVar2 = FUN_00f9e6d0(param_1 + 0x13,"g_Rate");
        if (iVar2 != 0) {
          iVar2 = FUN_00fa39a0(param_1 + 0x10,PTR_s_g_Sampler0_0188ff1c);
          if (iVar2 != 0) {
            uVar3 = 2;
            iVar2 = 2;
            if ((*(byte *)((int)param_1 + 0x4b) & 0x1f) != 1) {
              uVar3 = 3;
              iVar2 = 3;
            }
            uVar1 = param_1[0x12];
            param_1[0x12] = iVar2 << 8 | uVar1 & 0xfffff020 | uVar3 | 0x20;
            param_1[0x12] = iVar2 << 8 | uVar1 & 0xff111020 | uVar3 | 0x111020;
            iVar2 = FUN_009e01e0(param_1 + 0x16,"g_BgTexture0",1,2,3);
            if (iVar2 != 0) {
              iVar2 = FUN_009e01e0(param_1 + 0x19,"g_MaskTexture0",2,2,1);
              if (iVar2 != 0) {
                (**(code **)(*param_1 + 0xc))();
                return 1;
              }
            }
          }
          return 0;
        }
      }
    }
  }
  return 0;
}

// 015ECC90  EspShaderDrawMirror::~EspShaderDrawMirror  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void EspShaderDrawMirror::~EspShaderDrawMirror(void)

{
  _DAT_01b7b140 = vftable;
  cEspShaderBase::~cEspShaderBase();
  return;
}

// 015ECCB0  EspShaderDrawMirror::~EspShaderDrawMirror  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void EspShaderDrawMirror::~EspShaderDrawMirror(void)

{
  _DAT_01b7b1b0 = vftable;
  cEspShaderBase::~cEspShaderBase();
  return;
}

