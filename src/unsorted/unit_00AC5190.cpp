// src/unsorted/unit_00AC5190.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00AC5190..00AC53A0, 4 functions

#include "mgrr.h"

// 00AC5190  FUN_00ac5190  size=60  [run]
undefined4 FUN_00ac5190(void)

{
  int iVar1;
  
  iVar1 = BehaviorAppBase::vf40();
  if (iVar1 == 0) {
    return 0;
  }
  FUN_00a0b8b0(1);
  FUN_00a0b530(&DAT_01f68db8);
  FUN_00a0ba10(0);
  FUN_00a0b860(1);
  return 1;
}

// 00AC51E0  FUN_00ac51e0  size=16  [run]
void FUN_00ac51e0(void)

{
  FUN_00a8c820();
  Behavior::vf44();
  return;
}

// 00AC5200  FUN_00ac5200  size=406  [run]
void __fastcall FUN_00ac5200(int param_1)

{
  ushort *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0xb00) != 0) {
    iVar5 = FUN_00dd9400(0x58);
    if (iVar5 != 0) {
      iVar5 = FUN_00dd93a0(0x9f);
      if (iVar5 == 0) {
        fVar2 = *(float *)(param_1 + 0xa40) + 1.0;
      }
      else {
        fVar2 = *(float *)(param_1 + 0xa40) - 1.0;
      }
      *(float *)(param_1 + 0xa40) = fVar2;
    }
    iVar5 = FUN_00dd9400(0x59);
    if (iVar5 != 0) {
      iVar5 = FUN_00dd93a0(0x9f);
      if (iVar5 == 0) {
        fVar2 = *(float *)(param_1 + 0xa44) + 1.0;
      }
      else {
        fVar2 = *(float *)(param_1 + 0xa44) - 1.0;
      }
      *(float *)(param_1 + 0xa44) = fVar2;
    }
    iVar5 = FUN_00dd9400(0x5a);
    if (iVar5 != 0) {
      iVar5 = FUN_00dd93a0(0x9f);
      if (iVar5 == 0) {
        fVar2 = *(float *)(param_1 + 0xa48) + 1.0;
      }
      else {
        fVar2 = *(float *)(param_1 + 0xa48) - 1.0;
      }
      *(float *)(param_1 + 0xa48) = fVar2;
    }
    iVar5 = FUN_00dd9400(10);
    if (iVar5 != 0) {
      iVar5 = FUN_00dd93a0(0x9f);
      if (iVar5 == 0) {
        puVar1 = (ushort *)(*(int *)(param_1 + 0xb04) + 0xa2);
        *puVar1 = *puVar1 | 0x2000;
      }
      else {
        puVar1 = (ushort *)(*(int *)(param_1 + 0xb04) + 0xa2);
        *puVar1 = *puVar1 & 0xdfff;
      }
    }
    fVar2 = *(float *)(param_1 + 0xa44);
    iVar5 = *(int *)(param_1 + 0xb00);
    fVar3 = *(float *)(param_1 + 0xa40);
    fVar4 = *(float *)(param_1 + 0xa48);
    *(undefined4 *)(iVar5 + 0x70) = *(undefined4 *)(param_1 + 0xa40);
    *(undefined4 *)(iVar5 + 0x74) = *(undefined4 *)(param_1 + 0xa44);
    *(undefined4 *)(iVar5 + 0x78) = *(undefined4 *)(param_1 + 0xa48);
    *(undefined4 *)(iVar5 + 0x7c) = *(undefined4 *)(param_1 + 0xa4c);
    FUN_00f95fe0(*(int *)(param_1 + 0xb00) + 0x10,
                 SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2) + 2.0,0);
    FUN_00f95fe0(*(int *)(param_1 + 0xb04) + 0x10,0x40400000,0);
  }
  return;
}

// 00AC53A0  FUN_00ac53a0  size=16  [run]
void FUN_00ac53a0(void)

{
  Bh0064::vf64();
  FUN_00a93170();
  return;
}

