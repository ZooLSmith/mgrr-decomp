// src/unsorted/unit_0099A290.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0099A290..0099A460, 10 functions

#include "mgrr.h"

// 0099A290  FUN_0099a290  size=10  [run]
bool __fastcall FUN_0099a290(int param_1)

{
  return *(int *)(param_1 + 0x10) == 2;
}

// 0099A2A0  FUN_0099a2a0  size=50  [run]
undefined4 __fastcall FUN_0099a2a0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00999fa0();
  if (iVar1 == 2) {
    *(undefined4 *)(param_1 + 0x10) = 2;
  }
  else if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  if ((*(int *)(param_1 + 0x10) != 2) && (*(int *)(param_1 + 0x10) != 1)) {
    return 0;
  }
  return 1;
}

// 0099A2E0  FUN_0099a2e0  size=12  [run]
bool FUN_0099a2e0(void)

{
  return DAT_01b3922c != 0;
}

// 0099A310  FUN_0099a310  size=11  [run]
void FUN_0099a310(void)

{
  DAT_01b3922c = 0;
  return;
}

// 0099A320  FUN_0099a320  size=41  [run]
void FUN_0099a320(void)

{
  DAT_01bea060 = DAT_01bea060 & 0xffffefff;
  DAT_01bea070 = DAT_01bea070 & 0x77dfffff;
  DAT_01bea084 = DAT_01bea084 & 0xffff8fff;
  DAT_01b3922c = 0;
  return;
}

// 0099A350  FUN_0099a350  size=26  [run]
void FUN_0099a350(char *param_1,char *param_2)

{
  _vsprintf_s(param_1,0x18,param_2,&stack0x0000000c);
  return;
}

// 0099A390  FUN_0099a390  size=26  [run]
void FUN_0099a390(char *param_1,char *param_2)

{
  _vsprintf_s(param_1,0x20,param_2,&stack0x0000000c);
  return;
}

// 0099A3D0  FUN_0099a3d0  size=42  [run]
uint FUN_0099a3d0(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar2 = &DAT_01be9f20;
  (**(code **)(*param_1 + 4))(&DAT_01be9f20);
  iVar1 = FUN_00dd6d80(puVar2);
  return -(uint)(iVar1 != 0) & (uint)param_1;
}

// 0099A440  FUN_0099a440  size=29  [run]
void FUN_0099a440(char *param_1,char *param_2)

{
  _vsprintf_s(param_1,0x80,param_2,&stack0x0000000c);
  return;
}

// 0099A460  FUN_0099a460  size=26  [run]
void FUN_0099a460(char *param_1,char *param_2)

{
  _vsprintf_s(param_1,0x10,param_2,&stack0x0000000c);
  return;
}

