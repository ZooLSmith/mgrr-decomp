// src/unsorted/unit_00CB5EC0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CB5EC0..00CB5FF0, 7 functions

#include "types.h"

// 00CB5EC0  FUN_00cb5ec0  size=22  [run]
void __thiscall FUN_00cb5ec0(int param_1,undefined4 param_2,byte param_3)

{
  if (param_3 < 2) {
    *(undefined4 *)(param_1 + 0x28 + (uint)param_3 * 4) = param_2;
  }
  return;
}

// 00CB5F10  FUN_00cb5f10  size=12  [run]
void __fastcall FUN_00cb5f10(int param_1)

{
  *(undefined4 *)(param_1 + 0x30) = 1;
  *(undefined4 *)(param_1 + 0x34) = 1;
  return;
}

// 00CB5F20  FUN_00cb5f20  size=57  [run]
undefined4 __thiscall FUN_00cb5f20(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = (int *)(param_1 + 0x18);
  while (((piVar1[2] != param_2 || (*piVar1 < 1)) || (4 < *piVar1))) {
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 1;
    if (1 < iVar2) {
      return 0;
    }
  }
  return 1;
}

// 00CB5F60  FUN_00cb5f60  size=54  [run]
undefined4 __thiscall FUN_00cb5f60(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 0x18);
  iVar2 = 0;
  while (((piVar1[2] != param_2 || (*piVar1 != 0)) || (piVar1[6] == 0))) {
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 1;
    if (1 < iVar2) {
      return 0;
    }
  }
  return 1;
}

// 00CB5FA0  FUN_00cb5fa0  size=28  [run]
void __thiscall FUN_00cb5fa0(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x20) == param_2) {
    *(undefined4 *)(param_1 + 0x30) = 1;
  }
  if (*(int *)(param_1 + 0x24) == param_2) {
    *(undefined4 *)(param_1 + 0x34) = 1;
  }
  return;
}

// 00CB5FC0  FUN_00cb5fc0  size=47  [run]
undefined4 __fastcall FUN_00cb5fc0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if ((*(int *)(param_1 + 0x20) != -1) &&
     ((*(int *)(param_1 + 0x18) != 0 || (*(int *)(param_1 + 0x30) == 0)))) {
    uVar1 = 0;
  }
  if ((*(int *)(param_1 + 0x24) != -1) &&
     ((*(int *)(param_1 + 0x1c) != 0 || (*(int *)(param_1 + 0x34) == 0)))) {
    uVar1 = 0;
  }
  return uVar1;
}

// 00CB5FF0  FUN_00cb5ff0  size=416  [run]
void __thiscall FUN_00cb5ff0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int local_14;
  char local_10 [16];
  
  piVar3 = (int *)(param_1 + 0x20);
  local_14 = 2;
  do {
    if ((*piVar3 == param_2) && (*piVar3 != 0)) {
      piVar3[0x1a] = param_3;
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
            if (param_2 != 5) {
              piVar3[0x1e] = 2;
            }
            iVar2 = FUN_00e355e0(local_10);
            if (iVar2 != 0) {
              iVar2 = FUN_00e33e50(3);
              if (iVar2 != 0) {
                FUN_00e26e90();
                FUN_00e35de0(iVar1 + 0x98,3,0x3e4ccccd);
              }
              uVar4 = 4;
              goto LAB_00cb6166;
            }
          }
          else {
            if (param_2 != 5) {
              piVar3[0x1e] = 1;
            }
            iVar1 = FUN_00e355e0(local_10);
            if (iVar1 != 0) {
              uVar4 = 3;
LAB_00cb6166:
              FUN_00e3ff90(local_10,uVar4,0x3e4ccccd,0x3f800000,0x40200,0xbf800000,0x3f800000);
            }
          }
          piVar3[0x1a] = -1;
        }
      }
    }
    piVar3 = piVar3 + 1;
    local_14 = local_14 + -1;
    if (local_14 == 0) {
      return;
    }
  } while( true );
}

