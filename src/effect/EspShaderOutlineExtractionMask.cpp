// src/effect/EspShaderOutlineExtractionMask.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009E66B0..009F0F90, 3 functions

#include "mgrr.h"
#include "EspShaderOutlineExtractionMask.h"

// 009E66B0  EspShaderOutlineExtractionMask::vf08  size=257  [class]
/* WARNING: Removing unreachable block (ram,0x009e678e) */

undefined4 __fastcall EspShaderOutlineExtractionMask::vf08(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_00f5e2c0("EspShaderOutlineExtractionMask");
  if (((((iVar2 != 0) && (iVar2 = FUN_00f9e6d0(param_1 + 0x28,"g_WorldViewProjMatrix"), iVar2 != 0))
       && (iVar2 = FUN_00f9e6d0(param_1 + 0x34,"g_MatrialColor"), iVar2 != 0)) &&
      ((iVar2 = FUN_00f9e6d0(param_1 + 0x58,"g_OutLineRate"), iVar2 != 0 &&
       (iVar2 = FUN_00f9e6d0(param_1 + 100,"g_BlendColor"), iVar2 != 0)))) &&
     ((iVar2 = FUN_00f9e6d0(param_1 + 0x70,"g_TargetOffSet"), iVar2 != 0 &&
      ((iVar2 = FUN_009e01e0(param_1 + 0x4c,"g_Texture0",0,1,3), iVar2 != 0 &&
       (iVar2 = FUN_009e01e0(param_1 + 0x7c,"g_MaskTexture0",2,2,1), iVar2 != 0)))))) {
    uVar1 = *(uint *)(param_1 + 0x54);
    *(uint *)(param_1 + 0x54) = uVar1 & 0xe1ffffff | 0x1000000;
    *(uint *)(param_1 + 0x54) = uVar1 & 0xe1fff000 | 0x1000101;
    return 1;
  }
  return 0;
}

// 009F0E80  EspShaderOutlineExtractionMask::EspShaderOutlineExtractionMask  size=262  [class]
/* WARNING: Removing unreachable block (ram,0x009f0ebd) */
/* WARNING: Removing unreachable block (ram,0x009f0f3e) */

undefined4 * __fastcall
EspShaderOutlineExtractionMask::EspShaderOutlineExtractionMask(undefined4 *param_1)

{
  EspShaderOutlineExtraction::EspShaderOutlineExtraction();
  *param_1 = vftable;
  param_1[0x21] = 0x1000000;
  param_1[0x21] = 0x1000111;
  param_1[0x21] = 0x1111111;
  param_1[0x21] = param_1[0x21] & 0x7fffffff;
  param_1[0x1f] = 0xffffffff;
  param_1[0x20] = 0xffffffff;
  param_1[0x21] = 0x1000000;
  param_1[0x21] = 0x1111111;
  param_1[0x21] = param_1[0x21] & 0x7fffffff;
  return param_1;
}

// 009F0F90  EspShaderOutlineExtractionMask::vf00  size=36  [class]
undefined4 * __thiscall EspShaderOutlineExtractionMask::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = EspShaderOutlineExtraction::vftable;
  cEspShaderBase::cEspShaderBase_2();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

