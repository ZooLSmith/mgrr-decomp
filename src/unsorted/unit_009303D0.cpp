// src/unsorted/unit_009303D0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 009303D0..00930610, 7 functions

#include "mgrr.h"

// 009303D0  FUN_009303d0  size=76  [run]
undefined4 __fastcall FUN_009303d0(int param_1)

{
  FUN_0090b090();
  FUN_0092c070();
  FUN_0100f3d0();
  FUN_01013330();
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  FUN_00dd7340();
  FUN_0092c180();
  thunk_FUN_008fd780();
  Hw::cHeapVariable::vf08();
  FUN_0092c2a0();
  return 1;
}

// 00930420  FUN_00930420  size=98  [run]
void __fastcall FUN_00930420(int param_1)

{
  int *piVar1;
  
  if (DAT_01b35fa8 != 0) {
    FUN_0092c200();
    FUN_011924e0(DAT_01b35fb4,DAT_01b35fb8);
  }
  if (*(int *)(param_1 + 0x48) != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (*(int *)(param_1 + 0x98) == 0)) {
      FUN_00dd7320();
    }
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  return;
}

// 00930490  FUN_00930490  size=22  [run]
void __fastcall FUN_00930490(int *param_1)

{
  if (*param_1 != 0) {
    FUN_010060a0();
    *param_1 = 0;
  }
  return;
}

// 009304E0  FUN_009304e0  size=61  [run]
void FUN_009304e0(undefined4 param_1)

{
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_20 = 0;
  uStack_1c = param_1;
  uStack_18 = 0;
  uStack_14 = 0;
  FUN_01192460(&local_20);
  return;
}

// 00930520  FUN_00930520  size=65  [run]
void FUN_00930520(undefined4 *param_1)

{
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_20 = *param_1;
  uStack_1c = param_1[1];
  uStack_18 = param_1[2];
  uStack_14 = 0;
  FUN_01192460(&local_20);
  return;
}

// 00930570  FUN_00930570  size=150  [run]
undefined4 __fastcall FUN_00930570(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00de3d80(0,"RigidMaterial.brd");
  iVar2 = FUN_00de3d80(0,"RigidPreset.brd");
  if (iVar1 != 0) {
    if (*(float *)(iVar1 + 4) == 1.0) {
      *param_1 = *(undefined4 *)(iVar1 + 8);
      param_1[1] = iVar1 + 0x10;
    }
    else {
      FUN_00dd5650(&DAT_0164e850);
    }
  }
  if (iVar2 != 0) {
    if (*(float *)(iVar2 + 4) != 1.0) {
      FUN_00dd5650(&DAT_0164e808);
      return 1;
    }
    param_1[2] = *(undefined4 *)(iVar2 + 8);
    param_1[3] = iVar2 + 0x10;
  }
  return 1;
}

// 00930610  FUN_00930610  size=136  [run]
undefined4 __thiscall FUN_00930610(uint *param_1,int param_2,float param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  
  uVar2 = 0;
  if (*param_1 != 0) {
    piVar1 = (int *)param_1[1];
    piVar3 = piVar1;
    do {
      if (*piVar3 == param_2) {
        *(float *)(param_4 + 0x90) = (float)piVar1[uVar2 * 0xc + 1] * param_3;
        *(undefined4 *)(param_4 + 0x9c) = 0x3f800000;
        *(int *)(param_4 + 0xa0) = piVar1[uVar2 * 0xc + 2];
        *(int *)(param_4 + 0xa8) = piVar1[uVar2 * 0xc + 3];
        *(int *)(param_4 + 0x94) = piVar1[uVar2 * 0xc + 4];
        *(int *)(param_4 + 0x98) = piVar1[uVar2 * 0xc + 5];
        *(int *)(param_4 + 0xac) = piVar1[uVar2 * 0xc + 6];
        *(int *)(param_4 + 0xb0) = piVar1[uVar2 * 0xc + 7];
        return 1;
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 0xc;
    } while (uVar2 < *param_1);
  }
  return 0;
}

