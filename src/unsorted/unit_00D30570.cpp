// src/unsorted/unit_00D30570.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D30570..00D30570, 1 functions

#include "mgrr.h"

// 00D30570  FUN_00d30570  size=564  [run]
void __fastcall FUN_00d30570(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  if ((DAT_018b561c == -1) && (*(int *)(param_1 + 4) == 0)) {
    iVar4 = 0;
    do {
      if ((&DAT_01dbfde0)[iVar4] != 0) {
        DAT_018b561c = iVar4;
        iVar4 = FUN_00dd3500(0x140,&DAT_01b7be50);
        if (iVar4 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = cCustomObjCtrlManager::cCustomObjCtrlManager();
          if (iVar4 != 0) {
            *(char **)(iVar4 + 0xc) = "cItemGetDispParts";
            *(undefined4 *)(iVar4 + 8) = 5;
            uVar5 = FUN_00d29960(0x24);
            *(undefined4 *)(iVar4 + 0x14) = uVar5;
          }
        }
        *(int *)(param_1 + 4) = iVar4;
        uVar2 = (&DAT_01dbfd60)[DAT_018b561c];
        uVar5 = (&DAT_01dbfd20)[DAT_018b561c];
        if (uVar2 < 0x9c) {
          *(undefined4 *)(iVar4 + 0x100) = (&DAT_01dbfda0)[DAT_018b561c];
          *(uint *)(iVar4 + 0x104) = uVar2;
          *(undefined4 *)(iVar4 + 0x108) = uVar5;
        }
        DAT_01dc0e04 = DAT_01dc0e04 + -1;
        break;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x10);
  }
  if (*(int **)(param_1 + 4) == (int *)0x0) goto LAB_00d30794;
  (**(code **)(**(int **)(param_1 + 4) + 4))();
  iVar4 = DAT_018b561c;
  puVar1 = *(undefined4 **)(param_1 + 4);
  if (puVar1[0x2c] == 9) {
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
      *(undefined4 *)(param_1 + 4) = 0;
    }
    (&DAT_01dbfde0)[DAT_018b561c] = 0;
    (&DAT_01dbfda0)[DAT_018b561c] = 0xffffffff;
    (&DAT_01dbfd60)[DAT_018b561c] = 0;
    (&DAT_01dbfd20)[DAT_018b561c] = 0;
    DAT_018b561c = -1;
  }
  else if (puVar1[0x44] == 0) {
    if (DAT_01dc0e08 == 0) {
      if (0 < DAT_01dc0e04) {
        (&DAT_01dbfde0)[DAT_018b561c] = 0;
        (&DAT_01dbfda0)[iVar4] = 0xffffffff;
        (&DAT_01dbfd60)[iVar4] = 0;
        (&DAT_01dbfd20)[iVar4] = 0;
        for (iVar6 = iVar4; iVar6 < 0x10; iVar6 = iVar6 + 1) {
          if ((&DAT_01dbfde0)[iVar6] != 0) goto LAB_00d30735;
        }
        iVar6 = 0;
        if (0 < iVar4) {
          do {
            if ((&DAT_01dbfde0)[iVar6] != 0) goto LAB_00d30735;
            iVar6 = iVar6 + 1;
          } while (iVar6 < iVar4);
        }
      }
    }
    else {
      uVar5 = (&DAT_01dbfd20)[DAT_018b561c];
      puVar1[0x40] = (&DAT_01dbfda0)[DAT_018b561c];
      puVar1[0x42] = uVar5;
      puVar1[0x43] = 1;
      DAT_01dc0e08 = 0;
    }
  }
LAB_00d3077c:
  if (*(int *)(param_1 + 4) != 0) {
    DAT_01dc0e0c = (uint)(0 < *(int *)(*(int *)(param_1 + 4) + 0xb0));
  }
LAB_00d30794:
  if (*(int *)(param_1 + 4) == 0) {
    DAT_01dc0e0c = 0;
  }
  return;
LAB_00d30735:
  uVar2 = (&DAT_01dbfd60)[iVar6];
  uVar5 = (&DAT_01dbfd20)[iVar6];
  uVar3 = (&DAT_01dbfda0)[iVar6];
  iVar4 = *(int *)(param_1 + 4);
  DAT_018b561c = iVar6;
  if (uVar2 < 0x9c) {
    *(undefined4 *)(iVar4 + 0x110) = 1;
    *(undefined4 *)(iVar4 + 0x114) = uVar3;
    *(uint *)(iVar4 + 0x118) = uVar2;
    *(undefined4 *)(iVar4 + 0x11c) = uVar5;
  }
  DAT_01dc0e04 = DAT_01dc0e04 + -1;
  goto LAB_00d3077c;
}

