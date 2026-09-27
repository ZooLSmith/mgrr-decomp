// src/unsorted/unit_00A8CAB0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00A8CAB0..00A8CCC0, 14 functions

#include "mgrr.h"

// 00A8CAB0  FUN_00a8cab0  size=7  [run]
undefined4 __fastcall FUN_00a8cab0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x618);
}

// 00A8CAC0  FUN_00a8cac0  size=7  [run]
undefined4 __fastcall FUN_00a8cac0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x61c);
}

// 00A8CAD0  FUN_00a8cad0  size=7  [run]
undefined4 __fastcall FUN_00a8cad0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x620);
}

// 00A8CAE0  FUN_00a8cae0  size=7  [run]
undefined4 __fastcall FUN_00a8cae0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x624);
}

// 00A8CAF0  FUN_00a8caf0  size=91  [run]
void __thiscall
FUN_00a8caf0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  *(undefined4 *)(param_1 + 0x628) = *(undefined4 *)(param_1 + 0x618);
  *(undefined4 *)(param_1 + 0x62c) = *(undefined4 *)(param_1 + 0x61c);
  *(undefined4 *)(param_1 + 0x630) = *(undefined4 *)(param_1 + 0x620);
  *(undefined4 *)(param_1 + 0x634) = *(undefined4 *)(param_1 + 0x624);
  *(undefined4 *)(param_1 + 0x618) = param_2;
  *(undefined4 *)(param_1 + 0x61c) = param_3;
  *(undefined4 *)(param_1 + 0x620) = param_4;
  *(undefined4 *)(param_1 + 0x624) = param_5;
  return;
}

// 00A8CB50  FUN_00a8cb50  size=13  [run]
void __thiscall FUN_00a8cb50(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x618) = param_2;
  return;
}

// 00A8CB60  FUN_00a8cb60  size=13  [run]
void __thiscall FUN_00a8cb60(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x61c) = param_2;
  return;
}

// 00A8CB70  FUN_00a8cb70  size=13  [run]
void __thiscall FUN_00a8cb70(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x620) = param_2;
  return;
}

// 00A8CB80  FUN_00a8cb80  size=13  [run]
void __thiscall FUN_00a8cb80(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x624) = param_2;
  return;
}

// 00A8CBE0  FUN_00a8cbe0  size=18  [run]
bool __thiscall FUN_00a8cbe0(int param_1,int param_2)

{
  return *(int *)(param_1 + 0x618) == param_2;
}

// 00A8CC00  FUN_00a8cc00  size=35  [run]
bool __thiscall FUN_00a8cc00(int param_1,int param_2,int param_3)

{
  if (*(int *)(param_1 + 0x618) != param_2) {
    return false;
  }
  return *(int *)(param_1 + 0x61c) == param_3;
}

// 00A8CCA0  FUN_00a8cca0  size=13  [run]
void __thiscall FUN_00a8cca0(int param_1,int param_2)

{
  *(int *)(param_1 + 0x618) = *(int *)(param_1 + 0x618) + param_2;
  return;
}

// 00A8CCB0  FUN_00a8ccb0  size=13  [run]
void __thiscall FUN_00a8ccb0(int param_1,int param_2)

{
  *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + param_2;
  return;
}

// 00A8CCC0  FUN_00a8ccc0  size=13  [run]
void __thiscall FUN_00a8ccc0(int param_1,int param_2)

{
  *(int *)(param_1 + 0x620) = *(int *)(param_1 + 0x620) + param_2;
  return;
}

