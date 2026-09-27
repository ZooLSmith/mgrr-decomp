// src/unsorted/unit_00CD3BF0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CD3BF0..00CD3BF0, 1 functions

#include "mgrr.h"

// 00CD3BF0  FUN_00cd3bf0  size=307  [run]
void FUN_00cd3bf0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  undefined1 *puVar9;
  int local_8;
  undefined1 local_4 [4];
  
  if ((((((DAT_01dc1490 != 0) && (((byte)DAT_01bea090 & 0x40) != 0)) && (param_1 != 0)) &&
       ((iVar1 = FUN_00a7c800(), iVar1 != 0 &&
        (iVar1 = FUN_00a7c800(), (*(byte *)(iVar1 + 0x4c0) & 1) != 0)))) &&
      ((iVar1 = FUN_00a7c8a0(), iVar1 != 0 &&
       ((iVar2 = FUN_00ca92b0(*(undefined4 *)(iVar1 + 0x4b4),0,1,0,0), iVar2 != 0 &&
        (iVar2 = FUN_00cc6d70(param_1), iVar2 != 0)))))) &&
     ((piVar3 = (int *)FUN_00445b60(iVar1), piVar3 != (int *)0x0 && (piVar3[0x294] != 0)))) {
    puVar9 = local_4;
    piVar8 = &local_8;
    uVar4 = (**(code **)(*piVar3 + 0x68))(piVar8,puVar9);
    FUN_00ac81f0(uVar4,piVar8,puVar9);
    if (local_8 == 0) {
      uVar5 = 0;
      do {
        if (param_1 == (&DAT_01dc0bd0)[uVar5]) {
          (&DAT_01dc0b50)[uVar5] = param_1;
          break;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < 0x20);
      uVar6 = 0;
      uVar5 = 0xffffffff;
      do {
        if ((&DAT_01dc0bd0)[uVar6] == 0) {
          if (uVar5 == 0xffffffff) {
            uVar5 = uVar6;
          }
        }
        else {
          uVar7 = uVar6;
          if ((&DAT_01dc0b50)[uVar6] == param_1) break;
        }
        uVar7 = uVar5;
        uVar6 = uVar6 + 1;
        uVar5 = uVar7;
      } while (uVar6 < 0x20);
      if (uVar7 != 0xffffffff) {
        (&DAT_01dc0b50)[uVar7] = param_1;
        (&DAT_01dc0128)[uVar7] = 1;
      }
    }
  }
  return;
}

