// src/effect/cEspShaderShimmer_DAF.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009D1490..015ECC00, 6 functions

#include "mgrr.h"
#include "cEspShaderShimmer_DAF.h"

// 009D1490  cEspShaderShimmer_DAF::cEspShaderShimmer_DAF  size=18  [class]
undefined4 * __fastcall cEspShaderShimmer_DAF::cEspShaderShimmer_DAF(undefined4 *param_1)

{
  cEspShaderShimmer::cEspShaderShimmer();
  *param_1 = vftable;
  return param_1;
}

// 009DB410  cEspShaderShimmer_DAF::vf00  size=36  [class]
undefined4 * __thiscall cEspShaderShimmer_DAF::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  cEspShaderBase::~cEspShaderBase();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009E4C40  cEspShaderShimmer_DAF::vf08  size=243  [class]
undefined4 __fastcall cEspShaderShimmer_DAF::vf08(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = FUN_00f5e2c0("EspShaderShimmer_DAF");
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

// 00F5D080  cEspShaderShimmer_DAF::vf0C  size=1  [class]
void cEspShaderShimmer_DAF::vf0C(void)

{
  return;
}

// 00F80F10  cEspShaderShimmer_DAF::vf04  size=39  [class]
void __fastcall cEspShaderShimmer_DAF::vf04(int param_1)

{
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x48) = 0x1111111;
  Hw::cShader::vf04();
  return;
}

// 015ECC00  cEspShaderShimmer_DAF::~cEspShaderShimmer_DAF  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cEspShaderShimmer_DAF::~cEspShaderShimmer_DAF(void)

{
  _DAT_01b7a898 = vftable;
  cEspShaderBase::~cEspShaderBase();
  return;
}

