// src/unsorted/unit_01298469.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 01298469..0129850C, 3 functions

#include "types.h"

// 01298469  FUN_01298469  size=95  [run]
void FUN_01298469(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined1 local_18 [16];
  uint local_8;
  
  local_8 = DAT_018e8764 ^ (uint)&stack0xfffffffc;
  iVar1 = FUN_012948a1(param_2,param_3);
  if (iVar1 != 0) {
    FUN_012981ba(param_1,param_2,local_18,param_4,param_5,param_6,1);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

// 012984C8  FUN_012984c8  size=68  [run]
undefined4 FUN_012984c8(undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  if (param_3 != 0) {
    FUN_012945f5(param_3);
  }
  iVar1 = FUN_0129434f();
  if (iVar1 == 0) {
    uVar2 = FUN_01297dad(param_1,param_2,0,param_3,0,param_4);
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

// 0129850C  FUN_0129850c  size=312  [run]
void FUN_0129850c(int param_1,int param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 local_440 [20];
  undefined4 local_42c;
  int local_424;
  int local_420;
  int local_41c;
  undefined1 local_418;
  undefined1 local_417 [87];
  undefined1 local_3c0 [952];
  uint local_8;
  
  local_8 = DAT_018e8764 ^ (uint)local_3c0;
  local_420 = 0;
  local_41c = param_1;
  local_418 = 0;
  _memset(local_417,0,0x40f);
  if (param_3 != (undefined8 *)0x0) {
    *(undefined4 *)param_3 = 0xffffffff;
    *(undefined4 *)((int)param_3 + 4) = 0xffffffff;
    if (param_2 != 0) {
      iVar1 = FUN_0129434f();
      if (iVar1 != 0) {
        local_41c = 0;
      }
      if (local_41c == 0) {
        FUN_012945f5(local_440);
      }
      else {
        FUN_012984c8(param_1,param_2,local_440,&local_420);
        if ((local_420 != 0) && (local_424 != 0)) {
          *(undefined4 *)param_3 = local_42c;
          *(undefined4 *)((int)param_3 + 4) = 0;
          goto LAB_0129862c;
        }
      }
      if ((((local_420 == 1) || (local_41c == 0)) || (*(int *)(local_41c + 0x18) != 2)) ||
         (*(int *)(local_41c + 0x28) == 0)) {
        FUN_01295c09(param_2,&local_418,0x410);
      }
      else {
        FUN_0129e87c(&local_418,0x410,*(int *)(local_41c + 0x28),param_2);
      }
      uVar2 = FUN_01294e74();
      *param_3 = uVar2;
      goto LAB_0129862c;
    }
  }
  FUN_01293f69(0,"E2008073181",0xfffffffe);
LAB_0129862c:
  __security_check_cookie(local_8 ^ (uint)local_3c0);
  return;
}

