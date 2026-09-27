// src/player/pl1400/state/ZangekiReadyStatePl1400.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00860290..0089B100, 9 functions

#include "mgrr.h"
#include "ZangekiReadyStatePl1400.h"

// 00860290  ZangekiReadyStatePl1400::vf18  size=5  [class]
undefined4 __thiscall ZangekiReadyStatePl1400::vf18(int param_1,undefined4 param_2)

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

// 008602A0  ZangekiReadyStatePl1400::vf24  size=19  [class]
bool ZangekiReadyStatePl1400::vf24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_1);
  return iVar1 != 0;
}

// 008602E0  ZangekiReadyStatePl1400::vf00  size=6  [class]
undefined * ZangekiReadyStatePl1400::vf00(void)

{
  return &DAT_01b35b70;
}

// 00868DD0  ZangekiReadyStatePl1400::vf04  size=31  [class]
undefined4 * __thiscall ZangekiReadyStatePl1400::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00874100  ZangekiReadyStatePl1400::SafeCheck  size=240  [class]
void __thiscall ZangekiReadyStatePl1400::SafeCheck(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    if (param_2 == (undefined4 *)0x0) {
      uVar4 = 0;
    }
    else {
      puVar5 = &DAT_01b35b78;
      (**(code **)*param_2)(&DAT_01b35b78);
      iVar2 = FUN_00dd6d80(puVar5);
      uVar4 = -(uint)(iVar2 != 0) & (uint)param_2;
    }
    piVar1 = *(int **)(uVar4 + 0x5e0);
    if (piVar1 == (int *)0x0) {
      uVar3 = 0;
    }
    else {
      puVar5 = &DAT_01b35b20;
      (**(code **)(*piVar1 + 4))(&DAT_01b35b20);
      iVar2 = FUN_00dd6d80(puVar5);
      uVar3 = -(uint)(iVar2 != 0) & (uint)piVar1;
    }
    if ((*(int *)(uVar3 + 0x40c8) == 4) && (*(int *)(uVar4 + 0x330) != 0x25)) {
      FUN_00d82510(0xd,100);
    }
    iVar2 = FUN_008e2740();
    if (iVar2 == 0) {
      *(undefined4 *)(uVar4 + 0x188) = 1;
      *(undefined4 *)(uVar4 + 0x3ec) = 0x100005;
      *(undefined4 *)(uVar3 + 0x894) = 0;
      if (*(int *)(uVar3 + 0x40c8) == 1) {
        FUN_008e6d00();
        if (*(int *)(*(int *)(uVar3 + 0x764) + 0x104) != 0) {
          *(undefined4 *)(*(int *)(uVar3 + 0x764) + 0x104) = 0;
        }
      }
    }
  }
  StateMachineNode::SafeCheck(param_2);
  return;
}

// 008741F0  ZangekiReadyStatePl1400::vf14  size=129  [class]
void __thiscall ZangekiReadyStatePl1400::vf14(int param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    puVar3 = &DAT_01b35b78;
    (**(code **)*param_2)(&DAT_01b35b78);
    iVar2 = FUN_00dd6d80(puVar3);
    uVar1 = -(uint)(iVar2 != 0) & (uint)param_2;
  }
  if (*(int **)(uVar1 + 0x5e0) != (int *)0x0) {
    puVar3 = &DAT_01b35b20;
    (**(code **)(**(int **)(uVar1 + 0x5e0) + 4))(&DAT_01b35b20);
    FUN_00dd6d80(puVar3);
  }
  if ((*(int *)(param_1 + 0x3c) == -1) ||
     (iVar2 = FUN_00a94ce0(*(int *)(param_1 + 0x3c)), iVar2 != 0)) {
    FUN_00d82510(0xd,0x19);
  }
  StateMachineNode::vf14(param_2);
  return;
}

// 0088CF70  ZangekiReadyStatePl1400::vf20  size=266  [class]
undefined4 __thiscall ZangekiReadyStatePl1400::vf20(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  
  iVar2 = StateMachineNode::vf20(param_2);
  if (iVar2 != 0) {
    if (param_2 == (undefined4 *)0x0) {
      uVar3 = 0;
    }
    else {
      puVar4 = &DAT_01b35b78;
      (**(code **)*param_2)(&DAT_01b35b78);
      iVar2 = FUN_00dd6d80(puVar4);
      uVar3 = -(uint)(iVar2 != 0) & (uint)param_2;
    }
    if (*(int **)(uVar3 + 0x5e0) != (int *)0x0) {
      puVar4 = &DAT_01b35b20;
      (**(code **)(**(int **)(uVar3 + 0x5e0) + 4))(&DAT_01b35b20);
      FUN_00dd6d80(puVar4);
    }
    iVar2 = FUN_00a92f90();
    if (iVar2 != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x3c);
      iVar2 = FUN_00a92f90();
      FUN_00e26e90();
      FUN_00e35de0(iVar2 + 0x98,uVar1,0x40000000);
      *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
    }
    *(undefined4 *)(uVar3 + 0x2f8) = 0;
    *(undefined4 *)(uVar3 + 0x300) = 0;
    if ((*(float *)(param_1 + 0x88) != 0.0) && (*(int *)(uVar3 + 0x528) != 0)) {
      FUN_00877160(param_2,0x3dcccccd,0x43340000,0x3f800000,0x3dcccccd);
    }
    return 1;
  }
  return 0;
}

// 0089B010  ZangekiReadyStatePl1400::vf08  size=230  [class]
undefined4 __thiscall ZangekiReadyStatePl1400::vf08(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  undefined *puVar5;
  
  iVar1 = StateMachineNode::vf08(param_2);
  if (iVar1 == 0) {
    return 0;
  }
  if (param_2 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = &DAT_01b35b78;
    (**(code **)*param_2)(&DAT_01b35b78);
    iVar1 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar1 != 0) & (uint)param_2;
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0x41400000;
  uVar2 = FUN_008778d0(param_2);
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  *(undefined4 *)(param_1 + 0x38) = 0x14a;
  FUN_00890330(param_2,0x14a,uVar2);
  *(undefined4 *)(uVar4 + 0x2f8) = 1;
  *(undefined4 *)(uVar4 + 0x300) = 1;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    piVar3 = (int *)FUN_00a7c8a0();
    if (piVar3 != (int *)0x0) {
      puVar5 = &DAT_01b35260;
      (**(code **)(*piVar3 + 4))(&DAT_01b35260);
      iVar1 = FUN_00dd6d80(puVar5);
      if (iVar1 != 0) {
        piVar3[0x234] = 0;
      }
    }
  }
  return 1;
}

// 0089B100  ZangekiReadyStatePl1400::qteSafeCheck  size=1029  [class]
void __thiscall ZangekiReadyStatePl1400::qteSafeCheck(int param_1,undefined4 *param_2)

{
  float fVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  float10 fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined *puVar9;
  undefined4 uVar10;
  
  puVar2 = param_2;
  uVar5 = 0;
  if (param_2 == (undefined4 *)0x0) {
    param_2 = (undefined4 *)0x0;
  }
  else {
    puVar9 = &DAT_01b35b78;
    (**(code **)*param_2)(&DAT_01b35b78);
    iVar3 = FUN_00dd6d80(puVar9);
    param_2 = (undefined4 *)(-(uint)(iVar3 != 0) & (uint)param_2);
  }
  piVar4 = *(int **)((int)param_2 + 0x5e0);
  if (piVar4 != (int *)0x0) {
    puVar9 = &DAT_01b35b20;
    (**(code **)(*piVar4 + 4))(&DAT_01b35b20);
    iVar3 = FUN_00dd6d80(puVar9);
    uVar5 = -(uint)(iVar3 != 0) & (uint)piVar4;
  }
  fVar1 = *(float *)(param_1 + 0x30) + 1.0;
  *(float *)(param_1 + 0x30) = fVar1;
  if ((*(uint *)(uVar5 + 0xe50) & *(uint *)(uVar5 + 0xcfc)) != 0) {
    *(undefined4 *)(param_1 + 0x34) = 1;
  }
  if (fVar1 <= 1.0) goto LAB_0089b44a;
  iVar3 = *(int *)(param_1 + 0x3c);
  if (*(int *)((int)param_2 + 0x528) == 0) {
    if (iVar3 != -1) {
      if ((*(int *)(param_1 + 0x44) == 0) &&
         (iVar3 = FUN_00a952e0(iVar3,*(undefined4 *)(param_1 + 0x40)), iVar3 != 0)) {
        *(undefined4 *)(param_1 + 0x44) = 1;
        *(undefined4 *)((int)param_2 + 0x2f8) = 0;
      }
      iVar3 = FUN_00a8c760(1);
      if ((iVar3 != 0) || (*(int *)(param_1 + 0x44) != 0)) {
        FUN_00890bf0(puVar2,param_1,0x32,0);
        FUN_00875eb0(puVar2,param_1,0x32,0,0);
        FUN_00875f70(puVar2,param_1,0x32,0,0);
        FUN_00890b10(puVar2,param_1,0x19);
      }
      iVar3 = FUN_00a8c760(0);
      if ((iVar3 != 0) || (*(int *)(param_1 + 0x44) != 0)) {
        FUN_00890b10(puVar2,param_1,0x19);
      }
    }
    goto LAB_0089b44a;
  }
  if (iVar3 != -1) {
    if (*(int *)(param_1 + 0x44) == 0) {
      iVar3 = FUN_00a952e0(iVar3,0x41400000);
      if (iVar3 != 0) {
        *(undefined4 *)(param_1 + 0x44) = 1;
        *(undefined4 *)((int)param_2 + 0x2f8) = 0;
        *(undefined4 *)(uVar5 + 0x40bc) = 1;
      }
      if (*(int *)(param_1 + 0x44) == 0) goto LAB_0089b224;
    }
    FUN_00890bf0(puVar2,param_1,0x32,0);
    FUN_00875eb0(puVar2,param_1,0x32,0,0);
    FUN_00875f70(puVar2,param_1,0x32,0,0);
    FUN_00890b10(puVar2,param_1,0x19);
    if (*(int *)(param_1 + 0x44) != 0) {
      FUN_00890b10(puVar2,param_1,0x19);
    }
  }
LAB_0089b224:
  if ((*(int *)((int)param_2 + 0x528) != 0) &&
     (iVar3 = FUN_00a952e0(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(uVar5 + 0x407c)),
     iVar3 != 0)) {
    *(undefined4 *)(uVar5 + 0x341c) = 0x3f800000;
    uVar10 = 0x3dcccccd;
    uVar8 = 0;
    uVar7 = 0;
    fVar6 = (float10)FUN_00e049b0(0,0,0x3dcccccd);
    FUN_00b85350(*(float *)(uVar5 + 0x4080) - *(float *)(uVar5 + 0x407c),
                 *(undefined4 *)(uVar5 + 0x4078),
                 (float)(fVar6 * (float10)*(float *)(uVar5 + 0x4078)),uVar7,uVar8,uVar10);
    *(undefined4 *)(param_1 + 0x88) = 0x3f800000;
  }
  if ((*(float *)(param_1 + 0x88) != 0.0) &&
     (iVar3 = FUN_00a952e0(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(uVar5 + 0x4080)),
     iVar3 != 0)) {
    *(undefined4 *)(uVar5 + 0x341c) = 0x3f800000;
    FUN_00877160(puVar2,0x3dcccccd,0x43340000,0x3f800000,0x3dcccccd);
    *(undefined4 *)(param_1 + 0x88) = 0;
    *(undefined4 *)(param_1 + 0x8c) = 0x41200000;
    *(undefined4 *)(param_1 + 0x90) = 0x3dcccccd;
  }
  if (0.0 < *(float *)(param_1 + 0x8c)) {
    *(float *)(param_1 + 0x8c) = *(float *)(param_1 + 0x8c) - 1.0;
  }
  if (((*(float *)(uVar5 + 0x343c) < 0.0) && (*(int *)(param_1 + 0x50) != 0)) &&
     (fVar1 = (1.0 - *(float *)(param_1 + 0x4c)) * 0.25 + *(float *)(param_1 + 0x4c),
     *(float *)(param_1 + 0x4c) = fVar1, 0.99 < fVar1)) {
    *(undefined4 *)(param_1 + 0x50) = 0;
    FUN_00877160(puVar2,0x3dcccccd,0x43340000,0x3f800000,0x3dcccccd);
  }
LAB_0089b44a:
  FUN_00876420(puVar2,param_1,100);
  if ((*(uint *)(uVar5 + 0xe50) & *(uint *)(uVar5 + 0xcf8)) == 0) {
    fVar6 = (float10)FUN_00e049b0();
    fVar6 = fVar6 + (float10)*(float *)(param_1 + 0x84);
    *(float *)(param_1 + 0x84) = (float)fVar6;
    if ((float10)5.0 < fVar6) {
      *(float *)(param_1 + 0x84) = (float)(float10)5.0;
      *(undefined4 *)((int)param_2 + 0x300) = 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x84) = 0;
  }
  if (((*(int *)(param_1 + 0x44) == 0) && (iVar3 = FUN_00a81330(), iVar3 != 0)) &&
     (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) {
    puVar9 = &DAT_01b35260;
    (**(code **)(*piVar4 + 4))(&DAT_01b35260);
    iVar3 = FUN_00dd6d80(puVar9);
    if (iVar3 != 0) {
      piVar4[0x234] = 0;
    }
  }
  StateMachineNode::qteSafeCheck(puVar2);
  return;
}

