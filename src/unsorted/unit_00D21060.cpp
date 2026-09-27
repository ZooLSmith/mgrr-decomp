// src/unsorted/unit_00D21060.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D21060..00D21060, 1 functions

#include "mgrr.h"

// 00D21060  FUN_00d21060  size=390  [run]
void __fastcall FUN_00d21060(int param_1)

{
  undefined2 uVar1;
  short sVar2;
  int *piVar3;
  short sVar4;
  short sVar5;
  
  piVar3 = (int *)FUN_00c1b9a0();
  uVar1 = (**(code **)(*piVar3 + 0x74))();
  *(undefined2 *)(param_1 + 0x128) = uVar1;
  piVar3 = (int *)FUN_00c1b9a0();
  uVar1 = (**(code **)(*piVar3 + 0x78))();
  *(undefined2 *)(param_1 + 300) = uVar1;
  piVar3 = (int *)FUN_00c1b9a0();
  sVar2 = (**(code **)(*piVar3 + 0x7c))();
  sVar4 = *(short *)(param_1 + 0x128);
  *(short *)(param_1 + 0x12a) = sVar2;
  if ((*(short *)(param_1 + 0x134) < sVar4) &&
     (sVar5 = *(short *)(param_1 + 0x134) + 1, *(short *)(param_1 + 0x134) = sVar5, sVar4 < sVar5))
  {
    *(short *)(param_1 + 0x134) = sVar4;
  }
  sVar4 = *(short *)(param_1 + 300);
  if ((*(short *)(param_1 + 0x138) < sVar4) &&
     (sVar5 = *(short *)(param_1 + 0x138) + 1, *(short *)(param_1 + 0x138) = sVar5, sVar4 < sVar5))
  {
    *(short *)(param_1 + 0x138) = sVar4;
  }
  if ((*(short *)(param_1 + 0x136) < sVar2) &&
     (sVar4 = *(short *)(param_1 + 0x136) + 1, *(short *)(param_1 + 0x136) = sVar4, sVar2 < sVar4))
  {
    *(short *)(param_1 + 0x136) = sVar2;
  }
  if (9999 < *(short *)(param_1 + 0x134)) {
    *(undefined2 *)(param_1 + 0x134) = 9999;
  }
  if (9999 < *(short *)(param_1 + 0x138)) {
    *(undefined2 *)(param_1 + 0x138) = 9999;
  }
  if (9999 < *(short *)(param_1 + 0x136)) {
    *(undefined2 *)(param_1 + 0x136) = 9999;
  }
  FUN_00d13210();
  FUN_00d13620();
  FUN_00d137d0();
  if (*(short *)(param_1 + 0x12e) == *(short *)(param_1 + 0x134)) {
LAB_00d21191:
    if (*(int *)(param_1 + 0x158) == 0) goto LAB_00d211ba;
  }
  else if (*(int *)(param_1 + 0x158) == 0) {
    *(undefined4 *)(param_1 + 0x158) = 1;
    *(undefined4 *)(param_1 + 0x160) = 0;
    *(undefined4 *)(param_1 + 0x178) = 1;
    goto LAB_00d21191;
  }
  *(int *)(param_1 + 0x160) = *(int *)(param_1 + 0x160) + 1;
  if (6 < *(int *)(param_1 + 0x160)) {
    *(undefined4 *)(param_1 + 0x160) = 0;
    *(undefined4 *)(param_1 + 0x158) = 0;
    *(undefined4 *)(param_1 + 0x17c) = 1;
  }
LAB_00d211ba:
  *(undefined2 *)(param_1 + 0x12e) = *(undefined2 *)(param_1 + 0x134);
  *(undefined2 *)(param_1 + 0x130) = *(undefined2 *)(param_1 + 0x136);
  *(undefined2 *)(param_1 + 0x132) = *(undefined2 *)(param_1 + 0x138);
  return;
}

