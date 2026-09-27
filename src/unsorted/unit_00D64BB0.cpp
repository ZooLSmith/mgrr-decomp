// src/unsorted/unit_00D64BB0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D64BB0..00D64FD0, 3 functions

#include "mgrr.h"

// 00D64BB0  FUN_00d64bb0  size=525  [run]
void FUN_00d64bb0(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  undefined *puVar6;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 auStack_2c [2];
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  FUN_00a7c950();
  iVar1 = FUN_00a7f600(0x2c200);
  while (iVar1 == 0) {
    piVar2 = (int *)FUN_00a6dd90();
    (**(code **)(*piVar2 + 0x50))(1);
    iVar1 = FUN_00a7f600(0x2c200);
  }
  uVar3 = FUN_00a7c7f0();
  FUN_00a7c960(uVar3);
  piVar2 = (int *)0x0;
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    piVar4 = (int *)FUN_00a7c8a0();
    if (piVar4 != (int *)0x0) {
      puVar6 = &DAT_01b35990;
      (**(code **)(*piVar4 + 4))(&DAT_01b35990);
      iVar1 = FUN_00dd6d80(puVar6);
      piVar2 = (int *)(-(uint)(iVar1 != 0) & (uint)piVar4);
    }
  }
  piVar4 = (int *)FUN_00c13920();
  (**(code **)(*piVar4 + 0x28))(0xffffffff);
  piVar4 = (int *)FUN_00a7c8a0();
  if (piVar4 != (int *)0x0) {
    puVar6 = &DAT_01b35b20;
    (**(code **)(*piVar4 + 4))(&DAT_01b35b20);
    iVar1 = FUN_00dd6d80(puVar6);
    if (iVar1 != 0) goto LAB_00d64caa;
  }
  piVar4 = (int *)0x0;
  while (piVar2 == (int *)0x0) {
    piVar5 = (int *)FUN_00a6dd90();
    (**(code **)(*piVar5 + 0x50))(1);
  }
LAB_00d64caa:
  uStack_24 = 0xc3a25dc6;
  uStack_20 = 0x439cffb5;
  uStack_1c = 0xc2736666;
  uStack_34 = 0;
  uStack_30 = 0x40490fdb;
  auStack_2c[0] = 0;
  (**(code **)(*piVar4 + 0x7c))(&uStack_24,&uStack_34);
  (**(code **)(*piVar2 + 0x7c))(auStack_2c,&stack0xffffffc4);
  (**(code **)(*piVar4 + 0x150))(0x87,piVar2[0x13c]);
  (**(code **)(*piVar2 + 0x150))(0x87,piVar4[0x13c]);
  while ((DAT_01bea094 & 0x8000000) == 0) {
    piVar2 = (int *)FUN_00a6dd90();
    (**(code **)(*piVar2 + 0x50))(1);
  }
  do {
    piVar2 = (int *)FUN_00a6dd90();
    (**(code **)(*piVar2 + 0x50))(1);
  } while ((DAT_01bea094 & 0x8000000) != 0);
  DAT_01bea070 = DAT_01bea070 & 0xffdfffff;
  FUN_00d4d1a0(0x42f00000);
  FUN_00d5ea40("PC30_RAY_END",1,0);
  piVar2 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar2 + 0x54))();
  return;
}

// 00D64DC0  FUN_00d64dc0  size=527  [run]
void FUN_00d64dc0(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  undefined *puVar6;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 auStack_2c [2];
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  FUN_00a7c950();
  iVar1 = FUN_00a7f600(0x2c200);
  while (iVar1 == 0) {
    piVar2 = (int *)FUN_00a6dd90();
    (**(code **)(*piVar2 + 0x50))(1);
    iVar1 = FUN_00a7f600(0x2c200);
  }
  uVar3 = FUN_00a7c7f0();
  FUN_00a7c960(uVar3);
  piVar2 = (int *)0x0;
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    piVar4 = (int *)FUN_00a7c8a0();
    if (piVar4 != (int *)0x0) {
      puVar6 = &DAT_01b35990;
      (**(code **)(*piVar4 + 4))(&DAT_01b35990);
      iVar1 = FUN_00dd6d80(puVar6);
      piVar2 = (int *)(-(uint)(iVar1 != 0) & (uint)piVar4);
    }
  }
  piVar4 = (int *)FUN_00c13920();
  (**(code **)(*piVar4 + 0x28))(0xffffffff);
  piVar4 = (int *)FUN_00a7c8a0();
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    puVar6 = &DAT_01b35b20;
    (**(code **)(*piVar4 + 4))(&DAT_01b35b20);
    iVar1 = FUN_00dd6d80(puVar6);
    piVar4 = (int *)(-(uint)(iVar1 != 0) & (uint)piVar4);
  }
  while ((piVar4 == (int *)0x0 || (piVar2 == (int *)0x0))) {
    piVar5 = (int *)FUN_00a6dd90();
    (**(code **)(*piVar5 + 0x50))(1);
  }
  uStack_24 = 0xc3a25dc6;
  uStack_20 = 0x439cffb5;
  uStack_1c = 0xc2736666;
  local_34 = 0;
  uStack_30 = 0;
  auStack_2c[0] = 0;
  (**(code **)(*piVar4 + 0x7c))(&uStack_24,&local_34);
  (**(code **)(*piVar2 + 0x7c))(auStack_2c,&stack0xffffffc4);
  (**(code **)(*piVar4 + 0x150))(0x86,piVar2[0x13c]);
  (**(code **)(*piVar2 + 0x150))(0x86,piVar4[0x13c]);
  while ((DAT_01bea094 & 0x8000000) == 0) {
    piVar2 = (int *)FUN_00a6dd90();
    (**(code **)(*piVar2 + 0x50))(1);
  }
  do {
    piVar2 = (int *)FUN_00a6dd90();
    (**(code **)(*piVar2 + 0x50))(1);
  } while ((DAT_01bea094 & 0x8000000) != 0);
  DAT_01bea070 = DAT_01bea070 & 0xffdfffff;
  FUN_00d4d1a0(0x42f00000);
  FUN_00d5ea40("PC30_RAY_END",1,0);
  piVar2 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar2 + 0x54))();
  return;
}

// 00D64FD0  FUN_00d64fd0  size=509  [run]
void FUN_00d64fd0(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  undefined *puVar6;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 auStack_2c [2];
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  FUN_00a7c950();
  iVar1 = FUN_00a7f600(0x2c70a);
  while (iVar1 == 0) {
    piVar2 = (int *)FUN_00a6dd90();
    (**(code **)(*piVar2 + 0x50))(1);
    iVar1 = FUN_00a7f600(0x2c70a);
  }
  uVar3 = FUN_00a7c7f0();
  FUN_00a7c960(uVar3);
  piVar2 = (int *)0x0;
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    piVar4 = (int *)FUN_00a7c8a0();
    if (piVar4 != (int *)0x0) {
      puVar6 = &DAT_01b35ab8;
      (**(code **)(*piVar4 + 4))(&DAT_01b35ab8);
      iVar1 = FUN_00dd6d80(puVar6);
      piVar2 = (int *)(-(uint)(iVar1 != 0) & (uint)piVar4);
    }
  }
  piVar4 = (int *)FUN_00c13920();
  (**(code **)(*piVar4 + 0x28))(0xffffffff);
  piVar4 = (int *)FUN_00a7c8a0();
  if (piVar4 != (int *)0x0) {
    puVar6 = &DAT_01b35b20;
    (**(code **)(*piVar4 + 4))(&DAT_01b35b20);
    iVar1 = FUN_00dd6d80(puVar6);
    if (iVar1 != 0) goto LAB_00d650ca;
  }
  piVar4 = (int *)0x0;
  while (piVar2 == (int *)0x0) {
    piVar5 = (int *)FUN_00a6dd90();
    (**(code **)(*piVar5 + 0x50))(1);
  }
LAB_00d650ca:
  uStack_24 = 0x435f3d71;
  uStack_20 = 0x43adc51f;
  uStack_1c = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  auStack_2c[0] = 0;
  (**(code **)(*piVar4 + 0x7c))(&uStack_24,&uStack_34);
  (**(code **)(*piVar2 + 0x7c))(auStack_2c,&stack0xffffffc4);
  (**(code **)(*piVar4 + 0x150))(0x89,piVar2[0x13c]);
  (**(code **)(*piVar2 + 0x150))(0x89,piVar4[0x13c]);
  while ((DAT_01bea094 & 0x8000000) == 0) {
    piVar2 = (int *)FUN_00a6dd90();
    (**(code **)(*piVar2 + 0x50))(1);
  }
  do {
    piVar2 = (int *)FUN_00a6dd90();
    (**(code **)(*piVar2 + 0x50))(1);
  } while ((DAT_01bea094 & 0x8000000) != 0);
  DAT_01bea070 = DAT_01bea070 & 0xffdfffff;
  FUN_00d4d280(0x42f00000);
  FUN_00d5ea40("PC60_ARM_END",1,0);
  piVar2 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar2 + 0x54))();
  return;
}

