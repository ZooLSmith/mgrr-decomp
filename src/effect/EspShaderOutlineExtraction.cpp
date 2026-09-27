// src/effect/EspShaderOutlineExtraction.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009DCCE0..015ECC60, 5 functions

#include "mgrr.h"
#include "EspShaderOutlineExtraction.h"

// 009DCCE0  EspShaderOutlineExtraction::vf00  size=36  [class]
undefined4 * __thiscall EspShaderOutlineExtraction::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  cEspShaderBase::~cEspShaderBase();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009E65C0  EspShaderOutlineExtraction::vf08  size=227  [class]
/* WARNING: Removing unreachable block (ram,0x009e6680) */

undefined4 __fastcall EspShaderOutlineExtraction::vf08(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_00f5e2c0("EspShaderOutlineExtraction");
  if ((((iVar2 != 0) && (iVar2 = FUN_00f9e6d0(param_1 + 0x28,"g_WorldViewProjMatrix"), iVar2 != 0))
      && (iVar2 = FUN_00f9e6d0(param_1 + 0x34,"g_MatrialColor"), iVar2 != 0)) &&
     (((iVar2 = FUN_00f9e6d0(param_1 + 0x58,"g_OutLineRate"), iVar2 != 0 &&
       (iVar2 = FUN_00f9e6d0(param_1 + 100,"g_BlendColor"), iVar2 != 0)) &&
      ((iVar2 = FUN_00f9e6d0(param_1 + 0x70,"g_TargetOffSet"), iVar2 != 0 &&
       (iVar2 = FUN_009e01e0(param_1 + 0x4c,"g_Texture0",0,1,3), iVar2 != 0)))))) {
    uVar1 = *(uint *)(param_1 + 0x54);
    *(uint *)(param_1 + 0x54) = uVar1 & 0xe1ffffff | 0x1000000;
    *(uint *)(param_1 + 0x54) = uVar1 & 0xe1fff000 | 0x1000101;
    return 1;
  }
  return 0;
}

// 009F0D70  EspShaderOutlineExtraction::EspShaderOutlineExtraction  size=263  [class]
/* WARNING: Removing unreachable block (ram,0x009f0daa) */
/* WARNING: Removing unreachable block (ram,0x009f0e1e) */

undefined4 * __fastcall EspShaderOutlineExtraction::EspShaderOutlineExtraction(undefined4 *param_1)

{
  uint uVar1;
  
  cEspShaderBase::cEspShaderBase();
  *param_1 = vftable;
  param_1[0x15] = 0x1000000;
  param_1[0x15] = 0x1000111;
  param_1[0x15] = 0x1111111;
  param_1[0x15] = param_1[0x15] & 0x7fffffff;
  param_1[0x13] = 0xffffffff;
  param_1[0x14] = 0xffffffff;
  param_1[0x15] = 0;
  uVar1 = param_1[0x15];
  param_1[0x15] = uVar1 & 0xe1ffffff | 0x1000000;
  param_1[0x15] = uVar1 & 0xe1111010 | 0x1111111;
  param_1[0x15] = param_1[0x15] & 0x7fffffff;
  param_1[0x16] = 0xffffffff;
  param_1[0x17] = 0xffffffff;
  param_1[0x18] = 0xffffffff;
  param_1[0x19] = 0xffffffff;
  param_1[0x1a] = 0xffffffff;
  param_1[0x1b] = 0xffffffff;
  param_1[0x1c] = 0xffffffff;
  param_1[0x1d] = 0xffffffff;
  param_1[0x1e] = 0xffffffff;
  return param_1;
}

// 015ECC40  EspShaderOutlineExtraction::~EspShaderOutlineExtraction  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void EspShaderOutlineExtraction::~EspShaderOutlineExtraction(void)

{
  _DAT_01b7afc8 = vftable;
  cEspShaderBase::~cEspShaderBase();
  return;
}

// 015ECC60  EspShaderOutlineExtraction::~EspShaderOutlineExtraction  size=20  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void EspShaderOutlineExtraction::~EspShaderOutlineExtraction(void)

{
  _DAT_01b7b048 = vftable;
  cEspShaderBase::~cEspShaderBase();
  return;
}

