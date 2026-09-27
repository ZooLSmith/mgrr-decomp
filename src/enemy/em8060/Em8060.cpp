// src/enemy/em8060/Em8060.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0067BFA0..00ABA3B0, 354 functions

#include "mgrr.h"
#include "Em8060.h"

// 0067BFA0  FUN_0067bfa0  size=81  [callgraph]
void __thiscall FUN_0067bfa0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  *(undefined4 *)(param_1 + 0x1710) = *param_2;
  *(undefined4 *)(param_1 + 0x1714) = param_2[1];
  *(undefined4 *)(param_1 + 0x1718) = param_2[2];
  *(undefined4 *)(param_1 + 0x171c) = param_2[3];
  *(undefined4 *)(param_1 + 0x1720) = *param_3;
  *(undefined4 *)(param_1 + 0x1724) = param_3[1];
  *(undefined4 *)(param_1 + 0x1728) = param_3[2];
  *(undefined4 *)(param_1 + 0x172c) = param_3[3];
  return;
}

// 0067C000  FUN_0067c000  size=213  [callgraph]
void __fastcall FUN_0067c000(int param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0xc04) != 0) {
    iVar5 = 3;
    do {
      iVar2 = FUN_00a81330();
      if ((iVar2 != 0) && (piVar3 = (int *)FUN_00a7c8a0(), piVar3 != (int *)0x0)) {
        if ((short)piVar3[0xc9] < 1) {
          FUN_00dd5650(&DAT_0164524c);
          fVar1 = 0.0;
        }
        else {
          fVar1 = *(float *)(piVar3[200] + 0x1c);
        }
        fVar1 = fVar1 - *(float *)(param_1 + 0x910) * 0.05;
        if (fVar1 < 0.0 != (fVar1 == 0.0)) {
          (**(code **)(*piVar3 + 0x20))();
          FUN_009fdde0();
          fVar1 = 0.0;
        }
        iVar4 = 0;
        iVar2 = 0;
        if (0 < (short)piVar3[0xc9]) {
          do {
            *(float *)(piVar3[200] + 0x1c + iVar4) = fVar1;
            iVar2 = iVar2 + 1;
            iVar4 = iVar4 + 0x70;
          } while (iVar2 < (short)piVar3[0xc9]);
        }
      }
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}

// 0067C0E0  Em8060::vf14C  size=48  [class]
bool Em8060::vf14C(int param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_00a7c8a0();
  }
  if ((param_1 != 0x40) && (param_1 != 0x41)) {
    return param_1 == 0x7a;
  }
  return true;
}

// 0067C110  Em8060::vf158  size=5  [class]
undefined4 Em8060::vf158(void)

{
  return 0;
}

// 0067C120  Em8060::vf184  size=6  [class]
undefined4 Em8060::vf184(void)

{
  return 0xffffffff;
}

// 0067C130  Em8060::vf188  size=43  [class]
void Em8060::vf188(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 != 0) {
    FUN_00a7c950();
    uVar1 = FUN_00a7c7f0();
    FUN_00a7c960(uVar1);
  }
  return;
}

// 0067C160  Em8060::vf2F8  size=46  [class]
void __fastcall Em8060::vf2F8(int *param_1)

{
  if (param_1[0x294] != 0) {
    (**(code **)(*param_1 + 0x344))(5,0,0);
    param_1[0x1af] = 1;
  }
  FUN_009fdde0();
  return;
}

// 0067C190  Em8060::vf368  size=12  [class]
bool __fastcall Em8060::vf368(int param_1)

{
  return *(int *)(param_1 + 0x1c68) != 0;
}

// 0067C1C0  FUN_0067c1c0  size=153  [between]
void __fastcall FUN_0067c1c0(int *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0067c257. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 0067C260  FUN_0067c260  size=183  [between]
void __fastcall FUN_0067c260(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(5,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
    *(undefined4 *)(param_1 + 0x920) = 0x42f00000;
    uVar1 = *(undefined4 *)(param_1 + 0x1aa8 + *(int *)(param_1 + 0xeb4) * 4);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x924) = uVar1;
    *(undefined4 *)(param_1 + 0x1b40) = 0;
    *(undefined4 *)(param_1 + 0x1b44) = 0;
    *(undefined4 *)(param_1 + 0x928) = 0x42f00000;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) goto LAB_0067c2f4;
  FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_0067c2f4:
  if (0.0 < *(float *)(param_1 + 0x920)) {
    *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
  }
  return;
}

// 0067C330  FUN_0067c330  size=171  [between]
void __fastcall FUN_0067c330(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0xd,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) goto LAB_0067c3a7;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
LAB_0067c3a7:
  (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3db2b8c2,0);
  return;
}

// 0067C3E0  FUN_0067c3e0  size=26  [between]
void FUN_0067c3e0(void)

{
  int iVar1;
  
  iVar1 = FUN_00a8c760(4);
  if (iVar1 != 0) {
    FUN_00dde2d0(0,3);
  }
  return;
}

// 0067C420  FUN_0067c420  size=231  [between]
void __fastcall FUN_0067c420(int *param_1)

{
  float fVar1;
  int iVar2;
  
  iVar2 = param_1[0x187];
  if (iVar2 == 0) {
    if (0.0 < (float)param_1[0x6d3]) {
      FUN_00aa4080(5,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (iVar2 != 1) {
    if (iVar2 != 2) {
      return;
    }
    goto LAB_0067c4d8;
  }
  fVar1 = (float)param_1[0x6d3];
  param_1[0x6d3] = (int)(fVar1 - (float)param_1[0x244]);
  if (0.0 < fVar1 - (float)param_1[0x244]) {
    return;
  }
  FUN_00aa4080(0x2b,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  param_1[0x187] = param_1[0x187] + 1;
LAB_0067c4d8:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0067c505. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 0067C550  FUN_0067c550  size=93  [between]
void __fastcall FUN_0067c550(int param_1)

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

// 0067C610  FUN_0067c610  size=170  [between]
void __fastcall FUN_0067c610(int *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0067c6b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 0067C6E0  FUN_0067c6e0  size=153  [between]
void __fastcall FUN_0067c6e0(int *param_1)

{
  char cVar1;
  int iVar2;
  
  if (param_1[0x187] == 0) {
    if (param_1[0x6dc] == 0) {
      cVar1 = (param_1[0x6db] == 0) * '\x04' + '#';
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
                    /* WARNING: Could not recover jumptable at 0x0067c777. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 0067C7D0  FUN_0067c7d0  size=114  [between]
void __fastcall FUN_0067c7d0(int param_1)

{
  undefined4 uVar1;
  
  *(byte *)(param_1 + 0xdb4) = *(byte *)(param_1 + 0xdb4) | 8;
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar1 = 0;
    if (*(int *)(param_1 + 0x1c20) != 0) {
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

// 0067C890  FUN_0067c890  size=114  [between]
void __fastcall FUN_0067c890(int param_1)

{
  undefined4 uVar1;
  
  *(byte *)(param_1 + 0xdb4) = *(byte *)(param_1 + 0xdb4) | 8;
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar1 = 0;
    if (*(int *)(param_1 + 0x1c20) != 0) {
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

// 0067C9A0  FUN_0067c9a0  size=814  [between]
void __fastcall FUN_0067c9a0(int *param_1)

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
    fVar1 = (float)param_1[0x5dc];
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
                    /* WARNING: Could not recover jumptable at 0x0067ccca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}

// 0067CCF0  Em8060::vf208  size=36  [class]
void __thiscall Em8060::vf208(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x40);
  param_2[2] = *(undefined4 *)(param_1 + 0x48);
  param_2[3] = *(undefined4 *)(param_1 + 0x4c);
  param_2[1] = *(float *)(param_1 + 0x44) + 1.5;
  return;
}

// 0067CD20  Em8060::thunk_vf6C  size=5  [class]
void __fastcall Em8060::thunk_vf6C(int param_1)

{
  if (*(int *)(param_1 + 0x4f0) != 0) {
    FUN_00a7ce90();
    return;
  }
  return;
}

// 0067CD30  Em8060::vf70  size=5  [class]
void __fastcall Em8060::vf70(int param_1)

{
  if (*(int *)(param_1 + 0x4f0) != 0) {
    FUN_00a7cec0();
    return;
  }
  return;
}

// 0067CD40  FUN_0067cd40  size=152  [between]
void __thiscall
FUN_0067cd40(int param_1,uint param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0xc04) != 0) && (param_2 == 0x80029)) {
    param_2 = 0xf0008;
  }
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

// 0067CDE0  Em8060::vf34C  size=98  [class]
void __fastcall Em8060::vf34C(int *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0067ce40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

// 0067CE50  FUN_0067ce50  size=30  [between]
void FUN_0067ce50(void)

{
  FUN_00eaa6e0(0x41200000,0);
  return;
}

// 0067CE70  FUN_0067ce70  size=20  [between]
void __fastcall FUN_0067ce70(int param_1)

{
  FUN_00a8d280();
  *(undefined4 *)(param_1 + 0x1758) = 0;
  return;
}

// 0067CE90  Em8060::vf358  size=5  [class]
void __thiscall Em8060::vf358(int *param_1,undefined4 param_2,int param_3)

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

// 0067CFD0  Em8060::vf2C  size=51  [class]
void Em8060::vf2C(void)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
    FUN_00a7c950();
    FUN_006672c0();
    return;
  }
  return;
}

// 0067D010  FUN_0067d010  size=35  [between]
bool __fastcall FUN_0067d010(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00fdbc60();
  return *(int *)(param_1 + 0x870) <= iVar1;
}

// 0067D040  FUN_0067d040  size=407  [between]
void __fastcall FUN_0067d040(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  float10 fVar3;
  
  *(undefined4 *)(param_1 + 0x192c) = 0;
  *(undefined4 *)(param_1 + 0x1928) = 0;
  if ((*(int *)(param_1 + 0x330) != 0) && (*(int *)(*(int *)(param_1 + 0x330) + 0xcc) == 0)) {
    puVar1 = (undefined4 *)(param_1 + 0x18c4);
    iVar2 = 9;
    do {
      puVar1[-2] = 1;
      *puVar1 = 0;
      puVar1 = puVar1 + 3;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(0xf);
    *(float *)(param_1 + 0x18c0) = (float)fVar3;
    fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x3c))(0xf);
    *(float *)(param_1 + 0x18cc) = (float)fVar3;
    fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x44))(0xf);
    *(float *)(param_1 + 0x18d8) = (float)fVar3;
    fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(0x10);
    *(float *)(param_1 + 0x18e4) = (float)fVar3;
    fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x3c))(0x10);
    *(float *)(param_1 + 0x18f0) = (float)fVar3;
    fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x44))(0x10);
    *(float *)(param_1 + 0x18fc) = (float)fVar3;
    fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(0x11);
    *(float *)(param_1 + 0x1908) = (float)fVar3;
    fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x3c))(0x11);
    *(float *)(param_1 + 0x1914) = (float)fVar3;
    fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x44))(0x11);
    *(float *)(param_1 + 0x1920) = (float)fVar3;
    return;
  }
  puVar1 = (undefined4 *)(param_1 + 0x18c4);
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

// 0067D250  FUN_0067d250  size=419  [between]
void __fastcall FUN_0067d250(int param_1)

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
  
  _Dst = (char *)(param_1 + 0x1938);
  _strcpy_s(_Dst,7,"_EFD02");
  _strcpy_s((char *)(param_1 + 0x1948),7,"_EFD01");
  _strcpy_s((char *)(param_1 + 0x1958),7,"_EFD05");
  _strcpy_s((char *)(param_1 + 0x1968),7,"_EFD03");
  _strcpy_s((char *)(param_1 + 0x1978),7,"_EFD06");
  _strcpy_s((char *)(param_1 + 0x1988),7,"_EFD04");
  if ((*(int *)(param_1 + 0x330) != 0) && (*(int *)(*(int *)(param_1 + 0x330) + 0xcc) == 0)) {
    puVar3 = (undefined4 *)(param_1 + 0x1934);
    iVar5 = 6;
    do {
      *puVar3 = 0;
      puVar3[-1] = 0;
      puVar3 = puVar3 + 4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    fVar8 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(0x12);
    *(float *)(param_1 + 0x1934) = (float)fVar8;
    fVar8 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(0x13);
    *(float *)(param_1 + 0x1944) = (float)fVar8;
    fVar8 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(0x14);
    *(float *)(param_1 + 0x1954) = (float)fVar8;
    fVar8 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(0x15);
    *(float *)(param_1 + 0x1964) = (float)fVar8;
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
    *(undefined4 *)(param_1 + 0x1990) = 0;
    return;
  }
  puVar3 = (undefined4 *)(param_1 + 0x1934);
  iVar5 = 6;
  do {
    *puVar3 = 0;
    puVar3[-1] = 1;
    puVar3 = puVar3 + 4;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  *(undefined4 *)(param_1 + 0x1990) = 1;
  return;
}

// 0067D4D0  FUN_0067d4d0  size=53  [between]
void __fastcall FUN_0067d4d0(int *param_1)

{
  (**(code **)(*param_1 + 0x358))(0x193,param_1 + 0x3b8);
  param_1[0x3e4] = 1;
  FUN_00ac9420(param_1 + 0x64e);
  return;
}

// 0067D510  FUN_0067d510  size=53  [between]
void __fastcall FUN_0067d510(int *param_1)

{
  (**(code **)(*param_1 + 0x358))(400,param_1 + 0x3b8);
  param_1[0x3e5] = 1;
  FUN_00ac9420(param_1 + 0x652);
  return;
}

// 0067D550  FUN_0067d550  size=77  [between]
void __fastcall FUN_0067d550(int *param_1)

{
  (**(code **)(*param_1 + 0x358))(0x191,param_1 + 0x3b8);
  param_1[0x3e6] = 1;
  FUN_00ac9420(param_1 + 0x656);
  param_1[0x65c] = 1;
  FUN_00ac9420(param_1 + 0x65e);
  return;
}

// 0067D5A0  FUN_0067d5a0  size=77  [between]
void __fastcall FUN_0067d5a0(int *param_1)

{
  (**(code **)(*param_1 + 0x358))(0x192,param_1 + 0x3b8);
  param_1[999] = 1;
  FUN_00ac9420(param_1 + 0x65a);
  param_1[0x660] = 1;
  FUN_00ac9420(param_1 + 0x662);
  return;
}

// 0067D5F0  FUN_0067d5f0  size=206  [between]
undefined4 __fastcall FUN_0067d5f0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_4;
  
  if ((*(int *)(param_1 + 0x1414) != 0) && (*(int *)(*(int *)(param_1 + 0x1414) + 0xb4c) != 0)) {
    return 1;
  }
  local_4 = 0;
  iVar3 = param_1 + 0x1938;
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

// 0067D700  FUN_0067d700  size=206  [between]
void __fastcall FUN_0067d700(int param_1)

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

// 0067D7E0  Em8060::vf110  size=204  [class]
void __thiscall Em8060::vf110(int param_1,int param_2)

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
    *(uint *)(param_1 + 0x1438) = *(uint *)(param_1 + 0x1438) | 0x1000000;
    return;
  }
  *(uint *)(param_1 + 0x1438) = *(uint *)(param_1 + 0x1438) & 0xfeffffff;
  return;
}

// 0067D8B0  FUN_0067d8b0  size=156  [between]
void __fastcall FUN_0067d8b0(int *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  float10 fVar2;
  
  param_1[0x3af] = 0;
  fVar2 = (float10)FUN_00dde300(0,0x3f800000);
  param_1[0x3b0] =
       (int)(float)(((float10)1 - fVar2) * (float10)(float)param_1[0x66d] +
                    (float10)(float)param_1[0x66e] * fVar2 + (float10)(float)param_1[0x66c]);
  iVar1 = FUN_00a8cab0();
  param_1[0x3a9] = iVar1;
  param_1[0x3aa] = param_1[0x3a8];
  FUN_00a8caf0(0x1000a,0,0,0);
  param_1[0x3a8] = 0;
  FUN_00a962d0(0,0);
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x314);
  param_1[0x4e7] = 0;
                    /* WARNING: Could not recover jumptable at 0x0067d94a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

// 0067D950  FUN_0067d950  size=163  [between]
void __fastcall FUN_0067d950(int *param_1)

{
  float10 fVar1;
  
  param_1[0x3ad] = 1;
  param_1[0x3af] = 0;
  fVar1 = (float10)FUN_00dde300(0,0x3f800000);
  param_1[0x3b0] =
       (int)(float)(((float10)1 - fVar1) * (float10)(float)param_1[0x66d] +
                    (float10)(float)param_1[0x66e] * fVar1 + (float10)(float)param_1[0x66c]);
  FUN_00eaa6e0(0x41200000,0);
  (**(code **)(*param_1 + 0x358))(0xc9,param_1 + 0x414);
  (**(code **)(*param_1 + 0x358))(9,param_1 + 0x414);
  param_1[0x3b0] = param_1[0x66c];
  return;
}

// 0067DA00  FUN_0067da00  size=33  [between]
undefined4 __fastcall FUN_0067da00(int param_1)

{
  if ((*(int *)(param_1 + 0xeb4) != 0) && (*(float *)(param_1 + 0xec0) < 0.0)) {
    return 1;
  }
  return 0;
}

// 0067DA30  FUN_0067da30  size=98  [between]
void __fastcall FUN_0067da30(int param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0xec0) = *(undefined4 *)(param_1 + 0x19b0);
  *(undefined4 *)(param_1 + 0xeb4) = 0;
  *(undefined4 *)(param_1 + 0xebc) = 0;
  *(undefined4 *)(param_1 + 0x19a8) = 0;
  uVar1 = FUN_00a8cab0();
  *(undefined4 *)(param_1 + 0xea4) = uVar1;
  *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
  FUN_00a8caf0(0x1000c,0,0,0);
  *(undefined4 *)(param_1 + 0xea0) = 0;
  FUN_00a962d0(0,0);
  *(undefined4 *)(param_1 + 0x139c) = 0;
  return;
}

// 0067DAE0  FUN_0067dae0  size=204  [between]
undefined4 __thiscall FUN_0067dae0(int param_1,undefined4 *param_2)

{
  short sVar1;
  undefined4 uVar2;
  
  sVar1 = FUN_00dde2d0(0,2);
  uVar2 = 1;
  if (sVar1 == 0) {
    if (*(int *)(param_1 + 0x1b6c) == 1) {
LAB_0067db05:
      *param_2 = 0x1000d;
      return uVar2;
    }
    if (*(int *)(param_1 + 0x1b70) == 1) {
      *param_2 = 0x1000e;
      return uVar2;
    }
    if (*(int *)(param_1 + 0x1b68) == 1) {
      *param_2 = 0x1000f;
      return uVar2;
    }
  }
  else if (sVar1 == 1) {
    if (*(int *)(param_1 + 0x1b68) == 1) {
LAB_0067db4b:
      *param_2 = 0x1000f;
      return uVar2;
    }
    if (*(int *)(param_1 + 0x1b70) == 1) {
LAB_0067db61:
      *param_2 = 0x1000e;
      return uVar2;
    }
    if (*(int *)(param_1 + 0x1b6c) == 1) {
      *param_2 = 0x1000d;
      return uVar2;
    }
  }
  else if (sVar1 == 2) {
    if (*(int *)(param_1 + 0x1b70) == 1) goto LAB_0067db61;
    if (*(int *)(param_1 + 0x1b68) == 1) goto LAB_0067db4b;
    if (*(int *)(param_1 + 0x1b6c) == 1) goto LAB_0067db05;
  }
  return 0;
}

// 0067DBB0  Em8060::vf2D4  size=6  [class]
undefined4 Em8060::vf2D4(void)

{
  return 1;
}

// 0067DC40  FUN_0067dc40  size=1344  [between]
undefined4 __fastcall FUN_0067dc40(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cbe0(0x8002b);
  if (iVar1 == 0) {
    iVar1 = FUN_00a8cbe0(0x8002d);
    if (iVar1 == 0) {
      iVar1 = FUN_00a8cbe0(0x8002c);
      if (((iVar1 == 0) && (*(int *)(param_1 + 0x1c24) != 0)) && (*(int *)(param_1 + 0x1c28) == 0))
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

// 0067E1C0  FUN_0067e1c0  size=183  [between]
float10 __thiscall FUN_0067e1c0(int param_1,undefined4 param_2,float param_3,float param_4)

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

// 0067E280  FUN_0067e280  size=52  [between]
void __thiscall FUN_0067e280(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x1400) = *param_2;
  *(undefined4 *)(param_1 + 0x1404) = param_2[1];
  *(undefined4 *)(param_1 + 0x1408) = param_2[2];
  *(undefined4 *)(param_1 + 0x140c) = param_2[3];
  *(undefined4 *)(param_1 + 0x1410) = 0;
  return;
}

// 0067E2C0  FUN_0067e2c0  size=129  [between]
void __thiscall FUN_0067e2c0(int param_1,int param_2)

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

// 0067E3C0  FUN_0067e3c0  size=207  [between]
void __thiscall FUN_0067e3c0(int param_1,int param_2)

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

// 0067E4A0  FUN_0067e4a0  size=1  [between]
void FUN_0067e4a0(void)

{
  return;
}

// 0067E4B0  FUN_0067e4b0  size=1  [between]
void FUN_0067e4b0(void)

{
  return;
}

// 0067E4C0  FUN_0067e4c0  size=1  [between]
void FUN_0067e4c0(void)

{
  return;
}

// 0067E4D0  FUN_0067e4d0  size=1  [between]
void FUN_0067e4d0(void)

{
  return;
}

// 0067E520  FUN_0067e520  size=191  [between]
void __fastcall FUN_0067e520(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(byte *)(param_1 + 0xdb4) = *(byte *)(param_1 + 0xdb4) | 8;
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00a8c9b0(0,0,0x3f800000,0);
    FUN_00eaa6e0(0x3f800000,0);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (iVar1 != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    uVar2 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xea4) = uVar2;
    *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
    FUN_00a8caf0(0xf0008,0,0,0);
    *(undefined4 *)(param_1 + 0xea0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x139c) = 0;
  }
  return;
}

// 0067E5E0  FUN_0067e5e0  size=22  [between]
void FUN_0067e5e0(void)

{
  int iVar1;
  
  iVar1 = FUN_008c6c00();
  if (iVar1 == 0) {
    FUN_008a2b40();
    return;
  }
  return;
}

// 0067E600  FUN_0067e600  size=547  [between]
void __fastcall FUN_0067e600(int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar2 = FUN_00a81330();
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e22f10(0);
  iVar5 = 0;
  bVar1 = true;
  if (((iVar2 != 0) && (iVar5 = FUN_00a7c8a0(), iVar5 != 0)) &&
     (iVar3 = FUN_00a8c760(0x1c), iVar3 != 0)) {
    bVar1 = false;
  }
  uVar4 = FUN_00a8cac0();
  switch(uVar4) {
  case 0:
    FUN_00aa4520(0xe0,iVar2,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00db3e80(0x41880000,0,&DAT_01bea1d0);
    FUN_00b80920(iVar2,0x3f400000,0x3f400000,0x3f400000,0);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_00aa4520(0xe1,iVar2,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      if (iVar5 != 0) {
        FUN_00a8ccb0(1);
      }
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    FUN_00b94790(0x3f800000,0x3f800000);
    if (bVar1) {
      param_1[0x461] = 1;
    }
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      FUN_00aa4520(0xe2,iVar2,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 3:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_00a7c950();
      FUN_00ba6810(1,1);
      (**(code **)(*param_1 + 0x388))(0);
      return;
    }
  }
  return;
}

// 0067E840  FUN_0067e840  size=22  [between]
void FUN_0067e840(void)

{
  int iVar1;
  
  iVar1 = FUN_008c6c00();
  if (iVar1 == 0) {
    FUN_008a2b40();
    return;
  }
  return;
}

// 0067E860  FUN_0067e860  size=303  [between]
void __fastcall FUN_0067e860(int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_00a81330();
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e22f10(0);
  bVar1 = true;
  if (iVar2 != 0) {
    iVar3 = FUN_00a7c8a0();
    if (iVar3 != 0) {
      iVar3 = FUN_00a8c760(0x1c);
      if (iVar3 != 0) {
        bVar1 = false;
      }
    }
  }
  iVar3 = FUN_00a8cac0();
  if (iVar3 == 0) {
    FUN_00aa4520(0xe4,iVar2,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00b80920(iVar2,0x3f800000,0x3f4ccccd,0x3f800000,0);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (iVar3 != 1) {
    return;
  }
  FUN_00db3e80(0,0,&DAT_01bea1d0);
  FUN_00b94790(0x3f800000,0x3f800000);
  if (bVar1) {
    param_1[0x461] = 1;
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    FUN_00a7c950();
    FUN_00ba6810(1,1);
    (**(code **)(*param_1 + 0x388))(0);
  }
  return;
}

// 0067E990  Em8060::thunk_vf1C0  size=5  [class]
void __thiscall Em8060::thunk_vf1C0(int param_1,int *param_2,undefined4 param_3)

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

// 0067E9B0  FUN_0067e9b0  size=180  [between]
void __fastcall FUN_0067e9b0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar1 = 0x8000000;
    if (*(int *)(param_1 + 0x1c20) != 0) {
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
    *(undefined4 *)(param_1 + 0xea0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x139c) = 0;
  }
  return;
}

// 0067EA70  FUN_0067ea70  size=170  [between]
void __fastcall FUN_0067ea70(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar1 = 0;
    if (*(int *)(param_1 + 0x1c20) != 0) {
      uVar1 = 0x40;
    }
    *(undefined4 *)(param_1 + 0x61c) = 1;
    FUN_00aa4080(0xa7,0,0x3d088889,0x3f800000,uVar1,0xbf800000,0x3f800000);
    if (*(float *)(param_1 + 0x1c48) < 0.0) {
      *(undefined4 *)(param_1 + 0x1c48) = 0x42700000;
    }
    *(undefined4 *)(param_1 + 0x1c28) = 1;
    *(undefined4 *)(param_1 + 0xda8) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xdb0) = 0xffffffff;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0067EB30  FUN_0067eb30  size=180  [between]
void __fastcall FUN_0067eb30(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar1 = 0x8000000;
    if (*(int *)(param_1 + 0x1c20) != 0) {
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
    *(undefined4 *)(param_1 + 0xea0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x139c) = 0;
  }
  return;
}

// 0067EC00  FUN_0067ec00  size=180  [between]
void __fastcall FUN_0067ec00(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar1 = 0x8000000;
    if (*(int *)(param_1 + 0x1c20) != 0) {
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
    *(undefined4 *)(param_1 + 0xea0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x139c) = 0;
  }
  return;
}

// 0067ECF0  FUN_0067ecf0  size=239  [between]
void __fastcall FUN_0067ecf0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1[0x187] == 0) {
    uVar1 = 0x8000000;
    if (param_1[0x708] != 0) {
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

// 0067EDF0  FUN_0067edf0  size=176  [between]
void __fastcall FUN_0067edf0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar1 = 0x8000000;
    if (*(int *)(param_1 + 0x1c20) != 0) {
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
    *(undefined4 *)(param_1 + 0xea0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x139c) = 0;
  }
  return;
}

// 0067EEC0  FUN_0067eec0  size=498  [between]
void __fastcall FUN_0067eec0(int *param_1)

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
    if (param_1[0x708] != 0) {
      uVar2 = 0x8000040;
    }
    FUN_00aa4080(0xaf,0,0x3e2aaaab,0x3f800000,uVar2,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) goto LAB_0067f06e;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a8c760(8);
  if ((((iVar3 != 0) && (param_1[0x711] == 0)) && (param_1[0x2a2] != 0)) &&
     (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
    local_20 = *(float *)(iVar3 + 0x40);
    local_18 = *(float *)(iVar3 + 0x48);
    local_14 = *(undefined4 *)(iVar3 + 0x4c);
    local_1c = param_1[0x15];
    fVar4 = (float10)FUN_00dde300(0xc0400000,0x40400000);
    local_20 = (float)(fVar4 + (float10)local_20);
    fVar4 = (float10)FUN_00dde300(0xc0400000,0x40400000);
    local_18 = (float)(fVar4 + (float10)local_18);
    if ((param_1[0x506] != 0) && (param_1[0x507] != 0)) {
      FUN_0043fc90(param_1[0x2a2],&local_20,3);
    }
  }
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    FUN_00a8caf0(0x80006,0,0,0);
    param_1[0x3a8] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4e7] = 0;
    sVar1 = FUN_00dde2d0(0,2);
    param_1[0x712] = (int)(((float)(int)sVar1 + 1.0) * 60.0);
  }
LAB_0067f06e:
  iVar3 = FUN_00a8c760(0);
  if (iVar3 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3db2b8c2,0);
  }
  return;
}

// 0067F1D0  FUN_0067f1d0  size=202  [between]
void __fastcall FUN_0067f1d0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar2 = 0x8000000;
    if (*(int *)(param_1 + 0x1c20) != 0) {
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

// 0067F2C0  FUN_0067f2c0  size=481  [between]
void __fastcall FUN_0067f2c0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  switch(param_1[0x187]) {
  case 0:
    param_1[0x187] = 1;
    uVar2 = 0x79;
    goto LAB_0067f312;
  case 1:
  case 5:
    goto switchD_0067f2d4_caseD_1;
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
LAB_0067f312:
    FUN_00aa4080(uVar2,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
switchD_0067f2d4_caseD_1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 6:
    uVar2 = 0x8000000;
    if (param_1[0x708] != 0) {
      uVar2 = 0x8000040;
    }
    param_1[0x187] = 7;
    FUN_00aa4080(0xa8,0,0x3d088889,0x3f800000,uVar2,0xbf800000,0x3f800000);
    param_1[0x248] = 0x42f00000;
  case 7:
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if ((float)param_1[0x248] < 0.0) {
      FUN_0067cd40((-(uint)(param_1[0x709] != 0) & 0xfffffff9) + 0x8000d,0,0,0,0);
      return;
    }
  }
  return;
}

// 0067F4E0  FUN_0067f4e0  size=441  [between]
void __fastcall FUN_0067f4e0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  switch(param_1[0x187]) {
  case 0:
    uVar1 = 0x8000000;
    if (param_1[0x708] != 0) {
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
    if (param_1[0x708] != 0) {
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

// 0067F6D0  FUN_0067f6d0  size=202  [between]
void __fastcall FUN_0067f6d0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar2 = 0x8000000;
    if (*(int *)(param_1 + 0x1c20) != 0) {
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

// 0067F7B0  FUN_0067f7b0  size=202  [between]
void __fastcall FUN_0067f7b0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar2 = 0x8000000;
    if (*(int *)(param_1 + 0x1c20) != 0) {
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

// 0067F890  FUN_0067f890  size=315  [between]
void __fastcall FUN_0067f890(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    uVar2 = 0x8000000;
    if (*(int *)(param_1 + 0x1c20) != 0) {
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

// 0067F9F0  FUN_0067f9f0  size=212  [between]
void __fastcall FUN_0067f9f0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar2 = 0x8000000;
    if (*(int *)(param_1 + 0x1c20) != 0) {
      uVar2 = 0x8000040;
    }
    *(undefined4 *)(param_1 + 0x61c) = 1;
    FUN_00aa4080(0x6d,0,0x3d088889,0x3f800000,uVar2,0xbf800000,0x3f800000);
    if (*(int *)(param_1 + 0x1c20) == 0) {
      *(undefined4 *)(param_1 + 0x1c38) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x1c3c) = 0;
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

// 0067FAF0  FUN_0067faf0  size=1  [between]
void FUN_0067faf0(void)

{
  return;
}

// 0067FB30  FUN_0067fb30  size=12  [between]
undefined4 __fastcall FUN_0067fb30(undefined4 param_1)

{
  FUN_00a7c930();
  return param_1;
}

// 0067FCB0  Em8060::vf1A0  size=5  [class]
undefined4 Em8060::vf1A0(void)

{
  return 0;
}

// 0067FCC0  Em8060::vf1A4  size=455  [class]
void __thiscall Em8060::vf1A4(int param_1,int *param_2,byte param_3)

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
    *(int *)(param_1 + 0x175c) = *(int *)(param_1 + 0x175c) + 1;
    *(undefined4 *)(param_1 + 0x1754) = 1;
    *(undefined4 *)(param_1 + 0x1758) = 1;
  }
  iVar2 = FUN_0067d5f0();
  if ((iVar2 != 0) && ((param_3 & 4) != 0)) {
    uVar3 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xea4) = uVar3;
    *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
    FUN_00a8caf0(0x60007,0,0,0);
    *(undefined4 *)(param_1 + 0xea0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x139c) = 0;
    return;
  }
  if (((param_3 & 6) != 0) &&
     (((((iVar2 = *param_2, iVar2 == 0xee || (iVar2 == 0xef)) || (iVar2 == 0xf0)) ||
       ((iVar2 == 0xf1 || (iVar2 == 0xf2)))) ||
      ((iVar2 == 0xf3 || ((iVar2 == 0xf4 || (iVar2 == 0xf5)))))))) {
    FUN_00a7c950();
    if (iVar1 != 0) {
      uVar3 = FUN_00a7c7f0();
      FUN_00a7c960(uVar3);
    }
    iVar2 = FUN_00a8cbe0(0x8002c);
    if (iVar2 == 0) {
      iVar2 = FUN_00a8cbe0(0x8002d);
      if (iVar2 == 0) {
        uVar3 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
        *(undefined4 *)(param_1 + 0xea4) = uVar3;
        FUN_00a8caf0(0x60003,0,0,0);
        *(undefined4 *)(param_1 + 0xea0) = 0;
        FUN_00a962d0(0,0);
        *(undefined4 *)(param_1 + 0x139c) = 0;
        if (iVar1 != 0) {
          puVar6 = local_30;
          FUN_00a7c8a0(puVar6);
          pfVar4 = (float *)FUN_00a925a0(puVar6);
          pfVar5 = (float *)FUN_00a925a0(local_20);
          if (0.25 < pfVar5[2] * pfVar4[2] + *pfVar5 * *pfVar4 + pfVar5[1] * pfVar4[1]) {
            FUN_0067cd40(0x60005,0,0,0,0);
          }
        }
      }
    }
  }
  return;
}

// 0067FE90  FUN_0067fe90  size=31  [between]
undefined4 FUN_0067fe90(void)

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

// 0067FEB0  FUN_0067feb0  size=31  [between]
undefined4 FUN_0067feb0(void)

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

// 0067FF00  FUN_0067ff00  size=149  [between]
void __fastcall FUN_0067ff00(int *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0067ff93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 0067FFB0  FUN_0067ffb0  size=149  [between]
void __fastcall FUN_0067ffb0(int *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00680043. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00680060  FUN_00680060  size=149  [between]
void __fastcall FUN_00680060(int *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x006800f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00680110  FUN_00680110  size=41  [between]
void __thiscall FUN_00680110(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x1ad8) == 0) {
    *(int *)(param_1 + 0x1af4) = *(int *)(param_1 + 0x1af4) + param_2;
    *(undefined4 *)(param_1 + 0x1b10) =
         *(undefined4 *)(param_1 + 0x19d8 + *(int *)(param_1 + 0xeb4) * 4);
  }
  return;
}

// 00680160  FUN_00680160  size=24  [between]
undefined4 __fastcall FUN_00680160(int param_1)

{
  if (0.0 < *(float *)(param_1 + 0x1b3c)) {
    return 1;
  }
  return 0;
}

// 00680190  FUN_00680190  size=41  [between]
void __thiscall FUN_00680190(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x1adc) == 0) {
    *(int *)(param_1 + 0x1af8) = *(int *)(param_1 + 0x1af8) + param_2;
    *(undefined4 *)(param_1 + 0x1b14) =
         *(undefined4 *)(param_1 + 0x19e8 + *(int *)(param_1 + 0xeb4) * 4);
  }
  return;
}

// 00680230  FUN_00680230  size=68  [between]
void __thiscall FUN_00680230(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1ae0) == 0) {
    iVar1 = FUN_00a8cbe0(0x1000a);
    if ((iVar1 == 0) && (iVar1 = FUN_00a8cbe0(0x1000b), iVar1 == 0)) {
      return;
    }
    *(int *)(param_1 + 0x1afc) = *(int *)(param_1 + 0x1afc) + param_2;
    *(undefined4 *)(param_1 + 0x1b18) = *(undefined4 *)(param_1 + 0x19c4);
  }
  return;
}

// 006802A0  FUN_006802a0  size=59  [between]
void __thiscall FUN_006802a0(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1ae4) == 0) {
    iVar1 = FUN_00a8cbe0(0x5000b);
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x1b00) = *(int *)(param_1 + 0x1b00) + param_2;
      *(undefined4 *)(param_1 + 0x1b1c) =
           *(undefined4 *)(param_1 + 0x19f8 + *(int *)(param_1 + 0xeb4) * 4);
    }
  }
  return;
}

// 00680300  FUN_00680300  size=59  [between]
void __thiscall FUN_00680300(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1ae8) == 0) {
    iVar1 = FUN_00a8cbe0(0x5000d);
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x1b04) = *(int *)(param_1 + 0x1b04) + param_2;
      *(undefined4 *)(param_1 + 0x1b20) =
           *(undefined4 *)(param_1 + 0x1a08 + *(int *)(param_1 + 0xeb4) * 4);
    }
  }
  return;
}

// 00680360  FUN_00680360  size=59  [between]
void __thiscall FUN_00680360(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1aec) == 0) {
    iVar1 = FUN_00a8cbe0(0x5000c);
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x1b08) = *(int *)(param_1 + 0x1b08) + param_2;
      *(undefined4 *)(param_1 + 0x1b24) =
           *(undefined4 *)(param_1 + 0x1a18 + *(int *)(param_1 + 0xeb4) * 4);
    }
  }
  return;
}

// 006803C0  FUN_006803c0  size=59  [between]
void __thiscall FUN_006803c0(int param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1af0) == 0) {
    iVar1 = FUN_00a8cbe0(0x5000e);
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x1b0c) = *(int *)(param_1 + 0x1b0c) + param_2;
      *(undefined4 *)(param_1 + 0x1b28) =
           *(undefined4 *)(param_1 + 0x1a28 + *(int *)(param_1 + 0xeb4) * 4);
    }
  }
  return;
}

// 00680470  FUN_00680470  size=98  [between]
void __fastcall FUN_00680470(int param_1)

{
  float fVar1;
  float10 fVar2;
  
  *(undefined4 *)(param_1 + 0x1b2c) =
       *(undefined4 *)(param_1 + 0x1a60 + *(int *)(param_1 + 0xeb4) * 4);
  fVar2 = (float10)FUN_00dde300(0,0x3f800000);
  fVar1 = *(float *)(param_1 + 0x1a68 + *(int *)(param_1 + 0xeb4) * 4);
  *(int *)(param_1 + 0x1b38) = *(int *)(param_1 + 0x1b38) + 1;
  *(float *)(param_1 + 0x1b2c) =
       (float)(fVar2 * (float10)fVar1 + (float10)*(float *)(param_1 + 0x1b2c));
  *(float *)(param_1 + 0x1b34) =
       *(float *)(param_1 + 0x1a50 + *(int *)(param_1 + 0xeb4) * 4) + *(float *)(param_1 + 0x1b34);
  return;
}

// 00680500  FUN_00680500  size=158  [between]
undefined4 __fastcall FUN_00680500(int param_1)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar2 = (float10)FUN_00dde300(0,0x3f800000);
  if (fVar2 <= (float10)*(float *)(param_1 + 0x1a70 + *(int *)(param_1 + 0xeb4) * 4)) {
    fVar2 = (float10)FUN_00dde300(0,0x3f800000);
    iVar1 = *(int *)(param_1 + 0xeb4);
    fVar3 = (float10)*(float *)(param_1 + 0x1a78 + iVar1 * 4);
    if (fVar2 < fVar3) {
      return 1;
    }
    fVar3 = fVar3 + (float10)*(float *)(param_1 + 0x1a80 + iVar1 * 4);
    if (fVar2 < fVar3) {
      return 2;
    }
    if (fVar2 < fVar3 + (float10)*(float *)(param_1 + 0x1a88 + iVar1 * 4)) {
      return 3;
    }
  }
  return 0;
}

// 00680610  FUN_00680610  size=46  [between]
undefined4 __fastcall FUN_00680610(int param_1)

{
  int iVar1;
  
  if (*(float *)(param_1 + 0x1b3c) <= 0.0) {
    iVar1 = FUN_00a8c760(0x39);
    if ((iVar1 == 0) && (*(int *)(param_1 + 0x1b84) == 0)) {
      return 0;
    }
  }
  return 1;
}

// 00680680  FUN_00680680  size=676  [between]
void __fastcall FUN_00680680(int *param_1)

{
  float fVar1;
  float fVar2;
  code *pcVar3;
  short sVar4;
  int iVar5;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  switch(param_1[0x187]) {
  case 0:
    param_1[0x50e] = param_1[0x50e] ^ 0x8000000;
    FUN_00aa4080(0x3c,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
    param_1[0x5d6] = 0;
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
    param_1[0x50e] = param_1[0x50e] ^ 0x8000000;
    FUN_00aa4080(0x3d,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      sVar4 = FUN_00dde2d0(1,3);
      param_1[0x5d9] = (int)((float)(int)sVar4 * 60.0);
      if (param_1[0x3ad] != 0) {
        param_1[0x5d9] = 0x41f00000;
      }
    }
    iVar5 = FUN_00a8c760(10);
    if ((iVar5 != 0) && (param_1[0x5d6] != 0)) {
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

// 00680960  FUN_00680960  size=204  [between]
void __fastcall FUN_00680960(int *param_1)

{
  short sVar1;
  int iVar2;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x5a,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
    param_1[0x5d6] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    sVar1 = FUN_00dde2d0(1,3);
    param_1[0x5d9] = (int)((float)(int)sVar1 * 60.0);
    if (param_1[0x3ad] != 0) {
      param_1[0x5d9] = 0x41f00000;
    }
  }
  return;
}

// 00680A40  FUN_00680a40  size=861  [between]
void __fastcall FUN_00680a40(int *param_1)

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
    param_1[0x5d6] = 0;
    if (param_1[0x3ad] != 0) {
      FUN_00a92f90();
      iVar4 = FUN_00e26e90();
      if (iVar4 != 0) {
        FUN_00e36720(0,0x3fc00000);
      }
    }
  }
  else if (param_1[0x187] != 1) goto LAB_00680d58;
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
        if (param_1[0x505] != 0) {
          FUN_0043fc90(param_1[0x2a2],&local_20,0);
        }
      }
      uVar2 = 0;
      goto LAB_00680d08;
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
        if (param_1[0x505] != 0) {
          FUN_0043fc90(param_1[0x2a2],&local_20,0);
        }
      }
      uVar2 = 0x3d088889;
LAB_00680d08:
      FUN_00aa4080(0x49,2,uVar2,0x3f800000,0x8000210,0,0x3f800000);
    }
  }
  iVar4 = FUN_00a94ce0(0);
  if (iVar4 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    sVar3 = FUN_00dde2d0(0,2);
    param_1[0x5da] = (int)(((float)(int)sVar3 + 1.0) * 60.0);
  }
LAB_00680d58:
  iVar4 = FUN_00a8c760(0);
  if (iVar4 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3e0efa35,0);
  }
  return;
}

// 00680DA0  FUN_00680da0  size=718  [between]
void __fastcall FUN_00680da0(int *param_1)

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
    param_1[0x5d6] = 0;
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
    if ((fVar1 - (float)param_1[0x244] < 0.0) && (param_1[0x710] == 0)) {
      if ((param_1[0x2a2] != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
        local_1c = *(undefined4 *)(iVar2 + 0x44);
        local_14 = *(undefined4 *)(iVar2 + 0x4c);
        local_18 = (float)(3 - param_1[0x251]) * 0.5;
        local_20 = local_18 + *(float *)(iVar2 + 0x40);
        local_18 = *(float *)(iVar2 + 0x48) + local_18;
        if (param_1[0x505] != 0) {
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

// 006810A0  FUN_006810a0  size=445  [between]
void __fastcall FUN_006810a0(int *param_1)

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
    param_1[0x5d6] = 0;
  }
  else if (param_1[0x187] != 1) goto LAB_00681219;
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
    if (param_1[0x506] != 0) {
      FUN_0043fc90(param_1[0x2a2],&local_20,0);
    }
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    sVar1 = FUN_00dde2d0(0,2);
    param_1[0x5db] = (int)(((float)(int)sVar1 + 1.0) * 60.0);
  }
LAB_00681219:
  iVar2 = FUN_00a8c760(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3db2b8c2,0);
  }
  return;
}

// 00681290  FUN_00681290  size=445  [between]
void __fastcall FUN_00681290(int *param_1)

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
    param_1[0x5d6] = 0;
  }
  else if (param_1[0x187] != 1) goto LAB_00681409;
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
    if (param_1[0x506] != 0) {
      FUN_0043fc90(param_1[0x2a2],&local_20,5);
    }
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    sVar1 = FUN_00dde2d0(0,2);
    param_1[0x5db] = (int)(((float)(int)sVar1 + 1.0) * 60.0);
  }
LAB_00681409:
  iVar2 = FUN_00a8c760(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3db2b8c2,0);
  }
  return;
}

// 00681470  FUN_00681470  size=522  [between]
void __fastcall FUN_00681470(int *param_1)

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
    param_1[0x50e] = param_1[0x50e] ^ 0x8000000;
    FUN_00aa4080(0x34,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
    param_1[0x5d6] = 0;
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

// 006816E0  FUN_006816e0  size=112  [between]
void __fastcall FUN_006816e0(int *param_1)

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

// 00681760  Em8060::vf294  size=1  [class]
void Em8060::vf294(void)

{
  return;
}

// 00681770  Em8060::vf298  size=11  [class]
void __fastcall Em8060::vf298(int param_1)

{
  *(undefined4 *)(param_1 + 0x1b8c) = 1;
  return;
}

// 00681780  Em8060::vf29C  size=11  [class]
void __fastcall Em8060::vf29C(int param_1)

{
  *(undefined4 *)(param_1 + 0x1b8c) = 1;
  return;
}

// 00681790  Em8060::vf2A4  size=1  [class]
void Em8060::vf2A4(void)

{
  return;
}

// 006817A0  Em8060::vf2A8  size=1  [class]
void Em8060::vf2A8(void)

{
  return;
}

// 006817B0  Em8060::vf2AC  size=1  [class]
void Em8060::vf2AC(void)

{
  return;
}

// 006817C0  Em8060::vf2B0  size=1  [class]
void Em8060::vf2B0(void)

{
  return;
}

// 006817E0  FUN_006817e0  size=264  [callgraph]
void __fastcall FUN_006817e0(int param_1)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0xd80) != 0) {
    uVar3 = FUN_00a82d50();
    bVar2 = 0.0 < *(float *)(param_1 + 0xbb4);
    if (bVar2) {
      iVar1 = *(int *)(param_1 + 0xd80);
      *(float *)(iVar1 + 0xc) = *(float *)(param_1 + 0xbac) * 0.017453292;
      *(float *)(iVar1 + 0x10) = *(float *)(param_1 + 0xbb0) * 0.017453292;
      *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(param_1 + 0xbb4);
      iVar1 = *(int *)(param_1 + 0xd80);
      *(float *)(iVar1 + 0x30) = *(float *)(param_1 + 0xbac) * 0.017453292;
      *(float *)(iVar1 + 0x34) = *(float *)(param_1 + 0xbb0) * 0.017453292;
      *(undefined4 *)(iVar1 + 0x38) = *(undefined4 *)(param_1 + 0xbb4);
    }
    if (*(float *)(param_1 + 0xbc0) <= 0.0) {
      if (!bVar2) {
        return;
      }
    }
    else {
      iVar1 = *(int *)(param_1 + 0xd80);
      *(float *)(iVar1 + 0x18) = *(float *)(param_1 + 3000) * 0.017453292;
      *(float *)(iVar1 + 0x1c) = *(float *)(param_1 + 0xbbc) * 0.017453292;
      *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(param_1 + 0xbc0);
      iVar1 = *(int *)(param_1 + 0xd80);
      *(float *)(iVar1 + 0x3c) = *(float *)(param_1 + 3000) * 0.017453292;
      *(float *)(iVar1 + 0x40) = *(float *)(param_1 + 0xbbc) * 0.017453292;
      *(undefined4 *)(iVar1 + 0x44) = *(undefined4 *)(param_1 + 0xbc0);
    }
    FUN_00a82b40(*(undefined4 *)(param_1 + 0xd80),4);
    FUN_00a85340(uVar3);
  }
  return;
}

// 006818F0  FUN_006818f0  size=62  [callgraph]
undefined4 FUN_006818f0(void)

{
  int iVar1;
  
  iVar1 = FUN_00a8d3d0(5);
  if (iVar1 == 0) {
    iVar1 = FUN_00a8d3d0(10);
    if (iVar1 == 0) {
      iVar1 = FUN_00a8d3d0(8);
      if (iVar1 == 0) {
        iVar1 = FUN_00a8d3d0(7);
        if (iVar1 == 0) {
          return 0;
        }
      }
    }
  }
  return 1;
}

// 00681950  FUN_00681950  size=77  [callgraph]
void __fastcall FUN_00681950(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00a8cab0();
  *(undefined4 *)(param_1 + 0xea4) = uVar1;
  *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
  FUN_00a8caf0(0xb0006,0,0,0);
  *(undefined4 *)(param_1 + 0xea0) = 0;
  FUN_00a962d0(0,0);
  *(undefined4 *)(param_1 + 0x139c) = 0;
  return;
}

// 006819A0  FUN_006819a0  size=130  [callgraph]
void __fastcall FUN_006819a0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_20 = *(undefined4 *)(param_1 + 0x1cc0);
  local_1c = *(undefined4 *)(param_1 + 0x1cc4);
  uVar2 = 1;
  local_18 = *(undefined4 *)(param_1 + 0x1cc8);
  local_14 = *(undefined4 *)(param_1 + 0x1ccc);
  iVar1 = FUN_00a82d50();
  if ((iVar1 != 1) || (*(int *)(param_1 + 0x1db0) == 0)) {
    uVar2 = 0;
  }
  FUN_00a82640();
  FUN_00a83330(&local_20,uVar2);
  *(undefined4 *)(param_1 + 0x1db0) = 0;
  return;
}

// 00681A90  FUN_00681a90  size=599  [callgraph]
void __fastcall FUN_00681a90(int *param_1)

{
  float fVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar2;
  int iVar3;
  
  (**(code **)(*param_1 + 0x220))(0x40a00000);
  uVar2 = FUN_00a8cac0();
  switch(uVar2) {
  case 0:
    FUN_00aa4120(5,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x110);
    param_1[0x34a] = 0;
    (*UNRECOVERED_JUMPTABLE)(1);
    param_1[0x71c] = 0x42700000;
    (**(code **)(*param_1 + 0x358))(0x208,param_1 + 0x414);
    param_1[0x248] = 0x42c90000;
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x6e3] = 0;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x71c] = 0x42700000;
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] <= 0.0) {
      iVar3 = FUN_00a82d50();
      if (iVar3 == 1) {
        (**(code **)(*param_1 + 0x7c))(param_1 + 0x728,param_1 + 0x72c);
        param_1[0x248] = 0x42c90000;
        (**(code **)(*param_1 + 0x20))();
        if (param_1[0x1d9] != 0) {
          FUN_008e3c10();
        }
        (**(code **)(*param_1 + 0x110))(0);
        param_1[0x187] = param_1[0x187] + 1;
        return;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x110);
      param_1[0x71c] = 0x42700000;
      (*UNRECOVERED_JUMPTABLE)(1);
      (**(code **)(*param_1 + 0x358))(0x208,param_1 + 0x414);
      (**(code **)(*param_1 + 0x34c))();
      param_1[0x34a] = 1;
      return;
    }
    break;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x71c] = 0x42700000;
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] <= 0.0) {
      (**(code **)(*param_1 + 0x1c))();
      if (param_1[0x1d9] != 0) {
        FUN_008e6d00();
      }
      (**(code **)(*param_1 + 0x110))(1);
      (**(code **)(*param_1 + 0x358))(0x208,param_1 + 0x414);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if ((*(byte *)((int)param_1 + 0x143b) & 1) == 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x34c);
      param_1[0x34a] = 1;
                    /* WARNING: Could not recover jumptable at 0x00681ce2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}

// 00681D00  FUN_00681d00  size=166  [callgraph]
void __fastcall FUN_00681d00(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(5,0,0x3daaaaab,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (iVar1 != 1) {
    return;
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x1cc0) = *(undefined4 *)(iVar1 + 0x40);
      *(undefined4 *)(param_1 + 0x1cc4) = *(undefined4 *)(iVar1 + 0x44);
      *(undefined4 *)(param_1 + 0x1cc8) = *(undefined4 *)(iVar1 + 0x48);
      *(undefined4 *)(param_1 + 0x1ccc) = *(undefined4 *)(iVar1 + 0x4c);
      *(undefined4 *)(param_1 + 0x1db0) = 1;
    }
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00682080  FUN_00682080  size=166  [callgraph]
void __thiscall FUN_00682080(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1[param_2 + 0x505] != 0) {
    if (((param_2 == 0) && (param_1[0x710] = 1, param_1[0x70a] == 0)) && (param_1[0x139] == 0)) {
      iVar1 = FUN_00a8cbe0(0x50018);
      if (iVar1 == 0) {
        (**(code **)(*param_1 + 0x314))();
        FUN_0067cd40(0x60001,0,0,0,0);
      }
    }
    uVar2 = FUN_00a81330();
    FUN_00a9e0d0(uVar2);
    FUN_00451280();
    param_1[param_2 + 0x505] = 0;
    FUN_00a7c960(param_1 + param_2 + 0x508);
    FUN_00a7c950();
  }
  return;
}

// 00682130  Em8060::vf150  size=201  [class]
void __thiscall Em8060::vf150(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_3 != 0) {
    FUN_00a7c950();
    uVar1 = FUN_00a7c7f0();
    FUN_00a7c960(uVar1);
    if (param_2 == 0x41) {
      uVar1 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xea4) = uVar1;
      *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
      uVar2 = 0x50018;
    }
    else {
      if (param_2 == 0x79) {
        uVar1 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
        uVar2 = 0xf0006;
      }
      else {
        if (param_2 != 0x7a) {
          return;
        }
        uVar1 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
        uVar2 = 0xf0007;
      }
      *(undefined4 *)(param_1 + 0xea4) = uVar1;
    }
    FUN_00a8caf0(uVar2,0,0,0);
    *(undefined4 *)(param_1 + 0xea0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x139c) = 0;
  }
  return;
}

// 00682310  Em8060::vf44  size=309  [class]
void __fastcall Em8060::vf44(int param_1)

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
  if (*(int *)(param_1 + 0xd80) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0xd80));
    *(undefined4 *)(param_1 + 0xd80) = 0;
  }
  FUN_00eaa6e0(0x3f800000,0);
  FUN_00a9d8a0();
  piVar3 = (int *)(param_1 + 0x1780);
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
  iVar1 = param_1;
  FUN_00c1cf50(param_1);
  FUN_00c1d1c0(iVar1);
  RayCastManager::getWork(param_1 + 0x1bb4);
  RayCastManager::getWork(param_1 + 0x1bb8);
  BehaviorEmBase::vf44();
  return;
}

// 00682450  Em8060::vf50  size=157  [class]
void __fastcall Em8060::vf50(int param_1)

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
  if (*(int *)(param_1 + 0x1b54) != 0) {
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

// 006824F0  FUN_006824f0  size=211  [between]
void __fastcall FUN_006824f0(int param_1)

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

// 006825D0  FUN_006825d0  size=705  [between]
void __fastcall FUN_006825d0(int *param_1)

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
      param_1[0x717] = param_1[0x3ad];
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
        FUN_0067cd40(0x10010,0,0,0,0);
        param_1[0x717] = param_1[0x3ad];
        return;
      }
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (param_1[0x2a1] != 0) {
      (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3d567750,0);
      param_1[0x717] = param_1[0x3ad];
      return;
    }
    break;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a8c760(0x30);
    if (iVar2 == 0) {
      iVar2 = FUN_00a8c760(0x31);
      if (iVar2 == 0) goto LAB_00682847;
      uVar3 = 10;
    }
    else {
      uVar3 = 0xb;
    }
    FUN_00aa4080(uVar3,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_00682847;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_00682847:
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      param_1[0x717] = param_1[0x3ad];
      return;
    }
    break;
  default:
    break;
  }
  param_1[0x717] = param_1[0x3ad];
  return;
}

// 006828B0  FUN_006828b0  size=256  [between]
void __fastcall FUN_006828b0(int *param_1)

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
    FUN_0067d950();
    param_1[0x6d2] = param_1[0x6d2] + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x006829ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 006829C0  FUN_006829c0  size=322  [between]
void __fastcall FUN_006829c0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x2c,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
    pcVar1 = *(code **)(*param_1 + 0x358);
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar1)(200,param_1 + 0x440);
    param_1[0x6b3] = 0;
    param_1[0x6b2] = 0;
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
    param_1[0x6b4] = param_1[0x6b4] + 1;
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00eaa6e0((float)param_1[0x6b4] * 30.0,0);
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00682afd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00682B20  FUN_00682b20  size=450  [between]
void __fastcall FUN_00682b20(int *param_1)

{
  float fVar1;
  int iVar2;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x2f,0,0x3e888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00eaa6e0(0x42700000,0);
    param_1[0x6b7] = 0;
    param_1[0x6b8] = 0;
    param_1[0x6b4] = 0;
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
                    /* WARNING: Could not recover jumptable at 0x00682cde. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00682D00  FUN_00682d00  size=112  [between]
void __fastcall FUN_00682d00(int *param_1)

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

// 00682D70  FUN_00682d70  size=112  [between]
void __fastcall FUN_00682d70(int *param_1)

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

// 00682DE0  FUN_00682de0  size=129  [between]
void __fastcall FUN_00682de0(int *param_1)

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

// 00682E70  FUN_00682e70  size=156  [between]
void __fastcall FUN_00682e70(int *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00682f0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00682F10  FUN_00682f10  size=468  [between]
void __fastcall FUN_00682f10(int *param_1)

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
    param_1[0x6b6] = 0;
    param_1[0x6cf] = param_1[param_1[0x3ad] + 0x6a4];
    param_1[0x6b7] = 0;
    param_1[0x6b8] = 0;
    param_1[0x6b9] = 0;
    param_1[0x6ba] = 0;
    param_1[0x6bb] = 0;
    param_1[0x6bc] = 0;
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

// 00683100  FUN_00683100  size=224  [between]
void __fastcall FUN_00683100(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(byte *)(param_1 + 0xdb4) = *(byte *)(param_1 + 0xdb4) | 8;
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar2 = 0x8000000;
    if (*(int *)(param_1 + 0x1c20) != 0) {
      uVar2 = 0x8000040;
    }
    FUN_00aa4080(0x79,0,0x3d088889,0x3f800000,uVar2,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x894) = 0x3da3d70a;
    FUN_00680470();
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

// 006831E0  FUN_006831e0  size=117  [between]
void __fastcall FUN_006831e0(int *param_1)

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

// 00683260  FUN_00683260  size=211  [between]
void __fastcall FUN_00683260(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(byte *)(param_1 + 0xdb4) = *(byte *)(param_1 + 0xdb4) | 8;
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar2 = 0x8000000;
    if (*(int *)(param_1 + 0x1c20) != 0) {
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
    if (*(int *)(param_1 + 0x1c28) == 0) {
      uVar2 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xea4) = uVar2;
      *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
      uVar2 = 0x60017;
    }
    else {
      uVar2 = 0x80007;
    }
    FUN_00a8caf0(uVar2,0,0,0);
    *(undefined4 *)(param_1 + 0xea0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x139c) = 0;
  }
  return;
}

// 00683340  FUN_00683340  size=236  [between]
void __fastcall FUN_00683340(int param_1)

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
    FUN_00680470();
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

// 00683430  FUN_00683430  size=236  [between]
void __fastcall FUN_00683430(int param_1)

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
    FUN_00680470();
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

// 00683520  FUN_00683520  size=224  [between]
void __fastcall FUN_00683520(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(byte *)(param_1 + 0xdb4) = *(byte *)(param_1 + 0xdb4) | 8;
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar2 = 0x8000000;
    if (*(int *)(param_1 + 0x1c20) != 0) {
      uVar2 = 0x8000040;
    }
    FUN_00aa4080(0x7b,0,0x3d088889,0x3f800000,uVar2,0xbf800000,0x3f800000);
    FUN_00680470();
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

// 00683600  FUN_00683600  size=117  [between]
void __fastcall FUN_00683600(int *param_1)

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

// 00683680  FUN_00683680  size=211  [between]
void __fastcall FUN_00683680(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(byte *)(param_1 + 0xdb4) = *(byte *)(param_1 + 0xdb4) | 8;
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar2 = 0x8000000;
    if (*(int *)(param_1 + 0x1c20) != 0) {
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
    if (*(int *)(param_1 + 0x1c28) == 0) {
      uVar2 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xea4) = uVar2;
      *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
      uVar2 = 0x60017;
    }
    else {
      uVar2 = 0x80007;
    }
    FUN_00a8caf0(uVar2,0,0,0);
    *(undefined4 *)(param_1 + 0xea0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x139c) = 0;
  }
  return;
}

// 00683760  FUN_00683760  size=212  [between]
void __fastcall FUN_00683760(int param_1)

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

// 00683840  FUN_00683840  size=203  [between]
void __fastcall FUN_00683840(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(byte *)(param_1 + 0xdb4) = *(byte *)(param_1 + 0xdb4) | 8;
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x81,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x1b84) = 0;
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

// 00683910  FUN_00683910  size=92  [between]
void __fastcall FUN_00683910(int param_1)

{
  undefined4 uVar1;
  
  if (*(float *)(param_1 + 0x1b2c) <= 0.0) {
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

// 00683970  FUN_00683970  size=110  [between]
void __fastcall FUN_00683970(int param_1)

{
  *(byte *)(param_1 + 0xdb4) = *(byte *)(param_1 + 0xdb4) | 8;
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x83,0,0x3e2aaaab,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_00680470();
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00683A40  FUN_00683a40  size=110  [between]
void __fastcall FUN_00683a40(int param_1)

{
  *(byte *)(param_1 + 0xdb4) = *(byte *)(param_1 + 0xdb4) | 8;
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x84,0,0x3e2aaaab,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_00680470();
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00683AB0  FUN_00683ab0  size=226  [between]
void __fastcall FUN_00683ab0(int param_1)

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
    if (((*(byte *)(param_1 + 0x4a8) & 0x20) == 0) || (iVar1 = FUN_00ac4690(), iVar1 == 0)) {
      uVar2 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xea4) = uVar2;
      *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
      uVar2 = 0x10000;
    }
    else {
      uVar2 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xea4) = uVar2;
      *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
      uVar2 = 0xb0000;
    }
    FUN_00a8caf0(uVar2,0,0,0);
    *(undefined4 *)(param_1 + 0xea0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x139c) = 0;
    return;
  }
  return;
}

// 00683BA0  Em8060::vf248  size=36  [class]
void __fastcall Em8060::vf248(int param_1)

{
  FUN_00e00900();
  FUN_00e03080(*(undefined4 *)(param_1 + 0x4f0),0);
  return;
}

// 00683BD0  FUN_00683bd0  size=103  [between]
void __fastcall FUN_00683bd0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_00a7c950();
  uVar1 = FUN_00a7c7f0();
  FUN_00a7c960(uVar1);
  iVar2 = FUN_00a7c8a0();
  if (iVar2 != 0) {
    FUN_0066d4b0(*(undefined4 *)(param_1 + 0x4f0));
  }
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    iVar2 = FUN_00a7c8a0();
    if (iVar2 != 0) {
      FUN_0066d510();
    }
  }
  return;
}

// 00683C40  Em8060::vf264  size=639  [class]
undefined4 __thiscall Em8060::vf264(int param_1,undefined4 param_2)

{
  byte bVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  byte *pbVar6;
  byte *pbVar7;
  bool bVar8;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  bVar8 = false;
  FUN_0040ac60(param_2);
  iVar3 = FUN_00c19c00(*(undefined4 *)(param_1 + 0xb9c),(int)*(short *)(param_1 + 0xab2),
                       *(undefined4 *)(param_1 + 0xb20));
  if ((iVar3 != 0) && (*(int *)(iVar3 + 0x24) == 0x28040)) {
    uVar4 = FUN_00a7c7f0();
    FUN_00a7c960(uVar4);
    piVar5 = (int *)FUN_00a7c8a0();
    if (piVar5 != (int *)0x0) {
      pcVar2 = *(code **)(*piVar5 + 0xf8);
      bVar8 = true;
      uVar4 = 1;
      piVar5[0x1bb] = 0;
      (*pcVar2)(1);
      (**(code **)(*piVar5 + 0x20))();
      uStack_30 = *(undefined4 *)(param_1 + 0xad0);
      uStack_2c = *(undefined4 *)(param_1 + 0xad4);
      uStack_28 = 0x3f800000;
      uStack_24 = 0;
      uStack_20 = *(undefined4 *)(param_1 + 0xaf0);
      uStack_1c = 0;
      (**(code **)(*piVar5 + 4))(&DAT_01b35590);
      iVar3 = FUN_00dd6d80(uVar4);
      if (iVar3 != 0) {
        FUN_0067bfa0(&uStack_30,&uStack_20);
      }
      if ((*(byte *)(param_1 + 0x4a8) & 4) != 0) {
        iVar3 = FUN_0065f5a0(piVar5);
        if (iVar3 != 0) {
          FUN_00a88b50(1,0);
        }
      }
    }
  }
  FUN_00aa0ba0(*(undefined4 *)(param_1 + 0xb08),*(undefined4 *)(param_1 + 0xb9c));
  FUN_00aa0920(*(undefined4 *)(param_1 + 0xb0c));
  if (*(int *)(param_1 + 0x7d8) == 0) {
    FUN_00dd5650(&DAT_01646f14);
  }
  if (!bVar8) {
    FUN_00dd5650(&DAT_01646edc);
  }
  *(undefined4 *)(param_1 + 0x1b4c) = 0;
  if (*(int *)(param_1 + 0x618) == 0x10000) {
    iVar3 = FUN_00932720();
    if (iVar3 == 0x220) {
      pbVar7 = (byte *)0x163d90c;
      pbVar6 = DAT_018b925c;
      do {
        bVar1 = *pbVar6;
        bVar8 = bVar1 < *pbVar7;
        if (bVar1 != *pbVar7) {
LAB_00683e03:
          iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_00683e08;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar6[1];
        bVar8 = bVar1 < pbVar7[1];
        if (bVar1 != pbVar7[1]) goto LAB_00683e03;
        pbVar6 = pbVar6 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00683e08:
      if (iVar3 == 0) {
        *(float *)(param_1 + 0x1b4c) = (float)(int)*(short *)(param_1 + 0xab2) * 8.0;
        uVar4 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
        *(undefined4 *)(param_1 + 0xea4) = uVar4;
        FUN_00a8caf0(0x10009,0,0,0);
        *(undefined4 *)(param_1 + 0xea0) = 0;
        FUN_00a962d0(0,0);
        *(undefined4 *)(param_1 + 0x139c) = 0;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x1ca0) = *(undefined4 *)(param_1 + 0xacc);
  *(undefined4 *)(param_1 + 0x1ca4) = *(undefined4 *)(param_1 + 0xad0);
  *(undefined4 *)(param_1 + 0x1ca8) = *(undefined4 *)(param_1 + 0xad4);
  *(undefined4 *)(param_1 + 0x1cac) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1cb4) = *(undefined4 *)(param_1 + 0xaf0);
  *(undefined4 *)(param_1 + 0x1cb8) = 0;
  *(undefined4 *)(param_1 + 0x1cb0) = 0;
  FUN_006817e0();
  return 1;
}

// 00683EC0  Em8060::vf268  size=195  [class]
undefined4 __thiscall
Em8060::vf268(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (*(int *)(param_1 + 0x4e4) != 0) {
    return 0;
  }
  local_20 = param_4[8];
  local_1c = param_4[9];
  local_18 = param_4[10];
  local_14 = 0x3f800000;
  switch(*param_4) {
  case 1:
    uVar2 = 2;
    break;
  case 2:
    uVar2 = 4;
    break;
  default:
    return 0;
  case 9:
    iVar1 = FUN_00a8cbe0(0x8002c);
    if (iVar1 == 0) {
      return 0;
    }
    FUN_0067cd40(0x8002d,0,0,0,0);
    return 0;
  case 0x15:
    FUN_00ac4710(param_4[0xb]);
    FUN_00a8d710(param_1 + 0x40);
    return 1;
  }
  FUN_00a883f0(uVar2,0,&local_20);
  return 1;
}

// 00684040  FUN_00684040  size=126  [between]
void __fastcall FUN_00684040(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  uVar1 = FUN_00ac8660(0,0x1d);
  *(undefined4 *)(param_1 + 0x1994) = uVar1;
  uVar1 = FUN_00ac8660(0,0x1e);
  *(undefined4 *)(param_1 + 0x1998) = uVar1;
  uVar1 = FUN_00ac8660(0,0x1f);
  *(undefined4 *)(param_1 + 0x199c) = uVar1;
  uVar1 = FUN_00ac8660(0,0x20);
  *(undefined4 *)(param_1 + 0x19a0) = uVar1;
  if (*(int *)(param_1 + 0x4a0) == 1) {
    FUN_00ac85c0(5,0x8c);
    puVar2 = (undefined4 *)(param_1 + 0x1994);
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

// 00684110  FUN_00684110  size=90  [between]
void __fastcall FUN_00684110(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0067dc40();
  if ((iVar1 != 0) && (*(int *)(param_1 + 0xeb4) == 0)) {
    iVar1 = FUN_00a8cbe0(0x1000a);
    if (iVar1 == 0) {
      iVar1 = FUN_00a82d50();
      if ((iVar1 != 1) && (0 < *(int *)(param_1 + 0x19ac))) {
        *(undefined4 *)(param_1 + 0x19a8) = 1;
        *(int *)(param_1 + 0x19ac) = *(int *)(param_1 + 0x19ac) + -1;
        FUN_0067d8b0();
        return;
      }
    }
  }
  return;
}

// 00684170  FUN_00684170  size=548  [between]
undefined4 __fastcall FUN_00684170(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int local_4;
  
  local_4 = param_1;
  sVar1 = FUN_00dde2d0(0,2);
  uVar4 = (int)sVar1 + 0x1000d;
  if ((*(int *)(param_1 + 0xc04) != 0) && (uVar4 == 0x80029)) {
    uVar4 = 0xf0008;
  }
  if ((uVar4 & 0xffff0000) != 0x80000) {
    uVar2 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xea4) = uVar2;
    *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
  }
  FUN_00a8caf0(uVar4,0,0,0);
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
  if ((((iVar3 != 0x1000d) || (*(int *)(param_1 + 0x1b6c) != 1)) &&
      ((iVar3 != 0x1000e || (*(int *)(param_1 + 0x1b70) != 1)))) &&
     ((iVar3 != 0x1000f || (*(int *)(param_1 + 0x1b68) != 1)))) {
    iVar3 = FUN_0067dae0(&local_4);
    if (iVar3 != 0) {
      FUN_0067cd40(local_4,0,0,0,0);
      return 1;
    }
    if (*(int *)(param_1 + 0x1b64) == 0) {
      if (*(float *)(param_1 + 0xa90) <= 9.0) {
        return 1;
      }
      uVar2 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xea4) = uVar2;
      *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
      uVar2 = 0x10010;
    }
    else {
      uVar2 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xea4) = uVar2;
      *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
      uVar2 = 0x10003;
    }
    FUN_00a8caf0(uVar2,0,0,0);
    *(undefined4 *)(param_1 + 0xea0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x139c) = 0;
  }
  return 1;
}

// 006843A0  FUN_006843a0  size=108  [between]
void __thiscall FUN_006843a0(int param_1,undefined4 param_2)

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
  FUN_0090fa30(param_1 + 0x1b80,0,&local_20,0x3f000000,param_2,iVar1 << 0x10 | 7,"Em8060");
  return;
}

// 00684410  FUN_00684410  size=268  [between]
/* WARNING: Removing unreachable block (ram,0x00684481) */

undefined4 __fastcall FUN_00684410(int param_1)

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
  iVar1 = FUN_00907640(param_1 + 0x1b80,&local_24,local_20);
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

// 00684520  FUN_00684520  size=129  [between]
void __fastcall FUN_00684520(int param_1)

{
  undefined4 uVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if (0x7fffffff < *(uint *)(param_1 + 0x1dc0)) {
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    uVar1 = FUN_0093c1f0((int)*(char *)(param_1 + 0xbab),*(undefined4 *)(param_1 + 0x4f0),4,0,
                         &local_20,&local_30,0x41200000,0x3f000000,0xbf800000);
    *(undefined4 *)(param_1 + 0x1dc0) = uVar1;
  }
  return;
}

// 006845B0  FUN_006845b0  size=88  [between]
undefined4 __fastcall FUN_006845b0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = 0;
  local_4 = 0;
  if (*(int *)(param_1 + 0x1b84) == 0) {
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

// 00684610  FUN_00684610  size=286  [between]
undefined4 __fastcall FUN_00684610(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cbe0(0x8002b);
  if ((((((iVar1 == 0) && (iVar1 = FUN_00a8cbe0(0x8002d), iVar1 == 0)) &&
        (iVar1 = FUN_00a8cbe0(0x8002c), iVar1 == 0)) &&
       ((param_1[0x709] != 0 && (param_1[0x70a] == 0)))) &&
      ((iVar1 = FUN_00a8cbe0(0x80000), iVar1 == 0 &&
       ((iVar1 = FUN_00a8cbe0(0x8000d), iVar1 == 0 && (iVar1 = FUN_00a8cbe0(0x50018), iVar1 == 0))))
      )) && ((iVar1 = FUN_00a8cbe0(0x80029), iVar1 == 0 &&
             ((param_1[0x139] == 0 && (param_1[0x301] == 0)))))) {
    iVar1 = FUN_006845b0();
    if (iVar1 == 0) {
      if (param_1[0x6e1] == 0) {
        return 0;
      }
    }
    else if (param_1[0x6e1] == 0) {
      (**(code **)(*param_1 + 0x314))();
      param_1[0x3a7] = 0;
      param_1[0x6e1] = 1;
      FUN_0067cd40(0x60014,0,0,0,0);
      return 1;
    }
    iVar1 = FUN_006845b0();
    if (iVar1 == 0) {
      param_1[0x6e1] = 0;
    }
  }
  return 0;
}

// 00684730  FUN_00684730  size=175  [between]
undefined4 __fastcall FUN_00684730(int *param_1)

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

// 006847E0  FUN_006847e0  size=958  [between]
void __fastcall FUN_006847e0(int param_1)

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
    puVar7 = &DAT_01b355b0;
    (**(code **)(*piVar3 + 4))(&DAT_01b355b0);
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
    FUN_00a7c960(param_1 + 0x1480);
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
    FUN_0065d590(0);
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
      FUN_0065d590(1);
      FUN_00671fb0(1,0);
      FUN_0066e8e0();
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

// 00684BC0  FUN_00684bc0  size=165  [between]
void __fastcall FUN_00684bc0(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    puVar3 = &DAT_01b355b0;
    (**(code **)(*piVar2 + 4))(&DAT_01b355b0);
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
                    /* WARNING: Could not recover jumptable at 0x00684c63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00684C70  FUN_00684c70  size=428  [between]
void __fastcall FUN_00684c70(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float local_14;
  int aiStack_10 [4];
  
  param_1[0x139] = 1;
  if (param_1[0x187] == 0) {
    FUN_00ac8e10(1);
    FUN_00c4d1a0(param_1[0x13c],0);
    pcVar1 = *(code **)(*param_1 + 0x344);
    param_1[0xd9] = param_1[0xd9] & 0xffefffff;
    param_1[0x1af] = 1;
    param_1[0x362] = 1;
    (*pcVar1)(5,3,1);
    FUN_00a8c9b0(0,0,0x3f800000,0);
    FUN_00eaa6e0(0x3f800000,0);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar6 = (float10)FUN_00ac8f80();
  fVar6 = fVar6 - (float10)0.011111111;
  local_14 = (float)fVar6;
  if (fVar6 < (float10)0) {
    local_14 = (float)(float10)0;
    (**(code **)(*param_1 + 0x20))();
    iVar2 = FUN_00a81330();
    if (iVar2 != 0) {
      FUN_00a805f0();
    }
    (**(code **)(*param_1 + 0x364))(0xffffffff);
    FUN_009fdde0();
    fVar6 = (float10)local_14;
  }
  FUN_00ac8fd0((float)fVar6);
  aiStack_10[0] = FUN_00a81330();
  aiStack_10[1] = FUN_00a81330();
  aiStack_10[2] = FUN_00a81330();
  aiStack_10[3] = FUN_00a81330();
  iVar2 = 0;
  do {
    if ((aiStack_10[iVar2] != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
      iVar5 = 0;
      iVar4 = 0;
      if (0 < *(short *)(iVar3 + 0x324)) {
        do {
          *(float *)(iVar5 + 0x1c + *(int *)(iVar3 + 800)) = local_14;
          iVar4 = iVar4 + 1;
          iVar5 = iVar5 + 0x70;
        } while (iVar4 < *(short *)(iVar3 + 0x324));
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  return;
}

// 00684E20  Em8060::vf258  size=140  [class]
void __thiscall Em8060::vf258(int param_1,int param_2,undefined4 param_3,int param_4)

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
      *(int **)(param_1 + 0x1414 + param_2 * 4) = piVar2;
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x1414 + param_2 * 4) = 0;
  return;
}

// 00684EB0  Em8060::vf260  size=94  [class]
void __thiscall Em8060::vf260(int param_1,int param_2,int param_3)

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
    *(undefined4 *)(param_1 + 0x1414 + param_2 * 4) = 0;
  }
  return;
}

// 00684F10  FUN_00684f10  size=347  [callgraph]
undefined4 FUN_00684f10(float *param_1,int param_2)

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
    if (*param_1 != 0.0) goto LAB_00684fcc;
  }
  if ((param_1[1] == 0.0) && (param_1[2] == 0.0)) {
    return 0;
  }
LAB_00684fcc:
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

// 00685070  FUN_00685070  size=737  [callgraph]
void __fastcall FUN_00685070(int *param_1)

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
    if (param_1[0x708] != 0) {
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
    if (param_1[0x708] != 0) {
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
        fStack_18 = local_28 + local_38;
        fStack_14 = fStack_34 + local_24;
        if (param_1[0x505] != 0) {
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
      param_1[0x3a8] = 0;
      FUN_00a962d0(0,0);
      param_1[0x4e7] = 0;
      sVar2 = FUN_00dde2d0(0,2);
      param_1[0x712] = (int)(((float)(int)sVar2 + 1.0) * 60.0);
    }
  }
  iVar4 = FUN_00a8c760(0);
  if (iVar4 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3ca3d70a,0x393702d3,0x3e0efa35,0);
  }
  return;
}

// 00685370  FUN_00685370  size=825  [callgraph]
void __fastcall FUN_00685370(int *param_1)

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
      param_1[0x3a8] = 0;
      FUN_00a962d0(0,0);
      param_1[0x4e7] = 0;
      sVar2 = FUN_00dde2d0(0,2);
      param_1[0x712] = (int)(((float)(int)sVar2 + 1.0) * 30.0);
      return;
    }
    uVar3 = 0x8000000;
    if (param_1[0x708] != 0) {
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
    goto switchD_0068538d_default;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar1 = (float)param_1[0x248];
  param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
  if (((fVar1 - (float)param_1[0x244] < 0.0) && (iVar4 = FUN_00a8c760(8), iVar4 != 0)) &&
     (param_1[0x710] == 0)) {
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
      fStack_18 = local_28 + local_38;
      fStack_14 = fStack_34 + local_24;
      if (param_1[0x505] != 0) {
        FUN_0043fc90(param_1[0x2a2],&fStack_20,0);
      }
    }
    FUN_00aa4080(0x44,2,0,0x3f800000,0x8000210,0,0x3f800000);
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 + 10.0);
    if (*(int *)(param_1[0x505] + 0x4a0) == 1) {
      param_1[0x248] = (int)(fVar1 + 10.0 + 20.0);
    }
  }
  iVar4 = FUN_00a94ce0(0);
  if (iVar4 != 0) {
    FUN_00a8caf0(0x80006,0,0,0);
    param_1[0x3a8] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4e7] = 0;
    sVar2 = FUN_00dde2d0(0,2);
    param_1[0x712] = (int)(((float)(int)sVar2 + 1.0) * 60.0);
    return;
  }
switchD_0068538d_default:
  return;
}

// 006856C0  FUN_006856c0  size=264  [callgraph]
void __fastcall FUN_006856c0(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1[0x187] == 0) {
    uVar2 = 0x8000000;
    if (param_1[0x708] != 0) {
      uVar2 = 0x8000040;
    }
    param_1[0x187] = 1;
    FUN_00aa4080(0xad,0,0x3d088889,0x3f800000,uVar2,param_1[0x70d],0x3f800000);
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
    uVar4 = 0x80029;
    if (param_1[0x301] != 0) {
      uVar4 = 0xf0008;
    }
    if ((uVar4 & 0xffff0000) != 0x80000) {
      iVar3 = FUN_00a8cab0();
      param_1[0x3a9] = iVar3;
      param_1[0x3aa] = param_1[0x3a8];
    }
    FUN_00a8caf0(uVar4,0,0,0);
    param_1[0x3a8] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4e7] = 0;
  }
  return;
}

// 006857D0  FUN_006857d0  size=264  [callgraph]
void __fastcall FUN_006857d0(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1[0x187] == 0) {
    uVar2 = 0x8000000;
    if (param_1[0x708] != 0) {
      uVar2 = 0x8000040;
    }
    param_1[0x187] = 1;
    FUN_00aa4080(0xb5,0,0x3d088889,0x3f800000,uVar2,param_1[0x70d],0x3f800000);
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
    uVar4 = 0x80029;
    if (param_1[0x301] != 0) {
      uVar4 = 0xf0008;
    }
    if ((uVar4 & 0xffff0000) != 0x80000) {
      iVar3 = FUN_00a8cab0();
      param_1[0x3a9] = iVar3;
      param_1[0x3aa] = param_1[0x3a8];
    }
    FUN_00a8caf0(uVar4,0,0,0);
    param_1[0x3a8] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4e7] = 0;
  }
  return;
}

// 006858E0  FUN_006858e0  size=264  [callgraph]
void __fastcall FUN_006858e0(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1[0x187] == 0) {
    uVar2 = 0x8000000;
    if (param_1[0x708] != 0) {
      uVar2 = 0x8000040;
    }
    param_1[0x187] = 1;
    FUN_00aa4080(0xb6,0,0x3d088889,0x3f800000,uVar2,param_1[0x70d],0x3f800000);
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
    uVar4 = 0x80029;
    if (param_1[0x301] != 0) {
      uVar4 = 0xf0008;
    }
    if ((uVar4 & 0xffff0000) != 0x80000) {
      iVar3 = FUN_00a8cab0();
      param_1[0x3a9] = iVar3;
      param_1[0x3aa] = param_1[0x3a8];
    }
    FUN_00a8caf0(uVar4,0,0,0);
    param_1[0x3a8] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4e7] = 0;
  }
  return;
}

// 006859F0  FUN_006859f0  size=264  [callgraph]
void __fastcall FUN_006859f0(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1[0x187] == 0) {
    uVar2 = 0x8000000;
    if (param_1[0x708] != 0) {
      uVar2 = 0x8000040;
    }
    param_1[0x187] = 1;
    FUN_00aa4080(0xb7,0,0x3d088889,0x3f800000,uVar2,param_1[0x70d],0x3f800000);
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
    uVar4 = 0x80029;
    if (param_1[0x301] != 0) {
      uVar4 = 0xf0008;
    }
    if ((uVar4 & 0xffff0000) != 0x80000) {
      iVar3 = FUN_00a8cab0();
      param_1[0x3a9] = iVar3;
      param_1[0x3aa] = param_1[0x3a8];
    }
    FUN_00a8caf0(uVar4,0,0,0);
    param_1[0x3a8] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4e7] = 0;
  }
  return;
}

// 00685B00  FUN_00685b00  size=291  [callgraph]
void __fastcall FUN_00685b00(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1[0x187] == 0) {
    uVar2 = 0x8000000;
    if (param_1[0x708] != 0) {
      uVar2 = 0x8000040;
    }
    param_1[0x187] = 1;
    FUN_00aa4080(0xb8,0,0x3d088889,0x3f800000,uVar2,param_1[0x70d],0x3f800000);
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
    uVar4 = 0x80029;
    if (param_1[0x301] != 0) {
      uVar4 = 0xf0008;
    }
    if ((uVar4 & 0xffff0000) != 0x80000) {
      iVar3 = FUN_00a8cab0();
      param_1[0x3a9] = iVar3;
      param_1[0x3aa] = param_1[0x3a8];
    }
    FUN_00a8caf0(uVar4,0,0,0);
    param_1[0x3a8] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4e7] = 0;
  }
  iVar3 = FUN_00a8c760(0x37);
  if (iVar3 != 0) {
    param_1[0x708] = 1;
  }
  return;
}

// 00685C30  FUN_00685c30  size=264  [callgraph]
void __fastcall FUN_00685c30(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1[0x187] == 0) {
    uVar2 = 0x8000000;
    if (param_1[0x708] != 0) {
      uVar2 = 0x8000040;
    }
    param_1[0x187] = 1;
    FUN_00aa4080(0xb9,0,0x3d088889,0x3f800000,uVar2,param_1[0x70d],0x3f800000);
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
    uVar4 = 0x80029;
    if (param_1[0x301] != 0) {
      uVar4 = 0xf0008;
    }
    if ((uVar4 & 0xffff0000) != 0x80000) {
      iVar3 = FUN_00a8cab0();
      param_1[0x3a9] = iVar3;
      param_1[0x3aa] = param_1[0x3a8];
    }
    FUN_00a8caf0(uVar4,0,0,0);
    param_1[0x3a8] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4e7] = 0;
  }
  return;
}

// 00685D40  FUN_00685d40  size=291  [callgraph]
void __fastcall FUN_00685d40(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1[0x187] == 0) {
    uVar2 = 0x8000000;
    if (param_1[0x708] != 0) {
      uVar2 = 0x8000040;
    }
    param_1[0x187] = 1;
    FUN_00aa4080(0xba,0,0x3d088889,0x3f800000,uVar2,param_1[0x70d],0x3f800000);
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
    uVar4 = 0x80029;
    if (param_1[0x301] != 0) {
      uVar4 = 0xf0008;
    }
    if ((uVar4 & 0xffff0000) != 0x80000) {
      iVar3 = FUN_00a8cab0();
      param_1[0x3a9] = iVar3;
      param_1[0x3aa] = param_1[0x3a8];
    }
    FUN_00a8caf0(uVar4,0,0,0);
    param_1[0x3a8] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4e7] = 0;
  }
  iVar3 = FUN_00a8c760(0x37);
  if (iVar3 != 0) {
    param_1[0x708] = 1;
  }
  return;
}

// 00685E70  FUN_00685e70  size=264  [callgraph]
void __fastcall FUN_00685e70(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1[0x187] == 0) {
    uVar2 = 0x8000000;
    if (param_1[0x708] != 0) {
      uVar2 = 0x8000040;
    }
    param_1[0x187] = 1;
    FUN_00aa4080(0xbc,0,0x3d088889,0x3f800000,uVar2,param_1[0x70d],0x3f800000);
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
    uVar4 = 0x80029;
    if (param_1[0x301] != 0) {
      uVar4 = 0xf0008;
    }
    if ((uVar4 & 0xffff0000) != 0x80000) {
      iVar3 = FUN_00a8cab0();
      param_1[0x3a9] = iVar3;
      param_1[0x3aa] = param_1[0x3a8];
    }
    FUN_00a8caf0(uVar4,0,0,0);
    param_1[0x3a8] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4e7] = 0;
  }
  return;
}

// 00685F80  FUN_00685f80  size=264  [callgraph]
void __fastcall FUN_00685f80(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1[0x187] == 0) {
    uVar2 = 0x8000000;
    if (param_1[0x708] != 0) {
      uVar2 = 0x8000040;
    }
    param_1[0x187] = 1;
    FUN_00aa4080(0xbd,0,0x3d088889,0x3f800000,uVar2,param_1[0x70d],0x3f800000);
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
    uVar4 = 0x80029;
    if (param_1[0x301] != 0) {
      uVar4 = 0xf0008;
    }
    if ((uVar4 & 0xffff0000) != 0x80000) {
      iVar3 = FUN_00a8cab0();
      param_1[0x3a9] = iVar3;
      param_1[0x3aa] = param_1[0x3a8];
    }
    FUN_00a8caf0(uVar4,0,0,0);
    param_1[0x3a8] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4e7] = 0;
  }
  return;
}

// 00686090  FUN_00686090  size=264  [callgraph]
void __fastcall FUN_00686090(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1[0x187] == 0) {
    uVar2 = 0x8000000;
    if (param_1[0x708] != 0) {
      uVar2 = 0x8000040;
    }
    param_1[0x187] = 1;
    FUN_00aa4080(0xbe,0,0x3d088889,0x3f800000,uVar2,param_1[0x70d],0x3f800000);
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
    uVar4 = 0x80029;
    if (param_1[0x301] != 0) {
      uVar4 = 0xf0008;
    }
    if ((uVar4 & 0xffff0000) != 0x80000) {
      iVar3 = FUN_00a8cab0();
      param_1[0x3a9] = iVar3;
      param_1[0x3aa] = param_1[0x3a8];
    }
    FUN_00a8caf0(uVar4,0,0,0);
    param_1[0x3a8] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4e7] = 0;
  }
  return;
}

// 006861A0  FUN_006861a0  size=264  [callgraph]
void __fastcall FUN_006861a0(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1[0x187] == 0) {
    uVar2 = 0x8000000;
    if (param_1[0x708] != 0) {
      uVar2 = 0x8000040;
    }
    param_1[0x187] = 1;
    FUN_00aa4080(0xbf,0,0x3d088889,0x3f800000,uVar2,param_1[0x70d],0x3f800000);
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
    uVar4 = 0x80029;
    if (param_1[0x301] != 0) {
      uVar4 = 0xf0008;
    }
    if ((uVar4 & 0xffff0000) != 0x80000) {
      iVar3 = FUN_00a8cab0();
      param_1[0x3a9] = iVar3;
      param_1[0x3aa] = param_1[0x3a8];
    }
    FUN_00a8caf0(uVar4,0,0,0);
    param_1[0x3a8] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4e7] = 0;
  }
  return;
}

// 006862B0  FUN_006862b0  size=264  [callgraph]
void __fastcall FUN_006862b0(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1[0x187] == 0) {
    uVar2 = 0x8000000;
    if (param_1[0x708] != 0) {
      uVar2 = 0x8000040;
    }
    param_1[0x187] = 1;
    FUN_00aa4080(0xc0,0,0x3d088889,0x3f800000,uVar2,param_1[0x70d],0x3f800000);
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
    uVar4 = 0x80029;
    if (param_1[0x301] != 0) {
      uVar4 = 0xf0008;
    }
    if ((uVar4 & 0xffff0000) != 0x80000) {
      iVar3 = FUN_00a8cab0();
      param_1[0x3a9] = iVar3;
      param_1[0x3aa] = param_1[0x3a8];
    }
    FUN_00a8caf0(uVar4,0,0,0);
    param_1[0x3a8] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4e7] = 0;
  }
  return;
}

// 006863C0  FUN_006863c0  size=264  [callgraph]
void __fastcall FUN_006863c0(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1[0x187] == 0) {
    uVar2 = 0x8000000;
    if (param_1[0x708] != 0) {
      uVar2 = 0x8000040;
    }
    param_1[0x187] = 1;
    FUN_00aa4080(0xc1,0,0x3d088889,0x3f800000,uVar2,param_1[0x70d],0x3f800000);
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
    uVar4 = 0x80029;
    if (param_1[0x301] != 0) {
      uVar4 = 0xf0008;
    }
    if ((uVar4 & 0xffff0000) != 0x80000) {
      iVar3 = FUN_00a8cab0();
      param_1[0x3a9] = iVar3;
      param_1[0x3aa] = param_1[0x3a8];
    }
    FUN_00a8caf0(uVar4,0,0,0);
    param_1[0x3a8] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4e7] = 0;
  }
  return;
}

// 006864D0  FUN_006864d0  size=264  [callgraph]
void __fastcall FUN_006864d0(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1[0x187] == 0) {
    uVar2 = 0x8000000;
    if (param_1[0x708] != 0) {
      uVar2 = 0x8000040;
    }
    param_1[0x187] = 1;
    FUN_00aa4080(0xc3,0,0x3d088889,0x3f800000,uVar2,param_1[0x70d],0x3f800000);
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
    uVar4 = 0x80029;
    if (param_1[0x301] != 0) {
      uVar4 = 0xf0008;
    }
    if ((uVar4 & 0xffff0000) != 0x80000) {
      iVar3 = FUN_00a8cab0();
      param_1[0x3a9] = iVar3;
      param_1[0x3aa] = param_1[0x3a8];
    }
    FUN_00a8caf0(uVar4,0,0,0);
    param_1[0x3a8] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4e7] = 0;
  }
  return;
}

// 006865E0  FUN_006865e0  size=264  [callgraph]
void __fastcall FUN_006865e0(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1[0x187] == 0) {
    uVar2 = 0x8000000;
    if (param_1[0x708] != 0) {
      uVar2 = 0x8000040;
    }
    param_1[0x187] = 1;
    FUN_00aa4080(0xc4,0,0x3d088889,0x3f800000,uVar2,param_1[0x70d],0x3f800000);
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
    uVar4 = 0x80029;
    if (param_1[0x301] != 0) {
      uVar4 = 0xf0008;
    }
    if ((uVar4 & 0xffff0000) != 0x80000) {
      iVar3 = FUN_00a8cab0();
      param_1[0x3a9] = iVar3;
      param_1[0x3aa] = param_1[0x3a8];
    }
    FUN_00a8caf0(uVar4,0,0,0);
    param_1[0x3a8] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4e7] = 0;
  }
  return;
}

// 006866F0  FUN_006866f0  size=264  [callgraph]
void __fastcall FUN_006866f0(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1[0x187] == 0) {
    uVar2 = 0x8000000;
    if (param_1[0x708] != 0) {
      uVar2 = 0x8000040;
    }
    param_1[0x187] = 1;
    FUN_00aa4080(0xc5,0,0x3d088889,0x3f800000,uVar2,param_1[0x70d],0x3f800000);
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
    uVar4 = 0x80029;
    if (param_1[0x301] != 0) {
      uVar4 = 0xf0008;
    }
    if ((uVar4 & 0xffff0000) != 0x80000) {
      iVar3 = FUN_00a8cab0();
      param_1[0x3a9] = iVar3;
      param_1[0x3aa] = param_1[0x3a8];
    }
    FUN_00a8caf0(uVar4,0,0,0);
    param_1[0x3a8] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4e7] = 0;
  }
  return;
}

// 00686800  FUN_00686800  size=264  [callgraph]
void __fastcall FUN_00686800(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1[0x187] == 0) {
    uVar2 = 0x8000000;
    if (param_1[0x708] != 0) {
      uVar2 = 0x8000040;
    }
    param_1[0x187] = 1;
    FUN_00aa4080(0xc6,0,0x3d088889,0x3f800000,uVar2,param_1[0x70d],0x3f800000);
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
    uVar4 = 0x80029;
    if (param_1[0x301] != 0) {
      uVar4 = 0xf0008;
    }
    if ((uVar4 & 0xffff0000) != 0x80000) {
      iVar3 = FUN_00a8cab0();
      param_1[0x3a9] = iVar3;
      param_1[0x3aa] = param_1[0x3a8];
    }
    FUN_00a8caf0(uVar4,0,0,0);
    param_1[0x3a8] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4e7] = 0;
  }
  return;
}

// 00686910  FUN_00686910  size=557  [callgraph]
void __fastcall FUN_00686910(int *param_1)

{
  float fVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  switch(param_1[0x187]) {
  case 0:
    uVar3 = 0x8000000;
    if (param_1[0x708] != 0) {
      uVar3 = 0x8000040;
    }
    param_1[0x187] = 1;
    FUN_00aa4080(0xa6,0,0x3d088889,0x3f800000,uVar3,0xbf800000,0x3f800000);
    param_1[0x36a] = -1;
    param_1[0x36c] = -1;
    pcVar2 = *(code **)(*param_1 + 0x344);
    param_1[0x70a] = 1;
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
    if (param_1[0x708] != 0) {
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
    if (param_1[0x708] != 0) {
      uVar3 = 0x8000040;
    }
    param_1[0x187] = 5;
    FUN_00aa4080(0xad,0,0x3d088889,0x3f800000,uVar3,0xbf800000,0x3f800000);
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      uVar5 = 0x80029;
      if (param_1[0x301] != 0) {
        uVar5 = 0xf0008;
      }
      if ((uVar5 & 0xffff0000) != 0x80000) {
        iVar4 = FUN_00a8cab0();
        param_1[0x3a9] = iVar4;
        param_1[0x3aa] = param_1[0x3a8];
      }
      FUN_00a8caf0(uVar5,0,0,0);
      param_1[0x3a8] = 0;
      FUN_00a962d0(0,0);
      param_1[0x4e7] = 0;
      return;
    }
  }
  return;
}

// 00686B60  FUN_00686b60  size=67  [callgraph]
void __fastcall FUN_00686b60(int param_1)

{
  if (*(float *)(param_1 + 0x1b2c) <= 0.0) {
    FUN_00a8caf0(0x80006,0,0,0);
    *(undefined4 *)(param_1 + 0xea0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x139c) = 0;
  }
  return;
}

// 00686BB0  FUN_00686bb0  size=117  [callgraph]
void __fastcall FUN_00686bb0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar1 = 0;
    if (*(int *)(param_1 + 0x1c20) != 0) {
      uVar1 = 0x40;
    }
    FUN_00aa4080(0x84,0,0x3d088889,0x3f800000,uVar1,0xbf800000,0x3f800000);
    FUN_00680470();
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00686FE0  FUN_00686fe0  size=285  [callgraph]
undefined4 * __thiscall FUN_00686fe0(int param_1,undefined4 *param_2)

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
LAB_00687082:
            iVar3 = FUN_00a7c8a0();
            *param_2 = *(undefined4 *)(iVar3 + 0x40);
            param_2[1] = *(undefined4 *)(iVar3 + 0x44);
            param_2[2] = *(undefined4 *)(iVar3 + 0x48);
            param_2[3] = *(undefined4 *)(iVar3 + 0x4c);
            return param_2;
          }
          if (*(int *)(iVar1 + 0xc) == 2) {
            FUN_00a81330();
            goto LAB_00687082;
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

// 00687100  FUN_00687100  size=154  [callgraph]
void __thiscall FUN_00687100(int param_1,undefined4 *param_2,int param_3)

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

// 006871C0  FUN_006871c0  size=380  [callgraph]
void FUN_006871c0(int param_1,float param_2,float param_3,float param_4,float param_5)

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
  FUN_00687100(local_20,param_1);
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

// 00687390  FUN_00687390  size=105  [callgraph]
void __thiscall FUN_00687390(int param_1,undefined4 *param_2,int param_3)

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

// 00687420  FUN_00687420  size=1068  [callgraph]
undefined4 __thiscall FUN_00687420(int param_1,float *param_2)

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

// 00687850  FUN_00687850  size=380  [callgraph]
void FUN_00687850(int param_1,float param_2,float param_3,float param_4,float param_5)

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
  FUN_00687390(local_20,param_1);
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

// 006879D0  FUN_006879d0  size=105  [callgraph]
void __fastcall FUN_006879d0(int param_1)

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
      puVar6 = &DAT_01b355b0;
      (**(code **)(*piVar4 + 4))(&DAT_01b355b0);
      iVar3 = FUN_00dd6d80(puVar6);
      if ((iVar3 != 0) && (iVar3 = FUN_00a8cbe0(0x80000), iVar3 == 0)) {
        FUN_00684110();
      }
    }
  }
  return;
}

// 00687A80  FUN_00687a80  size=418  [callgraph]
void __fastcall FUN_00687a80(int param_1)

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
      puVar6 = &DAT_01b355b0;
      (**(code **)(*piVar4 + 4))(&DAT_01b355b0);
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
switchD_00687b22_caseD_10000:
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
                  goto switchD_00687b22_caseD_10000;
                case 0x10010:
                case 0x10012:
                case 0x10013:
                  goto switchD_00687b60_caseD_10010;
                }
              }
              else {
switchD_00687b60_caseD_10010:
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
              if (0x60000 < iVar3) goto LAB_00687bd2;
              if ((iVar3 == 0x50018) && (iVar3 = FUN_00a8cac0(), 5 < iVar3)) {
                FUN_006879d0();
              }
            }
            else if (iVar3 - 0x60009U < 7) goto LAB_00687bd2;
          }
          else {
LAB_00687bd2:
            *(undefined4 *)(iVar5 + 8) = 3;
            *(undefined4 *)(iVar5 + 0xc) = 4;
          }
        }
        else if (iVar3 < 0x8002a) {
          if ((iVar3 == 0x80029) || (iVar3 - 0x80000U < 2)) {
            *(undefined4 *)(iVar5 + 8) = 6;
            FUN_006879d0();
          }
        }
        else if (iVar3 == 0xf0000) goto switchD_00687b60_caseD_10010;
      }
    }
    iVar5 = iVar5 + 0x10;
  } while( true );
}

// 00687C60  FUN_00687c60  size=160  [callgraph]
void __fastcall FUN_00687c60(int param_1)

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

// 00687D00  FUN_00687d00  size=920  [callgraph]
void __thiscall FUN_00687d00(int param_1,float *param_2,float *param_3)

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

// 006880A0  FUN_006880a0  size=920  [callgraph]
void __thiscall FUN_006880a0(int param_1,float *param_2,float *param_3)

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

// 006884B0  FUN_006884b0  size=85  [callgraph]
int __fastcall FUN_006884b0(int param_1)

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

// 00688510  FUN_00688510  size=100  [callgraph]
undefined4 __thiscall FUN_00688510(int param_1,float param_2)

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

// 00688580  FUN_00688580  size=145  [callgraph]
float10 __thiscall FUN_00688580(int param_1,int param_2,float *param_3)

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

// 00688620  FUN_00688620  size=226  [callgraph]
undefined4 __fastcall FUN_00688620(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_00680500();
  switch(uVar1) {
  case 1:
    uVar1 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xea4) = uVar1;
    *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
    uVar1 = 0x50007;
LAB_0068865c:
    FUN_00a8caf0(uVar1,0,0,0);
    *(undefined4 *)(param_1 + 0xea0) = 0;
    FUN_00a962d0(0,0);
    *(undefined4 *)(param_1 + 0x139c) = 0;
    return 1;
  case 2:
    iVar2 = FUN_00688510(*(undefined4 *)(param_1 + 0x1abc));
    if (iVar2 != 0) {
      uVar1 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xea4) = uVar1;
      *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
      uVar1 = 0x5000d;
      goto LAB_0068865c;
    }
    break;
  case 3:
    iVar2 = FUN_00688510(*(undefined4 *)(param_1 + 0x1abc));
    if (iVar2 != 0) {
      uVar1 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xea4) = uVar1;
      *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
      uVar1 = 0x5000c;
      goto LAB_0068865c;
    }
  }
  return 0;
}

// 00688730  FUN_00688730  size=376  [callgraph]
bool __thiscall FUN_00688730(int param_1,uint param_2)

{
  undefined4 uVar1;
  bool bVar2;
  
  if ((int)param_2 < 0x5000f) {
    if (0x50007 < (int)param_2) {
LAB_0068881c:
      if (*(uint *)(param_1 + 0xe94) == param_2) {
        return false;
      }
      *(uint *)(param_1 + 0xe94) = param_2;
      bVar2 = true;
      FUN_00c27260(0x40a00000);
      FUN_00c272a0(0x40a00000);
      goto LAB_00688792;
    }
    if ((int)param_2 < 0x10011) {
      if ((0x1000c < (int)param_2) || ((0x10000 < (int)param_2 && ((int)param_2 < 0x10009)))) {
LAB_00688888:
        if (*(uint *)(param_1 + 0xe98) == param_2) {
          return false;
        }
        *(uint *)(param_1 + 0xe98) = param_2;
        bVar2 = true;
        goto LAB_00688792;
      }
    }
    else if ((0x4ffff < (int)param_2) && ((int)param_2 < 0x50008)) goto LAB_0068881c;
  }
  else if ((int)param_2 < 0xf0002) {
    if (0xeffff < (int)param_2) goto LAB_0068881c;
    if ((0x9ffff < (int)param_2) && ((int)param_2 < 0xa0008)) goto LAB_00688888;
  }
  bVar2 = *(uint *)(param_1 + 0xe90) != param_2;
  if (!bVar2) {
    return bVar2;
  }
  *(uint *)(param_1 + 0xe90) = param_2;
LAB_00688792:
  if ((*(int *)(param_1 + 0xc04) != 0) && (param_2 == 0x80029)) {
    param_2 = 0xf0008;
  }
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

// 006888B0  FUN_006888b0  size=771  [callgraph]
undefined4 __fastcall FUN_006888b0(int param_1)

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
  
  FUN_00687100(&local_20,*(undefined4 *)(param_1 + 0x4f0));
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
      fVar6 = (float10)FUN_00688580(*(undefined4 *)(param_1 + 0x4f0),&local_20);
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
      iVar3 = FUN_00688730(iVar5);
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

// 00688BC0  FUN_00688bc0  size=246  [callgraph]
undefined4 __thiscall FUN_00688bc0(int *param_1,int *param_2)

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

// 00688CC0  Em8060::getAttackInfo  size=474  [class]
undefined4 __thiscall Em8060::getAttackInfo(int param_1,ushort *param_2)

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
    if (*(int *)(param_1 + 0xeb4) != 0) {
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
  FUN_00dd5650(&DAT_01646f78);
  return 0;
}

// 00689790  FUN_00689790  size=749  [callgraph]
void __fastcall FUN_00689790(int *param_1)

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
    param_1[0x5d6] = 0;
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
    if ((fVar1 - (float)param_1[0x244] < 0.0) && (param_1[0x710] == 0)) {
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
        if (param_1[0x505] != 0) {
          FUN_0043fc90(param_1[0x2a2],&local_20,0);
        }
      }
      FUN_00aa4080(0x44,2,0,0x3f800000,0x8000210,0,0x3f800000);
      fVar1 = (float)param_1[0x249];
      param_1[0x249] = (int)(fVar1 + 10.0);
      if (*(int *)(param_1[0x505] + 0x4a0) == 1) {
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

// 00689AC0  FUN_00689ac0  size=20  [callgraph]
void __fastcall FUN_00689ac0(int *param_1)

{
  if (param_1[0x128] == 1) {
                    /* WARNING: Could not recover jumptable at 0x00689ad1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  return;
}

// 00689AE0  FUN_00689ae0  size=566  [callgraph]
void __fastcall FUN_00689ae0(int *param_1)

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
    param_1[0x5d6] = 0;
  }
  else if (param_1[0x187] != 1) goto LAB_00689cd2;
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
    if (param_1[0x506] != 0) {
      FUN_0043fc90(param_1[0x2a2],&local_20,2);
    }
  }
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    sVar2 = FUN_00dde2d0(0,2);
    param_1[0x5db] = (int)(((float)(int)sVar2 + 1.0) * 60.0);
    fVar1 = (float)param_1[0x2a4];
    if (((!NAN(fVar1) && 25.0 < fVar1 != (fVar1 == 25.0)) && (param_1[0x128] == 1)) &&
       ((float)param_1[0x5da] < 0.0)) {
      iVar3 = FUN_00a8cab0();
      param_1[0x3aa] = param_1[0x3a8];
      param_1[0x3a9] = iVar3;
      FUN_00a8caf0(0x50009,0,0,0);
      param_1[0x3a8] = 0;
      FUN_00a962d0(0,0);
      param_1[0x4e7] = 0;
    }
  }
LAB_00689cd2:
  iVar3 = FUN_00a8c760(0);
  if (iVar3 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3db2b8c2,0);
  }
  return;
}

// 00689D20  FUN_00689d20  size=566  [callgraph]
void __fastcall FUN_00689d20(int *param_1)

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
    param_1[0x5d6] = 0;
  }
  else if (param_1[0x187] != 1) goto LAB_00689f12;
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
    if (param_1[0x506] != 0) {
      FUN_0043fc90(param_1[0x2a2],&local_20,4);
    }
  }
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    sVar2 = FUN_00dde2d0(0,2);
    param_1[0x5db] = (int)(((float)(int)sVar2 + 1.0) * 60.0);
    fVar1 = (float)param_1[0x2a4];
    if (((!NAN(fVar1) && 25.0 < fVar1 != (fVar1 == 25.0)) && (param_1[0x128] == 1)) &&
       ((float)param_1[0x5da] < 0.0)) {
      iVar3 = FUN_00a8cab0();
      param_1[0x3aa] = param_1[0x3a8];
      param_1[0x3a9] = iVar3;
      FUN_00a8caf0(0x50009,0,0,0);
      param_1[0x3a8] = 0;
      FUN_00a962d0(0,0);
      param_1[0x4e7] = 0;
    }
  }
LAB_00689f12:
  iVar3 = FUN_00a8c760(0);
  if (iVar3 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3db2b8c2,0);
  }
  return;
}

// 00689F60  FUN_00689f60  size=869  [callgraph]
void __fastcall FUN_00689f60(int *param_1)

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
    if ((param_1[0x6dc] != 0) && (sVar3 = FUN_00dde2d0(0,1), sVar3 != 0)) {
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
    param_1[0x5d6] = 0;
    break;
  case 3:
    break;
  default:
    goto switchD_00689f8b_default;
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
switchD_00689f8b_default:
  return;
}

// 0068A2E0  FUN_0068a2e0  size=435  [callgraph]
void __fastcall FUN_0068a2e0(int param_1)

{
  undefined4 uVar1;
  float local_20;
  float local_1c;
  float local_18;
  
  if ((2 < *(int *)(param_1 + 0x61c)) && (*(int *)(param_1 + 0x61c) < 4)) {
    if (*(int *)(param_1 + 0x1b64) == 0) {
      if (*(int *)(param_1 + 0x1b68) == 0) {
        if (*(int *)(param_1 + 0x1b6c) == 0) {
          if (*(int *)(param_1 + 0x1b70) == 0) {
            uVar1 = 0x10000;
          }
          else {
            uVar1 = 0x1000e;
          }
        }
        else {
          uVar1 = 0x1000d;
        }
        FUN_0067cd40(uVar1,0,0,0,0);
      }
      else {
        uVar1 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xea4) = uVar1;
        *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
        FUN_00a8caf0(0x1000f,0,0,0);
        *(undefined4 *)(param_1 + 0xea0) = 0;
        FUN_00a962d0(0,0);
        *(undefined4 *)(param_1 + 0x139c) = 0;
      }
    }
    FUN_00687100(&local_20,*(undefined4 *)(param_1 + 0x4f0));
    local_20 = local_20 - *(float *)(param_1 + 0x40);
    local_1c = local_1c - *(float *)(param_1 + 0x44);
    local_18 = local_18 - *(float *)(param_1 + 0x48);
    if ((SQRT(local_20 * local_20 + local_1c * local_1c + local_18 * local_18) < 12.0) &&
       (1.0471976 < *(float *)(param_1 + 0xaa0))) {
      uVar1 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xea4) = uVar1;
      *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
      FUN_00a8caf0(0x10005,0,0,0);
      *(undefined4 *)(param_1 + 0xea0) = 0;
      FUN_00a962d0(0,0);
      *(undefined4 *)(param_1 + 0x139c) = 0;
      if (1.0471976 < *(float *)(param_1 + 0xa9c)) {
        FUN_0067cd40(0x10006,0,0,0,0);
      }
      if (2.0943952 < *(float *)(param_1 + 0xa9c)) {
        FUN_0067cd40(0x10008,0,0,0,0);
      }
      if (*(float *)(param_1 + 0xa9c) < -2.0943952) {
        FUN_0067cd40(0x10007,0,0,0,0);
      }
    }
  }
  return;
}

// 0068A4A0  FUN_0068a4a0  size=799  [callgraph]
void __fastcall FUN_0068a4a0(int *param_1)

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
    FUN_006871c0(param_1[0x13c],0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
    param_1[0x248] = 0;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_006871c0(param_1[0x13c],0x3dcccccd,0x3ae4c388,0x3db2b8c2,0);
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

// 0068A7E0  FUN_0068a7e0  size=127  [callgraph]
void __fastcall FUN_0068a7e0(int param_1)

{
  undefined4 uVar1;
  
  if (((*(int *)(param_1 + 0x61c) == 2) && (6.0 < *(float *)(param_1 + 0x1c60))) &&
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

// 0068A860  FUN_0068a860  size=307  [callgraph]
void __fastcall FUN_0068a860(int param_1)

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
      goto LAB_0068a969;
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
      goto LAB_0068a969;
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
LAB_0068a969:
  FUN_00a8caf0(iVar3,0,0,0);
  *(undefined4 *)(param_1 + 0xea0) = 0;
  FUN_00a962d0(0,0);
  *(undefined4 *)(param_1 + 0x139c) = 0;
  return;
}

// 0068A9A0  FUN_0068a9a0  size=928  [callgraph]
void __fastcall FUN_0068a9a0(int *param_1)

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
      param_1[0x717] = param_1[0x3ad];
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
      FUN_0067e1c0(param_1[0x2a1] + 0x40,0x3e19999a,0x3d8efa35);
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
        FUN_0067cd40(0x10010,0,0,0,0);
        param_1[0x717] = param_1[0x3ad];
        return;
      }
    }
    param_1[600] = param_1[0x14];
    param_1[0x259] = param_1[0x15];
    param_1[0x25a] = param_1[0x16];
    param_1[0x25b] = param_1[0x17];
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (param_1[0x2a1] != 0) {
      FUN_0067e1c0(param_1[0x2a1] + 0x40,0x3e19999a,0x3d8efa35);
    }
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] <= 0.0) {
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x717] = param_1[0x3ad];
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
    goto LAB_0068acf0;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
LAB_0068acf0:
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      param_1[0x717] = param_1[0x3ad];
      return;
    }
  }
  param_1[0x717] = param_1[0x3ad];
  return;
}

// 0068AD60  FUN_0068ad60  size=581  [callgraph]
void __fastcall FUN_0068ad60(int *param_1)

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
    FUN_00687100(&local_40,param_1[0x13c]);
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
  else if (param_1[0x187] != 1) goto LAB_0068af5a;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
LAB_0068af5a:
  if ((float)param_1[0x2a8] <= 1.0471976) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3db2b8c2,0);
  }
  return;
}

// 0068AFB0  FUN_0068afb0  size=511  [callgraph]
void __fastcall FUN_0068afb0(int *param_1)

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
    FUN_00687100(&local_30,param_1[0x13c]);
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
  else if (param_1[0x187] != 1) goto LAB_0068b16a;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
LAB_0068b16a:
  iVar3 = FUN_00a8c760(0);
  if (iVar3 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3e0efa35,0);
  }
  return;
}

// 0068B1B0  Em8060::vf2A0  size=143  [class]
void __fastcall Em8060::vf2A0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  
  *(undefined4 *)(param_1 + 0x1b8c) = 1;
  if ((*(byte *)(param_1 + 0x4a8) & 0x10) != 0) {
    FUN_00a82ac0(*(undefined4 *)(param_1 + 0x4f0),4,1,2);
    *(undefined4 *)(param_1 + 0x814) = 4;
    iVar1 = FUN_00a81330();
    if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
      puVar4 = &DAT_01b35590;
      (**(code **)(*piVar2 + 4))(&DAT_01b35590);
      iVar3 = FUN_00dd6d80(puVar4);
      if (iVar3 != 0) {
        FUN_00a82ac0(iVar1,4,1,0);
        piVar2[0x205] = 4;
      }
    }
  }
  return;
}

// 0068B240  FUN_0068b240  size=245  [between]
undefined4 __fastcall FUN_0068b240(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar1 = FUN_00ac8a50();
  if (((((iVar1 != 0) || (0.0 < (float)param_1[0x6cb])) || (param_1[0x139] != 0)) ||
      ((iVar1 = (**(code **)(*param_1 + 0x1d8))(), iVar1 != 0 || (param_1[0x21c] < 1)))) ||
     ((param_1[0x187] == 0 ||
      ((iVar1 = FUN_00a82e80(), iVar1 != 0 || ((*(byte *)(param_1 + 0x130) & 1) == 0)))))) {
    return 0;
  }
  piVar2 = (int *)FUN_00a9b930();
  if (piVar2 != (int *)0x0) {
    iVar1 = (**(code **)(*piVar2 + 0x1d8))();
    if (iVar1 != 0) {
      return 0;
    }
    if (piVar2[0x139] != 0) {
      return 0;
    }
  }
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  FUN_00c59410(param_1[0x13c],0xffffffff,&uStack_20,0x40400000,0x3fc00000,0x40490fdb,0x3f060a92,
               0x1006,10);
  return 1;
}

// 0068B340  Em8060::vf13C  size=90  [class]
bool __fastcall Em8060::vf13C(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00ac8a50();
  if (((iVar1 == 0) && ((float)param_1[0x6cb] <= 0.0)) && (param_1[0x139] == 0)) {
    iVar1 = (**(code **)(*param_1 + 0x1d8))();
    if (((iVar1 == 0) && (0 < param_1[0x21c])) && (param_1[0x187] != 0)) {
      iVar1 = FUN_00a82e80();
      return iVar1 == 0;
    }
  }
  return false;
}

// 0068B3A0  FUN_0068b3a0  size=344  [between]
void __fastcall FUN_0068b3a0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  float afStack_20 [2];
  float fStack_18;
  
  piVar4 = (int *)FUN_00a9b930();
  if (piVar4 == (int *)0x0) {
    return;
  }
  puVar7 = &DAT_01b35b90;
  (**(code **)(*piVar4 + 4))(&DAT_01b35b90);
  iVar5 = FUN_00dd6d80(puVar7);
  if (iVar5 == 0) {
    return;
  }
  if ((*(uint *)(param_1 + 0xd44) & 0x800000) != 0) {
    fVar1 = *(float *)(param_1 + 0x44);
    iVar5 = *(int *)(param_1 + 0x4f0);
    fVar2 = (float)piVar4[0x11];
    iVar6 = FUN_00a81330();
    if (iVar5 == iVar6) {
LAB_0068b477:
      if (*(int *)(param_1 + 0x1b90) != 0) {
        return;
      }
      fVar1 = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0x1b94);
      *(float *)(param_1 + 0x1b94) = fVar1;
      if (fVar1 < 30.0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x1b90) = 1;
      return;
    }
    fVar1 = ABS(fVar1 - fVar2);
    if (fVar1 < 1.0 != (fVar1 == 1.0)) {
      FUN_00a8d230(afStack_20);
      fVar1 = *(float *)(param_1 + 0x40) - afStack_20[0];
      fVar2 = *(float *)(param_1 + 0x48) - fStack_18;
      iVar5 = (**(code **)(*piVar4 + 0x364))();
      if (iVar5 == 0) {
        fVar3 = 4.84;
      }
      else {
        fVar3 = 23.04;
      }
      if (fVar2 * fVar2 + fVar1 * fVar1 <= fVar3) goto LAB_0068b477;
    }
  }
  if ((*(int *)(param_1 + 0x1b90) != 0) &&
     (fVar1 = *(float *)(param_1 + 0x1b94) - *(float *)(param_1 + 0x910),
     *(float *)(param_1 + 0x1b94) = fVar1, fVar1 <= 0.0)) {
    *(undefined4 *)(param_1 + 0x1b90) = 0;
    *(undefined4 *)(param_1 + 0x1b94) = 0;
    return;
  }
  return;
}

// 0068B500  FUN_0068b500  size=213  [between]
undefined4 __thiscall FUN_0068b500(int *param_1,int param_2)

{
  int iVar1;
  float10 fVar2;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  
  if (param_2 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      local_20 = *(float *)(iVar1 + 0x40);
      local_1c = *(float *)(iVar1 + 0x44);
      local_18 = *(float *)(iVar1 + 0x48);
      local_14 = *(undefined4 *)(iVar1 + 0x4c);
      if (((float)param_1[0x10] - local_20) * ((float)param_1[0x10] - local_20) +
          ((float)param_1[0x11] - local_1c) * ((float)param_1[0x11] - local_1c) +
          ((float)param_1[0x12] - local_18) * ((float)param_1[0x12] - local_18) <= 121.0) {
        fVar2 = (float10)FUN_00a8ec30(&local_20);
        iVar1 = (**(code **)(*param_1 + 0x84))();
        fVar2 = (float10)FUN_00ddba30((float)fVar2 - *(float *)(iVar1 + 4));
        if ((ABS(fVar2) <= (float10)1.727876) && (ABS((float)param_1[0x11] - local_1c) <= 1.0)) {
          return 0;
        }
      }
    }
  }
  return 1;
}

// 0068B5E0  FUN_0068b5e0  size=220  [between]
void __thiscall FUN_0068b5e0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_50;
  float local_4c;
  undefined4 local_48;
  undefined4 local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined4 local_30;
  uint local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  char *local_1c;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      iVar2 = FUN_009f8b40();
      local_50 = *(undefined4 *)(param_1 + 0x40);
      local_48 = *(undefined4 *)(param_1 + 0x48);
      local_44 = *(undefined4 *)(param_1 + 0x4c);
      local_2c = iVar2 << 0x10 | 7;
      local_4c = *(float *)(param_1 + 0x44) + 0.2;
      local_40 = *(float *)(iVar1 + 0x40) - *(float *)(param_1 + 0x40);
      local_3c = *(float *)(iVar1 + 0x44) - *(float *)(param_1 + 0x44);
      local_38 = *(float *)(iVar1 + 0x48) - *(float *)(param_1 + 0x48);
      local_60 = param_2;
      local_34 = *(float *)(iVar1 + 0x4c) - *(float *)(param_1 + 0x4c);
      local_5c = 0;
      local_28 = 0;
      local_24 = 0;
      local_20 = 0;
      local_1c = "Em8220_Magazine";
      local_30 = 0x3dcccccd;
      FUN_0090fb00(&local_60);
    }
  }
  return;
}

// 0068B6C0  FUN_0068b6c0  size=54  [between]
undefined4 __fastcall FUN_0068b6c0(int param_1)

{
  int iVar1;
  
  if (5.0 < *(float *)(param_1 + 0x1b9c)) {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        return 1;
      }
    }
  }
  return 0;
}

// 0068B700  FUN_0068b700  size=133  [between]
undefined4 __fastcall FUN_0068b700(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (5.0 < *(float *)(param_1 + 0x1b9c)) {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        uVar2 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xea4) = uVar2;
        *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
        FUN_00a8caf0(0xb0004,0,0,0);
        *(undefined4 *)(param_1 + 0xea0) = 0;
        FUN_00a962d0(0,0);
        *(undefined4 *)(param_1 + 0x139c) = 0;
        return 1;
      }
    }
  }
  return 0;
}

// 0068B790  FUN_0068b790  size=229  [between]
void __thiscall FUN_0068b790(int param_1,undefined4 param_2)

{
  int iVar1;
  float local_7c;
  float local_78;
  float local_74;
  undefined4 local_70;
  float local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_50;
  float local_4c;
  undefined4 local_48;
  undefined4 local_44;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  undefined4 local_30;
  uint local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  char *local_1c;
  
  iVar1 = FUN_009f8b40();
  local_70 = *(undefined4 *)(param_1 + 0x40);
  local_68 = *(undefined4 *)(param_1 + 0x48);
  local_64 = *(undefined4 *)(param_1 + 0x4c);
  local_6c = *(float *)(param_1 + 0x44) + 0.2;
  FUN_00a8d710((float *)(param_1 + 0x40));
  FUN_00a8d790(&local_7c);
  local_40 = local_7c - *(float *)(param_1 + 0x40);
  local_3c = local_78 - *(float *)(param_1 + 0x44);
  local_38 = local_74 - *(float *)(param_1 + 0x48);
  local_60 = param_2;
  local_2c = iVar1 << 0x10 | 7;
  local_50 = local_70;
  local_4c = local_6c;
  local_5c = 0;
  local_48 = local_68;
  local_28 = 0;
  local_24 = 0;
  local_44 = local_64;
  local_20 = 0;
  local_1c = "Em8220_Patrol";
  local_34 = local_64;
  local_30 = 0x3dcccccd;
  FUN_0090fb00(&local_60);
  return;
}

// 0068B880  FUN_0068b880  size=190  [between]
void __thiscall FUN_0068b880(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_50;
  float local_4c;
  undefined4 local_48;
  undefined4 local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined4 local_30;
  uint local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  char *local_1c;
  
  iVar1 = FUN_009f8b40();
  local_50 = *(undefined4 *)(param_1 + 0x40);
  local_48 = *(undefined4 *)(param_1 + 0x48);
  local_60 = param_2;
  local_44 = *(undefined4 *)(param_1 + 0x4c);
  local_4c = *(float *)(param_1 + 0x44) + 0.2;
  local_5c = 0;
  local_40 = *(float *)(param_1 + 0x1ba0) - *(float *)(param_1 + 0x40);
  local_2c = iVar1 << 0x10 | 7;
  local_28 = 0;
  local_3c = *(float *)(param_1 + 0x1ba4) - *(float *)(param_1 + 0x44);
  local_24 = 0;
  local_20 = 0;
  local_38 = *(float *)(param_1 + 0x1ba8) - *(float *)(param_1 + 0x48);
  local_34 = *(float *)(param_1 + 0x1bac) - *(float *)(param_1 + 0x4c);
  local_1c = "Em8220_Patrol2";
  local_30 = 0x3dcccccd;
  FUN_0090fb00(&local_60);
  return;
}

// 0068B940  FUN_0068b940  size=366  [between]
void __fastcall FUN_0068b940(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_1[0x187] == 5) && (param_1[0x504] < 8)) {
    (**(code **)(*param_1 + 0x1d4))(1);
  }
  if ((param_1[0x187] == 0) || (param_1[0x187] == 5)) {
    return;
  }
  iVar1 = FUN_00a82d50();
  if (iVar1 == 4) {
    if ((float)param_1[0x2a7] <= 2.0943952) {
      if ((float)param_1[0x2a7] < -2.0943952) {
        FUN_0067cd40(0x10007,0,0,0,0);
        return;
      }
      FUN_0067cd40(0x10003,0,0,0,0);
      return;
    }
    iVar1 = FUN_00a8cab0();
    param_1[0x3a9] = iVar1;
    param_1[0x3aa] = param_1[0x3a8];
    uVar2 = 0x10008;
  }
  else {
    iVar1 = FUN_00a82d50();
    if ((iVar1 != 2) && (iVar1 = FUN_00a82d50(), iVar1 != 3)) {
      iVar1 = FUN_0068b700();
      if (iVar1 != 0) {
        param_1[0x6e8] = param_1[0x10];
        param_1[0x6e9] = param_1[0x11];
        param_1[0x6ea] = param_1[0x12];
        param_1[0x6eb] = param_1[0x13];
        param_1[0x6ec] = 1;
        return;
      }
      if (param_1[0x6e4] == 0) {
        return;
      }
      FUN_00a88b50(4,1);
      return;
    }
    iVar1 = FUN_00a8cab0();
    param_1[0x3a9] = iVar1;
    param_1[0x3aa] = param_1[0x3a8];
    uVar2 = 0xb0001;
  }
  FUN_00a8caf0(uVar2,0,0,0);
  param_1[0x3a8] = 0;
  FUN_00a962d0(0,0);
  param_1[0x4e7] = 0;
  return;
}

// 0068BAB0  FUN_0068bab0  size=216  [between]
void __fastcall FUN_0068bab0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    return;
  }
  iVar1 = FUN_00a82d50();
  if (iVar1 == 4) {
    uVar2 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xea4) = uVar2;
    *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
    uVar2 = 0x10003;
  }
  else {
    if (((*(uint *)(param_1 + 0xd44) & 0x2000000) != 0) || (iVar1 = FUN_00aa4a90(), iVar1 == 0)) {
      if (3 < *(int *)(param_1 + 0x61c)) {
        return;
      }
      if ((25.0 < *(float *)(param_1 + 0xa90)) && (iVar1 = FUN_00a82d50(), iVar1 != 1)) {
        return;
      }
      *(undefined4 *)(param_1 + 0x61c) = 4;
      return;
    }
    uVar2 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xea4) = uVar2;
    *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
    uVar2 = 0xb0002;
  }
  FUN_00a8caf0(uVar2,0,0,0);
  *(undefined4 *)(param_1 + 0xea0) = 0;
  FUN_00a962d0(0,0);
  *(undefined4 *)(param_1 + 0x139c) = 0;
  return;
}

// 0068BB90  FUN_0068bb90  size=197  [between]
void __fastcall FUN_0068bb90(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(int *)(param_1 + 0x61c) == 0) || (*(int *)(param_1 + 0x61c) == 3)) {
    return;
  }
  iVar1 = FUN_00a82d50();
  if (iVar1 == 4) {
    uVar2 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xea4) = uVar2;
    *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
    uVar2 = 0x10003;
  }
  else {
    if ((*(uint *)(param_1 + 0xd44) & 0x2000000) == 0) {
      if (3 < *(int *)(param_1 + 0x61c)) {
        return;
      }
      iVar1 = FUN_00a82d50();
      if (iVar1 != 1) {
        return;
      }
      *(undefined4 *)(param_1 + 0x61c) = 4;
      return;
    }
    uVar2 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xea4) = uVar2;
    *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
    uVar2 = 0xb0001;
  }
  FUN_00a8caf0(uVar2,0,0,0);
  *(undefined4 *)(param_1 + 0xea0) = 0;
  FUN_00a962d0(0,0);
  *(undefined4 *)(param_1 + 0x139c) = 0;
  return;
}

// 0068BC60  FUN_0068bc60  size=215  [between]
void __fastcall FUN_0068bc60(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    return;
  }
  iVar1 = FUN_00a82d50();
  if (iVar1 == 4) {
    uVar2 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xea4) = uVar2;
    *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
    uVar2 = 0x10003;
  }
  else {
    iVar1 = FUN_00a82d50();
    if ((iVar1 != 2) && (iVar1 = FUN_00a82d50(), iVar1 != 3)) {
      iVar1 = FUN_0068b6c0();
      if (iVar1 == 0) {
        FUN_00681950();
        return;
      }
      if (*(int *)(param_1 + 0x1b90) == 0) {
        return;
      }
      FUN_00a88b50(4,1);
      return;
    }
    uVar2 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xea4) = uVar2;
    *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
    uVar2 = 0xb0001;
  }
  FUN_00a8caf0(uVar2,0,0,0);
  *(undefined4 *)(param_1 + 0xea0) = 0;
  FUN_00a962d0(0,0);
  *(undefined4 *)(param_1 + 0x139c) = 0;
  return;
}

// 0068BD40  FUN_0068bd40  size=714  [between]
void __fastcall FUN_0068bd40(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float local_20;
  undefined4 local_1c;
  float local_18;
  undefined4 local_14;
  
  iVar1 = FUN_00a81330();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_00a7c8a0();
  }
  local_20 = *(float *)(iVar1 + 0x40);
  local_1c = *(undefined4 *)(iVar1 + 0x44);
  local_18 = *(float *)(iVar1 + 0x48);
  local_14 = *(undefined4 *)(iVar1 + 0x4c);
  uVar2 = FUN_00a8cac0();
  switch(uVar2) {
  case 0:
    iVar1 = FUN_00a9f760(9);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x61c) = 2;
      return;
    }
    FUN_00aa4080(8,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 1:
    FUN_0067e1c0(&local_20,0x3da3d70a,0x3c8efa35);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_00aa4080(9,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      return;
    }
    break;
  case 2:
    FUN_0067e1c0(iVar1 + 0x40,0x3da3d70a,0x3c8efa35);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    local_20 = local_20 - *(float *)(param_1 + 0x40);
    local_18 = local_18 - *(float *)(param_1 + 0x48);
    if (local_18 * local_18 + local_20 * local_20 < 16.0) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      return;
    }
    break;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a8c760(0x30);
    if (iVar1 != 0) {
      FUN_00aa4080(0xb,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      return;
    }
    iVar1 = FUN_00a8c760(0x31);
    if (iVar1 != 0) {
      FUN_00aa4080(10,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      return;
    }
    break;
  case 4:
    FUN_0067e1c0(iVar1 + 0x40,0x3da3d70a,0x3c8efa35);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      uVar2 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
      *(undefined4 *)(param_1 + 0xea4) = uVar2;
      FUN_00a8caf0(0xb0005,0,0,0);
      *(undefined4 *)(param_1 + 0xea0) = 0;
      FUN_00a962d0(0,0);
      *(undefined4 *)(param_1 + 0x139c) = 0;
    }
  }
  return;
}

// 0068C020  FUN_0068c020  size=215  [between]
void __fastcall FUN_0068c020(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    return;
  }
  iVar1 = FUN_00a82d50();
  if (iVar1 == 4) {
    uVar2 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xea4) = uVar2;
    *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
    uVar2 = 0x10003;
  }
  else {
    iVar1 = FUN_00a82d50();
    if ((iVar1 != 2) && (iVar1 = FUN_00a82d50(), iVar1 != 3)) {
      iVar1 = FUN_0068b6c0();
      if (iVar1 == 0) {
        FUN_00681950();
        return;
      }
      if (*(int *)(param_1 + 0x1b90) == 0) {
        return;
      }
      FUN_00a88b50(4,1);
      return;
    }
    uVar2 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xea4) = uVar2;
    *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
    uVar2 = 0xb0001;
  }
  FUN_00a8caf0(uVar2,0,0,0);
  *(undefined4 *)(param_1 + 0xea0) = 0;
  FUN_00a962d0(0,0);
  *(undefined4 *)(param_1 + 0x139c) = 0;
  return;
}

// 0068C100  FUN_0068c100  size=205  [between]
void __fastcall FUN_0068c100(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x61c) != 3) {
    return;
  }
  iVar1 = FUN_00a82d50();
  if (iVar1 == 4) {
    uVar2 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xea4) = uVar2;
    *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
    uVar2 = 0x10003;
  }
  else {
    iVar1 = FUN_00a82d50();
    if ((iVar1 != 2) && (iVar1 = FUN_00a82d50(), iVar1 != 3)) {
      iVar1 = FUN_0068b700();
      if (iVar1 != 0) {
        return;
      }
      if (*(int *)(param_1 + 0x1b90) == 0) {
        return;
      }
      FUN_00a88b50(4,1);
      return;
    }
    uVar2 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xea4) = uVar2;
    *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
    uVar2 = 0xb0001;
  }
  FUN_00a8caf0(uVar2,0,0,0);
  *(undefined4 *)(param_1 + 0xea0) = 0;
  FUN_00a962d0(0,0);
  *(undefined4 *)(param_1 + 0x139c) = 0;
  return;
}

// 0068C1D0  FUN_0068c1d0  size=529  [between]
void __fastcall FUN_0068c1d0(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar2 = FUN_00a8cac0();
  switch(uVar2) {
  case 0:
    FUN_00aa4120(5,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_0068b790(param_1 + 0x1bb4);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    return;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = param_1 + 0x1bb4;
    iVar3 = FUN_00907640(iVar4,0,param_1 + 0x960);
    if (iVar3 != 0) {
      FUN_0068b880(iVar4);
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      return;
    }
    FUN_00a8d790(&local_c);
    *(undefined4 *)(param_1 + 0x1ba0) = local_c;
    *(undefined4 *)(param_1 + 0x1ba4) = local_8;
    *(undefined4 *)(param_1 + 0x1ba8) = local_4;
    *(undefined4 *)(param_1 + 0x1bac) = 0x3f800000;
    RayCastManager::getWork(iVar4);
    uVar2 = FUN_00a8cab0();
    uVar5 = 0xb0007;
    break;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00907640(param_1 + 0x1bb4,0,param_1 + 0x960);
    RayCastManager::getWork(param_1 + 0x1bb4);
    if (iVar4 != 0) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      *(undefined4 *)(param_1 + 0x920) = 0x43340000;
      return;
    }
    uVar2 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xea4) = uVar2;
    *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
    uVar5 = 0xb0007;
    goto LAB_0068c3b5;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x920) = fVar1;
    if (0.0 < fVar1) {
      return;
    }
    uVar2 = FUN_00a8cab0();
    uVar5 = 0xb0003;
    break;
  default:
    goto switchD_0068c1e5_default;
  }
  *(undefined4 *)(param_1 + 0xea4) = uVar2;
  *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
LAB_0068c3b5:
  FUN_00a8caf0(uVar5,0,0,0);
  *(undefined4 *)(param_1 + 0xea0) = 0;
  FUN_00a962d0(0,0);
  *(undefined4 *)(param_1 + 0x139c) = 0;
switchD_0068c1e5_default:
  return;
}

// 0068C400  FUN_0068c400  size=205  [between]
void __fastcall FUN_0068c400(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    return;
  }
  iVar1 = FUN_00a82d50();
  if (iVar1 == 4) {
    uVar2 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xea4) = uVar2;
    *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
    uVar2 = 0x10003;
  }
  else {
    iVar1 = FUN_00a82d50();
    if ((iVar1 != 2) && (iVar1 = FUN_00a82d50(), iVar1 != 3)) {
      iVar1 = FUN_0068b700();
      if (iVar1 != 0) {
        return;
      }
      if (*(int *)(param_1 + 0x1b90) == 0) {
        return;
      }
      FUN_00a88b50(4,1);
      return;
    }
    uVar2 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xea4) = uVar2;
    *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
    uVar2 = 0xb0001;
  }
  FUN_00a8caf0(uVar2,0,0,0);
  *(undefined4 *)(param_1 + 0xea0) = 0;
  FUN_00a962d0(0,0);
  *(undefined4 *)(param_1 + 0x139c) = 0;
  return;
}

// 0068C4D0  FUN_0068c4d0  size=372  [between]
void __fastcall FUN_0068c4d0(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = FUN_00a8cac0();
  if (iVar3 == 0) {
    if (*(int *)(param_1 + 0x1bb0) == 0) {
      uVar4 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xea4) = uVar4;
      *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
LAB_0068c5bf:
      FUN_00a8caf0(0xb0000,0,0,0);
      *(undefined4 *)(param_1 + 0xea0) = 0;
      FUN_00a962d0(0,0);
      *(undefined4 *)(param_1 + 0x139c) = 0;
      return;
    }
    iVar3 = FUN_00a9f760(9);
    if (iVar3 == 0) {
      FUN_00aa4080(8,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x940) = 0;
  }
  else if (iVar3 == 1) {
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94db0(8);
    if (iVar3 != 0) {
      FUN_00aa4080(9,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    }
    FUN_0067e1c0((float *)(param_1 + 0x1ba0),0x3da3d70a,0x3c8efa35);
    fVar1 = *(float *)(param_1 + 0x1ba0) - *(float *)(param_1 + 0x40);
    fVar2 = *(float *)(param_1 + 0x1ba8) - *(float *)(param_1 + 0x48);
    if (fVar2 * fVar2 + fVar1 * fVar1 < 2.25) {
      uVar4 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xea4) = uVar4;
      *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
      goto LAB_0068c5bf;
    }
  }
  return;
}

// 0068C650  FUN_0068c650  size=107  [between]
undefined4 * __thiscall FUN_0068c650(int param_1,undefined4 *param_2)

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

// 0068C6F0  FUN_0068c6f0  size=43  [between]
void FUN_0068c6f0(int param_1,int param_2)

{
  if (param_1 != 0) {
    FUN_00a7c940(param_2);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  }
  return;
}

// 0068C740  FUN_0068c740  size=133  [between]
int __thiscall
FUN_0068c740(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
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

// 0068C7D0  FUN_0068c7d0  size=234  [between]
void __fastcall FUN_0068c7d0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x61c) == 2) {
    if ((60.0 < *(float *)(param_1 + 0x1c60)) && (*(int *)(param_1 + 0xe98) != 0x10003)) {
      *(undefined4 *)(param_1 + 0xe98) = 0x10003;
      uVar1 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xea4) = uVar1;
      *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
      FUN_00a8caf0(0x10003,0,0,0);
      *(undefined4 *)(param_1 + 0xea0) = 0;
      FUN_00a962d0(0,0);
      *(undefined4 *)(param_1 + 0x139c) = 0;
    }
    iVar2 = FUN_00a82d50();
    if (((iVar2 == 2) || (iVar2 = FUN_00a82d50(), iVar2 == 3)) ||
       (iVar2 = FUN_00a82d50(), iVar2 == 1)) {
      uVar1 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
      *(undefined4 *)(param_1 + 0xea4) = uVar1;
      FUN_00a8caf0(0x10003,4,0,0);
      *(undefined4 *)(param_1 + 0xea0) = 0;
      FUN_00a962d0(0,0);
      *(undefined4 *)(param_1 + 0x139c) = 0;
    }
  }
  return;
}

// 0068C8C0  FUN_0068c8c0  size=264  [between]
void __fastcall FUN_0068c8c0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_40 [4];
  float local_3c;
  
  *(byte *)(param_1 + 0xdb4) = *(byte *)(param_1 + 0xdb4) | 8;
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x75,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_00680470();
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

// 0068C9D0  FUN_0068c9d0  size=270  [between]
/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_0068c9d0(int param_1)

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
  if (*(int *)(param_1 + 0x1b84) == 0) {
    iVar1 = FUN_00a9b930();
    if (iVar1 == 0) goto LAB_0068ca95;
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_00a9b930();
    if (iVar1 == 0) goto LAB_0068ca95;
    uVar2 = 0x40a00000;
  }
  FUN_00bc3c20(param_1 + 0x40,local_8,local_8 + 1,uVar2);
LAB_0068ca95:
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

// 0068CAE0  FUN_0068cae0  size=483  [between]
void __fastcall FUN_0068cae0(int *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_40 [4];
  float local_3c;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x75,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00680470();
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    iVar3 = FUN_00a92f90();
    FUN_00e332b0(local_40,*(undefined4 *)(iVar3 + 0xa0));
    pcVar1 = *(code **)(*param_1 + 0x1d4);
    param_1[0x225] = (int)(local_3c * 0.016666668 * 0.8);
    (*pcVar1)(1);
    return;
  case 2:
    uVar2 = 0;
    if (param_1[0x708] != 0) {
      uVar2 = 0x40;
    }
    FUN_00aa4080(0x76,0,0x3d088889,0x3f800000,uVar2,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 3:
    break;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_0067cd40(0x80029,0,0,0,0);
      return;
    }
  default:
    goto switchD_0068cb04_default;
  }
  (**(code **)(*param_1 + 0x1d4))(1);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = (**(code **)(*param_1 + 800))(0x3d888889);
  if (iVar3 != 0) {
    uVar2 = 0x8000000;
    if (param_1[0x708] != 0) {
      uVar2 = 0x8000040;
    }
    FUN_00aa4080(0x77,0,0x3d088889,0x3f800000,uVar2,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
switchD_0068cb04_default:
  return;
}

// 0068CCE0  FUN_0068cce0  size=173  [between]
void __fastcall FUN_0068cce0(int param_1)

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
      FUN_00684170();
    }
    if (*(int *)(param_1 + 0x764) != 0) {
      FUN_008e5ac0(2);
    }
  }
  return;
}

// 0068CD90  FUN_0068cd90  size=74  [between]
void FUN_0068cd90(void)

{
  int iVar1;
  undefined4 local_90 [35];
  
  FUN_0040b190();
  local_90[0] = 3;
  iVar1 = FUN_00a82090("Em8040",0x28040,local_90);
  if (iVar1 != 0) {
    FUN_00683bd0(iVar1);
  }
  return;
}

// 0068CF10  FUN_0068cf10  size=135  [between]
undefined4 __fastcall FUN_0068cf10(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00ac4780();
  if ((iVar1 < 3) && (iVar1 = FUN_00a90070(5), iVar1 == 0)) {
    return 0;
  }
  iVar1 = FUN_00688510(*(undefined4 *)(param_1 + 0x1abc));
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

// 0068CFA0  FUN_0068cfa0  size=135  [between]
undefined4 __fastcall FUN_0068cfa0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00ac4780();
  if ((iVar1 < 3) && (iVar1 = FUN_00a90070(5), iVar1 == 0)) {
    return 0;
  }
  iVar1 = FUN_00688510(*(undefined4 *)(param_1 + 0x1abc));
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

// 0068D030  FUN_0068d030  size=296  [between]
void __fastcall FUN_0068d030(int param_1)

{
  int iVar1;
  undefined1 auStack_2c [12];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  switch(*(undefined1 *)(param_1 + 0x1b74)) {
  case 1:
    iVar1 = FUN_00684410();
    local_20 = 0;
    local_1c = 0;
    local_18 = 0xc0400000;
    *(uint *)(param_1 + 0x1b64) = (uint)(iVar1 == 0);
    D3DXVec3TransformNormal(&local_20,&local_20,param_1 + 0x10);
    FUN_006843a0(auStack_2c);
    *(char *)(param_1 + 0x1b74) = *(char *)(param_1 + 0x1b74) + '\x01';
    return;
  case 2:
    iVar1 = FUN_00684410();
    local_20 = 0xc0400000;
    local_1c = 0;
    local_18 = 0;
    *(uint *)(param_1 + 0x1b68) = (uint)(iVar1 == 0);
    D3DXVec3TransformNormal(&local_20,&local_20,param_1 + 0x10);
    FUN_006843a0(auStack_2c);
    *(char *)(param_1 + 0x1b74) = *(char *)(param_1 + 0x1b74) + '\x01';
    return;
  case 3:
    iVar1 = FUN_00684410();
    *(uint *)(param_1 + 0x1b6c) = (uint)(iVar1 == 0);
  case 0:
    local_20 = 0x40400000;
    local_1c = 0;
    local_18 = 0;
    D3DXVec3TransformNormal(&local_20,&local_20,param_1 + 0x10);
    FUN_006843a0(auStack_2c);
    *(char *)(param_1 + 0x1b74) = *(char *)(param_1 + 0x1b74) + '\x01';
    return;
  case 4:
    iVar1 = FUN_00684410();
    *(uint *)(param_1 + 0x1b70) = (uint)(iVar1 == 0);
    *(undefined1 *)(param_1 + 0x1b74) = 0;
  default:
    return;
  }
}

// 0068D170  FUN_0068d170  size=616  [between]
void __thiscall FUN_0068d170(int *param_1,float param_2)

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
LAB_0068d298:
              piVar4 = param_1 + 4;
            }
            else {
              piVar4 = (int *)param_1[0xd8];
              piVar5 = piVar4;
              if (piVar4 == (int *)0x0) {
                piVar5 = param_1;
              }
              if ((short)piVar5[0xd6] <= sVar1) goto LAB_0068d298;
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

// 0068D3E0  FUN_0068d3e0  size=5782  [between]
void __thiscall FUN_0068d3e0(uint param_1,int *param_2,int param_3)

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
  param_2[3] = *(int *)(param_1 + 0x1c28);
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
  local_210 = *(float *)(param_1 + 0x1c00) - *(float *)(param_1 + 0x40);
  local_20c = *(float *)(param_1 + 0x1c04) - *(float *)(param_1 + 0x44);
  local_208 = *(float *)(param_1 + 0x1c08) - *(float *)(param_1 + 0x48);
  local_204 = *(float *)(param_1 + 0x1c0c) - *(float *)(param_1 + 0x4c);
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
  local_1f4 = *(float *)(param_1 + 0x1c00) - *(float *)(param_1 + 0x40);
  local_1f0 = *(float *)(param_1 + 0x1c04) - *(float *)(param_1 + 0x44);
  fStack_1ec = *(float *)(param_1 + 0x1c08) - *(float *)(param_1 + 0x48);
  local_1e8 = *(float *)(param_1 + 0x1c0c) - *(float *)(param_1 + 0x4c);
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
  if (0.25 < *(float *)(param_1 + 0x1c10) * -0.0 + *(float *)(param_1 + 0x1c14) * fStack_240 * -1.0
             + *(float *)(param_1 + 0x1c18) * fStack_12c) {
    local_220[2] = 1;
  }
  if (0.25 < *(float *)(param_1 + 0x1c18) * local_23c[0] +
             *(float *)(param_1 + 0x1c10) * 0.0 + *(float *)(param_1 + 0x1c14) * fStack_240) {
    local_20c = 1.4013e-45;
  }
  if (0.25 < *(float *)(param_1 + 0x1c18) * 0.0 +
             *(float *)(param_1 + 0x1c10) * 0.0 + *(float *)(param_1 + 0x1c14) * 0.0) {
    local_1d8 = 1;
  }
  if (0.25 < *(float *)(param_1 + 0x1c10) * -0.0 + *(float *)(param_1 + 0x1c14) * -0.0 +
             *(float *)(param_1 + 0x1c18) * -0.0) {
    local_1dc = 1;
  }
  if (0.5 < *(float *)(param_1 + 0x1c14) * fStack_200 * -1.0 +
            *(float *)(param_1 + 0x1c10) * local_204 * -1.0 +
            *(float *)(param_1 + 0x1c18) * fStack_1fc * -1.0) {
    iStack_26c = 1;
  }
  if (0.5 < fStack_1fc * *(float *)(param_1 + 0x1c18) +
            local_204 * *(float *)(param_1 + 0x1c10) + fStack_200 * *(float *)(param_1 + 0x1c14)) {
    iStack_260 = 1;
  }
  iVar15 = FUN_00684f10(&fStack_144,param_2);
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
  if (piVar18[0x709] == 0) {
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
  if (piVar18[0x70c] != 0) {
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
  if ((((piVar18[0x70a] == 0) && (piVar18[0x70b] == 0)) &&
      (iVar14 = FUN_00a8cbe0(0x80006), iVar14 == 0)) &&
     ((iVar14 = FUN_00a8cbe0(0x80008), iVar14 == 0 && (iVar14 = FUN_00a8cbe0(0x60017), iVar14 == 0))
     )) {
    if ((piVar18[0x70b] == 0) &&
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
            if (iStack_1a0 == 0) goto LAB_0068e1ad;
          }
          else {
            piVar18[0x70e] = 1;
            if (iStack_1a0 == 0) goto LAB_0068e1db;
          }
          piVar18[0x70f] = 1;
LAB_0068e1db:
          *param_2 = 0x1c;
          *(int *)(param_3 + 0x18) = piVar18[0x12d];
          return;
        }
      }
LAB_0068e1ad:
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
          if (*param_2 != 0) goto LAB_0068e33d;
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
          if (*param_2 != 0) goto LAB_0068e52f;
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
LAB_0068e52f:
            *(int *)(param_3 + 0x18) = piVar19[0x12d];
            return;
          }
        }
      }
      if ((((aiStack_18c[1] != 0) && (param_2[1] == 0)) && (local_1b8 != 0)) && (iStack_1a8 != 0)) {
LAB_0068e5d8:
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
        goto LAB_0068e5d8;
      }
      if (5 < iVar20) {
        *param_2 = (-(uint)(piVar19[0x70a] != 0) & 0xffffffee) + 0x18;
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
LAB_0068e7a7:
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
LAB_0068e33d:
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
        goto LAB_0068e7a7;
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
        goto LAB_0068ea58;
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
        if (*param_2 != 0) goto LAB_0068e9b7;
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
        if (*param_2 != 0) goto LAB_0068e9ea;
      }
    }
    if ((aiStack_1d4[1] != 0) && (auStack_124[0] == 0)) {
LAB_0068e976:
      *param_2 = 6;
      *(int *)(param_3 + 0x18) = piVar18[0x12d];
      return;
    }
    if ((aiStack_1d4[3] != 0) &&
       (((auStack_124[0] == 0 && (auStack_124[7] == 0)) && (auStack_124[0xb] == 0)))) {
      *param_2 = 6;
LAB_0068e9b7:
      *(int *)(param_3 + 0x18) = piVar18[0x12d];
      return;
    }
    if (((aiStack_18c[1] != 0) && (auStack_124[0] == 0)) && (auStack_124[3] == 0)) {
      *param_2 = 3;
LAB_0068e9ea:
      *(int *)(param_3 + 0x18) = piVar18[0x12d];
      return;
    }
    if (5 < iVar20) goto LAB_0068e976;
  }
  if (((aiStack_18c[0] != 0) && (aiStack_18c[1] != 0)) &&
     ((aiStack_18c[3] != 0 && ((iStack_160 != 0 && (iStack_170 != 0)))))) {
    *param_2 = 0x1f;
    *(int *)(param_3 + 0x18) = piVar19[0x12d];
    return;
  }
LAB_0068ea58:
  *(undefined4 *)(param_3 + 0x18) = 0x42000;
  return;
}

// 0068EA80  FUN_0068ea80  size=3140  [between]
/* WARNING: Type propagation algorithm not settling */

void __thiscall FUN_0068ea80(int param_1,int *param_2,int param_3)

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
  local_1f4[1] = *(float *)((int)local_1f8 + 0x1c00) - *(float *)((int)local_1f8 + 0x40);
  local_1f4[2] = *(float *)((int)local_1f8 + 0x1c04) - *(float *)((int)local_1f8 + 0x44);
  local_1f4[3] = *(float *)((int)local_1f8 + 0x1c08) - *(float *)((int)local_1f8 + 0x48);
  local_1f4[4] = *(float *)((int)local_1f8 + 0x1c0c) - *(float *)((int)local_1f8 + 0x4c);
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
  fStack_204 = *(float *)((int)fVar2 + 0x1c00) - *(float *)((int)fVar2 + 0x40);
  fStack_200 = *(float *)((int)fVar2 + 0x1c04) - *(float *)((int)fVar2 + 0x44);
  local_1fc = *(float *)((int)fVar2 + 0x1c08) - *(float *)((int)fVar2 + 0x48);
  local_1f8 = *(float *)((int)fVar2 + 0x1c0c) - *(float *)((int)fVar2 + 0x4c);
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
  FUN_00684f10(auStack_94,param_2);
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
  uVar4 = (uint)(puVar17[0x709] != 0);
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
  if (puVar17[0x70c] != 0) {
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
  if ((((puVar17[0x70a] != 0) || (puVar17[0x70b] != 0)) ||
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
    goto LAB_0068f6a9;
  }
  if ((puVar17[0x70b] == 0) &&
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
          if (iStack_1c0 == 0) goto LAB_0068f45a;
        }
        else {
          puVar17[0x70e] = 1;
          if (iStack_1c0 == 0) goto LAB_0068f43f;
        }
        puVar17[0x70f] = 1;
LAB_0068f43f:
        *param_2 = 0x1c;
        *(uint *)(param_3 + 0x18) = puVar17[0x12d];
        return;
      }
    }
LAB_0068f45a:
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
LAB_0068f4ef:
      *param_2 = 0x21;
      *(uint *)(param_3 + 0x18) = puVar17[0x12d];
      return;
    }
    if (5 < iVar12) {
      *param_2 = (-(uint)(puVar17[0x70a] != 0) & 0xffffffee) + 0x18;
      *(uint *)(param_3 + 0x18) = puVar17[0x12d];
      return;
    }
    if (((iStack_1d8 != 0) || (iStack_1d4 != 0)) && (auStack_1ac[1] == 0)) {
      if ((uVar4 != 0) && (aiStack_ec[1] != 0)) {
        *param_2 = 1;
        *(uint *)(param_3 + 0x18) = puVar17[0x12d];
        return;
      }
      goto LAB_0068f4ef;
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
    if (aiStack_ec[1] == 0) goto LAB_0068f6a9;
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
LAB_0068f6a9:
  *(undefined4 *)(param_3 + 0x18) = 0x42000;
  return;
}

// 0068F6D0  FUN_0068f6d0  size=2928  [between]
void __thiscall FUN_0068f6d0(int param_1,int *param_2,int param_3)

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
  local_1f0 = *(float *)(param_1 + 0x1c00) - *(float *)(param_1 + 0x40);
  local_1ec = *(float *)(param_1 + 0x1c04) - *(float *)(param_1 + 0x44);
  local_1e8 = *(float *)(param_1 + 0x1c08) - *(float *)(param_1 + 0x48);
  local_1e4 = *(float *)(param_1 + 0x1c0c) - *(float *)(param_1 + 0x4c);
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
  fStack_204 = *(float *)(param_1 + 0x1c00) - *(float *)(param_1 + 0x40);
  fStack_200 = *(float *)(param_1 + 0x1c04) - *(float *)(param_1 + 0x44);
  local_1fc = *(float *)(param_1 + 0x1c08) - *(float *)(param_1 + 0x48);
  local_1f8 = *(float *)(param_1 + 0x1c0c) - *(float *)(param_1 + 0x4c);
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
  FUN_00684f10(auStack_94,param_2);
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
  uVar4 = (uint)(puVar12[0x709] != 0);
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
  if (puVar12[0x70c] != 0) {
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
  if ((((puVar12[0x70a] != 0) || (puVar12[0x70b] != 0)) ||
      (puVar17 = puVar12, iVar5 = FUN_00a8cbe0(0x80006), iVar5 != 0)) ||
     ((iVar5 = FUN_00a8cbe0(0x80008), iVar5 != 0 || (iVar5 = FUN_00a8cbe0(0x60017), iVar5 != 0)))) {
    *param_2 = 3;
    *(uint *)(param_3 + 0x18) = puVar12[0x12d];
    return;
  }
  if ((puVar12[0x70b] == 0) &&
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
      if (iStack_c0 == 0) goto LAB_00690225;
      if (iStack_bc != 0) {
        if (iStack_110 == 0) {
          if (iStack_100 == 0) goto LAB_006901fe;
        }
        else {
          puVar17[0x70e] = 1;
          if (iStack_100 == 0) goto LAB_006900a5;
        }
        puVar17[0x70f] = 1;
LAB_006900a5:
        *param_2 = 0x1c;
        *(uint *)(param_3 + 0x18) = puVar17[0x12d];
        return;
      }
    }
  }
  else {
    if (5 < iVar13) {
      *param_2 = (-(uint)(puVar12[0x70a] != 0) & 0xffffffee) + 0x18;
LAB_006900e0:
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
      if (*param_2 != 0) goto LAB_006900e0;
    }
    if (iStack_11c != 0) {
      *param_2 = 0x1d;
      *(uint *)(param_3 + 0x18) = puVar17[0x12d];
      return;
    }
  }
LAB_006901fe:
  if ((iStack_c0 != 0) && (iStack_d0 != 0)) {
    *param_2 = 0x1f;
    *(uint *)(param_3 + 0x18) = puVar17[0x12d];
    return;
  }
LAB_00690225:
  *(undefined4 *)(param_3 + 0x18) = 0x42000;
  return;
}

// 00690240  Em8060::vf338  size=194  [class]
void __thiscall Em8060::vf338(int *param_1,undefined4 param_2,int param_3,int param_4)

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
  iVar4 = *(int *)(DAT_01b35638 + 8);
  iVar1 = *(int *)(DAT_01b35638 + 4);
  for (iVar5 = *(int *)(DAT_01b35638 + 4); iVar5 != iVar4 * 0x10 + iVar1; iVar5 = iVar5 + 0x10) {
    iVar3 = FUN_00a81330();
    if ((iVar3 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
      puVar6 = &DAT_01b355b0;
      (**(code **)(*piVar2 + 4))(&DAT_01b355b0);
      iVar3 = FUN_00dd6d80(puVar6);
      if ((iVar3 != 0) && (iVar3 = FUN_00a8cbe0(0x80000), iVar3 == 0)) {
        FUN_00684110();
      }
    }
  }
  return;
}

// 00690310  Em8060::vf334  size=2177  [class]
void __thiscall Em8060::vf334(int *param_1,int param_2,int *param_3)

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
  undefined1 auStack_a0 [56];
  int iStack_68;
  
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
      puVar14 = &DAT_01b355b0;
      (**(code **)(*local_a8 + 4))(&DAT_01b355b0);
      iVar6 = FUN_00dd6d80(puVar14);
      if (iVar6 == 0) {
        local_a8 = (int *)0x0;
      }
      else if (local_a8 != param_1) {
        FUN_0040ac60(local_a8 + 0x2ac);
        iVar6 = local_a8[0x20f];
        param_1[0x147] = iVar6;
        param_1[0x20f] = iVar6;
        param_1[0x70a] = local_a8[0x70a];
        param_1[0x70e] = local_a8[0x70e];
        param_1[0x70f] = local_a8[0x70f];
        param_1[0x710] = local_a8[0x710];
        param_1[0x711] = local_a8[0x711];
        param_1[0x770] = local_a8[0x770];
        param_1[0x71a] = local_a8[0x71a];
        uVar4 = FUN_009f8b40();
        FUN_00ac8a80(uVar4);
      }
    }
  }
  FUN_009fd240();
  if (*(int *)(param_2 + 0x370) != 0) {
    FUN_00a1abe0(0);
  }
  piVar5 = param_1 + 0x62f;
  iVar6 = (int)local_a8 - (int)param_1;
  iVar7 = 9;
  do {
    *piVar5 = *(int *)(iVar6 + (int)piVar5);
    piVar5[1] = *(int *)(iVar6 + 4 + (int)piVar5);
    piVar5[2] = *(int *)(iVar6 + 8 + (int)piVar5);
    piVar5 = piVar5 + 3;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  piVar5 = param_1 + 0x64c;
  iVar7 = 6;
  do {
    *piVar5 = *(int *)((int)piVar5 + iVar6);
    piVar5[1] = *(int *)((int)piVar5 + iVar6 + 4);
    piVar5[2] = *(int *)((int)piVar5 + iVar6 + 8);
    piVar5[3] = *(int *)((int)piVar5 + iVar6 + 0xc);
    piVar5 = piVar5 + 4;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  piVar5 = param_1 + 0x665;
  iVar7 = 4;
  do {
    *piVar5 = *(int *)((int)piVar5 + iVar6);
    piVar5 = piVar5 + 1;
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  if (param_1[0x650] != 0) {
    FUN_00ac8d80(0x12,1);
    FUN_00ac8d80(0x11,1);
    FUN_00ac8d80(0xe,1);
  }
  if (param_1[0x64c] != 0) {
    FUN_00ac8d80(0,1);
    FUN_00ac8d80(1,1);
    FUN_00ac8d80(2,1);
    FUN_00ac8d80(3,1);
    FUN_00ac8d80(0xf,1);
    FUN_00ac8d80(0x10,1);
    FUN_00ac8d80(9,1);
    FUN_00ac8d80(4,1);
    if ((param_1[0xcc] != 0) && (*(int *)(param_1[0xcc] + 0xcc) == 0)) {
      FUN_00684520();
    }
  }
  if (param_1[0x654] != 0) {
    FUN_00ac8d80(10,1);
    FUN_00ac8d80(0xb,1);
    FUN_00ac8d80(0xc,1);
    FUN_00ac8d80(0xd,1);
  }
  if (param_1[0x658] != 0) {
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
          param_1[0x6fc] = param_1[0x6fc] | uVar3;
LAB_0069060b:
          if (uVar8 < 0x20) {
            param_1[0x6fb] = param_1[0x6fb] | uVar3;
          }
        }
      }
      else {
        iVar6 = FUN_00a10040(uVar8);
        if (iVar6 == 1) goto LAB_0069060b;
      }
      uVar8 = uVar8 + 1;
      uVar3 = uVar3 << 1 | (uint)((int)uVar3 < 0);
    } while ((int)uVar8 < 0x12);
  }
  if ((*(byte *)(param_1 + 0x6fb) & 2) == 0) {
    if (param_1[0x711] == 0) {
      if (param_1[0x506] != 0) {
        *(int *)(param_1[0x506] + 0x518) = param_2;
      }
      if (param_1[0x507] != 0) {
        *(int *)(param_1[0x507] + 0x518) = param_2;
      }
    }
  }
  else {
    param_1[0x711] = 1;
    if (param_1[0x506] != 0) {
      uVar4 = FUN_00a81330();
      FUN_00a9e0d0(uVar4);
      FUN_00451280();
      param_1[0x506] = 0;
      FUN_00a7c960(param_1 + 0x509);
      FUN_00a7c950();
    }
    if (param_1[0x507] != 0) {
      uVar4 = FUN_00a81330();
      FUN_00a9e0d0(uVar4);
      FUN_00451280();
      param_1[0x507] = 0;
      FUN_00a7c960(param_1 + 0x50a);
      FUN_00a7c950();
    }
  }
  if ((param_1[0x6fb] & 0x4000U) == 0) {
    if ((param_1[0x710] == 0) && (param_1[0x505] != 0)) {
      *(int *)(param_1[0x505] + 0x518) = param_2;
    }
  }
  else {
    param_1[0x710] = 1;
    if (param_1[0x505] != 0) {
      param_1[0x710] = 1;
      if (((param_1[0x70a] == 0) && (param_1[0x139] == 0)) &&
         (iVar6 = FUN_00a8cbe0(0x50018), iVar6 == 0)) {
        (**(code **)(*param_1 + 0x314))();
        iVar6 = FUN_00a8cab0();
        param_1[0x3a9] = iVar6;
        param_1[0x3aa] = param_1[0x3a8];
        FUN_00a8caf0(0x60001,0,0,0);
        param_1[0x3a8] = 0;
        FUN_00a962d0(0,0);
        param_1[0x4e7] = 0;
      }
      uVar4 = FUN_00a81330();
      FUN_00a9e0d0(uVar4);
      FUN_00451280();
      param_1[0x505] = 0;
      FUN_00a7c960(param_1 + 0x508);
      FUN_00a7c950();
    }
  }
  iVar6 = 0;
  piVar5 = (int *)FUN_00ac8a30();
  if (piVar5 != (int *)0x0) {
    iVar6 = *piVar5;
    if (local_a8[0x64c] == 0) {
LAB_00690838:
      if (((local_a8[0x650] != 0) && (local_a8[0x654] != 0)) && (local_a8[0x658] != 0)) {
        param_1[0x709] = local_a8[0x294];
      }
      if ((((local_a8[0x64c] == 0) && (local_a8[0x650] == 0)) && (local_a8[0x654] != 0)) &&
         (local_a8[0x658] != 0)) {
        param_1[0x709] = local_a8[0x294];
      }
    }
    else {
      if (((local_a8[0x650] != 0) && (local_a8[0x654] != 0)) && (local_a8[0x658] != 0)) {
        param_1[0x709] = piVar5[1];
      }
      if (local_a8[0x64c] == 0) goto LAB_00690838;
    }
    if (param_1[0x708] == 0) {
      param_1[0x708] = piVar5[2];
    }
    if (param_1[0x70a] == 0) {
      param_1[0x70a] = piVar5[3];
    }
  }
  if (param_1[0x139] == 0) {
    if (param_1[0x71a] != 0) {
      param_1[0x139] = 1;
    }
    if ((-1 < param_1[0x770]) &&
       ((iVar7 = FUN_00c51a30(param_1[0x770]), iVar7 == 0 ||
        (FUN_00c518c0(auStack_a0,param_1[0x770]), iStack_68 != 0)))) {
      param_1[0x139] = 1;
    }
    if (param_1[0x139] == 0) goto LAB_00690964;
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
LAB_00690964:
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
  if ((param_1[0x301] != 0) && (uVar3 == 0x80000)) {
    uVar3 = 0xb0009;
  }
  param_1[0x70d] = -0x40800000;
  iVar6 = FUN_00a8cbe0(uVar3);
  if (iVar6 != 0) {
    fVar9 = (float10)FUN_00a958c0(0);
    param_1[0x70d] = (int)(float)fVar9;
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
  if (((uVar3 == 0x80020) || (uVar3 == 0x80021)) || (uVar3 == 0x80022)) {
    pcVar1 = *(code **)(*param_1 + 0x314);
    param_1[0x225] = 0;
    (*pcVar1)();
  }
  if ((param_1[0x301] != 0) && (uVar3 == 0x80029)) {
    uVar3 = 0xf0008;
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

// 00690C40  FUN_00690c40  size=250  [between]
void __fastcall FUN_00690c40(int param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  
  iVar3 = FUN_00a82d50();
  if (iVar3 == 1) {
    *(undefined4 *)(param_1 + 0x4e4) = 1;
    FUN_00a8ee20(0);
  }
  else {
    if (((0.0 < *(float *)(param_1 + 0x1c48)) &&
        (fVar1 = *(float *)(param_1 + 0x1c48) - *(float *)(param_1 + 0x910),
        *(float *)(param_1 + 0x1c48) = fVar1, fVar1 < 0.0)) && (*(int *)(param_1 + 0x1414) != 0)) {
      sVar2 = FUN_00dde2a0(0,1);
      if ((sVar2 == 0) || (iVar3 = FUN_00688510(*(undefined4 *)(param_1 + 0x1abc)), iVar3 == 0)) {
        FUN_00a8caf0(0x8000b,0,0,0);
        *(undefined4 *)(param_1 + 0xea0) = 0;
        FUN_00a962d0(0,0);
        *(undefined4 *)(param_1 + 0x139c) = 0;
      }
      else {
        FUN_0067cd40(0x8000e,0,0,0,0);
      }
    }
    if ((0 < *(int *)(param_1 + 0x870)) && (*(int *)(param_1 + 0x4e4) == 0)) {
      return;
    }
  }
  FUN_00a8caf0(0x8000d,0,0,0);
  *(undefined4 *)(param_1 + 0xea0) = 0;
  FUN_00a962d0(0,0);
  *(undefined4 *)(param_1 + 0x139c) = 0;
  return;
}

// 00690D40  FUN_00690d40  size=47  [between]
void __fastcall FUN_00690d40(int param_1)

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

// 00690D70  FUN_00690d70  size=88  [between]
undefined4 __fastcall FUN_00690d70(int param_1)

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

// 00690DD0  FUN_00690dd0  size=88  [between]
undefined4 __fastcall FUN_00690dd0(int param_1)

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

// 00690E80  FUN_00690e80  size=108  [between]
void __fastcall FUN_00690e80(int param_1)

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
        iVar2 = FUN_0068c650(iVar2);
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

// 00690F50  FUN_00690f50  size=264  [between]
void __fastcall FUN_00690f50(float *param_1)

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
    FUN_00686fe0(&local_30);
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
        FUN_00687d00(&uStack_34,auStack_24);
        FUN_006880a0(&uStack_34,auStack_24);
      }
    }
  }
  return;
}

// 00691060  Em8060::vf19C  size=195  [class]
void __thiscall Em8060::vf19C(int *param_1,int param_2,uint param_3)

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

// 00691130  FUN_00691130  size=741  [callgraph]
void __fastcall FUN_00691130(int *param_1)

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
      param_1[0x187] = (uint)(param_1[0x70a] != 0) * 2 + 6;
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
    if (param_1[0x708] != 0) {
      uVar2 = 0x8000040;
    }
    param_1[0x187] = 9;
    FUN_00aa4080(0xa8,0,0x3d088889,0x3f800000,uVar2,0xbf800000,0x3f800000);
    param_1[0x248] = 0x42f00000;
  case 9:
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if ((float)param_1[0x248] < 0.0) {
      FUN_00a8caf0(0x80006,0,0,0);
      param_1[0x3a8] = 0;
      FUN_00a962d0(0,0);
      param_1[0x4e7] = 0;
      return;
    }
  }
  return;
}

// 00691440  FUN_00691440  size=741  [callgraph]
void __fastcall FUN_00691440(int *param_1)

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
      param_1[0x187] = (uint)(param_1[0x70a] != 0) * 2 + 6;
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
    if (param_1[0x708] != 0) {
      uVar2 = 0x8000040;
    }
    param_1[0x187] = 9;
    FUN_00aa4080(0xa8,0,0x3d088889,0x3f800000,uVar2,0xbf800000,0x3f800000);
    param_1[0x248] = 0x42f00000;
  case 9:
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if ((float)param_1[0x248] < 0.0) {
      FUN_00a8caf0(0x80006,0,0,0);
      param_1[0x3a8] = 0;
      FUN_00a962d0(0,0);
      param_1[0x4e7] = 0;
      return;
    }
  }
  return;
}

// 00691750  FUN_00691750  size=255  [callgraph]
void __fastcall FUN_00691750(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = FUN_00a81330();
  iVar1 = param_1 + 0x1bb8;
  if (*(int *)(param_1 + 0x1bb8) != 0) {
    iVar2 = FUN_00907640(iVar1,0,0);
    if (iVar2 != 0) {
      FUN_00a7c950();
    }
    RayCastManager::getWork(iVar1);
    return;
  }
  iVar3 = FUN_0068b500(iVar2);
  if (iVar3 != 0) {
    FUN_00a7c950();
    iVar2 = FUN_00c49730(*(undefined4 *)(param_1 + 0x4f0),*(undefined4 *)(param_1 + 0x94),0x3fc90fdb
                         ,0x41200000,0);
  }
  if (iVar2 != 0) {
    iVar3 = FUN_00a81330();
    if (iVar3 == iVar2) {
      *(float *)(param_1 + 0x1b9c) = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0x1b9c);
      return;
    }
    *(undefined4 *)(param_1 + 0x1b9c) = 0;
    uVar4 = FUN_00a7c7f0();
    FUN_00a7c960(uVar4);
    FUN_0068b5e0(iVar1);
    return;
  }
  *(undefined4 *)(param_1 + 0x1b9c) = 0;
  FUN_00a7c950();
  return;
}

// 006919F0  FUN_006919f0  size=27  [callgraph]
void __fastcall FUN_006919f0(int param_1)

{
  undefined4 local_4;
  
  local_4 = *(undefined4 *)(param_1 + 0x4f0);
  FUN_00690dd0(&local_4);
  return;
}

// 00691A10  FUN_00691a10  size=75  [callgraph]
void FUN_00691a10(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = FUN_00a7c8a0();
  if (iVar3 != 0) {
    iVar3 = FUN_00a7c8a0();
    iVar3 = *(int *)(iVar3 + 0x51c);
    iVar1 = *(int *)(DAT_01b35638 + 8);
    iVar2 = *(int *)(DAT_01b35638 + 4);
    for (iVar4 = *(int *)(DAT_01b35638 + 4); iVar4 != iVar1 * 0x10 + iVar2; iVar4 = iVar4 + 0x10) {
      if (*(int *)(iVar4 + 4) == iVar3) {
        *(undefined4 *)(iVar4 + 0xc) = param_1;
      }
    }
  }
  return;
}

// 00691A60  FUN_00691a60  size=27  [callgraph]
void __fastcall FUN_00691a60(int param_1)

{
  undefined4 local_4;
  
  local_4 = *(undefined4 *)(param_1 + 0x4f0);
  FUN_00690d70(&local_4);
  return;
}

// 00691A80  FUN_00691a80  size=154  [callgraph]
void __thiscall
FUN_00691a80(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0068c740(param_2,param_3,param_4,param_5,param_6,param_7);
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
      *(int *)(param_1 + 0x1414 + param_2 * 4) = iVar1;
    }
    if (param_2 == 0) {
      uVar2 = FUN_00ac8660(0,0x22);
      FUN_00448e60(uVar2);
    }
  }
  return;
}

// 00691B20  FUN_00691b20  size=1282  [callgraph]
void __fastcall FUN_00691b20(int param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int local_4;
  
  if ((*(int *)(param_1 + 0x61c) < 3) || (3 < *(int *)(param_1 + 0x61c))) {
    return;
  }
  local_4 = param_1;
  iVar3 = FUN_00a82d50();
  if (((iVar3 == 2) || (iVar3 = FUN_00a82d50(), iVar3 == 3)) || (iVar3 = FUN_00a82d50(), iVar3 == 1)
     ) {
    *(undefined4 *)(param_1 + 0x61c) = 4;
    return;
  }
  local_4 = *(int *)(param_1 + 0x4f0);
  iVar3 = FUN_00690dd0(&local_4);
  if (iVar3 == 0) {
    if (*(int *)(param_1 + 0x1b64) == 0) {
      FUN_0067cd40(0x10010,0,0,0,0);
    }
    iVar3 = FUN_00aa4a90();
    if (((iVar3 == 0) || ((*(uint *)(param_1 + 0xd44) & 0x2000000) != 0)) ||
       (fVar1 = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0x93c),
       *(float *)(param_1 + 0x93c) = fVar1, fVar1 < 30.0)) {
      if (1.0471976 < *(float *)(param_1 + 0xaa0)) {
        FUN_0067cd40(0x10005,0,0,0,0);
        if (1.0471976 < *(float *)(param_1 + 0xa9c)) {
          FUN_0067cd40(0x10006,0,0,0,0);
        }
        if (2.0943952 < *(float *)(param_1 + 0xa9c)) {
          FUN_0067cd40(0x10008,0,0,0,0);
        }
        if (*(float *)(param_1 + 0xa9c) < -2.0943952) {
          FUN_0067cd40(0x10007,0,0,0,0);
        }
      }
      fVar1 = *(float *)(param_1 + 6000);
      if (!NAN(fVar1) && 240.0 < fVar1 != (fVar1 == 240.0)) goto LAB_00691c8b;
      if (25.0 <= *(float *)(param_1 + 0xa90)) goto LAB_00692004;
      FUN_0067cd40(0x10003,0,4,0,0);
      sVar2 = FUN_00dde2d0(0,1);
      if (sVar2 != 0) {
        FUN_00684170();
      }
      sVar2 = FUN_00dde2d0(0,1);
      if ((sVar2 != 0) && (9.0 < *(float *)(param_1 + 0xa90))) {
        FUN_0067cd40(0x10010,0,0,0,0);
      }
      if (0.0 <= *(float *)(param_1 + 0x1764)) goto LAB_00692004;
LAB_00691fdd:
      sVar2 = FUN_00dde2d0(0,1);
      if (sVar2 == 0) goto LAB_00692004;
      goto LAB_00691ff0;
    }
    uVar4 = 0x10004;
  }
  else {
    if (iVar3 == 1) {
      if (1.0471976 < *(float *)(param_1 + 0xaa0)) {
        FUN_0067cd40(0x10005,0,0,0,0);
        if (1.0471976 < *(float *)(param_1 + 0xa9c)) {
          FUN_0067cd40(0x10006,0,0,0,0);
        }
        if (2.0943952 < *(float *)(param_1 + 0xa9c)) {
          FUN_0067cd40(0x10008,0,0,0,0);
        }
        if (*(float *)(param_1 + 0xa9c) < -2.0943952) {
          FUN_0067cd40(0x10007,0,0,0,0);
        }
      }
      if (*(float *)(param_1 + 0xa90) < 25.0) {
        FUN_0067cd40(0x10003,0,4,0,0);
        sVar2 = FUN_00dde2d0(0,1);
        if (sVar2 != 0) {
          FUN_00684170();
          *(undefined4 *)(param_1 + 0x1c5c) = *(undefined4 *)(param_1 + 0xeb4);
          return;
        }
      }
      goto LAB_00692004;
    }
    if (iVar3 != 2) goto LAB_00692004;
    if ((*(int *)(param_1 + 0x1b64) == 0) && (9.0 < *(float *)(param_1 + 0xa90))) {
      FUN_0067cd40(0x10010,0,0,0,0);
    }
    if (1.0471976 < *(float *)(param_1 + 0xaa0)) {
      FUN_0067cd40(0x10005,0,0,0,0);
      if (1.0471976 < *(float *)(param_1 + 0xa9c)) {
        FUN_0067cd40(0x10006,0,0,0,0);
      }
      if (2.0943952 < *(float *)(param_1 + 0xa9c)) {
        FUN_0067cd40(0x10008,0,0,0,0);
      }
      if (*(float *)(param_1 + 0xa9c) < -2.0943952) {
        FUN_0067cd40(0x10007,0,0,0,0);
      }
    }
    fVar1 = *(float *)(param_1 + 6000);
    if (NAN(fVar1) || 240.0 < fVar1 == (fVar1 == 240.0)) {
      if (25.0 <= *(float *)(param_1 + 0xa90)) goto LAB_00692004;
      FUN_0067cd40(0x10003,0,4,0,0);
      sVar2 = FUN_00dde2d0(0,1);
      if (sVar2 != 0) {
        FUN_00684170();
      }
      sVar2 = FUN_00dde2d0(0,1);
      if ((sVar2 != 0) && (9.0 < *(float *)(param_1 + 0xa90))) {
        FUN_0067cd40(0x10010,0,0,0,0);
      }
      iVar3 = FUN_0067fe90();
      if (iVar3 == 0) goto LAB_00692004;
      goto LAB_00691fdd;
    }
LAB_00691c8b:
    if (9.0 <= *(float *)(param_1 + 0xa90)) goto LAB_00692004;
LAB_00691ff0:
    uVar4 = 0x50001;
  }
  FUN_0067cd40(uVar4,0,0,0,0);
LAB_00692004:
  *(undefined4 *)(param_1 + 0x1c5c) = *(undefined4 *)(param_1 + 0xeb4);
  return;
}

// 00692030  FUN_00692030  size=1161  [callgraph]
void __fastcall FUN_00692030(int *param_1)

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
        FUN_0067cd40(0x10010,0,0,0,0);
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
    fVar1 = (float)param_1[0x5dc];
    if (!NAN(fVar1) && 360.0 < fVar1 != (fVar1 == 360.0)) {
      (**(code **)(*param_1 + 0x308))(0x3e4ccccd,0x3ae4c388,0x3e0efa35,0);
    }
    fVar1 = (float)param_1[0x5dc];
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
      if (iVar3 == 0) {
        iVar3 = FUN_00a94db0(0x10);
        if (iVar3 != 0) {
          FUN_00aa4080(0x11,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
        }
      }
      else {
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
      iVar3 = FUN_006919f0();
      if ((iVar3 == 0) && (sVar2 = FUN_00dde2d0(0,1), sVar2 != 0)) {
        FUN_00684170();
      }
    }
  }
  if (0.0 < (float)param_1[0x248]) {
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
  }
  return;
}

// 006924E0  FUN_006924e0  size=735  [callgraph]
void __fastcall FUN_006924e0(int *param_1)

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
    uVar2 = FUN_00e00b40(0x28060,puVar4);
    FUN_00a8c930(uVar2,puVar4);
    FUN_00e5e0c0("EM8060_se_dmg_faint_spark",param_1,0xffffffff,0);
    FUN_0043f5b0(9,0x41200000);
    (**(code **)(*param_1 + 0x344))(5,0,1);
    FUN_00eaa6e0(0x41200000,0);
    FUN_00eaa6e0(0x41200000,0);
    FUN_00eaa6e0(0x41200000,0);
    FUN_00eaa6e0(0x41200000,0);
    iVar1 = FUN_00a81330();
    if ((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
      FUN_00a7c950();
      FUN_006672c0();
    }
  }
  else if (iVar1 != 1) {
    if (iVar1 != 2) {
      return;
    }
    iVar1 = thunk_FUN_00e58ed0(param_1[0x71d]);
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
    piVar5 = param_1 + 0x57c;
    uVar2 = FUN_00a7c8a0(piVar5);
    FUN_004117d0(7,uVar2,piVar5);
    puVar4 = local_160;
    uVar2 = FUN_00e00b40(0x28060,puVar4);
    FUN_00a8c930(uVar2,puVar4);
    FUN_00a85670(param_1,1);
    iVar1 = FUN_00e5e0c0("EM8060_se_dmg_exp_death",param_1,0xffffffff,0);
    param_1[0x71d] = iVar1;
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

// 006927C0  FUN_006927c0  size=96  [callgraph]
void __thiscall FUN_006927c0(int param_1,undefined4 param_2,undefined4 param_3)

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

// 00692820  FUN_00692820  size=1287  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00692a51) */
/* WARNING: Removing unreachable block (ram,0x00692bd4) */

void FUN_00692820(float param_1,float *param_2,float *param_3)

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
  pfStack_64 = (float *)0x69283f;
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

// 00692D30  FUN_00692d30  size=520  [callgraph]
void __thiscall
FUN_00692d30(int param_1,short *param_2,undefined4 *param_3,undefined4 *param_4,undefined4 param_5,
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
  pcVar7 = (char *)(param_1 + 0x177c);
  while ((*(int *)(pcVar7 + 4) != 0 || (*pcVar7 != '\0'))) {
    uVar3 = uVar3 + 1;
    pcVar7 = pcVar7 + 0x14;
    if (0xf < uVar3) {
      return;
    }
  }
  puVar1 = (undefined1 *)(param_1 + 0x177c + uVar3 * 0x14);
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

// 00692F40  FUN_00692f40  size=534  [callgraph]
void __fastcall FUN_00692f40(int param_1)

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
  pfVar10 = (float *)(param_1 + 0x1788);
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
LAB_00693094:
                      iVar7 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
                      goto LAB_00693099;
                    }
                    if (bVar2 == 0) break;
                    bVar2 = pbVar3[3];
                    bVar13 = bVar2 < pbVar9[1];
                    if (bVar2 != pbVar9[1]) goto LAB_00693094;
                    pbVar9 = pbVar9 + 2;
                    pbVar3 = pbVar3 + 2;
                  } while (bVar2 != 0);
                  iVar7 = 0;
LAB_00693099:
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

// 00693160  FUN_00693160  size=116  [callgraph]
void __thiscall FUN_00693160(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  code *pcVar2;
  
  cVar1 = (char)param_1[0x6d4];
  if (cVar1 < '\x03') {
    if ((cVar1 == '\x02') && (param_1[0x3e5] == 0)) {
      pcVar2 = *(code **)(*param_1 + 0x358);
      param_1[0x3e5] = 1;
      (*pcVar2)(400,param_1 + 0x3b8);
    }
    *(char *)(param_1 + 0x6d4) = (char)param_1[0x6d4] + '\x01';
    FUN_00692d30(&DAT_01882218 + cVar1 * 0x22,param_2,param_3,param_4,1);
  }
  return;
}

// 006931E0  FUN_006931e0  size=116  [callgraph]
void __thiscall FUN_006931e0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  code *pcVar2;
  
  cVar1 = *(char *)((int)param_1 + 0x1b51);
  if (cVar1 < '\x03') {
    if ((cVar1 == '\x02') && (param_1[0x3e6] == 0)) {
      pcVar2 = *(code **)(*param_1 + 0x358);
      param_1[0x3e6] = 1;
      (*pcVar2)(0x191,param_1 + 0x3b8);
    }
    *(char *)((int)param_1 + 0x1b51) = *(char *)((int)param_1 + 0x1b51) + '\x01';
    FUN_00692d30(&DAT_01882280 + cVar1 * 0x22,param_2,param_3,param_4,1);
  }
  return;
}

// 00693260  FUN_00693260  size=116  [callgraph]
void __thiscall FUN_00693260(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  code *pcVar2;
  
  cVar1 = *(char *)((int)param_1 + 0x1b52);
  if (cVar1 < '\x03') {
    if ((cVar1 == '\x02') && (param_1[999] == 0)) {
      pcVar2 = *(code **)(*param_1 + 0x358);
      param_1[999] = 1;
      (*pcVar2)(0x192,param_1 + 0x3b8);
    }
    *(char *)((int)param_1 + 0x1b52) = *(char *)((int)param_1 + 0x1b52) + '\x01';
    FUN_00692d30(&DAT_018822e8 + cVar1 * 0x22,param_2,param_3,param_4,1);
  }
  return;
}

// 006932E0  FUN_006932e0  size=227  [callgraph]
void __thiscall FUN_006932e0(int *param_1,int param_2)

{
  if ((param_1[0x64c] == 0) || (param_2 != 0)) {
    if ((param_1[0x301] == 0) && (param_1[0x76f] == 0)) {
      (**(code **)(*param_1 + 0x358))(0x193,param_1 + 0x3b8);
    }
    param_1[0x3e4] = 1;
    FUN_00ac9420(param_1 + 0x64e);
    param_1[0x64c] = 1;
    FUN_00ac8d80(0,1);
    FUN_00ac8d80(1,1);
    FUN_00ac8d80(2,1);
    FUN_00ac8d80(3,1);
    FUN_00ac8d80(0xf,1);
    FUN_00ac8d80(0x10,1);
    FUN_00ac8d80(9,1);
    FUN_00ac8d80(4,1);
    if ((param_1[0xcc] != 0) && (*(int *)(param_1[0xcc] + 0xcc) == 0)) {
      FUN_00684520();
    }
    param_1[0x665] = 0;
  }
  return;
}

// 00693440  FUN_00693440  size=840  [callgraph]
undefined4 __fastcall FUN_00693440(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_4;
  
  local_4 = *(undefined4 *)(param_1 + 0x4f0);
  iVar2 = FUN_00690dd0(&local_4);
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
    if (*(float *)(param_1 + 0x176c) < 0.0) {
      sVar1 = FUN_00dde2d0(0,1);
      if ((sVar1 == 1) || (0xe < *(int *)(param_1 + 0xec4))) {
        FUN_0068cfa0();
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
      if (*(float *)(param_1 + 0x176c) < 0.0) {
        sVar1 = FUN_00dde2d0(0,7);
        if ((sVar1 == 1) || (0xe < *(int *)(param_1 + 0xec4))) {
          FUN_0068cf10();
          *(undefined4 *)(param_1 + 0xec4) = 0;
          sVar1 = FUN_00dde2d0(0,1);
          if ((sVar1 == 1) && (*(float *)(param_1 + 0xaa0) < 0.7853982)) {
            FUN_0068cfa0();
          }
        }
      }
    }
    if (((*(int *)(param_1 + 0xeb4) == 0) && (*(float *)(param_1 + 0x1760) < 0.0)) &&
       ((*(float *)(param_1 + 0xa90) < 16.0 && (*(float *)(param_1 + 0xaa0) < 2.0943952)))) {
      FUN_0067cd40(0x10002,0,0,0,0);
    }
    return 1;
  }
  return 0;
}

// 00693790  FUN_00693790  size=121  [callgraph]
undefined4 __fastcall FUN_00693790(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_4;
  
  local_4 = *(undefined4 *)(param_1 + 0x4f0);
  iVar1 = FUN_00690dd0(&local_4);
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

// 00693810  FUN_00693810  size=174  [callgraph]
undefined4 __fastcall FUN_00693810(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_4;
  
  local_4 = *(undefined4 *)(param_1 + 0x4f0);
  iVar1 = FUN_00690dd0(&local_4);
  if (iVar1 == 0) {
    local_4 = *(undefined4 *)(param_1 + 0x4f0);
    iVar1 = FUN_00690dd0(&local_4);
    if (iVar1 != 1) {
      iVar1 = FUN_00688510(*(undefined4 *)(param_1 + 0x1abc));
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

// 006938C0  FUN_006938c0  size=1024  [callgraph]
void __thiscall FUN_006938c0(int *param_1,undefined4 *param_2)

{
  float fVar1;
  code *pcVar2;
  float fVar3;
  int iVar4;
  int unaff_EBX;
  float fStack_c;
  int iStack_8;
  int iStack_4;
  
  (**(code **)(*param_1 + 0x318))();
  *param_2 = 0;
  switch(param_1[0x504]) {
  case 0:
    FUN_00aa4080(0x1c,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x504] = param_1[0x504] + 1;
  case 1:
    (**(code **)(*param_1 + 0x314))();
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      param_1[0x504] = param_1[0x504] + 1;
    }
    FUN_0067e1c0(param_1 + 0x500,0x3e99999a,0x3e32b8c2);
    break;
  case 2:
    (**(code **)(*param_1 + 0x1d4))(1);
    FUN_00aa4080(0x1d,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x504] = param_1[0x504] + 1;
    FUN_00692820(param_1 + 0x4e8,param_1 + 0x10,param_1 + 0x500);
    param_1[0x249] = 0;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00a581b0(&fStack_c,0,param_1[0x249]);
    fVar1 = (float)param_1[0x244] * 0.04 + (float)param_1[0x249];
    param_1[0x249] = (int)fVar1;
    if (!NAN(fVar1) && 1.0 < fVar1 != (fVar1 == 1.0)) {
      param_1[0x504] = param_1[0x504] + 1;
    }
    param_1[0x14] = (int)fStack_c;
    param_1[0x15] = iStack_8;
    param_1[0x16] = iStack_4;
    FUN_0067e1c0(param_1 + 0x500,0x3e99999a,0x3e32b8c2);
    return;
  case 4:
    FUN_00aa4080(0x1e,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x504] = param_1[0x504] + 1;
  case 5:
    (**(code **)(*param_1 + 0x1d4))(1);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00a581b0(&stack0xfffffff0,0,param_1[0x249]);
    fVar1 = (float)param_1[0x15];
    param_1[0x14] = unaff_EBX;
    param_1[0x15] = (int)fStack_c;
    param_1[0x16] = iStack_8;
    fVar3 = (float)param_1[0x244] * 0.044444446 + (float)param_1[0x249];
    param_1[0x249] = (int)fVar3;
    if (!NAN(fVar3) && 2.0 < fVar3 != (fVar3 == 2.0)) {
      param_1[0x249] = 0x40000000;
      pcVar2 = *(code **)(*param_1 + 0x314);
      param_1[0x504] = 6;
      (*pcVar2)();
      param_1[0x225] = (int)(fStack_c - fVar1);
      iVar4 = (**(code **)(*param_1 + 800))(0x3d888889);
      if (iVar4 != 0) {
        param_1[0x504] = 8;
        return;
      }
    }
    break;
  case 6:
    FUN_00aa4080(0x1e,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x504] = param_1[0x504] + 1;
  case 7:
    (**(code **)(*param_1 + 0x314))();
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar4 != 0) {
      param_1[0x504] = 8;
      return;
    }
    break;
  case 8:
    (**(code **)(*param_1 + 0x314))();
    FUN_00aa4080(0x1f,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x504] = param_1[0x504] + 1;
  case 9:
    (**(code **)(*param_1 + 0x314))();
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      (**(code **)(*param_1 + 0x314))();
      *param_2 = 1;
      return;
    }
  }
  return;
}

// 00693CF0  FUN_00693cf0  size=598  [callgraph]
void __fastcall FUN_00693cf0(int *param_1)

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
    FUN_0065d590(1);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x42700000;
    goto LAB_00693d9d;
  case 1:
LAB_00693d9d:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 == 0) {
      iVar2 = (**(code **)(*param_1 + 800))(0x3d888889);
      if (iVar2 != 0) {
        FUN_00aa4120(0x2f,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        FUN_00671ed0(0,1);
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
      FUN_00671ed0(0,1);
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_00671fb0(1,0);
      FUN_0066e8e0();
    }
  }
  if ((float)param_1[0x248] <= 0.0) {
    return;
  }
  fVar1 = (float)param_1[0x248] - 1.0;
  param_1[0x248] = (int)fVar1;
  if (fVar1 < 0.0 == (fVar1 == 0.0)) {
    FUN_0068d170(fVar1 * 0.016666668);
    return;
  }
  param_1[0x248] = 0;
  return;
}

// 00693F60  FUN_00693f60  size=738  [callgraph]
void __fastcall FUN_00693f60(int *param_1)

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
    FUN_0065d590(1);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x42700000;
    goto LAB_0069400c;
  case 1:
LAB_0069400c:
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
      if (param_1[0x554] < 3) {
        uVar3 = 0x2b;
      }
      else {
        uVar3 = 0x86;
      }
      FUN_00aa4080(uVar3,0,0x3ecccccd,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x248] = (int)((float)param_1[0x585] * 60.0);
    }
    break;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x248];
    if ((!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) &&
       (fVar1 = (float)param_1[0x248], param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]),
       fVar1 - (float)param_1[0x244] < 0.0)) {
      FUN_00671ed0(0,1);
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
      FUN_00671fb0(1,0);
      FUN_0066e8e0();
    }
  }
  if ((float)param_1[0x248] <= 0.0) {
    return;
  }
  fVar1 = (float)param_1[0x248] - 1.0;
  param_1[0x248] = (int)fVar1;
  if (fVar1 < 0.0 == (fVar1 == 0.0)) {
    FUN_0068d170(fVar1 * 0.016666668);
    return;
  }
  param_1[0x248] = 0;
  return;
}

// 00694260  Em8060::vf33C  size=147  [class]
void __fastcall Em8060::vf33C(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1930);
  if (iVar1 != 0) {
    if (((*(int *)(param_1 + 0x1940) != 0) && (*(int *)(param_1 + 0x1950) != 0)) &&
       (*(int *)(param_1 + 0x1960) != 0)) {
      FUN_0068d3e0();
      return;
    }
    if (iVar1 != 0) {
      return;
    }
  }
  if ((*(int *)(param_1 + 0x1940) != 0) &&
     ((*(int *)(param_1 + 0x1950) != 0 || (*(int *)(param_1 + 0x1960) != 0)))) {
    FUN_0068ea80();
    return;
  }
  if (iVar1 == 0) {
    if (((*(int *)(param_1 + 0x1940) != 0) && (*(int *)(param_1 + 0x1950) == 0)) &&
       (*(int *)(param_1 + 0x1960) == 0)) {
      FUN_0068ea80();
      return;
    }
    if ((*(int *)(param_1 + 0x1940) == 0) &&
       ((*(int *)(param_1 + 0x1950) != 0 || (*(int *)(param_1 + 0x1960) != 0)))) {
      FUN_0068f6d0();
      return;
    }
  }
  return;
}

// 00694300  FUN_00694300  size=971  [between]
void __fastcall FUN_00694300(int *param_1)

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
    uVar2 = FUN_00e00b40(0x28060,puVar6);
    FUN_00a8c930(uVar2,puVar6);
    FUN_00e5e0c0("em0060_se_dmg_faint_spark",param_1,0xffffffff,0);
    FUN_00a8c9b0(0,0,0x3f800000,0);
    FUN_00eaa6e0(0x3f800000,0);
    FUN_0043f5b0(9,0x41200000);
    FUN_0067ce50();
    FUN_00eaa6e0(0x41200000,0);
    FUN_00eaa6e0(0x41200000,0);
    FUN_00eaa6e0(0x41200000,0);
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 == 0) {
switchD_00694320_default:
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
      if (param_1[0x301] == 0) {
        FUN_0067cd40(0x80029,0,0,0,0);
        return;
      }
LAB_006945ab:
      FUN_0067cd40(0xf0008,0,0,0,0);
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
    if (param_1[0x301] == 0) {
      param_1[0x187] = param_1[0x187] + 1;
      FUN_00a8c9b0(0,6,0x3f800000,0);
      piVar5 = param_1 + 0x57c;
      uVar2 = FUN_00a7c8a0(piVar5);
      FUN_004117d0(7,uVar2,piVar5);
      puVar6 = local_160;
      uVar2 = FUN_00e00b40(0x28060,puVar6);
      FUN_00a8c930(uVar2,puVar6);
      FUN_00a85670(param_1,1);
      iVar3 = FUN_00e5e0c0("em0060_se_dmg_exp_death",param_1,0xffffffff,0);
      param_1[0x71d] = iVar3;
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
    }
    goto LAB_006945ab;
  case 6:
    iVar3 = thunk_FUN_00e58ed0(param_1[0x71d]);
    if (iVar3 == 0) {
      FUN_009fdde0();
      return;
    }
  default:
    goto switchD_00694320_default;
  }
  param_1[0x187] = param_1[0x187] + 1;
  return;
}

// 006946F0  Em8060::R0_ExplodeDie  size=901  [class]
void __fastcall Em8060::R0_ExplodeDie(int *param_1)

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
        piVar3 = param_1 + 0x57c;
        uVar2 = FUN_00a7c8a0(piVar3);
        FUN_004117d0(7,uVar2,piVar3);
        puVar5 = local_160;
        uVar2 = FUN_00e00b40(0x28060,puVar5);
        FUN_00a8c930(uVar2,puVar5);
        param_1[0x1af] = 1;
        FUN_00a85670(param_1,1);
        iVar1 = FUN_00e5e0c0("em0060_se_dmg_exp_death",param_1,0xffffffff,0);
        param_1[0x71d] = iVar1;
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
      if (param_1[0x709] != 0) {
        iVar1 = FUN_00a81330();
        if (iVar1 == 0) {
          FUN_00dd5650(&DAT_01647070);
          FUN_0068cd90();
          iVar1 = FUN_00a81330();
          if (iVar1 != 0) {
            piVar3 = (int *)FUN_00a7c8a0();
            if (piVar3 != (int *)0x0) {
              piVar3[0x1bb] = 1;
              FUN_00a8caf0(0x62,0,0,0);
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
            FUN_00a8caf0(0x62,0,0,0);
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
    iVar1 = thunk_FUN_00e58ed0(param_1[0x71d]);
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

// 00694A80  FUN_00694a80  size=71  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00694a80(int param_1)

{
  if ((*(int *)(*(int *)(param_1 + 0x78) + 4) != 0) && (*(int *)(*(int *)(param_1 + 0x78) + 8) != 0)
     ) {
    FUN_00690e80();
    FUN_00687a80();
    FUN_00687c60();
    FUN_00690f50();
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(float *)(param_1 + 0xa0) = *(float *)(param_1 + 0xa0) - _DAT_01be942c;
  }
  return;
}

// 00694AD0  FUN_00694ad0  size=153  [callgraph]
undefined4 __fastcall FUN_00694ad0(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_4;
  
  local_4 = *(undefined4 *)(param_1 + 0x4f0);
  iVar2 = FUN_00690dd0(&local_4);
  if ((iVar2 == 1) && (*(float *)(param_1 + 0x1c4c) <= 0.0)) {
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

// 00694B70  FUN_00694b70  size=1931  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00694f84) */
/* WARNING: Removing unreachable block (ram,0x00694e5c) */
/* WARNING: Removing unreachable block (ram,0x00694f20) */
/* WARNING: Removing unreachable block (ram,0x0069507d) */

undefined4 __fastcall FUN_00694b70(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint local_4;
  
  local_4 = *(uint *)(param_1 + 0x4f0);
  iVar2 = FUN_00690dd0(&local_4);
  if (iVar2 == 1) {
    fVar1 = *(float *)(param_1 + 0xaa0);
    if (!NAN(fVar1) && 0.6981317 < fVar1 != (fVar1 == 0.6981317)) {
      if (0.6981317 < *(float *)(param_1 + 0xa9c)) {
        iVar6 = 0x10006;
        if (*(int *)(param_1 + 0xe98) != 0x10006) {
LAB_0069518a:
          *(int *)(param_1 + 0xe98) = iVar6;
          uVar4 = FUN_00a8cab0();
          *(undefined4 *)(param_1 + 0xea4) = uVar4;
          *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
          goto LAB_00694c42;
        }
        goto LAB_0069521d;
      }
      if (2.0943952 < *(float *)(param_1 + 0xa9c)) {
        iVar2 = 0x10008;
        if (*(int *)(param_1 + 0xe98) == 0x10008) goto LAB_0069521d;
        goto LAB_00694d2a;
      }
      if (-2.0943952 <= *(float *)(param_1 + 0xa9c)) {
        iVar6 = 0x10005;
        if (*(int *)(param_1 + 0xe98) != 0x10005) goto LAB_0069518a;
        iVar2 = 0x10001;
        goto LAB_00694d2a;
      }
      iVar2 = 0x10007;
      if (*(int *)(param_1 + 0xe98) == 0x10007) goto LAB_0069521d;
LAB_00694e02:
      *(int *)(param_1 + 0xe98) = iVar2;
      uVar4 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xea4) = uVar4;
      *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
      iVar6 = iVar2;
      goto LAB_00694c42;
    }
LAB_0069521d:
    fVar1 = *(float *)(param_1 + 0x1c4c);
    if (((!NAN(fVar1) && 120.0 < fVar1 != (fVar1 == 120.0)) && (*(int *)(param_1 + 0xa84) != 0)) &&
       (iVar2 = FUN_006888b0(), iVar2 != 0)) {
      return 1;
    }
    if (*(float *)(param_1 + 0xa90) <= 225.0) {
      if (100.0 <= *(float *)(param_1 + 0xa90)) {
        return 0;
      }
      iVar2 = 0x10002;
LAB_006952e7:
      if (*(int *)(param_1 + 0xe98) == iVar2) {
        return 0;
      }
    }
    else {
      if ((((*(uint *)(param_1 + 0xd44) & 0x2000000) == 0) && (iVar2 = FUN_00aa4a90(), iVar2 != 0))
         && (iVar2 = 0xa0001, *(int *)(param_1 + 0xe98) != 0xa0001)) {
LAB_0069500e:
        *(int *)(param_1 + 0xe98) = iVar2;
        uVar4 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xea4) = uVar4;
        *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
        iVar6 = iVar2;
        goto LAB_00694c42;
      }
      if (*(float *)(param_1 + 0xa90) <= 625.0) {
        iVar2 = 0xa0002;
        if (*(int *)(param_1 + 0xe98) != 0xa0002) goto LAB_0069500e;
        iVar2 = 0xa0003;
LAB_0069510b:
        *(int *)(param_1 + 0xe98) = iVar2;
        uVar4 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xea4) = uVar4;
        *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
        iVar6 = iVar2;
        goto LAB_00694c42;
      }
      iVar2 = 0xa0003;
      if (*(int *)(param_1 + 0xe98) != 0xa0003) goto LAB_0069510b;
      iVar2 = 0xa0002;
    }
LAB_00694fd6:
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
      FUN_00691a10(1);
      return 0;
    }
    iVar6 = 0x10004;
    fVar1 = *(float *)(param_1 + 6000);
    iVar2 = 0x10003;
    if (((NAN(fVar1) || 120.0 < fVar1 == (fVar1 == 120.0)) || (*(float *)(param_1 + 0xa90) <= 36.0))
       || (0.5235988 <= *(float *)(param_1 + 0xaa0))) {
LAB_00694c75:
      fVar1 = *(float *)(param_1 + 6000);
      if (((NAN(fVar1) || 60.0 < fVar1 == (fVar1 == 60.0)) || (*(float *)(param_1 + 0xa90) <= 225.0)
          ) || (1.0471976 <= *(float *)(param_1 + 0xaa0))) {
LAB_00694cf3:
        fVar1 = *(float *)(param_1 + 0xaa0);
        if (NAN(fVar1) || 0.7853982 < fVar1 == (fVar1 == 0.7853982)) {
LAB_00694e33:
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
              goto LAB_00694c42;
            }
            if (*(int *)(param_1 + 0xe98) != 0x10003) goto LAB_00694e02;
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
              if (((uVar5 & 1) == 0) || (*(int *)(param_1 + 0x1b6c) == 0)) {
                if (*(int *)(param_1 + 0x1b70) == 0) {
                  if ((*(int *)(param_1 + 0x1b6c) != 0) && (*(int *)(param_1 + 0xe98) != 0x1000d))
                  goto LAB_0069510b;
                }
                else if (*(int *)(param_1 + 0xe98) != 0x1000d) goto LAB_0069500e;
              }
              else if (*(int *)(param_1 + 0xe98) != 0x1000d) goto LAB_00694fd6;
            }
            DAT_01dd0814 = DAT_01dd0814 * 0x19660d + 0x3c6ef35f;
            local_4 = DAT_01dd0814 >> 8;
            fVar1 = (1.0 - (float)local_4 * 5.960465e-08 * 2.0) + 3.0;
            if (fVar1 * fVar1 <= *(float *)(param_1 + 0xa90)) {
              return 0;
            }
            if ((*(int *)(param_1 + 0x1b68) != 0) &&
               (iVar6 = 0x1000f, *(int *)(param_1 + 0xe98) != 0x1000f)) {
              *(undefined4 *)(param_1 + 0xe98) = 0x1000f;
              uVar4 = FUN_00a8cab0();
              *(undefined4 *)(param_1 + 0xea4) = uVar4;
              *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
              goto LAB_00694c42;
            }
            uVar5 = FUN_00dde2d0(1,100);
            if (((uVar5 & 1) == 0) || (*(int *)(param_1 + 0x1b6c) == 0)) {
              if (*(int *)(param_1 + 0x1b70) != 0) {
                if (*(int *)(param_1 + 0xe98) == 0x1000d) {
                  return 0;
                }
                goto LAB_0069510b;
              }
              if (*(int *)(param_1 + 0x1b6c) != 0) goto LAB_006952e7;
              iVar2 = 0x10002;
            }
            if (*(int *)(param_1 + 0xe98) == iVar2) {
              return 0;
            }
            goto LAB_0069500e;
          }
        }
        else {
          if (*(float *)(param_1 + 0xa9c) <= 0.7853982) {
            if (*(float *)(param_1 + 0xa9c) <= 2.0943952) {
              if (-2.0943952 <= *(float *)(param_1 + 0xa9c)) {
                iVar2 = 0x10005;
                if (*(int *)(param_1 + 0xe98) == 0x10005) {
                  iVar2 = 0x10001;
                  goto LAB_00694e02;
                }
                goto LAB_00694d2a;
              }
              iVar2 = 0x10007;
              if (*(int *)(param_1 + 0xe98) != 0x10007) goto LAB_00694dc0;
            }
            else if (*(int *)(param_1 + 0xe98) != 0x10008) {
              *(undefined4 *)(param_1 + 0xe98) = 0x10008;
              uVar4 = FUN_00a8cab0();
              *(undefined4 *)(param_1 + 0xea4) = uVar4;
              *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
              iVar6 = 0x10008;
              goto LAB_00694c42;
            }
            goto LAB_00694e33;
          }
          iVar2 = 0x10006;
          if (*(int *)(param_1 + 0xe98) == 0x10006) goto LAB_00694e33;
        }
LAB_00694d2a:
        *(int *)(param_1 + 0xe98) = iVar2;
        uVar4 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xea4) = uVar4;
        *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
        iVar6 = iVar2;
        goto LAB_00694c42;
      }
      if ((((*(uint *)(param_1 + 0xd44) & 0x2000000) != 0) || (iVar3 = FUN_00aa4a90(), iVar3 == 0))
         || (*(int *)(param_1 + 0xe98) == 0x10004)) {
        if (*(int *)(param_1 + 0xe98) == 0x10003) goto LAB_00694cf3;
LAB_00694dc0:
        *(int *)(param_1 + 0xe98) = iVar2;
        uVar4 = FUN_00a8cab0();
        *(undefined4 *)(param_1 + 0xea4) = uVar4;
        *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
        iVar6 = iVar2;
        goto LAB_00694c42;
      }
      *(undefined4 *)(param_1 + 0xe98) = 0x10004;
      uVar4 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
    }
    else {
      if ((((*(uint *)(param_1 + 0xd44) & 0x2000000) != 0) || (iVar3 = FUN_00aa4a90(), iVar3 == 0))
         || (*(int *)(param_1 + 0xe98) == 0x10004)) {
        if (*(int *)(param_1 + 0xe98) != 0x10003) goto LAB_00694d2a;
        goto LAB_00694c75;
      }
      *(undefined4 *)(param_1 + 0xe98) = 0x10004;
      uVar4 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
    }
    *(undefined4 *)(param_1 + 0xea4) = uVar4;
  }
LAB_00694c42:
  FUN_00a8caf0(iVar6,0,0,0);
  *(undefined4 *)(param_1 + 0xea0) = 0;
  FUN_00a962d0(0,0);
  *(undefined4 *)(param_1 + 0x139c) = 0;
  return 1;
}

// 00695300  FUN_00695300  size=592  [callgraph]
undefined4 __fastcall FUN_00695300(int param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 local_4;
  
  local_4 = *(undefined4 *)(param_1 + 0x4f0);
  iVar2 = FUN_00690dd0(&local_4);
  if (((iVar2 == 1) || (iVar2 != 2)) || (25.0 <= *(float *)(param_1 + 0xa90))) {
    return 0;
  }
  if ((*(int *)(param_1 + 0xeb4) == 0) && (uVar3 = FUN_00dde2d0(1,100), (uVar3 & 3) == 0)) {
    return 0;
  }
  if (*(float *)(param_1 + 0xaa0) <= 0.7853982) {
    sVar1 = FUN_00dde2d0(0,4);
    iVar2 = (int)sVar1;
    if ((*(int *)(&DAT_016470b4 + iVar2 * 4) == 0x5000d) &&
       (iVar5 = FUN_00688510(*(undefined4 *)(param_1 + 0x1abc)), iVar5 == 0)) {
      sVar1 = FUN_00dde2d0(0,3);
      iVar2 = (int)sVar1;
    }
    iVar2 = FUN_00688730(*(undefined4 *)(&DAT_016470b4 + iVar2 * 4));
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
      goto LAB_006954c7;
    }
    if ((*(float *)(param_1 + 0xaa0) <= 2.3561945) ||
       (uVar6 = 0x50006, *(int *)(param_1 + 0xe94) == 0x50006)) {
      uVar6 = 0x50004;
      if (*(int *)(param_1 + 0xe94) == 0x50004) {
        return 0;
      }
      goto LAB_00695480;
    }
    *(undefined4 *)(param_1 + 0xe94) = 0x50006;
    FUN_00c27260(0x40a00000);
    FUN_00c272a0(0x40a00000);
    uVar4 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
  }
  else {
LAB_00695480:
    *(undefined4 *)(param_1 + 0xe94) = uVar6;
    FUN_00c27260(0x40a00000);
    FUN_00c272a0(0x40a00000);
    uVar4 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
  }
  *(undefined4 *)(param_1 + 0xea4) = uVar4;
LAB_006954c7:
  FUN_00a8caf0(uVar6,0,0,0);
  *(undefined4 *)(param_1 + 0xea0) = 0;
  FUN_00a962d0(0,0);
  *(undefined4 *)(param_1 + 0x139c) = 0;
  return 1;
}

// 00695550  FUN_00695550  size=941  [callgraph]
undefined4 __fastcall FUN_00695550(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float10 fVar5;
  float local_4;
  
  local_4 = *(float *)(param_1 + 0x4f0);
  iVar1 = FUN_00690dd0(&local_4);
  if (iVar1 == 1) {
    if (0.0 < *(float *)(param_1 + 0x1c4c)) {
      return 0;
    }
    iVar1 = FUN_00ac4780();
    if (iVar1 < 2) {
      return 0;
    }
    uVar2 = FUN_00dde2d0(1,100);
    if (((uVar2 & 1) != 0) && (iVar1 = FUN_00688510(*(undefined4 *)(param_1 + 0x1abc)), iVar1 != 0))
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
      goto LAB_00695684;
    }
    if (*(int *)(param_1 + 0x4a0) != 1) goto LAB_006957d4;
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
    if (0.0 < *(float *)(param_1 + 0x1c4c)) {
      return 0;
    }
    local_4 = 0.8;
    if (*(int *)(param_1 + 0x4a0) == 1) {
      local_4 = 0.5;
    }
    if ((((0.0 < *(float *)(param_1 + 0xec8)) || (64.0 <= *(float *)(param_1 + 0xa90))) ||
        (fVar5 = (float10)FUN_00dde300(0,0x3f800000), (float10)local_4 <= fVar5)) ||
       (iVar1 = FUN_00688510(*(undefined4 *)(param_1 + 0x1abc)), iVar1 == 0)) {
LAB_0069572e:
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
LAB_006957d4:
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
        goto LAB_0069572e;
      }
      uVar4 = 0x5000c;
      if (*(int *)(param_1 + 0xe94) == 0x5000c) goto LAB_0069572e;
    }
    *(undefined4 *)(param_1 + 0xe94) = uVar4;
    FUN_00c27260(0x40a00000);
    FUN_00c272a0(0x40a00000);
    uVar3 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
  }
  *(undefined4 *)(param_1 + 0xea4) = uVar3;
LAB_00695684:
  FUN_00a8caf0(uVar4,0,0,0);
  *(undefined4 *)(param_1 + 0xea0) = 0;
  FUN_00a962d0(0,0);
  *(undefined4 *)(param_1 + 0x139c) = 0;
  return 1;
}

// 00695900  FUN_00695900  size=118  [callgraph]
undefined4 __fastcall FUN_00695900(int param_1)

{
  int iVar1;
  undefined4 local_4;
  
  local_4 = *(undefined4 *)(param_1 + 0x4f0);
  iVar1 = FUN_00690dd0(&local_4);
  if (iVar1 != 2) {
    return 0;
  }
  if (((float)*(int *)(param_1 + 0x1b40) <=
       *(float *)(param_1 + 0x1a40 + *(int *)(param_1 + 0xeb4) * 4)) &&
     ((float)*(int *)(param_1 + 0x1b44) <=
      *(float *)(param_1 + 0x1a48 + *(int *)(param_1 + 0xeb4) * 4))) {
    iVar1 = FUN_00695300();
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x1b40) = *(int *)(param_1 + 0x1b40) + 1;
      return 1;
    }
  }
  return 0;
}

// 00695980  FUN_00695980  size=75  [callgraph]
undefined4 __fastcall FUN_00695980(int param_1)

{
  int iVar1;
  
  if (((float)*(int *)(param_1 + 0x1b40) <=
       *(float *)(param_1 + 0x1a40 + *(int *)(param_1 + 0xeb4) * 4)) &&
     ((float)*(int *)(param_1 + 0x1b44) <=
      *(float *)(param_1 + 0x1a48 + *(int *)(param_1 + 0xeb4) * 4))) {
    iVar1 = FUN_00694b70();
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x1b44) = *(int *)(param_1 + 0x1b44) + 1;
      return 1;
    }
  }
  return 0;
}

// 006959D0  FUN_006959d0  size=1072  [callgraph]
void __fastcall FUN_006959d0(int param_1)

{
  int iVar1;
  float10 fVar2;
  int local_4;
  
  local_4 = param_1;
  if (0.0 < *(float *)(param_1 + 0x1b10)) {
    fVar2 = (float10)FUN_00e049b0();
    fVar2 = (float10)*(float *)(param_1 + 0x1b10) - fVar2;
    *(float *)(param_1 + 0x1b10) = (float)fVar2;
    if ((float10)0 < fVar2) {
      if (*(int *)(param_1 + 0x1af4) <= *(int *)(param_1 + 0x19d0 + *(int *)(param_1 + 0xeb4) * 4))
      goto LAB_00695a37;
      *(undefined4 *)(param_1 + 0x1ad8) = 1;
    }
    else {
      *(float *)(param_1 + 0x1b10) = (float)(float10)0;
    }
    *(undefined4 *)(param_1 + 0x1af4) = 0;
  }
LAB_00695a37:
  if (0.0 < *(float *)(param_1 + 0x1b3c)) {
    fVar2 = (float10)FUN_00e049b0();
    fVar2 = (float10)*(float *)(param_1 + 0x1b3c) - fVar2;
    *(float *)(param_1 + 0x1b3c) = (float)fVar2;
    if (fVar2 <= (float10)0) {
      *(float *)(param_1 + 0x1b3c) = (float)(float10)0;
    }
  }
  if (0.0 < *(float *)(param_1 + 0x1b14)) {
    fVar2 = (float10)FUN_00e049b0();
    fVar2 = (float10)*(float *)(param_1 + 0x1b14) - fVar2;
    *(float *)(param_1 + 0x1b14) = (float)fVar2;
    if ((float10)0 < fVar2) {
      if (*(int *)(param_1 + 0x1af8) <= *(int *)(param_1 + 0x19e0 + *(int *)(param_1 + 0xeb4) * 4))
      goto LAB_00695aca;
      *(undefined4 *)(param_1 + 0x1adc) = 1;
    }
    else {
      *(float *)(param_1 + 0x1b14) = (float)(float10)0;
    }
    *(undefined4 *)(param_1 + 0x1af8) = 0;
  }
LAB_00695aca:
  if (0.0 < *(float *)(param_1 + 0x1b18)) {
    fVar2 = (float10)FUN_00e049b0();
    fVar2 = (float10)*(float *)(param_1 + 0x1b18) - fVar2;
    *(float *)(param_1 + 0x1b18) = (float)fVar2;
    if ((float10)0 < fVar2) {
      if (*(int *)(param_1 + 0x1afc) <= *(int *)(param_1 + 0x19c0)) goto LAB_00695b1e;
      *(undefined4 *)(param_1 + 0x1ae0) = 1;
    }
    else {
      *(float *)(param_1 + 0x1b18) = (float)(float10)0;
    }
    *(undefined4 *)(param_1 + 0x1afc) = 0;
  }
LAB_00695b1e:
  if (0.0 < *(float *)(param_1 + 0x1b1c)) {
    fVar2 = (float10)FUN_00e049b0();
    fVar2 = (float10)*(float *)(param_1 + 0x1b1c) - fVar2;
    *(float *)(param_1 + 0x1b1c) = (float)fVar2;
    if ((float10)0 < fVar2) {
      if (*(int *)(param_1 + 0x1b00) <= *(int *)(param_1 + 0x19f0 + *(int *)(param_1 + 0xeb4) * 4))
      goto LAB_00695b79;
      *(undefined4 *)(param_1 + 0x1ae4) = 1;
    }
    else {
      *(float *)(param_1 + 0x1b1c) = (float)(float10)0;
    }
    *(undefined4 *)(param_1 + 0x1b00) = 0;
  }
LAB_00695b79:
  if (0.0 < *(float *)(param_1 + 0x1b20)) {
    fVar2 = (float10)FUN_00e049b0();
    fVar2 = (float10)*(float *)(param_1 + 0x1b20) - fVar2;
    *(float *)(param_1 + 0x1b20) = (float)fVar2;
    if ((float10)0 < fVar2) {
      if (*(int *)(param_1 + 0x1b04) <= *(int *)(param_1 + 0x1a00 + *(int *)(param_1 + 0xeb4) * 4))
      goto LAB_00695bd4;
      *(undefined4 *)(param_1 + 0x1ae8) = 1;
    }
    else {
      *(float *)(param_1 + 0x1b20) = (float)(float10)0;
    }
    *(undefined4 *)(param_1 + 0x1b04) = 0;
  }
LAB_00695bd4:
  if (0.0 < *(float *)(param_1 + 0x1b24)) {
    fVar2 = (float10)FUN_00e049b0();
    fVar2 = (float10)*(float *)(param_1 + 0x1b24) - fVar2;
    *(float *)(param_1 + 0x1b24) = (float)fVar2;
    if ((float10)0 < fVar2) {
      if (*(int *)(param_1 + 0x1b08) <= *(int *)(param_1 + 0x1a10 + *(int *)(param_1 + 0xeb4) * 4))
      goto LAB_00695c2f;
      *(undefined4 *)(param_1 + 0x1aec) = 1;
    }
    else {
      *(float *)(param_1 + 0x1b24) = (float)(float10)0;
    }
    *(undefined4 *)(param_1 + 0x1b08) = 0;
  }
LAB_00695c2f:
  if (0.0 < *(float *)(param_1 + 0x1b28)) {
    fVar2 = (float10)FUN_00e049b0();
    fVar2 = (float10)*(float *)(param_1 + 0x1b28) - fVar2;
    *(float *)(param_1 + 0x1b28) = (float)fVar2;
    if ((float10)0 < fVar2) {
      if (*(int *)(param_1 + 0x1b0c) <= *(int *)(param_1 + 0x1a20 + *(int *)(param_1 + 0xeb4) * 4))
      goto LAB_00695c8a;
      *(undefined4 *)(param_1 + 0x1af0) = 1;
    }
    else {
      *(float *)(param_1 + 0x1b28) = (float)(float10)0;
    }
    *(undefined4 *)(param_1 + 0x1b0c) = 0;
  }
LAB_00695c8a:
  if (0.0 < *(float *)(param_1 + 0x1b2c)) {
    fVar2 = (float10)FUN_00e049b0();
    fVar2 = (float10)*(float *)(param_1 + 0x1b2c) - fVar2;
    *(float *)(param_1 + 0x1b2c) = (float)fVar2;
    if (fVar2 <= (float10)0) {
      *(float *)(param_1 + 0x1b2c) = (float)(float10)0;
    }
  }
  if (0.0 < *(float *)(param_1 + 0x1b34)) {
    fVar2 = (float10)FUN_00e049b0();
    fVar2 = (float10)*(float *)(param_1 + 0x1b34) - fVar2;
    *(float *)(param_1 + 0x1b34) = (float)fVar2;
    if ((float10)0 < fVar2) {
      if (*(int *)(param_1 + 0x1b38) <= *(int *)(param_1 + 0x1a58 + *(int *)(param_1 + 0xeb4) * 4))
      goto LAB_00695d1d;
      *(undefined4 *)(param_1 + 0x1b30) = 1;
    }
    else {
      *(float *)(param_1 + 0x1b34) = (float)(float10)0;
    }
    *(undefined4 *)(param_1 + 0x1b38) = 0;
  }
LAB_00695d1d:
  if (*(int *)(param_1 + 0x1acc) != 0) {
    return;
  }
  if (*(int *)(param_1 + 0x1ac8) != 0) {
    return;
  }
  if (*(float *)(param_1 + 0x19cc) <= *(float *)(param_1 + 0x1ad4)) {
    return;
  }
  fVar2 = (float10)FUN_00e049b0();
  local_4 = *(int *)(param_1 + 0x4f0);
  *(float *)(param_1 + 0x1ad4) = (float)(fVar2 + (float10)*(float *)(param_1 + 0x1ad4));
  iVar1 = FUN_00690dd0(&local_4);
  if (iVar1 != 2) {
    local_4 = *(int *)(param_1 + 0x4f0);
    iVar1 = FUN_00690d70(&local_4);
    if (((iVar1 != 0xb) && (iVar1 = FUN_00691a60(), iVar1 != 2)) && (*(int *)(param_1 + 0xeb4) == 0)
       ) goto LAB_00695dba;
  }
  *(undefined4 *)(param_1 + 0x1ad4) = 0;
LAB_00695dba:
  if (*(float *)(param_1 + 0x19cc) < *(float *)(param_1 + 0x1ad4)) {
    *(undefined4 *)(param_1 + 0x1ad4) = 0;
    *(undefined4 *)(param_1 + 0x1acc) = 1;
    if (*(int *)(param_1 + 0x19c8) < *(int *)(param_1 + 0x1ad0)) {
      *(undefined4 *)(param_1 + 0x1acc) = 0;
      *(undefined4 *)(param_1 + 0x1ac8) = 1;
      *(undefined4 *)(param_1 + 0x1ad0) = 0;
    }
  }
  return;
}

// 00695E00  FUN_00695e00  size=595  [callgraph]
void __fastcall FUN_00695e00(int *param_1)

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
    param_1[0x50e] = param_1[0x50e] ^ 0x8000000;
    FUN_00aa4080(0x33,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
    param_1[0x5d6] = 0;
    FUN_00a8d280();
  }
  else if (param_1[0x187] != 1) goto LAB_00695edc;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar5 = FUN_00a94ce0(0);
  if (iVar5 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    sVar4 = FUN_00dde2d0(1,3);
    piStack_4 = (int *)(int)sVar4;
    param_1[0x5d9] = (int)((float)(int)piStack_4 * 60.0);
    if (param_1[0x3ad] != 0) {
      param_1[0x5d9] = 0x41f00000;
    }
  }
LAB_00695edc:
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
  if ((iVar5 != 0) && (param_1[0x3ad] != 0)) {
    piStack_4 = (int *)param_1[0x13c];
    iVar5 = FUN_00690dd0(&piStack_4);
    if (iVar5 == 0) {
      sVar4 = FUN_00dde2d0(0,2);
      if (sVar4 != 0) {
        FUN_00684170();
      }
      sVar4 = FUN_00dde2d0(0,1);
      if (sVar4 != 0) {
        FUN_00693440();
        return;
      }
    }
  }
  return;
}

// 00696060  FUN_00696060  size=891  [callgraph]
void __fastcall FUN_00696060(int *param_1)

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
    param_1[0x50e] = param_1[0x50e] ^ 0x8000000;
    FUN_00aa4080(0x34,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
    param_1[0x5d6] = 0;
    FUN_00a8d280();
  }
  else if (param_1[0x187] != 1) goto LAB_00696087;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar5 = FUN_00a94ce0(0);
  if (iVar5 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    sVar4 = FUN_00dde2d0(1,3);
    param_1[0x5d9] = (int)((float)(int)sVar4 * 60.0);
    if (param_1[0x3ad] != 0) {
      param_1[0x5d9] = 0x41f00000;
    }
    piStack_4 = (int *)param_1[0x13c];
    iVar5 = FUN_00690dd0(&piStack_4);
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
        FUN_0067cd40(0x50005,0,0,0,0);
      }
      if (2.0943952 < (float)param_1[0x2a8]) {
        FUN_0067cd40(0x50006,0,0,0,0);
      }
      sVar4 = FUN_00dde2d0(0,3);
      if (sVar4 != 1) {
        return;
      }
      FUN_0067cd40(0x50007,0,0,0,0);
      return;
    }
  }
LAB_00696087:
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
         (int)((*(float *)(param_1[0x2a1] + 0x40) - *(float *)(iVar5 + 0x40)) * 0.01 +
              (float)param_1[0x14]);
    param_1[0x16] = (int)((fVar1 - fVar2) * 0.01 + (float)param_1[0x16]);
    (*pcVar3)(0x3f000000,0x393702d3,0x3e32b8c2,0);
  }
  piStack_4 = (int *)param_1[0x13c];
  iVar5 = FUN_00690dd0(&piStack_4);
  if (((iVar5 == 0) && (iVar5 = FUN_00a8c760(4), iVar5 != 0)) && (param_1[0x3ad] != 0)) {
    sVar4 = FUN_00dde2d0(0,2);
    if (sVar4 != 0) {
      FUN_00684170();
    }
    sVar4 = FUN_00dde2d0(0,1);
    if (sVar4 != 0) {
      FUN_00693440();
      return;
    }
  }
  return;
}

// 006963E0  FUN_006963e0  size=511  [callgraph]
void __fastcall FUN_006963e0(int *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int *local_4;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  local_4 = param_1;
  if (param_1[0x187] == 0) {
    param_1[0x50e] = param_1[0x50e] ^ 0x8000000;
    FUN_00aa4080(0x36,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00a8d280();
    param_1[0x5d6] = 0;
    FUN_00a8d280();
  }
  else if (param_1[0x187] != 1) goto LAB_0069652c;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    sVar1 = FUN_00dde2d0(1,3);
    local_4 = (int *)(int)sVar1;
    param_1[0x5d9] = (int)((float)(int)local_4 * 60.0);
    if (param_1[0x3ad] != 0) {
      param_1[0x5d9] = 0x41f00000;
    }
  }
  iVar2 = FUN_00a8c760(10);
  if ((iVar2 != 0) && (param_1[0x5d6] != 0)) {
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
LAB_0069652c:
  iVar2 = FUN_00a8c760(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3db2b8c2,0);
  }
  local_4 = (int *)param_1[0x13c];
  iVar2 = FUN_00690dd0(&local_4);
  if ((((iVar2 == 0) && (param_1[0x5d6] == 0)) && (iVar2 = FUN_00a8c760(4), iVar2 != 0)) &&
     (param_1[0x3ad] != 0)) {
    sVar1 = FUN_00dde2d0(0,2);
    if (sVar1 != 0) {
      FUN_00684170();
    }
    sVar1 = FUN_00dde2d0(0,1);
    if (sVar1 != 0) {
      FUN_00693440();
      return;
    }
  }
  return;
}

// 006965E0  FUN_006965e0  size=482  [callgraph]
void __fastcall FUN_006965e0(int *param_1)

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
    param_1[0x5d6] = 0;
  }
  else if (param_1[0x187] != 1) goto LAB_006966fd;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    sVar1 = FUN_00dde2d0(1,3);
    local_4 = (int)sVar1;
    param_1[0x5d9] = (int)((float)local_4 * 60.0);
    if (param_1[0x3ad] != 0) {
      param_1[0x5d9] = 0x41f00000;
    }
  }
LAB_006966fd:
  iVar2 = FUN_00a8c760(0);
  if ((iVar2 != 0) && (iVar2 = (**(code **)(*(int *)param_1[0x2a1] + 0x228))(), iVar2 != 0)) {
    (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3e8efa35,local_8);
  }
  local_4 = param_1[0x13c];
  iVar2 = FUN_00690dd0(&local_4);
  if (((iVar2 == 0) && (iVar2 = FUN_00a8c760(4), iVar2 != 0)) && (param_1[0x3ad] != 0)) {
    sVar1 = FUN_00dde2d0(0,2);
    if (sVar1 != 0) {
      FUN_00684170();
    }
    sVar1 = FUN_00dde2d0(0,1);
    if (sVar1 != 0) {
      FUN_00693440();
      return;
    }
  }
  return;
}

// 006967D0  FUN_006967d0  size=1659  [callgraph]
void __fastcall FUN_006967d0(int *param_1)

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
    FUN_00687390(&fStack_20,param_1[0x13c]);
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
    param_1[0x500] = (int)(fStack_20 + fVar4 * 2.5);
    param_1[0x501] = (int)(fStack_1c + fVar3 * 2.5);
    param_1[0x502] = (int)(fStack_18 + fVar2 * 2.5);
    param_1[0x503] = (int)(fStack_24 * 2.5 + fStack_14);
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar6 = FUN_00a94ce0(0);
    if (iVar6 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    FUN_00a8e880(param_1 + 0x500);
    FUN_00687850(param_1[0x13c],0x3e99999a,0x393702d3,0x3e8efa35,0);
    return;
  case 2:
    (**(code **)(*param_1 + 0x1d4))(1);
    FUN_00aa4080(0x1d,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00687390(&fStack_20,param_1[0x13c]);
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
    param_1[0x500] = (int)(fStack_20 + fVar4 * 2.5);
    param_1[0x501] = (int)(fStack_1c + fVar3 * 2.5);
    param_1[0x502] = (int)(fStack_18 + fVar2 * 2.5);
    param_1[0x503] = (int)(fStack_24 * 2.5 + fStack_14);
    FUN_00692820(param_1 + 0x4e8,param_1 + 0x10,param_1 + 0x500);
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
    FUN_00a8e880(param_1 + 0x500);
    FUN_00687850(param_1[0x13c],0x3dcccccd,0x393702d3,0x3d8efa35,0);
    return;
  case 4:
    FUN_00aa4080(0x1e,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_00696bd7;
  case 5:
LAB_00696bd7:
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

// 00696EA0  FUN_00696ea0  size=1373  [callgraph]
void __fastcall FUN_00696ea0(int *param_1)

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
      FUN_0067e1c0(&local_40,0x3e800000,0x3dd67750);
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00aa09c0(param_1[0x2a1] + 0x40,0x40200000,1);
    if (iVar3 != 0) {
      iVar3 = FUN_00a8d380();
      if (iVar3 != 0) {
        param_1[0x76e] = 1;
        if (param_1[0x3a6] == 0x10003) {
          return;
        }
        param_1[0x3a6] = 0x10003;
        iVar3 = FUN_00a8cab0();
        param_1[0x3aa] = param_1[0x3a8];
LAB_00696fe5:
        param_1[0x3a9] = iVar3;
        FUN_00a8caf0(0x10003,0,0,0);
        param_1[0x3a8] = 0;
        FUN_00a962d0(0,0);
        param_1[0x4e7] = 0;
        return;
      }
      iVar3 = FUN_006818f0();
      if (iVar3 != 0) {
        FUN_00a979f0(&local_4c);
LAB_0069703a:
        local_30 = local_4c;
        local_2c = local_48;
        local_28 = local_44;
        local_24 = 0x3f800000;
        FUN_0067e280(&local_30);
        param_1[0x187] = 4;
        return;
      }
    }
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
    break;
  case 2:
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
      if (fVar1 - (float)param_1[0x244] <= 0.0) goto LAB_00697131;
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
      FUN_0067e1c0(&local_20,0x3e99999a,0x3e32b8c2);
    }
    local_50 = 0x3fa00000;
    iVar2 = FUN_006818f0();
    iVar3 = local_50;
    if (iVar2 != 0) {
      iVar3 = 0x3f800000;
    }
    iVar3 = FUN_00aa09c0(param_1[0x2a1] + 0x40,iVar3,1);
    if (iVar3 != 0) {
      iVar3 = FUN_00a8d380();
      if (iVar3 != 0) {
        param_1[0x76e] = 1;
        if (param_1[0x3a6] == 0x10003) {
          return;
        }
        param_1[0x3a6] = 0x10003;
        iVar3 = FUN_00a8cab0();
        param_1[0x3aa] = param_1[0x3a8];
        goto LAB_00696fe5;
      }
      iVar3 = FUN_006818f0();
      if (iVar3 != 0) {
        FUN_00a979f0(&local_4c);
        goto LAB_0069703a;
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
    FUN_006938c0(&local_50);
    if (local_50 == 0) {
      return;
    }
    param_1[0x24f] = 0x41c80000;
    FUN_00c70800();
    iVar3 = FUN_006818f0();
    if ((iVar3 == 0) || (iVar3 = FUN_00a8d380(), iVar3 != 0)) {
      param_1[0x187] = 2;
      FUN_00aa4080(0x11,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
      return;
    }
LAB_00697131:
    FUN_00a979f0(&local_4c);
    goto LAB_0069703a;
  }
  return;
}

// 00697420  FUN_00697420  size=1314  [callgraph]
void __fastcall FUN_00697420(int *param_1)

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
    FUN_00687100(&fStack_20,param_1[0x13c]);
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
    param_1[0x500] = (int)(fStack_20 + fVar4 * 2.5);
    param_1[0x501] = (int)(fStack_1c + fVar3 * 2.5);
    param_1[0x502] = (int)(fStack_18 + fVar2 * 2.5);
    param_1[0x503] = (int)(fStack_24 * 2.5 + fStack_14);
    goto LAB_00697570;
  case 1:
LAB_00697570:
    (**(code **)(*param_1 + 0x314))();
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    FUN_00a8e880(param_1 + 0x500);
    FUN_006871c0(param_1[0x13c],0x3e99999a,0x393702d3,0x3e8efa35,0);
    return;
  case 2:
    (**(code **)(*param_1 + 0x1d4))(1);
    FUN_00aa4080(0x1d,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00687100(&fStack_20,param_1[0x13c]);
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
      fVar4 = 0.0;
      fVar3 = 1.0;
    }
    param_1[0x500] = (int)(fStack_20 + fVar4 * 2.5);
    param_1[0x501] = (int)(fStack_1c + fVar3 * 2.5);
    param_1[0x502] = (int)(fStack_18 + fVar2 * 2.5);
    param_1[0x503] = (int)(fStack_24 * 2.5 + fStack_14);
    FUN_00692820(param_1 + 0x4e8,param_1 + 0x10,param_1 + 0x500);
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
    FUN_00a8e880(param_1 + 0x500);
    FUN_006871c0(param_1[0x13c],0x3dcccccd,0x393702d3,0x3d8efa35,0);
    return;
  case 4:
    FUN_00aa4080(0x1e,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 5:
    break;
  default:
    goto switchD_00697448_default;
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
      FUN_0067cd40(0x10013,0,0,0,0);
      return;
    }
  }
switchD_00697448_default:
  return;
}

// 00697960  FUN_00697960  size=256  [callgraph]
void __fastcall FUN_00697960(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0x187];
  if (iVar1 == 0) {
    param_1[0x187] = 1;
    param_1[0x250] = 0;
LAB_0069798e:
    FUN_00aa4080(0x22,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x250] = param_1[0x250] + 1;
  }
  else {
    if (iVar1 == 1) goto LAB_0069798e;
    if (iVar1 != 2) {
      return;
    }
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 == 0) {
    iVar1 = FUN_00a8c760(4);
    if (iVar1 == 0) goto LAB_00697a1f;
  }
  if (param_1[0x250] < 3) {
    param_1[0x187] = 1;
  }
  else {
    (**(code **)(*param_1 + 0x34c))();
    FUN_00691a10(1);
  }
LAB_00697a1f:
  iVar1 = FUN_00a8c760(0);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3d8efa35,0);
  }
  return;
}

// 00697A60  FUN_00697a60  size=1152  [callgraph]
void __fastcall FUN_00697a60(int param_1)

{
  float *pfVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int local_40;
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
    FUN_00aa4120(8,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    FUN_00a8d710(param_1 + 0x40);
    return;
  case 1:
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      FUN_00aa4080(9,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    }
  case 2:
    FUN_00a8d790(&local_3c);
    cVar3 = FUN_00c9db20(0);
    fVar2 = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0x910);
    if (cVar3 != '\0') {
      fVar2 = 4.0;
    }
    iVar4 = FUN_00a97e60(fVar2,1);
    if (iVar4 != 0) {
      if (cVar3 != '\0') {
        *(undefined4 *)(param_1 + 0x61c) = 3;
      }
      cVar3 = FUN_00c9db60(1);
      if (cVar3 != '\0') {
        FUN_00a8d790(&local_3c);
        local_30 = local_3c;
        local_2c = local_38;
        local_28 = local_34;
        local_24 = 0x3f800000;
        FUN_0067e280(&local_30);
        *(undefined4 *)(param_1 + 0x61c) = 5;
        return;
      }
    }
    local_20 = local_3c;
    local_1c = local_38;
    local_18 = local_34;
    local_14 = 0x3f800000;
    FUN_0067e1c0(&local_20,0x3dcccccd,*(float *)(param_1 + 0x910) * 0.027925268);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a8c760(0x30);
    if (iVar4 == 0) {
      iVar4 = FUN_00a8c760(0x31);
      if (iVar4 == 0) {
        iVar4 = FUN_00a94db0(8);
        if (iVar4 == 0) {
          return;
        }
        FUN_00aa4080(9,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
        return;
      }
      uVar5 = 10;
    }
    else {
      uVar5 = 0xb;
    }
    FUN_00aa4080(uVar5,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x920) = 0x43f00000;
    return;
  case 4:
    iVar4 = FUN_00a9f760(5);
    if (iVar4 != 0) {
      *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94db0(10);
    if ((iVar4 != 0) || (iVar4 = FUN_00a94db0(0xb), iVar4 != 0)) {
      FUN_00aa4080(5,0,0x3daaaaab,0x3f800000,0,0xbf800000,0x3f800000);
    }
    if (240.0 <= *(float *)(param_1 + 0x920)) {
      if (*(float *)(param_1 + 0x920) < 420.0) {
        pfVar1 = (float *)(param_1 + 0x1cc0);
        *pfVar1 = -5.0;
        *(undefined4 *)(param_1 + 0x1cc4) = 0x3f4ccccd;
        *(undefined4 *)(param_1 + 0x1cc8) = 0x40a00000;
        D3DXVec3TransformNormal(pfVar1,pfVar1,param_1 + 0x10);
        fVar2 = *(float *)(param_1 + 0x40) + *pfVar1;
        goto LAB_00697df8;
      }
    }
    else {
      pfVar1 = (float *)(param_1 + 0x1cc0);
      *pfVar1 = 5.0;
      *(undefined4 *)(param_1 + 0x1cc4) = 0x3f4ccccd;
      *(undefined4 *)(param_1 + 0x1cc8) = 0x40a00000;
      D3DXVec3TransformNormal(pfVar1,pfVar1,param_1 + 0x10);
      fVar2 = *pfVar1 + *(float *)(param_1 + 0x40);
LAB_00697df8:
      *(float *)(param_1 + 0x1cc0) = fVar2;
      *(float *)(param_1 + 0x1cc4) = *(float *)(param_1 + 0x44) + *(float *)(param_1 + 0x1cc4);
      *(float *)(param_1 + 0x1cc8) = *(float *)(param_1 + 0x48) + *(float *)(param_1 + 0x1cc8);
      *(undefined4 *)(param_1 + 0x1db0) = 1;
    }
    if (*(float *)(param_1 + 0x920) <= 0.0) {
      FUN_00aa4120(8,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      *(undefined4 *)(param_1 + 0x1da4) = 0x3cd67750;
      *(undefined4 *)(param_1 + 0x61c) = 1;
      *(undefined4 *)(param_1 + 0x1da0) = 0x3da3d70a;
      return;
    }
    break;
  case 5:
    local_40 = 0;
    FUN_006938c0(&local_40);
    if (local_40 != 0) {
      *(undefined4 *)(param_1 + 0x61c) = 1;
      FUN_00aa4120(8,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
  }
  return;
}

// 00697F00  FUN_00697f00  size=95  [callgraph]
void __fastcall FUN_00697f00(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    iVar1 = FUN_00a9f760(0x11);
    if (iVar1 != 0) {
      param_1[0x187] = 3;
    }
  }
  else if (iVar1 == 5) {
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00697f3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    return;
  }
  FUN_00692030();
  return;
}

// 00697F60  FUN_00697f60  size=1326  [callgraph]
void __fastcall FUN_00697f60(int *param_1)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
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
    iVar4 = FUN_00a9f760(0x11);
    if (iVar4 != 0) {
      param_1[0x187] = 2;
      return;
    }
    param_1[0x24f] = 0x41c80000;
    FUN_00aa4080(0x10,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    iVar4 = FUN_00a979f0(&local_4c);
    if (iVar4 != 0) {
      local_40 = local_4c;
      local_3c = local_48;
      local_38 = local_44;
      local_34 = 0x3f800000;
      FUN_0067e1c0(&local_40,0x3e800000,0x3dd67750);
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00aa09c0(param_1[0x2a1] + 0x40,0x40200000,1);
    if (iVar4 != 0) {
      iVar4 = FUN_00a8d380();
      if (iVar4 != 0) {
        pcVar2 = *(code **)(*param_1 + 0x34c);
        param_1[0x76e] = 1;
        (*pcVar2)();
        return;
      }
      iVar4 = FUN_006818f0();
      if (iVar4 != 0) {
        FUN_00a979f0(&local_4c);
LAB_006980bd:
        local_30 = local_4c;
        local_2c = local_48;
        local_28 = local_44;
        local_24 = 0x3f800000;
        FUN_0067e280(&local_30);
        param_1[0x187] = 3;
        return;
      }
    }
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      FUN_00aa4080(0x11,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[600] = param_1[0x14];
      param_1[0x259] = param_1[0x15];
      param_1[0x25a] = param_1[0x16];
      param_1[0x25b] = param_1[0x17];
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    if ((float)param_1[0x244] * 0.05 * (float)param_1[0x244] * 0.05 <=
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
        FUN_00a979f0(&local_4c);
        goto LAB_006980bd;
      }
    }
    param_1[600] = param_1[0x14];
    param_1[0x259] = param_1[0x15];
    param_1[0x25a] = param_1[0x16];
    param_1[0x25b] = param_1[0x17];
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a979f0(&local_4c);
    if (iVar4 != 0) {
      local_20 = local_4c;
      local_1c = local_48;
      local_18 = local_44;
      local_14 = 0x3f800000;
      FUN_0067e1c0(&local_20,0x3e99999a,0x3e32b8c2);
    }
    if ((param_1[0x1f6] != 0) && (*(int *)(param_1[0x1f6] + 0x82c) == 0)) {
      FUN_00a8d330(param_1 + 0x10,param_1[0x2a1] + 0x40);
      return;
    }
    local_50 = 0x3fa00000;
    iVar3 = FUN_006818f0();
    iVar4 = local_50;
    if (iVar3 != 0) {
      iVar4 = 0x3f800000;
    }
    iVar4 = FUN_00aa09c0(param_1[0x2a1] + 0x40,iVar4,1);
    if (iVar4 == 0) {
      return;
    }
    iVar4 = FUN_00a8d380();
    if (iVar4 != 0) {
      pcVar2 = *(code **)(*param_1 + 0x34c);
      param_1[0x76e] = 1;
      (*pcVar2)();
      return;
    }
    iVar4 = FUN_006818f0();
    if (iVar4 == 0) {
      return;
    }
    FUN_00a979f0(&local_4c);
    goto LAB_006980bd;
  case 3:
    local_50 = 0;
    FUN_006938c0(&local_50);
    if (local_50 != 0) {
      param_1[0x24f] = 0x41c80000;
      FUN_00c70800();
      param_1[0x187] = 2;
      FUN_00aa4080(0x11,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
      return;
    }
    break;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a8c760(0x30);
    if (iVar4 != 0) {
      FUN_00aa4080(0x13,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    iVar4 = FUN_00a8c760(0x31);
    if (iVar4 != 0) {
      FUN_00aa4080(0x12,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    iVar4 = FUN_00a94db0(0x10);
    if (iVar4 != 0) {
      FUN_00aa4080(0x11,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
      return;
    }
    break;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      (**(code **)(*param_1 + 0x34c))();
    }
  }
  return;
}

// 00698520  Em8060::vf48  size=997  [class]
/* WARNING: Removing unreachable block (ram,0x0069865d) */

void __fastcall Em8060::vf48(int *param_1)

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
  
  if (0.0 < (float)param_1[0x727]) {
    fVar1 = (float)param_1[0x727] - (float)param_1[0x244];
    param_1[0x727] = (int)fVar1;
    if (fVar1 < 0.0 != (fVar1 == 0.0)) {
      param_1[0x726] = 0;
      param_1[0x727] = -0x40800000;
    }
  }
  param_1[0x64a] = 0;
  param_1[0x724] = (int)((float)param_1[0x724] - (float)param_1[0x244]);
  if (0.0 < (float)param_1[0x64b]) {
    fVar6 = (float10)FUN_00e049b0();
    param_1[0x64b] = (int)(float)((float10)(float)param_1[0x64b] - fVar6);
  }
  if (param_1[0x664] == 0) {
    iVar5 = 1;
    piVar2 = param_1 + 0x64c;
    iVar3 = 6;
    do {
      if (*piVar2 == 0) {
        iVar5 = 0;
      }
      piVar2 = piVar2 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    param_1[0x664] = iVar5;
  }
  piVar2 = param_1 + 0x505;
  iVar3 = 3;
  do {
    if (*piVar2 != 0) {
      FUN_00442560(param_1[0x2a2]);
    }
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  param_1[0x6de] = 1;
  iVar3 = FUN_00907640(param_1 + 0x6df,&local_54,local_20);
  if (iVar3 != 0) {
    iVar3 = 0;
    param_1[0x6de] = 0;
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
          param_1[0x6de] = 1;
        }
      }
      if (iVar3 != 0) {
        iVar3 = FUN_008f7780(iVar3);
        if ((param_1[0x2a1] != 0) && (iVar3 == param_1[0x2a1])) {
          param_1[0x6de] = 1;
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
    FUN_0090fa30(param_1 + 0x6df,0,&local_50,0x3f000000,&local_30,iVar3 << 0x10 | 7,"Em8060");
  }
  FUN_0068d030();
  fVar1 = (float)param_1[0x5d9];
  if (!NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0)) {
    param_1[0x5d9] = (int)((float)param_1[0x5d9] - (float)param_1[0x244]);
  }
  if (0.0 < (float)param_1[0x5da] != ((float)param_1[0x5da] == 0.0)) {
    param_1[0x5da] = (int)((float)param_1[0x5da] - (float)param_1[0x244]);
  }
  if (0.0 < (float)param_1[0x5db] != ((float)param_1[0x5db] == 0.0)) {
    param_1[0x5db] = (int)((float)param_1[0x5db] - (float)param_1[0x244]);
  }
  if (0.0 < (float)param_1[0x3b0] != ((float)param_1[0x3b0] == 0.0)) {
    param_1[0x3b0] = (int)((float)param_1[0x3b0] - (float)param_1[0x244]);
  }
  if (0.0 < (float)param_1[0x5d8] != ((float)param_1[0x5d8] == 0.0)) {
    param_1[0x5d8] = (int)((float)param_1[0x5d8] - (float)param_1[0x244]);
  }
  if (((int *)param_1[0x2a1] == (int *)0x0) ||
     (iVar3 = (**(code **)(*(int *)param_1[0x2a1] + 0x330))(), iVar3 == 0)) {
    param_1[0x5dc] = 0;
  }
  else {
    param_1[0x5dc] = (int)((float)param_1[0x5dc] + (float)param_1[0x244]);
  }
  if (((*(byte *)((int)param_1 + 0x143b) & 1) != 0) &&
     (fVar1 = (float)param_1[0x71c], param_1[0x71c] = (int)(fVar1 - (float)param_1[0x244]),
     fVar1 - (float)param_1[0x244] < 0.0)) {
    (**(code **)(*param_1 + 0x110))(0);
  }
  FUN_00684730();
  FUN_006959d0();
  iVar3 = FUN_00a8c760(0x37);
  param_1[0x70b] = iVar3;
  iVar3 = FUN_00a8c760(0x38);
  param_1[0x70c] = iVar3;
  FUN_00684610();
  iVar3 = FUN_00ac48f0(0);
  if (iVar3 == 0) {
    fVar1 = (float)param_1[0x713] + (float)param_1[0x244];
  }
  else {
    fVar1 = 0.0;
  }
  param_1[0x713] = (int)fVar1;
  if ((param_1[0x351] & 0x2000000U) == 0) {
    fVar1 = 0.0;
  }
  else {
    fVar1 = (float)param_1[0x718] + (float)param_1[0x244];
  }
  param_1[0x718] = (int)fVar1;
  FUN_0068b3a0();
  EmBaseDLC::vf48();
  return;
}

// 00698910  Em8060::vf54  size=23  [class]
void Em8060::vf54(void)

{
  FUN_00692f40();
  FUN_0067c000();
  BehaviorEmBase::vf54();
  return;
}

// 00698930  FUN_00698930  size=1238  [between]
void __fastcall FUN_00698930(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    break;
  case 1:
    goto switchD_00698957_caseD_1;
  case 2:
    fVar1 = *(float *)(param_1 + 0x960) - *(float *)(param_1 + 0x50);
    fVar3 = *(float *)(param_1 + 0x968) - *(float *)(param_1 + 0x58);
    fVar2 = *(float *)(param_1 + 0x910) * 0.1;
    if (fVar2 * fVar2 <= fVar3 * fVar3 + fVar1 * fVar1) {
      *(undefined4 *)(param_1 + 0x93c) = 0x41c80000;
    }
    else {
      fVar1 = *(float *)(param_1 + 0x93c) - *(float *)(param_1 + 0x910);
      *(float *)(param_1 + 0x93c) = fVar1;
      if (fVar1 <= 0.0) {
        FUN_00a979f0(&local_58);
        local_30 = local_58;
        local_2c = local_54;
        goto LAB_00698b2b;
      }
    }
    *(undefined4 *)(param_1 + 0x960) = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(param_1 + 0x964) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x968) = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(param_1 + 0x96c) = *(undefined4 *)(param_1 + 0x5c);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar6 = FUN_00a979f0(&local_58);
    if (iVar6 != 0) {
      local_20 = local_58;
      local_1c = local_54;
      local_18 = local_50;
      local_14 = 0x3f800000;
      FUN_0067e1c0(&local_20,0x3e99999a,0x3e32b8c2);
    }
    if ((*(int *)(param_1 + 0x7d8) != 0) && (*(int *)(*(int *)(param_1 + 0x7d8) + 0x82c) == 0)) {
      FUN_00a8d330(param_1 + 0x40,*(int *)(param_1 + 0xa84) + 0x40);
      return;
    }
    local_5c = 0x3fa00000;
    iVar5 = FUN_006818f0();
    iVar6 = local_5c;
    if (iVar5 != 0) {
      iVar6 = 0x3f800000;
    }
    iVar6 = FUN_00aa09c0(*(int *)(param_1 + 0xa84) + 0x40,iVar6,1);
    if (iVar6 == 0) {
      return;
    }
    iVar6 = FUN_00a8d380();
    if (iVar6 != 0) goto LAB_00698aa1;
    iVar6 = FUN_006818f0();
    if (iVar6 == 0) {
      return;
    }
    FUN_00a979f0(&local_58);
    local_30 = local_58;
    local_2c = local_54;
    goto LAB_00698b2b;
  case 3:
    local_5c = 0;
    FUN_006938c0(&local_5c);
    if (local_5c == 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x93c) = 0x41c80000;
    FUN_00c70800();
    iVar6 = FUN_006818f0();
    if ((iVar6 == 0) || (iVar6 = FUN_00a8d380(), iVar6 != 0)) {
      *(undefined4 *)(param_1 + 0x61c) = 2;
      FUN_00aa4080(0x11,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
      return;
    }
    goto LAB_00698b06;
  default:
    goto switchD_00698957_default;
  }
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
switchD_00698957_caseD_1:
  iVar6 = FUN_00a979f0(&local_58);
  if (iVar6 != 0) {
    local_40 = local_58;
    local_3c = local_54;
    local_38 = local_50;
    local_34 = 0x3f800000;
    FUN_0067e1c0(&local_40,0x3e800000,0x3dd67750);
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar6 = FUN_00aa09c0(*(int *)(param_1 + 0xa84) + 0x40,0x40200000,1);
  if (iVar6 != 0) {
    iVar6 = FUN_00a8d380();
    if (iVar6 != 0) {
LAB_00698aa1:
      *(undefined4 *)(param_1 + 0x1db8) = 1;
      if (*(int *)(param_1 + 0xe98) == 0x10003) {
        return;
      }
      *(undefined4 *)(param_1 + 0xe98) = 0x10003;
      uVar4 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
      *(undefined4 *)(param_1 + 0xea4) = uVar4;
      FUN_00a8caf0(0x10003,0,0,0);
      *(undefined4 *)(param_1 + 0xea0) = 0;
      FUN_00a962d0(0,0);
      *(undefined4 *)(param_1 + 0x139c) = 0;
      return;
    }
    iVar6 = FUN_006818f0();
    if (iVar6 != 0) {
LAB_00698b06:
      FUN_00a979f0(&local_4c);
      local_30 = local_4c;
      local_2c = local_48;
LAB_00698b2b:
      local_24 = 0x3f800000;
      FUN_0067e280(&local_30);
      *(undefined4 *)(param_1 + 0x61c) = 3;
      return;
    }
  }
  iVar6 = FUN_00a94ce0(0);
  if (iVar6 != 0) {
    FUN_00aa4080(0x11,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    *(undefined4 *)(param_1 + 0x960) = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(param_1 + 0x964) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x968) = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(param_1 + 0x96c) = *(undefined4 *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    return;
  }
switchD_00698957_default:
  return;
}

// 00698E20  FUN_00698e20  size=488  [between]
void __fastcall FUN_00698e20(int *param_1)

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
  else if (param_1[0x187] != 1) goto LAB_00698f5c;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    local_4 = (int *)param_1[0x13c];
    iVar3 = FUN_00690dd0(&local_4);
    if ((iVar3 == 0) && (sVar1 = FUN_00dde2d0(0,1), sVar1 != 0)) {
      FUN_00684170();
    }
  }
LAB_00698f5c:
  local_4 = (int *)param_1[0x13c];
  iVar3 = FUN_00690dd0(&local_4);
  if (((iVar3 == 0) && (iVar3 = FUN_00a8c760(4), iVar3 != 0)) && (param_1[0x3ad] != 0)) {
    sVar1 = FUN_00dde2d0(0,3);
    if (sVar1 != 0) {
      FUN_00684170();
    }
    if (((float)param_1[0x5d9] < 0.0) && (iVar3 = FUN_00693440(), iVar3 != 0)) {
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

// 00699010  FUN_00699010  size=488  [between]
void __fastcall FUN_00699010(int *param_1)

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
  else if (param_1[0x187] != 1) goto LAB_0069914c;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    local_4 = (int *)param_1[0x13c];
    iVar3 = FUN_00690dd0(&local_4);
    if ((iVar3 == 0) && (sVar1 = FUN_00dde2d0(0,1), sVar1 != 0)) {
      FUN_00684170();
    }
  }
LAB_0069914c:
  local_4 = (int *)param_1[0x13c];
  iVar3 = FUN_00690dd0(&local_4);
  if (((iVar3 == 0) && (iVar3 = FUN_00a8c760(4), iVar3 != 0)) && (param_1[0x3ad] != 0)) {
    sVar1 = FUN_00dde2d0(0,3);
    if (sVar1 != 0) {
      FUN_00684170();
    }
    if (((float)param_1[0x5d9] < 0.0) && (iVar3 = FUN_00693440(), iVar3 != 0)) {
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

// 00699200  FUN_00699200  size=1072  [between]
void __fastcall FUN_00699200(int *param_1)

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
  else if (param_1[0x187] != 1) goto LAB_006994c3;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar4 = FUN_00a94ce0(0);
  if (iVar4 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    local_4 = (int *)param_1[0x13c];
    iVar4 = FUN_00690dd0(&local_4);
    if (iVar4 == 0) {
      if ((float)param_1[0x5d9] < 0.0) {
        FUN_00693440();
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
        FUN_00684170();
      }
      if (((float)param_1[0x2a4] < 16.0) && (sVar2 = FUN_00dde2d0(0,1), sVar2 != 0)) {
        FUN_00684170();
      }
      if (((float)param_1[0x2a4] < 49.0) && (sVar2 = FUN_00dde2d0(0,1), sVar2 != 0)) {
        FUN_00693810();
      }
      fVar1 = (float)param_1[0x2a4];
      if (((!NAN(fVar1) && 49.0 < fVar1 != (fVar1 == 49.0)) && (param_1[0x128] == 1)) &&
         ((float)param_1[0x5da] < 0.0)) {
        FUN_00693790();
      }
    }
  }
LAB_006994c3:
  iVar4 = FUN_00a8c760(4);
  if ((iVar4 != 0) && (param_1[0x3ad] != 0)) {
    local_4 = (int *)param_1[0x13c];
    iVar4 = FUN_00690dd0(&local_4);
    if (iVar4 == 0) {
      sVar2 = FUN_00dde2d0(0,2);
      if (sVar2 != 0) {
        FUN_00684170();
      }
      if ((float)param_1[0x5d9] < 0.0) {
        FUN_00693440();
      }
      if ((64.0 < (float)param_1[0x2a4]) && (sVar2 = FUN_00dde2d0(0,1), sVar2 != 0)) {
        FUN_0067cd40(0x10003,0,0,0,0);
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
         ((float)param_1[0x5da] < 0.0)) {
        FUN_00693790();
      }
    }
  }
  if ((float)param_1[0x2a8] <= 1.0471976) {
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3db2b8c2,0);
  }
  return;
}

// 00699630  FUN_00699630  size=1337  [between]
void __fastcall FUN_00699630(int *param_1)

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
    iVar5 = FUN_00690dd0(&iStack_28);
    fVar1 = fStack_24;
    if (iVar5 != 2) {
      fVar1 = 10.0;
    }
    iVar5 = param_1[0x2a1];
    fStack_20 = fStack_20 * fVar1;
    fStack_1c = fVar1 * fStack_1c;
    fStack_18 = fStack_18 * fVar1;
    fStack_14 = fStack_14 * fVar1;
    param_1[0x500] = (int)(*(float *)(iVar5 + 0x40) - fStack_20);
    param_1[0x501] = (int)(*(float *)(iVar5 + 0x44) - fStack_1c);
    param_1[0x502] = (int)(*(float *)(iVar5 + 0x48) - fStack_18);
    param_1[0x503] = (int)(*(float *)(iVar5 + 0x4c) - fStack_14);
    break;
  case 1:
    break;
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
    param_1[0x500] = (int)(*(float *)(iVar5 + 0x40) - fStack_20);
    param_1[0x501] = (int)(fVar1 - fStack_1c);
    param_1[0x502] = (int)(fVar2 - fStack_18);
    param_1[0x503] = (int)(fVar3 - fStack_14);
    FUN_00692820(param_1 + 0x4e8,param_1 + 0x10,param_1 + 0x500);
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
    FUN_00a8e880(param_1 + 0x500);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3d8efa35,0);
    return;
  case 4:
    FUN_00aa4080(0x1e,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_00699a7a;
  case 5:
LAB_00699a7a:
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
  default:
    return;
  }
  (**(code **)(*param_1 + 0x314))();
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar5 = FUN_00a94ce0(0);
  if (iVar5 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
  FUN_00a8e880(param_1 + 0x500);
  (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3e8efa35,0);
  return;
}

// 00699B90  FUN_00699b90  size=1293  [between]
void __fastcall FUN_00699b90(int *param_1)

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
    param_1[0x500] = (int)(*(float *)(iVar5 + 0x40) + fStack_20);
    param_1[0x501] = (int)(fVar1 + fStack_1c);
    param_1[0x502] = (int)(fVar2 + fStack_18);
    param_1[0x503] = (int)(fStack_14 + fVar3);
    break;
  case 1:
    break;
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
    param_1[0x500] = (int)(*(float *)(iVar5 + 0x40) + fStack_20);
    param_1[0x501] = (int)(fVar1 + fStack_1c);
    param_1[0x502] = (int)(fVar2 + fStack_18);
    param_1[0x503] = (int)(fStack_14 + fVar3);
    FUN_00692820(param_1 + 0x4e8,param_1 + 0x10,param_1 + 0x500);
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
    FUN_00a8e880(param_1 + 0x500);
    (**(code **)(*param_1 + 0x308))(0x3dcccccd,0x393702d3,0x3d8efa35,0);
    return;
  case 4:
    FUN_00aa4080(0x1e,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_00699fae;
  case 5:
LAB_00699fae:
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
  default:
    return;
  }
  (**(code **)(*param_1 + 0x314))();
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar5 = FUN_00a94ce0(0);
  if (iVar5 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
  FUN_00a8e880(param_1 + 0x500);
  (**(code **)(*param_1 + 0x308))(0x3e99999a,0x393702d3,0x3e8efa35,0);
  return;
}

// 0069A0C0  FUN_0069a0c0  size=466  [between]
void __fastcall FUN_0069a0c0(int *param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x8d,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if ((((float)param_1[0x2a4] <= 12.959999) && (iVar2 = FUN_00ac4780(), 0 < iVar2)) &&
       (iVar2 = FUN_00a959f0(0), 0x28 < iVar2)) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0069a181. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    break;
  case 2:
    uVar3 = 0x27;
    fVar1 = (float)param_1[0x2a8];
    if (!NAN(fVar1) && 1.3089969 < fVar1 != (fVar1 == 1.3089969)) {
      if (param_1[0x6dc] == 0) {
        if (param_1[0x6db] != 0) {
          uVar3 = 0x23;
        }
      }
      else {
        uVar3 = 0x24;
      }
    }
    FUN_00aa4080(uVar3,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a8c760(4);
    if (iVar2 != 0) {
      if ((float)param_1[0x2a4] <= 42.25) {
        iVar2 = FUN_00a8cab0();
        param_1[0x3a9] = iVar2;
        param_1[0x3aa] = param_1[0x3a8];
        FUN_00a8caf0(0x50007,0,0,0);
        param_1[0x3a8] = 0;
        FUN_00a962d0(0,0);
        param_1[0x4e7] = 0;
        return;
      }
      iVar2 = FUN_00694b70();
      if (iVar2 != 0) {
        return;
      }
    }
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0069a28e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 0069A2B0  FUN_0069a2b0  size=841  [between]
void __fastcall FUN_0069a2b0(int *param_1)

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
    pfVar1 = (float *)(param_1 + 0x500);
    *pfVar1 = (float)param_1[0x10] + fVar5 * 3.0;
    param_1[0x501] = (int)((float)param_1[0x11] + fVar4 * 3.0);
    param_1[0x502] = (int)((float)param_1[0x12] + fVar3 * 3.0);
    param_1[0x503] = (int)(fStack_14 * 3.0 + (float)param_1[0x13]);
    FUN_00a8e880(pfVar1);
    FUN_00692820(param_1 + 0x4e8,param_1 + 0x10,pfVar1);
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
    FUN_00a8e880(param_1 + 0x500);
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

// 0069A620  Em8060::R0_ExplodeDie_2  size=1164  [class]
void __fastcall Em8060::R0_ExplodeDie_2(int *param_1)

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
    FUN_00aa4080(0x90,0,0x3d088889,0x3f800000,0x8000000,param_1[0x70d],0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    uVar5 = 0;
    uVar2 = FUN_00a7c8a0(0);
    FUN_004039a0(6,uVar2,uVar5);
    puVar6 = local_160;
    uVar2 = FUN_00e00b40(0x28060,puVar6);
    FUN_00a8c930(uVar2,puVar6);
    FUN_00e5e0c0("EM8060_se_dmg_faint_spark",param_1,0xffffffff,0);
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
    iVar1 = thunk_FUN_00e58ed0(param_1[0x71d]);
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
    piVar3 = param_1 + 0x57c;
    uVar2 = FUN_00a7c8a0(piVar3);
    FUN_004117d0(7,uVar2,piVar3);
    puVar6 = local_160;
    uVar2 = FUN_00e00b40(0x28060,puVar6);
    FUN_00a8c930(uVar2,puVar6);
    FUN_00a85670(param_1,1);
    iVar1 = FUN_00e5e0c0("EM8060_se_dmg_exp_death",param_1,0xffffffff,0);
    param_1[0x71d] = iVar1;
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
    if (param_1[0x709] != 0) {
      iVar1 = FUN_00a81330();
      if (iVar1 == 0) {
        FUN_00dd5650(&DAT_01647070);
        FUN_0068cd90();
        iVar1 = FUN_00a81330();
        if ((iVar1 == 0) || (piVar3 = (int *)FUN_00a7c8a0(), piVar3 == (int *)0x0))
        goto LAB_0069aa8e;
        piVar3[0x1bb] = 1;
        FUN_00a8caf0(0x34,0,0,0);
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
        if (piVar3 == (int *)0x0) goto LAB_0069aa8e;
        (**(code **)(*piVar3 + 0xf8))(0);
        (**(code **)(*piVar3 + 0x1c))();
        piVar3[0x1bb] = 1;
        FUN_00a8caf0(0x34,0,0,0);
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
LAB_0069aa8e:
  iVar1 = FUN_00a8c760(0x37);
  if (iVar1 != 0) {
    param_1[0x708] = 1;
  }
  return;
}

// 0069AAB0  FUN_0069aab0  size=635  [between]
void __thiscall FUN_0069aab0(int param_1,byte param_2)

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
  
  if (*(int *)(param_1 + 0x1928) != 0) {
    return;
  }
  if (0.0 < *(float *)(param_1 + 0x192c)) {
    return;
  }
  uVar2 = (uint)param_2;
  iVar1 = param_1 + uVar2 * 0xc;
  if (*(int *)(param_1 + 0x18c4 + uVar2 * 0xc) == 0) {
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
    puVar4 = &DAT_01882218;
    break;
  case 1:
    puVar4 = &DAT_0188223a;
    break;
  case 2:
    puVar4 = &DAT_0188225c;
    break;
  case 3:
    puVar4 = &DAT_01882280;
    break;
  case 4:
    puVar4 = &DAT_018822a2;
    break;
  case 5:
    puVar4 = &DAT_018822c4;
    break;
  case 6:
    puVar4 = &DAT_018822e8;
    break;
  case 7:
    puVar4 = &DAT_0188230a;
    break;
  case 8:
    puVar4 = &DAT_0188232c;
    break;
  default:
    goto switchD_0069abc3_default;
  }
  FUN_00692d30(puVar4,local_20,&local_30,0x43340000,1);
switchD_0069abc3_default:
  *(undefined4 *)(iVar1 + 0x18bc) = 0;
  *(undefined4 *)(iVar1 + 0x18c4) = 0;
  *(undefined4 *)(param_1 + 0x1928) = 1;
  fVar3 = (float10)FUN_00dde300(0,0x3f800000);
  *(float *)(param_1 + 0x192c) = (float)(fVar3 * (float10)10.0 + (float10)1.0);
  return;
}

// 0069AD50  FUN_0069ad50  size=671  [between]
void __fastcall FUN_0069ad50(int param_1)

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
  puVar2 = (undefined4 *)(param_1 + 0x18c4);
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
      puVar4 = &DAT_01882218;
      break;
    case 1:
      puVar4 = &DAT_0188223a;
      break;
    case 2:
      puVar4 = &DAT_0188225c;
      break;
    case 3:
      puVar4 = &DAT_01882280;
      break;
    case 4:
      puVar4 = &DAT_018822a2;
      break;
    case 5:
      puVar4 = &DAT_018822c4;
      break;
    case 6:
      puVar4 = &DAT_018822e8;
      break;
    case 7:
      puVar4 = &DAT_0188230a;
      break;
    case 8:
      puVar4 = &DAT_0188232c;
      break;
    default:
      goto switchD_0069ae4b_default;
    }
    FUN_00692d30(puVar4,local_180,&local_190,0x43340000,0);
switchD_0069ae4b_default:
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

// 0069B020  FUN_0069b020  size=611  [between]
/* WARNING: Removing unreachable block (ram,0x0069b115) */

void __thiscall FUN_0069b020(int param_1,byte param_2)

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
    FUN_00692d30(&DAT_01882218,local_20,&local_30,fVar1,0);
    break;
  case 1:
    FUN_00692d30(&DAT_0188223a,local_20,&local_30,fVar1,0);
    break;
  case 2:
    FUN_00692d30(&DAT_0188225c,local_20,&local_30,fVar1,0);
    break;
  case 3:
    FUN_00692d30(&DAT_01882280,local_20,&local_30,fVar1,0);
    break;
  case 4:
    FUN_00692d30(&DAT_018822a2,local_20,&local_30,fVar1,0);
    break;
  case 5:
    FUN_00692d30(&DAT_018822c4,local_20,&local_30,fVar1,0);
    break;
  case 6:
    FUN_00692d30(&DAT_018822e8,local_20,&local_30,fVar1,0);
    break;
  case 7:
    FUN_00692d30(&DAT_0188230a,local_20,&local_30,fVar1,0);
    break;
  case 8:
    FUN_00692d30(&DAT_0188232c,local_20,&local_30,fVar1,0);
  }
  param_1 = param_1 + (uint)param_2 * 0xc;
  *(undefined4 *)(param_1 + 0x18bc) = 0;
  *(undefined4 *)(param_1 + 0x18c4) = 0;
  return;
}

// 0069B2B0  FUN_0069b2b0  size=255  [between]
void __thiscall FUN_0069b2b0(int *param_1,int param_2)

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
  
  if ((param_1[0x650] == 0) || (param_2 != 0)) {
    if ((param_1[0x301] == 0) && (param_1[0x76f] == 0)) {
      (**(code **)(*param_1 + 0x358))(400,param_1 + 0x3b8);
    }
    param_1[0x3e5] = 1;
    FUN_00ac9420(param_1 + 0x652);
    param_1[0x650] = 1;
    FUN_00ac8d80(0x12,1);
    FUN_00ac8d80(0x11,1);
    FUN_00ac8d80(0xe,1);
    param_1[0x666] = 0;
  }
  param_2 = CONCAT13(param_2._3_1_,0x20100);
  pbVar3 = (byte *)&param_2;
  iVar2 = 3;
  do {
    if (param_1[(uint)*pbVar3 * 3 + 0x62f] != 0) {
      FUN_0069b020((uint)*pbVar3);
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

// 0069B3C0  FUN_0069b3c0  size=298  [between]
void __thiscall FUN_0069b3c0(int *param_1,int param_2)

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
    if ((param_1[0x301] == 0) && (param_1[0x76f] == 0)) {
      (**(code **)(*param_1 + 0x358))(0x191,param_1 + 0x3b8);
    }
    param_1[0x3e6] = 1;
    FUN_00ac9420(param_1 + 0x656);
    param_1[0x654] = 1;
    param_1[0x65c] = 1;
    FUN_00ac9420(param_1 + 0x65e);
    FUN_00ac8d80(10,1);
    FUN_00ac8d80(0xb,1);
    FUN_00ac8d80(0xc,1);
    FUN_00ac8d80(0xd,1);
    param_1[0x667] = 0;
  }
  iVar2 = 3;
  param_2 = CONCAT13(param_2._3_1_,0x50403);
  pbVar3 = (byte *)&param_2;
  do {
    if (param_1[(uint)*pbVar3 * 3 + 0x62f] != 0) {
      FUN_0069b020((uint)*pbVar3);
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

// 0069B4F0  FUN_0069b4f0  size=298  [between]
void __thiscall FUN_0069b4f0(int *param_1,int param_2)

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
    if ((param_1[0x301] == 0) && (param_1[0x76f] == 0)) {
      (**(code **)(*param_1 + 0x358))(0x192,param_1 + 0x3b8);
    }
    param_1[999] = 1;
    FUN_00ac9420(param_1 + 0x65a);
    param_1[0x658] = 1;
    param_1[0x660] = 1;
    FUN_00ac9420(param_1 + 0x662);
    FUN_00ac8d80(5,1);
    FUN_00ac8d80(6,1);
    FUN_00ac8d80(7,1);
    FUN_00ac8d80(8,1);
    param_1[0x668] = 0;
  }
  param_2 = CONCAT13(param_2._3_1_,0x80706);
  pbVar3 = (byte *)&param_2;
  iVar2 = 3;
  do {
    if (param_1[(uint)*pbVar3 * 3 + 0x62f] != 0) {
      FUN_0069b020((uint)*pbVar3);
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

// 0069B620  Em8060::R0_ChanceAttack  size=1478  [class]
void __fastcall Em8060::R0_ChanceAttack(int *param_1)

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
    param_1[0x71a] = 1;
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
      FUN_00dd5650(&DAT_016470e8);
      FUN_0068cd90();
      uVar10 = 0;
      uVar7 = 0;
      uVar6 = 0;
      uVar3 = 0x60;
      FUN_00a81330(0x60,0,0,0);
      FUN_00a7c8a0();
      FUN_00a8caf0(uVar3,uVar6,uVar7,uVar10);
      FUN_00a81330();
      piVar2 = (int *)FUN_00a7c8a0();
      (**(code **)(*piVar2 + 0x20))();
    }
    else {
      FUN_00683bd0(iVar1);
      piVar2 = (int *)FUN_00a7c8a0();
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0xf8))(0);
        FUN_00a8caf0(0x60,0,0,0);
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
    param_1[0x709] = 0;
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
    FUN_00c52770(param_1[0x770],0x40a00000);
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x250] = 0x32;
      FUN_00a8c9b0(0,6,0x3f800000,0);
      piVar2 = param_1 + 0x57c;
      uVar3 = FUN_00a7c8a0(piVar2);
      FUN_004117d0(7,uVar3,piVar2);
      puVar11 = local_160;
      uVar3 = FUN_00e00b40(0x28060,puVar11);
      FUN_00a8c930(uVar3,puVar11);
      FUN_00a85670(param_1,1);
      iVar1 = FUN_00e5e0c0("em0060_se_dmg_exp_death",param_1,0xffffffff,0);
      param_1[0x71d] = iVar1;
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
    iVar1 = thunk_FUN_00e58ed0(param_1[0x71d]);
    if (iVar1 == 0) {
      FUN_009fdde0();
    }
  }
  iVar1 = FUN_00a8c760(0x32);
  if (iVar1 != 0) {
    FUN_006932e0(1);
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
    FUN_0069b2b0(1);
  }
  iVar1 = FUN_00a8c760(0x34);
  if (iVar1 != 0) {
    FUN_0069b3c0(1);
  }
  iVar1 = FUN_00a8c760(0x35);
  if (iVar1 != 0) {
    FUN_0069b4f0(1);
  }
  iVar4 = 1;
  piVar2 = param_1 + 0x64c;
  iVar1 = 6;
  do {
    if (*piVar2 == 0) {
      iVar4 = 0;
    }
    piVar2 = piVar2 + 4;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  param_1[0x664] = iVar4;
  FUN_0067e3c0(local_164);
  return;
}

// 0069BC80  FUN_0069bc80  size=128  [callgraph]
undefined4 __thiscall FUN_0069bc80(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(int *)(param_1 + 0xe9c) == 0) && (*(int *)(param_1 + 0x1b84) == 0)) {
    switch(param_2) {
    case 0:
      uVar2 = FUN_00694ad0();
      return uVar2;
    case 1:
      uVar2 = FUN_00694b70();
      return uVar2;
    case 3:
      iVar1 = FUN_0067fe90();
      if (iVar1 != 0) {
        uVar2 = FUN_00695300();
        return uVar2;
      }
      break;
    case 4:
      iVar1 = FUN_0067feb0();
      if (iVar1 != 0) {
        uVar2 = FUN_00695550();
        return uVar2;
      }
      break;
    case 5:
      uVar2 = FUN_00688620();
      return uVar2;
    case 6:
      uVar2 = FUN_00695900();
      return uVar2;
    case 7:
      uVar2 = FUN_00695980();
      return uVar2;
    }
  }
  return 0;
}

// 0069BD30  FUN_0069bd30  size=740  [callgraph]
void __fastcall FUN_0069bd30(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    return;
  }
  iVar2 = FUN_00a82d50();
  if (iVar2 != 1) {
    iVar2 = FUN_00a82d50();
    if ((iVar2 == 2) || (iVar2 = FUN_00a82d50(), iVar2 == 3)) {
      if (*(int *)(param_1 + 0x1db8) != 0) {
        return;
      }
      uVar3 = FUN_00a8cab0();
      *(undefined4 *)(param_1 + 0xea4) = uVar3;
      *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
      FUN_00a8caf0(0xb0001,0,0,0);
      *(undefined4 *)(param_1 + 0xea0) = 0;
      FUN_00a962d0(0,0);
      *(undefined4 *)(param_1 + 0x139c) = 0;
      return;
    }
    fVar1 = *(float *)(param_1 + 0x924) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x924) = fVar1;
    if (0.0 < fVar1) {
      return;
    }
    if ((*(int *)(param_1 + 0xeb4) != 0) && (iVar2 = FUN_0067da00(), iVar2 != 0)) {
      FUN_0067da30();
      return;
    }
    if ((*(uint *)(param_1 + 0xd44) & 0x2000000) == 0) {
      if (*(int *)(param_1 + 0xe9c) != 0) {
        return;
      }
      if (*(int *)(param_1 + 0x1b84) != 0) goto LAB_0069bed8;
      iVar2 = FUN_00694ad0();
    }
    else {
      iVar2 = FUN_006919f0();
      if (iVar2 != 2) {
        if (*(int *)(param_1 + 0xe9c) != 0) {
          return;
        }
        if ((*(int *)(param_1 + 0x1b84) == 0) && (iVar2 = FUN_00694b70(), iVar2 != 0)) {
          return;
        }
        if (*(int *)(param_1 + 0xe9c) != 0) {
          return;
        }
        if ((*(int *)(param_1 + 0x1b84) == 0) && (iVar2 = FUN_00694ad0(), iVar2 != 0)) {
          return;
        }
        if (*(int *)(param_1 + 0xe9c) != 0) {
          return;
        }
        if (((*(int *)(param_1 + 0x1b84) == 0) && (iVar2 = FUN_0067fe90(), iVar2 != 0)) &&
           (iVar2 = FUN_00695300(), iVar2 != 0)) {
          return;
        }
        if (*(int *)(param_1 + 0xe9c) != 0) {
          return;
        }
        if (*(int *)(param_1 + 0x1b84) != 0) {
          return;
        }
        iVar2 = FUN_0067feb0();
        if (iVar2 == 0) {
          return;
        }
        FUN_00695550();
        return;
      }
      if (*(int *)(param_1 + 0xe9c) != 0) {
        return;
      }
      if ((*(int *)(param_1 + 0x1b84) == 0) && (iVar2 = FUN_00694ad0(), iVar2 != 0)) {
        return;
      }
      if (*(int *)(param_1 + 0xe9c) != 0) {
        return;
      }
      if (((*(int *)(param_1 + 0x1b84) == 0) && (iVar2 = FUN_0067fe90(), iVar2 != 0)) &&
         (iVar2 = FUN_00695300(), iVar2 != 0)) {
        return;
      }
      if (*(int *)(param_1 + 0xe9c) != 0) {
        return;
      }
      if ((*(int *)(param_1 + 0x1b84) != 0) || (iVar2 = FUN_0067feb0(), iVar2 == 0))
      goto LAB_0069bed8;
      iVar2 = FUN_00695550();
    }
    if (iVar2 != 0) {
      return;
    }
LAB_0069bed8:
    if (*(int *)(param_1 + 0xe9c) != 0) {
      return;
    }
    if (*(int *)(param_1 + 0x1b84) != 0) {
      return;
    }
    FUN_00694b70();
    return;
  }
  if (*(int *)(param_1 + 0x1b8c) == 0) {
    iVar2 = FUN_00ac4690();
    if (iVar2 == 0) goto LAB_0069bde8;
    uVar3 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xea4) = uVar3;
    *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
    uVar3 = 0xb0000;
  }
  else {
    fVar1 = *(float *)(param_1 + 0x928) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x928) = fVar1;
    if (0.0 < fVar1) goto LAB_0069bde8;
    uVar3 = FUN_00a8cab0();
    *(undefined4 *)(param_1 + 0xea4) = uVar3;
    *(undefined4 *)(param_1 + 0xea8) = *(undefined4 *)(param_1 + 0xea0);
    uVar3 = 0xb0003;
  }
  FUN_00a8caf0(uVar3,0,0,0);
  *(undefined4 *)(param_1 + 0xea0) = 0;
  FUN_00a962d0(0,0);
  *(undefined4 *)(param_1 + 0x139c) = 0;
LAB_0069bde8:
  if (*(int *)(param_1 + 0x1b90) == 0) {
    return;
  }
  FUN_00a88b50(4,1);
  return;
}

// 0069C020  FUN_0069c020  size=335  [callgraph]
void __fastcall FUN_0069c020(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x61c) < 3) {
    return;
  }
  if (3 < *(int *)(param_1 + 0x61c)) {
    return;
  }
  if (400.0 < *(float *)(param_1 + 0xa90)) {
    *(undefined4 *)(param_1 + 0x61c) = 4;
  }
  iVar1 = FUN_00a82d50();
  if (((iVar1 == 2) || (iVar1 = FUN_00a82d50(), iVar1 == 3)) || (iVar1 = FUN_00a82d50(), iVar1 == 1)
     ) {
    *(undefined4 *)(param_1 + 0x61c) = 4;
  }
  if (((*(int *)(param_1 + 0xe9c) == 0) && (*(int *)(param_1 + 0x1b84) == 0)) &&
     (iVar1 = FUN_00694ad0(), iVar1 != 0)) {
    return;
  }
  if (((*(int *)(param_1 + 0xe9c) == 0) && (*(int *)(param_1 + 0x1b84) == 0)) &&
     ((iVar1 = FUN_0067fe90(), iVar1 != 0 && (iVar1 = FUN_00695300(), iVar1 != 0)))) {
    return;
  }
  iVar1 = FUN_006919f0();
  if (iVar1 == 2) {
    if (*(int *)(param_1 + 0xe9c) == 0) {
      if (((*(int *)(param_1 + 0x1b84) == 0) && (iVar1 = FUN_0067feb0(), iVar1 != 0)) &&
         (iVar1 = FUN_00695550(), iVar1 != 0)) {
        return;
      }
      if ((*(int *)(param_1 + 0xe9c) == 0) && (*(int *)(param_1 + 0x1b84) == 0)) {
        FUN_00694b70();
      }
    }
  }
  else if (*(int *)(param_1 + 0xe9c) == 0) {
    if ((*(int *)(param_1 + 0x1b84) == 0) && (iVar1 = FUN_00694b70(), iVar1 != 0)) {
      return;
    }
    if (((*(int *)(param_1 + 0xe9c) == 0) && (*(int *)(param_1 + 0x1b84) == 0)) &&
       (iVar1 = FUN_0067feb0(), iVar1 != 0)) {
      FUN_00695550();
      return;
    }
  }
  return;
}

// 0069C170  FUN_0069c170  size=265  [callgraph]
void __fastcall FUN_0069c170(int *param_1)

{
  int iVar1;
  int *piStack_4;
  
  piStack_4 = param_1;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x1f,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    (**(code **)(*param_1 + 0x314))();
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    if ((((param_1[0x3a7] == 0) && (param_1[0x6e1] == 0)) && (iVar1 = FUN_0067fe90(), iVar1 != 0))
       && (iVar1 = FUN_00695300(), iVar1 != 0)) {
      return;
    }
    (**(code **)(*param_1 + 0x34c))();
  }
  iVar1 = FUN_00a8c760(0x3b);
  if (iVar1 != 0) {
    piStack_4 = (int *)param_1[0x13c];
    iVar1 = FUN_00690dd0(&piStack_4);
    if (((iVar1 == 1) && (param_1[0x3a7] == 0)) && (param_1[0x6e1] == 0)) {
      FUN_00695980();
      return;
    }
  }
  return;
}

// 0069C280  FUN_0069c280  size=282  [callgraph]
void __fastcall FUN_0069c280(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  if (param_1[0x187] == 0) {
    uVar1 = param_1[0x50e];
    param_1[0x50e] = param_1[0x50e] ^ 0x2000000;
    iVar2 = 0x6a - (uint)((uVar1 & 0x2000000) != 0);
    if ((float)param_1[0x245] * (float)param_1[0x245] < 2.4674013) {
      iVar2 = 0x6b;
    }
    FUN_00aa4080(iVar2,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    FUN_00eaa6e0(0x41200000,0);
    param_1[0x6b6] = 0;
    param_1[0x6cf] = param_1[param_1[0x3ad] + 0x6a4];
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if ((iVar2 != 0) &&
     (((param_1[0x3a7] != 0 || (param_1[0x6e1] != 0)) || (iVar2 = FUN_00688620(), iVar2 == 0)))) {
                    /* WARNING: Could not recover jumptable at 0x0069c398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  return;
}

// 0069C3A0  FUN_0069c3a0  size=258  [callgraph]
void __fastcall FUN_0069c3a0(int *param_1)

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
    param_1[0x6b6] = 0;
    param_1[0x6cf] = param_1[param_1[0x3ad] + 0x6a4];
    FUN_00eaa6e0(0x41200000,0);
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if ((iVar1 != 0) &&
     (((param_1[0x3a7] != 0 || (param_1[0x6e1] != 0)) || (iVar1 = FUN_00688620(), iVar1 == 0)))) {
                    /* WARNING: Could not recover jumptable at 0x0069c4a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  return;
}

// 0069C4B0  FUN_0069c4b0  size=647  [callgraph]
void __fastcall FUN_0069c4b0(int *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0069c5da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    iVar3 = FUN_00a8c760(0x3a);
    if (((iVar3 != 0) && (param_1[0x3a7] == 0)) &&
       ((param_1[0x6e1] == 0 && (iVar3 = FUN_00695900(), iVar3 != 0)))) {
      return;
    }
    iVar3 = FUN_00a8c760(0x3b);
    if (iVar3 == 0) {
      return;
    }
    if (param_1[0x3a7] != 0) {
      return;
    }
    if (param_1[0x6e1] != 0) {
      return;
    }
    FUN_00695980();
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
    goto switchD_0069c4e2_default;
  }
  param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
  iVar3 = FUN_00a952e0(0,0x41a00000);
  if (iVar3 != 0) {
    FUN_00dde2d0(0,2);
  }
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    if (((param_1[0x3a7] == 0) && (param_1[0x6e1] == 0)) && (iVar3 = FUN_00688620(), iVar3 != 0)) {
switchD_0069c4e2_default:
      return;
    }
    (**(code **)(*param_1 + 0x34c))();
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0069C750  FUN_0069c750  size=524  [callgraph]
void __fastcall FUN_0069c750(int *param_1)

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
    if ((((iVar2 != 0) && (param_1[0x3a7] == 0)) && (param_1[0x6e1] == 0)) &&
       (iVar2 = FUN_00695900(), iVar2 != 0)) {
      return;
    }
    iVar2 = FUN_00a8c760(0x3b);
    if (iVar2 == 0) {
      return;
    }
    if (param_1[0x3a7] != 0) {
      return;
    }
    if (param_1[0x6e1] != 0) {
      return;
    }
    FUN_00695980();
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

// 0069C970  FUN_0069c970  size=524  [callgraph]
void __fastcall FUN_0069c970(int *param_1)

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
    if ((((iVar2 != 0) && (param_1[0x3a7] == 0)) && (param_1[0x6e1] == 0)) &&
       (iVar2 = FUN_00695900(), iVar2 != 0)) {
      return;
    }
    iVar2 = FUN_00a8c760(0x3b);
    if (iVar2 == 0) {
      return;
    }
    if (param_1[0x3a7] != 0) {
      return;
    }
    if (param_1[0x6e1] != 0) {
      return;
    }
    FUN_00695980();
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

// 0069CB90  FUN_0069cb90  size=114  [callgraph]
void __thiscall FUN_0069cb90(int *param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  
  switch(param_2) {
  case 0:
    FUN_006932e0(param_3);
    break;
  case 1:
    FUN_0069b2b0(param_3);
    break;
  case 2:
    FUN_0069b3c0(param_3);
    break;
  case 3:
    FUN_0069b4f0(param_3);
  }
  if (param_1[0x669] == 0) {
    pcVar1 = *(code **)(*param_1 + 0x358);
    param_1[0x669] = 1;
    (*pcVar1)(0x195,param_1 + 0x5a8);
  }
  return;
}

// 0069CC20  FUN_0069cc20  size=86  [callgraph]
void __fastcall FUN_0069cc20(int param_1)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    if (((*(int *)(param_1 + (uVar2 + 0x193) * 0x10) == 0) &&
        (*(int *)(param_1 + 0x1994 + uVar2 * 4) < 1)) &&
       (((char)uVar2 != '\0' ||
        (((*(int *)(param_1 + 0x1940) != 0 && (*(int *)(param_1 + 0x1950) != 0)) &&
         (*(int *)(param_1 + 0x1960) != 0)))))) {
      FUN_0069cb90(uVar2,0);
    }
    bVar1 = (char)uVar2 + 1;
    uVar2 = (uint)bVar1;
  } while (bVar1 < 4);
  return;
}

// 0069CC90  FUN_0069cc90  size=320  [callgraph]
void __fastcall FUN_0069cc90(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int local_4;
  
  iVar2 = 0;
  local_4 = 4;
  do {
    switch(iVar2) {
    case 0:
      if (param_1[0x64c] == 0) {
        if ((param_1[0x301] == 0) && (param_1[0x76f] == 0)) {
          (**(code **)(*param_1 + 0x358))(0x193,param_1 + 0x3b8);
        }
        param_1[0x3e4] = 1;
        FUN_00ac9420(param_1 + 0x64e);
        param_1[0x64c] = 1;
        FUN_00ac8d80(0,1);
        FUN_00ac8d80(1,1);
        FUN_00ac8d80(2,1);
        FUN_00ac8d80(3,1);
        FUN_00ac8d80(0xf,1);
        FUN_00ac8d80(0x10,1);
        FUN_00ac8d80(9,1);
        FUN_00ac8d80(4,1);
        if ((param_1[0xcc] != 0) && (*(int *)(param_1[0xcc] + 0xcc) == 0)) {
          FUN_00684520();
        }
        param_1[0x665] = 0;
      }
      break;
    case 1:
      FUN_0069b2b0(0);
      break;
    case 2:
      FUN_0069b3c0(0);
      break;
    case 3:
      FUN_0069b4f0(0);
    }
    if (param_1[0x669] == 0) {
      pcVar1 = *(code **)(*param_1 + 0x358);
      param_1[0x669] = 1;
      (*pcVar1)(0x195,param_1 + 0x5a8);
    }
    iVar2 = iVar2 + 1;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  return;
}

// 0069CDE0  FUN_0069cde0  size=771  [callgraph]
void __fastcall FUN_0069cde0(int *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  float10 fVar7;
  undefined *puVar8;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined1 auStack_60 [4];
  float fStack_5c;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [76];
  
  uVar6 = 0;
  iVar3 = FUN_00a81330();
  if ((iVar3 != 0) && (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) {
    puVar8 = &DAT_01b35b90;
    (**(code **)(*piVar4 + 4))(&DAT_01b35b90);
    iVar3 = FUN_00dd6d80(puVar8);
    uVar6 = -(uint)(iVar3 != 0) & (uint)piVar4;
  }
  uVar5 = FUN_00a8cac0();
  switch(uVar5) {
  case 0:
    if (uVar6 != 0) {
      uVar5 = FUN_009f8b40();
      FUN_00ac8a80(uVar5);
    }
    param_1[0xd9] = param_1[0xd9] & 0xffefffff;
    param_1[0x362] = 1;
    FUN_00a900b0(1);
    pcVar1 = *(code **)(*param_1 + 0x314);
    param_1[0x139] = 1;
    (*pcVar1)();
    (**(code **)(*param_1 + 0xd0))(0);
    (**(code **)(*param_1 + 0x344))(5,3,1);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    (**(code **)(*param_1 + 0x220))(0x40a00000);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    break;
  case 2:
    FUN_00aa4080(0xdb,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_00aa4080(0xdc,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_00ac8ab0();
      (**(code **)(*param_1 + 0xd0))(1);
      iVar3 = FUN_00a8cab0();
      param_1[0x3a9] = iVar3;
      param_1[0x3aa] = param_1[0x3a8];
      FUN_00a8caf0(0xf0008,0,0,0);
      param_1[0x3a8] = 0;
      FUN_00a962d0(0,0);
      param_1[0x4e7] = 0;
    }
  }
  bVar2 = false;
  if ((((uVar6 != 0) && (iVar3 = FUN_00a8c760(0x1c), iVar3 == 0)) && (1 < param_1[0x187])) &&
     (iVar3 = FUN_00a8cbe0(0x100006), iVar3 != 0)) {
    FUN_00a8ce90(&fStack_70,auStack_60);
    fVar7 = (float10)FUN_00ddba30(*(float *)(uVar6 + 0x94) + fStack_5c);
    param_1[0x25] = (int)(float)fVar7;
    D3DXMatrixRotationY(auStack_50,*(undefined4 *)(uVar6 + 0x94));
    D3DXVec3TransformNormal(&stack0xffffff88,&stack0xffffff88,auStack_58);
    bVar2 = true;
    param_1[0x14] = (int)(*(float *)(uVar6 + 0x50) + fStack_70);
    param_1[0x15] = (int)(*(float *)(uVar6 + 0x54) + fStack_6c);
    param_1[0x16] = (int)(*(float *)(uVar6 + 0x58) + fStack_68);
    param_1[0x17] = (int)(*(float *)(uVar6 + 0x5c) + fStack_64);
  }
  (**(code **)(*param_1 + 0xd0))(!bVar2);
  iVar3 = FUN_00a8c760(0x1f);
  if (iVar3 != 0) {
    bVar2 = false;
    param_1 = param_1 + 0x665;
    iVar3 = 4;
    do {
      if (0 < *param_1) {
        bVar2 = true;
      }
      param_1 = param_1 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if (bVar2) {
      FUN_0069cc90();
    }
  }
  return;
}

// 0069D100  FUN_0069d100  size=803  [callgraph]
void __fastcall FUN_0069d100(int *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  float10 fVar8;
  undefined *puVar9;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined1 auStack_60 [4];
  float fStack_5c;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [76];
  
  uVar7 = 0;
  iVar3 = FUN_00a81330();
  if ((iVar3 != 0) && (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) {
    puVar9 = &DAT_01b35b90;
    (**(code **)(*piVar4 + 4))(&DAT_01b35b90);
    iVar3 = FUN_00dd6d80(puVar9);
    uVar7 = -(uint)(iVar3 != 0) & (uint)piVar4;
  }
  iVar3 = FUN_00a8cac0();
  if (iVar3 == 0) {
    if (uVar7 != 0) {
      uVar5 = FUN_009f8b40();
      FUN_00ac8a80(uVar5);
    }
    FUN_00aa4080(0xe4,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0xd9] = param_1[0xd9] & 0xffefffff;
    param_1[0x362] = 1;
    FUN_00a900b0(1);
    pcVar1 = *(code **)(*param_1 + 0x344);
    param_1[0x139] = 1;
    (*pcVar1)(5,3,1);
    FUN_00a7c950();
    iVar3 = FUN_00a82090("QTEKnife",0x11504,0);
    if ((iVar3 != 0) && (iVar6 = FUN_00a7c8a0(), iVar6 != 0)) {
      uVar5 = FUN_00a7c7f0();
      FUN_00a7c960(uVar5);
      FUN_00ac8ad0(3,param_1[0x13c],iVar3,0,0,0xffffffff);
      *(uint *)(iVar6 + 0x364) = *(uint *)(iVar6 + 0x364) & 0xfffffffd;
      FUN_00aa4520(0xe5,param_1[0x13c],0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (iVar3 != 1) goto LAB_0069d326;
  iVar3 = FUN_00a81330();
  if (iVar3 != 0) {
    FUN_00a81330();
    iVar3 = FUN_00a7c8a0();
    if (iVar3 != 0) {
      FUN_00a81330();
      piVar4 = (int *)FUN_00a7c8a0();
      (**(code **)(*piVar4 + 100))();
    }
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    FUN_00ac8ab0();
    iVar3 = FUN_00a8cab0();
    param_1[0x3aa] = param_1[0x3a8];
    param_1[0x3a9] = iVar3;
    FUN_00a8caf0(0xf0008,0,0,0);
    param_1[0x3a8] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4e7] = 0;
  }
LAB_0069d326:
  bVar2 = false;
  if (((uVar7 != 0) && (iVar3 = FUN_00a8c760(0x1c), iVar3 == 0)) &&
     (iVar3 = FUN_00a8cbe0(0x100007), iVar3 != 0)) {
    FUN_00a8ce90(&fStack_70,auStack_60);
    fVar8 = (float10)FUN_00ddba30(*(float *)(uVar7 + 0x94) + fStack_5c);
    param_1[0x25] = (int)(float)fVar8;
    D3DXMatrixRotationY(auStack_50,*(undefined4 *)(uVar7 + 0x94));
    D3DXVec3TransformNormal(&stack0xffffff88,&stack0xffffff88,auStack_58);
    bVar2 = true;
    param_1[0x14] = (int)(*(float *)(uVar7 + 0x50) + fStack_70);
    param_1[0x15] = (int)(*(float *)(uVar7 + 0x54) + fStack_6c);
    param_1[0x16] = (int)(*(float *)(uVar7 + 0x58) + fStack_68);
    param_1[0x17] = (int)(*(float *)(uVar7 + 0x5c) + fStack_64);
  }
  (**(code **)(*param_1 + 0x314))();
  if (bVar2) {
    (**(code **)(*param_1 + 0x318))();
  }
  iVar3 = FUN_00a8c760(0x1f);
  if (iVar3 != 0) {
    bVar2 = false;
    param_1 = param_1 + 0x665;
    iVar3 = 4;
    do {
      if (0 < *param_1) {
        bVar2 = true;
      }
      param_1 = param_1 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if (bVar2) {
      FUN_0069cc90();
    }
  }
  return;
}

// 0069D430  FUN_0069d430  size=370  [callgraph]
undefined4 __thiscall FUN_0069d430(int *param_1,int param_2)

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
    piVar4 = param_1 + 0x665;
    iVar5 = 4;
    do {
      if (0 < *piVar4) {
        bVar1 = true;
      }
      piVar4 = piVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    if (bVar1) {
      FUN_0069cc90();
      (**(code **)(*param_1 + 0x358))(399,0);
    }
  }
  if (((*(uint *)(param_2 + 0x8c) & 0x600) != 0) || ((*(uint *)(param_2 + 0x90) & 0x40000) != 0)) {
    bVar3 = true;
  }
  if ((((bVar2) || (param_1[0x64c] != 0)) || (param_1[0x650] != 0)) ||
     ((param_1[0x654] != 0 || (param_1[0x658] != 0)))) {
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
            param_1[0x700] = *(int *)(iVar6 + 0x40);
            param_1[0x701] = *(int *)(iVar6 + 0x44);
            param_1[0x702] = *(int *)(iVar6 + 0x48);
            param_1[0x703] = *(int *)(iVar6 + 0x4c);
          }
          param_1[0x704] = *(int *)(param_2 + 0x20);
          param_1[0x705] = *(int *)(param_2 + 0x24);
          param_1[0x706] = *(int *)(param_2 + 0x28);
          param_1[0x707] = *(int *)(param_2 + 0x2c);
          return 1;
        }
      }
    }
  }
  return 0;
}

// 0069D5B0  FUN_0069d5b0  size=443  [callgraph]
void __thiscall FUN_0069d5b0(int *param_1,int param_2)

{
  code *pcVar1;
  uint uVar2;
  byte bVar3;
  
  param_1[0x665] = param_1[0x665] - param_2;
  param_1[0x666] = param_1[0x666] - param_2;
  param_1[0x667] = param_1[0x667] - param_2;
  param_1[0x668] = param_1[0x668] - param_2;
  bVar3 = 0;
  do {
    uVar2 = (uint)bVar3;
    if (((param_1[(uVar2 + 0x193) * 4] == 0) && (param_1[uVar2 + 0x665] < 1)) &&
       ((bVar3 != 0 || (((param_1[0x650] != 0 && (param_1[0x654] != 0)) && (param_1[0x658] != 0)))))
       ) {
      switch(uVar2) {
      case 0:
        if (param_1[0x64c] == 0) {
          if ((param_1[0x301] == 0) && (param_1[0x76f] == 0)) {
            (**(code **)(*param_1 + 0x358))(0x193,param_1 + 0x3b8);
          }
          param_1[0x3e4] = 1;
          FUN_00ac9420(param_1 + 0x64e);
          param_1[0x64c] = 1;
          FUN_00ac8d80(0,1);
          FUN_00ac8d80(1,1);
          FUN_00ac8d80(2,1);
          FUN_00ac8d80(3,1);
          FUN_00ac8d80(0xf,1);
          FUN_00ac8d80(0x10,1);
          FUN_00ac8d80(9,1);
          FUN_00ac8d80(4,1);
          if ((param_1[0xcc] != 0) && (*(int *)(param_1[0xcc] + 0xcc) == 0)) {
            FUN_00684520();
          }
          param_1[0x665] = 0;
        }
        break;
      case 1:
        FUN_0069b2b0(0);
        break;
      case 2:
        FUN_0069b3c0(0);
        break;
      case 3:
        FUN_0069b4f0(0);
      }
      if (param_1[0x669] == 0) {
        pcVar1 = *(code **)(*param_1 + 0x358);
        param_1[0x669] = 1;
        (*pcVar1)(0x195,param_1 + 0x5a8);
      }
    }
    bVar3 = bVar3 + 1;
  } while (bVar3 < 4);
  return;
}

// 0069D780  Em8060::vf40  size=3353  [class]
undefined4 __fastcall Em8060::vf40(int *param_1)

{
  uint *puVar1;
  undefined2 uVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  int iVar10;
  float10 fVar11;
  char *pcVar12;
  int aiStack_b4 [3];
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
  param_1[0x360] = 0;
  if ((*(byte *)(param_1 + 0x12a) & 8) == 0) {
    puVar7 = (undefined4 *)FUN_00dd3580(0x90,&DAT_01b7bd48);
    param_1[0x360] = (int)puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      puVar9 = &DAT_01882350;
      for (iVar4 = 0x24; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar7 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar7 = puVar7 + 1;
      }
      lib::AllocatedArray<cEnemySubState>::AllocatedArray<cEnemySubState>
                (param_1[0x13c],2,param_1[0x360],4);
      FUN_00a88b50(1,0);
      param_1[0x34a] = 1;
    }
  }
  else {
    FUN_00a82ac0(param_1[0x13c],4,2,0xffffffff);
    param_1[0x205] = 4;
  }
  local_a8 = 0;
  if (0 < (short)param_1[0xc9]) {
    local_a4 = 0;
    do {
      iVar10 = param_1[200] + local_a4;
      iVar4 = *(int *)(*(int *)(iVar10 + 0x60) + 0x40);
      if ((iVar4 != 0) && (iVar4 = FUN_00fdbbd0(iVar4,&DAT_0163dcac), iVar4 != 0)) {
        puVar1 = (uint *)(iVar10 + 0x38);
        *puVar1 = *puVar1 & 0xfffffffe;
      }
      local_a4 = local_a4 + 0x70;
      local_a8 = local_a8 + 1;
    } while (local_a8 < (short)param_1[0xc9]);
  }
  param_1[0x1ed] = 0;
  local_a4 = FUN_00acf600(0x2806f,"Em8060Body");
  local_a8 = param_1[300];
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e272b0(local_a8,0x20060);
  iVar4 = FUN_00ac8a50();
  if (iVar4 == 0) {
    FUN_00ac94e0(&DAT_0163d9a8);
  }
  if ((local_a4 != 0) && (*(int *)(local_a4 + 0x370) != 0)) {
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
  param_1[0x50e] = 0;
  param_1[0x50f] = 0;
  param_1[0x578] = 0;
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
  FUN_008e5610(0x100);
  FUN_008e5610(0x80);
  FUN_008e6d00();
  FUN_00a929d0();
  if (param_1[0x1d5] != 0) {
    iVar4 = FUN_00ac8660(0,0x1a);
    uVar2 = FUN_00ac8660(0,0x1b);
    sVar3 = FUN_00dde2d0(0,uVar2);
    local_a8 = sVar3 + iVar4;
    iVar4 = FUN_00fdbc60();
    local_a8 = iVar4;
    if (param_1[0x128] == 1) {
      FUN_00ac85c0(5,0x8b);
      iVar4 = FUN_00fdbc60();
    }
    FUN_00a8edf0(iVar4);
    Em8060Config::initializeBattleParameterConfig();
  }
  if ((param_1[0xcc] == 0) || (*(int *)(param_1[0xcc] + 0xcc) != 0)) goto LAB_0069df8f;
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
    local_a4 = param_1[0x13c];
    uVar5 = FUN_00de3ee0(local_a8);
    uVar6 = FUN_00de3cf0(local_a8);
    iVar4 = FUN_008f6410(local_a4,uVar6,uVar5);
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
      FUN_008f1600(0x100);
      FUN_008f1600(0x80);
    }
  }
  lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>_2(0x40);
  local_a4 = FUN_00a8d2a0();
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
    FUN_00a93a00(iVar4,local_a4);
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
    FUN_00a93a00(iVar4,local_a4);
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
    FUN_00a93a00(iVar4,local_a4);
    FUN_00d7b0f0();
    FUN_00d7b890();
  }
  iVar4 = lib::StaticArray<Constraints,32>::StaticArray<Constraints,32>();
  if (iVar4 == 0) {
    return 0;
  }
  if ((param_1[0xcc] != 0) && (*(int *)(param_1[0xcc] + 0xcc) == 0)) {
    FUN_00691a80(1,"Wp0311",0x30311,2,4,0xffffffff);
    FUN_00691a80(2,"Wp0315",0x30315,2,4,0xffffffff);
    if (param_1[0x128] == 0) {
      uVar6 = 0;
      uVar5 = 0x30310;
      pcVar12 = "Wp0310";
    }
    else {
      if (param_1[0x128] != 1) goto LAB_0069df65;
      uVar6 = 1;
      uVar5 = 0x30312;
      pcVar12 = "Wp0312";
    }
    FUN_00691a80(0,pcVar12,uVar5,uVar6,0x23,0xffffffff);
  }
LAB_0069df65:
  if ((*(byte *)(param_1 + 0x12a) & 4) == 0) {
    (**(code **)(*param_1 + 0x358))(0,param_1 + 1000);
    piVar8 = param_1;
    FUN_00c1cf50(param_1);
    FUN_00c54720(piVar8);
  }
LAB_0069df8f:
  FUN_00a82790(param_1[0x13c],0x25,0);
  param_1[0x47c] = param_1[0x47c] | 2;
  FUN_00a82870(0x40490fdb,0xc0490fdb,0x3e99999a,0x3ae4c388,0x3e0efa35);
  FUN_00a82790(param_1[0x13c],0x26,0);
  param_1[0x4b0] = param_1[0x4b0] | 2;
  FUN_00a82840(0,0xbfb2b8c2,0x3e99999a,0x3ae4c388,0x3e0efa35);
  FUN_00a82610(param_1[0x13c],2,0xffffffff);
  param_1[0x769] = 0x3cd67750;
  param_1[0x768] = 0x3da3d70a;
  local_a0 = 0x3e32b8c2;
  local_9c = 0x3db2b8c2;
  local_98 = 0;
  FUN_00a83270(&local_a0,0x3f860a92,0x3f060a92);
  param_1[0x5d5] = 0;
  param_1[0x5d6] = 0;
  param_1[0x5d7] = 0;
  param_1[0x4e5] = 0;
  if ((param_1[0xcc] != 0) && (*(int *)(param_1[0xcc] + 0xcc) == 0)) {
    piVar8 = param_1 + 0x5e3;
    iVar4 = 0x10;
    do {
      *(undefined2 *)(piVar8 + -4) = 0;
      *piVar8 = 0;
      piVar8 = piVar8 + 5;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *(undefined2 *)(param_1 + 0x6d4) = 0;
  *(undefined1 *)((int)param_1 + 0x1b52) = 0;
  FUN_0067d040();
  FUN_0067d250();
  FUN_00684040();
  param_1[0x5d9] = 0;
  param_1[0x5da] = 0;
  param_1[0x3e4] = 0;
  param_1[0x5db] = 0x43960000;
  param_1[0x3e5] = 0;
  param_1[0x3e6] = 0;
  param_1[0x5d8] = 0x44160000;
  param_1[999] = 0;
  param_1[0x504] = 0;
  param_1[0x3b1] = 0;
  param_1[0x5dc] = 0;
  param_1[0x3ae] = 0;
  param_1[0x6d3] = 0;
  param_1[0x3af] = 0;
  param_1[0x3ad] = 0;
  param_1[0x3b0] = 0x44610000;
  param_1[0x66a] = 0;
  param_1[0x66b] = 1;
  fVar11 = (float10)(**(code **)(*(int *)param_1[0x1d5] + 0x34))(0x16);
  param_1[0x66c] = (int)(float)fVar11;
  fVar11 = (float10)(**(code **)(*(int *)param_1[0x1d5] + 0x34))(0x17);
  param_1[0x66d] = (int)(float)fVar11;
  fVar11 = (float10)(**(code **)(*(int *)param_1[0x1d5] + 0x3c))(0x17);
  param_1[0x66e] = (int)(float)fVar11;
  param_1[0x3b0] = param_1[0x66c];
  sVar3 = FUN_00dde2d0(0,0x32);
  param_1[0x5dd] = sVar3 + 100;
  param_1[0x5de] = 0;
  param_1[0x6d9] = 0;
  param_1[0x6da] = 0;
  param_1[0x6db] = 0;
  param_1[0x6dc] = 0;
  *(undefined1 *)(param_1 + 0x6dd) = 0;
  param_1[0x6e3] = 0;
  param_1[0x76f] = 0;
  iVar4 = FUN_00a8cab0();
  param_1[0x3a9] = iVar4;
  param_1[0x3aa] = param_1[0x3a8];
  FUN_00a8caf0(0x10000,0,0,0);
  param_1[0x3a8] = 0;
  FUN_00a962d0(0,0);
  param_1[0x712] = 0x42700000;
  param_1[0x4e7] = 0;
  param_1[0x70d] = -0x40800000;
  param_1[0x20b] = 4;
  param_1[0x20c] = 5;
  param_1[0x713] = 0;
  param_1[0x708] = 0;
  param_1[0x714] = 0;
  param_1[0x70a] = 0;
  param_1[0x715] = 0;
  param_1[0x70e] = 0;
  param_1[0x718] = 0;
  param_1[0x770] = -1;
  param_1[0x727] = 0;
  param_1[0x709] = 1;
  param_1[0x3b2] = 0;
  param_1[0x710] = 0;
  param_1[0x724] = 0;
  param_1[0x711] = 0;
  param_1[0x716] = 0;
  param_1[0x725] = 0x44610000;
  param_1[0x717] = 0;
  param_1[0x719] = 1;
  param_1[0x726] = 0;
  param_1[0x6e1] = 0;
  param_1[0x71a] = 0;
  if ((param_1[0xcc] != 0) && (*(int *)(param_1[0xcc] + 0xcc) == 0)) {
    aiStack_b4[0] = param_1[0x13c];
    Em8060Team::entry(aiStack_b4);
  }
  if ((*(byte *)(param_1 + 0x12a) & 1) != 0) {
    (**(code **)(*param_1 + 0x110))(1);
    param_1[0x71c] = 0x42700000;
    (**(code **)(*param_1 + 0x358))(0x208,param_1 + 0x414);
    if ((*(byte *)(param_1 + 0x12a) & 0x80) == 0) {
      FUN_00a8caf0(0x8002a,0,0,0);
      param_1[0x3a8] = 0;
      FUN_00a962d0(0,0);
      param_1[0x4e7] = 0;
    }
  }
  if ((*(byte *)(param_1 + 0x12a) & 2) != 0) {
    FUN_00a8caf0(0x8002b,0,0,0);
    param_1[0x3a8] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4e7] = 0;
  }
  FUN_0067d700();
  param_1[0x3a7] = 0;
  param_1[0x3a4] = 0x10000;
  param_1[0x3a5] = 0x10000;
  param_1[0x3a6] = 0x10000;
  param_1[0x36a] = 0;
  param_1[0x36c] = 0;
  param_1[0x728] = param_1[0x14];
  param_1[0x729] = param_1[0x15];
  param_1[0x72a] = param_1[0x16];
  param_1[0x72b] = param_1[0x17];
  param_1[0x72c] = param_1[0x24];
  param_1[0x72d] = param_1[0x25];
  param_1[0x72e] = param_1[0x26];
  param_1[0x72f] = param_1[0x27];
  param_1[0x6e7] = 0;
  param_1[0x6e8] = 0;
  param_1[0x6e9] = 0;
  param_1[0x6ea] = 0;
  param_1[0x6eb] = 0;
  param_1[0x6ec] = 0;
  param_1[0x76e] = 0;
  param_1[0x76d] = 0;
  return 1;
}

// 0069E4B0  FUN_0069e4b0  size=683  [between]
void __fastcall FUN_0069e4b0(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x1d4))(0);
  iVar1 = param_1[0x186];
  if (iVar1 < 0x30001) {
    switch(iVar1) {
    case 0x10000:
      FUN_0069bd30();
      FUN_0068b240();
      return;
    case 0x10001:
      FUN_0069c020();
      FUN_0068b240();
      return;
    case 0x10003:
      FUN_00691b20();
      FUN_0068b240();
      return;
    case 0x10004:
      FUN_0068c7d0();
      FUN_0068b240();
      return;
    case 0x10005:
    case 0x10006:
      FUN_0067c3e0();
      FUN_0068b240();
      return;
    case 0x10010:
      FUN_00682d00();
      FUN_0068b240();
      return;
    case 0x10011:
      FUN_00682d70();
      FUN_0068b240();
      return;
    case 0x10012:
      FUN_00682de0();
      FUN_0068b240();
      return;
    }
  }
  else if (iVar1 < 0x80001) {
    if (iVar1 != 0x80000) {
      if (iVar1 < 0x60001) {
        if (iVar1 != 0x60000) {
          switch(iVar1) {
          case 0x5000a:
            FUN_00689ac0();
            FUN_0068b240();
            return;
          }
        }
      }
      else {
        switch(iVar1) {
        case 0x6000b:
        case 0x6000c:
        case 0x60011:
          (**(code **)(*param_1 + 0x1d4))(1);
          FUN_0068b240();
          return;
        case 0x6000d:
          FUN_006831e0();
          FUN_0068b240();
          return;
        case 0x60012:
          FUN_00683600();
          FUN_0068b240();
          return;
        case 0x60017:
          FUN_00683910();
          FUN_0068b240();
          return;
        case 0x60018:
          FUN_00683a40();
          FUN_0068b240();
          return;
        }
      }
    }
  }
  else if (iVar1 < 0xa0001) {
    if (iVar1 == 0xa0000) {
      FUN_0068a2e0();
      FUN_0068b240();
      return;
    }
    switch(iVar1) {
    case 0x80006:
      FUN_00690c40();
      FUN_0068b240();
      return;
    case 0x80028:
      FUN_00686b60();
      FUN_0068b240();
      return;
    case 0x8002b:
      FUN_0068cce0();
      FUN_0068b240();
      return;
    }
  }
  else if (iVar1 < 0xb0001) {
    if (iVar1 == 0xb0000) {
      FUN_0068b940();
      FUN_0068b240();
      return;
    }
    switch(iVar1) {
    case 0xa0001:
      FUN_0068a7e0();
      FUN_0068b240();
      return;
    case 0xa0002:
    case 0xa0003:
      FUN_0068a860();
      FUN_0068b240();
      return;
    case 0xa0006:
      FUN_006816e0();
      FUN_0068b240();
      return;
    }
  }
  else if ((iVar1 < 0xf0001) && (iVar1 != 0xf0000)) {
    switch(iVar1) {
    case 0xb0001:
      FUN_0068bab0();
      FUN_0068b240();
      return;
    case 0xb0002:
      FUN_0068bb90();
      FUN_0068b240();
      return;
    case 0xb0004:
      FUN_0068bc60();
      FUN_0068b240();
      return;
    case 0xb0005:
      FUN_0068c020();
      FUN_0068b240();
      return;
    case 0xb0006:
      FUN_0068c100();
      FUN_0068b240();
      return;
    case 0xb0007:
      FUN_0068c400();
    }
  }
  FUN_0068b240();
  return;
}

// 0069E870  FUN_0069e870  size=1582  [between]
void __fastcall FUN_0069e870(int param_1)

{
  int iVar1;
  int local_4;
  
  iVar1 = *(int *)(param_1 + 0x618);
  local_4 = param_1;
  if (iVar1 < 0x30001) {
    if (iVar1 == 0x30000) {
      FUN_006824f0();
    }
    else {
      switch(iVar1) {
      case 0x10000:
        FUN_0067c260();
        break;
      case 0x10001:
        FUN_006825d0();
        break;
      case 0x10002:
        FUN_0067c330();
        break;
      case 0x10003:
        FUN_00692030();
        break;
      case 0x10004:
        FUN_00698930();
        break;
      case 0x10005:
      case 0x10006:
        FUN_00698e20();
        break;
      case 0x10007:
      case 0x10008:
        FUN_00699010();
        break;
      case 0x10009:
        FUN_0067c420();
        break;
      case 0x1000a:
        FUN_006828b0();
        break;
      case 0x1000b:
        FUN_006829c0();
        break;
      case 0x1000c:
        FUN_00682b20();
        break;
      case 0x1000d:
      case 0x1000e:
      case 0x1000f:
        FUN_00699200();
        break;
      case 0x10010:
        FUN_00699630();
        break;
      case 0x10011:
        FUN_00699b90();
        break;
      case 0x10012:
        FUN_0067c550();
        break;
      case 0x10013:
        FUN_0069c170();
      }
    }
  }
  else if (iVar1 < 0x80001) {
    if (iVar1 == 0x80000) {
      Em8060::R0_ExplodeDie_2();
    }
    else if (iVar1 < 0x60001) {
      if (iVar1 == 0x60000) {
        FUN_00682e70();
      }
      else if (iVar1 < 0x50001) {
        if (iVar1 == 0x50000) {
          FUN_00695e00();
        }
        else if (iVar1 == 0x30001) {
          FUN_0067c1c0();
        }
      }
      else {
        switch(iVar1) {
        case 0x50001:
          FUN_00696060();
          break;
        case 0x50002:
          FUN_006963e0();
          break;
        case 0x50003:
          FUN_00680680();
          break;
        case 0x50004:
        case 0x50005:
        case 0x50006:
          FUN_006965e0();
          break;
        case 0x50007:
          FUN_00680960();
          break;
        case 0x50008:
        case 0x50009:
          FUN_00689790();
          break;
        case 0x5000a:
          FUN_00680da0();
          break;
        case 0x5000b:
          FUN_006810a0();
          break;
        case 0x5000c:
          FUN_00689ae0();
          break;
        case 0x5000d:
          FUN_00689d20();
          break;
        case 0x5000e:
          FUN_00681290();
          break;
        case 0x50018:
          Em8060::R0_ChanceAttack();
        }
      }
    }
    else {
      switch(iVar1) {
      case 0x60001:
        FUN_0069c280();
        break;
      case 0x60002:
        FUN_0069c3a0();
        break;
      case 0x60003:
        FUN_0069c4b0();
        break;
      case 0x60004:
        FUN_0067c610();
        break;
      case 0x60005:
        FUN_0069c750();
        break;
      case 0x60006:
        FUN_0067c6e0();
        break;
      case 0x60007:
        FUN_0069c970();
        break;
      case 0x60009:
        FUN_00682f10();
        break;
      case 0x6000a:
        FUN_0069a0c0();
        break;
      case 0x6000b:
        FUN_0068c8c0();
        break;
      case 0x6000c:
        FUN_00683100();
        break;
      case 0x6000d:
        FUN_0067c7d0();
        break;
      case 0x6000e:
        FUN_00683260();
        break;
      case 0x6000f:
        FUN_00683340();
        break;
      case 0x60010:
        FUN_00683430();
        break;
      case 0x60011:
        FUN_00683520();
        break;
      case 0x60012:
        FUN_0067c890();
        break;
      case 0x60013:
        FUN_00683680();
        break;
      case 0x60014:
        FUN_00683760();
        break;
      case 0x60015:
        FUN_0068c9d0();
        break;
      case 0x60016:
        FUN_00683840();
        break;
      case 0x60017:
        FUN_00683970();
        break;
      case 0x60018:
        FUN_00683a40();
      }
    }
  }
  else if (iVar1 < 0xa0001) {
    if (iVar1 == 0xa0000) {
      FUN_0068a4a0();
    }
    else {
      switch(iVar1) {
      case 0x80001:
        FUN_006924e0();
        break;
      case 0x80002:
        FUN_0067ff00();
        break;
      case 0x80003:
        FUN_0067ffb0();
        break;
      case 0x80004:
        FUN_00680060();
        break;
      case 0x80005:
        FUN_0067e9b0();
        break;
      case 0x80006:
        FUN_0067ea70();
        break;
      case 0x80007:
        FUN_0067eb30();
        break;
      case 0x80008:
        FUN_0067ec00();
        break;
      case 0x80009:
        FUN_00685070();
        break;
      case 0x8000a:
        FUN_0067edf0();
        break;
      case 0x8000b:
        FUN_00685370();
        break;
      case 0x8000c:
        FUN_0067ecf0();
        break;
      case 0x8000d:
        FUN_006856c0();
        break;
      case 0x8000e:
        FUN_0067eec0();
        break;
      case 0x8000f:
        FUN_006857d0();
        break;
      case 0x80010:
        FUN_006858e0();
        break;
      case 0x80011:
        FUN_006859f0();
        break;
      case 0x80012:
        FUN_00685b00();
        break;
      case 0x80013:
        FUN_00685c30();
        break;
      case 0x80014:
        FUN_00685d40();
        break;
      case 0x80015:
        FUN_00685e70();
        break;
      case 0x80016:
        FUN_00685f80();
        break;
      case 0x80017:
        FUN_00686090();
        break;
      case 0x80018:
        FUN_006861a0();
        break;
      case 0x80019:
        FUN_006862b0();
        break;
      case 0x8001a:
        FUN_006863c0();
        break;
      case 0x8001b:
        FUN_006864d0();
        break;
      case 0x8001c:
        FUN_006865e0();
        break;
      case 0x8001d:
        FUN_006866f0();
        break;
      case 0x8001e:
        FUN_00686800();
        break;
      case 0x8001f:
        FUN_0067f1d0();
        break;
      case 0x80020:
        FUN_00694300();
        break;
      case 0x80021:
        FUN_0067f2c0();
        break;
      case 0x80022:
        FUN_0067f4e0();
        break;
      case 0x80023:
        FUN_0067f6d0();
        break;
      case 0x80024:
        FUN_0067f7b0();
        break;
      case 0x80025:
        FUN_0067f890();
        break;
      case 0x80026:
        FUN_0067f9f0();
        break;
      case 0x80027:
        FUN_00686910();
        break;
      case 0x80028:
        FUN_00686bb0();
        break;
      case 0x80029:
        Em8060::R0_ExplodeDie();
        break;
      case 0x8002a:
        FUN_00683ab0();
        break;
      case 0x8002b:
        FUN_0067c9a0();
      }
    }
  }
  else if (iVar1 < 0xb0001) {
    if (iVar1 == 0xb0000) {
      FUN_00697a60();
    }
    else {
      switch(iVar1) {
      case 0xa0001:
        FUN_00696ea0();
        break;
      case 0xa0002:
      case 0xa0003:
        FUN_0068a9a0();
        break;
      case 0xa0004:
        FUN_0068ad60();
        break;
      case 0xa0005:
        FUN_0068afb0();
        break;
      case 0xa0006:
        FUN_00697420();
        break;
      case 0xa0007:
        FUN_00697960();
      }
    }
  }
  else if (iVar1 < 0xf0001) {
    if (iVar1 == 0xf0000) {
      FUN_00689f60();
    }
    else {
      switch(iVar1) {
      case 0xb0001:
        FUN_00697f00();
        break;
      case 0xb0002:
        FUN_00697f60();
        break;
      case 0xb0003:
        FUN_00681a90();
        break;
      case 0xb0004:
        FUN_0068bd40();
        break;
      case 0xb0005:
        FUN_00681d00();
        break;
      case 0xb0006:
        FUN_0068c1d0();
        break;
      case 0xb0007:
        FUN_0068c4d0();
        break;
      case 0xb0008:
        FUN_0068cae0();
        break;
      case 0xb0009:
        FUN_0067e520();
      }
    }
  }
  else {
    switch(iVar1) {
    case 0xf0001:
      FUN_00681470();
      break;
    case 0xf0002:
      FUN_0069a2b0();
      break;
    case 0xf0003:
    case 0xf0004:
    case 0xf0005:
      FUN_006967d0();
      break;
    case 0xf0006:
      FUN_0069cde0();
      break;
    case 0xf0007:
      FUN_0069d100();
      break;
    case 0xf0008:
      FUN_00684c70();
      break;
    case 0xf0009:
      FUN_00691130();
      break;
    case 0xf000a:
      FUN_00691440();
    }
  }
  if (*(int *)(param_1 + 0xe9c) == 0) {
    local_4 = *(int *)(param_1 + 0x4f0);
    iVar1 = FUN_00690dd0(&local_4);
    if (((iVar1 == 2) &&
        ((((iVar1 = FUN_00a8c760(0x3a), iVar1 == 0 || (*(int *)(param_1 + 0xe9c) != 0)) ||
          (*(int *)(param_1 + 0x1b84) != 0)) || (iVar1 = FUN_00695900(), iVar1 == 0)))) &&
       (((iVar1 = FUN_00a8c760(0x3b), iVar1 != 0 && (*(int *)(param_1 + 0xe9c) == 0)) &&
        (*(int *)(param_1 + 0x1b84) == 0)))) {
      FUN_00695980();
      return;
    }
  }
  return;
}

// 0069F0D0  FUN_0069f0d0  size=2205  [between]
uint __thiscall FUN_0069f0d0(int *param_1,int *param_2)

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
  float *pfVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  uint unaff_ESI;
  int unaff_EDI;
  float10 fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  int iVar20;
  int local_54;
  undefined1 auStack_30 [44];
  
  iVar20 = param_1[0x186];
  iVar9 = *param_2;
  if ((((iVar9 == 0) || (iVar9 == 1)) || (iVar9 == 2)) || ((iVar9 == 0x1b0 || (iVar9 == 0x147)))) {
    return 0;
  }
  uVar11 = param_2[1];
  local_54 = 0;
  iVar9 = FUN_00a81330();
  if (iVar9 != 0) {
    local_54 = FUN_00a7c8a0();
  }
  param_1[0x700] = param_2[0x40];
  param_1[0x701] = param_2[0x41];
  param_1[0x702] = param_2[0x42];
  param_1[0x703] = param_2[0x43];
  if (local_54 != 0) {
    param_1[0x700] = *(int *)(local_54 + 0x40);
    param_1[0x701] = *(int *)(local_54 + 0x44);
    param_1[0x702] = *(int *)(local_54 + 0x48);
    param_1[0x703] = *(int *)(local_54 + 0x4c);
  }
  param_1[0x704] = param_2[8];
  param_1[0x705] = param_2[9];
  param_1[0x706] = param_2[10];
  param_1[0x707] = param_2[0xb];
  if ((local_54 == 0) || ((*(byte *)(local_54 + 0x4c0) & 0x10) == 0)) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0x36d) & 8) == 0) {
    *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 1;
  }
  FUN_0069cc20();
  if (((iVar20 == 0x60003) || (iVar20 == 0x60005)) && (*param_2 == 0x4f)) {
    iVar9 = FUN_00fdbc60();
    if (iVar9 < param_1[0x21c]) {
      FUN_0067cd40((uint)(iVar20 == 0x60005) * 2 + 0x60004,0,0,0,0);
      return 0;
    }
    FUN_0067cd40(0x1000c,0,0,0,0);
    (**(code **)(*param_1 + 0x198))(local_54,param_2,1);
    return uVar11;
  }
  iVar20 = 0;
  uVar11 = (uint)*(byte *)(param_2 + 4);
  (**(code **)(*param_1 + 0x21c))(local_54,uVar11,0x3c23d70a,0);
  if (*param_2 == 0x4f) {
    iVar9 = FUN_00a8cab0();
    param_1[0x3aa] = param_1[0x3a8];
    param_1[0x3a9] = iVar9;
    FUN_00a8caf0(0x1000c,0,0,0);
    param_1[0x3a8] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4e7] = 0;
    uVar12 = 1;
    iVar9 = FUN_0067d5f0();
    if (iVar9 != 0) {
      uVar12 = 0x21;
    }
    (**(code **)(*param_1 + 0x198))(iVar20,param_2,uVar12);
    return 1;
  }
  if (*param_2 == 0x93) {
    (**(code **)(*param_1 + 0x198))(iVar20,param_2,0x40000);
    return 0;
  }
  if ((*(byte *)(param_2 + 0x23) & 0x10) == 0) {
    if (param_1[0x3ad] != 0) {
      unaff_EDI = FUN_00fdbc60();
    }
    iVar9 = FUN_00a8cbe0(0x1000a);
    if (iVar9 != 0) {
      unaff_EDI = unaff_EDI / 2;
    }
    (**(code **)(*param_1 + 0x30c))(unaff_EDI,0);
  }
  iVar9 = FUN_0067fe90();
  if (iVar9 != 0) {
    FUN_00c27260(0x40200000);
  }
  iVar9 = FUN_0067feb0();
  if (iVar9 != 0) {
    FUN_00c272a0(0x40a00000);
  }
  if ((*(byte *)(param_2 + 0x23) & 2) == 0) {
    FUN_0069d5b0(unaff_EDI,param_1 + 0x700,param_1 + 0x704);
  }
  else {
    FUN_0069cc90();
    (**(code **)(*param_1 + 0x358))(399,0);
  }
  if (param_1[0x21c] < 1) {
    uVar12 = 0;
    if ((param_2[0x23] & 0x100000U) != 0) {
      uVar12 = 2;
    }
    if ((param_2[0x24] & 0x200U) != 0) {
      uVar12 = 4;
    }
    (**(code **)(*param_1 + 0x344))(5,uVar12,(uint)param_2[0x24] >> 0xb & 1);
    FUN_00c1a1c0(param_1[0x13c],param_1[0x2e7]);
    uVar12 = 1;
    uVar13 = 0x80000;
    if (*param_2 == 0x92) {
      uVar12 = 0x21;
      param_1[0x76f] = 1;
      iVar9 = 0;
      iVar20 = 4;
      do {
        FUN_0069cb90(iVar9,0);
        iVar9 = iVar9 + 1;
        iVar20 = iVar20 + -1;
      } while (iVar20 != 0);
      uVar13 = 0xb0008;
    }
    else if ((*(byte *)((int)param_2 + 0x8e) & 1) != 0) {
      uVar12 = 0x41;
    }
    (**(code **)(*param_1 + 0x198))(local_54,param_2,uVar12);
    param_1[0x139] = 1;
    FUN_0067cd40(uVar13,0,0,0,0);
    return uVar11;
  }
  bVar7 = true;
  param_1[0x3b1] = param_1[0x3b1] + 1;
  if (2 < *(byte *)((int)param_2 + 0x11)) {
    param_1[0x5dd] = param_1[0x5dd] - (uint)*(byte *)((int)param_2 + 0x11);
  }
  uVar19 = 0x3f800000;
  uVar18 = 0;
  uVar17 = 0x8000210;
  uVar16 = 0x3f800000;
  uVar13 = 0x3d088889;
  uVar12 = 1;
  sVar8 = FUN_00dde2d0(0,2);
  FUN_00aa4080(sVar8 + 0x61,uVar12,uVar13,uVar16,uVar17,uVar18,uVar19);
  fVar15 = (float10)FUN_00ddba30((float)param_2[0xc] - (float)param_1[0x25]);
  param_1[0x245] = (int)(float)fVar15;
  if (((param_1[0x186] == 0x1000a) || (param_1[0x186] == 0x6000a)) ||
     ((iVar9 = FUN_00a8c760(0x10), iVar9 != 0 ||
      ((iVar9 = FUN_00680610(), iVar9 == 0 && (iVar9 = FUN_0067d010(), iVar9 == 0)))))) {
    unaff_ESI = 0x401;
    goto LAB_0069f7a1;
  }
  if ((*(byte *)((int)param_2 + 0x8e) & 1) != 0) {
    if ((((param_1[0x64c] == 0) && (param_1[0x650] == 0)) && (param_1[0x654] == 0)) &&
       (param_1[0x658] == 0)) {
      bVar7 = false;
    }
    iVar9 = FUN_00a9b930();
    if (iVar9 != 0) {
      FUN_00a9b930();
      iVar9 = FUN_00bda170();
      if (iVar9 == 0) goto LAB_0069f62c;
    }
    if (bVar7) {
      unaff_ESI = 0x41;
      FUN_0067cd40(0x60001,0,0,0,0);
    }
  }
LAB_0069f62c:
  if (param_1[0x6b6] != 0) {
    iVar9 = FUN_0067d010();
    if (iVar9 == 0) {
      iVar9 = FUN_00680160();
      if (iVar9 != 0) goto LAB_0069f668;
      uVar12 = 0x60001;
    }
    else {
      uVar12 = 0x60002;
    }
    FUN_0067cd40(uVar12,0,0,0,0);
  }
LAB_0069f668:
  if ((param_2[0x24] & 0x800000U) == 0) {
    if ((*param_2 == 0x4c) || (*param_2 == 0x4b)) {
      FUN_00a81330();
      pfVar10 = (float *)FUN_00a7c8b0();
      fVar1 = *pfVar10;
      fVar2 = pfVar10[1];
      fVar3 = pfVar10[2];
      pfVar10 = (float *)(**(code **)(*param_1 + 0x68))();
      fVar4 = *pfVar10;
      fVar5 = pfVar10[1];
      fVar6 = pfVar10[2];
      pfVar10 = (float *)FUN_00a925a0(auStack_30);
      uVar12 = 0x6000f;
      if (pfVar10[2] * (fVar3 - fVar6) + (fVar1 - fVar4) * *pfVar10 + pfVar10[1] * (fVar2 - fVar5)
          <= 0.0) {
        uVar12 = 0x60010;
      }
      FUN_0067cd40(uVar12,0,0,0,0);
    }
    else if ((param_2[0x24] & 0x2000000U) != 0) {
      FUN_0067cd40(0x60011,0,0,0,0);
      FUN_00a8e880(iVar20 + 0x40);
      (**(code **)(*param_1 + 0x308))(0x3f800000,0x393702d3,0x40490fdb,0);
    }
  }
  else {
    FUN_0067cd40(0x6000b,0,0,0,0);
  }
LAB_0069f7a1:
  FUN_00680110(unaff_EDI);
  FUN_00680190(unaff_EDI);
  FUN_00680230(unaff_EDI);
  FUN_006802a0(unaff_EDI);
  FUN_00680300(unaff_EDI);
  FUN_00680360(unaff_EDI);
  FUN_006803c0(unaff_EDI);
  if (param_1[0x6b7] != 0) {
    FUN_0067cd40(0x1000c,0,0,0,0);
  }
  if (param_1[0x6b8] != 0) {
    FUN_0067cd40(0x60001,0,0,0,0);
  }
  if (param_1[0x6b9] != 0) {
    FUN_0067cd40(0x60009,0,0,0,0);
  }
  if (param_1[0x6ba] != 0) {
    FUN_0067cd40(0x60009,0,0,0,0);
  }
  if (param_1[0x6bb] != 0) {
    FUN_0067cd40(0x60009,0,0,0,0);
  }
  if (param_1[0x6bc] != 0) {
    FUN_0067cd40(0x60009,0,0,0,0);
  }
  if ((param_2[0x23] & 0x20000U) != 0) {
    FUN_0067cd40(0x60009,0,0,0,0);
  }
  if (*param_2 == 0x92) {
    unaff_ESI = unaff_ESI & 0xffffffbf | 0x20;
    param_1[0x76f] = 1;
    iVar14 = 0;
    iVar9 = 4;
    do {
      FUN_0069cb90(iVar14,0);
      iVar14 = iVar14 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    FUN_0067cd40(0x6000f,0,0,0,0);
  }
  if (((*(byte *)(param_2 + 0x23) & 1) != 0) && ((float)param_1[0x724] <= 0.0)) {
    (**(code **)(*param_1 + 0x358))(0x18e,0);
    param_1[0x724] = param_1[0x725];
    FUN_0067cd40(0x1000c,0,0,0,0);
  }
  (**(code **)(*param_1 + 0x198))(iVar20,param_2,unaff_ESI);
  return 1;
}

// 0069F970  FUN_0069f970  size=924  [between]
undefined4 __thiscall FUN_0069f970(int *param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 unaff_EBX;
  int iVar6;
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
    piVar1 = param_1 + 0x700;
    *piVar1 = param_2[0x40];
    param_1[0x701] = param_2[0x41];
    param_1[0x702] = param_2[0x42];
    param_1[0x703] = param_2[0x43];
    if (iVar6 != 0) {
      *piVar1 = *(int *)(iVar6 + 0x40);
      param_1[0x701] = *(int *)(iVar6 + 0x44);
      param_1[0x702] = *(int *)(iVar6 + 0x48);
      param_1[0x703] = *(int *)(iVar6 + 0x4c);
    }
    param_1[0x704] = param_2[8];
    param_1[0x705] = param_2[9];
    param_1[0x706] = param_2[10];
    param_1[0x707] = param_2[0xb];
    if ((iVar6 == 0) || ((*(byte *)(iVar6 + 0x4c0) & 0x10) == 0)) {
      return 0;
    }
    FUN_0069cc20();
    (**(code **)(*param_1 + 0x21c))(iVar6,(char)param_2[4],0x3c23d70a,0);
    if ((*(byte *)(param_2 + 0x23) & 0x10) == 0) {
      (**(code **)(*param_1 + 0x30c))(unaff_EBX,0);
    }
    if ((*(byte *)(param_2 + 0x23) & 2) == 0) {
      FUN_0069d5b0(unaff_EBX,piVar1,param_1 + 0x704);
    }
    else {
      FUN_0069cc90();
      (**(code **)(*param_1 + 0x358))(399,0);
    }
    if (0 < param_1[0x21c]) {
      param_1[0x3b1] = param_1[0x3b1] + 1;
      if (2 < *(byte *)((int)param_2 + 0x11)) {
        param_1[0x5dd] = param_1[0x5dd] - (uint)*(byte *)((int)param_2 + 0x11);
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
        uVar5 = 1;
      }
      (**(code **)(*param_1 + 0x198))(iVar6,param_2,uVar5);
      fVar7 = (float10)FUN_00ddba30((float)param_2[0xc] - (float)param_1[0x25]);
      param_1[0x245] = (int)(float)fVar7;
      if ((param_2[0x23] & 0x20000U) != 0) {
        FUN_0067cd40(0x80028,0,0,0,0);
        return 1;
      }
      uVar2 = param_2[0x24];
      if ((uVar2 & 0x800000) == 0) {
        iVar4 = FUN_0067d010();
        if ((iVar4 != 0) && ((uVar2 & 0x2000000) != 0)) {
          FUN_0067cd40(0x60011,0,0,0,0);
          FUN_00a8e880(iVar6 + 0x40);
          (**(code **)(*param_1 + 0x308))(0x3f800000,0x393702d3,0x40490fdb,0);
        }
      }
      else {
        FUN_0067cd40(0x6000b,0,0,0,0);
        if (param_1[0x5dd] < 1) {
          sVar3 = FUN_00dde2d0(0,0x1e);
          param_1[0x5dd] = sVar3 + 10;
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
    FUN_00a8caf0(0x8000d,0,0,0);
    param_1[0x3a8] = 0;
    FUN_00a962d0(0,0);
    param_1[0x4e7] = 0;
  }
  return 0;
}

// 0069FD10  FUN_0069fd10  size=1055  [between]
undefined4 __thiscall FUN_0069fd10(int *param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 unaff_EBX;
  int iVar6;
  undefined4 unaff_ESI;
  float10 fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  iVar4 = *param_2;
  iVar6 = 0;
  if (iVar4 == 0) {
    return 0;
  }
  if (iVar4 == 1) {
    return 0;
  }
  if (iVar4 == 2) {
    return 0;
  }
  if (iVar4 == 0x1b0) {
    return 0;
  }
  if (iVar4 == 0x147) {
    return 0;
  }
  iVar4 = FUN_00a81330();
  if (iVar4 != 0) {
    iVar6 = FUN_00a7c8a0();
  }
  piVar1 = param_1 + 0x700;
  *piVar1 = param_2[0x40];
  param_1[0x701] = param_2[0x41];
  param_1[0x702] = param_2[0x42];
  param_1[0x703] = param_2[0x43];
  if (iVar6 != 0) {
    *piVar1 = *(int *)(iVar6 + 0x40);
    param_1[0x701] = *(int *)(iVar6 + 0x44);
    param_1[0x702] = *(int *)(iVar6 + 0x48);
    param_1[0x703] = *(int *)(iVar6 + 0x4c);
  }
  param_1[0x704] = param_2[8];
  param_1[0x705] = param_2[9];
  param_1[0x706] = param_2[10];
  param_1[0x707] = param_2[0xb];
  if ((iVar6 == 0) || ((*(byte *)(iVar6 + 0x4c0) & 0x10) == 0)) {
    return 0;
  }
  FUN_0069cc20();
  (**(code **)(*param_1 + 0x21c))(iVar6,(char)param_2[4],0x3c23d70a,0);
  if (*param_2 == 0x93) {
    (**(code **)(*param_1 + 0x198))(iVar6,param_2,0x40000);
    return 0;
  }
  if ((*(byte *)(param_2 + 0x23) & 0x10) == 0) {
    if (param_1[0x3ad] != 0) {
      unaff_EBX = FUN_00fdbc60();
    }
    (**(code **)(*param_1 + 0x30c))(unaff_EBX,0);
  }
  if (param_1[0x70a] != 0) {
    (**(code **)(*param_1 + 0x198))(iVar6,param_2,1);
    return 0;
  }
  if ((*(byte *)(param_2 + 0x23) & 2) == 0) {
    FUN_0069d5b0(unaff_EBX,piVar1,param_1 + 0x704);
  }
  else {
    FUN_0069cc90();
    (**(code **)(*param_1 + 0x358))(399,0);
  }
  if (param_1[0x21c] < 1) {
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
    FUN_0067cd40(0x80020,0,0,0,0);
    return uVar5;
  }
  param_1[0x3b1] = param_1[0x3b1] + 1;
  if (2 < *(byte *)((int)param_2 + 0x11)) {
    param_1[0x5dd] = param_1[0x5dd] - (uint)*(byte *)((int)param_2 + 0x11);
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
    uVar5 = unaff_ESI;
  }
  (**(code **)(*param_1 + 0x198))(iVar6,param_2,uVar5);
  fVar7 = (float10)FUN_00ddba30((float)param_2[0xc] - (float)param_1[0x25]);
  param_1[0x245] = (int)(float)fVar7;
  if ((param_2[0x23] & 0x20000U) != 0) {
    FUN_0067cd40(0x80028,0,0,0,0);
  }
  uVar2 = param_2[0x24];
  if ((uVar2 & 0x800000) == 0) {
    if ((uVar2 & 0x1000000) == 0) {
      iVar4 = FUN_0067d010();
      if ((iVar4 != 0) && ((uVar2 & 0x2000000) != 0)) {
        FUN_0067cd40(0x60011,0,0,0,0);
        FUN_00a8e880(iVar6 + 0x40);
        (**(code **)(*param_1 + 0x308))(0x3f800000,0x393702d3,0x40490fdb,0);
        goto LAB_006a00f7;
      }
      uVar5 = 0x6000c;
    }
    else {
      uVar5 = 0x6000e;
    }
    FUN_0067cd40(uVar5,0,0,0,0);
  }
  else {
    FUN_0067cd40(0x6000b,0,0,0,0);
    if (param_1[0x5dd] < 1) {
      sVar3 = FUN_00dde2d0(0,0x1e);
      param_1[0x5dd] = sVar3 + 10;
    }
  }
LAB_006a00f7:
  if (((*(byte *)((int)param_2 + 0x8e) & 1) != 0) && (iVar4 = FUN_00a9b930(), iVar4 != 0)) {
    FUN_00a9b930();
    FUN_00bda170();
  }
  return 1;
}

// 006A0130  Em8060::vf4C  size=993  [class]
void __fastcall Em8060::vf4C(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  float10 fVar6;
  undefined4 uVar7;
  float local_20;
  float fStack_1c;
  float fStack_18;
  
  if ((DAT_01bea070 & 0x20000000) == 0) {
    FUN_00a92fb0();
    fVar6 = (float10)FUN_00e049b0();
    *(float *)(param_1 + 0x910) = (float)fVar6;
    if (*(int *)(param_1 + 0xa84) != 0) {
      FUN_00a8e880(*(int *)(param_1 + 0xa84) + 0x40);
    }
    if (*(int *)(param_1 + 0xa84) != 0) {
      iVar3 = FUN_00a8d400(*(int *)(param_1 + 0xa84) + 0x40);
      if (((*(int *)(param_1 + 0x1db4) != 0) && (iVar3 != 0)) &&
         (*(int *)(*(int *)(param_1 + 0x1db4) + 0xc) != *(int *)(iVar3 + 0xc))) {
        *(undefined4 *)(param_1 + 0x1db8) = 0;
      }
      *(int *)(param_1 + 0x1db4) = iVar3;
    }
    if (*(int *)(param_1 + 0x1c5c) != 0) {
      iVar3 = FUN_00ac45b0();
      fVar1 = *(float *)(param_1 + 0x1c50) - *(float *)(param_1 + 0x910);
      *(float *)(param_1 + 0x1c50) = fVar1;
      fVar2 = *(float *)(param_1 + 0x1c54) - *(float *)(param_1 + 0x910);
      *(float *)(param_1 + 0x1c54) = fVar2;
      if (*(int *)(param_1 + 0x1c58) == 0) {
        if ((fVar2 <= 0.0) && (*(float *)(param_1 + 0xa9c) <= 0.7853982)) {
          *(undefined4 *)(param_1 + 0x1c58) = 1;
          *(undefined4 *)(param_1 + 0x1c54) = 0x42100000;
        }
      }
      else {
        if ((fVar2 <= 0.0) && (0.7853982 < *(float *)(param_1 + 0xa9c))) {
          *(undefined4 *)(param_1 + 0x1c58) = 0;
          *(undefined4 *)(param_1 + 0x1c54) = 0x42100000;
        }
        if (((*(int *)(param_1 + 0x1414) != 0) && (iVar3 != 0)) && (fVar1 <= 0.0)) {
          uVar7 = 0;
          *(undefined4 *)(param_1 + 0x1c50) = 0x41200000;
          uVar4 = FUN_00a7c8b0(0);
          FUN_0043fc90(iVar3,uVar4,uVar7);
        }
      }
    }
    *(undefined4 *)(param_1 + 0x1c5c) = 0;
    BehaviorEmBase::vf4C();
    if (*(int **)(param_1 + 0xa84) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xa84) + 0x204))(&local_20);
      iVar3 = FUN_00a82d50();
      if (iVar3 == 1) {
        local_20 = 0.0;
        fStack_1c = 0.0;
        fStack_18 = 5.0;
        D3DXVec3TransformNormal(&local_20,&local_20,param_1 + 0x10);
        local_20 = *(float *)(param_1 + 0x40) + local_20;
        fStack_1c = *(float *)(param_1 + 0x44) + fStack_1c;
        fStack_18 = *(float *)(param_1 + 0x48) + fStack_18;
      }
      FUN_00a84720();
      FUN_00a84720();
      iVar3 = FUN_00a12210(0x25);
      iVar5 = FUN_00a12210(0x26);
      switchD_0080dbae::default();
      FUN_00a84780(&local_20,0,1,0,0,*(undefined4 *)(param_1 + 0x910));
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
      FUN_00a84780(&local_20,1,0,0,0,*(undefined4 *)(param_1 + 0x910));
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
      FUN_0069e4b0();
    }
    FUN_0069e870();
    FUN_00691750();
    FUN_006819a0();
    iVar3 = FUN_00a82ec0(4);
    if (((iVar3 != 0) && ((*(byte *)(param_1 + 0x4a8) & 0x40) != 0)) &&
       (fVar6 = (float10)FUN_00c3c970(), (float10)75.0 <= fVar6)) {
      lib::AllocatedArray<cEnemySubState>::AllocatedArray<cEnemySubState>
                (*(undefined4 *)(param_1 + 0x4f0),2,*(undefined4 *)(param_1 + 0xd80),4);
      FUN_00a88b50(1,0);
      *(undefined4 *)(param_1 + 0xd28) = 1;
    }
  }
  return;
}

// 006A0520  Em8060::vf32C  size=929  [class]
undefined4 __fastcall Em8060::vf32C(int *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  LPCRITICAL_SECTION unaff_EDI;
  int local_280;
  undefined1 auStack_270 [16];
  int local_260 [5];
  int iStack_24c;
  uint uStack_1d0;
  undefined1 auStack_160 [348];
  
  param_1[0x1a1] = 0;
  FUN_00ac2080(0);
  FUN_00ac2080(1);
  FUN_00ac2080(2);
  iVar3 = param_1[0x186];
  param_1[0x5d5] = 0;
  iVar2 = FUN_00a8ef10();
  if (iVar2 != 0) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0x130) & 1) == 0) {
    return 0;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x280);
  if (param_1[0x286] != 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  piVar5 = (int *)param_1[0x19f];
  piVar6 = piVar5 + param_1[0x1a1] * 0x54;
  FUN_00445db0();
  FUN_004105d0();
  local_280 = -1;
  bVar1 = false;
  if (piVar5 == piVar6) {
LAB_006a0627:
    if (param_1[0x286] != 0) {
      LeaveCriticalSection(lpCriticalSection);
    }
    return 0;
  }
  do {
    if (*piVar5 != 0x147) {
      if (*piVar5 == 0x1b0) {
        (**(code **)(*param_1 + 0x370))(piVar5);
      }
      else {
        iVar2 = piVar5[1];
        if (local_280 <= iVar2) {
          FUN_00448f50(piVar5);
          bVar1 = true;
          local_280 = iVar2;
        }
      }
    }
    piVar5 = piVar5 + 0x54;
  } while (piVar5 != piVar6);
  if (!bVar1) goto LAB_006a0627;
  if ((((iVar3 != 0x60001) && (iVar3 != 0x60002)) && (iVar3 != 0x60003)) &&
     (((iVar3 != 0x60005 && (iVar3 != 0x60009)) && (iVar3 != 0x1000c)))) {
    FUN_00a8e520();
  }
  FUN_0043e160(local_260);
  FUN_00a81330();
  FUN_00a7c8b0();
  (**(code **)(*param_1 + 0x68))();
  FUN_00a92640(auStack_270);
  iVar3 = FUN_0069d430(local_260);
  if ((iVar3 != 0) || (iVar3 = FUN_00a8f040(local_260), iVar3 != 0)) goto LAB_006a0627;
  if (param_1[0x3a7] != 0) {
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
  if ((uStack_1d0 & 0x800) == 0) {
LAB_006a0791:
    if ((((param_1[0x139] == 0) && (param_1[0x71a] == 0)) &&
        (iVar3 = FUN_00a8cbe0(0x6000e), iVar3 == 0)) &&
       (((iVar3 = FUN_00a8cbe0(0x60013), iVar3 == 0 && (iVar3 = FUN_00a9f760(0x77), iVar3 == 0)) &&
        (iVar3 = FUN_00a9f760(0x7d), iVar3 == 0)))) {
      if ((param_1[0x70b] == 0) &&
         (((iVar3 = (**(code **)(*param_1 + 0x1d8))(), iVar3 != 0 ||
           (iVar3 = (**(code **)(*param_1 + 800))(0x3d888889), iVar3 == 0)) ||
          (iVar3 = FUN_008e2740(), iVar3 == 0)))) {
        uVar4 = FUN_0069fd10(local_260);
      }
      else if ((((param_1[0x70a] == 0) && (iVar3 = FUN_00a8cbe0(0x80006), iVar3 == 0)) &&
               (iVar3 = FUN_00a8cbe0(0x80008), iVar3 == 0)) &&
              (iVar3 = FUN_00a8cbe0(0x60017), iVar3 == 0)) {
        uVar4 = FUN_0069f0d0(local_260);
      }
      else {
        uVar4 = FUN_0069f970(local_260);
      }
      goto LAB_006a08a5;
    }
  }
  else {
    if (local_260[0] == 0x1c3) {
      FUN_00a88320(iStack_24c,auStack_160);
      goto LAB_006a0791;
    }
    if (param_1[0x139] == 0) {
      FUN_00a88250(iStack_24c,auStack_160);
      piVar5 = (int *)FUN_00c206d0();
      (**(code **)(*piVar5 + 4))(0,param_1[0x13c],param_1 + 0x10);
      goto LAB_006a0791;
    }
  }
  uVar4 = FUN_00688bc0(local_260);
LAB_006a08a5:
  if (param_1[0x286] != 0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return uVar4;
}

// 00AB4DE0  Em8060::vf04  size=6  [class]
undefined * Em8060::vf04(void)

{
  return &DAT_01b355b0;
}

// 00AB4DF0  Em8060::vf20C  size=7  [class]
float10 Em8060::vf20C(void)

{
  return (float10)3.5;
}

// 00AB4E00  Em8060::vf1DC  size=6  [class]
undefined4 Em8060::vf1DC(void)

{
  return 1;
}

// 00AB4E10  Em8060::vf140  size=7  [class]
float10 Em8060::vf140(void)

{
  return (float10)4.0;
}

// 00AB4E20  Em8060::vf144  size=7  [class]
float10 Em8060::vf144(void)

{
  return (float10)4.1;
}

// 00AB4E30  FUN_00ab4e30  size=143  [callgraph]
void FUN_00ab4e30(void)

{
  FUN_00905ce0();
  FUN_00905ce0();
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

// 00ABA3B0  Em8060::vf00  size=30  [class]
undefined4 __thiscall Em8060::vf00(undefined4 param_1,byte param_2)

{
  FUN_00ab4e30();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

