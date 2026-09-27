// src/unsorted/unit_009DC560.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009DC560..009DC650, 2 functions

#include "types.h"

// 009DC560  FUN_009dc560  size=208  [run]
int __thiscall FUN_009dc560(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint extraout_ECX;
  uint uVar3;
  
  iVar1 = FUN_009d1e40(*(undefined4 *)(param_2 + 0x44));
  if ((iVar1 != 0) && (param_1[5] != 0)) {
    return param_1[5];
  }
  uVar3 = extraout_ECX & 0xf0000;
  if ((uVar3 == 0xf0000) && (param_1[6] != 0)) {
    return param_1[6];
  }
  iVar1 = 0;
  iVar2 = FUN_009f9500(extraout_ECX);
  if ((((iVar2 == 0) && (uVar3 != 0x90000)) && (uVar3 != 0xd0000)) &&
     (((uVar3 != 0xe0000 && (uVar3 != 0xf0000)) && (*(int *)(param_2 + 0x44) != 0x700000)))) {
    iVar2 = FUN_009f9350(*(int *)(param_2 + 0x44));
    if (iVar2 == 0) {
      iVar2 = FUN_009f93b0(*(undefined4 *)(param_2 + 0x44));
      if (iVar2 == 0) {
        iVar2 = FUN_009f9400(*(undefined4 *)(param_2 + 0x44));
        if (iVar2 != 0) {
          iVar1 = param_1[4];
        }
      }
      else {
        iVar1 = param_1[2];
      }
    }
    else {
      iVar1 = param_1[1];
    }
  }
  else {
    iVar1 = param_1[3];
  }
  if (iVar1 == 0) {
    iVar1 = *param_1;
  }
  return iVar1;
}

// 009DC650  FUN_009dc650  size=597  [run]
undefined4 __thiscall FUN_009dc650(int *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  
  uVar3 = param_3;
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"CallId");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xe8))(iVar1,param_1 + 3);
  }
  pcVar6 = "RatingCallId";
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"RatingCallId");
  if (iVar1 == -1) {
    param_1[4] = param_1[3];
  }
  else {
    (**(code **)(*param_2 + 0xe8))(iVar1,param_1 + 4);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"FrameCallBan");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd4))(iVar1,param_1 + 5);
  }
  iVar1 = (**(code **)(*param_2 + 0x18))(param_3,"AttrAll");
  if (iVar1 != -1) {
    puVar2 = (undefined4 *)FUN_00dd3500(0x28,&DAT_01b7bd48);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      puVar2[8] = 0;
    }
    param_1[1] = (int)puVar2;
    if (puVar2 == (undefined4 *)0x0) goto LAB_009dc732;
    iVar1 = (**(code **)(*param_2 + 0x18))(iVar1,"EffectAttrCallHitCategoryWork");
    if (iVar1 == -1) {
      FUN_00dd5650(&DAT_0165a360,param_1[3]);
      return 0;
    }
    puVar2 = (undefined4 *)param_1[1];
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    EffectAttrCallHitCategoryWork::readXml(param_2,iVar1);
  }
  param_1[2] = 0;
  uVar3 = (**(code **)(*param_2 + 0x18))(uVar3,"AttrList");
  uVar4 = (**(code **)(*param_2 + 0x10))(uVar3);
  param_1[2] = uVar4;
  if (uVar4 != 0) {
    iVar1 = FUN_00dd3580(-(uint)((int)((ulonglong)uVar4 * 0x28 >> 0x20) != 0) |
                         (uint)((ulonglong)uVar4 * 0x28),&DAT_01b7bd48);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar5 = uVar4 - 1;
      if (-1 < iVar5) {
        puVar2 = (undefined4 *)(iVar1 + 0x20);
        do {
          puVar2[-8] = 0;
          puVar2[-7] = 0;
          puVar2[-6] = 0;
          puVar2[-5] = 0;
          puVar2[-4] = 0;
          puVar2[-3] = 0;
          puVar2[-2] = 0;
          puVar2[-1] = 0;
          *puVar2 = 0;
          puVar2 = puVar2 + 10;
          iVar5 = iVar5 + -1;
        } while (-1 < iVar5);
      }
    }
    *param_1 = iVar1;
    if (iVar1 == 0) {
LAB_009dc732:
      FUN_00dd5650(&DAT_01658f3c);
      FUN_009d1ad0();
      return 0;
    }
    uVar4 = 0;
    if (param_1[2] != 0) {
      iVar1 = 0;
      do {
        puVar2 = (undefined4 *)(*param_1 + iVar1);
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[6] = 0;
        puVar2[7] = 0;
        puVar2[8] = 0;
        iVar5 = (**(code **)(*param_2 + 0x14))(pcVar6,uVar4);
        if ((iVar5 != -1) &&
           (iVar5 = EffectAttrCallHitCategoryWork::readXml(param_2,iVar5), iVar5 == 0)) {
          return 0;
        }
        uVar4 = uVar4 + 1;
        iVar1 = iVar1 + 0x28;
      } while (uVar4 < (uint)param_1[2]);
    }
  }
  return 1;
}

