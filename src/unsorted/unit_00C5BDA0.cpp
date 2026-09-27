// src/unsorted/unit_00C5BDA0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00C5BDA0..00C5BFF0, 6 functions

#include "mgrr.h"

// 00C5BDA0  FUN_00c5bda0  size=79  [run]
void __fastcall FUN_00c5bda0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  FUN_00dd7270();
  iVar1 = 1;
  puVar2 = (undefined4 *)(param_1 + 0x3c);
  do {
    puVar3 = puVar2 + -7;
    if (puVar2[-6] != 0) {
      if (puVar2[-6] != 0) {
        FUN_00dd48d0(puVar2[-6],0);
        puVar2[-6] = 0;
      }
      puVar2[-5] = 0;
      puVar2[-4] = 0;
      puVar2[-3] = *puVar3;
      puVar2[-2] = *puVar3;
      puVar2[-1] = *puVar3;
    }
    iVar1 = iVar1 + -1;
    puVar2 = puVar3;
  } while (-1 < iVar1);
  return;
}

// 00C5BDF0  FUN_00c5bdf0  size=142  [run]
void __fastcall FUN_00c5bdf0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    iVar1 = FUN_00dd29b0(0xf50,0x20,0,0);
    *(int *)(param_1 + 8) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0xc) = 0x30;
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(int *)(param_1 + 0x1c) = iVar1 + 0xf00;
      FUN_00c4c870();
    }
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    iVar1 = FUN_00dd29b0(0xf50,0x20,0,0);
    *(int *)(param_1 + 0x24) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x28) = 0x30;
      *(undefined4 *)(param_1 + 0x2c) = 0;
      *(int *)(param_1 + 0x38) = iVar1 + 0xf00;
      FUN_00c4c870();
    }
  }
  FUN_00dd7240();
  return;
}

// 00C5BE80  FUN_00c5be80  size=61  [run]
void __fastcall FUN_00c5be80(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = *param_1;
  bVar2 = bVar1 ^ 1;
  *param_1 = bVar2;
  *(byte **)(param_1 + 0x3c) = param_1 + (uint)bVar1 * 0x1c + 4;
  *(byte **)(param_1 + 0x40) = param_1 + (uint)bVar2 * 0x1c + 4;
  if (*(int *)(*(int *)(param_1 + 0x3c) + 4) != 0) {
    FUN_00c4c870();
    return;
  }
  return;
}

// 00C5BEF0  FUN_00c5bef0  size=112  [run]
void __fastcall FUN_00c5bef0(undefined4 *param_1)

{
  FUN_00dd7270();
  if (param_1[8] != 0) {
    if (param_1[8] != 0) {
      FUN_00dd48d0(param_1[8],0);
      param_1[8] = 0;
    }
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = param_1[7];
    param_1[0xc] = param_1[7];
    param_1[0xd] = param_1[7];
  }
  if (param_1[1] != 0) {
    if (param_1[1] != 0) {
      FUN_00dd48d0(param_1[1],0);
      param_1[1] = 0;
    }
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = *param_1;
    param_1[5] = *param_1;
    param_1[6] = *param_1;
  }
  return;
}

// 00C5BF60  FUN_00c5bf60  size=141  [run]
void __fastcall FUN_00c5bf60(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    iVar1 = FUN_00dd29b0(0x484,0x20,0,0);
    *(int *)(param_1 + 4) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 8) = 0x10;
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(int *)(param_1 + 0x18) = iVar1 + 0x440;
      FUN_00c4c2d0();
    }
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    iVar1 = FUN_00dd29b0(0x2d0,0x20,0,0);
    *(int *)(param_1 + 0x20) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x24) = 9;
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(int *)(param_1 + 0x34) = iVar1 + 0x288;
      FUN_00c4c330();
    }
  }
  FUN_00dd7240();
  return;
}

// 00C5BFF0  FUN_00c5bff0  size=90  [run]
void __thiscall FUN_00c5bff0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_00a497e0(param_2);
  if ((param_2 != iVar1) && (iVar1 = FUN_00a497e0(param_2), iVar1 != -1)) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2598) = 0;
  *(undefined4 *)(param_1 + 0x259c) = 0;
  *(undefined4 *)(param_1 + 0x25a0) = 0;
  *(undefined4 *)(param_1 + 0x25a4) = 0;
  iVar1 = cXmlBinary::cXmlBinary_27(param_2);
  if (iVar1 != 0) {
    OcclusionManager::loadVCD(param_2);
  }
  return;
}

