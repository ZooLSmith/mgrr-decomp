// src/unsorted/unit_00E92C40.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00E92C40..00E93230, 7 functions

#include "types.h"

// 00E92C40  FUN_00e92c40  size=81  [run]
void __fastcall FUN_00e92c40(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_1;
  if (*(char *)((int)puVar1 + 0xd) == '\0') {
    if (*(char *)(puVar1[1] + 0xd) == '\0') {
      FUN_00e91de0(puVar1[1]);
    }
    if (*(char *)(puVar1[2] + 0xd) == '\0') {
      FUN_00e91de0(puVar1[2]);
    }
    puVar1[2] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    param_1[2] = param_1;
    param_1[1] = param_1;
    *param_1 = param_1;
    *(undefined2 *)(param_1 + 3) = 0x100;
  }
  return;
}

// 00E92CC0  FUN_00e92cc0  size=64  [run]
void FUN_00e92cc0(int *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  if (*(char *)(param_1[1] + 0xd) == '\0') {
    iVar4 = *(int *)(param_1[1] + 8);
    if (*(char *)(iVar4 + 0xd) == '\0') {
      do {
        iVar4 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar4 + 0xd) == '\0');
      return;
    }
  }
  else {
    cVar1 = *(char *)(*param_1 + 0xd);
    piVar3 = (int *)*param_1;
    while ((piVar2 = piVar3, cVar1 == '\0' && (param_1 == (int *)piVar2[1]))) {
      cVar1 = *(char *)(*piVar2 + 0xd);
      piVar3 = (int *)*piVar2;
      param_1 = piVar2;
    }
  }
  return;
}

// 00E92D60  FUN_00e92d60  size=23  [run]
undefined4 __fastcall FUN_00e92d60(int param_1)

{
  if ((*(int *)(param_1 + 8) != *(int *)(param_1 + 4)) && (*(char *)(param_1 + 0xc) == '\0')) {
    return 1;
  }
  return 0;
}

// 00E92DE0  FUN_00e92de0  size=38  [run]
void __fastcall FUN_00e92de0(int *param_1)

{
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)*param_1)(0);
    FUN_00dd48d0(*param_1,0);
    *param_1 = 0;
  }
  return;
}

// 00E92E50  FUN_00e92e50  size=60  [run]
int __fastcall FUN_00e92e50(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((int *)*param_1 != (int *)0x0) {
    uVar1 = (**(code **)(*(int *)*param_1 + 0xc))();
    iVar2 = FUN_00dd29b0(uVar1,0x20,0,0);
    if (iVar2 != 0) {
      (**(code **)(*(int *)*param_1 + 8))(iVar2);
      return iVar2;
    }
  }
  return 0;
}

// 00E92FB0  FUN_00e92fb0  size=38  [run]
void __fastcall FUN_00e92fb0(int *param_1)

{
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)*param_1)(0);
    FUN_00dd48d0(*param_1,0);
    *param_1 = 0;
  }
  return;
}

// 00E93230  FUN_00e93230  size=58  [run]
int * __thiscall FUN_00e93230(int *param_1,byte param_2)

{
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)*param_1)(0);
    FUN_00dd48d0(*param_1,0);
    *param_1 = 0;
  }
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

