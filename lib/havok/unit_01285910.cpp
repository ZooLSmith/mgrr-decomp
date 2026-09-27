// lib/havok/unit_01285910.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 01285910..01292E50, 474 functions

#include "mgrr.h"
#include "hkBaseObject.h"
#include "hkpAction.h"
#include "hkpMultithreadedVehicleManager.h"
#include "hkpPhantomOverlapListener.h"
#include "hkpRejectChassisListener.h"
#include "hkpTyremarksInfo.h"
#include "hkpTyremarksWheel.h"
#include "hkpVehicleAerodynamics.h"
#include "hkpVehicleBrake.h"
#include "hkpVehicleCastBatchingManager.h"
#include "hkpVehicleData.h"
#include "hkpVehicleDefaultAerodynamics.h"
#include "hkpVehicleDefaultAnalogDriverInput.h"
#include "hkpVehicleDefaultBrake.h"
#include "hkpVehicleDefaultEngine.h"
#include "hkpVehicleDefaultSteering.h"
#include "hkpVehicleDefaultSuspension.h"
#include "hkpVehicleDefaultTransmission.h"
#include "hkpVehicleDefaultVelocityDamper.h"
#include "hkpVehicleDriverInput.h"
#include "hkpVehicleDriverInputAnalogStatus.h"
#include "hkpVehicleDriverInputStatus.h"
#include "hkpVehicleEngine.h"
#include "hkpVehicleInstance.h"
#include "hkpVehicleLinearCastBatchingManager.h"
#include "hkpVehicleLinearCastWheelCollide.h"
#include "hkpVehicleManager.h"
#include "hkpVehicleRayCastBatchingManager.h"
#include "hkpVehicleRayCastWheelCollide.h"
#include "hkpVehicleSteering.h"
#include "hkpVehicleSuspension.h"
#include "hkpVehicleTransmission.h"
#include "hkpVehicleVelocityDamper.h"
#include "hkpVehicleWheelCollide.h"

// 01285910  FUN_01285910  size=25  [run]
void FUN_01285910(undefined4 param_1,undefined4 param_2)

{
  FUN_010100a0(&PTR_vftable_018e9b94,param_1,param_2);
  return;
}

// 01285930  FUN_01285930  size=16  [run]
undefined4 __thiscall FUN_01285930(int *param_1,int param_2)

{
  return *(undefined4 *)(*param_1 + 4 + param_2 * 8);
}

// 01285940  FUN_01285940  size=21  [run]
void __thiscall FUN_01285940(int param_1,undefined4 param_2,int param_3)

{
  *(bool *)param_2 = param_3 <= *(int *)(param_1 + 8);
  return;
}

// 01285960  FUN_01285960  size=32  [run]
void __thiscall FUN_01285960(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 | 0x80000000;
  return;
}

// 01285980  FUN_01285980  size=60  [run]
void __thiscall FUN_01285980(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 012859C0  FUN_012859c0  size=52  [run]
undefined4 __thiscall FUN_012859c0(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    uVar3 = FUN_0100a210(param_2,param_1,iVar2,0x10);
    return uVar3;
  }
  return 0;
}

// 01285A00  FUN_01285a00  size=46  [run]
void FUN_01285a00(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (0 < param_2) {
    param_3 = param_3 - (int)param_1;
    do {
      if (param_1 != (undefined4 *)0x0) {
        puVar1 = (undefined4 *)(param_3 + (int)param_1);
        uVar2 = puVar1[1];
        uVar3 = puVar1[2];
        uVar4 = puVar1[3];
        *param_1 = *puVar1;
        param_1[1] = uVar2;
        param_1[2] = uVar3;
        param_1[3] = uVar4;
        puVar1 = (undefined4 *)(param_3 + 0x10 + (int)param_1);
        uVar2 = puVar1[1];
        uVar3 = puVar1[2];
        uVar4 = puVar1[3];
        param_1[4] = *puVar1;
        param_1[5] = uVar2;
        param_1[6] = uVar3;
        param_1[7] = uVar4;
      }
      param_1 = param_1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 01285A50  FUN_01285a50  size=55  [run]
void __thiscall FUN_01285a50(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    FUN_0100a210(param_2,param_1,iVar2,0x10);
  }
  *(int *)(param_1 + 4) = param_3;
  return;
}

// 01285A90  FUN_01285a90  size=60  [run]
void __fastcall FUN_01285a90(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01285AD0  FUN_01285ad0  size=187  [run]
void __thiscall
FUN_01285ad0(int *param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  
  iVar2 = param_1[1];
  iVar8 = (iVar2 - param_4) + param_6;
  if ((int)(param_1[2] & 0x3fffffffU) < iVar8) {
    iVar6 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar6 <= iVar8) {
      iVar6 = iVar8;
    }
    FUN_0100a210(param_2,param_1,iVar6,0x20);
  }
  FUN_01019bd0((param_3 + param_6) * 0x20 + *param_1,(param_3 + param_4) * 0x20 + *param_1,
               ((iVar2 - param_3) - param_4) * 0x20);
  puVar7 = (undefined4 *)(param_3 * 0x20 + *param_1);
  if (0 < param_6) {
    param_5 = param_5 - (int)puVar7;
    do {
      if (puVar7 != (undefined4 *)0x0) {
        puVar1 = (undefined4 *)(param_5 + (int)puVar7);
        uVar3 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        *puVar7 = *puVar1;
        puVar7[1] = uVar3;
        puVar7[2] = uVar4;
        puVar7[3] = uVar5;
        puVar1 = (undefined4 *)(param_5 + 0x10 + (int)puVar7);
        uVar3 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        puVar7[4] = *puVar1;
        puVar7[5] = uVar3;
        puVar7[6] = uVar4;
        puVar7[7] = uVar5;
      }
      puVar7 = puVar7 + 8;
      param_6 = param_6 + -1;
    } while (param_6 != 0);
    param_1[1] = iVar8;
    return;
  }
  param_1[1] = iVar8;
  return;
}

// 01285B90  FUN_01285b90  size=56  [run]
void __thiscall FUN_01285b90(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_2) {
      iVar2 = param_2;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,0x10);
  }
  *(int *)(param_1 + 4) = param_2;
  return;
}

// 01285BD0  FUN_01285bd0  size=60  [run]
void __fastcall FUN_01285bd0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01285C10  FUN_01285c10  size=27  [run]
void __thiscall FUN_01285c10(int *param_1,int param_2)

{
  *param_1 = (int)(param_1 + 3);
  param_1[1] = param_2;
  param_1[2] = -0x7fffffe0;
  return;
}

// 01285C30  FUN_01285c30  size=27  [run]
void __thiscall FUN_01285c30(int *param_1,int param_2)

{
  *param_1 = (int)(param_1 + 3);
  param_1[1] = param_2;
  param_1[2] = -0x7fffffe0;
  return;
}

// 01285C50  FUN_01285c50  size=27  [run]
void __thiscall FUN_01285c50(int *param_1,int param_2)

{
  *param_1 = (int)(param_1 + 3);
  param_1[1] = param_2;
  param_1[2] = -0x7fffffe0;
  return;
}

// 01285C70  FUN_01285c70  size=30  [run]
void FUN_01285c70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_01285ad0(param_1,param_2,0,param_3,param_4);
  return;
}

// 01285C90  FUN_01285c90  size=60  [run]
void __fastcall FUN_01285c90(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01285CD0  FUN_01285cd0  size=61  [run]
void __fastcall FUN_01285cd0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01285D10  FUN_01285d10  size=61  [run]
void __fastcall FUN_01285d10(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01285D50  FUN_01285d50  size=26  [run]
void FUN_01285d50(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_01285c70(param_1,param_2,param_3,1);
  return;
}

// 01285D70  FUN_01285d70  size=34  [run]
void FUN_01285d70(void)

{
  FUN_011bd060(&PTR_vftable_018e9b94,0,&stack0x00000004);
  FUN_01006000();
  return;
}

// 01285DC0  FUN_01285dc0  size=25  [run]
void FUN_01285dc0(undefined4 param_1,undefined4 param_2)

{
  FUN_01285d50(&PTR_vftable_018e9b94,param_1,param_2);
  return;
}

// 01285DF0  FUN_01285df0  size=11  [run]
int FUN_01285df0(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 01285E00  FUN_01285e00  size=18  [run]
void FUN_01285e00(undefined1 *param_1)

{
  undefined1 uVar1;
  
  uVar1 = *param_1;
  *param_1 = param_1[1];
  param_1[1] = uVar1;
  return;
}

// 01285E20  FUN_01285e20  size=32  [run]
void FUN_01285e20(undefined1 *param_1)

{
  undefined1 uVar1;
  
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  return;
}

// 01285E40  FUN_01285e40  size=32  [run]
void FUN_01285e40(undefined1 *param_1)

{
  undefined1 uVar1;
  
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  return;
}

// 01285E60  FUN_01285e60  size=49  [run]
void FUN_01285e60(int param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  int iVar3;
  
  puVar2 = (undefined1 *)(param_1 + 3);
  iVar3 = 4;
  do {
    uVar1 = puVar2[-3];
    puVar2[-3] = *puVar2;
    *puVar2 = uVar1;
    uVar1 = puVar2[-2];
    puVar2[-2] = puVar2[-1];
    puVar2[-1] = uVar1;
    puVar2 = puVar2 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}

// 01285EA0  FUN_01285ea0  size=81  [run]
void FUN_01285ea0(int param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  int iVar3;
  
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_1 + 0x1b);
  *(undefined1 *)(param_1 + 0x1b) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0x19);
  *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)(param_1 + 0x1a);
  *(undefined1 *)(param_1 + 0x1a) = uVar1;
  puVar2 = (undefined1 *)(param_1 + 0x23);
  iVar3 = 4;
  do {
    uVar1 = puVar2[-3];
    puVar2[-3] = *puVar2;
    *puVar2 = uVar1;
    uVar1 = puVar2[-2];
    puVar2[-2] = puVar2[-1];
    puVar2[-1] = uVar1;
    puVar2 = puVar2 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}

// 01285F00  FUN_01285f00  size=129  [run]
void FUN_01285f00(int param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  int iVar3;
  
  uVar1 = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_1 + 7);
  *(undefined1 *)(param_1 + 7) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 5);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_1 + 6);
  *(undefined1 *)(param_1 + 6) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 8);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_1 + 0xb);
  *(undefined1 *)(param_1 + 0xb) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 9);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_1 + 10);
  *(undefined1 *)(param_1 + 10) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0xc);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_1 + 0xf);
  *(undefined1 *)(param_1 + 0xf) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0xd);
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_1 + 0xe);
  *(undefined1 *)(param_1 + 0xe) = uVar1;
  puVar2 = (undefined1 *)(param_1 + 0x13);
  iVar3 = 4;
  do {
    uVar1 = puVar2[-3];
    puVar2[-3] = *puVar2;
    *puVar2 = uVar1;
    uVar1 = puVar2[-2];
    puVar2[-2] = puVar2[-1];
    puVar2[-1] = uVar1;
    puVar2 = puVar2 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}

// 01285F90  FUN_01285f90  size=60  [run]
void FUN_01285f90(int param_1)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_1 + 7);
  *(undefined1 *)(param_1 + 7) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 5);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_1 + 6);
  *(undefined1 *)(param_1 + 6) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 8);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_1 + 0xb);
  *(undefined1 *)(param_1 + 0xb) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 9);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_1 + 10);
  *(undefined1 *)(param_1 + 10) = uVar1;
  return;
}

// 01285FD0  FUN_01285fd0  size=109  [run]
void FUN_01285fd0(int param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  if (*(char *)(param_1 + 0x21) != '\0') {
    puVar2 = (undefined1 *)(param_1 + 2);
    do {
      uVar1 = *puVar2;
      *puVar2 = puVar2[1];
      puVar2[1] = uVar1;
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 4;
    } while (iVar3 < (int)(uint)*(byte *)(param_1 + 0x21));
  }
  puVar2 = (undefined1 *)(param_1 + 0x33);
  iVar3 = 4;
  do {
    uVar1 = puVar2[-3];
    puVar2[-3] = *puVar2;
    *puVar2 = uVar1;
    uVar1 = puVar2[-2];
    puVar2[-2] = puVar2[-1];
    puVar2[-1] = uVar1;
    puVar2 = puVar2 + 4;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  uVar1 = *(undefined1 *)(param_1 + 0x24);
  *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_1 + 0x27);
  *(undefined1 *)(param_1 + 0x27) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0x25);
  *(undefined1 *)(param_1 + 0x25) = *(undefined1 *)(param_1 + 0x26);
  *(undefined1 *)(param_1 + 0x26) = uVar1;
  return;
}

// 01286040  FUN_01286040  size=120  [run]
void FUN_01286040(int param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  puVar2 = (undefined1 *)(param_1 + 0xb);
  do {
    uVar1 = *(undefined1 *)(param_1 + iVar3 * 2);
    *(undefined1 *)(param_1 + iVar3 * 2) = *(undefined1 *)(param_1 + 1 + iVar3 * 2);
    *(undefined1 *)(param_1 + 1 + iVar3 * 2) = uVar1;
    uVar1 = puVar2[-3];
    puVar2[-3] = *puVar2;
    *puVar2 = uVar1;
    uVar1 = puVar2[-2];
    puVar2[-2] = puVar2[-1];
    puVar2[-1] = uVar1;
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 4;
  } while (iVar3 < 3);
  uVar1 = *(undefined1 *)(param_1 + 0x14);
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_1 + 0x17);
  *(undefined1 *)(param_1 + 0x17) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0x15);
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_1 + 0x16);
  *(undefined1 *)(param_1 + 0x16) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_1 + 0x1b);
  *(undefined1 *)(param_1 + 0x1b) = uVar1;
  uVar1 = *(undefined1 *)(param_1 + 0x19);
  *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)(param_1 + 0x1a);
  *(undefined1 *)(param_1 + 0x1a) = uVar1;
  return;
}

// 012860C0  FUN_012860c0  size=39  [run]
void FUN_012860c0(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    uVar1 = *(undefined1 *)(param_1 + iVar2 * 2);
    *(undefined1 *)(param_1 + iVar2 * 2) = *(undefined1 *)(param_1 + 1 + iVar2 * 2);
    *(undefined1 *)(param_1 + 1 + iVar2 * 2) = uVar1;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  return;
}

// 012860F0  FUN_012860f0  size=87  [run]
void FUN_012860f0(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  if (param_1[2] != 0) {
    pbVar4 = param_1 + 6;
    do {
      bVar1 = *pbVar4;
      *pbVar4 = pbVar4[1];
      pbVar4[1] = bVar1;
      iVar6 = iVar6 + 1;
      pbVar4 = pbVar4 + 8;
    } while (iVar6 < (int)(uint)param_1[2]);
  }
  bVar1 = *param_1;
  bVar2 = param_1[1];
  iVar5 = 0;
  iVar6 = (uint)param_1[2] * 8;
  if ((uint)bVar2 + (uint)bVar1 != 0) {
    do {
      bVar3 = param_1[iVar5 * 2 + iVar6 + 4];
      param_1[iVar5 * 2 + iVar6 + 4] = param_1[iVar5 * 2 + iVar6 + 5];
      param_1[iVar5 * 2 + iVar6 + 5] = bVar3;
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)((uint)bVar2 + (uint)bVar1));
  }
  return;
}

// 01286150  FUN_01286150  size=110  [run]
void FUN_01286150(undefined1 *param_1)

{
  undefined1 uVar1;
  
  uVar1 = param_1[0x10];
  param_1[0x10] = param_1[0x13];
  param_1[0x13] = uVar1;
  uVar1 = param_1[0x11];
  param_1[0x11] = param_1[0x12];
  param_1[0x12] = uVar1;
  uVar1 = *param_1;
  *param_1 = param_1[3];
  param_1[3] = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_1[2];
  param_1[2] = uVar1;
  uVar1 = param_1[4];
  param_1[4] = param_1[7];
  param_1[7] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = param_1[6];
  param_1[6] = uVar1;
  uVar1 = param_1[8];
  param_1[8] = param_1[0xb];
  param_1[0xb] = uVar1;
  uVar1 = param_1[9];
  param_1[9] = param_1[10];
  param_1[10] = uVar1;
  return;
}

// 012861C0  FUN_012861c0  size=255  [run]
void FUN_012861c0(int *param_1,undefined1 *param_2,undefined4 param_3,char param_4,uint *param_5,
                 undefined1 *param_6)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  
  *param_6 = 0;
  switch(*param_2) {
  case 0:
  case 1:
    *param_5 = 0x10;
    return;
  case 2:
  case 3:
  case 10:
  case 0xb:
    if (param_4 == '\0') {
      puVar2 = param_2 + 0x10;
      FUN_01285f90(param_2);
    }
    else {
      puVar2 = param_2 + 0x20;
    }
    break;
  case 4:
  case 5:
  case 6:
  case 0xc:
  case 0xd:
  case 0xe:
    if (param_4 == '\0') {
      puVar2 = param_2 + 0x20;
      FUN_01285f00(param_2);
    }
    else {
      puVar2 = param_2 + 0x30;
      FUN_01285ea0();
    }
    break;
  case 7:
  case 8:
  case 9:
    goto switchD_012861dd_default;
  default:
    return;
  }
  uVar1 = FUN_01281210(*(undefined4 *)((uint)(byte)param_2[1] * 0x40 + 0x1a08 + *param_1));
  *param_5 = (uint)(byte)param_2[3];
  switch(uVar1) {
  case 1:
    FUN_01285fd0(puVar2);
    break;
  case 2:
    FUN_01286040(puVar2);
    return;
  case 5:
    if ((puVar2[0xb] & 0x20) == 0) {
      FUN_01286310(param_1,param_3);
      *param_6 = 1;
      return;
    }
  case 3:
  case 4:
    FUN_012860c0(puVar2);
    FUN_012860f0(puVar2 + 0xc);
    return;
  case 6:
  case 7:
  case 8:
  case 9:
    FUN_01286310(param_1,param_3);
    *param_6 = 1;
    return;
  }
switchD_012861dd_default:
  return;
}

// 01286310  FUN_01286310  size=199  [run]
void FUN_01286310(undefined4 param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined1 local_5;
  
  if (param_2[4] == 0) {
    local_c = -1;
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)param_2[3];
    local_c = 0;
  }
  local_14 = 0;
  if (0 < param_2[1]) {
    do {
      piVar2 = *(int **)(*param_2 + local_14 * 4);
      piVar1 = (int *)(*piVar2 + 0x10 + (int)piVar2);
      piVar3 = piVar2 + 4;
      if (piVar3 < piVar1) {
        local_10 = local_c + 1;
        local_1c = local_1c & 0xffffff00;
        do {
          local_18 = 0;
          if ((iVar4 != 0) &&
             ((*(int *)(iVar4 + 0x18) != local_14 ||
              (*(int *)(iVar4 + 0x1c) < (int)piVar3 + (-0x10 - (int)piVar2))))) {
            if (local_10 < param_2[4]) {
              iVar4 = *(int *)(param_2[3] + 4 + local_c * 4);
              local_c = local_c + 1;
              local_10 = local_10 + 1;
            }
            else {
              iVar4 = 0;
            }
          }
          FUN_012861c0(param_1,piVar3,iVar4,local_1c,&local_18,&local_5);
          piVar3 = (int *)((int)piVar3 + local_18);
        } while (piVar3 < piVar1);
      }
      local_14 = local_14 + 1;
    } while (local_14 < param_2[1]);
  }
  return;
}

// 012863E0  FUN_012863e0  size=274  [run]
void __thiscall FUN_012863e0(undefined4 param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 local_8;
  
  iVar3 = param_3;
  local_8 = CONCAT31((int3)((uint)param_1 >> 8),1);
  FUN_012861c0(param_2,param_3 + 0x74,param_3 + 0x114,local_8,&local_8,(int)&param_3 + 3);
  bVar1 = *(byte *)(iVar3 + 0x2a);
  param_3 = *(int *)(iVar3 + 0x54) / (int)(uint)bVar1;
  *(undefined4 *)(iVar3 + 300) = 0x103;
  if (0 < param_3) {
    iVar6 = 0;
    do {
      iVar5 = *(int *)(iVar3 + 0x50);
      uVar2 = *(undefined1 *)(iVar5 + 0x10 + iVar6);
      puVar4 = (undefined1 *)(iVar5 + iVar6);
      puVar4[0x10] = *(undefined1 *)(iVar5 + 0x13 + iVar6);
      puVar4[0x13] = uVar2;
      uVar2 = puVar4[0x11];
      puVar4[0x11] = puVar4[0x12];
      puVar4[0x12] = uVar2;
      uVar2 = *puVar4;
      *puVar4 = puVar4[3];
      puVar4[3] = uVar2;
      uVar2 = puVar4[1];
      puVar4[1] = puVar4[2];
      puVar4[2] = uVar2;
      uVar2 = puVar4[4];
      puVar4[4] = puVar4[7];
      puVar4[7] = uVar2;
      uVar2 = puVar4[5];
      puVar4[5] = puVar4[6];
      puVar4[6] = uVar2;
      uVar2 = puVar4[8];
      puVar4[8] = puVar4[0xb];
      puVar4[0xb] = uVar2;
      uVar2 = puVar4[9];
      puVar4[9] = puVar4[10];
      puVar4[10] = uVar2;
      iVar5 = 0;
      if (*(char *)(iVar3 + 0x28) != '\0') {
        puVar4 = puVar4 + 0x17;
        do {
          uVar2 = puVar4[-3];
          puVar4[-3] = *puVar4;
          *puVar4 = uVar2;
          uVar2 = puVar4[-2];
          puVar4[-2] = puVar4[-1];
          puVar4[-1] = uVar2;
          iVar5 = iVar5 + 1;
          puVar4 = puVar4 + 4;
        } while (iVar5 < (int)((uint)*(byte *)(iVar3 + 0x28) * 2));
      }
      iVar6 = iVar6 + (uint)bVar1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// 012865D0  FUN_012865d0  size=8  [run]
undefined4 FUN_012865d0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01286610  FUN_01286610  size=16  [run]
void FUN_01286610(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 01286620  hkpRejectChassisListener::hkpRejectChassisListener  size=64  [run]
void hkpRejectChassisListener::hkpRejectChassisListener(undefined4 *param_1,int param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = hkpVehicleWheelCollide::vftable;
    if (param_2 != 0) {
      *(undefined1 *)((int)param_1 + 9) = 0;
    }
    *param_1 = hkpVehicleLinearCastWheelCollide::vftable;
    param_1[9] = hkpPhantomOverlapListener::vftable;
    param_1[7] = vftable;
    param_1[9] = vftable;
    if (param_2 != 0) {
      *(undefined1 *)((int)param_1 + 9) = 2;
    }
  }
  return;
}

// 01286660  hkpVehicleLinearCastWheelCollide::hkpVehicleLinearCastWheelCollide  size=6  [run]
undefined ** hkpVehicleLinearCastWheelCollide::hkpVehicleLinearCastWheelCollide(void)

{
  return vftable;
}

// 012866A0  FUN_012866a0  size=28  [run]
void __thiscall FUN_012866a0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 0x60);
  return;
}

// 012866F0  FUN_012866f0  size=12  [run]
void __thiscall FUN_012866f0(undefined1 *param_1,undefined1 param_2)

{
  *param_1 = param_2;
  return;
}

// 01286720  hkpRejectChassisListener::vf08  size=8  [run]
void hkpRejectChassisListener::vf08(void)

{
  vf00();
  return;
}

// 01286730  FUN_01286730  size=38  [run]
void FUN_01286730(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01286760  hkpRejectChassisListener::vf00  size=52  [run]
int __thiscall hkpRejectChassisListener::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  hkpPhantomOverlapListener::hkpPhantomOverlapListener_4();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 012867C0  hkpVehicleWheelCollide::hkpVehicleWheelCollide  size=25  [run]
void __thiscall hkpVehicleWheelCollide::hkpVehicleWheelCollide(undefined4 *param_1,int param_2)

{
  *param_1 = vftable;
  if (param_2 != 0) {
    *(undefined1 *)((int)param_1 + 9) = 0;
  }
  return;
}

// 012867E0  hkpVehicleWheelCollide::vf2C  size=3  [run]
void hkpVehicleWheelCollide::vf2C(void)

{
  return;
}

// 012867F0  FUN_012867f0  size=38  [run]
void FUN_012867f0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01286820  hkpVehicleWheelCollide::vf00  size=53  [run]
undefined4 * __thiscall hkpVehicleWheelCollide::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = ::hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 01286860  FUN_01286860  size=63  [run]
void __thiscall FUN_01286860(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x60);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 012868A0  FUN_012868a0  size=63  [run]
void __fastcall FUN_012868a0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x60);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 012868E0  FUN_012868e0  size=63  [run]
void __fastcall FUN_012868e0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x60);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01286920  hkpRejectChassisListener::hkpRejectChassisListener  size=61  [run]
void __thiscall hkpRejectChassisListener::hkpRejectChassisListener(undefined4 *param_1,int param_2)

{
  *param_1 = hkpVehicleWheelCollide::vftable;
  if (param_2 != 0) {
    *(undefined1 *)((int)param_1 + 9) = 0;
  }
  *param_1 = hkpVehicleLinearCastWheelCollide::vftable;
  param_1[9] = hkpPhantomOverlapListener::vftable;
  param_1[7] = vftable;
  param_1[9] = vftable;
  if (param_2 != 0) {
    *(undefined1 *)((int)param_1 + 9) = 2;
  }
  return;
}

// 01286960  FUN_01286960  size=38  [run]
void FUN_01286960(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01286990  hkpVehicleLinearCastWheelCollide::vf00  size=52  [run]
int __thiscall hkpVehicleLinearCastWheelCollide::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  ::hkBaseObject::hkBaseObject_159();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 01286A00  FUN_01286a00  size=16  [run]
void FUN_01286a00(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 01286A10  hkpVehicleInstance::hkpVehicleInstance  size=38  [run]
void hkpVehicleInstance::hkpVehicleInstance(undefined4 *param_1,undefined4 param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = hkpAction::vftable;
    FUN_010065b0(param_2);
    *param_1 = vftable;
  }
  return;
}

// 01286A40  hkpAction::hkpAction_26  size=64  [run]
undefined ** hkpAction::hkpAction_26(void)

{
  FUN_010065b0(0);
  return hkpVehicleInstance::vftable;
}

// 01286A90  FUN_01286a90  size=8  [run]
undefined4 FUN_01286a90(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01286AD0  FUN_01286ad0  size=28  [run]
void __thiscall FUN_01286ad0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 0xe0);
  return;
}

// 01286B20  FUN_01286b20  size=63  [run]
void __thiscall FUN_01286b20(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0xe0);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01286B60  FUN_01286b60  size=63  [run]
void __fastcall FUN_01286b60(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0xe0);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01286BA0  FUN_01286ba0  size=63  [run]
void __fastcall FUN_01286ba0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0xe0);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01286BE0  hkpVehicleInstance::hkpVehicleInstance  size=37  [run]
undefined4 * __thiscall
hkpVehicleInstance::hkpVehicleInstance(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = hkpAction::vftable;
  FUN_010065b0(param_2);
  *param_1 = vftable;
  return param_1;
}

// 01286C10  FUN_01286c10  size=38  [run]
void FUN_01286c10(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01286C40  hkpVehicleInstance::vf00  size=52  [run]
int __thiscall hkpVehicleInstance::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  ~hkpVehicleInstance();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 01286D10  FUN_01286d10  size=8  [run]
undefined4 FUN_01286d10(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01286D20  FUN_01286d20  size=8  [run]
undefined4 FUN_01286d20(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01286D60  FUN_01286d60  size=16  [run]
void FUN_01286d60(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 01286D70  hkpVehicleDefaultSuspension::~hkpVehicleDefaultSuspension  size=18  [run]
void hkpVehicleDefaultSuspension::~hkpVehicleDefaultSuspension(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = vftable;
  }
  return;
}

// 01286D90  hkpVehicleDefaultSuspension::hkpVehicleDefaultSuspension  size=6  [run]
undefined ** hkpVehicleDefaultSuspension::hkpVehicleDefaultSuspension(void)

{
  return vftable;
}

// 01286DD0  FUN_01286dd0  size=29  [run]
void __thiscall FUN_01286dd0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 0xc);
  return;
}

// 01286E30  FUN_01286e30  size=28  [run]
void __thiscall FUN_01286e30(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 0x30);
  return;
}

// 01286EA0  FUN_01286ea0  size=64  [run]
void __thiscall FUN_01286ea0(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0xc);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01286EE0  FUN_01286ee0  size=63  [run]
void __thiscall FUN_01286ee0(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01286F20  FUN_01286f20  size=64  [run]
void __fastcall FUN_01286f20(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0xc);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01286F60  FUN_01286f60  size=63  [run]
void __fastcall FUN_01286f60(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01286FA0  FUN_01286fa0  size=64  [run]
void __fastcall FUN_01286fa0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0xc);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01286FE0  FUN_01286fe0  size=63  [run]
void __fastcall FUN_01286fe0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01287030  FUN_01287030  size=38  [run]
void FUN_01287030(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01287060  hkBaseObject::hkBaseObject_230  size=71  [run]
void __fastcall hkBaseObject::hkBaseObject_230(undefined4 *param_1)

{
  param_1[3] = 0;
  if (-1 < (int)param_1[4]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[2],(param_1[4] & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0;
  param_1[4] = 0x80000000;
  *param_1 = vftable;
  return;
}

// 012870C0  FUN_012870c0  size=38  [run]
void FUN_012870c0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 012870F0  hkBaseObject::hkBaseObject_231  size=119  [run]
void __fastcall hkBaseObject::hkBaseObject_231(undefined4 *param_1)

{
  param_1[6] = 0;
  if (-1 < (int)param_1[7]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[5],(param_1[7] & 0x3fffffff) * 0xc);
  }
  param_1[5] = 0;
  param_1[7] = 0x80000000;
  param_1[3] = 0;
  if (-1 < (int)param_1[4]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[2],(param_1[4] & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0;
  param_1[4] = 0x80000000;
  *param_1 = vftable;
  return;
}

// 01287170  hkpVehicleSuspension::vf00  size=114  [run]
undefined4 * __thiscall hkpVehicleSuspension::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  param_1[3] = 0;
  if (-1 < (int)param_1[4]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[2],(param_1[4] & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0;
  param_1[4] = 0x80000000;
  *param_1 = ::hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 012871F0  hkpVehicleDefaultSuspension::vf00  size=52  [run]
int __thiscall hkpVehicleDefaultSuspension::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  ::hkBaseObject::hkBaseObject_231();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 01287230  FUN_01287230  size=8  [run]
undefined4 FUN_01287230(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01287270  FUN_01287270  size=16  [run]
void FUN_01287270(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 01287280  hkpVehicleDefaultBrake::~hkpVehicleDefaultBrake  size=18  [run]
void hkpVehicleDefaultBrake::~hkpVehicleDefaultBrake(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = vftable;
  }
  return;
}

// 012872A0  hkpVehicleDefaultBrake::hkpVehicleDefaultBrake  size=6  [run]
undefined ** hkpVehicleDefaultBrake::hkpVehicleDefaultBrake(void)

{
  return vftable;
}

// 012872E0  FUN_012872e0  size=29  [run]
void __thiscall FUN_012872e0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 0xc);
  return;
}

// 01287350  FUN_01287350  size=38  [run]
void FUN_01287350(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01287380  hkpVehicleBrake::vf00  size=53  [run]
undefined4 * __thiscall hkpVehicleBrake::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = ::hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 012873C0  FUN_012873c0  size=64  [run]
void __thiscall FUN_012873c0(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0xc);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01287400  FUN_01287400  size=64  [run]
void __fastcall FUN_01287400(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0xc);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01287440  FUN_01287440  size=64  [run]
void __fastcall FUN_01287440(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0xc);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01287490  FUN_01287490  size=38  [run]
void FUN_01287490(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 012874C0  hkBaseObject::hkBaseObject_232  size=72  [run]
void __fastcall hkBaseObject::hkBaseObject_232(undefined4 *param_1)

{
  param_1[3] = 0;
  if (-1 < (int)param_1[4]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[2],(param_1[4] & 0x3fffffff) * 0xc);
  }
  param_1[2] = 0;
  param_1[4] = 0x80000000;
  *param_1 = vftable;
  return;
}

// 01287510  hkpVehicleDefaultBrake::vf00  size=115  [run]
undefined4 * __thiscall hkpVehicleDefaultBrake::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  param_1[3] = 0;
  if (-1 < (int)param_1[4]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[2],(param_1[4] & 0x3fffffff) * 0xc);
  }
  param_1[2] = 0;
  param_1[4] = 0x80000000;
  *param_1 = ::hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 012875C0  FUN_012875c0  size=16  [run]
void FUN_012875c0(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 012875D0  hkpVehicleData::~hkpVehicleData  size=18  [run]
void hkpVehicleData::~hkpVehicleData(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = vftable;
  }
  return;
}

// 012875F0  hkpVehicleData::hkpVehicleData  size=6  [run]
undefined ** hkpVehicleData::hkpVehicleData(void)

{
  return vftable;
}

// 01287600  FUN_01287600  size=8  [run]
undefined4 FUN_01287600(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01287660  FUN_01287660  size=31  [run]
void __thiscall FUN_01287660(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 0x28);
  return;
}

// 01287690  FUN_01287690  size=11  [run]
void __fastcall FUN_01287690(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x01287699. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}

// 01287700  FUN_01287700  size=66  [run]
void __thiscall FUN_01287700(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    (**(code **)(*param_2 + 0x10))(*param_1,((uVar1 & 0x3fffffff) + uVar1 * 4) * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01287750  FUN_01287750  size=57  [run]
void __thiscall FUN_01287750(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] & 0x3fffffff);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01287790  FUN_01287790  size=66  [run]
void __fastcall FUN_01287790(undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,((uVar1 & 0x3fffffff) + uVar1 * 4) * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 012877E0  FUN_012877e0  size=57  [run]
void __fastcall FUN_012877e0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] & 0x3fffffff);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01287820  FUN_01287820  size=66  [run]
void __fastcall FUN_01287820(undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,((uVar1 & 0x3fffffff) + uVar1 * 4) * 8);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01287870  FUN_01287870  size=57  [run]
void __fastcall FUN_01287870(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] & 0x3fffffff);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 012878C0  FUN_012878c0  size=38  [run]
void FUN_012878c0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 012878F0  hkBaseObject::hkBaseObject_227  size=145  [run]
void __fastcall hkBaseObject::hkBaseObject_227(undefined4 *param_1)

{
  uint uVar1;
  
  param_1[0x27] = 0;
  if (-1 < (int)param_1[0x28]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0x26],param_1[0x28] & 0x3fffffff);
  }
  param_1[0x26] = 0;
  param_1[0x28] = 0x80000000;
  uVar1 = param_1[0x25];
  param_1[0x24] = 0;
  if (-1 < (int)uVar1) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0x23],((uVar1 & 0x3fffffff) + uVar1 * 4) * 8)
    ;
  }
  param_1[0x23] = 0;
  param_1[0x25] = 0x80000000;
  *param_1 = vftable;
  return;
}

// 01287990  hkpVehicleData::vf00  size=52  [run]
int __thiscall hkpVehicleData::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  ::hkBaseObject::hkBaseObject_227();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 01287A00  FUN_01287a00  size=16  [run]
void FUN_01287a00(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 01287A20  FUN_01287a20  size=16  [run]
void FUN_01287a20(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 01287A40  hkpTyremarksWheel::~hkpTyremarksWheel  size=18  [run]
void hkpTyremarksWheel::~hkpTyremarksWheel(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = vftable;
  }
  return;
}

// 01287A60  hkpTyremarksWheel::hkpTyremarksWheel  size=6  [run]
undefined ** hkpTyremarksWheel::hkpTyremarksWheel(void)

{
  return vftable;
}

// 01287A70  hkpTyremarksInfo::~hkpTyremarksInfo  size=18  [run]
void hkpTyremarksInfo::~hkpTyremarksInfo(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = vftable;
  }
  return;
}

// 01287A90  hkpTyremarksInfo::hkpTyremarksInfo  size=6  [run]
undefined ** hkpTyremarksInfo::hkpTyremarksInfo(void)

{
  return vftable;
}

// 01287AA0  FUN_01287aa0  size=8  [run]
undefined4 FUN_01287aa0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01287AC0  FUN_01287ac0  size=8  [run]
undefined4 FUN_01287ac0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01287AD0  FUN_01287ad0  size=8  [run]
undefined4 FUN_01287ad0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01287B30  FUN_01287b30  size=25  [run]
void __thiscall FUN_01287b30(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 << 5);
  return;
}

// 01287B60  FUN_01287b60  size=26  [run]
void __thiscall FUN_01287b60(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 01287BE0  FUN_01287be0  size=60  [run]
void __thiscall FUN_01287be0(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] << 5);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01287C20  FUN_01287c20  size=61  [run]
void __thiscall FUN_01287c20(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01287C60  FUN_01287c60  size=60  [run]
void __fastcall FUN_01287c60(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 5);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01287CA0  FUN_01287ca0  size=61  [run]
void __fastcall FUN_01287ca0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01287CE0  FUN_01287ce0  size=60  [run]
void __fastcall FUN_01287ce0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] << 5);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01287D20  FUN_01287d20  size=61  [run]
void __fastcall FUN_01287d20(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01287D70  FUN_01287d70  size=38  [run]
void FUN_01287d70(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01287DA0  hkBaseObject::hkBaseObject_228  size=74  [run]
void __fastcall hkBaseObject::hkBaseObject_228(undefined4 *param_1)

{
  *param_1 = hkpTyremarksWheel::vftable;
  param_1[5] = 0;
  if (-1 < (int)param_1[6]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[4],param_1[6] << 5);
  }
  param_1[4] = 0;
  param_1[6] = 0x80000000;
  *param_1 = vftable;
  return;
}

// 01287DF0  hkpTyremarksWheel::vf00  size=117  [run]
undefined4 * __thiscall hkpTyremarksWheel::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = vftable;
  param_1[5] = 0;
  if (-1 < (int)param_1[6]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[4],param_1[6] << 5);
  }
  param_1[4] = 0;
  param_1[6] = 0x80000000;
  *param_1 = ::hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 01287E80  FUN_01287e80  size=38  [run]
void FUN_01287e80(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01287EB0  hkpTyremarksInfo::vf00  size=52  [run]
int __thiscall hkpTyremarksInfo::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  ::hkBaseObject::hkBaseObject_179();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 01287EF0  FUN_01287ef0  size=8  [run]
undefined4 FUN_01287ef0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01287F10  FUN_01287f10  size=16  [run]
void FUN_01287f10(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 01287F20  hkpRejectChassisListener::hkpRejectChassisListener  size=64  [run]
void hkpRejectChassisListener::hkpRejectChassisListener(undefined4 *param_1,int param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = hkpVehicleWheelCollide::vftable;
    if (param_2 != 0) {
      *(undefined1 *)((int)param_1 + 9) = 0;
    }
    *param_1 = hkpVehicleRayCastWheelCollide::vftable;
    param_1[7] = hkpPhantomOverlapListener::vftable;
    param_1[5] = vftable;
    param_1[7] = vftable;
    if (param_2 != 0) {
      *(undefined1 *)((int)param_1 + 9) = 1;
    }
  }
  return;
}

// 01287F60  hkpVehicleRayCastWheelCollide::hkpVehicleRayCastWheelCollide  size=6  [run]
undefined ** hkpVehicleRayCastWheelCollide::hkpVehicleRayCastWheelCollide(void)

{
  return vftable;
}

// 01287F70  hkpRejectChassisListener::hkpRejectChassisListener  size=61  [run]
void __thiscall hkpRejectChassisListener::hkpRejectChassisListener(undefined4 *param_1,int param_2)

{
  *param_1 = hkpVehicleWheelCollide::vftable;
  if (param_2 != 0) {
    *(undefined1 *)((int)param_1 + 9) = 0;
  }
  *param_1 = hkpVehicleRayCastWheelCollide::vftable;
  param_1[7] = hkpPhantomOverlapListener::vftable;
  param_1[5] = vftable;
  param_1[7] = vftable;
  if (param_2 != 0) {
    *(undefined1 *)((int)param_1 + 9) = 1;
  }
  return;
}

// 01287FB0  FUN_01287fb0  size=38  [run]
void FUN_01287fb0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01287FE0  hkpVehicleRayCastWheelCollide::vf00  size=52  [run]
int __thiscall hkpVehicleRayCastWheelCollide::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  ::hkBaseObject::hkBaseObject_180();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 01288030  FUN_01288030  size=8  [run]
undefined4 FUN_01288030(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01288050  FUN_01288050  size=16  [run]
void FUN_01288050(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 01288060  hkpVehicleRayCastBatchingManager::~hkpVehicleRayCastBatchingManager  size=18  [run]
void hkpVehicleRayCastBatchingManager::~hkpVehicleRayCastBatchingManager(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = vftable;
  }
  return;
}

// 01288080  hkpVehicleRayCastBatchingManager::hkpVehicleRayCastBatchingManager  size=6  [run]
undefined ** hkpVehicleRayCastBatchingManager::hkpVehicleRayCastBatchingManager(void)

{
  return vftable;
}

// 012880C0  FUN_012880c0  size=26  [run]
void __thiscall FUN_012880c0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 4);
  return;
}

// 01288110  FUN_01288110  size=61  [run]
void __thiscall FUN_01288110(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01288150  FUN_01288150  size=61  [run]
void __fastcall FUN_01288150(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 01288190  FUN_01288190  size=61  [run]
void __fastcall FUN_01288190(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 012881E0  FUN_012881e0  size=38  [run]
void FUN_012881e0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01288210  hkpVehicleManager::vf00  size=52  [run]
int __thiscall hkpVehicleManager::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  ::hkBaseObject::hkBaseObject_117();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 01288260  FUN_01288260  size=38  [run]
void FUN_01288260(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01288290  hkpVehicleCastBatchingManager::vf00  size=52  [run]
int __thiscall hkpVehicleCastBatchingManager::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  ::hkBaseObject::hkBaseObject_117();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 012882F0  FUN_012882f0  size=38  [run]
void FUN_012882f0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01288320  hkpVehicleRayCastBatchingManager::vf00  size=52  [run]
int __thiscall hkpVehicleRayCastBatchingManager::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  ::hkBaseObject::hkBaseObject_117();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 01288360  FUN_01288360  size=8  [run]
undefined4 FUN_01288360(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01288380  FUN_01288380  size=16  [run]
void FUN_01288380(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 01288390  hkpVehicleManager::~hkpVehicleManager  size=18  [run]
void hkpVehicleManager::~hkpVehicleManager(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = vftable;
  }
  return;
}

// 012883B0  hkpVehicleManager::hkpVehicleManager  size=6  [run]
undefined ** hkpVehicleManager::hkpVehicleManager(void)

{
  return vftable;
}

// 012883C0  FUN_012883c0  size=8  [run]
undefined4 FUN_012883c0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 012883E0  FUN_012883e0  size=16  [run]
void FUN_012883e0(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 012883F0  hkpVehicleLinearCastBatchingManager::~hkpVehicleLinearCastBatchingManager  size=18  [run]
void hkpVehicleLinearCastBatchingManager::~hkpVehicleLinearCastBatchingManager(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = vftable;
  }
  return;
}

// 01288410  hkpVehicleLinearCastBatchingManager::hkpVehicleLinearCastBatchingManager  size=6  [run]
undefined ** hkpVehicleLinearCastBatchingManager::hkpVehicleLinearCastBatchingManager(void)

{
  return vftable;
}

// 01288440  FUN_01288440  size=38  [run]
void FUN_01288440(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01288470  hkpVehicleLinearCastBatchingManager::vf00  size=52  [run]
int __thiscall hkpVehicleLinearCastBatchingManager::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  ::hkBaseObject::hkBaseObject_117();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 012884B0  FUN_012884b0  size=8  [run]
undefined4 FUN_012884b0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 012884C0  FUN_012884c0  size=8  [run]
undefined4 FUN_012884c0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 012884E0  FUN_012884e0  size=16  [run]
void FUN_012884e0(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 01288500  FUN_01288500  size=16  [run]
void FUN_01288500(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 01288510  hkpVehicleDriverInputAnalogStatus::~hkpVehicleDriverInputAnalogStatus  size=18  [run]
void hkpVehicleDriverInputAnalogStatus::~hkpVehicleDriverInputAnalogStatus(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = vftable;
  }
  return;
}

// 01288530  hkpVehicleDriverInputAnalogStatus::hkpVehicleDriverInputAnalogStatus  size=6  [run]
undefined ** hkpVehicleDriverInputAnalogStatus::hkpVehicleDriverInputAnalogStatus(void)

{
  return vftable;
}

// 01288540  hkpVehicleDefaultAnalogDriverInput::~hkpVehicleDefaultAnalogDriverInput  size=18  [run]
void hkpVehicleDefaultAnalogDriverInput::~hkpVehicleDefaultAnalogDriverInput(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = vftable;
  }
  return;
}

// 01288560  hkpVehicleDefaultAnalogDriverInput::hkpVehicleDefaultAnalogDriverInput  size=6  [run]
undefined ** hkpVehicleDefaultAnalogDriverInput::hkpVehicleDefaultAnalogDriverInput(void)

{
  return vftable;
}

// 012885C0  FUN_012885c0  size=38  [run]
void FUN_012885c0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01288600  hkpVehicleDriverInputAnalogStatus::vf00  size=53  [run]
undefined4 * __thiscall hkpVehicleDriverInputAnalogStatus::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = ::hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 01288650  FUN_01288650  size=38  [run]
void FUN_01288650(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01288690  FUN_01288690  size=38  [run]
void FUN_01288690(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 012886C0  hkpVehicleDriverInputStatus::vf00  size=53  [run]
undefined4 * __thiscall hkpVehicleDriverInputStatus::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = ::hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 01288700  FUN_01288700  size=38  [run]
void FUN_01288700(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01288730  hkpVehicleDriverInput::vf00  size=53  [run]
undefined4 * __thiscall hkpVehicleDriverInput::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = ::hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 01288770  hkpVehicleDefaultAnalogDriverInput::vf00  size=53  [run]
undefined4 * __thiscall hkpVehicleDefaultAnalogDriverInput::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = ::hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 012887B0  FUN_012887b0  size=8  [run]
undefined4 FUN_012887b0(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 012887D0  FUN_012887d0  size=16  [run]
void FUN_012887d0(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 012887E0  hkpVehicleDefaultVelocityDamper::~hkpVehicleDefaultVelocityDamper  size=18  [run]
void hkpVehicleDefaultVelocityDamper::~hkpVehicleDefaultVelocityDamper(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = vftable;
  }
  return;
}

// 01288800  hkpVehicleDefaultVelocityDamper::hkpVehicleDefaultVelocityDamper  size=6  [run]
undefined ** hkpVehicleDefaultVelocityDamper::hkpVehicleDefaultVelocityDamper(void)

{
  return vftable;
}

// 01288840  FUN_01288840  size=38  [run]
void FUN_01288840(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01288880  FUN_01288880  size=38  [run]
void FUN_01288880(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 012888B0  hkpVehicleVelocityDamper::vf00  size=53  [run]
undefined4 * __thiscall hkpVehicleVelocityDamper::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = ::hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 012888F0  hkpVehicleDefaultVelocityDamper::vf00  size=53  [run]
undefined4 * __thiscall hkpVehicleDefaultVelocityDamper::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = ::hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 01288930  FUN_01288930  size=8  [run]
undefined4 FUN_01288930(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01288950  FUN_01288950  size=16  [run]
void FUN_01288950(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 01288960  hkpVehicleDefaultTransmission::~hkpVehicleDefaultTransmission  size=18  [run]
void hkpVehicleDefaultTransmission::~hkpVehicleDefaultTransmission(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = vftable;
  }
  return;
}

// 01288980  hkpVehicleDefaultTransmission::hkpVehicleDefaultTransmission  size=6  [run]
undefined ** hkpVehicleDefaultTransmission::hkpVehicleDefaultTransmission(void)

{
  return vftable;
}

// 012889B0  FUN_012889b0  size=38  [run]
void FUN_012889b0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 012889E0  hkpVehicleTransmission::vf00  size=53  [run]
undefined4 * __thiscall hkpVehicleTransmission::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = ::hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 01288A30  FUN_01288a30  size=38  [run]
void FUN_01288a30(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01288A60  hkBaseObject::hkBaseObject_171  size=115  [run]
void __fastcall hkBaseObject::hkBaseObject_171(undefined4 *param_1)

{
  param_1[0xb] = 0;
  if (-1 < (int)param_1[0xc]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[10],param_1[0xc] * 4);
  }
  param_1[10] = 0;
  param_1[0xc] = 0x80000000;
  param_1[8] = 0;
  if (-1 < (int)param_1[9]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[7],param_1[9] * 4);
  }
  param_1[7] = 0;
  param_1[9] = 0x80000000;
  *param_1 = vftable;
  return;
}

// 01288AE0  hkpVehicleDefaultTransmission::vf00  size=52  [run]
int __thiscall hkpVehicleDefaultTransmission::vf00(int param_1,byte param_2)

{
  LPVOID pvVar1;
  
  ::hkBaseObject::hkBaseObject_171();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  }
  return param_1;
}

// 01288B20  FUN_01288b20  size=8  [run]
undefined4 FUN_01288b20(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01288B40  FUN_01288b40  size=16  [run]
void FUN_01288b40(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 01288B50  hkpVehicleDefaultSteering::~hkpVehicleDefaultSteering  size=18  [run]
void hkpVehicleDefaultSteering::~hkpVehicleDefaultSteering(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = vftable;
  }
  return;
}

// 01288B70  hkpVehicleDefaultSteering::hkpVehicleDefaultSteering  size=6  [run]
undefined ** hkpVehicleDefaultSteering::hkpVehicleDefaultSteering(void)

{
  return vftable;
}

// 01288BA0  FUN_01288ba0  size=38  [run]
void FUN_01288ba0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01288BD0  hkpVehicleSteering::vf00  size=53  [run]
undefined4 * __thiscall hkpVehicleSteering::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = ::hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 01288C20  FUN_01288c20  size=38  [run]
void FUN_01288c20(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01288C50  hkBaseObject::hkBaseObject_172  size=65  [run]
void __fastcall hkBaseObject::hkBaseObject_172(undefined4 *param_1)

{
  param_1[5] = 0;
  if (-1 < (int)param_1[6]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[4],param_1[6] & 0x3fffffff);
  }
  param_1[4] = 0;
  param_1[6] = 0x80000000;
  *param_1 = vftable;
  return;
}

// 01288CA0  hkpVehicleDefaultSteering::vf00  size=108  [run]
undefined4 * __thiscall hkpVehicleDefaultSteering::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  param_1[5] = 0;
  if (-1 < (int)param_1[6]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[4],param_1[6] & 0x3fffffff);
  }
  param_1[4] = 0;
  param_1[6] = 0x80000000;
  *param_1 = ::hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 01288D10  FUN_01288d10  size=8  [run]
undefined4 FUN_01288d10(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01288D30  FUN_01288d30  size=16  [run]
void FUN_01288d30(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 01288D40  hkpVehicleDefaultEngine::~hkpVehicleDefaultEngine  size=18  [run]
void hkpVehicleDefaultEngine::~hkpVehicleDefaultEngine(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = vftable;
  }
  return;
}

// 01288D60  hkpVehicleDefaultEngine::hkpVehicleDefaultEngine  size=6  [run]
undefined ** hkpVehicleDefaultEngine::hkpVehicleDefaultEngine(void)

{
  return vftable;
}

// 01288DA0  FUN_01288da0  size=38  [run]
void FUN_01288da0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01288DE0  FUN_01288de0  size=38  [run]
void FUN_01288de0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01288E10  hkpVehicleEngine::vf00  size=53  [run]
undefined4 * __thiscall hkpVehicleEngine::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = ::hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 01288E50  hkpVehicleDefaultEngine::vf00  size=53  [run]
undefined4 * __thiscall hkpVehicleDefaultEngine::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = ::hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 01288E90  FUN_01288e90  size=8  [run]
undefined4 FUN_01288e90(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01288EB0  FUN_01288eb0  size=16  [run]
void FUN_01288eb0(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 01288EC0  hkpVehicleDefaultAerodynamics::~hkpVehicleDefaultAerodynamics  size=18  [run]
void hkpVehicleDefaultAerodynamics::~hkpVehicleDefaultAerodynamics(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = vftable;
  }
  return;
}

// 01288EE0  hkpVehicleDefaultAerodynamics::hkpVehicleDefaultAerodynamics  size=6  [run]
undefined ** hkpVehicleDefaultAerodynamics::hkpVehicleDefaultAerodynamics(void)

{
  return vftable;
}

// 01288F20  FUN_01288f20  size=38  [run]
void FUN_01288f20(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01288F60  FUN_01288f60  size=38  [run]
void FUN_01288f60(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01288F90  hkpVehicleAerodynamics::vf00  size=53  [run]
undefined4 * __thiscall hkpVehicleAerodynamics::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = ::hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 01288FD0  hkpVehicleDefaultAerodynamics::vf00  size=53  [run]
undefined4 * __thiscall hkpVehicleDefaultAerodynamics::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = ::hkBaseObject::vftable;
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 01289010  FUN_01289010  size=8  [run]
undefined4 FUN_01289010(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01289030  FUN_01289030  size=16  [run]
void FUN_01289030(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 01289040  hkpPhantomOverlapListener::hkpPhantomOverlapListener_5  size=32  [run]
void hkpPhantomOverlapListener::hkpPhantomOverlapListener_5(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    param_1[2] = vftable;
    *param_1 = hkpRejectChassisListener::vftable;
    param_1[2] = hkpRejectChassisListener::vftable;
  }
  return;
}

// 01289060  hkpRejectChassisListener::hkpRejectChassisListener  size=6  [run]
undefined ** hkpRejectChassisListener::hkpRejectChassisListener(void)

{
  return vftable;
}

// 01289070  FUN_01289070  size=8  [run]
undefined4 FUN_01289070(undefined4 param_1,undefined4 param_2)

{
  return param_2;
}

// 01289090  FUN_01289090  size=16  [run]
void FUN_01289090(undefined4 *param_1)

{
  (**(code **)*param_1)(0);
  return;
}

// 012890A0  hkpMultithreadedVehicleManager::~hkpMultithreadedVehicleManager  size=18  [run]
void hkpMultithreadedVehicleManager::~hkpMultithreadedVehicleManager(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = vftable;
  }
  return;
}

// 012890C0  hkpMultithreadedVehicleManager::hkpMultithreadedVehicleManager  size=6  [run]
undefined ** hkpMultithreadedVehicleManager::hkpMultithreadedVehicleManager(void)

{
  return vftable;
}

// 012890F0  FUN_012890f0  size=38  [run]
void FUN_012890f0(int param_1)

{
  LPVOID pvVar1;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 4));
  return;
}

// 01289120  hkpMultithreadedVehicleManager::vf00  size=58  [run]
undefined4 * __thiscall hkpMultithreadedVehicleManager::vf00(undefined4 *param_1,byte param_2)

{
  LPVOID pvVar1;
  
  *param_1 = vftable;
  ::hkBaseObject::hkBaseObject_117();
  if ((param_2 & 1) != 0) {
    pvVar1 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 8))(param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

// 01289160  hkpRejectChassisListener::vf04  size=3  [run]
void hkpRejectChassisListener::vf04(void)

{
  return;
}

// 01289170  hkpPhantomOverlapListener::hkpPhantomOverlapListener_4  size=14  [run]
void __fastcall hkpPhantomOverlapListener::hkpPhantomOverlapListener_4(undefined4 *param_1)

{
  param_1[2] = vftable;
  *param_1 = ::hkBaseObject::vftable;
  return;
}

// 01289180  hkpRejectChassisListener::vf00  size=31  [run]
void __thiscall hkpRejectChassisListener::vf00(int param_1,int param_2)

{
  if ((*(int *)(param_2 + 4) == *(int *)(param_1 + 4)) ||
     (*(char *)(*(int *)(param_2 + 4) + 0x18) != '\x01')) {
    *(undefined4 *)(param_2 + 8) = 1;
  }
  return;
}

// 012891B0  hkpVehicleLinearCastWheelCollide::vf10  size=164  [run]
void __thiscall
hkpVehicleLinearCastWheelCollide::vf10(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  char *pcVar2;
  undefined1 local_50 [52];
  int local_1c;
  uint local_16;
  undefined1 local_12;
  byte local_11;
  
  local_11 = *(byte *)(*(int *)(param_3 + 0x1c) + 0x20);
  local_16 = local_16 & 0xffffff00;
  if (local_11 != 0) {
    local_1c = param_4;
    do {
      pcVar2 = (char *)(**(code **)(*param_1 + 0x40))(&local_12,param_3,local_16,local_50);
      if (*pcVar2 == '\0') {
        (**(code **)(*param_1 + 0x48))(param_3,local_16,local_1c);
      }
      else {
        (**(code **)(*param_1 + 0x44))(param_3,local_16,local_50);
      }
      (**(code **)(*param_1 + 0x2c))(param_3,local_16,local_1c);
      local_1c = local_1c + 0x60;
      bVar1 = (char)local_16 + 1;
      local_16 = CONCAT31(local_16._1_3_,bVar1);
    } while (bVar1 < local_11);
  }
  return;
}

// 01289260  FUN_01289260  size=153  [run]
void FUN_01289260(float param_1,undefined4 param_2)

{
  LPVOID pvVar1;
  int iVar2;
  undefined4 local_30;
  undefined4 uStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  float fStack_18;
  undefined4 uStack_14;
  
  fStack_28 = param_1 * 0.5;
  fStack_18 = -fStack_28;
  local_30 = 0;
  uStack_2c = 0;
  uStack_24 = 0;
  local_20 = 0x80000000;
  uStack_1c = 0x80000000;
  uStack_14 = 0;
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x60);
  *(undefined2 *)(iVar2 + 4) = 0x60;
  hkpCylinderShape::hkpCylinderShape(&local_30,&local_20,param_2,0);
  return;
}

// 01289300  hkpVehicleLinearCastWheelCollide::vf30  size=70  [run]
int __fastcall hkpVehicleLinearCastWheelCollide::vf30(int *param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  uint local_c;
  int local_8;
  
  iVar1 = param_1[5];
  iVar2 = 0;
  bVar3 = 0;
  local_8 = 0;
  local_c = local_c & 0xffffff00;
  if (0 < iVar1) {
    do {
      iVar2 = (**(code **)(*param_1 + 0x34))(local_c);
      iVar2 = local_8 + iVar2;
      bVar3 = bVar3 + 1;
      local_c = CONCAT31(local_c._1_3_,bVar3);
      local_8 = iVar2;
    } while ((int)(uint)bVar3 < iVar1);
  }
  return iVar2;
}

// 01289350  hkpVehicleLinearCastWheelCollide::vf34  size=40  [run]
int __thiscall hkpVehicleLinearCastWheelCollide::vf34(int param_1,byte param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)((uint)param_2 * 0x60 + *(int *)(param_1 + 0x10));
  (**(code **)(*piVar1 + 0x2c))();
  return piVar1[0x31];
}

// 01289380  hkpVehicleLinearCastWheelCollide::vf38  size=316  [run]
int __thiscall
hkpVehicleLinearCastWheelCollide::vf38
          (int param_1,undefined4 param_2,undefined4 param_3,int param_4,int *param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  char cVar10;
  int *piVar11;
  undefined4 *puVar12;
  char local_14;
  int local_c;
  char local_5;
  
  iVar1 = *(int *)(param_1 + 0x14);
  iVar6 = 0;
  local_c = 0;
  local_5 = '\0';
  iVar9 = iVar6;
  if (0 < iVar1) {
    puVar12 = (undefined4 *)(param_4 + 0x1c);
    piVar11 = param_5;
    do {
      piVar7 = (int *)(iVar6 * 0x60 + *(int *)(param_1 + 0x10));
      if (puVar12 != (undefined4 *)0x1c) {
        puVar12[-7] = piVar7[1];
        param_5._0_1_ = (char)puVar12 + -0x1c;
        puVar12[-5] = piVar7 + 4;
        puVar12[-4] = 0;
        *(undefined1 *)(puVar12 + -3) = 0;
        puVar12[-6] = 0xffffffff;
        puVar12[-2] = 0;
        *puVar12 = 0;
        *(undefined1 *)((int)puVar12 + -2) = 0xff;
        *(undefined2 *)(puVar12 + -1) = 0x7f00;
        FUN_01181ea0();
        local_14 = (char)(puVar12 + -2);
        puVar12[0xc] = 0xbf800000;
        *(char *)((int)puVar12 + -3) = (char)param_5 - local_14;
        *(undefined2 *)((int)puVar12 + -10) = 0;
        *(undefined1 *)((int)puVar12 + -0xb) = 8;
      }
      (**(code **)(*(int *)*piVar7 + 0x2c))();
      iVar9 = *piVar7;
      iVar6 = *(int *)(iVar9 + 0xc4);
      cVar10 = '\0';
      if (0 < iVar6) {
        iVar8 = 0;
        do {
          local_c = local_c + 1;
          piVar11[8] = (int)(puVar12 + -7);
          piVar11[9] = *(int *)(*(int *)(iVar9 + 0xc0) + iVar8 * 4);
          iVar8 = piVar7[0x11];
          iVar2 = piVar7[0x12];
          iVar3 = piVar7[0x13];
          *piVar11 = piVar7[0x10];
          piVar11[1] = iVar8;
          piVar11[2] = iVar2;
          piVar11[3] = iVar3;
          iVar2 = piVar7[0x14];
          iVar3 = piVar7[0x15];
          iVar4 = piVar7[0x16];
          iVar5 = piVar7[0x17];
          piVar11[10] = param_6;
          param_6 = param_6 + 0x30;
          cVar10 = cVar10 + '\x01';
          iVar8 = (int)cVar10;
          piVar11[4] = iVar2;
          piVar11[5] = iVar3;
          piVar11[6] = iVar4;
          piVar11[7] = iVar5;
          piVar11[0xb] = 1;
          piVar11[0xc] = 0;
          piVar11[0xe] = 0;
          piVar11 = piVar11 + 0x10;
        } while (iVar8 < iVar6);
      }
      local_5 = local_5 + '\x01';
      iVar6 = (int)local_5;
      puVar12 = puVar12 + 0x14;
      iVar9 = local_c;
    } while (iVar6 < iVar1);
  }
  return iVar9;
}

// 012894C0  hkpVehicleLinearCastWheelCollide::vf3C  size=230  [run]
void __thiscall hkpVehicleLinearCastWheelCollide::vf3C(int *param_1,undefined4 param_2,int param_3)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = (**(code **)(*param_1 + 0x34))(param_2);
  iVar3 = 0;
  iVar5 = 0;
  if (3 < iVar2) {
    piVar4 = (int *)(param_3 + 0x68);
    iVar6 = (iVar2 - 4U >> 2) + 1;
    iVar5 = iVar6 * 4;
    do {
      if ((piVar4[-0xe] != 0) &&
         ((iVar3 == 0 ||
          (pfVar1 = (float *)(piVar4[-0x10] + 0x1c),
          *pfVar1 <= *(float *)(iVar3 + 0x1c) && *(float *)(iVar3 + 0x1c) != *pfVar1)))) {
        iVar3 = piVar4[-0x10];
      }
      if ((piVar4[2] != 0) &&
         ((iVar3 == 0 ||
          (pfVar1 = (float *)(*piVar4 + 0x1c),
          *pfVar1 <= *(float *)(iVar3 + 0x1c) && *(float *)(iVar3 + 0x1c) != *pfVar1)))) {
        iVar3 = *piVar4;
      }
      if ((piVar4[0x12] != 0) &&
         ((iVar3 == 0 ||
          (pfVar1 = (float *)(piVar4[0x10] + 0x1c),
          *pfVar1 <= *(float *)(iVar3 + 0x1c) && *(float *)(iVar3 + 0x1c) != *pfVar1)))) {
        iVar3 = piVar4[0x10];
      }
      if ((piVar4[0x22] != 0) &&
         ((iVar3 == 0 ||
          (pfVar1 = (float *)(piVar4[0x20] + 0x1c),
          *pfVar1 <= *(float *)(iVar3 + 0x1c) && *(float *)(iVar3 + 0x1c) != *pfVar1)))) {
        iVar3 = piVar4[0x20];
      }
      piVar4 = piVar4 + 0x40;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if (iVar5 < iVar2) {
    piVar4 = (int *)(iVar5 * 0x40 + 0x28 + param_3);
    iVar2 = iVar2 - iVar5;
    do {
      if ((piVar4[2] != 0) &&
         ((iVar3 == 0 ||
          (pfVar1 = (float *)(*piVar4 + 0x1c),
          *pfVar1 <= *(float *)(iVar3 + 0x1c) && *(float *)(iVar3 + 0x1c) != *pfVar1)))) {
        iVar3 = *piVar4;
      }
      piVar4 = piVar4 + 0x10;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

// 012895B0  hkpVehicleLinearCastWheelCollide::vf44  size=400  [run]
void hkpVehicleLinearCastWheelCollide::vf44(int param_1,byte param_2,float *param_3,float *param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  iVar1 = (uint)param_2 * 0xe0 + *(int *)(param_1 + 0x48);
  fVar9 = *(float *)(*(int *)(*(int *)(param_1 + 0x34) + 8) + 0x20 + (uint)param_2 * 0x30);
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  fVar4 = param_3[3];
  *param_4 = *param_3;
  param_4[1] = fVar2;
  param_4[2] = fVar3;
  param_4[3] = fVar4;
  fVar2 = param_3[5];
  fVar3 = param_3[6];
  fVar4 = param_3[7];
  param_4[4] = param_3[4];
  param_4[5] = fVar2;
  param_4[6] = fVar3;
  param_4[7] = fVar4;
  fVar2 = param_3[10];
  if (*(char *)((int)fVar2 + 0x18) == '\x01') {
    fVar2 = (float)((int)*(char *)((int)fVar2 + 0x10) + (int)fVar2);
  }
  else {
    fVar2 = 0.0;
  }
  param_4[9] = fVar2;
  param_4[8] = *(float *)((int)fVar2 + 0x8c);
  param_4[10] = param_3[0xb];
  param_4[0xb] = -NAN;
  param_4[0x12] = param_3[7] * fVar9;
  fVar9 = *(float *)(iVar1 + 0x84) * param_4[5] + *(float *)(iVar1 + 0x80) * param_4[4] +
          *(float *)(iVar1 + 0x88) * param_4[6];
  if (fVar9 < -*(float *)(*(int *)(param_1 + 0x1c) + 0x84)) {
    iVar1 = *(int *)(param_1 + 0x18);
    fVar3 = *param_4 - *(float *)(iVar1 + 0x140);
    fVar4 = param_4[1] - *(float *)(iVar1 + 0x144);
    fVar5 = param_4[2] - *(float *)(iVar1 + 0x148);
    fVar6 = *param_4 - *(float *)((int)fVar2 + 0x140);
    fVar7 = param_4[1] - *(float *)((int)fVar2 + 0x144);
    fVar8 = param_4[2] - *(float *)((int)fVar2 + 0x148);
    fVar9 = -1.0 / fVar9;
    param_4[0x13] =
         ((((*(float *)(iVar1 + 0x1c8) * fVar3 - *(float *)(iVar1 + 0x1c0) * fVar5) +
           *(float *)(iVar1 + 0x1b4)) -
          ((*(float *)((int)fVar2 + 0x1c8) * fVar6 - *(float *)((int)fVar2 + 0x1c0) * fVar8) +
          *(float *)((int)fVar2 + 0x1b4))) * param_4[5] +
          (((*(float *)(iVar1 + 0x1c4) * fVar5 - *(float *)(iVar1 + 0x1c8) * fVar4) +
           *(float *)(iVar1 + 0x1b0)) -
          ((*(float *)((int)fVar2 + 0x1c4) * fVar8 - *(float *)((int)fVar2 + 0x1c8) * fVar7) +
          *(float *)((int)fVar2 + 0x1b0))) * param_4[4] +
         (((*(float *)(iVar1 + 0x1c0) * fVar4 - *(float *)(iVar1 + 0x1c4) * fVar3) +
          *(float *)(iVar1 + 0x1b8)) -
         ((*(float *)((int)fVar2 + 0x1c0) * fVar7 - *(float *)((int)fVar2 + 0x1c4) * fVar6) +
         *(float *)((int)fVar2 + 0x1b8))) * param_4[6]) * fVar9;
    param_4[0x14] = fVar9;
    return;
  }
  param_4[0x13] = 0.0;
  param_4[0x14] = 1.0 / *(float *)(*(int *)(param_1 + 0x1c) + 0x84);
  return;
}

// 01289740  hkpVehicleLinearCastWheelCollide::vf48  size=129  [run]
void hkpVehicleLinearCastWheelCollide::vf48(int param_1,byte param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  iVar7 = (uint)param_2 * 0xe0 + *(int *)(param_1 + 0x48);
  uVar1 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x34) + 8) + 0x20 + (uint)param_2 * 0x30);
  param_3[9] = 0;
  param_3[0x12] = uVar1;
  param_3[0x13] = 0;
  uVar4 = *(undefined4 *)(iVar7 + 100);
  uVar5 = *(undefined4 *)(iVar7 + 0x68);
  uVar6 = *(undefined4 *)(iVar7 + 0x6c);
  *param_3 = *(undefined4 *)(iVar7 + 0x60);
  param_3[1] = uVar4;
  param_3[2] = uVar5;
  param_3[3] = uVar6;
  uVar2 = *(uint *)(iVar7 + 0x84);
  uVar3 = *(uint *)(iVar7 + 0x88);
  param_3[4] = *(uint *)(iVar7 + 0x80) ^ 0x80000000;
  param_3[5] = uVar2 ^ 0x80000000;
  param_3[6] = uVar3 ^ 0x80000000;
  param_3[7] = param_3[7];
  param_3[8] = 0;
  param_3[0x14] = 0x3f800000;
  param_3[7] = uVar1;
  return;
}

// 012897D0  FUN_012897d0  size=219  [run]
void __thiscall FUN_012897d0(int param_1,int param_2,byte param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_50 [4];
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  
  uVar7 = (uint)param_3;
  iVar8 = *(int *)(*(int *)(param_2 + 0x1c) + 0x8c);
  fVar1 = *(float *)(iVar8 + uVar7 * 0x28);
  fVar16 = *(float *)(iVar8 + 8 + uVar7 * 0x28) * 0.5;
  iVar8 = uVar7 * 0x60 + *(int *)(param_1 + 0x10);
  pfVar10 = (float *)(iVar8 + 0x10);
  pfVar11 = local_50;
  for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
    *pfVar11 = *pfVar10;
    pfVar10 = pfVar10 + 1;
    pfVar11 = pfVar11 + 1;
  }
  fVar12 = ABS(fVar1 * local_40) + ABS(fVar1 * local_50[0]) + ABS(fVar16 * local_30) + 0.0;
  fVar13 = ABS(fVar1 * fStack_3c) + ABS(fVar1 * local_50[1]) + ABS(fVar16 * fStack_2c) + 0.0;
  fVar14 = ABS(fVar1 * fStack_38) + ABS(fVar1 * local_50[2]) + ABS(fVar16 * fStack_28) + 0.0;
  fVar15 = ABS(fVar1 * fStack_34) + ABS(fVar1 * local_50[3]) + ABS(fVar16 * fStack_24) + 0.0;
  fVar1 = *(float *)(iVar8 + 0x50);
  fVar16 = *(float *)(iVar8 + 0x54);
  fVar2 = *(float *)(iVar8 + 0x58);
  fVar3 = *(float *)(iVar8 + 0x5c);
  fVar4 = *(float *)(iVar8 + 0x54);
  fVar5 = *(float *)(iVar8 + 0x58);
  fVar6 = *(float *)(iVar8 + 0x5c);
  param_4[4] = fVar12 + *(float *)(iVar8 + 0x50);
  param_4[5] = fVar13 + fVar4;
  param_4[6] = fVar14 + fVar5;
  param_4[7] = fVar15 + fVar6;
  *param_4 = -fVar12 + fVar1;
  param_4[1] = -fVar13 + fVar16;
  param_4[2] = -fVar14 + fVar2;
  param_4[3] = -fVar15 + fVar3;
  return;
}

// 012898B0  hkpVehicleLinearCastWheelCollide::vf20  size=45  [run]
void __fastcall hkpVehicleLinearCastWheelCollide::vf20(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x14);
  if (0 < iVar2) {
    iVar1 = 0;
    do {
      FUN_01194450(*(undefined4 *)(*(int *)(param_1 + 0x10) + iVar1));
      iVar1 = iVar1 + 0x60;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

// 012898E0  hkpVehicleLinearCastWheelCollide::vf24  size=41  [run]
void __fastcall hkpVehicleLinearCastWheelCollide::vf24(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x14);
  if (0 < iVar2) {
    iVar1 = 0;
    do {
      FUN_01193b40(*(undefined4 *)(iVar1 + *(int *)(param_1 + 0x10)));
      iVar1 = iVar1 + 0x60;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

// 01289910  hkpVehicleLinearCastWheelCollide::vf28  size=47  [run]
void __thiscall hkpVehicleLinearCastWheelCollide::vf28(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0xc) = param_2;
  if (0 < iVar3) {
    iVar2 = 0;
    do {
      iVar1 = *(int *)(iVar2 + *(int *)(param_1 + 0x10));
      if (iVar1 != 0) {
        *(undefined4 *)(iVar1 + 0x2c) = param_2;
      }
      iVar2 = iVar2 + 0x60;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

// 01289940  FUN_01289940  size=96  [run]
void __thiscall FUN_01289940(int param_1,undefined4 param_2,byte param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 local_20 [8];
  undefined4 local_18;
  
  iVar1 = (uint)param_3 * 0x60 + 0x10 + *(int *)(param_1 + 0x10);
  FUN_01007090(iVar1,param_4);
  local_18 = 0;
  FUN_01007050(iVar1,local_20);
  *param_4 = local_30;
  param_4[1] = uStack_2c;
  param_4[2] = uStack_28;
  param_4[3] = uStack_24;
  return;
}

// 012899A0  hkpVehicleLinearCastWheelCollide::vf40  size=341  [run]
void __thiscall
hkpVehicleLinearCastWheelCollide::vf40
          (int param_1,undefined1 *param_2,undefined4 param_3,byte param_4,undefined4 *param_5)

{
  int iVar1;
  undefined **local_d0;
  undefined4 local_cc;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  int local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_60;
  undefined4 local_5c;
  int local_58;
  undefined4 local_54;
  undefined1 local_50;
  undefined1 local_4f;
  undefined2 local_4e;
  undefined4 local_4c;
  undefined2 local_48;
  undefined1 local_46;
  undefined4 local_44;
  undefined4 local_14;
  
  iVar1 = (uint)param_4 * 0x60 + *(int *)(param_1 + 0x10);
  local_60 = *(undefined4 *)(iVar1 + 4);
  local_58 = iVar1 + 0x10;
  local_5c = 0xffffffff;
  local_46 = 0xff;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_44 = 0;
  local_48 = 0x7f00;
  FUN_01181ea0();
  local_44 = *(undefined4 *)(param_1 + 0xc);
  local_14 = 0xbf800000;
  local_48 = CONCAT11((char)&local_60 - (char)&local_4c,(undefined1)local_48);
  local_4e = 0;
  local_4f = 8;
  local_80 = *(undefined4 *)(iVar1 + 0x50);
  uStack_7c = *(undefined4 *)(iVar1 + 0x54);
  uStack_78 = *(undefined4 *)(iVar1 + 0x58);
  uStack_74 = *(undefined4 *)(iVar1 + 0x5c);
  local_70 = *(undefined4 *)(param_1 + 0x2c);
  local_6c = *(undefined4 *)(param_1 + 0x30);
  local_a0 = 0;
  local_d0 = hkpClosestCdPointCollector::vftable;
  uStack_a4 = 0x7f7fffee;
  local_cc = 0x7f7fffee;
  TthkpAabbPhantom::linearCast(&local_60,&local_80,&local_d0,0);
  if (local_a0 != 0) {
    param_5[8] = local_a0;
    param_5[9] = local_9c;
    *param_5 = local_c0;
    param_5[1] = uStack_bc;
    param_5[2] = uStack_b8;
    param_5[3] = uStack_b4;
    param_5[4] = local_b0;
    param_5[5] = uStack_ac;
    param_5[6] = uStack_a8;
    param_5[7] = uStack_a4;
    param_5[10] = local_98;
    param_5[0xb] = local_94;
    *param_2 = 1;
    return;
  }
  *param_2 = 0;
  return;
}

// 01289B00  FUN_01289b00  size=492  [run]
void __thiscall FUN_01289b00(int param_1,int param_2,byte param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 uStack_38;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  int local_18;
  int local_14;
  
  uVar7 = (uint)param_3;
  iVar6 = uVar7 * 0xe0 + *(int *)(param_2 + 0x48);
  local_14 = uVar7 * 0x60 + *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_2 + 0x18);
  uVar1 = *(undefined8 *)(iVar6 + 0xb0);
  local_30 = (float)*(undefined8 *)(iVar2 + 0x160);
  fStack_2c = (float)((ulonglong)*(undefined8 *)(iVar2 + 0x160) >> 0x20);
  fStack_28 = (float)*(undefined8 *)(iVar2 + 0x168);
  fVar10 = *(float *)(iVar6 + 0xbc);
  uStack_38 = *(undefined8 *)(iVar6 + 0xb8);
  fVar11 = *(float *)(iVar2 + 0x16c);
  local_40._0_4_ = (float)uVar1;
  local_40._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
  iVar2 = *(int *)(param_2 + 0x1c);
  fVar8 = fStack_28 * (float)local_40;
  fVar9 = local_30 * local_40._4_4_;
  fVar12 = fStack_28 * local_40._4_4_;
  fVar14 = local_30 * (float)uStack_38;
  fVar16 = fStack_2c * (float)local_40;
  fVar13 = (float)local_40 * fVar11;
  fVar15 = local_40._4_4_ * fVar11;
  fStack_24 = fVar10 * fVar11 -
              (fStack_2c * local_40._4_4_ + local_30 * (float)local_40 +
              fStack_28 * (float)uStack_38);
  local_70 = *(undefined4 *)(iVar2 + 0x40);
  uStack_6c = *(undefined4 *)(iVar2 + 0x44);
  uStack_68 = *(undefined4 *)(iVar2 + 0x48);
  uStack_64 = *(undefined4 *)(iVar2 + 0x4c);
  local_60 = *(undefined4 *)(iVar2 + 0x30);
  uStack_5c = *(undefined4 *)(iVar2 + 0x34);
  uStack_58 = *(undefined4 *)(iVar2 + 0x38);
  uStack_54 = *(undefined4 *)(iVar2 + 0x3c);
  local_50 = *(undefined4 *)(iVar2 + 0x50);
  uStack_4c = *(undefined4 *)(iVar2 + 0x54);
  uStack_48 = *(undefined4 *)(iVar2 + 0x58);
  uStack_44 = *(undefined4 *)(iVar2 + 0x5c);
  local_40 = uVar1;
  local_30 = (fStack_2c * (float)uStack_38 - fVar12) + fVar13 + local_30 * fVar10;
  fStack_2c = (fVar8 - fVar14) + fVar15 + fStack_2c * fVar10;
  fStack_28 = (fVar9 - fVar16) + (float)uStack_38 * fVar11 + fStack_28 * fVar10;
  FUN_010087a0(&local_70);
  fVar9 = (float)local_40 * fStack_2c;
  fVar10 = local_40._4_4_ * local_30;
  fVar11 = (float)local_40 * local_30;
  fVar8 = local_40._4_4_ * fStack_2c;
  local_18 = local_14 + 0x10;
  _local_30 = CONCAT44(((float)local_40 * fStack_28 - (float)uStack_38 * local_30) +
                       fStack_24 * local_40._4_4_ + uStack_38._4_4_ * fStack_2c,
                       ((float)uStack_38 * fStack_2c - local_40._4_4_ * fStack_28) +
                       fStack_24 * (float)local_40 + uStack_38._4_4_ * local_30);
  _fStack_28 = CONCAT44(uStack_38._4_4_ * fStack_24 -
                        (fVar8 + fVar11 + (float)uStack_38 * fStack_28),
                        (fVar10 - fVar9) + fStack_24 * (float)uStack_38 +
                        uStack_38._4_4_ * fStack_28);
  FUN_0100ac20(&local_30);
  uVar3 = *(undefined4 *)(iVar6 + 0x54);
  uVar4 = *(undefined4 *)(iVar6 + 0x58);
  uVar5 = *(undefined4 *)(iVar6 + 0x5c);
  *(undefined4 *)(local_18 + 0x30) = *(undefined4 *)(iVar6 + 0x50);
  *(undefined4 *)(local_18 + 0x34) = uVar3;
  *(undefined4 *)(local_18 + 0x38) = uVar4;
  *(undefined4 *)(local_18 + 0x3c) = uVar5;
  fVar10 = *(float *)(*(int *)(*(int *)(param_2 + 0x34) + 8) + 0x20 + uVar7 * 0x30);
  fVar11 = *(float *)(iVar6 + 0x84);
  fVar8 = *(float *)(iVar6 + 0x88);
  fVar9 = *(float *)(iVar6 + 0x8c);
  fVar12 = *(float *)(iVar6 + 0x54);
  fVar13 = *(float *)(iVar6 + 0x58);
  fVar14 = *(float *)(iVar6 + 0x5c);
  *(float *)(local_14 + 0x50) = fVar10 * *(float *)(iVar6 + 0x80) + *(float *)(iVar6 + 0x50);
  *(float *)(local_14 + 0x54) = fVar10 * fVar11 + fVar12;
  *(float *)(local_14 + 0x58) = fVar10 * fVar8 + fVar13;
  *(float *)(local_14 + 0x5c) = fVar10 * fVar9 + fVar14;
  return;
}

// 01289CF0  hkpVehicleLinearCastWheelCollide::vf2C  size=9  [run]
void hkpVehicleLinearCastWheelCollide::vf2C(void)

{
  FUN_01289940();
  return;
}

// 01289D00  hkpVehicleLinearCastWheelCollide::vf18  size=130  [run]
void __thiscall hkpVehicleLinearCastWheelCollide::vf18(int param_1,undefined4 param_2)

{
  byte bVar1;
  undefined1 local_40 [40];
  int local_18;
  uint local_14;
  
  local_18 = *(int *)(param_1 + 0x14);
  local_14 = local_14 & 0xffffff00;
  if (0 < local_18) {
    do {
      FUN_01289b00(param_2,local_14);
      FUN_012897d0(param_2,local_14,local_40);
      FUN_011ac160(local_40);
      bVar1 = (char)local_14 + 1;
      local_14 = CONCAT31(local_14._1_3_,bVar1);
    } while ((int)(uint)bVar1 < local_18);
  }
  return;
}

// 01289D90  hkpVehicleLinearCastWheelCollide::vf14  size=106  [run]
void __thiscall hkpVehicleLinearCastWheelCollide::vf14(int param_1,int *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = param_2;
  param_2 = *(int **)(param_1 + 0x14);
  if (0 < (int)param_2) {
    iVar3 = 0;
    do {
      uVar1 = *(undefined4 *)(iVar3 + *(int *)(param_1 + 0x10));
      if (piVar2[1] == (piVar2[2] & 0x3fffffffU)) {
        FUN_0100a290(&PTR_vftable_018e9b94,piVar2,4);
      }
      *(undefined4 *)(*piVar2 + piVar2[1] * 4) = uVar1;
      piVar2[1] = piVar2[1] + 1;
      iVar3 = iVar3 + 0x60;
      param_2 = (int *)((int)param_2 + -1);
    } while (param_2 != (int *)0x0);
  }
  return;
}

// 01289E00  hkpRejectChassisListener::hkpRejectChassisListener  size=87  [run]
void __fastcall hkpRejectChassisListener::hkpRejectChassisListener(undefined4 *param_1)

{
  *param_1 = hkpVehicleLinearCastWheelCollide::vftable;
  *(undefined2 *)((int)param_1 + 6) = 1;
  param_1[6] = 0x80000000;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined2 *)((int)param_1 + 0x22) = 1;
  param_1[9] = hkpPhantomOverlapListener::vftable;
  param_1[7] = vftable;
  param_1[9] = vftable;
  param_1[0xb] = 0x34000000;
  param_1[0xc] = 0x34000000;
  *(undefined2 *)(param_1 + 2) = 0x200;
  return;
}

// 01289E60  FUN_01289e60  size=148  [run]
void __thiscall FUN_01289e60(int param_1,int param_2,int *param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = (uint)*(byte *)(*(int *)(param_2 + 0x1c) + 0x20);
  uVar2 = *(uint *)(param_1 + 0x18) & 0x3fffffff;
  if (uVar2 < uVar4) {
    uVar2 = uVar2 * 2;
    if (uVar2 <= uVar4) {
      uVar2 = uVar4;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,(int *)(param_1 + 0x10),uVar2,0x60);
  }
  iVar3 = 0;
  if (uVar4 != *(uint *)(param_1 + 0x14) && -1 < (int)(uVar4 - *(uint *)(param_1 + 0x14))) {
    do {
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(uVar4 - *(int *)(param_1 + 0x14)));
  }
  *(uint *)(param_1 + 0x14) = uVar4;
  bVar1 = 0;
  if (uVar4 != 0) {
    uVar2 = 0;
    do {
      *(undefined4 *)(uVar2 * 0x60 + 4 + *(int *)(param_1 + 0x10)) =
           *(undefined4 *)(*param_3 + uVar2 * 4);
      FUN_01006000();
      bVar1 = bVar1 + 1;
      uVar2 = (uint)bVar1;
    } while (uVar2 < uVar4);
  }
  return;
}

// 01289F00  hkpVehicleLinearCastWheelCollide::vf0C  size=393  [run]
void __thiscall hkpVehicleLinearCastWheelCollide::vf0C(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  LPVOID pvVar4;
  uint uVar5;
  int iVar6;
  undefined1 local_40 [36];
  uint local_1c;
  uint local_15;
  byte local_11;
  
  local_1c = (uint)*(byte *)(*(int *)(param_2 + 0x1c) + 0x20);
  if (*(int *)(param_1 + 0x14) == 0) {
    uVar5 = *(uint *)(param_1 + 0x18) & 0x3fffffff;
    if (uVar5 < local_1c) {
      uVar5 = uVar5 * 2;
      uVar2 = local_1c;
      if (local_1c < uVar5) {
        uVar2 = uVar5;
      }
      FUN_0100a210(&PTR_vftable_018e9b94,param_1 + 0x10,uVar2,0x60);
    }
    iVar6 = 0;
    if (local_1c != *(uint *)(param_1 + 0x14) && -1 < (int)(local_1c - *(uint *)(param_1 + 0x14))) {
      do {
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)(local_1c - *(int *)(param_1 + 0x14)));
    }
    *(uint *)(param_1 + 0x14) = local_1c;
    local_11 = 0;
    if (0 < (int)local_1c) {
      uVar5 = 0;
      do {
        iVar6 = *(int *)(*(int *)(param_2 + 0x1c) + 0x8c);
        iVar1 = *(int *)(param_1 + 0x10);
        uVar3 = FUN_01289260(*(undefined4 *)(iVar6 + uVar5 * 0x28 + 8),
                             *(undefined4 *)(iVar6 + uVar5 * 0x28));
        *(undefined4 *)(uVar5 * 0x60 + iVar1 + 4) = uVar3;
        local_11 = local_11 + 1;
        uVar5 = (uint)local_11;
      } while ((int)uVar5 < (int)local_1c);
    }
  }
  *(int *)(param_1 + 0x28) = *(int *)(param_2 + 0x18) + 0x10;
  local_15 = local_15 & 0xffffff00;
  if (0 < (int)local_1c) {
    uVar5 = 0;
    do {
      FUN_01289b00(param_2,local_15);
      FUN_012897d0(param_2,local_15,local_40);
      pvVar4 = TlsGetValue(DAT_01f8fc4c);
      iVar6 = (**(code **)(**(int **)((int)pvVar4 + 0x2c) + 4))(0xd0);
      *(undefined2 *)(iVar6 + 4) = 0xd0;
      uVar3 = hkpAabbPhantom::hkpAabbPhantom(local_40,*(undefined4 *)(param_1 + 0xc));
      *(undefined4 *)(uVar5 * 0x60 + *(int *)(param_1 + 0x10)) = uVar3;
      if (param_1 == -0x1c) {
        iVar6 = 0;
      }
      else {
        iVar6 = param_1 + 0x24;
      }
      FUN_011a31e0(iVar6);
      uVar5 = (uint)(byte)((char)local_15 + 1U);
      local_15 = CONCAT31(local_15._1_3_,(char)local_15 + 1U);
    } while ((int)uVar5 < (int)local_1c);
  }
  return;
}

// 0128A090  hkBaseObject::hkBaseObject_159  size=169  [run]
void __fastcall hkBaseObject::hkBaseObject_159(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int local_8;
  
  local_8 = param_1[5];
  *param_1 = hkpVehicleLinearCastWheelCollide::vftable;
  if (0 < local_8) {
    iVar3 = 0;
    do {
      iVar1 = param_1[4];
      FUN_010060a0();
      if ((*(short *)(param_1 + 1) != 0) && (*(short *)(*(int *)(iVar1 + iVar3) + 4) != 0)) {
        if (param_1 == (undefined4 *)0xffffffe4) {
          puVar2 = (undefined4 *)0x0;
        }
        else {
          puVar2 = param_1 + 9;
        }
        FUN_011a3130(puVar2);
      }
      FUN_010060a0();
      iVar3 = iVar3 + 0x60;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  hkpPhantomOverlapListener::hkpPhantomOverlapListener_4();
  param_1[5] = 0;
  if (-1 < (int)param_1[6]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[4],(param_1[6] & 0x3fffffff) * 0x60);
  }
  param_1[4] = 0;
  param_1[6] = 0x80000000;
  *param_1 = vftable;
  return;
}

// 0128A140  hkpVehicleLinearCastWheelCollide::vf1C  size=308  [run]
int __thiscall hkpVehicleLinearCastWheelCollide::vf1C(int param_1,int param_2,int *param_3)

{
  LPVOID pvVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  byte local_5;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x34);
  *(undefined2 *)(iVar2 + 4) = 0x34;
  iVar3 = hkpRejectChassisListener::hkpRejectChassisListener();
  iVar2 = *(int *)(param_1 + 0x14);
  uVar4 = *(uint *)(iVar3 + 0x18) & 0x3fffffff;
  if ((int)uVar4 < iVar2) {
    iVar5 = uVar4 * 2;
    if (iVar5 <= iVar2) {
      iVar5 = iVar2;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,iVar3 + 0x10,iVar5,0x60);
  }
  iVar5 = 0;
  if (iVar2 != *(int *)(iVar3 + 0x14) && -1 < iVar2 - *(int *)(iVar3 + 0x14)) {
    do {
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar2 - *(int *)(iVar3 + 0x14));
  }
  *(int *)(iVar3 + 0x14) = iVar2;
  local_5 = 0;
  if (0 < iVar2) {
    uVar4 = 0;
    do {
      puVar6 = (undefined4 *)(*(int *)(iVar3 + 0x10) + uVar4 * 0x60);
      puVar6[1] = *(undefined4 *)(*(int *)(param_1 + 0x10) + 4 + uVar4 * 0x60);
      FUN_01006000();
      *puVar6 = *(undefined4 *)(*param_3 + uVar4 * 4);
      FUN_01006000();
      if (param_1 == -0x1c) {
        iVar5 = 0;
      }
      else {
        iVar5 = param_1 + 0x24;
      }
      FUN_011a3130(iVar5);
      if (iVar3 == -0x1c) {
        iVar5 = 0;
      }
      else {
        iVar5 = iVar3 + 0x24;
      }
      FUN_011a31e0(iVar5);
      *(int *)(iVar3 + 0x28) = param_2 + 0x10;
      local_5 = local_5 + 1;
      uVar4 = (uint)local_5;
    } while ((int)uVar4 < iVar2);
  }
  *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(iVar3 + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(iVar3 + 0x30) = *(undefined4 *)(param_1 + 0x30);
  return iVar3;
}

// 0128A2A0  FUN_0128a2a0  size=18  [run]
int __thiscall FUN_0128a2a0(int *param_1,int param_2)

{
  return param_2 * 0x60 + *param_1;
}

// 0128A2C0  FUN_0128a2c0  size=18  [run]
int __thiscall FUN_0128a2c0(int *param_1,int param_2)

{
  return param_2 * 0x60 + *param_1;
}

// 0128A2F0  FUN_0128a2f0  size=15  [run]
int __thiscall FUN_0128a2f0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 0128A300  FUN_0128a300  size=18  [run]
int __thiscall FUN_0128a300(int *param_1,int param_2)

{
  return *param_1 + param_2 * 0x28;
}

// 0128A320  FUN_0128a320  size=18  [run]
int __thiscall FUN_0128a320(int *param_1,int param_2)

{
  return param_2 * 0x30 + *param_1;
}

// 0128A340  FUN_0128a340  size=18  [run]
int __thiscall FUN_0128a340(int *param_1,int param_2)

{
  return param_2 * 0xe0 + *param_1;
}

// 0128A3D0  FUN_0128a3d0  size=52  [run]
undefined4 __thiscall FUN_0128a3d0(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    uVar3 = FUN_0100a210(param_2,param_1,iVar2,0x60);
    return uVar3;
  }
  return 0;
}

// 0128A430  FUN_0128a430  size=37  [run]
void FUN_0128a430(undefined4 param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  *(short *)(iVar2 + 4) = (short)param_1;
  return;
}

// 0128A460  FUN_0128a460  size=55  [run]
void __thiscall FUN_0128a460(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    FUN_0100a210(param_2,param_1,iVar2,0x60);
  }
  *(int *)(param_1 + 4) = param_3;
  return;
}

// 0128A4A0  FUN_0128a4a0  size=56  [run]
void __thiscall FUN_0128a4a0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_2) {
      iVar2 = param_2;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,0x60);
  }
  *(int *)(param_1 + 4) = param_2;
  return;
}

// 0128A530  FUN_0128a530  size=9  [run]
void FUN_0128a530(void)

{
  FUN_014992d0();
  return;
}

// 0128A540  FUN_0128a540  size=10  [run]
void FUN_0128a540(void)

{
  return;
}

// 0128A550  FUN_0128a550  size=25  [run]
void FUN_0128a550(void)

{
  return;
}

// 0128A570  hkpVehicleInstance::vf14  size=14  [run]
void __fastcall hkpVehicleInstance::vf14(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0128a57c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x3c) + 0x14))();
  return;
}

// 0128A580  FUN_0128a580  size=66  [run]
void __thiscall FUN_0128a580(int param_1,undefined4 param_2,int param_3)

{
  *(undefined1 *)(param_3 + 0xd) = *(undefined1 *)(param_1 + 0xb0);
  (**(code **)(**(int **)(param_1 + 0x20) + 0xc))
            (param_2,param_1,*(undefined4 *)(param_1 + 0x9c),param_3);
  *(undefined1 *)(param_1 + 0xb0) = *(undefined1 *)(param_3 + 0xd);
  return;
}

// 0128A5D0  FUN_0128a5d0  size=127  [run]
void __thiscall FUN_0128a5d0(int param_1,undefined4 param_2,int param_3)

{
  *(undefined1 *)(param_3 + 0xc) = *(undefined1 *)(*(int *)(param_1 + 0x1c) + 0x20);
  *(undefined1 *)(param_3 + 0xd) = *(undefined1 *)(param_1 + 0xd0);
  *(undefined1 *)(param_3 + 0xe) = *(undefined1 *)(param_1 + 0xd1);
  *(undefined1 *)(param_3 + 0xf) = *(undefined1 *)(param_1 + 0xd2);
  *(undefined4 *)(param_3 + 0x10) = *(undefined4 *)(param_1 + 0xd4);
  (**(code **)(**(int **)(param_1 + 0x2c) + 0xc))(param_2,param_1,param_3);
  *(undefined1 *)(param_1 + 0xd0) = *(undefined1 *)(param_3 + 0xd);
  *(undefined1 *)(param_1 + 0xd1) = *(undefined1 *)(param_3 + 0xe);
  *(undefined1 *)(param_1 + 0xd2) = *(undefined1 *)(param_3 + 0xf);
  *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_3 + 0x10);
  return;
}

// 0128A650  FUN_0128a650  size=102  [run]
void __thiscall FUN_0128a650(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = *(undefined4 *)(param_1 + 0xb8);
  local_c = *(undefined4 *)(param_1 + 0xb4);
  (**(code **)(**(int **)(param_1 + 0x28) + 0xc))(param_2,param_1,param_3,param_4,&local_c);
  *(undefined4 *)(param_1 + 0xb8) = local_8;
  *(undefined4 *)(param_1 + 0xb4) = local_c;
  return;
}

// 0128A6C0  FUN_0128a6c0  size=37  [run]
void __thiscall FUN_0128a6c0(int param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(**(int **)(param_1 + 0x38) + 0xc))(param_2,param_1,param_3);
  return;
}

// 0128A6F0  hkpVehicleInstance::vf30  size=7  [run]
float10 __fastcall hkpVehicleInstance::vf30(int param_1)

{
  return (float10)*(float *)(param_1 + 0xb8);
}

// 0128A710  hkpVehicleInstance::vf3C  size=75  [run]
void hkpVehicleInstance::vf3C(undefined4 param_1,undefined2 *param_2)

{
  *(undefined4 *)(param_2 + 4) = 0;
  *param_2 = 1;
  *(undefined4 *)(param_2 + 0x18) = 0;
  *(undefined4 *)(param_2 + 0x1a) = 0;
  *(undefined4 *)(param_2 + 0x1c) = 0;
  *(undefined4 *)(param_2 + 0x1e) = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined4 *)(param_2 + 10) = 0;
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(undefined4 *)(param_2 + 0xe) = 0;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0x12) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0;
  *(undefined4 *)(param_2 + 0x16) = 0;
  *(undefined4 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x3a) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  *(undefined4 *)(param_2 + 0x3e) = 0;
  *(undefined4 *)(param_2 + 0x20) = 0x3f800000;
  *(undefined4 *)(param_2 + 0x22) = 0;
  *(undefined4 *)(param_2 + 0x24) = 0;
  *(undefined4 *)(param_2 + 0x26) = 0;
  *(undefined4 *)(param_2 + 0x28) = 0;
  *(undefined4 *)(param_2 + 0x2a) = 0x3f800000;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  *(undefined4 *)(param_2 + 0x2e) = 0;
  *(undefined4 *)(param_2 + 0x30) = 0;
  *(undefined4 *)(param_2 + 0x32) = 0;
  *(undefined4 *)(param_2 + 0x34) = 0x3f800000;
  *(undefined4 *)(param_2 + 0x36) = 0;
  return;
}

// 0128A760  FUN_0128a760  size=43  [run]
void __thiscall FUN_0128a760(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  (**(code **)(**(int **)(param_1 + 0x34) + 0xc))(param_2,param_1,param_3,*param_4);
  return;
}

// 0128A790  FUN_0128a790  size=76  [run]
void __thiscall FUN_0128a790(int param_1,float param_2,int param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (*(float *)(iVar1 + 0x6c) != (float)(undefined *)0x0) {
    param_2 = *(float *)(iVar1 + 0x6c) * *(float *)(param_1 + 0xc0) * param_2;
    fVar2 = *(float *)(iVar1 + 0x34);
    fVar3 = *(float *)(iVar1 + 0x38);
    fVar4 = *(float *)(iVar1 + 0x3c);
    fVar5 = *(float *)(iVar1 + 0x184);
    fVar6 = *(float *)(iVar1 + 0x188);
    fVar7 = *(float *)(iVar1 + 0x18c);
    *(float *)(param_3 + 0x20) =
         param_2 * *(float *)(iVar1 + 0x30) * *(float *)(iVar1 + 0x180) + *(float *)(param_3 + 0x20)
    ;
    *(float *)(param_3 + 0x24) = param_2 * fVar2 * fVar5 + *(float *)(param_3 + 0x24);
    *(float *)(param_3 + 0x28) = param_2 * fVar3 * fVar6 + *(float *)(param_3 + 0x28);
    *(float *)(param_3 + 0x2c) = param_2 * fVar4 * fVar7 + *(float *)(param_3 + 0x2c);
  }
  return;
}

// 0128A7E0  FUN_0128a7e0  size=64  [run]
void __thiscall FUN_0128a7e0(int param_1,int param_2,undefined4 param_3)

{
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = *(undefined4 *)(param_2 + 8);
  local_8 = *(undefined4 *)(param_2 + 0xc);
  FUN_01498370(&local_c,*(int *)(param_1 + 0x1c) + 0xa4,param_3,param_1 + 0x54);
  return;
}

// 0128A820  FUN_0128a820  size=297  [run]
void __thiscall FUN_0128a820(int param_1,undefined4 param_2,int param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  int local_18;
  int local_14;
  
  local_14 = *(int *)(param_1 + 0x18) + 0xe0;
  local_18 = param_1;
  FUN_011e7330(param_2,&local_14,1,0,(undefined1 *)(param_3 + 0xd0));
  iVar2 = *(int *)(local_18 + 0x18);
  fVar1 = *(float *)(iVar2 + 0x14c);
  fVar4 = *(float *)(iVar2 + 0x140);
  fVar5 = *(float *)(iVar2 + 0x144);
  fVar6 = *(float *)(iVar2 + 0x148);
  fVar7 = *(float *)(iVar2 + 0x14c);
  fVar8 = *(float *)(iVar2 + 0x130);
  fVar9 = *(float *)(iVar2 + 0x134);
  fVar10 = *(float *)(iVar2 + 0x138);
  fVar11 = *(float *)(iVar2 + 0x13c);
  iVar3 = *(int *)(local_18 + 0x1c);
  local_30 = *(float *)(iVar2 + 0x180) * fVar1;
  fStack_2c = *(float *)(iVar2 + 0x184) * fVar1;
  fStack_28 = *(float *)(iVar2 + 0x188) * fVar1;
  fStack_24 = *(float *)(iVar2 + 0x18c) * fVar1;
  uVar12 = *(undefined4 *)(iVar3 + 0x184);
  uVar13 = *(undefined4 *)(iVar3 + 0x188);
  uVar14 = *(undefined4 *)(iVar3 + 0x18c);
  *(undefined4 *)(param_3 + 0x100) = *(undefined4 *)(iVar3 + 0x180);
  *(undefined4 *)(param_3 + 0x104) = uVar12;
  *(undefined4 *)(param_3 + 0x108) = uVar13;
  *(undefined4 *)(param_3 + 0x10c) = uVar14;
  *(undefined1 *)(param_3 + 0x150) = *(undefined1 *)(param_3 + 0xd0);
  *(undefined1 *)(param_3 + 0x151) = *(undefined1 *)(param_3 + 0xd1);
  *(undefined4 *)(param_3 + 0x154) = *(undefined4 *)(param_3 + 0xd4);
  *(undefined4 *)(param_3 + 0x158) = *(undefined4 *)(param_3 + 0xd8);
  *(undefined4 *)(param_3 + 0x160) = *(undefined4 *)(param_3 + 0xe0);
  *(undefined4 *)(param_3 + 0x164) = *(undefined4 *)(param_3 + 0xe4);
  *(undefined4 *)(param_3 + 0x168) = *(undefined4 *)(param_3 + 0xe8);
  *(undefined4 *)(param_3 + 0x16c) = *(undefined4 *)(param_3 + 0xec);
  *(undefined4 *)(param_3 + 0x170) = *(undefined4 *)(param_3 + 0xf0);
  *(undefined4 *)(param_3 + 0x174) = *(undefined4 *)(param_3 + 0xf4);
  *(undefined4 *)(param_3 + 0x178) = *(undefined4 *)(param_3 + 0xf8);
  *(undefined4 *)(param_3 + 0x17c) = *(undefined4 *)(param_3 + 0xfc);
  *(undefined4 *)(param_3 + 0x180) = *(undefined4 *)(param_3 + 0x100);
  *(undefined4 *)(param_3 + 0x184) = *(undefined4 *)(param_3 + 0x104);
  *(undefined4 *)(param_3 + 0x188) = *(undefined4 *)(param_3 + 0x108);
  *(undefined4 *)(param_3 + 0x18c) = *(undefined4 *)(param_3 + 0x10c);
  *(undefined4 *)(param_3 + 400) = *(undefined4 *)(param_3 + 0x110);
  *(undefined4 *)(param_3 + 0x194) = *(undefined4 *)(param_3 + 0x114);
  *(undefined4 *)(param_3 + 0x198) = *(undefined4 *)(param_3 + 0x118);
  *(undefined4 *)(param_3 + 0x19c) = *(undefined4 *)(param_3 + 0x11c);
  *(undefined4 *)(param_3 + 0x1a0) = *(undefined4 *)(param_3 + 0x120);
  *(undefined4 *)(param_3 + 0x1a4) = *(undefined4 *)(param_3 + 0x124);
  *(undefined4 *)(param_3 + 0x1a8) = *(undefined4 *)(param_3 + 0x128);
  *(undefined4 *)(param_3 + 0x1ac) = *(undefined4 *)(param_3 + 300);
  *(undefined4 *)(param_3 + 0x1b0) = *(undefined4 *)(param_3 + 0x130);
  *(undefined4 *)(param_3 + 0x1b4) = *(undefined4 *)(param_3 + 0x134);
  *(undefined4 *)(param_3 + 0x1b8) = *(undefined4 *)(param_3 + 0x138);
  *(undefined4 *)(param_3 + 0x1bc) = *(undefined4 *)(param_3 + 0x13c);
  *(undefined4 *)(param_3 + 0x1c0) = *(undefined4 *)(param_3 + 0x140);
  *(undefined4 *)(param_3 + 0x1c4) = *(undefined4 *)(param_3 + 0x144);
  *(undefined4 *)(param_3 + 0x1c8) = *(undefined4 *)(param_3 + 0x148);
  *(undefined4 *)(param_3 + 0x1cc) = *(undefined4 *)(param_3 + 0x14c);
  FUN_01006f50(param_3 + 0x110,&local_30);
  *(float *)(param_3 + 0x160) = (fVar4 - fVar8) * fVar1;
  *(float *)(param_3 + 0x164) = (fVar5 - fVar9) * fVar1;
  *(float *)(param_3 + 0x168) = (fVar6 - fVar10) * fVar1;
  *(float *)(param_3 + 0x16c) = (fVar7 - fVar11) * fVar1;
  return;
}

// 0128A950  FUN_0128a950  size=175  [run]
void FUN_0128a950(int param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = 1.0 - (float)((int)*(short *)(param_3 + 0xb4) << 0x10) * *(float *)(param_1 + 8);
  if (fVar2 < 0.0) {
    fVar2 = 0.0;
  }
  fVar3 = 1.0 - (float)((int)*(short *)(param_3 + 0xb6) << 0x10) * *(float *)(param_1 + 8);
  if (fVar3 < 0.0) {
    fVar3 = 0.0;
  }
  *(float *)(param_2 + 0x10) = fVar2 * *(float *)(param_2 + 0x10);
  *(float *)(param_2 + 0x14) = fVar2 * *(float *)(param_2 + 0x14);
  *(float *)(param_2 + 0x18) = fVar2 * *(float *)(param_2 + 0x18);
  *(float *)(param_2 + 0x1c) = fVar2 * *(float *)(param_2 + 0x1c);
  *(float *)(param_2 + 0x20) = fVar3 * *(float *)(param_2 + 0x20);
  *(float *)(param_2 + 0x24) = fVar3 * *(float *)(param_2 + 0x24);
  *(float *)(param_2 + 0x28) = fVar3 * *(float *)(param_2 + 0x28);
  *(float *)(param_2 + 0x2c) = fVar3 * *(float *)(param_2 + 0x2c);
  fVar2 = *(float *)(param_2 + 0x20);
  fVar3 = *(float *)(param_2 + 0x24);
  fVar1 = *(float *)(param_2 + 0x28);
  *(float *)(param_2 + 0x20) =
       fVar3 * *(float *)(param_2 + 0x50) + fVar2 * *(float *)(param_2 + 0x40) +
       fVar1 * *(float *)(param_2 + 0x60);
  *(float *)(param_2 + 0x24) =
       fVar3 * *(float *)(param_2 + 0x54) + fVar2 * *(float *)(param_2 + 0x44) +
       fVar1 * *(float *)(param_2 + 100);
  *(float *)(param_2 + 0x28) =
       fVar3 * *(float *)(param_2 + 0x58) + fVar2 * *(float *)(param_2 + 0x48) +
       fVar1 * *(float *)(param_2 + 0x68);
  *(float *)(param_2 + 0x2c) =
       fVar3 * *(float *)(param_2 + 0x5c) + fVar2 * *(float *)(param_2 + 0x4c) +
       fVar1 * *(float *)(param_2 + 0x6c);
  return;
}

// 0128AA00  hkpVehicleInstance::vf24  size=40  [run]
void __thiscall hkpVehicleInstance::vf24(int param_1,undefined4 param_2)

{
  FUN_011929d0(*(undefined4 *)(param_1 + 0x18),1);
  (**(code **)(**(int **)(param_1 + 0x3c) + 0x20))(param_2);
  return;
}

// 0128AA30  hkpVehicleInstance::vf28  size=38  [run]
void __fastcall hkpVehicleInstance::vf28(int param_1)

{
  undefined4 uStack_8;
  
  uStack_8 = param_1;
  (**(code **)(**(int **)(param_1 + 0x3c) + 0x24))();
  FUN_01192b60((int)&uStack_8 + 3,*(undefined4 *)(param_1 + 0x18));
  return;
}

// 0128AA60  FUN_0128aa60  size=171  [run]
void __fastcall FUN_0128aa60(undefined4 *param_1)

{
  param_1[4] = 0;
  param_1[5] = 0x3f800000;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[7] = 0x3f800000;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0xffffffff;
  param_1[0x1c] = 0;
  param_1[0x24] = 0x3f800000;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0x3f800000;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  return;
}

// 0128AB10  FUN_0128ab10  size=316  [run]
void __fastcall FUN_0128ab10(int param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  LPVOID pvVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  int local_18;
  int local_14;
  int local_c;
  int local_8;
  
  pvVar3 = TlsGetValue(DAT_01f8fc54);
  puVar1 = *(undefined4 **)((int)pvVar3 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar3 + 0xc)) {
    *puVar1 = "TtUpdateBeforeCD";
    uVar2 = rdtsc();
    puVar1[1] = (int)uVar2;
    *(undefined4 **)((int)pvVar3 + 4) = puVar1 + 3;
  }
  iVar4 = *(int *)(param_1 + 0x18) + 0xf0;
  local_14 = 0;
  if ('\0' < *(char *)(*(int *)(param_1 + 0x1c) + 0x20)) {
    local_8 = 0;
    local_18 = 0;
    local_c = 0;
    do {
      iVar5 = *(int *)(param_1 + 0x48) + local_c;
      FUN_01006f50(iVar4,*(int *)(*(int *)(param_1 + 0x34) + 8) + 0x10 + local_8);
      FUN_01007050(iVar4,*(int *)(*(int *)(param_1 + 0x34) + 8) + local_8);
      local_c = local_c + 0xe0;
      fVar6 = *(float *)(*(int *)(*(int *)(param_1 + 0x34) + 8) + 0x20 + local_8) +
              *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x8c) + local_18);
      local_18 = local_18 + 0x28;
      local_8 = local_8 + 0x30;
      *(float *)(iVar5 + 0x60) = fVar6 * *(float *)(iVar5 + 0x80) + *(float *)(iVar5 + 0x50);
      *(float *)(iVar5 + 100) = fVar6 * *(float *)(iVar5 + 0x84) + *(float *)(iVar5 + 0x54);
      *(float *)(iVar5 + 0x68) = fVar6 * *(float *)(iVar5 + 0x88) + *(float *)(iVar5 + 0x58);
      *(float *)(iVar5 + 0x6c) = fVar6 * *(float *)(iVar5 + 0x8c) + *(float *)(iVar5 + 0x5c);
      local_14 = local_14 + 1;
    } while (local_14 < *(char *)(*(int *)(param_1 + 0x1c) + 0x20));
  }
  (**(code **)(**(int **)(param_1 + 0x3c) + 0x18))(param_1);
  pvVar3 = TlsGetValue(DAT_01f8fc54);
  puVar1 = *(undefined4 **)((int)pvVar3 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar3 + 0xc)) {
    *puVar1 = &DAT_0164b09c;
    uVar2 = rdtsc();
    puVar1[1] = (int)uVar2;
    *(undefined4 **)((int)pvVar3 + 4) = puVar1 + 3;
  }
  return;
}

// 0128AC50  FUN_0128ac50  size=76  [run]
void __thiscall FUN_0128ac50(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  iVar1 = *(int *)(param_1 + 0x18);
  uVar14 = *(undefined4 *)(param_2 + 0x14);
  uVar15 = *(undefined4 *)(param_2 + 0x18);
  uVar16 = *(undefined4 *)(param_2 + 0x1c);
  *param_3 = *(undefined4 *)(param_2 + 0x10);
  param_3[1] = uVar14;
  param_3[2] = uVar15;
  param_3[3] = uVar16;
  fVar2 = *(float *)(param_2 + 0x20);
  fVar3 = *(float *)(param_2 + 0x24);
  fVar4 = *(float *)(param_2 + 0x28);
  fVar5 = *(float *)(iVar1 + 0x104);
  fVar6 = *(float *)(iVar1 + 0x108);
  fVar7 = *(float *)(iVar1 + 0x10c);
  fVar8 = *(float *)(iVar1 + 0xf4);
  fVar9 = *(float *)(iVar1 + 0xf8);
  fVar10 = *(float *)(iVar1 + 0xfc);
  fVar11 = *(float *)(iVar1 + 0x114);
  fVar12 = *(float *)(iVar1 + 0x118);
  fVar13 = *(float *)(iVar1 + 0x11c);
  param_3[4] = fVar3 * *(float *)(iVar1 + 0x100) + fVar2 * *(float *)(iVar1 + 0xf0) +
               fVar4 * *(float *)(iVar1 + 0x110);
  param_3[5] = fVar3 * fVar5 + fVar2 * fVar8 + fVar4 * fVar11;
  param_3[6] = fVar3 * fVar6 + fVar2 * fVar9 + fVar4 * fVar12;
  param_3[7] = fVar3 * fVar7 + fVar2 * fVar10 + fVar4 * fVar13;
  return;
}

// 0128ACA0  FUN_0128aca0  size=468  [run]
void __thiscall
FUN_0128aca0(int param_1,float param_2,int param_3,int *param_4,int param_5,float *param_6,
            int param_7)

{
  float *pfVar1;
  int iVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  int *piVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float *local_18;
  int *local_14;
  
  iVar11 = 0;
  if (0 < *(int *)(*(int *)(param_1 + 0x1c) + 0x9c)) {
    local_14 = (int *)(param_5 + 0x60);
    local_18 = (float *)(param_5 + 0x40);
    piVar12 = (int *)(param_3 + 0x30);
    param_7 = param_7 - (int)param_6;
    do {
      *local_14 = 0;
      if (((param_4[iVar11] != 0) && (*(char *)(param_4[iVar11] + 0xe8) != '\x05')) &&
         ((iVar11 == 0 || (*param_4 != param_4[1])))) {
        iVar2 = *piVar12;
        local_30 = (float)*(undefined8 *)(iVar2 + 0x40);
        fStack_2c = (float)((ulonglong)*(undefined8 *)(iVar2 + 0x40) >> 0x20);
        fStack_28 = (float)*(undefined8 *)(iVar2 + 0x48);
        local_40 = (float)*(undefined8 *)(iVar2 + 0x50);
        fStack_3c = (float)((ulonglong)*(undefined8 *)(iVar2 + 0x50) >> 0x20);
        fStack_38 = (float)*(undefined8 *)(iVar2 + 0x58);
        local_50 = (float)*(undefined8 *)(iVar2 + 0x60);
        fStack_4c = (float)((ulonglong)*(undefined8 *)(iVar2 + 0x60) >> 0x20);
        fStack_48 = (float)*(undefined8 *)(iVar2 + 0x68);
        fStack_44 = (float)((ulonglong)*(undefined8 *)(iVar2 + 0x68) >> 0x20);
        fVar13 = param_2 * 10.0;
        pfVar1 = (float *)(param_7 + (int)param_6);
        fVar7 = *pfVar1;
        fVar8 = pfVar1[1];
        fVar9 = pfVar1[2];
        fVar10 = pfVar1[3];
        auVar16._4_4_ = fVar13;
        auVar16._0_4_ = fVar13;
        auVar16._8_4_ = fVar13;
        auVar16._12_4_ = 0;
        fVar4 = *(float *)(iVar2 + 0x20);
        fVar5 = *(float *)(iVar2 + 0x24);
        fVar6 = *(float *)(iVar2 + 0x28);
        auVar15._0_4_ = (fVar5 * fStack_2c + fVar4 * local_30 + fStack_28 * fVar6) - fVar7;
        auVar15._4_4_ = (fVar5 * fStack_3c + fVar4 * local_40 + fStack_38 * fVar6) - fVar8;
        auVar15._8_4_ = (fVar5 * fStack_4c + fVar4 * local_50 + fStack_48 * fVar6) - fVar9;
        auVar15._12_4_ = (fVar5 * fStack_44 + fVar4 * fStack_4c + fStack_44 * fVar6) - fVar10;
        auVar14 = minps(auVar15,auVar16);
        auVar17._0_8_ = CONCAT44(fVar13,fVar13) ^ 0x8000000080000000;
        auVar17._8_4_ = -fVar13;
        auVar17._12_4_ = 0x80000000;
        auVar15 = maxps(auVar14,auVar17);
        local_60 = (float)*(undefined8 *)(iVar2 + 0x10);
        fStack_5c = (float)((ulonglong)*(undefined8 *)(iVar2 + 0x10) >> 0x20);
        fStack_58 = (float)*(undefined8 *)(iVar2 + 0x18);
        fStack_54 = (float)((ulonglong)*(undefined8 *)(iVar2 + 0x18) >> 0x20);
        auVar18._0_4_ = local_60 - *param_6;
        auVar18._4_4_ = fStack_5c - param_6[1];
        auVar18._8_4_ = fStack_58 - param_6[2];
        auVar18._12_4_ = fStack_54 - param_6[3];
        auVar14._4_4_ = fVar13;
        auVar14._0_4_ = fVar13;
        auVar14._8_4_ = fVar13;
        auVar14._12_4_ = 0;
        auVar14 = minps(auVar18,auVar14);
        auVar3._8_4_ = -fVar13;
        auVar3._0_8_ = CONCAT44(fVar13,fVar13) ^ 0x8000000080000000;
        auVar3._12_4_ = 0x80000000;
        auVar14 = maxps(auVar14,auVar3);
        fVar4 = param_6[1];
        fVar5 = param_6[2];
        fVar6 = param_6[3];
        local_18[-8] = auVar14._0_4_ + *param_6;
        local_18[-7] = auVar14._4_4_ + fVar4;
        local_18[-6] = auVar14._8_4_ + fVar5;
        local_18[-5] = auVar14._12_4_ + fVar6;
        *local_18 = auVar15._0_4_ + fVar7;
        local_18[1] = auVar15._4_4_ + fVar8;
        local_18[2] = auVar15._8_4_ + fVar9;
        local_18[3] = auVar15._12_4_ + fVar10;
        *local_14 = param_4[iVar11];
      }
      local_18 = local_18 + 4;
      local_14 = local_14 + 1;
      iVar11 = iVar11 + 1;
      piVar12 = piVar12 + 0x18;
      param_6 = param_6 + 4;
    } while (iVar11 < *(int *)(*(int *)(param_1 + 0x1c) + 0x9c));
  }
  return;
}

// 0128AE80  FUN_0128ae80  size=455  [run]
void __thiscall FUN_0128ae80(int param_1,float param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  float fVar6;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float local_30;
  float fStack_2c;
  float fStack_28;
  int local_1c;
  int local_18;
  int local_14;
  
  iVar3 = *(int *)(param_1 + 0x1c);
  local_1c = 0;
  if ('\0' < *(char *)(iVar3 + 0x20)) {
    local_14 = 0;
    local_18 = 0;
    do {
      uVar5 = 0;
      iVar3 = (int)*(char *)(*(int *)(iVar3 + 0x8c) + 0x24 + local_14);
      iVar4 = *(int *)(param_1 + 0x48) + local_18;
      puVar1 = (undefined4 *)(param_1 + 0x54 + iVar3 * 0x24);
      if ((*(int *)(iVar4 + 0x24) != 0) && (*(char *)(*(int *)(iVar4 + 0x24) + 0xe8) == '\x05')) {
        uVar5 = puVar1[2];
      }
      *(undefined4 *)(iVar4 + 0xcc) = uVar5;
      *(undefined4 *)(iVar4 + 0xd0) = puVar1[3];
      *(undefined4 *)(iVar4 + 0xd8) = puVar1[1];
      *(undefined4 *)(iVar4 + 0xd4) = *puVar1;
      FUN_01006f50(*(int *)(param_1 + 0x18) + 0xf0,*(int *)(param_1 + 0x1c) + 0x40);
      fVar6 = *(float *)(param_4 + 0xe4) * fStack_3c + *(float *)(param_4 + 0xe0) * local_40 +
              *(float *)(param_4 + 0xe8) * fStack_38;
      if (*(char *)(local_1c + *(int *)(param_1 + 0xa0)) == '\0') {
        if (*(int *)(param_3 + iVar3 * 4) != 0) {
          iVar3 = *(int *)(iVar3 * 0x60 + 0x30 + param_4);
          uVar2 = *(undefined8 *)(iVar3 + 0x10);
          local_30 = (float)uVar2;
          fStack_2c = (float)((ulonglong)uVar2 >> 0x20);
          fStack_28 = (float)*(undefined8 *)(iVar3 + 0x18);
          fVar6 = fVar6 - (fStack_28 * fStack_38 + fStack_2c * fStack_3c + local_30 * local_40);
        }
        *(float *)(iVar4 + 0xc4) =
             fVar6 / *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x8c) + local_14);
        fVar6 = (fVar6 + *(float *)(iVar4 + 0xd4)) /
                *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x8c) + local_14);
        *(float *)(iVar4 + 0xc0) = fVar6;
        *(float *)(iVar4 + 200) = fVar6 * param_2 + *(float *)(iVar4 + 200);
      }
      else {
        *(undefined4 *)(iVar4 + 0xc0) = 0;
        *(undefined4 *)(iVar4 + 0xc4) = 0;
      }
      iVar3 = *(int *)(param_1 + 0x1c);
      local_18 = local_18 + 0xe0;
      local_14 = local_14 + 0x28;
      local_1c = local_1c + 1;
    } while (local_1c < *(char *)(iVar3 + 0x20));
  }
  return;
}

// 0128B050  FUN_0128b050  size=318  [run]
void __thiscall FUN_0128b050(int param_1,float *param_2,int param_3,float param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float local_20;
  float fStack_1c;
  float fStack_18;
  
  fVar12 = *(float *)(*(int *)(param_1 + 0x18) + 0x1ac);
  fVar13 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *(float *)(param_3 + 0xe0) = *param_2 * param_4 * fVar12 + *(float *)(param_3 + 0xe0);
  *(float *)(param_3 + 0xe4) = fVar13 * param_4 * fVar12 + *(float *)(param_3 + 0xe4);
  *(float *)(param_3 + 0xe8) = fVar2 * param_4 * fVar12 + *(float *)(param_3 + 0xe8);
  *(float *)(param_3 + 0xec) = fVar3 * param_4 * fVar12 + *(float *)(param_3 + 0xec);
  iVar1 = *(int *)(param_1 + 0x18);
  local_20 = (float)*(undefined8 *)(iVar1 + 0xf0);
  fStack_1c = (float)((ulonglong)*(undefined8 *)(iVar1 + 0xf0) >> 0x20);
  fStack_18 = (float)*(undefined8 *)(iVar1 + 0xf8);
  fVar12 = param_2[4] * param_4;
  fVar13 = param_2[5] * param_4;
  param_4 = param_2[6] * param_4;
  local_30 = (float)*(undefined8 *)(iVar1 + 0x100);
  fStack_2c = (float)((ulonglong)*(undefined8 *)(iVar1 + 0x100) >> 0x20);
  fStack_28 = (float)*(undefined8 *)(iVar1 + 0x108);
  local_40 = (float)*(undefined8 *)(iVar1 + 0x110);
  fStack_3c = (float)((ulonglong)*(undefined8 *)(iVar1 + 0x110) >> 0x20);
  fStack_38 = (float)*(undefined8 *)(iVar1 + 0x118);
  fVar9 = (fVar13 * fStack_1c + fVar12 * local_20 + fStack_18 * param_4) * *(float *)(iVar1 + 0x1a0)
  ;
  fVar10 = (fVar13 * fStack_2c + fVar12 * local_30 + fStack_28 * param_4) *
           *(float *)(iVar1 + 0x1a4);
  fVar11 = (fVar13 * fStack_3c + fVar12 * local_40 + fStack_38 * param_4) *
           *(float *)(iVar1 + 0x1a8);
  fVar12 = *(float *)(iVar1 + 0x104);
  fVar13 = *(float *)(iVar1 + 0x108);
  fVar2 = *(float *)(iVar1 + 0x10c);
  fVar3 = *(float *)(iVar1 + 0xf4);
  fVar4 = *(float *)(iVar1 + 0xf8);
  fVar5 = *(float *)(iVar1 + 0xfc);
  fVar6 = *(float *)(iVar1 + 0x114);
  fVar7 = *(float *)(iVar1 + 0x118);
  fVar8 = *(float *)(iVar1 + 0x11c);
  *(float *)(param_3 + 0xf0) =
       fVar10 * *(float *)(iVar1 + 0x100) + fVar9 * *(float *)(iVar1 + 0xf0) +
       fVar11 * *(float *)(iVar1 + 0x110) + *(float *)(param_3 + 0xf0);
  *(float *)(param_3 + 0xf4) =
       fVar10 * fVar12 + fVar9 * fVar3 + fVar11 * fVar6 + *(float *)(param_3 + 0xf4);
  *(float *)(param_3 + 0xf8) =
       fVar10 * fVar13 + fVar9 * fVar4 + fVar11 * fVar7 + *(float *)(param_3 + 0xf8);
  *(float *)(param_3 + 0xfc) =
       fVar10 * fVar2 + fVar9 * fVar5 + fVar11 * fVar8 + *(float *)(param_3 + 0xfc);
  return;
}

// 0128B190  FUN_0128b190  size=428  [run]
void FUN_0128b190(int param_1,int *param_2,int param_3,undefined4 *param_4,undefined4 *param_5)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar7 = *(float *)(param_1 + 8);
  iVar1 = *param_2;
  if ((iVar1 != 0) && (*(char *)(iVar1 + 0xe8) != '\x05')) {
    fVar6 = 1.0 - (float)((int)*(short *)(iVar1 + 0x194) << 0x10) * fVar7;
    if (fVar6 < 0.0) {
      fVar6 = 0.0;
    }
    fVar8 = 1.0 - (float)((int)*(short *)(iVar1 + 0x196) << 0x10) * fVar7;
    if (fVar8 < 0.0) {
      fVar8 = 0.0;
    }
    iVar1 = *(int *)(param_3 + 0x30);
    *(float *)(iVar1 + 0x10) = fVar6 * *(float *)(iVar1 + 0x10);
    *(float *)(iVar1 + 0x14) = fVar6 * *(float *)(iVar1 + 0x14);
    *(float *)(iVar1 + 0x18) = fVar6 * *(float *)(iVar1 + 0x18);
    *(float *)(iVar1 + 0x1c) = fVar6 * *(float *)(iVar1 + 0x1c);
    *(float *)(iVar1 + 0x20) = fVar8 * *(float *)(iVar1 + 0x20);
    *(float *)(iVar1 + 0x24) = fVar8 * *(float *)(iVar1 + 0x24);
    *(float *)(iVar1 + 0x28) = fVar8 * *(float *)(iVar1 + 0x28);
    *(float *)(iVar1 + 0x2c) = fVar8 * *(float *)(iVar1 + 0x2c);
    uVar3 = *(undefined4 *)(iVar1 + 0x14);
    uVar4 = *(undefined4 *)(iVar1 + 0x18);
    uVar5 = *(undefined4 *)(iVar1 + 0x1c);
    *param_4 = *(undefined4 *)(iVar1 + 0x10);
    param_4[1] = uVar3;
    param_4[2] = uVar4;
    param_4[3] = uVar5;
    uVar3 = *(undefined4 *)(iVar1 + 0x24);
    uVar4 = *(undefined4 *)(iVar1 + 0x28);
    uVar5 = *(undefined4 *)(iVar1 + 0x2c);
    *param_5 = *(undefined4 *)(iVar1 + 0x20);
    param_5[1] = uVar3;
    param_5[2] = uVar4;
    param_5[3] = uVar5;
    fVar6 = *(float *)(iVar1 + 0x20);
    fVar8 = *(float *)(iVar1 + 0x24);
    fVar2 = *(float *)(iVar1 + 0x28);
    *(float *)(iVar1 + 0x20) =
         fVar8 * *(float *)(iVar1 + 0x50) + fVar6 * *(float *)(iVar1 + 0x40) +
         fVar2 * *(float *)(iVar1 + 0x60);
    *(float *)(iVar1 + 0x24) =
         fVar8 * *(float *)(iVar1 + 0x54) + fVar6 * *(float *)(iVar1 + 0x44) +
         fVar2 * *(float *)(iVar1 + 100);
    *(float *)(iVar1 + 0x28) =
         fVar8 * *(float *)(iVar1 + 0x58) + fVar6 * *(float *)(iVar1 + 0x48) +
         fVar2 * *(float *)(iVar1 + 0x68);
    *(float *)(iVar1 + 0x2c) =
         fVar8 * *(float *)(iVar1 + 0x5c) + fVar6 * *(float *)(iVar1 + 0x4c) +
         fVar2 * *(float *)(iVar1 + 0x6c);
  }
  iVar1 = param_2[1];
  if (((iVar1 != 0) && (*(char *)(iVar1 + 0xe8) != '\x05')) && (iVar1 != *param_2)) {
    fVar6 = 1.0 - (float)((int)*(short *)(iVar1 + 0x194) << 0x10) * fVar7;
    if (fVar6 < 0.0) {
      fVar6 = 0.0;
    }
    fVar8 = 1.0 - (float)((int)*(short *)(iVar1 + 0x196) << 0x10) * fVar7;
    fVar7 = 0.0;
    if (0.0 <= fVar8) {
      fVar7 = fVar8;
    }
    iVar1 = *(int *)(param_3 + 0x90);
    *(float *)(iVar1 + 0x10) = fVar6 * *(float *)(iVar1 + 0x10);
    *(float *)(iVar1 + 0x14) = fVar6 * *(float *)(iVar1 + 0x14);
    *(float *)(iVar1 + 0x18) = fVar6 * *(float *)(iVar1 + 0x18);
    *(float *)(iVar1 + 0x1c) = fVar6 * *(float *)(iVar1 + 0x1c);
    *(float *)(iVar1 + 0x20) = fVar7 * *(float *)(iVar1 + 0x20);
    *(float *)(iVar1 + 0x24) = fVar7 * *(float *)(iVar1 + 0x24);
    *(float *)(iVar1 + 0x28) = fVar7 * *(float *)(iVar1 + 0x28);
    *(float *)(iVar1 + 0x2c) = fVar7 * *(float *)(iVar1 + 0x2c);
    uVar3 = *(undefined4 *)(iVar1 + 0x14);
    uVar4 = *(undefined4 *)(iVar1 + 0x18);
    uVar5 = *(undefined4 *)(iVar1 + 0x1c);
    param_4[4] = *(undefined4 *)(iVar1 + 0x10);
    param_4[5] = uVar3;
    param_4[6] = uVar4;
    param_4[7] = uVar5;
    uVar3 = *(undefined4 *)(iVar1 + 0x24);
    uVar4 = *(undefined4 *)(iVar1 + 0x28);
    uVar5 = *(undefined4 *)(iVar1 + 0x2c);
    param_5[4] = *(undefined4 *)(iVar1 + 0x20);
    param_5[5] = uVar3;
    param_5[6] = uVar4;
    param_5[7] = uVar5;
    fVar7 = *(float *)(iVar1 + 0x20);
    fVar6 = *(float *)(iVar1 + 0x24);
    fVar8 = *(float *)(iVar1 + 0x28);
    *(float *)(iVar1 + 0x20) =
         fVar6 * *(float *)(iVar1 + 0x50) + fVar7 * *(float *)(iVar1 + 0x40) +
         fVar8 * *(float *)(iVar1 + 0x60);
    *(float *)(iVar1 + 0x24) =
         fVar6 * *(float *)(iVar1 + 0x54) + fVar7 * *(float *)(iVar1 + 0x44) +
         fVar8 * *(float *)(iVar1 + 100);
    *(float *)(iVar1 + 0x28) =
         fVar6 * *(float *)(iVar1 + 0x58) + fVar7 * *(float *)(iVar1 + 0x48) +
         fVar8 * *(float *)(iVar1 + 0x68);
    *(float *)(iVar1 + 0x2c) =
         fVar6 * *(float *)(iVar1 + 0x5c) + fVar7 * *(float *)(iVar1 + 0x4c) +
         fVar8 * *(float *)(iVar1 + 0x6c);
  }
  return;
}

// 0128B340  FUN_0128b340  size=456  [run]
void __thiscall FUN_0128b340(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  LPVOID pvVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  int local_1c;
  int local_18;
  float *local_14;
  
  pvVar5 = TlsGetValue(DAT_01f8fc54);
  puVar1 = *(undefined4 **)((int)pvVar5 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar5 + 0xc)) {
    *puVar1 = "TtApplyVehicleForces";
    uVar3 = rdtsc();
    puVar1[1] = (int)uVar3;
    *(undefined4 **)((int)pvVar5 + 4) = puVar1 + 3;
  }
  iVar7 = *(int *)(param_1 + 0x1c);
  local_1c = 0;
  if (*(char *)(iVar7 + 0x20) != '\0') {
    local_14 = (float *)(param_2 + 0x70);
    local_18 = 0;
    do {
      auVar4._4_4_ = -(uint)(ABS(local_14[1] - 0.0) <= 0.001);
      auVar4._0_4_ = -(uint)(ABS(*local_14 - 0.0) <= 0.001);
      auVar4._8_4_ = -(uint)(ABS(local_14[2] - 0.0) <= 0.001);
      auVar4._12_4_ = -(uint)(ABS(local_14[3] - 0.0) <= 0.001);
      uVar6 = movmskps(iVar7,auVar4);
      if (((byte)uVar6 & 7) != 7) {
        iVar7 = *(int *)(param_1 + 0x48);
        iVar2 = *(int *)(local_18 + 0x24 + iVar7);
        FUN_0118fe70();
        (**(code **)(*(int *)(iVar2 + 0xe0) + 0x54))(local_14,local_18 + 0x50 + iVar7);
      }
      iVar7 = *(int *)(param_1 + 0x1c);
      local_14 = local_14 + 4;
      local_18 = local_18 + 0xe0;
      local_1c = local_1c + 1;
    } while (local_1c < (int)(uint)*(byte *)(iVar7 + 0x20));
  }
  iVar7 = *(int *)(param_1 + 0x18);
  FUN_0118fe70();
  (**(code **)(*(int *)(iVar7 + 0xe0) + 0x44))(param_2 + 0x10);
  iVar7 = *(int *)(param_1 + 0x18);
  FUN_0118fe70();
  (**(code **)(*(int *)(iVar7 + 0xe0) + 0x40))(param_2);
  iVar7 = param_2 + 0x20;
  piVar8 = (int *)(param_2 + 0x60);
  local_1c = 2;
  do {
    iVar2 = *piVar8;
    if (iVar2 != 0) {
      FUN_0118fe70();
      (**(code **)(*(int *)(iVar2 + 0xe0) + 0x44))(iVar7 + 0x20);
      iVar2 = *piVar8;
      FUN_0118fe70();
      (**(code **)(*(int *)(iVar2 + 0xe0) + 0x40))(iVar7);
    }
    piVar8 = piVar8 + 1;
    iVar7 = iVar7 + 0x10;
    local_1c = local_1c + -1;
  } while (local_1c != 0);
  pvVar5 = TlsGetValue(DAT_01f8fc54);
  puVar1 = *(undefined4 **)((int)pvVar5 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar5 + 0xc)) {
    *puVar1 = &DAT_0164b09c;
    uVar3 = rdtsc();
    puVar1[1] = (int)uVar3;
    *(undefined4 **)((int)pvVar5 + 4) = puVar1 + 3;
  }
  return;
}

// 0128B510  hkpVehicleInstance::vf2C  size=686  [run]
void __thiscall
hkpVehicleInstance::vf2C
          (int param_1,int param_2,int param_3,int param_4,float *param_5,float *param_6)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float local_30;
  float fStack_2c;
  float fStack_28;
  uint local_14;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  local_90 = *(undefined4 *)(iVar1 + 0x40);
  uStack_8c = *(undefined4 *)(iVar1 + 0x44);
  uStack_88 = *(undefined4 *)(iVar1 + 0x48);
  uStack_84 = *(undefined4 *)(iVar1 + 0x4c);
  iVar3 = param_4 * 0xe0 + *(int *)(param_1 + 0x48);
  local_80 = *(undefined4 *)(iVar1 + 0x30);
  uStack_7c = *(undefined4 *)(iVar1 + 0x34);
  uStack_78 = *(undefined4 *)(iVar1 + 0x38);
  uStack_74 = *(undefined4 *)(iVar1 + 0x3c);
  local_70 = *(undefined4 *)(iVar1 + 0x50);
  uStack_6c = *(undefined4 *)(iVar1 + 0x54);
  uStack_68 = *(undefined4 *)(iVar1 + 0x58);
  uStack_64 = *(undefined4 *)(iVar1 + 0x5c);
  FUN_010087a0(&local_90);
  local_14 = *(uint *)(iVar3 + 200);
  FUN_010074f0(&local_50,iVar3 + 0x90);
  FUN_01007e80(&local_40,local_14 ^ 0x80000000);
  fVar5 = *(float *)(iVar3 + 0xbc);
  local_30 = (float)*(undefined8 *)(param_2 + 0x160);
  fStack_2c = (float)((ulonglong)*(undefined8 *)(param_2 + 0x160) >> 0x20);
  fStack_28 = (float)*(undefined8 *)(param_2 + 0x168);
  local_40 = (float)*(undefined8 *)(iVar3 + 0xb0);
  fStack_3c = (float)((ulonglong)*(undefined8 *)(iVar3 + 0xb0) >> 0x20);
  fStack_38 = (float)*(undefined8 *)(iVar3 + 0xb8);
  fVar7 = *(float *)(param_2 + 0x16c);
  fVar4 = (fStack_2c * fStack_38 - fStack_28 * fStack_3c) + local_40 * fVar7 + local_30 * fVar5;
  fVar6 = (fStack_28 * local_40 - local_30 * fStack_38) + fStack_3c * fVar7 + fStack_2c * fVar5;
  fVar8 = (local_30 * fStack_3c - fStack_2c * local_40) + fStack_38 * fVar7 + fStack_28 * fVar5;
  fVar11 = fVar5 * fVar7 - (fStack_2c * fStack_3c + local_30 * local_40 + fStack_28 * fStack_38);
  fVar5 = (fStack_48 * fVar6 - fStack_4c * fVar8) + fVar11 * local_50 + fStack_44 * fVar4;
  fVar7 = (local_50 * fVar8 - fStack_48 * fVar4) + fVar11 * fStack_4c + fStack_44 * fVar6;
  fVar9 = (fStack_4c * fVar4 - local_50 * fVar6) + fVar11 * fStack_48 + fStack_44 * fVar8;
  fVar4 = fStack_44 * fVar11 - (fStack_4c * fVar6 + local_50 * fVar4 + fStack_48 * fVar8);
  *param_6 = (fStack_58 * fVar7 - fStack_5c * fVar9) + fVar4 * local_60 + fStack_54 * fVar5;
  param_6[1] = (local_60 * fVar9 - fStack_58 * fVar5) + fVar4 * fStack_5c + fStack_54 * fVar7;
  param_6[2] = (fStack_5c * fVar5 - local_60 * fVar7) + fVar4 * fStack_58 + fStack_54 * fVar9;
  param_6[3] = fStack_54 * fVar4 - (fStack_5c * fVar7 + local_60 * fVar5 + fStack_58 * fVar9);
  fVar5 = *(float *)(iVar3 + 0x70);
  if (fVar5 < 0.0) {
    fVar5 = 0.0;
  }
  pfVar2 = (float *)(param_4 * 0x30 + *(int *)(param_3 + 8));
  fVar7 = *pfVar2;
  fVar4 = pfVar2[1];
  fVar6 = pfVar2[2];
  fVar8 = fVar4 * *(float *)(param_2 + 0x100) + fVar7 * *(float *)(param_2 + 0xf0) +
          fVar6 * *(float *)(param_2 + 0x110) + *(float *)(param_2 + 0x120);
  fVar9 = fVar4 * *(float *)(param_2 + 0x104) + fVar7 * *(float *)(param_2 + 0xf4) +
          fVar6 * *(float *)(param_2 + 0x114) + *(float *)(param_2 + 0x124);
  fVar11 = fVar4 * *(float *)(param_2 + 0x108) + fVar7 * *(float *)(param_2 + 0xf8) +
           fVar6 * *(float *)(param_2 + 0x118) + *(float *)(param_2 + 0x128);
  fVar10 = fVar4 * *(float *)(param_2 + 0x10c) + fVar7 * *(float *)(param_2 + 0xfc) +
           fVar6 * *(float *)(param_2 + 0x11c) + *(float *)(param_2 + 300);
  *param_5 = fVar8;
  param_5[1] = fVar9;
  param_5[2] = fVar11;
  param_5[3] = fVar10;
  fVar7 = *(float *)(iVar3 + 0x84);
  fVar4 = *(float *)(iVar3 + 0x88);
  fVar6 = *(float *)(iVar3 + 0x8c);
  *param_5 = fVar5 * *(float *)(iVar3 + 0x80) + fVar8;
  param_5[1] = fVar5 * fVar7 + fVar9;
  param_5[2] = fVar5 * fVar4 + fVar11;
  param_5[3] = fVar5 * fVar6 + fVar10;
  return;
}

// 0128B7C0  FUN_0128b7c0  size=1016  [run]
void __thiscall
FUN_0128b7c0(int param_1,float param_2,int *param_3,int param_4,int param_5,float *param_6)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float local_40;
  float fStack_3c;
  float fStack_38;
  int local_24;
  int local_1c;
  int local_18;
  float *local_14;
  
  local_24 = 0;
  if (*(char *)(*(int *)(param_1 + 0x1c) + 0x20) != '\0') {
    local_18 = 0;
    local_1c = 0;
    local_14 = param_6;
    do {
      fVar9 = *(float *)(*param_3 + local_24 * 4);
      iVar7 = *(int *)(param_1 + 0x48) + local_1c;
      iVar2 = *(int *)(iVar7 + 0x24);
      fVar19 = fVar9 * param_2;
      fVar20 = fVar19 * *(float *)(iVar7 + 0x10);
      fVar21 = fVar19 * *(float *)(iVar7 + 0x14);
      fVar22 = fVar19 * *(float *)(iVar7 + 0x18);
      fVar19 = fVar19 * *(float *)(iVar7 + 0x1c);
      if (0.0 < fVar9) {
        fVar9 = *(float *)(*(int *)(param_1 + 0x18) + 0x1ac);
        *(float *)(param_5 + 0xe0) = fVar9 * fVar20 + *(float *)(param_5 + 0xe0);
        *(float *)(param_5 + 0xe4) = fVar9 * fVar21 + *(float *)(param_5 + 0xe4);
        *(float *)(param_5 + 0xe8) = fVar9 * fVar22 + *(float *)(param_5 + 0xe8);
        *(float *)(param_5 + 0xec) = fVar9 * fVar19 + *(float *)(param_5 + 0xec);
        iVar3 = *(int *)(param_1 + 0x18);
        fVar10 = *(float *)(iVar7 + 0x50) - *(float *)(iVar3 + 0x140);
        fVar13 = *(float *)(iVar7 + 0x54) - *(float *)(iVar3 + 0x144);
        fVar16 = *(float *)(iVar7 + 0x58) - *(float *)(iVar3 + 0x148);
        fVar9 = fVar13 * fVar22 - fVar16 * fVar21;
        fVar16 = fVar16 * fVar20 - fVar10 * fVar22;
        fVar10 = fVar10 * fVar21 - fVar13 * fVar20;
        local_40 = (float)*(undefined8 *)(iVar3 + 0xf0);
        fStack_3c = (float)((ulonglong)*(undefined8 *)(iVar3 + 0xf0) >> 0x20);
        fStack_38 = (float)*(undefined8 *)(iVar3 + 0xf8);
        local_60 = (float)*(undefined8 *)(iVar3 + 0x100);
        fStack_5c = (float)((ulonglong)*(undefined8 *)(iVar3 + 0x100) >> 0x20);
        fStack_58 = (float)*(undefined8 *)(iVar3 + 0x108);
        local_80 = (float)*(undefined8 *)(iVar3 + 0x110);
        fStack_7c = (float)((ulonglong)*(undefined8 *)(iVar3 + 0x110) >> 0x20);
        fStack_78 = (float)*(undefined8 *)(iVar3 + 0x118);
        fVar11 = (fVar16 * fStack_3c + fVar9 * local_40 + fStack_38 * fVar10) *
                 *(float *)(iVar3 + 0x1a0);
        fVar14 = (fVar16 * fStack_5c + fVar9 * local_60 + fStack_58 * fVar10) *
                 *(float *)(iVar3 + 0x1a4);
        fVar17 = (fVar16 * fStack_7c + fVar9 * local_80 + fStack_78 * fVar10) *
                 *(float *)(iVar3 + 0x1a8);
        fVar9 = *(float *)(iVar3 + 0x104);
        fVar16 = *(float *)(iVar3 + 0x108);
        fVar10 = *(float *)(iVar3 + 0x10c);
        fVar13 = *(float *)(iVar3 + 0xf4);
        fVar4 = *(float *)(iVar3 + 0xf8);
        fVar12 = *(float *)(iVar3 + 0xfc);
        fVar15 = *(float *)(iVar3 + 0x114);
        fVar18 = *(float *)(iVar3 + 0x118);
        fVar5 = *(float *)(iVar3 + 0x11c);
        *(float *)(param_5 + 0xf0) =
             fVar14 * *(float *)(iVar3 + 0x100) + fVar11 * *(float *)(iVar3 + 0xf0) +
             fVar17 * *(float *)(iVar3 + 0x110) + *(float *)(param_5 + 0xf0);
        *(float *)(param_5 + 0xf4) =
             fVar14 * fVar9 + fVar11 * fVar13 + fVar17 * fVar15 + *(float *)(param_5 + 0xf4);
        *(float *)(param_5 + 0xf8) =
             fVar14 * fVar16 + fVar11 * fVar4 + fVar17 * fVar18 + *(float *)(param_5 + 0xf8);
        *(float *)(param_5 + 0xfc) =
             fVar14 * fVar10 + fVar11 * fVar12 + fVar17 * fVar5 + *(float *)(param_5 + 0xfc);
      }
      if ((iVar2 == 0) || (*(char *)(iVar2 + 0xe8) == '\x05')) {
        *local_14 = 0.0;
        local_14[1] = 0.0;
        local_14[2] = 0.0;
        local_14[3] = 0.0;
      }
      else {
        iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + 0x8c);
        iVar6 = (int)*(char *)(iVar3 + 0x24 + local_18);
        fVar9 = *(float *)(iVar3 + 0x1c + local_18);
        fVar20 = (0.0 - fVar9) * fVar20;
        fVar21 = (0.0 - fVar9) * fVar21;
        fVar22 = (0.0 - fVar9) * fVar22;
        fVar19 = (0.0 - fVar9) * fVar19;
        fVar8 = (float10)FUN_011a2a30();
        fVar16 = *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x8c) + 0x20 + local_18) *
                 (float)fVar8 * param_2;
        fVar9 = fVar22 * fVar22 + fVar20 * fVar20 + fVar21 * fVar21;
        if (fVar16 * fVar16 < fVar9) {
          fVar16 = fVar16 / SQRT(fVar9);
          fVar20 = fVar16 * fVar20;
          fVar21 = fVar16 * fVar21;
          fVar22 = fVar16 * fVar22;
          fVar19 = fVar16 * fVar19;
        }
        if (iVar2 == *(int *)(param_4 + iVar6 * 4)) {
          fVar9 = *(float *)(iVar2 + 0x1ac);
          piVar1 = (int *)(iVar6 * 0x60 + 0x30 + param_5);
          iVar3 = *piVar1;
          *(float *)(iVar3 + 0x10) = fVar9 * fVar20 + *(float *)(iVar3 + 0x10);
          *(float *)(iVar3 + 0x14) = fVar9 * fVar21 + *(float *)(iVar3 + 0x14);
          *(float *)(iVar3 + 0x18) = fVar9 * fVar22 + *(float *)(iVar3 + 0x18);
          *(float *)(iVar3 + 0x1c) = fVar9 * fVar19 + *(float *)(iVar3 + 0x1c);
          fVar19 = *(float *)(iVar7 + 0x50) - *(float *)(iVar2 + 0x140);
          fVar16 = *(float *)(iVar7 + 0x54) - *(float *)(iVar2 + 0x144);
          fVar10 = *(float *)(iVar7 + 0x58) - *(float *)(iVar2 + 0x148);
          local_50 = (float)*(undefined8 *)(iVar2 + 0xf0);
          fStack_4c = (float)((ulonglong)*(undefined8 *)(iVar2 + 0xf0) >> 0x20);
          fStack_48 = (float)*(undefined8 *)(iVar2 + 0xf8);
          fVar9 = fVar22 * fVar16 - fVar21 * fVar10;
          fVar22 = fVar20 * fVar10 - fVar22 * fVar19;
          fVar20 = fVar21 * fVar19 - fVar20 * fVar16;
          local_70 = (float)*(undefined8 *)(iVar2 + 0x100);
          fStack_6c = (float)((ulonglong)*(undefined8 *)(iVar2 + 0x100) >> 0x20);
          fStack_68 = (float)*(undefined8 *)(iVar2 + 0x108);
          iVar7 = *piVar1;
          local_a0 = (float)*(undefined8 *)(iVar2 + 0x110);
          fStack_9c = (float)((ulonglong)*(undefined8 *)(iVar2 + 0x110) >> 0x20);
          fStack_98 = (float)*(undefined8 *)(iVar2 + 0x118);
          fVar12 = (fVar22 * fStack_4c + fVar9 * local_50 + fStack_48 * fVar20) *
                   *(float *)(iVar2 + 0x1a0);
          fVar15 = (fVar22 * fStack_6c + fVar9 * local_70 + fStack_68 * fVar20) *
                   *(float *)(iVar2 + 0x1a4);
          fVar18 = (fVar22 * fStack_9c + fVar9 * local_a0 + fStack_98 * fVar20) *
                   *(float *)(iVar2 + 0x1a8);
          fVar9 = *(float *)(iVar2 + 0xf4);
          fVar20 = *(float *)(iVar2 + 0xf8);
          fVar21 = *(float *)(iVar2 + 0xfc);
          fVar22 = *(float *)(iVar2 + 0x104);
          fVar19 = *(float *)(iVar2 + 0x108);
          fVar16 = *(float *)(iVar2 + 0x10c);
          fVar10 = *(float *)(iVar2 + 0x114);
          fVar13 = *(float *)(iVar2 + 0x118);
          fVar4 = *(float *)(iVar2 + 0x11c);
          *(float *)(iVar7 + 0x20) =
               fVar12 * *(float *)(iVar2 + 0xf0) + fVar15 * *(float *)(iVar2 + 0x100) +
               fVar18 * *(float *)(iVar2 + 0x110) + *(float *)(iVar7 + 0x20);
          *(float *)(iVar7 + 0x24) =
               fVar12 * fVar9 + fVar15 * fVar22 + fVar18 * fVar10 + *(float *)(iVar7 + 0x24);
          *(float *)(iVar7 + 0x28) =
               fVar12 * fVar20 + fVar15 * fVar19 + fVar18 * fVar13 + *(float *)(iVar7 + 0x28);
          *(float *)(iVar7 + 0x2c) =
               fVar12 * fVar21 + fVar15 * fVar16 + fVar18 * fVar4 + *(float *)(iVar7 + 0x2c);
          *local_14 = 0.0;
          local_14[1] = 0.0;
          local_14[2] = 0.0;
          local_14[3] = 0.0;
        }
        else {
          *local_14 = fVar20;
          local_14[1] = fVar21;
          local_14[2] = fVar22;
          local_14[3] = fVar19;
        }
      }
      local_1c = local_1c + 0xe0;
      local_18 = local_18 + 0x28;
      local_14 = local_14 + 4;
      local_24 = local_24 + 1;
    } while (local_24 < (int)(uint)*(byte *)(*(int *)(param_1 + 0x1c) + 0x20));
  }
  return;
}

// 0128BBC0  FUN_0128bbc0  size=168  [run]
void FUN_0128bbc0(float param_1,int param_2,int param_3)

{
  float fVar1;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_20 = (float)*(undefined8 *)(param_2 + 0xf0);
  uStack_1c = (float)((ulonglong)*(undefined8 *)(param_2 + 0xf0) >> 0x20);
  uStack_18 = (float)*(undefined8 *)(param_2 + 0xf8);
  uStack_14 = (float)((ulonglong)*(undefined8 *)(param_2 + 0xf8) >> 0x20);
  if (uStack_1c * uStack_1c + local_20 * local_20 + uStack_18 * uStack_18 <=
      *(float *)(param_3 + 0x10) * *(float *)(param_3 + 0x10)) {
    fVar1 = *(float *)(param_3 + 8);
  }
  else {
    fVar1 = *(float *)(param_3 + 0xc);
  }
  fVar1 = 1.0 - fVar1 * param_1;
  if (fVar1 < 0.0) {
    fVar1 = 0.0;
  }
  *(float *)(param_2 + 0xf0) = fVar1 * local_20;
  *(float *)(param_2 + 0xf4) = fVar1 * uStack_1c;
  *(float *)(param_2 + 0xf8) = fVar1 * uStack_18;
  *(float *)(param_2 + 0xfc) = fVar1 * uStack_14;
  return;
}

// 0128BC70  hkpVehicleInstance::vf20  size=672  [run]
void __fastcall hkpVehicleInstance::vf20(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  float local_70 [6];
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  float fStack_48;
  undefined4 uStack_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float local_14;
  
  if ((char)(*(int **)(param_1 + 0x1c))[100] == '\0') {
    (**(code **)(**(int **)(param_1 + 0x1c) + 0xc))
              (*(int *)(param_1 + 0x34) + 8,*(undefined4 *)(param_1 + 0x18));
  }
  iVar5 = *(int *)(param_1 + 0x1c);
  fVar1 = *(float *)(iVar5 + 0x78);
  fVar2 = *(float *)(iVar5 + 0x74);
  fVar3 = *(float *)(iVar5 + 0x7c);
  local_40 = ABS(*(float *)(iVar5 + 0x30)) * fVar2 + ABS(*(float *)(iVar5 + 0x40)) * fVar1 +
             ABS(*(float *)(iVar5 + 0x50)) * fVar3;
  fStack_3c = ABS(*(float *)(iVar5 + 0x34)) * fVar2 + ABS(*(float *)(iVar5 + 0x44)) * fVar1 +
              ABS(*(float *)(iVar5 + 0x54)) * fVar3;
  fStack_38 = ABS(*(float *)(iVar5 + 0x38)) * fVar2 + ABS(*(float *)(iVar5 + 0x48)) * fVar1 +
              ABS(*(float *)(iVar5 + 0x58)) * fVar3;
  fStack_34 = ABS(*(float *)(iVar5 + 0x3c)) * fVar2 + ABS(*(float *)(iVar5 + 0x4c)) * fVar1 +
              ABS(*(float *)(iVar5 + 0x5c)) * fVar3;
  fVar7 = (float10)FUN_011a2a30();
  local_14 = (float)fVar7;
  local_70[0] = local_40 * local_14;
  local_70[5] = fStack_3c * local_14;
  fStack_48 = fStack_38 * local_14;
  fStack_24 = fStack_34 * local_14;
  local_70[1] = 0.0;
  local_70[2] = 0.0;
  local_70[3] = 0.0;
  local_70[4] = 0.0;
  uStack_58 = 0;
  uStack_54 = 0;
  local_50 = 0;
  uStack_4c = 0;
  uStack_44 = 0;
  local_30 = local_70[0];
  fStack_2c = local_70[5];
  fStack_28 = fStack_48;
  fVar7 = (float10)FUN_011a2a30();
  local_14 = (float)fVar7;
  FUN_0119f640(local_14);
  FUN_0119f700(local_70);
  local_14 = (float)(int)*(char *)(*(int *)(param_1 + 0x1c) + 0x20);
  uVar4 = *(uint *)(param_1 + 0x50) & 0x3fffffff;
  if ((int)uVar4 < (int)local_14) {
    iVar5 = uVar4 * 2;
    iVar6 = (int)local_14;
    if ((int)local_14 < iVar5) {
      iVar6 = iVar5;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1 + 0x48,iVar6,0xe0);
  }
  iVar5 = 0;
  if (local_14 != (float)*(int *)(param_1 + 0x4c) && -1 < (int)local_14 - *(int *)(param_1 + 0x4c))
  {
    do {
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)local_14 - *(int *)(param_1 + 0x4c));
  }
  *(float *)(param_1 + 0x4c) = local_14;
  if (0 < *(int *)(param_1 + 0x4c)) {
    do {
      iVar5 = FUN_0128aa60();
    } while (iVar5 + 1 < *(int *)(param_1 + 0x4c));
  }
  local_14 = (float)(int)*(char *)(*(int *)(param_1 + 0x1c) + 0x20);
  uVar4 = *(uint *)(param_1 + 0xa8) & 0x3fffffff;
  if ((int)uVar4 < (int)local_14) {
    iVar5 = uVar4 * 2;
    iVar6 = (int)local_14;
    if ((int)local_14 < iVar5) {
      iVar6 = iVar5;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,(int *)(param_1 + 0xa0),iVar6,1);
  }
  iVar5 = 0;
  *(float *)(param_1 + 0xa4) = local_14;
  if (0 < *(int *)(param_1 + 0xa4)) {
    do {
      *(undefined1 *)(iVar5 + *(int *)(param_1 + 0xa0)) = 0;
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0xa4));
  }
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  local_14 = (float)(int)*(char *)(*(int *)(param_1 + 0x1c) + 0x20);
  uVar4 = *(uint *)(param_1 + 0xcc) & 0x3fffffff;
  if ((int)uVar4 < (int)local_14) {
    iVar5 = uVar4 * 2;
    if (iVar5 <= (int)local_14) {
      iVar5 = (int)local_14;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,(int *)(param_1 + 0xc4),iVar5,4);
  }
  *(float *)(param_1 + 200) = local_14;
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 200)) {
    do {
      *(undefined4 *)(*(int *)(param_1 + 0xc4) + iVar5 * 4) = 0;
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 200));
  }
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined2 *)(param_1 + 0xd0) = 0;
  *(undefined1 *)(param_1 + 0xd2) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  (**(code **)(**(int **)(param_1 + 0x3c) + 0xc))(param_1);
  *(undefined1 *)(*(int *)(param_1 + 0x3c) + 8) = 1;
  return;
}

// 0128BF10  FUN_0128bf10  size=255  [run]
void __thiscall FUN_0128bf10(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = (int *)(param_4 + 0x8c);
  iVar4 = *(int *)(param_1 + 0xa4);
  uVar2 = *(uint *)(param_4 + 0x94) & 0x3fffffff;
  if ((int)uVar2 < iVar4) {
    iVar3 = uVar2 * 2;
    iVar5 = iVar4;
    if (iVar4 < iVar3) {
      iVar5 = iVar3;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,piVar1,iVar5,1);
  }
  *(int *)(param_4 + 0x90) = iVar4;
  iVar4 = *(int *)(param_1 + 0xa4);
  uVar2 = *(uint *)(param_4 + 8) & 0x3fffffff;
  if ((int)uVar2 < iVar4) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= iVar4) {
      iVar3 = iVar4;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_4,iVar3,4);
  }
  iVar3 = 0;
  *(int *)(param_4 + 4) = iVar4;
  if (0 < *(int *)(param_1 + 0xa4)) {
    do {
      *(undefined1 *)(iVar3 + *piVar1) = *(undefined1 *)(iVar3 + *(int *)(param_1 + 0xa0));
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0xa4));
  }
  *(undefined4 *)(param_4 + 0xb8) = *(undefined4 *)(param_1 + 0xac);
  (**(code **)(**(int **)(param_1 + 0x30) + 0xc))(param_2,param_1,param_3,param_4);
  iVar4 = 0;
  if (0 < *(int *)(param_4 + 0x90)) {
    do {
      *(undefined1 *)(iVar4 + *(int *)(param_1 + 0xa0)) = *(undefined1 *)(iVar4 + *piVar1);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_4 + 0x90));
  }
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_4 + 0xb8);
  return;
}

// 0128C020  hkpVehicleInstance::vf34  size=116  [run]
float10 __fastcall hkpVehicleInstance::vf34(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 in_XMM3 [16];
  undefined1 auVar6 [16];
  
  iVar1 = *(int *)(param_1 + 0x18);
  fVar2 = *(float *)(iVar1 + 0x1b0) * *(float *)(iVar1 + 0x1b0);
  fVar3 = *(float *)(iVar1 + 0x1b4) * *(float *)(iVar1 + 0x1b4);
  fVar4 = *(float *)(iVar1 + 0x1b8) * *(float *)(iVar1 + 0x1b8);
  fVar5 = fVar3 + fVar2 + fVar4;
  auVar6._4_4_ = fVar3 + fVar2 + fVar4;
  auVar6._0_4_ = fVar5;
  auVar6._8_4_ = fVar3 + fVar2 + fVar4;
  auVar6._12_4_ = fVar3 + fVar2 + fVar4;
  auVar6 = rsqrtps(in_XMM3,auVar6);
  fVar2 = auVar6._0_4_;
  return (float10)(float)(~-(uint)(fVar5 <= 0.0) &
                         (uint)((3.0 - fVar2 * fVar5 * fVar2) * fVar2 * 0.5 * fVar5)) *
         (float10)0.001 * (float10)3600.0;
}

// 0128C0A0  hkpVehicleInstance::vf38  size=116  [run]
float10 __fastcall hkpVehicleInstance::vf38(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 in_XMM3 [16];
  undefined1 auVar6 [16];
  
  iVar1 = *(int *)(param_1 + 0x18);
  fVar2 = *(float *)(iVar1 + 0x1b0) * *(float *)(iVar1 + 0x1b0);
  fVar3 = *(float *)(iVar1 + 0x1b4) * *(float *)(iVar1 + 0x1b4);
  fVar4 = *(float *)(iVar1 + 0x1b8) * *(float *)(iVar1 + 0x1b8);
  fVar5 = fVar3 + fVar2 + fVar4;
  auVar6._4_4_ = fVar3 + fVar2 + fVar4;
  auVar6._0_4_ = fVar5;
  auVar6._8_4_ = fVar3 + fVar2 + fVar4;
  auVar6._12_4_ = fVar3 + fVar2 + fVar4;
  auVar6 = rsqrtps(in_XMM3,auVar6);
  fVar2 = auVar6._0_4_;
  return (float10)(float)(~-(uint)(fVar5 <= 0.0) &
                         (uint)((3.0 - fVar2 * fVar5 * fVar2) * fVar2 * 0.5 * fVar5)) *
         (float10)0.00062138814 * (float10)3600.0;
}

// 0128C120  hkpVehicleInstance::hkpVehicleInstance  size=236  [run]
undefined4 * __thiscall
hkpVehicleInstance::hkpVehicleInstance(undefined4 *param_1,undefined4 param_2)

{
  hkpUnaryAction::hkpUnaryAction(param_2,0);
  *param_1 = vftable;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0x80000000;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0x80000000;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0x80000000;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x27] = 0;
  return param_1;
}

// 0128C210  hkpVehicleInstance::~hkpVehicleInstance  size=346  [run]
void __fastcall hkpVehicleInstance::~hkpVehicleInstance(undefined4 *param_1)

{
  *param_1 = vftable;
  if (param_1[7] != 0) {
    FUN_010060a0();
  }
  if (param_1[8] != 0) {
    FUN_010060a0();
  }
  if (param_1[9] != 0) {
    FUN_010060a0();
  }
  if (param_1[10] != 0) {
    FUN_010060a0();
  }
  if (param_1[0xb] != 0) {
    FUN_010060a0();
  }
  if (param_1[0xc] != 0) {
    FUN_010060a0();
  }
  if (param_1[0xd] != 0) {
    FUN_010060a0();
  }
  if (param_1[0xe] != 0) {
    FUN_010060a0();
  }
  if (param_1[0xf] != 0) {
    FUN_010060a0();
  }
  if (param_1[0x11] != 0) {
    FUN_010060a0();
  }
  if (param_1[0x27] != 0) {
    FUN_010060a0();
  }
  if (param_1[0x10] != 0) {
    FUN_010060a0();
  }
  param_1[0x32] = 0;
  if (-1 < (int)param_1[0x33]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0x31],param_1[0x33] * 4);
  }
  param_1[0x31] = 0;
  param_1[0x33] = 0x80000000;
  param_1[0x29] = 0;
  if (-1 < (int)param_1[0x2a]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0x28],param_1[0x2a] & 0x3fffffff);
  }
  param_1[0x28] = 0;
  param_1[0x2a] = 0x80000000;
  param_1[0x13] = 0;
  if (-1 < (int)param_1[0x14]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0x12],(param_1[0x14] & 0x3fffffff) * 0xe0);
  }
  param_1[0x12] = 0;
  param_1[0x14] = 0x80000000;
  hkpUnaryAction::~hkpUnaryAction();
  return;
}

// 0128C370  FUN_0128c370  size=499  [run]
void __thiscall FUN_0128c370(int param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  float *pfVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 in_XMM2 [16];
  float fVar16;
  undefined1 local_80 [16];
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  undefined4 uStack_34;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 *local_18;
  int local_14;
  
  local_2c = *(int *)(param_1 + 0x18) + 0xf0;
  local_14 = 0;
  if ('\0' < *(char *)(*(int *)(param_1 + 0x1c) + 0x20)) {
    local_50 = 0.0;
    fStack_4c = 0.0;
    fStack_48 = 0.0;
    fStack_44 = 0.0;
    local_18 = (undefined4 *)(param_3 + 0x10);
    local_60 = 3.0;
    fStack_5c = 3.0;
    fStack_58 = 3.0;
    fStack_54 = 3.0;
    local_70 = 0.5;
    fStack_6c = 0.5;
    fStack_68 = 0.5;
    fStack_64 = 0.5;
    local_24 = 0;
    local_1c = 0;
    local_20 = 0x2c;
    puVar8 = (undefined4 *)(param_3 + 0x2c);
    do {
      local_28 = *(int *)(param_1 + 0x48);
      *(undefined4 *)(local_28 + 0x70 + local_1c) = local_18[0xe];
      uVar5 = local_18[-3];
      uVar6 = local_18[-2];
      uVar7 = local_18[-1];
      local_28 = local_28 + local_1c;
      iVar3 = *(int *)(param_1 + 0x48);
      puVar1 = (undefined4 *)(iVar3 + local_1c);
      *puVar1 = local_18[-4];
      puVar1[1] = uVar5;
      puVar1[2] = uVar6;
      puVar1[3] = uVar7;
      uVar5 = local_18[1];
      uVar6 = local_18[2];
      uVar7 = local_18[3];
      puVar1 = (undefined4 *)(iVar3 + 0x10 + local_1c);
      *puVar1 = *local_18;
      puVar1[1] = uVar5;
      puVar1[2] = uVar6;
      puVar1[3] = uVar7;
      *(undefined4 *)(local_1c + 0x20 + *(int *)(param_1 + 0x48)) = local_18[4];
      *(undefined4 *)(local_1c + 0x24 + *(int *)(param_1 + 0x48)) = local_18[5];
      *(undefined4 *)(local_20 + -4 + *(int *)(param_1 + 0x48)) = puVar8[-1];
      *(undefined4 *)(local_20 + *(int *)(param_1 + 0x48)) = *puVar8;
      *(undefined4 *)(local_20 + 4 + *(int *)(param_1 + 0x48)) = puVar8[1];
      *(undefined4 *)(local_20 + 8 + *(int *)(param_1 + 0x48)) = puVar8[2];
      *(undefined4 *)(local_20 + 0xc + *(int *)(param_1 + 0x48)) = puVar8[3];
      *(undefined4 *)(local_20 + 0x10 + *(int *)(param_1 + 0x48)) = puVar8[4];
      *(undefined4 *)(local_20 + 0x14 + *(int *)(param_1 + 0x48)) = puVar8[5];
      *(undefined4 *)(local_20 + 0x18 + *(int *)(param_1 + 0x48)) = puVar8[6];
      fStack_38 = *(float *)(*(int *)(param_1 + 0xc4) + local_14 * 4) * 0.5;
      pfVar2 = (float *)(*(int *)(*(int *)(param_1 + 0x34) + 8) + 0x10 + local_24);
      local_40 = fStack_38 * *pfVar2;
      fStack_3c = fStack_38 * pfVar2[1];
      fStack_38 = fStack_38 * pfVar2[2];
      uStack_34 = 0x3f800000;
      fVar9 = fStack_38 * fStack_38 + local_40 * local_40;
      fVar10 = fStack_3c * fStack_3c + 1.0;
      fVar11 = local_40 * local_40 + fStack_38 * fStack_38;
      fVar12 = fStack_3c * fStack_3c + 1.0;
      fVar13 = fVar10 + fVar9;
      fVar9 = fVar9 + fVar10;
      fVar10 = fVar12 + fVar11;
      fVar11 = fVar11 + fVar12;
      auVar4._4_4_ = fVar9;
      auVar4._0_4_ = fVar13;
      auVar4._8_4_ = fVar10;
      auVar4._12_4_ = fVar11;
      in_XMM2 = rsqrtps(in_XMM2,auVar4);
      fVar12 = in_XMM2._0_4_;
      fVar14 = in_XMM2._4_4_;
      fVar15 = in_XMM2._8_4_;
      fVar16 = in_XMM2._12_4_;
      *(float *)(local_28 + 0xb0) =
           (float)(~-(uint)(fVar13 <= local_50) &
                  (uint)((local_60 - fVar12 * fVar13 * fVar12) * local_70 * fVar12)) * local_40;
      *(float *)(local_28 + 0xb4) =
           (float)(~-(uint)(fVar9 <= fStack_4c) &
                  (uint)((fStack_5c - fVar14 * fVar9 * fVar14) * fStack_6c * fVar14)) * fStack_3c;
      *(float *)(local_28 + 0xb8) =
           (float)(~-(uint)(fVar10 <= fStack_48) &
                  (uint)((fStack_58 - fVar15 * fVar10 * fVar15) * fStack_68 * fVar15)) * fStack_38;
      *(float *)(local_28 + 0xbc) =
           (float)(~-(uint)(fVar11 <= fStack_44) &
                  (uint)((fStack_54 - fVar16 * fVar11 * fVar16) * fStack_64 * fVar16)) * 1.0;
      iVar3 = *(int *)(param_1 + 0x1c);
      uVar5 = *(undefined4 *)(iVar3 + 0x54);
      uVar6 = *(undefined4 *)(iVar3 + 0x58);
      uVar7 = *(undefined4 *)(iVar3 + 0x5c);
      *(undefined4 *)(local_28 + 0x90) = *(undefined4 *)(iVar3 + 0x50);
      *(undefined4 *)(local_28 + 0x94) = uVar5;
      *(undefined4 *)(local_28 + 0x98) = uVar6;
      *(undefined4 *)(local_28 + 0x9c) = uVar7;
      FUN_01007460((float *)(local_28 + 0xb0),(undefined4 *)(local_28 + 0x90));
      FUN_01006f50(local_2c,local_80);
      local_18 = local_18 + 0x18;
      local_24 = local_24 + 0x30;
      local_1c = local_1c + 0xe0;
      local_20 = local_20 + 0xe0;
      local_14 = local_14 + 1;
      puVar8 = puVar8 + 0x18;
    } while (local_14 < *(char *)(*(int *)(param_1 + 0x1c) + 0x20));
  }
  return;
}

// 0128C570  FUN_0128c570  size=534  [run]
void __thiscall
FUN_0128c570(int param_1,int param_2,float param_3,float param_4,float param_5,float *param_6)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  undefined1 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar20;
  float fVar21;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar22;
  
  pfVar6 = (float *)(param_2 * 0xe0 + *(int *)(param_1 + 0x48));
  fVar8 = pfVar6[0x28];
  fVar9 = pfVar6[0x29];
  fVar10 = pfVar6[0x2a];
  fVar15 = pfVar6[0x2b];
  fVar2 = pfVar6[4];
  fVar3 = pfVar6[5];
  fVar4 = pfVar6[6];
  fVar5 = pfVar6[7];
  fVar11 = fVar3 * fVar10 - fVar4 * fVar9;
  fVar12 = fVar4 * fVar8 - fVar2 * fVar10;
  fVar13 = fVar2 * fVar9 - fVar3 * fVar8;
  fVar14 = fVar5 * fVar15 - fVar5 * fVar15;
  iVar1 = param_2 * 0x28;
  if (fVar13 * fVar13 + fVar12 * fVar12 + fVar11 * fVar11 < 1.1920929e-07) {
    fVar11 = pfVar6[0x22] * fVar9 - pfVar6[0x21] * fVar10;
    fVar12 = pfVar6[0x20] * fVar10 - pfVar6[0x22] * fVar8;
    fVar13 = pfVar6[0x21] * fVar8 - pfVar6[0x20] * fVar9;
    fVar14 = pfVar6[0x23] * fVar15 - pfVar6[0x23] * fVar15;
  }
  fVar8 = fVar11 * fVar11;
  fVar9 = fVar12 * fVar12;
  fVar10 = fVar13 * fVar13;
  fVar15 = fVar9 + fVar8 + fVar10;
  fVar16 = fVar9 + fVar8 + fVar10;
  fVar17 = fVar9 + fVar8 + fVar10;
  fVar10 = fVar9 + fVar8 + fVar10;
  auVar18._0_12_ = ZEXT812(0);
  auVar18._12_4_ = 0;
  auVar19._4_4_ = fVar16;
  auVar19._0_4_ = fVar15;
  auVar19._8_4_ = fVar17;
  auVar19._12_4_ = fVar10;
  auVar19 = rsqrtps(auVar18,auVar19);
  fVar9 = auVar19._0_4_;
  fVar20 = auVar19._4_4_;
  fVar21 = auVar19._8_4_;
  fVar22 = auVar19._12_4_;
  fVar8 = pfVar6[8];
  fVar11 = (float)(~-(uint)(fVar15 <= 0.0) & (uint)((3.0 - fVar9 * fVar15 * fVar9) * fVar9 * 0.5)) *
           fVar11;
  fVar12 = (float)(~-(uint)(fVar16 <= 0.0) & (uint)((3.0 - fVar20 * fVar16 * fVar20) * fVar20 * 0.5)
                  ) * fVar12;
  fVar13 = (float)(~-(uint)(fVar17 <= 0.0) & (uint)((3.0 - fVar21 * fVar17 * fVar21) * fVar21 * 0.5)
                  ) * fVar13;
  fVar14 = (float)(~-(uint)(fVar10 <= 0.0) & (uint)((3.0 - fVar22 * fVar10 * fVar22) * fVar22 * 0.5)
                  ) * fVar14;
  fVar16 = 1.0 / (float)(int)*(char *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x98) +
                                      (int)*(char *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x8c) +
                                                     0x24 + iVar1));
  fVar9 = pfVar6[1];
  fVar10 = pfVar6[2];
  fVar15 = pfVar6[3];
  *param_6 = fVar16 * *pfVar6 + *param_6;
  param_6[1] = fVar16 * fVar9 + param_6[1];
  param_6[2] = fVar16 * fVar10 + param_6[2];
  param_6[3] = fVar16 * fVar15 + param_6[3];
  param_6[4] = (fVar12 * fVar4 - fVar13 * fVar3) + param_6[4];
  param_6[5] = (fVar13 * fVar2 - fVar11 * fVar4) + param_6[5];
  param_6[6] = (fVar11 * fVar3 - fVar12 * fVar2) + param_6[6];
  param_6[7] = (fVar14 * fVar5 - fVar14 * fVar5) + param_6[7];
  param_6[8] = param_6[8] + fVar11;
  param_6[9] = param_6[9] + fVar12;
  param_6[10] = param_6[10] + fVar13;
  param_6[0xb] = param_6[0xb] + fVar14;
  fVar8 = fVar8 * fVar16;
  param_6[0xe] = *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x8c) + 0xc + iVar1) * fVar8 +
                 param_6[0xe];
  param_6[0xf] = *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x8c) + 0x10 + iVar1) * fVar8 +
                 param_6[0xf];
  param_6[0x10] =
       *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x8c) + 0x14 + iVar1) * fVar8 + param_6[0x10];
  param_6[0x11] = param_4 + param_6[0x11];
  param_6[0x12] = param_3 + param_6[0x12];
  if ((*(char *)(param_6 + 0x14) == '\0') && (*(char *)(param_2 + *(int *)(param_1 + 0xa0)) == '\0')
     ) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  *(undefined1 *)(param_6 + 0x14) = uVar7;
  param_6[0x13] =
       *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x8c) + 0x18 + iVar1) * fVar16 * param_5 +
       param_6[0x13];
  return;
}

// 0128C790  FUN_0128c790  size=1020  [run]
void __thiscall
FUN_0128c790(int *param_1,undefined4 param_2,int *param_3,int *param_4,int *param_5,int param_6,
            undefined4 param_7,int param_8,int param_9)

{
  undefined1 *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined1 *puVar19;
  undefined4 *puVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 in_XMM3 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  uint local_20;
  float *local_1c;
  int local_18;
  int *local_14;
  
  iVar18 = param_1[6];
  iVar16 = param_1[7];
  fVar21 = *(float *)(iVar18 + 0x1b0) * *(float *)(iVar18 + 0x1b0);
  fVar23 = *(float *)(iVar18 + 0x1b4) * *(float *)(iVar18 + 0x1b4);
  fVar26 = *(float *)(iVar18 + 0x1b8) * *(float *)(iVar18 + 0x1b8);
  fVar29 = fVar23 + fVar21 + fVar26;
  auVar33._4_4_ = fVar23 + fVar21 + fVar26;
  auVar33._0_4_ = fVar29;
  auVar33._8_4_ = fVar23 + fVar21 + fVar26;
  auVar33._12_4_ = fVar23 + fVar21 + fVar26;
  auVar33 = rsqrtps(in_XMM3,auVar33);
  fVar21 = auVar33._0_4_;
  iVar18 = 0;
  local_20 = ~-(uint)(fVar29 <= 0.0) &
             (uint)((3.0 - fVar21 * fVar29 * fVar21) * fVar21 * 0.5 * fVar29);
  local_14 = param_1;
  if ('\0' < *(char *)(iVar16 + 0x20)) {
    local_18 = 0;
    local_1c = (float *)0x0;
    do {
      iVar17 = (int)*(char *)(*(int *)(iVar16 + 0x8c) + 0x24 + (int)local_1c);
      iVar16 = *(int *)(local_14[0x12] + 0x24 + local_18);
      if ((iVar16 != 0) &&
         ((param_5[iVar17] == 0 ||
          (*(float *)(iVar16 + 0x1ac) < *(float *)(param_5[iVar17] + 0x1ac))))) {
        param_5[iVar17] = iVar16;
      }
      FUN_0128c570(iVar18,*(undefined4 *)(*param_4 + iVar18 * 4),
                   *(undefined4 *)(*param_3 + iVar18 * 4),local_20,iVar17 * 0x60 + param_6);
      iVar16 = local_14[7];
      local_1c = (float *)((int)local_1c + 0x28);
      local_18 = local_18 + 0xe0;
      iVar18 = iVar18 + 1;
    } while (iVar18 < *(char *)(iVar16 + 0x20));
  }
  *(undefined4 *)(param_6 + 0xc0) = *(undefined4 *)(local_14[7] + 0x70);
  local_18 = 0;
  if (0 < *(int *)(local_14[7] + 0x9c)) {
    local_1c = (float *)(param_6 + 0x20);
    puVar20 = (undefined4 *)(param_9 + 8);
    puVar19 = (undefined1 *)(param_8 + 1);
    do {
      fVar21 = local_1c[-4];
      fVar23 = local_1c[-3];
      fVar26 = local_1c[-2];
      fVar29 = fVar21 * fVar21;
      fVar24 = fVar23 * fVar23;
      fVar27 = fVar26 * fVar26;
      auVar34._4_4_ = fVar29;
      auVar34._0_4_ = fVar29;
      auVar34._8_4_ = fVar29;
      auVar34._12_4_ = fVar29;
      fVar30 = fVar24 + fVar29 + fVar27;
      fVar31 = fVar24 + fVar29 + fVar27;
      fVar32 = fVar24 + fVar29 + fVar27;
      fVar27 = fVar24 + fVar29 + fVar27;
      auVar2._4_4_ = fVar31;
      auVar2._0_4_ = fVar30;
      auVar2._8_4_ = fVar32;
      auVar2._12_4_ = fVar27;
      auVar33 = rsqrtps(auVar34,auVar2);
      fVar29 = auVar33._0_4_;
      fVar24 = auVar33._4_4_;
      fVar22 = auVar33._8_4_;
      fVar25 = auVar33._12_4_;
      local_1c[-4] = (float)(~-(uint)(fVar30 <= 0.0) &
                            (uint)((3.0 - fVar29 * fVar30 * fVar29) * fVar29 * 0.5)) * fVar21;
      local_1c[-3] = (float)(~-(uint)(fVar31 <= 0.0) &
                            (uint)((3.0 - fVar24 * fVar31 * fVar24) * fVar24 * 0.5)) * fVar23;
      local_1c[-2] = (float)(~-(uint)(fVar32 <= 0.0) &
                            (uint)((3.0 - fVar22 * fVar32 * fVar22) * fVar22 * 0.5)) * fVar26;
      local_1c[-1] = (float)(~-(uint)(fVar27 <= 0.0) &
                            (uint)((3.0 - fVar25 * fVar27 * fVar25) * fVar25 * 0.5)) * local_1c[-1];
      fVar21 = *local_1c;
      fVar23 = local_1c[1];
      fVar26 = local_1c[2];
      fVar29 = fVar21 * fVar21;
      fVar24 = fVar23 * fVar23;
      fVar27 = fVar26 * fVar26;
      auVar35._4_4_ = fVar29;
      auVar35._0_4_ = fVar29;
      auVar35._8_4_ = fVar29;
      auVar35._12_4_ = fVar29;
      fVar30 = fVar24 + fVar29 + fVar27;
      fVar31 = fVar24 + fVar29 + fVar27;
      fVar32 = fVar24 + fVar29 + fVar27;
      fVar27 = fVar24 + fVar29 + fVar27;
      auVar3._4_4_ = fVar31;
      auVar3._0_4_ = fVar30;
      auVar3._8_4_ = fVar32;
      auVar3._12_4_ = fVar27;
      auVar33 = rsqrtps(auVar35,auVar3);
      fVar29 = auVar33._0_4_;
      fVar24 = auVar33._4_4_;
      fVar22 = auVar33._8_4_;
      fVar25 = auVar33._12_4_;
      *local_1c = (float)(~-(uint)(fVar30 <= 0.0) &
                         (uint)((3.0 - fVar29 * fVar30 * fVar29) * fVar29 * 0.5)) * fVar21;
      local_1c[1] = (float)(~-(uint)(fVar31 <= 0.0) &
                           (uint)((3.0 - fVar24 * fVar31 * fVar24) * fVar24 * 0.5)) * fVar23;
      local_1c[2] = (float)(~-(uint)(fVar32 <= 0.0) &
                           (uint)((3.0 - fVar22 * fVar32 * fVar22) * fVar22 * 0.5)) * fVar26;
      local_1c[3] = (float)(~-(uint)(fVar27 <= 0.0) &
                           (uint)((3.0 - fVar25 * fVar27 * fVar25) * fVar25 * 0.5)) * local_1c[3];
      iVar18 = param_5[local_18];
      puVar1 = puVar19 + -1;
      local_1c[4] = (float)puVar1;
      local_1c[5] = (float)puVar1;
      if (iVar18 == 0) {
        *puVar19 = 0;
        *puVar1 = 1;
        *(undefined4 *)(puVar19 + 7) = 0;
        *(undefined4 *)(puVar19 + 0x2f) = 0;
        *(undefined4 *)(puVar19 + 0x33) = 0;
        *(undefined4 *)(puVar19 + 0x37) = 0;
        *(undefined4 *)(puVar19 + 0x3b) = 0;
        *(undefined4 *)(puVar19 + 0xf) = 0;
        *(undefined4 *)(puVar19 + 0x13) = 0;
        *(undefined4 *)(puVar19 + 0x17) = 0;
        *(undefined4 *)(puVar19 + 0x1b) = 0;
        *(undefined4 *)(puVar19 + 0x1f) = 0;
        *(undefined4 *)(puVar19 + 0x23) = 0;
        *(undefined4 *)(puVar19 + 0x27) = 0;
        *(undefined4 *)(puVar19 + 0x2b) = 0;
        *(undefined4 *)(puVar19 + 0x6f) = 0;
        *(undefined4 *)(puVar19 + 0x73) = 0;
        *(undefined4 *)(puVar19 + 0x77) = 0;
        *(undefined4 *)(puVar19 + 0x7b) = 0;
        *(undefined4 *)(puVar19 + 0x3f) = 0x3f800000;
        *(undefined4 *)(puVar19 + 0x43) = 0;
        *(undefined4 *)(puVar19 + 0x47) = 0;
        *(undefined4 *)(puVar19 + 0x4b) = 0;
        *(undefined4 *)(puVar19 + 0x4f) = 0;
        *(undefined4 *)(puVar19 + 0x53) = 0x3f800000;
        *(undefined4 *)(puVar19 + 0x57) = 0;
        *(undefined4 *)(puVar19 + 0x5b) = 0;
        *(undefined4 *)(puVar19 + 0x5f) = 0;
        *(undefined4 *)(puVar19 + 99) = 0;
        *(undefined4 *)(puVar19 + 0x67) = 0x3f800000;
        *(undefined4 *)(puVar19 + 0x6b) = 0;
      }
      else if (*(char *)(iVar18 + 0xe8) == '\x05') {
        (**(code **)(*local_14 + 0x3c))(iVar18,puVar1);
      }
      else if ((local_18 < 1) || (iVar18 != *param_5)) {
        local_20 = iVar18 + 0xe0;
        FUN_011e7330(param_7,&local_20,1,0,puVar19 + -1);
        if (*(float *)(local_14[6] + 0x1ac) * *(float *)(local_14[7] + 0x88) <
            *(float *)(local_20 + 0xcc)) {
          fVar21 = (*(float *)(local_14[6] + 0x1ac) / *(float *)(local_20 + 0xcc)) *
                   *(float *)(local_14[7] + 0x88);
          *(float *)(puVar19 + 0x2f) = fVar21 * *(float *)(puVar19 + 0x2f);
          *(float *)(puVar19 + 0x33) = fVar21 * *(float *)(puVar19 + 0x33);
          *(float *)(puVar19 + 0x37) = fVar21 * *(float *)(puVar19 + 0x37);
          *(float *)(puVar19 + 0x3b) = fVar21 * *(float *)(puVar19 + 0x3b);
        }
        fVar23 = *(float *)(local_20 + 0x60);
        fVar26 = *(float *)(local_20 + 100);
        fVar29 = *(float *)(local_20 + 0x68);
        fVar24 = *(float *)(local_20 + 0x6c);
        fVar21 = *(float *)(local_20 + 0x6c);
        fVar27 = *(float *)(local_20 + 0x50);
        fVar30 = *(float *)(local_20 + 0x54);
        fVar31 = *(float *)(local_20 + 0x58);
        fVar32 = *(float *)(local_20 + 0x5c);
        fVar22 = *(float *)(local_20 + 0xa0);
        fVar25 = *(float *)(local_20 + 0xa4);
        fVar28 = *(float *)(local_20 + 0xa8);
        *(undefined1 *)(puVar20 + -2) = puVar19[-1];
        puVar19[param_9 - param_8] = *puVar19;
        puVar20[-1] = *(undefined4 *)(puVar19 + 3);
        *puVar20 = *(undefined4 *)(puVar19 + 7);
        fVar22 = fVar22 * fVar21;
        fVar25 = fVar25 * fVar21;
        fVar28 = fVar28 * fVar21;
        uVar13 = *(undefined4 *)(puVar19 + 0x13);
        uVar14 = *(undefined4 *)(puVar19 + 0x17);
        uVar15 = *(undefined4 *)(puVar19 + 0x1b);
        puVar20[2] = *(undefined4 *)(puVar19 + 0xf);
        puVar20[3] = uVar13;
        puVar20[4] = uVar14;
        puVar20[5] = uVar15;
        uVar13 = *(undefined4 *)(puVar19 + 0x23);
        uVar14 = *(undefined4 *)(puVar19 + 0x27);
        uVar15 = *(undefined4 *)(puVar19 + 0x2b);
        puVar20[6] = *(undefined4 *)(puVar19 + 0x1f);
        puVar20[7] = uVar13;
        puVar20[8] = uVar14;
        puVar20[9] = uVar15;
        uVar13 = *(undefined4 *)(puVar19 + 0x33);
        uVar14 = *(undefined4 *)(puVar19 + 0x37);
        uVar15 = *(undefined4 *)(puVar19 + 0x3b);
        puVar20[10] = *(undefined4 *)(puVar19 + 0x2f);
        puVar20[0xb] = uVar13;
        puVar20[0xc] = uVar14;
        puVar20[0xd] = uVar15;
        uVar13 = *(undefined4 *)(puVar19 + 0x43);
        uVar14 = *(undefined4 *)(puVar19 + 0x47);
        uVar15 = *(undefined4 *)(puVar19 + 0x4b);
        puVar20[0xe] = *(undefined4 *)(puVar19 + 0x3f);
        puVar20[0xf] = uVar13;
        puVar20[0x10] = uVar14;
        puVar20[0x11] = uVar15;
        uVar13 = *(undefined4 *)(puVar19 + 0x53);
        uVar14 = *(undefined4 *)(puVar19 + 0x57);
        uVar15 = *(undefined4 *)(puVar19 + 0x5b);
        puVar20[0x12] = *(undefined4 *)(puVar19 + 0x4f);
        puVar20[0x13] = uVar13;
        puVar20[0x14] = uVar14;
        puVar20[0x15] = uVar15;
        uVar13 = *(undefined4 *)(puVar19 + 99);
        uVar14 = *(undefined4 *)(puVar19 + 0x67);
        uVar15 = *(undefined4 *)(puVar19 + 0x6b);
        puVar20[0x16] = *(undefined4 *)(puVar19 + 0x5f);
        puVar20[0x17] = uVar13;
        puVar20[0x18] = uVar14;
        puVar20[0x19] = uVar15;
        uVar13 = *(undefined4 *)(puVar19 + 0x73);
        uVar14 = *(undefined4 *)(puVar19 + 0x77);
        uVar15 = *(undefined4 *)(puVar19 + 0x7b);
        puVar20[0x1a] = *(undefined4 *)(puVar19 + 0x6f);
        puVar20[0x1b] = uVar13;
        puVar20[0x1c] = uVar14;
        puVar20[0x1d] = uVar15;
        local_1c[5] = (float)(puVar20 + -2);
        fVar4 = *(float *)(puVar19 + 0x53);
        fVar5 = *(float *)(puVar19 + 0x57);
        fVar6 = *(float *)(puVar19 + 0x5b);
        fVar7 = *(float *)(puVar19 + 0x43);
        fVar8 = *(float *)(puVar19 + 0x47);
        fVar9 = *(float *)(puVar19 + 0x4b);
        fVar10 = *(float *)(puVar19 + 99);
        fVar11 = *(float *)(puVar19 + 0x67);
        fVar12 = *(float *)(puVar19 + 0x6b);
        puVar20[6] = fVar25 * *(float *)(puVar19 + 0x4f) + fVar22 * *(float *)(puVar19 + 0x3f) +
                     fVar28 * *(float *)(puVar19 + 0x5f);
        puVar20[7] = fVar25 * fVar4 + fVar22 * fVar7 + fVar28 * fVar10;
        puVar20[8] = fVar25 * fVar5 + fVar22 * fVar8 + fVar28 * fVar11;
        puVar20[9] = fVar25 * fVar6 + fVar22 * fVar9 + fVar28 * fVar12;
        puVar20[2] = (fVar23 - fVar27) * fVar21;
        puVar20[3] = (fVar26 - fVar30) * fVar21;
        puVar20[4] = (fVar29 - fVar31) * fVar21;
        puVar20[5] = (fVar24 - fVar32) * fVar21;
      }
      else {
        local_1c[4] = *(float *)(param_6 + 0x30);
        local_1c[5] = *(float *)(param_6 + 0x34);
      }
      local_18 = local_18 + 1;
      local_1c = local_1c + 0x18;
      puVar19 = puVar19 + 0x80;
      puVar20 = puVar20 + 0x20;
    } while (local_18 < *(int *)(local_14[7] + 0x9c));
  }
  return;
}

// 0128CB90  FUN_0128cb90  size=554  [run]
void __thiscall
FUN_0128cb90(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            int param_6)

{
  undefined8 uVar1;
  LPVOID pvVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 local_430 [256];
  undefined1 local_330 [256];
  undefined1 local_230 [32];
  undefined4 local_210 [44];
  undefined1 local_160 [256];
  undefined1 local_60 [32];
  undefined1 local_40 [36];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  pvVar2 = TlsGetValue(DAT_01f8fc54);
  puVar3 = *(undefined4 **)((int)pvVar2 + 4);
  if (puVar3 < *(undefined4 **)((int)pvVar2 + 0xc)) {
    *puVar3 = "TtSimulateVehicle";
    uVar1 = rdtsc();
    puVar3[1] = (int)uVar1;
    *(undefined4 **)((int)pvVar2 + 4) = puVar3 + 3;
  }
  puVar3 = local_210;
  iVar4 = 2;
  do {
    puVar3[-8] = 0;
    puVar3[-7] = 0;
    puVar3[-6] = 0;
    puVar3[-5] = 0;
    puVar3[-4] = 0;
    puVar3[-3] = 0;
    puVar3[-2] = 0;
    puVar3[-1] = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    *(undefined1 *)(puVar3 + 0xc) = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[0xb] = 0;
    puVar3 = puVar3 + 0x18;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  local_14 = *(undefined4 *)(param_2 + 8);
  local_1c = 0;
  local_18 = 0;
  FUN_0128c790(local_14,param_4,param_5,&local_1c,local_230,param_2,local_330,local_430);
  FUN_0128a820(param_2,local_230);
  uVar5 = local_14;
  FUN_0128b050(param_3,local_230,local_14);
  FUN_0128bbc0(uVar5,local_230,*(undefined4 *)(param_1 + 0x44));
  FUN_0128b7c0(uVar5,param_4,&local_1c,local_230,param_6 + 0x70);
  FUN_0128b190(param_2,&local_1c,local_230,local_40,local_60);
  FUN_0128a950(param_2,local_160,*(int *)(param_1 + 0x18) + 0xe0);
  FUN_0128a790(local_14,local_160);
  FUN_0128a7e0(param_2,local_230);
  FUN_0128ac50(local_160,param_6);
  FUN_0128aca0(local_14,local_230,&local_1c,param_6,local_40,local_60);
  FUN_0128ae80(local_14,&local_1c,local_230);
  pvVar2 = TlsGetValue(DAT_01f8fc54);
  puVar3 = *(undefined4 **)((int)pvVar2 + 4);
  if (puVar3 < *(undefined4 **)((int)pvVar2 + 0xc)) {
    *puVar3 = &DAT_0164b09c;
    uVar1 = rdtsc();
    puVar3[1] = (int)uVar1;
    *(undefined4 **)((int)pvVar2 + 4) = puVar3 + 3;
  }
  return;
}

// 0128CDC0  hkpVehicleInstance::vf1C  size=217  [run]
int __thiscall hkpVehicleInstance::vf1C(int param_1,undefined4 *param_2,undefined4 param_3)

{
  LPVOID pvVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = *(undefined4 *)*param_2;
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0xd8);
  *(undefined2 *)(iVar2 + 4) = 0xd8;
  iVar2 = hkpVehicleInstance(uVar4);
  FUN_0128e070(param_1);
  *(undefined4 *)(iVar2 + 8) = 0;
  *(undefined4 *)(iVar2 + 0xc) = 0;
  *(undefined4 *)(iVar2 + 0x18) = uVar4;
  iVar3 = (**(code **)(**(int **)(param_1 + 0x3c) + 0x1c))(uVar4,param_3);
  *(int *)(iVar2 + 0x3c) = iVar3;
  *(undefined1 *)(iVar3 + 8) = 1;
  uVar4 = (**(code **)(**(int **)(param_1 + 0x9c) + 0xc))();
  *(undefined4 *)(iVar2 + 0x9c) = uVar4;
  FUN_01006000();
  FUN_01006000();
  FUN_01006000();
  FUN_01006000();
  FUN_01006000();
  FUN_01006000();
  FUN_01006000();
  FUN_01006000();
  FUN_01006000();
  if (*(int *)(param_1 + 0x40) != 0) {
    FUN_01006000();
  }
  return iVar2;
}

// 0128CEA0  FUN_0128cea0  size=330  [run]
void __thiscall FUN_0128cea0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 local_98;
  undefined4 local_94;
  undefined1 *local_90;
  int local_8c;
  int local_88;
  undefined1 local_84 [128];
  
  local_98 = *(undefined4 *)(param_1 + 0xbc);
  iVar2 = *(int *)(param_1 + 200);
  local_90 = local_84;
  local_94 = *(undefined4 *)(param_1 + 0xc0);
  local_8c = 0;
  local_88 = -0x7fffffe0;
  if (0x20 < iVar2) {
    iVar1 = 0x40;
    if (0x3f < iVar2) {
      iVar1 = iVar2;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,&local_90,iVar1,4);
  }
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 200)) {
    do {
      *(undefined4 *)(local_90 + iVar1 * 4) = *(undefined4 *)(*(int *)(param_1 + 0xc4) + iVar1 * 4);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 200));
  }
  local_8c = iVar2;
  (**(code **)(**(int **)(param_1 + 0x24) + 0xc))(param_2,param_1,param_3,&local_98);
  iVar2 = 0;
  *(undefined4 *)(param_1 + 0xbc) = local_98;
  *(undefined4 *)(param_1 + 0xc0) = local_94;
  if (0 < *(int *)(param_1 + 200)) {
    do {
      *(undefined4 *)(*(int *)(param_1 + 0xc4) + iVar2 * 4) = *(undefined4 *)(local_90 + iVar2 * 4);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 200));
  }
  local_8c = 0;
  if (-1 < local_88) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_90,local_88 * 4);
  }
  return;
}

// 0128D000  FUN_0128d000  size=555  [run]
void __thiscall
FUN_0128d000(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            int *param_6)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  LPVOID pvVar8;
  int iVar9;
  float *pfVar10;
  uint uVar11;
  undefined1 *local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined1 local_dc [128];
  undefined1 *local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [36];
  undefined1 local_2c [16];
  undefined1 local_1c [8];
  int local_14;
  undefined4 local_8;
  
  pvVar8 = TlsGetValue(DAT_01f8fc54);
  puVar3 = *(undefined4 **)((int)pvVar8 + 4);
  if (puVar3 < *(undefined4 **)((int)pvVar8 + 0xc)) {
    *puVar3 = "TtUpdateComponents";
    uVar6 = rdtsc();
    local_8 = (undefined4)uVar6;
    puVar3[1] = local_8;
    *(undefined4 **)((int)pvVar8 + 4) = puVar3 + 3;
  }
  local_e8 = local_dc;
  local_e0 = 0x80000020;
  local_54 = 0x80000020;
  local_5c = local_50;
  local_e4 = 0;
  local_58 = 0;
  cVar2 = *(char *)(*(int *)(param_1 + 0x1c) + 0x20);
  pvVar8 = TlsGetValue(DAT_01f8fc4c);
  local_14 = *(int *)((int)pvVar8 + 0xc);
  uVar11 = cVar2 * 4 + 0x7fU & 0xffffff80;
  if ((*(int *)((int)pvVar8 + 8) < (int)uVar11) ||
     (*(uint *)((int)pvVar8 + 0x10) < local_14 + uVar11)) {
    local_14 = FUN_0100b780(uVar11);
  }
  else {
    *(uint *)((int)pvVar8 + 0xc) = local_14 + uVar11;
  }
  uVar1 = *(undefined4 *)(param_2 + 8);
  FUN_0128c370(uVar1,param_3);
  FUN_0128a580(uVar1,local_2c);
  FUN_0128cea0(uVar1,local_2c);
  FUN_0128a5d0(uVar1,local_1c);
  FUN_0128a650(uVar1,local_2c,local_1c);
  FUN_0128bf10(uVar1,local_2c,&local_e8);
  FUN_0128a760(uVar1,param_3,param_5);
  FUN_0128a6c0(uVar1,param_4);
  iVar7 = local_14;
  iVar4 = *(int *)(param_1 + 0x1c);
  iVar9 = 0;
  if ('\0' < *(char *)(iVar4 + 0x20)) {
    iVar5 = *param_6;
    pfVar10 = *(float **)(iVar4 + 0x8c);
    do {
      *(float *)(iVar5 + iVar9 * 4) =
           (*(float *)(local_e8 + iVar9 * 4) + *(float *)(local_14 + iVar9 * 4)) / *pfVar10;
      iVar9 = iVar9 + 1;
      pfVar10 = pfVar10 + 10;
    } while (iVar9 < *(char *)(iVar4 + 0x20));
  }
  cVar2 = *(char *)(iVar4 + 0x20);
  pvVar8 = TlsGetValue(DAT_01f8fc4c);
  uVar11 = cVar2 * 4 + 0x7fU & 0xffffff80;
  if (((*(int *)((int)pvVar8 + 8) < (int)uVar11) || (uVar11 + iVar7 != *(int *)((int)pvVar8 + 0xc)))
     || (*(int *)((int)pvVar8 + 0x14) == iVar7)) {
    FUN_0100b9b0(iVar7,uVar11);
  }
  else {
    *(int *)((int)pvVar8 + 0xc) = iVar7;
  }
  pvVar8 = TlsGetValue(DAT_01f8fc54);
  puVar3 = *(undefined4 **)((int)pvVar8 + 4);
  if (puVar3 < *(undefined4 **)((int)pvVar8 + 0xc)) {
    *puVar3 = &DAT_0164b09c;
    uVar6 = rdtsc();
    puVar3[1] = (int)uVar6;
    *(undefined4 **)((int)pvVar8 + 4) = puVar3 + 3;
  }
  FUN_0128e530();
  return;
}

// 0128D230  FUN_0128d230  size=344  [run]
void __thiscall FUN_0128d230(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  LPVOID pvVar3;
  undefined1 *local_e0;
  int local_dc;
  undefined1 *local_d8;
  undefined1 local_d4 [68];
  undefined1 local_90 [40];
  undefined1 *local_68;
  int local_64;
  undefined1 *local_60;
  undefined1 local_5c [72];
  undefined4 local_14;
  
  pvVar3 = TlsGetValue(DAT_01f8fc54);
  puVar1 = *(undefined4 **)((int)pvVar3 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar3 + 0xc)) {
    *puVar1 = "TtDoVehicle";
    uVar2 = rdtsc();
    local_14 = (undefined4)uVar2;
    puVar1[1] = local_14;
    *(undefined4 **)((int)pvVar3 + 4) = puVar1 + 3;
  }
  local_dc = (int)*(char *)(*(int *)(param_1 + 0x1c) + 0x20);
  local_e0 = local_d4;
  local_d8 = &DAT_80000010;
  local_64 = (int)*(char *)(*(int *)(param_1 + 0x1c) + 0x20);
  local_60 = &DAT_80000010;
  local_68 = local_5c;
  FUN_0128d000(param_2,param_3,local_90,&local_e0,&local_68);
  FUN_0128cb90(param_2,local_90,&local_e0,&local_68,param_4);
  pvVar3 = TlsGetValue(DAT_01f8fc54);
  puVar1 = *(undefined4 **)((int)pvVar3 + 4);
  if (puVar1 < *(undefined4 **)((int)pvVar3 + 0xc)) {
    *puVar1 = &DAT_0164b09c;
    uVar2 = rdtsc();
    local_14 = (undefined4)uVar2;
    puVar1[1] = local_14;
    *(undefined4 **)((int)pvVar3 + 4) = puVar1 + 3;
  }
  local_64 = 0;
  if (-1 < (int)local_60) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_68,(int)local_60 * 4);
  }
  local_68 = (undefined1 *)0x0;
  local_60 = (undefined1 *)0x80000000;
  local_dc = 0;
  if (-1 < (int)local_d8) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_e0,(int)local_d8 * 4);
  }
  return;
}

// 0128D390  FUN_0128d390  size=310  [run]
void __thiscall FUN_0128d390(int param_1,int param_2)

{
  int iVar1;
  LPVOID pvVar2;
  uint uVar3;
  uint uVar4;
  undefined1 local_2a0 [632];
  int local_28;
  uint local_20;
  int local_14;
  
  FUN_0128ab10();
  uVar4 = (uint)*(char *)(*(int *)(param_1 + 0x1c) + 0x20);
  if (uVar4 == 0) {
    local_28 = 0;
  }
  else {
    pvVar2 = TlsGetValue(DAT_01f8fc4c);
    local_28 = *(int *)((int)pvVar2 + 0xc);
    uVar3 = uVar4 * 0x60 + 0x7f & 0xffffff80;
    local_14 = local_28;
    if ((*(int *)((int)pvVar2 + 8) < (int)uVar3) ||
       (*(uint *)((int)pvVar2 + 0x10) < local_28 + uVar3)) {
      local_28 = FUN_0100b780(uVar3);
    }
    else {
      *(uint *)((int)pvVar2 + 0xc) = local_28 + uVar3;
    }
  }
  local_20 = uVar4 | 0x80000000;
  (**(code **)(**(int **)(param_1 + 0x3c) + 0x10))(*(undefined4 *)(param_2 + 8),param_1,local_28);
  FUN_0128d230(param_2,local_28,local_2a0);
  FUN_0128b340(local_2a0);
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  iVar1 = local_28;
  uVar4 = uVar4 * 0x60 + 0x7f & 0xffffff80;
  if (((*(int *)((int)pvVar2 + 8) < (int)uVar4) || (uVar4 + local_28 != *(int *)((int)pvVar2 + 0xc))
      ) || (*(int *)((int)pvVar2 + 0x14) == local_28)) {
    FUN_0100b9b0(local_28,uVar4);
  }
  else {
    *(int *)((int)pvVar2 + 0xc) = local_28;
  }
  if (-1 < (int)local_20) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(iVar1,(local_20 & 0x3fffffff) * 0x60);
  }
  return;
}

// 0128D4D0  hkpVehicleInstance::vf0C  size=9  [run]
void hkpVehicleInstance::vf0C(void)

{
  FUN_0128d390();
  return;
}

// 0128D500  FUN_0128d500  size=46  [run]
int __thiscall FUN_0128d500(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  FUN_010067a0(param_2 + 0x14);
  return param_1;
}

// 0128D530  FUN_0128d530  size=20  [run]
void __thiscall FUN_0128d530(int *param_1,undefined4 param_2)

{
  *(bool *)param_2 = param_1[3] != *param_1;
  return;
}

// 0128D570  FUN_0128d570  size=18  [run]
int __thiscall FUN_0128d570(int *param_1,int param_2)

{
  return param_2 * 0xe0 + *param_1;
}

// 0128D5A0  FUN_0128d5a0  size=18  [run]
int __thiscall FUN_0128d5a0(int *param_1,int param_2)

{
  return param_2 * 0x30 + *param_1;
}

// 0128D5C0  FUN_0128d5c0  size=12  [run]
int __thiscall FUN_0128d5c0(int *param_1,int param_2)

{
  return *param_1 + param_2;
}

// 0128D630  FUN_0128d630  size=32  [run]
void __thiscall FUN_0128d630(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 | 0x80000000;
  return;
}

// 0128D660  FUN_0128d660  size=52  [run]
void FUN_0128d660(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (0 < param_2) {
    param_3 = param_3 - (int)param_1;
    do {
      if (param_1 != (undefined4 *)0x0) {
        puVar2 = (undefined4 *)(param_3 + (int)param_1);
        puVar3 = param_1;
        for (iVar1 = 0x38; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar3 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar3 = puVar3 + 1;
        }
      }
      param_1 = param_1 + 0x38;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 0128D6A0  FUN_0128d6a0  size=31  [run]
void FUN_0128d6a0(undefined1 *param_1,int param_2,int param_3)

{
  if (0 < param_3) {
    param_2 = param_2 - (int)param_1;
    do {
      *param_1 = param_1[param_2];
      param_1 = param_1 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// 0128D6D0  FUN_0128d6d0  size=28  [run]
void __thiscall FUN_0128d6d0(int *param_1,undefined4 param_2,int param_3)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_3 * 0x60);
  return;
}

// 0128D7C0  FUN_0128d7c0  size=54  [run]
int __thiscall FUN_0128d7c0(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  FUN_010067a0(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  return param_1;
}

// 0128D850  FUN_0128d850  size=64  [run]
void FUN_0128d850(int param_1)

{
  uint uVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  uVar3 = param_1 * 0x60 + 0x7fU & 0xffffff80;
  uVar1 = *(int *)((int)pvVar2 + 0xc) + uVar3;
  if (((int)uVar3 <= *(int *)((int)pvVar2 + 8)) && (uVar1 <= *(uint *)((int)pvVar2 + 0x10))) {
    *(uint *)((int)pvVar2 + 0xc) = uVar1;
    return;
  }
  FUN_0100b780(uVar3);
  return;
}

// 0128D890  FUN_0128d890  size=75  [run]
void FUN_0128d890(int param_1,int param_2)

{
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  uVar2 = param_2 * 0x60 + 0x7fU & 0xffffff80;
  if ((((int)uVar2 <= *(int *)((int)pvVar1 + 8)) && (uVar2 + param_1 == *(int *)((int)pvVar1 + 0xc))
      ) && (*(int *)((int)pvVar1 + 0x14) != param_1)) {
    *(int *)((int)pvVar1 + 0xc) = param_1;
    return;
  }
  FUN_0100b9b0(param_1,uVar2);
  return;
}

// 0128D8E0  FUN_0128d8e0  size=32  [run]
void __thiscall FUN_0128d8e0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4 | 0x80000000;
  return;
}

// 0128D900  FUN_0128d900  size=55  [run]
undefined4 __thiscall FUN_0128d900(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    uVar3 = FUN_0100a210(param_2,param_1,iVar2,0xe0);
    return uVar3;
  }
  return 0;
}

// 0128D940  FUN_0128d940  size=113  [run]
undefined4 * __thiscall FUN_0128d940(undefined4 *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  
  piVar1 = param_3;
  uVar2 = param_1[2] & 0x3fffffff;
  if ((int)uVar2 < param_3[1]) {
    if (-1 < (int)param_1[2]) {
      (**(code **)(*param_2 + 0x10))(*param_1,uVar2);
    }
    param_3 = (int *)piVar1[1];
    uVar3 = (**(code **)(*param_2 + 0xc))(&param_3);
    *param_1 = uVar3;
    param_1[2] = param_3;
  }
  iVar6 = piVar1[1];
  puVar4 = (undefined1 *)*param_1;
  param_1[1] = iVar6;
  if (0 < iVar6) {
    iVar5 = *piVar1 - (int)puVar4;
    do {
      *puVar4 = puVar4[iVar5];
      puVar4 = puVar4 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return param_1;
}

// 0128D9C0  FUN_0128d9c0  size=63  [run]
void __thiscall FUN_0128d9c0(undefined4 *param_1,int *param_2)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(*param_2 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x60);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0128DA00  FUN_0128da00  size=248  [run]
void __thiscall FUN_0128da00(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  uVar1 = param_2[0x15];
  uVar2 = param_2[0x16];
  uVar3 = param_2[0x17];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = uVar1;
  param_1[0x16] = uVar2;
  param_1[0x17] = uVar3;
  uVar1 = param_2[0x19];
  uVar2 = param_2[0x1a];
  uVar3 = param_2[0x1b];
  param_1[0x18] = param_2[0x18];
  param_1[0x19] = uVar1;
  param_1[0x1a] = uVar2;
  param_1[0x1b] = uVar3;
  param_1[0x1c] = param_2[0x1c];
  uVar1 = param_2[0x21];
  uVar2 = param_2[0x22];
  uVar3 = param_2[0x23];
  param_1[0x20] = param_2[0x20];
  param_1[0x21] = uVar1;
  param_1[0x22] = uVar2;
  param_1[0x23] = uVar3;
  uVar1 = param_2[0x25];
  uVar2 = param_2[0x26];
  uVar3 = param_2[0x27];
  param_1[0x24] = param_2[0x24];
  param_1[0x25] = uVar1;
  param_1[0x26] = uVar2;
  param_1[0x27] = uVar3;
  uVar1 = param_2[0x29];
  uVar2 = param_2[0x2a];
  uVar3 = param_2[0x2b];
  param_1[0x28] = param_2[0x28];
  param_1[0x29] = uVar1;
  param_1[0x2a] = uVar2;
  param_1[0x2b] = uVar3;
  uVar1 = param_2[0x2d];
  uVar2 = param_2[0x2e];
  uVar3 = param_2[0x2f];
  param_1[0x2c] = param_2[0x2c];
  param_1[0x2d] = uVar1;
  param_1[0x2e] = uVar2;
  param_1[0x2f] = uVar3;
  param_1[0x30] = param_2[0x30];
  param_1[0x31] = param_2[0x31];
  param_1[0x32] = param_2[0x32];
  param_1[0x33] = param_2[0x33];
  param_1[0x34] = param_2[0x34];
  param_1[0x35] = param_2[0x35];
  param_1[0x36] = param_2[0x36];
  return;
}

// 0128DB00  FUN_0128db00  size=37  [run]
void FUN_0128db00(undefined4 param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  *(short *)(iVar2 + 4) = (short)param_1;
  return;
}

// 0128DB40  FUN_0128db40  size=58  [run]
void __thiscall FUN_0128db40(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    FUN_0100a210(param_2,param_1,iVar2,0xe0);
  }
  *(int *)(param_1 + 4) = param_3;
  return;
}

// 0128DB80  FUN_0128db80  size=117  [run]
undefined4 * __thiscall FUN_0128db80(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  
  piVar1 = param_2;
  uVar2 = param_1[2] & 0x3fffffff;
  if ((int)uVar2 < param_2[1]) {
    if (-1 < (int)param_1[2]) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,uVar2);
    }
    param_2 = (int *)piVar1[1];
    uVar3 = (**(code **)(PTR_vftable_018e9b94 + 0xc))(&param_2);
    *param_1 = uVar3;
    param_1[2] = param_2;
  }
  iVar6 = piVar1[1];
  puVar4 = (undefined1 *)*param_1;
  param_1[1] = iVar6;
  if (0 < iVar6) {
    iVar5 = *piVar1 - (int)puVar4;
    do {
      *puVar4 = puVar4[iVar5];
      puVar4 = puVar4 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return param_1;
}

// 0128DC00  FUN_0128dc00  size=63  [run]
void __fastcall FUN_0128dc00(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x60);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0128DC40  FUN_0128dc40  size=242  [run]
void FUN_0128dc40(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  if (0 < param_3) {
    puVar5 = (undefined4 *)(param_1 + 0x10);
    puVar6 = (undefined4 *)(param_2 + 0x24);
    do {
      uVar2 = puVar6[-8];
      uVar3 = puVar6[-7];
      uVar4 = puVar6[-6];
      puVar5[-4] = puVar6[-9];
      puVar5[-3] = uVar2;
      puVar5[-2] = uVar3;
      puVar5[-1] = uVar4;
      puVar1 = (undefined4 *)((int)puVar5 + (param_2 - param_1));
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *puVar5 = *puVar1;
      puVar5[1] = uVar2;
      puVar5[2] = uVar3;
      puVar5[3] = uVar4;
      puVar5[4] = puVar6[-1];
      puVar5[5] = *puVar6;
      puVar5[6] = puVar6[1];
      puVar5[7] = puVar6[2];
      puVar5[8] = puVar6[3];
      puVar5[9] = puVar6[4];
      puVar5[10] = puVar6[5];
      puVar5[0xb] = puVar6[6];
      puVar5[0xc] = puVar6[7];
      puVar5[0xd] = puVar6[8];
      uVar2 = puVar6[0xc];
      uVar3 = puVar6[0xd];
      uVar4 = puVar6[0xe];
      puVar5[0x10] = puVar6[0xb];
      puVar5[0x11] = uVar2;
      puVar5[0x12] = uVar3;
      puVar5[0x13] = uVar4;
      uVar2 = puVar6[0x10];
      uVar3 = puVar6[0x11];
      uVar4 = puVar6[0x12];
      puVar5[0x14] = puVar6[0xf];
      puVar5[0x15] = uVar2;
      puVar5[0x16] = uVar3;
      puVar5[0x17] = uVar4;
      puVar5[0x18] = puVar6[0x13];
      uVar2 = puVar6[0x18];
      uVar3 = puVar6[0x19];
      uVar4 = puVar6[0x1a];
      puVar5[0x1c] = puVar6[0x17];
      puVar5[0x1d] = uVar2;
      puVar5[0x1e] = uVar3;
      puVar5[0x1f] = uVar4;
      uVar2 = puVar6[0x1c];
      uVar3 = puVar6[0x1d];
      uVar4 = puVar6[0x1e];
      puVar5[0x20] = puVar6[0x1b];
      puVar5[0x21] = uVar2;
      puVar5[0x22] = uVar3;
      puVar5[0x23] = uVar4;
      uVar2 = puVar6[0x20];
      uVar3 = puVar6[0x21];
      uVar4 = puVar6[0x22];
      puVar5[0x24] = puVar6[0x1f];
      puVar5[0x25] = uVar2;
      puVar5[0x26] = uVar3;
      puVar5[0x27] = uVar4;
      uVar2 = puVar6[0x24];
      uVar3 = puVar6[0x25];
      uVar4 = puVar6[0x26];
      puVar5[0x28] = puVar6[0x23];
      puVar5[0x29] = uVar2;
      puVar5[0x2a] = uVar3;
      puVar5[0x2b] = uVar4;
      puVar5[0x2c] = puVar6[0x27];
      param_3 = param_3 + -1;
      puVar5[0x2d] = puVar6[0x28];
      puVar5[0x2e] = puVar6[0x29];
      puVar5[0x2f] = puVar6[0x2a];
      puVar5[0x30] = puVar6[0x2b];
      puVar5[0x31] = puVar6[0x2c];
      puVar5[0x32] = puVar6[0x2d];
      puVar5 = puVar5 + 0x38;
      puVar6 = puVar6 + 0x38;
    } while (param_3 != 0);
  }
  return;
}

// 0128DD40  FUN_0128dd40  size=59  [run]
void __thiscall FUN_0128dd40(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_2) {
      iVar2 = param_2;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,0xe0);
  }
  *(int *)(param_1 + 4) = param_2;
  return;
}

// 0128DD80  FUN_0128dd80  size=63  [run]
void __fastcall FUN_0128dd80(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffff) * 0x60);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0128DDC0  FUN_0128ddc0  size=199  [run]
int * __thiscall FUN_0128ddc0(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  
  iVar1 = param_3[1];
  iVar3 = param_1[1];
  if (iVar1 <= param_1[1]) {
    iVar3 = iVar1;
  }
  if ((int)(param_1[2] & 0x3fffffffU) < iVar1) {
    iVar4 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar4 <= iVar1) {
      iVar4 = iVar1;
    }
    FUN_0100a210(param_2,param_1,iVar4,0xe0);
  }
  iVar4 = *param_1;
  if (0 < iVar3) {
    iVar6 = *param_3 - iVar4;
    param_2 = iVar3;
    do {
      FUN_0128da00(iVar6 + iVar4);
      iVar4 = iVar4 + 0xe0;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  puVar2 = (undefined4 *)(*param_1 + iVar3 * 0xe0);
  iVar4 = iVar1 - iVar3;
  if (0 < iVar4) {
    iVar3 = (*param_3 + iVar3 * 0xe0) - (int)puVar2;
    do {
      if (puVar2 != (undefined4 *)0x0) {
        puVar5 = (undefined4 *)(iVar3 + (int)puVar2);
        puVar7 = puVar2;
        for (iVar6 = 0x38; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
      }
      puVar2 = puVar2 + 0x38;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  param_1[1] = iVar1;
  return param_1;
}

// 0128DE90  FUN_0128de90  size=110  [run]
int * __thiscall FUN_0128de90(int *param_1,uint param_2)

{
  int iVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  iVar1 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = -0x80000000;
  param_1[4] = param_2;
  if (param_2 != 0) {
    pvVar2 = TlsGetValue(DAT_01f8fc4c);
    iVar1 = *(int *)((int)pvVar2 + 0xc);
    uVar3 = param_2 * 0x60 + 0x7f & 0xffffff80;
    if ((*(int *)((int)pvVar2 + 8) < (int)uVar3) || (*(uint *)((int)pvVar2 + 0x10) < iVar1 + uVar3))
    {
      iVar1 = FUN_0100b780(uVar3);
    }
    else {
      *(uint *)((int)pvVar2 + 0xc) = iVar1 + uVar3;
    }
  }
  param_1[2] = param_2 | 0x80000000;
  *param_1 = iVar1;
  param_1[3] = iVar1;
  return param_1;
}

// 0128DF00  FUN_0128df00  size=147  [run]
void __fastcall FUN_0128df00(int *param_1)

{
  int iVar1;
  int iVar2;
  LPVOID pvVar3;
  uint uVar4;
  
  iVar1 = param_1[3];
  if (iVar1 == *param_1) {
    param_1[1] = 0;
  }
  iVar2 = param_1[4];
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  uVar4 = iVar2 * 0x60 + 0x7fU & 0xffffff80;
  if (((*(int *)((int)pvVar3 + 8) < (int)uVar4) || (uVar4 + iVar1 != *(int *)((int)pvVar3 + 0xc)))
     || (*(int *)((int)pvVar3 + 0x14) == iVar1)) {
    FUN_0100b9b0(iVar1,uVar4);
  }
  else {
    *(int *)((int)pvVar3 + 0xc) = iVar1;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,(param_1[2] & 0x3fffffffU) * 0x60);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 0128DFA0  FUN_0128dfa0  size=202  [run]
int * __thiscall FUN_0128dfa0(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int local_8;
  
  iVar1 = param_2[1];
  iVar3 = param_1[1];
  if (iVar1 <= param_1[1]) {
    iVar3 = iVar1;
  }
  if ((int)(param_1[2] & 0x3fffffffU) < iVar1) {
    iVar4 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar4 <= iVar1) {
      iVar4 = iVar1;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar4,0xe0);
  }
  iVar4 = *param_1;
  if (0 < iVar3) {
    iVar6 = *param_2 - iVar4;
    local_8 = iVar3;
    do {
      FUN_0128da00(iVar6 + iVar4);
      iVar4 = iVar4 + 0xe0;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  puVar2 = (undefined4 *)(*param_1 + iVar3 * 0xe0);
  iVar4 = iVar1 - iVar3;
  if (0 < iVar4) {
    iVar3 = (*param_2 + iVar3 * 0xe0) - (int)puVar2;
    do {
      if (puVar2 != (undefined4 *)0x0) {
        puVar5 = (undefined4 *)(iVar3 + (int)puVar2);
        puVar7 = puVar2;
        for (iVar6 = 0x38; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
      }
      puVar2 = puVar2 + 0x38;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  param_1[1] = iVar1;
  return param_1;
}

// 0128E070  FUN_0128e070  size=868  [run]
int __thiscall FUN_0128e070(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  int local_8;
  
  iVar2 = param_2;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  FUN_010067a0(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(iVar2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(iVar2 + 0x1c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(iVar2 + 0x20);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(iVar2 + 0x24);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(iVar2 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(iVar2 + 0x2c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(iVar2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(iVar2 + 0x34);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(iVar2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(iVar2 + 0x3c);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(iVar2 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(iVar2 + 0x44);
  iVar8 = *(int *)(iVar2 + 0x4c);
  param_2 = *(int *)(param_1 + 0x4c);
  if (iVar8 <= *(int *)(param_1 + 0x4c)) {
    param_2 = iVar8;
  }
  uVar3 = *(uint *)(param_1 + 0x50) & 0x3fffffff;
  if ((int)uVar3 < iVar8) {
    iVar11 = uVar3 * 2;
    iVar4 = iVar8;
    if (iVar8 < iVar11) {
      iVar4 = iVar11;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,(int *)(param_1 + 0x48),iVar4,0xe0);
  }
  iVar11 = *(int *)(param_1 + 0x48);
  if (0 < param_2) {
    iVar4 = *(int *)(iVar2 + 0x48) - iVar11;
    local_8 = param_2;
    do {
      FUN_0128da00(iVar4 + iVar11);
      iVar11 = iVar11 + 0xe0;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  puVar7 = (undefined4 *)(*(int *)(param_1 + 0x48) + param_2 * 0xe0);
  iVar11 = iVar8 - param_2;
  if (0 < iVar11) {
    param_2 = (*(int *)(iVar2 + 0x48) + param_2 * 0xe0) - (int)puVar7;
    do {
      if (puVar7 != (undefined4 *)0x0) {
        puVar9 = (undefined4 *)(param_2 + (int)puVar7);
        puVar12 = puVar7;
        for (iVar4 = 0x38; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar12 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar12 = puVar12 + 1;
        }
      }
      puVar7 = puVar7 + 0x38;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  *(int *)(param_1 + 0x4c) = iVar8;
  puVar7 = (undefined4 *)(iVar2 + 0x54);
  puVar9 = (undefined4 *)(param_1 + 0x54);
  for (iVar8 = 0x12; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(iVar2 + 0x9c);
  uVar3 = *(uint *)(param_1 + 0xa8) & 0x3fffffff;
  if ((int)uVar3 < *(int *)(iVar2 + 0xa4)) {
    if (-1 < (int)*(uint *)(param_1 + 0xa8)) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(*(undefined4 *)(param_1 + 0xa0),uVar3);
    }
    param_2 = *(int *)(iVar2 + 0xa4);
    uVar5 = (**(code **)(PTR_vftable_018e9b94 + 0xc))(&param_2);
    *(undefined4 *)(param_1 + 0xa0) = uVar5;
    *(int *)(param_1 + 0xa8) = param_2;
  }
  iVar8 = *(int *)(iVar2 + 0xa4);
  puVar6 = *(undefined1 **)(param_1 + 0xa0);
  *(int *)(param_1 + 0xa4) = iVar8;
  if (0 < iVar8) {
    iVar11 = *(int *)(iVar2 + 0xa0) - (int)puVar6;
    do {
      *puVar6 = puVar6[iVar11];
      puVar6 = puVar6 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(iVar2 + 0xac);
  *(undefined1 *)(param_1 + 0xb0) = *(undefined1 *)(iVar2 + 0xb0);
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(iVar2 + 0xb4);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(iVar2 + 0xb8);
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(iVar2 + 0xbc);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(iVar2 + 0xc0);
  uVar3 = *(uint *)(param_1 + 0xcc);
  if ((int)(uVar3 & 0x3fffffff) < *(int *)(iVar2 + 200)) {
    if (-1 < (int)uVar3) {
      (**(code **)(PTR_vftable_018e9b94 + 0x10))(*(undefined4 *)(param_1 + 0xc4),uVar3 * 4);
    }
    param_2 = *(int *)(iVar2 + 200) * 4;
    uVar5 = (**(code **)(PTR_vftable_018e9b94 + 0xc))(&param_2);
    *(undefined4 *)(param_1 + 0xc4) = uVar5;
    *(int *)(param_1 + 0xcc) = (int)(param_2 + (param_2 >> 0x1f & 3U)) >> 2;
  }
  iVar11 = *(int *)(iVar2 + 200);
  iVar4 = *(int *)(param_1 + 0xc4);
  *(int *)(param_1 + 200) = iVar11;
  iVar1 = *(int *)(iVar2 + 0xc4);
  iVar8 = 0;
  if (3 < iVar11) {
    iVar10 = (iVar11 - 4U >> 2) + 1;
    iVar8 = iVar10 * 4;
    puVar7 = (undefined4 *)(iVar4 + 4);
    puVar9 = (undefined4 *)(iVar1 + 0xc);
    do {
      puVar7[-1] = puVar9[-3];
      iVar10 = iVar10 + -1;
      *puVar7 = *(undefined4 *)((iVar1 - iVar4) + -0x10 + (int)(puVar7 + 4));
      puVar7[1] = puVar9[-1];
      puVar7[2] = *puVar9;
      puVar7 = puVar7 + 4;
      puVar9 = puVar9 + 4;
    } while (iVar10 != 0);
  }
  if (iVar8 < iVar11) {
    iVar11 = iVar11 - iVar8;
    puVar7 = (undefined4 *)(iVar4 + iVar8 * 4);
    do {
      iVar11 = iVar11 + -1;
      *puVar7 = *(undefined4 *)((int)puVar7 + (iVar1 - iVar4));
      puVar7 = puVar7 + 1;
    } while (iVar11 != 0);
  }
  *(undefined1 *)(param_1 + 0xd0) = *(undefined1 *)(iVar2 + 0xd0);
  *(undefined1 *)(param_1 + 0xd1) = *(undefined1 *)(iVar2 + 0xd1);
  *(undefined1 *)(param_1 + 0xd2) = *(undefined1 *)(iVar2 + 0xd2);
  *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(iVar2 + 0xd4);
  return param_1;
}

// 0128E3E0  FUN_0128e3e0  size=61  [run]
void __fastcall FUN_0128e3e0(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0128E420  FUN_0128e420  size=57  [run]
void __fastcall FUN_0128e420(undefined4 *param_1)

{
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] & 0x3fffffff);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0128E460  FUN_0128e460  size=27  [run]
void __thiscall FUN_0128e460(int *param_1,int param_2)

{
  *param_1 = (int)(param_1 + 3);
  param_1[1] = param_2;
  param_1[2] = -0x7fffffe0;
  return;
}

// 0128E480  FUN_0128e480  size=27  [run]
void __thiscall FUN_0128e480(int *param_1,int param_2)

{
  *param_1 = (int)(param_1 + 3);
  param_1[1] = param_2;
  param_1[2] = -0x7fffffe0;
  return;
}

// 0128E4C0  FUN_0128e4c0  size=63  [run]
void __fastcall FUN_0128e4c0(int param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (-1 < *(int *)(param_1 + 0x10)) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))
              (*(undefined4 *)(param_1 + 8),*(int *)(param_1 + 0x10) * 4);
  }
  *(undefined4 *)(param_1 + 0x10) = 0x80000000;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

// 0128E530  FUN_0128e530  size=130  [run]
void __fastcall FUN_0128e530(undefined4 *param_1)

{
  param_1[0x24] = 0;
  if (-1 < (int)param_1[0x25]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[0x23],param_1[0x25] & 0x3fffffff);
  }
  param_1[0x23] = 0;
  param_1[0x25] = 0x80000000;
  param_1[1] = 0;
  if (-1 < (int)param_1[2]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return;
}

// 0128E5C0  FUN_0128e5c0  size=18  [run]
int __thiscall FUN_0128e5c0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 0xc;
}

// 0128E5E0  hkpVehicleDefaultSuspension::vf0C  size=190  [run]
void __thiscall
hkpVehicleDefaultSuspension::vf0C
          (int param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  float fVar8;
  
  fVar7 = (float10)FUN_011a2a30();
  iVar1 = *(int *)(param_3 + 0x1c);
  iVar4 = 0;
  if ('\0' < *(char *)(iVar1 + 0x20)) {
    iVar6 = 0;
    iVar5 = 0;
    pfVar3 = (float *)(param_4 + 0x48);
    do {
      if (pfVar3[-9] == 0.0) {
        *(undefined4 *)(param_5 + iVar4 * 4) = 0;
      }
      else {
        iVar2 = *(int *)(param_1 + 0x14);
        if (0.0 <= pfVar3[1]) {
          fVar8 = *(float *)(iVar2 + 8 + iVar6);
        }
        else {
          fVar8 = *(float *)(iVar2 + 4 + iVar6);
        }
        *(float *)(param_5 + iVar4 * 4) =
             ((*(float *)(*(int *)(param_1 + 8) + 0x20 + iVar5) - *pfVar3) *
              *(float *)(iVar2 + iVar6) * pfVar3[2] - fVar8 * pfVar3[1]) * (float)fVar7;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x30;
      pfVar3 = pfVar3 + 0x18;
      iVar6 = iVar6 + 0xc;
    } while (iVar4 < *(char *)(iVar1 + 0x20));
  }
  return;
}

// 0128E6C0  FUN_0128e6c0  size=18  [run]
int __thiscall FUN_0128e6c0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 0xc;
}

// 0128E720  hkpVehicleDefaultBrake::vf0C  size=443  [run]
void __thiscall
hkpVehicleDefaultBrake::vf0C(int param_1,float param_2,int param_3,int param_4,int *param_5)

{
  float *pfVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  bool bVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int local_20;
  int local_1c;
  
  fVar2 = *(float *)(param_4 + 4);
  cVar3 = *(char *)(param_4 + 0xc);
  iVar7 = 0;
  bVar5 = false;
  if ('\0' < *(char *)(*(int *)(param_3 + 0x1c) + 0x20)) {
    iVar8 = 0;
    local_20 = 0;
    local_1c = 0;
    do {
      *(bool *)(iVar7 + param_5[0x23]) =
           *(char *)(*(int *)(param_1 + 8) + 8 + iVar8) != '\0' && cVar3 != '\0';
      pfVar6 = (float *)(*(int *)(param_1 + 8) + iVar8);
      pfVar1 = pfVar6 + 1;
      if (*pfVar1 <= fVar2 && fVar2 != *pfVar1) {
        bVar5 = true;
      }
      iVar4 = *(int *)(*(int *)(param_3 + 0x1c) + 0x8c);
      fVar9 = *(float *)(local_1c + iVar4);
      fVar9 = -(*(float *)(*(int *)(param_3 + 0x48) + 0xc0 + local_20) * fVar9 *
               *(float *)(local_1c + iVar4 + 4) * (1.0 / param_2)) * fVar9;
      fVar10 = *pfVar6 * fVar2;
      fVar11 = fVar9;
      if ((fVar10 < ABS(fVar9)) && (fVar11 = fVar10, fVar9 <= 0.0)) {
        fVar11 = -fVar10;
      }
      local_1c = local_1c + 0x28;
      local_20 = local_20 + 0xe0;
      *(float *)(*param_5 + iVar7 * 4) = fVar11;
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + 0xc;
    } while (iVar7 < *(char *)(*(int *)(param_3 + 0x1c) + 0x20));
    if (bVar5) {
      if ((float)param_5[0x2e] < *(float *)(param_1 + 0x14)) {
        param_5[0x2e] = (int)((float)param_5[0x2e] + param_2);
        return;
      }
      iVar7 = 0;
      if (*(char *)(*(int *)(param_3 + 0x1c) + 0x20) < '\x01') {
        return;
      }
      iVar8 = 0;
      do {
        pfVar1 = (float *)(iVar8 + 4 + *(int *)(param_1 + 8));
        if (*pfVar1 <= fVar2 && fVar2 != *pfVar1) {
          *(undefined1 *)(iVar7 + param_5[0x23]) = 1;
        }
        iVar7 = iVar7 + 1;
        iVar8 = iVar8 + 0xc;
      } while (iVar7 < *(char *)(*(int *)(param_3 + 0x1c) + 0x20));
      return;
    }
  }
  param_5[0x2e] = 0;
  return;
}

// 0128E9B0  hkpVehicleData::vf0C  size=761  [run]
void __thiscall hkpVehicleData::vf0C(int param_1,undefined4 *param_2,int param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  char *pcVar6;
  uint uVar7;
  float *pfVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  float10 fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_110 [8];
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  uint local_e0;
  uint uStack_dc;
  uint uStack_d8;
  uint uStack_d4;
  uint local_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  uint local_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  undefined4 local_80;
  float local_7c [4];
  undefined4 local_6c;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float local_14;
  
  *(undefined1 *)(param_1 + 400) = 1;
  iVar11 = 0;
  if ('\0' < *(char *)(param_1 + 0x20)) {
    iVar10 = (int)*(char *)(param_1 + 0x20);
    pcVar6 = (char *)(*(int *)(param_1 + 0x8c) + 0x24);
    do {
      if (iVar11 < *pcVar6 + 1) {
        iVar11 = *pcVar6 + 1;
      }
      pcVar6 = pcVar6 + 0x28;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  if (*(int *)(param_1 + 0x9c) < iVar11) {
    uVar7 = *(uint *)(param_1 + 0xa0) & 0x3fffffff;
    if ((int)uVar7 < iVar11) {
      iVar10 = uVar7 * 2;
      if (iVar10 <= iVar11) {
        iVar10 = iVar11;
      }
      FUN_0100a210(&PTR_vftable_018e9b94,param_1 + 0x98,iVar10,1);
    }
    *(int *)(param_1 + 0x9c) = iVar11;
  }
  iVar11 = 0;
  if (0 < *(int *)(param_1 + 0x9c)) {
    do {
      *(undefined1 *)(iVar11 + *(int *)(param_1 + 0x98)) = 0;
      iVar11 = iVar11 + 1;
    } while (iVar11 < *(int *)(param_1 + 0x9c));
  }
  iVar11 = 0;
  if ('\0' < *(char *)(param_1 + 0x20)) {
    iVar10 = 0;
    do {
      pcVar6 = (char *)((int)*(char *)(*(int *)(param_1 + 0x8c) + 0x24 + iVar10) +
                       *(int *)(param_1 + 0x98));
      *pcVar6 = *pcVar6 + '\x01';
      iVar11 = iVar11 + 1;
      iVar10 = iVar10 + 0x28;
    } while (iVar11 < *(char *)(param_1 + 0x20));
  }
  fVar13 = *(float *)(param_1 + 0x60) / *(float *)(param_1 + 0x78);
  fVar14 = *(float *)(param_1 + 0x68) / *(float *)(param_1 + 0x74);
  fVar15 = *(float *)(param_1 + 100) / *(float *)(param_1 + 0x7c);
  local_30 = ABS(*(float *)(param_1 + 0x40)) * fVar13 + ABS(*(float *)(param_1 + 0x30)) * fVar14 +
             ABS(*(float *)(param_1 + 0x50)) * fVar15;
  fStack_2c = ABS(*(float *)(param_1 + 0x44)) * fVar13 + ABS(*(float *)(param_1 + 0x34)) * fVar14 +
              ABS(*(float *)(param_1 + 0x54)) * fVar15;
  fStack_28 = ABS(*(float *)(param_1 + 0x48)) * fVar13 + ABS(*(float *)(param_1 + 0x38)) * fVar14 +
              ABS(*(float *)(param_1 + 0x58)) * fVar15;
  fStack_24 = 1.0;
  fVar12 = (float10)FUN_011a2a30();
  local_14 = (float)((float10)1 / fVar12);
  *(float *)(param_1 + 0x180) = local_14 * local_30;
  *(float *)(param_1 + 0x184) = local_14 * fStack_2c;
  *(float *)(param_1 + 0x188) = local_14 * fStack_28;
  *(float *)(param_1 + 0x18c) = local_14 * fStack_24;
  fStack_54 = *(float *)(param_1 + 0x180);
  fStack_44 = *(float *)(param_1 + 0x184);
  fStack_34 = *(float *)(param_1 + 0x188);
  local_f0 = *(undefined4 *)(param_3 + 0x170);
  uStack_ec = *(undefined4 *)(param_3 + 0x174);
  uStack_e8 = *(undefined4 *)(param_3 + 0x178);
  uStack_e4 = *(undefined4 *)(param_3 + 0x17c);
  local_60 = fStack_54 * *(float *)(param_3 + 0xf0);
  fStack_5c = fStack_54 * *(float *)(param_3 + 0xf4);
  fStack_58 = fStack_54 * *(float *)(param_3 + 0xf8);
  fStack_54 = fStack_54 * *(float *)(param_3 + 0xfc);
  local_50 = fStack_44 * *(float *)(param_3 + 0x100);
  fStack_4c = fStack_44 * *(float *)(param_3 + 0x104);
  fStack_48 = fStack_44 * *(float *)(param_3 + 0x108);
  fStack_44 = fStack_44 * *(float *)(param_3 + 0x10c);
  local_40 = fStack_34 * *(float *)(param_3 + 0x110);
  fStack_3c = fStack_34 * *(float *)(param_3 + 0x114);
  fStack_38 = fStack_34 * *(float *)(param_3 + 0x118);
  fStack_34 = fStack_34 * *(float *)(param_3 + 0x11c);
  FUN_01013b90(&local_60,(float *)(param_3 + 0xf0));
  local_80 = *(undefined4 *)(param_3 + 0x1ac);
  local_c0 = *(uint *)(param_1 + 0x30) & 0x7fffffff;
  uStack_bc = *(uint *)(param_1 + 0x34) & 0x7fffffff;
  uStack_b8 = *(uint *)(param_1 + 0x38) & 0x7fffffff;
  uStack_b4 = *(uint *)(param_1 + 0x3c) & 0x7fffffff;
  local_d0 = *(uint *)(param_1 + 0x40) & 0x7fffffff;
  uStack_cc = *(uint *)(param_1 + 0x44) & 0x7fffffff;
  uStack_c8 = *(uint *)(param_1 + 0x48) & 0x7fffffff;
  uStack_c4 = *(uint *)(param_1 + 0x4c) & 0x7fffffff;
  local_e0 = *(uint *)(param_1 + 0x50) & 0x7fffffff;
  uStack_dc = *(uint *)(param_1 + 0x54) & 0x7fffffff;
  uStack_d8 = *(uint *)(param_1 + 0x58) & 0x7fffffff;
  uStack_d4 = *(uint *)(param_1 + 0x5c) & 0x7fffffff;
  local_6c = *(undefined4 *)(param_1 + 0x80);
  local_7c[0] = 0.0;
  local_7c[1] = 0.0;
  if ('\0' < *(char *)(param_1 + 0x20)) {
    pfVar9 = (float *)*param_2;
    pfVar8 = *(float **)(param_1 + 0x8c);
    local_14 = (float)(int)*(char *)(param_1 + 0x20);
    do {
      iVar11 = (int)*(char *)(pfVar8 + 9);
      local_7c[iVar11 + 2] = *pfVar8;
      fVar13 = pfVar9[8];
      fVar14 = pfVar9[5];
      fVar15 = pfVar9[6];
      fVar2 = pfVar9[7];
      fVar3 = pfVar9[1];
      fVar4 = pfVar9[2];
      fVar5 = pfVar9[3];
      local_110[iVar11 * 4] = fVar13 * pfVar9[4] + *pfVar9;
      local_110[iVar11 * 4 + 1] = fVar13 * fVar14 + fVar3;
      local_110[iVar11 * 4 + 2] = fVar13 * fVar15 + fVar4;
      local_110[iVar11 * 4 + 3] = fVar13 * fVar2 + fVar5;
      pfVar1 = pfVar8 + 1;
      fVar13 = *pfVar8;
      pfVar9 = pfVar9 + 0xc;
      pfVar8 = pfVar8 + 10;
      fVar14 = (float)((int)local_14 + -1);
      local_14 = fVar14;
      local_7c[iVar11] = *pfVar1 * fVar13 + local_7c[iVar11];
    } while (fVar14 != 0.0);
  }
  FUN_01497d90(local_110,param_1 + 0xa4);
  return;
}

// 0128EDC0  FUN_0128edc0  size=52  [run]
undefined4 __thiscall FUN_0128edc0(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    uVar3 = FUN_0100a210(param_2,param_1,iVar2,1);
    return uVar3;
  }
  return 0;
}

// 0128EE00  FUN_0128ee00  size=55  [run]
void __thiscall FUN_0128ee00(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    FUN_0100a210(param_2,param_1,iVar2,1);
  }
  *(int *)(param_1 + 4) = param_3;
  return;
}

// 0128EE40  FUN_0128ee40  size=56  [run]
void __thiscall FUN_0128ee40(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_2) {
      iVar2 = param_2;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,1);
  }
  *(int *)(param_1 + 4) = param_2;
  return;
}

// 0128EEA0  FUN_0128eea0  size=15  [run]
int __thiscall FUN_0128eea0(int *param_1,int param_2)

{
  return param_2 * 0x20 + *param_1;
}

// 0128EEB0  FUN_0128eeb0  size=15  [run]
int __thiscall FUN_0128eeb0(int *param_1,int param_2)

{
  return param_2 * 0x20 + *param_1;
}

// 0128EEE0  FUN_0128eee0  size=15  [run]
int __thiscall FUN_0128eee0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 0128EEF0  FUN_0128eef0  size=15  [run]
int __thiscall FUN_0128eef0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 0128EF20  FUN_0128ef20  size=11  [run]
int FUN_0128ef20(int param_1,int param_2)

{
  return param_2 + param_1;
}

// 0128EF30  FUN_0128ef30  size=13  [run]
void __fastcall FUN_0128ef30(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}

// 0128EF40  FUN_0128ef40  size=25  [run]
int __thiscall FUN_0128ef40(int param_1,int param_2)

{
  return ((*(int *)(param_1 + 8) + param_2) % *(int *)(param_1 + 0xc)) * 0x20 +
         *(int *)(param_1 + 0x10);
}

// 0128EF60  FUN_0128ef60  size=4  [run]
float10 __fastcall FUN_0128ef60(int param_1)

{
  return (float10)*(float *)(param_1 + 0x1c);
}

// 0128EF70  hkpTyremarksInfo::vf10  size=67  [run]
void __thiscall
hkpTyremarksInfo::vf10(int param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x10) + param_3 * 4) + 0xc);
  iVar6 = 0;
  if (0 < iVar1) {
    do {
      puVar5 = (undefined4 *)FUN_0128ef40(iVar6);
      uVar2 = puVar5[1];
      uVar3 = puVar5[2];
      uVar4 = puVar5[3];
      *param_4 = *puVar5;
      param_4[1] = uVar2;
      param_4[2] = uVar3;
      param_4[3] = uVar4;
      uVar2 = puVar5[5];
      uVar3 = puVar5[6];
      uVar4 = puVar5[7];
      param_4[4] = puVar5[4];
      param_4[5] = uVar2;
      param_4[6] = uVar3;
      param_4[7] = uVar4;
      iVar6 = iVar6 + 1;
      param_4 = param_4 + 8;
    } while (iVar6 < iVar1);
  }
  return;
}

// 0128EFC0  FUN_0128efc0  size=113  [run]
uint __thiscall FUN_0128efc0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined4 *puVar5;
  int iVar6;
  float10 fVar7;
  float10 extraout_ST0;
  float10 extraout_ST1;
  
  fVar7 = (float10)FUN_0128ef60();
  if (fVar7 == (float10)0) {
    uVar4 = FUN_0128ef60();
    if (extraout_ST0 == extraout_ST1) {
      return (uint)CONCAT11((extraout_ST0 == extraout_ST1) << 6 |
                            (NAN(extraout_ST0) || NAN(extraout_ST1)) << 2 | 2U |
                            extraout_ST0 < extraout_ST1,uVar4);
    }
  }
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  puVar5 = (undefined4 *)(*(int *)(param_1 + 8) * 0x20 + *(int *)(param_1 + 0x10));
  *puVar5 = *param_2;
  puVar5[1] = uVar1;
  puVar5[2] = uVar2;
  puVar5[3] = uVar3;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  puVar5[4] = param_2[4];
  puVar5[5] = uVar1;
  puVar5[6] = uVar2;
  puVar5[7] = uVar3;
  iVar6 = *(int *)(param_1 + 8) + 1;
  *(int *)(param_1 + 8) = iVar6 % *(int *)(param_1 + 0xc);
  return iVar6 / *(int *)(param_1 + 0xc);
}

// 0128F040  hkpTyremarksInfo::vf0C  size=412  [run]
void hkpTyremarksInfo::vf0C(undefined4 param_1,int param_2)

{
  undefined4 extraout_ECX;
  int iVar1;
  
  FUN_01006f50(*(int *)(param_2 + 0x18) + 0xf0,*(int *)(param_2 + 0x1c) + 0x50);
  iVar1 = 0;
  if ('\0' < *(char *)(*(int *)(param_2 + 0x1c) + 0x20)) {
    do {
      FUN_0128ef30();
      FUN_0128efc0(extraout_ECX);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(char *)(*(int *)(param_2 + 0x1c) + 0x20));
  }
  return;
}

// 0128F1E0  FUN_0128f1e0  size=162  [run]
void __thiscall FUN_0128f1e0(int param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  int local_14;
  
  *(int *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 8) = 0;
  local_14 = 0;
  if (0 < param_2) {
    do {
      FUN_0128ef30();
      if (*(uint *)(param_1 + 0x14) == (*(uint *)(param_1 + 0x18) & 0x3fffffff)) {
        FUN_0100a290(&PTR_vftable_018e9b94,(int *)(param_1 + 0x10),0x20);
      }
      puVar1 = (undefined8 *)(*(int *)(param_1 + 0x14) * 0x20 + *(int *)(param_1 + 0x10));
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = local_40;
        puVar1[1] = local_38;
        puVar1[2] = local_30;
        puVar1[3] = local_28;
      }
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      local_14 = local_14 + 1;
    } while (local_14 < *(int *)(param_1 + 0xc));
  }
  return;
}

// 0128F290  hkpTyremarksWheel::hkpTyremarksWheel  size=39  [run]
void __fastcall hkpTyremarksWheel::hkpTyremarksWheel(undefined4 *param_1)

{
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = vftable;
  param_1[4] = 0;
  param_1[6] = 0x80000000;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  return;
}

// 0128F2C0  hkpTyremarksInfo::hkpTyremarksInfo  size=188  [run]
undefined4 * __thiscall
hkpTyremarksInfo::hkpTyremarksInfo(undefined4 *param_1,int param_2,undefined4 param_3)

{
  LPVOID pvVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  *param_1 = vftable;
  *(undefined2 *)((int)param_1 + 6) = 1;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0x80000000;
  param_1[2] = 0;
  param_1[3] = 0;
  iVar4 = (int)*(char *)(param_2 + 0x20);
  if ((int)(param_1[6] & 0x3fffffff) < iVar4) {
    iVar2 = (param_1[6] & 0x3fffffff) * 2;
    if (iVar2 <= iVar4) {
      iVar2 = iVar4;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1 + 4,iVar2,4);
  }
  param_1[5] = iVar4;
  iVar4 = 0;
  if (0 < (int)param_1[5]) {
    do {
      pvVar1 = TlsGetValue(DAT_01f8fc4c);
      iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x1c);
      *(undefined2 *)(iVar2 + 4) = 0x1c;
      uVar3 = hkpTyremarksWheel::hkpTyremarksWheel();
      FUN_0128f1e0(param_3);
      *(undefined4 *)(param_1[4] + iVar4 * 4) = uVar3;
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)param_1[5]);
  }
  return param_1;
}

// 0128F380  hkBaseObject::hkBaseObject_179  size=101  [run]
void __fastcall hkBaseObject::hkBaseObject_179(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  *param_1 = hkpTyremarksInfo::vftable;
  if (0 < (int)param_1[5]) {
    do {
      FUN_010060a0();
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)param_1[5]);
  }
  param_1[5] = 0;
  if (-1 < (int)param_1[6]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[4],param_1[6] * 4);
  }
  param_1[4] = 0;
  param_1[6] = 0x80000000;
  *param_1 = vftable;
  return;
}

// 0128F3F0  FUN_0128f3f0  size=26  [run]
void __thiscall FUN_0128f3f0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  return;
}

// 0128F450  FUN_0128f450  size=66  [run]
void FUN_0128f450(undefined8 *param_1,int param_2,undefined8 *param_3)

{
  if (0 < param_2) {
    do {
      if (param_1 != (undefined8 *)0x0) {
        *param_1 = *param_3;
        param_1[1] = param_3[1];
        param_1[2] = param_3[2];
        param_1[3] = param_3[3];
      }
      param_1 = param_1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// 0128F4A0  FUN_0128f4a0  size=52  [run]
undefined4 __thiscall FUN_0128f4a0(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    uVar3 = FUN_0100a210(param_2,param_1,iVar2,4);
    return uVar3;
  }
  return 0;
}

// 0128F4E0  FUN_0128f4e0  size=37  [run]
void FUN_0128f4e0(undefined4 param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  *(short *)(iVar2 + 4) = (short)param_1;
  return;
}

// 0128F510  FUN_0128f510  size=93  [run]
void __thiscall FUN_0128f510(int *param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,0x20);
  }
  puVar1 = (undefined8 *)(param_1[1] * 0x20 + *param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_3;
    puVar1[1] = param_3[1];
    puVar1[2] = param_3[2];
    puVar1[3] = param_3[3];
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 0128F570  FUN_0128f570  size=55  [run]
void __thiscall FUN_0128f570(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    FUN_0100a210(param_2,param_1,iVar2,4);
  }
  *(int *)(param_1 + 4) = param_3;
  return;
}

// 0128F5B0  FUN_0128f5b0  size=94  [run]
void __thiscall FUN_0128f5b0(int *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,0x20);
  }
  puVar1 = (undefined8 *)(param_1[1] * 0x20 + *param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    puVar1[2] = param_2[2];
    puVar1[3] = param_2[3];
  }
  param_1[1] = param_1[1] + 1;
  return;
}

// 0128F610  FUN_0128f610  size=56  [run]
void __thiscall FUN_0128f610(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_2) {
      iVar2 = param_2;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,4);
  }
  *(int *)(param_1 + 4) = param_2;
  return;
}

// 0128F650  hkpVehicleRayCastWheelCollide::vf38  size=86  [run]
void __thiscall hkpVehicleRayCastWheelCollide::vf38(int param_1,int param_2,undefined4 param_3)

{
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_40 = *(undefined4 *)(param_2 + 0x50);
  uStack_3c = *(undefined4 *)(param_2 + 0x54);
  uStack_38 = *(undefined4 *)(param_2 + 0x58);
  uStack_34 = *(undefined4 *)(param_2 + 0x5c);
  local_30 = *(undefined4 *)(param_2 + 0x60);
  uStack_2c = *(undefined4 *)(param_2 + 100);
  uStack_28 = *(undefined4 *)(param_2 + 0x68);
  uStack_24 = *(undefined4 *)(param_2 + 0x6c);
  local_1c = *(undefined4 *)(param_1 + 0xc);
  local_18 = 0;
  local_20 = 1;
  FUN_011ac420(&local_40,param_3);
  return;
}

// 0128F6B0  hkpVehicleRayCastWheelCollide::vf20  size=19  [run]
void __fastcall hkpVehicleRayCastWheelCollide::vf20(int param_1)

{
  FUN_01194450(*(undefined4 *)(param_1 + 0x10));
  return;
}

// 0128F6E0  hkBaseObject::hkBaseObject_180  size=66  [run]
void __fastcall hkBaseObject::hkBaseObject_180(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = hkpVehicleRayCastWheelCollide::vftable;
  if (param_1[4] != 0) {
    if (param_1[8] != 0) {
      if (param_1 == (undefined4 *)0xffffffec) {
        puVar1 = (undefined4 *)0x0;
      }
      else {
        puVar1 = param_1 + 7;
      }
      FUN_011a3130(puVar1);
    }
    FUN_010060a0();
  }
  hkpPhantomOverlapListener::hkpPhantomOverlapListener_4();
  *param_1 = vftable;
  return;
}

// 0128F730  hkpVehicleRayCastWheelCollide::vf34  size=130  [run]
void hkpVehicleRayCastWheelCollide::vf34(int param_1,undefined1 (*param_2) [16])

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  auVar5 = minps(*(undefined1 (*) [16])(*(int *)(param_1 + 0x48) + 0x50),
                 *(undefined1 (*) [16])(*(int *)(param_1 + 0x48) + 0x60));
  *param_2 = auVar5;
  auVar5 = maxps(*(undefined1 (*) [16])(*(int *)(param_1 + 0x48) + 0x50),
                 *(undefined1 (*) [16])(*(int *)(param_1 + 0x48) + 0x60));
  param_2[1] = auVar5;
  iVar2 = 1;
  if ('\x01' < *(char *)(*(int *)(param_1 + 0x1c) + 0x20)) {
    iVar3 = 0xe0;
    do {
      auVar4 = minps(*param_2,*(undefined1 (*) [16])(*(int *)(param_1 + 0x48) + 0x60 + iVar3));
      iVar1 = *(int *)(param_1 + 0x48) + iVar3;
      *param_2 = auVar4;
      auVar4 = minps(auVar4,*(undefined1 (*) [16])(iVar1 + 0x50));
      *param_2 = auVar4;
      auVar5 = maxps(auVar5,*(undefined1 (*) [16])(iVar1 + 0x60));
      param_2[1] = auVar5;
      auVar5 = maxps(auVar5,*(undefined1 (*) [16])(iVar1 + 0x50));
      param_2[1] = auVar5;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0xe0;
    } while (iVar2 < *(char *)(*(int *)(param_1 + 0x1c) + 0x20));
  }
  return;
}

// 0128F7C0  hkpVehicleRayCastWheelCollide::vf18  size=67  [run]
void __thiscall hkpVehicleRayCastWheelCollide::vf18(int *param_1,undefined4 param_2)

{
  undefined1 local_30 [32];
  
  (**(code **)(*param_1 + 0x34))(param_2,local_30);
  FUN_011ac160(local_30);
  return;
}

// 0128F810  hkpVehicleRayCastWheelCollide::vf10  size=216  [run]
void __thiscall
hkpVehicleRayCastWheelCollide::vf10(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  undefined1 local_80 [16];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_60;
  undefined4 local_40;
  int local_30;
  int local_1c;
  uint local_15;
  byte local_11;
  
  local_11 = *(byte *)(*(int *)(param_3 + 0x1c) + 0x20);
  local_15 = local_15 & 0xffffff00;
  if (local_11 != 0) {
    local_1c = 0;
    do {
      local_6c = 0xffffffff;
      local_60 = 0xffffffff;
      local_40 = 0;
      local_30 = 0;
      local_70 = 0x3f800000;
      (**(code **)(*param_1 + 0x38))(*(int *)(param_3 + 0x48) + local_1c,local_80);
      if (local_30 == 0) {
        (**(code **)(*param_1 + 0x40))(param_3,local_15,param_4);
      }
      else {
        (**(code **)(*param_1 + 0x3c))(param_3,local_15,local_80);
      }
      (**(code **)(*param_1 + 0x2c))(param_3,local_15,param_4);
      local_1c = local_1c + 0xe0;
      bVar1 = (char)local_15 + 1;
      param_4 = param_4 + 0x60;
      local_15 = CONCAT31(local_15._1_3_,bVar1);
    } while (bVar1 < local_11);
  }
  return;
}

// 0128F8F0  hkpVehicleRayCastWheelCollide::vf3C  size=502  [run]
void hkpVehicleRayCastWheelCollide::vf3C(int param_1,byte param_2,float *param_3,float *param_4)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  iVar2 = (uint)param_2 * 0xe0 + *(int *)(param_1 + 0x48);
  fVar11 = *(float *)(*(int *)(*(int *)(param_1 + 0x34) + 8) + 0x20 + (uint)param_2 * 0x30);
  fVar3 = param_3[1];
  fVar5 = param_3[2];
  param_4[4] = *param_3;
  param_4[5] = fVar3;
  param_4[6] = fVar5;
  param_4[7] = param_4[7];
  param_4[10] = param_3[8];
  param_4[0xb] = param_3[9];
  param_4[0xc] = param_3[10];
  param_4[0xd] = param_3[0xb];
  param_4[0xe] = param_3[0xc];
  param_4[0xf] = param_3[0xd];
  param_4[0x10] = param_3[0xe];
  param_4[0x11] = param_3[0xf];
  if (*(char *)((int)param_3[0x14] + 0x18) == '\x01') {
    fVar3 = (float)((int)*(char *)((int)param_3[0x14] + 0x10) + (int)param_3[0x14]);
  }
  else {
    fVar3 = 0.0;
  }
  param_4[9] = fVar3;
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x8c);
  fVar4 = (*(float *)(iVar1 + (uint)param_2 * 0x28) + fVar11) * param_3[4];
  fVar8 = fVar4 - *(float *)(iVar1 + (uint)param_2 * 0x28);
  param_4[0x12] = fVar8;
  fVar11 = *(float *)(iVar2 + 0x84);
  fVar5 = *(float *)(iVar2 + 0x88);
  fVar6 = *(float *)(iVar2 + 0x8c);
  fVar7 = *(float *)(iVar2 + 0x54);
  fVar9 = *(float *)(iVar2 + 0x58);
  fVar10 = *(float *)(iVar2 + 0x5c);
  *param_4 = fVar4 * *(float *)(iVar2 + 0x80) + *(float *)(iVar2 + 0x50);
  param_4[1] = fVar4 * fVar11 + fVar7;
  param_4[2] = fVar4 * fVar5 + fVar9;
  param_4[3] = fVar4 * fVar6 + fVar10;
  param_4[7] = fVar8;
  param_4[8] = *(float *)((int)param_4[9] + 0x8c);
  fVar11 = param_4[5] * *(float *)(iVar2 + 0x84) + param_4[4] * *(float *)(iVar2 + 0x80) +
           param_4[6] * *(float *)(iVar2 + 0x88);
  if (fVar11 < -*(float *)(*(int *)(param_1 + 0x1c) + 0x84)) {
    iVar2 = *(int *)(param_1 + 0x18);
    fVar9 = *param_4 - *(float *)((int)fVar3 + 0x140);
    fVar10 = param_4[1] - *(float *)((int)fVar3 + 0x144);
    fVar4 = param_4[2] - *(float *)((int)fVar3 + 0x148);
    fVar5 = *param_4 - *(float *)(iVar2 + 0x140);
    fVar6 = param_4[1] - *(float *)(iVar2 + 0x144);
    fVar7 = param_4[2] - *(float *)(iVar2 + 0x148);
    fVar11 = -1.0 / fVar11;
    param_4[0x13] =
         ((((fVar5 * *(float *)(iVar2 + 0x1c8) - fVar7 * *(float *)(iVar2 + 0x1c0)) +
           *(float *)(iVar2 + 0x1b4)) -
          ((fVar9 * *(float *)((int)fVar3 + 0x1c8) - fVar4 * *(float *)((int)fVar3 + 0x1c0)) +
          *(float *)((int)fVar3 + 0x1b4))) * param_4[5] +
          (((fVar7 * *(float *)(iVar2 + 0x1c4) - fVar6 * *(float *)(iVar2 + 0x1c8)) +
           *(float *)(iVar2 + 0x1b0)) -
          ((fVar4 * *(float *)((int)fVar3 + 0x1c4) - fVar10 * *(float *)((int)fVar3 + 0x1c8)) +
          *(float *)((int)fVar3 + 0x1b0))) * param_4[4] +
         (((fVar6 * *(float *)(iVar2 + 0x1c0) - fVar5 * *(float *)(iVar2 + 0x1c4)) +
          *(float *)(iVar2 + 0x1b8)) -
         ((fVar10 * *(float *)((int)fVar3 + 0x1c0) - fVar9 * *(float *)((int)fVar3 + 0x1c4)) +
         *(float *)((int)fVar3 + 0x1b8))) * param_4[6]) * fVar11;
    param_4[0x14] = fVar11;
    return;
  }
  param_4[0x13] = 0.0;
  param_4[0x14] = 1.0 / *(float *)(*(int *)(param_1 + 0x1c) + 0x84);
  return;
}

// 0128FAF0  hkpVehicleRayCastWheelCollide::vf40  size=129  [run]
void hkpVehicleRayCastWheelCollide::vf40(int param_1,byte param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  iVar7 = (uint)param_2 * 0xe0 + *(int *)(param_1 + 0x48);
  uVar1 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x34) + 8) + 0x20 + (uint)param_2 * 0x30);
  param_3[9] = 0;
  param_3[0x12] = uVar1;
  param_3[0x13] = 0;
  uVar4 = *(undefined4 *)(iVar7 + 100);
  uVar5 = *(undefined4 *)(iVar7 + 0x68);
  uVar6 = *(undefined4 *)(iVar7 + 0x6c);
  *param_3 = *(undefined4 *)(iVar7 + 0x60);
  param_3[1] = uVar4;
  param_3[2] = uVar5;
  param_3[3] = uVar6;
  uVar2 = *(uint *)(iVar7 + 0x84);
  uVar3 = *(uint *)(iVar7 + 0x88);
  param_3[4] = *(uint *)(iVar7 + 0x80) ^ 0x80000000;
  param_3[5] = uVar2 ^ 0x80000000;
  param_3[6] = uVar3 ^ 0x80000000;
  param_3[7] = param_3[7];
  param_3[8] = 0;
  param_3[0x14] = 0x3f800000;
  param_3[7] = uVar1;
  return;
}

// 0128FB80  hkpVehicleRayCastWheelCollide::vf30  size=223  [run]
int __thiscall
hkpVehicleRayCastWheelCollide::vf30
          (int param_1,int param_2,uint param_3,undefined4 param_4,int param_5,int param_6)

{
  undefined4 *puVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  
  iVar7 = param_3;
  (**(code **)(**(int **)(param_1 + 0x10) + 0x2c))();
  iVar3 = *(int *)(*(int *)(param_1 + 0x10) + 0xc4);
  if (iVar3 < 1) {
    return 0;
  }
  bVar2 = *(byte *)(*(int *)(param_2 + 0x1c) + 0x20);
  if ('\0' < (char)bVar2) {
    param_3 = (uint)bVar2;
    puVar8 = (undefined4 *)(param_5 + 0x20);
    iVar10 = 0;
    do {
      iVar9 = *(int *)(param_2 + 0x48);
      puVar1 = (undefined4 *)(iVar9 + 0x50 + iVar10);
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar8[-8] = *puVar1;
      puVar8[-7] = uVar4;
      puVar8[-6] = uVar5;
      puVar8[-5] = uVar6;
      puVar1 = (undefined4 *)(iVar9 + 0x60 + iVar10);
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar8[-4] = *puVar1;
      puVar8[-3] = uVar4;
      puVar8[-2] = uVar5;
      puVar8[-1] = uVar6;
      *puVar8 = *(undefined4 *)(param_1 + 0xc);
      if (iVar7 == 0) {
        iVar9 = 0;
      }
      else {
        iVar9 = iVar7 + 0x10;
      }
      puVar8[2] = iVar9;
      puVar8[4] = *(undefined4 *)(iVar7 + 0x20);
      puVar8[5] = param_4;
      *(undefined1 *)(puVar8 + 0xb) = 0;
      puVar8[6] = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0xc0);
      puVar8[8] = param_6;
      puVar8[7] = iVar3;
      puVar8[9] = 1;
      puVar8[10] = 0;
      iVar10 = iVar10 + 0xe0;
      puVar8 = puVar8 + 0x14;
      param_6 = param_6 + 0x60;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  return (int)(char)bVar2;
}

// 0128FC60  hkpVehicleRayCastWheelCollide::vf24  size=13  [run]
void __fastcall hkpVehicleRayCastWheelCollide::vf24(int param_1)

{
  FUN_01193b40(*(undefined4 *)(param_1 + 0x10));
  return;
}

// 0128FC70  hkpVehicleRayCastWheelCollide::vf28  size=23  [run]
void __thiscall hkpVehicleRayCastWheelCollide::vf28(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  if (*(int *)(param_1 + 0x10) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x2c) = param_2;
  }
  return;
}

// 0128FC90  hkpRejectChassisListener::hkpRejectChassisListener  size=62  [run]
void __fastcall hkpRejectChassisListener::hkpRejectChassisListener(undefined4 *param_1)

{
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = hkpVehicleRayCastWheelCollide::vftable;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined2 *)((int)param_1 + 0x1a) = 1;
  param_1[7] = hkpPhantomOverlapListener::vftable;
  param_1[5] = vftable;
  param_1[7] = vftable;
  *(undefined2 *)(param_1 + 2) = 0x100;
  return;
}

// 0128FCD0  hkpVehicleRayCastWheelCollide::vf0C  size=159  [run]
void __thiscall hkpVehicleRayCastWheelCollide::vf0C(int *param_1,int param_2)

{
  LPVOID pvVar1;
  int iVar2;
  undefined1 local_30 [32];
  
  (**(code **)(*param_1 + 0x34))(param_2,local_30);
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0xd0);
  *(undefined2 *)(iVar2 + 4) = 0xd0;
  iVar2 = hkpAabbPhantom::hkpAabbPhantom(local_30,param_1[3]);
  param_1[4] = iVar2;
  param_1[8] = *(int *)(param_2 + 0x18) + 0x10;
  if (param_1 != (int *)0xffffffec) {
    FUN_011a31e0(param_1 + 7);
    return;
  }
  FUN_011a31e0(0);
  return;
}

// 0128FD70  hkpVehicleRayCastWheelCollide::vf1C  size=133  [run]
int __thiscall hkpVehicleRayCastWheelCollide::vf1C(int param_1,int param_2,undefined4 *param_3)

{
  LPVOID pvVar1;
  int iVar2;
  int iVar3;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x24);
  *(undefined2 *)(iVar2 + 4) = 0x24;
  iVar2 = hkpRejectChassisListener::hkpRejectChassisListener();
  *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)*param_3;
  FUN_01006000();
  if (param_1 == -0x14) {
    iVar3 = 0;
  }
  else {
    iVar3 = param_1 + 0x1c;
  }
  FUN_011a3130(iVar3);
  if (iVar2 == -0x14) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar2 + 0x1c;
  }
  FUN_011a31e0(iVar3);
  *(int *)(iVar2 + 0x20) = param_2 + 0x10;
  *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
  return iVar2;
}

// 0128FE00  hkpVehicleRayCastWheelCollide::vf14  size=59  [run]
void __thiscall hkpVehicleRayCastWheelCollide::vf14(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_2,4);
  }
  *(undefined4 *)(*param_2 + param_2[1] * 4) = uVar1;
  param_2[1] = param_2[1] + 1;
  return;
}

// 0128FE50  FUN_0128fe50  size=37  [run]
void FUN_0128fe50(undefined4 param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  *(short *)(iVar2 + 4) = (short)param_1;
  return;
}

// 0128FE80  FUN_0128fe80  size=20  [run]
void __thiscall FUN_0128fe80(int *param_1,undefined4 param_2)

{
  *(bool *)param_2 = param_1[3] != *param_1;
  return;
}

// 0128FEA0  FUN_0128fea0  size=20  [run]
void __thiscall FUN_0128fea0(int *param_1,undefined4 param_2)

{
  *(bool *)param_2 = param_1[3] != *param_1;
  return;
}

// 0128FEE0  FUN_0128fee0  size=15  [run]
int __thiscall FUN_0128fee0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 0128FEF0  FUN_0128fef0  size=15  [run]
int __thiscall FUN_0128fef0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 4;
}

// 0128FF10  FUN_0128ff10  size=52  [run]
int __thiscall FUN_0128ff10(int *param_1,int *param_2,int param_3,int param_4)

{
  int *piVar1;
  
  if (param_4 < 0) {
    param_4 = param_1[1];
  }
  if (param_3 < param_4) {
    piVar1 = (int *)(*param_1 + param_3 * 4);
    do {
      if (*piVar1 == *param_2) {
        return param_3;
      }
      param_3 = param_3 + 1;
      piVar1 = piVar1 + 1;
    } while (param_3 < param_4);
  }
  return -1;
}

// 0128FF50  FUN_0128ff50  size=34  [run]
void FUN_0128ff50(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *(undefined4 *)(param_1 + iVar1 * 4) = *param_3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return;
}

// 0128FF90  FUN_0128ff90  size=16  [run]
undefined4 __thiscall FUN_0128ff90(int param_1,int param_2)

{
  return *(undefined4 *)(*(int *)(param_1 + 8) + param_2 * 4);
}

// 0128FFB0  FUN_0128ffb0  size=46  [run]
void __thiscall FUN_0128ffb0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0xc);
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      (**(code **)(**(int **)(*(int *)(param_1 + 8) + iVar2 * 4) + 0x24))(param_2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return;
}

// 0128FFE0  FUN_0128ffe0  size=38  [run]
void __fastcall FUN_0128ffe0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0xc);
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      (**(code **)(**(int **)(*(int *)(param_1 + 8) + iVar2 * 4) + 0x28))();
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return;
}

// 01290010  hkpVehicleManager::vf10  size=67  [run]
void __thiscall hkpVehicleManager::vf10(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    piVar2 = *(int **)(param_1 + 8);
    do {
      if (*piVar2 == param_2) goto LAB_01290033;
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < *(int *)(param_1 + 0xc));
  }
  iVar1 = -1;
LAB_01290033:
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  if (*(int *)(param_1 + 0xc) != iVar1) {
    *(undefined4 *)(*(int *)(param_1 + 8) + iVar1 * 4) =
         *(undefined4 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0xc) * 4);
  }
  FUN_010060a0();
  return;
}

// 01290060  hkpVehicleManager::vf0C  size=68  [run]
void __thiscall hkpVehicleManager::vf0C(int param_1,undefined4 param_2)

{
  FUN_01006000();
  if (*(uint *)(param_1 + 0xc) == (*(uint *)(param_1 + 0x10) & 0x3fffffff)) {
    FUN_0100a290(&PTR_vftable_018e9b94,(int *)(param_1 + 8),4);
  }
  *(undefined4 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0xc) * 4) = param_2;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  return;
}

// 012900B0  FUN_012900b0  size=107  [run]
void __thiscall FUN_012900b0(int param_1,int *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  
  piVar2 = param_2;
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    do {
      uVar1 = *(undefined4 *)(*(int *)(param_1 + 8) + iVar4 * 4);
      pcVar3 = (char *)FUN_0118fae0((int)&param_2 + 3);
      if (*pcVar3 != '\0') {
        if (piVar2[1] == (piVar2[2] & 0x3fffffffU)) {
          FUN_0100a290(&PTR_vftable_018e9b94,piVar2,4);
        }
        *(undefined4 *)(*piVar2 + piVar2[1] * 4) = uVar1;
        piVar2[1] = piVar2[1] + 1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0xc));
  }
  return;
}

// 01290120  hkBaseObject::hkBaseObject_117  size=104  [run]
void __fastcall hkBaseObject::hkBaseObject_117(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[3];
  iVar2 = 0;
  *param_1 = hkpVehicleManager::vftable;
  if (0 < iVar1) {
    do {
      FUN_010060a0();
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  param_1[3] = 0;
  if (-1 < (int)param_1[4]) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(param_1[2],param_1[4] * 4);
  }
  param_1[2] = 0;
  param_1[4] = 0x80000000;
  *param_1 = vftable;
  return;
}

// 01290190  FUN_01290190  size=1065  [run]
void FUN_01290190(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  int iVar4;
  LPVOID pvVar5;
  uint uVar6;
  uint uVar7;
  undefined1 local_2f0 [624];
  undefined1 local_80 [36];
  int local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  int local_4c;
  uint local_48;
  uint local_44;
  int local_40;
  int local_3c;
  int local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  int local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  int local_14;
  
  local_4c = 0;
  local_48 = 0;
  local_44 = 0x80000000;
  local_3c = 0x20;
  pvVar5 = TlsGetValue(DAT_01f8fc4c);
  local_40 = *(int *)((int)pvVar5 + 0xc);
  if ((*(int *)((int)pvVar5 + 8) < 0xc00) || (*(uint *)((int)pvVar5 + 0x10) < local_40 + 0xc00U)) {
    local_40 = FUN_0100b780(0xc00);
  }
  else {
    *(uint *)((int)pvVar5 + 0xc) = local_40 + 0xc00U;
  }
  local_44 = 0x80000020;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0x80000000;
  local_28 = 0x20;
  local_4c = local_40;
  pvVar5 = TlsGetValue(DAT_01f8fc4c);
  local_2c = *(int *)((int)pvVar5 + 0xc);
  if ((*(int *)((int)pvVar5 + 8) < 0x80) || (*(uint *)((int)pvVar5 + 0x10) < local_2c + 0x80U)) {
    local_2c = FUN_0100b780(0x80);
  }
  else {
    *(uint *)((int)pvVar5 + 0xc) = local_2c + 0x80U;
  }
  local_30 = 0x80000020;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0x80000000;
  local_14 = 0x20;
  local_38 = local_2c;
  pvVar5 = TlsGetValue(DAT_01f8fc4c);
  local_18 = *(int *)((int)pvVar5 + 0xc);
  if ((*(int *)((int)pvVar5 + 8) < 0x80) || (*(uint *)((int)pvVar5 + 0x10) < local_18 + 0x80U)) {
    local_18 = FUN_0100b780(0x80);
  }
  else {
    *(uint *)((int)pvVar5 + 0xc) = local_18 + 0x80U;
  }
  local_5c = param_1[1];
  local_1c = 0x80000020;
  local_50 = 0;
  local_24 = local_18;
  if (0 < local_5c) {
    do {
      iVar1 = *(int *)(*param_1 + local_50 * 4);
      uVar6 = (uint)*(byte *)(*(int *)(iVar1 + 0x1c) + 0x20);
      if ((local_44 & 0x3fffffff) < uVar6) {
        uVar7 = (local_44 & 0x3fffffff) * 2;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        FUN_0100a210(&PTR_vftable_018e9b94,&local_4c,uVar7,0x60);
      }
      uVar7 = (uint)*(byte *)(*(int *)(iVar1 + 0x1c) + 0x20);
      local_48 = uVar6;
      if ((local_30 & 0x3fffffff) < uVar7) {
        uVar6 = (local_30 & 0x3fffffff) * 2;
        if (uVar6 <= uVar7) {
          uVar6 = uVar7;
        }
        FUN_0100a210(&PTR_vftable_018e9b94,&local_38,uVar6,4);
      }
      uVar6 = (uint)*(byte *)(*(int *)(iVar1 + 0x1c) + 0x20);
      local_34 = uVar7;
      if ((local_1c & 0x3fffffff) < uVar6) {
        uVar7 = (local_1c & 0x3fffffff) * 2;
        if (uVar7 <= uVar6) {
          uVar7 = uVar6;
        }
        FUN_0100a210(&PTR_vftable_018e9b94,&local_24,uVar7,4);
      }
      local_20 = uVar6;
      FUN_0128ab10();
      pvVar5 = TlsGetValue(DAT_01f8fc54);
      puVar2 = *(undefined4 **)((int)pvVar5 + 4);
      if (puVar2 < *(undefined4 **)((int)pvVar5 + 0xc)) {
        *puVar2 = "TtVehicleJob";
        uVar3 = rdtsc();
        local_54 = (undefined4)uVar3;
        puVar2[1] = local_54;
        *(undefined4 **)((int)pvVar5 + 4) = puVar2 + 3;
      }
      (**(code **)(**(int **)(iVar1 + 0x3c) + 0x10))(*(undefined4 *)(param_2 + 8),iVar1,local_4c);
      FUN_0128d000(param_2,local_4c,local_80,&local_38,&local_24);
      FUN_0128cb90(param_2,local_80,&local_38,&local_24,local_2f0);
      pvVar5 = TlsGetValue(DAT_01f8fc54);
      puVar2 = *(undefined4 **)((int)pvVar5 + 4);
      if (puVar2 < *(undefined4 **)((int)pvVar5 + 0xc)) {
        *puVar2 = &DAT_0164b09c;
        uVar3 = rdtsc();
        local_58 = (undefined4)uVar3;
        puVar2[1] = local_58;
        *(undefined4 **)((int)pvVar5 + 4) = puVar2 + 3;
      }
      FUN_0128b340(local_2f0);
      local_50 = local_50 + 1;
    } while (local_50 < local_5c);
    if (local_18 != local_24) goto LAB_01290444;
  }
  local_20 = 0;
LAB_01290444:
  iVar4 = local_14;
  iVar1 = local_18;
  pvVar5 = TlsGetValue(DAT_01f8fc4c);
  uVar6 = iVar4 * 4 + 0x7fU & 0xffffff80;
  if (((*(int *)((int)pvVar5 + 8) < (int)uVar6) || (uVar6 + iVar1 != *(int *)((int)pvVar5 + 0xc)))
     || (*(int *)((int)pvVar5 + 0x14) == iVar1)) {
    FUN_0100b9b0(iVar1,uVar6);
  }
  else {
    *(int *)((int)pvVar5 + 0xc) = iVar1;
  }
  local_20 = 0;
  if (-1 < (int)local_1c) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_24,local_1c * 4);
  }
  iVar4 = local_28;
  iVar1 = local_2c;
  local_24 = 0;
  local_1c = 0x80000000;
  if (local_2c == local_38) {
    local_34 = 0;
  }
  pvVar5 = TlsGetValue(DAT_01f8fc4c);
  uVar6 = iVar4 * 4 + 0x7fU & 0xffffff80;
  if (((*(int *)((int)pvVar5 + 8) < (int)uVar6) || (uVar6 + iVar1 != *(int *)((int)pvVar5 + 0xc)))
     || (*(int *)((int)pvVar5 + 0x14) == iVar1)) {
    FUN_0100b9b0(iVar1,uVar6);
  }
  else {
    *(int *)((int)pvVar5 + 0xc) = iVar1;
  }
  local_34 = 0;
  if (-1 < (int)local_30) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_38,local_30 * 4);
  }
  iVar4 = local_3c;
  iVar1 = local_40;
  local_38 = 0;
  local_30 = 0x80000000;
  if (local_40 == local_4c) {
    local_48 = 0;
  }
  pvVar5 = TlsGetValue(DAT_01f8fc4c);
  uVar6 = iVar4 * 0x60 + 0x7fU & 0xffffff80;
  if (((*(int *)((int)pvVar5 + 8) < (int)uVar6) || (uVar6 + iVar1 != *(int *)((int)pvVar5 + 0xc)))
     || (*(int *)((int)pvVar5 + 0x14) == iVar1)) {
    FUN_0100b9b0(iVar1,uVar6);
  }
  else {
    *(int *)((int)pvVar5 + 0xc) = iVar1;
  }
  local_48 = 0;
  if (-1 < (int)local_44) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_4c,(local_44 & 0x3fffffff) * 0x60);
  }
  return;
}

// 012905C0  hkpVehicleManager::vf14  size=269  [run]
void __thiscall hkpVehicleManager::vf14(int param_1,undefined4 param_2)

{
  int iVar1;
  LPVOID pvVar2;
  uint uVar3;
  uint uVar4;
  int local_18;
  int local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
  uVar4 = *(uint *)(param_1 + 0xc);
  local_c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0x80000000;
  local_8 = uVar4;
  if (uVar4 != 0) {
    pvVar2 = TlsGetValue(DAT_01f8fc4c);
    local_c = *(int *)((int)pvVar2 + 0xc);
    uVar3 = uVar4 * 4 + 0x7f & 0xffffff80;
    if ((*(int *)((int)pvVar2 + 8) < (int)uVar3) ||
       (*(uint *)((int)pvVar2 + 0x10) < local_c + uVar3)) {
      local_c = FUN_0100b780(uVar3);
    }
    else {
      *(uint *)((int)pvVar2 + 0xc) = local_c + uVar3;
    }
  }
  local_10 = uVar4 | 0x80000000;
  local_18 = local_c;
  FUN_012900b0(&local_18);
  if (local_14 != 0) {
    FUN_01290190(&local_18,param_2);
  }
  uVar4 = local_8;
  iVar1 = local_c;
  if (local_c == local_18) {
    local_14 = 0;
  }
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  uVar4 = uVar4 * 4 + 0x7f & 0xffffff80;
  if (((*(int *)((int)pvVar2 + 8) < (int)uVar4) || (uVar4 + iVar1 != *(int *)((int)pvVar2 + 0xc)))
     || (*(int *)((int)pvVar2 + 0x14) == iVar1)) {
    FUN_0100b9b0(iVar1,uVar4);
  }
  else {
    *(int *)((int)pvVar2 + 0xc) = iVar1;
  }
  local_14 = 0;
  if (-1 < (int)local_10) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_18,local_10 * 4);
  }
  return;
}

// 012906F0  FUN_012906f0  size=28  [run]
void __thiscall FUN_012906f0(int *param_1,int param_2)

{
  param_1[1] = param_1[1] + -1;
  if (param_1[1] != param_2) {
    *(undefined4 *)(*param_1 + param_2 * 4) = *(undefined4 *)(*param_1 + param_1[1] * 4);
  }
  return;
}

// 01290710  FUN_01290710  size=57  [run]
void __thiscall FUN_01290710(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(param_2,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_3;
  param_1[1] = param_1[1] + 1;
  return;
}

// 01290750  FUN_01290750  size=62  [run]
void FUN_01290750(int param_1)

{
  uint uVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  uVar3 = param_1 * 4 + 0x7fU & 0xffffff80;
  uVar1 = *(int *)((int)pvVar2 + 0xc) + uVar3;
  if (((int)uVar3 <= *(int *)((int)pvVar2 + 8)) && (uVar1 <= *(uint *)((int)pvVar2 + 0x10))) {
    *(uint *)((int)pvVar2 + 0xc) = uVar1;
    return;
  }
  FUN_0100b780(uVar3);
  return;
}

// 01290790  FUN_01290790  size=73  [run]
void FUN_01290790(int param_1,int param_2)

{
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  uVar2 = param_2 * 4 + 0x7fU & 0xffffff80;
  if ((((int)uVar2 <= *(int *)((int)pvVar1 + 8)) && (uVar2 + param_1 == *(int *)((int)pvVar1 + 0xc))
      ) && (*(int *)((int)pvVar1 + 0x14) != param_1)) {
    *(int *)((int)pvVar1 + 0xc) = param_1;
    return;
  }
  FUN_0100b9b0(param_1,uVar2);
  return;
}

// 012907E0  FUN_012907e0  size=52  [run]
undefined4 __thiscall FUN_012907e0(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    uVar3 = FUN_0100a210(param_2,param_1,iVar2,0x60);
    return uVar3;
  }
  return 0;
}

// 01290820  FUN_01290820  size=58  [run]
void __thiscall FUN_01290820(int *param_1,undefined4 *param_2)

{
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_0100a290(&PTR_vftable_018e9b94,param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_2;
  param_1[1] = param_1[1] + 1;
  return;
}

// 01290860  FUN_01290860  size=55  [run]
void __thiscall FUN_01290860(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_3) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_3) {
      iVar2 = param_3;
    }
    FUN_0100a210(param_2,param_1,iVar2,0x60);
  }
  *(int *)(param_1 + 4) = param_3;
  return;
}

// 012908A0  FUN_012908a0  size=56  [run]
void __thiscall FUN_012908a0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar2 = uVar1 * 2;
    if (iVar2 <= param_2) {
      iVar2 = param_2;
    }
    FUN_0100a210(&PTR_vftable_018e9b94,param_1,iVar2,0x60);
  }
  *(int *)(param_1 + 4) = param_2;
  return;
}

// 012908E0  FUN_012908e0  size=108  [run]
int * __thiscall FUN_012908e0(int *param_1,uint param_2)

{
  int iVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  iVar1 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = -0x80000000;
  param_1[4] = param_2;
  if (param_2 != 0) {
    pvVar2 = TlsGetValue(DAT_01f8fc4c);
    iVar1 = *(int *)((int)pvVar2 + 0xc);
    uVar3 = param_2 * 4 + 0x7f & 0xffffff80;
    if ((*(int *)((int)pvVar2 + 8) < (int)uVar3) || (*(uint *)((int)pvVar2 + 0x10) < iVar1 + uVar3))
    {
      iVar1 = FUN_0100b780(uVar3);
    }
    else {
      *(uint *)((int)pvVar2 + 0xc) = iVar1 + uVar3;
    }
  }
  param_1[2] = param_2 | 0x80000000;
  *param_1 = iVar1;
  param_1[3] = iVar1;
  return param_1;
}

// 01290950  FUN_01290950  size=143  [run]
void __fastcall FUN_01290950(int *param_1)

{
  int iVar1;
  int iVar2;
  LPVOID pvVar3;
  uint uVar4;
  
  iVar1 = param_1[3];
  if (iVar1 == *param_1) {
    param_1[1] = 0;
  }
  iVar2 = param_1[4];
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  uVar4 = iVar2 * 4 + 0x7fU & 0xffffff80;
  if (((*(int *)((int)pvVar3 + 8) < (int)uVar4) || (uVar4 + iVar1 != *(int *)((int)pvVar3 + 0xc)))
     || (*(int *)((int)pvVar3 + 0x14) == iVar1)) {
    FUN_0100b9b0(iVar1,uVar4);
  }
  else {
    *(int *)((int)pvVar3 + 0xc) = iVar1;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 012909E0  FUN_012909e0  size=108  [run]
int * __thiscall FUN_012909e0(int *param_1,uint param_2)

{
  int iVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  iVar1 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = -0x80000000;
  param_1[4] = param_2;
  if (param_2 != 0) {
    pvVar2 = TlsGetValue(DAT_01f8fc4c);
    iVar1 = *(int *)((int)pvVar2 + 0xc);
    uVar3 = param_2 * 4 + 0x7f & 0xffffff80;
    if ((*(int *)((int)pvVar2 + 8) < (int)uVar3) || (*(uint *)((int)pvVar2 + 0x10) < iVar1 + uVar3))
    {
      iVar1 = FUN_0100b780(uVar3);
    }
    else {
      *(uint *)((int)pvVar2 + 0xc) = iVar1 + uVar3;
    }
  }
  param_1[2] = param_2 | 0x80000000;
  *param_1 = iVar1;
  param_1[3] = iVar1;
  return param_1;
}

// 01290A50  FUN_01290a50  size=143  [run]
void __fastcall FUN_01290a50(int *param_1)

{
  int iVar1;
  int iVar2;
  LPVOID pvVar3;
  uint uVar4;
  
  iVar1 = param_1[3];
  if (iVar1 == *param_1) {
    param_1[1] = 0;
  }
  iVar2 = param_1[4];
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  uVar4 = iVar2 * 4 + 0x7fU & 0xffffff80;
  if (((*(int *)((int)pvVar3 + 8) < (int)uVar4) || (uVar4 + iVar1 != *(int *)((int)pvVar3 + 0xc)))
     || (*(int *)((int)pvVar3 + 0x14) == iVar1)) {
    FUN_0100b9b0(iVar1,uVar4);
  }
  else {
    *(int *)((int)pvVar3 + 0xc) = iVar1;
  }
  param_1[1] = 0;
  if ((param_1[2] & 0x80000000U) == 0) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(*param_1,param_1[2] * 4);
  }
  param_1[2] = -0x80000000;
  *param_1 = 0;
  return;
}

// 01290AE0  FUN_01290ae0  size=20  [run]
void __thiscall FUN_01290ae0(int *param_1,undefined4 param_2,int param_3)

{
  *(bool *)param_2 = *param_1 == param_3;
  return;
}

// 01290B20  hkpVehicleCastBatchingManager::vf0C  size=33  [run]
void __thiscall hkpVehicleCastBatchingManager::vf0C(int param_1,int param_2)

{
  hkpVehicleManager::vf0C(param_2);
  *(short *)(param_1 + 0x14) =
       *(short *)(param_1 + 0x14) + (ushort)*(byte *)(*(int *)(param_2 + 0x1c) + 0x20);
  return;
}

// 01290B50  hkpVehicleCastBatchingManager::vf10  size=33  [run]
void __thiscall hkpVehicleCastBatchingManager::vf10(int param_1,int param_2)

{
  hkpVehicleManager::vf10(param_2);
  *(short *)(param_1 + 0x14) =
       *(short *)(param_1 + 0x14) - (ushort)*(byte *)(*(int *)(param_2 + 0x1c) + 0x20);
  return;
}

// 01290B80  hkpVehicleCastBatchingManager::vf1C  size=40  [run]
void hkpVehicleCastBatchingManager::vf1C(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      FUN_0128ab10();
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return;
}

// 01290BB0  FUN_01290bb0  size=26  [run]
uint FUN_01290bb0(int param_1)

{
  return (*(int *)(*(int *)(param_1 + 0x74) + 0x20) != 2) - 1 & 0x100;
}

// 01290BD0  hkpVehicleCastBatchingManager::vf18  size=373  [run]
void __thiscall
hkpVehicleCastBatchingManager::vf18
          (int *param_1,undefined4 param_2,undefined4 param_3,int *param_4,undefined4 param_5,
          undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  LPVOID pvVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined4 local_8;
  
  (**(code **)(*param_1 + 0x1c))(param_7);
  iVar1 = (**(code **)(*param_1 + 0x20))(param_6,param_7);
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  local_8 = *(int *)((int)pvVar2 + 0xc);
  uVar4 = iVar1 + 0x7fU & 0xffffff80;
  if ((*(int *)((int)pvVar2 + 8) < (int)uVar4) || (*(uint *)((int)pvVar2 + 0x10) < local_8 + uVar4))
  {
    local_8 = FUN_0100b780(uVar4);
  }
  else {
    *(uint *)((int)pvVar2 + 0xc) = local_8 + uVar4;
  }
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  iVar1 = (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 4))(4);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_01019c00(0,1000);
  }
  uVar5 = FUN_01290bb0(param_2,param_6,param_5,iVar1,local_8,param_7);
  iVar3 = (**(code **)((int)((ulonglong)uVar5 >> 0x20) + 0x24))(param_2,(int)uVar5);
  if (iVar3 != 0) {
    FUN_011926b0();
    (**(code **)(*param_4 + 0xc))(param_5,0x15);
    FUN_0100d100(0);
    (**(code **)(*param_4 + 0x10))();
    FUN_01019c40();
    FUN_011926c0();
  }
  if (iVar1 != 0) {
    FUN_01019c30();
    pvVar2 = TlsGetValue(DAT_01f8fc4c);
    (**(code **)(**(int **)((int)pvVar2 + 0x2c) + 8))(iVar1,4);
  }
  (**(code **)(*param_1 + 0x28))(param_3,iVar3,local_8,param_7);
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  if ((((int)uVar4 <= *(int *)((int)pvVar2 + 8)) && (uVar4 + local_8 == *(int *)((int)pvVar2 + 0xc))
      ) && (*(int *)((int)pvVar2 + 0x14) != local_8)) {
    *(int *)((int)pvVar2 + 0xc) = local_8;
    return;
  }
  FUN_0100b9b0(local_8,uVar4);
  return;
}

// 01290DD0  hkpVehicleRayCastBatchingManager::vf20  size=162  [run]
int hkpVehicleRayCastBatchingManager::vf20(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int local_c;
  int local_8;
  
  iVar1 = param_2[1];
  iVar3 = 0;
  uVar5 = 0;
  local_8 = 0;
  local_c = 0;
  if (1 < iVar1) {
    piVar2 = (int *)*param_2;
    iVar4 = (iVar1 - 2U >> 1) + 1;
    iVar3 = iVar4 * 2;
    do {
      local_8 = local_8 + (uint)*(byte *)(*(int *)(*piVar2 + 0x1c) + 0x20);
      local_c = local_c + (uint)*(byte *)(*(int *)(piVar2[1] + 0x1c) + 0x20);
      piVar2 = piVar2 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (iVar3 < iVar1) {
    uVar5 = (uint)*(byte *)(*(int *)(*(int *)(*param_2 + iVar3 * 4) + 0x1c) + 0x20);
  }
  return (uVar5 + local_8 + local_c) * 0xb0 + param_1 * 0x10 + (iVar1 + 0xfU & 0xfffffff0);
}

// 01290E80  FUN_01290e80  size=167  [run]
void FUN_01290e80(int param_1,undefined4 param_2,int *param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int local_c;
  int local_8;
  
  iVar1 = param_4[1];
  uVar3 = 0;
  iVar4 = 0;
  local_8 = 0;
  local_c = 0;
  if (1 < iVar1) {
    piVar2 = (int *)*param_4;
    iVar5 = (iVar1 - 2U >> 1) + 1;
    iVar4 = iVar5 * 2;
    do {
      local_8 = local_8 + (uint)*(byte *)(*(int *)(*piVar2 + 0x1c) + 0x20);
      local_c = local_c + (uint)*(byte *)(*(int *)(piVar2[1] + 0x1c) + 0x20);
      piVar2 = piVar2 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (iVar4 < iVar1) {
    uVar3 = (uint)*(byte *)(*(int *)(*(int *)(*param_4 + iVar4 * 4) + 0x1c) + 0x20);
  }
  iVar5 = uVar3 + local_8 + local_c;
  iVar4 = iVar5 * 0x50 + param_1;
  param_3[1] = iVar4;
  iVar4 = iVar4 + iVar5 * 0x60;
  *param_3 = param_1;
  param_3[3] = (iVar1 + 0xfU & 0xfffffff0) + iVar4;
  param_3[2] = iVar4;
  return;
}

// 01290F30  hkpVehicleRayCastBatchingManager::vf24  size=405  [run]
int hkpVehicleRayCastBatchingManager::vf24
              (int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
              undefined4 param_6,int *param_7)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined2 local_70;
  undefined1 local_6e;
  undefined2 local_6c;
  undefined2 local_6a;
  undefined4 local_60;
  int *local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  int local_4c;
  int local_48;
  int local_34;
  int local_30;
  int local_2c;
  int *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_24 = *(undefined4 *)(param_1 + 0x74);
  local_20 = param_7[1];
  FUN_01290e80(param_6,param_3,&local_34,param_7);
  local_14 = local_34;
  iVar2 = 0;
  local_1c = 0;
  local_18 = local_30;
  iVar1 = 0;
  if (0 < local_20) {
    do {
      iVar1 = *(int *)(*param_7 + iVar2 * 4);
      iVar1 = (**(code **)(**(int **)(iVar1 + 0x3c) + 0x30))
                        (iVar1,local_24,param_2,local_14,local_18);
      if (iVar1 < 1) {
        *(undefined1 *)(local_2c + iVar2) = 0;
      }
      else {
        local_1c = local_1c + iVar1;
        *(char *)(local_2c + iVar2) = (char)iVar1;
        local_14 = local_14 + iVar1 * 0x50;
        local_18 = local_18 + iVar1 * 0x60;
      }
      iVar2 = iVar2 + 1;
      iVar1 = local_1c;
    } while (iVar2 < local_20);
  }
  if (iVar1 <= param_3) {
    param_3 = iVar1;
  }
  if (param_3 != 0) {
    local_20 = iVar1 / param_3;
    local_24 = iVar1 % param_3;
    local_18 = 0;
    local_1c = local_34;
    piVar3 = local_28;
    if (0 < param_3) {
      do {
        local_58 = 0;
        local_6a = 0xffff;
        local_60 = param_5;
        local_70 = 0x300;
        local_6e = 1;
        iVar1 = (uint)(local_18 < local_24) + local_20;
        local_6c = 0x30;
        local_54 = *(undefined4 *)(param_1 + 0x70);
        local_4c = local_1c;
        local_50 = 0x5a;
        *piVar3 = (iVar1 + -1) / 0x5a + 1;
        local_5c = piVar3;
        local_48 = iVar1;
        FUN_0146d7f0();
        FUN_0100ca60(&local_70,1);
        local_1c = local_1c + iVar1 * 0x50;
        local_18 = local_18 + 1;
        piVar3 = piVar3 + 4;
      } while (local_18 < param_3);
    }
    return param_3;
  }
  return 0;
}

// 012910D0  hkpVehicleRayCastBatchingManager::vf28  size=609  [run]
void hkpVehicleRayCastBatchingManager::vf28
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  char cVar2;
  LPVOID pvVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined1 local_2c0 [624];
  int local_50 [2];
  int local_48;
  uint local_40;
  uint local_3c;
  int local_38;
  int local_34;
  int local_30;
  uint local_2c;
  undefined1 *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  local_38 = param_4[1];
  FUN_01290e80(param_3,param_2,local_50,param_4);
  local_18 = local_50[0];
  local_30 = 0;
  local_2c = 0;
  local_28 = (undefined1 *)0x80000000;
  local_20 = 0x10;
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  local_24 = *(int *)((int)pvVar3 + 0xc);
  if ((*(int *)((int)pvVar3 + 8) < 0x600) || (*(uint *)((int)pvVar3 + 0x10) < local_24 + 0x600U)) {
    local_24 = FUN_0100b780(0x600);
  }
  else {
    *(uint *)((int)pvVar3 + 0xc) = local_24 + 0x600U;
  }
  local_28 = &DAT_80000010;
  local_34 = 0;
  local_30 = local_24;
  if (0 < local_38) {
    do {
      iVar6 = local_34;
      local_1c = *(int *)(*param_4 + local_34 * 4);
      uVar7 = (uint)*(byte *)(*(int *)(local_1c + 0x1c) + 0x20);
      if (((uint)local_28 & 0x3fffffff) < uVar7) {
        uVar4 = ((uint)local_28 & 0x3fffffff) * 2;
        if (uVar4 <= uVar7) {
          uVar4 = uVar7;
        }
        FUN_0100a210(&PTR_vftable_018e9b94,&local_30,uVar4,0x60);
      }
      piVar1 = *(int **)(local_1c + 0x3c);
      local_40 = (uint)*(byte *)(*(int *)(local_1c + 0x1c) + 0x20);
      local_14 = local_14 & 0xffffff00;
      local_2c = uVar7;
      if (local_40 != 0) {
        iVar5 = 0;
        do {
          local_3c = (uint)*(byte *)(local_48 + iVar6);
          if ((local_3c == 0) || (*(int *)(local_18 + 0x48) == 0)) {
            (**(code **)(*piVar1 + 0x40))(local_1c,local_14,iVar5 * 0x60 + local_30);
          }
          else {
            (**(code **)(*piVar1 + 0x3c))
                      (local_1c,local_14,*(undefined4 *)(local_18 + 0x40),iVar5 * 0x60 + local_30);
          }
          (**(code **)(*piVar1 + 0x2c))(local_1c,local_14,iVar5 * 0x60 + local_30);
          if (local_3c != 0) {
            local_18 = local_18 + 0x50;
          }
          cVar2 = (char)local_14 + '\x01';
          local_14 = CONCAT31(local_14._1_3_,cVar2);
          iVar5 = (int)cVar2;
          iVar6 = local_34;
        } while (iVar5 < (int)local_40);
      }
      FUN_0128d230(param_1,local_30,local_2c0);
      FUN_0128b340(local_2c0);
      local_34 = iVar6 + 1;
    } while (local_34 < local_38);
    if (local_24 != local_30) goto LAB_012912bb;
  }
  local_2c = 0;
LAB_012912bb:
  iVar5 = local_20;
  iVar6 = local_24;
  pvVar3 = TlsGetValue(DAT_01f8fc4c);
  uVar7 = iVar5 * 0x60 + 0x7fU & 0xffffff80;
  if (((*(int *)((int)pvVar3 + 8) < (int)uVar7) || (uVar7 + iVar6 != *(int *)((int)pvVar3 + 0xc)))
     || (*(int *)((int)pvVar3 + 0x14) == iVar6)) {
    FUN_0100b9b0(iVar6,uVar7);
  }
  else {
    *(int *)((int)pvVar3 + 0xc) = iVar6;
  }
  local_2c = 0;
  if (-1 < (int)local_28) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_30,((uint)local_28 & 0x3fffffff) * 0x60);
  }
  return;
}

// 01291340  FUN_01291340  size=18  [run]
int __thiscall FUN_01291340(int *param_1,int param_2)

{
  return param_2 * 0x60 + *param_1;
}

// 01291360  FUN_01291360  size=92  [run]
undefined2 * __thiscall
FUN_01291360(undefined2 *param_1,undefined4 param_2,int *param_3,undefined4 param_4,int param_5,
            undefined4 param_6,int param_7)

{
  *param_1 = 0x300;
  *(undefined1 *)(param_1 + 1) = 2;
  param_1[2] = 0x30;
  *(undefined4 *)(param_1 + 0xe) = param_2;
  *(undefined4 *)(param_1 + 0x12) = param_4;
  *(int *)(param_1 + 0x14) = param_5;
  param_1[3] = 0xffff;
  *(undefined4 *)(param_1 + 8) = param_6;
  *(int *)(param_1 + 0x10) = param_7;
  *(int **)(param_1 + 10) = param_3;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  *param_3 = (param_5 + -1) / param_7 + 1;
  return param_1;
}

// 012913D0  FUN_012913d0  size=81  [run]
void FUN_012913d0(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  *param_2 = 0;
  iVar2 = 0;
  *param_3 = 0;
  if (0 < param_1[1]) {
    do {
      iVar1 = (**(code **)(**(int **)(*(int *)(*param_1 + iVar2 * 4) + 0x3c) + 0x30))();
      *param_2 = *param_2 + iVar1;
      *param_3 = *param_3 + (uint)*(byte *)(*(int *)(*(int *)(*param_1 + iVar2 * 4) + 0x1c) + 0x20);
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1[1]);
  }
  return;
}

// 01291430  hkpVehicleLinearCastBatchingManager::vf20  size=86  [run]
int hkpVehicleLinearCastBatchingManager::vf20(int param_1,int param_2)

{
  int local_8;
  
  FUN_012913d0(param_2,&param_2,&local_8);
  return param_2 * 0x70 + local_8 * 0x50 + param_1 * 0x10;
}

// 01291490  FUN_01291490  size=93  [run]
void FUN_01291490(int param_1,undefined4 param_2,int *param_3,int param_4)

{
  int local_8;
  
  FUN_012913d0(param_4,&local_8,&param_4);
  *param_3 = param_1;
  param_1 = param_1 + param_4 * 0x50;
  param_3[1] = param_1;
  param_1 = param_1 + local_8 * 0x40;
  param_3[2] = param_1;
  param_3[3] = local_8 * 0x30 + param_1;
  return;
}

// 012914F0  hkpVehicleLinearCastBatchingManager::vf24  size=440  [run]
int hkpVehicleLinearCastBatchingManager::vf24
              (int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
              undefined4 param_6,int *param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined2 local_80;
  undefined1 local_7e;
  undefined2 local_7c;
  undefined2 local_7a;
  undefined4 local_70;
  int *local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  int local_4c;
  int local_48;
  int local_38;
  int local_34;
  int local_30;
  int *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_28 = *(undefined4 *)(param_1 + 0x74);
  local_24 = param_7[1];
  FUN_01291490(param_6,param_3,&local_38,param_7);
  iVar2 = 0;
  local_14 = local_38;
  iVar4 = 0;
  local_20 = 0;
  local_18 = local_34;
  local_1c = local_30;
  if (0 < local_24) {
    do {
      iVar1 = *(int *)(*param_7 + iVar4 * 4);
      iVar3 = (**(code **)(**(int **)(iVar1 + 0x3c) + 0x38))
                        (iVar1,local_28,local_14,local_18,local_1c);
      iVar2 = local_20 + iVar3;
      local_14 = local_14 + (uint)*(byte *)(*(int *)(iVar1 + 0x1c) + 0x20) * 0x50;
      local_18 = local_18 + iVar3 * 0x40;
      local_1c = local_1c + iVar3 * 0x30;
      iVar4 = iVar4 + 1;
      local_20 = iVar2;
    } while (iVar4 < local_24);
  }
  if (iVar2 <= param_3) {
    param_3 = iVar2;
  }
  if (param_3 != 0) {
    local_24 = iVar2 / param_3;
    local_28 = iVar2 % param_3;
    local_1c = 0;
    local_20 = local_34;
    piVar5 = local_2c;
    if (0 < param_3) {
      do {
        local_7e = 2;
        local_7c = 0x40;
        local_68 = *(undefined4 *)(param_1 + 0x70);
        iVar2 = (uint)(local_1c < local_28) + local_24;
        local_4c = local_20;
        local_7a = 0xffff;
        local_60 = 0;
        local_5c = 0x34000000;
        local_70 = param_5;
        local_80 = 0x203;
        local_64 = 0;
        local_50 = 0x80;
        local_58 = 0x3c23d70a;
        local_54 = 10;
        *piVar5 = ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x7fU)) >> 7) + 1;
        local_6c = piVar5;
        local_48 = iVar2;
        FUN_0146d810();
        FUN_0100ca60(&local_80,1);
        local_20 = local_20 + iVar2 * 0x40;
        local_1c = local_1c + 1;
        piVar5 = piVar5 + 4;
      } while (local_1c < param_3);
    }
    return param_3;
  }
  return 0;
}

// 012916B0  hkpVehicleLinearCastBatchingManager::vf28  size=598  [run]
void __thiscall
hkpVehicleLinearCastBatchingManager::vf28
          (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int *piVar1;
  LPVOID pvVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined1 local_2c0 [624];
  undefined1 local_50 [4];
  int local_4c;
  int local_40;
  uint local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  uint local_28;
  undefined1 *local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  iVar4 = *(int *)(param_1 + 0xc);
  local_40 = iVar4;
  local_38 = param_1;
  FUN_01291490(param_4,param_3,local_50,param_5);
  local_34 = local_4c;
  local_2c = 0;
  local_28 = 0;
  local_24 = (undefined1 *)0x80000000;
  local_1c = 0x10;
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  local_20 = *(int *)((int)pvVar2 + 0xc);
  if ((*(int *)((int)pvVar2 + 8) < 0x600) || (*(uint *)((int)pvVar2 + 0x10) < local_20 + 0x600U)) {
    local_20 = FUN_0100b780(0x600);
  }
  else {
    *(uint *)((int)pvVar2 + 0xc) = local_20 + 0x600U;
  }
  local_24 = &DAT_80000010;
  local_18 = 0;
  local_2c = local_20;
  if (0 < iVar4) {
    do {
      iVar4 = *(int *)(*(int *)(param_1 + 8) + local_18 * 4);
      uVar5 = (uint)*(byte *)(*(int *)(iVar4 + 0x1c) + 0x20);
      local_3c = uVar5;
      local_30 = iVar4;
      if (((uint)local_24 & 0x3fffffff) < uVar5) {
        uVar3 = ((uint)local_24 & 0x3fffffff) * 2;
        if (uVar3 <= uVar5) {
          uVar3 = uVar5;
        }
        FUN_0100a210(&PTR_vftable_018e9b94,&local_2c,uVar3,0x60);
      }
      piVar1 = *(int **)(iVar4 + 0x3c);
      local_14 = local_14 & 0xffffff00;
      local_28 = uVar5;
      if (uVar5 != 0) {
        uVar5 = 0;
        do {
          iVar4 = (**(code **)(*piVar1 + 0x3c))(local_14,local_34);
          iVar6 = uVar5 * 0x60;
          if (iVar4 == 0) {
            (**(code **)(*piVar1 + 0x48))(local_30,local_14,iVar6 + local_2c);
          }
          else {
            (**(code **)(*piVar1 + 0x44))(local_30,local_14,iVar4,local_2c + iVar6);
          }
          uVar5 = local_14;
          (**(code **)(*piVar1 + 0x2c))(local_30,local_14,iVar6 + local_2c);
          iVar4 = (**(code **)(*piVar1 + 0x34))(uVar5);
          local_34 = local_34 + iVar4 * 0x40;
          uVar5 = (uint)(byte)((char)local_14 + 1U);
          local_14 = CONCAT31(local_14._1_3_,(char)local_14 + 1U);
        } while ((int)uVar5 < (int)local_3c);
      }
      FUN_0128d230(param_2,local_2c,local_2c0);
      iVar4 = local_18;
      FUN_0128b340(local_2c0);
      local_18 = iVar4 + 1;
      param_1 = local_38;
    } while (local_18 < local_40);
    if (local_20 != local_2c) goto LAB_01291889;
  }
  local_28 = 0;
LAB_01291889:
  iVar6 = local_1c;
  iVar4 = local_20;
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  uVar5 = iVar6 * 0x60 + 0x7fU & 0xffffff80;
  if (((*(int *)((int)pvVar2 + 8) < (int)uVar5) || (uVar5 + iVar4 != *(int *)((int)pvVar2 + 0xc)))
     || (*(int *)((int)pvVar2 + 0x14) == iVar4)) {
    FUN_0100b9b0(iVar4,uVar5);
  }
  else {
    *(int *)((int)pvVar2 + 0xc) = iVar4;
  }
  local_28 = 0;
  if (-1 < (int)local_24) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_2c,((uint)local_24 & 0x3fffffff) * 0x60);
  }
  return;
}

// 01291910  FUN_01291910  size=132  [run]
undefined2 * __thiscall
FUN_01291910(undefined2 *param_1,undefined4 param_2,int *param_3,undefined4 param_4,int param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,int param_9)

{
  *param_1 = 0x203;
  *(undefined1 *)(param_1 + 1) = 2;
  param_1[2] = 0x40;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x1a) = param_4;
  *(int *)(param_1 + 0x1c) = param_5;
  param_1[3] = 0xffff;
  *(undefined4 *)(param_1 + 8) = param_8;
  *(undefined4 *)(param_1 + 0x10) = param_7;
  *(undefined4 *)(param_1 + 0x12) = 0x34000000;
  *(int *)(param_1 + 0x18) = param_9;
  *(int **)(param_1 + 10) = param_3;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x3c23d70a;
  *(undefined4 *)(param_1 + 0x16) = 10;
  *param_3 = (param_5 + -1) / param_9 + 1;
  return param_1;
}

// 012919A0  hkpVehicleDefaultAnalogDriverInput::vf0C  size=150  [run]
void __thiscall
hkpVehicleDefaultAnalogDriverInput::vf0C
          (int *param_1,undefined4 param_2,undefined4 param_3,int param_4,float *param_5)

{
  int iVar1;
  float *pfVar2;
  undefined1 *puVar3;
  float10 fVar4;
  
  pfVar2 = param_5;
  iVar1 = param_4;
  fVar4 = (float10)(**(code **)(*param_1 + 0x10))(param_2,param_3,param_4,param_5);
  *pfVar2 = (float)fVar4;
  fVar4 = (float10)(**(code **)(*param_1 + 0x14))(param_2,param_3,iVar1,pfVar2);
  pfVar2[1] = (float)fVar4;
  fVar4 = (float10)(**(code **)(*param_1 + 0x1c))(param_2,param_3,iVar1,pfVar2);
  pfVar2[2] = (float)fVar4;
  *(undefined1 *)(pfVar2 + 3) = *(undefined1 *)(iVar1 + 0x10);
  puVar3 = (undefined1 *)
           (**(code **)(*param_1 + 0x18))((int)&param_3 + 3,param_2,param_3,iVar1,pfVar2);
  *(undefined1 *)((int)pfVar2 + 0xd) = *puVar3;
  return;
}

// 01291AE0  hkpVehicleDefaultAnalogDriverInput::vf10  size=96  [run]
float10 __thiscall
hkpVehicleDefaultAnalogDriverInput::vf10(int param_1,undefined4 param_2,int param_3,int param_4)

{
  float fVar1;
  
  if ((*(char *)(param_3 + 0xd0) == '\0') || (*(char *)(param_1 + 0x14) == '\0')) {
    fVar1 = *(float *)(param_4 + 0xc);
  }
  else {
    fVar1 = -*(float *)(param_4 + 0xc);
  }
  if ((*(char *)(param_1 + 0x14) == '\0') && (*(char *)(param_3 + 0xd0) != '\0')) {
    return (float10)1;
  }
  if (0.0 < fVar1) {
    return (float10)0;
  }
  return (float10)fVar1 * (float10)-1.0;
}

// 01291B40  hkpVehicleDefaultAnalogDriverInput::vf14  size=73  [run]
float10 __thiscall
hkpVehicleDefaultAnalogDriverInput::vf14(int param_1,undefined4 param_2,int param_3,int param_4)

{
  float fVar1;
  
  if ((*(char *)(param_3 + 0xd0) == '\0') || (*(char *)(param_1 + 0x14) == '\0')) {
    fVar1 = *(float *)(param_4 + 0xc);
  }
  else {
    fVar1 = -*(float *)(param_4 + 0xc);
  }
  if (fVar1 < 0.0) {
    return (float10)0;
  }
  return (float10)fVar1;
}

// 01291B90  hkpVehicleDefaultAnalogDriverInput::vf1C  size=219  [run]
float10 __thiscall
hkpVehicleDefaultAnalogDriverInput::vf1C
          (int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = ABS(*(float *)(param_4 + 8));
  fVar1 = *(float *)(param_1 + 0x10);
  if (fVar5 < fVar1) {
    return (float10)0;
  }
  if (*(float *)(param_4 + 8) <= 0.0) {
    fVar4 = -1.0;
  }
  else {
    fVar4 = 1.0;
  }
  fVar2 = *(float *)(param_1 + 8);
  if (fVar5 < fVar2) {
    return ((float10)fVar5 - (float10)fVar1) * (float10)*(float *)(param_1 + 0xc) * (float10)fVar4;
  }
  fVar3 = (float10)(*(float *)(param_1 + 0xc) * (fVar2 - fVar1));
  return (((float10)fVar5 - (float10)fVar2) *
          (((float10)1 - fVar3) / (((float10)1 - (float10)fVar1) - (float10)(fVar2 - fVar1))) +
         fVar3) * (float10)fVar4;
}

// 01291C70  hkpVehicleDriverInputAnalogStatus::vf0C  size=66  [run]
void __fastcall hkpVehicleDriverInputAnalogStatus::vf0C(int param_1)

{
  LPVOID pvVar1;
  undefined4 *puVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  puVar2 = (undefined4 *)(**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(0x14);
  puVar2[1] = 0x10014;
  *puVar2 = vftable;
  puVar2[2] = *(undefined4 *)(param_1 + 8);
  puVar2[3] = *(undefined4 *)(param_1 + 0xc);
  *(undefined1 *)(puVar2 + 4) = *(undefined1 *)(param_1 + 0x10);
  *(undefined1 *)((int)puVar2 + 0x11) = *(undefined1 *)(param_1 + 0x11);
  return;
}

// 01291CC0  hkpVehicleDefaultAnalogDriverInput::vf18  size=580  [run]
void __thiscall
hkpVehicleDefaultAnalogDriverInput::vf18
          (int param_1,char *param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auVar4 [16];
  int iVar5;
  char cVar6;
  float *pfVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar25;
  float fVar26;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 in_XMM6 [16];
  undefined1 auVar27 [16];
  float local_90 [4];
  float local_80;
  float fStack_7c;
  float fStack_78;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float local_40;
  float fStack_3c;
  float fStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  char local_12;
  char local_11;
  
  if (*(char *)(param_1 + 0x14) == '\0') {
    *param_2 = *(char *)(param_5 + 0x11);
    return;
  }
  iVar3 = *(int *)(param_4 + 0x18);
  uVar1 = *(undefined8 *)(iVar3 + 0x1b0);
  local_12 = *(char *)(param_4 + 0xd0);
  uStack_28 = *(undefined8 *)(iVar3 + 0x1b8);
  local_30._0_4_ = (float)uVar1;
  local_30._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
  fVar9 = (float)local_30 * (float)local_30;
  fVar10 = local_30._4_4_ * local_30._4_4_;
  fVar11 = (float)uStack_28 * (float)uStack_28;
  auVar23._0_4_ = fVar10 + fVar9 + fVar11;
  auVar23._4_4_ = fVar10 + fVar9 + fVar11;
  auVar23._8_4_ = fVar10 + fVar9 + fVar11;
  auVar23._12_4_ = fVar10 + fVar9 + fVar11;
  auVar27 = rsqrtps(in_XMM6,auVar23);
  fVar14 = auVar27._0_4_;
  fVar14 = (float)(~-(uint)(auVar23._0_4_ <= 0.0) &
                  (uint)((3.0 - fVar14 * auVar23._0_4_ * fVar14) * fVar14 * 0.5 * auVar23._0_4_));
  local_11 = fVar14 < 1.388889;
  if (*(float *)(param_5 + 0xc) <= 0.1) {
    cVar6 = '\0';
  }
  else {
    cVar6 = '\x01';
    if (1.1920929e-07 < fVar14) {
      uVar2 = *(undefined8 *)(*(int *)(param_4 + 0x1c) + 0x40);
      local_40 = (float)uVar2;
      fStack_3c = (float)((ulonglong)uVar2 >> 0x20);
      fStack_38 = (float)*(undefined8 *)(*(int *)(param_4 + 0x1c) + 0x48);
      pfVar7 = (float *)(iVar3 + 0xf0);
      pfVar8 = local_90;
      local_30 = uVar1;
      for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
        *pfVar8 = *pfVar7;
        pfVar7 = pfVar7 + 1;
        pfVar8 = pfVar8 + 1;
      }
      fVar14 = local_40 * local_90[0] + fStack_3c * local_80 + fStack_38 * local_70;
      fVar12 = local_40 * local_90[1] + fStack_3c * fStack_7c + fStack_38 * fStack_6c;
      fVar13 = local_40 * local_90[2] + fStack_3c * fStack_78 + fStack_38 * fStack_68;
      auVar22._4_4_ = fVar9;
      auVar22._0_4_ = fVar9;
      auVar22._8_4_ = fVar9;
      auVar22._12_4_ = fVar9;
      fVar15 = fVar10 + fVar9 + fVar11;
      fVar17 = fVar10 + fVar9 + fVar11;
      fVar19 = fVar10 + fVar9 + fVar11;
      auVar27._4_4_ = fVar17;
      auVar27._0_4_ = fVar15;
      auVar27._8_4_ = fVar19;
      auVar27._12_4_ = fVar10 + fVar9 + fVar11;
      auVar23 = rsqrtps(auVar22,auVar27);
      fVar21 = auVar23._0_4_;
      fVar25 = auVar23._4_4_;
      fVar26 = auVar23._8_4_;
      fVar9 = fVar14 * fVar14;
      fVar10 = fVar12 * fVar12;
      fVar11 = fVar13 * fVar13;
      auVar24._4_4_ = fVar9;
      auVar24._0_4_ = fVar9;
      auVar24._8_4_ = fVar9;
      auVar24._12_4_ = fVar9;
      fVar16 = fVar10 + fVar9 + fVar11;
      fVar18 = fVar10 + fVar9 + fVar11;
      fVar20 = fVar10 + fVar9 + fVar11;
      auVar4._4_4_ = fVar18;
      auVar4._0_4_ = fVar16;
      auVar4._8_4_ = fVar20;
      auVar4._12_4_ = fVar10 + fVar9 + fVar11;
      auVar23 = rsqrtps(auVar24,auVar4);
      fVar9 = auVar23._0_4_;
      fVar10 = auVar23._4_4_;
      fVar11 = auVar23._8_4_;
      if ((float)(~-(uint)(fVar20 <= 0.0) & (uint)((3.0 - fVar11 * fVar20 * fVar11) * fVar11 * 0.5))
          * fVar13 *
          (float)(~-(uint)(fVar19 <= 0.0) & (uint)((3.0 - fVar26 * fVar19 * fVar26) * fVar26 * 0.5))
          * (float)uStack_28 +
          (float)(~-(uint)(fVar18 <= 0.0) & (uint)((3.0 - fVar10 * fVar18 * fVar10) * fVar10 * 0.5))
          * fVar12 *
          (float)(~-(uint)(fVar17 <= 0.0) & (uint)((3.0 - fVar25 * fVar17 * fVar25) * fVar25 * 0.5))
          * local_30._4_4_ +
          (float)(~-(uint)(fVar16 <= 0.0) & (uint)((3.0 - fVar9 * fVar16 * fVar9) * fVar9 * 0.5)) *
          fVar14 * (float)(~-(uint)(fVar15 <= 0.0) &
                          (uint)((3.0 - fVar21 * fVar15 * fVar21) * fVar21 * 0.5)) * (float)local_30
          < 1.1920929e-07) goto LAB_01291ebd;
    }
  }
  if (local_12 == '\0') {
    if ((local_11 == '\0') || (cVar6 == '\0')) {
      *param_2 = '\0';
      return;
    }
  }
  else if (local_11 != '\0') {
    *param_2 = cVar6;
    return;
  }
LAB_01291ebd:
  *param_2 = '\x01';
  return;
}

// 01291F80  FUN_01291f80  size=37  [run]
void FUN_01291f80(undefined4 param_1)

{
  LPVOID pvVar1;
  int iVar2;
  
  pvVar1 = TlsGetValue(DAT_01f8fc4c);
  iVar2 = (**(code **)(**(int **)((int)pvVar1 + 0x2c) + 4))(param_1);
  *(short *)(iVar2 + 4) = (short)param_1;
  return;
}

// 01291FB0  FUN_01291fb0  size=36  [run]
void __thiscall FUN_01291fb0(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x11);
  return;
}

// 01292040  hkpVehicleDefaultVelocityDamper::vf0C  size=195  [run]
void __thiscall hkpVehicleDefaultVelocityDamper::vf0C(int param_1,float param_2,int param_3)

{
  int iVar1;
  float fVar2;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  iVar1 = *(int *)(param_3 + 0x18);
  local_20 = (float)*(undefined8 *)(iVar1 + 0x1c0);
  fStack_1c = (float)((ulonglong)*(undefined8 *)(iVar1 + 0x1c0) >> 0x20);
  fStack_18 = (float)*(undefined8 *)(iVar1 + 0x1c8);
  fStack_14 = (float)((ulonglong)*(undefined8 *)(iVar1 + 0x1c8) >> 0x20);
  if (fStack_1c * fStack_1c + local_20 * local_20 + fStack_18 * fStack_18 <=
      *(float *)(param_1 + 0x10) * *(float *)(param_1 + 0x10)) {
    fVar2 = *(float *)(param_1 + 8);
  }
  else {
    fVar2 = *(float *)(param_1 + 0xc);
  }
  fVar2 = 1.0 - fVar2 * param_2;
  if (fVar2 < 0.0) {
    fVar2 = 0.0;
  }
  _local_20 = CONCAT44(fVar2 * fStack_1c,fVar2 * local_20);
  _fStack_18 = CONCAT44(fVar2 * fStack_14,fVar2 * fStack_18);
  FUN_0118fe70();
  (**(code **)(*(int *)(iVar1 + 0xe0) + 0x44))(&local_20);
  return;
}

// 01292110  FUN_01292110  size=41  [run]
float10 FUN_01292110(float param_1,float param_2,float param_3,float param_4)

{
  return ((float10)param_3 /
         ((((float10)param_1 * (float10)1.605 * (float10)0.2777778) / (float10)param_2) *
          (float10)60.0 * (float10)0.15915494)) / (float10)param_4;
}

// 01292150  hkpVehicleDefaultTransmission::vf20  size=66  [run]
float10 __thiscall hkpVehicleDefaultTransmission::vf20(int param_1,undefined4 param_2,int param_3)

{
  if (*(char *)(param_3 + 0xd) != '\0') {
    return (float10)*(float *)(param_1 + 0x10) * (float10)-*(float *)(param_1 + 0x18);
  }
  return (float10)*(float *)(param_1 + 0x10) *
         (float10)*(float *)(*(int *)(param_1 + 0x1c) + *(char *)(param_3 + 0xe) * 4);
}

// 012921A0  hkpVehicleDefaultTransmission::vf0C  size=124  [run]
void __thiscall
hkpVehicleDefaultTransmission::vf0C
          (int *param_1,undefined4 param_2,undefined4 param_3,float *param_4)

{
  float *pfVar1;
  undefined1 *puVar2;
  int iVar3;
  float10 fVar4;
  
  pfVar1 = param_4;
  puVar2 = (undefined1 *)(**(code **)(*param_1 + 0x18))((int)&param_4 + 3,param_3,param_4);
  *(undefined1 *)((int)pfVar1 + 0xd) = *puVar2;
  fVar4 = (float10)(**(code **)(*param_1 + 0x10))(param_3,pfVar1);
  pfVar1[1] = (float)fVar4;
  fVar4 = (float10)(**(code **)(*param_1 + 0x14))(param_3,pfVar1);
  *pfVar1 = (float)fVar4;
  iVar3 = 0;
  if (0 < param_1[0xb]) {
    do {
      *(float *)((int)pfVar1[2] + iVar3 * 4) = *(float *)(param_1[10] + iVar3 * 4) * pfVar1[1];
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[0xb]);
  }
  (**(code **)(*param_1 + 0x1c))(param_2,param_3,pfVar1);
  return;
}

// 01292220  hkpVehicleDefaultTransmission::vf10  size=48  [run]
float10 __thiscall hkpVehicleDefaultTransmission::vf10(int *param_1,int param_2,int param_3)

{
  float fVar1;
  float10 fVar2;
  
  if (*(char *)(param_3 + 0xf) != '\0') {
    return (float10)0;
  }
  fVar1 = *(float *)(param_2 + 0xb4);
  fVar2 = (float10)(**(code **)(*param_1 + 0x20))(param_2,param_3);
  return fVar2 * (float10)fVar1;
}

// 01292250  hkpVehicleDefaultTransmission::vf14  size=332  [run]
float10 __thiscall hkpVehicleDefaultTransmission::vf14(int *param_1,int param_2,undefined4 param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  float10 fVar14;
  float fVar15;
  float local_8;
  
  fVar15 = 0.0;
  iVar13 = (int)*(char *)(*(int *)(param_2 + 0x1c) + 0x20);
  iVar11 = 0;
  local_8 = 0.0;
  if (3 < iVar13) {
    pfVar9 = (float *)(param_1[10] + 8);
    pfVar10 = (float *)(*(int *)(param_2 + 0x48) + 0x1a4);
    iVar12 = (iVar13 - 4U >> 2) + 1;
    iVar11 = iVar12 * 4;
    do {
      pfVar4 = pfVar10 + -0x38;
      pfVar1 = pfVar9 + -2;
      fVar7 = *pfVar10;
      pfVar2 = pfVar9 + -1;
      pfVar5 = pfVar10 + 0x38;
      fVar8 = *pfVar9;
      pfVar6 = pfVar10 + 0x70;
      pfVar3 = pfVar9 + 1;
      pfVar9 = pfVar9 + 4;
      pfVar10 = pfVar10 + 0xe0;
      iVar12 = iVar12 + -1;
      fVar15 = *pfVar6 * 60.0 * 0.15915494 * *pfVar3 +
               *pfVar4 * 60.0 * 0.15915494 * *pfVar1 + fVar15 + fVar7 * 60.0 * 0.15915494 * *pfVar2
               + *pfVar5 * 60.0 * 0.15915494 * fVar8;
      local_8 = fVar15;
    } while (iVar12 != 0);
  }
  if (iVar11 < iVar13) {
    pfVar9 = (float *)(param_1[10] + iVar11 * 4);
    pfVar10 = (float *)(iVar11 * 0xe0 + 0xc4 + *(int *)(param_2 + 0x48));
    iVar13 = iVar13 - iVar11;
    do {
      fVar15 = *pfVar10;
      fVar7 = *pfVar9;
      pfVar10 = pfVar10 + 0x38;
      pfVar9 = pfVar9 + 1;
      iVar13 = iVar13 + -1;
      local_8 = local_8 + fVar15 * 60.0 * 0.15915494 * fVar7;
    } while (iVar13 != 0);
  }
  fVar14 = (float10)(**(code **)(*param_1 + 0x20))(param_2,param_3);
  if ((float10)0 <= fVar14 * (float10)local_8) {
    return (float10)(float)(fVar14 * (float10)local_8);
  }
  return (float10)0.0;
}

// 012923B0  hkpVehicleDefaultTransmission::vf1C  size=120  [run]
void __thiscall
hkpVehicleDefaultTransmission::vf1C(int param_1,float param_2,undefined4 param_3,float *param_4)

{
  float fVar1;
  
  fVar1 = param_4[4];
  param_4[4] = fVar1 - param_2;
  if ((*(char *)((int)param_4 + 0xf) != '\0') && (fVar1 - param_2 <= 0.0)) {
    *(undefined1 *)((int)param_4 + 0xf) = 0;
  }
  if (*(char *)((int)param_4 + 0xd) == '\0') {
    if ((*param_4 <= *(float *)(param_1 + 8) && *(float *)(param_1 + 8) != *param_4) &&
       ('\0' < *(char *)((int)param_4 + 0xe))) {
      *(char *)((int)param_4 + 0xe) = *(char *)((int)param_4 + 0xe) + -1;
      param_4[4] = *(float *)(param_1 + 0x14);
      *(undefined1 *)((int)param_4 + 0xf) = 1;
    }
    if (*(float *)(param_1 + 0xc) <= *param_4 && *param_4 != *(float *)(param_1 + 0xc)) {
      if (*(char *)((int)param_4 + 0xe) + 1 < *(int *)(param_1 + 0x20)) {
        *(char *)((int)param_4 + 0xe) = *(char *)((int)param_4 + 0xe) + '\x01';
        param_4[4] = *(float *)(param_1 + 0x14);
        *(undefined1 *)((int)param_4 + 0xf) = 1;
      }
    }
  }
  return;
}

// 01292430  hkpVehicleDefaultTransmission::vf18  size=41  [run]
void hkpVehicleDefaultTransmission::vf18(undefined1 *param_1,int param_2,int param_3)

{
  if ((*(char *)(param_2 + 0xb0) != '\0') && (*(char *)(param_3 + 0xe) < '\x01')) {
    *param_1 = 1;
    return;
  }
  *param_1 = 0;
  return;
}

// 012924F0  hkpVehicleDefaultSteering::vf0C  size=88  [run]
void __thiscall
hkpVehicleDefaultSteering::vf0C
          (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 *param_5
          )

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x10))(param_2,param_3,param_4,param_5);
  iVar1 = 0;
  if (0 < param_1[5]) {
    do {
      if (*(char *)(iVar1 + param_1[4]) == '\0') {
        *(undefined4 *)(param_5[2] + iVar1 * 4) = 0;
      }
      else {
        *(undefined4 *)(param_5[2] + iVar1 * 4) = *param_5;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_1[5]);
  }
  return;
}

// 01292550  hkpVehicleDefaultSteering::vf10  size=164  [run]
void __thiscall
hkpVehicleDefaultSteering::vf10
          (int param_1,undefined4 param_2,int param_3,int param_4,float *param_5)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float local_20;
  float fStack_1c;
  float fStack_18;
  
  iVar1 = *(int *)(param_3 + 0x18);
  iVar2 = *(int *)(param_3 + 0x1c);
  fVar3 = *(float *)(param_4 + 8) * *(float *)(param_1 + 8);
  *param_5 = fVar3;
  param_5[1] = fVar3;
  FUN_01006f50(iVar1 + 0xf0,iVar2 + 0x40);
  iVar1 = *(int *)(param_3 + 0x18);
  fVar3 = *(float *)(iVar1 + 0x1b4) * fStack_1c + *(float *)(iVar1 + 0x1b0) * local_20 +
          *(float *)(iVar1 + 0x1b8) * fStack_18;
  if (*(float *)(param_1 + 0xc) < fVar3) {
    fVar3 = *(float *)(param_1 + 0xc) / fVar3;
    *param_5 = *param_5 * fVar3 * fVar3;
  }
  return;
}

// 01292630  hkpVehicleDefaultEngine::vf0C  size=372  [run]
void __thiscall
hkpVehicleDefaultEngine::vf0C
          (int param_1,undefined4 param_2,undefined4 param_3,float *param_4,float *param_5,
          float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = *param_5;
  param_6[1] = fVar4;
  fVar2 = *(float *)(param_1 + 8);
  fVar1 = *param_4;
  if (fVar4 < fVar2) {
    fVar3 = fVar2 * 0.5;
    fVar5 = *(float *)(param_1 + 0x2c) * fVar1;
    if (fVar3 <= fVar4) {
      param_6[1] = ((fVar4 - fVar3) * fVar5) / (*(float *)(param_1 + 8) - fVar3) +
                   *(float *)(param_1 + 8);
    }
    else {
      param_6[1] = fVar2 + fVar5;
    }
  }
  fVar4 = *(float *)(param_1 + 0xc);
  fVar2 = 0.0;
  fVar3 = param_6[1] - fVar4;
  if (0.0 <= fVar3) {
    fVar5 = *(float *)(param_1 + 0x10);
    if (fVar5 <= param_6[1]) {
      param_6[1] = fVar5;
      fVar4 = *(float *)(param_1 + 0x28);
    }
    else {
      fVar2 = 1.0 / (fVar5 - fVar4);
      fVar4 = (*(float *)(param_1 + 0x28) - *(float *)(param_1 + 0x24)) * fVar2 * fVar3 +
              *(float *)(param_1 + 0x24);
      fVar2 = ((*(float *)(param_1 + 0x1c) - 1.0) * fVar2 * fVar2 * fVar3 * fVar3 + 1.0) *
              *(float *)(param_1 + 0x14);
    }
    fVar4 = fVar4 * *(float *)(param_1 + 0x14);
  }
  else {
    fVar5 = *(float *)(param_1 + 8);
    fVar2 = 1.0 / (fVar5 - fVar4);
    fVar4 = ((*(float *)(param_1 + 0x20) - *(float *)(param_1 + 0x24)) * fVar2 * fVar3 +
            *(float *)(param_1 + 0x24)) * *(float *)(param_1 + 0x14);
    fVar2 = ((*(float *)(param_1 + 0x18) - 1.0) * fVar2 * fVar2 * fVar3 * fVar3 + 1.0) *
            *(float *)(param_1 + 0x14);
    if (*param_5 < fVar5) {
      *param_6 = fVar2 * fVar1 - fVar4 * (*param_5 / fVar5);
      return;
    }
  }
  *param_6 = fVar2 * fVar1 - fVar4;
  return;
}

// 01292850  hkpVehicleDefaultAerodynamics::vf14  size=29  [run]
float10 __thiscall hkpVehicleDefaultAerodynamics::vf14(int param_1,float param_2)

{
  return (float10)param_2 *
         (float10)*(float *)(param_1 + 8) * (float10)0.5 * (float10)*(float *)(param_1 + 0x14) *
         (float10)*(float *)(param_1 + 0xc) * (float10)param_2;
}

// 012928E0  hkpVehicleDefaultAerodynamics::vf10  size=74  [run]
float10 __thiscall hkpVehicleDefaultAerodynamics::vf10(int param_1,float param_2)

{
  return (float10)*(float *)(param_1 + 8) * (float10)-0.5 * (float10)*(float *)(param_1 + 0x10) *
         (float10)*(float *)(param_1 + 0xc) * (float10)ABS(param_2) * (float10)param_2;
}

// 01292930  hkpVehicleDefaultAerodynamics::vf0C  size=322  [run]
void __thiscall
hkpVehicleDefaultAerodynamics::vf0C(int *param_1,undefined4 param_2,int param_3,float *param_4)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float10 fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  
  iVar2 = *(int *)(param_3 + 0x18);
  iVar3 = *(int *)(param_3 + 0x1c);
  fVar4 = *(float *)(iVar3 + 0x40);
  fVar5 = *(float *)(iVar3 + 0x44);
  fVar6 = *(float *)(iVar3 + 0x48);
  fVar7 = *(float *)(iVar2 + 0x100);
  fVar8 = *(float *)(iVar2 + 0x104);
  fVar9 = *(float *)(iVar2 + 0x108);
  fVar10 = *(float *)(iVar2 + 0x10c);
  fVar11 = *(float *)(iVar2 + 0xf0);
  fVar12 = *(float *)(iVar2 + 0xf4);
  fVar13 = *(float *)(iVar2 + 0xf8);
  fVar14 = *(float *)(iVar2 + 0xfc);
  fVar15 = *(float *)(iVar2 + 0x110);
  fVar16 = *(float *)(iVar2 + 0x114);
  fVar17 = *(float *)(iVar2 + 0x118);
  fVar18 = *(float *)(iVar2 + 0x11c);
  fVar24 = fVar4 * fVar11 + fVar5 * fVar7 + fVar6 * fVar15;
  fVar25 = fVar4 * fVar12 + fVar5 * fVar8 + fVar6 * fVar16;
  fVar26 = fVar4 * fVar13 + fVar5 * fVar9 + fVar6 * fVar17;
  fVar19 = *(float *)(iVar3 + 0x30);
  fVar20 = *(float *)(iVar3 + 0x34);
  fVar21 = *(float *)(iVar3 + 0x38);
  fVar23 = *(float *)(iVar2 + 0x1b8) * fVar26 +
           *(float *)(iVar2 + 0x1b4) * fVar25 + *(float *)(iVar2 + 0x1b0) * fVar24;
  fVar22 = (float10)(**(code **)(*param_1 + 0x10))(fVar23);
  fVar1 = (float)fVar22;
  fVar22 = (float10)(**(code **)(*param_1 + 0x14))(fVar23);
  fVar23 = (float)fVar22;
  *param_4 = (fVar19 * fVar11 + fVar20 * fVar7 + fVar21 * fVar15) * fVar23 + fVar1 * fVar24;
  param_4[1] = (fVar19 * fVar12 + fVar20 * fVar8 + fVar21 * fVar16) * fVar23 + fVar1 * fVar25;
  param_4[2] = (fVar19 * fVar13 + fVar20 * fVar9 + fVar21 * fVar17) * fVar23 + fVar1 * fVar26;
  param_4[3] = (fVar19 * fVar14 + fVar20 * fVar10 + fVar21 * fVar18) * fVar23 +
               fVar1 * (fVar4 * fVar14 + fVar5 * fVar10 + fVar6 * fVar18);
  fVar22 = (float10)FUN_011a2a30();
  fVar1 = (float)fVar22;
  fVar23 = (float)param_1[9];
  fVar4 = (float)param_1[10];
  fVar5 = (float)param_1[0xb];
  *param_4 = fVar1 * (float)param_1[8] + *param_4;
  param_4[1] = fVar1 * fVar23 + param_4[1];
  param_4[2] = fVar1 * fVar4 + param_4[2];
  param_4[3] = fVar1 * fVar5 + param_4[3];
  param_4[4] = 0.0;
  param_4[5] = 0.0;
  param_4[6] = 0.0;
  param_4[7] = 0.0;
  return;
}

// 01292AB0  FUN_01292ab0  size=36  [run]
int FUN_01292ab0(int param_1)

{
  return *(int *)(param_1 + 4) * 0x280;
}

// 01292AE0  FUN_01292ae0  size=38  [run]
void FUN_01292ae0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      FUN_0128ab10();
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return;
}

// 01292B10  FUN_01292b10  size=33  [run]
void FUN_01292b10(int param_1,int param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  *param_3 = param_2;
  param_3[1] = iVar1 * 0x10 + param_2;
  return;
}

// 01292B40  FUN_01292b40  size=77  [run]
void FUN_01292b40(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *local_c [2];
  
  FUN_01292b10(param_1,param_3,local_c);
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      FUN_0128b340(*local_c[0]);
      iVar2 = iVar2 + 1;
      local_c[0] = local_c[0] + 4;
    } while (iVar2 < iVar1);
  }
  return;
}

// 01292B90  FUN_01292b90  size=34  [run]
undefined4 FUN_01292b90(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xc;
  if (*(char *)(*(int *)(*(int *)*param_1 + 0x3c) + 9) == '\x02') {
    uVar1 = 6;
  }
  return uVar1;
}

// 01292BC0  FUN_01292bc0  size=105  [run]
void FUN_01292bc0(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  char cVar3;
  
  if (*(char *)(param_1 + 9) != '\x02') {
    (**(code **)(**(int **)(param_1 + 0x10) + 0x2c))();
    *param_3 = param_4;
    return;
  }
  iVar1 = *(int *)(param_1 + 0x14);
  cVar3 = '\0';
  if (0 < iVar1) {
    iVar2 = 0;
    do {
      (**(code **)(**(int **)(iVar2 * 0x60 + *(int *)(param_1 + 0x10)) + 0x2c))();
      cVar3 = cVar3 + '\x01';
      iVar2 = (int)cVar3;
    } while (iVar2 < iVar1);
    *param_3 = param_4;
    return;
  }
  *param_3 = param_4;
  return;
}

// 01292C30  FUN_01292c30  size=304  [run]
int FUN_01292c30(int *param_1,undefined4 param_2,undefined8 *param_3,int param_4,undefined4 param_5,
                undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 local_60;
  undefined1 local_5e;
  undefined2 local_5c;
  undefined2 local_5a;
  int local_50;
  int local_4c;
  int local_48;
  undefined8 local_40;
  undefined8 local_38;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  FUN_01292b10(param_1,param_6,&local_28);
  local_18 = param_1[1];
  local_1c = 0;
  iVar2 = 0;
  local_14 = local_24;
  iVar3 = local_28;
  iVar1 = local_18;
  if (0 < local_18) {
    do {
      local_1c = iVar1;
      iVar1 = *(int *)(*param_1 + iVar2 * 4);
      FUN_01292bc0(*(undefined4 *)(iVar1 + 0x3c),iVar1,iVar3,local_14);
      local_14 = local_14 + 0x270;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x10;
      iVar1 = local_1c;
    } while (iVar2 < local_18);
  }
  if (local_1c <= param_4) {
    param_4 = local_1c;
  }
  if (param_4 != 0) {
    local_20 = local_1c / param_4;
    local_1c = local_1c % param_4;
    iVar3 = 0;
    local_14 = 0;
    local_18 = local_28;
    if (0 < param_4) {
      do {
        local_5c = 0x30;
        local_5a = 0xffff;
        local_60 = 0x1000;
        iVar1 = (uint)(iVar3 < local_1c) + local_20;
        local_5e = 2;
        local_40 = *param_3;
        local_38 = param_3[1];
        local_50 = local_18;
        local_4c = *param_1 + local_14 * 4;
        local_48 = iVar1;
        FUN_01293030();
        FUN_0100ca60(&local_60,0);
        local_14 = local_14 + iVar1;
        local_18 = local_18 + iVar1 * 0x10;
        iVar3 = iVar3 + 1;
      } while (iVar3 < param_4);
    }
    return param_4;
  }
  return 0;
}

// 01292D60  FUN_01292d60  size=234  [run]
void FUN_01292d60(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  LPVOID pvVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = FUN_01292ab0(param_1);
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  iVar3 = *(int *)((int)pvVar2 + 0xc);
  uVar4 = iVar1 + 0x7fU & 0xffffff80;
  if ((*(int *)((int)pvVar2 + 8) < (int)uVar4) || (*(uint *)((int)pvVar2 + 0x10) < iVar3 + uVar4)) {
    iVar3 = FUN_0100b780(uVar4);
  }
  else {
    *(uint *)((int)pvVar2 + 0xc) = iVar3 + uVar4;
  }
  FUN_01292ae0(param_1);
  iVar1 = FUN_01292c30(param_1,param_2,param_3,param_6,param_5,iVar3);
  if (iVar1 != 0) {
    FUN_011926b0();
    (**(code **)(*param_4 + 0xc))(param_5,0x15);
    FUN_0100d100(1);
    (**(code **)(*param_4 + 0x10))();
    FUN_011926c0();
    FUN_01292b40(param_1,param_3,iVar3);
  }
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  if ((((int)uVar4 <= *(int *)((int)pvVar2 + 8)) && (uVar4 + iVar3 == *(int *)((int)pvVar2 + 0xc)))
     && (*(int *)((int)pvVar2 + 0x14) != iVar3)) {
    *(int *)((int)pvVar2 + 0xc) = iVar3;
    return;
  }
  FUN_0100b9b0(iVar3,uVar4);
  return;
}

// 01292E50  hkpMultithreadedVehicleManager::vf18  size=319  [run]
void __thiscall
hkpMultithreadedVehicleManager::vf18
          (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6)

{
  int iVar1;
  LPVOID pvVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int local_18;
  int local_14;
  uint local_10;
  int local_c;
  uint local_8;
  
  uVar5 = *(uint *)(param_1 + 0xc);
  local_c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0x80000000;
  local_8 = uVar5;
  if (uVar5 != 0) {
    pvVar2 = TlsGetValue(DAT_01f8fc4c);
    local_c = *(int *)((int)pvVar2 + 0xc);
    uVar4 = uVar5 * 4 + 0x7f & 0xffffff80;
    if ((*(int *)((int)pvVar2 + 8) < (int)uVar4) ||
       (*(uint *)((int)pvVar2 + 0x10) < local_c + uVar4)) {
      local_c = FUN_0100b780(uVar4);
    }
    else {
      *(uint *)((int)pvVar2 + 0xc) = local_c + uVar4;
    }
  }
  local_10 = uVar5 | 0x80000000;
  local_18 = local_c;
  FUN_012900b0(&local_18);
  iVar1 = local_14;
  if (local_14 != 0) {
    iVar3 = FUN_01292b90(&local_18);
    if (iVar1 < iVar3) {
      FUN_01290190(&local_18,param_3);
    }
    else {
      FUN_01292d60(&local_18,param_2,param_3,param_4,param_5,param_6);
    }
  }
  uVar5 = local_8;
  iVar1 = local_c;
  if (local_c == local_18) {
    local_14 = 0;
  }
  pvVar2 = TlsGetValue(DAT_01f8fc4c);
  uVar5 = uVar5 * 4 + 0x7f & 0xffffff80;
  if (((*(int *)((int)pvVar2 + 8) < (int)uVar5) || (uVar5 + iVar1 != *(int *)((int)pvVar2 + 0xc)))
     || (*(int *)((int)pvVar2 + 0x14) == iVar1)) {
    FUN_0100b9b0(iVar1,uVar5);
  }
  else {
    *(int *)((int)pvVar2 + 0xc) = iVar1;
  }
  local_14 = 0;
  if (-1 < (int)local_10) {
    (**(code **)(PTR_vftable_018e9b94 + 0x10))(local_18,local_10 * 4);
  }
  return;
}

