// src/unsorted/unit_005E8A00.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 005E8A00..005E8A80, 5 functions

#include "types.h"

// 005E8A00  FUN_005e8a00  size=56  [run]
void __fastcall FUN_005e8a00(int *param_1)

{
  int *piVar1;
  
  FUN_00a8cb50(2);
  piVar1 = (int *)(**(code **)(*param_1 + 0x68))();
  param_1[0x24c] = *piVar1;
  param_1[0x24d] = piVar1[1];
  param_1[0x24e] = piVar1[2];
  param_1[0x24f] = piVar1[3];
  return;
}

// 005E8A40  FUN_005e8a40  size=20  [run]
void __thiscall FUN_005e8a40(int param_1,undefined4 param_2)

{
  *(undefined1 *)(param_1 + 0x965) = 1;
  *(undefined4 *)(param_1 + 0x968) = param_2;
  return;
}

// 005E8A60  FUN_005e8a60  size=7  [run]
undefined1 __fastcall FUN_005e8a60(int param_1)

{
  return *(undefined1 *)(param_1 + 0x939);
}

// 005E8A70  FUN_005e8a70  size=8  [run]
void __fastcall FUN_005e8a70(int param_1)

{
  *(undefined1 *)(param_1 + 0x939) = 1;
  return;
}

// 005E8A80  FUN_005e8a80  size=13  [run]
void __thiscall FUN_005e8a80(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x93c) = param_2;
  return;
}

