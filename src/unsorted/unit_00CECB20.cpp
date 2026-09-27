// src/unsorted/unit_00CECB20.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CECB20..00CECB20, 1 functions

#include "types.h"

// 00CECB20  FUN_00cecb20  size=634  [run]
int __fastcall FUN_00cecb20(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined *puVar5;
  int local_28;
  undefined1 local_20;
  undefined4 local_1f;
  undefined4 local_1b;
  undefined4 local_17;
  undefined2 local_13;
  undefined1 local_11;
  undefined1 local_10;
  undefined4 local_f;
  undefined4 local_b;
  undefined4 local_7;
  undefined2 local_3;
  undefined1 local_1;
  
  local_28 = 0;
  if (DAT_01dc08a8 == 0) {
    if ((*(int *)(param_1 + 0x218) != 0) &&
       (*(int *)(param_1 + 0x220) = *(int *)(param_1 + 0x220) + 1, 0x1e < *(int *)(param_1 + 0x220))
       ) {
      *(undefined4 *)(param_1 + 0x220) = 0;
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_00cdeec0(0x12);
      }
      DAT_01dc08a8 = 0;
      *(undefined4 *)(param_1 + 0x218) = 0;
      *(undefined4 *)(param_1 + 0x224) = 0;
    }
    return 0;
  }
  bVar1 = false;
  bVar4 = false;
  if ((*(int *)(param_1 + 0x218) == 0) || (*(int *)(param_1 + 0x21c) != DAT_01dc08a8)) {
    *(undefined4 *)(param_1 + 0x220) = 0;
    *(undefined4 *)(param_1 + 0x224) = 0;
    bVar4 = DAT_01dc08a8 < 0;
    bVar1 = true;
    if ((*(int *)(param_1 + 0x218) == 0) && (*(int *)(param_1 + 0x18) != 0)) {
      FUN_00cdeec0(0x11);
    }
    *(undefined4 *)(param_1 + 0x218) = 1;
  }
  iVar3 = DAT_01dc08a8;
  if (*(int *)(param_1 + 0x224) == 0) {
    if (((*(int *)(param_1 + 0x18) != 0) && (iVar2 = FUN_00cdf400(0x11), iVar2 != 0)) &&
       (*(int *)(param_1 + 0x220) = *(int *)(param_1 + 0x220) + 1, iVar3 = DAT_01dc08a8,
       0x1e < *(int *)(param_1 + 0x220))) {
      *(undefined4 *)(param_1 + 0x220) = 0;
      *(undefined4 *)(param_1 + 0x224) = 1;
      iVar3 = DAT_01dc08a8;
    }
    if (*(int *)(param_1 + 0x224) != 0) goto LAB_00cecbdf;
    if (!bVar1) goto LAB_00cecd3c;
  }
  else {
LAB_00cecbdf:
    if (iVar3 < 1) {
      bVar4 = true;
      if (iVar3 < -10000) {
        local_28 = 0x457;
      }
      else if (iVar3 < -1000) {
        local_28 = 0x6f;
      }
      else {
        local_28 = ((-0x65 < iVar3) - 1 & 10) + 1;
      }
      DAT_01dc08a8 = iVar3 + local_28;
      if (DAT_01dc08a8 < 1) goto LAB_00cecc99;
      DAT_01dc08a8 = 0;
      *(undefined4 *)(param_1 + 0x220) = 0;
      iVar3 = DAT_01dc08a8;
    }
    else {
      if (iVar3 < 0x2711) {
        if (iVar3 < 0x3e9) {
          local_28 = ((iVar3 < 0x65) - 1 & 0xfffffff6) - 1;
        }
        else {
          local_28 = -0x6f;
        }
      }
      else {
        local_28 = -0x457;
      }
      DAT_01dc08a8 = iVar3 + local_28;
      if (DAT_01dc08a8 < 0) {
        DAT_01dc08a8 = 0;
        *(undefined4 *)(param_1 + 0x220) = 0;
        iVar3 = DAT_01dc08a8;
      }
      else {
LAB_00cecc99:
        iVar3 = DAT_01dc08a8;
        if (DAT_01dc08a8 == 0) {
          *(undefined4 *)(param_1 + 0x220) = 0;
          iVar3 = DAT_01dc08a8;
        }
      }
    }
  }
  local_20 = 0;
  local_1f = 0;
  local_1b = 0;
  local_17 = 0;
  local_13 = 0;
  local_11 = 0;
  local_10 = 0;
  local_f = 0;
  local_b = 0;
  local_7 = 0;
  local_3 = 0;
  local_1 = 0;
  FUN_00ca84a0(iVar3,&local_20,0x10);
  if (bVar4) {
    puVar5 = &DAT_016575ac;
  }
  else {
    puVar5 = &DAT_016b893c;
  }
  FUN_0099a460(&local_10,puVar5,&local_20);
  FUN_00cce090(*(undefined4 *)(param_1 + 0x100),&local_10);
  iVar3 = DAT_01dc08a8;
LAB_00cecd3c:
  *(int *)(param_1 + 0x21c) = iVar3;
  return -local_28;
}

