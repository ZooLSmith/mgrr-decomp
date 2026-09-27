// src/unsorted/unit_00D2FCB0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D2FCB0..00D2FF80, 3 functions

#include "types.h"

// 00D2FCB0  FUN_00d2fcb0  size=72  [run]
int FUN_00d2fcb0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00dd3500(0x170,&DAT_01b7be50);
  if (iVar1 != 0) {
    iVar1 = cGrenadeGuideLineParts::cGrenadeGuideLineParts();
    if (iVar1 != 0) {
      *(char **)(iVar1 + 0xc) = "cGrenadeGuideLineParts";
      *(undefined4 *)(iVar1 + 8) = 5;
      uVar2 = FUN_00d29960(0x22);
      *(undefined4 *)(iVar1 + 0x14) = uVar2;
    }
    return iVar1;
  }
  return 0;
}

// 00D2FD00  FUN_00d2fd00  size=551  [run]
void __fastcall FUN_00d2fd00(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  if (DAT_01dc0df8 == 0) {
    if (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 4))(1);
      *(undefined4 *)(param_1 + 4) = 0;
    }
  }
  else {
    if (*(int *)(param_1 + 4) != 0) goto LAB_00d2fd3b;
    uVar3 = FUN_00d2fcb0();
    *(undefined4 *)(param_1 + 4) = uVar3;
  }
  if (*(int *)(param_1 + 4) == 0) {
    DAT_01dc0df8 = 0;
    return;
  }
LAB_00d2fd3b:
  puVar4 = &DAT_01dc4524;
  do {
    uVar3 = *puVar4;
    uVar1 = puVar4[1];
    puVar5 = (undefined4 *)(*(int *)(param_1 + 4) + -0x1dc4504 + (int)puVar4);
    *puVar5 = puVar4[-1];
    puVar5[1] = uVar3;
    puVar5[2] = uVar1;
    puVar5[3] = 0;
    uVar3 = puVar4[4];
    puVar5 = (undefined4 *)(*(int *)(param_1 + 4) + -0x1dc44f4 + (int)puVar4);
    uVar1 = puVar4[5];
    *puVar5 = puVar4[3];
    puVar5[1] = uVar3;
    puVar5[2] = uVar1;
    puVar5[3] = 0;
    uVar3 = puVar4[8];
    puVar5 = (undefined4 *)(*(int *)(param_1 + 4) + -0x1dc44e4 + (int)puVar4);
    uVar1 = puVar4[9];
    *puVar5 = puVar4[7];
    puVar5[1] = uVar3;
    puVar5[2] = uVar1;
    puVar5[3] = 0;
    uVar3 = puVar4[0xc];
    uVar1 = puVar4[0xd];
    puVar5 = (undefined4 *)(*(int *)(param_1 + 4) + -0x1dc44d4 + (int)puVar4);
    *puVar5 = puVar4[0xb];
    puVar5[1] = uVar3;
    puVar5[2] = uVar1;
    puVar5[3] = 0;
    uVar3 = puVar4[0x10];
    uVar1 = puVar4[0x11];
    puVar5 = (undefined4 *)(*(int *)(param_1 + 4) + -0x1dc44c4 + (int)puVar4);
    *puVar5 = puVar4[0xf];
    puVar5[1] = uVar3;
    puVar5[2] = uVar1;
    puVar5[3] = 0;
    uVar3 = puVar4[0x14];
    uVar1 = puVar4[0x15];
    puVar5 = (undefined4 *)(*(int *)(param_1 + 4) + -0x1dc44b4 + (int)puVar4);
    *puVar5 = puVar4[0x13];
    puVar5[1] = uVar3;
    puVar5[2] = uVar1;
    puVar5[3] = 0;
    uVar3 = puVar4[0x18];
    uVar1 = puVar4[0x19];
    puVar5 = (undefined4 *)(*(int *)(param_1 + 4) + -0x1dc44a4 + (int)puVar4);
    *puVar5 = puVar4[0x17];
    puVar5[1] = uVar3;
    puVar5[2] = uVar1;
    puVar5[3] = 0;
    iVar2 = *(int *)(param_1 + 4);
    uVar3 = puVar4[0x1c];
    uVar1 = puVar4[0x1d];
    *(undefined4 *)(iVar2 + -0x1dc4494 + (int)puVar4) = puVar4[0x1b];
    *(undefined4 *)((int)puVar4 + iVar2 + -0x1dc4490) = uVar3;
    *(undefined4 *)((int)puVar4 + iVar2 + -0x1dc448c) = uVar1;
    *(undefined4 *)((int)puVar4 + iVar2 + -0x1dc4488) = 0;
    uVar3 = puVar4[0x20];
    uVar1 = puVar4[0x21];
    puVar5 = (undefined4 *)(*(int *)(param_1 + 4) + -0x1dc4484 + (int)puVar4);
    *puVar5 = puVar4[0x1f];
    puVar5[1] = uVar3;
    puVar5[2] = uVar1;
    puVar5[3] = 0;
    puVar5 = puVar4 + 0x23;
    uVar3 = puVar4[0x24];
    uVar1 = puVar4[0x25];
    puVar6 = (undefined4 *)(*(int *)(param_1 + 4) + -0x1dc4474 + (int)puVar4);
    puVar4 = puVar4 + 0x28;
    *puVar6 = *puVar5;
    puVar6[1] = uVar3;
    puVar6[2] = uVar1;
    puVar6[3] = 0;
  } while ((int)puVar4 < 0x1dc4664);
  (**(code **)(**(int **)(param_1 + 4) + 4))();
  DAT_01dc0df8 = 0;
  return;
}

// 00D2FF80  FUN_00d2ff80  size=329  [run]
void __fastcall FUN_00d2ff80(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  uVar5 = 0;
  do {
    param_1 = param_1 + 1;
    if (*(int *)((int)&DAT_01dbffb0 + uVar5) == 0) {
      FUN_00a7c950();
    }
    iVar1 = FUN_00a81330();
    if (iVar1 == 0) {
      if (*param_1 != 0) {
        *(undefined4 *)(*param_1 + 0x28) = 1;
        goto LAB_00d30062;
      }
    }
    else {
      if (*param_1 == 0) {
        iVar1 = FUN_00dd3500(0x60,&DAT_01b7be50);
        if (iVar1 == 0) {
          iVar1 = 0;
        }
        else {
          iVar1 = cGrenadeMarkParts::cGrenadeMarkParts();
          if (iVar1 != 0) {
            *(char **)(iVar1 + 0xc) = "cGrenadeMarkParts";
            *(undefined4 *)(iVar1 + 8) = 5;
            uVar2 = FUN_00d29960(0x23);
            *(undefined4 *)(iVar1 + 0x14) = uVar2;
          }
        }
        *param_1 = iVar1;
      }
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        iVar1 = *param_1;
        piVar3 = (int *)FUN_00a7c8a0();
        puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x68))();
        *(undefined4 *)(iVar1 + 0x40) = *puVar4;
        *(undefined4 *)(iVar1 + 0x44) = puVar4[1];
        *(undefined4 *)(iVar1 + 0x48) = puVar4[2];
        *(undefined4 *)(iVar1 + 0x4c) = puVar4[3];
        uVar2 = FUN_00a7c7f0();
        FUN_00a7c960(uVar2);
        *(undefined4 *)(iVar1 + 0x24) = 1;
      }
LAB_00d30062:
      if ((int *)*param_1 != (int *)0x0) {
        (**(code **)(*(int *)*param_1 + 4))();
        puVar4 = (undefined4 *)*param_1;
        if ((puVar4[0xd] == 0) && (puVar4 != (undefined4 *)0x0)) {
          (**(code **)*puVar4)(1);
          *param_1 = 0;
        }
      }
    }
    uVar5 = uVar5 + 4;
    if (0x7f < uVar5) {
      uVar5 = 0;
      do {
        FUN_00a7c960(&DAT_01dc4660 + uVar5);
        uVar5 = uVar5 + 4;
      } while (uVar5 < 0x80);
      return;
    }
  } while( true );
}

