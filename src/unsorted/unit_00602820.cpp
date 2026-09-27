// src/unsorted/unit_00602820.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00602820..00602820, 1 functions

#include "mgrr.h"

// 00602820  FUN_00602820  size=227  [run]
void __fastcall FUN_00602820(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int *piVar3;
  
  uVar2 = CollisionAttackData::CollisionAttackData((int *)(param_1 + 0x940));
  piVar3 = (int *)CollisionSphere::CollisionSphere(2,*(undefined4 *)(param_1 + 0xb9c),uVar2);
  if (piVar3 != (int *)0x0) {
    *(undefined4 *)(param_1 + 0x1210) = 1;
    pcVar1 = *(code **)(*piVar3 + 0x20);
    piVar3[0xe0] = *(int *)(param_1 + 0x940);
    piVar3[0xe3] = 1;
    (*pcVar1)(0x1e,*(undefined4 *)(param_1 + 0xb9c),0);
    FUN_00d77c50(*(undefined4 *)(param_1 + 0x4f0),0xffffffff);
    piVar3[0x144] = 0x3ecccccd;
    FUN_00a8c370(piVar3,*(undefined4 *)(param_1 + 0x760));
    FUN_00d7b0f0();
    FUN_00d7b890();
    FUN_004039a0(0,param_1,0);
    FUN_00dffb20(param_1 + 0xdb0);
    FUN_00e030a0(param_1,0);
    FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),&stack0xfffffe94);
  }
  return;
}

