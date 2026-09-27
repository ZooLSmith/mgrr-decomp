// src/unsorted/unit_00CB6CC0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CB6CC0..00CB6F30, 7 functions

#include "mgrr.h"

// 00CB6CC0  FUN_00cb6cc0  size=50  [run]
void __thiscall FUN_00cb6cc0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x1c + param_2 * 4) = 1;
  *(undefined4 *)(param_1 + 0x18) = 1;
  piVar1 = (int *)(param_1 + 0x1c);
  iVar2 = 0x14;
  do {
    if (*piVar1 == 0) {
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

// 00CB6D00  FUN_00cb6d00  size=28  [run]
undefined4 __thiscall FUN_00cb6d00(int param_1,int param_2)

{
  if ((*(int *)(param_1 + 8) == param_2) && (*(int *)(param_1 + 4) == 3)) {
    return 1;
  }
  return 0;
}

// 00CB6D20  FUN_00cb6d20  size=16  [run]
bool __thiscall FUN_00cb6d20(int param_1,int param_2)

{
  return *(int *)(param_1 + 0x1c + param_2 * 4) != 0;
}

// 00CB6D30  FUN_00cb6d30  size=69  [run]
void __fastcall FUN_00cb6d30(int param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 1;
  *(undefined4 *)(param_1 + 0x1c) = 1;
  *(undefined4 *)(param_1 + 0x20) = 1;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x28) = 1;
  *(undefined4 *)(param_1 + 0x2c) = 1;
  *(undefined4 *)(param_1 + 0x30) = 1;
  *(undefined4 *)(param_1 + 0x34) = 1;
  *(undefined4 *)(param_1 + 0x38) = 1;
  *(undefined4 *)(param_1 + 0x3c) = 1;
  *(undefined4 *)(param_1 + 0x40) = 1;
  *(undefined4 *)(param_1 + 0x44) = 1;
  *(undefined4 *)(param_1 + 0x48) = 1;
  *(undefined4 *)(param_1 + 0x4c) = 1;
  *(undefined4 *)(param_1 + 0x50) = 1;
  *(undefined4 *)(param_1 + 0x54) = 1;
  *(undefined4 *)(param_1 + 0x58) = 1;
  *(undefined4 *)(param_1 + 0x5c) = 1;
  *(undefined4 *)(param_1 + 0x60) = 1;
  *(undefined4 *)(param_1 + 100) = 1;
  *(undefined4 *)(param_1 + 0x68) = 1;
  return;
}

// 00CB6D80  FUN_00cb6d80  size=20  [run]
undefined4 __fastcall FUN_00cb6d80(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if ((*(int *)(param_1 + 4) != 0) || (*(int *)(param_1 + 0x18) == 0)) {
    uVar1 = 0;
  }
  return uVar1;
}

// 00CB6DA0  FUN_00cb6da0  size=386  [run]
void __thiscall FUN_00cb6da0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char local_10 [16];
  
  if ((*(int *)(param_1 + 8) == param_2) && (*(int *)(param_1 + 8) != 0)) {
    *(int *)(param_1 + 0x74) = param_3;
    iVar3 = 2;
    do {
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        iVar1 = FUN_00a7c890();
        if (iVar1 != 0) {
          local_10[1] = '\0';
          local_10[2] = '\0';
          local_10[3] = '\0';
          local_10[4] = '\0';
          local_10[5] = '\0';
          local_10[6] = '\0';
          local_10[7] = '\0';
          local_10[8] = '\0';
          local_10[9] = '\0';
          local_10[10] = '\0';
          local_10[0xb] = '\0';
          local_10[0xc] = '\0';
          local_10[0xd] = '\0';
          local_10[0xe] = '\0';
          local_10[0xf] = 0;
          local_10[0] = '\0';
          _sprintf_s(local_10,0x10,"%04x",param_3);
          if ((((param_3 == 0x100) || (param_3 == 0x200)) || (param_3 == 0x300)) ||
             ((param_3 == 0x400 || (param_3 == 0x500)))) {
            iVar2 = FUN_00e355e0(local_10);
            if (iVar2 != 0) {
              iVar2 = FUN_00e33e50(3);
              if (iVar2 != 0) {
                FUN_00e26e90();
                FUN_00e35de0(iVar1 + 0x98,3,0x3e4ccccd);
              }
              uVar4 = 4;
              goto LAB_00cb6ef7;
            }
          }
          else {
            iVar1 = FUN_00e355e0(local_10);
            if (iVar1 != 0) {
              uVar4 = 3;
LAB_00cb6ef7:
              FUN_00e3ff90(local_10,uVar4,0x3e4ccccd,0x3f800000,0x40200,0xbf800000,0x3f800000);
            }
          }
        }
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
  }
  return;
}

// 00CB6F30  FUN_00cb6f30  size=154  [run]
undefined4 FUN_00cb6f30(undefined4 param_1)

{
  switch(param_1) {
  default:
    return 0;
  case 2:
    return 1;
  case 3:
    return 2;
  case 4:
    return 3;
  case 5:
    return 4;
  case 6:
    return 6;
  case 7:
    return 0xc;
  case 8:
    return 7;
  case 9:
    return 8;
  case 10:
    return 9;
  case 0xb:
    return 0xb;
  case 0xc:
    return 5;
  case 0xd:
    return 10;
  case 0x10:
    return 0xe;
  case 0x11:
    return 0xf;
  case 0x12:
    return 0x10;
  case 0x13:
    return 0x11;
  }
}

