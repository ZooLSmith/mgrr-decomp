// src/unsorted/unit_00D5B100.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D5B100..00D5B2E0, 2 functions

#include "types.h"

// 00D5B100  FUN_00d5b100  size=477  [run]
undefined4 __thiscall FUN_00d5b100(undefined4 *param_1,int *param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  char *pcVar6;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  cVar1 = (**(code **)(*param_2 + 0x10))("liftAtqScrFrictionBaseValue",0xb);
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x1c))(param_1);
    (**(code **)(*param_2 + 0x14))("liftAtqScrFrictionBaseValue",0xb);
  }
  pcVar6 = "liftFrictionBaseValue";
  cVar1 = (**(code **)(*param_2 + 0x10))("liftFrictionBaseValue",0xb);
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x1c))(param_1 + 1);
    (**(code **)(*param_2 + 0x14))("liftFrictionBaseValue",0xb);
  }
  uVar5 = 0xb;
  pcVar4 = "liftImpactValue";
  cVar1 = (**(code **)(*param_2 + 0x10))("liftImpactValue",0xb);
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x1c))(param_1 + 2);
    (**(code **)(*param_2 + 0x14))("liftImpactValue",0xb);
  }
  uVar3 = 0xb;
  pcVar2 = "liftNoFrictionSpeedBaseValue";
  cVar1 = (**(code **)(*param_2 + 0x10))("liftNoFrictionSpeedBaseValue",0xb);
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x1c))(pcVar6);
    (**(code **)(*param_2 + 0x14))("liftNoFrictionSpeedBaseValue",0xb);
  }
  cVar1 = (**(code **)(*param_2 + 0x10))("liftNoFrictionSpBaseValueNoImpact",0xb);
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x1c))(uVar5);
    (**(code **)(*param_2 + 0x14))("liftNoFrictionSpBaseValueNoImpact",0xb);
  }
  cVar1 = (**(code **)(*param_2 + 0x10))("liftDestroyStayTime",0xb);
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x1c))(pcVar4);
    (**(code **)(*param_2 + 0x14))("liftDestroyStayTime",0xb);
  }
  cVar1 = (**(code **)(*param_2 + 0x10))("liftDestroyMoveValue",0xb);
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x1c))(uVar3);
    (**(code **)(*param_2 + 0x14))("liftDestroyMoveValue",0xb);
  }
  cVar1 = (**(code **)(*param_2 + 0x10))("liftDestroyMoveTime",0xb);
  if (cVar1 != '\0') {
    (**(code **)(*param_2 + 0x1c))(pcVar2);
    (**(code **)(*param_2 + 0x14))("liftDestroyMoveTime",0xb);
  }
  return 1;
}

// 00D5B2E0  FUN_00d5b2e0  size=83  [run]
undefined4 FUN_00d5b2e0(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    FUN_00a81330();
    iVar2 = FUN_00a7c8a0();
    if (iVar2 != 0) {
      FUN_00408620();
      cVar1 = FUN_00d54b00();
      if (cVar1 != '\0') {
        *param_1 = 9;
        return 1;
      }
    }
  }
  return 0;
}

