// src/misc/cVRMissionResult2.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CF2E90..00D43A90, 4 functions

#include "mgrr.h"
#include "cVRMissionResult2.h"

// 00CF2E90  cVRMissionResult2::vf00  size=30  [class]
undefined4 __thiscall cVRMissionResult2::vf00(undefined4 param_1,byte param_2)

{
  cCustomObjCtrlManager::cCustomObjCtrlManager_4();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00CF2EB0  FUN_00cf2eb0  size=582  [callgraph]
void __fastcall FUN_00cf2eb0(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x50) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0x50) + 0x88);
  }
  *(uint *)(param_1 + 0x468) = uVar2;
  if (*(int *)(param_1 + 0x50) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)*(ushort *)(*(int *)(param_1 + 0x50) + 0x8a);
  }
  *(uint *)(param_1 + 0x46c) = uVar1;
  if (*(int *)(param_1 + 0x50) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)*(ushort *)(*(int *)(param_1 + 0x50) + 0x8c);
  }
  *(uint *)(param_1 + 0x470) = uVar1;
  if (*(int *)(param_1 + 0x50) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)*(ushort *)(*(int *)(param_1 + 0x50) + 0x9a);
  }
  *(uint *)(param_1 + 0x474) = uVar1;
  if (*(int *)(param_1 + 0x50) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)*(ushort *)(*(int *)(param_1 + 0x50) + 0xae);
  }
  *(uint *)(param_1 + 0x478) = uVar1;
  if (*(int *)(param_1 + 0x50) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)*(ushort *)(*(int *)(param_1 + 0x50) + 0xb0);
  }
  *(uint *)(param_1 + 0x47c) = uVar1;
  if (*(int *)(param_1 + 0x50) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)*(ushort *)(*(int *)(param_1 + 0x50) + 0xb2);
  }
  *(uint *)(param_1 + 0x480) = uVar1;
  if (*(int *)(param_1 + 0x50) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)*(ushort *)(*(int *)(param_1 + 0x50) + 0xc4);
  }
  *(uint *)(param_1 + 0x484) = uVar1;
  if (*(int *)(param_1 + 0x50) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)*(ushort *)(*(int *)(param_1 + 0x50) + 0xc6);
  }
  *(uint *)(param_1 + 0x488) = uVar1;
  if (*(int *)(param_1 + 0x50) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (uint)*(ushort *)(*(int *)(param_1 + 0x50) + 200);
  }
  *(uint *)(param_1 + 0x48c) = uVar1;
  iVar3 = *(int *)(param_1 + 0x50);
  if (((iVar3 != 0) && (uVar2 < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = uVar2 * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 0x3b0) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x50);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x46c) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 0x46c) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 0x3b0) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x50);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x470) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 0x470) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 0x3b0) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x50);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x47c) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 0x47c) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 0x3b0) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x50);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x480) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 0x480) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 0x3b0) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x50);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x484) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 0x484) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 0x3b0) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x50);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x488) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 0x488) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 0x3b0) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x50);
  if (((iVar3 != 0) && (*(uint *)(param_1 + 0x48c) < *(uint *)(iVar3 + 0x80))) &&
     (iVar3 = *(uint *)(param_1 + 0x48c) * 0x400 + *(int *)(iVar3 + 0x7c), iVar3 != 0)) {
    *(undefined4 *)(iVar3 + 0x3b0) = 0;
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    FUN_00cdeec0(2);
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x4c) + 0x1f8) = 1;
  }
  return;
}

// 00D18630  cVRMissionResult2::vf08  size=3191  [class]
void __fastcall cVRMissionResult2::vf08(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_20 [16];
  undefined1 auStack_10 [16];
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (uint)*(ushort *)(iVar1 + 0x8c);
  }
  *(uint *)(param_1 + 0x134) = uVar6;
  if (iVar1 == 0) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (uint)*(ushort *)(iVar1 + 0x9a);
  }
  *(uint *)(param_1 + 0x138) = uVar6;
  if (iVar1 == 0) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (uint)*(ushort *)(iVar1 + 0x9c);
  }
  *(uint *)(param_1 + 0x13c) = uVar6;
  if (iVar1 == 0) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (uint)*(ushort *)(iVar1 + 0x9e);
  }
  *(uint *)(param_1 + 0x140) = uVar6;
  if (iVar1 == 0) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (uint)*(ushort *)(iVar1 + 0xa0);
  }
  *(uint *)(param_1 + 0x144) = uVar6;
  if (iVar1 == 0) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (uint)*(ushort *)(iVar1 + 0xa2);
  }
  *(uint *)(param_1 + 0x148) = uVar6;
  if (iVar1 == 0) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (uint)*(ushort *)(iVar1 + 0xa4);
  }
  *(uint *)(param_1 + 0x14c) = uVar6;
  if (iVar1 == 0) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (uint)*(ushort *)(iVar1 + 0xa6);
  }
  *(uint *)(param_1 + 0x150) = uVar6;
  if (iVar1 == 0) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (uint)*(ushort *)(iVar1 + 0xae);
  }
  *(uint *)(param_1 + 0x154) = uVar6;
  if (iVar1 == 0) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (uint)*(ushort *)(iVar1 + 0xb0);
  }
  *(uint *)(param_1 + 0x158) = uVar6;
  if (iVar1 == 0) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (uint)*(ushort *)(iVar1 + 0xb2);
  }
  *(uint *)(param_1 + 0x15c) = uVar6;
  if (iVar1 == 0) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (uint)*(ushort *)(iVar1 + 0xb4);
  }
  *(uint *)(param_1 + 0x160) = uVar6;
  if (iVar1 == 0) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
  }
  *(uint *)(param_1 + 0x164) = uVar6;
  if (iVar1 == 0) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (uint)*(ushort *)(iVar1 + 0xb8);
  }
  *(uint *)(param_1 + 0x168) = uVar6;
  if (iVar1 == 0) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (uint)*(ushort *)(iVar1 + 0xba);
  }
  *(uint *)(param_1 + 0x16c) = uVar6;
  if (iVar1 == 0) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (uint)*(ushort *)(iVar1 + 0xbc);
  }
  *(uint *)(param_1 + 0x170) = uVar6;
  if (iVar1 == 0) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (uint)*(ushort *)(iVar1 + 0xbe);
  }
  *(uint *)(param_1 + 0x174) = uVar6;
  if (iVar1 == 0) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (uint)*(ushort *)(iVar1 + 0xc0);
  }
  *(uint *)(param_1 + 0x178) = uVar6;
  if (iVar1 == 0) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (uint)*(ushort *)(iVar1 + 0xc4);
  }
  *(uint *)(param_1 + 0x17c) = uVar6;
  if (iVar1 == 0) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (uint)*(ushort *)(iVar1 + 0xc6);
  }
  *(uint *)(param_1 + 0x180) = uVar6;
  if (iVar1 == 0) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (uint)*(ushort *)(iVar1 + 0xd8);
  }
  *(uint *)(param_1 + 0x184) = uVar6;
  if (iVar1 == 0) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (uint)*(ushort *)(iVar1 + 0xda);
  }
  *(uint *)(param_1 + 0x188) = uVar6;
  if (iVar1 == 0) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (uint)*(ushort *)(iVar1 + 0xdc);
  }
  *(uint *)(param_1 + 0x18c) = uVar6;
  if (iVar1 == 0) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (uint)*(ushort *)(iVar1 + 0xea);
  }
  *(uint *)(param_1 + 400) = uVar6;
  if (iVar1 == 0) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (uint)*(ushort *)(iVar1 + 0xec);
  }
  *(uint *)(param_1 + 0x194) = uVar6;
  if (iVar1 == 0) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (uint)*(ushort *)(iVar1 + 0xee);
  }
  *(uint *)(param_1 + 0x198) = uVar6;
  if (iVar1 == 0) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (uint)*(ushort *)(iVar1 + 0xf0);
  }
  *(uint *)(param_1 + 0x19c) = uVar6;
  if (iVar1 == 0) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (uint)*(ushort *)(iVar1 + 0xf2);
  }
  *(uint *)(param_1 + 0x1a0) = uVar6;
  if (iVar1 == 0) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (uint)*(ushort *)(iVar1 + 0xf4);
  }
  *(uint *)(param_1 + 0x1a4) = uVar6;
  if (iVar1 == 0) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (uint)*(ushort *)(iVar1 + 0x13a);
  }
  *(uint *)(param_1 + 0x1a8) = uVar6;
  if (iVar1 == 0) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (uint)*(ushort *)(iVar1 + 0x13c);
  }
  *(uint *)(param_1 + 0x1ac) = uVar6;
  if (iVar1 == 0) {
    uVar7 = 0xffffffff;
  }
  else {
    uVar7 = (uint)*(ushort *)(iVar1 + 0x13e);
  }
  *(uint *)(param_1 + 0x1b0) = uVar7;
  if (iVar1 == 0) {
    uVar7 = 0xffffffff;
  }
  else {
    uVar7 = (uint)*(ushort *)(iVar1 + 0x14c);
  }
  *(uint *)(param_1 + 0x1b4) = uVar7;
  if ((((iVar1 == 0) || (*(uint *)(iVar1 + 0x80) <= uVar6)) ||
      (piVar5 = *(int **)(uVar6 * 0x400 + 0x3f0 + *(int *)(iVar1 + 0x7c)), piVar5 == (int *)0x0)) ||
     (iVar1 = (**(code **)(*piVar5 + 8))(), iVar1 != 0)) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = piVar5 + 4;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  *(int **)(param_1 + 0x34) = piVar5;
  if (((iVar1 == 0) || (*(uint *)(iVar1 + 0x80) <= *(uint *)(param_1 + 0x1b0))) ||
     ((piVar5 = *(int **)(*(uint *)(param_1 + 0x1b0) * 0x400 + 0x3f0 + *(int *)(iVar1 + 0x7c)),
      piVar5 == (int *)0x0 || (iVar1 = (**(code **)(*piVar5 + 8))(), iVar1 != 0)))) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = piVar5 + 4;
  }
  *(int **)(param_1 + 0x50) = piVar5;
  if (*(int *)(param_1 + 0x1e0) != -1) {
    FUN_0099a460(auStack_10,"VR_MSG_%02d",*(int *)(param_1 + 0x1e0));
    iVar1 = *(int *)(param_1 + 0x18);
    if (((iVar1 != 0) && (*(uint *)(param_1 + 0x134) < *(uint *)(iVar1 + 0x80))) &&
       ((piVar5 = *(int **)(*(uint *)(param_1 + 0x134) * 0x400 + 0x3f0 + *(int *)(iVar1 + 0x7c)),
        piVar5 != (int *)0x0 && (iVar1 = (**(code **)(*piVar5 + 8))(), iVar1 == 3)))) {
      uVar2 = FUN_00e03ea0(auStack_10);
      piVar5[0x2a] = -1;
      piVar5[0x2b] = 0;
      if (((piVar5[5] != 0) && (*(int *)(piVar5[5] + 4) != 0)) &&
         (iVar1 = FUN_00cb1cd0(uVar2), -1 < iVar1)) {
        piVar5[0x2a] = iVar1;
        piVar5[0x2b] = 0;
        piVar5[0x2e] = 0;
      }
    }
  }
  FUN_0099a460(auStack_20,&DAT_01655a78,*(undefined4 *)(param_1 + 0x1d0));
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x14c) < *(uint *)(iVar1 + 0x80))) &&
     ((piVar5 = *(int **)(*(uint *)(param_1 + 0x14c) * 0x400 + 0x3f0 + *(int *)(iVar1 + 0x7c)),
      piVar5 != (int *)0x0 && (iVar1 = (**(code **)(*piVar5 + 8))(), iVar1 == 4)))) {
    FUN_00cb3cc0(piVar5,auStack_20);
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x150) < *(uint *)(iVar1 + 0x80))) &&
     ((piVar5 = *(int **)(*(uint *)(param_1 + 0x150) * 0x400 + 0x3f0 + *(int *)(iVar1 + 0x7c)),
      piVar5 != (int *)0x0 && (iVar1 = (**(code **)(*piVar5 + 8))(), iVar1 == 4)))) {
    FUN_00cb3cc0(piVar5,auStack_20);
  }
  if (*(float *)(param_1 + 0x1d8) <= 0.0) {
    FUN_0099a460(auStack_20,"--:--.--");
    iVar1 = *(int *)(param_1 + 0x18);
    if ((((iVar1 != 0) && (*(uint *)(param_1 + 0x168) < *(uint *)(iVar1 + 0x80))) &&
        (piVar5 = *(int **)(*(uint *)(param_1 + 0x168) * 0x400 + 0x3f0 + *(int *)(iVar1 + 0x7c)),
        piVar5 != (int *)0x0)) && (iVar1 = (**(code **)(*piVar5 + 8))(), iVar1 == 4)) {
      FUN_00cb3cc0(piVar5,auStack_20);
    }
    iVar1 = *(int *)(param_1 + 0x18);
    if (((iVar1 == 0) || (*(uint *)(iVar1 + 0x80) <= *(uint *)(param_1 + 0x16c))) ||
       (piVar5 = *(int **)(*(uint *)(param_1 + 0x16c) * 0x400 + 0x3f0 + *(int *)(iVar1 + 0x7c)),
       piVar5 == (int *)0x0)) goto LAB_00d18c70;
    iVar1 = (**(code **)(*piVar5 + 8))();
  }
  else {
    iVar3 = FUN_00fdbc60();
    iVar1 = iVar3 / 0x3c;
    iVar3 = iVar3 % 0x3c;
    iVar4 = FUN_00fdbc60();
    if (999 < iVar4) {
      iVar4 = 0;
    }
    if (99 < iVar1) {
      iVar1 = 99;
      iVar3 = 0x3b;
      iVar4 = 99;
    }
    FUN_0099a460(auStack_20,"%02d:%02d.%02d",iVar1,iVar3,iVar4);
    iVar1 = *(int *)(param_1 + 0x18);
    if (((iVar1 != 0) && (*(uint *)(param_1 + 0x168) < *(uint *)(iVar1 + 0x80))) &&
       ((piVar5 = *(int **)(*(uint *)(param_1 + 0x168) * 0x400 + 0x3f0 + *(int *)(iVar1 + 0x7c)),
        piVar5 != (int *)0x0 && (iVar1 = (**(code **)(*piVar5 + 8))(), iVar1 == 4)))) {
      FUN_00cb3cc0(piVar5,auStack_20);
    }
    iVar1 = *(int *)(param_1 + 0x18);
    if (((iVar1 == 0) || (*(uint *)(iVar1 + 0x80) <= *(uint *)(param_1 + 0x16c))) ||
       (piVar5 = *(int **)(*(uint *)(param_1 + 0x16c) * 0x400 + 0x3f0 + *(int *)(iVar1 + 0x7c)),
       piVar5 == (int *)0x0)) goto LAB_00d18c70;
    iVar1 = (**(code **)(*piVar5 + 8))();
  }
  if (iVar1 == 4) {
    FUN_00cb3cc0(piVar5,auStack_20);
  }
LAB_00d18c70:
  piVar5 = (int *)FUN_00c13920();
  iVar1 = (**(code **)(*piVar5 + 0xa8))();
  iVar1 = iVar1 + DAT_01b7589c;
  *(int *)(param_1 + 0x1dc) = iVar1;
  FUN_00ca84a0(iVar1,auStack_20,0x10);
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x184) < *(uint *)(iVar1 + 0x80))) &&
     ((piVar5 = *(int **)(*(uint *)(param_1 + 0x184) * 0x400 + 0x3f0 + *(int *)(iVar1 + 0x7c)),
      piVar5 != (int *)0x0 && (iVar1 = (**(code **)(*piVar5 + 8))(), iVar1 == 4)))) {
    FUN_00cb3cc0(piVar5,auStack_20);
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x188) < *(uint *)(iVar1 + 0x80))) &&
     ((piVar5 = *(int **)(*(uint *)(param_1 + 0x188) * 0x400 + 0x3f0 + *(int *)(iVar1 + 0x7c)),
      piVar5 != (int *)0x0 && (iVar1 = (**(code **)(*piVar5 + 8))(), iVar1 == 4)))) {
    FUN_00cb3cc0(piVar5,auStack_20);
  }
  iVar1 = *(int *)(param_1 + 0x18);
  uVar6 = *(uint *)(param_1 + 0x13c);
  if (((iVar1 != 0) && (uVar6 < *(uint *)(iVar1 + 0x80))) &&
     (*(int *)(iVar1 + 0x7c) + 0x2a0 + uVar6 * 0x400 != 0)) {
    if (uVar6 < *(uint *)(iVar1 + 0x80)) {
      *(undefined4 *)(*(int *)(iVar1 + 0x7c) + uVar6 * 0x400 + 0x370) = 0;
    }
    else {
      uRam000000d0 = 0;
    }
  }
  iVar1 = *(int *)(param_1 + 0x18);
  uVar6 = *(uint *)(param_1 + 0x148);
  if (((iVar1 != 0) && (uVar6 < *(uint *)(iVar1 + 0x80))) &&
     (*(int *)(iVar1 + 0x7c) + 0x2a0 + uVar6 * 0x400 != 0)) {
    if (uVar6 < *(uint *)(iVar1 + 0x80)) {
      iVar1 = *(int *)(iVar1 + 0x7c) + 0x2a0 + uVar6 * 0x400;
    }
    else {
      iVar1 = 0;
    }
    *(undefined4 *)(iVar1 + 0xd0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  uVar6 = *(uint *)(param_1 + 0x158);
  if (((iVar1 != 0) && (uVar6 < *(uint *)(iVar1 + 0x80))) &&
     (*(int *)(iVar1 + 0x7c) + 0x2a0 + uVar6 * 0x400 != 0)) {
    if (uVar6 < *(uint *)(iVar1 + 0x80)) {
      iVar1 = *(int *)(iVar1 + 0x7c) + 0x2a0 + uVar6 * 0x400;
    }
    else {
      iVar1 = 0;
    }
    *(undefined4 *)(iVar1 + 0xd0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  uVar6 = *(uint *)(param_1 + 0x164);
  if (((iVar1 != 0) && (uVar6 < *(uint *)(iVar1 + 0x80))) &&
     (*(int *)(iVar1 + 0x7c) + 0x2a0 + uVar6 * 0x400 != 0)) {
    if (uVar6 < *(uint *)(iVar1 + 0x80)) {
      iVar1 = *(int *)(iVar1 + 0x7c) + 0x2a0 + uVar6 * 0x400;
    }
    else {
      iVar1 = 0;
    }
    *(undefined4 *)(iVar1 + 0xd0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  uVar6 = *(uint *)(param_1 + 0x170);
  if (((iVar1 != 0) && (uVar6 < *(uint *)(iVar1 + 0x80))) &&
     (*(int *)(iVar1 + 0x7c) + 0x2a0 + uVar6 * 0x400 != 0)) {
    if (uVar6 < *(uint *)(iVar1 + 0x80)) {
      *(undefined4 *)(*(int *)(iVar1 + 0x7c) + 0x370 + uVar6 * 0x400) = 0;
    }
    else {
      uRam000000d0 = 0;
    }
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x134) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0x134) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x13c) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0x13c) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x140) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0x140) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x144) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0x144) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x148) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0x148) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x14c) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0x14c) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x150) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0x150) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x158) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0x158) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x15c) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0x15c) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x160) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0x160) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x164) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0x164) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x168) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0x168) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x16c) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0x16c) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x170) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0x170) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x174) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0x174) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x178) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0x178) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x17c) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0x17c) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x180) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0x180) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x184) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0x184) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x188) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0x188) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x18c) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0x18c) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x194) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0x194) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x198) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0x198) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x19c) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0x19c) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x1a0) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0x1a0) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (((iVar1 != 0) && (*(uint *)(param_1 + 0x1a4) < *(uint *)(iVar1 + 0x80))) &&
     (iVar1 = *(uint *)(param_1 + 0x1a4) * 0x400 + *(int *)(iVar1 + 0x7c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x3b0) = 0;
  }
  *(uint *)(param_1 + 500) = (uint)(*(int *)(param_1 + 0x1d4) != -1);
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_00cdeec0(0);
  }
  FUN_00d049a0();
  FUN_00cf2eb0();
  *(undefined4 *)(param_1 + 0x200) = 1;
  uVar2 = FUN_009a29d0();
  *(undefined4 *)(param_1 + 0x4a0) = uVar2;
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x1f8) = 1;
  }
  return;
}

// 00D43A90  cVRMissionResult2::vf14  size=796  [class]
void __fastcall cVRMissionResult2::vf14(int param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  float10 fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  iVar4 = FUN_00c20a50();
  if (iVar4 != 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 0x1b8)) {
  case 0:
    if (*(int *)(param_1 + 0x204) != 0) {
      if (*(int *)(param_1 + 0x14) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x1f8) = 0;
      }
      if (*(int *)(param_1 + 0x4a0) != 0) {
        uVar8 = 0;
        uVar7 = 0x41700000;
        uVar5 = FUN_00cb2790(*(undefined4 *)(param_1 + 0x1a8));
        FUN_009ab030("vr_result",uVar5,uVar7,uVar8);
      }
      if (*(int *)(param_1 + 0x14) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 1;
      }
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdeec0(3);
      }
      *(int *)(param_1 + 0x1b8) = *(int *)(param_1 + 0x1b8) + 1;
    }
    break;
  case 1:
    iVar4 = FUN_00ce4dd0(3);
    if (iVar4 == 0) break;
    FUN_00e5e050("core_se_sys_mission_accomp",0);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x17c),1);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x180),1);
    FUN_00ccdf90(*(undefined4 *)(param_1 + 0x17c),1,3);
    FUN_00ccdf90(*(undefined4 *)(param_1 + 0x180),1,3);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x184),1);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x188),1);
    FUN_00cb2310(*(undefined4 *)(param_1 + 0x18c),1);
    FUN_00cce0e0(*(undefined4 *)(param_1 + 0x184),1,3);
    FUN_00cce0e0(*(undefined4 *)(param_1 + 0x188),1,3);
    FUN_00ccdf90(*(undefined4 *)(param_1 + 0x18c),1,3);
    *(int *)(param_1 + 0x1b8) = *(int *)(param_1 + 0x1b8) + 1;
  case 2:
    bVar1 = FUN_00d40ba0();
    bVar2 = FUN_00d40f60();
    bVar2 = bVar1 & 1 & bVar2;
    bVar1 = 0;
    if (bVar2 != 0) {
      bVar1 = FUN_00d06050();
      bVar1 = bVar2 & bVar1;
      if (*(int *)(param_1 + 500) != 0) {
        bVar2 = FUN_00d35f60();
        bVar1 = bVar1 & bVar2;
      }
    }
    fVar6 = (float10)FUN_00d047a0(param_1,*(undefined4 *)(param_1 + 0x184));
    FUN_00cb28a0(*(undefined4 *)(param_1 + 0x18c),(float)-fVar6);
    iVar4 = FUN_00cb31a0(*(undefined4 *)(param_1 + 0x184));
    if ((bVar1 & iVar4 == 0) != 0) {
      *(int *)(param_1 + 0x1b8) = *(int *)(param_1 + 0x1b8) + 1;
      *(undefined4 *)(param_1 + 0x1ec) = 0;
    }
    break;
  case 3:
    cVar3 = FUN_00ce12f0(0);
    if (((cVar3 != '\0') || (DAT_01b7b79c == 1)) || (*(int *)(param_1 + 0x330) == 0)) {
      if (*(int *)(param_1 + 0x330) != 0) {
        FUN_00e5e050("core_se_sys_mission_bp_count",0);
      }
      *(int *)(param_1 + 0x1b8) = *(int *)(param_1 + 0x1b8) + 1;
    }
    break;
  case 4:
    cVar3 = FUN_00ce12f0(0);
    if (((cVar3 == '\0') && (DAT_01b7b79c != 1)) && (iVar4 = *(int *)(param_1 + 0x330), iVar4 != 0))
    {
      if (iVar4 < 0x2711) {
        if (iVar4 < 0x3e9) {
          iVar4 = ((iVar4 < 0x65) - 1 & 10) + 1;
        }
        else {
          iVar4 = 0x6f;
        }
      }
      else {
        iVar4 = 0x457;
      }
      *(int *)(param_1 + 0x330) = *(int *)(param_1 + 0x330) - iVar4;
      *(int *)(param_1 + 0x1dc) = *(int *)(param_1 + 0x1dc) + iVar4;
      FUN_00d06950(*(undefined4 *)(param_1 + 0x330));
      FUN_00d04880(*(undefined4 *)(param_1 + 0x1dc));
    }
    else {
      if (*(int *)(param_1 + 0x330) != 0) {
        FUN_00d06950(0);
        FUN_00d04880(*(int *)(param_1 + 0x1dc) + *(int *)(param_1 + 0x330));
      }
      FUN_00e5e050("core_se_sys_mission_bp_stop",0);
      *(int *)(param_1 + 0x1b8) = *(int *)(param_1 + 0x1b8) + 1;
    }
    break;
  case 5:
    cVar3 = FUN_00ce12f0(0);
    if ((cVar3 != '\0') || (DAT_01b7b79c == 1)) {
      *(undefined4 *)(param_1 + 0x1b8) = 99;
    }
  }
  if (*(int *)(param_1 + 0x4a0) == 0) {
    return;
  }
  FUN_009a2a10();
  return;
}

