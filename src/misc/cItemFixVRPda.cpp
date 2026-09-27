// src/misc/cItemFixVRPda.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005EB060..00AC1200, 6 functions

#include "types.h"

// 005EB060  cItemFixVRPda::vf40  size=280  [class]
undefined4 __fastcall cItemFixVRPda::vf40(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = cItemFixBase::vf40();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_00dd3500(0x3c,&DAT_01b7bd48);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = RigidBodyCollection::RigidBodyCollection_2();
  }
  *(int *)(param_1 + 0x7b0) = iVar1;
  if (iVar1 != 0) {
    uVar4 = *(undefined4 *)(param_1 + 0x4f0);
    uVar2 = FUN_00de46d0("_col.hkx",0);
    uVar3 = FUN_00de4550("_col.hkx",0);
    FUN_008f6410(uVar4,uVar3,uVar2);
    FUN_008f03a0(1,0);
    FUN_008f03a0(2,0);
    uVar4 = (**(code **)(**(int **)(param_1 + 0x7b0) + 0x120))();
    *(undefined4 *)(param_1 + 0xad0) = uVar4;
  }
  *(undefined4 *)(param_1 + 0x978) = 0x3f4ccccd;
  *(undefined4 *)(param_1 + 0x974) = 0xbf000000;
  *(undefined4 *)(param_1 + 0xab0) = 0x40400000;
  *(undefined4 *)(param_1 + 0xac0) = 0x3fd9999a;
  *(undefined4 *)(param_1 + 0xabc) = 0xbf000000;
  *(undefined4 *)(param_1 + 0xab4) = 0xbf4ccccd;
  *(undefined4 *)(param_1 + 0xab8) = 0x3f4ccccd;
  FUN_00d9c2d0(param_1 + 0x10);
  *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x100000;
  *(undefined4 *)(param_1 + 0x930) = 0;
  return 1;
}

// 005EB180  cItemFixVRPda::thunk_vf44  size=5  [class]
void __fastcall cItemFixVRPda::thunk_vf44(int param_1)

{
  *(undefined4 *)(param_1 + 0x874) = 0;
  FUN_00a8c820();
  if (*(int *)(param_1 + 0x8f8) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x8e0));
  }
  RayCastManager::getWork(param_1 + 0x900);
  RayCastManager::getWork(param_1 + 0x904);
  if (*(int *)(param_1 + 0x8f8) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x8e0));
  }
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 4))(1);
    *(undefined4 *)(param_1 + 0x7b0) = 0;
  }
  FUN_00dd7270();
  Behavior::vf44();
  return;
}

// 005EB190  cItemFixVRPda::vf54  size=26  [class]
void __fastcall cItemFixVRPda::vf54(int param_1)

{
  cItemObjectBase::vf54();
  if (*(int *)(param_1 + 0x7b0) != 0) {
    FUN_008f3cb0(param_1);
  }
  return;
}

// 005ED6F0  cItemFixVRPda::vf48  size=350  [class]
void __fastcall cItemFixVRPda::vf48(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  cItemFixBase::vf48();
  if (((*(int *)(param_1 + 0x930) != 0) &&
      (iVar1 = FUN_0094bbd0(0x15e901d6,*(undefined4 *)(*(int *)(param_1 + 0x930) + 0x5c)),
      iVar1 == 0)) && (iVar1 = FUN_00c1bd80(), iVar1 == 0)) {
    piVar2 = (int *)FUN_00c13920();
    iVar1 = (**(code **)(*piVar2 + 0x28))(0xffffffff);
    if (iVar1 != 0) {
      iVar1 = FUN_0094a2a0();
      if (iVar1 == 0) {
        uVar3 = FUN_00a7c8b0();
        iVar1 = FUN_00d95c60(uVar3);
      }
      else {
        uVar3 = FUN_00a7c8b0();
        iVar1 = FUN_00d900c0(*(undefined4 *)(*(int *)(param_1 + 0x930) + 0x78),uVar3);
      }
      if (iVar1 != 0) {
        uVar3 = FUN_00a7c8a0();
        piVar2 = (int *)FUN_00412580(uVar3);
        if ((piVar2 != (int *)0x0) && (iVar1 = (**(code **)(*piVar2 + 0x380))(), iVar1 != 0)) {
          DAT_01dc1300 = 1;
          DAT_01dc12fc = 4;
          if ((*(byte *)(piVar2 + 0x33f) & 0x20) != 0) {
            if (*(int *)(param_1 + 0x7b0) != 0) {
              iVar1 = **(int **)(param_1 + 0x7b0);
              uVar3 = FUN_009f8b40();
              (**(code **)(iVar1 + 0x114))(uVar3);
            }
            uVar4 = 0x40400000;
            uVar3 = (**(code **)(*piVar2 + 0x68))(0x40400000);
            FUN_00948180(uVar3,uVar4);
            (**(code **)(*piVar2 + 0x220))(0x3f800000);
            (**(code **)(*piVar2 + 0x150))(0x67,*(undefined4 *)(param_1 + 0x4f0));
          }
        }
      }
    }
  }
  return;
}

// 00AC11E0  cItemFixVRPda::vf04  size=6  [class]
undefined * cItemFixVRPda::vf04(void)

{
  return &DAT_01b353bc;
}

// 00AC1200  cItemFixVRPda::vf00  size=30  [class]
undefined4 __thiscall cItemFixVRPda::vf00(undefined4 param_1,byte param_2)

{
  Behavior::Behavior_124();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

