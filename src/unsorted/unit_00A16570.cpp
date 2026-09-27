// src/unsorted/unit_00A16570.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A16570..00A165B0, 3 functions

#include "mgrr.h"

// 00A16570  FUN_00a16570  size=28  [run]
undefined4 __fastcall FUN_00a16570(int param_1)

{
  undefined4 extraout_ECX;
  
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  FUN_00a066b0();
  return extraout_ECX;
}

// 00A16590  FUN_00a16590  size=17  [run]
void FUN_00a16590(void)

{
  FUN_00a14d90();
  FUN_00a147a0();
  return;
}

// 00A165B0  FUN_00a165b0  size=190  [run]
void __thiscall FUN_00a165b0(int *param_1,int param_2)

{
  ushort *puVar1;
  ushort uVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  bVar4 = false;
  if ((*(int *)(param_2 + 0xa8) != 0) && ((*(byte *)(*(int *)(param_2 + 0xa8) + 0xa2) & 0x20) != 0))
  {
    bVar4 = true;
  }
  uVar2 = *(ushort *)(param_2 + 0xa2);
  if ((uVar2 & 0x20) != 0) {
    bVar4 = false;
  }
  if (((uVar2 & 0x10) != 0) || (bVar4)) {
    if ((uVar2 & 0x8004) == 0) {
      FUN_00a15310();
    }
    *(ushort *)(param_2 + 0xa2) = *(ushort *)(param_2 + 0xa2) | 0x20;
  }
  iVar5 = 0;
  if (0 < (short)param_1[2]) {
    iVar7 = 0;
    do {
      iVar3 = *(int *)(*param_1 + 0xa8 + iVar7);
      iVar6 = *param_1 + iVar7;
      bVar4 = false;
      if ((iVar3 != 0) && ((*(byte *)(iVar3 + 0xa2) & 0x20) != 0)) {
        bVar4 = true;
      }
      uVar2 = *(ushort *)(iVar6 + 0xa2);
      if ((uVar2 & 0x20) != 0) {
        bVar4 = false;
      }
      if (((uVar2 & 0x10) != 0) || (bVar4)) {
        if ((uVar2 & 0x8004) == 0) {
          FUN_00a15310();
        }
        puVar1 = (ushort *)(iVar6 + 0xa2);
        *puVar1 = *puVar1 | 0x20;
      }
      iVar5 = iVar5 + 1;
      iVar7 = iVar7 + 0xb0;
    } while (iVar5 < (short)param_1[2]);
  }
  return;
}

