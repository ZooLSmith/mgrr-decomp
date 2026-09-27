// src/unsorted/unit_00D64300.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D64300..00D646C0, 4 functions

#include "types.h"

// 00D64300  FUN_00d64300  size=317  [run]
void FUN_00d64300(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  FUN_00a7c950();
  iVar1 = FUN_00a7f600(0x20700);
  while (iVar1 == 0) {
    piVar2 = (int *)FUN_00a6dd90();
    (**(code **)(*piVar2 + 0x50))(1);
    iVar1 = FUN_00a7f600(0x20700);
  }
  uVar3 = FUN_00a7c7f0();
  FUN_00a7c960(uVar3);
  piVar2 = (int *)FUN_00c13920();
  (**(code **)(*piVar2 + 0x28))(0xffffffff);
  iVar1 = FUN_00a7c8a0();
  iVar4 = FUN_00a81330();
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_00a7c8a0();
  }
  while ((iVar4 == 0 || (iVar1 == 0))) {
    piVar2 = (int *)FUN_00a6dd90();
    (**(code **)(*piVar2 + 0x50))(1);
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
    piVar2 = (int *)FUN_00a7c8a0();
    (**(code **)(*piVar2 + 0x20))();
  }
  while (iVar1 = FUN_005b5250(), iVar1 == 0) {
    piVar2 = (int *)FUN_00a6dd90();
    (**(code **)(*piVar2 + 0x50))(1);
  }
  FUN_00d5ea40("P730_EVENT",1,0);
  piVar2 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar2 + 0x54))();
  return;
}

// 00D64440  FUN_00d64440  size=266  [run]
void FUN_00d64440(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined4 local_114;
  int *local_110;
  undefined4 local_10c;
  int local_108;
  int local_104;
  int local_100 [64];
  
  iVar1 = FUN_00a7f600(0xf5003);
  if (iVar1 != 0) {
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
    iVar3 = FUN_00a7c8a0();
    if (iVar3 != 0) {
      *(uint *)(iVar3 + 0x364) = *(uint *)(iVar3 + 0x364) & 0xfffffffd;
    }
    local_110 = local_100;
    local_114 = 0;
    local_10c = 0x40;
    local_108 = 0;
    local_104 = 0;
    uVar2 = FUN_00e03ea0("child");
    FUN_00a18df0(&local_114,uVar2);
    piVar5 = local_110;
    piVar6 = local_110;
    if (local_110 != local_110 + local_108) {
      do {
        if (((*piVar6 != 0) &&
            (piVar4 = (int *)FUN_00a7c8a0(), piVar5 = local_110, piVar4 != (int *)0x0)) &&
           ((**(code **)(*piVar4 + 0x168))(iVar1,0xb00,1), piVar5 = local_110,
           piVar4[300] == 0xd5403)) {
          FUN_00aa92c0(10);
          piVar5 = local_110;
        }
        piVar6 = piVar6 + 1;
      } while (piVar6 != piVar5 + local_108);
    }
    if ((piVar5 != (int *)0x0) && (local_108 = 0, local_104 != 0)) {
      FUN_00dd48d0(piVar5,0);
    }
  }
  return;
}

// 00D64550  FUN_00d64550  size=354  [run]
void FUN_00d64550(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  FUN_00a7c950();
  iVar1 = FUN_00a7f600(0x20700);
  while (iVar1 == 0) {
    piVar2 = (int *)FUN_00a6dd90();
    (**(code **)(*piVar2 + 0x50))(1);
    iVar1 = FUN_00a7f600(0x20700);
  }
  uVar3 = FUN_00a7c7f0();
  FUN_00a7c960(uVar3);
  piVar2 = (int *)FUN_00c13920();
  (**(code **)(*piVar2 + 0x28))(0xffffffff);
  iVar1 = FUN_00a7c8a0();
  iVar4 = FUN_00a81330();
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_00a7c8a0();
  }
  while ((iVar4 == 0 || (iVar1 == 0))) {
    piVar2 = (int *)FUN_00a6dd90();
    (**(code **)(*piVar2 + 0x50))(1);
  }
  *(undefined4 *)(iVar1 + 0x1400) = 1;
  iVar4 = FUN_00a81330();
  iVar1 = 0;
  if (iVar4 != 0) {
    iVar1 = FUN_00a7c8a0();
  }
  FUN_005add10(*(undefined4 *)(iVar1 + 0x4f0));
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    piVar2 = (int *)FUN_00a7c8a0();
    (**(code **)(*piVar2 + 0x20))();
  }
  while (iVar1 = FUN_005b5250(), iVar1 == 0) {
    piVar2 = (int *)FUN_00a6dd90();
    (**(code **)(*piVar2 + 0x50))(1);
  }
  FUN_00d4d040(0x41200000);
  DAT_01bea060 = DAT_01bea060 & 0xf7ffffff;
  FUN_00d5ea40("P740_QTE",1,0);
  piVar2 = (int *)FUN_00a6dd90();
  (**(code **)(*piVar2 + 0x54))();
  return;
}

// 00D646C0  FUN_00d646c0  size=266  [run]
void FUN_00d646c0(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined4 local_114;
  int *local_110;
  undefined4 local_10c;
  int local_108;
  int local_104;
  int local_100 [64];
  
  iVar1 = FUN_00a7f600(0xf5003);
  if (iVar1 != 0) {
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
    iVar3 = FUN_00a7c8a0();
    if (iVar3 != 0) {
      *(uint *)(iVar3 + 0x364) = *(uint *)(iVar3 + 0x364) & 0xfffffffd;
    }
    local_110 = local_100;
    local_114 = 0;
    local_10c = 0x40;
    local_108 = 0;
    local_104 = 0;
    uVar2 = FUN_00e03ea0("child");
    FUN_00a18df0(&local_114,uVar2);
    piVar5 = local_110;
    piVar6 = local_110;
    if (local_110 != local_110 + local_108) {
      do {
        if (((*piVar6 != 0) &&
            (piVar4 = (int *)FUN_00a7c8a0(), piVar5 = local_110, piVar4 != (int *)0x0)) &&
           ((**(code **)(*piVar4 + 0x168))(iVar1,0xb00,1), piVar5 = local_110,
           piVar4[300] == 0xd5403)) {
          FUN_00aa92c0(10);
          piVar5 = local_110;
        }
        piVar6 = piVar6 + 1;
      } while (piVar6 != piVar5 + local_108);
    }
    if ((piVar5 != (int *)0x0) && (local_108 = 0, local_104 != 0)) {
      FUN_00dd48d0(piVar5,0);
    }
  }
  return;
}

