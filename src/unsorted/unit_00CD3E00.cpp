// src/unsorted/unit_00CD3E00.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CD3E00..00CD3E00, 1 functions

#include "types.h"

// 00CD3E00  FUN_00cd3e00  size=361  [run]
void FUN_00cd3e00(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  undefined1 *puVar10;
  int local_8;
  undefined1 local_4 [4];
  
  if (((((DAT_01dc1490 != 0) && (DAT_01dc0ec8 == 0)) && (((byte)DAT_01bea090 & 0x40) != 0)) &&
      ((param_1 != 0 && (iVar1 = FUN_00a7c800(), iVar1 != 0)))) &&
     ((iVar1 = FUN_00a7c800(), (*(byte *)(iVar1 + 0x4c0) & 1) != 0 &&
      ((iVar1 = FUN_00a7c8a0(), iVar1 != 0 &&
       (iVar2 = FUN_00cb8a30(*(undefined4 *)(iVar1 + 0x4b4)), iVar2 != 0)))))) {
    uVar8 = 0;
    piVar3 = (int *)FUN_00445b60(iVar1);
    if ((piVar3 != (int *)0x0) && ((iVar2 = FUN_00ac46f0(), iVar2 != 0 && (piVar3[0x294] != 0)))) {
      iVar1 = FUN_00cb8530(*(undefined4 *)(iVar1 + 0x4b4));
      if (iVar1 != 0) {
        uVar8 = piVar3[0x2c0] & 0x10000;
      }
      puVar10 = local_4;
      piVar9 = &local_8;
      uVar4 = (**(code **)(*piVar3 + 0x68))(piVar9,puVar10);
      FUN_00ac81f0(uVar4,piVar9,puVar10);
      if (local_8 == 0) {
        uVar5 = 0;
        do {
          if (param_1 == (&DAT_01dc0cd8)[uVar5]) {
            (&DAT_01dc0c58)[uVar5] = param_1;
            break;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < 0x20);
        uVar6 = 0;
        uVar5 = 0xffffffff;
        do {
          if ((&DAT_01dc0cd8)[uVar6] == 0) {
            if (uVar5 == 0xffffffff) {
              uVar5 = uVar6;
            }
          }
          else {
            uVar7 = uVar6;
            if ((&DAT_01dc0c58)[uVar6] == param_1) break;
          }
          uVar7 = uVar5;
          uVar6 = uVar6 + 1;
          uVar5 = uVar7;
        } while (uVar6 < 0x20);
        if (uVar7 != 0xffffffff) {
          (&DAT_01dc0c58)[uVar7] = param_1;
          (&DAT_01dc0d58)[uVar7] = uVar8;
          (&DAT_01dc00a8)[uVar7] = 1;
        }
      }
    }
  }
  return;
}

