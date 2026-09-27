// src/unsorted/unit_00AC7060.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00AC7060..00AC7150, 5 functions

#include "types.h"

// 00AC7060  FUN_00ac7060  size=51  [run]
void __thiscall FUN_00ac7060(int param_1,undefined4 *param_2)

{
  if (*(int *)(param_1 + 0x9b0) == 0) {
    *(undefined4 *)(param_1 + 0x9a0) = *param_2;
    *(undefined4 *)(param_1 + 0x9a4) = param_2[1];
    *(undefined4 *)(param_1 + 0x9a8) = param_2[2];
    *(undefined4 *)(param_1 + 0x9ac) = param_2[3];
  }
  return;
}

// 00AC70A0  FUN_00ac70a0  size=7  [run]
int __fastcall FUN_00ac70a0(int param_1)

{
  return param_1 + 0x9a0;
}

// 00AC70B0  FUN_00ac70b0  size=11  [run]
void __fastcall FUN_00ac70b0(int param_1)

{
  *(undefined4 *)(param_1 + 0x9b0) = 1;
  return;
}

// 00AC7100  FUN_00ac7100  size=26  [run]
void FUN_00ac7100(char *param_1,char *param_2)

{
  _vsprintf_s(param_1,0x30,param_2,&stack0x0000000c);
  return;
}

// 00AC7150  FUN_00ac7150  size=41  [run]
uint FUN_00ac7150(undefined4 *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  puVar2 = &DAT_01dc526c;
  (**(code **)*param_1)(&DAT_01dc526c);
  iVar1 = FUN_00dd6d80(puVar2);
  return -(uint)(iVar1 != 0) & (uint)param_1;
}

