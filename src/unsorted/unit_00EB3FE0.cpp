// src/unsorted/unit_00EB3FE0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00EB3FE0..00EB4340, 4 functions

#include "types.h"

// 00EB3FE0  FUN_00eb3fe0  size=90  [run]
int * __thiscall FUN_00eb3fe0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  piVar3 = param_1;
  while (*piVar3 != param_3) {
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 0xe2;
    if (5 < iVar2) {
      return (int *)0x0;
    }
  }
  iVar1 = *(int *)(param_1[iVar2 * 0xe2 + 1] + 8 + param_2 * 4);
  if ((iVar1 != 0) && (param_1[iVar2 * 0xe2 + 1] + iVar1 != 0)) {
    return param_1 + iVar2 * 0xe2 + param_2 * 7 + 2;
  }
  return (int *)0x0;
}

// 00EB4040  FUN_00eb4040  size=646  [run]
void __fastcall FUN_00eb4040(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  float local_60;
  float local_5c;
  uint local_58;
  int *local_54;
  float local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  int *local_3c;
  uint local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  float local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;
  undefined4 local_14;
  float local_10;
  float local_c;
  undefined4 local_8;
  uint local_4;
  
  local_4 = DAT_018e8764 ^ (uint)&local_60;
  local_54 = *(int **)(param_1 + 0x7c);
  local_3c = *(int **)(param_1 + 0x80);
  if (local_54 != local_3c) {
    do {
      iVar1 = *local_54;
      local_58 = (uint)*(byte *)(iVar1 + 0xe);
      local_48 = (uint)*(byte *)(iVar1 + 0xd);
      local_38 = (uint)*(byte *)(iVar1 + 0xc);
      local_50 = (float)(uint)*(byte *)(iVar1 + 0xf);
      local_44 = (uint)*(byte *)(iVar1 + 0x12);
      local_4c = (uint)*(byte *)(iVar1 + 0x11);
      local_40 = (uint)*(byte *)(iVar1 + 0x10);
      local_5c = (float)(uint)*(byte *)(iVar1 + 0x13);
      if ((*(byte *)(iVar1 + 8) & 2) == 0) {
        if (*(int *)(iVar1 + 0x18) == 0) {
          local_60 = 1.0;
        }
        else {
          local_60 = (float)*(int *)(iVar1 + 0x14) / (float)(*(int *)(iVar1 + 0x18) + -1);
        }
      }
      else {
        local_60 = 1.0 - *(float *)(iVar1 + 0x1c);
      }
      uVar2 = FUN_00fdbc60();
      local_58 = FUN_00fdbc60();
      local_60 = (float)FUN_00fdbc60();
      iVar3 = FUN_00fdbc60();
      if ((int)uVar2 < 0) {
        uVar2 = 0;
      }
      else if (0xff < (int)uVar2) {
        uVar2 = 0xff;
      }
      if ((int)local_58 < 0) {
        local_58 = 0;
      }
      else if (0xff < (int)local_58) {
        local_58 = 0xff;
      }
      if ((int)local_60 < 0) {
        local_60 = 0.0;
      }
      else if (0xff < (int)local_60) {
        local_60 = 3.57331e-43;
      }
      if (-1 < iVar3) {
        if (iVar3 < 0x100) {
          if (iVar3 == 0) goto LAB_00eb429e;
        }
        else {
          iVar3 = 0xff;
        }
        uVar7 = (uint)local_60 & 0xff;
        uVar4 = local_58 & 0xff;
        local_5c = (float)FUN_00f98a90();
        local_50 = (float)(int)local_5c;
        iVar5 = FUN_00f98aa0();
        local_5c = (float)iVar5;
        local_34 = 0xbf800000;
        local_30 = 0xbf800000;
        local_2c = 0;
        local_28 = local_50;
        local_24 = 0xbf800000;
        local_1c = 0xbf800000;
        local_20 = 0;
        local_14 = 0;
        local_8 = 0;
        local_10 = local_50;
        local_18 = local_5c;
        local_c = local_5c;
        iVar5 = Hw::cPrimF::cPrimF_2(&local_34,4);
        if (iVar5 != 0) {
          *(undefined4 *)(iVar5 + 0x78) = 5;
          *(uint *)(iVar5 + 0x7c) = ((uVar2 & 0xff | iVar3 << 8) << 8 | uVar4) << 8 | uVar7;
          *(undefined4 *)(iVar5 + 0x48) = 0;
          *(undefined4 *)(iVar5 + 0x44) = 0;
          *(undefined4 *)(iVar5 + 0x40) = 0;
          *(undefined4 *)(iVar5 + 0x3c) = 0;
          *(undefined4 *)(iVar5 + 0x34) = 0;
          *(undefined4 *)(iVar5 + 0x30) = 0;
          *(undefined4 *)(iVar5 + 0x2c) = 0;
          *(undefined4 *)(iVar5 + 0x28) = 0;
          *(undefined4 *)(iVar5 + 0x20) = 0;
          *(undefined4 *)(iVar5 + 0x1c) = 0;
          *(undefined4 *)(iVar5 + 0x18) = 0;
          *(undefined4 *)(iVar5 + 0x14) = 0;
          *(undefined4 *)(iVar5 + 0x4c) = 0x3f800000;
          *(undefined4 *)(iVar5 + 0x38) = 0x3f800000;
          *(undefined4 *)(iVar5 + 0x24) = 0x3f800000;
          *(undefined4 *)(iVar5 + 0x10) = 0x3f800000;
          uVar6 = FUN_00dd7ad0();
          FUN_009327a0(iVar5,*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x24),uVar6);
        }
      }
LAB_00eb429e:
      local_54 = (int *)local_54[2];
    } while (local_54 != local_3c);
  }
  __security_check_cookie(local_4 ^ (uint)&local_60);
  return;
}

// 00EB4300  FUN_00eb4300  size=59  [run]
undefined4 __thiscall FUN_00eb4300(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x7c);
  if (piVar2 != *(int **)(param_1 + 0x80)) {
    while (piVar1 = (int *)*piVar2, *piVar1 != param_2) {
      piVar2 = (int *)piVar2[2];
      if (piVar2 == *(int **)(param_1 + 0x80)) {
        return 0;
      }
    }
    if (piVar1[5] != 0) {
      return 1;
    }
    if ((*(byte *)(piVar1 + 2) & 1) != 0) {
      return 1;
    }
  }
  return 0;
}

// 00EB4340  FUN_00eb4340  size=52  [run]
bool __thiscall FUN_00eb4340(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x7c);
  while( true ) {
    if (piVar1 == *(int **)(param_1 + 0x80)) {
      return true;
    }
    if (*(int *)*piVar1 == param_2) break;
    piVar1 = (int *)piVar1[2];
  }
  return ((int *)*piVar1)[5] < 1;
}

