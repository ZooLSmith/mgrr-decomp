// src/unsorted/unit_008E0AE0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 008E0AE0..008E0D70, 15 functions

#include "types.h"

// 008E0AE0  FUN_008e0ae0  size=13  [run]
void __thiscall FUN_008e0ae0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10c) = param_2;
  return;
}

// 008E0AF0  FUN_008e0af0  size=41  [run]
void __thiscall FUN_008e0af0(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(param_2 == 0);
  if ((*(uint *)(param_1 + 0x104) != uVar1) && (*(uint *)(param_1 + 0x104) = uVar1, uVar1 != 0)) {
    *(undefined4 *)(*(int *)(param_1 + 0xd0) + 4) = 0;
  }
  return;
}

// 008E0B20  FUN_008e0b20  size=42  [run]
void __thiscall FUN_008e0b20(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0xe0) = *param_2;
  *(undefined4 *)(param_1 + 0xe4) = param_2[1];
  *(undefined4 *)(param_1 + 0xe8) = param_2[2];
  *(undefined4 *)(param_1 + 0xec) = param_2[3];
  return;
}

// 008E0B70  FUN_008e0b70  size=13  [run]
void __thiscall FUN_008e0b70(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1c0) = param_2;
  return;
}

// 008E0B80  FUN_008e0b80  size=23  [run]
void __thiscall FUN_008e0b80(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x1c4) = param_2;
  *(undefined4 *)(param_1 + 0x1c8) = param_3;
  return;
}

// 008E0BA0  FUN_008e0ba0  size=13  [run]
void __thiscall FUN_008e0ba0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1cc) = param_2;
  return;
}

// 008E0BB0  FUN_008e0bb0  size=13  [run]
void __thiscall FUN_008e0bb0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1d0) = param_2;
  return;
}

// 008E0BE0  FUN_008e0be0  size=20  [run]
void __fastcall FUN_008e0be0(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0xd0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  return;
}

// 008E0C00  FUN_008e0c00  size=35  [run]
void __thiscall FUN_008e0c00(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0xd0);
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  puVar1[2] = param_2[2];
  puVar1[3] = param_2[3];
  return;
}

// 008E0C30  FUN_008e0c30  size=23  [run]
void __thiscall FUN_008e0c30(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0xd0);
  *puVar1 = *param_2;
  puVar1[2] = param_2[2];
  return;
}

// 008E0C50  FUN_008e0c50  size=16  [run]
void __thiscall FUN_008e0c50(int param_1,undefined4 param_2)

{
  *(undefined4 *)(*(int *)(param_1 + 0xd0) + 4) = param_2;
  return;
}

// 008E0CE0  FUN_008e0ce0  size=66  [run]
void __thiscall FUN_008e0ce0(int param_1,float *param_2)

{
  *param_2 = *(float *)(param_1 + 0x1b0) - *(float *)(param_1 + 0x1a0);
  param_2[1] = *(float *)(param_1 + 0x1b4) - *(float *)(param_1 + 0x1a4);
  param_2[2] = *(float *)(param_1 + 0x1b8) - *(float *)(param_1 + 0x1a8);
  param_2[3] = *(float *)(param_1 + 0x1bc) - *(float *)(param_1 + 0x1ac);
  return;
}

// 008E0D30  FUN_008e0d30  size=42  [run]
void __thiscall FUN_008e0d30(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0xb0) = *param_2;
  *(undefined4 *)(param_1 + 0xb4) = param_2[1];
  *(undefined4 *)(param_1 + 0xb8) = param_2[2];
  *(undefined4 *)(param_1 + 0xbc) = param_2[3];
  return;
}

// 008E0D60  FUN_008e0d60  size=7  [run]
int __fastcall FUN_008e0d60(int param_1)

{
  return param_1 + 0xb0;
}

// 008E0D70  FUN_008e0d70  size=73  [run]
void __thiscall FUN_008e0d70(int param_1,int param_2,int param_3)

{
  if (param_2 != 0) {
    if (*(undefined4 **)(param_1 + 0x128) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 0x128))(1);
    }
    *(int *)(param_1 + 0x128) = param_2;
  }
  if (param_3 != 0) {
    if (*(undefined4 **)(param_1 + 300) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(param_1 + 300))(1);
    }
    *(int *)(param_1 + 300) = param_3;
  }
  return;
}

