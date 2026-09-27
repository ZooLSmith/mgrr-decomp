// src/unsorted/unit_00C61D10.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C61D10..00C62090, 3 functions

#include "mgrr.h"

// 00C61D10  FUN_00c61d10  size=177  [run]
void __fastcall FUN_00c61d10(LPCRITICAL_SECTION param_1)

{
  undefined4 uVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  int iVar3;
  _RTL_CRITICAL_SECTION *p_Var4;
  PRTL_CRITICAL_SECTION_DEBUG p_Var5;
  PRTL_CRITICAL_SECTION_DEBUG p_Var6;
  undefined4 local_8;
  undefined1 local_4 [4];
  
  p_Var5 = (PRTL_CRITICAL_SECTION_DEBUG)param_1[2].LockCount;
  if (p_Var5 != (PRTL_CRITICAL_SECTION_DEBUG)param_1[2].RecursionCount) {
    do {
      uVar1._0_2_ = p_Var5->Type;
      uVar1._2_2_ = p_Var5->CreatorBackTraceIndex;
      iVar3 = FUN_00c5e5e0(uVar1);
      if (iVar3 == 0) {
        p_Var6 = (PRTL_CRITICAL_SECTION_DEBUG)(p_Var5->ProcessLocksList).Flink;
      }
      else {
        local_8 = uVar1;
        if (param_1[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
          EnterCriticalSection(param_1);
        }
        cFixedList::insert_21(local_4,&param_1[3].OwningThread,&local_8);
        if (param_1[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
          LeaveCriticalSection(param_1);
        }
        p_Var4 = p_Var5->CriticalSection;
        p_Var6 = (PRTL_CRITICAL_SECTION_DEBUG)(p_Var5->ProcessLocksList).Flink;
        if (p_Var4 != (_RTL_CRITICAL_SECTION *)0x0) {
          p_Var4->RecursionCount = (LONG)p_Var6;
        }
        if (p_Var6 != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
          p_Var6->CriticalSection = p_Var4;
        }
        if ((PRTL_CRITICAL_SECTION_DEBUG)param_1[2].LockCount == p_Var5) {
          param_1[2].LockCount = (LONG)p_Var6;
        }
        param_1[1].SpinCount = param_1[1].SpinCount - 1;
        p_Var2 = param_1[2].DebugInfo;
        if (p_Var2 == (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
          p_Var4 = (_RTL_CRITICAL_SECTION *)0x0;
        }
        else {
          p_Var4 = p_Var2->CriticalSection;
        }
        p_Var5->CriticalSection = p_Var4;
        (p_Var5->ProcessLocksList).Flink = (_LIST_ENTRY *)p_Var2;
        if (p_Var4 != (_RTL_CRITICAL_SECTION *)0x0) {
          p_Var4->RecursionCount = (LONG)p_Var5;
        }
        if (p_Var2 != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
          p_Var2->CriticalSection = (_RTL_CRITICAL_SECTION *)p_Var5;
        }
        param_1[2].DebugInfo = p_Var5;
      }
      p_Var5 = p_Var6;
    } while (p_Var6 != (PRTL_CRITICAL_SECTION_DEBUG)param_1[2].RecursionCount);
  }
  return;
}

// 00C61DD0  FUN_00c61dd0  size=31  [run]
void __fastcall FUN_00c61dd0(LPCRITICAL_SECTION param_1)

{
  if (param_1[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    EnterCriticalSection(param_1);
    if (param_1[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
      LeaveCriticalSection(param_1);
    }
  }
  return;
}

// 00C62090  FUN_00c62090  size=281  [run]
int __thiscall FUN_00c62090(LPCRITICAL_SECTION param_1,int param_2)

{
  int iVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  int iVar3;
  _RTL_CRITICAL_SECTION *p_Var4;
  PRTL_CRITICAL_SECTION_DEBUG p_Var5;
  PRTL_CRITICAL_SECTION_DEBUG p_Var6;
  int local_c;
  int local_8;
  undefined1 local_4 [4];
  
  local_c = 0;
  if (param_2 == 0) {
    return 0;
  }
  if (param_1[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    EnterCriticalSection(param_1);
  }
  p_Var5 = (PRTL_CRITICAL_SECTION_DEBUG)param_1[2].LockCount;
  if (p_Var5 != (PRTL_CRITICAL_SECTION_DEBUG)param_1[2].RecursionCount) {
    do {
      iVar1._0_2_ = p_Var5->Type;
      iVar1._2_2_ = p_Var5->CreatorBackTraceIndex;
      iVar3 = FUN_00a81330();
      if (iVar3 == 0) {
LAB_00c62182:
        p_Var6 = (PRTL_CRITICAL_SECTION_DEBUG)(p_Var5->ProcessLocksList).Flink;
      }
      else {
        local_8 = *(int *)(param_2 + 0x4f0);
        iVar3 = FUN_00a81330();
        if (iVar3 != local_8) goto LAB_00c62182;
        local_8 = iVar1;
        if (param_1[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
          EnterCriticalSection(param_1);
        }
        cFixedList::insert_21(local_4,&param_1[3].OwningThread,&local_8);
        if (param_1[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
          LeaveCriticalSection(param_1);
        }
        p_Var4 = p_Var5->CriticalSection;
        p_Var6 = (PRTL_CRITICAL_SECTION_DEBUG)(p_Var5->ProcessLocksList).Flink;
        if (p_Var4 != (_RTL_CRITICAL_SECTION *)0x0) {
          p_Var4->RecursionCount = (LONG)p_Var6;
        }
        if (p_Var6 != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
          p_Var6->CriticalSection = p_Var4;
        }
        if ((PRTL_CRITICAL_SECTION_DEBUG)param_1[2].LockCount == p_Var5) {
          param_1[2].LockCount = (LONG)p_Var6;
        }
        param_1[1].SpinCount = param_1[1].SpinCount - 1;
        p_Var2 = param_1[2].DebugInfo;
        if (p_Var2 == (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
          p_Var4 = (_RTL_CRITICAL_SECTION *)0x0;
        }
        else {
          p_Var4 = p_Var2->CriticalSection;
        }
        p_Var5->CriticalSection = p_Var4;
        (p_Var5->ProcessLocksList).Flink = (_LIST_ENTRY *)p_Var2;
        if (p_Var4 != (_RTL_CRITICAL_SECTION *)0x0) {
          p_Var4->RecursionCount = (LONG)p_Var5;
        }
        if (p_Var2 != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
          p_Var2->CriticalSection = (_RTL_CRITICAL_SECTION *)p_Var5;
        }
        local_c = local_c + 1;
        param_1[2].DebugInfo = p_Var5;
      }
      p_Var5 = p_Var6;
    } while (p_Var6 != (PRTL_CRITICAL_SECTION_DEBUG)param_1[2].RecursionCount);
  }
  if (param_1[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    LeaveCriticalSection(param_1);
  }
  return local_c;
}

