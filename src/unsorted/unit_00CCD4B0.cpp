// src/unsorted/unit_00CCD4B0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CCD4B0..00CCD840, 4 functions

#include "mgrr.h"

// 00CCD4B0  FUN_00ccd4b0  size=279  [run]
void __thiscall FUN_00ccd4b0(int param_1,int *param_2)

{
  undefined4 *puVar1;
  bool bVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  
  puVar3 = param_2;
  puVar1 = param_2 + 0x2d;
  if (param_2[0x2d] < 1) {
    return;
  }
  iVar5 = *(int *)(param_1 + 4);
  if (iVar5 == 0) {
    return;
  }
  piVar4 = (int *)FUN_00cb1bf0(*param_2,param_2[1]);
  if (piVar4 == (int *)0x0) {
    return;
  }
  if (*piVar4 == 0) {
    return;
  }
  iVar5 = *piVar4 + iVar5;
  if (iVar5 == 0) {
    return;
  }
  iVar6 = 0;
  bVar2 = true;
  if (0 < piVar4[1]) {
    piVar7 = param_2 + 0x32;
    param_2 = (int *)(iVar5 + 0xc);
    do {
      if (iVar6 <= (int)puVar3[0x30]) {
        *piVar7 = *piVar7 + 1;
      }
      if ((puVar3[0x30] == iVar6) &&
         ((((DAT_01bea060 & 0x1000) == 0 && (-1 < (char)DAT_01bea060)) || (puVar3[0x2f] == 0)))) {
        iVar5 = *piVar7;
        puVar3[0x31] = iVar5 / (int)puVar3[0x42];
        if (*param_2 <= iVar5 / (int)puVar3[0x42]) {
          iVar5 = puVar3[0x30] + 1;
          puVar3[0x31] = *param_2;
          puVar3[0x30] = iVar5;
          if (piVar4[1] <= iVar5) {
            puVar3[0x30] = piVar4[1];
          }
        }
      }
      if (*piVar7 <= (*param_2 + -1) * puVar3[0x42] + puVar3[0x43]) {
        bVar2 = false;
      }
      param_2 = param_2 + 6;
      iVar6 = iVar6 + 1;
      piVar7 = piVar7 + 1;
    } while (iVar6 < piVar4[1]);
    if (!bVar2) goto LAB_00ccd5b7;
  }
  *puVar1 = 0;
  FUN_00ca91c0();
LAB_00ccd5b7:
  puVar3[0x2e] = 1;
  return;
}

// 00CCD660  FUN_00ccd660  size=408  [run]
void __thiscall FUN_00ccd660(int param_1,undefined4 *param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  
  param_2[2] = 0;
  *param_2 = 0xffffffff;
  param_2[3] = 0;
  param_2[1] = 0xffffffff;
  param_2[4] = 0;
  param_2[9] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  *(undefined2 *)(param_2 + 0x10) = 0xffff;
  *(undefined2 *)((int)param_2 + 0x42) = 0;
  if ((short)param_4 != 0) {
    if ((short)param_4 == 0x20) {
      iVar1 = FUN_00cb1b60(param_3);
      if (iVar1 != 0) {
        *param_2 = 1;
        param_2[7] = *(undefined4 *)(iVar1 + 4);
        param_2[8] = *(undefined4 *)(iVar1 + 8);
      }
      iVar1 = *(int *)(param_1 + 4);
      iVar2 = FUN_00cb1ac0(param_3,0x2a);
      if (*(int *)(iVar1 + 0x10) == 0) {
        return;
      }
      iVar5 = *(int *)(iVar1 + 0x10) + iVar1;
      if (iVar5 == 0) {
        return;
      }
      if (iVar2 < 0) {
        return;
      }
      if (*(int *)(iVar1 + 0x14) <= iVar2) {
        return;
      }
      puVar3 = (undefined4 *)(iVar5 + iVar2 * 0x28);
      if (puVar3 == (undefined4 *)0x0) {
        return;
      }
      param_2[2] = puVar3[8];
      param_2[7] = puVar3[5];
      param_2[8] = puVar3[6];
    }
    else {
      iVar1 = *(int *)(param_1 + 4);
      iVar2 = FUN_00cb1ac0(param_3,param_4);
      if (iVar2 == -1) {
        FUN_00dd5650(&DAT_016b7b20,param_3 & 0xffff,(int)(char)param_4,param_4 & 0xffff);
        if ((char)param_4 == '\x01') {
          param_4 = 0x152;
        }
        else {
          param_4 = param_4 & 0xff;
        }
        iVar1 = *(int *)(param_1 + 4);
        iVar2 = FUN_00cb1ac0(param_3,param_4);
      }
      if (*(int *)(iVar1 + 0x10) == 0) {
        return;
      }
      iVar5 = *(int *)(iVar1 + 0x10) + iVar1;
      if (iVar5 == 0) {
        return;
      }
      if (iVar2 < 0) {
        return;
      }
      if (*(int *)(iVar1 + 0x14) <= iVar2) {
        return;
      }
      puVar3 = (undefined4 *)(iVar5 + iVar2 * 0x28);
      if (puVar3 == (undefined4 *)0x0) {
        return;
      }
      *param_2 = 5;
      param_2[2] = puVar3[8];
      param_2[7] = puVar3[5];
      param_2[8] = puVar3[6];
      param_2[0xc] = puVar3[1];
      param_2[0xd] = puVar3[2];
      param_2[0xe] = puVar3[3];
      param_2[0xf] = puVar3[4];
    }
    uVar4 = FUN_00fa0740(*puVar3);
    param_2[9] = uVar4;
  }
  return;
}

// 00CCD800  FUN_00ccd800  size=59  [run]
undefined4 __thiscall FUN_00ccd800(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if ((((*(int *)(param_1 + 4) != 0) && (-1 < (int)param_2)) && (param_2 < 0x1e)) &&
     ((*(int *)(&DAT_018b3c08 + param_2 * 8) != -1 && (*(int *)(&DAT_018b3c0c + param_2 * 8) != -1))
     )) {
    uVar1 = FUN_00cb1bf0(*(int *)(&DAT_018b3c08 + param_2 * 8),*(int *)(&DAT_018b3c0c + param_2 * 8)
                        );
    return uVar1;
  }
  return 0;
}

// 00CCD840  FUN_00ccd840  size=269  [run]
void FUN_00ccd840(undefined4 *param_1,undefined4 param_2)

{
  switch(param_2) {
  case 1:
    *param_1 = 0x3f800000;
    param_1[1] = 0x3e7cfcfd;
    param_1[2] = 0x3e9e9e9f;
    param_1[3] = 0x3f800000;
    return;
  case 2:
    *param_1 = 0;
    param_1[1] = 0x3f800000;
    param_1[3] = 0x3f800000;
    param_1[2] = 0;
    return;
  case 3:
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0x3f800000;
    param_1[3] = 0x3f800000;
    return;
  case 4:
    *param_1 = 0x3f4ccccd;
    param_1[1] = 0x3f4ccccd;
    param_1[2] = 0x3f4ccccd;
    param_1[3] = 0x3f800000;
    return;
  case 5:
    *param_1 = 0x3f19999a;
    param_1[1] = 0x3f19999a;
    param_1[2] = 0x3f19999a;
    param_1[3] = 0x3f800000;
    return;
  case 6:
    *param_1 = 0x3ecccccd;
    param_1[1] = 0x3ecccccd;
    param_1[2] = 0x3ecccccd;
    param_1[3] = 0x3f800000;
    return;
  case 7:
    *param_1 = 0x3e4ccccd;
    param_1[1] = 0x3e4ccccd;
    param_1[2] = 0x3e4ccccd;
    param_1[3] = 0x3f800000;
    return;
  case 8:
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0x3f800000;
    return;
  case 9:
    *param_1 = 0x3f800000;
    param_1[1] = 0x3f800000;
    param_1[2] = 0x3f800000;
    param_1[3] = 0x3f000000;
    return;
  default:
    *param_1 = 0x3f800000;
    param_1[1] = 0x3f800000;
    param_1[2] = 0x3f800000;
    param_1[3] = 0x3f800000;
    return;
  }
}

