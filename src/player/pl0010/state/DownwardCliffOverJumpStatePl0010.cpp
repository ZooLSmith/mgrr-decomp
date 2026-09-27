// src/player/pl0010/state/DownwardCliffOverJumpStatePl0010.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00B813F0..00BDE790, 9 functions

#include "mgrr.h"
#include "DownwardCliffOverJumpStatePl0010.h"

// 00B813F0  DownwardCliffOverJumpStatePl0010::vf08  size=52  [class]
undefined4 __thiscall DownwardCliffOverJumpStatePl0010::vf08(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf08(param_2);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return 1;
}

// 00B81430  DownwardCliffOverJumpStatePl0010::vf24  size=19  [class]
bool DownwardCliffOverJumpStatePl0010::vf24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_1);
  return iVar1 != 0;
}

// 00B81470  DownwardCliffOverJumpStatePl0010::vf00  size=6  [class]
undefined * DownwardCliffOverJumpStatePl0010::vf00(void)

{
  return &DAT_01be9e0c;
}

// 00B90F40  DownwardCliffOverJumpStatePl0010::vf04  size=31  [class]
undefined4 * __thiscall DownwardCliffOverJumpStatePl0010::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00BAA570  DownwardCliffOverJumpStatePl0010::vf18  size=161  [class]
void __thiscall DownwardCliffOverJumpStatePl0010::vf18(int param_1,undefined4 *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar4 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar3 = FUN_00dd6d80(puVar4);
    uVar2 = -(uint)(iVar3 != 0) & (uint)param_2;
  }
  piVar1 = *(int **)(uVar2 + 0xc);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar4 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar3 = FUN_00dd6d80(puVar4);
    uVar2 = -(uint)(iVar3 != 0) & (uint)piVar1;
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    if ((*(int *)(uVar2 + 0x41e0) == 0) || (0.36 < *(float *)(uVar2 + 0x41e4))) {
      iVar3 = FUN_008e2740();
      if (iVar3 == 0) goto LAB_00baa604;
    }
    FUN_00d82510(0x13,0x4b);
  }
LAB_00baa604:
  StateMachineNode::vf18(param_2);
  return;
}

// 00BAA620  DownwardCliffOverJumpStatePl0010::vf20  size=146  [class]
undefined4 DownwardCliffOverJumpStatePl0010::vf20(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  
  iVar2 = StateMachineNode::vf20(param_1);
  if (iVar2 == 0) {
    return 0;
  }
  if (param_1 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar4 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar2 = FUN_00dd6d80(puVar4);
    uVar3 = -(uint)(iVar2 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar3 + 0xc);
  if (piVar1 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar4 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar4);
    uVar3 = -(uint)(iVar2 != 0) & (uint)piVar1;
  }
  *(undefined4 *)(uVar3 + 0x4170) = 0;
  *(undefined4 *)(uVar3 + 0x4180) = *(undefined4 *)(uVar3 + 0x418c);
  *(undefined4 *)(uVar3 + 0x417c) = *(undefined4 *)(uVar3 + 0x4188);
  *(undefined4 *)(uVar3 + 0x4184) = *(undefined4 *)(uVar3 + 0x4190);
  return 1;
}

// 00BCA480  DownwardCliffOverJumpStatePl0010::vf14  size=405  [class]
void __thiscall DownwardCliffOverJumpStatePl0010::vf14(int param_1,undefined4 *param_2)

{
  float fVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined *puVar6;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar6 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar4 = FUN_00dd6d80(puVar6);
    uVar3 = -(uint)(iVar4 != 0) & (uint)param_2;
  }
  piVar2 = *(int **)(uVar3 + 0xc);
  if (piVar2 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar6 = &DAT_01be9db8;
    (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
    iVar4 = FUN_00dd6d80(puVar6);
    uVar3 = -(uint)(iVar4 != 0) & (uint)piVar2;
  }
  if (*(int *)(param_1 + 0x54) == 0) {
    iVar4 = FUN_00a94db0(0xcf);
    if (iVar4 != 0) {
      *(undefined4 *)(param_1 + 0x50) = 0xd0;
      uVar5 = FUN_00aa3f60(0xd0);
      FUN_00a96070(uVar5,0x80,1);
    }
    iVar4 = FUN_00a94db0(0xd0);
    if ((iVar4 != 0) && (*(int *)(param_1 + 0x44) == 0)) {
      *(undefined4 *)(param_1 + 0x44) = 1;
      uVar5 = FUN_00aa3f60(0xd1);
      FUN_00a96070(uVar5,0x80,1);
    }
    if (*(int *)(param_1 + 0x40) != 0) {
      fVar1 = *(float *)(*(int *)(uVar3 + 0x40d4) + 0x16c);
      *(undefined4 *)(uVar3 + 0x4180) = *(undefined4 *)(*(int *)(uVar3 + 0x40d4) + 0x168);
      *(float *)(uVar3 + 0x417c) = fVar1 * 0.017453292;
      *(undefined4 *)(uVar3 + 0x4184) = 0;
      FUN_00b8af00();
      if ((*(int *)(uVar3 + 0x41e0) == 0) || (0.36 < *(float *)(uVar3 + 0x41e4))) {
        iVar4 = FUN_008e2740();
        if (iVar4 == 0) goto LAB_00bca607;
      }
      FUN_00d82510(0x13,0x4b);
    }
  }
  else {
    iVar4 = FUN_00a94db0(0x33);
    if (iVar4 == 0) {
      iVar4 = FUN_00a94db0(0x34);
      if (iVar4 == 0) goto LAB_00bca607;
    }
    iVar4 = FUN_00bb90c0(param_2,param_1);
    if (iVar4 == 0) {
      FUN_008e0c00(uVar3 + 0x560);
      StateMachineNode::vf14(param_2);
      return;
    }
  }
LAB_00bca607:
  StateMachineNode::vf14(param_2);
  return;
}

// 00BDE5D0  DownwardCliffOverJumpStatePl0010::vf0C  size=442  [class]
void __thiscall DownwardCliffOverJumpStatePl0010::vf0C(int param_1,undefined4 *param_2)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    if (param_2 == (undefined4 *)0x0) {
      uVar6 = 0;
    }
    else {
      puVar8 = &DAT_01be9ef4;
      (**(code **)*param_2)(&DAT_01be9ef4);
      iVar5 = FUN_00dd6d80(puVar8);
      uVar6 = -(uint)(iVar5 != 0) & (uint)param_2;
    }
    piVar4 = *(int **)(uVar6 + 0xc);
    if (piVar4 == (int *)0x0) {
      uVar7 = 0;
    }
    else {
      puVar8 = &DAT_01be9db8;
      (**(code **)(*piVar4 + 4))(&DAT_01be9db8);
      iVar5 = FUN_00dd6d80(puVar8);
      uVar7 = -(uint)(iVar5 != 0) & (uint)piVar4;
    }
    *(undefined4 *)(uVar7 + 0x4170) = 1;
    *(undefined4 *)(uVar7 + 0x418c) = *(undefined4 *)(uVar7 + 0x4180);
    *(undefined4 *)(uVar7 + 0x4188) = *(undefined4 *)(uVar7 + 0x417c);
    *(undefined4 *)(uVar7 + 0x4190) = *(undefined4 *)(uVar7 + 0x4184);
    fVar1 = *(float *)(*(int *)(*(int *)(uVar6 + 0xc0) + 4) + 0x158);
    if ((3.1 < *(float *)(uVar7 + 0x4258)) || (fVar1 <= 6.0)) {
      *(undefined4 *)(param_1 + 0x50) = 0xcf;
      FUN_00aa3f60(0xcf);
      uVar2 = *(undefined4 *)(*(int *)(*(int *)(uVar6 + 0xc0) + 4) + 0x160);
      fVar3 = *(float *)(*(int *)(uVar7 + 0x764) + 0xf4);
      *(undefined4 *)(param_1 + 0x34) = 0x41600000;
      FUN_00d83290(param_1 + 0x30,fVar1,uVar2,ABS(fVar3),0x41600000);
    }
    else {
      if (*(float *)(uVar7 + 0x4258) <= 1.5) {
        *(undefined4 *)(param_1 + 0x50) = 0x33;
      }
      else {
        *(undefined4 *)(param_1 + 0x50) = 0x34;
      }
      FUN_00aa3f60(*(undefined4 *)(param_1 + 0x50));
      iVar5 = *(int *)(uVar7 + 0x764);
      if (*(int *)(iVar5 + 0x104) != 1) {
        *(undefined4 *)(iVar5 + 0x104) = 1;
        *(undefined4 *)(*(int *)(iVar5 + 0xd0) + 4) = 0;
      }
      *(undefined4 *)(param_1 + 0x54) = 1;
    }
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(uVar7 + 0x44);
  }
  FUN_00bd3730(param_2,param_1,0xd,0xc);
  FUN_00bd37f0(param_2,param_1,0xd);
  FUN_00bd3910(param_2,param_1,0xb,10);
  FUN_00bd39d0(param_2,param_1,10);
  StateMachineNode::vf0C(param_2);
  return;
}

// 00BDE790  DownwardCliffOverJumpStatePl0010::vf10  size=517  [class]
void __thiscall DownwardCliffOverJumpStatePl0010::vf10(int param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  float10 fVar6;
  float10 fVar7;
  undefined *puVar8;
  undefined4 *local_74;
  undefined4 local_70;
  float local_6c;
  float local_68;
  undefined1 local_50 [76];
  
  if (param_2 == (undefined4 *)0x0) {
    local_74 = param_2;
  }
  else {
    puVar8 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar3 = FUN_00dd6d80(puVar8);
    local_74 = (undefined4 *)(-(uint)(iVar3 != 0) & (uint)param_2);
  }
  piVar5 = (int *)local_74[3];
  if (piVar5 == (int *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    puVar8 = &DAT_01be9db8;
    (**(code **)(*piVar5 + 4))(&DAT_01be9db8);
    iVar3 = FUN_00dd6d80(puVar8);
    piVar5 = (int *)(-(uint)(iVar3 != 0) & (uint)piVar5);
  }
  FUN_00bd3620(param_2,param_1,100);
  FUN_008e0b70(0);
  FUN_008e0ba0(0);
  if (0x7fffffff < *(uint *)(param_1 + 0x24)) {
    if (*(int *)(param_1 + 0x50) == 0x33) {
LAB_00bde847:
      fVar1 = *(float *)(piVar5[0x1035] + 0x16c);
      piVar5[0x1060] = *(int *)(piVar5[0x1035] + 0x168);
      piVar5[0x105f] = (int)(fVar1 * 0.017453292);
      piVar5[0x1061] = 0;
      FUN_00b8af00();
      StateMachineNode::vf10(param_2);
      return;
    }
    if (*(int *)(param_1 + 0x50) == 0x34) {
      iVar3 = FUN_00a95270(0x34,0x11);
      if (iVar3 != 0) goto LAB_00bde847;
    }
    else if (*(int *)(param_1 + 0x44) != 0) {
      FUN_00b8af00();
      fVar6 = (float10)fcos((float10)*(float *)(param_1 + 0x30));
      fVar6 = fVar6 * (float10)*(float *)(param_1 + 0x34) * (float10)*(float *)(param_1 + 0x48);
      fVar7 = (float10)fsin((float10)*(float *)(param_1 + 0x30));
      fVar7 = fVar7 * (float10)*(float *)(param_1 + 0x34) * (float10)*(float *)(param_1 + 0x48);
      fVar1 = *(float *)(param_1 + 0x38);
      fVar2 = *(float *)(param_1 + 0x3c);
      *(float *)(param_1 + 0x38) = (float)fVar6;
      *(float *)(param_1 + 0x3c) = (float)fVar7;
      local_70 = 0;
      local_6c = (float)(fVar7 - (float10)fVar2);
      local_68 = (float)(fVar6 - (float10)fVar1);
      FUN_00ddc1d0(local_50,piVar5 + 0x24,5);
      D3DXVec3TransformNormal(&local_70,&local_70,local_50);
      if ((float)piVar5[0x11] < *(float *)(param_1 + 0x4c)) {
        iVar3 = FUN_00a94db0(0xd1);
        if (iVar3 != 0) {
          uVar4 = FUN_00aa9280(0xd2);
          FUN_00a96070(uVar4,0x80,1);
        }
      }
      if (0.033333335 < *(float *)(param_1 + 0x48)) {
        iVar3 = FUN_008e0ce0(&local_6c);
        if (*(float *)(iVar3 + 4) < 0.0) {
          *(undefined4 *)(param_1 + 0x40) = 1;
        }
      }
      (**(code **)(*piVar5 + 0x70))(&stack0xffffff84);
      *(float *)(param_1 + 0x48) = (float)local_74[2] + *(float *)(param_1 + 0x48);
    }
  }
  StateMachineNode::vf10(param_2);
  return;
}

