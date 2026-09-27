// src/unsorted/unit_00C2DB30.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C2DB30..00C2DBD0, 3 functions

#include "types.h"

// 00C2DB30  FUN_00c2db30  size=70  [run]
uint FUN_00c2db30(void)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = (**(code **)(*DAT_01bea100 + 0x28))(1);
  if (iVar1 == 0) {
    return 0;
  }
  piVar2 = (int *)FUN_00a7c8a0();
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  puVar3 = &DAT_01b35420;
  (**(code **)(*piVar2 + 4))(&DAT_01b35420);
  iVar1 = FUN_00dd6d80(puVar3);
  return -(uint)(iVar1 != 0) & (uint)piVar2;
}

// 00C2DB80  FUN_00c2db80  size=69  [run]
uint FUN_00c2db80(void)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = (**(code **)(*DAT_01bea100 + 0x28))(0);
  if (iVar1 == 0) {
    return 0;
  }
  piVar2 = (int *)FUN_00a7c8a0();
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  puVar3 = &DAT_01b35b20;
  (**(code **)(*piVar2 + 4))(&DAT_01b35b20);
  iVar1 = FUN_00dd6d80(puVar3);
  return -(uint)(iVar1 != 0) & (uint)piVar2;
}

// 00C2DBD0  FUN_00c2dbd0  size=69  [run]
uint FUN_00c2dbd0(void)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = (**(code **)(*DAT_01bea100 + 0x28))(0);
  if (iVar1 == 0) {
    return 0;
  }
  piVar2 = (int *)FUN_00a7c8a0();
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  puVar3 = &DAT_01b35b90;
  (**(code **)(*piVar2 + 4))(&DAT_01b35b90);
  iVar1 = FUN_00dd6d80(puVar3);
  return -(uint)(iVar1 != 0) & (uint)piVar2;
}

