// src/room/r004.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A72790..00A7B3C0, 4 functions

#include "mgrr.h"
#include "cR004.h"

// 00A72790  cR004::vf04  size=371  [class]
void __fastcall cR004::vf04(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_120 [284];
  
  if (*(int *)(param_1 + 0x80) != 0) {
    FUN_00a5e860(0x3c888889);
  }
  iVar2 = FUN_00dd9400(10);
  uVar1 = DAT_01be8e58;
  if (iVar2 != 0) {
    FUN_00e01ca0();
    FUN_00dffb20(param_1 + 0x150);
    FUN_00dffba0(param_1 + 0x90);
    FUN_00e020f0(uVar1);
    FUN_00e00fb0(0,0xff,local_120);
    return;
  }
  iVar2 = FUN_00dd9400(9);
  if (iVar2 != 0) {
    (**(code **)(*(int *)(param_1 + 0x150) + 8))(0x41f00000,0,0);
    return;
  }
  iVar2 = FUN_00dd9400(0x8d);
  if (iVar2 != 0) {
    *(float *)(param_1 + 0x90) = *(float *)(param_1 + 0x90) + 0.5;
    return;
  }
  iVar2 = FUN_00dd9400(0x8e);
  if (iVar2 != 0) {
    *(float *)(param_1 + 0x90) = *(float *)(param_1 + 0x90) - 0.5;
    return;
  }
  iVar2 = FUN_00dd9400(0x8f);
  if (iVar2 != 0) {
    *(float *)(param_1 + 0x94) = *(float *)(param_1 + 0x94) + 0.5;
    return;
  }
  iVar2 = FUN_00dd9400(0x8c);
  if (iVar2 != 0) {
    *(float *)(param_1 + 0x94) = *(float *)(param_1 + 0x94) - 0.5;
  }
  return;
}

// 00A72910  cR004::vf08  size=100  [class]
void __fastcall cR004::vf08(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0x20];
  if (iVar1 != 0) {
    FUN_00a54c70();
    FUN_00dd4920(iVar1);
    param_1[0x20] = 0;
  }
  FUN_00a71970();
  (**(code **)(*param_1 + 0x18))();
  FUN_00dd7270();
  (**(code **)(param_1[0x28] + 4))();
                    /* WARNING: Could not recover jumptable at 0x00a72972. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[0x54] + 4))();
  return;
}

// 00A77B90  cR004::vf00  size=55  [class]
void __fastcall cR004::vf00(int param_1)

{
  FUN_00dd7240();
  FUN_00a73700(0x20);
  FUN_00a71970();
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  return;
}

// 00A7B3C0  cR004::vf14  size=84  [class]
undefined4 * __thiscall cR004::vf14(undefined4 *param_1,byte param_2)

{
  EspControllerBullet::~EspControllerBullet();
  cEspControler::~cEspControler();
  *param_1 = cRoomAbstract::vftable;
  FUN_00dd7270();
  param_1[4] = lib::Array<cRoomAbstract::stRoomEspUnit*>::vftable;
  if (param_1[5] != 0) {
    param_1[6] = 0;
  }
  param_1[5] = 0;
  param_1[7] = 0;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

