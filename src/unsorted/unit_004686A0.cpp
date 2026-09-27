// src/unsorted/unit_004686A0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 004686A0..00468740, 2 functions

#include "mgrr.h"

// 004686A0  FUN_004686a0  size=95  [run]
void __fastcall FUN_004686a0(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  if (0 < *(short *)(param_1 + 0x324)) {
    iVar4 = 0;
    do {
      iVar2 = *(int *)(param_1 + 800);
      iVar3 = *(int *)(*(int *)(iVar2 + 0x60 + iVar4) + 0x40);
      if ((iVar3 != 0) && (iVar3 = FUN_00fdbbd0(iVar3,&DAT_0163d9a8), iVar3 != 0)) {
        puVar1 = (uint *)(iVar2 + 0x38 + iVar4);
        *puVar1 = *puVar1 | 1;
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0x70;
    } while (iVar5 < *(short *)(param_1 + 0x324));
  }
  *(undefined4 *)(param_1 + 0x8c0) = 1;
  return;
}

// 00468740  FUN_00468740  size=42  [run]
uint FUN_00468740(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar2 = &DAT_01b34d5c;
  (**(code **)(*param_1 + 4))(&DAT_01b34d5c);
  iVar1 = FUN_00dd6d80(puVar2);
  return -(uint)(iVar1 != 0) & (uint)param_1;
}

