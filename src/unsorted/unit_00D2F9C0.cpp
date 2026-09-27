// src/unsorted/unit_00D2F9C0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D2F9C0..00D2FA30, 2 functions

#include "mgrr.h"

// 00D2F9C0  FUN_00d2f9c0  size=72  [run]
int FUN_00d2f9c0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00dd3500(0xf0,&DAT_01b7be50);
  if (iVar1 != 0) {
    iVar1 = cEnergyGaugeWhiteRaiden::cEnergyGaugeWhiteRaiden();
    if (iVar1 != 0) {
      *(char **)(iVar1 + 0xc) = "cEnergyGaugeWhiteRaiden";
      *(undefined4 *)(iVar1 + 8) = 9;
      uVar2 = FUN_00d29960(0x20);
      *(undefined4 *)(iVar1 + 0x14) = uVar2;
    }
    return iVar1;
  }
  return 0;
}

// 00D2FA30  FUN_00d2fa30  size=214  [run]
int __thiscall FUN_00d2fa30(int param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 != 0) {
    if (((*(uint *)(iVar1 + 0x80) <= param_2) ||
        (piVar2 = *(int **)(param_2 * 0x400 + 0x3f0 + *(int *)(iVar1 + 0x7c)), piVar2 == (int *)0x0)
        ) || (iVar1 = (**(code **)(*piVar2 + 8))(), iVar1 != 3)) {
      piVar2 = (int *)0x0;
    }
    FUN_00d1fa60(piVar2,&local_54);
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if ((iVar1 != 0) && (param_2 < *(uint *)(iVar1 + 0x80))) {
    return param_2 * 0x400 + 0x50 + *(int *)(iVar1 + 0x7c);
  }
  return 0;
}

