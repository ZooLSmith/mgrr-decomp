// src/unsorted/unit_00D3ABD0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D3ABD0..00D3ABD0, 1 functions

#include "types.h"

// 00D3ABD0  FUN_00d3abd0  size=205  [run]
void __fastcall FUN_00d3abd0(int param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  float *pfVar4;
  int iVar5;
  float10 fVar6;
  
  iVar2 = *(int *)(param_1 + 0x18);
  uVar3 = *(uint *)(param_1 + 0x1c);
  if ((((iVar2 != 0) && (iVar5 = *(int *)(iVar2 + 0x78), iVar5 != 0)) &&
      (*(int *)(iVar5 + 0x10) != 0)) &&
     (((iVar5 = *(int *)(iVar5 + 0x10) + iVar5, iVar5 != 0 && (uVar3 < *(uint *)(iVar2 + 0x80))) &&
      (pfVar4 = (float *)(uVar3 * 0x1b0 + iVar5), pfVar4 != (float *)0x0)))) {
    fVar1 = *pfVar4;
    fVar6 = (float10)FUN_00d2c710(uVar3);
    FUN_00cb28a0(*(undefined4 *)(param_1 + 0x1c),(float)-(fVar6 + (float10)(fVar1 + 5.0)));
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (((iVar2 != 0) && (iVar5 = *(int *)(iVar2 + 0x78), iVar5 != 0)) &&
     ((*(int *)(iVar5 + 0x10) != 0 &&
      (((iVar5 = iVar5 + *(int *)(iVar5 + 0x10), iVar5 != 0 &&
        (*(uint *)(param_1 + 0x20) < *(uint *)(iVar2 + 0x80))) &&
       (pfVar4 = (float *)(*(uint *)(param_1 + 0x20) * 0x1b0 + iVar5), pfVar4 != (float *)0x0))))))
  {
    fVar1 = *pfVar4;
    fVar6 = (float10)FUN_00cfebf0(*(undefined4 *)(param_1 + 0x24));
    fVar6 = -(fVar6 + (float10)fVar1);
    FUN_00cb28a0(*(undefined4 *)(param_1 + 0x24),(float)fVar6);
    FUN_00cb28a0(*(undefined4 *)(param_1 + 0x28),(float)fVar6);
  }
  return;
}

