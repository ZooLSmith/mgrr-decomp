// src/player/pl1500/state/ZangekiStatePl1500.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008A4AE0..008D02B0, 44 functions

#include "mgrr.h"
#include "ZangekiStatePl1500.h"

// 008A4AE0  ZangekiStatePl1500::vf14  size=5  [class]
undefined4 __thiscall ZangekiStatePl1500::vf14(int param_1,undefined4 param_2)

{
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xc) + 0x14))(param_2);
  }
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x10) + 0x14))(param_2);
  }
  *(undefined4 *)(param_1 + 0x14) = 4;
  return 1;
}

// 008A4AF0  ZangekiStatePl1500::vf18  size=5  [class]
undefined4 __thiscall ZangekiStatePl1500::vf18(int param_1,undefined4 param_2)

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

// 008A4B00  ZangekiStatePl1500::vf24  size=19  [class]
bool ZangekiStatePl1500::vf24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_1);
  return iVar1 != 0;
}

// 008A4B20  ZangekiStatePl1500::ZangekiStatePl1500  size=33  [class]
undefined4 * __thiscall
ZangekiStatePl1500::ZangekiStatePl1500(undefined4 *param_1,undefined4 param_2)

{
  StateMachineNode::StateMachineNode(param_2);
  *param_1 = vftable;
  FUN_009003e0();
  return param_1;
}

// 008A4B50  ZangekiStatePl1500::vf00  size=6  [class]
undefined * ZangekiStatePl1500::vf00(void)

{
  return &DAT_01b35bd8;
}

// 008AA2D0  ZangekiStatePl1500::vf04  size=31  [class]
undefined4 * __thiscall ZangekiStatePl1500::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 008B50C0  ZangekiStatePl1500::vf20  size=1212  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 ZangekiStatePl1500::vf20(undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  undefined *puVar6;
  
  iVar2 = StateMachineNode::vf20(param_1);
  if (iVar2 == 0) {
    return 0;
  }
  if (param_1 == (undefined4 *)0x0) {
    uVar5 = 0;
  }
  else {
    puVar6 = &DAT_01b35bdc;
    (**(code **)*param_1)(&DAT_01b35bdc);
    iVar2 = FUN_00dd6d80(puVar6);
    uVar5 = -(uint)(iVar2 != 0) & (uint)param_1;
  }
  piVar4 = *(int **)(uVar5 + 0x5e0);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    puVar6 = &DAT_01b35b90;
    (**(code **)(*piVar4 + 4))(&DAT_01b35b90);
    iVar2 = FUN_00dd6d80(puVar6);
    piVar4 = (int *)(-(uint)(iVar2 != 0) & (uint)piVar4);
  }
  *(undefined4 *)(uVar5 + 0xd0) = 0;
  FUN_00b7aa80();
  FUN_00a95fb0(0x3f800000);
  FUN_00e25500(0);
  FUN_00a8c9b0(0,0x5f,0x41200000,0);
  iVar2 = *(int *)(uVar5 + 0x318);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 4) != 0)) {
    *(undefined4 *)(iVar2 + 8) = 0;
  }
  iVar2 = *(int *)(uVar5 + 0x31c);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 4) != 0)) {
    *(undefined4 *)(iVar2 + 8) = 0;
  }
  FUN_00a7c950();
  iVar2 = *(int *)(uVar5 + 0x170);
  *(undefined4 *)(uVar5 + 0x408) = 0xffffffff;
  if ((iVar2 != 0) && (*(int *)(iVar2 + 4) != 0)) {
    *(undefined4 *)(iVar2 + 8) = 0;
  }
  iVar2 = *(int *)(uVar5 + 0x174);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 4) != 0)) {
    *(undefined4 *)(iVar2 + 8) = 0;
  }
  iVar2 = *(int *)(uVar5 + 0x178);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 4) != 0)) {
    *(undefined4 *)(iVar2 + 8) = 0;
  }
  iVar2 = *(int *)(uVar5 + 0x17c);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 4) != 0)) {
    *(undefined4 *)(iVar2 + 8) = 0;
  }
  iVar2 = *(int *)(uVar5 + 0x318);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 4) != 0)) {
    *(undefined4 *)(iVar2 + 8) = 0;
  }
  iVar2 = *(int *)(uVar5 + 0x31c);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 4) != 0)) {
    *(undefined4 *)(iVar2 + 8) = 0;
  }
  if (*(undefined4 **)(uVar5 + 0x170) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(uVar5 + 0x170))(1);
  }
  if (*(undefined4 **)(uVar5 + 0x174) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(uVar5 + 0x174))(1);
  }
  if (*(undefined4 **)(uVar5 + 0x178) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(uVar5 + 0x178))(1);
  }
  if (*(undefined4 **)(uVar5 + 0x17c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(uVar5 + 0x17c))(1);
  }
  if (*(undefined4 **)(uVar5 + 0x318) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(uVar5 + 0x318))(1);
  }
  if (*(undefined4 **)(uVar5 + 0x31c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(uVar5 + 0x31c))(1);
  }
  *(undefined4 *)(uVar5 + 0x170) = 0;
  *(undefined4 *)(uVar5 + 0x174) = 0;
  *(undefined4 *)(uVar5 + 0x178) = 0;
  *(undefined4 *)(uVar5 + 0x17c) = 0;
  *(undefined4 *)(uVar5 + 0x318) = 0;
  *(undefined4 *)(uVar5 + 0x31c) = 0;
  piVar4[0x43d] = 1;
  FUN_00d89e60(0x22);
  FUN_00e5e050("core_se_btl_zangeki_out",0);
  _DAT_01bea9a0 = 0;
  FUN_00b8a1d0();
  (**(code **)(*piVar4 + 0x1ec))();
  *(undefined4 *)(uVar5 + 0x520) = 0;
  FUN_008aa950(param_1);
  iVar2 = FUN_00b7a6d0();
  if ((iVar2 != 0) || ((DAT_01bea094 & 0x800) != 0)) {
    iVar2 = FUN_00bc3230(0);
    if (iVar2 == 0) {
      FUN_00e5e1b0("bgm_Ripper_Exit3");
    }
  }
  if (param_1 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar6 = &DAT_01b35bdc;
    (**(code **)*param_1)(&DAT_01b35bdc);
    iVar2 = FUN_00dd6d80(puVar6);
    uVar3 = -(uint)(iVar2 != 0) & (uint)param_1;
  }
  (**(code **)(*(int *)(uVar3 + 400) + 8))(0x41200000,0,0);
  *(undefined4 *)(uVar5 + 0x5cc) = 0xbf800000;
  FUN_0085def0();
  piVar4[0x4a6] = 0;
  piVar4[0x4a5] = 0;
  piVar4[0x4a4] = 0;
  piVar4[0x4ab] = 0;
  piVar4[0x4ac] = 0;
  piVar4[0x4aa] = 0;
  FUN_00a83990();
  *(undefined4 *)(uVar5 + 0x528) = 0;
  *(undefined4 *)(uVar5 + 0x52c) = 0;
  *(undefined4 *)(uVar5 + 0x530) = 0;
  piVar4[0x2ee] = 0;
  piVar4[0x2ef] = 2;
  FUN_00d89e60(0x15);
  FUN_00c2ddc0();
  DAT_01dc08bc = 0;
  FUN_00a7c950();
  piVar4[0x102f] = 0;
  piVar4[0xf89] = 0;
  piVar4[0xf8c] = 0;
  piVar4[0xf8d] = 0;
  piVar4[0xf8e] = 0;
  piVar4[0xf8f] = 0x3f800000;
  piVar4[0xf90] = 0;
  piVar4[0xf94] = 0;
  piVar4[0xf95] = 0;
  piVar4[0xf96] = 0;
  piVar4[0xf97] = 0x3f800000;
  *(undefined4 *)(uVar5 + 0x5d8) = 0;
  FUN_00a94bc0(*(undefined4 *)(uVar5 + 0x5e4),0);
  FUN_00a94bc0(*(undefined4 *)(uVar5 + 0x5e8),0);
  FUN_00a94bc0(*(undefined4 *)(uVar5 + 0x5ec),0);
  FUN_00a94bc0(*(undefined4 *)(uVar5 + 0x5f0),0);
  if (param_1 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar6 = &DAT_01b35bdc;
    (**(code **)*param_1)(&DAT_01b35bdc);
    iVar2 = FUN_00dd6d80(puVar6);
    uVar3 = -(uint)(iVar2 != 0) & (uint)param_1;
  }
  (**(code **)(*(int *)(uVar3 + 0x600) + 8))(0x41200000,0,0);
  FUN_00a94bc0(*(undefined4 *)(uVar5 + 0x5f4),0);
  if (*(int *)(uVar5 + 0xe0) != 0) {
    pcVar1 = *(code **)(*piVar4 + 0x1d4);
    piVar4[0x225] = 0;
    (*pcVar1)(0);
  }
  *(undefined4 *)(uVar5 + 0x6b4) = 0;
  *(undefined4 *)(uVar5 + 0xe0) = 0;
  *(undefined4 *)(uVar5 + 0xe4) = 0;
  *(undefined4 *)(uVar5 + 0x6bc) = 0;
  *(undefined4 *)(uVar5 + 0x6b0) = 0;
  iVar2 = FUN_00606950();
  if (iVar2 != 0) {
    iVar2 = FUN_00a81330();
    if (iVar2 != 0) {
      piVar4 = (int *)FUN_00a7c8a0();
      if (piVar4 != (int *)0x0) {
        puVar6 = &DAT_01b35260;
        (**(code **)(*piVar4 + 4))(&DAT_01b35260);
        iVar2 = FUN_00dd6d80(puVar6);
        if (iVar2 != 0) {
          piVar4[0x234] = 0;
        }
      }
    }
  }
  return 1;
}

// 008B5580  FUN_008b5580  size=184  [callgraph]
void __thiscall FUN_008b5580(int param_1,undefined4 *param_2)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined *puVar5;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = &DAT_01b35bdc;
    (**(code **)*param_2)(&DAT_01b35bdc);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar2 != 0) & (uint)param_2;
  }
  if (*(int **)(uVar4 + 0x5e0) != (int *)0x0) {
    puVar5 = &DAT_01b35b90;
    (**(code **)(**(int **)(uVar4 + 0x5e0) + 4))(&DAT_01b35b90);
    FUN_00dd6d80(puVar5);
  }
  fVar1 = *(float *)(param_1 + 0x5c);
  FUN_00b8c350(fVar1 * 3.0);
  iVar2 = FUN_00a81330();
  if ((iVar2 != 0) && (piVar3 = (int *)FUN_00a7c8a0(), piVar3 != (int *)0x0)) {
    puVar5 = &DAT_01b35260;
    (**(code **)(*piVar3 + 4))(&DAT_01b35260);
    iVar2 = FUN_00dd6d80(puVar5);
    if (iVar2 != 0) {
      FUN_005ca330(fVar1);
    }
  }
  return;
}

// 008B5640  FUN_008b5640  size=108  [callgraph]
void __thiscall FUN_008b5640(int param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    puVar3 = &DAT_01b35bdc;
    (**(code **)*param_2)(&DAT_01b35bdc);
    iVar2 = FUN_00dd6d80(puVar3);
    uVar1 = -(uint)(iVar2 != 0) & (uint)param_2;
  }
  if (*(int **)(uVar1 + 0x5e0) != (int *)0x0) {
    puVar3 = &DAT_01b35b90;
    (**(code **)(**(int **)(uVar1 + 0x5e0) + 4))(&DAT_01b35b90);
    FUN_00dd6d80(puVar3);
  }
  FUN_00b8c350(*(float *)(param_1 + 0x5c) * 3.0);
  return;
}

// 008B5AF0  FUN_008b5af0  size=122  [callgraph]
void FUN_008b5af0(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    puVar5 = &DAT_01b35bdc;
    (**(code **)*param_1)(&DAT_01b35bdc);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar1 = -(uint)(iVar2 != 0) & (uint)param_1;
  }
  iVar2 = *(int *)(uVar1 + 0x178);
  uVar1 = 0;
  if (*(int *)(iVar2 + 8) != 1) {
    puVar4 = *(undefined4 **)(iVar2 + 4);
    puVar3 = puVar4 + 6;
    do {
      uVar1 = uVar1 + 1;
      *puVar4 = puVar3[-2];
      puVar4 = puVar4 + 4;
      puVar3[-5] = puVar3[-1];
      puVar3[-4] = *puVar3;
      puVar3[-3] = puVar3[1];
      puVar3 = puVar3 + 4;
    } while (uVar1 < *(int *)(iVar2 + 8) - 1U);
  }
  if ((*(int *)(iVar2 + 4) != 0) && (*(int *)(iVar2 + 8) != 0)) {
    *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + -1;
  }
  return;
}

// 008B5B70  FUN_008b5b70  size=92  [callgraph]
void FUN_008b5b70(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  
  if ((uint)param_1[3] <= (uint)param_1[2]) {
    uVar2 = 0;
    if (param_1[2] != 1) {
      iVar3 = 0;
      do {
        puVar1 = (undefined4 *)(param_1[1] + iVar3);
        *puVar1 = *(undefined4 *)(param_1[1] + 0x10 + iVar3);
        uVar2 = uVar2 + 1;
        iVar3 = iVar3 + 0x10;
        puVar1[1] = puVar1[5];
        puVar1[2] = puVar1[6];
        puVar1[3] = puVar1[7];
      } while (uVar2 < param_1[2] - 1U);
    }
    if ((param_1[1] != 0) && (param_1[2] != 0)) {
      param_1[2] = param_1[2] + -1;
    }
  }
  (**(code **)(*param_1 + 8))(param_2);
  return;
}

// 008B5DC0  FUN_008b5dc0  size=1147  [callgraph]
void FUN_008b5dc0(undefined4 *param_1,undefined4 param_2,float param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float *pfVar5;
  int iVar6;
  uint uVar7;
  undefined *puVar8;
  float local_28 [10];
  
  if (param_1 == (undefined4 *)0x0) {
    uVar7 = 0;
  }
  else {
    puVar8 = &DAT_01b35bdc;
    (**(code **)*param_1)(&DAT_01b35bdc);
    iVar6 = FUN_00dd6d80(puVar8);
    uVar7 = -(uint)(iVar6 != 0) & (uint)param_1;
  }
  if (*(int **)(uVar7 + 0x5e0) != (int *)0x0) {
    puVar8 = &DAT_01b35b90;
    (**(code **)(**(int **)(uVar7 + 0x5e0) + 4))(&DAT_01b35b90);
    FUN_00dd6d80(puVar8);
  }
  if (param_4 == 0) {
    uVar4 = FUN_00a9f560("zangeki_air",0x3d4ccccd,0x8002000,param_2);
    *(undefined4 *)(uVar7 + 0x118) = uVar4;
    FUN_00a9f600(0xffffffff,param_2,0,1,0,0x157,0x3d4ccccd,0x8002000);
    FUN_00a9f600(0xffffffff,param_2,0,0,0,0x157,0x3d4ccccd,0x8002000);
    FUN_00a9f600(0xffffffff,param_2,0,0x2d,0,0x15b,0x3d4ccccd,0x8002000);
    FUN_00a9f600(0xffffffff,param_2,0,0x5a,0,0x158,0x3d4ccccd,0x8002000);
    FUN_00a9f600(0xffffffff,param_2,0,0x87,0,0x15d,0x3d4ccccd,0x8002000);
    FUN_00a9f600(0xffffffff,param_2,0,0xb4,0,0x156,0x3d4ccccd,0x8002000);
    FUN_00a9f600(0xffffffff,param_2,0,0xffffff4d,0,0x156,0x3d4ccccd,0x8002000);
    FUN_00a9f600(0xffffffff,param_2,0,0xffffff79,0,0x15a,0x3d4ccccd,0x8002000);
    FUN_00a9f600(0xffffffff,param_2,0,0xffffffa6,0,0x159,0x3d4ccccd,0x8002000);
    uVar4 = 0x15c;
  }
  else {
    uVar4 = FUN_00a9f560("zangeki_ground",0x3d4ccccd,0x8002000,param_2);
    *(undefined4 *)(uVar7 + 0x118) = uVar4;
    FUN_00a9f600(0xffffffff,param_2,0,1,0,0x140,0x3d4ccccd,0x8002000);
    FUN_00a9f600(0xffffffff,param_2,0,0,0,0x140,0x3d4ccccd,0x8002000);
    FUN_00a9f600(0xffffffff,param_2,0,0x2d,0,0x144,0x3d4ccccd,0x8002000);
    FUN_00a9f600(0xffffffff,param_2,0,0x5a,0,0x141,0x3d4ccccd,0x8002000);
    FUN_00a9f600(0xffffffff,param_2,0,0x87,0,0x146,0x3d4ccccd,0x8002000);
    FUN_00a9f600(0xffffffff,param_2,0,0xb4,0,0x13f,0x3d4ccccd,0x8002000);
    FUN_00a9f600(0xffffffff,param_2,0,0xffffff4d,0,0x13f,0x3d4ccccd,0x8002000);
    FUN_00a9f600(0xffffffff,param_2,0,0xffffff79,0,0x143,0x3d4ccccd,0x8002000);
    FUN_00a9f600(0xffffffff,param_2,0,0xffffffa6,0,0x142,0x3d4ccccd,0x8002000);
    uVar4 = 0x145;
  }
  FUN_00a9f600(0xffffffff,param_2,0,0xffffffd3,0,uVar4,0x3d4ccccd,0x8002000);
  fVar2 = (param_3 + 1.5707964) * 57.29578;
  if (180.0 < fVar2) {
    fVar2 = fVar2 - 360.0;
  }
  if ((NAN(fVar2) || 0.0 < fVar2 == (fVar2 == 0.0)) || (1.0 < fVar2)) {
    if ((180.0 <= fVar2) || (fVar2 < -179.0 != (fVar2 == -179.0))) {
      fVar2 = -179.0;
    }
  }
  else {
    fVar2 = 1.0;
  }
  pfVar5 = local_28;
  local_28[0] = 1.0;
  iVar6 = 10;
  local_28[1] = 0.0;
  local_28[2] = 45.0;
  local_28[3] = 90.0;
  local_28[4] = 135.0;
  fVar3 = 180.0;
  local_28[5] = 180.0;
  local_28[6] = -179.0;
  local_28[7] = -135.0;
  local_28[8] = -90.0;
  local_28[9] = -45.0;
  fVar1 = 0.0;
  do {
    if (ABS(fVar2 - *pfVar5) < fVar3) {
      fVar1 = *pfVar5;
      fVar3 = ABS(fVar2 - *pfVar5);
    }
    pfVar5 = pfVar5 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  FUN_00a947e0(param_2,0,fVar1,0);
  return;
}

// 008B6240  FUN_008b6240  size=2732  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008b6240(undefined4 *param_1,float *param_2)

{
  void *_Src;
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  float *pfVar7;
  undefined4 uVar8;
  uint uVar9;
  int *piVar10;
  float10 fVar11;
  undefined4 *puVar12;
  undefined1 *puVar13;
  void *pvStack_1bc;
  undefined4 *puStack_1b8;
  float *pfStack_1b4;
  float *pfStack_1b0;
  float *pfStack_1ac;
  float *pfStack_1a8;
  float *local_1a4;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  undefined4 local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  undefined4 local_128;
  float local_124;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  void *pvStack_f0;
  undefined1 auStack_ec [12];
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 auStack_88 [3];
  undefined1 auStack_7c [8];
  undefined1 auStack_74 [20];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar9 = 0;
  }
  else {
    local_1a4 = (float *)&DAT_01b35bdc;
    pfStack_1a8 = (float *)0x8b6267;
    (**(code **)*param_1)();
    pfStack_1a8 = (float *)0x8b626e;
    iVar6 = FUN_00dd6d80();
    uVar9 = -(uint)(iVar6 != 0) & (uint)param_1;
  }
  piVar10 = *(int **)(uVar9 + 0x5e0);
  if (piVar10 == (int *)0x0) {
    piVar10 = (int *)0x0;
  }
  else {
    local_1a4 = (float *)&DAT_01b35b90;
    pfStack_1a8 = (float *)0x8b6292;
    (**(code **)(*piVar10 + 4))();
    pfStack_1a8 = (float *)0x8b6299;
    iVar6 = FUN_00dd6d80();
    piVar10 = (int *)(-(uint)(iVar6 != 0) & (uint)piVar10);
  }
  local_1a4 = (float *)0x8b62a8;
  FUN_00b7cd90();
  local_1a4 = (float *)0x8b62ad;
  iVar6 = FUN_00f98a90();
  local_114 = (float)iVar6 * 0.5;
  local_1a4 = (float *)0x8b62c7;
  iVar6 = FUN_00f98aa0();
  local_fc = (float)iVar6 * 0.5;
  local_100 = local_114;
  local_f8 = 0.0;
  local_140 = *param_2;
  local_13c = param_2[1];
  local_138 = 0.0;
  local_170 = param_2[2];
  local_16c = param_2[3];
  local_168 = 0.0;
  local_110 = (local_170 + local_140) * 0.5;
  local_10c = (local_13c + local_16c) * 0.5;
  local_104 = (local_164 + local_134) * 0.5;
  local_160 = (local_140 - local_110) * 100.0 + local_140;
  local_15c = (local_13c - local_10c) * 100.0 + local_13c;
  local_158 = 0.0;
  local_154 = (local_134 - local_104) * 100.0 + local_134;
  local_130 = (local_170 - local_110) * 100.0;
  local_12c = (local_16c - local_10c) * 100.0;
  local_190 = local_130 + local_170;
  local_18c = local_16c + local_12c;
  local_188 = 0.0;
  local_184 = (local_164 - local_104) * 100.0 + local_164;
  local_180 = local_110 - local_160;
  local_17c = local_10c - local_15c;
  local_174 = local_104 - local_154;
  local_178 = 0;
  if ((local_180 != 0.0) || (local_17c != 0.0)) {
    fVar1 = local_17c * local_17c + local_180 * local_180;
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      pfStack_1a8 = &local_180;
      pfStack_1ac = (float *)0x8b6496;
      local_1a4 = pfStack_1a8;
      FUN_00ddf460();
    }
    else {
      local_1a4 = (float *)&DAT_0163d0ac;
      pfStack_1a8 = (float *)0x8b64ab;
      FUN_00dd5650();
      local_180 = 0.0;
      local_17c = 1.0;
      local_178 = 0;
    }
  }
  local_130 = 0.0;
  local_12c = 0.0;
  pfStack_1a8 = &local_130;
  local_128 = 0;
  pfStack_1ac = &local_180;
  pfStack_1b0 = &local_160;
  local_1a4 = (float *)0x461c4000;
  pfStack_1b4 = &local_140;
  puStack_1b8 = (undefined4 *)0x8b64f3;
  FUN_008a4ca0();
  local_180 = local_110 - local_190;
  local_17c = local_10c - local_18c;
  local_174 = local_104 - local_184;
  local_178 = 0;
  if ((local_180 != 0.0) || (local_17c != 0.0)) {
    fVar1 = local_17c * local_17c + local_180 * local_180;
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      pfStack_1a8 = &local_180;
      pfStack_1ac = (float *)0x8b6581;
      local_1a4 = pfStack_1a8;
      FUN_00ddf460();
    }
    else {
      local_1a4 = (float *)&DAT_0163d0ac;
      pfStack_1a8 = (float *)0x8b6596;
      FUN_00dd5650();
      local_180 = 0.0;
      local_17c = 1.0;
      local_178 = 0;
    }
  }
  local_130 = 0.0;
  local_12c = 0.0;
  pfStack_1a8 = &local_130;
  local_128 = 0;
  pfStack_1ac = &local_180;
  pfStack_1b0 = &local_190;
  local_1a4 = (float *)0x461c4000;
  pfStack_1b4 = &local_170;
  puStack_1b8 = (undefined4 *)0x8b65de;
  FUN_008a4ca0();
  local_190 = (local_140 + local_170) * 0.5;
  local_18c = (local_13c + local_16c) * 0.5;
  local_188 = (local_138 + local_168) * 0.5;
  local_184 = (local_134 + local_164) * 0.5;
  fVar1 = local_170 - local_190;
  fVar2 = local_16c - local_18c;
  fVar3 = local_168 - local_188;
  local_1a4 = (float *)((fVar1 * 300.0 + fVar2 * 0.0 + fVar3 * 0.0) /
                       (SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3) * 300.0));
  pfStack_1a8 = (float *)0x8b667b;
  FUN_00ddbb50();
  local_180 = (local_170 * 0.4 + local_100) - (local_140 * 0.4 + local_100);
  local_17c = (local_16c * 0.4 + local_fc) - (local_13c * 0.4 + local_fc);
  local_174 = local_124 - local_124;
  local_178 = 0;
  if ((local_180 != 0.0) || (local_17c != 0.0)) {
    fVar1 = local_17c * local_17c + local_180 * local_180;
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      pfStack_1a8 = &local_180;
      pfStack_1ac = (float *)0x8b674f;
      local_1a4 = pfStack_1a8;
      FUN_00ddf460();
    }
    else {
      local_1a4 = (float *)&DAT_0163d0ac;
      pfStack_1a8 = (float *)0x8b6762;
      FUN_00dd5650();
      local_180 = 0.0;
      local_17c = 1.0;
      local_178 = 0;
    }
  }
  local_1a4 = &local_100;
  pfStack_1a8 = &local_150;
  pfStack_1ac = (float *)0x8b6794;
  FUN_00d9fab0();
  local_1a4 = &local_110;
  pfStack_1a8 = &local_e0;
  local_110 = local_190 * 0.0 + local_100;
  local_10c = local_18c * 0.0 + local_fc;
  local_108 = local_188 * 0.0 + local_f8;
  local_104 = local_184 * 0.0 + local_f4;
  pfStack_1ac = (float *)0x8b6804;
  FUN_00d9fab0();
  local_1a4 = &local_130;
  pfStack_1a8 = (float *)0x8b6810;
  pfVar7 = (float *)FUN_00a925a0();
  local_1a4 = &local_130;
  local_150 = local_150 - *pfVar7;
  local_14c = local_14c - pfVar7[1];
  local_148 = local_148 - pfVar7[2];
  local_144 = local_144 - pfVar7[3];
  pfStack_1a8 = (float *)0x8b6851;
  pfVar7 = (float *)FUN_00a925a0();
  local_e0 = (local_e0 - *pfVar7) - local_150;
  local_dc = (local_dc - pfVar7[1]) - local_14c;
  local_d8 = (local_d8 - pfVar7[2]) - local_148;
  local_d4 = (local_d4 - pfVar7[3]) - local_144;
  local_1a4 = (float *)0xffffffff;
  local_150 = local_e0 + local_150;
  local_14c = local_14c + local_dc;
  local_148 = local_d8 + local_148;
  local_144 = local_d4 + local_144;
  pfStack_1a8 = (float *)0x8b68e5;
  iVar6 = FUN_00a12210();
  _Src = (void *)(iVar6 + 0x10);
  local_1a4 = (float *)-(*(float *)(iVar6 + 0x18) /
                        SQRT(*(float *)(iVar6 + 0x38) * *(float *)(iVar6 + 0x38) +
                             *(float *)(iVar6 + 0x34) * *(float *)(iVar6 + 0x34) +
                             *(float *)(iVar6 + 0x30) * *(float *)(iVar6 + 0x30)));
  pfStack_1a8 = (float *)0x8b6911;
  FUN_00ddbaa0();
  local_60 = 0;
  pfStack_1ac = (float *)&local_60;
  local_5c = 0;
  local_58 = 0x3f800000;
  pfStack_1b0 = (float *)0x8b6940;
  pfStack_1a8 = pfStack_1ac;
  local_1a4 = _Src;
  D3DXVec3TransformNormal();
  uStack_cc = 0x3f800000;
  puStack_1b8 = &uStack_cc;
  uStack_c8 = 0;
  uStack_c4 = 0;
  pvStack_1bc = (void *)0x8b696a;
  pfStack_1b4 = (float *)puStack_1b8;
  pfStack_1b0 = _Src;
  D3DXVec3TransformNormal();
  local_108 = 0.0;
  local_104 = 1.0;
  local_100 = 0.0;
  pvStack_1bc = _Src;
  D3DXVec3TransformNormal(&local_108,&local_108);
  uStack_8c = 0;
  uStack_90 = 0;
  uStack_94 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_a4 = 0;
  uStack_a8 = 0;
  uStack_ac = 0;
  fStack_b4 = 0.0;
  fStack_b8 = 0.0;
  fStack_bc = 0.0;
  uStack_c0 = 0;
  auStack_88[0] = 0x3f800000;
  uStack_9c = 0x3f800000;
  uStack_b0 = 0x3f800000;
  uStack_c4 = 0x3f800000;
  FID_conflict__memcpy(&uStack_c4,_Src,0x40);
  puVar13 = auStack_74;
  D3DXMatrixRotationX(puVar13,*(float *)(uVar9 + 0x3b0) + *(float *)(uVar9 + 0x374));
  puVar12 = &uStack_cc;
  D3DXMatrixMultiply(puVar12,auStack_7c,puVar12);
  D3DXMatrixRotationZ();
  D3DXMatrixMultiply(&local_e0,&uStack_90,&local_e0);
  fVar1 = *(float *)(uVar9 + 0x3a4) + 1.35;
  pfStack_1ac = (float *)(local_13c * fVar1);
  pfStack_1a8 = (float *)(local_138 * fVar1);
  local_1a4 = (float *)(local_134 * fVar1);
  local_15c = (float)pvStack_1bc - local_18c;
  local_158 = (float)puStack_1b8 - local_188;
  local_154 = (float)pfStack_1b4 - local_184;
  local_150 = (float)pfStack_1b0 - local_180;
  iVar6 = FUN_008a4d70(&local_18c,&local_15c,&local_14c,0x43480000);
  pfVar7 = local_1a4;
  pfVar4 = pfStack_1a8;
  pfVar5 = pfStack_1ac;
  if (iVar6 != 0) {
    fVar1 = (float)puVar12 * 0.0011111111;
    fVar2 = (float)puVar13 * 0.0011111111;
    pfVar7 = (float *)(((float)local_1a4 - local_134 * fVar1) - local_104 * fVar2);
    pfVar4 = (float *)(((float)pfStack_1a8 - local_138 * fVar1) - local_108 * fVar2);
    pfVar5 = (float *)(((float)pfStack_1ac - local_13c * fVar1) - fVar2 * local_10c);
  }
  fStack_bc = fStack_bc + (float)pfVar5;
  fStack_b8 = (float)pfVar4 + fStack_b8;
  fStack_b4 = (float)pfVar7 + fStack_b4;
  uVar8 = (**(code **)(*piVar10 + 0x270))();
  if (piVar10[0x1032] == 4) {
    uVar8 = 3;
  }
  if (*(int *)(uVar9 + 0x528) == 0) {
    uVar8 = 0;
  }
  if ((piVar10[0x1032] == 8) && (*(int *)(uVar9 + 0x330) == 1)) {
    uVar8 = 3;
  }
  local_160 = *(float *)(uVar9 + 0x18c);
  *(undefined4 **)(uVar9 + 0x3c0) = auStack_88;
  DAT_01d61850 = 1;
  pvStack_1bc = (void *)((float)puVar13 * 0.0011111111);
  puStack_1b8 = (undefined4 *)((float)puVar12 * 0.0011111111);
  local_110 = (float)puStack_1b8;
  pvStack_f0 = pvStack_1bc;
  FID_conflict__memcpy(&DAT_01d61860,auStack_ec,0x40);
  _DAT_01d618b8 = puStack_1b8;
  _DAT_01d618b4 = pvStack_1bc;
  _DAT_01d618a0 = local_160;
  pvStack_1bc = pvStack_f0;
  puStack_1b8 = (undefined4 *)local_110;
  _DAT_01d618ac = 1;
  _DAT_01d618b0 = 0xffffffff;
  _DAT_01d618a4 = auStack_88;
  _DAT_01d618a8 = uVar8;
  fVar11 = (float10)FUN_00b8bbf0(auStack_88,uVar8,&pvStack_1bc);
  FUN_008aabc0(param_1,auStack_ec,0x42c80000,(float)fVar11);
  return;
}

// 008B6CF0  FUN_008b6cf0  size=685  [callgraph]
void FUN_008b6cf0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined *puVar12;
  undefined4 uVar13;
  int local_138;
  float local_130;
  undefined4 local_128 [2];
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  float local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  float local_e0;
  float local_dc;
  undefined1 auStack_d8 [8];
  undefined1 local_d0 [64];
  undefined4 local_90 [16];
  int local_50 [19];
  
  if (param_1 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar12 = &DAT_01b35bdc;
    (**(code **)*param_1)(&DAT_01b35bdc);
    iVar5 = FUN_00dd6d80(puVar12);
    uVar4 = -(uint)(iVar5 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar4 + 0x5e0);
  if (piVar1 == (int *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar12 = &DAT_01b35b90;
    (**(code **)(*piVar1 + 4))(&DAT_01b35b90);
    iVar5 = FUN_00dd6d80(puVar12);
    uVar4 = -(uint)(iVar5 != 0) & (uint)piVar1;
  }
  iVar5 = FUN_00a96130(local_50,0x10);
  local_138 = 0;
  if (0 < iVar5) {
    do {
      iVar2 = local_50[local_138];
      FID_conflict__memcpy(local_90,(void *)(uVar4 + 0x10),0x40);
      uVar13 = 0x40;
      uVar11 = 0;
      FUN_00a92f90(0,0x40);
      iVar6 = FUN_00e3a1e0(uVar11,uVar13);
      sVar3 = *(short *)(iVar2 + 6);
      if (iVar6 != 0) {
        sVar3 = FUN_00a96170(sVar3);
      }
      uVar7 = uVar4;
      if (sVar3 != -1) {
        uVar7 = FUN_00a12210((int)sVar3);
      }
      if (uVar7 != 0) {
        puVar9 = (undefined4 *)(uVar7 + 0x10);
        puVar10 = local_90;
        for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        }
      }
      local_130 = *(float *)(iVar2 + 0xc);
      uVar11 = *(undefined4 *)(iVar2 + 0x10);
      local_128[0] = *(undefined4 *)(iVar2 + 0x14);
      local_e0 = *(float *)(iVar2 + 0x18);
      local_dc = *(float *)(iVar2 + 0x1c);
      if (iVar6 != 0) {
        local_dc = local_dc * -1.0;
        local_130 = local_130 * -1.0;
      }
      local_e8 = 0;
      local_ec = 0;
      local_f0 = 0.0;
      local_f4 = 0;
      local_fc = 0;
      local_100 = 0;
      local_104 = 0;
      local_108 = 0;
      local_110 = 0;
      local_114 = 0;
      local_118 = 0;
      local_11c = 0;
      local_e4 = 0x3f800000;
      local_f8 = 0x3f800000;
      local_10c = 0x3f800000;
      local_120 = 0x3f800000;
      if (*(float *)(iVar2 + 0x20) != 0.0) {
        D3DXMatrixRotationZ(local_d0,*(float *)(iVar2 + 0x20));
        D3DXMatrixMultiply(local_128,auStack_d8,local_128);
      }
      if (local_dc != 0.0) {
        D3DXMatrixRotationY(local_d0,local_dc);
        D3DXMatrixMultiply(local_128,auStack_d8,local_128);
      }
      if (local_e0 != 0.0) {
        D3DXMatrixRotationX(local_d0,local_e0);
        D3DXMatrixMultiply(local_128,auStack_d8,local_128);
      }
      local_f0 = local_130;
      local_e8 = local_128[0];
      local_ec = uVar11;
      D3DXMatrixMultiply(&local_120,&local_120,local_90);
    } while ((*(char *)(iVar2 + 2) != '\x03') && (local_138 = local_138 + 1, local_138 < iVar5));
  }
  return;
}

// 008B6FB0  FUN_008b6fb0  size=420  [callgraph]
void FUN_008b6fb0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puStack_a8;
  undefined4 *puStack_a4;
  undefined4 *puStack_a0;
  undefined4 *puStack_9c;
  undefined1 *puStack_98;
  undefined4 *local_94;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 auStack_64 [4];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58 [2];
  undefined1 local_50 [76];
  
  if (param_1 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    local_94 = (undefined4 *)&DAT_01b35bdc;
    puStack_98 = (undefined1 *)0x8b6fd4;
    (**(code **)*param_1)();
    puStack_98 = (undefined1 *)0x8b6fdb;
    iVar2 = FUN_00dd6d80();
    uVar3 = -(uint)(iVar2 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar3 + 0x5e0);
  if (piVar1 == (int *)0x0) {
    uVar4 = 0;
  }
  else {
    local_94 = (undefined4 *)&DAT_01b35b90;
    puStack_98 = (undefined1 *)0x8b6fff;
    (**(code **)(*piVar1 + 4))();
    puStack_98 = (undefined1 *)0x8b7006;
    iVar2 = FUN_00dd6d80();
    uVar4 = -(uint)(iVar2 != 0) & (uint)piVar1;
  }
  if ((*(int *)(uVar3 + 0x500) == 0) && ((*(uint *)(uVar4 + 0xcf8) & *(uint *)(uVar4 + 0xe50)) != 0)
     ) {
    if (*(int *)(uVar4 + 0x40c8) == 8) {
      local_94 = param_1;
      puStack_98 = (undefined1 *)0x8b7040;
      iVar2 = FUN_008aa840();
      if (iVar2 != 0) {
        return;
      }
    }
    if ((*(byte *)(uVar4 + 0xcfc) & 0xc0) != 0) {
      puStack_98 = local_50;
      *(undefined4 *)(uVar3 + 0x568) = 0;
      local_7c = 0xc47a0000;
      local_78 = 0;
      local_74 = 0x447a0000;
      local_5c = 0x447a0000;
      local_70 = 0;
      local_68 = 0;
      local_60 = 0;
      local_58[0] = 0;
      local_6c = 0xc47a0000;
      local_94 = (undefined4 *)(*(float *)(uVar3 + 0x3f8) * 0.017453292);
      puStack_9c = (undefined4 *)0x8b70b0;
      D3DXMatrixRotationZ();
      puStack_9c = local_58;
      puStack_a4 = &local_78;
      puStack_a8 = (undefined1 *)0x8b70c2;
      puStack_a0 = puStack_a4;
      D3DXVec3TransformNormal();
      puStack_a8 = (undefined1 *)(*(float *)(uVar3 + 0x3f8) * 0.017453292);
      D3DXMatrixRotationZ(auStack_64);
      D3DXVec3TransformNormal(&local_7c,&local_7c,&local_6c);
      puStack_a8 = puStack_98;
      puStack_a4 = local_94;
      FUN_008b5b70(*(undefined4 *)(uVar3 + 0x178),&puStack_a8);
      FUN_008b5b70(*(undefined4 *)(uVar3 + 0x17c),&puStack_a8);
      if (*(int *)(*(int *)(uVar3 + 0x170) + 4) != 0) {
        *(undefined4 *)(*(int *)(uVar3 + 0x170) + 8) = 0;
      }
      FUN_00d82510(4,0x32);
    }
  }
  return;
}

// 008B7160  FUN_008b7160  size=194  [callgraph]
void FUN_008b7160(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar5 = &DAT_01b35bdc;
    (**(code **)*param_1)(&DAT_01b35bdc);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar3 = -(uint)(iVar2 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar3 + 0x5e0);
  if (piVar1 == (int *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = &DAT_01b35b90;
    (**(code **)(*piVar1 + 4))(&DAT_01b35b90);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar2 != 0) & (uint)piVar1;
  }
  if ((*(int *)(uVar3 + 0x500) == 0) && ((*(uint *)(uVar4 + 0xcf8) & *(uint *)(uVar4 + 0xe50)) != 0)
     ) {
    if ((*(int *)(uVar4 + 0x40c8) == 8) && (iVar2 = FUN_008aa840(param_1), iVar2 != 0)) {
      return;
    }
    if (((*(byte *)(uVar4 + 0xcfc) & 0x80) != 0) || (param_4 != 0)) {
      *(undefined4 *)(uVar3 + 0x6d0) = 1;
      FUN_00d82510(2,param_3);
      if (param_5 != 0) {
        *(int *)(uVar3 + 0x570) = *(int *)(uVar3 + 0x570) + 1;
      }
    }
  }
  return;
}

// 008B7230  FUN_008b7230  size=193  [callgraph]
void FUN_008b7230(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar5 = &DAT_01b35bdc;
    (**(code **)*param_1)(&DAT_01b35bdc);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar3 = -(uint)(iVar2 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar3 + 0x5e0);
  if (piVar1 == (int *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = &DAT_01b35b90;
    (**(code **)(*piVar1 + 4))(&DAT_01b35b90);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar2 != 0) & (uint)piVar1;
  }
  if ((*(int *)(uVar3 + 0x500) == 0) && ((*(uint *)(uVar4 + 0xcf8) & *(uint *)(uVar4 + 0xe50)) != 0)
     ) {
    if ((*(int *)(uVar4 + 0x40c8) == 8) && (iVar2 = FUN_008aa840(param_1), iVar2 != 0)) {
      return;
    }
    if (((*(byte *)(uVar4 + 0xcfc) & 0x40) != 0) || (param_4 != 0)) {
      *(undefined4 *)(uVar3 + 0x6d0) = 2;
      FUN_00d82510(2,param_3);
      if (param_5 != 0) {
        *(int *)(uVar3 + 0x570) = *(int *)(uVar3 + 0x570) + 1;
      }
    }
  }
  return;
}

// 008B7300  FUN_008b7300  size=687  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008b7300(undefined4 *param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  int unaff_ESI;
  uint uVar4;
  float10 fVar5;
  float10 fVar6;
  undefined *puVar7;
  undefined4 uVar8;
  float fStack_bc;
  float fStack_b8;
  float local_b4;
  float fStack_b0;
  float fStack_ac;
  undefined4 uStack_a8;
  undefined1 auStack_9c [4];
  undefined4 uStack_98;
  undefined4 uStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  undefined1 auStack_70 [4];
  undefined4 auStack_6c [4];
  undefined1 auStack_5c [12];
  undefined1 auStack_50 [76];
  
  if (param_1 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar7 = &DAT_01b35bdc;
    (**(code **)*param_1)(&DAT_01b35bdc);
    iVar2 = FUN_00dd6d80(puVar7);
    uVar4 = -(uint)(iVar2 != 0) & (uint)param_1;
  }
  piVar3 = *(int **)(uVar4 + 0x5e0);
  if (piVar3 == (int *)0x0) {
    local_b4 = 0.0;
  }
  else {
    puVar7 = &DAT_01b35b90;
    (**(code **)(*piVar3 + 4))(&DAT_01b35b90);
    iVar2 = FUN_00dd6d80(puVar7);
    local_b4 = (float)(-(uint)(iVar2 != 0) & (uint)piVar3);
  }
  iVar2 = FUN_00a81330();
  if ((iVar2 != 0) && (piVar3 = (int *)FUN_00a7c8a0(), piVar3 != (int *)0x0)) {
    puVar7 = &DAT_01b35260;
    (**(code **)(*piVar3 + 4))(&DAT_01b35260);
    iVar2 = FUN_00dd6d80(puVar7);
    if (iVar2 != 0) {
      iVar2 = FUN_00a12210(0xffffffff);
      fStack_b0 = SQRT(*(float *)(iVar2 + 0x14) * *(float *)(iVar2 + 0x14) +
                       *(float *)(iVar2 + 0x10) * *(float *)(iVar2 + 0x10) +
                       *(float *)(iVar2 + 0x18) * *(float *)(iVar2 + 0x18));
      fStack_ac = SQRT(*(float *)(iVar2 + 0x20) * *(float *)(iVar2 + 0x20) +
                       *(float *)(iVar2 + 0x24) * *(float *)(iVar2 + 0x24) +
                       *(float *)(iVar2 + 0x28) * *(float *)(iVar2 + 0x28));
      fVar1 = SQRT(*(float *)(iVar2 + 0x38) * *(float *)(iVar2 + 0x38) +
                   *(float *)(iVar2 + 0x34) * *(float *)(iVar2 + 0x34) +
                   *(float *)(iVar2 + 0x30) * *(float *)(iVar2 + 0x30));
      fStack_bc = *(float *)(iVar2 + 0x28) / fVar1;
      fStack_b8 = *(float *)(iVar2 + 0x38) / fVar1;
      fVar5 = (float10)FUN_00ddbaa0(-(*(float *)(iVar2 + 0x18) / fVar1));
      fVar6 = (float10)fpatan((float10)fStack_bc,(float10)fStack_b8);
      fStack_90 = (float)fVar6;
      fStack_8c = (float)fVar5;
      fVar5 = (float10)fpatan((float10)*(float *)(iVar2 + 0x14) / (float10)fStack_ac,
                              (float10)*(float *)(iVar2 + 0x10) / (float10)fStack_b0);
      fStack_88 = (float)fVar5;
      fStack_b0 = 0.0;
      fStack_ac = 1.0;
      uStack_a8 = 0;
      FUN_00ddc1d0(auStack_50,&fStack_90,5);
      D3DXVec3TransformNormal(auStack_70,&fStack_b0,auStack_50);
      fStack_bc = 1.0;
      fStack_b8 = 0.0;
      local_b4 = 0.0;
      FUN_00ddc1d0(auStack_5c,auStack_9c,5);
      D3DXVec3TransformNormal(auStack_6c,&fStack_bc,auStack_5c);
      fStack_b8 = 0.0;
      local_b4 = *(float *)(unaff_ESI + 0x44) + fStack_84 * 1.35;
      fStack_b0 = 0.0;
      uVar8 = *(undefined4 *)(uVar4 + 0x374);
      fVar5 = (float10)FUN_00ddba30((*(float *)(uVar4 + 0x3f8) + 90.0) * 0.017453292);
      uStack_94 = 0;
      fStack_90 = (float)fVar5;
      if (*(int *)(uVar4 + 0x568) != 0) {
        fStack_b8 = _DAT_01d618b4;
        local_b4 = _DAT_01d618b8;
        fStack_b0 = 0.0;
        fStack_ac = (float)auStack_6c[0];
      }
      uStack_98 = uVar8;
      FUN_005ca2a0((float *)(iVar2 + 0x10),&fStack_b8,&uStack_98);
      piVar3[0x234] = 1;
      piVar3[0x235] = 10;
      if (*(int *)(uVar4 + 0x528) == 0) {
        FUN_005ca1a0(1);
      }
    }
  }
  return;
}

// 008B7650  FUN_008b7650  size=163  [callgraph]
bool FUN_008b7650(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined *puVar4;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar4 = &DAT_01b35bdc;
    (**(code **)*param_1)(&DAT_01b35bdc);
    iVar1 = FUN_00dd6d80(puVar4);
    uVar2 = -(uint)(iVar1 != 0) & (uint)param_1;
  }
  piVar3 = *(int **)(uVar2 + 0x5e0);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    puVar4 = &DAT_01b35b90;
    (**(code **)(*piVar3 + 4))(&DAT_01b35b90);
    iVar1 = FUN_00dd6d80(puVar4);
    piVar3 = (int *)(-(uint)(iVar1 != 0) & (uint)piVar3);
  }
  if (piVar3[0x1032] != 9) {
    iVar1 = FUN_00a81330();
    if (((iVar1 == 0) && (*(int *)(uVar2 + 0x6c8) == 0)) && (*(int *)(uVar2 + 0x6bc) == 0)) {
      iVar1 = (**(code **)(*piVar3 + 800))(0x3c888889);
      return iVar1 != 0;
    }
  }
  return false;
}

// 008B7700  FUN_008b7700  size=152  [callgraph]
void FUN_008b7700(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar5 = &DAT_01b35bdc;
    (**(code **)*param_1)(&DAT_01b35bdc);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar3 = -(uint)(iVar2 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar3 + 0x5e0);
  if (piVar1 == (int *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = &DAT_01b35b90;
    (**(code **)(*piVar1 + 4))(&DAT_01b35b90);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar2 != 0) & (uint)piVar1;
  }
  iVar2 = FUN_00b83e50();
  if ((((iVar2 != 0) && (*(int *)(uVar4 + 0x40c8) != 8)) && (*(int *)(uVar4 + 0x40c8) != 0xf)) &&
     (*(int *)(uVar3 + 0x3c4) != 0)) {
    *(undefined4 *)(uVar3 + 0x3c4) = 0;
    FUN_00d82510(0xb,param_3);
  }
  return;
}

// 008B77A0  FUN_008b77a0  size=103  [callgraph]
void FUN_008b77a0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar4 = &DAT_01b35bdc;
    (**(code **)*param_1)(&DAT_01b35bdc);
    iVar1 = FUN_00dd6d80(puVar4);
    uVar3 = -(uint)(iVar1 != 0) & (uint)param_1;
  }
  iVar1 = FUN_00d821d0(0xb);
  if (iVar1 != 0) {
    *(undefined4 *)(uVar3 + 0x3c4) = 0;
    return;
  }
  if (*(int *)(uVar3 + 0x188) != 0) {
    uVar2 = FUN_008b7650(param_1,param_2);
    *(undefined4 *)(uVar3 + 0x3c4) = uVar2;
  }
  return;
}

// 008B7810  FUN_008b7810  size=170  [callgraph]
undefined4 FUN_008b7810(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined *puVar4;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar4 = &DAT_01b35bdc;
    (**(code **)*param_1)(&DAT_01b35bdc);
    iVar1 = FUN_00dd6d80(puVar4);
    uVar2 = -(uint)(iVar1 != 0) & (uint)param_1;
  }
  piVar3 = *(int **)(uVar2 + 0x5e0);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    puVar4 = &DAT_01b35b90;
    (**(code **)(*piVar3 + 4))(&DAT_01b35b90);
    iVar1 = FUN_00dd6d80(puVar4);
    piVar3 = (int *)(-(uint)(iVar1 != 0) & (uint)piVar3);
  }
  iVar1 = FUN_00a8c760(0x2b);
  if (((iVar1 == 0) && (*(int *)(uVar2 + 0x6c8) == 0)) && (*(int *)(uVar2 + 0x6bc) == 0)) {
    iVar1 = (**(code **)(*piVar3 + 800))(0x3c888889);
    if ((iVar1 == 0) && (iVar1 = FUN_008e2740(), iVar1 == 0)) {
      return 0;
    }
    return 1;
  }
  return 0;
}

// 008B78C0  FUN_008b78c0  size=1585  [callgraph]
undefined4 FUN_008b78c0(undefined4 *param_1)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  float *pfVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined *puVar9;
  float local_c0;
  float local_bc;
  undefined4 local_b8;
  float local_b4;
  uint local_a8;
  float local_a4;
  float local_a0;
  int local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  undefined4 local_88;
  float local_84;
  float *local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  uint local_5c;
  float *local_58;
  uint local_54;
  float local_50;
  float local_4c;
  undefined4 local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  uint local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  float local_20;
  float local_1c;
  float local_14;
  
  if (param_1 == (undefined4 *)0x0) {
    local_a8 = 0;
  }
  else {
    puVar9 = &DAT_01b35bdc;
    (**(code **)*param_1)(&DAT_01b35bdc);
    iVar4 = FUN_00dd6d80(puVar9);
    local_a8 = -(uint)(iVar4 != 0) & (uint)param_1;
  }
  local_5c = *(uint *)(*(int *)(local_a8 + 0x170) + 8);
  local_9c = 0;
  if (2 < local_5c) {
    local_a4 = 0.0;
    local_a0 = 0.0;
    if (local_5c != 1) {
      local_74 = *(float **)(*(int *)(local_a8 + 0x170) + 4);
      fVar1 = 0.0;
      uVar7 = 0;
      do {
        local_98 = *local_74;
        local_94 = local_74[1];
        local_34 = uVar7 + 1;
        if (local_34 < local_5c) {
          local_54 = local_34 - uVar7;
          local_58 = local_74 + 2;
          uVar8 = local_34;
          do {
            if (7 < local_54) break;
            local_a4 = *local_58;
            fVar1 = local_58[1];
            local_40 = local_a4 - local_98;
            local_a0 = fVar1;
            if (1200.0 < SQRT((fVar1 - local_94) * (fVar1 - local_94) + local_40 * local_40)) {
              bVar3 = true;
              local_9c = 1;
              if (uVar7 <= uVar8) {
                local_38 = (local_94 - fVar1) * (local_94 - fVar1);
                local_3c = (local_98 - local_a4) * (local_98 - local_a4);
                pfVar5 = local_74;
                uVar6 = uVar7;
                do {
                  local_c0 = *pfVar5;
                  local_bc = pfVar5[1];
                  if ((bVar3) && (SQRT(local_c0 * local_c0 + local_bc * local_bc) < 950.0)) {
                    bVar3 = false;
                  }
                  fVar2 = -local_94;
                  if (local_3c <= local_38) {
                    if (200.0 < ABS(local_c0 -
                                    ((local_40 / (-fVar1 - fVar2)) * (-local_bc - fVar2) + local_98)
                                   )) {
                      local_9c = 0;
                      break;
                    }
                  }
                  else if (200.0 < ABS(local_bc -
                                       -(fVar2 + (local_c0 - local_98) *
                                                 ((-fVar1 - fVar2) / local_40)))) {
                    local_9c = 0;
                    break;
                  }
                  uVar6 = uVar6 + 1;
                  pfVar5 = pfVar5 + 2;
                } while (uVar6 <= uVar8);
              }
              if ((*(int *)(local_a8 + 0x3f4) != 0) && (bVar3)) {
                local_9c = 0;
                goto LAB_008b7b1f;
              }
              if (local_9c != 0) goto LAB_008b7b45;
            }
            uVar8 = uVar8 + 1;
            local_54 = local_54 + 1;
            local_58 = local_58 + 2;
          } while (uVar8 < local_5c);
        }
        if (local_9c != 0) {
LAB_008b7b45:
          if (*(int *)(local_a8 + 0x570) == 0) {
            local_20 = (local_98 + local_a4) * 0.5;
            local_1c = (local_94 + fVar1) * 0.5;
            local_84 = (local_14 + local_64) * 0.5;
            local_70 = local_98 - local_20;
            local_6c = local_94 - local_1c;
            local_44 = local_64 - local_84;
            local_20 = local_a4 - local_20;
            local_1c = fVar1 - local_1c;
            local_84 = local_14 - local_84;
            local_50 = local_70 * 100.0 + local_70;
            local_4c = local_6c + local_6c * 100.0;
            local_48 = 0;
            local_44 = local_44 * 100.0 + local_44;
            local_90 = local_20 * 100.0 + local_20;
            local_8c = local_1c + local_1c * 100.0;
            local_88 = 0;
            local_84 = local_84 * 100.0 + local_84;
            local_c0 = -local_50;
            local_bc = -local_4c;
            local_b4 = -local_44;
            local_b8 = 0;
            if ((local_c0 != 0.0) || (local_bc != 0.0)) {
              fVar1 = local_bc * local_bc + local_c0 * local_c0;
              if (fVar1 < 0.0 == (fVar1 == 0.0)) {
                FUN_00ddf460(&local_c0,&local_c0);
              }
              else {
                FUN_00dd5650(&DAT_0163d0ac);
                local_c0 = 0.0;
                local_bc = 1.0;
                local_b8 = 0;
              }
            }
            local_30 = 0;
            local_2c = 0;
            local_28 = 0;
            FUN_008a4ca0(&local_70,&local_50,&local_c0,&local_30,0x447a0000);
            local_c0 = -local_90;
            local_bc = -local_8c;
            local_b4 = -local_84;
            local_b8 = 0;
            if ((local_c0 != 0.0) || (local_bc != 0.0)) {
              fVar1 = local_bc * local_bc + local_c0 * local_c0;
              if (fVar1 < 0.0 == (fVar1 == 0.0)) {
                FUN_00ddf460(&local_c0,&local_c0);
              }
              else {
                FUN_00dd5650(&DAT_0163d0ac);
                local_c0 = 0.0;
                local_bc = 1.0;
                local_b8 = 0;
              }
            }
            local_30 = 0;
            local_2c = 0;
            local_28 = 0;
            FUN_008a4ca0(&local_20,&local_90,&local_c0,&local_30,0x447a0000);
            local_98 = local_70;
            local_94 = local_6c;
            local_a4 = local_20;
            local_a0 = local_1c;
            fVar1 = local_1c;
          }
          local_68 = local_a4;
          local_70 = local_98;
          local_6c = local_94;
          local_64 = fVar1;
          FUN_008b5b70(*(undefined4 *)(local_a8 + 0x178),&local_70);
          uVar7 = local_a8;
          local_70 = local_98;
          local_6c = local_94;
          local_68 = local_a4;
          local_64 = local_a0;
          FUN_008b5b70(*(undefined4 *)(local_a8 + 0x17c),&local_70);
          if (*(int *)(*(int *)(uVar7 + 0x170) + 4) != 0) {
            *(undefined4 *)(*(int *)(uVar7 + 0x170) + 8) = 0;
          }
          return 1;
        }
LAB_008b7b1f:
        local_74 = local_74 + 2;
        uVar7 = local_34;
      } while (local_34 < local_5c - 1);
    }
  }
  return 0;
}

// 008B7F00  FUN_008b7f00  size=712  [callgraph]
undefined4 FUN_008b7f00(undefined4 *param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  float *pfVar10;
  undefined *puVar11;
  undefined4 *local_54;
  uint local_4c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_18;
  float local_14;
  
  if (param_1 == (undefined4 *)0x0) {
    local_54 = param_1;
  }
  else {
    puVar11 = &DAT_01b35bdc;
    (**(code **)*param_1)(&DAT_01b35bdc);
    iVar5 = FUN_00dd6d80(puVar11);
    local_54 = (undefined4 *)(-(uint)(iVar5 != 0) & (uint)param_1);
  }
  iVar5 = local_54[0x5c];
  uVar1 = *(uint *)(iVar5 + 8);
  if (2 < uVar1) {
    local_38 = 0.0;
    local_34 = 0.0;
    local_4c = 0;
    local_30 = 0.0;
    local_2c = 0.0;
    local_18 = 0.0;
    local_14 = 0.0;
    if (uVar1 != 1) {
      pfVar10 = *(float **)(iVar5 + 4);
      uVar8 = 1;
      do {
        local_28 = *pfVar10;
        local_24 = pfVar10[1];
        if (uVar8 < uVar1) {
          iVar7 = uVar8 - local_4c;
          uVar9 = uVar8;
          pfVar4 = pfVar10;
          do {
            pfVar6 = pfVar4 + 2;
            if (1 < uVar9) {
              local_18 = local_30;
              local_14 = local_2c;
            }
            if (uVar9 != 0) {
              local_30 = local_38;
              local_2c = local_34;
            }
            local_38 = *pfVar6;
            local_34 = pfVar4[3];
            fVar2 = (float)iVar7;
            if (iVar7 < 0) {
              fVar2 = fVar2 + 4.2949673e+09;
            }
            if ((((((fVar2 < 5.0) &&
                   (750.0 < SQRT((local_34 - local_24) * (local_34 - local_24) +
                                 (local_38 - local_28) * (local_38 - local_28)))) &&
                  (750.0 < SQRT(local_28 * local_28 + local_24 * local_24))) &&
                 ((ABS(local_38) < 50.0 && (ABS(local_34) < 50.0)))) &&
                ((ABS(local_30) < 50.0 && ((ABS(local_2c) < 50.0 && (ABS(local_18) < 50.0)))))) &&
               (ABS(local_14) < 50.0)) {
              fVar2 = pfVar4[3];
              fVar3 = *pfVar6;
              local_28 = -local_28;
              local_24 = -local_24;
              if (*(int *)(iVar5 + 4) != 0) {
                *(undefined4 *)(iVar5 + 8) = 0;
              }
              local_30 = fVar3;
              local_2c = fVar2;
              local_18 = local_28;
              local_14 = local_24;
              FUN_008b5b70(local_54[0x5e],&local_30);
              local_28 = local_18;
              local_24 = local_14;
              local_30 = fVar3;
              local_2c = fVar2;
              FUN_008b5b70(local_54[0x5f],&local_30);
              return 1;
            }
            uVar9 = uVar9 + 1;
            iVar7 = iVar7 + 1;
            pfVar4 = pfVar6;
          } while (uVar9 < uVar1);
        }
        local_4c = local_4c + 1;
        pfVar10 = pfVar10 + 2;
        uVar8 = uVar8 + 1;
      } while (local_4c < uVar1 - 1);
    }
  }
  return 0;
}

// 008B81D0  FUN_008b81d0  size=272  [callgraph]
void FUN_008b81d0(undefined4 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined4 local_8;
  undefined4 local_4;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = &DAT_01b35bdc;
    (**(code **)*param_1)(&DAT_01b35bdc);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar2 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar4 + 0x5e0);
  if (piVar1 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar5 = &DAT_01b35b90;
    (**(code **)(*piVar1 + 4))(&DAT_01b35b90);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar3 = -(uint)(iVar2 != 0) & (uint)piVar1;
  }
  param_1 = (undefined4 *)0x42700000;
  local_4 = 0x3c23d70a;
  local_8 = 0x3c23d70a;
  if (param_2 != 0) {
    local_4 = 0x3ccccccd;
    local_8 = 0x3ccccccd;
    param_1 = (undefined4 *)0x42480000;
  }
  FUN_00b8bcd0();
  if (((*(int *)(uVar4 + 0xe0) == 0) && (*(int *)(uVar4 + 0x188) == 0)) &&
     (*(int *)(uVar4 + 0x330) != 0x13)) {
    local_8 = *(undefined4 *)(uVar4 + 0x5d0);
  }
  *(undefined4 *)(uVar3 + 0x341c) = 0x3f800000;
  FUN_00b85350(param_1,local_4,local_8,0,1,0x3e99999a);
  *(undefined4 *)(uVar3 + 0x3428) = 0;
  *(undefined4 *)(uVar3 + 0x342c) = 0;
  *(undefined4 **)(uVar4 + 0x5cc) = param_1;
  return;
}

// 008B82E0  FUN_008b82e0  size=221  [callgraph]
void FUN_008b82e0(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float *pfVar7;
  uint uVar8;
  uint uVar9;
  undefined *puVar10;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar8 = 0;
  }
  else {
    puVar10 = &DAT_01b35bdc;
    (**(code **)*param_1)(&DAT_01b35bdc);
    iVar6 = FUN_00dd6d80(puVar10);
    uVar8 = -(uint)(iVar6 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar8 + 0x5e0);
  if (piVar1 == (int *)0x0) {
    uVar9 = 0;
  }
  else {
    puVar10 = &DAT_01b35b90;
    (**(code **)(*piVar1 + 4))(&DAT_01b35b90);
    iVar6 = FUN_00dd6d80(puVar10);
    uVar9 = -(uint)(iVar6 != 0) & (uint)piVar1;
  }
  iVar6 = FUN_00a7ca20();
  piVar2 = *(int **)(iVar6 + 0x18);
  for (piVar1 = *(int **)(iVar6 + 0x14); piVar1 != piVar2; piVar1 = (int *)piVar1[2]) {
    iVar6 = *(int *)(*piVar1 + 0x24);
    if ((((iVar6 == 0xf0086) || (iVar6 == 0xf0087)) || (iVar6 == 0xf0089)) &&
       (pfVar7 = (float *)FUN_00a7c8b0(), fVar3 = *(float *)(uVar9 + 0x40) - *pfVar7,
       fVar5 = *(float *)(uVar9 + 0x44) - pfVar7[1], fVar4 = *(float *)(uVar9 + 0x48) - pfVar7[2],
       SQRT(fVar3 * fVar3 + fVar5 * fVar5 + fVar4 * fVar4) < *(float *)(uVar8 + 0x574))) {
      FUN_00c5bc40(*piVar1,1);
    }
  }
  return;
}

// 008B83C0  FUN_008b83c0  size=170  [callgraph]
void FUN_008b83c0(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  float10 fVar4;
  undefined *puVar5;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    puVar5 = &DAT_01b35bdc;
    (**(code **)*param_1)(&DAT_01b35bdc);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar1 = -(uint)(iVar2 != 0) & (uint)param_1;
  }
  piVar3 = *(int **)(uVar1 + 0x5e0);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    puVar5 = &DAT_01b35b90;
    (**(code **)(*piVar3 + 4))(&DAT_01b35b90);
    iVar2 = FUN_00dd6d80(puVar5);
    piVar3 = (int *)(-(uint)(iVar2 != 0) & (uint)piVar3);
  }
  if ((DAT_01bea090 & 0x80000000) == 0) {
    iVar2 = FUN_00b7cda0();
    if (iVar2 == 1) {
      return;
    }
    iVar2 = FUN_00bc32b0();
    if (iVar2 == 0) {
      FUN_00bda140();
    }
  }
  if ((-1 < (int)DAT_01bea090) && ((DAT_01bea090 & 2) == 0)) {
    fVar4 = (float10)(**(code **)(*piVar3 + 0x3b0))();
    FUN_00bc3000((float)(fVar4 * (float10)(float)piVar3[0xce3]));
  }
  return;
}

// 008B8470  FUN_008b8470  size=239  [callgraph]
void FUN_008b8470(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined *puVar7;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar6 = 0;
  }
  else {
    puVar7 = &DAT_01b35bdc;
    (**(code **)*param_1)(&DAT_01b35bdc);
    iVar5 = FUN_00dd6d80(puVar7);
    uVar6 = -(uint)(iVar5 != 0) & (uint)param_1;
  }
  piVar3 = *(int **)(uVar6 + 0x5e0);
  if (piVar3 == (int *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar7 = &DAT_01b35b90;
    (**(code **)(*piVar3 + 4))(&DAT_01b35b90);
    iVar5 = FUN_00dd6d80(puVar7);
    uVar4 = -(uint)(iVar5 != 0) & (uint)piVar3;
  }
  if (*(int *)(uVar6 + 0x52c) == 0) {
    if (*(int *)(uVar6 + 0x530) == 0) {
      uVar1 = *(undefined4 *)(uVar4 + 0x4060);
      uVar2 = *(undefined4 *)(uVar4 + 0x4064);
    }
    else {
      uVar1 = *(undefined4 *)(uVar4 + 0x4068);
      uVar2 = *(undefined4 *)(uVar4 + 0x406c);
      if (((((DAT_01bea094 & 0x800) != 0) && (iVar5 = *(int *)(uVar4 + 0x40c8), iVar5 != 0x14)) &&
          (iVar5 != 0xc)) && (iVar5 != 8)) {
        uVar1 = 0x3f800000;
        uVar2 = 0x3f800000;
      }
    }
  }
  else {
    uVar1 = *(undefined4 *)(uVar4 + 0x4070);
    uVar2 = *(undefined4 *)(uVar4 + 0x4074);
  }
  *(undefined4 *)(uVar4 + 0x341c) = 0x3f800000;
  FUN_00b85350(param_3,uVar1,uVar2,*(undefined4 *)(uVar4 + 0x3450),0,param_2);
  return;
}

// 008B8630  FUN_008b8630  size=111  [callgraph]
void FUN_008b8630(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar4 = &DAT_01b35bdc;
    (**(code **)*param_1)(&DAT_01b35bdc);
    iVar2 = FUN_00dd6d80(puVar4);
    uVar3 = -(uint)(iVar2 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar3 + 0x5e0);
  if (piVar1 == (int *)0x0) {
    *(undefined4 *)(uVar3 + 0x524) = uRam0000341c;
    return;
  }
  puVar4 = &DAT_01b35b90;
  (**(code **)(*piVar1 + 4))(&DAT_01b35b90);
  iVar2 = FUN_00dd6d80(puVar4);
  *(undefined4 *)(uVar3 + 0x524) = *(undefined4 *)((-(uint)(iVar2 != 0) & (uint)piVar1) + 0x341c);
  return;
}

// 008B86A0  FUN_008b86a0  size=121  [callgraph]
void FUN_008b86a0(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar3 = &DAT_01b35bdc;
    (**(code **)*param_1)(&DAT_01b35bdc);
    iVar1 = FUN_00dd6d80(puVar3);
    uVar2 = -(uint)(iVar1 != 0) & (uint)param_1;
  }
  if (*(int **)(uVar2 + 0x5e0) == (int *)0x0) {
    FUN_00b7ab30(*(undefined4 *)(uVar2 + 0x524));
    return;
  }
  puVar3 = &DAT_01b35b90;
  (**(code **)(**(int **)(uVar2 + 0x5e0) + 4))(&DAT_01b35b90);
  FUN_00dd6d80(puVar3);
  FUN_00b7ab30(*(undefined4 *)(uVar2 + 0x524));
  return;
}

// 008B8720  FUN_008b8720  size=608  [callgraph]
void FUN_008b8720(undefined4 *param_1)

{
  void *_Src;
  float fVar1;
  int iVar2;
  uint uVar3;
  void **ppvVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  float fVar7;
  undefined1 *puVar8;
  void *apvStack_fc [5];
  undefined4 *puStack_e8;
  undefined *local_e4;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  float fStack_cc;
  float local_c8;
  float local_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [12];
  undefined1 auStack_7c [8];
  undefined1 auStack_74 [4];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    local_e4 = &DAT_01b35bdc;
    puStack_e8 = (undefined4 *)0x8b8747;
    (**(code **)*param_1)();
    puStack_e8 = (undefined4 *)0x8b874e;
    iVar2 = FUN_00dd6d80();
    uVar3 = -(uint)(iVar2 != 0) & (uint)param_1;
  }
  if (*(int **)(uVar3 + 0x5e0) != (int *)0x0) {
    local_e4 = &DAT_01b35b90;
    puStack_e8 = (undefined4 *)0x8b8772;
    (**(code **)(**(int **)(uVar3 + 0x5e0) + 4))();
    puStack_e8 = (undefined4 *)0x8b8779;
    FUN_00dd6d80();
  }
  local_e4 = (undefined *)0x0;
  local_c8 = 0.0;
  puStack_e8 = (undefined4 *)0x8b8796;
  iVar2 = FUN_00a8cbe0();
  if (iVar2 != 0) {
    local_e4 = (undefined *)0x0;
    puStack_e8 = (undefined4 *)0x8b87a7;
    iVar2 = FUN_00a8cbe0();
    if (iVar2 == 0) {
      local_c8 = 1.4013e-45;
    }
  }
  local_c4 = *(float *)(*(int *)(uVar3 + 0x38c + (int)local_c8 * 4) + 0x8d8);
  local_e4 = (undefined *)0xffffffff;
  puStack_e8 = (undefined4 *)0x8b87d1;
  iVar2 = FUN_00a12210();
  _Src = (void *)(iVar2 + 0x10);
  local_e4 = (undefined *)
             -(*(float *)(iVar2 + 0x18) /
              SQRT(*(float *)(iVar2 + 0x38) * *(float *)(iVar2 + 0x38) +
                   *(float *)(iVar2 + 0x34) * *(float *)(iVar2 + 0x34) +
                   *(float *)(iVar2 + 0x30) * *(float *)(iVar2 + 0x30)));
  puStack_e8 = (undefined4 *)0x8b87fd;
  FUN_00ddbaa0();
  local_70 = 0;
  apvStack_fc[4] = &local_70;
  local_6c = 0;
  local_68 = 0x3f800000;
  apvStack_fc[3] = (void *)0x8b8823;
  puStack_e8 = apvStack_fc[4];
  local_e4 = _Src;
  D3DXVec3TransformNormal();
  local_6c = 0x3f800000;
  apvStack_fc[1] = &local_6c;
  local_68 = 0;
  uStack_64 = 0;
  apvStack_fc[0] = (void *)0x8b884d;
  apvStack_fc[2] = apvStack_fc[1];
  apvStack_fc[3] = _Src;
  D3DXVec3TransformNormal();
  puVar8 = &stack0xffffff28;
  uStack_d4 = 0x3f800000;
  uStack_d0 = 0;
  apvStack_fc[0] = _Src;
  D3DXVec3TransformNormal(puVar8,puVar8);
  uStack_9c = 0;
  uStack_a0 = 0;
  uStack_a4 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_b4 = 0;
  uStack_b8 = 0;
  uStack_bc = 0;
  local_c4 = 0.0;
  local_c8 = 0.0;
  fStack_cc = 0.0;
  uStack_d0 = 0;
  uStack_98 = 0x3f800000;
  uStack_ac = 0x3f800000;
  uStack_c0 = 0x3f800000;
  uStack_d4 = 0x3f800000;
  FID_conflict__memcpy(&uStack_d4,_Src,0x40);
  fVar7 = *(float *)(uVar3 + 0x3b0) + *(float *)(uVar3 + 0x374);
  puVar6 = auStack_74;
  D3DXMatrixRotationX(puVar6,fVar7);
  D3DXMatrixMultiply(&stack0xffffff24,auStack_7c,&stack0xffffff24);
  D3DXMatrixRotationZ(auStack_88,apvStack_fc[0]);
  D3DXMatrixMultiply(apvStack_fc + 3,auStack_90,apvStack_fc + 3);
  fVar1 = *(float *)(uVar3 + 0x3a4) + 1.35;
  fStack_cc = fStack_cc + (float)puVar6 * fVar1;
  local_c8 = fVar7 * fVar1 + local_c8;
  local_c4 = (float)puVar8 * fVar1 + local_c4;
  ppvVar4 = apvStack_fc;
  puVar5 = &DAT_01d61860;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *ppvVar4;
    ppvVar4 = ppvVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_005ee3d0(apvStack_fc);
  return;
}

// 008B8980  FUN_008b8980  size=108  [callgraph]
undefined4 FUN_008b8980(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar4 = &DAT_01b35bdc;
    (**(code **)*param_1)(&DAT_01b35bdc);
    iVar3 = FUN_00dd6d80(puVar4);
    uVar2 = -(uint)(iVar3 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar2 + 0x5e0);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar4 = &DAT_01b35b90;
    (**(code **)(*piVar1 + 4))(&DAT_01b35b90);
    iVar3 = FUN_00dd6d80(puVar4);
    uVar2 = -(uint)(iVar3 != 0) & (uint)piVar1;
  }
  if ((*(int *)(uVar2 + 0x40c8) != 8) && (*(int *)(uVar2 + 0x40c8) != 0x12)) {
    return 0;
  }
  return 1;
}

// 008B89F0  FUN_008b89f0  size=108  [callgraph]
undefined4 FUN_008b89f0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar4 = &DAT_01b35bdc;
    (**(code **)*param_1)(&DAT_01b35bdc);
    iVar3 = FUN_00dd6d80(puVar4);
    uVar2 = -(uint)(iVar3 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar2 + 0x5e0);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar4 = &DAT_01b35b90;
    (**(code **)(*piVar1 + 4))(&DAT_01b35b90);
    iVar3 = FUN_00dd6d80(puVar4);
    uVar2 = -(uint)(iVar3 != 0) & (uint)piVar1;
  }
  if ((*(int *)(uVar2 + 0x40c8) != 8) && (*(int *)(uVar2 + 0x40c8) != 0x12)) {
    return 0;
  }
  return 2;
}

// 008B8A60  FUN_008b8a60  size=108  [callgraph]
undefined4 FUN_008b8a60(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar4 = &DAT_01b35bdc;
    (**(code **)*param_1)(&DAT_01b35bdc);
    iVar3 = FUN_00dd6d80(puVar4);
    uVar2 = -(uint)(iVar3 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar2 + 0x5e0);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar4 = &DAT_01b35b90;
    (**(code **)(*piVar1 + 4))(&DAT_01b35b90);
    iVar3 = FUN_00dd6d80(puVar4);
    uVar2 = -(uint)(iVar3 != 0) & (uint)piVar1;
  }
  if ((*(int *)(uVar2 + 0x40c8) != 8) && (*(int *)(uVar2 + 0x40c8) != 0x12)) {
    return 0;
  }
  return 1;
}

// 008B8AD0  FUN_008b8ad0  size=108  [callgraph]
undefined4 FUN_008b8ad0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar4 = &DAT_01b35bdc;
    (**(code **)*param_1)(&DAT_01b35bdc);
    iVar3 = FUN_00dd6d80(puVar4);
    uVar2 = -(uint)(iVar3 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar2 + 0x5e0);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar4 = &DAT_01b35b90;
    (**(code **)(*piVar1 + 4))(&DAT_01b35b90);
    iVar3 = FUN_00dd6d80(puVar4);
    uVar2 = -(uint)(iVar3 != 0) & (uint)piVar1;
  }
  if ((*(int *)(uVar2 + 0x40c8) != 8) && (*(int *)(uVar2 + 0x40c8) != 0x12)) {
    return 0;
  }
  return 1;
}

// 008B8B40  FUN_008b8b40  size=99  [callgraph]
void FUN_008b8b40(undefined4 *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    puVar3 = &DAT_01b35bdc;
    (**(code **)*param_1)(&DAT_01b35bdc);
    iVar2 = FUN_00dd6d80(puVar3);
    uVar1 = -(uint)(iVar2 != 0) & (uint)param_1;
  }
  if (*(int **)(uVar1 + 0x5e0) != (int *)0x0) {
    puVar3 = &DAT_01b35b90;
    (**(code **)(**(int **)(uVar1 + 0x5e0) + 4))(&DAT_01b35b90);
    FUN_00dd6d80(puVar3);
  }
  if ((*(int *)(param_2 + 0x24) != 6) && (*(int *)(param_2 + 0x24) != 5)) {
    DAT_01dc08bc = 0;
  }
  return;
}

// 008B8BB0  FUN_008b8bb0  size=163  [callgraph]
undefined4 FUN_008b8bb0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = &DAT_01b35bdc;
    (**(code **)*param_1)(&DAT_01b35bdc);
    iVar3 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar3 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar4 + 0x5e0);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar5 = &DAT_01b35b90;
    (**(code **)(*piVar1 + 4))(&DAT_01b35b90);
    iVar3 = FUN_00dd6d80(puVar5);
    uVar2 = -(uint)(iVar3 != 0) & (uint)piVar1;
  }
  iVar3 = *(int *)(uVar2 + 0x40c8);
  if ((((iVar3 != 0xd) && (iVar3 != 9)) && (iVar3 != 0xf)) && (iVar3 != 0xc)) {
    iVar3 = FUN_00a81330();
    if (iVar3 == 0) {
      iVar3 = FUN_008b7810(param_1);
      if ((iVar3 != 0) && (*(int *)(uVar4 + 0xe0) == 0)) {
        return 0;
      }
    }
  }
  return 1;
}

// 008CD170  ZangekiStatePl1500::vf08  size=2337  [class]
undefined4 ZangekiStatePl1500::vf08(int **param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  undefined4 ***pppuStack_8c;
  undefined4 ***pppuStack_88;
  undefined4 ***pppuStack_84;
  undefined1 **ppuStack_80;
  char **ppcStack_7c;
  undefined1 **ppuStack_78;
  undefined4 **ppuStack_74;
  undefined4 **ppuStack_70;
  undefined4 **ppuStack_6c;
  int ***pppiStack_68;
  undefined4 **ppuStack_64;
  undefined1 *puStack_60;
  char *pcStack_5c;
  undefined1 *puStack_58;
  undefined4 *puStack_54;
  undefined4 *puStack_50;
  undefined4 *puStack_4c;
  int **local_48;
  int **local_44;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  int *local_28;
  undefined4 *local_24;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_44 = param_1;
  local_48 = (int **)0x8cd189;
  iVar1 = StateMachineNode::vf08();
  if (iVar1 == 0) {
    return 0;
  }
  if (param_1 == (int **)0x0) {
    uVar4 = 0;
  }
  else {
    local_44 = (int **)&DAT_01b35bdc;
    local_48 = (int **)0x8cd1ad;
    (*(code *)**param_1)();
    local_48 = (int **)0x8cd1b4;
    iVar1 = FUN_00dd6d80();
    uVar4 = -(uint)(iVar1 != 0) & (uint)param_1;
  }
  local_28 = *(int **)(uVar4 + 0x5e0);
  if (local_28 == (int *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    local_44 = (int **)&DAT_01b35b90;
    local_48 = (int **)0x8cd1da;
    (**(code **)(*local_28 + 4))();
    local_48 = (int **)0x8cd1e1;
    iVar1 = FUN_00dd6d80();
    piVar5 = (int *)(-(uint)(iVar1 != 0) & (uint)local_28);
  }
  local_44 = (int **)&DAT_01b7bd48;
  local_48 = (int **)0xb0;
  puStack_4c = (undefined4 *)0x8cd1fa;
  puVar2 = (undefined4 *)FUN_00dd3500();
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = puVar2 + 4;
    puVar2[2] = 0;
    puVar2[3] = 0x14;
    *puVar2 = lib::StaticArray<Hw::cVec2,20>::vftable;
  }
  local_44 = (int **)&DAT_01b7bd48;
  local_48 = (int **)0xb0;
  *(undefined4 **)(uVar4 + 0x170) = puVar2;
  puStack_4c = (undefined4 *)0x8cd230;
  puVar2 = (undefined4 *)FUN_00dd3500();
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = puVar2 + 4;
    puVar2[2] = 0;
    puVar2[3] = 0x14;
    *puVar2 = lib::StaticArray<Hw::cVec2,20>::vftable;
  }
  local_44 = (int **)&DAT_01b7bd48;
  local_48 = (int **)0x60;
  *(undefined4 **)(uVar4 + 0x174) = puVar2;
  puStack_4c = (undefined4 *)0x8cd263;
  puVar2 = (undefined4 *)FUN_00dd3500();
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = puVar2 + 4;
    puVar2[2] = 0;
    puVar2[3] = 5;
    *puVar2 = lib::StaticArray<Hw::cVec4,5>::vftable;
  }
  local_44 = (int **)&DAT_01b7bd48;
  local_48 = (int **)0xb0;
  *(undefined4 **)(uVar4 + 0x178) = puVar2;
  puStack_4c = (undefined4 *)0x8cd299;
  puVar2 = (undefined4 *)FUN_00dd3500();
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = puVar2 + 4;
    puVar2[2] = 0;
    puVar2[3] = 10;
    *puVar2 = lib::StaticArray<Hw::cVec4,10>::vftable;
  }
  *(undefined4 **)(uVar4 + 0x17c) = puVar2;
  *(undefined4 *)(uVar4 + 0x5cc) = 0xbf800000;
  *(undefined4 *)(uVar4 + 0x300) = 0;
  if (((float)piVar5[0xd07] <= 0.0) || (piVar5[0xd14] == 0)) {
    if ((0.0 < (float)piVar5[0xd07]) || (piVar5[0x15bc] != 0)) {
      *(undefined4 *)(uVar4 + 0x528) = 1;
      *(undefined4 *)(uVar4 + 0x52c) = 0;
      *(undefined4 *)(uVar4 + 0x530) = 1;
    }
    else {
      local_44 = (int **)0x8cd327;
      iVar1 = FUN_0085c0e0();
      *(undefined4 *)(uVar4 + 0x52c) = 0;
      *(undefined4 *)(uVar4 + 0x530) = 0;
      if (iVar1 == 1) {
        *(undefined4 *)(uVar4 + 0x528) = 1;
      }
      else {
        *(undefined4 *)(uVar4 + 0x528) = 0;
      }
    }
  }
  else {
    *(undefined4 *)(uVar4 + 0x528) = 1;
    *(undefined4 *)(uVar4 + 0x52c) = 1;
    *(undefined4 *)(uVar4 + 0x530) = 0;
    local_44 = (int **)0x8cd309;
    FUN_00bc31a0();
  }
  local_28 = (int *)piVar5[0x1032];
  if (((((local_28 != (int *)0xc) && (local_28 != (int *)0xe)) && (local_28 != (int *)0x12)) &&
      ((local_28 != (int *)0x13 && (local_28 != (int *)0x4)))) && (local_28 != (int *)0x8)) {
    *(undefined4 *)(uVar4 + 0x5c4) = 0;
    local_24 = (undefined4 *)piVar5[0x13c];
    local_44 = (int **)(*(float *)(uVar4 + 0x574) * 1.2 * 30.0);
    local_48 = (int **)0x3f490fdb;
    puStack_4c = (undefined4 *)0x8cd3dd;
    iVar1 = (**(code **)(*piVar5 + 0x84))();
    puStack_4c = *(undefined4 **)(iVar1 + 4);
    puStack_50 = local_24;
    puStack_54 = (undefined4 *)(uVar4 + 0x5b8);
    puStack_58 = (undefined1 *)0x8cd3fa;
    FUN_00c58e90();
    if (*(int *)(uVar4 + 0x5c4) < 1) {
      local_44 = (int **)0x8cd40d;
      iVar1 = FUN_00a81330();
      if (iVar1 == 0) {
        local_44 = (int **)0x8cd418;
        iVar1 = FUN_00416db0();
        if (iVar1 == 0) {
          if (*(int *)(uVar4 + 0x528) != 0) {
            local_28 = (int *)0x2;
          }
        }
        else {
          local_28 = (int *)0x2;
        }
        goto LAB_008cd440;
      }
    }
    local_28 = (int *)0x14;
  }
LAB_008cd440:
  local_44 = (int **)0x8cd44b;
  iVar1 = FUN_00a81330();
  piVar3 = (int *)0xc;
  if (iVar1 == 0) {
    piVar3 = local_28;
  }
  switch(piVar3) {
  default:
    local_48 = (int **)0xd;
    break;
  case (int *)0x2:
  case (int *)0x5:
    local_48 = (int **)0x3;
    break;
  case (int *)0xc:
    local_48 = (int **)0xe;
    break;
  case (int *)0x14:
    local_48 = (int **)0xa;
  }
  local_44 = param_1;
  puStack_4c = (undefined4 *)0x8cd494;
  puStack_4c = (undefined4 *)(**(code **)*param_1[1])();
  puStack_50 = (undefined4 *)0x8cd49e;
  FUN_00d82bf0();
  *(undefined4 *)(uVar4 + 0x2f4) = 0;
  *(undefined4 *)(uVar4 + 0x2f8) = 0;
  *(undefined4 *)(uVar4 + 0x304) = 0;
  piVar5[0x1016] = 0;
  *(undefined4 *)(uVar4 + 0x3f8) = 0x42b40000;
  local_48 = param_1;
  *(undefined4 *)(uVar4 + 0x400) = 0x42b40000;
  *(undefined4 *)(uVar4 + 0x3fc) = 1;
  *(undefined4 *)(uVar4 + 0x6bc) = 0;
  puStack_4c = (undefined4 *)0x8cd4e1;
  iVar1 = FUN_008b7810();
  if ((iVar1 != 0) ||
     (((*(int *)(uVar4 + 0x530) == 0 && (*(int *)(uVar4 + 0x52c) == 0)) &&
      (*(int *)(uVar4 + 0x528) == 0)))) goto LAB_008cd55f;
  local_48 = (int **)0x8cd50c;
  (**(code **)(*piVar5 + 0x318))();
  local_48 = (int **)0x0;
  puStack_4c = (undefined4 *)0x8cd518;
  FUN_008e0af0();
  local_48 = (int **)0x2b;
  puStack_4c = (undefined4 *)0x8cd521;
  iVar1 = FUN_00a8c760();
  if (iVar1 == 0) {
    local_48 = (int **)0x8cd52c;
    iVar1 = FUN_00606950();
    if (iVar1 != 0) goto LAB_008cd53f;
    local_48 = (int **)0xe;
    puStack_4c = (undefined4 *)0x8cd53b;
    iVar1 = FUN_00d821d0();
    if (iVar1 != 0) goto LAB_008cd53f;
  }
  else {
LAB_008cd53f:
    *(undefined4 *)(uVar4 + 0xe0) = 1;
    piVar5[0x225] = 0x38d1b717;
  }
  *(undefined4 *)(uVar4 + 0x6bc) = 1;
LAB_008cd55f:
  *(undefined4 *)(uVar4 + 0x3c4) = 0;
  *(undefined4 *)(uVar4 + 0x188) = 0;
  local_48 = (int **)0x8cd572;
  FUN_00b7cd90();
  local_48 = (int **)0x8;
  puStack_4c = (undefined4 *)0x3f4ccccd;
  puStack_50 = (undefined4 *)0x3f800000;
  puStack_54 = (undefined4 *)0x0;
  puStack_58 = (undefined1 *)0x8cd58c;
  FUN_00dda360();
  puStack_58 = (undefined1 *)0x0;
  pcStack_5c = "core_se_btl_zangeki_in";
  puStack_60 = (undefined1 *)0x8cd597;
  FUN_00e5e050();
  puStack_60 = (undefined1 *)0x24;
  ppuStack_64 = (undefined4 **)0x8cd59e;
  FUN_00d89e60();
  ppuStack_64 = (undefined4 **)&DAT_01b7bd48;
  pppiStack_68 = (int ***)0x60;
  *(undefined4 *)(uVar4 + 0x308) = 0;
  *(undefined4 *)(uVar4 + 0x30c) = 0;
  *(undefined4 *)(uVar4 + 0x310) = 0;
  *(undefined4 *)(uVar4 + 0x314) = 0;
  ppuStack_6c = (undefined4 **)0x8cd5c2;
  puVar2 = (undefined4 *)FUN_00dd3500();
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = puVar2 + 4;
    puVar2[2] = 0;
    puVar2[3] = 0x14;
    *puVar2 = lib::StaticArray<float,20>::vftable;
  }
  local_48 = (int **)&DAT_01b7bd48;
  puStack_4c = (undefined4 *)0x60;
  *(undefined4 **)(uVar4 + 0x318) = puVar2;
  puStack_50 = (undefined4 *)0x8cd5f5;
  puVar2 = (undefined4 *)FUN_00dd3500();
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = puVar2 + 4;
    puVar2[2] = 0;
    puVar2[3] = 0x14;
    *puVar2 = lib::StaticArray<float,20>::vftable;
  }
  *(undefined4 **)(uVar4 + 0x31c) = puVar2;
  if (*(int *)(*(int *)(uVar4 + 0x318) + 4) != 0) {
    *(undefined4 *)(*(int *)(uVar4 + 0x318) + 8) = 0;
  }
  local_28 = (int *)0x42b40000;
  local_48 = &local_28;
  puStack_4c = (undefined4 *)0x8cd646;
  (**(code **)(**(int **)(uVar4 + 0x318) + 8))();
  local_2c = 0xc2870000;
  puStack_4c = &local_2c;
  puStack_50 = (undefined4 *)0x8cd662;
  (**(code **)(**(int **)(uVar4 + 0x318) + 8))();
  uStack_30 = 0x42870000;
  puStack_50 = &uStack_30;
  puStack_54 = (undefined4 *)0x8cd67e;
  (**(code **)(**(int **)(uVar4 + 0x318) + 8))();
  uStack_34 = 0xc2b40000;
  puStack_54 = &uStack_34;
  puStack_58 = (undefined1 *)0x8cd69a;
  (**(code **)(**(int **)(uVar4 + 0x318) + 8))();
  puStack_58 = &stack0xffffffc8;
  pcStack_5c = (char *)0x8cd6b6;
  (**(code **)(**(int **)(uVar4 + 0x318) + 8))();
  pcStack_5c = &stack0xffffffc4;
  puStack_60 = (undefined1 *)0x8cd6d2;
  (**(code **)(**(int **)(uVar4 + 0x318) + 8))();
  puStack_60 = &stack0xffffffc0;
  ppuStack_64 = (undefined4 **)0x8cd6ee;
  (**(code **)(**(int **)(uVar4 + 0x318) + 8))();
  local_44 = (int **)0xc2ab0000;
  ppuStack_64 = &local_44;
  pppiStack_68 = (int ***)0x8cd70a;
  (**(code **)(**(int **)(uVar4 + 0x318) + 8))();
  local_48 = (int **)0x42ee8000;
  pppiStack_68 = &local_48;
  ppuStack_6c = (undefined4 **)0x8cd726;
  (**(code **)(**(int **)(uVar4 + 0x318) + 8))();
  puStack_4c = (undefined4 *)0xc2ca8000;
  ppuStack_6c = &puStack_4c;
  ppuStack_70 = (undefined4 **)0x8cd742;
  (**(code **)(**(int **)(uVar4 + 0x318) + 8))();
  puStack_50 = (undefined4 *)0x424f0000;
  ppuStack_70 = &puStack_50;
  ppuStack_74 = (undefined4 **)0x8cd75e;
  (**(code **)(**(int **)(uVar4 + 0x318) + 8))();
  puStack_54 = (undefined4 *)0xc2d80000;
  ppuStack_74 = &puStack_54;
  ppuStack_78 = (undefined1 **)0x8cd77a;
  (**(code **)(**(int **)(uVar4 + 0x318) + 8))();
  puStack_58 = (undefined1 *)0x42cf0000;
  ppuStack_78 = &puStack_58;
  ppcStack_7c = (char **)0x8cd796;
  (**(code **)(**(int **)(uVar4 + 0x318) + 8))();
  pcStack_5c = (char *)0xc2c18000;
  ppcStack_7c = &pcStack_5c;
  ppuStack_80 = (undefined1 **)0x8cd7b2;
  (**(code **)(**(int **)(uVar4 + 0x318) + 8))();
  if (*(int *)(*(int *)(uVar4 + 0x31c) + 4) != 0) {
    *(undefined4 *)(*(int *)(uVar4 + 0x31c) + 8) = 0;
  }
  puStack_60 = (undefined1 *)0x431e0000;
  ppuStack_80 = &puStack_60;
  pppuStack_84 = (undefined4 ***)0x8cd7dc;
  (**(code **)(**(int **)(uVar4 + 0x31c) + 8))();
  ppuStack_64 = (undefined4 **)0x40accccd;
  pppuStack_84 = &ppuStack_64;
  pppuStack_88 = (undefined4 ***)0x8cd7f8;
  (**(code **)(**(int **)(uVar4 + 0x31c) + 8))();
  pppiStack_68 = (int ***)0xc3196667;
  pppuStack_88 = &pppiStack_68;
  pppuStack_8c = (undefined4 ***)0x8cd814;
  (**(code **)(**(int **)(uVar4 + 0x31c) + 8))();
  ppuStack_6c = (undefined4 **)0xc1100000;
  pppuStack_8c = &ppuStack_6c;
  (**(code **)(**(int **)(uVar4 + 0x31c) + 8))();
  ppuStack_70 = (undefined4 **)0x431a8ccd;
  (**(code **)(**(int **)(uVar4 + 0x31c) + 8))(&ppuStack_70);
  ppuStack_74 = (undefined4 **)0xc1580001;
  (**(code **)(**(int **)(uVar4 + 0x31c) + 8))(&ppuStack_74);
  ppuStack_78 = (undefined1 **)0xc30de666;
  (**(code **)(**(int **)(uVar4 + 0x31c) + 8))();
  ppcStack_7c = (char **)0x41633334;
  (**(code **)(**(int **)(uVar4 + 0x31c) + 8))(&ppcStack_7c);
  ppuStack_80 = (undefined1 **)0x43196667;
  (**(code **)(**(int **)(uVar4 + 0x31c) + 8))(&ppuStack_80);
  pppuStack_84 = (undefined4 ***)0xc0900000;
  (**(code **)(**(int **)(uVar4 + 0x31c) + 8))(&pppuStack_84);
  pppuStack_88 = (undefined4 ***)0xc3196667;
  (**(code **)(**(int **)(uVar4 + 0x31c) + 8))(&pppuStack_88);
  pppuStack_8c = (undefined4 ***)0x3f800000;
  (**(code **)(**(int **)(uVar4 + 0x31c) + 8))(&pppuStack_8c);
  piVar5[0x4a5] = 0;
  piVar5[0x4a6] = 0;
  piVar5[0x4a4] = 0;
  piVar5[0x4ab] = 0;
  piVar5[0x4ac] = 0;
  piVar5[0x4aa] = 0;
  FUN_008c5e50(param_1);
  *(undefined4 *)(uVar4 + 0x510) = 0;
  *(undefined4 *)(uVar4 + 0x514) = 0;
  *(undefined4 *)(uVar4 + 0x518) = 0;
  *(undefined4 *)(uVar4 + 0x51c) = 0x3f800000;
  *(undefined4 *)(uVar4 + 0x3ec) = 0x10000;
  *(undefined4 *)(uVar4 + 0x3f0) = 0;
  piVar5[0x2dd] = 0;
  *(undefined4 *)(uVar4 + 0x56c) = 0;
  *(undefined4 *)(uVar4 + 0x358) = 0;
  DAT_01d61924 = 0;
  DAT_01d6192c = 0;
  FUN_00b7aa60();
  local_28 = (int *)0x25;
  FUN_00a82610(piVar5[0x13c],0x25,0xffffffff);
  pppuStack_8c = (undefined4 ***)0x0;
  pppuStack_88 = (undefined4 ***)0x0;
  pppuStack_84 = (undefined4 ***)0x0;
  FUN_00a832d0(&pppuStack_8c,0,0x3fc90fdb,0,0xbfc90fdb);
  *(undefined1 *)(piVar5 + 0xd18) = 0;
  FUN_009403a0();
  if (*(int *)(uVar4 + 0x38c) != 0) {
    FUN_005edcb0(0x40400000);
  }
  if (*(int *)(uVar4 + 0x390) != 0) {
    FUN_005edcb0(0x40400000);
  }
  piVar5[0x1031] = piVar5[0x1030];
  uStack_14 = 0;
  uStack_18 = 0;
  piVar5[0x102f] = 0;
  *(undefined4 *)(uVar4 + 0x5d8) = 0;
  *(undefined4 *)(uVar4 + 0x5d4) = 0;
  *(undefined4 *)(uVar4 + 0x370) = 0;
  *(undefined4 *)(uVar4 + 0x5dc) = 0;
  uStack_1c = 0x3fc00000;
  FUN_008b5580(param_1);
  return 1;
}

// 008CDAC0  ZangekiStatePl1500::SafeCheck  size=442  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall ZangekiStatePl1500::SafeCheck(int param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  undefined4 uStack_14;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    if (param_2 == (undefined4 *)0x0) {
      uVar6 = 0;
    }
    else {
      puVar8 = &DAT_01b35bdc;
      (**(code **)*param_2)(&DAT_01b35bdc);
      iVar4 = FUN_00dd6d80(puVar8);
      uVar6 = -(uint)(iVar4 != 0) & (uint)param_2;
    }
    piVar5 = *(int **)(uVar6 + 0x5e0);
    if (piVar5 == (int *)0x0) {
      uVar7 = 0;
    }
    else {
      puVar8 = &DAT_01b35b90;
      (**(code **)(*piVar5 + 4))(&DAT_01b35b90);
      iVar4 = FUN_00dd6d80(puVar8);
      uVar7 = -(uint)(iVar4 != 0) & (uint)piVar5;
    }
    FUN_008c3c70(param_2);
    *(undefined4 *)(uVar6 + 0x504) = 0;
    fVar1 = *(float *)(uVar7 + 0x3bd4) * 0.001;
    fVar2 = *(float *)(uVar7 + 0x3bd8) * 0.001;
    if (0.1 < SQRT(fVar2 * fVar2 + fVar1 * fVar1)) {
      *(undefined4 *)(uVar6 + 0x504) = 1;
    }
    uVar3 = _DAT_018842b8;
    *(undefined4 *)(param_1 + 0x48) = _DAT_018842b8;
    *(undefined4 *)(uVar6 + 0x504) = 1;
    *(undefined4 *)(uVar6 + 0x508) = uVar3;
    *(undefined4 *)(uVar6 + 0x3f4) = 1;
    *(undefined4 *)(uVar6 + 0x564) = 0;
    *(undefined4 *)(uVar6 + 0x570) = 0;
    *(undefined4 *)(uVar7 + 0x890) = 0;
    *(undefined4 *)(uVar7 + 0x894) = 0;
    *(undefined4 *)(uVar7 + 0x898) = 0;
    *(undefined4 *)(uVar7 + 0x89c) = uStack_14;
    if (((*(int *)(uVar6 + 0x528) != 0) && (iVar4 = FUN_00a81330(), iVar4 != 0)) &&
       (piVar5 = (int *)FUN_00a7c8a0(), piVar5 != (int *)0x0)) {
      puVar8 = &DAT_01b35260;
      (**(code **)(*piVar5 + 4))(&DAT_01b35260);
      iVar4 = FUN_00dd6d80(puVar8);
      if (iVar4 != 0) {
        FUN_005ca1a0(0);
      }
    }
    FUN_00aa4080(0x135,*(undefined4 *)(uVar6 + 0x5e4),0,0x3f800000,0x10,0xbf800000,0x3f800000);
    FUN_008c6070(param_2);
    *(undefined4 *)(uVar6 + 0x6b4) = 0;
    *(undefined4 *)(uVar6 + 0x6b0) = 0;
    FUN_00c1cee0(0x40a80000);
  }
  StateMachineNode::SafeCheck(param_2);
  return;
}

// 008CDC80  FUN_008cdc80  size=1252  [callgraph]
void __thiscall FUN_008cdc80(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  undefined *puVar14;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar6 = 0;
  }
  else {
    puVar14 = &DAT_01b35bdc;
    (**(code **)*param_2)(&DAT_01b35bdc);
    iVar5 = FUN_00dd6d80(puVar14);
    uVar6 = -(uint)(iVar5 != 0) & (uint)param_2;
  }
  if (*(int **)(uVar6 + 0x5e0) != (int *)0x0) {
    puVar14 = &DAT_01b35b90;
    (**(code **)(**(int **)(uVar6 + 0x5e0) + 4))(&DAT_01b35b90);
    FUN_00dd6d80(puVar14);
  }
  uVar2 = *(undefined4 *)(uVar6 + 0x5ec);
  uVar3 = *(undefined4 *)(uVar6 + 0x5f0);
  switch(*(undefined4 *)(param_1 + 0x6c)) {
  case 0:
    iVar5 = FUN_008c04a0(param_2);
    if (iVar5 == 0) {
      return;
    }
    *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
    break;
  case 1:
    break;
  case 2:
    goto switchD_008cdd04_caseD_2;
  case 3:
    goto switchD_008cdd04_caseD_3;
  case 4:
    goto switchD_008cdd04_caseD_4;
  default:
    goto switchD_008cdd04_default;
  }
  FUN_00aa4080(0x151,uVar2,0,0x3f800000,0x40200,0xbf800000,0x3f800000);
  FUN_00aa4080(0x150,uVar3,0,0x3f800000,0x40200,0xbf800000,0);
  *(undefined4 *)(uVar6 + 0x6e0) = 0;
  *(undefined4 *)(uVar6 + 0x6e4) = 0;
  *(undefined4 *)(uVar6 + 0x6e8) = 0;
  *(undefined4 *)(uVar6 + 0x6ec) = 0x3f800000;
  *(undefined4 *)(uVar6 + 0x6f0) = 0;
  *(undefined4 *)(uVar6 + 0x6f4) = 0;
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
switchD_008cdd04_caseD_2:
  FUN_008b8d50(&local_28,param_2);
  local_20 = local_28 * 0.001;
  local_1c = 0.0;
  local_18 = local_24 * -0.001;
  if ((local_20 != 0.0) || (local_18 != 0.0)) {
    fVar4 = local_18 * local_18 + local_20 * local_20;
    if (fVar4 < 0.0 == (fVar4 == 0.0)) {
      FUN_00ddf460(&local_20,&local_20);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_20 = 0.0;
      local_1c = 1.0;
      local_18 = 0.0;
    }
    fVar4 = local_1c * 0.0;
    fVar7 = (float10)FUN_00fdc4e0();
    fVar4 = fVar4 + local_20 + local_18 * 0.0;
    if (fVar4 < 0.0 != (fVar4 == 0.0)) {
      fVar7 = fVar7 * (float10)-1.0;
    }
    *(float *)(uVar6 + 0x3f8) = (float)(fVar7 * (float10)57.29578);
  }
  fVar8 = (float10)0;
  fVar9 = (float10)0.1;
  *(float *)(uVar6 + 0x6e0) =
       (float)((float10)*(float *)(uVar6 + 0x6e0) +
              ((float10)local_28 - (float10)*(float *)(uVar6 + 0x6e0)) * fVar9);
  *(float *)(uVar6 + 0x6e4) =
       (float)((float10)*(float *)(uVar6 + 0x6e4) + -(float10)*(float *)(uVar6 + 0x6e4) * fVar9);
  *(float *)(uVar6 + 0x6e8) =
       (float)(((float10)local_24 - (float10)*(float *)(uVar6 + 0x6e8)) * fVar9 +
              (float10)*(float *)(uVar6 + 0x6e8));
  *(float *)(uVar6 + 0x6ec) =
       (float)(((float10)local_14 - (float10)*(float *)(uVar6 + 0x6ec)) * fVar9 +
              (float10)*(float *)(uVar6 + 0x6ec));
  fVar7 = (float10)1;
  fVar12 = (float10)fpatan((float10)*(float *)(uVar6 + 0x6e0),
                           (float10)*(float *)(uVar6 + 0x6e8) - fVar7);
  fVar10 = (float10)180.0;
  fVar12 = ABS(fVar10 - fVar12 * (float10)57.29578);
  fVar11 = (float10)*(float *)(uVar6 + 0x6e0) * (float10)0.001;
  fVar13 = (float10)*(float *)(uVar6 + 0x6e8) * (float10)0.001;
  fVar11 = SQRT(fVar11 * fVar11 + fVar13 * fVar13);
  if ((fVar9 < ABS(fVar12)) && (fVar9 < ABS(fVar12 - fVar10))) {
    fVar12 = (fVar10 - fVar12) + (fVar10 - fVar12) + fVar12;
  }
  *(float *)(uVar6 + 0x6f4) = (float)fVar12;
  if ((fVar7 < fVar11) || (fVar7 = fVar11, fVar11 < fVar8 == (fVar11 == fVar8))) {
    fVar8 = fVar7;
  }
  *(float *)(uVar6 + 0x6f0) =
       (float)((fVar8 - (float10)*(float *)(uVar6 + 0x6f0)) * fVar9 +
              (float10)*(float *)(uVar6 + 0x6f0));
  FUN_00a95e60(uVar3,(float)(fVar12 * (float10)0.016666668));
  FUN_00a96030(uVar3,0);
  uVar1 = *(undefined4 *)(uVar6 + 0x6f0);
  local_28 = (float)FUN_00a92f90();
  iVar5 = FUN_00e26e90();
  if (iVar5 != 0) {
    FUN_00e36ac0(uVar3,uVar1);
  }
  local_28 = 1.0 - *(float *)(uVar6 + 0x6f0);
  FUN_00a92f90();
  iVar5 = FUN_00e26e90();
  if (iVar5 != 0) {
    FUN_00e36ac0(uVar2,local_28);
  }
  iVar5 = FUN_008c04a0(param_2);
  if (iVar5 == 0) {
    *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
    *(undefined4 *)(param_1 + 0x74) = 0x41200000;
    *(undefined4 *)(param_1 + 0x70) = 0x41200000;
switchD_008cdd04_caseD_3:
    local_28 = *(float *)(param_1 + 0x74) / *(float *)(param_1 + 0x70);
    FUN_00a92f90();
    iVar5 = FUN_00e26e90();
    if (iVar5 != 0) {
      FUN_00e36ac0(uVar2,local_28);
    }
    local_28 = *(float *)(param_1 + 0x74) / *(float *)(param_1 + 0x70);
    FUN_00a92f90();
    iVar5 = FUN_00e26e90();
    if (iVar5 != 0) {
      FUN_00e36ac0(uVar3,local_28);
    }
    fVar4 = *(float *)(param_1 + 0x74) - 1.0;
    *(float *)(param_1 + 0x74) = fVar4;
    if (fVar4 <= 0.0) {
      *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 2;
switchD_008cdd04_caseD_4:
      *(undefined4 *)(param_1 + 0x6c) = 0;
      FUN_00a94bc0(uVar2,0);
      FUN_00a94bc0(uVar3,0);
    }
  }
switchD_008cdd04_default:
  return;
}

// 008CE180  FUN_008ce180  size=312  [callgraph]
void __thiscall FUN_008ce180(int param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  float10 fVar3;
  undefined *puVar4;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar4 = &DAT_01b35bdc;
    (**(code **)*param_2)(&DAT_01b35bdc);
    iVar1 = FUN_00dd6d80(puVar4);
    uVar2 = -(uint)(iVar1 != 0) & (uint)param_2;
  }
  if (*(int **)(uVar2 + 0x5e0) != (int *)0x0) {
    puVar4 = &DAT_01b35b90;
    (**(code **)(**(int **)(uVar2 + 0x5e0) + 4))(&DAT_01b35b90);
    FUN_00dd6d80(puVar4);
  }
  iVar1 = FUN_00d821d0(0xf);
  if (iVar1 == 0) {
    iVar1 = FUN_00a9f6b0(*(undefined4 *)(uVar2 + 0x5e4));
    if ((iVar1 == 0) && (*(int *)(param_1 + 0x68) == 0)) {
      *(undefined4 *)(param_1 + 0x68) = 1;
      FUN_00aa4080(0x135,*(undefined4 *)(uVar2 + 0x5e4),0,0x3f800000,0x10,0xbf800000,0x3f800000);
      FUN_008c6070(param_2);
      return;
    }
    fVar3 = (float10)FUN_00e049b0();
    FUN_00a96030(*(undefined4 *)(uVar2 + 0x5e4),(float)((float10)1 / fVar3));
  }
  else {
    iVar1 = FUN_00a9f6b0(*(undefined4 *)(uVar2 + 0x5e4));
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x68) = 0;
      FUN_00a94bc0(*(undefined4 *)(uVar2 + 0x5e4),0);
      FUN_008aaad0(param_2);
      return;
    }
  }
  return;
}

// 008CE2C0  FUN_008ce2c0  size=624  [callgraph]
void __thiscall FUN_008ce2c0(int param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined *puVar7;
  float local_8 [2];
  
  if (param_2 == (undefined4 *)0x0) {
    uVar6 = 0;
  }
  else {
    puVar7 = &DAT_01b35bdc;
    (**(code **)*param_2)(&DAT_01b35bdc);
    iVar5 = FUN_00dd6d80(puVar7);
    uVar6 = -(uint)(iVar5 != 0) & (uint)param_2;
  }
  if (*(int **)(uVar6 + 0x5e0) != (int *)0x0) {
    puVar7 = &DAT_01b35b90;
    (**(code **)(**(int **)(uVar6 + 0x5e0) + 4))(&DAT_01b35b90);
    FUN_00dd6d80(puVar7);
  }
  uVar3 = *(undefined4 *)(uVar6 + 0x5f4);
  FUN_008b8f00(local_8,param_2);
  switch(*(undefined4 *)(param_1 + 0x78)) {
  case 0:
    iVar5 = FUN_008c0530(param_2);
    if (iVar5 == 0) {
      return;
    }
    *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
    break;
  case 1:
    break;
  case 2:
    goto switchD_008ce343_caseD_2;
  case 3:
    goto switchD_008ce343_caseD_3;
  case 4:
    goto switchD_008ce343_caseD_4;
  default:
    goto switchD_008ce343_default;
  }
  FUN_00a9f4c0("zangekiTurn",0x3e2aaaab,0x2000,uVar3);
  FUN_00a9f600(0xffffffff,uVar3,0,0xffffffff,0,0x16e,0x3e2aaaab,0);
  FUN_00a9f600(0xffffffff,uVar3,0,1,0,0x16f,0x3e2aaaab,0);
  FUN_00a92f90();
  iVar5 = FUN_00e26e90();
  if (iVar5 != 0) {
    FUN_00e36ac0(uVar3,0);
  }
  FUN_00a947e0(uVar3,0,0,0);
  *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
switchD_008ce343_caseD_2:
  if (local_8[0] <= 0.0) {
    uVar4 = 0xbf800000;
  }
  else {
    uVar4 = 0x3f800000;
  }
  FUN_00a947e0(uVar3,0,uVar4,0);
  FUN_00a92f90();
  iVar5 = FUN_00e26e90();
  if (iVar5 != 0) {
    FUN_00e36ac0(uVar3,0x3f800000);
  }
  iVar5 = FUN_008c0530(param_2);
  if (iVar5 == 0) {
    *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
    *(undefined4 *)(param_1 + 0x80) = 0x41200000;
    *(undefined4 *)(param_1 + 0x7c) = 0x41200000;
switchD_008ce343_caseD_3:
    if (local_8[0] <= 0.0) {
      uVar4 = 0xbf800000;
    }
    else {
      uVar4 = 0x3f800000;
    }
    FUN_00a947e0(uVar3,0,uVar4,0);
    fVar1 = *(float *)(param_1 + 0x80);
    fVar2 = *(float *)(param_1 + 0x7c);
    FUN_00a92f90();
    iVar5 = FUN_00e26e90();
    if (iVar5 != 0) {
      FUN_00e36ac0(uVar3,fVar1 / fVar2);
    }
    fVar1 = *(float *)(param_1 + 0x80) - 1.0;
    *(float *)(param_1 + 0x80) = fVar1;
    if (fVar1 <= 0.0) {
      *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
switchD_008ce343_caseD_4:
      *(undefined4 *)(param_1 + 0x78) = 0;
      FUN_00a94bc0(uVar3,0);
      return;
    }
  }
switchD_008ce343_default:
  return;
}

// 008CE550  FUN_008ce550  size=1194  [callgraph]
undefined4
FUN_008ce550(undefined4 *param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  float *pfVar6;
  int *piVar7;
  uint uVar8;
  float10 fVar9;
  undefined *puVar10;
  undefined4 local_a0;
  int iStack_98;
  int iStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [76];
  
  if (((int)DAT_01bea090 < 0) || ((DAT_01bea090 & 0x800) != 0)) {
    return 0;
  }
  if (param_1 == (undefined4 *)0x0) {
    uVar8 = 0;
  }
  else {
    puVar10 = &DAT_01b35bdc;
    (**(code **)*param_1)(&DAT_01b35bdc);
    iVar3 = FUN_00dd6d80(puVar10);
    uVar8 = -(uint)(iVar3 != 0) & (uint)param_1;
  }
  piVar7 = *(int **)(uVar8 + 0x5e0);
  if (piVar7 == (int *)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    puVar10 = &DAT_01b35b90;
    (**(code **)(*piVar7 + 4))(&DAT_01b35b90);
    iVar3 = FUN_00dd6d80(puVar10);
    piVar7 = (int *)(-(uint)(iVar3 != 0) & (uint)piVar7);
  }
  iVar3 = piVar7[0x13c];
  local_a0 = 0;
  iVar2 = (**(code **)(*piVar7 + 0x84))(0x40490fdb,0x41200000,param_5,*(int *)(uVar8 + 0x32c) == 0);
  iVar3 = FUN_008c23e0(param_1,iVar3,*(undefined4 *)(iVar2 + 4));
  if (*(int *)(iVar3 + 0xc) < 1) {
    if (*(int *)(uVar8 + 0x358) != 0) {
      DAT_01dc08bc = 0;
      *(undefined4 *)(uVar8 + 0x358) = 0;
      return 0;
    }
  }
  else {
    if (((*(byte *)(piVar7 + 0x33f) & 0x20) == 0) && (param_4 == 0)) {
      if ((*(int *)(uVar8 + 0x358) == 0) && (*(int *)(uVar8 + 0x6b8) != 0)) {
        DAT_01dc08bc = 1;
        DAT_01dc08c0 = 0;
        FUN_00e5e050("core_se_btl_char_datsu_in_pl1500",0);
      }
      *(undefined4 *)(uVar8 + 0x358) = 1;
      piVar7[0x2ee] = 0x40000000;
      piVar7[0x2ef] = 2;
      return 0;
    }
    iStack_98 = 0;
    iStack_94 = *(int *)(uVar8 + 0x348);
    if (iStack_94 != iStack_94 + *(int *)(uVar8 + 0x350) * 4) {
      do {
        iVar3 = FUN_00a81330();
        if (((((iVar3 != 0) && ((*(byte *)(iVar3 + 0x28) & 2) == 0)) &&
             (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) &&
            ((piVar4[0x1a4] == 0 && (iVar2 = FUN_00a7c800(), iVar2 != 0)))) &&
           ((**(code **)(*piVar4 + 0x204))(&fStack_90),
           (fStack_90 - (float)piVar7[0x14]) * (fStack_90 - (float)piVar7[0x14]) +
           (fStack_8c - (float)piVar7[0x15]) * (fStack_8c - (float)piVar7[0x15]) +
           (fStack_88 - (float)piVar7[0x16]) * (fStack_88 - (float)piVar7[0x16]) <= 100.0)) {
          fVar9 = (float10)FUN_009f8c60(iVar2 + 0x50);
          iVar2 = (**(code **)(*piVar7 + 0x84))();
          FUN_00ddba30((float)fVar9 - *(float *)(iVar2 + 4));
          iStack_98 = iVar3;
        }
        iStack_94 = iStack_94 + 4;
      } while (iStack_94 != *(int *)(uVar8 + 0x348) + *(int *)(uVar8 + 0x350) * 4);
      if ((iStack_98 != 0) && (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) {
        puVar10 = &DAT_01be9ca8;
        (**(code **)(*piVar4 + 4))(&DAT_01be9ca8);
        iVar3 = FUN_00dd6d80(puVar10);
        if (iVar3 != 0) {
          uVar5 = FUN_00a7c7f0();
          FUN_00a7c960(uVar5);
          if (piVar4[0x21c] == 2) {
            FUN_00a7c940(piVar4 + 0x23e);
            iVar3 = FUN_00a81330();
            if (iVar3 == 0) {
              return 0;
            }
          }
          piVar7[0x2ee] = 0;
          FUN_00c2de00();
          if ((*(int *)(uVar8 + 0x330) == 8) || (*(int *)(param_2 + 0x2c) == 5)) {
            uVar5 = 5;
          }
          else {
            iVar3 = FUN_008b8bb0(param_1);
            if ((iVar3 == 0) && (*(int *)(uVar8 + 0x188) == 0)) {
              pfVar6 = (float *)FUN_00ac70a0();
              fStack_90 = *pfVar6;
              fStack_8c = pfVar6[1];
              fStack_88 = pfVar6[2];
              fStack_84 = pfVar6[3];
              fVar1 = (float)piVar7[0x11];
              *(undefined4 *)(uVar8 + 0x358) = 0;
              if (fStack_8c - fVar1 <= 2.3) {
                uVar5 = 6;
              }
              else {
                uVar5 = 5;
              }
            }
            else {
              fStack_80 = (float)piVar7[0x10];
              fStack_7c = (float)piVar7[0x11];
              fStack_78 = (float)piVar7[0x12];
              fStack_74 = (float)piVar7[0x13];
              iVar3 = FUN_00a81330();
              if (iVar3 != 0) {
                uVar5 = FUN_00a7c8a0();
                iVar3 = FUN_00860b80(uVar5);
                if (iVar3 != 0) {
                  pfVar6 = (float *)FUN_00ac70a0();
                  fStack_80 = *pfVar6;
                  fStack_7c = pfVar6[1];
                  fStack_78 = pfVar6[2];
                  fStack_74 = pfVar6[3];
                }
              }
              fStack_8c = fStack_7c + 1.0;
              fStack_84 = fStack_84 + fStack_74;
              fStack_7c = fStack_7c - 10.0;
              fStack_74 = fStack_74 - fStack_84;
              fStack_90 = fStack_80;
              fStack_88 = fStack_78;
              FUN_00445d40(&fStack_90,&fStack_80,0xffff0006,0,0x60,0,"datsuTransitionCheck",0);
              RayCastSingleHitWork::RayCastSingleHitWork_2(auStack_70,auStack_60,0,0,auStack_50);
              *(undefined4 *)(uVar8 + 0x358) = 0;
              uVar5 = 5;
            }
          }
          FUN_00d82510(uVar5,param_3);
          local_a0 = 1;
          *(undefined4 *)(uVar8 + 0x2f4) = 1;
        }
      }
    }
  }
  return local_a0;
}

// 008D02B0  ZangekiStatePl1500::qteSafeCheck  size=1104  [class]
undefined4 __thiscall ZangekiStatePl1500::qteSafeCheck(int param_1,undefined4 *param_2)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar8;
  float10 fVar9;
  undefined *puVar10;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar7 = 0;
  }
  else {
    puVar10 = &DAT_01b35bdc;
    (**(code **)*param_2)(&DAT_01b35bdc);
    iVar3 = FUN_00dd6d80(puVar10);
    uVar7 = -(uint)(iVar3 != 0) & (uint)param_2;
  }
  piVar8 = *(int **)(uVar7 + 0x5e0);
  if (piVar8 == (int *)0x0) {
    piVar8 = (int *)0x0;
  }
  else {
    puVar10 = &DAT_01b35b90;
    (**(code **)(*piVar8 + 4))(&DAT_01b35b90);
    iVar3 = FUN_00dd6d80(puVar10);
    piVar8 = (int *)(-(uint)(iVar3 != 0) & (uint)piVar8);
  }
  iVar3 = FUN_00d821d0(1);
  if (iVar3 == 0) {
    *(uint *)(uVar7 + 0x3f4) = (uint)(*(int *)(uVar7 + 0x564) < 2);
    iVar3 = FUN_00a81330();
    if (iVar3 != 0) {
      FUN_00a81330();
      iVar3 = FUN_00a7c8a0();
      if (iVar3 != 0) {
        fVar9 = (float10)fpatan((float10)*(float *)(iVar3 + 0x40) - (float10)(float)piVar8[0x10],
                                (float10)*(float *)(iVar3 + 0x48) - (float10)(float)piVar8[0x12]);
        fVar9 = (float10)FUN_00ddba30((float)(fVar9 - (float10)(float)piVar8[0x25]));
        if (fVar9 * fVar9 < (float10)0.6168503 != (fVar9 * fVar9 == (float10)0.6168503)) {
          *(undefined4 *)(param_1 + 0x30) = 1;
          piVar4 = (int *)TargetManagerImplement::TargetManagerImplement_2();
          (**(code **)(*piVar4 + 0x24))(iVar3);
        }
      }
    }
    if (*(int *)(param_1 + 0x34) != 0) {
      piVar4 = (int *)TargetManagerImplement::TargetManagerImplement_2();
      (**(code **)(*piVar4 + 0x24))(0);
      piVar4 = (int *)TargetManagerImplement::TargetManagerImplement_2();
      (**(code **)(*piVar4 + 0x2c))(0);
      piVar4 = (int *)TargetManagerImplement::TargetManagerImplement_2();
      (**(code **)(*piVar4 + 0x1c))(0);
    }
    if (((((*(int *)(uVar7 + 0x2f4) == 0) && (iVar3 = piVar8[0x1032], iVar3 != 4)) && (iVar3 != 9))
        && ((iVar3 != 0xc && (iVar3 != 0xf)))) &&
       ((iVar3 != 0xe && ((iVar3 != 0xd && (iVar3 != 8)))))) {
      uVar6 = *(undefined4 *)(uVar7 + 0x378);
      puVar5 = (undefined4 *)(**(code **)(*piVar8 + 0x84))();
      uStack_18 = puVar5[2];
      uStack_20 = *puVar5;
      uStack_1c = uVar6;
      (**(code **)(*piVar8 + 0x88))(&uStack_20);
    }
    if (0.0 < *(float *)(uVar7 + 0x5cc)) {
      fVar1 = *(float *)(uVar7 + 0x5cc) - 1.0;
      *(float *)(uVar7 + 0x5cc) = fVar1;
      if (fVar1 < 0.0 != (fVar1 == 0.0)) {
        *(undefined4 *)(uVar7 + 0x5cc) = 0xbf800000;
      }
    }
    if (0 < *(int *)(uVar7 + 0x304)) {
      *(int *)(uVar7 + 0x304) = *(int *)(uVar7 + 0x304) + -1;
    }
    fVar1 = *(float *)(uVar7 + 0x5d8) - 1.0;
    *(undefined4 *)(uVar7 + 0x304) = 0;
    *(float *)(uVar7 + 0x5d8) = fVar1;
    if (fVar1 < 0.0) {
      *(undefined4 *)(uVar7 + 0x5d8) = 0;
    }
    iVar3 = FUN_00b7c970();
    if ((iVar3 < 1) && (piVar8[0x1032] != 8)) {
      if (param_2 != (undefined4 *)0x0) {
        puVar10 = &DAT_01b35bdc;
        (**(code **)*param_2)(&DAT_01b35bdc);
        FUN_00dd6d80(puVar10);
      }
      FUN_00b83e50();
      FUN_00d82510(1,100);
    }
    FUN_008b77a0(param_2,param_1);
    if (*(int *)(uVar7 + 0x314) != 0) {
      *(int *)(uVar7 + 0x314) = *(int *)(uVar7 + 0x314) + -1;
    }
    if (*(int *)(uVar7 + 0x30c) != 0) {
      *(int *)(uVar7 + 0x30c) = *(int *)(uVar7 + 0x30c) + -1;
    }
    if ((*(int *)(uVar7 + 0x504) != 0) &&
       (fVar1 = *(float *)(uVar7 + 0x508) - 1.0, *(float *)(uVar7 + 0x508) = fVar1, fVar1 < 0.0)) {
      *(undefined4 *)(uVar7 + 0x508) = 0;
      *(undefined4 *)(uVar7 + 0x504) = 0;
    }
    FUN_008bff40(param_2);
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(uVar7 + 0x374);
    DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
    if (0.0 < (float)piVar8[0x1031]) {
      fVar9 = (float10)FUN_00a93060();
      fVar1 = (float)piVar8[0x1031];
      piVar8[0x1031] = (int)(float)((float10)fVar1 - fVar9);
      if ((float10)fVar1 - fVar9 < (float10)0) {
        piVar8[0x1031] = (int)(float)(float10)0;
      }
    }
    FUN_008b5640(param_2);
    FUN_008cdc80(param_2);
    FUN_008ce180(param_2);
    FUN_008ce2c0(param_2);
    if (*(int *)(uVar7 + 0xe0) != 0) {
      pcVar2 = *(code **)(*piVar8 + 0x1d4);
      piVar8[0x225] = 0x38d1b717;
      (*pcVar2)(1);
    }
    iVar3 = FUN_00606950();
    if (iVar3 != 0) {
      iVar3 = FUN_00606960();
      uStack_20 = *(undefined4 *)(iVar3 + 0x30);
      uStack_1c = *(undefined4 *)(iVar3 + 0x34);
      uStack_18 = *(undefined4 *)(iVar3 + 0x38);
      uStack_14 = *(undefined4 *)(iVar3 + 0x3c);
      FUN_00ddbaa0(-(*(float *)(iVar3 + 8) /
                    SQRT(*(float *)(iVar3 + 0x28) * *(float *)(iVar3 + 0x28) +
                         *(float *)(iVar3 + 0x24) * *(float *)(iVar3 + 0x24) +
                         *(float *)(iVar3 + 0x20) * *(float *)(iVar3 + 0x20))));
      iVar3 = *piVar8;
      uVar6 = (**(code **)(iVar3 + 0x84))();
      (**(code **)(iVar3 + 0x7c))(&uStack_20,uVar6);
    }
    if (((*(int *)(uVar7 + 0xe4) == 0) && (iVar3 = FUN_008b8bb0(param_2), iVar3 == 0)) &&
       ((iVar3 = FUN_008b7810(param_2), iVar3 != 0 || (*(int *)(uVar7 + 0x188) == 0)))) {
      *(undefined4 *)(uVar7 + 0xe4) = 1;
    }
    uVar6 = StateMachineNode::qteSafeCheck(param_2);
    return uVar6;
  }
  FUN_00d82510(1,100);
  return 1;
}

