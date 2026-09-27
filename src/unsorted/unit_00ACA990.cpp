// src/unsorted/unit_00ACA990.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00ACA990..00ACA990, 1 functions

#include "types.h"

// 00ACA990  FUN_00aca990  size=567  [run]
void __thiscall FUN_00aca990(int param_1,int param_2,int param_3)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  if (param_2 != 0) {
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
  }
  if (*(int **)(param_1 + 0x370) != (int *)0x0) {
    if (param_3 == 0) {
      *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x400000;
    }
    else {
      *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) & 0xffbfffff;
    }
    **(int **)(param_1 + 0x370) = param_3;
  }
  *(undefined4 *)(param_1 + 0xa08) = 0;
  *(undefined4 *)(param_1 + 0xa04) = 0;
  iVar3 = FUN_00a81330();
  *(int *)(param_1 + 0xa04) = iVar3;
  if (iVar3 != 0) {
    uVar2 = FUN_00a7c8a0();
    *(undefined4 *)(param_1 + 0xa08) = uVar2;
  }
  if (param_2 != 0) {
    *(ushort *)(param_1 + 0xa2) = *(ushort *)(param_1 + 0xa2) | 4;
    if ((*(int *)(param_1 + 0xa50) == -1) ||
       (iVar3 = FUN_00a12210(*(int *)(param_1 + 0xa50)), iVar3 == 0)) {
      iVar3 = *(int *)(param_1 + 0xa08);
    }
    FID_conflict__memcpy((void *)(param_1 + 0x10),(void *)(iVar3 + 0x10),0x40);
    iVar3 = *(int *)(param_1 + 0x360);
    if (*(int *)(param_1 + 0x360) == 0) {
      iVar3 = param_1;
    }
    sVar1 = *(short *)(iVar3 + 0x358);
    if (0 < sVar1) {
      param_2 = 0;
      do {
        iVar3 = *(int *)(param_1 + 0x360);
        if (*(int *)(param_1 + 0x360) == 0) {
          iVar3 = param_1;
        }
        if ((iVar5 < 0) || (*(short *)(iVar3 + 0x358) <= iVar5)) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(iVar3 + 0x350) + param_2;
        }
        iVar4 = FUN_00a12210((int)*(short *)(iVar3 + 0xa0));
        if (iVar4 != 0) {
          *(ushort *)(iVar3 + 0xa2) = *(ushort *)(iVar3 + 0xa2) | 4;
          FID_conflict__memcpy((void *)(iVar3 + 0x10),(void *)(iVar4 + 0x10),0x40);
          if (*(int *)(param_1 + 0xa54) != 0) {
            *(ushort *)(iVar3 + 0xa2) = *(ushort *)(iVar3 + 0xa2) | 2;
            *(undefined4 *)(iVar3 + 0x60) = *(undefined4 *)(iVar4 + 0x60);
            *(undefined4 *)(iVar3 + 100) = *(undefined4 *)(iVar4 + 100);
            *(undefined4 *)(iVar3 + 0x68) = *(undefined4 *)(iVar4 + 0x68);
            *(undefined4 *)(iVar3 + 0x6c) = *(undefined4 *)(iVar4 + 0x6c);
            *(undefined4 *)(iVar3 + 0x90) = *(undefined4 *)(iVar4 + 0x90);
            *(undefined4 *)(iVar3 + 0x94) = *(undefined4 *)(iVar4 + 0x94);
            *(undefined4 *)(iVar3 + 0x98) = *(undefined4 *)(iVar4 + 0x98);
            *(undefined4 *)(iVar3 + 0x9c) = *(undefined4 *)(iVar4 + 0x9c);
            *(undefined4 *)(iVar3 + 0x70) = *(undefined4 *)(iVar4 + 0x70);
            *(undefined4 *)(iVar3 + 0x74) = *(undefined4 *)(iVar4 + 0x74);
            *(undefined4 *)(iVar3 + 0x78) = *(undefined4 *)(iVar4 + 0x78);
            *(undefined4 *)(iVar3 + 0x7c) = *(undefined4 *)(iVar4 + 0x7c);
            *(undefined4 *)(iVar3 + 0x50) = *(undefined4 *)(iVar4 + 0x50);
            *(undefined4 *)(iVar3 + 0x54) = *(undefined4 *)(iVar4 + 0x54);
            *(undefined4 *)(iVar3 + 0x58) = *(undefined4 *)(iVar4 + 0x58);
            *(undefined4 *)(iVar3 + 0x5c) = *(undefined4 *)(iVar4 + 0x5c);
            *(undefined4 *)(iVar3 + 0x80) = *(undefined4 *)(iVar4 + 0x80);
            *(undefined4 *)(iVar3 + 0x84) = *(undefined4 *)(iVar4 + 0x84);
            *(undefined4 *)(iVar3 + 0x88) = *(undefined4 *)(iVar4 + 0x88);
            *(undefined4 *)(iVar3 + 0x8c) = *(undefined4 *)(iVar4 + 0x8c);
          }
        }
        param_2 = param_2 + 0xb0;
        iVar5 = iVar5 + 1;
      } while (iVar5 < sVar1);
    }
  }
  if (*(int *)(param_1 + 0x7b0) != 0) {
    FUN_008f40f0(param_1);
  }
  return;
}

