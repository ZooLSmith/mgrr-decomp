// src/unsorted/unit_00E73B80.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00E73B80..00E73B80, 1 functions

#include "types.h"

// 00E73B80  FUN_00e73b80  size=281  [run]
undefined4 __thiscall FUN_00e73b80(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00e6ec80(param_2,param_3);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"SeEventId0");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xe8))(iVar1,param_1 + 0x18);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"PartsNo");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xd8))(iVar1,param_1 + 0x1c);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,&DAT_016514a4);
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xe8))(iVar1,param_1 + 0x20);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"MotSeqAct");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xf0))(iVar1,param_1 + 0x24);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"ListenerPresetNo");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xe0))(iVar1,param_1 + 0x25);
  }
  iVar1 = (**(code **)(*param_2 + 0x9c))(param_3,"ListenerPresetFadeFrame");
  if (iVar1 != -1) {
    (**(code **)(*param_2 + 0xdc))(iVar1,param_1 + 0x26);
  }
  return 1;
}

