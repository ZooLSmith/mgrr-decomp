// src/animation/AnimationMapResource.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008D7450..008DA6C0, 4 functions

#include "mgrr.h"

// 008D7450  AnimationMapResource::addReference  size=44  [class]
int __fastcall AnimationMapResource::addReference(int *param_1)

{
  if ((*param_1 == 0) && (param_1[1] != 0)) {
    FUN_00dd5650(&DAT_0164a268,param_1[2]);
    param_1[1] = 0;
  }
  *param_1 = *param_1 + 1;
  return *param_1;
}

// 008D74B0  AnimationMapResource::addReference_2  size=45  [class]
int __fastcall AnimationMapResource::addReference_2(int *param_1)

{
  if ((*param_1 == 0) && (param_1[1] != 0)) {
    FUN_00dd5650(&DAT_0164a268,param_1[2]);
    param_1[1] = 0;
  }
  *param_1 = *param_1 + 1;
  return param_1[3];
}

// 008DA630  FUN_008da630  size=129  [callgraph]
undefined4 * __thiscall FUN_008da630(undefined4 *param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int unaff_EDI;
  int local_74;
  
  *param_1 = 0;
  if (param_3 != 0) {
    lib::InputTextArchive<char_const*,32>::InputTextArchive<char_const*,32>_4();
    FUN_00e91420(param_3);
    cVar1 = (**(code **)(local_74 + 0x10))(&DAT_0164a448,0);
    FUN_008da5c0(&stack0xffffff84,"animationMap",param_1);
    if (cVar1 != '\0') {
      (**(code **)(unaff_EDI + 0x14))(&DAT_0164a448,0);
    }
    cXml::cXml_5();
  }
  return param_1;
}

// 008DA6C0  AnimationMapResource::addReference_3  size=353  [class]
int __thiscall AnimationMapResource::addReference_3(int param_1,int param_2,undefined4 param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int *unaff_EBX;
  undefined4 *local_c;
  LPCRITICAL_SECTION local_8;
  LPCRITICAL_SECTION local_4;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 8);
  local_4 = lpCriticalSection;
  if (*(int *)(param_1 + 0x20) != 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  iVar4 = *(int *)(param_1 + 0x28);
  puVar3 = *(undefined4 **)(iVar4 + 4);
  if (puVar3 != puVar3 + *(int *)(iVar4 + 8)) {
    puVar1 = puVar3 + *(int *)(iVar4 + 8);
    do {
      piVar2 = (int *)*puVar3;
      if (piVar2[2] == param_2) {
        if ((*piVar2 == 0) && (piVar2[1] != 0)) {
          FUN_00dd5650(&DAT_0164a268,piVar2[2]);
          piVar2[1] = 0;
        }
        *piVar2 = *piVar2 + 1;
        iVar4 = piVar2[3];
        if (*(int *)(param_1 + 0x20) != 0) {
          LeaveCriticalSection(lpCriticalSection);
        }
        return iVar4;
      }
      puVar3 = puVar3 + 1;
    } while (puVar3 != puVar1);
  }
  local_8 = (LPCRITICAL_SECTION)0x0;
  iVar4 = FUN_00a54ae0(&local_8,param_3,"_animationMap.bxm");
  if (iVar4 == 0) {
    if (*(int *)(param_1 + 0x20) != 0) {
      LeaveCriticalSection(lpCriticalSection);
    }
    return 0;
  }
  iVar5 = FUN_00dd3500(4,*(undefined4 *)(param_1 + 4));
  if (iVar5 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_008da630(*(undefined4 *)(param_1 + 4),iVar4);
  }
  local_c = (undefined4 *)FUN_00dd3500(0x10,*(undefined4 *)(param_1 + 4));
  if (local_c == (undefined4 *)0x0) {
    local_c = (undefined4 *)0x0;
  }
  else {
    *local_c = 0;
    local_c[1] = 0;
    local_c[2] = param_2;
    local_c[3] = iVar4;
  }
  (**(code **)(**(int **)(param_1 + 0x28) + 8))(&local_c);
  if ((*unaff_EBX == 0) && (unaff_EBX[1] != 0)) {
    FUN_00dd5650(&DAT_0164a268,unaff_EBX[2]);
    unaff_EBX[1] = 0;
  }
  *unaff_EBX = *unaff_EBX + 1;
  if (local_8[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    LeaveCriticalSection(local_8);
  }
  return iVar4;
}

