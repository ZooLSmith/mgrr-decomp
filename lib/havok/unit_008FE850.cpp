// lib/havok/unit_008FE850.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008FE850..008FE850, 1 functions

#include "types.h"

// 008FE850  HkSystemGroupManagerImplement::HkSystemGroupManagerImplement  size=217  [run]
void HkSystemGroupManagerImplement::HkSystemGroupManagerImplement(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  if (DAT_01b35db8 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)FUN_00dd3500(0x38,&DAT_01b7c218);
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      *puVar5 = vftable;
      puVar5[2] = 0;
      puVar5[3] = 0;
      puVar5[4] = 0;
      puVar5[0xc] = 0;
    }
    DAT_01b35db8 = puVar5;
    puVar5[1] = 1;
    piVar1 = puVar5 + 2;
    iVar3 = FUN_00dd3580(0x3ff4,&DAT_01b7c218);
    *piVar1 = iVar3;
    uVar4 = FUN_00dd3580(0x3ff4,&DAT_01b7c218);
    puVar5[3] = uVar4;
    puVar5[4] = 0;
    FUN_00dd7240();
    iVar3 = 0;
    do {
      *(int *)(*piVar1 + iVar3 * 4) = iVar3 + 2;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0xffd);
    iVar3 = 0x3ff0;
    do {
      iVar2 = *piVar1;
      if (iVar2 + iVar3 != 0) {
        if (puVar5[0xc] != 0) {
          EnterCriticalSection((LPCRITICAL_SECTION)(puVar5 + 6));
        }
        *(int *)(puVar5[3] + puVar5[4] * 4) = iVar2 + iVar3;
        puVar5[4] = puVar5[4] + 1;
        if (puVar5[0xc] != 0) {
          LeaveCriticalSection((LPCRITICAL_SECTION)(puVar5 + 6));
        }
      }
      iVar3 = iVar3 + -4;
    } while (-4 < iVar3);
    return;
  }
  return;
}

