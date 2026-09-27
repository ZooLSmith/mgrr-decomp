// src/unsorted/unit_00A6A230.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A6A230..00A6A960, 10 functions

#include "types.h"

// 00A6A230  FUN_00a6a230  size=13  [run]
int __fastcall FUN_00a6a230(int param_1)

{
  FUN_00a694f0();
  return param_1 + 0x70;
}

// 00A6A240  FUN_00a6a240  size=30  [run]
void __thiscall FUN_00a6a240(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_00a694f0();
  puVar2 = (undefined4 *)(param_1 + 0x70);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_2 = *puVar2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  return;
}

// 00A6A260  FUN_00a6a260  size=252  [run]
byte __thiscall FUN_00a6a260(int param_1,int *param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte unaff_BL;
  byte bVar6;
  
  cVar1 = (**(code **)(*param_2 + 0x10))(&DAT_01662d64,7);
  if (cVar1 == '\0') {
    unaff_BL = 0;
  }
  else {
    (**(code **)(*param_2 + 0x2c))(param_1 + 0x14);
    (**(code **)(*param_2 + 0x14))(&DAT_01662d64,7);
  }
  bVar2 = FUN_00a6a060(param_2,"pivot",param_1 + 0x30);
  bVar3 = FUN_00a6a060(param_2,"translate",param_1 + 0x40);
  bVar4 = FUN_00a6a060(param_2,"rotate",param_1 + 0x50);
  bVar5 = FUN_00a6a060(param_2,"scale",param_1 + 0x60);
  bVar6 = 0xb;
  cVar1 = (**(code **)(*param_2 + 0x10))("weight");
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0xf8);
    (**(code **)(*param_2 + 0x14))("weight",0xb);
    *(undefined4 *)(param_1 + 0xf0) = 1;
    return bVar6 & bVar2 & unaff_BL & 1 & bVar3 & bVar4 & bVar5;
  }
  *(undefined4 *)(param_1 + 0xf0) = 1;
  return 0;
}

// 00A6A420  FUN_00a6a420  size=213  [run]
void __fastcall FUN_00a6a420(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = *(int *)(param_1 + 0x14);
  if (iVar3 != *(int *)(param_1 + 0x18)) {
    do {
      FUN_00a694f0();
      iVar3 = *(int *)(iVar3 + 8);
    } while (iVar3 != *(int *)(param_1 + 0x18));
  }
  piVar4 = *(int **)(param_1 + 0x14);
  if (piVar4 != *(int **)(param_1 + 0x18)) {
    do {
      if (*(int *)(*piVar4 + 0x1c) == 0) {
        piVar1 = (int *)piVar4[2];
      }
      else {
        piVar1 = *(int **)(param_1 + 0x14);
        if (piVar1 != *(int **)(param_1 + 0x18)) {
          do {
            iVar3 = *piVar1;
            if (*(int *)(iVar3 + 0xf4) == *(int *)(*piVar4 + 0xf4)) {
              *(undefined4 *)(iVar3 + 0xf4) = 0;
              *(undefined4 *)(iVar3 + 0xf0) = 1;
            }
            piVar1 = (int *)piVar1[2];
          } while (piVar1 != *(int **)(param_1 + 0x18));
        }
        if ((int *)*piVar4 != (int *)0x0) {
          (**(code **)(*(int *)*piVar4 + 4))(1);
        }
        iVar3 = piVar4[1];
        piVar1 = (int *)piVar4[2];
        if (iVar3 != 0) {
          *(int **)(iVar3 + 8) = piVar1;
        }
        if (piVar1 != (int *)0x0) {
          piVar1[1] = iVar3;
        }
        if (*(int **)(param_1 + 0x14) == piVar4) {
          *(int **)(param_1 + 0x14) = piVar1;
        }
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
        iVar3 = *(int *)(param_1 + 0x10);
        if (iVar3 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(iVar3 + 4);
        }
        piVar4[1] = iVar2;
        piVar4[2] = iVar3;
        if (iVar2 != 0) {
          *(int **)(iVar2 + 8) = piVar4;
        }
        if (iVar3 != 0) {
          *(int **)(iVar3 + 4) = piVar4;
        }
        *(int **)(param_1 + 0x10) = piVar4;
      }
      piVar4 = piVar1;
    } while (piVar1 != *(int **)(param_1 + 0x18));
  }
  return;
}

// 00A6A520  FUN_00a6a520  size=65  [run]
void __fastcall FUN_00a6a520(undefined4 *param_1)

{
  if (param_1[1] != 0) {
    if (param_1[1] != 0) {
      FUN_00dd48d0(param_1[1],0);
      param_1[1] = 0;
    }
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = *param_1;
    param_1[5] = *param_1;
    param_1[6] = *param_1;
  }
  return;
}

// 00A6A6E0  FUN_00a6a6e0  size=112  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_00a6a6e0(int *param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  
  if ((_DAT_01be99cc & 1) == 0) {
    _DAT_01be99cc = _DAT_01be99cc | 1;
    DAT_01be99c8 = DAT_01884314;
    DAT_01884314 = DAT_01884314 + 1;
  }
  iVar1 = DAT_01be99c8;
  cVar2 = (**(code **)(*param_1 + 0x10))(param_2,DAT_01be99c8);
  if (cVar2 == '\0') {
    return 0;
  }
  uVar3 = FUN_00a6a260(param_1);
  (**(code **)(*param_1 + 0x14))(param_2,iVar1);
  return uVar3;
}

// 00A6A750  FUN_00a6a750  size=108  [run]
byte __thiscall FUN_00a6a750(int param_1,int *param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  
  FUN_00a6a6e0(param_2,&DAT_01662d6c,param_1);
  bVar3 = 0xb;
  cVar1 = (**(code **)(*param_2 + 0x10))("radius");
  if (cVar1 != '\0') {
    bVar2 = (**(code **)(*param_2 + 0x1c))(param_1 + 0x100);
    (**(code **)(*param_2 + 0x14))("radius",0xb);
    return bVar2 & bVar3;
  }
  return 0;
}

// 00A6A7C0  FUN_00a6a7c0  size=226  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte __thiscall FUN_00a6a7c0(int param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  byte bStack_4;
  
  FUN_00a6a6e0(param_2,&DAT_01662d6c,param_1);
  cVar2 = (**(code **)(*param_2 + 0x10))("height",0xb);
  if (cVar2 == '\0') {
    bVar3 = 0;
  }
  else {
    bVar3 = (**(code **)(*param_2 + 0x1c))(param_1 + 0x140);
    (**(code **)(*param_2 + 0x14))("height",0xb);
  }
  bStack_4 = (byte)param_1;
  bStack_4 = bStack_4 & bVar3;
  param_1 = param_1 + 0x100;
  iVar4 = 4;
  do {
    if ((_DAT_01be99c4 & 1) == 0) {
      _DAT_01be99c4 = _DAT_01be99c4 | 1;
      DAT_01be99c0 = DAT_01884314;
      DAT_01884314 = DAT_01884314 + 1;
    }
    iVar1 = DAT_01be99c0;
    cVar2 = (**(code **)(*param_2 + 0x10))("point",DAT_01be99c0);
    if (cVar2 == '\0') {
      bVar3 = 0;
    }
    else {
      bVar3 = FUN_00a692d0(param_2,param_1);
      (**(code **)(*param_2 + 0x14))("point",iVar1);
    }
    bStack_4 = bStack_4 & bVar3;
    param_1 = param_1 + 0x10;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return bStack_4;
}

// 00A6A8B0  FUN_00a6a8b0  size=170  [run]
byte __thiscall FUN_00a6a8b0(int param_1,int *param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  
  FUN_00a6a6e0(param_2,&DAT_01662d6c,param_1);
  cVar1 = (**(code **)(*param_2 + 0x10))("radius",0xb);
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x100);
    (**(code **)(*param_2 + 0x14))("radius",0xb);
  }
  bVar3 = 0xb;
  cVar1 = (**(code **)(*param_2 + 0x10))("height");
  if (cVar1 == '\0') {
    return 0;
  }
  bVar2 = (**(code **)(*param_2 + 0x1c))(param_1 + 0x104);
  (**(code **)(*param_2 + 0x14))("height",0xb);
  return bVar2 & bVar3;
}

// 00A6A960  FUN_00a6a960  size=358  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00a6a960(int param_1,int *param_2)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  char extraout_AL;
  byte bVar4;
  undefined3 extraout_var;
  undefined4 uVar5;
  undefined3 uVar6;
  byte unaff_BL;
  int iVar7;
  int iVar8;
  byte bStack_4;
  
  bVar2 = FUN_00a6a6e0(param_2,&DAT_01662d6c,param_1);
  cVar3 = (**(code **)(*param_2 + 0x10))("radius",0xb);
  if (cVar3 == '\0') {
    bStack_4 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x1c))(param_1 + 0x100);
    (**(code **)(*param_2 + 0x14))("radius",0xb);
  }
  (**(code **)(*param_2 + 0x10))("countOfPoints",7);
  if (extraout_AL == '\0') {
    unaff_BL = 0;
    uVar6 = extraout_var;
  }
  else {
    (**(code **)(*param_2 + 0x2c))(param_1 + 0x104);
    uVar5 = (**(code **)(*param_2 + 0x14))("countOfPoints",7);
    uVar6 = (undefined3)((uint)uVar5 >> 8);
  }
  bVar2 = bVar2 & bStack_4 & unaff_BL;
  iVar8 = 0;
  if (*(int *)(param_1 + 0x104) < 1) {
    return CONCAT31(uVar6,bVar2);
  }
  iVar7 = param_1 + 0x110;
  do {
    if ((_DAT_01be99c4 & 1) == 0) {
      _DAT_01be99c4 = _DAT_01be99c4 | 1;
      DAT_01be99c0 = DAT_01884314;
      DAT_01884314 = DAT_01884314 + 1;
    }
    iVar1 = DAT_01be99c0;
    cVar3 = (**(code **)(*param_2 + 0x10))("point",DAT_01be99c0);
    if (cVar3 == '\0') {
      bVar4 = 0;
    }
    else {
      bVar4 = FUN_00a692d0(param_2,iVar7);
      (**(code **)(*param_2 + 0x14))("point",iVar1);
    }
    bVar2 = bVar2 & bVar4;
    iVar7 = iVar7 + 0x10;
    iVar8 = iVar8 + 1;
  } while (iVar8 < *(int *)(param_1 + 0x104));
  return CONCAT31((int3)((uint)iVar8 >> 8),bVar2);
}

