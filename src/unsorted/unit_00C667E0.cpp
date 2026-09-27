// src/unsorted/unit_00C667E0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C667E0..00C66900, 2 functions

#include "types.h"

// 00C667E0  FUN_00c667e0  size=283  [run]
byte __thiscall FUN_00c667e0(char *param_1,int *param_2)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  undefined4 uVar6;
  char *pcVar7;
  byte unaff_BP;
  int local_4;
  
  local_4 = 0;
  bVar2 = FUN_008da080(param_2,&DAT_016a747c,&local_4);
  if (local_4 == 0) {
    pcVar7 = "";
  }
  else {
    pcVar7 = *(char **)(local_4 + 0x14);
  }
  _strcpy_s(param_1,0x20,pcVar7);
  uVar6 = FUN_00df2ab0(param_1,1);
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  bVar3 = FUN_008da080(param_2,&DAT_016a7478,&local_4);
  iVar1 = local_4;
  if (local_4 == 0) {
    pcVar7 = "";
  }
  else {
    pcVar7 = *(char **)(local_4 + 0x14);
  }
  _strcpy_s(param_1,0x20,pcVar7);
  cVar4 = (**(code **)(*param_2 + 0x10))(&DAT_016a7474,7);
  if (cVar4 == '\0') {
    bVar5 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x2c))(param_1 + 0x24);
    (**(code **)(*param_2 + 0x14))(&DAT_016a7474,7);
    bVar5 = (byte)local_4;
  }
  cVar4 = (**(code **)(*param_2 + 0x10))(&DAT_016a7470,7);
  if (cVar4 == '\0') {
    unaff_BP = 0;
  }
  else {
    (**(code **)(*param_2 + 0x2c))(param_1 + 0x28);
    (**(code **)(*param_2 + 0x14))(&DAT_016a7470,7);
  }
  if (iVar1 != 0) {
    FUN_008d98a0(iVar1);
  }
  return bVar2 & 1 & bVar3 & bVar5 & unaff_BP;
}

// 00C66900  FUN_00c66900  size=357  [run]
byte __thiscall FUN_00c66900(char *param_1,int *param_2)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  undefined4 uVar6;
  char *pcVar7;
  byte unaff_BP;
  byte unaff_DI;
  int local_4;
  
  local_4 = 0;
  bVar2 = FUN_008da080(param_2,&DAT_016a747c,&local_4);
  if (local_4 == 0) {
    pcVar7 = "";
  }
  else {
    pcVar7 = *(char **)(local_4 + 0x14);
  }
  _strcpy_s(param_1,0x20,pcVar7);
  uVar6 = FUN_00df2ab0(param_1,1);
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  bVar3 = FUN_008da080(param_2,&DAT_016a7478,&local_4);
  iVar1 = local_4;
  if (local_4 == 0) {
    pcVar7 = "";
  }
  else {
    pcVar7 = *(char **)(local_4 + 0x14);
  }
  _strcpy_s(param_1,0x20,pcVar7);
  cVar4 = (**(code **)(*param_2 + 0x10))(&DAT_016a7474,7);
  if (cVar4 == '\0') {
    bVar5 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x2c))(param_1 + 0x24);
    (**(code **)(*param_2 + 0x14))(&DAT_016a7474,7);
    bVar5 = (byte)local_4;
  }
  cVar4 = (**(code **)(*param_2 + 0x10))(&DAT_016a7470,7);
  if (cVar4 == '\0') {
    unaff_BP = 0;
  }
  else {
    (**(code **)(*param_2 + 0x2c))(param_1 + 0x28);
    (**(code **)(*param_2 + 0x14))(&DAT_016a7470,7);
  }
  cVar4 = (**(code **)(*param_2 + 0x10))(&DAT_016a7480,7);
  if (cVar4 == '\0') {
    unaff_DI = 0;
  }
  else {
    (**(code **)(*param_2 + 0x2c))(param_1 + 0x2c);
    (**(code **)(*param_2 + 0x14))(&DAT_016a7480,7);
  }
  if (iVar1 != 0) {
    FUN_008d98a0(iVar1);
  }
  return bVar2 & 1 & bVar3 & bVar5 & unaff_BP & unaff_DI;
}

