// src/unsorted/unit_00C23670.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C23670..00C23740, 2 functions

#include "mgrr.h"

// 00C23670  FUN_00c23670  size=205  [run]
void __fastcall FUN_00c23670(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  
  uVar1 = FUN_00a82090("CameraObject",0x40001,0);
  *(undefined4 *)(param_1 + 0x16e0) = uVar1;
  piVar2 = (int *)FUN_00a7c8a0();
  uVar4 = 0;
  if (piVar2 != (int *)0x0) {
    puVar5 = &DAT_01be9c80;
    (**(code **)(*piVar2 + 4))(&DAT_01be9c80);
    iVar3 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar3 != 0) & (uint)piVar2;
  }
  *(uint *)(param_1 + 0x16e4) = uVar4;
  FUN_00a9e290(&DAT_01641bdc,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
  *(undefined4 *)(param_1 + 0x16fc) = 0;
  FUN_00a96030(*(undefined4 *)(param_1 + 0x1700),0);
  *(undefined4 *)(param_1 + 0x16f8) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x16f4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1704) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1700) = 0;
  return;
}

// 00C23740  FUN_00c23740  size=66  [run]
void __fastcall FUN_00c23740(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_01dc5344;
  if (*(int *)(param_1 + 0x16fc) != 0) {
    FUN_00c127f0();
  }
  if (iVar1 != 0) {
    FUN_00d80570();
    return;
  }
  FUN_00dd1a30();
  FUN_00da8480();
  FUN_00da8480();
  return;
}

