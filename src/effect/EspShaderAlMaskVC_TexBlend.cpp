// src/effect/EspShaderAlMaskVC_TexBlend.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F5F170..00F8AD90, 3 functions

#include "mgrr.h"
#include "EspShaderAlMaskVC_TexBlend.h"

// 00F5F170  EspShaderAlMaskVC_TexBlend::vf08  size=371  [class]
bool __fastcall EspShaderAlMaskVC_TexBlend::vf08(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = Fw::StringCopyCat("EspShaderAlMaskVC_TexBlend");
  uVar3 = Fw::StringCopyCat_2("EspShaderAlMaskVC_TexBlend");
  iVar4 = FUN_00fa01a0(uVar2,uVar3);
  if (iVar4 != 0) {
    iVar4 = FUN_00f9e6d0(param_1 + 0x28,"g_WorldViewProjMatrix");
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
        iVar4 = FUN_00fa39a0(param_1 + 0x4c,PTR_s_g_Sampler1_0188ff20);
        if (iVar4 != 0) {
          uVar5 = 2;
          iVar4 = 2;
          if ((*(byte *)(param_1 + 0x57) & 0x1f) != 1) {
            uVar5 = 3;
            iVar4 = 3;
          }
          uVar1 = *(uint *)(param_1 + 0x54);
          *(uint *)(param_1 + 0x54) = iVar4 << 8 | uVar1 & 0xfffff020 | uVar5 | 0x20;
          *(uint *)(param_1 + 0x54) = iVar4 << 8 | uVar1 & 0xff111020 | uVar5 | 0x111020;
          iVar4 = FUN_00fa39a0(param_1 + 0x58,PTR_s_g_Sampler2_0188ff24);
          if (iVar4 != 0) {
            uVar5 = 2;
            iVar4 = 2;
            if ((*(byte *)(param_1 + 99) & 0x1f) != 1) {
              uVar5 = 3;
              iVar4 = 3;
            }
            uVar1 = *(uint *)(param_1 + 0x60);
            *(uint *)(param_1 + 0x60) = iVar4 << 8 | uVar1 & 0xfffff020 | uVar5 | 0x20;
            *(uint *)(param_1 + 0x60) = iVar4 << 8 | uVar1 & 0xff111020 | uVar5 | 0x111020;
            iVar4 = FUN_00f9e6d0(param_1 + 100,"g_BlendRate");
            return iVar4 != 0;
          }
        }
      }
    }
  }
  return false;
}

// 00F8AD70  EspShaderAlMaskVC_TexBlend::EspShaderAlMaskVC_TexBlend  size=18  [class]
undefined4 * __fastcall EspShaderAlMaskVC_TexBlend::EspShaderAlMaskVC_TexBlend(undefined4 *param_1)

{
  EspShaderAlMask_TexBlend::EspShaderAlMask_TexBlend();
  *param_1 = vftable;
  return param_1;
}

// 00F8AD90  EspShaderAlMaskVC_TexBlend::vf00  size=36  [class]
undefined4 * __thiscall EspShaderAlMaskVC_TexBlend::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cEspShaderBase::vftable;
  Hw::cVertexShader::cVertexShader();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

