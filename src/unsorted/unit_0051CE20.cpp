// src/unsorted/unit_0051CE20.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0051CE20..0051CEE0, 3 functions

#include "mgrr.h"

// 0051CE20  FUN_0051ce20  size=96  [run]
void FUN_0051ce20(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      uVar2 = FUN_00fdbc60();
      iVar1 = FUN_00a12210(uVar2);
      if (iVar1 != 0) {
        *param_1 = *(undefined4 *)(iVar1 + 0x40);
        param_1[1] = *(undefined4 *)(iVar1 + 0x44);
        param_1[2] = *(undefined4 *)(iVar1 + 0x48);
        param_1[3] = *(undefined4 *)(iVar1 + 0x4c);
      }
    }
  }
  return;
}

// 0051CE80  FUN_0051ce80  size=96  [run]
void FUN_0051ce80(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      uVar2 = FUN_00fdbc60();
      iVar1 = FUN_00a12210(uVar2);
      if (iVar1 != 0) {
        *param_1 = *(undefined4 *)(iVar1 + 0x40);
        param_1[1] = *(undefined4 *)(iVar1 + 0x44);
        param_1[2] = *(undefined4 *)(iVar1 + 0x48);
        param_1[3] = *(undefined4 *)(iVar1 + 0x4c);
      }
    }
  }
  return;
}

// 0051CEE0  FUN_0051cee0  size=270  [run]
int FUN_0051cee0(int param_1,int param_2)

{
  ushort *puVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar3 = FUN_00a82090("Em01a0Parts",param_2,0);
  if (iVar3 != 0) {
    iVar3 = FUN_00a7c8a0();
    if (iVar3 == 0) {
      return 0;
    }
    FUN_00aca990(param_1,0);
    iVar5 = *(int *)(iVar3 + 0x360);
    if (*(int *)(iVar3 + 0x360) == 0) {
      iVar5 = iVar3;
    }
    sVar2 = *(short *)(iVar5 + 0x358);
    iVar5 = 0;
    if (0 < sVar2) {
      iVar6 = 0;
      do {
        iVar4 = *(int *)(iVar3 + 0x360);
        if (*(int *)(iVar3 + 0x360) == 0) {
          iVar4 = iVar3;
        }
        if (((-1 < iVar5) && (iVar5 < *(short *)(iVar4 + 0x358))) &&
           (iVar4 = *(int *)(iVar4 + 0x350) + iVar6, iVar4 != 0)) {
          puVar1 = (ushort *)(iVar4 + 0xa2);
          *puVar1 = *puVar1 & 0xfff9;
        }
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 0xb0;
      } while (iVar5 < sVar2);
    }
    *(ushort *)(iVar3 + 0xa2) = *(ushort *)(iVar3 + 0xa2) | 4;
    if (((param_2 == 0x201a1) && (iVar5 = FUN_00a7c800(), 1 < *(short *)(iVar5 + 0x324))) &&
       (*(int *)(iVar5 + 800) != -0x70)) {
      iVar5 = FUN_00a7c800();
      if (*(short *)(iVar5 + 0x324) < 2) {
        FUN_00a096f0(1);
        return iVar3;
      }
      FUN_00a096f0(1);
    }
    return iVar3;
  }
  return 0;
}

