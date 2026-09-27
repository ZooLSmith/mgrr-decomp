// src/unsorted/unit_00D5ABD0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D5ABD0..00D5AD80, 2 functions

#include "types.h"

// 00D5ABD0  FUN_00d5abd0  size=282  [run]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00d5abd0(int param_1,float *param_2)

{
  float fVar1;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  fVar1 = *(float *)(param_1 + 0x510) + 0.001;
  *(float *)(param_1 + 0x510) = fVar1;
  if (0.05 < fVar1) {
    *(undefined4 *)(param_1 + 0x510) = 0x3d4ccccd;
  }
  local_30 = *param_2 - _DAT_01bea630;
  local_2c = param_2[1] - _DAT_01bea634;
  local_28 = param_2[2] - _DAT_01bea638;
  local_24 = param_2[3] - _DAT_01bea63c;
  local_20 = _DAT_01bea640 - _DAT_01bea630;
  local_1c = _DAT_01bea644 - _DAT_01bea634;
  local_18 = _DAT_01bea648 - _DAT_01bea638;
  local_14 = _DAT_01bea64c - _DAT_01bea63c;
  FUN_00d537b0(&local_30,&local_20,&local_30,*(undefined4 *)(param_1 + 0x510));
  local_30 = _DAT_01bea630 + local_30;
  local_2c = _DAT_01bea634 + local_2c;
  local_28 = _DAT_01bea638 + local_28;
  local_24 = _DAT_01bea63c + local_24;
  FUN_00da9660(0,&local_30,0);
  return;
}

// 00D5AD80  FUN_00d5ad80  size=182  [run]
void FUN_00d5ad80(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  FUN_00a7c950();
  iVar1 = FUN_00a7f600(0x201a0);
  while (iVar1 == 0) {
    piVar2 = (int *)FUN_00a6dd90();
    (**(code **)(*piVar2 + 0x50))(1);
    iVar1 = FUN_00a7f600(0x201a0);
  }
  uVar3 = FUN_00a7c7f0();
  FUN_00a7c960(uVar3);
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    FUN_00a7c8a0();
  }
  FUN_00d48d60();
  piVar2 = (int *)FUN_00c13920();
  (**(code **)(*piVar2 + 0x28))(0xffffffff);
  iVar1 = FUN_00a7c8a0();
  if (iVar1 != 0) {
    FUN_00b7c060(1);
  }
  do {
    piVar2 = (int *)FUN_00a6dd90();
    (**(code **)(*piVar2 + 0x50))(1);
  } while( true );
}

