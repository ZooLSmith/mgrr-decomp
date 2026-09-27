// src/misc/cUpdatePop.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00990760..009A2050, 8 functions

#include "types.h"

// 00990760  cUpdatePop::cUpdatePop_2  size=18  [class]
undefined4 * __fastcall cUpdatePop::cUpdatePop_2(undefined4 *param_1)

{
  cCustomObjCtrlManager::cCustomObjCtrlManager_17();
  *param_1 = vftable;
  return param_1;
}

// 00990780  cUpdatePop::cUpdatePop  size=27  [class]
void __fastcall cUpdatePop::cUpdatePop(undefined4 *param_1)

{
  *param_1 = vftable;
  FUN_00cfe0f0(0xe);
  cCustomObjCtrlManager::cCustomObjCtrlManager_37();
  return;
}

// 009907F0  cUpdatePop::vf0C  size=98  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall cUpdatePop::vf0C(int param_1)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    local_20 = _DAT_0188edc0;
    local_1c = _DAT_0188edc4;
    local_18 = _DAT_0188edc8;
    local_14 = _DAT_0188edcc;
    FUN_00cfdc80(0xe,0,0,0,&local_20,1);
  }
  return;
}

// 00990860  FUN_00990860  size=178  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00990860(int param_1,float param_2,float param_3,int param_4)

{
  float10 fVar1;
  undefined4 uVar2;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  fVar1 = (float10)FUN_00cad4b0();
  FUN_00cb28a0(*(undefined4 *)(param_1 + 0x1c),(float)((float10)param_2 / fVar1));
  fVar1 = (float10)FUN_00cad4d0();
  FUN_00cb2900(*(undefined4 *)(param_1 + 0x1c),(float)((float10)param_3 / fVar1));
  local_20 = _DAT_0188edc0 + param_2;
  local_1c = _DAT_0188edc4 + param_3;
  local_18 = _DAT_0188edc8 + param_2;
  local_14 = param_3 + _DAT_0188edcc;
  FUN_00cfdd10(0xe,0,&local_20);
  if (param_4 == 0) {
    uVar2 = 2;
  }
  else {
    uVar2 = 3;
  }
  FUN_00ce4d70(uVar2);
  FUN_00ce4d70(1);
  return;
}

// 00990930  FUN_00990930  size=172  [callgraph]
void __fastcall FUN_00990930(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (DAT_01dc1418 != '\0') {
    uVar1 = FUN_00cc7280(0x58);
    uVar2 = FUN_00ca9eb0();
    FUN_00d12030(*(undefined4 *)(param_1 + 0x24),uVar2);
    FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x24),uVar1);
    uVar2 = FUN_00ca9eb0();
    FUN_00d12030(*(undefined4 *)(param_1 + 0x28),uVar2);
    FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x28),uVar1);
    FUN_00ce4d70(5);
    return;
  }
  uVar1 = FUN_00ca9ea0();
  FUN_00d12030(*(undefined4 *)(param_1 + 0x24),uVar1);
  FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x24),&DAT_022bd7c1);
  uVar1 = FUN_00ca9ea0();
  FUN_00d12030(*(undefined4 *)(param_1 + 0x28),uVar1);
  FUN_00cb2ce0(*(undefined4 *)(param_1 + 0x28),&DAT_022bd7c1);
  FUN_00ce4d70(5);
  return;
}

// 009A1FD0  cUpdatePop::vf00  size=48  [class]
undefined4 * __thiscall cUpdatePop::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  FUN_00cfe0f0(0xe);
  cCustomObjCtrlManager::cCustomObjCtrlManager_37();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 009A2000  cUpdatePop::vf08  size=77  [class]
void __fastcall cUpdatePop::vf08(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00cb25d0(1);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  uVar1 = FUN_00cb25d0(10);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  uVar1 = FUN_00cb25d0(0x20);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  uVar1 = FUN_00cb25d0(0x21);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  FUN_00990930();
  *(uint *)(param_1 + 0x2c) = (uint)DAT_01dc1418;
  FUN_00cb2600(1);
  return;
}

// 009A2050  cUpdatePop::vf14  size=32  [class]
void __fastcall cUpdatePop::vf14(int param_1)

{
  if (*(uint *)(param_1 + 0x2c) != (uint)DAT_01dc1418) {
    FUN_00990930();
    *(uint *)(param_1 + 0x2c) = (uint)DAT_01dc1418;
  }
  return;
}

