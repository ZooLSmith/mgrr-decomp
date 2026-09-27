// src/unsorted/unit_00A11D20.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A11D20..00A11D20, 1 functions

#include "mgrr.h"

// 00A11D20  FUN_00a11d20  size=246  [run]
undefined4 __thiscall FUN_00a11d20(int param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = *(uint *)(param_2 + 0x50);
  if ((int)uVar1 < 1) {
    return 1;
  }
  uVar5 = -(uint)((int)((ulonglong)uVar1 * 0x560 >> 0x20) != 0) | (uint)((ulonglong)uVar1 * 0x560);
  puVar2 = (uint *)FUN_00dd3580(-(uint)(0xffffffef < uVar5) | uVar5 + 0x10,param_3);
  if (puVar2 == (uint *)0x0) {
    puVar3 = (uint *)0x0;
  }
  else {
    puVar3 = puVar2 + 4;
    *puVar2 = uVar1;
    uVar5 = uVar1;
    while (uVar5 = uVar5 - 1, -1 < (int)uVar5) {
      FUN_00a07fa0();
    }
  }
  *(uint **)(param_1 + 0x328) = puVar3;
  if (puVar3 == (uint *)0x0) {
    return 0;
  }
  iVar7 = 0;
  *(short *)(param_1 + 0x32c) = (short)uVar1;
  if (0 < (short)uVar1) {
    iVar6 = 0;
    do {
      if (iVar7 < 0) {
        return 0;
      }
      if (*(int *)(param_2 + 0x50) < iVar7) {
        return 0;
      }
      iVar4 = *(int *)(param_2 + 0x4c) + iVar6;
      if (iVar4 == 0) {
        return 0;
      }
      iVar4 = FUN_00a11970(param_2,iVar4,iVar7,*(undefined4 *)(param_1 + 0x34c),param_3);
      if (iVar4 == 0) {
        return 0;
      }
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 0x24;
    } while (iVar7 < *(short *)(param_1 + 0x32c));
  }
  return 1;
}

