// src/unsorted/unit_00618B40.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00618B40..00619440, 8 functions

#include "types.h"

// 00618B40  FUN_00618b40  size=263  [run]
void __fastcall FUN_00618b40(int param_1)

{
  short sVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00a9f4c0("ASS WAIT",0x3e088889,0,0);
    FUN_00a9f600(0xffffffff,0,0,0xffffffff,0,0x36,0x3e088889,0x80000);
    FUN_00a9f600(0xffffffff,0,0,0,0,0x32,0x3e088889,0x80000);
    FUN_00a9f600(0xffffffff,0,0,1,0,0x35,0x3e088889,0x80000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    sVar1 = FUN_00dde2d0(1,3);
    *(float *)(param_1 + 0x920) = ((float)(int)sVar1 + 1.0) * 60.0;
    *(undefined4 *)(param_1 + 0x924) = 0;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00a947e0(0,0,*(undefined4 *)(param_1 + 0x1660),0);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00618C50  FUN_00618c50  size=445  [run]
void __fastcall FUN_00618c50(int *param_1)

{
  int iVar1;
  short sVar2;
  undefined2 uVar3;
  
  iVar1 = param_1[0x186];
  uVar3 = 0x43;
  if (iVar1 == 0x20002) {
    uVar3 = 0x59;
  }
  if (iVar1 == 0x20003) {
    uVar3 = 0x5a;
  }
  if (iVar1 == 0x20004) {
    uVar3 = 0x5b;
  }
  if (param_1[0x187] == 0) {
    param_1[0x51c] = 1;
    FUN_00a9f4c0("ASS WALK",0x3e888889,0,0);
    FUN_00a9f600(0xffffffff,0,0,0xffffffff,0,0x39,0x3e888889,0x80000);
    FUN_00a9f600(0xffffffff,0,0,0,0,uVar3,0x3e888889,0x80100);
    FUN_00a9f600(0xffffffff,0,0,1,0,0x38,0x3e888889,0x80000);
    sVar2 = FUN_00dde2d0(3,6);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = (int)((float)(int)sVar2 * 30.0 + 90.0);
    sVar2 = FUN_00dde2d0(1,3);
    param_1[0x248] = (int)((float)(int)sVar2 * 60.0);
    param_1[0x249] = 0;
  }
  else if (param_1[0x187] != 1) goto LAB_00618db9;
  FUN_00a947e0(0,0,param_1[0x598],0);
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_00618db9:
  if (param_1[0x2a1] != 0) {
    if (param_1[0x670] != 0) {
      FUN_00a8e880(param_1[0x2a1] + 0x40);
    }
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
  }
  return;
}

// 00618E10  FUN_00618e10  size=163  [run]
void __fastcall FUN_00618e10(int *param_1)

{
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x4d,0,0x3e2aaaab,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x51c] = 1;
  }
  else if (param_1[0x187] != 1) goto LAB_00618e76;
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_00618e76:
  if (param_1[0x2a1] != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
  }
  return;
}

// 00618FB0  FUN_00618fb0  size=272  [run]
void __fastcall FUN_00618fb0(int param_1)

{
  short sVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00a9f4c0("RPG WAIT",0x3e088889,0,0);
    FUN_00a9f600(0xffffffff,0,0,0xffffffff,0,0x112,0x3e088889,0x80000);
    FUN_00a9f600(0xffffffff,0,0,0,0,0x10e,0x3e088889,0x80000);
    FUN_00a9f600(0xffffffff,0,0,1,0,0x111,0x3e088889,0x80000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    sVar1 = FUN_00dde2d0(1,3);
    *(float *)(param_1 + 0x920) = ((float)(int)sVar1 + 1.0) * 60.0;
    *(undefined4 *)(param_1 + 0x924) = 0;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00a947e0(0,0,*(undefined4 *)(param_1 + 0x1660),0);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 006190C0  FUN_006190c0  size=408  [run]
void __fastcall FUN_006190c0(int *param_1)

{
  int iVar1;
  short sVar2;
  undefined2 uVar3;
  
  iVar1 = param_1[0x186];
  uVar3 = 0x11b;
  if (iVar1 == 0x30002) {
    uVar3 = 0x125;
  }
  if (iVar1 == 0x30003) {
    uVar3 = 0x126;
  }
  if (iVar1 == 0x30004) {
    uVar3 = 0x127;
  }
  if (param_1[0x187] == 0) {
    param_1[0x51c] = 1;
    FUN_00a9f4c0("RPG WALK",0x3e888889,0,0);
    FUN_00a9f600(0xffffffff,0,0,0xffffffff,0,0x115,0x3e888889,0x80000);
    FUN_00a9f600(0xffffffff,0,0,0,0,uVar3,0x3e888889,0x80100);
    FUN_00a9f600(0xffffffff,0,0,1,0,0x114,0x3e888889,0x80000);
    param_1[0x187] = param_1[0x187] + 1;
    sVar2 = FUN_00dde2d0(1,3);
    param_1[0x248] = (int)((float)(int)sVar2 * 60.0);
    param_1[0x249] = 0;
  }
  else if (param_1[0x187] != 1) goto LAB_00619204;
  FUN_00a947e0(0,0,param_1[0x598],0);
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_00619204:
  if (param_1[0x2a1] != 0) {
    if (param_1[0x670] != 0) {
      FUN_00a8e880(param_1[0x2a1] + 0x40);
    }
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3c0efa35,0);
  }
  return;
}

// 00619260  FUN_00619260  size=166  [run]
void __fastcall FUN_00619260(int *param_1)

{
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x121,0,0x3e2aaaab,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x51c] = 1;
  }
  else if (param_1[0x187] != 1) goto LAB_006192c9;
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_006192c9:
  if (param_1[0x2a1] != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
  }
  return;
}

// 00619340  FUN_00619340  size=129  [run]
void __thiscall FUN_00619340(int param_1,int param_2)

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

// 00619440  FUN_00619440  size=50  [run]
void __fastcall FUN_00619440(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_009f8b10();
    FUN_00a7c950();
  }
  *(undefined4 *)(param_1 + 0x654) = 0xffffffff;
  return;
}

