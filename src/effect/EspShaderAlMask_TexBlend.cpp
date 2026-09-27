// src/effect/EspShaderAlMask_TexBlend.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00F5EFE0..00F8AD40, 3 functions

#include "mgrr.h"
#include "EspShaderAlMask_TexBlend.h"

// 00F5EFE0  EspShaderAlMask_TexBlend::vf08  size=395  [class]
bool __fastcall EspShaderAlMask_TexBlend::vf08(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = Fw::StringCopyCat("EspShaderAlMask_TexBlend");
  uVar3 = Fw::StringCopyCat_2("EspShaderAlMask_TexBlend");
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
            iVar4 = FUN_00f9e6d0(param_1 + 0x34,"g_MatrialColor");
            if (iVar4 != 0) {
              iVar4 = FUN_00f9e6d0(param_1 + 100,"g_BlendRate");
              return iVar4 != 0;
            }
          }
        }
      }
    }
  }
  return false;
}

// 00F81190  EspShaderAlMask_TexBlend::EspShaderAlMask_TexBlend  size=246  [class]
/* WARNING: Removing unreachable block (ram,0x00f811ca) */
/* WARNING: Removing unreachable block (ram,0x00f81237) */

undefined4 * __fastcall EspShaderAlMask_TexBlend::EspShaderAlMask_TexBlend(undefined4 *param_1)

{
  cEspShaderMask::cEspShaderMask();
  *param_1 = vftable;
  param_1[0x18] = 0x1000000;
  param_1[0x18] = 0x1000111;
  param_1[0x18] = 0x1111111;
  param_1[0x18] = param_1[0x18] & 0x7fffffff;
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 0xffffffff;
  param_1[0x18] = 0x1000000;
  param_1[0x18] = 0x1111111;
  param_1[0x18] = param_1[0x18] & 0x7fffffff;
  param_1[0x19] = 0xffffffff;
  param_1[0x1a] = 0xffffffff;
  param_1[0x1b] = 0xffffffff;
  return param_1;
}

// 00F8AD40  EspShaderAlMask_TexBlend::vf00  size=36  [class]
undefined4 * __thiscall EspShaderAlMask_TexBlend::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cEspShaderBase::vftable;
  Hw::cVertexShader::cVertexShader_8();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

