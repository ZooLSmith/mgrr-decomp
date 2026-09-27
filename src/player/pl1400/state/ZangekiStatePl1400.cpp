// src/player/pl1400/state/ZangekiStatePl1400.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00860300..0089BFC0, 25 functions

#include "mgrr.h"
#include "ZangekiStatePl1400.h"

// 00860300  ZangekiStatePl1400::vf14  size=5  [class]
undefined4 __thiscall ZangekiStatePl1400::vf14(int param_1,undefined4 param_2)

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

// 00860310  ZangekiStatePl1400::vf18  size=5  [class]
undefined4 __thiscall ZangekiStatePl1400::vf18(int param_1,undefined4 param_2)

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

// 00860320  ZangekiStatePl1400::vf24  size=19  [class]
bool ZangekiStatePl1400::vf24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = StateMachineNode::vf24(param_1);
  return iVar1 != 0;
}

// 00860340  ZangekiStatePl1400::ZangekiStatePl1400  size=33  [class]
undefined4 * __thiscall
ZangekiStatePl1400::ZangekiStatePl1400(undefined4 *param_1,undefined4 param_2)

{
  StateMachineNode::StateMachineNode(param_2);
  *param_1 = vftable;
  FUN_009003e0();
  return param_1;
}

// 00860370  ZangekiStatePl1400::vf00  size=6  [class]
undefined * ZangekiStatePl1400::vf00(void)

{
  return &DAT_01b35b74;
}

// 00868DF0  ZangekiStatePl1400::vf04  size=31  [class]
undefined4 * __thiscall ZangekiStatePl1400::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = StateMachineNode::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00874280  ZangekiStatePl1400::vf20  size=1142  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 ZangekiStatePl1400::vf20(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  float *pfVar3;
  int *piVar4;
  uint uVar5;
  undefined *puVar6;
  
  iVar1 = StateMachineNode::vf20(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  if (param_1 == (undefined4 *)0x0) {
    uVar5 = 0;
  }
  else {
    puVar6 = &DAT_01b35b78;
    (**(code **)*param_1)(&DAT_01b35b78);
    iVar1 = FUN_00dd6d80(puVar6);
    uVar5 = -(uint)(iVar1 != 0) & (uint)param_1;
  }
  piVar4 = *(int **)(uVar5 + 0x5e0);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    puVar6 = &DAT_01b35b20;
    (**(code **)(*piVar4 + 4))(&DAT_01b35b20);
    iVar1 = FUN_00dd6d80(puVar6);
    piVar4 = (int *)(-(uint)(iVar1 != 0) & (uint)piVar4);
  }
  *(undefined4 *)(uVar5 + 0xd0) = 0;
  FUN_00b7aa80();
  FUN_00a95fb0(0x3f800000);
  FUN_00e25500(0);
  FUN_00a8c9b0(0,0x5f,0x41200000,0);
  iVar1 = *(int *)(uVar5 + 0x318);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 4) != 0)) {
    *(undefined4 *)(iVar1 + 8) = 0;
  }
  iVar1 = *(int *)(uVar5 + 0x31c);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 4) != 0)) {
    *(undefined4 *)(iVar1 + 8) = 0;
  }
  FUN_00a7c950();
  iVar1 = *(int *)(uVar5 + 0x170);
  *(undefined4 *)(uVar5 + 0x408) = 0xffffffff;
  if ((iVar1 != 0) && (*(int *)(iVar1 + 4) != 0)) {
    *(undefined4 *)(iVar1 + 8) = 0;
  }
  iVar1 = *(int *)(uVar5 + 0x174);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 4) != 0)) {
    *(undefined4 *)(iVar1 + 8) = 0;
  }
  iVar1 = *(int *)(uVar5 + 0x178);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 4) != 0)) {
    *(undefined4 *)(iVar1 + 8) = 0;
  }
  iVar1 = *(int *)(uVar5 + 0x17c);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 4) != 0)) {
    *(undefined4 *)(iVar1 + 8) = 0;
  }
  iVar1 = *(int *)(uVar5 + 0x318);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 4) != 0)) {
    *(undefined4 *)(iVar1 + 8) = 0;
  }
  iVar1 = *(int *)(uVar5 + 0x31c);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 4) != 0)) {
    *(undefined4 *)(iVar1 + 8) = 0;
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
  FUN_00869630(param_1);
  iVar1 = FUN_00b7a6d0();
  if ((iVar1 != 0) || ((DAT_01bea094 & 0x800) != 0)) {
    iVar1 = FUN_00bc3230(0);
    if (iVar1 == 0) {
      FUN_00e5e1b0("bgm_Ripper_Exit3");
    }
  }
  if (param_1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar6 = &DAT_01b35b78;
    (**(code **)*param_1)(&DAT_01b35b78);
    iVar1 = FUN_00dd6d80(puVar6);
    uVar2 = -(uint)(iVar1 != 0) & (uint)param_1;
  }
  (**(code **)(*(int *)(uVar2 + 400) + 8))(0x41200000,0,0);
  *(undefined4 *)(uVar5 + 0x5cc) = 0xbf800000;
  FUN_0085def0();
  piVar4[0x4a6] = 0;
  piVar4[0x4a5] = 0;
  piVar4[0x4a4] = 0;
  piVar4[0x4ab] = 0;
  piVar4[0x4ac] = 0;
  piVar4[0x4aa] = 0;
  FUN_00a83990();
  FUN_00a83990();
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
  *(undefined4 *)(uVar5 + 0x698) = 0;
  *(undefined4 *)(uVar5 + 0x5d8) = 0;
  pfVar3 = (float *)(**(code **)(*piVar4 + 0x84))();
  if (0.0 < ABS(*pfVar3)) {
    pfVar3 = (float *)FUN_00a8b8a0(&stack0xffffffd4,0x3f800000);
    fpatan(((float10)*pfVar3 + (float10)(float)piVar4[0x10]) - (float10)(float)piVar4[0x10],
           ((float10)pfVar3[2] + (float10)(float)piVar4[0x12]) - (float10)(float)piVar4[0x12]);
    (**(code **)(*piVar4 + 0x88))(&stack0xffffffd4);
  }
  *(undefined4 *)(uVar5 + 0x5ec) = 0;
  *(undefined4 *)(uVar5 + 0x5e8) = 0;
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    piVar4 = (int *)FUN_00a7c8a0();
    if (piVar4 != (int *)0x0) {
      puVar6 = &DAT_01b35260;
      (**(code **)(*piVar4 + 4))(&DAT_01b35260);
      iVar1 = FUN_00dd6d80(puVar6);
      if (iVar1 != 0) {
        FUN_005ca330(0x3f800000);
      }
    }
  }
  return 1;
}

// 00874700  FUN_00874700  size=123  [callgraph]
void FUN_00874700(undefined4 *param_1)

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
    puVar5 = &DAT_01b35b78;
    (**(code **)*param_1)(&DAT_01b35b78);
    iVar3 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar3 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar4 + 0x5e0);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar5 = &DAT_01b35b20;
    (**(code **)(*piVar1 + 4))(&DAT_01b35b20);
    iVar3 = FUN_00dd6d80(puVar5);
    uVar2 = -(uint)(iVar3 != 0) & (uint)piVar1;
  }
  if ((*(uint *)(uVar2 + 0xcf8) & *(uint *)(uVar2 + 0xe24)) != 0) {
    *(int *)(uVar4 + 0x620) = *(int *)(uVar4 + 0x620) + 1;
    return;
  }
  *(undefined4 *)(uVar4 + 0x620) = 0;
  return;
}

// 00874780  FUN_00874780  size=122  [callgraph]
void FUN_00874780(undefined4 *param_1)

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
    puVar5 = &DAT_01b35b78;
    (**(code **)*param_1)(&DAT_01b35b78);
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

// 00874800  FUN_00874800  size=92  [callgraph]
void FUN_00874800(int *param_1,undefined4 param_2)

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

// 00874A50  FUN_00874a50  size=1081  [callgraph]
void FUN_00874a50(undefined4 *param_1,undefined4 param_2,float param_3,int param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined *puVar6;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar5 = 0;
  }
  else {
    puVar6 = &DAT_01b35b78;
    (**(code **)*param_1)(&DAT_01b35b78);
    iVar3 = FUN_00dd6d80(puVar6);
    uVar5 = -(uint)(iVar3 != 0) & (uint)param_1;
  }
  if (*(int **)(uVar5 + 0x5e0) != (int *)0x0) {
    puVar6 = &DAT_01b35b20;
    (**(code **)(**(int **)(uVar5 + 0x5e0) + 4))(&DAT_01b35b20);
    FUN_00dd6d80(puVar6);
  }
  if (param_4 == 0) {
    uVar4 = FUN_00a9f560("AirSlash",0x3d4ccccd,0x8002000,param_2);
    *(undefined4 *)(uVar5 + 0x118) = uVar4;
    FUN_00a9f600(0xffffffff,param_2,0,1,0,0x17f,0x3d4ccccd,0x8002000);
    FUN_00a9f600(0xffffffff,param_2,0,0,0,0x177,0x3d4ccccd,0x8002000);
    FUN_00a9f600(0xffffffff,param_2,0,0x2d,0,0x17c,0x3d4ccccd,0x8002000);
    FUN_00a9f600(0xffffffff,param_2,0,0x5a,0,0x179,0x3d4ccccd,0x8002000);
    FUN_00a9f600(0xffffffff,param_2,0,0x87,0,0x17a,0x3d4ccccd,0x8002000);
    FUN_00a9f600(0xffffffff,param_2,0,0xb4,0,0x17e,0x3d4ccccd,0x8002000);
    FUN_00a9f600(0xffffffff,param_2,0,0xffffff4d,0,0x176,0x3d4ccccd,0x8002000);
    FUN_00a9f600(0xffffffff,param_2,0,0xffffff79,0,0x17d,0x3d4ccccd,0x8002000);
    FUN_00a9f600(0xffffffff,param_2,0,0xffffffa6,0,0x178,0x3d4ccccd,0x8002000);
    uVar4 = 0x17b;
  }
  else {
    uVar4 = FUN_00a9f560("GroundSlash",0x3d4ccccd,0x8002000,param_2);
    *(undefined4 *)(uVar5 + 0x118) = uVar4;
    FUN_00a9f600(0xffffffff,param_2,0,1,0,0x155,0x3d4ccccd,0x8002000);
    FUN_00a9f600(0xffffffff,param_2,0,0,0,0x14d,0x3d4ccccd,0x8002000);
    FUN_00a9f600(0xffffffff,param_2,0,0x2d,0,0x152,0x3d4ccccd,0x8002000);
    FUN_00a9f600(0xffffffff,param_2,0,0x5a,0,0x14f,0x3d4ccccd,0x8002000);
    FUN_00a9f600(0xffffffff,param_2,0,0x87,0,0x150,0x3d4ccccd,0x8002000);
    FUN_00a9f600(0xffffffff,param_2,0,0xb4,0,0x154,0x3d4ccccd,0x8002000);
    FUN_00a9f600(0xffffffff,param_2,0,0xffffff4d,0,0x14c,0x3d4ccccd,0x8002000);
    FUN_00a9f600(0xffffffff,param_2,0,0xffffff79,0,0x153,0x3d4ccccd,0x8002000);
    FUN_00a9f600(0xffffffff,param_2,0,0xffffffa6,0,0x14e,0x3d4ccccd,0x8002000);
    uVar4 = 0x151;
  }
  FUN_00a9f600(0xffffffff,param_2,0,0xffffffd3,0,uVar4,0x3d4ccccd,0x8002000);
  fVar1 = (param_3 + 1.5707964) * 57.29578;
  if (180.0 < fVar1) {
    fVar1 = fVar1 - 360.0;
  }
  if ((((NAN(fVar1) || 0.0 < fVar1 == (fVar1 == 0.0)) || (fVar2 = 1.0, 1.0 < fVar1)) &&
      (fVar2 = -179.0, fVar1 < 180.0)) && (-179.0 < fVar1)) {
    if ((-160.0 <= fVar1) || (fVar1 <= -179.0)) {
      fVar2 = fVar1;
      if ((160.0 < fVar1) && (fVar1 < 180.0)) {
        fVar2 = 180.0;
      }
    }
    else {
      fVar2 = -179.9;
    }
  }
  FUN_00a947e0(param_2,0,fVar2,0);
  return;
}

// 00874E90  FUN_00874e90  size=118  [callgraph]
uint FUN_00874e90(undefined4 *param_1)

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
    puVar5 = &DAT_01b35b78;
    (**(code **)*param_1)(&DAT_01b35b78);
    iVar3 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar3 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar4 + 0x5e0);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar5 = &DAT_01b35b20;
    (**(code **)(*piVar1 + 4))(&DAT_01b35b20);
    iVar3 = FUN_00dd6d80(puVar5);
    uVar2 = -(uint)(iVar3 != 0) & (uint)piVar1;
  }
  if (*(int *)(uVar4 + 0x528) != 0) {
    return *(uint *)(uVar2 + 0xd00) & 0x80;
  }
  return *(uint *)(uVar2 + 0xcfc) & 0x80;
}

// 00874F10  FUN_00874f10  size=100  [callgraph]
uint FUN_00874f10(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar4 = &DAT_01b35b78;
    (**(code **)*param_1)(&DAT_01b35b78);
    iVar3 = FUN_00dd6d80(puVar4);
    uVar2 = -(uint)(iVar3 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar2 + 0x5e0);
  if (piVar1 == (int *)0x0) {
    return uRam00000cfc & 0x40;
  }
  puVar4 = &DAT_01b35b20;
  (**(code **)(*piVar1 + 4))(&DAT_01b35b20);
  iVar3 = FUN_00dd6d80(puVar4);
  return *(uint *)((-(uint)(iVar3 != 0) & (uint)piVar1) + 0xcfc) & 0x40;
}

// 00874F80  FUN_00874f80  size=2732  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00874f80(undefined4 *param_1,float *param_2)

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
    local_1a4 = (float *)&DAT_01b35b78;
    pfStack_1a8 = (float *)0x874fa7;
    (**(code **)*param_1)();
    pfStack_1a8 = (float *)0x874fae;
    iVar6 = FUN_00dd6d80();
    uVar9 = -(uint)(iVar6 != 0) & (uint)param_1;
  }
  piVar10 = *(int **)(uVar9 + 0x5e0);
  if (piVar10 == (int *)0x0) {
    piVar10 = (int *)0x0;
  }
  else {
    local_1a4 = (float *)&DAT_01b35b20;
    pfStack_1a8 = (float *)0x874fd2;
    (**(code **)(*piVar10 + 4))();
    pfStack_1a8 = (float *)0x874fd9;
    iVar6 = FUN_00dd6d80();
    piVar10 = (int *)(-(uint)(iVar6 != 0) & (uint)piVar10);
  }
  local_1a4 = (float *)0x874fe8;
  FUN_00b7cd90();
  local_1a4 = (float *)0x874fed;
  iVar6 = FUN_00f98a90();
  local_114 = (float)iVar6 * 0.5;
  local_1a4 = (float *)0x875007;
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
      pfStack_1ac = (float *)0x8751d6;
      local_1a4 = pfStack_1a8;
      FUN_00ddf460();
    }
    else {
      local_1a4 = (float *)&DAT_0163d0ac;
      pfStack_1a8 = (float *)0x8751eb;
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
  puStack_1b8 = (undefined4 *)0x875233;
  FUN_00860410();
  local_180 = local_110 - local_190;
  local_17c = local_10c - local_18c;
  local_174 = local_104 - local_184;
  local_178 = 0;
  if ((local_180 != 0.0) || (local_17c != 0.0)) {
    fVar1 = local_17c * local_17c + local_180 * local_180;
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      pfStack_1a8 = &local_180;
      pfStack_1ac = (float *)0x8752c1;
      local_1a4 = pfStack_1a8;
      FUN_00ddf460();
    }
    else {
      local_1a4 = (float *)&DAT_0163d0ac;
      pfStack_1a8 = (float *)0x8752d6;
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
  puStack_1b8 = (undefined4 *)0x87531e;
  FUN_00860410();
  local_190 = (local_140 + local_170) * 0.5;
  local_18c = (local_13c + local_16c) * 0.5;
  local_188 = (local_138 + local_168) * 0.5;
  local_184 = (local_134 + local_164) * 0.5;
  fVar1 = local_170 - local_190;
  fVar2 = local_16c - local_18c;
  fVar3 = local_168 - local_188;
  local_1a4 = (float *)((fVar1 * 300.0 + fVar2 * 0.0 + fVar3 * 0.0) /
                       (SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3) * 300.0));
  pfStack_1a8 = (float *)0x8753bb;
  FUN_00ddbb50();
  local_180 = (local_170 * 0.4 + local_100) - (local_140 * 0.4 + local_100);
  local_17c = (local_16c * 0.4 + local_fc) - (local_13c * 0.4 + local_fc);
  local_174 = local_124 - local_124;
  local_178 = 0;
  if ((local_180 != 0.0) || (local_17c != 0.0)) {
    fVar1 = local_17c * local_17c + local_180 * local_180;
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      pfStack_1a8 = &local_180;
      pfStack_1ac = (float *)0x87548f;
      local_1a4 = pfStack_1a8;
      FUN_00ddf460();
    }
    else {
      local_1a4 = (float *)&DAT_0163d0ac;
      pfStack_1a8 = (float *)0x8754a2;
      FUN_00dd5650();
      local_180 = 0.0;
      local_17c = 1.0;
      local_178 = 0;
    }
  }
  local_1a4 = &local_100;
  pfStack_1a8 = &local_150;
  pfStack_1ac = (float *)0x8754d4;
  FUN_00d9fab0();
  local_1a4 = &local_110;
  pfStack_1a8 = &local_e0;
  local_110 = local_190 * 0.0 + local_100;
  local_10c = local_18c * 0.0 + local_fc;
  local_108 = local_188 * 0.0 + local_f8;
  local_104 = local_184 * 0.0 + local_f4;
  pfStack_1ac = (float *)0x875544;
  FUN_00d9fab0();
  local_1a4 = &local_130;
  pfStack_1a8 = (float *)0x875550;
  pfVar7 = (float *)FUN_00a925a0();
  local_1a4 = &local_130;
  local_150 = local_150 - *pfVar7;
  local_14c = local_14c - pfVar7[1];
  local_148 = local_148 - pfVar7[2];
  local_144 = local_144 - pfVar7[3];
  pfStack_1a8 = (float *)0x875591;
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
  pfStack_1a8 = (float *)0x875625;
  iVar6 = FUN_00a12210();
  _Src = (void *)(iVar6 + 0x10);
  local_1a4 = (float *)-(*(float *)(iVar6 + 0x18) /
                        SQRT(*(float *)(iVar6 + 0x38) * *(float *)(iVar6 + 0x38) +
                             *(float *)(iVar6 + 0x34) * *(float *)(iVar6 + 0x34) +
                             *(float *)(iVar6 + 0x30) * *(float *)(iVar6 + 0x30)));
  pfStack_1a8 = (float *)0x875651;
  FUN_00ddbaa0();
  local_60 = 0;
  pfStack_1ac = (float *)&local_60;
  local_5c = 0;
  local_58 = 0x3f800000;
  pfStack_1b0 = (float *)0x875680;
  pfStack_1a8 = pfStack_1ac;
  local_1a4 = _Src;
  D3DXVec3TransformNormal();
  uStack_cc = 0x3f800000;
  puStack_1b8 = &uStack_cc;
  uStack_c8 = 0;
  uStack_c4 = 0;
  pvStack_1bc = (void *)0x8756aa;
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
  iVar6 = FUN_008604e0(&local_18c,&local_15c,&local_14c,0x43480000);
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
  FUN_008698c0(param_1,auStack_ec,0x42c80000,(float)fVar11);
  return;
}

// 00875A30  FUN_00875a30  size=685  [callgraph]
void FUN_00875a30(undefined4 *param_1)

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
    puVar12 = &DAT_01b35b78;
    (**(code **)*param_1)(&DAT_01b35b78);
    iVar5 = FUN_00dd6d80(puVar12);
    uVar4 = -(uint)(iVar5 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar4 + 0x5e0);
  if (piVar1 == (int *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar12 = &DAT_01b35b20;
    (**(code **)(*piVar1 + 4))(&DAT_01b35b20);
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

// 00875CF0  FUN_00875cf0  size=433  [callgraph]
void FUN_00875cf0(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
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
    uVar4 = 0;
  }
  else {
    local_94 = (undefined4 *)&DAT_01b35b78;
    puStack_98 = (undefined1 *)0x875d14;
    (**(code **)*param_1)();
    puStack_98 = (undefined1 *)0x875d1b;
    iVar3 = FUN_00dd6d80();
    uVar4 = -(uint)(iVar3 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar4 + 0x5e0);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    local_94 = (undefined4 *)&DAT_01b35b20;
    puStack_98 = (undefined1 *)0x875d3f;
    (**(code **)(*piVar1 + 4))();
    puStack_98 = (undefined1 *)0x875d46;
    iVar3 = FUN_00dd6d80();
    uVar2 = -(uint)(iVar3 != 0) & (uint)piVar1;
  }
  if ((*(int *)(uVar4 + 0x500) == 0) && ((*(uint *)(uVar2 + 0xcf8) & *(uint *)(uVar2 + 0xe50)) != 0)
     ) {
    if (*(int *)(uVar2 + 0x40c8) == 8) {
      local_94 = param_1;
      puStack_98 = (undefined1 *)0x875d7a;
      iVar3 = FUN_00869420();
      if (iVar3 != 0) {
        return;
      }
    }
    local_94 = param_1;
    puStack_98 = (undefined1 *)0x875d8b;
    iVar3 = FUN_00874f10();
    if (iVar3 == 0) {
      local_94 = param_1;
      puStack_98 = (undefined1 *)0x875d98;
      iVar3 = FUN_00874e90();
      if (iVar3 == 0) {
        return;
      }
    }
    puStack_98 = local_50;
    local_7c = 0xc47a0000;
    *(undefined4 *)(uVar4 + 0x568) = 0;
    local_78 = 0;
    local_74 = 0x447a0000;
    local_5c = 0x447a0000;
    local_70 = 0;
    local_68 = 0;
    local_60 = 0;
    local_58[0] = 0;
    local_6c = 0xc47a0000;
    local_94 = (undefined4 *)(*(float *)(uVar4 + 0x3f8) * 0.017453292);
    puStack_9c = (undefined4 *)0x875dfd;
    D3DXMatrixRotationZ();
    puStack_9c = local_58;
    puStack_a4 = &local_78;
    puStack_a8 = (undefined1 *)0x875e0f;
    puStack_a0 = puStack_a4;
    D3DXVec3TransformNormal();
    puStack_a8 = (undefined1 *)(*(float *)(uVar4 + 0x3f8) * 0.017453292);
    D3DXMatrixRotationZ(auStack_64);
    D3DXVec3TransformNormal(&local_7c,&local_7c,&local_6c);
    puStack_a8 = puStack_98;
    puStack_a4 = local_94;
    FUN_00874800(*(undefined4 *)(uVar4 + 0x178),&puStack_a8);
    FUN_00874800(*(undefined4 *)(uVar4 + 0x17c),&puStack_a8);
    if (*(int *)(*(int *)(uVar4 + 0x170) + 4) != 0) {
      *(undefined4 *)(*(int *)(uVar4 + 0x170) + 8) = 0;
    }
    FUN_00d82510(4,0x32);
  }
  return;
}

// 00875EB0  FUN_00875eb0  size=192  [callgraph]
void FUN_00875eb0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

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
    puVar5 = &DAT_01b35b78;
    (**(code **)*param_1)(&DAT_01b35b78);
    iVar3 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar3 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar4 + 0x5e0);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar5 = &DAT_01b35b20;
    (**(code **)(*piVar1 + 4))(&DAT_01b35b20);
    iVar3 = FUN_00dd6d80(puVar5);
    uVar2 = -(uint)(iVar3 != 0) & (uint)piVar1;
  }
  if ((*(int *)(uVar4 + 0x500) == 0) && ((*(uint *)(uVar2 + 0xcf8) & *(uint *)(uVar2 + 0xe50)) != 0)
     ) {
    if ((*(int *)(uVar2 + 0x40c8) == 8) && (iVar3 = FUN_00869420(param_1), iVar3 != 0)) {
      return;
    }
    iVar3 = FUN_00874e90(param_1);
    if ((iVar3 != 0) || (param_4 != 0)) {
      *(undefined4 *)(uVar4 + 0x6a0) = 1;
      FUN_00d82510(2,param_3);
      if (param_5 != 0) {
        *(int *)(uVar4 + 0x570) = *(int *)(uVar4 + 0x570) + 1;
      }
    }
  }
  return;
}

// 00875F70  FUN_00875f70  size=191  [callgraph]
void FUN_00875f70(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

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
    puVar5 = &DAT_01b35b78;
    (**(code **)*param_1)(&DAT_01b35b78);
    iVar3 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar3 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar4 + 0x5e0);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    puVar5 = &DAT_01b35b20;
    (**(code **)(*piVar1 + 4))(&DAT_01b35b20);
    iVar3 = FUN_00dd6d80(puVar5);
    uVar2 = -(uint)(iVar3 != 0) & (uint)piVar1;
  }
  if ((*(int *)(uVar4 + 0x500) == 0) && ((*(uint *)(uVar2 + 0xcf8) & *(uint *)(uVar2 + 0xe50)) != 0)
     ) {
    if ((*(int *)(uVar2 + 0x40c8) == 8) && (iVar3 = FUN_00869420(param_1), iVar3 != 0)) {
      return;
    }
    iVar3 = FUN_00874f10(param_1);
    if ((iVar3 != 0) || (param_4 != 0)) {
      *(undefined4 *)(uVar4 + 0x6a0) = 2;
      FUN_00d82510(2,param_3);
      if (param_5 != 0) {
        *(int *)(uVar4 + 0x570) = *(int *)(uVar4 + 0x570) + 1;
      }
    }
  }
  return;
}

// 00876030  FUN_00876030  size=687  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00876030(undefined4 *param_1)

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
    puVar7 = &DAT_01b35b78;
    (**(code **)*param_1)(&DAT_01b35b78);
    iVar2 = FUN_00dd6d80(puVar7);
    uVar4 = -(uint)(iVar2 != 0) & (uint)param_1;
  }
  piVar3 = *(int **)(uVar4 + 0x5e0);
  if (piVar3 == (int *)0x0) {
    local_b4 = 0.0;
  }
  else {
    puVar7 = &DAT_01b35b20;
    (**(code **)(*piVar3 + 4))(&DAT_01b35b20);
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

// 00876380  FUN_00876380  size=147  [callgraph]
bool FUN_00876380(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined *puVar4;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar4 = &DAT_01b35b78;
    (**(code **)*param_1)(&DAT_01b35b78);
    iVar1 = FUN_00dd6d80(puVar4);
    uVar3 = -(uint)(iVar1 != 0) & (uint)param_1;
  }
  piVar2 = *(int **)(uVar3 + 0x5e0);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    puVar4 = &DAT_01b35b20;
    (**(code **)(*piVar2 + 4))(&DAT_01b35b20);
    iVar1 = FUN_00dd6d80(puVar4);
    piVar2 = (int *)(-(uint)(iVar1 != 0) & (uint)piVar2);
  }
  if (piVar2[0x1032] != 9) {
    iVar1 = FUN_00a81330();
    if (iVar1 == 0) {
      iVar1 = (**(code **)(*piVar2 + 800))(0x3c888889);
      return iVar1 != 0;
    }
  }
  return false;
}

// 00876420  FUN_00876420  size=152  [callgraph]
void FUN_00876420(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

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
    puVar5 = &DAT_01b35b78;
    (**(code **)*param_1)(&DAT_01b35b78);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar3 = -(uint)(iVar2 != 0) & (uint)param_1;
  }
  piVar1 = *(int **)(uVar3 + 0x5e0);
  if (piVar1 == (int *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = &DAT_01b35b20;
    (**(code **)(*piVar1 + 4))(&DAT_01b35b20);
    iVar2 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar2 != 0) & (uint)piVar1;
  }
  iVar2 = FUN_00b83e50();
  if ((((iVar2 != 0) && (*(int *)(uVar4 + 0x40c8) != 8)) && (*(int *)(uVar4 + 0x40c8) != 0xf)) &&
     (*(int *)(uVar3 + 0x3c4) != 0)) {
    *(undefined4 *)(uVar3 + 0x3c4) = 0;
    FUN_00d82510(0xf,param_3);
  }
  return;
}

// 008764C0  FUN_008764c0  size=103  [callgraph]
void FUN_008764c0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar4 = &DAT_01b35b78;
    (**(code **)*param_1)(&DAT_01b35b78);
    iVar1 = FUN_00dd6d80(puVar4);
    uVar3 = -(uint)(iVar1 != 0) & (uint)param_1;
  }
  iVar1 = FUN_00d821d0(0xf);
  if (iVar1 != 0) {
    *(undefined4 *)(uVar3 + 0x3c4) = 0;
    return;
  }
  if (*(int *)(uVar3 + 0x188) != 0) {
    uVar2 = FUN_00876380(param_1,param_2);
    *(undefined4 *)(uVar3 + 0x3c4) = uVar2;
  }
  return;
}

// 0089B510  ZangekiStatePl1400::vf08  size=2263  [class]
undefined4 ZangekiStatePl1400::vf08(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int **ppiStack_94;
  int ***pppiStack_8c;
  undefined4 ***pppuStack_88;
  undefined4 ***pppuStack_84;
  undefined1 **ppuStack_80;
  char **ppcStack_7c;
  undefined1 **ppuStack_78;
  undefined4 **ppuStack_74;
  int **ppiStack_70;
  int **ppiStack_6c;
  int **ppiStack_68;
  undefined4 **ppuStack_64;
  undefined1 *puStack_60;
  char *pcStack_5c;
  undefined1 *puStack_58;
  undefined4 *puStack_54;
  int *piStack_50;
  int *piStack_4c;
  int *local_48;
  undefined4 *local_44;
  undefined4 uStack_34;
  int iStack_30;
  int local_2c [2];
  int *local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  local_44 = param_1;
  local_48 = (int *)0x89b529;
  iVar1 = StateMachineNode::vf08();
  if (iVar1 == 0) {
    return 0;
  }
  if (param_1 == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    local_44 = (undefined4 *)&DAT_01b35b78;
    local_48 = (int *)0x89b54d;
    (**(code **)*param_1)();
    local_48 = (int *)0x89b554;
    iVar1 = FUN_00dd6d80();
    uVar4 = -(uint)(iVar1 != 0) & (uint)param_1;
  }
  local_24 = *(int **)(uVar4 + 0x5e0);
  if (local_24 == (int *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    local_44 = (undefined4 *)&DAT_01b35b20;
    local_48 = (int *)0x89b57a;
    (**(code **)(*local_24 + 4))();
    local_48 = (int *)0x89b581;
    iVar1 = FUN_00dd6d80();
    piVar5 = (int *)(-(uint)(iVar1 != 0) & (uint)local_24);
  }
  local_44 = &DAT_01b7bd48;
  local_48 = (int *)0xb0;
  piStack_4c = (int *)0x89b59a;
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
  local_44 = &DAT_01b7bd48;
  local_48 = (int *)0xb0;
  *(undefined4 **)(uVar4 + 0x170) = puVar2;
  piStack_4c = (int *)0x89b5d0;
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
  local_44 = &DAT_01b7bd48;
  local_48 = (int *)0x60;
  *(undefined4 **)(uVar4 + 0x174) = puVar2;
  piStack_4c = (int *)0x89b603;
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
  local_44 = &DAT_01b7bd48;
  local_48 = (int *)0xb0;
  *(undefined4 **)(uVar4 + 0x178) = puVar2;
  piStack_4c = (int *)0x89b639;
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
    if ((float)piVar5[0xd07] <= 0.0) {
      local_44 = (undefined4 *)0x89b6bf;
      iVar1 = FUN_0085c0e0();
      if (iVar1 != 2) {
        local_44 = (undefined4 *)0x89b6cb;
        iVar1 = FUN_0085c0e0();
        *(undefined4 *)(uVar4 + 0x52c) = 0;
        *(undefined4 *)(uVar4 + 0x530) = 0;
        if (iVar1 == 1) {
          *(undefined4 *)(uVar4 + 0x528) = 1;
        }
        else {
          *(undefined4 *)(uVar4 + 0x528) = 0;
        }
        goto LAB_0089b703;
      }
    }
    *(undefined4 *)(uVar4 + 0x528) = 1;
    *(undefined4 *)(uVar4 + 0x52c) = 0;
    *(undefined4 *)(uVar4 + 0x530) = 1;
  }
  else {
    *(undefined4 *)(uVar4 + 0x528) = 1;
    *(undefined4 *)(uVar4 + 0x52c) = 1;
    *(undefined4 *)(uVar4 + 0x530) = 0;
    local_44 = (undefined4 *)0x89b6a9;
    FUN_00bc31a0();
  }
LAB_0089b703:
  local_2c[0] = piVar5[0x1032];
  if (((((local_2c[0] != 0xc) && (local_2c[0] != 0xe)) && (local_2c[0] != 0x12)) &&
      ((local_2c[0] != 0x13 && (local_2c[0] != 4)))) && (local_2c[0] != 8)) {
    *(undefined4 *)(uVar4 + 0x5c4) = 0;
    local_24 = (int *)piVar5[0x13c];
    local_44 = (undefined4 *)(*(float *)(uVar4 + 0x574) * 1.2 * 30.0);
    local_48 = (int *)0x3f490fdb;
    piStack_4c = (int *)0x89b781;
    iVar1 = (**(code **)(*piVar5 + 0x84))();
    piStack_4c = *(int **)(iVar1 + 4);
    piStack_50 = local_24;
    puStack_54 = (undefined4 *)(uVar4 + 0x5b8);
    puStack_58 = (undefined1 *)0x89b79e;
    FUN_00c58e90();
    if (*(int *)(uVar4 + 0x5c4) < 1) {
      local_44 = (undefined4 *)0x89b7b1;
      iVar1 = FUN_00a81330();
      if (iVar1 == 0) {
        local_44 = (undefined4 *)0x89b7bc;
        iVar1 = FUN_00416db0();
        if (iVar1 == 0) {
          if (*(int *)(uVar4 + 0x528) != 0) {
            local_2c[0] = 2;
          }
        }
        else {
          local_2c[0] = 2;
        }
        goto LAB_0089b7e4;
      }
    }
    local_2c[0] = 0x14;
  }
LAB_0089b7e4:
  local_44 = (undefined4 *)0x89b7ef;
  iVar3 = FUN_00a81330();
  iVar1 = 0xc;
  if (iVar3 == 0) {
    iVar1 = local_2c[0];
  }
  switch(iVar1) {
  default:
    local_48 = (int *)0x11;
    break;
  case 2:
  case 5:
    local_48 = (int *)0x3;
    break;
  case 0xc:
    local_48 = (int *)0x12;
    break;
  case 0x14:
    local_48 = (int *)0xe;
  }
  local_44 = param_1;
  piStack_4c = (int *)0x89b838;
  piStack_4c = (int *)(*(code *)**(undefined4 **)param_1[1])();
  piStack_50 = (int *)0x89b842;
  FUN_00d82bf0();
  *(undefined4 *)(uVar4 + 0x2f4) = 0;
  *(undefined4 *)(uVar4 + 0x2f8) = 0;
  *(undefined4 *)(uVar4 + 0x304) = 0;
  piVar5[0x1016] = 0;
  *(undefined4 *)(uVar4 + 0x3f8) = 0x42b40000;
  *(undefined4 *)(uVar4 + 0x400) = 0x42b40000;
  *(undefined4 *)(uVar4 + 0x3fc) = 1;
  *(undefined4 *)(uVar4 + 0x698) = 0;
  local_48 = (int *)0x89b887;
  iVar1 = FUN_008e2740();
  if (((iVar1 == 0) &&
      (((*(int *)(uVar4 + 0x530) != 0 || (*(int *)(uVar4 + 0x52c) != 0)) ||
       (*(int *)(uVar4 + 0x528) != 0)))) && (*(int *)(uVar4 + 0x330) != 8)) {
    local_48 = (int *)0x89b8b8;
    (**(code **)(*piVar5 + 0x318))();
    local_48 = (int *)0x0;
    piStack_4c = (int *)0x89b8c4;
    FUN_008e0af0();
    *(undefined4 *)(uVar4 + 0x698) = 1;
  }
  *(undefined4 *)(uVar4 + 0x3c4) = 0;
  *(undefined4 *)(uVar4 + 0x188) = 0;
  local_48 = (int *)0x89b8e1;
  FUN_00b7cd90();
  local_48 = (int *)0x8;
  piStack_4c = (int *)0x3f4ccccd;
  piStack_50 = (int *)0x3f800000;
  puStack_54 = (undefined4 *)0x0;
  puStack_58 = (undefined1 *)0x89b8fb;
  FUN_00dda360();
  puStack_58 = (undefined1 *)0x0;
  pcStack_5c = "core_se_btl_zangeki_in";
  puStack_60 = (undefined1 *)0x89b906;
  FUN_00e5e050();
  puStack_60 = (undefined1 *)0x24;
  ppuStack_64 = (undefined4 **)0x89b90d;
  FUN_00d89e60();
  ppuStack_64 = (undefined4 **)&DAT_01b7bd48;
  ppiStack_68 = (int **)0x60;
  *(undefined4 *)(uVar4 + 0x308) = 0;
  *(undefined4 *)(uVar4 + 0x30c) = 0;
  *(undefined4 *)(uVar4 + 0x310) = 0;
  *(undefined4 *)(uVar4 + 0x314) = 0;
  ppiStack_6c = (int **)0x89b931;
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
  local_48 = &DAT_01b7bd48;
  piStack_4c = (int *)0x60;
  *(undefined4 **)(uVar4 + 0x318) = puVar2;
  piStack_50 = (int *)0x89b964;
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
  local_2c[1] = 0x42b40000;
  local_48 = local_2c + 1;
  piStack_4c = (int *)0x89b9b5;
  (**(code **)(**(int **)(uVar4 + 0x318) + 8))();
  local_2c[0] = -0x3d790000;
  piStack_4c = local_2c;
  piStack_50 = (int *)0x89b9d1;
  (**(code **)(**(int **)(uVar4 + 0x318) + 8))();
  iStack_30 = 0x42870000;
  piStack_50 = &iStack_30;
  puStack_54 = (undefined4 *)0x89b9ed;
  (**(code **)(**(int **)(uVar4 + 0x318) + 8))();
  uStack_34 = 0xc2b40000;
  puStack_54 = &uStack_34;
  puStack_58 = (undefined1 *)0x89ba09;
  (**(code **)(**(int **)(uVar4 + 0x318) + 8))();
  puStack_58 = &stack0xffffffc8;
  pcStack_5c = (char *)0x89ba25;
  (**(code **)(**(int **)(uVar4 + 0x318) + 8))();
  pcStack_5c = &stack0xffffffc4;
  puStack_60 = (undefined1 *)0x89ba41;
  (**(code **)(**(int **)(uVar4 + 0x318) + 8))();
  puStack_60 = &stack0xffffffc0;
  ppuStack_64 = (undefined4 **)0x89ba5d;
  (**(code **)(**(int **)(uVar4 + 0x318) + 8))();
  local_44 = (undefined4 *)0xc2ab0000;
  ppuStack_64 = &local_44;
  ppiStack_68 = (int **)0x89ba79;
  (**(code **)(**(int **)(uVar4 + 0x318) + 8))();
  local_48 = (int *)0x42ee8000;
  ppiStack_68 = &local_48;
  ppiStack_6c = (int **)0x89ba95;
  (**(code **)(**(int **)(uVar4 + 0x318) + 8))();
  piStack_4c = (int *)0xc2ca8000;
  ppiStack_6c = &piStack_4c;
  ppiStack_70 = (int **)0x89bab1;
  (**(code **)(**(int **)(uVar4 + 0x318) + 8))();
  piStack_50 = (int *)0x424f0000;
  ppiStack_70 = &piStack_50;
  ppuStack_74 = (undefined4 **)0x89bacd;
  (**(code **)(**(int **)(uVar4 + 0x318) + 8))();
  puStack_54 = (undefined4 *)0xc2d80000;
  ppuStack_74 = &puStack_54;
  ppuStack_78 = (undefined1 **)0x89bae9;
  (**(code **)(**(int **)(uVar4 + 0x318) + 8))();
  puStack_58 = (undefined1 *)0x42cf0000;
  ppuStack_78 = &puStack_58;
  ppcStack_7c = (char **)0x89bb05;
  (**(code **)(**(int **)(uVar4 + 0x318) + 8))();
  pcStack_5c = (char *)0xc2c18000;
  ppcStack_7c = &pcStack_5c;
  ppuStack_80 = (undefined1 **)0x89bb21;
  (**(code **)(**(int **)(uVar4 + 0x318) + 8))();
  if (*(int *)(*(int *)(uVar4 + 0x31c) + 4) != 0) {
    *(undefined4 *)(*(int *)(uVar4 + 0x31c) + 8) = 0;
  }
  puStack_60 = (undefined1 *)0x431e0000;
  ppuStack_80 = &puStack_60;
  pppuStack_84 = (undefined4 ***)0x89bb4b;
  (**(code **)(**(int **)(uVar4 + 0x31c) + 8))();
  ppuStack_64 = (undefined4 **)0x40accccd;
  pppuStack_84 = &ppuStack_64;
  pppuStack_88 = (undefined4 ***)0x89bb67;
  (**(code **)(**(int **)(uVar4 + 0x31c) + 8))();
  ppiStack_68 = (int **)0xc3196667;
  pppuStack_88 = &ppiStack_68;
  pppiStack_8c = (int ***)0x89bb83;
  (**(code **)(**(int **)(uVar4 + 0x31c) + 8))();
  ppiStack_6c = (int **)0xc1100000;
  pppiStack_8c = &ppiStack_6c;
  (**(code **)(**(int **)(uVar4 + 0x31c) + 8))();
  ppiStack_70 = (int **)0x431a8ccd;
  (**(code **)(**(int **)(uVar4 + 0x31c) + 8))(&ppiStack_70);
  ppuStack_74 = (undefined4 **)0xc1580001;
  (**(code **)(**(int **)(uVar4 + 0x31c) + 8))();
  ppuStack_78 = (undefined1 **)0xc30de666;
  (**(code **)(**(int **)(uVar4 + 0x31c) + 8))(&ppuStack_78);
  ppcStack_7c = (char **)0x41633334;
  (**(code **)(**(int **)(uVar4 + 0x31c) + 8))(&ppcStack_7c);
  ppuStack_80 = (undefined1 **)0x43196667;
  (**(code **)(**(int **)(uVar4 + 0x31c) + 8))(&ppuStack_80);
  pppuStack_84 = (undefined4 ***)0xc0900000;
  (**(code **)(**(int **)(uVar4 + 0x31c) + 8))(&pppuStack_84);
  pppuStack_88 = (undefined4 ***)0xc3196667;
  (**(code **)(**(int **)(uVar4 + 0x31c) + 8))(&pppuStack_88);
  pppiStack_8c = (int ***)0x3f800000;
  (**(code **)(**(int **)(uVar4 + 0x31c) + 8))(&pppiStack_8c);
  piVar5[0x4a5] = 0;
  piVar5[0x4a6] = 0;
  piVar5[0x4a4] = 0;
  piVar5[0x4ab] = 0;
  piVar5[0x4ac] = 0;
  piVar5[0x4aa] = 0;
  FUN_00892af0(param_1);
  *(undefined4 *)(uVar4 + 0x510) = 0;
  *(undefined4 *)(uVar4 + 0x514) = 0;
  *(undefined4 *)(uVar4 + 0x518) = 0;
  *(undefined4 *)(uVar4 + 0x51c) = 0x3f800000;
  *(undefined4 *)(uVar4 + 0x3ec) = 0x100000;
  piVar5[0x2dd] = 0;
  *(undefined4 *)(uVar4 + 0x56c) = 0;
  *(undefined4 *)(uVar4 + 0x358) = 0;
  DAT_01d61924 = 0;
  DAT_01d6192c = 0;
  FUN_00b7aa60();
  ppiStack_94 = &local_24;
  uStack_20 = 2;
  uStack_1c = 3;
  local_24 = (int *)0x1;
  iVar1 = 3;
  do {
    FUN_00a82610(piVar5[0x13c],*ppiStack_94,0xffffffff);
    pppiStack_8c = (int ***)0x0;
    pppuStack_88 = (undefined4 ***)0x0;
    pppuStack_84 = (undefined4 ***)0x0;
    FUN_00a832d0(&pppiStack_8c,0,0x3e32b8c2,0,0xbe32b8c2);
    ppiStack_94 = ppiStack_94 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  *(undefined1 *)(piVar5 + 0xd18) = 0;
  FUN_009403a0();
  FUN_00b83ea0(0x40400000);
  piVar5[0x1031] = piVar5[0x1030];
  piVar5[0x102f] = 0;
  *(undefined4 *)(uVar4 + 0x5d4) = 0;
  *(undefined4 *)(uVar4 + 0x5d8) = 0;
  *(undefined4 *)(uVar4 + 0x370) = 0;
  *(undefined4 *)(uVar4 + 0x5dc) = 0;
  return 1;
}

// 0089BE10  ZangekiStatePl1400::SafeCheck  size=424  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall ZangekiStatePl1400::SafeCheck(int param_1,undefined4 *param_2)

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
      puVar8 = &DAT_01b35b78;
      (**(code **)*param_2)(&DAT_01b35b78);
      iVar4 = FUN_00dd6d80(puVar8);
      uVar6 = -(uint)(iVar4 != 0) & (uint)param_2;
    }
    piVar5 = *(int **)(uVar6 + 0x5e0);
    if (piVar5 == (int *)0x0) {
      uVar7 = 0;
    }
    else {
      puVar8 = &DAT_01b35b20;
      (**(code **)(*piVar5 + 4))(&DAT_01b35b20);
      iVar4 = FUN_00dd6d80(puVar8);
      uVar7 = -(uint)(iVar4 != 0) & (uint)piVar5;
    }
    FUN_00890cf0(param_2);
    *(undefined4 *)(uVar6 + 0x504) = 0;
    fVar1 = *(float *)(uVar7 + 0x3bd4) * 0.001;
    fVar2 = *(float *)(uVar7 + 0x3bd8) * 0.001;
    if (0.1 < SQRT(fVar2 * fVar2 + fVar1 * fVar1)) {
      *(undefined4 *)(uVar6 + 0x504) = 1;
    }
    uVar3 = _DAT_01883d24;
    *(undefined4 *)(param_1 + 0x48) = _DAT_01883d24;
    *(undefined4 *)(uVar6 + 0x504) = 1;
    *(undefined4 *)(uVar6 + 0x508) = uVar3;
    *(undefined4 *)(uVar6 + 0x3f4) = 1;
    *(undefined4 *)(uVar6 + 0x564) = 0;
    *(undefined4 *)(uVar6 + 0x570) = 0;
    *(undefined4 *)(uVar7 + 0x890) = 0;
    *(undefined4 *)(uVar7 + 0x894) = 0;
    *(undefined4 *)(uVar7 + 0x898) = 0;
    *(undefined4 *)(uVar7 + 0x89c) = uStack_14;
    if (*(int *)(uVar6 + 0x528) != 0) {
      iVar4 = FUN_00a81330();
      if (iVar4 != 0) {
        piVar5 = (int *)FUN_00a7c8a0();
        if (piVar5 != (int *)0x0) {
          puVar8 = &DAT_01b35260;
          (**(code **)(*piVar5 + 4))(&DAT_01b35260);
          iVar4 = FUN_00dd6d80(puVar8);
          if (iVar4 != 0) {
            FUN_005ca1a0(0);
          }
        }
      }
    }
    iVar4 = FUN_00a81330();
    if (iVar4 != 0) {
      piVar5 = (int *)FUN_00a7c8a0();
      if (piVar5 != (int *)0x0) {
        puVar8 = &DAT_01b35260;
        (**(code **)(*piVar5 + 4))(&DAT_01b35260);
        iVar4 = FUN_00dd6d80(puVar8);
        if (iVar4 != 0) {
          FUN_005ca330(0x3f800000);
        }
      }
    }
    *(undefined4 *)(uVar6 + 0x5ec) = 0;
    *(undefined4 *)(uVar6 + 0x5e8) = 0;
  }
  StateMachineNode::SafeCheck(param_2);
  return;
}

// 0089BFC0  ZangekiStatePl1400::qteSafeCheck  size=929  [class]
undefined4 __thiscall ZangekiStatePl1400::qteSafeCheck(int param_1,undefined4 *param_2)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  float10 fVar8;
  undefined *puVar9;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar6 = 0;
  }
  else {
    puVar9 = &DAT_01b35b78;
    (**(code **)*param_2)(&DAT_01b35b78);
    iVar2 = FUN_00dd6d80(puVar9);
    uVar6 = -(uint)(iVar2 != 0) & (uint)param_2;
  }
  piVar7 = *(int **)(uVar6 + 0x5e0);
  if (piVar7 == (int *)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    puVar9 = &DAT_01b35b20;
    (**(code **)(*piVar7 + 4))(&DAT_01b35b20);
    iVar2 = FUN_00dd6d80(puVar9);
    piVar7 = (int *)(-(uint)(iVar2 != 0) & (uint)piVar7);
  }
  iVar2 = FUN_00d821d0(1);
  if (iVar2 == 0) {
    *(uint *)(uVar6 + 0x3f4) = (uint)(*(int *)(uVar6 + 0x564) < 2);
    iVar2 = FUN_00a81330();
    if (iVar2 != 0) {
      FUN_00a81330();
      iVar2 = FUN_00a7c8a0();
      if (iVar2 != 0) {
        fVar8 = (float10)fpatan((float10)*(float *)(iVar2 + 0x40) - (float10)(float)piVar7[0x10],
                                (float10)*(float *)(iVar2 + 0x48) - (float10)(float)piVar7[0x12]);
        fVar8 = (float10)FUN_00ddba30((float)(fVar8 - (float10)(float)piVar7[0x25]));
        if (fVar8 * fVar8 < (float10)0.6168503 != (fVar8 * fVar8 == (float10)0.6168503)) {
          *(undefined4 *)(param_1 + 0x30) = 1;
          piVar3 = (int *)TargetManagerImplement::TargetManagerImplement_2();
          (**(code **)(*piVar3 + 0x24))(iVar2);
        }
      }
    }
    if (*(int *)(param_1 + 0x34) != 0) {
      piVar3 = (int *)TargetManagerImplement::TargetManagerImplement_2();
      (**(code **)(*piVar3 + 0x24))(0);
      piVar3 = (int *)TargetManagerImplement::TargetManagerImplement_2();
      (**(code **)(*piVar3 + 0x2c))(0);
      piVar3 = (int *)TargetManagerImplement::TargetManagerImplement_2();
      (**(code **)(*piVar3 + 0x1c))(0);
    }
    if ((((((*(int *)(uVar6 + 0x2f4) == 0) && (iVar2 = piVar7[0x1032], iVar2 != 4)) && (iVar2 != 9))
         && ((iVar2 != 0xc && (iVar2 != 0xf)))) &&
        ((iVar2 != 0xe && ((iVar2 != 0xd && (iVar2 != 8)))))) &&
       ((iVar2 != 0x15 || (*(int *)(uVar6 + 0x628) == 0)))) {
      uVar5 = *(undefined4 *)(uVar6 + 0x378);
      puVar4 = (undefined4 *)(**(code **)(*piVar7 + 0x84))();
      uStack_18 = puVar4[2];
      uStack_20 = *puVar4;
      uStack_1c = uVar5;
      (**(code **)(*piVar7 + 0x88))(&uStack_20);
    }
    if (0.0 < *(float *)(uVar6 + 0x5cc)) {
      fVar1 = *(float *)(uVar6 + 0x5cc) - 1.0;
      *(float *)(uVar6 + 0x5cc) = fVar1;
      if (fVar1 < 0.0 != (fVar1 == 0.0)) {
        *(undefined4 *)(uVar6 + 0x5cc) = 0xbf800000;
      }
    }
    if (0 < *(int *)(uVar6 + 0x304)) {
      *(int *)(uVar6 + 0x304) = *(int *)(uVar6 + 0x304) + -1;
    }
    fVar1 = *(float *)(uVar6 + 0x5d8) - 1.0;
    *(undefined4 *)(uVar6 + 0x304) = 0;
    *(float *)(uVar6 + 0x5d8) = fVar1;
    if (fVar1 < 0.0) {
      *(undefined4 *)(uVar6 + 0x5d8) = 0;
    }
    iVar2 = FUN_00b7c970();
    if ((iVar2 < 1) && (piVar7[0x1032] != 8)) {
      if (param_2 != (undefined4 *)0x0) {
        puVar9 = &DAT_01b35b78;
        (**(code **)*param_2)(&DAT_01b35b78);
        FUN_00dd6d80(puVar9);
      }
      FUN_00b83e50();
      FUN_00d82510(1,100);
    }
    FUN_008764c0(param_2,param_1);
    if (*(int *)(uVar6 + 0x314) != 0) {
      *(int *)(uVar6 + 0x314) = *(int *)(uVar6 + 0x314) + -1;
    }
    if (*(int *)(uVar6 + 0x30c) != 0) {
      *(int *)(uVar6 + 0x30c) = *(int *)(uVar6 + 0x30c) + -1;
    }
    if ((*(int *)(uVar6 + 0x504) != 0) &&
       (fVar1 = *(float *)(uVar6 + 0x508) - 1.0, *(float *)(uVar6 + 0x508) = fVar1, fVar1 < 0.0)) {
      *(undefined4 *)(uVar6 + 0x508) = 0;
      *(undefined4 *)(uVar6 + 0x504) = 0;
    }
    FUN_0088d080(param_2);
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(uVar6 + 0x374);
    DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
    if (0.0 < (float)piVar7[0x1031]) {
      fVar8 = (float10)FUN_00a93060();
      fVar1 = (float)piVar7[0x1031];
      piVar7[0x1031] = (int)(float)((float10)fVar1 - fVar8);
      if ((float10)fVar1 - fVar8 < (float10)0) {
        piVar7[0x1031] = (int)(float)(float10)0;
      }
    }
    if (param_2 != (undefined4 *)0x0) {
      puVar9 = &DAT_01b35b78;
      (**(code **)*param_2)(&DAT_01b35b78);
      FUN_00dd6d80(puVar9);
    }
    iVar2 = FUN_00a81330();
    if (iVar2 == 0) {
      FUN_00a7c950();
    }
    FUN_00874700(param_2);
    uVar5 = StateMachineNode::qteSafeCheck(param_2);
    return uVar5;
  }
  FUN_00d82510(1,100);
  return 1;
}

