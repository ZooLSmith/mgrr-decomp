// src/unsorted/unit_009CC2E0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009CC2E0..009CC430, 3 functions

#include "types.h"

// 009CC2E0  FUN_009cc2e0  size=307  [run]
void FUN_009cc2e0(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 local_10 [4];
  int local_c;
  
  piVar1 = param_1;
  iVar3 = *param_1;
  iVar4 = param_1[5];
  local_c = iVar4;
  if (iVar3 == 0) {
    uVar2 = FUN_00a7c930();
  }
  else {
    uVar2 = FUN_00a7c7f0();
    uVar2 = FUN_00a7c940(uVar2);
  }
  FUN_00a7c940(uVar2);
  if (iVar4 == 0) {
    uVar2 = FUN_00a7c930();
  }
  else {
    uVar2 = FUN_00a7c7f0();
    uVar2 = FUN_00a7c940(uVar2);
  }
  FUN_00a7c940(uVar2);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_00a7c800();
  }
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_00a7c800();
  }
  if (iVar3 == 0) {
    iVar3 = 0x90000;
  }
  else {
    iVar3 = *(int *)(iVar3 + 0x4b4);
  }
  if (iVar4 == 0) {
    iVar4 = 0x90000;
  }
  else {
    iVar4 = *(int *)(iVar4 + 0x4b4);
  }
  iVar5 = piVar1[6];
  iVar6 = piVar1[2];
  iVar7 = iVar3;
  iVar8 = iVar6;
  iVar9 = iVar4;
  FUN_00a7c940(&param_1);
  iVar5 = FUN_009cba50(iVar6,iVar7,iVar8,iVar9,iVar5);
  if (iVar5 != 0) {
    uVar2 = FUN_00a7c800();
    FUN_00e5e170(iVar5,uVar2,0xfffffffe,0);
  }
  if (iVar4 != iVar3) {
    iVar5 = piVar1[1];
    iVar6 = piVar1[7];
    iVar7 = iVar6;
    FUN_00a7c940(local_10);
    iVar3 = FUN_009cba50(iVar6,iVar4,iVar7,iVar3,iVar5);
    if (iVar3 != 0) {
      uVar2 = FUN_00a7c800();
      FUN_00e5e170(iVar3,uVar2,0xfffffffe,0);
    }
  }
  return;
}

// 009CC420  thunk_FUN_009cc2e0  size=5  [run]
void thunk_FUN_009cc2e0(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_10 [4];
  int iStack_c;
  
  piVar1 = param_1;
  iVar3 = *param_1;
  iVar4 = param_1[5];
  iStack_c = iVar4;
  if (iVar3 == 0) {
    uVar2 = FUN_00a7c930();
  }
  else {
    uVar2 = FUN_00a7c7f0();
    uVar2 = FUN_00a7c940(uVar2);
  }
  FUN_00a7c940(uVar2);
  if (iVar4 == 0) {
    uVar2 = FUN_00a7c930();
  }
  else {
    uVar2 = FUN_00a7c7f0();
    uVar2 = FUN_00a7c940(uVar2);
  }
  FUN_00a7c940(uVar2);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_00a7c800();
  }
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_00a7c800();
  }
  if (iVar3 == 0) {
    iVar3 = 0x90000;
  }
  else {
    iVar3 = *(int *)(iVar3 + 0x4b4);
  }
  if (iVar4 == 0) {
    iVar4 = 0x90000;
  }
  else {
    iVar4 = *(int *)(iVar4 + 0x4b4);
  }
  iVar5 = piVar1[6];
  iVar6 = piVar1[2];
  iVar7 = iVar3;
  iVar8 = iVar6;
  iVar9 = iVar4;
  FUN_00a7c940(&param_1);
  iVar5 = FUN_009cba50(iVar6,iVar7,iVar8,iVar9,iVar5);
  if (iVar5 != 0) {
    uVar2 = FUN_00a7c800();
    FUN_00e5e170(iVar5,uVar2,0xfffffffe,0);
  }
  if (iVar4 != iVar3) {
    iVar5 = piVar1[1];
    iVar6 = piVar1[7];
    iVar7 = iVar6;
    FUN_00a7c940(auStack_10);
    iVar3 = FUN_009cba50(iVar6,iVar4,iVar7,iVar3,iVar5);
    if (iVar3 != 0) {
      uVar2 = FUN_00a7c800();
      FUN_00e5e170(iVar3,uVar2,0xfffffffe,0);
    }
  }
  return;
}

// 009CC430  FUN_009cc430  size=20  [run]
void FUN_009cc430(void)

{
  DAT_01b78874 = 0;
  FUN_00dd7240();
  return;
}

