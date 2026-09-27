// src/battle/BattleParameterResource.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D72860..00D76860, 3 functions

#include "mgrr.h"

// 00D72860  BattleParameterResource::addReference  size=40  [class]
int __fastcall BattleParameterResource::addReference(int *param_1)

{
  if ((*param_1 == 0) && (param_1[1] != 0)) {
    FUN_00dd5650(&DAT_016c0c38);
    param_1[1] = 0;
  }
  *param_1 = *param_1 + 1;
  return *param_1;
}

// 00D728C0  BattleParameterResource::addReference_2  size=41  [class]
int __fastcall BattleParameterResource::addReference_2(int *param_1)

{
  if ((*param_1 == 0) && (param_1[1] != 0)) {
    FUN_00dd5650(&DAT_016c0c38);
    param_1[1] = 0;
  }
  *param_1 = *param_1 + 1;
  return param_1[3];
}

// 00D76860  BattleParameterResource::addReference_3  size=445  [class]
undefined4 * __thiscall
BattleParameterResource::addReference_3(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int *unaff_EBP;
  LPCRITICAL_SECTION lpCriticalSection;
  LPCRITICAL_SECTION local_c;
  LPCRITICAL_SECTION local_8;
  undefined4 local_4;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 8);
  local_8 = lpCriticalSection;
  if (*(int *)(param_1 + 0x20) != 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  iVar4 = *(int *)(param_1 + 0x28);
  puVar5 = *(undefined4 **)(iVar4 + 4);
  if (puVar5 != puVar5 + *(int *)(iVar4 + 8)) {
    puVar1 = puVar5 + *(int *)(iVar4 + 8);
    do {
      piVar2 = (int *)*puVar5;
      if (piVar2[2] == param_2) {
        if ((*piVar2 == 0) && (piVar2[1] != 0)) {
          FUN_00dd5650(&DAT_016c0c38);
          piVar2[1] = 0;
        }
        *piVar2 = *piVar2 + 1;
        puVar5 = (undefined4 *)piVar2[3];
        if (local_8[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
          LeaveCriticalSection(local_8);
        }
        return puVar5;
      }
      puVar5 = puVar5 + 1;
    } while (puVar5 != puVar1);
  }
  local_4 = 0;
  iVar4 = FUN_00a54ae0(&local_4,param_3,"_battleParameter.bin");
  if (iVar4 == 0) {
    iVar4 = FUN_00a54ae0(&local_4,param_3,"_battlePrameter.bxm");
    if (iVar4 == 0) goto LAB_00d76983;
    uVar3 = *(undefined4 *)(param_1 + 4);
    iVar6 = FUN_00dd3500(0xc,uVar3);
    lpCriticalSection = local_8;
    if (iVar6 == 0) goto LAB_00d76983;
    puVar5 = (undefined4 *)
             BattleParameterImplement::BattleParameterImplement(uVar3,iVar4,&DAT_016c0f14);
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 4);
    puVar5 = (undefined4 *)FUN_00dd3500(0xc,uVar3);
    lpCriticalSection = local_8;
    if (puVar5 == (undefined4 *)0x0) goto LAB_00d76983;
    *puVar5 = BattleParameterImplement::vftable;
    puVar5[1] = uVar3;
    puVar5[2] = 0;
    lib::AllocatedArray<BattleParameterImplement::Unit>::
    AllocatedArray<BattleParameterImplement::Unit>_2(iVar4);
  }
  lpCriticalSection = local_8;
  if (puVar5 != (undefined4 *)0x0) {
    local_c = (LPCRITICAL_SECTION)FUN_00dd3500(0x10,*(undefined4 *)(param_1 + 4));
    if (local_c == (LPCRITICAL_SECTION)0x0) {
      local_c = (LPCRITICAL_SECTION)0x0;
    }
    else {
      local_c->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
      local_c->LockCount = 0;
      local_c->RecursionCount = param_2;
      local_c->OwningThread = puVar5;
    }
    (**(code **)(**(int **)(param_1 + 0x28) + 8))(&local_c);
    if ((*unaff_EBP == 0) && (unaff_EBP[1] != 0)) {
      FUN_00dd5650(&DAT_016c0c38);
      unaff_EBP[1] = 0;
    }
    *unaff_EBP = *unaff_EBP + 1;
    if (local_c[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
      LeaveCriticalSection(local_c);
    }
    return puVar5;
  }
LAB_00d76983:
  if (lpCriticalSection[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return (undefined4 *)0x0;
}

