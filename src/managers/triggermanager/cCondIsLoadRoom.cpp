// src/managers/triggermanager/cCondIsLoadRoom.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7AEA0..00C85B10, 4 functions

#include "mgrr.h"

// 00C7AEA0  Trigger::cCondIsLoadRoom::cCondIsLoadRoom  size=33  [class]
void __fastcall Trigger::cCondIsLoadRoom::cCondIsLoadRoom(undefined4 *param_1)

{
  param_1[3] = 0xffffffff;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  *param_1 = vftable;
  param_1[4] = 0xfffffffe;
  param_1[5] = 0;
  return;
}

// 00C7AEE0  Trigger::cCondIsLoadRoom::vf14  size=163  [class]
int __fastcall Trigger::cCondIsLoadRoom::vf14(int param_1)

{
  int iVar1;
  int iVar2;
  int local_84;
  undefined4 local_80 [32];
  
  if (*(int *)(param_1 + 0x14) != 1) {
    if (-1 < *(int *)(param_1 + 0x10)) {
      iVar2 = FUN_00a4c810(*(int *)(param_1 + 0x10));
      return iVar2;
    }
    iVar2 = FUN_00a4c810(0xfffffffe);
    return iVar2;
  }
  local_84 = 0;
  PhaseManager::createReadRoomList(local_80,0x20,&local_84);
  if (local_84 == 0) {
    return 1;
  }
  iVar2 = 0;
  if (0 < local_84) {
    while (iVar1 = FUN_00a4c810(local_80[iVar2]), iVar1 != 0) {
      iVar2 = iVar2 + 1;
      if (local_84 <= iVar2) {
        return iVar1;
      }
    }
  }
  return 0;
}

// 00C7AF90  Trigger::cCondIsLoadRoom::vf1C  size=22  [class]
void __thiscall Trigger::cCondIsLoadRoom::vf1C(int param_1,int param_2)

{
  *(int *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xc);
  return;
}

// 00C85B10  Trigger::cCondIsLoadRoom::vf00  size=31  [class]
undefined4 * __thiscall Trigger::cCondIsLoadRoom::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = cCondition::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

