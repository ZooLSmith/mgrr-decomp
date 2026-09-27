// src/unsorted/unit_00D00C30.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D00C30..00D01220, 3 functions

#include "mgrr.h"

// 00D00C30  FUN_00d00c30  size=494  [run]
void __fastcall FUN_00d00c30(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 local_20;
  undefined4 local_1c;
  
  switch(*(undefined4 *)(param_1 + 0x34)) {
  case 0:
    if ((*(int *)(param_1 + 0x44) == -1) || (*(int *)(param_1 + 0x44) != 3)) {
      *(undefined4 *)(param_1 + 0x34) = 5;
      break;
    }
    if (*(int *)(param_1 + 0x60) == 0) {
      if (*(int *)(param_1 + 100) == 0) {
        FUN_00e5e080("core_se_btl_bmi_error",param_1 + 0x70,0,0xffffffff,0);
        uVar5 = *(undefined4 *)(param_1 + 0x1c);
        pcVar6 = "HUD_PIECE_23";
      }
      else {
        FUN_00e5e080("core_se_btl_bmi_error",param_1 + 0x70,0,0xffffffff,0);
        uVar5 = *(undefined4 *)(param_1 + 0x1c);
        pcVar6 = "HUD_PIECE_47";
      }
    }
    else {
      uVar5 = *(undefined4 *)(param_1 + 0x1c);
      pcVar6 = "HUD_PIECE_30";
    }
    FUN_00cf9770(uVar5,pcVar6,0,0xffffffff);
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  case 1:
    if (*(int *)(param_1 + 0x18) != 0) {
      FUN_00cdeec0(0);
    }
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
switchD_00d00c4c_caseD_2:
    if ((*(int *)(param_1 + 0x18) != 0) && (iVar4 = FUN_00cdf400(0), iVar4 != 0)) {
      FUN_00cdeec0(1);
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cded00(*(undefined4 *)(param_1 + 0x20),3);
      }
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cded00(*(undefined4 *)(param_1 + 0x24),4);
      }
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cded00(*(undefined4 *)(param_1 + 0x28),5);
      }
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
switchD_00d00c4c_caseD_3:
      if (*(int *)(param_1 + 0x44) != 3) {
        if (*(int *)(param_1 + 0x18) != 0) {
          FUN_00cdeec0(2);
        }
        *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
      }
      *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
    }
    break;
  case 2:
    goto switchD_00d00c4c_caseD_2;
  case 3:
    goto switchD_00d00c4c_caseD_3;
  case 4:
    if ((*(int *)(param_1 + 0x18) == 0) || (iVar4 = FUN_00cdf400(2), iVar4 == 0)) break;
    *(undefined4 *)(param_1 + 0x34) = 5;
  case 5:
    *(undefined4 *)(param_1 + 0x68) = 1;
    *(undefined4 *)(param_1 + 0x34) = 0;
    break;
  default:
    break;
  }
  iVar4 = FUN_00d9fa80(&local_20,(float *)(param_1 + 0x50));
  if (iVar4 == 0) {
    if (*(int *)(param_1 + 0x14) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 0;
    }
  }
  else {
    fVar1 = *(float *)(param_1 + 0x50) - DAT_01bea380;
    fVar3 = *(float *)(param_1 + 0x54) - DAT_01bea384;
    fVar2 = *(float *)(param_1 + 0x58) - DAT_01bea388;
    FUN_00cba4c0(local_20,local_1c,SQRT(fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1));
    if (*(int *)(param_1 + 0x14) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = *(undefined4 *)(param_1 + 0x30);
      *(undefined4 *)(param_1 + 0x6c) = 0;
      *(undefined4 *)(param_1 + 0x30) = 0;
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}

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

