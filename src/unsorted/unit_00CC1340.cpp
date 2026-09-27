// src/unsorted/unit_00CC1340.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CC1340..00CC1360, 2 functions

#include "mgrr.h"

// 00CC1340  FUN_00cc1340  size=25  [run]
void __fastcall FUN_00cc1340(int *param_1)

{
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)*param_1)(1);
    *param_1 = 0;
  }
  return;
}

// 00CC1360  FUN_00cc1360  size=29  [run]
undefined4 * FUN_00cc1360(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00dd3500(4,&DAT_01b7be50);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}

