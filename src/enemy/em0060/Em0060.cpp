// src/enemy/em0060/Em0060.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0043FC90..00AB6E70, 293 functions

#include "mgrr.h"
#include "Em0060.h"

// 0043FC90  FUN_0043fc90  size=91  [callgraph]
void __thiscall FUN_0043fc90(int param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0xaf0) = 1;
  if (param_2 != 0) {
    uVar1 = FUN_00a7c7f0();
    FUN_00a7c960(uVar1);
  }
  *(undefined4 *)(param_1 + 0xb20) = *param_3;
  *(undefined4 *)(param_1 + 0xb24) = param_3[1];
  *(undefined4 *)(param_1 + 0xb28) = param_3[2];
  *(undefined4 *)(param_1 + 0xb2c) = param_3[3];
  *(undefined4 *)(param_1 + 0xb30) = param_4;
  return;
}

// 0043FD10  FUN_0043fd10  size=32  [callgraph]
void FUN_0043fd10(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_00a7c7f0();
    FUN_00a7c960(uVar1);
  }
  return;
}

// 0043FE30  FUN_0043fe30  size=150  [callgraph]
void __thiscall
FUN_0043fe30(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint param_5,uint param_6)

{
  *param_1 = *param_1 & 0xfffffffd | 1;
  param_1[0x48] = *param_2;
  param_1[0x49] = param_2[1];
  param_1[0x4a] = param_2[2];
  param_1[0x4b] = param_2[3];
  param_1[0x4c] = *param_3;
  param_1[0x4d] = param_3[1];
  param_1[0x4e] = param_3[2];
  param_1[0x4f] = param_3[3];
  param_1[0x50] = *param_4;
  param_1[0x51] = param_4[1];
  param_1[0x52] = param_4[2];
  param_1[0x53] = param_4[3];
  param_1[0x58] = param_5;
  param_1[0x59] = param_6;
  return;
}

// 0043FED0  FUN_0043fed0  size=64  [callgraph]
void __thiscall FUN_0043fed0(int param_1,undefined4 param_2,undefined2 param_3,undefined4 *param_4)

{
  *(undefined4 *)(param_1 + 0x174) = param_2;
  *(undefined2 *)(param_1 + 0x178) = param_3;
  *(undefined4 *)(param_1 + 0x180) = *param_4;
  *(undefined4 *)(param_1 + 0x184) = param_4[1];
  *(undefined4 *)(param_1 + 0x188) = param_4[2];
  *(undefined4 *)(param_1 + 0x18c) = param_4[3];
  return;
}

// 0043FF60  FUN_0043ff60  size=33  [callgraph]
bool FUN_0043ff60(uint param_1)

{
  return (0x80000000U >> ((byte)param_1 & 0x1f) & (&DAT_01bea070)[param_1 >> 5]) != 0;
}

// 0043FF90  Em0060::vf14C  size=43  [class]
bool Em0060::vf14C(int param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_00a7c8a0();
  }
  if (param_1 == 0x40) {
    return true;
  }
  return param_1 == 0x41;
}

// 0043FFC0  Em0060::vf158  size=5  [class]
undefined4 Em0060::vf158(void)

{
  return 0;
}

// 0043FFD0  Em0060::vf184  size=6  [class]
undefined4 Em0060::vf184(void)

{
  return 0xffffffff;
}

// 0043FFE0  Em0060::vf188  size=43  [class]
void Em0060::vf188(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 != 0) {
    FUN_00a7c950();
    uVar1 = FUN_00a7c7f0();
    FUN_00a7c960(uVar1);
  }
  return;
}

// 00440010  Em0060::vf2F8  size=46  [class]
void __fastcall Em0060::vf2F8(int *param_1)

{
  if (param_1[0x294] != 0) {
    (**(code **)(*param_1 + 0x344))(5,0,1);
    param_1[0x1af] = 1;
  }
  FUN_009fdde0();
  return;
}

// 00440040  Em0060::vf368  size=12  [class]
bool __fastcall Em0060::vf368(int param_1)

{
  return *(int *)(param_1 + 0x1b68) != 0;
}

// 00440070  FUN_00440070  size=153  [between]
void __fastcall FUN_00440070(int *param_1)

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
    (**(code **)(*param_1 + 0x358))(0,param_1 + 0x3b4);
  }
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00440107. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00440110  FUN_00440110  size=177  [between]
void __fastcall FUN_00440110(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(5,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
    *(undefined4 *)(param_1 + 0x920) = 0x42f00000;
    uVar1 = *(undefined4 *)(param_1 + 0x19e8 + *(int *)(param_1 + 0xde4) * 4);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x924) = uVar1;
    *(undefined4 *)(param_1 + 0x1a80) = 0;
    *(undefined4 *)(param_1 + 0x1a84) = 0;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) goto LAB_0044019e;
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_0044019e:
  if (0.0 < *(float *)(param_1 + 0x920)) {
    *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
  }
  return;
}

// 004401E0  FUN_004401e0  size=171  [between]
void __fastcall FUN_004401e0(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0xd,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) goto LAB_00440257;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
LAB_00440257:
  (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3db2b8c2,0);
  return;
}

// 00440290  FUN_00440290  size=26  [between]
void FUN_00440290(void)

{
  int iVar1;
  
  iVar1 = FUN_00a8c760(4);
  if (iVar1 != 0) {
    FUN_00dde2d0(0,3);
  }
  return;
}

// 004402D0  FUN_004402d0  size=231  [between]
void __fastcall FUN_004402d0(int *param_1)

{
  float fVar1;
  int iVar2;
  
  iVar2 = param_1[0x187];
  if (iVar2 == 0) {
    if (0.0 < (float)param_1[0x6a3]) {
      FUN_00aa4080(5,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (iVar2 != 1) {
    if (iVar2 != 2) {
      return;
    }
    goto LAB_00440388;
  }
  fVar1 = (float)param_1[0x6a3];
  param_1[0x6a3] = (int)(fVar1 - (float)param_1[0x244]);
  if (0.0 < fVar1 - (float)param_1[0x244]) {
    return;
  }
  FUN_00aa4080(0x2b,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  param_1[0x187] = param_1[0x187] + 1;
LAB_00440388:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004403b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00440400  FUN_00440400  size=93  [between]
void __fastcall FUN_00440400(int param_1)

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

// 004404C0  FUN_004404c0  size=170  [between]
void __fastcall FUN_004404c0(int *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00440568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00440590  FUN_00440590  size=153  [between]
void __fastcall FUN_00440590(int *param_1)

{
  char cVar1;
  int iVar2;
  
  if (param_1[0x187] == 0) {
    if (param_1[0x6ac] == 0) {
      cVar1 = (param_1[0x6ab] == 0) * '\x04' + '#';
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
                    /* WARNING: Could not recover jumptable at 0x00440627. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00440660  FUN_00440660  size=130  [between]
void __fastcall FUN_00440660(int *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x004406e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00440710  FUN_00440710  size=114  [between]
void __fastcall FUN_00440710(int param_1)

{
  undefined4 uVar1;
  
  *(byte *)(param_1 + 0xdb4) = *(byte *)(param_1 + 0xdb4) | 8;
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar1 = 0;
    if (*(int *)(param_1 + 0x1b20) != 0) {
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

// 004407D0  FUN_004407d0  size=114  [between]
void __fastcall FUN_004407d0(int param_1)

{
  undefined4 uVar1;
  
  *(byte *)(param_1 + 0xdb4) = *(byte *)(param_1 + 0xdb4) | 8;
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar1 = 0;
    if (*(int *)(param_1 + 0x1b20) != 0) {
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

// 004408D0  FUN_004408d0  size=814  [between]
void __fastcall FUN_004408d0(int *param_1)

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
    if (param_1[0x379] != 0) {
      uVar4 = 0x3fe66666;
      uVar3 = 0;
      FUN_00a92f90(0,0x3fe66666);
      FUN_00407ab0(uVar3,uVar4);
    }
    param_1[0x373] = 1;
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
    if (param_1[0x379] != 0) {
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
    fVar1 = (float)param_1[0x5ac];
    if (!NAN(fVar1) && 360.0 < fVar1 != (fVar1 == 360.0)) {
      (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
    }
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
      param_1[0x373] = 0;
                    /* WARNING: Could not recover jumptable at 0x00440bfa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}

// 00440C30  FUN_00440c30  size=239  [between]
void __fastcall FUN_00440c30(int *param_1)

{
  int iVar1;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x94,0,0,0x3f800000,0,0xbf800000,0);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x6e0] = param_1[0x10];
    param_1[0x6e1] = param_1[0x11];
    param_1[0x6e2] = param_1[0x12];
    param_1[0x6e3] = param_1[0x13];
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

// 00440D30  Em0060::vf208  size=36  [class]
void __thiscall Em0060::vf208(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x40);
  param_2[2] = *(undefined4 *)(param_1 + 0x48);
  param_2[3] = *(undefined4 *)(param_1 + 0x4c);
  param_2[1] = *(float *)(param_1 + 0x44) + 1.5;
  return;
}

// 00440D60  Em0060::thunk_vf6C  size=5  [class]
void __fastcall Em0060::thunk_vf6C(int param_1)

{
  if (*(int *)(param_1 + 0x4f0) != 0) {
    FUN_00a7ce90();
    return;
  }
  return;
}

// 00440D70  Em0060::vf70  size=5  [class]
void __fastcall Em0060::vf70(int param_1)

{
  if (*(int *)(param_1 + 0x4f0) != 0) {
    FUN_00a7cec0();
    return;
  }
  return;
}

// 00440D80  FUN_00440d80  size=130  [between]
void __thiscall
FUN_00440d80(int param_1,uint param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined4 uVar1;
  
  if ((param_2 & 0xffff0000) != 0x80000) {
    uVar1 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xdd4) = uVar1;
    *(undefined4 *)(param_1 + 0xdd8) = *(undefined4 *)(param_1 + 0xdd0);
  }
  FUN_00a8caf0(param_2,param_4,param_5,param_6);
  *(int *)(param_1 + 0xdd0) = param_3;
  if (param_3 < 0) {
    FUN_00a962d0(1,0);
    *(undefined4 *)(param_1 + 0x12cc) = 0x40;
    return;
  }
  FUN_00a962d0(0,0);
  *(undefined4 *)(param_1 + 0x12cc) = 0;
  return;
}

// 00440E10  Em0060::vf34C  size=98  [class]
void __fastcall Em0060::vf34C(int *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  
  iVar1 = FUN_00a8cab0();
  param_1[0x375] = iVar1;
  param_1[0x376] = param_1[0x374];
  FUN_00a8caf0(0x10000,0,0,0);
  param_1[0x374] = 0;
  FUN_00a962d0(0,0);
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x314);
  param_1[0x4b3] = 0;
  param_1[0x373] = 0;
                    /* WARNING: Could not recover jumptable at 0x00440e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

// 00440E80  FUN_00440e80  size=30  [between]
void FUN_00440e80(void)

{
  FUN_00eaa6e0(0x41200000,0);
  return;
}

// 00440EA0  FUN_00440ea0  size=20  [between]
void __fastcall FUN_00440ea0(int param_1)

{
  FUN_00a8d280();
  *(undefined4 *)(param_1 + 0x1698) = 0;
  return;
}

// 00440EC0  Em0060::vf358  size=5  [class]
void __thiscall Em0060::vf358(int *param_1,undefined4 param_2,int param_3)

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

// 00441000  Em0060::vf268  size=81  [class]
undefined4 __thiscall Em0060::vf268(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  
  if (*param_4 == 9) {
    iVar1 = FUN_00a8cbe0(0x8002c);
    if (iVar1 != 0) {
      FUN_00a8caf0(0x8002d,0,0,0);
      *(undefined4 *)(param_1 + 0xdd0) = 0;
      FUN_00a962d0(0,0);
      *(undefined4 *)(param_1 + 0x12cc) = 0;
    }
  }
  return 0;
}

// 00441060  Em0060::vf2C  size=51  [class]
void Em0060::vf2C(void)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
    FUN_00a7c950();
    FUN_00b0f990();
    return;
  }
  return;
}

// 004410A0  FUN_004410a0  size=35  [between]
bool __fastcall FUN_004410a0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00fdbc60();
  return *(int *)(param_1 + 0x870) <= iVar1;
}

// 004410D0  FUN_004410d0  size=407  [between]
void __fastcall FUN_004410d0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  float10 fVar3;
  
  *(undefined4 *)(param_1 + 0x186c) = 0;
  *(undefined4 *)(param_1 + 0x1868) = 0;
  if ((*(int *)(param_1 + 0x330) != 0) && (*(int *)(*(int *)(param_1 + 0x330) + 0xcc) == 0)) {
    puVar1 = (undefined4 *)(param_1 + 0x1804);
    iVar2 = 9;
    do {
      puVar1[-2] = 1;
      *puVar1 = 0;
      puVar1 = puVar1 + 3;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(0xf);
    *(float *)(param_1 + 0x1800) = (float)fVar3;
    fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x3c))(0xf);
    *(float *)(param_1 + 0x180c) = (float)fVar3;
    fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x44))(0xf);
    *(float *)(param_1 + 0x1818) = (float)fVar3;
    fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(0x10);
    *(float *)(param_1 + 0x1824) = (float)fVar3;
    fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x3c))(0x10);
    *(float *)(param_1 + 0x1830) = (float)fVar3;
    fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x44))(0x10);
    *(float *)(param_1 + 0x183c) = (float)fVar3;
    fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(0x11);
    *(float *)(param_1 + 0x1848) = (float)fVar3;
    fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x3c))(0x11);
    *(float *)(param_1 + 0x1854) = (float)fVar3;
    fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x44))(0x11);
    *(float *)(param_1 + 0x1860) = (float)fVar3;
    return;
  }
  puVar1 = (undefined4 *)(param_1 + 0x1804);
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

// 004412E0  FUN_004412e0  size=419  [between]
void __fastcall FUN_004412e0(int param_1)

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
  
  _Dst = (char *)(param_1 + 0x1878);
  _strcpy_s(_Dst,7,"_EFD02");
  _strcpy_s((char *)(param_1 + 0x1888),7,"_EFD01");
  _strcpy_s((char *)(param_1 + 0x1898),7,"_EFD05");
  _strcpy_s((char *)(param_1 + 0x18a8),7,"_EFD03");
  _strcpy_s((char *)(param_1 + 0x18b8),7,"_EFD06");
  _strcpy_s((char *)(param_1 + 0x18c8),7,"_EFD04");
  if ((*(int *)(param_1 + 0x330) != 0) && (*(int *)(*(int *)(param_1 + 0x330) + 0xcc) == 0)) {
    puVar3 = (undefined4 *)(param_1 + 0x1874);
    iVar5 = 6;
    do {
      *puVar3 = 0;
      puVar3[-1] = 0;
      puVar3 = puVar3 + 4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    fVar8 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(0x12);
    *(float *)(param_1 + 0x1874) = (float)fVar8;
    fVar8 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(0x13);
    *(float *)(param_1 + 0x1884) = (float)fVar8;
    fVar8 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(0x14);
    *(float *)(param_1 + 0x1894) = (float)fVar8;
    fVar8 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(0x15);
    *(float *)(param_1 + 0x18a4) = (float)fVar8;
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
    *(undefined4 *)(param_1 + 0x18d0) = 0;
    return;
  }
  puVar3 = (undefined4 *)(param_1 + 0x1874);
  iVar5 = 6;
  do {
    *puVar3 = 0;
    puVar3[-1] = 1;
    puVar3 = puVar3 + 4;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  *(undefined4 *)(param_1 + 0x18d0) = 1;
  return;
}

// 00441560  FUN_00441560  size=53  [between]
void __fastcall FUN_00441560(int *param_1)

{
  (**(code **)(*param_1 + 0x358))(0x193,param_1 + 900);
  param_1[0x3b0] = 1;
  FUN_00ac9420(param_1 + 0x61e);
  return;
}

// 004415A0  FUN_004415a0  size=53  [between]
void __fastcall FUN_004415a0(int *param_1)

{
  (**(code **)(*param_1 + 0x358))(400,param_1 + 900);
  param_1[0x3b1] = 1;
  FUN_00ac9420(param_1 + 0x622);
  return;
}

// 004415E0  FUN_004415e0  size=77  [between]
void __fastcall FUN_004415e0(int *param_1)

{
  (**(code **)(*param_1 + 0x358))(0x191,param_1 + 900);
  param_1[0x3b2] = 1;
  FUN_00ac9420(param_1 + 0x626);
  param_1[0x62c] = 1;
  FUN_00ac9420(param_1 + 0x62e);
  return;
}

// 00441630  FUN_00441630  size=77  [between]
void __fastcall FUN_00441630(int *param_1)

{
  (**(code **)(*param_1 + 0x358))(0x192,param_1 + 900);
  param_1[0x3b3] = 1;
  FUN_00ac9420(param_1 + 0x62a);
  param_1[0x630] = 1;
  FUN_00ac9420(param_1 + 0x632);
  return;
}

// 00441680  FUN_00441680  size=206  [between]
undefined4 __fastcall FUN_00441680(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_4;
  
  if ((*(int *)(param_1 + 0x1354) != 0) && (*(int *)(*(int *)(param_1 + 0x1354) + 0xb4c) != 0)) {
    return 1;
  }
  local_4 = 0;
  iVar3 = param_1 + 0x1878;
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

// 00441790  FUN_00441790  size=206  [between]
void __fastcall FUN_00441790(int param_1)

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

// 00441870  Em0060::vf110  size=204  [class]
void __thiscall Em0060::vf110(int param_1,int param_2)

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
    *(uint *)(param_1 + 0x136c) = *(uint *)(param_1 + 0x136c) | 0x1000000;
    return;
  }
  *(uint *)(param_1 + 0x136c) = *(uint *)(param_1 + 0x136c) & 0xfeffffff;
  return;
}

// 00441940  FUN_00441940  size=145  [between]
void __fastcall FUN_00441940(int param_1)

{
  undefined4 uVar1;
  float10 fVar2;
  
  *(undefined4 *)(param_1 + 0xdec) = 0;
  fVar2 = (float10)FUN_00dde300(0,0x3f800000);
  *(float *)(param_1 + 0xdf0) =
       (float)(((float10)1 - fVar2) * (float10)*(float *)(param_1 + 0x18f4) +
               (float10)*(float *)(param_1 + 0x18f8) * fVar2 + (float10)*(float *)(param_1 + 0x18f0)
              );
  uVar1 = FUN_00a8cab0();
  *(undefined4 *)(param_1 + 0xdd4) = uVar1;
  *(undefined4 *)(param_1 + 0xdd8) = *(undefined4 *)(param_1 + 0xdd0);
  FUN_00a8caf0(0x1000a,0,0,0);
  *(undefined4 *)(param_1 + 0xdd0) = 0;
  FUN_00a962d0(0,0);
  *(undefined4 *)(param_1 + 0x12cc) = 0;
  return;
}

// 004419E0  FUN_004419e0  size=163  [between]
void __fastcall FUN_004419e0(int *param_1)

{
  float10 fVar1;
  
  param_1[0x379] = 1;
  param_1[0x37b] = 0;
  fVar1 = (float10)FUN_00dde300(0,0x3f800000);
  param_1[0x37c] =
       (int)(float)(((float10)1 - fVar1) * (float10)(float)param_1[0x63d] +
                    (float10)(float)param_1[0x63e] * fVar1 + (float10)(float)param_1[0x63c]);
  FUN_00eaa6e0(0x41200000,0);
  (**(code **)(*param_1 + 0x358))(0xc9,param_1 + 0x3e0);
  (**(code **)(*param_1 + 0x358))(9,param_1 + 0x3e0);
  param_1[0x37c] = param_1[0x63c];
  return;
}

// 00441AC0  FUN_00441ac0  size=98  [between]
void __fastcall FUN_00441ac0(int param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0xdf0) = *(undefined4 *)(param_1 + 0x18f0);
  *(undefined4 *)(param_1 + 0xde4) = 0;
  *(undefined4 *)(param_1 + 0xdec) = 0;
  *(undefined4 *)(param_1 + 0x18e8) = 0;
  uVar1 = FUN_00a8cab0();
  *(undefined4 *)(param_1 + 0xdd4) = uVar1;
  *(undefined4 *)(param_1 + 0xdd8) = *(undefined4 *)(param_1 + 0xdd0);
  FUN_00a8caf0(0x1000c,0,0,0);
  *(undefined4 *)(param_1 + 0xdd0) = 0;
  FUN_00a962d0(0,0);
  *(undefined4 *)(param_1 + 0x12cc) = 0;
  return;
}

// 00441B70  FUN_00441b70  size=204  [between]
undefined4 __thiscall FUN_00441b70(int param_1,undefined4 *param_2)

{
  short sVar1;
  undefined4 uVar2;
  
  sVar1 = FUN_00dde2d0(0,2);
  uVar2 = 1;
  if (sVar1 == 0) {
    if (*(int *)(param_1 + 0x1aac) == 1) {
LAB_00441b95:
      *param_2 = 0x1000d;
      return uVar2;
    }
    if (*(int *)(param_1 + 0x1ab0) == 1) {
      *param_2 = 0x1000e;
      return uVar2;
    }
    if (*(int *)(param_1 + 0x1aa8) == 1) {
      *param_2 = 0x1000f;
      return uVar2;
    }
  }
  else if (sVar1 == 1) {
    if (*(int *)(param_1 + 0x1aa8) == 1) {
LAB_00441bdb:
      *param_2 = 0x1000f;
      return uVar2;
    }
    if (*(int *)(param_1 + 0x1ab0) == 1) {
LAB_00441bf1:
      *param_2 = 0x1000e;
      return uVar2;
    }
    if (*(int *)(param_1 + 0x1aac) == 1) {
      *param_2 = 0x1000d;
      return uVar2;
    }
  }
  else if (sVar1 == 2) {
    if (*(int *)(param_1 + 0x1ab0) == 1) goto LAB_00441bf1;
    if (*(int *)(param_1 + 0x1aa8) == 1) goto LAB_00441bdb;
    if (*(int *)(param_1 + 0x1aac) == 1) goto LAB_00441b95;
  }
  return 0;
}

// 00441C40  Em0060::vf2D4  size=3  [class]
undefined4 Em0060::vf2D4(void)

{
  return 0;
}

// 00441CD0  FUN_00441cd0  size=1344  [callgraph]
undefined4 __fastcall FUN_00441cd0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cbe0(0x8002b);
  if (iVar1 == 0) {
    iVar1 = FUN_00a8cbe0(0x8002d);
    if (iVar1 == 0) {
      iVar1 = FUN_00a8cbe0(0x8002c);
      if (((iVar1 == 0) && (*(int *)(param_1 + 0x1b24) != 0)) && (*(int *)(param_1 + 0x1b28) == 0))
      {
        iVar1 = FUN_00a8cbe0(0x80000);
        if (iVar1 == 0) {
          iVar1 = FUN_00a8cbe0(0x8000d);
          if (iVar1 == 0) {
            iVar1 = FUN_00a8cbe0(0x80029);
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
                                                                iVar1 = FUN_00a8cbe0(0x80005);
                                                                if (iVar1 == 0) {
                                                                  iVar1 = FUN_00a8cbe0(0x80006);
                                                                  if (iVar1 == 0) {
                                                                    iVar1 = FUN_00a8cbe0(0x80007);
                                                                    if (iVar1 == 0) {
                                                                      iVar1 = FUN_00a8cbe0(0x80008);
                                                                      if (iVar1 == 0) {
                                                                        iVar1 = FUN_00a8cbe0(0x80009
                                                  );
                                                  if (iVar1 == 0) {
                                                    iVar1 = FUN_00a8cbe0(0x8000a);
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
                                                                        iVar1 = FUN_00a8cbe0(0x80014
                                                  );
                                                  if (iVar1 == 0) {
                                                    iVar1 = FUN_00a8cbe0(0x80015);
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
                                                                        iVar1 = FUN_00a8cbe0(0x8001f
                                                  );
                                                  if (iVar1 == 0) {
                                                    iVar1 = FUN_00a8cbe0(0x80020);
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

// 00442250  FUN_00442250  size=183  [callgraph]
float10 __thiscall FUN_00442250(int param_1,undefined4 param_2,float param_3,float param_4)

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

// 00442310  FUN_00442310  size=52  [callgraph]
void __thiscall FUN_00442310(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x1340) = *param_2;
  *(undefined4 *)(param_1 + 0x1344) = param_2[1];
  *(undefined4 *)(param_1 + 0x1348) = param_2[2];
  *(undefined4 *)(param_1 + 0x134c) = param_2[3];
  *(undefined4 *)(param_1 + 0x1350) = 0;
  return;
}

// 00442920  FUN_00442920  size=207  [callgraph]
void __thiscall FUN_00442920(int param_1,int param_2)

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

// 00442A00  FUN_00442a00  size=1  [callgraph]
void FUN_00442a00(void)

{
  return;
}

// 00442A10  FUN_00442a10  size=1  [callgraph]
void FUN_00442a10(void)

{
  return;
}

// 00442A20  FUN_00442a20  size=1  [callgraph]
void FUN_00442a20(void)

{
  return;
}

// 00442A30  FUN_00442a30  size=1  [callgraph]
void FUN_00442a30(void)

{
  return;
}

// 00442A40  FUN_00442a40  size=1  [callgraph]
void FUN_00442a40(void)

{
  return;
}

// 00442A50  Em0060::thunk_vf1C0  size=5  [class]
void __thiscall Em0060::thunk_vf1C0(int *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int unaff_retaddr;
  undefined4 uVar7;
  undefined *puVar8;
  
  piVar5 = param_2;
  uVar6 = 0;
  if (param_2 == (int *)0x0) {
    param_2 = (int *)0x0;
  }
  else {
    puVar8 = &DAT_01be9ca0;
    (**(code **)(*param_2 + 4))(&DAT_01be9ca0);
    iVar2 = FUN_00dd6d80(puVar8);
    param_2 = (int *)(-(uint)(iVar2 != 0) & (uint)piVar5);
  }
  piVar5 = param_3;
  if (param_3 != (int *)0x0) {
    puVar8 = &DAT_01be9ca0;
    (**(code **)(*param_3 + 4))(&DAT_01be9ca0);
    iVar2 = FUN_00dd6d80(puVar8);
    uVar6 = -(uint)(iVar2 != 0) & (uint)piVar5;
  }
  uVar3 = FUN_009f8b40();
  FUN_009f8ae0(uVar3);
  if (uVar6 != 0) {
    uVar3 = FUN_00a7c7f0();
    FUN_00a7c940(uVar3);
    FUN_00a7c960(&param_2);
    uVar3 = FUN_009f8b40();
    FUN_009f8ae0(uVar3);
  }
  uVar1 = param_1[300];
  if (uVar1 < 0x20141) {
    if (uVar1 != 0x20140) {
      switch(uVar1) {
      case 0x20010:
      case 0x20050:
        goto switchD_00ace80d_caseD_20010;
      case 0x20030:
      case 0x20033:
      case 0x20035:
        FUN_00a92f90();
        FUN_00e26e90();
        FUN_00e272b0(0x2003f,0x20030);
        break;
      case 0x20071:
        iVar2 = param_1[0x12d];
        FUN_00a92f90();
        FUN_00e26e90();
        FUN_00e272b0(iVar2,0x20070);
        break;
      case 0x20081:
        iVar2 = param_1[0x12d];
        FUN_00a92f90();
        FUN_00e26e90();
        FUN_00e272b0(iVar2,0x20080);
      }
      goto switchD_00ace80d_caseD_20011;
    }
switchD_00ace80d_caseD_20010:
    FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e272b0(0x20012,0x20010);
    FUN_00a92f90();
    iVar2 = 0x2014f;
  }
  else {
    switch(uVar1) {
    case 0x20142:
    case 0x20144:
    case 0x20160:
      goto switchD_00ace80d_caseD_20010;
    default:
      goto switchD_00ace80d_caseD_20011;
    case 0x20150:
    case 0x20152:
      FUN_00a92f90();
      FUN_00e26e90();
      FUN_00e272b0(0x20012,0x20010);
      FUN_00a92f90();
      iVar2 = 0x2015f;
      break;
    case 0x20170:
      FUN_00a92f90();
      FUN_00e26e90();
      FUN_00e272b0(0x20012,0x20010);
      iVar2 = param_1[300];
      FUN_00a92f90();
    }
  }
  FUN_00e27330(iVar2,0x20010);
switchD_00ace80d_caseD_20011:
  iVar2 = 0;
  iVar4 = FUN_00ac89d0();
  if (iVar4 == 0) {
    iVar4 = param_1[0xcc];
  }
  else {
    iVar4 = *(int *)(iVar4 + 0x330);
  }
  if (iVar4 != 0) {
    iVar2 = *(int *)(iVar4 + 0xcc);
  }
  param_1[0x295] = iVar2;
  if ((unaff_retaddr != 0) && (piVar5 = (int *)FUN_00acdea0(), piVar5 != (int *)0x0)) {
    puVar8 = &DAT_01be9c78;
    (**(code **)(*piVar5 + 4))(&DAT_01be9c78);
    iVar2 = FUN_00dd6d80(puVar8);
    if (iVar2 != 0) {
      uVar3 = FUN_009f8b40();
      FUN_009f8ae0(uVar3);
      iVar2 = *param_1;
      param_1[0x139] = piVar5[0x139];
      uVar3 = (**(code **)(*piVar5 + 0x1d8))();
      (**(code **)(iVar2 + 0x1d4))(uVar3);
      if ((piVar5[0x351] & 0x80000000U) != 0) {
        uVar7 = 0;
        uVar3 = FUN_00a82d50(0);
        FUN_00a88b50(uVar3,uVar7);
      }
      FUN_0040ac60(piVar5 + 0x2ac);
      *(short *)(param_1 + 0x36b) = (short)piVar5[0x36b];
      param_1[0x36c] = piVar5[0x36c];
      *(char *)(param_1 + 0x36d) = (char)piVar5[0x36d];
      param_1[0x28c] = piVar5[0x28c];
      param_1[0x28d] = piVar5[0x28d];
      param_1[0x28e] = piVar5[0x28e];
      param_1[0x28f] = piVar5[0x28f];
      param_1[0x290] = piVar5[0x290];
      *(char *)(param_1 + 0x291) = (char)piVar5[0x291];
      param_1[0x292] = piVar5[0x292];
      param_1[0x12a] = piVar5[0x12a];
      param_1[0x296] = piVar5[0x296];
    }
  }
  (**(code **)(*param_1 + 0x334))(uVar6,unaff_retaddr);
  return;
}

// 00442A70  FUN_00442a70  size=180  [between]
void __fastcall FUN_00442a70(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar1 = 0x8000000;
    if (*(int *)(param_1 + 0x1b20) != 0) {
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
    FUN_00a8caf0(0x80006,0,0,0);
    *(undefined4 *)(param_1 + 0xdd0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x12cc) = 0;
  }
  return;
}

// 00442B30  FUN_00442b30  size=170  [between]
void __fastcall FUN_00442b30(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar1 = 0;
    if (*(int *)(param_1 + 0x1b20) != 0) {
      uVar1 = 0x40;
    }
    *(undefined4 *)(param_1 + 0x61c) = 1;
    FUN_00aa4080(0xa7,0,0x3d088889,0x3f800000,uVar1,0xbf800000,0x3f800000);
    if (*(float *)(param_1 + 0x1b48) < 0.0) {
      *(undefined4 *)(param_1 + 0x1b48) = 0x42700000;
    }
    *(undefined4 *)(param_1 + 0x1b28) = 1;
    *(undefined4 *)(param_1 + 0xda8) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xdb0) = 0xffffffff;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00442BF0  FUN_00442bf0  size=180  [between]
void __fastcall FUN_00442bf0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar1 = 0x8000000;
    if (*(int *)(param_1 + 0x1b20) != 0) {
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
    FUN_00a8caf0(0x80006,0,0,0);
    *(undefined4 *)(param_1 + 0xdd0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x12cc) = 0;
  }
  return;
}

// 00442CC0  FUN_00442cc0  size=180  [between]
void __fastcall FUN_00442cc0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar1 = 0x8000000;
    if (*(int *)(param_1 + 0x1b20) != 0) {
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
    FUN_00a8caf0(0x80006,0,0,0);
    *(undefined4 *)(param_1 + 0xdd0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x12cc) = 0;
  }
  return;
}

// 00442DB0  FUN_00442db0  size=239  [between]
void __fastcall FUN_00442db0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1[0x187] == 0) {
    uVar1 = 0x8000000;
    if (param_1[0x6c8] != 0) {
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
    FUN_00a8caf0(0x8000a,0,0,0);
    param_1[0x374] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4b3] = 0;
  }
  iVar2 = FUN_00a8c760(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3ca3d70a,0x393702d3,0x3e0efa35,0);
  }
  return;
}

// 00442EB0  FUN_00442eb0  size=176  [between]
void __fastcall FUN_00442eb0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar1 = 0x8000000;
    if (*(int *)(param_1 + 0x1b20) != 0) {
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
    FUN_00a8caf0(0x80006,0,0,0);
    *(undefined4 *)(param_1 + 0xdd0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x12cc) = 0;
  }
  return;
}

// 00442F80  FUN_00442f80  size=498  [between]
void __fastcall FUN_00442f80(int *param_1)

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
    if (param_1[0x6c8] != 0) {
      uVar2 = 0x8000040;
    }
    FUN_00aa4080(0xaf,0,0x3e2aaaab,0x3f800000,uVar2,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) goto LAB_0044312e;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a8c760(8);
  if ((((iVar3 != 0) && (param_1[0x6d1] == 0)) && (param_1[0x2a2] != 0)) &&
     (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
    local_20 = *(float *)(iVar3 + 0x40);
    local_18 = *(float *)(iVar3 + 0x48);
    local_14 = *(undefined4 *)(iVar3 + 0x4c);
    local_1c = param_1[0x15];
    fVar4 = (float10)FUN_00dde300(0xc0400000,0x40400000);
    local_20 = (float)(fVar4 + (float10)local_20);
    fVar4 = (float10)FUN_00dde300(0xc0400000,0x40400000);
    local_18 = (float)(fVar4 + (float10)local_18);
    if ((param_1[0x4d6] != 0) && (param_1[0x4d7] != 0)) {
      FUN_0043fc90(param_1[0x2a2],&local_20,3);
    }
  }
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    FUN_00a8caf0(0x80006,0,0,0);
    param_1[0x374] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4b3] = 0;
    sVar1 = FUN_00dde2d0(0,2);
    param_1[0x6d2] = (int)(((float)(int)sVar1 + 1.0) * 60.0);
  }
LAB_0044312e:
  iVar3 = FUN_00a8c760(0);
  if (iVar3 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3db2b8c2,0);
  }
  return;
}

// 00443290  FUN_00443290  size=202  [between]
void __fastcall FUN_00443290(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar2 = 0x8000000;
    if (*(int *)(param_1 + 0x1b20) != 0) {
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
    *(undefined4 *)(param_1 + 0xdd4) = uVar2;
    *(undefined4 *)(param_1 + 0xdd8) = *(undefined4 *)(param_1 + 0xdd0);
    FUN_00a8caf0(0x60012,0,0,0);
    *(undefined4 *)(param_1 + 0xdd0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x12cc) = 0;
  }
  return;
}

// 00443380  FUN_00443380  size=481  [between]
void __fastcall FUN_00443380(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  switch(param_1[0x187]) {
  case 0:
    param_1[0x187] = 1;
    uVar2 = 0x79;
    goto LAB_004433d2;
  case 1:
  case 5:
    goto switchD_00443394_caseD_1;
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
LAB_004433d2:
    FUN_00aa4080(uVar2,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
switchD_00443394_caseD_1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 6:
    uVar2 = 0x8000000;
    if (param_1[0x6c8] != 0) {
      uVar2 = 0x8000040;
    }
    param_1[0x187] = 7;
    FUN_00aa4080(0xa8,0,0x3d088889,0x3f800000,uVar2,0xbf800000,0x3f800000);
    param_1[0x248] = 0x42f00000;
  case 7:
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if ((float)param_1[0x248] < 0.0) {
      FUN_00440d80((-(uint)(param_1[0x6c9] != 0) & 0xfffffff9) + 0x8000d,0,0,0,0);
      return;
    }
  }
  return;
}

// 004435A0  FUN_004435a0  size=441  [between]
void __fastcall FUN_004435a0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  switch(param_1[0x187]) {
  case 0:
    uVar1 = 0x8000000;
    if (param_1[0x6c8] != 0) {
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
    if (param_1[0x6c8] != 0) {
      uVar1 = 0x8000040;
    }
    param_1[0x187] = 5;
    FUN_00aa4080(0x7d,0,0x3d088889,0x3f800000,uVar1,0xbf800000,0x3f800000);
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      iVar2 = FUN_00a8cab0();
      param_1[0x375] = iVar2;
      param_1[0x376] = param_1[0x374];
      FUN_00a8caf0(0x6000a,0,0,0);
      param_1[0x374] = 0;
      FUN_00a962d0(0,0);
      param_1[0x4b3] = 0;
      return;
    }
  }
  return;
}

// 00443790  FUN_00443790  size=202  [between]
void __fastcall FUN_00443790(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar2 = 0x8000000;
    if (*(int *)(param_1 + 0x1b20) != 0) {
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
    *(undefined4 *)(param_1 + 0xdd4) = uVar2;
    *(undefined4 *)(param_1 + 0xdd8) = *(undefined4 *)(param_1 + 0xdd0);
    FUN_00a8caf0(0x10000,0,0,0);
    *(undefined4 *)(param_1 + 0xdd0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x12cc) = 0;
  }
  return;
}

// 00443870  FUN_00443870  size=202  [between]
void __fastcall FUN_00443870(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar2 = 0x8000000;
    if (*(int *)(param_1 + 0x1b20) != 0) {
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
    *(undefined4 *)(param_1 + 0xdd4) = uVar2;
    *(undefined4 *)(param_1 + 0xdd8) = *(undefined4 *)(param_1 + 0xdd0);
    FUN_00a8caf0(0x10000,0,0,0);
    *(undefined4 *)(param_1 + 0xdd0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x12cc) = 0;
  }
  return;
}

// 00443950  FUN_00443950  size=315  [between]
void __fastcall FUN_00443950(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    uVar2 = 0x8000000;
    if (*(int *)(param_1 + 0x1b20) != 0) {
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
      *(undefined4 *)(param_1 + 0xdd4) = uVar2;
      *(undefined4 *)(param_1 + 0xdd8) = *(undefined4 *)(param_1 + 0xdd0);
      FUN_00a8caf0(0x10000,0,0,0);
      *(undefined4 *)(param_1 + 0xdd0) = 0;
      FUN_00a962d0(0,0);
      *(undefined4 *)(param_1 + 0x12cc) = 0;
      return;
    }
  }
  return;
}

// 00443AB0  FUN_00443ab0  size=212  [between]
void __fastcall FUN_00443ab0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar2 = 0x8000000;
    if (*(int *)(param_1 + 0x1b20) != 0) {
      uVar2 = 0x8000040;
    }
    *(undefined4 *)(param_1 + 0x61c) = 1;
    FUN_00aa4080(0x6d,0,0x3d088889,0x3f800000,uVar2,0xbf800000,0x3f800000);
    if (*(int *)(param_1 + 0x1b20) == 0) {
      *(undefined4 *)(param_1 + 0x1b38) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x1b3c) = 0;
    }
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
    FUN_00a8caf0(0x10000,0,0,0);
    *(undefined4 *)(param_1 + 0xdd0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x12cc) = 0;
  }
  return;
}

// 00443BB0  FUN_00443bb0  size=1  [between]
void FUN_00443bb0(void)

{
  return;
}

// 00443BF0  FUN_00443bf0  size=12  [between]
undefined4 __fastcall FUN_00443bf0(undefined4 param_1)

{
  FUN_00a7c930();
  return param_1;
}

// 00443D70  Em0060::vf1A0  size=5  [class]
undefined4 Em0060::vf1A0(void)

{
  return 0;
}

// 00443D80  Em0060::vf1A4  size=470  [class]
void __thiscall Em0060::vf1A4(int param_1,int *param_2,byte param_3)

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
    *(int *)(param_1 + 0x169c) = *(int *)(param_1 + 0x169c) + 1;
    *(undefined4 *)(param_1 + 0x1694) = 1;
    *(undefined4 *)(param_1 + 0x1698) = 1;
  }
  iVar2 = FUN_00441680();
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
    iVar2 = FUN_00a8cbe0(0x8002c);
    if (iVar2 != 0) {
      return;
    }
    iVar2 = FUN_00a8cbe0(0x8002d);
    if (iVar2 != 0) {
      return;
    }
    uVar3 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xdd8) = *(undefined4 *)(param_1 + 0xdd0);
    *(undefined4 *)(param_1 + 0xdd4) = uVar3;
    FUN_00a8caf0(0x60003,0,0,0);
    *(undefined4 *)(param_1 + 0xdd0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x12cc) = 0;
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
    *(undefined4 *)(param_1 + 0xdd4) = uVar3;
    *(undefined4 *)(param_1 + 0xdd8) = *(undefined4 *)(param_1 + 0xdd0);
    uVar3 = 0x60005;
  }
  else {
    uVar3 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xdd4) = uVar3;
    *(undefined4 *)(param_1 + 0xdd8) = *(undefined4 *)(param_1 + 0xdd0);
    uVar3 = 0x60007;
  }
  FUN_00a8caf0(uVar3,0,0,0);
  *(undefined4 *)(param_1 + 0xdd0) = 0;
  FUN_00a962d0(0,0);
  *(undefined4 *)(param_1 + 0x12cc) = 0;
  return;
}

// 00443F80  FUN_00443f80  size=49  [callgraph]
undefined4 __fastcall FUN_00443f80(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00ac4780();
  if ((iVar1 < 3) &&
     ((*(byte *)(param_1 + 0xdae) < 5 ||
      ((*(int *)(param_1 + 0xdb0) != 2 && (*(int *)(param_1 + 0xdb0) != -1)))))) {
    return 0;
  }
  return 1;
}

// 00443FC0  FUN_00443fc0  size=49  [callgraph]
undefined4 __fastcall FUN_00443fc0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00ac4780();
  if ((iVar1 < 3) &&
     ((*(byte *)(param_1 + 0xdae) < 5 ||
      ((*(int *)(param_1 + 0xdb0) != 2 && (*(int *)(param_1 + 0xdb0) != -1)))))) {
    return 0;
  }
  return 1;
}

// 00444030  FUN_00444030  size=149  [callgraph]
void __fastcall FUN_00444030(int *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x004440c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 004440E0  FUN_004440e0  size=149  [callgraph]
void __fastcall FUN_004440e0(int *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00444173. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00444190  FUN_00444190  size=149  [callgraph]
void __fastcall FUN_00444190(int *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00444223. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00444240  FUN_00444240  size=41  [callgraph]
void __thiscall FUN_00444240(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x1a18) == 0) {
    *(int *)(param_1 + 0x1a34) = *(int *)(param_1 + 0x1a34) + param_2;
    *(undefined4 *)(param_1 + 0x1a50) =
         *(undefined4 *)(param_1 + 0x1918 + *(int *)(param_1 + 0xde4) * 4);
  }
  return;
}

// 00444290  FUN_00444290  size=24  [callgraph]
undefined4 __fastcall FUN_00444290(int param_1)

{
  if (0.0 < *(float *)(param_1 + 0x1a7c)) {
    return 1;
  }
  return 0;
}

// 004442C0  FUN_004442c0  size=41  [callgraph]
void __thiscall FUN_004442c0(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x1a1c) == 0) {
    *(int *)(param_1 + 0x1a38) = *(int *)(param_1 + 0x1a38) + param_2;
    *(undefined4 *)(param_1 + 0x1a54) =
         *(undefined4 *)(param_1 + 0x1928 + *(int *)(param_1 + 0xde4) * 4);
  }
  return;
}

// 00444360  FUN_00444360  size=68  [callgraph]
void __thiscall FUN_00444360(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1a20) == 0) {
    iVar1 = FUN_00a8cbe0(0x1000a);
    if ((iVar1 == 0) && (iVar1 = FUN_00a8cbe0(0x1000b), iVar1 == 0)) {
      return;
    }
    *(int *)(param_1 + 0x1a3c) = *(int *)(param_1 + 0x1a3c) + param_2;
    *(undefined4 *)(param_1 + 0x1a58) = *(undefined4 *)(param_1 + 0x1904);
  }
  return;
}

// 004443D0  FUN_004443d0  size=59  [callgraph]
void __thiscall FUN_004443d0(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1a24) == 0) {
    iVar1 = FUN_00a8cbe0(0x5000b);
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x1a40) = *(int *)(param_1 + 0x1a40) + param_2;
      *(undefined4 *)(param_1 + 0x1a5c) =
           *(undefined4 *)(param_1 + 0x1938 + *(int *)(param_1 + 0xde4) * 4);
    }
  }
  return;
}

// 00444430  FUN_00444430  size=59  [callgraph]
void __thiscall FUN_00444430(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1a28) == 0) {
    iVar1 = FUN_00a8cbe0(0x5000d);
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x1a44) = *(int *)(param_1 + 0x1a44) + param_2;
      *(undefined4 *)(param_1 + 0x1a60) =
           *(undefined4 *)(param_1 + 0x1948 + *(int *)(param_1 + 0xde4) * 4);
    }
  }
  return;
}

// 00444490  FUN_00444490  size=59  [callgraph]
void __thiscall FUN_00444490(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1a2c) == 0) {
    iVar1 = FUN_00a8cbe0(0x5000c);
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x1a48) = *(int *)(param_1 + 0x1a48) + param_2;
      *(undefined4 *)(param_1 + 0x1a64) =
           *(undefined4 *)(param_1 + 0x1958 + *(int *)(param_1 + 0xde4) * 4);
    }
  }
  return;
}

// 004444F0  FUN_004444f0  size=59  [callgraph]
void __thiscall FUN_004444f0(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1a30) == 0) {
    iVar1 = FUN_00a8cbe0(0x5000e);
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x1a4c) = *(int *)(param_1 + 0x1a4c) + param_2;
      *(undefined4 *)(param_1 + 0x1a68) =
           *(undefined4 *)(param_1 + 0x1968 + *(int *)(param_1 + 0xde4) * 4);
    }
  }
  return;
}

// 004445A0  FUN_004445a0  size=98  [callgraph]
void __fastcall FUN_004445a0(int param_1)

{
  float fVar1;
  float10 fVar2;
  
  *(undefined4 *)(param_1 + 0x1a6c) =
       *(undefined4 *)(param_1 + 0x19a0 + *(int *)(param_1 + 0xde4) * 4);
  fVar2 = (float10)FUN_00dde300(0,0x3f800000);
  fVar1 = *(float *)(param_1 + 0x19a8 + *(int *)(param_1 + 0xde4) * 4);
  *(int *)(param_1 + 0x1a78) = *(int *)(param_1 + 0x1a78) + 1;
  *(float *)(param_1 + 0x1a6c) =
       (float)(fVar2 * (float10)fVar1 + (float10)*(float *)(param_1 + 0x1a6c));
  *(float *)(param_1 + 0x1a74) =
       *(float *)(param_1 + 0x1990 + *(int *)(param_1 + 0xde4) * 4) + *(float *)(param_1 + 0x1a74);
  return;
}

// 00444630  FUN_00444630  size=158  [callgraph]
undefined4 __fastcall FUN_00444630(int param_1)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar2 = (float10)FUN_00dde300(0,0x3f800000);
  if (fVar2 <= (float10)*(float *)(param_1 + 0x19b0 + *(int *)(param_1 + 0xde4) * 4)) {
    fVar2 = (float10)FUN_00dde300(0,0x3f800000);
    iVar1 = *(int *)(param_1 + 0xde4);
    fVar3 = (float10)*(float *)(param_1 + 0x19b8 + iVar1 * 4);
    if (fVar2 < fVar3) {
      return 1;
    }
    fVar3 = fVar3 + (float10)*(float *)(param_1 + 0x19c0 + iVar1 * 4);
    if (fVar2 < fVar3) {
      return 2;
    }
    if (fVar2 < fVar3 + (float10)*(float *)(param_1 + 0x19c8 + iVar1 * 4)) {
      return 3;
    }
  }
  return 0;
}

// 00444740  FUN_00444740  size=46  [callgraph]
undefined4 __fastcall FUN_00444740(int param_1)

{
  int iVar1;
  
  if (*(float *)(param_1 + 0x1a7c) <= 0.0) {
    iVar1 = FUN_00a8c760(0x39);
    if ((iVar1 == 0) && (*(int *)(param_1 + 0x1ac4) == 0)) {
      return 0;
    }
  }
  return 1;
}

// 004447B0  FUN_004447b0  size=678  [callgraph]
void __fastcall FUN_004447b0(int *param_1)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  short sVar4;
  int iVar5;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  switch(param_1[0x187]) {
  case 0:
    param_1[0x4db] = param_1[0x4db] ^ 0x8000000;
    FUN_00aa4080(0x3c,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
    param_1[0x5a6] = 0;
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
    param_1[0x4db] = param_1[0x4db] ^ 0x8000000;
    FUN_00aa4080(0x3d,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      sVar4 = FUN_00dde2d0(1,3);
      param_1[0x5a9] = (int)((float)(int)sVar4 * 60.0);
      if (param_1[0x379] != 0) {
        param_1[0x5a9] = 0x41f00000;
      }
    }
    iVar5 = FUN_00a8c760(10);
    if ((iVar5 != 0) && (param_1[0x5a6] != 0)) {
      iVar5 = FUN_00a8cab0();
      param_1[0x376] = param_1[0x374];
      param_1[0x375] = iVar5;
      FUN_00a8caf0(0xf0001,0,0,0);
      param_1[0x374] = 0;
      FUN_00a962d0(0,0);
      param_1[0x4b3] = 0;
    }
  }
  if (((param_1[0x2a1] != 0) && (param_1[0x187] < 3)) && (iVar5 = FUN_00a12210(0xf00), iVar5 != 0))
  {
    fVar1 = *(float *)(param_1[0x2a1] + 0x48);
    fVar2 = *(float *)(iVar5 + 0x48);
    pcVar3 = *(code **)(*param_1 + 0x308);
    param_1[0x14] =
         (int)((float)param_1[0x14] +
              (*(float *)(param_1[0x2a1] + 0x40) - *(float *)(iVar5 + 0x40)) * 0.08);
    param_1[0x16] = (int)((fVar1 - fVar2) * 0.08 + (float)param_1[0x16]);
    (*pcVar3)(0x3e99999a,0x393702d3,0x3db2b8c2,0);
  }
  iVar5 = FUN_00a8c760(0);
  if (iVar5 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3db2b8c2,0);
  }
  return;
}

// 00444A90  FUN_00444a90  size=204  [callgraph]
void __fastcall FUN_00444a90(int *param_1)

{
  short sVar1;
  int iVar2;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x5a,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
    param_1[0x5a6] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    sVar1 = FUN_00dde2d0(1,3);
    param_1[0x5a9] = (int)((float)(int)sVar1 * 60.0);
    if (param_1[0x379] != 0) {
      param_1[0x5a9] = 0x41f00000;
    }
  }
  return;
}

// 00444B70  FUN_00444b70  size=861  [callgraph]
void __fastcall FUN_00444b70(int *param_1)

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
    param_1[0x5a6] = 0;
    if (param_1[0x379] != 0) {
      FUN_00a92f90();
      iVar4 = FUN_00e26e90();
      if (iVar4 != 0) {
        FUN_00e36720(0,0x3fc00000);
      }
    }
  }
  else if (param_1[0x187] != 1) goto LAB_00444e88;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  if (param_1[0x379] == 0) {
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
        if (param_1[0x4d5] != 0) {
          FUN_0043fc90(param_1[0x2a2],&local_20,0);
        }
      }
      uVar2 = 0;
      goto LAB_00444e38;
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
        if (param_1[0x4d5] != 0) {
          FUN_0043fc90(param_1[0x2a2],&local_20,0);
        }
      }
      uVar2 = 0x3d088889;
LAB_00444e38:
      FUN_00aa4080(0x49,2,uVar2,0x3f800000,0x8000210,0,0x3f800000);
    }
  }
  iVar4 = FUN_00a94ce0(0);
  if (iVar4 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    sVar3 = FUN_00dde2d0(0,2);
    param_1[0x5aa] = (int)(((float)(int)sVar3 + 1.0) * 60.0);
  }
LAB_00444e88:
  iVar4 = FUN_00a8c760(0);
  if (iVar4 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3e0efa35,0);
  }
  return;
}

// 00444ED0  FUN_00444ed0  size=718  [callgraph]
void __fastcall FUN_00444ed0(int *param_1)

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
    param_1[0x251] = 0;
    param_1[0x249] = 0x40000000;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x249];
    param_1[0x249] = (int)(fVar1 - (float)param_1[0x244]);
    if ((fVar1 - (float)param_1[0x244] < 0.0) && (param_1[0x6d0] == 0)) {
      if ((param_1[0x2a2] != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
        local_1c = *(undefined4 *)(iVar2 + 0x44);
        local_14 = *(undefined4 *)(iVar2 + 0x4c);
        local_18 = (float)(3 - param_1[0x251]) * 0.5;
        local_20 = local_18 + *(float *)(iVar2 + 0x40);
        local_18 = *(float *)(iVar2 + 0x48) + local_18;
        if (param_1[0x4d5] != 0) {
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

// 004451D0  FUN_004451d0  size=445  [callgraph]
void __fastcall FUN_004451d0(int *param_1)

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
    param_1[0x5a6] = 0;
  }
  else if (param_1[0x187] != 1) goto LAB_00445349;
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
    if (param_1[0x4d6] != 0) {
      FUN_0043fc90(param_1[0x2a2],&local_20,0);
    }
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    sVar1 = FUN_00dde2d0(0,2);
    param_1[0x5ab] = (int)(((float)(int)sVar1 + 1.0) * 60.0);
  }
LAB_00445349:
  iVar2 = FUN_00a8c760(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3db2b8c2,0);
  }
  return;
}

// 004453C0  FUN_004453c0  size=445  [callgraph]
void __fastcall FUN_004453c0(int *param_1)

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
    param_1[0x5a6] = 0;
  }
  else if (param_1[0x187] != 1) goto LAB_00445539;
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
    if (param_1[0x4d6] != 0) {
      FUN_0043fc90(param_1[0x2a2],&local_20,5);
    }
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    sVar1 = FUN_00dde2d0(0,2);
    param_1[0x5ab] = (int)(((float)(int)sVar1 + 1.0) * 60.0);
  }
LAB_00445539:
  iVar2 = FUN_00a8c760(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3db2b8c2,0);
  }
  return;
}

// 00445A70  FUN_00445a70  size=42  [callgraph]
uint FUN_00445a70(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar2 = &DAT_01be9d00;
  (**(code **)(*param_1 + 4))(&DAT_01be9d00);
  iVar1 = FUN_00dd6d80(puVar2);
  return -(uint)(iVar1 != 0) & (uint)param_1;
}

// 00445AA0  FUN_00445aa0  size=42  [callgraph]
uint FUN_00445aa0(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar2 = &DAT_01b34ba8;
  (**(code **)(*param_1 + 4))(&DAT_01b34ba8);
  iVar1 = FUN_00dd6d80(puVar2);
  return -(uint)(iVar1 != 0) & (uint)param_1;
}

// 00445AD0  FUN_00445ad0  size=42  [callgraph]
uint FUN_00445ad0(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar2 = &DAT_01b34c80;
  (**(code **)(*param_1 + 4))(&DAT_01b34c80);
  iVar1 = FUN_00dd6d80(puVar2);
  return -(uint)(iVar1 != 0) & (uint)param_1;
}

// 00445B00  FUN_00445b00  size=42  [callgraph]
uint FUN_00445b00(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar2 = &DAT_01b35810;
  (**(code **)(*param_1 + 4))(&DAT_01b35810);
  iVar1 = FUN_00dd6d80(puVar2);
  return -(uint)(iVar1 != 0) & (uint)param_1;
}

// 00445B30  FUN_00445b30  size=42  [callgraph]
uint FUN_00445b30(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar2 = &DAT_01b355b0;
  (**(code **)(*param_1 + 4))(&DAT_01b355b0);
  iVar1 = FUN_00dd6d80(puVar2);
  return -(uint)(iVar1 != 0) & (uint)param_1;
}

// 00445B60  FUN_00445b60  size=42  [callgraph]
uint FUN_00445b60(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar2 = &DAT_01be9c78;
  (**(code **)(*param_1 + 4))(&DAT_01be9c78);
  iVar1 = FUN_00dd6d80(puVar2);
  return -(uint)(iVar1 != 0) & (uint)param_1;
}

// 00445B90  FUN_00445b90  size=42  [callgraph]
uint FUN_00445b90(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar2 = &DAT_01be9ca0;
  (**(code **)(*param_1 + 4))(&DAT_01be9ca0);
  iVar1 = FUN_00dd6d80(puVar2);
  return -(uint)(iVar1 != 0) & (uint)param_1;
}

// 00445CA0  FUN_00445ca0  size=20  [callgraph]
int FUN_00445ca0(int param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    return *(char *)(param_1 + 0x10) + param_1;
  }
  return 0;
}

// 00445CC0  FUN_00445cc0  size=20  [callgraph]
int FUN_00445cc0(int param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x02') {
    return *(char *)(param_1 + 0x10) + param_1;
  }
  return 0;
}

// 00445D40  FUN_00445d40  size=100  [callgraph]
void __thiscall
FUN_00445d40(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = *param_3;
  param_1[5] = param_3[1];
  param_1[6] = param_3[2];
  param_1[7] = param_3[3];
  param_1[8] = param_4;
  param_1[9] = param_5;
  param_1[10] = param_6;
  param_1[0xb] = param_7;
  param_1[0xc] = param_8;
  param_1[0xd] = param_9;
  return;
}

// 00445DB0  FUN_00445db0  size=112  [callgraph]
int __fastcall FUN_00445db0(int param_1)

{
  FUN_004105d0();
  FUN_00a7c930();
  FUN_00a7c930();
  FUN_00a7c950();
  FUN_00a7c950();
  *(undefined4 *)(param_1 + 0x140) = 0x3c23d70a;
  *(undefined4 *)(param_1 + 300) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x144) = 0xb;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  return param_1;
}

// 004460C0  Em0060::vf150  size=130  [class]
void __thiscall Em0060::vf150(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 != 0) {
    FUN_00a7c950();
    uVar1 = FUN_00a7c7f0();
    FUN_00a7c960(uVar1);
    if (param_2 == 0x41) {
      uVar1 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xdd4) = uVar1;
      *(undefined4 *)(param_1 + 0xdd8) = *(undefined4 *)(param_1 + 0xdd0);
      FUN_00a8caf0(0x50018,0,0,0);
      *(undefined4 *)(param_1 + 0xdd0) = 0;
      FUN_00a962d0(0,0);
      *(undefined4 *)(param_1 + 0x12cc) = 0;
    }
  }
  return;
}

// 00446260  Em0060::vf44  size=255  [class]
void __fastcall Em0060::vf44(int param_1)

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
  piVar3 = (int *)(param_1 + 0x16c0);
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

// 00446360  Em0060::vf50  size=157  [class]
void __fastcall Em0060::vf50(int param_1)

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
  if (*(int *)(param_1 + 0x1a94) != 0) {
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

// 00446400  FUN_00446400  size=211  [between]
void __fastcall FUN_00446400(int param_1)

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
    *(undefined4 *)(param_1 + 0xdd4) = uVar2;
    *(undefined4 *)(param_1 + 0xdd8) = *(undefined4 *)(param_1 + 0xdd0);
    FUN_00a8caf0(0x30001,0,0,0);
    *(undefined4 *)(param_1 + 0xdd0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x12cc) = 0;
  }
  return;
}

// 004464E0  FUN_004464e0  size=759  [between]
void __fastcall FUN_004464e0(int *param_1)

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
      param_1[0x6d7] = param_1[0x379];
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
        param_1[0x375] = iVar2;
        param_1[0x376] = param_1[0x374];
        FUN_00a8caf0(0x10010,0,0,0);
        param_1[0x374] = 0;
        FUN_00a962d0(0,0);
        param_1[0x4b3] = 0;
        param_1[0x6d7] = param_1[0x379];
        return;
      }
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (param_1[0x2a1] != 0) {
      (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3d567750,0);
      param_1[0x6d7] = param_1[0x379];
      return;
    }
    break;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a8c760(0x30);
    if (iVar2 == 0) {
      iVar2 = FUN_00a8c760(0x31);
      if (iVar2 == 0) goto LAB_0044678d;
      uVar3 = 10;
    }
    else {
      uVar3 = 0xb;
    }
    FUN_00aa4080(uVar3,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_0044678d;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_0044678d:
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      param_1[0x6d7] = param_1[0x379];
      return;
    }
    break;
  default:
    break;
  }
  param_1[0x6d7] = param_1[0x379];
  return;
}

// 004467F0  FUN_004467f0  size=256  [between]
void __fastcall FUN_004467f0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x2c,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
    pcVar1 = *(code **)(*param_1 + 0x358);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar1)(200,param_1 + 0x40c);
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
    FUN_004419e0();
    param_1[0x6a2] = param_1[0x6a2] + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x004468ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00446900  FUN_00446900  size=322  [between]
void __fastcall FUN_00446900(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x2c,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
    pcVar1 = *(code **)(*param_1 + 0x358);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar1)(200,param_1 + 0x40c);
    param_1[0x683] = 0;
    param_1[0x682] = 0;
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
    param_1[0x684] = param_1[0x684] + 1;
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00eaa6e0((float)param_1[0x684] * 30.0,0);
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00446a3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00446A60  FUN_00446a60  size=450  [between]
void __fastcall FUN_00446a60(int *param_1)

{
  float fVar1;
  int iVar2;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x2f,0,0x3e888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00eaa6e0(0x42700000,0);
    param_1[0x687] = 0;
    param_1[0x688] = 0;
    param_1[0x684] = 0;
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
                    /* WARNING: Could not recover jumptable at 0x00446c1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00446C40  FUN_00446c40  size=112  [between]
void __fastcall FUN_00446c40(int *param_1)

{
  int iVar1;
  
  if (3 < param_1[0x187]) {
    iVar1 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar1 != 0) {
      iVar1 = FUN_00a8cab0();
      param_1[0x375] = iVar1;
      param_1[0x376] = param_1[0x374];
      FUN_00a8caf0(0x10013,0,0,0);
      param_1[0x374] = 0;
      FUN_00a962d0(0,0);
      param_1[0x4b3] = 0;
    }
  }
  return;
}

// 00446CB0  FUN_00446cb0  size=112  [between]
void __fastcall FUN_00446cb0(int *param_1)

{
  int iVar1;
  
  if (3 < param_1[0x187]) {
    iVar1 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar1 != 0) {
      iVar1 = FUN_00a8cab0();
      param_1[0x375] = iVar1;
      param_1[0x376] = param_1[0x374];
      FUN_00a8caf0(0x10013,0,0,0);
      param_1[0x374] = 0;
      FUN_00a962d0(0,0);
      param_1[0x4b3] = 0;
    }
  }
  return;
}

// 00446D20  FUN_00446d20  size=129  [between]
void __fastcall FUN_00446d20(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x1d4))(1);
  (**(code **)(*param_1 + 0x314))();
  iVar1 = (**(code **)(*param_1 + 800))(0x3d888889);
  if (iVar1 != 0) {
    iVar1 = FUN_00a8cab0();
    param_1[0x375] = iVar1;
    param_1[0x376] = param_1[0x374];
    FUN_00a8caf0(0x10013,0,0,0);
    param_1[0x374] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4b3] = 0;
  }
  return;
}

// 00446DB0  FUN_00446db0  size=156  [between]
void __fastcall FUN_00446db0(int *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00446e4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00446E50  FUN_00446e50  size=468  [between]
void __fastcall FUN_00446e50(int *param_1)

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
    (**(code **)(*param_1 + 0x358))(0xca,param_1 + 0x40c);
    param_1[0x686] = 0;
    param_1[0x69f] = param_1[param_1[0x379] + 0x674];
    param_1[0x687] = 0;
    param_1[0x688] = 0;
    param_1[0x689] = 0;
    param_1[0x68a] = 0;
    param_1[0x68b] = 0;
    param_1[0x68c] = 0;
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
      param_1[0x375] = iVar1;
      param_1[0x376] = param_1[0x374];
      FUN_00a8caf0(0x6000a,0,0,0);
      param_1[0x374] = 0;
      FUN_00a962d0(0,0);
      param_1[0x4b3] = 0;
      return;
    }
  }
  return;
}

// 00447040  FUN_00447040  size=224  [between]
void __fastcall FUN_00447040(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(byte *)(param_1 + 0xdb4) = *(byte *)(param_1 + 0xdb4) | 8;
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar2 = 0x8000000;
    if (*(int *)(param_1 + 0x1b20) != 0) {
      uVar2 = 0x8000040;
    }
    FUN_00aa4080(0x79,0,0x3d088889,0x3f800000,uVar2,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x894) = 0x3da3d70a;
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
  return;
}

// 00447120  FUN_00447120  size=117  [between]
void __fastcall FUN_00447120(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x1d4))(1);
  iVar1 = (**(code **)(*param_1 + 800))(0x3d888889);
  if (iVar1 != 0) {
    iVar1 = FUN_00a8cab0();
    param_1[0x375] = iVar1;
    param_1[0x376] = param_1[0x374];
    FUN_00a8caf0(0x6000e,0,0,0);
    param_1[0x374] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4b3] = 0;
  }
  return;
}

// 004471A0  FUN_004471a0  size=211  [between]
void __fastcall FUN_004471a0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(byte *)(param_1 + 0xdb4) = *(byte *)(param_1 + 0xdb4) | 8;
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar2 = 0x8000000;
    if (*(int *)(param_1 + 0x1b20) != 0) {
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
    if (*(int *)(param_1 + 0x1b28) == 0) {
      uVar2 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xdd4) = uVar2;
      *(undefined4 *)(param_1 + 0xdd8) = *(undefined4 *)(param_1 + 0xdd0);
      uVar2 = 0x60017;
    }
    else {
      uVar2 = 0x80007;
    }
    FUN_00a8caf0(uVar2,0,0,0);
    *(undefined4 *)(param_1 + 0xdd0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x12cc) = 0;
  }
  return;
}

// 00447280  FUN_00447280  size=236  [between]
void __fastcall FUN_00447280(int param_1)

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
    FUN_00a8caf0(0x60017,0,0,0);
    *(undefined4 *)(param_1 + 0xdd0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x12cc) = 0;
  }
  return;
}

// 00447370  FUN_00447370  size=236  [between]
void __fastcall FUN_00447370(int param_1)

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
    FUN_00a8caf0(0x60017,0,0,0);
    *(undefined4 *)(param_1 + 0xdd0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x12cc) = 0;
  }
  return;
}

// 00447460  FUN_00447460  size=224  [between]
void __fastcall FUN_00447460(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(byte *)(param_1 + 0xdb4) = *(byte *)(param_1 + 0xdb4) | 8;
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar2 = 0x8000000;
    if (*(int *)(param_1 + 0x1b20) != 0) {
      uVar2 = 0x8000040;
    }
    FUN_00aa4080(0x7b,0,0x3d088889,0x3f800000,uVar2,0xbf800000,0x3f800000);
    FUN_004445a0();
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
    *(undefined4 *)(param_1 + 0xdd4) = uVar2;
    *(undefined4 *)(param_1 + 0xdd8) = *(undefined4 *)(param_1 + 0xdd0);
    FUN_00a8caf0(0x60012,0,0,0);
    *(undefined4 *)(param_1 + 0xdd0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x12cc) = 0;
  }
  return;
}

// 00447540  FUN_00447540  size=117  [between]
void __fastcall FUN_00447540(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x1d4))(1);
  iVar1 = (**(code **)(*param_1 + 800))(0x3d888889);
  if (iVar1 != 0) {
    iVar1 = FUN_00a8cab0();
    param_1[0x375] = iVar1;
    param_1[0x376] = param_1[0x374];
    FUN_00a8caf0(0x60013,0,0,0);
    param_1[0x374] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4b3] = 0;
  }
  return;
}

// 004475C0  FUN_004475c0  size=211  [between]
void __fastcall FUN_004475c0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(byte *)(param_1 + 0xdb4) = *(byte *)(param_1 + 0xdb4) | 8;
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar2 = 0x8000000;
    if (*(int *)(param_1 + 0x1b20) != 0) {
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
    if (*(int *)(param_1 + 0x1b28) == 0) {
      uVar2 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xdd4) = uVar2;
      *(undefined4 *)(param_1 + 0xdd8) = *(undefined4 *)(param_1 + 0xdd0);
      uVar2 = 0x60017;
    }
    else {
      uVar2 = 0x80007;
    }
    FUN_00a8caf0(uVar2,0,0,0);
    *(undefined4 *)(param_1 + 0xdd0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x12cc) = 0;
  }
  return;
}

// 004476A0  FUN_004476a0  size=212  [between]
void __fastcall FUN_004476a0(int param_1)

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
    *(undefined4 *)(param_1 + 0xdd8) = *(undefined4 *)(param_1 + 0xdd0);
    *(undefined4 *)(param_1 + 0xdd4) = uVar2;
    FUN_00a8caf0(0x60015,0,0,0);
    *(undefined4 *)(param_1 + 0xdd0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x12cc) = 0;
  }
  return;
}

// 00447780  FUN_00447780  size=203  [between]
void __fastcall FUN_00447780(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(byte *)(param_1 + 0xdb4) = *(byte *)(param_1 + 0xdb4) | 8;
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x81,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x1ac4) = 0;
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
    FUN_00a8caf0(0x10000,0,0,0);
    *(undefined4 *)(param_1 + 0xdd0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x12cc) = 0;
  }
  return;
}

// 00447850  FUN_00447850  size=92  [between]
void __fastcall FUN_00447850(int param_1)

{
  undefined4 uVar1;
  
  if (*(float *)(param_1 + 0x1a6c) <= 0.0) {
    uVar1 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xdd4) = uVar1;
    *(undefined4 *)(param_1 + 0xdd8) = *(undefined4 *)(param_1 + 0xdd0);
    FUN_00a8caf0(0x6000a,0,0,0);
    *(undefined4 *)(param_1 + 0xdd0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x12cc) = 0;
  }
  return;
}

// 004478B0  FUN_004478b0  size=110  [between]
void __fastcall FUN_004478b0(int param_1)

{
  *(byte *)(param_1 + 0xdb4) = *(byte *)(param_1 + 0xdb4) | 8;
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x83,0,0x3e2aaaab,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_004445a0();
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00447980  FUN_00447980  size=110  [between]
void __fastcall FUN_00447980(int param_1)

{
  *(byte *)(param_1 + 0xdb4) = *(byte *)(param_1 + 0xdb4) | 8;
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x84,0,0x3e2aaaab,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_004445a0();
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 004479F0  FUN_004479f0  size=183  [between]
void __fastcall FUN_004479f0(int param_1)

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
    *(undefined4 *)(param_1 + 0xdd4) = uVar2;
    *(undefined4 *)(param_1 + 0xdd8) = *(undefined4 *)(param_1 + 0xdd0);
    FUN_00a8caf0(0x10000,0,0,0);
    *(undefined4 *)(param_1 + 0xdd0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x12cc) = 0;
  }
  return;
}

// 00447AB0  FUN_00447ab0  size=1873  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00447ab0(int *param_1)

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
    param_1[0x373] = 1;
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
    param_1[0x249] = _DAT_0188092c;
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
    (*pcVar1)(0,param_1 + 0x3b4);
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar6 = FUN_00a959f0(0);
    iVar9 = FUN_00a957b0(0);
    if ((float)iVar9 - 1.0 < (float)iVar6 != ((float)iVar9 - 1.0 == (float)iVar6)) {
      piVar7 = param_1;
      FUN_00c1cf50(param_1);
      FUN_00c54720(piVar7);
      iVar6 = param_1[0x4d5];
      if (iVar6 != 0) {
        iVar10 = 0;
        iVar9 = 0;
        if (0 < *(short *)(iVar6 + 0x32c)) {
          do {
            *(undefined4 *)(iVar10 + 0x460 + *(int *)(iVar6 + 0x328)) = 2;
            iVar9 = iVar9 + 1;
            iVar10 = iVar10 + 0x560;
          } while (iVar9 < *(short *)(iVar6 + 0x32c));
        }
        *(uint *)(iVar6 + 0x364) = *(uint *)(iVar6 + 0x364) | 0x400000;
      }
      iVar6 = param_1[0x4d6];
      if (iVar6 != 0) {
        iVar10 = 0;
        iVar9 = 0;
        if (0 < *(short *)(iVar6 + 0x32c)) {
          do {
            *(undefined4 *)(iVar10 + 0x460 + *(int *)(iVar6 + 0x328)) = 2;
            iVar9 = iVar9 + 1;
            iVar10 = iVar10 + 0x560;
          } while (iVar9 < *(short *)(iVar6 + 0x32c));
        }
        *(uint *)(iVar6 + 0x364) = *(uint *)(iVar6 + 0x364) | 0x400000;
      }
      iVar6 = param_1[0x4d7];
      if (iVar6 != 0) {
        iVar10 = 0;
        iVar9 = 0;
        if (0 < *(short *)(iVar6 + 0x32c)) {
          do {
            *(undefined4 *)(iVar10 + 0x460 + *(int *)(iVar6 + 0x328)) = 2;
            iVar9 = iVar9 + 1;
            iVar10 = iVar10 + 0x560;
          } while (iVar9 < *(short *)(iVar6 + 0x32c));
        }
        *(uint *)(iVar6 + 0x364) = *(uint *)(iVar6 + 0x364) | 0x400000;
      }
      iVar6 = FUN_00ac89d0();
      if (iVar6 != 0) {
        iVar6 = FUN_00ac89d0();
        iVar9 = 0;
        if (0 < *(short *)(iVar6 + 0x32c)) {
          iVar10 = 0;
          do {
            *(undefined4 *)(iVar9 + 0x460 + *(int *)(iVar6 + 0x328)) = 2;
            iVar10 = iVar10 + 1;
            iVar9 = iVar9 + 0x560;
          } while (iVar10 < *(short *)(iVar6 + 0x32c));
        }
      }
      FUN_00ac8e10(0);
      param_1[0x6d9] = 1;
      param_1[0x36a] = 0;
      param_1[0x36c] = 0;
      iVar6 = FUN_00a81330();
      if (iVar6 != 0) {
        uVar8 = FUN_00a7c8a0();
        iVar6 = FUN_00445a70(uVar8);
        if (iVar6 != 0) {
          FUN_00a88b50(4,0);
        }
      }
      FUN_00a88b50(4,0);
      param_1[0x187] = param_1[0x187] + 1;
switchD_00447ad4_caseD_6:
      FUN_00aa4080(0x95,0,0x3eaaaaab,0x3f800000,0x8000080,0x4092aaab,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      goto switchD_00447ad4_caseD_7;
    }
    break;
  case 6:
    goto switchD_00447ad4_caseD_6;
  case 7:
    goto switchD_00447ad4_caseD_7;
  case 8:
    param_1[0x4db] = param_1[0x4db] ^ 0x8000000;
    FUN_00aa4080(0x34,0,0x3eaaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_008e5c50(0x1f);
    param_1[0x24b] = 0x41200000;
    FUN_00a8d280();
    param_1[0x5a6] = 0;
    FUN_00a8d280();
    goto LAB_00447fb3;
  case 9:
LAB_00447fb3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar6 = FUN_00a94ce0(0);
    if (iVar6 != 0) {
      param_1[0x373] = 0;
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
      param_1[0x249] = _DAT_01880928;
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
  goto switchD_00447ad4_default;
switchD_00447ad4_caseD_7:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar6 = FUN_00a8c760(10);
  if (iVar6 != 0) {
    (**(code **)(*param_1 + 0x358))(0,param_1 + 0x3b4);
  }
  iVar6 = FUN_00a94ce0(0);
  if (iVar6 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
switchD_00447ad4_default:
  (**(code **)(*param_1 + 0x220))(0x40a00000);
  return;
}

// 00448240  Em0060::vf248  size=36  [class]
void __fastcall Em0060::vf248(int param_1)

{
  FUN_00e00900();
  FUN_00e03080(*(undefined4 *)(param_1 + 0x4f0),0);
  return;
}

// 00448270  FUN_00448270  size=103  [between]
void __fastcall FUN_00448270(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_00a7c950();
  uVar1 = FUN_00a7c7f0();
  FUN_00a7c960(uVar1);
  iVar2 = FUN_00a7c8a0();
  if (iVar2 != 0) {
    FUN_00b17110(*(undefined4 *)(param_1 + 0x4f0));
  }
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    iVar2 = FUN_00a7c8a0();
    if (iVar2 != 0) {
      FUN_00b17170();
    }
  }
  return;
}

// 004482E0  Em0060::setEmSetInfo  size=431  [class]
undefined4 __thiscall Em0060::setEmSetInfo(int param_1,undefined4 param_2)

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
  if ((iVar3 != 0) && (*(int *)(iVar3 + 0x24) == 0x20040)) {
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
        iVar3 = FUN_00445a70(piVar5);
        if (iVar3 != 0) {
          FUN_00a88b50(1,0);
        }
      }
    }
  }
  FUN_00aa0920(*(undefined4 *)(param_1 + 0xb0c));
  if (*(int *)(param_1 + 0x7d8) == 0) {
    FUN_00dd5650(&DAT_0163d950);
  }
  if (!bVar8) {
    FUN_00dd5650(&DAT_0163d918);
  }
  *(undefined4 *)(param_1 + 0x1a8c) = 0;
  if (*(int *)(param_1 + 0x618) == 0x10000) {
    iVar3 = FUN_00932720();
    if (iVar3 == 0x220) {
      pbVar7 = (byte *)0x163d90c;
      pbVar6 = DAT_018b925c;
      do {
        bVar1 = *pbVar6;
        bVar8 = bVar1 < *pbVar7;
        if (bVar1 != *pbVar7) {
LAB_00448416:
          iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_0044841b;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar6[1];
        bVar8 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_00448416;
        pbVar6 = pbVar6 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_0044841b:
      if (iVar3 == 0) {
        *(float *)(param_1 + 0x1a8c) = (float)(int)*(short *)(param_1 + 0xab2) * 8.0;
        uVar4 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xdd4) = uVar4;
        *(undefined4 *)(param_1 + 0xdd8) = *(undefined4 *)(param_1 + 0xdd0);
        FUN_00a8caf0(0x10009,0,0,0);
        *(undefined4 *)(param_1 + 0xdd0) = 0;
        FUN_00a962d0(0,0);
        *(undefined4 *)(param_1 + 0x12cc) = 0;
      }
    }
  }
  return 1;
}

// 00448520  FUN_00448520  size=126  [between]
void __fastcall FUN_00448520(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  uVar1 = FUN_00ac8660(0,0x1d);
  *(undefined4 *)(param_1 + 0x18d4) = uVar1;
  uVar1 = FUN_00ac8660(0,0x1e);
  *(undefined4 *)(param_1 + 0x18d8) = uVar1;
  uVar1 = FUN_00ac8660(0,0x1f);
  *(undefined4 *)(param_1 + 0x18dc) = uVar1;
  uVar1 = FUN_00ac8660(0,0x20);
  *(undefined4 *)(param_1 + 0x18e0) = uVar1;
  if (*(int *)(param_1 + 0x4a0) == 1) {
    FUN_00ac85c0(5,0x8c);
    puVar2 = (undefined4 *)(param_1 + 0x18d4);
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

// 004485F0  FUN_004485f0  size=74  [between]
void __fastcall FUN_004485f0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00441cd0();
  if ((iVar1 != 0) && (*(int *)(param_1 + 0xde4) == 0)) {
    iVar1 = FUN_00a8cbe0(0x1000a);
    if ((iVar1 == 0) && (0 < *(int *)(param_1 + 0x18ec))) {
      *(undefined4 *)(param_1 + 0x18e8) = 1;
      *(int *)(param_1 + 0x18ec) = *(int *)(param_1 + 0x18ec) + -1;
      FUN_00441940();
      return;
    }
  }
  return;
}

// 00448640  FUN_00448640  size=551  [between]
undefined4 __fastcall FUN_00448640(uint param_1)

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
    *(undefined4 *)(param_1 + 0xdd4) = uVar2;
    *(undefined4 *)(param_1 + 0xdd8) = *(undefined4 *)(param_1 + 0xdd0);
  }
  FUN_00a8caf0((int)sVar1 + 0x1000dU,0,0,0);
  *(undefined4 *)(param_1 + 0xdd0) = 0;
  FUN_00a962d0(0,0);
  *(undefined4 *)(param_1 + 0x12cc) = 0;
  if (*(int *)(param_1 + 0x4a0) == 1) {
    if (*(float *)(param_1 + 0xa90) <= 16.0) {
      uVar2 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xdd4) = uVar2;
      *(undefined4 *)(param_1 + 0xdd8) = *(undefined4 *)(param_1 + 0xdd0);
      FUN_00a8caf0(0x1000f,0,0,0);
      *(undefined4 *)(param_1 + 0xdd0) = 0;
      FUN_00a962d0(0,0);
      *(undefined4 *)(param_1 + 0x12cc) = 0;
    }
    if ((*(float *)(param_1 + 0xa90) <= 49.0) && (sVar1 = FUN_00dde2d0(0,1), sVar1 != 0)) {
      uVar2 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xdd4) = uVar2;
      *(undefined4 *)(param_1 + 0xdd8) = *(undefined4 *)(param_1 + 0xdd0);
      FUN_00a8caf0(0x1000f,0,0,0);
      *(undefined4 *)(param_1 + 0xdd0) = 0;
      FUN_00a962d0(0,0);
      *(undefined4 *)(param_1 + 0x12cc) = 0;
    }
  }
  iVar3 = *(int *)(param_1 + 0x618);
  if ((((iVar3 != 0x1000d) || (*(int *)(param_1 + 0x1aac) != 1)) &&
      ((iVar3 != 0x1000e || (*(int *)(param_1 + 0x1ab0) != 1)))) &&
     ((iVar3 != 0x1000f || (*(int *)(param_1 + 0x1aa8) != 1)))) {
    iVar3 = FUN_00441b70(&local_4);
    uVar4 = local_4;
    if (iVar3 == 0) {
      if (*(int *)(param_1 + 0x1aa4) == 0) {
        if (*(float *)(param_1 + 0xa90) <= 9.0) {
          return 1;
        }
        uVar2 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xdd8) = *(undefined4 *)(param_1 + 0xdd0);
        uVar4 = 0x10010;
      }
      else {
        uVar2 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xdd8) = *(undefined4 *)(param_1 + 0xdd0);
        uVar4 = 0x10003;
      }
      *(undefined4 *)(param_1 + 0xdd4) = uVar2;
    }
    else if ((local_4 & 0xffff0000) != 0x80000) {
      uVar2 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xdd4) = uVar2;
      *(undefined4 *)(param_1 + 0xdd8) = *(undefined4 *)(param_1 + 0xdd0);
    }
    FUN_00a8caf0(uVar4,0,0,0);
    *(undefined4 *)(param_1 + 0xdd0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x12cc) = 0;
  }
  return 1;
}

// 00448870  FUN_00448870  size=108  [between]
void __thiscall FUN_00448870(int param_1,undefined4 param_2)

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
  FUN_0090fa30(param_1 + 0x1ac0,0,&local_20,0x3f000000,param_2,iVar1 << 0x10 | 7,"Em0060");
  return;
}

// 004488E0  FUN_004488e0  size=268  [between]
/* WARNING: Removing unreachable block (ram,0x00448951) */

undefined4 __fastcall FUN_004488e0(int param_1)

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
  iVar1 = FUN_00907640(param_1 + 0x1ac0,&local_24,local_20);
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

// 004489F0  FUN_004489f0  size=129  [between]
void __fastcall FUN_004489f0(int param_1)

{
  undefined4 uVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if (0x7fffffff < *(uint *)(param_1 + 0x1ba0)) {
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    uVar1 = FUN_0093c1f0((int)*(char *)(param_1 + 0xbab),*(undefined4 *)(param_1 + 0x4f0),4,0,
                         &local_20,&local_30,0x41200000,0x3f000000,0xbf800000);
    *(undefined4 *)(param_1 + 0x1ba0) = uVar1;
  }
  return;
}

// 00448A80  FUN_00448a80  size=88  [between]
undefined4 __fastcall FUN_00448a80(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = 0;
  local_4 = 0;
  if (*(int *)(param_1 + 0x1ac4) == 0) {
    iVar2 = FUN_00ac8120();
    if (iVar2 == 0) {
      return local_8;
    }
    uVar1 = 0;
  }
  else {
    iVar2 = FUN_00ac8120();
    if (iVar2 == 0) {
      return local_8;
    }
    uVar1 = 0x40a00000;
  }
  FUN_00bc3c20(param_1 + 0x40,&local_8,&local_4,uVar1);
  return local_8;
}

// 00448AE0  FUN_00448ae0  size=312  [between]
undefined4 __fastcall FUN_00448ae0(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cbe0(0x8002b);
  if ((((((iVar1 == 0) && (iVar1 = FUN_00a8cbe0(0x8002d), iVar1 == 0)) &&
        (iVar1 = FUN_00a8cbe0(0x8002c), iVar1 == 0)) &&
       ((param_1[0x6c9] != 0 && (param_1[0x6ca] == 0)))) &&
      ((iVar1 = FUN_00a8cbe0(0x80000), iVar1 == 0 &&
       ((iVar1 = FUN_00a8cbe0(0x8000d), iVar1 == 0 && (iVar1 = FUN_00a8cbe0(0x50018), iVar1 == 0))))
      )) && (iVar1 = FUN_00a8cbe0(0x80029), iVar1 == 0)) {
    iVar1 = FUN_00448a80();
    if (iVar1 == 0) {
      if (param_1[0x6b1] == 0) {
        return 0;
      }
    }
    else if (param_1[0x6b1] == 0) {
      (**(code **)(*param_1 + 0x314))();
      param_1[0x373] = 0;
      param_1[0x6b1] = 1;
      iVar1 = FUN_00a8cab0();
      param_1[0x375] = iVar1;
      param_1[0x376] = param_1[0x374];
      FUN_00a8caf0(0x60014,0,0,0);
      param_1[0x374] = 0;
      FUN_00a962d0(0,0);
      param_1[0x4b3] = 0;
      return 1;
    }
    iVar1 = FUN_00448a80();
    if (iVar1 == 0) {
      param_1[0x6b1] = 0;
    }
  }
  return 0;
}

// 00448C20  FUN_00448c20  size=183  [between]
void __fastcall FUN_00448c20(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_34;
  
  if (*(int *)(param_1 + 0xb48) == 0) {
    iVar5 = FUN_00a12210(0);
    uVar1 = *(undefined4 *)(iVar5 + 0x40);
    uVar2 = *(undefined4 *)(iVar5 + 0x44);
    uVar3 = *(undefined4 *)(iVar5 + 0x48);
    uVar4 = *(undefined4 *)(iVar5 + 0x4c);
    FUN_009dbcf0();
    FUN_009d18a0(0x20060);
    local_40 = 0;
    local_34 = 0x400;
    local_50 = 0;
    local_4c = 0x3f800000;
    local_48 = 0;
    local_60 = uVar1;
    local_5c = uVar2;
    local_58 = uVar3;
    local_54 = uVar4;
    local_44 = uVar4;
    EffectAttrSystem::RequestCall(&local_60);
    *(undefined4 *)(param_1 + 0xb48) = 1;
  }
  return;
}

// 00448CE0  FUN_00448ce0  size=191  [between]
void __fastcall FUN_00448ce0(int param_1)

{
  FUN_00a82790(*(undefined4 *)(param_1 + 0x4f0),0,0);
  *(uint *)(param_1 + 0xa10) = *(uint *)(param_1 + 0xa10) | 2;
  FUN_00a82870(0x3f32b8c2,0xbf32b8c2,0x3e99999a,0x3ae4c388,0x3e0efa35);
  FUN_00a82840(0x3eb2b8c2,0xbeb2b8c2,0x3e99999a,0x3ae4c388,0x3e0efa35);
  *(undefined4 *)(param_1 + 0xb04) = 0x40000000;
  *(undefined4 *)(param_1 + 0xaf8) = 5;
  *(undefined4 *)(param_1 + 0xafc) = 5;
  return;
}

// 00448DA0  FUN_00448da0  size=191  [between]
void __fastcall FUN_00448da0(int param_1)

{
  FUN_00a82790(*(undefined4 *)(param_1 + 0x4f0),0,0);
  *(uint *)(param_1 + 0xa10) = *(uint *)(param_1 + 0xa10) | 2;
  FUN_00a82870(0x3f32b8c2,0xbf32b8c2,0x3e99999a,0x3ae4c388,0x3e0efa35);
  FUN_00a82840(0x3eb2b8c2,0xbeb2b8c2,0x3e99999a,0x3ae4c388,0x3e0efa35);
  *(undefined4 *)(param_1 + 0xb04) = 0x42f00000;
  *(undefined4 *)(param_1 + 0xaf8) = 4;
  *(undefined4 *)(param_1 + 0xafc) = 4;
  return;
}

// 00448E60  FUN_00448e60  size=226  [between]
void __thiscall FUN_00448e60(int param_1,undefined4 param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = 0;
  iVar7 = 0;
  *(undefined4 *)(param_1 + 0xb3c) = param_2;
  *(undefined4 *)(param_1 + 0xb40) = 0;
  if (0 < *(short *)(param_1 + 0x324)) {
    do {
      iVar2 = *(int *)(param_1 + 800);
      iVar3 = *(int *)(*(int *)(iVar2 + 0x60 + iVar6) + 0x40);
      if ((iVar3 != 0) && (iVar3 = FUN_00fdbbd0(iVar3,&DAT_0163d9a8), iVar3 != 0)) {
        puVar1 = (uint *)(iVar2 + 0x38 + iVar6);
        *puVar1 = *puVar1 & 0xfffffffe;
      }
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 0x70;
    } while (iVar7 < *(short *)(param_1 + 0x324));
  }
  FUN_00410540(8,&DAT_01b7bd48);
  lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>_2(1);
  uVar4 = FUN_00a8d2a0();
  puVar5 = (undefined4 *)FUN_009f8b60();
  iVar6 = CollisionSphere::CollisionSphere(2,*puVar5,0);
  if (iVar6 != 0) {
    *(undefined4 *)(iVar6 + 0x380) = 3;
    FUN_00d77c50(*(undefined4 *)(param_1 + 0x4f0),0);
    *(undefined4 *)(iVar6 + 0x510) = 0x3f19999a;
    FUN_00a93a00(iVar6,uVar4);
    FUN_00d7b0f0();
    FUN_00d7b890();
  }
  return;
}

// 00448F50  FUN_00448f50  size=249  [between]
int __thiscall FUN_00448f50(int param_1,int param_2)

{
  FUN_0043e160(param_2);
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x100);
  *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_2 + 0x104);
  *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_2 + 0x108);
  *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_2 + 0x10c);
  *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_2 + 0x110);
  *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(param_2 + 0x114);
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_2 + 0x118);
  *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_2 + 0x11c);
  FUN_00a7c960(param_2 + 0x120);
  FUN_00a7c960(param_2 + 0x124);
  *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_2 + 0x128);
  *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_2 + 300);
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_2 + 0x130);
  *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_2 + 0x134);
  *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_2 + 0x138);
  *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_2 + 0x13c);
  *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_2 + 0x140);
  *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_2 + 0x144);
  return param_1;
}

// 004490A0  FUN_004490a0  size=97  [between]
void __fastcall FUN_004490a0(int param_1)

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
  *(undefined4 *)(param_1 + 0x12d0) = 0x44160000;
  return;
}

// 00449170  FUN_00449170  size=200  [between]
undefined4 __fastcall FUN_00449170(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
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
          uVar2 = 0x2a;
          iVar1 = FUN_00ac4d60(2);
          if (iVar1 != 0) {
            uVar2 = 2;
          }
          uStack_20 = 0;
          uStack_1c = 0;
          uStack_18 = 0;
          FUN_00c593a0(param_1[0x13c],0xffffffff,&uStack_20,0x40800000,0x3fc00000,uVar2,8);
          return 1;
        }
      }
    }
  }
  return 0;
}

// 00449240  FUN_00449240  size=958  [between]
void __fastcall FUN_00449240(int param_1)

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
    puVar7 = &DAT_01b34c80;
    (**(code **)(*piVar3 + 4))(&DAT_01b34c80);
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
    FUN_00a7c960(param_1 + 0x1430);
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
    FUN_00b03020(0);
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
      FUN_00b03020(1);
      FUN_00b1b700(1,0);
      FUN_00b182c0();
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

// 00449620  FUN_00449620  size=165  [between]
void __fastcall FUN_00449620(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar3 = &DAT_01b34c80;
    (**(code **)(*piVar2 + 4))(&DAT_01b34c80);
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
                    /* WARNING: Could not recover jumptable at 0x004496c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 004496D0  FUN_004496d0  size=1035  [between]
void __fastcall FUN_004496d0(int *param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  float10 fVar5;
  undefined *puVar6;
  undefined4 uVar7;
  
  iVar2 = FUN_00a81330();
  if ((iVar2 == 0) || (piVar3 = (int *)FUN_00a7c8a0(), piVar3 == (int *)0x0)) {
LAB_0044970d:
    if (param_1[0x1d9] != 0) {
      FUN_008e6d00();
    }
    FUN_00dc1270(0x41700000,0);
    FUN_00a7c950();
    FUN_00ba6810(1,1);
    (**(code **)(*param_1 + 0x388))(0);
    return;
  }
  puVar6 = &DAT_01b34c80;
  (**(code **)(*piVar3 + 4))(&DAT_01b34c80);
  iVar4 = FUN_00dd6d80(puVar6);
  if (iVar4 == 0) goto LAB_0044970d;
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4520(0xd1,iVar2,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00db3e80(0,0,&DAT_01bea1d0);
    param_1[0x2dd] = 0;
    piVar3 = (int *)FUN_00c1b9a0();
    (**(code **)(*piVar3 + 100))();
    if (param_1[0x1d9] != 0) {
      FUN_008e3c10();
    }
    FUN_00b94790(0x3f800000,0x3f800000);
    FUN_00b80920(iVar2,0x3f333333,0x3f000000,0x3f800000,1);
    return;
  case 1:
  case 3:
    break;
  case 2:
    FUN_00aa4520(0xd2,iVar2,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 4:
    FUN_00aa4520(0xd3,iVar2,0,0,0x3f800000,0x9000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x250] = 0;
    uVar7 = FUN_00a95df0(0);
    FUN_00b7df20(0x4d4,uVar7);
    goto LAB_004498ff;
  case 5:
LAB_004498ff:
    FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e22f10(0);
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      FUN_00dc1270(0x41700000,0);
      if (param_1[0x1d9] != 0) {
        FUN_008e6d00();
        FUN_008e4580(param_1 + 0x10,1);
      }
      FUN_00a7c950();
      FUN_00ba6810(1,1);
      FUN_00a8caf0(0xb,0,0,0);
    }
    iVar4 = FUN_00a8c760(0x20);
    if ((iVar4 != 0) && (param_1[0x250] == 0)) {
      param_1[0x1029] = param_1[0x102a];
      param_1[0x250] = 1;
      FUN_00b89db0(1,0x3dcccccd);
    }
    uVar7 = 0;
    if ((float)param_1[0x1029] <= 0.0) {
      param_1[0x1029] = -0x40800000;
    }
    else {
      uVar7 = 0x40a00000;
    }
    FUN_00b7ab30(uVar7);
    if ((float)param_1[0xd09] <= (float)param_1[0x1028]) {
      fVar1 = (float)param_1[0x1029] - 1.0;
      param_1[0x1029] = (int)fVar1;
      if (((fVar1 < (float)param_1[0x102a] - (float)param_1[0x102b]) &&
          ((float)param_1[0x102a] - (float)param_1[0x102c] < fVar1)) &&
         ((param_1[0x33e] & param_1[0x394]) != 0)) {
        uVar7 = 0;
        FUN_00a92f90(0);
        fVar5 = (float10)FUN_00407b40(uVar7);
        param_1[0x24f] = (int)(float)fVar5;
        FUN_00b89c20(0xb,0,0x1a,iVar2,0x43340000,0x41f00000,0x41f00000,0);
        DAT_01dc08d4 = 0;
        DAT_01dc08d8 = 1;
        param_1[0x1029] = -0x40800000;
        return;
      }
    }
  default:
    goto switchD_0044976a_default;
  }
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e22f10(0);
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
switchD_0044976a_default:
  return;
}

// 00449B00  Em0060::vf258  size=140  [class]
void __thiscall Em0060::vf258(int param_1,int param_2,undefined4 param_3,int param_4)

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
      *(int **)(param_1 + 0x1354 + param_2 * 4) = piVar2;
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x1354 + param_2 * 4) = 0;
  return;
}

// 00449B90  Em0060::vf260  size=94  [class]
void __thiscall Em0060::vf260(int param_1,int param_2,int param_3)

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
    *(undefined4 *)(param_1 + 0x1354 + param_2 * 4) = 0;
  }
  return;
}

// 00449BF0  FUN_00449bf0  size=347  [between]
undefined4 FUN_00449bf0(float *param_1,int param_2)

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
    if (*param_1 != 0.0) goto LAB_00449cac;
  }
  if ((param_1[1] == 0.0) && (param_1[2] == 0.0)) {
    return 0;
  }
LAB_00449cac:
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

// 00449D50  FUN_00449d50  size=737  [between]
void __fastcall FUN_00449d50(int *param_1)

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
    if (param_1[0x6c8] != 0) {
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
    if (param_1[0x6c8] != 0) {
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
        if (param_1[0x4d5] != 0) {
          FUN_0043fc90(param_1[0x2a2],&fStack_20,0);
        }
      }
      FUN_00aa4080(0x44,2,0,0x3f800000,0x8000210,0,0x3f800000);
      param_1[0x249] = (int)((float)param_1[0x249] + 10.0);
    }
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      FUN_00a8caf0(0x8000a,0,0,0);
      param_1[0x374] = 0;
      FUN_00a962d0(0,0);
      param_1[0x4b3] = 0;
      sVar2 = FUN_00dde2d0(0,2);
      param_1[0x6d2] = (int)(((float)(int)sVar2 + 1.0) * 60.0);
    }
  }
  iVar4 = FUN_00a8c760(0);
  if (iVar4 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3ca3d70a,0x393702d3,0x3e0efa35,0);
  }
  return;
}

// 0044A050  FUN_0044a050  size=825  [between]
void __fastcall FUN_0044a050(int *param_1)

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
      FUN_00a8caf0(0x8000c,0,0,0);
      param_1[0x374] = 0;
      FUN_00a962d0(0,0);
      param_1[0x4b3] = 0;
      sVar2 = FUN_00dde2d0(0,2);
      param_1[0x6d2] = (int)(((float)(int)sVar2 + 1.0) * 30.0);
      return;
    }
    uVar3 = 0x8000000;
    if (param_1[0x6c8] != 0) {
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
    goto switchD_0044a06d_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar1 = (float)param_1[0x248];
  param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
  if (((fVar1 - (float)param_1[0x244] < 0.0) && (iVar4 = FUN_00a8c760(8), iVar4 != 0)) &&
     (param_1[0x6d0] == 0)) {
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
      if (param_1[0x4d5] != 0) {
        FUN_0043fc90(param_1[0x2a2],&fStack_20,0);
      }
    }
    FUN_00aa4080(0x44,2,0,0x3f800000,0x8000210,0,0x3f800000);
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 + 10.0);
    if (*(int *)(param_1[0x4d5] + 0x4a0) == 1) {
      param_1[0x248] = (int)(fVar1 + 10.0 + 20.0);
    }
  }
  iVar4 = FUN_00a94ce0(0);
  if (iVar4 != 0) {
    FUN_00a8caf0(0x80006,0,0,0);
    param_1[0x374] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4b3] = 0;
    sVar2 = FUN_00dde2d0(0,2);
    param_1[0x6d2] = (int)(((float)(int)sVar2 + 1.0) * 60.0);
    return;
  }
switchD_0044a06d_default:
  return;
}

// 0044A3A0  FUN_0044a3a0  size=212  [between]
void __fastcall FUN_0044a3a0(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1[0x187] == 0) {
    uVar2 = 0x8000000;
    if (param_1[0x6c8] != 0) {
      uVar2 = 0x8000040;
    }
    param_1[0x187] = 1;
    FUN_00aa4080(0xad,0,0x3d088889,0x3f800000,uVar2,param_1[0x6cd],0x3f800000);
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
    FUN_00a8caf0(0x80029,0,0,0);
    param_1[0x374] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4b3] = 0;
  }
  return;
}

// 0044A480  FUN_0044a480  size=212  [between]
void __fastcall FUN_0044a480(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1[0x187] == 0) {
    uVar2 = 0x8000000;
    if (param_1[0x6c8] != 0) {
      uVar2 = 0x8000040;
    }
    param_1[0x187] = 1;
    FUN_00aa4080(0xb5,0,0x3d088889,0x3f800000,uVar2,param_1[0x6cd],0x3f800000);
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
    FUN_00a8caf0(0x80029,0,0,0);
    param_1[0x374] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4b3] = 0;
  }
  return;
}

// 0044A560  FUN_0044a560  size=212  [between]
void __fastcall FUN_0044a560(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1[0x187] == 0) {
    uVar2 = 0x8000000;
    if (param_1[0x6c8] != 0) {
      uVar2 = 0x8000040;
    }
    param_1[0x187] = 1;
    FUN_00aa4080(0xb6,0,0x3d088889,0x3f800000,uVar2,param_1[0x6cd],0x3f800000);
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
    FUN_00a8caf0(0x80029,0,0,0);
    param_1[0x374] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4b3] = 0;
  }
  return;
}

// 0044A640  FUN_0044a640  size=212  [between]
void __fastcall FUN_0044a640(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1[0x187] == 0) {
    uVar2 = 0x8000000;
    if (param_1[0x6c8] != 0) {
      uVar2 = 0x8000040;
    }
    param_1[0x187] = 1;
    FUN_00aa4080(0xb7,0,0x3d088889,0x3f800000,uVar2,param_1[0x6cd],0x3f800000);
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
    FUN_00a8caf0(0x80029,0,0,0);
    param_1[0x374] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4b3] = 0;
  }
  return;
}

// 0044A720  FUN_0044a720  size=235  [between]
void __fastcall FUN_0044a720(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1[0x187] == 0) {
    uVar2 = 0x8000000;
    if (param_1[0x6c8] != 0) {
      uVar2 = 0x8000040;
    }
    param_1[0x187] = 1;
    FUN_00aa4080(0xb8,0,0x3d088889,0x3f800000,uVar2,param_1[0x6cd],0x3f800000);
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
    FUN_00a8caf0(0x80029,0,0,0);
    param_1[0x374] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4b3] = 0;
  }
  iVar3 = FUN_00a8c760(0x37);
  if (iVar3 != 0) {
    param_1[0x6c8] = 1;
  }
  return;
}

// 0044A810  FUN_0044a810  size=212  [between]
void __fastcall FUN_0044a810(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1[0x187] == 0) {
    uVar2 = 0x8000000;
    if (param_1[0x6c8] != 0) {
      uVar2 = 0x8000040;
    }
    param_1[0x187] = 1;
    FUN_00aa4080(0xb9,0,0x3d088889,0x3f800000,uVar2,param_1[0x6cd],0x3f800000);
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
    FUN_00a8caf0(0x80029,0,0,0);
    param_1[0x374] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4b3] = 0;
  }
  return;
}

// 0044A8F0  FUN_0044a8f0  size=235  [between]
void __fastcall FUN_0044a8f0(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1[0x187] == 0) {
    uVar2 = 0x8000000;
    if (param_1[0x6c8] != 0) {
      uVar2 = 0x8000040;
    }
    param_1[0x187] = 1;
    FUN_00aa4080(0xba,0,0x3d088889,0x3f800000,uVar2,param_1[0x6cd],0x3f800000);
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
    FUN_00a8caf0(0x80029,0,0,0);
    param_1[0x374] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4b3] = 0;
  }
  iVar3 = FUN_00a8c760(0x37);
  if (iVar3 != 0) {
    param_1[0x6c8] = 1;
  }
  return;
}

// 0044A9E0  FUN_0044a9e0  size=212  [between]
void __fastcall FUN_0044a9e0(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1[0x187] == 0) {
    uVar2 = 0x8000000;
    if (param_1[0x6c8] != 0) {
      uVar2 = 0x8000040;
    }
    param_1[0x187] = 1;
    FUN_00aa4080(0xbc,0,0x3d088889,0x3f800000,uVar2,param_1[0x6cd],0x3f800000);
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
    FUN_00a8caf0(0x80029,0,0,0);
    param_1[0x374] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4b3] = 0;
  }
  return;
}

// 0044AAC0  FUN_0044aac0  size=212  [between]
void __fastcall FUN_0044aac0(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1[0x187] == 0) {
    uVar2 = 0x8000000;
    if (param_1[0x6c8] != 0) {
      uVar2 = 0x8000040;
    }
    param_1[0x187] = 1;
    FUN_00aa4080(0xbd,0,0x3d088889,0x3f800000,uVar2,param_1[0x6cd],0x3f800000);
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
    FUN_00a8caf0(0x80029,0,0,0);
    param_1[0x374] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4b3] = 0;
  }
  return;
}

// 0044ABA0  FUN_0044aba0  size=212  [between]
void __fastcall FUN_0044aba0(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1[0x187] == 0) {
    uVar2 = 0x8000000;
    if (param_1[0x6c8] != 0) {
      uVar2 = 0x8000040;
    }
    param_1[0x187] = 1;
    FUN_00aa4080(0xbe,0,0x3d088889,0x3f800000,uVar2,param_1[0x6cd],0x3f800000);
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
    FUN_00a8caf0(0x80029,0,0,0);
    param_1[0x374] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4b3] = 0;
  }
  return;
}

// 0044AC80  FUN_0044ac80  size=212  [between]
void __fastcall FUN_0044ac80(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1[0x187] == 0) {
    uVar2 = 0x8000000;
    if (param_1[0x6c8] != 0) {
      uVar2 = 0x8000040;
    }
    param_1[0x187] = 1;
    FUN_00aa4080(0xbf,0,0x3d088889,0x3f800000,uVar2,param_1[0x6cd],0x3f800000);
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
    FUN_00a8caf0(0x80029,0,0,0);
    param_1[0x374] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4b3] = 0;
  }
  return;
}

// 0044AD60  FUN_0044ad60  size=212  [between]
void __fastcall FUN_0044ad60(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1[0x187] == 0) {
    uVar2 = 0x8000000;
    if (param_1[0x6c8] != 0) {
      uVar2 = 0x8000040;
    }
    param_1[0x187] = 1;
    FUN_00aa4080(0xc0,0,0x3d088889,0x3f800000,uVar2,param_1[0x6cd],0x3f800000);
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
    FUN_00a8caf0(0x80029,0,0,0);
    param_1[0x374] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4b3] = 0;
  }
  return;
}

// 0044AE40  FUN_0044ae40  size=212  [between]
void __fastcall FUN_0044ae40(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1[0x187] == 0) {
    uVar2 = 0x8000000;
    if (param_1[0x6c8] != 0) {
      uVar2 = 0x8000040;
    }
    param_1[0x187] = 1;
    FUN_00aa4080(0xc1,0,0x3d088889,0x3f800000,uVar2,param_1[0x6cd],0x3f800000);
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
    FUN_00a8caf0(0x80029,0,0,0);
    param_1[0x374] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4b3] = 0;
  }
  return;
}

// 0044AF20  FUN_0044af20  size=212  [between]
void __fastcall FUN_0044af20(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1[0x187] == 0) {
    uVar2 = 0x8000000;
    if (param_1[0x6c8] != 0) {
      uVar2 = 0x8000040;
    }
    param_1[0x187] = 1;
    FUN_00aa4080(0xc3,0,0x3d088889,0x3f800000,uVar2,param_1[0x6cd],0x3f800000);
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
    FUN_00a8caf0(0x80029,0,0,0);
    param_1[0x374] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4b3] = 0;
  }
  return;
}

// 0044B000  FUN_0044b000  size=212  [between]
void __fastcall FUN_0044b000(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1[0x187] == 0) {
    uVar2 = 0x8000000;
    if (param_1[0x6c8] != 0) {
      uVar2 = 0x8000040;
    }
    param_1[0x187] = 1;
    FUN_00aa4080(0xc4,0,0x3d088889,0x3f800000,uVar2,param_1[0x6cd],0x3f800000);
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
    FUN_00a8caf0(0x80029,0,0,0);
    param_1[0x374] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4b3] = 0;
  }
  return;
}

// 0044B0E0  FUN_0044b0e0  size=212  [between]
void __fastcall FUN_0044b0e0(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1[0x187] == 0) {
    uVar2 = 0x8000000;
    if (param_1[0x6c8] != 0) {
      uVar2 = 0x8000040;
    }
    param_1[0x187] = 1;
    FUN_00aa4080(0xc5,0,0x3d088889,0x3f800000,uVar2,param_1[0x6cd],0x3f800000);
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
    FUN_00a8caf0(0x80029,0,0,0);
    param_1[0x374] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4b3] = 0;
  }
  return;
}

// 0044B1C0  FUN_0044b1c0  size=212  [between]
void __fastcall FUN_0044b1c0(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1[0x187] == 0) {
    uVar2 = 0x8000000;
    if (param_1[0x6c8] != 0) {
      uVar2 = 0x8000040;
    }
    param_1[0x187] = 1;
    FUN_00aa4080(0xc6,0,0x3d088889,0x3f800000,uVar2,param_1[0x6cd],0x3f800000);
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
    FUN_00a8caf0(0x80029,0,0,0);
    param_1[0x374] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4b3] = 0;
  }
  return;
}

// 0044B2A0  FUN_0044b2a0  size=503  [between]
void __fastcall FUN_0044b2a0(int *param_1)

{
  float fVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  
  switch(param_1[0x187]) {
  case 0:
    uVar3 = 0x8000000;
    if (param_1[0x6c8] != 0) {
      uVar3 = 0x8000040;
    }
    param_1[0x187] = 1;
    FUN_00aa4080(0xa6,0,0x3d088889,0x3f800000,uVar3,0xbf800000,0x3f800000);
    param_1[0x36a] = -1;
    param_1[0x36c] = -1;
    pcVar2 = *(code **)(*param_1 + 0x344);
    param_1[0x6ca] = 1;
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
    if (param_1[0x6c8] != 0) {
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
    if (param_1[0x6c8] != 0) {
      uVar3 = 0x8000040;
    }
    param_1[0x187] = 5;
    FUN_00aa4080(0xad,0,0x3d088889,0x3f800000,uVar3,0xbf800000,0x3f800000);
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      FUN_00a8caf0(0x80029,0,0,0);
      param_1[0x374] = 0;
      FUN_00a962d0(0,0);
      param_1[0x4b3] = 0;
      return;
    }
  }
  return;
}

// 0044B4B0  FUN_0044b4b0  size=67  [between]
void __fastcall FUN_0044b4b0(int param_1)

{
  if (*(float *)(param_1 + 0x1a6c) <= 0.0) {
    FUN_00a8caf0(0x80006,0,0,0);
    *(undefined4 *)(param_1 + 0xdd0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x12cc) = 0;
  }
  return;
}

// 0044B500  FUN_0044b500  size=117  [between]
void __fastcall FUN_0044b500(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar1 = 0;
    if (*(int *)(param_1 + 0x1b20) != 0) {
      uVar1 = 0x40;
    }
    FUN_00aa4080(0x84,0,0x3d088889,0x3f800000,uVar1,0xbf800000,0x3f800000);
    FUN_004445a0();
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0044B580  FUN_0044b580  size=567  [between]
void __fastcall FUN_0044b580(int *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  float10 fVar2;
  undefined4 uVar3;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00b08d00();
    FUN_00aa9280(0x2d);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x455] = 0x3f19999a;
    FUN_00a92f90();
    iVar1 = FUN_00e26e90();
    if (iVar1 == 0) {
      fVar2 = (float10)-1.0;
    }
    else {
      fVar2 = (float10)FUN_00e36a50(0);
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x1f8);
    param_1[0x451] =
         (int)(float)((float10)(float)param_1[0x22a] * (float10)0.6 * fVar2 * (float10)60.0 *
                     (float10)0.9);
    (*UNRECOVERED_JUMPTABLE)(1);
    FUN_00b03020(0);
    FUN_00aa92c0(0x22);
    param_1[0x5aa] = 1;
    if (param_1[0x1d9] != 0) {
      FUN_008e6d00();
    }
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x455] = 0x3f99999a;
      param_1[0x449] = param_1[0x449] & 0xffffffdf;
      uVar3 = 0x2e;
LAB_0044b697:
      FUN_00aa4120(uVar3,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
    }
LAB_0044b6a4:
    FUN_00b02df0();
    return;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x225] = param_1[0x451];
    iVar1 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar1 == 0) goto LAB_0044b6a4;
    FUN_00b03020(1);
    uVar3 = 0x2f;
    goto LAB_0044b697;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_00aa4120(0x2c,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_00a8c9b0(0,0x22,0x3f800000,0);
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x34c);
      param_1[0x5aa] = 0;
                    /* WARNING: Could not recover jumptable at 0x0044b7b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}

// 0044B7D0  FUN_0044b7d0  size=195  [between]
undefined4 __fastcall FUN_0044b7d0(undefined4 *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_10 [4];
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x20);
  if (param_1[0x26] != 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  iVar2 = FUN_00a7c8a0();
  if (iVar2 != 0) {
    FUN_00a7c930();
    uVar3 = FUN_00a7c7f0();
    FUN_00a7c960(uVar3);
    local_c = *(undefined4 *)(iVar2 + 0x51c);
    local_8 = 2;
    local_4 = 2;
    cVar1 = (**(code **)(*(int *)param_1[0x1e] + 8))(local_10);
    if (cVar1 != '\0') {
      param_1[0xc] = 0;
      *param_1 = 0;
      if (param_1[0x26] != 0) {
        LeaveCriticalSection(lpCriticalSection);
      }
      return 1;
    }
  }
  FUN_00dd5650("Em0060Team::entry() error.");
  if (param_1[0x26] != 0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return 0;
}

// 0044B930  FUN_0044b930  size=285  [between]
undefined4 * __thiscall FUN_0044b930(int param_1,undefined4 *param_2)

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
LAB_0044b9d2:
            iVar3 = FUN_00a7c8a0();
            *param_2 = *(undefined4 *)(iVar3 + 0x40);
            param_2[1] = *(undefined4 *)(iVar3 + 0x44);
            param_2[2] = *(undefined4 *)(iVar3 + 0x48);
            param_2[3] = *(undefined4 *)(iVar3 + 0x4c);
            return param_2;
          }
          if (*(int *)(iVar1 + 0xc) == 2) {
            FUN_00a81330();
            goto LAB_0044b9d2;
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

// 0044BA50  FUN_0044ba50  size=154  [between]
void __thiscall FUN_0044ba50(int param_1,undefined4 *param_2,int param_3)

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

// 0044BB10  FUN_0044bb10  size=380  [between]
void FUN_0044bb10(int param_1,float param_2,float param_3,float param_4,float param_5)

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
  FUN_0044ba50(local_20,param_1);
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

// 0044BCE0  FUN_0044bce0  size=105  [between]
void __thiscall FUN_0044bce0(int param_1,undefined4 *param_2,int param_3)

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

// 0044BD70  FUN_0044bd70  size=1068  [between]
undefined4 __thiscall FUN_0044bd70(int param_1,float *param_2)

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

// 0044C1A0  FUN_0044c1a0  size=380  [between]
void FUN_0044c1a0(int param_1,float param_2,float param_3,float param_4,float param_5)

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
  FUN_0044bce0(local_20,param_1);
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

// 0044C320  FUN_0044c320  size=105  [between]
void __fastcall FUN_0044c320(int param_1)

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
      puVar6 = &DAT_01b34c80;
      (**(code **)(*piVar4 + 4))(&DAT_01b34c80);
      iVar3 = FUN_00dd6d80(puVar6);
      if ((iVar3 != 0) && (iVar3 = FUN_00a8cbe0(0x80000), iVar3 == 0)) {
        FUN_004485f0();
      }
    }
  }
  return;
}

// 0044C3D0  FUN_0044c3d0  size=418  [between]
void __fastcall FUN_0044c3d0(int param_1)

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
      puVar6 = &DAT_01b34c80;
      (**(code **)(*piVar4 + 4))(&DAT_01b34c80);
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
switchD_0044c472_caseD_10000:
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
                  goto switchD_0044c472_caseD_10000;
                case 0x10010:
                case 0x10012:
                case 0x10013:
                  goto switchD_0044c4b0_caseD_10010;
                }
              }
              else {
switchD_0044c4b0_caseD_10010:
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
              if (0x60000 < iVar3) goto LAB_0044c522;
              if ((iVar3 == 0x50018) && (iVar3 = FUN_00a8cac0(), 5 < iVar3)) {
                FUN_0044c320();
              }
            }
            else if (iVar3 - 0x60009U < 7) goto LAB_0044c522;
          }
          else {
LAB_0044c522:
            *(undefined4 *)(iVar5 + 8) = 3;
            *(undefined4 *)(iVar5 + 0xc) = 4;
          }
        }
        else if (iVar3 < 0x8002a) {
          if ((iVar3 == 0x80029) || (iVar3 - 0x80000U < 2)) {
            *(undefined4 *)(iVar5 + 8) = 6;
            FUN_0044c320();
          }
        }
        else if (iVar3 == 0xf0000) goto switchD_0044c4b0_caseD_10010;
      }
    }
    iVar5 = iVar5 + 0x10;
  } while( true );
}

// 0044C5B0  FUN_0044c5b0  size=160  [between]
void __fastcall FUN_0044c5b0(int param_1)

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

// 0044C660  FUN_0044c660  size=920  [between]
void __thiscall FUN_0044c660(int param_1,float *param_2,float *param_3)

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

// 0044CA00  FUN_0044ca00  size=920  [between]
void __thiscall FUN_0044ca00(int param_1,float *param_2,float *param_3)

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

// 0044CE10  FUN_0044ce10  size=85  [between]
int __fastcall FUN_0044ce10(int param_1)

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

// 0044CE70  FUN_0044ce70  size=100  [between]
undefined4 __thiscall FUN_0044ce70(int param_1,float param_2)

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

// 0044CEE0  FUN_0044cee0  size=145  [between]
float10 __thiscall FUN_0044cee0(int param_1,int param_2,float *param_3)

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

// 0044CF80  FUN_0044cf80  size=226  [between]
undefined4 __fastcall FUN_0044cf80(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_00444630();
  switch(uVar1) {
  case 1:
    uVar1 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xdd4) = uVar1;
    *(undefined4 *)(param_1 + 0xdd8) = *(undefined4 *)(param_1 + 0xdd0);
    uVar1 = 0x50007;
LAB_0044cfbc:
    FUN_00a8caf0(uVar1,0,0,0);
    *(undefined4 *)(param_1 + 0xdd0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x12cc) = 0;
    return 1;
  case 2:
    iVar2 = FUN_0044ce70(*(undefined4 *)(param_1 + 0x19fc));
    if (iVar2 != 0) {
      uVar1 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xdd4) = uVar1;
      *(undefined4 *)(param_1 + 0xdd8) = *(undefined4 *)(param_1 + 0xdd0);
      uVar1 = 0x5000d;
      goto LAB_0044cfbc;
    }
    break;
  case 3:
    iVar2 = FUN_0044ce70(*(undefined4 *)(param_1 + 0x19fc));
    if (iVar2 != 0) {
      uVar1 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xdd4) = uVar1;
      *(undefined4 *)(param_1 + 0xdd8) = *(undefined4 *)(param_1 + 0xdd0);
      uVar1 = 0x5000c;
      goto LAB_0044cfbc;
    }
  }
  return 0;
}

// 0044D090  FUN_0044d090  size=350  [between]
bool __thiscall FUN_0044d090(int param_1,uint param_2)

{
  undefined4 uVar1;
  bool bVar2;
  
  if ((int)param_2 < 0x5000f) {
    if (0x50007 < (int)param_2) {
LAB_0044d162:
      if (*(uint *)(param_1 + 0xdc4) == param_2) {
        return false;
      }
      *(uint *)(param_1 + 0xdc4) = param_2;
      bVar2 = true;
      FUN_00c27260(0x40a00000);
      FUN_00c272a0(0x40a00000);
      goto LAB_0044d0f2;
    }
    if ((int)param_2 < 0x10011) {
      if ((0x1000c < (int)param_2) || ((0x10000 < (int)param_2 && ((int)param_2 < 0x10009)))) {
LAB_0044d1ce:
        if (*(uint *)(param_1 + 0xdc8) == param_2) {
          return false;
        }
        *(uint *)(param_1 + 0xdc8) = param_2;
        bVar2 = true;
        goto LAB_0044d0f2;
      }
    }
    else if ((0x4ffff < (int)param_2) && ((int)param_2 < 0x50008)) goto LAB_0044d162;
  }
  else if ((int)param_2 < 0xf0002) {
    if (0xeffff < (int)param_2) goto LAB_0044d162;
    if ((0x9ffff < (int)param_2) && ((int)param_2 < 0xa0008)) goto LAB_0044d1ce;
  }
  bVar2 = *(uint *)(param_1 + 0xdc0) != param_2;
  if (!bVar2) {
    return bVar2;
  }
  *(uint *)(param_1 + 0xdc0) = param_2;
LAB_0044d0f2:
  if ((param_2 & 0xffff0000) != 0x80000) {
    uVar1 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xdd4) = uVar1;
    *(undefined4 *)(param_1 + 0xdd8) = *(undefined4 *)(param_1 + 0xdd0);
  }
  FUN_00a8caf0(param_2,0,0,0);
  *(undefined4 *)(param_1 + 0xdd0) = 0;
  FUN_00a962d0(0,0);
  *(undefined4 *)(param_1 + 0x12cc) = 0;
  return bVar2;
}

// 0044D1F0  FUN_0044d1f0  size=771  [between]
undefined4 __fastcall FUN_0044d1f0(int param_1)

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
  
  FUN_0044ba50(&local_20,*(undefined4 *)(param_1 + 0x4f0));
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
      fVar6 = (float10)FUN_0044cee0(*(undefined4 *)(param_1 + 0x4f0),&local_20);
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
      iVar3 = FUN_0044d090(iVar5);
      if (iVar3 == 0) {
        if (iVar5 != 0xa0000) {
          return 0;
        }
        if (*(int *)(param_1 + 0xdc8) == 0xa0006) {
          return 0;
        }
        *(undefined4 *)(param_1 + 0xdc8) = 0xa0006;
        uVar4 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xdd8) = *(undefined4 *)(param_1 + 0xdd0);
        *(undefined4 *)(param_1 + 0xdd4) = uVar4;
        FUN_00a8caf0(0xa0006,0,0,0);
        *(undefined4 *)(param_1 + 0xdd0) = 0;
        FUN_00a962d0(0,0);
        *(undefined4 *)(param_1 + 0x12cc) = 0;
      }
      return 1;
    }
  }
  return 0;
}

// 0044D500  FUN_0044d500  size=268  [between]
undefined4 __thiscall FUN_0044d500(int *param_1,int *param_2)

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

// 0044D610  Em0060::vf130  size=527  [class]
undefined4 __thiscall Em0060::vf130(int param_1,ushort *param_2)

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
    if (*(int *)(param_1 + 0xde4) != 0) {
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
      return uVar3;
    case 6:
      *puVar1 = 0xef;
      puVar1[0x23] = puVar1[0x23] | 0x20000000;
      puVar1[0x24] = puVar1[0x24] | 0x2000000;
      *(undefined1 *)((int)puVar1 + 0x11) = 7;
      iVar2 = FUN_00a8cbe0(0xf0001);
      if (iVar2 != 0) {
        puVar1[0x24] = puVar1[0x24] | 0x20000000;
        return uVar3;
      }
      break;
    case 8:
    case 0x10:
    case 0x12:
      *puVar1 = 0xf0;
      *(undefined1 *)((int)puVar1 + 0x11) = 7;
      return uVar3;
    case 10:
      *puVar1 = 0xf1;
      *(undefined1 *)((int)puVar1 + 0x11) = 10;
      puVar1[0x23] = puVar1[0x23] | 0x40000000;
      puVar1[0x24] = puVar1[0x24] | 0x2000000;
      return uVar3;
    case 0xc:
    case 0xe:
      *puVar1 = 0xf0;
      *(undefined1 *)((int)puVar1 + 0x11) = 7;
      puVar1[0x23] = puVar1[0x23] | 0x20000000;
      puVar1[0x24] = puVar1[0x24] | 0x800000;
      return uVar3;
    case 0x14:
      *puVar1 = 0xf6;
      puVar1[0x23] = puVar1[0x23] | 0x20002000;
    }
    return uVar3;
  }
  FUN_00dd5650(&DAT_0163da1c);
  return 0;
}

// 004506F0  FUN_004506f0  size=710  [callgraph]
void __fastcall FUN_004506f0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  float10 fVar7;
  float10 fVar8;
  float local_360;
  float local_35c;
  undefined4 local_358;
  undefined4 local_354;
  undefined4 local_350;
  undefined4 local_34c;
  undefined4 local_348;
  undefined4 local_344;
  float local_340;
  float local_33c;
  float local_338;
  undefined1 local_330 [20];
  undefined4 local_31c;
  undefined4 local_318;
  undefined4 local_314;
  undefined2 local_310;
  undefined4 local_30c;
  uint local_294;
  undefined4 local_220;
  undefined4 local_1c0;
  float local_1a0;
  float local_19c;
  
  *(undefined4 *)(param_1 + 0xaf4) = 0x42f00000;
  iVar4 = FUN_00a12210((int)*(short *)(param_1 + 0xb14));
  local_360 = SQRT(*(float *)(iVar4 + 0x14) * *(float *)(iVar4 + 0x14) +
                   *(float *)(iVar4 + 0x10) * *(float *)(iVar4 + 0x10) +
                   *(float *)(iVar4 + 0x18) * *(float *)(iVar4 + 0x18));
  local_35c = SQRT(*(float *)(iVar4 + 0x20) * *(float *)(iVar4 + 0x20) +
                   *(float *)(iVar4 + 0x24) * *(float *)(iVar4 + 0x24) +
                   *(float *)(iVar4 + 0x28) * *(float *)(iVar4 + 0x28));
  fVar3 = SQRT(*(float *)(iVar4 + 0x38) * *(float *)(iVar4 + 0x38) +
               *(float *)(iVar4 + 0x34) * *(float *)(iVar4 + 0x34) +
               *(float *)(iVar4 + 0x30) * *(float *)(iVar4 + 0x30));
  fVar1 = *(float *)(iVar4 + 0x28);
  fVar2 = *(float *)(iVar4 + 0x38);
  fVar7 = (float10)FUN_00ddbaa0(-(*(float *)(iVar4 + 0x18) / fVar3));
  fVar8 = (float10)fpatan((float10)(fVar1 / fVar3),(float10)(fVar2 / fVar3));
  local_340 = (float)fVar8;
  local_33c = (float)fVar7;
  fVar7 = (float10)fpatan((float10)*(float *)(iVar4 + 0x14) / (float10)local_35c,
                          (float10)*(float *)(iVar4 + 0x10) / (float10)local_360);
  local_338 = (float)fVar7;
  local_350 = *(undefined4 *)(iVar4 + 0x40);
  local_34c = *(undefined4 *)(iVar4 + 0x44);
  local_348 = *(undefined4 *)(iVar4 + 0x48);
  local_344 = *(undefined4 *)(iVar4 + 0x4c);
  local_360 = *(float *)(param_1 + 0xb20);
  local_35c = *(float *)(param_1 + 0xb24);
  local_358 = *(undefined4 *)(param_1 + 0xb28);
  local_354 = *(undefined4 *)(param_1 + 0xb2c);
  FUN_004105d0();
  FUN_00410710();
  FUN_0041cf30();
  local_220 = 0x28;
  if (*(int *)(param_1 + 0xae8) != 0) {
    puVar5 = (undefined4 *)FUN_009f8b60();
    local_1c0 = *puVar5;
  }
  fVar7 = (float10)FUN_00dde300(0xbc8efa35,0x3c8efa35);
  local_1a0 = (float)fVar7;
  fVar7 = (float10)FUN_00dde300(0xbc8efa35,0x3c8efa35);
  local_19c = (float)fVar7;
  uVar6 = 2;
  iVar4 = FUN_009c4bf0();
  if (-1 < iVar4) {
    uVar6 = *(undefined4 *)(&DAT_0163dae0 + iVar4 * 4);
  }
  local_30c = *(undefined4 *)(param_1 + 0xae4);
  local_294 = local_294 | 0x10000000;
  local_314 = 1;
  local_318 = 100;
  local_310 = 0x500;
  local_31c = uVar6;
  uVar6 = FUN_00a7c7f0();
  FUN_00a7c960(uVar6);
  FUN_0043fe30(&local_350,&local_360,&local_340,0x3f800000,0x43480000);
  FUN_00ad3be0(*(undefined4 *)(param_1 + 0x4f0),local_330);
  *(undefined4 *)(param_1 + 0xaf0) = 0;
  FUN_00a8caf0(0,0,0,0);
  return;
}

// 004509C0  FUN_004509c0  size=923  [callgraph]
void __fastcall FUN_004509c0(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 uVar9;
  float10 fVar10;
  float10 fVar11;
  undefined *puVar12;
  float local_360;
  float local_35c;
  undefined4 local_358;
  undefined4 local_354;
  float local_350;
  float local_34c;
  float local_348;
  undefined4 uStack_344;
  undefined4 local_340;
  undefined4 local_33c;
  undefined4 local_338;
  undefined4 local_334;
  uint local_330 [5];
  undefined4 uStack_31c;
  int iStack_318;
  int iStack_314;
  undefined1 uStack_310;
  undefined1 uStack_30f;
  undefined4 uStack_30c;
  uint uStack_294;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined2 uStack_1b8;
  short sStack_1b6;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  
  *(undefined4 *)(param_1 + 0xaf4) = 0x41a00000;
  iVar6 = FUN_00a12210((int)*(short *)(param_1 + 0xb14));
  local_360 = SQRT(*(float *)(iVar6 + 0x14) * *(float *)(iVar6 + 0x14) +
                   *(float *)(iVar6 + 0x10) * *(float *)(iVar6 + 0x10) +
                   *(float *)(iVar6 + 0x18) * *(float *)(iVar6 + 0x18));
  local_35c = SQRT(*(float *)(iVar6 + 0x20) * *(float *)(iVar6 + 0x20) +
                   *(float *)(iVar6 + 0x24) * *(float *)(iVar6 + 0x24) +
                   *(float *)(iVar6 + 0x28) * *(float *)(iVar6 + 0x28));
  fVar4 = SQRT(*(float *)(iVar6 + 0x38) * *(float *)(iVar6 + 0x38) +
               *(float *)(iVar6 + 0x34) * *(float *)(iVar6 + 0x34) +
               *(float *)(iVar6 + 0x30) * *(float *)(iVar6 + 0x30));
  fVar1 = *(float *)(iVar6 + 0x28);
  fVar2 = *(float *)(iVar6 + 0x38);
  fVar10 = (float10)FUN_00ddbaa0(-(*(float *)(iVar6 + 0x18) / fVar4));
  fVar11 = (float10)fpatan((float10)(fVar1 / fVar4),(float10)(fVar2 / fVar4));
  local_350 = (float)fVar11;
  local_34c = (float)fVar10;
  fVar10 = (float10)fpatan((float10)*(float *)(iVar6 + 0x14) / (float10)local_35c,
                           (float10)*(float *)(iVar6 + 0x10) / (float10)local_360);
  local_348 = (float)fVar10;
  local_340 = *(undefined4 *)(iVar6 + 0x40);
  local_33c = *(undefined4 *)(iVar6 + 0x44);
  local_338 = *(undefined4 *)(iVar6 + 0x48);
  local_334 = *(undefined4 *)(iVar6 + 0x4c);
  local_360 = *(float *)(param_1 + 0xb20);
  local_35c = *(float *)(param_1 + 0xb24);
  local_358 = *(undefined4 *)(param_1 + 0xb28);
  local_354 = *(undefined4 *)(param_1 + 0xb2c);
  FUN_004105d0();
  FUN_00410710();
  FUN_0041cf30();
  local_21c = 0x2c;
  local_330[1] = 0x30313;
  local_220 = 0x30;
  if (*(int *)(param_1 + 0xae8) != 0) {
    puVar7 = (undefined4 *)FUN_009f8b60();
    local_1c0 = *puVar7;
  }
  piVar8 = *(int **)(param_1 + 0xae8);
  if (piVar8 == (int *)0x0) {
LAB_00450b79:
    iVar6 = FUN_00d46780();
    if (iVar6 == 0) {
      iVar6 = FUN_00d467a0();
      if (iVar6 == 0) {
        uStack_31c = 0x14;
        iStack_314 = 1;
        uStack_310 = 0;
        iStack_318 = 100;
        goto LAB_00450c5a;
      }
      piVar8 = *(int **)(param_1 + 0xae8);
      if (piVar8 == (int *)0x0) goto LAB_00450c5a;
      puVar12 = &DAT_01b355b0;
      (**(code **)(*piVar8 + 4))(&DAT_01b355b0);
      iVar6 = FUN_00dd6d80(puVar12);
      if (iVar6 == 0) goto LAB_00450c5a;
      piVar8 = piVar8 + 0x6ef;
    }
    else {
      piVar8 = *(int **)(param_1 + 0xae8);
      if (piVar8 == (int *)0x0) goto LAB_00450c5a;
      puVar12 = &DAT_01b35810;
      (**(code **)(*piVar8 + 4))(&DAT_01b35810);
      iVar6 = FUN_00dd6d80(puVar12);
      if (iVar6 == 0) goto LAB_00450c5a;
      piVar8 = piVar8 + 0x6e6;
    }
  }
  else {
    puVar12 = &DAT_01b34c80;
    (**(code **)(*piVar8 + 4))(&DAT_01b34c80);
    iVar6 = FUN_00dd6d80(puVar12);
    if (iVar6 == 0) goto LAB_00450b79;
    piVar8 = piVar8 + 0x6b2;
  }
  iVar6 = piVar8[1];
  iVar5 = piVar8[2];
  iVar3 = piVar8[3];
  uStack_31c = FUN_00fdbc60();
  iStack_318 = iVar3;
  iStack_314 = iVar6;
  uStack_310 = (char)iVar5;
LAB_00450c5a:
  uStack_30c = *(undefined4 *)(param_1 + 0xae4);
  uStack_294 = uStack_294 | 0x1000;
  uStack_30f = 7;
  uVar9 = FUN_00a7c7f0();
  FUN_00a7c960(uVar9);
  FUN_00416e30(&local_340,&local_360,&local_350,0x3f400000,0x43480000);
  uStack_1bc = FUN_00a81330();
  local_330[0] = local_330[0] | 4;
  uStack_1b0 = 0;
  uStack_1ac = 0;
  uStack_1a8 = 0;
  uStack_1b8 = 0;
  sStack_1b6 = *(short *)(param_1 + 0xb14);
  uStack_1a4 = uStack_344;
  *(short *)(param_1 + 0xb14) = sStack_1b6 + 1;
  if (0x803 < (short)(sStack_1b6 + 1)) {
    *(undefined2 *)(param_1 + 0xb14) = 0x800;
  }
  FUN_00ad3be0(*(undefined4 *)(param_1 + 0x4f0),local_330);
  *(int *)(param_1 + 0xaf8) = *(int *)(param_1 + 0xaf8) + -1;
  *(undefined4 *)(param_1 + 0xaf0) = 0;
  FUN_00a8caf0(0,0,0,0);
  return;
}

// 00450D60  FUN_00450d60  size=1285  [callgraph]
void __fastcall FUN_00450d60(int param_1)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  float fVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  float10 fVar12;
  float10 fVar13;
  undefined *puVar14;
  int local_36c;
  undefined1 uStack_368;
  int local_364;
  float local_360;
  float local_35c;
  undefined4 local_358;
  undefined4 local_354;
  float local_350;
  float local_34c;
  float local_348;
  undefined4 uStack_344;
  undefined4 local_340;
  undefined4 local_33c;
  undefined4 local_338;
  undefined4 local_334;
  uint local_330 [5];
  undefined4 uStack_31c;
  int iStack_318;
  int iStack_314;
  undefined1 uStack_310;
  undefined1 uStack_30f;
  undefined4 uStack_30c;
  uint uStack_294;
  undefined4 uStack_220;
  undefined4 local_21c;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined2 uStack_1b8;
  undefined2 uStack_1b6;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  
  iVar8 = FUN_00a12210((int)*(short *)(param_1 + 0xb14));
  local_360 = SQRT(*(float *)(iVar8 + 0x14) * *(float *)(iVar8 + 0x14) +
                   *(float *)(iVar8 + 0x10) * *(float *)(iVar8 + 0x10) +
                   *(float *)(iVar8 + 0x18) * *(float *)(iVar8 + 0x18));
  local_35c = SQRT(*(float *)(iVar8 + 0x20) * *(float *)(iVar8 + 0x20) +
                   *(float *)(iVar8 + 0x24) * *(float *)(iVar8 + 0x24) +
                   *(float *)(iVar8 + 0x28) * *(float *)(iVar8 + 0x28));
  fVar5 = SQRT(*(float *)(iVar8 + 0x38) * *(float *)(iVar8 + 0x38) +
               *(float *)(iVar8 + 0x34) * *(float *)(iVar8 + 0x34) +
               *(float *)(iVar8 + 0x30) * *(float *)(iVar8 + 0x30));
  fVar1 = *(float *)(iVar8 + 0x28);
  fVar2 = *(float *)(iVar8 + 0x38);
  fVar12 = (float10)FUN_00ddbaa0(-(*(float *)(iVar8 + 0x18) / fVar5));
  fVar13 = (float10)fpatan((float10)(fVar1 / fVar5),(float10)(fVar2 / fVar5));
  local_350 = (float)fVar13;
  local_34c = (float)fVar12;
  fVar12 = (float10)fpatan((float10)*(float *)(iVar8 + 0x14) / (float10)local_35c,
                           (float10)*(float *)(iVar8 + 0x10) / (float10)local_360);
  local_348 = (float)fVar12;
  local_340 = *(undefined4 *)(iVar8 + 0x40);
  local_33c = *(undefined4 *)(iVar8 + 0x44);
  local_338 = *(undefined4 *)(iVar8 + 0x48);
  local_334 = *(undefined4 *)(iVar8 + 0x4c);
  local_360 = *(float *)(param_1 + 0xb20);
  local_35c = *(float *)(param_1 + 0xb24);
  local_358 = *(undefined4 *)(param_1 + 0xb28);
  local_354 = *(undefined4 *)(param_1 + 0xb2c);
  FUN_004105d0();
  FUN_00410710();
  FUN_0041cf30();
  iVar8 = *(int *)(param_1 + 0xb30);
  local_21c = 0x2d;
  if (iVar8 == 1) {
    local_21c = 0x2e;
  }
  if (iVar8 == 2) {
    local_21c = 0x2f;
  }
  if (iVar8 == 4) {
    local_21c = 0x30;
  }
  if (iVar8 == 3) {
    local_21c = 0x31;
  }
  if (iVar8 == 5) {
    local_21c = 0x32;
  }
  piVar3 = *(int **)(param_1 + 0xae8);
  local_330[1] = 0x30314;
  if (piVar3 == (int *)0x0) {
LAB_00450f56:
    iVar8 = FUN_00d46780();
    if (iVar8 == 0) {
      iVar8 = FUN_00d467a0();
      if (iVar8 == 0) {
        uStack_31c = 0x14;
        iStack_314 = 1;
        uStack_310 = 0;
        iStack_318 = 100;
      }
      else {
        piVar9 = *(int **)(param_1 + 0xae8);
        if (piVar9 != (int *)0x0) {
          puVar14 = &DAT_01b355b0;
          (**(code **)(*piVar9 + 4))(&DAT_01b355b0);
          iVar8 = FUN_00dd6d80(puVar14);
          if (iVar8 != 0) {
            if ((*(int *)(param_1 + 0xb30) != 2) && (*(int *)(param_1 + 0xb30) != 4)) {
              local_364 = piVar9[0x6f6];
              uStack_368 = (undefined1)piVar9[0x6f5];
              local_36c = piVar9[0x6f4];
              FUN_00442400();
              goto LAB_00450fce;
            }
            piVar9 = piVar9 + 0x6f7;
            goto LAB_004510a8;
          }
        }
      }
    }
    else {
      piVar9 = *(int **)(param_1 + 0xae8);
      if (piVar9 != (int *)0x0) {
        puVar14 = &DAT_01b35810;
        (**(code **)(*piVar9 + 4))(&DAT_01b35810);
        iVar8 = FUN_00dd6d80(puVar14);
        if (iVar8 != 0) {
          if ((*(int *)(param_1 + 0xb30) == 2) || (*(int *)(param_1 + 0xb30) == 4)) {
            piVar9 = piVar9 + 0x6ee;
            goto LAB_004510a8;
          }
          local_364 = piVar9[0x6ed];
          uStack_368 = (undefined1)piVar9[0x6ec];
          local_36c = piVar9[0x6eb];
          FUN_00442390();
LAB_00450fce:
          uStack_31c = FUN_00fdbc60();
          iStack_314 = local_36c;
          uStack_310 = uStack_368;
          iStack_318 = local_364;
        }
      }
    }
  }
  else {
    puVar14 = &DAT_01b34c80;
    (**(code **)(*piVar3 + 4))(&DAT_01b34c80);
    iVar8 = FUN_00dd6d80(puVar14);
    if (iVar8 == 0) goto LAB_00450f56;
    if ((*(int *)(param_1 + 0xb30) == 2) ||
       (piVar9 = piVar3 + 0x6b6, *(int *)(param_1 + 0xb30) == 4)) {
      piVar9 = piVar3 + 0x6ba;
    }
LAB_004510a8:
    iVar8 = piVar9[1];
    iVar7 = piVar9[2];
    iVar4 = piVar9[3];
    uStack_31c = FUN_00fdbc60();
    iStack_318 = iVar4;
    iStack_314 = iVar8;
    uStack_310 = (char)iVar7;
  }
  local_330[0] = local_330[0] | 4;
  uStack_294 = uStack_294 | 0x20800;
  uStack_1b6 = *(undefined2 *)(param_1 + 0xb14);
  uStack_30f = 7;
  if ((*(int *)(param_1 + 0xb30) == 2) || (uStack_220 = 0x29, *(int *)(param_1 + 0xb30) == 4)) {
    uStack_220 = 0x80;
  }
  if (*(int *)(param_1 + 0xae8) != 0) {
    puVar10 = (undefined4 *)FUN_009f8b60();
    uStack_1c0 = *puVar10;
  }
  uStack_30c = *(undefined4 *)(param_1 + 0xae4);
  uVar11 = FUN_00a7c7f0();
  FUN_00a7c960(uVar11);
  uVar11 = 0x3e19999a;
  uVar6 = 0x42340000;
  switch(*(undefined4 *)(param_1 + 0xb30)) {
  case 1:
    uVar11 = 0x3e99999a;
    uVar6 = 0x43340000;
    goto switchD_0045118a_default;
  case 2:
    uVar11 = 0x3a83126f;
    break;
  case 3:
  case 4:
  case 5:
    uVar11 = 0x3d4ccccd;
    break;
  default:
    goto switchD_0045118a_default;
  }
  uVar6 = 0x42340000;
switchD_0045118a_default:
  FUN_00416e30(&local_340,&local_360,&local_350,uVar11,uVar6);
  uStack_1bc = FUN_00a81330();
  uStack_1b0 = 0;
  uStack_1ac = 0;
  uStack_1a8 = 0;
  uStack_1a4 = uStack_344;
  uStack_1b8 = 0;
  FUN_00ad3be0(*(undefined4 *)(param_1 + 0x4f0),local_330);
  *(undefined4 *)(param_1 + 0xaf0) = 0;
  *(ushort *)(param_1 + 0xb14) = (*(short *)(param_1 + 0xb14) == 0x800) + 0x800;
  FUN_00a8caf0(0,0,0,0);
  return;
}

// 00451280  FUN_00451280  size=931  [callgraph]
void __fastcall FUN_00451280(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  byte bVar10;
  int iVar11;
  int *piVar12;
  undefined4 uVar13;
  float10 fVar14;
  float10 fVar15;
  float local_120;
  float local_118;
  float local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  uint local_e0 [12];
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  undefined4 uStack_a4;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  undefined4 uStack_94;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  
  if (*(int *)(param_1 + 0xb40) != 0) {
    FUN_00448c20();
    FUN_009fdde0();
    return;
  }
  FUN_004066f0();
  *(undefined4 *)(param_1 + 0xb34) = 1;
  iVar11 = FUN_00a12210(0);
  if (*(int *)(param_1 + 0x4b4) == 0x30311) {
    iVar11 = FUN_00a12210(0x802);
  }
  if (*(int *)(param_1 + 0x4b4) == 0x30315) {
    iVar11 = FUN_00a12210(0x803);
  }
  if (iVar11 != 0) {
    local_100 = *(undefined4 *)(iVar11 + 0x40);
    local_fc = *(undefined4 *)(iVar11 + 0x44);
    local_f8 = *(undefined4 *)(iVar11 + 0x48);
    local_f4 = *(undefined4 *)(iVar11 + 0x4c);
    fVar1 = *(float *)(param_1 + 0x10);
    fVar2 = *(float *)(param_1 + 0x14);
    fVar3 = *(float *)(param_1 + 0x18);
    fVar4 = *(float *)(param_1 + 0x20);
    fVar5 = *(float *)(param_1 + 0x24);
    fVar6 = *(float *)(param_1 + 0x28);
    fVar9 = SQRT(*(float *)(param_1 + 0x38) * *(float *)(param_1 + 0x38) +
                 *(float *)(param_1 + 0x34) * *(float *)(param_1 + 0x34) +
                 *(float *)(param_1 + 0x30) * *(float *)(param_1 + 0x30));
    fVar7 = *(float *)(param_1 + 0x28);
    fVar8 = *(float *)(param_1 + 0x38);
    fVar14 = (float10)FUN_00ddbaa0(-(*(float *)(param_1 + 0x18) / fVar9));
    fVar15 = (float10)fpatan((float10)(fVar7 / fVar9),(float10)(fVar8 / fVar9));
    local_f0 = (float)fVar15;
    local_ec = (float)fVar14;
    fVar14 = (float10)fpatan((float10)*(float *)(param_1 + 0x14) /
                             (float10)SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6),
                             (float10)*(float *)(param_1 + 0x10) /
                             (float10)SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3));
    local_e8 = (float)fVar14;
    FUN_0118f7b0();
    local_50 = 0x40a00000;
    fVar14 = (float10)FUN_00dde300(0,0x3f800000);
    local_120 = (float)(fVar14 + (float10)0.5);
    fVar14 = (float10)FUN_00dde300(0,0x3f800000);
    fVar15 = (float10)FUN_00dde300(0,0x3f800000);
    local_118 = (float)(fVar15 + (float10)0.5);
    bVar10 = FUN_00dde2d0(0,99);
    if ((bVar10 & 1) != 0) {
      local_120 = -local_120;
    }
    bVar10 = FUN_00dde2d0(0,99);
    if ((bVar10 & 1) != 0) {
      local_118 = -local_118;
    }
    local_b0 = local_120 * 2.0;
    fStack_ac = (float)(fVar14 + (float10)0.5) * 2.0;
    fStack_a8 = local_118 * 2.0;
    uStack_a4 = 0x3f800000;
    fVar14 = (float10)FUN_00dde300(0,0x3f800000);
    local_104 = (float)fVar14;
    fVar14 = (float10)FUN_00dde300(0,0x3f800000);
    fVar15 = (float10)FUN_00dde300(0,0x3f800000);
    local_a0 = (float)fVar15;
    local_4c = 0x3ecccccd;
    local_48 = 0x3ecccccd;
    local_40 = 0x3f4ccccd;
    local_2c = 1;
    local_34 = 0x41a00000;
    local_30 = 0x41200000;
    fStack_98 = local_104;
    uStack_94 = 0x3f800000;
    fStack_9c = (float)fVar14;
    iVar11 = FUN_009f8b40();
    local_e0[0] = iVar11 << 0x10 | 0xb;
    piVar12 = (int *)FUN_00910da0();
    uVar13 = (**(code **)(*piVar12 + 8))(&local_104,local_e0,&local_100,&local_f0,0x3e4ccccd,1);
    FUN_00910ab0(uVar13);
    *(undefined4 *)(param_1 + 0xb38) = 0x43340000;
  }
  if (DAT_01885d68 != 1) {
    piVar12 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar12 = *piVar12 + -1;
    if (((*piVar12 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}

// 00451630  FUN_00451630  size=136  [callgraph]
void __fastcall FUN_00451630(int *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x004516b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  return;
}

// 004516C0  FUN_004516c0  size=268  [callgraph]
void __fastcall FUN_004516c0(int param_1)

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
    FUN_004490a0();
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    FUN_00442690(uVar4);
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    uVar3 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xdd4) = uVar3;
    *(undefined4 *)(param_1 + 0xdd8) = *(undefined4 *)(param_1 + 0xdd0);
    FUN_00a8caf0(0x50010,0,0,0);
    *(undefined4 *)(param_1 + 0xdd0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x12cc) = 0;
  }
  FUN_00442690(uVar4);
  return;
}

// 004517D0  FUN_004517d0  size=282  [callgraph]
void __fastcall FUN_004517d0(int *param_1)

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
    FUN_00442720(uVar3);
  }
  else if (param_1[0x187] != 1) goto LAB_004518d1;
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
LAB_004518d1:
  iVar1 = FUN_00a8c760(10);
  if (iVar1 == 0) {
    FUN_00442690(uVar3);
  }
  return;
}

// 004518F0  FUN_004518f0  size=616  [callgraph]
void __thiscall FUN_004518f0(int *param_1,float param_2)

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
LAB_00451a18:
              piVar4 = param_1 + 4;
            }
            else {
              piVar4 = (int *)param_1[0xd8];
              piVar5 = piVar4;
              if (piVar4 == (int *)0x0) {
                piVar5 = param_1;
              }
              if ((short)piVar5[0xd6] <= sVar1) goto LAB_00451a18;
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

// 00451B60  FUN_00451b60  size=5782  [callgraph]
void __thiscall FUN_00451b60(uint param_1,int *param_2,int param_3)

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
  param_2[3] = *(int *)(param_1 + 0x1b28);
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
  local_210 = *(float *)(param_1 + 0x1b00) - *(float *)(param_1 + 0x40);
  local_20c = *(float *)(param_1 + 0x1b04) - *(float *)(param_1 + 0x44);
  local_208 = *(float *)(param_1 + 0x1b08) - *(float *)(param_1 + 0x48);
  local_204 = *(float *)(param_1 + 0x1b0c) - *(float *)(param_1 + 0x4c);
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
  local_1f4 = *(float *)(param_1 + 0x1b00) - *(float *)(param_1 + 0x40);
  local_1f0 = *(float *)(param_1 + 0x1b04) - *(float *)(param_1 + 0x44);
  fStack_1ec = *(float *)(param_1 + 0x1b08) - *(float *)(param_1 + 0x48);
  local_1e8 = *(float *)(param_1 + 0x1b0c) - *(float *)(param_1 + 0x4c);
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
  if (0.25 < *(float *)(param_1 + 0x1b10) * -0.0 + *(float *)(param_1 + 0x1b14) * fStack_240 * -1.0
             + *(float *)(param_1 + 0x1b18) * fStack_12c) {
    local_220[2] = 1;
  }
  if (0.25 < *(float *)(param_1 + 0x1b18) * local_23c[0] +
             *(float *)(param_1 + 0x1b10) * 0.0 + *(float *)(param_1 + 0x1b14) * fStack_240) {
    local_20c = 1.4013e-45;
  }
  if (0.25 < *(float *)(param_1 + 0x1b18) * 0.0 +
             *(float *)(param_1 + 0x1b10) * 0.0 + *(float *)(param_1 + 0x1b14) * 0.0) {
    local_1d8 = 1;
  }
  if (0.25 < *(float *)(param_1 + 0x1b10) * -0.0 + *(float *)(param_1 + 0x1b14) * -0.0 +
             *(float *)(param_1 + 0x1b18) * -0.0) {
    local_1dc = 1;
  }
  if (0.5 < *(float *)(param_1 + 0x1b14) * fStack_200 * -1.0 +
            *(float *)(param_1 + 0x1b10) * local_204 * -1.0 +
            *(float *)(param_1 + 0x1b18) * fStack_1fc * -1.0) {
    iStack_26c = 1;
  }
  if (0.5 < fStack_1fc * *(float *)(param_1 + 0x1b18) +
            local_204 * *(float *)(param_1 + 0x1b10) + fStack_200 * *(float *)(param_1 + 0x1b14)) {
    iStack_260 = 1;
  }
  iVar15 = FUN_00449bf0(&fStack_144,param_2);
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
  if (piVar18[0x6c9] == 0) {
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
  if (piVar18[0x6cc] != 0) {
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
  if ((((piVar18[0x6ca] == 0) && (piVar18[0x6cb] == 0)) &&
      (iVar14 = FUN_00a8cbe0(0x80006), iVar14 == 0)) &&
     ((iVar14 = FUN_00a8cbe0(0x80008), iVar14 == 0 && (iVar14 = FUN_00a8cbe0(0x60017), iVar14 == 0))
     )) {
    if ((piVar18[0x6cb] == 0) &&
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
            if (iStack_1a0 == 0) goto LAB_0045292d;
          }
          else {
            piVar18[0x6ce] = 1;
            if (iStack_1a0 == 0) goto LAB_0045295b;
          }
          piVar18[0x6cf] = 1;
LAB_0045295b:
          *param_2 = 0x1c;
          *(int *)(param_3 + 0x18) = piVar18[0x12d];
          return;
        }
      }
LAB_0045292d:
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
          if (*param_2 != 0) goto LAB_00452abd;
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
          if (*param_2 != 0) goto LAB_00452caf;
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
LAB_00452caf:
            *(int *)(param_3 + 0x18) = piVar19[0x12d];
            return;
          }
        }
      }
      if ((((aiStack_18c[1] != 0) && (param_2[1] == 0)) && (local_1b8 != 0)) && (iStack_1a8 != 0)) {
LAB_00452d58:
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
        goto LAB_00452d58;
      }
      if (5 < iVar20) {
        *param_2 = (-(uint)(piVar19[0x6ca] != 0) & 0xffffffee) + 0x18;
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
LAB_00452f27:
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
LAB_00452abd:
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
        goto LAB_00452f27;
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
        goto LAB_004531d8;
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
        if (*param_2 != 0) goto LAB_00453137;
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
        if (*param_2 != 0) goto LAB_0045316a;
      }
    }
    if ((aiStack_1d4[1] != 0) && (auStack_124[0] == 0)) {
LAB_004530f6:
      *param_2 = 6;
      *(int *)(param_3 + 0x18) = piVar18[0x12d];
      return;
    }
    if ((aiStack_1d4[3] != 0) &&
       (((auStack_124[0] == 0 && (auStack_124[7] == 0)) && (auStack_124[0xb] == 0)))) {
      *param_2 = 6;
LAB_00453137:
      *(int *)(param_3 + 0x18) = piVar18[0x12d];
      return;
    }
    if (((aiStack_18c[1] != 0) && (auStack_124[0] == 0)) && (auStack_124[3] == 0)) {
      *param_2 = 3;
LAB_0045316a:
      *(int *)(param_3 + 0x18) = piVar18[0x12d];
      return;
    }
    if (5 < iVar20) goto LAB_004530f6;
  }
  if (((aiStack_18c[0] != 0) && (aiStack_18c[1] != 0)) &&
     ((aiStack_18c[3] != 0 && ((iStack_160 != 0 && (iStack_170 != 0)))))) {
    *param_2 = 0x1f;
    *(int *)(param_3 + 0x18) = piVar19[0x12d];
    return;
  }
LAB_004531d8:
  *(undefined4 *)(param_3 + 0x18) = 0x42000;
  return;
}

// 00453200  FUN_00453200  size=3140  [callgraph]
/* WARNING: Type propagation algorithm not settling */

void __thiscall FUN_00453200(int param_1,int *param_2,int param_3)

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
  local_1f4[1] = *(float *)((int)local_1f8 + 0x1b00) - *(float *)((int)local_1f8 + 0x40);
  local_1f4[2] = *(float *)((int)local_1f8 + 0x1b04) - *(float *)((int)local_1f8 + 0x44);
  local_1f4[3] = *(float *)((int)local_1f8 + 0x1b08) - *(float *)((int)local_1f8 + 0x48);
  local_1f4[4] = *(float *)((int)local_1f8 + 0x1b0c) - *(float *)((int)local_1f8 + 0x4c);
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
  fStack_204 = *(float *)((int)fVar2 + 0x1b00) - *(float *)((int)fVar2 + 0x40);
  fStack_200 = *(float *)((int)fVar2 + 0x1b04) - *(float *)((int)fVar2 + 0x44);
  local_1fc = *(float *)((int)fVar2 + 0x1b08) - *(float *)((int)fVar2 + 0x48);
  local_1f8 = *(float *)((int)fVar2 + 0x1b0c) - *(float *)((int)fVar2 + 0x4c);
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
  FUN_00449bf0(auStack_94,param_2);
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
  uVar4 = (uint)(puVar17[0x6c9] != 0);
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
  if (puVar17[0x6cc] != 0) {
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
  if ((((puVar17[0x6ca] != 0) || (puVar17[0x6cb] != 0)) ||
      (iVar11 = FUN_00a8cbe0(0x80006), iVar11 != 0)) ||
     ((iVar11 = FUN_00a8cbe0(0x80008), iVar11 != 0 || (iVar11 = FUN_00a8cbe0(0x60017), iVar11 != 0))
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
    goto LAB_00453e29;
  }
  if ((puVar17[0x6cb] == 0) &&
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
          if (iStack_1c0 == 0) goto LAB_00453bda;
        }
        else {
          puVar17[0x6ce] = 1;
          if (iStack_1c0 == 0) goto LAB_00453bbf;
        }
        puVar17[0x6cf] = 1;
LAB_00453bbf:
        *param_2 = 0x1c;
        *(uint *)(param_3 + 0x18) = puVar17[0x12d];
        return;
      }
    }
LAB_00453bda:
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
LAB_00453c6f:
      *param_2 = 0x21;
      *(uint *)(param_3 + 0x18) = puVar17[0x12d];
      return;
    }
    if (5 < iVar12) {
      *param_2 = (-(uint)(puVar17[0x6ca] != 0) & 0xffffffee) + 0x18;
      *(uint *)(param_3 + 0x18) = puVar17[0x12d];
      return;
    }
    if (((iStack_1d8 != 0) || (iStack_1d4 != 0)) && (auStack_1ac[1] == 0)) {
      if ((uVar4 != 0) && (aiStack_ec[1] != 0)) {
        *param_2 = 1;
        *(uint *)(param_3 + 0x18) = puVar17[0x12d];
        return;
      }
      goto LAB_00453c6f;
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
    if (aiStack_ec[1] == 0) goto LAB_00453e29;
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
LAB_00453e29:
  *(undefined4 *)(param_3 + 0x18) = 0x42000;
  return;
}

// 00453E50  FUN_00453e50  size=2928  [callgraph]
void __thiscall FUN_00453e50(int param_1,int *param_2,int param_3)

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
  local_1f0 = *(float *)(param_1 + 0x1b00) - *(float *)(param_1 + 0x40);
  local_1ec = *(float *)(param_1 + 0x1b04) - *(float *)(param_1 + 0x44);
  local_1e8 = *(float *)(param_1 + 0x1b08) - *(float *)(param_1 + 0x48);
  local_1e4 = *(float *)(param_1 + 0x1b0c) - *(float *)(param_1 + 0x4c);
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
  fStack_204 = *(float *)(param_1 + 0x1b00) - *(float *)(param_1 + 0x40);
  fStack_200 = *(float *)(param_1 + 0x1b04) - *(float *)(param_1 + 0x44);
  local_1fc = *(float *)(param_1 + 0x1b08) - *(float *)(param_1 + 0x48);
  local_1f8 = *(float *)(param_1 + 0x1b0c) - *(float *)(param_1 + 0x4c);
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
  FUN_00449bf0(auStack_94,param_2);
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
  uVar4 = (uint)(puVar12[0x6c9] != 0);
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
  if (puVar12[0x6cc] != 0) {
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
  if ((((puVar12[0x6ca] != 0) || (puVar12[0x6cb] != 0)) ||
      (puVar17 = puVar12, iVar5 = FUN_00a8cbe0(0x80006), iVar5 != 0)) ||
     ((iVar5 = FUN_00a8cbe0(0x80008), iVar5 != 0 || (iVar5 = FUN_00a8cbe0(0x60017), iVar5 != 0)))) {
    *param_2 = 3;
    *(uint *)(param_3 + 0x18) = puVar12[0x12d];
    return;
  }
  if ((puVar12[0x6cb] == 0) &&
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
      if (iStack_c0 == 0) goto LAB_004549a5;
      if (iStack_bc != 0) {
        if (iStack_110 == 0) {
          if (iStack_100 == 0) goto LAB_0045497e;
        }
        else {
          puVar17[0x6ce] = 1;
          if (iStack_100 == 0) goto LAB_00454825;
        }
        puVar17[0x6cf] = 1;
LAB_00454825:
        *param_2 = 0x1c;
        *(uint *)(param_3 + 0x18) = puVar17[0x12d];
        return;
      }
    }
  }
  else {
    if (5 < iVar13) {
      *param_2 = (-(uint)(puVar12[0x6ca] != 0) & 0xffffffee) + 0x18;
LAB_00454860:
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
      if (*param_2 != 0) goto LAB_00454860;
    }
    if (iStack_11c != 0) {
      *param_2 = 0x1d;
      *(uint *)(param_3 + 0x18) = puVar17[0x12d];
      return;
    }
  }
LAB_0045497e:
  if ((iStack_c0 != 0) && (iStack_d0 != 0)) {
    *param_2 = 0x1f;
    *(uint *)(param_3 + 0x18) = puVar17[0x12d];
    return;
  }
LAB_004549a5:
  *(undefined4 *)(param_3 + 0x18) = 0x42000;
  return;
}

// 004549C0  Em0060::vf338  size=261  [class]
void __thiscall Em0060::vf338(int *param_1,undefined4 param_2,int param_3,int param_4)

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
  iVar4 = *(int *)(DAT_01b34d08 + 8);
  iVar1 = *(int *)(DAT_01b34d08 + 4);
  for (iVar5 = *(int *)(DAT_01b34d08 + 4); iVar5 != iVar4 * 0x10 + iVar1; iVar5 = iVar5 + 0x10) {
    iVar3 = FUN_00a81330();
    if ((iVar3 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
      puVar6 = &DAT_01b34c80;
      (**(code **)(*piVar2 + 4))(&DAT_01b34c80);
      iVar3 = FUN_00dd6d80(puVar6);
      if (((iVar3 != 0) &&
          (((iVar3 = FUN_00a8cbe0(0x80000), iVar3 == 0 && (iVar3 = FUN_00441cd0(), iVar3 != 0)) &&
           (piVar2[0x379] == 0)))) &&
         ((iVar3 = FUN_00a8cbe0(0x1000a), iVar3 == 0 && (0 < piVar2[0x63b])))) {
        piVar2[0x63a] = 1;
        piVar2[0x63b] = piVar2[0x63b] + -1;
        FUN_00441940();
      }
    }
  }
  return;
}

// 00454AD0  FUN_00454ad0  size=203  [between]
void __fastcall FUN_00454ad0(int param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (((0.0 < *(float *)(param_1 + 0x1b48)) &&
      (fVar1 = *(float *)(param_1 + 0x1b48) - *(float *)(param_1 + 0x910),
      *(float *)(param_1 + 0x1b48) = fVar1, fVar1 < 0.0)) && (*(int *)(param_1 + 0x1354) != 0)) {
    sVar2 = FUN_00dde2a0(0,1);
    if ((sVar2 == 0) || (iVar3 = FUN_0044ce70(*(undefined4 *)(param_1 + 0x19fc)), iVar3 == 0)) {
      uVar4 = 0x8000b;
    }
    else {
      uVar4 = 0x8000e;
    }
    FUN_00a8caf0(uVar4,0,0,0);
    *(undefined4 *)(param_1 + 0xdd0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x12cc) = 0;
  }
  if ((*(int *)(param_1 + 0x870) < 1) || (*(int *)(param_1 + 0x4e4) != 0)) {
    FUN_00a8caf0(0x8000d,0,0,0);
    *(undefined4 *)(param_1 + 0xdd0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x12cc) = 0;
  }
  return;
}

// 00454BA0  FUN_00454ba0  size=47  [between]
void __fastcall FUN_00454ba0(int param_1)

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

// 00454BD0  FUN_00454bd0  size=88  [between]
undefined4 __fastcall FUN_00454bd0(int param_1)

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

// 00454C30  FUN_00454c30  size=88  [between]
undefined4 __fastcall FUN_00454c30(int param_1)

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

// 00454CE0  FUN_00454ce0  size=108  [between]
void __fastcall FUN_00454ce0(int param_1)

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
        iVar2 = FUN_0044fc10(iVar2);
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

// 00454DB0  FUN_00454db0  size=264  [between]
void __fastcall FUN_00454db0(float *param_1)

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
    FUN_0044b930(&local_30);
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
        FUN_0044c660(&uStack_34,auStack_24);
        FUN_0044ca00(&uStack_34,auStack_24);
      }
    }
  }
  return;
}

// 00454EC0  Em0060::vf19C  size=195  [class]
void __thiscall Em0060::vf19C(int *param_1,int param_2,uint param_3)

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

// 00457FE0  FUN_00457fe0  size=598  [callgraph]
void __fastcall FUN_00457fe0(int *param_1)

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
    FUN_00b03020(1);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x42700000;
    goto LAB_0045808d;
  case 1:
LAB_0045808d:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 == 0) {
      iVar2 = (**(code **)(*param_1 + 800))(0x3d888889);
      if (iVar2 != 0) {
        FUN_00aa4120(0x2f,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        FUN_00b1b630(0,1);
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
      FUN_00b1b630(0,1);
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_00b1b700(1,0);
      FUN_00b182c0();
    }
  }
  if ((float)param_1[0x248] <= 0.0) {
    return;
  }
  fVar1 = (float)param_1[0x248] - 1.0;
  param_1[0x248] = (int)fVar1;
  if (fVar1 < 0.0 == (fVar1 == 0.0)) {
    FUN_004518f0(fVar1 * 0.016666668);
    return;
  }
  param_1[0x248] = 0;
  return;
}

// 00458250  FUN_00458250  size=738  [callgraph]
void __fastcall FUN_00458250(int *param_1)

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
    FUN_00b03020(1);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x42700000;
    goto LAB_004582fc;
  case 1:
LAB_004582fc:
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
      if (param_1[0x540] < 3) {
        uVar3 = 0x2b;
      }
      else {
        uVar3 = 0x86;
      }
      FUN_00aa4080(uVar3,0,0x3ecccccd,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x248] = (int)((float)param_1[0x571] * 60.0);
    }
    break;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x248];
    if ((!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) &&
       (fVar1 = (float)param_1[0x248], param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]),
       fVar1 - (float)param_1[0x244] < 0.0)) {
      FUN_00b1b630(0,1);
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
      FUN_00b1b700(1,0);
      FUN_00b182c0();
    }
  }
  if ((float)param_1[0x248] <= 0.0) {
    return;
  }
  fVar1 = (float)param_1[0x248] - 1.0;
  param_1[0x248] = (int)fVar1;
  if (fVar1 < 0.0 == (fVar1 == 0.0)) {
    FUN_004518f0(fVar1 * 0.016666668);
    return;
  }
  param_1[0x248] = 0;
  return;
}

// 00458550  Em0060::vf33C  size=147  [class]
void __fastcall Em0060::vf33C(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1870);
  if (iVar1 != 0) {
    if (((*(int *)(param_1 + 0x1880) != 0) && (*(int *)(param_1 + 0x1890) != 0)) &&
       (*(int *)(param_1 + 0x18a0) != 0)) {
      FUN_00451b60();
      return;
    }
    if (iVar1 != 0) {
      return;
    }
  }
  if ((*(int *)(param_1 + 0x1880) != 0) &&
     ((*(int *)(param_1 + 0x1890) != 0 || (*(int *)(param_1 + 0x18a0) != 0)))) {
    FUN_00453200();
    return;
  }
  if (iVar1 == 0) {
    if (((*(int *)(param_1 + 0x1880) != 0) && (*(int *)(param_1 + 0x1890) == 0)) &&
       (*(int *)(param_1 + 0x18a0) == 0)) {
      FUN_00453200();
      return;
    }
    if ((*(int *)(param_1 + 0x1880) == 0) &&
       ((*(int *)(param_1 + 0x1890) != 0 || (*(int *)(param_1 + 0x18a0) != 0)))) {
      FUN_00453e50();
      return;
    }
  }
  return;
}

// 004585F0  Em0060::vf334  size=1926  [class]
void __thiscall Em0060::vf334(int *param_1,int param_2,int *param_3)

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
  
  BehaviorEmBase::vf334(param_2,param_3);
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
      puVar14 = &DAT_01b34c80;
      (**(code **)(*local_a8 + 4))(&DAT_01b34c80);
      iVar6 = FUN_00dd6d80(puVar14);
      if (iVar6 == 0) {
        local_a8 = (int *)0x0;
      }
      else if (local_a8 != param_1) {
        FUN_0040ac60(local_a8 + 0x2ac);
        iVar6 = local_a8[0x20f];
        param_1[0x147] = iVar6;
        param_1[0x20f] = iVar6;
        param_1[0x6ca] = local_a8[0x6ca];
        param_1[0x6ce] = local_a8[0x6ce];
        param_1[0x6cf] = local_a8[0x6cf];
        param_1[0x6d0] = local_a8[0x6d0];
        param_1[0x6d1] = local_a8[0x6d1];
        param_1[0x6e8] = local_a8[0x6e8];
        param_1[0x6da] = local_a8[0x6da];
        uVar4 = FUN_009f8b40();
        FUN_00ac8a80(uVar4);
      }
    }
  }
  FUN_009fd240();
  if (*(int *)(param_2 + 0x370) != 0) {
    FUN_00a1abe0(0);
  }
  piVar5 = param_1 + 0x5ff;
  iVar6 = (int)local_a8 - (int)param_1;
  iVar7 = 9;
  do {
    *piVar5 = *(int *)(iVar6 + (int)piVar5);
    piVar5[1] = *(int *)(iVar6 + 4 + (int)piVar5);
    piVar5[2] = *(int *)(iVar6 + 8 + (int)piVar5);
    piVar5 = piVar5 + 3;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  piVar5 = param_1 + 0x61c;
  iVar7 = 6;
  do {
    *piVar5 = *(int *)((int)piVar5 + iVar6);
    piVar5[1] = *(int *)((int)piVar5 + iVar6 + 4);
    piVar5[2] = *(int *)((int)piVar5 + iVar6 + 8);
    piVar5[3] = *(int *)((int)piVar5 + iVar6 + 0xc);
    piVar5 = piVar5 + 4;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  piVar5 = param_1 + 0x635;
  iVar7 = 4;
  do {
    *piVar5 = *(int *)((int)piVar5 + iVar6);
    piVar5 = piVar5 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  if (param_1[0x620] != 0) {
    FUN_00ac8d80(0x12,1);
    FUN_00ac8d80(0x11,1);
    FUN_00ac8d80(0xe,1);
  }
  if (param_1[0x61c] != 0) {
    FUN_00ac8d80(0,1);
    FUN_00ac8d80(1,1);
    FUN_00ac8d80(2,1);
    FUN_00ac8d80(3,1);
    FUN_00ac8d80(0xf,1);
    FUN_00ac8d80(0x10,1);
    FUN_00ac8d80(9,1);
    FUN_00ac8d80(4,1);
    if ((param_1[0xcc] != 0) && (*(int *)(param_1[0xcc] + 0xcc) == 0)) {
      FUN_004489f0();
    }
  }
  if (param_1[0x624] != 0) {
    FUN_00ac8d80(10,1);
    FUN_00ac8d80(0xb,1);
    FUN_00ac8d80(0xc,1);
    FUN_00ac8d80(0xd,1);
  }
  if (param_1[0x628] != 0) {
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
          param_1[0x6bf] = param_1[0x6bf] | uVar3;
LAB_004588eb:
          if (uVar8 < 0x20) {
            param_1[0x6be] = param_1[0x6be] | uVar3;
          }
        }
      }
      else {
        iVar6 = FUN_00a10040(uVar8);
        if (iVar6 == 1) goto LAB_004588eb;
      }
      uVar8 = uVar8 + 1;
      uVar3 = uVar3 << 1 | (uint)((int)uVar3 < 0);
    } while ((int)uVar8 < 0x12);
  }
  if ((*(byte *)(param_1 + 0x6be) & 2) == 0) {
    if (param_1[0x6d1] == 0) {
      if (param_1[0x4d6] != 0) {
        *(int *)(param_1[0x4d6] + 0x518) = param_2;
      }
      if (param_1[0x4d7] != 0) {
        *(int *)(param_1[0x4d7] + 0x518) = param_2;
      }
    }
  }
  else {
    param_1[0x6d1] = 1;
    if (param_1[0x4d6] != 0) {
      uVar4 = FUN_00a81330();
      FUN_00a9e0d0(uVar4);
      FUN_00451280();
      param_1[0x4d6] = 0;
      FUN_00a7c950();
    }
    if (param_1[0x4d7] != 0) {
      uVar4 = FUN_00a81330();
      FUN_00a9e0d0(uVar4);
      FUN_00451280();
      param_1[0x4d7] = 0;
      FUN_00a7c950();
    }
  }
  if ((param_1[0x6be] & 0x4000U) == 0) {
    if ((param_1[0x6d0] == 0) && (param_1[0x4d5] != 0)) {
      *(int *)(param_1[0x4d5] + 0x518) = param_2;
    }
  }
  else {
    param_1[0x6d0] = 1;
    FUN_004558a0(0);
  }
  iVar6 = 0;
  piVar5 = (int *)FUN_00ac8a30();
  if (piVar5 != (int *)0x0) {
    iVar6 = *piVar5;
    if (local_a8[0x61c] == 0) {
LAB_00458a48:
      if (((local_a8[0x620] != 0) && (local_a8[0x624] != 0)) && (local_a8[0x628] != 0)) {
        param_1[0x6c9] = local_a8[0x294];
      }
      if (((local_a8[0x61c] == 0) && (local_a8[0x620] == 0)) &&
         ((local_a8[0x624] != 0 && (local_a8[0x628] != 0)))) {
        param_1[0x6c9] = local_a8[0x294];
      }
    }
    else {
      if (((local_a8[0x620] != 0) && (local_a8[0x624] != 0)) && (local_a8[0x628] != 0)) {
        param_1[0x6c9] = piVar5[1];
      }
      if (local_a8[0x61c] == 0) goto LAB_00458a48;
    }
    if (param_1[0x6c8] == 0) {
      param_1[0x6c8] = piVar5[2];
    }
    if (param_1[0x6ca] == 0) {
      param_1[0x6ca] = piVar5[3];
    }
  }
  if (param_1[0x139] == 0) {
    if (param_1[0x6da] != 0) {
      param_1[0x139] = 1;
    }
    if ((-1 < param_1[0x6e8]) &&
       ((iVar7 = FUN_00c51a30(param_1[0x6e8]), iVar7 == 0 ||
        (FUN_00c518c0(local_a0,param_1[0x6e8]), local_68 != 0)))) {
      param_1[0x139] = 1;
    }
    if (param_1[0x139] == 0) goto LAB_00458b74;
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
LAB_00458b74:
  uVar3 = 0x10000;
  switch(iVar6) {
  case 1:
    uVar3 = 0x80005;
    break;
  case 2:
    uVar3 = 0x80006;
    break;
  case 3:
    uVar3 = 0x80008;
    break;
  case 4:
    uVar3 = 0x80009;
    break;
  case 6:
    uVar3 = 0x8000d;
    break;
  case 7:
    uVar3 = 0x8000e;
    break;
  case 8:
    uVar3 = 0x8000f;
    break;
  case 9:
    uVar3 = 0x80010;
    break;
  case 10:
    uVar3 = 0x80011;
    break;
  case 0xb:
    uVar3 = 0x80012;
    break;
  case 0xc:
    uVar3 = 0x80013;
    break;
  case 0xd:
    uVar3 = 0x80014;
    break;
  case 0xe:
    uVar3 = 0x80015;
    break;
  case 0xf:
    uVar3 = 0x80016;
    break;
  case 0x10:
    uVar3 = 0x80017;
    break;
  case 0x11:
    uVar3 = 0x80018;
    break;
  case 0x12:
    uVar3 = 0x80019;
    break;
  case 0x13:
    uVar3 = 0x8001a;
    break;
  case 0x14:
    uVar3 = 0x8001b;
    break;
  case 0x15:
    uVar3 = 0x8001c;
    break;
  case 0x16:
    uVar3 = 0x8001d;
    break;
  case 0x17:
    uVar3 = 0x8001e;
    break;
  case 0x18:
    uVar3 = 0x80000;
    break;
  case 0x19:
    uVar3 = 0x8001f;
    break;
  case 0x1a:
    uVar3 = 0x80020;
    break;
  case 0x1b:
    uVar3 = 0x80021;
    break;
  case 0x1c:
    uVar3 = 0x80022;
    break;
  case 0x1d:
    uVar3 = 0x80023;
    break;
  case 0x1e:
    uVar3 = 0x80024;
    break;
  case 0x1f:
    uVar3 = 0x80025;
    break;
  case 0x20:
    uVar3 = 0x80026;
    break;
  case 0x21:
    uVar3 = 0x80027;
  }
  param_1[0x6cd] = -0x40800000;
  iVar6 = FUN_00a8cbe0(uVar3);
  if (iVar6 != 0) {
    fVar9 = (float10)FUN_00a958c0(0);
    param_1[0x6cd] = (int)(float)fVar9;
    uVar15 = 0x3f800000;
    uVar13 = 0;
    uVar12 = 0x8000210;
    uVar11 = 0x3f800000;
    uVar10 = 0x3d088889;
    uVar4 = 1;
    sVar2 = FUN_00dde2d0(0,2);
    FUN_00aa4080(sVar2 + 0x61,uVar4,uVar10,uVar11,uVar12,uVar13,uVar15);
  }
  param_1[0x373] = 0;
  if (((uVar3 == 0x80020) || (uVar3 == 0x80021)) || (uVar3 == 0x80022)) {
    pcVar1 = *(code **)(*param_1 + 0x314);
    param_1[0x225] = 0;
    (*pcVar1)();
  }
  if ((uVar3 & 0xffff0000) != 0x80000) {
    iVar6 = FUN_00a8cab0();
    param_1[0x375] = iVar6;
    param_1[0x376] = param_1[0x374];
  }
  FUN_00a8caf0(uVar3,0,0,0);
  param_1[0x374] = 0;
  FUN_00a962d0(0,0);
  param_1[0x4b3] = 0;
  return;
}

// 00458E20  FUN_00458e20  size=945  [between]
void __fastcall FUN_00458e20(int *param_1)

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
    uVar2 = FUN_00e00b40(0x20060,puVar6);
    FUN_00a8c930(uVar2,puVar6);
    FUN_00e5e0c0("em0060_se_dmg_faint_spark",param_1,0xffffffff,0);
    FUN_00a8c9b0(0,0,0x3f800000,0);
    FUN_00eaa6e0(0x3f800000,0);
    FUN_0043f5b0(9,0x41200000);
    FUN_00440e80();
    FUN_00eaa6e0(0x41200000,0);
    FUN_00eaa6e0(0x41200000,0);
    FUN_00eaa6e0(0x41200000,0);
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 == 0) {
switchD_00458e40_default:
      return;
    }
    break;
  case 2:
    param_1[0x187] = 3;
    FUN_00aa4080(0x76,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x24f] = 0x42f00000;
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
      FUN_00a8caf0(0x80029,0,0,0);
      param_1[0x374] = 0;
      FUN_00a962d0(0,0);
      param_1[0x4b3] = 0;
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
    piVar5 = param_1 + 0x54c;
    uVar2 = FUN_00a7c8a0(piVar5);
    FUN_004117d0(7,uVar2,piVar5);
    puVar6 = local_160;
    uVar2 = FUN_00e00b40(0x20060,puVar6);
    FUN_00a8c930(uVar2,puVar6);
    iVar3 = FUN_00e5e0c0("em0060_se_dmg_exp_death",param_1,0xffffffff,0);
    param_1[0x6dd] = iVar3;
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
    iVar3 = thunk_FUN_00e58ed0(param_1[0x6dd]);
    if (iVar3 == 0) {
      FUN_009fdde0();
      return;
    }
  default:
    goto switchD_00458e40_default;
  }
  param_1[0x187] = param_1[0x187] + 1;
  return;
}

// 004591F0  Em0060::R0_ExplodeDie  size=887  [class]
void __fastcall Em0060::R0_ExplodeDie(int *param_1)

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
        piVar3 = param_1 + 0x54c;
        uVar2 = FUN_00a7c8a0(piVar3);
        FUN_004117d0(7,uVar2,piVar3);
        puVar5 = local_160;
        uVar2 = FUN_00e00b40(0x20060,puVar5);
        FUN_00a8c930(uVar2,puVar5);
        param_1[0x1af] = 1;
        iVar1 = FUN_00e5e0c0("em0060_se_dmg_exp_death",param_1,0xffffffff,0);
        param_1[0x6dd] = iVar1;
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
      if (param_1[0x6c9] != 0) {
        iVar1 = FUN_00a81330();
        if (iVar1 == 0) {
          FUN_00dd5650(&DAT_0163db60);
          FUN_00450140();
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
    iVar1 = thunk_FUN_00e58ed0(param_1[0x6dd]);
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

// 00459570  FUN_00459570  size=71  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00459570(int param_1)

{
  if ((*(int *)(*(int *)(param_1 + 0x78) + 4) != 0) && (*(int *)(*(int *)(param_1 + 0x78) + 8) != 0)
     ) {
    FUN_00454ce0();
    FUN_0044c3d0();
    FUN_0044c5b0();
    FUN_00454db0();
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(float *)(param_1 + 0xa0) = *(float *)(param_1 + 0xa0) - _DAT_01be942c;
  }
  return;
}

// 004595C0  FUN_004595c0  size=153  [callgraph]
undefined4 __fastcall FUN_004595c0(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_4;
  
  local_4 = *(undefined4 *)(param_1 + 0x4f0);
  iVar2 = FUN_00454c30(&local_4);
  if ((iVar2 == 1) && (*(float *)(param_1 + 0x1b4c) <= 0.0)) {
    sVar1 = FUN_00dde2d0(0,100);
    if (sVar1 == 0) {
      uVar3 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xdd4) = uVar3;
      *(undefined4 *)(param_1 + 0xdd8) = *(undefined4 *)(param_1 + 0xdd0);
      FUN_00a8caf0(0x10009,0,0,0);
      *(undefined4 *)(param_1 + 0xdd0) = 0;
      FUN_00a962d0(0,0);
      *(undefined4 *)(param_1 + 0x12cc) = 0;
      return 1;
    }
  }
  return 0;
}

// 00459660  FUN_00459660  size=1931  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00459a74) */
/* WARNING: Removing unreachable block (ram,0x0045994c) */
/* WARNING: Removing unreachable block (ram,0x00459a10) */
/* WARNING: Removing unreachable block (ram,0x00459b6d) */

undefined4 __fastcall FUN_00459660(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint local_4;
  
  local_4 = *(uint *)(param_1 + 0x4f0);
  iVar2 = FUN_00454c30(&local_4);
  if (iVar2 == 1) {
    fVar1 = *(float *)(param_1 + 0xaa0);
    if (!NAN(fVar1) && 0.6981317 < fVar1 != (fVar1 == 0.6981317)) {
      if (0.6981317 < *(float *)(param_1 + 0xa9c)) {
        iVar6 = 0x10006;
        if (*(int *)(param_1 + 0xdc8) != 0x10006) {
LAB_00459c7a:
          *(int *)(param_1 + 0xdc8) = iVar6;
          uVar4 = FUN_00a8cab0();
          *(undefined4 *)(param_1 + 0xdd4) = uVar4;
          *(undefined4 *)(param_1 + 0xdd8) = *(undefined4 *)(param_1 + 0xdd0);
          goto LAB_00459732;
        }
        goto LAB_00459d0d;
      }
      if (2.0943952 < *(float *)(param_1 + 0xa9c)) {
        iVar2 = 0x10008;
        if (*(int *)(param_1 + 0xdc8) == 0x10008) goto LAB_00459d0d;
        goto LAB_0045981a;
      }
      if (-2.0943952 <= *(float *)(param_1 + 0xa9c)) {
        iVar6 = 0x10005;
        if (*(int *)(param_1 + 0xdc8) != 0x10005) goto LAB_00459c7a;
        iVar2 = 0x10001;
        goto LAB_0045981a;
      }
      iVar2 = 0x10007;
      if (*(int *)(param_1 + 0xdc8) == 0x10007) goto LAB_00459d0d;
LAB_004598f2:
      *(int *)(param_1 + 0xdc8) = iVar2;
      uVar4 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xdd4) = uVar4;
      *(undefined4 *)(param_1 + 0xdd8) = *(undefined4 *)(param_1 + 0xdd0);
      iVar6 = iVar2;
      goto LAB_00459732;
    }
LAB_00459d0d:
    fVar1 = *(float *)(param_1 + 0x1b4c);
    if (((!NAN(fVar1) && 120.0 < fVar1 != (fVar1 == 120.0)) && (*(int *)(param_1 + 0xa84) != 0)) &&
       (iVar2 = FUN_0044d1f0(), iVar2 != 0)) {
      return 1;
    }
    if (*(float *)(param_1 + 0xa90) <= 225.0) {
      if (100.0 <= *(float *)(param_1 + 0xa90)) {
        return 0;
      }
      iVar2 = 0x10002;
LAB_00459dd7:
      if (*(int *)(param_1 + 0xdc8) == iVar2) {
        return 0;
      }
    }
    else {
      if ((((*(uint *)(param_1 + 0xd44) & 0x2000000) == 0) && (iVar2 = FUN_00aa4a90(), iVar2 != 0))
         && (iVar2 = 0xa0001, *(int *)(param_1 + 0xdc8) != 0xa0001)) {
LAB_00459afe:
        *(int *)(param_1 + 0xdc8) = iVar2;
        uVar4 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xdd4) = uVar4;
        *(undefined4 *)(param_1 + 0xdd8) = *(undefined4 *)(param_1 + 0xdd0);
        iVar6 = iVar2;
        goto LAB_00459732;
      }
      if (*(float *)(param_1 + 0xa90) <= 625.0) {
        iVar2 = 0xa0002;
        if (*(int *)(param_1 + 0xdc8) != 0xa0002) goto LAB_00459afe;
        iVar2 = 0xa0003;
LAB_00459bfb:
        *(int *)(param_1 + 0xdc8) = iVar2;
        uVar4 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xdd4) = uVar4;
        *(undefined4 *)(param_1 + 0xdd8) = *(undefined4 *)(param_1 + 0xdd0);
        iVar6 = iVar2;
        goto LAB_00459732;
      }
      iVar2 = 0xa0003;
      if (*(int *)(param_1 + 0xdc8) != 0xa0003) goto LAB_00459bfb;
      iVar2 = 0xa0002;
    }
LAB_00459ac6:
    *(int *)(param_1 + 0xdc8) = iVar2;
    uVar4 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xdd4) = uVar4;
    *(undefined4 *)(param_1 + 0xdd8) = *(undefined4 *)(param_1 + 0xdd0);
    iVar6 = iVar2;
  }
  else {
    if (iVar2 != 2) {
      if (iVar2 != 4) {
        return 0;
      }
      FUN_00455790(1);
      return 0;
    }
    iVar6 = 0x10004;
    fVar1 = *(float *)(param_1 + 0x16b0);
    iVar2 = 0x10003;
    if (((NAN(fVar1) || 120.0 < fVar1 == (fVar1 == 120.0)) || (*(float *)(param_1 + 0xa90) <= 36.0))
       || (0.5235988 <= *(float *)(param_1 + 0xaa0))) {
LAB_00459765:
      fVar1 = *(float *)(param_1 + 0x16b0);
      if (((NAN(fVar1) || 60.0 < fVar1 == (fVar1 == 60.0)) || (*(float *)(param_1 + 0xa90) <= 225.0)
          ) || (1.0471976 <= *(float *)(param_1 + 0xaa0))) {
LAB_004597e3:
        fVar1 = *(float *)(param_1 + 0xaa0);
        if (NAN(fVar1) || 0.7853982 < fVar1 == (fVar1 == 0.7853982)) {
LAB_00459923:
          iVar2 = 0x10003;
          DAT_01dd0814 = DAT_01dd0814 * 0x19660d + 0x3c6ef35f;
          local_4 = DAT_01dd0814 >> 8;
          fVar1 = (1.0 - (float)local_4 * 5.960465e-08 * 2.0) + 5.0;
          if (fVar1 * fVar1 < *(float *)(param_1 + 0xa90)) {
            if ((((*(uint *)(param_1 + 0xd44) & 0x2000000) == 0) &&
                (iVar3 = FUN_00aa4a90(), iVar3 != 0)) && (*(int *)(param_1 + 0xdc8) != 0x10004)) {
              *(undefined4 *)(param_1 + 0xdc8) = 0x10004;
              uVar4 = FUN_00a8cab0();
              *(undefined4 *)(param_1 + 0xdd4) = uVar4;
              *(undefined4 *)(param_1 + 0xdd8) = *(undefined4 *)(param_1 + 0xdd0);
              goto LAB_00459732;
            }
            if (*(int *)(param_1 + 0xdc8) != 0x10003) goto LAB_004598f2;
          }
          DAT_01dd0814 = DAT_01dd0814 * 0x19660d + 0x3c6ef35f;
          local_4 = DAT_01dd0814 >> 8;
          fVar1 = (1.0 - (float)local_4 * 5.960465e-08 * 2.0) + 4.0;
          if ((*(float *)(param_1 + 0xa90) <= fVar1 * fVar1) ||
             (iVar2 = 0x10001, *(int *)(param_1 + 0xdc8) == 0x10001)) {
            DAT_01dd0814 = DAT_01dd0814 * 0x19660d + 0x3c6ef35f;
            local_4 = DAT_01dd0814 >> 8;
            iVar2 = 0x1000d;
            fVar1 = (1.0 - (float)local_4 * 5.960465e-08 * 2.0) + 4.0;
            if (*(float *)(param_1 + 0xa90) < fVar1 * fVar1) {
              uVar5 = FUN_00dde2d0(1,100);
              if (((uVar5 & 1) == 0) || (*(int *)(param_1 + 0x1aac) == 0)) {
                if (*(int *)(param_1 + 0x1ab0) == 0) {
                  if ((*(int *)(param_1 + 0x1aac) != 0) && (*(int *)(param_1 + 0xdc8) != 0x1000d))
                  goto LAB_00459bfb;
                }
                else if (*(int *)(param_1 + 0xdc8) != 0x1000d) goto LAB_00459afe;
              }
              else if (*(int *)(param_1 + 0xdc8) != 0x1000d) goto LAB_00459ac6;
            }
            DAT_01dd0814 = DAT_01dd0814 * 0x19660d + 0x3c6ef35f;
            local_4 = DAT_01dd0814 >> 8;
            fVar1 = (1.0 - (float)local_4 * 5.960465e-08 * 2.0) + 3.0;
            if (fVar1 * fVar1 <= *(float *)(param_1 + 0xa90)) {
              return 0;
            }
            if ((*(int *)(param_1 + 0x1aa8) != 0) &&
               (iVar6 = 0x1000f, *(int *)(param_1 + 0xdc8) != 0x1000f)) {
              *(undefined4 *)(param_1 + 0xdc8) = 0x1000f;
              uVar4 = FUN_00a8cab0();
              *(undefined4 *)(param_1 + 0xdd4) = uVar4;
              *(undefined4 *)(param_1 + 0xdd8) = *(undefined4 *)(param_1 + 0xdd0);
              goto LAB_00459732;
            }
            uVar5 = FUN_00dde2d0(1,100);
            if (((uVar5 & 1) == 0) || (*(int *)(param_1 + 0x1aac) == 0)) {
              if (*(int *)(param_1 + 0x1ab0) != 0) {
                if (*(int *)(param_1 + 0xdc8) == 0x1000d) {
                  return 0;
                }
                goto LAB_00459bfb;
              }
              if (*(int *)(param_1 + 0x1aac) != 0) goto LAB_00459dd7;
              iVar2 = 0x10002;
            }
            if (*(int *)(param_1 + 0xdc8) == iVar2) {
              return 0;
            }
            goto LAB_00459afe;
          }
        }
        else {
          if (*(float *)(param_1 + 0xa9c) <= 0.7853982) {
            if (*(float *)(param_1 + 0xa9c) <= 2.0943952) {
              if (-2.0943952 <= *(float *)(param_1 + 0xa9c)) {
                iVar2 = 0x10005;
                if (*(int *)(param_1 + 0xdc8) == 0x10005) {
                  iVar2 = 0x10001;
                  goto LAB_004598f2;
                }
                goto LAB_0045981a;
              }
              iVar2 = 0x10007;
              if (*(int *)(param_1 + 0xdc8) != 0x10007) goto LAB_004598b0;
            }
            else if (*(int *)(param_1 + 0xdc8) != 0x10008) {
              *(undefined4 *)(param_1 + 0xdc8) = 0x10008;
              uVar4 = FUN_00a8cab0();
              *(undefined4 *)(param_1 + 0xdd4) = uVar4;
              *(undefined4 *)(param_1 + 0xdd8) = *(undefined4 *)(param_1 + 0xdd0);
              iVar6 = 0x10008;
              goto LAB_00459732;
            }
            goto LAB_00459923;
          }
          iVar2 = 0x10006;
          if (*(int *)(param_1 + 0xdc8) == 0x10006) goto LAB_00459923;
        }
LAB_0045981a:
        *(int *)(param_1 + 0xdc8) = iVar2;
        uVar4 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xdd4) = uVar4;
        *(undefined4 *)(param_1 + 0xdd8) = *(undefined4 *)(param_1 + 0xdd0);
        iVar6 = iVar2;
        goto LAB_00459732;
      }
      if ((((*(uint *)(param_1 + 0xd44) & 0x2000000) != 0) || (iVar3 = FUN_00aa4a90(), iVar3 == 0))
         || (*(int *)(param_1 + 0xdc8) == 0x10004)) {
        if (*(int *)(param_1 + 0xdc8) == 0x10003) goto LAB_004597e3;
LAB_004598b0:
        *(int *)(param_1 + 0xdc8) = iVar2;
        uVar4 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xdd4) = uVar4;
        *(undefined4 *)(param_1 + 0xdd8) = *(undefined4 *)(param_1 + 0xdd0);
        iVar6 = iVar2;
        goto LAB_00459732;
      }
      *(undefined4 *)(param_1 + 0xdc8) = 0x10004;
      uVar4 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xdd8) = *(undefined4 *)(param_1 + 0xdd0);
    }
    else {
      if ((((*(uint *)(param_1 + 0xd44) & 0x2000000) != 0) || (iVar3 = FUN_00aa4a90(), iVar3 == 0))
         || (*(int *)(param_1 + 0xdc8) == 0x10004)) {
        if (*(int *)(param_1 + 0xdc8) != 0x10003) goto LAB_0045981a;
        goto LAB_00459765;
      }
      *(undefined4 *)(param_1 + 0xdc8) = 0x10004;
      uVar4 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xdd8) = *(undefined4 *)(param_1 + 0xdd0);
    }
    *(undefined4 *)(param_1 + 0xdd4) = uVar4;
  }
LAB_00459732:
  FUN_00a8caf0(iVar6,0,0,0);
  *(undefined4 *)(param_1 + 0xdd0) = 0;
  FUN_00a962d0(0,0);
  *(undefined4 *)(param_1 + 0x12cc) = 0;
  return 1;
}

// 00459DF0  FUN_00459df0  size=592  [callgraph]
undefined4 __fastcall FUN_00459df0(int param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 local_4;
  
  local_4 = *(undefined4 *)(param_1 + 0x4f0);
  iVar2 = FUN_00454c30(&local_4);
  if (((iVar2 == 1) || (iVar2 != 2)) || (25.0 <= *(float *)(param_1 + 0xa90))) {
    return 0;
  }
  if ((*(int *)(param_1 + 0xde4) == 0) && (uVar3 = FUN_00dde2d0(1,100), (uVar3 & 3) == 0)) {
    return 0;
  }
  if (*(float *)(param_1 + 0xaa0) <= 0.7853982) {
    sVar1 = FUN_00dde2d0(0,4);
    iVar2 = (int)sVar1;
    if ((*(int *)(&DAT_0163dbac + iVar2 * 4) == 0x5000d) &&
       (iVar5 = FUN_0044ce70(*(undefined4 *)(param_1 + 0x19fc)), iVar5 == 0)) {
      sVar1 = FUN_00dde2d0(0,3);
      iVar2 = (int)sVar1;
    }
    iVar2 = FUN_0044d090(*(undefined4 *)(&DAT_0163dbac + iVar2 * 4));
    if (iVar2 != 0) {
      return 1;
    }
    return 0;
  }
  sVar1 = FUN_00dde2d0(0,1);
  if ((sVar1 == 0) || (uVar6 = 0x50007, *(int *)(param_1 + 0xdc4) == 0x50007)) {
    if ((0.7853982 < *(float *)(param_1 + 0xa9c)) &&
       (uVar6 = 0x50005, *(int *)(param_1 + 0xdc4) != 0x50005)) {
      *(undefined4 *)(param_1 + 0xdc4) = 0x50005;
      FUN_00c27260(0x40a00000);
      FUN_00c272a0(0x40a00000);
      uVar4 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xdd4) = uVar4;
      *(undefined4 *)(param_1 + 0xdd8) = *(undefined4 *)(param_1 + 0xdd0);
      goto LAB_00459fb7;
    }
    if ((*(float *)(param_1 + 0xaa0) <= 2.3561945) ||
       (uVar6 = 0x50006, *(int *)(param_1 + 0xdc4) == 0x50006)) {
      uVar6 = 0x50004;
      if (*(int *)(param_1 + 0xdc4) == 0x50004) {
        return 0;
      }
      goto LAB_00459f70;
    }
    *(undefined4 *)(param_1 + 0xdc4) = 0x50006;
    FUN_00c27260(0x40a00000);
    FUN_00c272a0(0x40a00000);
    uVar4 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xdd8) = *(undefined4 *)(param_1 + 0xdd0);
  }
  else {
LAB_00459f70:
    *(undefined4 *)(param_1 + 0xdc4) = uVar6;
    FUN_00c27260(0x40a00000);
    FUN_00c272a0(0x40a00000);
    uVar4 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xdd8) = *(undefined4 *)(param_1 + 0xdd0);
  }
  *(undefined4 *)(param_1 + 0xdd4) = uVar4;
LAB_00459fb7:
  FUN_00a8caf0(uVar6,0,0,0);
  *(undefined4 *)(param_1 + 0xdd0) = 0;
  FUN_00a962d0(0,0);
  *(undefined4 *)(param_1 + 0x12cc) = 0;
  return 1;
}

// 0045A040  FUN_0045a040  size=941  [callgraph]
undefined4 __fastcall FUN_0045a040(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float10 fVar5;
  float local_4;
  
  local_4 = *(float *)(param_1 + 0x4f0);
  iVar1 = FUN_00454c30(&local_4);
  if (iVar1 == 1) {
    if (0.0 < *(float *)(param_1 + 0x1b4c)) {
      return 0;
    }
    iVar1 = FUN_00ac4780();
    if (iVar1 < 2) {
      return 0;
    }
    uVar2 = FUN_00dde2d0(1,100);
    if (((uVar2 & 1) != 0) && (iVar1 = FUN_0044ce70(*(undefined4 *)(param_1 + 0x19fc)), iVar1 != 0))
    {
      uVar4 = 0x5000b;
      if (*(int *)(param_1 + 0xdc4) == 0x5000b) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0xdc4) = 0x5000b;
      FUN_00c27260(0x40a00000);
      FUN_00c272a0(0x40a00000);
      uVar3 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xdd4) = uVar3;
      *(undefined4 *)(param_1 + 0xdd8) = *(undefined4 *)(param_1 + 0xdd0);
      goto LAB_0045a174;
    }
    if (*(int *)(param_1 + 0x4a0) != 1) goto LAB_0045a2c4;
    uVar4 = 0x50009;
    if (*(int *)(param_1 + 0xdc4) == 0x50009) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0xdc4) = 0x50009;
    FUN_00c27260(0x40a00000);
    FUN_00c272a0(0x40a00000);
    uVar3 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xdd8) = *(undefined4 *)(param_1 + 0xdd0);
  }
  else {
    if (iVar1 != 2) {
      return 0;
    }
    if (0.0 < *(float *)(param_1 + 0x1b4c)) {
      return 0;
    }
    local_4 = 0.8;
    if (*(int *)(param_1 + 0x4a0) == 1) {
      local_4 = 0.5;
    }
    if ((((0.0 < *(float *)(param_1 + 0xdf8)) || (64.0 <= *(float *)(param_1 + 0xa90))) ||
        (fVar5 = (float10)FUN_00dde300(0,0x3f800000), (float10)local_4 <= fVar5)) ||
       (iVar1 = FUN_0044ce70(*(undefined4 *)(param_1 + 0x19fc)), iVar1 == 0)) {
LAB_0045a21e:
      if (*(float *)(param_1 + 0xa90) <= 4.0) {
        return 0;
      }
      if (*(int *)(param_1 + 0x4a0) == 1) {
        if (*(int *)(param_1 + 0xdc4) == 0x50009) {
          return 0;
        }
        *(undefined4 *)(param_1 + 0xdc4) = 0x50009;
        FUN_00c27260(0x40a00000);
        FUN_00c272a0(0x40a00000);
        uVar4 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xdd8) = *(undefined4 *)(param_1 + 0xdd0);
        *(undefined4 *)(param_1 + 0xdd4) = uVar4;
        FUN_00a8caf0(0x50009,0,0,0);
        *(undefined4 *)(param_1 + 0xdd0) = 0;
        FUN_00a962d0(0,0);
        *(undefined4 *)(param_1 + 0x12cc) = 0;
        return 1;
      }
LAB_0045a2c4:
      uVar4 = 0x50008;
      if (*(int *)(param_1 + 0xdc4) == 0x50008) {
        return 0;
      }
    }
    else {
      uVar2 = FUN_00dde2d0(1,100);
      if ((uVar2 & 1) == 0) {
        if (*(int *)(param_1 + 0xdc4) != 0x5000e) {
          *(undefined4 *)(param_1 + 0xdc4) = 0x5000e;
          FUN_00c27260(0x40a00000);
          FUN_00c272a0(0x40a00000);
          uVar4 = FUN_00a8cab0();
          *(undefined4 *)(param_1 + 0xdd4) = uVar4;
          *(undefined4 *)(param_1 + 0xdd8) = *(undefined4 *)(param_1 + 0xdd0);
          FUN_00a8caf0(0x5000e,0,0,0);
          *(undefined4 *)(param_1 + 0xdd0) = 0;
          FUN_00a962d0(0,0);
          *(undefined4 *)(param_1 + 0x12cc) = 0;
          return 1;
        }
        goto LAB_0045a21e;
      }
      uVar4 = 0x5000c;
      if (*(int *)(param_1 + 0xdc4) == 0x5000c) goto LAB_0045a21e;
    }
    *(undefined4 *)(param_1 + 0xdc4) = uVar4;
    FUN_00c27260(0x40a00000);
    FUN_00c272a0(0x40a00000);
    uVar3 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xdd8) = *(undefined4 *)(param_1 + 0xdd0);
  }
  *(undefined4 *)(param_1 + 0xdd4) = uVar3;
LAB_0045a174:
  FUN_00a8caf0(uVar4,0,0,0);
  *(undefined4 *)(param_1 + 0xdd0) = 0;
  FUN_00a962d0(0,0);
  *(undefined4 *)(param_1 + 0x12cc) = 0;
  return 1;
}

// 0045A3F0  FUN_0045a3f0  size=118  [callgraph]
undefined4 __fastcall FUN_0045a3f0(int param_1)

{
  int iVar1;
  undefined4 local_4;
  
  local_4 = *(undefined4 *)(param_1 + 0x4f0);
  iVar1 = FUN_00454c30(&local_4);
  if (iVar1 != 2) {
    return 0;
  }
  if (((float)*(int *)(param_1 + 0x1a80) <=
       *(float *)(param_1 + 0x1980 + *(int *)(param_1 + 0xde4) * 4)) &&
     ((float)*(int *)(param_1 + 0x1a84) <=
      *(float *)(param_1 + 0x1988 + *(int *)(param_1 + 0xde4) * 4))) {
    iVar1 = FUN_00459df0();
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x1a80) = *(int *)(param_1 + 0x1a80) + 1;
      return 1;
    }
  }
  return 0;
}

// 0045A470  FUN_0045a470  size=75  [callgraph]
undefined4 __fastcall FUN_0045a470(int param_1)

{
  int iVar1;
  
  if (((float)*(int *)(param_1 + 0x1a80) <=
       *(float *)(param_1 + 0x1980 + *(int *)(param_1 + 0xde4) * 4)) &&
     ((float)*(int *)(param_1 + 0x1a84) <=
      *(float *)(param_1 + 0x1988 + *(int *)(param_1 + 0xde4) * 4))) {
    iVar1 = FUN_00459660();
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x1a84) = *(int *)(param_1 + 0x1a84) + 1;
      return 1;
    }
  }
  return 0;
}

// 0045A4C0  FUN_0045a4c0  size=1072  [callgraph]
void __fastcall FUN_0045a4c0(int param_1)

{
  int iVar1;
  float10 fVar2;
  int local_4;
  
  local_4 = param_1;
  if (0.0 < *(float *)(param_1 + 0x1a50)) {
    fVar2 = (float10)FUN_00e049b0();
    fVar2 = (float10)*(float *)(param_1 + 0x1a50) - fVar2;
    *(float *)(param_1 + 0x1a50) = (float)fVar2;
    if ((float10)0 < fVar2) {
      if (*(int *)(param_1 + 0x1a34) <= *(int *)(param_1 + 0x1910 + *(int *)(param_1 + 0xde4) * 4))
      goto LAB_0045a527;
      *(undefined4 *)(param_1 + 0x1a18) = 1;
    }
    else {
      *(float *)(param_1 + 0x1a50) = (float)(float10)0;
    }
    *(undefined4 *)(param_1 + 0x1a34) = 0;
  }
LAB_0045a527:
  if (0.0 < *(float *)(param_1 + 0x1a7c)) {
    fVar2 = (float10)FUN_00e049b0();
    fVar2 = (float10)*(float *)(param_1 + 0x1a7c) - fVar2;
    *(float *)(param_1 + 0x1a7c) = (float)fVar2;
    if (fVar2 <= (float10)0) {
      *(float *)(param_1 + 0x1a7c) = (float)(float10)0;
    }
  }
  if (0.0 < *(float *)(param_1 + 0x1a54)) {
    fVar2 = (float10)FUN_00e049b0();
    fVar2 = (float10)*(float *)(param_1 + 0x1a54) - fVar2;
    *(float *)(param_1 + 0x1a54) = (float)fVar2;
    if ((float10)0 < fVar2) {
      if (*(int *)(param_1 + 0x1a38) <= *(int *)(param_1 + 0x1920 + *(int *)(param_1 + 0xde4) * 4))
      goto LAB_0045a5ba;
      *(undefined4 *)(param_1 + 0x1a1c) = 1;
    }
    else {
      *(float *)(param_1 + 0x1a54) = (float)(float10)0;
    }
    *(undefined4 *)(param_1 + 0x1a38) = 0;
  }
LAB_0045a5ba:
  if (0.0 < *(float *)(param_1 + 0x1a58)) {
    fVar2 = (float10)FUN_00e049b0();
    fVar2 = (float10)*(float *)(param_1 + 0x1a58) - fVar2;
    *(float *)(param_1 + 0x1a58) = (float)fVar2;
    if ((float10)0 < fVar2) {
      if (*(int *)(param_1 + 0x1a3c) <= *(int *)(param_1 + 0x1900)) goto LAB_0045a60e;
      *(undefined4 *)(param_1 + 0x1a20) = 1;
    }
    else {
      *(float *)(param_1 + 0x1a58) = (float)(float10)0;
    }
    *(undefined4 *)(param_1 + 0x1a3c) = 0;
  }
LAB_0045a60e:
  if (0.0 < *(float *)(param_1 + 0x1a5c)) {
    fVar2 = (float10)FUN_00e049b0();
    fVar2 = (float10)*(float *)(param_1 + 0x1a5c) - fVar2;
    *(float *)(param_1 + 0x1a5c) = (float)fVar2;
    if ((float10)0 < fVar2) {
      if (*(int *)(param_1 + 0x1a40) <= *(int *)(param_1 + 0x1930 + *(int *)(param_1 + 0xde4) * 4))
      goto LAB_0045a669;
      *(undefined4 *)(param_1 + 0x1a24) = 1;
    }
    else {
      *(float *)(param_1 + 0x1a5c) = (float)(float10)0;
    }
    *(undefined4 *)(param_1 + 0x1a40) = 0;
  }
LAB_0045a669:
  if (0.0 < *(float *)(param_1 + 0x1a60)) {
    fVar2 = (float10)FUN_00e049b0();
    fVar2 = (float10)*(float *)(param_1 + 0x1a60) - fVar2;
    *(float *)(param_1 + 0x1a60) = (float)fVar2;
    if ((float10)0 < fVar2) {
      if (*(int *)(param_1 + 0x1a44) <= *(int *)(param_1 + 0x1940 + *(int *)(param_1 + 0xde4) * 4))
      goto LAB_0045a6c4;
      *(undefined4 *)(param_1 + 0x1a28) = 1;
    }
    else {
      *(float *)(param_1 + 0x1a60) = (float)(float10)0;
    }
    *(undefined4 *)(param_1 + 0x1a44) = 0;
  }
LAB_0045a6c4:
  if (0.0 < *(float *)(param_1 + 0x1a64)) {
    fVar2 = (float10)FUN_00e049b0();
    fVar2 = (float10)*(float *)(param_1 + 0x1a64) - fVar2;
    *(float *)(param_1 + 0x1a64) = (float)fVar2;
    if ((float10)0 < fVar2) {
      if (*(int *)(param_1 + 0x1a48) <= *(int *)(param_1 + 0x1950 + *(int *)(param_1 + 0xde4) * 4))
      goto LAB_0045a71f;
      *(undefined4 *)(param_1 + 0x1a2c) = 1;
    }
    else {
      *(float *)(param_1 + 0x1a64) = (float)(float10)0;
    }
    *(undefined4 *)(param_1 + 0x1a48) = 0;
  }
LAB_0045a71f:
  if (0.0 < *(float *)(param_1 + 0x1a68)) {
    fVar2 = (float10)FUN_00e049b0();
    fVar2 = (float10)*(float *)(param_1 + 0x1a68) - fVar2;
    *(float *)(param_1 + 0x1a68) = (float)fVar2;
    if ((float10)0 < fVar2) {
      if (*(int *)(param_1 + 0x1a4c) <= *(int *)(param_1 + 0x1960 + *(int *)(param_1 + 0xde4) * 4))
      goto LAB_0045a77a;
      *(undefined4 *)(param_1 + 0x1a30) = 1;
    }
    else {
      *(float *)(param_1 + 0x1a68) = (float)(float10)0;
    }
    *(undefined4 *)(param_1 + 0x1a4c) = 0;
  }
LAB_0045a77a:
  if (0.0 < *(float *)(param_1 + 0x1a6c)) {
    fVar2 = (float10)FUN_00e049b0();
    fVar2 = (float10)*(float *)(param_1 + 0x1a6c) - fVar2;
    *(float *)(param_1 + 0x1a6c) = (float)fVar2;
    if (fVar2 <= (float10)0) {
      *(float *)(param_1 + 0x1a6c) = (float)(float10)0;
    }
  }
  if (0.0 < *(float *)(param_1 + 0x1a74)) {
    fVar2 = (float10)FUN_00e049b0();
    fVar2 = (float10)*(float *)(param_1 + 0x1a74) - fVar2;
    *(float *)(param_1 + 0x1a74) = (float)fVar2;
    if ((float10)0 < fVar2) {
      if (*(int *)(param_1 + 0x1a78) <= *(int *)(param_1 + 0x1998 + *(int *)(param_1 + 0xde4) * 4))
      goto LAB_0045a80d;
      *(undefined4 *)(param_1 + 0x1a70) = 1;
    }
    else {
      *(float *)(param_1 + 0x1a74) = (float)(float10)0;
    }
    *(undefined4 *)(param_1 + 0x1a78) = 0;
  }
LAB_0045a80d:
  if (*(int *)(param_1 + 0x1a0c) != 0) {
    return;
  }
  if (*(int *)(param_1 + 0x1a08) != 0) {
    return;
  }
  if (*(float *)(param_1 + 0x190c) <= *(float *)(param_1 + 0x1a14)) {
    return;
  }
  fVar2 = (float10)FUN_00e049b0();
  local_4 = *(int *)(param_1 + 0x4f0);
  *(float *)(param_1 + 0x1a14) = (float)(fVar2 + (float10)*(float *)(param_1 + 0x1a14));
  iVar1 = FUN_00454c30(&local_4);
  if (iVar1 != 2) {
    local_4 = *(int *)(param_1 + 0x4f0);
    iVar1 = FUN_00454bd0(&local_4);
    if (((iVar1 != 0xb) && (iVar1 = FUN_004557e0(), iVar1 != 2)) && (*(int *)(param_1 + 0xde4) == 0)
       ) goto LAB_0045a8aa;
  }
  *(undefined4 *)(param_1 + 0x1a14) = 0;
LAB_0045a8aa:
  if (*(float *)(param_1 + 0x190c) < *(float *)(param_1 + 0x1a14)) {
    *(undefined4 *)(param_1 + 0x1a14) = 0;
    *(undefined4 *)(param_1 + 0x1a0c) = 1;
    if (*(int *)(param_1 + 0x1908) < *(int *)(param_1 + 0x1a10)) {
      *(undefined4 *)(param_1 + 0x1a0c) = 0;
      *(undefined4 *)(param_1 + 0x1a08) = 1;
      *(undefined4 *)(param_1 + 0x1a10) = 0;
    }
  }
  return;
}

// 0045A8F0  FUN_0045a8f0  size=595  [callgraph]
void __fastcall FUN_0045a8f0(int *param_1)

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
    param_1[0x4db] = param_1[0x4db] ^ 0x8000000;
    FUN_00aa4080(0x33,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
    param_1[0x5a6] = 0;
    FUN_00a8d280();
  }
  else if (param_1[0x187] != 1) goto LAB_0045a9cc;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar5 = FUN_00a94ce0(0);
  if (iVar5 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    sVar4 = FUN_00dde2d0(1,3);
    piStack_4 = (int *)(int)sVar4;
    param_1[0x5a9] = (int)((float)(int)piStack_4 * 60.0);
    if (param_1[0x379] != 0) {
      param_1[0x5a9] = 0x41f00000;
    }
  }
LAB_0045a9cc:
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
         (int)((float)param_1[0x14] +
              (*(float *)(param_1[0x2a1] + 0x40) - *(float *)(iVar5 + 0x40)) * 0.1);
    param_1[0x16] = (int)((fVar1 - fVar2) * 0.1 + (float)param_1[0x16]);
    (*pcVar3)(0x3e99999a,0x393702d3,0x3c0efa35,0);
  }
  iVar5 = FUN_00a8c760(4);
  if ((iVar5 != 0) && (param_1[0x379] != 0)) {
    piStack_4 = (int *)param_1[0x13c];
    iVar5 = FUN_00454c30(&piStack_4);
    if (iVar5 == 0) {
      sVar4 = FUN_00dde2d0(0,2);
      if (sVar4 != 0) {
        FUN_00448640();
      }
      sVar4 = FUN_00dde2d0(0,1);
      if (sVar4 != 0) {
        FUN_00457560();
        return;
      }
    }
  }
  return;
}

// 0045AB50  FUN_0045ab50  size=1032  [callgraph]
void __fastcall FUN_0045ab50(int *param_1)

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
    param_1[0x4db] = param_1[0x4db] ^ 0x8000000;
    FUN_00aa4080(0x34,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
    param_1[0x5a6] = 0;
    FUN_00a8d280();
  }
  else if (param_1[0x187] != 1) goto LAB_0045ab77;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar5 = FUN_00a94ce0(0);
  if (iVar5 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    sVar4 = FUN_00dde2d0(1,3);
    param_1[0x5a9] = (int)((float)(int)sVar4 * 60.0);
    if (param_1[0x379] != 0) {
      param_1[0x5a9] = 0x41f00000;
    }
    piStack_4 = (int *)param_1[0x13c];
    iVar5 = FUN_00454c30(&piStack_4);
    if ((iVar5 == 0) && ((float)param_1[0x2a4] < 9.0)) {
      iVar5 = FUN_00a8cab0();
      param_1[0x375] = iVar5;
      param_1[0x376] = param_1[0x374];
      FUN_00a8caf0(0x50002,0,0,0);
      param_1[0x374] = 0;
      FUN_00a962d0(0,0);
      param_1[0x4b3] = 0;
      if ((float)param_1[0x2a8] <= 1.0471976) {
        return;
      }
      iVar5 = FUN_00a8cab0();
      param_1[0x376] = param_1[0x374];
      param_1[0x375] = iVar5;
      FUN_00a8caf0(0x50004,0,0,0);
      param_1[0x374] = 0;
      FUN_00a962d0(0,0);
      param_1[0x4b3] = 0;
      if (1.0471976 < (float)param_1[0x2a7]) {
        iVar5 = FUN_00a8cab0();
        param_1[0x375] = iVar5;
        param_1[0x376] = param_1[0x374];
        FUN_00a8caf0(0x50005,0,0,0);
        param_1[0x374] = 0;
        FUN_00a962d0(0,0);
        param_1[0x4b3] = 0;
      }
      if (2.0943952 < (float)param_1[0x2a8]) {
        iVar5 = FUN_00a8cab0();
        param_1[0x375] = iVar5;
        param_1[0x376] = param_1[0x374];
        FUN_00a8caf0(0x50006,0,0,0);
        param_1[0x374] = 0;
        FUN_00a962d0(0,0);
        param_1[0x4b3] = 0;
      }
      sVar4 = FUN_00dde2d0(0,3);
      if (sVar4 != 1) {
        return;
      }
      iVar5 = FUN_00a8cab0();
      param_1[0x376] = param_1[0x374];
      param_1[0x375] = iVar5;
      FUN_00a8caf0(0x50007,0,0,0);
      param_1[0x374] = 0;
      FUN_00a962d0(0,0);
      param_1[0x4b3] = 0;
      return;
    }
  }
LAB_0045ab77:
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
  iVar5 = FUN_00454c30(&piStack_4);
  if (((iVar5 == 0) && (iVar5 = FUN_00a8c760(4), iVar5 != 0)) && (param_1[0x379] != 0)) {
    sVar4 = FUN_00dde2d0(0,2);
    if (sVar4 != 0) {
      FUN_00448640();
    }
    sVar4 = FUN_00dde2d0(0,1);
    if (sVar4 != 0) {
      FUN_00457560();
      return;
    }
  }
  return;
}

// 0045AF60  FUN_0045af60  size=511  [callgraph]
void __fastcall FUN_0045af60(int *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int *local_4;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  local_4 = param_1;
  if (param_1[0x187] == 0) {
    param_1[0x4db] = param_1[0x4db] ^ 0x8000000;
    FUN_00aa4080(0x36,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
    param_1[0x5a6] = 0;
    FUN_00a8d280();
  }
  else if (param_1[0x187] != 1) goto LAB_0045b0ac;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    sVar1 = FUN_00dde2d0(1,3);
    local_4 = (int *)(int)sVar1;
    param_1[0x5a9] = (int)((float)(int)local_4 * 60.0);
    if (param_1[0x379] != 0) {
      param_1[0x5a9] = 0x41f00000;
    }
  }
  iVar2 = FUN_00a8c760(10);
  if ((iVar2 != 0) && (param_1[0x5a6] != 0)) {
    if (param_1[0x379] == 0) {
      iVar2 = FUN_00a8cab0();
      param_1[0x376] = param_1[0x374];
      uVar3 = 0xf0001;
    }
    else {
      iVar2 = FUN_00a8cab0();
      param_1[0x376] = param_1[0x374];
      uVar3 = 0x50003;
    }
    param_1[0x375] = iVar2;
    FUN_00a8caf0(uVar3,0,0,0);
    param_1[0x374] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4b3] = 0;
  }
LAB_0045b0ac:
  iVar2 = FUN_00a8c760(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3db2b8c2,0);
  }
  local_4 = (int *)param_1[0x13c];
  iVar2 = FUN_00454c30(&local_4);
  if ((((iVar2 == 0) && (param_1[0x5a6] == 0)) && (iVar2 = FUN_00a8c760(4), iVar2 != 0)) &&
     (param_1[0x379] != 0)) {
    sVar1 = FUN_00dde2d0(0,2);
    if (sVar1 != 0) {
      FUN_00448640();
    }
    sVar1 = FUN_00dde2d0(0,1);
    if (sVar1 != 0) {
      FUN_00457560();
      return;
    }
  }
  return;
}

// 0045B160  FUN_0045b160  size=482  [callgraph]
void __fastcall FUN_0045b160(int *param_1)

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
    param_1[0x5a6] = 0;
  }
  else if (param_1[0x187] != 1) goto LAB_0045b27d;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    sVar1 = FUN_00dde2d0(1,3);
    local_4 = (int)sVar1;
    param_1[0x5a9] = (int)((float)local_4 * 60.0);
    if (param_1[0x379] != 0) {
      param_1[0x5a9] = 0x41f00000;
    }
  }
LAB_0045b27d:
  iVar2 = FUN_00a8c760(0);
  if ((iVar2 != 0) && (iVar2 = (**(code **)(*(int *)param_1[0x2a1] + 0x228))(), iVar2 != 0)) {
    (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3e8efa35,local_8);
  }
  local_4 = param_1[0x13c];
  iVar2 = FUN_00454c30(&local_4);
  if (((iVar2 == 0) && (iVar2 = FUN_00a8c760(4), iVar2 != 0)) && (param_1[0x379] != 0)) {
    sVar1 = FUN_00dde2d0(0,2);
    if (sVar1 != 0) {
      FUN_00448640();
    }
    sVar1 = FUN_00dde2d0(0,1);
    if (sVar1 != 0) {
      FUN_00457560();
      return;
    }
  }
  return;
}

// 0045B350  FUN_0045b350  size=1659  [callgraph]
void __fastcall FUN_0045b350(int *param_1)

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
    FUN_0044bce0(&fStack_20,param_1[0x13c]);
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
    param_1[0x4d0] = (int)(fStack_20 + fVar4 * 2.5);
    param_1[0x4d1] = (int)(fStack_1c + fVar3 * 2.5);
    param_1[0x4d2] = (int)(fStack_18 + fVar2 * 2.5);
    param_1[0x4d3] = (int)(fStack_24 * 2.5 + fStack_14);
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar6 = FUN_00a94ce0(0);
    if (iVar6 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    FUN_00a8e880(param_1 + 0x4d0);
    FUN_0044c1a0(param_1[0x13c],0x3e99999a,0x393702d3,0x3e8efa35,0);
    return;
  case 2:
    (**(code **)(*param_1 + 0x1d4))(1);
    FUN_00aa4080(0x1d,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0044bce0(&fStack_20,param_1[0x13c]);
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
    param_1[0x4d0] = (int)(fStack_20 + fVar4 * 2.5);
    param_1[0x4d1] = (int)(fStack_1c + fVar3 * 2.5);
    param_1[0x4d2] = (int)(fStack_18 + fVar2 * 2.5);
    param_1[0x4d3] = (int)(fStack_24 * 2.5 + fStack_14);
    FUN_00456950(param_1 + 0x4b5,param_1 + 0x10,param_1 + 0x4d0);
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
    FUN_00a8e880(param_1 + 0x4d0);
    FUN_0044c1a0(param_1[0x13c],0x3dcccccd,0x393702d3,0x3d8efa35,0);
    return;
  case 4:
    FUN_00aa4080(0x1e,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_0045b757;
  case 5:
LAB_0045b757:
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

// 0045BA20  FUN_0045ba20  size=1388  [callgraph]
void __fastcall FUN_0045ba20(int *param_1)

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
      FUN_00442250(&local_40,0x3e800000,0x3dd67750);
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
    else if (param_1[0x372] != 0x10003) {
      param_1[0x372] = 0x10003;
      iVar3 = FUN_00a8cab0();
      param_1[0x375] = iVar3;
      param_1[0x376] = param_1[0x374];
LAB_0045bb61:
      FUN_00a8caf0(0x10003,0,0,0);
      param_1[0x374] = 0;
      FUN_00a962d0(0,0);
      param_1[0x4b3] = 0;
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
        goto LAB_0045bc67;
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
      FUN_00442250(&local_20,0x3e99999a,0x3e32b8c2);
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
        if (param_1[0x372] == 0x10003) {
          return;
        }
        param_1[0x372] = 0x10003;
        iVar3 = FUN_00a8cab0();
        param_1[0x375] = iVar3;
        param_1[0x376] = param_1[0x374];
        goto LAB_0045bb61;
      }
      iVar3 = FUN_00a8d3d0(5);
      if (((iVar3 != 0) || (iVar3 = FUN_00a8d3d0(10), iVar3 != 0)) ||
         ((iVar3 = FUN_00a8d3d0(8), iVar3 != 0 || (iVar3 = FUN_00a8d3d0(7), iVar3 != 0)))) {
        FUN_00a979f0(&local_4c);
LAB_0045bc67:
        local_30 = local_4c;
        local_2c = local_48;
        local_28 = local_44;
        local_24 = 0x3f800000;
        FUN_00442310(&local_30);
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
    FUN_00457a10(&local_50);
    if (local_50 != 0) {
      param_1[0x24f] = 0x41c80000;
      FUN_00c70800();
      param_1[0x187] = 2;
      FUN_00aa4080(0x11,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    }
  }
  return;
}

// 0045BFA0  FUN_0045bfa0  size=1332  [callgraph]
void __fastcall FUN_0045bfa0(int *param_1)

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
    FUN_0044ba50(&fStack_20,param_1[0x13c]);
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
    param_1[0x4d0] = (int)(fStack_20 + fVar4 * 2.5);
    param_1[0x4d1] = (int)(fStack_1c + fVar3 * 2.5);
    param_1[0x4d2] = (int)(fStack_18 + fVar2 * 2.5);
    param_1[0x4d3] = (int)(fStack_24 * 2.5 + fStack_14);
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    FUN_00a8e880(param_1 + 0x4d0);
    FUN_0044bb10(param_1[0x13c],0x3e99999a,0x393702d3,0x3e8efa35,0);
    return;
  case 2:
    (**(code **)(*param_1 + 0x1d4))(1);
    FUN_00aa4080(0x1d,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_0044ba50(&fStack_20,param_1[0x13c]);
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
    param_1[0x4d0] = (int)(fStack_20 + fVar4 * 2.5);
    param_1[0x4d1] = (int)(fStack_1c + fVar3 * 2.5);
    param_1[0x4d2] = (int)(fStack_18 + fVar2 * 2.5);
    param_1[0x4d3] = (int)(fStack_24 * 2.5 + fStack_14);
    FUN_00456950(param_1 + 0x4b5,param_1 + 0x10,param_1 + 0x4d0);
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
    FUN_00a8e880(param_1 + 0x4d0);
    FUN_0044bb10(param_1[0x13c],0x3dcccccd,0x393702d3,0x3d8efa35,0);
    return;
  case 4:
    FUN_00aa4080(0x1e,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 5:
    break;
  default:
    goto switchD_0045bfca_default;
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
    param_1[0x375] = iVar5;
    param_1[0x376] = param_1[0x374];
    FUN_00a8caf0(0x10012,0,0,0);
    param_1[0x374] = 0;
    FUN_00a962d0(0,0);
    pcVar1 = *(code **)(*param_1 + 0x314);
    param_1[0x4b3] = 0;
    (*pcVar1)();
    iVar5 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar5 != 0) {
      iVar5 = FUN_00a8cab0();
      param_1[0x375] = iVar5;
      param_1[0x376] = param_1[0x374];
      FUN_00a8caf0(0x10013,0,0,0);
      param_1[0x374] = 0;
      FUN_00a962d0(0,0);
      param_1[0x4b3] = 0;
      return;
    }
  }
switchD_0045bfca_default:
  return;
}

// 0045C670  Em0060::vf48  size=1029  [class]
/* WARNING: Removing unreachable block (ram,0x0045c7c2) */

void __fastcall Em0060::vf48(int *param_1)

{
  float fVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  int local_58;
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
  
  if (0.0 < (float)param_1[0x6e7]) {
    fVar1 = (float)param_1[0x6e7] - (float)param_1[0x244];
    param_1[0x6e7] = (int)fVar1;
    if (fVar1 < 0.0 != (fVar1 == 0.0)) {
      param_1[0x6e6] = 0;
      param_1[0x6e7] = -0x40800000;
    }
  }
  param_1[0x61a] = 0;
  param_1[0x6e4] = (int)((float)param_1[0x6e4] - (float)param_1[0x244]);
  if (0.0 < (float)param_1[0x61b]) {
    fVar7 = (float10)FUN_00e049b0();
    param_1[0x61b] = (int)(float)((float10)(float)param_1[0x61b] - fVar7);
  }
  if (param_1[0x634] == 0) {
    iVar6 = 1;
    piVar2 = param_1 + 0x61c;
    iVar4 = 6;
    do {
      if (*piVar2 == 0) {
        iVar6 = 0;
      }
      piVar2 = piVar2 + 4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    param_1[0x634] = iVar6;
  }
  piVar2 = param_1 + 0x4d5;
  local_58 = 3;
  do {
    if ((*piVar2 != 0) && (param_1[0x2a2] != 0)) {
      uVar3 = FUN_00a7c7f0();
      FUN_00a7c960(uVar3);
    }
    piVar2 = piVar2 + 1;
    local_58 = local_58 + -1;
  } while (local_58 != 0);
  param_1[0x6ae] = 1;
  iVar4 = FUN_00907640(param_1 + 0x6af,&local_54,local_20);
  if (iVar4 != 0) {
    iVar4 = 0;
    param_1[0x6ae] = 0;
    FUN_0112bcf0();
    if (0 < *(int *)(local_54 + 0x14)) {
      iVar6 = *(int *)(*(int *)(local_54 + 0x10) + 0x28);
      iVar5 = 0;
      if (*(char *)(iVar6 + 0x18) == '\x01') {
        iVar5 = *(char *)(iVar6 + 0x10) + iVar6;
      }
      if (*(char *)(iVar6 + 0x18) == '\x02') {
        if (*(char *)(iVar6 + 0x18) == '\x02') {
          iVar4 = *(char *)(iVar6 + 0x10) + iVar6;
        }
        else {
          iVar4 = 0;
        }
      }
      if (iVar5 != 0) {
        iVar6 = FUN_008f7780(iVar5);
        if ((param_1[0x2a1] != 0) && (iVar6 == param_1[0x2a1])) {
          param_1[0x6ae] = 1;
        }
      }
      if (iVar4 != 0) {
        iVar4 = FUN_008f7780(iVar4);
        if ((param_1[0x2a1] != 0) && (iVar4 == param_1[0x2a1])) {
          param_1[0x6ae] = 1;
        }
      }
    }
  }
  if (param_1[0x2a1] != 0) {
    FUN_00a8d230(&local_40);
    iVar4 = FUN_00a12210(0);
    local_50 = *(float *)(iVar4 + 0x40);
    local_48 = *(float *)(iVar4 + 0x48);
    local_44 = *(float *)(iVar4 + 0x4c);
    local_4c = *(float *)(iVar4 + 0x44) + 0.6;
    local_30 = local_40 - local_50;
    local_2c = local_3c - local_4c;
    local_28 = local_38 - local_48;
    local_24 = local_34 - local_44;
    iVar4 = FUN_009f8b40();
    FUN_0090fa30(param_1 + 0x6af,0,&local_50,0x3f000000,&local_30,iVar4 << 0x10 | 7,"Em0060");
  }
  FUN_00450400();
  fVar1 = (float)param_1[0x5a9];
  if (!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) {
    param_1[0x5a9] = (int)((float)param_1[0x5a9] - (float)param_1[0x244]);
  }
  if (0.0 < (float)param_1[0x5aa] != ((float)param_1[0x5aa] == 0.0)) {
    param_1[0x5aa] = (int)((float)param_1[0x5aa] - (float)param_1[0x244]);
  }
  if (0.0 < (float)param_1[0x5ab] != ((float)param_1[0x5ab] == 0.0)) {
    param_1[0x5ab] = (int)((float)param_1[0x5ab] - (float)param_1[0x244]);
  }
  if (0.0 < (float)param_1[0x37c] != ((float)param_1[0x37c] == 0.0)) {
    param_1[0x37c] = (int)((float)param_1[0x37c] - (float)param_1[0x244]);
  }
  if (0.0 < (float)param_1[0x5a8] != ((float)param_1[0x5a8] == 0.0)) {
    param_1[0x5a8] = (int)((float)param_1[0x5a8] - (float)param_1[0x244]);
  }
  if (((int *)param_1[0x2a1] == (int *)0x0) ||
     (iVar4 = (**(code **)(*(int *)param_1[0x2a1] + 0x330))(), iVar4 == 0)) {
    param_1[0x5ac] = 0;
  }
  else {
    param_1[0x5ac] = (int)((float)param_1[0x5ac] + (float)param_1[0x244]);
  }
  if (((*(byte *)((int)param_1 + 0x136f) & 1) != 0) &&
     (fVar1 = (float)param_1[0x6dc], param_1[0x6dc] = (int)(fVar1 - (float)param_1[0x244]),
     fVar1 - (float)param_1[0x244] < 0.0)) {
    (**(code **)(*param_1 + 0x110))(0);
  }
  FUN_00449170();
  FUN_0045a4c0();
  iVar4 = FUN_00a8c760(0x37);
  param_1[0x6cb] = iVar4;
  iVar4 = FUN_00a8c760(0x38);
  param_1[0x6cc] = iVar4;
  FUN_00448ae0();
  iVar4 = FUN_00ac48f0(0);
  if (iVar4 == 0) {
    fVar1 = (float)param_1[0x6d3] + (float)param_1[0x244];
  }
  else {
    fVar1 = 0.0;
  }
  param_1[0x6d3] = (int)fVar1;
  if ((param_1[0x351] & 0x2000000U) != 0) {
    param_1[0x6d8] = (int)((float)param_1[0x6d8] + (float)param_1[0x244]);
    BehaviorEmBase::vf48();
    return;
  }
  param_1[0x6d8] = 0;
  BehaviorEmBase::vf48();
  return;
}

// 0045CA80  Em0060::vf54  size=16  [class]
void Em0060::vf54(void)

{
  FUN_00457070();
  BehaviorEmBase::vf54();
  return;
}

// 0045CA90  FUN_0045ca90  size=1250  [between]
void __fastcall FUN_0045ca90(int param_1)

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
    if (*(int *)(param_1 + 0xdd4) == 0x10003) {
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
      FUN_00442250(&local_40,0x3e800000,0x3dd67750);
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
    else if (*(int *)(param_1 + 0xdc8) != 0x10003) {
      *(undefined4 *)(param_1 + 0xdc8) = 0x10003;
      uVar6 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xdd8) = *(undefined4 *)(param_1 + 0xdd0);
LAB_0045cc24:
      *(undefined4 *)(param_1 + 0xdd4) = uVar6;
      FUN_00a8caf0(0x10003,0,0,0);
      *(undefined4 *)(param_1 + 0xdd0) = 0;
      FUN_00a962d0(0,0);
      *(undefined4 *)(param_1 + 0x12cc) = 0;
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
        goto LAB_0045cd25;
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
      FUN_00442250(&local_20,0x3e99999a,0x3e32b8c2);
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
LAB_0045cd25:
      local_30 = local_4c;
      local_2c = local_48;
      local_28 = local_44;
      local_24 = 0x3f800000;
      FUN_00442310(&local_30);
      *(undefined4 *)(param_1 + 0x61c) = 3;
      return;
    }
    if (*(int *)(param_1 + 0xdc8) == 0x10003) {
      return;
    }
    *(undefined4 *)(param_1 + 0xdc8) = 0x10003;
    uVar6 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xdd8) = *(undefined4 *)(param_1 + 0xdd0);
    goto LAB_0045cc24;
  case 3:
    local_50 = 0;
    FUN_00457a10(&local_50);
    if (local_50 != 0) {
      *(undefined4 *)(param_1 + 0x93c) = 0x41c80000;
      FUN_00c70800();
      *(undefined4 *)(param_1 + 0x61c) = 2;
      FUN_00aa4080(0x11,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    }
  }
  return;
}

// 0045CF90  FUN_0045cf90  size=488  [between]
void __fastcall FUN_0045cf90(int *param_1)

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
  else if (param_1[0x187] != 1) goto LAB_0045d0cc;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    local_4 = (int *)param_1[0x13c];
    iVar3 = FUN_00454c30(&local_4);
    if ((iVar3 == 0) && (sVar1 = FUN_00dde2d0(0,1), sVar1 != 0)) {
      FUN_00448640();
    }
  }
LAB_0045d0cc:
  local_4 = (int *)param_1[0x13c];
  iVar3 = FUN_00454c30(&local_4);
  if (((iVar3 == 0) && (iVar3 = FUN_00a8c760(4), iVar3 != 0)) && (param_1[0x379] != 0)) {
    sVar1 = FUN_00dde2d0(0,3);
    if (sVar1 != 0) {
      FUN_00448640();
    }
    if (((float)param_1[0x5a9] < 0.0) && (iVar3 = FUN_00457560(), iVar3 != 0)) {
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

// 0045D180  FUN_0045d180  size=488  [between]
void __fastcall FUN_0045d180(int *param_1)

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
  else if (param_1[0x187] != 1) goto LAB_0045d2bc;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    local_4 = (int *)param_1[0x13c];
    iVar3 = FUN_00454c30(&local_4);
    if ((iVar3 == 0) && (sVar1 = FUN_00dde2d0(0,1), sVar1 != 0)) {
      FUN_00448640();
    }
  }
LAB_0045d2bc:
  local_4 = (int *)param_1[0x13c];
  iVar3 = FUN_00454c30(&local_4);
  if (((iVar3 == 0) && (iVar3 = FUN_00a8c760(4), iVar3 != 0)) && (param_1[0x379] != 0)) {
    sVar1 = FUN_00dde2d0(0,3);
    if (sVar1 != 0) {
      FUN_00448640();
    }
    if (((float)param_1[0x5a9] < 0.0) && (iVar3 = FUN_00457560(), iVar3 != 0)) {
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

// 0045D370  FUN_0045d370  size=1117  [between]
void __fastcall FUN_0045d370(int *param_1)

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
  else if (param_1[0x187] != 1) goto LAB_0045d633;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar4 = FUN_00a94ce0(0);
  if (iVar4 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    local_4 = (int *)param_1[0x13c];
    iVar4 = FUN_00454c30(&local_4);
    if (iVar4 == 0) {
      if ((float)param_1[0x5a9] < 0.0) {
        FUN_00457560();
      }
      if (1.0471976 < (float)param_1[0x2a8]) {
        iVar4 = FUN_00a8cab0();
        param_1[0x375] = iVar4;
        param_1[0x376] = param_1[0x374];
        FUN_00a8caf0(0x10005,0,0,0);
        param_1[0x374] = 0;
        FUN_00a962d0(0,0);
        param_1[0x4b3] = 0;
        if (1.0471976 < (float)param_1[0x2a7]) {
          iVar4 = FUN_00a8cab0();
          param_1[0x375] = iVar4;
          param_1[0x376] = param_1[0x374];
          FUN_00a8caf0(0x10006,0,0,0);
          param_1[0x374] = 0;
          FUN_00a962d0(0,0);
          param_1[0x4b3] = 0;
        }
        if (2.0943952 < (float)param_1[0x2a7]) {
          iVar4 = FUN_00a8cab0();
          param_1[0x376] = param_1[0x374];
          param_1[0x375] = iVar4;
          FUN_00a8caf0(0x10008,0,0,0);
          param_1[0x374] = 0;
          FUN_00a962d0(0,0);
          param_1[0x4b3] = 0;
        }
        if ((float)param_1[0x2a7] < -2.0943952) {
          iVar4 = FUN_00a8cab0();
          param_1[0x375] = iVar4;
          param_1[0x376] = param_1[0x374];
          FUN_00a8caf0(0x10007,0,0,0);
          param_1[0x374] = 0;
          FUN_00a962d0(0,0);
          param_1[0x4b3] = 0;
        }
      }
      sVar2 = FUN_00dde2d0(0,1);
      if (sVar2 != 0) {
        FUN_00448640();
      }
      if (((float)param_1[0x2a4] < 16.0) && (sVar2 = FUN_00dde2d0(0,1), sVar2 != 0)) {
        FUN_00448640();
      }
      if (((float)param_1[0x2a4] < 49.0) && (sVar2 = FUN_00dde2d0(0,1), sVar2 != 0)) {
        FUN_00457960();
      }
      fVar1 = (float)param_1[0x2a4];
      if (((!NAN(fVar1) && 49.0 < fVar1 != (fVar1 == 49.0)) && (param_1[0x128] == 1)) &&
         ((float)param_1[0x5aa] < 0.0)) {
        FUN_004578e0();
      }
    }
  }
LAB_0045d633:
  iVar4 = FUN_00a8c760(4);
  if ((iVar4 != 0) && (param_1[0x379] != 0)) {
    local_4 = (int *)param_1[0x13c];
    iVar4 = FUN_00454c30(&local_4);
    if (iVar4 == 0) {
      sVar2 = FUN_00dde2d0(0,2);
      if (sVar2 != 0) {
        FUN_00448640();
      }
      if ((float)param_1[0x5a9] < 0.0) {
        FUN_00457560();
      }
      if ((64.0 < (float)param_1[0x2a4]) && (sVar2 = FUN_00dde2d0(0,1), sVar2 != 0)) {
        iVar4 = FUN_00a8cab0();
        param_1[0x375] = iVar4;
        param_1[0x376] = param_1[0x374];
        FUN_00a8caf0(0x10003,0,0,0);
        param_1[0x374] = 0;
        FUN_00a962d0(0,0);
        param_1[0x4b3] = 0;
      }
      if (100.0 < (float)param_1[0x2a4]) {
        iVar4 = FUN_00a8cab0();
        param_1[0x375] = iVar4;
        param_1[0x376] = param_1[0x374];
        FUN_00a8caf0(0x10003,0,0,0);
        param_1[0x374] = 0;
        FUN_00a962d0(0,0);
        param_1[0x4b3] = 0;
      }
      fVar1 = (float)param_1[0x2a4];
      if (((!NAN(fVar1) && 49.0 < fVar1 != (fVar1 == 49.0)) && (param_1[0x128] == 1)) &&
         ((float)param_1[0x5aa] < 0.0)) {
        FUN_004578e0();
      }
    }
  }
  if ((float)param_1[0x2a8] <= 1.0471976) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3db2b8c2,0);
  }
  return;
}

// 0045D7D0  FUN_0045d7d0  size=1321  [between]
void __fastcall FUN_0045d7d0(int *param_1)

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
    iVar5 = FUN_00454c30(&iStack_28);
    fVar1 = fStack_24;
    if (iVar5 != 2) {
      fVar1 = 10.0;
    }
    iVar5 = param_1[0x2a1];
    fStack_20 = fStack_20 * fVar1;
    fStack_1c = fVar1 * fStack_1c;
    fStack_18 = fStack_18 * fVar1;
    fStack_14 = fStack_14 * fVar1;
    param_1[0x4d0] = (int)(*(float *)(iVar5 + 0x40) - fStack_20);
    param_1[0x4d1] = (int)(*(float *)(iVar5 + 0x44) - fStack_1c);
    param_1[0x4d2] = (int)(*(float *)(iVar5 + 0x48) - fStack_18);
    param_1[0x4d3] = (int)(*(float *)(iVar5 + 0x4c) - fStack_14);
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    FUN_00a8e880(param_1 + 0x4d0);
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
    param_1[0x4d0] = (int)(*(float *)(iVar5 + 0x40) - fStack_20);
    param_1[0x4d1] = (int)(fVar1 - fStack_1c);
    param_1[0x4d2] = (int)(fVar2 - fStack_18);
    param_1[0x4d3] = (int)(fVar3 - fStack_14);
    FUN_00456950(param_1 + 0x4b5,param_1 + 0x10,param_1 + 0x4d0);
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
    FUN_00a8e880(param_1 + 0x4d0);
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
    param_1[0x375] = iVar5;
    param_1[0x376] = param_1[0x374];
    FUN_00a8caf0(0x10012,0,0,0);
    param_1[0x374] = 0;
    FUN_00a962d0(0,0);
    pcVar4 = *(code **)(*param_1 + 0x314);
    param_1[0x4b3] = 0;
    (*pcVar4)();
  }
  param_1[0x14] = (int)fStack_24;
  param_1[0x15] = (int)fStack_20;
  param_1[0x16] = (int)fStack_1c;
  return;
}

// 0045DD20  FUN_0045dd20  size=1279  [between]
void __fastcall FUN_0045dd20(int *param_1)

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
    param_1[0x4d0] = (int)(*(float *)(iVar5 + 0x40) + fStack_20);
    param_1[0x4d1] = (int)(fVar1 + fStack_1c);
    param_1[0x4d2] = (int)(fVar2 + fStack_18);
    param_1[0x4d3] = (int)(fStack_14 + fVar3);
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    FUN_00a8e880(param_1 + 0x4d0);
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
    param_1[0x4d0] = (int)(*(float *)(iVar5 + 0x40) + fStack_20);
    param_1[0x4d1] = (int)(fVar1 + fStack_1c);
    param_1[0x4d2] = (int)(fVar2 + fStack_18);
    param_1[0x4d3] = (int)(fStack_14 + fVar3);
    FUN_00456950(param_1 + 0x4b5,param_1 + 0x10,param_1 + 0x4d0);
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
    FUN_00a8e880(param_1 + 0x4d0);
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
    param_1[0x375] = iVar5;
    param_1[0x376] = param_1[0x374];
    FUN_00a8caf0(0x10012,0,0,0);
    param_1[0x374] = 0;
    FUN_00a962d0(0,0);
    pcVar4 = *(code **)(*param_1 + 0x314);
    param_1[0x4b3] = 0;
    (*pcVar4)();
  }
  param_1[0x14] = iStack_24;
  param_1[0x15] = (int)fStack_20;
  param_1[0x16] = (int)fStack_1c;
  return;
}

// 0045E240  FUN_0045e240  size=841  [between]
void __fastcall FUN_0045e240(int *param_1)

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
    pfVar1 = (float *)(param_1 + 0x4d0);
    *pfVar1 = (float)param_1[0x10] + fVar5 * 3.0;
    param_1[0x4d1] = (int)((float)param_1[0x11] + fVar4 * 3.0);
    param_1[0x4d2] = (int)((float)param_1[0x12] + fVar3 * 3.0);
    param_1[0x4d3] = (int)(fStack_14 * 3.0 + (float)param_1[0x13]);
    FUN_00a8e880(pfVar1);
    FUN_00456950(param_1 + 0x4b5,param_1 + 0x10,pfVar1);
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
    FUN_00a8e880(param_1 + 0x4d0);
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
    param_1[0x375] = iVar6;
    param_1[0x376] = param_1[0x374];
    FUN_00a8caf0(0x10012,0,0,0);
    param_1[0x374] = 0;
    FUN_00a962d0(0,0);
    pcVar2 = *(code **)(*param_1 + 0x314);
    param_1[0x4b3] = 0;
    (*pcVar2)();
  }
  param_1[0x14] = iStack_24;
  param_1[0x15] = (int)local_20;
  param_1[0x16] = (int)local_1c;
  return;
}

// 0045E5B0  Em0060::R0_ExplodeDie_2  size=1150  [class]
void __fastcall Em0060::R0_ExplodeDie_2(int *param_1)

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
    FUN_00aa4080(0x90,0,0x3d088889,0x3f800000,0x8000000,param_1[0x6cd],0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    uVar5 = 0;
    uVar2 = FUN_00a7c8a0(0);
    FUN_004039a0(6,uVar2,uVar5);
    puVar6 = local_160;
    uVar2 = FUN_00e00b40(0x20060,puVar6);
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
    iVar1 = thunk_FUN_00e58ed0(param_1[0x6dd]);
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
    piVar3 = param_1 + 0x54c;
    uVar2 = FUN_00a7c8a0(piVar3);
    FUN_004117d0(7,uVar2,piVar3);
    puVar6 = local_160;
    uVar2 = FUN_00e00b40(0x20060,puVar6);
    FUN_00a8c930(uVar2,puVar6);
    iVar1 = FUN_00e5e0c0("em0060_se_dmg_exp_death",param_1,0xffffffff,0);
    param_1[0x6dd] = iVar1;
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
    if (param_1[0x6c9] != 0) {
      iVar1 = FUN_00a81330();
      if (iVar1 == 0) {
        FUN_00dd5650(&DAT_0163db60);
        FUN_00450140();
        iVar1 = FUN_00a81330();
        if ((iVar1 == 0) || (piVar3 = (int *)FUN_00a7c8a0(), piVar3 == (int *)0x0))
        goto LAB_0045ea10;
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
        if (piVar3 == (int *)0x0) goto LAB_0045ea10;
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
LAB_0045ea10:
  iVar1 = FUN_00a8c760(0x37);
  if (iVar1 != 0) {
    param_1[0x6c8] = 1;
  }
  return;
}

// 0045EA30  FUN_0045ea30  size=635  [between]
void __thiscall FUN_0045ea30(int param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  float10 fVar3;
  undefined *puVar4;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  float local_20 [3];
  undefined4 local_14;
  
  if (*(int *)(param_1 + 0x1868) != 0) {
    return;
  }
  if (0.0 < *(float *)(param_1 + 0x186c)) {
    return;
  }
  uVar2 = (uint)param_2;
  iVar1 = param_1 + uVar2 * 0xc;
  if (*(int *)(param_1 + 0x1804 + uVar2 * 0xc) == 0) {
    return;
  }
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
  switch(uVar2) {
  case 0:
    puVar4 = &DAT_01880620;
    break;
  case 1:
    puVar4 = &DAT_01880642;
    break;
  case 2:
    puVar4 = &DAT_01880664;
    break;
  case 3:
    puVar4 = &DAT_01880688;
    break;
  case 4:
    puVar4 = &DAT_018806aa;
    break;
  case 5:
    puVar4 = &DAT_018806cc;
    break;
  case 6:
    puVar4 = &DAT_018806f0;
    break;
  case 7:
    puVar4 = &DAT_01880712;
    break;
  case 8:
    puVar4 = &DAT_01880734;
    break;
  default:
    goto switchD_0045eb43_default;
  }
  FUN_00456e60(puVar4,local_20,&local_30,0x43340000,1);
switchD_0045eb43_default:
  *(undefined4 *)(iVar1 + 0x17fc) = 0;
  *(undefined4 *)(iVar1 + 0x1804) = 0;
  *(undefined4 *)(param_1 + 0x1868) = 1;
  fVar3 = (float10)FUN_00dde300(0,0x3f800000);
  *(float *)(param_1 + 0x186c) = (float)(fVar3 * (float10)10.0 + (float10)1.0);
  return;
}

// 0045ECD0  FUN_0045ecd0  size=671  [between]
void __fastcall FUN_0045ecd0(int param_1)

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
  puVar2 = (undefined4 *)(param_1 + 0x1804);
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
      puVar4 = &DAT_01880620;
      break;
    case 1:
      puVar4 = &DAT_01880642;
      break;
    case 2:
      puVar4 = &DAT_01880664;
      break;
    case 3:
      puVar4 = &DAT_01880688;
      break;
    case 4:
      puVar4 = &DAT_018806aa;
      break;
    case 5:
      puVar4 = &DAT_018806cc;
      break;
    case 6:
      puVar4 = &DAT_018806f0;
      break;
    case 7:
      puVar4 = &DAT_01880712;
      break;
    case 8:
      puVar4 = &DAT_01880734;
      break;
    default:
      goto switchD_0045edcb_default;
    }
    FUN_00456e60(puVar4,local_180,&local_190,0x43340000,0);
switchD_0045edcb_default:
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

// 0045EFB0  FUN_0045efb0  size=611  [between]
/* WARNING: Removing unreachable block (ram,0x0045f0a5) */

void __thiscall FUN_0045efb0(int param_1,byte param_2)

{
  float fVar1;
  float10 fVar2;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  float local_20 [3];
  undefined4 local_14;
  
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
  DAT_01dd0814 = DAT_01dd0814 * 0x19660d + 0x3c6ef35f;
  fVar1 = (float)(DAT_01dd0814 >> 8) * 5.960465e-08;
  fVar1 = (1.0 - (fVar1 + fVar1)) * 60.0 + 120.0;
  switch((uint)param_2) {
  case 0:
    FUN_00456e60(&DAT_01880620,local_20,&local_30,fVar1,0);
    break;
  case 1:
    FUN_00456e60(&DAT_01880642,local_20,&local_30,fVar1,0);
    break;
  case 2:
    FUN_00456e60(&DAT_01880664,local_20,&local_30,fVar1,0);
    break;
  case 3:
    FUN_00456e60(&DAT_01880688,local_20,&local_30,fVar1,0);
    break;
  case 4:
    FUN_00456e60(&DAT_018806aa,local_20,&local_30,fVar1,0);
    break;
  case 5:
    FUN_00456e60(&DAT_018806cc,local_20,&local_30,fVar1,0);
    break;
  case 6:
    FUN_00456e60(&DAT_018806f0,local_20,&local_30,fVar1,0);
    break;
  case 7:
    FUN_00456e60(&DAT_01880712,local_20,&local_30,fVar1,0);
    break;
  case 8:
    FUN_00456e60(&DAT_01880734,local_20,&local_30,fVar1,0);
  }
  param_1 = param_1 + (uint)param_2 * 0xc;
  *(undefined4 *)(param_1 + 0x17fc) = 0;
  *(undefined4 *)(param_1 + 0x1804) = 0;
  return;
}

// 0045F240  FUN_0045f240  size=242  [between]
void __thiscall FUN_0045f240(int *param_1,int param_2)

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
  
  if ((param_1[0x620] == 0) || (param_2 != 0)) {
    (**(code **)(*param_1 + 0x358))(400,param_1 + 900);
    param_1[0x3b1] = 1;
    FUN_00ac9420(param_1 + 0x622);
    param_1[0x620] = 1;
    FUN_00ac8d80(0x12,1);
    FUN_00ac8d80(0x11,1);
    FUN_00ac8d80(0xe,1);
    param_1[0x636] = 0;
  }
  param_2 = CONCAT13(param_2._3_1_,0x20100);
  pbVar3 = (byte *)&param_2;
  iVar2 = 3;
  do {
    if (param_1[(uint)*pbVar3 * 3 + 0x5ff] != 0) {
      FUN_0045efb0((uint)*pbVar3);
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

// 0045F340  FUN_0045f340  size=280  [between]
void __thiscall FUN_0045f340(int *param_1,int param_2)

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
  
  if ((param_1[0x624] == 0) || (param_2 != 0)) {
    (**(code **)(*param_1 + 0x358))(0x191,param_1 + 900);
    param_1[0x3b2] = 1;
    FUN_00ac9420(param_1 + 0x626);
    param_1[0x624] = 1;
    param_1[0x62c] = 1;
    FUN_00ac9420(param_1 + 0x62e);
    FUN_00ac8d80(10,1);
    FUN_00ac8d80(0xb,1);
    FUN_00ac8d80(0xc,1);
    FUN_00ac8d80(0xd,1);
    param_1[0x637] = 0;
  }
  iVar2 = 3;
  param_2 = CONCAT13(param_2._3_1_,0x50403);
  pbVar3 = (byte *)&param_2;
  do {
    if (param_1[(uint)*pbVar3 * 3 + 0x5ff] != 0) {
      FUN_0045efb0((uint)*pbVar3);
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

// 0045F460  FUN_0045f460  size=280  [between]
void __thiscall FUN_0045f460(int *param_1,int param_2)

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
  
  if ((param_1[0x628] == 0) || (param_2 != 0)) {
    (**(code **)(*param_1 + 0x358))(0x192,param_1 + 900);
    param_1[0x3b3] = 1;
    FUN_00ac9420(param_1 + 0x62a);
    param_1[0x628] = 1;
    param_1[0x630] = 1;
    FUN_00ac9420(param_1 + 0x632);
    FUN_00ac8d80(5,1);
    FUN_00ac8d80(6,1);
    FUN_00ac8d80(7,1);
    FUN_00ac8d80(8,1);
    param_1[0x638] = 0;
  }
  param_2 = CONCAT13(param_2._3_1_,0x80706);
  pbVar3 = (byte *)&param_2;
  iVar2 = 3;
  do {
    if (param_1[(uint)*pbVar3 * 3 + 0x5ff] != 0) {
      FUN_0045efb0((uint)*pbVar3);
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

// 0045F5D0  FUN_0045f5d0  size=675  [between]
undefined4 __thiscall FUN_0045f5d0(int *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  
  iVar3 = *param_2;
  if ((((iVar3 == 0) || (iVar3 == 1)) || (iVar3 == 2)) || ((iVar3 == 0x1b0 || (iVar3 == 0x147)))) {
    return 0;
  }
  uVar6 = 0;
  iVar3 = FUN_00a81330();
  if (iVar3 != 0) {
    FUN_00a81330();
    uVar6 = FUN_00a7c8a0();
  }
  param_1[0x2cf] = param_1[0x2cf] - param_2[1];
  (**(code **)(*param_1 + 0x198))(uVar6,param_2,1);
  if (param_1[0x2d0] == 0) {
    if (param_1[0x2cf] < 1) {
      iVar3 = FUN_00a81330();
      if ((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
        FUN_004039a0(0x196,iVar3,0);
        puVar7 = &stack0xfffffe94;
        uVar6 = FUN_00e00b40(*(undefined4 *)(iVar3 + 0x4b0),puVar7);
        FUN_00a8c930(uVar6,puVar7);
      }
      iVar3 = 0;
      if (0 < (short)param_1[0xc9]) {
        iVar5 = 0;
        do {
          iVar2 = param_1[200];
          iVar4 = *(int *)(*(int *)(iVar2 + 0x60 + iVar5) + 0x40);
          if ((iVar4 != 0) && (iVar4 = FUN_00fdbbd0(iVar4,&DAT_0163d9a8), iVar4 != 0)) {
            puVar1 = (uint *)(iVar2 + 0x38 + iVar5);
            *puVar1 = *puVar1 | 1;
          }
          iVar3 = iVar3 + 1;
          iVar5 = iVar5 + 0x70;
        } while (iVar3 < (short)param_1[0xc9]);
      }
      param_1[0x2d3] = 1;
      param_1[0x2d0] = 1;
    }
    if (param_1[0x2d0] == 0) {
      return 1;
    }
  }
  if (param_2[0x3b] != 0) {
    param_1[0x2d1] = 1;
    param_1[0x2d2] = 1;
    iVar3 = FUN_00a81330();
    if (iVar3 != 0) {
      FUN_00a81330();
      iVar3 = FUN_00a7c8a0();
      if (iVar3 != 0) {
        iVar3 = FUN_00d466f0();
        if (iVar3 == 0) {
          FUN_00a81330();
          uVar6 = FUN_00a7c8a0();
          iVar3 = FUN_00445ad0(uVar6);
          if (iVar3 != 0) {
            FUN_004558a0(0);
          }
        }
        else {
          iVar3 = FUN_00d46780();
          if (iVar3 == 0) {
            iVar3 = FUN_00d467a0();
            if (iVar3 != 0) {
              FUN_00a81330();
              uVar6 = FUN_00a7c8a0();
              iVar3 = FUN_00445b30(uVar6);
              if (iVar3 != 0) {
                FUN_00682080(0);
              }
            }
          }
          else {
            FUN_00a81330();
            uVar6 = FUN_00a7c8a0();
            iVar3 = FUN_00445b00(uVar6);
            if (iVar3 != 0) {
              FUN_0077c690(0);
            }
          }
        }
      }
    }
    iVar3 = FUN_00a81330();
    if ((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
      FUN_00a9d8a0();
      FUN_004039a0(0x197,iVar3,0);
      puVar7 = &stack0xfffffe94;
      uVar6 = FUN_00e00b40(*(undefined4 *)(iVar3 + 0x4b0),puVar7);
      FUN_00a8c930(uVar6,puVar7);
    }
  }
  return 1;
}

// 0045F880  Em0060::R0_ChanceAttack  size=1462  [class]
void __fastcall Em0060::R0_ChanceAttack(int *param_1)

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
    param_1[0x6da] = 1;
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
      FUN_00dd5650(&DAT_0163dc28);
      FUN_00450140();
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
      FUN_00448270(iVar1);
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
    param_1[0x6c9] = 0;
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
    FUN_00c52770(param_1[0x6e8],0x40a00000);
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x250] = 0x32;
      FUN_00a8c9b0(0,6,0x3f800000,0);
      piVar2 = param_1 + 0x54c;
      uVar3 = FUN_00a7c8a0(piVar2);
      FUN_004117d0(7,uVar3,piVar2);
      puVar11 = local_160;
      uVar3 = FUN_00e00b40(0x20060,puVar11);
      FUN_00a8c930(uVar3,puVar11);
      iVar1 = FUN_00e5e0c0("em0060_se_dmg_exp_death",param_1,0xffffffff,0);
      param_1[0x6dd] = iVar1;
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
    iVar1 = thunk_FUN_00e58ed0(param_1[0x6dd]);
    if (iVar1 == 0) {
      FUN_009fdde0();
    }
  }
  iVar1 = FUN_00a8c760(0x32);
  if (iVar1 != 0) {
    FUN_00457410(1);
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
    FUN_0045f240(1);
  }
  iVar1 = FUN_00a8c760(0x34);
  if (iVar1 != 0) {
    FUN_0045f340(1);
  }
  iVar1 = FUN_00a8c760(0x35);
  if (iVar1 != 0) {
    FUN_0045f460(1);
  }
  iVar4 = 1;
  piVar2 = param_1 + 0x61c;
  iVar1 = 6;
  do {
    if (*piVar2 == 0) {
      iVar4 = 0;
    }
    piVar2 = piVar2 + 4;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  param_1[0x634] = iVar4;
  FUN_00442920(local_164);
  return;
}

// 0045FED0  FUN_0045fed0  size=128  [callgraph]
undefined4 __thiscall FUN_0045fed0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(int *)(param_1 + 0xdcc) == 0) && (*(int *)(param_1 + 0x1ac4) == 0)) {
    switch(param_2) {
    case 0:
      uVar2 = FUN_004595c0();
      return uVar2;
    case 1:
      uVar2 = FUN_00459660();
      return uVar2;
    case 3:
      iVar1 = FUN_00443f80();
      if (iVar1 != 0) {
        uVar2 = FUN_00459df0();
        return uVar2;
      }
      break;
    case 4:
      iVar1 = FUN_00443fc0();
      if (iVar1 != 0) {
        uVar2 = FUN_0045a040();
        return uVar2;
      }
      break;
    case 5:
      uVar2 = FUN_0044cf80();
      return uVar2;
    case 6:
      uVar2 = FUN_0045a3f0();
      return uVar2;
    case 7:
      uVar2 = FUN_0045a470();
      return uVar2;
    }
  }
  return 0;
}

// 00460260  FUN_00460260  size=249  [callgraph]
void __fastcall FUN_00460260(int *param_1)

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
    if ((((param_1[0x373] == 0) && (param_1[0x6b1] == 0)) && (iVar1 = FUN_00443f80(), iVar1 != 0))
       && (iVar1 = FUN_00459df0(), iVar1 != 0)) {
      return;
    }
    (**(code **)(*param_1 + 0x34c))();
  }
  iVar1 = FUN_00a8c760(0x3b);
  if (iVar1 != 0) {
    piStack_4 = (int *)param_1[0x13c];
    iVar1 = FUN_00454c30(&piStack_4);
    if (((iVar1 == 1) && (param_1[0x373] == 0)) && (param_1[0x6b1] == 0)) {
      FUN_0045a470();
      return;
    }
  }
  return;
}

// 00460360  FUN_00460360  size=282  [callgraph]
void __fastcall FUN_00460360(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  if (param_1[0x187] == 0) {
    uVar1 = param_1[0x4db];
    param_1[0x4db] = param_1[0x4db] ^ 0x2000000;
    iVar2 = 0x6a - (uint)((uVar1 & 0x2000000) != 0);
    if ((float)param_1[0x245] * (float)param_1[0x245] < 2.4674013) {
      iVar2 = 0x6b;
    }
    FUN_00aa4080(iVar2,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00eaa6e0(0x41200000,0);
    param_1[0x686] = 0;
    param_1[0x69f] = param_1[param_1[0x379] + 0x674];
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if ((iVar2 != 0) &&
     (((param_1[0x373] != 0 || (param_1[0x6b1] != 0)) || (iVar2 = FUN_0044cf80(), iVar2 == 0)))) {
                    /* WARNING: Could not recover jumptable at 0x00460478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  return;
}

// 00460480  FUN_00460480  size=258  [callgraph]
void __fastcall FUN_00460480(int *param_1)

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
    param_1[0x686] = 0;
    param_1[0x69f] = param_1[param_1[0x379] + 0x674];
    FUN_00eaa6e0(0x41200000,0);
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if ((iVar1 != 0) &&
     (((param_1[0x373] != 0 || (param_1[0x6b1] != 0)) || (iVar1 = FUN_0044cf80(), iVar1 == 0)))) {
                    /* WARNING: Could not recover jumptable at 0x00460580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  return;
}

// 00460590  FUN_00460590  size=647  [callgraph]
void __fastcall FUN_00460590(int *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x004606ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    iVar3 = FUN_00a8c760(0x3a);
    if (((iVar3 != 0) && (param_1[0x373] == 0)) &&
       ((param_1[0x6b1] == 0 && (iVar3 = FUN_0045a3f0(), iVar3 != 0)))) {
      return;
    }
    iVar3 = FUN_00a8c760(0x3b);
    if (iVar3 == 0) {
      return;
    }
    if (param_1[0x373] != 0) {
      return;
    }
    if (param_1[0x6b1] != 0) {
      return;
    }
    FUN_0045a470();
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
    goto switchD_004605c2_default;
  }
  param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
  iVar3 = FUN_00a952e0(0,0x41a00000);
  if (iVar3 != 0) {
    FUN_00dde2d0(0,2);
  }
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    if (((param_1[0x373] == 0) && (param_1[0x6b1] == 0)) && (iVar3 = FUN_0044cf80(), iVar3 != 0)) {
switchD_004605c2_default:
      return;
    }
    (**(code **)(*param_1 + 0x34c))();
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00460830  FUN_00460830  size=524  [callgraph]
void __fastcall FUN_00460830(int *param_1)

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
    if ((((iVar2 != 0) && (param_1[0x373] == 0)) && (param_1[0x6b1] == 0)) &&
       (iVar2 = FUN_0045a3f0(), iVar2 != 0)) {
      return;
    }
    iVar2 = FUN_00a8c760(0x3b);
    if (iVar2 == 0) {
      return;
    }
    if (param_1[0x373] != 0) {
      return;
    }
    if (param_1[0x6b1] != 0) {
      return;
    }
    FUN_0045a470();
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

// 00460A50  FUN_00460a50  size=524  [callgraph]
void __fastcall FUN_00460a50(int *param_1)

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
    if ((((iVar2 != 0) && (param_1[0x373] == 0)) && (param_1[0x6b1] == 0)) &&
       (iVar2 = FUN_0045a3f0(), iVar2 != 0)) {
      return;
    }
    iVar2 = FUN_00a8c760(0x3b);
    if (iVar2 == 0) {
      return;
    }
    if (param_1[0x373] != 0) {
      return;
    }
    if (param_1[0x6b1] != 0) {
      return;
    }
    FUN_0045a470();
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

// 00460C70  FUN_00460c70  size=114  [callgraph]
void __thiscall FUN_00460c70(int *param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  
  switch(param_2) {
  case 0:
    FUN_00457410(param_3);
    break;
  case 1:
    FUN_0045f240(param_3);
    break;
  case 2:
    FUN_0045f340(param_3);
    break;
  case 3:
    FUN_0045f460(param_3);
  }
  if (param_1[0x639] == 0) {
    pcVar1 = *(code **)(*param_1 + 0x358);
    param_1[0x639] = 1;
    (*pcVar1)(0x195,param_1 + 0x578);
  }
  return;
}

// 00460D00  FUN_00460d00  size=86  [callgraph]
void __fastcall FUN_00460d00(int param_1)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    if (((*(int *)(param_1 + (uVar2 + 0x187) * 0x10) == 0) &&
        (*(int *)(param_1 + 0x18d4 + uVar2 * 4) < 1)) &&
       (((char)uVar2 != '\0' ||
        (((*(int *)(param_1 + 0x1880) != 0 && (*(int *)(param_1 + 0x1890) != 0)) &&
         (*(int *)(param_1 + 0x18a0) != 0)))))) {
      FUN_00460c70(uVar2,0);
    }
    bVar1 = (char)uVar2 + 1;
    uVar2 = (uint)bVar1;
  } while (bVar1 < 4);
  return;
}

// 00460D70  FUN_00460d70  size=302  [callgraph]
void __fastcall FUN_00460d70(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int local_4;
  
  iVar2 = 0;
  local_4 = 4;
  do {
    switch(iVar2) {
    case 0:
      if (param_1[0x61c] == 0) {
        (**(code **)(*param_1 + 0x358))(0x193,param_1 + 900);
        param_1[0x3b0] = 1;
        FUN_00ac9420(param_1 + 0x61e);
        param_1[0x61c] = 1;
        FUN_00ac8d80(0,1);
        FUN_00ac8d80(1,1);
        FUN_00ac8d80(2,1);
        FUN_00ac8d80(3,1);
        FUN_00ac8d80(0xf,1);
        FUN_00ac8d80(0x10,1);
        FUN_00ac8d80(9,1);
        FUN_00ac8d80(4,1);
        if ((param_1[0xcc] != 0) && (*(int *)(param_1[0xcc] + 0xcc) == 0)) {
          FUN_004489f0();
        }
        param_1[0x635] = 0;
      }
      break;
    case 1:
      FUN_0045f240(0);
      break;
    case 2:
      FUN_0045f340(0);
      break;
    case 3:
      FUN_0045f460(0);
    }
    if (param_1[0x639] == 0) {
      pcVar1 = *(code **)(*param_1 + 0x358);
      param_1[0x639] = 1;
      (*pcVar1)(0x195,param_1 + 0x578);
    }
    iVar2 = iVar2 + 1;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  return;
}

// 00460EB0  FUN_00460eb0  size=223  [callgraph]
void __fastcall FUN_00460eb0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined1 auStack_24 [4];
  undefined1 local_20 [28];
  
  iVar1 = FUN_00a81330();
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
  }
  Behavior::vf4C();
  iVar1 = *(int *)(param_1 + 0x618);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0xaf0) != 0) {
      FUN_00a8caf0(1,0,0,0);
    }
  }
  else if (iVar1 == 1) {
    iVar1 = *(int *)(param_1 + 0x4a0);
    if (iVar1 == 0) {
      FUN_004506f0();
    }
    else if (iVar1 == 1) {
      FUN_004509c0();
    }
    else if (iVar1 == 2) {
      FUN_00450d60();
    }
  }
  else if (iVar1 == 2) {
    FUN_004424e0();
  }
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x204))(local_20);
    FUN_00a84720();
    switchD_0080dbae::default();
    FUN_00a84780(auStack_24,*(undefined4 *)(param_1 + 0xaec),*(undefined4 *)(param_1 + 0xaec),0,0,
                 *(undefined4 *)(param_1 + 0x910));
  }
  return;
}

// 00460F90  FUN_00460f90  size=223  [callgraph]
void __fastcall FUN_00460f90(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined1 auStack_24 [4];
  undefined1 local_20 [28];
  
  iVar1 = FUN_00a81330();
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
  }
  Behavior::vf4C();
  iVar1 = *(int *)(param_1 + 0x618);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0xaf0) != 0) {
      FUN_00a8caf0(1,0,0,0);
    }
  }
  else if (iVar1 == 1) {
    iVar1 = *(int *)(param_1 + 0x4a0);
    if (iVar1 == 0) {
      FUN_004506f0();
    }
    else if (iVar1 == 1) {
      FUN_004509c0();
    }
    else if (iVar1 == 2) {
      FUN_00450d60();
    }
  }
  else if (iVar1 == 2) {
    FUN_004424e0();
  }
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x204))(local_20);
    FUN_00a84720();
    switchD_0080dbae::default();
    FUN_00a84780(auStack_24,*(undefined4 *)(param_1 + 0xaec),*(undefined4 *)(param_1 + 0xaec),0,0,
                 *(undefined4 *)(param_1 + 0x910));
  }
  return;
}

// 00461070  FUN_00461070  size=124  [callgraph]
void __fastcall FUN_00461070(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a7c8a0();
  }
  Behavior::vf4C();
  iVar1 = *(int *)(param_1 + 0x618);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0xaf0) != 0) {
      FUN_00a8caf0(1,0,0,0);
    }
  }
  else if (iVar1 == 1) {
    iVar1 = *(int *)(param_1 + 0x4a0);
    if (iVar1 == 0) {
      FUN_004506f0();
      return;
    }
    if (iVar1 == 1) {
      FUN_004509c0();
      return;
    }
    if (iVar1 == 2) {
      FUN_00450d60();
      return;
    }
  }
  else if (iVar1 == 2) {
    FUN_004424e0();
    return;
  }
  return;
}

// 004610F0  FUN_004610f0  size=170  [callgraph]
void __fastcall FUN_004610f0(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined1 local_160 [348];
  
  if ((*(int *)(param_1 + 0xb44) == 0) && ((*(byte *)(param_1 + 0x4c0) & 1) != 0)) {
    *(undefined4 *)(param_1 + 0x684) = 0;
    FUN_00ac2080(3);
    piVar3 = *(int **)(param_1 + 0x67c);
    piVar4 = piVar3 + *(int *)(param_1 + 0x684) * 0x54;
    FUN_00445db0();
    iVar2 = -1;
    bVar1 = false;
    if (piVar3 != piVar4) {
      do {
        if ((*piVar3 != 0x147) && (iVar2 < piVar3[1])) {
          bVar1 = true;
          FUN_00448f50(piVar3);
          iVar2 = piVar3[1];
        }
        piVar3 = piVar3 + 0x54;
      } while (piVar3 != piVar4);
      if (bVar1) {
        FUN_0045f5d0(local_160);
      }
    }
  }
  return;
}

// 004611A0  FUN_004611a0  size=370  [callgraph]
undefined4 __thiscall FUN_004611a0(int *param_1,int param_2)

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
    piVar4 = param_1 + 0x635;
    iVar5 = 4;
    do {
      if (0 < *piVar4) {
        bVar1 = true;
      }
      piVar4 = piVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    if (bVar1) {
      FUN_00460d70();
      (**(code **)(*param_1 + 0x358))(399,0);
    }
  }
  if (((*(uint *)(param_2 + 0x8c) & 0x600) != 0) || ((*(uint *)(param_2 + 0x90) & 0x40000) != 0)) {
    bVar3 = true;
  }
  if ((((bVar2) || (param_1[0x61c] != 0)) || (param_1[0x620] != 0)) ||
     ((param_1[0x624] != 0 || (param_1[0x628] != 0)))) {
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
            param_1[0x6c0] = *(int *)(iVar6 + 0x40);
            param_1[0x6c1] = *(int *)(iVar6 + 0x44);
            param_1[0x6c2] = *(int *)(iVar6 + 0x48);
            param_1[0x6c3] = *(int *)(iVar6 + 0x4c);
          }
          param_1[0x6c4] = *(int *)(param_2 + 0x20);
          param_1[0x6c5] = *(int *)(param_2 + 0x24);
          param_1[0x6c6] = *(int *)(param_2 + 0x28);
          param_1[0x6c7] = *(int *)(param_2 + 0x2c);
          return 1;
        }
      }
    }
  }
  return 0;
}

// 00461320  FUN_00461320  size=413  [callgraph]
void __thiscall FUN_00461320(int *param_1,int param_2)

{
  code *pcVar1;
  uint uVar2;
  byte bVar3;
  
  param_1[0x635] = param_1[0x635] - param_2;
  param_1[0x636] = param_1[0x636] - param_2;
  param_1[0x637] = param_1[0x637] - param_2;
  param_1[0x638] = param_1[0x638] - param_2;
  bVar3 = 0;
  do {
    uVar2 = (uint)bVar3;
    if (((param_1[(uVar2 + 0x187) * 4] == 0) && (param_1[uVar2 + 0x635] < 1)) &&
       ((bVar3 != 0 || (((param_1[0x620] != 0 && (param_1[0x624] != 0)) && (param_1[0x628] != 0)))))
       ) {
      switch(uVar2) {
      case 0:
        if (param_1[0x61c] == 0) {
          (**(code **)(*param_1 + 0x358))(0x193,param_1 + 900);
          param_1[0x3b0] = 1;
          FUN_00ac9420(param_1 + 0x61e);
          param_1[0x61c] = 1;
          FUN_00ac8d80(0,1);
          FUN_00ac8d80(1,1);
          FUN_00ac8d80(2,1);
          FUN_00ac8d80(3,1);
          FUN_00ac8d80(0xf,1);
          FUN_00ac8d80(0x10,1);
          FUN_00ac8d80(9,1);
          FUN_00ac8d80(4,1);
          if ((param_1[0xcc] != 0) && (*(int *)(param_1[0xcc] + 0xcc) == 0)) {
            FUN_004489f0();
          }
          param_1[0x635] = 0;
        }
        break;
      case 1:
        FUN_0045f240(0);
        break;
      case 2:
        FUN_0045f340(0);
        break;
      case 3:
        FUN_0045f460(0);
      }
      if (param_1[0x639] == 0) {
        pcVar1 = *(code **)(*param_1 + 0x358);
        param_1[0x639] = 1;
        (*pcVar1)(0x195,param_1 + 0x578);
      }
    }
    bVar3 = bVar3 + 1;
  } while (bVar3 < 4);
  return;
}

// 004614D0  Em0060::vf40  size=3206  [class]
undefined4 __fastcall Em0060::vf40(int *param_1)

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
  
  iVar4 = BehaviorEmBase::vf40();
  if (iVar4 == 0) {
    return 0;
  }
  FUN_00a8d280();
  lib::AllocatedArray<cEnemySubState>::AllocatedArray<cEnemySubState>
            (param_1[0x13c],5,&DAT_01880758,4);
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
  iVar4 = FUN_00acf600(0x2006f,"Em0060Body");
  iVar10 = FUN_00ac8a50();
  if (iVar10 == 0) {
    FUN_00ac94e0(&DAT_0163d9a8);
  }
  if ((iVar4 != 0) && (*(int *)(iVar4 + 0x370) != 0)) {
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
  param_1[0x4db] = 0;
  param_1[0x4dc] = 0;
  param_1[0x548] = 0;
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
    Em0060Config::initializeBattleParameterConfig();
  }
  local_a4 = 1;
  if ((param_1[0xcc] == 0) || (*(int *)(param_1[0xcc] + 0xcc) != 0)) goto LAB_00461bf8;
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
    FUN_00455800(1,"Wp0311",0x30311,2,4,0xffffffff);
    FUN_00455800(2,"Wp0315",0x30315,2,4,0xffffffff);
    if (param_1[0x128] == 0) {
      uVar6 = 0;
      uVar5 = 0x30310;
      pcVar12 = "Wp0310";
    }
    else {
      if (param_1[0x128] != 1) goto LAB_00461bce;
      uVar6 = 1;
      uVar5 = 0x30312;
      pcVar12 = "Wp0312";
    }
    FUN_00455800(0,pcVar12,uVar5,uVar6,0x23,0xffffffff);
  }
LAB_00461bce:
  if ((*(byte *)(param_1 + 0x12a) & 4) == 0) {
    (**(code **)(*param_1 + 0x358))(0,param_1 + 0x3b4);
    piVar8 = param_1;
    FUN_00c1cf50(param_1);
    FUN_00c54720(piVar8);
  }
LAB_00461bf8:
  FUN_00a82790(param_1[0x13c],0x25,0);
  param_1[0x448] = param_1[0x448] | 2;
  FUN_00a82870(0x40490fdb,0xc0490fdb,0x3e99999a,0x3ae4c388,0x3e0efa35);
  FUN_00a82790(param_1[0x13c],0x26,0);
  param_1[0x47c] = param_1[0x47c] | 2;
  FUN_00a82840(0,0xbfb2b8c2,0x3e99999a,0x3ae4c388,0x3e0efa35);
  param_1[0x5a5] = 0;
  param_1[0x5a6] = 0;
  param_1[0x5a7] = 0;
  param_1[0x4b1] = 0;
  if ((param_1[0xcc] != 0) && (*(int *)(param_1[0xcc] + 0xcc) == 0)) {
    piVar8 = param_1 + 0x5b3;
    iVar4 = 0x10;
    do {
      *(undefined2 *)(piVar8 + -4) = 0;
      *piVar8 = 0;
      piVar8 = piVar8 + 5;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *(undefined2 *)(param_1 + 0x6a4) = 0;
  *(undefined1 *)((int)param_1 + 0x1a92) = 0;
  FUN_004410d0();
  FUN_004412e0();
  FUN_00448520();
  param_1[0x5a9] = 0;
  param_1[0x5aa] = 0;
  param_1[0x3b0] = 0;
  param_1[0x5ab] = 0x43960000;
  param_1[0x3b1] = 0;
  param_1[0x3b2] = 0;
  param_1[0x5a8] = 0x44160000;
  param_1[0x3b3] = 0;
  param_1[0x4d4] = 0;
  param_1[0x37d] = 0;
  param_1[0x5ac] = 0;
  param_1[0x37a] = 0;
  param_1[0x6a3] = 0;
  param_1[0x37b] = 0;
  param_1[0x379] = 0;
  param_1[0x37c] = 0x44610000;
  param_1[0x63a] = 0;
  param_1[0x63b] = 1;
  fVar11 = (float10)(**(code **)(*(int *)param_1[0x1d5] + 0x34))(0x16);
  param_1[0x63c] = (int)(float)fVar11;
  fVar11 = (float10)(**(code **)(*(int *)param_1[0x1d5] + 0x34))(0x17);
  param_1[0x63d] = (int)(float)fVar11;
  fVar11 = (float10)(**(code **)(*(int *)param_1[0x1d5] + 0x3c))(0x17);
  param_1[0x63e] = (int)(float)fVar11;
  param_1[0x37c] = param_1[0x63c];
  sVar3 = FUN_00dde2d0(0,0x32);
  param_1[0x5ad] = sVar3 + 100;
  param_1[0x5ae] = 0;
  param_1[0x6a9] = 0;
  param_1[0x6aa] = 0;
  param_1[0x6ab] = 0;
  param_1[0x6ac] = 0;
  *(undefined1 *)(param_1 + 0x6ad) = 0;
  iVar4 = FUN_00a8cab0();
  param_1[0x375] = iVar4;
  param_1[0x376] = param_1[0x374];
  FUN_00a8caf0(0x10000,0,0,0);
  param_1[0x374] = 0;
  FUN_00a962d0(0,0);
  param_1[0x4b3] = 0;
  param_1[0x6d2] = 0x42700000;
  param_1[0x20b] = 4;
  param_1[0x20c] = 5;
  param_1[0x6cd] = -0x40800000;
  param_1[0x6c8] = 0;
  param_1[0x6ca] = 0;
  param_1[0x6d3] = 0;
  param_1[0x6ce] = 0;
  param_1[0x6d4] = 0;
  param_1[0x6e8] = -1;
  param_1[0x6d5] = 0;
  param_1[0x6c9] = 1;
  param_1[0x6d8] = 0;
  param_1[0x6d0] = 0;
  param_1[0x6e7] = 0;
  param_1[0x6d1] = 0;
  param_1[0x37e] = 0;
  param_1[0x6d6] = 0;
  param_1[0x6e4] = 0;
  param_1[0x6d7] = 0;
  param_1[0x6d9] = 1;
  param_1[0x6e5] = 0x44610000;
  param_1[0x6e6] = 0;
  param_1[0x6b1] = 0;
  param_1[0x6da] = 0;
  if ((param_1[0xcc] != 0) && (*(int *)(param_1[0xcc] + 0xcc) == 0)) {
    iStack_b4 = param_1[0x13c];
    FUN_0044b7d0(&iStack_b4);
  }
  if ((*(byte *)(param_1 + 0x12a) & 1) != 0) {
    (**(code **)(*param_1 + 0x110))(1);
    param_1[0x6dc] = 0x42700000;
    (**(code **)(*param_1 + 0x358))(0x208,param_1 + 0x3e0);
    FUN_00a8caf0(0x8002a,0,0,0);
    param_1[0x374] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4b3] = 0;
  }
  if ((*(byte *)(param_1 + 0x12a) & 2) != 0) {
    FUN_00a8caf0(0x8002b,0,0,0);
    param_1[0x374] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4b3] = 0;
  }
  if ((*(byte *)(param_1 + 0x12a) & 4) != 0) {
    FUN_00a8caf0(0x8002c,0,0,0);
    param_1[0x374] = 0;
    FUN_00a962d0(0,0);
    iVar4 = param_1[0x4d5];
    param_1[0x4b3] = 0;
    if (iVar4 != 0) {
      iVar9 = 0;
      iVar10 = 0;
      if (0 < *(short *)(iVar4 + 0x32c)) {
        do {
          *(undefined4 *)(*(int *)(iVar4 + 0x328) + 0x460 + iVar9) = 0;
          iVar10 = iVar10 + 1;
          iVar9 = iVar9 + 0x560;
        } while (iVar10 < *(short *)(iVar4 + 0x32c));
      }
      *(uint *)(iVar4 + 0x364) = *(uint *)(iVar4 + 0x364) & 0xffbfffff;
    }
    iVar4 = param_1[0x4d6];
    if (iVar4 != 0) {
      iVar9 = 0;
      iVar10 = 0;
      if (0 < *(short *)(iVar4 + 0x32c)) {
        do {
          *(undefined4 *)(iVar9 + 0x460 + *(int *)(iVar4 + 0x328)) = 0;
          iVar10 = iVar10 + 1;
          iVar9 = iVar9 + 0x560;
        } while (iVar10 < *(short *)(iVar4 + 0x32c));
      }
      *(uint *)(iVar4 + 0x364) = *(uint *)(iVar4 + 0x364) & 0xffbfffff;
    }
    iVar4 = param_1[0x4d7];
    if (iVar4 != 0) {
      iVar9 = 0;
      iVar10 = 0;
      if (0 < *(short *)(iVar4 + 0x32c)) {
        do {
          *(undefined4 *)(*(int *)(iVar4 + 0x328) + 0x460 + iVar9) = 0;
          iVar10 = iVar10 + 1;
          iVar9 = iVar9 + 0x560;
        } while (iVar10 < *(short *)(iVar4 + 0x32c));
      }
      *(uint *)(iVar4 + 0x364) = *(uint *)(iVar4 + 0x364) & 0xffbfffff;
    }
    iVar4 = FUN_00ac89d0();
    if (iVar4 != 0) {
      iVar4 = FUN_00ac89d0();
      iVar9 = 0;
      iVar10 = 0;
      if (0 < *(short *)(iVar4 + 0x32c)) {
        do {
          *(undefined4 *)(*(int *)(iVar4 + 0x328) + 0x460 + iVar9) = 0;
          iVar10 = iVar10 + 1;
          iVar9 = iVar9 + 0x560;
        } while (iVar10 < *(short *)(iVar4 + 0x32c));
      }
    }
    FUN_00ac8e10(1);
    param_1[0x6d9] = 0;
    iStack_b0 = 0;
    FUN_00a88b50(1,0);
  }
  FUN_00441790();
  param_1[0x370] = 0x10000;
  param_1[0x371] = 0x10000;
  param_1[0x372] = 0x10000;
  param_1[0x373] = 0;
  if (iStack_b0 != 0) {
    param_1[0x36a] = 0;
    param_1[0x36c] = 0;
  }
  return 1;
}

// 00462170  FUN_00462170  size=382  [callgraph]
void __fastcall FUN_00462170(int *param_1)

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
        if ((param_1[0x379] != 0) && ((float)param_1[0x37c] < 0.0)) {
          piStack_8 = param_1;
          FUN_00441ac0();
          return;
        }
        piStack_8 = (int *)param_1[0x13c];
        iVar2 = FUN_00454c30(&piStack_8);
        if (iVar2 == 2) {
          if (((((param_1[0x373] == 0) &&
                ((param_1[0x6b1] != 0 || (iVar2 = FUN_004595c0(), iVar2 == 0)))) &&
               (param_1[0x373] == 0)) &&
              (((param_1[0x6b1] != 0 || (iVar2 = FUN_00443f80(), iVar2 == 0)) ||
               (iVar2 = FUN_00459df0(), iVar2 == 0)))) &&
             ((param_1[0x373] == 0 &&
              ((((param_1[0x6b1] != 0 || (iVar2 = FUN_00443fc0(), iVar2 == 0)) ||
                (iVar2 = FUN_0045a040(), iVar2 == 0)) &&
               ((param_1[0x373] == 0 && (param_1[0x6b1] == 0)))))))) {
            FUN_00459660(piVar3);
            return;
          }
        }
        else if (((((param_1[0x373] == 0) &&
                   (((param_1[0x6b1] != 0 || (iVar2 = FUN_00459660(piVar3), iVar2 == 0)) &&
                    (param_1[0x373] == 0)))) &&
                  (((param_1[0x6b1] != 0 || (iVar2 = FUN_004595c0(), iVar2 == 0)) &&
                   (param_1[0x373] == 0)))) &&
                 (((param_1[0x6b1] != 0 || (iVar2 = FUN_00443f80(), iVar2 == 0)) ||
                  (iVar2 = FUN_00459df0(), iVar2 == 0)))) &&
                (((param_1[0x373] == 0 && (param_1[0x6b1] == 0)) &&
                 (iVar2 = FUN_00443fc0(), iVar2 != 0)))) {
          FUN_0045a040();
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
        if ((((param_1[0x373] != 0) || (param_1[0x6b1] != 0)) ||
            (iVar2 = FUN_004595c0(piVar3), iVar2 == 0)) &&
           (((param_1[0x373] != 0 || (param_1[0x6b1] != 0)) ||
            ((iVar2 = FUN_00443f80(), iVar2 == 0 || (iVar2 = FUN_00459df0(), iVar2 == 0)))))) {
          iVar2 = FUN_00455770();
          if (iVar2 == 2) {
            if ((param_1[0x373] == 0) &&
               ((((param_1[0x6b1] != 0 || (iVar2 = FUN_00443fc0(), iVar2 == 0)) ||
                 (iVar2 = FUN_0045a040(), iVar2 == 0)) &&
                ((param_1[0x373] == 0 && (param_1[0x6b1] == 0)))))) {
              FUN_00459660();
            }
          }
          else if ((((param_1[0x373] == 0) &&
                    ((param_1[0x6b1] != 0 || (iVar2 = FUN_00459660(), iVar2 == 0)))) &&
                   (param_1[0x373] == 0)) &&
                  ((param_1[0x6b1] == 0 && (iVar2 = FUN_00443fc0(), iVar2 != 0)))) {
            FUN_0045a040();
            return;
          }
        }
      }
      return;
    case 0x10003:
      FUN_00455970();
      return;
    case 0x10004:
      FUN_0044fdf0();
      return;
    case 0x10005:
    case 0x10006:
      FUN_00440290();
      return;
    case 0x10010:
      FUN_00446c40();
      return;
    case 0x10011:
      FUN_00446cb0();
      return;
    case 0x10012:
      FUN_00446d20();
      return;
    }
  }
  else if (iVar2 < 0x80001) {
    if ((iVar2 != 0x80000) && (0x50000 < iVar2)) {
      if (iVar2 < 0x60001) {
        switch(iVar2) {
        case 0x5000a:
          FUN_0044e440();
          return;
        case 0x5000f:
          FUN_00451630();
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
          FUN_00447120();
          return;
        case 0x60012:
          FUN_00447540();
          return;
        case 0x60017:
          FUN_00447850();
          return;
        case 0x60018:
          FUN_00447980();
          return;
        }
      }
    }
  }
  else if (iVar2 < 0xa0001) {
    if (iVar2 == 0xa0000) {
      FUN_0044ec60();
      return;
    }
    switch(iVar2) {
    case 0x80006:
      FUN_00454ad0();
      return;
    case 0x80028:
      FUN_0044b4b0();
      return;
    case 0x8002b:
      FUN_00450090();
      return;
    }
  }
  else if ((iVar2 < 0xf0001) && (iVar2 != 0xf0000)) {
    switch(iVar2) {
    case 0xa0001:
      FUN_0044f210();
      return;
    case 0xa0002:
    case 0xa0003:
      FUN_0044f290();
      return;
    case 0xa0006:
      FUN_00445810();
      return;
    }
  }
  return;
}

// 004623E0  FUN_004623e0  size=1470  [callgraph]
void __fastcall FUN_004623e0(int param_1)

{
  int iVar1;
  int local_4;
  
  iVar1 = *(int *)(param_1 + 0x618);
  local_4 = param_1;
  if (iVar1 < 0x30001) {
    if (iVar1 == 0x30000) {
      FUN_00446400();
    }
    else {
      switch(iVar1) {
      case 0x10000:
        FUN_00440110();
        break;
      case 0x10001:
        FUN_004464e0();
        break;
      case 0x10002:
        FUN_004401e0();
        break;
      case 0x10003:
        FUN_00456170();
        break;
      case 0x10004:
        FUN_0045ca90();
        break;
      case 0x10005:
      case 0x10006:
        FUN_0045cf90();
        break;
      case 0x10007:
      case 0x10008:
        FUN_0045d180();
        break;
      case 0x10009:
        FUN_004402d0();
        break;
      case 0x1000a:
        FUN_004467f0();
        break;
      case 0x1000b:
        FUN_00446900();
        break;
      case 0x1000c:
        FUN_00446a60();
        break;
      case 0x1000d:
      case 0x1000e:
      case 0x1000f:
        FUN_0045d370();
        break;
      case 0x10010:
        FUN_0045d7d0();
        break;
      case 0x10011:
        FUN_0045dd20();
        break;
      case 0x10012:
        FUN_00440400();
        break;
      case 0x10013:
        FUN_00460260();
      }
    }
  }
  else if (iVar1 < 0x80001) {
    if (iVar1 == 0x80000) {
      Em0060::R0_ExplodeDie_2();
    }
    else if (iVar1 < 0x50001) {
      if (iVar1 == 0x50000) {
        FUN_0045a8f0();
      }
      else if (iVar1 == 0x30001) {
        FUN_00440070();
      }
    }
    else if (iVar1 < 0x60001) {
      if (iVar1 == 0x60000) {
        FUN_00446db0();
      }
      else {
        switch(iVar1) {
        case 0x50001:
          FUN_0045ab50();
          break;
        case 0x50002:
          FUN_0045af60();
          break;
        case 0x50003:
          FUN_004447b0();
          break;
        case 0x50004:
        case 0x50005:
        case 0x50006:
          FUN_0045b160();
          break;
        case 0x50007:
          FUN_00444a90();
          break;
        case 0x50008:
        case 0x50009:
          FUN_0044e110();
          break;
        case 0x5000a:
          FUN_00444ed0();
          break;
        case 0x5000b:
          FUN_004451d0();
          break;
        case 0x5000c:
          FUN_0044e460();
          break;
        case 0x5000d:
          FUN_0044e6a0();
          break;
        case 0x5000e:
          FUN_004453c0();
          break;
        case 0x5000f:
          FUN_004516c0();
          break;
        case 0x50014:
          FUN_004517d0();
          break;
        case 0x50018:
          Em0060::R0_ChanceAttack();
        }
      }
    }
    else {
      switch(iVar1) {
      case 0x60001:
        FUN_00460360();
        break;
      case 0x60002:
        FUN_00460480();
        break;
      case 0x60003:
        FUN_00460590();
        break;
      case 0x60004:
        FUN_004404c0();
        break;
      case 0x60005:
        FUN_00460830();
        break;
      case 0x60006:
        FUN_00440590();
        break;
      case 0x60007:
        FUN_00460a50();
        break;
      case 0x60009:
        FUN_00446e50();
        break;
      case 0x6000a:
        FUN_00440660();
        break;
      case 0x6000b:
        FUN_0044fe70();
        break;
      case 0x6000c:
        FUN_00447040();
        break;
      case 0x6000d:
        FUN_00440710();
        break;
      case 0x6000e:
        FUN_004471a0();
        break;
      case 0x6000f:
        FUN_00447280();
        break;
      case 0x60010:
        FUN_00447370();
        break;
      case 0x60011:
        FUN_00447460();
        break;
      case 0x60012:
        FUN_004407d0();
        break;
      case 0x60013:
        FUN_004475c0();
        break;
      case 0x60014:
        FUN_004476a0();
        break;
      case 0x60015:
        FUN_0044ff80();
        break;
      case 0x60016:
        FUN_00447780();
        break;
      case 0x60017:
        FUN_004478b0();
        break;
      case 0x60018:
        FUN_00447980();
      }
    }
  }
  else if (iVar1 < 0xa0001) {
    if (iVar1 == 0xa0000) {
      FUN_0044eed0();
    }
    else {
      switch(iVar1) {
      case 0x80001:
        FUN_00456610();
        break;
      case 0x80002:
        FUN_00444030();
        break;
      case 0x80003:
        FUN_004440e0();
        break;
      case 0x80004:
        FUN_00444190();
        break;
      case 0x80005:
        FUN_00442a70();
        break;
      case 0x80006:
        FUN_00442b30();
        break;
      case 0x80007:
        FUN_00442bf0();
        break;
      case 0x80008:
        FUN_00442cc0();
        break;
      case 0x80009:
        FUN_00449d50();
        break;
      case 0x8000a:
        FUN_00442eb0();
        break;
      case 0x8000b:
        FUN_0044a050();
        break;
      case 0x8000c:
        FUN_00442db0();
        break;
      case 0x8000d:
        FUN_0044a3a0();
        break;
      case 0x8000e:
        FUN_00442f80();
        break;
      case 0x8000f:
        FUN_0044a480();
        break;
      case 0x80010:
        FUN_0044a560();
        break;
      case 0x80011:
        FUN_0044a640();
        break;
      case 0x80012:
        FUN_0044a720();
        break;
      case 0x80013:
        FUN_0044a810();
        break;
      case 0x80014:
        FUN_0044a8f0();
        break;
      case 0x80015:
        FUN_0044a9e0();
        break;
      case 0x80016:
        FUN_0044aac0();
        break;
      case 0x80017:
        FUN_0044aba0();
        break;
      case 0x80018:
        FUN_0044ac80();
        break;
      case 0x80019:
        FUN_0044ad60();
        break;
      case 0x8001a:
        FUN_0044ae40();
        break;
      case 0x8001b:
        FUN_0044af20();
        break;
      case 0x8001c:
        FUN_0044b000();
        break;
      case 0x8001d:
        FUN_0044b0e0();
        break;
      case 0x8001e:
        FUN_0044b1c0();
        break;
      case 0x8001f:
        FUN_00443290();
        break;
      case 0x80020:
        FUN_00458e20();
        break;
      case 0x80021:
        FUN_00443380();
        break;
      case 0x80022:
        FUN_004435a0();
        break;
      case 0x80023:
        FUN_00443790();
        break;
      case 0x80024:
        FUN_00443870();
        break;
      case 0x80025:
        FUN_00443950();
        break;
      case 0x80026:
        FUN_00443ab0();
        break;
      case 0x80027:
        FUN_0044b2a0();
        break;
      case 0x80028:
        FUN_0044b500();
        break;
      case 0x80029:
        Em0060::R0_ExplodeDie();
        break;
      case 0x8002a:
        FUN_004479f0();
        break;
      case 0x8002b:
        FUN_004408d0();
        break;
      case 0x8002c:
        FUN_00440c30();
        break;
      case 0x8002d:
        FUN_00447ab0();
      }
    }
  }
  else if (iVar1 < 0xf0001) {
    if (iVar1 == 0xf0000) {
      FUN_0044e8e0();
    }
    else {
      switch(iVar1) {
      case 0xa0001:
        FUN_0045ba20();
        break;
      case 0xa0002:
      case 0xa0003:
        FUN_0044f3d0();
        break;
      case 0xa0004:
        FUN_0044f7c0();
        break;
      case 0xa0005:
        FUN_0044fa10();
        break;
      case 0xa0006:
        FUN_0045bfa0();
        break;
      case 0xa0007:
        FUN_0045c4f0();
      }
    }
  }
  else {
    switch(iVar1) {
    case 0xf0001:
      FUN_004455a0();
      break;
    case 0xf0002:
      FUN_0045e240();
      break;
    case 0xf0003:
    case 0xf0004:
    case 0xf0005:
      FUN_0045b350();
      break;
    case 0xf0006:
      FUN_00454f90();
      break;
    case 0xf0007:
      FUN_004552a0();
    }
  }
  if (*(int *)(param_1 + 0xdcc) == 0) {
    local_4 = *(int *)(param_1 + 0x4f0);
    iVar1 = FUN_00454c30(&local_4);
    if (((iVar1 == 2) &&
        ((((iVar1 = FUN_00a8c760(0x3a), iVar1 == 0 || (*(int *)(param_1 + 0xdcc) != 0)) ||
          (*(int *)(param_1 + 0x1ac4) != 0)) || (iVar1 = FUN_0045a3f0(), iVar1 == 0)))) &&
       (((iVar1 = FUN_00a8c760(0x3b), iVar1 != 0 && (*(int *)(param_1 + 0xdcc) == 0)) &&
        (*(int *)(param_1 + 0x1ac4) == 0)))) {
      FUN_0045a470();
      return;
    }
  }
  return;
}

// 00462C60  FUN_00462c60  size=2823  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00462dbc) */
/* WARNING: Removing unreachable block (ram,0x00462dc5) */
/* WARNING: Removing unreachable block (ram,0x00462dde) */
/* WARNING: Removing unreachable block (ram,0x00462e0f) */

undefined4 __thiscall FUN_00462c60(int *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  short sVar8;
  int iVar9;
  int *piVar10;
  float *pfVar11;
  undefined4 unaff_EBX;
  undefined4 uVar12;
  uint uVar13;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  float10 fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  int local_54;
  int local_50;
  uint local_4c;
  int local_48;
  undefined1 auStack_20 [28];
  
  iVar9 = *param_2;
  local_4c = 1;
  if (iVar9 == 0) {
    return 0;
  }
  if (iVar9 == 1) {
    return 0;
  }
  if (iVar9 == 2) {
    return 0;
  }
  if (iVar9 == 0x1b0) {
    return 0;
  }
  if (iVar9 == 0x147) {
    return 0;
  }
  local_50 = param_2[1];
  local_54 = 0;
  iVar9 = FUN_00a81330();
  if (iVar9 != 0) {
    local_54 = FUN_00a7c8a0();
  }
  param_1[0x6c0] = param_2[0x40];
  param_1[0x6c1] = param_2[0x41];
  param_1[0x6c2] = param_2[0x42];
  param_1[0x6c3] = param_2[0x43];
  if (local_54 != 0) {
    param_1[0x6c0] = *(int *)(local_54 + 0x40);
    param_1[0x6c1] = *(int *)(local_54 + 0x44);
    param_1[0x6c2] = *(int *)(local_54 + 0x48);
    param_1[0x6c3] = *(int *)(local_54 + 0x4c);
  }
  param_1[0x6c4] = param_2[8];
  param_1[0x6c5] = param_2[9];
  param_1[0x6c6] = param_2[10];
  param_1[0x6c7] = param_2[0xb];
  if ((local_54 == 0) || ((*(byte *)(local_54 + 0x4c0) & 0x10) == 0)) {
    if (*param_2 != 0x1d9) {
      return 0;
    }
  }
  else {
    if ((*(byte *)(param_1 + 0x36d) & 8) == 0) {
      *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 1;
    }
    (**(code **)(*param_1 + 0x220))(0x40000000);
    FUN_00460d00();
    (**(code **)(*param_1 + 0x21c))(unaff_EBX,(char)param_2[4],0x3c23d70a,0);
  }
  if (*param_2 == 0x4f) {
    iVar9 = FUN_00a8cab0();
    param_1[0x376] = param_1[0x374];
    param_1[0x375] = iVar9;
    FUN_00a8caf0(0x1000c,0,0,0);
    param_1[0x374] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4b3] = 0;
    uVar12 = 1;
    iVar9 = FUN_00441680();
    if (iVar9 != 0) {
      uVar12 = 0x21;
    }
    (**(code **)(*param_1 + 0x198))(local_54,param_2,uVar12);
    return 1;
  }
  if (*param_2 == 0x93) {
    (**(code **)(*param_1 + 0x198))(local_54,param_2,0x40000);
    return 0;
  }
  if ((*(byte *)(param_2 + 0x23) & 0x10) == 0) {
    if (param_1[0x379] != 0) {
      local_50 = FUN_00fdbc60();
    }
    iVar9 = FUN_00a8cbe0(0x1000a);
    if (iVar9 != 0) {
      local_50 = local_50 / 2;
    }
    (**(code **)(*param_1 + 0x30c))(local_50,0);
  }
  iVar9 = FUN_00443f80();
  if (iVar9 != 0) {
    FUN_00c27260(0x40200000);
  }
  iVar9 = FUN_00443fc0();
  if (iVar9 != 0) {
    FUN_00c272a0(0x40a00000);
  }
  if ((*(byte *)(param_2 + 0x23) & 2) == 0) {
    FUN_00461320(local_50,param_1 + 0x6c0,param_1 + 0x6c4);
  }
  else {
    FUN_00460d70();
    (**(code **)(*param_1 + 0x358))(399,0);
  }
  if (param_1[0x21c] < 1) {
    uVar13 = (uint)param_2[0x24] >> 0xb & 1;
    uVar12 = 0;
    if ((param_2[0x23] & 0x100000U) != 0) {
      uVar12 = 2;
    }
    if ((param_2[0x24] & 0x200U) != 0) {
      uVar12 = 4;
    }
    (**(code **)(*param_1 + 0x344))(5,uVar12,uVar13);
    FUN_00c1a1c0(param_1[0x13c],param_1[0x2e7]);
    if ((uVar13 != 0) && ((*(byte *)((int)param_2 + 0x92) & 1) != 0)) {
      piVar10 = (int *)FUN_00c209f0();
      (**(code **)(*piVar10 + 0x14))(0xe);
    }
    (**(code **)(*param_1 + 0x198))(unaff_EDI,param_2,1);
    param_1[0x139] = 1;
    FUN_00a8caf0(0x80000,0,0,0);
    param_1[0x374] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4b3] = 0;
    return unaff_ESI;
  }
  bVar7 = true;
  param_1[0x37d] = param_1[0x37d] + 1;
  if (2 < *(byte *)((int)param_2 + 0x11)) {
    param_1[0x5ad] = param_1[0x5ad] - (uint)*(byte *)((int)param_2 + 0x11);
  }
  uVar19 = 0x3f800000;
  uVar18 = 0;
  uVar17 = 0x8000210;
  uVar16 = 0x3f800000;
  uVar15 = 0x3d088889;
  uVar12 = 1;
  sVar8 = FUN_00dde2d0(0,2);
  FUN_00aa4080(sVar8 + 0x61,uVar12,uVar15,uVar16,uVar17,uVar18,uVar19);
  fVar14 = (float10)FUN_00ddba30((float)param_2[0xc] - (float)param_1[0x25]);
  param_1[0x245] = (int)(float)fVar14;
  if ((param_1[0x186] == 0x1000a) ||
     ((iVar9 = FUN_00444740(), iVar9 == 0 && (iVar9 = FUN_004410a0(), iVar9 == 0)))) {
    local_4c = 0x401;
    goto LAB_00463432;
  }
  if ((*(byte *)((int)param_2 + 0x8e) & 1) != 0) {
    if ((((param_1[0x61c] == 0) && (param_1[0x620] == 0)) && (param_1[0x624] == 0)) &&
       (param_1[0x628] == 0)) {
      bVar7 = false;
    }
    iVar9 = FUN_00ac8120();
    if (iVar9 != 0) {
      FUN_00ac8120();
      iVar9 = FUN_00bda170();
      if (iVar9 == 0) goto LAB_00463219;
    }
    if (bVar7) {
      local_4c = 0x41;
      iVar9 = FUN_00a8cab0();
      param_1[0x375] = iVar9;
      param_1[0x376] = param_1[0x374];
      FUN_00a8caf0(0x60001,0,0,0);
      param_1[0x374] = 0;
      FUN_00a962d0(0,0);
      param_1[0x4b3] = 0;
    }
  }
LAB_00463219:
  if (param_1[0x686] != 0) {
    iVar9 = FUN_004410a0();
    if (iVar9 == 0) {
      iVar9 = FUN_00444290();
      if (iVar9 != 0) goto LAB_00463295;
      iVar9 = FUN_00a8cab0();
      param_1[0x375] = iVar9;
      param_1[0x376] = param_1[0x374];
      uVar12 = 0x60001;
    }
    else {
      iVar9 = FUN_00a8cab0();
      param_1[0x375] = iVar9;
      param_1[0x376] = param_1[0x374];
      uVar12 = 0x60002;
    }
    FUN_00a8caf0(uVar12,0,0,0);
    param_1[0x374] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4b3] = 0;
  }
LAB_00463295:
  if ((param_2[0x24] & 0x800000U) == 0) {
    if ((*param_2 == 0x4c) || (*param_2 == 0x4b)) {
      FUN_00a81330();
      pfVar11 = (float *)FUN_00a7c8b0();
      fVar1 = *pfVar11;
      fVar2 = pfVar11[1];
      fVar3 = pfVar11[2];
      pfVar11 = (float *)(**(code **)(*param_1 + 0x68))();
      fVar4 = *pfVar11;
      fVar5 = pfVar11[1];
      fVar6 = pfVar11[2];
      pfVar11 = (float *)FUN_00a925a0(auStack_20);
      uVar12 = 0x6000f;
      if (pfVar11[2] * (fVar3 - fVar6) + (fVar1 - fVar4) * *pfVar11 + pfVar11[1] * (fVar2 - fVar5)
          <= 0.0) {
        uVar12 = 0x60010;
      }
      FUN_00440d80(uVar12,0,0,0,0);
    }
    else if ((9 < *(byte *)((int)param_2 + 0x11)) || ((param_2[0x24] & 0x2000000U) != 0)) {
      iVar9 = FUN_00a8cab0();
      param_1[0x375] = iVar9;
      param_1[0x376] = param_1[0x374];
      FUN_00a8caf0(0x60011,0,0,0);
      param_1[0x374] = 0;
      FUN_00a962d0(0,0);
      param_1[0x4b3] = 0;
      if (local_54 != 0) {
        FUN_00a8e880(local_54 + 0x40);
        (**(code **)(*param_1 + 0x308))(0x3f800000,0x393702d3,0x40490fdb,0);
      }
    }
  }
  else {
    iVar9 = FUN_00a8cab0();
    param_1[0x375] = iVar9;
    param_1[0x376] = param_1[0x374];
    FUN_00a8caf0(0x6000b,0,0,0);
    param_1[0x374] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4b3] = 0;
  }
LAB_00463432:
  FUN_00444240(local_50);
  FUN_004442c0(local_50);
  FUN_00444360(local_50);
  FUN_004443d0(local_50);
  FUN_00444430(local_50);
  FUN_00444490(local_50);
  FUN_004444f0(local_50);
  if (param_1[0x687] != 0) {
    iVar9 = FUN_00a8cab0();
    param_1[0x375] = iVar9;
    param_1[0x376] = param_1[0x374];
    FUN_00a8caf0(0x1000c,0,0,0);
    param_1[0x374] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4b3] = 0;
  }
  if (param_1[0x688] != 0) {
    iVar9 = FUN_00a8cab0();
    param_1[0x375] = iVar9;
    param_1[0x376] = param_1[0x374];
    FUN_00a8caf0(0x60001,0,0,0);
    param_1[0x374] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4b3] = 0;
  }
  if (param_1[0x689] != 0) {
    iVar9 = FUN_00a8cab0();
    param_1[0x376] = param_1[0x374];
    param_1[0x375] = iVar9;
    FUN_00a8caf0(0x60009,0,0,0);
    param_1[0x374] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4b3] = 0;
  }
  if (param_1[0x68a] != 0) {
    iVar9 = FUN_00a8cab0();
    param_1[0x375] = iVar9;
    param_1[0x376] = param_1[0x374];
    FUN_00a8caf0(0x60009,0,0,0);
    param_1[0x374] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4b3] = 0;
  }
  if (param_1[0x68b] != 0) {
    iVar9 = FUN_00a8cab0();
    param_1[0x375] = iVar9;
    param_1[0x376] = param_1[0x374];
    FUN_00a8caf0(0x60009,0,0,0);
    param_1[0x374] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4b3] = 0;
  }
  if (param_1[0x68c] != 0) {
    iVar9 = FUN_00a8cab0();
    param_1[0x376] = param_1[0x374];
    param_1[0x375] = iVar9;
    FUN_00a8caf0(0x60009,0,0,0);
    param_1[0x374] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4b3] = 0;
  }
  if ((param_2[0x23] & 0x20000U) != 0) {
    iVar9 = FUN_00a8cab0();
    param_1[0x375] = iVar9;
    param_1[0x376] = param_1[0x374];
    FUN_00a8caf0(0x60009,0,0,0);
    param_1[0x374] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4b3] = 0;
  }
  if (*param_2 == 0x92) {
    local_4c = local_4c & 0xffffffbf | 0x20;
    iVar9 = 0;
    local_48 = 4;
    do {
      FUN_00460c70(iVar9,0);
      iVar9 = iVar9 + 1;
      local_48 = local_48 + -1;
    } while (local_48 != 0);
    iVar9 = FUN_00a8cab0();
    param_1[0x376] = param_1[0x374];
    param_1[0x375] = iVar9;
    FUN_00a8caf0(0x6000f,0,0,0);
    param_1[0x374] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4b3] = 0;
  }
  if (((*(byte *)(param_2 + 0x23) & 1) != 0) && ((float)param_1[0x6e4] <= 0.0)) {
    (**(code **)(*param_1 + 0x358))(0x18e,0);
    param_1[0x6e4] = param_1[0x6e5];
    iVar9 = FUN_00a8cab0();
    param_1[0x376] = param_1[0x374];
    param_1[0x375] = iVar9;
    FUN_00a8caf0(0x1000c,0,0,0);
    param_1[0x374] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4b3] = 0;
  }
  (**(code **)(*param_1 + 0x198))(local_54,param_2,local_4c);
  return 1;
}

// 00463770  FUN_00463770  size=1099  [callgraph]
undefined4 __thiscall FUN_00463770(int *param_1,int *param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  float10 fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 local_4;
  
  iVar5 = *param_2;
  local_4 = 0;
  if ((((iVar5 != 0) && (iVar5 != 1)) && (iVar5 != 2)) && ((iVar5 != 0x1b0 && (iVar5 != 0x147)))) {
    iVar5 = param_2[1];
    iVar6 = 0;
    iVar2 = FUN_00a81330();
    if (iVar2 != 0) {
      iVar6 = FUN_00a7c8a0();
    }
    param_1[0x6c0] = param_2[0x40];
    param_1[0x6c1] = param_2[0x41];
    param_1[0x6c2] = param_2[0x42];
    param_1[0x6c3] = param_2[0x43];
    if (iVar6 != 0) {
      param_1[0x6c0] = *(int *)(iVar6 + 0x40);
      param_1[0x6c1] = *(int *)(iVar6 + 0x44);
      param_1[0x6c2] = *(int *)(iVar6 + 0x48);
      param_1[0x6c3] = *(int *)(iVar6 + 0x4c);
    }
    param_1[0x6c4] = param_2[8];
    param_1[0x6c5] = param_2[9];
    param_1[0x6c6] = param_2[10];
    param_1[0x6c7] = param_2[0xb];
    if ((iVar6 == 0) || ((*(byte *)(iVar6 + 0x4c0) & 0x10) == 0)) {
      if (*param_2 != 0x1d9) {
        return 0;
      }
    }
    else {
      (**(code **)(*param_1 + 0x220))(0x40000000);
      FUN_00460d00();
      (**(code **)(*param_1 + 0x21c))(iVar6,(char)param_2[4],0x3c23d70a,0);
    }
    if ((*(byte *)(param_2 + 0x23) & 0x10) == 0) {
      (**(code **)(*param_1 + 0x30c))(iVar5,0);
    }
    if ((*(byte *)(param_2 + 0x23) & 2) == 0) {
      FUN_00461320(iVar5,param_1 + 0x6c0,param_1 + 0x6c4);
    }
    else {
      FUN_00460d70();
      (**(code **)(*param_1 + 0x358))(399,0);
    }
    if (param_1[0x21c] < 1) {
      uVar7 = (uint)param_2[0x24] >> 0xb & 1;
      uVar3 = 0;
      if ((param_2[0x23] & 0x100000U) != 0) {
        uVar3 = 2;
      }
      if ((param_2[0x24] & 0x200U) != 0) {
        uVar3 = 4;
      }
      (**(code **)(*param_1 + 0x344))(5,uVar3,uVar7);
      FUN_00c1a1c0(param_1[0x13c],param_1[0x2e7]);
      if ((uVar7 != 0) && ((*(byte *)((int)param_2 + 0x92) & 1) != 0)) {
        piVar4 = (int *)FUN_00c209f0();
        (**(code **)(*piVar4 + 0x14))(0xe);
      }
      (**(code **)(*param_1 + 0x198))(iVar6,param_2,1);
      param_1[0x139] = 1;
      FUN_00a8caf0(0x8000d,0,0,0);
      param_1[0x374] = 0;
      FUN_00a962d0(0,0);
      param_1[0x4b3] = 0;
      return uVar3;
    }
    param_1[0x37d] = param_1[0x37d] + 1;
    if (2 < *(byte *)((int)param_2 + 0x11)) {
      param_1[0x5ad] = param_1[0x5ad] - (uint)*(byte *)((int)param_2 + 0x11);
    }
    uVar13 = 0x3f800000;
    uVar12 = 0;
    uVar11 = 0x8000210;
    uVar10 = 0x3f800000;
    uVar9 = 0x3d088889;
    uVar3 = 1;
    sVar1 = FUN_00dde2d0(0,2);
    FUN_00aa4080(sVar1 + 0x61,uVar3,uVar9,uVar10,uVar11,uVar12,uVar13);
    (**(code **)(*param_1 + 0x198))(iVar6,param_2,1);
    fVar8 = (float10)FUN_00ddba30((float)param_2[0xc] - (float)param_1[0x25]);
    param_1[0x245] = (int)(float)fVar8;
    if ((param_2[0x23] & 0x20000U) != 0) {
      FUN_00a8caf0(0x80028,0,0,0);
      param_1[0x374] = 0;
      FUN_00a962d0(0,0);
      param_1[0x4b3] = 0;
      return 1;
    }
    uVar7 = param_2[0x24];
    if ((uVar7 & 0x800000) == 0) {
      iVar5 = FUN_004410a0();
      if ((iVar5 != 0) && ((9 < *(byte *)((int)param_2 + 0x11) || ((uVar7 & 0x2000000) != 0)))) {
        iVar5 = FUN_00a8cab0();
        param_1[0x375] = iVar5;
        param_1[0x376] = param_1[0x374];
        FUN_00a8caf0(0x60011,0,0,0);
        param_1[0x374] = 0;
        FUN_00a962d0(0,0);
        param_1[0x4b3] = 0;
        if (iVar6 != 0) {
          FUN_00a8e880(iVar6 + 0x40);
          (**(code **)(*param_1 + 0x308))(0x3f800000,0x393702d3,0x40490fdb,0);
        }
      }
    }
    else {
      iVar5 = FUN_00a8cab0();
      param_1[0x375] = iVar5;
      param_1[0x376] = param_1[0x374];
      FUN_00a8caf0(0x6000b,0,0,0);
      param_1[0x374] = 0;
      FUN_00a962d0(0,0);
      param_1[0x4b3] = 0;
      if (param_1[0x5ad] < 1) {
        sVar1 = FUN_00dde2d0(0,0x1e);
        param_1[0x5ad] = sVar1 + 10;
        return 1;
      }
    }
    local_4 = 1;
  }
  return local_4;
}

// 00463BC0  FUN_00463bc0  size=1298  [callgraph]
undefined4 __thiscall FUN_00463bc0(int *param_1,int *param_2)

{
  byte *pbVar1;
  int *piVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  float10 fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  piVar2 = param_2;
  iVar7 = *param_2;
  if (iVar7 == 0) {
    return 0;
  }
  if (iVar7 == 1) {
    return 0;
  }
  if (iVar7 == 2) {
    return 0;
  }
  if (iVar7 != 0x1b0) {
    if (iVar7 == 0x147) {
      return 0;
    }
    iVar7 = param_2[1];
    iVar8 = 0;
    iVar4 = FUN_00a81330();
    if (iVar4 != 0) {
      iVar8 = FUN_00a7c8a0();
    }
    param_1[0x6c0] = param_2[0x40];
    param_1[0x6c1] = param_2[0x41];
    param_1[0x6c2] = param_2[0x42];
    param_1[0x6c3] = param_2[0x43];
    if (iVar8 != 0) {
      param_1[0x6c0] = *(int *)(iVar8 + 0x40);
      param_1[0x6c1] = *(int *)(iVar8 + 0x44);
      param_1[0x6c2] = *(int *)(iVar8 + 0x48);
      param_1[0x6c3] = *(int *)(iVar8 + 0x4c);
    }
    param_1[0x6c4] = param_2[8];
    param_1[0x6c5] = param_2[9];
    param_1[0x6c6] = param_2[10];
    param_1[0x6c7] = param_2[0xb];
    if ((iVar8 == 0) || ((*(byte *)(iVar8 + 0x4c0) & 0x10) == 0)) {
      if (*param_2 != 0x1d9) {
        return 0;
      }
    }
    else {
      (**(code **)(*param_1 + 0x220))(0x40000000);
      FUN_00460d00();
      (**(code **)(*param_1 + 0x21c))(iVar8,(char)param_2[4],0x3c23d70a,0);
    }
    if (*param_2 != 0x93) {
      pbVar1 = (byte *)(param_2 + 0x23);
      param_2 = (int *)iVar7;
      if ((*pbVar1 & 0x10) == 0) {
        if (param_1[0x379] != 0) {
          param_2 = (int *)FUN_00fdbc60();
        }
        (**(code **)(*param_1 + 0x30c))(param_2,0);
      }
      if (param_1[0x6ca] == 0) {
        if ((*(byte *)(piVar2 + 0x23) & 2) == 0) {
          FUN_00461320(param_2,param_1 + 0x6c0,param_1 + 0x6c4);
        }
        else {
          FUN_00460d70();
          (**(code **)(*param_1 + 0x358))(399,0);
        }
        if (0 < param_1[0x21c]) {
          param_1[0x37d] = param_1[0x37d] + 1;
          if (2 < *(byte *)((int)piVar2 + 0x11)) {
            param_1[0x5ad] = param_1[0x5ad] - (uint)*(byte *)((int)piVar2 + 0x11);
          }
          uVar15 = 0x3f800000;
          uVar14 = 0;
          uVar13 = 0x8000210;
          uVar12 = 0x3f800000;
          uVar11 = 0x3d088889;
          uVar5 = 1;
          sVar3 = FUN_00dde2d0(0,2);
          FUN_00aa4080(sVar3 + 0x61,uVar5,uVar11,uVar12,uVar13,uVar14,uVar15);
          (**(code **)(*param_1 + 0x198))(iVar8,piVar2,1);
          fVar10 = (float10)FUN_00ddba30((float)piVar2[0xc] - (float)param_1[0x25]);
          param_1[0x245] = (int)(float)fVar10;
          if ((piVar2[0x23] & 0x20000U) != 0) {
            FUN_00a8caf0(0x80028,0,0,0);
            param_1[0x374] = 0;
            FUN_00a962d0(0,0);
            param_1[0x4b3] = 0;
          }
          uVar9 = piVar2[0x24];
          if ((uVar9 & 0x800000) == 0) {
            if ((uVar9 & 0x1000000) == 0) {
              iVar7 = FUN_004410a0();
              if ((iVar7 != 0) &&
                 ((9 < *(byte *)((int)piVar2 + 0x11) || ((uVar9 & 0x2000000) != 0)))) {
                iVar7 = FUN_00a8cab0();
                param_1[0x375] = iVar7;
                param_1[0x376] = param_1[0x374];
                FUN_00a8caf0(0x60011,0,0,0);
                param_1[0x374] = 0;
                FUN_00a962d0(0,0);
                param_1[0x4b3] = 0;
                if (iVar8 == 0) {
                  return 1;
                }
                FUN_00a8e880(iVar8 + 0x40);
                (**(code **)(*param_1 + 0x308))(0x3f800000,0x393702d3,0x40490fdb,0);
                return 1;
              }
              iVar7 = FUN_00a8cab0();
              param_1[0x376] = param_1[0x374];
              uVar5 = 0x6000c;
            }
            else {
              iVar7 = FUN_00a8cab0();
              param_1[0x376] = param_1[0x374];
              uVar5 = 0x6000e;
            }
            param_1[0x375] = iVar7;
            FUN_00a8caf0(uVar5,0,0,0);
            param_1[0x374] = 0;
            FUN_00a962d0(0,0);
            param_1[0x4b3] = 0;
          }
          else {
            iVar7 = FUN_00a8cab0();
            param_1[0x375] = iVar7;
            param_1[0x376] = param_1[0x374];
            FUN_00a8caf0(0x6000b,0,0,0);
            param_1[0x374] = 0;
            FUN_00a962d0(0,0);
            param_1[0x4b3] = 0;
            if (param_1[0x5ad] < 1) {
              sVar3 = FUN_00dde2d0(0,0x1e);
              param_1[0x5ad] = sVar3 + 10;
              return 1;
            }
          }
          return 1;
        }
        uVar9 = (uint)piVar2[0x24] >> 0xb & 1;
        uVar5 = 0;
        if ((piVar2[0x23] & 0x100000U) != 0) {
          uVar5 = 2;
        }
        if ((piVar2[0x24] & 0x200U) != 0) {
          uVar5 = 4;
        }
        (**(code **)(*param_1 + 0x344))(5,uVar5,uVar9);
        FUN_00c1a1c0(param_1[0x13c],param_1[0x2e7]);
        if ((uVar9 != 0) && ((*(byte *)((int)piVar2 + 0x92) & 1) != 0)) {
          piVar6 = (int *)FUN_00c209f0();
          (**(code **)(*piVar6 + 0x14))(0xe);
        }
        (**(code **)(*param_1 + 0x198))(iVar8,piVar2,1);
        param_1[0x139] = 1;
        FUN_00a8caf0(0x80020,0,0,0);
        param_1[0x374] = 0;
        FUN_00a962d0(0,0);
        param_1[0x4b3] = 0;
        return uVar5;
      }
      (**(code **)(*param_1 + 0x198))(iVar8,piVar2,1);
      return 0;
    }
    (**(code **)(*param_1 + 0x198))(iVar8,param_2,0x40000);
    return 0;
  }
  return 0;
}

// 004640E0  Em0060::vf4C  size=735  [class]
void __fastcall Em0060::vf4C(int param_1)

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
    if (*(int *)(param_1 + 0x1b5c) != 0) {
      iVar3 = FUN_00ac45b0();
      fVar1 = *(float *)(param_1 + 0x1b50) - *(float *)(param_1 + 0x910);
      *(float *)(param_1 + 0x1b50) = fVar1;
      fVar2 = *(float *)(param_1 + 0x1b54) - *(float *)(param_1 + 0x910);
      *(float *)(param_1 + 0x1b54) = fVar2;
      if (*(int *)(param_1 + 7000) == 0) {
        if ((fVar2 <= 0.0) && (*(float *)(param_1 + 0xa9c) <= 0.7853982)) {
          *(undefined4 *)(param_1 + 7000) = 1;
          *(undefined4 *)(param_1 + 0x1b54) = 0x42100000;
        }
      }
      else {
        if ((fVar2 <= 0.0) && (0.7853982 < *(float *)(param_1 + 0xa9c))) {
          *(undefined4 *)(param_1 + 7000) = 0;
          *(undefined4 *)(param_1 + 0x1b54) = 0x42100000;
        }
        if (((*(int *)(param_1 + 0x1354) != 0) && (iVar3 != 0)) && (fVar1 <= 0.0)) {
          uVar7 = 0;
          *(undefined4 *)(param_1 + 0x1b50) = 0x41200000;
          uVar4 = FUN_00a7c8b0(0);
          FUN_0043fc90(iVar3,uVar4,uVar7);
        }
      }
    }
    *(undefined4 *)(param_1 + 0x1b5c) = 0;
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
    *(float *)(param_1 + 0xdf8) = *(float *)(param_1 + 0xdf8) - *(float *)(param_1 + 0x910);
    iVar3 = FUN_00ac4770();
    if (iVar3 == 0) {
      FUN_00462170();
    }
    FUN_004623e0();
  }
  return;
}

// 004643C0  Em0060::vf32C  size=762  [class]
undefined4 __fastcall Em0060::vf32C(int *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  LPCRITICAL_SECTION unaff_EBX;
  int iVar7;
  undefined1 auStack_270 [16];
  undefined1 local_260 [20];
  int iStack_24c;
  
  param_1[0x1a1] = 0;
  FUN_00ac2080(0);
  FUN_00ac2080(1);
  FUN_00ac2080(2);
  iVar5 = param_1[0x186];
  param_1[0x5a5] = 0;
  iVar3 = FUN_00a8ef10();
  if (iVar3 != 0) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0x130) & 1) != 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x280);
    if (param_1[0x286] != 0) {
      EnterCriticalSection(lpCriticalSection);
    }
    iVar3 = param_1[0x19f];
    iVar7 = param_1[0x1a1] * 0x150 + iVar3;
    FUN_00445db0();
    FUN_004105d0();
    iVar4 = -1;
    bVar2 = false;
    if (iVar3 != iVar7) {
      do {
        iVar1 = *(int *)(iVar3 + 4);
        if (iVar4 <= iVar1) {
          FUN_00448f50(iVar3);
          bVar2 = true;
          iVar4 = iVar1;
        }
        iVar3 = iVar3 + 0x150;
      } while (iVar3 != iVar7);
      if (bVar2) {
        if ((((iVar5 != 0x60001) && (iVar5 != 0x60002)) && (iVar5 != 0x60003)) &&
           (((iVar5 != 0x60005 && (iVar5 != 0x60009)) && (iVar5 != 0x1000c)))) {
          FUN_00a8e520();
        }
        FUN_0043e160(local_260);
        FUN_00a81330();
        FUN_00a7c8b0();
        (**(code **)(*param_1 + 0x68))();
        FUN_00a92640(auStack_270);
        iVar5 = FUN_004611a0(local_260);
        if ((iVar5 == 0) && (iVar5 = FUN_00a8f040(local_260), iVar5 == 0)) {
          if (param_1[0x373] == 0) {
            if ((((param_1[0x139] == 0) && (param_1[0x6da] == 0)) &&
                (iVar5 = FUN_00a8cbe0(0x6000e), iVar5 == 0)) &&
               (((iVar5 = FUN_00a8cbe0(0x60013), iVar5 == 0 &&
                 (iVar5 = FUN_00a9f760(0x77), iVar5 == 0)) &&
                (iVar5 = FUN_00a9f760(0x7d), iVar5 == 0)))) {
              if ((param_1[0x6cb] == 0) &&
                 (((iVar5 = (**(code **)(*param_1 + 0x1d8))(), iVar5 != 0 ||
                   (iVar5 = (**(code **)(*param_1 + 800))(0x3d888889), iVar5 == 0)) ||
                  (iVar5 = FUN_008e2740(), iVar5 == 0)))) {
                uVar6 = FUN_00463bc0(local_260);
              }
              else if ((((param_1[0x6ca] == 0) && (iVar5 = FUN_00a8cbe0(0x80006), iVar5 == 0)) &&
                       (iVar5 = FUN_00a8cbe0(0x80008), iVar5 == 0)) &&
                      (iVar5 = FUN_00a8cbe0(0x60017), iVar5 == 0)) {
                uVar6 = FUN_00462c60(local_260);
              }
              else {
                uVar6 = FUN_00463770(local_260);
              }
            }
            else {
              uVar6 = FUN_0044d500(local_260);
            }
            if (param_1[0x286] != 0) {
              LeaveCriticalSection(lpCriticalSection);
            }
            return uVar6;
          }
          uVar6 = 0;
          if (iStack_24c != 0) {
            uVar6 = FUN_00a7c8a0();
          }
          (**(code **)(*param_1 + 0x198))(uVar6,local_260,0x401);
          if (unaff_EBX[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
            LeaveCriticalSection(unaff_EBX);
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

// 00AAC940  Em0060::Em0060  size=264  [class]
undefined4 * __fastcall Em0060::Em0060(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  BehaviorAppBase::BehaviorAppBase_34();
  *param_1 = vftable;
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  FUN_00a826e0();
  FUN_00a826e0();
  FUN_00a7c930();
  FUN_00a7c930();
  FUN_00a603a0();
  iVar2 = 2;
  do {
    FUN_00a7c930();
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  iVar2 = 1;
  do {
    FUN_00a826e0();
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  iVar2 = 0xf;
  puVar1 = param_1 + 0x5b0;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 5;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  FUN_009003e0();
  FUN_00904d60();
  FUN_00904d60();
  param_1[0x6be] = 0;
  param_1[0x6bf] = 0;
  return param_1;
}

// 00AACA50  Em0060::vf04  size=6  [class]
undefined * Em0060::vf04(void)

{
  return &DAT_01b34c80;
}

// 00AACA60  Em0060::vf20C  size=7  [class]
float10 Em0060::vf20C(void)

{
  return (float10)3.5;
}

// 00AACA70  Em0060::vf1DC  size=6  [class]
undefined4 Em0060::vf1DC(void)

{
  return 1;
}

// 00AACA80  FUN_00aaca80  size=110  [callgraph]
void FUN_00aaca80(void)

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
  cEnemyCautionStateManager::cEnemyCautionStateManager_3();
  return;
}

// 00AB6E70  Em0060::vf00  size=30  [class]
undefined4 __thiscall Em0060::vf00(undefined4 param_1,byte param_2)

{
  FUN_00aaca80();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

