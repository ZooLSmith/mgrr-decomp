// src/unsorted/unit_00AA56A0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00AA56A0..00AA5700, 2 functions

#include "mgrr.h"

// 00AA56A0  FUN_00aa56a0  size=34  [run]
void __thiscall FUN_00aa56a0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xe80) != 0) {
    FUN_00aa28e0();
    uVar1 = FUN_00fdbc60();
    *(undefined4 *)(param_2 + 4) = uVar1;
  }
  return;
}

// 00AA5700  FUN_00aa5700  size=443  [run]
void __fastcall FUN_00aa5700(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined1 auStack_160 [348];
  
  iVar1 = FUN_00de4550("_col.hkx",0);
  if (iVar1 != 0) {
    iVar2 = FUN_00dd3500(0x3c,&DAT_01b7bd48);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = RigidBodyCollection::RigidBodyCollection_2();
    }
    *(int *)(param_1 + 0x7b0) = iVar2;
    if (iVar2 != 0) {
      uVar4 = *(undefined4 *)(param_1 + 0x4f0);
      uVar3 = FUN_00de46d0("_col.hkx",0);
      FUN_008f6410(uVar4,iVar1,uVar3);
      FUN_008f2cd0(1);
      (**(code **)(**(int **)(param_1 + 0x7b0) + 0xdc))(0);
      FUN_008f40f0(param_1);
      (**(code **)(**(int **)(param_1 + 0x7b0) + 0x114))(*(undefined4 *)(param_1 + 0xb9c));
      FUN_008f1600(0x100);
      FUN_008f1600(0x80);
    }
  }
  uVar3 = 0;
  uVar4 = FUN_00a7c8a0(0);
  FUN_004039a0(0,uVar4,uVar3);
  FUN_00dffb20(param_1 + 0xdb0);
  FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),auStack_160);
  if (*(int *)(param_1 + 0x930) == 0x11) {
    FUN_00acb220(*(undefined4 *)(param_1 + 0x944),0x40800000,0x3f000000);
    *(uint *)(param_1 + 0xfe0) = *(uint *)(param_1 + 0xfe0) | 0x800;
    *(uint *)(param_1 + 0xfdc) = *(uint *)(param_1 + 0xfdc) | 0x10000000;
  }
  piVar5 = (int *)FUN_00900480();
  uVar4 = (**(code **)(*piVar5 + 4))(param_1 + 0x50,0x3f333333,6,*(undefined4 *)(param_1 + 0xb9c),0)
  ;
  FUN_008f9610(uVar4,0x100,1);
  lib::AllocatedArray<hkpPhantomListener*>::AllocatedArray<hkpPhantomListener*>(uVar4);
  FUN_00900bd0();
  return;
}

