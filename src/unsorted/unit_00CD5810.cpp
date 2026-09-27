// src/unsorted/unit_00CD5810.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CD5810..00CD5810, 1 functions

#include "types.h"

// 00CD5810  FUN_00cd5810  size=243  [run]
void FUN_00cd5810(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  undefined1 *puVar8;
  int local_8;
  undefined1 local_4 [4];
  
  if ((((DAT_01dc1490 != 0) && (DAT_01dc0ec8 == 0)) && (((byte)DAT_01bea090 & 0x40) != 0)) &&
     (((param_1 != 0 && (iVar1 = FUN_00cbbf20(*(undefined4 *)(param_1 + 0x4b4)), iVar1 != 0)) &&
      (piVar2 = (int *)FUN_00445b60(param_1), piVar2 != (int *)0x0)))) {
    puVar8 = local_4;
    piVar7 = &local_8;
    uVar3 = (**(code **)(*piVar2 + 0x68))(piVar7,puVar8);
    FUN_00ac81f0(uVar3,piVar7,puVar8);
    if (local_8 == 0) {
      uVar4 = 0;
      do {
        if (param_1 == (&DAT_01dc11a0)[uVar4]) {
          (&DAT_01dc1120)[uVar4] = param_1;
          break;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < 0x20);
      uVar5 = 0;
      uVar4 = 0xffffffff;
      do {
        if ((&DAT_01dc11a0)[uVar5] == 0) {
          if (uVar4 == 0xffffffff) {
            uVar4 = uVar5;
          }
        }
        else {
          uVar6 = uVar5;
          if ((&DAT_01dc1120)[uVar5] == param_1) break;
        }
        uVar6 = uVar4;
        uVar5 = uVar5 + 1;
        uVar4 = uVar6;
      } while (uVar5 < 0x20);
      if (uVar6 != 0xffffffff) {
        (&DAT_01dc1120)[uVar6] = param_1;
        (&DAT_01dbfa18)[uVar6] = 1;
      }
    }
  }
  return;
}

