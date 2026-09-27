// src/player/pl1500/Pl1500.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008A0B30..00AC3CA0, 278 functions

#include "mgrr.h"
#include "Pl1500.h"

// 008A0B30  FUN_008a0b30  size=22  [callgraph]
void __fastcall FUN_008a0b30(int param_1)

{
  if (*(int *)(param_1 + 0xe0c) == 0) {
    *(int *)(param_1 + 0x12a8) = param_1 + 0x1370;
  }
  return;
}

// 008A0CE0  Pl1500::vf410  size=24  [class]
void __fastcall Pl1500::vf410(int param_1)

{
  PlBaseDLC::vf410();
  *(undefined4 *)(param_1 + 0x55a8) = 0;
  *(undefined4 *)(param_1 + 0x55a4) = 0;
  return;
}

// 008A0D00  Pl1500::vf3C0  size=121  [class]
void __fastcall Pl1500::vf3C0(int param_1)

{
  PlBaseDLC::vf3C0();
  if (0 < *(int *)(param_1 + 0x55a4)) {
    *(int *)(param_1 + 0x55a4) = *(int *)(param_1 + 0x55a4) + -1;
  }
  if (0 < *(int *)(param_1 + 0x55a8)) {
    *(int *)(param_1 + 0x55a8) = *(int *)(param_1 + 0x55a8) + -1;
  }
  if ((*(uint *)(param_1 + 0x55a0) & *(uint *)(param_1 + 0xcfc)) != 0) {
    *(undefined4 *)(param_1 + 0x55a4) = 10;
  }
  if ((*(uint *)(param_1 + 0xe40) & *(uint *)(param_1 + 0xcfc)) != 0) {
    *(undefined4 *)(param_1 + 0x55a8) = 10;
  }
  if ((*(int *)(param_1 + 0xe0c) != 0) && (*(int *)(param_1 + 0xe10) != 0)) {
    *(undefined4 *)(param_1 + 0x12b0) = 0;
    *(undefined4 *)(param_1 + 0x12ac) = 0;
    *(undefined4 *)(param_1 + 0x12a8) = 0;
  }
  return;
}

// 008A0D80  Pl1500::vf7C  size=43  [class]
void Pl1500::vf7C(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  Pl0000::vf7C(param_1,param_2);
  iVar1 = FUN_00932720();
  if (iVar1 == 0xd71) {
    FUN_00b7ec60();
  }
  return;
}

// 008A0DD0  FUN_008a0dd0  size=22  [between]
void FUN_008a0dd0(void)

{
  undefined1 local_20 [28];
  
  FUN_00b8afd0(local_20);
  return;
}

// 008A0DF0  FUN_008a0df0  size=389  [between]
void __fastcall FUN_008a0df0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  
  *(undefined4 *)(param_1 + 0x5458) = 0;
  *(undefined4 *)(param_1 + 0x6e0) = 5;
  *(undefined4 *)(param_1 + 0x5414) = 0x10000;
  *(undefined4 *)(param_1 + 0x5418) = 0;
  *(undefined4 *)(param_1 + 0x541c) = 0;
  *(undefined4 *)(param_1 + 0x5448) = 0;
  *(undefined4 *)(param_1 + 0x5450) = 0;
  *(undefined4 *)(param_1 + 0x54dc) = 0;
  *(undefined4 *)(param_1 + 0x54e0) = 0;
  *(undefined4 *)(param_1 + 0x54f0) = 0;
  *(undefined4 *)(param_1 + 0x54f4) = 0;
  *(undefined4 *)(param_1 + 0x54f8) = 0;
  *(undefined4 *)(param_1 + 0x54fc) = 0;
  *(undefined4 *)(param_1 + 0x5500) = 6;
  *(undefined4 *)(param_1 + 0x5454) = 0;
  *(undefined4 *)(param_1 + 0x55ac) = 0;
  *(undefined4 *)(param_1 + 0x55bc) = 0;
  *(undefined4 *)(param_1 + 0x55b4) = 0;
  *(undefined4 *)(param_1 + 0x55b8) = 0;
  *(undefined4 *)(param_1 + 0x56d4) = 0;
  FUN_00a7c950();
  *(undefined4 *)(param_1 + 0x55b0) = 0x3d4ccccd;
  *(undefined4 *)(param_1 + 0x56d8) = 0xffffffff;
  if ((*(int *)(param_1 + 0x76c) != 0) &&
     (uVar3 = 0, *(int *)(*(int *)(param_1 + 0x76c) + 0x18) != 0)) {
    iVar2 = 0;
    puVar1 = (undefined4 *)(param_1 + 0x545c);
    do {
      uVar3 = uVar3 + 1;
      *puVar1 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x76c) + 0x1c) + 0xfc + iVar2);
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 + 0x100;
    } while (uVar3 < *(uint *)(*(int *)(param_1 + 0x76c) + 0x18));
  }
  *(undefined4 *)(param_1 + 0x55c8) = 0;
  *(undefined4 *)(param_1 + 0x55a0) = 0x1000;
  *(undefined4 *)(param_1 + 0x56c0) = 0;
  *(undefined4 *)(param_1 + 0x55a4) = 0;
  *(undefined4 *)(param_1 + 0x56ec) = 0;
  *(undefined4 *)(param_1 + 0x55a8) = 0;
  *(undefined4 *)(param_1 + 0x55c4) = 0;
  *(undefined4 *)(param_1 + 0x55c0) = 0;
  *(undefined4 *)(param_1 + 0x55d8) = 0;
  *(undefined4 *)(param_1 + 0x55cc) = 0;
  *(undefined4 *)(param_1 + 0x56c4) = 0;
  *(undefined4 *)(param_1 + 0x56c8) = 0;
  *(undefined4 *)(param_1 + 0x56e0) = 0;
  *(undefined4 *)(param_1 + 0x56e8) = 0;
  *(undefined4 *)(param_1 + 0x56f0) = 0;
  FUN_00a7c950();
  *(undefined4 *)(param_1 + 0x56e4) = 0;
  *(undefined4 *)(param_1 + 0x56f8) = 0;
  *(undefined4 *)(param_1 + 0x56fc) = 0;
  *(undefined4 *)(param_1 + 0x5700) = 0;
  *(undefined4 *)(param_1 + 0x5704) = 0;
  *(undefined4 *)(param_1 + 0x5708) = 0;
  return;
}

// 008A0F80  FUN_008a0f80  size=1484  [between]
void __fastcall FUN_008a0f80(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  if (*(int **)(param_1 + 0x754) != (int *)0x0) {
    fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(0x6f);
    *(float *)(param_1 + 0x570c) = (float)(fVar3 * (float10)60.0);
    fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(0x6e);
    *(float *)(param_1 + 0x5710) = (float)(fVar3 * (float10)60.0);
    fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(0x70);
    *(float *)(param_1 + 0x5714) = (float)fVar3;
    fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(0x29);
    *(float *)(param_1 + 0x5728) = (float)fVar3;
    uVar2 = (**(code **)(**(int **)(param_1 + 0x754) + 4))(0x29);
    *(undefined4 *)(param_1 + 0x5718) = uVar2;
    uVar2 = (**(code **)(**(int **)(param_1 + 0x754) + 0xc))(0x29);
    *(undefined4 *)(param_1 + 0x571c) = uVar2;
    uVar2 = (**(code **)(**(int **)(param_1 + 0x754) + 0x14))(0x29);
    *(undefined4 *)(param_1 + 0x5720) = uVar2;
    uVar1 = (**(code **)(**(int **)(param_1 + 0x754) + 0x1c))(0x29);
    *(undefined1 *)(param_1 + 0x5724) = uVar1;
    fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(0x22);
    *(float *)(param_1 + 0x573c) = (float)fVar3;
    uVar2 = (**(code **)(**(int **)(param_1 + 0x754) + 4))(0x22);
    *(undefined4 *)(param_1 + 0x572c) = uVar2;
    uVar2 = (**(code **)(**(int **)(param_1 + 0x754) + 0xc))(0x22);
    *(undefined4 *)(param_1 + 0x5730) = uVar2;
    uVar2 = (**(code **)(**(int **)(param_1 + 0x754) + 0x14))(0x22);
    *(undefined4 *)(param_1 + 0x5734) = uVar2;
    uVar1 = (**(code **)(**(int **)(param_1 + 0x754) + 0x1c))(0x22);
    *(undefined1 *)(param_1 + 0x5738) = uVar1;
    fVar3 = (float10)FUN_00b7edd0(0x73);
    *(float *)(param_1 + 0x55b8) = (float)(fVar3 * (float10)0.016666668);
    fVar3 = (float10)FUN_00b7edd0(0x72);
    *(float *)(param_1 + 0x5430) = (float)fVar3;
    fVar3 = (float10)FUN_00b7edd0(0x2e);
    *(float *)(param_1 + 0x3374) = (float)fVar3;
    fVar3 = (float10)FUN_00b7edd0(0x2f);
    *(float *)(param_1 + 0x3378) = (float)fVar3;
    fVar3 = (float10)FUN_00b7edd0(0x30);
    *(float *)(param_1 + 0x337c) = (float)fVar3;
    fVar3 = (float10)FUN_00b7edd0(0x31);
    *(float *)(param_1 + 0x3380) = (float)fVar3;
    fVar3 = (float10)FUN_00b7edd0(0x32);
    *(float *)(param_1 + 0x3384) = (float)fVar3;
    fVar3 = (float10)FUN_00b7edd0(0x33);
    *(float *)(param_1 + 0x3388) = (float)fVar3;
    fVar3 = (float10)FUN_00b7edd0(0x34);
    *(float *)(param_1 + 0x338c) = (float)fVar3;
    fVar3 = (float10)FUN_00b7edd0(0x35);
    *(float *)(param_1 + 0x3390) = (float)fVar3;
    fVar3 = (float10)FUN_00b7edd0(0x37);
    *(float *)(param_1 + 0x3394) = (float)fVar3;
    fVar3 = (float10)FUN_00b7edd0(0x38);
    *(float *)(param_1 + 0x3398) = (float)fVar3;
    fVar3 = (float10)FUN_00b7edd0(0x39);
    *(float *)(param_1 + 0x339c) = (float)fVar3;
    fVar3 = (float10)FUN_00b7edd0(0x3a);
    *(float *)(param_1 + 0x33a0) = (float)fVar3;
    fVar3 = (float10)FUN_00b7edd0(0x3b);
    *(float *)(param_1 + 0x33a4) = (float)fVar3;
    fVar3 = (float10)FUN_00b7edd0(0x3c);
    *(float *)(param_1 + 0x33a8) = (float)fVar3;
    fVar3 = (float10)FUN_00b7edd0(0x3d);
    *(float *)(param_1 + 0x33ac) = (float)fVar3;
    fVar3 = (float10)FUN_00b7edd0(0x3e);
    *(float *)(param_1 + 0x33b0) = (float)fVar3;
    fVar3 = (float10)FUN_00b7edd0(0x3f);
    *(float *)(param_1 + 0x33b4) = (float)fVar3;
    fVar3 = (float10)FUN_00b7edd0(0x40);
    *(float *)(param_1 + 0x33b8) = (float)fVar3;
    fVar3 = (float10)FUN_00b7edd0(0x43);
    *(float *)(param_1 + 0x33bc) = (float)fVar3;
    fVar3 = (float10)FUN_00b7edd0(0x44);
    *(float *)(param_1 + 0x33c0) = (float)fVar3;
    fVar3 = (float10)FUN_00b7edd0(0x41);
    *(float *)(param_1 + 0x33c4) = (float)fVar3;
    fVar3 = (float10)FUN_00b7edd0(0x42);
    *(float *)(param_1 + 0x33c8) = (float)fVar3;
    fVar3 = (float10)FUN_00b7edd0(0x45);
    *(float *)(param_1 + 0x33cc) = (float)fVar3;
    fVar3 = (float10)FUN_00b7edd0(0x46);
    *(float *)(param_1 + 0x33d0) = (float)fVar3;
    fVar3 = (float10)FUN_00b7edd0(0x47);
    *(float *)(param_1 + 0x33d4) = (float)fVar3;
    fVar3 = (float10)FUN_00b7edd0(0x48);
    *(float *)(param_1 + 0x33d8) = (float)fVar3;
    fVar3 = (float10)FUN_00b7edd0(0x49);
    *(float *)(param_1 + 0x33dc) = (float)fVar3;
    fVar3 = (float10)FUN_00b7edd0(0x4a);
    *(float *)(param_1 + 0x33e0) = (float)fVar3;
    fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(0x27);
    *(float *)(param_1 + 0x33f4) = (float)(fVar3 * (float10)0.017453292);
    fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x3c))(0x27);
    *(float *)(param_1 + 0x33f8) = (float)(fVar3 * (float10)0.017453292);
    fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x44))(0x27);
    *(float *)(param_1 + 0x33fc) = (float)(fVar3 * (float10)20.0);
    fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(0x4b);
    *(float *)(param_1 + 0x3400) = (float)fVar3;
    fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x3c))(0x4b);
    *(float *)(param_1 + 0x3404) = (float)(fVar3 * (float10)0.017453292);
    FUN_00b7edd0(0x60);
    uVar2 = FUN_00fdbc60();
    *(undefined4 *)(param_1 + 0x1e40) = uVar2;
    fVar3 = (float10)FUN_00b7edd0(0x61);
    *(float *)(param_1 + 0x3410) = (float)fVar3;
    fVar3 = (float10)FUN_00b7edd0(0x62);
    *(float *)(param_1 + 0x3414) = (float)fVar3;
    fVar3 = (float10)FUN_00b7edd0(0x67);
    *(float *)(param_1 + 0x279c) = (float)(fVar3 * (float10)60.0);
    fVar3 = (float10)FUN_00b7edd0(0x69);
    *(float *)(param_1 + 0x26c4) = (float)fVar3;
    fVar3 = (float10)FUN_00b7edd0(0x6a);
    *(float *)(param_1 + 0x26c8) = (float)fVar3;
    fVar3 = (float10)FUN_00b7edd0(0x6b);
    *(float *)(param_1 + 0x26d0) = (float)fVar3;
    fVar3 = (float10)FUN_00b7edd0(0x6c);
    *(float *)(param_1 + 0x26cc) = (float)fVar3;
    fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(0x4d);
    *(float *)(param_1 + 0x4060) = (float)fVar3;
    fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(0x4e);
    *(float *)(param_1 + 0x4064) = (float)fVar3;
    fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x3c))(0x4d);
    *(float *)(param_1 + 0x4068) = (float)fVar3;
    fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x3c))(0x4e);
    *(float *)(param_1 + 0x406c) = (float)fVar3;
    fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x44))(0x4d);
    *(float *)(param_1 + 0x4070) = (float)fVar3;
    fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x44))(0x4e);
    *(float *)(param_1 + 0x4074) = (float)fVar3;
    fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(0x4f);
    *(float *)(param_1 + 0x4078) = (float)fVar3;
    fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(0x50);
    *(float *)(param_1 + 0x407c) = (float)fVar3;
    fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x3c))(0x50);
    *(float *)(param_1 + 0x4080) = (float)fVar3;
    fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(0x51);
    *(float *)(param_1 + 0x4084) = (float)fVar3;
    fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x3c))(0x51);
    *(float *)(param_1 + 0x4088) = (float)fVar3;
    uVar2 = (**(code **)(**(int **)(param_1 + 0x754) + 0x24))(0x52);
    *(undefined4 *)(param_1 + 0x408c) = uVar2;
    uVar2 = (**(code **)(**(int **)(param_1 + 0x754) + 0x2c))(0x52);
    *(undefined4 *)(param_1 + 0x4090) = uVar2;
    fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(0x52);
    *(float *)(param_1 + 0x4094) = (float)fVar3;
    fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x3c))(0x52);
    *(float *)(param_1 + 0x4098) = (float)fVar3;
    fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x44))(0x52);
    *(float *)(param_1 + 0x409c) = (float)fVar3;
    fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(0x55);
    FUN_00c1cee0((float)fVar3);
    fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(0x56);
    *(float *)(param_1 + 0x40a0) = (float)fVar3;
    fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x3c))(0x56);
    *(float *)(param_1 + 0x40a8) = (float)fVar3;
    fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x44))(0x56);
    *(float *)(param_1 + 0x40ac) = (float)fVar3;
    fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x4c))(0x56);
    *(float *)(param_1 + 0x40b0) = (float)fVar3;
    fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(0x53);
    *(float *)(param_1 + 0x40b4) = (float)fVar3;
  }
  return;
}

// 008A1550  FUN_008a1550  size=270  [between]
void __fastcall FUN_008a1550(int param_1)

{
  float fVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  bool bVar6;
  
  if (((byte)DAT_01bea090 & 4) == 0) goto LAB_008a15d6;
  iVar3 = FUN_00932720();
  if (iVar3 == 0xd20) {
LAB_008a157b:
    *(undefined4 *)(param_1 + 0x56f8) = 0x42480000;
  }
  else {
    iVar3 = FUN_00932720();
    if (iVar3 == 0xd21) goto LAB_008a157b;
  }
  iVar3 = FUN_00932720();
  if ((iVar3 == 0xd30) && (DAT_018b925c != (byte *)0x0)) {
    pbVar5 = (byte *)0x1649998;
    pbVar4 = DAT_018b925c;
    do {
      bVar2 = *pbVar4;
      bVar6 = bVar2 < *pbVar5;
      if (bVar2 != *pbVar5) {
LAB_008a15c1:
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_008a15c6;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar4[1];
      bVar6 = bVar2 < pbVar5[1];
      if (bVar2 != pbVar5[1]) goto LAB_008a15c1;
      pbVar4 = pbVar4 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar2 != 0);
    iVar3 = 0;
LAB_008a15c6:
    if (iVar3 == 0) {
      *(undefined4 *)(param_1 + 0x56f8) = 0x43340000;
    }
  }
LAB_008a15d6:
  iVar3 = FUN_00932720();
  if (iVar3 == 0xd30) {
    fVar1 = *(float *)(param_1 + 0x910);
    if (*(float *)(param_1 + 0x56f8) <= 0.0) {
      if (*(int *)(param_1 + 0x56fc) != 0) {
        *(undefined4 *)(param_1 + 0x56fc) = 0;
        DAT_01bea070 = DAT_01bea070 & 0xffdfffff;
      }
    }
    else if ((DAT_01bea070 & 0x200000) == 0) {
      DAT_01bea070 = DAT_01bea070 | 0x200000;
      *(undefined4 *)(param_1 + 0x56fc) = 1;
    }
  }
  else {
    fVar1 = 1.0;
  }
  if (0.0 < *(float *)(param_1 + 0x56f8)) {
    *(float *)(param_1 + 0x56f8) = *(float *)(param_1 + 0x56f8) - fVar1;
    return;
  }
  return;
}

// 008A1660  FUN_008a1660  size=336  [between]
undefined4 __fastcall FUN_008a1660(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x3bb0) = 0x3fe66666;
  *(undefined4 *)(param_1 + 0x3bac) = 0x3fe66666;
  *(undefined4 *)(param_1 + 0x3ba4) = 0;
  *(undefined4 *)(param_1 + 0x3ba8) = 1;
  *(undefined4 *)(param_1 + 0x3ba0) = 0;
  *(undefined4 *)(param_1 + 0x544c) = 6;
  iVar1 = FUN_008ec660(param_1,0x3fa00000,0x3ecccccd,0x41700000,0x41a00000,0x78,6,0);
  *(int *)(param_1 + 0x764) = iVar1;
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016499a8);
    return 0;
  }
  FUN_008e6d00();
  FUN_008e6fe0(4);
  FUN_008e7400(4);
  FUN_008e0b70(1);
  FUN_008e0b80(0xffffffff,0x900);
  FUN_008e0ba0(0);
  FUN_008e0bb0(0x900);
  *(float *)(*(int *)(param_1 + 0x764) + 0xf4) = *(float *)(*(int *)(param_1 + 0x764) + 0xf4) * 0.75
  ;
  FUN_00b7ad00();
  FUN_008e6d00();
  FUN_008e1cc0();
  *(undefined4 *)(param_1 + 0x5590) = 0;
  *(undefined4 *)(param_1 + 0x5594) = 0;
  *(undefined4 *)(param_1 + 0x5598) = 0;
  *(undefined4 *)(param_1 + 0x559c) = 0;
  *(undefined4 *)(param_1 + 0x3bb0) = 0x3fa00000;
  return 1;
}

// 008A17D0  FUN_008a17d0  size=214  [between]
void __thiscall FUN_008a17d0(int param_1,int param_2)

{
  float *pfVar1;
  int iVar2;
  float unaff_ESI;
  float unaff_EDI;
  float fVar3;
  undefined1 auStack_78 [4];
  float fStack_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58 [2];
  undefined1 local_50 [28];
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  local_60 = *(undefined4 *)(param_1 + 0x50);
  local_5c = *(undefined4 *)(param_1 + 0x54);
  pfVar1 = (float *)((param_2 + 0x555) * 0x10 + param_1);
  local_58[0] = *(undefined4 *)(param_1 + 0x58);
  local_70 = *pfVar1;
  local_6c = pfVar1[1];
  local_68 = pfVar1[2];
  local_64 = pfVar1[3];
  iVar2 = FUN_00a12210(5);
  if (iVar2 != 0) {
    local_60 = *(undefined4 *)(iVar2 + 0x40);
    local_5c = *(undefined4 *)(iVar2 + 0x44);
    local_58[0] = *(undefined4 *)(iVar2 + 0x48);
  }
  fVar3 = *(float *)(param_1 + 0x94);
  D3DXMatrixRotationY(local_50,fVar3);
  D3DXVec3TransformNormal(auStack_78,auStack_78,local_58);
  fStack_34 = fVar3 + fStack_74;
  fStack_30 = unaff_EDI + local_70;
  fStack_2c = unaff_ESI + local_6c;
  Phantom::setTransform(&local_64);
  return;
}

// 008A18B0  FUN_008a18b0  size=31  [between]
undefined4 __fastcall FUN_008a18b0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  piVar2 = (int *)(param_1 + 0x5504);
  do {
    if (*piVar2 == 0) {
      return 0;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 4;
  } while (iVar1 < 4);
  return 1;
}

// 008A18D0  FUN_008a18d0  size=189  [between]
void __thiscall FUN_008a18d0(int *param_1,int param_2)

{
  int iVar1;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  param_1[0x1570] = 0;
  if ((param_1[0x1d9] != 0) && ((param_1[0x2fc] != 0 || (param_2 != 0)))) {
    local_20 = 0;
    local_1c = 0xbe800000;
    local_18 = 0;
    local_30 = param_1[0x10];
    local_2c = param_1[0x11];
    local_28 = param_1[0x12];
    local_24 = param_1[0x13];
    iVar1 = hkpCdPointCollector::hkpCdPointCollector_14(&local_20,&local_30,1,0,0x3c23d70a);
    if ((iVar1 != 0) && (param_1[0x15] = local_2c, param_2 != 0)) {
      (**(code **)(*param_1 + 800))(param_1[0x156c]);
    }
    param_1[0x1570] = 1;
  }
  param_1[0x2fc] = 0;
  return;
}

// 008A1990  FUN_008a1990  size=298  [between]
void __fastcall FUN_008a1990(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float unaff_EBX;
  float unaff_ESI;
  float fStack_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  
  if ((*(int *)(param_1 + 0x54dc) != 0) && (*(int *)(param_1 + 0x764) != 0)) {
    iVar4 = FUN_00a12210(*(undefined4 *)(param_1 + 0x54e0));
    if (iVar4 != 0) {
      local_40 = *(float *)(param_1 + 0x54f0);
      local_3c = *(float *)(param_1 + 0x54f4);
      local_38 = *(float *)(param_1 + 0x54f8);
      local_34 = *(float *)(param_1 + 0x54fc);
      D3DXVec3TransformNormal(&local_40,&local_40,iVar4 + 0x10);
      fVar1 = *(float *)(iVar4 + 0x40) + unaff_ESI;
      fVar2 = *(float *)(iVar4 + 0x44) + unaff_EBX;
      fVar3 = *(float *)(iVar4 + 0x48) + fStack_44;
      local_3c = fVar1 - *(float *)(param_1 + 0x50);
      local_38 = fVar2 - *(float *)(param_1 + 0x54);
      local_34 = fVar3 - *(float *)(param_1 + 0x58);
      fStack_30 = local_40 - *(float *)(param_1 + 0x5c);
      iVar4 = hkpCdPointCollector::hkpCdPointCollector_14(&local_3c,&fStack_2c,0,0,0x3c23d70a);
      if (iVar4 != 0) {
        *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0x50) + (fStack_2c - fVar1);
        *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x54) + (fStack_28 - fVar2);
        *(float *)(param_1 + 0x58) = (fStack_24 - fVar3) + *(float *)(param_1 + 0x58);
        *(float *)(param_1 + 0x5c) = (fStack_20 - local_40) + *(float *)(param_1 + 0x5c);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x54dc) = 0;
  return;
}

// 008A1B00  FUN_008a1b00  size=63  [between]
void __fastcall FUN_008a1b00(int param_1)

{
  undefined4 local_14;
  
  *(undefined4 *)(param_1 + 0x54e0) = 0;
  *(undefined4 *)(param_1 + 0x54f0) = 0;
  *(undefined4 *)(param_1 + 0x54f4) = 0;
  *(undefined4 *)(param_1 + 0x54f8) = 0;
  *(undefined4 *)(param_1 + 0x54fc) = local_14;
  *(undefined4 *)(param_1 + 0x5500) = 6;
  return;
}

// 008A1B40  FUN_008a1b40  size=279  [between]
void __fastcall FUN_008a1b40(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  if (0 < *(short *)(param_1 + 0x324)) {
    iVar4 = 0;
    do {
      iVar2 = *(int *)(param_1 + 800);
      iVar3 = *(int *)(*(int *)(iVar2 + 0x60 + iVar4) + 0x40);
      if (iVar3 != 0) {
        iVar3 = FUN_00fdbbd0(iVar3,"tentacle_a2");
        if (iVar3 != 0) {
          puVar1 = (uint *)(iVar2 + 0x38 + iVar4);
          *puVar1 = *puVar1 | 1;
        }
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0x70;
    } while (iVar5 < *(short *)(param_1 + 0x324));
  }
  iVar5 = 0;
  if (0 < *(short *)(param_1 + 0x324)) {
    iVar4 = 0;
    do {
      iVar2 = *(int *)(param_1 + 800);
      iVar3 = *(int *)(*(int *)(iVar2 + 0x60 + iVar4) + 0x40);
      if (iVar3 != 0) {
        iVar3 = FUN_00fdbbd0(iVar3,"tentacle_a1");
        if (iVar3 != 0) {
          puVar1 = (uint *)(iVar2 + 0x38 + iVar4);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0x70;
    } while (iVar5 < *(short *)(param_1 + 0x324));
  }
  iVar5 = 0;
  if (0 < *(short *)(param_1 + 0x324)) {
    iVar4 = 0;
    do {
      iVar2 = *(int *)(param_1 + 800);
      iVar3 = *(int *)(*(int *)(iVar2 + 0x60 + iVar4) + 0x40);
      if (iVar3 != 0) {
        iVar3 = FUN_00fdbbd0(iVar3,"tentacle_b");
        if (iVar3 != 0) {
          puVar1 = (uint *)(iVar2 + 0x38 + iVar4);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0x70;
    } while (iVar5 < *(short *)(param_1 + 0x324));
  }
  *(undefined4 *)(param_1 + 0x5424) = 0;
  *(undefined4 *)(param_1 + 0x5420) = 0;
  if (*(int *)(param_1 + 0x76c) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x76c) + 0xbac) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0x76c) + 0xbc0) = 0x3e3851ec;
  }
  return;
}

// 008A1C70  FUN_008a1c70  size=574  [between]
void __fastcall FUN_008a1c70(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_4;
  
  iVar5 = 0;
  local_4 = 0;
  iVar3 = FUN_00a8c760(0x32);
  if (iVar3 != 0) {
    local_4 = 2;
  }
  iVar3 = FUN_00a8c760(0x33);
  if (iVar3 != 0) {
    local_4 = 1;
  }
  if (*(int *)(param_1 + 0x5420) != local_4) {
    iVar3 = 0;
    if (0 < *(short *)(param_1 + 0x324)) {
      do {
        iVar2 = *(int *)(param_1 + 800);
        iVar4 = *(int *)(*(int *)(iVar2 + 0x60 + iVar5) + 0x40);
        if (iVar4 != 0) {
          iVar4 = FUN_00fdbbd0(iVar4,"tentacle_b");
          if (iVar4 != 0) {
            puVar1 = (uint *)(iVar2 + 0x38 + iVar5);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
        }
        iVar3 = iVar3 + 1;
        iVar5 = iVar5 + 0x70;
      } while (iVar3 < *(short *)(param_1 + 0x324));
    }
    iVar3 = 0;
    if (0 < *(short *)(param_1 + 0x324)) {
      iVar5 = 0;
      do {
        iVar2 = *(int *)(param_1 + 800);
        iVar4 = *(int *)(*(int *)(iVar2 + 0x60 + iVar5) + 0x40);
        if (iVar4 != 0) {
          iVar4 = FUN_00fdbbd0(iVar4,"tentacle_a1");
          if (iVar4 != 0) {
            puVar1 = (uint *)(iVar2 + 0x38 + iVar5);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
        }
        iVar3 = iVar3 + 1;
        iVar5 = iVar5 + 0x70;
      } while (iVar3 < *(short *)(param_1 + 0x324));
    }
    iVar3 = 0;
    if (0 < *(short *)(param_1 + 0x324)) {
      iVar5 = 0;
      do {
        iVar2 = *(int *)(param_1 + 800);
        iVar4 = *(int *)(*(int *)(iVar2 + 0x60 + iVar5) + 0x40);
        if (iVar4 != 0) {
          iVar4 = FUN_00fdbbd0(iVar4,"tentacle_a2");
          if (iVar4 != 0) {
            puVar1 = (uint *)(iVar2 + 0x38 + iVar5);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
        }
        iVar3 = iVar3 + 1;
        iVar5 = iVar5 + 0x70;
      } while (iVar3 < *(short *)(param_1 + 0x324));
    }
    if (local_4 == 0) {
      iVar3 = 0;
      if (0 < *(short *)(param_1 + 0x324)) {
        iVar5 = 0;
        do {
          iVar2 = *(int *)(param_1 + 800);
          iVar4 = *(int *)(*(int *)(iVar2 + 0x60 + iVar5) + 0x40);
          if (iVar4 != 0) {
            iVar4 = FUN_00fdbbd0(iVar4,"tentacle_a2");
            if (iVar4 != 0) {
              puVar1 = (uint *)(iVar2 + 0x38 + iVar5);
              *puVar1 = *puVar1 | 1;
            }
          }
          iVar3 = iVar3 + 1;
          iVar5 = iVar5 + 0x70;
        } while (iVar3 < *(short *)(param_1 + 0x324));
      }
    }
    else if (local_4 == 1) {
      iVar3 = 0;
      if (0 < *(short *)(param_1 + 0x324)) {
        iVar5 = 0;
        do {
          iVar2 = *(int *)(param_1 + 800);
          iVar4 = *(int *)(*(int *)(iVar2 + 0x60 + iVar5) + 0x40);
          if (iVar4 != 0) {
            iVar4 = FUN_00fdbbd0(iVar4,"tentacle_a1");
            if (iVar4 != 0) {
              puVar1 = (uint *)(iVar2 + 0x38 + iVar5);
              *puVar1 = *puVar1 | 1;
            }
          }
          iVar3 = iVar3 + 1;
          iVar5 = iVar5 + 0x70;
        } while (iVar3 < *(short *)(param_1 + 0x324));
        *(undefined4 *)(param_1 + 0x5420) = 1;
        return;
      }
    }
    else if ((local_4 == 2) && (iVar3 = 0, 0 < *(short *)(param_1 + 0x324))) {
      iVar5 = 0;
      do {
        iVar2 = *(int *)(param_1 + 800);
        iVar4 = *(int *)(*(int *)(iVar2 + 0x60 + iVar5) + 0x40);
        if (iVar4 != 0) {
          iVar4 = FUN_00fdbbd0(iVar4,"tentacle_b");
          if (iVar4 != 0) {
            puVar1 = (uint *)(iVar2 + 0x38 + iVar5);
            *puVar1 = *puVar1 | 1;
          }
        }
        iVar3 = iVar3 + 1;
        iVar5 = iVar5 + 0x70;
      } while (iVar3 < *(short *)(param_1 + 0x324));
      *(undefined4 *)(param_1 + 0x5420) = 2;
      return;
    }
    *(int *)(param_1 + 0x5420) = local_4;
  }
  return;
}

// 008A1F00  FUN_008a1f00  size=176  [between]
void __fastcall FUN_008a1f00(int param_1)

{
  if (*(int *)(param_1 + 0x55c4) == 0) {
    *(undefined4 *)(param_1 + 0x55c4) = 1;
    FUN_00a9f4c0("WOLF_SLOPE",0x3e4ccccd,0x10,5);
    FUN_00a9f600(0xffffffff,5,0,0,0xffffffff,0x23,0x3e4ccccd,0x10);
    FUN_00a9f600(0xffffffff,5,0,0,0,0x25,0x3e4ccccd,0x10);
    FUN_00a9f600(0xffffffff,5,0,0,1,0x24,0x3e4ccccd,0x10);
    *(undefined4 *)(param_1 + 0x55c8) = 0;
    FUN_00a947e0(5,0,0,0);
  }
  return;
}

// 008A1FE0  FUN_008a1fe0  size=139  [between]
void __fastcall FUN_008a1fe0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  param_1[0x14fa] = 0;
  if ((DAT_01bea060 & 0x68000000) == 0) {
    iVar1 = (**(code **)(*param_1 + 0x354))();
    if (iVar1 == 0) {
      iVar1 = (**(code **)(*param_1 + 0x1fc))();
      if (iVar1 == 0) {
        iVar1 = FUN_00416910(6);
        if (iVar1 == 0) {
          iVar1 = param_1[0x14fb];
          if ((iVar1 != 0) && ((*(byte *)(param_1 + 0x33f) & 8) != 0)) {
            param_1[0x14fa] = param_1[0x14fa] ^ 1;
          }
          iVar2 = FUN_00416d50(0x19);
          param_1[0x14fb] = 0;
          if ((iVar2 != 0) && (iVar1 == 0)) {
            param_1[0x14fa] = param_1[0x14fa] ^ 1;
          }
          return;
        }
      }
    }
  }
  param_1[0x14fb] = 0;
  return;
}

// 008A20D0  Pl1500::vf420  size=1  [class]
void Pl1500::vf420(void)

{
  return;
}

// 008A20E0  FUN_008a20e0  size=163  [between]
void FUN_008a20e0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00b7f610();
  switch(uVar1) {
  default:
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    return;
  case 1:
  case 4:
    *param_1 = 0;
    param_1[1] = 0xbcf5c28f;
    param_1[2] = 0;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    return;
  case 7:
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0xbdcccccd;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0xbfc90fdb;
    return;
  case 10:
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0xbe4ccccd;
    *param_2 = 0xc0490fdb;
    param_2[1] = 0;
    param_2[2] = 0;
    return;
  }
}

// 008A2220  FUN_008a2220  size=427  [between]
void __fastcall FUN_008a2220(int param_1)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  float10 fVar6;
  float10 fVar7;
  
  fVar1 = *(float *)(param_1 + 0x33f4);
  fVar2 = *(float *)(param_1 + 0x33f8);
  fVar6 = (float10)FUN_00da7500();
  fVar1 = (float)(fVar6 * (float10)fVar1);
  fVar6 = (float10)FUN_00da7570();
  fVar6 = fVar6 * (float10)(fVar2 * -1.0);
  fVar7 = (float10)200.0;
  bVar3 = fVar7 < (float10)*(float *)(param_1 + 0xd10) !=
          (fVar7 == (float10)*(float *)(param_1 + 0xd10));
  if (bVar3) {
    fVar7 = (float10)FUN_00ddba30((float)(((float10)*(float *)(param_1 + 0xd10) - fVar7) *
                                          (float10)0.00125 * fVar6 +
                                         (float10)*(float *)(param_1 + 0x94)));
    *(float *)(param_1 + 0x94) = (float)fVar7;
    fVar6 = (float10)(float)fVar6;
  }
  bVar4 = -200.0 < *(float *)(param_1 + 0xd10);
  if (!bVar4) {
    fVar6 = (float10)FUN_00ddba30((float)(((float10)*(float *)(param_1 + 0xd10) + (float10)200.0) *
                                          (float10)0.00125 * fVar6 +
                                         (float10)*(float *)(param_1 + 0x94)));
    *(float *)(param_1 + 0x94) = (float)fVar6;
  }
  fVar2 = *(float *)(param_1 + 0xd14);
  bVar5 = 200.0 < fVar2 != (fVar2 == 200.0);
  if (!NAN(fVar2) && bVar5) {
    fVar6 = (float10)FUN_00ddba30((*(float *)(param_1 + 0xd14) - 200.0) * 0.00125 * fVar1 +
                                  *(float *)(param_1 + 0x278c));
    *(float *)(param_1 + 0x278c) = (float)fVar6;
  }
  if (-200.0 < *(float *)(param_1 + 0xd14)) {
    if ((NAN(fVar2) || !bVar5) && (bVar4 && !bVar3)) goto LAB_008a2389;
  }
  else {
    fVar6 = (float10)FUN_00ddba30((*(float *)(param_1 + 0xd14) + 200.0) * 0.00125 * fVar1 +
                                  *(float *)(param_1 + 0x278c));
    *(float *)(param_1 + 0x278c) = (float)fVar6;
  }
  *(undefined4 *)(param_1 + 0x5600) = 1;
LAB_008a2389:
  if (*(float *)(param_1 + 0x278c) < -0.87266463) {
    *(undefined4 *)(param_1 + 0x278c) = 0xbf5f66f3;
  }
  if (*(float *)(param_1 + 0x278c) <= 1.0471976) {
    return;
  }
  *(undefined4 *)(param_1 + 0x278c) = 0x3f860a92;
  return;
}

// 008A23D0  FUN_008a23d0  size=122  [between]
int FUN_008a23d0(void)

{
  int iVar1;
  
  iVar1 = FUN_00b7f610();
  if (iVar1 == 1) {
    return 0x4b20f7ae;
  }
  iVar1 = FUN_00b7f610();
  if (iVar1 == 2) {
    return 0x20ceb102;
  }
  iVar1 = FUN_00b7f610();
  if (iVar1 == 3) {
    return 0x126ffcbb;
  }
  iVar1 = FUN_00b7f610();
  if (iVar1 == 4) {
    return 0x70dce4d0;
  }
  iVar1 = FUN_00b7f610();
  if (iVar1 == 7) {
    return 0x2250063d;
  }
  iVar1 = FUN_00b7f610();
  return (-(uint)(iVar1 != 10) & 0x50089f44) + 0x154b4aab;
}

// 008A2740  FUN_008a2740  size=32  [between]
undefined4 __fastcall FUN_008a2740(int param_1)

{
  if (((*(uint *)(param_1 + 0xcfc) & *(uint *)(param_1 + 0xe20)) == 0) &&
     (*(int *)(param_1 + 0x2568) == 0)) {
    return 0;
  }
  return 1;
}

// 008A2760  FUN_008a2760  size=32  [between]
undefined4 __fastcall FUN_008a2760(int param_1)

{
  if (((*(uint *)(param_1 + 0xcfc) & *(uint *)(param_1 + 0xe24)) == 0) &&
     (*(int *)(param_1 + 0x256c) == 0)) {
    return 0;
  }
  return 1;
}

// 008A2790  FUN_008a2790  size=70  [between]
undefined4 __fastcall FUN_008a2790(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00b7f610();
  if (iVar1 == 10) {
    if ((*(uint *)(param_1 + 0xcf8) & *(uint *)(param_1 + 0xe40)) != 0) {
      return 1;
    }
    iVar1 = *(int *)(param_1 + 0x55a8);
  }
  else {
    if ((*(uint *)(param_1 + 0xcfc) & *(uint *)(param_1 + 0xe40)) != 0) {
      return 1;
    }
    iVar1 = *(int *)(param_1 + 0x55a8);
  }
  if (iVar1 != 0) {
    return 1;
  }
  return 0;
}

// 008A2930  FUN_008a2930  size=26  [between]
undefined4 FUN_008a2930(void)

{
  int iVar1;
  
  iVar1 = FUN_00a8cab0();
  if ((iVar1 != 0x40000) && (iVar1 != 0x40004)) {
    return 0;
  }
  return 1;
}

// 008A2950  FUN_008a2950  size=21  [between]
bool FUN_008a2950(void)

{
  int iVar1;
  
  iVar1 = FUN_00a8cab0();
  return iVar1 - 0x30002U < 3;
}

// 008A2970  FUN_008a2970  size=26  [between]
undefined4 FUN_008a2970(void)

{
  int iVar1;
  
  iVar1 = FUN_00a8cab0();
  if ((iVar1 != 0x40000) && (iVar1 != 0x40004)) {
    return 0;
  }
  return 1;
}

// 008A2990  FUN_008a2990  size=28  [between]
undefined4 __fastcall FUN_008a2990(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x764) != 0) {
    iVar1 = FUN_008e2740();
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

// 008A29B0  FUN_008a29b0  size=38  [between]
undefined4 __fastcall FUN_008a29b0(int param_1)

{
  if (((*(int *)(param_1 + 0x1410) == 0) && (0x7ffff < *(int *)(param_1 + 0x618))) &&
     (*(int *)(param_1 + 0x618) < 0x80005)) {
    return 1;
  }
  return 0;
}

// 008A29E0  FUN_008a29e0  size=42  [between]
undefined4 FUN_008a29e0(void)

{
  int iVar1;
  
  iVar1 = FUN_00a8cbe0(0x100013);
  if (iVar1 == 0) {
    iVar1 = FUN_00a8cbe0(0x100014);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}

// 008A2A10  FUN_008a2a10  size=17  [between]
bool FUN_008a2a10(void)

{
  int iVar1;
  
  iVar1 = FUN_00a8cbe0(0x90000);
  return iVar1 != 0;
}

// 008A2B40  FUN_008a2b40  size=35  [between]
void __fastcall FUN_008a2b40(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8c760(0xb);
  if (iVar1 != 0) {
    FUN_00bda060(*(undefined4 *)(param_1 + 0x5430),0);
  }
  return;
}

// 008A2B70  FUN_008a2b70  size=152  [between]
void FUN_008a2b70(undefined4 param_1,undefined4 param_2)

{
  FUN_00a9f4c0("WOLF_DASH",param_1,param_2,0);
  FUN_00a9f600(0xffffffff,0,0,0,0,0x124,param_1,param_2);
  FUN_00a9f600(0xffffffff,0,0,0,0xffffffff,0x12e,param_1,param_2);
  FUN_00a9f600(0xffffffff,0,0,0,1,0x12f,param_1,param_2);
  FUN_00a947e0(0,0,0,0);
  return;
}

// 008A2C10  FUN_008a2c10  size=121  [between]
void FUN_008a2c10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00a9f4c0("WOLF_MOVE",param_3,param_4,0);
  FUN_00a9f600(0xffffffff,0,0,0,0,param_1,param_3,param_4);
  FUN_00a9f600(0xffffffff,0,0,0,1,param_2,param_3,param_4);
  FUN_00a947e0(0,0,0,0);
  return;
}

// 008A2C90  FUN_008a2c90  size=81  [between]
byte FUN_008a2c90(int param_1)

{
  if ((((param_1 != 0x28080) && (param_1 != 0x28081)) && (param_1 != 0x28030)) &&
     ((param_1 != 0x28033 && (param_1 != 0x28035)))) {
    if (param_1 == 0x28120) {
      return 2;
    }
    return (param_1 != 0x20130) - 1U & 3;
  }
  return 1;
}

// 008A2CF0  FUN_008a2cf0  size=132  [between]
undefined4 FUN_008a2cf0(undefined4 *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  char *pcVar4;
  bool bVar5;
  
  if (DAT_018b925c == (byte *)0x0) {
    return 0;
  }
  pcVar4 = "PD10_NMANI";
  pbVar2 = DAT_018b925c;
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < (byte)*pcVar4;
    if (bVar1 != *pcVar4) {
LAB_008a2d22:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_008a2d27;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < (byte)pcVar4[1];
    if (bVar1 != pcVar4[1]) goto LAB_008a2d22;
    pbVar2 = pbVar2 + 2;
    pcVar4 = pcVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_008a2d27:
  if (iVar3 != 0) {
    pcVar4 = "PD30_M3_RESULT";
    pbVar2 = DAT_018b925c;
    do {
      bVar1 = *pbVar2;
      bVar5 = bVar1 < (byte)*pcVar4;
      if (bVar1 != *pcVar4) {
LAB_008a2d52:
        iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_008a2d57;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar5 = bVar1 < (byte)pcVar4[1];
      if (bVar1 != pcVar4[1]) goto LAB_008a2d52;
      pbVar2 = pbVar2 + 2;
      pcVar4 = pcVar4 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_008a2d57:
    if (iVar3 != 0) {
      return 0;
    }
  }
  *param_1 = 699;
  return 1;
}

// 008A2D80  FUN_008a2d80  size=228  [between]
undefined4 FUN_008a2d80(void)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  char *pcVar4;
  bool bVar5;
  
  if (DAT_018b925c == (byte *)0x0) {
    return 0;
  }
  pcVar4 = "PD10_NMANI";
  pbVar2 = DAT_018b925c;
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < (byte)*pcVar4;
    if (bVar1 != *pcVar4) {
LAB_008a2db6:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_008a2dbb;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < (byte)pcVar4[1];
    if (bVar1 != pcVar4[1]) goto LAB_008a2db6;
    pbVar2 = pbVar2 + 2;
    pcVar4 = pcVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_008a2dbb:
  if (iVar3 != 0) {
    pcVar4 = "PD30_M1_RESULT";
    pbVar2 = DAT_018b925c;
    do {
      bVar1 = *pbVar2;
      bVar5 = bVar1 < (byte)*pcVar4;
      if (bVar1 != *pcVar4) {
LAB_008a2df0:
        iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_008a2df5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar5 = bVar1 < (byte)pcVar4[1];
      if (bVar1 != pcVar4[1]) goto LAB_008a2df0;
      pbVar2 = pbVar2 + 2;
      pcVar4 = pcVar4 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_008a2df5:
    if (iVar3 != 0) {
      pcVar4 = "PD30_M2_RESULT";
      pbVar2 = DAT_018b925c;
      do {
        bVar1 = *pbVar2;
        bVar5 = bVar1 < (byte)*pcVar4;
        if (bVar1 != *pcVar4) {
LAB_008a2e20:
          iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
          goto LAB_008a2e25;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar5 = bVar1 < (byte)pcVar4[1];
        if (bVar1 != pcVar4[1]) goto LAB_008a2e20;
        pbVar2 = pbVar2 + 2;
        pcVar4 = pcVar4 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_008a2e25:
      if (iVar3 != 0) {
        pcVar4 = "PD30_M3_RESULT";
        pbVar2 = DAT_018b925c;
        do {
          bVar1 = *pbVar2;
          bVar5 = bVar1 < (byte)*pcVar4;
          if (bVar1 != *pcVar4) {
LAB_008a2e50:
            iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
            goto LAB_008a2e55;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar2[1];
          bVar5 = bVar1 < (byte)pcVar4[1];
          if (bVar1 != pcVar4[1]) goto LAB_008a2e50;
          pbVar2 = pbVar2 + 2;
          pcVar4 = pcVar4 + 2;
        } while (bVar1 != 0);
        iVar3 = 0;
LAB_008a2e55:
        if (iVar3 != 0) {
          return 0;
        }
      }
    }
  }
  return 1;
}

// 008A2EE0  FUN_008a2ee0  size=97  [between]
undefined4 FUN_008a2ee0(int param_1)

{
  int iVar1;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x34) != 0)) {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      FUN_00a81330();
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        iVar1 = FUN_00a81330();
        if (iVar1 == 0) {
          iVar1 = 0;
        }
        else {
          FUN_00a81330();
          iVar1 = FUN_00a7c8a0();
        }
        if (*(int *)(iVar1 + 0x814) < 4) {
          return 1;
        }
      }
    }
  }
  return 0;
}

// 008A2F50  FUN_008a2f50  size=57  [between]
void __fastcall FUN_008a2f50(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x12b4) != 0) {
    iVar1 = FUN_00a81330();
    if ((iVar1 != 0) && (*(int *)(*(int *)(param_1 + 0x12b4) + 0x34) != 0)) {
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        return;
      }
    }
  }
  FUN_00a81330();
  return;
}

// 008A2F90  FUN_008a2f90  size=29  [between]
void __fastcall FUN_008a2f90(int param_1)

{
  *(undefined4 *)(param_1 + 0x56d8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x56d4) = 0;
  FUN_00a7c950();
  return;
}

// 008A2FB0  FUN_008a2fb0  size=75  [between]
void __thiscall FUN_008a2fb0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 != 0) {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x56d4) = 0x41200000;
      *(undefined4 *)(param_1 + 0x56d8) = *(undefined4 *)(param_2 + 0x40);
      FUN_00a81330();
      uVar2 = FUN_00a7c7f0();
      FUN_00a7c960(uVar2);
    }
  }
  return;
}

// 008A3000  FUN_008a3000  size=177  [between]
void __fastcall FUN_008a3000(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    iVar3 = FUN_00c4d470(*(undefined4 *)(param_1 + 0x56d8));
    if ((iVar3 == 0) || (iVar4 = FUN_00a81330(), iVar4 != iVar2)) {
      *(undefined4 *)(param_1 + 0x56d4) = 0;
      *(undefined4 *)(param_1 + 0x56d8) = 0xffffffff;
      FUN_00a7c950();
      return;
    }
    iVar2 = FUN_008a2ee0(iVar3);
    if (iVar2 == 0) {
      FUN_008a2f90();
      return;
    }
    if (0.0 < *(float *)(param_1 + 0x56d4)) {
      fVar1 = *(float *)(param_1 + 0x56d4) - 1.0;
      *(float *)(param_1 + 0x56d4) = fVar1;
      if (fVar1 < 0.0 != (fVar1 == 0.0)) {
        FUN_008a2f90();
        return;
      }
    }
  }
  return;
}

// 008A3180  FUN_008a3180  size=409  [between]
void __fastcall FUN_008a3180(int *param_1)

{
  float fVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  
  pcVar2 = *(code **)(*param_1 + 0x314);
  param_1[0x996] = 1;
  (*pcVar2)();
  uVar3 = FUN_00a8cac0();
  switch(uVar3) {
  case 0:
    FUN_00aa4120(6,0,0x3d4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x250] = 0;
    param_1[0x248] = (int)((float)param_1[0x15c5] * 60.0);
    FUN_00a8ccb0(1);
    break;
  case 1:
    break;
  case 2:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 == 0) {
      return;
    }
    FUN_00aa4080(0x2c,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    return;
  case 3:
    FUN_00b94790(0x3f800000,0x3f800000);
    param_1[0x156d] = 1;
    return;
  default:
    return;
  }
  if ((((param_1[0x250] == 0) && ((DAT_01bea094 & 0x40000000) == 0)) &&
      ((DAT_01bea060 & 0x40000000) == 0)) &&
     ((iVar4 = FUN_00416910(4), iVar4 == 0 &&
      (fVar1 = (float)param_1[0x248], param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]),
      fVar1 - (float)param_1[0x244] <= 0.0)))) {
    FUN_00aa4080(0x2b,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  return;
}

// 008A3330  FUN_008a3330  size=336  [between]
void __fastcall FUN_008a3330(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  
  pcVar1 = *(code **)(*param_1 + 0x314);
  param_1[0x996] = 1;
  (*pcVar1)();
  uVar2 = FUN_00a8cac0();
  switch(uVar2) {
  case 0:
    FUN_00aa4080(9,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_00aa4080(10,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    FUN_00b94790(0x3f800000,0x3f800000);
    param_1[0x156d] = 1;
    return;
  case 3:
    FUN_00aa4080(0xb,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 4:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      (**(code **)(*param_1 + 0x388))(0);
      return;
    }
  }
  return;
}

// 008A34A0  FUN_008a34a0  size=462  [between]
void __fastcall FUN_008a34a0(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  undefined1 auStack_20 [28];
  
  pcVar1 = *(code **)(*param_1 + 0x314);
  param_1[0x997] = 1;
  (*pcVar1)();
  uVar2 = FUN_00a8cac0();
  switch(uVar2) {
  case 0:
    FUN_00aa4080(0xc,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    param_1[0x15b9] = 1;
    FUN_00b94790(0x3f800000,0x3f800000);
    fVar4 = (float10)FUN_00a95c80(0);
    if (fVar4 < (float10)2.0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 2:
    FUN_00aa4080(0xd,0,0x3d088889,0x3f800000,0x3c000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00b94790(0x3f800000,0x3f800000);
    break;
  case 4:
    iVar3 = FUN_00b8afd0(auStack_20);
    if (iVar3 == 3) {
      uVar2 = 0xe;
    }
    else {
      uVar2 = 0xf;
    }
    FUN_00aa4080(uVar2,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    param_1[0x15b9] = 1;
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      (**(code **)(*param_1 + 0x388))(0);
    }
  }
  pcVar1 = *(code **)(*param_1 + 0x308);
  param_1[0x23d] = param_1[0x34c];
  (*pcVar1)(0x3e99999a,0x3ae4c388,0x3f060a92,0);
  return;
}

// 008A36C0  FUN_008a36c0  size=169  [between]
void __fastcall FUN_008a36c0(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0xb2,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    if (param_1[0x15c0] != 0) {
      param_1[0x15c0] = 0;
      FUN_00a8c9b0(0,0x34,0,0);
    }
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (iVar1 != 1) {
    return;
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x388))(0);
  }
  return;
}

// 008A3770  FUN_008a3770  size=149  [between]
void __fastcall FUN_008a3770(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(*param_1 + 0x314);
  param_1[0x99a] = 1;
  (*pcVar1)();
  iVar2 = FUN_00a8cac0();
  if (iVar2 == 0) {
    FUN_00aa4080(0xed,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (iVar2 != 1) {
    return;
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x388))(0);
  }
  return;
}

// 008A3810  FUN_008a3810  size=149  [between]
void __fastcall FUN_008a3810(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(*param_1 + 0x314);
  param_1[0x99a] = 1;
  (*pcVar1)();
  iVar2 = FUN_00a8cac0();
  if (iVar2 == 0) {
    FUN_00aa4080(0xed,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (iVar2 != 1) {
    return;
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x388))(0);
  }
  return;
}

// 008A38B0  FUN_008a38b0  size=171  [between]
void __fastcall FUN_008a38b0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(*param_1 + 0x314);
  param_1[0x99a] = 1;
  (*pcVar1)();
  iVar2 = FUN_00a8cac0();
  if (iVar2 == 0) {
    FUN_00aa4080(0xdf,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    (**(code **)(*param_1 + 0x220))(0x41700000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (iVar2 != 1) {
    return;
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x388))(0);
  }
  return;
}

// 008A39A0  FUN_008a39a0  size=171  [between]
void __fastcall FUN_008a39a0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  (**(code **)(*param_1 + 0x314))();
  param_1[0x99a] = 1;
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    uVar2 = 0x112;
    iVar1 = FUN_00a8cbe0(0xa0001);
    if (iVar1 != 0) {
      uVar2 = 0x113;
    }
    FUN_00aa4080(uVar2,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (iVar1 != 1) {
    return;
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x388))(0);
  }
  return;
}

// 008A3A50  Pl1500::vf14C  size=32  [class]
bool Pl1500::vf14C(int param_1)

{
  if (param_1 == 0x83) {
    return true;
  }
  return param_1 == 0x39;
}

// 008A3A70  Pl1500::vf158  size=5  [class]
undefined4 Pl1500::vf158(void)

{
  return 0;
}

// 008A3A90  Pl1500::vf34C  size=12  [class]
uint Pl1500::vf34C(void)

{
  return DAT_01bea090 >> 0x1e & 1;
}

// 008A3AA0  FUN_008a3aa0  size=36  [callgraph]
void __fastcall FUN_008a3aa0(int *param_1)

{
  (**(code **)(*param_1 + 800))(0x3c888889);
                    /* WARNING: Could not recover jumptable at 0x008a3ac2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x3f0))();
  return;
}

// 008A3AD0  FUN_008a3ad0  size=36  [callgraph]
void __fastcall FUN_008a3ad0(int *param_1)

{
  (**(code **)(*param_1 + 800))(0x3c888889);
                    /* WARNING: Could not recover jumptable at 0x008a3af2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x3f0))();
  return;
}

// 008A3B00  FUN_008a3b00  size=183  [callgraph]
void __fastcall FUN_008a3b00(int *param_1)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  
  (**(code **)(*param_1 + 0x314))();
  iVar3 = FUN_00a8cac0();
  if (iVar3 == 0) {
    FUN_00aa4120(6,0,0x3eaaaaab,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x42200000;
  }
  else if (iVar3 != 1) {
    return;
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  fVar1 = (float)param_1[0x248];
  param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
  if (fVar1 - (float)param_1[0x244] <= 0.0) {
    pcVar2 = *(code **)(*param_1 + 0x388);
    param_1[0x118] = 0x3dcccccd;
    param_1[0xd9] = param_1[0xd9] | 0x100000;
    (*pcVar2)(0);
  }
  return;
}

// 008A3BC0  FUN_008a3bc0  size=106  [callgraph]
void __fastcall FUN_008a3bc0(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x314))();
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4120(6,0,0x3eaaaaab,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (iVar1 != 1) {
    return;
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  return;
}

// 008A3C60  FUN_008a3c60  size=18  [callgraph]
void FUN_008a3c60(void)

{
  FUN_00b94790(0x3f800000,0x3f800000);
  return;
}

// 008A3C80  FUN_008a3c80  size=127  [callgraph]
void __fastcall FUN_008a3c80(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x137,0,0x3d088889,0x3f800000,0x8000080,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (iVar1 != 1) {
    return;
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x388))(0);
  }
  return;
}

// 008A3D00  FUN_008a3d00  size=216  [callgraph]
void __thiscall FUN_008a3d00(int *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  param_1[0x9b5] = 0;
  param_1[0x991] = 0;
  FUN_00b7aa50();
  (**(code **)(*param_1 + 0x39c))();
  FUN_00a94bc0(2,0x3c888889);
  FUN_00a94bc0(3,0x3c888889);
  FUN_00a94bc0(4,0x3c888889);
  FUN_00a94bc0(6,0x3c888889);
  FUN_00a94bc0(7,0x3c888889);
  FUN_00a94bc0(8,0x3c888889);
  FUN_00a8caf0(0xe0000,0,0,0);
  param_1[0x1032] = param_2;
  uVar2 = 0x10;
  uVar1 = (**(code **)**(undefined4 **)(param_1[500] + 4))(0x10,param_1[500]);
  FUN_00d825d0(uVar1,uVar2);
  return;
}

// 008A3DE0  FUN_008a3de0  size=294  [callgraph]
void __fastcall FUN_008a3de0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  pcVar1 = *(code **)(*param_1 + 0x314);
  param_1[0x99a] = 1;
  (*pcVar1)();
  if (param_1[0x187] == 0) {
    pcVar1 = *(code **)(*param_1 + 0x370);
    param_1[0x250] = 0;
    param_1[0x251] = 0;
    iVar2 = (*pcVar1)();
    FUN_00aa4080(0x16c - (uint)(iVar2 != 0),0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    iVar2 = (**(code **)(*param_1 + 0x370))();
    if (iVar2 == 0) {
      param_1[0x251] = 1;
    }
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  FUN_00b8cd60();
  if (param_1[0x250] == 0) {
    iVar2 = FUN_00a8c760(0xb);
    if (iVar2 != 0) {
      param_1[0x250] = 1;
      FUN_00b7ab80(param_1[0x1021],param_1[0x1022]);
    }
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 0;
    iVar2 = (**(code **)(*param_1 + 0x370))(0,0,0);
    FUN_00a8caf0((-(uint)(iVar2 != 0) & 0xfffffff8) + 0x10008,uVar3,uVar4,uVar5);
  }
  return;
}

// 008A5290  Pl1500::vf54  size=111  [class]
void __fastcall Pl1500::vf54(int *param_1)

{
  int iVar1;
  
  PlBaseDLC::vf54();
  if ((param_1[499] != 0) && (param_1[500] != 0)) {
    FUN_00d82a20(param_1[500]);
  }
  if (param_1[0x15b1] != 0) {
    (**(code **)(*param_1 + 800))(param_1[0x15b0]);
  }
  param_1[0x15b1] = 0;
  if (param_1[0xeee] != 0) {
    iVar1 = (**(code **)(*param_1 + 0x1d8))();
    if (iVar1 == 0) {
      FUN_008a18d0(1);
    }
  }
  return;
}

// 008A5300  Pl1500::vf248  size=90  [class]
void __fastcall Pl1500::vf248(int param_1)

{
  int iVar1;
  
  FUN_00e00900();
  if (*(int *)(param_1 + 0x4f0) != 0) {
    FUN_00e03080(*(int *)(param_1 + 0x4f0),0);
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00e03080(iVar1,1);
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00e03080(iVar1,5);
  }
  return;
}

// 008A5360  Pl1500::vf2F8  size=32  [class]
void __fastcall Pl1500::vf2F8(int *param_1)

{
  if (((DAT_01bea060 & 0x4a000400) == 0) && (param_1[0x139] == 0)) {
                    /* WARNING: Could not recover jumptable at 0x008a537d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x38c))();
    return;
  }
  return;
}

// 008A5380  Pl1500::vf10C  size=29  [class]
undefined4 Pl1500::vf10C(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0x11501) {
    return 0;
  }
  uVar1 = FUN_00a81330();
  return uVar1;
}

// 008A53A0  Pl1500::vf380  size=144  [class]
bool __fastcall Pl1500::vf380(int param_1)

{
  int iVar1;
  
  if ((((*(int *)(param_1 + 0x4e4) != 0) || ((DAT_01bea060 & 0x2000000) != 0)) ||
      ((DAT_01bea060 & 0x40000000) != 0)) ||
     ((((DAT_01bea060 & 0x8000000) != 0 || ((DAT_01bea060 & 0x20000000) != 0)) ||
      (iVar1 = FUN_00416910(0x15), iVar1 != 0)))) {
    return false;
  }
  iVar1 = FUN_0099a2e0();
  if ((iVar1 != 0) && (iVar1 = FUN_00d466f0(), iVar1 != 0)) {
    return false;
  }
  iVar1 = *(int *)(param_1 + 0x618);
  if ((((iVar1 != 0x10000) && (iVar1 != 0x10003)) && (iVar1 != 0x10002)) && (iVar1 != 0x10004)) {
    iVar1 = FUN_00a8c760(0x3b);
    return iVar1 != 0;
  }
  return true;
}

// 008A5430  Pl1500::vf214  size=97  [class]
void __thiscall Pl1500::vf214(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  if (*(int *)(param_1 + 0x4f0) != 0) {
    if (param_4 == 0) {
      *(undefined4 *)(param_1 + 0x734) = 0;
      FUN_00a7c910(param_3,param_2,0);
      FUN_00e04a00(param_3,param_2,param_4);
      FUN_00a7c910();
      FUN_00e049a0();
      return;
    }
    *(undefined4 *)(param_1 + 0x738) = param_3;
    *(int *)(param_1 + 0x734) = param_4;
    *(undefined4 *)(param_1 + 0x730) = param_2;
  }
  return;
}

// 008A54A0  Pl1500::vf218  size=239  [class]
void __fastcall Pl1500::vf218(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (*(int *)(param_1 + 0x4f0) != 0) {
    if ((0 < *(int *)(param_1 + 0x73c)) &&
       (iVar1 = *(int *)(param_1 + 0x73c) + -1, *(int *)(param_1 + 0x73c) = iVar1, iVar1 < 1)) {
      uVar3 = *(undefined4 *)(param_1 + 0x740);
      uVar2 = *(undefined4 *)(param_1 + 0x744);
      uVar4 = 0;
      *(undefined4 *)(param_1 + 0x730) = uVar3;
      FUN_00a7c910(uVar2,uVar3,0);
      FUN_00e04a00(uVar2,uVar3,uVar4);
      FUN_00a7c910();
      FUN_00e049a0();
    }
    if ((0 < *(int *)(param_1 + 0x748)) &&
       (iVar1 = *(int *)(param_1 + 0x748) + -1, *(int *)(param_1 + 0x748) = iVar1, iVar1 < 1)) {
      uVar3 = *(undefined4 *)(param_1 + 0x74c);
      uVar2 = *(undefined4 *)(param_1 + 0x750);
      uVar4 = 0;
      *(undefined4 *)(param_1 + 0x730) = uVar3;
      FUN_00a7c910(uVar2,uVar3,0);
      FUN_00e04a00(uVar2,uVar3,uVar4);
      FUN_00a7c910();
      FUN_00e049a0();
    }
    if ((0 < *(int *)(param_1 + 0x734)) &&
       (iVar1 = *(int *)(param_1 + 0x734) + -1, *(int *)(param_1 + 0x734) = iVar1, iVar1 < 1)) {
      uVar3 = *(undefined4 *)(param_1 + 0x730);
      uVar2 = *(undefined4 *)(param_1 + 0x738);
      uVar4 = 0;
      FUN_00a7c910(uVar2,uVar3,0);
      FUN_00e04a00(uVar2,uVar3,uVar4);
      FUN_00a7c910();
      FUN_00e049a0();
      return;
    }
  }
  return;
}

// 008A5590  FUN_008a5590  size=837  [between]
undefined4 __thiscall FUN_008a5590(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  int iVar4;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  
  iVar4 = FUN_00a12290(0x14);
  if (iVar4 == 0) {
    local_40 = *(undefined4 *)(param_1 + 0x40);
    local_3c = *(undefined4 *)(param_1 + 0x44);
    local_38 = *(undefined4 *)(param_1 + 0x48);
    uVar1 = *(undefined4 *)(param_1 + 0x4c);
  }
  else {
    local_40 = *(undefined4 *)(iVar4 + 0x40);
    local_3c = *(undefined4 *)(iVar4 + 0x44);
    local_38 = *(undefined4 *)(iVar4 + 0x48);
    uVar1 = *(undefined4 *)(iVar4 + 0x4c);
  }
  iVar4 = FUN_00a12290(0x19);
  if (iVar4 == 0) {
    local_50 = *(undefined4 *)(param_1 + 0x40);
    local_4c = *(undefined4 *)(param_1 + 0x44);
    local_48 = *(undefined4 *)(param_1 + 0x48);
    uVar2 = *(undefined4 *)(param_1 + 0x4c);
  }
  else {
    local_50 = *(undefined4 *)(iVar4 + 0x40);
    local_4c = *(undefined4 *)(iVar4 + 0x44);
    local_48 = *(undefined4 *)(iVar4 + 0x48);
    uVar2 = *(undefined4 *)(iVar4 + 0x4c);
  }
  local_30 = *(float *)(param_1 + 0x40f0);
  local_2c = *(float *)(param_1 + 0x40f4);
  local_28 = *(float *)(param_1 + 0x40f8);
  local_24 = *(undefined4 *)(param_1 + 0x40fc);
  if (((local_30 != 0.0) || (local_2c != 0.0)) || (local_28 != 0.0)) {
    fVar3 = local_28 * local_28 + local_30 * local_30 + local_2c * local_2c;
    if (fVar3 < 0.0 == (fVar3 == 0.0)) {
      FUN_00ddf460(&local_30,&local_30);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_30 = 0.0;
      local_2c = 1.0;
      local_28 = 0.0;
    }
  }
  local_20 = *(float *)(param_1 + 0x4110);
  local_1c = *(float *)(param_1 + 0x4114);
  local_18 = *(float *)(param_1 + 0x4118);
  local_14 = *(undefined4 *)(param_1 + 0x411c);
  if (((local_20 != 0.0) || (local_1c != 0.0)) || (local_18 != 0.0)) {
    fVar3 = local_18 * local_18 + local_20 * local_20 + local_1c * local_1c;
    if (fVar3 < 0.0 == (fVar3 == 0.0)) {
      FUN_00ddf460(&local_20,&local_20);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
    }
  }
  if ((*(float *)(param_1 + 0x4118) <= 0.0) || (*(float *)(param_1 + 0x40f8) <= 0.0)) {
    if (*(float *)(param_1 + 0x4118) <= *(float *)(param_1 + 0x40f8)) {
      if (0.5 <= *(float *)(param_1 + 0x4118)) goto LAB_008a58a8;
    }
    else if (0.5 <= *(float *)(param_1 + 0x40f8)) goto LAB_008a5868;
    if (ABS(*(float *)(param_1 + 0x4114)) <= ABS(*(float *)(param_1 + 0x40f4))) {
LAB_008a5868:
      *param_2 = local_50;
      param_2[1] = local_4c;
      param_2[2] = local_48;
      param_2[3] = uVar2;
      param_2[1] = *(undefined4 *)(param_1 + 0x44);
      return 3;
    }
  }
  else if (*(float *)(param_1 + 0x4114) < *(float *)(param_1 + 0x40f4)) {
    *param_2 = local_50;
    param_2[1] = local_4c;
    param_2[2] = local_48;
    param_2[3] = uVar2;
    param_2[1] = *(undefined4 *)(param_1 + 0x44);
    return 3;
  }
LAB_008a58a8:
  *param_2 = local_40;
  param_2[1] = local_3c;
  param_2[2] = local_38;
  param_2[3] = uVar1;
  param_2[1] = *(undefined4 *)(param_1 + 0x44);
  return 2;
}

// 008A58E0  FUN_008a58e0  size=274  [between]
undefined4 __fastcall FUN_008a58e0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_14;
  
  lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>_2(1);
  puVar1 = (undefined4 *)FUN_009f8b60();
  iVar2 = CollisionCapsule::CollisionCapsule(1,*puVar1,0);
  if (iVar2 == 0) {
    FUN_00dd5650(&DAT_01649e98);
    return 0;
  }
  uVar3 = FUN_00a8d2a0();
  *(undefined4 *)(iVar2 + 0x380) = 0;
  FUN_00d77c50(*(undefined4 *)(param_1 + 0x4f0),0);
  *(undefined4 *)(iVar2 + 0x594) = 0x3f333334;
  *(undefined4 *)(iVar2 + 0x590) = 0x3f266666;
  *(undefined4 *)(iVar2 + 0x570) = 0;
  *(undefined4 *)(iVar2 + 0x574) = 0xbea66666;
  *(undefined4 *)(iVar2 + 0x578) = 0x3e800000;
  *(undefined4 *)(iVar2 + 0x57c) = local_14;
  *(undefined4 *)(iVar2 + 0x580) = 0x3fc90fdb;
  *(undefined4 *)(iVar2 + 0x584) = 0;
  *(undefined4 *)(iVar2 + 0x588) = 0;
  *(undefined4 *)(iVar2 + 0x58c) = local_14;
  FUN_00d771d0(1);
  _strncpy_s((char *)(iVar2 + 0x394),0x20,"WolfBody",0x1f);
  FUN_00a93a00(iVar2,uVar3);
  FUN_00d7b0f0();
  FUN_00d7b890();
  return 1;
}

// 008A5AA0  FUN_008a5aa0  size=87  [between]
void __thiscall FUN_008a5aa0(int param_1,int param_2)

{
  if (param_2 != 0) {
    if ((*(int *)(param_2 + 0xa8) != 0) && (param_2 != param_1)) {
      FUN_008a5aa0(*(int *)(param_2 + 0xa8));
    }
    if ((*(ushort *)(param_2 + 0xa2) & 0x4002) == 0) {
      FUN_00ddb590(param_2 + 0x60,param_2 + 0x90);
    }
    if ((*(ushort *)(param_2 + 0xa2) & 0x8004) == 0) {
      FUN_00a15310();
    }
  }
  return;
}

// 008A5B30  FUN_008a5b30  size=218  [between]
undefined4 __thiscall FUN_008a5b30(int param_1,float *param_2,float param_3)

{
  float fVar1;
  float10 fVar2;
  undefined1 *puStack_74;
  float fStack_70;
  undefined1 *puStack_6c;
  undefined1 *puStack_68;
  int iStack_64;
  undefined1 auStack_58 [8];
  undefined1 local_50 [76];
  
  iStack_64 = param_1 + 0x10;
  puStack_68 = local_50;
  puStack_6c = (undefined1 *)0x8a5b47;
  D3DXMatrixTranspose();
  puStack_6c = auStack_58;
  fStack_70 = param_3;
  puStack_74 = (undefined1 *)&puStack_68;
  D3DXVec3TransformNormal();
  puStack_74 = (undefined1 *)0x0;
  if ((fStack_70 == 0.0) && ((float)puStack_6c == 0.0)) {
    return 0;
  }
  fVar1 = fStack_70 * fStack_70 + (float)puStack_6c * (float)puStack_6c;
  if (fVar1 < 0.0 == (fVar1 == 0.0)) {
    FUN_00ddf460(&puStack_74,&puStack_74);
    fVar2 = (float10)fpatan((float10)(float)puStack_6c,(float10)fStack_70);
    *param_2 = (float)fVar2;
    return 1;
  }
  FUN_00dd5650(&DAT_0163d0ac);
  fVar2 = (float10)fpatan((float10)0,(float10)1);
  *param_2 = (float)fVar2;
  return 1;
}

// 008A5C10  FUN_008a5c10  size=327  [between]
void __thiscall FUN_008a5c10(int *param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  int iVar2;
  float fVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 *puStack_dc;
  undefined1 *puStack_d8;
  float local_d4;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  float fStack_9c;
  undefined4 uStack_98;
  uint uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  char *pcStack_84;
  undefined1 auStack_6c [8];
  undefined1 auStack_64 [12];
  undefined1 auStack_58 [8];
  undefined1 local_50 [76];
  
  local_c0 = 0;
  local_bc = 0;
  puStack_d8 = local_50;
  local_b8 = (float)param_3;
  local_d4 = (float)param_1[0x1572] * 0.5235988;
  puStack_dc = (undefined1 *)0x8a5c4d;
  D3DXMatrixRotationX();
  puStack_dc = auStack_58;
  puVar4 = &uStack_c8;
  puVar5 = puVar4;
  D3DXVec3TransformNormal(puVar4,puVar4);
  iVar2 = (**(code **)(*param_1 + 0x84))();
  fVar3 = *(float *)(iVar2 + 4);
  D3DXMatrixRotationY(auStack_64,fVar3);
  D3DXVec3TransformNormal(&puStack_dc,&puStack_dc,auStack_6c);
  puStack_d8 = (undefined1 *)(fVar3 + (float)param_1[0x10]);
  fVar3 = (float)param_1[0x12];
  fVar1 = (float)param_1[0x13] + (float)puStack_dc;
  local_d4 = (float)param_1[0x11] + (float)puVar4 + 0.8;
  iVar2 = FUN_009f8b40();
  local_b8 = (float)puStack_d8;
  fStack_b4 = local_d4;
  uStack_94 = iVar2 << 0x10 | 6;
  uStack_c8 = param_2;
  uStack_c4 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  uStack_a8 = 0;
  uStack_88 = 0;
  pcStack_84 = "Pl1500_Slope";
  uStack_a4 = 0xbfcccccd;
  uStack_a0 = 0;
  uStack_98 = 0x3dcccccd;
  fStack_b0 = fVar3 + (float)puVar5;
  fStack_ac = fVar1;
  fStack_9c = fVar1;
  FUN_0090fb00(&uStack_c8);
  return;
}

// 008A5D60  FUN_008a5d60  size=54  [between]
void __fastcall FUN_008a5d60(int param_1)

{
  if (*(int *)(param_1 + 0x56a8) != 0) {
    (**(code **)(*(int *)(param_1 + 0x5610) + 8))(0x3f800000,0,0);
    FUN_00eaa840();
    return;
  }
  return;
}

// 008A5DA0  FUN_008a5da0  size=133  [between]
undefined4 __fastcall FUN_008a5da0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00a82090("Pl1500_ChainSaw",0x11501,0);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_01649edc);
    return 0;
  }
  FUN_00a8c5f0(0,*(undefined4 *)(param_1 + 0x4f0),iVar1,0x66,0xffffffff);
  uVar2 = FUN_00a7c7f0();
  FUN_00a7c960(uVar2);
  iVar1 = FUN_00a7c8a0();
  if (iVar1 != 0) {
    uVar2 = 1;
    FUN_00a92fb0(1);
    FUN_00e08640(uVar2);
    *(int *)(iVar1 + 0x518) = param_1;
  }
  return 1;
}

// 008A5E30  FUN_008a5e30  size=349  [between]
void __fastcall FUN_008a5e30(int param_1)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined *puVar6;
  
  piVar2 = (int *)FUN_00b7d110();
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    puVar6 = &DAT_01be9dbc;
    (**(code **)(*piVar2 + 4))(&DAT_01be9dbc);
    iVar3 = FUN_00dd6d80(puVar6);
    piVar2 = (int *)(-(uint)(iVar3 != 0) & (uint)piVar2);
  }
  iVar3 = FUN_00a8c760(0x14);
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0x141c) = 0;
  }
  else {
    fVar1 = *(float *)(param_1 + 0x141c) + 0.125;
    *(float *)(param_1 + 0x141c) = fVar1;
    if (1.0 <= fVar1) {
      *(undefined4 *)(param_1 + 0x141c) = 0x3f800000;
    }
    if (piVar2 == (int *)0x0) {
      return;
    }
    FUN_00bdc060();
  }
  if (piVar2 == (int *)0x0) {
    return;
  }
  uVar4 = *(undefined4 *)(param_1 + 0x141c);
  iVar5 = 0;
  iVar3 = 0;
  if (0 < (short)piVar2[0xc9]) {
    do {
      *(undefined4 *)(piVar2[200] + 0x1c + iVar5) = uVar4;
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 0x70;
    } while (iVar3 < (short)piVar2[0xc9]);
  }
  if (*(float *)(param_1 + 0x141c) == 0.0) {
    (**(code **)(*piVar2 + 0x20))();
    FUN_00a94bc0(3,0);
  }
  fVar1 = *(float *)(param_1 + 0x141c);
  if (NAN(fVar1) || 0.01 < fVar1 == (fVar1 == 0.01)) {
    return;
  }
  uVar4 = FUN_00b7f610();
  switch(uVar4) {
  case 1:
  case 4:
    uVar4 = 0xbd;
    break;
  case 2:
  case 3:
    uVar4 = 0xbc;
    break;
  default:
    goto switchD_008a5f2f_caseD_5;
  case 7:
    uVar4 = 0xbe;
    break;
  case 10:
    uVar4 = 0xbf;
  }
  FUN_00aa4120(uVar4,3,0,0x3f800000,0x40200,0xbf800000,0x3f800000);
switchD_008a5f2f_caseD_5:
                    /* WARNING: Could not recover jumptable at 0x008a5f87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0x1c))();
  return;
}

// 008A5FC0  FUN_008a5fc0  size=149  [between]
void __fastcall FUN_008a5fc0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_00a9e060(6);
  uVar1 = *(undefined4 *)(param_1 + 0x4f0);
  uVar5 = 0;
  uVar4 = 0x700;
  uVar2 = FUN_00a81330(0x700,0);
  FUN_00a8c5f0(6,uVar1,uVar2,uVar4,uVar5);
  iVar3 = FUN_00a943e0(6);
  if (iVar3 != 0) {
    FUN_008a20e0(&local_30,&local_20);
    *(undefined4 *)(iVar3 + 0x30) = local_30;
    *(undefined4 *)(iVar3 + 0x34) = local_2c;
    *(undefined4 *)(iVar3 + 0x38) = local_28;
    *(undefined4 *)(iVar3 + 0x3c) = local_24;
    *(undefined4 *)(iVar3 + 0x20) = local_20;
    *(undefined4 *)(iVar3 + 0x24) = local_1c;
    *(undefined4 *)(iVar3 + 0x28) = local_18;
    *(undefined4 *)(iVar3 + 0x2c) = local_14;
  }
  return;
}

// 008A6060  FUN_008a6060  size=688  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_008a6060(int param_1)

{
  float fVar1;
  int iVar2;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  uint local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined *local_20;
  undefined4 local_1c;
  
  local_80 = DAT_01bea380;
  DAT_01dc1314 = 1;
  local_7c = DAT_01bea384;
  local_78 = DAT_01bea388;
  local_74 = DAT_01bea38c;
  local_90 = DAT_01bea390 - DAT_01bea380;
  local_8c = DAT_01bea394 - DAT_01bea384;
  local_88 = DAT_01bea398 - DAT_01bea388;
  local_84 = DAT_01bea39c - DAT_01bea38c;
  if (((local_90 != 0.0) || (local_8c != 0.0)) || (local_88 != 0.0)) {
    fVar1 = local_88 * local_88 + local_90 * local_90 + local_8c * local_8c;
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      FUN_00ddf460(&local_90,&local_90);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_88 = 0.0;
      local_8c = 1.0;
      local_90 = local_88;
    }
    local_90 = local_90 * 200.0;
    local_8c = local_8c * 200.0;
    local_88 = local_88 * 200.0;
    local_84 = local_84 * 200.0;
  }
  local_70 = local_90 + local_80;
  local_6c = local_8c + local_7c;
  local_68 = local_88 + local_78;
  local_64 = local_84 + local_74;
  *(float *)(param_1 + 0x276c) = local_64;
  *(float *)(param_1 + 0x2760) = local_70;
  *(float *)(param_1 + 0x2764) = local_6c;
  *(float *)(param_1 + 0x2768) = local_68;
  iVar2 = FUN_009f8b40();
  local_50 = local_80;
  local_30 = iVar2 << 0x10 | 0x1e;
  local_4c = local_7c;
  local_48 = local_78;
  local_44 = local_74;
  local_40 = local_70;
  local_2c = 0;
  local_24 = 0;
  local_3c = local_6c;
  local_1c = 0;
  local_38 = local_68;
  local_34 = local_64;
  local_28 = 8;
  local_20 = &DAT_0163e7c8;
  iVar2 = RayCastSingleHitWork::RayCastSingleHitWork_2(&local_60,0,0,0,&local_50);
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0x2760) = local_60;
    *(undefined4 *)(param_1 + 0x2764) = local_5c;
    *(undefined4 *)(param_1 + 0x2768) = local_58;
    *(undefined4 *)(param_1 + 0x276c) = local_54;
  }
  _DAT_01dc4eb0 = *(undefined4 *)(param_1 + 0x2760);
  _DAT_01dc4eb4 = *(undefined4 *)(param_1 + 0x2764);
  _DAT_01dc4eb8 = *(undefined4 *)(param_1 + 0x2768);
  _DAT_01dc4ebc = *(undefined4 *)(param_1 + 0x276c);
  return;
}

// 008A6310  FUN_008a6310  size=290  [between]
void __thiscall FUN_008a6310(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined4 *)(param_2 + 0x114) = 0x11;
  *(undefined4 *)(param_2 + 4) = 0x31014;
  *(undefined4 *)(param_2 + 0x110) = 0x26;
  uVar3 = FUN_009f8b40();
  *(undefined4 *)(param_2 + 0x170) = uVar3;
  uVar1 = *(undefined1 *)(param_1 + 0x5738);
  uVar3 = *(undefined4 *)(param_1 + 0x5730);
  uVar2 = *(undefined4 *)(param_1 + 0x572c);
  *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_1 + 0x5734);
  *(undefined4 *)(param_2 + 0x14) = uVar2;
  *(undefined4 *)(param_2 + 0x1c) = uVar3;
  *(undefined1 *)(param_2 + 0x20) = uVar1;
  *(undefined1 *)(param_2 + 0x21) = 10;
  *(uint *)(param_2 + 0x9c) = *(uint *)(param_2 + 0x9c) | 0x10000000;
  *(undefined4 *)(param_2 + 0x10) = 0x57;
  *(uint *)(param_2 + 0xa0) = *(uint *)(param_2 + 0xa0) | 0x8800;
  uVar3 = FUN_00b7f610();
  switch(uVar3) {
  case 2:
    *(undefined4 *)(param_2 + 0x114) = 0x29;
    *(undefined4 *)(param_2 + 4) = 0x31031;
    *(undefined4 *)(param_2 + 0x110) = 0x52;
    *(undefined4 *)(param_2 + 0x10) = 0x59;
    *(uint *)(param_2 + 0x9c) = *(uint *)(param_2 + 0x9c) | 0x20;
    return;
  case 3:
    *(undefined4 *)(param_2 + 0x114) = 0x29;
    *(undefined4 *)(param_2 + 4) = 0x31041;
    *(undefined4 *)(param_2 + 0x110) = 0x53;
    *(undefined4 *)(param_2 + 0x10) = 0x5a;
    return;
  case 4:
    *(undefined4 *)(param_2 + 4) = 0x31051;
    *(undefined4 *)(param_2 + 0x110) = 0x51;
    *(undefined4 *)(param_2 + 0x10) = 0x58;
    *(uint *)(param_2 + 0x9c) = *(uint *)(param_2 + 0x9c) | 0x20000;
    return;
  case 7:
    *(undefined4 *)(param_2 + 0x114) = 0x10;
    *(undefined4 *)(param_2 + 4) = 0x310a1;
  }
  return;
}

// 008A6450  FUN_008a6450  size=107  [between]
undefined4 FUN_008a6450(void)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  uVar1 = FUN_008a23d0();
  iVar2 = FUN_0094e5e0(uVar1);
  if (iVar2 != 0) {
    uVar1 = FUN_008a23d0();
    piVar3 = (int *)FUN_0094e5e0(uVar1);
    if ((piVar3 != (int *)0x0) && (iVar2 = (**(code **)(*piVar3 + 0x44))(), iVar2 == 0)) {
      return 1;
    }
    uVar1 = FUN_008a23d0();
    piVar3 = (int *)FUN_0094e5e0(uVar1);
    if ((piVar3 != (int *)0x0) && (iVar2 = (**(code **)(*piVar3 + 0x3c))(), iVar2 != 0)) {
      return 1;
    }
  }
  return 0;
}

// 008A64C0  FUN_008a64c0  size=295  [between]
void __fastcall FUN_008a64c0(int param_1)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    iVar1 = FUN_00a8c760(0x34);
    if (iVar1 == 0) {
      pcVar3 = *(code **)(*piVar2 + 0x20);
    }
    else {
      pcVar3 = *(code **)(*piVar2 + 0x1c);
    }
    (*pcVar3)();
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 == (int *)0x0) {
      return;
    }
    iVar1 = FUN_00a8c760(0x13);
    if (iVar1 == 0) {
      if ((*(byte *)(piVar2 + 0x130) & 1) == 0) {
        return;
      }
      (**(code **)(*piVar2 + 0x20))();
    }
    else {
      if ((*(byte *)(piVar2 + 0x130) & 1) != 0) goto LAB_008a65d9;
      (**(code **)(*piVar2 + 0x1c))();
      uVar4 = 0x174;
      iVar1 = FUN_00a9f760(0x17a);
      if (iVar1 != 0) {
        uVar4 = 0x17e;
      }
      FUN_00aa4520(uVar4,*(undefined4 *)(param_1 + 0x4f0),0,0,0x3f800000,0x8000000,0xbf800000,
                   0x3f800000);
      piVar2[0x14] = 0;
      piVar2[0x15] = 0;
      piVar2[0x16] = 0;
      piVar2[0x17] = 0;
      piVar2[0x24] = 0;
      piVar2[0x25] = 0;
      piVar2[0x26] = 0;
      piVar2[0x27] = 0;
    }
    if ((*(byte *)(piVar2 + 0x130) & 1) != 0) {
LAB_008a65d9:
                    /* WARNING: Could not recover jumptable at 0x008a65e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar2 + 100))();
      return;
    }
  }
  return;
}

// 008A65F0  FUN_008a65f0  size=141  [between]
undefined4 __fastcall FUN_008a65f0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = FUN_00a82090("Pl1500_KnifeSet",0x11504,0);
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_01649f14);
    return 0;
  }
  uVar2 = FUN_00a7c7f0();
  FUN_00a7c960(uVar2);
  piVar3 = (int *)FUN_00a7c8a0();
  if (piVar3 != (int *)0x0) {
    uVar2 = 1;
    FUN_00a92fb0(1);
    FUN_00e08640(uVar2);
    (**(code **)(*piVar3 + 0x20))();
  }
  FUN_00a8c5f0(2,*(undefined4 *)(param_1 + 0x4f0),iVar1,0x700,0);
  return 1;
}

// 008A66B0  FUN_008a66b0  size=103  [between]
void __fastcall FUN_008a66b0(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x314))();
  if ((param_1[0x1514] != 0) && (param_1[0x1d9] != 0)) {
    param_1[0x1514] = 0;
    FUN_008e5c50(param_1[0x1513]);
  }
  iVar1 = FUN_00a92f90();
  if (iVar1 != 0) {
    iVar1 = FUN_00a92f90();
    FUN_00e26e90();
    *(undefined4 *)(iVar1 + 0xe4) = 0x3f800000;
    *(undefined4 *)(iVar1 + 0xe8) = 0x3f800000;
    *(undefined4 *)(iVar1 + 0xec) = 0x3f800000;
  }
  return;
}

// 008A67A0  FUN_008a67a0  size=346  [between]
void __thiscall FUN_008a67a0(int param_1,float *param_2,int *param_3,int param_4)

{
  code *pcVar1;
  float fVar2;
  float10 fVar3;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  pcVar1 = *(code **)(*param_3 + 0x140);
  *param_2 = (float)param_3[0x10];
  param_2[1] = (float)param_3[0x11];
  param_2[2] = (float)param_3[0x12];
  param_2[3] = (float)param_3[0x13];
  fVar3 = (float10)(*pcVar1)();
  param_2[1] = (float)(fVar3 + (float10)param_2[1]);
  if (param_4 != 0) {
    fStack_20 = *(float *)(param_1 + 0x50) - (float)param_3[0x10];
    fStack_1c = *(float *)(param_1 + 0x54) - (float)param_3[0x11];
    fStack_18 = *(float *)(param_1 + 0x58) - (float)param_3[0x12];
    fStack_14 = *(float *)(param_1 + 0x5c) - (float)param_3[0x13];
    if (((fStack_20 != 0.0) || (fStack_1c != 0.0)) || (fVar2 = 0.0, fStack_18 != 0.0)) {
      fVar2 = fStack_18 * fStack_18 + fStack_20 * fStack_20 + fStack_1c * fStack_1c;
      if (fVar2 < 0.0 == (fVar2 == 0.0)) {
        FUN_00ddf460(&fStack_20,&fStack_20);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        fStack_18 = 0.0;
        fStack_1c = 1.0;
        fStack_20 = 0.0;
      }
      fStack_20 = fStack_20 * 0.0;
      fStack_1c = fStack_1c * 0.0;
      fVar2 = fStack_18 * 0.0;
      fStack_14 = fStack_14 * 0.0;
    }
    *param_2 = *param_2 + fStack_20;
    param_2[1] = param_2[1] + fStack_1c;
    param_2[2] = fVar2 + param_2[2];
    param_2[3] = fStack_14 + param_2[3];
  }
  return;
}

// 008A6900  FUN_008a6900  size=266  [between]
undefined4 FUN_008a6900(float *param_1)

{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float local_20;
  float local_1c;
  float local_18;
  
  if (((*param_1 != 0.0) || (param_1[1] != 0.0)) || (param_1[2] != 0.0)) {
    fVar1 = param_1[1] * param_1[1] + *param_1 * *param_1 + param_1[2] * param_1[2];
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      FUN_00ddf460(&local_20,param_1);
      fVar2 = (float10)local_1c;
      fVar3 = (float10)local_20;
      fVar4 = (float10)local_18;
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      fVar3 = (float10)0;
      fVar2 = (float10)1;
      fVar4 = fVar3;
    }
    fVar2 = (float10)fpatan(fVar2,SQRT(fVar3 * fVar3 + fVar4 * fVar4));
    if (-fVar2 < (float10)-0.34906584) {
      return 1;
    }
  }
  return 0;
}

// 008A6A10  FUN_008a6a10  size=218  [between]
void __thiscall FUN_008a6a10(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_70;
  float local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_50;
  float local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  uint local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  char *local_1c;
  
  local_70 = *(undefined4 *)(param_1 + 0x40);
  local_6c = *(float *)(param_1 + 0x44);
  local_68 = *(undefined4 *)(param_1 + 0x48);
  local_64 = *(undefined4 *)(param_1 + 0x4c);
  if (*(int *)(param_1 + 0x764) != 0) {
    FUN_008e4320(&local_70);
  }
  local_6c = local_6c + 0.1;
  iVar1 = FUN_009f8b40();
  local_50 = local_70;
  local_4c = local_6c;
  local_60 = param_2;
  local_2c = iVar1 << 0x10 | 6;
  local_48 = local_68;
  local_44 = local_64;
  local_5c = 0;
  local_40 = 0;
  local_28 = 0;
  local_24 = 0;
  local_3c = 0xbf000000;
  local_20 = 0;
  local_1c = "Pl1500MoveBlock";
  local_38 = 0;
  local_34 = local_64;
  local_30 = 0x3d4ccccd;
  FUN_0090fb00(&local_60);
  return;
}

// 008A6B40  FUN_008a6b40  size=315  [between]
bool FUN_008a6b40(undefined4 param_1,float *param_2,float *param_3,float *param_4)

{
  int *piVar1;
  int iVar2;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined1 local_20 [28];
  
  piVar1 = (int *)FUN_009f8b60();
  local_30 = *param_3 - *param_2;
  local_2c = param_3[1] - param_2[1];
  local_28 = param_3[2] - param_2[2];
  local_24 = param_3[3] - param_2[3];
  iVar2 = FUN_0090eea0(0,local_20,param_2,0x3f000000,&local_30,*piVar1 << 0x10 | 6,
                       "isDiveKill AHEAD");
  if (iVar2 == 0) {
    piVar1 = (int *)FUN_009f8b60();
    local_30 = *param_4 - *param_3;
    local_2c = param_4[1] - param_3[1];
    local_28 = param_4[2] - param_3[2];
    local_24 = param_4[3] - param_3[3];
    iVar2 = FUN_0090eea0(0,local_20,param_3,0x3f000000,&local_30,*piVar1 << 0x10 | 6,
                         "isDiveKill DOWN");
    if (iVar2 == 0) {
      piVar1 = (int *)FUN_009f8b60();
      local_30 = 0.0;
      local_2c = 4.0;
      local_28 = 0.0;
      iVar2 = FUN_0090eea0(0,local_20,param_4,0x3f000000,&local_30,*piVar1 << 0x10 | 6,
                           "isDiveKill HEAD");
      return iVar2 == 0;
    }
  }
  return false;
}

// 008A6C80  FUN_008a6c80  size=688  [between]
void __fastcall FUN_008a6c80(int *param_1)

{
  float fVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  float10 fVar5;
  undefined4 uVar6;
  float local_28;
  undefined1 local_20 [28];
  
  uVar3 = FUN_00a8cac0();
  switch(uVar3) {
  case 0:
    FUN_008a2c10(0xc,0x12,0x3e088889,0x8002000);
    param_1[0x248] = 0;
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    param_1[0x15b9] = 1;
    FUN_00b94790(0x3f800000,0x3f800000);
    local_28 = (SQRT((float)param_1[0x34a]) - 250.0) * 0.0013333333;
    if (0.0 < local_28) {
      if (1.0 < local_28) {
        local_28 = 1.0;
      }
    }
    else {
      local_28 = 0.0;
    }
    fVar1 = (float)param_1[0x248];
    fVar5 = (float10)FUN_00fdc1f0();
    fVar5 = ((float10)1 - fVar5) * ((float10)local_28 - (float10)fVar1) + (float10)fVar1;
    param_1[0x248] = (int)(float)fVar5;
    FUN_00a947e0(0,0,0,(float)fVar5);
    fVar5 = (float10)FUN_00a95c80(0);
    if (fVar5 < (float10)2.0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 2:
    FUN_008a2c10(0xd,0x13,0x3e088889,0x3e000);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00b94790(0x3f800000,0x3f800000);
    local_28 = (SQRT((float)param_1[0x34a]) - 250.0) * 0.0013333333;
    fVar1 = 0.0;
    if ((local_28 <= 0.0) || (fVar1 = 1.0, 1.0 < local_28)) {
      local_28 = fVar1;
    }
    fVar1 = (float)param_1[0x248];
    fVar5 = (float10)FUN_00fdc1f0();
    fVar5 = ((float10)1 - fVar5) * ((float10)local_28 - (float10)fVar1) + (float10)fVar1;
    param_1[0x248] = (int)(float)fVar5;
    FUN_00a947e0(0,0,0,(float)fVar5);
    break;
  case 4:
    iVar4 = FUN_00b8afd0(local_20);
    if (iVar4 == 3) {
      uVar6 = 0x14;
      uVar3 = 0xe;
    }
    else {
      uVar6 = 0x15;
      uVar3 = 0xf;
    }
    FUN_008a2c10(uVar3,uVar6,0x3e088889,0x8002000);
    FUN_00a947e0(0,0,0,param_1[0x248]);
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 5:
    param_1[0x15b9] = 1;
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      (**(code **)(*param_1 + 0x388))(0);
    }
  }
  pcVar2 = *(code **)(*param_1 + 0x308);
  param_1[0x23d] = param_1[0x34c];
  (*pcVar2)(0x3e99999a,0x3ae4c388,0x3f060a92,0);
  return;
}

// 008A6F50  FUN_008a6f50  size=833  [between]
void __fastcall FUN_008a6f50(int *param_1)

{
  float fVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  float10 fVar5;
  float fStack_8;
  
  (**(code **)(*param_1 + 0x314))();
  param_1[0x1512] = 1;
  uVar3 = FUN_00a8cac0();
  switch(uVar3) {
  case 0:
    if (((param_1[0x1505] != 0x10004) || (iVar4 = FUN_00a9f760(0x126), iVar4 == 0)) ||
       (iVar4 = FUN_00a959f0(0), 5 < iVar4)) {
      param_1[0x248] = 0;
      iVar4 = FUN_00a9f760(0x1f);
      if (iVar4 == 0) {
        FUN_00aa4080(0x123,0,0x3dcccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      }
      FUN_00b94790(0x3f800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      goto switchD_008a6f7e_default;
    }
    FUN_008a2b70(0x3d088889,0x3c000);
    param_1[0x187] = 3;
    goto LAB_008a6fd1;
  case 1:
    param_1[0x15b9] = 1;
    FUN_00b94790(0x3f800000,0x3f800000);
    param_1[0x248] = (int)((float)param_1[0x244] + (float)param_1[0x248]);
    fVar5 = (float10)FUN_00a95c80(0);
    if (fVar5 < (float10)2.0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    goto switchD_008a6f7e_default;
  case 2:
    FUN_008a2b70(0x3d088889,0x3c000);
    param_1[0x249] = 0;
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 3:
    break;
  case 4:
    if ((float)param_1[0x15c3] < (float)param_1[0x248] ==
        ((float)param_1[0x15c3] == (float)param_1[0x248])) {
      if ((float)param_1[0x15c4] < (float)param_1[0x248] ==
          ((float)param_1[0x15c4] == (float)param_1[0x248])) {
        (**(code **)(*param_1 + 0x388))(0);
        goto switchD_008a6f7e_default;
      }
      uVar3 = 0x127;
    }
    else {
      uVar3 = 0x126;
    }
    FUN_00aa4080(uVar3,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    param_1[0x15b9] = 1;
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      (**(code **)(*param_1 + 0x388))(0);
    }
  default:
    goto switchD_008a6f7e_default;
  }
  param_1[0x248] = (int)((float)param_1[0x248] + (float)param_1[0x244]);
  fStack_8 = (float)param_1[0x27c] * 57.29578 * 0.033333335;
  fVar1 = 1.0;
  if (-1.0 < fStack_8) {
    if (1.0 < fStack_8) goto LAB_008a710a;
  }
  else {
    fVar1 = -1.0;
LAB_008a710a:
    fStack_8 = fVar1;
  }
  fVar1 = (float)param_1[0x249];
  fVar5 = (float10)FUN_00fdc1f0();
  fVar5 = ((float10)1 - fVar5) * ((float10)fStack_8 - (float10)fVar1) + (float10)fVar1;
  param_1[0x249] = (int)(float)fVar5;
  FUN_00a947e0(0,0,0,(float)fVar5);
LAB_008a6fd1:
  FUN_00b94790(0x3f800000,0x3f800000);
switchD_008a6f7e_default:
  pcVar2 = *(code **)(*param_1 + 0x308);
  param_1[0x23d] = param_1[0x34c];
  (*pcVar2)(0x3e99999a,0x3ae4c388,0x3f060a92,0);
  param_1[0x2fc] = 1;
  return;
}

// 008A72B0  Pl1500::vf130  size=516  [class]
undefined4 __thiscall Pl1500::vf130(int param_1,ushort *param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 unaff_EBX;
  uint unaff_EBP;
  undefined1 uStack_8;
  
  iVar2 = FUN_00dd3500(0x110,&DAT_01b7c0b8);
  if ((iVar2 == 0) || (iVar2 = CollisionAttackData::CollisionAttackData_3(), iVar2 == 0)) {
    FUN_00dd5650(&DAT_01649f9c);
    return 0;
  }
  puVar1 = *(uint **)(iVar2 + 8);
  puVar1[5] = *(uint *)(param_1 + 0x4f0);
  uVar3 = FUN_00a7c7f0();
  FUN_00a7c960(uVar3);
  uVar4 = FUN_00b7ed30(*param_2);
  (**(code **)(**(int **)(param_1 + 0x754) + 0x10))(*param_2);
  (**(code **)(**(int **)(param_1 + 0x754) + 0x20))(*param_2);
  uVar5 = (**(code **)(**(int **)(param_1 + 0x754) + 0x18))(*param_2);
  puVar1[3] = unaff_EBP;
  puVar1[1] = uVar4;
  *(undefined1 *)(puVar1 + 4) = uStack_8;
  puVar1[2] = uVar5;
  *puVar1 = (uint)*param_2;
  FUN_00a9a1c0(puVar1);
  switch(*param_2) {
  case 4:
    *puVar1 = 0x1b8;
    break;
  default:
    if (*puVar1 == 0x4f) goto LAB_008a7463;
    goto LAB_008a746f;
  case 6:
    *puVar1 = 0x1b9;
    break;
  case 8:
    *puVar1 = 0x1ba;
    break;
  case 10:
    *puVar1 = 0x1bb;
    break;
  case 0xc:
    *puVar1 = 0x1bc;
    goto LAB_008a748d;
  case 0xe:
    *puVar1 = 0x1bd;
    break;
  case 0x10:
    *puVar1 = 0x1be;
    break;
  case 0x12:
    *puVar1 = 0x1c0;
    goto LAB_008a748d;
  case 0x14:
    *puVar1 = 0x1c1;
    break;
  case 0x16:
    *puVar1 = 0x1c9;
    break;
  case 0x18:
    *puVar1 = 0x4f;
LAB_008a7463:
    puVar1[0x23] = puVar1[0x23] | 0x800;
    puVar1[0x23] = puVar1[0x23] | 0x8000;
LAB_008a746f:
    if (*puVar1 == 0x92) {
LAB_008a7477:
      puVar1[0x23] = puVar1[0x23] | 0x8000;
    }
    if ((*puVar1 != 0x1c0) && (*puVar1 != 0x1bc)) break;
LAB_008a748d:
    *(undefined2 *)(puVar1 + 0x21) = 5;
    break;
  case 0x1a:
    *puVar1 = 0x92;
    goto LAB_008a7477;
  case 0x1c:
    *puVar1 = 0x1bf;
    break;
  case 0x1e:
    *puVar1 = 0x1c4;
    break;
  case 0x20:
    *puVar1 = 0x1c5;
    break;
  case 0x22:
    *puVar1 = 0x1c6;
    break;
  case 0x24:
    *puVar1 = 0x1c7;
    break;
  case 0x26:
    *puVar1 = 0x1c8;
    break;
  case 0x34:
    *puVar1 = 0x2f;
  }
  puVar1[0x24] = puVar1[0x24] | 0x800;
  DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
  return unaff_EBX;
}

// 008A7540  FUN_008a7540  size=703  [callgraph]
void __fastcall FUN_008a7540(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  float local_24;
  undefined1 auStack_20 [28];
  
  FUN_00b7d8b0();
  iVar2 = FUN_00a8cac0();
  if (iVar2 == 0) {
    if (param_1[0x1505] == 0x20004) {
      param_1[0x988] = 1;
    }
    else if ((param_1[0x1505] != 0x20000) || (2 < param_1[0x988])) {
      param_1[0x988] = 0;
    }
    iVar2 = param_1[0x988];
    param_1[0x988] = iVar2 + 1;
    FUN_00aa4080(*(undefined4 *)(&DAT_01649fcc + iVar2 * 4),0,0x3d088889,0x3f800000,0x8000000,
                 0xbf800000,0x3f800000);
    param_1[0x1578] = 1;
    FUN_00b86010(1);
    piVar3 = (int *)FUN_00b7b200();
    if ((piVar3 != (int *)0x0) && (iVar2 = (**(code **)(*piVar3 + 0x228))(), iVar2 != 0)) {
      FUN_00b7b230(auStack_20);
      FUN_00a8e880(auStack_20);
      iVar2 = FUN_00b86410();
      if (iVar2 != 0) {
        (**(code **)(*param_1 + 0x308))(0x3f800000,0x393702d3,0x40490fdb,0);
      }
    }
    DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
    FUN_00a8d280();
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (iVar2 != 1) {
    return;
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  local_24 = -1.0;
  param_1[0x469] = 1;
  iVar2 = FUN_00a8c760(5);
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_00b7b200();
    if (((piVar3 == (int *)0x0) || (iVar2 = FUN_00b86410(), iVar2 == 0)) ||
       (iVar2 = (**(code **)(*piVar3 + 0x228))(), iVar2 == 0)) {
      if (90000.0 < (float)param_1[0x34a]) {
        pcVar1 = *(code **)(*param_1 + 0x308);
        param_1[0x23d] = param_1[0x34c];
        (*pcVar1)(0x3e99999a,0x3ae4c388,0x3e8efa35,0);
      }
    }
    else {
      if (param_1[899] == 0) {
        param_1[0x4aa] = (int)(param_1 + 0x4dc);
      }
      local_24 = ((float)param_1[0x12] - (float)piVar3[0x12]) *
                 ((float)param_1[0x12] - (float)piVar3[0x12]) +
                 ((float)param_1[0x10] - (float)piVar3[0x10]) *
                 ((float)param_1[0x10] - (float)piVar3[0x10]);
      FUN_00b7b270(0x3e99999a,0x393702d3,0x3e0efa35,0);
    }
  }
  if (((param_1[0x150a] != 0) || ((0.0 <= local_24 && (local_24 < 4.0)))) &&
     (iVar2 = FUN_00a92f90(), iVar2 != 0)) {
    iVar2 = FUN_00a92f90();
    FUN_00e26e90();
    *(undefined4 *)(iVar2 + 0xe4) = 0x3e19999a;
    *(undefined4 *)(iVar2 + 0xe8) = 0x3e19999a;
    *(undefined4 *)(iVar2 + 0xec) = 0x3e19999a;
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x388))(0);
  }
  return;
}

// 008A7800  FUN_008a7800  size=679  [callgraph]
void __fastcall FUN_008a7800(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  float local_24;
  float afStack_20 [2];
  float fStack_18;
  
  FUN_00b7d8b0();
  iVar2 = FUN_00a8cac0();
  if (iVar2 == 0) {
    FUN_00aa4080(0x7d,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00b86010(1);
    piVar3 = (int *)FUN_00b7b200();
    if ((piVar3 != (int *)0x0) && (iVar2 = (**(code **)(*piVar3 + 0x228))(), iVar2 != 0)) {
      FUN_00b7b230(afStack_20);
      FUN_00a8e880(afStack_20);
      iVar2 = FUN_00b86410();
      if ((iVar2 != 0) &&
         (((float)param_1[0x12] - fStack_18) * ((float)param_1[0x12] - fStack_18) +
          ((float)param_1[0x10] - afStack_20[0]) * ((float)param_1[0x10] - afStack_20[0]) < 100.0))
      {
        (**(code **)(*param_1 + 0x308))(0x3f800000,0x393702d3,0x40490fdb,0);
      }
    }
    param_1[0x157c] = 1;
    DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
    FUN_00a8d280();
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (iVar2 != 1) {
    return;
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  local_24 = -1.0;
  param_1[0x469] = 1;
  iVar2 = FUN_00a8c760(5);
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_00b7b200();
    if (((piVar3 == (int *)0x0) || (iVar2 = FUN_00b86410(), iVar2 == 0)) ||
       (iVar2 = (**(code **)(*piVar3 + 0x228))(), iVar2 == 0)) {
      if (90000.0 < (float)param_1[0x34a]) {
        pcVar1 = *(code **)(*param_1 + 0x308);
        param_1[0x23d] = param_1[0x34c];
        (*pcVar1)(0x3e99999a,0x3ae4c388,0x3e8efa35,0);
      }
    }
    else {
      if (param_1[899] == 0) {
        param_1[0x4aa] = (int)(param_1 + 0x4dc);
      }
      local_24 = ((float)param_1[0x12] - (float)piVar3[0x12]) *
                 ((float)param_1[0x12] - (float)piVar3[0x12]) +
                 ((float)param_1[0x10] - (float)piVar3[0x10]) *
                 ((float)param_1[0x10] - (float)piVar3[0x10]);
      FUN_00b7b270(0x3e99999a,0x393702d3,0x3e0efa35,0);
    }
  }
  if (((param_1[0x150a] != 0) || ((0.0 <= local_24 && (local_24 < 4.0)))) &&
     (iVar2 = FUN_00a92f90(), iVar2 != 0)) {
    iVar2 = FUN_00a92f90();
    FUN_00e26e90();
    *(undefined4 *)(iVar2 + 0xe4) = 0x3e19999a;
    *(undefined4 *)(iVar2 + 0xe8) = 0x3e19999a;
    *(undefined4 *)(iVar2 + 0xec) = 0x3e19999a;
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x388))(0);
  }
  return;
}

// 008A7AB0  FUN_008a7ab0  size=675  [callgraph]
void __fastcall FUN_008a7ab0(int *param_1)

{
  int iVar1;
  int *piVar2;
  float local_24;
  float afStack_20 [2];
  float fStack_18;
  
  FUN_00b7d8b0();
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0x78,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
    FUN_00b86010(1);
    piVar2 = (int *)FUN_00b7b200();
    if ((piVar2 != (int *)0x0) && (iVar1 = (**(code **)(*piVar2 + 0x228))(), iVar1 != 0)) {
      FUN_00b7b230(afStack_20);
      FUN_00a8e880(afStack_20);
      iVar1 = FUN_00b86410();
      if ((iVar1 != 0) &&
         (((float)param_1[0x12] - fStack_18) * ((float)param_1[0x12] - fStack_18) +
          ((float)param_1[0x10] - afStack_20[0]) * ((float)param_1[0x10] - afStack_20[0]) < 100.0))
      {
        (**(code **)(*param_1 + 0x308))(0x3f800000,0x393702d3,0x40490fdb,0);
      }
    }
    param_1[0x157d] = 1;
    FUN_00a8d280();
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (iVar1 != 1) {
    if (iVar1 != 2) {
      return;
    }
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 == 0) {
      return;
    }
    (**(code **)(*param_1 + 0x388))(0);
    return;
  }
  local_24 = -1.0;
  param_1[0x469] = 1;
  iVar1 = FUN_00a8c760(5);
  if ((((iVar1 != 0) && (piVar2 = (int *)FUN_00b7b200(), piVar2 != (int *)0x0)) &&
      (iVar1 = FUN_00b86410(), iVar1 != 0)) &&
     (iVar1 = (**(code **)(*piVar2 + 0x228))(), iVar1 != 0)) {
    FUN_008a0b30();
    local_24 = ((float)param_1[0x12] - (float)piVar2[0x12]) *
               ((float)param_1[0x12] - (float)piVar2[0x12]) +
               ((float)param_1[0x10] - (float)piVar2[0x10]) *
               ((float)param_1[0x10] - (float)piVar2[0x10]);
    FUN_00b7b270(0x3e99999a,0x393702d3,0x3e0efa35,0);
  }
  if (((param_1[0x150a] != 0) || ((0.0 <= local_24 && (local_24 < 4.0)))) &&
     (iVar1 = FUN_00a92f90(), iVar1 != 0)) {
    iVar1 = FUN_00a92f90();
    FUN_00e26e90();
    *(undefined4 *)(iVar1 + 0xe4) = 0x3e19999a;
    *(undefined4 *)(iVar1 + 0xe8) = 0x3e19999a;
    *(undefined4 *)(iVar1 + 0xec) = 0x3e19999a;
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00aa4080(0x7a,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  return;
}

// 008A7D60  FUN_008a7d60  size=432  [callgraph]
void __fastcall FUN_008a7d60(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = FUN_00a8cac0();
  if (iVar2 == 0) {
    FUN_00aa4080(0x72,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00b86010(1);
    FUN_00b7b270(0x3e99999a,0x393702d3,0x3f860a92,0);
    DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
    FUN_00a8d280();
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x9f4] = 0;
  }
  else if (iVar2 != 1) {
    return;
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  param_1[0x469] = 1;
  iVar2 = FUN_00a8c760(5);
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_00b7b200();
    if (((piVar3 == (int *)0x0) || (iVar2 = FUN_00b86410(), iVar2 == 0)) ||
       (iVar2 = (**(code **)(*piVar3 + 0x228))(), iVar2 == 0)) {
      if (90000.0 < (float)param_1[0x34a]) {
        pcVar1 = *(code **)(*param_1 + 0x308);
        param_1[0x23d] = param_1[0x34c];
        (*pcVar1)(0x3e99999a,0x3ae4c388,0x3e8efa35,0);
      }
    }
    else {
      FUN_00b7b270(0x3e99999a,0x393702d3,0x3e0efa35,0);
    }
  }
  FUN_00b8d800(0x40400000,0x3fa66666);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x388))(0);
  }
  return;
}

// 008A7F10  FUN_008a7f10  size=336  [callgraph]
void __fastcall FUN_008a7f10(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x314))();
  iVar1 = FUN_00a8c760(0x12);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x318))();
  }
  iVar1 = FUN_00a92f90();
  if (iVar1 != 0) {
    FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e22f10(0);
  }
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00b7aa80();
    FUN_00aa4080(0xb9,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00b86010(0);
    FUN_00b7b270(0x3f800000,0x393702d3,0x40490fdb,0);
    DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (iVar1 != 1) {
    return;
  }
  param_1[0x469] = 1;
  iVar1 = FUN_00a8c760(5);
  if (iVar1 != 0) {
    FUN_00b7b270(0x3e99999a,0x393702d3,0x3e8efa35,0);
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x388))(0);
  }
  return;
}

// 008A8060  FUN_008a8060  size=310  [callgraph]
void __fastcall FUN_008a8060(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1[0x187] == 0) {
    uVar3 = 0xcb;
    if ((0.7853982 < (float)param_1[0x245]) && ((float)param_1[0x245] < 2.3561945)) {
      uVar3 = 0xcd;
    }
    if (((float)param_1[0x245] < -0.7853982) && (-2.3561945 < (float)param_1[0x245])) {
      uVar3 = 0xcc;
    }
    if ((2.3561945 < (float)param_1[0x245]) || ((float)param_1[0x245] < -2.3561945)) {
      uVar3 = 0xca;
    }
    FUN_00aa4080(uVar3,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
    FUN_00b895d0();
    param_1[0x24] = 0;
    (**(code **)(*param_1 + 0x220))(0x41200000);
    piVar1 = (int *)FUN_00c1b9a0();
    (**(code **)(*piVar1 + 0x30))();
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x388))(0);
  }
  return;
}

// 008A82E0  FUN_008a82e0  size=552  [callgraph]
void __fastcall FUN_008a82e0(int *param_1)

{
  float fVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  
  pcVar2 = *(code **)(*param_1 + 0x314);
  param_1[0x99a] = 1;
  (*pcVar2)();
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0xef,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b7a800();
    DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
    FUN_00b895d0();
    param_1[0x24] = 0;
    (**(code **)(*param_1 + 0x220))(0x41700000);
    piVar3 = (int *)FUN_00c1b9a0();
    (**(code **)(*piVar3 + 0x30))();
    param_1[0x248] = 0x43960000;
    param_1[0x250] = 0;
  case 1:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar4 = FUN_00a8c760(0xb);
    if (iVar4 != 0) {
      param_1[0x250] = 1;
    }
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 2:
    FUN_00aa4080(0xf0,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x250] = 1;
  case 3:
    FUN_00b94790(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] <= 0.0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 4:
    FUN_00aa4080(0xf1,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x250] = 0;
  case 5:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      (**(code **)(*param_1 + 0x388))(0);
    }
  }
  if (param_1[0x250] != 0) {
    param_1[0x20b] = 5;
    *(undefined2 *)(param_1 + 0x209) = 3;
    param_1[0x20a] = 0x78;
    FUN_00cbc8f0(0x4000,1);
  }
  return;
}

// 008A8520  FUN_008a8520  size=376  [callgraph]
void __fastcall FUN_008a8520(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x314))();
  (**(code **)(*param_1 + 0x220))(0x41200000);
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    DAT_01dc08d4 = 0;
    DAT_01dc08bc = 0;
    DAT_01dc08c8 = 0;
    FUN_00b7aa80();
    FUN_00cbc9c0(1,0);
    FUN_00aa4080(0x30,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    iVar1 = FUN_008a2cf0(&stack0xfffffff8);
    if (iVar1 != 0) {
      FUN_00aa92c0(0xffff);
    }
    iVar1 = FUN_008a2d80();
    if (iVar1 != 0) {
      FUN_00e5e1b0("bgm_VR_Clear_Tutorial_DLC3");
    }
    param_1[0x224] = 0;
    param_1[0x225] = 0;
    param_1[0x226] = 0;
    param_1[0x187] = param_1[0x187] + 1;
    if ((DAT_01bea060 & 0x2000000) != 0) {
      DAT_01bea060 = DAT_01bea060 & 0xfdffffff;
    }
  }
  else if (iVar1 != 1) {
    return;
  }
  FUN_00db3e80(0,0,&DAT_01bea1d0);
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e22f10(0);
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    DAT_01bea090 = DAT_01bea090 | 0x4000000;
    (**(code **)(*param_1 + 0x388))(0);
  }
  return;
}

// 008A86A0  FUN_008a86a0  size=1136  [callgraph]
void __fastcall FUN_008a86a0(int *param_1)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  float10 fVar6;
  float fStack_30;
  float fStack_2c;
  undefined4 uStack_28;
  float local_20;
  float local_1c;
  float local_18;
  
  local_20 = (float)param_1[0x342];
  local_1c = (float)param_1[0x343];
  local_18 = 0.0;
  bVar4 = 40000.0 <= local_1c * local_1c + local_20 * local_20;
  (**(code **)(*param_1 + 0x314))();
  iVar5 = FUN_00a8cac0();
  if (iVar5 == 0) {
    param_1[599] = 0;
    if ((DAT_01bea094 & 0x100000) == 0) {
      FUN_00aa4080(0x38,0,0x3e2aaaab,0x3f800000,0,0xbf800000,0x3f800000);
    }
    else {
      FUN_00a9f4c0("COMU WALK",0x3e088889,0,0);
      FUN_00a9f600(0xffffffff,0,0,0,0,0x43,0x3e088889,0);
      FUN_00a9f600(0xffffffff,0,0,0,1,0x38,0x3e088889,0);
      FUN_00a9f600(0xffffffff,0,0,0,0xffffffff,0x39,0x3e088889,0);
      FUN_00a9f600(0xffffffff,0,1,0,0,0x3b,0x3e088889,0);
      FUN_00a9f600(0xffffffff,0,0xffffffff,0,0,0x3a,0x3e088889,0);
      FUN_00a9f600(0xffffffff,0,0xffffffff,0,1,0x33,0x3e088889,0);
      FUN_00a9f600(0xffffffff,0,1,0,1,0x34,0x3e088889,0);
      FUN_00a9f600(0xffffffff,0,0xffffffff,0,0xffffffff,0x35,0x3e088889,0);
      FUN_00a9f600(0xffffffff,0,1,0,0xffffffff,0x36,0x3e088889,0);
      iVar5 = FUN_00a92f90();
      FUN_00e26e90();
      *(undefined4 *)(iVar5 + 0xe4) = 0;
      *(undefined4 *)(iVar5 + 0xe8) = 0;
      *(undefined4 *)(iVar5 + 0xec) = 0;
      param_1[599] = 1;
    }
    param_1[0x248] = 0;
    param_1[0x249] = 0;
    param_1[0x187] = param_1[0x187] + 1;
LAB_008a88a8:
    FUN_00b94790(0x3f800000,0x3f800000);
    if ((DAT_01bea094 & 0x100000) == 0) goto LAB_008a8acc;
    if (param_1[599] == 0) {
      param_1[0x187] = 0;
    }
    else {
      fStack_30 = 0.0;
      fStack_2c = 0.0;
      uStack_28 = 0;
      if (bVar4) {
        fVar1 = local_18 * local_18 + local_20 * local_20 + local_1c * local_1c;
        if (fVar1 < 0.0 == (fVar1 == 0.0)) {
          FUN_00ddf460(&fStack_30,&local_20);
        }
        else {
          FUN_00dd5650(&DAT_0163d0ac);
          fStack_30 = 0.0;
          fStack_2c = 1.0;
          uStack_28 = 0;
        }
      }
      fVar1 = ABS(fStack_2c);
      if (fVar1 < ABS(fStack_30)) {
        fVar1 = ABS(fStack_30);
      }
      fVar2 = (float)param_1[0x248];
      fVar6 = (float10)FUN_00fdc1f0();
      param_1[0x248] =
           (int)(float)(((float10)1 - fVar6) *
                        ((float10)fStack_30 / (float10)fVar1 - (float10)fVar2) + (float10)fVar2);
      fVar2 = (float)param_1[0x249];
      fVar6 = (float10)FUN_00fdc1f0();
      fVar6 = ((float10)1 - fVar6) * (-((float10)fStack_2c / (float10)fVar1) - (float10)fVar2) +
              (float10)fVar2;
      param_1[0x249] = (int)(float)fVar6;
      FUN_00a947e0(0,param_1[0x248],0,(float)fVar6);
    }
  }
  else if (iVar5 == 1) goto LAB_008a88a8;
  if ((DAT_01bea094 & 0x100000) != 0) {
    if ((200.0 < (float)param_1[0x344]) || ((float)param_1[0x344] < -200.0)) {
      fVar1 = (float)param_1[0x344];
      fVar2 = (float)param_1[0xd01];
      fVar6 = (float10)FUN_00da7570();
      fVar6 = (float10)FUN_00ddba30((float)((float10)(float)param_1[0x25] -
                                           fVar6 * (float10)((fVar1 - 200.0) * 0.00125 * fVar2)));
      param_1[0x25] = (int)(float)fVar6;
    }
    if (!bVar4) {
      return;
    }
    FUN_00b7cf60((float)param_1[0xd00] * (float)param_1[0x244],param_1[0x34c]);
    return;
  }
LAB_008a8acc:
  pcVar3 = *(code **)(*param_1 + 0x308);
  param_1[0x23d] = param_1[0x34c];
  (*pcVar3)(0x3dcccccd,0x3ae4c388,0x3e32b8c2,0);
  return;
}

// 008A8CB0  FUN_008a8cb0  size=267  [callgraph]
bool __thiscall FUN_008a8cb0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined *puVar3;
  
  if (((DAT_01bea090 & 0x8000) != 0) ||
     ((((byte)DAT_01bea094 & 0x20) != 0 &&
      ((*(float *)(param_1 + 0x341c) <= 0.0 || (*(int *)(param_1 + 0x3450) == 0)))))) {
    return false;
  }
  iVar2 = FUN_00b80980();
  if (iVar2 != 0) {
    return false;
  }
  puVar1 = *(undefined4 **)(param_1 + 2000);
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = &DAT_01be9ef4;
    (**(code **)*puVar1)(&DAT_01be9ef4);
    iVar2 = FUN_00dd6d80(puVar3);
    if (iVar2 != 0) {
      iVar2 = FUN_00d82980(1);
      if (iVar2 != 0) {
        FUN_00d82de0(*(undefined4 *)(param_1 + 2000));
      }
      if (puVar1[0xbc] != 0) {
        iVar2 = FUN_00b7a500();
        if (iVar2 == 0) {
          puVar1[0xbc] = 0;
        }
        if (puVar1[0xbc] != 0) {
          return false;
        }
      }
    }
  }
  if ((DAT_01bea090 & 0x20000000) != 0) {
    return true;
  }
  if (((((DAT_01bea060 & 0x2000000) == 0) || (param_2 != 0)) && (*(int *)(param_1 + 0x3860) == 0))
     && ((*(float *)(param_1 + 0x405c) <= 0.0 && (*(int *)(param_1 + 0x40b8) == 0)))) {
    iVar2 = FUN_00b7a500();
    return iVar2 != 0;
  }
  return false;
}

// 008A8E10  FUN_008a8e10  size=189  [callgraph]
bool __fastcall FUN_008a8e10(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined *puVar3;
  
  if (((DAT_01bea090 & 0x8000) != 0) || (*(int *)(param_1 + 0x3bcc) != 0)) {
    return true;
  }
  puVar1 = *(undefined4 **)(param_1 + 2000);
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = &DAT_01be9ef4;
    (**(code **)*puVar1)(&DAT_01be9ef4);
    iVar2 = FUN_00dd6d80(puVar3);
    if ((iVar2 != 0) && (puVar1[0xbc] != 0)) {
      iVar2 = FUN_00b7a500();
      if (iVar2 == 0) {
        puVar1[0xbc] = 0;
      }
      if (puVar1[0xbc] != 0) {
        return true;
      }
    }
  }
  if ((*(int *)(param_1 + 0x40c8) == 4) || ((DAT_01bea090 & 0x20000000) != 0)) {
    return false;
  }
  iVar2 = FUN_00606de0(*(undefined4 *)(param_1 + 2000));
  if ((iVar2 != 0) && (iVar2 = FUN_00b83e50(), iVar2 == 0)) {
    return false;
  }
  if (*(int *)(param_1 + 0x3860) != 0) {
    return true;
  }
  iVar2 = FUN_00b7a500();
  return iVar2 == 0;
}

// 008A8ED0  FUN_008a8ed0  size=108  [callgraph]
void __thiscall FUN_008a8ed0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined *puVar3;
  
  puVar1 = *(undefined4 **)(param_1 + 2000);
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = &DAT_01b35bdc;
    (**(code **)*puVar1)(&DAT_01b35bdc);
    iVar2 = FUN_00dd6d80(puVar3);
    if (iVar2 != 0) {
      puVar1[0x1b0] = param_2;
      puVar1[0x1b1] = param_3;
      puVar1[0x1b2] = param_4;
    }
  }
  FUN_00b8bb40(0);
  FUN_00b8bbb0(0);
  FUN_008a3d00(0);
  return;
}

// 008A8F40  FUN_008a8f40  size=367  [callgraph]
void __thiscall FUN_008a8f40(int param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined *puVar3;
  int local_28;
  int local_24;
  undefined4 local_14;
  
  *(undefined4 *)(param_1 + 0x3bcc) = 0;
  iVar2 = FUN_00d82980(0x10);
  if (iVar2 == 0) {
    iVar2 = FUN_00606950();
    if (iVar2 == 0) {
      return;
    }
    iVar2 = FUN_00d82980(1);
    if (iVar2 == 0) {
      return;
    }
  }
  FUN_00d82de0(*(undefined4 *)(param_1 + 2000));
  puVar1 = *(undefined4 **)(param_1 + 2000);
  local_28 = 0x10000;
  local_24 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = &DAT_01b35bdc;
    (**(code **)*puVar1)(&DAT_01b35bdc);
    iVar2 = FUN_00dd6d80(puVar3);
    if (iVar2 != 0) {
      if (0 < (int)puVar1[0x1b0]) {
        FUN_00a8caf0(puVar1[0x1b0],puVar1[0x1b1],0,0);
        puVar1[0x1b0] = 0;
        puVar1[0x1b1] = 0;
        puVar1[0x1b2] = 0;
        puVar1[0xbc] = 0;
        *(undefined4 *)(param_1 + 0x40c8) = 0;
        return;
      }
      if (0 < (int)puVar1[0xfb]) {
        local_28 = puVar1[0xfb];
      }
      if (0 < (int)puVar1[0xfc]) {
        local_24 = puVar1[0xfc];
      }
      puVar1[0xfb] = 0;
      puVar1[0xfc] = 0;
      puVar1[0x62] = 0;
      if (param_4 != 0) {
        puVar1[0xbc] = 1;
      }
    }
  }
  if (param_2 == 0) {
    if (local_28 == 0x10008) {
      *(undefined4 *)(param_1 + 0x890) = 0;
      *(undefined4 *)(param_1 + 0x894) = 0;
      *(undefined4 *)(param_1 + 0x898) = 0;
      *(undefined4 *)(param_1 + 0x89c) = local_14;
      *(undefined4 *)(param_1 + 0x2c60) = *(undefined4 *)(param_1 + 0x44);
      *(undefined4 *)(param_1 + 0x894) = 0x38d1b717;
    }
    FUN_00a8caf0(local_28,local_24,0,0);
  }
  *(undefined4 *)(param_1 + 0x40c8) = 0;
  return;
}

// 008A90B0  FUN_008a90b0  size=143  [callgraph]
void __thiscall FUN_008a90b0(int param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined *puVar3;
  
  *(undefined4 *)(param_1 + 0x3bcc) = 0;
  iVar2 = FUN_00d82980(0x10);
  if (iVar2 != 0) {
    FUN_00d82de0(*(undefined4 *)(param_1 + 2000));
    puVar1 = *(undefined4 **)(param_1 + 2000);
    if (puVar1 != (undefined4 *)0x0) {
      puVar3 = &DAT_01be9ef4;
      (**(code **)*puVar1)(&DAT_01be9ef4);
      iVar2 = FUN_00dd6d80(puVar3);
      if (iVar2 != 0) {
        puVar1[0xfb] = 0;
        puVar1[0xfc] = 0;
        puVar1[0x62] = 0;
        if (param_3 != 0) {
          puVar1[0xbc] = 1;
        }
      }
    }
    FUN_00a8caf0(param_2,0,0,0);
    *(undefined4 *)(param_1 + 0x40c8) = 0;
  }
  return;
}

// 008A9140  Pl1500::vf3E8  size=47  [class]
undefined4 __fastcall Pl1500::vf3E8(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined *puVar3;
  
  puVar1 = *(undefined4 **)(param_1 + 2000);
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = &DAT_01b35bdc;
    (**(code **)*puVar1)(&DAT_01b35bdc);
    iVar2 = FUN_00dd6d80(puVar3);
    if (iVar2 != 0) {
      return puVar1[0x1ae];
    }
  }
  return 0;
}

// 008A9170  Pl1500::vf424  size=47  [class]
undefined4 __fastcall Pl1500::vf424(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined *puVar3;
  
  puVar1 = *(undefined4 **)(param_1 + 2000);
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = &DAT_01b35bdc;
    (**(code **)*puVar1)(&DAT_01b35bdc);
    iVar2 = FUN_00dd6d80(puVar3);
    if (iVar2 != 0) {
      return puVar1[0x1af];
    }
  }
  return 0;
}

// 008A91A0  FUN_008a91a0  size=480  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_008a91a0(int param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  
  FUN_008a8f40(1,0,0);
  puVar1 = *(undefined4 **)(param_1 + 2000);
  if (puVar1 != (undefined4 *)0x0) {
    puVar4 = &DAT_01be9ef4;
    (**(code **)*puVar1)(&DAT_01be9ef4);
    iVar2 = FUN_00dd6d80(puVar4);
    if (iVar2 != 0) {
      puVar1[0x11f] = 0;
      puVar1[0x120] = 0;
      puVar1[0x121] = 0;
      FUN_00a7c950();
      puVar1[0x102] = 0xffffffff;
      puVar1[0x103] = 0xffffffff;
      puVar1[0x114] = 0;
      puVar1[0x115] = 0;
      puVar1[0x116] = 0;
      puVar1[0x117] = 0x3f800000;
      puVar1[0x11b] = 0x3f800000;
      puVar1[0x118] = 0;
      puVar1[0x119] = 0;
      puVar1[0x11a] = 0;
      puVar1[0x104] = 0;
      puVar1[0x105] = 0;
      puVar1[0x106] = 0;
      puVar1[0x107] = 0x3f800000;
      puVar1[0x10b] = 0x3f800000;
      puVar1[0x108] = 0;
      puVar1[0x109] = 0;
      puVar1[0x10a] = 0;
      puVar1[0x10c] = 0;
      puVar1[0x10d] = 0;
      puVar1[0x10e] = 0;
      puVar1[0x10f] = 0x3f800000;
      puVar1[0x113] = 0x3f800000;
      puVar1[0x110] = 0;
      puVar1[0x111] = 0;
      puVar1[0x112] = 0;
      puVar1[0x11c] = 0;
      puVar1[0x11e] = 1;
      puVar1[0x11d] = 0;
      puVar1[0x124] = 0;
      puVar1[0x125] = 0;
      puVar1[0x126] = 0;
      puVar1[0x127] = 0x3f800000;
      if (((param_2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) &&
         (iVar2 = FUN_00a12210(param_3), iVar2 != 0)) {
        uVar3 = FUN_00a7c7f0();
        FUN_00a7c960(uVar3);
        puVar1[0x102] = param_3;
        puVar1[0x124] = *param_4;
        puVar1[0x125] = param_4[1];
        puVar1[0x126] = param_4[2];
        puVar1[0x127] = param_4[3];
      }
      _DAT_01bea9a4 = 1;
      if (*(int *)(param_1 + 0x764) != 0) {
        FUN_008e3c10();
      }
      _DAT_01d61ab0 = 0;
      if (*(int *)(param_1 + 0x40c8) == 0) {
        FUN_008a3d00(0);
      }
    }
  }
  return;
}

// 008A9380  FUN_008a9380  size=77  [callgraph]
void __fastcall FUN_008a9380(int param_1)

{
  if (*(int *)(param_1 + 0xbd8) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xbc0));
  }
  FUN_008a8f40(1,0,1);
  FUN_00a8caf0(0xe0002,0,0,0);
  if (*(int *)(param_1 + 0xbd8) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xbc0));
  }
  return;
}

// 008A93D0  FUN_008a93d0  size=279  [callgraph]
void __fastcall FUN_008a93d0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  (**(code **)(*param_1 + 0x314))();
  iVar2 = FUN_00a8cac0();
  if (iVar2 == 0) {
    FUN_00aa4080(0xfd,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    if (90000.0 < (float)param_1[0x34a]) {
      pcVar1 = *(code **)(*param_1 + 0x308);
      param_1[0x23d] = param_1[0x41c];
      (*pcVar1)(0x3f800000,0x3ae4c388,0x40490fdb,0);
    }
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (iVar2 != 1) {
    return;
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  param_1[0x250] = 0;
  iVar2 = FUN_00a8c760(0xb);
  if (iVar2 != 0) {
    param_1[0x250] = 1;
    if ((0 < param_1[0x2e4]) && (param_1[0x2e4] < 6)) {
      param_1[0x2e4] = 5;
    }
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x388))(0);
  }
  return;
}

// 008A94F0  FUN_008a94f0  size=430  [callgraph]
void __fastcall FUN_008a94f0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = FUN_00a81330();
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = FUN_00a7c8a0();
  }
  (**(code **)(*param_1 + 0x314))();
  iVar2 = FUN_00a8cac0();
  if (iVar2 == 0) {
    uVar4 = 0x102;
    if (param_1[0x1506] != 0) {
      uVar4 = 0xff;
    }
    if (90000.0 < (float)param_1[0x34a]) {
      pcVar1 = *(code **)(*param_1 + 0x308);
      param_1[0x23d] = param_1[0x41c];
      (*pcVar1)(0x3f800000,0x3ae4c388,0x40490fdb,0);
    }
    FUN_00aa4080(uVar4,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x9f4] = 0;
  }
  else if (iVar2 != 1) {
    return;
  }
  param_1[0x469] = 1;
  FUN_00b94790(0x3f800000,0x3f800000);
  if (iVar3 != 0) {
    iVar2 = FUN_00a8c760(5);
    if (iVar2 != 0) {
      FUN_00a8e880(iVar3 + 0x40);
      (**(code **)(*param_1 + 0x308))(0x3e99999a,0x3ae4c388,0x3e8efa35,0);
    }
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x388))(0);
    return;
  }
  param_1[0x250] = 0;
  iVar2 = FUN_00a8c760(0xb);
  if (iVar2 != 0) {
    param_1[0x250] = 1;
    if ((0 < param_1[0x2e4]) && (param_1[0x2e4] < 6)) {
      param_1[0x2e4] = 5;
    }
  }
  return;
}

// 008A98D0  FUN_008a98d0  size=409  [callgraph]
void __fastcall FUN_008a98d0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_00a81330();
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = FUN_00a7c8a0();
  }
  (**(code **)(*param_1 + 0x314))();
  iVar2 = FUN_00a8cac0();
  if (iVar2 == 0) {
    FUN_00aa4080(0x103,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x9f4] = 0;
    if (90000.0 < (float)param_1[0x34a]) {
      pcVar1 = *(code **)(*param_1 + 0x308);
      param_1[0x23d] = param_1[0x41c];
      (*pcVar1)(0x3f800000,0x3ae4c388,0x40490fdb,0);
    }
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (iVar2 != 1) {
    return;
  }
  param_1[0x469] = 1;
  FUN_00b94790(0x3f800000,0x3f800000);
  if (iVar3 != 0) {
    iVar2 = FUN_00a8c760(5);
    if (iVar2 != 0) {
      FUN_00a8e880(iVar3 + 0x40);
      (**(code **)(*param_1 + 0x308))(0x3e99999a,0x3ae4c388,0x3e8efa35,0);
    }
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x388))(0);
    return;
  }
  param_1[0x250] = 0;
  iVar2 = FUN_00a8c760(0xb);
  if (iVar2 != 0) {
    param_1[0x250] = 1;
    if ((0 < param_1[0x2e4]) && (param_1[0x2e4] < 6)) {
      param_1[0x2e4] = 5;
    }
  }
  return;
}

// 008A9A70  FUN_008a9a70  size=535  [callgraph]
void __fastcall FUN_008a9a70(int *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  
  (**(code **)(*param_1 + 0x314))();
  iVar8 = FUN_00a8cac0();
  if (iVar8 == 0) {
    FUN_00aa4080(0x110,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x248] = 0x42700000;
    (**(code **)(*param_1 + 0x220))(0x41200000);
    DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
    FUN_00b895d0();
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x24] = 0;
  }
  else if (iVar8 != 1) {
    return;
  }
  param_1[0x469] = 1;
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar8 = FUN_00a94ce0(0);
  if (iVar8 != 0) {
    (**(code **)(*param_1 + 0x388))(0);
    return;
  }
  if (param_1[0xa09] != 0) {
    pfVar1 = (float *)(param_1 + 0xa0c);
    FUN_00a8e880(pfVar1);
    (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3e0efa35,0);
    fVar5 = (float)param_1[0x10] - *pfVar1;
    fVar6 = (float)param_1[0x12] - (float)param_1[0xa0e];
    fVar2 = (float)param_1[0x13];
    fVar3 = (float)param_1[0xa0f];
    fVar4 = fVar6 * fVar6 + fVar5 * fVar5;
    if (fVar4 < 0.0 == (fVar4 == 0.0)) {
      FUN_00ddf460(&stack0xffffffd0,&stack0xffffffd0);
      fVar4 = 0.0;
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      fVar6 = 0.0;
      fVar5 = 0.0;
      fVar4 = 1.0;
    }
    fVar7 = 1.0 - SQRT(((float)param_1[0x12] - (float)param_1[0xa0e]) *
                       ((float)param_1[0x12] - (float)param_1[0xa0e]) +
                       ((float)param_1[0x10] - *pfVar1) * ((float)param_1[0x10] - *pfVar1)) * 0.1;
    if (fVar7 < 0.2) {
      fVar7 = 0.2;
    }
    param_1[0x14] = (int)((float)param_1[0x14] + fVar5 * fVar7);
    param_1[0x15] = (int)(fVar7 * fVar4 + (float)param_1[0x15]);
    param_1[0x16] = (int)(fVar6 * fVar7 + (float)param_1[0x16]);
    param_1[0x17] = (int)(fVar7 * (fVar2 - fVar3) + (float)param_1[0x17]);
  }
  return;
}

// 008AAD60  Pl1500::vf44  size=158  [class]
void __fastcall Pl1500::vf44(int param_1)

{
  int iVar1;
  
  PlBaseDLC::vf44();
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a805f0();
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a805f0();
  }
  iVar1 = 4;
  do {
    FUN_00900ca0();
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  RayCastManager::getWork(param_1 + 0x55d0);
  RayCastManager::getWork(param_1 + 0x55d4);
  RayCastManager::getWork(param_1 + 0x56d0);
  if (*(int *)(param_1 + 0x7cc) != 0) {
    FUN_008a8f40(1,0,0);
  }
  return;
}

// 008AAE00  Pl1500::vfFC  size=87  [class]
void __fastcall Pl1500::vfFC(int *param_1)

{
  BehaviorAppBase::vfFC();
  FUN_00b7aa80();
  DAT_01dc08d4 = 0;
  DAT_01dc08bc = 0;
  DAT_01dc08c8 = 0;
  FUN_00cbc9c0(1,0);
  FUN_008a8f40(1,0,0);
                    /* WARNING: Could not recover jumptable at 0x008aae55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x410))();
  return;
}

// 008AAED0  FUN_008aaed0  size=381  [between]
void __fastcall FUN_008aaed0(int param_1)

{
  int iVar1;
  float10 fVar2;
  float fStack_84;
  float local_70 [3];
  undefined1 auStack_64 [8];
  undefined1 auStack_5c [48];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  fStack_84 = 0.0;
  iVar1 = FUN_00a12210();
  if (iVar1 != 0) {
    fStack_84 = (float)(iVar1 + 0x10);
    local_70[0] = 0.0;
    local_70[1] = 0.0;
    local_70[2] = 0.2;
    D3DXVec3TransformNormal(local_70);
    local_70[0] = local_70[0] - *(float *)(param_1 + 0x4c);
    FID_conflict__memcpy(auStack_5c,(void *)(param_1 + 0x10),0x40);
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    D3DXMatrixTranspose(auStack_5c,auStack_5c);
    D3DXVec3TransformNormal(&fStack_84,&fStack_84,auStack_64);
    fVar2 = (float10)FUN_00fdc1f0();
    fVar2 = (float10)1 - fVar2;
    *(float *)(param_1 + 0x5590) =
         (float)(-(float10)*(float *)(param_1 + 0x5590) * fVar2 +
                (float10)*(float *)(param_1 + 0x5590));
    *(float *)(param_1 + 0x5594) =
         (float)(-(float10)*(float *)(param_1 + 0x5594) * fVar2 +
                (float10)*(float *)(param_1 + 0x5594));
    *(float *)(param_1 + 0x5598) =
         (float)(((float10)(float)local_70 - (float10)*(float *)(param_1 + 0x5598)) * fVar2 +
                (float10)*(float *)(param_1 + 0x5598));
    *(float *)(param_1 + 0x559c) =
         (float)(((float10)fStack_84 - (float10)*(float *)(param_1 + 0x559c)) * fVar2 +
                (float10)*(float *)(param_1 + 0x559c));
    if (*(int *)(param_1 + 0x764) != 0) {
      FUN_008e0d60();
      FUN_008e0d30(&stack0xffffff80);
    }
  }
  return;
}

// 008AB050  FUN_008ab050  size=547  [between]
void __fastcall FUN_008ab050(int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  float *pfVar6;
  float10 fVar7;
  float10 fVar8;
  
  iVar3 = FUN_00a8c760(0x30);
  if ((iVar3 == 0) && (param_1[0x1509] == 0)) {
    fVar1 = (float)param_1[0x1516];
    if ((!NAN(fVar1) && 1.0 < fVar1 != (fVar1 == 1.0)) && (param_1[0x1db] != 0)) {
      FUN_009fb990();
    }
    fVar1 = (float)param_1[0x1516];
    fVar7 = (float10)FUN_00fdc1f0();
    param_1[0x1516] = (int)(float)((float10)fVar1 + -(float10)fVar1 * ((float10)1 - fVar7));
  }
  else {
    fVar1 = (float)param_1[0x1516];
    fVar8 = (float10)FUN_00fdc1f0();
    fVar7 = (float10)1;
    fVar8 = (fVar7 - fVar8) * (fVar7 - (float10)fVar1) + (float10)fVar1;
    param_1[0x1516] = (int)(float)fVar8;
    if ((float10)0.99 < fVar8) {
      param_1[0x1516] = (int)(float)fVar7;
    }
  }
  if (1.0 < (float)param_1[0x1516] == ((float)param_1[0x1516] == 1.0)) {
    param_1[0x1da] = 1;
  }
  else {
    param_1[0x1da] = 0;
  }
  if (param_1[0x1db] != 0) {
    fVar1 = (float)param_1[0x1516];
    uVar5 = 0;
    *(float *)(param_1[0x1db] + 0xb94) = fVar1;
    if (*(int *)(param_1[0x1db] + 0x18) != 0) {
      iVar3 = 0;
      pfVar6 = (float *)(param_1 + 0x1517);
      do {
        fVar2 = *pfVar6;
        if (*pfVar6 < fVar1) {
          fVar2 = fVar1;
        }
        *(float *)(*(int *)(param_1[0x1db] + 0x1c) + 0xfc + iVar3) = fVar2;
        uVar5 = uVar5 + 1;
        pfVar6 = pfVar6 + 1;
        iVar3 = iVar3 + 0x100;
      } while (uVar5 < *(uint *)(param_1[0x1db] + 0x18));
    }
  }
  iVar3 = FUN_00a8c760(0x31);
  iVar4 = FUN_00a81330();
  if ((iVar3 != 0) != (param_1[0x1507] != 0)) {
    if ((iVar3 == 0) || (iVar4 == 0)) {
      FUN_00a9e060(0);
      FUN_00a8c5f0(0,param_1[0x13c],iVar4,0x66,0xffffffff);
      FUN_00a94bc0(4,0);
    }
    else {
      FUN_00a9e060(0);
      FUN_00a8c5f0(0,param_1[0x13c],iVar4,0x700,0xffffffff);
      iVar4 = (**(code **)(*param_1 + 0x32c))();
      if (iVar4 == 0) {
        FUN_00aa4080(0x135,4,0,0x3f800000,0x1010,0xbf800000,0x3f800000);
      }
    }
  }
  param_1[0x1507] = iVar3;
  FUN_008a1c70();
  param_1[0x1509] = 0;
  return;
}

// 008AB280  FUN_008ab280  size=411  [between]
undefined4 __thiscall FUN_008ab280(int param_1,float *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  float *local_58;
  int local_50;
  int local_4c;
  int local_48 [6];
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  local_48[2] = 0x3f266666;
  local_48[3] = 0xbecccccd;
  local_58 = &local_28;
  piVar5 = (int *)(param_1 + 0x55d0);
  local_48[4] = 0x3ecccccd;
  local_48[5] = 0xbe99999a;
  iVar4 = 0;
  local_4c = param_1;
  do {
    iVar2 = *piVar5;
    *(undefined4 *)((int)local_48 + iVar4) = 0;
    if (((iVar2 != 0) && (iVar2 = FUN_00907640(piVar5,&local_50,0), iVar2 != 0)) && (local_50 != 0))
    {
      FUN_0112bcf0();
      iVar2 = *(int *)(local_50 + 0x10);
      iVar6 = *(int *)(iVar2 + 0x28);
      if (((*(char *)(iVar6 + 0x18) == '\x01') &&
          (iVar6 = *(char *)(iVar6 + 0x10) + iVar6, iVar6 != 0)) &&
         ((iVar3 = FUN_008f8cf0(iVar6,0x10000000), iVar3 != 0 ||
          (iVar6 = FUN_008f8cf0(iVar6,0x20000000), iVar6 != 0)))) {
        local_58[-2] = *(float *)(iVar2 + 0x10);
        *(undefined4 *)((int)local_48 + iVar4) = 1;
        local_58[-1] = *(float *)(iVar2 + 0x14);
        *local_58 = *(float *)(iVar2 + 0x18);
        local_58[1] = *(float *)(iVar2 + 0x1c);
      }
    }
    uVar1 = *(undefined4 *)((int)local_48 + iVar4 + 8);
    if (*(int *)(local_4c + 0x55d8) != 0) {
      uVar1 = *(undefined4 *)((int)local_48 + iVar4 + 0x10);
    }
    FUN_008a5c10(piVar5,uVar1);
    local_58 = local_58 + 4;
    piVar5 = piVar5 + 1;
    iVar4 = iVar4 + 4;
  } while (iVar4 < 8);
  if ((local_48[0] != 0) && (local_48[1] != 0)) {
    *param_2 = (local_20 - local_30) * 0.5 + local_30;
    param_2[1] = (local_1c - local_2c) * 0.5 + local_2c;
    param_2[2] = (local_18 - local_28) * 0.5 + local_28;
    param_2[3] = local_24 + (local_14 - local_24) * 0.5;
    return 1;
  }
  return 0;
}

// 008AB420  FUN_008ab420  size=156  [between]
void __thiscall FUN_008ab420(int param_1,float param_2)

{
  float fVar1;
  float10 fVar2;
  
  if (*(int *)(param_1 + 0x55c4) == 0) {
    return;
  }
  param_2 = param_2 * 1.9098593;
  fVar1 = 1.0;
  if (-1.0 < param_2) {
    if (param_2 <= 1.0) goto LAB_008ab469;
  }
  else {
    fVar1 = -1.0;
  }
  param_2 = fVar1;
LAB_008ab469:
  fVar1 = *(float *)(param_1 + 0x55c8);
  fVar2 = (float10)FUN_00fdc1f0();
  fVar2 = ((float10)1 - fVar2) * ((float10)param_2 - (float10)fVar1) + (float10)fVar1;
  *(float *)(param_1 + 0x55c8) = (float)fVar2;
  FUN_00a947e0(5,0,0,(float)fVar2);
  return;
}

// 008AB4C0  FUN_008ab4c0  size=153  [between]
void __fastcall FUN_008ab4c0(int param_1)

{
  float fVar1;
  float10 fVar2;
  
  if (*(int *)(param_1 + 0x55c4) != 0) {
    fVar1 = *(float *)(param_1 + 0x55c8);
    fVar2 = (float10)FUN_00fdc1f0();
    fVar2 = (float10)fVar1 + -(float10)fVar1 * ((float10)1 - fVar2);
    *(float *)(param_1 + 0x55c8) = (float)fVar2;
    if (ABS(fVar2) < (float10)0.001) {
      *(undefined4 *)(param_1 + 0x55c8) = 0;
      *(undefined4 *)(param_1 + 0x55c4) = 0;
      FUN_00a94bc0(5,0x3e4ccccd);
      return;
    }
    FUN_00a947e0(5,0,0,(float)fVar2);
  }
  return;
}

// 008AB560  FUN_008ab560  size=539  [between]
void __thiscall
FUN_008ab560(int param_1,float *param_2,float param_3,undefined4 param_4,int param_5)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float *pfVar10;
  float *pfVar11;
  uint uVar12;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 auStack_b8 [2];
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  float local_7c;
  undefined4 local_78;
  float local_74;
  float fStack_64;
  float fStack_60;
  undefined1 auStack_58 [8];
  undefined1 local_50 [76];
  
  if (param_5 == 0) {
    FUN_00860de0();
    local_78 = 0;
    local_7c = 0.0;
    local_80 = 0;
    local_84 = 0;
    local_8c = 0;
    local_90 = 0;
    local_94 = 0;
    local_98 = 0;
    local_a0 = 0;
    local_a4 = 0;
    local_a8 = 0;
    local_ac = 0;
    local_74 = 1.0;
    local_88 = 0x3f800000;
    local_9c = 0x3f800000;
    local_b0 = 0x3f800000;
    if (*(float *)(param_1 + 0x94) != 0.0) {
      D3DXMatrixRotationY(local_50,*(float *)(param_1 + 0x94));
      D3DXMatrixMultiply(auStack_b8,auStack_58,auStack_b8);
    }
    if (param_3 != 0.0) {
      D3DXMatrixRotationX(local_50,param_3);
      D3DXMatrixMultiply(auStack_b8,auStack_58,auStack_b8);
    }
    uStack_c0 = 0;
    uStack_bc = 0;
    auStack_b8[0] = param_4;
    D3DXVec3TransformNormal(&uStack_c0,&uStack_c0,&local_b0);
    uVar12 = 0;
    fStack_64 = fStack_c4 * 0.016666668;
    fVar7 = fStack_c8 * 0.016666668;
    fVar8 = *(float *)(DAT_01885d20 + 0x14) * 0.016666668 * 0.016666668;
    fVar2 = *param_2;
    fVar3 = param_2[1];
    fVar4 = param_2[2];
    fVar5 = param_2[3];
    local_7c = fStack_cc * 0.016666668 * 2.0;
    local_74 = fStack_64 * 2.0;
    pfVar10 = (float *)&DAT_01dc4528;
    do {
      pfVar11 = pfVar10;
      if ((3 < uVar12) && ((uVar12 & 1) == 0)) {
        DAT_01dc0df8 = 1;
        pfVar10[-2] = fVar2;
        pfVar11 = pfVar10 + 4;
        pfVar10[-1] = fVar3;
        *pfVar10 = fVar4;
        pfVar10[1] = fVar5;
      }
      uVar12 = uVar12 + 1;
      fVar2 = local_7c + fVar2;
      fVar4 = local_74 + fVar4;
      fVar5 = fVar5 + fStack_60 * 2.0;
      fVar9 = fVar8 + fVar7;
      fVar3 = fVar3 + fVar7 + fVar9;
      fVar7 = fVar8 + fVar9;
      pfVar10 = pfVar11;
    } while (uVar12 < 0x2c);
    if ((DAT_01885d68 != 1) &&
       (iVar6 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4), *(int *)(iVar6 + 4) == 0)
       ) {
      piVar1 = (int *)(iVar6 + 8);
      *piVar1 = *piVar1 + -1;
      if ((*piVar1 == 0) && ((DAT_01b35fac != 0 && (DAT_01885db8 == 0)))) {
        FUN_00dd7300();
      }
    }
    return;
  }
  FUN_008a6060();
  return;
}

// 008AB780  FUN_008ab780  size=1063  [between]
void __thiscall FUN_008ab780(int param_1,float param_2,undefined4 param_3)

{
  float fVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float fStack_3c0;
  float fStack_3bc;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  float fStack_3b0;
  float fStack_3ac;
  float fStack_3a8;
  float fStack_3a4;
  float fStack_3a0;
  float fStack_39c;
  float fStack_398;
  float fStack_394;
  float fStack_390;
  float fStack_38c;
  float fStack_388;
  float fStack_384;
  undefined1 auStack_378 [4];
  undefined1 auStack_374 [4];
  float fStack_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  float fStack_360;
  float fStack_35c;
  float fStack_358;
  float fStack_354;
  uint uStack_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  char *pcStack_340;
  undefined4 uStack_33c;
  undefined1 auStack_330 [4];
  undefined4 uStack_32c;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined1 uStack_310;
  undefined1 uStack_30f;
  undefined4 uStack_30c;
  uint uStack_294;
  uint uStack_290;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined2 uStack_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  float fStack_1a4;
  
  uVar2 = FUN_008a23d0();
  piVar3 = (int *)FUN_0094e5e0(uVar2);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x30))();
  }
  iVar4 = FUN_00a12210(0xf00);
  if (iVar4 != 0) {
    fStack_3b0 = *(float *)(iVar4 + 0x40);
    fStack_3ac = *(float *)(iVar4 + 0x44);
    fStack_3a8 = *(float *)(iVar4 + 0x48);
    fStack_3a4 = *(float *)(iVar4 + 0x4c);
    fStack_3c0 = *(float *)(param_1 + 0x40);
    fStack_3bc = *(float *)(param_1 + 0x44);
    uStack_3b8 = *(undefined4 *)(param_1 + 0x48);
    uStack_3b4 = *(undefined4 *)(param_1 + 0x4c);
    iVar4 = FUN_00a12210(0);
    if (iVar4 != 0) {
      fStack_3c0 = *(float *)(iVar4 + 0x40);
      fStack_3bc = *(float *)(iVar4 + 0x44);
      uStack_3b8 = *(undefined4 *)(iVar4 + 0x48);
      uStack_3b4 = *(undefined4 *)(iVar4 + 0x4c);
    }
    iVar4 = FUN_009f8b40();
    fStack_370 = fStack_3c0;
    uStack_350 = iVar4 << 0x10 | 6;
    uStack_36c = fStack_3bc;
    uStack_368 = uStack_3b8;
    uStack_364 = uStack_3b4;
    fStack_360 = fStack_3b0;
    fStack_35c = fStack_3ac;
    fStack_358 = fStack_3a8;
    uStack_34c = 0;
    fStack_354 = fStack_3a4;
    uStack_348 = 0;
    uStack_344 = 0;
    pcStack_340 = "throw knife";
    uStack_33c = 0;
    iVar4 = RayCastSingleHitWork::RayCastSingleHitWork_2
                      (&fStack_390,0,auStack_374,auStack_378,&fStack_370);
    if (iVar4 != 0) {
      fStack_3b0 = fStack_390;
      fStack_3ac = fStack_38c;
      fStack_3a8 = fStack_388;
      fStack_3a4 = fStack_384;
    }
    fStack_390 = *(float *)(param_1 + 0x2760);
    fStack_38c = *(float *)(param_1 + 0x2764);
    fStack_388 = *(float *)(param_1 + 0x2768);
    fStack_384 = *(float *)(param_1 + 0x276c);
    fStack_3a0 = fStack_390 - fStack_3b0;
    fStack_39c = fStack_38c - fStack_3ac;
    fStack_398 = fStack_388 - fStack_3a8;
    fStack_394 = fStack_384 - fStack_3a4;
    fStack_3c0 = param_2;
    fStack_3bc = *(float *)(param_1 + 0x94);
    uStack_3b8 = 0;
    if ((*(int *)(param_1 + 0x1410) == 0) &&
       (((fStack_3a0 != 0.0 || (fStack_39c != 0.0)) || (fStack_398 != 0.0)))) {
      fVar1 = fStack_398 * fStack_398 + fStack_3a0 * fStack_3a0 + fStack_39c * fStack_39c;
      if (fVar1 < 0.0 == (fVar1 == 0.0)) {
        FUN_00ddf460(&fStack_3a0,&fStack_3a0);
        fVar5 = (float10)fStack_3a0;
        fVar6 = (float10)fStack_398;
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        fVar5 = (float10)0;
        fStack_3a0 = (float)fVar5;
        fStack_39c = 1.0;
        fStack_398 = (float)fVar5;
        fVar6 = fVar5;
      }
      fVar7 = (float10)fpatan(fVar5,fVar6);
      fStack_3bc = (float)fVar7;
      fVar5 = (float10)fpatan((float10)fStack_39c,SQRT(fVar6 * fVar6 + fVar5 * fVar5));
      fStack_3c0 = (float)-fVar5;
    }
    FUN_004105d0();
    FUN_00410710();
    FUN_0041cf30();
    uStack_21c = 0;
    uStack_32c = 0x11506;
    uStack_220 = 0x84;
    uStack_1c0 = FUN_009f8b40();
    uStack_31c = *(undefined4 *)(param_1 + 0x5718);
    uStack_314 = *(undefined4 *)(param_1 + 0x571c);
    uStack_290 = uStack_290 | 0x800;
    uStack_310 = *(undefined1 *)(param_1 + 0x5724);
    uStack_318 = *(undefined4 *)(param_1 + 0x5720);
    uStack_30c = *(undefined4 *)(param_1 + 0x4f0);
    uStack_294 = uStack_294 | 0x10000180;
    uStack_30f = 7;
    uStack_320 = 0x1c3;
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
    FUN_00416e30(&fStack_3b0,&fStack_390,&fStack_3c0,param_3,0x44480000);
    uVar2 = FUN_00b7d160();
    FUN_00a7c940(uVar2);
    uStack_1bc = FUN_00a81330();
    uStack_1b0 = 0;
    uStack_1ac = 0;
    uStack_1a8 = 0;
    fStack_1a4 = fStack_384;
    uStack_1b8 = 0;
    FUN_00ad3be0(*(undefined4 *)(param_1 + 0x4f0),auStack_330);
  }
  return;
}

// 008ABBB0  FUN_008abbb0  size=204  [between]
undefined4 __fastcall FUN_008abbb0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 local_330 [4];
  undefined4 local_32c;
  undefined4 local_21c;
  
  FUN_004105d0();
  FUN_00410710();
  FUN_0041cf30();
  local_21c = 0x3a;
  local_32c = 0x11506;
  piVar2 = (int *)FUN_00ad3be0(*(undefined4 *)(param_1 + 0x4f0),local_330);
  if ((piVar2 != (int *)0x0) && (iVar1 = piVar2[0x13c], iVar1 != 0)) {
    uVar3 = FUN_00a7c7f0();
    FUN_00a7c960(uVar3);
    FUN_00a8c5f0(1,*(undefined4 *)(param_1 + 0x4f0),iVar1,0x700,0xffffffff);
    uVar3 = 1;
    FUN_00a92fb0(1);
    FUN_00e08640(uVar3);
    (**(code **)(*piVar2 + 0x20))();
    return 1;
  }
  FUN_00dd5650(&DAT_0164a04c);
  return 0;
}

// 008ABC80  FUN_008abc80  size=101  [between]
void __thiscall FUN_008abc80(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00a8cab0();
  *(undefined4 *)(param_1 + 0x5414) = uVar1;
  FUN_008a66b0();
  FUN_00a8caf0(param_2,0,0,0);
  if (((param_2 & 0xffff0000) != 0x80000) && (*(int *)(param_1 + 0x5700) != 0)) {
    *(undefined4 *)(param_1 + 0x5700) = 0;
    FUN_00a8c9b0(0,0x34,0,0);
  }
  return;
}

// 008ABCF0  FUN_008abcf0  size=140  [between]
void __fastcall FUN_008abcf0(int param_1)

{
  *(undefined4 *)(param_1 + 0x890) = 0;
  *(undefined4 *)(param_1 + 0x894) = 0;
  *(undefined4 *)(param_1 + 0x898) = 0;
  *(undefined4 *)(param_1 + 0x89c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  FUN_008a8f40(0,0,0);
  FUN_00b7aa80();
  DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
  FUN_00a94bc0(2,0x3c888889);
  FUN_00a94bc0(3,0x3c888889);
  FUN_00a94bc0(4,0x3c888889);
  FUN_00a94bc0(5,0x3c888889);
  return;
}

// 008ABD80  FUN_008abd80  size=123  [between]
undefined4 __thiscall FUN_008abd80(int param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  
  bVar1 = false;
  if (((*(uint *)(param_1 + 0xcfc) & *(uint *)(param_1 + 0xe18)) != 0) ||
     (*(int *)(param_1 + 0x25bc) != 0)) {
    bVar1 = true;
  }
  if ((DAT_01bea090 & 0x400) != 0) {
    bVar1 = false;
  }
  if ((param_2 == 0) && (bVar1)) {
    if (param_4 != 0) {
      FUN_00ba6810(1,1);
    }
    *(undefined4 *)(param_1 + 0x25bc) = 0;
    FUN_008abc80((param_3 != 0) + 0x10005);
    return 1;
  }
  return 0;
}

// 008ABE00  FUN_008abe00  size=248  [between]
undefined4 __thiscall FUN_008abe00(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((((*(uint *)(param_1 + 0x2654) & 2) == 0) || (*(int *)(param_1 + 0x2620) < 3)) &&
     (((*(uint *)(param_1 + 0xcfc) & *(uint *)(param_1 + 0xe20)) != 0 ||
      (*(int *)(param_1 + 0x2568) != 0)))) {
    if (param_2 != 0) {
      FUN_00ba6810(1,1);
    }
    *(undefined4 *)(param_1 + 0x2568) = 0;
    uVar1 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0x5414) = uVar1;
    FUN_008a66b0();
    FUN_00a8caf0(0x20002,0,0,0);
    if (*(int *)(param_1 + 0x5700) != 0) {
      *(undefined4 *)(param_1 + 0x5700) = 0;
      FUN_00a8c9b0(0,0x34,0,0);
    }
    return 1;
  }
  if ((((*(uint *)(param_1 + 0xcfc) & *(uint *)(param_1 + 0xe24)) != 0) ||
      (*(int *)(param_1 + 0x256c) != 0)) && ((*(uint *)(param_1 + 0x2654) & 1) == 0)) {
    if (param_2 != 0) {
      FUN_00ba6810(1,1);
    }
    *(undefined4 *)(param_1 + 0x256c) = 0;
    FUN_008abc80(0x20003);
    return 1;
  }
  return 0;
}

// 008ABF00  FUN_008abf00  size=204  [between]
undefined4 __thiscall FUN_008abf00(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (((*(uint *)(param_1 + 0xe20) & *(uint *)(param_1 + 0xcfc)) == 0) &&
     (*(int *)(param_1 + 0x2568) == 0)) {
    if (((*(uint *)(param_1 + 0xe24) & *(uint *)(param_1 + 0xcfc)) == 0) &&
       (*(int *)(param_1 + 0x256c) == 0)) {
      return 0;
    }
    if (param_2 != 0) {
      FUN_00ba6810(1,1);
    }
    *(undefined4 *)(param_1 + 0x256c) = 0;
    uVar1 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0x5414) = uVar1;
    FUN_008a66b0();
    uVar1 = 0x20005;
  }
  else {
    if (param_2 != 0) {
      FUN_00ba6810(1,1);
    }
    *(undefined4 *)(param_1 + 0x2568) = 0;
    uVar1 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0x5414) = uVar1;
    FUN_008a66b0();
    uVar1 = 0x20004;
  }
  FUN_00a8caf0(uVar1,0,0,0);
  if (*(int *)(param_1 + 0x5700) != 0) {
    *(undefined4 *)(param_1 + 0x5700) = 0;
    FUN_00a8c9b0(0,0x34,0,0);
  }
  return 1;
}

// 008ABFD0  FUN_008abfd0  size=227  [between]
undefined4 __thiscall FUN_008abfd0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x25f8) == 0) {
    return 0;
  }
  if (((*(uint *)(param_1 + 0xcfc) & *(uint *)(param_1 + 0xe24)) == 0) &&
     (*(int *)(param_1 + 0x256c) == 0)) {
    if (*(int *)(param_1 + 0x25f8) == 0) {
      return 0;
    }
    if (((*(uint *)(param_1 + 0xcfc) & *(uint *)(param_1 + 0xe20)) == 0) &&
       (*(int *)(param_1 + 0x2568) == 0)) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x25f8) = 0;
    *(undefined4 *)(param_1 + 0x2568) = 0;
    uVar1 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0x5414) = uVar1;
    FUN_008a66b0();
    uVar1 = 0x20006;
  }
  else {
    if (param_2 != 0) {
      FUN_00ba6810(1,1);
    }
    *(undefined4 *)(param_1 + 0x25f8) = 0;
    *(undefined4 *)(param_1 + 0x256c) = 0;
    uVar1 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0x5414) = uVar1;
    FUN_008a66b0();
    uVar1 = 0x20005;
  }
  FUN_00a8caf0(uVar1,0,0,0);
  if (*(int *)(param_1 + 0x5700) != 0) {
    *(undefined4 *)(param_1 + 0x5700) = 0;
    FUN_00a8c9b0(0,0x34,0,0);
  }
  return 1;
}

// 008AC0C0  FUN_008ac0c0  size=293  [between]
undefined4 __fastcall FUN_008ac0c0(int *param_1)

{
  bool bVar1;
  int iVar2;
  int unaff_retaddr;
  undefined4 uVar3;
  
  bVar1 = true;
  iVar2 = FUN_00a8c760(0x1f);
  if (((iVar2 != 0) && (bVar1 = false, param_1[0x186] == 0x30001)) && (param_1[0x9f8] != 0)) {
    bVar1 = true;
  }
  if (((param_1[0x95c] != 0) && (bVar1)) && ((0.0 < (float)param_1[0xd0f] && (param_1[0x95c] < 3))))
  {
    param_1[0x95c] = 2;
  }
  if (((param_1[0x95c] != 0) && (bVar1)) &&
     (((float)param_1[0xd0f] <= 0.0 &&
      ((iVar2 = FUN_00a81330(), iVar2 != 0 &&
       (iVar2 = FUN_00b87df0(iVar2,param_1[0x41c],0x3f860a92), iVar2 != 0)))))) {
    (**(code **)(*param_1 + 0x220))(0);
    iVar2 = FUN_00a8c760(0x21);
    if (iVar2 == 0) {
      if (unaff_retaddr != 0) {
        FUN_00ba6810(1,0);
      }
      iVar2 = (**(code **)(*param_1 + 0x1d8))();
      if (iVar2 == 0) {
        uVar3 = 0x40000;
      }
      else {
        uVar3 = 0x40004;
      }
      FUN_008abc80(uVar3);
      param_1[0x2e4] = 0x5a;
      return 1;
    }
  }
  return 0;
}

// 008AC1F0  FUN_008ac1f0  size=101  [between]
undefined4 FUN_008ac1f0(int param_1)

{
  int iVar1;
  
  if ((DAT_01bea090 & 0x40000) == 0) {
    iVar1 = FUN_008a6450();
    if (iVar1 != 0) {
      iVar1 = FUN_00b7f610();
      if (iVar1 != 0) {
        iVar1 = FUN_00a8cbe0(0x80003);
        if (iVar1 == 0) {
          if (param_1 != 0) {
            FUN_00ba6810(1,0);
          }
          FUN_008abc80(0x80004);
          FUN_008a5fc0();
          return 1;
        }
      }
    }
  }
  return 0;
}

// 008AC260  FUN_008ac260  size=57  [between]
undefined4 __fastcall FUN_008ac260(int param_1)

{
  if (((*(int *)(param_1 + 0x764) != 0) &&
      (20.0 < (float)*(int *)(*(int *)(param_1 + 0x764) + 0x124))) &&
     (*(int *)(param_1 + 0x8a0) == 0)) {
    FUN_008abc80(0x10008);
    return 1;
  }
  return 0;
}

// 008AC320  FUN_008ac320  size=183  [between]
undefined4 __thiscall FUN_008ac320(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((DAT_01bea094 & 0x40000000) == 0) {
    if ((param_2 != 0) && (iVar1 = FUN_00a8c760(0x22), iVar1 == 0)) {
      return 0;
    }
    if (0 < *(int *)(param_1 + 0xe70)) {
      *(undefined4 *)(param_1 + 0xe70) = 0;
      if (param_3 != 0) {
        FUN_00ba6810(1,1);
      }
      *(undefined4 *)(param_1 + 0xe70) = 0;
      uVar2 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0x5414) = uVar2;
      FUN_008a66b0();
      FUN_00a8caf0(0x90000,0,0,0);
      if (*(int *)(param_1 + 0x5700) != 0) {
        *(undefined4 *)(param_1 + 0x5700) = 0;
        FUN_00a8c9b0(0,0x34,0,0);
      }
      return 1;
    }
  }
  return 0;
}

// 008AC3E0  FUN_008ac3e0  size=211  [between]
undefined4 __thiscall FUN_008ac3e0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  *(undefined4 *)(param_1 + 0x56c8) = 1;
  if ((DAT_01bea094 & 0x20000000) != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x12b4) != 0) {
    iVar1 = FUN_00a81330();
    if ((iVar1 != 0) && (*(int *)(*(int *)(param_1 + 0x12b4) + 0x34) != 0)) {
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) goto LAB_008ac433;
    }
  }
  iVar1 = FUN_00a81330();
LAB_008ac433:
  if (((*(uint *)(param_1 + 0xcfc) & *(uint *)(param_1 + 0xe30)) != 0) && (iVar1 != 0)) {
    iVar2 = FUN_00a7c7e0();
    if (iVar2 != 0) {
      if (param_2 != 0) {
        FUN_00ba6810(1,1);
      }
      if (*(int *)(iVar1 + 0x24) == 0x28120) {
        uVar3 = FUN_00a7c7f0();
        FUN_00a7c960(uVar3);
        FUN_008abc80(0x100014);
        return 1;
      }
      FUN_008abc80(0x100013);
      return 1;
    }
  }
  return 0;
}

// 008AC4C0  FUN_008ac4c0  size=66  [between]
undefined4 __fastcall FUN_008ac4c0(int param_1)

{
  int iVar1;
  
  if ((DAT_01bea094 & 0x40000000) == 0) {
    iVar1 = FUN_00a8cbe0(0x10001);
    if ((iVar1 == 0) && (0 < *(int *)(param_1 + 0x55a4))) {
      *(undefined4 *)(param_1 + 0x55a4) = 0;
      FUN_008abc80(0x10001);
      return 1;
    }
  }
  return 0;
}

// 008AC510  FUN_008ac510  size=215  [between]
undefined4 FUN_008ac510(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if ((param_1 != 0) && (0 < *(int *)(param_1 + 0x14))) {
    FUN_0112bcf0();
    if (param_2 < 0) {
      param_2 = *(int *)(param_1 + 0x14);
    }
    iVar5 = 0;
    if (0 < param_2) {
      iVar4 = 0;
      do {
        iVar3 = *(int *)(*(int *)(param_1 + 0x10) + 0x28 + iVar4);
        iVar2 = *(int *)(param_1 + 0x10) + iVar4;
        if (*(char *)(iVar3 + 0x18) == '\x01') {
          iVar3 = *(char *)(iVar3 + 0x10) + iVar3;
        }
        else {
          iVar3 = 0;
        }
        fVar1 = *(float *)(iVar2 + 0x18) * 0.0 +
                *(float *)(iVar2 + 0x10) * 0.0 + *(float *)(iVar2 + 0x14);
        if ((((fVar1 < 0.1 == (fVar1 == 0.1)) && (iVar3 != 0)) &&
            (iVar3 = FUN_008f7780(iVar3), iVar3 != 0)) &&
           (((iVar3 = *(int *)(iVar3 + 0x4b0), iVar3 == 0xf0151 || (iVar3 == 0xf0155)) ||
            ((iVar3 == 0xf5040 || ((iVar3 == 0xf5041 || (iVar3 == 0xf6021)))))))) {
          return 1;
        }
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + 0x30;
      } while (iVar5 < param_2);
    }
  }
  return 0;
}

// 008AC5F0  FUN_008ac5f0  size=1182  [between]
void __fastcall FUN_008ac5f0(int *param_1)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  float *pfVar6;
  float afStack_60 [4];
  undefined1 auStack_50 [76];
  
  pcVar1 = *(code **)(*param_1 + 0x314);
  bVar2 = true;
  param_1[0x999] = 1;
  (*pcVar1)();
  iVar4 = FUN_00a8c760(0x12);
  if (iVar4 != 0) {
    (**(code **)(*param_1 + 0x318))();
  }
  param_1[0xeee] = 0;
  iVar4 = FUN_00a8cac0();
  if (iVar4 == 0) {
    FUN_00aa4080(0x17,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    afStack_60[0] = 0.0;
    afStack_60[2] = 0.0;
    bVar2 = false;
    param_1[0xa07] = 0;
    param_1[0xa08] = 0;
    iVar4 = FUN_00a92f90();
    if ((iVar4 != 0) && (iVar4 = FUN_00a8cbe0(0x10006), iVar4 == 0)) {
      pfVar6 = afStack_60;
      FUN_00a92f90(pfVar6);
      FUN_0044fd10(pfVar6);
    }
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x1515] = (int)SQRT(afStack_60[0] * afStack_60[0] + afStack_60[2] * afStack_60[2]);
LAB_008ac776:
    afStack_60[0] = (float)param_1[0x14];
    afStack_60[2] = (float)param_1[0x16];
    FUN_00b94790(0x3f800000,0x3f800000);
    param_1[0x14] = (int)afStack_60[0];
    param_1[0x16] = (int)afStack_60[2];
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      uVar5 = 0x18;
      iVar4 = FUN_00a8cbe0(0x10006);
      if (iVar4 != 0) {
        uVar5 = 300;
      }
      FUN_00aa4080(uVar5,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x248] = 0x3cf5c28f;
      param_1[0x224] = 0;
      param_1[0x225] = (int)((float)param_1[0x244] * 0.03);
      param_1[0x226] = 0;
      param_1[0x23d] = param_1[0x25];
      if (90000.0 < (float)param_1[0x34a]) {
        param_1[0x23d] = param_1[0x34c];
        afStack_60[0] = 0.0;
        afStack_60[1] = 0.0;
        afStack_60[2] = (float)param_1[0x1515] + 0.12;
        D3DXMatrixRotationY(auStack_50,param_1[0x34c]);
        D3DXVec3TransformNormal(&stack0xffffff98,&stack0xffffff98,afStack_60 + 2);
        param_1[0x224] = (int)afStack_60[0];
        param_1[0x226] = (int)afStack_60[2];
      }
      pcVar1 = *(code **)(*param_1 + 0x220);
      param_1[0x249] = 0x40e00000;
      param_1[0x24a] = 0;
      param_1[0x24f] = 0x41200000;
      param_1[0x250] = 1;
      (*pcVar1)(0x40a00000);
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x995] = 0;
      if (bVar2) goto LAB_008ac8fc;
    }
  }
  else {
    if (iVar4 == 1) goto LAB_008ac776;
    if (iVar4 == 2) {
      afStack_60[0] = (float)param_1[0x14];
      afStack_60[2] = (float)param_1[0x16];
      FUN_00b94790(0x3f800000,0x3f800000);
      param_1[0x14] = (int)afStack_60[0];
      param_1[0x16] = (int)afStack_60[2];
      iVar4 = FUN_00a94ce0(0);
      if (iVar4 != 0) {
        afStack_60[0] = 0.0;
        afStack_60[2] = 0.0;
        iVar4 = FUN_00a92f90();
        if (iVar4 != 0) {
          pfVar6 = afStack_60;
          FUN_00a92f90(pfVar6);
          FUN_0044fd10(pfVar6);
        }
        param_1[0x1515] = (int)SQRT(afStack_60[0] * afStack_60[0] + afStack_60[2] * afStack_60[2]);
        FUN_008abc80(0x10007);
      }
    }
LAB_008ac8fc:
    if (0.0 <= (float)param_1[0xb17]) {
      param_1[0x250] = 0;
    }
    else {
      if (((param_1[0x33e] & param_1[0x386]) == 0) && ((float)param_1[0x249] < 3.0)) {
        param_1[0x250] = 0;
      }
      if ((float)param_1[0x249] <= 0.0) {
        param_1[0x250] = 0;
      }
      else {
        fVar3 = (float)param_1[0x249] - (float)param_1[0x244];
        param_1[0x249] = (int)fVar3;
        if ((param_1[0x250] != 0) && (fVar3 < 0.0 != (fVar3 == 0.0))) {
          param_1[0x250] = 0;
          param_1[0x225] =
               (int)((fVar3 + (float)param_1[0x244]) * (float)param_1[0x248] + (float)param_1[0x225]
                    );
        }
      }
      if (param_1[0x250] == 0) goto LAB_008ac9be;
    }
    param_1[0x225] = (int)((float)param_1[0x248] * (float)param_1[0x244] + (float)param_1[0x225]);
  }
LAB_008ac9be:
  iVar4 = FUN_00a81330();
  if (iVar4 == 0) {
    if ((float)param_1[0x34a] <= 90000.0) goto LAB_008aca48;
    param_1[0x23d] = param_1[0x34c];
    uVar5 = 0x3ae4c388;
  }
  else {
    FUN_00b87c60(iVar4,0);
    uVar5 = 0x3bab92a6;
  }
  (**(code **)(*param_1 + 0x308))(0x3e99999a,uVar5,0x3f060a92,0);
  param_1[0x15b9] = 0;
LAB_008aca48:
  if ((param_1[0x1033] != 0) && (param_1[0x186] == 0x10006)) {
    FUN_00b86700(0x3e75c28f,0);
    return;
  }
  FUN_00b86700(0x3df5c28f,0);
  return;
}

// 008ACA90  FUN_008aca90  size=753  [between]
void __fastcall FUN_008aca90(int *param_1)

{
  code *pcVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  undefined1 auStack_68 [4];
  float fStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  float afStack_58 [2];
  undefined1 auStack_50 [76];
  
  pcVar1 = *(code **)(*param_1 + 0x314);
  param_1[0x999] = 1;
  (*pcVar1)();
  param_1[0xeee] = 0;
  iVar3 = FUN_00a8cac0();
  if (iVar3 == 0) {
    fStack_64 = 0.13333334;
    iVar3 = FUN_00a8cbe0(0x10008);
    fVar2 = fStack_64;
    if (iVar3 != 0) {
      fVar2 = 0.2;
    }
    FUN_00aa4080(0x19,0,fVar2,0x3f800000,0x80,0xbf800000,0x3f800000);
    param_1[600] = param_1[0x224];
    param_1[0x259] = param_1[0x225];
    param_1[0x25a] = param_1[0x226];
    param_1[0x25b] = param_1[0x227];
    param_1[0x24f] = 0x3e19999a;
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (iVar3 != 1) goto LAB_008acd2e;
  FUN_00b94790(0x3f800000,0x3f800000);
  param_1[0x23d] = param_1[0x25];
  if (((float)param_1[0x34a] <= 90000.0) || (iVar3 = FUN_00a8cbe0(0x10007), iVar3 == 0)) {
    fStack_64 = (float)param_1[0x224];
    fVar4 = (float10)FUN_00fdc1f0();
    param_1[0x224] = (int)(float)((float10)fStack_64 + -(float10)fStack_64 * ((float10)1 - fVar4));
    fStack_64 = (float)param_1[0x226];
    fVar4 = (float10)FUN_00fdc1f0();
    fVar4 = (float10)fStack_64 + -(float10)fStack_64 * ((float10)1 - fVar4);
  }
  else {
    param_1[0x23d] = param_1[0x34c];
    iStack_60 = 0;
    uStack_5c = 0;
    afStack_58[0] = (float)param_1[0x1515] + 0.12;
    D3DXMatrixRotationY(auStack_50,param_1[0x34c]);
    D3DXVec3TransformNormal(auStack_68,auStack_68,afStack_58);
    param_1[0x224] = iStack_60;
    fVar4 = (float10)afStack_58[0];
  }
  param_1[0x226] = (int)(float)fVar4;
  if (*(int *)(param_1[0x1d9] + 0x120) < 0x79) {
    if (0x14 < *(int *)(param_1[0x1d9] + 0x120)) {
      param_1[0x23d] = param_1[0x25];
      iStack_60 = 0;
      uStack_5c = 0;
      afStack_58[0] = 0.06;
      D3DXMatrixRotationY(auStack_50,param_1[0x25]);
      D3DXVec3TransformNormal(auStack_68,auStack_68,afStack_58);
      param_1[0x224] = iStack_60;
      param_1[0x226] = (int)afStack_58[0];
    }
  }
  else {
    iVar3 = FUN_00a8cab0();
    param_1[0x1505] = iVar3;
    FUN_008a66b0();
    FUN_00a8caf0(0x10005,0,0,0);
    if (param_1[0x15c0] != 0) {
      param_1[0x15c0] = 0;
      FUN_00a8c9b0(0,0x34,0,0);
    }
    param_1[0xb17] = 0x40e00000;
  }
LAB_008acd2e:
  if ((param_1[0x1033] != 0) && (param_1[0x1505] == 0x10006)) {
    FUN_00b86700((float)param_1[0x1515] + 0.12 + (float)param_1[0x1515] + 0.12,0);
    return;
  }
  FUN_00b86700((float)param_1[0x1515] + 0.12,0);
  return;
}

// 008ACF20  Pl1500::vf1A4  size=874  [class]
void __thiscall Pl1500::vf1A4(int *param_1,int *param_2,uint param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  bool bVar9;
  bool bVar10;
  undefined4 uVar11;
  
  iVar5 = FUN_00a81330();
  bVar3 = false;
  piVar8 = (int *)0x0;
  if (iVar5 != 0) {
    piVar8 = (int *)FUN_00a7c8a0();
  }
  param_1[0x9f0] = 1;
  param_1[0x9f4] = param_3;
  param_1[0x9f1] = 1;
  bVar9 = (DAT_01bea060 & 0x2000000) == 0;
  bVar4 = false;
  if ((param_1[0x21c] < 1) || (param_1[0x139] != 0)) {
    bVar4 = true;
  }
  bVar10 = (param_2[0x23] & 0x10000000U) == 0;
  iVar6 = *param_2;
  param_1[0x9fc] = iVar6;
  if (iVar6 != 0x5f) {
    param_1[0x9f2] = 1;
  }
  if (iVar6 == 0x4f) {
    FUN_00bda060(param_1[0xcf7],0);
  }
  if ((((char)param_3 < '\0') && ((param_3 & 0x60) == 0)) && (bVar10)) {
    if (*(int *)(iVar5 + 0x24) == 0x20040) {
      iVar6 = param_1[0xcea];
      iVar1 = param_1[0xceb];
    }
    else {
      iVar6 = param_1[0xce8];
      iVar1 = param_1[0xce9];
    }
    FUN_00b7ab80(iVar1,iVar6);
  }
  if ((param_3 & 1) != 0) {
    if ((param_3 & 0xc0202) == 0) {
      if ((piVar8 != (int *)0x0) && (iVar6 = (**(code **)(*piVar8 + 0x238))(), iVar6 != 0)) {
        piVar7 = (int *)FUN_00c1b9a0();
        (**(code **)(*piVar7 + 0x34))(param_2[0x3c]);
      }
      iVar6 = (**(code **)(*param_1 + 0x348))();
      if (((iVar6 != 0) && ((param_2[0x23] & 0x10100000U) == 0)) &&
         ((piVar8 != (int *)0x0 && (iVar6 = (**(code **)(*piVar8 + 0x23c))(), iVar6 != 0)))) {
        FUN_00bda230(0x40a00000,param_2);
      }
    }
    bVar3 = true;
  }
  if ((param_3 & 0x40) != 0) {
    FUN_00b85350(param_1[0xcf2],param_1[0xcf1],param_1[0xcf1],0,0,0x3dcccccd);
    bVar3 = true;
  }
  if ((param_3 & 0x20) != 0) {
    FUN_00b85350(param_1[0xcee],param_1[0xcec],param_1[0xced],1,1,0x3dcccccd);
  }
  iVar6 = (**(code **)(*param_1 + 0x32c))();
  if ((iVar6 != 0) && ((param_3 & 0x4000) != 0)) {
    bVar3 = true;
    FUN_008a9380();
  }
  if (((((param_3 & 0x200) != 0) && (bVar9)) && (bVar10)) && (!bVar4)) {
    pcVar2 = *(code **)(*param_1 + 0x1d8);
    bVar3 = true;
    param_1[0x9fa] = 1;
    iVar6 = (*pcVar2)();
    if (iVar6 == 0) {
      uVar11 = 0xa0001;
    }
    else {
      uVar11 = 0xa0003;
    }
    FUN_008abc80(uVar11);
  }
  if ((((param_3 & 0x40000) != 0) && (bVar9)) && ((bVar10 && (!bVar4)))) {
    pcVar2 = *(code **)(*param_1 + 0x1d8);
    bVar3 = true;
    param_1[0x9fa] = 1;
    iVar6 = (*pcVar2)();
    if (iVar6 == 0) {
      uVar11 = 0xa0000;
    }
    else {
      uVar11 = 0xa0002;
    }
    FUN_008abc80(uVar11);
  }
  if ((param_3 & 2) != 0) {
    bVar3 = true;
  }
  if ((param_3 & 8) != 0) {
    param_1[0x9f5] = 1;
    param_1[0x9f6] = 1;
    if (bVar10) {
      FUN_00b7ab80(0x42340000,0x3dcccccd);
    }
    if (iVar5 != 0) {
      uVar11 = FUN_00a7c7f0();
      FUN_00a7c960(uVar11);
    }
    bVar3 = true;
  }
  iVar6 = FUN_00a8cbe0(0x100013);
  if ((iVar6 == 0) && (bVar3)) {
    FUN_00b7b380(iVar5,param_2 + 0x40,1);
    param_1[0xef9] = 0x42f00000;
  }
  return;
}

// 008AD290  FUN_008ad290  size=839  [between]
void __fastcall FUN_008ad290(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  float local_24;
  undefined1 auStack_20 [28];
  
  FUN_00b7d8b0();
  iVar2 = FUN_00a8cac0();
  if (iVar2 == 0) {
    if ((param_1[0x1505] != 0x20001) || (2 < param_1[0x988])) {
      param_1[0x988] = 0;
    }
    iVar2 = param_1[0x988];
    param_1[0x988] = iVar2 + 1;
    FUN_00aa4080(*(undefined4 *)(&DAT_0164a06c + iVar2 * 4),0,0x3d088889,0x3f800000,0x8000000,
                 0xbf800000,0x3f800000);
    param_1[0x248] = 0x41c00000;
    param_1[599] = 0;
    DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
    FUN_00b86010(1);
    param_1[0x1579] = 1;
    piVar3 = (int *)FUN_00b7b200();
    if ((piVar3 != (int *)0x0) && (iVar2 = (**(code **)(*piVar3 + 0x228))(), iVar2 != 0)) {
      FUN_00b7b230(auStack_20);
      FUN_00a8e880(auStack_20);
      iVar2 = FUN_00b86410();
      if (iVar2 != 0) {
        (**(code **)(*param_1 + 0x308))(0x3f800000,0x393702d3,0x40490fdb,0);
      }
    }
    FUN_00a8d280();
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (iVar2 != 1) {
    return;
  }
  param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
  FUN_00b94790(0x3f800000,0x3f800000);
  local_24 = -1.0;
  param_1[0x469] = 1;
  iVar2 = FUN_00a8c760(5);
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_00b7b200();
    if (((piVar3 == (int *)0x0) || (iVar2 = FUN_00b86410(), iVar2 == 0)) ||
       (iVar2 = (**(code **)(*piVar3 + 0x228))(), iVar2 == 0)) {
      if (90000.0 < (float)param_1[0x34a]) {
        pcVar1 = *(code **)(*param_1 + 0x308);
        param_1[0x23d] = param_1[0x34c];
        (*pcVar1)(0x3e99999a,0x3ae4c388,0x3e8efa35,0);
      }
    }
    else {
      if (param_1[899] == 0) {
        param_1[0x4aa] = (int)(param_1 + 0x4dc);
      }
      local_24 = ((float)param_1[0x12] - (float)piVar3[0x12]) *
                 ((float)param_1[0x12] - (float)piVar3[0x12]) +
                 ((float)param_1[0x10] - (float)piVar3[0x10]) *
                 ((float)param_1[0x10] - (float)piVar3[0x10]);
      FUN_00b7b270(0x3e99999a,0x393702d3,0x3e0efa35,0);
    }
  }
  if (((param_1[0x150a] != 0) || ((0.0 <= local_24 && (local_24 < 4.0)))) &&
     (iVar2 = FUN_00a92f90(), iVar2 != 0)) {
    iVar2 = FUN_00a92f90();
    FUN_00e26e90();
    *(undefined4 *)(iVar2 + 0xe4) = 0x3e19999a;
    *(undefined4 *)(iVar2 + 0xe8) = 0x3e19999a;
    *(undefined4 *)(iVar2 + 0xec) = 0x3e19999a;
  }
  iVar2 = FUN_00a8c760(0xb);
  if (iVar2 != 0) {
    if (((param_1[0x33f] & param_1[0x389]) != 0) || (param_1[0x95b] != 0)) {
      param_1[599] = 1;
    }
    param_1[0x95b] = 0;
  }
  iVar2 = FUN_00a8c760(1);
  if ((((iVar2 != 0) && ((DAT_01bea090 & 0x800000) == 0)) && (param_1[599] != 0)) &&
     (param_1[0x988] < 3)) {
    FUN_008abc80(0x20001);
    return;
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x388))(0);
  }
  return;
}

// 008AD5E0  FUN_008ad5e0  size=1987  [between]
void __fastcall FUN_008ad5e0(int *param_1)

{
  float *pfVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  float unaff_ESI;
  float10 fVar5;
  float *pfStack_9c;
  float *pfStack_98;
  float *pfStack_94;
  undefined1 auStack_84 [12];
  float fStack_78;
  float afStack_74 [2];
  undefined1 auStack_6c [4];
  undefined1 auStack_68 [8];
  float fStack_60;
  undefined1 auStack_5c [24];
  float fStack_44;
  float fStack_3c;
  
  pfStack_94 = (float *)0x8ad5f8;
  (**(code **)(*param_1 + 0x314))();
  pfStack_94 = (float *)0x12;
  pfStack_98 = (float *)0x8ad601;
  iVar3 = FUN_00a8c760();
  if (iVar3 != 0) {
    pfStack_94 = (float *)0x8ad611;
    (**(code **)(*param_1 + 0x318))();
  }
  pfStack_94 = (float *)0x8ad618;
  FUN_00b7d8b0();
  switch(param_1[0x187]) {
  case 0:
    pfStack_94 = (float *)0x8ad641;
    iVar3 = FUN_00a81330();
    if (iVar3 != 0) {
      pfStack_94 = (float *)0x8ad64c;
      iVar3 = FUN_00a7c8a0();
      pcVar2 = *(code **)(*param_1 + 0x308);
      fVar5 = (float10)fpatan((float10)*(float *)(iVar3 + 0x40) - (float10)(float)param_1[0x10],
                              (float10)*(float *)(iVar3 + 0x48) - (float10)(float)param_1[0x12]);
      param_1[0x23d] = (int)(float)fVar5;
      pfStack_94 = (float *)0x0;
      pfStack_98 = (float *)0x40490fdb;
      pfStack_9c = (float *)0x393702d3;
      (*pcVar2)(0x3f800000);
    }
    pfStack_94 = (float *)0x1;
    pfStack_98 = (float *)0x8ad69b;
    FUN_00b86010();
    pfStack_94 = (float *)0x3f800000;
    pfStack_98 = (float *)0x0;
    pfStack_9c = (float *)0x8000000;
    FUN_00aa4080(0x82,0,0x3e2aaaab,0x3f800000);
    param_1[0x23d] = param_1[0x25];
    pfStack_94 = (float *)0x8ad6df;
    FUN_00a8d280();
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x225] = 0x3e4ccccd;
    DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
    param_1[0x995] = param_1[0x995] | 1;
    param_1[0x409] = 0;
    param_1[0x9f4] = 0;
    break;
  case 1:
    break;
  case 2:
    pfStack_94 = (float *)0x3f800000;
    pfStack_98 = (float *)0x0;
    pfStack_9c = (float *)0x0;
    FUN_00aa4080(0x83,0,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x420c0000;
    goto LAB_008ad8ee;
  case 3:
LAB_008ad8ee:
    pfStack_94 = (float *)0x8ad8fa;
    (**(code **)(*param_1 + 0x318))();
    param_1[0x224] = 0;
    param_1[0x225] = 0;
    param_1[0x226] = 0;
    param_1[0x227] = 0;
    param_1[0x409] = (int)((float)param_1[0x244] * -0.03 + (float)param_1[0x409]);
    pfStack_94 = (float *)0x3f800000;
    pfStack_98 = (float *)0x3f800000;
    pfStack_9c = (float *)0x8ad93f;
    FUN_00b94790();
    pfVar1 = (float *)(param_1 + 0x2f8);
    *pfVar1 = 0.0;
    param_1[0x2f9] = 0;
    param_1[0x2fa] = 0x3f333333;
    pfStack_9c = pfVar1;
    pfStack_98 = pfVar1;
    pfStack_94 = (float *)(param_1 + 4);
    D3DXVec3TransformNormal();
    param_1[0x14] = (int)(*pfVar1 + (float)param_1[0x14]);
    param_1[0x15] = (int)((float)param_1[0x15] + (float)param_1[0x2f9]);
    param_1[0x16] = (int)((float)param_1[0x16] + (float)param_1[0x2fa]);
    param_1[0x17] = (int)((float)param_1[0x2fb] + (float)param_1[0x17]);
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
    iVar3 = FUN_008a6900(pfVar1);
    if (iVar3 != 0) {
      param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244] * 1.25);
    }
    if ((float)param_1[0x248] < 0.0) {
      pcVar2 = *(code **)(*param_1 + 0x324);
      param_1[0x187] = param_1[0x187] + 1;
      iVar3 = (*pcVar2)();
      if (iVar3 == 0) {
        param_1[0x187] = 9;
      }
    }
    param_1[0x469] = 1;
    iVar3 = FUN_00b7b200();
    if (iVar3 == 0) {
      return;
    }
    FUN_00b7b230(auStack_6c);
    D3DXMatrixInverse(auStack_5c,0,param_1 + 4);
    D3DXVec3TransformNormal(&stack0xffffff78,&fStack_78,auStack_68);
    pfStack_94 = (float *)((float)pfStack_94 + fStack_44);
    if (fStack_3c + unaff_ESI < 2.0) {
      return;
    }
    thunk_FUN_00dde510(&pfStack_9c,&pfStack_98,auStack_84,param_1 + 0x10);
    FUN_00a8db10(param_1 + 0x25,param_1[0x25],pfStack_98,0x3dcccccd,0x3ae4c388,0x3d567750);
    FUN_00a8db10(param_1 + 0x24,param_1[0x24],(float)pfStack_9c * -1.0,0x3dcccccd,0x3ae4c388,
                 0x3d567750);
    return;
  case 4:
    pfStack_94 = (float *)0x3f800000;
    pfStack_98 = (float *)0x0;
    pfStack_9c = (float *)0x8000000;
    FUN_00aa4080(0x84,0,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x24] = 0;
    goto LAB_008adb42;
  case 5:
LAB_008adb42:
    pfStack_94 = (float *)0x3f800000;
    pfStack_98 = (float *)0x3f800000;
    pfStack_9c = (float *)0x8adb53;
    FUN_00b94790();
    pfStack_94 = (float *)0x0;
    pfStack_98 = (float *)0x8adb5c;
    iVar3 = FUN_00a94ce0();
    if (iVar3 == 0) {
      return;
    }
    pfStack_94 = (float *)0x0;
    pfStack_98 = (float *)0x8adb72;
    (**(code **)(*param_1 + 0x388))();
    return;
  case 6:
    pfStack_94 = (float *)0x3f800000;
    pfStack_98 = (float *)0x0;
    pfStack_9c = (float *)0x8000000;
    FUN_00aa4080(0x87,0,0,0x3f800000);
    param_1[0x24] = 0;
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x225] = 0x3e19999a;
    if (param_1[0x463] != 0) {
      pfStack_94 = (float *)0x0;
      pfStack_98 = (float *)0x8adbd6;
      FUN_0041cc40();
    }
    pfVar1 = (float *)(param_1 + 0x2f8);
    pfStack_94 = (float *)(param_1 + 4);
    *pfVar1 = 0.0;
    param_1[0x2f9] = 0;
    param_1[0x2fa] = 0x3ecccccd;
    pfStack_9c = pfVar1;
    pfStack_98 = pfVar1;
    D3DXVec3TransformNormal();
    param_1[0x14] = (int)(*pfVar1 + (float)param_1[0x14]);
    param_1[0x15] = (int)((float)param_1[0x15] + (float)param_1[0x2f9]);
    param_1[0x16] = (int)((float)param_1[0x16] + (float)param_1[0x2fa]);
    param_1[0x17] = (int)((float)param_1[0x2fb] + (float)param_1[0x17]);
    goto LAB_008adc25;
  case 7:
LAB_008adc25:
    pfStack_94 = (float *)0x8adc31;
    (**(code **)(*param_1 + 0x318))();
    pfStack_94 = (float *)0x3f800000;
    pfStack_98 = (float *)0x3f800000;
    pfStack_9c = (float *)0x8adc44;
    FUN_00b94790();
    pfStack_94 = (float *)0x0;
    param_1[0x469] = 1;
    pfStack_98 = (float *)0x8adc53;
    iVar3 = FUN_00a94ce0();
    if (iVar3 == 0) {
      return;
    }
    pfStack_94 = (float *)0x8adc62;
    FUN_00a8d280();
    pfStack_94 = (float *)0x3f800000;
    pfStack_98 = (float *)0x0;
    pfStack_9c = (float *)0x8000000;
    FUN_00aa4080(0x85,0,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    return;
  case 8:
    pfStack_94 = (float *)0x3f800000;
    pfStack_98 = (float *)0x3f800000;
    pfStack_9c = (float *)0x8adcb3;
    FUN_00b94790();
    pfStack_94 = (float *)0x0;
    param_1[0x469] = 1;
    pfStack_98 = (float *)0x8adcc6;
    iVar3 = FUN_00a94ce0();
    if (iVar3 == 0) {
      return;
    }
    pfStack_94 = (float *)0x8adcd5;
    FUN_00b895d0();
    param_1[0x24] = 0;
    pfStack_94 = (float *)0x3c888889;
    pfStack_98 = (float *)0x8adcf3;
    iVar3 = (**(code **)(*param_1 + 800))();
    if (iVar3 != 0) {
      pfStack_98 = (float *)0x10009;
      pfStack_9c = (float *)0x8add03;
      FUN_008abc80();
      return;
    }
    pfStack_98 = (float *)0x10008;
    pfStack_9c = (float *)0x8add14;
    FUN_008abc80();
    return;
  case 9:
    pfStack_94 = (float *)0x3f800000;
    pfStack_98 = (float *)0x0;
    pfStack_9c = (float *)0x8000000;
    FUN_00aa4080(0x19,0,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x24] = 0;
    param_1[0x225] = 0x3e19999a;
    param_1[0x248] = 0x40400000;
    pfStack_94 = (float *)0x3f800000;
    pfStack_98 = (float *)0x3f800000;
    pfStack_9c = (float *)0x8add82;
    FUN_00b94790();
    pfStack_94 = (float *)0x8add89;
    FUN_00b895d0();
    pfStack_94 = (float *)0x10007;
    pfStack_98 = (float *)0x8add95;
    FUN_008abc80();
    return;
  default:
    goto switchD_008ad62b_default;
  }
  pfStack_94 = (float *)0x12;
  param_1[0x224] = (int)((float)param_1[0x224] * 0.97);
  param_1[0x226] = (int)((float)param_1[0x226] * 0.97);
  param_1[0x225] = (int)((float)param_1[0x225] * 0.994);
  pfStack_98 = (float *)0x8ad758;
  iVar3 = FUN_00a8c760();
  if (iVar3 != 0) {
    param_1[0x225] = (int)((float)param_1[0x225] - 0.005);
  }
  pfStack_94 = (float *)0x0;
  pfStack_98 = (float *)0x8ad777;
  fStack_78 = (float)FUN_00a959f0();
  if (18.0 < (float)(int)fStack_78) {
    pfStack_94 = (float *)0x8ad797;
    piVar4 = (int *)FUN_00b7b200();
    if (piVar4 != (int *)0x0) {
      pfStack_94 = (float *)0x8ad7a4;
      iVar3 = FUN_00b86410();
      if (iVar3 != 0) {
        pfStack_94 = (float *)0x8ad7b4;
        iVar3 = (**(code **)(*piVar4 + 0x228))();
        if (iVar3 != 0) {
          pfStack_94 = (float *)0x8ad7bf;
          FUN_008a0b30();
          pfStack_94 = &fStack_60;
          pfStack_98 = (float *)0x8ad7cb;
          FUN_00b7b230();
          pfStack_94 = (float *)(param_1 + 0x10);
          pfStack_98 = &fStack_60;
          pfStack_9c = &fStack_78;
          thunk_FUN_00dde510(afStack_74);
          param_1[0x25] = (int)fStack_78;
          param_1[0x24] = (int)(afStack_74[0] * -1.0);
          goto LAB_008ad85f;
        }
      }
    }
    param_1[0x24] = 0x3f060a92;
    if (90000.0 < (float)param_1[0x34a]) {
      pcVar2 = *(code **)(*param_1 + 0x308);
      param_1[0x23d] = param_1[0x34c];
      pfStack_94 = (float *)0x0;
      pfStack_98 = (float *)0x3e8efa35;
      pfStack_9c = (float *)0x3ae4c388;
      (*pcVar2)(0x3e99999a);
    }
  }
LAB_008ad85f:
  param_1[0x469] = 1;
  param_1[0x249] = (int)((float)param_1[0x249] - (float)param_1[0x244]);
  pfStack_94 = (float *)0x3f800000;
  pfStack_98 = (float *)0x3f800000;
  pfStack_9c = (float *)0x8ad88a;
  FUN_00b94790();
  pfStack_94 = (float *)0x0;
  pfStack_98 = (float *)0x8ad893;
  iVar3 = FUN_00a94ce0();
  if (iVar3 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
switchD_008ad62b_default:
  return;
}

// 008ADDD0  FUN_008addd0  size=812  [between]
void __fastcall FUN_008addd0(int *param_1)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  float10 fVar5;
  
  FUN_00b7d8b0();
  (**(code **)(*param_1 + 0x314))();
  iVar3 = FUN_00a8cac0();
  if (iVar3 == 0) {
    if ((param_1[0x995] & 2U) == 0) {
      param_1[0x988] = 0;
      param_1[0x995] = param_1[0x995] | 2;
    }
    iVar3 = param_1[0x988];
    param_1[0x988] = iVar3 + 1;
    FUN_00aa4080(*(undefined4 *)(&DAT_0164a07c + iVar3 * 4),0,0x3d088889,0x3f800000,0x8000000,
                 0xbf800000,0x3f800000);
    FUN_00b86010(1);
    DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
    FUN_00a8d280();
    param_1[0x224] = 0;
    param_1[0x225] = 0;
    param_1[0x226] = 0;
    param_1[0x227] = 0;
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x225] = 0x3cf5c28f;
    param_1[0x248] = 0x3d75c28f;
    param_1[0x24a] = -0x40800000;
  }
  else if (iVar3 != 1) goto LAB_008ae0d1;
  FUN_00b94790(0x3f800000,0x3f800000);
  fVar5 = (float10)FUN_00fdc1f0();
  param_1[0x224] = (int)(float)(fVar5 * (float10)(float)param_1[0x224]);
  param_1[0x226] = (int)(float)(fVar5 * (float10)(float)param_1[0x226]);
  fVar5 = (float10)FUN_00fdc1f0();
  param_1[0x225] = (int)(float)(fVar5 * (float10)(float)param_1[0x225]);
  iVar3 = FUN_00a8c760(0x12);
  if (iVar3 != 0) {
    param_1[0x225] = (int)((float)param_1[0x225] - (float)param_1[0x244] * 0.004);
  }
  param_1[0x15] = (int)((float)param_1[0x248] * (float)param_1[0x244] + (float)param_1[0x15]);
  fVar5 = (float10)FUN_00fdc1f0();
  param_1[0x469] = 1;
  param_1[0x248] =
       (int)(float)(fVar5 * (float10)(float)param_1[0x248] -
                   (float10)(float)param_1[0x244] * (float10)0.005);
  piVar4 = (int *)FUN_00b7b200();
  if (((piVar4 == (int *)0x0) || (iVar3 = FUN_00b86410(), iVar3 == 0)) ||
     (iVar3 = (**(code **)(*piVar4 + 0x228))(), iVar3 == 0)) {
    if (90000.0 < (float)param_1[0x34a]) {
      pcVar2 = *(code **)(*param_1 + 0x308);
      param_1[0x23d] = param_1[0x34c];
      (*pcVar2)(0x3e99999a,0x3ae4c388,0x3e8efa35,0);
    }
  }
  else {
    if (param_1[899] == 0) {
      param_1[0x4aa] = (int)(param_1 + 0x4dc);
    }
    FUN_00b8ced0(0x40800000,0x3f4ccccd,0x3da3d70a,0x3da3d70a);
  }
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 == 0) {
    iVar3 = FUN_00a8c760(0x12);
    if ((iVar3 == 0) && (iVar3 = (**(code **)(*param_1 + 800))(0x3c888889), iVar3 != 0)) {
      FUN_008abc80(0x10009);
    }
  }
  else {
    iVar3 = FUN_00a8cab0();
    param_1[0x1505] = iVar3;
    FUN_008a66b0();
    FUN_00a8caf0(0x10008,0,0,0);
    if (param_1[0x15c0] != 0) {
      param_1[0x15c0] = 0;
      FUN_00a8c9b0(0,0x34,0,0);
    }
  }
LAB_008ae0d1:
  iVar3 = FUN_00a8c760(0x12);
  if ((iVar3 == 0) && (fVar1 = (float)param_1[0x24a], NAN(fVar1) || 0.0 < fVar1 == (fVar1 == 0.0)))
  {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x008ae0f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x318))();
  return;
}

// 008AE100  FUN_008ae100  size=290  [between]
void __fastcall FUN_008ae100(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(*param_1 + 0x34c);
  param_1[0x2e5] = 1;
  iVar2 = (*pcVar1)();
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x388))(0);
    return;
  }
  if ((param_1[0x187] != 0) && (iVar2 = FUN_008ac0c0(0), iVar2 == 0)) {
    if (((DAT_01bea094 & 0x40000000) == 0) &&
       ((iVar2 = FUN_00a8c760(0x22), iVar2 != 0 && (0 < param_1[0x39c])))) {
      param_1[0x39c] = 0;
      iVar2 = FUN_00a8cab0();
      param_1[0x1505] = iVar2;
      FUN_008a66b0();
      FUN_00a8caf0(0x90000,0,0,0);
      if (param_1[0x15c0] == 0) {
        return;
      }
      param_1[0x15c0] = 0;
      FUN_00a8c9b0(0,0x34,0,0);
      return;
    }
    iVar2 = FUN_00a8c760(0x17);
    if ((((iVar2 != 0) || (0.0 < (float)param_1[0xd07])) &&
        (iVar2 = (**(code **)(*param_1 + 0x32c))(), iVar2 == 0)) &&
       (iVar2 = FUN_008a8cb0(0), iVar2 != 0)) {
      FUN_008a3d00(0);
      return;
    }
    iVar2 = FUN_00a8c760(0);
    if (iVar2 != 0) {
      FUN_008ac3e0(0);
    }
  }
  return;
}

// 008AE230  FUN_008ae230  size=556  [between]
void __fastcall FUN_008ae230(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  float10 fVar6;
  undefined1 auStack_20 [28];
  
  iVar5 = param_1[0x13c];
  iVar2 = FUN_00a8cbe0(0x80001);
  (**(code **)(*param_1 + 0x314))();
  iVar3 = FUN_00a8cac0();
  if (iVar3 == 0) {
    FUN_00a9f560("SubWeapon",0x3e088889,0,0);
    puVar4 = PTR_DAT_01883d90;
    if (iVar2 == 0) {
      puVar4 = PTR_DAT_01883d48;
    }
    FUN_00a94850(iVar5,0xffffffff,0,1,0,0,puVar4,0x3e088889,0);
    puVar4 = PTR_DAT_01883d88;
    if (iVar2 == 0) {
      puVar4 = PTR_DAT_01883d40;
    }
    FUN_00a94850(iVar5,0xffffffff,0,0,0,0,puVar4,0x3e088889,0);
    puVar4 = PTR_DAT_01883d8c;
    if (iVar2 == 0) {
      puVar4 = PTR_DAT_01883d44;
    }
    FUN_00a94850(iVar5,0xffffffff,0,0xffffffff,0,0,puVar4,0x3e088889,0);
    FUN_00a947e0(0,(float)param_1[0x9e3] * 0.95492965,0,0);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x24f] = 0x41200000;
  }
  else if (iVar3 != 1) {
    return;
  }
  param_1[0x9b7] = 0x40400000;
  FUN_00a947e0(0,(float)param_1[0x9e3] * 0.95492965,0,0);
  FUN_00b94790(0x3f800000,0x3f800000);
  switchD_0080dbae::default();
  iVar5 = FUN_00b7b310();
  if (iVar5 == 0) {
LAB_008ae3d7:
    if (param_1[0x504] != 0) goto LAB_008ae412;
    fVar1 = (float)param_1[0x24a];
  }
  else {
    iVar5 = FUN_00a81330();
    if (iVar5 == 0) goto LAB_008ae3d7;
    FUN_00c15010(auStack_20);
    FUN_00a8e880(auStack_20);
    fVar1 = (float)param_1[0x23d];
    param_1[0x24a] = (int)fVar1;
  }
  fVar6 = (float10)FUN_00ddba30(fVar1 - (float)param_1[0x25]);
  fVar6 = (float10)FUN_00ddba30((float)(fVar6 * (float10)0.3 + (float10)(float)param_1[0x25]));
  param_1[0x25] = (int)(float)fVar6;
LAB_008ae412:
  fVar1 = (float)param_1[0x24f];
  param_1[0x24f] = (int)(fVar1 - (float)param_1[0x244]);
  if (fVar1 - (float)param_1[0x244] <= 0.0) {
    iVar5 = FUN_00a8cab0();
    param_1[0x1505] = iVar5;
    FUN_008a66b0();
    FUN_00a8caf0(0x80001,0,0,0);
  }
  return;
}

// 008AE460  FUN_008ae460  size=1225  [between]
void __fastcall FUN_008ae460(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  float10 fVar6;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar4 = param_1[0x13c];
  iVar1 = FUN_00a8cbe0(0x80001);
  (**(code **)(*param_1 + 0x314))();
  iVar2 = FUN_00b7f610();
  if (iVar2 == 10) {
    param_1[0x157e] = 1;
  }
  iVar2 = FUN_00a8cac0();
  if (iVar2 == 0) {
    DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
    FUN_00a9f4c0("SubWeaponWalk",0x3e088889,0x2000,0);
    puVar3 = PTR_DAT_01883d90;
    if (iVar1 == 0) {
      puVar3 = PTR_DAT_01883d48;
    }
    FUN_00a94850(iVar4,0xffffffff,0,0,1,0,puVar3,0x3e088889,0x2000);
    puVar3 = PTR_DAT_01883d88;
    if (iVar1 == 0) {
      puVar3 = PTR_DAT_01883d40;
    }
    FUN_00a94850(iVar4,0xffffffff,0,0,0,0,puVar3,0x3e088889,0x2000);
    puVar3 = PTR_DAT_01883d8c;
    if (iVar1 == 0) {
      puVar3 = PTR_DAT_01883d44;
    }
    FUN_00a94850(iVar4,0xffffffff,0,0,0xffffffff,0,puVar3,0x3e088889,0x2000);
    puVar3 = PTR_DAT_01883dc0;
    if (iVar1 == 0) {
      puVar3 = PTR_DAT_01883d78;
    }
    FUN_00a94850(iVar4,0xffffffff,0,0,1,1,puVar3,0x3e088889,0x2000);
    puVar3 = PTR_DAT_01883da0;
    if (iVar1 == 0) {
      puVar3 = PTR_DAT_01883d58;
    }
    FUN_00a94850(iVar4,0xffffffff,0,0,0,1,puVar3,0x3e088889,0x2000);
    puVar3 = PTR_DAT_01883db0;
    if (iVar1 == 0) {
      puVar3 = PTR_DAT_01883d68;
    }
    FUN_00a94850(iVar4,0xffffffff,0,0,0xffffffff,1,puVar3,0x3e088889,0x2000);
    puVar3 = PTR_DAT_01883dc4;
    if (iVar1 == 0) {
      puVar3 = PTR_DAT_01883d7c;
    }
    FUN_00a94850(iVar4,0xffffffff,0,0,1,0xffffffff,puVar3,0x3e088889,0x2000);
    puVar3 = PTR_DAT_01883da4;
    if (iVar1 == 0) {
      puVar3 = PTR_DAT_01883d5c;
    }
    FUN_00a94850(iVar4,0xffffffff,0,0,0,0xffffffff,puVar3,0x3e088889,0x2000);
    puVar3 = PTR_DAT_01883db4;
    if (iVar1 == 0) {
      puVar3 = PTR_DAT_01883d6c;
    }
    FUN_00a94850(iVar4,0xffffffff,0,0,0xffffffff,0xffffffff,puVar3,0x3e088889,0x2000);
    puVar3 = PTR_DAT_01883dcc;
    if (iVar1 == 0) {
      puVar3 = PTR_DAT_01883d84;
    }
    FUN_00a94850(iVar4,0xffffffff,0,1,1,0,puVar3,0x3e088889,0x2000);
    puVar3 = PTR_DAT_01883dac;
    if (iVar1 == 0) {
      puVar3 = PTR_DAT_01883d64;
    }
    FUN_00a94850(iVar4,0xffffffff,0,1,0,0,puVar3,0x3e088889,0x2000);
    puVar3 = PTR_DAT_01883dbc;
    if (iVar1 == 0) {
      puVar3 = PTR_DAT_01883d74;
    }
    FUN_00a94850(iVar4,0xffffffff,0,1,0xffffffff,0,puVar3,0x3e088889,0x2000);
    puVar3 = PTR_DAT_01883dc8;
    if (iVar1 == 0) {
      puVar3 = PTR_DAT_01883d80;
    }
    FUN_00a94850(iVar4,0xffffffff,0,0xffffffff,1,0,puVar3,0x3e088889,0x2000);
    puVar3 = PTR_DAT_01883da8;
    if (iVar1 == 0) {
      puVar3 = PTR_DAT_01883d60;
    }
    FUN_00a94850(iVar4,0xffffffff,0,0xffffffff,0,0,puVar3,0x3e088889,0x2000);
    puVar3 = PTR_DAT_01883db8;
    if (iVar1 == 0) {
      puVar3 = PTR_DAT_01883d70;
    }
    FUN_00a94850(iVar4,0xffffffff,0,0xffffffff,0xffffffff,0,puVar3,0x3e088889,0x2000);
    FUN_00a947e0(0,(float)param_1[0x342] * 0.001,(float)param_1[0x9e3] * 0.95492965,
                 (float)param_1[0x343] * -0.001);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (iVar2 != 1) {
    return;
  }
  param_1[0x9b7] = 0x40400000;
  FUN_00a947e0(0,(float)param_1[0x342] * 0.001,(float)param_1[0x9e3] * 0.95492965,
               (float)param_1[0x343] * -0.001);
  FUN_00b94790(0x3f800000,0x3f800000);
  uStack_20 = 0x3e4ccccd;
  uStack_1c = 0x3fe00000;
  uStack_18 = 0x3e99999a;
  D3DXVec3TransformNormal(&uStack_20,&uStack_20,param_1 + 4);
  iVar4 = FUN_00a12210(0xf00);
  uStack_20 = *(undefined4 *)(iVar4 + 0x4c);
  iVar4 = FUN_00b7f610();
  uVar5 = (uint)(iVar4 == 10);
  iVar4 = FUN_00b7f610();
  if (iVar4 == 10) {
    iVar4 = param_1[0x15ca];
  }
  else {
    iVar4 = param_1[0xcff];
  }
  fVar6 = (float10)FUN_00ddba30((float)param_1[0x9e3] - 0.34906584,iVar4,uVar5);
  FUN_008ab560(&stack0xffffffd4,(float)fVar6,iVar4,uVar5);
  FUN_008a2220();
  return;
}

// 008AE930  FUN_008ae930  size=2070  [between]
undefined4 __thiscall FUN_008ae930(int *param_1,int *param_2)

{
  byte bVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  bool bVar10;
  undefined4 uVar11;
  int local_c;
  
  bVar2 = 0.0 < (float)param_1[0xb04];
  iVar9 = -1;
  local_c = -1;
  iVar6 = FUN_00a8cab0();
  iVar7 = (**(code **)(*param_1 + 0x32c))();
  bVar10 = iVar7 != 0;
  param_1[0xa04] = param_1[0xa04] + (uint)*(byte *)((int)param_2 + 0x11);
  bVar1 = *(byte *)((int)param_2 + 0x11);
  if ((param_2[0x23] & 0x10000000U) == 0) {
    if ((3 < bVar1) || (iVar9 = 0, 3 < bVar1)) {
      if (5 < bVar1) goto LAB_008ae9be;
      if (iVar9 < 1) {
        iVar9 = 1;
      }
    }
LAB_008ae9ba:
    if (5 < bVar1) goto LAB_008ae9be;
LAB_008ae9cc:
    if (7 < bVar1) goto LAB_008ae9d0;
  }
  else {
    if (bVar1 < 6) {
      iVar9 = 0;
      goto LAB_008ae9ba;
    }
LAB_008ae9be:
    if (bVar1 < 8) {
      if (iVar9 < 2) {
        iVar9 = 2;
      }
      goto LAB_008ae9cc;
    }
LAB_008ae9d0:
    if ((bVar1 < 0xb) && (iVar9 < 4)) {
      iVar9 = 4;
    }
  }
  if (((param_2[0x24] & 0x2000000U) != 0) && (iVar9 < 4)) {
    iVar9 = 4;
  }
  if (9 < param_1[0xa05]) {
    bVar2 = false;
    param_1[0xa05] = 0;
    if (iVar9 < 1) {
      iVar9 = 1;
    }
  }
  if (5 < param_1[0xa06]) {
    bVar2 = false;
    param_1[0xa06] = 0;
    if (iVar9 < 2) {
      iVar9 = 2;
    }
  }
  if ((*(byte *)(param_2 + 0x23) & 0x20) != 0) {
    iVar9 = 0xb;
  }
  if ((bVar2) && (iVar7 = (**(code **)(*param_1 + 0x32c))(), iVar7 == 0)) {
    iVar9 = 0;
  }
  if (((param_2[0x23] & 0x800U) != 0) && (iVar9 = 6, iVar6 == 0x3000b)) {
    iVar9 = 5;
  }
  if ((((param_2[0x23] & 0x20000U) != 0) && ((DAT_01bea090 & 0x80000000) == 0)) &&
     (param_1[0xe18] == 0)) {
    param_1[0xe17] = 1;
  }
  iVar7 = FUN_00a8c760(0x1a);
  if (iVar7 != 0) {
    iVar9 = 8;
  }
  iVar7 = FUN_00a8c760(0x1b);
  if (iVar7 != 0) {
    iVar9 = 9;
  }
  if ((param_2[0x24] & 0x800000U) != 0) {
    iVar9 = 7;
    param_1[0xef0] = 0;
  }
  if ((param_2[0x24] & 0x200000U) != 0) {
    iVar9 = 7;
    param_1[0xef0] = 1;
  }
  iVar7 = FUN_00a8c760(8);
  if ((iVar7 != 0) || ((param_1[0xc61] != 0 && (*(byte *)((int)param_2 + 0x11) < 6)))) {
    iVar9 = 0;
    bVar10 = false;
  }
  bVar2 = false;
  if (((((param_2[0x23] & 0x10000000U) != 0) && (*(byte *)((int)param_2 + 0x11) < 6)) &&
      ((bVar10 || (iVar7 = (**(code **)(*param_1 + 0x1fc))(), iVar7 != 0)))) && (iVar9 < 2)) {
    iVar9 = 0;
    bVar2 = true;
  }
  iVar7 = (**(code **)(*param_1 + 0x368))();
  if ((iVar7 != 0) && ((iVar9 == 0 || (iVar9 == 1)))) {
    iVar9 = 2;
  }
  if (*param_2 == 0xe2) {
    iVar9 = 3;
  }
  if ((param_2[0x24] & 0x20000000U) != 0) {
    iVar9 = 5;
  }
  if (*param_2 == 0xd9) {
    iVar9 = 6;
  }
  if (((*(byte *)(param_2 + 0x23) & 0x40) == 0) ||
     (iVar7 = (**(code **)(*param_1 + 0x3ec))(), iVar7 == 0)) {
    if (iVar9 == 0) {
      iVar7 = FUN_00a8c760(8);
      if (iVar7 == 0) {
        param_1[0xa05] = param_1[0xa05] + 1;
      }
      (**(code **)(*param_1 + 0x394))();
      FUN_00dda360(0,0x3e99999a,0,3);
    }
  }
  else {
    iVar9 = 0xc;
    param_1[0xa05] = 0;
  }
  uVar8 = 0;
  iVar7 = FUN_00a8c760(0x2b);
  if ((iVar7 == 0) && (iVar7 = (**(code **)(*param_1 + 0x1d8))(), iVar7 == 0)) {
    uVar3 = 0x3f19999a;
    uVar4 = 0x3f4ccccd;
    if (iVar9 == 1) {
      uVar8 = 1;
      iVar6 = (**(code **)(*param_1 + 0x1d8))();
      param_1[0xa06] = param_1[0xa06] + 1;
      if (iVar6 == 0) {
        local_c = 0x30000;
        FUN_00dda360(0,0x3ecccccd,0x3e99999a,4);
      }
      else {
        (**(code **)(*param_1 + 0x394))();
        FUN_00dda360(0,0x3e99999a,0,3);
      }
    }
    else {
      if (iVar9 == 2) {
        uVar4 = 0x3f19999a;
        uVar3 = 0x3ecccccd;
        local_c = 0x30001;
        uVar11 = 6;
        uVar8 = 2;
        goto LAB_008aecba;
      }
      if (iVar9 == 3) {
        uVar8 = 2;
        local_c = 0x30002;
        FUN_00dda360(0,0x3f333333,0x3f000000,7);
      }
      else if (iVar9 == 4) {
        uVar8 = 3;
        local_c = 0x30002;
        sVar5 = FUN_00dde2d0(0,2);
        if (sVar5 == 2) {
          local_c = 0x30003;
        }
        FUN_00dda360(0,0x3f4ccccd,0x3f19999a,8);
      }
      else {
        if (iVar9 == 5) {
          uVar8 = 3;
          uVar4 = 0x3f4ccccd;
          local_c = 0x30003;
          uVar11 = 8;
        }
        else {
          if (iVar9 != 0xb) goto LAB_008aed96;
          local_c = 0x30000;
          uVar8 = 0;
          if (iVar6 == 0x30000) {
            local_c = -1;
          }
          uVar11 = 8;
          uVar3 = 0x3f19999a;
        }
LAB_008aecba:
        FUN_00dda360(0,uVar4,uVar3,uVar11);
      }
    }
LAB_008aed96:
    if ((*(byte *)(param_2 + 0x23) & 0x80) == 0) {
      FUN_00b7a7e0(uVar8);
      iVar6 = FUN_00b7a840();
      if ((iVar6 != 0) || (iVar9 == 6)) {
        local_c = 0x3000b;
        FUN_00dda360(0,0x3f4ccccd,0x3f19999a,8);
      }
    }
    if (iVar9 == 8) {
      local_c = 0x30006;
      FUN_00dda360(0,0x3f4ccccd,0x3f19999a,8);
      goto LAB_008af00b;
    }
    if (iVar9 == 9) {
      local_c = 0x30006;
      FUN_00dda360(0,0x3f4ccccd,0x3f19999a,8);
      goto LAB_008af00b;
    }
  }
  else {
    if (!bVar2) {
      param_1[0xa07] = param_1[0xa07] + 1;
    }
    if ((param_2[0x23] & 0x10000000U) == 0) {
      uVar8 = 0xf6;
LAB_008aeeb5:
      FUN_00aa4080(uVar8,2,0,0x3f800000,0x8000010,0xbf800000,0x3f800000);
    }
    else if (!bVar2) {
      uVar8 = 0xf7;
      goto LAB_008aeeb5;
    }
    if ((4 < param_1[0xa07]) && (param_1[0xa08] == 0)) {
      local_c = 0x3000e;
    }
    if (iVar9 == 2) {
      local_c = 0x3000e;
      FUN_00dda360(0,0x3f333333,0x3f19999a,8);
    }
    else if (iVar9 == 5) {
      local_c = 0x3000e;
      FUN_00dda360(0,0x3f333333,0x3f19999a,8);
    }
    else if (iVar9 == 3) {
      local_c = 0x3000e;
      FUN_00dda360(0,0x3f333333,0x3f19999a,8);
    }
    else if ((iVar9 == 4) || (iVar9 == 6)) {
      local_c = 0x3000e;
      FUN_00dda360(0,0x3f4ccccd,0x3f4ccccd,8);
    }
    if ((*(byte *)((int)param_2 + 0x93) & 1) == 0) {
      if (local_c != -1) goto LAB_008aefcb;
    }
    else {
      FUN_00dda360(0,0x3f4ccccd,0x3f4ccccd,8);
      local_c = 0x30005;
LAB_008aefcb:
      param_1[0xa08] = 1;
    }
    (**(code **)(*param_1 + 0x32c))();
  }
  if (iVar9 == 7) {
    FUN_00dda360(0,0x3f4ccccd,0x3f4ccccd,8);
    local_c = 0x30004;
  }
LAB_008af00b:
  if ((*(byte *)(param_2 + 0x23) & 4) != 0) {
    param_1[0x21c] = -1;
  }
  iVar9 = FUN_00b7c970();
  if ((iVar9 < 1) || (param_1[0x2e3] != 0)) {
    FUN_00b7ab80(0x42340000,0x3dcccccd);
    iVar9 = (**(code **)(*param_1 + 0x1d8))();
    if (iVar9 == 0) {
      iVar9 = FUN_00a8cab0();
      param_1[0x1505] = iVar9;
      FUN_008a66b0();
      FUN_00a8caf0(0x50000,0,0,0);
      if (param_1[0x15c0] != 0) {
        param_1[0x15c0] = 0;
        FUN_00a8c9b0(0,0x34,0,0);
      }
    }
    else if ((*(byte *)((int)param_2 + 0x93) & 1) == 0) {
      FUN_008abc80(0x50003);
    }
    else {
      FUN_008abc80(0x50002);
    }
    FUN_00b7ce10();
    if ((((byte)DAT_01bea094 & 8) != 0) && (param_1[0x2e3] != 0)) {
      iVar9 = FUN_00b7c970();
      FUN_00b877b0(1 - iVar9,0);
      FUN_008abc80(0x30003);
      param_1[0x2e2] = 1;
    }
  }
  else if (local_c != -1) {
    FUN_008abc80(local_c);
    return 1;
  }
  return 0;
}

// 008AF150  Pl1500::vf19C  size=308  [class]
void __thiscall Pl1500::vf19C(int *param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 local_a0 [48];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  
  uVar5 = FUN_00a81330();
  uVar1 = *(undefined4 *)(param_2 + 0x100);
  uVar2 = *(undefined4 *)(param_2 + 0x104);
  uVar3 = *(undefined4 *)(param_2 + 0x108);
  FUN_009dbcf0();
  FID_conflict__memcpy(local_a0,(void *)(param_2 + 0x40),0x40);
  bVar4 = true;
  if ((param_1[0x469] != 0) && ((*(uint *)(param_2 + 0x8c) & 0x10000000) != 0)) {
    bVar4 = false;
  }
  local_70 = uVar1;
  local_6c = uVar2;
  local_68 = uVar3;
  iVar6 = (**(code **)(*param_1 + 0x37c))();
  if (iVar6 != 0) {
    bVar4 = false;
  }
  if (((param_3 & 1) != 0) && (bVar4)) {
    FUN_00b7b380(uVar5,param_2 + 0x100,1);
  }
  if (((param_3 & 2) != 0) && (bVar4)) {
    FUN_00b7b380(uVar5,param_2 + 0x100,1);
  }
  if (*(short *)(param_2 + 0x84) == -1) {
    (**(code **)(*param_1 + 0x1ac))
              (*(undefined4 *)(param_2 + 0x144),param_2,*(undefined4 *)(param_2 + 300),local_a0);
    return;
  }
  Bh0064::vf1A8(param_2,param_3,param_1);
  return;
}

// 008AF290  FUN_008af290  size=152  [between]
void __fastcall FUN_008af290(int *param_1)

{
  int iVar1;
  float10 fVar2;
  
  (**(code **)(*param_1 + 800))(0x3c888889);
  if (param_1[0x187] != 0) {
    iVar1 = FUN_00a8c760(0);
    if ((iVar1 != 0) && ((param_1[0x33f] & (param_1[0x392] | param_1[0x386])) != 0)) {
      FUN_008abc80(0x3000d);
    }
    if (param_1[0x187] == 1) {
      iVar1 = FUN_00a8c760(0xb);
      if ((iVar1 != 0) && (param_1[0x9a5] != 0)) {
        FUN_008abc80(0x3000c);
        fVar2 = (float10)FUN_00ddba30((float)param_1[0x9a6] + 3.1415927);
        param_1[0x25] = (int)(float)fVar2;
      }
    }
  }
  return;
}

// 008AF330  FUN_008af330  size=462  [between]
void __fastcall FUN_008af330(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  short sVar3;
  int *piVar4;
  int iVar5;
  float10 fVar6;
  undefined4 auStack_c [3];
  
  pcVar1 = *(code **)(*param_1 + 0x314);
  param_1[0x99a] = 1;
  (*pcVar1)();
  auStack_c[0] = 0xd5;
  auStack_c[1] = 0xdb;
  auStack_c[2] = 0xd6;
  (**(code **)(*param_1 + 0x220))(0x41200000);
  switch(param_1[0x187]) {
  case 0:
    sVar3 = FUN_00dde2d0(0,1);
    uVar2 = *(undefined4 *)(&stack0xffffffec + sVar3 * 4);
    param_1[0x250] = (int)sVar3;
    fVar6 = (float10)FUN_00ddba30((float)param_1[0x9fb] + 3.1415927);
    param_1[0x25] = (int)(float)fVar6;
    FUN_00aa4080(uVar2,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
    FUN_00b895d0();
    param_1[0x24] = 0;
    piVar4 = (int *)FUN_00c1b9a0();
    (**(code **)(*piVar4 + 0x30))();
    break;
  case 1:
    break;
  case 2:
    FUN_00aa4080(auStack_c[param_1[0x250]],0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      if ((*(byte *)(param_1 + 0x250) & 1) == 0) {
        FUN_008abc80(0x30009);
        return;
      }
      FUN_008abc80(0x3000a);
      return;
    }
  default:
    goto switchD_008af393_default;
  }
  (**(code **)(*param_1 + 0x220))(0x41200000);
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar5 = FUN_00a94ce0(0);
  if (iVar5 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
switchD_008af393_default:
  return;
}

// 008AF510  FUN_008af510  size=155  [between]
void __fastcall FUN_008af510(int *param_1)

{
  int iVar1;
  float10 fVar2;
  
  (**(code **)(*param_1 + 800))(0x3c888889);
  if (param_1[0x187] != 0) {
    iVar1 = FUN_00a8c760(0);
    if ((iVar1 != 0) && ((param_1[0x33f] & (param_1[0x392] | param_1[0x386])) != 0)) {
      FUN_008abc80(0x3000d);
    }
    iVar1 = FUN_00a8cac0();
    if (iVar1 == 1) {
      iVar1 = FUN_00a8c760(0xb);
      if ((iVar1 != 0) && (param_1[0x9a5] != 0)) {
        FUN_008abc80(0x3000c);
        fVar2 = (float10)FUN_00ddba30((float)param_1[0x9a6] + 3.1415927);
        param_1[0x25] = (int)(float)fVar2;
      }
    }
  }
  return;
}

// 008AF5B0  FUN_008af5b0  size=487  [between]
void __fastcall FUN_008af5b0(int *param_1)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  float10 fVar4;
  
  pcVar1 = *(code **)(*param_1 + 0x314);
  param_1[0x99a] = 1;
  (*pcVar1)();
  if (param_1[0x2dd] != 0) {
    param_1[0x4fe] = 0;
  }
  switch(param_1[0x187]) {
  case 0:
    param_1[0x250] = 0;
    fVar4 = (float10)FUN_00ddba30((float)param_1[0x9fb] + 3.1415927);
    param_1[0x25] = (int)(float)fVar4;
    FUN_00aa4080(0xe2,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    pcVar1 = *(code **)(*param_1 + 0x220);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar1)(0x41200000);
    DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
    FUN_00b895d0();
    param_1[0x24] = 0;
    piVar2 = (int *)FUN_00c1b9a0();
    (**(code **)(*piVar2 + 0x30))();
  case 1:
    (**(code **)(*param_1 + 0x220))(0x41200000);
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_00aa4080(0xe4,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar3 = (**(code **)(*param_1 + 800))(0x3c888889);
    if (iVar3 != 0) {
      FUN_00aa4080(0xe3,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 3:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_008abc80(0x30009);
    }
  }
  return;
}

// 008AF7B0  FUN_008af7b0  size=92  [between]
void __fastcall FUN_008af7b0(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 800))(0x3c888889);
  if (param_1[0x187] != 0) {
    if (3.0 < (float)param_1[0x248]) {
      (**(code **)(*param_1 + 0x1d4))(1);
    }
    iVar1 = (**(code **)(*param_1 + 0x1d8))();
    if (iVar1 != 0) {
      FUN_008ac0c0(0);
    }
  }
  return;
}

// 008AF810  FUN_008af810  size=493  [between]
void __fastcall FUN_008af810(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  float10 fVar4;
  
  pcVar1 = *(code **)(*param_1 + 0x314);
  param_1[0x99a] = 1;
  (*pcVar1)();
  iVar2 = FUN_00a8c760(0x12);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x318))();
  }
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0xe7,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    pcVar1 = *(code **)(*param_1 + 0x220);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar1)(0x41200000);
    DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
    FUN_00b895d0();
    param_1[0x24] = 0;
    fVar4 = (float10)FUN_00ddba30((float)param_1[0x9fb] + 3.1415927);
    param_1[0x25] = (int)(float)fVar4;
    param_1[0x225] = 0x3edd2f1b;
    if (param_1[0xef0] != 0) {
      param_1[0x225] = 0x3f0a3d71;
    }
    param_1[0xeef] = 1;
    param_1[0x224] = 0;
    param_1[0x226] = 0;
    param_1[0xa00] = 0;
    param_1[0xa01] = 0;
    param_1[0xa02] = 0;
    param_1[0x248] = 0;
    param_1[0xef1] = 0x41700000;
    if (param_1[0xef0] != 0) {
      param_1[0xeef] = 1;
      param_1[0xef1] = 0x41b00000;
    }
    param_1[0xef0] = 0;
    param_1[0xa07] = 0;
    param_1[0xa08] = 0;
    piVar3 = (int *)FUN_00c1b9a0();
    (**(code **)(*piVar3 + 0x30))();
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  param_1[0x248] = (int)((float)param_1[0x244] + (float)param_1[0x248]);
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    iVar2 = FUN_00a8cab0();
    param_1[0x1505] = iVar2;
    FUN_008a66b0();
    FUN_00a8caf0(0x30008,0,0,0);
    if (param_1[0x15c0] != 0) {
      param_1[0x15c0] = 0;
      FUN_00a8c9b0(0,0x34,0,0);
    }
    param_1[0xa00] = 0;
    param_1[0xa01] = 0;
    param_1[0xa02] = 0;
  }
  return;
}

// 008AFA00  FUN_008afa00  size=66  [between]
void __fastcall FUN_008afa00(int *param_1)

{
  (**(code **)(*param_1 + 800))(0x3c888889);
  if (param_1[0x187] != 0) {
    (**(code **)(*param_1 + 0x1d4))(1);
    if (param_1[0x187] != 0) {
      FUN_008ac0c0(0);
    }
  }
  return;
}

// 008AFA50  FUN_008afa50  size=329  [between]
void __fastcall FUN_008afa50(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  
  pcVar1 = *(code **)(*param_1 + 0x314);
  param_1[0x99a] = 1;
  (*pcVar1)();
  iVar2 = FUN_00a8cac0();
  if (iVar2 == 0) {
    FUN_00aa4080(0xea,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    pcVar1 = *(code **)(*param_1 + 0x220);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar1)(0x41200000);
    DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
    FUN_00b895d0();
    param_1[0x24] = 0;
    param_1[0x225] = -0x41666666;
    param_1[0x224] = 0;
    param_1[0x226] = 0;
    piVar3 = (int *)FUN_00c1b9a0();
    (**(code **)(*piVar3 + 0x30))();
  }
  else if (iVar2 != 1) {
    return;
  }
  param_1[0x225] = (int)((float)param_1[0x225] - 0.05);
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar2 = (**(code **)(*param_1 + 800))(0x3c888889);
  if (iVar2 != 0) {
    iVar2 = FUN_00a8cab0();
    param_1[0x1505] = iVar2;
    FUN_008a66b0();
    FUN_00a8caf0(0x30007,0,0,0);
    if (param_1[0x15c0] != 0) {
      param_1[0x15c0] = 0;
      FUN_00a8c9b0(0,0x34,0,0);
    }
  }
  return;
}

// 008AFBA0  FUN_008afba0  size=175  [between]
void __fastcall FUN_008afba0(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 800))(0x3c888889);
  if (param_1[0x187] != 0) {
    iVar1 = FUN_008ac0c0(0);
    if ((iVar1 == 0) && ((DAT_01bea094 & 0x40000000) == 0)) {
      iVar1 = FUN_00a8c760(0x22);
      if ((iVar1 != 0) && (0 < param_1[0x39c])) {
        param_1[0x39c] = 0;
        iVar1 = FUN_00a8cab0();
        param_1[0x1505] = iVar1;
        FUN_008a66b0();
        FUN_00a8caf0(0x90000,0,0,0);
        if (param_1[0x15c0] != 0) {
          param_1[0x15c0] = 0;
          FUN_00a8c9b0(0,0x34,0,0);
        }
      }
    }
  }
  return;
}

// 008AFC50  FUN_008afc50  size=298  [between]
void __fastcall FUN_008afc50(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  
  pcVar1 = *(code **)(*param_1 + 0x314);
  param_1[0x99a] = 1;
  (*pcVar1)();
  iVar2 = FUN_00a8cac0();
  if (iVar2 == 0) {
    uVar3 = 0xec;
    iVar2 = FUN_00a8cbe0(0x30007);
    if (iVar2 != 0) {
      uVar3 = 0xeb;
    }
    FUN_00aa4080(uVar3,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    pcVar1 = *(code **)(*param_1 + 0x220);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar1)(0x41200000);
    DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
    FUN_00b895d0();
    param_1[0x24] = 0;
  }
  else if (iVar2 != 1) {
    if (iVar2 != 2) {
      return;
    }
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
    FUN_00b94790(0x3f800000,0x3f800000);
    if (0.0 <= (float)param_1[0x248]) {
      return;
    }
    FUN_008abc80(0x3000a);
    return;
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x41700000;
  }
  return;
}

// 008AFD80  FUN_008afd80  size=51  [between]
void __fastcall FUN_008afd80(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x1d4))(1);
  if (param_1[0x187] != 0) {
    iVar1 = (**(code **)(*param_1 + 0x1d8))();
    if (iVar1 != 0) {
      FUN_008ac0c0(0);
    }
  }
  return;
}

// 008AFDC0  FUN_008afdc0  size=639  [between]
void __fastcall FUN_008afdc0(int *param_1)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  int iStack_14;
  
  pcVar1 = *(code **)(*param_1 + 0x314);
  param_1[0x99a] = 1;
  (*pcVar1)();
  iVar5 = param_1[0x187];
  if (iVar5 == 0) {
    FUN_00aa4080(0xe9,0,0x3e2aaaab,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
    FUN_00b895d0();
    param_1[0x24] = 0;
    fStack_20 = (float)param_1[0xa00];
    fStack_1c = (float)param_1[0xa01];
    fStack_18 = (float)param_1[0xa02];
    iStack_14 = param_1[0xa03];
    if (((fStack_20 != 0.0) || (fStack_1c != 0.0)) || (fStack_18 != 0.0)) {
      fVar2 = fStack_18 * fStack_18 + fStack_1c * fStack_1c + fStack_20 * fStack_20;
      if (fVar2 < 0.0 == (fVar2 == 0.0)) {
        FUN_00ddf460(&fStack_20,&fStack_20);
        fVar2 = fStack_1c;
        fVar3 = fStack_20;
        fVar4 = fStack_18;
        if (fStack_1c <= 0.5) {
          param_1[0x225] = (int)(fStack_1c * 0.15 + (float)param_1[0x225]);
          param_1[0x224] = (int)(fStack_20 * 0.2 + (float)param_1[0x224]);
          param_1[0x226] = (int)(fStack_18 * 0.2 + (float)param_1[0x226]);
          goto LAB_008affd5;
        }
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        fVar2 = 1.0;
        fVar3 = 0.0;
        fVar4 = 0.0;
      }
      param_1[0x225] = (int)(fVar2 * 0.15);
      param_1[0x224] = (int)(fVar3 * 0.2 + (float)param_1[0x224]);
      param_1[0x226] = (int)(fVar4 * 0.2 + (float)param_1[0x226]);
    }
  }
  else if (iVar5 != 1) {
    if (iVar5 != 2) {
      return;
    }
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 == 0) {
      return;
    }
    FUN_008abc80(0x3000a);
    return;
  }
LAB_008affd5:
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar5 = (**(code **)(*param_1 + 800))(0x3c888889);
  if (iVar5 != 0) {
    FUN_00aa4080(0xe8,0,0x3e2aaaab,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  return;
}

// 008B0040  FUN_008b0040  size=76  [between]
void __fastcall FUN_008b0040(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 800))(0x3c888889);
  if (param_1[0x187] != 0) {
    if ((param_1[0x187] == 3) && (iVar1 != 0)) {
      param_1[0x187] = 4;
    }
    iVar1 = FUN_00a8c760(0);
    if (iVar1 != 0) {
      FUN_008ac0c0(0);
    }
  }
  return;
}

// 008B0090  FUN_008b0090  size=401  [between]
void __fastcall FUN_008b0090(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(*param_1 + 0x314);
  param_1[0x99a] = 1;
  (*pcVar1)();
  (**(code **)(*param_1 + 0x220))(0x41200000);
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0xf3,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b7a7e0(3);
    break;
  case 1:
    break;
  case 2:
    FUN_00aa4080(0xf4,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00b94790(0x3f800000,0x3f800000);
    return;
  case 4:
    FUN_00aa4080(0xf5,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_008b01e3;
  case 5:
LAB_008b01e3:
    (**(code **)(*param_1 + 0x318))();
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_008abc80(0x3000a);
      return;
    }
  default:
    goto switchD_008b00d0_default;
  }
  (**(code **)(*param_1 + 0x318))();
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
switchD_008b00d0_default:
  return;
}

// 008B0240  FUN_008b0240  size=165  [between]
void __fastcall FUN_008b0240(int *param_1)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 != 0) {
    iVar1 = FUN_00a8c760(0);
    if ((iVar1 != 0) && ((param_1[0x33f] & (param_1[0x392] | param_1[0x386])) != 0)) {
      FUN_008abc80(0x3000d);
    }
    iVar1 = FUN_00a8cac0();
    if ((iVar1 != 1) && (iVar1 = FUN_00a8cac0(), iVar1 != 2)) {
      return;
    }
    iVar1 = FUN_00a8c760(0xb);
    if ((iVar1 != 0) && (param_1[0x9a5] != 0)) {
      FUN_008abc80(0x3000c);
      fVar2 = (float10)FUN_00ddba30((float)param_1[0x9a6] + 3.1415927);
      param_1[0x25] = (int)(float)fVar2;
    }
    (**(code **)(*param_1 + 0x1d4))(1);
  }
  return;
}

// 008B02F0  FUN_008b02f0  size=884  [between]
void __fastcall FUN_008b02f0(int *param_1)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  float10 fVar8;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  int iStack_14;
  
  pcVar1 = *(code **)(*param_1 + 0x314);
  param_1[0x99a] = 1;
  (*pcVar1)();
  uVar5 = FUN_00a8cac0();
  switch(uVar5) {
  case 0:
    FUN_00aa4080(0xdd,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
    FUN_00b895d0();
    param_1[0x24] = 0;
    piVar6 = (int *)FUN_00c1b9a0();
    (**(code **)(*piVar6 + 0x30))();
    fVar8 = (float10)FUN_00ddba30((float)param_1[0x9fb] + 3.1415927);
    param_1[0x25] = (int)(float)fVar8;
    fStack_20 = (float)param_1[0xa00];
    fStack_1c = (float)param_1[0xa01];
    fStack_18 = (float)param_1[0xa02];
    iStack_14 = param_1[0xa03];
    if (((fStack_20 == 0.0) && (fStack_1c == 0.0)) && (fStack_18 == 0.0)) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    else {
      fVar2 = fStack_18 * fStack_18 + fStack_1c * fStack_1c + fStack_20 * fStack_20;
      if (fVar2 < 0.0 == (fVar2 == 0.0)) {
        FUN_00ddf460(&fStack_20,&fStack_20);
        fVar2 = fStack_1c;
        fVar3 = fStack_20;
        fVar4 = fStack_18;
        if (fStack_1c <= 0.5) {
          param_1[0x187] = param_1[0x187] + 1;
          param_1[0x225] = (int)(fStack_1c * 0.15 + (float)param_1[0x225]);
          param_1[0x224] = (int)(fStack_20 * 0.2 + (float)param_1[0x224]);
          param_1[0x226] = (int)(fStack_18 * 0.2 + (float)param_1[0x226]);
          goto LAB_008b050b;
        }
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        fVar2 = 1.0;
        fVar3 = 0.0;
        fVar4 = 0.0;
      }
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x225] = (int)(fVar2 * 0.15);
      param_1[0x224] = (int)(fVar3 * 0.2 + (float)param_1[0x224]);
      param_1[0x226] = (int)(fVar4 * 0.2 + (float)param_1[0x226]);
    }
    goto LAB_008b050b;
  case 1:
LAB_008b050b:
    (**(code **)(*param_1 + 0x220))(0x41200000);
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar7 = FUN_00a94ce0(0);
    if (iVar7 != 0) {
      iVar7 = (**(code **)(*param_1 + 800))(0x3c888889);
      if (iVar7 != 0) {
        FUN_00aa4080(0xdb,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        param_1[0x187] = 3;
        return;
      }
      FUN_00aa4080(0xdc,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar7 = (**(code **)(*param_1 + 800))(0x3c888889);
    if (iVar7 != 0) {
      FUN_00aa4080(0xdb,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 3:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar7 = FUN_00a94ce0(0);
    if (iVar7 != 0) {
      FUN_008abc80(0x30009);
      return;
    }
  }
  return;
}

// 008B0680  FUN_008b0680  size=290  [between]
void __fastcall FUN_008b0680(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x314))();
  param_1[0x99a] = 1;
  DAT_01bea060 = DAT_01bea060 | 0x20000000;
  FUN_008a8f40(1,0,0);
  param_1[0x139] = 1;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0xf9,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
    FUN_00b895d0();
    param_1[0x24] = 0;
    FUN_00c29a50();
    FUN_00d4d920();
    (**(code **)(*param_1 + 0x220))(0x41200000);
    FUN_00b7ab80(0x42340000,0x3dcccccd);
    FUN_00b7ce10();
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if ((iVar1 != 0) && ((DAT_01bea060 & 0x800000) == 0)) {
    FUN_00c17870();
    return;
  }
  return;
}

// 008B07B0  FUN_008b07b0  size=145  [between]
void __fastcall FUN_008b07b0(int *param_1)

{
  int iVar1;
  
  DAT_01bea060 = DAT_01bea060 | 0x20000000;
  (**(code **)(*param_1 + 0x314))();
  param_1[0x99a] = 1;
  FUN_008a8f40(1,0,0);
  param_1[0x139] = 1;
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
    FUN_00b895d0();
    param_1[0x24] = 0;
    FUN_00c29a50();
    FUN_00d4d920();
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00b7ce10();
  }
  else if (iVar1 != 1) {
    return;
  }
  if ((DAT_01bea060 & 0x800000) != 0) {
    return;
  }
  FUN_00c17870();
  return;
}

// 008B0850  FUN_008b0850  size=431  [between]
void __fastcall FUN_008b0850(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  DAT_01bea060 = DAT_01bea060 | 0x20000000;
  (**(code **)(*param_1 + 0x314))();
  param_1[0x99a] = 1;
  FUN_008a8f40(1,0,0);
  param_1[0x139] = 1;
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(0xea,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    (**(code **)(*param_1 + 0x220))(0x41200000);
    DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
    FUN_00b895d0();
    param_1[0x24] = 0;
    param_1[0x225] = -0x41666666;
    param_1[0x224] = 0;
    param_1[0x226] = 0;
    piVar2 = (int *)FUN_00c1b9a0();
    (**(code **)(*piVar2 + 0x30))();
    FUN_00c29a50();
    FUN_00d4d920();
    FUN_00b7ce10();
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (iVar1 != 1) {
    if (iVar1 != 2) {
      return;
    }
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 == 0) {
      return;
    }
    if ((DAT_01bea060 & 0x800000) != 0) {
      return;
    }
    FUN_00c17870();
    return;
  }
  param_1[0x225] = (int)((float)param_1[0x225] - 0.05);
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar1 = (**(code **)(*param_1 + 800))(0x3c888889);
  if (iVar1 != 0) {
    FUN_00aa4080(0xeb,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  return;
}

// 008B0A00  FUN_008b0a00  size=561  [between]
void __fastcall FUN_008b0a00(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  float10 fVar4;
  
  DAT_01bea060 = DAT_01bea060 | 0x20000000;
  (**(code **)(*param_1 + 0x314))();
  param_1[0x99a] = 1;
  FUN_008a8f40(1,0,0);
  param_1[0x139] = 1;
  uVar1 = FUN_00a8cac0();
  switch(uVar1) {
  case 0:
    FUN_00aa4080(0xdd,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
    FUN_00b895d0();
    param_1[0x24] = 0;
    piVar2 = (int *)FUN_00c1b9a0();
    (**(code **)(*piVar2 + 0x30))();
    FUN_00c29a50();
    FUN_00d4d920();
    fVar4 = (float10)FUN_00ddba30((float)param_1[0x9fb] + 3.1415927);
    param_1[0x25] = (int)(float)fVar4;
    FUN_00b7ce10();
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_008b0ae3;
  case 1:
LAB_008b0ae3:
    (**(code **)(*param_1 + 0x220))(0x41200000);
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      iVar3 = (**(code **)(*param_1 + 800))(0x3c888889);
      if (iVar3 == 0) {
        FUN_00aa4080(0xdc,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        param_1[0x187] = param_1[0x187] + 1;
        return;
      }
      FUN_00aa4080(0xdb,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = 3;
      return;
    }
    break;
  case 2:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar3 = (**(code **)(*param_1 + 800))(0x3c888889);
    if (iVar3 != 0) {
      FUN_00aa4080(0xdb,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 3:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if ((iVar3 != 0) && ((DAT_01bea060 & 0x800000) == 0)) {
      FUN_00c17870();
      return;
    }
  }
  return;
}

// 008B0C50  FUN_008b0c50  size=264  [between]
void __fastcall FUN_008b0c50(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  (**(code **)(*param_1 + 0x314))();
  iVar1 = FUN_00a8c760(0x12);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x318))();
  }
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    uVar2 = 0x114;
    iVar1 = FUN_00a8cbe0(0xa0003);
    if (iVar1 != 0) {
      uVar2 = 0x115;
    }
    (**(code **)(*param_1 + 0x318))();
    FUN_00aa4080(uVar2,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (iVar1 != 1) {
    return;
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    iVar1 = FUN_00a8cab0();
    param_1[0x1505] = iVar1;
    FUN_008a66b0();
    FUN_00a8caf0(0x10008,0,0,0);
    if (param_1[0x15c0] != 0) {
      param_1[0x15c0] = 0;
      FUN_00a8c9b0(0,0x34,0,0);
    }
  }
  return;
}

// 008B0D60  Pl1500::vf150  size=709  [class]
void __thiscall Pl1500::vf150(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 != 0) {
    FUN_00a7c950();
    uVar1 = FUN_00a7c7f0();
    FUN_00a7c960(uVar1);
  }
  FUN_008abcf0();
  FUN_00b7b380(param_3,param_1 + 0x40,1);
  if (param_2 == 0x25) {
    FUN_00a8caf0(0x100000,0,0,0);
    return;
  }
  if (param_2 == 0x26) {
    FUN_00a8caf0(0x100001,0,0,0);
    return;
  }
  if (param_2 == 0x34) {
    FUN_00a8caf0(0x100002,0,0,0);
    return;
  }
  if (param_2 == 0x35) {
    FUN_00a8caf0(0x100003,0,0,0);
    return;
  }
  if (param_2 == 0x77) {
    FUN_00a8caf0(0x100004,0,0,0);
    return;
  }
  if (param_2 == 0x78) {
    FUN_00a8caf0(0x100005,0,0,0);
    return;
  }
  if (param_2 == 0x79) {
    FUN_00a8caf0(0x100006,0,0,0);
    return;
  }
  if (param_2 == 0x7a) {
    FUN_00a8caf0(0x100007,0,0,0);
    return;
  }
  if (param_2 == 0x3c) {
    FUN_00a8caf0(0x100008,0,0,0);
    return;
  }
  if (param_2 == 0x3b) {
    FUN_00a8caf0(0x100009,0,0,0);
    return;
  }
  if (param_2 == 0x39) {
    FUN_00bee830();
    FUN_00a8caf0(0x10000a,0,0,0);
    return;
  }
  if (param_2 == 0x7b) {
    FUN_00a8caf0(0x10000b,0,0,0);
    return;
  }
  if (param_2 == 0x7c) {
    FUN_00a8caf0(0x10000c,0,0,0);
    return;
  }
  if (param_2 == 0x7d) {
    FUN_00a8caf0(0x100014,0,0,0);
    return;
  }
  if (param_2 == 0x7e) {
    FUN_00a8caf0(0x10000d,0,0,0);
    return;
  }
  if (param_2 == 0x8b) {
    FUN_00a8caf0(0x10000e,0,0,0);
    return;
  }
  if (param_2 == 0x7f) {
    FUN_00a8caf0(0x10000f,0,0,0);
    return;
  }
  if (param_2 == 0x80) {
    FUN_00a8caf0(0x100010,0,0,0);
    return;
  }
  if (param_2 == 0x81) {
    FUN_00a8caf0(0x100011,0,0,0);
    return;
  }
  if (param_2 == 0x82) {
    FUN_00a8caf0(0x100012,0,0,0);
    return;
  }
  if (param_2 == 0x83) {
    FUN_00bee830();
    FUN_00a8caf0(0x200001,0,0,0);
    return;
  }
  if (param_2 == 0x67) {
    FUN_00a8caf0(0x70003,0,0,0);
  }
  return;
}

// 008B1030  FUN_008b1030  size=316  [between]
undefined4 __thiscall FUN_008b1030(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  if ((param_3 == 0) || (piVar1 = (int *)FUN_00a7c8a0(), piVar1 == (int *)0x0)) {
    return 0;
  }
  puVar3 = &DAT_01be9c78;
  (**(code **)(*piVar1 + 4))(&DAT_01be9c78);
  iVar2 = FUN_00dd6d80(puVar3);
  if ((iVar2 != 0) && (iVar2 = FUN_00a82e80(), iVar2 != 0)) {
    if (piVar1[300] == 0x28070) {
      return 0;
    }
    if (piVar1[300] == 0x28071) {
      return 0;
    }
  }
  switch(param_2) {
  case 0x1001:
    iVar2 = 0x25;
    break;
  case 0x1002:
    iVar2 = 0x3c;
    break;
  case 0x1003:
    iVar2 = 0x34;
    break;
  case 0x1004:
    iVar2 = 0x3f;
    break;
  case 0x1005:
    iVar2 = 0x77;
    break;
  case 0x1006:
    iVar2 = 0x79;
    break;
  case 0x1007:
    iVar2 = 0x7b;
    break;
  case 0x1008:
    iVar2 = 0x7d;
    goto LAB_008b10f3;
  case 0x1009:
    iVar2 = 0x81;
    break;
  case 0x100a:
    iVar2 = 0x7f;
    break;
  default:
    return 0;
  }
  FUN_00bee830();
LAB_008b10f3:
  FUN_008a8f40(0,0,0);
  FUN_00db3e80(0x41a00000,0,&DAT_01bea1d0);
  (**(code **)(*param_1 + 0x150))(iVar2,param_3);
  (**(code **)(*piVar1 + 0x150))(iVar2,param_1[0x13c]);
  if (iVar2 == 0x81) {
    piVar1 = (int *)FUN_00c1b9a0();
    (**(code **)(*piVar1 + 0x5c))();
  }
  return 1;
}

// 008B11A0  FUN_008b11a0  size=182  [between]
undefined4 __thiscall FUN_008b11a0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint local_20 [8];
  
  local_20[0] = local_20[0] | 0x80000000;
  local_20[1] = 0;
  local_20[6] = 0;
  local_20[2] = 0;
  local_20[3] = 0;
  local_20[4] = 0;
  local_20[5] = 0;
  local_20[7] = 0;
  uVar2 = 0;
  iVar1 = FUN_00c3d9d0(param_1 + 0x40,local_20);
  if ((iVar1 != 0) && ((local_20[2] & 0x100000) != 0)) {
    uVar2 = 1;
    iVar1 = FUN_00932720();
    if ((iVar1 == 0xd40) && ((param_2 != 0 && (*(int *)(param_2 + 0x4b0) == 0x28040)))) {
      iVar1 = FUN_00445b60(param_2);
      if ((iVar1 != 0) &&
         (((*(int *)(iVar1 + 0xb9c) == 7 && (*(short *)(iVar1 + 0xab2) == 0)) &&
          (*(short *)(iVar1 + 0xab4) == 0)))) {
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}

// 008B1260  FUN_008b1260  size=697  [between]
void __fastcall FUN_008b1260(int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  float10 fVar8;
  
  param_1[0x3d4] = 0;
  FUN_00b7d8b0();
  (**(code **)(*param_1 + 0x1d4))(1);
  if (param_1[0x187] == 4) {
    iVar3 = (**(code **)(*param_1 + 800))(0x3c888889);
    if (iVar3 != 0) {
      FUN_00da9610();
      iVar3 = FUN_00a8cab0();
      param_1[0x1505] = iVar3;
      FUN_008a66b0();
      FUN_00a8caf0(0x10007,0,0,0);
      if (param_1[0x15c0] == 0) {
        return;
      }
      param_1[0x15c0] = 0;
      FUN_00a8c9b0(0,0x34,0,0);
      return;
    }
  }
  else {
    (**(code **)(*param_1 + 800))(0x3c888889);
  }
  iVar3 = FUN_00a8c760(0x17);
  if ((((iVar3 != 0) || (0.0 < (float)param_1[0xd07])) &&
      (iVar3 = (**(code **)(*param_1 + 0x32c))(), iVar3 == 0)) &&
     (iVar3 = FUN_008a8cb0(0), iVar3 != 0)) {
    FUN_008a3d00(0);
    param_1[0x24] = 0;
    FUN_00da9610();
    FUN_008a3d00(0);
    return;
  }
  if ((2 < param_1[0x187]) && (iVar3 = FUN_00a81330(), iVar3 != 0)) {
    FUN_00a81330();
    piVar4 = (int *)FUN_00a7c8a0();
    if ((piVar4 == (int *)0x0) || ((*(byte *)(piVar4 + 0x130) & 1) == 0)) {
      FUN_00da9610();
      FUN_008abc80(0x10007);
      return;
    }
    if ((SQRT(((float)param_1[0x12] - (float)piVar4[0x12]) *
              ((float)param_1[0x12] - (float)piVar4[0x12]) +
              ((float)param_1[0x10] - (float)piVar4[0x10]) *
              ((float)param_1[0x10] - (float)piVar4[0x10])) < 2.25) &&
       (fVar1 = (float)param_1[0x11], fVar2 = (float)piVar4[0x11],
       fVar8 = (float10)(**(code **)(*piVar4 + 0x144))(),
       (float10)(fVar1 - fVar2) <= fVar8 * (float10)1.2)) {
      piVar7 = &DAT_0164a0a4;
      do {
        iVar3 = *piVar7;
        iVar5 = (**(code **)(*piVar4 + 0x14c))(iVar3,param_1[0x13c]);
        if (iVar5 != 0) {
          if (iVar3 != 0x82) {
            param_1[0x14] = piVar4[0x10];
            param_1[0x15] = piVar4[0x11];
            param_1[0x16] = piVar4[0x12];
            param_1[0x17] = piVar4[0x13];
            iVar5 = FUN_008b11a0(piVar4);
            if (iVar5 == 0) {
              piVar4[0x25] = param_1[0x25];
            }
            else {
              param_1[0x25] = piVar4[0x25];
            }
          }
          FUN_00bee830();
          FUN_008a8f40(0,0,0);
          uVar6 = 0x41a00000;
          if (iVar3 == 0x82) {
            piVar7 = (int *)FUN_00c1b9a0();
            (**(code **)(*piVar7 + 0x5c))();
            uVar6 = 0;
          }
          FUN_00db3e80(uVar6,0,&DAT_01bea1d0);
          (**(code **)(*param_1 + 0x314))();
          iVar5 = *param_1;
          uVar6 = FUN_00a81330();
          (**(code **)(iVar5 + 0x150))(iVar3,uVar6);
          (**(code **)(*piVar4 + 0x150))(iVar3,param_1[0x13c]);
          return;
        }
        piVar7 = piVar7 + 1;
      } while ((int)piVar7 < 0x164a0cc);
    }
  }
  return;
}

// 008B1530  FUN_008b1530  size=2351  [between]
void __fastcall FUN_008b1530(int *param_1)

{
  float *pfVar1;
  float fVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  int *piVar13;
  int unaff_EBX;
  float10 fVar14;
  int iStack_34;
  int iStack_30;
  float fStack_28;
  undefined1 auStack_24 [4];
  float fStack_20;
  float fStack_1c;
  
  (**(code **)(*param_1 + 0x314))();
  iVar10 = FUN_00a8c760(0x12);
  if (iVar10 != 0) {
    (**(code **)(*param_1 + 0x318))();
  }
  (**(code **)(*param_1 + 0x220))(0x41200000);
  switch(param_1[0x187]) {
  case 0:
    param_1[0x1504] = 0;
    param_1[599] = 0;
    iVar10 = FUN_008a2f50();
    iVar11 = FUN_00a8cbe0(0x100014);
    if (iVar11 != 0) {
      iVar10 = FUN_00a81330();
    }
    FUN_00b7b380(iVar10,param_1 + 0x10,1);
    if (iVar10 != 0) {
      FUN_00a7c950();
      uVar12 = FUN_00a7c7f0();
      FUN_00a7c960(uVar12);
      iVar10 = FUN_00a7c8a0();
      pcVar3 = *(code **)(*param_1 + 0x308);
      fVar14 = (float10)fpatan((float10)*(float *)(iVar10 + 0x40) - (float10)(float)param_1[0x10],
                               (float10)*(float *)(iVar10 + 0x48) - (float10)(float)param_1[0x12]);
      param_1[0x23d] = (int)(float)fVar14;
      (*pcVar3)(0x3f800000,0x393702d3,0x40490fdb,0);
      iVar10 = FUN_00a7c8a0();
      if (iVar10 != 0) {
        iVar10 = FUN_008a2c90(*(undefined4 *)(iVar10 + 0x4b0));
        param_1[599] = iVar10;
      }
    }
    iVar10 = param_1[599];
    iVar11 = (**(code **)(*param_1 + 0x1d8))();
    if (iVar11 != 0) {
      iVar10 = iVar10 + 4;
    }
    param_1[0x1504] = (int)(&DAT_01649918 + iVar10 * 0x10);
    FUN_00aa4080(*(undefined4 *)(&DAT_01649918 + iVar10 * 0x10),0,0x3e2aaaab,0x3f800000,0x8000000,0,
                 0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x23d] = param_1[0x25];
    DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
    param_1[0x409] = 0;
    param_1[0x9f4] = 0;
    param_1[0x2f8] = 0;
    param_1[0x2f9] = 0;
    param_1[0x2fa] = 0;
    param_1[0x2fb] = 0;
    param_1[0x224] = 0;
    param_1[0x225] = 0;
    param_1[0x226] = 0;
    param_1[0x227] = 0;
    param_1[0x24f] = 0;
    param_1[0x248] = 0;
    FUN_00db3e80(0x41a00000,0,&DAT_01bea1d0);
    iVar10 = param_1[0x463];
    param_1[0x2dd] = 0;
    FUN_00e26e90();
    *(undefined4 *)(iVar10 + 0xe4) = 0;
    *(undefined4 *)(iVar10 + 0xe8) = 0;
    *(undefined4 *)(iVar10 + 0xec) = 0;
    param_1[0x9b5] = 0;
    param_1[0x249] = 0x43340000;
    break;
  case 1:
    break;
  case 2:
    pcVar3 = *(code **)(*param_1 + 800);
    param_1[0x225] = -0x43dc28f6;
    param_1[0x469] = 1;
    iVar10 = (*pcVar3)(0x3c888889);
    if (iVar10 == 0) {
      param_1[0x24f] = 0;
    }
    else {
      param_1[0x24f] = (int)((float)param_1[0x244] + (float)param_1[0x24f]);
    }
    param_1[0x225] = 0;
    bVar9 = false;
    param_1[0x249] = (int)((float)param_1[0x249] - (float)param_1[0x244]);
    iVar10 = FUN_00a81330();
    if (iVar10 != 0) {
      FUN_00a81330();
      iVar10 = FUN_00a7c8a0();
      if (iVar10 != 0) {
        FUN_00a81330();
        iVar10 = FUN_00a7c8a0();
        if ((*(byte *)(iVar10 + 0x4c0) & 1) == 0) {
          bVar9 = true;
        }
      }
    }
    if (((0.0 <= (float)param_1[0x249]) &&
        (fVar2 = (float)param_1[0x24f], NAN(fVar2) || 10.0 < fVar2 == (fVar2 == 10.0))) && (!bVar9))
    {
      param_1[600] = param_1[0x14];
      param_1[0x259] = param_1[0x15];
      param_1[0x25a] = param_1[0x16];
      param_1[0x25b] = param_1[0x17];
      (**(code **)(*param_1 + 0x318))();
      iVar10 = FUN_00a81330();
      if ((iVar10 != 0) && (iVar10 = FUN_00a7c8a0(), iVar10 != 0)) {
        FUN_008a67a0(&fStack_28,iVar10,param_1[599] == 0);
        FUN_00bc4b80(param_1 + 0xfc8,&fStack_28,0x3e4ccccd);
      }
      FUN_00a581b0(&stack0xffffffc8,0,param_1[0x24a]);
      fVar2 = *(float *)(param_1[0x1504] + 0xc);
      if ((float)param_1[0x24a] <= 1.0) {
        fVar2 = *(float *)(param_1[0x1504] + 8);
      }
      param_1[0x24a] = (int)((1.0 / fVar2) * (float)param_1[0x244] + (float)param_1[0x24a]);
      fVar2 = (float)param_1[0x24a];
      if (!NAN(fVar2) && 2.0 < fVar2 != (fVar2 == 2.0)) {
        param_1[0x24a] = 0x40000000;
      }
      param_1[0x14] = unaff_EBX;
      param_1[0x15] = iStack_34;
      param_1[0x16] = iStack_30;
      FUN_00b94790(0x3f800000,0x3f800000);
      if ((float)param_1[0x24a] != 2.0) {
        return;
      }
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x248] =
           (int)((1.0 / (float)param_1[0x244]) * ((float)param_1[0x15] - (float)param_1[0x259]) *
                -3.0);
      return;
    }
    goto LAB_008b1e1f;
  case 3:
    pcVar3 = *(code **)(*param_1 + 800);
    param_1[0x225] = -0x43dc28f6;
    param_1[0x469] = 1;
    iVar10 = (*pcVar3)(0x3c888889);
    if (iVar10 == 0) {
      param_1[0x24f] = 0;
    }
    else {
      param_1[0x24f] = (int)((float)param_1[0x244] + (float)param_1[0x24f]);
    }
    param_1[0x225] = 0;
    bVar9 = false;
    param_1[0x249] = (int)((float)param_1[0x249] - (float)param_1[0x244]);
    iVar10 = FUN_00a81330();
    if (iVar10 != 0) {
      FUN_00a81330();
      iVar10 = FUN_00a7c8a0();
      if (iVar10 != 0) {
        FUN_00a81330();
        iVar10 = FUN_00a7c8a0();
        if ((*(byte *)(iVar10 + 0x4c0) & 1) == 0) {
          bVar9 = true;
        }
      }
    }
    if (((0.0 <= (float)param_1[0x249]) &&
        (fVar2 = (float)param_1[0x24f], NAN(fVar2) || 10.0 < fVar2 == (fVar2 == 10.0))) && (!bVar9))
    {
      iVar10 = FUN_00a81330();
      if ((iVar10 != 0) && (iVar10 = FUN_00a7c8a0(), iVar10 != 0)) {
        fVar2 = *(float *)(iVar10 + 0x94);
        pfVar1 = (float *)(param_1 + 0x25);
        fVar14 = (float10)FUN_00ddba30(fVar2 - *pfVar1);
        if (fVar14 * fVar14 < (float10)1.5707964) {
          FUN_00a8db10(pfVar1,*pfVar1,fVar2,0x3e99999a,0x3c8efa35,(float)param_1[0x244] * 0.13962634
                      );
        }
        else {
          fVar14 = (float10)FUN_00ddba30(*pfVar1 - (float)param_1[0x244] * 0.13962634);
          *pfVar1 = (float)fVar14;
        }
      }
      pcVar3 = *(code **)(*param_1 + 0x318);
      param_1[0x225] = 0;
      (*pcVar3)();
      iVar10 = FUN_00a81330();
      if ((iVar10 != 0) && (iVar10 = FUN_00a7c8a0(), iVar10 != 0)) {
        fStack_28 = *(float *)(iVar10 + 0x40);
        fStack_20 = *(float *)(iVar10 + 0x48);
        fStack_1c = *(float *)(iVar10 + 0x4c);
        fVar2 = fStack_28 - (float)param_1[0x10];
        fVar6 = *(float *)(iVar10 + 0x44) - (float)param_1[0x11];
        fVar5 = fStack_20 - (float)param_1[0x12];
        fVar7 = fStack_1c - (float)param_1[0x13];
        fVar4 = fVar5 * fVar5 + fVar2 * fVar2 + fVar6 * fVar6;
        if (fVar4 < 0.0 == (fVar4 == 0.0)) {
          FUN_00ddf460(&stack0xffffffc8,&stack0xffffffc8);
        }
        else {
          FUN_00dd5650(&DAT_0163d0ac);
          fVar5 = 0.0;
          fVar6 = 1.0;
          fVar2 = 0.0;
        }
        fVar4 = (float)param_1[0x244] * (float)param_1[0x248];
        fVar8 = (float)param_1[0x244] * 0.09 + (float)param_1[0x248];
        param_1[0x248] = (int)fVar8;
        if (!NAN(fVar8) && 0.7 < fVar8 != (fVar8 == 0.7)) {
          param_1[0x248] = 0x3f333333;
        }
        param_1[0x2f8] = (int)(fVar2 * fVar4);
        param_1[0x2f9] = (int)(fVar4 * fVar6);
        param_1[0x2fa] = (int)(fVar5 * fVar4);
        param_1[0x2fb] = (int)(fVar4 * fVar7);
        param_1[0x2f8] = 0;
        param_1[0x2fa] = 0;
        fVar2 = fStack_28 - (float)param_1[0x10];
        fVar4 = fStack_20 - (float)param_1[0x12];
        fVar5 = fStack_1c - (float)param_1[0x13];
        fVar14 = (float10)FUN_00fdc1f0();
        param_1[0x2f8] = (int)(float)((float10)fVar2 * fVar14 + (float10)(float)param_1[0x2f8]);
        param_1[0x2f9] =
             (int)(float)(fVar14 * (float10)(float)(undefined *)0x0 + (float10)(float)param_1[0x2f9]
                         );
        param_1[0x2fa] = (int)(float)((float10)fVar4 * fVar14 + (float10)(float)param_1[0x2fa]);
        param_1[0x2fb] = (int)(float)((float10)fVar5 * fVar14 + (float10)(float)param_1[0x2fb]);
      }
      param_1[0x14] = (int)((float)param_1[0x2f8] + (float)param_1[0x14]);
      param_1[0x15] = (int)((float)param_1[0x2f9] + (float)param_1[0x15]);
      param_1[0x16] = (int)((float)param_1[0x2fa] + (float)param_1[0x16]);
      param_1[0x17] = (int)((float)param_1[0x2fb] + (float)param_1[0x17]);
      FUN_00b94790(0x3f800000,0x3f800000);
      return;
    }
LAB_008b1e1f:
    iVar10 = FUN_00a81330();
    if ((iVar10 != 0) && (piVar13 = (int *)FUN_00a7c8a0(), piVar13 != (int *)0x0)) {
      (**(code **)(*piVar13 + 0x20))();
    }
    FUN_00da9610();
    FUN_008abc80(0x10007);
  default:
    goto switchD_008b1586_default;
  }
  param_1[0x469] = 1;
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar10 = FUN_00a952e0(0,*(undefined4 *)(param_1[0x1504] + 4));
  if (iVar10 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x226] = 0x3e4ccccd;
    iVar10 = FUN_00a81330();
    if (iVar10 == 0) {
      iVar10 = FUN_00b7b200();
    }
    else {
      iVar10 = FUN_00a7c8a0();
    }
    if (iVar10 != 0) {
      FUN_008a67a0(auStack_24,iVar10,param_1[599] == 0);
      FUN_00bc4660(param_1 + 0xfc8,param_1 + 0x10,auStack_24);
      param_1[0x24a] = 0;
      return;
    }
  }
switchD_008b1586_default:
  return;
}

// 008B1E70  FUN_008b1e70  size=126  [between]
undefined4 __fastcall FUN_008b1e70(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x34c))();
  if (iVar1 != 0) {
    iVar1 = FUN_00a8cab0();
    param_1[0x1505] = iVar1;
    FUN_008a66b0();
    FUN_00a8caf0(0x60000,0,0,0);
    if (param_1[0x15c0] != 0) {
      param_1[0x15c0] = 0;
      FUN_00a8c9b0(0,0x34,0,0);
    }
    param_1[0xd9] = param_1[0xd9] & 0xffefffff;
    param_1[0x118] = 0x3f800000;
    return 1;
  }
  return 0;
}

// 008B1EF0  FUN_008b1ef0  size=114  [between]
void __fastcall FUN_008b1ef0(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x314))();
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar1 = FUN_00a8cab0();
  param_1[0x1505] = iVar1;
  FUN_008a66b0();
  FUN_00a8caf0(0x60002,0,0,0);
  if (param_1[0x15c0] != 0) {
    param_1[0x15c0] = 0;
    FUN_00a8c9b0(0,0x34,0,0);
  }
  return;
}

// 008B1F70  FUN_008b1f70  size=258  [between]
void __fastcall FUN_008b1f70(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 800))(0x3c888889);
  (**(code **)(*param_1 + 0x3f0))();
  iVar1 = (**(code **)(*param_1 + 0x34c))();
  if (iVar1 == 0) {
    iVar1 = FUN_00a8cab0();
    param_1[0x1505] = iVar1;
    FUN_008a66b0();
    FUN_00a8caf0(0x60001,0,0,0);
    if (param_1[0x15c0] != 0) {
      param_1[0x15c0] = 0;
      FUN_00a8c9b0(0,0x34,0,0);
      return;
    }
  }
  else {
    if (((DAT_01bea094 & 0x40000000) == 0) && (90000.0 < (float)param_1[0x34a])) {
      FUN_008abc80(0x60003);
      return;
    }
    if ((DAT_01bea094 & 0x100000) != 0) {
      if (200.0 < (float)param_1[0x344]) {
        FUN_008abc80(0x60004);
        return;
      }
      if ((float)param_1[0x344] < -200.0) {
        FUN_008abc80(0x60005);
      }
    }
  }
  return;
}

// 008B2080  FUN_008b2080  size=185  [between]
void __fastcall FUN_008b2080(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  (**(code **)(*param_1 + 800))(0x3c888889);
  (**(code **)(*param_1 + 0x3f0))();
  iVar1 = (**(code **)(*param_1 + 0x34c))();
  if (iVar1 == 0) {
    iVar1 = FUN_00a8cab0();
    param_1[0x1505] = iVar1;
    FUN_008a66b0();
    uVar2 = 0x60001;
  }
  else {
    if (62500.0 <= (float)param_1[0x34a]) {
      return;
    }
    iVar1 = FUN_00a8cab0();
    param_1[0x1505] = iVar1;
    FUN_008a66b0();
    uVar2 = 0x60002;
  }
  FUN_00a8caf0(uVar2,0,0,0);
  if (param_1[0x15c0] != 0) {
    param_1[0x15c0] = 0;
    FUN_00a8c9b0(0,0x34,0,0);
  }
  return;
}

// 008B2140  FUN_008b2140  size=324  [between]
void __fastcall FUN_008b2140(int *param_1)

{
  float fVar1;
  int iVar2;
  
  (**(code **)(*param_1 + 800))(0x3c888889);
  (**(code **)(*param_1 + 0x3f0))();
  iVar2 = (**(code **)(*param_1 + 0x34c))();
  if (iVar2 == 0) {
    iVar2 = FUN_00a8cab0();
    param_1[0x1505] = iVar2;
    FUN_008a66b0();
    FUN_00a8caf0(0x60001,0,0,0);
    if (param_1[0x15c0] != 0) {
      param_1[0x15c0] = 0;
      FUN_00a8c9b0(0,0x34,0,0);
      return;
    }
  }
  else {
    iVar2 = FUN_00a8cbe0(0x60004);
    if (iVar2 == 0) {
      fVar1 = (float)param_1[0x344];
      if (!NAN(fVar1) && -190.0 < fVar1 != (fVar1 == -190.0)) {
        FUN_008abc80(0x60002);
      }
      fVar1 = (float)param_1[0x344];
      if (!NAN(fVar1) && 200.0 < fVar1 != (fVar1 == 200.0)) {
        FUN_008abc80(0x60004);
        return;
      }
    }
    else {
      if ((float)param_1[0x344] <= 190.0) {
        FUN_008abc80(0x60002);
      }
      if ((float)param_1[0x344] < -200.0) {
        FUN_008abc80(0x60005);
        return;
      }
    }
    if (((DAT_01bea094 & 0x40000000) == 0) && (90000.0 < (float)param_1[0x34a])) {
      FUN_008abc80(0x60003);
    }
  }
  return;
}

// 008B2290  FUN_008b2290  size=78  [between]
void __fastcall FUN_008b2290(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 800))(0x3c888889);
  iVar1 = FUN_008a8e10();
  if (iVar1 != 0) {
    iVar1 = FUN_00606950();
    if (iVar1 == 0) {
      (**(code **)(*param_1 + 0x388))(0);
    }
    FUN_008a8f40(0,0,0);
  }
  return;
}

// 008B22E0  Pl1500::vf40C  size=98  [class]
void __fastcall Pl1500::vf40C(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_00a8c2e0();
  puVar1 = (undefined4 *)FUN_00dd3500(4,&DAT_01b7bd48);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = StateMachineFactoryPl1500::vftable;
  }
  *(undefined4 **)(param_1 + 0x7d4) = puVar1;
  iVar2 = FUN_00dd3500(0x700,&DAT_01b7bd48);
  if (iVar2 != 0) {
    uVar3 = StateMachineContextPl1500::StateMachineContextPl1500
                      (*(undefined4 *)(param_1 + 0x7d4),param_1);
    *(undefined4 *)(param_1 + 2000) = uVar3;
    return;
  }
  *(undefined4 *)(param_1 + 2000) = 0;
  return;
}

// 008B2350  Pl1500::vf32C  size=133  [class]
bool __fastcall Pl1500::vf32C(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined *puVar3;
  
  iVar2 = FUN_00b8bb10();
  if (iVar2 == 0) {
    iVar2 = FUN_00b8bca0();
    if (iVar2 != 0) {
      return false;
    }
    if ((DAT_01bea090 & 0x20000000) == 0) {
      iVar2 = FUN_00a8cab0();
      if (iVar2 != 0xe0000) {
        return *(int *)(param_1 + 0x40c8) != 0;
      }
    }
    return true;
  }
  puVar1 = *(undefined4 **)(param_1 + 2000);
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = &DAT_01b35bdc;
    (**(code **)*puVar1)(&DAT_01b35bdc);
    iVar2 = FUN_00dd6d80(puVar3);
    if (iVar2 != 0) {
      return puVar1[0x1b3] == 0;
    }
  }
  return true;
}

// 008B23E0  FUN_008b23e0  size=51  [callgraph]
void FUN_008b23e0(undefined4 param_1,undefined4 param_2)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0x3f800000;
  FUN_008a91a0(param_1,param_2,&local_20);
  return;
}

// 008B2420  FUN_008b2420  size=111  [callgraph]
void __fastcall FUN_008b2420(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 800))(0x3c888889);
  if (param_1[0x187] != 0) {
    param_1[0x15b0] = param_1[0x156c];
    param_1[0x15b1] = 1;
    if (param_1[0x251] != 0) {
      iVar1 = (**(code **)(*param_1 + 800))(0x3c888889);
      if (iVar1 != 0) {
        param_1[0x1515] = 0;
        FUN_008abc80(0x10009);
      }
    }
  }
  return;
}

// 008B2490  FUN_008b2490  size=370  [callgraph]
void __fastcall FUN_008b2490(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  (**(code **)(*param_1 + 0x314))();
  iVar2 = FUN_00a8c760(0x12);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x318))();
  }
  iVar2 = FUN_00a8cac0();
  if (iVar2 == 0) {
    FUN_00aa4080(0x108,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    if (90000.0 < (float)param_1[0x34a]) {
      pcVar1 = *(code **)(*param_1 + 0x308);
      param_1[0x23d] = param_1[0x41c];
      (*pcVar1)(0x3f800000,0x3ae4c388,0x40490fdb,0);
    }
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (iVar2 != 1) {
    return;
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  param_1[0x250] = 0;
  iVar2 = FUN_00a8c760(0xb);
  if (iVar2 != 0) {
    param_1[0x250] = 1;
    if ((0 < param_1[0x2e4]) && (param_1[0x2e4] < 6)) {
      param_1[0x2e4] = 5;
    }
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    iVar2 = FUN_00a8cab0();
    param_1[0x1505] = iVar2;
    FUN_008a66b0();
    FUN_00a8caf0(0x10008,0,0,0);
    if (param_1[0x15c0] != 0) {
      param_1[0x15c0] = 0;
      FUN_00a8c9b0(0,0x34,0,0);
    }
  }
  return;
}

// 008B2610  FUN_008b2610  size=509  [callgraph]
void __fastcall FUN_008b2610(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = FUN_00a81330();
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = FUN_00a7c8a0();
  }
  (**(code **)(*param_1 + 0x314))();
  iVar2 = FUN_00a8c760(0x12);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x318))();
  }
  iVar2 = FUN_00a8cac0();
  if (iVar2 == 0) {
    uVar4 = 0x10e;
    if (param_1[0x1506] != 0) {
      uVar4 = 0x10b;
    }
    if (90000.0 < (float)param_1[0x34a]) {
      pcVar1 = *(code **)(*param_1 + 0x308);
      param_1[0x23d] = param_1[0x41c];
      (*pcVar1)(0x3f800000,0x3ae4c388,0x40490fdb,0);
    }
    FUN_00aa4080(uVar4,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x9f4] = 0;
  }
  else if (iVar2 != 1) {
    return;
  }
  param_1[0x469] = 1;
  FUN_00b94790(0x3f800000,0x3f800000);
  if (iVar3 != 0) {
    iVar2 = FUN_00a8c760(5);
    if (iVar2 != 0) {
      FUN_00b8ced0(0x40800000,0x3fe66666,0x3f4ccccd,0x3f000000);
    }
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 == 0) {
    param_1[0x250] = 0;
    iVar2 = FUN_00a8c760(0xb);
    if (iVar2 != 0) {
      param_1[0x250] = 1;
      if ((0 < param_1[0x2e4]) && (param_1[0x2e4] < 6)) {
        param_1[0x2e4] = 5;
      }
    }
  }
  else {
    iVar2 = FUN_00a8cab0();
    param_1[0x1505] = iVar2;
    FUN_008a66b0();
    FUN_00a8caf0(0x10008,0,0,0);
    if (param_1[0x15c0] != 0) {
      param_1[0x15c0] = 0;
      FUN_00a8c9b0(0,0x34,0,0);
      return;
    }
  }
  return;
}

// 008B2810  FUN_008b2810  size=495  [callgraph]
void __fastcall FUN_008b2810(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_00a81330();
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = FUN_00a7c8a0();
  }
  (**(code **)(*param_1 + 0x314))();
  iVar2 = FUN_00a8c760(0x12);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x318))();
  }
  iVar2 = FUN_00a8cac0();
  if (iVar2 == 0) {
    FUN_00aa4080(0x109,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00a8d280();
    param_1[0x9f4] = 0;
    if (90000.0 < (float)param_1[0x34a]) {
      pcVar1 = *(code **)(*param_1 + 0x308);
      param_1[0x23d] = param_1[0x41c];
      (*pcVar1)(0x3f800000,0x3ae4c388,0x40490fdb,0);
    }
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (iVar2 != 1) {
    return;
  }
  param_1[0x469] = 1;
  FUN_00b94790(0x3f800000,0x3f800000);
  if (iVar3 != 0) {
    iVar2 = FUN_00a8c760(5);
    if (iVar2 != 0) {
      FUN_00b8ced0(0x40800000,0x3fe66666,0x3f4ccccd,0x3f000000);
    }
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 == 0) {
    param_1[0x250] = 0;
    iVar2 = FUN_00a8c760(0xb);
    if (iVar2 != 0) {
      param_1[0x250] = 1;
      if ((0 < param_1[0x2e4]) && (param_1[0x2e4] < 6)) {
        param_1[0x2e4] = 5;
      }
    }
  }
  else {
    iVar2 = FUN_00a8cab0();
    param_1[0x1505] = iVar2;
    FUN_008a66b0();
    FUN_00a8caf0(0x10008,0,0,0);
    if (param_1[0x15c0] != 0) {
      param_1[0x15c0] = 0;
      FUN_00a8c9b0(0,0x34,0,0);
      return;
    }
  }
  return;
}

// 008B2A00  FUN_008b2a00  size=488  [callgraph]
void __fastcall FUN_008b2a00(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_00a81330();
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = FUN_00a7c8a0();
  }
  (**(code **)(*param_1 + 0x314))();
  iVar2 = FUN_00a8c760(0x12);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x318))();
  }
  iVar2 = FUN_00a8cac0();
  if (iVar2 == 0) {
    FUN_00aa4080(0x10c,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x9f4] = 0;
    if (90000.0 < (float)param_1[0x34a]) {
      pcVar1 = *(code **)(*param_1 + 0x308);
      param_1[0x23d] = param_1[0x41c];
      (*pcVar1)(0x3f800000,0x3ae4c388,0x40490fdb,0);
    }
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (iVar2 != 1) {
    return;
  }
  param_1[0x469] = 1;
  FUN_00b94790(0x3f800000,0x3f800000);
  if (iVar3 != 0) {
    iVar2 = FUN_00a8c760(5);
    if (iVar2 != 0) {
      FUN_00b8ced0(0x40800000,0x3fe66666,0x3f4ccccd,0x3f000000);
    }
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 == 0) {
    param_1[0x250] = 0;
    iVar2 = FUN_00a8c760(0xb);
    if (iVar2 != 0) {
      param_1[0x250] = 1;
      if ((0 < param_1[0x2e4]) && (param_1[0x2e4] < 6)) {
        param_1[0x2e4] = 5;
      }
    }
  }
  else {
    iVar2 = FUN_00a8cab0();
    param_1[0x1505] = iVar2;
    FUN_008a66b0();
    FUN_00a8caf0(0x10008,0,0,0);
    if (param_1[0x15c0] != 0) {
      param_1[0x15c0] = 0;
      FUN_00a8c9b0(0,0x34,0,0);
      return;
    }
  }
  return;
}

// 008B2BF0  FUN_008b2bf0  size=931  [callgraph]
void __fastcall FUN_008b2bf0(int *param_1)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  undefined1 auStack_68 [4];
  float local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 auStack_58 [2];
  undefined1 auStack_50 [76];
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 != 0) {
    if (iVar1 != 1) {
      return;
    }
    goto LAB_008b2e4d;
  }
  local_64 = 0.0;
  if ((((param_1[0x4a7] != 0) && (iVar1 = FUN_00a81330(), iVar1 != 0)) &&
      (*(int *)(param_1[0x4a7] + 0x34) != 0)) ||
     (((param_1[0x4aa] != 0 && (iVar1 = FUN_00a81330(), iVar1 != 0)) &&
      (*(int *)(param_1[0x4aa] + 0x34) != 0)))) {
    FUN_00b7b270(0x3f800000,0x393702d3,0x40490fdb,0);
  }
  iVar1 = 0x26;
  if ((float)param_1[0x34a] <= 90000.0) {
LAB_008b2d4a:
    local_64 = 3.1415927;
  }
  else {
    fVar2 = (float10)FUN_00ddba30((float)param_1[0x34c] - (float)param_1[0x25]);
    fVar3 = (float10)0.61086524;
    if (fVar2 <= fVar3) {
      iVar1 = 0x29;
    }
    fVar4 = (float10)-0.61086524;
    if (fVar4 < fVar2 != (fVar4 == fVar2)) {
      iVar1 = 0x29;
    }
    if ((float10)2.5307274 < fVar2) {
      iVar1 = 0x26;
    }
    fVar5 = (float10)-2.5307274;
    if (fVar2 < fVar5) {
      iVar1 = 0x26;
    }
    if ((fVar3 < fVar2 != (fVar3 == fVar2)) && (fVar2 <= (float10)2.5307274)) {
      iVar1 = 0x28;
    }
    if ((fVar4 < fVar2) || ((NAN(fVar5) || NAN(fVar2)) || fVar5 < fVar2 == (fVar5 == fVar2))) {
      if (iVar1 == 0x26) goto LAB_008b2d4a;
      if (iVar1 == 0x28) {
        local_64 = -1.5707964;
      }
      else if (iVar1 == 0x27) goto LAB_008b2d64;
    }
    else {
      iVar1 = 0x27;
LAB_008b2d64:
      local_64 = 1.5707964;
    }
  }
  FUN_00aa4080(iVar1,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  param_1[0x187] = param_1[0x187] + 1;
  FUN_00b895d0();
  if ((((param_1[0x4a7] == 0) || (iVar1 = FUN_00a81330(), iVar1 == 0)) ||
      (*(int *)(param_1[0x4a7] + 0x34) == 0)) &&
     (((param_1[0x4aa] == 0 || (iVar1 = FUN_00a81330(), iVar1 == 0)) ||
      (*(int *)(param_1[0x4aa] + 0x34) == 0)))) {
    if (90000.0 < (float)param_1[0x34a]) {
      fVar2 = (float10)FUN_00ddba30((float)param_1[0x34c] + local_64);
      param_1[0x25] = (int)(float)fVar2;
    }
  }
  else {
    FUN_00b7b270(0x3e99999a,0x393702d3,0x3e860a92,0);
  }
LAB_008b2e4d:
  param_1[0x2fc] = 1;
  FUN_00b94790(0x3f800000,0x3f800000);
  param_1[0x469] = 1;
  if ((((param_1[0x4a7] != 0) && (iVar1 = FUN_00a81330(), iVar1 != 0)) &&
      (*(int *)(param_1[0x4a7] + 0x34) != 0)) ||
     (((param_1[0x4aa] != 0 && (iVar1 = FUN_00a81330(), iVar1 != 0)) &&
      (*(int *)(param_1[0x4aa] + 0x34) != 0)))) {
    FUN_00b7b270(0x3e99999a,0x393702d3,0x3e8efa35,0);
  }
  iVar1 = FUN_00a8c760(0xb);
  if ((iVar1 != 0) && (iVar1 = (**(code **)(*param_1 + 800))(0x3daaaaab), iVar1 == 0)) {
    uStack_60 = 0;
    uStack_5c = 0;
    auStack_58[0] = 0;
    iVar1 = FUN_00a92f90();
    if (iVar1 != 0) {
      FUN_0044fd10(&uStack_60);
      uStack_5c = 0;
      iVar1 = (**(code **)(*param_1 + 0x84))();
      D3DXMatrixRotationY(auStack_50,*(undefined4 *)(iVar1 + 4));
      D3DXVec3TransformNormal(param_1 + 0x224,auStack_68,auStack_58);
    }
    FUN_008abc80(0x10008);
    return;
  }
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x388))(0);
  }
  return;
}

// 008B91B0  FUN_008b91b0  size=83  [callgraph]
void __fastcall FUN_008b91b0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00a8cab0();
  *(undefined4 *)(param_1 + 0x5414) = uVar1;
  FUN_008a66b0();
  FUN_00a8caf0(0x70000,0,0,0);
  if (*(int *)(param_1 + 0x5700) != 0) {
    *(undefined4 *)(param_1 + 0x5700) = 0;
    FUN_00a8c9b0(0,0x34,0,0);
  }
  return;
}

// 008B9210  Pl1500::vf38C  size=143  [class]
void __fastcall Pl1500::vf38C(int *param_1)

{
  int iVar1;
  
  DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
  FUN_00b895d0();
  param_1[0x24] = 0;
  FUN_00b7ce10();
  iVar1 = FUN_00a8cab0();
  param_1[0x1505] = iVar1;
  FUN_008a66b0();
  FUN_00a8caf0(0x50000,0,0,0);
  if (param_1[0x15c0] != 0) {
    param_1[0x15c0] = 0;
    FUN_00a8c9b0(0,0x34,0,0);
  }
  FUN_00b7c9c0(0);
  (**(code **)(*param_1 + 0x220))(0x41200000);
  return;
}

// 008B92A0  Pl1500::vf100  size=153  [class]
void __fastcall Pl1500::vf100(int *param_1)

{
  int iVar1;
  
  BehaviorAppBase::vf100();
  FUN_00b8c2b0();
  if (param_1[0x1d9] != 0) {
    FUN_008e6d00();
  }
  iVar1 = FUN_00a8eea0();
  if (iVar1 < 1) {
    FUN_00b7ce10();
    FUN_00b7c9c0(0);
    iVar1 = FUN_00a8cab0();
    param_1[0x1505] = iVar1;
    FUN_008a66b0();
    FUN_00a8caf0(0x50001,0,0,0);
    if (param_1[0x15c0] != 0) {
      param_1[0x15c0] = 0;
      FUN_00a8c9b0(0,0x34,0,0);
      return;
    }
  }
  else {
    (**(code **)(*param_1 + 0x388))(0);
  }
  return;
}

// 008B9340  FUN_008b9340  size=195  [between]
void __thiscall FUN_008b9340(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00a8cab0();
  *(undefined4 *)(param_1 + 0x5414) = uVar1;
  FUN_008a66b0();
  FUN_00a8caf0(0x10001,0,0,0);
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x5700) != 0) {
      *(undefined4 *)(param_1 + 0x5700) = 0;
      FUN_00a8c9b0(0,0x34,0,0);
    }
    FUN_00aa4080(10,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    *(undefined4 *)(param_1 + 0x61c) = 2;
  }
  else if (*(int *)(param_1 + 0x5700) != 0) {
    *(undefined4 *)(param_1 + 0x5700) = 0;
    FUN_00a8c9b0(0,0x34,0,0);
    return;
  }
  return;
}

// 008B9410  FUN_008b9410  size=877  [between]
undefined4 __fastcall FUN_008b9410(int param_1)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  int local_4c;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_40 = *(undefined4 *)(param_1 + 0x50);
  local_3c = *(undefined4 *)(param_1 + 0x54);
  local_38 = *(undefined4 *)(param_1 + 0x58);
  local_4c = 0;
  local_34 = *(undefined4 *)(param_1 + 0x5c);
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_30 = 0x3f23d70a;
  local_2c = 0x3e4ccccd;
  local_28 = 0x3fcccccd;
  iVar9 = param_1 + 0x5504;
  do {
    piVar3 = (int *)FUN_00900480();
    iVar5 = *piVar3;
    uVar4 = FUN_009f8b40(0);
    iVar5 = (**(code **)(iVar5 + 8))(&local_40,&local_20,&local_30,6,uVar4);
    if (iVar5 == 0) {
      iVar9 = 4;
      do {
        FUN_00900ca0();
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      return 0;
    }
    FUN_008f7f00(iVar5,*(undefined4 *)(param_1 + 0x4f0));
    iVar8 = _tls_index;
    if (DAT_01885d68 != 1) {
      iVar6 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
      if ((*(int *)(iVar6 + 4) == 0) && (DAT_01b35fac != 0)) {
        if (DAT_01885db8 == 0) {
          FUN_00dd72e0();
        }
        else {
          FUN_00dd5650(&DAT_0163b898);
        }
      }
      piVar3 = (int *)(iVar6 + 4);
      *piVar3 = *piVar3 + 1;
    }
    uVar2 = *(uint *)(iVar5 + 0xc);
    if (uVar2 == 0) {
      if (DAT_01885d68 != 1) {
        iVar6 = *(int *)((int)ThreadLocalStoragePointer + iVar8 * 4);
LAB_008b956d:
        piVar3 = (int *)(iVar6 + 4);
        *piVar3 = *piVar3 + -1;
        piVar1 = (int *)(iVar6 + 4);
        if (((*piVar3 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
          FUN_00dd7320();
        }
        if (DAT_01885d68 != 1) {
          if ((*piVar1 == 0) && (DAT_01b35fac != 0)) {
            if (DAT_01885db8 == 0) {
              FUN_00dd72e0();
            }
            else {
              FUN_00dd5650(&DAT_0163b898);
            }
          }
          *piVar1 = *piVar1 + 1;
        }
      }
    }
    else {
      puVar7 = (uint *)(-(uint)(uVar2 != 0) & uVar2);
      *puVar7 = *puVar7 | 1;
      puVar7[2] = puVar7[2] | 0x40;
      if (DAT_01885d68 != 1) {
        iVar6 = *(int *)((int)ThreadLocalStoragePointer + iVar8 * 4);
        goto LAB_008b956d;
      }
    }
    uVar2 = *(uint *)(iVar5 + 0xc);
    if (uVar2 == 0) {
      if (DAT_01885d68 != 1) {
        iVar6 = *(int *)((int)ThreadLocalStoragePointer + iVar8 * 4);
LAB_008b961e:
        piVar3 = (int *)(iVar6 + 4);
        *piVar3 = *piVar3 + -1;
        piVar1 = (int *)(iVar6 + 4);
        if (((*piVar3 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
          FUN_00dd7320();
        }
        if (DAT_01885d68 != 1) {
          if ((*piVar1 == 0) && (DAT_01b35fac != 0)) {
            if (DAT_01885db8 == 0) {
              FUN_00dd72e0();
            }
            else {
              FUN_00dd5650(&DAT_0163b898);
            }
          }
          *piVar1 = *piVar1 + 1;
        }
      }
    }
    else {
      puVar7 = (uint *)(-(uint)(uVar2 != 0) & uVar2);
      *puVar7 = *puVar7 | 4;
      puVar7[4] = puVar7[4] | 4;
      if (DAT_01885d68 != 1) {
        iVar6 = *(int *)((int)ThreadLocalStoragePointer + iVar8 * 4);
        goto LAB_008b961e;
      }
    }
    uVar2 = *(uint *)(iVar5 + 0xc);
    if (uVar2 == 0) {
      if (DAT_01885d68 != 1) {
        iVar8 = *(int *)((int)ThreadLocalStoragePointer + iVar8 * 4);
LAB_008b96cb:
        piVar3 = (int *)(iVar8 + 4);
        *piVar3 = *piVar3 + -1;
        if (((*piVar3 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
          FUN_00dd7320();
        }
      }
    }
    else {
      puVar7 = (uint *)(-(uint)(uVar2 != 0) & uVar2);
      *puVar7 = *puVar7 | 8;
      puVar7[5] = puVar7[5] | 4;
      if (DAT_01885d68 != 1) {
        iVar8 = *(int *)((int)ThreadLocalStoragePointer + iVar8 * 4);
        goto LAB_008b96cb;
      }
    }
    lib::AllocatedArray<hkpPhantomListener*>::AllocatedArray<hkpPhantomListener*>(iVar5);
    FUN_009009c0("Pl1500_headHitCheck");
    FUN_00900bd0();
    *(undefined4 *)(iVar9 + 0x4c) = 0;
    *(undefined4 *)(iVar9 + 0x50) = 0;
    iVar5 = local_4c + 1;
    *(float *)(iVar9 + 0x54) = -0.38 - (float)local_4c * 0.15;
    iVar9 = iVar9 + 0x10;
    local_4c = iVar5;
    if (3 < iVar5) {
      *(undefined4 *)(param_1 + 0x10f4) = 1;
      *(undefined4 *)(param_1 + 0x542c) = 0;
      return 1;
    }
  } while( true );
}

// 008B9780  FUN_008b9780  size=221  [between]
undefined4 FUN_008b9780(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float local_20;
  float local_1c;
  float local_18;
  
  fVar1 = param_2[7];
  *param_2 = fVar1 * param_2[4] + *param_2;
  param_2[1] = fVar1 * param_2[5] + param_2[1];
  param_2[2] = fVar1 * param_2[6] + param_2[2];
  param_2[3] = fVar1 * param_2[7] + param_2[3];
  param_2[4] = -param_2[4];
  param_2[5] = -param_2[5];
  param_2[6] = -param_2[6];
  param_2[7] = param_2[7];
  fVar1 = param_2[7];
  if (fVar1 < 0.0) {
    fVar2 = param_2[4];
    local_20 = *param_2;
    local_1c = param_2[1];
    local_18 = param_2[2];
    D3DXVec3TransformNormal();
    *param_1 = *param_1 + (float)&local_20;
    param_1[1] = param_1[1] + (float)&local_20;
    param_1[2] = param_1[2] + param_3;
    param_1[3] = param_1[3] + fVar2 * fVar1 * 0.7;
    return 1;
  }
  return 0;
}

// 008B9860  FUN_008b9860  size=221  [between]
void __fastcall FUN_008b9860(int param_1)

{
  int iVar1;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if ((*(int *)(param_1 + 0x55dc) == 0) &&
     ((((DAT_01bea060 & 0x2000000) == 0 || (*(int *)(param_1 + 0x55cc) != 0)) &&
      ((DAT_01bea060 & 0x48000000) == 0)))) {
    local_20 = 0;
    local_1c = 0x3f800000;
    local_18 = 0;
    iVar1 = FUN_008ab280(&local_20);
    *(int *)(param_1 + 0x55d8) = iVar1;
    if (iVar1 != 0) {
      local_24 = 0;
      iVar1 = FUN_008a5b30(&local_24,&local_20);
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x55d8) = 0;
      }
      else {
        FUN_008a1f00();
        FUN_008ab420(local_24);
      }
    }
    if (*(int *)(param_1 + 0x55d8) == 0) {
      FUN_008ab4c0();
    }
    *(undefined4 *)(param_1 + 0x55cc) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x55dc) = 0;
  if (*(int *)(param_1 + 0x55c4) != 0) {
    *(undefined4 *)(param_1 + 0x55c8) = 0;
    *(undefined4 *)(param_1 + 0x55c4) = 0;
    FUN_00a94bc0(5,0);
  }
  *(undefined4 *)(param_1 + 0x55d8) = 0;
  return;
}

// 008B9940  FUN_008b9940  size=63  [between]
void __fastcall FUN_008b9940(int param_1)

{
  undefined1 local_160 [348];
  
  if (*(int *)(param_1 + 0x56a8) == 0) {
    FUN_004117d0(0xc5,param_1,param_1 + 0x5610);
    FUN_00a963e0(local_160);
  }
  return;
}

// 008B9980  FUN_008b9980  size=779  [between]
void __thiscall FUN_008b9980(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  undefined4 uStack_3d0;
  float fStack_3cc;
  float fStack_3c8;
  float fStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 uStack_3b8;
  undefined1 auStack_3a0 [4];
  undefined1 auStack_39c [12];
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined1 auStack_378 [4];
  undefined1 auStack_374 [4];
  undefined4 uStack_370;
  float fStack_36c;
  float fStack_368;
  float fStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  uint uStack_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  char *pcStack_340;
  undefined4 auStack_33c [9];
  undefined4 uStack_318;
  undefined4 uStack_1c8;
  undefined2 uStack_1c4;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  
  iVar4 = FUN_00b7f610();
  if (iVar4 == 10) {
    FUN_008ab780(*(undefined4 *)(param_1 + 0x278c),param_3);
    return;
  }
  uVar5 = FUN_008a23d0();
  piVar6 = (int *)FUN_0094e5e0(uVar5);
  if (piVar6 != (int *)0x0) {
    (**(code **)(*piVar6 + 0x30))();
  }
  iVar4 = FUN_00a12210(0xf00);
  uStack_390 = param_2;
  uStack_38c = *(undefined4 *)(param_1 + 0x94);
  uStack_388 = 0;
  uVar5 = *(undefined4 *)(iVar4 + 0x40);
  uVar1 = *(undefined4 *)(iVar4 + 0x44);
  uVar2 = *(undefined4 *)(iVar4 + 0x48);
  uVar3 = *(undefined4 *)(iVar4 + 0x4c);
  uStack_3d0 = *(undefined4 *)(param_1 + 0x40);
  fStack_3cc = *(float *)(param_1 + 0x44);
  fStack_3c8 = *(float *)(param_1 + 0x48);
  fStack_3c4 = *(float *)(param_1 + 0x4c);
  iVar4 = FUN_00a12210(0);
  if (iVar4 != 0) {
    uStack_3d0 = *(undefined4 *)(iVar4 + 0x40);
    fStack_3cc = *(float *)(iVar4 + 0x44);
    fStack_3c8 = *(float *)(iVar4 + 0x48);
    fStack_3c4 = *(float *)(iVar4 + 0x4c);
  }
  iVar4 = FUN_009f8b40();
  uStack_370 = uStack_3d0;
  uStack_350 = iVar4 << 0x10 | 6;
  fStack_36c = fStack_3cc;
  fStack_368 = fStack_3c8;
  fStack_364 = fStack_3c4;
  uStack_34c = 0;
  uStack_348 = 0;
  uStack_344 = 0;
  pcStack_340 = "throw grenade";
  auStack_33c[0] = 0;
  uStack_360 = uVar5;
  uStack_35c = uVar1;
  uStack_358 = uVar2;
  uStack_354 = uVar3;
  RayCastSingleHitWork::RayCastSingleHitWork_2(auStack_3a0,0,auStack_378,auStack_374,&uStack_370);
  uStack_3c0 = 0;
  uStack_3bc = 0;
  uStack_3b8 = 0x41700000;
  D3DXVec3TransformNormal(&uStack_3c0,&uStack_3c0,param_1 + 0x10);
  fStack_3cc = *(float *)(param_1 + 0x40) + fStack_3cc;
  fStack_3c8 = *(float *)(param_1 + 0x44) + fStack_3c8;
  fStack_3c4 = *(float *)(param_1 + 0x48) + fStack_3c4;
  FUN_004105d0();
  FUN_00410710();
  FUN_0041cf30();
  FUN_008a6310(auStack_33c);
  uStack_318 = *(undefined4 *)(param_1 + 0x4f0);
  uVar5 = FUN_00a7c7f0();
  FUN_00a7c960(uVar5);
  FUN_00416e30(&stack0xfffffc14,&fStack_3cc,auStack_39c,param_3,0x44480000);
  uVar5 = FUN_00b7d160();
  FUN_00a7c940(uVar5);
  uStack_1c8 = FUN_00a81330();
  uStack_1bc = 0;
  uStack_1b8 = 0;
  uStack_1b4 = 0;
  uStack_1b0 = uStack_390;
  uStack_1c4 = 0;
  iVar4 = FUN_00ad3be0(*(undefined4 *)(param_1 + 0x4f0),auStack_33c);
  iVar7 = FUN_00b7f610();
  if (iVar7 == 7) {
    FUN_00b8f230(*(undefined4 *)(iVar4 + 0x4f0));
  }
  return;
}

// 008B9C90  FUN_008b9c90  size=52  [between]
undefined4 FUN_008b9c90(void)

{
  int iVar1;
  
  iVar1 = FUN_008a5da0();
  if (iVar1 != 0) {
    iVar1 = FUN_008abbb0();
    if (iVar1 != 0) {
      iVar1 = FUN_008a65f0();
      if (iVar1 != 0) {
        FUN_00b949b0();
        return 1;
      }
    }
  }
  return 0;
}

// 008B9CD0  Pl1500::vf388  size=106  [class]
void __thiscall Pl1500::vf388(int param_1,int param_2)

{
  undefined4 uVar1;
  
  FUN_00b895d0();
  uVar1 = FUN_00a8cab0();
  *(undefined4 *)(param_1 + 0x5414) = uVar1;
  FUN_008a66b0();
  if (param_2 == 0) {
    uVar1 = 0x10000;
  }
  else {
    uVar1 = 0x10001;
  }
  FUN_00a8caf0(uVar1,0,0,0);
  if (*(int *)(param_1 + 0x5700) != 0) {
    *(undefined4 *)(param_1 + 0x5700) = 0;
    FUN_00a8c9b0(0,0x34,0,0);
  }
  return;
}

// 008B9D40  FUN_008b9d40  size=83  [between]
void __fastcall FUN_008b9d40(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00a8cab0();
  *(undefined4 *)(param_1 + 0x5414) = uVar1;
  FUN_008a66b0();
  FUN_00a8caf0(0x50001,0,0,0);
  if (*(int *)(param_1 + 0x5700) != 0) {
    *(undefined4 *)(param_1 + 0x5700) = 0;
    FUN_00a8c9b0(0,0x34,0,0);
  }
  return;
}

// 008B9DA0  FUN_008b9da0  size=297  [between]
undefined4 __thiscall FUN_008b9da0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((DAT_01bea090 & 0x800000) != 0) {
    return 0;
  }
  if (param_2 != 0) {
    uVar2 = FUN_008abf00(param_4);
    return uVar2;
  }
  if (param_3 != 0) {
    uVar2 = FUN_008abe00(param_4);
    return uVar2;
  }
  if (((*(uint *)(param_1 + 0xcf8) & *(uint *)(param_1 + 0xe3c)) != 0) &&
     (iVar1 = FUN_008ac1f0(param_4), iVar1 != 0)) {
    return 1;
  }
  iVar1 = FUN_00a8cbe0(0x20001);
  if (((iVar1 == 0) || (iVar1 = FUN_00a8c760(0), iVar1 != 0)) &&
     (iVar1 = FUN_008abfd0(param_4), iVar1 != 0)) {
    return 1;
  }
  iVar1 = FUN_00a8cbe0(0x20001);
  if (((iVar1 == 0) || (iVar1 = FUN_00a8c760(0), iVar1 != 0)) &&
     (iVar1 = FUN_008a2740(), iVar1 != 0)) {
    if (param_4 != 0) {
      FUN_00ba6810(1,1);
    }
    *(undefined4 *)(param_1 + 0x2568) = 0;
    FUN_008abc80(0x20000);
    return 1;
  }
  iVar1 = FUN_008a2760();
  if (iVar1 != 0) {
    if (param_4 != 0) {
      FUN_00ba6810(1,1);
    }
    *(undefined4 *)(param_1 + 0x256c) = 0;
    FUN_008abc80(0x20001);
    return 1;
  }
  return 0;
}

// 008B9ED0  FUN_008b9ed0  size=216  [between]
void __fastcall FUN_008b9ed0(int param_1)

{
  int iVar1;
  float10 fVar2;
  int local_4;
  
  local_4 = param_1;
  iVar1 = FUN_00932720();
  if ((iVar1 == 0xd30) || ((0xd70 < iVar1 && (iVar1 < 0xd76)))) {
    *(undefined4 *)(param_1 + 0x56cc) = 0;
    if (*(int *)(param_1 + 0x56d0) != 0) {
      iVar1 = FUN_00907640(param_1 + 0x56d0,&local_4,0);
      if (iVar1 != 0) {
        iVar1 = FUN_008ac510(local_4,1);
        if (iVar1 != 0) {
          *(undefined4 *)(param_1 + 0x56cc) = 1;
        }
      }
    }
    if (*(int *)(param_1 + 0x764) != 0) {
      iVar1 = FUN_008ac510(*(undefined4 *)(*(int *)(param_1 + 0x764) + 300),0xffffffff);
      if (iVar1 != 0) {
        *(undefined4 *)(param_1 + 0x56cc) = 1;
      }
    }
    FUN_008a6a10(param_1 + 0x56d0);
    if (((*(int *)(param_1 + 0x56cc) != 0) && (0.0 < *(float *)(param_1 + 0x341c))) &&
       (iVar1 = *(int *)(param_1 + 0x764), iVar1 != 0)) {
      fVar2 = (float10)FUN_00e049b0();
      *(float *)(iVar1 + 0x170) = (float)fVar2;
    }
  }
  return;
}

// 008B9FB0  FUN_008b9fb0  size=367  [between]
undefined4 __fastcall FUN_008b9fb0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  float local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  float local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (((param_1[0x33f] & param_1[0x38e]) != 0) || (param_1[0x96a] != 0)) {
    local_34 = 0.0;
    iVar1 = FUN_00945590(&local_34);
    if (iVar1 != 0) {
      uVar2 = FUN_00a7c7f0();
      FUN_00a7c960(uVar2);
      param_1[0x96a] = 0;
      FUN_009484d0();
      FUN_008b91b0();
      uVar2 = 0xf01;
      FUN_00a7c8a0(0xf01);
      iVar1 = FUN_00a12210(uVar2);
      local_30 = *(undefined4 *)(iVar1 + 0x50);
      local_2c = *(undefined4 *)(iVar1 + 0x54);
      local_28 = *(undefined4 *)(iVar1 + 0x58);
      local_24 = *(undefined4 *)(iVar1 + 0x5c);
      local_20 = *(undefined4 *)(iVar1 + 0x90);
      local_1c = *(float *)(iVar1 + 0x94);
      local_18 = *(undefined4 *)(iVar1 + 0x98);
      local_14 = *(undefined4 *)(iVar1 + 0x9c);
      iVar1 = FUN_00a7c8d0();
      fVar3 = (float10)FUN_00ddba30(*(float *)(iVar1 + 4) + local_1c);
      local_1c = (float)fVar3;
      iVar1 = FUN_00a7c8a0();
      D3DXVec3TransformNormal(&local_30,&local_30,iVar1 + 0x10);
      local_34 = *(float *)(iVar1 + 0x48) + local_34;
      (**(code **)(*param_1 + 0x7c))(&stack0xffffffc4,&local_2c);
      return 1;
    }
  }
  return 0;
}

// 008BA120  FUN_008ba120  size=105  [between]
void __fastcall FUN_008ba120(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xbd8) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xbc0));
  }
  if ((*(int *)(param_1 + 0x2984) != 0) &&
     (iVar1 = *(int *)(param_1 + 0x297c), iVar1 != *(int *)(param_1 + 0x2984) * 0x20 + iVar1)) {
    do {
      *(undefined4 *)(iVar1 + 0x14) = 0xbf800000;
      iVar1 = iVar1 + 0x20;
    } while (iVar1 != *(int *)(param_1 + 0x2984) * 0x20 + *(int *)(param_1 + 0x297c));
  }
  if (*(int *)(param_1 + 0xbd8) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xbc0));
  }
  return;
}

// 008BA190  FUN_008ba190  size=453  [between]
void __fastcall FUN_008ba190(int *param_1)

{
  bool bVar1;
  int iVar2;
  
  (**(code **)(*param_1 + 800))(0x3c888889);
  (**(code **)(*param_1 + 0x3f0))();
  param_1[0x15b8] = 1;
  iVar2 = FUN_008b1e70();
  if ((((iVar2 == 0) && (param_1[0x187] != 0)) && (iVar2 = FUN_008b9fb0(), iVar2 == 0)) &&
     (((iVar2 = FUN_008ac0c0(0), iVar2 == 0 && (iVar2 = FUN_008ac320(0,0), iVar2 == 0)) &&
      (iVar2 = FUN_008ac3e0(0), iVar2 == 0)))) {
    if (((param_1[0x33f] & param_1[0x386]) != 0) || (bVar1 = false, param_1[0x96f] != 0)) {
      bVar1 = true;
    }
    if (((DAT_01bea090 & 0x400) == 0) && (bVar1)) {
      param_1[0x96f] = 0;
      FUN_008abc80(0x10005);
      return;
    }
    iVar2 = FUN_00a8c760(1);
    if ((iVar2 == 0) || (iVar2 = FUN_008b9da0(0,0,0), iVar2 == 0)) {
      iVar2 = (**(code **)(*param_1 + 0x32c))();
      if ((iVar2 == 0) && (iVar2 = FUN_008a8cb0(0), iVar2 != 0)) {
        FUN_008a3d00(0);
        return;
      }
      if (param_1[0x1033] != 0) {
        FUN_008abc80(0x10004);
        return;
      }
      if (((float)param_1[0x34a] <= 62500.0) && (param_1[0x187] < 4)) {
LAB_008ba330:
        param_1[0x187] = 4;
        return;
      }
      iVar2 = FUN_00416d50(0x21);
      if (iVar2 == 0) {
        iVar2 = FUN_00416d50(7);
        if (((iVar2 == 0) && (iVar2 = FUN_00416d50(0x1b), iVar2 == 0)) &&
           (810000.0 < (float)param_1[0x34a])) {
          FUN_008abc80(0x10002);
          return;
        }
      }
      else if (param_1[0x187] < 4) goto LAB_008ba330;
      iVar2 = FUN_008ac260();
      if ((iVar2 == 0) && (3 < param_1[0x187])) {
        FUN_008ac4c0();
        return;
      }
    }
  }
  return;
}

// 008BA360  FUN_008ba360  size=460  [between]
void __fastcall FUN_008ba360(int *param_1)

{
  float fVar1;
  int iVar2;
  
  (**(code **)(*param_1 + 0x1d4))(1);
  param_1[0x15b8] = 1;
  param_1[0x15b9] = 1;
  if (param_1[0x186] != 0x10006) {
    (**(code **)(*param_1 + 0x3f0))();
  }
  if ((param_1[0x187] != 0) && (iVar2 = FUN_008ac0c0(0), iVar2 == 0)) {
    iVar2 = FUN_00a959f0(0);
    if (((param_1[0x187] == 1) || ((param_1[0x187] == 2 && (iVar2 < 3)))) && (param_1[0x39c] != 0))
    {
      param_1[0x39c] = 0;
      FUN_008abc80(0x90000);
      return;
    }
    if ((((DAT_01bea094 & 0x40000000) == 0) && (iVar2 = FUN_00a8c760(0x22), iVar2 != 0)) &&
       (0 < param_1[0x39c])) {
      param_1[0x39c] = 0;
      iVar2 = FUN_00a8cab0();
      param_1[0x1505] = iVar2;
      FUN_008a66b0();
      FUN_00a8caf0(0x90000,0,0,0);
      if (param_1[0x15c0] == 0) {
        return;
      }
      param_1[0x15c0] = 0;
      FUN_00a8c9b0(0,0x34,0,0);
      return;
    }
    iVar2 = FUN_008ac3e0(0);
    if (iVar2 == 0) {
      iVar2 = (**(code **)(*param_1 + 0x32c))();
      if ((iVar2 == 0) && (iVar2 = FUN_008a8cb0(0), iVar2 != 0)) {
        FUN_008a3d00(0);
        return;
      }
      if (param_1[0x187] == 2) {
        iVar2 = FUN_00a8c760(1);
        if (((iVar2 != 0) && ((DAT_01bea090 & 0x800000) == 0)) &&
           (iVar2 = FUN_008abe00(0), iVar2 != 0)) {
          return;
        }
        fVar1 = (float)param_1[0x24f];
        param_1[0x15b1] = 1;
        param_1[0x24f] = (int)(fVar1 - (float)param_1[0x244]);
        param_1[0x15b0] = param_1[0x156c];
        if ((fVar1 - (float)param_1[0x244] <= 0.0) && (iVar2 = FUN_008a2990(), iVar2 != 0)) {
          FUN_008abc80(0x10009);
        }
      }
    }
  }
  return;
}

// 008BA530  FUN_008ba530  size=379  [between]
void __fastcall FUN_008ba530(int *param_1)

{
  int iVar1;
  
  if (param_1[0x1033] == 0) {
    (**(code **)(*param_1 + 0x3f0))();
  }
  param_1[0x15b8] = 1;
  param_1[0x15b9] = 1;
  if ((param_1[0x187] != 0) && (iVar1 = FUN_008ac0c0(0), iVar1 == 0)) {
    if (((DAT_01bea094 & 0x40000000) == 0) &&
       ((iVar1 = FUN_00a8c760(0x22), iVar1 != 0 && (0 < param_1[0x39c])))) {
      param_1[0x39c] = 0;
      iVar1 = FUN_00a8cab0();
      param_1[0x1505] = iVar1;
      FUN_008a66b0();
      FUN_00a8caf0(0x90000,0,0,0);
      if (param_1[0x15c0] == 0) {
        return;
      }
      param_1[0x15c0] = 0;
      FUN_00a8c9b0(0,0x34,0,0);
      return;
    }
    iVar1 = FUN_008ac3e0(0);
    if (iVar1 == 0) {
      iVar1 = FUN_00a8c760(1);
      if (((iVar1 != 0) && ((DAT_01bea090 & 0x800000) == 0)) &&
         (iVar1 = FUN_008abe00(0), iVar1 != 0)) {
        return;
      }
      iVar1 = FUN_00a8c760(0x17);
      if (((iVar1 != 0) || (0.0 < (float)param_1[0xd07])) &&
         ((iVar1 = (**(code **)(*param_1 + 0x32c))(), iVar1 == 0 &&
          (iVar1 = FUN_008a8cb0(0), iVar1 != 0)))) {
        FUN_008a3d00(0);
        return;
      }
      param_1[0x15b0] = param_1[0x156c];
      param_1[0x15b1] = 1;
      iVar1 = FUN_008a2990();
      if (iVar1 != 0) {
        param_1[0x1515] = 0;
        FUN_008abc80(0x10009);
      }
    }
  }
  return;
}

// 008BA6B0  FUN_008ba6b0  size=77  [between]
undefined4 __fastcall FUN_008ba6b0(int param_1)

{
  undefined1 local_160 [348];
  
  if (*(int *)(param_1 + 0x5700) == 0) {
    *(undefined4 *)(param_1 + 0x5700) = 1;
    FUN_004039a0(0x34,param_1,0);
    FUN_00a963e0(local_160);
    return 1;
  }
  return 0;
}

// 008BA700  FUN_008ba700  size=298  [between]
void __fastcall FUN_008ba700(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(*param_1 + 0x34c);
  param_1[0x2e5] = 1;
  iVar2 = (*pcVar1)();
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x388))(0);
    return;
  }
  if ((param_1[0x187] != 0) && (iVar2 = FUN_008ac0c0(0), iVar2 == 0)) {
    if (((param_1[0x33e] & param_1[0x38f]) == 0) || ((DAT_01bea090 & 0x800000) != 0)) {
      FUN_008abc80(0x80005);
    }
    else {
      iVar2 = FUN_008a2790();
      if (iVar2 != 0) {
        param_1[0x156a] = 0;
        FUN_008abc80(0x80003);
        return;
      }
      iVar2 = FUN_00416d50(0x21);
      if ((iVar2 == 0) && (90000.0 < (float)param_1[0x34a])) {
        FUN_008abc80(0x80002);
      }
      iVar2 = FUN_00a8c760(1);
      if ((iVar2 != 0) && (iVar2 = FUN_008b9da0(0,0,0), iVar2 != 0)) {
        return;
      }
      iVar2 = FUN_00a8c760(0x17);
      if ((((iVar2 != 0) || (0.0 < (float)param_1[0xd07])) &&
          (iVar2 = (**(code **)(*param_1 + 0x32c))(), iVar2 == 0)) &&
         (iVar2 = FUN_008a8cb0(0), iVar2 != 0)) {
        FUN_008a3d00(0);
        return;
      }
    }
  }
  return;
}

// 008BA830  FUN_008ba830  size=641  [between]
void __fastcall FUN_008ba830(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  float10 fVar6;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined1 auStack_160 [348];
  
  iVar1 = FUN_00b7f610();
  if (iVar1 == 10) {
    param_1[0x157e] = 1;
  }
  iVar1 = param_1[0x13c];
  iVar2 = FUN_00a8cbe0(0x80001);
  (**(code **)(*param_1 + 0x314))();
  iVar3 = FUN_00a8cac0();
  if (iVar3 == 0) {
    FUN_00a9f560("SubWeapon",0x3e088889,0,0);
    puVar4 = PTR_DAT_01883d90;
    if (iVar2 == 0) {
      puVar4 = PTR_DAT_01883d48;
    }
    FUN_00a94850(iVar1,0xffffffff,0,1,0,0,puVar4,0x3e088889,0);
    puVar4 = PTR_DAT_01883d88;
    if (iVar2 == 0) {
      puVar4 = PTR_DAT_01883d40;
    }
    FUN_00a94850(iVar1,0xffffffff,0,0,0,0,puVar4,0x3e088889,0);
    puVar4 = PTR_DAT_01883d8c;
    if (iVar2 == 0) {
      puVar4 = PTR_DAT_01883d44;
    }
    FUN_00a94850(iVar1,0xffffffff,0,0xffffffff,0,0,puVar4,0x3e088889,0);
    if (param_1[0x15c0] == 0) {
      param_1[0x15c0] = 1;
      FUN_004039a0(0x34,param_1,0);
      FUN_00a963e0(auStack_160);
    }
    FUN_00a947e0(0,(float)param_1[0x9e3] * 0.95492965,0,0);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (iVar3 != 1) {
    return;
  }
  param_1[0x9b7] = 0x40400000;
  FUN_00a947e0(0,(float)param_1[0x9e3] * 0.95492965,0,0);
  FUN_00b94790(0x3f800000,0x3f800000);
  switchD_0080dbae::default();
  uStack_170 = 0x3e4ccccd;
  uStack_16c = 0x3fe00000;
  uStack_168 = 0x3e99999a;
  D3DXVec3TransformNormal(&uStack_170,&uStack_170,param_1 + 4);
  iVar1 = FUN_00a12210(0xf00);
  uStack_170 = *(undefined4 *)(iVar1 + 0x4c);
  iVar1 = FUN_00b7f610();
  uVar5 = (uint)(iVar1 == 10);
  iVar1 = FUN_00b7f610();
  if (iVar1 == 10) {
    iVar1 = param_1[0x15ca];
  }
  else {
    iVar1 = param_1[0xcff];
  }
  fVar6 = (float10)FUN_00ddba30((float)param_1[0x9e3] - 0.34906584,iVar1,uVar5);
  FUN_008ab560(&stack0xfffffe84,(float)fVar6,iVar1,uVar5);
  FUN_008a2220();
  return;
}

// 008BAAC0  FUN_008baac0  size=460  [between]
void __fastcall FUN_008baac0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(*param_1 + 0x34c);
  param_1[0x2e5] = 1;
  iVar2 = (*pcVar1)();
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x388))(0);
    return;
  }
  if ((param_1[0x187] != 0) && (iVar2 = FUN_008ac0c0(0), iVar2 == 0)) {
    if (((DAT_01bea094 & 0x40000000) == 0) &&
       ((iVar2 = FUN_00a8c760(0x22), iVar2 != 0 && (0 < param_1[0x39c])))) {
      param_1[0x39c] = 0;
      iVar2 = FUN_00a8cab0();
      param_1[0x1505] = iVar2;
      FUN_008a66b0();
      FUN_00a8caf0(0x90000,0,0,0);
      if (param_1[0x15c0] == 0) {
        return;
      }
      param_1[0x15c0] = 0;
      FUN_00a8c9b0(0,0x34,0,0);
      return;
    }
    if (((param_1[0x33e] & param_1[0x38f]) != 0) && (iVar2 = FUN_00416d50(8), iVar2 == 0)) {
      iVar2 = FUN_008a2790();
      if (iVar2 != 0) {
        param_1[0x156a] = 0;
        FUN_008abc80(0x80003);
        return;
      }
      if (((float)param_1[0x34a] <= 62500.0) || (iVar2 = FUN_00416d50(0x21), iVar2 != 0)) {
        FUN_008abc80(0x80001);
        return;
      }
      iVar2 = FUN_00a8c760(1);
      if ((iVar2 != 0) && (iVar2 = FUN_008b9da0(0,0,0), iVar2 != 0)) {
        return;
      }
      iVar2 = FUN_00a8c760(0x17);
      if ((((iVar2 != 0) || (0.0 < (float)param_1[0xd07])) &&
          (iVar2 = (**(code **)(*param_1 + 0x32c))(), iVar2 == 0)) &&
         (iVar2 = FUN_008a8cb0(0), iVar2 != 0)) {
        FUN_008a3d00(0);
        return;
      }
      iVar2 = FUN_00a8c760(0);
      if (iVar2 == 0) {
        return;
      }
      FUN_008ac3e0(0);
      return;
    }
    FUN_008abc80(0x80005);
  }
  return;
}

// 008BAC90  FUN_008bac90  size=424  [between]
void __fastcall FUN_008bac90(int *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  pcVar1 = *(code **)(*param_1 + 0x34c);
  param_1[0x2e5] = 1;
  iVar2 = (*pcVar1)();
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x388))(0);
    return;
  }
  if (param_1[0x187] != 0) {
    uVar3 = FUN_008a23d0();
    piVar4 = (int *)FUN_0094e5e0(uVar3);
    if ((((piVar4 != (int *)0x0) && (iVar2 = (**(code **)(*piVar4 + 0x44))(), iVar2 == 0)) &&
        (iVar2 = FUN_00a8c760(0x16), iVar2 != 0)) &&
       (((param_1[0x33e] & param_1[0x38f]) != 0 && (iVar2 = FUN_008a2790(), iVar2 != 0)))) {
      param_1[0x156a] = 0;
      FUN_008abc80(0x80003);
      return;
    }
    iVar2 = FUN_008ac0c0(0);
    if (iVar2 == 0) {
      if ((((DAT_01bea094 & 0x40000000) == 0) && (iVar2 = FUN_00a8c760(0x22), iVar2 != 0)) &&
         (0 < param_1[0x39c])) {
        param_1[0x39c] = 0;
        iVar2 = FUN_00a8cab0();
        param_1[0x1505] = iVar2;
        FUN_008a66b0();
        FUN_00a8caf0(0x90000,0,0,0);
        if (param_1[0x15c0] == 0) {
          return;
        }
        param_1[0x15c0] = 0;
        FUN_00a8c9b0(0,0x34,0,0);
        return;
      }
      iVar2 = FUN_00a8c760(1);
      if ((iVar2 != 0) && (iVar2 = FUN_008b9da0(0,0,0), iVar2 != 0)) {
        return;
      }
      iVar2 = FUN_00a8c760(0x17);
      if ((((iVar2 != 0) || (0.0 < (float)param_1[0xd07])) &&
          (iVar2 = (**(code **)(*param_1 + 0x32c))(), iVar2 == 0)) &&
         (iVar2 = FUN_008a8cb0(0), iVar2 != 0)) {
        FUN_008a3d00(0);
        return;
      }
      iVar2 = FUN_00a8c760(0);
      if (iVar2 != 0) {
        FUN_008ac3e0(0);
      }
    }
  }
  return;
}

// 008BAE40  FUN_008bae40  size=826  [between]
void __fastcall FUN_008bae40(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  uint uVar7;
  float10 fVar8;
  float fVar9;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  (**(code **)(*param_1 + 0x314))();
  iVar4 = param_1[0x13c];
  iVar1 = FUN_00a8cbe0(0x80001);
  iVar2 = FUN_00b7f610();
  if (iVar2 == 10) {
    param_1[0x157e] = 1;
  }
  iVar2 = FUN_00a8cac0();
  if (iVar2 == 0) {
    FUN_00a9f560("SubWeaponThrow",0x3d088889,0,0);
    puVar3 = PTR_DAT_01883d9c;
    if (iVar1 == 0) {
      puVar3 = PTR_DAT_01883d54;
    }
    FUN_00a94850(iVar4,0xffffffff,0,1,0,0,puVar3,0x3d088889,0x8000000);
    puVar3 = PTR_DAT_01883d94;
    if (iVar1 == 0) {
      puVar3 = PTR_DAT_01883d4c;
    }
    FUN_00a94850(iVar4,0xffffffff,0,0,0,0,puVar3,0x3d088889,0x8000000);
    puVar3 = PTR_DAT_01883d98;
    if (iVar1 == 0) {
      puVar3 = PTR_DAT_01883d50;
    }
    FUN_00a94850(iVar4,0xffffffff,0,0xffffffff,0,0,puVar3,0x3d088889,0x8000000);
    FUN_00a947e0(0,(float)param_1[0x9e3] * 0.95492965,0,0);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x157a] = 1;
  }
  else if (iVar2 != 1) {
    param_1[0x150b] = 1;
    return;
  }
  FUN_00a947e0(0,(float)param_1[0x9e3] * 0.95492965,0,0);
  iVar4 = FUN_00b7f610();
  if (iVar4 == 10) {
    uStack_20 = 0x3e4ccccd;
    uStack_1c = 0x3fe00000;
    uStack_18 = 0x3e99999a;
    D3DXVec3TransformNormal(&uStack_20,&uStack_20,param_1 + 4);
    iVar4 = FUN_00a12210(0xf00);
    uStack_20 = *(undefined4 *)(iVar4 + 0x4c);
    iVar4 = FUN_00b7f610();
    uVar7 = (uint)(iVar4 == 10);
    iVar4 = FUN_00b7f610();
    if (iVar4 == 10) {
      iVar4 = param_1[0x15ca];
    }
    else {
      iVar4 = param_1[0xcff];
    }
    fVar8 = (float10)FUN_00ddba30((float)param_1[0x9e3] - 0.34906584,iVar4,uVar7);
    FUN_008ab560(&uStack_20,(float)fVar8,iVar4,uVar7);
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar4 = FUN_00a8c760(0xb);
  if (iVar4 != 0) {
    switchD_0080dbae::default();
    fVar9 = (float)param_1[0xcff];
    iVar4 = FUN_00b7f610();
    if (iVar4 == 10) {
      fVar9 = (float)param_1[0x15ca];
    }
    if (param_1[0x506] == 0) {
      fVar8 = (float10)FUN_00ddba30((float)param_1[0x9e3] - 0.34906584,fVar9);
    }
    else {
      fVar9 = fVar9 * 0.6;
      fVar8 = (float10)(float)param_1[0x9e3] * (float10)0.8;
    }
    FUN_008b9980((float)fVar8,fVar9);
  }
  iVar4 = FUN_00a94ce0(0);
  if (iVar4 != 0) {
    uVar5 = FUN_008a23d0();
    piVar6 = (int *)FUN_0094e5e0(uVar5);
    if ((piVar6 == (int *)0x0) || (iVar4 = (**(code **)(*piVar6 + 0x44))(), iVar4 != 0)) {
      uVar5 = 0x80005;
    }
    else {
      uVar5 = 0x80001;
    }
    FUN_008abc80(uVar5);
  }
  FUN_008a2220();
  param_1[0x150b] = 1;
  return;
}

// 008BB3F0  FUN_008bb3f0  size=100  [between]
undefined4 __fastcall FUN_008bb3f0(int param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  piVar4 = *(int **)(param_1 + 0x67c);
  piVar5 = piVar4 + *(int *)(param_1 + 0x684) * 0x54;
  iVar3 = -1;
  bVar2 = false;
  if (piVar4 != piVar5) {
    do {
      iVar1 = piVar4[1];
      if ((*piVar4 != 0x147) && (iVar3 <= iVar1)) {
        FUN_00448f50(piVar4);
        bVar2 = true;
        iVar3 = iVar1;
      }
      piVar4 = piVar4 + 0x54;
    } while (piVar4 != piVar5);
    if (bVar2) {
      return 1;
    }
  }
  return 0;
}

// 008BB460  FUN_008bb460  size=125  [between]
undefined4 __fastcall FUN_008bb460(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x67c);
  iVar2 = *(int *)(param_1 + 0x684) * 0x150 + iVar1;
  FUN_00445db0();
  while( true ) {
    if (iVar1 == iVar2) {
      return 0;
    }
    if (((*(byte *)(iVar1 + 0x8c) & 4) != 0) && (*(int *)(param_1 + 0x4e4) == 0)) break;
    iVar1 = iVar1 + 0x150;
  }
  FUN_00a8caf0(0x50000,0,0,0);
  FUN_00b7ce10();
  return 1;
}

// 008BB4E0  FUN_008bb4e0  size=402  [between]
void __fastcall FUN_008bb4e0(int *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  (**(code **)(*param_1 + 800))(0x3c888889);
  if (param_1[0x187] != 0) {
    iVar2 = FUN_00a8c760(1);
    if (iVar2 != 0) {
      uVar3 = 0;
      iVar2 = (**(code **)(*param_1 + 0x370))(0);
      iVar2 = FUN_008b9da0(0,iVar2 == 0,uVar3);
      if (iVar2 != 0) {
        return;
      }
    }
    iVar2 = FUN_00a8c760(0);
    if (iVar2 != 0) {
      bVar1 = false;
      if (((param_1[0x33f] & param_1[0x386]) != 0) || (param_1[0x96f] != 0)) {
        bVar1 = true;
      }
      if (((DAT_01bea090 & 0x400) == 0) && (bVar1)) {
        param_1[0x96f] = 0;
        FUN_008abc80(0x10005);
        return;
      }
    }
    iVar2 = FUN_008ac0c0(0);
    if (iVar2 == 0) {
      if ((((DAT_01bea094 & 0x40000000) == 0) && (iVar2 = FUN_00a8c760(0x22), iVar2 != 0)) &&
         (0 < param_1[0x39c])) {
        param_1[0x39c] = 0;
        iVar2 = FUN_00a8cab0();
        param_1[0x1505] = iVar2;
        FUN_008a66b0();
        FUN_00a8caf0(0x90000,0,0,0);
        if (param_1[0x15c0] == 0) {
          return;
        }
        param_1[0x15c0] = 0;
        FUN_00a8c9b0(0,0x34,0,0);
        return;
      }
      iVar2 = FUN_00a8c760(0x17);
      if (((iVar2 != 0) || (0.0 < (float)param_1[0xd07])) &&
         ((iVar2 = (**(code **)(*param_1 + 0x32c))(), iVar2 == 0 &&
          (iVar2 = FUN_008a8cb0(0), iVar2 != 0)))) {
        FUN_008a3d00(0);
        return;
      }
      iVar2 = FUN_00a8c760(0);
      if (iVar2 != 0) {
        FUN_008ac3e0(0);
      }
    }
  }
  return;
}

// 008BB680  FUN_008bb680  size=402  [between]
void __fastcall FUN_008bb680(int *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  (**(code **)(*param_1 + 800))(0x3c888889);
  if (param_1[0x187] != 0) {
    iVar2 = FUN_00a8c760(1);
    if (iVar2 != 0) {
      uVar3 = 0;
      iVar2 = (**(code **)(*param_1 + 0x370))(0);
      iVar2 = FUN_008b9da0(0,iVar2 == 0,uVar3);
      if (iVar2 != 0) {
        return;
      }
    }
    iVar2 = FUN_00a8c760(0);
    if (iVar2 != 0) {
      bVar1 = false;
      if (((param_1[0x33f] & param_1[0x386]) != 0) || (param_1[0x96f] != 0)) {
        bVar1 = true;
      }
      if (((DAT_01bea090 & 0x400) == 0) && (bVar1)) {
        param_1[0x96f] = 0;
        FUN_008abc80(0x10005);
        return;
      }
    }
    iVar2 = FUN_008ac0c0(0);
    if (iVar2 == 0) {
      if ((((DAT_01bea094 & 0x40000000) == 0) && (iVar2 = FUN_00a8c760(0x22), iVar2 != 0)) &&
         (0 < param_1[0x39c])) {
        param_1[0x39c] = 0;
        iVar2 = FUN_00a8cab0();
        param_1[0x1505] = iVar2;
        FUN_008a66b0();
        FUN_00a8caf0(0x90000,0,0,0);
        if (param_1[0x15c0] == 0) {
          return;
        }
        param_1[0x15c0] = 0;
        FUN_00a8c9b0(0,0x34,0,0);
        return;
      }
      iVar2 = FUN_00a8c760(0x17);
      if (((iVar2 != 0) || (0.0 < (float)param_1[0xd07])) &&
         ((iVar2 = (**(code **)(*param_1 + 0x32c))(), iVar2 == 0 &&
          (iVar2 = FUN_008a8cb0(0), iVar2 != 0)))) {
        FUN_008a3d00(0);
        return;
      }
      iVar2 = FUN_00a8c760(0);
      if (iVar2 != 0) {
        FUN_008ac3e0(0);
      }
    }
  }
  return;
}

// 008BB820  FUN_008bb820  size=168  [between]
void __fastcall FUN_008bb820(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x1d4))(1);
  if ((((param_1[0x187] != 0) && (iVar1 = FUN_008b1e70(), iVar1 == 0)) &&
      (iVar1 = FUN_008ac0c0(0), iVar1 == 0)) && (iVar1 = FUN_008ac3e0(0), iVar1 == 0)) {
    iVar1 = FUN_00a8c760(1);
    if (((iVar1 != 0) && ((DAT_01bea090 & 0x800000) == 0)) && (iVar1 = FUN_008abe00(0), iVar1 != 0))
    {
      return;
    }
    iVar1 = FUN_00a8c760(0x17);
    if (((iVar1 != 0) || (0.0 < (float)param_1[0xd07])) &&
       ((iVar1 = (**(code **)(*param_1 + 0x32c))(), iVar1 == 0 &&
        (iVar1 = FUN_008a8cb0(0), iVar1 != 0)))) {
      FUN_008a3d00(0);
    }
  }
  return;
}

// 008BB8D0  Pl1500::vf418  size=818  [class]
undefined4 __thiscall Pl1500::vf418(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  FUN_00a7c950();
  *param_3 = 1;
  if (((*(int *)(param_2 + 0x5c) == 8) && ((DAT_01bea090 & 0x80000000) == 0)) &&
     (iVar1 = FUN_00bc3230(0), iVar1 == 0)) {
    *param_3 = 0;
  }
  iVar1 = (**(code **)(*param_1 + 0x41c))();
  if ((iVar1 != 0) && (*param_3 != 0)) {
    iVar1 = FUN_00c15520();
    if (iVar1 != 0) {
      FUN_00b808d0(param_2);
      piVar3 = (int *)0x0;
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        FUN_00a81330();
        piVar3 = (int *)FUN_00a7c8a0();
      }
      iVar1 = FUN_00b90770(*(undefined4 *)(param_2 + 0x5c),param_2);
      if (((iVar1 != 0) && (piVar3 != (int *)0x0)) &&
         ((piVar3[0x139] == 0 && (iVar1 = (**(code **)(*piVar3 + 0x274))(), iVar1 == 0)))) {
        (**(code **)(*param_1 + 0x220))(0x40a00000);
        iVar1 = *(int *)(param_2 + 0x58);
        if ((iVar1 == 2) && (param_1[0x186] != 0x20007)) {
          FUN_008a8f40(0,0,0);
          FUN_008abc80(0x20007);
          uVar4 = 1;
          param_1 = param_1 + 0x10;
          uVar2 = FUN_00a81330(param_1,1);
          FUN_00b7b380(uVar2,param_1,uVar4);
          return 1;
        }
        if (iVar1 == 0x17) {
          DAT_01bea060 = DAT_01bea060 | 0x2000000;
          uVar2 = FUN_00a81330();
          uStack_20 = 0;
          uStack_1c = 0;
          uStack_18 = 0;
          uStack_14 = 0x3f800000;
          FUN_008a91a0(uVar2,0xe,&uStack_20);
          (**(code **)(*piVar3 + 0x150))(0x4d,param_1[0x13c]);
          return 1;
        }
        if (iVar1 == 0x18) {
          DAT_01bea060 = DAT_01bea060 | 0x2000000;
          uVar2 = FUN_00a81330();
          uStack_20 = 0;
          uStack_1c = 0;
          uStack_18 = 0;
          uStack_14 = 0x3f800000;
          FUN_008a91a0(uVar2,0x18,&uStack_20);
          (**(code **)(*piVar3 + 0x150))(0x4e,param_1[0x13c]);
          return 1;
        }
        if (iVar1 == 0x19) {
          DAT_01bea060 = DAT_01bea060 | 0x2000000;
          uVar2 = FUN_00a81330();
          uStack_20 = 0;
          uStack_1c = 0;
          uStack_18 = 0;
          uStack_14 = 0x3f800000;
          FUN_008a91a0(uVar2,0x24,&uStack_20);
          (**(code **)(*piVar3 + 0x150))(0x4f,param_1[0x13c]);
          return 1;
        }
        if (iVar1 == 0x1a) {
          DAT_01bea060 = DAT_01bea060 | 0x2000000;
          uVar2 = FUN_00a81330();
          uStack_20 = 0;
          uStack_1c = 0;
          uStack_18 = 0;
          uStack_14 = 0x3f800000;
          FUN_008a91a0(uVar2,0x2e,&uStack_20);
          (**(code **)(*piVar3 + 0x150))(0x50,param_1[0x13c]);
          return 1;
        }
      }
    }
    iVar1 = FUN_00c15530();
    if ((iVar1 != 0) && (iVar1 = (**(code **)(*param_1 + 0x32c))(), iVar1 == 0)) {
      param_1[0x2ed] = 0x40400000;
      param_1[0x15c2] = 1;
      if (((param_1[0x33f] & param_1[0x38c]) != 0) &&
         (((iVar1 = FUN_00a81330(), iVar1 != 0 && (iVar1 = FUN_005f4370(), iVar1 != 0)) &&
          (*(int *)(iVar1 + 0x4e4) == 0)))) {
        uVar2 = FUN_00a81330();
        iVar1 = FUN_008b1030(*(undefined4 *)(param_2 + 0x58),uVar2);
        if (iVar1 != 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}

// 008BBC10  FUN_008bbc10  size=1380  [callgraph]
undefined4 __fastcall FUN_008bbc10(int *param_1)

{
  float fVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  int *piVar9;
  int local_10;
  int *local_c;
  
  fVar1 = (float)param_1[0xb05];
  param_1[0xa09] = 0;
  if (!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) {
    param_1[0xb05] = (int)((float)param_1[0xb05] - (float)param_1[0x244]);
  }
  iVar5 = FUN_00a8c760(7);
  if (((iVar5 != 0) || ((DAT_01bea060 & 0x2000000) != 0)) || (0.0 < (float)param_1[0xb05])) {
    return 0;
  }
  piVar9 = (int *)param_1[0x19f];
  piVar8 = piVar9 + param_1[0x1a1] * 0x54;
  if (piVar9 == piVar8) {
    return 0;
  }
  do {
    iVar5 = *piVar9;
    if ((((iVar5 != 0) && (iVar5 != 1)) && ((iVar5 != 2 && ((iVar5 != 0x1b0 && (iVar5 != 0x147))))))
       && ((piVar9[0x23] & 0x2000U) == 0)) {
      local_c = (int *)0x0;
      iVar5 = FUN_00a81330();
      if (iVar5 != 0) {
        local_c = (int *)FUN_00a7c8a0();
      }
      FUN_00a81330();
      if (iVar5 != 0) {
        FUN_00a7c8a0();
      }
      bVar4 = false;
      if ((local_c != (int *)0x0) &&
         ((iVar6 = FUN_00b87df0(iVar5,param_1[0x41c],0x3f860a92), iVar6 != 0 ||
          (iVar6 = FUN_00bc4610(iVar5), iVar6 != 0)))) {
        bVar4 = true;
      }
      local_10 = -1;
      if ((local_c != (int *)0x0) && (iVar6 = (**(code **)(*local_c + 0x17c))(), iVar6 != 0)) {
        local_10 = (**(code **)(*local_c + 0x184))(*piVar9,param_1[0x13c],piVar9);
      }
      bVar3 = 5 < *(byte *)((int)piVar9 + 0x11);
      *(bool *)(param_1 + 0xb06) = bVar3;
      if ((((local_10 != -1) && (bVar4)) && (iVar6 = (**(code **)(*param_1 + 0x360))(), iVar6 != 0))
         && (param_1[0x187] < 2)) {
        if (iVar5 != 0) {
          uVar7 = FUN_00a7c7f0();
          FUN_00a7c960(uVar7);
        }
        if ((local_10 == 3) && (iVar6 = (**(code **)(*local_c + 0x14c))(0x10,0), iVar6 != 0)) {
          DAT_01bea060 = DAT_01bea060 | 0x2000000;
          FUN_008a8f40(0,0,0);
          (**(code **)(*param_1 + 0x150))(0x10,iVar5);
          (**(code **)(*local_c + 0x150))(0x10,param_1[0x13c]);
          return 1;
        }
      }
      bVar4 = false;
      iVar6 = FUN_00a8cab0();
      if (((iVar6 == 0x40000) || (iVar6 == 0x40004)) &&
         ((param_1[0x187] < 2 && ((param_1[0x250] != 0 && (param_1[0x2e4] != 0)))))) {
        bVar4 = true;
      }
      iVar6 = FUN_00a8cab0();
      if ((((iVar6 != 0x40000) && (iVar6 != 0x40004)) && (param_1[0x2e4] != 0)) &&
         (iVar6 = FUN_00a8c760(0x21), iVar6 != 0)) {
        bVar4 = true;
      }
      if ((local_10 == -1) && (bVar4)) {
        FUN_00a8f040(piVar9);
        bVar4 = false;
        param_1[0x24] = 0;
        param_1[0x2e4] = 0;
        if (iVar5 != 0) {
          uVar7 = FUN_00a7c7f0();
          FUN_00a7c960(uVar7);
        }
        FUN_0085c0e0();
        iVar5 = FUN_00b7ec80();
        if ((iVar5 == 0) && (iVar5 = FUN_00a8c760(0x2c), iVar5 != 0)) {
          bVar4 = true;
        }
        iVar5 = FUN_00b7ec80();
        if ((iVar5 == 1) && (iVar5 = FUN_00a8c760(0x2d), iVar5 != 0)) {
          bVar4 = true;
        }
        iVar5 = FUN_00b7ec80();
        if ((iVar5 == 2) && (iVar5 = FUN_00a8c760(0x2e), iVar5 != 0)) {
          bVar4 = true;
        }
        iVar5 = FUN_00b7ec80();
        if ((iVar5 == 3) && (iVar5 = FUN_00a8c760(0x2e), iVar5 != 0)) {
          bVar4 = true;
        }
        iVar5 = FUN_00b7ec80();
        if ((iVar5 == 4) && (iVar5 = FUN_00a8c760(0x2e), iVar5 != 0)) {
          bVar4 = true;
        }
        uVar2 = piVar9[0x23];
        FUN_00bc31d0(0);
        piVar8 = (int *)FUN_00c1b9a0();
        (**(code **)(*piVar8 + 0x40))();
        if ((uVar2 & 0x100) == 0) {
          iVar5 = (**(code **)(*param_1 + 0x1d8))();
          if (iVar5 == 0) {
            FUN_008abc80(0x40001);
            param_1[0x1506] = 0;
            if (bVar3) {
              param_1[0x1506] = 1;
            }
          }
          else {
            FUN_008abc80(0x40005);
          }
          uVar7 = 2;
          if ((bVar4) && ((piVar9[0x23] & 0x1000U) == 0)) {
            iVar5 = (**(code **)(*param_1 + 0x1d8))();
            if (iVar5 == 0) {
              uVar7 = 0x40002;
            }
            else {
              uVar7 = 0x40006;
            }
            FUN_008abc80(uVar7);
            uVar7 = 4;
            FUN_00d450c0();
          }
          FUN_00dda360(0,0x3f800000,0x3f800000,8);
          (**(code **)(*param_1 + 0x198))(local_c,piVar9,uVar7);
          FUN_00b7ab80(0x41700000,0x3dcccccd);
          (**(code **)(*param_1 + 0x220))(0x41f00000);
          return 1;
        }
        iVar5 = (**(code **)(*param_1 + 0x1d8))();
        if (iVar5 == 0) {
          FUN_008abc80(0x40003);
          param_1[0x1506] = 0;
          if (bVar3) {
            param_1[0x1506] = 1;
          }
        }
        else {
          FUN_008abc80(0x40007);
        }
        FUN_00dda360(0,0x3f800000,0x3f800000,8);
        (**(code **)(*param_1 + 0x198))(local_c,piVar9,8);
        return 1;
      }
    }
    piVar9 = piVar9 + 0x54;
    if (piVar9 == piVar8) {
      return 0;
    }
  } while( true );
}

// 008C6130  Pl1500::vf40  size=207  [class]
undefined4 __fastcall Pl1500::vf40(int *param_1)

{
  int iVar1;
  
  iVar1 = PlBaseDLC::vf40();
  if (iVar1 != 0) {
    iVar1 = FUN_008a5da0();
    if (iVar1 != 0) {
      iVar1 = FUN_008abbb0();
      if (iVar1 != 0) {
        iVar1 = FUN_008a65f0();
        if (iVar1 != 0) {
          FUN_00b949b0();
          iVar1 = FUN_008a1660();
          if (iVar1 != 0) {
            iVar1 = FUN_008a58e0();
            if (iVar1 != 0) {
              iVar1 = FUN_008b9410();
              if (iVar1 != 0) {
                FUN_008a0df0();
                FUN_008a0f80();
                FUN_00be8060();
                FUN_008a1b40();
                (**(code **)(*param_1 + 0x388))(0);
                FUN_00aa4080(6,0,0,0x3f800000,0,0xbf800000,0x3f800000);
                FUN_00b94790(0x3f800000,0x3f800000);
                switchD_0080dbae::default();
                return 1;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

// 008C6200  Pl1500::vf48  size=30  [class]
void Pl1500::vf48(void)

{
  PlBaseDLC::vf48();
  FUN_008a1550();
  FUN_008b9860();
  FUN_00b93680();
  return;
}

// 008C6220  Pl1500::vf50  size=517  [class]
void __fastcall Pl1500::vf50(int param_1)

{
  int iVar1;
  float fVar2;
  float fStack_84;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 auStack_5c [12];
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_38;
  float fStack_34;
  
  fStack_84 = 1.2892195e-38;
  PlBaseDLC::vf50();
  fStack_84 = 1.2892205e-38;
  FUN_008ab050();
  fStack_84 = 1.2892215e-38;
  FUN_008a64c0();
  fStack_84 = 1.2892225e-38;
  FUN_008aaed0();
  fStack_84 = 1.2892235e-38;
  FUN_008b9ed0();
  if (*(int *)(param_1 + 0xe0c) == 0) {
    fStack_84 = 1.2892263e-38;
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      fStack_84 = 1.2892281e-38;
      fStack_84 = (float)FUN_00a7c8b0();
      iVar1 = FUN_00c4e710(iVar1);
      if (((iVar1 != 0) && ((*(byte *)(iVar1 + 8) & 1) != 0)) && (*(int *)(iVar1 + 0x34) != 0)) {
        *(int *)(param_1 + 0x12a8) = iVar1;
        *(undefined4 *)(param_1 + 0x12ac) = 0x43f00000;
      }
    }
  }
  fStack_84 = 3.50325e-44;
  *(undefined4 *)(param_1 + 0x4100) = *(undefined4 *)(param_1 + 0x4110);
  *(undefined4 *)(param_1 + 0x4104) = *(undefined4 *)(param_1 + 0x4114);
  *(undefined4 *)(param_1 + 0x4108) = *(undefined4 *)(param_1 + 0x4118);
  *(undefined4 *)(param_1 + 0x410c) = *(undefined4 *)(param_1 + 0x411c);
  *(undefined4 *)(param_1 + 0x40e0) = *(undefined4 *)(param_1 + 0x40f0);
  *(undefined4 *)(param_1 + 0x40e4) = *(undefined4 *)(param_1 + 0x40f4);
  *(undefined4 *)(param_1 + 0x40e8) = *(undefined4 *)(param_1 + 0x40f8);
  *(undefined4 *)(param_1 + 0x40ec) = *(undefined4 *)(param_1 + 0x40fc);
  iVar1 = FUN_00a12290();
  local_70 = *(undefined4 *)(iVar1 + 0x40);
  fStack_84 = -NAN;
  local_6c = *(undefined4 *)(iVar1 + 0x44);
  local_68 = *(undefined4 *)(iVar1 + 0x48);
  local_64 = *(undefined4 *)(iVar1 + 0x4c);
  iVar1 = FUN_00a12290();
  fStack_84 = (float)(iVar1 + 0x10);
  fVar2 = 0.0;
  D3DXMatrixInverse();
  D3DXVec3TransformNormal();
  fVar2 = fStack_38 + fVar2;
  fStack_84 = fStack_34 + fStack_84;
  iVar1 = FUN_00a12290(0x14);
  uStack_74 = *(undefined4 *)(iVar1 + 0x44);
  local_70 = *(undefined4 *)(iVar1 + 0x48);
  local_6c = *(undefined4 *)(iVar1 + 0x4c);
  iVar1 = FUN_00a12290(0xffffffff);
  iVar1 = iVar1 + 0x10;
  D3DXMatrixInverse(&local_68);
  D3DXVec3TransformNormal(&fStack_84,&fStack_84,&uStack_74);
  *(undefined4 *)(param_1 + 0x4110) = 0;
  *(int *)(param_1 + 0x4114) = iVar1;
  *(undefined1 **)(param_1 + 0x4118) = &stack0xffffff84;
  *(undefined1 **)(param_1 + 0x411c) = &stack0xffffff84;
  *(float *)(param_1 + 0x40f0) = local_50 + (float)auStack_5c;
  *(float *)(param_1 + 0x40f4) = fStack_4c + (float)&local_50;
  *(float *)(param_1 + 0x40f8) = fStack_48 + fVar2;
  *(float *)(param_1 + 0x40fc) = fStack_84;
  return;
}

// 008C6430  FUN_008c6430  size=1087  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_008c6430(int *param_1)

{
  code *pcVar1;
  float fVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 unaff_ESI;
  int iVar6;
  float10 fVar7;
  float fVar8;
  undefined4 uVar9;
  
  iVar5 = FUN_00a8cab0();
  if (iVar5 < 0x20001) {
    if (iVar5 == 0x20000) {
      FUN_008a7540();
      return;
    }
    switch(iVar5) {
    case 0x10000:
      FUN_008a3180();
      return;
    case 0x10001:
      FUN_008a3330();
      return;
    case 0x10002:
      FUN_008a6c80();
      return;
    case 0x10003:
      FUN_008a34a0();
      return;
    case 0x10004:
      FUN_008a6f50();
      return;
    case 0x10005:
    case 0x10006:
      FUN_008ac5f0();
      return;
    case 0x10007:
    case 0x10008:
      FUN_008aca90();
      return;
    case 0x10009:
      iVar5 = FUN_00a8cac0(unaff_ESI,param_1);
      if (iVar5 == 0) {
        uVar9 = 0x3d088889;
        iVar5 = FUN_00a9f760(0x18);
        if (((iVar5 != 0) || (iVar5 = FUN_00a9f760(300), iVar5 != 0)) &&
           (iVar5 = FUN_00a959f0(0), iVar5 < 0x25)) {
          uVar9 = 0x3e2aaaab;
        }
        if ((param_1[0x1033] != 0) && (iVar5 = (**(code **)(*param_1 + 0x34c))(), iVar5 == 0)) {
          if (param_1[0x1505] == 0x10008) {
            uVar9 = 0x3e6eeeef;
          }
          FUN_00aa4080(0x1f,0,uVar9,0x3f800000,0x8038000,0xbf800000,0x3f800000);
          FUN_00b94790(0x3f800000,0x3f800000);
          FUN_008abc80(0x10004);
          return;
        }
        if (-0.9 < (float)param_1[0xb18]) {
          fVar8 = (float)param_1[0xb18];
          uVar4 = 0x1a;
          if (NAN(fVar8) || -0.32000002 < fVar8 == (fVar8 == -0.32000002)) {
            uVar4 = 0x1b;
          }
        }
        else {
          uVar4 = 0x1c;
        }
        FUN_00aa4080(uVar4,0,uVar9,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        param_1[0x187] = param_1[0x187] + 1;
      }
      else if (iVar5 != 1) {
        return;
      }
      iVar5 = FUN_00a959f0(0);
      if (iVar5 < 10) {
        param_1[0x2fc] = 1;
      }
      FUN_00b94790(0x3f800000,0x3f800000);
      iVar5 = FUN_00a94ce0(0);
      if (iVar5 != 0) {
        (**(code **)(*param_1 + 0x388))(0);
      }
      return;
    }
  }
  else if (iVar5 < 0x30001) {
    if (iVar5 == 0x30000) {
      FUN_008a8060();
      return;
    }
    switch(iVar5) {
    case 0x20001:
      FUN_008ad290();
      return;
    case 0x20002:
      FUN_008addd0();
      return;
    case 0x20003:
      FUN_008ad5e0();
      return;
    case 0x20004:
      FUN_008a7800();
      return;
    case 0x20005:
      FUN_008a7ab0();
      return;
    case 0x20006:
      FUN_008a7d60();
      return;
    case 0x20007:
      FUN_008a7f10();
      return;
    }
  }
  else if (iVar5 < 0x40001) {
    if (iVar5 == 0x40000) {
      FUN_008a93d0();
      return;
    }
    switch(iVar5) {
    case 0x30001:
      if (param_1[0x187] == 0) {
        uVar9 = 0xd0;
        if ((0.7853982 < (float)param_1[0x245]) && ((float)param_1[0x245] < 2.3561945)) {
          uVar9 = 0xd1;
        }
        if (((float)param_1[0x245] < -0.7853982) && (-2.3561945 < (float)param_1[0x245])) {
          uVar9 = 0xd2;
        }
        if ((2.3561945 < (float)param_1[0x245]) || ((float)param_1[0x245] < -2.3561945)) {
          uVar9 = 0xcf;
        }
        FUN_00aa4080(uVar9,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
        FUN_00b895d0();
        param_1[0x24] = 0;
        (**(code **)(*param_1 + 0x220))(0x41200000);
        piVar3 = (int *)FUN_00c1b9a0();
        (**(code **)(*piVar3 + 0x30))();
        param_1[0x187] = param_1[0x187] + 1;
      }
      else if (param_1[0x187] != 1) {
        return;
      }
      FUN_00b94790(0x3f800000,0x3f800000);
      iVar5 = FUN_00a94ce0(0);
      if (iVar5 != 0) {
        (**(code **)(*param_1 + 0x388))(0,unaff_ESI);
      }
      return;
    case 0x30002:
      FUN_008af330();
      return;
    case 0x30003:
      FUN_008af5b0();
      return;
    case 0x30004:
      FUN_008af810();
      return;
    case 0x30005:
      FUN_008afa50();
      return;
    case 0x30006:
    case 0x30007:
      FUN_008afc50();
      return;
    case 0x30008:
      FUN_008afdc0();
      return;
    case 0x30009:
      FUN_008a3770();
      return;
    case 0x3000a:
      FUN_008a3810();
      return;
    case 0x3000b:
      FUN_008a82e0();
      return;
    case 0x3000c:
      FUN_008b0090();
      return;
    case 0x3000d:
switchD_008c6513_caseD_3000d:
      FUN_008a38b0();
      return;
    case 0x3000e:
      FUN_008b02f0();
      return;
    }
  }
  else if (iVar5 < 0x50001) {
    if (iVar5 == 0x50000) {
      FUN_008b0680();
      return;
    }
    switch(iVar5) {
    case 0x40001:
      FUN_008a94f0();
      return;
    case 0x40002:
      iVar5 = FUN_00a81330();
      iVar6 = 0;
      if (iVar5 != 0) {
        iVar6 = FUN_00a7c8a0();
      }
      (**(code **)(*param_1 + 0x314))();
      iVar5 = FUN_00a8cac0();
      if (iVar5 == 0) {
        FUN_00aa4080(0x106,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        param_1[0x9f4] = 0;
        FUN_00a8d280();
        if (90000.0 < (float)param_1[0x34a]) {
          pcVar1 = *(code **)(*param_1 + 0x308);
          param_1[0x23d] = param_1[0x41c];
          (*pcVar1)(0x3f800000,0x3ae4c388,0x40490fdb,0);
        }
        param_1[0x187] = param_1[0x187] + 1;
      }
      else if (iVar5 != 1) {
        return;
      }
      param_1[0x469] = 1;
      FUN_00b94790(0x3f800000,0x3f800000);
      fVar8 = -1.0;
      if ((iVar6 != 0) && (fVar8 = -1.0, iVar5 = FUN_00a8c760(5), iVar5 != 0)) {
        FUN_00a8e880((float *)(iVar6 + 0x40));
        (**(code **)(*param_1 + 0x308))(0x3e99999a,0x3ae4c388,0x3e8efa35,0);
        fVar8 = (float)param_1[0x10] - *(float *)(iVar6 + 0x40);
        fVar2 = (float)param_1[0x12] - *(float *)(iVar6 + 0x48);
        fVar8 = fVar2 * fVar2 + fVar8 * fVar8;
      }
      if (((param_1[0x150a] != 0) ||
          ((!NAN(fVar8) && 0.0 < fVar8 != (fVar8 == 0.0) && (fVar8 < 4.0)))) &&
         (iVar5 = FUN_00a92f90(), iVar5 != 0)) {
        iVar5 = FUN_00a92f90();
        FUN_00e26e90();
        *(undefined4 *)(iVar5 + 0xe4) = 0x3e19999a;
        *(undefined4 *)(iVar5 + 0xe8) = 0x3e19999a;
        *(undefined4 *)(iVar5 + 0xec) = 0x3e19999a;
      }
      iVar5 = FUN_00a94ce0(0);
      if (iVar5 != 0) {
        (**(code **)(*param_1 + 0x388))(0);
        return;
      }
      param_1[0x250] = 0;
      iVar5 = FUN_00a8c760(0xb);
      if (iVar5 != 0) {
        param_1[0x250] = 1;
        if ((0 < param_1[0x2e4]) && (param_1[0x2e4] < 6)) {
          param_1[0x2e4] = 5;
        }
      }
      return;
    case 0x40003:
      FUN_008a98d0();
      return;
    case 0x40004:
      FUN_008b2490();
      return;
    case 0x40005:
      FUN_008b2610();
      return;
    case 0x40006:
      FUN_008b2810();
      return;
    case 0x40007:
      FUN_008b2a00();
      return;
    case 0x40008:
      FUN_008a9a70();
      return;
    }
  }
  else if (iVar5 < 0xe0001) {
    if (iVar5 == 0xe0000) {
      FUN_008a3c60();
      return;
    }
    if (iVar5 < 0x80001) {
      if (iVar5 == 0x80000) {
        FUN_008ae230();
        return;
      }
      if (iVar5 < 0x60001) {
        if (iVar5 == 0x60000) {
          FUN_008b1ef0();
          return;
        }
        if (iVar5 == 0x50001) {
          FUN_008b07b0();
          return;
        }
        if (iVar5 == 0x50002) {
          FUN_008b0850();
          return;
        }
        if (iVar5 == 0x50003) {
          FUN_008b0a00();
          return;
        }
      }
      else {
        if (iVar5 < 0x70001) {
          if (iVar5 == 0x70000) {
            FUN_00948a70();
            return;
          }
          switch(iVar5) {
          case 0x60001:
            FUN_008a3b00();
            return;
          case 0x60002:
            FUN_008a3bc0();
            return;
          case 0x60003:
            FUN_008a86a0();
            return;
          case 0x60004:
          case 0x60005:
            goto LAB_008a8b10;
          default:
            goto switchD_008c644f_default;
          }
        }
        if (iVar5 == 0x70001) {
          return;
        }
        if (iVar5 == 0x70002) {
          return;
        }
        if (iVar5 == 0x70003) {
          FUN_0085ba00();
          return;
        }
      }
    }
    else if (iVar5 < 0x90001) {
      if (iVar5 == 0x90000) {
        FUN_008b2bf0();
        return;
      }
      switch(iVar5) {
      case 0x80001:
        FUN_008ba830();
        return;
      case 0x80002:
        FUN_008ae460();
        return;
      case 0x80003:
        FUN_008bae40();
        return;
      case 0x80004:
        (**(code **)(*param_1 + 0x314))(unaff_ESI,param_1);
        iVar5 = FUN_00a8cac0();
        if (iVar5 == 0) {
          FUN_00aa4080(0x9e,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
          param_1[0x505] = 0;
          param_1[0x24a] = param_1[0x34d];
          param_1[0x504] = 1;
          param_1[0x506] = 0;
          param_1[0x250] = 0;
          param_1[0x9e3] = 0;
          FUN_00b86010(1);
          param_1[0x187] = param_1[0x187] + 1;
        }
        else if (iVar5 != 1) {
          return;
        }
        if (((param_1[0x33e] & param_1[0x38f]) == 0) || (param_1[0x250] != 0)) {
          param_1[0x505] = 0;
        }
        else {
          fVar8 = (float)param_1[0x505];
          param_1[0x505] = (int)((float)param_1[0x244] + fVar8);
          if (15.0 <= (float)param_1[0x244] + fVar8) {
            param_1[0x504] = 0;
            FUN_00a8caf0(0x80000,0,0,0);
            param_1[0x9e3] = _DAT_01bea530;
          }
        }
        iVar5 = FUN_00a8c760(5);
        if (iVar5 != 0) {
          piVar3 = (int *)FUN_00b7b200();
          if ((piVar3 == (int *)0x0) || (iVar5 = (**(code **)(*piVar3 + 0x228))(), iVar5 == 0)) {
            if (90000.0 < (float)param_1[0x34a]) {
              pcVar1 = *(code **)(*param_1 + 0x308);
              param_1[0x23d] = param_1[0x34c];
              (*pcVar1)(0x3dcccccd,0x3ae4c388,0x3e8efa35,0);
            }
          }
          else {
            FUN_00b7b270(0x3e99999a,0x393702d3,0x3e8efa35,0);
          }
        }
        iVar5 = FUN_00a8c760(0xb);
        if (iVar5 != 0) {
          switchD_0080dbae::default();
          iVar5 = param_1[0xcff];
          iVar6 = FUN_00b7f610(unaff_ESI,iVar5);
          if (iVar6 == 10) {
            iVar5 = param_1[0x15ca];
          }
          FUN_008b9980(param_1[0x9e3],iVar5);
          uVar9 = FUN_008a23d0();
          piVar3 = (int *)FUN_0094e5e0(uVar9);
          if (piVar3 != (int *)0x0) {
            (**(code **)(*piVar3 + 0x40))();
          }
          param_1[0x250] = 1;
          iVar5 = FUN_00b7f610();
          if (iVar5 == 10) {
            param_1[0x157f] = 1;
          }
        }
        FUN_00b94790(0x3f800000,0x3f800000);
        iVar5 = FUN_00a94ce0(0);
        if (iVar5 != 0) {
          (**(code **)(*param_1 + 0x388))(0);
        }
        return;
      case 0x80005:
        FUN_008a36c0();
        return;
      }
    }
    else if (iVar5 < 0xa0001) {
      if (iVar5 == 0xa0000) {
LAB_008c6725:
        FUN_008a39a0();
        return;
      }
      if (iVar5 == 0x90001) goto switchD_008c6513_caseD_3000d;
    }
    else {
      if (iVar5 < 0xa0004) {
        if (iVar5 != 0xa0003) {
          if (iVar5 == 0xa0001) goto LAB_008c6725;
          if (iVar5 != 0xa0002) {
            return;
          }
        }
        FUN_008b0c50();
        return;
      }
      if (iVar5 == 0xd0000) {
        FUN_008a8520();
        return;
      }
    }
  }
  else if (iVar5 < 0x100001) {
    if (iVar5 == 0x100000) {
      FUN_00624720();
      return;
    }
    if (iVar5 == 0xe0001) {
      FUN_008a3c80();
      return;
    }
    if (iVar5 == 0xe0002) {
      FUN_008a3de0();
      return;
    }
  }
  else if (iVar5 < 0x200001) {
    if (iVar5 == 0x200000) {
      FUN_006119c0();
      return;
    }
    switch(iVar5) {
    case 0x100001:
      FUN_006249f0();
      return;
    case 0x100002:
      FUN_0064f560();
      return;
    case 0x100003:
      FUN_0064f820();
      return;
    case 0x100004:
      FUN_0065df80();
      return;
    case 0x100005:
      FUN_0065e1e0();
      return;
    case 0x100006:
      FUN_0067e600();
      return;
    case 0x100007:
      FUN_0067e860();
      return;
    case 0x100008:
      FUN_006aa650();
      return;
    case 0x100009:
      FUN_006aa2a0();
      return;
    case 0x10000a:
      FUN_006aaa40();
      return;
    case 0x10000b:
      FUN_006c2c10();
      return;
    case 0x10000c:
      FUN_006c2f50();
      return;
    case 0x10000d:
      FUN_006e00e0();
      return;
    case 0x10000e:
      FUN_006e0660();
      return;
    case 0x10000f:
      FUN_006ea9f0();
      return;
    case 0x100010:
      FUN_006eac50();
      return;
    case 0x100011:
      FUN_00607440();
      return;
    case 0x100012:
      FUN_00607700();
      return;
    case 0x100013:
    case 0x100014:
      FUN_008b1530();
      return;
    }
  }
  else if (iVar5 == 0x200001) {
    FUN_00607980();
    return;
  }
switchD_008c644f_default:
  return;
LAB_008a8b10:
  (**(code **)(*param_1 + 0x314))(unaff_ESI,param_1);
  iVar5 = FUN_00a8cac0();
  if (iVar5 == 0) {
    uVar9 = 0x3d;
    iVar5 = FUN_00a8cbe0(0x60004);
    if (iVar5 != 0) {
      uVar9 = 0x3e;
    }
    FUN_00aa4080(uVar9,0,0x3ed55555,0x3f800000,0,0xbf800000,0x3f800000);
    if ((DAT_01bea094 & 0x100000) != 0) {
      iVar5 = FUN_00a92f90();
      FUN_00e26e90();
      *(undefined4 *)(iVar5 + 0xe4) = 0;
      *(undefined4 *)(iVar5 + 0xe8) = 0;
      *(undefined4 *)(iVar5 + 0xec) = 0;
    }
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (iVar5 != 1) goto LAB_008a8bc9;
  FUN_00b94790(0x3f800000,0x3f800000);
LAB_008a8bc9:
  if (((DAT_01bea094 & 0x100000) != 0) &&
     ((200.0 < (float)param_1[0x344] || ((float)param_1[0x344] < -200.0)))) {
    fVar8 = ((float)param_1[0x344] - 200.0) * 0.00125 * (float)param_1[0xd01];
    fVar7 = (float10)FUN_00da7570(unaff_ESI,fVar8);
    fVar7 = (float10)FUN_00ddba30((float)((float10)(float)param_1[0x25] - fVar7 * (float10)fVar8));
    param_1[0x25] = (int)(float)fVar7;
    return;
  }
  return;
}

// 008C6990  FUN_008c6990  size=224  [between]
void __fastcall FUN_008c6990(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float10 extraout_ST0;
  
  if ((*(int *)(param_1 + 0x4e4) != 0) || (*(int *)(param_1 + 0x55b4) == 0)) {
    *(undefined4 *)(param_1 + 0x55bc) = 0;
    if (*(int *)(param_1 + 0x56a8) == 0) {
      *(undefined4 *)(param_1 + 0x55b4) = 0;
      return;
    }
    (**(code **)(*(int *)(param_1 + 0x5610) + 8))(0x3f800000,0,0);
    FUN_00eaa840();
    *(undefined4 *)(param_1 + 0x55b4) = 0;
    return;
  }
  fVar1 = *(float *)(param_1 + 0x55b8) + *(float *)(param_1 + 0x55bc);
  *(float *)(param_1 + 0x55bc) = fVar1;
  if (!NAN(fVar1) && 1.0 < fVar1 != (fVar1 == 1.0)) {
    iVar2 = FUN_00fdbc60();
    *(float *)(param_1 + 0x55bc) = (float)(extraout_ST0 - (float10)iVar2);
    FUN_00b877b0(iVar2,1);
  }
  iVar2 = FUN_00b7c980(0);
  iVar3 = FUN_00b7c970();
  if (iVar2 <= iVar3) {
    FUN_008a5d60();
    *(undefined4 *)(param_1 + 0x55b4) = 0;
    return;
  }
  FUN_008b9940();
  *(undefined4 *)(param_1 + 0x55b4) = 0;
  return;
}

// 008C6A70  FUN_008c6a70  size=400  [between]
undefined4 __thiscall FUN_008c6a70(int param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  
  if ((param_2 != 0) && (iVar2 = FUN_008b9da0(0,0,param_4), iVar2 != 0)) {
    return 1;
  }
  if ((((param_3 == 0) || (iVar2 = FUN_00a8c760(0x1c), iVar2 != 0)) &&
      (*(int *)(param_1 + 0x764) != 0)) && (iVar2 = FUN_008e2740(), iVar2 != 0)) {
    bVar1 = false;
    if (((*(uint *)(param_1 + 0xcfc) & *(uint *)(param_1 + 0xe18)) != 0) ||
       (*(int *)(param_1 + 0x25bc) != 0)) {
      bVar1 = true;
    }
    if (((DAT_01bea090 & 0x400) == 0) && (bVar1)) {
      if (param_4 != 0) {
        FUN_00ba6810(1,1);
      }
      *(undefined4 *)(param_1 + 0x25bc) = 0;
      FUN_008abc80(0x10005);
      return 1;
    }
  }
  if ((DAT_01bea094 & 0x40000000) != 0) {
    return 0;
  }
  if (((DAT_01bea090 & 0x4000) == 0) &&
     (((param_3 == 0 || (iVar2 = FUN_00a8c760(0x11), iVar2 != 0)) &&
      (*(int *)(param_1 + 0x40cc) != 0)))) {
    if (param_4 != 0) {
      FUN_00ba6810(1,1);
    }
  }
  else {
    if ((DAT_01bea094 & 0x40000000) != 0) {
      return 0;
    }
    if ((param_3 != 0) && (iVar2 = FUN_00a8c760(0), iVar2 == 0)) {
      return 0;
    }
    if (*(float *)(param_1 + 0xd28) <= 90000.0) {
      return 0;
    }
    if (param_4 != 0) {
      FUN_00ba6810(1,1);
    }
    if ((((DAT_01bea090 & 0x1000000) != 0) || ((DAT_01bea090 & 0x10) != 0)) ||
       (*(int *)(param_1 + 0x40cc) == 0)) {
      FUN_008abc80(0x10002);
      return 1;
    }
  }
  FUN_008abc80(0x10004);
  return 1;
}

// 008C6C00  FUN_008c6c00  size=395  [between]
undefined4 __fastcall FUN_008c6c00(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    return 0;
  }
  param_1[0x15bc] = 1;
  iVar1 = FUN_00a81330();
  if (((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) &&
     (iVar1 = FUN_00a8c760(0x1c), iVar1 != 0)) {
    param_1[0x1573] = 1;
  }
  iVar1 = FUN_008ac0c0(1);
  if (iVar1 == 0) {
    if ((((DAT_01bea094 & 0x40000000) == 0) && (iVar1 = FUN_00a8c760(0x22), iVar1 != 0)) &&
       (0 < param_1[0x39c])) {
      param_1[0x39c] = 0;
      FUN_00ba6810(1,1);
      param_1[0x39c] = 0;
      iVar1 = FUN_00a8cab0();
      param_1[0x1505] = iVar1;
      FUN_008a66b0();
      FUN_00a8caf0(0x90000,0,0,0);
      if (param_1[0x15c0] == 0) {
        return 1;
      }
      param_1[0x15c0] = 0;
      FUN_00a8c9b0(0,0x34,0,0);
      return 1;
    }
    iVar1 = FUN_008ac3e0(1);
    if ((iVar1 == 0) && (iVar1 = FUN_008c6a70(0,1,1), iVar1 == 0)) {
      iVar1 = FUN_00a8c760(1);
      if ((iVar1 != 0) && (iVar1 = FUN_008b9da0(0,0,1), iVar1 != 0)) {
        return 1;
      }
      iVar1 = FUN_00a8c760(0x17);
      if ((iVar1 == 0) && ((float)param_1[0xd07] <= 0.0)) {
        return 0;
      }
      iVar1 = (**(code **)(*param_1 + 0x32c))();
      if (iVar1 != 0) {
        return 0;
      }
      iVar1 = FUN_008a8cb0(1);
      if (iVar1 == 0) {
        return 0;
      }
      FUN_00ba6810(1,1);
      FUN_008a3d00(0);
      return 1;
    }
  }
  return 1;
}

// 008C6D90  FUN_008c6d90  size=696  [between]
void __fastcall FUN_008c6d90(int *param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  
  (**(code **)(*param_1 + 800))(0x3c888889);
  (**(code **)(*param_1 + 0x3f0))();
  param_1[0x15b8] = 1;
  param_1[0x15b9] = 1;
  if ((((((param_1[0x187] != 0) && ((float)param_1[0x15be] <= 0.0)) &&
        (iVar2 = FUN_008b1e70(), iVar2 == 0)) &&
       ((iVar2 = FUN_008b9fb0(), iVar2 == 0 && (iVar2 = FUN_008ac0c0(0), iVar2 == 0)))) &&
      (iVar2 = FUN_008ac320(0,0), iVar2 == 0)) && (iVar2 = FUN_008ac3e0(0), iVar2 == 0)) {
    if ((DAT_01bea090 & 0x800000) == 0) {
      if ((((param_1[0x33e] & param_1[0x38f]) != 0) && ((DAT_01bea090 & 0x40000) == 0)) &&
         ((iVar2 = FUN_008a6450(), iVar2 != 0 &&
          ((iVar2 = FUN_00b7f610(), iVar2 != 0 && (iVar2 = FUN_00a8cbe0(0x80003), iVar2 == 0)))))) {
        FUN_008abc80(0x80004);
        FUN_008a5fc0();
        return;
      }
      iVar2 = FUN_00a8cbe0(0x20001);
      if (((iVar2 == 0) || (iVar2 = FUN_00a8c760(0), iVar2 != 0)) &&
         (iVar2 = FUN_008abfd0(0), iVar2 != 0)) {
        return;
      }
      iVar2 = FUN_00a8cbe0(0x20001);
      if (((iVar2 == 0) || (iVar2 = FUN_00a8c760(0), iVar2 != 0)) &&
         (iVar2 = FUN_008a2740(), iVar2 != 0)) {
        param_1[0x95a] = 0;
        FUN_008abc80(0x20000);
        return;
      }
      iVar2 = FUN_008a2760();
      if (iVar2 != 0) {
        param_1[0x95b] = 0;
        FUN_008abc80(0x20001);
        return;
      }
    }
    if ((param_1[0x1d9] != 0) && (iVar2 = FUN_008e2740(), iVar2 != 0)) {
      bVar1 = false;
      if (((param_1[0x33f] & param_1[0x386]) != 0) || (param_1[0x96f] != 0)) {
        bVar1 = true;
      }
      if (((DAT_01bea090 & 0x400) == 0) && (bVar1)) {
        param_1[0x96f] = 0;
        FUN_008abc80(0x10005);
        return;
      }
    }
    uVar3 = DAT_01bea094 >> 0x1e & 1;
    if (((uVar3 == 0) && ((DAT_01bea090 & 0x4000) == 0)) && (param_1[0x1033] != 0)) {
LAB_008c6fd8:
      FUN_008abc80(0x10004);
      return;
    }
    if ((uVar3 != 0) || ((float)param_1[0x34a] <= 90000.0)) {
      iVar2 = (**(code **)(*param_1 + 0x32c))();
      if ((iVar2 == 0) && (iVar2 = FUN_008a8cb0(0), iVar2 != 0)) {
        FUN_008a3d00(0);
        return;
      }
      iVar2 = FUN_008ac260();
      if (iVar2 == 0) {
        FUN_008ac4c0();
        return;
      }
    }
    else {
      if (((DAT_01bea090 & 0x1000000) != 0) || ((DAT_01bea090 & 0x10) != 0)) {
        FUN_008abc80(0x10002);
        return;
      }
      if (param_1[0x1033] != 0) goto LAB_008c6fd8;
      FUN_008abc80(0x10002);
    }
  }
  return;
}

// 008C7050  FUN_008c7050  size=48  [between]
void __fastcall FUN_008c7050(int param_1)

{
  FUN_008c6d90();
  if ((*(int *)(param_1 + 0x61c) < 3) && (0 < *(int *)(param_1 + 0x55a4))) {
    *(undefined4 *)(param_1 + 0x55a4) = 0;
    *(undefined4 *)(param_1 + 0x61c) = 3;
  }
  return;
}

// 008C7080  FUN_008c7080  size=435  [between]
void __fastcall FUN_008c7080(int *param_1)

{
  bool bVar1;
  int iVar2;
  
  (**(code **)(*param_1 + 800))(param_1[0x156c]);
  (**(code **)(*param_1 + 0x3f0))();
  param_1[0x15b8] = 1;
  if ((((param_1[0x187] != 0) && (iVar2 = FUN_008b1e70(), iVar2 == 0)) &&
      (iVar2 = FUN_008b9fb0(), iVar2 == 0)) &&
     (((iVar2 = FUN_008ac0c0(0), iVar2 == 0 && (iVar2 = FUN_008ac320(0,0), iVar2 == 0)) &&
      (iVar2 = FUN_008ac3e0(0), iVar2 == 0)))) {
    if (((param_1[0x33f] & param_1[0x386]) != 0) || (bVar1 = false, param_1[0x96f] != 0)) {
      bVar1 = true;
    }
    if (((DAT_01bea090 & 0x400) == 0) && (bVar1)) {
      param_1[0x96f] = 0;
      FUN_008abc80(0x10005);
      return;
    }
    iVar2 = FUN_00a8c760(1);
    if ((iVar2 == 0) || (iVar2 = FUN_008b9da0(0,0,0), iVar2 == 0)) {
      iVar2 = (**(code **)(*param_1 + 0x32c))();
      if ((iVar2 == 0) && (iVar2 = FUN_008a8cb0(0), iVar2 != 0)) {
        FUN_008a3d00(0);
        return;
      }
      if (param_1[0x1033] != 0) {
        FUN_008abc80(0x10004);
        return;
      }
      if ((((float)param_1[0x34a] <= 62500.0) && (param_1[0x187] < 4)) ||
         ((iVar2 = FUN_00416d50(0x21), iVar2 != 0 && (param_1[0x187] < 4)))) {
        param_1[0x187] = 4;
      }
      else {
        iVar2 = FUN_00416d50(7);
        if (iVar2 != 0) {
          FUN_008abc80(0x10003);
          return;
        }
        iVar2 = FUN_008ac260();
        if (((iVar2 == 0) && (iVar2 = FUN_00a8cac0(), 3 < iVar2)) &&
           (iVar2 = FUN_008c6a70(0,1,0), iVar2 == 0)) {
          FUN_008ac4c0();
          return;
        }
      }
    }
  }
  return;
}

// 008C7240  FUN_008c7240  size=480  [between]
void __fastcall FUN_008c7240(int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  (**(code **)(*param_1 + 800))(0x3c888889);
  iVar3 = param_1[0x1033];
  param_1[0x15b8] = 1;
  iVar2 = FUN_008b1e70();
  if (((((iVar2 == 0) && (iVar2 = FUN_008b9fb0(), iVar2 == 0)) && (param_1[0x187] != 0)) &&
      ((iVar2 = FUN_008ac0c0(0), iVar2 == 0 && (iVar2 = FUN_008ac320(0,0), iVar2 == 0)))) &&
     (iVar2 = FUN_008ac3e0(0), iVar2 == 0)) {
    if ((param_1[0x187] < 4) || (iVar2 = FUN_00a8c760(0x1c), iVar2 != 0)) {
      bVar1 = false;
      if (((param_1[0x33f] & param_1[0x386]) != 0) || (param_1[0x96f] != 0)) {
        bVar1 = true;
      }
      if (((DAT_01bea090 & 0x400) == 0) && (bVar1)) {
        param_1[0x96f] = 0;
        FUN_008abc80((iVar3 != 0) + 0x10005);
        return;
      }
    }
    iVar2 = FUN_008ac260();
    if ((iVar2 == 0) && (iVar3 = FUN_008b9da0(iVar3 != 0,0,0), iVar3 == 0)) {
      iVar3 = (**(code **)(*param_1 + 0x32c))();
      if ((iVar3 == 0) && (iVar3 = FUN_008a8cb0(0), iVar3 != 0)) {
        FUN_008a3d00(0);
        return;
      }
      iVar3 = param_1[0x1033];
      if ((iVar3 == 0) && (param_1[0x187] < 4)) {
LAB_008c73fd:
        param_1[0x187] = 4;
        return;
      }
      iVar2 = FUN_00416d50(7);
      if (iVar2 != 0) {
        FUN_008abc80(0x10003);
        return;
      }
      iVar2 = FUN_00416d50(0x21);
      if ((iVar2 == 0) && (iVar2 = FUN_00416d50(0x11), iVar2 == 0)) {
        iVar2 = FUN_00416d50(0x1b);
        if ((iVar2 == 0) && (iVar3 != 0)) {
          if (param_1[0x187] < 4) {
            return;
          }
          FUN_008abc80(0x10004);
          return;
        }
        if (param_1[0x187] < 4) {
          return;
        }
      }
      else if (param_1[0x187] < 4) goto LAB_008c73fd;
      FUN_008c6a70(0,1,0);
    }
  }
  return;
}

// 008C7420  FUN_008c7420  size=342  [between]
void __fastcall FUN_008c7420(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 800))(param_1[0x156c]);
  (**(code **)(*param_1 + 0x3f0))();
  param_1[0x15b8] = 1;
  param_1[0x15b9] = 1;
  if ((param_1[0x187] != 0) && (iVar1 = FUN_008ac0c0(0), iVar1 == 0)) {
    if (((DAT_01bea094 & 0x40000000) == 0) &&
       ((iVar1 = FUN_00a8c760(0x22), iVar1 != 0 && (0 < param_1[0x39c])))) {
      param_1[0x39c] = 0;
      iVar1 = FUN_00a8cab0();
      param_1[0x1505] = iVar1;
      FUN_008a66b0();
      FUN_00a8caf0(0x90000,0,0,0);
      if (param_1[0x15c0] == 0) {
        return;
      }
      param_1[0x15c0] = 0;
      FUN_00a8c9b0(0,0x34,0,0);
      return;
    }
    iVar1 = FUN_008ac3e0(0);
    if (iVar1 == 0) {
      iVar1 = FUN_00a8c760(1);
      if ((iVar1 != 0) && (iVar1 = FUN_008b9da0(0,0,0), iVar1 != 0)) {
        return;
      }
      iVar1 = FUN_008c6a70(0,1,0);
      if (((iVar1 == 0) &&
          (((iVar1 = FUN_00a8c760(0x17), iVar1 != 0 || (0.0 < (float)param_1[0xd07])) &&
           (iVar1 = (**(code **)(*param_1 + 0x32c))(), iVar1 == 0)))) &&
         (iVar1 = FUN_008a8cb0(0), iVar1 != 0)) {
        FUN_008a3d00(0);
      }
    }
  }
  return;
}

// 008C7580  FUN_008c7580  size=307  [between]
undefined4 __thiscall FUN_008c7580(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_008ac0c0(0);
  if (iVar1 == 0) {
    if ((((DAT_01bea094 & 0x40000000) == 0) && (iVar1 = FUN_00a8c760(0x22), iVar1 != 0)) &&
       (0 < param_1[0x39c])) {
      param_1[0x39c] = 0;
      iVar1 = FUN_00a8cab0();
      param_1[0x1505] = iVar1;
      FUN_008a66b0();
      FUN_00a8caf0(0x90000,0,0,0);
      if (param_1[0x15c0] == 0) {
        return 1;
      }
      param_1[0x15c0] = 0;
      FUN_00a8c9b0(0,0x34,0,0);
      return 1;
    }
    iVar1 = FUN_00a8c760(1);
    if ((iVar1 != 0) && (iVar1 = FUN_008b9da0(0,param_2,0), iVar1 != 0)) {
      return 1;
    }
    iVar1 = FUN_008c6a70(0,1,0);
    if (iVar1 == 0) {
      iVar1 = FUN_00a8c760(0x17);
      if (((iVar1 != 0) || (0.0 < (float)param_1[0xd07])) &&
         ((iVar1 = (**(code **)(*param_1 + 0x32c))(), iVar1 == 0 &&
          (iVar1 = FUN_008a8cb0(0), iVar1 != 0)))) {
        FUN_008a3d00(0);
        return 1;
      }
      iVar1 = FUN_00a8c760(0);
      if ((iVar1 != 0) && (iVar1 = FUN_008ac3e0(0), iVar1 != 0)) {
        return 1;
      }
      return 0;
    }
  }
  return 1;
}

// 008C76C0  FUN_008c76c0  size=174  [between]
void __fastcall FUN_008c76c0(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] != 0) {
    iVar1 = (**(code **)(*param_1 + 0x34c))();
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x388))();
      return;
    }
    iVar1 = FUN_00a959f0(0);
    if (((param_1[0x187] == 1) && (iVar1 < 3)) && (param_1[0x39c] != 0)) {
      param_1[0x39c] = 0;
      FUN_008abc80(0x90000);
      return;
    }
    iVar1 = FUN_008c7580(0);
    if (iVar1 == 0) {
      iVar1 = FUN_00a8c760(0);
      if (iVar1 != 0) {
        iVar1 = FUN_008a2740();
        if (iVar1 != 0) {
          iVar1 = FUN_00416d50(8);
          if (iVar1 == 0) {
            param_1[0x95a] = 0;
            param_1[0x988] = 0;
            FUN_008abc80(0x20000);
          }
        }
      }
    }
  }
  return;
}

// 008C7770  FUN_008c7770  size=121  [between]
void __fastcall FUN_008c7770(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] != 0) {
    iVar1 = (**(code **)(*param_1 + 0x34c))();
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x388))();
      return;
    }
    iVar1 = FUN_008c7580(0);
    if (iVar1 == 0) {
      iVar1 = FUN_00a8c760(0);
      if ((iVar1 != 0) && ((DAT_01bea090 & 0x800000) == 0)) {
        iVar1 = FUN_008abfd0(0);
        if (iVar1 == 0) {
          iVar1 = FUN_008a2740();
          if (iVar1 != 0) {
            param_1[0x95a] = 0;
            FUN_008abc80(0x20000);
          }
        }
      }
    }
  }
  return;
}

// 008C77F0  FUN_008c77f0  size=327  [between]
void __fastcall FUN_008c77f0(int *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_1[0x1d9] == 0) || (iVar2 = FUN_008e2740(), iVar2 == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  (**(code **)(*param_1 + 0x1d4))(!bVar1);
  if (param_1[0x187] == 0) {
    return;
  }
  if (param_1[0x187] == 3) {
    iVar2 = (**(code **)(*param_1 + 0x34c))();
    if (iVar2 != 0) {
      (**(code **)(*param_1 + 0x314))();
      param_1[0x224] = 0;
      param_1[0x225] = 0;
      param_1[0x226] = 0;
      param_1[0x227] = 0;
      param_1[0x408] = 0;
      param_1[0x409] = 0;
      param_1[0x40a] = 0;
      param_1[0x40b] = 0;
      param_1[0x24] = 0;
      FUN_00b895d0();
      FUN_008abc80(0x10007);
      return;
    }
    if ((*(byte *)(param_1 + 0x9f4) & 1) != 0) {
      param_1[0x187] = 6;
      return;
    }
    iVar2 = (**(code **)(*param_1 + 800))(0x3c888889);
    if (iVar2 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
  }
  else {
    (**(code **)(*param_1 + 800))(0x3c888889);
  }
  uVar3 = 0;
  if (((param_1[0x187] == 7) || (param_1[0x187] == 8)) &&
     ((param_1[0x1d9] == 0 || (iVar2 = FUN_008e2740(), iVar2 == 0)))) {
    uVar3 = 1;
  }
  iVar2 = FUN_008c7580(uVar3);
  if (iVar2 != 0) {
    FUN_00b895d0();
    param_1[0x24] = 0;
  }
  return;
}

// 008C7940  FUN_008c7940  size=171  [between]
void __fastcall FUN_008c7940(int *param_1)

{
  bool bVar1;
  int iVar2;
  
  if (param_1[0x187] == 0) {
    return;
  }
  iVar2 = (**(code **)(*param_1 + 0x34c))();
  if (iVar2 == 0) {
    if ((param_1[0x1d9] == 0) || (iVar2 = FUN_008e2740(), iVar2 == 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    (**(code **)(*param_1 + 0x1d4))(!bVar1);
    FUN_008c7580(1);
    return;
  }
  iVar2 = FUN_00a8cab0();
  param_1[0x1505] = iVar2;
  FUN_008a66b0();
  FUN_00a8caf0(0x10008,0,0,0);
  if (param_1[0x15c0] == 0) {
    return;
  }
  param_1[0x15c0] = 0;
  FUN_00a8c9b0(0,0x34,0,0);
  return;
}

// 008C79F0  FUN_008c79f0  size=105  [between]
void __fastcall FUN_008c79f0(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] != 0) {
    iVar1 = (**(code **)(*param_1 + 0x34c))();
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x388))();
      return;
    }
    iVar1 = FUN_00a959f0(0);
    if (((param_1[0x187] == 1) && (iVar1 < 3)) && (param_1[0x39c] != 0)) {
      param_1[0x39c] = 0;
      FUN_008abc80(0x90000);
      return;
    }
    FUN_008c7580(0);
  }
  return;
}

// 008C7A60  FUN_008c7a60  size=49  [between]
void __fastcall FUN_008c7a60(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] != 0) {
    iVar1 = (**(code **)(*param_1 + 0x34c))();
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x388))();
      return;
    }
    FUN_008c7580(0);
  }
  return;
}

// 008C7AC0  FUN_008c7ac0  size=174  [between]
void __fastcall FUN_008c7ac0(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] != 0) {
    iVar1 = FUN_00a8c760(0x17);
    if ((((iVar1 != 0) || (0.0 < (float)param_1[0xd07])) &&
        (iVar1 = (**(code **)(*param_1 + 0x32c))(), iVar1 == 0)) &&
       (iVar1 = FUN_008a8cb0(0), iVar1 != 0)) {
      FUN_008a3d00(0);
      return;
    }
    iVar1 = FUN_008ac0c0(0);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x008c7b25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x314))();
      return;
    }
    iVar1 = FUN_00a8c760(1);
    if ((iVar1 != 0) && (iVar1 = FUN_008b9da0(0,0,0), iVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x008c7b4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x314))();
      return;
    }
    iVar1 = FUN_008c6a70(0,1,0);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x008c7b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x314))();
      return;
    }
  }
  return;
}

// 008C7B70  FUN_008c7b70  size=363  [between]
void __fastcall FUN_008c7b70(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  (**(code **)(*param_1 + 800))(0x3c888889);
  pcVar1 = *(code **)(*param_1 + 0x34c);
  param_1[0x2e5] = 1;
  iVar2 = (*pcVar1)();
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x388))(0);
    return;
  }
  if ((param_1[0x187] != 0) && (iVar2 = FUN_008ac0c0(0), iVar2 == 0)) {
    if (((DAT_01bea094 & 0x40000000) == 0) &&
       ((iVar2 = FUN_00a8c760(0x22), iVar2 != 0 && (0 < param_1[0x39c])))) {
      param_1[0x39c] = 0;
      iVar2 = FUN_00a8cab0();
      param_1[0x1505] = iVar2;
      FUN_008a66b0();
      FUN_00a8caf0(0x90000,0,0,0);
      if (param_1[0x15c0] == 0) {
        return;
      }
      param_1[0x15c0] = 0;
      FUN_00a8c9b0(0,0x34,0,0);
      return;
    }
    iVar2 = FUN_00a8c760(1);
    if ((iVar2 != 0) && (iVar2 = FUN_008b9da0(0,0,0), iVar2 != 0)) {
      return;
    }
    iVar2 = FUN_008c6a70(0,1,0);
    if (iVar2 == 0) {
      iVar2 = FUN_00a8c760(0x17);
      if ((((iVar2 != 0) || (0.0 < (float)param_1[0xd07])) &&
          (iVar2 = (**(code **)(*param_1 + 0x32c))(), iVar2 == 0)) &&
         (iVar2 = FUN_008a8cb0(0), iVar2 != 0)) {
        FUN_008a3d00(0);
        return;
      }
      iVar2 = FUN_00a8c760(0);
      if (iVar2 != 0) {
        FUN_008ac3e0(0);
      }
    }
  }
  return;
}

// 008C7CE0  FUN_008c7ce0  size=341  [between]
void __fastcall FUN_008c7ce0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(*param_1 + 0x34c);
  param_1[0x2e5] = 1;
  iVar2 = (*pcVar1)();
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x388))(0);
    return;
  }
  if ((param_1[0x187] != 0) && (iVar2 = FUN_008ac0c0(0), iVar2 == 0)) {
    if (((DAT_01bea094 & 0x40000000) == 0) &&
       ((iVar2 = FUN_00a8c760(0x22), iVar2 != 0 && (0 < param_1[0x39c])))) {
      param_1[0x39c] = 0;
      iVar2 = FUN_00a8cab0();
      param_1[0x1505] = iVar2;
      FUN_008a66b0();
      FUN_00a8caf0(0x90000,0,0,0);
      if (param_1[0x15c0] == 0) {
        return;
      }
      param_1[0x15c0] = 0;
      FUN_00a8c9b0(0,0x34,0,0);
      return;
    }
    iVar2 = FUN_00a8c760(1);
    if ((iVar2 != 0) && (iVar2 = FUN_008b9da0(0,0,0), iVar2 != 0)) {
      return;
    }
    iVar2 = FUN_008c6a70(0,1,0);
    if (iVar2 == 0) {
      iVar2 = FUN_00a8c760(0x17);
      if ((((iVar2 != 0) || (0.0 < (float)param_1[0xd07])) &&
          (iVar2 = (**(code **)(*param_1 + 0x32c))(), iVar2 == 0)) &&
         (iVar2 = FUN_008a8cb0(0), iVar2 != 0)) {
        FUN_008a3d00(0);
        return;
      }
      iVar2 = FUN_00a8c760(0);
      if (iVar2 != 0) {
        FUN_008ac3e0(0);
      }
    }
  }
  return;
}

// 008C7E40  Pl1500::vf3CC  size=972  [class]
undefined4 __fastcall Pl1500::vf3CC(int *param_1)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  undefined4 unaff_EBX;
  int *piVar4;
  float10 fVar5;
  int *piVar6;
  undefined1 *puVar7;
  undefined1 *puStack_174;
  undefined1 local_160 [5];
  byte bStack_15b;
  char cStack_150;
  float fStack_144;
  int iStack_140;
  int iStack_13c;
  int iStack_138;
  int iStack_134;
  uint uStack_e8;
  uint uStack_e0;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  piVar4 = (int *)0x0;
  param_1[0xe17] = 0;
  param_1[0x2e3] = 0;
  if (param_1[0x139] != 0) {
    return 0;
  }
  if (param_1[0x15c1] != 0) {
    return 0;
  }
  puStack_174 = (undefined1 *)0x0;
  param_1[0x1a1] = 0;
  FUN_00ac2080();
  puStack_174 = (undefined1 *)0x8c7e82;
  iVar3 = FUN_008bbc10();
  if (iVar3 != 0) {
    return 1;
  }
  if (((byte)DAT_01bea094 & 0x20) == 0) {
    puStack_174 = (undefined1 *)0x8c7e9a;
    iVar3 = FUN_00a8ef10();
    if (iVar3 == 0) {
      puStack_174 = (undefined1 *)0x6;
      iVar3 = FUN_00a8c760();
      if (iVar3 == 0) goto LAB_008c7ed1;
    }
    puStack_174 = (undefined1 *)0x8c7eb2;
    FUN_008bb460();
    if (param_1[0x156b] != 0) {
      puStack_174 = (undefined1 *)0x0;
      FUN_00a938c0();
      param_1[0x156b] = 0;
    }
  }
  else {
LAB_008c7ed1:
    if (param_1[0x156b] == 0) {
      puStack_174 = (undefined1 *)0x0;
      FUN_00a93910();
      param_1[0x156b] = 1;
    }
    if ((DAT_01bea060 & 0x2000000) == 0) {
      puStack_174 = (undefined1 *)0x8c7f00;
      FUN_00445db0();
      puStack_174 = local_160;
      iVar3 = FUN_008bb3f0();
      if (iVar3 != 0) {
        puStack_174 = local_160;
        iVar3 = FUN_00a8f040();
        if (iVar3 == 0) {
          puStack_174 = (undefined1 *)0x8c7f30;
          (**(code **)(*param_1 + 0x32c))();
          fVar1 = (float)param_1[0xb04];
          puStack_174 = (undefined1 *)0x8c7f5b;
          iVar3 = FUN_004025b0();
          if (iVar3 == 0) {
            return 1;
          }
          param_1[0xa00] = iStack_140;
          param_1[0xa01] = iStack_13c;
          param_1[0xa02] = iStack_138;
          param_1[0xa03] = iStack_134;
          puStack_174 = (undefined1 *)0x8c7f94;
          iVar3 = FUN_00a81330();
          if (iVar3 != 0) {
            puStack_174 = (undefined1 *)0x8c7f9f;
            piVar4 = (int *)FUN_00a7c8a0();
            if (piVar4 != (int *)0x0) {
              puStack_174 = (undefined1 *)param_1[0x13c];
              iVar3 = (**(code **)(*piVar4 + 0x1a0))(local_160);
              if (iVar3 != 0) {
                return 0;
              }
            }
          }
          if (cStack_150 != '\0') {
            puStack_174 = (undefined1 *)0x0;
            (**(code **)(*param_1 + 0x21c))(piVar4,cStack_150,0x3c23d70a);
          }
          if ((*(byte *)(param_1 + 0x4f9) & 2) == 0) {
            puStack_174 = (undefined1 *)0x1;
            puVar7 = local_160;
            piVar6 = piVar4;
            (**(code **)(*param_1 + 0x198))();
            if ((uStack_e0 & 0x400000) != 0) {
              param_1[0xa09] = 1;
              param_1[0xa0c] = iStack_3c;
              param_1[0xa0d] = iStack_38;
              param_1[0xa0e] = iStack_34;
              param_1[0xa0f] = iStack_30;
              pcVar2 = *(code **)(*param_1 + 0x198);
              param_1[0xa10] = iStack_2c;
              (*pcVar2)(piVar4,&stack0xfffffe94,2);
              iVar3 = FUN_00a8cbe0(0x40008);
              if (iVar3 == 0) {
                FUN_008abc80(0x40008);
              }
              if (piVar6 != (int *)0x0) {
                FUN_008a8f40(1,0,0);
              }
              return 0;
            }
            if ((uStack_e0 & 0x10000000) == 0) {
              FUN_00bc34f0();
            }
            if (((0.0 < fVar1) && ((uStack_e0 & 0x10000000) != 0)) && (bStack_15b < 6)) {
              unaff_EBX = 0;
            }
            (**(code **)(*param_1 + 0x30c))(unaff_EBX,0);
            if ((0.0 >= fVar1) && ((uStack_e8 & 0x10000000) != 0)) {
              param_1[0xb04] = 0x41200000;
            }
            iVar3 = FUN_00a81330();
            if ((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
              piVar4 = (int *)FUN_00a7c8a0();
              iVar3 = (**(code **)(*piVar4 + 0x1b0))(param_1[0x13c]);
              if (iVar3 != 0) {
                return 0;
              }
            }
            fVar5 = (float10)FUN_00ddba30(fStack_144 - (float)param_1[0x25]);
            param_1[0x245] = (int)(float)fVar5;
            param_1[0x9fb] = (int)fStack_144;
            iVar3 = FUN_008ae930(&puStack_174);
            if (iVar3 != 0) {
              iVar3 = FUN_00b7cc20();
              if (iVar3 == 0) {
                param_1[0xe49] = 0;
              }
              else if (param_1[0xe49] == 0) {
                FUN_00b7ab80(0x42340000,0x3dcccccd);
                param_1[0xe49] = 1;
                param_1[0x429] = 0;
              }
              if (puVar7 != (undefined1 *)0x0) {
                FUN_008a8f40(1,0,0);
              }
              param_1[0xc6a] = 0x43340000;
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}

// 008C8210  FUN_008c8210  size=600  [callgraph]
void __fastcall FUN_008c8210(int *param_1)

{
  bool bVar1;
  int iVar2;
  
  (**(code **)(*param_1 + 800))(0x3c888889);
  if ((param_1[0x187] != 0) &&
     ((iVar2 = FUN_00a8c760(1), iVar2 == 0 || (iVar2 = FUN_008b9da0(0,0,0), iVar2 == 0)))) {
    iVar2 = FUN_00a8c760(0x1c);
    if ((iVar2 != 0) && ((param_1[0x1d9] != 0 && (iVar2 = FUN_008e2740(), iVar2 != 0)))) {
      bVar1 = false;
      if (((param_1[0x33f] & param_1[0x386]) != 0) || (param_1[0x96f] != 0)) {
        bVar1 = true;
      }
      if (((DAT_01bea090 & 0x400) == 0) && (bVar1)) {
        param_1[0x96f] = 0;
        FUN_008abc80(0x10005);
        return;
      }
    }
    if ((DAT_01bea094 & 0x40000000) == 0) {
      if ((((DAT_01bea090 & 0x4000) == 0) && (iVar2 = FUN_00a8c760(0x11), iVar2 != 0)) &&
         (param_1[0x1033] != 0)) {
LAB_008c8336:
        FUN_008abc80(0x10004);
        return;
      }
      if ((((DAT_01bea094 & 0x40000000) == 0) && (iVar2 = FUN_00a8c760(0), iVar2 != 0)) &&
         (90000.0 < (float)param_1[0x34a])) {
        if (((DAT_01bea090 & 0x1000000) == 0) && ((DAT_01bea090 & 0x10) == 0)) {
          if (param_1[0x1033] != 0) goto LAB_008c8336;
          if (90000.0 < (float)param_1[0x34a]) {
            FUN_008abc80(0x10002);
            return;
          }
        }
        FUN_008abc80(0x10002);
        return;
      }
    }
    iVar2 = FUN_00a8c760(0);
    if ((iVar2 == 0) || (iVar2 = FUN_008ac0c0(0), iVar2 == 0)) {
      if (((DAT_01bea094 & 0x40000000) == 0) &&
         ((iVar2 = FUN_00a8c760(0x22), iVar2 != 0 && (0 < param_1[0x39c])))) {
        param_1[0x39c] = 0;
        iVar2 = FUN_00a8cab0();
        param_1[0x1505] = iVar2;
        FUN_008a66b0();
        FUN_00a8caf0(0x90000,0,0,0);
        if (param_1[0x15c0] != 0) {
          param_1[0x15c0] = 0;
          FUN_00a8c9b0(0,0x34,0,0);
          return;
        }
      }
      else {
        iVar2 = FUN_00a8c760(0x17);
        if ((((iVar2 != 0) || (0.0 < (float)param_1[0xd07])) &&
            (iVar2 = (**(code **)(*param_1 + 0x32c))(), iVar2 == 0)) &&
           (iVar2 = FUN_008a8cb0(0), iVar2 != 0)) {
          FUN_008a3d00(0);
          return;
        }
        iVar2 = FUN_00a8c760(0);
        if (iVar2 != 0) {
          FUN_008ac3e0(0);
        }
      }
    }
  }
  return;
}

// 008C8470  FUN_008c8470  size=600  [callgraph]
void __fastcall FUN_008c8470(int *param_1)

{
  bool bVar1;
  int iVar2;
  
  (**(code **)(*param_1 + 800))(0x3c888889);
  if ((param_1[0x187] != 0) &&
     ((iVar2 = FUN_00a8c760(1), iVar2 == 0 || (iVar2 = FUN_008b9da0(0,0,0), iVar2 == 0)))) {
    iVar2 = FUN_00a8c760(0x1c);
    if ((iVar2 != 0) && ((param_1[0x1d9] != 0 && (iVar2 = FUN_008e2740(), iVar2 != 0)))) {
      bVar1 = false;
      if (((param_1[0x33f] & param_1[0x386]) != 0) || (param_1[0x96f] != 0)) {
        bVar1 = true;
      }
      if (((DAT_01bea090 & 0x400) == 0) && (bVar1)) {
        param_1[0x96f] = 0;
        FUN_008abc80(0x10005);
        return;
      }
    }
    if ((DAT_01bea094 & 0x40000000) == 0) {
      if ((((DAT_01bea090 & 0x4000) == 0) && (iVar2 = FUN_00a8c760(0x11), iVar2 != 0)) &&
         (param_1[0x1033] != 0)) {
LAB_008c8596:
        FUN_008abc80(0x10004);
        return;
      }
      if ((((DAT_01bea094 & 0x40000000) == 0) && (iVar2 = FUN_00a8c760(0), iVar2 != 0)) &&
         (90000.0 < (float)param_1[0x34a])) {
        if (((DAT_01bea090 & 0x1000000) == 0) && ((DAT_01bea090 & 0x10) == 0)) {
          if (param_1[0x1033] != 0) goto LAB_008c8596;
          if (90000.0 < (float)param_1[0x34a]) {
            FUN_008abc80(0x10002);
            return;
          }
        }
        FUN_008abc80(0x10002);
        return;
      }
    }
    iVar2 = FUN_00a8c760(0);
    if ((iVar2 == 0) || (iVar2 = FUN_008ac0c0(0), iVar2 == 0)) {
      if (((DAT_01bea094 & 0x40000000) == 0) &&
         ((iVar2 = FUN_00a8c760(0x22), iVar2 != 0 && (0 < param_1[0x39c])))) {
        param_1[0x39c] = 0;
        iVar2 = FUN_00a8cab0();
        param_1[0x1505] = iVar2;
        FUN_008a66b0();
        FUN_00a8caf0(0x90000,0,0,0);
        if (param_1[0x15c0] != 0) {
          param_1[0x15c0] = 0;
          FUN_00a8c9b0(0,0x34,0,0);
          return;
        }
      }
      else {
        iVar2 = FUN_00a8c760(0x17);
        if ((((iVar2 != 0) || (0.0 < (float)param_1[0xd07])) &&
            (iVar2 = (**(code **)(*param_1 + 0x32c))(), iVar2 == 0)) &&
           (iVar2 = FUN_008a8cb0(0), iVar2 != 0)) {
          FUN_008a3d00(0);
          return;
        }
        iVar2 = FUN_00a8c760(0);
        if (iVar2 != 0) {
          FUN_008ac3e0(0);
        }
      }
    }
  }
  return;
}

// 008C86D0  FUN_008c86d0  size=393  [callgraph]
void __fastcall FUN_008c86d0(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 800))(0x3c888889);
  if (param_1[0x187] != 0) {
    if (param_1[0x250] != 0) {
      iVar1 = FUN_00b7a7c0();
      param_1[0x248] = (int)((float)param_1[0x248] - (float)iVar1 * 15.0);
    }
    iVar1 = FUN_00a8c760(0);
    if ((iVar1 != 0) && (iVar1 = FUN_008ac0c0(0), iVar1 != 0)) {
      return;
    }
    iVar1 = FUN_00a8c760(0x17);
    if ((((iVar1 != 0) || (0.0 < (float)param_1[0xd07])) &&
        (iVar1 = (**(code **)(*param_1 + 0x32c))(), iVar1 == 0)) &&
       (iVar1 = FUN_008a8cb0(0), iVar1 != 0)) {
      FUN_008a3d00(0);
      return;
    }
    iVar1 = FUN_00a8c760(0);
    if ((iVar1 != 0) && (iVar1 = FUN_008ac3e0(0), iVar1 != 0)) {
      return;
    }
    if (3 < param_1[0x187]) {
      if ((((DAT_01bea094 & 0x40000000) == 0) && (iVar1 = FUN_00a8c760(0x22), iVar1 != 0)) &&
         (0 < param_1[0x39c])) {
        param_1[0x39c] = 0;
        iVar1 = FUN_00a8cab0();
        param_1[0x1505] = iVar1;
        FUN_008a66b0();
        FUN_00a8caf0(0x90000,0,0,0);
        if (param_1[0x15c0] == 0) {
          return;
        }
        param_1[0x15c0] = 0;
        FUN_00a8c9b0(0,0x34,0,0);
        return;
      }
      iVar1 = FUN_00a8c760(1);
      if ((iVar1 != 0) && (iVar1 = FUN_008b9da0(0,0,0), iVar1 != 0)) {
        return;
      }
      FUN_008c6a70(0,1,0);
    }
  }
  return;
}

// 008C8860  FUN_008c8860  size=403  [callgraph]
void __fastcall FUN_008c8860(int *param_1)

{
  bool bVar1;
  int iVar2;
  
  (**(code **)(*param_1 + 800))(0x3c888889);
  if ((param_1[0x187] != 0) &&
     ((iVar2 = FUN_00a8c760(1), iVar2 == 0 || (iVar2 = FUN_008b9da0(0,0,0), iVar2 == 0)))) {
    iVar2 = FUN_00a8c760(0x1c);
    if ((iVar2 != 0) && ((param_1[0x1d9] != 0 && (iVar2 = FUN_008e2740(), iVar2 != 0)))) {
      bVar1 = false;
      if (((param_1[0x33f] & param_1[0x386]) != 0) || (param_1[0x96f] != 0)) {
        bVar1 = true;
      }
      if (((DAT_01bea090 & 0x400) == 0) && (bVar1)) {
        param_1[0x96f] = 0;
        FUN_008abc80(0x10005);
        return;
      }
    }
    if ((DAT_01bea094 & 0x40000000) == 0) {
      if ((((DAT_01bea090 & 0x4000) == 0) && (iVar2 = FUN_00a8c760(0x11), iVar2 != 0)) &&
         (param_1[0x1033] != 0)) {
LAB_008c8986:
        FUN_008abc80(0x10004);
        return;
      }
      if ((((DAT_01bea094 & 0x40000000) == 0) && (iVar2 = FUN_00a8c760(0), iVar2 != 0)) &&
         (90000.0 < (float)param_1[0x34a])) {
        if (((DAT_01bea090 & 0x1000000) == 0) && ((DAT_01bea090 & 0x10) == 0)) {
          if (param_1[0x1033] != 0) goto LAB_008c8986;
          if (90000.0 < (float)param_1[0x34a]) {
            FUN_008abc80(0x10002);
            return;
          }
        }
        FUN_008abc80(0x10002);
        return;
      }
    }
    iVar2 = FUN_00a8c760(0);
    if (((iVar2 == 0) || (iVar2 = FUN_008ac0c0(0), iVar2 == 0)) &&
       (iVar2 = FUN_00a8c760(0), iVar2 != 0)) {
      FUN_008ac3e0(0);
    }
  }
  return;
}

// 008C8A00  FUN_008c8a00  size=300  [callgraph]
void __fastcall FUN_008c8a00(int *param_1)

{
  int iVar1;
  
  if (((param_1[0x187] != 0) && (iVar1 = FUN_008b1e70(), iVar1 == 0)) &&
     (iVar1 = FUN_008ac0c0(0), iVar1 == 0)) {
    if ((((DAT_01bea094 & 0x40000000) == 0) && (iVar1 = FUN_00a8c760(0x22), iVar1 != 0)) &&
       (0 < param_1[0x39c])) {
      param_1[0x39c] = 0;
      iVar1 = FUN_00a8cab0();
      param_1[0x1505] = iVar1;
      FUN_008a66b0();
      FUN_00a8caf0(0x90000,0,0,0);
      if (param_1[0x15c0] == 0) {
        return;
      }
      param_1[0x15c0] = 0;
      FUN_00a8c9b0(0,0x34,0,0);
      return;
    }
    iVar1 = FUN_008ac3e0(0);
    if ((iVar1 == 0) && (iVar1 = FUN_008c6a70(0,1,0), iVar1 == 0)) {
      iVar1 = FUN_00a8c760(1);
      if ((iVar1 != 0) && (iVar1 = FUN_008b9da0(0,0,0), iVar1 != 0)) {
        return;
      }
      iVar1 = FUN_00a8c760(0x17);
      if ((((iVar1 != 0) || (0.0 < (float)param_1[0xd07])) &&
          (iVar1 = (**(code **)(*param_1 + 0x32c))(), iVar1 == 0)) &&
         (iVar1 = FUN_008a8cb0(0), iVar1 != 0)) {
        FUN_008a3d00(0);
      }
    }
  }
  return;
}

// 008C8B30  FUN_008c8b30  size=287  [callgraph]
void __fastcall FUN_008c8b30(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x3f0))();
  iVar1 = FUN_008ac0c0(0);
  if (iVar1 == 0) {
    if ((((DAT_01bea094 & 0x40000000) == 0) && (iVar1 = FUN_00a8c760(0x22), iVar1 != 0)) &&
       (0 < param_1[0x39c])) {
      param_1[0x39c] = 0;
      iVar1 = FUN_00a8cab0();
      param_1[0x1505] = iVar1;
      FUN_008a66b0();
      FUN_00a8caf0(0x90000,0,0,0);
      if (param_1[0x15c0] == 0) {
        return;
      }
      param_1[0x15c0] = 0;
      FUN_00a8c9b0(0,0x34,0,0);
      return;
    }
    iVar1 = FUN_008ac3e0(0);
    if (iVar1 == 0) {
      iVar1 = FUN_00a8c760(1);
      if ((iVar1 != 0) && (iVar1 = FUN_008b9da0(0,0,0), iVar1 != 0)) {
        return;
      }
      iVar1 = FUN_008c6a70(0,1,0);
      if ((((iVar1 == 0) &&
           ((iVar1 = FUN_00a8c760(0x17), iVar1 != 0 || (0.0 < (float)param_1[0xd07])))) &&
          (iVar1 = (**(code **)(*param_1 + 0x32c))(), iVar1 == 0)) &&
         (iVar1 = FUN_008a8cb0(0), iVar1 != 0)) {
        FUN_008a3d00(0);
      }
    }
  }
  return;
}

// 008C8C50  FUN_008c8c50  size=464  [callgraph]
undefined4 __fastcall FUN_008c8c50(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((((DAT_01bea094 & 0x40000000) == 0) && (iVar2 = FUN_00a8c760(0x22), iVar2 != 0)) &&
     (0 < *(int *)(param_1 + 0xe70))) {
    *(undefined4 *)(param_1 + 0xe70) = 0;
    uVar3 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0x5414) = uVar3;
    FUN_008a66b0();
    FUN_00a8caf0(0x90000,0,0,0);
    if (*(int *)(param_1 + 0x5700) != 0) {
      *(undefined4 *)(param_1 + 0x5700) = 0;
      FUN_00a8c9b0(0,0x34,0,0);
    }
    goto LAB_008c8df9;
  }
  iVar2 = FUN_00a8c760(1);
  if ((iVar2 != 0) && (iVar2 = FUN_008b9da0(0,0,0), iVar2 != 0)) goto LAB_008c8df9;
  iVar2 = FUN_00a8c760(0x1c);
  if ((iVar2 == 0) || ((*(int *)(param_1 + 0x764) == 0 || (iVar2 = FUN_008e2740(), iVar2 == 0)))) {
LAB_008c8d5f:
    if ((DAT_01bea094 & 0x40000000) != 0) {
      return 0xe0000;
    }
    if ((((DAT_01bea090 & 0x4000) != 0) || (iVar2 = FUN_00a8c760(0x11), iVar2 == 0)) ||
       (*(int *)(param_1 + 0x40cc) == 0)) {
      if ((DAT_01bea094 & 0x40000000) != 0) {
        return 0xe0000;
      }
      iVar2 = FUN_00a8c760(0);
      if (iVar2 == 0) {
        return 0xe0000;
      }
      if (*(float *)(param_1 + 0xd28) <= 90000.0) {
        return 0xe0000;
      }
      if ((((DAT_01bea090 & 0x1000000) != 0) || ((DAT_01bea090 & 0x10) != 0)) ||
         (*(int *)(param_1 + 0x40cc) == 0)) {
        uVar3 = 0x10002;
        goto LAB_008c8df2;
      }
    }
    uVar3 = 0x10004;
  }
  else {
    bVar1 = false;
    if (((*(uint *)(param_1 + 0xcfc) & *(uint *)(param_1 + 0xe18)) != 0) ||
       (*(int *)(param_1 + 0x25bc) != 0)) {
      bVar1 = true;
    }
    if (((DAT_01bea090 & 0x400) != 0) || (!bVar1)) goto LAB_008c8d5f;
    *(undefined4 *)(param_1 + 0x25bc) = 0;
    uVar3 = 0x10005;
  }
LAB_008c8df2:
  FUN_008abc80(uVar3);
LAB_008c8df9:
  uVar3 = FUN_00a8cab0();
  FUN_00a8caf0(0xe0000,0,0,0);
  return uVar3;
}

// 008C8E20  FUN_008c8e20  size=307  [callgraph]
undefined4 __thiscall FUN_008c8e20(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_008ac0c0(0);
  if (iVar1 == 0) {
    if ((((DAT_01bea094 & 0x40000000) == 0) && (iVar1 = FUN_00a8c760(0x22), iVar1 != 0)) &&
       (0 < param_1[0x39c])) {
      param_1[0x39c] = 0;
      iVar1 = FUN_00a8cab0();
      param_1[0x1505] = iVar1;
      FUN_008a66b0();
      FUN_00a8caf0(0x90000,0,0,0);
      if (param_1[0x15c0] == 0) {
        return 1;
      }
      param_1[0x15c0] = 0;
      FUN_00a8c9b0(0,0x34,0,0);
      return 1;
    }
    iVar1 = FUN_00a8c760(1);
    if ((iVar1 != 0) && (iVar1 = FUN_008b9da0(0,param_2,0), iVar1 != 0)) {
      return 1;
    }
    iVar1 = FUN_008c6a70(0,1,0);
    if (iVar1 == 0) {
      iVar1 = FUN_00a8c760(0x17);
      if (((iVar1 != 0) || (0.0 < (float)param_1[0xd07])) &&
         ((iVar1 = (**(code **)(*param_1 + 0x32c))(), iVar1 == 0 &&
          (iVar1 = FUN_008a8cb0(0), iVar1 != 0)))) {
        FUN_008a3d00(0);
        return 1;
      }
      iVar1 = FUN_00a8c760(0);
      if ((iVar1 != 0) && (iVar1 = FUN_008ac3e0(0), iVar1 != 0)) {
        return 1;
      }
      return 0;
    }
  }
  return 1;
}

// 008C8FE0  FUN_008c8fe0  size=35  [callgraph]
void __fastcall FUN_008c8fe0(int *param_1)

{
  (**(code **)(*param_1 + 0x1d4))(1);
  if (param_1[0x187] != 0) {
    FUN_008c8e20(1);
  }
  return;
}

// 008C9010  FUN_008c9010  size=35  [callgraph]
void __fastcall FUN_008c9010(int *param_1)

{
  (**(code **)(*param_1 + 0x1d4))(1);
  if (param_1[0x187] != 0) {
    FUN_008c8e20(1);
  }
  return;
}

// 008C9040  FUN_008c9040  size=35  [callgraph]
void __fastcall FUN_008c9040(int *param_1)

{
  (**(code **)(*param_1 + 0x1d4))(1);
  if (param_1[0x187] != 0) {
    FUN_008c8e20(1);
  }
  return;
}

// 008C9070  FUN_008c9070  size=35  [callgraph]
void __fastcall FUN_008c9070(int *param_1)

{
  (**(code **)(*param_1 + 0x1d4))(1);
  if (param_1[0x187] != 0) {
    FUN_008c8e20(1);
  }
  return;
}

// 008C90A0  FUN_008c90a0  size=35  [callgraph]
void __fastcall FUN_008c90a0(int *param_1)

{
  (**(code **)(*param_1 + 0x1d4))(1);
  if (param_1[0x187] != 0) {
    FUN_008c8e20(0);
  }
  return;
}

// 008C90D0  FUN_008c90d0  size=300  [callgraph]
void __fastcall FUN_008c90d0(int *param_1)

{
  int iVar1;
  
  if (((param_1[0x187] != 0) && (iVar1 = FUN_008b1e70(), iVar1 == 0)) &&
     (iVar1 = FUN_008ac0c0(0), iVar1 == 0)) {
    if ((((DAT_01bea094 & 0x40000000) == 0) && (iVar1 = FUN_00a8c760(0x22), iVar1 != 0)) &&
       (0 < param_1[0x39c])) {
      param_1[0x39c] = 0;
      iVar1 = FUN_00a8cab0();
      param_1[0x1505] = iVar1;
      FUN_008a66b0();
      FUN_00a8caf0(0x90000,0,0,0);
      if (param_1[0x15c0] == 0) {
        return;
      }
      param_1[0x15c0] = 0;
      FUN_00a8c9b0(0,0x34,0,0);
      return;
    }
    iVar1 = FUN_008ac3e0(0);
    if ((iVar1 == 0) && (iVar1 = FUN_008c6a70(0,1,0), iVar1 == 0)) {
      iVar1 = FUN_00a8c760(1);
      if ((iVar1 != 0) && (iVar1 = FUN_008b9da0(0,0,0), iVar1 != 0)) {
        return;
      }
      iVar1 = FUN_00a8c760(0x17);
      if ((((iVar1 != 0) || (0.0 < (float)param_1[0xd07])) &&
          (iVar1 = (**(code **)(*param_1 + 0x32c))(), iVar1 == 0)) &&
         (iVar1 = FUN_008a8cb0(0), iVar1 != 0)) {
        FUN_008a3d00(0);
        return;
      }
      FUN_008ac260();
      return;
    }
  }
  return;
}

// 008CEA50  FUN_008cea50  size=1629  [callgraph]
void __fastcall FUN_008cea50(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  if (param_1[0xee6] != 0) {
    iVar2 = FUN_00b7c980(1);
    iVar2 = FUN_00b7c970((float)iVar2);
    FUN_00cb7ae0((float)iVar2);
  }
  (**(code **)(*param_1 + 0x1d4))(0);
  param_1[0x2de] = 0;
  param_1[0x15bc] = 0;
  param_1[0x1578] = 0;
  param_1[0x1579] = 0;
  param_1[0x157a] = 0;
  param_1[0x157b] = 0;
  param_1[0x157c] = 0;
  param_1[0x157d] = 0;
  param_1[0x157e] = 0;
  param_1[0x157f] = 0;
  param_1[0x1580] = 0;
  pcVar1 = *(code **)(*param_1 + 0x424);
  param_1[0x15b2] = 0;
  iVar2 = (*pcVar1)();
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x1d4))(1);
  }
  param_1[0x2e5] = 0;
  iVar2 = FUN_00a8cab0();
  if (iVar2 < 0x20001) {
    if (iVar2 == 0x20000) {
      FUN_008c76c0();
    }
    else {
      switch(iVar2) {
      case 0x10000:
        FUN_008c6d90();
        break;
      case 0x10001:
        FUN_008c7050();
        break;
      case 0x10002:
        FUN_008c7080();
        break;
      case 0x10003:
        FUN_008ba190();
        break;
      case 0x10004:
        FUN_008c7240();
        break;
      case 0x10005:
      case 0x10006:
        FUN_008ba360();
        break;
      case 0x10007:
      case 0x10008:
        FUN_008ba530();
        break;
      case 0x10009:
        FUN_008c7420();
      }
    }
    goto switchD_008ceb28_default;
  }
  if (iVar2 < 0x30001) {
    if (iVar2 == 0x30000) {
      FUN_008bb4e0();
    }
    else {
      switch(iVar2) {
      case 0x20001:
        FUN_008c7770();
        break;
      case 0x20002:
        FUN_008c7940();
        break;
      case 0x20003:
        FUN_008c77f0();
        break;
      case 0x20004:
        FUN_008c79f0();
        break;
      case 0x20005:
        FUN_008c7a60();
        break;
      case 0x20006:
        if (param_1[0x187] != 0) {
          FUN_008c7580(0);
        }
        break;
      case 0x20007:
        FUN_008c7ac0();
      }
    }
    goto switchD_008ceb28_default;
  }
  if (iVar2 < 0x40001) {
    if (iVar2 != 0x40000) {
      switch(iVar2) {
      case 0x30001:
        FUN_008bb680();
        break;
      case 0x30002:
        FUN_008af290();
        break;
      case 0x30003:
        FUN_008af510();
        break;
      case 0x30004:
        FUN_008af7b0();
        break;
      case 0x30005:
        FUN_008afa00();
        break;
      case 0x30006:
      case 0x30007:
        FUN_008afba0();
        break;
      case 0x30008:
        FUN_008afd80();
        break;
      case 0x30009:
        FUN_008c8210();
        break;
      case 0x3000a:
        FUN_008c8470();
        break;
      case 0x3000b:
        FUN_008c86d0();
        break;
      case 0x3000c:
        FUN_008b0040();
        break;
      case 0x3000d:
switchD_008cec49_caseD_3000d:
        FUN_008c8860();
        break;
      case 0x3000e:
        FUN_008b0240();
      }
      goto switchD_008ceb28_default;
    }
switchD_008cecfb_caseD_40001:
    if (param_1[0x187] != 0) {
      FUN_008c8e20(0);
    }
  }
  else {
    if (0x50000 < iVar2) {
      if (0xe0000 < iVar2) {
        if (iVar2 < 0x100001) {
          if (iVar2 == 0x100000) {
            FUN_00619760();
          }
          else if (iVar2 == 0xe0001) {
            FUN_008c8b30();
          }
          else if (iVar2 == 0xe0002) {
            FUN_008b2420();
          }
        }
        else if (iVar2 < 0x200001) {
          if (iVar2 == 0x200000) {
            FUN_00606940();
          }
          else {
            switch(iVar2) {
            case 0x100001:
              FUN_006197c0();
              break;
            case 0x100002:
              FUN_0064d080();
              break;
            case 0x100003:
              FUN_0064d0a0();
              break;
            case 0x100004:
              FUN_0065df60();
              break;
            case 0x100005:
              FUN_0065e1c0();
              break;
            case 0x100006:
              FUN_0067e5e0();
              break;
            case 0x100007:
              FUN_0067e840();
              break;
            case 0x100008:
              FUN_006a30f0();
              break;
            case 0x100009:
              FUN_006a30c0();
              break;
            case 0x10000a:
              FUN_006aa870();
              break;
            case 0x10000b:
              FUN_006baab0();
              break;
            case 0x10000c:
              FUN_006baad0();
              break;
            case 0x10000d:
              FUN_006d9390();
              break;
            case 0x10000e:
              FUN_006d93c0();
              break;
            case 0x10000f:
              FUN_006ea9d0();
              break;
            case 0x100010:
              FUN_006eac30();
              break;
            case 0x100011:
              FUN_00604f80();
              break;
            case 0x100012:
              FUN_00604fb0();
              break;
            case 0x100013:
            case 0x100014:
              FUN_008b1260();
            }
          }
        }
        else if (iVar2 == 0x200001) {
          FUN_00604fe0();
        }
        goto switchD_008ceb28_default;
      }
      if (iVar2 == 0xe0000) {
        FUN_008b2290();
        goto switchD_008ceb28_default;
      }
      if (iVar2 < 0x80001) {
        if (iVar2 == 0x80000) {
          FUN_008ae100();
        }
        else if (iVar2 < 0x60001) {
          if (iVar2 == 0x60000) {
            FUN_008a3aa0();
          }
        }
        else if (iVar2 < 0x70001) {
          if (iVar2 == 0x70000) {
            FUN_00944f90();
          }
          else {
            switch(iVar2) {
            case 0x60001:
              FUN_008a3ad0();
              break;
            case 0x60002:
              FUN_008b1f70();
              break;
            case 0x60003:
              FUN_008b2080();
              break;
            case 0x60004:
            case 0x60005:
              FUN_008b2140();
            }
          }
        }
        else if (iVar2 == 0x70001) {
          FUN_00944fd0();
        }
        else if (iVar2 == 0x70002) {
          FUN_00944ff0();
        }
        else if (iVar2 == 0x70003) {
          FUN_0085b060();
        }
        goto switchD_008ceb28_default;
      }
      if (iVar2 < 0x90001) {
        if (iVar2 == 0x90000) {
          FUN_008c90d0();
        }
        else {
          switch(iVar2) {
          case 0x80001:
            FUN_008ba700();
            break;
          case 0x80002:
            FUN_008baac0();
            break;
          case 0x80003:
            FUN_008bac90();
            break;
          case 0x80004:
            FUN_008c7b70();
            break;
          case 0x80005:
            FUN_008c7ce0();
          }
        }
        goto switchD_008ceb28_default;
      }
      if (iVar2 < 0xa0001) {
        if (iVar2 != 0xa0000) {
          if (iVar2 != 0x90001) goto switchD_008ceb28_default;
          goto switchD_008cec49_caseD_3000d;
        }
LAB_008ceeb9:
        FUN_008c8a00();
      }
      else {
        if (0xa0003 < iVar2) goto switchD_008ceb28_default;
        if (iVar2 != 0xa0003) {
          if (iVar2 == 0xa0001) goto LAB_008ceeb9;
          if (iVar2 != 0xa0002) goto switchD_008ceb28_default;
        }
        FUN_008bb820();
      }
      goto switchD_008ceb28_default;
    }
    if (iVar2 == 0x50000) goto switchD_008ceb28_default;
    switch(iVar2) {
    case 0x40001:
    case 0x40002:
    case 0x40003:
      goto switchD_008cecfb_caseD_40001;
    case 0x40004:
      FUN_008c8fe0();
      break;
    case 0x40005:
      FUN_008c9010();
      break;
    case 0x40006:
      FUN_008c9040();
      break;
    case 0x40007:
      FUN_008c9070();
      break;
    case 0x40008:
      FUN_008c90a0();
    }
  }
switchD_008ceb28_default:
  iVar2 = FUN_00a8cbe0(0xd0000);
  if ((iVar2 == 0) && ((DAT_01bea090 & 0x8000000) != 0)) {
    param_1[0x24] = 0;
    FUN_008a8f40(1,0,0);
    iVar2 = FUN_00a8cab0();
    param_1[0x1505] = iVar2;
    FUN_008a66b0();
    FUN_00a8caf0(0xd0000,0,0,0);
    if (param_1[0x15c0] != 0) {
      param_1[0x15c0] = 0;
      FUN_00a8c9b0(0,0x34,0,0);
    }
  }
  return;
}

// 008CF1D0  Pl1500::vf414  size=627  [class]
void __fastcall Pl1500::vf414(int *param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  float10 fVar9;
  int iStack_c14;
  undefined **ppuStack_c10;
  undefined1 *puStack_c0c;
  int iStack_c08;
  undefined4 uStack_c04;
  undefined1 auStack_c00 [3072];
  
  FUN_00c15320();
  param_1[0x3d5] = 0;
  iVar7 = param_1[0x21c];
  iVar5 = (**(code **)(*param_1 + 0x1fc))();
  iVar2 = param_1[0x139];
  iVar6 = (**(code **)(*param_1 + 0x32c))();
  param_1[0x15c2] = 0;
  if (iVar6 != 0 || (iVar2 != 0 || (iVar5 != 0 || iVar7 < 1))) {
    param_1[0x3d3] = 0;
    goto LAB_008cf425;
  }
  bVar4 = false;
  puStack_c0c = auStack_c00;
  iStack_c08 = 0;
  uStack_c04 = 0x20;
  ppuStack_c10 = lib::StaticArray<cQteArea,32>::vftable;
  iVar7 = 0;
  if (((byte)DAT_01bea090 & 0x10) == 0) {
    piVar1 = param_1 + 0x10;
    FUN_00c66140(piVar1,param_1[0x25],0x3f800000,0x40000000,&ppuStack_c10);
    bVar3 = false;
    if (iStack_c08 == 0) {
      fVar9 = (float10)FUN_00ddba30((float)param_1[0x25] + 0.43633232);
      FUN_00c66140(piVar1,(float)fVar9,0x3f800000,0x40000000,&ppuStack_c10);
      bVar3 = true;
      if (iStack_c08 == 0) {
        fVar9 = (float10)FUN_00ddba30((float)param_1[0x25] - 0.43633232);
        FUN_00c66140(piVar1,(float)fVar9,0x3f800000,0x40000000,&ppuStack_c10);
      }
    }
    iVar7 = iStack_c08;
    puVar8 = puStack_c0c;
    if (puStack_c0c == puStack_c0c + iStack_c08 * 0x60) goto LAB_008cf3e7;
    do {
      if ((!bVar3) || (*(int *)(puVar8 + 0x5c) == 10)) {
        iVar7 = (**(code **)(*param_1 + 0x418))(puVar8,&iStack_c14);
        if (iVar7 != 0) {
          DAT_018b56b4 = 1;
          FUN_005f5330(puVar8);
          iVar7 = iStack_c08;
          goto LAB_008cf3af;
        }
        iVar7 = iStack_c08;
        if (iStack_c14 != 0) {
          bVar4 = true;
        }
      }
      puVar8 = puVar8 + 0x60;
    } while (puVar8 != puStack_c0c + iVar7 * 0x60);
    if (!bVar4) goto LAB_008cf3e7;
LAB_008cf3af:
    if (param_1[0x3d3] == 0) {
      param_1[0x3d5] = 1;
    }
    param_1[0x3d3] = 1;
  }
  else {
LAB_008cf3e7:
    param_1[0x3d3] = 0;
  }
  if ((iVar7 != 0) &&
     ((FUN_00c594f0(&ppuStack_c10), puVar8 = puStack_c0c, *(int *)(puStack_c0c + 0x58) != 2 ||
      (iVar7 = FUN_00a8cbe0(0x20007), iVar7 == 0)))) {
    FUN_00bc8c50(puVar8);
  }
LAB_008cf425:
  FUN_00c59380();
  param_1[0x3d4] = 1;
  return;
}

// 008D0770  Pl1500::vf4C  size=81  [class]
void __fastcall Pl1500::vf4C(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x5448) = 0;
  PlBaseDLC::vf4C();
  FUN_008cea50();
  FUN_008c6430();
  FUN_008a1fe0();
  FUN_008a5e30();
  FUN_008c6990();
  iVar1 = FUN_00a9f760(0x139);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x11a4) = 1;
  }
  return;
}

// 008D3460  Pl1500::vf390  size=589  [class]
void __fastcall Pl1500::vf390(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStack_160 [348];
  
  if (param_1[0x1500] != 0) {
    uVar5 = DAT_01bea094 & 0x20000000;
    iVar6 = (**(code **)(*param_1 + 0x32c))();
    uVar1 = DAT_01bea060 & 0x2000000;
    uVar2 = DAT_01bea060 & 0x40000000;
    uVar3 = DAT_01bea060 & 0x8000000;
    uVar4 = DAT_01bea060 & 0x400;
    iVar7 = (**(code **)(*param_1 + 0x368))();
    iVar8 = (**(code **)(*param_1 + 0x36c))();
    iVar9 = (**(code **)(*param_1 + 0x408))();
    if ((iVar9 != 0) ||
       (iVar8 != 0 ||
        (iVar7 != 0 ||
        (uVar4 != 0 || (uVar3 != 0 || (uVar2 != 0 || (uVar1 != 0 || (iVar6 != 0 || uVar5 != 0)))))))
       ) {
      param_1[0x15b5] = 0;
      param_1[0x15b6] = -1;
      FUN_00a7c950();
      param_1[0x4ae] = 0;
      param_1[0x4af] = 0;
      param_1[0x4ad] = 0;
      FUN_00eaa6e0(0x41200000,0);
      return;
    }
    iVar6 = lib::StaticArray<cLockOnParts,64>::StaticArray<cLockOnParts,64>(0x41200000);
    if (((param_1[0x4ad] == 0) || (iVar7 = FUN_00a81330(), iVar7 == 0)) ||
       (*(int *)(param_1[0x4ad] + 0x34) == 0)) {
      FUN_00eaa6e0(0x41200000,0);
      iVar7 = FUN_008a2ee0(iVar6);
      if (iVar7 == 0) {
        FUN_008a3000();
      }
      else {
        param_1[0x4ae] = 0x41f00000;
        param_1[0x4ad] = iVar6;
        iVar7 = FUN_00a81330();
        if (iVar7 != 0) {
          FUN_00a81330();
          uVar11 = 0;
          uVar10 = FUN_00a7c8a0(0);
          FUN_004039a0(4,uVar10,uVar11);
          FUN_00dffb20(param_1 + 0x4b0);
          FUN_00a8c8b0(0x11500,auStack_160);
        }
        FUN_008a2fb0(iVar6);
      }
    }
    else if ((iVar6 == 0) || (param_1[0x4ad] != iVar6)) {
      param_1[0x4ae] = 0;
      param_1[0x4af] = 0;
      param_1[0x4ad] = 0;
      FUN_008a3000();
    }
    else {
      param_1[0x4ae] = 0x41f00000;
      param_1[0x4ad] = iVar6;
      FUN_008a2fb0(iVar6);
    }
    if (((param_1[0x4ad] != 0) && (iVar6 = FUN_00a81330(), iVar6 != 0)) &&
       ((*(int *)(param_1[0x4ad] + 0x34) != 0 && (iVar6 = FUN_00a81330(), iVar6 != 0)))) {
      param_1[0x2ed] = 0x40400000;
    }
  }
  return;
}

// 008D36B0  Pl1500::vf3FC  size=351  [class]
void __fastcall Pl1500::vf3FC(int *param_1)

{
  int iVar1;
  int *piVar2;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  FUN_004066f0();
  param_1[0x150a] = 0;
  if ((((param_1[0x43d] != 0) && ((DAT_01bea060 & 0x4a000000) == 0)) &&
      (iVar1 = FUN_008a18b0(), iVar1 != 0)) &&
     (((param_1[0x1d9] != 0 && (*(int *)(param_1[0x1d9] + 0x114) != 0)) &&
      ((param_1[0x150b] == 0 && (iVar1 = (**(code **)(*param_1 + 0x32c))(), iVar1 == 0)))))) {
    iVar1 = 3;
    piVar2 = param_1 + 0x154d;
    do {
      FUN_008a17d0(iVar1);
      hkpAllCdPointCollector::hkpAllCdPointCollector_11(piVar2);
      piVar2 = piVar2 + -4;
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
  }
  param_1[0x1570] = 0;
  if ((param_1[0x1d9] != 0) && (param_1[0x2fc] != 0)) {
    local_20 = 0;
    local_1c = 0xbe800000;
    local_18 = 0;
    local_30 = param_1[0x10];
    iStack_2c = param_1[0x11];
    iStack_28 = param_1[0x12];
    iStack_24 = param_1[0x13];
    iVar1 = hkpCdPointCollector::hkpCdPointCollector_14(&local_20,&local_30,1,0,0x3c23d70a);
    if (iVar1 != 0) {
      param_1[0x15] = iStack_2c;
    }
    param_1[0x1570] = 1;
  }
  param_1[0x2fc] = 0;
  param_1[0x150b] = 0;
  FUN_008a1990();
  switchD_0080dbae::default();
  if (DAT_01885d68 != 1) {
    piVar2 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar2 = *piVar2 + -1;
    if (((*piVar2 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}

// 00AC3A40  Pl1500::Pl1500  size=251  [class]
undefined4 * __fastcall Pl1500::Pl1500(undefined4 *param_1)

{
  int iVar1;
  
  hkpAllCdPointCollector::hkpAllCdPointCollector_34();
  *param_1 = vftable;
  FUN_00a7c930();
  FUN_00a7c930();
  FUN_00a7c930();
  FUN_00a7c930();
  iVar1 = 3;
  do {
    FUN_009003e0();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  iVar1 = 1;
  do {
    FUN_00904d60();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  param_1[0x1578] = 0;
  param_1[0x1579] = 0;
  param_1[0x157a] = 0;
  param_1[0x157b] = 0;
  param_1[0x157c] = 0;
  param_1[0x157d] = 0;
  param_1[0x157e] = 0;
  param_1[0x157f] = 0;
  param_1[0x1580] = 0;
  cEspControler::cEspControler();
  FUN_00904d60();
  FUN_00a7c930();
  FUN_00a7c930();
  param_1[0x15c3] = 0x3fc00000;
  param_1[0x15c4] = 0x3f400000;
  param_1[0x15c5] = 0x40400000;
  return param_1;
}

// 00AC3B40  Pl1500::vf04  size=6  [class]
undefined * Pl1500::vf04(void)

{
  return &DAT_01b35b90;
}

// 00AC3B50  Pl1500::vf94  size=6  [class]
undefined4 Pl1500::vf94(void)

{
  return 3;
}

// 00AC3B60  Pl1500::thunk_vf358  size=5  [class]
undefined4 Pl1500::thunk_vf358(void)

{
  int iVar1;
  
  iVar1 = FUN_00a8cab0();
  if ((iVar1 != 0x40000) && (iVar1 != 0x40004)) {
    return 0;
  }
  return 1;
}

// 00AC3B70  Pl1500::thunk_vf360  size=5  [class]
undefined4 Pl1500::thunk_vf360(void)

{
  int iVar1;
  
  iVar1 = FUN_00a8cab0();
  if ((iVar1 != 0x40000) && (iVar1 != 0x40004)) {
    return 0;
  }
  return 1;
}

// 00AC3B80  Pl1500::vf354  size=16  [class]
bool __fastcall Pl1500::vf354(int param_1)

{
  return *(int *)(param_1 + 0x618) == 0x3000b;
}

// 00AC3B90  Pl1500::thunk_vf35C  size=5  [class]
bool Pl1500::thunk_vf35C(void)

{
  int iVar1;
  
  iVar1 = FUN_00a8cab0();
  return iVar1 - 0x30002U < 3;
}

// 00AC3BA0  Pl1500::vf368  size=3  [class]
undefined4 Pl1500::vf368(void)

{
  return 0;
}

// 00AC3BB0  Pl1500::vf36C  size=42  [class]
undefined4 __fastcall Pl1500::vf36C(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x378))();
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*param_1 + 0x374))();
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}

// 00AC3BE0  Pl1500::vf374  size=3  [class]
undefined4 Pl1500::vf374(void)

{
  return 0;
}

// 00AC3BF0  Pl1500::thunk_vf378  size=5  [class]
undefined4 __fastcall Pl1500::thunk_vf378(int param_1)

{
  if (((*(int *)(param_1 + 0x1410) == 0) && (0x7ffff < *(int *)(param_1 + 0x618))) &&
     (*(int *)(param_1 + 0x618) < 0x80005)) {
    return 1;
  }
  return 0;
}

// 00AC3C00  Pl1500::thunk_vf37C  size=5  [class]
undefined4 Pl1500::thunk_vf37C(void)

{
  int iVar1;
  
  iVar1 = FUN_00a8cbe0(0x100013);
  if (iVar1 == 0) {
    iVar1 = FUN_00a8cbe0(0x100014);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}

// 00AC3C10  Pl1500::vf364  size=7  [class]
undefined4 __fastcall Pl1500::vf364(int param_1)

{
  return *(undefined4 *)(param_1 + 0x5448);
}

// 00AC3C20  Pl1500::thunk_vf404  size=5  [class]
bool Pl1500::thunk_vf404(void)

{
  int iVar1;
  
  iVar1 = FUN_00a8cbe0(0x90000);
  return iVar1 != 0;
}

// 00AC3C30  Pl1500::vf408  size=12  [class]
bool __fastcall Pl1500::vf408(int param_1)

{
  return *(int *)(param_1 + 0x56c8) == 0;
}

// 00AC3CA0  Pl1500::vf00  size=82  [class]
undefined4 __thiscall Pl1500::vf00(undefined4 param_1,byte param_2)

{
  int iVar1;
  
  FUN_00905ce0();
  cEspControler::~cEspControler();
  iVar1 = 1;
  do {
    FUN_00905ce0();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  hkpCdPointCollector::hkpCdPointCollector_22();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

