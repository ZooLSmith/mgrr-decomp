// src/unsorted/unit_00D0D100.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D0D100..00D0D100, 1 functions

#include "types.h"

// 00D0D100  FUN_00d0d100  size=383  [run]
undefined4 __thiscall FUN_00d0d100(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined *puVar6;
  
  iVar2 = param_2;
  iVar4 = 0;
  *(int **)(param_2 + 0x78) = param_1;
  if (*(int *)(param_2 + 0x7c) != 0) {
    iVar1 = *param_1;
    *(int *)(param_2 + 0x80) = iVar1;
    if ((param_1[4] != 0) && (iVar3 = param_1[4] + (int)param_1, iVar3 != 0)) {
      param_2 = 0;
      if (iVar1 != 0) {
        piVar5 = (int *)(iVar3 + 0x1a0);
        do {
          iVar1 = *piVar5;
          iVar3 = *(int *)(iVar2 + 0x7c) + iVar4;
          if (iVar1 != 0) {
            switch(piVar5[-4]) {
            case 0:
              if ((*(int *)(iVar3 + 0x3f0) == 0) || (iVar1 + (int)param_1 == 0)) {
                puVar6 = &DAT_016b9ed8;
LAB_00d0d24a:
                FUN_00dd5650(puVar6);
              }
              else {
                FUN_00d1fb90(iVar1 + (int)param_1);
              }
              break;
            case 1:
              if ((*(int *)(iVar3 + 0x3f0) == 0) || (iVar1 + (int)param_1 == 0)) {
                puVar6 = &DAT_016b9eb8;
                goto LAB_00d0d24a;
              }
              iVar1 = *(int *)(iVar1 + (int)param_1 + 0x1c);
              if (iVar1 != 0) {
                FUN_00cf9ac0(iVar1);
              }
              break;
            case 2:
              if ((*(int *)(iVar3 + 0x3f0) == 0) || (iVar1 + (int)param_1 == 0)) {
                puVar6 = &DAT_016b9e98;
                goto LAB_00d0d24a;
              }
              iVar1 = *(int *)(iVar1 + (int)param_1 + 0x20);
              if (iVar1 != 0) {
                FUN_00cfaf30(iVar1);
              }
              break;
            case 3:
              if ((*(int *)(iVar3 + 0x3f0) == 0) || (iVar1 + (int)param_1 == 0)) {
                puVar6 = &DAT_016b9e78;
                goto LAB_00d0d24a;
              }
              FUN_00ce66f0(iVar1 + (int)param_1);
              break;
            case 4:
              if ((*(int *)(iVar3 + 0x3f0) == 0) || (iVar1 + (int)param_1 == 0)) {
                puVar6 = &DAT_016b9e58;
                goto LAB_00d0d24a;
              }
              FUN_00ccf210(iVar1 + (int)param_1);
              break;
            case 8:
              if ((*(int *)(iVar3 + 0x3f0) == 0) || (iVar1 + (int)param_1 == 0)) {
                puVar6 = &DAT_016b9e18;
                goto LAB_00d0d24a;
              }
              FUN_00cfb7c0(*(undefined4 *)(iVar1 + (int)param_1 + 0x1c));
            }
          }
          param_2 = param_2 + 1;
          iVar4 = iVar4 + 0x400;
          piVar5 = piVar5 + 0x6c;
        } while (param_2 < *(uint *)(iVar2 + 0x80));
      }
      return 1;
    }
  }
  return 0;
}

