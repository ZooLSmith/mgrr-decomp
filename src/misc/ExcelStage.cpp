// src/misc/ExcelStage.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005B0AB0..00AC7740, 8 functions

#include "mgrr.h"
#include "ExcelStage.h"

// 005B0AB0  ExcelStage::startup  size=183  [class]
undefined4 __fastcall ExcelStage::startup(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = BehaviorBa::startup();
  if (iVar1 != 0) {
    FUN_00dd7240();
    uVar2 = 2;
    FUN_00a92fb0(2);
    FUN_00e08640(uVar2);
    local_c = 1;
    local_8 = 1;
    local_4 = 1;
    iVar1 = lib::StaticArray<Behavior::EffectIntegrationContainer,32>::
            StaticArray<Behavior::EffectIntegrationContainer,32>(&local_c);
    if (iVar1 != 0) {
      param_1[0x1ed] = 0;
      FUN_00a9e290(&DAT_0163b5f4,1,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      (**(code **)(*param_1 + 100))();
      if (param_1[0x1ec] != 0) {
        FUN_008f40f0(param_1);
      }
      return 1;
    }
  }
  return 0;
}

// 00AAEBE0  ExcelStage::ExcelStage  size=28  [class]
undefined4 * __fastcall ExcelStage::ExcelStage(undefined4 *param_1)

{
  BehaviorBa::BehaviorBa();
  *param_1 = vftable;
  param_1[0x2d2] = 0;
  return param_1;
}

// 00AAEC00  ExcelStage::vf04  size=6  [class]
undefined * ExcelStage::vf04(void)

{
  return &DAT_01b351d4;
}

// 00AB7700  ExcelStage::destruct  size=54  [class]
undefined4 __thiscall ExcelStage::destruct(undefined4 param_1,byte param_2)

{
  FUN_00dd7270();
  cEspControler::~cEspControler();
  FUN_0040d3f0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00AC3E70  ExcelStage::thunk_vf1D0  size=5  [class]
void __thiscall ExcelStage::thunk_vf1D0(int param_1,int param_2)

{
  if ((*(int *)(param_1 + 0x8ac) == 0) || (*(int *)(param_2 + 0xec) != 0)) {
    FUN_00a8e5d0(param_1,param_2,0);
  }
  return;
}

// 00AC74A0  ExcelStage::vf24C  size=129  [class]
void __fastcall ExcelStage::vf24C(int param_1)

{
  int iVar1;
  
  if ((DAT_018b9174 == 0x430) &&
     (((((iVar1 = *(int *)(param_1 + 0x4b4), iVar1 == 0xf0400 || (iVar1 == 0xf0401)) ||
        (iVar1 == 0xf0402)) ||
       ((((iVar1 == 0xf0403 || (iVar1 == 0xf0404)) ||
         ((iVar1 == 0xf040a || ((iVar1 == 0xf040c || (iVar1 == 0xf040d)))))) || (iVar1 == 0xf040e)))
       ) || (((iVar1 == 0xf040f || (iVar1 == 0xf0410)) || (iVar1 == 0xf0c06)))))) {
    FUN_00dda360(0,0x3f800000,0x3f800000,10);
  }
  return;
}

// 00AC7700  ExcelStage::vf4C  size=54  [class]
void __fastcall ExcelStage::vf4C(int param_1)

{
  BehaviorBgBase::vf4C();
  if ((((*(char *)(param_1 + 0x470) != '\0') && ((*(byte *)(param_1 + 0x472) & 0x80) != 0)) &&
      (*(char *)(param_1 + 0x471) != '\0')) && (*(int *)(param_1 + 0xb28) != 0)) {
    return;
  }
  Bh0064::vf64();
  return;
}

// 00AC7740  ExcelStage::vf50  size=125  [class]
void __fastcall ExcelStage::vf50(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0xb24) != 0) && (*(int *)(param_1 + 0xb08) == 0)) {
    *(undefined4 *)(param_1 + 0xb24) = 0;
    if (*(int *)(param_1 + 0xb20) != 0) {
      piVar1 = (int *)FUN_00d773c0();
      (**(code **)(*piVar1 + 0x10))(*(undefined4 *)(param_1 + 0xb20));
    }
    *(undefined4 *)(param_1 + 0xb20) = 0;
    if (*(int *)(param_1 + 0xb08) == 0) {
      iVar2 = FUN_009fd880();
      if ((iVar2 == 0) && (*(int *)(*(int *)(param_1 + 0x4f0) + 0x54) == 0)) {
        *(undefined4 *)(*(int *)(param_1 + 0x4f0) + 0x54) = 1;
      }
    }
  }
  FUN_00a93170();
  BehaviorBgBase::vf50();
  return;
}

