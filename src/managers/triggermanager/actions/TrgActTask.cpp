// src/managers/triggermanager/actions/TrgActTask.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C7EF00..00C7EF00, 1 functions

#include "mgrr.h"

// 00C7EF00  Trigger::Act::TASK  size=154  [class]
undefined4 __fastcall Trigger::Act::TASK(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  
  if (*(int *)(param_1 + 4) == 0) {
    FUN_00dd5650(&DAT_016aa99c);
    return 0;
  }
  iVar1 = *(int *)(param_1 + 4) + 8;
  if (iVar1 == 0) {
    FUN_00dd5650(&DAT_016aa970);
    return 0;
  }
  piVar2 = (int *)FUN_00a6dd90();
  piVar2 = (int *)(**(code **)(*piVar2 + 0x30))();
  if (piVar2 == (int *)0x0) {
    FUN_00dd5650(&DAT_016aa938);
    return 0;
  }
  if (*(int *)(*(int *)(param_1 + 4) + 4) == 0x52) {
    pcVar4 = *(code **)(*piVar2 + 0x38);
  }
  else {
    pcVar4 = *(code **)(*piVar2 + 0x34);
  }
  iVar3 = (*pcVar4)(iVar1);
  if (iVar3 == 0) {
    FUN_00dd5650(&DAT_016aa904,iVar1);
    return 0;
  }
  return 1;
}

