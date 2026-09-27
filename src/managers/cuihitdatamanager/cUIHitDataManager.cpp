// src/managers/cuihitdatamanager/cUIHitDataManager.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CFD830..00CFDA80, 4 functions

#include "types.h"

// 00CFD830  FUN_00cfd830  size=73  [callgraph]
int __thiscall FUN_00cfd830(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 0x34);
  piVar1 = piVar3 + *(int *)(param_1 + 0x3c) * 3;
  iVar2 = 0;
  while( true ) {
    if (piVar3 == piVar1) {
      return -1;
    }
    if ((*piVar3 == param_2) && (piVar3[1] == param_3)) break;
    piVar3 = piVar3 + 3;
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}

// 00CFD880  cUIHitDataManager::Dictionary  size=338  [class]
int __thiscall
cUIHitDataManager::Dictionary(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  LPCRITICAL_SECTION in_stack_00000030;
  undefined4 auStackY_6c [6];
  undefined4 uStackY_54;
  undefined4 local_28 [2];
  undefined1 local_20 [32];
  
  if ((*(int *)(param_1 + 0x44) == 0) || (in_stack_00000030 == (LPCRITICAL_SECTION)0x0)) {
    return 0;
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    return 0;
  }
  in_stack_00000030 = (LPCRITICAL_SECTION)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x28) != 0) {
    EnterCriticalSection(in_stack_00000030);
  }
  iVar1 = FUN_00cfd830();
  if (iVar1 < 0) {
    iVar1 = 0;
    if (*(int *)(param_1 + 0x38) <= *(int *)(param_1 + 0x3c)) {
      FUN_00dd5650();
      goto LAB_00cfd997;
    }
    iVar2 = FUN_00dd3500();
    if ((iVar2 == 0) || (iVar2 = UICollision::cUIHitData::cUIHitData(), iVar2 == 0))
    goto LAB_00cfd997;
    iVar1 = FUN_00cd0060();
    if (iVar1 != 1) {
      FUN_00ceaa60();
      goto LAB_00cfd997;
    }
    FUN_00cf5a90();
  }
  iVar1 = FUN_00cfd730();
  if (iVar1 == 0) {
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
    local_28[0] = *(undefined4 *)(param_1 + 0x48);
    local_28[1] = param_4;
    uStackY_54 = 0xcfd97d;
    FID_conflict__memcpy(local_20,&stack0x00000010,0x20);
    puVar3 = local_28;
    puVar4 = auStackY_6c;
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    iVar1 = cUIHitData::HIT();
  }
LAB_00cfd997:
  if (in_stack_00000030[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    LeaveCriticalSection(in_stack_00000030);
  }
  return iVar1;
}

// 00CFD9E0  FUN_00cfd9e0  size=151  [callgraph]
undefined4 __thiscall
FUN_00cfd9e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x44) == 0) {
    return 0;
  }
  if (param_5 != 0) {
    uVar2 = 0;
    if (*(int *)(param_1 + 0x28) != 0) {
      if (*(int *)(param_1 + 0x28) != 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
      }
      iVar1 = FUN_00cfd830(param_2,param_3);
      if (-1 < iVar1) {
        uVar2 = FUN_00cfd670(param_4,param_5);
      }
      if (*(int *)(param_1 + 0x28) != 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
      }
    }
    return uVar2;
  }
  return 0;
}

// 00CFDA80  FUN_00cfda80  size=151  [callgraph]
bool __thiscall FUN_00cfda80(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(int *)(param_1 + 0x44) != 0) {
    bVar3 = false;
    if (*(int *)(param_1 + 0x28) != 0) {
      if (*(int *)(param_1 + 0x28) != 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
      }
      iVar2 = FUN_00cfd830(param_2,param_3);
      bVar3 = -1 < iVar2;
      if (bVar3) {
        local_c = *(undefined4 *)(*(int *)(param_1 + 0x34) + iVar2 * 0xc);
        iVar1 = *(int *)(param_1 + 0x34) + iVar2 * 0xc;
        local_8 = *(undefined4 *)(iVar1 + 4);
        local_4 = *(undefined4 *)(iVar1 + 8);
        FUN_00ceaa60(&local_c);
        FUN_00cc5990(iVar2);
      }
      if (*(int *)(param_1 + 0x28) != 0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
      }
    }
    return bVar3;
  }
  return false;
}

