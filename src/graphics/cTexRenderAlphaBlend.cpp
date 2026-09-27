// src/graphics/cTexRenderAlphaBlend.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F6B790..00F8E800, 3 functions

#include "types.h"

// 00F6B790  cTexRenderAlphaBlend::vf08  size=190  [class]
undefined4 __fastcall cTexRenderAlphaBlend::vf08(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = Fw::StringCopyCat("EspShaderTexRenderAlphaBlend");
  uVar3 = Fw::StringCopyCat_2("EspShaderTexRenderAlphaBlend");
  iVar4 = FUN_00fa01a0(uVar2,uVar3);
  if (iVar4 != 0) {
    iVar4 = FUN_00f9e6d0(param_1 + 0x28,"g_WorldViewProjMatrix");
    if (iVar4 != 0) {
      iVar4 = FUN_00f9e6d0(param_1 + 0x34,"g_MatrialColor");
      if (iVar4 != 0) {
        iVar4 = FUN_00fa39a0(param_1 + 0x40,PTR_s_g_Sampler0_0188ff1c);
        if (iVar4 != 0) {
          uVar5 = 2;
          iVar4 = 2;
          if ((*(byte *)(param_1 + 0x4b) & 0x1f) != 1) {
            uVar5 = 3;
            iVar4 = 3;
          }
          uVar1 = *(uint *)(param_1 + 0x48);
          *(uint *)(param_1 + 0x48) = iVar4 << 8 | uVar1 & 0xfffff020 | uVar5 | 0x20;
          *(uint *)(param_1 + 0x48) = iVar4 << 8 | uVar1 & 0xff111020 | uVar5 | 0x111020;
          return 1;
        }
      }
    }
  }
  return 0;
}

// 00F84E30  cTexRenderAlphaBlend::cTexRenderAlphaBlend  size=18  [class]
undefined4 * __fastcall cTexRenderAlphaBlend::cTexRenderAlphaBlend(undefined4 *param_1)

{
  cEspShaderBase::cEspShaderBase_3();
  *param_1 = vftable;
  return param_1;
}

// 00F8E800  cTexRenderAlphaBlend::vf00  size=36  [class]
undefined4 * __thiscall cTexRenderAlphaBlend::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cEspShaderBase::vftable;
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

