// src/unsorted/unit_00904D90.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00904D90..00905500, 6 functions

#include "types.h"

// 00904D90  FUN_00904d90  size=12  [run]
void __fastcall FUN_00904d90(int param_1)

{
  *(undefined4 *)(param_1 + 0x134) = 1;
  return;
}

// 00904FA0  FUN_00904fa0  size=1  [run]
void FUN_00904fa0(void)

{
  return;
}

// 009050E0  FUN_009050e0  size=120  [run]
undefined4 __thiscall FUN_009050e0(int param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 4) != 0) {
    return 0;
  }
  iVar1 = FUN_00dd29b0(param_2 * 4,0x20,0,0);
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    uVar2 = (**(code **)(*param_3 + 0x18))();
    uVar2 = FUN_00dd2960(param_2 * 4,uVar2);
    FUN_00dd5650(&DAT_0163cadc,uVar2);
    return 0;
  }
  *(int *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 1;
  return 1;
}

// 009053F0  FUN_009053f0  size=169  [run]
void __fastcall FUN_009053f0(int *param_1)

{
  undefined2 uVar1;
  int iVar2;
  
  *(undefined1 *)(param_1 + 2) = 2;
  *(undefined2 *)((int)param_1 + 0x17) = 0x101;
  iVar2 = (**(code **)(*param_1 + 0xc))();
  *(bool *)((int)param_1 + 0x16) = iVar2 != 0;
  if (*(char *)((int)param_1 + 0x19) == '\0') {
    *(undefined2 *)(param_1 + 3) = *(undefined2 *)((int)param_1 + 10);
  }
  else if (*(short *)((int)param_1 + 10) < 1) {
    *(short *)(param_1 + 3) = *(short *)((int)param_1 + 10);
  }
  else {
    if (DAT_01b35f70 != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01b35f58);
    }
    FUN_00dde300(0,0x3f800000);
    uVar1 = FUN_00fdbc60();
    *(undefined2 *)(param_1 + 3) = uVar1;
    if (DAT_01b35f70 != 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01b35f58);
    }
  }
  *(undefined1 *)((int)param_1 + 0x19) = 0;
  if ((*(char *)((int)param_1 + 0x1d) != '\0') || (*(char *)((int)param_1 + 0x1e) != '\0')) {
    *(undefined1 *)((int)param_1 + 0x1b) = 0;
  }
  return;
}

// 009054F0  FUN_009054f0  size=5  [run]
int __fastcall FUN_009054f0(int param_1)

{
  return (int)*(char *)(param_1 + 0x18);
}

// 00905500  FUN_00905500  size=86  [run]
void FUN_00905500(int param_1)

{
  int iVar1;
  
  if (DAT_01b35f90 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01b35f78);
  }
  if ((((*(char *)(param_1 + 0x18) == '\x01') &&
       (iVar1 = *(char *)(param_1 + 0x10) + param_1, iVar1 != 0)) ||
      ((*(char *)(param_1 + 0x18) == '\x02' &&
       (iVar1 = *(char *)(param_1 + 0x10) + param_1, iVar1 != 0)))) && (*(short *)(iVar1 + 6) != 0))
  {
    FUN_01006000();
  }
  if (DAT_01b35f90 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01b35f78);
  }
  return;
}

