// src/unsorted/unit_00CD4720.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CD4720..00CD4890, 2 functions

#include "types.h"

// 00CD4720  FUN_00cd4720  size=358  [run]
void FUN_00cd4720(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  if ((((param_1 != 0) && (iVar1 = FUN_00a7c800(), iVar1 != 0)) &&
      (iVar1 = FUN_00a7c800(), (*(byte *)(iVar1 + 0x4c0) & 1) != 0)) &&
     ((iVar1 = FUN_00a7c8a0(), iVar1 != 0 &&
      (iVar2 = FUN_00a12210(*(undefined4 *)(iVar1 + 0x82c)), iVar2 != 0)))) {
    uVar3 = 0;
    uVar4 = 0xffffffff;
    do {
      if ((&DAT_01dbff60)[uVar3] == 0) {
        if (uVar4 == 0xffffffff) {
          uVar4 = uVar3;
        }
      }
      else {
        uVar6 = uVar3;
        if ((&DAT_01dbff60)[uVar3] == param_1) break;
      }
      uVar6 = uVar4;
      uVar3 = uVar3 + 1;
      uVar4 = uVar6;
    } while (uVar3 < 0x14);
    if (uVar6 != 0xffffffff) {
      uVar4 = *(uint *)(param_1 + 0x24) & 0xf0000;
      if (((uVar4 == 0x10000) || (uVar4 == 0x20000)) &&
         ((*(uint *)(param_1 + 0x24) != 0x20020 ||
          ((*(short *)(iVar1 + 0x824) != 3 && (*(short *)(iVar1 + 0x824) != 4)))))) {
        (&DAT_01dbff60)[uVar6] = param_1;
        puVar7 = (undefined4 *)(iVar2 + 0x10);
        puVar8 = &DAT_01dc4780 + uVar6 * 0x10;
        for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        (&DAT_01dbff10)[uVar6] = *(undefined4 *)(param_1 + 0x24);
        (&DAT_01dbfe70)[uVar6] = 0x78;
        (&DAT_01dbfe20)[uVar6] = 1;
        iVar2 = FUN_00a12210(0xffffffff);
        (&DAT_01dc4c80)[uVar6 * 4] = *(undefined4 *)(iVar2 + 0x50);
        (&DAT_01dc4c84)[uVar6 * 4] = *(undefined4 *)(iVar2 + 0x54);
        (&DAT_01dc4c88)[uVar6 * 4] = *(undefined4 *)(iVar2 + 0x58);
        (&DAT_01dc4c8c)[uVar6 * 4] = *(undefined4 *)(iVar2 + 0x5c);
        if (*(short *)(iVar1 + 0x824) != -1) {
          (&DAT_01dbfec0)[uVar6] = (int)*(short *)(iVar1 + 0x824);
          *(undefined2 *)(iVar1 + 0x824) = 0xffff;
          *(undefined4 *)(iVar1 + 0x828) = 0x78;
        }
      }
    }
  }
  return;
}

// 00CD4890  FUN_00cd4890  size=22  [run]
void FUN_00cd4890(undefined4 param_1)

{
  FUN_00cd4720(param_1);
  DAT_01dc0e00 = param_1;
  return;
}

