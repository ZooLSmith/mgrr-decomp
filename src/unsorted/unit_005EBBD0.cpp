// src/unsorted/unit_005EBBD0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005EBBD0..005EBBD0, 1 functions

#include "types.h"

// 005EBBD0  FUN_005ebbd0  size=585  [run]
void __thiscall FUN_005ebbd0(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined *puVar7;
  undefined1 auStack_94 [80];
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  
  param_1[0x2a0] = param_2;
  if (param_2 == 0) {
    return;
  }
  (**(code **)(*param_1 + 0x28))(*(undefined4 *)(param_2 + 4));
  iVar1 = FUN_00d46780();
  if (((iVar1 != 0) || (iVar1 = FUN_00d467a0(), iVar1 != 0)) && (iVar1 = FUN_0094a390(), iVar1 != 0)
     ) {
    FUN_00aa92c0(5);
  }
  iVar1 = FUN_0094a210();
  if (iVar1 != 0) {
    FUN_0040b190();
    puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x68))();
    uStack_44 = *puVar2;
    uStack_40 = puVar2[1];
    uStack_3c = puVar2[2];
    puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x84))();
    uStack_38 = *puVar2;
    uStack_34 = puVar2[1];
    uStack_30 = puVar2[2];
    iVar1 = FUN_00d46780();
    if (iVar1 == 0) {
      iVar1 = FUN_00d467a0();
      if (iVar1 == 0) {
        uVar6 = 0x71001;
        pcVar5 = "TreasureBoxLock";
      }
      else {
        uVar6 = 0x71005;
        pcVar5 = "TreasureBoxLockDlc3";
      }
    }
    else {
      uVar6 = 0x71003;
      pcVar5 = "TreasureBoxLockDlc2";
    }
    iVar1 = FUN_00a82090(pcVar5,uVar6,auStack_94);
    iVar3 = FUN_00d46780();
    if (((iVar3 != 0) || (iVar3 = FUN_00d467a0(), iVar3 != 0)) &&
       ((iVar3 = FUN_0094a390(), iVar3 != 0 && (iVar1 != 0)))) {
      uVar6 = 5;
      FUN_00a7c8a0(5);
      FUN_00aa92c0(uVar6);
    }
    piVar4 = (int *)FUN_00a7c8a0();
    if (piVar4 != (int *)0x0) {
      puVar7 = &DAT_01b353b8;
      (**(code **)(*piVar4 + 4))(&DAT_01b353b8);
      iVar3 = FUN_00dd6d80(puVar7);
      if (iVar3 != 0) {
        piVar4[0x29c] = param_1[0x13c];
      }
    }
    param_1[0x29e] = iVar1;
    iVar1 = FUN_0094a240();
    if (iVar1 != 0) {
      uVar6 = 0;
      FUN_00a7c8a0(0);
      FUN_00a0ba60(uVar6);
    }
    iVar1 = FUN_0094a260();
    if (iVar1 != 0) {
      uVar6 = 0;
      FUN_00a7c8a0(0);
      FUN_00a13340(uVar6);
    }
    iVar1 = FUN_00a7c8a0();
    *(uint *)(iVar1 + 0x364) = *(uint *)(iVar1 + 0x364) | 0x100000;
    FUN_00aa92c0(2);
    if ((0 < (short)param_1[0xc9]) && (iVar1 = param_1[200], iVar1 != 0)) {
      *(undefined4 *)(iVar1 + 0x1c) = 0x3f800000;
      *(undefined4 *)(iVar1 + 0x10) = 0x3f48c8c9;
      *(undefined4 *)(iVar1 + 0x14) = 0x3f48c8c9;
      *(undefined4 *)(iVar1 + 0x18) = 0x3f48c8c9;
      return;
    }
    return;
  }
  if ((short)param_1[0xc9] < 1) {
    return;
  }
  iVar1 = param_1[200];
  if (iVar1 == 0) {
    return;
  }
  *(undefined4 *)(iVar1 + 0x1c) = 0x3f800000;
  *(undefined4 *)(iVar1 + 0x10) = 0x3f800000;
  *(undefined4 *)(iVar1 + 0x14) = 0x3ec8c8c9;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  return;
}

