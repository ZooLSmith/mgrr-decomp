// src/unsorted/unit_00CEB800.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CEB800..00CEB800, 1 functions

#include "mgrr.h"

// 00CEB800  FUN_00ceb800  size=431  [run]
void __fastcall FUN_00ceb800(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  switch(*(undefined4 *)(param_1 + 0x10)) {
  case 0:
    if ((DAT_01dc086c != 0) || (DAT_01dc0870 != 0)) {
      FUN_00e5e1b0("bgm_Redout_Enter");
      FUN_00e5e050("core_se_btl_redout_in",0);
      *(undefined4 *)(param_1 + 0xc) = 1;
      *(undefined4 *)(*(int *)(param_1 + 4) + 4) = 1;
      FUN_00cdeec0(0);
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      *(undefined4 *)(*(int *)(param_1 + 4) + 0x1f0) = DAT_01dc0874;
      return;
    }
    break;
  case 1:
    uVar3 = 0;
    goto LAB_00ceb956;
  case 2:
    if (DAT_01dc0870 != 0) {
      FUN_00cdeec0(2);
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      *(undefined4 *)(*(int *)(param_1 + 4) + 0x1f0) = DAT_01dc0874;
      return;
    }
    if (DAT_01dc086c == 0) {
      FUN_00e5e1b0("bgm_Redout_Exit");
      FUN_00e5e050("core_se_btl_redout_out",0);
      *(undefined4 *)(param_1 + 0xc) = 0;
      FUN_00cdeec0(1);
      *(undefined4 *)(param_1 + 0x10) = 6;
      *(undefined4 *)(*(int *)(param_1 + 4) + 0x1f0) = DAT_01dc0874;
      return;
    }
    break;
  case 3:
    iVar1 = FUN_00cdf400(2);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x10) = 4;
      *(undefined4 *)(*(int *)(param_1 + 4) + 0x1f0) = DAT_01dc0874;
      return;
    }
    break;
  case 4:
    if (DAT_01dc0870 == 0) {
      FUN_00cdeec0(3);
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      *(undefined4 *)(*(int *)(param_1 + 4) + 0x1f0) = DAT_01dc0874;
      return;
    }
    break;
  case 5:
    uVar3 = 1;
LAB_00ceb956:
    iVar1 = FUN_00cdf400(uVar3);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x10) = 2;
      *(undefined4 *)(*(int *)(param_1 + 4) + 0x1f0) = DAT_01dc0874;
      return;
    }
    break;
  case 6:
    iVar1 = *(int *)(param_1 + 4);
    iVar2 = FUN_00cdf400(3);
    if (iVar2 != 0) {
      *(undefined4 *)(iVar1 + 4) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
  }
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x1f0) = DAT_01dc0874;
  return;
}

