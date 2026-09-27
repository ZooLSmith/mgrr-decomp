// src/unsorted/unit_0051B730.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0051B730..0051BC70, 7 functions

#include "mgrr.h"

// 0051B730  FUN_0051b730  size=136  [run]
void __thiscall FUN_0051b730(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float unaff_ESI;
  float10 fVar3;
  float fStack_38;
  float fStack_34;
  undefined4 local_30 [4];
  undefined1 local_20 [4];
  float local_1c;
  
  if (param_2 != 0) {
    switchD_0080dbae::default();
    FUN_00a8ce90(local_30,local_20);
    fVar3 = (float10)FUN_00ddba30(*(float *)(param_2 + 0x94) + local_1c);
    *(float *)(param_1 + 0x94) = (float)fVar3;
    D3DXVec3TransformNormal(local_30,local_30,param_2 + 0x10);
    fVar1 = *(float *)(param_2 + 0x44);
    fVar2 = *(float *)(param_2 + 0x48);
    *(float *)(param_1 + 0x50) = *(float *)(param_2 + 0x40) + unaff_ESI;
    *(float *)(param_1 + 0x54) = fVar1 + fStack_38;
    *(float *)(param_1 + 0x58) = fVar2 + fStack_34;
    *(undefined4 *)(param_1 + 0x5c) = local_30[0];
  }
  return;
}

// 0051B7E0  FUN_0051b7e0  size=1  [run]
void FUN_0051b7e0(void)

{
  return;
}

// 0051BB40  FUN_0051bb40  size=21  [run]
void __fastcall FUN_0051bb40(int *param_1)

{
  (**(code **)(*param_1 + 800))(0x3c888889);
  return;
}

// 0051BC40  FUN_0051bc40  size=1  [run]
void FUN_0051bc40(void)

{
  return;
}

// 0051BC50  FUN_0051bc50  size=1  [run]
void FUN_0051bc50(void)

{
  return;
}

// 0051BC60  FUN_0051bc60  size=1  [run]
void FUN_0051bc60(void)

{
  return;
}

// 0051BC70  FUN_0051bc70  size=15  [run]
void __fastcall FUN_0051bc70(int param_1)

{
  if (0xb < *(int *)(param_1 + 0x61c)) {
    FUN_00b7e5d0();
    return;
  }
  return;
}

