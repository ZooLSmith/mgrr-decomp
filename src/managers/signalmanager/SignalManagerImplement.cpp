// src/managers/signalmanager/SignalManagerImplement.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00D8A5C0..00D8A710, 3 functions

#include "types.h"

// 00D8A5C0  SignalManagerImplement::vf04  size=57  [class]
int * __thiscall SignalManagerImplement::vf04(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 8);
  if (puVar2 != puVar2 + *(int *)(param_1 + 0xc)) {
    puVar1 = puVar2 + *(int *)(param_1 + 0xc);
    do {
      if (*(int *)*puVar2 == param_2) {
        return (int *)*puVar2;
      }
      puVar2 = puVar2 + 1;
    } while (puVar2 != puVar1);
  }
  return (int *)0x0;
}

// 00D8A6F0  SignalManagerImplement::vf08  size=30  [class]
undefined4 __thiscall SignalManagerImplement::vf08(undefined4 param_1,byte param_2)

{
  SignalManager::SignalManager();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00D8A710  SignalManagerImplement::vf00  size=237  [class]
int * __thiscall SignalManagerImplement::vf00(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *unaff_retaddr;
  undefined *local_8;
  int *local_4;
  
  iVar1 = (int)param_2;
  piVar6 = (int *)(param_1 + 4);
  for (puVar7 = *(undefined4 **)(param_1 + 8);
      puVar7 != (undefined4 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0xc) * 4);
      puVar7 = puVar7 + 1) {
    if ((int *)*(int *)*puVar7 == param_2) {
      return (int *)*puVar7;
    }
  }
  local_4 = piVar6;
  piVar2 = (int *)FUN_00dd3500(0x30,&DAT_01b7c168);
  if (piVar2 == (int *)0x0) {
    param_2 = (int *)0x0;
  }
  else {
    iVar3 = 0;
    do {
      if ((&DAT_018bbd58)[iVar3 * 2] == iVar1) {
        uVar5 = (&DAT_018bbd5c)[iVar3 * 2];
        goto LAB_00d8a771;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x3d);
    uVar5 = 0;
LAB_00d8a771:
    *piVar2 = iVar1;
    piVar2[8] = 0;
    FUN_00dd7240();
    puVar4 = (undefined4 *)FUN_00dd3500(0x18,&DAT_01b7c168);
    puVar7 = (undefined4 *)0x0;
    if (puVar4 != (undefined4 *)0x0) {
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      *puVar4 = lib::AllocatedArray<Slot*>::vftable;
      puVar4[4] = 0;
      puVar4[5] = 0;
      puVar7 = puVar4;
    }
    local_8 = &DAT_01b7c168;
    FUN_00d8a2b0(uVar5,&local_8);
    piVar2[10] = (int)puVar7;
    piVar6 = local_4;
    param_2 = piVar2;
  }
  (**(code **)(*piVar6 + 8))(&param_2);
  return unaff_retaddr;
}

