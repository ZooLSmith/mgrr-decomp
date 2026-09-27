// src/unsorted/unit_00D00E40.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D00E40..00D01220, 2 functions

#include "mgrr.h"

// 00D00E40  FUN_00d00e40  size=988  [run]
void __fastcall FUN_00d00e40(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined *puVar5;
  uint uVar6;
  char acStack_10 [16];
  
  iVar2 = *(int *)(param_1 + 0x104);
  if (iVar2 < 0) {
    puVar5 = (undefined *)0x0;
  }
  else if (iVar2 < 0x9c) {
    puVar5 = (&PTR_s_HUD_ITEM_NAME_S_0001_018b23d8)[iVar2 * 3];
  }
  else {
    puVar5 = (undefined *)0x0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (*(uint *)(param_1 + 0x90) < *(uint *)(iVar2 + 0x80))) &&
     (piVar1 = *(int **)(*(uint *)(param_1 + 0x90) * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)),
     piVar1 != (int *)0x0)) {
    iVar2 = (**(code **)(*piVar1 + 8))();
    if (iVar2 == 3) {
      uVar3 = FUN_00e03ea0(puVar5);
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
  iVar2 = *(int *)(param_1 + 0x104);
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
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0x98) < *(uint *)(iVar4 + 0x80))) &&
     (piVar1 = *(int **)(*(uint *)(param_1 + 0x98) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
     piVar1 != (int *)0x0)) {
    iVar4 = (**(code **)(*piVar1 + 8))();
    if (iVar4 == 1) {
      piVar1[9] = iVar2;
    }
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x104) == 0x74) {
    if (((iVar2 != 0) && (*(uint *)(param_1 + 0x94) < *(uint *)(iVar2 + 0x80))) &&
       (iVar2 = *(uint *)(param_1 + 0x94) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
      *(undefined4 *)(iVar2 + 0x3b0) = 1;
    }
    if (*(int *)(param_1 + 0x138) != 0) {
      FUN_00cdeec0(1);
    }
    if (*(int *)(param_1 + 0x138) == 0) {
      uVar6 = 0xffffffff;
    }
    else {
      uVar6 = (uint)*(ushort *)(*(int *)(param_1 + 0x138) + 0x8c);
    }
    iVar4 = FUN_00e03ea0("sign_20");
    iVar2 = *(int *)(param_1 + 0x138);
    if (((iVar2 != 0) && (uVar6 < *(uint *)(iVar2 + 0x80))) &&
       (piVar1 = *(int **)(*(int *)(iVar2 + 0x7c) + 0x3f0 + uVar6 * 0x400), piVar1 != (int *)0x0)) {
      iVar2 = (**(code **)(*piVar1 + 8))();
      if (iVar2 == 1) {
        piVar1[9] = iVar4;
      }
    }
  }
  else {
    uVar6 = *(uint *)(param_1 + 0x94);
    if (*(int *)(param_1 + 0x104) == 0x73) {
      if (((iVar2 != 0) && (uVar6 < *(uint *)(iVar2 + 0x80))) &&
         (iVar2 = uVar6 * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
        *(undefined4 *)(iVar2 + 0x3b0) = 1;
      }
      if (*(int *)(param_1 + 0x138) != 0) {
        FUN_00cdeec0(0);
      }
      if (*(int *)(param_1 + 0x138) == 0) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = (uint)*(ushort *)(*(int *)(param_1 + 0x138) + 0x8c);
      }
      iVar4 = FUN_00e03ea0("sign_21");
      iVar2 = *(int *)(param_1 + 0x138);
      if (((iVar2 != 0) && (uVar6 < *(uint *)(iVar2 + 0x80))) &&
         (piVar1 = *(int **)(uVar6 * 0x400 + 0x3f0 + *(int *)(iVar2 + 0x7c)), piVar1 != (int *)0x0))
      {
        iVar2 = (**(code **)(*piVar1 + 8))();
        if (iVar2 == 1) {
          piVar1[9] = iVar4;
        }
      }
    }
    else if (((iVar2 != 0) && (uVar6 < *(uint *)(iVar2 + 0x80))) &&
            (iVar2 = uVar6 * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
      *(undefined4 *)(iVar2 + 0x3b0) = 0;
    }
  }
  if (*(int *)(param_1 + 0x108) == 0) {
    iVar2 = *(int *)(param_1 + 0x104);
    if (((iVar2 < 0) || (0x9b < iVar2)) ||
       ((*(int *)(&DAT_018b23e0 + iVar2 * 0xc) == 0 || (*(int *)(param_1 + 0x100) == -1)))) {
      iVar2 = *(int *)(param_1 + 0x18);
      if (((iVar2 != 0) && (*(uint *)(param_1 + 0x9c) < *(uint *)(iVar2 + 0x80))) &&
         (iVar2 = *(uint *)(param_1 + 0x9c) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
        *(undefined4 *)(iVar2 + 0x3b0) = 0;
      }
    }
    else {
      acStack_10[0] = '\0';
      acStack_10[1] = '\0';
      acStack_10[2] = '\0';
      acStack_10[3] = '\0';
      acStack_10[4] = '\0';
      acStack_10[5] = '\0';
      acStack_10[6] = '\0';
      acStack_10[7] = '\0';
      acStack_10[8] = '\0';
      acStack_10[9] = '\0';
      acStack_10[10] = '\0';
      acStack_10[0xb] = '\0';
      acStack_10[0xc] = '\0';
      acStack_10[0xd] = '\0';
      acStack_10[0xe] = '\0';
      acStack_10[0xf] = 0;
      _sprintf_s(acStack_10,0x10,"%d",*(int *)(param_1 + 0x100));
      FUN_00cce090(*(undefined4 *)(param_1 + 0x9c),acStack_10);
      iVar2 = *(int *)(param_1 + 0x18);
      if (((iVar2 != 0) && (*(uint *)(param_1 + 0x9c) < *(uint *)(iVar2 + 0x80))) &&
         (iVar2 = *(uint *)(param_1 + 0x9c) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
        *(undefined4 *)(iVar2 + 0x3b0) = 1;
      }
    }
    iVar2 = *(int *)(param_1 + 0x18);
    if (((iVar2 != 0) && (*(uint *)(param_1 + 0xa0) < *(uint *)(iVar2 + 0x80))) &&
       (iVar2 = *(uint *)(param_1 + 0xa0) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
      *(undefined4 *)(iVar2 + 0x3b0) = 0;
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x18);
    if (((iVar2 != 0) && (*(uint *)(param_1 + 0x9c) < *(uint *)(iVar2 + 0x80))) &&
       (iVar2 = *(uint *)(param_1 + 0x9c) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
      *(undefined4 *)(iVar2 + 0x3b0) = 0;
    }
    iVar2 = *(int *)(param_1 + 0x18);
    if (((iVar2 != 0) && (*(uint *)(param_1 + 0xa0) < *(uint *)(iVar2 + 0x80))) &&
       (iVar2 = *(uint *)(param_1 + 0xa0) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
      *(undefined4 *)(iVar2 + 0x3b0) = 1;
      *(undefined4 *)(param_1 + 0x10c) = 0;
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x10c) = 0;
  return;
}

// 00D01220  FUN_00d01220  size=560  [run]
void __thiscall FUN_00d01220(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar4 = *(int *)(param_1 + 0x18);
  iVar1 = *(int *)(param_1 + 0x160 + param_2 * 4);
  uVar2 = *(uint *)(param_1 + 0x90 + param_4 * 4);
  if (((iVar4 != 0) && (uVar2 < *(uint *)(iVar4 + 0x80))) &&
     (iVar4 = uVar2 * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
    *(undefined4 *)(iVar4 + 0x3b0) = 0;
  }
  iVar1 = iVar1 * 0xc;
  iVar4 = *(int *)(&DAT_018b5624 + iVar1);
  if (iVar4 == -1) {
    uVar2 = *(uint *)(param_1 + 0x90 + param_3 * 4);
    iVar4 = *(int *)(param_1 + 0x18);
    if (((iVar4 != 0) && (uVar2 < *(uint *)(iVar4 + 0x80))) &&
       (iVar4 = uVar2 * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
      *(undefined4 *)(iVar4 + 0x3b0) = 0;
    }
    iVar4 = *(int *)(param_1 + 0x18);
    uVar2 = *(uint *)(param_1 + 0x90 + param_4 * 4);
    param_3 = param_4;
    if (((iVar4 != 0) && (uVar2 < *(uint *)(iVar4 + 0x80))) &&
       (piVar3 = *(int **)(uVar2 * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)), piVar3 != (int *)0x0)) {
      iVar4 = (**(code **)(*piVar3 + 8))();
      if (iVar4 == 3) {
        uVar6 = FUN_00e03ea0("HUD_ITEM_NAME_ETC_00");
        piVar3[0x2a] = -1;
        piVar3[0x2b] = 1;
        if ((piVar3[5] != 0) && (*(int *)(piVar3[5] + 4) != 0)) {
          iVar4 = FUN_00cb1cd0(uVar6);
          if (-1 < iVar4) {
            piVar3[0x2a] = iVar4;
            piVar3[0x2b] = 1;
            piVar3[0x2e] = 0;
          }
        }
      }
    }
  }
  else {
    iVar5 = *(int *)(param_1 + 0x18);
    uVar2 = *(uint *)(param_1 + 0x90 + param_3 * 4);
    if (((iVar5 != 0) && (uVar2 < *(uint *)(iVar5 + 0x80))) &&
       (piVar3 = *(int **)(uVar2 * 0x400 + 0x3f0 + *(int *)(iVar5 + 0x7c)), piVar3 != (int *)0x0)) {
      iVar5 = (**(code **)(*piVar3 + 8))();
      if (iVar5 == 1) {
        piVar3[9] = iVar4;
      }
    }
  }
  iVar4 = *(int *)(param_1 + 0x18);
  uVar2 = *(uint *)(param_1 + 0x90 + param_3 * 4);
  if (((iVar4 != 0) && (uVar2 < *(uint *)(iVar4 + 0x80))) &&
     (iVar4 = uVar2 * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
    *(undefined4 *)(iVar4 + 0x3b0) = 1;
  }
  if (*(int *)(&DAT_018b5628 + iVar1) == 0) {
    uVar2 = *(uint *)(param_1 + 0x90 + param_5 * 4);
    iVar4 = *(int *)(param_1 + 0x18);
    if (((iVar4 != 0) && (uVar2 < *(uint *)(iVar4 + 0x80))) &&
       (iVar4 = uVar2 * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
      *(undefined4 *)(iVar4 + 0x3b0) = 0;
    }
  }
  else {
    iVar4 = *(int *)(param_1 + 0x18);
    uVar2 = *(uint *)(param_1 + 0x90 + param_5 * 4);
    if (((iVar4 != 0) && (uVar2 < *(uint *)(iVar4 + 0x80))) &&
       (piVar3 = *(int **)(*(int *)(iVar4 + 0x7c) + 0x3f0 + uVar2 * 0x400), piVar3 != (int *)0x0)) {
      iVar4 = (**(code **)(*piVar3 + 8))();
      if (iVar4 == 4) {
        FUN_00cb3cc0(piVar3,&DAT_016b964c);
      }
    }
    uVar2 = *(uint *)(param_1 + 0x90 + param_5 * 4);
    iVar4 = *(int *)(param_1 + 0x18);
    if (((iVar4 != 0) && (uVar2 < *(uint *)(iVar4 + 0x80))) &&
       (iVar4 = uVar2 * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
      *(undefined4 *)(iVar4 + 0x3b0) = 1;
      return;
    }
  }
  return;
}

