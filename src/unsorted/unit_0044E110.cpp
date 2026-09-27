// src/unsorted/unit_0044E110.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0044E110..00450400, 24 functions

#include "types.h"

// 0044E110  FUN_0044e110  size=749  [run]
void __fastcall FUN_0044e110(int *param_1)

{
  float fVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x40,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
    param_1[0x5a6] = 0;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x250] = 0;
    }
    break;
  case 2:
    FUN_00aa4080(0x41,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x42700000;
    param_1[0x249] = 0x40000000;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x249];
    param_1[0x249] = (int)(fVar1 - (float)param_1[0x244]);
    if ((fVar1 - (float)param_1[0x244] < 0.0) && (param_1[0x6d0] == 0)) {
      if ((param_1[0x2a2] != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
        local_20 = *(undefined4 *)(iVar2 + 0x40);
        local_1c = *(undefined4 *)(iVar2 + 0x44);
        local_18 = *(undefined4 *)(iVar2 + 0x48);
        local_14 = *(undefined4 *)(iVar2 + 0x4c);
        iVar2 = FUN_00a12210(0);
        if (iVar2 != 0) {
          local_20 = *(undefined4 *)(iVar2 + 0x40);
          local_1c = *(undefined4 *)(iVar2 + 0x44);
          local_18 = *(undefined4 *)(iVar2 + 0x48);
          local_14 = *(undefined4 *)(iVar2 + 0x4c);
        }
        if (param_1[0x4d5] != 0) {
          FUN_0043fc90(param_1[0x2a2],&local_20,0);
        }
      }
      FUN_00aa4080(0x44,2,0,0x3f800000,0x8000210,0,0x3f800000);
      fVar1 = (float)param_1[0x249];
      param_1[0x249] = (int)(fVar1 + 10.0);
      if (*(int *)(param_1[0x4d5] + 0x4a0) == 1) {
        param_1[0x249] = (int)(fVar1 + 10.0 + 10.0);
      }
    }
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if ((fVar1 - (float)param_1[0x244] < 0.0) &&
       (param_1[0x250] = param_1[0x250] + 1, 3 < param_1[0x250])) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 4:
    FUN_00aa4080(0x42,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      (**(code **)(*param_1 + 0x34c))();
    }
  }
  iVar2 = FUN_00a8c760(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3e0efa35,0);
  }
  return;
}

// 0044E440  FUN_0044e440  size=20  [run]
void __fastcall FUN_0044e440(int *param_1)

{
  if (param_1[0x128] == 1) {
                    /* WARNING: Could not recover jumptable at 0x0044e451. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  return;
}

// 0044E460  FUN_0044e460  size=566  [run]
void __fastcall FUN_0044e460(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  float10 fVar4;
  float local_20;
  int local_1c;
  float local_18;
  undefined4 local_14;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x51,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
    param_1[0x5a6] = 0;
  }
  else if (param_1[0x187] != 1) goto LAB_0044e652;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a8c760(8);
  if (((iVar3 != 0) && (param_1[0x2a2] != 0)) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
    local_20 = *(float *)(iVar3 + 0x40);
    local_18 = *(float *)(iVar3 + 0x48);
    local_14 = *(undefined4 *)(iVar3 + 0x4c);
    local_1c = param_1[0x15];
    fVar4 = (float10)FUN_00dde300(0xc0400000,0x40400000);
    local_20 = (float)(fVar4 + (float10)local_20);
    fVar4 = (float10)FUN_00dde300(0xc0400000,0x40400000);
    local_18 = (float)(fVar4 + (float10)local_18);
    if (param_1[0x4d6] != 0) {
      FUN_0043fc90(param_1[0x2a2],&local_20,2);
    }
  }
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    sVar2 = FUN_00dde2d0(0,2);
    param_1[0x5ab] = (int)(((float)(int)sVar2 + 1.0) * 60.0);
    fVar1 = (float)param_1[0x2a4];
    if (((!NAN(fVar1) && 25.0 < fVar1 != (fVar1 == 25.0)) && (param_1[0x128] == 1)) &&
       ((float)param_1[0x5aa] < 0.0)) {
      iVar3 = FUN_00a8cab0();
      param_1[0x376] = param_1[0x374];
      param_1[0x375] = iVar3;
      FUN_00a8caf0(0x50009,0,0,0);
      param_1[0x374] = 0;
      FUN_00a962d0(0,0);
      param_1[0x4b3] = 0;
    }
  }
LAB_0044e652:
  iVar3 = FUN_00a8c760(0);
  if (iVar3 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3db2b8c2,0);
  }
  return;
}

// 0044E6A0  FUN_0044e6a0  size=566  [run]
void __fastcall FUN_0044e6a0(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  float10 fVar4;
  float local_20;
  int local_1c;
  float local_18;
  undefined4 local_14;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x53,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
    param_1[0x5a6] = 0;
  }
  else if (param_1[0x187] != 1) goto LAB_0044e892;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a8c760(8);
  if (((iVar3 != 0) && (param_1[0x2a2] != 0)) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
    local_20 = *(float *)(iVar3 + 0x40);
    local_18 = *(float *)(iVar3 + 0x48);
    local_14 = *(undefined4 *)(iVar3 + 0x4c);
    local_1c = param_1[0x15];
    fVar4 = (float10)FUN_00dde300(0xc0400000,0x40400000);
    local_20 = (float)(fVar4 + (float10)local_20);
    fVar4 = (float10)FUN_00dde300(0xc0400000,0x40400000);
    local_18 = (float)(fVar4 + (float10)local_18);
    if (param_1[0x4d6] != 0) {
      FUN_0043fc90(param_1[0x2a2],&local_20,4);
    }
  }
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    sVar2 = FUN_00dde2d0(0,2);
    param_1[0x5ab] = (int)(((float)(int)sVar2 + 1.0) * 60.0);
    fVar1 = (float)param_1[0x2a4];
    if (((!NAN(fVar1) && 25.0 < fVar1 != (fVar1 == 25.0)) && (param_1[0x128] == 1)) &&
       ((float)param_1[0x5aa] < 0.0)) {
      iVar3 = FUN_00a8cab0();
      param_1[0x376] = param_1[0x374];
      param_1[0x375] = iVar3;
      FUN_00a8caf0(0x50009,0,0,0);
      param_1[0x374] = 0;
      FUN_00a962d0(0,0);
      param_1[0x4b3] = 0;
    }
  }
LAB_0044e892:
  iVar3 = FUN_00a8c760(0);
  if (iVar3 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3db2b8c2,0);
  }
  return;
}

// 0044E8E0  FUN_0044e8e0  size=869  [run]
void __fastcall FUN_0044e8e0(int *param_1)

{
  code *pcVar1;
  float fVar2;
  short sVar3;
  float *pfVar4;
  int iVar5;
  undefined4 uVar6;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined1 local_30 [16];
  undefined1 local_20 [28];
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  switch(param_1[0x187]) {
  case 0:
    uVar6 = 0x23;
    if ((param_1[0x6ac] != 0) && (sVar3 = FUN_00dde2d0(0,1), sVar3 != 0)) {
      uVar6 = 0x24;
    }
    FUN_00aa4080(uVar6,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x373] = 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00a94ce0(0);
    if ((iVar5 != 0) || (iVar5 = FUN_00a8c760(4), iVar5 != 0)) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3e8efa35,0);
    return;
  case 2:
    iVar5 = param_1[0x2a1];
    uVar6 = 0x3a;
    local_40 = *(float *)(iVar5 + 0x40) - (float)param_1[0x10];
    local_3c = *(float *)(iVar5 + 0x44) - (float)param_1[0x11];
    local_38 = *(float *)(iVar5 + 0x48) - (float)param_1[0x12];
    local_34 = *(float *)(iVar5 + 0x4c) - (float)param_1[0x13];
    if (((local_40 != 0.0) || (local_3c != 0.0)) || (local_38 != 0.0)) {
      fVar2 = local_38 * local_38 + local_3c * local_3c + local_40 * local_40;
      if (fVar2 < 0.0 == (fVar2 == 0.0)) {
        FUN_00ddf460(&local_40,&local_40);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        local_40 = 0.0;
        local_3c = 1.0;
        local_38 = 0.0;
      }
    }
    pfVar4 = (float *)FUN_00a92640(local_30);
    if (pfVar4[2] * -1.0 * local_38 + pfVar4[1] * -1.0 * local_3c + *pfVar4 * -1.0 * local_40 <= 0.0
       ) {
      pfVar4 = (float *)FUN_00a92640(local_20);
      if (0.0 < pfVar4[2] * local_38 + *pfVar4 * local_40 + pfVar4[1] * local_3c) {
        uVar6 = 0x38;
      }
    }
    else {
      uVar6 = 0x39;
    }
    FUN_00aa4080(uVar6,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x373] = 0;
    FUN_00a8d280();
    param_1[0x5a6] = 0;
    break;
  case 3:
    break;
  default:
    goto switchD_0044e90b_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar5 = FUN_00a94ce0(0);
  if (iVar5 != 0) {
    pcVar1 = *(code **)(*param_1 + 0x34c);
    param_1[0x373] = 0;
    (*pcVar1)();
  }
  iVar5 = FUN_00a8c760(0);
  if (iVar5 != 0) {
    iVar5 = FUN_00a9f760(0x39);
    if (iVar5 == 0) {
      iVar5 = FUN_00a9f760(0x38);
      if (iVar5 == 0) {
        uVar6 = 0x40490fdb;
      }
      else {
        uVar6 = 0x3fc90fdb;
      }
    }
    else {
      uVar6 = 0xbfc90fdb;
    }
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3e8efa35,uVar6);
    return;
  }
switchD_0044e90b_default:
  return;
}

// 0044EC60  FUN_0044ec60  size=623  [run]
void __fastcall FUN_0044ec60(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float local_20;
  float local_1c;
  float local_18;
  
  if (*(int *)(param_1 + 0x61c) < 3) {
    return;
  }
  if (3 < *(int *)(param_1 + 0x61c)) {
    return;
  }
  if (*(int *)(param_1 + 0x1aa4) != 0) goto LAB_0044ed37;
  if (*(int *)(param_1 + 0x1aa8) == 0) {
    if (*(int *)(param_1 + 0x1aac) == 0) {
      if (*(int *)(param_1 + 0x1ab0) == 0) {
        uVar1 = FUN_00a8cab0();
        uVar2 = 0x10000;
        goto LAB_0044ed09;
      }
      uVar1 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xdd4) = uVar1;
      *(undefined4 *)(param_1 + 0xdd8) = *(undefined4 *)(param_1 + 0xdd0);
      uVar2 = 0x1000e;
    }
    else {
      uVar1 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xdd4) = uVar1;
      *(undefined4 *)(param_1 + 0xdd8) = *(undefined4 *)(param_1 + 0xdd0);
      uVar2 = 0x1000d;
    }
  }
  else {
    uVar1 = FUN_00a8cab0();
    uVar2 = 0x1000f;
LAB_0044ed09:
    *(undefined4 *)(param_1 + 0xdd4) = uVar1;
    *(undefined4 *)(param_1 + 0xdd8) = *(undefined4 *)(param_1 + 0xdd0);
  }
  FUN_00a8caf0(uVar2,0,0,0);
  *(undefined4 *)(param_1 + 0xdd0) = 0;
  FUN_00a962d0(0,0);
  *(undefined4 *)(param_1 + 0x12cc) = 0;
LAB_0044ed37:
  FUN_0044ba50(&local_20,*(undefined4 *)(param_1 + 0x4f0));
  local_20 = local_20 - *(float *)(param_1 + 0x40);
  local_1c = local_1c - *(float *)(param_1 + 0x44);
  local_18 = local_18 - *(float *)(param_1 + 0x48);
  if ((SQRT(local_18 * local_18 + local_1c * local_1c + local_20 * local_20) < 12.0) &&
     (1.0471976 < *(float *)(param_1 + 0xaa0))) {
    uVar1 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xdd4) = uVar1;
    *(undefined4 *)(param_1 + 0xdd8) = *(undefined4 *)(param_1 + 0xdd0);
    FUN_00a8caf0(0x10005,0,0,0);
    *(undefined4 *)(param_1 + 0xdd0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x12cc) = 0;
    if (1.0471976 < *(float *)(param_1 + 0xa9c)) {
      uVar1 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xdd8) = *(undefined4 *)(param_1 + 0xdd0);
      *(undefined4 *)(param_1 + 0xdd4) = uVar1;
      FUN_00a8caf0(0x10006,0,0,0);
      *(undefined4 *)(param_1 + 0xdd0) = 0;
      FUN_00a962d0(0,0);
      *(undefined4 *)(param_1 + 0x12cc) = 0;
    }
    if (2.0943952 < *(float *)(param_1 + 0xa9c)) {
      uVar1 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xdd4) = uVar1;
      *(undefined4 *)(param_1 + 0xdd8) = *(undefined4 *)(param_1 + 0xdd0);
      FUN_00a8caf0(0x10008,0,0,0);
      *(undefined4 *)(param_1 + 0xdd0) = 0;
      FUN_00a962d0(0,0);
      *(undefined4 *)(param_1 + 0x12cc) = 0;
    }
    if (*(float *)(param_1 + 0xa9c) < -2.0943952) {
      uVar1 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xdd4) = uVar1;
      *(undefined4 *)(param_1 + 0xdd8) = *(undefined4 *)(param_1 + 0xdd0);
      FUN_00a8caf0(0x10007,0,0,0);
      *(undefined4 *)(param_1 + 0xdd0) = 0;
      FUN_00a962d0(0,0);
      *(undefined4 *)(param_1 + 0x12cc) = 0;
    }
  }
  return;
}

// 0044EED0  FUN_0044eed0  size=799  [run]
void __fastcall FUN_0044eed0(int *param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x10,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    if (param_1[0x379] != 0) {
      uVar4 = 0x3fe66666;
      uVar3 = 0;
      FUN_00a92f90(0,0x3fe66666);
      FUN_00407ab0(uVar3,uVar4);
    }
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 2:
    FUN_00aa4080(0x11,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    if (param_1[0x379] != 0) {
      uVar4 = 0x3fe66666;
      uVar3 = 0;
      FUN_00a92f90(0,0x3fe66666);
      FUN_00407ab0(uVar3,uVar4);
    }
    FUN_0044bb10(param_1[0x13c],0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
    param_1[0x248] = 0;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_0044bb10(param_1[0x13c],0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)((float)param_1[0x244] + fVar1);
    if ((120.0 < (float)param_1[0x244] + fVar1) && (param_1[0x379] == 0)) {
      uVar4 = 0x3f99999a;
      uVar3 = 0;
      FUN_00a92f90(0,0x3f99999a);
      FUN_00407ab0(uVar3,uVar4);
      if (240.0 < (float)param_1[0x248]) {
        uVar4 = 0x3fb33333;
        uVar3 = 0;
        FUN_00a92f90(0,0x3fb33333);
        FUN_00407ab0(uVar3,uVar4);
      }
      if (360.0 < (float)param_1[0x248]) {
        uVar4 = 0x3fcccccd;
        uVar3 = 0;
        FUN_00a92f90(0,0x3fcccccd);
        FUN_00407ab0(uVar3,uVar4);
      }
    }
    break;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a8c760(0x30);
    if (iVar2 == 0) {
      iVar2 = FUN_00a8c760(0x31);
      if (iVar2 != 0) {
        FUN_00aa4080(0x12,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        param_1[0x187] = param_1[0x187] + 1;
      }
    }
    else {
      FUN_00aa4080(0x13,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      (**(code **)(*param_1 + 0x34c))();
    }
  }
  if (0.0 < (float)param_1[0x248]) {
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
  }
  return;
}

// 0044F210  FUN_0044f210  size=127  [run]
void __fastcall FUN_0044f210(int param_1)

{
  undefined4 uVar1;
  
  if (((*(int *)(param_1 + 0x61c) == 2) && (6.0 < *(float *)(param_1 + 0x1b60))) &&
     (*(int *)(param_1 + 0xdc8) != 0xa0003)) {
    *(undefined4 *)(param_1 + 0xdc8) = 0xa0003;
    uVar1 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xdd4) = uVar1;
    *(undefined4 *)(param_1 + 0xdd8) = *(undefined4 *)(param_1 + 0xdd0);
    FUN_00a8caf0(0xa0003,0,0,0);
    *(undefined4 *)(param_1 + 0xdd0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x12cc) = 0;
  }
  return;
}

// 0044F290  FUN_0044f290  size=307  [run]
void __fastcall FUN_0044f290(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x61c) != 3) {
    return;
  }
  if (*(float *)(param_1 + 0xa90) <= 144.0) {
    *(undefined4 *)(param_1 + 0x61c) = 4;
  }
  fVar1 = *(float *)(param_1 + 0xaa0);
  if (NAN(fVar1) || 1.0471976 < fVar1 == (fVar1 == 1.0471976)) {
    return;
  }
  if (*(float *)(param_1 + 0xa9c) <= 1.0471976) {
    if (2.0943952 < *(float *)(param_1 + 0xa9c)) {
      iVar3 = 0x10008;
      if (*(int *)(param_1 + 0xdc8) == 0x10008) {
        return;
      }
      *(undefined4 *)(param_1 + 0xdc8) = 0x10008;
      uVar2 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xdd4) = uVar2;
      *(undefined4 *)(param_1 + 0xdd8) = *(undefined4 *)(param_1 + 0xdd0);
      goto LAB_0044f399;
    }
    if (*(float *)(param_1 + 0xa9c) < -2.0943952) {
      iVar3 = 0x10007;
      if (*(int *)(param_1 + 0xdc8) == 0x10007) {
        return;
      }
      *(undefined4 *)(param_1 + 0xdc8) = 0x10007;
      uVar2 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xdd4) = uVar2;
      *(undefined4 *)(param_1 + 0xdd8) = *(undefined4 *)(param_1 + 0xdd0);
      goto LAB_0044f399;
    }
    iVar3 = 0x10005;
  }
  else {
    iVar3 = 0x10006;
  }
  if (*(int *)(param_1 + 0xdc8) == iVar3) {
    return;
  }
  *(int *)(param_1 + 0xdc8) = iVar3;
  uVar2 = FUN_00a8cab0();
  *(undefined4 *)(param_1 + 0xdd4) = uVar2;
  *(undefined4 *)(param_1 + 0xdd8) = *(undefined4 *)(param_1 + 0xdd0);
LAB_0044f399:
  FUN_00a8caf0(iVar3,0,0,0);
  *(undefined4 *)(param_1 + 0xdd0) = 0;
  FUN_00a962d0(0,0);
  *(undefined4 *)(param_1 + 0x12cc) = 0;
  return;
}

// 0044F3D0  FUN_0044f3d0  size=971  [run]
void __fastcall FUN_0044f3d0(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar3 = param_1[0x186];
  cVar4 = (iVar3 != 0xa0002) * '\b' + '\v';
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080((iVar3 != 0xa0002) * '\b' + '\b',0,0x3e088889,0x3f800000,0x8000000,0xbf800000,
                 0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x24f] = 0x41f00000;
    param_1[0x248] = 0x43960000;
    if (param_1[0x379] != 0) {
      uVar6 = 0x3fe66666;
      uVar5 = 0;
      FUN_00a92f90(0,0x3fe66666);
      FUN_00407ab0(uVar5,uVar6);
    }
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x6d7] = param_1[0x379];
      return;
    }
    break;
  case 2:
    FUN_00aa4080((iVar3 != 0xa0002) * '\b' + '\t',0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    if (param_1[0x379] != 0) {
      uVar6 = 0x3fe66666;
      uVar5 = 0;
      FUN_00a92f90(0,0x3fe66666);
      FUN_00407ab0(uVar5,uVar6);
    }
    if (param_1[0x2a1] != 0) {
      FUN_00442250(param_1[0x2a1] + 0x40,0x3e19999a,0x3d8efa35);
    }
    param_1[0x248] = 0;
  case 3:
    if ((float)param_1[0x244] * 0.1 * (float)param_1[0x244] * 0.1 <=
        ((float)param_1[0x25a] - (float)param_1[0x16]) *
        ((float)param_1[0x25a] - (float)param_1[0x16]) +
        ((float)param_1[600] - (float)param_1[0x14]) * ((float)param_1[600] - (float)param_1[0x14]))
    {
      param_1[0x24f] = 0x41f00000;
    }
    else {
      fVar1 = (float)param_1[0x24f];
      param_1[0x24f] = (int)(fVar1 - (float)param_1[0x244]);
      if (fVar1 - (float)param_1[0x244] <= 0.0) {
        iVar3 = FUN_00a8cab0();
        param_1[0x375] = iVar3;
        param_1[0x376] = param_1[0x374];
        FUN_00a8caf0(0x10010,0,0,0);
        param_1[0x374] = 0;
        FUN_00a962d0(0,0);
        param_1[0x4b3] = 0;
        param_1[0x6d7] = param_1[0x379];
        return;
      }
    }
    param_1[600] = param_1[0x14];
    param_1[0x259] = param_1[0x15];
    param_1[0x25a] = param_1[0x16];
    param_1[0x25b] = param_1[0x17];
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (param_1[0x2a1] != 0) {
      FUN_00442250(param_1[0x2a1] + 0x40,0x3e19999a,0x3d8efa35);
    }
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] <= 0.0) {
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x6d7] = param_1[0x379];
      return;
    }
    break;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a8c760(0x30);
    if ((iVar2 != 0) ||
       (iVar2 = FUN_00a8c760(0x31), cVar4 = (iVar3 != 0xa0002) * '\b' + '\n', iVar2 != 0)) {
      FUN_00aa4080(cVar4,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
    }
    goto LAB_0044f74b;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_0044f74b:
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      param_1[0x6d7] = param_1[0x379];
      return;
    }
  }
  param_1[0x6d7] = param_1[0x379];
  return;
}

// 0044F7C0  FUN_0044f7c0  size=581  [run]
void __fastcall FUN_0044f7c0(int *param_1)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  undefined4 uVar4;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined1 local_30 [16];
  undefined1 local_20 [28];
  
  if (param_1[0x187] == 0) {
    uVar4 = 0x22;
    FUN_0044ba50(&local_40,param_1[0x13c]);
    local_50 = local_40 - (float)param_1[0x10];
    local_4c = local_3c - (float)param_1[0x11];
    local_48 = local_38 - (float)param_1[0x12];
    local_44 = local_34 - (float)param_1[0x13];
    if (((local_50 != 0.0) || (local_4c != 0.0)) || (local_48 != 0.0)) {
      fVar1 = local_48 * local_48 + local_4c * local_4c + local_50 * local_50;
      if (fVar1 < 0.0 == (fVar1 == 0.0)) {
        FUN_00ddf460(&local_50,&local_50);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        local_50 = 0.0;
        local_4c = 1.0;
        local_48 = 0.0;
      }
    }
    pfVar2 = (float *)FUN_00a92640(local_30);
    if (pfVar2[2] * local_48 + *pfVar2 * local_50 + pfVar2[1] * local_4c <= 0.25) {
      pfVar2 = (float *)FUN_00a92640(local_20);
      if (0.25 < pfVar2[2] * -1.0 * local_48 +
                 pfVar2[1] * -1.0 * local_4c + *pfVar2 * -1.0 * local_50) {
        uVar4 = 0x24;
      }
    }
    else {
      uVar4 = 0x23;
    }
    FUN_00aa4080(uVar4,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) goto LAB_0044f9ba;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
LAB_0044f9ba:
  if ((float)param_1[0x2a8] <= 1.0471976) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3db2b8c2,0);
  }
  return;
}

// 0044FA10  FUN_0044fa10  size=511  [run]
void __fastcall FUN_0044fa10(int *param_1)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  undefined4 uVar4;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined1 local_20 [28];
  
  if (param_1[0x187] == 0) {
    uVar4 = 0x16;
    FUN_0044ba50(&local_30,param_1[0x13c]);
    local_40 = local_30 - (float)param_1[0x10];
    local_3c = local_2c - (float)param_1[0x11];
    local_38 = local_28 - (float)param_1[0x12];
    local_34 = local_24 - (float)param_1[0x13];
    if (((local_40 != 0.0) || (local_3c != 0.0)) || (local_38 != 0.0)) {
      fVar1 = local_38 * local_38 + local_3c * local_3c + local_40 * local_40;
      if (fVar1 < 0.0 == (fVar1 == 0.0)) {
        FUN_00ddf460(&local_40,&local_40);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        local_40 = 0.0;
        local_3c = 1.0;
        local_38 = 0.0;
      }
    }
    pfVar2 = (float *)FUN_00a92640(local_20);
    if (0.25 < pfVar2[2] * -1.0 * local_38 + pfVar2[1] * -1.0 * local_3c + *pfVar2 * -1.0 * local_40
       ) {
      uVar4 = 0x17;
    }
    FUN_00aa4080(uVar4,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) goto LAB_0044fbca;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
LAB_0044fbca:
  iVar3 = FUN_00a8c760(0);
  if (iVar3 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3e0efa35,0);
  }
  return;
}

// 0044FC10  FUN_0044fc10  size=107  [run]
undefined4 * __thiscall FUN_0044fc10(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  uVar2 = *(uint *)(param_1 + 8);
  iVar3 = *(int *)(param_1 + 4);
  puVar4 = (undefined4 *)(uVar2 * 0x10 + iVar3);
  if ((((param_2 != puVar4) && (iVar3 != 0)) && (uVar2 != 0)) &&
     ((uint)((int)param_2 - iVar3 >> 4) < uVar2)) {
    if (param_2 != puVar4 + -4) {
      puVar5 = param_2 + 6;
      do {
        FUN_00a7c960(puVar5 + -2);
        puVar5[-5] = puVar5[-1];
        puVar5[-4] = *puVar5;
        puVar5[-3] = puVar5[1];
        puVar1 = puVar5 + -2;
        puVar5 = puVar5 + 4;
      } while (puVar1 != puVar4 + -4);
    }
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
    puVar4 = param_2;
  }
  return puVar4;
}

// 0044FCC0  FUN_0044fcc0  size=43  [run]
void FUN_0044fcc0(int param_1,int param_2)

{
  if (param_1 != 0) {
    FUN_00a7c940(param_2);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  }
  return;
}

// 0044FD10  FUN_0044fd10  size=67  [run]
void __thiscall FUN_0044fd10(int param_1,undefined4 *param_2)

{
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  FUN_00e332b0(&local_40,*(undefined4 *)(param_1 + 0xa0));
  *param_2 = local_40;
  param_2[1] = local_3c;
  param_2[2] = local_38;
  param_2[3] = local_34;
  return;
}

// 0044FD60  FUN_0044fd60  size=133  [run]
int __thiscall
FUN_0044fd60(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,short param_6,short param_7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_90 [35];
  
  FUN_0040b190();
  local_90[0] = param_5;
  iVar1 = FUN_00a82090(param_3,param_4,local_90);
  if (iVar1 != 0) {
    if (param_6 != 0xfff) {
      FUN_00a8c5f0(param_2,*(undefined4 *)(param_1 + 0x4f0),iVar1,(int)param_6,(int)param_7);
    }
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
  }
  return iVar1;
}

// 0044FDF0  FUN_0044fdf0  size=127  [run]
void __fastcall FUN_0044fdf0(int param_1)

{
  undefined4 uVar1;
  
  if (((*(int *)(param_1 + 0x61c) == 2) && (60.0 < *(float *)(param_1 + 0x1b60))) &&
     (*(int *)(param_1 + 0xdc8) != 0x10003)) {
    *(undefined4 *)(param_1 + 0xdc8) = 0x10003;
    uVar1 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xdd4) = uVar1;
    *(undefined4 *)(param_1 + 0xdd8) = *(undefined4 *)(param_1 + 0xdd0);
    FUN_00a8caf0(0x10003,0,0,0);
    *(undefined4 *)(param_1 + 0xdd0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x12cc) = 0;
  }
  return;
}

// 0044FE70  FUN_0044fe70  size=264  [run]
void __fastcall FUN_0044fe70(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_40 [4];
  float local_3c;
  
  *(byte *)(param_1 + 0xdb4) = *(byte *)(param_1 + 0xdb4) | 8;
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x75,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_004445a0();
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    uVar2 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xdd4) = uVar2;
    *(undefined4 *)(param_1 + 0xdd8) = *(undefined4 *)(param_1 + 0xdd0);
    FUN_00a8caf0(0x6000d,0,0,0);
    *(undefined4 *)(param_1 + 0xdd0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x12cc) = 0;
  }
  iVar1 = FUN_00a92f90();
  FUN_00e332b0(local_40,*(undefined4 *)(iVar1 + 0xa0));
  *(float *)(param_1 + 0x894) = local_3c * 0.016666668 * 0.8;
  return;
}

// 0044FF80  FUN_0044ff80  size=270  [run]
/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_0044ff80(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_8 [2];
  
  *(byte *)(param_1 + 0xdb4) = *(byte *)(param_1 + 0xdb4) | 8;
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x80,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  local_8[0] = 0;
  local_8[1] = 0;
  if (*(int *)(param_1 + 0x1ac4) == 0) {
    iVar1 = FUN_00ac8120();
    if (iVar1 == 0) goto LAB_00450045;
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_00ac8120();
    if (iVar1 == 0) goto LAB_00450045;
    uVar2 = 0x40a00000;
  }
  FUN_00bc3c20(param_1 + 0x40,local_8,local_8 + 1,uVar2);
LAB_00450045:
  if (local_8[0] == 0) {
    uVar2 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xdd4) = uVar2;
    *(undefined4 *)(param_1 + 0xdd8) = *(undefined4 *)(param_1 + 0xdd0);
    FUN_00a8caf0(0x60016,0,0,0);
    *(undefined4 *)(param_1 + 0xdd0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x12cc) = 0;
  }
  return;
}

// 00450090  FUN_00450090  size=173  [run]
void __fastcall FUN_00450090(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  
  if (((2 < *(int *)(param_1 + 0x61c)) && (*(int *)(param_1 + 0x61c) < 4)) &&
     (*(float *)(param_1 + 0xa90) < 25.0)) {
    *(undefined4 *)(param_1 + 0xdcc) = 0;
    uVar2 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xdd4) = uVar2;
    *(undefined4 *)(param_1 + 0xdd8) = *(undefined4 *)(param_1 + 0xdd0);
    FUN_00a8caf0(0x10003,4,0,0);
    *(undefined4 *)(param_1 + 0xdd0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x12cc) = 0;
    sVar1 = FUN_00dde2d0(0,1);
    if (sVar1 != 0) {
      FUN_00448640();
    }
    if (*(int *)(param_1 + 0x764) != 0) {
      FUN_008e5ac0(2);
    }
  }
  return;
}

// 00450140  FUN_00450140  size=74  [run]
void FUN_00450140(void)

{
  int iVar1;
  undefined4 local_90 [35];
  
  FUN_0040b190();
  local_90[0] = 3;
  iVar1 = FUN_00a82090("Em0040",0x20040,local_90);
  if (iVar1 != 0) {
    FUN_00448270(iVar1);
  }
  return;
}

// 004502C0  FUN_004502c0  size=147  [run]
undefined4 __fastcall FUN_004502c0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00ac4780();
  if ((2 < iVar1) ||
     ((4 < *(byte *)(param_1 + 0xdae) &&
      ((*(int *)(param_1 + 0xdb0) == 2 || (*(int *)(param_1 + 0xdb0) == -1)))))) {
    iVar1 = FUN_0044ce70(*(undefined4 *)(param_1 + 0x19fc));
    if (iVar1 != 0) {
      uVar2 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xdd4) = uVar2;
      *(undefined4 *)(param_1 + 0xdd8) = *(undefined4 *)(param_1 + 0xdd0);
      FUN_00a8caf0(0x5000c,0,0,0);
      *(undefined4 *)(param_1 + 0xdd0) = 0;
      FUN_00a962d0(0,0);
      *(undefined4 *)(param_1 + 0x12cc) = 0;
      return 1;
    }
  }
  return 0;
}

// 00450360  FUN_00450360  size=147  [run]
undefined4 __fastcall FUN_00450360(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00ac4780();
  if ((2 < iVar1) ||
     ((4 < *(byte *)(param_1 + 0xdae) &&
      ((*(int *)(param_1 + 0xdb0) == 2 || (*(int *)(param_1 + 0xdb0) == -1)))))) {
    iVar1 = FUN_0044ce70(*(undefined4 *)(param_1 + 0x19fc));
    if (iVar1 != 0) {
      uVar2 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xdd4) = uVar2;
      *(undefined4 *)(param_1 + 0xdd8) = *(undefined4 *)(param_1 + 0xdd0);
      FUN_00a8caf0(0x5000d,0,0,0);
      *(undefined4 *)(param_1 + 0xdd0) = 0;
      FUN_00a962d0(0,0);
      *(undefined4 *)(param_1 + 0x12cc) = 0;
      return 1;
    }
  }
  return 0;
}

// 00450400  FUN_00450400  size=296  [run]
void __fastcall FUN_00450400(int param_1)

{
  int iVar1;
  undefined1 auStack_2c [12];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  switch(*(undefined1 *)(param_1 + 0x1ab4)) {
  case 1:
    iVar1 = FUN_004488e0();
    local_20 = 0;
    local_1c = 0;
    local_18 = 0xc0400000;
    *(uint *)(param_1 + 0x1aa4) = (uint)(iVar1 == 0);
    D3DXVec3TransformNormal(&local_20,&local_20,param_1 + 0x10);
    FUN_00448870(auStack_2c);
    *(char *)(param_1 + 0x1ab4) = *(char *)(param_1 + 0x1ab4) + '\x01';
    return;
  case 2:
    iVar1 = FUN_004488e0();
    local_20 = 0xc0400000;
    local_1c = 0;
    local_18 = 0;
    *(uint *)(param_1 + 0x1aa8) = (uint)(iVar1 == 0);
    D3DXVec3TransformNormal(&local_20,&local_20,param_1 + 0x10);
    FUN_00448870(auStack_2c);
    *(char *)(param_1 + 0x1ab4) = *(char *)(param_1 + 0x1ab4) + '\x01';
    return;
  case 3:
    iVar1 = FUN_004488e0();
    *(uint *)(param_1 + 0x1aac) = (uint)(iVar1 == 0);
  case 0:
    local_20 = 0x40400000;
    local_1c = 0;
    local_18 = 0;
    D3DXVec3TransformNormal(&local_20,&local_20,param_1 + 0x10);
    FUN_00448870(auStack_2c);
    *(char *)(param_1 + 0x1ab4) = *(char *)(param_1 + 0x1ab4) + '\x01';
    return;
  case 4:
    iVar1 = FUN_004488e0();
    *(uint *)(param_1 + 0x1ab0) = (uint)(iVar1 == 0);
    *(undefined1 *)(param_1 + 0x1ab4) = 0;
  default:
    return;
  }
}

