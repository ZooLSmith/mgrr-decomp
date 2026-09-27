// src/unsorted/unit_00D4BC80.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D4BC80..00D4BC80, 1 functions

#include "mgrr.h"

// 00D4BC80  FUN_00d4bc80  size=61  [run]
void __fastcall FUN_00d4bc80(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x120) != 0) {
    piVar1 = (int *)FUN_00c14bb0();
    iVar2 = (**(code **)(*piVar1 + 0x1c))(*(undefined4 *)(param_1 + 0x124),0xd4d);
    if (iVar2 != 0) {
      piVar1 = (int *)FUN_00a7c8a0();
                    /* WARNING: Could not recover jumptable at 0x00d4bcb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar1 + 0x20))();
      return;
    }
  }
  return;
}

