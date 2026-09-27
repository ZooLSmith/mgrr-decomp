// src/misc/cRayDamageCutArmor.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00AC0ED0..00AFC720, 11 functions

#include "types.h"

// 00AC0ED0  cRayDamageCutArmor::vf04  size=6  [class]
undefined * cRayDamageCutArmor::vf04(void)

{
  return &DAT_01be9ce0;
}

// 00AC12A0  cRayDamageCutArmor::vf00  size=105  [class]
undefined4 * __thiscall cRayDamageCutArmor::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Behavior::vftable;
  cLockonPartsList::~cLockonPartsList();
  if (param_1[0x19f] != 0) {
    param_1[0x1a1] = 0;
    if (param_1[0x1a2] != 0) {
      FUN_00dd48d0(param_1[0x19f],0);
      param_1[0x1a2] = 0;
    }
    param_1[0x19f] = 0;
    param_1[0x1a0] = 0;
  }
  cXml::cXml_2();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00AEAD60  cRayDamageCutArmor::vf1D0  size=16  [class]
void __thiscall cRayDamageCutArmor::vf1D0(undefined4 param_1,undefined4 param_2)

{
  FUN_00a8e5d0(param_1,param_2,0);
  return;
}

// 00AEAD70  cRayDamageCutArmor::thunk_vf4C  size=5  [class]
void __fastcall cRayDamageCutArmor::thunk_vf4C(int param_1)

{
  float10 fVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  float10 fVar5;
  
  *(undefined4 *)(param_1 + 0xa08) = 0;
  *(undefined4 *)(param_1 + 0xa04) = 0;
  iVar2 = FUN_00a81330();
  *(int *)(param_1 + 0xa04) = iVar2;
  if (iVar2 != 0) {
    uVar3 = FUN_00a7c8a0();
    *(undefined4 *)(param_1 + 0xa08) = uVar3;
  }
  BehaviorPartsModel::vf4C();
  if (*(int *)(param_1 + 0xa64) != 0) {
    FUN_00a92fb0();
    fVar5 = (float10)FUN_00e049b0();
    fVar5 = (float10)*(float *)(param_1 + 0xa60) - fVar5;
    *(float *)(param_1 + 0xa60) = (float)fVar5;
    fVar1 = (float10)0;
    if ((*(int *)(param_1 + 0xa68) == 0) && (fVar5 < fVar1)) {
      *(undefined4 *)(param_1 + 0xa68) = 1;
      *(undefined4 *)(param_1 + 0xa6c) = 0x3f800000;
    }
    if (*(int *)(param_1 + 0xa68) != 0) {
      uVar3 = *(undefined4 *)(param_1 + 0xa6c);
      iVar4 = 0;
      iVar2 = 0;
      if (0 < *(short *)(param_1 + 0x324)) {
        do {
          *(undefined4 *)(iVar4 + 0x1c + *(int *)(param_1 + 800)) = uVar3;
          iVar2 = iVar2 + 1;
          iVar4 = iVar4 + 0x70;
        } while (iVar2 < *(short *)(param_1 + 0x324));
      }
      fVar5 = (float10)*(float *)(param_1 + 0xa6c) - (float10)0.016666668;
      *(float *)(param_1 + 0xa6c) = (float)fVar5;
      if (fVar5 < fVar1 != (fVar5 == fVar1)) {
        FUN_009fdde0();
        return;
      }
    }
  }
  return;
}

// 00AEF880  cRayDamageCutArmor::vf1BC  size=89  [class]
void __thiscall cRayDamageCutArmor::vf1BC(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  Bh0064::vf1BC(param_2);
  iVar1 = *(int *)(param_1 + 0x4b0);
  if ((((iVar1 != 0x20603) && (iVar1 != 0x20604)) && (iVar1 != 0x20607)) && (iVar1 != 0x20608)) {
    uVar3 = 0;
    uVar2 = FUN_00a81330(0);
    FUN_00acf8b0(uVar2,uVar3);
  }
  uVar2 = FUN_009f8b40();
  FUN_009f8ae0(uVar2);
  return;
}

// 00AEF8F0  cRayDamageCutArmor::vf40  size=2230  [class]
undefined4 __fastcall cRayDamageCutArmor::vf40(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = cRayArmor::vf40();
  if (iVar2 == 0) {
    return 0;
  }
  FUN_009fd240();
  param_1[0xd9] = param_1[0xd9] & 0xfffffffd;
  param_1[0x295] = 1;
  iVar2 = FUN_00a12210(6);
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x50) = 0;
    *(undefined4 *)(iVar2 + 0x54) = 0;
    *(undefined4 *)(iVar2 + 0x58) = 0;
  }
  FUN_00410540(0x10,&DAT_01b7bd48);
  lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>_2(0x40);
  (**(code **)(*(int *)param_1[0x1ec] + 0x108))(8);
  FUN_008f2cd0(1);
  FUN_008f1600(0x80000000);
  FUN_008f1600(0x40);
  Behavior::addDefenseCollisionFromRigidBody_2(param_1[0x1ec],2);
  if (param_1[300] == 0x20209) {
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(0,"_006_0");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(1,"_006_1");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(2,"_006_2");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(3,"_006_3");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(4,"_006_4");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(5,"_006_5");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(6,"_006_6");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(7,"_006_7");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(8,"_006_8");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(9,"_006_9");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(10,"_006_10");
  }
  if (param_1[300] == 0x2020c) {
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(0,"_009_0");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(1,"_009_1");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(2,"_00a_2");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(3,"_00a_3");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(4,"_00a_4");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(5,"_00a_5");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(6,"_00a_6");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(7,"_00a_7");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(8,"_007_8");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(9,"_007_9");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(10,"_00d_10");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(0xb,"_008_11");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(0xc,"_008_12");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(0xd,"_010_13");
  }
  if (param_1[300] == 0x20202) {
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(0,"_036_0");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(1,"_037_1");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(2,"_039_2");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(3,"_03b_3");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(4,"_03d_4");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(5,"_03f_5");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(6,"_040_6");
  }
  if (param_1[300] == 0x20206) {
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(1,"_029_1");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(2,"_029_2");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(3,"_029_3");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(4,"_029_4");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(5,"_029_5");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(6,"_029_6");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(8,"_029_8");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(9,"_029_9");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(10,"_029_10");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(0xb,"_029_11");
  }
  if (param_1[300] == 0x20207) {
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(1,"_01e_1");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(2,"_01e_2");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(3,"_01e_3");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(4,"_01e_4");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(5,"_01e_5");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(6,"_01e_6");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(8,"_01e_8");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(9,&DAT_016a0958);
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(10,"_01e_10");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(0xb,"_01e_11");
  }
  if (param_1[300] == 0x20208) {
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(1,"_012_1");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(2,"_012_2");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(3,"_012_3");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(4,"_012_4");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(5,"_012_5");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(6,"_012_6");
  }
  if (param_1[300] == 0x20603) {
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(1,"_402_R1");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(2,"_403_R3");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(3,"_433_RS");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(4,"_434_RL");
  }
  if (param_1[300] == 0x20604) {
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(1,"_602_R1");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(2,"_603_R3");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(3,"_633_RS");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(4,"_634_RL");
  }
  if (param_1[300] == 0x2c209) {
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(0,"_006_0");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(1,"_006_1");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(2,"_006_2");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(3,"_006_3");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(4,"_006_4");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(5,"_006_5");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(6,"_006_6");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(7,"_006_7");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(8,"_006_8");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(9,"_006_9");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(10,"_006_10");
  }
  if (param_1[300] == 0x2c20c) {
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(0,"_009_0");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(1,"_009_1");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(2,"_00a_2");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(3,"_00a_3");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(4,"_00a_4");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(5,"_00a_5");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(6,"_00a_6");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(7,"_00a_7");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(8,"_007_8");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(9,"_007_9");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(10,"_00d_10");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(0xb,"_008_11");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(0xc,"_008_12");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(0xd,"_010_13");
  }
  if (param_1[300] == 0x2c202) {
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(0,"_036_0");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(1,"_037_1");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(2,"_039_2");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(3,"_03b_3");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(4,"_03d_4");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(5,"_03f_5");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(6,"_040_6");
  }
  if (param_1[300] == 0x2c206) {
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(1,"_029_1");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(2,"_029_2");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(3,"_029_3");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(4,"_029_4");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(5,"_029_5");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(6,"_029_6");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(8,"_029_8");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(9,"_029_9");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(10,"_029_10");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(0xb,"_029_11");
  }
  if (param_1[300] == 0x2c207) {
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(1,"_01e_1");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(2,"_01e_2");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(3,"_01e_3");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(4,"_01e_4");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(5,"_01e_5");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(6,"_01e_6");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(8,"_01e_8");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(9,&DAT_016a0958);
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(10,"_01e_10");
    lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_3(0xb,"_01e_11");
  }
  iVar2 = 0;
  do {
    iVar3 = FUN_00a93610(iVar2);
    if (iVar3 != 0) {
      *(uint *)(iVar3 + 900) = *(uint *)(iVar3 + 900) | 2;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x10);
  param_1[0x2a0] = 0;
  if (param_1[0xdc] != 0) {
    FUN_00a1abe0(1);
  }
  if (param_1[0xcc] != 0) {
    iVar2 = *(int *)(param_1[0xcc] + 0x78);
    iVar3 = 0;
    if (0 < iVar2) {
      do {
        iVar1 = *(int *)(param_1[0xcc] + 0x7c);
        if ((((iVar1 != 0) && (-1 < iVar3)) && (iVar3 < *(int *)(param_1[0xcc] + 0x78))) &&
           (*(int *)(iVar1 + iVar3 * 4) == 2)) {
          FUN_00a938c0(iVar3);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar2);
    }
  }
  (**(code **)(*(int *)param_1[0x1ec] + 0x108))(0x1f);
  iVar2 = param_1[0x162];
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x34) != 0)) {
    (**(code **)(*(int *)param_1[0x1ec] + 0x114))(*(undefined4 *)(iVar2 + 0x38));
    FUN_009f8ae0(*(undefined4 *)(param_1[0x162] + 0x38));
    return 1;
  }
  (**(code **)(*param_1 + 0x220))(0x41700000);
  return 1;
}

// 00AF01B0  FUN_00af01b0  size=306  [between]
void __thiscall FUN_00af01b0(int *param_1,int param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  
  if (param_2 == 0) {
    return;
  }
  iVar6 = param_1[300];
  if ((((iVar6 != 0x20603) && (iVar6 != 0x20604)) && (iVar6 != 0x20607)) && (iVar6 != 0x20608)) {
    FUN_00acf8b0(param_2,1);
  }
  thunk_FUN_00a8c480();
  if (param_3 == 1) {
    iVar6 = 0;
    if (0 < (short)param_1[0xc9]) {
      iVar5 = 0;
      do {
        iVar2 = param_1[200];
        iVar3 = *(int *)(*(int *)(iVar2 + 0x60 + iVar5) + 0x40);
        if ((iVar3 != 0) && (iVar3 = FUN_00fdbbd0(iVar3,"front"), iVar3 != 0)) {
          puVar1 = (uint *)(iVar2 + 0x38 + iVar5);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 0x70;
      } while (iVar6 < (short)param_1[0xc9]);
    }
    puVar7 = &DAT_016a0500;
  }
  else {
    if (param_3 != 2) goto LAB_00af02a7;
    iVar6 = 0;
    if (0 < (short)param_1[0xc9]) {
      iVar5 = 0;
      do {
        iVar2 = param_1[200];
        iVar3 = *(int *)(*(int *)(iVar2 + 0x60 + iVar5) + 0x40);
        if ((iVar3 != 0) && (iVar3 = FUN_00fdbbd0(iVar3,&DAT_016a04f8), iVar3 != 0)) {
          puVar1 = (uint *)(iVar2 + 0x38 + iVar5);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 0x70;
      } while (iVar6 < (short)param_1[0xc9]);
    }
    puVar7 = &DAT_016a04f4;
  }
  FUN_00a8c420(0,puVar7);
LAB_00af02a7:
  iVar6 = FUN_00a7c8a0();
  if (iVar6 != 0) {
    iVar6 = *param_1;
    uVar4 = FUN_009f8b40();
    (**(code **)(iVar6 + 0x3c))(uVar4);
  }
  param_1[0x29c] = 0x44160000;
  param_1[0x29d] = 1;
  return;
}

// 00AF02F0  cRayDamageCutArmor::vf1B8  size=166  [class]
void __thiscall cRayDamageCutArmor::vf1B8(int param_1,undefined4 *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_8;
  
  iVar3 = -1;
  iVar4 = 0;
  local_8 = -1;
  iVar6 = -1;
  if (0 < param_4) {
    do {
      iVar6 = *(int *)(param_3 + iVar4 * 4);
      iVar1 = *(int *)(iVar6 + 0x78);
      iVar5 = 0;
      iVar2 = 0;
      if (0 < iVar1) {
        do {
          if ((*(int *)(iVar6 + 0x7c) == 0) ||
             (((-1 < iVar2 && (iVar2 < iVar1)) &&
              (*(int *)(*(int *)(iVar6 + 0x7c) + iVar2 * 4) == 0)))) {
            iVar5 = iVar5 + 1;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < iVar1);
        if ((iVar5 != 0) && (iVar3 < *(int *)(iVar6 + 0x68))) {
          iVar3 = *(int *)(iVar6 + 0x68);
          local_8 = iVar4;
        }
      }
      iVar4 = iVar4 + 1;
      iVar6 = local_8;
    } while (iVar4 < param_4);
  }
  iVar3 = 0;
  if (0 < param_4) {
    do {
      if (iVar3 == iVar6) {
        *param_2 = *(undefined4 *)(param_1 + 0x4b0);
      }
      else {
        *param_2 = 0x42200;
      }
      iVar3 = iVar3 + 1;
      param_2 = param_2 + 3;
    } while (iVar3 < param_4);
  }
  return;
}

// 00AF6DA0  cRayDamageCutArmor::vf44  size=94  [class]
void __fastcall cRayDamageCutArmor::vf44(int param_1)

{
  FUN_00a934c0();
  FUN_00a933e0();
  if (*(int *)(param_1 + 0x7b0) != 0) {
    HkRemovePhysicsSystem::HkRemovePhysicsSystem();
  }
  if (*(int *)(param_1 + 0x67c) != 0) {
    *(undefined4 *)(param_1 + 0x684) = 0;
    if (*(int *)(param_1 + 0x688) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x67c),0);
      *(undefined4 *)(param_1 + 0x688) = 0;
    }
    *(undefined4 *)(param_1 + 0x67c) = 0;
    *(undefined4 *)(param_1 + 0x680) = 0;
  }
  BehaviorPartsModel::vf44();
  return;
}

// 00AFC4A0  FUN_00afc4a0  size=622  [callgraph]
undefined4 __fastcall FUN_00afc4a0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float10 fVar9;
  undefined4 local_270;
  int local_268;
  undefined1 local_260 [148];
  int local_1cc;
  int local_160 [12];
  float local_130;
  uint local_d0;
  
  param_1[0x1a1] = 0;
  iVar5 = FUN_00a8ef10();
  if (iVar5 == 0) {
    FUN_00ac2080(0);
    FUN_00ac2080(1);
    FUN_00ac2080(2);
    FUN_00ac2080(3);
    FUN_00ac2080(4);
    FUN_00ac2080(5);
    FUN_00ac2080(6);
    FUN_00ac2080(7);
    FUN_00ac2080(8);
    FUN_00ac2080(9);
    FUN_00ac2080(10);
    FUN_00ac2080(0xb);
    FUN_00ac2080(0xc);
    FUN_00ac2080(0xd);
    FUN_00ac2080(0xe);
    FUN_00ac2080(0xf);
    FUN_00ac2080(0x10);
    local_270 = 0;
    iVar5 = param_1[0x19f];
    iVar6 = param_1[0x1a1] * 0x150 + iVar5;
    FUN_00445db0();
    FUN_004105d0();
    local_268 = -1;
    bVar4 = false;
    if (iVar5 != iVar6) {
      do {
        iVar1 = param_1[0xdc];
        iVar2 = *(int *)(iVar5 + 4);
        iVar3 = *(int *)(iVar5 + 0x128);
        if (((iVar1 != 0) && (-1 < iVar3)) && (iVar3 < *(int *)(iVar1 + 0x24))) {
          *(undefined4 *)(*(int *)(iVar1 + 0x1c) + iVar3 * 0xc) = 1;
        }
        if (local_268 <= iVar2) {
          FUN_00448f50(iVar5);
          bVar4 = true;
          local_268 = iVar2;
        }
        iVar5 = iVar5 + 0x150;
      } while (iVar5 != iVar6);
      if (bVar4) {
        FUN_0043e160(local_160);
        if (((local_160[0] != 0) && (local_160[0] != 1)) &&
           ((local_160[0] != 2 && ((local_160[0] != 0x1b0 && (local_160[0] != 0x147)))))) {
          uVar7 = 0;
          iVar5 = FUN_00a81330();
          if (iVar5 != 0) {
            uVar7 = FUN_00a7c8a0();
          }
          uVar8 = 1;
          fVar9 = (float10)FUN_00ddba30(local_130 - (float)param_1[0x25]);
          param_1[0x245] = (int)(float)fVar9;
          iVar5 = FUN_00a98220(local_260);
          if (((iVar5 != 0) && (local_1cc != 0)) && ((local_d0 & 0x10000) == 0)) {
            uVar8 = 0x101;
          }
          (**(code **)(*param_1 + 0x198))(uVar7,local_160,uVar8);
          local_270 = 1;
        }
        if (local_1cc != 0) {
          FUN_00a8e5d0(param_1,local_260,0);
          param_1[0x2a0] = 1;
        }
        return local_270;
      }
    }
  }
  return 0;
}

// 00AFC720  cRayDamageCutArmor::vf48  size=16  [class]
void cRayDamageCutArmor::vf48(void)

{
  BehaviorAppBase::vf48();
  FUN_00afc4a0();
  return;
}

