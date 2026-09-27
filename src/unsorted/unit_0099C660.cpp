// src/unsorted/unit_0099C660.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0099C660..0099C660, 1 functions

#include "types.h"

// 0099C660  FUN_0099c660  size=231  [run]
void __fastcall FUN_0099c660(int param_1)

{
  char cVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 4) == 0) {
    iVar2 = FUN_0099b170();
    *(int *)(param_1 + 0xc) = iVar2;
    *(undefined4 *)(iVar2 + 0x194) = DAT_01b391d4;
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x198) = DAT_01b391d8;
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x19c) = DAT_01b391dc;
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x1a0) = DAT_01b391e0;
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x1a4) = DAT_01b391e4;
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x1a8) = DAT_01b391e8;
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x1ac) = DAT_01b391ec;
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  else if (*(int *)(param_1 + 4) == 1) {
    if (*(int *)(*(int *)(param_1 + 0xc) + 0x1b4) == 1) {
      cVar1 = FUN_00cac640(0x200,0);
      if (cVar1 != '\0') {
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
        *(undefined4 *)(param_1 + 8) = 3;
        return;
      }
      cVar1 = FUN_00ce1360(0);
      if (cVar1 == '\0') {
        cVar1 = FUN_00cac960();
        if (cVar1 == '\0') goto LAB_0099c6c9;
      }
      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
      *(undefined4 *)(param_1 + 8) = 2;
      return;
    }
LAB_0099c6c9:
                    /* WARNING: Could not recover jumptable at 0x0099c6d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0xc) + 4))();
    return;
  }
  return;
}

