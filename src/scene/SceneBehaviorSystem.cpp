// src/scene/SceneBehaviorSystem.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00AA54F0..00AC2160, 3 functions

#include "mgrr.h"
#include "SceneBehaviorSystem.h"

// 00AA54F0  SceneBehaviorSystem::vf04  size=47  [class]
void __fastcall SceneBehaviorSystem::vf04(int param_1)

{
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0xc);
  FUN_00aa4be0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  FUN_00dd7290(1);
  *(undefined4 *)(param_1 + 0x540) = 1;
  return;
}

// 00AA5520  SceneBehaviorSystem::vf08  size=76  [class]
void __fastcall SceneBehaviorSystem::vf08(int param_1)

{
  FUN_00dd7270();
  if ((*(int *)(param_1 + 0x30) != 0) && (*(int *)(param_1 + 0x38) != 0)) {
    FUN_00dd3d90(*(int *)(param_1 + 0x30),0);
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  FUN_00dd7340();
  *(undefined4 *)(param_1 + 0x540) = 0;
  return;
}

// 00AC2160  SceneBehaviorSystem::vf00  size=30  [class]
undefined4 __thiscall SceneBehaviorSystem::vf00(undefined4 param_1,byte param_2)

{
  Hw::cHwLFFreeListTemp<BehaviorList::_BEHAVIOR_INFO>::
  cHwLFFreeListTemp<BehaviorList::_BEHAVIOR_INFO>_3();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

