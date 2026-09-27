// src/unsorted/unit_008DD500.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008DD500..008DD610, 2 functions

#include "mgrr.h"

// 008DD500  FUN_008dd500  size=272  [run]
void __thiscall FUN_008dd500(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_140;
  float local_13c;
  undefined4 local_138;
  float local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  float local_124;
  undefined1 local_114 [4];
  undefined4 local_110 [12];
  undefined4 local_e0 [36];
  undefined4 local_50;
  undefined1 local_2c;
  
  uVar1 = FUN_00a7f290(param_2);
  FUN_00a7c960(uVar1);
  puVar5 = local_110;
  local_110[0] = 0;
  FUN_00a81330(puVar5);
  FUN_00a7c8a0();
  FUN_00a9d720(puVar5);
  FUN_0118f7b0();
  local_50 = 0;
  local_e0[0] = 0x14;
  local_2c = 5;
  piVar2 = (int *)FUN_00910da0();
  local_130 = 0x40a00000;
  local_12c = 0x40c00000;
  local_128 = 0x3f800000;
  iVar3 = FUN_00a7c8a0();
  local_140 = *(undefined4 *)(iVar3 + 0x40);
  local_13c = *(float *)(iVar3 + 0x44) + 3.0;
  local_138 = *(undefined4 *)(iVar3 + 0x48);
  local_134 = *(float *)(iVar3 + 0x4c) + local_124;
  iVar3 = *piVar2;
  iVar4 = FUN_00a7c8a0(&local_130,1);
  uVar1 = (**(code **)(iVar3 + 4))(local_114,local_e0,&local_140,iVar4 + 0x90);
  FUN_00910ab0(uVar1);
  iVar3 = *(int *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (iVar3 != 0) {
    *(int *)(param_1 + 0x10) = iVar3;
  }
  return;
}

// 008DD610  FUN_008dd610  size=147  [run]
void __fastcall FUN_008dd610(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  
  piVar1 = (int *)FUN_00910da0();
  (**(code **)(*piVar1 + 0x2c))(param_1 + 0x18);
  iVar3 = *(int *)(*(int *)(param_1 + 0x40) + 4);
  if (iVar3 != *(int *)(*(int *)(param_1 + 0x40) + 8) * 0x70 + iVar3) {
    do {
      iVar2 = FUN_00a81330();
      if ((iVar2 != 0) && (piVar1 = (int *)FUN_00a7c8a0(), piVar1 != (int *)0x0)) {
        puVar4 = &DAT_01be9d00;
        (**(code **)(*piVar1 + 4))(&DAT_01be9d00);
        iVar2 = FUN_00dd6d80(puVar4);
        if ((iVar2 != 0) && (piVar1[0x38c] == 0)) {
          FUN_00a8caf0(0x92,0,0,0);
        }
      }
      iVar3 = iVar3 + 0x70;
    } while (iVar3 != *(int *)(*(int *)(param_1 + 0x40) + 8) * 0x70 +
                      *(int *)(*(int *)(param_1 + 0x40) + 4));
  }
  return;
}

