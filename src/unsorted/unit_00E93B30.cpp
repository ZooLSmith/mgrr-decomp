// src/unsorted/unit_00E93B30.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00E93B30..00E93DF0, 6 functions

#include "mgrr.h"

// 00E93B30  FUN_00e93b30  size=33  [run]
char * FUN_00e93b30(char *param_1,char *param_2)

{
  _vsprintf_s(param_1,0x100,param_2,&stack0x0000000c);
  return param_1;
}

// 00E93C70  FUN_00e93c70  size=37  [run]
void __fastcall FUN_00e93c70(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 4),0);
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

// 00E93CA0  FUN_00e93ca0  size=37  [run]
void __fastcall FUN_00e93ca0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 4),0);
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

// 00E93CD0  FUN_00e93cd0  size=69  [run]
undefined4 __thiscall FUN_00e93cd0(int *param_1,int param_2,int param_3)

{
  char cVar1;
  
  if (param_1[1] != 0) {
    param_1[2] = 0;
  }
  while( true ) {
    if (param_2 == param_3) {
      return 1;
    }
    cVar1 = (**(code **)(*param_1 + 8))(param_2);
    if (cVar1 == '\0') break;
    param_2 = param_2 + 0xc;
  }
  return 0;
}

// 00E93DC0  FUN_00e93dc0  size=37  [run]
void __fastcall FUN_00e93dc0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 4),0);
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

// 00E93DF0  FUN_00e93df0  size=37  [run]
void __fastcall FUN_00e93df0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 4),0);
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return;
}

