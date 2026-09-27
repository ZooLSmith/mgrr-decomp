// src/unsorted/unit_00D17FF0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D17FF0..00D18320, 2 functions

#include "types.h"

// 00D17FF0  FUN_00d17ff0  size=801  [run]
void __fastcall FUN_00d17ff0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  float10 fVar7;
  char acStack_20 [32];
  
  iVar2 = *(int *)(param_1 + 0x148);
  if (iVar2 < 0) {
    puVar6 = (undefined *)0x0;
  }
  else if (iVar2 < 0x9c) {
    puVar6 = (&PTR_s_HUD_ITEM_NAME_S_0001_018b23d8)[iVar2 * 3];
  }
  else {
    puVar6 = (undefined *)0x0;
  }
  iVar2 = *(int *)(param_1 + 0xa8);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0xd8) < *(uint *)(iVar2 + 0x80))) &&
     (piVar1 = *(int **)(*(uint *)(param_1 + 0xd8) * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)),
     piVar1 != (int *)0x0)) {
    iVar2 = (**(code **)(*piVar1 + 8))();
    if (iVar2 == 3) {
      uVar3 = FUN_00e03ea0(puVar6);
      piVar1[0x2a] = -1;
      piVar1[0x2b] = 0;
      if ((piVar1[5] != 0) && (*(int *)(piVar1[5] + 4) != 0)) {
        iVar2 = FUN_00cb1cd0(uVar3);
        if (-1 < iVar2) {
          piVar1[0x2a] = iVar2;
          piVar1[0x2b] = 0;
          piVar1[0x2e] = 0;
        }
      }
    }
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0xb0) < *(uint *)(iVar2 + 0x80))) &&
     (piVar1 = *(int **)(*(uint *)(param_1 + 0xb0) * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)),
     piVar1 != (int *)0x0)) {
    iVar2 = (**(code **)(*piVar1 + 8))();
    if (iVar2 == 3) {
      uVar3 = FUN_00e03ea0(puVar6);
      piVar1[0x2a] = -1;
      piVar1[0x2b] = 0;
      if ((piVar1[5] != 0) && (*(int *)(piVar1[5] + 4) != 0)) {
        iVar2 = FUN_00cb1cd0(uVar3);
        if (-1 < iVar2) {
          piVar1[0x2a] = iVar2;
          piVar1[0x2b] = 0;
          piVar1[0x2e] = 0;
        }
      }
    }
  }
  iVar2 = *(int *)(param_1 + 0x148);
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (iVar2 < 0x9c) {
    iVar2 = FUN_00e03ea0((&PTR_s_hud_item_icon_0001_018b23dc)[iVar2 * 3]);
  }
  else {
    iVar2 = 0;
  }
  iVar4 = *(int *)(param_1 + 0x18);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0xbc) < *(uint *)(iVar4 + 0x80))) &&
     (piVar1 = *(int **)(*(uint *)(param_1 + 0xbc) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
     piVar1 != (int *)0x0)) {
    iVar4 = (**(code **)(*piVar1 + 8))();
    if (iVar4 == 1) {
      piVar1[9] = iVar2;
    }
  }
  uVar5 = DAT_01bea010 & 0x80000003;
  if ((int)uVar5 < 0) {
    uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
  }
  if (((uVar5 != 1) && (iVar2 = *(int *)(param_1 + 0x148), -1 < iVar2)) &&
     (((iVar2 < 0x9c &&
       ((*(int *)(&DAT_018b23e0 + iVar2 * 0xc) != 0 && (*(int *)(param_1 + 0x140) != -1)))) &&
      (*(int *)(param_1 + 0x144) != -1)))) {
    acStack_20[1] = '\0';
    acStack_20[2] = '\0';
    acStack_20[3] = '\0';
    acStack_20[4] = '\0';
    acStack_20[5] = '\0';
    acStack_20[6] = '\0';
    acStack_20[7] = '\0';
    acStack_20[8] = '\0';
    acStack_20[9] = '\0';
    acStack_20[10] = '\0';
    acStack_20[0xb] = '\0';
    acStack_20[0xc] = '\0';
    acStack_20[0xd] = '\0';
    acStack_20[0xe] = '\0';
    acStack_20[0xf] = 0;
    acStack_20[0x11] = '\0';
    acStack_20[0x12] = '\0';
    acStack_20[0x13] = '\0';
    acStack_20[0x14] = '\0';
    acStack_20[0x15] = '\0';
    acStack_20[0x16] = '\0';
    acStack_20[0x17] = '\0';
    acStack_20[0x18] = '\0';
    acStack_20[0x19] = '\0';
    acStack_20[0x1a] = '\0';
    acStack_20[0x1b] = '\0';
    acStack_20[0x1c] = '\0';
    acStack_20[0x1d] = '\0';
    acStack_20[0x1e] = '\0';
    acStack_20[0x1f] = 0;
    acStack_20[0] = '\0';
    acStack_20[0x10] = 0;
    _sprintf_s(acStack_20,0x10,"%d",*(int *)(param_1 + 0x144));
    FUN_00ca84a0(*(undefined4 *)(param_1 + 0x144),acStack_20,0x10);
    _sprintf_s(acStack_20 + 0x10,0x10,"/%s",acStack_20);
    FUN_00cce090(*(undefined4 *)(param_1 + 0xb8),acStack_20 + 0x10);
    fVar7 = (float10)FUN_00d03aa0(*(undefined4 *)(param_1 + 0xb8));
    _sprintf_s(acStack_20,0x10,"%d",*(undefined4 *)(param_1 + 0x140));
    if (9 < *(int *)(param_1 + 0x140)) {
      FUN_00ca84a0(*(int *)(param_1 + 0x140),acStack_20,0x10);
    }
    FUN_00cce090(*(undefined4 *)(param_1 + 0xc0),acStack_20);
    FUN_00cb28a0(*(undefined4 *)(param_1 + 0xc0),-(float)fVar7);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0xb4),1);
    return;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0xb4) < *(uint *)(iVar2 + 0x80))) &&
     (iVar2 = *(uint *)(param_1 + 0xb4) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
    *(undefined4 *)(iVar2 + 0x3b0) = 0;
  }
  return;
}

// 00D18320  FUN_00d18320  size=775  [run]
void __fastcall FUN_00d18320(int param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = DAT_01b77e9c;
  if (DAT_01dc1418 == '\0') {
    iVar4 = *(int *)(param_1 + 0x18);
    if ((((iVar4 != 0) && (*(uint *)(param_1 + 0x94) < *(uint *)(iVar4 + 0x80))) &&
        (piVar1 = *(int **)(*(uint *)(param_1 + 0x94) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
        piVar1 != (int *)0x0)) &&
       ((iVar4 = (**(code **)(*piVar1 + 8))(), iVar4 == 1 &&
        (iVar4 = FUN_00cf7390(piVar1 + 10,0x79c096fa), iVar4 == 0)))) {
      FUN_00dd5650(&DAT_016b9264,0x79c096fa);
    }
    iVar4 = *(int *)(param_1 + 0x18);
    if (((iVar4 != 0) && (*(uint *)(param_1 + 0x94) < *(uint *)(iVar4 + 0x80))) &&
       ((piVar1 = *(int **)(*(uint *)(param_1 + 0x94) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
        piVar1 != (int *)0x0 && (iVar4 = (**(code **)(*piVar1 + 8))(), iVar4 == 1)))) {
      piVar1[9] = 0xe7ba81f;
    }
    iVar4 = *(int *)(param_1 + 0x18);
    if ((((iVar4 != 0) && (*(uint *)(param_1 + 0x98) < *(uint *)(iVar4 + 0x80))) &&
        (piVar1 = *(int **)(*(uint *)(param_1 + 0x98) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
        piVar1 != (int *)0x0)) &&
       ((iVar4 = (**(code **)(*piVar1 + 8))(), iVar4 == 1 &&
        (iVar4 = FUN_00cf7390(piVar1 + 10,0x79c096fa), iVar4 == 0)))) {
      FUN_00dd5650(&DAT_016b9264,0x79c096fa);
    }
    iVar4 = *(int *)(param_1 + 0x18);
    if (((iVar4 != 0) && (*(uint *)(param_1 + 0x98) < *(uint *)(iVar4 + 0x80))) &&
       ((piVar1 = *(int **)(*(uint *)(param_1 + 0x98) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
        piVar1 != (int *)0x0 && (iVar4 = (**(code **)(*piVar1 + 8))(), iVar4 == 1)))) {
      piVar1[9] = 0xe7ba81f;
    }
  }
  else {
    uVar3 = DAT_01b77e9c & 0x80000000;
    if (uVar3 == 0) {
      iVar4 = FUN_00cc6e50(DAT_01b77e9c);
    }
    else {
      iVar4 = FUN_00caa070();
    }
    iVar5 = *(int *)(param_1 + 0x18);
    if ((((iVar5 != 0) && (*(uint *)(param_1 + 0x94) < *(uint *)(iVar5 + 0x80))) &&
        (piVar1 = *(int **)(*(uint *)(param_1 + 0x94) * 0x400 + 0x3f0 + *(int *)(iVar5 + 0x7c)),
        piVar1 != (int *)0x0)) &&
       ((iVar5 = (**(code **)(*piVar1 + 8))(), iVar5 == 1 &&
        (iVar5 = FUN_00cf7390(piVar1 + 10,0x6709e058), iVar5 == 0)))) {
      FUN_00dd5650(&DAT_016b9264,0x6709e058);
    }
    iVar5 = *(int *)(param_1 + 0x18);
    if (((iVar5 != 0) && (*(uint *)(param_1 + 0x94) < *(uint *)(iVar5 + 0x80))) &&
       ((piVar1 = *(int **)(*(uint *)(param_1 + 0x94) * 0x400 + 0x3f0 + *(int *)(iVar5 + 0x7c)),
        piVar1 != (int *)0x0 && (iVar5 = (**(code **)(*piVar1 + 8))(), iVar5 == 1)))) {
      piVar1[9] = iVar4;
    }
    iVar5 = *(int *)(param_1 + 0x18);
    if ((((iVar5 != 0) && (*(uint *)(param_1 + 0x98) < *(uint *)(iVar5 + 0x80))) &&
        (piVar1 = *(int **)(*(uint *)(param_1 + 0x98) * 0x400 + 0x3f0 + *(int *)(iVar5 + 0x7c)),
        piVar1 != (int *)0x0)) &&
       ((iVar5 = (**(code **)(*piVar1 + 8))(), iVar5 == 1 &&
        (iVar5 = FUN_00cf7390(piVar1 + 10,0x6709e058), iVar5 == 0)))) {
      FUN_00dd5650(&DAT_016b9264,0x6709e058);
    }
    iVar5 = *(int *)(param_1 + 0x18);
    if (((iVar5 != 0) && (*(uint *)(param_1 + 0x98) < *(uint *)(iVar5 + 0x80))) &&
       ((piVar1 = *(int **)(*(uint *)(param_1 + 0x98) * 0x400 + 0x3f0 + *(int *)(iVar5 + 0x7c)),
        piVar1 != (int *)0x0 && (iVar5 = (**(code **)(*piVar1 + 8))(), iVar5 == 1)))) {
      piVar1[9] = iVar4;
    }
    if (uVar3 == 0) {
      iVar4 = FUN_00ca9ec0(uVar2);
    }
    else {
      iVar4 = FUN_00caa0b0();
    }
    if (iVar4 != 1) {
      if (uVar3 == 0) {
        iVar4 = FUN_00ca9ec0(uVar2);
      }
      else {
        iVar4 = FUN_00caa0b0();
      }
      if (iVar4 == 2) {
        if (*(int *)(param_1 + 0x18) == 0) {
          return;
        }
        FUN_00cdeec0(3);
        return;
      }
      if (*(int *)(param_1 + 0x18) == 0) {
        return;
      }
      FUN_00cdeec0(4);
      return;
    }
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_00cdeec0(2);
  }
  return;
}

