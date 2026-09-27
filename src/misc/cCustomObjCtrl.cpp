// src/misc/cCustomObjCtrl.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CCDA90..00D1F8F0, 7 functions

#include "mgrr.h"
#include "cCustomObjCtrl.h"

// 00CCDA90  cCustomObjCtrl::vf0C  size=68  [class]
void __fastcall cCustomObjCtrl::vf0C(int param_1)

{
  FUN_00cc7640();
  if (*(int *)(param_1 + 0x1a8) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x1a8));
    *(undefined4 *)(param_1 + 0x1a8) = 0;
  }
  if (*(int *)(param_1 + 0x1ac) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0x1ac));
    *(undefined4 *)(param_1 + 0x1ac) = 0;
  }
  return;
}

// 00CCDAE0  cCustomObjCtrl::vf18  size=535  [class]
void __thiscall cCustomObjCtrl::vf18(int param_1,undefined4 *param_2,uint param_3,float param_4)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  iVar5 = *(int *)(param_1 + 0x1a0);
  if (iVar5 == 0) {
    if (*(char *)((int)param_2 + 0x3ee) != '\0') {
      FUN_00cc83e0(param_2,param_3,param_2[0xf4],*(undefined1 *)((int)param_2 + 0x3ef));
    }
    puVar7 = param_2;
    puVar4 = param_2 + 0x14;
    for (iVar5 = 0x14; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar4 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar4 = puVar4 + 1;
    }
    FUN_00cc8070(param_2 + 0x14,param_2);
  }
  else if ((param_3 < *(uint *)(iVar5 + 0x80)) &&
          (puVar7 = (undefined4 *)(param_3 * 0x400 + *(int *)(iVar5 + 0x7c)),
          puVar7 != (undefined4 *)0x0)) {
    puVar4 = puVar7;
    puVar8 = param_2;
    for (iVar5 = 0x14; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar8 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar8 = puVar8 + 1;
    }
    puVar4 = puVar7 + 0x14;
    puVar8 = param_2 + 0x14;
    for (iVar5 = 0x14; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar8 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar8 = puVar8 + 1;
    }
    iVar5 = 0x10;
    puVar4 = param_2 + 0x28;
    do {
      iVar5 = iVar5 + -1;
      puVar8 = (undefined4 *)(((int)puVar7 - (int)param_2) + (int)puVar4);
      puVar9 = puVar4;
      for (iVar6 = 0x14; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      puVar4 = puVar4 + 8;
    } while (iVar5 != 0);
  }
  if ((int *)param_2[0xfc] != (int *)0x0) {
    (**(code **)(*(int *)param_2[0xfc] + 0x10))
              (*(undefined4 *)(param_1 + 0x78),param_3,param_2[0xf4],
               *(undefined1 *)((int)param_2 + 0x3ef));
  }
  if ((0.0 < param_4) && ((int *)param_2[0xfd] != (int *)0x0)) {
    (**(code **)(*(int *)param_2[0xfd] + 0x10))(param_2[0xf6],param_2[0xf7]);
    (**(code **)(*(int *)param_2[0xfd] + 0x14))(param_2[0xf4]);
  }
  fVar1 = (float)param_2[0xf4];
  if (*(char *)((int)param_2 + 0x3ed) == '\0') {
    fVar2 = (float)param_2[0xf4];
    param_2[0xf4] = param_4 + fVar2;
    if ((param_4 + fVar2 < (float)param_2[0xf6]) && (0.0 <= (float)param_2[0xf6])) {
      if (*(char *)(param_2 + 0xfb) == '\0') {
        uVar3 = param_2[0xf6];
        *(undefined1 *)((int)param_2 + 0x3ed) = 1;
      }
      else {
        uVar3 = param_2[0xf7];
      }
      param_2[0xf4] = uVar3;
    }
    if (((float)param_2[0xf7] < (float)param_2[0xf4]) && (0.0 <= (float)param_2[0xf7])) {
      if (*(char *)(param_2 + 0xfb) == '\0') {
        *(undefined1 *)((int)param_2 + 0x3ed) = 1;
        param_2[0xf4] = param_2[0xf7];
      }
      else {
        param_2[0xf4] = param_2[0xf6];
      }
    }
  }
  param_2[0xf5] = fVar1;
  if ((float)param_2[0xf4] == fVar1) {
    *(undefined1 *)((int)param_2 + 0x3ee) = 0;
    return;
  }
  *(undefined1 *)((int)param_2 + 0x3ee) = 1;
  return;
}

// 00CE4B20  cCustomObjCtrl::cCustomObjCtrl  size=48  [class]
undefined4 * __fastcall cCustomObjCtrl::cCustomObjCtrl(undefined4 *param_1)

{
  cUICtrl::cUICtrl();
  param_1[0x68] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  *param_1 = vftable;
  param_1[0x69] = 1;
  return param_1;
}

// 00CE4B50  cCustomObjCtrl::vf10  size=181  [class]
void __thiscall cCustomObjCtrl::vf10(int *param_1,float param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if ((param_1[0x1e] != 0) && (param_1[0x1f] != 0)) {
    iVar2 = FUN_00e03960();
    fVar1 = *(float *)(iVar2 + 0x7c);
    if ((1.0 < fVar1) && (fVar1 < 1.1)) {
      fVar1 = 1.0;
    }
    param_1[0x21] = (int)(fVar1 * param_2 + (float)param_1[0x21]);
    iVar2 = *(int *)(param_1[0x1e] + 0x10);
    if (((iVar2 != 0) && (iVar2 = iVar2 + param_1[0x1e], iVar2 != 0)) &&
       (uVar3 = 0, param_1[0x20] != 0)) {
      iVar4 = 0;
      do {
        (**(code **)(*param_1 + 0x18))(param_1[0x1f] + iVar4,uVar3,fVar1 * param_2);
        FUN_00ce00d0(param_1[0x1f] + iVar4,iVar2);
        uVar3 = uVar3 + 1;
        iVar2 = iVar2 + 0x1b0;
        iVar4 = iVar4 + 0x400;
      } while (uVar3 < (uint)param_1[0x20]);
    }
  }
  return;
}

// 00CF6490  cCustomObjCtrl::vf00  size=36  [class]
undefined4 * __thiscall cCustomObjCtrl::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cUICtrl::vftable;
  FUN_00cc7640();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D11EF0  cCustomObjCtrl::vf14  size=309  [class]
void __thiscall
cCustomObjCtrl::vf14
          (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int local_4;
  
  if (((*(int *)(param_1 + 0x1a8) != 0) && (*(int *)(param_1 + 0x1ac) != 0)) &&
     (local_4 = 0, 0 < *(int *)(param_1 + 0x1a4))) {
    iVar2 = 0;
    do {
      if (*(int *)(*(int *)(param_1 + 0x1a8) + local_4 * 4) != 0) {
        iVar1 = *(int *)(param_1 + 0x1ac) + iVar2;
        if (*(int *)(param_1 + 0x150) == 0) {
          uVar3 = 0xffffffff;
        }
        else {
          FUN_00cf9000(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_1,0,
                       iVar1);
          FUN_00cf9000(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_1,1,
                       *(int *)(param_1 + 0x1ac) + iVar2);
          iVar1 = *(int *)(param_1 + 0x1ac) + iVar2;
          uVar3 = 2;
        }
        FUN_00cf9000(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_1,uVar3,
                     iVar1);
      }
      local_4 = local_4 + 1;
      iVar2 = iVar2 + 0x10;
    } while (local_4 < *(int *)(param_1 + 0x1a4));
  }
  return;
}

// 00D1F8F0  cCustomObjCtrl::vf08  size=356  [class]
void __thiscall cCustomObjCtrl::vf08(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  *(uint *)(param_1 + 0x1a4) = param_4;
  uVar1 = FUN_00dd3580(-(uint)((int)((ulonglong)param_4 * 4 >> 0x20) != 0) |
                       (uint)((ulonglong)param_4 * 4),param_2);
  *(undefined4 *)(param_1 + 0x1a8) = uVar1;
  uVar1 = FUN_00dd3580(-(uint)((int)((ulonglong)param_4 * 0x10 >> 0x20) != 0) |
                       (uint)((ulonglong)param_4 * 0x10),param_2);
  *(undefined4 *)(param_1 + 0x1ac) = uVar1;
  iVar2 = 0;
  if (3 < (int)param_4) {
    iVar5 = 0;
    do {
      *(undefined4 *)(*(int *)(param_1 + 0x1a8) + iVar2 * 4) = 1;
      iVar4 = *(int *)(param_1 + 0x1ac);
      *(undefined4 *)(iVar4 + iVar5) = 0;
      *(undefined4 *)(iVar4 + 4 + iVar5) = 0;
      *(undefined4 *)(iVar4 + iVar5 + 8) = 0;
      iVar2 = iVar2 + 4;
      *(undefined4 *)(iVar4 + iVar5 + 0xc) = 0x3f800000;
      *(undefined4 *)(*(int *)(param_1 + 0x1a8) + -0xc + iVar2 * 4) = 1;
      iVar4 = *(int *)(param_1 + 0x1ac);
      *(undefined4 *)(iVar5 + 0x10 + iVar4) = 0;
      *(undefined4 *)(iVar5 + 0x14 + iVar4) = 0;
      iVar4 = iVar5 + 0x10 + iVar4;
      *(undefined4 *)(iVar4 + 8) = 0;
      *(undefined4 *)(iVar4 + 0xc) = 0x3f800000;
      *(undefined4 *)(*(int *)(param_1 + 0x1a8) + -8 + iVar2 * 4) = 1;
      iVar3 = *(int *)(param_1 + 0x1ac);
      iVar4 = iVar5 + 0x30;
      *(undefined4 *)(iVar5 + 0x20 + iVar3) = 0;
      iVar3 = iVar5 + 0x20 + iVar3;
      *(undefined4 *)(iVar3 + 4) = 0;
      iVar5 = iVar5 + 0x40;
      *(undefined4 *)(iVar3 + 8) = 0;
      *(undefined4 *)(iVar3 + 0xc) = 0x3f800000;
      *(undefined4 *)(*(int *)(param_1 + 0x1a8) + -4 + iVar2 * 4) = 1;
      iVar3 = *(int *)(param_1 + 0x1ac);
      *(undefined4 *)(iVar3 + iVar4) = 0;
      iVar3 = iVar3 + iVar4;
      *(undefined4 *)(iVar3 + 4) = 0;
      *(undefined4 *)(iVar3 + 8) = 0;
      *(undefined4 *)(iVar3 + 0xc) = 0x3f800000;
    } while (iVar2 < (int)(param_4 - 3));
  }
  if (iVar2 < (int)param_4) {
    iVar5 = iVar2 << 4;
    do {
      *(undefined4 *)(*(int *)(param_1 + 0x1a8) + iVar2 * 4) = 1;
      iVar4 = *(int *)(param_1 + 0x1ac);
      *(undefined4 *)(iVar4 + iVar5) = 0;
      iVar4 = iVar4 + iVar5;
      *(undefined4 *)(iVar4 + 4) = 0;
      iVar2 = iVar2 + 1;
      *(undefined4 *)(iVar4 + 8) = 0;
      iVar5 = iVar5 + 0x10;
      *(undefined4 *)(iVar4 + 0xc) = 0x3f800000;
    } while (iVar2 < (int)param_4);
  }
  FUN_00d1df70(param_2,param_3);
  return;
}

