// src/unsorted/unit_00D664E0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D664E0..00D666E0, 2 functions

#include "types.h"

// 00D664E0  FUN_00d664e0  size=506  [run]
void FUN_00d664e0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_164 [352];
  
  iVar1 = FUN_008dfb30(param_1);
  if (iVar1 != 0) {
    FUN_00c420c0(*(undefined4 *)(iVar1 + 0x10));
    uVar2 = FUN_00e678d0(2,*(undefined4 *)(iVar1 + 4),0xffffffff);
    FUN_00e80d00(uVar2);
    piVar3 = (int *)FUN_00c13920();
    iVar4 = (**(code **)(*piVar3 + 0x28))(0);
    if (iVar4 != 0) {
      piVar3 = (int *)FUN_00a7c8a0();
      if (piVar3 != (int *)0x0) {
        puVar5 = &DAT_01be9db8;
        (**(code **)(*piVar3 + 4))(&DAT_01be9db8);
        iVar4 = FUN_00dd6d80(puVar5);
        if (iVar4 != 0) {
          FUN_00be86f0();
        }
      }
      FUN_00d4d920();
      if (*(int *)(iVar1 + 0xc) != 0xffff) {
        FUN_004cb9a0(*(int *)(iVar1 + 0xc));
        iVar4 = FUN_00a7c8a0();
        FUN_00e020f0(*(undefined4 *)(iVar4 + 0x4f0));
        if (*(int *)(iVar1 + 8) == 0) {
          puVar6 = auStack_164;
          FUN_00a7c8a0(puVar6);
          FUN_00a963e0(puVar6);
        }
        else if (*(int *)(iVar1 + 8) == 1) {
          puVar6 = auStack_164;
          uVar2 = 0;
          FUN_00a7c8a0(0,puVar6);
          FUN_00a8c930(uVar2,puVar6);
        }
        else {
          FUN_00dd5650(&DAT_016be190);
        }
      }
      if (*(int *)(iVar1 + 0x14) != 0) {
        iVar1 = FUN_00a7c8a0();
        *(undefined4 *)(iVar1 + 0xe8) = 0;
        *(undefined4 *)(iVar1 + 0xe4) = 0;
        *(undefined4 *)(iVar1 + 0xe0) = 0;
        *(undefined4 *)(iVar1 + 0xdc) = 0;
        *(undefined4 *)(iVar1 + 0xd4) = 0;
        *(undefined4 *)(iVar1 + 0xd0) = 0;
        *(undefined4 *)(iVar1 + 0xcc) = 0;
        *(undefined4 *)(iVar1 + 200) = 0;
        *(undefined4 *)(iVar1 + 0xc0) = 0;
        *(undefined4 *)(iVar1 + 0xbc) = 0;
        *(undefined4 *)(iVar1 + 0xb8) = 0;
        *(undefined4 *)(iVar1 + 0xb4) = 0;
        *(undefined4 *)(iVar1 + 0xec) = 0x3f800000;
        *(undefined4 *)(iVar1 + 0xd8) = 0x3f800000;
        *(undefined4 *)(iVar1 + 0xc4) = 0x3f800000;
        *(undefined4 *)(iVar1 + 0xb0) = 0x3f800000;
        iVar1 = FUN_00a7c8a0();
        *(undefined4 *)(iVar1 + 0x128) = 0;
        *(undefined4 *)(iVar1 + 0x124) = 0;
        *(undefined4 *)(iVar1 + 0x120) = 0;
        *(undefined4 *)(iVar1 + 0x11c) = 0;
        *(undefined4 *)(iVar1 + 0x114) = 0;
        *(undefined4 *)(iVar1 + 0x110) = 0;
        *(undefined4 *)(iVar1 + 0x10c) = 0;
        *(undefined4 *)(iVar1 + 0x108) = 0;
        *(undefined4 *)(iVar1 + 0x100) = 0;
        *(undefined4 *)(iVar1 + 0xfc) = 0;
        *(undefined4 *)(iVar1 + 0xf8) = 0;
        *(undefined4 *)(iVar1 + 0xf4) = 0;
        *(undefined4 *)(iVar1 + 300) = 0x3f800000;
        *(undefined4 *)(iVar1 + 0x118) = 0x3f800000;
        *(undefined4 *)(iVar1 + 0x104) = 0x3f800000;
        *(undefined4 *)(iVar1 + 0xf0) = 0x3f800000;
      }
    }
  }
  return;
}

// 00D666E0  FUN_00d666e0  size=331  [run]
undefined4 __fastcall FUN_00d666e0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0xb8) == -1) {
LAB_00d6681c:
    *(undefined4 *)(param_1 + 4) = 4;
    return 1;
  }
  iVar1 = (**(code **)(*DAT_01dc51c0 + 0x14))();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = (**(code **)(*DAT_01dc51c0 + 0x20))();
  if (iVar1 != 0) {
    uVar2 = (**(code **)(*DAT_01dc51c0 + 0x20))();
    iVar1 = PhaseManager::setPhaseData(uVar2);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x34);
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x38);
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x5c);
      FID_conflict__memcpy((void *)(param_1 + 0x10),(void *)(param_1 + 0x3c),0x20);
      *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0xb8);
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0xbc);
      *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0xe0);
      FID_conflict__memcpy((void *)(param_1 + 0x3c),(void *)(param_1 + 0xc0),0x20);
      *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(param_1 + 0xb8);
      *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_1 + 0xbc);
      *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_1 + 0xe0);
      FID_conflict__memcpy((void *)(param_1 + 0xec),(void *)(param_1 + 0xc0),0x20);
      FUN_00d449a0();
      uVar2 = *(undefined4 *)(param_1 + 0x34);
      FUN_00c1cf50(uVar2);
      FUN_00c2e6a0(uVar2);
      goto LAB_00d6681c;
    }
  }
  *(undefined4 *)(param_1 + 0xb8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 4) = 4;
  return 1;
}

