// src/unsorted/unit_0043F390.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0043F390..0043F860, 9 functions

#include "mgrr.h"

// 0043F390  FUN_0043f390  size=42  [run]
float10 FUN_0043f390(undefined4 param_1)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = FUN_00e26e90();
  if (iVar1 == 0) {
    return (float10)-1.0;
  }
  fVar2 = (float10)FUN_00e36a50(param_1);
  return fVar2;
}

// 0043F490  FUN_0043f490  size=23  [run]
void FUN_0043f490(float param_1,float param_2)

{
  if (param_2 < param_1) {
    return;
  }
  return;
}

// 0043F4B0  FUN_0043f4b0  size=23  [run]
void FUN_0043f4b0(float param_1,float param_2)

{
  if (param_2 < param_1) {
    return;
  }
  return;
}

// 0043F4D0  FUN_0043f4d0  size=42  [run]
void FUN_0043f4d0(float param_1,float param_2,float param_3)

{
  if (param_1 <= param_2) {
    param_1 = param_2;
  }
  if (param_1 <= param_3) {
    return;
  }
  return;
}

// 0043F5B0  FUN_0043f5b0  size=90  [run]
void __thiscall FUN_0043f5b0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x798) != 0) &&
     (iVar1 = (**(code **)(**(int **)(param_1 + 0x798) + 4))(param_2), iVar1 != 0)) {
    if (*(int *)(param_1 + 0x798) != 0) {
      (**(code **)(**(int **)(param_1 + 0x798) + 4))(param_2);
    }
    FUN_00eaa6e0(param_2,0);
  }
  return;
}

// 0043F660  FUN_0043f660  size=54  [run]
void FUN_0043f660(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 local_50 [76];
  
  FUN_00ddcfe0(local_50,param_3,param_4);
  D3DXVec3TransformNormal(param_1,param_2,local_50);
  return;
}

// 0043F6A0  FUN_0043f6a0  size=54  [run]
void FUN_0043f6a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 local_50 [76];
  
  FUN_00ddcfe0(local_50,param_3,param_4);
  D3DXVec3TransformNormal(param_1,param_2,local_50);
  return;
}

// 0043F830  FUN_0043f830  size=48  [run]
bool __thiscall FUN_0043f830(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0x80000000 >> ((byte)param_2 & 0x1f);
  if ((*(uint *)(param_1 + 0x10 + (param_2 >> 5) * 4) & uVar1) == 0) {
    return false;
  }
  return (*(uint *)(param_1 + (param_2 >> 5) * 4) & uVar1) == 0;
}

// 0043F860  FUN_0043f860  size=50  [run]
bool __thiscall FUN_0043f860(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0x80000000 >> ((byte)param_2 & 0x1f);
  if ((*(uint *)(param_1 + 0x10 + (param_2 >> 5) * 4) & uVar1) == 0) {
    return false;
  }
  return (*(uint *)(param_1 + 8 + (param_2 >> 5) * 4) & uVar1) != 0;
}

