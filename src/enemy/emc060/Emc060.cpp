// src/enemy/emc060/Emc060.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00776EE0..00AB9E30, 310 functions

#include "types.h"

// 00776EE0  Emc060::vf14C  size=43  [class]
bool Emc060::vf14C(int param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_00a7c8a0();
  }
  if (param_1 == 0x40) {
    return true;
  }
  return param_1 == 0x41;
}

// 00776F10  Emc060::vf158  size=5  [class]
undefined4 Emc060::vf158(void)

{
  return 0;
}

// 00776F20  Emc060::vf184  size=6  [class]
undefined4 Emc060::vf184(void)

{
  return 0xffffffff;
}

// 00776F30  Emc060::vf188  size=43  [class]
void Emc060::vf188(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 != 0) {
    FUN_00a7c950();
    uVar1 = FUN_00a7c7f0();
    FUN_00a7c960(uVar1);
  }
  return;
}

// 00776F60  Emc060::vf2F8  size=46  [class]
void __fastcall Emc060::vf2F8(int *param_1)

{
  if (param_1[0x294] != 0) {
    (**(code **)(*param_1 + 0x344))(5,0,1);
    param_1[0x1af] = 1;
  }
  FUN_009fdde0();
  return;
}

// 00776F90  Emc060::vf368  size=12  [class]
bool __fastcall Emc060::vf368(int param_1)

{
  return *(int *)(param_1 + 0x1c38) != 0;
}

// 00776FC0  FUN_00776fc0  size=153  [between]
void __fastcall FUN_00776fc0(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x95,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a8c760(10);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x358))(0,param_1 + 1000);
  }
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00777057. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00777060  FUN_00777060  size=177  [between]
void __fastcall FUN_00777060(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(5,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
    *(undefined4 *)(param_1 + 0x920) = 0x42f00000;
    uVar1 = *(undefined4 *)(param_1 + 0x1ab8 + *(int *)(param_1 + 0xeb4) * 4);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x924) = uVar1;
    *(undefined4 *)(param_1 + 0x1b50) = 0;
    *(undefined4 *)(param_1 + 0x1b54) = 0;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) goto LAB_007770ee;
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_007770ee:
  if (0.0 < *(float *)(param_1 + 0x920)) {
    *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
  }
  return;
}

// 00777130  FUN_00777130  size=171  [between]
void __fastcall FUN_00777130(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0xd,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) goto LAB_007771a7;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
LAB_007771a7:
  (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3db2b8c2,0);
  return;
}

// 007771E0  FUN_007771e0  size=26  [between]
void FUN_007771e0(void)

{
  int iVar1;
  
  iVar1 = FUN_00a8c760(4);
  if (iVar1 != 0) {
    FUN_00dde2d0(0,3);
  }
  return;
}

// 00777220  FUN_00777220  size=231  [between]
void __fastcall FUN_00777220(int *param_1)

{
  float fVar1;
  int iVar2;
  
  iVar2 = param_1[0x187];
  if (iVar2 == 0) {
    if (0.0 < (float)param_1[0x6d7]) {
      FUN_00aa4080(5,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (iVar2 != 1) {
    if (iVar2 != 2) {
      return;
    }
    goto LAB_007772d8;
  }
  fVar1 = (float)param_1[0x6d7];
  param_1[0x6d7] = (int)(fVar1 - (float)param_1[0x244]);
  if (0.0 < fVar1 - (float)param_1[0x244]) {
    return;
  }
  FUN_00aa4080(0x2b,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  param_1[0x187] = param_1[0x187] + 1;
LAB_007772d8:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00777305. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00777350  FUN_00777350  size=93  [between]
void __fastcall FUN_00777350(int param_1)

{
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x1e,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00777410  FUN_00777410  size=170  [between]
void __fastcall FUN_00777410(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x27,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    pcVar1 = *(code **)(*param_1 + 0x308);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar1)(0x3f800000,0x393702d3,0x40490fdb,0);
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x007774b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 007774E0  FUN_007774e0  size=153  [between]
void __fastcall FUN_007774e0(int *param_1)

{
  char cVar1;
  int iVar2;
  
  if (param_1[0x187] == 0) {
    if (param_1[0x6e0] == 0) {
      cVar1 = (param_1[0x6df] == 0) * '\x04' + '#';
    }
    else {
      cVar1 = '$';
    }
    FUN_00aa4080(cVar1,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00777577. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 007775B0  FUN_007775b0  size=130  [between]
void __fastcall FUN_007775b0(int *param_1)

{
  int iVar1;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x8d,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00777630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00777660  FUN_00777660  size=114  [between]
void __fastcall FUN_00777660(int param_1)

{
  undefined4 uVar1;
  
  *(byte *)(param_1 + 0xdb4) = *(byte *)(param_1 + 0xdb4) | 8;
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar1 = 0;
    if (*(int *)(param_1 + 0x1bf0) != 0) {
      uVar1 = 0x40;
    }
    FUN_00aa4080(0x76,0,0x3d088889,0x3f800000,uVar1,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00777720  FUN_00777720  size=114  [between]
void __fastcall FUN_00777720(int param_1)

{
  undefined4 uVar1;
  
  *(byte *)(param_1 + 0xdb4) = *(byte *)(param_1 + 0xdb4) | 8;
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar1 = 0;
    if (*(int *)(param_1 + 0x1bf0) != 0) {
      uVar1 = 0x40;
    }
    FUN_00aa4080(0x7c,0,0x3d088889,0x3f800000,uVar1,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00777830  FUN_00777830  size=814  [between]
void __fastcall FUN_00777830(int *param_1)

{
  float fVar1;
  code *UNRECOVERED_JUMPTABLE;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x10,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    if (param_1[0x1d9] != 0) {
      FUN_008e59c0(2);
    }
    param_1[0x187] = param_1[0x187] + 1;
    if (param_1[0x3ad] != 0) {
      uVar4 = 0x3fe66666;
      uVar3 = 0;
      FUN_00a92f90(0,0x3fe66666);
      FUN_00407ab0(uVar3,uVar4);
    }
    param_1[0x3a7] = 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    FUN_00aa4080(0x11,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    if (param_1[0x3ad] != 0) {
      uVar4 = 0x3fe66666;
      uVar3 = 0;
      FUN_00a92f90(0,0x3fe66666);
      FUN_00407ab0(uVar3,uVar4);
    }
    param_1[0x248] = 0;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (param_1[0x2a1] != 0) {
      (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
    }
    fVar1 = (float)param_1[0x5e0];
    if (!NAN(fVar1) && 360.0 < fVar1 != (fVar1 == 360.0)) {
      (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
    }
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)((float)param_1[0x244] + fVar1);
    if ((120.0 < (float)param_1[0x244] + fVar1) && (param_1[0x3ad] == 0)) {
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
        return;
      }
    }
    break;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a8c760(0x30);
    if (iVar2 != 0) {
      FUN_00aa4080(0x13,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    iVar2 = FUN_00a8c760(0x31);
    if (iVar2 != 0) {
      FUN_00aa4080(0x12,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x34c);
      param_1[0x3a7] = 0;
                    /* WARNING: Could not recover jumptable at 0x00777b5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}

// 00777B90  FUN_00777b90  size=239  [between]
void __fastcall FUN_00777b90(int *param_1)

{
  int iVar1;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x94,0,0,0x3f800000,0,0xbf800000,0);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x714] = param_1[0x10];
    param_1[0x715] = param_1[0x11];
    param_1[0x716] = param_1[0x12];
    param_1[0x717] = param_1[0x13];
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_008e4580(param_1 + 0x10,1);
    FUN_008e3c10();
    iVar1 = (**(code **)(*param_1 + 0x84))();
    uStack_1c = *(undefined4 *)(iVar1 + 4);
    uStack_20 = 0x3eb2b8c2;
    uStack_18 = 0;
    (**(code **)(*param_1 + 0x88))(&uStack_20);
  }
  (**(code **)(*param_1 + 0x220))(0x40a00000);
  return;
}

// 00777C90  Emc060::vf208  size=36  [class]
void __thiscall Emc060::vf208(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x40);
  param_2[2] = *(undefined4 *)(param_1 + 0x48);
  param_2[3] = *(undefined4 *)(param_1 + 0x4c);
  param_2[1] = *(float *)(param_1 + 0x44) + 1.5;
  return;
}

// 00777CC0  Emc060::vf6C  size=5  [class]
void __fastcall Emc060::vf6C(int param_1)

{
  if (*(int *)(param_1 + 0x4f0) != 0) {
    FUN_00a7ce90();
    return;
  }
  return;
}

// 00777CD0  Emc060::thunk_vf70  size=5  [class]
void __fastcall Emc060::thunk_vf70(int param_1)

{
  if (*(int *)(param_1 + 0x4f0) != 0) {
    FUN_00a7cec0();
    return;
  }
  return;
}

// 00777CE0  FUN_00777ce0  size=130  [between]
void __thiscall
FUN_00777ce0(int param_1,uint param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined4 uVar1;
  
  if ((param_2 & 0xffff0000) != 0x80000) {
    uVar1 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xea4) = uVar1;
    *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
  }
  FUN_00a8caf0(param_2,param_4,param_5,param_6);
  *(int *)(param_1 + 0xea0) = param_3;
  if (param_3 < 0) {
    FUN_00a962d0(1,0);
    *(undefined4 *)(param_1 + 0x139c) = 0x40;
    return;
  }
  FUN_00a962d0(0,0);
  *(undefined4 *)(param_1 + 0x139c) = 0;
  return;
}

// 00777D70  Emc060::vf34C  size=98  [class]
void __fastcall Emc060::vf34C(int *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  
  iVar1 = FUN_00a8cab0();
  param_1[0x3a9] = iVar1;
  param_1[0x3aa] = param_1[0x3a8];
  FUN_00a8caf0(0x10000,0,0,0);
  param_1[0x3a8] = 0;
  FUN_00a962d0(0,0);
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x314);
  param_1[0x4e7] = 0;
  param_1[0x3a7] = 0;
                    /* WARNING: Could not recover jumptable at 0x00777dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

// 00777DE0  FUN_00777de0  size=30  [between]
void FUN_00777de0(void)

{
  FUN_00eaa6e0(0x41200000,0);
  return;
}

// 00777E00  FUN_00777e00  size=20  [between]
void __fastcall FUN_00777e00(int param_1)

{
  FUN_00a8d280();
  *(undefined4 *)(param_1 + 0x1768) = 0;
  return;
}

// 00777E20  Emc060::thunk_vf358  size=5  [class]
void __thiscall Emc060::thunk_vf358(int *param_1,undefined4 param_2,int param_3)

{
  undefined1 auStack_164 [4];
  undefined1 auStack_160 [348];
  
  FUN_004039a0(param_2,param_1,0);
  (**(code **)(*param_1 + 0x360))(auStack_160);
  if (param_3 != 0) {
    FUN_00dffb20(param_3);
  }
  FUN_00a8c8b0(param_1[300],auStack_164);
  return;
}

// 00777F60  Emc060::vf268  size=81  [class]
undefined4 __thiscall Emc060::vf268(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  
  if (*param_4 == 9) {
    iVar1 = FUN_00a8cbe0(0x8002d);
    if (iVar1 != 0) {
      FUN_00a8caf0(0x8002e,0,0,0);
      *(undefined4 *)(param_1 + 0xea0) = 0;
      FUN_00a962d0(0,0);
      *(undefined4 *)(param_1 + 0x139c) = 0;
    }
  }
  return 0;
}

// 00777FC0  Emc060::vf2C  size=51  [class]
void Emc060::vf2C(void)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
    FUN_00a7c950();
    FUN_0075e4f0();
    return;
  }
  return;
}

// 00778000  FUN_00778000  size=35  [between]
bool __fastcall FUN_00778000(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00fdbc60();
  return *(int *)(param_1 + 0x870) <= iVar1;
}

// 00778030  FUN_00778030  size=407  [between]
void __fastcall FUN_00778030(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  float10 fVar3;
  
  *(undefined4 *)(param_1 + 0x193c) = 0;
  *(undefined4 *)(param_1 + 0x1938) = 0;
  if ((*(int *)(param_1 + 0x330) != 0) && (*(int *)(*(int *)(param_1 + 0x330) + 0xcc) == 0)) {
    puVar1 = (undefined4 *)(param_1 + 0x18d4);
    iVar2 = 9;
    do {
      puVar1[-2] = 1;
      *puVar1 = 0;
      puVar1 = puVar1 + 3;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(0xf);
    *(float *)(param_1 + 0x18d0) = (float)fVar3;
    fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x3c))(0xf);
    *(float *)(param_1 + 0x18dc) = (float)fVar3;
    fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x44))(0xf);
    *(float *)(param_1 + 0x18e8) = (float)fVar3;
    fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(0x10);
    *(float *)(param_1 + 0x18f4) = (float)fVar3;
    fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x3c))(0x10);
    *(float *)(param_1 + 0x1900) = (float)fVar3;
    fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x44))(0x10);
    *(float *)(param_1 + 0x190c) = (float)fVar3;
    fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(0x11);
    *(float *)(param_1 + 0x1918) = (float)fVar3;
    fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x3c))(0x11);
    *(float *)(param_1 + 0x1924) = (float)fVar3;
    fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x44))(0x11);
    *(float *)(param_1 + 0x1930) = (float)fVar3;
    return;
  }
  puVar1 = (undefined4 *)(param_1 + 0x18d4);
  iVar2 = 9;
  do {
    puVar1[-1] = 0;
    puVar1[-2] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 3;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_00ac9300("head_armor");
  FUN_00ac9300("neck_armor_a");
  FUN_00ac9300("neck_armor_b");
  FUN_00ac9300("leg_am_a_l");
  FUN_00ac9300("leg_am_b_l");
  FUN_00ac9300("leg_am_c_l");
  FUN_00ac9300("leg_am_a_r");
  FUN_00ac9300("leg_am_b_r");
  FUN_00ac9300("leg_am_c_r");
  return;
}

// 00778240  FUN_00778240  size=419  [between]
void __fastcall FUN_00778240(int param_1)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  char *_Dst;
  
  _Dst = (char *)(param_1 + 0x1948);
  _strcpy_s(_Dst,7,"_EFD02");
  _strcpy_s((char *)(param_1 + 0x1958),7,"_EFD01");
  _strcpy_s((char *)(param_1 + 0x1968),7,"_EFD05");
  _strcpy_s((char *)(param_1 + 0x1978),7,"_EFD03");
  _strcpy_s((char *)(param_1 + 0x1988),7,"_EFD06");
  _strcpy_s((char *)(param_1 + 0x1998),7,"_EFD04");
  if ((*(int *)(param_1 + 0x330) != 0) && (*(int *)(*(int *)(param_1 + 0x330) + 0xcc) == 0)) {
    puVar3 = (undefined4 *)(param_1 + 0x1944);
    iVar5 = 6;
    do {
      *puVar3 = 0;
      puVar3[-1] = 0;
      puVar3 = puVar3 + 4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    fVar8 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(0x12);
    *(float *)(param_1 + 0x1944) = (float)fVar8;
    fVar8 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(0x13);
    *(float *)(param_1 + 0x1954) = (float)fVar8;
    fVar8 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(0x14);
    *(float *)(param_1 + 0x1964) = (float)fVar8;
    fVar8 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(0x15);
    *(float *)(param_1 + 0x1974) = (float)fVar8;
    iVar5 = 6;
    do {
      iVar7 = 0;
      if (0 < *(short *)(param_1 + 0x324)) {
        iVar6 = 0;
        do {
          iVar2 = *(int *)(param_1 + 800);
          iVar4 = *(int *)(*(int *)(iVar2 + 0x60 + iVar6) + 0x40);
          if (iVar4 != 0) {
            iVar4 = FUN_00fdbbd0(iVar4,_Dst);
            if (iVar4 != 0) {
              puVar1 = (uint *)(iVar2 + 0x38 + iVar6);
              *puVar1 = *puVar1 & 0xfffffffe;
            }
          }
          iVar7 = iVar7 + 1;
          iVar6 = iVar6 + 0x70;
        } while (iVar7 < *(short *)(param_1 + 0x324));
      }
      _Dst = _Dst + 0x10;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    *(undefined4 *)(param_1 + 0x19a0) = 0;
    return;
  }
  puVar3 = (undefined4 *)(param_1 + 0x1944);
  iVar5 = 6;
  do {
    *puVar3 = 0;
    puVar3[-1] = 1;
    puVar3 = puVar3 + 4;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  *(undefined4 *)(param_1 + 0x19a0) = 1;
  return;
}

// 007784C0  FUN_007784c0  size=53  [between]
void __fastcall FUN_007784c0(int *param_1)

{
  (**(code **)(*param_1 + 0x358))(0x193,param_1 + 0x3b8);
  param_1[0x3e4] = 1;
  FUN_00ac9420(param_1 + 0x652);
  return;
}

// 00778500  FUN_00778500  size=53  [between]
void __fastcall FUN_00778500(int *param_1)

{
  (**(code **)(*param_1 + 0x358))(400,param_1 + 0x3b8);
  param_1[0x3e5] = 1;
  FUN_00ac9420(param_1 + 0x656);
  return;
}

// 00778540  FUN_00778540  size=77  [between]
void __fastcall FUN_00778540(int *param_1)

{
  (**(code **)(*param_1 + 0x358))(0x191,param_1 + 0x3b8);
  param_1[0x3e6] = 1;
  FUN_00ac9420(param_1 + 0x65a);
  param_1[0x660] = 1;
  FUN_00ac9420(param_1 + 0x662);
  return;
}

// 00778590  FUN_00778590  size=77  [between]
void __fastcall FUN_00778590(int *param_1)

{
  (**(code **)(*param_1 + 0x358))(0x192,param_1 + 0x3b8);
  param_1[999] = 1;
  FUN_00ac9420(param_1 + 0x65e);
  param_1[0x664] = 1;
  FUN_00ac9420(param_1 + 0x666);
  return;
}

// 007785E0  FUN_007785e0  size=206  [between]
undefined4 __fastcall FUN_007785e0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_4;
  
  if ((*(int *)(param_1 + 0x1424) != 0) && (*(int *)(*(int *)(param_1 + 0x1424) + 0xb4c) != 0)) {
    return 1;
  }
  local_4 = 0;
  iVar3 = param_1 + 0x1948;
  do {
    iVar1 = FUN_00ac89d0();
    if (iVar1 == 0) {
      iVar1 = param_1;
    }
    iVar5 = 0;
    if (0 < *(short *)(iVar1 + 0x324)) {
      iVar4 = 0;
      do {
        iVar2 = *(int *)(*(int *)(*(int *)(iVar1 + 800) + 0x60 + iVar4) + 0x40);
        if ((iVar2 != 0) && (iVar2 = FUN_00fdbbd0(iVar2,iVar3), iVar2 != 0)) {
          if ((iVar5 != -1) &&
             ((iVar1 = iVar5 * 0x70 + *(int *)(iVar1 + 800), iVar1 != 0 &&
              ((*(byte *)(iVar1 + 0x38) & 1) != 0)))) {
            return 1;
          }
          break;
        }
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + 0x70;
      } while (iVar5 < *(short *)(iVar1 + 0x324));
    }
    local_4 = local_4 + 1;
    iVar3 = iVar3 + 0x10;
    if (5 < local_4) {
      return 0;
    }
  } while( true );
}

// 007786F0  FUN_007786f0  size=206  [between]
void __fastcall FUN_007786f0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar2 = 0;
  *(undefined4 *)(param_1 + 0x78c) = 0;
  local_30 = 0x6000a;
  local_2c = 0x8000c;
  local_28 = 0x9000d;
  local_24 = 0x1000200;
  local_20 = 0xe0015;
  local_1c = 0xf0016;
  local_18 = 0x100017;
  local_14 = 0x110018;
  local_10 = 0x120019;
  local_c = 0x13001a;
  local_8 = 0x14001b;
  local_4 = 0x1d001f;
  uVar1 = FUN_00dd3580(0x30,&DAT_01b7bd48);
  *(undefined4 *)(param_1 + 0x788) = uVar1;
  do {
    FUN_00a8c720(*(undefined2 *)(&local_30 + iVar2),*(undefined2 *)((int)&local_30 + iVar2 * 4 + 2))
    ;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0xc);
  FUN_00a95e20(*(undefined4 *)(param_1 + 0x788),*(undefined4 *)(param_1 + 0x78c));
  return;
}

// 007787D0  Emc060::vf110  size=204  [class]
void __thiscall Emc060::vf110(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  Bh0064::vf110(param_2);
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x110))(param_2);
    }
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x110))(param_2);
    }
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x110))(param_2);
    }
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x110))(param_2);
    }
  }
  if (param_2 != 0) {
    *(uint *)(param_1 + 0x143c) = *(uint *)(param_1 + 0x143c) | 0x1000000;
    return;
  }
  *(uint *)(param_1 + 0x143c) = *(uint *)(param_1 + 0x143c) & 0xfeffffff;
  return;
}

// 007788A0  FUN_007788a0  size=145  [between]
void __fastcall FUN_007788a0(int param_1)

{
  undefined4 uVar1;
  float10 fVar2;
  
  *(undefined4 *)(param_1 + 0xebc) = 0;
  fVar2 = (float10)FUN_00dde300(0,0x3f800000);
  *(float *)(param_1 + 0xec0) =
       (float)(((float10)1 - fVar2) * (float10)*(float *)(param_1 + 0x19c4) +
               (float10)*(float *)(param_1 + 0x19c8) * fVar2 + (float10)*(float *)(param_1 + 0x19c0)
              );
  uVar1 = FUN_00a8cab0();
  *(undefined4 *)(param_1 + 0xea4) = uVar1;
  *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
  FUN_00a8caf0(0x1000a,0,0,0);
  *(undefined4 *)(param_1 + 0xea0) = 0;
  FUN_00a962d0(0,0);
  *(undefined4 *)(param_1 + 0x139c) = 0;
  return;
}

// 00778940  FUN_00778940  size=163  [between]
void __fastcall FUN_00778940(int *param_1)

{
  float10 fVar1;
  
  param_1[0x3ad] = 1;
  param_1[0x3af] = 0;
  fVar1 = (float10)FUN_00dde300(0,0x3f800000);
  param_1[0x3b0] =
       (int)(float)(((float10)1 - fVar1) * (float10)(float)param_1[0x671] +
                    (float10)(float)param_1[0x672] * fVar1 + (float10)(float)param_1[0x670]);
  FUN_00eaa6e0(0x41200000,0);
  (**(code **)(*param_1 + 0x358))(0xc9,param_1 + 0x414);
  (**(code **)(*param_1 + 0x358))(9,param_1 + 0x414);
  param_1[0x3b0] = param_1[0x670];
  return;
}

// 00778A20  FUN_00778a20  size=98  [between]
void __fastcall FUN_00778a20(int param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0xec0) = *(undefined4 *)(param_1 + 0x19c0);
  *(undefined4 *)(param_1 + 0xeb4) = 0;
  *(undefined4 *)(param_1 + 0xebc) = 0;
  *(undefined4 *)(param_1 + 0x19b8) = 0;
  uVar1 = FUN_00a8cab0();
  *(undefined4 *)(param_1 + 0xea4) = uVar1;
  *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
  FUN_00a8caf0(0x1000c,0,0,0);
  *(undefined4 *)(param_1 + 0xea0) = 0;
  FUN_00a962d0(0,0);
  *(undefined4 *)(param_1 + 0x139c) = 0;
  return;
}

// 00778AD0  FUN_00778ad0  size=204  [between]
undefined4 __thiscall FUN_00778ad0(int param_1,undefined4 *param_2)

{
  short sVar1;
  undefined4 uVar2;
  
  sVar1 = FUN_00dde2d0(0,2);
  uVar2 = 1;
  if (sVar1 == 0) {
    if (*(int *)(param_1 + 0x1b7c) == 1) {
LAB_00778af5:
      *param_2 = 0x1000d;
      return uVar2;
    }
    if (*(int *)(param_1 + 0x1b80) == 1) {
      *param_2 = 0x1000e;
      return uVar2;
    }
    if (*(int *)(param_1 + 0x1b78) == 1) {
      *param_2 = 0x1000f;
      return uVar2;
    }
  }
  else if (sVar1 == 1) {
    if (*(int *)(param_1 + 0x1b78) == 1) {
LAB_00778b3b:
      *param_2 = 0x1000f;
      return uVar2;
    }
    if (*(int *)(param_1 + 0x1b80) == 1) {
LAB_00778b51:
      *param_2 = 0x1000e;
      return uVar2;
    }
    if (*(int *)(param_1 + 0x1b7c) == 1) {
      *param_2 = 0x1000d;
      return uVar2;
    }
  }
  else if (sVar1 == 2) {
    if (*(int *)(param_1 + 0x1b80) == 1) goto LAB_00778b51;
    if (*(int *)(param_1 + 0x1b78) == 1) goto LAB_00778b3b;
    if (*(int *)(param_1 + 0x1b7c) == 1) goto LAB_00778af5;
  }
  return 0;
}

// 00778BA0  Emc060::vf2D4  size=3  [class]
undefined4 Emc060::vf2D4(void)

{
  return 0;
}

// 00778C30  FUN_00778c30  size=1344  [between]
undefined4 __fastcall FUN_00778c30(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cbe0(0x8002c);
  if (iVar1 == 0) {
    iVar1 = FUN_00a8cbe0(0x8002e);
    if (iVar1 == 0) {
      iVar1 = FUN_00a8cbe0(0x8002d);
      if (((iVar1 == 0) && (*(int *)(param_1 + 0x1bf4) != 0)) && (*(int *)(param_1 + 0x1bf8) == 0))
      {
        iVar1 = FUN_00a8cbe0(0x80000);
        if (iVar1 == 0) {
          iVar1 = FUN_00a8cbe0(0x8000e);
          if (iVar1 == 0) {
            iVar1 = FUN_00a8cbe0(0x8002a);
            if (iVar1 == 0) {
              iVar1 = FUN_00a8cbe0(0x50018);
              if (iVar1 == 0) {
                iVar1 = FUN_00a8cbe0(0x60000);
                if (iVar1 == 0) {
                  iVar1 = FUN_00a8cbe0(0x60001);
                  if (iVar1 == 0) {
                    iVar1 = FUN_00a8cbe0(0x60002);
                    if (iVar1 == 0) {
                      iVar1 = FUN_00a8cbe0(0x60003);
                      if (iVar1 == 0) {
                        iVar1 = FUN_00a8cbe0(0x60004);
                        if (iVar1 == 0) {
                          iVar1 = FUN_00a8cbe0(0x60005);
                          if (iVar1 == 0) {
                            iVar1 = FUN_00a8cbe0(0x60006);
                            if (iVar1 == 0) {
                              iVar1 = FUN_00a8cbe0(0x60008);
                              if (iVar1 == 0) {
                                iVar1 = FUN_00a8cbe0(0x60009);
                                if (iVar1 == 0) {
                                  iVar1 = FUN_00a8cbe0(0x6000a);
                                  if (iVar1 == 0) {
                                    iVar1 = FUN_00a8cbe0(0x6000b);
                                    if (iVar1 == 0) {
                                      iVar1 = FUN_00a8cbe0(0x6000c);
                                      if (iVar1 == 0) {
                                        iVar1 = FUN_00a8cbe0(0x6000d);
                                        if (iVar1 == 0) {
                                          iVar1 = FUN_00a8cbe0(0x6000e);
                                          if (iVar1 == 0) {
                                            iVar1 = FUN_00a8cbe0(0x6000f);
                                            if (iVar1 == 0) {
                                              iVar1 = FUN_00a8cbe0(0x60010);
                                              if (iVar1 == 0) {
                                                iVar1 = FUN_00a8cbe0(0x60011);
                                                if (iVar1 == 0) {
                                                  iVar1 = FUN_00a8cbe0(0x60012);
                                                  if (iVar1 == 0) {
                                                    iVar1 = FUN_00a8cbe0(0x60013);
                                                    if (iVar1 == 0) {
                                                      iVar1 = FUN_00a8cbe0(0x60014);
                                                      if (iVar1 == 0) {
                                                        iVar1 = FUN_00a8cbe0(0x60015);
                                                        if (iVar1 == 0) {
                                                          iVar1 = FUN_00a8cbe0(0x60016);
                                                          if (iVar1 == 0) {
                                                            iVar1 = FUN_00a8cbe0(0x60017);
                                                            if (iVar1 == 0) {
                                                              iVar1 = FUN_00a8cbe0(0x60018);
                                                              if (iVar1 == 0) {
                                                                iVar1 = FUN_00a8cbe0(0x80006);
                                                                if (iVar1 == 0) {
                                                                  iVar1 = FUN_00a8cbe0(0x80007);
                                                                  if (iVar1 == 0) {
                                                                    iVar1 = FUN_00a8cbe0(0x80008);
                                                                    if (iVar1 == 0) {
                                                                      iVar1 = FUN_00a8cbe0(0x80009);
                                                                      if (iVar1 == 0) {
                                                                        iVar1 = FUN_00a8cbe0(0x8000a
                                                  );
                                                  if (iVar1 == 0) {
                                                    iVar1 = FUN_00a8cbe0(0x8000b);
                                                    if (iVar1 == 0) {
                                                      iVar1 = FUN_00a8cbe0(0x8000c);
                                                      if (iVar1 == 0) {
                                                        iVar1 = FUN_00a8cbe0(0x8000d);
                                                        if (iVar1 == 0) {
                                                          iVar1 = FUN_00a8cbe0(0x8000e);
                                                          if (iVar1 == 0) {
                                                            iVar1 = FUN_00a8cbe0(0x8000f);
                                                            if (iVar1 == 0) {
                                                              iVar1 = FUN_00a8cbe0(0x80010);
                                                              if (iVar1 == 0) {
                                                                iVar1 = FUN_00a8cbe0(0x80011);
                                                                if (iVar1 == 0) {
                                                                  iVar1 = FUN_00a8cbe0(0x80012);
                                                                  if (iVar1 == 0) {
                                                                    iVar1 = FUN_00a8cbe0(0x80013);
                                                                    if (iVar1 == 0) {
                                                                      iVar1 = FUN_00a8cbe0(0x80014);
                                                                      if (iVar1 == 0) {
                                                                        iVar1 = FUN_00a8cbe0(0x80015
                                                  );
                                                  if (iVar1 == 0) {
                                                    iVar1 = FUN_00a8cbe0(0x80016);
                                                    if (iVar1 == 0) {
                                                      iVar1 = FUN_00a8cbe0(0x80017);
                                                      if (iVar1 == 0) {
                                                        iVar1 = FUN_00a8cbe0(0x80018);
                                                        if (iVar1 == 0) {
                                                          iVar1 = FUN_00a8cbe0(0x80019);
                                                          if (iVar1 == 0) {
                                                            iVar1 = FUN_00a8cbe0(0x8001a);
                                                            if (iVar1 == 0) {
                                                              iVar1 = FUN_00a8cbe0(0x8001b);
                                                              if (iVar1 == 0) {
                                                                iVar1 = FUN_00a8cbe0(0x8001c);
                                                                if (iVar1 == 0) {
                                                                  iVar1 = FUN_00a8cbe0(0x8001d);
                                                                  if (iVar1 == 0) {
                                                                    iVar1 = FUN_00a8cbe0(0x8001e);
                                                                    if (iVar1 == 0) {
                                                                      iVar1 = FUN_00a8cbe0(0x8001f);
                                                                      if (iVar1 == 0) {
                                                                        iVar1 = FUN_00a8cbe0(0x80020
                                                  );
                                                  if (iVar1 == 0) {
                                                    iVar1 = FUN_00a8cbe0(0x80021);
                                                    if (iVar1 == 0) {
                                                      iVar1 = FUN_00a8cbe0(0x80022);
                                                      if (iVar1 == 0) {
                                                        iVar1 = FUN_00a8cbe0(0x80023);
                                                        if (iVar1 == 0) {
                                                          iVar1 = FUN_00a8cbe0(0x80024);
                                                          if (iVar1 == 0) {
                                                            iVar1 = FUN_00a8cbe0(0x80025);
                                                            if (iVar1 == 0) {
                                                              iVar1 = FUN_00a8cbe0(0x80026);
                                                              if (iVar1 == 0) {
                                                                iVar1 = FUN_00a8cbe0(0x80027);
                                                                if (iVar1 == 0) {
                                                                  iVar1 = FUN_00a8cbe0(0x80028);
                                                                  if (iVar1 == 0) {
                                                                    iVar1 = FUN_00a8cbe0(0x80029);
                                                                    if (iVar1 == 0) {
                                                                      return 1;
                                                                    }
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

// 007791B0  FUN_007791b0  size=183  [between]
float10 __thiscall FUN_007791b0(int param_1,undefined4 param_2,float param_3,float param_4)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = (float10)FUN_00a8ec30(param_2);
  if (param_3 != 0.0) {
    fVar2 = (float10)FUN_00ddba30((float)(fVar1 - (float10)*(float *)(param_1 + 0x94)));
    fVar3 = (float10)FUN_00fdc1f0();
    fVar2 = ((float10)1 - fVar3) * (float10)(float)fVar2;
    fVar3 = (float10)param_4;
    if (fVar2 <= -fVar3) {
      fVar2 = -fVar3;
    }
    if (fVar3 < fVar2) {
      fVar2 = fVar3;
    }
    fVar2 = (float10)FUN_00ddba30((float)(fVar2 + (float10)*(float *)(param_1 + 0x94)));
    *(float *)(param_1 + 0x94) = (float)fVar2;
    fVar1 = (float10)(float)fVar1;
  }
  fVar1 = (float10)FUN_00ddba30((float)((float10)*(float *)(param_1 + 0x94) - fVar1));
  return ABS(fVar1);
}

// 00779270  FUN_00779270  size=52  [between]
void __thiscall FUN_00779270(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x1410) = *param_2;
  *(undefined4 *)(param_1 + 0x1414) = param_2[1];
  *(undefined4 *)(param_1 + 0x1418) = param_2[2];
  *(undefined4 *)(param_1 + 0x141c) = param_2[3];
  *(undefined4 *)(param_1 + 0x1420) = 0;
  return;
}

// 007793A0  FUN_007793a0  size=129  [between]
void __thiscall FUN_007793a0(int param_1,int param_2)

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

// 00779430  FUN_00779430  size=101  [between]
void FUN_00779430(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  if (param_1 != 0) {
    FUN_00a92f90();
    iVar1 = FUN_00e26e90();
    if (iVar1 == 0) {
      fVar2 = (float10)-1.0;
    }
    else {
      fVar2 = (float10)FUN_00e36970(0);
    }
    FUN_00a92f90();
    iVar1 = FUN_00e26e90();
    if (iVar1 != 0) {
      Animation::Motion::Unit::setCurrentTime(0,(float)fVar2);
    }
  }
  return;
}

// 007794A0  FUN_007794a0  size=50  [between]
void __fastcall FUN_007794a0(int param_1)

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

// 007794E0  FUN_007794e0  size=207  [between]
void __thiscall FUN_007794e0(int param_1,int param_2)

{
  int iVar1;
  float unaff_EBX;
  float unaff_ESI;
  float unaff_EDI;
  float10 fVar2;
  float fVar3;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_50 [76];
  
  if (param_2 != 0) {
    iVar1 = FUN_00a8c760(0x1c);
    if (iVar1 == 0) {
      iVar1 = FUN_00a12210(0xf00);
      if (iVar1 != 0) {
        local_58 = *(undefined4 *)(iVar1 + 0x58);
        local_54 = *(undefined4 *)(iVar1 + 0x5c);
        fVar3 = *(float *)(param_2 + 0x94);
        D3DXMatrixRotationY(local_50);
        D3DXVec3TransformNormal(&stack0xffffff98,&stack0xffffff98,&local_58);
        *(float *)(param_1 + 0x50) = *(float *)(param_2 + 0x50) + fVar3;
        *(float *)(param_1 + 0x54) = *(float *)(param_2 + 0x54) + unaff_EDI;
        *(float *)(param_1 + 0x58) = *(float *)(param_2 + 0x58) + unaff_ESI;
        *(float *)(param_1 + 0x5c) = *(float *)(param_2 + 0x5c) + unaff_EBX;
        fVar2 = (float10)FUN_00ddba30(*(float *)(param_2 + 0x94) + *(float *)(iVar1 + 0x94));
        *(float *)(param_1 + 0x94) = (float)fVar2;
      }
    }
  }
  return;
}

// 007795C0  FUN_007795c0  size=1  [between]
void FUN_007795c0(void)

{
  return;
}

// 007795D0  FUN_007795d0  size=1  [between]
void FUN_007795d0(void)

{
  return;
}

// 007795E0  FUN_007795e0  size=1  [between]
void FUN_007795e0(void)

{
  return;
}

// 007795F0  FUN_007795f0  size=1  [between]
void FUN_007795f0(void)

{
  return;
}

// 00779600  Emc060::thunk_vf1C0  size=5  [class]
void __thiscall Emc060::thunk_vf1C0(int param_1,int *param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  
  BehaviorEmBase::vf1C0(param_2,param_3);
  uVar1 = *(uint *)(param_1 + 0x4b0);
  if (uVar1 < 0x2c011) {
    if (uVar1 == 0x2c010) goto switchD_00a9b148_caseD_2c050;
    if (uVar1 < 0x28141) {
      if (uVar1 != 0x28140) {
        switch(uVar1) {
        case 0x28010:
        case 0x28050:
          break;
        default:
          goto switchD_00a9af52_caseD_28011;
        case 0x28030:
        case 0x28033:
        case 0x28035:
          if (*(int *)(param_1 + 0x4f0) != 0) {
            FUN_00a7c890();
          }
          FUN_00e26e90();
          uVar5 = 0x20030;
          uVar4 = 0x2803f;
          goto LAB_00a9b2ce;
        case 0x28040:
          goto switchD_00a9af52_caseD_28040;
        case 0x28070:
        case 0x28071:
          goto switchD_00a9af52_caseD_28070;
        case 0x28080:
        case 0x28081:
          goto switchD_00a9af52_caseD_28080;
        }
      }
switchD_00a9af52_caseD_28010:
      if (*(int *)(param_1 + 0x4f0) != 0) {
        FUN_00a7c890();
      }
      FUN_00e26e90();
      FUN_00e272b0(0x28012,0x20010);
      if (*(int *)(param_1 + 0x4f0) != 0) {
        FUN_00a7c890();
      }
      FUN_00e27330(0x2814f,0x20010);
    }
    else {
      switch(uVar1) {
      case 0x28142:
      case 0x28144:
      case 0x28160:
        goto switchD_00a9af52_caseD_28010;
      case 0x28150:
      case 0x28152:
        if (*(int *)(param_1 + 0x4f0) != 0) {
          FUN_00a7c890();
        }
        FUN_00e26e90();
        FUN_00e272b0(0x28012,0x20010);
        if (*(int *)(param_1 + 0x4f0) != 0) {
          FUN_00a7c890();
        }
        FUN_00e27330(0x2815f,0x20010);
        break;
      case 0x28170:
        if (*(int *)(param_1 + 0x4f0) != 0) {
          FUN_00a7c890();
        }
        FUN_00e26e90();
        uVar4 = 0x28012;
        goto LAB_00a9b26a;
      case 0x28220:
        goto switchD_00a9b04c_caseD_28220;
      }
    }
    goto switchD_00a9af52_caseD_28011;
  }
  if (0x2c140 < uVar1) {
    switch(uVar1) {
    case 0x2c142:
    case 0x2c144:
    case 0x2c160:
      goto switchD_00a9b148_caseD_2c050;
    case 0x2c150:
    case 0x2c152:
      if (*(int *)(param_1 + 0x4f0) != 0) {
        FUN_00a7c890();
      }
      FUN_00e26e90();
      FUN_00e272b0(0x2c012,0x20010);
      if (*(int *)(param_1 + 0x4f0) != 0) {
        FUN_00a7c890();
      }
      FUN_00e27330(0x2c15f,0x20010);
      break;
    case 0x2c170:
      if (*(int *)(param_1 + 0x4f0) != 0) {
        FUN_00a7c890();
      }
      FUN_00e26e90();
      uVar4 = 0x2c012;
LAB_00a9b26a:
      FUN_00e272b0(uVar4,0x20010);
      uVar4 = *(undefined4 *)(param_1 + 0x4b0);
      if (*(int *)(param_1 + 0x4f0) == 0) {
        FUN_00e27330(uVar4,0x20010);
      }
      else {
        FUN_00a7c890();
        FUN_00e27330(uVar4,0x20010);
      }
      break;
    case 0x2c220:
switchD_00a9b04c_caseD_28220:
      uVar4 = *(undefined4 *)(param_1 + 0x4b4);
      if (*(int *)(param_1 + 0x4f0) != 0) {
        FUN_00a7c890();
      }
      FUN_00e26e90();
      uVar5 = 0x20220;
      goto LAB_00a9b2ce;
    }
    goto switchD_00a9af52_caseD_28011;
  }
  if (uVar1 == 0x2c140) {
switchD_00a9b148_caseD_2c050:
    if (*(int *)(param_1 + 0x4f0) != 0) {
      FUN_00a7c890();
    }
    FUN_00e26e90();
    FUN_00e272b0(0x2c012,0x20010);
    if (*(int *)(param_1 + 0x4f0) != 0) {
      FUN_00a7c890();
    }
    FUN_00e27330(0x2c14f,0x20010);
  }
  else {
    switch(uVar1) {
    case 0x2c030:
    case 0x2c033:
    case 0x2c035:
      if (*(int *)(param_1 + 0x4f0) != 0) {
        FUN_00a7c890();
      }
      FUN_00e26e90();
      uVar5 = 0x20030;
      uVar4 = 0x2c03f;
      break;
    default:
      goto switchD_00a9af52_caseD_28011;
    case 0x2c040:
switchD_00a9af52_caseD_28040:
      uVar4 = *(undefined4 *)(param_1 + 0x4b4);
      if (*(int *)(param_1 + 0x4f0) == 0) {
        FUN_00e26e90();
        uVar5 = 0x20040;
      }
      else {
        FUN_00a7c890();
        FUN_00e26e90();
        uVar5 = 0x20040;
      }
      break;
    case 0x2c050:
      goto switchD_00a9b148_caseD_2c050;
    case 0x2c071:
switchD_00a9af52_caseD_28070:
      uVar4 = *(undefined4 *)(param_1 + 0x4b4);
      if (*(int *)(param_1 + 0x4f0) == 0) {
        FUN_00e26e90();
        uVar5 = 0x20070;
      }
      else {
        FUN_00a7c890();
        FUN_00e26e90();
        uVar5 = 0x20070;
      }
      break;
    case 0x2c081:
switchD_00a9af52_caseD_28080:
      uVar4 = *(undefined4 *)(param_1 + 0x4b4);
      if (*(int *)(param_1 + 0x4f0) == 0) {
        FUN_00e26e90();
        uVar5 = 0x20080;
      }
      else {
        FUN_00a7c890();
        FUN_00e26e90();
        uVar5 = 0x20080;
      }
    }
LAB_00a9b2ce:
    FUN_00e272b0(uVar4,uVar5);
  }
switchD_00a9af52_caseD_28011:
  if (param_2 != (int *)0x0) {
    puVar6 = &DAT_01be9ca0;
    (**(code **)(*param_2 + 4))(&DAT_01be9ca0);
    iVar2 = FUN_00dd6d80(puVar6);
    if ((iVar2 != 0) && (piVar3 = (int *)FUN_00acdea0(), piVar3 != (int *)0x0)) {
      puVar6 = &DAT_01be9c3c;
      (**(code **)(*piVar3 + 4))(&DAT_01be9c3c);
      iVar2 = FUN_00dd6d80(puVar6);
      if (iVar2 != 0) {
        *(int *)(param_1 + 0xdc0) = piVar3[0x370];
      }
    }
  }
  return;
}

// 00779620  FUN_00779620  size=180  [between]
void __fastcall FUN_00779620(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar1 = 0x8000000;
    if (*(int *)(param_1 + 0x1bf0) != 0) {
      uVar1 = 0x8000040;
    }
    *(undefined4 *)(param_1 + 0x61c) = 1;
    FUN_00aa4080(0xa6,0,0x3d088889,0x3f800000,uVar1,0xbf800000,0x3f800000);
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    FUN_00a8caf0(0x80007,0,0,0);
    *(undefined4 *)(param_1 + 0xea0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x139c) = 0;
  }
  return;
}

// 007796E0  FUN_007796e0  size=170  [between]
void __fastcall FUN_007796e0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar1 = 0;
    if (*(int *)(param_1 + 0x1bf0) != 0) {
      uVar1 = 0x40;
    }
    *(undefined4 *)(param_1 + 0x61c) = 1;
    FUN_00aa4080(0xa7,0,0x3d088889,0x3f800000,uVar1,0xbf800000,0x3f800000);
    if (*(float *)(param_1 + 0x1c18) < 0.0) {
      *(undefined4 *)(param_1 + 0x1c18) = 0x42700000;
    }
    *(undefined4 *)(param_1 + 0x1bf8) = 1;
    *(undefined4 *)(param_1 + 0xda8) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xdb0) = 0xffffffff;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 007797A0  FUN_007797a0  size=180  [between]
void __fastcall FUN_007797a0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar1 = 0x8000000;
    if (*(int *)(param_1 + 0x1bf0) != 0) {
      uVar1 = 0x8000040;
    }
    *(undefined4 *)(param_1 + 0x61c) = 1;
    FUN_00aa4080(0xa8,0,0x3d088889,0x3f800000,uVar1,0xbf800000,0x3f800000);
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    FUN_00a8caf0(0x80007,0,0,0);
    *(undefined4 *)(param_1 + 0xea0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x139c) = 0;
  }
  return;
}

// 00779870  FUN_00779870  size=180  [between]
void __fastcall FUN_00779870(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar1 = 0x8000000;
    if (*(int *)(param_1 + 0x1bf0) != 0) {
      uVar1 = 0x8000040;
    }
    *(undefined4 *)(param_1 + 0x61c) = 1;
    FUN_00aa4080(0xaa,1,0x3d088889,0x3f800000,uVar1,0xbf800000,0x3f800000);
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    FUN_00a8caf0(0x80007,0,0,0);
    *(undefined4 *)(param_1 + 0xea0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x139c) = 0;
  }
  return;
}

// 00779960  FUN_00779960  size=239  [between]
void __fastcall FUN_00779960(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1[0x187] == 0) {
    uVar1 = 0x8000000;
    if (param_1[0x6fc] != 0) {
      uVar1 = 0x8000040;
    }
    FUN_00aa4080(0xac,0,0x3e2aaaab,0x3f800000,uVar1,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    FUN_00a8caf0(0x8000b,0,0,0);
    param_1[0x3a8] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4e7] = 0;
  }
  iVar2 = FUN_00a8c760(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3ca3d70a,0x393702d3,0x3e0efa35,0);
  }
  return;
}

// 00779A60  FUN_00779a60  size=176  [between]
void __fastcall FUN_00779a60(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar1 = 0x8000000;
    if (*(int *)(param_1 + 0x1bf0) != 0) {
      uVar1 = 0x8000040;
    }
    FUN_00aa4080(0xae,0,0x3e2aaaab,0x3f800000,uVar1,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    FUN_00a8caf0(0x80007,0,0,0);
    *(undefined4 *)(param_1 + 0xea0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x139c) = 0;
  }
  return;
}

// 00779B30  FUN_00779b30  size=498  [between]
void __fastcall FUN_00779b30(int *param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  float local_20;
  int local_1c;
  float local_18;
  undefined4 local_14;
  
  if (param_1[0x187] == 0) {
    uVar2 = 0x8000000;
    if (param_1[0x6fc] != 0) {
      uVar2 = 0x8000040;
    }
    FUN_00aa4080(0xaf,0,0x3e2aaaab,0x3f800000,uVar2,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) goto LAB_00779cde;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a8c760(8);
  if ((((iVar3 != 0) && (param_1[0x705] == 0)) && (param_1[0x2a2] != 0)) &&
     (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
    local_20 = *(float *)(iVar3 + 0x40);
    local_18 = *(float *)(iVar3 + 0x48);
    local_14 = *(undefined4 *)(iVar3 + 0x4c);
    local_1c = param_1[0x15];
    fVar4 = (float10)FUN_00dde300(0xc0400000,0x40400000);
    local_20 = (float)(fVar4 + (float10)local_20);
    fVar4 = (float10)FUN_00dde300(0xc0400000,0x40400000);
    local_18 = (float)(fVar4 + (float10)local_18);
    if ((param_1[0x50a] != 0) && (param_1[0x50b] != 0)) {
      FUN_0043fc90(param_1[0x2a2],&local_20,3);
    }
  }
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    FUN_00a8caf0(0x80007,0,0,0);
    param_1[0x3a8] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4e7] = 0;
    sVar1 = FUN_00dde2d0(0,2);
    param_1[0x706] = (int)(((float)(int)sVar1 + 1.0) * 60.0);
  }
LAB_00779cde:
  iVar3 = FUN_00a8c760(0);
  if (iVar3 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3db2b8c2,0);
  }
  return;
}

// 00779E40  FUN_00779e40  size=202  [between]
void __fastcall FUN_00779e40(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar2 = 0x8000000;
    if (*(int *)(param_1 + 0x1bf0) != 0) {
      uVar2 = 0x8000040;
    }
    *(undefined4 *)(param_1 + 0x61c) = 1;
    FUN_00aa4080(0x79,0,0x3d088889,0x3f800000,uVar2,0xbf800000,0x3f800000);
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    uVar2 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xea4) = uVar2;
    *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
    FUN_00a8caf0(0x60012,0,0,0);
    *(undefined4 *)(param_1 + 0xea0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x139c) = 0;
  }
  return;
}

// 00779F30  FUN_00779f30  size=481  [between]
void __fastcall FUN_00779f30(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  switch(param_1[0x187]) {
  case 0:
    param_1[0x187] = 1;
    uVar2 = 0x79;
    goto LAB_00779f82;
  case 1:
  case 5:
    goto switchD_00779f44_caseD_1;
  case 2:
    param_1[0x187] = 3;
    FUN_00aa4080(0x76,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar1 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 4:
    param_1[0x187] = 5;
    uVar2 = 0x77;
LAB_00779f82:
    FUN_00aa4080(uVar2,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
switchD_00779f44_caseD_1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 6:
    uVar2 = 0x8000000;
    if (param_1[0x6fc] != 0) {
      uVar2 = 0x8000040;
    }
    param_1[0x187] = 7;
    FUN_00aa4080(0xa8,0,0x3d088889,0x3f800000,uVar2,0xbf800000,0x3f800000);
    param_1[0x248] = 0x42f00000;
  case 7:
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if ((float)param_1[0x248] < 0.0) {
      FUN_00777ce0((-(uint)(param_1[0x6fd] != 0) & 0xfffffff9) + 0x8000e,0,0,0,0);
      return;
    }
  }
  return;
}

// 0077A150  FUN_0077a150  size=441  [between]
void __fastcall FUN_0077a150(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  switch(param_1[0x187]) {
  case 0:
    uVar1 = 0x8000000;
    if (param_1[0x6fc] != 0) {
      uVar1 = 0x8000040;
    }
    param_1[0x187] = 1;
    FUN_00aa4080(0x79,0,0x3d088889,0x3f800000,uVar1,0xbf800000,0x3f800000);
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    param_1[0x187] = 3;
    FUN_00aa4080(0x7c,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar2 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 4:
    uVar1 = 0x8000000;
    if (param_1[0x6fc] != 0) {
      uVar1 = 0x8000040;
    }
    param_1[0x187] = 5;
    FUN_00aa4080(0x7d,0,0x3d088889,0x3f800000,uVar1,0xbf800000,0x3f800000);
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      iVar2 = FUN_00a8cab0();
      param_1[0x3a9] = iVar2;
      param_1[0x3aa] = param_1[0x3a8];
      FUN_00a8caf0(0x6000a,0,0,0);
      param_1[0x3a8] = 0;
      FUN_00a962d0(0,0);
      param_1[0x4e7] = 0;
      return;
    }
  }
  return;
}

// 0077A340  FUN_0077a340  size=202  [between]
void __fastcall FUN_0077a340(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar2 = 0x8000000;
    if (*(int *)(param_1 + 0x1bf0) != 0) {
      uVar2 = 0x8000040;
    }
    *(undefined4 *)(param_1 + 0x61c) = 1;
    FUN_00aa4080(0x69,0,0x3d088889,0x3f800000,uVar2,0xbf800000,0x3f800000);
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    uVar2 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xea4) = uVar2;
    *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
    FUN_00a8caf0(0x10000,0,0,0);
    *(undefined4 *)(param_1 + 0xea0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x139c) = 0;
  }
  return;
}

// 0077A420  FUN_0077a420  size=202  [between]
void __fastcall FUN_0077a420(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar2 = 0x8000000;
    if (*(int *)(param_1 + 0x1bf0) != 0) {
      uVar2 = 0x8000040;
    }
    *(undefined4 *)(param_1 + 0x61c) = 1;
    FUN_00aa4080(0x6b,0,0x3d088889,0x3f800000,uVar2,0xbf800000,0x3f800000);
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    uVar2 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xea4) = uVar2;
    *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
    FUN_00a8caf0(0x10000,0,0,0);
    *(undefined4 *)(param_1 + 0xea0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x139c) = 0;
  }
  return;
}

// 0077A500  FUN_0077a500  size=315  [between]
void __fastcall FUN_0077a500(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    uVar2 = 0x8000000;
    if (*(int *)(param_1 + 0x1bf0) != 0) {
      uVar2 = 0x8000040;
    }
    *(undefined4 *)(param_1 + 0x61c) = 1;
    FUN_00aa4080(0x6f,0,0x3d088889,0x3f800000,uVar2,0xbf800000,0x3f800000);
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      return;
    }
    break;
  case 2:
    *(undefined4 *)(param_1 + 0x61c) = 3;
    FUN_00aa4080(0x8d,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      uVar2 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xea4) = uVar2;
      *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
      FUN_00a8caf0(0x10000,0,0,0);
      *(undefined4 *)(param_1 + 0xea0) = 0;
      FUN_00a962d0(0,0);
      *(undefined4 *)(param_1 + 0x139c) = 0;
      return;
    }
  }
  return;
}

// 0077A660  FUN_0077a660  size=212  [between]
void __fastcall FUN_0077a660(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar2 = 0x8000000;
    if (*(int *)(param_1 + 0x1bf0) != 0) {
      uVar2 = 0x8000040;
    }
    *(undefined4 *)(param_1 + 0x61c) = 1;
    FUN_00aa4080(0x6d,0,0x3d088889,0x3f800000,uVar2,0xbf800000,0x3f800000);
    if (*(int *)(param_1 + 0x1bf0) == 0) {
      *(undefined4 *)(param_1 + 0x1c08) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x1c0c) = 0;
    }
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    uVar2 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xea4) = uVar2;
    *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
    FUN_00a8caf0(0x10000,0,0,0);
    *(undefined4 *)(param_1 + 0xea0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x139c) = 0;
  }
  return;
}

// 0077A760  FUN_0077a760  size=1  [between]
void FUN_0077a760(void)

{
  return;
}

// 0077A7A0  FUN_0077a7a0  size=12  [between]
undefined4 __fastcall FUN_0077a7a0(undefined4 param_1)

{
  FUN_00a7c930();
  return param_1;
}

// 0077A920  Emc060::vf1A0  size=5  [class]
undefined4 Emc060::vf1A0(void)

{
  return 0;
}

// 0077A930  Emc060::vf1A4  size=470  [class]
void __thiscall Emc060::vf1A4(int param_1,int *param_2,byte param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  float *pfVar4;
  float *pfVar5;
  undefined1 *puVar6;
  undefined1 local_30 [16];
  undefined1 local_20 [28];
  
  iVar1 = FUN_00a81330();
  if ((param_3 & 1) != 0) {
    *(int *)(param_1 + 0x176c) = *(int *)(param_1 + 0x176c) + 1;
    *(undefined4 *)(param_1 + 0x1764) = 1;
    *(undefined4 *)(param_1 + 0x1768) = 1;
  }
  iVar2 = FUN_007785e0();
  if ((iVar2 == 0) || ((param_3 & 4) == 0)) {
    if ((param_3 & 6) == 0) {
      return;
    }
    iVar2 = *param_2;
    if (((((iVar2 != 0xee) && (iVar2 != 0xef)) && (iVar2 != 0xf0)) &&
        ((iVar2 != 0xf1 && (iVar2 != 0xf2)))) &&
       ((iVar2 != 0xf3 && ((iVar2 != 0xf4 && (iVar2 != 0xf5)))))) {
      return;
    }
    FUN_00a7c950();
    if (iVar1 != 0) {
      uVar3 = FUN_00a7c7f0();
      FUN_00a7c960(uVar3);
    }
    iVar2 = FUN_00a8cbe0(0x8002d);
    if (iVar2 != 0) {
      return;
    }
    iVar2 = FUN_00a8cbe0(0x8002e);
    if (iVar2 != 0) {
      return;
    }
    uVar3 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
    *(undefined4 *)(param_1 + 0xea4) = uVar3;
    FUN_00a8caf0(0x60003,0,0,0);
    *(undefined4 *)(param_1 + 0xea0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x139c) = 0;
    if (iVar1 == 0) {
      return;
    }
    puVar6 = local_30;
    FUN_00a7c8a0(puVar6);
    pfVar4 = (float *)FUN_00a925a0(puVar6);
    pfVar5 = (float *)FUN_00a925a0(local_20);
    if (pfVar5[2] * pfVar4[2] + *pfVar5 * *pfVar4 + pfVar5[1] * pfVar4[1] <= 0.25) {
      return;
    }
    uVar3 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xea4) = uVar3;
    *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
    uVar3 = 0x60005;
  }
  else {
    uVar3 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xea4) = uVar3;
    *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
    uVar3 = 0x60007;
  }
  FUN_00a8caf0(uVar3,0,0,0);
  *(undefined4 *)(param_1 + 0xea0) = 0;
  FUN_00a962d0(0,0);
  *(undefined4 *)(param_1 + 0x139c) = 0;
  return;
}

// 0077AB10  FUN_0077ab10  size=31  [callgraph]
undefined4 FUN_0077ab10(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00ac4780();
  if (2 < iVar1) {
    return 1;
  }
  uVar2 = FUN_00a90070(5);
  return uVar2;
}

// 0077AB30  FUN_0077ab30  size=31  [callgraph]
undefined4 FUN_0077ab30(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00ac4780();
  if (2 < iVar1) {
    return 1;
  }
  uVar2 = FUN_00a90070(5);
  return uVar2;
}

// 0077AB80  FUN_0077ab80  size=149  [callgraph]
void __fastcall FUN_0077ab80(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x6e,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00eaa6e0(0x41200000,0);
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077ac13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 0077AC30  FUN_0077ac30  size=149  [callgraph]
void __fastcall FUN_0077ac30(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x69,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00eaa6e0(0x41200000,0);
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077acc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 0077ACE0  FUN_0077ace0  size=149  [callgraph]
void __fastcall FUN_0077ace0(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x6a,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00eaa6e0(0x41200000,0);
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077ad73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 0077AD90  FUN_0077ad90  size=41  [callgraph]
void __thiscall FUN_0077ad90(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x1ae8) == 0) {
    *(int *)(param_1 + 0x1b04) = *(int *)(param_1 + 0x1b04) + param_2;
    *(undefined4 *)(param_1 + 0x1b20) =
         *(undefined4 *)(param_1 + 0x19e8 + *(int *)(param_1 + 0xeb4) * 4);
  }
  return;
}

// 0077ADE0  FUN_0077ade0  size=24  [callgraph]
undefined4 __fastcall FUN_0077ade0(int param_1)

{
  if (0.0 < *(float *)(param_1 + 0x1b4c)) {
    return 1;
  }
  return 0;
}

// 0077AE10  FUN_0077ae10  size=41  [callgraph]
void __thiscall FUN_0077ae10(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x1aec) == 0) {
    *(int *)(param_1 + 0x1b08) = *(int *)(param_1 + 0x1b08) + param_2;
    *(undefined4 *)(param_1 + 0x1b24) =
         *(undefined4 *)(param_1 + 0x19f8 + *(int *)(param_1 + 0xeb4) * 4);
  }
  return;
}

// 0077AEB0  FUN_0077aeb0  size=68  [callgraph]
void __thiscall FUN_0077aeb0(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1af0) == 0) {
    iVar1 = FUN_00a8cbe0(0x1000a);
    if ((iVar1 == 0) && (iVar1 = FUN_00a8cbe0(0x1000b), iVar1 == 0)) {
      return;
    }
    *(int *)(param_1 + 0x1b0c) = *(int *)(param_1 + 0x1b0c) + param_2;
    *(undefined4 *)(param_1 + 0x1b28) = *(undefined4 *)(param_1 + 0x19d4);
  }
  return;
}

// 0077AF20  FUN_0077af20  size=59  [callgraph]
void __thiscall FUN_0077af20(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1af4) == 0) {
    iVar1 = FUN_00a8cbe0(0x5000b);
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x1b10) = *(int *)(param_1 + 0x1b10) + param_2;
      *(undefined4 *)(param_1 + 0x1b2c) =
           *(undefined4 *)(param_1 + 0x1a08 + *(int *)(param_1 + 0xeb4) * 4);
    }
  }
  return;
}

// 0077AF80  FUN_0077af80  size=59  [callgraph]
void __thiscall FUN_0077af80(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1af8) == 0) {
    iVar1 = FUN_00a8cbe0(0x5000d);
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x1b14) = *(int *)(param_1 + 0x1b14) + param_2;
      *(undefined4 *)(param_1 + 0x1b30) =
           *(undefined4 *)(param_1 + 0x1a18 + *(int *)(param_1 + 0xeb4) * 4);
    }
  }
  return;
}

// 0077AFE0  FUN_0077afe0  size=59  [callgraph]
void __thiscall FUN_0077afe0(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1afc) == 0) {
    iVar1 = FUN_00a8cbe0(0x5000c);
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x1b18) = *(int *)(param_1 + 0x1b18) + param_2;
      *(undefined4 *)(param_1 + 0x1b34) =
           *(undefined4 *)(param_1 + 0x1a28 + *(int *)(param_1 + 0xeb4) * 4);
    }
  }
  return;
}

// 0077B040  FUN_0077b040  size=59  [callgraph]
void __thiscall FUN_0077b040(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1b00) == 0) {
    iVar1 = FUN_00a8cbe0(0x5000e);
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x1b1c) = *(int *)(param_1 + 0x1b1c) + param_2;
      *(undefined4 *)(param_1 + 0x1b38) =
           *(undefined4 *)(param_1 + 0x1a38 + *(int *)(param_1 + 0xeb4) * 4);
    }
  }
  return;
}

// 0077B0F0  FUN_0077b0f0  size=98  [callgraph]
void __fastcall FUN_0077b0f0(int param_1)

{
  float fVar1;
  float10 fVar2;
  
  *(undefined4 *)(param_1 + 0x1b3c) =
       *(undefined4 *)(param_1 + 0x1a70 + *(int *)(param_1 + 0xeb4) * 4);
  fVar2 = (float10)FUN_00dde300(0,0x3f800000);
  fVar1 = *(float *)(param_1 + 0x1a78 + *(int *)(param_1 + 0xeb4) * 4);
  *(int *)(param_1 + 0x1b48) = *(int *)(param_1 + 0x1b48) + 1;
  *(float *)(param_1 + 0x1b3c) =
       (float)(fVar2 * (float10)fVar1 + (float10)*(float *)(param_1 + 0x1b3c));
  *(float *)(param_1 + 0x1b44) =
       *(float *)(param_1 + 0x1a60 + *(int *)(param_1 + 0xeb4) * 4) + *(float *)(param_1 + 0x1b44);
  return;
}

// 0077B180  FUN_0077b180  size=158  [callgraph]
undefined4 __fastcall FUN_0077b180(int param_1)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar2 = (float10)FUN_00dde300(0,0x3f800000);
  if (fVar2 <= (float10)*(float *)(param_1 + 0x1a80 + *(int *)(param_1 + 0xeb4) * 4)) {
    fVar2 = (float10)FUN_00dde300(0,0x3f800000);
    iVar1 = *(int *)(param_1 + 0xeb4);
    fVar3 = (float10)*(float *)(param_1 + 0x1a88 + iVar1 * 4);
    if (fVar2 < fVar3) {
      return 1;
    }
    fVar3 = fVar3 + (float10)*(float *)(param_1 + 0x1a90 + iVar1 * 4);
    if (fVar2 < fVar3) {
      return 2;
    }
    if (fVar2 < fVar3 + (float10)*(float *)(param_1 + 0x1a98 + iVar1 * 4)) {
      return 3;
    }
  }
  return 0;
}

// 0077B290  FUN_0077b290  size=46  [callgraph]
undefined4 __fastcall FUN_0077b290(int param_1)

{
  int iVar1;
  
  if (*(float *)(param_1 + 0x1b4c) <= 0.0) {
    iVar1 = FUN_00a8c760(0x39);
    if ((iVar1 == 0) && (*(int *)(param_1 + 0x1b94) == 0)) {
      return 0;
    }
  }
  return 1;
}

// 0077B300  FUN_0077b300  size=694  [callgraph]
void __fastcall FUN_0077b300(int *param_1)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  short sVar4;
  int iVar5;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  switch(param_1[0x187]) {
  case 0:
    param_1[0x50f] = param_1[0x50f] ^ 0x8000000;
    FUN_00aa4080(0x3c,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
    param_1[0x5da] = 0;
    FUN_00a8d280();
  case 1:
    FUN_00ac80a0(0,0x3f800000);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 2:
    if ((param_1[0x2a1] == 0) || (*(float *)(param_1[0x2a1] + 0x44) < (float)param_1[0x11] + 3.0)) {
      param_1[0x187] = 3;
    }
    break;
  case 3:
    param_1[0x50f] = param_1[0x50f] ^ 0x8000000;
    FUN_00aa4080(0x3d,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      sVar4 = FUN_00dde2d0(1,2);
      param_1[0x5dd] = (int)((float)(int)sVar4 * 60.0);
      if (param_1[0x3ad] != 0) {
        param_1[0x5dd] = 0x41f00000;
      }
      param_1[0x5dd] = (int)((float)param_1[0x5dd] * 0.3);
    }
    iVar5 = FUN_00a8c760(10);
    if ((iVar5 != 0) && (param_1[0x5da] != 0)) {
      iVar5 = FUN_00a8cab0();
      param_1[0x3aa] = param_1[0x3a8];
      param_1[0x3a9] = iVar5;
      FUN_00a8caf0(0xf0001,0,0,0);
      param_1[0x3a8] = 0;
      FUN_00a962d0(0,0);
      param_1[0x4e7] = 0;
    }
  }
  if (((param_1[0x2a1] != 0) && (param_1[0x187] < 3)) && (iVar5 = FUN_00a12210(0xf00), iVar5 != 0))
  {
    fVar1 = *(float *)(param_1[0x2a1] + 0x48);
    fVar2 = *(float *)(iVar5 + 0x48);
    pcVar3 = *(code **)(*param_1 + 0x308);
    param_1[0x14] =
         (int)((*(float *)(param_1[0x2a1] + 0x40) - *(float *)(iVar5 + 0x40)) * 0.08 +
              (float)param_1[0x14]);
    param_1[0x16] = (int)((fVar1 - fVar2) * 0.08 + (float)param_1[0x16]);
    (*pcVar3)(0x3e99999a,0x393702d3,0x3db2b8c2,0);
  }
  iVar5 = FUN_00a8c760(0);
  if (iVar5 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3db2b8c2,0);
  }
  return;
}

// 0077B5F0  FUN_0077b5f0  size=222  [callgraph]
void __fastcall FUN_0077b5f0(int *param_1)

{
  short sVar1;
  int iVar2;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x5a,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
    param_1[0x5da] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    sVar1 = FUN_00dde2d0(1,2);
    param_1[0x5dd] = (int)((float)(int)sVar1 * 60.0);
    if (param_1[0x3ad] != 0) {
      param_1[0x5dd] = 0x41f00000;
    }
    param_1[0x5dd] = (int)((float)param_1[0x5dd] * 0.3);
  }
  return;
}

// 0077B6E0  FUN_0077b6e0  size=861  [callgraph]
void __fastcall FUN_0077b6e0(int *param_1)

{
  float fVar1;
  undefined4 uVar2;
  short sVar3;
  int iVar4;
  float10 fVar5;
  float local_20;
  int local_1c;
  float local_18;
  undefined4 local_14;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x47,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
    param_1[0x248] = 0x40400000;
    param_1[0x5da] = 0;
    if (param_1[0x3ad] != 0) {
      FUN_00a92f90();
      iVar4 = FUN_00e26e90();
      if (iVar4 != 0) {
        FUN_00e36720(0,0x3fc00000);
      }
    }
  }
  else if (param_1[0x187] != 1) goto LAB_0077b9f8;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  if (param_1[0x3ad] == 0) {
    iVar4 = FUN_00a8c760(8);
    if (iVar4 != 0) {
      if ((param_1[0x2a2] != 0) && (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) {
        local_20 = *(float *)(iVar4 + 0x40);
        local_18 = *(float *)(iVar4 + 0x48);
        local_14 = *(undefined4 *)(iVar4 + 0x4c);
        local_1c = param_1[0x15];
        fVar5 = (float10)FUN_00dde300(0xc0400000,0x40400000);
        local_20 = (float)(fVar5 + (float10)local_20);
        fVar5 = (float10)FUN_00dde300(0xc0400000,0x40400000);
        local_18 = (float)(fVar5 + (float10)local_18);
        if (param_1[0x509] != 0) {
          FUN_0043fc90(param_1[0x2a2],&local_20,0);
        }
      }
      uVar2 = 0;
      goto LAB_0077b9a8;
    }
  }
  else {
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if ((fVar1 - (float)param_1[0x244] < 0.0) &&
       (iVar4 = FUN_00a94e10(0,0x42b40000,0x43020000), iVar4 != 0)) {
      param_1[0x248] = (int)((float)param_1[0x248] + 6.0);
      if ((param_1[0x2a2] != 0) && (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) {
        local_20 = *(float *)(iVar4 + 0x40);
        local_18 = *(float *)(iVar4 + 0x48);
        local_14 = *(undefined4 *)(iVar4 + 0x4c);
        local_1c = param_1[0x15];
        fVar5 = (float10)FUN_00dde300(0xc0400000,0x40400000);
        local_20 = (float)(fVar5 + (float10)local_20);
        fVar5 = (float10)FUN_00dde300(0xc0400000,0x40400000);
        local_18 = (float)(fVar5 + (float10)local_18);
        if (param_1[0x509] != 0) {
          FUN_0043fc90(param_1[0x2a2],&local_20,0);
        }
      }
      uVar2 = 0x3d088889;
LAB_0077b9a8:
      FUN_00aa4080(0x49,2,uVar2,0x3f800000,0x8000210,0,0x3f800000);
    }
  }
  iVar4 = FUN_00a94ce0(0);
  if (iVar4 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    sVar3 = FUN_00dde2d0(0,2);
    param_1[0x5de] = (int)(((float)(int)sVar3 + 1.0) * 60.0);
  }
LAB_0077b9f8:
  iVar4 = FUN_00a8c760(0);
  if (iVar4 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3e0efa35,0);
  }
  return;
}

// 0077BA40  FUN_0077ba40  size=718  [callgraph]
void __fastcall FUN_0077ba40(int *param_1)

{
  float fVar1;
  int iVar2;
  float local_20;
  undefined4 local_1c;
  float local_18;
  undefined4 local_14;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x40,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
    param_1[0x5da] = 0;
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
    param_1[0x251] = 0;
    param_1[0x249] = 0x40000000;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x249];
    param_1[0x249] = (int)(fVar1 - (float)param_1[0x244]);
    if ((fVar1 - (float)param_1[0x244] < 0.0) && (param_1[0x704] == 0)) {
      if ((param_1[0x2a2] != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
        local_1c = *(undefined4 *)(iVar2 + 0x44);
        local_14 = *(undefined4 *)(iVar2 + 0x4c);
        local_18 = (float)(3 - param_1[0x251]) * 0.5;
        local_20 = local_18 + *(float *)(iVar2 + 0x40);
        local_18 = *(float *)(iVar2 + 0x48) + local_18;
        if (param_1[0x509] != 0) {
          FUN_0043fc90(param_1[0x2a2],&local_20,0);
        }
        param_1[0x251] = param_1[0x251] + 1;
      }
      FUN_00aa4080(0x44,2,0,0x3f800000,0x8000210,0,0x3f800000);
      param_1[0x249] = (int)((float)param_1[0x249] + 10.0);
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

// 0077BD40  FUN_0077bd40  size=445  [callgraph]
void __fastcall FUN_0077bd40(int *param_1)

{
  short sVar1;
  int iVar2;
  float10 fVar3;
  float local_20;
  int local_1c;
  float local_18;
  undefined4 local_14;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x4e,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
    param_1[0x5da] = 0;
  }
  else if (param_1[0x187] != 1) goto LAB_0077beb9;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a8c760(8);
  if (((iVar2 != 0) && (param_1[0x2a2] != 0)) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
    local_20 = *(float *)(iVar2 + 0x40);
    local_18 = *(float *)(iVar2 + 0x48);
    local_14 = *(undefined4 *)(iVar2 + 0x4c);
    local_1c = param_1[0x15];
    fVar3 = (float10)FUN_00dde300(0xc0400000,0x40400000);
    local_20 = (float)(fVar3 + (float10)local_20);
    fVar3 = (float10)FUN_00dde300(0xc0400000,0x40400000);
    local_18 = (float)(fVar3 + (float10)local_18);
    if (param_1[0x50a] != 0) {
      FUN_0043fc90(param_1[0x2a2],&local_20,0);
    }
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    sVar1 = FUN_00dde2d0(0,2);
    param_1[0x5df] = (int)(((float)(int)sVar1 + 1.0) * 60.0);
  }
LAB_0077beb9:
  iVar2 = FUN_00a8c760(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3db2b8c2,0);
  }
  return;
}

// 0077BF30  FUN_0077bf30  size=445  [callgraph]
void __fastcall FUN_0077bf30(int *param_1)

{
  short sVar1;
  int iVar2;
  float10 fVar3;
  float local_20;
  int local_1c;
  float local_18;
  undefined4 local_14;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x4e,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
    param_1[0x5da] = 0;
  }
  else if (param_1[0x187] != 1) goto LAB_0077c0a9;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a8c760(8);
  if (((iVar2 != 0) && (param_1[0x2a2] != 0)) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
    local_20 = *(float *)(iVar2 + 0x40);
    local_18 = *(float *)(iVar2 + 0x48);
    local_14 = *(undefined4 *)(iVar2 + 0x4c);
    local_1c = param_1[0x15];
    fVar3 = (float10)FUN_00dde300(0xc0400000,0x40400000);
    local_20 = (float)(fVar3 + (float10)local_20);
    fVar3 = (float10)FUN_00dde300(0xc0400000,0x40400000);
    local_18 = (float)(fVar3 + (float10)local_18);
    if (param_1[0x50a] != 0) {
      FUN_0043fc90(param_1[0x2a2],&local_20,5);
    }
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    sVar1 = FUN_00dde2d0(0,2);
    param_1[0x5df] = (int)(((float)(int)sVar1 + 1.0) * 60.0);
  }
LAB_0077c0a9:
  iVar2 = FUN_00a8c760(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3db2b8c2,0);
  }
  return;
}

// 0077C110  FUN_0077c110  size=522  [callgraph]
void __fastcall FUN_0077c110(int *param_1)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  int iVar4;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x22,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x3a7] = 1;
    FUN_00a95fb0(0x40400000);
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if ((iVar4 != 0) || (iVar4 = FUN_00a952e0(0,0x420c0000), iVar4 != 0)) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    param_1[0x50f] = param_1[0x50f] ^ 0x8000000;
    FUN_00aa4080(0x34,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
    param_1[0x5da] = 0;
    FUN_00a8d280();
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      param_1[0x3a7] = 0;
    }
    iVar4 = FUN_00a8c760(0);
    if (iVar4 != 0) {
      (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3eb2b8c2,0);
    }
    if (((param_1[0x2a1] != 0) && (iVar4 = FUN_00a8c760(10), iVar4 != 0)) &&
       (iVar4 = FUN_00a12210(0xf00), iVar4 != 0)) {
      fVar1 = *(float *)(param_1[0x2a1] + 0x48);
      fVar2 = *(float *)(iVar4 + 0x48);
      pcVar3 = *(code **)(*param_1 + 0x308);
      param_1[0x14] =
           (int)((float)param_1[0x14] +
                (*(float *)(param_1[0x2a1] + 0x40) - *(float *)(iVar4 + 0x40)) * 0.01);
      param_1[0x16] = (int)((fVar1 - fVar2) * 0.01 + (float)param_1[0x16]);
      (*pcVar3)(0x3f000000,0x393702d3,0x3e32b8c2,0);
      return;
    }
  }
  return;
}

// 0077C380  FUN_0077c380  size=112  [callgraph]
void __fastcall FUN_0077c380(int *param_1)

{
  int iVar1;
  
  if (3 < param_1[0x187]) {
    iVar1 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar1 != 0) {
      iVar1 = FUN_00a8cab0();
      param_1[0x3a9] = iVar1;
      param_1[0x3aa] = param_1[0x3a8];
      FUN_00a8caf0(0x10013,0,0,0);
      param_1[0x3a8] = 0;
      FUN_00a962d0(0,0);
      param_1[0x4e7] = 0;
    }
  }
  return;
}

// 0077C690  FUN_0077c690  size=198  [callgraph]
void __thiscall FUN_0077c690(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1[param_2 + 0x509] != 0) {
    if (((param_2 == 0) && (param_1[0x704] = 1, param_1[0x6fe] == 0)) && (param_1[0x139] == 0)) {
      iVar1 = FUN_00a8cbe0(0x50018);
      if (iVar1 == 0) {
        (**(code **)(*param_1 + 0x314))();
        iVar1 = FUN_00a8cab0();
        param_1[0x3a9] = iVar1;
        param_1[0x3aa] = param_1[0x3a8];
        FUN_00a8caf0(0x60001,0,0,0);
        param_1[0x3a8] = 0;
        FUN_00a962d0(0,0);
        param_1[0x4e7] = 0;
      }
    }
    uVar2 = FUN_00a81330();
    FUN_00a9e0d0(uVar2);
    FUN_00451280();
    param_1[param_2 + 0x509] = 0;
    FUN_00a7c950();
  }
  return;
}

// 0077C760  Emc060::vf150  size=130  [class]
void __thiscall Emc060::vf150(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 != 0) {
    FUN_00a7c950();
    uVar1 = FUN_00a7c7f0();
    FUN_00a7c960(uVar1);
    if (param_2 == 0x41) {
      uVar1 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xea4) = uVar1;
      *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
      FUN_00a8caf0(0x50018,0,0,0);
      *(undefined4 *)(param_1 + 0xea0) = 0;
      FUN_00a962d0(0,0);
      *(undefined4 *)(param_1 + 0x139c) = 0;
    }
  }
  return;
}

// 0077C900  Emc060::vf44  size=255  [class]
void __fastcall Emc060::vf44(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x7b0) + 8))();
    if (iVar1 != 0) {
      HkRemovePhysicsSystem::HkRemovePhysicsSystem();
      if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0x7b0) + 4))(1);
        *(undefined4 *)(param_1 + 0x7b0) = 0;
      }
    }
  }
  FUN_00eaa6e0(0x3f800000,0);
  FUN_00a9d8a0();
  piVar3 = (int *)(param_1 + 0x1790);
  iVar1 = 0x10;
  do {
    if ((*piVar3 != 0) && ((char)piVar3[-1] != '\x03')) {
      piVar2 = (int *)FUN_00910da0();
      (**(code **)(*piVar2 + 0x2c))(piVar3);
    }
    piVar3 = piVar3 + 5;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_00900ca0();
  if (*(int *)(param_1 + 0x764) != 0) {
    FUN_008e3c10();
    FUN_008e1c60();
  }
  FUN_00a92a00();
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    FUN_00a805f0();
  }
  FUN_00a7c950();
  FUN_00c1cf50(param_1);
  FUN_00c1d1c0(param_1);
  BehaviorEmBase::vf44();
  return;
}

// 0077CA00  Emc060::vf50  size=157  [class]
void __fastcall Emc060::vf50(int param_1)

{
  int *piVar1;
  int iVar2;
  
  BehaviorEmBase::vf50();
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x7b0) + 8))();
    if (iVar2 != 0) {
      FUN_008f3cb0(param_1);
    }
  }
  FUN_004066f0();
  if (*(int *)(param_1 + 0x1b64) != 0) {
    iVar2 = FUN_00a12210(0);
    Phantom::setTransform(iVar2 + 0x10);
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  FUN_00ac95d0();
  return;
}

// 0077CAA0  FUN_0077caa0  size=211  [between]
void __fastcall FUN_0077caa0(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x94,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x920) = 0x42f00000;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar1 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
  *(float *)(param_1 + 0x920) = fVar1;
  if (fVar1 < 0.0) {
    uVar2 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xea4) = uVar2;
    *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
    FUN_00a8caf0(0x30001,0,0,0);
    *(undefined4 *)(param_1 + 0xea0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x139c) = 0;
  }
  return;
}

// 0077CB80  FUN_0077cb80  size=759  [between]
void __fastcall FUN_0077cb80(int *param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(8,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x24f] = 0x41c80000;
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (param_1[0x2a1] != 0) {
      (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3d567750,0);
    }
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x70b] = param_1[0x3ad];
      return;
    }
    break;
  case 2:
    FUN_00aa4080(9,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    if ((float)param_1[0x244] * 0.1 * (float)param_1[0x244] * 0.1 <=
        ((float)param_1[0x25a] - (float)param_1[0x16]) *
        ((float)param_1[0x25a] - (float)param_1[0x16]) +
        ((float)param_1[600] - (float)param_1[0x14]) * ((float)param_1[600] - (float)param_1[0x14]))
    {
      param_1[0x24f] = 0x41c80000;
    }
    else {
      fVar1 = (float)param_1[0x24f];
      param_1[0x24f] = (int)(fVar1 - (float)param_1[0x244]);
      if (fVar1 - (float)param_1[0x244] <= 0.0) {
        iVar2 = FUN_00a8cab0();
        param_1[0x3a9] = iVar2;
        param_1[0x3aa] = param_1[0x3a8];
        FUN_00a8caf0(0x10010,0,0,0);
        param_1[0x3a8] = 0;
        FUN_00a962d0(0,0);
        param_1[0x4e7] = 0;
        param_1[0x70b] = param_1[0x3ad];
        return;
      }
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (param_1[0x2a1] != 0) {
      (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3d567750,0);
      param_1[0x70b] = param_1[0x3ad];
      return;
    }
    break;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a8c760(0x30);
    if (iVar2 == 0) {
      iVar2 = FUN_00a8c760(0x31);
      if (iVar2 == 0) goto LAB_0077ce2d;
      uVar3 = 10;
    }
    else {
      uVar3 = 0xb;
    }
    FUN_00aa4080(uVar3,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_0077ce2d;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_0077ce2d:
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      param_1[0x70b] = param_1[0x3ad];
      return;
    }
    break;
  default:
    break;
  }
  param_1[0x70b] = param_1[0x3ad];
  return;
}

// 0077CE90  FUN_0077ce90  size=256  [between]
void __fastcall FUN_0077ce90(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x2c,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
    pcVar1 = *(code **)(*param_1 + 0x358);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar1)(200,param_1 + 0x440);
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    FUN_00aa4080(0x2d,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00778940();
    param_1[0x6d6] = param_1[0x6d6] + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077cf8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 0077CFA0  FUN_0077cfa0  size=322  [between]
void __fastcall FUN_0077cfa0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x2c,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
    pcVar1 = *(code **)(*param_1 + 0x358);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar1)(200,param_1 + 0x440);
    param_1[0x6b7] = 0;
    param_1[0x6b6] = 0;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    FUN_00aa4080(0x2b,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x6b8] = param_1[0x6b8] + 1;
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00eaa6e0((float)param_1[0x6b8] * 30.0,0);
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077d0dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 0077D100  FUN_0077d100  size=450  [between]
void __fastcall FUN_0077d100(int *param_1)

{
  float fVar1;
  int iVar2;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x2f,0,0x3e888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00eaa6e0(0x42700000,0);
    param_1[0x6bb] = 0;
    param_1[0x6bc] = 0;
    param_1[0x6b8] = 0;
  case 1:
    *(undefined2 *)(param_1 + 0x209) = 3;
    param_1[0x20a] = 0x78;
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    FUN_00aa4080(0x30,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x43b40000;
  case 3:
    *(undefined2 *)(param_1 + 0x209) = 3;
    param_1[0x20a] = 0x78;
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 4:
    FUN_00aa4080(0x31,0,0x3e888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077d2be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 0077D2E0  FUN_0077d2e0  size=112  [between]
void __fastcall FUN_0077d2e0(int *param_1)

{
  int iVar1;
  
  if (3 < param_1[0x187]) {
    iVar1 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar1 != 0) {
      iVar1 = FUN_00a8cab0();
      param_1[0x3a9] = iVar1;
      param_1[0x3aa] = param_1[0x3a8];
      FUN_00a8caf0(0x10013,0,0,0);
      param_1[0x3a8] = 0;
      FUN_00a962d0(0,0);
      param_1[0x4e7] = 0;
    }
  }
  return;
}

// 0077D350  FUN_0077d350  size=112  [between]
void __fastcall FUN_0077d350(int *param_1)

{
  int iVar1;
  
  if (3 < param_1[0x187]) {
    iVar1 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar1 != 0) {
      iVar1 = FUN_00a8cab0();
      param_1[0x3a9] = iVar1;
      param_1[0x3aa] = param_1[0x3a8];
      FUN_00a8caf0(0x10013,0,0,0);
      param_1[0x3a8] = 0;
      FUN_00a962d0(0,0);
      param_1[0x4e7] = 0;
    }
  }
  return;
}

// 0077D3C0  FUN_0077d3c0  size=129  [between]
void __fastcall FUN_0077d3c0(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x1d4))(1);
  (**(code **)(*param_1 + 0x314))();
  iVar1 = (**(code **)(*param_1 + 800))(0x3d888889);
  if (iVar1 != 0) {
    iVar1 = FUN_00a8cab0();
    param_1[0x3a9] = iVar1;
    param_1[0x3aa] = param_1[0x3a8];
    FUN_00a8caf0(0x10013,0,0,0);
    param_1[0x3a8] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4e7] = 0;
  }
  return;
}

// 0077D450  FUN_0077d450  size=156  [between]
void __fastcall FUN_0077d450(int *param_1)

{
  int iVar1;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x5d,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00eaa6e0(0x41200000,0);
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077d4ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 0077D4F0  FUN_0077d4f0  size=468  [between]
void __fastcall FUN_0077d4f0(int *param_1)

{
  int iVar1;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  *(undefined2 *)(param_1 + 0x209) = 4;
  param_1[0x20a] = 0x78;
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x8b,0,0x3e888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00eaa6e0(0x41200000,0);
    FUN_00eaa6e0(0x41200000,0);
    (**(code **)(*param_1 + 0x358))(0xca,param_1 + 0x440);
    param_1[0x6ba] = 0;
    param_1[0x6d3] = param_1[param_1[0x3ad] + 0x6a8];
    param_1[0x6bb] = 0;
    param_1[0x6bc] = 0;
    param_1[0x6bd] = 0;
    param_1[0x6be] = 0;
    param_1[0x6bf] = 0;
    param_1[0x6c0] = 0;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    FUN_00aa4080(0x8c,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x43340000;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      iVar1 = FUN_00a8cab0();
      param_1[0x3a9] = iVar1;
      param_1[0x3aa] = param_1[0x3a8];
      FUN_00a8caf0(0x6000a,0,0,0);
      param_1[0x3a8] = 0;
      FUN_00a962d0(0,0);
      param_1[0x4e7] = 0;
      return;
    }
  }
  return;
}

// 0077D6E0  FUN_0077d6e0  size=224  [between]
void __fastcall FUN_0077d6e0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(byte *)(param_1 + 0xdb4) = *(byte *)(param_1 + 0xdb4) | 8;
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar2 = 0x8000000;
    if (*(int *)(param_1 + 0x1bf0) != 0) {
      uVar2 = 0x8000040;
    }
    FUN_00aa4080(0x79,0,0x3d088889,0x3f800000,uVar2,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x894) = 0x3da3d70a;
    FUN_0077b0f0();
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    uVar2 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xea4) = uVar2;
    *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
    FUN_00a8caf0(0x6000d,0,0,0);
    *(undefined4 *)(param_1 + 0xea0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x139c) = 0;
  }
  return;
}

// 0077D7C0  FUN_0077d7c0  size=117  [between]
void __fastcall FUN_0077d7c0(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x1d4))(1);
  iVar1 = (**(code **)(*param_1 + 800))(0x3d888889);
  if (iVar1 != 0) {
    iVar1 = FUN_00a8cab0();
    param_1[0x3a9] = iVar1;
    param_1[0x3aa] = param_1[0x3a8];
    FUN_00a8caf0(0x6000e,0,0,0);
    param_1[0x3a8] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4e7] = 0;
  }
  return;
}

// 0077D840  FUN_0077d840  size=211  [between]
void __fastcall FUN_0077d840(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(byte *)(param_1 + 0xdb4) = *(byte *)(param_1 + 0xdb4) | 8;
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar2 = 0x8000000;
    if (*(int *)(param_1 + 0x1bf0) != 0) {
      uVar2 = 0x8000040;
    }
    FUN_00aa4080(0x77,0,0x3d088889,0x3f800000,uVar2,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x1bf8) == 0) {
      uVar2 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xea4) = uVar2;
      *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
      uVar2 = 0x60017;
    }
    else {
      uVar2 = 0x80008;
    }
    FUN_00a8caf0(uVar2,0,0,0);
    *(undefined4 *)(param_1 + 0xea0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x139c) = 0;
  }
  return;
}

// 0077D920  FUN_0077d920  size=236  [between]
void __fastcall FUN_0077d920(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(byte *)(param_1 + 0xdb4) = *(byte *)(param_1 + 0xdb4) | 8;
  if (*(int *)(param_1 + 0x61c) == 0) {
    *(undefined4 *)(param_1 + 0x940) = 0;
    if (1.5707964 < *(float *)(param_1 + 0xaa0)) {
      *(undefined4 *)(param_1 + 0x940) = 1;
    }
    FUN_00aa4080(0x72,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_0077b0f0();
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    uVar2 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xea4) = uVar2;
    *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
    FUN_00a8caf0(0x60017,0,0,0);
    *(undefined4 *)(param_1 + 0xea0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x139c) = 0;
  }
  return;
}

// 0077DA10  FUN_0077da10  size=236  [between]
void __fastcall FUN_0077da10(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(byte *)(param_1 + 0xdb4) = *(byte *)(param_1 + 0xdb4) | 8;
  if (*(int *)(param_1 + 0x61c) == 0) {
    *(undefined4 *)(param_1 + 0x940) = 0;
    if (1.5707964 < *(float *)(param_1 + 0xaa0)) {
      *(undefined4 *)(param_1 + 0x940) = 1;
    }
    FUN_00aa4080(0x73,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_0077b0f0();
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    uVar2 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xea4) = uVar2;
    *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
    FUN_00a8caf0(0x60017,0,0,0);
    *(undefined4 *)(param_1 + 0xea0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x139c) = 0;
  }
  return;
}

// 0077DB00  FUN_0077db00  size=224  [between]
void __fastcall FUN_0077db00(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(byte *)(param_1 + 0xdb4) = *(byte *)(param_1 + 0xdb4) | 8;
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar2 = 0x8000000;
    if (*(int *)(param_1 + 0x1bf0) != 0) {
      uVar2 = 0x8000040;
    }
    FUN_00aa4080(0x7b,0,0x3d088889,0x3f800000,uVar2,0xbf800000,0x3f800000);
    FUN_0077b0f0();
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x894) = 0x3dcccccd;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    uVar2 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xea4) = uVar2;
    *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
    FUN_00a8caf0(0x60012,0,0,0);
    *(undefined4 *)(param_1 + 0xea0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x139c) = 0;
  }
  return;
}

// 0077DBE0  FUN_0077dbe0  size=117  [between]
void __fastcall FUN_0077dbe0(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x1d4))(1);
  iVar1 = (**(code **)(*param_1 + 800))(0x3d888889);
  if (iVar1 != 0) {
    iVar1 = FUN_00a8cab0();
    param_1[0x3a9] = iVar1;
    param_1[0x3aa] = param_1[0x3a8];
    FUN_00a8caf0(0x60013,0,0,0);
    param_1[0x3a8] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4e7] = 0;
  }
  return;
}

// 0077DC60  FUN_0077dc60  size=211  [between]
void __fastcall FUN_0077dc60(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(byte *)(param_1 + 0xdb4) = *(byte *)(param_1 + 0xdb4) | 8;
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar2 = 0x8000000;
    if (*(int *)(param_1 + 0x1bf0) != 0) {
      uVar2 = 0x8000040;
    }
    FUN_00aa4080(0x7d,0,0x3d088889,0x3f800000,uVar2,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x1bf8) == 0) {
      uVar2 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xea4) = uVar2;
      *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
      uVar2 = 0x60017;
    }
    else {
      uVar2 = 0x80008;
    }
    FUN_00a8caf0(uVar2,0,0,0);
    *(undefined4 *)(param_1 + 0xea0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x139c) = 0;
  }
  return;
}

// 0077DD40  FUN_0077dd40  size=212  [between]
void __fastcall FUN_0077dd40(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(byte *)(param_1 + 0xdb4) = *(byte *)(param_1 + 0xdb4) | 8;
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x7f,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined2 *)(param_1 + 0x824) = 1;
    *(undefined4 *)(param_1 + 0x828) = 0x78;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    uVar2 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
    *(undefined4 *)(param_1 + 0xea4) = uVar2;
    FUN_00a8caf0(0x60015,0,0,0);
    *(undefined4 *)(param_1 + 0xea0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x139c) = 0;
  }
  return;
}

// 0077DE20  FUN_0077de20  size=203  [between]
void __fastcall FUN_0077de20(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(byte *)(param_1 + 0xdb4) = *(byte *)(param_1 + 0xdb4) | 8;
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x81,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x1b94) = 0;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    uVar2 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xea4) = uVar2;
    *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
    FUN_00a8caf0(0x10000,0,0,0);
    *(undefined4 *)(param_1 + 0xea0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x139c) = 0;
  }
  return;
}

// 0077DEF0  FUN_0077def0  size=92  [between]
void __fastcall FUN_0077def0(int param_1)

{
  undefined4 uVar1;
  
  if (*(float *)(param_1 + 0x1b3c) <= 0.0) {
    uVar1 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xea4) = uVar1;
    *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
    FUN_00a8caf0(0x6000a,0,0,0);
    *(undefined4 *)(param_1 + 0xea0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x139c) = 0;
  }
  return;
}

// 0077DF50  FUN_0077df50  size=110  [between]
void __fastcall FUN_0077df50(int param_1)

{
  *(byte *)(param_1 + 0xdb4) = *(byte *)(param_1 + 0xdb4) | 8;
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x83,0,0x3e2aaaab,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_0077b0f0();
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0077E020  FUN_0077e020  size=110  [between]
void __fastcall FUN_0077e020(int param_1)

{
  *(byte *)(param_1 + 0xdb4) = *(byte *)(param_1 + 0xdb4) | 8;
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x84,0,0x3e2aaaab,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_0077b0f0();
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0077E090  FUN_0077e090  size=211  [between]
void __fastcall FUN_0077e090(int param_1)

{
  int iVar1;
  
  *(byte *)(param_1 + 0xdb4) = *(byte *)(param_1 + 0xdb4) | 8;
  if (*(int *)(param_1 + 0x61c) == 0) {
    *(undefined4 *)(param_1 + 0x940) = 0;
    if (1.5707964 < *(float *)(param_1 + 0xaa0)) {
      *(undefined4 *)(param_1 + 0x940) = 1;
    }
    FUN_00aa4080(0x72,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_0077b0f0();
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00a8caf0(0x8002a,0,0,0);
    *(undefined4 *)(param_1 + 0xea0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x139c) = 0;
  }
  return;
}

// 0077E170  FUN_0077e170  size=183  [between]
void __fastcall FUN_0077e170(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0xca,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    uVar2 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xea4) = uVar2;
    *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
    FUN_00a8caf0(0x10000,0,0,0);
    *(undefined4 *)(param_1 + 0xea0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x139c) = 0;
  }
  return;
}

// 0077E230  FUN_0077e230  size=1701  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0077e230(int *param_1)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  float10 fVar11;
  int local_3c;
  int local_38;
  int iStack_34;
  int local_30;
  float local_2c;
  int local_28;
  int local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x95,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x3a7] = 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar6 = FUN_00a952e0(0,0x43340000);
    if (iVar6 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 2:
    FUN_00aa4080(0x1e,0,0x3f000000,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    iVar6 = (**(code **)(*param_1 + 0x84))();
    uStack_1c = *(undefined4 *)(iVar6 + 4);
    uStack_20 = 0;
    uStack_18 = 0;
    (**(code **)(*param_1 + 0x88))(&uStack_20);
    param_1[0x248] = param_1[0x11];
    param_1[0x24a] = param_1[0x11];
    param_1[0x249] = _DAT_01883054;
    param_1[0x24b] = 0;
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if ((float)param_1[0x24a] - (float)param_1[0x249] <= (float)param_1[0x248]) {
      fVar2 = (float)param_1[0x15] - (float)param_1[0x24b] * 0.08166667;
      param_1[0x15] = (int)fVar2;
      param_1[0x248] = (int)fVar2;
      fVar11 = (float10)FUN_00e049b0();
      param_1[0x24b] = (int)(float)(fVar11 + (float10)(float)param_1[0x24b]);
    }
    else {
      local_30 = param_1[0x10];
      iVar6 = *param_1;
      local_28 = param_1[0x12];
      local_24 = param_1[0x13];
      local_2c = (float)param_1[0x24a] - (float)param_1[0x249];
      uVar8 = (**(code **)(iVar6 + 0x84))();
      (**(code **)(iVar6 + 0x7c))(&local_30,uVar8);
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 4:
    FUN_00aa4080(0x1f,0,0x3eaaaaab,0x3f800000,0,0xbf800000,0x3f800000);
    pcVar1 = *(code **)(*param_1 + 0x358);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar1)(0,param_1 + 1000);
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar6 = FUN_00a959f0(0);
    iVar9 = FUN_00a957b0(0);
    if ((float)iVar9 - 1.0 < (float)iVar6 != ((float)iVar9 - 1.0 == (float)iVar6)) {
      piVar7 = param_1;
      FUN_00c1cf50(param_1);
      FUN_00c54720(piVar7);
      if (param_1[0x509] != 0) {
        FUN_00442430(1);
      }
      if (param_1[0x50a] != 0) {
        FUN_00442430(1);
      }
      if (param_1[0x50b] != 0) {
        FUN_00442430(1);
      }
      iVar6 = FUN_00ac89d0();
      if (iVar6 != 0) {
        iVar6 = FUN_00ac89d0();
        iVar10 = 0;
        iVar9 = 0;
        if (0 < *(short *)(iVar6 + 0x32c)) {
          do {
            *(undefined4 *)(iVar10 + 0x460 + *(int *)(iVar6 + 0x328)) = 2;
            iVar9 = iVar9 + 1;
            iVar10 = iVar10 + 0x560;
          } while (iVar9 < *(short *)(iVar6 + 0x32c));
        }
      }
      FUN_00ac8e10(0);
      param_1[0x70d] = 1;
      param_1[0x36a] = 0;
      param_1[0x36c] = 0;
      iVar6 = FUN_00a81330();
      if (iVar6 != 0) {
        uVar8 = FUN_00a7c8a0();
        iVar6 = FUN_00754570(uVar8);
        if (iVar6 != 0) {
          FUN_00a88b50(4,0);
        }
      }
      FUN_00a88b50(4,0);
      param_1[0x187] = param_1[0x187] + 1;
switchD_0077e254_caseD_6:
      FUN_00aa4080(0x95,0,0x3eaaaaab,0x3f800000,0x8000080,0x4092aaab,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      goto switchD_0077e254_caseD_7;
    }
    break;
  case 6:
    goto switchD_0077e254_caseD_6;
  case 7:
    goto switchD_0077e254_caseD_7;
  case 8:
    param_1[0x50f] = param_1[0x50f] ^ 0x8000000;
    FUN_00aa4080(0x34,0,0x3eaaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_008e5c50(0x1f);
    param_1[0x24b] = 0x41200000;
    FUN_00a8d280();
    param_1[0x5da] = 0;
    FUN_00a8d280();
    goto LAB_0077e675;
  case 9:
LAB_0077e675:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar6 = FUN_00a94ce0(0);
    if (iVar6 != 0) {
      param_1[0x3a7] = 0;
      FUN_008e6d00();
      FUN_008e4580(param_1 + 0x10,1);
      FUN_008e5c50(7);
      (**(code **)(*param_1 + 0x34c))();
    }
    if ((float)param_1[0x24b] < 5.0) {
      param_1[0x15] = (int)((float)param_1[0x15] - (float)param_1[0x249] * 0.2);
      param_1[0x24b] = (int)((float)param_1[0x24b] + 1.0);
    }
    iVar6 = FUN_00a8c760(0x36);
    if (iVar6 != 0) {
      local_38 = 0;
      param_1[0x249] = _DAT_01883050;
      param_1[0x24b] = 0;
      piVar7 = (int *)FUN_00c18350();
      iVar6 = *piVar7;
      uVar8 = FUN_00e03ea0(&DAT_0163cc0c);
      (**(code **)(iVar6 + 0x40))(uVar8);
      piVar7 = (int *)FUN_00c18350();
      iVar6 = *piVar7;
      uVar8 = FUN_00e03ea0(&DAT_0163cc04);
      iVar9 = (**(code **)(iVar6 + 0x40))(uVar8);
      piVar7 = (int *)FUN_00c18350();
      iVar6 = *piVar7;
      uVar8 = FUN_00e03ea0(&DAT_0163cbfc);
      iVar6 = (**(code **)(iVar6 + 0x40))(uVar8);
      iVar10 = 0;
      if (iVar9 == 0) {
        local_3c = 0;
      }
      else {
        uVar8 = FUN_00a7c8a0();
        local_3c = FUN_00445aa0(uVar8);
      }
      if (iStack_34 != 0) {
        uVar8 = FUN_00a7c8a0();
        iVar10 = FUN_00445aa0(uVar8);
      }
      if (iVar6 == 0) {
        iVar6 = 0;
      }
      else {
        uVar8 = FUN_00a7c8a0();
        iVar6 = FUN_00445aa0(uVar8);
      }
      if ((local_3c == 0) ||
         (fVar2 = (float)param_1[0x10] - *(float *)(local_3c + 0x40),
         fVar3 = (float)param_1[0x11] - *(float *)(local_3c + 0x44),
         fVar4 = (float)param_1[0x12] - *(float *)(local_3c + 0x48),
         fVar2 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2), iVar9 = local_3c,
         100.0 <= fVar2)) {
        fVar2 = 100.0;
        iVar9 = local_38;
      }
      local_38 = iVar9;
      if ((iVar10 != 0) &&
         (fVar3 = (float)param_1[0x10] - *(float *)(iVar10 + 0x40),
         fVar4 = (float)param_1[0x11] - *(float *)(iVar10 + 0x44),
         fVar5 = (float)param_1[0x12] - *(float *)(iVar10 + 0x48),
         fVar3 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3), fVar3 < fVar2)) {
        fVar2 = fVar3;
        local_38 = iVar10;
      }
      if ((iVar6 != 0) &&
         (fVar3 = (float)param_1[0x10] - *(float *)(iVar6 + 0x40),
         fVar4 = (float)param_1[0x11] - *(float *)(iVar6 + 0x44),
         fVar5 = (float)param_1[0x12] - *(float *)(iVar6 + 0x48),
         SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3) < fVar2)) {
        local_38 = iVar6;
      }
      if (local_38 != 0) {
        FUN_00411ae0();
      }
    }
    break;
  default:
    break;
  }
  goto switchD_0077e254_default;
switchD_0077e254_caseD_7:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar6 = FUN_00a8c760(10);
  if (iVar6 != 0) {
    (**(code **)(*param_1 + 0x358))(0,param_1 + 1000);
  }
  iVar6 = FUN_00a94ce0(0);
  if (iVar6 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
switchD_0077e254_default:
  (**(code **)(*param_1 + 0x220))(0x40a00000);
  return;
}

// 0077E900  Emc060::vf248  size=36  [class]
void __fastcall Emc060::vf248(int param_1)

{
  FUN_00e00900();
  FUN_00e03080(*(undefined4 *)(param_1 + 0x4f0),0);
  return;
}

// 0077E930  FUN_0077e930  size=103  [between]
void __fastcall FUN_0077e930(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_00a7c950();
  uVar1 = FUN_00a7c7f0();
  FUN_00a7c960(uVar1);
  iVar2 = FUN_00a7c8a0();
  if (iVar2 != 0) {
    FUN_00765a40(*(undefined4 *)(param_1 + 0x4f0));
  }
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    iVar2 = FUN_00a7c8a0();
    if (iVar2 != 0) {
      FUN_00765aa0();
    }
  }
  return;
}

// 0077E9A0  Emc060::vf264  size=431  [class]
undefined4 __thiscall Emc060::vf264(int param_1,undefined4 param_2)

{
  byte bVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  byte *pbVar6;
  byte *pbVar7;
  bool bVar8;
  
  bVar8 = false;
  FUN_0040ac60(param_2);
  iVar3 = FUN_00c19c00(*(undefined4 *)(param_1 + 0xb9c),(int)*(short *)(param_1 + 0xab2),
                       *(undefined4 *)(param_1 + 0xb20));
  if ((iVar3 != 0) && (*(int *)(iVar3 + 0x24) == 0x2c040)) {
    uVar4 = FUN_00a7c7f0();
    FUN_00a7c960(uVar4);
    piVar5 = (int *)FUN_00a7c8a0();
    if (piVar5 != (int *)0x0) {
      pcVar2 = *(code **)(*piVar5 + 0xf8);
      bVar8 = true;
      piVar5[0x1bb] = 0;
      (*pcVar2)(1);
      (**(code **)(*piVar5 + 0x20))();
      if ((*(byte *)(param_1 + 0x4a8) & 4) != 0) {
        iVar3 = FUN_00754570(piVar5);
        if (iVar3 != 0) {
          FUN_00a88b50(1,0);
        }
      }
    }
  }
  FUN_00aa0920(*(undefined4 *)(param_1 + 0xb0c));
  if (*(int *)(param_1 + 0x7d8) == 0) {
    FUN_00dd5650(&DAT_01647bc8);
  }
  if (!bVar8) {
    FUN_00dd5650(&DAT_01647b90);
  }
  *(undefined4 *)(param_1 + 0x1b5c) = 0;
  if (*(int *)(param_1 + 0x618) == 0x10000) {
    iVar3 = FUN_00932720();
    if (iVar3 == 0x220) {
      pbVar7 = (byte *)0x163d90c;
      pbVar6 = DAT_018b925c;
      do {
        bVar1 = *pbVar6;
        bVar8 = bVar1 < *pbVar7;
        if (bVar1 != *pbVar7) {
LAB_0077ead6:
          iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_0077eadb;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar6[1];
        bVar8 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_0077ead6;
        pbVar6 = pbVar6 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_0077eadb:
      if (iVar3 == 0) {
        *(float *)(param_1 + 0x1b5c) = (float)(int)*(short *)(param_1 + 0xab2) * 8.0;
        uVar4 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xea4) = uVar4;
        *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
        FUN_00a8caf0(0x10009,0,0,0);
        *(undefined4 *)(param_1 + 0xea0) = 0;
        FUN_00a962d0(0,0);
        *(undefined4 *)(param_1 + 0x139c) = 0;
      }
    }
  }
  return 1;
}

// 0077EBE0  FUN_0077ebe0  size=126  [between]
void __fastcall FUN_0077ebe0(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  uVar1 = FUN_00ac8660(0,0x1d);
  *(undefined4 *)(param_1 + 0x19a4) = uVar1;
  uVar1 = FUN_00ac8660(0,0x1e);
  *(undefined4 *)(param_1 + 0x19a8) = uVar1;
  uVar1 = FUN_00ac8660(0,0x1f);
  *(undefined4 *)(param_1 + 0x19ac) = uVar1;
  uVar1 = FUN_00ac8660(0,0x20);
  *(undefined4 *)(param_1 + 0x19b0) = uVar1;
  if (*(int *)(param_1 + 0x4a0) == 1) {
    FUN_00ac85c0(5,0x8c);
    puVar2 = (undefined4 *)(param_1 + 0x19a4);
    iVar3 = 4;
    do {
      uVar1 = FUN_00fdbc60();
      *puVar2 = uVar1;
      puVar2 = puVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

// 0077ECB0  FUN_0077ecb0  size=74  [between]
void __fastcall FUN_0077ecb0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00778c30();
  if ((iVar1 != 0) && (*(int *)(param_1 + 0xeb4) == 0)) {
    iVar1 = FUN_00a8cbe0(0x1000a);
    if ((iVar1 == 0) && (0 < *(int *)(param_1 + 0x19bc))) {
      *(undefined4 *)(param_1 + 0x19b8) = 1;
      *(int *)(param_1 + 0x19bc) = *(int *)(param_1 + 0x19bc) + -1;
      FUN_007788a0();
      return;
    }
  }
  return;
}

// 0077ED00  FUN_0077ed00  size=551  [between]
undefined4 __fastcall FUN_0077ed00(uint param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint local_4;
  
  local_4 = param_1;
  sVar1 = FUN_00dde2d0(0,2);
  if (((int)sVar1 + 0x1000dU & 0xffff0000) != 0x80000) {
    uVar2 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xea4) = uVar2;
    *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
  }
  FUN_00a8caf0((int)sVar1 + 0x1000dU,0,0,0);
  *(undefined4 *)(param_1 + 0xea0) = 0;
  FUN_00a962d0(0,0);
  *(undefined4 *)(param_1 + 0x139c) = 0;
  if (*(int *)(param_1 + 0x4a0) == 1) {
    if (*(float *)(param_1 + 0xa90) <= 16.0) {
      uVar2 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xea4) = uVar2;
      *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
      FUN_00a8caf0(0x1000f,0,0,0);
      *(undefined4 *)(param_1 + 0xea0) = 0;
      FUN_00a962d0(0,0);
      *(undefined4 *)(param_1 + 0x139c) = 0;
    }
    if ((*(float *)(param_1 + 0xa90) <= 49.0) && (sVar1 = FUN_00dde2d0(0,1), sVar1 != 0)) {
      uVar2 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xea4) = uVar2;
      *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
      FUN_00a8caf0(0x1000f,0,0,0);
      *(undefined4 *)(param_1 + 0xea0) = 0;
      FUN_00a962d0(0,0);
      *(undefined4 *)(param_1 + 0x139c) = 0;
    }
  }
  iVar3 = *(int *)(param_1 + 0x618);
  if ((((iVar3 != 0x1000d) || (*(int *)(param_1 + 0x1b7c) != 1)) &&
      ((iVar3 != 0x1000e || (*(int *)(param_1 + 0x1b80) != 1)))) &&
     ((iVar3 != 0x1000f || (*(int *)(param_1 + 0x1b78) != 1)))) {
    iVar3 = FUN_00778ad0(&local_4);
    uVar4 = local_4;
    if (iVar3 == 0) {
      if (*(int *)(param_1 + 0x1b74) == 0) {
        if (*(float *)(param_1 + 0xa90) <= 9.0) {
          return 1;
        }
        uVar2 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
        uVar4 = 0x10010;
      }
      else {
        uVar2 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
        uVar4 = 0x10003;
      }
      *(undefined4 *)(param_1 + 0xea4) = uVar2;
    }
    else if ((local_4 & 0xffff0000) != 0x80000) {
      uVar2 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xea4) = uVar2;
      *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
    }
    FUN_00a8caf0(uVar4,0,0,0);
    *(undefined4 *)(param_1 + 0xea0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x139c) = 0;
  }
  return 1;
}

// 0077EF30  FUN_0077ef30  size=108  [between]
void __thiscall FUN_0077ef30(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_20;
  float local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_20 = *(undefined4 *)(param_1 + 0x40);
  local_18 = *(undefined4 *)(param_1 + 0x48);
  local_14 = *(undefined4 *)(param_1 + 0x4c);
  local_1c = *(float *)(param_1 + 0x44) + 1.0;
  iVar1 = FUN_009f8b40();
  FUN_0090fa30(param_1 + 0x1b90,0,&local_20,0x3f000000,param_2,iVar1 << 0x10 | 7,"Emc060");
  return;
}

// 0077EFA0  FUN_0077efa0  size=268  [between]
/* WARNING: Removing unreachable block (ram,0x0077f011) */

undefined4 __fastcall FUN_0077efa0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_28;
  int local_24;
  undefined1 local_20 [28];
  
  uVar4 = 0;
  iVar1 = FUN_00907640(param_1 + 0x1b90,&local_24,local_20);
  if (iVar1 != 0) {
    uVar4 = 1;
    local_28 = 1;
    FUN_0112bcf0();
    if (0 < *(int *)(local_24 + 0x14)) {
      iVar1 = *(int *)(local_24 + 0x10);
      iVar2 = *(int *)(iVar1 + 0x28);
      iVar3 = 0;
      iVar5 = 0;
      if (*(char *)(iVar2 + 0x18) == '\x01') {
        iVar3 = *(char *)(iVar2 + 0x10) + iVar2;
      }
      if (*(char *)(iVar2 + 0x18) == '\x02') {
        if (*(char *)(iVar2 + 0x18) == '\x02') {
          iVar5 = *(char *)(iVar2 + 0x10) + iVar2;
        }
        else {
          iVar5 = 0;
        }
      }
      if (iVar3 != 0) {
        iVar2 = FUN_008f7780(iVar3);
        if ((*(int *)(param_1 + 0xa84) != 0) && (iVar2 == *(int *)(param_1 + 0xa84))) {
          local_28 = 0;
        }
      }
      if (iVar5 != 0) {
        iVar2 = FUN_008f7780(iVar5);
        if ((*(int *)(param_1 + 0xa84) != 0) && (iVar2 == *(int *)(param_1 + 0xa84))) {
          local_28 = 0;
        }
      }
      if (*(float *)(iVar1 + 0x10) * 0.0 + *(float *)(iVar1 + 0x14) + *(float *)(iVar1 + 0x18) * 0.0
          <= 0.999) {
        return local_28;
      }
      return 0;
    }
  }
  return uVar4;
}

// 0077F0B0  FUN_0077f0b0  size=129  [between]
void __fastcall FUN_0077f0b0(int param_1)

{
  undefined4 uVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if (0x7fffffff < *(uint *)(param_1 + 0x1c70)) {
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    uVar1 = FUN_0093c1f0((int)*(char *)(param_1 + 0xbab),*(undefined4 *)(param_1 + 0x4f0),4,0,
                         &local_20,&local_30,0x41200000,0x3f000000,0xbf800000);
    *(undefined4 *)(param_1 + 0x1c70) = uVar1;
  }
  return;
}

// 0077F140  FUN_0077f140  size=88  [between]
undefined4 __fastcall FUN_0077f140(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = 0;
  local_4 = 0;
  if (*(int *)(param_1 + 0x1b94) == 0) {
    iVar2 = FUN_00a9b930();
    if (iVar2 == 0) {
      return local_8;
    }
    uVar1 = 0;
  }
  else {
    iVar2 = FUN_00a9b930();
    if (iVar2 == 0) {
      return local_8;
    }
    uVar1 = 0x40a00000;
  }
  FUN_00bc3c20(param_1 + 0x40,&local_8,&local_4,uVar1);
  return local_8;
}

// 0077F1A0  FUN_0077f1a0  size=312  [between]
undefined4 __fastcall FUN_0077f1a0(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cbe0(0x8002c);
  if ((((((iVar1 == 0) && (iVar1 = FUN_00a8cbe0(0x8002e), iVar1 == 0)) &&
        (iVar1 = FUN_00a8cbe0(0x8002d), iVar1 == 0)) &&
       ((param_1[0x6fd] != 0 && (param_1[0x6fe] == 0)))) &&
      ((iVar1 = FUN_00a8cbe0(0x80000), iVar1 == 0 &&
       ((iVar1 = FUN_00a8cbe0(0x8000e), iVar1 == 0 && (iVar1 = FUN_00a8cbe0(0x50018), iVar1 == 0))))
      )) && (iVar1 = FUN_00a8cbe0(0x8002a), iVar1 == 0)) {
    iVar1 = FUN_0077f140();
    if (iVar1 == 0) {
      if (param_1[0x6e5] == 0) {
        return 0;
      }
    }
    else if (param_1[0x6e5] == 0) {
      (**(code **)(*param_1 + 0x314))();
      param_1[0x3a7] = 0;
      param_1[0x6e5] = 1;
      iVar1 = FUN_00a8cab0();
      param_1[0x3a9] = iVar1;
      param_1[0x3aa] = param_1[0x3a8];
      FUN_00a8caf0(0x60014,0,0,0);
      param_1[0x3a8] = 0;
      FUN_00a962d0(0,0);
      param_1[0x4e7] = 0;
      return 1;
    }
    iVar1 = FUN_0077f140();
    if (iVar1 == 0) {
      param_1[0x6e5] = 0;
    }
  }
  return 0;
}

// 0077F330  FUN_0077f330  size=97  [between]
void __fastcall FUN_0077f330(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined *puVar4;
  
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar4 = &DAT_01be9db8;
    (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
    iVar1 = FUN_00dd6d80(puVar4);
    if (iVar1 != 0) {
      uVar3 = FUN_009f8b40();
      FUN_009f8ae0(uVar3);
    }
  }
  *(undefined4 *)(param_1 + 0x654) = 0;
  *(undefined4 *)(param_1 + 0x13a0) = 0x44160000;
  return;
}

// 0077F400  FUN_0077f400  size=175  [between]
undefined4 __fastcall FUN_0077f400(int *param_1)

{
  int iVar1;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar1 = FUN_00ac8a50();
  if (((iVar1 == 0) && (param_1[0x139] == 0)) && ((DAT_01bea060 & 0x2000000) == 0)) {
    iVar1 = (**(code **)(*param_1 + 0x1d8))();
    if ((iVar1 == 0) && (0 < param_1[0x21c])) {
      iVar1 = FUN_00a8cbe0(0x1000c);
      if (iVar1 != 0) {
        iVar1 = FUN_00a8cac0();
        if (iVar1 < 4) {
          uStack_20 = 0;
          uStack_1c = 0;
          uStack_18 = 0;
          FUN_00c593a0(param_1[0x13c],0xffffffff,&uStack_20,0x40800000,0x3fc00000,2,8);
          return 1;
        }
      }
    }
  }
  return 0;
}

// 0077F4B0  FUN_0077f4b0  size=958  [between]
void __fastcall FUN_0077f4b0(int param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  float unaff_EBX;
  float unaff_ESI;
  float unaff_EDI;
  uint uVar5;
  float10 fVar6;
  undefined *puVar7;
  undefined4 uVar8;
  float fVar9;
  float fStack_58;
  float fStack_54;
  undefined1 auStack_50 [76];
  
  uVar5 = 0;
  iVar2 = FUN_00a81330();
  if ((iVar2 != 0) && (piVar3 = (int *)FUN_00a7c8a0(), piVar3 != (int *)0x0)) {
    puVar7 = &DAT_01b35810;
    (**(code **)(*piVar3 + 4))(&DAT_01b35810);
    iVar4 = FUN_00dd6d80(puVar7);
    uVar5 = -(uint)(iVar4 != 0) & (uint)piVar3;
  }
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    FUN_00aa4520(0xd5,iVar2,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    if (uVar5 != 0) {
      uVar8 = 0;
      FUN_00a92f90(0);
      fVar6 = (float10)FUN_00407b40(uVar8);
      fVar9 = (float)fVar6;
      uVar8 = 0;
      FUN_00a92f90(0,fVar9);
      FUN_00407b10(uVar8,fVar9);
    }
    FUN_00a7c960(param_1 + 0x1500);
    FUN_008e3c10();
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_00ac8d40(1);
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    }
    break;
  case 2:
    FUN_00aa4520(0xd6,iVar2,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    }
    break;
  case 4:
    FUN_00aa4520(0xd7,iVar2,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_008e5c50(7);
    FUN_008e6d00();
    FUN_00751fb0(0);
    *(undefined4 *)(param_1 + 0x6ec) = 1;
    FUN_00a8ee20(1);
    if (uVar5 != 0) {
      iVar2 = FUN_00a12210(0xf00);
      if (iVar2 != 0) {
        fVar9 = *(float *)(iVar2 + 0x50);
        fVar1 = *(float *)(iVar2 + 0x54);
        fStack_58 = *(float *)(iVar2 + 0x58);
        fStack_54 = *(float *)(iVar2 + 0x5c);
        D3DXMatrixRotationY(auStack_50,*(undefined4 *)(uVar5 + 0x94));
        D3DXVec3TransformNormal(&stack0xffffff98,&stack0xffffff98,&fStack_58);
        *(float *)(param_1 + 0x50) = *(float *)(uVar5 + 0x50) + fVar9;
        *(float *)(param_1 + 0x54) = *(float *)(uVar5 + 0x54) + fVar1;
        *(float *)(param_1 + 0x58) = *(float *)(uVar5 + 0x58) + fStack_58;
        *(float *)(param_1 + 0x5c) = *(float *)(uVar5 + 0x5c) + fStack_54;
        fVar6 = (float10)FUN_00ddba30(*(float *)(uVar5 + 0x94) + *(float *)(iVar2 + 0x94));
        *(float *)(param_1 + 0x94) = (float)fVar6;
      }
      FUN_00a93090(7);
    }
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_008e6d00();
      FUN_00a7c950();
      FUN_00751fb0(1);
      FUN_0076a070(1,0);
      FUN_00766bf0();
    }
  }
  if ((((uVar5 != 0) && (iVar2 = FUN_00a8c760(0x1c), iVar2 == 0)) && (*(int *)(param_1 + 0x61c) < 4)
      ) && (iVar2 = FUN_00a12210(0xf00), iVar2 != 0)) {
    fStack_58 = *(float *)(iVar2 + 0x58);
    fStack_54 = *(float *)(iVar2 + 0x5c);
    fVar9 = *(float *)(uVar5 + 0x94);
    D3DXMatrixRotationY(auStack_50);
    D3DXVec3TransformNormal(&stack0xffffff98,&stack0xffffff98,&fStack_58);
    *(float *)(param_1 + 0x50) = *(float *)(uVar5 + 0x50) + fVar9;
    *(float *)(param_1 + 0x54) = *(float *)(uVar5 + 0x54) + unaff_EDI;
    *(float *)(param_1 + 0x58) = *(float *)(uVar5 + 0x58) + unaff_ESI;
    *(float *)(param_1 + 0x5c) = *(float *)(uVar5 + 0x5c) + unaff_EBX;
    fVar6 = (float10)FUN_00ddba30(*(float *)(uVar5 + 0x94) + *(float *)(iVar2 + 0x94));
    *(float *)(param_1 + 0x94) = (float)fVar6;
  }
  return;
}

// 0077F890  FUN_0077f890  size=165  [between]
void __fastcall FUN_0077f890(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar3 = &DAT_01b35810;
    (**(code **)(*piVar2 + 4))(&DAT_01b35810);
    FUN_00dd6d80(puVar3);
  }
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x2c,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077f933. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 0077F940  Emc060::vf258  size=140  [class]
void __thiscall Emc060::vf258(int param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  
  if (param_4 == 0) {
    return;
  }
  uVar1 = FUN_00a7c7f0();
  FUN_00a7c960(uVar1);
  piVar2 = (int *)FUN_00a7c8a0();
  if (piVar2 != (int *)0x0) {
    puVar4 = &DAT_01b34c84;
    (**(code **)(*piVar2 + 4))(&DAT_01b34c84);
    iVar3 = FUN_00dd6d80(puVar4);
    if (iVar3 != 0) {
      if (*(int *)(param_1 + 0x4f0) != 0) {
        uVar1 = FUN_00a7c7f0();
        FUN_00a7c960(uVar1);
      }
      piVar2[699] = 1;
      *(int **)(param_1 + 0x1424 + param_2 * 4) = piVar2;
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x1424 + param_2 * 4) = 0;
  return;
}

// 0077F9D0  Emc060::vf260  size=94  [class]
void __thiscall Emc060::vf260(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  if (param_3 != 0) {
    FUN_00a7c950();
    piVar1 = (int *)FUN_00a7c8a0();
    if (piVar1 != (int *)0x0) {
      puVar3 = &DAT_01b34c84;
      (**(code **)(*piVar1 + 4))(&DAT_01b34c84);
      iVar2 = FUN_00dd6d80(puVar3);
      if (iVar2 != 0) {
        piVar1[699] = 0;
      }
    }
    *(undefined4 *)(param_1 + 0x1424 + param_2 * 4) = 0;
  }
  return;
}

// 0077FA30  FUN_0077fa30  size=347  [callgraph]
undefined4 FUN_0077fa30(float *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  
  if (param_2 == 0) {
    param_2 = FUN_00ac8a30();
  }
  if (*(int *)(param_2 + 0xc4) < 1) {
    return 0;
  }
  fVar3 = 0.0;
  *param_1 = 0.0;
  param_1[1] = 0.0;
  iVar6 = 0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  if (0 < *(int *)(param_2 + 0xc4)) {
    iVar7 = 0;
    fVar4 = fVar3;
    fVar5 = fVar3;
    do {
      iVar1 = iVar7 + 0x10;
      iVar2 = iVar7 + 0x10 + *(int *)(param_2 + 0xc0);
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + 0x70;
      *param_1 = *param_1 + *(float *)(iVar1 + *(int *)(param_2 + 0xc0));
      fVar5 = *(float *)(iVar2 + 4) + fVar5;
      param_1[1] = fVar5;
      fVar4 = *(float *)(iVar2 + 8) + fVar4;
      param_1[2] = fVar4;
      fVar3 = *(float *)(iVar2 + 0xc) + fVar3;
      param_1[3] = fVar3;
    } while (iVar6 < *(int *)(param_2 + 0xc4));
    if (*param_1 != 0.0) goto LAB_0077faec;
  }
  if ((param_1[1] == 0.0) && (param_1[2] == 0.0)) {
    return 0;
  }
LAB_0077faec:
  fVar3 = param_1[1] * param_1[1] + *param_1 * *param_1 + param_1[2] * param_1[2];
  if (fVar3 < 0.0 == (fVar3 == 0.0)) {
    FUN_00ddf460(param_1,param_1);
    return 1;
  }
  FUN_00dd5650(&DAT_0163d0ac);
  *param_1 = 0.0;
  param_1[1] = 1.0;
  param_1[2] = 0.0;
  return 1;
}

// 0077FB90  FUN_0077fb90  size=737  [callgraph]
void __fastcall FUN_0077fb90(int *param_1)

{
  float fVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  float local_40;
  float local_3c;
  float local_38;
  float fStack_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  switch(param_1[0x187]) {
  case 0:
    uVar3 = 0x8000000;
    if (param_1[0x6fc] != 0) {
      uVar3 = 0x8000040;
    }
    FUN_00aa4080(0xac,0,0x3e2aaaab,0x3f800000,uVar3,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 2:
    uVar3 = 0x8000000;
    if (param_1[0x6fc] != 0) {
      uVar3 = 0x8000040;
    }
    FUN_00aa4080(0xac,0,0x3e2aaaab,0x3f800000,uVar3,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x42f00000;
    param_1[0x249] = 0x40000000;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x249];
    param_1[0x249] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      if ((param_1[0x2a2] != 0) && (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) {
        iVar4 = FUN_00a12210(0x800);
        local_30 = *(float *)(iVar4 + 0x40);
        local_2c = *(float *)(iVar4 + 0x44);
        local_28 = *(float *)(iVar4 + 0x48);
        local_24 = *(float *)(iVar4 + 0x4c);
        local_40 = 0.0;
        local_3c = 0.0;
        local_38 = 1.0;
        D3DXVec3TransformNormal(&local_40,&local_40,iVar4 + 0x10);
        fStack_20 = local_40 + local_30;
        fStack_1c = local_3c + local_2c;
        fStack_18 = local_38 + local_28;
        fStack_14 = fStack_34 + local_24;
        if (param_1[0x509] != 0) {
          FUN_0043fc90(param_1[0x2a2],&fStack_20,0);
        }
      }
      FUN_00aa4080(0x44,2,0,0x3f800000,0x8000210,0,0x3f800000);
      param_1[0x249] = (int)((float)param_1[0x249] + 10.0);
    }
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      FUN_00a8caf0(0x8000b,0,0,0);
      param_1[0x3a8] = 0;
      FUN_00a962d0(0,0);
      param_1[0x4e7] = 0;
      sVar2 = FUN_00dde2d0(0,2);
      param_1[0x706] = (int)(((float)(int)sVar2 + 1.0) * 60.0);
    }
  }
  iVar4 = FUN_00a8c760(0);
  if (iVar4 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3ca3d70a,0x393702d3,0x3e0efa35,0);
  }
  return;
}

// 0077FE90  FUN_0077fe90  size=825  [callgraph]
void __fastcall FUN_0077fe90(int *param_1)

{
  float fVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  float local_40;
  float local_3c;
  float local_38;
  float fStack_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  switch(param_1[0x187]) {
  case 0:
    if (0.5235988 < (float)param_1[0x2a8]) {
      FUN_00a8caf0(0x8000d,0,0,0);
      param_1[0x3a8] = 0;
      FUN_00a962d0(0,0);
      param_1[0x4e7] = 0;
      sVar2 = FUN_00dde2d0(0,2);
      param_1[0x706] = (int)(((float)(int)sVar2 + 1.0) * 30.0);
      return;
    }
    uVar3 = 0x8000000;
    if (param_1[0x6fc] != 0) {
      uVar3 = 0x8000040;
    }
    FUN_00aa4080(0xb1,0,0x3e2aaaab,0x3f800000,uVar3,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a8c760(8);
    if (iVar4 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    iVar4 = FUN_00a8c760(0);
    if (iVar4 == 0) {
      return;
    }
    (**(code **)(*param_1 + 0x308))(0x3ca3d70a,0x393702d3,0x3e0efa35,0);
    return;
  case 2:
    param_1[0x187] = 3;
    param_1[0x248] = 0x40000000;
    break;
  case 3:
    break;
  default:
    goto switchD_0077fead_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar1 = (float)param_1[0x248];
  param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
  if (((fVar1 - (float)param_1[0x244] < 0.0) && (iVar4 = FUN_00a8c760(8), iVar4 != 0)) &&
     (param_1[0x704] == 0)) {
    if ((param_1[0x2a2] != 0) && (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) {
      iVar4 = FUN_00a12210(0x800);
      local_30 = *(float *)(iVar4 + 0x40);
      local_2c = *(float *)(iVar4 + 0x44);
      local_28 = *(float *)(iVar4 + 0x48);
      local_24 = *(float *)(iVar4 + 0x4c);
      local_40 = 0.0;
      local_3c = 0.0;
      local_38 = 1.0;
      D3DXVec3TransformNormal(&local_40,&local_40,iVar4 + 0x10);
      fStack_20 = local_40 + local_30;
      fStack_1c = local_3c + local_2c;
      fStack_18 = local_38 + local_28;
      fStack_14 = fStack_34 + local_24;
      if (param_1[0x509] != 0) {
        FUN_0043fc90(param_1[0x2a2],&fStack_20,0);
      }
    }
    FUN_00aa4080(0x44,2,0,0x3f800000,0x8000210,0,0x3f800000);
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 + 10.0);
    if (*(int *)(param_1[0x509] + 0x4a0) == 1) {
      param_1[0x248] = (int)(fVar1 + 10.0 + 20.0);
    }
  }
  iVar4 = FUN_00a94ce0(0);
  if (iVar4 != 0) {
    FUN_00a8caf0(0x80007,0,0,0);
    param_1[0x3a8] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4e7] = 0;
    sVar2 = FUN_00dde2d0(0,2);
    param_1[0x706] = (int)(((float)(int)sVar2 + 1.0) * 60.0);
    return;
  }
switchD_0077fead_default:
  return;
}

// 007801E0  FUN_007801e0  size=212  [callgraph]
void __fastcall FUN_007801e0(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1[0x187] == 0) {
    uVar2 = 0x8000000;
    if (param_1[0x6fc] != 0) {
      uVar2 = 0x8000040;
    }
    param_1[0x187] = 1;
    FUN_00aa4080(0xad,0,0x3d088889,0x3f800000,uVar2,param_1[0x701],0x3f800000);
    pcVar1 = *(code **)(*param_1 + 0x344);
    param_1[0x139] = 1;
    (*pcVar1)(5,1,1);
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    FUN_00a8caf0(0x8002a,0,0,0);
    param_1[0x3a8] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4e7] = 0;
  }
  return;
}

// 007802C0  FUN_007802c0  size=212  [callgraph]
void __fastcall FUN_007802c0(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1[0x187] == 0) {
    uVar2 = 0x8000000;
    if (param_1[0x6fc] != 0) {
      uVar2 = 0x8000040;
    }
    param_1[0x187] = 1;
    FUN_00aa4080(0xb5,0,0x3d088889,0x3f800000,uVar2,param_1[0x701],0x3f800000);
    pcVar1 = *(code **)(*param_1 + 0x344);
    param_1[0x139] = 1;
    (*pcVar1)(5,1,1);
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    FUN_00a8caf0(0x8002a,0,0,0);
    param_1[0x3a8] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4e7] = 0;
  }
  return;
}

// 007803A0  FUN_007803a0  size=212  [callgraph]
void __fastcall FUN_007803a0(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1[0x187] == 0) {
    uVar2 = 0x8000000;
    if (param_1[0x6fc] != 0) {
      uVar2 = 0x8000040;
    }
    param_1[0x187] = 1;
    FUN_00aa4080(0xb6,0,0x3d088889,0x3f800000,uVar2,param_1[0x701],0x3f800000);
    pcVar1 = *(code **)(*param_1 + 0x344);
    param_1[0x139] = 1;
    (*pcVar1)(5,1,1);
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    FUN_00a8caf0(0x8002a,0,0,0);
    param_1[0x3a8] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4e7] = 0;
  }
  return;
}

// 00780480  FUN_00780480  size=212  [callgraph]
void __fastcall FUN_00780480(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1[0x187] == 0) {
    uVar2 = 0x8000000;
    if (param_1[0x6fc] != 0) {
      uVar2 = 0x8000040;
    }
    param_1[0x187] = 1;
    FUN_00aa4080(0xb7,0,0x3d088889,0x3f800000,uVar2,param_1[0x701],0x3f800000);
    pcVar1 = *(code **)(*param_1 + 0x344);
    param_1[0x139] = 1;
    (*pcVar1)(5,1,1);
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    FUN_00a8caf0(0x8002a,0,0,0);
    param_1[0x3a8] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4e7] = 0;
  }
  return;
}

// 00780560  FUN_00780560  size=235  [callgraph]
void __fastcall FUN_00780560(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1[0x187] == 0) {
    uVar2 = 0x8000000;
    if (param_1[0x6fc] != 0) {
      uVar2 = 0x8000040;
    }
    param_1[0x187] = 1;
    FUN_00aa4080(0xb8,0,0x3d088889,0x3f800000,uVar2,param_1[0x701],0x3f800000);
    pcVar1 = *(code **)(*param_1 + 0x344);
    param_1[0x139] = 1;
    (*pcVar1)(5,1,1);
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    FUN_00a8caf0(0x8002a,0,0,0);
    param_1[0x3a8] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4e7] = 0;
  }
  iVar3 = FUN_00a8c760(0x37);
  if (iVar3 != 0) {
    param_1[0x6fc] = 1;
  }
  return;
}

// 00780650  FUN_00780650  size=212  [callgraph]
void __fastcall FUN_00780650(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1[0x187] == 0) {
    uVar2 = 0x8000000;
    if (param_1[0x6fc] != 0) {
      uVar2 = 0x8000040;
    }
    param_1[0x187] = 1;
    FUN_00aa4080(0xb9,0,0x3d088889,0x3f800000,uVar2,param_1[0x701],0x3f800000);
    pcVar1 = *(code **)(*param_1 + 0x344);
    param_1[0x139] = 1;
    (*pcVar1)(5,1,1);
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    FUN_00a8caf0(0x8002a,0,0,0);
    param_1[0x3a8] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4e7] = 0;
  }
  return;
}

// 00780730  FUN_00780730  size=235  [callgraph]
void __fastcall FUN_00780730(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1[0x187] == 0) {
    uVar2 = 0x8000000;
    if (param_1[0x6fc] != 0) {
      uVar2 = 0x8000040;
    }
    param_1[0x187] = 1;
    FUN_00aa4080(0xba,0,0x3d088889,0x3f800000,uVar2,param_1[0x701],0x3f800000);
    pcVar1 = *(code **)(*param_1 + 0x344);
    param_1[0x139] = 1;
    (*pcVar1)(5,1,1);
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    FUN_00a8caf0(0x8002a,0,0,0);
    param_1[0x3a8] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4e7] = 0;
  }
  iVar3 = FUN_00a8c760(0x37);
  if (iVar3 != 0) {
    param_1[0x6fc] = 1;
  }
  return;
}

// 00780820  FUN_00780820  size=212  [callgraph]
void __fastcall FUN_00780820(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1[0x187] == 0) {
    uVar2 = 0x8000000;
    if (param_1[0x6fc] != 0) {
      uVar2 = 0x8000040;
    }
    param_1[0x187] = 1;
    FUN_00aa4080(0xbc,0,0x3d088889,0x3f800000,uVar2,param_1[0x701],0x3f800000);
    pcVar1 = *(code **)(*param_1 + 0x344);
    param_1[0x139] = 1;
    (*pcVar1)(5,1,1);
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    FUN_00a8caf0(0x8002a,0,0,0);
    param_1[0x3a8] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4e7] = 0;
  }
  return;
}

// 00780900  FUN_00780900  size=212  [callgraph]
void __fastcall FUN_00780900(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1[0x187] == 0) {
    uVar2 = 0x8000000;
    if (param_1[0x6fc] != 0) {
      uVar2 = 0x8000040;
    }
    param_1[0x187] = 1;
    FUN_00aa4080(0xbd,0,0x3d088889,0x3f800000,uVar2,param_1[0x701],0x3f800000);
    pcVar1 = *(code **)(*param_1 + 0x344);
    param_1[0x139] = 1;
    (*pcVar1)(5,1,1);
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    FUN_00a8caf0(0x8002a,0,0,0);
    param_1[0x3a8] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4e7] = 0;
  }
  return;
}

// 007809E0  FUN_007809e0  size=212  [callgraph]
void __fastcall FUN_007809e0(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1[0x187] == 0) {
    uVar2 = 0x8000000;
    if (param_1[0x6fc] != 0) {
      uVar2 = 0x8000040;
    }
    param_1[0x187] = 1;
    FUN_00aa4080(0xbe,0,0x3d088889,0x3f800000,uVar2,param_1[0x701],0x3f800000);
    pcVar1 = *(code **)(*param_1 + 0x344);
    param_1[0x139] = 1;
    (*pcVar1)(5,1,1);
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    FUN_00a8caf0(0x8002a,0,0,0);
    param_1[0x3a8] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4e7] = 0;
  }
  return;
}

// 00780AC0  FUN_00780ac0  size=212  [callgraph]
void __fastcall FUN_00780ac0(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1[0x187] == 0) {
    uVar2 = 0x8000000;
    if (param_1[0x6fc] != 0) {
      uVar2 = 0x8000040;
    }
    param_1[0x187] = 1;
    FUN_00aa4080(0xbf,0,0x3d088889,0x3f800000,uVar2,param_1[0x701],0x3f800000);
    pcVar1 = *(code **)(*param_1 + 0x344);
    param_1[0x139] = 1;
    (*pcVar1)(5,1,1);
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    FUN_00a8caf0(0x8002a,0,0,0);
    param_1[0x3a8] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4e7] = 0;
  }
  return;
}

// 00780BA0  FUN_00780ba0  size=212  [callgraph]
void __fastcall FUN_00780ba0(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1[0x187] == 0) {
    uVar2 = 0x8000000;
    if (param_1[0x6fc] != 0) {
      uVar2 = 0x8000040;
    }
    param_1[0x187] = 1;
    FUN_00aa4080(0xc0,0,0x3d088889,0x3f800000,uVar2,param_1[0x701],0x3f800000);
    pcVar1 = *(code **)(*param_1 + 0x344);
    param_1[0x139] = 1;
    (*pcVar1)(5,1,1);
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    FUN_00a8caf0(0x8002a,0,0,0);
    param_1[0x3a8] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4e7] = 0;
  }
  return;
}

// 00780C80  FUN_00780c80  size=212  [callgraph]
void __fastcall FUN_00780c80(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1[0x187] == 0) {
    uVar2 = 0x8000000;
    if (param_1[0x6fc] != 0) {
      uVar2 = 0x8000040;
    }
    param_1[0x187] = 1;
    FUN_00aa4080(0xc1,0,0x3d088889,0x3f800000,uVar2,param_1[0x701],0x3f800000);
    pcVar1 = *(code **)(*param_1 + 0x344);
    param_1[0x139] = 1;
    (*pcVar1)(5,1,1);
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    FUN_00a8caf0(0x8002a,0,0,0);
    param_1[0x3a8] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4e7] = 0;
  }
  return;
}

// 00780D60  FUN_00780d60  size=212  [callgraph]
void __fastcall FUN_00780d60(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1[0x187] == 0) {
    uVar2 = 0x8000000;
    if (param_1[0x6fc] != 0) {
      uVar2 = 0x8000040;
    }
    param_1[0x187] = 1;
    FUN_00aa4080(0xc3,0,0x3d088889,0x3f800000,uVar2,param_1[0x701],0x3f800000);
    pcVar1 = *(code **)(*param_1 + 0x344);
    param_1[0x139] = 1;
    (*pcVar1)(5,1,1);
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    FUN_00a8caf0(0x8002a,0,0,0);
    param_1[0x3a8] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4e7] = 0;
  }
  return;
}

// 00780E40  FUN_00780e40  size=212  [callgraph]
void __fastcall FUN_00780e40(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1[0x187] == 0) {
    uVar2 = 0x8000000;
    if (param_1[0x6fc] != 0) {
      uVar2 = 0x8000040;
    }
    param_1[0x187] = 1;
    FUN_00aa4080(0xc4,0,0x3d088889,0x3f800000,uVar2,param_1[0x701],0x3f800000);
    pcVar1 = *(code **)(*param_1 + 0x344);
    param_1[0x139] = 1;
    (*pcVar1)(5,1,1);
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    FUN_00a8caf0(0x8002a,0,0,0);
    param_1[0x3a8] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4e7] = 0;
  }
  return;
}

// 00780F20  FUN_00780f20  size=212  [callgraph]
void __fastcall FUN_00780f20(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1[0x187] == 0) {
    uVar2 = 0x8000000;
    if (param_1[0x6fc] != 0) {
      uVar2 = 0x8000040;
    }
    param_1[0x187] = 1;
    FUN_00aa4080(0xc5,0,0x3d088889,0x3f800000,uVar2,param_1[0x701],0x3f800000);
    pcVar1 = *(code **)(*param_1 + 0x344);
    param_1[0x139] = 1;
    (*pcVar1)(5,1,1);
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    FUN_00a8caf0(0x8002a,0,0,0);
    param_1[0x3a8] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4e7] = 0;
  }
  return;
}

// 00781000  FUN_00781000  size=212  [callgraph]
void __fastcall FUN_00781000(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1[0x187] == 0) {
    uVar2 = 0x8000000;
    if (param_1[0x6fc] != 0) {
      uVar2 = 0x8000040;
    }
    param_1[0x187] = 1;
    FUN_00aa4080(0xc6,0,0x3d088889,0x3f800000,uVar2,param_1[0x701],0x3f800000);
    pcVar1 = *(code **)(*param_1 + 0x344);
    param_1[0x139] = 1;
    (*pcVar1)(5,1,1);
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    FUN_00a8caf0(0x8002a,0,0,0);
    param_1[0x3a8] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4e7] = 0;
  }
  return;
}

// 007810E0  FUN_007810e0  size=503  [callgraph]
void __fastcall FUN_007810e0(int *param_1)

{
  float fVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  
  switch(param_1[0x187]) {
  case 0:
    uVar3 = 0x8000000;
    if (param_1[0x6fc] != 0) {
      uVar3 = 0x8000040;
    }
    param_1[0x187] = 1;
    FUN_00aa4080(0xa6,0,0x3d088889,0x3f800000,uVar3,0xbf800000,0x3f800000);
    param_1[0x36a] = -1;
    param_1[0x36c] = -1;
    pcVar2 = *(code **)(*param_1 + 0x344);
    param_1[0x6fe] = 1;
    param_1[0x139] = 1;
    (*pcVar2)(5,1,1);
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    uVar3 = 0;
    if (param_1[0x6fc] != 0) {
      uVar3 = 0x40;
    }
    param_1[0x187] = 3;
    FUN_00aa4080(0xa7,0,0x3d088889,0x3f800000,uVar3,0xbf800000,0x3f800000);
    param_1[0x248] = 0x42f00000;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 4:
    uVar3 = 0x8000000;
    if (param_1[0x6fc] != 0) {
      uVar3 = 0x8000040;
    }
    param_1[0x187] = 5;
    FUN_00aa4080(0xad,0,0x3d088889,0x3f800000,uVar3,0xbf800000,0x3f800000);
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      FUN_00a8caf0(0x8002a,0,0,0);
      param_1[0x3a8] = 0;
      FUN_00a962d0(0,0);
      param_1[0x4e7] = 0;
      return;
    }
  }
  return;
}

// 007812F0  FUN_007812f0  size=67  [callgraph]
void __fastcall FUN_007812f0(int param_1)

{
  if (*(float *)(param_1 + 0x1b3c) <= 0.0) {
    FUN_00a8caf0(0x80007,0,0,0);
    *(undefined4 *)(param_1 + 0xea0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x139c) = 0;
  }
  return;
}

// 00781340  FUN_00781340  size=117  [callgraph]
void __fastcall FUN_00781340(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar1 = 0;
    if (*(int *)(param_1 + 0x1bf0) != 0) {
      uVar1 = 0x40;
    }
    FUN_00aa4080(0x84,0,0x3d088889,0x3f800000,uVar1,0xbf800000,0x3f800000);
    FUN_0077b0f0();
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00781770  FUN_00781770  size=285  [callgraph]
undefined4 * __thiscall FUN_00781770(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  iVar3 = *(int *)(param_1 + 0x78);
  param_2[3] = 0x3f800000;
  iVar1 = *(int *)(iVar3 + 8) * 0x10 + *(int *)(iVar3 + 4);
  iVar3 = *(int *)(iVar3 + 4);
  if (iVar3 != iVar1) {
    while (*(int *)(iVar3 + 0xc) != 2) {
      iVar3 = iVar3 + 0x10;
      if (iVar3 == iVar1) {
        return param_2;
      }
    }
    iVar3 = FUN_00a81330();
    if (iVar3 != 0) {
      iVar3 = *(int *)(param_1 + 0x78);
      for (iVar1 = *(int *)(iVar3 + 4); iVar1 != *(int *)(iVar3 + 8) * 0x10 + *(int *)(iVar3 + 4);
          iVar1 = iVar1 + 0x10) {
        if (*(int *)(iVar1 + 0xc) == 2) {
          FUN_00a81330();
          break;
        }
      }
      iVar1 = FUN_00a7c8a0();
      iVar3 = *(int *)(param_1 + 0x78);
      if (iVar1 != 0) {
        iVar1 = *(int *)(iVar3 + 4);
        do {
          if (iVar1 == *(int *)(iVar3 + 8) * 0x10 + *(int *)(iVar3 + 4)) {
LAB_00781812:
            iVar3 = FUN_00a7c8a0();
            *param_2 = *(undefined4 *)(iVar3 + 0x40);
            param_2[1] = *(undefined4 *)(iVar3 + 0x44);
            param_2[2] = *(undefined4 *)(iVar3 + 0x48);
            param_2[3] = *(undefined4 *)(iVar3 + 0x4c);
            return param_2;
          }
          if (*(int *)(iVar1 + 0xc) == 2) {
            FUN_00a81330();
            goto LAB_00781812;
          }
          iVar1 = iVar1 + 0x10;
        } while( true );
      }
      for (iVar1 = *(int *)(iVar3 + 4); iVar1 != *(int *)(iVar3 + 8) * 0x10 + *(int *)(iVar3 + 4);
          iVar1 = iVar1 + 0x10) {
        if (*(int *)(iVar1 + 0xc) == 2) {
          FUN_00a81330();
          break;
        }
      }
      puVar2 = (undefined4 *)FUN_00a7c8b0();
      *param_2 = *puVar2;
      param_2[1] = puVar2[1];
      param_2[2] = puVar2[2];
      param_2[3] = puVar2[3];
    }
  }
  return param_2;
}

// 00781890  FUN_00781890  size=154  [callgraph]
void __thiscall FUN_00781890(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_1 + 0x78);
  iVar5 = *(int *)(iVar1 + 4);
  iVar2 = *(int *)(iVar1 + 8);
  iVar1 = *(int *)(iVar1 + 4);
  iVar4 = 0;
  do {
    if (iVar5 == iVar2 * 0x10 + iVar1) {
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      return;
    }
    iVar3 = FUN_00a81330();
    if (iVar3 == param_3) {
      if (iVar4 == 0) {
        *param_2 = *(undefined4 *)(param_1 + 0x10);
        param_2[1] = *(undefined4 *)(param_1 + 0x14);
        param_2[2] = *(undefined4 *)(param_1 + 0x18);
        param_2[3] = *(undefined4 *)(param_1 + 0x1c);
        return;
      }
      if (iVar4 == 1) {
        *param_2 = *(undefined4 *)(param_1 + 0x20);
        param_2[1] = *(undefined4 *)(param_1 + 0x24);
        param_2[2] = *(undefined4 *)(param_1 + 0x28);
        param_2[3] = *(undefined4 *)(param_1 + 0x2c);
        return;
      }
    }
    if (*(int *)(iVar5 + 0xc) == 1) {
      iVar4 = iVar4 + 1;
    }
    iVar5 = iVar5 + 0x10;
  } while( true );
}

// 00781950  FUN_00781950  size=380  [callgraph]
void FUN_00781950(int param_1,float param_2,float param_3,float param_4,float param_5)

{
  float10 fVar1;
  int *piVar2;
  undefined4 *puVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  undefined4 uStack_30;
  float fStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  float local_20 [2];
  float fStack_18;
  
  if ((param_1 == 0) || (piVar2 = (int *)FUN_00a7c8a0(), piVar2 == (int *)0x0)) {
    return;
  }
  FUN_00781890(local_20,param_1);
  puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x84))();
  uStack_30 = *puVar3;
  fStack_2c = (float)puVar3[1];
  uStack_28 = puVar3[2];
  uStack_24 = puVar3[3];
  fVar7 = (float10)fpatan((float10)local_20[0] - (float10)(float)piVar2[0x10],
                          (float10)fStack_18 - (float10)(float)piVar2[0x12]);
  fVar4 = (float10)FUN_00ddba30((float)(fVar7 + (float10)param_5));
  fVar5 = (float10)FUN_00ddba30((float)(fVar4 - (float10)fStack_2c));
  fVar1 = (float10)0;
  fVar6 = (float10)param_3;
  fVar7 = (float10)1;
  if (fVar1 < fVar6) {
    if ((-fVar6 < fVar5 != (-fVar6 == fVar5)) && (fVar5 < fVar6 != (fVar5 == fVar6))) {
      return;
    }
    fVar5 = (ABS(fVar5) - fVar6) * (float10)(float)0x40747645;
    if (fVar5 < fVar1 == (fVar5 == fVar1)) {
      if (fVar7 <= fVar5) {
        fVar5 = fVar7;
      }
      param_2 = (float)(fVar5 * (float10)param_2);
    }
    else {
      param_2 = (float)(fVar1 * (float10)param_2);
    }
  }
  if ((fVar7 < (float10)param_2 == (fVar7 == (float10)param_2)) ||
     (NAN(param_4) || 3.1415927 < param_4 == (param_4 == 3.1415927))) {
    fVar7 = (float10)FUN_00a92ff0();
    fVar7 = (float10)FUN_00a92ff0((float)(fVar7 * (float10)param_4));
    fVar7 = (float10)FUN_00dde210(fStack_2c,(float)fVar4,(float)(fVar7 * (float10)param_2));
  }
  else {
    fVar7 = (float10)(float)fVar4;
  }
  fStack_2c = (float)fVar7;
  (**(code **)(*piVar2 + 0x88))(&uStack_30);
  return;
}

// 00781B20  FUN_00781b20  size=105  [callgraph]
void __thiscall FUN_00781b20(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x78);
  iVar4 = *(int *)(iVar1 + 4);
  iVar2 = *(int *)(iVar1 + 8);
  iVar1 = *(int *)(iVar1 + 4);
  while( true ) {
    if (iVar4 == iVar2 * 0x10 + iVar1) {
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      return;
    }
    iVar3 = FUN_00a81330();
    if (iVar3 == param_3) break;
    iVar4 = iVar4 + 0x10;
  }
  *param_2 = *(undefined4 *)(param_1 + 0x40);
  param_2[1] = *(undefined4 *)(param_1 + 0x44);
  param_2[2] = *(undefined4 *)(param_1 + 0x48);
  param_2[3] = *(undefined4 *)(param_1 + 0x4c);
  return;
}

// 00781BB0  FUN_00781bb0  size=1068  [callgraph]
undefined4 __thiscall FUN_00781bb0(int param_1,float *param_2)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  uint uVar7;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  undefined4 local_dc;
  float local_d8;
  float local_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  float fStack_a0;
  undefined4 uStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  char *pcStack_70;
  undefined4 uStack_6c;
  undefined1 auStack_60 [16];
  undefined1 local_50 [76];
  
  local_e0 = DAT_01bea380;
  local_dc = DAT_01bea384;
  local_d8 = DAT_01bea388;
  uVar7 = 0;
  local_d4 = DAT_01bea38c;
  local_f0 = *param_2 - DAT_01bea380;
  local_e8 = param_2[2] - DAT_01bea388;
  local_e4 = param_2[3] - DAT_01bea38c;
  local_ec = 0.0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x5c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0x3f800000;
  if (*(int *)(*(int *)(param_1 + 0x78) + 8) != 0) {
    do {
      uVar1 = 0;
      if (uVar7 == 0) {
        uVar1 = 0;
      }
      else if (uVar7 == 1) {
        uVar1 = 0x3f060a92;
      }
      else if (uVar7 == 2) {
        uVar1 = 0x40b84e88;
      }
      local_b0 = 0;
      local_a8 = 0;
      local_ac = 0x3f800000;
      FUN_00ddcfe0(local_50,&local_b0,uVar1);
      D3DXVec3TransformNormal(&local_f0,&local_f0,local_50);
      if (((local_f0 != 0.0) || (local_ec != 0.0)) || (local_e8 != 0.0)) {
        fVar2 = local_e8 * local_e8 + local_ec * local_ec + local_f0 * local_f0;
        if (fVar2 < 0.0 == (fVar2 == 0.0)) {
          FUN_00ddf460(&local_f0,&local_f0);
        }
        else {
          FUN_00dd5650(&DAT_0163d0ac);
          local_f0 = 0.0;
          local_ec = 1.0;
          local_e8 = 0.0;
        }
      }
      fStack_d0 = *param_2 + local_f0 * 10.0;
      uStack_7c = 0;
      uStack_74 = 0;
      fStack_c8 = param_2[2] + local_e8 * 10.0;
      uStack_6c = 0;
      fStack_c4 = local_e4 * 10.0 + param_2[3];
      uStack_80 = 0xffff0009;
      uStack_78 = 0x60;
      pcStack_70 = "raptorTeamAttackPosition";
      fStack_cc = param_2[1];
      fStack_a0 = local_e0;
      uStack_9c = local_dc;
      fStack_98 = local_d8;
      fStack_94 = local_d4;
      fStack_90 = fStack_d0;
      fStack_8c = fStack_cc;
      fStack_88 = fStack_c8;
      fStack_84 = fStack_c4;
      iVar6 = RayCastSingleHitWork::RayCastSingleHitWork_2(&fStack_c0,auStack_60,0,0,&fStack_a0);
      fVar2 = fStack_c8;
      fVar3 = fStack_cc;
      fVar4 = fStack_d0;
      fVar5 = fStack_c4;
      if ((iVar6 != 0) &&
         (SQRT((param_2[2] - fStack_b8) * (param_2[2] - fStack_b8) +
               (param_2[1] - fStack_bc) * (param_2[1] - fStack_bc) +
               (*param_2 - fStack_c0) * (*param_2 - fStack_c0)) < 10.0)) {
        fVar2 = fStack_b8;
        fVar3 = fStack_bc;
        fVar4 = fStack_c0;
        fVar5 = fStack_b4;
      }
      if (uVar7 == 0) {
        *(float *)(param_1 + 0x40) = fVar4;
        *(float *)(param_1 + 0x44) = fVar3;
        *(float *)(param_1 + 0x48) = fVar2;
        *(float *)(param_1 + 0x4c) = fVar5;
      }
      else if (uVar7 == 1) {
        *(float *)(param_1 + 0x50) = fVar4;
        *(float *)(param_1 + 0x54) = fVar3;
        *(float *)(param_1 + 0x58) = fVar2;
        *(float *)(param_1 + 0x5c) = fVar5;
      }
      else if (uVar7 == 2) {
        *(float *)(param_1 + 0x60) = fVar4;
        *(float *)(param_1 + 100) = fVar3;
        *(float *)(param_1 + 0x68) = fVar2;
        *(float *)(param_1 + 0x6c) = fVar5;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)(*(int *)(param_1 + 0x78) + 8));
  }
  if ((((*(float *)(param_1 + 0x40) != 0.0) || (*(float *)(param_1 + 0x44) != 0.0)) ||
      (*(float *)(param_1 + 0x48) != 0.0)) &&
     (((*(float *)(param_1 + 0x50) != 0.0 || (*(float *)(param_1 + 0x54) != 0.0)) ||
      (*(float *)(param_1 + 0x58) != 0.0)))) {
    if (((*(int *)(*(int *)(param_1 + 0x78) + 8) == 3) && (*(float *)(param_1 + 0x60) == 0.0)) &&
       ((*(float *)(param_1 + 100) == 0.0 && (*(float *)(param_1 + 0x68) == 0.0)))) {
      return 0;
    }
    return 1;
  }
  return 0;
}

// 00781FE0  FUN_00781fe0  size=380  [callgraph]
void FUN_00781fe0(int param_1,float param_2,float param_3,float param_4,float param_5)

{
  float10 fVar1;
  int *piVar2;
  undefined4 *puVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  undefined4 uStack_30;
  float fStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  float local_20 [2];
  float fStack_18;
  
  if ((param_1 == 0) || (piVar2 = (int *)FUN_00a7c8a0(), piVar2 == (int *)0x0)) {
    return;
  }
  FUN_00781b20(local_20,param_1);
  puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x84))();
  uStack_30 = *puVar3;
  fStack_2c = (float)puVar3[1];
  uStack_28 = puVar3[2];
  uStack_24 = puVar3[3];
  fVar7 = (float10)fpatan((float10)local_20[0] - (float10)(float)piVar2[0x10],
                          (float10)fStack_18 - (float10)(float)piVar2[0x12]);
  fVar4 = (float10)FUN_00ddba30((float)(fVar7 + (float10)param_5));
  fVar5 = (float10)FUN_00ddba30((float)(fVar4 - (float10)fStack_2c));
  fVar1 = (float10)0;
  fVar6 = (float10)param_3;
  fVar7 = (float10)1;
  if (fVar1 < fVar6) {
    if ((-fVar6 < fVar5 != (-fVar6 == fVar5)) && (fVar5 < fVar6 != (fVar5 == fVar6))) {
      return;
    }
    fVar5 = (ABS(fVar5) - fVar6) * (float10)(float)0x40747645;
    if (fVar5 < fVar1 == (fVar5 == fVar1)) {
      if (fVar7 <= fVar5) {
        fVar5 = fVar7;
      }
      param_2 = (float)(fVar5 * (float10)param_2);
    }
    else {
      param_2 = (float)(fVar1 * (float10)param_2);
    }
  }
  if ((fVar7 < (float10)param_2 == (fVar7 == (float10)param_2)) ||
     (NAN(param_4) || 3.1415927 < param_4 == (param_4 == 3.1415927))) {
    fVar7 = (float10)FUN_00a92ff0();
    fVar7 = (float10)FUN_00a92ff0((float)(fVar7 * (float10)param_4));
    fVar7 = (float10)FUN_00dde210(fStack_2c,(float)fVar4,(float)(fVar7 * (float10)param_2));
  }
  else {
    fVar7 = (float10)(float)fVar4;
  }
  fStack_2c = (float)fVar7;
  (**(code **)(*piVar2 + 0x88))(&uStack_30);
  return;
}

// 00782160  FUN_00782160  size=105  [callgraph]
void __fastcall FUN_00782160(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined *puVar6;
  
  iVar5 = *(int *)(param_1 + 0x78);
  iVar1 = *(int *)(iVar5 + 8);
  iVar2 = *(int *)(iVar5 + 4);
  for (iVar5 = *(int *)(iVar5 + 4); iVar5 != iVar1 * 0x10 + iVar2; iVar5 = iVar5 + 0x10) {
    iVar3 = FUN_00a81330();
    if ((iVar3 != 0) && (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) {
      puVar6 = &DAT_01b35810;
      (**(code **)(*piVar4 + 4))(&DAT_01b35810);
      iVar3 = FUN_00dd6d80(puVar6);
      if ((iVar3 != 0) && (iVar3 = FUN_00a8cbe0(0x80000), iVar3 == 0)) {
        FUN_0077ecb0();
      }
    }
  }
  return;
}

// 00782210  FUN_00782210  size=418  [callgraph]
void __fastcall FUN_00782210(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined *puVar6;
  
  iVar5 = *(int *)(param_1 + 0x78);
  iVar1 = *(int *)(iVar5 + 8);
  iVar2 = *(int *)(iVar5 + 4);
  iVar5 = *(int *)(iVar5 + 4);
  do {
    if (iVar5 == iVar1 * 0x10 + iVar2) {
      return;
    }
    iVar3 = FUN_00a81330();
    if ((iVar3 != 0) && (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) {
      puVar6 = &DAT_01b35810;
      (**(code **)(*piVar4 + 4))(&DAT_01b35810);
      iVar3 = FUN_00dd6d80(puVar6);
      if (iVar3 != 0) {
        iVar3 = FUN_00a8cab0();
        if (iVar3 < 0x50018) {
          if (iVar3 < 0x5000f) {
            if (iVar3 < 0x1000c) {
              if (iVar3 < 0x1000a) {
                switch(iVar3) {
                case 0x10000:
                case 0x10001:
                case 0x10002:
                case 0x10003:
                case 0x10005:
                case 0x10006:
                case 0x10007:
                case 0x10008:
                case 0x10009:
switchD_007822b2_caseD_10000:
                  *(undefined4 *)(iVar5 + 8) = 1;
                }
              }
              else {
                *(undefined4 *)(iVar5 + 8) = 0xb;
                *(undefined4 *)(iVar5 + 0xc) = 1;
              }
            }
            else if (iVar3 < 0x5000e) {
              if (iVar3 < 0x50000) {
                switch(iVar3) {
                case 0x1000c:
                  *(undefined4 *)(iVar5 + 8) = 0xc;
                  *(undefined4 *)(iVar5 + 0xc) = 4;
                  break;
                case 0x1000d:
                case 0x1000e:
                case 0x1000f:
                  goto switchD_007822b2_caseD_10000;
                case 0x10010:
                case 0x10012:
                case 0x10013:
                  goto switchD_007822f0_caseD_10010;
                }
              }
              else {
switchD_007822f0_caseD_10010:
                *(undefined4 *)(iVar5 + 8) = 2;
              }
            }
          }
          else {
            *(undefined4 *)(iVar5 + 8) = 10;
          }
        }
        else if (iVar3 < 0x60019) {
          if (iVar3 < 0x60011) {
            if (iVar3 < 0x60004) {
              if (0x60000 < iVar3) goto LAB_00782362;
              if ((iVar3 == 0x50018) && (iVar3 = FUN_00a8cac0(), 5 < iVar3)) {
                FUN_00782160();
              }
            }
            else if (iVar3 - 0x60009U < 7) goto LAB_00782362;
          }
          else {
LAB_00782362:
            *(undefined4 *)(iVar5 + 8) = 3;
            *(undefined4 *)(iVar5 + 0xc) = 4;
          }
        }
        else if (iVar3 < 0x8002b) {
          if ((iVar3 == 0x8002a) || (iVar3 - 0x80000U < 2)) {
            *(undefined4 *)(iVar5 + 8) = 6;
            FUN_00782160();
          }
        }
        else if (iVar3 == 0xf0000) goto switchD_007822f0_caseD_10010;
      }
    }
    iVar5 = iVar5 + 0x10;
  } while( true );
}

// 007823F0  FUN_007823f0  size=160  [callgraph]
void __fastcall FUN_007823f0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  
  iVar6 = *(int *)(param_1 + 0x78);
  iVar1 = *(int *)(iVar6 + 8);
  iVar2 = *(int *)(iVar6 + 4);
  for (iVar6 = *(int *)(iVar6 + 4); iVar6 != iVar1 * 0x10 + iVar2; iVar6 = iVar6 + 0x10) {
    iVar3 = FUN_00a81330();
    if ((iVar3 != 0) && (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) {
      puVar7 = &DAT_01be9c78;
      (**(code **)(*piVar4 + 4))(&DAT_01be9c78);
      iVar3 = FUN_00dd6d80(puVar7);
      uVar5 = -(uint)(iVar3 != 0) & (uint)piVar4;
      if ((*(int *)(iVar6 + 0xc) == 2) &&
         ((*(byte *)(uVar5 + 0xdae) < 5 ||
          ((*(int *)(uVar5 + 0xdb0) != 2 && (*(int *)(uVar5 + 0xdb0) != -1)))))) {
        *(undefined4 *)(iVar6 + 0xc) = 1;
      }
      else if ((4 < *(byte *)(uVar5 + 0xdae)) &&
              ((*(int *)(uVar5 + 0xdb0) == 2 || (*(int *)(uVar5 + 0xdb0) == -1)))) {
        *(undefined4 *)(iVar6 + 0xc) = 2;
      }
    }
  }
  return;
}

// 00782490  FUN_00782490  size=920  [callgraph]
void __thiscall FUN_00782490(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  int iVar2;
  float unaff_EBX;
  float unaff_ESI;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float fStack_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  int iStack_d0;
  float local_c4;
  undefined4 local_c0;
  float local_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  char *pcStack_7c;
  undefined4 uStack_78;
  undefined1 auStack_6c [28];
  undefined1 local_50 [76];
  
  local_c4 = (float)(DAT_01be9224 % 0x708);
  local_e0 = *param_2 + *param_3 * 14.0;
  local_dc = param_3[1] * 14.0 + param_2[1];
  local_d8 = param_3[2] * 14.0 + param_2[2];
  local_d4 = param_3[3] * 14.0 + param_2[3];
  local_f0 = *param_2 - DAT_01bea380;
  local_e8 = param_2[2] - DAT_01bea388;
  local_e4 = param_2[3] - DAT_01bea38c;
  local_ec = 0.0;
  local_c0 = 0;
  local_bc = 1.0;
  local_b8 = 0.0;
  fVar3 = (float10)fsin((float10)(int)local_c4 * (float10)0.2 * (float10)0.017453292);
  FUN_00ddcfe0(local_50,&local_c0,(float)(fVar3 * (float10)0.34906584 + (float10)0.5235988));
  D3DXVec3TransformNormal(&local_f0,&local_f0,local_50);
  if (((unaff_ESI == 0.0) && (unaff_EBX == 0.0)) && (fStack_f4 == 0.0)) {
    unaff_ESI = *param_3;
    unaff_EBX = param_3[1];
    fStack_f4 = param_3[2];
    local_f0 = param_3[3];
  }
  else {
    fVar1 = fStack_f4 * fStack_f4 + unaff_EBX * unaff_EBX + unaff_ESI * unaff_ESI;
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      FUN_00ddf460(&stack0xffffff04,&stack0xffffff04);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      unaff_ESI = 0.0;
      unaff_EBX = 1.0;
      fStack_f4 = 0.0;
    }
  }
  fVar3 = (float10)14.0;
  iStack_d0 = DAT_01be9224 % 0x708;
  uStack_8c = 0xffff0009;
  uStack_88 = 0;
  uStack_84 = 0x60;
  fVar4 = (float10)fsin((float10)iStack_d0 * (float10)0.2 * (float10)0.017453292);
  fVar5 = fVar4 * (float10)0.1 + (float10)0.2;
  fVar4 = (float10)1 - fVar5;
  local_c4 = (float)((float10)local_e4 * fVar5);
  fVar8 = (float10)local_ec * fVar5 + fVar4 * ((float10)*param_2 + (float10)unaff_ESI * fVar3);
  fVar6 = (float10)local_e8 * fVar5 + fVar4 * ((float10)unaff_EBX * fVar3 + (float10)param_2[1]);
  fVar7 = (float10)local_c4 + fVar4 * ((float10)fStack_f4 * fVar3 + (float10)param_2[2]);
  fVar3 = (float10)local_e0 * fVar5 + fVar4 * ((float10)local_f0 * fVar3 + (float10)param_2[3]);
  local_ec = (float)fVar8;
  local_e8 = (float)fVar6;
  local_e4 = (float)fVar7;
  local_e0 = (float)fVar3;
  fStack_ac = *param_2;
  fStack_a8 = param_2[1];
  fStack_a4 = param_2[2];
  fStack_a0 = param_2[3];
  fStack_9c = (float)fVar8;
  fStack_98 = (float)fVar6;
  fStack_94 = (float)fVar7;
  fStack_90 = (float)fVar3;
  uStack_80 = 0;
  uStack_78 = 0;
  pcStack_7c = "raptorTeamFormationCheck2";
  iVar2 = RayCastSingleHitWork::RayCastSingleHitWork_2(&local_bc,auStack_6c,0,0,&fStack_ac);
  if ((iVar2 == 0) ||
     (8.0 <= SQRT((param_2[2] - fStack_b4) * (param_2[2] - fStack_b4) +
                  (*param_2 - local_bc) * (*param_2 - local_bc) +
                  (param_2[1] - local_b8) * (param_2[1] - local_b8)))) {
    fStack_b4 = local_e4;
    local_b8 = local_e8;
    fStack_b0 = local_e0;
    local_bc = local_ec;
  }
  *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) * 0.0 + local_bc;
  *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) * 0.0 + local_b8;
  *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0x18) * 0.0 + fStack_b4;
  *(float *)(param_1 + 0x1c) = *(float *)(param_1 + 0x1c) * 0.0 + fStack_b0;
  return;
}

// 00782830  FUN_00782830  size=920  [callgraph]
void __thiscall FUN_00782830(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  int iVar2;
  float unaff_EBX;
  float unaff_ESI;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float fStack_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  int iStack_d0;
  float local_c4;
  undefined4 local_c0;
  float local_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  char *pcStack_7c;
  undefined4 uStack_78;
  undefined1 auStack_6c [28];
  undefined1 local_50 [76];
  
  local_c4 = (float)(DAT_01be9224 % 0x708);
  local_e0 = *param_2 + *param_3 * 14.0;
  local_dc = param_3[1] * 14.0 + param_2[1];
  local_d8 = param_3[2] * 14.0 + param_2[2];
  local_d4 = param_3[3] * 14.0 + param_2[3];
  local_f0 = *param_2 - DAT_01bea380;
  local_e8 = param_2[2] - DAT_01bea388;
  local_e4 = param_2[3] - DAT_01bea38c;
  local_ec = 0.0;
  local_c0 = 0;
  local_bc = 1.0;
  local_b8 = 0.0;
  fVar3 = (float10)fcos((float10)(int)local_c4 * (float10)0.2 * (float10)0.017453292);
  FUN_00ddcfe0(local_50,&local_c0,(float)(fVar3 * (float10)0.34906584 - (float10)0.5235988));
  D3DXVec3TransformNormal(&local_f0,&local_f0,local_50);
  if (((unaff_ESI == 0.0) && (unaff_EBX == 0.0)) && (fStack_f4 == 0.0)) {
    unaff_ESI = *param_3;
    unaff_EBX = param_3[1];
    fStack_f4 = param_3[2];
    local_f0 = param_3[3];
  }
  else {
    fVar1 = fStack_f4 * fStack_f4 + unaff_EBX * unaff_EBX + unaff_ESI * unaff_ESI;
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      FUN_00ddf460(&stack0xffffff04,&stack0xffffff04);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      unaff_ESI = 0.0;
      unaff_EBX = 1.0;
      fStack_f4 = 0.0;
    }
  }
  fVar3 = (float10)14.0;
  iStack_d0 = DAT_01be9224 % 0x708;
  uStack_8c = 0xffff0009;
  uStack_88 = 0;
  uStack_84 = 0x60;
  fVar4 = (float10)fsin((float10)iStack_d0 * (float10)0.2 * (float10)0.017453292);
  fVar5 = fVar4 * (float10)0.1 + (float10)0.2;
  fVar4 = (float10)1 - fVar5;
  local_c4 = (float)((float10)local_e4 * fVar5);
  fVar8 = (float10)local_ec * fVar5 + fVar4 * ((float10)*param_2 + (float10)unaff_ESI * fVar3);
  fVar6 = (float10)local_e8 * fVar5 + fVar4 * ((float10)unaff_EBX * fVar3 + (float10)param_2[1]);
  fVar7 = (float10)local_c4 + fVar4 * ((float10)fStack_f4 * fVar3 + (float10)param_2[2]);
  fVar3 = (float10)local_e0 * fVar5 + fVar4 * ((float10)local_f0 * fVar3 + (float10)param_2[3]);
  local_ec = (float)fVar8;
  local_e8 = (float)fVar6;
  local_e4 = (float)fVar7;
  local_e0 = (float)fVar3;
  fStack_ac = *param_2;
  fStack_a8 = param_2[1];
  fStack_a4 = param_2[2];
  fStack_a0 = param_2[3];
  fStack_9c = (float)fVar8;
  fStack_98 = (float)fVar6;
  fStack_94 = (float)fVar7;
  fStack_90 = (float)fVar3;
  uStack_80 = 0;
  uStack_78 = 0;
  pcStack_7c = "raptorTeamFormationCheck2";
  iVar2 = RayCastSingleHitWork::RayCastSingleHitWork_2(&local_bc,auStack_6c,0,0,&fStack_ac);
  if ((iVar2 == 0) ||
     (8.0 <= SQRT((param_2[2] - fStack_b4) * (param_2[2] - fStack_b4) +
                  (*param_2 - local_bc) * (*param_2 - local_bc) +
                  (param_2[1] - local_b8) * (param_2[1] - local_b8)))) {
    fStack_b4 = local_e4;
    local_b8 = local_e8;
    fStack_b0 = local_e0;
    local_bc = local_ec;
  }
  *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x20) * 0.0 + local_bc;
  *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x24) * 0.0 + local_b8;
  *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) * 0.0 + fStack_b4;
  *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) * 0.0 + fStack_b0;
  return;
}

// 00782C40  FUN_00782c40  size=85  [callgraph]
int __fastcall FUN_00782c40(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x98) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
  }
  iVar1 = *(int *)(param_1 + 0x78);
  iVar3 = 0;
  for (iVar2 = *(int *)(iVar1 + 4); iVar2 != *(int *)(iVar1 + 8) * 0x10 + *(int *)(iVar1 + 4);
      iVar2 = iVar2 + 0x10) {
    if (*(int *)(iVar2 + 0xc) == 2) {
      iVar3 = iVar3 + 1;
    }
  }
  if (*(int *)(param_1 + 0x98) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
  }
  return iVar3;
}

// 00782CA0  FUN_00782ca0  size=100  [callgraph]
undefined4 __thiscall FUN_00782ca0(int param_1,float param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x80);
  if (*(int *)(param_1 + 0x98) != 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  if (*(float *)(param_1 + 0xa0) <= 0.0) {
    *(float *)(param_1 + 0xa0) = param_2 * 60.0;
    if (*(int *)(param_1 + 0x98) != 0) {
      LeaveCriticalSection(lpCriticalSection);
    }
    return 1;
  }
  if (*(int *)(param_1 + 0x98) != 0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return 0;
}

// 00782D10  FUN_00782d10  size=145  [callgraph]
float10 __thiscall FUN_00782d10(int param_1,int param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float local_4;
  
  iVar5 = *(int *)(param_1 + 0x78);
  fVar6 = (float10)-1.0;
  local_4 = (float)fVar6;
  iVar1 = *(int *)(iVar5 + 8);
  iVar2 = *(int *)(iVar5 + 4);
  for (iVar5 = *(int *)(iVar5 + 4); iVar5 != iVar1 * 0x10 + iVar2; iVar5 = iVar5 + 0x10) {
    iVar3 = FUN_00a81330();
    if ((iVar3 == 0) || (iVar3 == param_2)) {
      fVar6 = (float10)local_4;
    }
    else {
      pfVar4 = (float *)FUN_00a7c8b0();
      fVar7 = ((float10)param_3[2] - (float10)pfVar4[2]) *
              ((float10)param_3[2] - (float10)pfVar4[2]) +
              ((float10)*param_3 - (float10)*pfVar4) * ((float10)*param_3 - (float10)*pfVar4);
      fVar6 = (float10)local_4;
      if ((fVar7 < fVar6) || (fVar6 < (float10)0)) {
        local_4 = (float)fVar7;
        fVar6 = fVar7;
      }
    }
  }
  return fVar6;
}

// 00782DB0  FUN_00782db0  size=226  [callgraph]
undefined4 __fastcall FUN_00782db0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0077b180();
  switch(uVar1) {
  case 1:
    uVar1 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xea4) = uVar1;
    *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
    uVar1 = 0x50007;
LAB_00782dec:
    FUN_00a8caf0(uVar1,0,0,0);
    *(undefined4 *)(param_1 + 0xea0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x139c) = 0;
    return 1;
  case 2:
    iVar2 = FUN_00782ca0(*(undefined4 *)(param_1 + 0x1acc));
    if (iVar2 != 0) {
      uVar1 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xea4) = uVar1;
      *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
      uVar1 = 0x5000d;
      goto LAB_00782dec;
    }
    break;
  case 3:
    iVar2 = FUN_00782ca0(*(undefined4 *)(param_1 + 0x1acc));
    if (iVar2 != 0) {
      uVar1 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xea4) = uVar1;
      *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
      uVar1 = 0x5000c;
      goto LAB_00782dec;
    }
  }
  return 0;
}

// 00782EC0  FUN_00782ec0  size=350  [callgraph]
bool __thiscall FUN_00782ec0(int param_1,uint param_2)

{
  undefined4 uVar1;
  bool bVar2;
  
  if ((int)param_2 < 0x5000f) {
    if (0x50007 < (int)param_2) {
LAB_00782f92:
      if (*(uint *)(param_1 + 0xe94) == param_2) {
        return false;
      }
      *(uint *)(param_1 + 0xe94) = param_2;
      bVar2 = true;
      FUN_00c27260(0x40a00000);
      FUN_00c272a0(0x40a00000);
      goto LAB_00782f22;
    }
    if ((int)param_2 < 0x10011) {
      if ((0x1000c < (int)param_2) || ((0x10000 < (int)param_2 && ((int)param_2 < 0x10009)))) {
LAB_00782ffe:
        if (*(uint *)(param_1 + 0xe98) == param_2) {
          return false;
        }
        *(uint *)(param_1 + 0xe98) = param_2;
        bVar2 = true;
        goto LAB_00782f22;
      }
    }
    else if ((0x4ffff < (int)param_2) && ((int)param_2 < 0x50008)) goto LAB_00782f92;
  }
  else if ((int)param_2 < 0xf0002) {
    if (0xeffff < (int)param_2) goto LAB_00782f92;
    if ((0x9ffff < (int)param_2) && ((int)param_2 < 0xa0008)) goto LAB_00782ffe;
  }
  bVar2 = *(uint *)(param_1 + 0xe90) != param_2;
  if (!bVar2) {
    return bVar2;
  }
  *(uint *)(param_1 + 0xe90) = param_2;
LAB_00782f22:
  if ((param_2 & 0xffff0000) != 0x80000) {
    uVar1 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xea4) = uVar1;
    *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
  }
  FUN_00a8caf0(param_2,0,0,0);
  *(undefined4 *)(param_1 + 0xea0) = 0;
  FUN_00a962d0(0,0);
  *(undefined4 *)(param_1 + 0x139c) = 0;
  return bVar2;
}

// 00783020  FUN_00783020  size=771  [callgraph]
undefined4 __fastcall FUN_00783020(int param_1)

{
  float10 fVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  float10 fVar6;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  FUN_00781890(&local_20,*(undefined4 *)(param_1 + 0x4f0));
  local_30 = local_20 - *(float *)(param_1 + 0x40);
  local_2c = local_1c - *(float *)(param_1 + 0x44);
  local_28 = local_18 - *(float *)(param_1 + 0x48);
  local_24 = local_14 - *(float *)(param_1 + 0x4c);
  if (((local_30 != 0.0) || (local_2c != 0.0)) || (local_28 != 0.0)) {
    iVar5 = *(int *)(param_1 + 0xa84);
    local_40 = *(float *)(iVar5 + 0x40) - *(float *)(param_1 + 0x40);
    local_3c = *(float *)(iVar5 + 0x44) - *(float *)(param_1 + 0x44);
    local_38 = *(float *)(iVar5 + 0x48) - *(float *)(param_1 + 0x48);
    local_34 = *(float *)(iVar5 + 0x4c) - *(float *)(param_1 + 0x4c);
    if (((local_40 == 0.0) && (local_3c == 0.0)) && (local_38 == 0.0)) {
      return 0;
    }
    local_20 = *(float *)(iVar5 + 0x40) - local_20;
    local_18 = *(float *)(iVar5 + 0x48) - local_18;
    if (25.0 <= local_18 * local_18 + local_20 * local_20) {
      fVar6 = (float10)FUN_00782d10(*(undefined4 *)(param_1 + 0x4f0),&local_20);
      fVar1 = (float10)0;
      if ((fVar1 < fVar6 != (fVar1 == fVar6)) && (fVar6 < (float10)25.0)) {
        return 0;
      }
      fVar6 = (float10)local_28 * (float10)local_28 +
              (float10)local_30 * (float10)local_30 + (float10)local_2c * (float10)local_2c;
      if (fVar6 < fVar1 == (fVar6 == fVar1)) {
        FUN_00ddf460(&local_30,&local_30);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        local_30 = 0.0;
        local_2c = 1.0;
        local_28 = 0.0;
      }
      fVar2 = local_38 * local_38 + local_40 * local_40 + local_3c * local_3c;
      if (fVar2 < 0.0 == (fVar2 == 0.0)) {
        FUN_00ddf460(&local_40,&local_40);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        local_40 = 0.0;
        local_3c = 1.0;
        local_38 = 0.0;
      }
      iVar5 = 0xa0000;
      if (0.85 < local_38 * local_28 + local_40 * local_30 + local_3c * local_2c) {
        iVar5 = 0xa0006;
      }
      iVar3 = FUN_00782ec0(iVar5);
      if (iVar3 == 0) {
        if (iVar5 != 0xa0000) {
          return 0;
        }
        if (*(int *)(param_1 + 0xe98) == 0xa0006) {
          return 0;
        }
        *(undefined4 *)(param_1 + 0xe98) = 0xa0006;
        uVar4 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
        *(undefined4 *)(param_1 + 0xea4) = uVar4;
        FUN_00a8caf0(0xa0006,0,0,0);
        *(undefined4 *)(param_1 + 0xea0) = 0;
        FUN_00a962d0(0,0);
        *(undefined4 *)(param_1 + 0x139c) = 0;
      }
      return 1;
    }
  }
  return 0;
}

// 00783330  FUN_00783330  size=268  [callgraph]
undefined4 __thiscall FUN_00783330(int *param_1,int *param_2)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  iVar3 = *param_2;
  uVar2 = 0;
  if ((((iVar3 != 0) && (iVar3 != 1)) && (iVar3 != 2)) && ((iVar3 != 0x1b0 && (iVar3 != 0x147)))) {
    iVar4 = 0;
    iVar3 = FUN_00a81330();
    if (iVar3 != 0) {
      iVar4 = FUN_00a7c8a0();
      if ((iVar4 != 0) && ((*(byte *)(iVar4 + 0x4c0) & 0x10) != 0)) {
        (**(code **)(*param_1 + 0x220))(0x40000000);
        (**(code **)(*param_1 + 0x21c))(iVar4,(char)param_2[4],0x3c23d70a,0);
      }
    }
    uVar10 = 0x3f800000;
    uVar9 = 0;
    uVar8 = 0x8000210;
    uVar7 = 0x3f800000;
    uVar6 = 0x3d088889;
    uVar2 = 1;
    sVar1 = FUN_00dde2d0(0,2);
    FUN_00aa4080(sVar1 + 0x61,uVar2,uVar6,uVar7,uVar8,uVar9,uVar10);
    (**(code **)(*param_1 + 0x198))(iVar4,param_2,1);
    fVar5 = (float10)FUN_00ddba30((float)param_2[0xc] - (float)param_1[0x25]);
    param_1[0x245] = (int)(float)fVar5;
    uVar2 = 1;
  }
  return uVar2;
}

// 00783440  Emc060::getAttackInfo  size=483  [class]
undefined4 __thiscall Emc060::getAttackInfo(int param_1,ushort *param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint unaff_EBX;
  undefined1 uStack_8;
  
  iVar2 = FUN_00dd3500(0x110,&DAT_01b7c0b8);
  if ((iVar2 != 0) && (iVar2 = CollisionAttackData::CollisionAttackData_3(), iVar2 != 0)) {
    puVar1 = *(uint **)(iVar2 + 8);
    puVar1[5] = *(uint *)(param_1 + 0x4f0);
    uVar3 = FUN_00a7c7f0();
    FUN_00a7c960(uVar3);
    uVar4 = FUN_00ac8520(*param_2);
    uVar3 = (**(code **)(**(int **)(param_1 + 0x754) + 0x10))(*param_2);
    (**(code **)(**(int **)(param_1 + 0x754) + 0x20))(*param_2);
    uVar5 = (**(code **)(**(int **)(param_1 + 0x754) + 0x18))(*param_2);
    if ((*(int *)(param_1 + 0xeb4) != 0) && (*(int *)(param_1 + 0xe80) == 0)) {
      uVar4 = FUN_00fdbc60();
    }
    puVar1[3] = unaff_EBX;
    *(undefined1 *)(puVar1 + 4) = uStack_8;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    *puVar1 = (uint)*param_2;
    *(undefined2 *)(puVar1 + 0x21) = 0x3400;
    switch(*param_2) {
    case 4:
      *puVar1 = 0xee;
      puVar1[0x23] = puVar1[0x23] | 0x20000000;
      *(undefined1 *)((int)puVar1 + 0x11) = 7;
      break;
    case 6:
      *puVar1 = 0xef;
      puVar1[0x23] = puVar1[0x23] | 0x20000000;
      puVar1[0x24] = puVar1[0x24] | 0x2000000;
      *(undefined1 *)((int)puVar1 + 0x11) = 7;
      iVar2 = FUN_00a8cbe0(0xf0001);
      if (iVar2 != 0) {
        puVar1[0x24] = puVar1[0x24] | 0x20000000;
      }
      break;
    case 8:
    case 0x10:
    case 0x12:
      *puVar1 = 0xf0;
      *(undefined1 *)((int)puVar1 + 0x11) = 7;
      break;
    case 10:
      *puVar1 = 0xf1;
      *(undefined1 *)((int)puVar1 + 0x11) = 10;
      puVar1[0x23] = puVar1[0x23] | 0x40000000;
      puVar1[0x24] = puVar1[0x24] | 0x2000000;
      break;
    case 0xc:
    case 0xe:
      *puVar1 = 0xf0;
      *(undefined1 *)((int)puVar1 + 0x11) = 7;
      puVar1[0x23] = puVar1[0x23] | 0x20000000;
      puVar1[0x24] = puVar1[0x24] | 0x800000;
      break;
    case 0x14:
      *puVar1 = 0xf6;
      puVar1[0x23] = puVar1[0x23] | 0x20002000;
    }
    FUN_00aa56a0(puVar1);
    return uVar3;
  }
  FUN_00dd5650(&DAT_01647c2c);
  return 0;
}

// 00783F20  FUN_00783f20  size=749  [callgraph]
void __fastcall FUN_00783f20(int *param_1)

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
    param_1[0x5da] = 0;
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
    if ((fVar1 - (float)param_1[0x244] < 0.0) && (param_1[0x704] == 0)) {
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
        if (param_1[0x509] != 0) {
          FUN_0043fc90(param_1[0x2a2],&local_20,0);
        }
      }
      FUN_00aa4080(0x44,2,0,0x3f800000,0x8000210,0,0x3f800000);
      fVar1 = (float)param_1[0x249];
      param_1[0x249] = (int)(fVar1 + 10.0);
      if (*(int *)(param_1[0x509] + 0x4a0) == 1) {
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

// 00784250  FUN_00784250  size=20  [callgraph]
void __fastcall FUN_00784250(int *param_1)

{
  if (param_1[0x128] == 1) {
                    /* WARNING: Could not recover jumptable at 0x00784261. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  return;
}

// 00784270  FUN_00784270  size=566  [callgraph]
void __fastcall FUN_00784270(int *param_1)

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
    param_1[0x5da] = 0;
  }
  else if (param_1[0x187] != 1) goto LAB_00784462;
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
    if (param_1[0x50a] != 0) {
      FUN_0043fc90(param_1[0x2a2],&local_20,2);
    }
  }
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    sVar2 = FUN_00dde2d0(0,2);
    param_1[0x5df] = (int)(((float)(int)sVar2 + 1.0) * 60.0);
    fVar1 = (float)param_1[0x2a4];
    if (((!NAN(fVar1) && 25.0 < fVar1 != (fVar1 == 25.0)) && (param_1[0x128] == 1)) &&
       ((float)param_1[0x5de] < 0.0)) {
      iVar3 = FUN_00a8cab0();
      param_1[0x3aa] = param_1[0x3a8];
      param_1[0x3a9] = iVar3;
      FUN_00a8caf0(0x50009,0,0,0);
      param_1[0x3a8] = 0;
      FUN_00a962d0(0,0);
      param_1[0x4e7] = 0;
    }
  }
LAB_00784462:
  iVar3 = FUN_00a8c760(0);
  if (iVar3 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3db2b8c2,0);
  }
  return;
}

// 007844B0  FUN_007844b0  size=566  [callgraph]
void __fastcall FUN_007844b0(int *param_1)

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
    param_1[0x5da] = 0;
  }
  else if (param_1[0x187] != 1) goto LAB_007846a2;
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
    if (param_1[0x50a] != 0) {
      FUN_0043fc90(param_1[0x2a2],&local_20,4);
    }
  }
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    sVar2 = FUN_00dde2d0(0,2);
    param_1[0x5df] = (int)(((float)(int)sVar2 + 1.0) * 60.0);
    fVar1 = (float)param_1[0x2a4];
    if (((!NAN(fVar1) && 25.0 < fVar1 != (fVar1 == 25.0)) && (param_1[0x128] == 1)) &&
       ((float)param_1[0x5de] < 0.0)) {
      iVar3 = FUN_00a8cab0();
      param_1[0x3aa] = param_1[0x3a8];
      param_1[0x3a9] = iVar3;
      FUN_00a8caf0(0x50009,0,0,0);
      param_1[0x3a8] = 0;
      FUN_00a962d0(0,0);
      param_1[0x4e7] = 0;
    }
  }
LAB_007846a2:
  iVar3 = FUN_00a8c760(0);
  if (iVar3 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3db2b8c2,0);
  }
  return;
}

// 007846F0  FUN_007846f0  size=869  [callgraph]
void __fastcall FUN_007846f0(int *param_1)

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
    if ((param_1[0x6e0] != 0) && (sVar3 = FUN_00dde2d0(0,1), sVar3 != 0)) {
      uVar6 = 0x24;
    }
    FUN_00aa4080(uVar6,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x3a7] = 1;
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
    param_1[0x3a7] = 0;
    FUN_00a8d280();
    param_1[0x5da] = 0;
    break;
  case 3:
    break;
  default:
    goto switchD_0078471b_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar5 = FUN_00a94ce0(0);
  if (iVar5 != 0) {
    pcVar1 = *(code **)(*param_1 + 0x34c);
    param_1[0x3a7] = 0;
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
switchD_0078471b_default:
  return;
}

// 00784A70  FUN_00784a70  size=623  [callgraph]
void __fastcall FUN_00784a70(int param_1)

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
  if (*(int *)(param_1 + 0x1b74) != 0) goto LAB_00784b47;
  if (*(int *)(param_1 + 0x1b78) == 0) {
    if (*(int *)(param_1 + 0x1b7c) == 0) {
      if (*(int *)(param_1 + 0x1b80) == 0) {
        uVar1 = FUN_00a8cab0();
        uVar2 = 0x10000;
        goto LAB_00784b19;
      }
      uVar1 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xea4) = uVar1;
      *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
      uVar2 = 0x1000e;
    }
    else {
      uVar1 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xea4) = uVar1;
      *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
      uVar2 = 0x1000d;
    }
  }
  else {
    uVar1 = FUN_00a8cab0();
    uVar2 = 0x1000f;
LAB_00784b19:
    *(undefined4 *)(param_1 + 0xea4) = uVar1;
    *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
  }
  FUN_00a8caf0(uVar2,0,0,0);
  *(undefined4 *)(param_1 + 0xea0) = 0;
  FUN_00a962d0(0,0);
  *(undefined4 *)(param_1 + 0x139c) = 0;
LAB_00784b47:
  FUN_00781890(&local_20,*(undefined4 *)(param_1 + 0x4f0));
  local_20 = local_20 - *(float *)(param_1 + 0x40);
  local_1c = local_1c - *(float *)(param_1 + 0x44);
  local_18 = local_18 - *(float *)(param_1 + 0x48);
  if ((SQRT(local_18 * local_18 + local_1c * local_1c + local_20 * local_20) < 12.0) &&
     (1.0471976 < *(float *)(param_1 + 0xaa0))) {
    uVar1 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xea4) = uVar1;
    *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
    FUN_00a8caf0(0x10005,0,0,0);
    *(undefined4 *)(param_1 + 0xea0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x139c) = 0;
    if (1.0471976 < *(float *)(param_1 + 0xa9c)) {
      uVar1 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
      *(undefined4 *)(param_1 + 0xea4) = uVar1;
      FUN_00a8caf0(0x10006,0,0,0);
      *(undefined4 *)(param_1 + 0xea0) = 0;
      FUN_00a962d0(0,0);
      *(undefined4 *)(param_1 + 0x139c) = 0;
    }
    if (2.0943952 < *(float *)(param_1 + 0xa9c)) {
      uVar1 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xea4) = uVar1;
      *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
      FUN_00a8caf0(0x10008,0,0,0);
      *(undefined4 *)(param_1 + 0xea0) = 0;
      FUN_00a962d0(0,0);
      *(undefined4 *)(param_1 + 0x139c) = 0;
    }
    if (*(float *)(param_1 + 0xa9c) < -2.0943952) {
      uVar1 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xea4) = uVar1;
      *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
      FUN_00a8caf0(0x10007,0,0,0);
      *(undefined4 *)(param_1 + 0xea0) = 0;
      FUN_00a962d0(0,0);
      *(undefined4 *)(param_1 + 0x139c) = 0;
    }
  }
  return;
}

// 00784CE0  FUN_00784ce0  size=799  [callgraph]
void __fastcall FUN_00784ce0(int *param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x10,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    if (param_1[0x3ad] != 0) {
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
    if (param_1[0x3ad] != 0) {
      uVar4 = 0x3fe66666;
      uVar3 = 0;
      FUN_00a92f90(0,0x3fe66666);
      FUN_00407ab0(uVar3,uVar4);
    }
    FUN_00781950(param_1[0x13c],0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
    param_1[0x248] = 0;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00781950(param_1[0x13c],0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)((float)param_1[0x244] + fVar1);
    if ((120.0 < (float)param_1[0x244] + fVar1) && (param_1[0x3ad] == 0)) {
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

// 00785020  FUN_00785020  size=127  [callgraph]
void __fastcall FUN_00785020(int param_1)

{
  undefined4 uVar1;
  
  if (((*(int *)(param_1 + 0x61c) == 2) && (6.0 < *(float *)(param_1 + 0x1c30))) &&
     (*(int *)(param_1 + 0xe98) != 0xa0003)) {
    *(undefined4 *)(param_1 + 0xe98) = 0xa0003;
    uVar1 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xea4) = uVar1;
    *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
    FUN_00a8caf0(0xa0003,0,0,0);
    *(undefined4 *)(param_1 + 0xea0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x139c) = 0;
  }
  return;
}

// 007850A0  FUN_007850a0  size=307  [callgraph]
void __fastcall FUN_007850a0(int param_1)

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
      if (*(int *)(param_1 + 0xe98) == 0x10008) {
        return;
      }
      *(undefined4 *)(param_1 + 0xe98) = 0x10008;
      uVar2 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xea4) = uVar2;
      *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
      goto LAB_007851a9;
    }
    if (*(float *)(param_1 + 0xa9c) < -2.0943952) {
      iVar3 = 0x10007;
      if (*(int *)(param_1 + 0xe98) == 0x10007) {
        return;
      }
      *(undefined4 *)(param_1 + 0xe98) = 0x10007;
      uVar2 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xea4) = uVar2;
      *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
      goto LAB_007851a9;
    }
    iVar3 = 0x10005;
  }
  else {
    iVar3 = 0x10006;
  }
  if (*(int *)(param_1 + 0xe98) == iVar3) {
    return;
  }
  *(int *)(param_1 + 0xe98) = iVar3;
  uVar2 = FUN_00a8cab0();
  *(undefined4 *)(param_1 + 0xea4) = uVar2;
  *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
LAB_007851a9:
  FUN_00a8caf0(iVar3,0,0,0);
  *(undefined4 *)(param_1 + 0xea0) = 0;
  FUN_00a962d0(0,0);
  *(undefined4 *)(param_1 + 0x139c) = 0;
  return;
}

// 007851E0  FUN_007851e0  size=971  [callgraph]
void __fastcall FUN_007851e0(int *param_1)

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
    if (param_1[0x3ad] != 0) {
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
      param_1[0x70b] = param_1[0x3ad];
      return;
    }
    break;
  case 2:
    FUN_00aa4080((iVar3 != 0xa0002) * '\b' + '\t',0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    if (param_1[0x3ad] != 0) {
      uVar6 = 0x3fe66666;
      uVar5 = 0;
      FUN_00a92f90(0,0x3fe66666);
      FUN_00407ab0(uVar5,uVar6);
    }
    if (param_1[0x2a1] != 0) {
      FUN_007791b0(param_1[0x2a1] + 0x40,0x3e19999a,0x3d8efa35);
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
        param_1[0x3a9] = iVar3;
        param_1[0x3aa] = param_1[0x3a8];
        FUN_00a8caf0(0x10010,0,0,0);
        param_1[0x3a8] = 0;
        FUN_00a962d0(0,0);
        param_1[0x4e7] = 0;
        param_1[0x70b] = param_1[0x3ad];
        return;
      }
    }
    param_1[600] = param_1[0x14];
    param_1[0x259] = param_1[0x15];
    param_1[0x25a] = param_1[0x16];
    param_1[0x25b] = param_1[0x17];
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (param_1[0x2a1] != 0) {
      FUN_007791b0(param_1[0x2a1] + 0x40,0x3e19999a,0x3d8efa35);
    }
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] <= 0.0) {
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x70b] = param_1[0x3ad];
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
    goto LAB_0078555b;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_0078555b:
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      param_1[0x70b] = param_1[0x3ad];
      return;
    }
  }
  param_1[0x70b] = param_1[0x3ad];
  return;
}

// 007855D0  FUN_007855d0  size=581  [callgraph]
void __fastcall FUN_007855d0(int *param_1)

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
    FUN_00781890(&local_40,param_1[0x13c]);
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
  else if (param_1[0x187] != 1) goto LAB_007857ca;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
LAB_007857ca:
  if ((float)param_1[0x2a8] <= 1.0471976) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3db2b8c2,0);
  }
  return;
}

// 00785820  FUN_00785820  size=511  [callgraph]
void __fastcall FUN_00785820(int *param_1)

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
    FUN_00781890(&local_30,param_1[0x13c]);
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
  else if (param_1[0x187] != 1) goto LAB_007859da;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
LAB_007859da:
  iVar3 = FUN_00a8c760(0);
  if (iVar3 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3e0efa35,0);
  }
  return;
}

// 00785A20  FUN_00785a20  size=107  [callgraph]
undefined4 * __thiscall FUN_00785a20(int param_1,undefined4 *param_2)

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

// 00785AC0  FUN_00785ac0  size=43  [callgraph]
void FUN_00785ac0(int param_1,int param_2)

{
  if (param_1 != 0) {
    FUN_00a7c940(param_2);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  }
  return;
}

// 00785B10  FUN_00785b10  size=133  [callgraph]
int __thiscall
FUN_00785b10(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
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

// 00785BA0  FUN_00785ba0  size=127  [callgraph]
void __fastcall FUN_00785ba0(int param_1)

{
  undefined4 uVar1;
  
  if (((*(int *)(param_1 + 0x61c) == 2) && (60.0 < *(float *)(param_1 + 0x1c30))) &&
     (*(int *)(param_1 + 0xe98) != 0x10003)) {
    *(undefined4 *)(param_1 + 0xe98) = 0x10003;
    uVar1 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xea4) = uVar1;
    *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
    FUN_00a8caf0(0x10003,0,0,0);
    *(undefined4 *)(param_1 + 0xea0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x139c) = 0;
  }
  return;
}

// 00785C20  FUN_00785c20  size=264  [callgraph]
void __fastcall FUN_00785c20(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_40 [4];
  float local_3c;
  
  *(byte *)(param_1 + 0xdb4) = *(byte *)(param_1 + 0xdb4) | 8;
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x75,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_0077b0f0();
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    uVar2 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xea4) = uVar2;
    *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
    FUN_00a8caf0(0x6000d,0,0,0);
    *(undefined4 *)(param_1 + 0xea0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x139c) = 0;
  }
  iVar1 = FUN_00a92f90();
  FUN_00e332b0(local_40,*(undefined4 *)(iVar1 + 0xa0));
  *(float *)(param_1 + 0x894) = local_3c * 0.016666668 * 0.8;
  return;
}

// 00785D30  FUN_00785d30  size=270  [callgraph]
/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_00785d30(int param_1)

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
  if (*(int *)(param_1 + 0x1b94) == 0) {
    iVar1 = FUN_00a9b930();
    if (iVar1 == 0) goto LAB_00785df5;
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_00a9b930();
    if (iVar1 == 0) goto LAB_00785df5;
    uVar2 = 0x40a00000;
  }
  FUN_00bc3c20(param_1 + 0x40,local_8,local_8 + 1,uVar2);
LAB_00785df5:
  if (local_8[0] == 0) {
    uVar2 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xea4) = uVar2;
    *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
    FUN_00a8caf0(0x60016,0,0,0);
    *(undefined4 *)(param_1 + 0xea0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x139c) = 0;
  }
  return;
}

// 00785E40  FUN_00785e40  size=173  [callgraph]
void __fastcall FUN_00785e40(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  
  if (((2 < *(int *)(param_1 + 0x61c)) && (*(int *)(param_1 + 0x61c) < 4)) &&
     (*(float *)(param_1 + 0xa90) < 25.0)) {
    *(undefined4 *)(param_1 + 0xe9c) = 0;
    uVar2 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xea4) = uVar2;
    *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
    FUN_00a8caf0(0x10003,4,0,0);
    *(undefined4 *)(param_1 + 0xea0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x139c) = 0;
    sVar1 = FUN_00dde2d0(0,1);
    if (sVar1 != 0) {
      FUN_0077ed00();
    }
    if (*(int *)(param_1 + 0x764) != 0) {
      FUN_008e5ac0(2);
    }
  }
  return;
}

// 00785EF0  FUN_00785ef0  size=74  [callgraph]
void FUN_00785ef0(void)

{
  int iVar1;
  undefined4 local_90 [35];
  
  FUN_0040b190();
  local_90[0] = 3;
  iVar1 = FUN_00a82090("Emc040",0x2c040,local_90);
  if (iVar1 != 0) {
    FUN_0077e930(iVar1);
  }
  return;
}

// 00786070  FUN_00786070  size=135  [callgraph]
undefined4 __fastcall FUN_00786070(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00ac4780();
  if ((iVar1 < 3) && (iVar1 = FUN_00a90070(5), iVar1 == 0)) {
    return 0;
  }
  iVar1 = FUN_00782ca0(*(undefined4 *)(param_1 + 0x1acc));
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_00a8cab0();
  *(undefined4 *)(param_1 + 0xea4) = uVar2;
  *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
  FUN_00a8caf0(0x5000c,0,0,0);
  *(undefined4 *)(param_1 + 0xea0) = 0;
  FUN_00a962d0(0,0);
  *(undefined4 *)(param_1 + 0x139c) = 0;
  return 1;
}

// 00786100  FUN_00786100  size=135  [callgraph]
undefined4 __fastcall FUN_00786100(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00ac4780();
  if ((iVar1 < 3) && (iVar1 = FUN_00a90070(5), iVar1 == 0)) {
    return 0;
  }
  iVar1 = FUN_00782ca0(*(undefined4 *)(param_1 + 0x1acc));
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_00a8cab0();
  *(undefined4 *)(param_1 + 0xea4) = uVar2;
  *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
  FUN_00a8caf0(0x5000d,0,0,0);
  *(undefined4 *)(param_1 + 0xea0) = 0;
  FUN_00a962d0(0,0);
  *(undefined4 *)(param_1 + 0x139c) = 0;
  return 1;
}

// 00786190  FUN_00786190  size=296  [callgraph]
void __fastcall FUN_00786190(int param_1)

{
  int iVar1;
  undefined1 auStack_2c [12];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  switch(*(undefined1 *)(param_1 + 0x1b84)) {
  case 1:
    iVar1 = FUN_0077efa0();
    local_20 = 0;
    local_1c = 0;
    local_18 = 0xc0400000;
    *(uint *)(param_1 + 0x1b74) = (uint)(iVar1 == 0);
    D3DXVec3TransformNormal(&local_20,&local_20,param_1 + 0x10);
    FUN_0077ef30(auStack_2c);
    *(char *)(param_1 + 0x1b84) = *(char *)(param_1 + 0x1b84) + '\x01';
    return;
  case 2:
    iVar1 = FUN_0077efa0();
    local_20 = 0xc0400000;
    local_1c = 0;
    local_18 = 0;
    *(uint *)(param_1 + 0x1b78) = (uint)(iVar1 == 0);
    D3DXVec3TransformNormal(&local_20,&local_20,param_1 + 0x10);
    FUN_0077ef30(auStack_2c);
    *(char *)(param_1 + 0x1b84) = *(char *)(param_1 + 0x1b84) + '\x01';
    return;
  case 3:
    iVar1 = FUN_0077efa0();
    *(uint *)(param_1 + 0x1b7c) = (uint)(iVar1 == 0);
  case 0:
    local_20 = 0x40400000;
    local_1c = 0;
    local_18 = 0;
    D3DXVec3TransformNormal(&local_20,&local_20,param_1 + 0x10);
    FUN_0077ef30(auStack_2c);
    *(char *)(param_1 + 0x1b84) = *(char *)(param_1 + 0x1b84) + '\x01';
    return;
  case 4:
    iVar1 = FUN_0077efa0();
    *(uint *)(param_1 + 0x1b80) = (uint)(iVar1 == 0);
    *(undefined1 *)(param_1 + 0x1b84) = 0;
  default:
    return;
  }
}

// 007862D0  FUN_007862d0  size=136  [callgraph]
void __fastcall FUN_007862d0(int *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined *puVar4;
  
  uVar3 = 0;
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      puVar4 = &DAT_01be9db8;
      (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
      iVar1 = FUN_00dd6d80(puVar4);
      uVar3 = -(uint)(iVar1 != 0) & (uint)piVar2;
    }
  }
  if (*(int *)(uVar3 + 0x654) == -1) {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      FUN_009f8b10();
      FUN_00a7c950();
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x34c);
    param_1[0x195] = -1;
                    /* WARNING: Could not recover jumptable at 0x00786351. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}

// 00786360  FUN_00786360  size=268  [callgraph]
void __fastcall FUN_00786360(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined *puVar5;
  
  uVar4 = 0;
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar5 = &DAT_01be9db8;
    (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
    iVar1 = FUN_00dd6d80(puVar5);
    uVar4 = -(uint)(iVar1 != 0) & (uint)piVar2;
  }
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0,0,0x3d088889,0x3f800000,0x8000000,0,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_0077f330();
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    FUN_007793a0(uVar4);
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    uVar3 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xea4) = uVar3;
    *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
    FUN_00a8caf0(0x50010,0,0,0);
    *(undefined4 *)(param_1 + 0xea0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x139c) = 0;
  }
  FUN_007793a0(uVar4);
  return;
}

// 00786470  FUN_00786470  size=282  [callgraph]
void __fastcall FUN_00786470(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined *puVar4;
  
  (**(code **)(*param_1 + 0x220))(0x41200000);
  uVar3 = 0;
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar4 = &DAT_01be9db8;
    (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
    iVar1 = FUN_00dd6d80(puVar4);
    uVar3 = -(uint)(iVar1 != 0) & (uint)piVar2;
  }
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x9c,0,0x3e088889,0x3f800000,0x8000000,0,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00779430(uVar3);
  }
  else if (param_1[0x187] != 1) goto LAB_00786571;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      FUN_009f8b10();
      FUN_00a7c950();
    }
    param_1[0x195] = -1;
  }
LAB_00786571:
  iVar1 = FUN_00a8c760(10);
  if (iVar1 == 0) {
    FUN_007793a0(uVar3);
  }
  return;
}

// 00786590  FUN_00786590  size=616  [callgraph]
void __thiscall FUN_00786590(int *param_1,float param_2)

{
  short sVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  float fVar8;
  undefined4 *puVar9;
  short *psVar10;
  undefined *puVar11;
  float fStack_cc;
  short *psStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float afStack_a0 [4];
  undefined4 auStack_90 [12];
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  undefined4 auStack_50 [19];
  
  if (param_1[0x13c] != 0) {
    puVar11 = &DAT_01be9c78;
    iVar6 = 0;
    (**(code **)(*param_1 + 4))(&DAT_01be9c78);
    iVar3 = FUN_00dd6d80(puVar11);
    if (((iVar3 != 0) && (iVar3 = FUN_00a81330(), iVar3 != 0)) &&
       (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
      iVar6 = FUN_00445b90(iVar3);
    }
    iVar3 = FUN_00a12210(0);
    if (iVar3 != 0) {
      FID_conflict__memcpy(auStack_50,param_1 + 4,0x40);
      fVar8 = (float)param_1[0xcc];
      if (fVar8 != 0.0) {
        if (iVar6 != 0) {
          fVar8 = *(float *)(iVar6 + 0x330);
        }
        fStack_c4 = 0.0;
        fStack_a4 = 0.0;
        fStack_cc = fVar8;
        if (0 < *(int *)((int)fVar8 + 0xc4)) {
          psVar10 = (short *)(*(int *)((int)fVar8 + 0xc0) + 0x68);
          do {
            sVar1 = *psVar10;
            if (sVar1 < 0) {
LAB_007866b8:
              piVar4 = param_1 + 4;
            }
            else {
              piVar4 = (int *)param_1[0xd8];
              piVar5 = piVar4;
              if (piVar4 == (int *)0x0) {
                piVar5 = param_1;
              }
              if ((short)piVar5[0xd6] <= sVar1) goto LAB_007866b8;
              if (piVar4 == (int *)0x0) {
                piVar4 = param_1;
              }
              iVar3 = (int)sVar1;
              if ((iVar3 < 0) || ((short)piVar4[0xd6] <= iVar3)) {
                piVar4 = (int *)0x10;
              }
              else {
                piVar4 = (int *)(iVar3 * 0xb0 + piVar4[0xd4] + 0x10);
              }
            }
            psStack_c8 = psVar10;
            D3DXMatrixMultiply(auStack_90,psVar10 + -0x24,piVar4);
            fStack_c0 = fStack_60;
            fStack_bc = fStack_5c;
            fStack_b8 = fStack_58;
            FUN_00a12210(0);
            fVar2 = SQRT((fStack_c0 - (float)param_1[0x10]) * (fStack_c0 - (float)param_1[0x10]) +
                         (fStack_bc - (float)param_1[0x11]) * (fStack_bc - (float)param_1[0x11]) +
                         (fStack_b8 - (float)param_1[0x12]) * (fStack_b8 - (float)param_1[0x12]));
            if (1.0 < fVar2) {
              fVar2 = 1.0;
            }
            if (fStack_c4 < 1.0 - fVar2) {
              puVar7 = auStack_90;
              puVar9 = auStack_50;
              for (iVar3 = 0x10; fVar8 = fStack_cc, psVar10 = psStack_c8, fStack_c4 = 1.0 - fVar2,
                  iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar9 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar9 = puVar9 + 1;
              }
            }
            fStack_a4 = (float)((int)fStack_a4 + 1);
            psVar10 = psVar10 + 0x38;
            psStack_c8 = psVar10;
          } while ((int)fStack_a4 < *(int *)((int)fVar8 + 0xc4));
        }
      }
      afStack_a0[0] = 0.0;
      afStack_a0[2] = 0.0;
      afStack_a0[1] = 1.0;
      D3DXVec3TransformNormal(&fStack_c0,afStack_a0,auStack_50);
      fStack_cc = fStack_ac * -0.025 * param_2;
      psStack_c8 = (short *)(fStack_a8 * -0.025 * param_2);
      fStack_c4 = fStack_a4 * -0.025 * param_2;
      fStack_c0 = afStack_a0[0] * -0.025 * param_2;
      (**(code **)(*param_1 + 0x70))(&fStack_cc);
    }
  }
  return;
}

// 00786800  FUN_00786800  size=5782  [callgraph]
void __thiscall FUN_00786800(uint param_1,int *param_2,int param_3)

{
  int iVar1;
  float fVar2;
  bool bVar3;
  float fVar4;
  byte bVar5;
  uint uVar6;
  float *pfVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  int unaff_EBX;
  int unaff_ESI;
  int iVar14;
  int unaff_EDI;
  int iVar15;
  uint uVar16;
  float10 fVar17;
  int *piVar18;
  int *piVar19;
  int iVar20;
  uint uStack_274;
  int iStack_270;
  int iStack_26c;
  uint local_268;
  int iStack_260;
  int local_25c;
  float fStack_240;
  float local_23c [3];
  undefined4 local_230;
  float local_22c;
  undefined4 local_228;
  int local_220 [4];
  float local_210;
  float local_20c;
  float local_208;
  float local_204;
  float fStack_200;
  float fStack_1fc;
  undefined1 auStack_1f8 [4];
  float local_1f4;
  float local_1f0;
  float fStack_1ec;
  float local_1e8;
  undefined4 local_1e4;
  uint local_1e0;
  int local_1dc;
  int local_1d8;
  int aiStack_1d4 [6];
  int local_1bc;
  int local_1b8;
  int local_1b4;
  int iStack_1b0;
  int iStack_1ac;
  int iStack_1a8;
  int iStack_1a4;
  int iStack_1a0;
  int iStack_19c;
  int iStack_198;
  int iStack_194;
  int iStack_190;
  int aiStack_18c [6];
  int iStack_174;
  int iStack_170;
  int iStack_16c;
  int iStack_160;
  int iStack_15c;
  int iStack_150;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_12c;
  undefined4 uStack_128;
  uint auStack_124 [18];
  uint auStack_dc [27];
  undefined1 local_70 [108];
  
  *(undefined4 *)(param_3 + 0x18) = 0x42000;
  iVar15 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = *(int *)(param_1 + 0x1bf8);
  uVar6 = 2;
  local_25c = 3;
  do {
    bVar5 = (byte)uVar6;
    uVar12 = 0x80000000 >> (bVar5 - 2 & 0x1f);
    uVar11 = uVar6 - 2 >> 5;
    if (((*(uint *)(param_3 + 0x10 + uVar11 * 4) & uVar12) != 0) &&
       ((*(uint *)(param_3 + 8 + uVar11 * 4) & uVar12) == 0)) {
      iVar15 = iVar15 + 1;
    }
    uVar12 = 0x80000000 >> (bVar5 - 1 & 0x1f);
    uVar11 = uVar6 - 1 >> 5;
    if (((*(uint *)(param_3 + 0x10 + uVar11 * 4) & uVar12) != 0) &&
       ((*(uint *)(param_3 + 8 + uVar11 * 4) & uVar12) == 0)) {
      iVar15 = iVar15 + 1;
    }
    uVar11 = 0x80000000 >> (bVar5 & 0x1f);
    if (((*(uint *)(param_3 + 0x10 + (uVar6 >> 5) * 4) & uVar11) != 0) &&
       ((*(uint *)(param_3 + 8 + (uVar6 >> 5) * 4) & uVar11) == 0)) {
      iVar15 = iVar15 + 1;
    }
    uVar12 = 0x80000000 >> (bVar5 + 1 & 0x1f);
    uVar11 = uVar6 + 1 >> 5;
    if (((*(uint *)(param_3 + 0x10 + uVar11 * 4) & uVar12) != 0) &&
       ((*(uint *)(param_3 + 8 + uVar11 * 4) & uVar12) == 0)) {
      iVar15 = iVar15 + 1;
    }
    uVar12 = 0x80000000 >> (bVar5 + 2 & 0x1f);
    uVar11 = uVar6 + 2 >> 5;
    if (((*(uint *)(param_3 + 0x10 + uVar11 * 4) & uVar12) != 0) &&
       ((*(uint *)(param_3 + 8 + uVar11 * 4) & uVar12) == 0)) {
      iVar15 = iVar15 + 1;
    }
    uVar12 = 0x80000000 >> (bVar5 + 3 & 0x1f);
    uVar11 = uVar6 + 3 >> 5;
    if (((*(uint *)(param_3 + 0x10 + uVar11 * 4) & uVar12) != 0) &&
       ((*(uint *)(param_3 + 8 + uVar11 * 4) & uVar12) == 0)) {
      iVar15 = iVar15 + 1;
    }
    uVar6 = uVar6 + 6;
    local_25c = local_25c + -1;
  } while (local_25c != 0);
  if (iVar15 == 1) {
    return;
  }
  uVar6 = *(uint *)(param_3 + 0x10);
  if (((int)uVar6 < 0) && (*(int *)(param_3 + 8) < 0)) {
    return;
  }
  if (((((uVar6 & 0x40000000) != 0) && ((*(uint *)(param_3 + 8) >> 0x1e & 1) != 0)) &&
      ((int)uVar6 < 0)) && ((int)*(uint *)(param_3 + 8) < 0)) {
    return;
  }
  local_210 = *(float *)(param_1 + 0x1bd0) - *(float *)(param_1 + 0x40);
  local_20c = *(float *)(param_1 + 0x1bd4) - *(float *)(param_1 + 0x44);
  local_208 = *(float *)(param_1 + 0x1bd8) - *(float *)(param_1 + 0x48);
  local_204 = *(float *)(param_1 + 0x1bdc) - *(float *)(param_1 + 0x4c);
  fVar2 = local_208 * local_208 + local_210 * local_210 + local_20c * local_20c;
  if (fVar2 < 0.0 == (fVar2 == 0.0)) {
    FUN_00ddf460(&local_210,&local_210);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    local_210 = 0.0;
    local_20c = 1.0;
    local_208 = 0.0;
  }
  pfVar7 = (float *)FUN_00a925a0(local_70);
  if (ABS(pfVar7[2] * local_208 + local_210 * *pfVar7 + pfVar7[1] * local_20c) < 0.25) {
    FUN_00a925a0(local_70);
  }
  local_1f0 = 0.0;
  bVar3 = false;
  local_1f4 = 0.0;
  local_1e8 = 0.0;
  local_1b4 = 0;
  local_1b8 = 0;
  local_23c[0] = 0.0;
  local_23c[1] = 0.0;
  local_1bc = 0;
  local_1e4 = 0;
  iVar15 = FUN_00a12210(0xffffffff);
  local_220[0] = 0;
  iVar15 = iVar15 + 0x10;
  local_220[1] = 0;
  piVar18 = local_220;
  local_220[2] = 0x3f800000;
  local_230 = 0x3f800000;
  local_1dc = 0x3f800000;
  local_22c = 0.0;
  local_228 = 0;
  local_1e0 = 0;
  local_1d8 = 0;
  piVar8 = piVar18;
  D3DXVec3TransformNormal(piVar18,piVar18,iVar15);
  D3DXVec3TransformNormal(local_23c,local_23c,iVar15);
  D3DXVec3TransformNormal(auStack_1f8,auStack_1f8,iVar15);
  local_1f4 = *(float *)(param_1 + 0x1bd0) - *(float *)(param_1 + 0x40);
  local_1f0 = *(float *)(param_1 + 0x1bd4) - *(float *)(param_1 + 0x44);
  fStack_1ec = *(float *)(param_1 + 0x1bd8) - *(float *)(param_1 + 0x48);
  local_1e8 = *(float *)(param_1 + 0x1bdc) - *(float *)(param_1 + 0x4c);
  fVar2 = fStack_1ec * fStack_1ec + local_1f4 * local_1f4 + local_1f0 * local_1f0;
  if (fVar2 < 0.0 == (fVar2 == 0.0)) {
    FUN_00ddf460(&local_1f4,&local_1f4);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    local_1f4 = 0.0;
    local_1f0 = 1.0;
    fStack_1ec = 0.0;
  }
  if (0.25 < local_1f4 * 0.0 + local_1f0 * fStack_240 + fStack_1ec * local_23c[0]) {
    local_220[3] = 1;
  }
  fStack_12c = local_23c[0] * -1.0;
  if (0.25 < fStack_12c * fStack_1ec + local_1f4 * -0.0 + fStack_240 * -1.0 * local_1f0) {
    unaff_ESI = 1;
  }
  uStack_128 = 0x80000000;
  local_210 = -0.0;
  if (0.25 < fStack_1ec * -0.0 + local_1f4 * -0.0 + local_1f0 * -0.0) {
    unaff_EDI = 1;
  }
  if (0.25 < fStack_1ec * 0.0 + local_1f0 * 0.0 + local_1f4 * 0.0) {
    iStack_270 = 1;
  }
  if (0.25 < *(float *)(param_1 + 0x1be0) * -0.0 + *(float *)(param_1 + 0x1be4) * fStack_240 * -1.0
             + *(float *)(param_1 + 0x1be8) * fStack_12c) {
    local_220[2] = 1;
  }
  if (0.25 < *(float *)(param_1 + 0x1be8) * local_23c[0] +
             *(float *)(param_1 + 0x1be0) * 0.0 + *(float *)(param_1 + 0x1be4) * fStack_240) {
    local_20c = 1.4013e-45;
  }
  if (0.25 < *(float *)(param_1 + 0x1be8) * 0.0 +
             *(float *)(param_1 + 0x1be0) * 0.0 + *(float *)(param_1 + 0x1be4) * 0.0) {
    local_1d8 = 1;
  }
  if (0.25 < *(float *)(param_1 + 0x1be0) * -0.0 + *(float *)(param_1 + 0x1be4) * -0.0 +
             *(float *)(param_1 + 0x1be8) * -0.0) {
    local_1dc = 1;
  }
  if (0.5 < *(float *)(param_1 + 0x1be4) * fStack_200 * -1.0 +
            *(float *)(param_1 + 0x1be0) * local_204 * -1.0 +
            *(float *)(param_1 + 0x1be8) * fStack_1fc * -1.0) {
    iStack_26c = 1;
  }
  if (0.5 < fStack_1fc * *(float *)(param_1 + 0x1be8) +
            local_204 * *(float *)(param_1 + 0x1be0) + fStack_200 * *(float *)(param_1 + 0x1be4)) {
    iStack_260 = 1;
  }
  iVar15 = FUN_0077fa30(&fStack_144,param_2);
  local_268 = param_1;
  if (iVar15 != 0) {
    local_268 = (uint)(local_23c[0] * fStack_13c + fStack_240 * fStack_140 + fStack_144 * 0.0 < -0.4
                      );
    fVar2 = fStack_144 * -1.0;
    fVar4 = fStack_140 * -1.0;
    local_22c = fStack_13c * -1.0;
    bVar3 = local_22c * local_23c[0] + fVar4 * fStack_240 + fVar2 * 0.0 < -0.4;
    local_1e0 = (uint)(local_22c * 0.0 + fVar4 * 0.0 + fVar2 * 0.0 < -0.4);
    local_208 = (float)(uint)(fStack_13c * 0.0 + fStack_140 * 0.0 + fStack_144 * 0.0 < -0.4);
    piVar8 = (int *)(uint)(fStack_140 * fStack_200 + local_204 * fStack_144 +
                           fStack_13c * fStack_1fc < -0.4);
    uStack_274 = (uint)(fVar4 * fStack_200 + local_204 * fVar2 + local_22c * fStack_1fc < -0.4);
  }
  iVar15 = FUN_00a12210(0);
  fVar4 = SQRT(*(float *)(iVar15 + 0x38) * *(float *)(iVar15 + 0x38) +
               *(float *)(iVar15 + 0x34) * *(float *)(iVar15 + 0x34) +
               *(float *)(iVar15 + 0x30) * *(float *)(iVar15 + 0x30));
  fVar2 = *(float *)(iVar15 + 0x28);
  local_210 = *(float *)(iVar15 + 0x38) / fVar4;
  FUN_00ddbaa0(-(*(float *)(iVar15 + 0x18) / fVar4));
  fVar17 = (float10)fpatan((float10)(fVar2 / fVar4),(float10)local_210);
  if ((fVar17 < (float10)-0.4537856) || (iVar15 = FUN_00a8cbe0(0x50018), iVar15 != 0)) {
    unaff_EBX = 1;
  }
  iVar14 = 0;
  iVar15 = 6;
  uVar6 = 2;
  do {
    bVar5 = (byte)uVar6;
    uVar12 = 0x80000000 >> (bVar5 - 2 & 0x1f);
    uVar11 = uVar6 - 2 >> 5;
    uVar16 = *(uint *)(param_3 + 0x10 + uVar11 * 4) & uVar12;
    if (uVar16 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = (uint)((*(uint *)(param_3 + uVar11 * 4) & uVar12) == 0);
    }
    *(uint *)((int)auStack_dc + iVar14) = uVar9;
    if (uVar16 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = (uint)((*(uint *)(param_3 + 8 + uVar11 * 4) & uVar12) != 0);
    }
    *(uint *)((int)auStack_124 + iVar14) = uVar11;
    if ((uVar9 == 0) && (uVar11 == 0)) {
      uVar13 = 1;
    }
    else {
      uVar13 = 0;
    }
    *(undefined4 *)((int)aiStack_18c + iVar14) = uVar13;
    if ((uVar9 == 0) && (uVar11 == 0)) {
      uVar13 = 0;
    }
    else {
      uVar13 = 1;
    }
    *(undefined4 *)((int)aiStack_1d4 + iVar14) = uVar13;
    uVar12 = 0x80000000 >> (bVar5 - 1 & 0x1f);
    uVar11 = uVar6 - 1 >> 5;
    uVar16 = *(uint *)(param_3 + 0x10 + uVar11 * 4) & uVar12;
    if (uVar16 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = (uint)((*(uint *)(param_3 + uVar11 * 4) & uVar12) == 0);
    }
    *(uint *)((int)auStack_dc + iVar14 + 4) = uVar9;
    if (uVar16 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = (uint)((*(uint *)(param_3 + 8 + uVar11 * 4) & uVar12) != 0);
    }
    *(uint *)((int)auStack_124 + iVar14 + 4) = uVar11;
    if ((uVar9 == 0) && (uVar11 == 0)) {
      uVar13 = 1;
    }
    else {
      uVar13 = 0;
    }
    *(undefined4 *)((int)aiStack_18c + iVar14 + 4) = uVar13;
    if ((uVar9 == 0) && (uVar11 == 0)) {
      uVar13 = 0;
    }
    else {
      uVar13 = 1;
    }
    *(undefined4 *)((int)aiStack_1d4 + iVar14 + 4) = uVar13;
    uVar12 = 0x80000000 >> (bVar5 & 0x1f);
    uVar11 = uVar6 >> 5;
    uVar16 = *(uint *)(param_3 + 0x10 + uVar11 * 4) & uVar12;
    if (uVar16 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = (uint)((*(uint *)(param_3 + uVar11 * 4) & uVar12) == 0);
    }
    *(uint *)((int)auStack_dc + iVar14 + 8) = uVar9;
    if (uVar16 == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = (uint)((*(uint *)(param_3 + 8 + uVar11 * 4) & uVar12) != 0);
    }
    *(uint *)((int)auStack_124 + iVar14 + 8) = uVar11;
    if ((uVar9 == 0) && (uVar11 == 0)) {
      uVar13 = 1;
    }
    else {
      uVar13 = 0;
    }
    *(undefined4 *)((int)aiStack_18c + iVar14 + 8) = uVar13;
    if ((uVar9 == 0) && (uVar11 == 0)) {
      uVar13 = 0;
    }
    else {
      uVar13 = 1;
    }
    *(undefined4 *)((int)aiStack_1d4 + iVar14 + 8) = uVar13;
    uVar6 = uVar6 + 3;
    iVar14 = iVar14 + 0xc;
    iVar15 = iVar15 + -1;
  } while (iVar15 != 0);
  iVar15 = aiStack_1d4[3] + iStack_190 + iStack_194 + iStack_198;
  if (((aiStack_18c[3] != 0) && (aiStack_18c[5] != 0)) && (aiStack_18c[4] != 0)) {
    param_2[1] = 1;
  }
  if (piVar18[0x6fd] == 0) {
    param_2[1] = 0;
  }
  if ((param_2[3] == 0) &&
     (((local_1b8 != 0 || (local_1b4 != 0)) || ((iStack_1a8 != 0 || (iStack_1a4 != 0)))))) {
    param_2[3] = 1;
  }
  if (piVar18[0xcc] == 0) {
    iVar14 = -1;
  }
  else {
    iVar14 = *(int *)(piVar18[0xcc] + 0xcc);
  }
  piVar19 = piVar18;
  iVar20 = iVar14;
  iVar10 = FUN_00ac89d0();
  if (((iVar10 != 0) && (*(int *)(iVar10 + 0x330) != 0)) &&
     (iVar10 = *(int *)(*(int *)(iVar10 + 0x330) + 0xcc), iVar14 < iVar10)) {
    iVar20 = iVar10;
  }
  if (piVar18[0x700] != 0) {
    return;
  }
  fVar2 = 0.0;
  iVar10 = 0;
  iVar14 = 2;
  fVar4 = fVar2;
  do {
    iVar1 = iVar14 + -2;
    if ((iVar1 != 3) && ((iVar1 < 0xf || (0x11 < iVar1)))) {
      fVar2 = fVar2 + (float)*(int *)((int)auStack_dc + iVar10);
      fVar4 = (float)*(int *)((int)auStack_124 + iVar10) + fVar4;
    }
    iVar1 = iVar14 + -1;
    if ((iVar1 != 3) && ((iVar1 < 0xf || (0x11 < iVar1)))) {
      fVar2 = fVar2 + (float)*(int *)((int)auStack_dc + iVar10 + 4);
      fVar4 = (float)*(int *)((int)auStack_124 + iVar10 + 4) + fVar4;
    }
    if ((iVar14 != 3) && ((iVar14 < 0xf || (0x11 < iVar14)))) {
      fVar2 = fVar2 + (float)*(int *)((int)auStack_dc + iVar10 + 8);
      fVar4 = (float)*(int *)((int)auStack_124 + iVar10 + 8) + fVar4;
    }
    iVar1 = iVar14 + 1;
    if ((iVar1 != 3) && ((iVar1 < 0xf || (0x11 < iVar1)))) {
      fVar2 = fVar2 + (float)*(int *)((int)auStack_dc + iVar10 + 0xc);
      fVar4 = (float)*(int *)((int)auStack_124 + iVar10 + 0xc) + fVar4;
    }
    iVar1 = iVar14 + 2;
    if ((iVar1 != 3) && ((iVar1 < 0xf || (0x11 < iVar1)))) {
      fVar2 = fVar2 + (float)*(int *)((int)auStack_dc + iVar10 + 0x10);
      fVar4 = (float)*(int *)((int)auStack_124 + iVar10 + 0x10) + fVar4;
    }
    iVar1 = iVar14 + 3;
    if ((iVar1 != 3) && ((iVar1 < 0xf || (0x11 < iVar1)))) {
      fVar2 = fVar2 + (float)*(int *)((int)auStack_dc + iVar10 + 0x14);
      fVar4 = (float)*(int *)((int)auStack_124 + iVar10 + 0x14) + fVar4;
    }
    iVar1 = iVar14 + 4;
    if ((iVar1 != 3) && ((iVar1 < 0xf || (0x11 < iVar1)))) {
      fVar2 = fVar2 + (float)*(int *)((int)auStack_dc + iVar10 + 0x18);
      fVar4 = (float)*(int *)((int)auStack_124 + iVar10 + 0x18) + fVar4;
    }
    iVar1 = iVar14 + 5;
    if ((iVar1 != 3) && ((iVar1 < 0xf || (0x11 < iVar1)))) {
      fVar2 = fVar2 + (float)*(int *)((int)auStack_dc + iVar10 + 0x1c);
      fVar4 = (float)*(int *)((int)auStack_124 + iVar10 + 0x1c) + fVar4;
    }
    iVar1 = iVar14 + 6;
    if ((iVar1 != 3) && ((iVar1 < 0xf || (0x11 < iVar1)))) {
      fVar2 = fVar2 + (float)*(int *)((int)auStack_dc + iVar10 + 0x20);
      fVar4 = (float)*(int *)((int)auStack_124 + iVar10 + 0x20) + fVar4;
    }
    iVar1 = iVar14 + 7;
    iVar10 = iVar10 + 0x24;
    iVar14 = iVar14 + 9;
  } while (iVar1 < 0x12);
  if (fVar2 == 14.0) {
    return;
  }
  if (12.599999 < fVar4) {
    return;
  }
  if ((((piVar18[0x6fe] == 0) && (piVar18[0x6ff] == 0)) &&
      (iVar14 = FUN_00a8cbe0(0x80007), iVar14 == 0)) &&
     ((iVar14 = FUN_00a8cbe0(0x80009), iVar14 == 0 && (iVar14 = FUN_00a8cbe0(0x60017), iVar14 == 0))
     )) {
    if ((piVar18[0x6ff] == 0) &&
       (((iVar14 = (**(code **)(*piVar18 + 0x1d8))(), iVar14 != 0 ||
         (iVar14 = (**(code **)(*piVar18 + 800))(0x3d888889), iVar14 == 0)) ||
        (iVar14 = FUN_008e2740(), iVar14 == 0)))) {
      if ((auStack_124[0] == 0) && (aiStack_1d4[1] != 0)) {
        *param_2 = 0x1a;
        *(int *)(param_3 + 0x18) = piVar18[0x12d];
        return;
      }
      if (aiStack_18c[1] != 0) {
        if ((auStack_124[0] == 0) &&
           ((((local_1bc != 0 || (local_1b8 != 0)) || (local_1b4 != 0)) ||
            ((iStack_1a8 != 0 || (iStack_1a4 != 0)))))) {
          *param_2 = 0x1b;
          *(int *)(param_3 + 0x18) = piVar18[0x12d];
          return;
        }
        if (((aiStack_18c[0] != 0) && (iStack_174 != 0)) &&
           ((iStack_170 != 0 && (((iStack_16c != 0 && (iStack_160 != 0)) && (iStack_15c != 0)))))) {
          if (iStack_1b0 == 0) {
            if (iStack_1a0 == 0) goto LAB_007875cd;
          }
          else {
            piVar18[0x702] = 1;
            if (iStack_1a0 == 0) goto LAB_007875fb;
          }
          piVar18[0x703] = 1;
LAB_007875fb:
          *param_2 = 0x1c;
          *(int *)(param_3 + 0x18) = piVar18[0x12d];
          return;
        }
      }
LAB_007875cd:
      if (2 < iVar20) {
        return;
      }
    }
    else {
      if ((local_220[3] != 0) || (unaff_ESI != 0)) {
        if (((iStack_26c != 0) || (iStack_260 != 0)) && ((2 < iVar15 && (aiStack_1d4[0] != 0)))) {
          if (local_1e0 != 0) {
            *param_2 = (-(uint)(unaff_EBX != 0) & 6) + 10;
          }
          if (local_208 != 0.0) {
            *param_2 = (-(uint)(unaff_EBX != 0) & 6) + 0xb;
          }
          if (*param_2 != 0) {
            *(int *)(param_3 + 0x18) = piVar19[0x12d];
            return;
          }
        }
        if ((((local_220[3] != 0) || (unaff_ESI != 0)) && ((local_1d8 != 0 || (local_1dc != 0)))) &&
           (aiStack_1d4[0] != 0)) {
          if (((piVar8 != (int *)0x0) && (local_1b8 != 0)) && (iStack_1a8 != 0)) {
            if (local_220[3] != 0) {
              *param_2 = (-(uint)(unaff_EBX != 0) & 6) + 9;
            }
            if (unaff_ESI != 0) {
              *param_2 = (-(uint)(unaff_EBX != 0) & 6) + 8;
            }
          }
          if (((uStack_274 != 0) && (auStack_124[7] == 0)) && (auStack_124[0xb] == 0)) {
            if (local_220[3] != 0) {
              *param_2 = (-(uint)(unaff_EBX != 0) & 6) + 0xd;
            }
            if (unaff_ESI != 0) {
              *param_2 = (-(uint)(unaff_EBX != 0) & 6) + 0xc;
            }
          }
          if (*param_2 != 0) goto LAB_0078775d;
        }
      }
      if ((unaff_EDI != 0) || (iStack_270 != 0)) {
        if ((aiStack_1d4[0] != 0) && (iStack_1ac != 0)) {
          if (unaff_EBX == 0) {
            if ((iStack_26c != 0) || (iStack_260 != 0)) {
              if (local_268 != 0) {
                *param_2 = 8;
              }
              if (bVar3) {
                *param_2 = 0xd;
                *(int *)(param_3 + 0x18) = piVar19[0x12d];
                return;
              }
            }
          }
          else {
            if (local_220[2] != 0) {
              if (piVar8 != (int *)0x0) {
                *param_2 = 0xf;
              }
              if (uStack_274 != 0) {
                *param_2 = 0x13;
              }
            }
            if (local_20c != 0.0) {
              if (piVar8 != (int *)0x0) {
                *param_2 = 0xe;
              }
              if (uStack_274 != 0) {
                *param_2 = 0x12;
                *(int *)(param_3 + 0x18) = piVar19[0x12d];
                return;
              }
            }
          }
          if (*param_2 != 0) goto LAB_0078794f;
        }
        if (((unaff_EDI != 0) || (iStack_270 != 0)) && (aiStack_1d4[0] != 0)) {
          if (unaff_EBX == 0) {
            if (local_220[2] != 0) {
              if ((piVar8 != (int *)0x0) && (iStack_1ac != 0)) {
                *param_2 = 9;
              }
              if ((uStack_274 != 0) && (auStack_124[10] == 0)) {
                *param_2 = 0xd;
              }
            }
            if (local_20c != 0.0) {
              if ((piVar8 != (int *)0x0) && (iStack_1ac != 0)) {
                *param_2 = 8;
              }
              if ((uStack_274 != 0) && (auStack_124[10] == 0)) {
                *param_2 = 0xc;
                *(int *)(param_3 + 0x18) = piVar19[0x12d];
                return;
              }
            }
          }
          else if ((iStack_26c != 0) || (iStack_260 != 0)) {
            if (local_268 != 0) {
              *param_2 = 0xe;
            }
            if (bVar3) {
              *param_2 = 0xf;
              *(int *)(param_3 + 0x18) = piVar19[0x12d];
              return;
            }
          }
          if (*param_2 != 0) {
LAB_0078794f:
            *(int *)(param_3 + 0x18) = piVar19[0x12d];
            return;
          }
        }
      }
      if ((((aiStack_18c[1] != 0) && (param_2[1] == 0)) && (local_1b8 != 0)) && (iStack_1a8 != 0)) {
LAB_007879f8:
        *param_2 = 0x21;
        *(int *)(param_3 + 0x18) = piVar19[0x12d];
        return;
      }
      if ((aiStack_1d4[1] != 0) && (aiStack_18c[0] != 0)) {
        if ((iStack_170 != 0) && (iStack_16c != 0)) {
          if ((iStack_160 != 0) && (iStack_15c != 0)) {
            *param_2 = (-(uint)(unaff_EBX != 0) & 0xfffffffb) + 0x18;
            *(int *)(param_3 + 0x18) = piVar19[0x12d];
            return;
          }
          param_2[2] = 1;
        }
        goto LAB_007879f8;
      }
      if (5 < iVar20) {
        *param_2 = (-(uint)(piVar19[0x6fe] != 0) & 0xffffffee) + 0x18;
        *(int *)(param_3 + 0x18) = piVar19[0x12d];
        return;
      }
      if ((((iStack_19c != 0) && (aiStack_18c[0] != 0)) && (aiStack_18c[1] != 0)) &&
         (((iStack_170 != 0 && (iStack_16c != 0)) && ((iStack_160 != 0 && (iStack_15c != 0)))))) {
        if (local_220[3] != 0) {
          *param_2 = 0x1d;
        }
        if (unaff_ESI != 0) {
          *param_2 = 0x1e;
          *(int *)(param_3 + 0x18) = piVar19[0x12d];
          return;
        }
        if (*param_2 != 0) {
          *(int *)(param_3 + 0x18) = piVar19[0x12d];
          return;
        }
      }
      if (((local_1b8 != 0) || (local_1b4 != 0)) && ((aiStack_18c[0] != 0 && (auStack_124[1] == 0)))
         ) {
        *param_2 = (-(uint)(param_2[1] != 0) & 0xffffffe0) + 0x21;
        *(int *)(param_3 + 0x18) = piVar19[0x12d];
        return;
      }
      if ((((iStack_1a8 != 0) || (iStack_1a4 != 0)) && (aiStack_18c[0] != 0)) &&
         (auStack_124[1] == 0)) {
        *param_2 = (-(uint)(param_2[1] != 0) & 0xffffffe0) + 0x21;
        param_2[2] = 1;
        *(int *)(param_3 + 0x18) = piVar19[0x12d];
        return;
      }
      if (aiStack_1d4[2] == 0) {
LAB_00787bc7:
        if (((((aiStack_18c[0] != 0) && (aiStack_18c[1] != 0)) && (iStack_170 != 0)) &&
            ((iStack_16c != 0 && (iStack_160 != 0)))) && (iStack_15c != 0)) {
          if (iStack_1b0 != 0) {
            *param_2 = 0x20;
          }
          if (iStack_1a0 != 0) {
            *param_2 = 0x20;
            param_2[2] = 1;
          }
          if (*param_2 != 0) {
LAB_0078775d:
            *(int *)(param_3 + 0x18) = piVar19[0x12d];
            return;
          }
        }
      }
      else if (aiStack_18c[0] != 0) {
        if (((aiStack_18c[1] != 0) && (iStack_170 != 0)) &&
           ((iStack_16c != 0 && ((iStack_160 != 0 && (iStack_15c != 0)))))) {
          *param_2 = 0x1f;
          *(int *)(param_3 + 0x18) = piVar19[0x12d];
          return;
        }
        goto LAB_00787bc7;
      }
      if (((aiStack_1d4[4] != 0) && (aiStack_1d4[5] != 0)) && (aiStack_18c[3] != 0)) {
        if ((iStack_170 != 0) && (iStack_16c != 0)) {
          *param_2 = 0x18;
          *(int *)(param_3 + 0x18) = piVar19[0x12d];
          return;
        }
        *param_2 = 0x21;
        *(int *)(param_3 + 0x18) = piVar19[0x12d];
        return;
      }
      if (local_1bc != 0) {
        if (aiStack_18c[0] != 0) {
          *param_2 = 0x1d;
          *(int *)(param_3 + 0x18) = piVar19[0x12d];
          return;
        }
        goto LAB_00787e78;
      }
    }
  }
  else {
    if (aiStack_1d4[0] != 0) {
      if (iStack_1ac != 0) {
        if (local_268 != 0) {
          *param_2 = 0x14;
        }
        if (bVar3) {
          if (iStack_150 == 0) {
            return;
          }
          *param_2 = 0x15;
          *(int *)(param_3 + 0x18) = piVar18[0x12d];
          return;
        }
        if (*param_2 != 0) goto LAB_00787dd7;
      }
      if ((iStack_198 != 0) && (iStack_194 != 0)) {
        if (piVar8 != (int *)0x0) {
          if (iStack_270 != 0) {
            *param_2 = 0x16;
          }
          if (unaff_EDI != 0) {
            *param_2 = 0x17;
          }
        }
        if (uStack_274 != 0) {
          *param_2 = 6;
          *(int *)(param_3 + 0x18) = piVar18[0x12d];
          return;
        }
        if (*param_2 != 0) goto LAB_00787e0a;
      }
    }
    if ((aiStack_1d4[1] != 0) && (auStack_124[0] == 0)) {
LAB_00787d96:
      *param_2 = 6;
      *(int *)(param_3 + 0x18) = piVar18[0x12d];
      return;
    }
    if ((aiStack_1d4[3] != 0) &&
       (((auStack_124[0] == 0 && (auStack_124[7] == 0)) && (auStack_124[0xb] == 0)))) {
      *param_2 = 6;
LAB_00787dd7:
      *(int *)(param_3 + 0x18) = piVar18[0x12d];
      return;
    }
    if (((aiStack_18c[1] != 0) && (auStack_124[0] == 0)) && (auStack_124[3] == 0)) {
      *param_2 = 3;
LAB_00787e0a:
      *(int *)(param_3 + 0x18) = piVar18[0x12d];
      return;
    }
    if (5 < iVar20) goto LAB_00787d96;
  }
  if (((aiStack_18c[0] != 0) && (aiStack_18c[1] != 0)) &&
     ((aiStack_18c[3] != 0 && ((iStack_160 != 0 && (iStack_170 != 0)))))) {
    *param_2 = 0x1f;
    *(int *)(param_3 + 0x18) = piVar19[0x12d];
    return;
  }
LAB_00787e78:
  *(undefined4 *)(param_3 + 0x18) = 0x42000;
  return;
}

// 00787EA0  FUN_00787ea0  size=3140  [callgraph]
/* WARNING: Type propagation algorithm not settling */

void __thiscall FUN_00787ea0(int param_1,int *param_2,int param_3)

{
  int iVar1;
  float fVar2;
  byte bVar3;
  uint uVar4;
  float *pfVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  float10 fVar14;
  float fVar15;
  float fVar16;
  uint *puVar17;
  uint *puVar18;
  uint *puVar19;
  float fStack_204;
  float fStack_200;
  float local_1fc;
  float local_1f8;
  float local_1f4 [7];
  int iStack_1d8;
  int iStack_1d4;
  int iStack_1d0;
  int iStack_1c8;
  int iStack_1c4;
  int iStack_1c0;
  uint auStack_1ac [15];
  uint uStack_170;
  uint uStack_16c;
  uint uStack_168;
  undefined1 auStack_14c [4];
  undefined1 auStack_148 [8];
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  uint auStack_134 [15];
  uint uStack_f8;
  uint uStack_f4;
  uint uStack_f0;
  int aiStack_ec [7];
  int iStack_d0;
  int iStack_cc;
  int iStack_c0;
  int iStack_bc;
  undefined1 auStack_94 [20];
  undefined1 local_80 [124];
  
  iVar12 = 0;
  *(undefined4 *)(param_3 + 0x18) = 0x42000;
  if (*(int *)(param_1 + 0xa50) == 0) {
    return;
  }
  *param_2 = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  uVar4 = 2;
  local_1fc = 4.2039e-45;
  do {
    bVar3 = (byte)uVar4;
    uVar8 = 0x80000000 >> (bVar3 - 2 & 0x1f);
    uVar7 = uVar4 - 2 >> 5;
    if (((*(uint *)(param_3 + 0x10 + uVar7 * 4) & uVar8) != 0) &&
       ((*(uint *)(param_3 + 8 + uVar7 * 4) & uVar8) == 0)) {
      iVar12 = iVar12 + 1;
    }
    uVar8 = 0x80000000 >> (bVar3 - 1 & 0x1f);
    uVar7 = uVar4 - 1 >> 5;
    if (((*(uint *)(param_3 + 0x10 + uVar7 * 4) & uVar8) != 0) &&
       ((*(uint *)(param_3 + 8 + uVar7 * 4) & uVar8) == 0)) {
      iVar12 = iVar12 + 1;
    }
    uVar7 = 0x80000000 >> (bVar3 & 0x1f);
    if (((*(uint *)(param_3 + 0x10 + (uVar4 >> 5) * 4) & uVar7) != 0) &&
       ((*(uint *)(param_3 + 8 + (uVar4 >> 5) * 4) & uVar7) == 0)) {
      iVar12 = iVar12 + 1;
    }
    uVar8 = 0x80000000 >> (bVar3 + 1 & 0x1f);
    uVar7 = uVar4 + 1 >> 5;
    if (((*(uint *)(param_3 + 0x10 + uVar7 * 4) & uVar8) != 0) &&
       ((*(uint *)(param_3 + 8 + uVar7 * 4) & uVar8) == 0)) {
      iVar12 = iVar12 + 1;
    }
    uVar8 = 0x80000000 >> (bVar3 + 2 & 0x1f);
    uVar7 = uVar4 + 2 >> 5;
    if (((*(uint *)(param_3 + 0x10 + uVar7 * 4) & uVar8) != 0) &&
       ((*(uint *)(param_3 + 8 + uVar7 * 4) & uVar8) == 0)) {
      iVar12 = iVar12 + 1;
    }
    uVar8 = 0x80000000 >> (bVar3 + 3 & 0x1f);
    uVar7 = uVar4 + 3 >> 5;
    if (((*(uint *)(param_3 + 0x10 + uVar7 * 4) & uVar8) != 0) &&
       ((*(uint *)(param_3 + 8 + uVar7 * 4) & uVar8) == 0)) {
      iVar12 = iVar12 + 1;
    }
    uVar4 = uVar4 + 6;
    local_1fc = (float)((int)local_1fc + -1);
  } while (local_1fc != 0.0);
  if (iVar12 == 1) {
    return;
  }
  uVar4 = *(uint *)(param_3 + 0x10);
  if (((int)uVar4 < 0) && (*(int *)(param_3 + 8) < 0)) {
    return;
  }
  local_1f8 = (float)param_1;
  if ((((uVar4 & 0x40000000) != 0) && ((*(uint *)(param_3 + 8) >> 0x1e & 1) != 0)) &&
     (iVar12 = FUN_0043f860(0), iVar12 != 0)) {
    return;
  }
  fVar2 = local_1f8;
  if (((uVar4 & 0x10000000) != 0) && ((*(uint *)(param_3 + 8) >> 0x1c & 1) != 0)) {
    return;
  }
  local_1f4[1] = *(float *)((int)local_1f8 + 0x1bd0) - *(float *)((int)local_1f8 + 0x40);
  local_1f4[2] = *(float *)((int)local_1f8 + 0x1bd4) - *(float *)((int)local_1f8 + 0x44);
  local_1f4[3] = *(float *)((int)local_1f8 + 0x1bd8) - *(float *)((int)local_1f8 + 0x48);
  local_1f4[4] = *(float *)((int)local_1f8 + 0x1bdc) - *(float *)((int)local_1f8 + 0x4c);
  fVar16 = local_1f4[3] * local_1f4[3] + local_1f4[1] * local_1f4[1] + local_1f4[2] * local_1f4[2];
  if (fVar16 < 0.0 == (fVar16 == 0.0)) {
    FUN_00ddf460(local_1f4 + 1,local_1f4 + 1);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    local_1f4[1] = 0.0;
    local_1f4[2] = 1.0;
    local_1f4[3] = 0.0;
  }
  pfVar5 = (float *)FUN_00a925a0(local_80);
  if (ABS(pfVar5[2] * local_1f4[3] + *pfVar5 * local_1f4[1] + pfVar5[1] * local_1f4[2]) < 0.25) {
    FUN_00a925a0(local_80);
  }
  local_1f4[0] = 0.0;
  iVar12 = FUN_00a12210(0xffffffff);
  auStack_134[5] = 0;
  iVar12 = iVar12 + 0x10;
  auStack_134[6] = 0;
  puVar17 = auStack_134 + 5;
  auStack_134[7] = 0x3f800000;
  local_140 = 0x3f800000;
  auStack_134[2] = 0x3f800000;
  local_13c = 0;
  local_138 = 0;
  auStack_134[1] = 0;
  auStack_134[3] = 0;
  puVar19 = puVar17;
  D3DXVec3TransformNormal(puVar17,puVar17,iVar12);
  D3DXVec3TransformNormal(auStack_14c,auStack_14c,iVar12);
  D3DXVec3TransformNormal(auStack_148,auStack_148,iVar12);
  fStack_204 = *(float *)((int)fVar2 + 0x1bd0) - *(float *)((int)fVar2 + 0x40);
  fStack_200 = *(float *)((int)fVar2 + 0x1bd4) - *(float *)((int)fVar2 + 0x44);
  local_1fc = *(float *)((int)fVar2 + 0x1bd8) - *(float *)((int)fVar2 + 0x48);
  local_1f8 = *(float *)((int)fVar2 + 0x1bdc) - *(float *)((int)fVar2 + 0x4c);
  fVar2 = local_1fc * local_1fc + fStack_204 * fStack_204 + fStack_200 * fStack_200;
  if (fVar2 < 0.0 == (fVar2 == 0.0)) {
    FUN_00ddf460(&fStack_204,&fStack_204);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    fStack_204 = 0.0;
    fStack_200 = 1.0;
    local_1fc = 0.0;
  }
  FUN_0077fa30(auStack_94,param_2);
  iVar12 = FUN_00a12210(0);
  fVar2 = SQRT(*(float *)(iVar12 + 0x38) * *(float *)(iVar12 + 0x38) +
               *(float *)(iVar12 + 0x34) * *(float *)(iVar12 + 0x34) +
               *(float *)(iVar12 + 0x30) * *(float *)(iVar12 + 0x30));
  fVar16 = *(float *)(iVar12 + 0x28) / fVar2;
  fVar15 = *(float *)(iVar12 + 0x38) / fVar2;
  FUN_00ddbaa0(-(*(float *)(iVar12 + 0x18) / fVar2));
  fVar14 = (float10)fpatan((float10)fVar16,(float10)fVar15);
  if ((fVar14 < (float10)-0.4537856) || (iVar12 = FUN_00a8cbe0(0x50018), iVar12 != 0)) {
    puVar19 = (uint *)0x1;
  }
  uVar4 = 2;
  iVar11 = 0;
  iVar12 = 6;
  do {
    bVar3 = (byte)uVar4;
    uVar8 = 0x80000000 >> (bVar3 - 2 & 0x1f);
    uVar7 = uVar4 - 2 >> 5;
    uVar13 = *(uint *)(param_3 + 0x10 + uVar7 * 4) & uVar8;
    if (uVar13 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = (uint)((*(uint *)(param_3 + uVar7 * 4) & uVar8) == 0);
    }
    *(uint *)((int)auStack_134 + iVar11) = uVar6;
    if (uVar13 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = (uint)((*(uint *)(param_3 + 8 + uVar7 * 4) & uVar8) != 0);
    }
    *(uint *)((int)auStack_1ac + iVar11) = uVar7;
    if ((uVar6 == 0) && (uVar7 == 0)) {
      uVar9 = 1;
    }
    else {
      uVar9 = 0;
    }
    *(undefined4 *)((int)aiStack_ec + iVar11) = uVar9;
    if ((uVar6 == 0) && (uVar7 == 0)) {
      uVar9 = 0;
    }
    else {
      uVar9 = 1;
    }
    *(undefined4 *)((int)local_1f4 + iVar11) = uVar9;
    uVar8 = 0x80000000 >> (bVar3 - 1 & 0x1f);
    uVar7 = uVar4 - 1 >> 5;
    uVar13 = *(uint *)(param_3 + 0x10 + uVar7 * 4) & uVar8;
    if (uVar13 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = (uint)((*(uint *)(param_3 + uVar7 * 4) & uVar8) == 0);
    }
    *(uint *)((int)auStack_134 + iVar11 + 4) = uVar6;
    if (uVar13 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = (uint)((*(uint *)(param_3 + 8 + uVar7 * 4) & uVar8) != 0);
    }
    *(uint *)((int)auStack_1ac + iVar11 + 4) = uVar7;
    if ((uVar6 == 0) && (uVar7 == 0)) {
      uVar9 = 1;
    }
    else {
      uVar9 = 0;
    }
    *(undefined4 *)((int)aiStack_ec + iVar11 + 4) = uVar9;
    if ((uVar6 == 0) && (uVar7 == 0)) {
      uVar9 = 0;
    }
    else {
      uVar9 = 1;
    }
    *(undefined4 *)((int)local_1f4 + iVar11 + 4U) = uVar9;
    uVar8 = 0x80000000 >> (bVar3 & 0x1f);
    uVar7 = uVar4 >> 5;
    uVar13 = *(uint *)(param_3 + 0x10 + uVar7 * 4) & uVar8;
    if (uVar13 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = (uint)((*(uint *)(param_3 + uVar7 * 4) & uVar8) == 0);
    }
    *(uint *)((int)auStack_134 + iVar11 + 8) = uVar6;
    if (uVar13 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = (uint)((*(uint *)(param_3 + 8 + uVar7 * 4) & uVar8) != 0);
    }
    uVar8 = 0;
    *(uint *)((int)auStack_1ac + iVar11 + 8) = uVar7;
    if ((uVar6 == 0) && (uVar7 == 0)) {
      uVar9 = 1;
    }
    else {
      uVar9 = 0;
    }
    *(undefined4 *)((int)aiStack_ec + iVar11 + 8) = uVar9;
    if ((uVar6 == 0) && (uVar7 == 0)) {
      uVar9 = 0;
    }
    else {
      uVar9 = 1;
    }
    uVar4 = uVar4 + 3;
    *(undefined4 *)((int)local_1f4 + iVar11 + 8U) = uVar9;
    iVar11 = iVar11 + 0xc;
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  uVar4 = (uint)(puVar17[0x6fd] != 0);
  if ((param_2[3] == 0) &&
     ((((iStack_1d8 != 0 || (iStack_1d4 != 0)) || (iStack_1c8 != 0)) || (iStack_1c4 != 0)))) {
    param_2[3] = 1;
  }
  if (puVar17[0xcc] == 0) {
    iVar12 = -1;
  }
  else {
    iVar12 = *(int *)(puVar17[0xcc] + 0xcc);
  }
  puVar18 = puVar17;
  auStack_1ac[0] = uVar8;
  auStack_1ac[2] = uVar8;
  auStack_1ac[3] = uVar8;
  auStack_1ac[4] = uVar8;
  auStack_1ac[5] = uVar8;
  auStack_1ac[6] = uVar8;
  auStack_1ac[10] = uVar8;
  uStack_170 = uVar8;
  uStack_16c = uVar8;
  uStack_168 = uVar8;
  auStack_134[0] = uVar8;
  auStack_134[2] = uVar8;
  auStack_134[3] = uVar8;
  auStack_134[4] = uVar8;
  auStack_134[5] = uVar8;
  auStack_134[6] = uVar8;
  auStack_134[10] = uVar8;
  uStack_f8 = uVar8;
  uStack_f4 = uVar8;
  uStack_f0 = uVar8;
  iVar11 = FUN_00ac89d0();
  if (((iVar11 != 0) && (*(int *)(iVar11 + 0x330) != 0)) &&
     (iVar11 = *(int *)(*(int *)(iVar11 + 0x330) + 0xcc), iVar12 < iVar11)) {
    iVar12 = iVar11;
  }
  if (puVar17[0x700] != 0) {
    return;
  }
  fVar2 = 0.0;
  iVar10 = 0;
  iVar11 = 2;
  fVar16 = fVar2;
  do {
    iVar1 = iVar11 + -2;
    if ((iVar1 != 3) && ((iVar1 < 0xf || (0x11 < iVar1)))) {
      fVar2 = fVar2 + (float)*(int *)((int)auStack_134 + iVar10);
      fVar16 = (float)*(int *)((int)auStack_1ac + iVar10) + fVar16;
    }
    iVar1 = iVar11 + -1;
    if ((iVar1 != 3) && ((iVar1 < 0xf || (0x11 < iVar1)))) {
      fVar2 = fVar2 + (float)*(int *)((int)auStack_134 + iVar10 + 4);
      fVar16 = (float)*(int *)((int)auStack_1ac + iVar10 + 4) + fVar16;
    }
    if ((iVar11 != 3) && ((iVar11 < 0xf || (0x11 < iVar11)))) {
      fVar2 = fVar2 + (float)*(int *)((int)auStack_134 + iVar10 + 8);
      fVar16 = (float)*(int *)((int)auStack_1ac + iVar10 + 8) + fVar16;
    }
    iVar1 = iVar11 + 1;
    if ((iVar1 != 3) && ((iVar1 < 0xf || (0x11 < iVar1)))) {
      fVar2 = fVar2 + (float)*(int *)((int)auStack_134 + iVar10 + 0xc);
      fVar16 = (float)*(int *)((int)auStack_1ac + iVar10 + 0xc) + fVar16;
    }
    iVar1 = iVar11 + 2;
    if ((iVar1 != 3) && ((iVar1 < 0xf || (0x11 < iVar1)))) {
      fVar2 = fVar2 + (float)*(int *)((int)auStack_134 + iVar10 + 0x10);
      fVar16 = (float)*(int *)((int)auStack_1ac + iVar10 + 0x10) + fVar16;
    }
    iVar1 = iVar11 + 3;
    if ((iVar1 != 3) && ((iVar1 < 0xf || (0x11 < iVar1)))) {
      fVar2 = fVar2 + (float)*(int *)((int)auStack_134 + iVar10 + 0x14);
      fVar16 = (float)*(int *)((int)auStack_1ac + iVar10 + 0x14) + fVar16;
    }
    iVar1 = iVar11 + 4;
    if ((iVar1 != 3) && ((iVar1 < 0xf || (0x11 < iVar1)))) {
      fVar2 = fVar2 + (float)*(int *)((int)auStack_134 + iVar10 + 0x18);
      fVar16 = (float)*(int *)((int)auStack_1ac + iVar10 + 0x18) + fVar16;
    }
    iVar1 = iVar11 + 5;
    if ((iVar1 != 3) && ((iVar1 < 0xf || (0x11 < iVar1)))) {
      fVar2 = fVar2 + (float)*(int *)((int)auStack_134 + iVar10 + 0x1c);
      fVar16 = (float)*(int *)((int)auStack_1ac + iVar10 + 0x1c) + fVar16;
    }
    iVar1 = iVar11 + 6;
    if ((iVar1 != 3) && ((iVar1 < 0xf || (0x11 < iVar1)))) {
      fVar2 = fVar2 + (float)*(int *)((int)auStack_134 + iVar10 + 0x20);
      fVar16 = (float)*(int *)((int)auStack_1ac + iVar10 + 0x20) + fVar16;
    }
    iVar1 = iVar11 + 7;
    iVar10 = iVar10 + 0x24;
    iVar11 = iVar11 + 9;
  } while (iVar1 < 0x12);
  if (fVar2 == 14.0) {
    return;
  }
  if (12.599999 < fVar16) {
    return;
  }
  if ((((puVar17[0x6fe] != 0) || (puVar17[0x6ff] != 0)) ||
      (iVar11 = FUN_00a8cbe0(0x80007), iVar11 != 0)) ||
     ((iVar11 = FUN_00a8cbe0(0x80009), iVar11 != 0 || (iVar11 = FUN_00a8cbe0(0x60017), iVar11 != 0))
     )) {
    if (local_1f4[1] != 0.0) {
      *param_2 = 6;
      *(uint *)(param_3 + 0x18) = puVar17[0x12d];
      return;
    }
    if (aiStack_ec[1] != 0) {
      *param_2 = 3;
      *(uint *)(param_3 + 0x18) = puVar17[0x12d];
      return;
    }
    if (5 < iVar12) {
      *param_2 = 6;
      *(uint *)(param_3 + 0x18) = puVar17[0x12d];
      return;
    }
    goto LAB_00788ac9;
  }
  if ((puVar17[0x6ff] == 0) &&
     (((iVar11 = (**(code **)(*puVar17 + 0x1d8))(), iVar11 != 0 ||
       (iVar11 = (**(code **)(*puVar17 + 800))(0x3d888889), iVar11 == 0)) ||
      (iVar11 = FUN_008e2740(), iVar11 == 0)))) {
    if (local_1f4[1] != 0.0) {
      *param_2 = 0x1a;
      *(uint *)(param_3 + 0x18) = puVar17[0x12d];
      return;
    }
    if (aiStack_ec[1] != 0) {
      if ((((iStack_1d8 != 0) || (iStack_1d4 != 0)) || (iStack_1c8 != 0)) || (iStack_1c4 != 0)) {
        *param_2 = 0x1b;
        *(uint *)(param_3 + 0x18) = puVar17[0x12d];
        return;
      }
      if (((iStack_d0 != 0) && (iStack_cc != 0)) && ((iStack_c0 != 0 && (iStack_bc != 0)))) {
        if (iStack_1d0 == 0) {
          if (iStack_1c0 == 0) goto LAB_0078887a;
        }
        else {
          puVar17[0x702] = 1;
          if (iStack_1c0 == 0) goto LAB_0078885f;
        }
        puVar17[0x703] = 1;
LAB_0078885f:
        *param_2 = 0x1c;
        *(uint *)(param_3 + 0x18) = puVar17[0x12d];
        return;
      }
    }
LAB_0078887a:
    if (2 < iVar12) {
      return;
    }
  }
  else {
    if (((local_1f4[1] != 0.0) && (iStack_d0 != 0)) && (iStack_c0 != 0)) {
      if ((iStack_cc != 0) && (iStack_bc != 0)) {
        *param_2 = (-(uint)(puVar19 != (uint *)0x0) & 0xfffffffb) + 0x18;
        *(uint *)(param_3 + 0x18) = puVar17[0x12d];
        return;
      }
LAB_0078890f:
      *param_2 = 0x21;
      *(uint *)(param_3 + 0x18) = puVar17[0x12d];
      return;
    }
    if (5 < iVar12) {
      *param_2 = (-(uint)(puVar17[0x6fe] != 0) & 0xffffffee) + 0x18;
      *(uint *)(param_3 + 0x18) = puVar17[0x12d];
      return;
    }
    if (((iStack_1d8 != 0) || (iStack_1d4 != 0)) && (auStack_1ac[1] == 0)) {
      if ((uVar4 != 0) && (aiStack_ec[1] != 0)) {
        *param_2 = 1;
        *(uint *)(param_3 + 0x18) = puVar17[0x12d];
        return;
      }
      goto LAB_0078890f;
    }
    if (((iStack_1c8 != 0) || (iStack_1c4 != 0)) && (auStack_1ac[1] == 0)) {
      if ((uVar4 == 0) || (aiStack_ec[1] == 0)) {
        *param_2 = 0x21;
      }
      else {
        *param_2 = 1;
      }
      param_2[2] = 1;
      *(uint *)(param_3 + 0x18) = puVar18[0x12d];
      return;
    }
    if (aiStack_ec[1] == 0) goto LAB_00788ac9;
    if (((iStack_d0 != 0) && (iStack_cc != 0)) && ((iStack_c0 != 0 && (iStack_bc != 0)))) {
      if (iStack_1d0 != 0) {
        *param_2 = 0x20;
      }
      if (iStack_1c0 != 0) {
        *param_2 = 0x20;
        param_2[2] = 1;
      }
      if (*param_2 != 0) {
        *(uint *)(param_3 + 0x18) = puVar18[0x12d];
        return;
      }
    }
  }
  if (((aiStack_ec[1] != 0) && (iStack_c0 != 0)) && (iStack_d0 != 0)) {
    *param_2 = 0x1f;
    *(uint *)(param_3 + 0x18) = puVar18[0x12d];
    return;
  }
LAB_00788ac9:
  *(undefined4 *)(param_3 + 0x18) = 0x42000;
  return;
}

// 00788AF0  FUN_00788af0  size=2928  [callgraph]
void __thiscall FUN_00788af0(int param_1,int *param_2,int param_3)

{
  int iVar1;
  float fVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  float *pfVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  uint *puVar12;
  int iVar13;
  uint uVar14;
  float10 fVar15;
  float fVar16;
  uint *puVar17;
  float fVar18;
  float fStack_204;
  float fStack_200;
  float local_1fc;
  float local_1f8;
  int local_1f4;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  float local_1e4;
  undefined1 auStack_1dc [12];
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  uint auStack_1c4 [15];
  uint uStack_188;
  uint uStack_184;
  uint uStack_180;
  uint auStack_17c [15];
  uint uStack_140;
  uint uStack_13c;
  uint uStack_138;
  undefined4 auStack_134 [6];
  int iStack_11c;
  int iStack_118;
  int iStack_114;
  int iStack_110;
  int iStack_108;
  int iStack_104;
  int iStack_100;
  undefined4 auStack_ec [6];
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int iStack_c0;
  int iStack_bc;
  undefined1 auStack_94 [20];
  undefined1 local_80 [124];
  
  *(undefined4 *)(param_3 + 0x18) = 0x42000;
  if (*(int *)(param_1 + 0xa50) == 0) {
    return;
  }
  *param_2 = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  local_1fc = 0.0;
  uVar4 = 2;
  local_1f4 = 3;
  do {
    bVar3 = (byte)uVar4;
    uVar10 = 0x80000000 >> (bVar3 - 2 & 0x1f);
    uVar9 = uVar4 - 2 >> 5;
    if (((*(uint *)(param_3 + 0x10 + uVar9 * 4) & uVar10) != 0) &&
       ((*(uint *)(param_3 + 8 + uVar9 * 4) & uVar10) == 0)) {
      local_1fc = (float)((int)local_1fc + 1);
    }
    uVar10 = 0x80000000 >> (bVar3 - 1 & 0x1f);
    uVar9 = uVar4 - 1 >> 5;
    if (((*(uint *)(param_3 + 0x10 + uVar9 * 4) & uVar10) != 0) &&
       ((*(uint *)(param_3 + 8 + uVar9 * 4) & uVar10) == 0)) {
      local_1fc = (float)((int)local_1fc + 1);
    }
    uVar9 = 0x80000000 >> (bVar3 & 0x1f);
    if (((*(uint *)(param_3 + 0x10 + (uVar4 >> 5) * 4) & uVar9) != 0) &&
       ((*(uint *)(param_3 + 8 + (uVar4 >> 5) * 4) & uVar9) == 0)) {
      local_1fc = (float)((int)local_1fc + 1);
    }
    uVar10 = 0x80000000 >> (bVar3 + 1 & 0x1f);
    uVar9 = uVar4 + 1 >> 5;
    if (((*(uint *)(param_3 + 0x10 + uVar9 * 4) & uVar10) != 0) &&
       ((*(uint *)(param_3 + 8 + uVar9 * 4) & uVar10) == 0)) {
      local_1fc = (float)((int)local_1fc + 1);
    }
    uVar10 = 0x80000000 >> (bVar3 + 2 & 0x1f);
    uVar9 = uVar4 + 2 >> 5;
    if (((*(uint *)(param_3 + 0x10 + uVar9 * 4) & uVar10) != 0) &&
       ((*(uint *)(param_3 + 8 + uVar9 * 4) & uVar10) == 0)) {
      local_1fc = (float)((int)local_1fc + 1);
    }
    uVar10 = 0x80000000 >> (bVar3 + 3 & 0x1f);
    uVar9 = uVar4 + 3 >> 5;
    if (((*(uint *)(param_3 + 0x10 + uVar9 * 4) & uVar10) != 0) &&
       ((*(uint *)(param_3 + 8 + uVar9 * 4) & uVar10) == 0)) {
      local_1fc = (float)((int)local_1fc + 1);
    }
    uVar4 = uVar4 + 6;
    local_1f4 = local_1f4 + -1;
  } while (local_1f4 != 0);
  if (local_1fc == 1.4013e-45) {
    return;
  }
  uVar4 = *(uint *)(param_3 + 0x10);
  if (((int)uVar4 < 0) && (*(int *)(param_3 + 8) < 0)) {
    return;
  }
  local_1f8 = (float)param_1;
  if ((((uVar4 & 0x40000000) != 0) && ((*(uint *)(param_3 + 8) >> 0x1e & 1) != 0)) &&
     (iVar5 = FUN_0043f860(0), iVar5 != 0)) {
    return;
  }
  if (((uVar4 & 0x10000000) != 0) && ((*(uint *)(param_3 + 8) >> 0x1c & 1) != 0)) {
    return;
  }
  local_1f0 = *(float *)(param_1 + 0x1bd0) - *(float *)(param_1 + 0x40);
  local_1ec = *(float *)(param_1 + 0x1bd4) - *(float *)(param_1 + 0x44);
  local_1e8 = *(float *)(param_1 + 0x1bd8) - *(float *)(param_1 + 0x48);
  local_1e4 = *(float *)(param_1 + 0x1bdc) - *(float *)(param_1 + 0x4c);
  fVar2 = local_1e8 * local_1e8 + local_1f0 * local_1f0 + local_1ec * local_1ec;
  if (fVar2 < 0.0 == (fVar2 == 0.0)) {
    FUN_00ddf460(&local_1f0,&local_1f0);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    local_1f0 = 0.0;
    local_1ec = 1.0;
    local_1e8 = 0.0;
  }
  pfVar6 = (float *)FUN_00a925a0(local_80);
  if (ABS(pfVar6[2] * local_1e8 + local_1f0 * *pfVar6 + pfVar6[1] * local_1ec) < 0.25) {
    FUN_00a925a0(local_80);
  }
  iVar5 = FUN_00a12210(0xffffffff);
  auStack_1c4[1] = 0;
  iVar5 = iVar5 + 0x10;
  auStack_1c4[2] = 0;
  puVar12 = auStack_1c4 + 1;
  auStack_1c4[3] = 0x3f800000;
  local_1d0 = 0x3f800000;
  auStack_1c4[6] = 0x3f800000;
  local_1cc = 0;
  local_1c8 = 0;
  auStack_1c4[5] = 0;
  auStack_1c4[7] = 0;
  D3DXVec3TransformNormal(puVar12,puVar12,iVar5);
  D3DXVec3TransformNormal(auStack_1dc,auStack_1dc,iVar5);
  D3DXVec3TransformNormal(&local_1c8,&local_1c8,iVar5);
  fStack_204 = *(float *)(param_1 + 0x1bd0) - *(float *)(param_1 + 0x40);
  fStack_200 = *(float *)(param_1 + 0x1bd4) - *(float *)(param_1 + 0x44);
  local_1fc = *(float *)(param_1 + 0x1bd8) - *(float *)(param_1 + 0x48);
  local_1f8 = *(float *)(param_1 + 0x1bdc) - *(float *)(param_1 + 0x4c);
  fVar2 = local_1fc * local_1fc + fStack_204 * fStack_204 + fStack_200 * fStack_200;
  if (fVar2 < 0.0 == (fVar2 == 0.0)) {
    FUN_00ddf460(&fStack_204,&fStack_204);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    fStack_204 = 0.0;
    fStack_200 = 1.0;
    local_1fc = 0.0;
  }
  FUN_0077fa30(auStack_94,param_2);
  iVar5 = FUN_00a12210(0);
  fVar2 = SQRT(*(float *)(iVar5 + 0x38) * *(float *)(iVar5 + 0x38) +
               *(float *)(iVar5 + 0x34) * *(float *)(iVar5 + 0x34) +
               *(float *)(iVar5 + 0x30) * *(float *)(iVar5 + 0x30));
  fVar18 = *(float *)(iVar5 + 0x28) / fVar2;
  fVar16 = *(float *)(iVar5 + 0x38) / fVar2;
  FUN_00ddbaa0(-(*(float *)(iVar5 + 0x18) / fVar2));
  fVar15 = (float10)fpatan((float10)fVar18,(float10)fVar16);
  if ((float10)-0.4537856 <= fVar15) {
    FUN_00a8cbe0(0x50018);
  }
  uVar4 = 2;
  iVar13 = 0;
  iVar5 = 6;
  do {
    bVar3 = (byte)uVar4;
    uVar10 = 0x80000000 >> (bVar3 - 2 & 0x1f);
    uVar9 = uVar4 - 2 >> 5;
    uVar14 = *(uint *)(param_3 + 0x10 + uVar9 * 4) & uVar10;
    if (uVar14 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = (uint)((*(uint *)(param_3 + uVar9 * 4) & uVar10) == 0);
    }
    *(uint *)((int)auStack_1c4 + iVar13) = uVar7;
    if (uVar14 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = (uint)((*(uint *)(param_3 + 8 + uVar9 * 4) & uVar10) != 0);
    }
    *(uint *)((int)auStack_17c + iVar13) = uVar9;
    if ((uVar7 == 0) && (uVar9 == 0)) {
      uVar11 = 1;
    }
    else {
      uVar11 = 0;
    }
    *(undefined4 *)((int)auStack_ec + iVar13) = uVar11;
    if ((uVar7 == 0) && (uVar9 == 0)) {
      uVar11 = 0;
    }
    else {
      uVar11 = 1;
    }
    *(undefined4 *)((int)auStack_134 + iVar13) = uVar11;
    uVar10 = 0x80000000 >> (bVar3 - 1 & 0x1f);
    uVar9 = uVar4 - 1 >> 5;
    uVar14 = *(uint *)(param_3 + 0x10 + uVar9 * 4) & uVar10;
    if (uVar14 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = (uint)((*(uint *)(param_3 + uVar9 * 4) & uVar10) == 0);
    }
    *(uint *)((int)auStack_1c4 + iVar13 + 4) = uVar7;
    if (uVar14 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = (uint)((*(uint *)(param_3 + 8 + uVar9 * 4) & uVar10) != 0);
    }
    *(uint *)((int)auStack_17c + iVar13 + 4) = uVar9;
    if ((uVar7 == 0) && (uVar9 == 0)) {
      uVar11 = 1;
    }
    else {
      uVar11 = 0;
    }
    *(undefined4 *)((int)auStack_ec + iVar13 + 4) = uVar11;
    if ((uVar7 == 0) && (uVar9 == 0)) {
      uVar11 = 0;
    }
    else {
      uVar11 = 1;
    }
    *(undefined4 *)((int)auStack_134 + iVar13 + 4) = uVar11;
    uVar10 = 0x80000000 >> (bVar3 & 0x1f);
    uVar9 = uVar4 >> 5;
    uVar14 = *(uint *)(param_3 + 0x10 + uVar9 * 4) & uVar10;
    if (uVar14 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = (uint)((*(uint *)(param_3 + uVar9 * 4) & uVar10) == 0);
    }
    *(uint *)((int)auStack_1c4 + iVar13 + 8) = uVar7;
    if (uVar14 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = (uint)((*(uint *)(param_3 + 8 + uVar9 * 4) & uVar10) != 0);
    }
    auStack_1c4[0] = 0;
    *(uint *)((int)auStack_17c + iVar13 + 8) = uVar9;
    if ((uVar7 == 0) && (uVar9 == 0)) {
      uVar11 = 1;
    }
    else {
      uVar11 = 0;
    }
    *(undefined4 *)((int)auStack_ec + iVar13 + 8) = uVar11;
    if ((uVar7 == 0) && (uVar9 == 0)) {
      uVar11 = 0;
    }
    else {
      uVar11 = 1;
    }
    uVar4 = uVar4 + 3;
    *(undefined4 *)((int)auStack_134 + iVar13 + 8) = uVar11;
    iVar13 = iVar13 + 0xc;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  uVar4 = (uint)(puVar12[0x6fd] != 0);
  if ((param_2[3] == 0) &&
     ((((iStack_118 != 0 || (iStack_114 != 0)) || (iStack_108 != 0)) || (iStack_104 != 0)))) {
    param_2[3] = 1;
  }
  if (puVar12[0xcc] == 0) {
    iVar5 = -1;
  }
  else {
    iVar5 = *(int *)(puVar12[0xcc] + 0xcc);
  }
  iVar13 = iVar5;
  auStack_1c4[1] = auStack_1c4[0];
  auStack_1c4[2] = auStack_1c4[0];
  auStack_1c4[3] = auStack_1c4[0];
  auStack_1c4[4] = auStack_1c4[0];
  auStack_1c4[5] = auStack_1c4[0];
  auStack_1c4[10] = auStack_1c4[0];
  uStack_188 = auStack_1c4[0];
  uStack_184 = auStack_1c4[0];
  uStack_180 = auStack_1c4[0];
  auStack_17c[0] = auStack_1c4[0];
  auStack_17c[1] = auStack_1c4[0];
  auStack_17c[2] = auStack_1c4[0];
  auStack_17c[3] = auStack_1c4[0];
  auStack_17c[4] = auStack_1c4[0];
  auStack_17c[5] = auStack_1c4[0];
  auStack_17c[10] = auStack_1c4[0];
  uStack_140 = auStack_1c4[0];
  uStack_13c = auStack_1c4[0];
  uStack_138 = auStack_1c4[0];
  iVar8 = FUN_00ac89d0();
  if (((iVar8 != 0) && (*(int *)(iVar8 + 0x330) != 0)) &&
     (iVar8 = *(int *)(*(int *)(iVar8 + 0x330) + 0xcc), iVar5 < iVar8)) {
    iVar13 = iVar8;
  }
  if (puVar12[0x700] != 0) {
    return;
  }
  fVar2 = 0.0;
  iVar8 = 0;
  iVar5 = 2;
  fVar18 = fVar2;
  do {
    iVar1 = iVar5 + -2;
    if ((iVar1 != 3) && ((iVar1 < 0xf || (0x11 < iVar1)))) {
      fVar2 = fVar2 + (float)*(int *)((int)auStack_1c4 + iVar8);
      fVar18 = (float)*(int *)((int)auStack_17c + iVar8) + fVar18;
    }
    iVar1 = iVar5 + -1;
    if ((iVar1 != 3) && ((iVar1 < 0xf || (0x11 < iVar1)))) {
      fVar2 = fVar2 + (float)*(int *)((int)auStack_1c4 + iVar8 + 4);
      fVar18 = (float)*(int *)((int)auStack_17c + iVar8 + 4) + fVar18;
    }
    if ((iVar5 != 3) && ((iVar5 < 0xf || (0x11 < iVar5)))) {
      fVar2 = fVar2 + (float)*(int *)((int)auStack_1c4 + iVar8 + 8);
      fVar18 = (float)*(int *)((int)auStack_17c + iVar8 + 8) + fVar18;
    }
    iVar1 = iVar5 + 1;
    if ((iVar1 != 3) && ((iVar1 < 0xf || (0x11 < iVar1)))) {
      fVar2 = fVar2 + (float)*(int *)((int)auStack_1c4 + iVar8 + 0xc);
      fVar18 = (float)*(int *)((int)auStack_17c + iVar8 + 0xc) + fVar18;
    }
    iVar1 = iVar5 + 2;
    if ((iVar1 != 3) && ((iVar1 < 0xf || (0x11 < iVar1)))) {
      fVar2 = fVar2 + (float)*(int *)((int)auStack_1c4 + iVar8 + 0x10);
      fVar18 = (float)*(int *)((int)auStack_17c + iVar8 + 0x10) + fVar18;
    }
    iVar1 = iVar5 + 3;
    if ((iVar1 != 3) && ((iVar1 < 0xf || (0x11 < iVar1)))) {
      fVar2 = fVar2 + (float)*(int *)((int)auStack_1c4 + iVar8 + 0x14);
      fVar18 = (float)*(int *)((int)auStack_17c + iVar8 + 0x14) + fVar18;
    }
    iVar1 = iVar5 + 4;
    if ((iVar1 != 3) && ((iVar1 < 0xf || (0x11 < iVar1)))) {
      fVar2 = fVar2 + (float)*(int *)((int)auStack_1c4 + iVar8 + 0x18);
      fVar18 = (float)*(int *)((int)auStack_17c + iVar8 + 0x18) + fVar18;
    }
    iVar1 = iVar5 + 5;
    if ((iVar1 != 3) && ((iVar1 < 0xf || (0x11 < iVar1)))) {
      fVar2 = fVar2 + (float)*(int *)((int)auStack_1c4 + iVar8 + 0x1c);
      fVar18 = (float)*(int *)((int)auStack_17c + iVar8 + 0x1c) + fVar18;
    }
    iVar1 = iVar5 + 6;
    if ((iVar1 != 3) && ((iVar1 < 0xf || (0x11 < iVar1)))) {
      fVar2 = fVar2 + (float)*(int *)((int)auStack_1c4 + iVar8 + 0x20);
      fVar18 = (float)*(int *)((int)auStack_17c + iVar8 + 0x20) + fVar18;
    }
    iVar1 = iVar5 + 7;
    iVar8 = iVar8 + 0x24;
    iVar5 = iVar5 + 9;
  } while (iVar1 < 0x12);
  if (fVar2 == 14.0) {
    return;
  }
  if (12.599999 < fVar18) {
    return;
  }
  if ((((puVar12[0x6fe] != 0) || (puVar12[0x6ff] != 0)) ||
      (puVar17 = puVar12, iVar5 = FUN_00a8cbe0(0x80007), iVar5 != 0)) ||
     ((iVar5 = FUN_00a8cbe0(0x80009), iVar5 != 0 || (iVar5 = FUN_00a8cbe0(0x60017), iVar5 != 0)))) {
    *param_2 = 3;
    *(uint *)(param_3 + 0x18) = puVar12[0x12d];
    return;
  }
  if ((puVar12[0x6ff] == 0) &&
     (((iVar5 = (**(code **)(*puVar12 + 0x1d8))(), iVar5 != 0 ||
       (iVar5 = (**(code **)(*puVar17 + 800))(0x3d888889), iVar5 == 0)) ||
      (puVar12 = puVar17, iVar5 = FUN_008e2740(), puVar17 = puVar12, iVar5 == 0)))) {
    if (2 < iVar13) {
      return;
    }
    if (((iStack_11c != 0) || (iStack_118 != 0)) ||
       ((iStack_114 != 0 || ((iStack_108 != 0 || (iStack_104 != 0)))))) {
      *param_2 = 0x1b;
      *(uint *)(param_3 + 0x18) = puVar17[0x12d];
      return;
    }
    if (((iStack_d4 != 0) && (iStack_d0 != 0)) && (iStack_cc != 0)) {
      if (iStack_c0 == 0) goto LAB_00789645;
      if (iStack_bc != 0) {
        if (iStack_110 == 0) {
          if (iStack_100 == 0) goto LAB_0078961e;
        }
        else {
          puVar17[0x702] = 1;
          if (iStack_100 == 0) goto LAB_007894c5;
        }
        puVar17[0x703] = 1;
LAB_007894c5:
        *param_2 = 0x1c;
        *(uint *)(param_3 + 0x18) = puVar17[0x12d];
        return;
      }
    }
  }
  else {
    if (5 < iVar13) {
      *param_2 = (-(uint)(puVar12[0x6fe] != 0) & 0xffffffee) + 0x18;
LAB_00789500:
      *(uint *)(param_3 + 0x18) = puVar12[0x12d];
      return;
    }
    if ((iStack_118 != 0) || (iStack_114 != 0)) {
      *param_2 = (-(uint)(uVar4 != 0) & 0xffffffe0) + 0x21;
      *(uint *)(param_3 + 0x18) = puVar12[0x12d];
      return;
    }
    if ((iStack_108 != 0) || (iStack_104 != 0)) {
      *param_2 = (-(uint)(uVar4 != 0) & 0xffffffe0) + 0x21;
      param_2[2] = 1;
      *(uint *)(param_3 + 0x18) = puVar12[0x12d];
      return;
    }
    if ((((iStack_d0 != 0) && (iStack_cc != 0)) && (iStack_c0 != 0)) && (iStack_bc != 0)) {
      if (iStack_110 != 0) {
        *param_2 = 0x20;
      }
      if (iStack_100 != 0) {
        *param_2 = 0x20;
        param_2[2] = 1;
      }
      if (*param_2 != 0) goto LAB_00789500;
    }
    if (iStack_11c != 0) {
      *param_2 = 0x1d;
      *(uint *)(param_3 + 0x18) = puVar17[0x12d];
      return;
    }
  }
LAB_0078961e:
  if ((iStack_c0 != 0) && (iStack_d0 != 0)) {
    *param_2 = 0x1f;
    *(uint *)(param_3 + 0x18) = puVar17[0x12d];
    return;
  }
LAB_00789645:
  *(undefined4 *)(param_3 + 0x18) = 0x42000;
  return;
}

// 00789660  Emc060::vf338  size=261  [class]
void __thiscall Emc060::vf338(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  
  iVar4 = 0;
  if (0 < param_4) {
    piVar2 = (int *)(param_3 + 0x18);
    do {
      if (*piVar2 == param_1[0x12d]) {
        iVar4 = iVar4 + 1;
      }
      piVar2 = piVar2 + 9;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
    if (iVar4 != 0) {
      return;
    }
  }
  (**(code **)(*param_1 + 0x344))(5,1,1);
  (**(code **)(*param_1 + 0x364))(0xffffffff);
  iVar4 = *(int *)(DAT_01b35898 + 8);
  iVar1 = *(int *)(DAT_01b35898 + 4);
  for (iVar5 = *(int *)(DAT_01b35898 + 4); iVar5 != iVar4 * 0x10 + iVar1; iVar5 = iVar5 + 0x10) {
    iVar3 = FUN_00a81330();
    if ((iVar3 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
      puVar6 = &DAT_01b35810;
      (**(code **)(*piVar2 + 4))(&DAT_01b35810);
      iVar3 = FUN_00dd6d80(puVar6);
      if (((iVar3 != 0) &&
          (((iVar3 = FUN_00a8cbe0(0x80000), iVar3 == 0 && (iVar3 = FUN_00778c30(), iVar3 != 0)) &&
           (piVar2[0x3ad] == 0)))) &&
         ((iVar3 = FUN_00a8cbe0(0x1000a), iVar3 == 0 && (0 < piVar2[0x66f])))) {
        piVar2[0x66e] = 1;
        piVar2[0x66f] = piVar2[0x66f] + -1;
        FUN_007788a0();
      }
    }
  }
  return;
}

// 00789770  Emc060::vf334  size=1926  [class]
void __thiscall Emc060::vf334(int *param_1,int param_2,int *param_3)

{
  code *pcVar1;
  short sVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  float10 fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined *puVar14;
  undefined4 uVar15;
  int *local_a8;
  undefined1 local_a0 [56];
  int local_68;
  
  EmBaseDLC::vf334(param_2,param_3);
  if (param_3 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar14 = &DAT_01be9ca0;
    (**(code **)(*param_3 + 4))(&DAT_01be9ca0);
    iVar6 = FUN_00dd6d80(puVar14);
    uVar3 = -(uint)(iVar6 != 0) & (uint)param_3;
  }
  local_a8 = (int *)0x0;
  if (uVar3 != 0) {
    local_a8 = (int *)FUN_00acdea0();
    if (local_a8 == (int *)0x0) {
      local_a8 = (int *)0x0;
    }
    else {
      puVar14 = &DAT_01b35810;
      (**(code **)(*local_a8 + 4))(&DAT_01b35810);
      iVar6 = FUN_00dd6d80(puVar14);
      if (iVar6 == 0) {
        local_a8 = (int *)0x0;
      }
      else if (local_a8 != param_1) {
        FUN_0040ac60(local_a8 + 0x2ac);
        iVar6 = local_a8[0x20f];
        param_1[0x147] = iVar6;
        param_1[0x20f] = iVar6;
        param_1[0x6fe] = local_a8[0x6fe];
        param_1[0x702] = local_a8[0x702];
        param_1[0x703] = local_a8[0x703];
        param_1[0x704] = local_a8[0x704];
        param_1[0x705] = local_a8[0x705];
        param_1[0x71c] = local_a8[0x71c];
        param_1[0x70e] = local_a8[0x70e];
        uVar4 = FUN_009f8b40();
        FUN_00ac8a80(uVar4);
      }
    }
  }
  FUN_009fd240();
  if (*(int *)(param_2 + 0x370) != 0) {
    FUN_00a1abe0(0);
  }
  piVar5 = param_1 + 0x633;
  iVar6 = (int)local_a8 - (int)param_1;
  iVar7 = 9;
  do {
    *piVar5 = *(int *)(iVar6 + (int)piVar5);
    piVar5[1] = *(int *)(iVar6 + 4 + (int)piVar5);
    piVar5[2] = *(int *)(iVar6 + 8 + (int)piVar5);
    piVar5 = piVar5 + 3;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  piVar5 = param_1 + 0x650;
  iVar7 = 6;
  do {
    *piVar5 = *(int *)((int)piVar5 + iVar6);
    piVar5[1] = *(int *)((int)piVar5 + iVar6 + 4);
    piVar5[2] = *(int *)((int)piVar5 + iVar6 + 8);
    piVar5[3] = *(int *)((int)piVar5 + iVar6 + 0xc);
    piVar5 = piVar5 + 4;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  piVar5 = param_1 + 0x669;
  iVar7 = 4;
  do {
    *piVar5 = *(int *)((int)piVar5 + iVar6);
    piVar5 = piVar5 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  if (param_1[0x654] != 0) {
    FUN_00ac8d80(0x12,1);
    FUN_00ac8d80(0x11,1);
    FUN_00ac8d80(0xe,1);
  }
  if (param_1[0x650] != 0) {
    FUN_00ac8d80(0,1);
    FUN_00ac8d80(1,1);
    FUN_00ac8d80(2,1);
    FUN_00ac8d80(3,1);
    FUN_00ac8d80(0xf,1);
    FUN_00ac8d80(0x10,1);
    FUN_00ac8d80(9,1);
    FUN_00ac8d80(4,1);
    if ((param_1[0xcc] != 0) && (*(int *)(param_1[0xcc] + 0xcc) == 0)) {
      FUN_0077f0b0();
    }
  }
  if (param_1[0x658] != 0) {
    FUN_00ac8d80(10,1);
    FUN_00ac8d80(0xb,1);
    FUN_00ac8d80(0xc,1);
    FUN_00ac8d80(0xd,1);
  }
  if (param_1[0x65c] != 0) {
    FUN_00ac8d80(5,1);
    FUN_00ac8d80(6,1);
    FUN_00ac8d80(7,1);
    FUN_00ac8d80(8,1);
  }
  iVar6 = FUN_00ac8a30();
  if (iVar6 != 0) {
    uVar8 = 0;
    uVar3 = 1;
    do {
      iVar6 = FUN_00a10040(uVar8);
      if (iVar6 == 2) {
        if (uVar8 < 0x20) {
          param_1[0x6f3] = param_1[0x6f3] | uVar3;
LAB_00789a6b:
          if (uVar8 < 0x20) {
            param_1[0x6f2] = param_1[0x6f2] | uVar3;
          }
        }
      }
      else {
        iVar6 = FUN_00a10040(uVar8);
        if (iVar6 == 1) goto LAB_00789a6b;
      }
      uVar8 = uVar8 + 1;
      uVar3 = uVar3 << 1 | (uint)((int)uVar3 < 0);
    } while ((int)uVar8 < 0x12);
  }
  if ((*(byte *)(param_1 + 0x6f2) & 2) == 0) {
    if (param_1[0x705] == 0) {
      if (param_1[0x50a] != 0) {
        *(int *)(param_1[0x50a] + 0x518) = param_2;
      }
      if (param_1[0x50b] != 0) {
        *(int *)(param_1[0x50b] + 0x518) = param_2;
      }
    }
  }
  else {
    param_1[0x705] = 1;
    if (param_1[0x50a] != 0) {
      uVar4 = FUN_00a81330();
      FUN_00a9e0d0(uVar4);
      FUN_00451280();
      param_1[0x50a] = 0;
      FUN_00a7c950();
    }
    if (param_1[0x50b] != 0) {
      uVar4 = FUN_00a81330();
      FUN_00a9e0d0(uVar4);
      FUN_00451280();
      param_1[0x50b] = 0;
      FUN_00a7c950();
    }
  }
  if ((param_1[0x6f2] & 0x4000U) == 0) {
    if ((param_1[0x704] == 0) && (param_1[0x509] != 0)) {
      *(int *)(param_1[0x509] + 0x518) = param_2;
    }
  }
  else {
    param_1[0x704] = 1;
    FUN_0077c690(0);
  }
  iVar6 = 0;
  piVar5 = (int *)FUN_00ac8a30();
  if (piVar5 != (int *)0x0) {
    iVar6 = *piVar5;
    if (local_a8[0x650] == 0) {
LAB_00789bc8:
      if (((local_a8[0x654] != 0) && (local_a8[0x658] != 0)) && (local_a8[0x65c] != 0)) {
        param_1[0x6fd] = local_a8[0x294];
      }
      if (((local_a8[0x650] == 0) && (local_a8[0x654] == 0)) &&
         ((local_a8[0x658] != 0 && (local_a8[0x65c] != 0)))) {
        param_1[0x6fd] = local_a8[0x294];
      }
    }
    else {
      if (((local_a8[0x654] != 0) && (local_a8[0x658] != 0)) && (local_a8[0x65c] != 0)) {
        param_1[0x6fd] = piVar5[1];
      }
      if (local_a8[0x650] == 0) goto LAB_00789bc8;
    }
    if (param_1[0x6fc] == 0) {
      param_1[0x6fc] = piVar5[2];
    }
    if (param_1[0x6fe] == 0) {
      param_1[0x6fe] = piVar5[3];
    }
  }
  if (param_1[0x139] == 0) {
    if (param_1[0x70e] != 0) {
      param_1[0x139] = 1;
    }
    if ((-1 < param_1[0x71c]) &&
       ((iVar7 = FUN_00c51a30(param_1[0x71c]), iVar7 == 0 ||
        (FUN_00c518c0(local_a0,param_1[0x71c]), local_68 != 0)))) {
      param_1[0x139] = 1;
    }
    if (param_1[0x139] == 0) goto LAB_00789cf4;
  }
  if (iVar6 == 3) {
    iVar6 = 6;
  }
  else if (iVar6 == 0x1b) {
    iVar6 = 0x1a;
  }
  else {
    switch(iVar6) {
    case 0x19:
    case 0x1c:
      iVar6 = 0x1a;
      break;
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
      iVar6 = 0x18;
    }
  }
  (**(code **)(*param_1 + 0x344))(5,1,1);
LAB_00789cf4:
  uVar3 = 0x10000;
  switch(iVar6) {
  case 1:
    uVar3 = 0x80006;
    break;
  case 2:
    uVar3 = 0x80007;
    break;
  case 3:
    uVar3 = 0x80009;
    break;
  case 4:
    uVar3 = 0x8000a;
    break;
  case 6:
    uVar3 = 0x8000e;
    break;
  case 7:
    uVar3 = 0x8000f;
    break;
  case 8:
    uVar3 = 0x80010;
    break;
  case 9:
    uVar3 = 0x80011;
    break;
  case 10:
    uVar3 = 0x80012;
    break;
  case 0xb:
    uVar3 = 0x80013;
    break;
  case 0xc:
    uVar3 = 0x80014;
    break;
  case 0xd:
    uVar3 = 0x80015;
    break;
  case 0xe:
    uVar3 = 0x80016;
    break;
  case 0xf:
    uVar3 = 0x80017;
    break;
  case 0x10:
    uVar3 = 0x80018;
    break;
  case 0x11:
    uVar3 = 0x80019;
    break;
  case 0x12:
    uVar3 = 0x8001a;
    break;
  case 0x13:
    uVar3 = 0x8001b;
    break;
  case 0x14:
    uVar3 = 0x8001c;
    break;
  case 0x15:
    uVar3 = 0x8001d;
    break;
  case 0x16:
    uVar3 = 0x8001e;
    break;
  case 0x17:
    uVar3 = 0x8001f;
    break;
  case 0x18:
    uVar3 = 0x80000;
    break;
  case 0x19:
    uVar3 = 0x80020;
    break;
  case 0x1a:
    uVar3 = 0x80021;
    break;
  case 0x1b:
    uVar3 = 0x80022;
    break;
  case 0x1c:
    uVar3 = 0x80023;
    break;
  case 0x1d:
    uVar3 = 0x80024;
    break;
  case 0x1e:
    uVar3 = 0x80025;
    break;
  case 0x1f:
    uVar3 = 0x80026;
    break;
  case 0x20:
    uVar3 = 0x80027;
    break;
  case 0x21:
    uVar3 = 0x80028;
  }
  param_1[0x701] = -0x40800000;
  iVar6 = FUN_00a8cbe0(uVar3);
  if (iVar6 != 0) {
    fVar9 = (float10)FUN_00a958c0(0);
    param_1[0x701] = (int)(float)fVar9;
    uVar15 = 0x3f800000;
    uVar13 = 0;
    uVar12 = 0x8000210;
    uVar11 = 0x3f800000;
    uVar10 = 0x3d088889;
    uVar4 = 1;
    sVar2 = FUN_00dde2d0(0,2);
    FUN_00aa4080(sVar2 + 0x61,uVar4,uVar10,uVar11,uVar12,uVar13,uVar15);
  }
  param_1[0x3a7] = 0;
  if (((uVar3 == 0x80021) || (uVar3 == 0x80022)) || (uVar3 == 0x80023)) {
    pcVar1 = *(code **)(*param_1 + 0x314);
    param_1[0x225] = 0;
    (*pcVar1)();
  }
  if ((uVar3 & 0xffff0000) != 0x80000) {
    iVar6 = FUN_00a8cab0();
    param_1[0x3a9] = iVar6;
    param_1[0x3aa] = param_1[0x3a8];
  }
  FUN_00a8caf0(uVar3,0,0,0);
  param_1[0x3a8] = 0;
  FUN_00a962d0(0,0);
  param_1[0x4e7] = 0;
  return;
}

// 00789FA0  FUN_00789fa0  size=203  [between]
void __fastcall FUN_00789fa0(int param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (((0.0 < *(float *)(param_1 + 0x1c18)) &&
      (fVar1 = *(float *)(param_1 + 0x1c18) - *(float *)(param_1 + 0x910),
      *(float *)(param_1 + 0x1c18) = fVar1, fVar1 < 0.0)) && (*(int *)(param_1 + 0x1424) != 0)) {
    sVar2 = FUN_00dde2a0(0,1);
    if ((sVar2 == 0) || (iVar3 = FUN_00782ca0(*(undefined4 *)(param_1 + 0x1acc)), iVar3 == 0)) {
      uVar4 = 0x8000c;
    }
    else {
      uVar4 = 0x8000f;
    }
    FUN_00a8caf0(uVar4,0,0,0);
    *(undefined4 *)(param_1 + 0xea0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x139c) = 0;
  }
  if ((*(int *)(param_1 + 0x870) < 1) || (*(int *)(param_1 + 0x4e4) != 0)) {
    FUN_00a8caf0(0x8000e,0,0,0);
    *(undefined4 *)(param_1 + 0xea0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x139c) = 0;
  }
  return;
}

// 0078A070  FUN_0078a070  size=47  [between]
void __fastcall FUN_0078a070(int param_1)

{
  FUN_00dd7270();
  if (*(int *)(*(int *)(param_1 + 0x78) + 4) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x78) + 8) = 0;
  }
  if (*(undefined4 **)(param_1 + 0x78) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x78))(1);
  }
  return;
}

// 0078A0A0  FUN_0078a0a0  size=88  [between]
undefined4 __fastcall FUN_0078a0a0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_00a7c8a0();
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  iVar2 = FUN_00a7c8a0();
  iVar1 = *(int *)(param_1 + 0x78);
  iVar3 = *(int *)(iVar1 + 4);
  while( true ) {
    if (iVar3 == *(int *)(iVar1 + 8) * 0x10 + *(int *)(iVar1 + 4)) {
      return 0;
    }
    if (*(int *)(iVar3 + 4) == *(int *)(iVar2 + 0x838)) break;
    iVar3 = iVar3 + 0x10;
  }
  return *(undefined4 *)(iVar3 + 8);
}

// 0078A100  FUN_0078a100  size=88  [between]
undefined4 __fastcall FUN_0078a100(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_00a7c8a0();
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  iVar2 = FUN_00a7c8a0();
  iVar1 = *(int *)(param_1 + 0x78);
  iVar3 = *(int *)(iVar1 + 4);
  while( true ) {
    if (iVar3 == *(int *)(iVar1 + 8) * 0x10 + *(int *)(iVar1 + 4)) {
      return 0;
    }
    if (*(int *)(iVar3 + 4) == *(int *)(iVar2 + 0x51c)) break;
    iVar3 = iVar3 + 0x10;
  }
  return *(undefined4 *)(iVar3 + 0xc);
}

// 0078A1B0  FUN_0078a1b0  size=108  [between]
void __fastcall FUN_0078a1b0(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x98) != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x78) + 4);
  if (iVar2 != *(int *)(*(int *)(param_1 + 0x78) + 8) * 0x10 + iVar2) {
    do {
      iVar1 = FUN_00a81330();
      if (iVar1 == 0) {
        iVar2 = FUN_00785a20(iVar2);
      }
      else {
        iVar2 = iVar2 + 0x10;
      }
    } while (iVar2 != *(int *)(*(int *)(param_1 + 0x78) + 8) * 0x10 +
                      *(int *)(*(int *)(param_1 + 0x78) + 4));
  }
  if (*(int *)(param_1 + 0x98) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
  }
  return;
}

// 0078A280  FUN_0078a280  size=264  [between]
void __fastcall FUN_0078a280(float *param_1)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  float10 fVar4;
  undefined4 uStack_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined1 auStack_24 [32];
  
  fVar1 = *param_1;
  *param_1 = fVar1 - 1.0;
  if (fVar1 - 1.0 <= 0.0) {
    fVar4 = (float10)FUN_00dde300(0x40a00000,0x41200000);
    *param_1 = (float)fVar4;
    FUN_00781770(&local_30);
    if (((local_30 != 0.0) || (local_2c != 0.0)) || (local_28 != 0.0)) {
      piVar2 = (int *)FUN_00c13920();
      iVar3 = (**(code **)(*piVar2 + 0x28))(0);
      if (((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) &&
         (iVar3 = FUN_00412580(iVar3), iVar3 != 0)) {
        uStack_34 = *(undefined4 *)(iVar3 + 0x40);
        local_2c = *(float *)(iVar3 + 0x48);
        local_28 = *(float *)(iVar3 + 0x4c);
        FUN_00a925a0(auStack_24);
        local_30 = *(float *)(iVar3 + 0x2324);
        FUN_00782490(&uStack_34,auStack_24);
        FUN_00782830(&uStack_34,auStack_24);
      }
    }
  }
  return;
}

// 0078A390  Emc060::vf19C  size=195  [class]
void __thiscall Emc060::vf19C(int *param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 local_a0 [48];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  
  uVar1 = *(undefined4 *)(param_2 + 0x100);
  uVar2 = *(undefined4 *)(param_2 + 0x104);
  uVar3 = *(undefined4 *)(param_2 + 0x108);
  FUN_009dbcf0();
  FID_conflict__memcpy(local_a0,(void *)(param_2 + 0x40),0x40);
  local_70 = uVar1;
  local_6c = uVar2;
  local_68 = uVar3;
  if (*(short *)(param_2 + 0x84) == -1) {
    (**(code **)(*param_1 + 0x1ac))
              (*(undefined4 *)(param_2 + 0x144),param_2,*(undefined4 *)(param_2 + 300),local_a0);
  }
  else {
    (**(code **)(*param_1 + 0x1a8))(param_2,param_3,param_1);
  }
  if ((param_3 & 0x400) == 0) {
    (**(code **)(*param_1 + 0x314))();
  }
  return;
}

// 0078A460  FUN_0078a460  size=741  [callgraph]
void __fastcall FUN_0078a460(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_20 [4];
  float local_1c;
  
  switch(param_1[0x187]) {
  case 0:
    (**(code **)(*param_1 + 0x1d4))(1);
    FUN_00aa4080(0x75,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    puVar3 = local_20;
    FUN_00a92f90(puVar3);
    FUN_0044fd10(puVar3);
    param_1[0x225] = (int)(local_1c * 0.016666668);
    return;
  case 2:
    (**(code **)(*param_1 + 0x1d4))(1);
    FUN_00aa4080(0x76,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar1 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 4:
    FUN_00aa4080(0x77,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x187] = (uint)(param_1[0x6fe] != 0) * 2 + 6;
      return;
    }
    break;
  case 6:
    FUN_00aa4080(0x8d,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 7:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    break;
  case 8:
    uVar2 = 0x8000000;
    if (param_1[0x6fc] != 0) {
      uVar2 = 0x8000040;
    }
    param_1[0x187] = 9;
    FUN_00aa4080(0xa8,0,0x3d088889,0x3f800000,uVar2,0xbf800000,0x3f800000);
    param_1[0x248] = 0x42f00000;
  case 9:
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if ((float)param_1[0x248] < 0.0) {
      FUN_00a8caf0(0x80007,0,0,0);
      param_1[0x3a8] = 0;
      FUN_00a962d0(0,0);
      param_1[0x4e7] = 0;
      return;
    }
  }
  return;
}

// 0078A770  FUN_0078a770  size=741  [callgraph]
void __fastcall FUN_0078a770(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 local_20 [4];
  float local_1c;
  
  switch(param_1[0x187]) {
  case 0:
    (**(code **)(*param_1 + 0x1d4))(1);
    FUN_00aa4080(0x7b,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    puVar3 = local_20;
    FUN_00a92f90(puVar3);
    FUN_0044fd10(puVar3);
    param_1[0x225] = (int)(local_1c * 0.016666668);
    return;
  case 2:
    (**(code **)(*param_1 + 0x1d4))(1);
    FUN_00aa4080(0x7c,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar1 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 4:
    FUN_00aa4080(0x7d,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x187] = (uint)(param_1[0x6fe] != 0) * 2 + 6;
      return;
    }
    break;
  case 6:
    FUN_00aa4080(0x8d,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 7:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    break;
  case 8:
    uVar2 = 0x8000000;
    if (param_1[0x6fc] != 0) {
      uVar2 = 0x8000040;
    }
    param_1[0x187] = 9;
    FUN_00aa4080(0xa8,0,0x3d088889,0x3f800000,uVar2,0xbf800000,0x3f800000);
    param_1[0x248] = 0x42f00000;
  case 9:
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if ((float)param_1[0x248] < 0.0) {
      FUN_00a8caf0(0x80007,0,0,0);
      param_1[0x3a8] = 0;
      FUN_00a962d0(0,0);
      param_1[0x4e7] = 0;
      return;
    }
  }
  return;
}

// 0078AC20  FUN_0078ac20  size=27  [callgraph]
void __fastcall FUN_0078ac20(int param_1)

{
  undefined4 local_4;
  
  local_4 = *(undefined4 *)(param_1 + 0x4f0);
  FUN_0078a100(&local_4);
  return;
}

// 0078AC40  FUN_0078ac40  size=75  [callgraph]
void FUN_0078ac40(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = FUN_00a7c8a0();
  if (iVar3 != 0) {
    iVar3 = FUN_00a7c8a0();
    iVar3 = *(int *)(iVar3 + 0x51c);
    iVar1 = *(int *)(DAT_01b35898 + 8);
    iVar2 = *(int *)(DAT_01b35898 + 4);
    for (iVar4 = *(int *)(DAT_01b35898 + 4); iVar4 != iVar1 * 0x10 + iVar2; iVar4 = iVar4 + 0x10) {
      if (*(int *)(iVar4 + 4) == iVar3) {
        *(undefined4 *)(iVar4 + 0xc) = param_1;
      }
    }
  }
  return;
}

// 0078AC90  FUN_0078ac90  size=27  [callgraph]
void __fastcall FUN_0078ac90(int param_1)

{
  undefined4 local_4;
  
  local_4 = *(undefined4 *)(param_1 + 0x4f0);
  FUN_0078a0a0(&local_4);
  return;
}

// 0078ACB0  FUN_0078acb0  size=154  [callgraph]
void __thiscall
FUN_0078acb0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00785b10(param_2,param_3,param_4,param_5,param_6,param_7);
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      if (*(int *)(param_1 + 0x4f0) != 0) {
        uVar2 = FUN_00a7c7f0();
        FUN_00a7c960(uVar2);
      }
      uVar2 = FUN_00ac89d0();
      *(undefined4 *)(iVar1 + 0x518) = uVar2;
      uVar2 = FUN_009f8b40();
      FUN_009f8ae0(uVar2);
      *(int *)(param_1 + 0x1424 + param_2 * 4) = iVar1;
    }
    if (param_2 == 0) {
      uVar2 = FUN_00ac8660(0,0x22);
      FUN_00448e60(uVar2);
    }
  }
  return;
}

// 0078AD50  FUN_0078ad50  size=2039  [callgraph]
void __fastcall FUN_0078ad50(int param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_4;
  
  if (*(int *)(param_1 + 0x61c) < 3) {
    return;
  }
  if (3 < *(int *)(param_1 + 0x61c)) {
    return;
  }
  local_4 = *(undefined4 *)(param_1 + 0x4f0);
  iVar3 = FUN_0078a100(&local_4);
  if (iVar3 == 0) {
    if (*(int *)(param_1 + 0x1b74) == 0) {
      uVar4 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
      *(undefined4 *)(param_1 + 0xea4) = uVar4;
      FUN_00a8caf0(0x10010,0,0,0);
      *(undefined4 *)(param_1 + 0xea0) = 0;
      FUN_00a962d0(0,0);
      *(undefined4 *)(param_1 + 0x139c) = 0;
    }
    iVar3 = FUN_00aa4a90();
    if (((iVar3 == 0) || ((*(uint *)(param_1 + 0xd44) & 0x2000000) != 0)) ||
       (fVar1 = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0x93c),
       *(float *)(param_1 + 0x93c) = fVar1, fVar1 < 30.0)) {
      if (1.0471976 < *(float *)(param_1 + 0xaa0)) {
        uVar4 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xea4) = uVar4;
        *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
        FUN_00a8caf0(0x10005,0,0,0);
        *(undefined4 *)(param_1 + 0xea0) = 0;
        FUN_00a962d0(0,0);
        *(undefined4 *)(param_1 + 0x139c) = 0;
        if (1.0471976 < *(float *)(param_1 + 0xa9c)) {
          uVar4 = FUN_00a8cab0();
          *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
          *(undefined4 *)(param_1 + 0xea4) = uVar4;
          FUN_00a8caf0(0x10006,0,0,0);
          *(undefined4 *)(param_1 + 0xea0) = 0;
          FUN_00a962d0(0,0);
          *(undefined4 *)(param_1 + 0x139c) = 0;
        }
        if (2.0943952 < *(float *)(param_1 + 0xa9c)) {
          uVar4 = FUN_00a8cab0();
          *(undefined4 *)(param_1 + 0xea4) = uVar4;
          *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
          FUN_00a8caf0(0x10008,0,0,0);
          *(undefined4 *)(param_1 + 0xea0) = 0;
          FUN_00a962d0(0,0);
          *(undefined4 *)(param_1 + 0x139c) = 0;
        }
        if (*(float *)(param_1 + 0xa9c) < -2.0943952) {
          uVar4 = FUN_00a8cab0();
          *(undefined4 *)(param_1 + 0xea4) = uVar4;
          *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
          FUN_00a8caf0(0x10007,0,0,0);
          *(undefined4 *)(param_1 + 0xea0) = 0;
          FUN_00a962d0(0,0);
          *(undefined4 *)(param_1 + 0x139c) = 0;
        }
      }
      fVar1 = *(float *)(param_1 + 0x1780);
      if (NAN(fVar1) || 240.0 < fVar1 == (fVar1 == 240.0)) {
        if (25.0 <= *(float *)(param_1 + 0xa90)) goto LAB_0078b537;
        uVar4 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xea4) = uVar4;
        *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
        FUN_00a8caf0(0x10003,4,0,0);
        *(undefined4 *)(param_1 + 0xea0) = 0;
        FUN_00a962d0(0,0);
        *(undefined4 *)(param_1 + 0x139c) = 0;
        sVar2 = FUN_00dde2d0(0,1);
        if (sVar2 != 0) {
          FUN_0077ed00();
        }
        sVar2 = FUN_00dde2d0(0,1);
        if ((sVar2 != 0) && (9.0 < *(float *)(param_1 + 0xa90))) {
          uVar4 = FUN_00a8cab0();
          *(undefined4 *)(param_1 + 0xea4) = uVar4;
          *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
          FUN_00a8caf0(0x10010,0,0,0);
          *(undefined4 *)(param_1 + 0xea0) = 0;
          FUN_00a962d0(0,0);
          *(undefined4 *)(param_1 + 0x139c) = 0;
        }
        if (0.0 <= *(float *)(param_1 + 0x1774)) goto LAB_0078b537;
        goto LAB_0078b4e8;
      }
LAB_0078af4d:
      if (9.0 <= *(float *)(param_1 + 0xa90)) goto LAB_0078b537;
      goto LAB_0078b4fa;
    }
    uVar4 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
    uVar5 = 0x10004;
  }
  else {
    if (iVar3 == 1) {
      if (1.0471976 < *(float *)(param_1 + 0xaa0)) {
        uVar4 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xea4) = uVar4;
        *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
        FUN_00a8caf0(0x10005,0,0,0);
        *(undefined4 *)(param_1 + 0xea0) = 0;
        FUN_00a962d0(0,0);
        *(undefined4 *)(param_1 + 0x139c) = 0;
        if (1.0471976 < *(float *)(param_1 + 0xa9c)) {
          uVar4 = FUN_00a8cab0();
          *(undefined4 *)(param_1 + 0xea4) = uVar4;
          *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
          FUN_00a8caf0(0x10006,0,0,0);
          *(undefined4 *)(param_1 + 0xea0) = 0;
          FUN_00a962d0(0,0);
          *(undefined4 *)(param_1 + 0x139c) = 0;
        }
        if (2.0943952 < *(float *)(param_1 + 0xa9c)) {
          uVar4 = FUN_00a8cab0();
          *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
          *(undefined4 *)(param_1 + 0xea4) = uVar4;
          FUN_00a8caf0(0x10008,0,0,0);
          *(undefined4 *)(param_1 + 0xea0) = 0;
          FUN_00a962d0(0,0);
          *(undefined4 *)(param_1 + 0x139c) = 0;
        }
        if (*(float *)(param_1 + 0xa9c) < -2.0943952) {
          uVar4 = FUN_00a8cab0();
          *(undefined4 *)(param_1 + 0xea4) = uVar4;
          *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
          FUN_00a8caf0(0x10007,0,0,0);
          *(undefined4 *)(param_1 + 0xea0) = 0;
          FUN_00a962d0(0,0);
          *(undefined4 *)(param_1 + 0x139c) = 0;
        }
      }
      if (*(float *)(param_1 + 0xa90) < 25.0) {
        uVar4 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xea4) = uVar4;
        *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
        FUN_00a8caf0(0x10003,4,0,0);
        *(undefined4 *)(param_1 + 0xea0) = 0;
        FUN_00a962d0(0,0);
        *(undefined4 *)(param_1 + 0x139c) = 0;
        sVar2 = FUN_00dde2d0(0,1);
        if (sVar2 != 0) {
          FUN_0077ed00();
          *(undefined4 *)(param_1 + 0x1c2c) = *(undefined4 *)(param_1 + 0xeb4);
          return;
        }
      }
      goto LAB_0078b537;
    }
    if (iVar3 != 2) goto LAB_0078b537;
    if ((*(int *)(param_1 + 0x1b74) == 0) && (9.0 < *(float *)(param_1 + 0xa90))) {
      uVar4 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xea4) = uVar4;
      *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
      FUN_00a8caf0(0x10010,0,0,0);
      *(undefined4 *)(param_1 + 0xea0) = 0;
      FUN_00a962d0(0,0);
      *(undefined4 *)(param_1 + 0x139c) = 0;
    }
    if (1.0471976 < *(float *)(param_1 + 0xaa0)) {
      uVar4 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xea4) = uVar4;
      *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
      FUN_00a8caf0(0x10005,0,0,0);
      *(undefined4 *)(param_1 + 0xea0) = 0;
      FUN_00a962d0(0,0);
      *(undefined4 *)(param_1 + 0x139c) = 0;
      if (1.0471976 < *(float *)(param_1 + 0xa9c)) {
        uVar4 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
        *(undefined4 *)(param_1 + 0xea4) = uVar4;
        FUN_00a8caf0(0x10006,0,0,0);
        *(undefined4 *)(param_1 + 0xea0) = 0;
        FUN_00a962d0(0,0);
        *(undefined4 *)(param_1 + 0x139c) = 0;
      }
      if (2.0943952 < *(float *)(param_1 + 0xa9c)) {
        uVar4 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xea4) = uVar4;
        *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
        FUN_00a8caf0(0x10008,0,0,0);
        *(undefined4 *)(param_1 + 0xea0) = 0;
        FUN_00a962d0(0,0);
        *(undefined4 *)(param_1 + 0x139c) = 0;
      }
      if (*(float *)(param_1 + 0xa9c) < -2.0943952) {
        uVar4 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xea4) = uVar4;
        *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
        FUN_00a8caf0(0x10007,0,0,0);
        *(undefined4 *)(param_1 + 0xea0) = 0;
        FUN_00a962d0(0,0);
        *(undefined4 *)(param_1 + 0x139c) = 0;
      }
    }
    fVar1 = *(float *)(param_1 + 0x1780);
    if (!NAN(fVar1) && 240.0 < fVar1 != (fVar1 == 240.0)) goto LAB_0078af4d;
    if (25.0 <= *(float *)(param_1 + 0xa90)) goto LAB_0078b537;
    uVar4 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xea4) = uVar4;
    *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
    FUN_00a8caf0(0x10003,4,0,0);
    *(undefined4 *)(param_1 + 0xea0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x139c) = 0;
    sVar2 = FUN_00dde2d0(0,1);
    if (sVar2 != 0) {
      FUN_0077ed00();
    }
    sVar2 = FUN_00dde2d0(0,1);
    if ((sVar2 != 0) && (9.0 < *(float *)(param_1 + 0xa90))) {
      uVar4 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xea4) = uVar4;
      *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
      FUN_00a8caf0(0x10010,0,0,0);
      *(undefined4 *)(param_1 + 0xea0) = 0;
      FUN_00a962d0(0,0);
      *(undefined4 *)(param_1 + 0x139c) = 0;
    }
    iVar3 = FUN_0077ab10();
    if (iVar3 == 0) goto LAB_0078b537;
LAB_0078b4e8:
    sVar2 = FUN_00dde2d0(0,1);
    if (sVar2 == 0) goto LAB_0078b537;
LAB_0078b4fa:
    uVar4 = FUN_00a8cab0();
    uVar5 = 0x50001;
    *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
  }
  *(undefined4 *)(param_1 + 0xea4) = uVar4;
  FUN_00a8caf0(uVar5,0,0,0);
  *(undefined4 *)(param_1 + 0xea0) = 0;
  FUN_00a962d0(0,0);
  *(undefined4 *)(param_1 + 0x139c) = 0;
LAB_0078b537:
  *(undefined4 *)(param_1 + 0x1c2c) = *(undefined4 *)(param_1 + 0xeb4);
  return;
}

// 0078B550  FUN_0078b550  size=1152  [callgraph]
void __fastcall FUN_0078b550(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x10,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x24f] = 0;
    param_1[0x24e] = 0x41c80000;
    if (param_1[0x3ad] != 0) {
      uVar5 = 0x3fe66666;
      uVar4 = 0;
      FUN_00a92f90(0,0x3fe66666);
      FUN_00407ab0(uVar4,uVar5);
    }
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 2:
    FUN_00aa4080(0x11,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    if (param_1[0x3ad] != 0) {
      uVar5 = 0x3fe66666;
      uVar4 = 0;
      FUN_00a92f90(0,0x3fe66666);
      FUN_00407ab0(uVar4,uVar5);
    }
    param_1[0x248] = 0;
  case 3:
    if ((float)param_1[0x244] * 0.1 * (float)param_1[0x244] * 0.1 <=
        ((float)param_1[0x25a] - (float)param_1[0x16]) *
        ((float)param_1[0x25a] - (float)param_1[0x16]) +
        ((float)param_1[600] - (float)param_1[0x14]) * ((float)param_1[600] - (float)param_1[0x14]))
    {
      param_1[0x24e] = 0x41c80000;
    }
    else {
      fVar1 = (float)param_1[0x24e];
      param_1[0x24e] = (int)(fVar1 - (float)param_1[0x244]);
      if (fVar1 - (float)param_1[0x244] <= 0.0) {
        iVar3 = FUN_00a8cab0();
        param_1[0x3a9] = iVar3;
        param_1[0x3aa] = param_1[0x3a8];
        FUN_00a8caf0(0x10010,0,0,0);
        param_1[0x3a8] = 0;
        FUN_00a962d0(0,0);
        param_1[0x4e7] = 0;
        break;
      }
    }
    param_1[600] = param_1[0x14];
    param_1[0x259] = param_1[0x15];
    param_1[0x25a] = param_1[0x16];
    param_1[0x25b] = param_1[0x17];
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (param_1[0x2a1] != 0) {
      (**(code **)(*param_1 + 0x308))(0x3e19999a,0x3ae4c388,0x3dd67750,0);
    }
    fVar1 = (float)param_1[0x5e0];
    if (!NAN(fVar1) && 360.0 < fVar1 != (fVar1 == 360.0)) {
      (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x3ae4c388,0x3e0efa35,0);
    }
    fVar1 = (float)param_1[0x5e0];
    if (((!NAN(fVar1) && 120.0 < fVar1 != (fVar1 == 120.0)) &&
        (fVar1 = (float)param_1[0x2a4], !NAN(fVar1) && 25.0 < fVar1 != (fVar1 == 25.0))) &&
       (param_1[0x3ad] == 0)) {
      param_1[0x3b0] = (int)((float)param_1[0x3b0] - (float)param_1[0x244]);
    }
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 + (float)param_1[0x244]);
    if ((120.0 < fVar1 + (float)param_1[0x244]) && (param_1[0x3ad] == 0)) {
      uVar5 = 0x3f99999a;
      uVar4 = 0;
      FUN_00a92f90(0,0x3f99999a);
      FUN_00407ab0(uVar4,uVar5);
      if (240.0 < (float)param_1[0x248]) {
        uVar5 = 0x3fb33333;
        uVar4 = 0;
        FUN_00a92f90(0,0x3fb33333);
        FUN_00407ab0(uVar4,uVar5);
      }
      if (360.0 < (float)param_1[0x248]) {
        uVar5 = 0x3fcccccd;
        uVar4 = 0;
        FUN_00a92f90(0,0x3fcccccd);
        FUN_00407ab0(uVar4,uVar5);
      }
    }
    break;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a8c760(0x30);
    if (iVar3 == 0) {
      iVar3 = FUN_00a8c760(0x31);
      if (iVar3 != 0) {
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
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      iVar3 = FUN_0078ac20();
      if ((iVar3 == 0) && (sVar2 = FUN_00dde2d0(0,1), sVar2 != 0)) {
        FUN_0077ed00();
      }
    }
  }
  if (0.0 < (float)param_1[0x248]) {
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
  }
  return;
}

// 0078B9F0  FUN_0078b9f0  size=721  [callgraph]
void __fastcall FUN_0078b9f0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int *piVar5;
  undefined1 local_160 [348];
  
  iVar1 = param_1[0x187];
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  if (iVar1 == 0) {
    FUN_00a8c9b0(0,0,0x3f800000,0);
    FUN_00eaa6e0(0x3f800000,0);
    FUN_00aa4080(0x97,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    uVar3 = 0;
    uVar2 = FUN_00a7c8a0(0);
    FUN_004039a0(6,uVar2,uVar3);
    puVar4 = local_160;
    uVar2 = FUN_00e00b40(0x2c060,puVar4);
    FUN_00a8c930(uVar2,puVar4);
    FUN_00e5e0c0("em0060_se_dmg_faint_spark",param_1,0xffffffff,0);
    FUN_0043f5b0(9,0x41200000);
    (**(code **)(*param_1 + 0x344))(5,0,1);
    FUN_00eaa6e0(0x41200000,0);
    FUN_00eaa6e0(0x41200000,0);
    FUN_00eaa6e0(0x41200000,0);
    FUN_00eaa6e0(0x41200000,0);
    iVar1 = FUN_00a81330();
    if ((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
      FUN_00a7c950();
      FUN_0075e4f0();
    }
  }
  else if (iVar1 != 1) {
    if (iVar1 != 2) {
      return;
    }
    iVar1 = thunk_FUN_00e58ed0(param_1[0x711]);
    if (iVar1 != 0) {
      return;
    }
    FUN_009fdde0();
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00a8c9b0(0,6,0x3f800000,0);
    piVar5 = param_1 + 0x580;
    uVar2 = FUN_00a7c8a0(piVar5);
    FUN_004117d0(7,uVar2,piVar5);
    puVar4 = local_160;
    uVar2 = FUN_00e00b40(0x2c060,puVar4);
    FUN_00a8c930(uVar2,puVar4);
    iVar1 = FUN_00e5e0c0("em0060_se_dmg_exp_death",param_1,0xffffffff,0);
    param_1[0x711] = iVar1;
    (**(code **)(*param_1 + 0x364))(0xffffffff);
    if (param_1[0x294] != 0) {
      FUN_00940450(param_1[0x20f]);
    }
    (**(code **)(*param_1 + 0x20))();
    if (((int *)param_1[0x1ec] != (int *)0x0) &&
       (iVar1 = (**(code **)(*(int *)param_1[0x1ec] + 8))(), iVar1 != 0)) {
      (**(code **)(*(int *)param_1[0x1ec] + 0xdc))(0);
    }
    FUN_00c4d1a0(param_1[0x13c],0);
    param_1[0x187] = param_1[0x187] + 1;
  }
  return;
}

// 0078BCD0  FUN_0078bcd0  size=96  [callgraph]
void __thiscall FUN_0078bcd0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 local_160 [324];
  undefined4 local_1c;
  
  uVar2 = 0;
  uVar1 = FUN_00a7c8a0(0);
  FUN_004039a0(param_2,uVar1,uVar2);
  local_1c = param_3;
  FUN_00e03080(*(undefined4 *)(param_1 + 0x4f0),0);
  FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
  return;
}

// 0078BD30  FUN_0078bd30  size=1287  [callgraph]
/* WARNING: Removing unreachable block (ram,0x0078bf61) */
/* WARNING: Removing unreachable block (ram,0x0078c0e4) */

void FUN_0078bd30(float param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  float unaff_ESI;
  float **ppfVar4;
  float **ppfVar5;
  float fVar6;
  float *pfVar7;
  float fVar8;
  float *pfStack_64;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  float local_4;
  
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0.0;
  pfStack_64 = (float *)0x78bd4f;
  pfStack_64 = (float *)FUN_00a1d5c0();
  FUN_0041c8e0(8);
  local_2c = *param_2;
  local_28 = param_2[1];
  local_24 = param_2[2];
  if (local_8 < local_c) {
    pfVar7 = (float *)(local_10 + local_8 * 0xc);
    if (pfVar7 != (float *)0x0) {
      *pfVar7 = local_2c;
      pfVar7[1] = local_28;
      pfVar7[2] = local_24;
    }
    local_8 = local_8 + 1;
  }
  local_44 = *param_3;
  local_40 = param_3[1];
  local_3c = param_3[2];
  local_20 = local_44 - local_2c;
  local_1c = local_40 - local_28;
  local_18 = local_3c - local_24;
  param_2 = (float *)(SQRT(local_18 * local_18 + local_20 * local_20 + local_1c * local_1c) *
                     0.33333334);
  if ((float)param_2 <= 6.0) {
    if ((float)param_2 < 3.0) {
      param_2 = (float *)0x40400000;
    }
  }
  else {
    param_2 = (float *)0x40c00000;
  }
  local_50 = (local_2c + local_44) * 0.5;
  local_4c = (local_40 + local_28) * 0.5;
  local_48 = (local_3c + local_24) * 0.5;
  if (local_40 < local_28) {
    local_4c = local_28 + (float)param_2;
  }
  if (local_28 < local_40) {
    if (local_40 + 5.0 < local_28) {
      param_2 = (float *)((float)param_2 * 0.5);
    }
    local_4c = (float)param_2 + local_40;
  }
  local_20 = local_20 * 0.16666667;
  local_1c = local_1c * 0.16666667;
  local_18 = local_18 * 0.16666667;
  local_38 = local_50 - local_20;
  local_34 = local_4c - local_1c;
  local_30 = local_48 - local_18;
  local_5c = local_38 - local_2c;
  local_58 = local_34 - local_28;
  local_54 = local_30 - local_24;
  fVar6 = local_54 * local_54 + local_5c * local_5c + local_58 * local_58;
  if (fVar6 < 0.0 != (fVar6 == 0.0)) {
    pfStack_64 = (float *)&DAT_0163d0ac;
    FUN_00dd5650();
    local_5c = 0.0;
    local_58 = 1.0;
    local_54 = 0.0;
  }
  pfVar7 = &local_5c;
  pfStack_64 = pfVar7;
  D3DXVec3Normalize();
  iVar2 = local_10;
  if (local_10 < local_14) {
    pfVar1 = (float *)((int)local_18 + local_10 * 0xc);
    if (pfVar1 != (float *)0x0) {
      *pfVar1 = (float)pfStack_64 * param_1 + local_34;
      pfVar1[1] = unaff_ESI * param_1 + local_30;
      pfVar1[2] = local_5c * param_1 + local_2c;
    }
    iVar2 = local_10 + 1;
    if (iVar2 < local_14) {
      pfVar1 = (float *)((int)local_18 + iVar2 * 0xc);
      if (pfVar1 != (float *)0x0) {
        *pfVar1 = local_40;
        pfVar1[1] = local_3c;
        pfVar1[2] = local_38;
      }
      iVar2 = local_10 + 2;
      if (iVar2 < local_14) {
        pfVar1 = (float *)((int)local_18 + iVar2 * 0xc);
        if (pfVar1 != (float *)0x0) {
          *pfVar1 = local_58;
          pfVar1[1] = local_54;
          pfVar1[2] = local_50;
        }
        iVar2 = local_10 + 3;
      }
    }
  }
  local_10 = iVar2;
  local_34 = local_28 + local_58;
  local_30 = local_24 + local_54;
  local_2c = local_20 + local_50;
  pfStack_64 = (float *)(local_4c - local_34);
  local_5c = local_44 - local_2c;
  fVar6 = local_5c * local_5c +
          (float)pfStack_64 * (float)pfStack_64 + (local_48 - local_30) * (local_48 - local_30);
  if (fVar6 < 0.0 != (fVar6 == 0.0)) {
    FUN_00dd5650(&DAT_0163d0ac);
    pfStack_64 = (float *)0x0;
    local_5c = 0.0;
  }
  ppfVar4 = &pfStack_64;
  ppfVar5 = ppfVar4;
  D3DXVec3Normalize(ppfVar4);
  fVar6 = (float)ppfVar5 * local_4;
  fVar8 = (float)pfVar7 * local_4;
  pfStack_64 = (float *)((float)pfStack_64 * local_4);
  fVar3 = local_18;
  if ((int)local_18 < (int)local_1c) {
    pfVar7 = (float *)((int)local_20 + (int)local_18 * 0xc);
    if (pfVar7 != (float *)0x0) {
      *pfVar7 = local_3c;
      pfVar7[1] = local_38;
      pfVar7[2] = local_34;
    }
    fVar3 = (float)((int)local_18 + 1);
    if ((int)fVar3 < (int)local_1c) {
      pfVar7 = (float *)((int)local_20 + (int)fVar3 * 0xc);
      if (pfVar7 != (float *)0x0) {
        *pfVar7 = local_54 - fVar6;
        pfVar7[1] = local_50 - fVar8;
        pfVar7[2] = local_4c - (float)pfStack_64;
      }
      fVar3 = (float)((int)local_18 + 2);
      if ((int)fVar3 < (int)local_1c) {
        pfVar7 = (float *)((int)local_20 + (int)fVar3 * 0xc);
        if (pfVar7 == (float *)0x0) {
          fVar3 = (float)((int)local_18 + 3);
        }
        else {
          *pfVar7 = local_54;
          pfVar7[1] = local_50;
          pfVar7[2] = local_4c;
          fVar3 = (float)((int)local_18 + 3);
        }
      }
    }
  }
  local_18 = fVar3;
  FUN_00a5e090(&local_24);
  if ((local_20 != 0.0) && (local_18 = 0.0, local_14 != 0)) {
    FUN_00dd48d0(local_20,0,ppfVar4,fVar6,fVar8);
  }
  return;
}

// 0078C240  FUN_0078c240  size=520  [callgraph]
void __thiscall
FUN_0078c240(int param_1,short *param_2,undefined4 *param_3,undefined4 *param_4,undefined4 param_5,
            int param_6)

{
  undefined1 *puVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 local_260;
  undefined4 local_25c;
  undefined4 local_258;
  undefined4 local_254;
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 local_248;
  undefined1 local_234 [4];
  uint local_230 [12];
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_190;
  undefined4 local_184;
  undefined4 local_180;
  undefined1 auStack_178 [288];
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  uVar3 = 0;
  pcVar7 = (char *)(param_1 + 0x178c);
  while ((*(int *)(pcVar7 + 4) != 0 || (*pcVar7 != '\0'))) {
    uVar3 = uVar3 + 1;
    pcVar7 = pcVar7 + 0x14;
    if (0xf < uVar3) {
      return;
    }
  }
  puVar1 = (undefined1 *)(param_1 + 0x178c + uVar3 * 0x14);
  if (puVar1 != (undefined1 *)0x0) {
    *(undefined4 *)(puVar1 + 8) = param_5;
    *puVar1 = 1;
    *(short **)(puVar1 + 0x10) = param_2;
    *(undefined4 *)(puVar1 + 0xc) = 0x3f800000;
    if (param_2 == (short *)0x0) {
      sVar2 = -1;
    }
    else {
      sVar2 = *param_2;
    }
    iVar4 = FUN_00a12210((int)sVar2);
    if (iVar4 != 0) {
      local_260 = *(undefined4 *)(iVar4 + 0x40);
      local_25c = *(undefined4 *)(iVar4 + 0x44);
      local_258 = *(undefined4 *)(iVar4 + 0x48);
      local_254 = *(undefined4 *)(iVar4 + 0x4c);
      local_250 = 0;
      local_24c = 0;
      local_248 = 0;
      FUN_0118f7b0();
      local_1a0 = 0x3f800000;
      uStack_1f8 = param_3[2];
      local_19c = 0x3ecccccd;
      local_200 = *param_3;
      local_198 = 0x3ecccccd;
      uStack_1fc = param_3[1];
      local_190 = 0x3f4ccccd;
      local_184 = 0x41a00000;
      local_180 = 0x42f00000;
      uStack_1e8 = param_4[2];
      uStack_1ec = param_4[1];
      uStack_1f4 = 0x3f800000;
      local_1f0 = *param_4;
      uStack_1e4 = 0x3f800000;
      iVar4 = FUN_009f8b40();
      local_230[0] = iVar4 << 0x10 | 0xb;
      piVar5 = (int *)FUN_00910da0();
      uVar10 = 1;
      uVar9 = 0x3e4ccccd;
      uVar6 = (**(code **)(*piVar5 + 8))(local_234,local_230,&local_260,&local_250,0x3e4ccccd,1);
      FUN_00910ab0(uVar6);
      FUN_00917bd0(*(undefined4 *)(puVar1 + 4),1);
      FUN_00917bd0(*(undefined4 *)(puVar1 + 4),2);
      if (param_6 != 0) {
        uVar8 = 0;
        uVar6 = FUN_00a7c8a0(0);
        FUN_004039a0(0xaa,uVar6,uVar8);
        uStack_58 = uVar9;
        uStack_54 = uVar10;
        FUN_00a8c930(0,auStack_178);
      }
    }
  }
  return;
}

// 0078C450  FUN_0078c450  size=534  [callgraph]
void __fastcall FUN_0078c450(int param_1)

{
  float fVar1;
  byte bVar2;
  byte *pbVar3;
  short sVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  float *pfVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  bool bVar13;
  float10 fVar14;
  int local_ac;
  int local_a4;
  int local_a0;
  undefined1 local_90 [64];
  undefined4 local_50 [19];
  
  local_ac = FUN_00ac89d0();
  if (local_ac == 0) {
    local_ac = param_1;
  }
  local_a4 = 0;
  pfVar10 = (float *)(param_1 + 0x1798);
  local_a0 = 0x10;
  do {
    if ((pfVar10[-2] != 0.0) || (*(char *)(pfVar10 + -3) != '\0')) {
      if (*(char *)(pfVar10 + -3) == '\x01') {
        *(undefined1 *)(pfVar10 + -3) = 2;
      }
      local_a4 = local_a4 + 1;
      if ((short *)pfVar10[1] == (short *)0x0) {
        sVar4 = -1;
      }
      else {
        sVar4 = *(short *)pfVar10[1];
      }
      iVar5 = FUN_00a12210((int)sVar4);
      if (iVar5 != 0) {
        *(ushort *)(iVar5 + 0xa2) = *(ushort *)(iVar5 + 0xa2) | 4;
        FUN_0091df60(local_90);
        FUN_01005140(local_50);
        puVar11 = local_50;
        puVar12 = (undefined4 *)(iVar5 + 0x10);
        for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar12 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar12 = puVar12 + 1;
        }
        iVar8 = FUN_00a8e520();
        if ((iVar8 == 0) && (iVar8 = FUN_00a8cbe0(0x50018), iVar8 == 0)) {
          fVar14 = (float10)FUN_00e049b0();
          fVar1 = pfVar10[-1];
          pfVar10[-1] = (float)((float10)fVar1 - fVar14);
          if ((float10)fVar1 - fVar14 <= (float10)0) {
            iVar8 = 0;
            if (0 < *(short *)(local_ac + 0x324)) {
              piVar6 = (int *)(*(int *)(local_ac + 800) + 0x60);
              do {
                pbVar9 = *(byte **)(*piVar6 + 0x40);
                pbVar3 = (byte *)pfVar10[1];
                if (pbVar9 != (byte *)0x0) {
                  do {
                    bVar2 = pbVar3[2];
                    bVar13 = bVar2 < *pbVar9;
                    if (bVar2 != *pbVar9) {
LAB_0078c5a4:
                      iVar7 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
                      goto LAB_0078c5a9;
                    }
                    if (bVar2 == 0) break;
                    bVar2 = pbVar3[3];
                    bVar13 = bVar2 < pbVar9[1];
                    if (bVar2 != pbVar9[1]) goto LAB_0078c5a4;
                    pbVar9 = pbVar9 + 2;
                    pbVar3 = pbVar3 + 2;
                  } while (bVar2 != 0);
                  iVar7 = 0;
LAB_0078c5a9:
                  if (iVar7 == 0) {
                    if ((iVar8 != -1) &&
                       (iVar8 = iVar8 * 0x70 + *(int *)(local_ac + 800), iVar8 != 0)) {
                      fVar14 = (float10)*pfVar10 - (float10)0.05;
                      *pfVar10 = (float)fVar14;
                      if (fVar14 <= (float10)0) {
                        *(uint *)(iVar8 + 0x38) = *(uint *)(iVar8 + 0x38) & 0xfffffffe;
                        if (pfVar10[-2] != 0.0) {
                          piVar6 = (int *)FUN_00910da0();
                          (**(code **)(*piVar6 + 0x2c))(pfVar10 + -2);
                        }
                        *(undefined2 *)(pfVar10 + -3) = 0;
                        pfVar10[1] = 0.0;
                        *(ushort *)(iVar5 + 0xa2) = *(ushort *)(iVar5 + 0xa2) & 0xfffb;
                      }
                      else {
                        *(float *)(iVar8 + 0x1c) = (float)fVar14;
                      }
                    }
                    break;
                  }
                }
                iVar8 = iVar8 + 1;
                piVar6 = piVar6 + 0x1c;
              } while (iVar8 < *(short *)(local_ac + 0x324));
            }
          }
        }
      }
    }
    pfVar10 = pfVar10 + 5;
    local_a0 = local_a0 + -1;
    if (local_a0 == 0) {
      if (local_a4 < 1) {
        *(uint *)(local_ac + 0x364) = *(uint *)(local_ac + 0x364) | 2;
        return;
      }
      *(uint *)(local_ac + 0x364) = *(uint *)(local_ac + 0x364) & 0xfffffffd;
      return;
    }
  } while( true );
}

// 0078C670  FUN_0078c670  size=116  [callgraph]
void __thiscall FUN_0078c670(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  code *pcVar2;
  
  cVar1 = (char)param_1[0x6d8];
  if (cVar1 < '\x03') {
    if ((cVar1 == '\x02') && (param_1[0x3e5] == 0)) {
      pcVar2 = *(code **)(*param_1 + 0x358);
      param_1[0x3e5] = 1;
      (*pcVar2)(400,param_1 + 0x3b8);
    }
    *(char *)(param_1 + 0x6d8) = (char)param_1[0x6d8] + '\x01';
    FUN_0078c240(&DAT_01882d48 + cVar1 * 0x22,param_2,param_3,param_4,1);
  }
  return;
}

// 0078C6F0  FUN_0078c6f0  size=116  [callgraph]
void __thiscall FUN_0078c6f0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  code *pcVar2;
  
  cVar1 = *(char *)((int)param_1 + 0x1b61);
  if (cVar1 < '\x03') {
    if ((cVar1 == '\x02') && (param_1[0x3e6] == 0)) {
      pcVar2 = *(code **)(*param_1 + 0x358);
      param_1[0x3e6] = 1;
      (*pcVar2)(0x191,param_1 + 0x3b8);
    }
    *(char *)((int)param_1 + 0x1b61) = *(char *)((int)param_1 + 0x1b61) + '\x01';
    FUN_0078c240(&DAT_01882db0 + cVar1 * 0x22,param_2,param_3,param_4,1);
  }
  return;
}

// 0078C770  FUN_0078c770  size=116  [callgraph]
void __thiscall FUN_0078c770(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  code *pcVar2;
  
  cVar1 = *(char *)((int)param_1 + 0x1b62);
  if (cVar1 < '\x03') {
    if ((cVar1 == '\x02') && (param_1[999] == 0)) {
      pcVar2 = *(code **)(*param_1 + 0x358);
      param_1[999] = 1;
      (*pcVar2)(0x192,param_1 + 0x3b8);
    }
    *(char *)((int)param_1 + 0x1b62) = *(char *)((int)param_1 + 0x1b62) + '\x01';
    FUN_0078c240(&DAT_01882e18 + cVar1 * 0x22,param_2,param_3,param_4,1);
  }
  return;
}

// 0078C7F0  FUN_0078c7f0  size=209  [callgraph]
void __thiscall FUN_0078c7f0(int *param_1,int param_2)

{
  if ((param_1[0x650] == 0) || (param_2 != 0)) {
    (**(code **)(*param_1 + 0x358))(0x193,param_1 + 0x3b8);
    param_1[0x3e4] = 1;
    FUN_00ac9420(param_1 + 0x652);
    param_1[0x650] = 1;
    FUN_00ac8d80(0,1);
    FUN_00ac8d80(1,1);
    FUN_00ac8d80(2,1);
    FUN_00ac8d80(3,1);
    FUN_00ac8d80(0xf,1);
    FUN_00ac8d80(0x10,1);
    FUN_00ac8d80(9,1);
    FUN_00ac8d80(4,1);
    if ((param_1[0xcc] != 0) && (*(int *)(param_1[0xcc] + 0xcc) == 0)) {
      FUN_0077f0b0();
    }
    param_1[0x669] = 0;
  }
  return;
}

// 0078C940  FUN_0078c940  size=885  [callgraph]
undefined4 __fastcall FUN_0078c940(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_4;
  
  local_4 = *(undefined4 *)(param_1 + 0x4f0);
  iVar2 = FUN_0078a100(&local_4);
  if (iVar2 == 1) {
    return 0;
  }
  if (((9.0 < *(float *)(param_1 + 0xa90)) && (*(float *)(param_1 + 0xa90) < 36.0)) &&
     (*(float *)(param_1 + 0xaa0) < 0.5235988)) {
    uVar3 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xea4) = uVar3;
    *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
    FUN_00a8caf0(0x50000,0,0,0);
    *(undefined4 *)(param_1 + 0xea0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x139c) = 0;
    if (*(float *)(param_1 + 0x177c) < 0.0) {
      sVar1 = FUN_00dde2d0(0,1);
      if ((sVar1 == 1) || (0xe < *(int *)(param_1 + 0xec4))) {
        FUN_00786100();
        *(undefined4 *)(param_1 + 0xec4) = 0;
      }
    }
    return 1;
  }
  if (*(float *)(param_1 + 0xa90) < 16.0) {
    uVar3 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xea4) = uVar3;
    *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
    FUN_00a8caf0(0x50002,0,0,0);
    *(undefined4 *)(param_1 + 0xea0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x139c) = 0;
    if (0.7853982 < *(float *)(param_1 + 0xaa0)) {
      uVar3 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
      *(undefined4 *)(param_1 + 0xea4) = uVar3;
      FUN_00a8caf0(0x50004,0,0,0);
      *(undefined4 *)(param_1 + 0xea0) = 0;
      FUN_00a962d0(0,0);
      *(undefined4 *)(param_1 + 0x139c) = 0;
      if (0.7853982 < *(float *)(param_1 + 0xa9c)) {
        uVar3 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xea4) = uVar3;
        *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
        FUN_00a8caf0(0x50005,0,0,0);
        *(undefined4 *)(param_1 + 0xea0) = 0;
        FUN_00a962d0(0,0);
        *(undefined4 *)(param_1 + 0x139c) = 0;
      }
      if (2.3561945 < *(float *)(param_1 + 0xaa0)) {
        uVar3 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xea4) = uVar3;
        *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
        FUN_00a8caf0(0x50006,0,0,0);
        *(undefined4 *)(param_1 + 0xea0) = 0;
        FUN_00a962d0(0,0);
        *(undefined4 *)(param_1 + 0x139c) = 0;
      }
      sVar1 = FUN_00dde2d0(0,3);
      if (sVar1 == 1) {
        uVar3 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
        *(undefined4 *)(param_1 + 0xea4) = uVar3;
        FUN_00a8caf0(0x50007,0,0,0);
        *(undefined4 *)(param_1 + 0xea0) = 0;
        FUN_00a962d0(0,0);
        *(undefined4 *)(param_1 + 0x139c) = 0;
      }
      if (*(float *)(param_1 + 0x177c) < 0.0) {
        sVar1 = FUN_00dde2d0(0,7);
        if ((sVar1 == 1) || (0xe < *(int *)(param_1 + 0xec4))) {
          FUN_00786070();
          *(undefined4 *)(param_1 + 0xec4) = 0;
          sVar1 = FUN_00dde2d0(0,1);
          if ((sVar1 == 1) && (*(float *)(param_1 + 0xaa0) < 0.7853982)) {
            FUN_00786100();
          }
        }
      }
    }
    if (((*(int *)(param_1 + 0xeb4) == 0) && (*(float *)(param_1 + 6000) < 0.0)) &&
       ((*(float *)(param_1 + 0xa90) < 16.0 && (*(float *)(param_1 + 0xaa0) < 2.0943952)))) {
      uVar3 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xea4) = uVar3;
      *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
      FUN_00a8caf0(0x10002,0,0,0);
      *(undefined4 *)(param_1 + 0xea0) = 0;
      FUN_00a962d0(0,0);
      *(undefined4 *)(param_1 + 0x139c) = 0;
    }
    return 1;
  }
  return 0;
}

// 0078CCC0  FUN_0078ccc0  size=121  [callgraph]
undefined4 __fastcall FUN_0078ccc0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_4;
  
  local_4 = *(undefined4 *)(param_1 + 0x4f0);
  iVar1 = FUN_0078a100(&local_4);
  if (iVar1 == 1) {
    return 0;
  }
  uVar2 = FUN_00a8cab0();
  *(undefined4 *)(param_1 + 0xea4) = uVar2;
  *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
  FUN_00a8caf0(0x50009,0,0,0);
  *(undefined4 *)(param_1 + 0xea0) = 0;
  FUN_00a962d0(0,0);
  *(undefined4 *)(param_1 + 0x139c) = 0;
  return 1;
}

// 0078CD40  FUN_0078cd40  size=174  [callgraph]
undefined4 __fastcall FUN_0078cd40(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_4;
  
  local_4 = *(undefined4 *)(param_1 + 0x4f0);
  iVar1 = FUN_0078a100(&local_4);
  if (iVar1 == 0) {
    local_4 = *(undefined4 *)(param_1 + 0x4f0);
    iVar1 = FUN_0078a100(&local_4);
    if (iVar1 != 1) {
      iVar1 = FUN_00782ca0(*(undefined4 *)(param_1 + 0x1acc));
      if (iVar1 != 0) {
        uVar2 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
        *(undefined4 *)(param_1 + 0xea4) = uVar2;
        FUN_00a8caf0(0x5000b,0,0,0);
        *(undefined4 *)(param_1 + 0xea0) = 0;
        FUN_00a962d0(0,0);
        *(undefined4 *)(param_1 + 0x139c) = 0;
        return 1;
      }
    }
  }
  return 0;
}

// 0078CDF0  FUN_0078cdf0  size=1017  [callgraph]
void __thiscall FUN_0078cdf0(int *param_1,undefined4 *param_2)

{
  code *pcVar1;
  float fVar2;
  int iVar3;
  int unaff_EBX;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  (**(code **)(*param_1 + 0x318))();
  *param_2 = 0;
  switch(param_1[0x508]) {
  case 0:
    FUN_00aa4080(0x1c,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x508] = param_1[0x508] + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x508] = param_1[0x508] + 1;
    }
    FUN_007791b0(param_1 + 0x504,0x3e99999a,0x3e32b8c2);
    return;
  case 2:
    (**(code **)(*param_1 + 0x1d4))(1);
    FUN_00aa4080(0x1d,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x508] = param_1[0x508] + 1;
    FUN_0078bd30(param_1 + 0x4e9,param_1 + 0x10,param_1 + 0x504);
    param_1[0x249] = 0;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00a581b0(&iStack_c,0,param_1[0x249]);
    fVar2 = (float)param_1[0x244] * 0.04 + (float)param_1[0x249];
    param_1[0x249] = (int)fVar2;
    if (!NAN(fVar2) && 1.0 < fVar2 != (fVar2 == 1.0)) {
      param_1[0x508] = param_1[0x508] + 1;
    }
    param_1[0x14] = iStack_c;
    param_1[0x15] = iStack_8;
    param_1[0x16] = iStack_4;
    FUN_007791b0(param_1 + 0x504,0x3e99999a,0x3e32b8c2);
    return;
  case 4:
    FUN_00aa4080(0x1e,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x508] = param_1[0x508] + 1;
    break;
  case 5:
    break;
  case 6:
    FUN_00aa4080(0x1e,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x508] = param_1[0x508] + 1;
    goto LAB_0078d106;
  case 7:
LAB_0078d106:
    (**(code **)(*param_1 + 0x314))();
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar3 == 0) {
      return;
    }
    param_1[0x508] = 8;
    return;
  case 8:
    (**(code **)(*param_1 + 0x314))();
    FUN_00aa4080(0x1f,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x508] = param_1[0x508] + 1;
    goto LAB_0078d19f;
  case 9:
LAB_0078d19f:
    (**(code **)(*param_1 + 0x314))();
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      (**(code **)(*param_1 + 0x314))();
      *param_2 = 1;
      return;
    }
  default:
    goto switchD_0078ce1c_default;
  }
  (**(code **)(*param_1 + 0x1d4))(1);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  FUN_00a581b0(&stack0xfffffff0,0,param_1[0x249]);
  param_1[0x14] = unaff_EBX;
  param_1[0x15] = iStack_c;
  param_1[0x16] = iStack_8;
  fVar2 = (float)param_1[0x244] * 0.044444446 + (float)param_1[0x249];
  param_1[0x249] = (int)fVar2;
  if (!NAN(fVar2) && 2.0 < fVar2 != (fVar2 == 2.0)) {
    param_1[0x249] = 0x40000000;
    pcVar1 = *(code **)(*param_1 + 0x314);
    param_1[0x508] = 6;
    (*pcVar1)();
    iVar3 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar3 != 0) {
      param_1[0x508] = 8;
      return;
    }
  }
switchD_0078ce1c_default:
  return;
}

// 0078D220  FUN_0078d220  size=598  [callgraph]
void __fastcall FUN_0078d220(int *param_1)

{
  float fVar1;
  int iVar2;
  
  switch(param_1[0x187]) {
  case 0:
    (**(code **)(*param_1 + 200))(1);
    FUN_00aa4080(0x88,0,0x3dcccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    (**(code **)(*param_1 + 0x1f8))(1);
    param_1[0x225] = 0x3d75c28f;
    param_1[0x289] = 0x41200000;
    param_1[0x288] = 1;
    FUN_00751fb0(1);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x42700000;
    goto LAB_0078d2cd;
  case 1:
LAB_0078d2cd:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 == 0) {
      iVar2 = (**(code **)(*param_1 + 800))(0x3d888889);
      if (iVar2 != 0) {
        FUN_00aa4120(0x2f,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        FUN_00769fa0(0,1);
        param_1[0x187] = 3;
      }
    }
    else {
      FUN_00aa4080(0x2e,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar2 != 0) {
      FUN_00aa4120(0x2f,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00769fa0(0,1);
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_0076a070(1,0);
      FUN_00766bf0();
    }
  }
  if ((float)param_1[0x248] <= 0.0) {
    return;
  }
  fVar1 = (float)param_1[0x248] - 1.0;
  param_1[0x248] = (int)fVar1;
  if (fVar1 < 0.0 == (fVar1 == 0.0)) {
    FUN_00786590(fVar1 * 0.016666668);
    return;
  }
  param_1[0x248] = 0;
  return;
}

// 0078D490  FUN_0078d490  size=738  [callgraph]
void __fastcall FUN_0078d490(int *param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  
  switch(param_1[0x187]) {
  case 0:
    (**(code **)(*param_1 + 200))(1);
    FUN_00aa4080(0x88,0,0x3dcccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    (**(code **)(*param_1 + 0x1f8))(1);
    param_1[0x225] = 0x3d75c28f;
    param_1[0x289] = 0x41200000;
    param_1[0x288] = 1;
    FUN_00751fb0(1);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x42700000;
    goto LAB_0078d53c;
  case 1:
LAB_0078d53c:
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_00aa4080(0x2e,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    break;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar2 != 0) {
      FUN_00aa4120(0x2f,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      if (param_1[0x574] < 3) {
        uVar3 = 0x2b;
      }
      else {
        uVar3 = 0x86;
      }
      FUN_00aa4080(uVar3,0,0x3ecccccd,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x248] = (int)((float)param_1[0x5a5] * 60.0);
    }
    break;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x248];
    if ((!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) &&
       (fVar1 = (float)param_1[0x248], param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]),
       fVar1 - (float)param_1[0x244] < 0.0)) {
      FUN_00769fa0(0,1);
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x248] = 0x42280000;
      param_1[0x139] = 1;
    }
    break;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] <= 0.0) {
      FUN_0076a070(1,0);
      FUN_00766bf0();
    }
  }
  if ((float)param_1[0x248] <= 0.0) {
    return;
  }
  fVar1 = (float)param_1[0x248] - 1.0;
  param_1[0x248] = (int)fVar1;
  if (fVar1 < 0.0 == (fVar1 == 0.0)) {
    FUN_00786590(fVar1 * 0.016666668);
    return;
  }
  param_1[0x248] = 0;
  return;
}

// 0078D790  Emc060::vf33C  size=147  [class]
void __fastcall Emc060::vf33C(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1940);
  if (iVar1 != 0) {
    if (((*(int *)(param_1 + 0x1950) != 0) && (*(int *)(param_1 + 0x1960) != 0)) &&
       (*(int *)(param_1 + 0x1970) != 0)) {
      FUN_00786800();
      return;
    }
    if (iVar1 != 0) {
      return;
    }
  }
  if ((*(int *)(param_1 + 0x1950) != 0) &&
     ((*(int *)(param_1 + 0x1960) != 0 || (*(int *)(param_1 + 0x1970) != 0)))) {
    FUN_00787ea0();
    return;
  }
  if (iVar1 == 0) {
    if (((*(int *)(param_1 + 0x1950) != 0) && (*(int *)(param_1 + 0x1960) == 0)) &&
       (*(int *)(param_1 + 0x1970) == 0)) {
      FUN_00787ea0();
      return;
    }
    if ((*(int *)(param_1 + 0x1950) == 0) &&
       ((*(int *)(param_1 + 0x1960) != 0 || (*(int *)(param_1 + 0x1970) != 0)))) {
      FUN_00788af0();
      return;
    }
  }
  return;
}

// 0078D830  FUN_0078d830  size=945  [between]
void __fastcall FUN_0078d830(int *param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined1 *puVar6;
  undefined1 local_160 [348];
  
  switch(param_1[0x187]) {
  case 0:
    param_1[0x187] = 1;
    FUN_00aa4080(0x79,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    uVar4 = 0;
    uVar2 = FUN_00a7c8a0(0);
    FUN_004039a0(6,uVar2,uVar4);
    puVar6 = local_160;
    uVar2 = FUN_00e00b40(0x2c060,puVar6);
    FUN_00a8c930(uVar2,puVar6);
    FUN_00e5e0c0("em0060_se_dmg_faint_spark",param_1,0xffffffff,0);
    FUN_00a8c9b0(0,0,0x3f800000,0);
    FUN_00eaa6e0(0x3f800000,0);
    FUN_0043f5b0(9,0x41200000);
    FUN_00777de0();
    FUN_00eaa6e0(0x41200000,0);
    FUN_00eaa6e0(0x41200000,0);
    FUN_00eaa6e0(0x41200000,0);
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 == 0) {
switchD_0078d850_default:
      return;
    }
    break;
  case 2:
    param_1[0x187] = 3;
    FUN_00aa4080(0x76,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x24f] = 0x43340000;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar3 == 0) {
      fVar1 = (float)param_1[0x24f];
      param_1[0x24f] = (int)(fVar1 - (float)param_1[0x244]);
      if ((0.0 < fVar1 - (float)param_1[0x244]) &&
         (iVar3 = (**(code **)(*param_1 + 0xdc))(), iVar3 != 0)) {
        return;
      }
      FUN_00a8caf0(0x8002a,0,0,0);
      param_1[0x3a8] = 0;
      FUN_00a962d0(0,0);
      param_1[0x4e7] = 0;
      return;
    }
    break;
  case 4:
    param_1[0x187] = 5;
    FUN_00aa4080(0x77,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 == 0) {
      return;
    }
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8c9b0(0,6,0x3f800000,0);
    piVar5 = param_1 + 0x580;
    uVar2 = FUN_00a7c8a0(piVar5);
    FUN_004117d0(7,uVar2,piVar5);
    puVar6 = local_160;
    uVar2 = FUN_00e00b40(0x2c060,puVar6);
    FUN_00a8c930(uVar2,puVar6);
    iVar3 = FUN_00e5e0c0("em0060_se_dmg_exp_death",param_1,0xffffffff,0);
    param_1[0x711] = iVar3;
    (**(code **)(*param_1 + 0x20))();
    (**(code **)(*param_1 + 0x364))(0xffffffff);
    if (((int *)param_1[0x1ec] != (int *)0x0) &&
       (iVar3 = (**(code **)(*(int *)param_1[0x1ec] + 8))(), iVar3 != 0)) {
      (**(code **)(*(int *)param_1[0x1ec] + 0xdc))(0);
    }
    FUN_00c4d1a0(param_1[0x13c],0);
    if (param_1[0x294] == 0) {
      return;
    }
    FUN_00940450(param_1[0x20f]);
    return;
  case 6:
    iVar3 = thunk_FUN_00e58ed0(param_1[0x711]);
    if (iVar3 == 0) {
      FUN_009fdde0();
      return;
    }
  default:
    goto switchD_0078d850_default;
  }
  param_1[0x187] = param_1[0x187] + 1;
  return;
}

// 0078DC00  Emc060::R0_ExplodeDie  size=887  [class]
void __fastcall Emc060::R0_ExplodeDie(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  float10 fVar4;
  undefined1 *puVar5;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_188;
  float local_184;
  undefined4 uStack_180;
  undefined4 uStack_174;
  float fStack_170;
  undefined4 uStack_16c;
  undefined1 local_160 [348];
  
  iVar1 = param_1[0x187];
  if (iVar1 == 0) {
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_00a8c9b0(0,0,0x3f800000,0);
      FUN_00eaa6e0(0x3f800000,0);
      if (param_1[0x294] != 0) {
        piVar3 = param_1 + 0x580;
        uVar2 = FUN_00a7c8a0(piVar3);
        FUN_004117d0(7,uVar2,piVar3);
        puVar5 = local_160;
        uVar2 = FUN_00e00b40(0x2c060,puVar5);
        FUN_00a8c930(uVar2,puVar5);
        param_1[0x1af] = 1;
        iVar1 = FUN_00e5e0c0("em0060_se_dmg_exp_death",param_1,0xffffffff,0);
        param_1[0x711] = iVar1;
      }
      (**(code **)(*param_1 + 0x20))();
      FUN_00c4d1a0(param_1[0x13c],0);
      if (param_1[0x294] != 0) {
        FUN_00940450(param_1[0x20f]);
      }
      (**(code **)(*param_1 + 0x364))(0xffffffff);
      param_1[0x187] = param_1[0x187] + 1;
      if (param_1[0x294] == 0) {
        param_1[0x187] = 2;
      }
      if (param_1[0x6fd] != 0) {
        iVar1 = FUN_00a81330();
        if (iVar1 == 0) {
          FUN_00dd5650(&DAT_01647cd8);
          FUN_00785ef0();
          iVar1 = FUN_00a81330();
          if (iVar1 != 0) {
            piVar3 = (int *)FUN_00a7c8a0();
            if (piVar3 != (int *)0x0) {
              piVar3[0x1bb] = 1;
              FUN_00a8caf0(0x60,0,0,0);
              iVar1 = FUN_00a12210(0x3d);
              uStack_1a4 = *(undefined4 *)(iVar1 + 0x40);
              uStack_1a0 = *(undefined4 *)(iVar1 + 0x44);
              uStack_19c = *(undefined4 *)(iVar1 + 0x48);
              uStack_198 = *(undefined4 *)(iVar1 + 0x4c);
              iVar1 = FUN_00a12210(0xffffffff);
              fVar4 = (float10)FUN_00ddbaa0(-(*(float *)(iVar1 + 0x18) /
                                             SQRT(*(float *)(iVar1 + 0x38) *
                                                  *(float *)(iVar1 + 0x38) +
                                                  *(float *)(iVar1 + 0x34) *
                                                  *(float *)(iVar1 + 0x34) +
                                                  *(float *)(iVar1 + 0x30) *
                                                  *(float *)(iVar1 + 0x30))));
              uStack_174 = 0;
              uStack_16c = 0;
              fStack_170 = (float)fVar4;
              (**(code **)(*piVar3 + 0x7c))(&uStack_1a4,&uStack_174);
              FUN_00a7c950();
            }
          }
        }
        else {
          piVar3 = (int *)FUN_00a7c8a0();
          if (piVar3 != (int *)0x0) {
            (**(code **)(*piVar3 + 0xf8))(0);
            (**(code **)(*piVar3 + 0x1c))();
            piVar3[0x1bb] = 1;
            FUN_00a8caf0(0x60,0,0,0);
            iVar1 = FUN_00a12210(0x3d);
            uStack_1a4 = *(undefined4 *)(iVar1 + 0x44);
            uStack_1a0 = *(undefined4 *)(iVar1 + 0x48);
            uStack_19c = *(undefined4 *)(iVar1 + 0x4c);
            iVar1 = FUN_00a12210(0xffffffff);
            fVar4 = (float10)FUN_00ddbaa0(-(*(float *)(iVar1 + 0x18) /
                                           SQRT(*(float *)(iVar1 + 0x38) * *(float *)(iVar1 + 0x38)
                                                + *(float *)(iVar1 + 0x34) *
                                                  *(float *)(iVar1 + 0x34) +
                                                  *(float *)(iVar1 + 0x30) *
                                                  *(float *)(iVar1 + 0x30))));
            uStack_188 = 0;
            uStack_180 = 0;
            local_184 = (float)fVar4;
            (**(code **)(*piVar3 + 0x7c))(&stack0xfffffe58,&uStack_188);
            FUN_00a7c950();
            return;
          }
        }
      }
    }
  }
  else if (iVar1 == 1) {
    iVar1 = thunk_FUN_00e58ed0(param_1[0x711]);
    if (iVar1 == 0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
  }
  else if (iVar1 == 2) {
    fVar4 = (float10)FUN_00ac8f80();
    if (fVar4 - (float10)0.011111111 < (float10)0) {
      local_184 = (float)(float10)0;
      FUN_009fdde0();
      FUN_00ac8fd0(local_184);
      return;
    }
    FUN_00ac8fd0((float)(fVar4 - (float10)0.011111111));
    return;
  }
  return;
}

// 0078DF80  FUN_0078df80  size=71  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0078df80(int param_1)

{
  if ((*(int *)(*(int *)(param_1 + 0x78) + 4) != 0) && (*(int *)(*(int *)(param_1 + 0x78) + 8) != 0)
     ) {
    FUN_0078a1b0();
    FUN_00782210();
    FUN_007823f0();
    FUN_0078a280();
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(float *)(param_1 + 0xa0) = *(float *)(param_1 + 0xa0) - _DAT_01be942c;
  }
  return;
}

// 0078DFD0  FUN_0078dfd0  size=153  [callgraph]
undefined4 __fastcall FUN_0078dfd0(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_4;
  
  local_4 = *(undefined4 *)(param_1 + 0x4f0);
  iVar2 = FUN_0078a100(&local_4);
  if ((iVar2 == 1) && (*(float *)(param_1 + 0x1c1c) <= 0.0)) {
    sVar1 = FUN_00dde2d0(0,100);
    if (sVar1 == 0) {
      uVar3 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xea4) = uVar3;
      *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
      FUN_00a8caf0(0x10009,0,0,0);
      *(undefined4 *)(param_1 + 0xea0) = 0;
      FUN_00a962d0(0,0);
      *(undefined4 *)(param_1 + 0x139c) = 0;
      return 1;
    }
  }
  return 0;
}

// 0078E070  FUN_0078e070  size=1931  [callgraph]
/* WARNING: Removing unreachable block (ram,0x0078e484) */
/* WARNING: Removing unreachable block (ram,0x0078e35c) */
/* WARNING: Removing unreachable block (ram,0x0078e420) */
/* WARNING: Removing unreachable block (ram,0x0078e57d) */

undefined4 __fastcall FUN_0078e070(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint local_4;
  
  local_4 = *(uint *)(param_1 + 0x4f0);
  iVar2 = FUN_0078a100(&local_4);
  if (iVar2 == 1) {
    fVar1 = *(float *)(param_1 + 0xaa0);
    if (!NAN(fVar1) && 0.6981317 < fVar1 != (fVar1 == 0.6981317)) {
      if (0.6981317 < *(float *)(param_1 + 0xa9c)) {
        iVar6 = 0x10006;
        if (*(int *)(param_1 + 0xe98) != 0x10006) {
LAB_0078e68a:
          *(int *)(param_1 + 0xe98) = iVar6;
          uVar4 = FUN_00a8cab0();
          *(undefined4 *)(param_1 + 0xea4) = uVar4;
          *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
          goto LAB_0078e142;
        }
        goto LAB_0078e71d;
      }
      if (2.0943952 < *(float *)(param_1 + 0xa9c)) {
        iVar2 = 0x10008;
        if (*(int *)(param_1 + 0xe98) == 0x10008) goto LAB_0078e71d;
        goto LAB_0078e22a;
      }
      if (-2.0943952 <= *(float *)(param_1 + 0xa9c)) {
        iVar6 = 0x10005;
        if (*(int *)(param_1 + 0xe98) != 0x10005) goto LAB_0078e68a;
        iVar2 = 0x10001;
        goto LAB_0078e22a;
      }
      iVar2 = 0x10007;
      if (*(int *)(param_1 + 0xe98) == 0x10007) goto LAB_0078e71d;
LAB_0078e302:
      *(int *)(param_1 + 0xe98) = iVar2;
      uVar4 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xea4) = uVar4;
      *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
      iVar6 = iVar2;
      goto LAB_0078e142;
    }
LAB_0078e71d:
    fVar1 = *(float *)(param_1 + 0x1c1c);
    if (((!NAN(fVar1) && 120.0 < fVar1 != (fVar1 == 120.0)) && (*(int *)(param_1 + 0xa84) != 0)) &&
       (iVar2 = FUN_00783020(), iVar2 != 0)) {
      return 1;
    }
    if (*(float *)(param_1 + 0xa90) <= 225.0) {
      if (100.0 <= *(float *)(param_1 + 0xa90)) {
        return 0;
      }
      iVar2 = 0x10002;
LAB_0078e7e7:
      if (*(int *)(param_1 + 0xe98) == iVar2) {
        return 0;
      }
    }
    else {
      if ((((*(uint *)(param_1 + 0xd44) & 0x2000000) == 0) && (iVar2 = FUN_00aa4a90(), iVar2 != 0))
         && (iVar2 = 0xa0001, *(int *)(param_1 + 0xe98) != 0xa0001)) {
LAB_0078e50e:
        *(int *)(param_1 + 0xe98) = iVar2;
        uVar4 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xea4) = uVar4;
        *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
        iVar6 = iVar2;
        goto LAB_0078e142;
      }
      if (*(float *)(param_1 + 0xa90) <= 625.0) {
        iVar2 = 0xa0002;
        if (*(int *)(param_1 + 0xe98) != 0xa0002) goto LAB_0078e50e;
        iVar2 = 0xa0003;
LAB_0078e60b:
        *(int *)(param_1 + 0xe98) = iVar2;
        uVar4 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xea4) = uVar4;
        *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
        iVar6 = iVar2;
        goto LAB_0078e142;
      }
      iVar2 = 0xa0003;
      if (*(int *)(param_1 + 0xe98) != 0xa0003) goto LAB_0078e60b;
      iVar2 = 0xa0002;
    }
LAB_0078e4d6:
    *(int *)(param_1 + 0xe98) = iVar2;
    uVar4 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xea4) = uVar4;
    *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
    iVar6 = iVar2;
  }
  else {
    if (iVar2 != 2) {
      if (iVar2 != 4) {
        return 0;
      }
      FUN_0078ac40(1);
      return 0;
    }
    iVar6 = 0x10004;
    fVar1 = *(float *)(param_1 + 0x1780);
    iVar2 = 0x10003;
    if (((NAN(fVar1) || 120.0 < fVar1 == (fVar1 == 120.0)) || (*(float *)(param_1 + 0xa90) <= 36.0))
       || (0.5235988 <= *(float *)(param_1 + 0xaa0))) {
LAB_0078e175:
      fVar1 = *(float *)(param_1 + 0x1780);
      if (((NAN(fVar1) || 60.0 < fVar1 == (fVar1 == 60.0)) || (*(float *)(param_1 + 0xa90) <= 225.0)
          ) || (1.0471976 <= *(float *)(param_1 + 0xaa0))) {
LAB_0078e1f3:
        fVar1 = *(float *)(param_1 + 0xaa0);
        if (NAN(fVar1) || 0.7853982 < fVar1 == (fVar1 == 0.7853982)) {
LAB_0078e333:
          iVar2 = 0x10003;
          DAT_01dd0814 = DAT_01dd0814 * 0x19660d + 0x3c6ef35f;
          local_4 = DAT_01dd0814 >> 8;
          fVar1 = (1.0 - (float)local_4 * 5.960465e-08 * 2.0) + 5.0;
          if (fVar1 * fVar1 < *(float *)(param_1 + 0xa90)) {
            if ((((*(uint *)(param_1 + 0xd44) & 0x2000000) == 0) &&
                (iVar3 = FUN_00aa4a90(), iVar3 != 0)) && (*(int *)(param_1 + 0xe98) != 0x10004)) {
              *(undefined4 *)(param_1 + 0xe98) = 0x10004;
              uVar4 = FUN_00a8cab0();
              *(undefined4 *)(param_1 + 0xea4) = uVar4;
              *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
              goto LAB_0078e142;
            }
            if (*(int *)(param_1 + 0xe98) != 0x10003) goto LAB_0078e302;
          }
          DAT_01dd0814 = DAT_01dd0814 * 0x19660d + 0x3c6ef35f;
          local_4 = DAT_01dd0814 >> 8;
          fVar1 = (1.0 - (float)local_4 * 5.960465e-08 * 2.0) + 4.0;
          if ((*(float *)(param_1 + 0xa90) <= fVar1 * fVar1) ||
             (iVar2 = 0x10001, *(int *)(param_1 + 0xe98) == 0x10001)) {
            DAT_01dd0814 = DAT_01dd0814 * 0x19660d + 0x3c6ef35f;
            local_4 = DAT_01dd0814 >> 8;
            iVar2 = 0x1000d;
            fVar1 = (1.0 - (float)local_4 * 5.960465e-08 * 2.0) + 4.0;
            if (*(float *)(param_1 + 0xa90) < fVar1 * fVar1) {
              uVar5 = FUN_00dde2d0(1,100);
              if (((uVar5 & 1) == 0) || (*(int *)(param_1 + 0x1b7c) == 0)) {
                if (*(int *)(param_1 + 0x1b80) == 0) {
                  if ((*(int *)(param_1 + 0x1b7c) != 0) && (*(int *)(param_1 + 0xe98) != 0x1000d))
                  goto LAB_0078e60b;
                }
                else if (*(int *)(param_1 + 0xe98) != 0x1000d) goto LAB_0078e50e;
              }
              else if (*(int *)(param_1 + 0xe98) != 0x1000d) goto LAB_0078e4d6;
            }
            DAT_01dd0814 = DAT_01dd0814 * 0x19660d + 0x3c6ef35f;
            local_4 = DAT_01dd0814 >> 8;
            fVar1 = (1.0 - (float)local_4 * 5.960465e-08 * 2.0) + 3.0;
            if (fVar1 * fVar1 <= *(float *)(param_1 + 0xa90)) {
              return 0;
            }
            if ((*(int *)(param_1 + 0x1b78) != 0) &&
               (iVar6 = 0x1000f, *(int *)(param_1 + 0xe98) != 0x1000f)) {
              *(undefined4 *)(param_1 + 0xe98) = 0x1000f;
              uVar4 = FUN_00a8cab0();
              *(undefined4 *)(param_1 + 0xea4) = uVar4;
              *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
              goto LAB_0078e142;
            }
            uVar5 = FUN_00dde2d0(1,100);
            if (((uVar5 & 1) == 0) || (*(int *)(param_1 + 0x1b7c) == 0)) {
              if (*(int *)(param_1 + 0x1b80) != 0) {
                if (*(int *)(param_1 + 0xe98) == 0x1000d) {
                  return 0;
                }
                goto LAB_0078e60b;
              }
              if (*(int *)(param_1 + 0x1b7c) != 0) goto LAB_0078e7e7;
              iVar2 = 0x10002;
            }
            if (*(int *)(param_1 + 0xe98) == iVar2) {
              return 0;
            }
            goto LAB_0078e50e;
          }
        }
        else {
          if (*(float *)(param_1 + 0xa9c) <= 0.7853982) {
            if (*(float *)(param_1 + 0xa9c) <= 2.0943952) {
              if (-2.0943952 <= *(float *)(param_1 + 0xa9c)) {
                iVar2 = 0x10005;
                if (*(int *)(param_1 + 0xe98) == 0x10005) {
                  iVar2 = 0x10001;
                  goto LAB_0078e302;
                }
                goto LAB_0078e22a;
              }
              iVar2 = 0x10007;
              if (*(int *)(param_1 + 0xe98) != 0x10007) goto LAB_0078e2c0;
            }
            else if (*(int *)(param_1 + 0xe98) != 0x10008) {
              *(undefined4 *)(param_1 + 0xe98) = 0x10008;
              uVar4 = FUN_00a8cab0();
              *(undefined4 *)(param_1 + 0xea4) = uVar4;
              *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
              iVar6 = 0x10008;
              goto LAB_0078e142;
            }
            goto LAB_0078e333;
          }
          iVar2 = 0x10006;
          if (*(int *)(param_1 + 0xe98) == 0x10006) goto LAB_0078e333;
        }
LAB_0078e22a:
        *(int *)(param_1 + 0xe98) = iVar2;
        uVar4 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xea4) = uVar4;
        *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
        iVar6 = iVar2;
        goto LAB_0078e142;
      }
      if ((((*(uint *)(param_1 + 0xd44) & 0x2000000) != 0) || (iVar3 = FUN_00aa4a90(), iVar3 == 0))
         || (*(int *)(param_1 + 0xe98) == 0x10004)) {
        if (*(int *)(param_1 + 0xe98) == 0x10003) goto LAB_0078e1f3;
LAB_0078e2c0:
        *(int *)(param_1 + 0xe98) = iVar2;
        uVar4 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xea4) = uVar4;
        *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
        iVar6 = iVar2;
        goto LAB_0078e142;
      }
      *(undefined4 *)(param_1 + 0xe98) = 0x10004;
      uVar4 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
    }
    else {
      if ((((*(uint *)(param_1 + 0xd44) & 0x2000000) != 0) || (iVar3 = FUN_00aa4a90(), iVar3 == 0))
         || (*(int *)(param_1 + 0xe98) == 0x10004)) {
        if (*(int *)(param_1 + 0xe98) != 0x10003) goto LAB_0078e22a;
        goto LAB_0078e175;
      }
      *(undefined4 *)(param_1 + 0xe98) = 0x10004;
      uVar4 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
    }
    *(undefined4 *)(param_1 + 0xea4) = uVar4;
  }
LAB_0078e142:
  FUN_00a8caf0(iVar6,0,0,0);
  *(undefined4 *)(param_1 + 0xea0) = 0;
  FUN_00a962d0(0,0);
  *(undefined4 *)(param_1 + 0x139c) = 0;
  return 1;
}

// 0078E800  FUN_0078e800  size=592  [callgraph]
undefined4 __fastcall FUN_0078e800(int param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 local_4;
  
  local_4 = *(undefined4 *)(param_1 + 0x4f0);
  iVar2 = FUN_0078a100(&local_4);
  if (((iVar2 == 1) || (iVar2 != 2)) || (25.0 <= *(float *)(param_1 + 0xa90))) {
    return 0;
  }
  if ((*(int *)(param_1 + 0xeb4) == 0) && (uVar3 = FUN_00dde2d0(1,100), (uVar3 & 3) == 0)) {
    return 0;
  }
  if (*(float *)(param_1 + 0xaa0) <= 0.7853982) {
    sVar1 = FUN_00dde2d0(0,4);
    iVar2 = (int)sVar1;
    if ((*(int *)(&DAT_01647d1c + iVar2 * 4) == 0x5000d) &&
       (iVar5 = FUN_00782ca0(*(undefined4 *)(param_1 + 0x1acc)), iVar5 == 0)) {
      sVar1 = FUN_00dde2d0(0,3);
      iVar2 = (int)sVar1;
    }
    iVar2 = FUN_00782ec0(*(undefined4 *)(&DAT_01647d1c + iVar2 * 4));
    if (iVar2 != 0) {
      return 1;
    }
    return 0;
  }
  sVar1 = FUN_00dde2d0(0,1);
  if ((sVar1 == 0) || (uVar6 = 0x50007, *(int *)(param_1 + 0xe94) == 0x50007)) {
    if ((0.7853982 < *(float *)(param_1 + 0xa9c)) &&
       (uVar6 = 0x50005, *(int *)(param_1 + 0xe94) != 0x50005)) {
      *(undefined4 *)(param_1 + 0xe94) = 0x50005;
      FUN_00c27260(0x40a00000);
      FUN_00c272a0(0x40a00000);
      uVar4 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xea4) = uVar4;
      *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
      goto LAB_0078e9c7;
    }
    if ((*(float *)(param_1 + 0xaa0) <= 2.3561945) ||
       (uVar6 = 0x50006, *(int *)(param_1 + 0xe94) == 0x50006)) {
      uVar6 = 0x50004;
      if (*(int *)(param_1 + 0xe94) == 0x50004) {
        return 0;
      }
      goto LAB_0078e980;
    }
    *(undefined4 *)(param_1 + 0xe94) = 0x50006;
    FUN_00c27260(0x40a00000);
    FUN_00c272a0(0x40a00000);
    uVar4 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
  }
  else {
LAB_0078e980:
    *(undefined4 *)(param_1 + 0xe94) = uVar6;
    FUN_00c27260(0x40a00000);
    FUN_00c272a0(0x40a00000);
    uVar4 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
  }
  *(undefined4 *)(param_1 + 0xea4) = uVar4;
LAB_0078e9c7:
  FUN_00a8caf0(uVar6,0,0,0);
  *(undefined4 *)(param_1 + 0xea0) = 0;
  FUN_00a962d0(0,0);
  *(undefined4 *)(param_1 + 0x139c) = 0;
  return 1;
}

// 0078EA50  FUN_0078ea50  size=941  [callgraph]
undefined4 __fastcall FUN_0078ea50(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float10 fVar5;
  float local_4;
  
  local_4 = *(float *)(param_1 + 0x4f0);
  iVar1 = FUN_0078a100(&local_4);
  if (iVar1 == 1) {
    if (0.0 < *(float *)(param_1 + 0x1c1c)) {
      return 0;
    }
    iVar1 = FUN_00ac4780();
    if (iVar1 < 2) {
      return 0;
    }
    uVar2 = FUN_00dde2d0(1,100);
    if (((uVar2 & 1) != 0) && (iVar1 = FUN_00782ca0(*(undefined4 *)(param_1 + 0x1acc)), iVar1 != 0))
    {
      uVar4 = 0x5000b;
      if (*(int *)(param_1 + 0xe94) == 0x5000b) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0xe94) = 0x5000b;
      FUN_00c27260(0x40a00000);
      FUN_00c272a0(0x40a00000);
      uVar3 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xea4) = uVar3;
      *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
      goto LAB_0078eb84;
    }
    if (*(int *)(param_1 + 0x4a0) != 1) goto LAB_0078ecd4;
    uVar4 = 0x50009;
    if (*(int *)(param_1 + 0xe94) == 0x50009) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0xe94) = 0x50009;
    FUN_00c27260(0x40a00000);
    FUN_00c272a0(0x40a00000);
    uVar3 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
  }
  else {
    if (iVar1 != 2) {
      return 0;
    }
    if (0.0 < *(float *)(param_1 + 0x1c1c)) {
      return 0;
    }
    local_4 = 0.8;
    if (*(int *)(param_1 + 0x4a0) == 1) {
      local_4 = 0.5;
    }
    if ((((0.0 < *(float *)(param_1 + 0xec8)) || (64.0 <= *(float *)(param_1 + 0xa90))) ||
        (fVar5 = (float10)FUN_00dde300(0,0x3f800000), (float10)local_4 <= fVar5)) ||
       (iVar1 = FUN_00782ca0(*(undefined4 *)(param_1 + 0x1acc)), iVar1 == 0)) {
LAB_0078ec2e:
      if (*(float *)(param_1 + 0xa90) <= 4.0) {
        return 0;
      }
      if (*(int *)(param_1 + 0x4a0) == 1) {
        if (*(int *)(param_1 + 0xe94) == 0x50009) {
          return 0;
        }
        *(undefined4 *)(param_1 + 0xe94) = 0x50009;
        FUN_00c27260(0x40a00000);
        FUN_00c272a0(0x40a00000);
        uVar4 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
        *(undefined4 *)(param_1 + 0xea4) = uVar4;
        FUN_00a8caf0(0x50009,0,0,0);
        *(undefined4 *)(param_1 + 0xea0) = 0;
        FUN_00a962d0(0,0);
        *(undefined4 *)(param_1 + 0x139c) = 0;
        return 1;
      }
LAB_0078ecd4:
      uVar4 = 0x50008;
      if (*(int *)(param_1 + 0xe94) == 0x50008) {
        return 0;
      }
    }
    else {
      uVar2 = FUN_00dde2d0(1,100);
      if ((uVar2 & 1) == 0) {
        if (*(int *)(param_1 + 0xe94) != 0x5000e) {
          *(undefined4 *)(param_1 + 0xe94) = 0x5000e;
          FUN_00c27260(0x40a00000);
          FUN_00c272a0(0x40a00000);
          uVar4 = FUN_00a8cab0();
          *(undefined4 *)(param_1 + 0xea4) = uVar4;
          *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
          FUN_00a8caf0(0x5000e,0,0,0);
          *(undefined4 *)(param_1 + 0xea0) = 0;
          FUN_00a962d0(0,0);
          *(undefined4 *)(param_1 + 0x139c) = 0;
          return 1;
        }
        goto LAB_0078ec2e;
      }
      uVar4 = 0x5000c;
      if (*(int *)(param_1 + 0xe94) == 0x5000c) goto LAB_0078ec2e;
    }
    *(undefined4 *)(param_1 + 0xe94) = uVar4;
    FUN_00c27260(0x40a00000);
    FUN_00c272a0(0x40a00000);
    uVar3 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
  }
  *(undefined4 *)(param_1 + 0xea4) = uVar3;
LAB_0078eb84:
  FUN_00a8caf0(uVar4,0,0,0);
  *(undefined4 *)(param_1 + 0xea0) = 0;
  FUN_00a962d0(0,0);
  *(undefined4 *)(param_1 + 0x139c) = 0;
  return 1;
}

// 0078EE00  FUN_0078ee00  size=118  [callgraph]
undefined4 __fastcall FUN_0078ee00(int param_1)

{
  int iVar1;
  undefined4 local_4;
  
  local_4 = *(undefined4 *)(param_1 + 0x4f0);
  iVar1 = FUN_0078a100(&local_4);
  if (iVar1 != 2) {
    return 0;
  }
  if (((float)*(int *)(param_1 + 0x1b50) <=
       *(float *)(param_1 + 0x1a50 + *(int *)(param_1 + 0xeb4) * 4)) &&
     ((float)*(int *)(param_1 + 0x1b54) <=
      *(float *)(param_1 + 0x1a58 + *(int *)(param_1 + 0xeb4) * 4))) {
    iVar1 = FUN_0078e800();
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x1b50) = *(int *)(param_1 + 0x1b50) + 1;
      return 1;
    }
  }
  return 0;
}

// 0078EE80  FUN_0078ee80  size=75  [callgraph]
undefined4 __fastcall FUN_0078ee80(int param_1)

{
  int iVar1;
  
  if (((float)*(int *)(param_1 + 0x1b50) <=
       *(float *)(param_1 + 0x1a50 + *(int *)(param_1 + 0xeb4) * 4)) &&
     ((float)*(int *)(param_1 + 0x1b54) <=
      *(float *)(param_1 + 0x1a58 + *(int *)(param_1 + 0xeb4) * 4))) {
    iVar1 = FUN_0078e070();
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x1b54) = *(int *)(param_1 + 0x1b54) + 1;
      return 1;
    }
  }
  return 0;
}

// 0078EED0  FUN_0078eed0  size=1072  [callgraph]
void __fastcall FUN_0078eed0(int param_1)

{
  int iVar1;
  float10 fVar2;
  int local_4;
  
  local_4 = param_1;
  if (0.0 < *(float *)(param_1 + 0x1b20)) {
    fVar2 = (float10)FUN_00e049b0();
    fVar2 = (float10)*(float *)(param_1 + 0x1b20) - fVar2;
    *(float *)(param_1 + 0x1b20) = (float)fVar2;
    if ((float10)0 < fVar2) {
      if (*(int *)(param_1 + 0x1b04) <= *(int *)(param_1 + 0x19e0 + *(int *)(param_1 + 0xeb4) * 4))
      goto LAB_0078ef37;
      *(undefined4 *)(param_1 + 0x1ae8) = 1;
    }
    else {
      *(float *)(param_1 + 0x1b20) = (float)(float10)0;
    }
    *(undefined4 *)(param_1 + 0x1b04) = 0;
  }
LAB_0078ef37:
  if (0.0 < *(float *)(param_1 + 0x1b4c)) {
    fVar2 = (float10)FUN_00e049b0();
    fVar2 = (float10)*(float *)(param_1 + 0x1b4c) - fVar2;
    *(float *)(param_1 + 0x1b4c) = (float)fVar2;
    if (fVar2 <= (float10)0) {
      *(float *)(param_1 + 0x1b4c) = (float)(float10)0;
    }
  }
  if (0.0 < *(float *)(param_1 + 0x1b24)) {
    fVar2 = (float10)FUN_00e049b0();
    fVar2 = (float10)*(float *)(param_1 + 0x1b24) - fVar2;
    *(float *)(param_1 + 0x1b24) = (float)fVar2;
    if ((float10)0 < fVar2) {
      if (*(int *)(param_1 + 0x1b08) <= *(int *)(param_1 + 0x19f0 + *(int *)(param_1 + 0xeb4) * 4))
      goto LAB_0078efca;
      *(undefined4 *)(param_1 + 0x1aec) = 1;
    }
    else {
      *(float *)(param_1 + 0x1b24) = (float)(float10)0;
    }
    *(undefined4 *)(param_1 + 0x1b08) = 0;
  }
LAB_0078efca:
  if (0.0 < *(float *)(param_1 + 0x1b28)) {
    fVar2 = (float10)FUN_00e049b0();
    fVar2 = (float10)*(float *)(param_1 + 0x1b28) - fVar2;
    *(float *)(param_1 + 0x1b28) = (float)fVar2;
    if ((float10)0 < fVar2) {
      if (*(int *)(param_1 + 0x1b0c) <= *(int *)(param_1 + 0x19d0)) goto LAB_0078f01e;
      *(undefined4 *)(param_1 + 0x1af0) = 1;
    }
    else {
      *(float *)(param_1 + 0x1b28) = (float)(float10)0;
    }
    *(undefined4 *)(param_1 + 0x1b0c) = 0;
  }
LAB_0078f01e:
  if (0.0 < *(float *)(param_1 + 0x1b2c)) {
    fVar2 = (float10)FUN_00e049b0();
    fVar2 = (float10)*(float *)(param_1 + 0x1b2c) - fVar2;
    *(float *)(param_1 + 0x1b2c) = (float)fVar2;
    if ((float10)0 < fVar2) {
      if (*(int *)(param_1 + 0x1b10) <= *(int *)(param_1 + 0x1a00 + *(int *)(param_1 + 0xeb4) * 4))
      goto LAB_0078f079;
      *(undefined4 *)(param_1 + 0x1af4) = 1;
    }
    else {
      *(float *)(param_1 + 0x1b2c) = (float)(float10)0;
    }
    *(undefined4 *)(param_1 + 0x1b10) = 0;
  }
LAB_0078f079:
  if (0.0 < *(float *)(param_1 + 0x1b30)) {
    fVar2 = (float10)FUN_00e049b0();
    fVar2 = (float10)*(float *)(param_1 + 0x1b30) - fVar2;
    *(float *)(param_1 + 0x1b30) = (float)fVar2;
    if ((float10)0 < fVar2) {
      if (*(int *)(param_1 + 0x1b14) <= *(int *)(param_1 + 0x1a10 + *(int *)(param_1 + 0xeb4) * 4))
      goto LAB_0078f0d4;
      *(undefined4 *)(param_1 + 0x1af8) = 1;
    }
    else {
      *(float *)(param_1 + 0x1b30) = (float)(float10)0;
    }
    *(undefined4 *)(param_1 + 0x1b14) = 0;
  }
LAB_0078f0d4:
  if (0.0 < *(float *)(param_1 + 0x1b34)) {
    fVar2 = (float10)FUN_00e049b0();
    fVar2 = (float10)*(float *)(param_1 + 0x1b34) - fVar2;
    *(float *)(param_1 + 0x1b34) = (float)fVar2;
    if ((float10)0 < fVar2) {
      if (*(int *)(param_1 + 0x1b18) <= *(int *)(param_1 + 0x1a20 + *(int *)(param_1 + 0xeb4) * 4))
      goto LAB_0078f12f;
      *(undefined4 *)(param_1 + 0x1afc) = 1;
    }
    else {
      *(float *)(param_1 + 0x1b34) = (float)(float10)0;
    }
    *(undefined4 *)(param_1 + 0x1b18) = 0;
  }
LAB_0078f12f:
  if (0.0 < *(float *)(param_1 + 0x1b38)) {
    fVar2 = (float10)FUN_00e049b0();
    fVar2 = (float10)*(float *)(param_1 + 0x1b38) - fVar2;
    *(float *)(param_1 + 0x1b38) = (float)fVar2;
    if ((float10)0 < fVar2) {
      if (*(int *)(param_1 + 0x1b1c) <= *(int *)(param_1 + 0x1a30 + *(int *)(param_1 + 0xeb4) * 4))
      goto LAB_0078f18a;
      *(undefined4 *)(param_1 + 0x1b00) = 1;
    }
    else {
      *(float *)(param_1 + 0x1b38) = (float)(float10)0;
    }
    *(undefined4 *)(param_1 + 0x1b1c) = 0;
  }
LAB_0078f18a:
  if (0.0 < *(float *)(param_1 + 0x1b3c)) {
    fVar2 = (float10)FUN_00e049b0();
    fVar2 = (float10)*(float *)(param_1 + 0x1b3c) - fVar2;
    *(float *)(param_1 + 0x1b3c) = (float)fVar2;
    if (fVar2 <= (float10)0) {
      *(float *)(param_1 + 0x1b3c) = (float)(float10)0;
    }
  }
  if (0.0 < *(float *)(param_1 + 0x1b44)) {
    fVar2 = (float10)FUN_00e049b0();
    fVar2 = (float10)*(float *)(param_1 + 0x1b44) - fVar2;
    *(float *)(param_1 + 0x1b44) = (float)fVar2;
    if ((float10)0 < fVar2) {
      if (*(int *)(param_1 + 0x1b48) <= *(int *)(param_1 + 0x1a68 + *(int *)(param_1 + 0xeb4) * 4))
      goto LAB_0078f21d;
      *(undefined4 *)(param_1 + 0x1b40) = 1;
    }
    else {
      *(float *)(param_1 + 0x1b44) = (float)(float10)0;
    }
    *(undefined4 *)(param_1 + 0x1b48) = 0;
  }
LAB_0078f21d:
  if (*(int *)(param_1 + 0x1adc) != 0) {
    return;
  }
  if (*(int *)(param_1 + 0x1ad8) != 0) {
    return;
  }
  if (*(float *)(param_1 + 0x19dc) <= *(float *)(param_1 + 0x1ae4)) {
    return;
  }
  fVar2 = (float10)FUN_00e049b0();
  local_4 = *(int *)(param_1 + 0x4f0);
  *(float *)(param_1 + 0x1ae4) = (float)(fVar2 + (float10)*(float *)(param_1 + 0x1ae4));
  iVar1 = FUN_0078a100(&local_4);
  if (iVar1 != 2) {
    local_4 = *(int *)(param_1 + 0x4f0);
    iVar1 = FUN_0078a0a0(&local_4);
    if (((iVar1 != 0xb) && (iVar1 = FUN_0078ac90(), iVar1 != 2)) && (*(int *)(param_1 + 0xeb4) == 0)
       ) goto LAB_0078f2ba;
  }
  *(undefined4 *)(param_1 + 0x1ae4) = 0;
LAB_0078f2ba:
  if (*(float *)(param_1 + 0x19dc) < *(float *)(param_1 + 0x1ae4)) {
    *(undefined4 *)(param_1 + 0x1ae4) = 0;
    *(undefined4 *)(param_1 + 0x1adc) = 1;
    if (*(int *)(param_1 + 0x19d8) < *(int *)(param_1 + 0x1ae0)) {
      *(undefined4 *)(param_1 + 0x1adc) = 0;
      *(undefined4 *)(param_1 + 0x1ad8) = 1;
      *(undefined4 *)(param_1 + 0x1ae0) = 0;
    }
  }
  return;
}

// 0078F300  FUN_0078f300  size=607  [callgraph]
void __fastcall FUN_0078f300(int *param_1)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  short sVar4;
  int iVar5;
  int *piStack_4;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  piStack_4 = param_1;
  if (param_1[0x187] == 0) {
    param_1[0x50f] = param_1[0x50f] ^ 0x8000000;
    FUN_00aa4080(0x33,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
    param_1[0x5da] = 0;
    FUN_00a8d280();
  }
  else if (param_1[0x187] != 1) goto LAB_0078f3ee;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar5 = FUN_00a94ce0(0);
  if (iVar5 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    sVar4 = FUN_00dde2d0(1,2);
    piStack_4 = (int *)(int)sVar4;
    param_1[0x5dd] = (int)((float)(int)piStack_4 * 60.0);
    if (param_1[0x3ad] != 0) {
      param_1[0x5dd] = 0x41f00000;
    }
    param_1[0x5dd] = (int)((float)param_1[0x5dd] * 0.3);
  }
LAB_0078f3ee:
  iVar5 = FUN_00a8c760(0);
  if ((iVar5 != 0) && (iVar5 = (**(code **)(*(int *)param_1[0x2a1] + 0x228))(), iVar5 != 0)) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3db2b8c2,0);
  }
  if ((((param_1[0x2a1] != 0) && (iVar5 = FUN_00a8c760(10), iVar5 != 0)) &&
      (iVar5 = (**(code **)(*(int *)param_1[0x2a1] + 0x228))(), iVar5 != 0)) &&
     (((float)param_1[0x2a8] < 1.5707964 && (iVar5 = FUN_00a12210(0xf00), iVar5 != 0)))) {
    fVar1 = *(float *)(param_1[0x2a1] + 0x48);
    fVar2 = *(float *)(iVar5 + 0x48);
    pcVar3 = *(code **)(*param_1 + 0x308);
    param_1[0x14] =
         (int)((*(float *)(param_1[0x2a1] + 0x40) - *(float *)(iVar5 + 0x40)) * 0.1 +
              (float)param_1[0x14]);
    param_1[0x16] = (int)((fVar1 - fVar2) * 0.1 + (float)param_1[0x16]);
    (*pcVar3)(0x3e99999a,0x393702d3,0x3c0efa35,0);
  }
  iVar5 = FUN_00a8c760(4);
  if ((iVar5 != 0) && (param_1[0x3ad] != 0)) {
    piStack_4 = (int *)param_1[0x13c];
    iVar5 = FUN_0078a100(&piStack_4);
    if (iVar5 == 0) {
      sVar4 = FUN_00dde2d0(0,2);
      if (sVar4 != 0) {
        FUN_0077ed00();
      }
      sVar4 = FUN_00dde2d0(0,1);
      if (sVar4 != 0) {
        FUN_0078c940();
        return;
      }
    }
  }
  return;
}

// 0078F560  FUN_0078f560  size=1050  [callgraph]
void __fastcall FUN_0078f560(int *param_1)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  short sVar4;
  int iVar5;
  int *piStack_4;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  piStack_4 = param_1;
  if (param_1[0x187] == 0) {
    param_1[0x50f] = param_1[0x50f] ^ 0x8000000;
    FUN_00aa4080(0x34,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
    param_1[0x5da] = 0;
    FUN_00a8d280();
  }
  else if (param_1[0x187] != 1) goto LAB_0078f587;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar5 = FUN_00a94ce0(0);
  if (iVar5 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    sVar4 = FUN_00dde2d0(1,2);
    param_1[0x5dd] = (int)((float)(int)sVar4 * 60.0);
    if (param_1[0x3ad] != 0) {
      param_1[0x5dd] = 0x41f00000;
    }
    piStack_4 = (int *)param_1[0x13c];
    param_1[0x5dd] = (int)((float)param_1[0x5dd] * 0.3);
    iVar5 = FUN_0078a100(&piStack_4);
    if ((iVar5 == 0) && ((float)param_1[0x2a4] < 9.0)) {
      iVar5 = FUN_00a8cab0();
      param_1[0x3a9] = iVar5;
      param_1[0x3aa] = param_1[0x3a8];
      FUN_00a8caf0(0x50002,0,0,0);
      param_1[0x3a8] = 0;
      FUN_00a962d0(0,0);
      param_1[0x4e7] = 0;
      if ((float)param_1[0x2a8] <= 1.0471976) {
        return;
      }
      iVar5 = FUN_00a8cab0();
      param_1[0x3aa] = param_1[0x3a8];
      param_1[0x3a9] = iVar5;
      FUN_00a8caf0(0x50004,0,0,0);
      param_1[0x3a8] = 0;
      FUN_00a962d0(0,0);
      param_1[0x4e7] = 0;
      if (1.0471976 < (float)param_1[0x2a7]) {
        iVar5 = FUN_00a8cab0();
        param_1[0x3a9] = iVar5;
        param_1[0x3aa] = param_1[0x3a8];
        FUN_00a8caf0(0x50005,0,0,0);
        param_1[0x3a8] = 0;
        FUN_00a962d0(0,0);
        param_1[0x4e7] = 0;
      }
      if (2.0943952 < (float)param_1[0x2a8]) {
        iVar5 = FUN_00a8cab0();
        param_1[0x3a9] = iVar5;
        param_1[0x3aa] = param_1[0x3a8];
        FUN_00a8caf0(0x50006,0,0,0);
        param_1[0x3a8] = 0;
        FUN_00a962d0(0,0);
        param_1[0x4e7] = 0;
      }
      sVar4 = FUN_00dde2d0(0,3);
      if (sVar4 != 1) {
        return;
      }
      iVar5 = FUN_00a8cab0();
      param_1[0x3aa] = param_1[0x3a8];
      param_1[0x3a9] = iVar5;
      FUN_00a8caf0(0x50007,0,0,0);
      param_1[0x3a8] = 0;
      FUN_00a962d0(0,0);
      param_1[0x4e7] = 0;
      return;
    }
  }
LAB_0078f587:
  iVar5 = FUN_00a8c760(0);
  if (iVar5 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3eb2b8c2,0);
  }
  if ((((param_1[0x2a1] != 0) && (iVar5 = FUN_00a8c760(10), iVar5 != 0)) &&
      (iVar5 = (**(code **)(*(int *)param_1[0x2a1] + 0x228))(), iVar5 != 0)) &&
     (((float)param_1[0x2a8] < 1.5707964 && (iVar5 = FUN_00a12210(0xf00), iVar5 != 0)))) {
    fVar1 = *(float *)(param_1[0x2a1] + 0x48);
    fVar2 = *(float *)(iVar5 + 0x48);
    pcVar3 = *(code **)(*param_1 + 0x308);
    param_1[0x14] =
         (int)((float)param_1[0x14] +
              (*(float *)(param_1[0x2a1] + 0x40) - *(float *)(iVar5 + 0x40)) * 0.01);
    param_1[0x16] = (int)((fVar1 - fVar2) * 0.01 + (float)param_1[0x16]);
    (*pcVar3)(0x3f000000,0x393702d3,0x3e32b8c2,0);
  }
  piStack_4 = (int *)param_1[0x13c];
  iVar5 = FUN_0078a100(&piStack_4);
  if (((iVar5 == 0) && (iVar5 = FUN_00a8c760(4), iVar5 != 0)) && (param_1[0x3ad] != 0)) {
    sVar4 = FUN_00dde2d0(0,2);
    if (sVar4 != 0) {
      FUN_0077ed00();
    }
    sVar4 = FUN_00dde2d0(0,1);
    if (sVar4 != 0) {
      FUN_0078c940();
      return;
    }
  }
  return;
}

// 0078F980  FUN_0078f980  size=529  [callgraph]
void __fastcall FUN_0078f980(int *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int *local_4;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  local_4 = param_1;
  if (param_1[0x187] == 0) {
    param_1[0x50f] = param_1[0x50f] ^ 0x8000000;
    FUN_00aa4080(0x36,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
    param_1[0x5da] = 0;
    FUN_00a8d280();
  }
  else if (param_1[0x187] != 1) goto LAB_0078fade;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    sVar1 = FUN_00dde2d0(1,2);
    local_4 = (int *)(int)sVar1;
    param_1[0x5dd] = (int)((float)(int)local_4 * 60.0);
    if (param_1[0x3ad] != 0) {
      param_1[0x5dd] = 0x41f00000;
    }
    param_1[0x5dd] = (int)((float)param_1[0x5dd] * 0.3);
  }
  iVar2 = FUN_00a8c760(10);
  if ((iVar2 != 0) && (param_1[0x5da] != 0)) {
    if (param_1[0x3ad] == 0) {
      iVar2 = FUN_00a8cab0();
      param_1[0x3aa] = param_1[0x3a8];
      uVar3 = 0xf0001;
    }
    else {
      iVar2 = FUN_00a8cab0();
      param_1[0x3aa] = param_1[0x3a8];
      uVar3 = 0x50003;
    }
    param_1[0x3a9] = iVar2;
    FUN_00a8caf0(uVar3,0,0,0);
    param_1[0x3a8] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4e7] = 0;
  }
LAB_0078fade:
  iVar2 = FUN_00a8c760(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3db2b8c2,0);
  }
  local_4 = (int *)param_1[0x13c];
  iVar2 = FUN_0078a100(&local_4);
  if ((((iVar2 == 0) && (param_1[0x5da] == 0)) && (iVar2 = FUN_00a8c760(4), iVar2 != 0)) &&
     (param_1[0x3ad] != 0)) {
    sVar1 = FUN_00dde2d0(0,2);
    if (sVar1 != 0) {
      FUN_0077ed00();
    }
    sVar1 = FUN_00dde2d0(0,1);
    if (sVar1 != 0) {
      FUN_0078c940();
      return;
    }
  }
  return;
}

// 0078FBA0  FUN_0078fba0  size=500  [callgraph]
void __fastcall FUN_0078fba0(int *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_8;
  int local_4;
  
  local_8 = 0x40490fdb;
  iVar2 = param_1[0x186];
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  if (iVar2 == 0x50005) {
    local_8 = 0xbfc90fdb;
  }
  if (iVar2 == 0x50004) {
    local_8 = 0x3fc90fdb;
  }
  if (param_1[0x187] == 0) {
    uVar3 = 0x3a;
    if (iVar2 == 0x50005) {
      uVar3 = 0x39;
    }
    if (iVar2 == 0x50004) {
      uVar3 = 0x38;
    }
    FUN_00aa4080(uVar3,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
    param_1[0x5da] = 0;
  }
  else if (param_1[0x187] != 1) goto LAB_0078fccf;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    sVar1 = FUN_00dde2d0(1,2);
    local_4 = (int)sVar1;
    param_1[0x5dd] = (int)((float)local_4 * 60.0);
    if (param_1[0x3ad] != 0) {
      param_1[0x5dd] = 0x41f00000;
    }
    param_1[0x5dd] = (int)((float)param_1[0x5dd] * 0.3);
  }
LAB_0078fccf:
  iVar2 = FUN_00a8c760(0);
  if ((iVar2 != 0) && (iVar2 = (**(code **)(*(int *)param_1[0x2a1] + 0x228))(), iVar2 != 0)) {
    (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3e8efa35,local_8);
  }
  local_4 = param_1[0x13c];
  iVar2 = FUN_0078a100(&local_4);
  if (((iVar2 == 0) && (iVar2 = FUN_00a8c760(4), iVar2 != 0)) && (param_1[0x3ad] != 0)) {
    sVar1 = FUN_00dde2d0(0,2);
    if (sVar1 != 0) {
      FUN_0077ed00();
    }
    sVar1 = FUN_00dde2d0(0,1);
    if (sVar1 != 0) {
      FUN_0078c940();
      return;
    }
  }
  return;
}

// 0078FDA0  FUN_0078fda0  size=1659  [callgraph]
void __fastcall FUN_0078fda0(int *param_1)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  short sVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iStack_34;
  float local_30;
  float local_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x1c,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    pcVar1 = *(code **)(*param_1 + 0x318);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar1)();
    FUN_00781b20(&fStack_20,param_1[0x13c]);
    local_30 = fStack_20 - (float)param_1[0x10];
    local_28 = fStack_18 - (float)param_1[0x12];
    fStack_24 = fStack_14 - (float)param_1[0x13];
    local_2c = 0.0;
    fVar2 = local_30 * local_30 + local_28 * local_28;
    if (fVar2 < 0.0 == (fVar2 == 0.0)) {
      FUN_00ddf460(&local_30,&local_30);
      fVar2 = local_28;
      fVar3 = local_2c;
      fVar4 = local_30;
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      fVar2 = 0.0;
      fVar3 = 1.0;
      fVar4 = 0.0;
    }
    param_1[0x504] = (int)(fStack_20 + fVar4 * 2.5);
    param_1[0x505] = (int)(fStack_1c + fVar3 * 2.5);
    param_1[0x506] = (int)(fStack_18 + fVar2 * 2.5);
    param_1[0x507] = (int)(fStack_24 * 2.5 + fStack_14);
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar6 = FUN_00a94ce0(0);
    if (iVar6 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    FUN_00a8e880(param_1 + 0x504);
    FUN_00781fe0(param_1[0x13c],0x3e99999a,0x393702d3,0x3e8efa35,0);
    return;
  case 2:
    (**(code **)(*param_1 + 0x1d4))(1);
    FUN_00aa4080(0x1d,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00781b20(&fStack_20,param_1[0x13c]);
    local_30 = fStack_20 - (float)param_1[0x10];
    local_28 = fStack_18 - (float)param_1[0x12];
    fStack_24 = fStack_14 - (float)param_1[0x13];
    local_2c = 0.0;
    fVar2 = local_30 * local_30 + local_28 * local_28;
    if (fVar2 < 0.0 == (fVar2 == 0.0)) {
      FUN_00ddf460(&local_30,&local_30);
      fVar2 = local_28;
      fVar3 = local_2c;
      fVar4 = local_30;
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      fVar2 = 0.0;
      fVar4 = 0.0;
      fVar3 = 1.0;
    }
    param_1[0x504] = (int)(fStack_20 + fVar4 * 2.5);
    param_1[0x505] = (int)(fStack_1c + fVar3 * 2.5);
    param_1[0x506] = (int)(fStack_18 + fVar2 * 2.5);
    param_1[0x507] = (int)(fStack_24 * 2.5 + fStack_14);
    FUN_0078bd30(param_1 + 0x4e9,param_1 + 0x10,param_1 + 0x504);
    param_1[0x249] = 0;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00a581b0(&local_30,0,param_1[0x249]);
    fVar2 = (float)param_1[0x244] * 0.057142857 + (float)param_1[0x249];
    param_1[0x249] = (int)fVar2;
    if (!NAN(fVar2) && 1.0 < fVar2 != (fVar2 == 1.0)) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    param_1[0x14] = (int)local_30;
    param_1[0x15] = (int)local_2c;
    param_1[0x16] = (int)local_28;
    FUN_00a8e880(param_1 + 0x504);
    FUN_00781fe0(param_1[0x13c],0x3dcccccd,0x393702d3,0x3d8efa35,0);
    return;
  case 4:
    FUN_00aa4080(0x1e,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_007901a7;
  case 5:
LAB_007901a7:
    (**(code **)(*param_1 + 0x1d4))(1);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00a581b0(&iStack_34,0,param_1[0x249]);
    param_1[0x14] = iStack_34;
    param_1[0x15] = (int)local_30;
    param_1[0x16] = (int)local_2c;
    fVar2 = (float)param_1[0x244] * 0.08 + (float)param_1[0x249];
    param_1[0x249] = (int)fVar2;
    if (!NAN(fVar2) && 2.0 < fVar2 != (fVar2 == 2.0)) {
      param_1[0x249] = 0x40000000;
      (**(code **)(*param_1 + 0x314))();
      pcVar1 = *(code **)(*param_1 + 800);
      param_1[0x187] = 6;
      iVar6 = (*pcVar1)(0x3d888889);
      if (iVar6 != 0) {
        param_1[0x187] = 8;
        return;
      }
    }
    break;
  case 6:
    FUN_00aa4080(0x1e,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 7:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar6 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar6 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 8:
    FUN_00aa4080(0x1f,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 9:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar6 = FUN_00a94ce0(0);
    if (iVar6 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 10:
    uVar12 = 0x3f800000;
    uVar11 = 0xbf800000;
    uVar10 = 0x8000000;
    uVar9 = 0x3f800000;
    uVar8 = 0x3e2aaaab;
    uVar7 = 0;
    sVar5 = FUN_00dde2d0(0,1);
    FUN_00aa4080(0x19 - (uint)(sVar5 != 0),uVar7,uVar8,uVar9,uVar10,uVar11,uVar12);
    param_1[0x187] = param_1[0x187] + 1;
  case 0xb:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar6 = FUN_00a94ce0(0);
    if (iVar6 != 0) {
      (**(code **)(*param_1 + 0x34c))();
    }
    iVar6 = FUN_00a8c760(0);
    if (iVar6 != 0) {
      (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3e567750,0);
      return;
    }
  }
  return;
}

// 00790470  FUN_00790470  size=1388  [callgraph]
void __fastcall FUN_00790470(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00a8d330(param_1 + 0x10,param_1[0x2a1] + 0x40);
    FUN_00aa4080(0x10,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x24f] = 0x41c80000;
  case 1:
    iVar3 = FUN_00a979f0(&local_4c);
    if (iVar3 != 0) {
      local_40 = local_4c;
      local_3c = local_48;
      local_38 = local_44;
      local_34 = 0x3f800000;
      FUN_007791b0(&local_40,0x3e800000,0x3dd67750);
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00aa09c0(param_1[0x2a1] + 0x40,0x40200000,1);
    if ((iVar3 == 0) || (iVar3 = FUN_00a8d380(), iVar3 == 0)) {
      iVar3 = FUN_00a94ce0(0);
      if (iVar3 != 0) {
        FUN_00aa4080(0x11,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
        param_1[600] = param_1[0x14];
        param_1[0x259] = param_1[0x15];
        param_1[0x25a] = param_1[0x16];
        param_1[0x25b] = param_1[0x17];
        param_1[0x187] = param_1[0x187] + 1;
        return;
      }
    }
    else if (param_1[0x3a6] != 0x10003) {
      param_1[0x3a6] = 0x10003;
      iVar3 = FUN_00a8cab0();
      param_1[0x3a9] = iVar3;
      param_1[0x3aa] = param_1[0x3a8];
LAB_007905b1:
      FUN_00a8caf0(0x10003,0,0,0);
      param_1[0x3a8] = 0;
      FUN_00a962d0(0,0);
      param_1[0x4e7] = 0;
      return;
    }
    break;
  case 2:
    if ((float)param_1[0x244] * 0.1 * (float)param_1[0x244] * 0.1 <=
        ((float)param_1[600] - (float)param_1[0x14]) * ((float)param_1[600] - (float)param_1[0x14])
        + ((float)param_1[0x25a] - (float)param_1[0x16]) *
          ((float)param_1[0x25a] - (float)param_1[0x16])) {
      param_1[0x24f] = 0x41c80000;
    }
    else {
      fVar1 = (float)param_1[0x24f];
      param_1[0x24f] = (int)(fVar1 - (float)param_1[0x244]);
      if (fVar1 - (float)param_1[0x244] <= 0.0) {
        FUN_00a979f0(&local_4c);
        goto LAB_007906b7;
      }
    }
    param_1[600] = param_1[0x14];
    param_1[0x259] = param_1[0x15];
    param_1[0x25a] = param_1[0x16];
    param_1[0x25b] = param_1[0x17];
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a979f0(&local_4c);
    if (iVar3 != 0) {
      local_20 = local_4c;
      local_1c = local_48;
      local_18 = local_44;
      local_14 = 0x3f800000;
      FUN_007791b0(&local_20,0x3e99999a,0x3e32b8c2);
    }
    local_50 = 0x3fa00000;
    iVar3 = FUN_00a8d3d0(5);
    if ((((iVar3 != 0) || (iVar3 = FUN_00a8d3d0(10), iVar3 != 0)) ||
        (iVar3 = FUN_00a8d3d0(8), iVar3 != 0)) ||
       (iVar2 = FUN_00a8d3d0(7), iVar3 = local_50, iVar2 != 0)) {
      iVar3 = 0x3f800000;
    }
    iVar3 = FUN_00aa09c0(param_1[0x2a1] + 0x40,iVar3,1);
    if (iVar3 != 0) {
      iVar3 = FUN_00a8d380();
      if (iVar3 != 0) {
        if (param_1[0x3a6] == 0x10003) {
          return;
        }
        param_1[0x3a6] = 0x10003;
        iVar3 = FUN_00a8cab0();
        param_1[0x3a9] = iVar3;
        param_1[0x3aa] = param_1[0x3a8];
        goto LAB_007905b1;
      }
      iVar3 = FUN_00a8d3d0(5);
      if (((iVar3 != 0) || (iVar3 = FUN_00a8d3d0(10), iVar3 != 0)) ||
         ((iVar3 = FUN_00a8d3d0(8), iVar3 != 0 || (iVar3 = FUN_00a8d3d0(7), iVar3 != 0)))) {
        FUN_00a979f0(&local_4c);
LAB_007906b7:
        local_30 = local_4c;
        local_2c = local_48;
        local_28 = local_44;
        local_24 = 0x3f800000;
        FUN_00779270(&local_30);
        param_1[0x187] = 4;
        return;
      }
    }
    if (((float)param_1[0x2a4] < 144.0) &&
       (ABS((float)param_1[0x11] - *(float *)(param_1[0x2a1] + 0x44)) < 2.0)) {
      iVar3 = FUN_00a8c760(0x30);
      if (iVar3 != 0) {
        FUN_00aa4080(0x13,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        param_1[0x187] = param_1[0x187] + 1;
        return;
      }
      iVar3 = FUN_00a8c760(0x31);
      if (iVar3 != 0) {
        FUN_00aa4080(0x12,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        param_1[0x187] = param_1[0x187] + 1;
        return;
      }
    }
    break;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    break;
  case 4:
    local_50 = 0;
    FUN_0078cdf0(&local_50);
    if (local_50 != 0) {
      param_1[0x24f] = 0x41c80000;
      FUN_00c70800();
      param_1[0x187] = 2;
      FUN_00aa4080(0x11,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    }
  }
  return;
}

// 007909F0  FUN_007909f0  size=1332  [callgraph]
void __fastcall FUN_007909f0(int *param_1)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  (**(code **)(*param_1 + 0x318))();
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x1c,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00781890(&fStack_20,param_1[0x13c]);
    fStack_30 = fStack_20 - (float)param_1[0x10];
    fStack_28 = fStack_18 - (float)param_1[0x12];
    fStack_24 = fStack_14 - (float)param_1[0x13];
    fStack_2c = 0.0;
    fVar2 = fStack_30 * fStack_30 + fStack_28 * fStack_28;
    if (fVar2 < 0.0 == (fVar2 == 0.0)) {
      FUN_00ddf460(&fStack_30,&fStack_30);
      fVar2 = fStack_28;
      fVar3 = fStack_2c;
      fVar4 = fStack_30;
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      fVar2 = 0.0;
      fVar3 = 1.0;
      fVar4 = 0.0;
    }
    param_1[0x504] = (int)(fStack_20 + fVar4 * 2.5);
    param_1[0x505] = (int)(fStack_1c + fVar3 * 2.5);
    param_1[0x506] = (int)(fStack_18 + fVar2 * 2.5);
    param_1[0x507] = (int)(fStack_24 * 2.5 + fStack_14);
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    FUN_00a8e880(param_1 + 0x504);
    FUN_00781950(param_1[0x13c],0x3e99999a,0x393702d3,0x3e8efa35,0);
    return;
  case 2:
    (**(code **)(*param_1 + 0x1d4))(1);
    FUN_00aa4080(0x1d,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00781890(&fStack_20,param_1[0x13c]);
    fStack_30 = fStack_20 - (float)param_1[0x10];
    fStack_28 = fStack_18 - (float)param_1[0x12];
    fStack_24 = fStack_14 - (float)param_1[0x13];
    fStack_2c = 0.0;
    fVar2 = fStack_28 * fStack_28 + fStack_30 * fStack_30;
    if (fVar2 < 0.0 == (fVar2 == 0.0)) {
      FUN_00ddf460(&fStack_30,&fStack_30);
      fVar2 = fStack_28;
      fVar3 = fStack_2c;
      fVar4 = fStack_30;
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      fVar2 = 0.0;
      fVar4 = 0.0;
      fVar3 = 1.0;
    }
    param_1[0x504] = (int)(fStack_20 + fVar4 * 2.5);
    param_1[0x505] = (int)(fStack_1c + fVar3 * 2.5);
    param_1[0x506] = (int)(fStack_18 + fVar2 * 2.5);
    param_1[0x507] = (int)(fStack_24 * 2.5 + fStack_14);
    FUN_0078bd30(param_1 + 0x4e9,param_1 + 0x10,param_1 + 0x504);
    param_1[0x249] = 0;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00a581b0(&fStack_30,0,param_1[0x249]);
    fVar2 = (float)param_1[0x244] * 0.04 + (float)param_1[0x249];
    param_1[0x249] = (int)fVar2;
    if (!NAN(fVar2) && 1.0 < fVar2 != (fVar2 == 1.0)) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    param_1[0x14] = (int)fStack_30;
    param_1[0x15] = (int)fStack_2c;
    param_1[0x16] = (int)fStack_28;
    FUN_00a8e880(param_1 + 0x504);
    FUN_00781950(param_1[0x13c],0x3dcccccd,0x393702d3,0x3d8efa35,0);
    return;
  case 4:
    FUN_00aa4080(0x1e,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 5:
    break;
  default:
    goto switchD_00790a1a_default;
  }
  (**(code **)(*param_1 + 0x1d4))(1);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  FUN_00a581b0(&iStack_34,0,param_1[0x249]);
  param_1[0x14] = iStack_34;
  param_1[0x15] = (int)fStack_30;
  param_1[0x16] = (int)fStack_2c;
  fVar2 = (float)param_1[0x244] * 0.044444446 + (float)param_1[0x249];
  param_1[0x249] = (int)fVar2;
  if (!NAN(fVar2) && 2.0 < fVar2 != (fVar2 == 2.0)) {
    param_1[0x249] = 0x40000000;
    iVar5 = FUN_00a8cab0();
    param_1[0x3a9] = iVar5;
    param_1[0x3aa] = param_1[0x3a8];
    FUN_00a8caf0(0x10012,0,0,0);
    param_1[0x3a8] = 0;
    FUN_00a962d0(0,0);
    pcVar1 = *(code **)(*param_1 + 0x314);
    param_1[0x4e7] = 0;
    (*pcVar1)();
    iVar5 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar5 != 0) {
      iVar5 = FUN_00a8cab0();
      param_1[0x3a9] = iVar5;
      param_1[0x3aa] = param_1[0x3a8];
      FUN_00a8caf0(0x10013,0,0,0);
      param_1[0x3a8] = 0;
      FUN_00a962d0(0,0);
      param_1[0x4e7] = 0;
      return;
    }
  }
switchD_00790a1a_default:
  return;
}

// 00790F40  FUN_00790f40  size=256  [callgraph]
void __fastcall FUN_00790f40(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0x187];
  if (iVar1 == 0) {
    param_1[0x187] = 1;
    param_1[0x250] = 0;
LAB_00790f6e:
    FUN_00aa4080(0x22,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x250] = param_1[0x250] + 1;
  }
  else {
    if (iVar1 == 1) goto LAB_00790f6e;
    if (iVar1 != 2) {
      return;
    }
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 == 0) {
    iVar1 = FUN_00a8c760(4);
    if (iVar1 == 0) goto LAB_00790fff;
  }
  if (param_1[0x250] < 3) {
    param_1[0x187] = 1;
  }
  else {
    (**(code **)(*param_1 + 0x34c))();
    FUN_0078ac40(1);
  }
LAB_00790fff:
  iVar1 = FUN_00a8c760(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3d8efa35,0);
  }
  return;
}

// 007910B0  Emc060::vf48  size=1008  [class]
/* WARNING: Removing unreachable block (ram,0x007911ed) */

void __fastcall Emc060::vf48(int *param_1)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  int local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined1 local_20 [28];
  
  if (0.0 < (float)param_1[0x71b]) {
    fVar1 = (float)param_1[0x71b] - (float)param_1[0x244];
    param_1[0x71b] = (int)fVar1;
    if (fVar1 < 0.0 != (fVar1 == 0.0)) {
      param_1[0x71a] = 0;
      param_1[0x71b] = -0x40800000;
    }
  }
  param_1[0x64e] = 0;
  param_1[0x718] = (int)((float)param_1[0x718] - (float)param_1[0x244]);
  if (0.0 < (float)param_1[0x64f]) {
    fVar6 = (float10)FUN_00e049b0();
    param_1[0x64f] = (int)(float)((float10)(float)param_1[0x64f] - fVar6);
  }
  if (param_1[0x668] == 0) {
    iVar5 = 1;
    piVar2 = param_1 + 0x650;
    iVar3 = 6;
    do {
      if (*piVar2 == 0) {
        iVar5 = 0;
      }
      piVar2 = piVar2 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    param_1[0x668] = iVar5;
  }
  piVar2 = param_1 + 0x509;
  iVar3 = 3;
  do {
    if (*piVar2 != 0) {
      FUN_00442560(param_1[0x2a2]);
    }
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  param_1[0x6e2] = 1;
  iVar3 = FUN_00907640(param_1 + 0x6e3,&local_54,local_20);
  if (iVar3 != 0) {
    iVar3 = 0;
    param_1[0x6e2] = 0;
    FUN_0112bcf0();
    if (0 < *(int *)(local_54 + 0x14)) {
      iVar5 = *(int *)(*(int *)(local_54 + 0x10) + 0x28);
      iVar4 = 0;
      if (*(char *)(iVar5 + 0x18) == '\x01') {
        iVar4 = *(char *)(iVar5 + 0x10) + iVar5;
      }
      if (*(char *)(iVar5 + 0x18) == '\x02') {
        if (*(char *)(iVar5 + 0x18) == '\x02') {
          iVar3 = *(char *)(iVar5 + 0x10) + iVar5;
        }
        else {
          iVar3 = 0;
        }
      }
      if (iVar4 != 0) {
        iVar5 = FUN_008f7780(iVar4);
        if ((param_1[0x2a1] != 0) && (iVar5 == param_1[0x2a1])) {
          param_1[0x6e2] = 1;
        }
      }
      if (iVar3 != 0) {
        iVar3 = FUN_008f7780(iVar3);
        if ((param_1[0x2a1] != 0) && (iVar3 == param_1[0x2a1])) {
          param_1[0x6e2] = 1;
        }
      }
    }
  }
  if (param_1[0x2a1] != 0) {
    FUN_00a8d230(&local_40);
    iVar3 = FUN_00a12210(0);
    local_50 = *(float *)(iVar3 + 0x40);
    local_48 = *(float *)(iVar3 + 0x48);
    local_44 = *(float *)(iVar3 + 0x4c);
    local_4c = *(float *)(iVar3 + 0x44) + 0.6;
    local_30 = local_40 - local_50;
    local_2c = local_3c - local_4c;
    local_28 = local_38 - local_48;
    local_24 = local_34 - local_44;
    iVar3 = FUN_009f8b40();
    FUN_0090fa30(param_1 + 0x6e3,0,&local_50,0x3f000000,&local_30,iVar3 << 0x10 | 7,"Emc060");
  }
  FUN_00786190();
  fVar1 = (float)param_1[0x5dd];
  if (!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) {
    param_1[0x5dd] = (int)((float)param_1[0x5dd] - (float)param_1[0x244]);
  }
  if (0.0 < (float)param_1[0x5de] != ((float)param_1[0x5de] == 0.0)) {
    param_1[0x5de] = (int)((float)param_1[0x5de] - (float)param_1[0x244]);
  }
  if (0.0 < (float)param_1[0x5df] != ((float)param_1[0x5df] == 0.0)) {
    param_1[0x5df] = (int)((float)param_1[0x5df] - (float)param_1[0x244]);
  }
  if (0.0 < (float)param_1[0x3b0] != ((float)param_1[0x3b0] == 0.0)) {
    param_1[0x3b0] = (int)((float)param_1[0x3b0] - (float)param_1[0x244]);
  }
  if (0.0 < (float)param_1[0x5dc] != ((float)param_1[0x5dc] == 0.0)) {
    param_1[0x5dc] = (int)((float)param_1[0x5dc] - (float)param_1[0x244]);
  }
  if (((int *)param_1[0x2a1] == (int *)0x0) ||
     (iVar3 = (**(code **)(*(int *)param_1[0x2a1] + 0x330))(), iVar3 == 0)) {
    param_1[0x5e0] = 0;
  }
  else {
    param_1[0x5e0] = (int)((float)param_1[0x5e0] + (float)param_1[0x244]);
  }
  if (((*(byte *)((int)param_1 + 0x143f) & 1) != 0) &&
     (fVar1 = (float)param_1[0x710], param_1[0x710] = (int)(fVar1 - (float)param_1[0x244]),
     fVar1 - (float)param_1[0x244] < 0.0)) {
    (**(code **)(*param_1 + 0x110))(0);
  }
  FUN_0077f400();
  FUN_0078eed0();
  iVar3 = FUN_00a8c760(0x37);
  param_1[0x6ff] = iVar3;
  iVar3 = FUN_00a8c760(0x38);
  param_1[0x700] = iVar3;
  FUN_0077f1a0();
  iVar3 = FUN_00ac48f0(0);
  if (iVar3 == 0) {
    fVar1 = (float)param_1[0x707] + (float)param_1[0x244];
  }
  else {
    fVar1 = 0.0;
  }
  param_1[0x707] = (int)fVar1;
  if ((param_1[0x351] & 0x2000000U) != 0) {
    param_1[0x70c] = (int)((float)param_1[0x70c] + (float)param_1[0x244]);
    EmBaseDLC::vf48();
    return;
  }
  param_1[0x70c] = 0;
  EmBaseDLC::vf48();
  return;
}

// 007914A0  Emc060::vf54  size=16  [class]
void Emc060::vf54(void)

{
  FUN_0078c450();
  BehaviorEmBase::vf54();
  return;
}

// 007914B0  FUN_007914b0  size=1250  [between]
void __fastcall FUN_007914b0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    FUN_00a8d330(param_1 + 0x40,*(int *)(param_1 + 0xa84) + 0x40);
    if (*(int *)(param_1 + 0xea4) == 0x10003) {
      FUN_00aa4080(0x11,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      *(undefined4 *)(param_1 + 0x61c) = 2;
      return;
    }
    *(undefined4 *)(param_1 + 0x93c) = 0x41c80000;
    FUN_00aa4080(0x10,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 1:
    iVar4 = FUN_00a979f0(&local_4c);
    if (iVar4 != 0) {
      local_40 = local_4c;
      local_3c = local_48;
      local_38 = local_44;
      local_34 = 0x3f800000;
      FUN_007791b0(&local_40,0x3e800000,0x3dd67750);
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00aa09c0(*(int *)(param_1 + 0xa84) + 0x40,0x40200000,1);
    if ((iVar4 == 0) || (iVar4 = FUN_00a8d380(), iVar4 == 0)) {
      iVar4 = FUN_00a94ce0(0);
      if (iVar4 != 0) {
        FUN_00aa4080(0x11,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
        *(undefined4 *)(param_1 + 0x960) = *(undefined4 *)(param_1 + 0x50);
        *(undefined4 *)(param_1 + 0x964) = *(undefined4 *)(param_1 + 0x54);
        *(undefined4 *)(param_1 + 0x968) = *(undefined4 *)(param_1 + 0x58);
        *(undefined4 *)(param_1 + 0x96c) = *(undefined4 *)(param_1 + 0x5c);
        *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
        return;
      }
    }
    else if (*(int *)(param_1 + 0xe98) != 0x10003) {
      *(undefined4 *)(param_1 + 0xe98) = 0x10003;
      uVar6 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
LAB_00791644:
      *(undefined4 *)(param_1 + 0xea4) = uVar6;
      FUN_00a8caf0(0x10003,0,0,0);
      *(undefined4 *)(param_1 + 0xea0) = 0;
      FUN_00a962d0(0,0);
      *(undefined4 *)(param_1 + 0x139c) = 0;
      return;
    }
    break;
  case 2:
    fVar1 = *(float *)(param_1 + 0x960) - *(float *)(param_1 + 0x50);
    fVar3 = *(float *)(param_1 + 0x968) - *(float *)(param_1 + 0x58);
    fVar2 = *(float *)(param_1 + 0x910) * 0.1;
    if (fVar2 * fVar2 <= fVar1 * fVar1 + fVar3 * fVar3) {
      *(undefined4 *)(param_1 + 0x93c) = 0x41c80000;
    }
    else {
      fVar1 = *(float *)(param_1 + 0x93c) - *(float *)(param_1 + 0x910);
      *(float *)(param_1 + 0x93c) = fVar1;
      if (fVar1 <= 0.0) {
        FUN_00a979f0(&local_4c);
        goto LAB_00791745;
      }
    }
    *(undefined4 *)(param_1 + 0x960) = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(param_1 + 0x964) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x968) = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(param_1 + 0x96c) = *(undefined4 *)(param_1 + 0x5c);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a979f0(&local_4c);
    if (iVar4 != 0) {
      local_20 = local_4c;
      local_1c = local_48;
      local_18 = local_44;
      local_14 = 0x3f800000;
      FUN_007791b0(&local_20,0x3e99999a,0x3e32b8c2);
    }
    if ((*(int *)(param_1 + 0x7d8) != 0) && (*(int *)(*(int *)(param_1 + 0x7d8) + 0x82c) == 0)) {
      FUN_00a8d330(param_1 + 0x40,*(int *)(param_1 + 0xa84) + 0x40);
      return;
    }
    local_50 = 0x3fa00000;
    iVar4 = FUN_00a8d3d0(5);
    if ((((iVar4 != 0) || (iVar4 = FUN_00a8d3d0(10), iVar4 != 0)) ||
        (iVar4 = FUN_00a8d3d0(8), iVar4 != 0)) ||
       (iVar5 = FUN_00a8d3d0(7), iVar4 = local_50, iVar5 != 0)) {
      iVar4 = 0x3f800000;
    }
    iVar4 = FUN_00aa09c0(*(int *)(param_1 + 0xa84) + 0x40,iVar4,1);
    if (iVar4 == 0) {
      return;
    }
    iVar4 = FUN_00a8d380();
    if (iVar4 == 0) {
      iVar4 = FUN_00a8d3d0(5);
      if (((iVar4 == 0) && (iVar4 = FUN_00a8d3d0(10), iVar4 == 0)) &&
         ((iVar4 = FUN_00a8d3d0(8), iVar4 == 0 && (iVar4 = FUN_00a8d3d0(7), iVar4 == 0)))) {
        return;
      }
      FUN_00a979f0(&local_4c);
LAB_00791745:
      local_30 = local_4c;
      local_2c = local_48;
      local_28 = local_44;
      local_24 = 0x3f800000;
      FUN_00779270(&local_30);
      *(undefined4 *)(param_1 + 0x61c) = 3;
      return;
    }
    if (*(int *)(param_1 + 0xe98) == 0x10003) {
      return;
    }
    *(undefined4 *)(param_1 + 0xe98) = 0x10003;
    uVar6 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
    goto LAB_00791644;
  case 3:
    local_50 = 0;
    FUN_0078cdf0(&local_50);
    if (local_50 != 0) {
      *(undefined4 *)(param_1 + 0x93c) = 0x41c80000;
      FUN_00c70800();
      *(undefined4 *)(param_1 + 0x61c) = 2;
      FUN_00aa4080(0x11,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    }
  }
  return;
}

// 007919B0  FUN_007919b0  size=488  [between]
void __fastcall FUN_007919b0(int *param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  int *local_4;
  
  local_4 = param_1;
  if (param_1[0x187] == 0) {
    param_1[0x248] = 0;
    if (param_1[0x2a1] != 0) {
      fVar5 = (float10)FUN_00a8ec30(param_1[0x2a1] + 0x40);
      local_4 = (int *)(float)fVar5;
      iVar3 = (**(code **)(*param_1 + 0x84))();
      fVar5 = (float10)FUN_00ddba30((float)local_4 - *(float *)(iVar3 + 4));
      fVar4 = (float10)1.5707964;
      if (param_1[0x186] == 0x10005) {
        fVar4 = (float10)-1.5707964;
      }
      fVar5 = (float10)FUN_00ddba30((float)(fVar5 - fVar4));
      param_1[0x248] = (int)(float)fVar5;
    }
    uVar2 = 0x16;
    if (param_1[0x186] == 0x10006) {
      uVar2 = 0x17;
    }
    FUN_00aa4080(uVar2,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) goto LAB_00791aec;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    local_4 = (int *)param_1[0x13c];
    iVar3 = FUN_0078a100(&local_4);
    if ((iVar3 == 0) && (sVar1 = FUN_00dde2d0(0,1), sVar1 != 0)) {
      FUN_0077ed00();
    }
  }
LAB_00791aec:
  local_4 = (int *)param_1[0x13c];
  iVar3 = FUN_0078a100(&local_4);
  if (((iVar3 == 0) && (iVar3 = FUN_00a8c760(4), iVar3 != 0)) && (param_1[0x3ad] != 0)) {
    sVar1 = FUN_00dde2d0(0,3);
    if (sVar1 != 0) {
      FUN_0077ed00();
    }
    if (((float)param_1[0x5dd] < 0.0) && (iVar3 = FUN_0078c940(), iVar3 != 0)) {
      return;
    }
  }
  iVar3 = FUN_00a8c760(0);
  if (iVar3 != 0) {
    fVar5 = (float10)FUN_00fdc1f0();
    fVar5 = ((float10)1 - fVar5) * (float10)(float)param_1[0x248];
    param_1[0x25] = (int)(float)(fVar5 + (float10)(float)param_1[0x25]);
    param_1[0x248] = (int)(float)((float10)(float)param_1[0x248] - fVar5);
  }
  return;
}

// 00791BA0  FUN_00791ba0  size=488  [between]
void __fastcall FUN_00791ba0(int *param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  int *local_4;
  
  local_4 = param_1;
  if (param_1[0x187] == 0) {
    param_1[0x248] = 0;
    if (param_1[0x2a1] != 0) {
      fVar5 = (float10)FUN_00a8ec30(param_1[0x2a1] + 0x40);
      local_4 = (int *)(float)fVar5;
      iVar3 = (**(code **)(*param_1 + 0x84))();
      fVar5 = (float10)FUN_00ddba30((float)local_4 - *(float *)(iVar3 + 4));
      fVar4 = (float10)3.1415927;
      if (param_1[0x186] == 0x10007) {
        fVar4 = (float10)-3.1415927;
      }
      fVar5 = (float10)FUN_00ddba30((float)(fVar5 - fVar4));
      param_1[0x248] = (int)(float)fVar5;
    }
    uVar2 = 0x18;
    if (param_1[0x186] == 0x10008) {
      uVar2 = 0x19;
    }
    FUN_00aa4080(uVar2,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) goto LAB_00791cdc;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    local_4 = (int *)param_1[0x13c];
    iVar3 = FUN_0078a100(&local_4);
    if ((iVar3 == 0) && (sVar1 = FUN_00dde2d0(0,1), sVar1 != 0)) {
      FUN_0077ed00();
    }
  }
LAB_00791cdc:
  local_4 = (int *)param_1[0x13c];
  iVar3 = FUN_0078a100(&local_4);
  if (((iVar3 == 0) && (iVar3 = FUN_00a8c760(4), iVar3 != 0)) && (param_1[0x3ad] != 0)) {
    sVar1 = FUN_00dde2d0(0,3);
    if (sVar1 != 0) {
      FUN_0077ed00();
    }
    if (((float)param_1[0x5dd] < 0.0) && (iVar3 = FUN_0078c940(), iVar3 != 0)) {
      return;
    }
  }
  iVar3 = FUN_00a8c760(0);
  if (iVar3 != 0) {
    fVar5 = (float10)FUN_00fdc1f0();
    fVar5 = ((float10)1 - fVar5) * (float10)(float)param_1[0x248];
    param_1[0x25] = (int)(float)(fVar5 + (float10)(float)param_1[0x25]);
    param_1[0x248] = (int)(float)((float10)(float)param_1[0x248] - fVar5);
  }
  return;
}

// 00791D90  FUN_00791d90  size=1117  [between]
void __fastcall FUN_00791d90(int *param_1)

{
  float fVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  int *local_4;
  
  local_4 = param_1;
  if (param_1[0x187] == 0) {
    uVar3 = 0x22;
    if (param_1[0x186] == 0x1000d) {
      uVar3 = 0x23;
    }
    if (param_1[0x186] == 0x1000e) {
      uVar3 = 0x24;
    }
    FUN_00aa4080(uVar3,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) goto LAB_00792053;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar4 = FUN_00a94ce0(0);
  if (iVar4 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    local_4 = (int *)param_1[0x13c];
    iVar4 = FUN_0078a100(&local_4);
    if (iVar4 == 0) {
      if ((float)param_1[0x5dd] < 0.0) {
        FUN_0078c940();
      }
      if (1.0471976 < (float)param_1[0x2a8]) {
        iVar4 = FUN_00a8cab0();
        param_1[0x3a9] = iVar4;
        param_1[0x3aa] = param_1[0x3a8];
        FUN_00a8caf0(0x10005,0,0,0);
        param_1[0x3a8] = 0;
        FUN_00a962d0(0,0);
        param_1[0x4e7] = 0;
        if (1.0471976 < (float)param_1[0x2a7]) {
          iVar4 = FUN_00a8cab0();
          param_1[0x3a9] = iVar4;
          param_1[0x3aa] = param_1[0x3a8];
          FUN_00a8caf0(0x10006,0,0,0);
          param_1[0x3a8] = 0;
          FUN_00a962d0(0,0);
          param_1[0x4e7] = 0;
        }
        if (2.0943952 < (float)param_1[0x2a7]) {
          iVar4 = FUN_00a8cab0();
          param_1[0x3aa] = param_1[0x3a8];
          param_1[0x3a9] = iVar4;
          FUN_00a8caf0(0x10008,0,0,0);
          param_1[0x3a8] = 0;
          FUN_00a962d0(0,0);
          param_1[0x4e7] = 0;
        }
        if ((float)param_1[0x2a7] < -2.0943952) {
          iVar4 = FUN_00a8cab0();
          param_1[0x3a9] = iVar4;
          param_1[0x3aa] = param_1[0x3a8];
          FUN_00a8caf0(0x10007,0,0,0);
          param_1[0x3a8] = 0;
          FUN_00a962d0(0,0);
          param_1[0x4e7] = 0;
        }
      }
      sVar2 = FUN_00dde2d0(0,1);
      if (sVar2 != 0) {
        FUN_0077ed00();
      }
      if (((float)param_1[0x2a4] < 16.0) && (sVar2 = FUN_00dde2d0(0,1), sVar2 != 0)) {
        FUN_0077ed00();
      }
      if (((float)param_1[0x2a4] < 49.0) && (sVar2 = FUN_00dde2d0(0,1), sVar2 != 0)) {
        FUN_0078cd40();
      }
      fVar1 = (float)param_1[0x2a4];
      if (((!NAN(fVar1) && 49.0 < fVar1 != (fVar1 == 49.0)) && (param_1[0x128] == 1)) &&
         ((float)param_1[0x5de] < 0.0)) {
        FUN_0078ccc0();
      }
    }
  }
LAB_00792053:
  iVar4 = FUN_00a8c760(4);
  if ((iVar4 != 0) && (param_1[0x3ad] != 0)) {
    local_4 = (int *)param_1[0x13c];
    iVar4 = FUN_0078a100(&local_4);
    if (iVar4 == 0) {
      sVar2 = FUN_00dde2d0(0,2);
      if (sVar2 != 0) {
        FUN_0077ed00();
      }
      if ((float)param_1[0x5dd] < 0.0) {
        FUN_0078c940();
      }
      if ((64.0 < (float)param_1[0x2a4]) && (sVar2 = FUN_00dde2d0(0,1), sVar2 != 0)) {
        iVar4 = FUN_00a8cab0();
        param_1[0x3a9] = iVar4;
        param_1[0x3aa] = param_1[0x3a8];
        FUN_00a8caf0(0x10003,0,0,0);
        param_1[0x3a8] = 0;
        FUN_00a962d0(0,0);
        param_1[0x4e7] = 0;
      }
      if (100.0 < (float)param_1[0x2a4]) {
        iVar4 = FUN_00a8cab0();
        param_1[0x3a9] = iVar4;
        param_1[0x3aa] = param_1[0x3a8];
        FUN_00a8caf0(0x10003,0,0,0);
        param_1[0x3a8] = 0;
        FUN_00a962d0(0,0);
        param_1[0x4e7] = 0;
      }
      fVar1 = (float)param_1[0x2a4];
      if (((!NAN(fVar1) && 49.0 < fVar1 != (fVar1 == 49.0)) && (param_1[0x128] == 1)) &&
         ((float)param_1[0x5de] < 0.0)) {
        FUN_0078ccc0();
      }
    }
  }
  if ((float)param_1[0x2a8] <= 1.0471976) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3db2b8c2,0);
  }
  return;
}

// 007921F0  FUN_007921f0  size=1321  [between]
void __fastcall FUN_007921f0(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  code *pcVar4;
  int iVar5;
  int iStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  (**(code **)(*param_1 + 0x318))();
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x1c,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    iVar5 = param_1[0x2a1];
    fStack_20 = *(float *)(iVar5 + 0x40) - (float)param_1[0x10];
    fStack_18 = *(float *)(iVar5 + 0x48) - (float)param_1[0x12];
    fStack_14 = *(float *)(iVar5 + 0x4c) - (float)param_1[0x13];
    fStack_1c = 0.0;
    fVar1 = fStack_20 * fStack_20 + fStack_18 * fStack_18;
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      FUN_00ddf460(&fStack_20,&fStack_20);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      fStack_20 = 0.0;
      fStack_1c = 1.0;
      fStack_18 = 0.0;
    }
    iStack_28 = param_1[0x13c];
    fStack_24 = 2.5;
    iVar5 = FUN_0078a100(&iStack_28);
    fVar1 = fStack_24;
    if (iVar5 != 2) {
      fVar1 = 10.0;
    }
    iVar5 = param_1[0x2a1];
    fStack_20 = fStack_20 * fVar1;
    fStack_1c = fVar1 * fStack_1c;
    fStack_18 = fStack_18 * fVar1;
    fStack_14 = fStack_14 * fVar1;
    param_1[0x504] = (int)(*(float *)(iVar5 + 0x40) - fStack_20);
    param_1[0x505] = (int)(*(float *)(iVar5 + 0x44) - fStack_1c);
    param_1[0x506] = (int)(*(float *)(iVar5 + 0x48) - fStack_18);
    param_1[0x507] = (int)(*(float *)(iVar5 + 0x4c) - fStack_14);
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    FUN_00a8e880(param_1 + 0x504);
    (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3e8efa35,0);
    return;
  case 2:
    (**(code **)(*param_1 + 0x1d4))(1);
    FUN_00aa4080(0x1d,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    iVar5 = param_1[0x2a1];
    fStack_20 = *(float *)(iVar5 + 0x40) - (float)param_1[0x10];
    fStack_18 = *(float *)(iVar5 + 0x48) - (float)param_1[0x12];
    fStack_14 = *(float *)(iVar5 + 0x4c) - (float)param_1[0x13];
    fStack_1c = 0.0;
    fVar1 = fStack_20 * fStack_20 + fStack_18 * fStack_18;
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      FUN_00ddf460(&fStack_20,&fStack_20);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      fStack_18 = 0.0;
      fStack_20 = 0.0;
      fStack_1c = 1.0;
    }
    iVar5 = param_1[0x2a1];
    fStack_20 = fStack_20 * 2.5;
    fStack_1c = fStack_1c * 2.5;
    fStack_18 = fStack_18 * 2.5;
    fStack_14 = fStack_14 * 2.5;
    fVar1 = *(float *)(iVar5 + 0x44);
    fVar2 = *(float *)(iVar5 + 0x48);
    fVar3 = *(float *)(iVar5 + 0x4c);
    param_1[0x504] = (int)(*(float *)(iVar5 + 0x40) - fStack_20);
    param_1[0x505] = (int)(fVar1 - fStack_1c);
    param_1[0x506] = (int)(fVar2 - fStack_18);
    param_1[0x507] = (int)(fVar3 - fStack_14);
    FUN_0078bd30(param_1 + 0x4e9,param_1 + 0x10,param_1 + 0x504);
    param_1[0x249] = 0;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00a581b0(&fStack_20,0,param_1[0x249]);
    fVar1 = (float)param_1[0x244] * 0.057142857 + (float)param_1[0x249];
    param_1[0x249] = (int)fVar1;
    if (!NAN(fVar1) && 1.0 < fVar1 != (fVar1 == 1.0)) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    param_1[0x14] = (int)fStack_20;
    param_1[0x15] = (int)fStack_1c;
    param_1[0x16] = (int)fStack_18;
    FUN_00a8e880(param_1 + 0x504);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3d8efa35,0);
    return;
  case 4:
    FUN_00aa4080(0x1e,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 5:
    break;
  default:
    return;
  }
  (**(code **)(*param_1 + 0x1d4))(1);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  FUN_00a581b0(&fStack_24,0,param_1[0x249]);
  fVar1 = (float)param_1[0x244] * 0.08 + (float)param_1[0x249];
  param_1[0x249] = (int)fVar1;
  if (!NAN(fVar1) && 2.0 < fVar1 != (fVar1 == 2.0)) {
    param_1[0x249] = 0x40000000;
    iVar5 = FUN_00a8cab0();
    param_1[0x3a9] = iVar5;
    param_1[0x3aa] = param_1[0x3a8];
    FUN_00a8caf0(0x10012,0,0,0);
    param_1[0x3a8] = 0;
    FUN_00a962d0(0,0);
    pcVar4 = *(code **)(*param_1 + 0x314);
    param_1[0x4e7] = 0;
    (*pcVar4)();
  }
  param_1[0x14] = (int)fStack_24;
  param_1[0x15] = (int)fStack_20;
  param_1[0x16] = (int)fStack_1c;
  return;
}

// 00792740  FUN_00792740  size=1279  [between]
void __fastcall FUN_00792740(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  code *pcVar4;
  int iVar5;
  int iStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  (**(code **)(*param_1 + 0x318))();
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x1c,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    iVar5 = param_1[0x2a1];
    fStack_20 = *(float *)(iVar5 + 0x40) - (float)param_1[0x10];
    fStack_18 = *(float *)(iVar5 + 0x48) - (float)param_1[0x12];
    fStack_14 = *(float *)(iVar5 + 0x4c) - (float)param_1[0x13];
    fStack_1c = 0.0;
    fVar1 = fStack_20 * fStack_20 + fStack_18 * fStack_18;
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      FUN_00ddf460(&fStack_20,&fStack_20);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      fStack_18 = 0.0;
      fStack_1c = 1.0;
      fStack_20 = 0.0;
    }
    iVar5 = param_1[0x2a1];
    fStack_20 = fStack_20 * 2.5;
    fStack_1c = fStack_1c * 2.5;
    fStack_18 = fStack_18 * 2.5;
    fStack_14 = fStack_14 * 2.5;
    fVar1 = *(float *)(iVar5 + 0x44);
    fVar2 = *(float *)(iVar5 + 0x48);
    fVar3 = *(float *)(iVar5 + 0x4c);
    param_1[0x504] = (int)(*(float *)(iVar5 + 0x40) + fStack_20);
    param_1[0x505] = (int)(fVar1 + fStack_1c);
    param_1[0x506] = (int)(fVar2 + fStack_18);
    param_1[0x507] = (int)(fStack_14 + fVar3);
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    FUN_00a8e880(param_1 + 0x504);
    (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3e8efa35,0);
    return;
  case 2:
    (**(code **)(*param_1 + 0x1d4))(1);
    FUN_00aa4080(0x1d,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    iVar5 = param_1[0x2a1];
    fStack_20 = *(float *)(iVar5 + 0x40) - (float)param_1[0x10];
    fStack_18 = *(float *)(iVar5 + 0x48) - (float)param_1[0x12];
    fStack_14 = *(float *)(iVar5 + 0x4c) - (float)param_1[0x13];
    fStack_1c = 0.0;
    fVar1 = fStack_18 * fStack_18 + fStack_20 * fStack_20;
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      FUN_00ddf460(&fStack_20,&fStack_20);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      fStack_18 = 0.0;
      fStack_20 = 0.0;
      fStack_1c = 1.0;
    }
    iVar5 = param_1[0x2a1];
    fStack_20 = fStack_20 * 2.5;
    fStack_1c = fStack_1c * 2.5;
    fStack_18 = fStack_18 * 2.5;
    fStack_14 = fStack_14 * 2.5;
    fVar1 = *(float *)(iVar5 + 0x44);
    fVar2 = *(float *)(iVar5 + 0x48);
    fVar3 = *(float *)(iVar5 + 0x4c);
    param_1[0x504] = (int)(*(float *)(iVar5 + 0x40) + fStack_20);
    param_1[0x505] = (int)(fVar1 + fStack_1c);
    param_1[0x506] = (int)(fVar2 + fStack_18);
    param_1[0x507] = (int)(fStack_14 + fVar3);
    FUN_0078bd30(param_1 + 0x4e9,param_1 + 0x10,param_1 + 0x504);
    param_1[0x249] = 0;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00a581b0(&fStack_20,0,param_1[0x249]);
    fVar1 = (float)param_1[0x244] * 0.057142857 + (float)param_1[0x249];
    param_1[0x249] = (int)fVar1;
    if (!NAN(fVar1) && 1.0 < fVar1 != (fVar1 == 1.0)) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    param_1[0x14] = (int)fStack_20;
    param_1[0x15] = (int)fStack_1c;
    param_1[0x16] = (int)fStack_18;
    FUN_00a8e880(param_1 + 0x504);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3d8efa35,0);
    return;
  case 4:
    FUN_00aa4080(0x1e,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 5:
    break;
  default:
    return;
  }
  (**(code **)(*param_1 + 0x1d4))(1);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  FUN_00a581b0(&iStack_24,0,param_1[0x249]);
  fVar1 = (float)param_1[0x244] * 0.08 + (float)param_1[0x249];
  param_1[0x249] = (int)fVar1;
  if (!NAN(fVar1) && 2.0 < fVar1 != (fVar1 == 2.0)) {
    param_1[0x249] = 0x40000000;
    iVar5 = FUN_00a8cab0();
    param_1[0x3a9] = iVar5;
    param_1[0x3aa] = param_1[0x3a8];
    FUN_00a8caf0(0x10012,0,0,0);
    param_1[0x3a8] = 0;
    FUN_00a962d0(0,0);
    pcVar4 = *(code **)(*param_1 + 0x314);
    param_1[0x4e7] = 0;
    (*pcVar4)();
  }
  param_1[0x14] = iStack_24;
  param_1[0x15] = (int)fStack_20;
  param_1[0x16] = (int)fStack_1c;
  return;
}

// 00792C60  FUN_00792c60  size=841  [between]
void __fastcall FUN_00792c60(int *param_1)

{
  float *pfVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iStack_24;
  float local_20;
  float local_1c;
  float local_18;
  float fStack_14;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  switch(param_1[0x187]) {
  case 0:
    param_1[0x187] = 2;
  case 2:
    (**(code **)(*param_1 + 0x1d4))(1);
    FUN_00aa4080(0x1d,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    iVar6 = param_1[0x2a1];
    local_20 = (float)param_1[0x10] - *(float *)(iVar6 + 0x40);
    local_18 = (float)param_1[0x12] - *(float *)(iVar6 + 0x48);
    fStack_14 = (float)param_1[0x13] - *(float *)(iVar6 + 0x4c);
    local_1c = 0.0;
    fVar3 = local_20 * local_20 + local_18 * local_18;
    if (fVar3 < 0.0 == (fVar3 == 0.0)) {
      FUN_00ddf460(&local_20,&local_20);
      fVar3 = local_18;
      fVar4 = local_1c;
      fVar5 = local_20;
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      fVar3 = 0.0;
      fVar5 = 0.0;
      fVar4 = 1.0;
    }
    pfVar1 = (float *)(param_1 + 0x504);
    *pfVar1 = (float)param_1[0x10] + fVar5 * 3.0;
    param_1[0x505] = (int)((float)param_1[0x11] + fVar4 * 3.0);
    param_1[0x506] = (int)((float)param_1[0x12] + fVar3 * 3.0);
    param_1[0x507] = (int)(fStack_14 * 3.0 + (float)param_1[0x13]);
    FUN_00a8e880(pfVar1);
    FUN_0078bd30(param_1 + 0x4e9,param_1 + 0x10,pfVar1);
    param_1[0x249] = 0;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00a581b0(&local_20,0,param_1[0x249]);
    fVar3 = (float)param_1[0x244] * 0.057142857 + (float)param_1[0x249];
    param_1[0x249] = (int)fVar3;
    if (!NAN(fVar3) && 1.0 < fVar3 != (fVar3 == 1.0)) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    param_1[0x14] = (int)local_20;
    param_1[0x15] = (int)local_1c;
    param_1[0x16] = (int)local_18;
    FUN_00a8e880(param_1 + 0x504);
    (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3e20d97c,0x40490fdb);
    return;
  case 1:
    return;
  case 4:
    FUN_00aa4080(0x1e,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 5:
    break;
  default:
    return;
  }
  (**(code **)(*param_1 + 0x1d4))(1);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  FUN_00a581b0(&iStack_24,0,param_1[0x249]);
  fVar3 = (float)param_1[0x244] * 0.08 + (float)param_1[0x249];
  param_1[0x249] = (int)fVar3;
  if (!NAN(fVar3) && 2.0 < fVar3 != (fVar3 == 2.0)) {
    param_1[0x249] = 0x40000000;
    iVar6 = FUN_00a8cab0();
    param_1[0x3a9] = iVar6;
    param_1[0x3aa] = param_1[0x3a8];
    FUN_00a8caf0(0x10012,0,0,0);
    param_1[0x3a8] = 0;
    FUN_00a962d0(0,0);
    pcVar2 = *(code **)(*param_1 + 0x314);
    param_1[0x4e7] = 0;
    (*pcVar2)();
  }
  param_1[0x14] = iStack_24;
  param_1[0x15] = (int)local_20;
  param_1[0x16] = (int)local_1c;
  return;
}

// 00792FD0  Emc060::R0_ExplodeDie_2  size=1150  [class]
void __fastcall Emc060::R0_ExplodeDie_2(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  float10 fVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  float fStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_170;
  float fStack_16c;
  undefined4 uStack_168;
  undefined1 local_160 [348];
  
  iVar1 = param_1[0x187];
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  if (iVar1 == 0) {
    FUN_00a8c9b0(0,0,0x3f800000,0);
    FUN_00eaa6e0(0x3f800000,0);
    FUN_00aa4080(0x90,0,0x3d088889,0x3f800000,0x8000000,param_1[0x701],0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    uVar5 = 0;
    uVar2 = FUN_00a7c8a0(0);
    FUN_004039a0(6,uVar2,uVar5);
    puVar6 = local_160;
    uVar2 = FUN_00e00b40(0x2c060,puVar6);
    FUN_00a8c930(uVar2,puVar6);
    FUN_00e5e0c0("em0060_se_dmg_faint_spark",param_1,0xffffffff,0);
    FUN_0043f5b0(9,0x41200000);
    (**(code **)(*param_1 + 0x344))(5,0,1);
    param_1[0x21c] = 0;
    FUN_00eaa6e0(0x41200000,0);
    FUN_00eaa6e0(0x41200000,0);
    FUN_00eaa6e0(0x41200000,0);
    FUN_00eaa6e0(0x41200000,0);
  }
  else if (iVar1 != 1) {
    if (iVar1 != 2) {
      return;
    }
    iVar1 = thunk_FUN_00e58ed0(param_1[0x711]);
    if (iVar1 != 0) {
      return;
    }
    FUN_009fdde0();
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00a8c9b0(0,6,0x3f800000,0);
    piVar3 = param_1 + 0x580;
    uVar2 = FUN_00a7c8a0(piVar3);
    FUN_004117d0(7,uVar2,piVar3);
    puVar6 = local_160;
    uVar2 = FUN_00e00b40(0x2c060,puVar6);
    FUN_00a8c930(uVar2,puVar6);
    iVar1 = FUN_00e5e0c0("em0060_se_dmg_exp_death",param_1,0xffffffff,0);
    param_1[0x711] = iVar1;
    if (param_1[0x294] != 0) {
      FUN_00940450(param_1[0x20f]);
    }
    (**(code **)(*param_1 + 0x364))(0xffffffff);
    (**(code **)(*param_1 + 0x20))();
    if (((int *)param_1[0x1ec] != (int *)0x0) &&
       (iVar1 = (**(code **)(*(int *)param_1[0x1ec] + 8))(), iVar1 != 0)) {
      (**(code **)(*(int *)param_1[0x1ec] + 0xdc))(0);
    }
    FUN_00c4d1a0(param_1[0x13c],0);
    param_1[0x187] = param_1[0x187] + 1;
    if (param_1[0x6fd] != 0) {
      iVar1 = FUN_00a81330();
      if (iVar1 == 0) {
        FUN_00dd5650(&DAT_01647cd8);
        FUN_00785ef0();
        iVar1 = FUN_00a81330();
        if ((iVar1 == 0) || (piVar3 = (int *)FUN_00a7c8a0(), piVar3 == (int *)0x0))
        goto LAB_00793430;
        piVar3[0x1bb] = 1;
        FUN_00a8caf0(0x32,0,0,0);
        iVar1 = FUN_00a12210(0x3d);
        uStack_190 = *(undefined4 *)(iVar1 + 0x40);
        uStack_18c = *(undefined4 *)(iVar1 + 0x44);
        uStack_188 = *(undefined4 *)(iVar1 + 0x48);
        uStack_184 = *(undefined4 *)(iVar1 + 0x4c);
        iVar1 = FUN_00a12210(0xffffffff);
        fVar4 = (float10)FUN_00ddbaa0(-(*(float *)(iVar1 + 0x18) /
                                       SQRT(*(float *)(iVar1 + 0x38) * *(float *)(iVar1 + 0x38) +
                                            *(float *)(iVar1 + 0x34) * *(float *)(iVar1 + 0x34) +
                                            *(float *)(iVar1 + 0x30) * *(float *)(iVar1 + 0x30))));
        uStack_170 = 0;
        uStack_168 = 0;
        fStack_16c = (float)fVar4;
        (**(code **)(*piVar3 + 0x7c))(&uStack_190,&uStack_170);
      }
      else {
        piVar3 = (int *)FUN_00a7c8a0();
        if (piVar3 == (int *)0x0) goto LAB_00793430;
        (**(code **)(*piVar3 + 0xf8))(0);
        (**(code **)(*piVar3 + 0x1c))();
        piVar3[0x1bb] = 1;
        FUN_00a8caf0(0x32,0,0,0);
        iVar1 = FUN_00a12210(0x3d);
        uStack_194 = *(undefined4 *)(iVar1 + 0x40);
        uStack_190 = *(undefined4 *)(iVar1 + 0x44);
        uStack_18c = *(undefined4 *)(iVar1 + 0x48);
        uStack_188 = *(undefined4 *)(iVar1 + 0x4c);
        iVar1 = FUN_00a12210(0xffffffff);
        fVar4 = (float10)FUN_00ddbaa0(-(*(float *)(iVar1 + 0x18) /
                                       SQRT(*(float *)(iVar1 + 0x38) * *(float *)(iVar1 + 0x38) +
                                            *(float *)(iVar1 + 0x34) * *(float *)(iVar1 + 0x34) +
                                            *(float *)(iVar1 + 0x30) * *(float *)(iVar1 + 0x30))));
        uStack_184 = 0;
        uStack_17c = 0;
        fStack_180 = (float)fVar4;
        (**(code **)(*piVar3 + 0x7c))(&uStack_194,&uStack_184);
      }
      FUN_00a7c950();
    }
  }
LAB_00793430:
  iVar1 = FUN_00a8c760(0x37);
  if (iVar1 != 0) {
    param_1[0x6fc] = 1;
  }
  return;
}

// 00793450  FUN_00793450  size=645  [between]
void __thiscall FUN_00793450(int param_1,byte param_2)

{
  uint uVar1;
  float10 fVar2;
  undefined *puVar3;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  float local_20 [3];
  undefined4 local_14;
  
  if (*(int *)(param_1 + 0x1938) != 0) {
    return;
  }
  if (0.0 < *(float *)(param_1 + 0x193c)) {
    return;
  }
  uVar1 = (uint)param_2;
  if (*(int *)(param_1 + 0x18d4 + uVar1 * 0xc) == 0) {
    return;
  }
  fVar2 = (float10)FUN_00dde300(0xc0a00000,0x40a00000);
  local_20[0] = (float)fVar2;
  local_20[1] = 5.0;
  fVar2 = (float10)FUN_00dde300(0xc0a00000,0x40a00000);
  local_20[2] = (float)fVar2;
  local_14 = 0x3f800000;
  fVar2 = (float10)FUN_00dde300(0xc1200000,0x41200000);
  local_30 = (float)fVar2;
  fVar2 = (float10)FUN_00dde300(0xc1200000,0x41200000);
  local_2c = (float)fVar2;
  fVar2 = (float10)FUN_00dde300(0xc1200000,0x41200000);
  local_28 = (float)fVar2;
  local_24 = 0x3f800000;
  switch(uVar1) {
  case 0:
    puVar3 = &DAT_01882d48;
    break;
  case 1:
    puVar3 = &DAT_01882d6a;
    break;
  case 2:
    puVar3 = &DAT_01882d8c;
    break;
  case 3:
    puVar3 = &DAT_01882db0;
    break;
  case 4:
    puVar3 = &DAT_01882dd2;
    break;
  case 5:
    puVar3 = &DAT_01882df4;
    break;
  case 6:
    puVar3 = &DAT_01882e18;
    break;
  case 7:
    puVar3 = &DAT_01882e3a;
    break;
  case 8:
    puVar3 = &DAT_01882e5c;
    break;
  default:
    goto switchD_00793567_default;
  }
  FUN_0078c240(puVar3,local_20,&local_30,0x43340000,1);
switchD_00793567_default:
  *(undefined4 *)(param_1 + (uVar1 * 3 + 0x633) * 4) = 0;
  *(undefined4 *)(param_1 + 0x18d4 + uVar1 * 0xc) = 0;
  *(undefined4 *)(param_1 + 0x1938) = 1;
  fVar2 = (float10)FUN_00dde300(0,0x3f800000);
  *(float *)(param_1 + 0x193c) = (float)(fVar2 * (float10)10.0 + (float10)1.0);
  return;
}

// 00793700  FUN_00793700  size=671  [between]
void __fastcall FUN_00793700(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  float10 fVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int local_194;
  float local_190;
  float local_18c;
  float local_188;
  undefined4 local_184;
  float local_180 [3];
  undefined4 local_174;
  int local_164;
  undefined1 local_160 [288];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  local_180[1] = 5.0;
  local_174 = 0x3f800000;
  local_194 = 0;
  local_184 = 0x3f800000;
  puVar2 = (undefined4 *)(param_1 + 0x18d4);
  local_164 = 9;
  do {
    fVar3 = (float10)FUN_00dde300(0xc0a00000,0x40a00000);
    local_180[0] = (float)fVar3;
    fVar3 = (float10)FUN_00dde300(0xc0a00000,0x40a00000);
    local_180[2] = (float)fVar3;
    fVar3 = (float10)FUN_00dde300(0xc1200000,0x41200000);
    local_190 = (float)fVar3;
    fVar3 = (float10)FUN_00dde300(0xc1200000,0x41200000);
    local_18c = (float)fVar3;
    fVar3 = (float10)FUN_00dde300(0xc1200000,0x41200000);
    local_188 = (float)fVar3;
    switch(local_194) {
    case 0:
      puVar4 = &DAT_01882d48;
      break;
    case 1:
      puVar4 = &DAT_01882d6a;
      break;
    case 2:
      puVar4 = &DAT_01882d8c;
      break;
    case 3:
      puVar4 = &DAT_01882db0;
      break;
    case 4:
      puVar4 = &DAT_01882dd2;
      break;
    case 5:
      puVar4 = &DAT_01882df4;
      break;
    case 6:
      puVar4 = &DAT_01882e18;
      break;
    case 7:
      puVar4 = &DAT_01882e3a;
      break;
    case 8:
      puVar4 = &DAT_01882e5c;
      break;
    default:
      goto switchD_007937fb_default;
    }
    FUN_0078c240(puVar4,local_180,&local_190,0x43340000,0);
switchD_007937fb_default:
    local_194 = local_194 + 1;
    puVar2[-2] = 0;
    *puVar2 = 0;
    puVar2 = puVar2 + 3;
    local_164 = local_164 + -1;
    if (local_164 == 0) {
      uVar5 = 0;
      uVar1 = FUN_00a7c8a0(0);
      FUN_004039a0(0xaa,uVar1,uVar5);
      local_40 = *(undefined4 *)(param_1 + 0x130);
      local_3c = *(undefined4 *)(param_1 + 0x134);
      local_38 = *(undefined4 *)(param_1 + 0x138);
      local_34 = *(undefined4 *)(param_1 + 0x13c);
      FUN_00a8c930(0,local_160);
      return;
    }
  } while( true );
}

// 007939D0  FUN_007939d0  size=613  [between]
/* WARNING: Removing unreachable block (ram,0x00793ac5) */

void __thiscall FUN_007939d0(int param_1,byte param_2)

{
  float fVar1;
  uint uVar2;
  float10 fVar3;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  float local_20 [3];
  undefined4 local_14;
  
  fVar3 = (float10)FUN_00dde300(0xc0a00000,0x40a00000);
  local_20[0] = (float)fVar3;
  local_20[1] = 5.0;
  fVar3 = (float10)FUN_00dde300(0xc0a00000,0x40a00000);
  local_20[2] = (float)fVar3;
  local_14 = 0x3f800000;
  fVar3 = (float10)FUN_00dde300(0xc1200000,0x41200000);
  local_30 = (float)fVar3;
  fVar3 = (float10)FUN_00dde300(0xc1200000,0x41200000);
  local_2c = (float)fVar3;
  fVar3 = (float10)FUN_00dde300(0xc1200000,0x41200000);
  local_28 = (float)fVar3;
  local_24 = 0x3f800000;
  DAT_01dd0814 = DAT_01dd0814 * 0x19660d + 0x3c6ef35f;
  fVar1 = (float)(DAT_01dd0814 >> 8) * 5.960465e-08;
  uVar2 = (uint)param_2;
  fVar1 = (1.0 - (fVar1 + fVar1)) * 60.0 + 120.0;
  switch(uVar2) {
  case 0:
    FUN_0078c240(&DAT_01882d48,local_20,&local_30,fVar1,0);
    break;
  case 1:
    FUN_0078c240(&DAT_01882d6a,local_20,&local_30,fVar1,0);
    break;
  case 2:
    FUN_0078c240(&DAT_01882d8c,local_20,&local_30,fVar1,0);
    break;
  case 3:
    FUN_0078c240(&DAT_01882db0,local_20,&local_30,fVar1,0);
    break;
  case 4:
    FUN_0078c240(&DAT_01882dd2,local_20,&local_30,fVar1,0);
    break;
  case 5:
    FUN_0078c240(&DAT_01882df4,local_20,&local_30,fVar1,0);
    break;
  case 6:
    FUN_0078c240(&DAT_01882e18,local_20,&local_30,fVar1,0);
    break;
  case 7:
    FUN_0078c240(&DAT_01882e3a,local_20,&local_30,fVar1,0);
    break;
  case 8:
    FUN_0078c240(&DAT_01882e5c,local_20,&local_30,fVar1,0);
  }
  *(undefined4 *)(param_1 + (uVar2 * 3 + 0x633) * 4) = 0;
  *(undefined4 *)(param_1 + 0x18d4 + uVar2 * 0xc) = 0;
  return;
}

// 00793C60  FUN_00793c60  size=242  [between]
void __thiscall FUN_00793c60(int *param_1,int param_2)

{
  short sVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  if ((param_1[0x654] == 0) || (param_2 != 0)) {
    (**(code **)(*param_1 + 0x358))(400,param_1 + 0x3b8);
    param_1[0x3e5] = 1;
    FUN_00ac9420(param_1 + 0x656);
    param_1[0x654] = 1;
    FUN_00ac8d80(0x12,1);
    FUN_00ac8d80(0x11,1);
    FUN_00ac8d80(0xe,1);
    param_1[0x66a] = 0;
  }
  param_2 = CONCAT13(param_2._3_1_,0x20100);
  pbVar3 = (byte *)&param_2;
  iVar2 = 3;
  do {
    if (param_1[(uint)*pbVar3 * 3 + 0x633] != 0) {
      FUN_007939d0((uint)*pbVar3);
    }
    pbVar3 = pbVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  uVar9 = 0x3f800000;
  uVar8 = 0;
  uVar7 = 0x8000210;
  uVar6 = 0x3f800000;
  uVar5 = 0x3d088889;
  uVar4 = 1;
  sVar1 = FUN_00dde2d0(0,2);
  FUN_00aa4080(sVar1 + 0x61,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9);
  return;
}

// 00793D60  FUN_00793d60  size=282  [between]
void __thiscall FUN_00793d60(int *param_1,int param_2)

{
  short sVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  if ((param_1[0x658] == 0) || (param_2 != 0)) {
    (**(code **)(*param_1 + 0x358))(0x191,param_1 + 0x3b8);
    param_1[0x3e6] = 1;
    FUN_00ac9420(param_1 + 0x65a);
    param_1[0x658] = 1;
    param_1[0x660] = 1;
    FUN_00ac9420(param_1 + 0x662);
    FUN_00ac8d80(10,1);
    FUN_00ac8d80(0xb,1);
    FUN_00ac8d80(0xc,1);
    FUN_00ac8d80(0xd,1);
    param_1[0x66b] = 0;
  }
  iVar2 = 3;
  param_2 = CONCAT13(param_2._3_1_,0x50403);
  pbVar3 = (byte *)&param_2;
  do {
    if (param_1[(uint)*pbVar3 * 3 + 0x633] != 0) {
      FUN_007939d0((uint)*pbVar3);
    }
    pbVar3 = pbVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  uVar9 = 0x3f800000;
  uVar8 = 0;
  uVar7 = 0x8000210;
  uVar6 = 0x3f800000;
  uVar5 = 0x3d088889;
  uVar4 = 1;
  sVar1 = FUN_00dde2d0(0,2);
  FUN_00aa4080(sVar1 + 0x61,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9);
  return;
}

// 00793E90  FUN_00793e90  size=282  [between]
void __thiscall FUN_00793e90(int *param_1,int param_2)

{
  short sVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  if ((param_1[0x65c] == 0) || (param_2 != 0)) {
    (**(code **)(*param_1 + 0x358))(0x192,param_1 + 0x3b8);
    param_1[999] = 1;
    FUN_00ac9420(param_1 + 0x65e);
    param_1[0x65c] = 1;
    param_1[0x664] = 1;
    FUN_00ac9420(param_1 + 0x666);
    FUN_00ac8d80(5,1);
    FUN_00ac8d80(6,1);
    FUN_00ac8d80(7,1);
    FUN_00ac8d80(8,1);
    param_1[0x66c] = 0;
  }
  param_2 = CONCAT13(param_2._3_1_,0x80706);
  pbVar3 = (byte *)&param_2;
  iVar2 = 3;
  do {
    if (param_1[(uint)*pbVar3 * 3 + 0x633] != 0) {
      FUN_007939d0((uint)*pbVar3);
    }
    pbVar3 = pbVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  uVar9 = 0x3f800000;
  uVar8 = 0;
  uVar7 = 0x8000210;
  uVar6 = 0x3f800000;
  uVar5 = 0x3d088889;
  uVar4 = 1;
  sVar1 = FUN_00dde2d0(0,2);
  FUN_00aa4080(sVar1 + 0x61,uVar4,uVar5,uVar6,uVar7,uVar8,uVar9);
  return;
}

// 00793FC0  Emc060::R0_ChanceAttack  size=1462  [class]
void __fastcall Emc060::R0_ChanceAttack(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  float10 fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined *puVar8;
  float fVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  uint local_164;
  undefined1 local_160 [348];
  
  local_164 = 0;
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 == (int *)0x0) {
      local_164 = 0;
    }
    else {
      puVar8 = &DAT_01be9db8;
      (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
      iVar1 = FUN_00dd6d80(puVar8);
      local_164 = -(uint)(iVar1 != 0) & (uint)piVar2;
    }
  }
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0xcd,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x70e] = 1;
    if (local_164 != 0) {
      uVar3 = 0;
      FUN_00a92f90(0);
      fVar5 = (float10)FUN_00407b40(uVar3);
      fVar9 = (float)fVar5;
      uVar3 = 0;
      FUN_00a92f90(0,fVar9);
      FUN_00407b10(uVar3,fVar9);
    }
    iVar1 = FUN_00a81330();
    if (iVar1 == 0) {
      FUN_00dd5650(&DAT_01647d50);
      FUN_00785ef0();
      uVar10 = 0;
      uVar7 = 0;
      uVar6 = 0;
      uVar3 = 0x5e;
      FUN_00a81330(0x5e,0,0,0);
      FUN_00a7c8a0();
      FUN_00a8caf0(uVar3,uVar6,uVar7,uVar10);
      FUN_00a81330();
      piVar2 = (int *)FUN_00a7c8a0();
      (**(code **)(*piVar2 + 0x20))();
    }
    else {
      FUN_0077e930(iVar1);
      piVar2 = (int *)FUN_00a7c8a0();
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0xf8))(0);
        FUN_00a8caf0(0x5e,0,0,0);
      }
    }
    iVar1 = FUN_00a81330();
    if ((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
      FUN_00a93090(*(int *)(iVar1 + 0x604) + 1);
    }
    FUN_008e3c10();
    (**(code **)(*param_1 + 0x318))();
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_00ac8d40(1);
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 2:
    FUN_00aa4080(0xce,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a81330();
    piVar2 = (int *)FUN_00a7c8a0();
    (**(code **)(*piVar2 + 0x1c))();
    FUN_00a81330();
    iVar1 = FUN_00a7c8a0();
    *(undefined4 *)(iVar1 + 0x6ec) = 1;
    FUN_00a7c950();
    FUN_00ac9300("hontai");
    FUN_00ac9300("arm_a_r");
    FUN_00ac9300("arm_b_r");
    FUN_00ac9300("arm_a_l");
    FUN_00ac9300("arm_b_l");
    param_1[0x6fd] = 0;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 4:
    FUN_00aa4080(0xcf,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_008e6d00();
    (**(code **)(*param_1 + 0x314))();
    FUN_00c52770(param_1[0x71c],0x40a00000);
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x250] = 0x32;
      FUN_00a8c9b0(0,6,0x3f800000,0);
      piVar2 = param_1 + 0x580;
      uVar3 = FUN_00a7c8a0(piVar2);
      FUN_004117d0(7,uVar3,piVar2);
      puVar11 = local_160;
      uVar3 = FUN_00e00b40(0x2c060,puVar11);
      FUN_00a8c930(uVar3,puVar11);
      iVar1 = FUN_00e5e0c0("em0060_se_dmg_exp_death",param_1,0xffffffff,0);
      param_1[0x711] = iVar1;
      (**(code **)(*param_1 + 0x364))(0xffffffff);
      (**(code **)(*param_1 + 0x20))();
      if (((int *)param_1[0x1ec] != (int *)0x0) &&
         (iVar1 = (**(code **)(*(int *)param_1[0x1ec] + 8))(), iVar1 != 0)) {
        (**(code **)(*(int *)param_1[0x1ec] + 0xdc))(0);
      }
      FUN_00c4d1a0(param_1[0x13c],0);
    }
    break;
  case 6:
    iVar1 = thunk_FUN_00e58ed0(param_1[0x711]);
    if (iVar1 == 0) {
      FUN_009fdde0();
    }
  }
  iVar1 = FUN_00a8c760(0x32);
  if (iVar1 != 0) {
    FUN_0078c7f0(1);
    FUN_00a8c9b0(0,0,0x3f800000,0);
    FUN_00eaa6e0(0x3f800000,0);
    FUN_0043f5b0(9,0x41200000);
    (**(code **)(*param_1 + 0x344))(5,0,1);
    FUN_00eaa6e0(0x41200000,0);
    FUN_00eaa6e0(0x41200000,0);
    FUN_00eaa6e0(0x41200000,0);
    FUN_00eaa6e0(0x41200000,0);
  }
  iVar1 = FUN_00a8c760(0x33);
  if (iVar1 != 0) {
    FUN_00793c60(1);
  }
  iVar1 = FUN_00a8c760(0x34);
  if (iVar1 != 0) {
    FUN_00793d60(1);
  }
  iVar1 = FUN_00a8c760(0x35);
  if (iVar1 != 0) {
    FUN_00793e90(1);
  }
  iVar4 = 1;
  piVar2 = param_1 + 0x650;
  iVar1 = 6;
  do {
    if (*piVar2 == 0) {
      iVar4 = 0;
    }
    piVar2 = piVar2 + 4;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  param_1[0x668] = iVar4;
  FUN_007794e0(local_164);
  return;
}

// 00794610  FUN_00794610  size=128  [callgraph]
undefined4 __thiscall FUN_00794610(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(int *)(param_1 + 0xe9c) == 0) && (*(int *)(param_1 + 0x1b94) == 0)) {
    switch(param_2) {
    case 0:
      uVar2 = FUN_0078dfd0();
      return uVar2;
    case 1:
      uVar2 = FUN_0078e070();
      return uVar2;
    case 3:
      iVar1 = FUN_0077ab10();
      if (iVar1 != 0) {
        uVar2 = FUN_0078e800();
        return uVar2;
      }
      break;
    case 4:
      iVar1 = FUN_0077ab30();
      if (iVar1 != 0) {
        uVar2 = FUN_0078ea50();
        return uVar2;
      }
      break;
    case 5:
      uVar2 = FUN_00782db0();
      return uVar2;
    case 6:
      uVar2 = FUN_0078ee00();
      return uVar2;
    case 7:
      uVar2 = FUN_0078ee80();
      return uVar2;
    }
  }
  return 0;
}

// 007949A0  FUN_007949a0  size=249  [callgraph]
void __fastcall FUN_007949a0(int *param_1)

{
  int iVar1;
  int *piStack_4;
  
  piStack_4 = param_1;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x1f,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    if ((((param_1[0x3a7] == 0) && (param_1[0x6e5] == 0)) && (iVar1 = FUN_0077ab10(), iVar1 != 0))
       && (iVar1 = FUN_0078e800(), iVar1 != 0)) {
      return;
    }
    (**(code **)(*param_1 + 0x34c))();
  }
  iVar1 = FUN_00a8c760(0x3b);
  if (iVar1 != 0) {
    piStack_4 = (int *)param_1[0x13c];
    iVar1 = FUN_0078a100(&piStack_4);
    if (((iVar1 == 1) && (param_1[0x3a7] == 0)) && (param_1[0x6e5] == 0)) {
      FUN_0078ee80();
      return;
    }
  }
  return;
}

// 00794AA0  FUN_00794aa0  size=282  [callgraph]
void __fastcall FUN_00794aa0(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  if (param_1[0x187] == 0) {
    uVar1 = param_1[0x50f];
    param_1[0x50f] = param_1[0x50f] ^ 0x2000000;
    iVar2 = 0x6a - (uint)((uVar1 & 0x2000000) != 0);
    if ((float)param_1[0x245] * (float)param_1[0x245] < 2.4674013) {
      iVar2 = 0x6b;
    }
    FUN_00aa4080(iVar2,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00eaa6e0(0x41200000,0);
    param_1[0x6ba] = 0;
    param_1[0x6d3] = param_1[param_1[0x3ad] + 0x6a8];
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if ((iVar2 != 0) &&
     (((param_1[0x3a7] != 0 || (param_1[0x6e5] != 0)) || (iVar2 = FUN_00782db0(), iVar2 == 0)))) {
                    /* WARNING: Could not recover jumptable at 0x00794bb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  return;
}

// 00794BC0  FUN_00794bc0  size=258  [callgraph]
void __fastcall FUN_00794bc0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  if (param_1[0x187] == 0) {
    uVar2 = 0x6e;
    if ((float)param_1[0x245] * (float)param_1[0x245] < 2.4674013) {
      uVar2 = 0x6d;
    }
    FUN_00aa4080(uVar2,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x6ba] = 0;
    param_1[0x6d3] = param_1[param_1[0x3ad] + 0x6a8];
    FUN_00eaa6e0(0x41200000,0);
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if ((iVar1 != 0) &&
     (((param_1[0x3a7] != 0 || (param_1[0x6e5] != 0)) || (iVar1 = FUN_00782db0(), iVar1 == 0)))) {
                    /* WARNING: Could not recover jumptable at 0x00794cc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  return;
}

// 00794CD0  FUN_00794cd0  size=647  [callgraph]
void __fastcall FUN_00794cd0(int *param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  int iVar3;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  iVar3 = FUN_00a81330();
  if (iVar3 != 0) {
    FUN_00a7c8a0();
  }
  switch(param_1[0x187]) {
  case 0:
    iVar3 = FUN_00ac82f0();
    if (iVar3 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 0x3d088889;
    }
    FUN_00aa4080(0x69,0,uVar1,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00eaa6e0(0x41200000,0);
    iVar3 = param_1[0x246];
    FUN_00e26e90();
    *(undefined4 *)(iVar3 + 0xe4) = 0x3dcccccd;
    *(undefined4 *)(iVar3 + 0xe8) = 0x3dcccccd;
    *(undefined4 *)(iVar3 + 0xec) = 0x3dcccccd;
    (**(code **)(*param_1 + 0x308))(0x3f800000,0x393702d3,0x40490fdb,0);
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00794dfa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    iVar3 = FUN_00a8c760(0x3a);
    if (((iVar3 != 0) && (param_1[0x3a7] == 0)) &&
       ((param_1[0x6e5] == 0 && (iVar3 = FUN_0078ee00(), iVar3 != 0)))) {
      return;
    }
    iVar3 = FUN_00a8c760(0x3b);
    if (iVar3 == 0) {
      return;
    }
    if (param_1[0x3a7] != 0) {
      return;
    }
    if (param_1[0x6e5] != 0) {
      return;
    }
    FUN_0078ee80();
    return;
  case 2:
    FUN_00aa4080(0x6e,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x248] = 0x41700000;
    pcVar2 = *(code **)(*param_1 + 0x308);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar2)(0x3f800000,0x393702d3,0x40490fdb,0);
    break;
  case 3:
    break;
  default:
    goto switchD_00794d02_default;
  }
  param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
  iVar3 = FUN_00a952e0(0,0x41a00000);
  if (iVar3 != 0) {
    FUN_00dde2d0(0,2);
  }
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    if (((param_1[0x3a7] == 0) && (param_1[0x6e5] == 0)) && (iVar3 = FUN_00782db0(), iVar3 != 0)) {
switchD_00794d02_default:
      return;
    }
    (**(code **)(*param_1 + 0x34c))();
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00794F70  FUN_00794f70  size=524  [callgraph]
void __fastcall FUN_00794f70(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    FUN_00a7c8a0();
  }
  switch(param_1[0x187]) {
  case 0:
    iVar2 = FUN_00ac82f0();
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 0x3d088889;
    }
    FUN_00aa4080(0x6b,0,uVar1,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00eaa6e0(0x41200000,0);
    iVar2 = param_1[0x246];
    FUN_00e26e90();
    *(undefined4 *)(iVar2 + 0xe4) = 0x3dcccccd;
    *(undefined4 *)(iVar2 + 0xe8) = 0x3dcccccd;
    *(undefined4 *)(iVar2 + 0xec) = 0x3dcccccd;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      (**(code **)(*param_1 + 0x34c))();
    }
    iVar2 = FUN_00a8c760(0x3a);
    if ((((iVar2 != 0) && (param_1[0x3a7] == 0)) && (param_1[0x6e5] == 0)) &&
       (iVar2 = FUN_0078ee00(), iVar2 != 0)) {
      return;
    }
    iVar2 = FUN_00a8c760(0x3b);
    if (iVar2 == 0) {
      return;
    }
    if (param_1[0x3a7] != 0) {
      return;
    }
    if (param_1[0x6e5] != 0) {
      return;
    }
    FUN_0078ee80();
    return;
  case 2:
    FUN_00aa4080(0x6d,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x41700000;
    break;
  case 3:
    break;
  default:
    return;
  }
  param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
  iVar2 = FUN_00a952e0(0,0x41a00000);
  if (iVar2 != 0) {
    FUN_00dde2d0(0,2);
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00795190  FUN_00795190  size=524  [callgraph]
void __fastcall FUN_00795190(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    FUN_00a7c8a0();
  }
  switch(param_1[0x187]) {
  case 0:
    iVar2 = FUN_00ac82f0();
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 0x3d088889;
    }
    FUN_00aa4080(0x5d,0,uVar1,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00eaa6e0(0x41200000,0);
    iVar2 = param_1[0x246];
    FUN_00e26e90();
    *(undefined4 *)(iVar2 + 0xe4) = 0x3dcccccd;
    *(undefined4 *)(iVar2 + 0xe8) = 0x3dcccccd;
    *(undefined4 *)(iVar2 + 0xec) = 0x3dcccccd;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      (**(code **)(*param_1 + 0x34c))();
    }
    iVar2 = FUN_00a8c760(0x3a);
    if ((((iVar2 != 0) && (param_1[0x3a7] == 0)) && (param_1[0x6e5] == 0)) &&
       (iVar2 = FUN_0078ee00(), iVar2 != 0)) {
      return;
    }
    iVar2 = FUN_00a8c760(0x3b);
    if (iVar2 == 0) {
      return;
    }
    if (param_1[0x3a7] != 0) {
      return;
    }
    if (param_1[0x6e5] != 0) {
      return;
    }
    FUN_0078ee80();
    return;
  case 2:
    FUN_00aa4080(0x6d,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x41700000;
    break;
  case 3:
    break;
  default:
    return;
  }
  param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
  iVar2 = FUN_00a952e0(0,0x41a00000);
  if (iVar2 != 0) {
    FUN_00dde2d0(0,2);
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 007953B0  FUN_007953b0  size=114  [callgraph]
void __thiscall FUN_007953b0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  
  switch(param_2) {
  case 0:
    FUN_0078c7f0(param_3);
    break;
  case 1:
    FUN_00793c60(param_3);
    break;
  case 2:
    FUN_00793d60(param_3);
    break;
  case 3:
    FUN_00793e90(param_3);
  }
  if (param_1[0x66d] == 0) {
    pcVar1 = *(code **)(*param_1 + 0x358);
    param_1[0x66d] = 1;
    (*pcVar1)(0x195,param_1 + 0x5ac);
  }
  return;
}

// 00795440  FUN_00795440  size=86  [callgraph]
void __fastcall FUN_00795440(int param_1)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    if (((*(int *)(param_1 + (uVar2 + 0x194) * 0x10) == 0) &&
        (*(int *)(param_1 + 0x19a4 + uVar2 * 4) < 1)) &&
       (((char)uVar2 != '\0' ||
        (((*(int *)(param_1 + 0x1950) != 0 && (*(int *)(param_1 + 0x1960) != 0)) &&
         (*(int *)(param_1 + 0x1970) != 0)))))) {
      FUN_007953b0(uVar2,0);
    }
    bVar1 = (char)uVar2 + 1;
    uVar2 = (uint)bVar1;
  } while (bVar1 < 4);
  return;
}

// 007954B0  FUN_007954b0  size=302  [callgraph]
void __fastcall FUN_007954b0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int local_4;
  
  iVar2 = 0;
  local_4 = 4;
  do {
    switch(iVar2) {
    case 0:
      if (param_1[0x650] == 0) {
        (**(code **)(*param_1 + 0x358))(0x193,param_1 + 0x3b8);
        param_1[0x3e4] = 1;
        FUN_00ac9420(param_1 + 0x652);
        param_1[0x650] = 1;
        FUN_00ac8d80(0,1);
        FUN_00ac8d80(1,1);
        FUN_00ac8d80(2,1);
        FUN_00ac8d80(3,1);
        FUN_00ac8d80(0xf,1);
        FUN_00ac8d80(0x10,1);
        FUN_00ac8d80(9,1);
        FUN_00ac8d80(4,1);
        if ((param_1[0xcc] != 0) && (*(int *)(param_1[0xcc] + 0xcc) == 0)) {
          FUN_0077f0b0();
        }
        param_1[0x669] = 0;
      }
      break;
    case 1:
      FUN_00793c60(0);
      break;
    case 2:
      FUN_00793d60(0);
      break;
    case 3:
      FUN_00793e90(0);
    }
    if (param_1[0x66d] == 0) {
      pcVar1 = *(code **)(*param_1 + 0x358);
      param_1[0x66d] = 1;
      (*pcVar1)(0x195,param_1 + 0x5ac);
    }
    iVar2 = iVar2 + 1;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  return;
}

// 007955F0  FUN_007955f0  size=378  [callgraph]
undefined4 __thiscall FUN_007955f0(int *param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  bVar2 = false;
  bVar3 = false;
  if ((*(uint *)(param_2 + 0x90) & 0x20000) != 0) {
    bVar2 = true;
    bVar3 = true;
    bVar1 = false;
    piVar4 = param_1 + 0x669;
    iVar5 = 4;
    do {
      if (0 < *piVar4) {
        bVar1 = true;
      }
      piVar4 = piVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    if (bVar1) {
      FUN_007954b0();
      (**(code **)(*param_1 + 0x358))(399,0);
    }
  }
  if (((*(uint *)(param_2 + 0x8c) & 0x600) != 0) || ((*(uint *)(param_2 + 0x90) & 0x40000) != 0)) {
    bVar3 = true;
  }
  if ((((bVar2) || (param_1[0x650] != 0)) || (param_1[0x654] != 0)) ||
     ((param_1[0x658] != 0 || (param_1[0x65c] != 0)))) {
    iVar5 = FUN_00ac82f0();
    if ((iVar5 != 0) || (bVar3)) {
      iVar5 = FUN_00a8e520();
      if ((((iVar5 != 0) || (bVar3)) && (*(int *)(param_2 + 0x94) != 0)) &&
         ((*(int *)(param_2 + 0xec) != 0 || (bVar3)))) {
        iVar5 = FUN_00ac8cd0(param_2);
        if (iVar5 != 0) {
          iVar6 = 0;
          iVar5 = FUN_00a81330();
          if (iVar5 != 0) {
            iVar6 = FUN_00a7c8a0();
          }
          FUN_00ac8d00(param_1,param_2,0);
          (**(code **)(*param_1 + 0x198))(iVar6,param_2,0x100);
          if (iVar6 != 0) {
            param_1[0x6f4] = *(int *)(iVar6 + 0x40);
            param_1[0x6f5] = *(int *)(iVar6 + 0x44);
            param_1[0x6f6] = *(int *)(iVar6 + 0x48);
            param_1[0x6f7] = *(int *)(iVar6 + 0x4c);
          }
          param_1[0x6f8] = *(int *)(param_2 + 0x20);
          param_1[0x6f9] = *(int *)(param_2 + 0x24);
          param_1[0x6fa] = *(int *)(param_2 + 0x28);
          param_1[0x6fb] = *(int *)(param_2 + 0x2c);
          FUN_00a9ba90(param_2);
          return 1;
        }
      }
    }
  }
  return 0;
}

// 00795770  FUN_00795770  size=413  [callgraph]
void __thiscall FUN_00795770(int *param_1,int param_2)

{
  code *pcVar1;
  uint uVar2;
  byte bVar3;
  
  param_1[0x669] = param_1[0x669] - param_2;
  param_1[0x66a] = param_1[0x66a] - param_2;
  param_1[0x66b] = param_1[0x66b] - param_2;
  param_1[0x66c] = param_1[0x66c] - param_2;
  bVar3 = 0;
  do {
    uVar2 = (uint)bVar3;
    if (((param_1[(uVar2 + 0x194) * 4] == 0) && (param_1[uVar2 + 0x669] < 1)) &&
       ((bVar3 != 0 || (((param_1[0x654] != 0 && (param_1[0x658] != 0)) && (param_1[0x65c] != 0)))))
       ) {
      switch(uVar2) {
      case 0:
        if (param_1[0x650] == 0) {
          (**(code **)(*param_1 + 0x358))(0x193,param_1 + 0x3b8);
          param_1[0x3e4] = 1;
          FUN_00ac9420(param_1 + 0x652);
          param_1[0x650] = 1;
          FUN_00ac8d80(0,1);
          FUN_00ac8d80(1,1);
          FUN_00ac8d80(2,1);
          FUN_00ac8d80(3,1);
          FUN_00ac8d80(0xf,1);
          FUN_00ac8d80(0x10,1);
          FUN_00ac8d80(9,1);
          FUN_00ac8d80(4,1);
          if ((param_1[0xcc] != 0) && (*(int *)(param_1[0xcc] + 0xcc) == 0)) {
            FUN_0077f0b0();
          }
          param_1[0x669] = 0;
        }
        break;
      case 1:
        FUN_00793c60(0);
        break;
      case 2:
        FUN_00793d60(0);
        break;
      case 3:
        FUN_00793e90(0);
      }
      if (param_1[0x66d] == 0) {
        pcVar1 = *(code **)(*param_1 + 0x358);
        param_1[0x66d] = 1;
        (*pcVar1)(0x195,param_1 + 0x5ac);
      }
    }
    bVar3 = bVar3 + 1;
  } while (bVar3 < 4);
  return;
}

// 00795920  Emc060::vf40  size=3106  [class]
undefined4 __fastcall Emc060::vf40(int *param_1)

{
  uint *puVar1;
  undefined2 uVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  float10 fVar11;
  char *pcVar12;
  int iStack_b4;
  int iStack_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  int local_94;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 local_80 [124];
  
  iVar4 = EmBaseDLC::vf40();
  if (iVar4 == 0) {
    return 0;
  }
  FUN_00a8d280();
  lib::AllocatedArray<cEnemySubState>::AllocatedArray<cEnemySubState>
            (param_1[0x13c],5,&DAT_01882e80,4);
  FUN_00a88b50(4,0);
  local_a8 = 0;
  if (0 < (short)param_1[0xc9]) {
    local_ac = 0;
    do {
      iVar10 = param_1[200] + local_ac;
      iVar4 = *(int *)(*(int *)(iVar10 + 0x60) + 0x40);
      if ((iVar4 != 0) && (iVar4 = FUN_00fdbbd0(iVar4,&DAT_0163dcac), iVar4 != 0)) {
        puVar1 = (uint *)(iVar10 + 0x38);
        *puVar1 = *puVar1 & 0xfffffffe;
      }
      local_ac = local_ac + 0x70;
      local_a8 = local_a8 + 1;
    } while (local_a8 < (short)param_1[0xc9]);
  }
  param_1[0x1ed] = 0;
  local_a8 = FUN_00acf600(0x2c06f,"Emc060Body");
  local_a4 = param_1[300];
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e272b0(local_a4,0x20060);
  iVar4 = FUN_00ac8a50();
  if (iVar4 == 0) {
    FUN_00ac94e0(&DAT_0163d9a8);
  }
  if ((local_a8 != 0) && (*(int *)(local_a8 + 0x370) != 0)) {
    FUN_00a1abe0(0);
  }
  FUN_00ac8e10(0);
  FUN_00ac8eb0(1,1);
  local_8c = 0x3f666666;
  local_88 = 0x3f99999a;
  local_84 = 0x3f8ccccd;
  local_a0 = 0x3e4ccccd;
  local_9c = 0x40400000;
  local_98 = 0x40000000;
  FUN_00a8e4d0(&local_a0,&local_8c);
  FUN_00a8edf0(500);
  param_1[0x50f] = 0;
  param_1[0x510] = 0;
  param_1[0x57c] = 0;
  iVar4 = FUN_00c5def0(param_1[0x13c]);
  param_1[0x25c] = iVar4;
  FUN_00405230();
  local_a0 = 0;
  local_9c = 0;
  local_98 = 0;
  FUN_00c151f0(1,param_1[0x13c],0,&local_a0,0,0x41000000,0x3f99999a,2,0);
  FUN_00c57830(local_80);
  param_1[0x1b1] = 0;
  param_1[0x1b4] = 0;
  param_1[0x1b5] = 0;
  param_1[0x1b6] = 0;
  param_1[0x1b7] = local_94;
  param_1[0x1bb] = 1;
  param_1[0x1ba] = 0x3fc00000;
  param_1[0x1b9] = -1;
  param_1[0x1b8] = 4;
  iVar4 = FUN_008ec660(param_1,0x40200000,0x3f8ccccd,0x41a00000,0x41a00000,0x78,7,0);
  param_1[0x1d9] = iVar4;
  *(float *)(iVar4 + 0xf4) = *(float *)(iVar4 + 0xf4) * 0.5;
  FUN_008e7400(0x200000);
  FUN_008e6d00();
  FUN_00a929d0();
  if (param_1[0x1d5] != 0) {
    iVar4 = FUN_00ac8660(0,0x1a);
    uVar2 = FUN_00ac8660(0,0x1b);
    sVar3 = FUN_00dde2d0(0,uVar2);
    local_a4 = sVar3 + iVar4;
    uVar5 = FUN_00fdbc60();
    local_a4 = uVar5;
    if (param_1[0x128] == 1) {
      FUN_00ac85c0(5,0x8b);
      uVar5 = FUN_00fdbc60();
    }
    FUN_00a8edf0(uVar5);
    Emc060Config::initializeBattleParameterConfig();
  }
  local_a4 = 1;
  if ((param_1[0xcc] == 0) || (*(int *)(param_1[0xcc] + 0xcc) != 0)) goto LAB_00796077;
  local_a8 = FUN_00de3850(0,"_col.hkx",0);
  iVar4 = FUN_00dd3500(0x3c,&DAT_01b7bd48);
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = RigidBodyCollection::RigidBodyCollection_2();
  }
  param_1[0x1ec] = iVar4;
  if (iVar4 != 0) {
    local_ac = param_1[0x13c];
    uVar5 = FUN_00de3ee0(local_a8);
    uVar6 = FUN_00de3cf0(local_a8);
    iVar4 = FUN_008f6410(local_ac,uVar6,uVar5);
    if (iVar4 != 0) {
      FUN_008f2cd0(0);
      (**(code **)(*(int *)param_1[0x1ec] + 0x108))(8);
      puVar7 = (undefined4 *)FUN_009f8b60();
      (**(code **)(*(int *)param_1[0x1ec] + 0x114))(*puVar7);
      FUN_008f1600(0x80000000);
      FUN_008f1600(0x20);
      FUN_008f1600(0x40);
      FUN_008f1040(0x400000);
      FUN_008f12d0(0x400000);
      FUN_008f18c0(0x100);
      FUN_008f18c0(0x10000);
    }
  }
  lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>_2(0x40);
  local_ac = FUN_00a8d2a0();
  puVar7 = (undefined4 *)FUN_009f8b60();
  iVar4 = CollisionCapsule::CollisionCapsule(2,*puVar7,0);
  if (iVar4 != 0) {
    *(undefined4 *)(iVar4 + 0x380) = 0;
    FUN_00d77c50(param_1[0x13c],0);
    *(undefined4 *)(iVar4 + 0x594) = 0x3fe66666;
    *(undefined4 *)(iVar4 + 0x590) = 0x3f19999a;
    *(undefined4 *)(iVar4 + 0x570) = 0;
    *(undefined4 *)(iVar4 + 0x574) = 0;
    *(undefined4 *)(iVar4 + 0x578) = 0x3ecccccd;
    *(int *)(iVar4 + 0x57c) = local_94;
    *(undefined4 *)(iVar4 + 0x580) = 0x3fc90fdb;
    *(undefined4 *)(iVar4 + 0x584) = 0;
    *(undefined4 *)(iVar4 + 0x588) = 0;
    *(int *)(iVar4 + 0x58c) = local_94;
    FUN_00a93a00(iVar4,local_ac);
    FUN_00d7b0f0();
    FUN_00d7b890();
  }
  puVar7 = (undefined4 *)FUN_009f8b60();
  iVar4 = CollisionCapsule::CollisionCapsule(2,*puVar7,0);
  if (iVar4 != 0) {
    *(undefined4 *)(iVar4 + 0x380) = 1;
    FUN_00d77c50(param_1[0x13c],0x11);
    *(undefined4 *)(iVar4 + 0x594) = 0x3f19999a;
    *(undefined4 *)(iVar4 + 0x590) = 0x3e99999a;
    *(undefined4 *)(iVar4 + 0x570) = 0;
    *(undefined4 *)(iVar4 + 0x574) = 0;
    *(undefined4 *)(iVar4 + 0x578) = 0;
    *(int *)(iVar4 + 0x57c) = local_94;
    *(undefined4 *)(iVar4 + 0x580) = 0xbf060a92;
    *(undefined4 *)(iVar4 + 0x584) = 0;
    *(undefined4 *)(iVar4 + 0x588) = 0;
    *(int *)(iVar4 + 0x58c) = local_94;
    FUN_00a93a00(iVar4,local_ac);
    FUN_00d7b0f0();
    FUN_00d7b890();
  }
  puVar7 = (undefined4 *)FUN_009f8b60();
  iVar4 = CollisionCapsule::CollisionCapsule(2,*puVar7,0);
  if (iVar4 != 0) {
    *(undefined4 *)(iVar4 + 0x380) = 2;
    FUN_00d77c50(param_1[0x13c],0x18);
    *(undefined4 *)(iVar4 + 0x594) = 0x3f19999a;
    *(undefined4 *)(iVar4 + 0x590) = 0x3e99999a;
    *(undefined4 *)(iVar4 + 0x570) = 0;
    *(undefined4 *)(iVar4 + 0x574) = 0;
    *(undefined4 *)(iVar4 + 0x578) = 0;
    *(int *)(iVar4 + 0x57c) = local_94;
    *(undefined4 *)(iVar4 + 0x580) = 0xbf060a92;
    *(undefined4 *)(iVar4 + 0x584) = 0;
    *(undefined4 *)(iVar4 + 0x588) = 0;
    *(int *)(iVar4 + 0x58c) = local_94;
    FUN_00a93a00(iVar4,local_ac);
    FUN_00d7b0f0();
    FUN_00d7b890();
  }
  iVar4 = lib::StaticArray<Constraints,32>::StaticArray<Constraints,32>();
  if (iVar4 == 0) {
    return 0;
  }
  if ((param_1[0xcc] != 0) && (*(int *)(param_1[0xcc] + 0xcc) == 0)) {
    FUN_0078acb0(1,"Wp0311",0x30311,2,4,0xffffffff);
    FUN_0078acb0(2,"Wp0315",0x30315,2,4,0xffffffff);
    if (param_1[0x128] == 0) {
      uVar6 = 0;
      uVar5 = 0x30310;
      pcVar12 = "Wp0310";
    }
    else {
      if (param_1[0x128] != 1) goto LAB_0079604d;
      uVar6 = 1;
      uVar5 = 0x30312;
      pcVar12 = "Wp0312";
    }
    FUN_0078acb0(0,pcVar12,uVar5,uVar6,0x23,0xffffffff);
  }
LAB_0079604d:
  if ((*(byte *)(param_1 + 0x12a) & 4) == 0) {
    (**(code **)(*param_1 + 0x358))(0,param_1 + 1000);
    piVar8 = param_1;
    FUN_00c1cf50(param_1);
    FUN_00c54720(piVar8);
  }
LAB_00796077:
  FUN_00a82790(param_1[0x13c],0x25,0);
  param_1[0x47c] = param_1[0x47c] | 2;
  FUN_00a82870(0x40490fdb,0xc0490fdb,0x3e99999a,0x3ae4c388,0x3e0efa35);
  FUN_00a82790(param_1[0x13c],0x26,0);
  param_1[0x4b0] = param_1[0x4b0] | 2;
  FUN_00a82840(0,0xbfb2b8c2,0x3e99999a,0x3ae4c388,0x3e0efa35);
  param_1[0x5d9] = 0;
  param_1[0x5da] = 0;
  param_1[0x5db] = 0;
  param_1[0x4e5] = 0;
  if ((param_1[0xcc] != 0) && (*(int *)(param_1[0xcc] + 0xcc) == 0)) {
    piVar8 = param_1 + 0x5e7;
    iVar4 = 0x10;
    do {
      *(undefined2 *)(piVar8 + -4) = 0;
      *piVar8 = 0;
      piVar8 = piVar8 + 5;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *(undefined2 *)(param_1 + 0x6d8) = 0;
  *(undefined1 *)((int)param_1 + 0x1b62) = 0;
  FUN_00778030();
  FUN_00778240();
  FUN_0077ebe0();
  param_1[0x5dd] = 0;
  param_1[0x5de] = 0;
  param_1[0x3e4] = 0;
  param_1[0x5df] = 0x43960000;
  param_1[0x3e5] = 0;
  param_1[0x3e6] = 0;
  param_1[0x5dc] = 0x44160000;
  param_1[999] = 0;
  param_1[0x508] = 0;
  param_1[0x3b1] = 0;
  param_1[0x5e0] = 0;
  param_1[0x3ae] = 0;
  param_1[0x6d7] = 0;
  param_1[0x3af] = 0;
  param_1[0x3ad] = 0;
  param_1[0x3b0] = 0x44610000;
  param_1[0x66e] = 0;
  param_1[0x66f] = 1;
  fVar11 = (float10)(**(code **)(*(int *)param_1[0x1d5] + 0x34))(0x16);
  param_1[0x670] = (int)(float)fVar11;
  fVar11 = (float10)(**(code **)(*(int *)param_1[0x1d5] + 0x34))(0x17);
  param_1[0x671] = (int)(float)fVar11;
  fVar11 = (float10)(**(code **)(*(int *)param_1[0x1d5] + 0x3c))(0x17);
  param_1[0x672] = (int)(float)fVar11;
  param_1[0x3b0] = param_1[0x670];
  sVar3 = FUN_00dde2d0(0,0x32);
  param_1[0x5e1] = sVar3 + 100;
  param_1[0x5e2] = 0;
  param_1[0x6dd] = 0;
  param_1[0x6de] = 0;
  param_1[0x6df] = 0;
  param_1[0x6e0] = 0;
  *(undefined1 *)(param_1 + 0x6e1) = 0;
  iVar4 = FUN_00a8cab0();
  param_1[0x3a9] = iVar4;
  param_1[0x3aa] = param_1[0x3a8];
  FUN_00a8caf0(0x10000,0,0,0);
  param_1[0x3a8] = 0;
  FUN_00a962d0(0,0);
  param_1[0x4e7] = 0;
  param_1[0x706] = 0x42700000;
  param_1[0x20b] = 4;
  param_1[0x20c] = 5;
  param_1[0x701] = -0x40800000;
  param_1[0x6fc] = 0;
  param_1[0x6fe] = 0;
  param_1[0x707] = 0;
  param_1[0x702] = 0;
  param_1[0x708] = 0;
  param_1[0x71c] = -1;
  param_1[0x709] = 0;
  param_1[0x6fd] = 1;
  param_1[0x70c] = 0;
  param_1[0x704] = 0;
  param_1[0x71b] = 0;
  param_1[0x705] = 0;
  param_1[0x3b2] = 0;
  param_1[0x70a] = 0;
  param_1[0x718] = 0;
  param_1[0x70b] = 0;
  param_1[0x70d] = 1;
  param_1[0x719] = 0x44610000;
  param_1[0x71a] = 0;
  param_1[0x6e5] = 0;
  param_1[0x70e] = 0;
  if ((param_1[0xcc] != 0) && (*(int *)(param_1[0xcc] + 0xcc) == 0)) {
    iStack_b4 = param_1[0x13c];
    Emc060Team::entry(&iStack_b4);
  }
  if ((*(byte *)(param_1 + 0x12a) & 1) != 0) {
    (**(code **)(*param_1 + 0x110))(1);
    param_1[0x710] = 0x42700000;
    (**(code **)(*param_1 + 0x358))(0x208,param_1 + 0x414);
    FUN_00a8caf0(0x8002b,0,0,0);
    param_1[0x3a8] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4e7] = 0;
  }
  if ((*(byte *)(param_1 + 0x12a) & 2) != 0) {
    FUN_00a8caf0(0x8002c,0,0,0);
    param_1[0x3a8] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4e7] = 0;
  }
  if ((*(byte *)(param_1 + 0x12a) & 4) != 0) {
    FUN_00a8caf0(0x8002d,0,0,0);
    param_1[0x3a8] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4e7] = 0;
    if (param_1[0x509] != 0) {
      FUN_00442430(0);
    }
    if (param_1[0x50a] != 0) {
      FUN_00442430(0);
    }
    if (param_1[0x50b] != 0) {
      FUN_00442430(0);
    }
    iVar4 = FUN_00ac89d0();
    if (iVar4 != 0) {
      iVar4 = FUN_00ac89d0();
      iVar9 = 0;
      iVar10 = 0;
      if (0 < *(short *)(iVar4 + 0x32c)) {
        do {
          *(undefined4 *)(iVar9 + 0x460 + *(int *)(iVar4 + 0x328)) = 0;
          iVar10 = iVar10 + 1;
          iVar9 = iVar9 + 0x560;
        } while (iVar10 < *(short *)(iVar4 + 0x32c));
      }
    }
    FUN_00ac8e10(1);
    param_1[0x70d] = 0;
    iStack_b0 = 0;
    FUN_00a88b50(1,0);
  }
  FUN_007786f0();
  param_1[0x3a4] = 0x10000;
  param_1[0x3a5] = 0x10000;
  param_1[0x3a6] = 0x10000;
  param_1[0x3a7] = 0;
  if (iStack_b0 != 0) {
    param_1[0x36a] = 0;
    param_1[0x36c] = 0;
  }
  return 1;
}

// 00796560  FUN_00796560  size=382  [between]
void __fastcall FUN_00796560(int *param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  int *piStack_8;
  
  piStack_8 = (int *)0x0;
  (**(code **)(*param_1 + 0x1d4))();
  piVar3 = piStack_8;
  iVar2 = param_1[0x186];
  if (iVar2 < 0x30001) {
    switch(iVar2) {
    case 0x10000:
      if ((param_1[0x187] != 0) &&
         (fVar1 = (float)param_1[0x249], param_1[0x249] = (int)(fVar1 - (float)param_1[0x244]),
         fVar1 - (float)param_1[0x244] <= 0.0)) {
        if ((param_1[0x3ad] != 0) && ((float)param_1[0x3b0] < 0.0)) {
          piStack_8 = param_1;
          FUN_00778a20();
          return;
        }
        piStack_8 = (int *)param_1[0x13c];
        iVar2 = FUN_0078a100(&piStack_8);
        if (iVar2 == 2) {
          if (((((param_1[0x3a7] == 0) &&
                ((param_1[0x6e5] != 0 || (iVar2 = FUN_0078dfd0(), iVar2 == 0)))) &&
               (param_1[0x3a7] == 0)) &&
              (((param_1[0x6e5] != 0 || (iVar2 = FUN_0077ab10(), iVar2 == 0)) ||
               (iVar2 = FUN_0078e800(), iVar2 == 0)))) &&
             ((param_1[0x3a7] == 0 &&
              ((((param_1[0x6e5] != 0 || (iVar2 = FUN_0077ab30(), iVar2 == 0)) ||
                (iVar2 = FUN_0078ea50(), iVar2 == 0)) &&
               ((param_1[0x3a7] == 0 && (param_1[0x6e5] == 0)))))))) {
            FUN_0078e070(piVar3);
            return;
          }
        }
        else if (((((param_1[0x3a7] == 0) &&
                   (((param_1[0x6e5] != 0 || (iVar2 = FUN_0078e070(piVar3), iVar2 == 0)) &&
                    (param_1[0x3a7] == 0)))) &&
                  (((param_1[0x6e5] != 0 || (iVar2 = FUN_0078dfd0(), iVar2 == 0)) &&
                   (param_1[0x3a7] == 0)))) &&
                 (((param_1[0x6e5] != 0 || (iVar2 = FUN_0077ab10(), iVar2 == 0)) ||
                  (iVar2 = FUN_0078e800(), iVar2 == 0)))) &&
                (((param_1[0x3a7] == 0 && (param_1[0x6e5] == 0)) &&
                 (iVar2 = FUN_0077ab30(), iVar2 != 0)))) {
          FUN_0078ea50();
          return;
        }
      }
      return;
    case 0x10001:
      if ((2 < param_1[0x187]) && (param_1[0x187] < 4)) {
        if (400.0 < (float)param_1[0x2a4]) {
          param_1[0x187] = 4;
        }
        piStack_8 = param_1;
        if ((((param_1[0x3a7] != 0) || (param_1[0x6e5] != 0)) ||
            (iVar2 = FUN_0078dfd0(piVar3), iVar2 == 0)) &&
           (((param_1[0x3a7] != 0 || (param_1[0x6e5] != 0)) ||
            ((iVar2 = FUN_0077ab10(), iVar2 == 0 || (iVar2 = FUN_0078e800(), iVar2 == 0)))))) {
          iVar2 = FUN_0078ac20();
          if (iVar2 == 2) {
            if ((param_1[0x3a7] == 0) &&
               ((((param_1[0x6e5] != 0 || (iVar2 = FUN_0077ab30(), iVar2 == 0)) ||
                 (iVar2 = FUN_0078ea50(), iVar2 == 0)) &&
                ((param_1[0x3a7] == 0 && (param_1[0x6e5] == 0)))))) {
              FUN_0078e070();
            }
          }
          else if ((((param_1[0x3a7] == 0) &&
                    ((param_1[0x6e5] != 0 || (iVar2 = FUN_0078e070(), iVar2 == 0)))) &&
                   (param_1[0x3a7] == 0)) &&
                  ((param_1[0x6e5] == 0 && (iVar2 = FUN_0077ab30(), iVar2 != 0)))) {
            FUN_0078ea50();
            return;
          }
        }
      }
      return;
    case 0x10003:
      FUN_0078ad50();
      return;
    case 0x10004:
      FUN_00785ba0();
      return;
    case 0x10005:
    case 0x10006:
      FUN_007771e0();
      return;
    case 0x10010:
      FUN_0077d2e0();
      return;
    case 0x10011:
      FUN_0077d350();
      return;
    case 0x10012:
      FUN_0077d3c0();
      return;
    }
  }
  else if (iVar2 < 0x80001) {
    if ((iVar2 != 0x80000) && (0x50000 < iVar2)) {
      if (iVar2 < 0x60001) {
        switch(iVar2) {
        case 0x5000a:
          FUN_00784250();
          return;
        case 0x5000f:
          FUN_007862d0();
          return;
        }
      }
      else {
        switch(iVar2) {
        case 0x6000b:
        case 0x6000c:
        case 0x60011:
          (**(code **)(*param_1 + 0x1d4))(1);
          break;
        case 0x6000d:
          FUN_0077d7c0();
          return;
        case 0x60012:
          FUN_0077dbe0();
          return;
        case 0x60017:
          FUN_0077def0();
          return;
        case 0x60018:
          FUN_0077e020();
          return;
        }
      }
    }
  }
  else if (iVar2 < 0xa0001) {
    if (iVar2 == 0xa0000) {
      FUN_00784a70();
      return;
    }
    switch(iVar2) {
    case 0x80007:
      FUN_00789fa0();
      return;
    case 0x80029:
      FUN_007812f0();
      return;
    case 0x8002c:
      FUN_00785e40();
      return;
    }
  }
  else if ((iVar2 < 0xf0001) && (iVar2 != 0xf0000)) {
    switch(iVar2) {
    case 0xa0001:
      FUN_00785020();
      return;
    case 0xa0002:
    case 0xa0003:
      FUN_007850a0();
      return;
    case 0xa0006:
      FUN_0077c380();
      return;
    }
  }
  return;
}

// 007967D0  FUN_007967d0  size=1480  [between]
void __fastcall FUN_007967d0(int param_1)

{
  int iVar1;
  int local_4;
  
  iVar1 = *(int *)(param_1 + 0x618);
  local_4 = param_1;
  if (iVar1 < 0x30001) {
    if (iVar1 == 0x30000) {
      FUN_0077caa0();
    }
    else {
      switch(iVar1) {
      case 0x10000:
        FUN_00777060();
        break;
      case 0x10001:
        FUN_0077cb80();
        break;
      case 0x10002:
        FUN_00777130();
        break;
      case 0x10003:
        FUN_0078b550();
        break;
      case 0x10004:
        FUN_007914b0();
        break;
      case 0x10005:
      case 0x10006:
        FUN_007919b0();
        break;
      case 0x10007:
      case 0x10008:
        FUN_00791ba0();
        break;
      case 0x10009:
        FUN_00777220();
        break;
      case 0x1000a:
        FUN_0077ce90();
        break;
      case 0x1000b:
        FUN_0077cfa0();
        break;
      case 0x1000c:
        FUN_0077d100();
        break;
      case 0x1000d:
      case 0x1000e:
      case 0x1000f:
        FUN_00791d90();
        break;
      case 0x10010:
        FUN_007921f0();
        break;
      case 0x10011:
        FUN_00792740();
        break;
      case 0x10012:
        FUN_00777350();
        break;
      case 0x10013:
        FUN_007949a0();
      }
    }
  }
  else if (iVar1 < 0x80001) {
    if (iVar1 == 0x80000) {
      Emc060::R0_ExplodeDie_2();
    }
    else if (iVar1 < 0x50001) {
      if (iVar1 == 0x50000) {
        FUN_0078f300();
      }
      else if (iVar1 == 0x30001) {
        FUN_00776fc0();
      }
    }
    else if (iVar1 < 0x60001) {
      if (iVar1 == 0x60000) {
        FUN_0077d450();
      }
      else {
        switch(iVar1) {
        case 0x50001:
          FUN_0078f560();
          break;
        case 0x50002:
          FUN_0078f980();
          break;
        case 0x50003:
          FUN_0077b300();
          break;
        case 0x50004:
        case 0x50005:
        case 0x50006:
          FUN_0078fba0();
          break;
        case 0x50007:
          FUN_0077b5f0();
          break;
        case 0x50008:
        case 0x50009:
          FUN_00783f20();
          break;
        case 0x5000a:
          FUN_0077ba40();
          break;
        case 0x5000b:
          FUN_0077bd40();
          break;
        case 0x5000c:
          FUN_00784270();
          break;
        case 0x5000d:
          FUN_007844b0();
          break;
        case 0x5000e:
          FUN_0077bf30();
          break;
        case 0x5000f:
          FUN_00786360();
          break;
        case 0x50014:
          FUN_00786470();
          break;
        case 0x50018:
          Emc060::R0_ChanceAttack();
        }
      }
    }
    else {
      switch(iVar1) {
      case 0x60001:
        FUN_00794aa0();
        break;
      case 0x60002:
        FUN_00794bc0();
        break;
      case 0x60003:
        FUN_00794cd0();
        break;
      case 0x60004:
        FUN_00777410();
        break;
      case 0x60005:
        FUN_00794f70();
        break;
      case 0x60006:
        FUN_007774e0();
        break;
      case 0x60007:
        FUN_00795190();
        break;
      case 0x60009:
        FUN_0077d4f0();
        break;
      case 0x6000a:
        FUN_007775b0();
        break;
      case 0x6000b:
        FUN_00785c20();
        break;
      case 0x6000c:
        FUN_0077d6e0();
        break;
      case 0x6000d:
        FUN_00777660();
        break;
      case 0x6000e:
        FUN_0077d840();
        break;
      case 0x6000f:
        FUN_0077d920();
        break;
      case 0x60010:
        FUN_0077da10();
        break;
      case 0x60011:
        FUN_0077db00();
        break;
      case 0x60012:
        FUN_00777720();
        break;
      case 0x60013:
        FUN_0077dc60();
        break;
      case 0x60014:
        FUN_0077dd40();
        break;
      case 0x60015:
        FUN_00785d30();
        break;
      case 0x60016:
        FUN_0077de20();
        break;
      case 0x60017:
        FUN_0077df50();
        break;
      case 0x60018:
        FUN_0077e020();
      }
    }
  }
  else if (iVar1 < 0xa0001) {
    if (iVar1 == 0xa0000) {
      FUN_00784ce0();
    }
    else {
      switch(iVar1) {
      case 0x80001:
        FUN_0078b9f0();
        break;
      case 0x80002:
        FUN_0077e090();
        break;
      case 0x80003:
        FUN_0077ab80();
        break;
      case 0x80004:
        FUN_0077ac30();
        break;
      case 0x80005:
        FUN_0077ace0();
        break;
      case 0x80006:
        FUN_00779620();
        break;
      case 0x80007:
        FUN_007796e0();
        break;
      case 0x80008:
        FUN_007797a0();
        break;
      case 0x80009:
        FUN_00779870();
        break;
      case 0x8000a:
        FUN_0077fb90();
        break;
      case 0x8000b:
        FUN_00779a60();
        break;
      case 0x8000c:
        FUN_0077fe90();
        break;
      case 0x8000d:
        FUN_00779960();
        break;
      case 0x8000e:
        FUN_007801e0();
        break;
      case 0x8000f:
        FUN_00779b30();
        break;
      case 0x80010:
        FUN_007802c0();
        break;
      case 0x80011:
        FUN_007803a0();
        break;
      case 0x80012:
        FUN_00780480();
        break;
      case 0x80013:
        FUN_00780560();
        break;
      case 0x80014:
        FUN_00780650();
        break;
      case 0x80015:
        FUN_00780730();
        break;
      case 0x80016:
        FUN_00780820();
        break;
      case 0x80017:
        FUN_00780900();
        break;
      case 0x80018:
        FUN_007809e0();
        break;
      case 0x80019:
        FUN_00780ac0();
        break;
      case 0x8001a:
        FUN_00780ba0();
        break;
      case 0x8001b:
        FUN_00780c80();
        break;
      case 0x8001c:
        FUN_00780d60();
        break;
      case 0x8001d:
        FUN_00780e40();
        break;
      case 0x8001e:
        FUN_00780f20();
        break;
      case 0x8001f:
        FUN_00781000();
        break;
      case 0x80020:
        FUN_00779e40();
        break;
      case 0x80021:
        FUN_0078d830();
        break;
      case 0x80022:
        FUN_00779f30();
        break;
      case 0x80023:
        FUN_0077a150();
        break;
      case 0x80024:
        FUN_0077a340();
        break;
      case 0x80025:
        FUN_0077a420();
        break;
      case 0x80026:
        FUN_0077a500();
        break;
      case 0x80027:
        FUN_0077a660();
        break;
      case 0x80028:
        FUN_007810e0();
        break;
      case 0x80029:
        FUN_00781340();
        break;
      case 0x8002a:
        Emc060::R0_ExplodeDie();
        break;
      case 0x8002b:
        FUN_0077e170();
        break;
      case 0x8002c:
        FUN_00777830();
        break;
      case 0x8002d:
        FUN_00777b90();
        break;
      case 0x8002e:
        FUN_0077e230();
      }
    }
  }
  else if (iVar1 < 0xf0001) {
    if (iVar1 == 0xf0000) {
      FUN_007846f0();
    }
    else {
      switch(iVar1) {
      case 0xa0001:
        FUN_00790470();
        break;
      case 0xa0002:
      case 0xa0003:
        FUN_007851e0();
        break;
      case 0xa0004:
        FUN_007855d0();
        break;
      case 0xa0005:
        FUN_00785820();
        break;
      case 0xa0006:
        FUN_007909f0();
        break;
      case 0xa0007:
        FUN_00790f40();
      }
    }
  }
  else {
    switch(iVar1) {
    case 0xf0001:
      FUN_0077c110();
      break;
    case 0xf0002:
      FUN_00792c60();
      break;
    case 0xf0003:
    case 0xf0004:
    case 0xf0005:
      FUN_0078fda0();
      break;
    case 0xf0006:
      FUN_0078a460();
      break;
    case 0xf0007:
      FUN_0078a770();
    }
  }
  if (*(int *)(param_1 + 0xe9c) == 0) {
    local_4 = *(int *)(param_1 + 0x4f0);
    iVar1 = FUN_0078a100(&local_4);
    if (((iVar1 == 2) &&
        ((((iVar1 = FUN_00a8c760(0x3a), iVar1 == 0 || (*(int *)(param_1 + 0xe9c) != 0)) ||
          (*(int *)(param_1 + 0x1b94) != 0)) || (iVar1 = FUN_0078ee00(), iVar1 == 0)))) &&
       (((iVar1 = FUN_00a8c760(0x3b), iVar1 != 0 && (*(int *)(param_1 + 0xe9c) == 0)) &&
        (*(int *)(param_1 + 0x1b94) == 0)))) {
      FUN_0078ee80();
      return;
    }
  }
  return;
}

// 00796FA0  FUN_00796fa0  size=2815  [between]
uint __thiscall FUN_00796fa0(int *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  code *pcVar7;
  bool bVar8;
  short sVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iVar16;
  uint unaff_ESI;
  int unaff_EDI;
  float10 fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  int local_54;
  undefined1 auStack_30 [44];
  
  iVar11 = param_1[0x186];
  iVar10 = *param_2;
  if ((((iVar10 == 0) || (iVar10 == 1)) || (iVar10 == 2)) ||
     ((iVar10 == 0x1b0 || (iVar10 == 0x147)))) {
    return 0;
  }
  uVar13 = param_2[1];
  local_54 = 0;
  iVar10 = FUN_00a81330();
  if (iVar10 != 0) {
    local_54 = FUN_00a7c8a0();
  }
  param_1[0x6f4] = param_2[0x40];
  param_1[0x6f5] = param_2[0x41];
  param_1[0x6f6] = param_2[0x42];
  param_1[0x6f7] = param_2[0x43];
  if (local_54 != 0) {
    param_1[0x6f4] = *(int *)(local_54 + 0x40);
    param_1[0x6f5] = *(int *)(local_54 + 0x44);
    param_1[0x6f6] = *(int *)(local_54 + 0x48);
    param_1[0x6f7] = *(int *)(local_54 + 0x4c);
  }
  param_1[0x6f8] = param_2[8];
  param_1[0x6f9] = param_2[9];
  param_1[0x6fa] = param_2[10];
  param_1[0x6fb] = param_2[0xb];
  if ((local_54 == 0) || ((*(byte *)(local_54 + 0x4c0) & 0x10) == 0)) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0x36d) & 8) == 0) {
    *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 1;
  }
  (**(code **)(*param_1 + 0x220))(0x40000000);
  FUN_00795440();
  if (((iVar11 == 0x60003) || (iVar11 == 0x60005)) && (*param_2 == 0x4f)) {
    iVar10 = FUN_00fdbc60();
    if (iVar10 < param_1[0x21c]) {
      FUN_00777ce0((uint)(iVar11 == 0x60005) * 2 + 0x60004,0,0,0,0);
      return 0;
    }
    iVar11 = FUN_00a8cab0();
    param_1[0x3a9] = iVar11;
    param_1[0x3aa] = param_1[0x3a8];
    FUN_00a8caf0(0x1000c,0,0,0);
    param_1[0x3a8] = 0;
    FUN_00a962d0(0,0);
    pcVar7 = *(code **)(*param_1 + 0x198);
    param_1[0x4e7] = 0;
    (*pcVar7)(local_54,param_2,1);
    return uVar13;
  }
  iVar11 = 0;
  uVar13 = (uint)*(byte *)(param_2 + 4);
  (**(code **)(*param_1 + 0x21c))(local_54,uVar13,0x3c23d70a,0);
  if (*param_2 == 0x4f) {
    iVar10 = FUN_00a8cab0();
    param_1[0x3aa] = param_1[0x3a8];
    param_1[0x3a9] = iVar10;
    FUN_00a8caf0(0x1000c,0,0,0);
    param_1[0x3a8] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4e7] = 0;
    uVar14 = 1;
    iVar10 = FUN_007785e0();
    if (iVar10 != 0) {
      uVar14 = 0x21;
    }
    (**(code **)(*param_1 + 0x198))(iVar11,param_2,uVar14);
    return 1;
  }
  if (*param_2 == 0x93) {
    (**(code **)(*param_1 + 0x198))(iVar11,param_2,0x40000);
    return 0;
  }
  if ((*(byte *)(param_2 + 0x23) & 0x10) == 0) {
    if (param_1[0x3ad] != 0) {
      unaff_EDI = FUN_00fdbc60();
    }
    iVar10 = FUN_00a8cbe0(0x1000a);
    if (iVar10 != 0) {
      unaff_EDI = unaff_EDI / 2;
    }
    (**(code **)(*param_1 + 0x30c))(unaff_EDI,0);
  }
  iVar10 = FUN_0077ab10();
  if (iVar10 != 0) {
    FUN_00c27260(0x40200000);
  }
  iVar10 = FUN_0077ab30();
  if (iVar10 != 0) {
    FUN_00c272a0(0x40a00000);
  }
  if ((*(byte *)(param_2 + 0x23) & 2) == 0) {
    FUN_00795770(unaff_EDI,param_1 + 0x6f4,param_1 + 0x6f8);
  }
  else {
    FUN_007954b0();
    (**(code **)(*param_1 + 0x358))(399,0);
  }
  if (param_1[0x21c] < 1) {
    uVar14 = 0;
    if ((param_2[0x23] & 0x100000U) != 0) {
      uVar14 = 2;
    }
    if ((param_2[0x24] & 0x200U) != 0) {
      uVar14 = 4;
    }
    (**(code **)(*param_1 + 0x344))(5,uVar14,(uint)param_2[0x24] >> 0xb & 1);
    FUN_00c1a1c0(param_1[0x13c],param_1[0x2e7]);
    uVar14 = 1;
    uVar15 = 0x80000;
    if (*param_2 == 0x92) {
      uVar14 = 0x21;
      iVar10 = 0;
      iVar11 = 4;
      do {
        FUN_007953b0(iVar10,0);
        iVar10 = iVar10 + 1;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
      uVar15 = 0x80002;
    }
    else if ((*(byte *)((int)param_2 + 0x8e) & 1) != 0) {
      uVar14 = 0x41;
    }
    (**(code **)(*param_1 + 0x198))(local_54,param_2,uVar14);
    param_1[0x139] = 1;
    FUN_00777ce0(uVar15,0,0,0,0);
    return uVar13;
  }
  bVar8 = true;
  param_1[0x3b1] = param_1[0x3b1] + 1;
  if (2 < *(byte *)((int)param_2 + 0x11)) {
    param_1[0x5e1] = param_1[0x5e1] - (uint)*(byte *)((int)param_2 + 0x11);
  }
  uVar21 = 0x3f800000;
  uVar20 = 0;
  uVar19 = 0x8000210;
  uVar18 = 0x3f800000;
  uVar15 = 0x3d088889;
  uVar14 = 1;
  sVar9 = FUN_00dde2d0(0,2);
  FUN_00aa4080(sVar9 + 0x61,uVar14,uVar15,uVar18,uVar19,uVar20,uVar21);
  fVar17 = (float10)FUN_00ddba30((float)param_2[0xc] - (float)param_1[0x25]);
  param_1[0x245] = (int)(float)fVar17;
  if ((param_1[0x186] == 0x1000a) ||
     ((iVar10 = FUN_0077b290(), iVar10 == 0 && (iVar10 = FUN_00778000(), iVar10 == 0)))) {
    unaff_ESI = 0x401;
    goto LAB_00797768;
  }
  if ((*(byte *)((int)param_2 + 0x8e) & 1) != 0) {
    if (((param_1[0x650] == 0) && (param_1[0x654] == 0)) &&
       ((param_1[0x658] == 0 && (param_1[0x65c] == 0)))) {
      bVar8 = false;
    }
    iVar10 = FUN_00a9b930();
    if (iVar10 != 0) {
      FUN_00a9b930();
      iVar10 = FUN_00bda170();
      if (iVar10 == 0) goto LAB_0079755d;
    }
    if (bVar8) {
      unaff_ESI = 0x41;
      iVar10 = FUN_00a8cab0();
      param_1[0x3a9] = iVar10;
      param_1[0x3aa] = param_1[0x3a8];
      FUN_00a8caf0(0x60001,0,0,0);
      param_1[0x3a8] = 0;
      FUN_00a962d0(0,0);
      param_1[0x4e7] = 0;
    }
  }
LAB_0079755d:
  if (param_1[0x6ba] != 0) {
    iVar10 = FUN_00778000();
    if (iVar10 == 0) {
      iVar10 = FUN_0077ade0();
      if (iVar10 != 0) goto LAB_007975d9;
      iVar10 = FUN_00a8cab0();
      param_1[0x3a9] = iVar10;
      param_1[0x3aa] = param_1[0x3a8];
      uVar14 = 0x60001;
    }
    else {
      iVar10 = FUN_00a8cab0();
      param_1[0x3a9] = iVar10;
      param_1[0x3aa] = param_1[0x3a8];
      uVar14 = 0x60002;
    }
    FUN_00a8caf0(uVar14,0,0,0);
    param_1[0x3a8] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4e7] = 0;
  }
LAB_007975d9:
  if ((param_2[0x24] & 0x800000U) == 0) {
    if ((*param_2 == 0x4c) || (*param_2 == 0x4b)) {
      FUN_00a81330();
      pfVar12 = (float *)FUN_00a7c8b0();
      fVar1 = *pfVar12;
      fVar2 = pfVar12[1];
      fVar3 = pfVar12[2];
      pfVar12 = (float *)(**(code **)(*param_1 + 0x68))();
      fVar4 = *pfVar12;
      fVar5 = pfVar12[1];
      fVar6 = pfVar12[2];
      pfVar12 = (float *)FUN_00a925a0(auStack_30);
      uVar14 = 0x6000f;
      if (pfVar12[2] * (fVar3 - fVar6) + *pfVar12 * (fVar1 - fVar4) + pfVar12[1] * (fVar2 - fVar5)
          <= 0.0) {
        uVar14 = 0x60010;
      }
      FUN_00777ce0(uVar14,0,0,0,0);
    }
    else if ((param_2[0x24] & 0x2000000U) != 0) {
      iVar10 = FUN_00a8cab0();
      param_1[0x3a9] = iVar10;
      param_1[0x3aa] = param_1[0x3a8];
      FUN_00a8caf0(0x60011,0,0,0);
      param_1[0x3a8] = 0;
      FUN_00a962d0(0,0);
      param_1[0x4e7] = 0;
      FUN_00a8e880(iVar11 + 0x40);
      (**(code **)(*param_1 + 0x308))(0x3f800000,0x393702d3,0x40490fdb,0);
    }
  }
  else {
    iVar10 = FUN_00a8cab0();
    param_1[0x3a9] = iVar10;
    param_1[0x3aa] = param_1[0x3a8];
    FUN_00a8caf0(0x6000b,0,0,0);
    param_1[0x3a8] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4e7] = 0;
  }
LAB_00797768:
  FUN_0077ad90(unaff_EDI);
  FUN_0077ae10(unaff_EDI);
  FUN_0077aeb0(unaff_EDI);
  FUN_0077af20(unaff_EDI);
  FUN_0077af80(unaff_EDI);
  FUN_0077afe0(unaff_EDI);
  FUN_0077b040(unaff_EDI);
  if (param_1[0x6bb] != 0) {
    iVar10 = FUN_00a8cab0();
    param_1[0x3a9] = iVar10;
    param_1[0x3aa] = param_1[0x3a8];
    FUN_00a8caf0(0x1000c,0,0,0);
    param_1[0x3a8] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4e7] = 0;
  }
  if (param_1[0x6bc] != 0) {
    iVar10 = FUN_00a8cab0();
    param_1[0x3a9] = iVar10;
    param_1[0x3aa] = param_1[0x3a8];
    FUN_00a8caf0(0x60001,0,0,0);
    param_1[0x3a8] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4e7] = 0;
  }
  if (param_1[0x6bd] != 0) {
    iVar10 = FUN_00a8cab0();
    param_1[0x3aa] = param_1[0x3a8];
    param_1[0x3a9] = iVar10;
    FUN_00a8caf0(0x60009,0,0,0);
    param_1[0x3a8] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4e7] = 0;
  }
  if (param_1[0x6be] != 0) {
    iVar10 = FUN_00a8cab0();
    param_1[0x3a9] = iVar10;
    param_1[0x3aa] = param_1[0x3a8];
    FUN_00a8caf0(0x60009,0,0,0);
    param_1[0x3a8] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4e7] = 0;
  }
  if (param_1[0x6bf] != 0) {
    iVar10 = FUN_00a8cab0();
    param_1[0x3a9] = iVar10;
    param_1[0x3aa] = param_1[0x3a8];
    FUN_00a8caf0(0x60009,0,0,0);
    param_1[0x3a8] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4e7] = 0;
  }
  if (param_1[0x6c0] != 0) {
    iVar10 = FUN_00a8cab0();
    param_1[0x3aa] = param_1[0x3a8];
    param_1[0x3a9] = iVar10;
    FUN_00a8caf0(0x60009,0,0,0);
    param_1[0x3a8] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4e7] = 0;
  }
  if ((param_2[0x23] & 0x20000U) != 0) {
    iVar10 = FUN_00a8cab0();
    param_1[0x3a9] = iVar10;
    param_1[0x3aa] = param_1[0x3a8];
    FUN_00a8caf0(0x60009,0,0,0);
    param_1[0x3a8] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4e7] = 0;
  }
  if (*param_2 == 0x92) {
    unaff_ESI = unaff_ESI & 0xffffffbf | 0x20;
    iVar16 = 0;
    iVar10 = 4;
    do {
      FUN_007953b0(iVar16,0);
      iVar16 = iVar16 + 1;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    iVar10 = FUN_00a8cab0();
    param_1[0x3aa] = param_1[0x3a8];
    param_1[0x3a9] = iVar10;
    FUN_00a8caf0(0x6000f,0,0,0);
    param_1[0x3a8] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4e7] = 0;
  }
  if (((*(byte *)(param_2 + 0x23) & 1) != 0) && ((float)param_1[0x718] <= 0.0)) {
    (**(code **)(*param_1 + 0x358))(0x18e,0);
    param_1[0x718] = param_1[0x719];
    iVar10 = FUN_00a8cab0();
    param_1[0x3aa] = param_1[0x3a8];
    param_1[0x3a9] = iVar10;
    FUN_00a8caf0(0x1000c,0,0,0);
    param_1[0x3a8] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4e7] = 0;
  }
  (**(code **)(*param_1 + 0x198))(iVar11,param_2,unaff_ESI);
  return 1;
}

// 00797AA0  FUN_00797aa0  size=1068  [between]
undefined4 __thiscall FUN_00797aa0(int *param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 unaff_EBP;
  undefined4 unaff_EDI;
  float10 fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  iVar4 = *param_2;
  iVar6 = 0;
  if ((((iVar4 != 0) && (iVar4 != 1)) && (iVar4 != 2)) && ((iVar4 != 0x1b0 && (iVar4 != 0x147)))) {
    iVar4 = FUN_00a81330();
    if (iVar4 != 0) {
      iVar6 = FUN_00a7c8a0();
    }
    piVar1 = param_1 + 0x6f4;
    *piVar1 = param_2[0x40];
    param_1[0x6f5] = param_2[0x41];
    param_1[0x6f6] = param_2[0x42];
    param_1[0x6f7] = param_2[0x43];
    if (iVar6 != 0) {
      *piVar1 = *(int *)(iVar6 + 0x40);
      param_1[0x6f5] = *(int *)(iVar6 + 0x44);
      param_1[0x6f6] = *(int *)(iVar6 + 0x48);
      param_1[0x6f7] = *(int *)(iVar6 + 0x4c);
    }
    param_1[0x6f8] = param_2[8];
    param_1[0x6f9] = param_2[9];
    param_1[0x6fa] = param_2[10];
    param_1[0x6fb] = param_2[0xb];
    if ((iVar6 == 0) || ((*(byte *)(iVar6 + 0x4c0) & 0x10) == 0)) {
      return 0;
    }
    (**(code **)(*param_1 + 0x220))(0x40000000);
    FUN_00795440();
    (**(code **)(*param_1 + 0x21c))(iVar6,(char)param_2[4],0x3c23d70a,0);
    if ((*(byte *)(param_2 + 0x23) & 0x10) == 0) {
      (**(code **)(*param_1 + 0x30c))(unaff_EBP,0);
    }
    if ((*(byte *)(param_2 + 0x23) & 2) == 0) {
      FUN_00795770(unaff_EBP,piVar1,param_1 + 0x6f8);
    }
    else {
      FUN_007954b0();
      (**(code **)(*param_1 + 0x358))(399,0);
    }
    if (0 < param_1[0x21c]) {
      param_1[0x3b1] = param_1[0x3b1] + 1;
      if (2 < *(byte *)((int)param_2 + 0x11)) {
        param_1[0x5e1] = param_1[0x5e1] - (uint)*(byte *)((int)param_2 + 0x11);
      }
      uVar12 = 0x3f800000;
      uVar11 = 0;
      uVar10 = 0x8000210;
      uVar9 = 0x3f800000;
      uVar8 = 0x3d088889;
      uVar5 = 1;
      sVar3 = FUN_00dde2d0(0,2);
      FUN_00aa4080(sVar3 + 0x61,uVar5,uVar8,uVar9,uVar10,uVar11,uVar12);
      uVar5 = 0x41;
      if ((*(byte *)((int)param_2 + 0x8e) & 1) == 0) {
        uVar5 = unaff_EDI;
      }
      (**(code **)(*param_1 + 0x198))(iVar6,param_2,uVar5);
      fVar7 = (float10)FUN_00ddba30((float)param_2[0xc] - (float)param_1[0x25]);
      param_1[0x245] = (int)(float)fVar7;
      if ((param_2[0x23] & 0x20000U) != 0) {
        FUN_00a8caf0(0x80029,0,0,0);
        param_1[0x3a8] = 0;
        FUN_00a962d0(0,0);
        param_1[0x4e7] = 0;
        return 1;
      }
      uVar2 = param_2[0x24];
      if ((uVar2 & 0x800000) == 0) {
        iVar4 = FUN_00778000();
        if ((iVar4 != 0) && ((uVar2 & 0x2000000) != 0)) {
          iVar4 = FUN_00a8cab0();
          param_1[0x3a9] = iVar4;
          param_1[0x3aa] = param_1[0x3a8];
          FUN_00a8caf0(0x60011,0,0,0);
          param_1[0x3a8] = 0;
          FUN_00a962d0(0,0);
          param_1[0x4e7] = 0;
          FUN_00a8e880(iVar6 + 0x40);
          (**(code **)(*param_1 + 0x308))(0x3f800000,0x393702d3,0x40490fdb,0);
        }
      }
      else {
        iVar4 = FUN_00a8cab0();
        param_1[0x3aa] = param_1[0x3a8];
        param_1[0x3a9] = iVar4;
        FUN_00a8caf0(0x6000b,0,0,0);
        param_1[0x3a8] = 0;
        FUN_00a962d0(0,0);
        param_1[0x4e7] = 0;
        if (param_1[0x5e1] < 1) {
          sVar3 = FUN_00dde2d0(0,0x1e);
          param_1[0x5e1] = sVar3 + 10;
          return 1;
        }
      }
      return 1;
    }
    uVar5 = 0;
    if ((param_2[0x23] & 0x100000U) != 0) {
      uVar5 = 2;
    }
    if ((param_2[0x24] & 0x200U) != 0) {
      uVar5 = 4;
    }
    (**(code **)(*param_1 + 0x344))(5,uVar5,(uint)param_2[0x24] >> 0xb & 1);
    FUN_00c1a1c0(param_1[0x13c],param_1[0x2e7]);
    (**(code **)(*param_1 + 0x198))(iVar6,param_2,1);
    param_1[0x139] = 1;
    FUN_00a8caf0(0x8000e,0,0,0);
    param_1[0x3a8] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4e7] = 0;
  }
  return 0;
}

// 00797ED0  FUN_00797ed0  size=1258  [between]
undefined4 __thiscall FUN_00797ed0(int *param_1,int *param_2)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_EBP;
  int iVar5;
  undefined4 unaff_EDI;
  float10 fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  iVar3 = *param_2;
  iVar5 = 0;
  if (iVar3 == 0) {
    return 0;
  }
  if (iVar3 == 1) {
    return 0;
  }
  if (iVar3 == 2) {
    return 0;
  }
  if (iVar3 == 0x1b0) {
    return 0;
  }
  if (iVar3 == 0x147) {
    return 0;
  }
  iVar3 = FUN_00a81330();
  if (iVar3 != 0) {
    iVar5 = FUN_00a7c8a0();
  }
  piVar1 = param_1 + 0x6f4;
  *piVar1 = param_2[0x40];
  param_1[0x6f5] = param_2[0x41];
  param_1[0x6f6] = param_2[0x42];
  param_1[0x6f7] = param_2[0x43];
  if (iVar5 != 0) {
    *piVar1 = *(int *)(iVar5 + 0x40);
    param_1[0x6f5] = *(int *)(iVar5 + 0x44);
    param_1[0x6f6] = *(int *)(iVar5 + 0x48);
    param_1[0x6f7] = *(int *)(iVar5 + 0x4c);
  }
  param_1[0x6f8] = param_2[8];
  param_1[0x6f9] = param_2[9];
  param_1[0x6fa] = param_2[10];
  param_1[0x6fb] = param_2[0xb];
  if ((iVar5 == 0) || ((*(byte *)(iVar5 + 0x4c0) & 0x10) == 0)) {
    return 0;
  }
  (**(code **)(*param_1 + 0x220))(0x40000000);
  FUN_00795440();
  (**(code **)(*param_1 + 0x21c))(iVar5,(char)param_2[4],0x3c23d70a,0);
  if (*param_2 == 0x93) {
    (**(code **)(*param_1 + 0x198))(iVar5,param_2,0x40000);
    return 0;
  }
  if ((*(byte *)(param_2 + 0x23) & 0x10) == 0) {
    if (param_1[0x3ad] != 0) {
      unaff_EBP = FUN_00fdbc60();
    }
    (**(code **)(*param_1 + 0x30c))(unaff_EBP,0);
  }
  if (param_1[0x6fe] != 0) {
    (**(code **)(*param_1 + 0x198))(iVar5,param_2,1);
    return 0;
  }
  if ((*(byte *)(param_2 + 0x23) & 2) == 0) {
    FUN_00795770(unaff_EBP,piVar1,param_1 + 0x6f8);
  }
  else {
    FUN_007954b0();
    (**(code **)(*param_1 + 0x358))(399,0);
  }
  if (param_1[0x21c] < 1) {
    uVar4 = 0;
    if ((param_2[0x23] & 0x100000U) != 0) {
      uVar4 = 2;
    }
    if ((param_2[0x24] & 0x200U) != 0) {
      uVar4 = 4;
    }
    (**(code **)(*param_1 + 0x344))(5,uVar4,(uint)param_2[0x24] >> 0xb & 1);
    FUN_00c1a1c0(param_1[0x13c],param_1[0x2e7]);
    (**(code **)(*param_1 + 0x198))(iVar5,param_2,1);
    param_1[0x139] = 1;
    FUN_00a8caf0(0x80021,0,0,0);
    param_1[0x3a8] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4e7] = 0;
    return uVar4;
  }
  param_1[0x3b1] = param_1[0x3b1] + 1;
  if (2 < *(byte *)((int)param_2 + 0x11)) {
    param_1[0x5e1] = param_1[0x5e1] - (uint)*(byte *)((int)param_2 + 0x11);
  }
  uVar11 = 0x3f800000;
  uVar10 = 0;
  uVar9 = 0x8000210;
  uVar8 = 0x3f800000;
  uVar7 = 0x3d088889;
  uVar4 = 1;
  sVar2 = FUN_00dde2d0(0,2);
  FUN_00aa4080(sVar2 + 0x61,uVar4,uVar7,uVar8,uVar9,uVar10,uVar11);
  uVar4 = 0x41;
  if ((*(byte *)((int)param_2 + 0x8e) & 1) == 0) {
    uVar4 = unaff_EDI;
  }
  (**(code **)(*param_1 + 0x198))(iVar5,param_2,uVar4);
  fVar6 = (float10)FUN_00ddba30((float)param_2[0xc] - (float)param_1[0x25]);
  param_1[0x245] = (int)(float)fVar6;
  if ((param_2[0x23] & 0x20000U) != 0) {
    FUN_00a8caf0(0x80029,0,0,0);
    param_1[0x3a8] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4e7] = 0;
  }
  if ((param_2[0x24] & 0x800000U) == 0) {
    if ((param_2[0x24] & 0x1000000U) == 0) {
      iVar3 = FUN_00778000();
      if ((iVar3 != 0) && ((param_2[0x24] & 0x2000000U) != 0)) {
        iVar3 = FUN_00a8cab0();
        param_1[0x3aa] = param_1[0x3a8];
        param_1[0x3a9] = iVar3;
        FUN_00a8caf0(0x60011,0,0,0);
        param_1[0x3a8] = 0;
        FUN_00a962d0(0,0);
        param_1[0x4e7] = 0;
        FUN_00a8e880(iVar5 + 0x40);
        (**(code **)(*param_1 + 0x308))(0x3f800000,0x393702d3,0x40490fdb,0);
        goto LAB_00798382;
      }
      iVar3 = FUN_00a8cab0();
      param_1[0x3a9] = iVar3;
      param_1[0x3aa] = param_1[0x3a8];
      uVar4 = 0x6000c;
    }
    else {
      iVar3 = FUN_00a8cab0();
      param_1[0x3a9] = iVar3;
      param_1[0x3aa] = param_1[0x3a8];
      uVar4 = 0x6000e;
    }
    FUN_00a8caf0(uVar4,0,0,0);
    param_1[0x3a8] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4e7] = 0;
  }
  else {
    iVar3 = FUN_00a8cab0();
    param_1[0x3aa] = param_1[0x3a8];
    param_1[0x3a9] = iVar3;
    FUN_00a8caf0(0x6000b,0,0,0);
    param_1[0x3a8] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4e7] = 0;
    if (param_1[0x5e1] < 1) {
      sVar2 = FUN_00dde2d0(0,0x1e);
      param_1[0x5e1] = sVar2 + 10;
    }
  }
LAB_00798382:
  if (((*(byte *)((int)param_2 + 0x8e) & 1) != 0) && (iVar3 = FUN_00a9b930(), iVar3 != 0)) {
    FUN_00a9b930();
    FUN_00bda170();
  }
  return 1;
}

// 007983C0  Emc060::vf4C  size=735  [class]
void __fastcall Emc060::vf4C(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  float10 fVar6;
  undefined4 uVar7;
  undefined1 local_20 [28];
  
  if ((DAT_01bea070 & 0x20000000) == 0) {
    FUN_00a92fb0();
    fVar6 = (float10)FUN_00e049b0();
    *(float *)(param_1 + 0x910) = (float)fVar6;
    if (*(int *)(param_1 + 0xa84) != 0) {
      FUN_00a8e880(*(int *)(param_1 + 0xa84) + 0x40);
    }
    if (*(int *)(param_1 + 0x1c2c) != 0) {
      iVar3 = FUN_00ac45b0();
      fVar1 = *(float *)(param_1 + 0x1c20) - *(float *)(param_1 + 0x910);
      *(float *)(param_1 + 0x1c20) = fVar1;
      fVar2 = *(float *)(param_1 + 0x1c24) - *(float *)(param_1 + 0x910);
      *(float *)(param_1 + 0x1c24) = fVar2;
      if (*(int *)(param_1 + 0x1c28) == 0) {
        if ((fVar2 <= 0.0) && (*(float *)(param_1 + 0xa9c) <= 0.7853982)) {
          *(undefined4 *)(param_1 + 0x1c28) = 1;
          *(undefined4 *)(param_1 + 0x1c24) = 0x42100000;
        }
      }
      else {
        if ((fVar2 <= 0.0) && (0.7853982 < *(float *)(param_1 + 0xa9c))) {
          *(undefined4 *)(param_1 + 0x1c28) = 0;
          *(undefined4 *)(param_1 + 0x1c24) = 0x42100000;
        }
        if (((*(int *)(param_1 + 0x1424) != 0) && (iVar3 != 0)) && (fVar1 <= 0.0)) {
          uVar7 = 0;
          *(undefined4 *)(param_1 + 0x1c20) = 0x41200000;
          uVar4 = FUN_00a7c8b0(0);
          FUN_0043fc90(iVar3,uVar4,uVar7);
        }
      }
    }
    *(undefined4 *)(param_1 + 0x1c2c) = 0;
    BehaviorEmBase::vf4C();
    if (*(int **)(param_1 + 0xa84) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xa84) + 0x204))(local_20);
      FUN_00a84720();
      FUN_00a84720();
      iVar3 = FUN_00a12210(0x25);
      iVar5 = FUN_00a12210(0x26);
      switchD_0080dbae::default();
      FUN_00a84780(local_20,0,1,0,0,*(undefined4 *)(param_1 + 0x910));
      if ((*(ushort *)(iVar3 + 0xa2) & 0x4002) == 0) {
        FUN_00ddb590(iVar3 + 0x60,iVar3 + 0x90);
      }
      if ((*(ushort *)(iVar3 + 0xa2) & 0x8004) == 0) {
        FUN_00a15310();
      }
      if ((*(ushort *)(iVar5 + 0xa2) & 0x4002) == 0) {
        FUN_00ddb590(iVar5 + 0x60,iVar5 + 0x90);
      }
      if ((*(ushort *)(iVar5 + 0xa2) & 0x8004) == 0) {
        FUN_00a15310();
      }
      FUN_00a84780(local_20,1,0,0,0,*(undefined4 *)(param_1 + 0x910));
      if ((*(ushort *)(iVar3 + 0xa2) & 0x4002) == 0) {
        FUN_00ddb590(iVar3 + 0x60,iVar3 + 0x90);
      }
      if ((*(ushort *)(iVar3 + 0xa2) & 0x8004) == 0) {
        FUN_00a15310();
      }
      if ((*(ushort *)(iVar5 + 0xa2) & 0x4002) == 0) {
        FUN_00ddb590(iVar5 + 0x60,iVar5 + 0x90);
      }
      if ((*(ushort *)(iVar5 + 0xa2) & 0x8004) == 0) {
        FUN_00a15310();
      }
    }
    *(float *)(param_1 + 0xec8) = *(float *)(param_1 + 0xec8) - *(float *)(param_1 + 0x910);
    iVar3 = FUN_00ac4770();
    if (iVar3 == 0) {
      FUN_00796560();
    }
    FUN_007967d0();
  }
  return;
}

// 007986A0  Emc060::vf32C  size=816  [class]
undefined4 __fastcall Emc060::vf32C(int *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  LPCRITICAL_SECTION unaff_EDI;
  int *piVar6;
  int local_280;
  undefined1 auStack_270 [16];
  undefined1 local_260 [20];
  int iStack_24c;
  
  param_1[0x1a1] = 0;
  FUN_00ac2080(0);
  FUN_00ac2080(1);
  FUN_00ac2080(2);
  iVar3 = param_1[0x186];
  param_1[0x5d9] = 0;
  iVar2 = FUN_00a8ef10();
  if (iVar2 != 0) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0x130) & 1) != 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x280);
    if (param_1[0x286] != 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    piVar6 = (int *)param_1[0x19f];
    piVar5 = piVar6 + param_1[0x1a1] * 0x54;
    FUN_00445db0();
    FUN_004105d0();
    local_280 = -1;
    bVar1 = false;
    if (piVar6 != piVar5) {
      do {
        if (*piVar6 != 0x147) {
          if (*piVar6 == 0x1b0) {
            (**(code **)(*param_1 + 0x370))(piVar6);
          }
          else {
            iVar2 = piVar6[1];
            if (local_280 <= iVar2) {
              FUN_00448f50(piVar6);
              bVar1 = true;
              local_280 = iVar2;
            }
          }
        }
        piVar6 = piVar6 + 0x54;
      } while (piVar6 != piVar5);
      if (bVar1) {
        if ((((iVar3 != 0x60001) && (iVar3 != 0x60002)) && (iVar3 != 0x60003)) &&
           (((iVar3 != 0x60005 && (iVar3 != 0x60009)) && (iVar3 != 0x1000c)))) {
          FUN_00a8e520();
        }
        FUN_0043e160(local_260);
        FUN_00a81330();
        FUN_00a7c8b0();
        (**(code **)(*param_1 + 0x68))();
        FUN_00a92640(auStack_270);
        iVar3 = FUN_007955f0(local_260);
        if ((iVar3 == 0) && (iVar3 = FUN_00a8f040(local_260), iVar3 == 0)) {
          if (param_1[0x3a7] == 0) {
            if ((((param_1[0x139] == 0) && (param_1[0x70e] == 0)) &&
                (iVar3 = FUN_00a8cbe0(0x6000e), iVar3 == 0)) &&
               (((iVar3 = FUN_00a8cbe0(0x60013), iVar3 == 0 &&
                 (iVar3 = FUN_00a9f760(0x77), iVar3 == 0)) &&
                (iVar3 = FUN_00a9f760(0x7d), iVar3 == 0)))) {
              if ((param_1[0x6ff] == 0) &&
                 (((iVar3 = (**(code **)(*param_1 + 0x1d8))(), iVar3 != 0 ||
                   (iVar3 = (**(code **)(*param_1 + 800))(0x3d888889), iVar3 == 0)) ||
                  (iVar3 = FUN_008e2740(), iVar3 == 0)))) {
                uVar4 = FUN_00797ed0(local_260);
              }
              else if ((((param_1[0x6fe] == 0) && (iVar3 = FUN_00a8cbe0(0x80007), iVar3 == 0)) &&
                       (iVar3 = FUN_00a8cbe0(0x80009), iVar3 == 0)) &&
                      (iVar3 = FUN_00a8cbe0(0x60017), iVar3 == 0)) {
                uVar4 = FUN_00796fa0(local_260);
              }
              else {
                uVar4 = FUN_00797aa0(local_260);
              }
            }
            else {
              uVar4 = FUN_00783330(local_260);
            }
            if (param_1[0x286] != 0) {
              LeaveCriticalSection(lpCriticalSection);
            }
            return uVar4;
          }
          uVar4 = 0;
          if (iStack_24c != 0) {
            uVar4 = FUN_00a7c8a0();
          }
          (**(code **)(*param_1 + 0x198))(uVar4,local_260,0x401);
          if (unaff_EDI[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
            LeaveCriticalSection(unaff_EDI);
          }
          return 1;
        }
      }
    }
    if (param_1[0x286] != 0) {
      LeaveCriticalSection(lpCriticalSection);
    }
    return 0;
  }
  return 0;
}

// 00AB2710  Emc060::vf04  size=6  [class]
undefined * Emc060::vf04(void)

{
  return &DAT_01b35810;
}

// 00AB2720  Emc060::vf20C  size=7  [class]
float10 Emc060::vf20C(void)

{
  return (float10)3.5;
}

// 00AB2730  Emc060::vf1DC  size=6  [class]
undefined4 Emc060::vf1DC(void)

{
  return 1;
}

// 00AB2740  FUN_00ab2740  size=121  [callgraph]
void FUN_00ab2740(void)

{
  FUN_00905ce0();
  FUN_00905ce0();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  cXml::cXml_7();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  cEnemyCautionStateManager::cEnemyCautionStateManager_3();
  return;
}

// 00AB9E30  Emc060::vf00  size=30  [class]
undefined4 __thiscall Emc060::vf00(undefined4 param_1,byte param_2)

{
  FUN_00ab2740();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

