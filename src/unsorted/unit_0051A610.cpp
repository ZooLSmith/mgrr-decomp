// src/unsorted/unit_0051A610.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0051A610..0051A6B0, 3 functions

#include "mgrr.h"

// 0051A610  FUN_0051a610  size=80  [run]
void __fastcall FUN_0051a610(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (*(int *)(param_1 + 0x618) == 0x50003) {
    uVar7 = 0x3f800000;
    uVar6 = 0xbf800000;
    uVar5 = 0x8000030;
    uVar4 = 0x3f800000;
    uVar3 = 0;
    uVar2 = 4;
    sVar1 = FUN_00dde2d0(0,1);
    FUN_00aa4080(sVar1 + 0x6c,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7);
  }
  return;
}

// 0051A660  FUN_0051a660  size=80  [run]
void __fastcall FUN_0051a660(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (*(int *)(param_1 + 0x618) == 0x50004) {
    uVar7 = 0x3f800000;
    uVar6 = 0xbf800000;
    uVar5 = 0x8000030;
    uVar4 = 0x3f800000;
    uVar3 = 0;
    uVar2 = 4;
    sVar1 = FUN_00dde2d0(0,1);
    FUN_00aa4080(sVar1 + 0x7a,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7);
  }
  return;
}

// 0051A6B0  FUN_0051a6b0  size=94  [run]
int FUN_0051a6b0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 != 0) {
    iVar1 = FUN_00a82090("Em01a0Upper",param_2,0);
    if (iVar1 != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 == 0) {
        return 0;
      }
      uVar2 = FUN_00a7c7f0();
      FUN_00a7c940(uVar2);
      FUN_00a7c960(&param_1);
      return iVar1;
    }
  }
  return 0;
}

