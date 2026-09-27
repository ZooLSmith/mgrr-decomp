// src/unsorted/unit_00D14E00.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D14E00..00D14E00, 1 functions

#include "mgrr.h"

// 00D14E00  FUN_00d14e00  size=1004  [run]
void __fastcall FUN_00d14e00(int param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined *puVar10;
  int local_4;
  
  iVar8 = 0;
  iVar9 = 0;
  piVar5 = (int *)(param_1 + 0x164);
  iVar3 = 2;
  do {
    iVar6 = iVar3;
    if (piVar5[-1] != -1) {
      iVar9 = iVar9 + 1;
    }
    if (*piVar5 != -1) {
      iVar9 = iVar9 + 1;
    }
    if (piVar5[1] != -1) {
      iVar9 = iVar9 + 1;
    }
    if (piVar5[2] != -1) {
      iVar9 = iVar9 + 1;
    }
    if (piVar5[3] != -1) {
      iVar9 = iVar9 + 1;
    }
    if (piVar5[4] != -1) {
      iVar9 = iVar9 + 1;
    }
    piVar5 = piVar5 + 6;
    iVar3 = iVar6 + -1;
  } while (iVar6 + -1 != 0);
  if (iVar9 == 0) {
    *(undefined4 *)(param_1 + 0x160) = 0;
    iVar9 = iVar6;
  }
  if (*(int *)(param_1 + 400) != 0) {
    iVar9 = *(int *)(param_1 + 0x18);
    if (iVar9 == 0) {
      return;
    }
    uVar1 = *(uint *)(iVar9 + 0x80);
    uVar7 = 0;
    if (uVar1 != 0) {
      if (uVar1 == 0) goto LAB_00d14e88;
      do {
        iVar3 = *(int *)(iVar9 + 0x7c) + iVar8;
        if ((iVar3 != 0) && (*(char *)(iVar3 + 0x3ed) == '\0')) {
          return;
        }
LAB_00d14e88:
        uVar7 = uVar7 + iVar6;
        iVar8 = iVar8 + 0x400;
      } while (uVar7 < uVar1);
    }
    *(undefined4 *)(param_1 + 400) = 0;
    return;
  }
  if (*(int *)(param_1 + 0x198) != *(int *)(param_1 + 0x19c)) {
    *(int *)(param_1 + 0x194) = iVar6;
  }
  if (*(int *)(param_1 + 0x194) != 0) {
    if (*(int *)(param_1 + 0x18) != 0) {
      FUN_00cdeec0(5);
    }
    iVar3 = *(int *)(param_1 + 0x198);
    iVar9 = iVar9 + -1;
    iVar8 = 0x19;
    local_4 = 4;
    do {
      FUN_00d01220(iVar3,iVar8 + -0xe,iVar8,iVar8 + -7);
      iVar3 = iVar3 + 1;
      if (iVar9 < iVar3) {
        iVar3 = 0;
      }
      iVar8 = iVar8 + 1;
      local_4 = local_4 + -1;
    } while (local_4 != 0);
    iVar3 = *(int *)(param_1 + 0x198) + -1;
    if (iVar3 < 0) {
      iVar3 = iVar9;
    }
    iVar8 = 0x18;
    do {
      FUN_00d01220(iVar3,iVar8 + -0xe,iVar8,iVar8 + -7);
      iVar3 = iVar3 + -1;
      if (iVar3 < 0) {
        iVar3 = iVar9;
      }
      iVar8 = iVar8 + -1;
    } while (0x15 < iVar8);
    iVar9 = *(int *)(param_1 + 0x18);
    iVar3 = *(int *)(&DAT_018b5620 + *(int *)(param_1 + 0x160 + *(int *)(param_1 + 0x198) * 4) * 0xc
                    );
    uVar1 = *(uint *)(param_1 + 0x90);
    if (iVar3 == 0) {
      if (((iVar9 != 0) && (uVar1 < *(uint *)(iVar9 + 0x80))) &&
         (iVar9 = uVar1 * 0x400 + *(int *)(iVar9 + 0x7c), iVar9 != 0)) {
        *(undefined4 *)(iVar9 + 0x3b0) = 0;
      }
    }
    else {
      if ((((iVar9 != 0) && (uVar1 < *(uint *)(iVar9 + 0x80))) &&
          (piVar5 = *(int **)(uVar1 * 0x400 + 0x3f0 + *(int *)(iVar9 + 0x7c)), piVar5 != (int *)0x0)
          ) && (iVar9 = (**(code **)(*piVar5 + 8))(), iVar9 == 3)) {
        uVar4 = FUN_00e03ea0(iVar3);
        piVar5[0x2a] = -1;
        piVar5[0x2b] = 0;
        if (((piVar5[5] != 0) && (*(int *)(piVar5[5] + 4) != 0)) &&
           (iVar9 = FUN_00cb1cd0(uVar4), -1 < iVar9)) {
          piVar5[0x2a] = iVar9;
          piVar5[0x2b] = 0;
          piVar5[0x2e] = 0;
        }
      }
      iVar9 = *(int *)(param_1 + 0x18);
      if (((iVar9 != 0) && (*(uint *)(param_1 + 0x90) < *(uint *)(iVar9 + 0x80))) &&
         (iVar9 = *(uint *)(param_1 + 0x90) * 0x400 + *(int *)(iVar9 + 0x7c), iVar9 != 0)) {
        *(undefined4 *)(iVar9 + 0x3b0) = 1;
        *(undefined4 *)(param_1 + 0x194) = 0;
        goto LAB_00d151c4;
      }
    }
    *(undefined4 *)(param_1 + 0x194) = 0;
    goto LAB_00d151c4;
  }
  if ((*(int *)(param_1 + 0x1a0) == 0) || (*(int *)(param_1 + 0x110) < 6)) goto LAB_00d151c4;
  piVar5 = (int *)FUN_00c13920();
  iVar3 = (**(code **)(*piVar5 + 0x28))(0);
  if ((iVar3 == 0) || (piVar5 = (int *)FUN_00a7c8a0(), piVar5 == (int *)0x0)) {
LAB_00d1509a:
    cVar2 = FUN_00cac570(8,0);
    if (cVar2 != '\0') {
      piVar5 = (int *)(param_1 + 0x198);
      *piVar5 = *piVar5 + -1;
      if (*piVar5 < 0) {
        *(int *)(param_1 + 0x198) = iVar9 + -1;
      }
      *(int *)(param_1 + 0x194) = iVar6;
      *(int *)(param_1 + 400) = iVar6;
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdeec0(4);
      }
      iVar9 = *(int *)(param_1 + 0x18);
      if (((iVar9 != 0) && (*(uint *)(param_1 + 0x90) < *(uint *)(iVar9 + 0x80))) &&
         (iVar9 = *(uint *)(param_1 + 0x90) * 0x400 + *(int *)(iVar9 + 0x7c), iVar9 != 0)) {
        *(undefined4 *)(iVar9 + 0x3b0) = 0;
      }
      *(undefined4 *)(param_1 + 0x1a4) = 0xf0;
      goto LAB_00d151c4;
    }
    cVar2 = FUN_00cac570(4,0);
    if (cVar2 != '\0') {
      *(int *)(param_1 + 0x198) = *(int *)(param_1 + 0x198) + iVar6;
      if (iVar9 + -1 < *(int *)(param_1 + 0x198)) {
        *(undefined4 *)(param_1 + 0x198) = 0;
      }
      *(int *)(param_1 + 0x194) = iVar6;
      *(int *)(param_1 + 400) = iVar6;
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdeec0(3);
      }
      FUN_00cb2310(*(undefined4 *)(param_1 + 0x90),0);
      *(undefined4 *)(param_1 + 0x1a4) = 0xf0;
      goto LAB_00d151c4;
    }
    cVar2 = FUN_00cac570(0x10,0);
    if ((((cVar2 == '\0') && (cVar2 = FUN_00cac570(0x20,0), cVar2 == '\0')) &&
        (cVar2 = FUN_00cac570(0x100,0), cVar2 == '\0')) &&
       (cVar2 = FUN_00cac570(0x200,0), cVar2 == '\0')) goto LAB_00d151c4;
  }
  else {
    puVar10 = &DAT_01be9db8;
    (**(code **)(*piVar5 + 4))(&DAT_01be9db8);
    iVar3 = FUN_00dd6d80(puVar10);
    if ((iVar3 == 0) || (iVar3 = (**(code **)(*piVar5 + 0x32c))(), iVar3 == 0)) goto LAB_00d1509a;
  }
  *(undefined4 *)(param_1 + 0x1a4) = 0;
LAB_00d151c4:
  piVar5 = (int *)(param_1 + 0x1a4);
  *piVar5 = *piVar5 + -1;
  if (*piVar5 < 0) {
    *(undefined4 *)(param_1 + 0x1a0) = 0;
    *(undefined4 *)(param_1 + 0x1a4) = 0;
  }
  *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(param_1 + 0x198);
  return;
}

