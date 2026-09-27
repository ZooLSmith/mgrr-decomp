// src/unsorted/unit_00AA28E0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00AA28E0..00AA2970, 2 functions

#include "mgrr.h"

// 00AA28E0  FUN_00aa28e0  size=140  [run]
float10 __fastcall FUN_00aa28e0(int param_1)

{
  int iVar1;
  int *piVar2;
  float10 fVar3;
  undefined *puVar4;
  float local_4;
  
  local_4 = (float)(float10)1;
  if (*(int *)(param_1 + 0xe80) == 0) {
    return (float10)1;
  }
  iVar1 = FUN_00ac45b0();
  if (iVar1 == 0) {
    return (float10)local_4;
  }
  piVar2 = (int *)FUN_00a7c8a0();
  if (piVar2 != (int *)0x0) {
    puVar4 = &DAT_01be9c38;
    (**(code **)(*piVar2 + 4))(&DAT_01be9c38);
    iVar1 = FUN_00dd6d80(puVar4);
    if (iVar1 != 0) {
      if (piVar2[0x1d5] == 0) {
        fVar3 = (float10)0;
      }
      else {
        fVar3 = (float10)(**(code **)(*(int *)piVar2[0x1d5] + 0x34))(0x97);
        local_4 = (float)fVar3;
        fVar3 = (float10)FUN_00a8fe70(0x97);
        if ((float10)0 == fVar3) goto LAB_00aa2960;
      }
      return fVar3;
    }
  }
LAB_00aa2960:
  return (float10)local_4;
}

// 00AA2970  FUN_00aa2970  size=140  [run]
float10 __fastcall FUN_00aa2970(int param_1)

{
  int iVar1;
  int *piVar2;
  float10 fVar3;
  undefined *puVar4;
  float local_4;
  
  local_4 = (float)(float10)1;
  if (*(int *)(param_1 + 0xe80) == 0) {
    return (float10)1;
  }
  iVar1 = FUN_00ac45b0();
  if (iVar1 == 0) {
    return (float10)local_4;
  }
  piVar2 = (int *)FUN_00a7c8a0();
  if (piVar2 != (int *)0x0) {
    puVar4 = &DAT_01be9c38;
    (**(code **)(*piVar2 + 4))(&DAT_01be9c38);
    iVar1 = FUN_00dd6d80(puVar4);
    if (iVar1 != 0) {
      if (piVar2[0x1d5] == 0) {
        fVar3 = (float10)0;
      }
      else {
        fVar3 = (float10)(**(code **)(*(int *)piVar2[0x1d5] + 0x34))(0x96);
        local_4 = (float)fVar3;
        fVar3 = (float10)FUN_00a8fe70(0x96);
        if ((float10)0 == fVar3) goto LAB_00aa29f0;
      }
      return fVar3;
    }
  }
LAB_00aa29f0:
  return (float10)local_4;
}

