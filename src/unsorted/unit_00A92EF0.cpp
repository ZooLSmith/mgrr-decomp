// src/unsorted/unit_00A92EF0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A92EF0..00A93060, 7 functions

#include "mgrr.h"

// 00A92EF0  FUN_00a92ef0  size=86  [run]
void __fastcall FUN_00a92ef0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x638) != 0) {
    FUN_00dd7270();
  }
  iVar1 = *(int *)(param_1 + 0x638);
  if (iVar1 != 0) {
    FUN_00dd7270();
    FUN_00dd4920(iVar1);
    *(undefined4 *)(param_1 + 0x638) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x63c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x63c))(1);
    *(undefined4 *)(param_1 + 0x63c) = 0;
  }
  return;
}

// 00A92F50  FUN_00a92f50  size=59  [run]
int __thiscall FUN_00a92f50(int param_1,int param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x638);
  if (lpCriticalSection[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    EnterCriticalSection(lpCriticalSection);
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x63c) + 4);
  if (lpCriticalSection[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return param_2 * 0x40 + iVar1;
}

// 00A92F90  FUN_00a92f90  size=18  [run]
undefined4 __fastcall FUN_00a92f90(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x4f0) == 0) {
    return 0;
  }
  uVar1 = FUN_00a7c890();
  return uVar1;
}

// 00A92FB0  FUN_00a92fb0  size=21  [run]
undefined * __fastcall FUN_00a92fb0(int param_1)

{
  undefined *puVar1;
  
  if (*(int *)(param_1 + 0x4f0) == 0) {
    return &DAT_01be939c;
  }
  puVar1 = (undefined *)FUN_00a7c910();
  return puVar1;
}

// 00A92FF0  FUN_00a92ff0  size=34  [run]
void __fastcall FUN_00a92ff0(int param_1)

{
  if (*(int *)(param_1 + 0x4f0) == 0) {
    FUN_00e049b0();
    return;
  }
  FUN_00a7c910();
  FUN_00e049b0();
  return;
}

// 00A93020  FUN_00a93020  size=50  [run]
void __thiscall FUN_00a93020(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(int *)(param_1 + 0x4f0) != 0) {
    FUN_00a7c910();
  }
  FUN_00e04a00(param_2,param_3,param_4);
  return;
}

// 00A93060  FUN_00a93060  size=48  [run]
float10 __fastcall FUN_00a93060(int param_1)

{
  float10 fVar1;
  
  if (*(int *)(param_1 + 0x4f0) == 0) {
    fVar1 = (float10)FUN_00e049b0();
    return fVar1 * (float10)0.016666668;
  }
  FUN_00a7c910();
  fVar1 = (float10)FUN_00e049b0();
  return fVar1 * (float10)0.016666668;
}

