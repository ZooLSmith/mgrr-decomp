// src/unsorted/unit_004D7440.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 004D7440..004D7440, 1 functions

#include "types.h"

// 004D7440  FUN_004d7440  size=466  [run]
undefined4 __fastcall FUN_004d7440(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined *puVar6;
  int *local_c;
  
  param_1[0x1a1] = 0;
  iVar1 = FUN_00a81330();
  if (iVar1 == 0) {
    local_c = (int *)0x0;
  }
  else {
    local_c = (int *)FUN_00a7c8a0();
    if (local_c == (int *)0x0) {
      local_c = (int *)0x0;
    }
    else {
      puVar6 = &DAT_01b34e80;
      (**(code **)(*local_c + 4))(&DAT_01b34e80);
      iVar1 = FUN_00dd6d70(puVar6);
      local_c = (int *)(-(uint)(iVar1 != 0) & (uint)local_c);
    }
    if ((local_c != (int *)0x0) && (iVar1 = FUN_00a8e520(), iVar1 != 0)) goto LAB_004d74bf;
  }
  if (param_1[0x33b] == 0) {
    param_1[0x339] = 0;
    return 0;
  }
LAB_004d74bf:
  FUN_00ac2080(0);
  piVar5 = (int *)param_1[0x19f];
  piVar2 = piVar5 + param_1[0x1a1] * 0x54;
  if (piVar5 == piVar2) {
    return 0;
  }
  piVar4 = piVar5 + 6;
  do {
    iVar3 = 0;
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      iVar3 = FUN_00a7c8a0();
    }
    if ((piVar4[0x35] != 0) && (iVar3 != 0)) {
      if ((param_1[0x33b] == 0) && (iVar1 = FUN_004b6bd0(piVar5), iVar1 == 0)) {
        param_1[0x339] = param_1[0x339] + 1;
        FUN_004d1750(piVar5);
        if ((1 < param_1[0x339]) && (iVar1 = (**(code **)(*local_c + 0x1d8))(), iVar1 == 0)) {
          FUN_004bfe50();
          (**(code **)(*param_1 + 0x198))(iVar3,piVar5,0x4000);
        }
      }
      else {
        iVar1 = *piVar5;
        if ((((((iVar1 != 0) && (iVar1 != 1)) && (iVar1 != 2)) &&
             ((iVar1 != 0x1b0 && (iVar1 != 0x147)))) &&
            (iVar1 = FUN_00a81330(), iVar1 != param_1[0x13c])) &&
           (iVar1 = FUN_00a98220(piVar5), iVar1 != 0)) {
          if (param_1[0xdc] != 0) {
            FUN_00a1abe0(1);
          }
          FUN_00a8e5d0(param_1,piVar5,0);
          (**(code **)(*param_1 + 0x198))(iVar3,piVar5,0x100);
          return 1;
        }
      }
    }
    piVar5 = piVar5 + 0x54;
    piVar4 = piVar4 + 0x54;
    if (piVar5 == piVar2) {
      return 0;
    }
  } while( true );
}

