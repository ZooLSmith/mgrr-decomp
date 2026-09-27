// src/unsorted/unit_00CFEBF0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CFEBF0..00CFF240, 6 functions

#include "types.h"

// 00CFEBF0  FUN_00cfebf0  size=214  [run]
int __thiscall FUN_00cfebf0(int param_1,uint param_2)

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
        ) || (iVar1 = (**(code **)(*piVar2 + 8))(), iVar1 != 4)) {
      piVar2 = (int *)0x0;
    }
    FUN_00ce51d0(piVar2,&local_54);
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if ((iVar1 != 0) && (param_2 < *(uint *)(iVar1 + 0x80))) {
    return param_2 * 0x400 + 0x50 + *(int *)(iVar1 + 0x7c);
  }
  return 0;
}

// 00CFECD0  FUN_00cfecd0  size=188  [run]
void __fastcall FUN_00cfecd0(int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)(param_1 + 4) + 0x18) != 0) {
    *(uint *)(param_1 + 0x14) = DAT_01bea064 >> 0xc & 1;
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 0) {
      iVar1 = FUN_00cae180(0);
      if (((iVar1 != 0) && (DAT_01dc0868 == 0)) && (*(int *)(param_1 + 0x14) == 0)) {
        FUN_00ceb5d0();
        return;
      }
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    }
    else {
      if (iVar1 == 1) {
        if (*(int *)(param_1 + 0xc) != 0) {
          FUN_00e5e1b0("bgm_Redout_Exit");
          FUN_00e5e050("core_se_btl_redout_out",0);
        }
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      }
      else if (iVar1 != 2) {
        return;
      }
      iVar1 = FUN_00cae180(0);
      if (((iVar1 != 0) && (DAT_01dc0868 == 0)) && (*(int *)(param_1 + 0x14) == 0)) {
        if (*(int *)(param_1 + 0xc) != 0) {
          FUN_00e5e1b0("bgm_Redout_Enter");
          FUN_00e5e050("core_se_btl_redout_in",0);
        }
        *(undefined4 *)(param_1 + 8) = 0;
        return;
      }
    }
  }
  return;
}

// 00CFED90  FUN_00cfed90  size=134  [run]
void __fastcall FUN_00cfed90(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    iVar1 = FUN_00cae180(0);
    if (iVar1 != 0) {
      FUN_00ceb800();
      return;
    }
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    return;
  }
  if (iVar1 == 1) {
    if (*(int *)(param_1 + 0xc) != 0) {
      FUN_00e5e1b0("bgm_Redout_Exit");
      FUN_00e5e050("core_se_btl_redout_out",0);
    }
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  else if (iVar1 != 2) {
    return;
  }
  iVar1 = FUN_00cae180(0);
  if (iVar1 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_00e5e1b0("bgm_Redout_Enter");
    FUN_00e5e050("core_se_btl_redout_in",0);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}

// 00CFEE50  FUN_00cfee50  size=214  [run]
int __thiscall FUN_00cfee50(int param_1,uint param_2)

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
        ) || (iVar1 = (**(code **)(*piVar2 + 8))(), iVar1 != 4)) {
      piVar2 = (int *)0x0;
    }
    FUN_00ce51d0(piVar2,&local_54);
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if ((iVar1 != 0) && (param_2 < *(uint *)(iVar1 + 0x80))) {
    return param_2 * 0x400 + 0x50 + *(int *)(iVar1 + 0x7c);
  }
  return 0;
}

// 00CFEF30  FUN_00cfef30  size=604  [run]
void __thiscall FUN_00cfef30(int param_1,char param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if ((param_2 == '\x01') || (*(int *)(param_1 + 200) != *(int *)(param_1 + 0xcc))) {
    uVar1 = *(uint *)(param_1 + 0xa4);
    iVar2 = *(int *)(param_1 + 0x18);
    if (*(int *)(param_1 + 200) == -1) {
      if (((iVar2 != 0) && (uVar1 < *(uint *)(iVar2 + 0x80))) &&
         (iVar2 = uVar1 * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
        *(undefined4 *)(iVar2 + 0x3b0) = 0;
      }
      iVar2 = *(int *)(param_1 + 0x18);
      if (((iVar2 != 0) && (*(uint *)(param_1 + 0xa8) < *(uint *)(iVar2 + 0x80))) &&
         (iVar2 = *(uint *)(param_1 + 0xa8) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
        *(undefined4 *)(iVar2 + 0x3b0) = 0;
        *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_1 + 200);
        return;
      }
    }
    else {
      if (((iVar2 != 0) && (uVar1 < *(uint *)(iVar2 + 0x80))) &&
         (iVar2 = uVar1 * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
        *(undefined4 *)(iVar2 + 0x3b0) = 1;
      }
      iVar2 = *(int *)(param_1 + 0x18);
      if (((iVar2 != 0) && (*(uint *)(param_1 + 0xa8) < *(uint *)(iVar2 + 0x80))) &&
         (iVar2 = *(uint *)(param_1 + 0xa8) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
        *(undefined4 *)(iVar2 + 0x3b0) = 1;
      }
      uVar5 = 0xffffffff;
      uVar4 = 0;
      uVar3 = FUN_00ca92b0(*(undefined4 *)(param_1 + 200),0,1,*(undefined4 *)(param_1 + 0xd0),
                           *(undefined4 *)(param_1 + 0xd4),0,0xffffffff);
      FUN_00cf9770(*(undefined4 *)(param_1 + 0xa4),uVar3,uVar4,uVar5);
      uVar5 = 0xffffffff;
      uVar4 = 0;
      uVar3 = FUN_00ca92b0(*(undefined4 *)(param_1 + 200),0,1,*(undefined4 *)(param_1 + 0xd0),
                           *(undefined4 *)(param_1 + 0xd4),0,0xffffffff);
      FUN_00cf9770(*(undefined4 *)(param_1 + 0xa8),uVar3,uVar4,uVar5);
      FUN_00ccdf90(*(undefined4 *)(param_1 + 0xa4),1,3);
      FUN_00ccdf90(*(undefined4 *)(param_1 + 0xa8),1,3);
      iVar2 = *(int *)(param_1 + 0x18);
      *(uint *)(param_1 + 0x104) = (uint)(*(int *)(param_1 + 200) == 0x2070a);
      if (((iVar2 != 0) && (*(uint *)(param_1 + 0x90) < *(uint *)(iVar2 + 0x80))) &&
         (iVar2 = *(uint *)(param_1 + 0x90) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
        *(uint *)(iVar2 + 0x3b0) = (uint)(*(int *)(param_1 + 0x108) == 0);
      }
      iVar2 = *(int *)(param_1 + 0x18);
      if (((iVar2 != 0) && (*(uint *)(param_1 + 0x94) < *(uint *)(iVar2 + 0x80))) &&
         (iVar2 = *(uint *)(param_1 + 0x94) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
        *(uint *)(iVar2 + 0x3b0) = (uint)(*(int *)(param_1 + 0x108) == 0);
      }
      iVar2 = *(int *)(param_1 + 0x18);
      if (((iVar2 != 0) && (*(uint *)(param_1 + 0x98) < *(uint *)(iVar2 + 0x80))) &&
         (iVar2 = *(uint *)(param_1 + 0x98) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
        *(undefined4 *)(iVar2 + 0x3b0) = *(undefined4 *)(param_1 + 0x108);
      }
      iVar2 = *(int *)(param_1 + 0x18);
      if (((iVar2 != 0) && (*(uint *)(param_1 + 0x9c) < *(uint *)(iVar2 + 0x80))) &&
         (iVar2 = *(uint *)(param_1 + 0x9c) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
        *(undefined4 *)(iVar2 + 0x3b0) = *(undefined4 *)(param_1 + 0x108);
      }
      iVar2 = *(int *)(param_1 + 0x18);
      if (((iVar2 != 0) && (*(uint *)(param_1 + 0xa0) < *(uint *)(iVar2 + 0x80))) &&
         (iVar2 = *(uint *)(param_1 + 0xa0) * 0x400 + *(int *)(iVar2 + 0x7c), iVar2 != 0)) {
        *(undefined4 *)(iVar2 + 0x3b0) = *(undefined4 *)(param_1 + 0x108);
      }
    }
    *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_1 + 200);
  }
  return;
}

// 00CFF240  FUN_00cff240  size=214  [run]
int __thiscall FUN_00cff240(int param_1,uint param_2)

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
        ) || (iVar1 = (**(code **)(*piVar2 + 8))(), iVar1 != 4)) {
      piVar2 = (int *)0x0;
    }
    FUN_00ce51d0(piVar2,&local_54);
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if ((iVar1 != 0) && (param_2 < *(uint *)(iVar1 + 0x80))) {
    return param_2 * 0x400 + 0x50 + *(int *)(iVar1 + 0x7c);
  }
  return 0;
}

