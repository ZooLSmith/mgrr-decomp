// src/effect/EspShaderMosaic.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009DCC90..015ECC20, 5 functions

#include "types.h"

// 009DCC90  EspShaderMosaic::EspShaderMosaic  size=30  [class]
undefined4 * __fastcall EspShaderMosaic::EspShaderMosaic(undefined4 *param_1)

{
  cEspShaderBase::cEspShaderBase_3();
  *param_1 = vftable;
  param_1[0x13] = 0xffffffff;
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0xffffffff;
  return param_1;
}

// 009DCCB0  EspShaderMosaic::vf00  size=36  [class]
undefined4 * __thiscall EspShaderMosaic::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  cEspShaderBase::cEspShaderBase_2();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009E6500  EspShaderMosaic::vf08  size=191  [class]
undefined4 __fastcall EspShaderMosaic::vf08(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = FUN_00f5e2c0("EspShaderMosaic");
  if (iVar2 != 0) {
    iVar2 = FUN_00f9e6d0(param_1 + 10,"g_WorldViewProjMatrix");
    if (iVar2 != 0) {
      iVar2 = FUN_00f9e6d0(param_1 + 0xd,"g_MatrialColor");
      if (iVar2 != 0) {
        iVar2 = FUN_00f9e6d0(param_1 + 0x13,"g_MosaicRate");
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
            (**(code **)(*param_1 + 0xc))();
            return 1;
          }
          return 0;
        }
      }
    }
  }
  return 0;
}

// 00F5C110  EspShaderMosaic::vf0C  size=1  [class]
void EspShaderMosaic::vf0C(void)

{
  return;
}

// 015ECC20  EspShaderMosaic::EspShaderMosaic_2  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void EspShaderMosaic::EspShaderMosaic_2(void)

{
  _DAT_01b7af70 = vftable;
  cEspShaderBase::cEspShaderBase_2();
  return;
}

