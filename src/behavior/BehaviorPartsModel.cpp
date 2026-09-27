// src/behavior/BehaviorPartsModel.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00AAE2F0..00ACA930, 9 functions

#include "mgrr.h"
#include "BehaviorPartsModel.h"

// 00AAE2F0  BehaviorPartsModel::vf04  size=6  [class]
undefined * BehaviorPartsModel::vf04(void)

{
  return &DAT_01be9c8c;
}

// 00AAE300  BehaviorPartsModel::vf00  size=105  [class]
undefined4 * __thiscall BehaviorPartsModel::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Behavior::vftable;
  cLockonPartsList::~cLockonPartsList();
  if (param_1[0x19f] != 0) {
    param_1[0x1a1] = 0;
    if (param_1[0x1a2] != 0) {
      FUN_00dd48d0(param_1[0x19f],0);
      param_1[0x1a2] = 0;
    }
    param_1[0x19f] = 0;
    param_1[0x1a0] = 0;
  }
  cXml::cXml_2();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00AC5490  BehaviorPartsModel::vf4C  size=65  [class]
void __fastcall BehaviorPartsModel::vf4C(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0xa08) = 0;
  *(undefined4 *)(param_1 + 0xa04) = 0;
  iVar1 = FUN_00a81330();
  *(int *)(param_1 + 0xa04) = iVar1;
  if (iVar1 != 0) {
    uVar2 = FUN_00a7c8a0();
    *(undefined4 *)(param_1 + 0xa08) = uVar2;
  }
  Behavior::vf4C();
  return;
}

// 00AC54E0  BehaviorPartsModel::vf50  size=91  [class]
void __fastcall BehaviorPartsModel::vf50(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 100))();
  switchD_0080dbae::default();
  param_1[0x282] = 0;
  param_1[0x281] = 0;
  iVar1 = FUN_00a81330();
  param_1[0x281] = iVar1;
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    param_1[0x282] = iVar1;
  }
  (**(code **)(*param_1 + 0x32c))();
  BehaviorAppBase::vf50();
  return;
}

// 00AC5540  BehaviorPartsModel::vf54  size=87  [class]
void __fastcall BehaviorPartsModel::vf54(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  Behavior::vf54();
  if (*(int *)(param_1 + 0x7b4) != 0) {
    FUN_0091e980(param_1);
    switchD_0080dbae::default();
  }
  bVar1 = false;
  piVar3 = (int *)(param_1 + 0xa0c);
  iVar2 = 0x10;
  do {
    if (*piVar3 != 0) {
      FUN_0091e980(param_1);
      bVar1 = true;
    }
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (bVar1) {
    switchD_0080dbae::default();
    return;
  }
  return;
}

// 00ACA490  BehaviorPartsModel::vf40  size=447  [class]
undefined4 __fastcall BehaviorPartsModel::vf40(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = BehaviorAppBase::vf40();
  if (iVar1 != 0) {
    local_c = 1;
    local_8 = 1;
    local_4 = 1;
    iVar1 = lib::StaticArray<Behavior::EffectIntegrationContainer,32>::
            StaticArray<Behavior::EffectIntegrationContainer,32>(&local_c);
    if (iVar1 != 0) {
      param_1[0x1ed] = 0;
      param_1[0x283] = 0;
      param_1[0x284] = 0;
      param_1[0x285] = 0;
      param_1[0x286] = 0;
      param_1[0x287] = 0;
      param_1[0x288] = 0;
      param_1[0x289] = 0;
      param_1[0x28a] = 0;
      param_1[0x28b] = 0;
      param_1[0x28c] = 0;
      param_1[0x28d] = 0;
      param_1[0x28e] = 0;
      param_1[0x28f] = 0;
      param_1[0x290] = 0;
      param_1[0x291] = 0;
      param_1[0x292] = 0;
      uVar2 = FUN_00de3850(0,"_col.hkx",0);
      iVar1 = FUN_00dd3500(0x3c,&DAT_01b7bd48);
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = RigidBodyCollection::RigidBodyCollection_2();
      }
      param_1[0x1ec] = iVar1;
      if (iVar1 != 0) {
        iVar1 = param_1[0x13c];
        uVar3 = FUN_00de3ee0(uVar2);
        uVar2 = FUN_00de3cf0(uVar2);
        iVar1 = FUN_008f6410(iVar1,uVar2,uVar3);
        if (iVar1 != 0) {
          FUN_008f2cd0(0);
        }
      }
      iVar1 = FUN_00a92f90();
      if (iVar1 != 0) {
        FUN_00a92f90();
        iVar1 = FUN_00e355e0(&DAT_0163b5f4);
        if (iVar1 != 0) {
          uVar8 = 0x3f800000;
          uVar7 = 0xbf800000;
          uVar6 = 0;
          uVar5 = 0x3f800000;
          uVar3 = 0x3e4ccccd;
          uVar2 = 0;
          puVar4 = &DAT_0163b5f4;
          FUN_00a92f90(&DAT_0163b5f4,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
          FUN_00e3ff90(puVar4,uVar2,uVar3,uVar5,uVar6,uVar7,uVar8);
          (**(code **)(*param_1 + 100))();
        }
      }
      param_1[0x293] = 0;
      param_1[0x294] = -1;
      param_1[0x295] = 0;
      switchD_0080dbae::default();
      if (param_1[0x1ec] != 0) {
        FUN_008f40f0(param_1);
      }
      return 1;
    }
  }
  return 0;
}

// 00ACA650  BehaviorPartsModel::vf44  size=94  [class]
void __fastcall BehaviorPartsModel::vf44(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_1 + 0xa0c);
  iVar2 = 0x10;
  do {
    iVar1 = *piVar3;
    if (iVar1 != 0) {
      lib::Array<RigidBodyList::ConnectMap>::Array<RigidBodyList::ConnectMap>();
      FUN_00dd4920(iVar1);
      *piVar3 = 0;
    }
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 4))(1);
    *(undefined4 *)(param_1 + 0x7b0) = 0;
  }
  FUN_00a8c820();
  Behavior::vf44();
  return;
}

// 00ACA6B0  BehaviorPartsModel::vf32C  size=633  [class]
void __fastcall BehaviorPartsModel::vf32C(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int local_8;
  
  iVar3 = *(int *)(param_1 + 0xa08);
  if ((iVar3 != 0) && ((*(byte *)(param_1 + 0xa4c) & 1) != 0)) {
    *(ushort *)(param_1 + 0xa2) = *(ushort *)(param_1 + 0xa2) | 4;
    if ((*(int *)(param_1 + 0xa50) != -1) &&
       (iVar3 = FUN_00a12210(*(int *)(param_1 + 0xa50)), iVar3 == 0)) {
      iVar3 = *(int *)(param_1 + 0xa08);
    }
    FID_conflict__memcpy((void *)(param_1 + 0x10),(void *)(iVar3 + 0x10),0x40);
    if ((*(byte *)(param_1 + 0xa4c) & 2) == 0) {
      iVar3 = *(int *)(param_1 + 0x360);
      if (*(int *)(param_1 + 0x360) == 0) {
        iVar3 = param_1;
      }
      sVar1 = *(short *)(iVar3 + 0x358);
      iVar3 = 0;
      if (0 < sVar1) {
        local_8 = 0;
        do {
          iVar4 = *(int *)(param_1 + 0x360);
          if (*(int *)(param_1 + 0x360) == 0) {
            iVar4 = param_1;
          }
          if ((iVar3 < 0) || (*(short *)(iVar4 + 0x358) <= iVar3)) {
            iVar4 = 0;
          }
          else {
            iVar4 = *(int *)(iVar4 + 0x350) + local_8;
          }
          iVar2 = FUN_00a12210((int)*(short *)(iVar4 + 0xa0));
          if (iVar2 != 0) {
            *(ushort *)(iVar4 + 0xa2) = *(ushort *)(iVar4 + 0xa2) | 4;
            FID_conflict__memcpy((void *)(iVar4 + 0x10),(void *)(iVar2 + 0x10),0x40);
          }
          if (*(int *)(param_1 + 0xa54) != 0) {
            *(ushort *)(iVar4 + 0xa2) = *(ushort *)(iVar4 + 0xa2) | 2;
            *(undefined4 *)(iVar4 + 0x60) = *(undefined4 *)(iVar2 + 0x60);
            *(undefined4 *)(iVar4 + 100) = *(undefined4 *)(iVar2 + 100);
            *(undefined4 *)(iVar4 + 0x68) = *(undefined4 *)(iVar2 + 0x68);
            *(undefined4 *)(iVar4 + 0x6c) = *(undefined4 *)(iVar2 + 0x6c);
            *(undefined4 *)(iVar4 + 0x90) = *(undefined4 *)(iVar2 + 0x90);
            *(undefined4 *)(iVar4 + 0x94) = *(undefined4 *)(iVar2 + 0x94);
            *(undefined4 *)(iVar4 + 0x98) = *(undefined4 *)(iVar2 + 0x98);
            *(undefined4 *)(iVar4 + 0x9c) = *(undefined4 *)(iVar2 + 0x9c);
            *(undefined4 *)(iVar4 + 0x70) = *(undefined4 *)(iVar2 + 0x70);
            *(undefined4 *)(iVar4 + 0x74) = *(undefined4 *)(iVar2 + 0x74);
            *(undefined4 *)(iVar4 + 0x78) = *(undefined4 *)(iVar2 + 0x78);
            *(undefined4 *)(iVar4 + 0x7c) = *(undefined4 *)(iVar2 + 0x7c);
            *(undefined4 *)(iVar4 + 0x50) = *(undefined4 *)(iVar2 + 0x50);
            *(undefined4 *)(iVar4 + 0x54) = *(undefined4 *)(iVar2 + 0x54);
            *(undefined4 *)(iVar4 + 0x58) = *(undefined4 *)(iVar2 + 0x58);
            *(undefined4 *)(iVar4 + 0x5c) = *(undefined4 *)(iVar2 + 0x5c);
            *(undefined4 *)(iVar4 + 0x80) = *(undefined4 *)(iVar2 + 0x80);
            *(undefined4 *)(iVar4 + 0x84) = *(undefined4 *)(iVar2 + 0x84);
            *(undefined4 *)(iVar4 + 0x88) = *(undefined4 *)(iVar2 + 0x88);
            *(undefined4 *)(iVar4 + 0x8c) = *(undefined4 *)(iVar2 + 0x8c);
          }
          local_8 = local_8 + 0xb0;
          iVar3 = iVar3 + 1;
        } while (iVar3 < sVar1);
      }
    }
  }
  iVar3 = *(int *)(param_1 + 0xa08);
  if ((iVar3 != 0) && ((*(byte *)(param_1 + 0xa4c) & 1) == 0)) {
    *(ushort *)(param_1 + 0xa2) = *(ushort *)(param_1 + 0xa2) | 4;
    if ((*(int *)(param_1 + 0xa50) != -1) &&
       (iVar3 = FUN_00a12210(*(int *)(param_1 + 0xa50)), iVar3 == 0)) {
      iVar3 = *(int *)(param_1 + 0xa08);
    }
    FID_conflict__memcpy((void *)(param_1 + 0x10),(void *)(iVar3 + 0x10),0x40);
  }
  switchD_0080dbae::default();
  if (*(int *)(param_1 + 0x7b0) != 0) {
    FUN_008f40f0(param_1);
  }
  if (*(int *)(param_1 + 0x7b4) != 0) {
    FUN_0091ea00(param_1);
  }
  piVar5 = (int *)(param_1 + 0xa0c);
  iVar3 = 0x10;
  do {
    if (*piVar5 != 0) {
      FUN_0091ea00(param_1);
    }
    piVar5 = piVar5 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}

// 00ACA930  BehaviorPartsModel::vf1B4  size=90  [class]
void __fastcall BehaviorPartsModel::vf1B4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0xa08) = 0;
  *(undefined4 *)(param_1 + 0xa04) = 0;
  iVar1 = FUN_00a81330();
  *(int *)(param_1 + 0xa04) = iVar1;
  if (iVar1 != 0) {
    uVar2 = FUN_00a7c8a0();
    *(undefined4 *)(param_1 + 0xa08) = uVar2;
  }
  if (*(int **)(param_1 + 0xa08) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xa08) + 0x1b4))(*(undefined4 *)(param_1 + 0x4b0),0);
  }
  return;
}

