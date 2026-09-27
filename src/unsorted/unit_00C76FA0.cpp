// src/unsorted/unit_00C76FA0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C76FA0..00C774D0, 6 functions

#include "types.h"

// 00C76FA0  FUN_00c76fa0  size=31  [run]
undefined4 FUN_00c76fa0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_009165d0();
  if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0x14))) {
    uVar2 = FUN_00c76e20();
    return uVar2;
  }
  return 0;
}

// 00C76FC0  FUN_00c76fc0  size=113  [run]
void FUN_00c76fc0(int param_1,int param_2)

{
  undefined1 local_120 [284];
  
  FUN_00e01ca0();
  FUN_00e020f0(*(undefined4 *)(param_1 + 0x24));
  FUN_00dffb20(*(undefined4 *)(param_1 + 0x28));
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_00dffbd0(param_1 + 0x10);
    FUN_00dffbc0(*(undefined2 *)(param_1 + 0x2c));
  }
  FUN_00e00fb0(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8),local_120);
  return;
}

// 00C77040  FUN_00c77040  size=114  [run]
void FUN_00c77040(int param_1,int param_2)

{
  undefined1 local_120 [284];
  
  FUN_00e01ca0();
  FUN_00dffb20(*(undefined4 *)(param_1 + 0x58));
  FUN_00e020f0(*(undefined4 *)(param_1 + 0x54));
  if (*(int *)(param_1 + 0x60) != 0) {
    FUN_00dffbd0(param_1 + 0x40);
    FUN_00dffbc0(*(undefined2 *)(param_1 + 0x5c));
  }
  thunk_FUN_00e00b80(*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0x10),param_1,
                     local_120);
  return;
}

// 00C770C0  FUN_00c770c0  size=237  [run]
undefined4 FUN_00c770c0(int param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  
  uVar1 = 0;
  if ((&DAT_01dbd18c)[DAT_01dbd184 * 2] != 0) {
    piVar3 = (int *)(&DAT_01dbd188)[DAT_01dbd184 * 2];
    do {
      if (*piVar3 == *(int *)(param_1 + 0x20)) {
        piVar3 = (int *)(&DAT_01dbd188)[DAT_01dbd184 * 2] + uVar1 * 6;
        if (piVar3 != (int *)0x0) {
          if (piVar3[1] != 0xfff) {
            FUN_00c76fc0(param_1,piVar3);
          }
          goto LAB_00c77103;
        }
        break;
      }
      uVar1 = uVar1 + 1;
      piVar3 = piVar3 + 6;
    } while (uVar1 < (uint)(&DAT_01dbd18c)[DAT_01dbd184 * 2]);
  }
  FUN_00dd5650(&DAT_016a8010,*(undefined4 *)(param_1 + 0x20));
LAB_00c77103:
  uVar1 = 0;
  if ((&DAT_01dbd1a4)[DAT_01dbd180 * 2] != 0) {
    piVar3 = (int *)(&DAT_01dbd1a0)[DAT_01dbd180 * 2];
    do {
      if (*piVar3 == *(int *)(param_1 + 0x20)) {
        piVar3 = (int *)(&DAT_01dbd1a0)[DAT_01dbd180 * 2] + uVar1 * 7;
        if (piVar3 != (int *)0x0) {
          if (*(int *)(param_1 + 0x24) != 0) {
            uVar2 = FUN_00e5e130(piVar3[1],param_1,0,0xffffffff,0);
            *param_2 = uVar2;
            return 1;
          }
          *param_2 = 0;
          return 1;
        }
        break;
      }
      uVar1 = uVar1 + 1;
      piVar3 = piVar3 + 7;
    } while (uVar1 < (uint)(&DAT_01dbd1a4)[DAT_01dbd180 * 2]);
  }
  FUN_00dd5650(&DAT_016a8040,*(undefined4 *)(param_1 + 0x20));
  return 1;
}

// 00C771B0  FUN_00c771b0  size=241  [run]
undefined4 FUN_00c771b0(int param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  
  uVar1 = 0;
  if ((&DAT_01dbd18c)[DAT_01dbd184 * 2] != 0) {
    piVar3 = (int *)(&DAT_01dbd188)[DAT_01dbd184 * 2];
    do {
      if (*piVar3 == *(int *)(param_1 + 0x50)) {
        piVar3 = (int *)(&DAT_01dbd188)[DAT_01dbd184 * 2] + uVar1 * 6;
        if (piVar3 != (int *)0x0) {
          if (piVar3[3] != 0xfff) {
            FUN_00c77040(param_1,piVar3);
          }
          goto LAB_00c771f3;
        }
        break;
      }
      uVar1 = uVar1 + 1;
      piVar3 = piVar3 + 6;
    } while (uVar1 < (uint)(&DAT_01dbd18c)[DAT_01dbd184 * 2]);
  }
  FUN_00dd5650(&DAT_016a8010,*(undefined4 *)(param_1 + 0x50));
LAB_00c771f3:
  uVar1 = 0;
  if ((&DAT_01dbd1a4)[DAT_01dbd180 * 2] != 0) {
    piVar3 = (int *)(&DAT_01dbd1a0)[DAT_01dbd180 * 2];
    do {
      if (*piVar3 == *(int *)(param_1 + 0x50)) {
        piVar3 = (int *)(&DAT_01dbd1a0)[DAT_01dbd180 * 2] + uVar1 * 7;
        if (piVar3 != (int *)0x0) {
          if (*(int *)(param_1 + 0x54) == 0) {
            *param_2 = 0;
            return 1;
          }
          uVar2 = FUN_00a7c800();
          uVar2 = FUN_00e5e170(piVar3[2],uVar2,0xffffffff,0);
          *param_2 = uVar2;
          return 1;
        }
        break;
      }
      uVar1 = uVar1 + 1;
      piVar3 = piVar3 + 7;
    } while (uVar1 < (uint)(&DAT_01dbd1a4)[DAT_01dbd180 * 2]);
  }
  FUN_00dd5650(&DAT_016a8040,*(undefined4 *)(param_1 + 0x50));
  return 1;
}

// 00C774D0  FUN_00c774d0  size=34  [run]
undefined4 FUN_00c774d0(void)

{
  int iVar1;
  
  iVar1 = FUN_00b7cb80();
  if (iVar1 == 0) {
    iVar1 = FUN_00b7cc20();
    if (iVar1 == 0) {
      return 1;
    }
  }
  return 0;
}

