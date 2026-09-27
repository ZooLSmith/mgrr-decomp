// src/unsorted/unit_00951A30.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00951A30..00951C40, 3 functions

#include "types.h"

// 00951A30  FUN_00951a30  size=180  [run]
void FUN_00951a30(int param_1)

{
  undefined4 uVar1;
  
  if (DAT_01b37398 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01b37380);
  }
  uVar1 = 0x6553e9ef;
  if (param_1 == 1) {
    uVar1 = 0x4b20f7ae;
  }
  else if (param_1 == 2) {
    uVar1 = 0x20ceb102;
  }
  else if (param_1 == 3) {
    uVar1 = 0x126ffcbb;
  }
  else if (param_1 == 4) {
    uVar1 = 0x70dce4d0;
  }
  else if (param_1 == 5) {
    uVar1 = 0x3800cb76;
  }
  else if (param_1 == 6) {
    uVar1 = 0x7089ed6c;
  }
  else if (param_1 == 7) {
    uVar1 = 0x2250063d;
  }
  else if (param_1 == 8) {
    uVar1 = 0x2a5686e6;
  }
  else if (param_1 == 9) {
    uVar1 = 0x4b211eb7;
  }
  else if (param_1 == 10) {
    uVar1 = 0x154b4aab;
  }
  FUN_0094ed90(param_1,uVar1);
  if (DAT_01b37398 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01b37380);
  }
  return;
}

// 00951BF0  FUN_00951bf0  size=68  [run]
bool FUN_00951bf0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = (int *)PTR_DAT_01886ea4;
  if (PTR_DAT_01886ea4 != PTR_DAT_01886ea4 + DAT_01886ea8 * 4) {
    while (iVar2 = *piVar1, *(int *)(iVar2 + 0x10) != param_1) {
      piVar1 = piVar1 + 1;
      if (piVar1 == (int *)(PTR_DAT_01886ea4 + DAT_01886ea8 * 4)) {
        return false;
      }
    }
  }
  return iVar2 != 0;
}

// 00951C40  FUN_00951c40  size=59  [run]
undefined4 FUN_00951c40(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  
  piVar3 = (int *)PTR_DAT_01886ea4;
  while( true ) {
    if (piVar3 == (int *)(PTR_DAT_01886ea4 + DAT_01886ea8 * 4)) {
      return 0;
    }
    piVar1 = (int *)*piVar3;
    if (piVar1[4] == param_1) break;
    piVar3 = piVar3 + 1;
  }
  if (piVar1 == (int *)0x0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00951c7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*piVar1 + 0x2c))();
  return uVar2;
}

