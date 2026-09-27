// src/misc/ScenarioEnemySetCompletedSlot.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A6D490..00A6F210, 5 functions

#include "mgrr.h"
#include "ScenarioEnemySetCompletedSlot.h"

// 00A6D490  ScenarioEnemySetCompletedSlot::vf10  size=1  [class]
void ScenarioEnemySetCompletedSlot::vf10(void)

{
  return;
}

// 00A6D4A0  ScenarioEnemySetCompletedSlot::vf14  size=13  [class]
void __fastcall ScenarioEnemySetCompletedSlot::vf14(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    (**(code **)*param_1)(1);
  }
  return;
}

// 00A6D4B0  ScenarioEnemySetCompletedSlot::vf18  size=19  [class]
void __fastcall ScenarioEnemySetCompletedSlot::vf18(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    (**(code **)(**(int **)(param_1 + 4) + 0x10))();
  }
  return;
}

// 00A6D4E0  ScenarioEnemySetCompletedSlot::ScenarioEnemySetCompletedSlot  size=178  [class]
void __fastcall ScenarioEnemySetCompletedSlot::ScenarioEnemySetCompletedSlot(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  WindActionImplement::WindActionImplement_2(&DAT_01b7bd48);
  piVar1 = (int *)FUN_00dd2380();
  local_40 = 0;
  local_3c = 0;
  local_38 = 0xc47a0000;
  local_30 = 0x42c80000;
  local_2c = 0x3f800000;
  local_28 = 0x447a0000;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0xc3480000;
  (**(code **)(*piVar1 + 4))(&local_20,&local_30,&local_40,0x3f800000,0x3f800000);
  puVar2 = (undefined4 *)FUN_00dd3500(8,&DAT_01b7bd48);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = vftable;
    puVar2[1] = param_1;
  }
  *(undefined4 **)(param_1 + 0x88) = puVar2;
  FUN_00d89ec0(0x17,puVar2);
  return;
}

// 00A6F210  ScenarioEnemySetCompletedSlot::vf00  size=31  [class]
undefined4 * __thiscall ScenarioEnemySetCompletedSlot::vf00(undefined4 *param_1,byte param_2)

{
  *param_1 = Slot::vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

