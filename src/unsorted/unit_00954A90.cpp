// src/unsorted/unit_00954A90.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00954A90..00954A90, 1 functions

#include "types.h"

// 00954A90  FUN_00954a90  size=895  [run]
int * FUN_00954a90(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 4);
  if ((iVar4 == 3) || (iVar4 == 7)) {
    piVar1 = (int *)FUN_00952c50(param_1);
    return piVar1;
  }
  if (iVar4 == 5) {
    piVar1 = (int *)FUN_00952d00(param_1);
    return piVar1;
  }
  if (iVar4 == 8) {
    if (0x13 < DAT_01b37358) {
      return (int *)0x0;
    }
    piVar1 = (int *)FUN_009544a0();
    if (piVar1 != (int *)0x0) {
      FUN_00949290(param_1);
      return piVar1;
    }
    return (int *)0x0;
  }
  if (iVar4 == 9) {
    piVar1 = (int *)FUN_00952db0(param_1);
    if (piVar1 == (int *)0x0) {
      return (int *)0x0;
    }
    if (piVar1[0x14] != 0) {
      piVar1[0x28] = (uint)(*(int *)(param_1 + 8) != 0x36f036e1);
      uVar2 = FUN_00a7c8a0();
      piVar3 = (int *)FUN_0094c8b0(uVar2);
      if (piVar3 != (int *)0x0) {
        piVar3[0x248] = 0;
        (**(code **)(*piVar3 + 0x30c))();
        return piVar1;
      }
      return piVar1;
    }
    return piVar1;
  }
  if (iVar4 == 0xf) {
LAB_00954b62:
    piVar1 = (int *)FUN_00952e60(param_1);
    return piVar1;
  }
  if (iVar4 == 0x10) {
    iVar4 = *(int *)(param_1 + 8);
    if (iVar4 == 0x1e2eeb96) {
      if (DAT_01b37360 != (int *)0x0) {
        (**(code **)(*DAT_01b37360 + 0x24))();
        DAT_01b37360[1] = DAT_01b37360[1] & 0xffffdfff;
        DAT_01b37360[1] = DAT_01b37360[1] & 0xfffffeff;
        piVar1 = DAT_01b37360;
        if (DAT_01b37360[0x14] != 0) {
          piVar1 = (int *)FUN_00a7c8a0();
          (**(code **)(*piVar1 + 0x1c))();
          piVar1 = DAT_01b37360;
        }
        goto LAB_00954c7f;
      }
    }
    else if (iVar4 == 0x18ba9938) {
      if (DAT_01b37364 != (int *)0x0) {
        (**(code **)(*DAT_01b37364 + 0x24))();
        DAT_01b37364[1] = DAT_01b37364[1] & 0xffffdfff;
        DAT_01b37364[1] = DAT_01b37364[1] & 0xfffffeff;
        piVar1 = DAT_01b37364;
        if (DAT_01b37364[0x14] != 0) {
          piVar1 = (int *)FUN_00a7c8a0();
          (**(code **)(*piVar1 + 0x1c))();
          piVar1 = DAT_01b37364;
        }
LAB_00954c7f:
        if (piVar1 != (int *)0x0) {
          return piVar1;
        }
      }
    }
    else if ((iVar4 == 0x53e64a9d) && (DAT_01b37368 != (int *)0x0)) {
      (**(code **)(*DAT_01b37368 + 0x24))();
      DAT_01b37368[1] = DAT_01b37368[1] & 0xffffdfff;
      DAT_01b37368[1] = DAT_01b37368[1] & 0xfffffeff;
      piVar1 = DAT_01b37368;
      if (DAT_01b37368[0x14] != 0) {
        piVar1 = (int *)FUN_00a7c8a0();
        (**(code **)(*piVar1 + 0x1c))();
        piVar1 = DAT_01b37368;
      }
      goto LAB_00954c7f;
    }
    iVar4 = FUN_00d46780();
    if (iVar4 == 0) {
      return (int *)0x0;
    }
    iVar4 = *(int *)(param_1 + 8);
    if (iVar4 == 0x1e2eeb96) {
      FUN_00c82240(3);
      uVar2 = 0x1e2eeb96;
    }
    else if (iVar4 == 0x18ba9938) {
      FUN_00c82240(2);
      uVar2 = 0x18ba9938;
    }
    else {
      if (iVar4 != 0x53e64a9d) {
        return (int *)0x0;
      }
      FUN_00c82240(1);
      uVar2 = 0x53e64a9d;
    }
    goto LAB_00954dc9;
  }
  if (iVar4 == 0x11) goto LAB_00954b62;
  if (iVar4 != 0x12) {
    piVar1 = (int *)cItemStageDrop::cItemStageDrop_2(param_1);
    return piVar1;
  }
  if (*(int *)(param_1 + 8) != 0x6929db00) {
    return (int *)0x0;
  }
  if (DAT_01b3736c != (int *)0x0) {
    (**(code **)(*DAT_01b3736c + 0x24))();
    DAT_01b3736c[1] = DAT_01b3736c[1] & 0xffffdfff;
    DAT_01b3736c[1] = DAT_01b3736c[1] & 0xfffffeff;
    if (DAT_01b3736c[0x14] != 0) {
      piVar1 = (int *)FUN_00a7c8a0();
      (**(code **)(*piVar1 + 0x1c))();
      uVar2 = FUN_00a7c8a0();
      iVar4 = FUN_0094c820(uVar2);
      if (iVar4 != 0) {
        FUN_005e86c0(0);
      }
    }
    if (DAT_01b3736c != (int *)0x0) {
      return DAT_01b3736c;
    }
  }
  if (*(int *)(param_1 + 8) != 0x6929db00) {
    return (int *)0x0;
  }
  if (DAT_018b9174 == 0xd30) {
    uVar2 = 2;
LAB_00954db8:
    FUN_00c82240(uVar2);
  }
  else if (DAT_018b9174 == 0xd50) {
    uVar2 = 4;
    goto LAB_00954db8;
  }
  uVar2 = 0x6929db00;
LAB_00954dc9:
  uVar2 = FUN_0094aa20(uVar2,0);
  FUN_00cbac80(0xffffffff,uVar2);
  FUN_00e5e050("core_se_sys_item_get",0);
  return (int *)0x0;
}

