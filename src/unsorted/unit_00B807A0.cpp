// src/unsorted/unit_00B807A0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00B807A0..00B80980, 6 functions

#include "mgrr.h"

// 00B807A0  FUN_00b807a0  size=68  [run]
void __thiscall FUN_00b807a0(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (param_2 != 0) {
    uVar1 = FUN_00a7c7f0();
    FUN_00a7c960(uVar1);
    *(undefined4 *)(param_1 + 0xb7c) = param_3;
    *(int *)(param_1 + 0xa74) = param_2;
    FUN_00a7c960(param_1 + 0xb78);
  }
  return;
}

// 00B807F0  FUN_00b807f0  size=24  [run]
void __fastcall FUN_00b807f0(int param_1)

{
  FUN_00a8d280();
  FUN_00a9dd90(*(undefined4 *)(param_1 + 0xa60));
  return;
}

// 00B80840  FUN_00b80840  size=142  [run]
undefined4 __fastcall FUN_00b80840(int *param_1)

{
  int iVar1;
  
  if (((((DAT_01bea060 & 0x2000000) == 0) && ((DAT_01bea060 & 0x40000000) == 0)) &&
      ((DAT_01bea060 & 0x8000000) == 0)) && ((DAT_01bea060 & 0x400) == 0)) {
    iVar1 = FUN_00c17700();
    if (iVar1 == 0) {
      iVar1 = (**(code **)(*param_1 + 0x368))();
      if (iVar1 == 0) {
        iVar1 = (**(code **)(*param_1 + 0x36c))();
        if (iVar1 == 0) {
          iVar1 = FUN_00416910(6);
          if ((iVar1 == 0) && (param_1[0x3d4] != 0)) {
            iVar1 = (**(code **)(*param_1 + 0x32c))();
            if (iVar1 == 0) {
              iVar1 = (**(code **)(*param_1 + 0x354))();
              if (iVar1 == 0) {
                return 1;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

// 00B808D0  FUN_00b808d0  size=73  [run]
void FUN_00b808d0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(int *)(param_1 + 0x58) == 0) &&
     ((iVar1 = FUN_00a81330(), iVar1 != 0 || (iVar1 = FUN_00a81330(), iVar1 != 0)))) {
    FUN_00a81330();
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
  }
  return;
}

// 00B80920  FUN_00b80920  size=92  [run]
void __thiscall
FUN_00b80920(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined4 uVar1;
  
  if (param_2 != 0) {
    uVar1 = FUN_00a7c7f0();
    FUN_00a7c960(uVar1);
    *(undefined4 *)(param_1 + 0x110c) = param_3;
    *(undefined4 *)(param_1 + 0x1118) = 0;
    *(undefined4 *)(param_1 + 0x1110) = param_4;
    *(undefined4 *)(param_1 + 0x1134) = param_6;
    *(undefined4 *)(param_1 + 0x111c) = 1;
    *(undefined4 *)(param_1 + 0x1114) = param_5;
  }
  return;
}

// 00B80980  FUN_00b80980  size=42  [run]
undefined4 __fastcall FUN_00b80980(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_00c13920();
  iVar2 = (**(code **)(*piVar1 + 0x68))();
  if ((iVar2 == 5) && (*(int *)(param_1 + 0x1400) != 0)) {
    return 1;
  }
  return 0;
}

