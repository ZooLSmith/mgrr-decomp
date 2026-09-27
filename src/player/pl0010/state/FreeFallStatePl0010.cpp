// src/player/pl0010/state/FreeFallStatePl0010.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00B81490..00BDE9A0, 9 functions

#include "mgrr.h"
#include "FreeFallStatePl0010.h"

// 00B81490  FreeFallStatePl0010::vf08  size=42  [class]
undefined4 __thiscall FreeFallStatePl0010::vf08(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf08(param_2);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0x3f800000;
  return 1;
}

// 00B814C0  FreeFallStatePl0010::vf24  size=19  [class]
bool FreeFallStatePl0010::vf24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_1);
  return iVar1 != 0;
}

// 00B81500  FreeFallStatePl0010::vf00  size=6  [class]
undefined * FreeFallStatePl0010::vf00(void)

{
  return &DAT_01be9e10;
}

// 00B90F60  FreeFallStatePl0010::vf04  size=31  [class]
undefined4 * __thiscall FreeFallStatePl0010::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00BAA6C0  FreeFallStatePl0010::vf0C  size=467  [class]
void __thiscall FreeFallStatePl0010::vf0C(int param_1,undefined4 *param_2)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  uint uVar7;
  undefined *puVar8;
  uint local_8;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    if (param_2 == (undefined4 *)0x0) {
      local_8 = 0;
    }
    else {
      puVar8 = &DAT_01be9ef4;
      (**(code **)*param_2)(&DAT_01be9ef4);
      iVar3 = FUN_00dd6d80(puVar8);
      local_8 = -(uint)(iVar3 != 0) & (uint)param_2;
    }
    piVar6 = *(int **)(local_8 + 0xc);
    if (piVar6 == (int *)0x0) {
      uVar7 = 0;
    }
    else {
      puVar8 = &DAT_01be9db8;
      (**(code **)(*piVar6 + 4))(&DAT_01be9db8);
      iVar3 = FUN_00dd6d80(puVar8);
      uVar7 = -(uint)(iVar3 != 0) & (uint)piVar6;
    }
    *(undefined4 *)(uVar7 + 0x418c) = *(undefined4 *)(uVar7 + 0x4180);
    *(undefined4 *)(uVar7 + 0x4188) = *(undefined4 *)(uVar7 + 0x417c);
    *(undefined4 *)(uVar7 + 0x4190) = *(undefined4 *)(uVar7 + 0x4184);
    if (*(int *)(*(int *)(uVar7 + 0x764) + 0x104) != 0) {
      *(undefined4 *)(*(int *)(uVar7 + 0x764) + 0x104) = 0;
    }
    *(undefined4 *)(uVar7 + 0x4170) = 1;
    *(undefined4 *)(param_1 + 0x30) = 0x75;
    fVar2 = *(float *)(*(int *)(uVar7 + 0x40d4) + 0x14c);
    if ((fVar2 * fVar2 < *(float *)(uVar7 + 0xd28)) &&
       ((*(uint *)(uVar7 + 0xcf8) & *(uint *)(uVar7 + 0xe48)) != 0)) {
      *(undefined4 *)(param_1 + 0x30) = 0x73;
    }
    iVar3 = FUN_00a95ce0(0xc6);
    if (iVar3 != 0) {
      *(undefined4 *)(param_1 + 0x30) = 0x74;
    }
    if (*(int *)(uVar7 + 0x75c) != 0) {
      iVar4 = FUN_00a95ca0(0);
      iVar3 = *(int *)(**(int **)(uVar7 + 0x75c) + 8);
      piVar6 = *(int **)(**(int **)(uVar7 + 0x75c) + 4);
      if (piVar6 != piVar6 + iVar3 * 0xf) {
        piVar1 = piVar6 + iVar3 * 0xf;
        do {
          if (*piVar6 == iVar4) {
            uVar5 = FUN_00a95ca0(0);
            iVar3 = FUN_008d7f50(uVar5);
            if (iVar3 == 0) {
              *(undefined4 *)(param_1 + 0x34) = 1;
            }
            else {
              FUN_00aa41c0(*(undefined4 *)(param_1 + 0x30),0x3deeeeef);
            }
            goto LAB_00baa855;
          }
          piVar6 = piVar6 + 0xf;
        } while (piVar6 != piVar1);
      }
      FUN_00aa41c0(*(undefined4 *)(param_1 + 0x30),0x3deeeeef);
    }
LAB_00baa855:
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(uVar7 + 0x40);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(uVar7 + 0x44);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(uVar7 + 0x48);
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(uVar7 + 0x4c);
    *(undefined4 *)(local_8 + 0x30) = 0;
    *(undefined4 *)(local_8 + 0x10) = 0;
  }
  StateMachineNode::vf0C(param_2);
  return;
}

// 00BAA8A0  FreeFallStatePl0010::vf14  size=250  [class]
void __thiscall FreeFallStatePl0010::vf14(int param_1,undefined4 *param_2)

{
  byte bVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  char *pcVar6;
  bool bVar7;
  undefined *puVar8;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar8 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar4 = FUN_00dd6d80(puVar8);
    uVar3 = -(uint)(iVar4 != 0) & (uint)param_2;
  }
  piVar2 = *(int **)(uVar3 + 0xc);
  if (piVar2 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar8 = &DAT_01be9db8;
    (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
    iVar4 = FUN_00dd6d80(puVar8);
    uVar3 = -(uint)(iVar4 != 0) & (uint)piVar2;
  }
  if ((*(int *)(uVar3 + 0x41e0) == 0) || (0.36 < *(float *)(uVar3 + 0x41e4))) {
    iVar4 = FUN_008e2740();
    if (iVar4 != 0) goto LAB_00baa924;
  }
  else {
LAB_00baa924:
    FUN_00d82510(0x13,100);
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 == 0) {
      pcVar6 = "GearMin";
      pbVar5 = (byte *)FUN_00a95df0(0);
      do {
        bVar1 = *pbVar5;
        bVar7 = bVar1 < (byte)*pcVar6;
        if (bVar1 != *pcVar6) {
LAB_00baa970:
          iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_00baa975;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar7 = bVar1 < (byte)pcVar6[1];
        if (bVar1 != pcVar6[1]) goto LAB_00baa970;
        pbVar5 = pbVar5 + 2;
        pcVar6 = pcVar6 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_00baa975:
      if (iVar4 != 0) goto LAB_00baa98b;
    }
    FUN_00aa9280(*(undefined4 *)(param_1 + 0x30));
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
LAB_00baa98b:
  StateMachineNode::vf14(param_2);
  return;
}

// 00BAA9A0  FreeFallStatePl0010::vf18  size=155  [class]
void FreeFallStatePl0010::vf18(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar4 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar3 = FUN_00dd6d80(puVar4);
    uVar2 = -(uint)(iVar3 != 0) & (uint)param_1;
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
  if ((*(int *)(uVar2 + 0x41e0) == 0) || (0.36 < *(float *)(uVar2 + 0x41e4))) {
    iVar3 = FUN_008e2740();
    if (iVar3 == 0) goto LAB_00baaa2e;
  }
  FUN_00d82510(0x13,100);
LAB_00baaa2e:
  StateMachineNode::vf18(param_1);
  return;
}

// 00BAAA40  FreeFallStatePl0010::vf20  size=135  [class]
undefined4 FreeFallStatePl0010::vf20(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  
  iVar2 = StateMachineNode::vf20(param_1);
  if (iVar2 == 0) {
    return 0;
  }
  if (param_1 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = &DAT_01be9ef4;
    (**(code **)*param_1)(&DAT_01be9ef4);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar2 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar4 + 0xc);
  if (piVar1 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar5 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar3 = -(uint)(iVar2 != 0) & (uint)piVar1;
  }
  *(undefined4 *)(uVar4 + 0x14) = 0;
  *(undefined4 *)(uVar4 + 0x20) = 0;
  *(undefined4 *)(uVar4 + 0x24) = 0;
  *(undefined4 *)(uVar4 + 0x28) = 0;
  *(undefined4 *)(uVar4 + 0x2c) = 0;
  *(undefined4 *)(uVar3 + 0x4170) = 0;
  return 1;
}

// 00BDE9A0  FreeFallStatePl0010::vf10  size=411  [class]
void __thiscall FreeFallStatePl0010::vf10(int param_1,undefined4 *param_2)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar6 = &DAT_01be9ef4;
    (**(code **)*param_2)(&DAT_01be9ef4);
    iVar3 = FUN_00dd6d80(puVar6);
    uVar4 = -(uint)(iVar3 != 0) & (uint)param_2;
  }
  piVar2 = *(int **)(uVar4 + 0xc);
  if (piVar2 == (int *)0x0) {
    uVar5 = 0;
  }
  else {
    puVar6 = &DAT_01be9db8;
    (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
    iVar3 = FUN_00dd6d80(puVar6);
    uVar5 = -(uint)(iVar3 != 0) & (uint)piVar2;
  }
  fVar1 = *(float *)(*(int *)(uVar5 + 0x40d4) + 0x16c);
  *(undefined4 *)(uVar5 + 0x4180) = *(undefined4 *)(*(int *)(uVar5 + 0x40d4) + 0x168);
  *(float *)(uVar5 + 0x417c) = fVar1 * 0.017453292;
  *(undefined4 *)(uVar5 + 0x4184) = 0;
  FUN_00b8af00();
  *(undefined4 *)(uVar5 + 0x13f8) = 0;
  FUN_008e0b70(0);
  FUN_008e0ba0(0);
  if ((*(uint *)(uVar5 + 0xcf8) & *(uint *)(uVar5 + 0xe48)) != 0) {
    if (*(uint *)(param_1 + 0x24) < 0x80000000) goto LAB_00bdeb01;
    FUN_00bd3620(param_2,param_1,100);
  }
  if (0x7fffffff < *(uint *)(param_1 + 0x24)) {
    if (*(int *)(uVar4 + 0x14) == 0) {
      FUN_00b8ae90(&local_20);
    }
    else {
      FUN_00b8ad30(&local_20,
                   SQRT(*(float *)(uVar4 + 0x28) * *(float *)(uVar4 + 0x28) +
                        *(float *)(uVar4 + 0x20) * *(float *)(uVar4 + 0x20)));
      fVar1 = *(float *)(*(int *)(uVar5 + 0x40d4) + 0x164) * *(float *)(param_1 + 0x50);
      *(float *)(param_1 + 0x50) = fVar1;
      local_20 = local_20 * fVar1;
      local_1c = local_1c * fVar1;
      local_18 = local_18 * fVar1;
      local_14 = fVar1 * local_14;
    }
    FUN_008e0c30(&local_20);
  }
LAB_00bdeb01:
  *(float *)(uVar4 + 0x10) =
       ABS(*(float *)(param_1 + 0x44) - *(float *)(uVar5 + 0x44)) + *(float *)(uVar4 + 0x10);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(uVar5 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(uVar5 + 0x44);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(uVar5 + 0x48);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(uVar5 + 0x4c);
  StateMachineNode::vf10(param_2);
  return;
}

