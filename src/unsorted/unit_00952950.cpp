// src/unsorted/unit_00952950.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00952950..00952E60, 8 functions

#include "mgrr.h"

// 00952950  FUN_00952950  size=190  [run]
int * FUN_00952950(int *param_1,undefined4 *param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined1 local_90 [80];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  
  FUN_0040b190();
  local_40 = *param_2;
  local_3c = param_2[1];
  local_38 = param_2[2];
  iVar2 = FUN_00a82090(param_1 + 6,param_1[3],local_90);
  if (iVar2 == 0) {
    return (int *)0x0;
  }
  iVar3 = FUN_00dd3500(0xa0,&DAT_01b7bd48);
  if ((iVar3 != 0) &&
     (piVar4 = (int *)cItemStageDropCollectableDlc::cItemStageDropCollectableDlc(),
     piVar4 != (int *)0x0)) {
    pcVar1 = *(code **)(*piVar4 + 8);
    piVar5 = param_1;
    piVar6 = piVar4 + 2;
    for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar6 = *piVar5;
      piVar5 = piVar5 + 1;
      piVar6 = piVar6 + 1;
    }
    piVar4[0x14] = iVar2;
    (*pcVar1)(param_1);
    return piVar4;
  }
  FUN_00a805f0();
  return (int *)0x0;
}

// 00952A10  FUN_00952a10  size=190  [run]
int * FUN_00952a10(int *param_1,undefined4 *param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined1 local_90 [80];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  
  FUN_0040b190();
  local_40 = *param_2;
  local_3c = param_2[1];
  local_38 = param_2[2];
  iVar2 = FUN_00a82090(param_1 + 6,param_1[3],local_90);
  if (iVar2 == 0) {
    return (int *)0x0;
  }
  iVar3 = FUN_00dd3500(0xb0,&DAT_01b7bd48);
  if ((iVar3 != 0) &&
     (piVar4 = (int *)cItemStageDropViscera::cItemStageDropViscera(), piVar4 != (int *)0x0)) {
    pcVar1 = *(code **)(*piVar4 + 8);
    piVar5 = param_1;
    piVar6 = piVar4 + 2;
    for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar6 = *piVar5;
      piVar5 = piVar5 + 1;
      piVar6 = piVar6 + 1;
    }
    piVar4[0x14] = iVar2;
    (*pcVar1)(param_1);
    return piVar4;
  }
  FUN_00a805f0();
  return (int *)0x0;
}

// 00952AD0  FUN_00952ad0  size=190  [run]
int * FUN_00952ad0(int *param_1,undefined4 *param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined1 local_90 [80];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  
  FUN_0040b190();
  local_40 = *param_2;
  local_3c = param_2[1];
  local_38 = param_2[2];
  iVar2 = FUN_00a82090(param_1 + 6,param_1[3],local_90);
  if (iVar2 == 0) {
    return (int *)0x0;
  }
  iVar3 = FUN_00dd3500(0xb0,&DAT_01b7bd48);
  if ((iVar3 != 0) &&
     (piVar4 = (int *)cItemStageDropLeftHand::cItemStageDropLeftHand(), piVar4 != (int *)0x0)) {
    pcVar1 = *(code **)(*piVar4 + 8);
    piVar5 = param_1;
    piVar6 = piVar4 + 2;
    for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar6 = *piVar5;
      piVar5 = piVar5 + 1;
      piVar6 = piVar6 + 1;
    }
    piVar4[0x14] = iVar2;
    (*pcVar1)(param_1);
    return piVar4;
  }
  FUN_00a805f0();
  return (int *)0x0;
}

// 00952B90  FUN_00952b90  size=190  [run]
int * FUN_00952b90(int *param_1,undefined4 *param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined1 local_90 [80];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  
  FUN_0040b190();
  local_40 = *param_2;
  local_3c = param_2[1];
  local_38 = param_2[2];
  iVar2 = FUN_00a82090(param_1 + 6,param_1[3],local_90);
  if (iVar2 == 0) {
    return (int *)0x0;
  }
  iVar3 = FUN_00dd3500(0xa0,&DAT_01b7bd48);
  if ((iVar3 != 0) &&
     (piVar4 = (int *)cItemStageDropCollectable::cItemStageDropCollectable(), piVar4 != (int *)0x0))
  {
    pcVar1 = *(code **)(*piVar4 + 8);
    piVar5 = param_1;
    piVar6 = piVar4 + 2;
    for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar6 = *piVar5;
      piVar5 = piVar5 + 1;
      piVar6 = piVar6 + 1;
    }
    piVar4[0x14] = iVar2;
    (*pcVar1)(param_1);
    return piVar4;
  }
  FUN_00a805f0();
  return (int *)0x0;
}

// 00952C50  FUN_00952c50  size=167  [run]
int * FUN_00952c50(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined1 local_90 [140];
  
  FUN_0040b190();
  iVar2 = FUN_00a82090(param_1 + 6,param_1[3],local_90);
  if (iVar2 == 0) {
    return (int *)0x0;
  }
  iVar3 = FUN_00dd3500(0xa0,&DAT_01b7bd48);
  if ((iVar3 != 0) &&
     (piVar4 = (int *)cItemStageDropInstant::cItemStageDropInstant(), piVar4 != (int *)0x0)) {
    pcVar1 = *(code **)(*piVar4 + 8);
    piVar5 = param_1;
    piVar6 = piVar4 + 2;
    for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar6 = *piVar5;
      piVar5 = piVar5 + 1;
      piVar6 = piVar6 + 1;
    }
    piVar4[0x14] = iVar2;
    (*pcVar1)(param_1);
    return piVar4;
  }
  FUN_00a805f0();
  return (int *)0x0;
}

// 00952D00  FUN_00952d00  size=167  [run]
int * FUN_00952d00(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined1 local_90 [140];
  
  FUN_0040b190();
  iVar2 = FUN_00a82090(param_1 + 6,param_1[3],local_90);
  if (iVar2 == 0) {
    return (int *)0x0;
  }
  iVar3 = FUN_00dd3500(0xa0,&DAT_01b7bd48);
  if ((iVar3 != 0) &&
     (piVar4 = (int *)cItemStageDropCollectable::cItemStageDropCollectable(), piVar4 != (int *)0x0))
  {
    pcVar1 = *(code **)(*piVar4 + 8);
    piVar5 = param_1;
    piVar6 = piVar4 + 2;
    for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar6 = *piVar5;
      piVar5 = piVar5 + 1;
      piVar6 = piVar6 + 1;
    }
    piVar4[0x14] = iVar2;
    (*pcVar1)(param_1);
    return piVar4;
  }
  FUN_00a805f0();
  return (int *)0x0;
}

// 00952DB0  FUN_00952db0  size=167  [run]
int * FUN_00952db0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined1 local_90 [140];
  
  FUN_0040b190();
  iVar2 = FUN_00a82090(param_1 + 6,param_1[3],local_90);
  if (iVar2 == 0) {
    return (int *)0x0;
  }
  iVar3 = FUN_00dd3500(0xb0,&DAT_01b7bd48);
  if ((iVar3 != 0) &&
     (piVar4 = (int *)cItemStageDropViscera::cItemStageDropViscera(), piVar4 != (int *)0x0)) {
    pcVar1 = *(code **)(*piVar4 + 8);
    piVar5 = param_1;
    piVar6 = piVar4 + 2;
    for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar6 = *piVar5;
      piVar5 = piVar5 + 1;
      piVar6 = piVar6 + 1;
    }
    piVar4[0x14] = iVar2;
    (*pcVar1)(param_1);
    return piVar4;
  }
  FUN_00a805f0();
  return (int *)0x0;
}

// 00952E60  FUN_00952e60  size=167  [run]
int * FUN_00952e60(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined1 local_90 [140];
  
  FUN_0040b190();
  iVar2 = FUN_00a82090(param_1 + 6,param_1[3],local_90);
  if (iVar2 == 0) {
    return (int *)0x0;
  }
  iVar3 = FUN_00dd3500(0xa0,&DAT_01b7bd48);
  if ((iVar3 != 0) &&
     (piVar4 = (int *)cItemStageDropCollectableDlc::cItemStageDropCollectableDlc(),
     piVar4 != (int *)0x0)) {
    pcVar1 = *(code **)(*piVar4 + 8);
    piVar5 = param_1;
    piVar6 = piVar4 + 2;
    for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar6 = *piVar5;
      piVar5 = piVar5 + 1;
      piVar6 = piVar6 + 1;
    }
    piVar4[0x14] = iVar2;
    (*pcVar1)(param_1);
    return piVar4;
  }
  FUN_00a805f0();
  return (int *)0x0;
}

