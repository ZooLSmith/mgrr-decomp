// src/unsorted/unit_0060CCE0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0060CCE0..0060CCE0, 1 functions

#include "mgrr.h"

// 0060CCE0  FUN_0060cce0  size=189  [run]
void __fastcall FUN_0060cce0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined1 local_50 [76];
  
  iVar2 = FUN_00a12210(0xf00);
  if (iVar2 != 0) {
    FID_conflict__memcpy(local_50,(void *)(iVar2 + 0x10),0x40);
    *(undefined4 *)(param_1 + 0x5740) = 1;
    FID_conflict__memcpy((void *)(param_1 + 0x5750),local_50,0x40);
  }
  iVar2 = FUN_00a12210(0xffffffff);
  *(ushort *)(iVar2 + 0xa2) = *(ushort *)(iVar2 + 0xa2) | 0x1000;
  iVar2 = FUN_00a12210(0);
  *(ushort *)(iVar2 + 0xa2) = *(ushort *)(iVar2 + 0xa2) | 0x1000;
  iVar2 = FUN_00a12210(0xf00);
  *(ushort *)(iVar2 + 0xa2) = *(ushort *)(iVar2 + 0xa2) | 0x1000;
  puVar1 = *(undefined4 **)(param_1 + 2000);
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = &DAT_01b35bdc;
    (**(code **)*puVar1)(&DAT_01b35bdc);
    iVar2 = FUN_00dd6d80(puVar3);
    if (iVar2 != 0) {
      puVar1[0x3b] = 1;
    }
  }
  return;
}

