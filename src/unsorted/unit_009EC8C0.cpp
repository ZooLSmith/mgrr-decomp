// src/unsorted/unit_009EC8C0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009EC8C0..009EC9A0, 3 functions

#include "mgrr.h"

// 009EC8C0  FUN_009ec8c0  size=81  [run]
void FUN_009ec8c0(int param_1)

{
  undefined1 local_120 [284];
  
  FUN_00e01ca0();
  FUN_00e020f0(*(undefined4 *)(param_1 + 0x44));
  if (*(int *)(param_1 + 0x60) != 0) {
    FUN_00dffac0(*(int *)(param_1 + 0x60));
  }
  FUN_00e00fb0(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),local_120);
  return;
}

// 009EC920  FUN_009ec920  size=75  [run]
void FUN_009ec920(void)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = DAT_01b7a888;
  piVar2 = DAT_01b7a888;
  if (DAT_01b7a888 != DAT_01b7a888 + DAT_01b7a890) {
    do {
      if (*piVar2 != 0) {
        FUN_00dd4920(*piVar2);
        *piVar2 = 0;
        piVar1 = DAT_01b7a888;
      }
      piVar2 = piVar2 + 1;
    } while (piVar2 != piVar1 + DAT_01b7a890);
  }
  DAT_01b7a890 = 0;
  return;
}

// 009EC9A0  FUN_009ec9a0  size=316  [run]
undefined4 * FUN_009ec9a0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  iVar4 = (int)param_1;
  iVar1 = (int)param_1 + 0x10;
  if (*(int *)((int)param_1 + 8) == 0) {
    puVar5 = &DAT_01b7a9a0 + *(int *)((int)param_1 + 0xa0) * 0x1f;
  }
  else {
    puVar5 = (undefined4 *)(&DAT_01b7ac88 + *(int *)((int)param_1 + 0xa0) * 0x7c);
  }
  iVar2 = puVar5[0x1e];
  uVar7 = 0;
  iVar6 = (int)param_1 + 0x70;
  param_1 = (undefined4 *)((int)param_1 + 0x90);
  iVar8 = iVar2 + 0x58;
  do {
    uVar3 = *param_1;
    if (1 < uVar7) {
      FUN_00dd5650(&DAT_016596ec,uVar7);
    }
    FUN_00fa1d50(iVar8 + -0x18,uVar3);
    if (1 < uVar7) {
      FUN_00dd5650(&DAT_01659720,uVar7);
    }
    FUN_00f9ec50(iVar8,iVar6,4);
    param_1 = param_1 + 1;
    uVar7 = uVar7 + 1;
    iVar6 = iVar6 + 0x10;
    iVar8 = iVar8 + 0xc;
  } while ((int)uVar7 < 2);
  FUN_00f9ec50(iVar2 + 0x28,iVar4 + 0x60,4);
  FUN_00f9ee50(iVar2 + 0x70,iVar1);
  if ((*(uint *)(iVar4 + 0x9c) & 0x40000000) == 0) {
    *(uint *)(iVar2 + 0x48) = *(uint *)(iVar2 + 0x48) & 0xff111fff | 0x111000;
    *(uint *)(iVar2 + 0x54) = *(uint *)(iVar2 + 0x54) & 0xff111fff | 0x111000;
  }
  else {
    *(uint *)(iVar2 + 0x48) = *(uint *)(iVar2 + 0x48) & 0xff333fff | 0x333000;
    *(uint *)(iVar2 + 0x54) = *(uint *)(iVar2 + 0x54) & 0xff333fff | 0x333000;
  }
  FUN_009e63d0(*(uint *)(iVar4 + 0x9c) >> 0x1d & 1);
  return puVar5;
}

