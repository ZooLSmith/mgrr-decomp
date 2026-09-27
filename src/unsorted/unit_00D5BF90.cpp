// src/unsorted/unit_00D5BF90.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D5BF90..00D5C720, 6 functions

#include "mgrr.h"

// 00D5BF90  FUN_00d5bf90  size=210  [run]
void __fastcall FUN_00d5bf90(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = FUN_0059f4b0();
  if ((iVar1 != 0) && (iVar1 = FUN_005a3940(), iVar1 != 0)) {
    switch(*(undefined4 *)(param_1 + 0x130)) {
    case 0:
    case 1:
      FUN_00c185c0(1);
      *(undefined4 *)(param_1 + 0x130) = 2;
      iVar1 = FUN_00d552d0();
      if (iVar1 != 0) {
        FUN_00d552d0();
        fVar2 = (float10)FUN_0059eb00();
        *(float *)(param_1 + 0x134) = (float)fVar2;
        return;
      }
      break;
    case 2:
      iVar1 = FUN_00c18f70(1,0);
      if (iVar1 != 0) {
        *(undefined4 *)(param_1 + 0x130) = 3;
        return;
      }
      break;
    case 3:
      fVar2 = (float10)FUN_00e049b0();
      fVar2 = (float10)*(float *)(param_1 + 0x134) - fVar2;
      *(float *)(param_1 + 0x134) = (float)fVar2;
      if (fVar2 <= (float10)0) {
        *(undefined4 *)(param_1 + 0x130) = 1;
        fVar2 = (float10)FUN_0059eb00();
        *(float *)(param_1 + 0x134) = (float)fVar2;
      }
    }
  }
  return;
}

// 00D5C080  FUN_00d5c080  size=252  [run]
void FUN_00d5c080(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  
  FUN_00a7c950();
  iVar1 = FUN_00a7f600(0x20600);
  while (iVar1 == 0) {
    piVar2 = (int *)FUN_00a6dd90();
    (**(code **)(*piVar2 + 0x50))(1);
    iVar1 = FUN_00a7f600(0x20600);
  }
  uVar3 = FUN_00a7c7f0();
  FUN_00a7c960(uVar3);
  piVar2 = (int *)FUN_00c13920();
  (**(code **)(*piVar2 + 0x28))(0xffffffff);
  piVar2 = (int *)FUN_00a7c8a0();
  if (piVar2 == (int *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar6 = &DAT_01be9db8;
    (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
    iVar1 = FUN_00dd6d80(puVar6);
    uVar4 = -(uint)(iVar1 != 0) & (uint)piVar2;
  }
  iVar1 = FUN_00a81330();
  if (iVar1 == 0) {
    uVar5 = 0;
  }
  else {
    piVar2 = (int *)FUN_00a7c8a0();
    uVar5 = 0;
    if (piVar2 != (int *)0x0) {
      puVar6 = &DAT_01b351a0;
      (**(code **)(*piVar2 + 4))(&DAT_01b351a0);
      iVar1 = FUN_00dd6d80(puVar6);
      uVar5 = -(uint)(iVar1 != 0) & (uint)piVar2;
    }
  }
  while ((uVar5 == 0 || (uVar4 == 0))) {
    piVar2 = (int *)FUN_00a6dd90();
    (**(code **)(*piVar2 + 0x50))(1);
  }
  do {
    piVar2 = (int *)FUN_00a6dd90();
    (**(code **)(*piVar2 + 0x50))(1);
  } while( true );
}

// 00D5C190  FUN_00d5c190  size=402  [run]
void __fastcall FUN_00d5c190(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  piVar1 = (int *)FUN_00c13920();
  (**(code **)(*piVar1 + 0x28))(0xffffffff);
  piVar1 = (int *)FUN_00a7c8a0();
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    puVar6 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar6);
    piVar1 = (int *)(-(uint)(iVar2 != 0) & (uint)piVar1);
  }
  if (*(char *)(param_1 + 300) == '\x02') {
    DAT_01bea070 = DAT_01bea070 | 0x40000000;
    uStack_24 = 0x3f028f5c;
    uStack_20 = 0x4194147b;
    uStack_1c = 0x424970a4;
    uStack_34 = 0;
    uStack_30 = 0x40437a14;
    uStack_2c = 0;
    (**(code **)(*piVar1 + 0x7c))(&uStack_24,&uStack_34);
  }
  FUN_00a7c950();
  iVar2 = FUN_00a7f600(0x20600);
  while (iVar2 == 0) {
    piVar3 = (int *)FUN_00a6dd90();
    (**(code **)(*piVar3 + 0x50))(1);
    iVar2 = FUN_00a7f600(0x20600);
  }
  uVar4 = FUN_00a7c7f0();
  FUN_00a7c960(uVar4);
  iVar2 = FUN_00a81330();
  if (iVar2 == 0) {
    uVar5 = 0;
  }
  else {
    piVar3 = (int *)FUN_00a7c8a0();
    uVar5 = 0;
    if (piVar3 != (int *)0x0) {
      puVar6 = &DAT_01b351a0;
      (**(code **)(*piVar3 + 4))(&DAT_01b351a0);
      iVar2 = FUN_00dd6d80(puVar6);
      uVar5 = -(uint)(iVar2 != 0) & (uint)piVar3;
    }
  }
  while ((uVar5 == 0 || (piVar1 == (int *)0x0))) {
    piVar3 = (int *)FUN_00a6dd90();
    (**(code **)(*piVar3 + 0x50))(1);
  }
  FUN_005a57d0();
  FUN_00d4cf00(0x42700000);
  if (*(char *)(param_1 + 300) == '\x02') {
    DAT_01bea070 = DAT_01bea070 & 0xbfffffff;
  }
  do {
    piVar1 = (int *)FUN_00a6dd90();
    (**(code **)(*piVar1 + 0x50))(1);
  } while( true );
}

// 00D5C330  FUN_00d5c330  size=252  [run]
void FUN_00d5c330(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  
  FUN_00a7c950();
  iVar1 = FUN_00a7f600(0x20600);
  while (iVar1 == 0) {
    piVar2 = (int *)FUN_00a6dd90();
    (**(code **)(*piVar2 + 0x50))(1);
    iVar1 = FUN_00a7f600(0x20600);
  }
  uVar3 = FUN_00a7c7f0();
  FUN_00a7c960(uVar3);
  piVar2 = (int *)FUN_00c13920();
  (**(code **)(*piVar2 + 0x28))(0xffffffff);
  piVar2 = (int *)FUN_00a7c8a0();
  if (piVar2 == (int *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar6 = &DAT_01be9db8;
    (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
    iVar1 = FUN_00dd6d80(puVar6);
    uVar4 = -(uint)(iVar1 != 0) & (uint)piVar2;
  }
  iVar1 = FUN_00a81330();
  if (iVar1 == 0) {
    uVar5 = 0;
  }
  else {
    piVar2 = (int *)FUN_00a7c8a0();
    uVar5 = 0;
    if (piVar2 != (int *)0x0) {
      puVar6 = &DAT_01b351a0;
      (**(code **)(*piVar2 + 4))(&DAT_01b351a0);
      iVar1 = FUN_00dd6d80(puVar6);
      uVar5 = -(uint)(iVar1 != 0) & (uint)piVar2;
    }
  }
  while ((uVar5 == 0 || (uVar4 == 0))) {
    piVar2 = (int *)FUN_00a6dd90();
    (**(code **)(*piVar2 + 0x50))(1);
  }
  do {
    piVar2 = (int *)FUN_00a6dd90();
    (**(code **)(*piVar2 + 0x50))(1);
  } while( true );
}

// 00D5C440  FUN_00d5c440  size=402  [run]
void __fastcall FUN_00d5c440(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  piVar1 = (int *)FUN_00c13920();
  (**(code **)(*piVar1 + 0x28))(0xffffffff);
  piVar1 = (int *)FUN_00a7c8a0();
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    puVar6 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar6);
    piVar1 = (int *)(-(uint)(iVar2 != 0) & (uint)piVar1);
  }
  if (*(char *)(param_1 + 300) == '\x04') {
    DAT_01bea070 = DAT_01bea070 | 0x40000000;
    uStack_24 = 0xbea8f5c3;
    uStack_20 = 0x4194147b;
    uStack_1c = 0x42473d71;
    uStack_34 = 0;
    uStack_30 = 0xc0402037;
    uStack_2c = 0;
    (**(code **)(*piVar1 + 0x7c))(&uStack_24,&uStack_34);
  }
  FUN_00a7c950();
  iVar2 = FUN_00a7f600(0x20600);
  while (iVar2 == 0) {
    piVar3 = (int *)FUN_00a6dd90();
    (**(code **)(*piVar3 + 0x50))(1);
    iVar2 = FUN_00a7f600(0x20600);
  }
  uVar4 = FUN_00a7c7f0();
  FUN_00a7c960(uVar4);
  iVar2 = FUN_00a81330();
  if (iVar2 == 0) {
    uVar5 = 0;
  }
  else {
    piVar3 = (int *)FUN_00a7c8a0();
    uVar5 = 0;
    if (piVar3 != (int *)0x0) {
      puVar6 = &DAT_01b351a0;
      (**(code **)(*piVar3 + 4))(&DAT_01b351a0);
      iVar2 = FUN_00dd6d80(puVar6);
      uVar5 = -(uint)(iVar2 != 0) & (uint)piVar3;
    }
  }
  while ((uVar5 == 0 || (piVar1 == (int *)0x0))) {
    piVar3 = (int *)FUN_00a6dd90();
    (**(code **)(*piVar3 + 0x50))(1);
  }
  FUN_005a58c0();
  FUN_00d4cf00(0x42700000);
  if (*(char *)(param_1 + 300) == '\x04') {
    DAT_01bea070 = DAT_01bea070 & 0xbfffffff;
  }
  do {
    piVar1 = (int *)FUN_00a6dd90();
    (**(code **)(*piVar1 + 0x50))(1);
  } while( true );
}

// 00D5C720  FUN_00d5c720  size=495  [run]
void FUN_00d5c720(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined4 uStack_44;
  
  uStack_44 = 0xd5c739;
  FUN_00a7c950();
  uStack_44 = 0x20700;
  iVar1 = FUN_00a7f600();
  while (iVar1 == 0) {
    uStack_44 = 0xd5c755;
    piVar2 = (int *)FUN_00a6dd90();
    uStack_44 = 1;
    (**(code **)(*piVar2 + 0x50))();
    uStack_44 = 0x20700;
    iVar1 = FUN_00a7f600();
  }
  uStack_44 = 0xd5c77a;
  uStack_44 = FUN_00a7c7f0();
  FUN_00a7c960();
  uStack_44 = 0xd5c78b;
  piVar2 = (int *)FUN_00c13920();
  uStack_44 = 0xffffffff;
  (**(code **)(*piVar2 + 0x28))();
  piVar2 = (int *)FUN_00a7c8a0();
  iVar1 = FUN_00a81330();
  if (iVar1 == 0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)FUN_00a7c8a0();
  }
  while ((piVar5 == (int *)0x0 || (piVar2 == (int *)0x0))) {
    piVar3 = (int *)FUN_00a6dd90();
    (**(code **)(*piVar3 + 0x50))(1);
  }
  iVar4 = FUN_00a81330();
  iVar1 = 0;
  if (iVar4 != 0) {
    iVar1 = FUN_00a7c8a0();
  }
  FUN_005add10(*(undefined4 *)(iVar1 + 0x4f0));
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    piVar3 = (int *)FUN_00a7c8a0();
    (**(code **)(*piVar3 + 0x20))();
  }
  (**(code **)(*piVar2 + 0x150))(0x5d,piVar5[0x13c]);
  (**(code **)(*piVar5 + 0x150))(0x5d,piVar2[0x13c]);
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      FUN_00a7c8a0();
    }
    FUN_00a9e290(&DAT_0163b7bc,0,0,0x3f800000,0,0xbf800000,0x3f800000);
  }
  FUN_008e3c10();
  uStack_44 = 0;
  (**(code **)(*piVar5 + 0x6c))(&uStack_44);
  (**(code **)(*piVar5 + 0x88))(&stack0xffffffc8);
  do {
    piVar2 = (int *)FUN_00a6dd90();
    (**(code **)(*piVar2 + 0x50))(1);
  } while( true );
}

