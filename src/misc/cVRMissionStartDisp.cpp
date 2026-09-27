// src/misc/cVRMissionStartDisp.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CD9890..00D43990, 4 functions

#include "mgrr.h"
#include "cVRMissionStartDisp.h"

// 00CD9890  cVRMissionStartDisp::cVRMissionStartDisp  size=100  [class]
undefined4 * cVRMissionStartDisp::cVRMissionStartDisp(void)

{
  undefined4 *extraout_EDX;
  
  cCustomObjCtrlManagerEx::cCustomObjCtrlManagerEx();
  extraout_EDX[0x3d] = 0;
  extraout_EDX[0x37] = 0;
  extraout_EDX[0x42] = 0;
  extraout_EDX[0x38] = 0;
  extraout_EDX[0x39] = 0;
  extraout_EDX[0x3a] = 0;
  extraout_EDX[0x3b] = 0;
  extraout_EDX[0x3c] = 0;
  extraout_EDX[0x40] = 0;
  extraout_EDX[0x41] = 0;
  *extraout_EDX = vftable;
  extraout_EDX[0x3e] = 0xffffffff;
  extraout_EDX[0x3f] = 1;
  return extraout_EDX;
}

// 00CF2E50  cVRMissionStartDisp::vf00  size=63  [class]
undefined4 * __thiscall cVRMissionStartDisp::vf00(undefined4 *param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = param_1[5];
  *param_1 = cCustomObjCtrlManager::vftable;
  param_1[6] = 0;
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 0x24) & 1) == 0) {
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 1;
      *(undefined4 *)(iVar1 + 4) = 0;
    }
    param_1[5] = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D04070  cVRMissionStartDisp::vf08  size=1613  [class]
void __fastcall cVRMissionStartDisp::vf08(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 local_10 [16];
  
  iVar4 = *(int *)(param_1 + 0x18);
  if (iVar4 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar4 + 0x88);
  }
  *(uint *)(param_1 + 0x90) = uVar3;
  if (iVar4 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar4 + 0x8a);
  }
  *(uint *)(param_1 + 0x94) = uVar3;
  if (iVar4 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar4 + 0x8c);
  }
  *(uint *)(param_1 + 0x98) = uVar3;
  if (iVar4 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar4 + 0x9e);
  }
  *(uint *)(param_1 + 0x9c) = uVar3;
  if (iVar4 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar4 + 0xa0);
  }
  *(uint *)(param_1 + 0xa0) = uVar3;
  if (iVar4 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar4 + 0xa4);
  }
  *(uint *)(param_1 + 0xa4) = uVar3;
  if (iVar4 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar4 + 0xa6);
  }
  *(uint *)(param_1 + 0xa8) = uVar3;
  if (iVar4 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar4 + 0xae);
  }
  *(uint *)(param_1 + 0xac) = uVar3;
  if (iVar4 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar4 + 0xb0);
  }
  *(uint *)(param_1 + 0xb0) = uVar3;
  if (iVar4 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar4 + 0xb2);
  }
  *(uint *)(param_1 + 0xb4) = uVar3;
  if (iVar4 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar4 + 0xb4);
  }
  *(uint *)(param_1 + 0xb8) = uVar3;
  if (iVar4 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar4 + 0xb6);
  }
  *(uint *)(param_1 + 0xbc) = uVar3;
  if (iVar4 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar4 + 0xd6);
  }
  *(uint *)(param_1 + 0xc0) = uVar3;
  if (iVar4 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar4 + 0xd8);
  }
  *(uint *)(param_1 + 0xc4) = uVar3;
  if (iVar4 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar4 + 0xda);
  }
  *(uint *)(param_1 + 200) = uVar3;
  if (iVar4 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar4 + 0xdc);
  }
  *(uint *)(param_1 + 0xcc) = uVar3;
  if (iVar4 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar4 + 0xde);
  }
  *(uint *)(param_1 + 0xd0) = uVar3;
  if (iVar4 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar4 + 0xe0);
  }
  *(uint *)(param_1 + 0xd4) = uVar3;
  if (*(float *)(param_1 + 0xf4) <= 0.0) {
    FUN_0099a460(local_10,"--:--.--");
    iVar4 = *(int *)(param_1 + 0x18);
    if ((iVar4 == 0) || (*(uint *)(iVar4 + 0x80) <= *(uint *)(param_1 + 0x98))) goto LAB_00d0430c;
    piVar5 = *(int **)(*(uint *)(param_1 + 0x98) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c));
  }
  else {
    iVar1 = FUN_00fdbc60();
    iVar4 = iVar1 / 0x3c;
    iVar1 = iVar1 % 0x3c;
    iVar2 = FUN_00fdbc60();
    if (999 < iVar2) {
      iVar2 = 0;
    }
    if (99 < iVar4) {
      iVar4 = 99;
      iVar1 = 0x3b;
      iVar2 = 99;
    }
    FUN_0099a460(local_10,"%02d:%02d.%02d",iVar4,iVar1,iVar2);
    iVar4 = *(int *)(param_1 + 0x18);
    if ((iVar4 == 0) || (*(uint *)(iVar4 + 0x80) <= *(uint *)(param_1 + 0x94))) goto LAB_00d0430c;
    piVar5 = *(int **)(*(int *)(iVar4 + 0x7c) + 0x3f0 + *(uint *)(param_1 + 0x94) * 0x400);
  }
  if ((piVar5 != (int *)0x0) && (iVar4 = (**(code **)(*piVar5 + 8))(), iVar4 == 4)) {
    FUN_00cb3cc0(piVar5,local_10);
  }
LAB_00d0430c:
  iVar4 = *(int *)(param_1 + 0x18);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0x94) < *(uint *)(iVar4 + 0x80))) &&
     (iVar4 = *(uint *)(param_1 + 0x94) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
    *(undefined4 *)(iVar4 + 0x3b0) = 0;
  }
  iVar4 = *(int *)(param_1 + 0x18);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0x98) < *(uint *)(iVar4 + 0x80))) &&
     (iVar4 = *(uint *)(param_1 + 0x98) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
    *(undefined4 *)(iVar4 + 0x3b0) = 0;
  }
  iVar4 = *(int *)(param_1 + 0xf0);
  iVar1 = FUN_00d46780();
  if (iVar1 == 0) {
    iVar1 = FUN_00d467a0();
    if (iVar1 == 0) {
      if (0x14 < *(uint *)(param_1 + 0xf0)) {
        iVar4 = *(uint *)(param_1 + 0xf0) - 0x14;
      }
    }
    else {
      iVar4 = *(int *)(param_1 + 0xf0) + -0x37;
    }
  }
  else {
    iVar4 = *(int *)(param_1 + 0xf0) + -0x32;
  }
  FUN_0099a460(local_10,&DAT_01655a78,iVar4);
  iVar1 = FUN_00d467c0();
  iVar4 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x10c) = (uint)(iVar1 == 0);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0xa4) < *(uint *)(iVar4 + 0x80))) &&
     ((piVar5 = *(int **)(*(uint *)(param_1 + 0xa4) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
      piVar5 != (int *)0x0 && (iVar4 = (**(code **)(*piVar5 + 8))(), iVar4 == 4)))) {
    FUN_00cb3cc0(piVar5,local_10);
  }
  iVar4 = *(int *)(param_1 + 0x18);
  if ((((iVar4 != 0) && (*(uint *)(param_1 + 0xa8) < *(uint *)(iVar4 + 0x80))) &&
      (piVar5 = *(int **)(*(uint *)(param_1 + 0xa8) * 0x400 + 0x3f0 + *(int *)(iVar4 + 0x7c)),
      piVar5 != (int *)0x0)) && (iVar4 = (**(code **)(*piVar5 + 8))(), iVar4 == 4)) {
    FUN_00cb3cc0(piVar5,local_10);
  }
  iVar4 = *(int *)(param_1 + 0x18);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0xa4) < *(uint *)(iVar4 + 0x80))) &&
     (iVar4 = *(uint *)(param_1 + 0xa4) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
    *(undefined4 *)(iVar4 + 0x3b0) = 0;
  }
  iVar4 = *(int *)(param_1 + 0x18);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0xa8) < *(uint *)(iVar4 + 0x80))) &&
     (iVar4 = *(uint *)(param_1 + 0xa8) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
    *(undefined4 *)(iVar4 + 0x3b0) = 0;
  }
  iVar4 = *(int *)(param_1 + 0x18);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0xc4) < *(uint *)(iVar4 + 0x80))) &&
     (iVar4 = *(uint *)(param_1 + 0xc4) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
    *(undefined4 *)(iVar4 + 0x3b0) = 0;
  }
  iVar4 = *(int *)(param_1 + 0x18);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 200) < *(uint *)(iVar4 + 0x80))) &&
     (iVar4 = *(uint *)(param_1 + 200) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
    *(undefined4 *)(iVar4 + 0x3b0) = 0;
  }
  iVar4 = *(int *)(param_1 + 0x18);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0xcc) < *(uint *)(iVar4 + 0x80))) &&
     (iVar4 = *(uint *)(param_1 + 0xcc) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
    *(undefined4 *)(iVar4 + 0x3b0) = 0;
  }
  iVar4 = *(int *)(param_1 + 0x18);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0xd0) < *(uint *)(iVar4 + 0x80))) &&
     (iVar4 = *(uint *)(param_1 + 0xd0) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
    *(undefined4 *)(iVar4 + 0x3b0) = 0;
  }
  iVar4 = *(int *)(param_1 + 0x18);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0xd4) < *(uint *)(iVar4 + 0x80))) &&
     (iVar4 = *(uint *)(param_1 + 0xd4) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
    *(undefined4 *)(iVar4 + 0x3b0) = 0;
  }
  if (*(int *)(param_1 + 0xf8) != -1) {
    FUN_0099a460(local_10,"VR_MSG_%02d",*(int *)(param_1 + 0xf8));
    if (DAT_018b9174 == 0xd72) {
      FUN_0099a460(local_10,"VR_MSG_21");
    }
    bVar6 = DAT_01dc2cd8 == 0;
    if (DAT_018b9174 == 0xd72) {
      FUN_00cf9770(*(undefined4 *)(param_1 + 0xb4),local_10,bVar6,1);
      uVar7 = *(undefined4 *)(param_1 + 0xb8);
      uVar8 = 1;
    }
    else {
      FUN_00cf9770(*(undefined4 *)(param_1 + 0xb4),local_10,bVar6,0xffffffff);
      uVar7 = *(undefined4 *)(param_1 + 0xb8);
      uVar8 = 0xffffffff;
    }
    FUN_00cf9770(uVar7,local_10,bVar6,uVar8);
  }
  iVar4 = *(int *)(param_1 + 0x18);
  uVar3 = *(uint *)(param_1 + 0xb0);
  if (((iVar4 != 0) && (uVar3 < *(uint *)(iVar4 + 0x80))) &&
     (*(int *)(iVar4 + 0x7c) + 0x2a0 + uVar3 * 0x400 != 0)) {
    if (uVar3 < *(uint *)(iVar4 + 0x80)) {
      iVar4 = *(int *)(iVar4 + 0x7c) + 0x2a0 + uVar3 * 0x400;
    }
    else {
      iVar4 = 0;
    }
    *(undefined4 *)(iVar4 + 0xd0) = 0;
  }
  iVar4 = *(int *)(param_1 + 0x18);
  uVar3 = *(uint *)(param_1 + 0xbc);
  if (((iVar4 != 0) && (uVar3 < *(uint *)(iVar4 + 0x80))) &&
     (*(int *)(iVar4 + 0x7c) + 0x2a0 + uVar3 * 0x400 != 0)) {
    if (uVar3 < *(uint *)(iVar4 + 0x80)) {
      iVar4 = *(int *)(iVar4 + 0x7c) + 0x2a0 + uVar3 * 0x400;
    }
    else {
      iVar4 = 0;
    }
    *(undefined4 *)(iVar4 + 0xd0) = 0;
  }
  iVar4 = *(int *)(param_1 + 0x18);
  if (((iVar4 != 0) && (*(uint *)(param_1 + 0x90) < *(uint *)(iVar4 + 0x80))) &&
     (iVar4 = *(uint *)(param_1 + 0x90) * 0x400 + *(int *)(iVar4 + 0x7c), iVar4 != 0)) {
    *(undefined4 *)(iVar4 + 0x3b0) = 0;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_00cdeec0(2);
  }
  return;
}

// 00D43990  cVRMissionStartDisp::create  size=240  [class]
void __fastcall cVRMissionStartDisp::create(int param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar2 = FUN_00e03960();
  fVar1 = *(float *)(iVar2 + 0x7c) + *(float *)(param_1 + 0x108);
  *(float *)(param_1 + 0x108) = fVar1;
  switch(*(undefined4 *)(param_1 + 0xdc)) {
  case 0:
    *(int *)(param_1 + 0x104) = *(int *)(param_1 + 0x104) + 1;
    if (0x28 < *(int *)(param_1 + 0x104)) {
      *(undefined4 *)(param_1 + 0x104) = 0;
      if (*(int *)(param_1 + 0x14) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x14) + 4) = 1;
      }
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdeec0(0);
      }
      *(int *)(param_1 + 0xdc) = *(int *)(param_1 + 0xdc) + 1;
    }
    break;
  case 1:
    break;
  case 2:
    if (fVar1 < 453.0) {
      return;
    }
    if (*(int *)(param_1 + 0x18) != 0) {
      FUN_00cdeec0(1);
    }
    *(int *)(param_1 + 0xdc) = *(int *)(param_1 + 0xdc) + 1;
    return;
  case 3:
    if (*(int *)(param_1 + 0x18) == 0) {
      return;
    }
    iVar2 = FUN_00cdf400(1);
    if (iVar2 == 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0xdc) = 99;
    return;
  default:
    return;
  }
  uVar5 = 1;
  if (*(int *)(param_1 + 0x10c) != 0) {
    uVar5 = FUN_00d40620();
    uVar5 = uVar5 & 1;
  }
  uVar3 = FUN_00d40710();
  uVar4 = FUN_00d40840();
  if ((uVar5 & uVar3 & uVar4) == 0) {
    return;
  }
  *(int *)(param_1 + 0xdc) = *(int *)(param_1 + 0xdc) + 1;
  return;
}

