// src/unsorted/unit_00D62200.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D62200..00D623F0, 2 functions

#include "mgrr.h"

// 00D62200  FUN_00d62200  size=482  [run]
void FUN_00d62200(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  float10 fVar6;
  int iStack_40;
  float fStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  
  uStack_34 = 0xd62219;
  FUN_00a7c950();
  uStack_34 = 0x201a0;
  iStack_38 = 0xd62228;
  iVar1 = FUN_00a7f600();
  while (iVar1 == 0) {
    uStack_34 = 0xd62235;
    piVar2 = (int *)FUN_00a6dd90();
    uStack_34 = 1;
    iStack_38 = 0xd62240;
    (**(code **)(*piVar2 + 0x50))();
    uStack_34 = 0x201a0;
    iStack_38 = 0xd6224f;
    iVar1 = FUN_00a7f600();
  }
  uStack_34 = 0xd6225a;
  uStack_34 = FUN_00a7c7f0();
  iStack_38 = 0xd62262;
  FUN_00a7c960();
  piVar2 = (int *)0x0;
  uStack_34 = 0xd6226b;
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    uStack_34 = 0xd62276;
    FUN_00a81330();
    uStack_34 = 0xd6227d;
    piVar2 = (int *)FUN_00a7c8a0();
  }
  uStack_34 = 0xd62284;
  piVar3 = (int *)FUN_00c13920();
  uStack_34 = 0xffffffff;
  iStack_38 = 0xd6228f;
  (**(code **)(*piVar3 + 0x28))();
  iStack_38 = 0xd62296;
  piVar3 = (int *)FUN_00a7c8a0();
  while ((piVar3 == (int *)0x0 || (piVar2 == (int *)0x0))) {
    iStack_38 = 0xd622a5;
    piVar4 = (int *)FUN_00a6dd90();
    iStack_38 = 1;
    fStack_3c = 1.966524e-38;
    (**(code **)(*piVar4 + 0x50))();
  }
  iStack_38 = piVar2[0x13c];
  fStack_3c = 1.26117e-43;
  iStack_40 = 0xd622c7;
  (**(code **)(*piVar3 + 0x150))();
  iStack_40 = piVar3[0x13c];
  (**(code **)(*piVar2 + 0x150))(0x5a);
  piVar3 = (int *)FUN_00c14bb0();
  iVar1 = (**(code **)(*piVar3 + 0x20))("head_office",0x30b);
  if (iVar1 != 0) {
    FUN_008e3c10();
    iVar1 = *piVar2;
    iVar5 = FUN_00a7c8a0();
    (**(code **)(iVar1 + 0x6c))(iVar5 + 0x50);
    iVar1 = FUN_00a7c8a0();
    iStack_40 = *(int *)(iVar1 + 0x90);
    fStack_3c = *(float *)(iVar1 + 0x94);
    iStack_38 = *(int *)(iVar1 + 0x98);
    uStack_34 = *(undefined4 *)(iVar1 + 0x9c);
    fVar6 = (float10)FUN_00ddba30(fStack_3c - 1.5707964);
    fStack_3c = (float)fVar6;
    (**(code **)(*piVar2 + 0x88))(&iStack_40);
  }
  while ((DAT_01bea094 & 0x8000000) == 0) {
    piVar2 = (int *)FUN_00a6dd90();
    (**(code **)(*piVar2 + 0x50))(1);
  }
  do {
    piVar2 = (int *)FUN_00a6dd90();
    (**(code **)(*piVar2 + 0x50))(1);
  } while ((DAT_01bea094 & 0x8000000) != 0);
  FUN_00d5ea40("P370_MON_DEAD",1,0);
  piVar2 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar2 + 0x54))();
  return;
}

// 00D623F0  FUN_00d623f0  size=541  [run]
void FUN_00d623f0(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  float10 fVar6;
  int iStack_40;
  float fStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  
  uStack_34 = 0xd6240d;
  FUN_00a7c950();
  uStack_34 = 0x201a0;
  iStack_38 = 0xd6241c;
  iVar1 = FUN_00a7f600();
  while (iVar1 == 0) {
    uStack_34 = 0xd62425;
    piVar2 = (int *)FUN_00a6dd90();
    uStack_34 = 1;
    iStack_38 = 0xd62430;
    (**(code **)(*piVar2 + 0x50))();
    uStack_34 = 0x201a0;
    iStack_38 = 0xd6243f;
    iVar1 = FUN_00a7f600();
  }
  uStack_34 = 0xd6244a;
  uStack_34 = FUN_00a7c7f0();
  iStack_38 = 0xd62456;
  FUN_00a7c960();
  piVar2 = (int *)0x0;
  uStack_34 = 0xd62463;
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    uStack_34 = 0xd62472;
    FUN_00a81330();
    uStack_34 = 0xd62479;
    piVar2 = (int *)FUN_00a7c8a0();
  }
  uStack_34 = 0xd62480;
  piVar3 = (int *)FUN_00c13920();
  uStack_34 = 0xffffffff;
  iStack_38 = 0xd6248b;
  (**(code **)(*piVar3 + 0x28))();
  iStack_38 = 0xd62492;
  piVar3 = (int *)FUN_00a7c8a0();
  if (piVar3 == (int *)0x0) goto LAB_00d624a9;
  iStack_38 = 1;
  fStack_3c = 1.9665936e-38;
  FUN_00b7c060();
  while ((piVar3 == (int *)0x0 || (piVar2 == (int *)0x0))) {
LAB_00d624a9:
    iStack_38 = 0xd624ae;
    piVar4 = (int *)FUN_00a6dd90();
    iStack_38 = 1;
    fStack_3c = 1.966597e-38;
    (**(code **)(*piVar4 + 0x50))();
  }
  iStack_38 = 0xd624c2;
  FUN_00d48d60();
  iStack_38 = piVar2[0x13c];
  fStack_3c = 1.26117e-43;
  iStack_40 = 0xd624d7;
  (**(code **)(*piVar3 + 0x150))();
  iStack_40 = piVar3[0x13c];
  (**(code **)(*piVar2 + 0x150))(0x5a);
  piVar3 = (int *)FUN_00c14bb0();
  iVar1 = (**(code **)(*piVar3 + 0x20))("head_office",0x30b);
  if (iVar1 != 0) {
    FUN_008e3c10();
    iVar1 = *piVar2;
    iVar5 = FUN_00a7c8a0();
    (**(code **)(iVar1 + 0x6c))(iVar5 + 0x50);
    iVar1 = FUN_00a7c8a0();
    iStack_40 = *(int *)(iVar1 + 0x90);
    fStack_3c = *(float *)(iVar1 + 0x94);
    iStack_38 = *(int *)(iVar1 + 0x98);
    uStack_34 = *(undefined4 *)(iVar1 + 0x9c);
    fVar6 = (float10)FUN_00ddba30(fStack_3c - 1.5707964);
    fStack_3c = (float)fVar6;
    (**(code **)(*piVar2 + 0x88))(&iStack_40);
  }
  while ((DAT_01bea094 & 0x8000000) == 0) {
    piVar2 = (int *)FUN_00a6dd90();
    (**(code **)(*piVar2 + 0x50))(1);
  }
  do {
    piVar2 = (int *)FUN_00a6dd90();
    (**(code **)(*piVar2 + 0x50))(1);
  } while ((DAT_01bea094 & 0x8000000) != 0);
  FUN_00d4ce60(0x42f00000);
  FUN_00d5ea40("P380_MON_DEAD",1,0);
  DAT_01b75898 = 1;
  piVar2 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar2 + 0x54))();
  return;
}

