// src/unsorted/unit_008BC180.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008BC180..008BC180, 1 functions

#include "mgrr.h"

// 008BC180  FUN_008bc180  size=259  [run]
void __fastcall FUN_008bc180(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int *piVar3;
  int iStack_120;
  undefined4 local_110 [67];
  
  FUN_004ab4b0((int *)(param_1 + 0x940));
  local_110[0] = 0x147;
  uVar2 = CollisionAttackData::CollisionAttackData(local_110);
  piVar3 = (int *)CollisionCapsule::CollisionCapsule(1,*(undefined4 *)(param_1 + 0xb9c),uVar2);
  if (piVar3 != (int *)0x0) {
    piVar3[0xe0] = *(int *)(param_1 + 0x940);
    pcVar1 = *(code **)(*piVar3 + 0x20);
    piVar3[0xe3] = 1;
    (*pcVar1)(0x1e,*(undefined4 *)(param_1 + 0xb9c),0);
    FUN_00d77c50(*(undefined4 *)(param_1 + 0x4f0),0xffffffff);
    piVar3[0x165] = 0x3f4ccccd;
    piVar3[0x164] = 0x3e99999a;
    piVar3[0x160] = -0x4036f025;
    piVar3[0x161] = 0;
    piVar3[0x162] = 0;
    piVar3[0x163] = iStack_120;
    FUN_00d77c90(&stack0xfffffed4);
    FUN_00a8c370(piVar3,*(undefined4 *)(param_1 + 0x760));
    FUN_00d7b0f0();
    FUN_00d7b890();
  }
  return;
}

