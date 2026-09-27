// src/player/pl0010/state/CatLeapStatePl0010.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00B810A0..00BDD2F0, 9 functions

#include "mgrr.h"
#include "CatLeapStatePl0010.h"

// 00B810A0  CatLeapStatePl0010::vf08  size=43  [class]
undefined4 __thiscall CatLeapStatePl0010::vf08(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf08(param_2);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  return 1;
}

// 00B810D0  CatLeapStatePl0010::vf18  size=5  [class]
undefined4 __thiscall CatLeapStatePl0010::vf18(int param_1,undefined4 param_2)

{
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xc) + 0x18))(param_2);
  }
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x10) + 0x18))(param_2);
  }
  *(undefined4 *)(param_1 + 0x14) = 5;
  return 1;
}

// 00B810E0  CatLeapStatePl0010::vf24  size=19  [class]
bool CatLeapStatePl0010::vf24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_1);
  return iVar1 != 0;
}

// 00B81120  CatLeapStatePl0010::vf00  size=6  [class]
undefined * CatLeapStatePl0010::vf00(void)

{
  return &DAT_01be9dfc;
}

// 00B90CC0  CatLeapStatePl0010::vf04  size=31  [class]
undefined4 * __thiscall CatLeapStatePl0010::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00BA9690  CatLeapStatePl0010::vf0C  size=291  [class]
void __thiscall CatLeapStatePl0010::vf0C(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    if (param_2 == (undefined4 *)0x0) {
      uVar3 = 0;
    }
    else {
      puVar5 = &DAT_01be9ef4;
      (**(code **)*param_2)(&DAT_01be9ef4);
      iVar2 = FUN_00dd6d80(puVar5);
      uVar3 = -(uint)(iVar2 != 0) & (uint)param_2;
    }
    piVar1 = *(int **)(uVar3 + 0xc);
    if (piVar1 == (int *)0x0) {
      uVar4 = 0;
    }
    else {
      puVar5 = &DAT_01be9db8;
      (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
      iVar2 = FUN_00dd6d80(puVar5);
      uVar4 = -(uint)(iVar2 != 0) & (uint)piVar1;
    }
    *(undefined4 *)(uVar4 + 0x418c) = *(undefined4 *)(uVar4 + 0x4180);
    *(undefined4 *)(uVar4 + 0x4188) = *(undefined4 *)(uVar4 + 0x417c);
    *(undefined4 *)(uVar4 + 0x4190) = *(undefined4 *)(uVar4 + 0x4184);
    FUN_00aa9280(0xca);
    iVar2 = *(int *)(uVar4 + 0x764);
    *(undefined4 *)(uVar4 + 0x4170) = 1;
    FUN_00d83250(param_1 + 0x30,(undefined4 *)(param_1 + 0x34),
                 *(float *)(iVar2 + 0xfc) + *(float *)(iVar2 + 0xfc) +
                 *(float *)(*(int *)(uVar4 + 0x40d4) + 0x114),
                 *(float *)(*(int *)(*(int *)(uVar3 + 0xc0) + 4) + 0x5bc) + *(float *)(iVar2 + 0xfc)
                 ,ABS(*(float *)(iVar2 + 0xf4)));
    *(undefined4 *)(param_1 + 0x30) = 0x3f5f66f3;
    *(undefined4 *)(param_1 + 0x34) = 0x41880000;
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(uVar4 + 0x44);
  }
  StateMachineNode::vf0C(param_2);
  return;
}

// 00BA97C0  CatLeapStatePl0010::vf14  size=294  [class]
void __thiscall CatLeapStatePl0010::vf14(int param_1,undefined4 *param_2)

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
  iVar4 = FUN_00a94db0(0xca);
  if (iVar4 == 0) {
    iVar4 = FUN_00a94db0(0xcb);
    if ((iVar4 != 0) && (*(int *)(param_1 + 0x44) == 0)) {
      *(undefined4 *)(param_1 + 0x44) = 1;
      uVar5 = FUN_00aa3f60(0xcc);
      FUN_00a96070(uVar5,0x80,1);
    }
  }
  else {
    FUN_00aa3f60(0xcb);
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    fVar1 = *(float *)(*(int *)(uVar3 + 0x40d4) + 0x16c);
    *(undefined4 *)(uVar3 + 0x4180) = *(undefined4 *)(*(int *)(uVar3 + 0x40d4) + 0x168);
    *(float *)(uVar3 + 0x417c) = fVar1 * 0.017453292;
    *(undefined4 *)(uVar3 + 0x4184) = 0;
    FUN_00b8af00();
    if ((*(int *)(uVar3 + 0x41e0) == 0) || (0.36 < *(float *)(uVar3 + 0x41e4))) {
      iVar4 = FUN_008e2740();
      if (iVar4 == 0) goto LAB_00ba98d8;
    }
    FUN_00d82510(0x13,100);
  }
LAB_00ba98d8:
  StateMachineNode::vf14(param_2);
  return;
}

// 00BA98F0  CatLeapStatePl0010::vf20  size=146  [class]
undefined4 CatLeapStatePl0010::vf20(undefined4 *param_1)

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

// 00BDD2F0  CatLeapStatePl0010::vf10  size=491  [class]
void __thiscall CatLeapStatePl0010::vf10(int param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  float10 fVar5;
  float10 fVar6;
  undefined *puVar7;
  undefined1 auStack_7c [4];
  uint local_78;
  int *local_74;
  undefined4 uStack_70;
  float fStack_6c;
  float fStack_68;
  undefined1 auStack_50 [76];
  
  piVar4 = (int *)0x0;
  if (param_2 == (undefined4 *)0x0) {
    local_78 = 0;
  }
  else {
    puVar7 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar3 = FUN_00dd6d80(puVar7);
    local_78 = -(uint)(iVar3 != 0) & (uint)param_2;
  }
  local_74 = *(int **)(local_78 + 0xc);
  if (local_74 != (int *)0x0) {
    puVar7 = &DAT_01be9db8;
    (**(code **)(*local_74 + 4))(&DAT_01be9db8);
    iVar3 = FUN_00dd6d80(puVar7);
    piVar4 = (int *)(-(uint)(iVar3 != 0) & (uint)local_74);
  }
  FUN_00bd3620(param_2,param_1,100);
  FUN_008e0b70(0);
  FUN_008e0ba0(0);
  if ((0x7fffffff < *(uint *)(param_1 + 0x24)) && (*(int *)(param_1 + 0x44) != 0)) {
    iVar3 = piVar4[0x1035];
    fVar1 = *(float *)(iVar3 + 0x154);
    fVar2 = *(float *)(iVar3 + 0x16c);
    piVar4[0x1060] = *(int *)(iVar3 + 0x168);
    piVar4[0x105f] = (int)(fVar2 * 0.017453292);
    piVar4[0x1061] = (int)(fVar1 * 0.017453292);
    FUN_00b8af00();
    fVar5 = (float10)fcos((float10)*(float *)(param_1 + 0x30));
    fVar5 = fVar5 * (float10)*(float *)(param_1 + 0x34) * (float10)*(float *)(param_1 + 0x48);
    fVar6 = (float10)fsin((float10)*(float *)(param_1 + 0x30));
    fVar6 = fVar6 * (float10)*(float *)(param_1 + 0x34) * (float10)*(float *)(param_1 + 0x48);
    fVar1 = *(float *)(param_1 + 0x38);
    fVar2 = *(float *)(param_1 + 0x3c);
    *(float *)(param_1 + 0x38) = (float)fVar5;
    *(float *)(param_1 + 0x3c) = (float)fVar6;
    uStack_70 = 0;
    fStack_6c = (float)(fVar6 - (float10)fVar2);
    fStack_68 = (float)(fVar5 - (float10)fVar1);
    FUN_00ddc1d0(auStack_50,piVar4 + 0x24,5);
    D3DXVec3TransformNormal(&uStack_70,&uStack_70,auStack_50);
    if ((float)piVar4[0x11] < *(float *)(param_1 + 0x4c)) {
      iVar3 = FUN_00a94db0(0x5e);
      if (iVar3 != 0) {
        FUN_00d82510(0xe,100);
      }
    }
    if (0.033333335 < *(float *)(param_1 + 0x48)) {
      iVar3 = FUN_008e0ce0(&fStack_6c);
      if (*(float *)(iVar3 + 4) < 0.0) {
        *(undefined4 *)(param_1 + 0x40) = 1;
      }
    }
    (**(code **)(*piVar4 + 0x70))(auStack_7c);
    *(float *)(param_1 + 0x48) = *(float *)(local_78 + 8) + *(float *)(param_1 + 0x48);
  }
  FUN_00bd3730(param_2,param_1,0xd,0xc);
  FUN_00bd37f0(param_2,param_1,0xd);
  FUN_00bd3910(param_2,param_1,0xb,10);
  FUN_00bd39d0(param_2,param_1,10);
  StateMachineNode::vf10(param_2);
  return;
}

