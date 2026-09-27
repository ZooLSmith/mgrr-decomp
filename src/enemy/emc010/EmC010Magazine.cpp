// src/enemy/emc010/EmC010Magazine.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0070B4E0..00ABA100, 7 functions

#include "types.h"

// 0070B4E0  EmC010Magazine::vf44  size=5  [class]
void __fastcall EmC010Magazine::vf44(int param_1)

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

// 0070B4F0  EmC010Magazine::vf50  size=16  [class]
void EmC010Magazine::vf50(void)

{
  BehaviorPartsModel::vf50();
  FUN_00a93170();
  return;
}

// 0070B500  EmC010Magazine::vf54  size=228  [class]
void __fastcall EmC010Magazine::vf54(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  BehaviorPartsModel::vf54();
  *(undefined4 *)(param_1 + 0xa08) = 0;
  iVar1 = FUN_00a81330();
  *(int *)(param_1 + 0xa04) = iVar1;
  if (iVar1 != 0) {
    uVar2 = FUN_00a7c8a0();
    *(undefined4 *)(param_1 + 0xa08) = uVar2;
  }
  if (*(int *)(param_1 + 0xa08) != 0) {
    iVar1 = FUN_00a12210(3);
    if (iVar1 != 0) {
      puVar4 = (undefined4 *)(iVar1 + 0x10);
      puVar5 = (undefined4 *)(param_1 + 0x10);
      for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar1 + 0x50);
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar1 + 0x54);
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar1 + 0x58);
      *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(iVar1 + 0x5c);
      *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(iVar1 + 0x90);
      *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(iVar1 + 0x94);
      *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(iVar1 + 0x98);
      *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(iVar1 + 0x9c);
      *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(iVar1 + 0x60);
      *(undefined4 *)(param_1 + 100) = *(undefined4 *)(iVar1 + 100);
      *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(iVar1 + 0x68);
      *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(iVar1 + 0x6c);
      *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(iVar1 + 0x70);
      *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(iVar1 + 0x74);
      *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(iVar1 + 0x78);
      *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(iVar1 + 0x7c);
      switchD_0080dbae::default();
      return;
    }
  }
  return;
}

// 00710840  EmC010Magazine::vf40  size=235  [class]
undefined4 __fastcall EmC010Magazine::vf40(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = BehaviorPartsModel::vf40();
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = *(undefined4 *)(param_1 + 0x4b0);
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e272b0(uVar2,0x30041);
  FUN_00a9e290(&DAT_0163b5f4,0,0,0x3f800000,0,0,0x3f800000);
  uVar2 = 2;
  FUN_00a92fb0(2);
  FUN_00e08640(uVar2);
  *(undefined4 *)(param_1 + 0xa64) = 0;
  *(undefined4 *)(param_1 + 0x618) = 0;
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x7b0) + 8))();
    if (iVar1 != 0) {
      FUN_008f1600(0x100);
      FUN_008f1600(0x80);
      FUN_008f1600(8);
      FUN_008f1600(1);
      FUN_008f1600(2);
      FUN_008f1600(0x20);
    }
  }
  return 1;
}

// 00710930  EmC010Magazine::vf4C  size=401  [class]
void __fastcall EmC010Magazine::vf4C(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  float10 fVar5;
  
  *(undefined4 *)(param_1 + 0xa08) = 0;
  iVar2 = FUN_00a81330();
  *(int *)(param_1 + 0xa04) = iVar2;
  if (iVar2 == 0) {
    FUN_009fdde0();
  }
  else {
    uVar3 = FUN_00a7c8a0();
    *(undefined4 *)(param_1 + 0xa08) = uVar3;
  }
  iVar2 = *(int *)(param_1 + 0xa08);
  if (iVar2 != 0) {
    if (*(short *)(iVar2 + 0x324) < 1) {
      FUN_00dd5650(&DAT_0164524c);
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(*(int *)(iVar2 + 800) + 0x1c);
    }
    iVar4 = 0;
    iVar2 = 0;
    if (0 < *(short *)(param_1 + 0x324)) {
      do {
        *(undefined4 *)(iVar4 + 0x1c + *(int *)(param_1 + 800)) = uVar3;
        iVar2 = iVar2 + 1;
        iVar4 = iVar4 + 0x70;
      } while (iVar2 < *(short *)(param_1 + 0x324));
    }
  }
  BehaviorPartsModel::vf4C();
  iVar2 = *(int *)(param_1 + 0x618);
  if (iVar2 == 0) {
    if ((*(int *)(param_1 + 0x61c) == 0) &&
       (*(undefined4 *)(param_1 + 0x61c) = 1, *(int *)(param_1 + 0xa08) != 0)) {
      uVar3 = FUN_009f8b40();
      FUN_009f8ae0(uVar3);
    }
  }
  else if (iVar2 == 1) {
    FUN_0070b6e0();
  }
  else if (iVar2 == 2) {
    FUN_0070b750();
  }
  if (*(int *)(param_1 + 0xa64) != 0) {
    FUN_00a92fb0();
    fVar5 = (float10)FUN_00e049b0();
    fVar5 = (float10)*(float *)(param_1 + 0xa60) - fVar5;
    *(float *)(param_1 + 0xa60) = (float)fVar5;
    if ((*(int *)(param_1 + 0xa68) == 0) && (fVar5 < (float10)0)) {
      *(undefined4 *)(param_1 + 0xa68) = 1;
      *(undefined4 *)(param_1 + 0xa6c) = 0x3f800000;
    }
    if (*(int *)(param_1 + 0xa68) != 0) {
      uVar3 = *(undefined4 *)(param_1 + 0xa6c);
      iVar4 = 0;
      iVar2 = 0;
      if (0 < *(short *)(param_1 + 0x324)) {
        do {
          *(undefined4 *)(iVar4 + 0x1c + *(int *)(param_1 + 800)) = uVar3;
          iVar2 = iVar2 + 1;
          iVar4 = iVar4 + 0x70;
        } while (iVar2 < *(short *)(param_1 + 0x324));
      }
      fVar1 = *(float *)(param_1 + 0xa6c) - 0.033333335;
      *(float *)(param_1 + 0xa6c) = fVar1;
      if (fVar1 <= 0.0) {
        FUN_009fdde0();
        return;
      }
    }
  }
  return;
}

// 00AB4130  EmC010Magazine::vf04  size=6  [class]
undefined * EmC010Magazine::vf04(void)

{
  return &DAT_01b357a4;
}

// 00ABA100  EmC010Magazine::vf00  size=105  [class]
undefined4 * __thiscall EmC010Magazine::vf00(undefined4 *param_1,byte param_2)

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

