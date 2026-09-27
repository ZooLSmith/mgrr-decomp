// src/unsorted/unit_00442390.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00442390..00442430, 3 functions

#include "mgrr.h"

// 00442390  FUN_00442390  size=19  [run]
float10 __fastcall FUN_00442390(int param_1)

{
  if (*(int *)(param_1 + 0xeb4) != 0) {
    return (float10)*(float *)(param_1 + 0x1ac0);
  }
  return (float10)1;
}

// 00442400  FUN_00442400  size=19  [run]
float10 __fastcall FUN_00442400(int param_1)

{
  if (*(int *)(param_1 + 0xeb4) != 0) {
    return (float10)*(float *)(param_1 + 0x1ab0);
  }
  return (float10)1;
}

// 00442430  FUN_00442430  size=96  [run]
void __thiscall FUN_00442430(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(short *)(param_1 + 0x32c)) {
    iVar1 = 0;
    do {
      *(uint *)(*(int *)(param_1 + 0x328) + 0x460 + iVar1) = -(uint)(param_2 != 0) & 2;
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x560;
    } while (iVar2 < *(short *)(param_1 + 0x32c));
  }
  if (param_2 == 0) {
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) & 0xffbfffff;
    return;
  }
  *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x400000;
  return;
}

