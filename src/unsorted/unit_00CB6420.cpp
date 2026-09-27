// src/unsorted/unit_00CB6420.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00CB6420..00CB6550, 7 functions

#include "mgrr.h"

// 00CB6420  FUN_00cb6420  size=22  [run]
void __thiscall FUN_00cb6420(int param_1,undefined4 param_2,byte param_3)

{
  if (param_3 < 2) {
    *(undefined4 *)(param_1 + 0x2c + (uint)param_3 * 4) = param_2;
  }
  return;
}

// 00CB6470  FUN_00cb6470  size=12  [run]
void __fastcall FUN_00cb6470(int param_1)

{
  *(undefined4 *)(param_1 + 0x34) = 1;
  *(undefined4 *)(param_1 + 0x38) = 1;
  return;
}

// 00CB6480  FUN_00cb6480  size=57  [run]
undefined4 __thiscall FUN_00cb6480(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = (int *)(param_1 + 0x1c);
  while (((piVar1[2] != param_2 || (*piVar1 < 1)) || (4 < *piVar1))) {
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 1;
    if (1 < iVar2) {
      return 0;
    }
  }
  return 1;
}

// 00CB64C0  FUN_00cb64c0  size=54  [run]
undefined4 __thiscall FUN_00cb64c0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 0x1c);
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

// 00CB6500  FUN_00cb6500  size=28  [run]
void __thiscall FUN_00cb6500(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x24) == param_2) {
    *(undefined4 *)(param_1 + 0x34) = 1;
  }
  if (*(int *)(param_1 + 0x28) == param_2) {
    *(undefined4 *)(param_1 + 0x38) = 1;
  }
  return;
}

// 00CB6520  FUN_00cb6520  size=47  [run]
undefined4 __fastcall FUN_00cb6520(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if ((*(int *)(param_1 + 0x24) != -1) &&
     ((*(int *)(param_1 + 0x1c) != 0 || (*(int *)(param_1 + 0x34) == 0)))) {
    uVar1 = 0;
  }
  if ((*(int *)(param_1 + 0x28) != -1) &&
     ((*(int *)(param_1 + 0x20) != 0 || (*(int *)(param_1 + 0x38) == 0)))) {
    uVar1 = 0;
  }
  return uVar1;
}

// 00CB6550  FUN_00cb6550  size=428  [run]
void __thiscall FUN_00cb6550(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int local_14;
  char local_10 [16];
  
  piVar3 = (int *)(param_1 + 0x24);
  local_14 = 2;
  do {
    if ((*piVar3 == param_2) && (*piVar3 != 0)) {
      piVar3[0x55] = param_3;
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
              piVar3[0x59] = 2;
            }
            iVar2 = FUN_00e355e0(local_10);
            if (iVar2 != 0) {
              iVar2 = FUN_00e33e50(3);
              if (iVar2 != 0) {
                FUN_00e26e90();
                FUN_00e35de0(iVar1 + 0x98,3,0x3e4ccccd);
              }
              uVar4 = 4;
              goto LAB_00cb66cf;
            }
          }
          else {
            if (param_2 != 5) {
              piVar3[0x59] = 1;
            }
            iVar1 = FUN_00e355e0(local_10);
            if (iVar1 != 0) {
              uVar4 = 3;
LAB_00cb66cf:
              FUN_00e3ff90(local_10,uVar4,0x3e4ccccd,0x3f800000,0x40200,0xbf800000,0x3f800000);
            }
          }
          piVar3[0x55] = -1;
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

