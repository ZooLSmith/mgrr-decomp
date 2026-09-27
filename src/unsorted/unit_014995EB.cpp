// src/unsorted/unit_014995EB.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 014995EB..014996EF, 4 functions

#include "mgrr.h"

// 014995EB  FUN_014995eb  size=90  [run]
/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

void __thiscall FUN_014995eb(int param_1,undefined4 param_2)

{
  ULONG_PTR local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_0187a848;
  uStack_c = 0x14995f7;
  if (param_1 != 0) {
    _memset(&local_2c,0,0x10);
    local_2c = 0x1000;
    local_24 = param_2;
    local_20 = 0;
    local_8 = (undefined *)0x0;
    local_28 = param_1;
    RaiseException(0x406d1388,0,4,&local_2c);
  }
  return;
}

// 0149964C  FUN_0149964c  size=49  [run]
void FUN_0149964c(void *param_1)

{
  if (*(HANDLE *)((int)param_1 + 0xc) != (HANDLE)0x0) {
    WaitForSingleObject(*(HANDLE *)((int)param_1 + 0xc),0xffffffff);
    CloseHandle(*(HANDLE *)((int)param_1 + 0xc));
    *(undefined4 *)((int)param_1 + 0xc) = 0;
  }
  _memset(param_1,0,0x20);
  return;
}

// 0149967D  FUN_0149967d  size=114  [run]
undefined4 FUN_0149967d(undefined4 *param_1)

{
  HANDLE pvVar1;
  int iVar2;
  BOOL BVar3;
  ULONG_PTR local_c;
  ULONG_PTR local_8;
  
  pvVar1 = GetCurrentThread();
  iVar2 = GetThreadPriority(pvVar1);
  param_1[4] = iVar2;
  pvVar1 = GetCurrentProcess();
  BVar3 = GetProcessAffinityMask(pvVar1,&local_8,&local_c);
  if (BVar3 != 0) {
    local_8 = 0xffffffff;
  }
  param_1[6] = local_8;
  if (param_1[7] != 0) {
    CoInitializeEx((LPVOID)0x0,0);
  }
  param_1[2] = 1;
  if ((code *)*param_1 != (code *)0x0) {
    (*(code *)*param_1)(param_1[1]);
  }
  if (param_1[7] != 0) {
    CoUninitialize();
  }
  return 0;
}

// 014996EF  FUN_014996ef  size=11  [run]
void FUN_014996ef(DWORD param_1)

{
  Sleep(param_1);
  return;
}

