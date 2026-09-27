// src/unsorted/unit_00E09060.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00E09060..00E09D50, 14 functions

#include "types.h"

// 00E09060  FUN_00e09060  size=114  [run]
/* WARNING: Removing unreachable block (ram,0x00e090ab) */
/* WARNING: Removing unreachable block (ram,0x00e090b0) */

undefined4 * __thiscall FUN_00e09060(undefined4 *param_1,char *param_2,undefined4 param_3)

{
  char *pcVar1;
  char *pcVar2;
  
  *param_1 = param_3;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = param_3;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  pcVar1 = param_2;
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  if (param_1[1] != param_1[2]) {
    param_1[2] = param_1[1];
  }
  FUN_00e173a0(param_1[1],param_2,pcVar2);
  return param_1;
}

// 00E09260  FUN_00e09260  size=133  [run]
/* WARNING: Removing unreachable block (ram,0x00e092d2) */
/* WARNING: Removing unreachable block (ram,0x00e09298) */
/* WARNING: Removing unreachable block (ram,0x00e092a0) */
/* WARNING: Removing unreachable block (ram,0x00e092aa) */

void __thiscall FUN_00e09260(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  int local_4;
  
  local_4 = param_1;
  cVar3 = FUN_00e05880(0x2f,&local_4);
  if (cVar3 != '\0') {
    iVar1 = *(int *)(param_1 + 4);
    uVar2 = *(undefined4 *)(param_1 + 8);
    if (*(int *)(param_2 + 4) != *(int *)(param_2 + 8)) {
      *(int *)(param_2 + 8) = *(int *)(param_2 + 4);
    }
    FUN_00e19960(*(undefined4 *)(param_2 + 4),iVar1 + 1 + local_4,uVar2);
    return;
  }
  if (*(int *)(param_2 + 4) != *(int *)(param_2 + 8)) {
    *(int *)(param_2 + 8) = *(int *)(param_2 + 4);
  }
  return;
}

// 00E092F0  FUN_00e092f0  size=136  [run]
/* WARNING: Removing unreachable block (ram,0x00e09314) */
/* WARNING: Removing unreachable block (ram,0x00e09352) */

int __thiscall FUN_00e092f0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_2 + 4);
  uVar2 = *(undefined4 *)(param_2 + 8);
  if (*(int *)(param_1 + 4) != *(int *)(param_1 + 8)) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 4);
  }
  FUN_00e19960(*(undefined4 *)(param_1 + 4),uVar1,uVar2);
  uVar1 = *(undefined4 *)(param_2 + 0x24);
  uVar2 = *(undefined4 *)(param_2 + 0x28);
  if (*(int *)(param_1 + 0x24) != *(int *)(param_1 + 0x28)) {
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x24);
  }
  FUN_00e19960(*(undefined4 *)(param_1 + 0x24),uVar1,uVar2);
  return param_1;
}

// 00E093F0  FUN_00e093f0  size=99  [run]
/* WARNING: Removing unreachable block (ram,0x00e0942c) */
/* WARNING: Removing unreachable block (ram,0x00e09430) */
/* WARNING: Removing unreachable block (ram,0x00e0943a) */

undefined4 * __thiscall FUN_00e093f0(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = param_3;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = param_3;
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = *(undefined4 *)(param_2 + 4);
  if (param_1[1] != param_1[2]) {
    param_1[2] = param_1[1];
  }
  FUN_00e19960(param_1[1],uVar2,uVar1);
  return param_1;
}

// 00E09460  FUN_00e09460  size=147  [run]
/* WARNING: Removing unreachable block (ram,0x00e09478) */
/* WARNING: Removing unreachable block (ram,0x00e0949f) */
/* WARNING: Removing unreachable block (ram,0x00e094a0) */
/* WARNING: Removing unreachable block (ram,0x00e094aa) */

int __fastcall FUN_00e09460(int param_1)

{
  int iVar1;
  undefined1 local_5;
  undefined4 local_4;
  
  if (*(int *)(param_1 + 0x14) != *(int *)(param_1 + 0x18)) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x14);
  }
  local_4 = *(undefined4 *)(param_1 + 4);
  if (*(int *)(param_1 + 0x14) != *(int *)(param_1 + 0x18)) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x14);
  }
  FUN_00e19960(*(undefined4 *)(param_1 + 0x14),local_4,*(undefined4 *)(param_1 + 8));
  iVar1 = *(int *)(param_1 + 0x14);
  if (((iVar1 == 0) || (*(int *)(param_1 + 0x18) == iVar1)) ||
     (*(char *)(*(int *)(param_1 + 0x18) + -1) != '\0')) {
    local_5 = 0;
    FUN_00e19570(&local_5);
    iVar1 = *(int *)(param_1 + 0x14);
  }
  return iVar1;
}

// 00E09640  FUN_00e09640  size=67  [run]
bool FUN_00e09640(float *param_1)

{
  int iVar1;
  float10 fVar2;
  int local_4;
  
  iVar1 = FUN_00e09460();
  fVar2 = (float10)FUN_00fe0840(iVar1,&local_4);
  if (param_1 != (float *)0x0) {
    *param_1 = (float)fVar2;
  }
  return iVar1 != local_4;
}

// 00E09690  FUN_00e09690  size=108  [run]
undefined4 __thiscall FUN_00e09690(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int local_1c;
  int local_c;
  
  iVar1 = FUN_00e093f0(param_1,&DAT_01b7bcf0);
  FUN_00e19960(*(undefined4 *)(iVar1 + 8),*(undefined4 *)(param_3 + 4),*(undefined4 *)(param_3 + 8))
  ;
  FUN_00e093f0(iVar1,&DAT_01b7bcf0);
  if (local_c != 0) {
    FUN_00dd48d0(local_c,0);
  }
  if (local_1c != 0) {
    FUN_00dd48d0(local_1c,0);
  }
  return param_2;
}

// 00E09700  FUN_00e09700  size=121  [run]
undefined4 __thiscall FUN_00e09700(undefined4 param_1,undefined4 param_2,char *param_3)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  int local_1c;
  int local_c;
  
  iVar2 = FUN_00e093f0(param_1,&DAT_01b7bcf0);
  pcVar1 = param_3;
  do {
    pcVar3 = pcVar1;
    pcVar1 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  FUN_00e173a0(*(undefined4 *)(iVar2 + 8),param_3,pcVar3);
  FUN_00e093f0(iVar2,&DAT_01b7bcf0);
  if (local_c != 0) {
    FUN_00dd48d0(local_c,0);
  }
  if (local_1c != 0) {
    FUN_00dd48d0(local_1c,0);
  }
  return param_2;
}

// 00E09820  FUN_00e09820  size=398  [run]
undefined4 __thiscall FUN_00e09820(undefined4 *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint local_48;
  int local_44;
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
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  cVar1 = FUN_00e05a40(&DAT_016cc438,&local_48);
  uVar4 = local_48;
  if (cVar1 == '\0') {
    if (param_1[1] == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = param_1[2] - param_1[1];
    }
  }
  if (*(int *)(param_2 + 0x1c) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(int *)(param_2 + 0x20) - *(int *)(param_2 + 0x1c);
  }
  if ((uVar2 == uVar4) && (cVar1 = FUN_00e05630(param_2 + 0x18,uVar4), cVar1 != '\0')) {
    iVar3 = param_1[1];
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = param_1[2] - iVar3;
    }
    if ((uVar4 == uVar2) || (*(char *)(iVar3 + uVar4) != '[')) {
      return 1;
    }
    FUN_00e05a40(&DAT_016cc434,&local_48);
    FUN_00e05a40(&DAT_016cc430,&local_44);
    local_40 = *param_1;
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    local_30 = local_40;
    FUN_00e19920(param_1[1] + 2 + uVar4,param_1[1] + local_48);
    FUN_00e093f0(&local_40,&DAT_01b7bcf0);
    iVar3 = FUN_00e19ac0();
    if (iVar3 != 0) {
      local_20 = *param_1;
      local_1c = 0;
      local_18 = 0;
      local_14 = 0;
      local_c = 0;
      local_8 = 0;
      local_4 = 0;
      local_10 = local_20;
      FUN_00e19920(param_1[1] + 2 + local_48,param_1[1] + -1 + local_44);
      cVar1 = FUN_00e05aa0(&local_20);
      if (cVar1 != '\0') {
        FUN_00e18ea0();
        FUN_00e18ea0();
        return 1;
      }
      FUN_00e18ea0();
    }
    FUN_00e18ea0();
  }
  return 0;
}

// 00E09A00  FUN_00e09a00  size=189  [run]
void __fastcall FUN_00e09a00(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 4);
  while (iVar3 != 0) {
    iVar1 = *(int *)(iVar3 + 0xc);
    iVar2 = *(int *)(iVar3 + 0x10);
    if (*(int *)(param_1 + 4) == iVar3) {
      *(int *)(param_1 + 4) = iVar2;
    }
    if (*(int *)(param_1 + 8) == iVar3) {
      *(int *)(param_1 + 8) = iVar1;
    }
    if (iVar1 != 0) {
      *(int *)(iVar1 + 0x10) = iVar2;
    }
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0xc) = iVar1;
    }
    iVar1 = *(int *)(iVar3 + 0x10);
    FUN_00e09a00();
    FUN_00dd48d0(iVar3,0);
    iVar3 = iVar1;
  }
  FUN_00e1a8a0(*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x60));
  if (*(int *)(param_1 + 0x5c) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 0x5c),0);
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 0x4c),0);
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 0x3c),0);
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 0x2c),0);
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_00dd48d0(*(int *)(param_1 + 0x1c),0);
  }
  return;
}

// 00E09AC0  FUN_00e09ac0  size=203  [run]
void __thiscall FUN_00e09ac0(int param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  int local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  for (iVar1 = *(int *)(param_1 + 4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x10)) {
    local_24 = iVar1;
    cVar2 = FUN_00e09820(iVar1);
    if (cVar2 != '\0') {
      cVar2 = FUN_00e05880(0x2f,0);
      if (cVar2 == '\0') {
        FUN_00e195f0(&local_24);
      }
      else {
        local_20 = *(undefined4 *)(param_1 + 0x68);
        local_1c = 0;
        local_18 = 0;
        local_14 = 0;
        local_c = 0;
        local_8 = 0;
        local_4 = 0;
        local_10 = local_20;
        FUN_00e09260(&local_20);
        FUN_00e09ac0(param_2,&local_20);
        if (local_c != 0) {
          FUN_00dd48d0(local_c,0);
        }
        if (local_1c != 0) {
          FUN_00dd48d0(local_1c,0);
        }
      }
    }
  }
  return;
}

// 00E09B90  FUN_00e09b90  size=176  [run]
int __fastcall FUN_00e09b90(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar2 = *(int *)(param_1 + 4);
  while( true ) {
    if (iVar2 == 0) {
      return 0;
    }
    cVar1 = FUN_00e09820(iVar2);
    if (cVar1 != '\0') break;
    iVar2 = *(int *)(iVar2 + 0x10);
  }
  cVar1 = FUN_00e05880(0x2f,0);
  if (cVar1 != '\0') {
    local_20 = *(undefined4 *)(param_1 + 0x68);
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
    local_c = 0;
    local_8 = 0;
    local_4 = 0;
    local_10 = local_20;
    FUN_00e09260(&local_20);
    iVar2 = FUN_00e09b90(&local_20);
    if (local_c != 0) {
      FUN_00dd48d0(local_c,0);
    }
    if (local_1c != 0) {
      FUN_00dd48d0(local_1c,0);
    }
  }
  return iVar2;
}

// 00E09C60  FUN_00e09c60  size=228  [run]
undefined4 FUN_00e09c60(undefined4 param_1,char *param_2,undefined4 param_3)

{
  char *pcVar1;
  char *pcVar2;
  undefined4 local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_40 = param_3;
  local_30 = param_3;
  local_20 = param_3;
  local_10 = param_3;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  pcVar1 = param_2;
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  FUN_00e173a0(0,param_2,pcVar2);
  FUN_00e093f0(&local_40,&DAT_01b7bcf0);
  FUN_00e093f0(&local_20,&DAT_01b7bcf0);
  if (local_c != 0) {
    FUN_00dd48d0(local_c,0);
  }
  if (local_1c != 0) {
    FUN_00dd48d0(local_1c,0);
  }
  if (local_2c != 0) {
    FUN_00dd48d0(local_2c,0);
  }
  if (local_3c != 0) {
    FUN_00dd48d0(local_3c,0);
  }
  return param_1;
}

// 00E09D50  FUN_00e09d50  size=185  [run]
uint __thiscall FUN_00e09d50(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  
  pcVar3 = *(char **)(param_1 + 4);
  if (*pcVar3 != '<') {
    pcVar3 = (char *)FUN_00e1c420("Invalid Xml statement.");
  }
  *(char **)(param_1 + 4) = pcVar3 + 1;
  cVar1 = pcVar3[1];
  uVar4 = 1;
  if (cVar1 != '!') {
    if (cVar1 != '?') {
      *(undefined4 *)(param_2 + 0x14) = 2;
      return uVar4;
    }
    *(undefined4 *)(param_2 + 0x14) = 5;
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
    return uVar4;
  }
  if ((pcVar3[2] == '-') && (pcVar3[3] == '-')) {
    *(undefined4 *)(param_2 + 0x14) = 0;
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 3;
    uVar2 = *(undefined4 *)(param_1 + 4);
    iVar5 = FUN_00fdbbd0(uVar2,&DAT_016cc45c);
    if (iVar5 == 0) {
      FUN_00e1c420("Invalid Tag closer. (comment)");
    }
    uVar4 = FUN_00e19920(uVar2,iVar5);
    *(int *)(param_1 + 4) = iVar5 + 3;
    return uVar4 & 0xffffff00;
  }
  *(undefined4 *)(param_2 + 0x14) = 4;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  return uVar4;
}

