// src/misc/PlayerNullCamera.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00AA60D0..00BA86D0, 7 functions

#include "mgrr.h"
#include "PlayerNullCamera.h"

// 00AA60D0  PlayerNullCamera::PlayerNullCamera  size=18  [class]
undefined4 * __fastcall PlayerNullCamera::PlayerNullCamera(undefined4 *param_1)

{
  Behavior::Behavior_95();
  *param_1 = vftable;
  return param_1;
}

// 00AA60F0  PlayerNullCamera::vf04  size=6  [class]
undefined * PlayerNullCamera::vf04(void)

{
  return &DAT_01be9dd8;
}

// 00AB6600  PlayerNullCamera::vf00  size=105  [class]
undefined4 * __thiscall PlayerNullCamera::vf00(undefined4 *param_1,byte param_2)

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

// 00B80A00  PlayerNullCamera::vf40  size=12  [class]
bool PlayerNullCamera::vf40(void)

{
  int iVar1;
  
  iVar1 = Behavior::startup();
  return iVar1 != 0;
}

// 00B80A20  FUN_00b80a20  size=153  [callgraph]
void __fastcall FUN_00b80a20(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    FUN_00a9e290(&DAT_0163b5f4,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  iVar1 = FUN_00a92f90();
  if (iVar1 != 0) {
    FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e22f10(0);
  }
  (**(code **)(*param_1 + 100))();
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00a8caf0(0,0,0,0);
  }
  return;
}

// 00B80AC0  FUN_00b80ac0  size=215  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00b80ac0(int *param_1)

{
  float fVar1;
  int iVar2;
  
  if (param_1[0x187] == 0) {
    FUN_00a9e290(&DAT_01641bdc,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x21e] = 1;
    if ((float)param_1[0x21c] < 0.0) {
      param_1[0x21e] = 0;
    }
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  iVar2 = FUN_00a92f90();
  if (iVar2 != 0) {
    FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e22f10(0);
  }
  (**(code **)(*param_1 + 100))();
  fVar1 = (float)param_1[0x21c] - _DAT_01be942c;
  param_1[0x21c] = (int)fVar1;
  if ((param_1[0x21e] != 0) && (fVar1 < 0.0)) {
    FUN_00a8caf0(0,0,0,0);
    return;
  }
  return;
}

// 00BA86D0  PlayerNullCamera::vf4C  size=43  [class]
void __fastcall PlayerNullCamera::vf4C(int param_1)

{
  int iVar1;
  
  Behavior::vf4C();
  iVar1 = *(int *)(param_1 + 0x618);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      FUN_00b80a20();
      return;
    }
    if (iVar1 == 2) {
      FUN_00b80ac0();
      return;
    }
  }
  return;
}

