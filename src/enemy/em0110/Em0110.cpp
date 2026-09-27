// src/enemy/em0110/Em0110.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 004B4C90..00AB71D0, 257 functions

#include "mgrr.h"
#include "Em0110.h"

// 004B4C90  FUN_004b4c90  size=49  [callgraph]
undefined4 FUN_004b4c90(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00e26e90();
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  uVar2 = FUN_00e3fa90(param_1,param_2,param_3);
  return uVar2;
}

// 004B4CD0  FUN_004b4cd0  size=59  [callgraph]
void __thiscall FUN_004b4cd0(int param_1,byte param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_00e26e90();
  if (iVar1 != 0) {
    if (param_3 != 0) {
      *(uint *)(param_1 + 0x280) = *(uint *)(param_1 + 0x280) | 1 << (param_2 & 0x1f);
      return;
    }
    *(uint *)(param_1 + 0x280) = *(uint *)(param_1 + 0x280) & ~(1 << (param_2 & 0x1f));
  }
  return;
}

// 004B4F60  FUN_004b4f60  size=24  [callgraph]
void __thiscall FUN_004b4f60(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1338) = param_2;
  FUN_00cad200();
  return;
}

// 004B5020  FUN_004b5020  size=46  [callgraph]
void __fastcall FUN_004b5020(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0xe90) + 8))(0x3f800000,0,0);
                    /* WARNING: Could not recover jumptable at 0x004b504c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0xe90) + 0xc))();
  return;
}

// 004B5050  FUN_004b5050  size=47  [callgraph]
float10 FUN_004b5050(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00a8eea0();
  iVar2 = FUN_00a8eeb0();
  return (float10)iVar1 / (float10)iVar2;
}

// 004B52C0  FUN_004b52c0  size=28  [callgraph]
void FUN_004b52c0(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00a7c7f0();
  FUN_00a7c960(uVar1);
  return;
}

// 004B52F0  FUN_004b52f0  size=28  [callgraph]
void FUN_004b52f0(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00a7c7f0();
  FUN_00a7c960(uVar1);
  return;
}

// 004B5380  FUN_004b5380  size=37  [callgraph]
undefined4 FUN_004b5380(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a81330();
    uVar2 = FUN_00a7c8a0();
    return uVar2;
  }
  return 0;
}

// 004B53D0  FUN_004b53d0  size=147  [callgraph]
void __fastcall FUN_004b53d0(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = param_1[4];
    if (iVar1 == -1) {
      FUN_00a81330();
      iVar1 = FUN_00a7c800();
      if (iVar1 != 0) {
        *(ushort *)(iVar1 + 0xa2) = *(ushort *)(iVar1 + 0xa2) & 0xfffb;
      }
    }
    else {
      FUN_00a81330(iVar1);
      FUN_00a7c800();
      iVar1 = FUN_00a12210(iVar1);
      if (iVar1 != 0) {
        *(ushort *)(iVar1 + 0xa2) = *(ushort *)(iVar1 + 0xa2) & 0xfffb;
      }
    }
    *param_1 = 0xffffffff;
    uVar2 = FUN_00a7c930();
    FUN_00a7c960(uVar2);
    uVar2 = FUN_00a7c930();
    FUN_00a7c960(uVar2);
    param_1[5] = 0xffffffff;
  }
  return;
}

// 004B5490  Em0110::vf1B8  size=31  [class]
void Em0110::vf1B8(undefined4 *param_1,undefined4 param_2,int param_3)

{
  if (0 < param_3) {
    do {
      *param_1 = 0x42114;
      param_1 = param_1 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

// 004B54B0  Em0110::vf184  size=6  [class]
undefined4 Em0110::vf184(void)

{
  return 0xffffffff;
}

// 004B54C0  Em0110::vf188  size=3  [class]
void Em0110::vf188(void)

{
  return;
}

// 004B54D0  Em0110::thunk_vf228  size=5  [class]
bool Em0110::thunk_vf228(void)

{
  int iVar1;
  
  iVar1 = FUN_00a8c760(0x1d);
  return iVar1 == 0;
}

// 004B55E0  FUN_004b55e0  size=23  [callgraph]
int __fastcall FUN_004b55e0(int param_1)

{
  LONG LVar1;
  int iVar2;
  
  LVar1 = InterlockedIncrement((LONG *)(param_1 + 0x10b0));
  iVar2 = LVar1 + -1;
  if (6 < iVar2) {
    iVar2 = -1;
  }
  return iVar2;
}

// 004B5620  FUN_004b5620  size=85  [callgraph]
void FUN_004b5620(void)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  FUN_00a7c950();
  if (iVar1 != 0) {
    FUN_00a805f0();
  }
  iVar1 = FUN_00a81330();
  FUN_00a7c950();
  if (iVar1 != 0) {
    FUN_00a805f0();
  }
  FUN_00a944d0();
  return;
}

// 004B56B0  FUN_004b56b0  size=31  [callgraph]
void FUN_004b56b0(void)

{
  FUN_00c187b0(3);
  FUN_00c18580(1,3);
  FUN_00951930();
  return;
}

// 004B56F0  FUN_004b56f0  size=57  [callgraph]
void FUN_004b56f0(void)

{
  FUN_00c18830(1,3);
  FUN_00c18830(1,4);
  FUN_00c18830(1,5);
  FUN_00c18830(1,6);
  return;
}

// 004B5730  FUN_004b5730  size=57  [callgraph]
void FUN_004b5730(void)

{
  FUN_00c188e0(1,3);
  FUN_00c188e0(1,4);
  FUN_00c188e0(1,5);
  FUN_00c188e0(1,6);
  return;
}

// 004B57C0  FUN_004b57c0  size=175  [callgraph]
void __thiscall FUN_004b57c0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x11d8) != param_2) {
    *(int *)(param_1 + 0x11d8) = param_2;
    if (param_2 == 0) {
      iVar1 = FUN_00a92f90();
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar1 + 0x280) = *(uint *)(iVar1 + 0x280) | 1;
      }
      iVar1 = FUN_00a92f90();
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar1 + 0x280) = *(uint *)(iVar1 + 0x280) & 0xfffffffd;
      }
    }
    else {
      if (param_2 == 1) {
        iVar1 = FUN_00a92f90();
        iVar2 = FUN_00e26e90();
        if (iVar2 != 0) {
          *(uint *)(iVar1 + 0x280) = *(uint *)(iVar1 + 0x280) & 0xfffffffe;
        }
      }
      else {
        iVar1 = FUN_00a92f90();
        iVar2 = FUN_00e26e90();
        if (iVar2 != 0) {
          *(uint *)(iVar1 + 0x280) = *(uint *)(iVar1 + 0x280) | 1;
        }
      }
      iVar1 = FUN_00a92f90();
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar1 + 0x280) = *(uint *)(iVar1 + 0x280) | 2;
        return;
      }
    }
  }
  return;
}

// 004B5870  FUN_004b5870  size=37  [callgraph]
float10 __thiscall FUN_004b5870(int param_1,undefined4 param_2)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00a8ec30(param_2);
  fVar1 = (float10)FUN_00ddba30((float)((float10)*(float *)(param_1 + 0x94) - fVar1));
  return ABS(fVar1);
}

// 004B58A0  FUN_004b58a0  size=40  [callgraph]
float10 __fastcall FUN_004b58a0(int param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00a8ec30(*(int *)(param_1 + 0xa84) + 0x40);
  fVar1 = (float10)FUN_00ddba30((float)((float10)*(float *)(param_1 + 0x94) - fVar1));
  return ABS(fVar1);
}

// 004B58D0  FUN_004b58d0  size=67  [callgraph]
void __fastcall FUN_004b58d0(int *param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined1 local_20 [28];
  
  FUN_00da9630(1,1);
  puVar2 = local_20;
  uVar1 = (**(code **)(*param_1 + 0x204))(puVar2,0);
  FUN_00da9660(1,uVar1,puVar2);
  return;
}

// 004B5950  FUN_004b5950  size=51  [callgraph]
bool FUN_004b5950(void)

{
  int iVar1;
  
  iVar1 = FUN_00a8cab0();
  if (((iVar1 != 0x10000) && (iVar1 != 0x10007)) && (iVar1 != 0x60001)) {
    iVar1 = FUN_00a8c760(4);
    return iVar1 != 0;
  }
  return true;
}

// 004B5990  FUN_004b5990  size=36  [callgraph]
bool __fastcall FUN_004b5990(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00c27750(param_1 + 0x40,0x40600000,0x20040);
  return 2 < uVar1;
}

// 004B5A90  FUN_004b5a90  size=97  [callgraph]
undefined4 __fastcall FUN_004b5a90(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00a8eea0();
  iVar2 = FUN_00a8eeb0();
  if ((*(float *)(param_1 + 0x11bc) - (float)iVar1 / (float)iVar2 < *(float *)(param_1 + 0x1214)) &&
     (*(float *)(param_1 + 0x1208) < *(float *)(param_1 + 0x11b8) ==
      (*(float *)(param_1 + 0x1208) == *(float *)(param_1 + 0x11b8)))) {
    return 0;
  }
  return 1;
}

// 004B5B00  FUN_004b5b00  size=97  [callgraph]
undefined4 __fastcall FUN_004b5b00(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00a8eea0();
  iVar2 = FUN_00a8eeb0();
  if ((*(float *)(param_1 + 0x11bc) - (float)iVar1 / (float)iVar2 < *(float *)(param_1 + 0x1218)) &&
     (*(float *)(param_1 + 0x120c) < *(float *)(param_1 + 0x11b8) ==
      (*(float *)(param_1 + 0x120c) == *(float *)(param_1 + 0x11b8)))) {
    return 0;
  }
  return 1;
}

// 004B5B70  FUN_004b5b70  size=97  [callgraph]
undefined4 __fastcall FUN_004b5b70(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00a8eea0();
  iVar2 = FUN_00a8eeb0();
  if ((*(float *)(param_1 + 0x11bc) - (float)iVar1 / (float)iVar2 < *(float *)(param_1 + 0x121c)) &&
     (*(float *)(param_1 + 0x1210) < *(float *)(param_1 + 0x11b8) ==
      (*(float *)(param_1 + 0x1210) == *(float *)(param_1 + 0x11b8)))) {
    return 0;
  }
  return 1;
}

// 004B5CC0  FUN_004b5cc0  size=108  [callgraph]
void __fastcall FUN_004b5cc0(int param_1)

{
  switch(*(undefined4 *)(param_1 + 0x11b0)) {
  case 0:
    FUN_00c18610(1,2);
    return;
  case 1:
    FUN_00c18610(1,1);
    return;
  case 2:
    FUN_00c18610(3,2);
    return;
  case 3:
    FUN_00c18610(5,1);
    return;
  case 4:
    FUN_00c18610(6,0);
    return;
  case 5:
    FUN_00c18610(6,1);
  }
  return;
}

// 004B5D50  FUN_004b5d50  size=161  [callgraph]
void __fastcall FUN_004b5d50(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  float10 fVar3;
  
  *(undefined4 *)(param_1 + 0xdc8) = 0;
  *(undefined4 *)(param_1 + 0xdcc) = 0;
  iVar2 = 0;
  *(undefined4 *)(param_1 + 0xdc4) = 0;
  if (*(int *)(param_1 + 0x754) != 0) {
    uVar1 = FUN_00ac4780();
    switch(uVar1) {
    case 0:
      iVar2 = 0x1f;
      break;
    case 2:
      iVar2 = 0x3d;
      break;
    case 3:
      iVar2 = 0x5b;
      break;
    case 4:
      iVar2 = 0x79;
    }
    iVar2 = iVar2 + 0x49;
    fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(iVar2);
    *(float *)(param_1 + 0xdd4) = (float)(fVar3 * (float10)60.0);
    fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x44))(iVar2);
    *(float *)(param_1 + 0xdd8) = (float)(fVar3 * (float10)60.0);
    fVar3 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x3c))(iVar2);
    *(float *)(param_1 + 0xdd0) = (float)(fVar3 * (float10)60.0);
  }
  return;
}

// 004B5E10  FUN_004b5e10  size=23  [callgraph]
undefined4 FUN_004b5e10(int param_1)

{
  if (6 < param_1) {
    return 0xdb;
  }
  return *(undefined4 *)(&DAT_0163edb8 + param_1 * 4);
}

// 004B5E30  FUN_004b5e30  size=23  [callgraph]
undefined4 FUN_004b5e30(int param_1)

{
  if (6 < param_1) {
    return 0xe3;
  }
  return *(undefined4 *)(&DAT_0163edd4 + param_1 * 4);
}

// 004B5E50  FUN_004b5e50  size=23  [callgraph]
undefined4 FUN_004b5e50(int param_1)

{
  if (6 < param_1) {
    return 0xeb;
  }
  return *(undefined4 *)(&DAT_0163edf0 + param_1 * 4);
}

// 004B5E70  FUN_004b5e70  size=6  [callgraph]
undefined4 FUN_004b5e70(void)

{
  return 0xef;
}

// 004B5E90  FUN_004b5e90  size=23  [callgraph]
bool FUN_004b5e90(void)

{
  uint uVar1;
  
  uVar1 = FUN_00a8cab0();
  return (uVar1 & 0xffff0000) != 0xe0000;
}

// 004B6000  FUN_004b6000  size=149  [callgraph]
float10 __thiscall FUN_004b6000(int param_1,int param_2)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  if (param_2 == 0) {
    return (float10)-1.0;
  }
  fVar1 = (float10)*(float *)(param_1 + 0x40) - (float10)*(float *)(param_2 + 0x40);
  fVar2 = (float10)*(float *)(param_1 + 0x44) - (float10)*(float *)(param_2 + 0x44);
  fVar3 = (float10)*(float *)(param_1 + 0x48) - (float10)*(float *)(param_2 + 0x48);
  fVar2 = SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3);
  fVar3 = (float10)*(float *)(param_2 + 0xb90);
  fVar1 = (float10)0;
  if (fVar2 <= fVar1) {
    return fVar1;
  }
  fVar4 = fVar1;
  do {
    fVar3 = fVar3 * (float10)0.96 + (float10)0.01;
    fVar2 = fVar2 - fVar3;
    fVar4 = fVar4 + (float10)1;
  } while (fVar1 < fVar2);
  return fVar4;
}

// 004B6140  FUN_004b6140  size=299  [callgraph]
void __fastcall FUN_004b6140(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 0;
  if (*(int *)(param_1 + 0x754) == 0) {
    *(undefined4 *)(param_1 + 0x1138) = 0;
    *(undefined4 *)(param_1 + 0x1124) = 500;
    *(undefined4 *)(param_1 + 0x1120) = 500;
    uVar2 = 200;
    uVar1 = 0x5dc;
    *(undefined4 *)(param_1 + 0x112c) = 200;
    *(undefined4 *)(param_1 + 0x1128) = 200;
  }
  else {
    uVar1 = FUN_00ac4780();
    switch(uVar1) {
    case 0:
      iVar3 = 0x1f;
      break;
    case 2:
      iVar3 = 0x3d;
      break;
    case 3:
      iVar3 = 0x5b;
      break;
    case 4:
      iVar3 = 0x79;
    }
    uVar1 = (**(code **)(**(int **)(param_1 + 0x754) + 0x24))(iVar3 + 0x32);
    if (*(int *)(param_1 + 0x4a0) == 1) {
      uVar1 = (**(code **)(**(int **)(param_1 + 0x754) + 0x2c))(iVar3 + 0x32);
    }
    (**(code **)(**(int **)(param_1 + 0x754) + 0x34))(iVar3 + 0x41);
    uVar2 = FUN_00fdbc60();
    *(undefined4 *)(param_1 + 0x1124) = uVar2;
    *(undefined4 *)(param_1 + 0x1120) = uVar2;
    (**(code **)(**(int **)(param_1 + 0x754) + 0x34))(iVar3 + 0x3f);
    uVar2 = FUN_00fdbc60();
    *(undefined4 *)(param_1 + 0x112c) = uVar2;
    *(undefined4 *)(param_1 + 0x1128) = uVar2;
    (**(code **)(**(int **)(param_1 + 0x754) + 0x34))(iVar3 + 0x40);
    uVar2 = FUN_00fdbc60();
  }
  *(undefined4 *)(param_1 + 0x1130) = uVar2;
  *(undefined4 *)(param_1 + 0x1134) = uVar2;
  FUN_00a8edf0(uVar1);
  return;
}

// 004B62B0  FUN_004b62b0  size=248  [callgraph]
int __thiscall FUN_004b62b0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00a8cab0();
  if (iVar1 == 0x30002) {
    if ((param_2 == 0x30002) || (param_2 == -1)) {
      *(int *)(param_1 + 0x1058) = *(int *)(param_1 + 0x1058) + 1;
      if (*(int *)(param_1 + 0x1058) < 4) {
        return 0x30002;
      }
      param_2 = 0x30001;
      goto LAB_004b6348;
    }
  }
  else {
    iVar1 = FUN_00a8cab0();
    if (iVar1 == 0x30001) {
      param_2 = 0x30001;
      goto LAB_004b6348;
    }
    iVar1 = FUN_00a8cab0();
    if ((iVar1 == 0x30000) || (*(int *)(param_1 + 0x618) == 0x30008)) {
      return -1;
    }
    *(int *)(param_1 + 0x1058) = *(int *)(param_1 + 0x1058) + 1;
    if (3 < *(int *)(param_1 + 0x1058)) {
      param_2 = 0x30001;
      goto LAB_004b6348;
    }
    iVar1 = *(int *)(param_1 + 0x1058) + 1;
    *(int *)(param_1 + 0x1058) = iVar1;
    if (1 < iVar1) {
      return 0x30002;
    }
  }
  if (param_2 != 0x30001) {
    return param_2;
  }
LAB_004b6348:
  if (*(int *)(param_1 + 0x1058) < 4) {
    return param_2;
  }
  if (1.5707964 <= ABS(*(float *)(param_1 + 0x914))) {
    uVar2 = FUN_00dde2d0(0,100);
    if ((uVar2 & 1) != 0) {
      return 0x30002;
    }
    return param_2;
  }
  iVar1 = FUN_00a8cab0();
  if (iVar1 == 0x30001) {
    return 0x30002;
  }
  return param_2;
}

// 004B63E0  FUN_004b63e0  size=220  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall
FUN_004b63e0(int param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float10 fVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  
  *param_2 = *param_2 - _DAT_01be942c;
  iVar2 = FUN_00a8e520();
  if ((iVar2 == 0) ||
     ((fVar1 = (float10)0, (float10)*param_2 <= fVar1 && ((float10)*param_3 <= fVar1)))) {
    return (float10)1.0;
  }
  fVar3 = (float10)_DAT_01be942c;
  fVar4 = fVar3 / (float10)*(float *)(param_1 + 0x910);
  if (fVar1 < (float10)*(float *)(param_1 + 0x93c)) {
    *param_4 = (float)((float10)*(float *)(param_1 + 0x910) / fVar3);
    *param_5 = 1.0;
    return fVar4 * (float10)*param_5;
  }
  fVar3 = (float10)*param_3 - fVar3;
  *param_3 = (float)fVar3;
  if (fVar3 <= fVar1) {
    *param_5 = *param_4;
    return fVar4 * (float10)*param_5;
  }
  *param_5 = (float)(((float10)5.0 - fVar3) * (float10)0.2 * ((float10)*param_4 - (float10)1) +
                    (float10)1);
  return fVar4 * (float10)*param_5;
}

// 004B7FE0  FUN_004b7fe0  size=81  [callgraph]
undefined4 __fastcall FUN_004b7fe0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00a8eea0();
  iVar2 = FUN_00a8eeb0();
  if (((float)iVar1 / (float)iVar2 < 0.1 != ((float)iVar1 / (float)iVar2 == 0.1)) &&
     (*(int *)(param_1 + 0x10b8) == 2)) {
    return 1;
  }
  return 0;
}

// 004B8730  Em0110::vf44  size=364  [class]
void __fastcall Em0110::vf44(int param_1)

{
  int iVar1;
  
  DAT_018b4414 = *(undefined4 *)(param_1 + 0x4b4);
  DAT_01dc08dc = *(undefined4 *)(param_1 + 0x4a0);
  DAT_01dc08e0 = 0;
  RayCastManager::getWork(param_1 + 0x1160);
  RayCastManager::getWork(param_1 + 0x1234);
  FUN_00a92a00();
  iVar1 = FUN_00a81330();
  FUN_00a7c950();
  if (iVar1 != 0) {
    FUN_00a805f0();
  }
  iVar1 = FUN_00a81330();
  FUN_00a7c950();
  if (iVar1 != 0) {
    FUN_00a805f0();
  }
  FUN_00a944d0();
  if (*(int *)(param_1 + 0x1338) != 0) {
    FUN_00cad200(0);
    *(undefined4 *)(param_1 + 0x1338) = 0;
  }
  FUN_00c57120(*(undefined4 *)(param_1 + 0x4f0));
  FUN_00c4d000(*(undefined4 *)(param_1 + 0x4f0));
  if (*(int *)(param_1 + 0x7b0) != 0) {
    HkRemovePhysicsSystem::HkRemovePhysicsSystem();
  }
  if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 4))(1);
    *(undefined4 *)(param_1 + 0x7b0) = 0;
  }
  FUN_00a9d8a0();
  if (*(int *)(param_1 + 0x764) != 0) {
    FUN_008e3c10();
    FUN_008e1c60();
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a805f0();
  }
  if (*(int *)(param_1 + 0x134c) != 0) {
    *(undefined4 *)(param_1 + 0x134c) = 0;
    DAT_01bea094 = DAT_01bea094 & 0xbfffffff;
    DAT_01bea090 = DAT_01bea090 & 0xff7f3bff;
  }
  BehaviorEmBase::vf44();
  return;
}

// 004B88A0  Em0110::vf54  size=20  [class]
void __fastcall Em0110::vf54(int param_1)

{
  BehaviorEmBase::vf54();
  *(undefined4 *)(param_1 + 0x11f8) = 0;
  return;
}

// 004B88C0  Em0110::vf248  size=252  [class]
void __fastcall Em0110::vf248(int param_1)

{
  int iVar1;
  undefined *puVar2;
  
  FUN_00e00900();
  FUN_00e03080(*(undefined4 *)(param_1 + 0x4f0),0);
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00e03080(iVar1,1);
  }
  iVar1 = FUN_00a81330();
  if (iVar1 == 0) {
    iVar1 = FUN_00a81330();
    if (iVar1 == 0) {
      iVar1 = FUN_00a81330();
      if (iVar1 == 0) goto LAB_004b892f;
    }
  }
  FUN_00e03080(iVar1,2);
LAB_004b892f:
  if ((*(int *)(param_1 + 0xa84) != 0) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0xa84) + 0x4f0), iVar1 != 0)) {
    FUN_00e03080(iVar1,3);
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00e03080(iVar1,4);
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00e03080(iVar1,5);
  }
  if (*(int **)(param_1 + 0xa84) != (int *)0x0) {
    puVar2 = &DAT_01be9db8;
    (**(code **)(**(int **)(param_1 + 0xa84) + 4))(&DAT_01be9db8);
    iVar1 = FUN_00dd6d70(puVar2);
    if (iVar1 != 0) {
      iVar1 = FUN_00b7d050();
      if (iVar1 != 0) {
        FUN_00e03080(iVar1,6);
      }
    }
  }
  return;
}

// 004B89C0  Em0110::vf110  size=103  [class]
void __thiscall Em0110::vf110(int param_1,undefined4 param_2)

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
  *(undefined4 *)(param_1 + 0x12a0) = param_2;
  return;
}

// 004B8A30  FUN_004b8a30  size=86  [between]
undefined4 __fastcall FUN_004b8a30(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  
  piVar1 = *(int **)(param_1 + 0xa84);
  if (piVar1 != (int *)0x0) {
    puVar3 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d80(puVar3);
    if (iVar2 != 0) {
      iVar2 = (**(code **)(*piVar1 + 0x354))();
      if ((iVar2 == 0) && (iVar2 = FUN_00a8cab0(), iVar2 != 0x10c)) {
        return 0;
      }
      return 1;
    }
  }
  return 0;
}

// 004B8A90  FUN_004b8a90  size=59  [between]
bool __fastcall FUN_004b8a90(int param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (*(int **)(param_1 + 0xa84) != (int *)0x0) {
    puVar2 = &DAT_01be9db8;
    (**(code **)(**(int **)(param_1 + 0xa84) + 4))(&DAT_01be9db8);
    iVar1 = FUN_00dd6d80(puVar2);
    if (iVar1 != 0) {
      iVar1 = FUN_00a8cab0();
      return iVar1 == 0x46;
    }
  }
  return false;
}

// 004B8AD0  FUN_004b8ad0  size=151  [between]
undefined4 __fastcall FUN_004b8ad0(int param_1)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  undefined *puVar4;
  undefined4 uVar5;
  
  if (*(int **)(param_1 + 0xa84) != (int *)0x0) {
    puVar4 = &DAT_01be9db8;
    (**(code **)(**(int **)(param_1 + 0xa84) + 4))(&DAT_01be9db8);
    iVar1 = FUN_00dd6d80(puVar4);
    if (iVar1 != 0) {
      iVar1 = FUN_00a8cab0();
      if (iVar1 == 0x67) {
        iVar1 = FUN_00a8cac0();
        if (iVar1 == 1) {
          iVar1 = FUN_00a92f90();
          if ((*(byte *)(iVar1 + 0x94) & 1) != 0) {
            uVar5 = 0;
            FUN_00a92f90(0);
            fVar2 = (float10)FUN_00407b40(uVar5);
            uVar5 = 0;
            FUN_00a92f90(0);
            fVar3 = (float10)FUN_0043f390(uVar5);
            if ((float10)0.05 <= (float10)1 - (float10)(float)fVar2 / fVar3) {
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}

// 004B8B70  FUN_004b8b70  size=162  [between]
undefined4 __fastcall FUN_004b8b70(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = FUN_00a8e520();
  if (iVar1 == 0) {
    iVar1 = FUN_00a8eea0();
    iVar2 = FUN_00a8eeb0();
    if ((((float)iVar1 / (float)iVar2 < 0.1 == ((float)iVar1 / (float)iVar2 == 0.1)) ||
        (*(int *)(param_1 + 0x10b8) != 2)) && ((DAT_01bea060 & 0x2000000) == 0)) {
      iVar1 = FUN_004b8a30();
      if (iVar1 != 0) {
        return 1;
      }
      uVar3 = FUN_00a8cab0();
      if (((uVar3 & 0xffff0000) != 0x20000) && (*(int *)(param_1 + 0x10b8) == 1)) {
        return 1;
      }
      return *(undefined4 *)(param_1 + 0xdc4);
    }
  }
  return 0;
}

// 004B8C20  FUN_004b8c20  size=55  [between]
float10 __fastcall FUN_004b8c20(int param_1)

{
  float10 fVar1;
  
  if (*(int *)(param_1 + 0x10b8) == 1) {
    fVar1 = (float10)FUN_00dde300(0x41a00000,0x42700000);
    return fVar1 + (float10)60.0;
  }
  return (float10)30.0;
}

// 004B8C60  FUN_004b8c60  size=1329  [between]
void __fastcall FUN_004b8c60(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int iVar5;
  float10 fVar6;
  
  if (*(int *)(param_1 + 0x754) != 0) {
    iVar5 = 0;
    uVar4 = FUN_00ac4780();
    switch(uVar4) {
    case 0:
      iVar5 = 0x1f;
      break;
    case 1:
      iVar5 = 0;
      break;
    case 2:
      iVar5 = 0x3d;
      break;
    case 3:
      iVar5 = 0x5b;
      break;
    case 4:
      iVar5 = 0x79;
    }
    iVar1 = iVar5 + 0x3c;
    uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x24))(iVar1);
    *(undefined4 *)(param_1 + 0x12b4) = uVar4;
    uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x2c))(iVar1);
    *(undefined4 *)(param_1 + 0x12bc) = uVar4;
    fVar6 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(iVar1);
    *(float *)(param_1 + 0x12c4) = (float)fVar6;
    iVar1 = iVar5 + 0x3d;
    uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x24))(iVar1);
    *(undefined4 *)(param_1 + 0x12b8) = uVar4;
    uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x2c))(iVar1);
    *(undefined4 *)(param_1 + 0x12c0) = uVar4;
    fVar6 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(iVar1);
    *(float *)(param_1 + 0x12c8) = (float)fVar6;
    uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x24))(iVar5 + 0x4a);
    *(undefined4 *)(param_1 + 0x12cc) = uVar4;
    iVar1 = iVar5 + 0x34;
    uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x24))(iVar1);
    *(undefined4 *)(param_1 + 0x12d8) = uVar4;
    iVar2 = iVar5 + 0x35;
    uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x24))(iVar2);
    *(undefined4 *)(param_1 + 0x12dc) = uVar4;
    uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x24))(iVar5 + 0x36);
    *(undefined4 *)(param_1 + 0x12e0) = uVar4;
    uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x2c))(iVar1);
    *(undefined4 *)(param_1 + 0x12e4) = uVar4;
    uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x2c))(iVar2);
    *(undefined4 *)(param_1 + 0x12e8) = uVar4;
    uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x2c))(iVar5 + 0x36);
    *(undefined4 *)(param_1 + 0x12ec) = uVar4;
    fVar6 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(iVar1);
    *(float *)(param_1 + 0x12f0) = (float)fVar6;
    fVar6 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(iVar2);
    *(float *)(param_1 + 0x12f4) = (float)fVar6;
    fVar6 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(iVar5 + 0x36);
    *(float *)(param_1 + 0x12f8) = (float)fVar6;
    fVar6 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(iVar5 + 0x43);
    *(float *)(param_1 + 0x12fc) = (float)(fVar6 * (float10)60.0);
    uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x24))(iVar5 + 0x43);
    *(undefined4 *)(param_1 + 0x1300) = uVar4;
    iVar1 = iVar5 + 0x38;
    fVar6 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(iVar1);
    iVar2 = iVar5 + 0x3a;
    *(float *)(param_1 + 0x1304) = (float)(fVar6 * (float10)60.0);
    fVar6 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(iVar2);
    *(float *)(param_1 + 0x130c) = (float)(fVar6 * (float10)60.0);
    fVar6 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(iVar5 + 0x39);
    *(float *)(param_1 + 0x1314) = (float)(fVar6 * (float10)60.0);
    fVar6 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x3c))(iVar1);
    *(float *)(param_1 + 0x131c) = (float)fVar6;
    fVar6 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x3c))(iVar2);
    *(float *)(param_1 + 0x1324) = (float)fVar6;
    fVar6 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x3c))(iVar5 + 0x39);
    *(float *)(param_1 + 0x132c) = (float)fVar6;
    fVar6 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x44))(iVar1);
    *(float *)(param_1 + 0x1308) = (float)(fVar6 * (float10)60.0);
    fVar6 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x44))(iVar2);
    *(float *)(param_1 + 0x1310) = (float)(fVar6 * (float10)60.0);
    fVar6 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x44))(iVar5 + 0x39);
    *(float *)(param_1 + 0x1318) = (float)(fVar6 * (float10)60.0);
    fVar6 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x4c))(iVar1);
    *(float *)(param_1 + 0x1320) = (float)fVar6;
    fVar6 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x4c))(iVar2);
    *(float *)(param_1 + 0x1328) = (float)fVar6;
    fVar6 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x4c))(iVar5 + 0x39);
    *(float *)(param_1 + 0x1330) = (float)fVar6;
    fVar6 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(iVar5 + 0x3e);
    *(float *)(param_1 + 0x133c) = (float)fVar6;
    fVar6 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x3c))(iVar5 + 0x3e);
    *(float *)(param_1 + 0x1340) = (float)fVar6;
    fVar6 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(iVar5 + 0x4d);
    *(float *)(param_1 + 0x1334) = (float)fVar6;
    fVar6 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(iVar5 + 0x33);
    *(float *)(param_1 + 0x1348) = (float)fVar6;
    if (*(int *)(param_1 + 0x4a0) == 1) {
      iVar1 = iVar5 + 0x4b;
      fVar6 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(iVar1);
      *(float *)(param_1 + 0x12a8) = (float)(fVar6 * (float10)60.0);
      fVar6 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(iVar1);
      *(float *)(param_1 + 0x12ac) = (float)(fVar6 * (float10)60.0);
      fVar6 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(iVar1);
      iVar5 = iVar5 + 0x4c;
      *(float *)(param_1 + 0x12b0) = (float)(fVar6 * (float10)60.0);
      uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x24))(iVar5);
      *(undefined4 *)(param_1 + 0x12d0) = uVar4;
      uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x2c))(iVar5);
      *(undefined4 *)(param_1 + 0x12d4) = uVar4;
      fVar6 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(iVar5);
      *(float *)(param_1 + 0x1220) = (float)fVar6;
      fVar6 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x3c))(iVar5);
      *(float *)(param_1 + 0x1224) = (float)fVar6;
      *(undefined4 *)(param_1 + 0x12f0) = *(undefined4 *)(param_1 + 0x12f8);
      *(undefined4 *)(param_1 + 0x12d8) = *(undefined4 *)(param_1 + 0x12e0);
      *(undefined4 *)(param_1 + 0x12e4) = *(undefined4 *)(param_1 + 0x12ec);
    }
    else {
      iVar1 = iVar5 + 0x47;
      fVar6 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(iVar1);
      *(float *)(param_1 + 0x12a8) = (float)(fVar6 * (float10)60.0);
      fVar6 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x3c))(iVar1);
      *(float *)(param_1 + 0x12ac) = (float)(fVar6 * (float10)60.0);
      fVar6 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x44))(iVar1);
      *(float *)(param_1 + 0x12b0) = (float)(fVar6 * (float10)60.0);
      uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x24))(iVar5 + 0x45);
      *(undefined4 *)(param_1 + 0x12d0) = uVar4;
      uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x2c))(iVar5 + 0x45);
      *(undefined4 *)(param_1 + 0x12d4) = uVar4;
      fVar6 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(iVar5 + 0x46);
      *(float *)(param_1 + 0x1220) = (float)fVar6;
      fVar6 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x3c))(iVar5 + 0x46);
      *(float *)(param_1 + 0x1224) = (float)fVar6;
    }
    uVar4 = FUN_00ac8520(0x22);
    *(undefined4 *)(param_1 + 0x1358) = uVar4;
    uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x10))(0x22);
    *(undefined4 *)(param_1 + 0x135c) = uVar4;
    uVar3 = (**(code **)(**(int **)(param_1 + 0x754) + 0x20))(0x22);
    *(undefined1 *)(param_1 + 0x1360) = uVar3;
    uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x18))(0x22);
    *(undefined4 *)(param_1 + 0x1364) = uVar4;
    iVar5 = FUN_00ac4780();
    if (iVar5 < 1) {
      *(undefined4 *)(param_1 + 0x1340) = 0xbf800000;
    }
  }
  return;
}

// 004B91B0  FUN_004b91b0  size=457  [between]
void __thiscall FUN_004b91b0(int param_1,int param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  int local_4;
  
  if ((((*(int *)(param_1 + 0x4a0) == 1) && (iVar2 = FUN_00a4a2d0(), iVar2 == 0)) && (0 < param_3))
     && (((param_2 == 0 && (iVar2 = FUN_00a81330(), iVar2 != 0)) &&
         ((iVar2 = FUN_00a7c8a0(), iVar2 != 0 && (iVar6 = 0, 0 < *(short *)(iVar2 + 0x324))))))) {
    iVar5 = 0;
    do {
      iVar4 = *(int *)(iVar2 + 800);
      iVar3 = *(int *)(*(int *)(iVar4 + 0x60 + iVar5) + 0x40);
      if ((iVar3 != 0) && (iVar3 = FUN_00fdbbd0(iVar3,&DAT_0163ef44), iVar3 != 0)) {
        puVar1 = (uint *)(iVar4 + 0x38 + iVar5);
        *puVar1 = *puVar1 | 1;
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 0x70;
    } while (iVar6 < *(short *)(iVar2 + 0x324));
  }
  iVar2 = (int)*(short *)(param_1 + 0x324);
  iVar6 = 0;
  if (0 < iVar2) {
    local_4 = 0;
    do {
      if ((((-1 < iVar6) && (iVar6 < iVar2)) &&
          (iVar2 = *(int *)(param_1 + 800) + local_4, iVar2 != 0)) &&
         ((((iVar5 = FUN_00fdbbd0(*(undefined4 *)(*(int *)(iVar2 + 0x60) + 0x40),
                                  (&PTR_s__CBODY_01880cf0)[param_2]), iVar5 != 0 &&
            (iVar5 = FUN_00fdbbd0(*(undefined4 *)(*(int *)(iVar2 + 0x60) + 0x40),&DAT_0163ef3c),
            iVar5 != 0)) &&
           (((iVar4 = FUN_00a4a2d0(), iVar4 == 0 ||
             ((param_3 < 1 ||
              (iVar4 = FUN_00fdbbd0(*(undefined4 *)(*(int *)(iVar2 + 0x60) + 0x40),"Head_hair_"),
              iVar4 != 0)))) ||
            (iVar4 = FUN_00fdbbd0(*(undefined4 *)(*(int *)(iVar2 + 0x60) + 0x40),"Head_mask_"),
            iVar4 != 0)))) &&
          (((*(int *)(param_1 + 0x4a0) != 1 || (param_3 < 1)) ||
           (iVar4 = FUN_00fdbbd0(*(undefined4 *)(*(int *)(iVar2 + 0x60) + 0x40),"Head_hair_"),
           iVar4 == 0)))))) {
        if (*(char *)(iVar5 + 4) == '0') {
          bVar7 = param_3 == 0;
        }
        else {
          if (*(char *)(iVar5 + 4) != '1') goto LAB_004b935c;
          bVar7 = param_3 == 1;
        }
        if (bVar7) {
          *(uint *)(iVar2 + 0x38) = *(uint *)(iVar2 + 0x38) | 1;
        }
        else {
          *(uint *)(iVar2 + 0x38) = *(uint *)(iVar2 + 0x38) & 0xfffffffe;
        }
      }
LAB_004b935c:
      iVar2 = (int)*(short *)(param_1 + 0x324);
      local_4 = local_4 + 0x70;
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar2);
  }
  return;
}

// 004B9380  FUN_004b9380  size=33  [between]
void __thiscall FUN_004b9380(int param_1,undefined4 param_2)

{
  FUN_008e5c50(param_2);
  *(uint *)(param_1 + 0xdc0) = *(uint *)(param_1 + 0xdc0) | 0x40000000;
  return;
}

// 004B93B0  FUN_004b93b0  size=40  [between]
void __fastcall FUN_004b93b0(int param_1)

{
  if ((*(uint *)(param_1 + 0xdc0) & 0x40000000) != 0) {
    FUN_008e5c50(7);
    *(uint *)(param_1 + 0xdc0) = *(uint *)(param_1 + 0xdc0) & 0xbfffffff;
  }
  return;
}

// 004B93E0  FUN_004b93e0  size=124  [between]
undefined4 __thiscall
FUN_004b93e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x4a0) != 1) {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        *(undefined4 *)(param_1 + 0x1290) = 3;
        uVar2 = FUN_00aa4520(param_2,*(undefined4 *)(param_1 + 0x4f0),param_3,param_4,param_5,
                             param_6,param_7,param_8);
        return uVar2;
      }
    }
  }
  return 0xffffffff;
}

// 004B9460  FUN_004b9460  size=50  [between]
void __fastcall FUN_004b9460(int param_1)

{
  if ((*(uint *)(param_1 + 0xdc0) & 0x200000) != 0) {
    FUN_00a8c9b0(0,0x10,0x3f800000,0);
    *(uint *)(param_1 + 0xdc0) = *(uint *)(param_1 + 0xdc0) & 0xffdfffff;
  }
  return;
}

// 004B94A0  FUN_004b94a0  size=430  [between]
float10 __thiscall FUN_004b94a0(int param_1,float *param_2,float param_3,float param_4)

{
  float fVar1;
  uint uVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  local_20 = *param_2;
  local_1c = param_2[1];
  local_18 = param_2[2];
  local_14 = param_2[3];
  if ((*(int *)(param_1 + 0x10b8) == 1) && (uVar2 = FUN_00a8cab0(), (uVar2 & 0xffff0000) != 0x70000)
     ) {
    if (0.0 <= (*(float *)(param_1 + 0x48) - param_2[2]) * *(float *)(param_1 + 0x1158) +
               *(float *)(param_1 + 0x1154) * (*(float *)(param_1 + 0x44) - param_2[1]) +
               *(float *)(param_1 + 0x1150) * (*(float *)(param_1 + 0x40) - *param_2)) {
      local_20 = *(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x1150);
      local_1c = *(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x1154);
      local_18 = *(float *)(param_1 + 0x48) - *(float *)(param_1 + 0x1158);
      local_14 = *(float *)(param_1 + 0x4c) - *(float *)(param_1 + 0x115c);
    }
    else {
      local_20 = *(float *)(param_1 + 0x1150) + *(float *)(param_1 + 0x40);
      local_1c = *(float *)(param_1 + 0x44) + *(float *)(param_1 + 0x1154);
      local_18 = *(float *)(param_1 + 0x48) + *(float *)(param_1 + 0x1158);
      local_14 = *(float *)(param_1 + 0x115c) + *(float *)(param_1 + 0x4c);
    }
  }
  fVar3 = (float10)FUN_00a8ec30(&local_20);
  if (param_3 != 0.0) {
    fVar1 = *(float *)(param_1 + 0x910);
    fVar4 = (float10)FUN_00ddba30((float)(fVar3 - (float10)*(float *)(param_1 + 0x94)));
    fVar5 = (float10)FUN_00fdc1f0();
    fVar4 = ((float10)1 - fVar5) * (float10)(float)fVar4;
    fVar5 = (float10)(fVar1 * param_4);
    if (fVar4 <= -fVar5) {
      fVar4 = -fVar5;
    }
    if (fVar5 < fVar4) {
      fVar4 = fVar5;
    }
    fVar4 = (float10)FUN_00ddba30((float)(fVar4 + (float10)*(float *)(param_1 + 0x94)));
    *(float *)(param_1 + 0x94) = (float)fVar4;
    fVar3 = (float10)(float)fVar3;
  }
  fVar3 = (float10)FUN_00ddba30((float)((float10)*(float *)(param_1 + 0x94) - fVar3));
  return ABS(fVar3);
}

// 004B9650  FUN_004b9650  size=36  [between]
void __thiscall FUN_004b9650(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_004b94a0(*(int *)(param_1 + 0xa84) + 0x40,param_2,param_3);
  return;
}

// 004B9680  FUN_004b9680  size=1168  [between]
undefined1 __thiscall FUN_004b9680(int param_1,float *param_2,int param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 uVar5;
  int iVar6;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  if (*(int *)(param_1 + 0x10b8) == 1) {
    iVar6 = FUN_00a81330();
    if (iVar6 != 0) {
      FUN_00a81330();
      iVar6 = FUN_00a7c8a0();
      if (iVar6 != 0) {
        if (0.0 <= (param_4[2] - *(float *)(param_1 + 0x48)) * *(float *)(param_1 + 0x1158) +
                   (param_4[1] - *(float *)(param_1 + 0x44)) * *(float *)(param_1 + 0x1154) +
                   *(float *)(param_1 + 0x1150) * (*param_4 - *(float *)(param_1 + 0x40))) {
          fVar1 = *(float *)(param_1 + 0x1150) * -20.0;
          fVar2 = *(float *)(param_1 + 0x1154) * -20.0;
          fVar3 = *(float *)(param_1 + 0x1158) * -20.0;
          fVar4 = *(float *)(param_1 + 0x115c) * -20.0;
        }
        else {
          fVar1 = *(float *)(param_1 + 0x1150) * 20.0;
          fVar2 = *(float *)(param_1 + 0x1154) * 20.0;
          fVar3 = *(float *)(param_1 + 0x1158) * 20.0;
          fVar4 = *(float *)(param_1 + 0x115c) * 20.0;
        }
        *param_2 = *(float *)(iVar6 + 0x40) + fVar1;
        param_2[1] = *(float *)(iVar6 + 0x44) + fVar2;
        param_2[2] = fVar3 + *(float *)(iVar6 + 0x48);
        param_2[3] = fVar4 + *(float *)(iVar6 + 0x4c);
        fVar1 = *(float *)(param_1 + 0x40) - *(float *)(iVar6 + 0x40);
        fVar2 = *(float *)(param_1 + 0x48) - *(float *)(iVar6 + 0x48);
        if (fVar2 * fVar2 + fVar1 * fVar1 <= 20.0) {
          return 1;
        }
      }
    }
  }
  else if (param_3 != 0) {
    iVar6 = FUN_00c9d910();
    if (*(int *)(iVar6 + 8) == 0) {
      FUN_00c9fe70(&local_50);
      if (0.0 <= local_48 * (param_4[2] - local_18) +
                 local_50 * (*param_4 - local_20) + local_4c * (param_4[1] - local_1c)) {
        local_80 = local_50 * -0.45;
        local_7c = local_4c * -0.45;
        local_78 = local_48 * -0.45;
        local_74 = local_44 * -0.45;
      }
      else {
        local_80 = local_50 * 0.45;
        local_7c = local_4c * 0.45;
        local_78 = local_48 * 0.45;
        local_74 = local_44 * 0.45;
      }
      if (0.0 <= local_2c * (param_4[1] - local_1c) + local_30 * (*param_4 - local_20) +
                 local_28 * (param_4[2] - local_18)) {
        fVar1 = -0.45;
        local_2c = local_2c * -0.45;
        local_24 = local_24 * -0.45;
      }
      else {
        fVar1 = 0.45;
        local_2c = local_2c * 0.45;
        local_24 = local_24 * 0.45;
      }
      *param_2 = local_20 + local_80 + local_30 * fVar1;
      param_2[1] = local_1c + local_7c + local_2c;
      param_2[2] = local_18 + local_78 + local_28 * fVar1;
      param_2[3] = local_14 + local_74 + local_24;
    }
    else {
      FUN_00c9fdd0(&local_80);
      local_60 = *param_4 - local_80;
      local_58 = param_4[2] - local_78;
      local_5c = 0.0;
      if ((local_60 == 0.0) && (local_58 == 0.0)) {
        local_60 = 1.0;
      }
      else {
        fVar1 = local_60 * local_60 + local_58 * local_58;
        if (fVar1 < 0.0 == (fVar1 == 0.0)) {
          FUN_00ddf460(&local_60,&local_60);
        }
        else {
          FUN_00dd5650(&DAT_0163d0ac);
          local_60 = 0.0;
          local_5c = 1.0;
          local_58 = 0.0;
        }
      }
      iVar6 = FUN_00c9d910();
      fVar1 = *(float *)(iVar6 + 0x24) * -0.9;
      *param_2 = local_80 + local_60 * fVar1;
      param_2[1] = fVar1 * local_5c + local_7c;
      param_2[2] = local_58 * fVar1 + local_78;
    }
    local_70 = *param_2 - *(float *)(param_1 + 0x40);
    local_6c = param_2[1] - *(float *)(param_1 + 0x44);
    local_68 = param_2[2] - *(float *)(param_1 + 0x48);
    local_64 = param_2[3] - *(float *)(param_1 + 0x4c);
    if (((local_70 == 0.0) && (local_6c == 0.0)) && (local_68 == 0.0)) {
      local_70 = *(float *)(param_1 + 0x40);
      local_6c = *(float *)(param_1 + 0x44);
      local_68 = *(float *)(param_1 + 0x48);
      local_64 = *(float *)(param_1 + 0x4c);
    }
    else {
      fVar1 = local_68 * local_68 + local_6c * local_6c + local_70 * local_70;
      if (fVar1 < 0.0 == (fVar1 == 0.0)) {
        FUN_00ddf460(&local_70,&local_70);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        local_68 = 0.0;
        local_70 = 0.0;
        local_6c = 1.0;
      }
      local_70 = *(float *)(param_1 + 0x40) + local_70 * 4.0;
      local_6c = local_6c * 4.0 + *(float *)(param_1 + 0x44);
      local_68 = local_68 * 4.0 + *(float *)(param_1 + 0x48);
      local_64 = local_64 * 4.0 + *(float *)(param_1 + 0x4c);
    }
    uVar5 = FUN_00ca30d0(&local_70);
    return uVar5;
  }
  return 0;
}

// 004B9B10  FUN_004b9b10  size=49  [between]
void __fastcall FUN_004b9b10(int param_1)

{
  if (*(int *)(param_1 + 0x10b8) == 0) {
    FUN_00c19f60(*(undefined4 *)(param_1 + 0xb9c),1);
    return;
  }
  FUN_00c19f60(*(undefined4 *)(param_1 + 0xb9c),2);
  return;
}

// 004B9B50  FUN_004b9b50  size=981  [between]
void FUN_004b9b50(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  if ((((*param_2 != 0.0) || (param_2[1] != 0.0)) || (param_2[2] != 0.0)) &&
     ((((*param_3 != 0.0 || (param_3[1] != 0.0)) || (param_3[2] != 0.0)) &&
      (((*param_3 != *param_2 || (param_3[1] != param_2[1])) ||
       ((param_3[2] != param_2[2] || (param_3[3] != param_2[3])))))))) {
    fVar5 = (float10)FUN_00fdc1f0();
    fVar1 = param_2[1] * param_2[1] + *param_2 * *param_2 + param_2[2] * param_2[2];
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      FUN_00ddf460(&local_20,param_2);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_20 = 0.0;
      local_1c = 1.0;
      local_18 = 0.0;
    }
    fVar1 = param_3[1] * param_3[1] + *param_3 * *param_3 + param_3[2] * param_3[2];
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      FUN_00ddf460(&local_30,param_3);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_30 = 0.0;
      local_2c = 1.0;
      local_28 = 0.0;
    }
    fVar4 = SQRT(param_2[1] * param_2[1] + *param_2 * *param_2 + param_2[2] * param_2[2]);
    fVar1 = param_3[1];
    fVar2 = *param_3;
    fVar3 = param_3[2];
    fVar6 = (float10)FUN_00ddbb50(local_28 * local_18 + local_30 * local_20 + local_1c * local_2c);
    if ((float10)0 != fVar6) {
      fVar7 = (float10)(float)((float10)1 - fVar5);
      fVar8 = (float10)fsin(((float10)1 - fVar7) * fVar6);
      fVar6 = (float10)fsin(fVar6 * fVar7);
      fVar7 = (float10)local_20;
      local_20 = (float)(fVar7 * fVar8);
      fVar9 = (float10)local_1c;
      local_1c = (float)(fVar9 * fVar8);
      fVar10 = (float10)local_18;
      local_18 = (float)(fVar10 * fVar8);
      fVar11 = (float10)local_14;
      local_14 = (float)(fVar11 * fVar8);
      fVar12 = (float10)local_30;
      local_30 = (float)(fVar12 * fVar6);
      fVar13 = (float10)local_2c;
      local_2c = (float)(fVar13 * fVar6);
      local_28 = (float)((float10)local_28 * fVar6);
      fVar14 = (float10)local_24;
      local_24 = (float)(fVar14 * fVar6);
      fVar7 = fVar12 * fVar6 + fVar7 * fVar8;
      *param_1 = (float)fVar7;
      fVar9 = fVar9 * fVar8 + fVar13 * fVar6;
      param_1[1] = (float)fVar9;
      fVar10 = (float10)local_28 + fVar10 * fVar8;
      param_1[2] = (float)fVar10;
      param_1[3] = (float)(fVar14 * fVar6 + fVar11 * fVar8);
      fVar6 = fVar9 * fVar9 + fVar7 * fVar7 + fVar10 * fVar10;
      if (fVar6 < (float10)(float)(undefined *)0x0 == (fVar6 == (float10)(float)(undefined *)0x0)) {
        FUN_00ddf460(param_1,param_1);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        *param_1 = 0.0;
        param_1[1] = 1.0;
        param_1[2] = 0.0;
      }
      fVar4 = (SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3) - fVar4) *
              (float)((float10)1 - fVar5) + fVar4;
      *param_1 = *param_1 * fVar4;
      param_1[1] = fVar4 * param_1[1];
      param_1[2] = param_1[2] * fVar4;
      param_1[3] = fVar4 * param_1[3];
      return;
    }
  }
  return;
}

// 004B9F90  FUN_004b9f90  size=84  [between]
undefined4 __fastcall FUN_004b9f90(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (*(int *)(param_1 + 0x10b8) == 1) {
    return 0;
  }
  if (*(int *)(param_1 + 0x10b8) == 0) {
    uVar3 = *(undefined4 *)(param_1 + 0xb9c);
    uVar4 = 1;
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0xb9c);
    uVar4 = 2;
  }
  iVar2 = FUN_00c19f60(uVar3,uVar4);
  if ((iVar2 != 0) && (cVar1 = FUN_00ca30d0(*(int *)(param_1 + 0xa84) + 0x40), cVar1 == '\0')) {
    return 0;
  }
  return 1;
}

// 004B9FF0  FUN_004b9ff0  size=155  [between]
void __thiscall FUN_004b9ff0(int param_1,int param_2)

{
  if (param_2 == 0) {
    *(uint *)(param_1 + 0xdc0) = *(uint *)(param_1 + 0xdc0) & 0xfeffffff;
    if (*(undefined4 **)(param_1 + 0x370) != (undefined4 *)0x0) {
      *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) & 0xffbfffff;
      **(undefined4 **)(param_1 + 0x370) = 1;
    }
    if (*(int *)(param_1 + 0x370) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x370) + 4) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x370) + 8) = 0;
    }
  }
  else {
    *(uint *)(param_1 + 0xdc0) = *(uint *)(param_1 + 0xdc0) | 0x1000000;
    if (*(undefined4 **)(param_1 + 0x370) != (undefined4 *)0x0) {
      *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) | 0x400000;
      **(undefined4 **)(param_1 + 0x370) = 0;
    }
    if (*(int *)(param_1 + 0x370) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x370) + 4) = 1;
      *(undefined4 *)(*(int *)(param_1 + 0x370) + 8) = 1;
    }
  }
  if (*(int *)(param_1 + 0x370) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x370) + 0xc) = 1;
  }
  return;
}

// 004BA0A0  FUN_004ba0a0  size=25  [between]
undefined4 FUN_004ba0a0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    uVar2 = FUN_00a7c8a0();
    return uVar2;
  }
  return 0;
}

// 004BA0C0  FUN_004ba0c0  size=25  [between]
undefined4 FUN_004ba0c0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    uVar2 = FUN_00a7c8a0();
    return uVar2;
  }
  return 0;
}

// 004BA0E0  FUN_004ba0e0  size=25  [between]
undefined4 FUN_004ba0e0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    uVar2 = FUN_00a7c8a0();
    return uVar2;
  }
  return 0;
}

// 004BA100  FUN_004ba100  size=25  [between]
undefined4 FUN_004ba100(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    uVar2 = FUN_00a7c8a0();
    return uVar2;
  }
  return 0;
}

// 004BA140  FUN_004ba140  size=25  [between]
undefined4 FUN_004ba140(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    uVar2 = FUN_00a7c8a0();
    return uVar2;
  }
  return 0;
}

// 004BA180  FUN_004ba180  size=43  [between]
bool FUN_004ba180(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      uVar2 = FUN_004b72d0();
      return 6 < uVar2;
    }
  }
  return false;
}

// 004BA1B0  FUN_004ba1b0  size=39  [between]
uint FUN_004ba1b0(void)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      return *(uint *)(iVar1 + 0x4c0) & 1;
    }
  }
  return 0;
}

// 004BA1E0  FUN_004ba1e0  size=114  [between]
undefined4 __fastcall FUN_004ba1e0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = FUN_00a82090("Em0119",0x20119,0);
  if (iVar1 != 0) {
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
    FUN_00a8c5f0(6,*(undefined4 *)(param_1 + 0x4f0),iVar1,0x700,0xffffffff);
    return 1;
  }
  return 0;
}

// 004BA260  FUN_004ba260  size=114  [between]
undefined4 __fastcall FUN_004ba260(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = FUN_00a82090("Em011b",0x2011b,0);
  if (iVar1 != 0) {
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
    FUN_00a8c5f0(6,*(undefined4 *)(param_1 + 0x4f0),iVar1,0x700,0xffffffff);
    return 1;
  }
  return 0;
}

// 004BA310  FUN_004ba310  size=40  [between]
float10 FUN_004ba310(void)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      return (float10)*(float *)(iVar1 + 0xfc8);
    }
  }
  return (float10)-1.0;
}

// 004BA340  FUN_004ba340  size=85  [between]
void __thiscall FUN_004ba340(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 local_40 [32];
  char local_20 [32];
  
  FUN_009f8ea0(local_40,0x20,*(undefined4 *)(param_1 + 0x4b0),0);
  _sprintf_s(local_20,0x20,"%s_%s_%d_seq.bxm",local_40,param_2,param_3);
  FUN_00de4500(local_20);
  return;
}

// 004BA3A0  FUN_004ba3a0  size=101  [between]
void __thiscall FUN_004ba3a0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 local_40 [32];
  char local_20 [32];
  
  uVar1 = FUN_008d7d70(param_2);
  FUN_009f8ea0(local_40,0x20,*(undefined4 *)(param_1 + 0x4b0),0);
  _sprintf_s(local_20,0x20,"%s_%s_%d_seq.bxm",local_40,uVar1,param_3);
  FUN_00de4500(local_20);
  return;
}

// 004BA410  FUN_004ba410  size=627  [between]
void __fastcall FUN_004ba410(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (*(int *)(param_1 + 0x4a0) == 1) {
    return;
  }
  iVar2 = FUN_00a81330();
  if (iVar2 == 0) {
    return;
  }
  piVar3 = (int *)FUN_00a7c8a0();
  if (piVar3 == (int *)0x0) {
    return;
  }
  bVar1 = true;
  switch(*(undefined4 *)(param_1 + 0x1290)) {
  case 0:
    *(float *)(param_1 + 0x1298) = *(float *)(param_1 + 0x1298) - *(float *)(param_1 + 0x910);
    iVar2 = FUN_00a8c760(0x32);
    if (iVar2 == 0) {
      iVar2 = FUN_00a8c760(0x33);
      if (iVar2 == 0) {
        if (*(float *)(param_1 + 0x1298) <= 0.0) {
          bVar1 = false;
        }
        break;
      }
      uVar5 = *(undefined4 *)(param_1 + 0x4f0);
      *(undefined4 *)(param_1 + 0x1290) = 2;
      uVar7 = 0x8000000;
      uVar6 = 0x3d088889;
      uVar4 = 0x125;
    }
    else {
      uVar5 = *(undefined4 *)(param_1 + 0x4f0);
      *(undefined4 *)(param_1 + 0x1290) = 1;
      uVar7 = 0x8000000;
      uVar6 = 0x3d088889;
      uVar4 = 0x124;
    }
    goto LAB_004ba65a;
  case 1:
    iVar2 = FUN_00a8c760(0x32);
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x1298) = 0x41200000;
      *(undefined4 *)(param_1 + 0x1290) = 0;
      FUN_00aa4520(0x123,*(undefined4 *)(param_1 + 0x4f0),0,0x3e2aaaab,0x3f800000,0,0xbf800000,
                   0x3f800000);
    }
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      bVar1 = false;
    }
    break;
  case 2:
    iVar2 = FUN_00a8c760(0x33);
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x1298) = 0x41200000;
      *(undefined4 *)(param_1 + 0x1290) = 0;
      FUN_00aa4520(0x123,*(undefined4 *)(param_1 + 0x4f0),0,0x3e2aaaab,0x3f800000,0,0xbf800000,
                   0x3f800000);
    }
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      bVar1 = false;
    }
    break;
  case 3:
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 == 0) break;
    uVar5 = *(undefined4 *)(param_1 + 0x4f0);
    *(undefined4 *)(param_1 + 0x1298) = 0x41200000;
    *(undefined4 *)(param_1 + 0x1290) = 0;
    uVar7 = 0;
    uVar6 = 0x3e2aaaab;
    uVar4 = 0x123;
LAB_004ba65a:
    FUN_00aa4520(uVar4,uVar5,0,uVar6,0x3f800000,uVar7,0xbf800000,0x3f800000);
  }
  if ((*(int *)(param_1 + 0x1254) != 0) && (bVar1)) {
                    /* WARNING: Could not recover jumptable at 0x004ba67c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar3 + 100))();
    return;
  }
  return;
}

// 004BA6A0  FUN_004ba6a0  size=597  [between]
void __thiscall FUN_004ba6a0(int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if ((*(int *)(param_1 + 0x4a0) != 1) &&
     (iVar6 = 0, (*(int *)(param_1 + 0x1254) != 0) != (param_2 != 0))) {
    *(int *)(param_1 + 0x1254) = param_2;
    if (param_2 == 0) {
      iVar2 = FUN_00a81330();
      if (iVar2 != 0) {
        FUN_00a9e060(7);
        FUN_00a9e060(8);
        FUN_00a9e060(9);
        FUN_00a9e060(10);
        FUN_00a9e060(0xb);
        FUN_00a9e060(0xc);
        FUN_00a9e060(0xd);
        if (0 < *(short *)(param_1 + 0x324)) {
          iVar2 = 0;
          do {
            iVar5 = *(int *)(param_1 + 800);
            iVar4 = *(int *)(*(int *)(iVar5 + 0x60 + iVar2) + 0x40);
            if ((iVar4 != 0) && (iVar4 = FUN_00fdbbd0(iVar4,&DAT_0163ef94), iVar4 != 0)) {
              puVar1 = (uint *)(iVar5 + 0x38 + iVar2);
              *puVar1 = *puVar1 | 1;
            }
            iVar6 = iVar6 + 1;
            iVar2 = iVar2 + 0x70;
          } while (iVar6 < *(short *)(param_1 + 0x324));
        }
        FUN_00ac9210("eye_kage_DEC");
        FUN_00ac9210("matuge_DEC");
        piVar3 = (int *)FUN_00a7c8a0();
        if (piVar3 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004ba8f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*piVar3 + 0xf8))();
          return;
        }
      }
    }
    else {
      iVar2 = FUN_00a81330();
      if (iVar2 != 0) {
        FUN_00a8c5f0(7,*(undefined4 *)(param_1 + 0x4f0),iVar2,0xffffffff,0xffffffff);
        FUN_00a8c5f0(8,*(undefined4 *)(param_1 + 0x4f0),iVar2,0,0);
        FUN_00a8c5f0(9,*(undefined4 *)(param_1 + 0x4f0),iVar2,1,1);
        FUN_00a8c5f0(10,*(undefined4 *)(param_1 + 0x4f0),iVar2,2,2);
        FUN_00a8c5f0(0xb,*(undefined4 *)(param_1 + 0x4f0),iVar2,3,3);
        FUN_00a8c5f0(0xc,*(undefined4 *)(param_1 + 0x4f0),iVar2,4,4);
        FUN_00a8c5f0(0xd,*(undefined4 *)(param_1 + 0x4f0),iVar2,5,5);
        if (0 < *(short *)(param_1 + 0x324)) {
          param_2 = 0;
          do {
            iVar5 = *(int *)(param_1 + 800) + param_2;
            iVar2 = *(int *)(*(int *)(iVar5 + 0x60) + 0x40);
            if ((iVar2 != 0) && (iVar2 = FUN_00fdbbd0(iVar2,&DAT_0163ef94), iVar2 != 0)) {
              puVar1 = (uint *)(iVar5 + 0x38);
              *puVar1 = *puVar1 & 0xfffffffe;
            }
            param_2 = param_2 + 0x70;
            iVar6 = iVar6 + 1;
          } while (iVar6 < *(short *)(param_1 + 0x324));
        }
        FUN_00ac9300("eye_kage_DEC");
        FUN_00ac9300("matuge_DEC");
        piVar3 = (int *)FUN_00a7c8a0();
        if (piVar3 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004ba818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*piVar3 + 0xf8))();
          return;
        }
      }
    }
  }
  return;
}

// 004BA900  FUN_004ba900  size=182  [between]
void __fastcall FUN_004ba900(int param_1)

{
  undefined4 local_60;
  float local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_54 = 0;
  local_50 = 0;
  local_3c = 0;
  local_60 = *(undefined4 *)(param_1 + 0x40);
  local_2c = 0;
  local_48 = 0xffffffff;
  local_58 = *(undefined4 *)(param_1 + 0x48);
  local_44 = 0xffffffff;
  local_4 = 0xffffffff;
  local_40 = 0xfffffffe;
  local_5c = *(float *)(param_1 + 0x44) - 1.0;
  local_34 = 0x1010000;
  local_4c = 7;
  local_38 = 0x20040;
  local_30 = 0xb;
  FUN_00c15bb0(&local_60,0x41c80000,0x40400000);
  FUN_00c5e350(param_1,&local_54,&local_30);
  return;
}

// 004BA9C0  FUN_004ba9c0  size=80  [between]
bool __fastcall FUN_004ba9c0(int param_1)

{
  int iVar1;
  
  *(uint *)(param_1 + 0x1344) = *(uint *)(param_1 + 0x1344) ^ 1;
  iVar1 = FUN_00a81330();
  if (iVar1 == 0) {
LAB_004ba9ef:
    if (*(int *)(param_1 + 0x10b0) < 1) goto LAB_004baa03;
  }
  else {
    iVar1 = FUN_00a7c8a0();
    if ((iVar1 == 0) || ((*(uint *)(iVar1 + 0x4c0) & 1) == 0)) goto LAB_004ba9ef;
  }
  *(undefined4 *)(param_1 + 0x1344) = 1;
LAB_004baa03:
  return *(int *)(param_1 + 0x1344) != 0;
}

// 004BAA10  FUN_004baa10  size=182  [between]
void __fastcall FUN_004baa10(int param_1)

{
  undefined4 local_60;
  float local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_54 = 0;
  local_50 = 0;
  local_3c = 0;
  local_60 = *(undefined4 *)(param_1 + 0x40);
  local_2c = 0;
  local_48 = 0xffffffff;
  local_58 = *(undefined4 *)(param_1 + 0x48);
  local_44 = 0xffffffff;
  local_4 = 0xffffffff;
  local_40 = 0xfffffffe;
  local_5c = *(float *)(param_1 + 0x44) - 1.0;
  local_34 = 0x1010000;
  local_4c = 7;
  local_38 = 0x20040;
  local_30 = 0xc;
  FUN_00c15bb0(&local_60,0x41c80000,0x40400000);
  FUN_00c5e350(param_1,&local_54,&local_30);
  return;
}

// 004BAAD0  FUN_004baad0  size=110  [between]
void __fastcall FUN_004baad0(undefined4 param_1)

{
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_10 = 0;
  local_3c = 0;
  local_c = 0;
  local_2c = 0;
  local_8 = 0;
  local_54 = 0;
  local_48 = 0xffffffff;
  local_50 = 0;
  local_44 = 0xffffffff;
  local_4 = 0xffffffff;
  local_4c = 0xffffffff;
  local_40 = 0xfffffffe;
  local_34 = 0x1010000;
  local_38 = 0x20040;
  local_30 = 0xd;
  FUN_00c5e350(param_1,&local_54,&local_30);
  return;
}

// 004BAB40  FUN_004bab40  size=110  [between]
void __fastcall FUN_004bab40(undefined4 param_1)

{
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_10 = 0;
  local_3c = 0;
  local_c = 0;
  local_2c = 0;
  local_8 = 0;
  local_54 = 0;
  local_48 = 0xffffffff;
  local_50 = 0;
  local_44 = 0xffffffff;
  local_4 = 0xffffffff;
  local_4c = 0xffffffff;
  local_40 = 0xfffffffe;
  local_34 = 0x1010000;
  local_38 = 0x20040;
  local_30 = 0x13;
  FUN_00c5e350(param_1,&local_54,&local_30);
  return;
}

// 004BABB0  FUN_004babb0  size=173  [between]
void __fastcall FUN_004babb0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_54 = 0;
  local_50 = 0;
  local_48 = 0xffffffff;
  local_44 = 0xffffffff;
  local_40 = 0xfffffffe;
  local_3c = 0;
  local_2c = 0;
  local_4 = 0xffffffff;
  local_34 = 0x1010000;
  local_4c = 0xffffffff;
  local_38 = 0x20040;
  local_30 = 0x14;
  if (*(int *)(param_1 + 0x10b8) == 0) {
    uVar2 = *(undefined4 *)(param_1 + 0xb9c);
    uVar3 = 1;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0xb9c);
    uVar3 = 2;
  }
  iVar1 = FUN_00c19f60(uVar2,uVar3);
  if (iVar1 != 0) {
    FUN_00c9fdd0(&local_10);
  }
  FUN_00c5e350(param_1,&local_54,&local_30);
  return;
}

// 004BAC60  FUN_004bac60  size=114  [between]
void __fastcall FUN_004bac60(undefined4 param_1)

{
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_10 = 0;
  local_3c = 0;
  local_c = 0;
  local_2c = 0;
  local_8 = 0;
  local_54 = 0;
  local_48 = 0xffffffff;
  local_50 = 0;
  local_44 = 0xffffffff;
  local_4 = 0xffffffff;
  local_40 = 0xfffffffe;
  local_34 = 0x1010000;
  local_4c = 2;
  local_38 = 0x20040;
  local_30 = 0x11;
  FUN_00c5e350(param_1,&local_54,&local_30);
  return;
}

// 004BACE0  FUN_004bace0  size=174  [between]
void __fastcall FUN_004bace0(int param_1)

{
  undefined4 local_60;
  float local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_54 = 0x3f800000;
  local_3c = 0;
  local_2c = 0;
  local_50 = 0;
  local_60 = *(undefined4 *)(param_1 + 0x40);
  local_48 = 0xffffffff;
  local_44 = 0xffffffff;
  local_58 = *(undefined4 *)(param_1 + 0x48);
  local_4 = 0xffffffff;
  local_40 = 0xfffffffe;
  local_34 = 0x1010000;
  local_4c = 7;
  local_5c = *(float *)(param_1 + 0x44) - 1.0;
  local_38 = 0x20040;
  local_30 = 0xe;
  FUN_00c15bb0(&local_60,0x40400000,0x40400000);
  FUN_00c5e350(param_1,&local_54,&local_30);
  return;
}

// 004BAD90  FUN_004bad90  size=37  [between]
void __thiscall FUN_004bad90(int param_1,int param_2)

{
  if (((*(int *)(param_1 + 0x10b8) == 1) && (param_2 != 0)) &&
     (*(int *)(param_2 + 0x4b0) == 0x20040)) {
    FUN_00b0c8e0();
  }
  return;
}

// 004BADC0  FUN_004badc0  size=127  [between]
void __thiscall
FUN_004badc0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_54 = 0;
  local_50 = 0;
  local_48 = 0xffffffff;
  local_44 = 0xffffffff;
  local_38 = 0xffffffff;
  local_10 = param_3;
  local_3c = 0;
  local_c = param_4;
  local_2c = 0;
  local_8 = param_5;
  local_4c = 1;
  local_4 = param_2;
  local_40 = 0xfffffffe;
  local_34 = 0x1010000;
  local_30 = 0x12;
  FUN_00c5e350(param_1,&local_54,&local_30);
  return;
}

// 004BAE40  FUN_004bae40  size=42  [between]
void __fastcall FUN_004bae40(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x10b8) == 2) {
    iVar1 = FUN_00c19890(5,2);
    if (iVar1 == 0) {
      FUN_00c18610(5,2);
    }
  }
  return;
}

// 004BAE70  FUN_004bae70  size=63  [between]
undefined4 __fastcall FUN_004bae70(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x10b8);
  if (iVar1 == 0) {
    uVar2 = FUN_00c198f0(1);
    return uVar2;
  }
  if (iVar1 == 1) {
    uVar2 = FUN_00c198f0(3);
    return uVar2;
  }
  if (iVar1 == 2) {
    uVar2 = FUN_00c198f0(5);
    return uVar2;
  }
  return 0xffffffff;
}

// 004BAEB0  FUN_004baeb0  size=236  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004baeb0(int param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  
  if (DAT_018b9174 == 0x468) {
    if ((_DAT_01b34df0 & 1) == 0) {
      _DAT_01b34df0 = _DAT_01b34df0 | 1;
      DAT_01b34dd0 = -40.47752;
      DAT_01b34dd4 = 0x43a4c000;
      DAT_01b34dd8 = -24.2;
      DAT_01b34de0 = -40.47752;
      DAT_01b34de4 = 0x43a4c000;
      DAT_01b34de8 = -37.8;
    }
    fVar1 = DAT_01b34dd0 - *(float *)(param_1 + 0x40);
    fVar4 = DAT_01b34dd8 - *(float *)(param_1 + 0x48);
    fVar2 = DAT_01b34de0 - *(float *)(param_1 + 0x40);
    fVar3 = DAT_01b34de8 - *(float *)(param_1 + 0x48);
    uVar5 = (uint)(fVar3 * fVar3 + fVar2 * fVar2 < fVar4 * fVar4 + fVar1 * fVar1);
    *param_2 = (&DAT_01b34dd0)[uVar5 * 4];
    param_2[1] = (&DAT_01b34dd4)[uVar5 * 4];
    param_2[2] = (&DAT_01b34dd8)[uVar5 * 4];
    param_2[3] = (&DAT_01b34ddc)[uVar5 * 4];
    param_2[3] = (&DAT_0163efa4)[uVar5];
    *(undefined4 *)(param_1 + 0x11b0) = (&DAT_0163ef9c)[uVar5];
    return 1;
  }
  return 0;
}

// 004BAFA0  FUN_004bafa0  size=162  [between]
void __fastcall FUN_004bafa0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x11f4) = 0;
  iVar1 = *(int *)(param_1 + 0x10b8);
  *(undefined4 *)(param_1 + 0x11f0) = 0;
  if (iVar1 == 0) {
    FUN_00c188e0(1,3);
    FUN_00c188e0(1,4);
    FUN_00c188e0(1,5);
    FUN_00c188e0(1,6);
    return;
  }
  if (iVar1 == 1) {
    uVar2 = 3;
  }
  else {
    if (iVar1 != 2) goto LAB_004bb017;
    uVar2 = 5;
  }
  iVar1 = FUN_00c198f0(uVar2);
  if (0 < iVar1) {
    return;
  }
LAB_004bb017:
  if ((*(int *)(param_1 + 0x10b8) == 2) && (iVar1 = FUN_00c19890(5,2), iVar1 == 0)) {
    FUN_00c18610(5,2);
  }
  return;
}

// 004BB050  FUN_004bb050  size=130  [between]
undefined4 __fastcall FUN_004bb050(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x4a0) == 1) {
    iVar1 = FUN_00a81330();
    if (((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) &&
       ((*(uint *)(iVar1 + 0x4c0) & 1) != 0)) {
      return 0;
    }
    iVar1 = FUN_00a81330();
    if (((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) &&
       (uVar2 = FUN_004b72d0(), 6 < uVar2)) {
      return 0;
    }
  }
  else if (((*(int *)(param_1 + 0x10b8) != 2) || (*(int *)(param_1 + 0x11f0) != 0)) &&
          ((*(int *)(param_1 + 0x10b8) != 0 || (*(int *)(param_1 + 0x11f0) == 0)))) {
    return 0;
  }
  return 1;
}

// 004BB0E0  FUN_004bb0e0  size=199  [between]
void __fastcall FUN_004bb0e0(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0xdc4) == 0) {
    iVar3 = FUN_00a81330();
    if (((iVar3 == 0) || (iVar3 = FUN_00a7c8a0(), iVar3 == 0)) ||
       ((*(uint *)(iVar3 + 0x4c0) & 1) == 0)) {
      fVar1 = *(float *)(param_1 + 0xdd8);
    }
    else {
      fVar1 = *(float *)(param_1 + 0xdd4);
    }
    fVar2 = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0xdcc);
    *(float *)(param_1 + 0xdcc) = fVar2;
    if (fVar1 <= fVar2) {
      *(undefined4 *)(param_1 + 0xdc4) = 0;
      *(undefined4 *)(param_1 + 0xdc8) = 0;
      *(undefined4 *)(param_1 + 0xdcc) = 0;
      *(undefined4 *)(param_1 + 0xdc4) = 1;
    }
    return;
  }
  fVar1 = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0xdc8);
  *(float *)(param_1 + 0xdc8) = fVar1;
  if ((fVar1 < *(float *)(param_1 + 0xdd0)) && ((*(uint *)(param_1 + 0xdc0) & 0x200) == 0)) {
    return;
  }
  *(undefined4 *)(param_1 + 0xdc4) = 0;
  *(undefined4 *)(param_1 + 0xdc8) = 0;
  *(undefined4 *)(param_1 + 0xdcc) = 0;
  return;
}

// 004BB1B0  FUN_004bb1b0  size=76  [between]
void __thiscall FUN_004bb1b0(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)(param_1 + 0x135c);
  uVar1 = *(undefined1 *)(param_1 + 0x1360);
  uVar2 = *(undefined4 *)(param_1 + 0x1364);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x1358);
  *(undefined4 *)(param_2 + 0xc) = uVar3;
  *(undefined1 *)(param_2 + 0x10) = uVar1;
  *(undefined4 *)(param_2 + 8) = uVar2;
  *(undefined1 *)(param_2 + 0x11) = 10;
  *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_1 + 0x4f0);
  uVar3 = FUN_00a7c7f0();
  FUN_00a7c960(uVar3);
  return;
}

// 004BB200  FUN_004bb200  size=75  [between]
void __thiscall FUN_004bb200(int param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  
  if (*(int **)(param_1 + 0xa84) != (int *)0x0) {
    puVar2 = &DAT_01be9db8;
    (**(code **)(**(int **)(param_1 + 0xa84) + 4))(&DAT_01be9db8);
    iVar1 = FUN_00dd6d70(puVar2);
    if (iVar1 != 0) {
      if (param_2 != 0) {
        FUN_00b7eba0(*(undefined4 *)(param_1 + 0x4f0));
        return;
      }
      FUN_00b7ec60();
    }
  }
  return;
}

// 004BB260  Em0110::vf130  size=1053  [class]
undefined4 __thiscall Em0110::vf130(int param_1,ushort *param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined2 uVar6;
  uint unaff_EBX;
  undefined1 uStack_8;
  
  iVar2 = FUN_00dd3500(0x110,&DAT_01b7c0b8);
  if ((iVar2 == 0) || (iVar2 = CollisionAttackData::CollisionAttackData_3(), iVar2 == 0)) {
    FUN_00dd5650(&DAT_0163efbc);
    return 0;
  }
  puVar1 = *(uint **)(iVar2 + 8);
  puVar1[5] = *(uint *)(param_1 + 0x4f0);
  uVar3 = FUN_00a7c7f0();
  FUN_00a7c960(uVar3);
  uVar4 = FUN_00ac8520(*param_2);
  uVar3 = (**(code **)(**(int **)(param_1 + 0x754) + 0x10))(*param_2);
  (**(code **)(**(int **)(param_1 + 0x754) + 0x20))(*param_2);
  uVar5 = (**(code **)(**(int **)(param_1 + 0x754) + 0x18))(*param_2);
  if (*(int *)(param_1 + 0x4a0) == 1) {
    uVar4 = FUN_00fdbc60();
  }
  puVar1[3] = unaff_EBX;
  puVar1[1] = uVar4;
  *(undefined1 *)(puVar1 + 4) = uStack_8;
  puVar1[2] = uVar5;
  *puVar1 = (uint)*param_2;
  switch(*param_2) {
  case 4:
    *puVar1 = 0x116;
    puVar1[0x23] = puVar1[0x23] | 0x800000;
    break;
  default:
    goto switchD_004bb365_caseD_5;
  case 6:
    *puVar1 = 0x117;
    goto LAB_004bb3a0;
  case 8:
    *puVar1 = 0x118;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    goto LAB_004bb65f;
  case 10:
    *puVar1 = 0x120;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    break;
  case 0xc:
    *puVar1 = 0x11b;
    goto LAB_004bb64b;
  case 0xe:
    *puVar1 = 0x128;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    puVar1[0x23] = puVar1[0x23] | 0x100;
    *(undefined2 *)(puVar1 + 0x21) = 0x5203;
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    return uVar3;
  case 0x10:
    *puVar1 = 0x11c;
    goto LAB_004bb64b;
  case 0x12:
    *puVar1 = 0x11e;
    puVar1[0x23] = puVar1[0x23] | 0x800000;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    *(undefined2 *)(puVar1 + 0x21) = 0x5202;
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    return uVar3;
  case 0x14:
    *puVar1 = 0x11f;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    *(undefined2 *)(puVar1 + 0x21) = 0x5201;
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    return uVar3;
  case 0x16:
    *puVar1 = 0x121;
    puVar1[0x23] = puVar1[0x23] | 0x20000100;
    uVar6 = 0x5203;
    goto LAB_004bb3af;
  case 0x18:
    *puVar1 = 0x129;
    puVar1[0x23] = puVar1[0x23] | 0x40000;
    puVar1[0x24] = puVar1[0x24] | 0x4000000;
    *(undefined1 *)((int)puVar1 + 0x11) = 3;
    return uVar3;
  case 0x1a:
    *puVar1 = 300;
    goto LAB_004bb546;
  case 0x1c:
    *puVar1 = 0x119;
    puVar1[0x23] = puVar1[0x23] | 0x20002000;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    return uVar3;
  case 0x1e:
    *puVar1 = 0x11a;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    *(undefined2 *)(puVar1 + 0x21) = 0x5203;
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    return uVar3;
  case 0x20:
    *puVar1 = 0x127;
    break;
  case 0x24:
    *puVar1 = 0x11a;
LAB_004bb3a0:
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    uVar6 = 0x5201;
LAB_004bb3af:
    *(undefined2 *)(puVar1 + 0x21) = uVar6;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    return uVar3;
  case 0x26:
    *puVar1 = 0x122;
    puVar1[0x23] = puVar1[0x23] | 0x20000100;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    *(undefined2 *)(puVar1 + 0x21) = 0x5203;
    return uVar3;
  case 0x28:
    *puVar1 = 0x123;
    puVar1[0x23] = puVar1[0x23] | 0x20000100;
    uVar6 = 0x5203;
    goto LAB_004bb381;
  case 0x2a:
    *puVar1 = 0x124;
    puVar1[0x23] = puVar1[0x23] | 0x20000100;
    uVar6 = 0x5203;
    goto LAB_004bb3af;
  case 0x2c:
    *puVar1 = 0x125;
    puVar1[0x23] = puVar1[0x23] | 0x20000100;
    uVar6 = 0x5203;
    goto LAB_004bb664;
  case 0x2e:
    *puVar1 = 0x126;
LAB_004bb546:
    puVar1[0x23] = puVar1[0x23] | 0x20000100;
    *(undefined2 *)(puVar1 + 0x21) = 0x5203;
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    return uVar3;
  case 0x30:
    *puVar1 = 0x12a;
    puVar1[0x23] = puVar1[0x23] | 0x20000100;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    puVar1[0x23] = puVar1[0x23] | 0x1000000;
    goto LAB_004bb65f;
  case 0x38:
    *puVar1 = 0x11d;
LAB_004bb64b:
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
LAB_004bb65f:
    uVar6 = 0x5201;
LAB_004bb664:
    *(undefined2 *)(puVar1 + 0x21) = uVar6;
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
switchD_004bb365_caseD_5:
    return uVar3;
  }
  uVar6 = 0x5201;
LAB_004bb381:
  *(undefined1 *)((int)puVar1 + 0x11) = 7;
  *(undefined2 *)(puVar1 + 0x21) = uVar6;
  return uVar3;
}

// 004BB720  Em0110::vf1A0  size=219  [class]
undefined4 __thiscall Em0110::vf1A0(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  
  if (*param_2 != 0x119) {
    return 0;
  }
  piVar1 = (int *)FUN_00a7c8a0();
  if (piVar1 != (int *)0x0) {
    puVar4 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d70(puVar4);
    if (iVar2 != 0) {
      iVar2 = FUN_00a8ef10();
      if (iVar2 == 0) {
        iVar2 = FUN_00a8cab0();
        if (iVar2 != 0x11) {
          iVar2 = (**(code **)(*piVar1 + 0x14c))(0x42,param_1[0x13c]);
          if (iVar2 != 0) {
            uVar3 = FUN_00a7c7f0();
            FUN_00a7c960(uVar3);
            param_1[0x41e] = 0x119;
            (**(code **)(*piVar1 + 0x150))(0x42,param_1[0x13c]);
            param_1[0x370] = param_1[0x370] | 4;
            (**(code **)(*param_1 + 0x220))(0x41a00000);
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

// 004BB800  FUN_004bb800  size=40  [between]
void __fastcall FUN_004bb800(int param_1)

{
  if (*(int *)(param_1 + 0x1078) == 0x119) {
    FUN_00a8caf0(0xe0000,0,0,0);
  }
  *(uint *)(param_1 + 0xdc0) = *(uint *)(param_1 + 0xdc0) & 0xfffffffb;
  return;
}

// 004BB830  FUN_004bb830  size=541  [between]
/* WARNING: Type propagation algorithm not settling */

undefined4 __fastcall FUN_004bb830(int param_1)

{
  float fVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined *puVar9;
  undefined4 local_40 [16];
  
  local_40[0] = 0xffffffff;
  _memset(local_40 + 1,0,0x3c);
  bVar3 = false;
  iVar8 = 1;
  if (*(float *)(param_1 + 0xaa0) < 0.43633232) {
    bVar3 = true;
    if ((((*(float *)(param_1 + 0xa90) <= 25.0) && (*(float *)(param_1 + 0xa90) <= 6.25)) &&
        (*(int *)(param_1 + 0x618) != 0x20002)) && (*(int *)(param_1 + 0x10bc) != 0x20002)) {
      local_40[1] = 0x20002;
      iVar8 = 2;
    }
    if (((*(float *)(param_1 + 0xa90) <= 25.0) && (*(float *)(param_1 + 0xa90) <= 6.25)) &&
       ((*(int *)(param_1 + 0x618) != 0x20003 && (*(int *)(param_1 + 0x10bc) != 0x20003)))) {
      local_40[(short)iVar8] = 0x20003;
      iVar8 = iVar8 + 1;
    }
  }
  if (((*(float *)(param_1 + 0xa90) <= 16.0) && (*(int *)(param_1 + 0x618) != 0x20004)) &&
     (*(int *)(param_1 + 0x10bc) != 0x20004)) {
    local_40[(short)iVar8] = 0x20004;
    iVar8 = iVar8 + 1;
  }
  if ((((bVar3) && (*(float *)(param_1 + 0xa90) <= 100.0)) &&
      (fVar1 = *(float *)(param_1 + 0xa90), !NAN(fVar1) && 25.0 < fVar1 != (fVar1 == 25.0))) &&
     ((*(int *)(param_1 + 0x618) != 0x20005 && (*(int *)(param_1 + 0x10bc) != 0x20005)))) {
    local_40[(short)iVar8] = 0x20005;
    iVar8 = iVar8 + 1;
  }
  piVar2 = *(int **)(param_1 + 0xa84);
  if (piVar2 == (int *)0x0) {
LAB_004bb9ae:
    bVar4 = false;
  }
  else {
    puVar9 = &DAT_01be9db8;
    (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
    iVar6 = FUN_00dd6d80(puVar9);
    if ((iVar6 == 0) ||
       ((iVar6 = (**(code **)(*piVar2 + 0x354))(), iVar6 == 0 &&
        (iVar6 = FUN_00a8cab0(), iVar6 != 0x10c)))) goto LAB_004bb9ae;
    bVar4 = true;
  }
  if (((!bVar3) || (iVar6 = FUN_004b9f90(), iVar6 == 0)) || (100.0 < *(float *)(param_1 + 0xa90)))
  goto LAB_004bba30;
  fVar1 = *(float *)(param_1 + 0xa90);
  if (NAN(fVar1) || 25.0 < fVar1 == (fVar1 == 25.0)) {
    if (!bVar4) goto LAB_004bba30;
LAB_004bb9f4:
    if ((*(int *)(param_1 + 0x10bc) != 0x2000a) && (uVar7 = FUN_00dde2d0(0,100), (uVar7 & 3) != 0))
    {
      return 0x2000a;
    }
  }
  else if (bVar4) goto LAB_004bb9f4;
  if ((*(int *)(param_1 + 0x618) != 0x2000a) && (*(int *)(param_1 + 0x10bc) != 0x2000a)) {
    local_40[(short)iVar8] = 0x2000a;
    iVar8 = iVar8 + 1;
  }
LAB_004bba30:
  sVar5 = FUN_00dde2d0(0,iVar8 + -1);
  return local_40[sVar5];
}

// 004BBA50  FUN_004bba50  size=45  [between]
bool FUN_004bba50(uint param_1)

{
  short sVar1;
  int iVar2;
  
  iVar2 = FUN_004b8ad0();
  if (iVar2 != 0) {
    return true;
  }
  sVar1 = FUN_00dde2d0(0,100);
  return ((int)sVar1 & param_1) != 0;
}

// 004BBA90  FUN_004bba90  size=303  [between]
void __fastcall FUN_004bba90(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>_2(2);
  uVar1 = FUN_00a8d2a0();
  puVar2 = (undefined4 *)FUN_009f8b60();
  iVar3 = CollisionCapsule::CollisionCapsule(2,*puVar2,0);
  if (iVar3 != 0) {
    *(undefined4 *)(iVar3 + 0x380) = 0;
    FUN_00d77c50(*(undefined4 *)(param_1 + 0x4f0),0);
    *(undefined4 *)(iVar3 + 0x594) = 0x3f59999a;
    *(undefined4 *)(iVar3 + 0x590) = 0x3f000000;
    FUN_00d771d0(0xb);
    _strncpy_s((char *)(iVar3 + 0x394),0x20,"mist_body",0x1f);
    FUN_00a93a00(iVar3,uVar1);
    FUN_00d7b0f0();
    FUN_00d7b890();
  }
  puVar2 = (undefined4 *)FUN_009f8b60();
  iVar3 = CollisionCapsule::CollisionCapsule(2,*puVar2,0);
  if (iVar3 != 0) {
    *(undefined4 *)(iVar3 + 0x380) = 1;
    FUN_00d77c50(*(undefined4 *)(param_1 + 0x4f0),0);
    *(undefined4 *)(iVar3 + 0x594) = 0x3f59999a;
    *(undefined4 *)(iVar3 + 0x590) = 0x3fb33333;
    FUN_00d771d0(0xb);
    _strncpy_s((char *)(iVar3 + 0x394),0x20,"mist_body2",0x1f);
    uVar1 = FUN_00a8d2a0();
    FUN_00a93a00(iVar3,uVar1);
    FUN_00d7b0f0();
    FUN_00d7b890();
    return;
  }
  return;
}

// 004BBBC0  FUN_004bbbc0  size=98  [between]
void __fastcall FUN_004bbbc0(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  FUN_009f8b10();
  (**(code **)(*param_1 + 0x1f8))(1);
  if ((param_1[0x1d9] != 0) && (*(int *)(param_1[0x1d9] + 0x10c) == 0)) {
    FUN_008e0ae0(1);
  }
  if (param_1[0x404] == 0x20009) {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00a7c8a0();
      if (piVar2 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004bbc1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*piVar2 + 0x20))();
        return;
      }
    }
  }
  return;
}

// 004BBC30  FUN_004bbc30  size=264  [between]
int __thiscall FUN_004bbc30(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  float10 fVar5;
  
  iVar1 = *(int *)(param_2 + 4);
  if (*(int *)(param_1 + 0x4a0) == 1) {
    if ((*(uint *)(param_2 + 0x8c) & 0x200) == 0) {
      return iVar1;
    }
    iVar1 = FUN_00fdbc60();
  }
  else {
    if (*(int *)(param_1 + 0x12a4) != 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0x10b8) == 0) {
      iVar2 = FUN_00a8eea0();
      iVar3 = FUN_00a8eeb0();
      bVar4 = (float)iVar2 / (float)iVar3 < 0.75 |
              (byte)((ushort)((ushort)((float)iVar2 / (float)iVar3 == 0.75) << 0xe) >> 8);
    }
    else if (*(int *)(param_1 + 0x10b8) == 1) {
      fVar5 = (float10)FUN_004b5050();
      bVar4 = fVar5 < (float10)0.5 | (byte)((ushort)((ushort)(fVar5 == (float10)0.5) << 0xe) >> 8);
    }
    else {
      fVar5 = (float10)FUN_004b5050();
      bVar4 = fVar5 < (float10)0.1 | (byte)((ushort)((ushort)(fVar5 == (float10)0.1) << 0xe) >> 8);
    }
    if (((*(uint *)(param_2 + 0x8c) & 0x200) != 0) && (iVar1 = FUN_00fdbc60(), iVar1 < 1)) {
      iVar1 = 1;
    }
    if ((POPCOUNT(bVar4) & 1U) == 0) {
      return iVar1;
    }
    iVar1 = iVar1 / 10;
  }
  if (iVar1 < 1) {
    iVar1 = 1;
  }
  return iVar1;
}

// 004BBD40  FUN_004bbd40  size=110  [between]
undefined4 __fastcall FUN_004bbd40(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  float10 fVar4;
  
  iVar1 = *(int *)(param_1 + 0x618);
  if (((iVar1 != 0xe0004) && (iVar1 != 0xe0005)) && (iVar1 != 0xe0000)) {
    if (*(int *)(param_1 + 0x4a0) == 1) {
      return *(undefined4 *)(param_1 + 0x4e4);
    }
    if (iVar1 != 0x2000b) {
      if (*(int *)(param_1 + 0x10b8) == 0) {
        fVar4 = (float10)FUN_004b5050();
        bVar3 = fVar4 < (float10)0.75 |
                (byte)((ushort)((ushort)(fVar4 == (float10)0.75) << 0xe) >> 8);
      }
      else {
        if (*(int *)(param_1 + 0x10b8) != 1) {
          uVar2 = FUN_004b7fe0();
          return uVar2;
        }
        fVar4 = (float10)FUN_004b5050();
        bVar3 = fVar4 < (float10)0.5 | (byte)((ushort)((ushort)(fVar4 == (float10)0.5) << 0xe) >> 8)
        ;
      }
      if ((POPCOUNT(bVar3) & 1U) == 0) {
        return 0;
      }
    }
  }
  return 1;
}

// 004BBDD0  FUN_004bbdd0  size=306  [between]
undefined4 __thiscall FUN_004bbdd0(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  
  if (*param_2 == 0x4f) {
    iVar1 = FUN_004bbd40();
    if ((((iVar1 == 0) && (iVar1 = FUN_00a81330(), iVar1 != 0)) &&
        (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) && ((*(uint *)(iVar1 + 0x4c0) & 1) != 0)) {
      return 1;
    }
  }
  else {
    uVar2 = FUN_00a8cab0();
    if (((uVar2 & 0xffff0000) == 0x20000) && (iVar1 = FUN_00a8c760(4), iVar1 == 0)) {
      return 0;
    }
    if (((param_1[0x370] & 0x200U) != 0) && (iVar1 = FUN_00a8c760(4), iVar1 == 0)) {
      return 0;
    }
    iVar1 = (**(code **)(*param_1 + 0x1fc))();
    if (iVar1 != 0) {
      iVar1 = FUN_00a8c760(4);
      if (iVar1 == 0) {
        return 0;
      }
      if (param_1[0x431] < param_1[0x432]) {
        return 0;
      }
    }
    if ((((((param_1[0x370] & 0x800000U) == 0) && (*param_2 != 0x56)) &&
         ((param_1[0x370] & 0x4000U) == 0)) &&
        (((iVar1 = FUN_004ba1b0(), iVar1 != 0 && (iVar1 = FUN_00a8e520(), iVar1 == 0)) &&
         ((iVar1 = FUN_004bbd40(), iVar1 == 0 &&
          (((param_1[0x370] & 0x80000000U) == 0 && ((param_2[0x23] & 0x20000U) == 0)))))))) &&
       (((param_2[0x23] & 0x20U) == 0 && (param_1[0x4a9] == 0)))) {
      return 1;
    }
  }
  return 0;
}

// 004BBF10  FUN_004bbf10  size=46  [between]
undefined4 __fastcall FUN_004bbf10(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x10b8);
  uVar2 = 100;
  if (iVar1 == 0) {
    return *(undefined4 *)(param_1 + 0x12d8);
  }
  if (iVar1 == 1) {
    return *(undefined4 *)(param_1 + 0x12dc);
  }
  if (iVar1 == 2) {
    uVar2 = *(undefined4 *)(param_1 + 0x12e0);
  }
  return uVar2;
}

// 004BBF60  FUN_004bbf60  size=32  [between]
undefined4 __fastcall FUN_004bbf60(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8ef10();
  if ((iVar1 != 0) && ((*(byte *)(param_1 + 0xdc0) & 8) != 0)) {
    return 1;
  }
  return 0;
}

// 004BBFA0  FUN_004bbfa0  size=29  [between]
void __fastcall FUN_004bbfa0(int param_1)

{
  *(uint *)(param_1 + 0xdc0) = *(uint *)(param_1 + 0xdc0) & 0x7fffffff;
  *(undefined4 *)(param_1 + 0x11fc) = 0;
  *(undefined4 *)(param_1 + 0x1200) = 0;
  return;
}

// 004BBFF0  FUN_004bbff0  size=48  [between]
float10 __fastcall FUN_004bbff0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10b8);
  if (iVar1 == 0) {
    return (float10)*(float *)(param_1 + 0x12f0);
  }
  if (iVar1 == 1) {
    return (float10)*(float *)(param_1 + 0x12f4);
  }
  if (iVar1 == 2) {
    return (float10)*(float *)(param_1 + 0x12f8);
  }
  return (float10)0.25;
}

// 004BC060  FUN_004bc060  size=110  [between]
void __fastcall FUN_004bc060(undefined4 param_1)

{
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_54 = 0;
  local_3c = 0;
  local_50 = 0;
  local_2c = 0;
  local_10 = 0;
  local_c = 0;
  local_48 = 0xffffffff;
  local_8 = 0;
  local_44 = 0xffffffff;
  local_4 = 0xffffffff;
  local_4c = 0xffffffff;
  local_40 = 0xfffffffe;
  local_38 = 0x20040;
  local_34 = 0x1010000;
  local_30 = 0x1a;
  FUN_00c5e350(param_1,&local_54,&local_30);
  return;
}

// 004BC190  Em0110::vf14C  size=165  [class]
bool Em0110::vf14C(undefined4 param_1)

{
  int iVar1;
  
  switch(param_1) {
  case 0x43:
    iVar1 = FUN_00a8cab0();
    if (iVar1 == 0xe0000) {
      iVar1 = FUN_00a8cac0();
      return iVar1 == 1;
    }
  case 0x47:
  case 0x48:
    iVar1 = FUN_00a8cab0();
    if (iVar1 != 0xe0003) {
switchD_004bc1a4_caseD_44:
      return false;
    }
    break;
  default:
    goto switchD_004bc1a4_caseD_44;
  case 0x45:
    iVar1 = FUN_00a81330();
    if ((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
      iVar1 = FUN_00a81330();
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = FUN_00a7c8a0();
      }
      if (((*(byte *)(iVar1 + 0x4c0) & 1) != 0) &&
         (iVar1 = FUN_004ba140(), *(int *)(iVar1 + 0x674) == 0)) {
        return false;
      }
    }
    break;
  case 0x49:
    break;
  }
  return true;
}

// 004BC260  Em0110::vf158  size=179  [class]
uint __thiscall Em0110::vf158(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0x42) {
    iVar1 = FUN_00a8cab0();
    if (iVar1 != 0xe0000) {
      return 1;
    }
    return 0;
  }
  if (param_2 != 0x44) {
    if (param_2 != 0x56) {
      return 0;
    }
    return *(uint *)(param_1 + 0xdc0) >> 0x14 & 1;
  }
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
    iVar1 = FUN_00a81330();
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_00a7c8a0();
    }
    if ((*(byte *)(iVar1 + 0x4c0) & 1) != 0) goto LAB_004bc2dc;
  }
  if (*(float *)(param_1 + 0x11e4) <= 0.0) {
    return 1;
  }
LAB_004bc2dc:
  iVar1 = FUN_004b8a90();
  if (iVar1 == 0) {
    return 0;
  }
  return *(ushort *)(param_1 + 0xdc2) & 1;
}

// 004BC370  FUN_004bc370  size=859  [callgraph]
void __fastcall FUN_004bc370(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  float10 fVar7;
  undefined *puVar8;
  
  iVar2 = FUN_00a81330();
  piVar6 = (int *)0x0;
  if ((iVar2 != 0) && (piVar3 = (int *)FUN_00a7c8a0(), piVar3 != (int *)0x0)) {
    puVar8 = &DAT_01b34e80;
    (**(code **)(*piVar3 + 4))(&DAT_01b34e80);
    iVar4 = FUN_00dd6d70(puVar8);
    piVar6 = (int *)(-(uint)(iVar4 != 0) & (uint)piVar3);
  }
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4520(0x105,iVar2,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    fVar7 = (float10)FUN_00a8ec30(piVar6 + 0x10);
    param_1[0x25] = (int)(float)fVar7;
    if (piVar6 != (int *)0x0) {
      param_1[0x15] = piVar6[0x11];
    }
    FUN_00bee830();
    DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
    (**(code **)(*param_1 + 0x318))();
    if ((piVar6 == (int *)0x0) || (piVar6[0x1d5] == 0)) {
      iVar4 = 0x14;
    }
    else {
      iVar4 = piVar6[0x4b3];
    }
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0;
    param_1[0x250] = iVar4;
    param_1[0x188] = 0;
    param_1[0x189] = 0;
    break;
  case 1:
    break;
  case 2:
    goto LAB_004bc539;
  case 3:
    (**(code **)(*param_1 + 0x220))(0x40a00000);
    FUN_00db3e80(0,0,&DAT_01bea1d0);
    FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e22f10(0);
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      (**(code **)(*param_1 + 0x314))();
      FUN_00ba6810(1,1);
      pcVar1 = *(code **)(*param_1 + 0x388);
      param_1[0x2dd] = 0;
      (*pcVar1)(0);
      return;
    }
  default:
    goto switchD_004bc3c8_default;
  }
  FUN_00cbc8f0(0x4000,1);
  iVar4 = FUN_00b7a7c0();
  param_1[0x250] = param_1[0x250] - iVar4;
  if (param_1[0x250] < 1) {
    param_1[0x187] = 3;
    if ((piVar6 != (int *)0x0) &&
       (iVar4 = (**(code **)(*piVar6 + 0x14c))(0x43,param_1[0x13c]), iVar4 != 0)) {
      (**(code **)(*piVar6 + 0x150))(0x43,param_1[0x13c]);
      FUN_00aa4520(0x113,iVar2,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    }
    FUN_00b94790(0x3f800000,0x3f800000);
    return;
  }
  iVar2 = FUN_00a8c760(0x16);
  if (iVar2 != 0) {
    param_1[0x187] = param_1[0x187] + 1;
  }
LAB_004bc539:
  (**(code **)(*param_1 + 0x220))(0x40a00000);
  iVar2 = FUN_00a8c760(0xb);
  if (iVar2 != 0) {
    uVar5 = 10;
    if ((piVar6 != (int *)0x0) && (piVar6[0x1d5] != 0)) {
      uVar5 = FUN_00ac84d0(0x14);
    }
    (**(code **)(*param_1 + 0x30c))(uVar5,0);
  }
  FUN_00b94790(0x3f800000,0x3f800000);
  FUN_00db3e80(0,0,&DAT_01bea1d0);
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e22f10(0);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x314))();
    FUN_00ba6810(1,1);
    iVar2 = FUN_00a8eea0();
    if (0 < iVar2) {
      FUN_00a8caf0(0xcd,0,0,0);
      return;
    }
    FUN_00a8caf0(0xdb,0,0,0);
    return;
  }
switchD_004bc3c8_default:
  return;
}

// 004BC6E0  FUN_004bc6e0  size=1735  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004bc6e0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  int local_68;
  float local_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  undefined1 local_50 [76];
  
  iVar1 = FUN_00a81330();
  iVar3 = 0;
  local_68 = iVar1;
  if (iVar1 != 0) {
    iVar3 = FUN_00a7c8a0();
  }
  switch(param_1[0x187]) {
  case 0:
    iVar2 = FUN_004b7e20(iVar3);
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 0x1338) = 1;
      FUN_00cad200(1);
    }
    FUN_00bee830();
    DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
    FUN_00aa4520(0x10a,iVar1,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    FUN_00a92f90();
    iVar1 = FUN_00e26e90();
    if (iVar1 == 0) {
      fVar4 = (float10)-1.0;
    }
    else {
      fVar4 = (float10)FUN_00e36970(0);
    }
    local_64 = (float)fVar4;
    FUN_00a92f90();
    iVar1 = FUN_00e26e90();
    if (iVar1 != 0) {
      Animation::Motion::Unit::setCurrentTime(0,local_64);
    }
    FUN_008e3c10();
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x300] = 0;
    param_1[0x250] = 0;
  case 1:
    FUN_00db3e80(0,0,&DAT_01bea1d0);
    FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e22f10(0);
    _DAT_01bea860 = 1;
    iVar1 = FUN_00a12210(0xf00);
    if (iVar1 != 0) {
      param_1[0x14] = *(int *)(iVar1 + 0x40);
      param_1[0x15] = *(int *)(iVar1 + 0x44);
      param_1[0x16] = *(int *)(iVar1 + 0x48);
      param_1[0x17] = *(int *)(iVar1 + 0x4c);
      fVar4 = (float10)FUN_00ddba30(*(float *)(iVar3 + 0x94) + *(float *)(iVar1 + 0x94));
      param_1[0x25] = (int)(float)fVar4;
    }
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_00aa4520(0x10b,local_68,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
      FUN_00db3e80(0,0,&DAT_01bea1d0);
      FUN_00a92f90();
      FUN_00e26e90();
      FUN_00e22f10(0);
      _DAT_01bea860 = 1;
LAB_004bc915:
      FUN_00b94790(0x3f800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    FUN_00db3e80(0,0,&DAT_01bea1d0);
    FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e22f10(0);
    _DAT_01bea860 = 1;
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar1 = FUN_00a12210(0xf00);
    if (iVar1 != 0) {
      D3DXMatrixRotationY(local_50,*(undefined4 *)(iVar3 + 0x94));
      D3DXVec3TransformNormal(&local_68,iVar1 + 0x50,&fStack_58);
      param_1[0x14] = (int)(*(float *)(iVar3 + 0x50) + fStack_60);
      param_1[0x15] = (int)(*(float *)(iVar3 + 0x54) + fStack_5c);
      param_1[0x16] = (int)(*(float *)(iVar3 + 0x58) + fStack_58);
      param_1[0x17] = (int)(*(float *)(iVar3 + 0x5c) + fStack_54);
      fVar4 = (float10)FUN_00ddba30(*(float *)(iVar1 + 0x94) + *(float *)(iVar3 + 0x94));
      param_1[0x25] = (int)(float)fVar4;
    }
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_00a33520(0,0x160,2);
      FUN_00a33520(0,0x160,3);
      FUN_00a33520(1,0x160,7);
      FUN_00aa4520(0x10c,local_68,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
      FUN_00db3e80(0,0,&DAT_01bea1d0);
      FUN_00a92f90();
      FUN_00e26e90();
      FUN_00e22f10(0);
      _DAT_01bea860 = 1;
      FUN_00b94790(0x3f800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 3:
    FUN_00db3e80(0,0,&DAT_01bea1d0);
    FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e22f10(0);
    _DAT_01bea860 = 1;
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar1 = FUN_00a12210(0xf00);
    if (iVar1 != 0) {
      D3DXMatrixRotationY(local_50,*(undefined4 *)(iVar3 + 0x94));
      D3DXVec3TransformNormal(&local_68,iVar1 + 0x50,&fStack_58);
      param_1[0x14] = (int)(*(float *)(iVar3 + 0x50) + fStack_60);
      param_1[0x15] = (int)(*(float *)(iVar3 + 0x54) + fStack_5c);
      param_1[0x16] = (int)(*(float *)(iVar3 + 0x58) + fStack_58);
      param_1[0x17] = (int)(*(float *)(iVar3 + 0x5c) + fStack_54);
      fVar4 = (float10)FUN_00ddba30(*(float *)(iVar1 + 0x94) + *(float *)(iVar3 + 0x94));
      param_1[0x25] = (int)(float)fVar4;
    }
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 == 0) {
      return;
    }
    FUN_00a33520(0,0x160,7);
    FUN_00a33520(1,0x160,3);
    FUN_00aa4520(0x10d,local_68,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    FUN_00da4ff0();
    FUN_00db3e80(0,0,&DAT_01bea1d0);
    _DAT_01bea860 = 1;
    FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e22f10(0);
    goto LAB_004bc915;
  case 4:
    FUN_00db3e80(0,0,&DAT_01bea1d0);
    FUN_00dc1270(0,0);
    FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e22f10(0);
    _DAT_01bea860 = 1;
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar1 = FUN_00a12210(0xf00);
    if (iVar1 != 0) {
      D3DXMatrixRotationY(local_50,*(undefined4 *)(iVar3 + 0x94));
      D3DXVec3TransformNormal(&local_68,iVar1 + 0x50,&fStack_58);
      param_1[0x14] = (int)(*(float *)(iVar3 + 0x50) + fStack_60);
      param_1[0x15] = (int)(*(float *)(iVar3 + 0x54) + fStack_5c);
      param_1[0x16] = (int)(*(float *)(iVar3 + 0x58) + fStack_58);
      param_1[0x17] = (int)(*(float *)(iVar3 + 0x5c) + fStack_54);
      fVar4 = (float10)FUN_00ddba30(*(float *)(iVar1 + 0x94) + *(float *)(iVar3 + 0x94));
      param_1[0x25] = (int)(float)fVar4;
    }
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      iVar1 = FUN_004b7e20(iVar3);
      if (iVar1 != 0) {
        FUN_004b4f60(0);
      }
      FUN_008e6d00();
      param_1[0x2dd] = 0;
      FUN_00ba6810(1,0);
      (**(code **)(*param_1 + 0x388))(0);
    }
  }
  return;
}

// 004BDF30  FUN_004bdf30  size=56  [callgraph]
float10 __fastcall FUN_004bdf30(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if ((iVar1 != 0) && ((*(uint *)(iVar1 + 0x4c0) & 1) != 0)) {
      return (float10)*(float *)(param_1 + 0x1220);
    }
  }
  return (float10)*(float *)(param_1 + 0x1224);
}

// 004BDF70  FUN_004bdf70  size=108  [callgraph]
void __thiscall FUN_004bdf70(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    piVar3 = *(int **)(iVar1 + 4);
    if (piVar3 != piVar3 + *(int *)(iVar1 + 8) * 0x14) {
      piVar2 = piVar3 + *(int *)(iVar1 + 8) * 0x14;
      do {
        if (*piVar3 == param_2) goto LAB_004bdfb7;
        piVar3 = piVar3 + 0x14;
      } while (piVar3 != piVar2);
    }
    piVar3 = (int *)(*(int *)(iVar1 + 8) * 0x50 + *(int *)(iVar1 + 4));
LAB_004bdfb7:
    if (piVar3 != (int *)(*(int *)(iVar1 + 8) * 0x50 + *(int *)(iVar1 + 4))) {
      FUN_004b53d0();
      FUN_004bde80(piVar3);
    }
  }
  return;
}

// 004BDFE0  Em0110::vf3C  size=265  [class]
void __thiscall Em0110::vf3C(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x764) != 0) {
    FUN_008e26e0(param_2);
  }
  if (*(int *)(param_1 + 0x7b0) != 0) {
    (**(code **)(**(int **)(param_1 + 0x7b0) + 0x114))(param_2);
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      iVar1 = FUN_00a81330();
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = FUN_00a7c8a0();
      }
      if (*(int *)(iVar1 + 0x7b0) != 0) {
        iVar1 = FUN_00a81330();
        if (iVar1 == 0) {
          iVar1 = 0;
        }
        else {
          iVar1 = FUN_00a7c8a0();
        }
        (**(code **)(**(int **)(iVar1 + 0x7b0) + 0x114))(param_2);
      }
    }
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      iVar1 = FUN_00a81330();
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = FUN_00a7c8a0();
      }
      if (*(int *)(iVar1 + 0x7b0) != 0) {
        iVar1 = FUN_00a81330();
        if (iVar1 == 0) {
          iVar1 = 0;
        }
        else {
          iVar1 = FUN_00a7c8a0();
        }
        (**(code **)(**(int **)(iVar1 + 0x7b0) + 0x114))(param_2);
      }
    }
  }
  return;
}

// 004BE0F0  FUN_004be0f0  size=104  [between]
int FUN_004be0f0(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00a81330();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_00a7c8a0();
  if (iVar1 != 0) {
    iVar1 = FUN_004b72d0();
    iVar2 = FUN_00a81330();
    if (iVar2 != 0) {
      iVar1 = iVar1 + 7;
    }
    iVar2 = FUN_00a81330();
    if (((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) &&
       ((*(byte *)(iVar2 + 0x4c0) & 1) != 0)) {
      return iVar1;
    }
    return iVar1 + -7;
  }
  return 0;
}

// 004BE160  FUN_004be160  size=107  [between]
undefined4 * __thiscall FUN_004be160(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if (*(int *)(param_1 + 0x10b8) == 0) {
    uVar2 = *(undefined4 *)(param_1 + 0xb9c);
    uVar3 = 1;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0xb9c);
    uVar3 = 2;
  }
  iVar1 = FUN_00c19f60(uVar2,uVar3);
  if (iVar1 != 0) {
    FUN_00c9fdd0(&local_c);
    *param_2 = local_c;
    param_2[1] = local_8;
    param_2[2] = local_4;
    param_2[3] = 0x3f800000;
  }
  return param_2;
}

// 004BE1D0  FUN_004be1d0  size=467  [between]
void __thiscall FUN_004be1d0(int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  if (param_2 == 0) {
    if (0 < *(short *)(param_1 + 0x324)) {
      iVar5 = 0;
      do {
        iVar2 = *(int *)(param_1 + 800);
        iVar3 = *(int *)(*(int *)(iVar2 + 0x60 + iVar5) + 0x40);
        if ((iVar3 != 0) && (iVar3 = FUN_00fdbbd0(iVar3,&DAT_0163eeb8), iVar3 != 0)) {
          puVar1 = (uint *)(iVar2 + 0x38 + iVar5);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 0x70;
      } while (iVar4 < *(short *)(param_1 + 0x324));
    }
    iVar4 = FUN_00a81330();
    iVar5 = 0;
    if (((iVar4 != 0) && (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) &&
       (param_2 = 0, 0 < *(short *)(iVar4 + 0x324))) {
      do {
        iVar2 = *(int *)(iVar4 + 800);
        iVar3 = *(int *)(*(int *)(iVar2 + 0x60 + iVar5) + 0x40);
        if ((iVar3 != 0) && (iVar3 = FUN_00fdbbd0(iVar3,&DAT_0163eeb8), iVar3 != 0)) {
          puVar1 = (uint *)(iVar2 + 0x38 + iVar5);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
        param_2 = param_2 + 1;
        iVar5 = iVar5 + 0x70;
      } while (param_2 < *(short *)(iVar4 + 0x324));
    }
    iVar4 = FUN_00a81330();
    if ((iVar4 != 0) && (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) {
      FUN_004b71e0();
    }
  }
  else {
    if (0 < *(short *)(param_1 + 0x324)) {
      iVar5 = 0;
      do {
        iVar2 = *(int *)(param_1 + 800);
        iVar3 = *(int *)(*(int *)(iVar2 + 0x60 + iVar5) + 0x40);
        if ((iVar3 != 0) && (iVar3 = FUN_00fdbbd0(iVar3,&DAT_0163eeb8), iVar3 != 0)) {
          puVar1 = (uint *)(iVar2 + 0x38 + iVar5);
          *puVar1 = *puVar1 | 1;
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 0x70;
      } while (iVar4 < *(short *)(param_1 + 0x324));
    }
    iVar4 = FUN_00a81330();
    iVar5 = 0;
    if (((iVar4 != 0) && (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) &&
       (param_2 = 0, 0 < *(short *)(iVar4 + 0x324))) {
      do {
        iVar2 = *(int *)(iVar4 + 800);
        iVar3 = *(int *)(*(int *)(iVar2 + 0x60 + iVar5) + 0x40);
        if ((iVar3 != 0) && (iVar3 = FUN_00fdbbd0(iVar3,&DAT_0163eeb8), iVar3 != 0)) {
          puVar1 = (uint *)(iVar2 + 0x38 + iVar5);
          *puVar1 = *puVar1 | 1;
        }
        param_2 = param_2 + 1;
        iVar5 = iVar5 + 0x70;
      } while (param_2 < *(short *)(iVar4 + 0x324));
    }
    iVar4 = FUN_00a81330();
    if ((iVar4 != 0) && (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) {
      FUN_004b7110();
      return;
    }
  }
  return;
}

// 004BE3C0  FUN_004be3c0  size=483  [between]
void __fastcall FUN_004be3c0(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  int *piVar6;
  char *pcVar7;
  bool bVar8;
  undefined4 uVar9;
  undefined *puVar10;
  undefined1 local_20 [28];
  
  uVar9 = 0xf0064;
  *(undefined4 *)(param_1 + 0x10b8) = 1;
  uVar2 = FUN_00e03ea0("pipestage",0xf0064);
  iVar3 = FUN_00a18d70(uVar2,uVar9);
  if (iVar3 != 0) {
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
    iVar3 = FUN_00a7c8a0();
    if (iVar3 != 0) {
      *(undefined4 *)(param_1 + 0x1140) = *(undefined4 *)(iVar3 + 0x40);
      *(undefined4 *)(param_1 + 0x1144) = *(undefined4 *)(iVar3 + 0x44);
      *(undefined4 *)(param_1 + 0x1148) = *(undefined4 *)(iVar3 + 0x48);
      *(undefined4 *)(param_1 + 0x114c) = *(undefined4 *)(iVar3 + 0x4c);
      puVar4 = (undefined4 *)FUN_00a92640(local_20);
      *(undefined4 *)(param_1 + 0x1150) = *puVar4;
      *(undefined4 *)(param_1 + 0x1154) = puVar4[1];
      *(undefined4 *)(param_1 + 0x1158) = puVar4[2];
      *(undefined4 *)(param_1 + 0x115c) = puVar4[3];
      *(uint *)(param_1 + 0xdc0) = *(uint *)(param_1 + 0xdc0) | 0x8000000;
    }
  }
  pcVar7 = "mistral02";
  *(undefined4 *)(param_1 + 0x10d0) = 0x43960000;
  pbVar5 = DAT_018b925c;
  if (DAT_018b9174 != 0x20a) {
    pcVar7 = "P170_MISTRAL02";
  }
  do {
    bVar1 = *pbVar5;
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_004be4c0:
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      goto LAB_004be4c5;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_004be4c0;
    pcVar7 = pcVar7 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_004be4c5:
  if (iVar3 != 0) {
    pcVar7 = "mistral02";
    if (DAT_018b9174 != 0x20a) {
      pcVar7 = "P170_MISTRAL02";
    }
    FUN_00d5ea40(pcVar7,1,0);
  }
  if (*(int **)(param_1 + 0xa84) == (int *)0x0) {
LAB_004be50d:
    piVar6 = (int *)FUN_00ac8120();
    if (piVar6 == (int *)0x0) goto LAB_004be548;
    puVar10 = &DAT_01be9db8;
    (**(code **)(*piVar6 + 4))(&DAT_01be9db8);
    iVar3 = FUN_00dd6d80(puVar10);
    if (iVar3 == 0) goto LAB_004be548;
  }
  else {
    puVar10 = &DAT_01be9db8;
    (**(code **)(**(int **)(param_1 + 0xa84) + 4))(&DAT_01be9db8);
    iVar3 = FUN_00dd6d80(puVar10);
    if (iVar3 == 0) goto LAB_004be50d;
  }
  FUN_00b7abc0(param_1 + 0x1140,param_1 + 0x1150);
LAB_004be548:
  iVar3 = *(int *)(param_1 + 0x10b8);
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0x1064) = *(undefined4 *)(param_1 + 0x12e4);
    return;
  }
  if (iVar3 != 1) {
    if (iVar3 != 2) {
      *(undefined4 *)(param_1 + 0x1064) = 1;
      return;
    }
    *(undefined4 *)(param_1 + 0x1064) = *(undefined4 *)(param_1 + 0x12ec);
    return;
  }
  *(undefined4 *)(param_1 + 0x1064) = *(undefined4 *)(param_1 + 0x12e8);
  return;
}

// 004BE5B0  FUN_004be5b0  size=747  [between]
void __fastcall FUN_004be5b0(int param_1)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  int iVar10;
  bool bVar11;
  undefined4 uVar12;
  int local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  undefined4 local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  *(undefined4 *)(param_1 + 0x10b8) = 2;
  pcVar9 = "mistral03";
  pbVar4 = DAT_018b925c;
  if (DAT_018b9174 != 0x20a) {
    pcVar9 = "P170_MISTRAL03";
  }
  do {
    bVar2 = *pbVar4;
    bVar11 = bVar2 < (byte)*pcVar9;
    if (bVar2 != *pcVar9) {
LAB_004be610:
      iVar5 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
      goto LAB_004be615;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar4[1];
    bVar11 = bVar2 < (byte)pcVar9[1];
    if (bVar2 != pcVar9[1]) goto LAB_004be610;
    pcVar9 = pcVar9 + 2;
    pbVar4 = pbVar4 + 2;
  } while (bVar2 != 0);
  iVar5 = 0;
LAB_004be615:
  iVar10 = 0;
  if (iVar5 != 0) {
    pcVar9 = "mistral03";
    if (DAT_018b9174 != 0x20a) {
      pcVar9 = "P170_MISTRAL03";
    }
    FUN_00d5ea40(pcVar9,1,0);
  }
  uVar12 = 0xd0450;
  uVar6 = FUN_00e03ea0("breaktank",0xd0450);
  iVar5 = FUN_00a18d70(uVar6,uVar12);
  if (iVar5 != 0) {
    uVar6 = FUN_00a7c7f0();
    FUN_00a7c960(uVar6);
    iVar5 = FUN_00a7c8a0();
    if (iVar5 != 0) {
      local_40 = 0;
      if (0 < *(short *)(iVar5 + 0x324)) {
        do {
          iVar3 = *(int *)(iVar5 + 800);
          iVar7 = *(int *)(*(int *)(iVar3 + 0x60 + iVar10) + 0x40);
          if ((iVar7 != 0) && (iVar7 = FUN_00fdbbd0(iVar7,"_hide"), iVar7 != 0)) {
            puVar1 = (uint *)(iVar3 + 0x38 + iVar10);
            *puVar1 = *puVar1 | 1;
          }
          local_40 = local_40 + 1;
          iVar10 = iVar10 + 0x70;
        } while (local_40 < *(short *)(iVar5 + 0x324));
      }
      iVar10 = 0;
      local_40 = 0;
      if (0 < *(short *)(iVar5 + 0x324)) {
        do {
          iVar3 = *(int *)(iVar5 + 800);
          iVar7 = *(int *)(*(int *)(iVar3 + 0x60 + iVar10) + 0x40);
          if ((iVar7 != 0) && (iVar7 = FUN_00fdbbd0(iVar7,"_appear"), iVar7 != 0)) {
            puVar1 = (uint *)(iVar3 + 0x38 + iVar10);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          local_40 = local_40 + 1;
          iVar10 = iVar10 + 0x70;
        } while (local_40 < *(short *)(iVar5 + 0x324));
      }
      iVar10 = 0;
      local_40 = 0;
      if (0 < *(short *)(iVar5 + 0x324)) {
        do {
          iVar3 = *(int *)(iVar5 + 800);
          iVar7 = *(int *)(*(int *)(iVar3 + 0x60 + iVar10) + 0x40);
          if ((iVar7 != 0) && (iVar7 = FUN_00fdbbd0(iVar7,"_break"), iVar7 != 0)) {
            puVar1 = (uint *)(iVar3 + 0x38 + iVar10);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          local_40 = local_40 + 1;
          iVar10 = iVar10 + 0x70;
        } while (local_40 < *(short *)(iVar5 + 0x324));
      }
    }
  }
  iVar5 = FUN_00c19f60(*(undefined4 *)(param_1 + 0xb9c),2);
  if (iVar5 != 0) {
    FUN_00c9fdd0(&local_3c);
    local_20 = local_3c;
    local_18 = local_34;
    local_14 = 0x3f800000;
    local_38 = local_38 + 0.5;
    local_30 = local_3c - 10.0;
    local_28 = local_34;
    local_24 = 0x40000000;
    local_2c = local_38;
    local_1c = local_38;
    iVar5 = FUN_0090dc50(param_1 + 0x10e0,param_1 + 0x10f0,&local_40,&local_20,&local_30,0x1e,0);
    if ((iVar5 != 0) && (local_40 != 0)) {
      uVar8 = FUN_009184c0(local_40);
      *(uint *)(param_1 + 0x1100) = uVar8 >> 0x10;
    }
  }
  iVar5 = *(int *)(param_1 + 0x10b8);
  if (iVar5 == 0) {
    *(undefined4 *)(param_1 + 0x1064) = *(undefined4 *)(param_1 + 0x12e4);
    return;
  }
  if (iVar5 == 1) {
    *(undefined4 *)(param_1 + 0x1064) = *(undefined4 *)(param_1 + 0x12e8);
    return;
  }
  if (iVar5 != 2) {
    *(undefined4 *)(param_1 + 0x1064) = 1;
    return;
  }
  *(undefined4 *)(param_1 + 0x1064) = *(undefined4 *)(param_1 + 0x12ec);
  return;
}

// 004BE8C0  FUN_004be8c0  size=186  [between]
void __thiscall FUN_004be8c0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  float10 fVar2;
  
  FUN_00ac80a0(param_2,param_3);
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
    if ((*(byte *)(param_1 + 0xdc0) & 0x10) == 0) {
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
        Animation::Motion::Unit::setCurrentTimeSlide(0,(float)fVar2);
      }
    }
    FUN_00ac80a0(param_2,param_3);
  }
  return;
}

// 004BE980  FUN_004be980  size=44  [between]
undefined4 FUN_004be980(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      FUN_00aa3f60(param_1);
    }
  }
  return 0xffffffff;
}

// 004BE9B0  FUN_004be9b0  size=90  [between]
undefined4
FUN_004be9b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      FUN_00aa4080(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    }
  }
  return 0xffffffff;
}

// 004BEAA0  FUN_004beaa0  size=696  [between]
void __fastcall FUN_004beaa0(int param_1)

{
  int iVar1;
  int *piVar2;
  float10 fVar3;
  undefined4 uVar4;
  float fVar5;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      iVar1 = FUN_00a92f90();
      if (iVar1 != 0) {
        iVar1 = FUN_00a92f90();
        if ((*(byte *)(iVar1 + 0x94) & 1) != 0) {
          if ((*(byte *)(param_1 + 0xdc0) & 0x20) == 0) {
            uVar4 = 0;
            FUN_00a92f90(0);
            fVar3 = (float10)FUN_00407b40(uVar4);
            FUN_00a92f90();
            iVar1 = FUN_00e26e90();
            if (iVar1 != 0) {
              Animation::Motion::Unit::setCurrentTime(0,(float)fVar3);
            }
          }
          (**(code **)(*piVar2 + 100))();
        }
      }
    }
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00a7c8a0();
    if (piVar2 != (int *)0x0) {
      iVar1 = FUN_00a92f90();
      if (iVar1 != 0) {
        iVar1 = FUN_00a92f90();
        if ((*(byte *)(iVar1 + 0x94) & 1) != 0) {
          if ((*(byte *)(param_1 + 0xdc0) & 0x20) == 0) {
            uVar4 = 0;
            FUN_00a92f90(0);
            fVar3 = (float10)FUN_00407b40(uVar4);
            FUN_00a92f90();
            iVar1 = FUN_00e26e90();
            if (iVar1 != 0) {
              Animation::Motion::Unit::setCurrentTime(0,(float)fVar3);
            }
          }
          (**(code **)(*piVar2 + 100))();
        }
      }
    }
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      FUN_00a7c8a0();
      iVar1 = FUN_00a92f90();
      if (iVar1 != 0) {
        FUN_00a7c8a0();
        iVar1 = FUN_00a92f90();
        if ((*(byte *)(iVar1 + 0x94) & 1) != 0) {
          if ((*(byte *)(param_1 + 0xdc0) & 0x20) == 0) {
            uVar4 = 0;
            FUN_00a92f90(0);
            fVar3 = (float10)FUN_00407b40(uVar4);
            fVar5 = (float)fVar3;
            uVar4 = 0;
            FUN_00a7c8a0(0,fVar5);
            FUN_00a92f90();
            FUN_00407b10(uVar4,fVar5);
          }
          piVar2 = (int *)FUN_00a7c8a0();
          (**(code **)(*piVar2 + 100))();
        }
      }
    }
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      FUN_00a7c8a0();
      iVar1 = FUN_00a92f90();
      if (iVar1 != 0) {
        FUN_00a7c8a0();
        iVar1 = FUN_00a92f90();
        if ((*(byte *)(iVar1 + 0x94) & 1) != 0) {
          if ((*(byte *)(param_1 + 0xdc0) & 0x20) == 0) {
            uVar4 = 0;
            FUN_00a92f90(0);
            fVar3 = (float10)FUN_00407b40(uVar4);
            fVar5 = (float)fVar3;
            uVar4 = 0;
            FUN_00a7c8a0(0,fVar5);
            FUN_00a92f90();
            FUN_00407b10(uVar4,fVar5);
          }
          piVar2 = (int *)FUN_00a7c8a0();
          (**(code **)(*piVar2 + 100))();
        }
      }
    }
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      FUN_00a7c8a0();
      iVar1 = FUN_00a92f90();
      if (iVar1 != 0) {
        FUN_00a7c8a0();
        iVar1 = FUN_00a92f90();
        if ((*(byte *)(iVar1 + 0x94) & 1) != 0) {
          if ((*(byte *)(param_1 + 0xdc0) & 0x20) == 0) {
            uVar4 = 0;
            FUN_00a92f90(0);
            fVar3 = (float10)FUN_00407b40(uVar4);
            fVar5 = (float)fVar3;
            uVar4 = 0;
            FUN_00a7c8a0(0,fVar5);
            FUN_00a92f90();
            FUN_00407b10(uVar4,fVar5);
          }
          piVar2 = (int *)FUN_00a7c8a0();
                    /* WARNING: Could not recover jumptable at 0x004bed50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*piVar2 + 100))();
          return;
        }
      }
    }
  }
  return;
}

// 004BED60  FUN_004bed60  size=44  [between]
undefined4 FUN_004bed60(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      FUN_00aa3f60(param_1);
    }
  }
  return 0xffffffff;
}

// 004BED90  FUN_004bed90  size=90  [between]
undefined4
FUN_004bed90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      FUN_00aa4080(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    }
  }
  return 0xffffffff;
}

// 004BEE20  FUN_004bee20  size=90  [between]
undefined4
FUN_004bee20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      FUN_00aa4120(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    }
  }
  return 0xffffffff;
}

// 004BEEA0  FUN_004beea0  size=469  [between]
void __thiscall FUN_004beea0(int *param_1,uint param_2)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = FUN_00a8cab0();
  param_1[0x404] = iVar2;
  FUN_00a8caf0(param_2,0,0,0);
  if (param_1[0x4d3] != 0) {
    param_1[0x4d3] = 0;
    DAT_01bea094 = DAT_01bea094 & 0xbfffffff;
    DAT_01bea090 = DAT_01bea090 & 0xff7f3bff;
  }
  param_1[0x405] = -1;
  if ((param_1[0x370] & 0x40000000U) != 0) {
    FUN_008e5c50(7);
    param_1[0x370] = param_1[0x370] & 0xbfffffff;
  }
  if ((param_1[0x494] != 0) && (param_1[0x494] = 0, param_1[0x1d9] != 0)) {
    FUN_008e0d30(param_1 + 0x490);
  }
  uVar3 = FUN_00a8cab0();
  if ((uVar3 & 0xffff0000) == 0x20000) {
    param_1[0x42f] = param_2;
    param_1[0x435] = 0;
  }
  if ((param_2 & 0xffff0000) != 0x60000) {
    if ((param_1[0x404] & 0xffff0000U) == 0x60000) {
      (**(code **)(*param_1 + 0x314))();
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
    }
    param_1[0x370] = param_1[0x370] & 0xff7fffff;
  }
  if ((param_1[0x404] == 0xe0007) || (param_1[0x404] == 0xe0009)) {
    (**(code **)(*param_1 + 0x314))();
    if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
      *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
    }
  }
  if ((param_2 & 0xffff0000) != 0x30000) {
    pcVar1 = *(code **)(*param_1 + 0x1f8);
    param_1[0x416] = 0;
    (*pcVar1)(0);
  }
  param_1[0x370] = param_1[0x370] & 0xffff8dec;
  if ((param_1[0x370] & 0x200000U) != 0) {
    FUN_00a8c9b0(0,0x10,0x3f800000,0);
    param_1[0x370] = param_1[0x370] & 0xffdfffff;
  }
  if (param_1[0x404] == 0x40003) {
    iVar2 = FUN_00a81330();
    if (iVar2 != 0) {
      iVar2 = FUN_00a7c8a0();
      if (iVar2 != 0) {
        iVar2 = FUN_00a93610(999);
        if (iVar2 != 0) {
          FUN_00d7acc0();
        }
      }
    }
  }
  return;
}

// 004BF080  Em0110::vf34C  size=288  [class]
void __fastcall Em0110::vf34C(int *param_1)

{
  int iVar1;
  int iVar2;
  
  param_1[0x4a9] = 0;
  param_1[0x370] = param_1[0x370] & 0xfffff7ff;
  (**(code **)(*param_1 + 0x1d4))(0);
  (**(code **)(*param_1 + 0x314))();
  if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
    *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
  }
  if (param_1[0x476] != -1) {
    param_1[0x476] = -1;
    iVar1 = FUN_00a92f90();
    iVar2 = FUN_00e26e90();
    if (iVar2 != 0) {
      *(uint *)(iVar1 + 0x280) = *(uint *)(iVar1 + 0x280) | 1;
    }
    iVar1 = FUN_00a92f90();
    iVar2 = FUN_00e26e90();
    if (iVar2 != 0) {
      *(uint *)(iVar1 + 0x280) = *(uint *)(iVar1 + 0x280) | 2;
    }
  }
  param_1[0x431] = 0;
  if (-1 < param_1[0x370]) {
    if ((param_1[0x370] & 0x800000U) == 0) {
      if (param_1[0x42e] == 1) {
        FUN_004beea0(0x10007);
        return;
      }
      FUN_004beea0(0x10000);
    }
    else {
      FUN_004beea0(0x60001);
      (**(code **)(*param_1 + 0x318))();
      iVar1 = param_1[0x1d9];
      if (*(int *)(iVar1 + 0x104) != 1) {
        *(undefined4 *)(iVar1 + 0x104) = 1;
        *(undefined4 *)(*(int *)(iVar1 + 0xd0) + 4) = 0;
        return;
      }
    }
    return;
  }
  FUN_004beea0(0x1000f);
  return;
}

// 004BF1E0  FUN_004bf1e0  size=23  [between]
void __fastcall FUN_004bf1e0(int param_1)

{
  *(undefined4 *)(param_1 + 0x10a0) = *(undefined4 *)(param_1 + 0xa84);
  FUN_004beea0(0x10003);
  return;
}

// 004BF240  FUN_004bf240  size=858  [between]
undefined4 __fastcall FUN_004bf240(int param_1)

{
  int iVar1;
  float *pfVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  float local_48;
  undefined4 local_44;
  float local_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  undefined1 local_20 [28];
  
  local_44 = 0x3fc00000;
  fVar6 = 0.0;
  local_3c = 0.0;
  if (*(int *)(param_1 + 0x10b8) == 1) {
    local_44 = 0x3f4ccccd;
  }
  iVar1 = FUN_00a81330();
  if ((((iVar1 == 0) || (iVar1 = FUN_00a7c8a0(), iVar1 == 0)) ||
      ((*(uint *)(iVar1 + 0x4c0) & 1) == 0)) && (iVar1 = FUN_004be0f0(), iVar1 != 0xe)) {
    if (*(int *)(param_1 + 0x10b8) == 1) {
      pfVar2 = (float *)FUN_00a925a0(local_20);
      local_48 = (float)(uint)(*(float *)(param_1 + 0x1158) * pfVar2[2] +
                               *(float *)(param_1 + 0x1150) * *pfVar2 +
                               *(float *)(param_1 + 0x1154) * pfVar2[1] < 0.975);
      if ((float10)0 != ABS((float10)(int)local_48)) goto LAB_004bf416;
    }
    D3DXVec3TransformNormal(&local_30,&DAT_01880d20,param_1 + 0x10);
    local_3c = *(float *)(param_1 + 0x40) + local_3c;
    fStack_38 = *(float *)(param_1 + 0x44) + fStack_38;
    fStack_34 = *(float *)(param_1 + 0x48) + fStack_34;
    local_48 = (float)FUN_00c27650(&local_3c,uStack_50,0x20040);
    if ((local_48 != 0.0) &&
       ((piVar3 = (int *)FUN_00a7c8a0(), piVar3 == (int *)0x0 ||
        (iVar1 = (**(code **)(*piVar3 + 0x14c))(0x54,0), iVar1 == 0)))) {
      local_48 = 0.0;
    }
    D3DXVec3TransformNormal(&local_3c,&DAT_01880d30,param_1 + 0x10);
    local_30 = *(float *)(param_1 + 0x40) + local_30;
    fStack_2c = *(float *)(param_1 + 0x44) + fStack_2c;
    fStack_28 = *(float *)(param_1 + 0x48) + fStack_28;
    fVar6 = (float)FUN_00c27650(&local_30,local_44,0x20040);
    if (((fVar6 != 0.0) && (fVar6 != local_3c)) &&
       ((piVar3 = (int *)FUN_00a7c8a0(), piVar3 == (int *)0x0 ||
        (iVar1 = (**(code **)(*piVar3 + 0x14c))(0x55,0), iVar1 == 0)))) {
      fVar6 = 0.0;
    }
  }
LAB_004bf416:
  D3DXVec3TransformNormal(&local_30,&DAT_01880d10,param_1 + 0x10);
  local_3c = local_3c + *(float *)(param_1 + 0x40);
  fStack_38 = *(float *)(param_1 + 0x44) + fStack_38;
  fStack_34 = *(float *)(param_1 + 0x48) + fStack_34;
  iVar1 = FUN_00c27650(&local_3c,uStack_4c,0x20040);
  if ((iVar1 != 0) &&
     ((piVar3 = (int *)FUN_00a7c8a0(), piVar3 == (int *)0x0 ||
      (iVar4 = (**(code **)(*piVar3 + 0x14c))(0x53,0), iVar4 == 0)))) {
    iVar1 = 0;
  }
  iVar4 = FUN_00a81330();
  if (((((iVar4 == 0) || (iVar4 = FUN_00a7c8a0(), iVar4 == 0)) ||
       ((*(uint *)(iVar4 + 0x4c0) & 1) == 0)) && ((local_48 != 0.0 && (fVar6 != 0.0)))) &&
     (local_48 != fVar6)) {
    piVar3 = (int *)FUN_00a7c8a0();
    uVar5 = FUN_00a7c7f0();
    FUN_00a7c960(uVar5);
    (**(code **)(*piVar3 + 0x150))(0x54,*(undefined4 *)(param_1 + 0x4f0));
    piVar3 = (int *)FUN_00a7c8a0();
    uVar5 = FUN_00a7c7f0();
    FUN_00a7c960(uVar5);
    (**(code **)(*piVar3 + 0x150))(0x55,*(undefined4 *)(param_1 + 0x4f0));
    FUN_004beea0(0xe0005);
    return 1;
  }
  if (iVar1 != 0) {
    piVar3 = (int *)FUN_00a7c8a0();
    uVar5 = FUN_00a7c7f0();
    FUN_00a7c960(uVar5);
    (**(code **)(*piVar3 + 0x150))(0x53,*(undefined4 *)(param_1 + 0x4f0));
    FUN_004beea0(0xe0004);
    return 1;
  }
  return 0;
}

// 004BF5A0  FUN_004bf5a0  size=141  [between]
undefined4 __fastcall FUN_004bf5a0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if ((iVar1 != 0) && ((*(uint *)(iVar1 + 0x4c0) & 1) != 0)) {
      iVar1 = (**(code **)(**(int **)(param_1 + 0xa84) + 0x14c))
                        (0x44,*(undefined4 *)(param_1 + 0x4f0));
      if (iVar1 != 0) {
        (**(code **)(**(int **)(param_1 + 0xa84) + 0x150))(0x44,*(undefined4 *)(param_1 + 0x4f0));
        FUN_00a7c970(*(undefined4 *)(*(int *)(param_1 + 0xa84) + 0x4f0));
        FUN_004beea0(0xe0001);
        return 1;
      }
    }
  }
  return 0;
}

// 004BF630  FUN_004bf630  size=345  [between]
void __fastcall FUN_004bf630(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_00a8eea0();
  if ((((0 < iVar1) && ((param_1[0x370] & 0x40000U) != 0)) && (DAT_01be8e58 != 0)) &&
     (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
    if (param_1[0x42e] == 0) {
      DAT_01bea090 = DAT_01bea090 & 0xffff7fff;
      iVar1 = (**(code **)(*piVar2 + 0x14c))(0x44,param_1[0x13c]);
      if (iVar1 != 0) {
        (**(code **)(*piVar2 + 0x150))(0x44,param_1[0x13c]);
        (**(code **)(*piVar2 + 0x220))(0x40a00000);
        (**(code **)(*param_1 + 0x220))(0x40a00000);
        FUN_004beea0(0xe0001);
        FUN_00a7c970(piVar2[0x13c]);
        param_1[0x370] = param_1[0x370] & 0xfffbffff;
      }
    }
    else if ((param_1[0x42e] == 1) &&
            (iVar1 = (**(code **)(*piVar2 + 0x14c))(0x46,param_1[0x13c]), iVar1 != 0)) {
      FUN_004beea0(0xe0003);
      FUN_00a7c970(piVar2[0x13c]);
      (**(code **)(*piVar2 + 0x220))(0x40a00000);
      (**(code **)(*param_1 + 0x220))(0x40a00000);
      param_1[0x370] = param_1[0x370] & 0xfffbffff;
      return;
    }
  }
  return;
}

// 004BF790  FUN_004bf790  size=309  [between]
undefined4 __fastcall FUN_004bf790(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  float10 fVar5;
  
  iVar3 = FUN_008e2740();
  if (iVar3 != 0) {
    iVar3 = (**(code **)(*param_1 + 0x1fc))();
    if ((iVar3 != 0) && (iVar3 = (**(code **)(*param_1 + 0x1d8))(), iVar3 != 0)) {
      return 0;
    }
    uVar4 = param_1[0x186] & 0xffff0000;
    if ((((((uVar4 != 0x30000) && (uVar4 != 0x50000)) && (uVar4 != 0xe0000)) &&
         (((param_1[0x370] & 0x200U) == 0 && (iVar3 = FUN_00a8cab0(), iVar3 != 0x20001)))) &&
        ((iVar3 = FUN_00a8cab0(), iVar3 != 0x2000b &&
         ((iVar3 = FUN_00a8cab0(), iVar3 != 0x2000c && (iVar3 = FUN_00a8cab0(), iVar3 != 0x2000d))))
        )) && ((fVar1 = (float)param_1[0x2a4], NAN(fVar1) || 36.0 < fVar1 == (fVar1 == 36.0) &&
               (iVar3 = FUN_004ba1b0(), iVar3 != 0)))) {
      fVar5 = (float10)FUN_004b58a0();
      if (fVar5 < (float10)0.7853982 == (fVar5 == (float10)0.7853982)) {
        FUN_004beea0(0x50002);
        return 1;
      }
      param_1[0x42a] = 0;
      sVar2 = FUN_00dde2d0(2,3);
      param_1[0x42b] = (int)sVar2;
      FUN_004beea0(0x20001);
      return 1;
    }
  }
  return 0;
}

// 004BF8D0  FUN_004bf8d0  size=239  [between]
undefined4 __fastcall FUN_004bf8d0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  undefined4 local_90 [35];
  
  iVar1 = FUN_00a81330();
  if (iVar1 == 0) {
    FUN_0040b190();
    local_90[0] = 1;
    iVar1 = FUN_00a82090("Em0112",0x20112,local_90);
    if (iVar1 == 0) {
      return 0;
    }
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
    FUN_00a8c5f0(3,*(undefined4 *)(param_1 + 0x4f0),iVar1,0x700,0xffffffff);
    piVar3 = (int *)FUN_00a7c8a0();
    if (piVar3 != (int *)0x0) {
      puVar5 = &DAT_01b34e84;
      (**(code **)(*piVar3 + 4))(&DAT_01b34e84);
      iVar1 = FUN_00dd6d70(puVar5);
      if (iVar1 != 0) {
        uVar2 = FUN_00a7c7f0();
        FUN_00a7c960(uVar2);
        puVar4 = (undefined4 *)FUN_009f8b60();
        FUN_009f8ae0(*puVar4);
        (**(code **)(*piVar3 + 0x20))();
      }
    }
  }
  return 1;
}

// 004BF9C0  FUN_004bf9c0  size=239  [between]
undefined4 __fastcall FUN_004bf9c0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  undefined4 local_90 [35];
  
  iVar1 = FUN_00a81330();
  if (iVar1 == 0) {
    FUN_0040b190();
    local_90[0] = 2;
    iVar1 = FUN_00a82090("Em0112",0x20112,local_90);
    if (iVar1 == 0) {
      return 0;
    }
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
    FUN_00a8c5f0(4,*(undefined4 *)(param_1 + 0x4f0),iVar1,0x701,0xffffffff);
    piVar3 = (int *)FUN_00a7c8a0();
    if (piVar3 != (int *)0x0) {
      puVar5 = &DAT_01b34e84;
      (**(code **)(*piVar3 + 4))(&DAT_01b34e84);
      iVar1 = FUN_00dd6d70(puVar5);
      if (iVar1 != 0) {
        uVar2 = FUN_00a7c7f0();
        FUN_00a7c960(uVar2);
        puVar4 = (undefined4 *)FUN_009f8b60();
        FUN_009f8ae0(*puVar4);
        (**(code **)(*piVar3 + 0x20))();
      }
    }
  }
  return 1;
}

// 004BFAB0  FUN_004bfab0  size=211  [between]
undefined4 __fastcall FUN_004bfab0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined *puVar4;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = FUN_00a82090("Em011a",0x2011a,0);
  if (iVar1 != 0) {
    uVar2 = FUN_00a7c7f0();
    FUN_00a7c960(uVar2);
    FUN_00a8c5f0(6,*(undefined4 *)(param_1 + 0x4f0),iVar1,0x700,0xffffffff);
    piVar3 = (int *)FUN_00a7c8a0();
    if (piVar3 != (int *)0x0) {
      puVar4 = &DAT_01b34e8c;
      (**(code **)(*piVar3 + 4))(&DAT_01b34e8c);
      iVar1 = FUN_00dd6d70(puVar4);
      if (iVar1 != 0) {
        uVar2 = FUN_00a7c7f0();
        FUN_00a7c960(uVar2);
        if (0.0 < *(float *)(param_1 + 0x1340)) {
          FUN_004bd2a0(*(undefined4 *)(param_1 + 0x1340));
        }
      }
    }
    return 1;
  }
  return 0;
}

// 004BFB90  FUN_004bfb90  size=369  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004bfb90(int param_1,undefined4 *param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  uint uVar7;
  
  if (*(int *)(param_1 + 0x4a0) == 1) {
    uVar6 = FUN_004baeb0();
    return uVar6;
  }
  iVar1 = *(int *)(param_1 + 0x10b8);
  if (iVar1 == 0) {
    if ((_DAT_01b34e20 & 1) == 0) {
      _DAT_01b34e20 = _DAT_01b34e20 | 1;
      DAT_01b34e00 = 69.38774;
      DAT_01b34e04 = 0x42c80000;
      DAT_01b34e08 = -191.86494;
      DAT_01b34e10 = 73.78935;
      DAT_01b34e14 = 0x42c80000;
      DAT_01b34e18 = -175.37738;
    }
    fVar2 = DAT_01b34e00 - *(float *)(param_1 + 0x40);
    fVar5 = DAT_01b34e08 - *(float *)(param_1 + 0x48);
    fVar3 = DAT_01b34e10 - *(float *)(param_1 + 0x40);
    fVar4 = DAT_01b34e18 - *(float *)(param_1 + 0x48);
    uVar7 = (uint)(fVar4 * fVar4 + fVar3 * fVar3 < fVar5 * fVar5 + fVar2 * fVar2);
    *param_2 = (&DAT_01b34e00)[uVar7 * 4];
    param_2[1] = (&DAT_01b34e04)[uVar7 * 4];
    param_2[2] = (&DAT_01b34e08)[uVar7 * 4];
    param_2[3] = (&DAT_01b34e0c)[uVar7 * 4];
    param_2[3] = (&DAT_0163f078)[uVar7];
    *(undefined4 *)(param_1 + 0x11b0) = (&DAT_0163f070)[uVar7];
    return 1;
  }
  if (iVar1 == 1) {
    *param_2 = 0x419eb852;
    param_2[1] = 0x42b8051f;
    param_2[2] = 0xc303999a;
    param_2[3] = 0xc00cbe4c;
    *(undefined4 *)(param_1 + 0x11b0) = 2;
    return 1;
  }
  if (iVar1 == 2) {
    uVar6 = *(undefined4 *)(param_1 + 0x44);
    *param_2 = 0x41c4cccd;
    param_2[1] = uVar6;
    param_2[2] = 0xc2ac999a;
    param_2[3] = 0;
    *(undefined4 *)(param_1 + 0x11b0) = 3;
    return 1;
  }
  return 0;
}

// 004BFD10  FUN_004bfd10  size=315  [between]
void __fastcall FUN_004bfd10(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *(int *)(param_1 + 0x10b8);
  if (((iVar3 != 1) && (*(int *)(param_1 + 0x618) != 0x1000c)) &&
     (*(int *)(param_1 + 0x618) != 0xe0007)) {
    uVar4 = (uint)(iVar3 != 0);
    iVar1 = *(int *)(param_1 + 0x12bc + uVar4 * 4);
    iVar2 = *(int *)(param_1 + 0x12b4 + uVar4 * 4);
    if (*(int *)(param_1 + 0x11f0) == 0) {
      iVar3 = FUN_004bae70();
      if (iVar2 <= iVar3) {
        *(undefined4 *)(param_1 + 0x11f4) = 0;
        *(undefined4 *)(param_1 + 0x11f0) = 1;
        if (*(int *)(param_1 + 0x10b8) == 0) {
          FUN_004b56f0();
          return;
        }
      }
    }
    else {
      if (iVar3 == 0) {
        FUN_004b56f0();
      }
      iVar3 = FUN_004bae70();
      if (iVar3 <= iVar1) {
        if ((*(int *)(param_1 + 0x10b8) == 0) || (iVar3 = FUN_004bae70(), iVar3 < 1)) {
          *(float *)(param_1 + 0x11f4) = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0x11f4);
        }
        if (*(float *)(param_1 + 0x12c4 + uVar4 * 4) < *(float *)(param_1 + 0x11f4)) {
          if (*(int *)(param_1 + 0x10b8) == 0) {
            FUN_004b5730();
          }
          else {
            FUN_004bae40();
          }
          *(undefined4 *)(param_1 + 0x11f0) = 0;
          *(undefined4 *)(param_1 + 0x11f4) = 0;
        }
      }
      if (((*(int *)(param_1 + 0x11f0) != 0) && (iVar3 = FUN_004ba1b0(), iVar3 == 0)) &&
         ((iVar3 = FUN_004b5a90(), iVar3 == 0 && (iVar3 = FUN_004bae70(), iVar3 < 1)))) {
        FUN_004bafa0();
        return;
      }
    }
  }
  return;
}

// 004BFE50  FUN_004bfe50  size=129  [between]
void __fastcall FUN_004bfe50(int param_1)

{
  int iVar1;
  float10 fVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_00a8cab0();
  if (iVar1 != 0x2000c) {
    iVar1 = FUN_00a8cab0();
    if (iVar1 != 0x2000d) {
      iVar1 = FUN_00a8cab0();
      if ((iVar1 != 0x20001) && (*(int *)(param_1 + 0x12a4) == 0)) {
        iVar1 = FUN_004bbd40();
        if (iVar1 == 0) {
          *(uint *)(param_1 + 0xdc0) = *(uint *)(param_1 + 0xdc0) | 0x4000000;
          fVar2 = (float10)FUN_004b58a0();
          if (fVar2 <= (float10)2.3561945) {
            uVar3 = 0x20001;
          }
          else {
            uVar3 = 0x20006;
          }
          FUN_004beea0(uVar3);
          FUN_0041ca10(*(undefined4 *)(param_1 + 0xa84));
        }
      }
    }
  }
  return;
}

// 004BFEE0  FUN_004bfee0  size=262  [between]
undefined4 __fastcall FUN_004bfee0(int param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = FUN_00a81330();
  if (((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) &&
     ((*(uint *)(iVar2 + 0x4c0) & 1) != 0)) {
    return 0;
  }
  iVar2 = FUN_004b5b00();
  if (((iVar2 != 0) && (iVar2 = FUN_004be0f0(), iVar2 < 0xe)) &&
     (fVar1 = *(float *)(param_1 + 0x11b4), !NAN(fVar1) && 1800.0 < fVar1 != (fVar1 == 1800.0))) {
    FUN_004beea0(0x1000c);
    return 1;
  }
  iVar2 = FUN_00a81330();
  if (((iVar2 == 0) || (iVar2 = FUN_00a7c8a0(), iVar2 == 0)) || (uVar3 = FUN_004b72d0(), uVar3 < 7))
  {
    iVar2 = FUN_004bae70();
    if ((iVar2 < 1) &&
       (fVar1 = *(float *)(param_1 + 0x11b8), !NAN(fVar1) && 60.0 < fVar1 != (fVar1 == 60.0))) {
      FUN_004bae40();
    }
    return 0;
  }
  iVar2 = FUN_004b5b70();
  if (iVar2 != 0) {
    *(uint *)(param_1 + 0xdc0) = *(uint *)(param_1 + 0xdc0) & 0xfff7ffff;
    FUN_004beea0(0x1000e);
    return 1;
  }
  iVar2 = FUN_004b5a90();
  if (iVar2 == 0) {
    return 0;
  }
  *(uint *)(param_1 + 0xdc0) = *(uint *)(param_1 + 0xdc0) & 0xfff7ffff;
  FUN_004beea0(0x10006);
  return 1;
}

// 004BFFF0  FUN_004bfff0  size=784  [between]
void __fastcall FUN_004bfff0(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  float10 fVar5;
  undefined4 local_4;
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    if (*(int *)(param_1 + 0x61c) != 1) {
      return;
    }
    goto LAB_004c021b;
  }
  iVar3 = *(int *)(param_1 + 0x1010);
  uVar1 = 0x3e4ccccd;
  local_4 = 0x3e4ccccd;
  if (((iVar3 == 0xe0003) || (iVar3 == 0xe0002)) || (iVar3 == 0xe0001)) {
    uVar1 = 0;
    local_4 = 0;
  }
  FUN_00aa4120(5,0,uVar1,0x3f800000,0,0xbf800000,0x3f800000);
  iVar3 = FUN_00a81330();
  if ((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
    FUN_00aa4120(5,0,local_4,0x3f800000,0,0xbf800000,0x3f800000);
  }
  iVar3 = FUN_00a81330();
  if ((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
    FUN_00aa4120(4,0,local_4,0x3f800000,0,0xbf800000,0x3f800000);
  }
  *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  if (*(int *)(param_1 + 0x754) == 0) {
LAB_004c012b:
    uVar1 = 0x41200000;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x10b8);
    if (iVar3 == 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x12a8);
    }
    else if (iVar3 == 1) {
      uVar1 = *(undefined4 *)(param_1 + 0x12ac);
    }
    else {
      if (iVar3 != 2) goto LAB_004c012b;
      uVar1 = *(undefined4 *)(param_1 + 0x12b0);
    }
  }
  *(undefined4 *)(param_1 + 0x920) = uVar1;
  iVar3 = FUN_004b8a30();
  if ((iVar3 == 0) || (uVar4 = FUN_00dde2d0(0,100), (uVar4 & 1) == 0)) {
    if (((*(uint *)(param_1 + 0x1010) & 0xffff0000) == 0x50000) ||
       (*(uint *)(param_1 + 0x1010) == 0x3000a)) {
      fVar2 = *(float *)(param_1 + 0x920) * 0.5;
      goto LAB_004c0185;
    }
  }
  else {
    fVar2 = 5.0;
LAB_004c0185:
    *(float *)(param_1 + 0x920) = fVar2;
  }
  *(undefined4 *)(param_1 + 0x924) = 0;
  *(undefined4 *)(param_1 + 0x928) = 0;
  iVar3 = FUN_00a81330();
  if (((((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) &&
       ((*(uint *)(iVar3 + 0x4c0) & 1) != 0)) &&
      ((*(int *)(param_1 + 0x10b8) == 2 && (iVar3 = FUN_004bae70(), 1 < iVar3)))) &&
     ((fVar2 = *(float *)(param_1 + 0xa90), !NAN(fVar2) && 144.0 < fVar2 != (fVar2 == 144.0) &&
      ((fVar5 = (float10)FUN_004b58a0(), fVar5 < (float10)0.87266463 &&
       (uVar4 = FUN_00dde2d0(0,100), (uVar4 & 1) != 0)))))) {
    *(undefined4 *)(param_1 + 0x11ec) = 0x43340000;
  }
LAB_004c021b:
  FUN_004be8c0(0x3f800000,0x3f800000);
  FUN_004beaa0();
  if (*(float *)(param_1 + 0xa90) <= 64.0) {
    *(undefined4 *)(param_1 + 0x11ec) = 0;
  }
  *(float *)(param_1 + 0x11ec) = *(float *)(param_1 + 0x11ec) - *(float *)(param_1 + 0x910);
  iVar3 = FUN_00a81330();
  if ((((iVar3 == 0) || (iVar3 = FUN_00a7c8a0(), iVar3 == 0)) ||
      ((*(uint *)(iVar3 + 0x4c0) & 1) == 0)) &&
     ((((iVar3 = FUN_00a81330(), iVar3 == 0 || (iVar3 = FUN_00a7c8a0(), iVar3 == 0)) ||
       (uVar4 = FUN_004b72d0(), uVar4 < 7)) &&
      (fVar2 = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0x924),
      *(float *)(param_1 + 0x924) = fVar2, 90.0 < fVar2)))) {
    *(undefined4 *)(param_1 + 0x924) = 0;
    iVar3 = FUN_00c195b0();
    if (4 < iVar3) {
      FUN_004baa10();
      return;
    }
    FUN_004ba900();
    return;
  }
  return;
}

// 004C0300  FUN_004c0300  size=237  [between]
void __fastcall FUN_004c0300(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(5,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        FUN_00aa4080(5,0,0,0x3f800000,0,0xbf800000,0x3f800000);
      }
    }
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        FUN_00aa4120(4,0,0,0x3f800000,0,0xbf800000,0x3f800000);
      }
    }
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_004be8c0(0x3f800000,0x3f800000);
  FUN_004beaa0();
  return;
}

// 004C03F0  FUN_004c03f0  size=66  [between]
void __fastcall FUN_004c03f0(int param_1)

{
  float fVar1;
  
  if ((((*(int *)(param_1 + 0x61c) != 0) && ((*(byte *)(param_1 + 0xdc0) & 1) == 0)) &&
      (1 < *(int *)(param_1 + 0x61c))) &&
     (fVar1 = *(float *)(param_1 + 0xa90), !NAN(fVar1) && 169.0 < fVar1 != (fVar1 == 169.0))) {
    *(undefined4 *)(param_1 + 0x10a0) = *(undefined4 *)(param_1 + 0xa84);
    FUN_004beea0(0x10003);
  }
  return;
}

// 004C0440  FUN_004c0440  size=412  [between]
void __fastcall FUN_004c0440(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 local_20 [28];
  
  if (param_1[0x187] == 0) {
    fVar1 = (float)param_1[0x400];
    fVar2 = (float)param_1[0x10];
    fVar3 = (float)param_1[0x402];
    fVar4 = (float)param_1[0x12];
    pfVar5 = (float *)FUN_00a925a0(local_20);
    if (*pfVar5 * (fVar3 - fVar4) - pfVar5[2] * (fVar1 - fVar2) <= 0.0) {
      FUN_00aa4080(0x12,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      uVar7 = 0x12;
    }
    else {
      FUN_00aa4080(0x11,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      uVar7 = 0x11;
    }
    FUN_004be9b0(uVar7,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_004bed90(4,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  iVar6 = FUN_00a8c760(0);
  if (iVar6 != 0) {
    FUN_004b94a0(param_1 + 0x400,0x3dcccccd,0x3d567750);
  }
  FUN_004be8c0(0x3f800000,0x3f800000);
  FUN_004beaa0();
  iVar6 = FUN_00a94ce0(0);
  if (iVar6 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
  return;
}

// 004C05E0  FUN_004c05e0  size=671  [between]
void __fastcall FUN_004c05e0(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  undefined4 uVar5;
  undefined1 local_30 [16];
  undefined1 local_20 [28];
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x13,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    iVar2 = FUN_00a81330();
    if (iVar2 != 0) {
      iVar2 = FUN_00a7c8a0();
      if (iVar2 != 0) {
        FUN_00aa4080(5,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      }
    }
    iVar2 = FUN_00a81330();
    if (iVar2 != 0) {
      iVar2 = FUN_00a7c8a0();
      if (iVar2 != 0) {
        FUN_00aa4080(4,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      }
    }
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0;
    if (param_1[0x458] != 0) {
      RayCastManager::getWork(param_1 + 0x458);
    }
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  iVar2 = param_1[0x2a1];
  if (param_1[0x42e] == 0) {
    iVar3 = param_1[0x2e7];
    uVar5 = 1;
  }
  else {
    iVar3 = param_1[0x2e7];
    uVar5 = 2;
  }
  uVar5 = FUN_00c19f60(iVar3,uVar5);
  iVar2 = FUN_004b9680(local_30,uVar5,iVar2 + 0x40);
  FUN_004b94a0(local_30,0x3dcccccd,0x3db2b8c2);
  param_1[0x248] = (int)((float)param_1[0x244] + (float)param_1[0x248]);
  iVar3 = FUN_004bf240();
  if (iVar3 == 0) {
    if (param_1[0x458] != 0) {
      iVar3 = FUN_00907560(param_1 + 0x458,0,0,0,0,0,0,0);
      if (iVar3 != 0) {
        FUN_004beea0(0x1000b);
        param_1[0x405] = 0x1000a;
        return;
      }
    }
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    FUN_00a8b8a0(local_20,0x40a00000);
    fVar1 = (float)param_1[0x2a4];
    if (((!NAN(fVar1) && 400.0 < fVar1 != (fVar1 == 400.0)) ||
        (fVar1 = (float)param_1[0x248], !NAN(fVar1) && 210.0 < fVar1 != (fVar1 == 210.0))) ||
       ((fVar1 = (float)param_1[0x248], !NAN(fVar1) && 60.0 < fVar1 != (fVar1 == 60.0) &&
        (iVar2 == 0)))) {
      fVar4 = (float10)FUN_00a8ec30(param_1[0x2a1] + 0x40);
      fVar4 = (float10)FUN_00ddba30((float)((float10)(float)param_1[0x25] - fVar4));
      if ((float10)2.0943952 < ABS(fVar4)) {
        FUN_004beea0(0x50001);
        return;
      }
      (**(code **)(*param_1 + 0x34c))();
    }
  }
  return;
}

// 004C0880  FUN_004c0880  size=1061  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004c0880(int *param_1)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float local_1c;
  undefined4 local_18 [6];
  
  local_18[1] = 0x5e;
  local_18[2] = 0x5e;
  local_18[4] = 0x5e;
  local_18[5] = 0x5e;
  local_18[0] = 0x5d;
  local_18[3] = 0x5d;
  switch(param_1[0x187]) {
  case 0:
    if (param_1[0x404] == 0x1000f) {
      uVar2 = FUN_00dde2d0(0,100);
      uVar2 = uVar2 & 1;
      if (param_1[0x407] == uVar2) {
        uVar2 = uVar2 ^ 1;
      }
      local_1c = 0.033333335;
      param_1[0x407] = uVar2;
      iVar4 = FUN_00a8e520();
      if (iVar4 != 0) {
        local_1c = (float)param_1[0x244] * 0.033333335;
      }
      FUN_00aa4080(local_18[uVar2],0,local_1c,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_004be9b0(local_18[uVar2 + 3],0,local_1c,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_004bed60(4);
      iVar4 = 0x3f000000;
      param_1[0x407] = uVar2;
    }
    else {
      param_1[0x407] = -1;
      FUN_00aa4080(0x6a,0,0x3dcccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_004be9b0(0x6a,0,0x3dcccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_004bed90(4,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      iVar4 = 0;
    }
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = iVar4;
    param_1[0x24f] = 0x41700000;
    param_1[0x24e] = 0x40a00000;
    param_1[0x24d] = 0x3f800000;
    param_1[0x24c] = 0x3f800000;
  case 1:
    iVar4 = 0;
    if (param_1[0x407] != -1) {
      iVar4 = FUN_00a8c760(4);
      fVar5 = (float10)FUN_004b63e0(param_1 + 0x24f,param_1 + 0x24e,param_1 + 0x24d,param_1 + 0x24c)
      ;
      iVar3 = FUN_00a8e520();
      if ((iVar3 != 0) && (0.0 < (float)param_1[0x24f])) {
        iVar4 = 0;
      }
      FUN_00a96030(0,(float)fVar5);
    }
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    iVar3 = FUN_00a94ce0(0);
    if ((iVar3 != 0) || (iVar4 != 0)) {
      FUN_00aa4080(0x6b,0,param_1[0x248],0x3f800000,0,0xbf800000,0x3f800000);
      FUN_004be9b0(0x6b,0,param_1[0x248],0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    iVar4 = FUN_00a8e520();
    if (iVar4 == 0) {
      fVar1 = 1.0;
    }
    else {
      fVar1 = (_DAT_01be942c / (float)param_1[0x244]) * 0.5;
    }
    FUN_00a96030(0,fVar1);
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    if ((param_1[0x370] & 0x80000000U) == 0) {
      uVar8 = 1;
      uVar7 = 0x8000000;
      uVar6 = 0;
      FUN_00a92f90(0,0x8000000,1);
      FUN_00e3a1a0(uVar6,uVar7,uVar8);
      iVar4 = FUN_00a94ce0(0);
      if (iVar4 != 0) {
        FUN_00aa4080(0x6c,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        FUN_004be9b0(0x6c,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        param_1[0x187] = param_1[0x187] + 1;
        return;
      }
    }
    break;
  case 3:
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x004c0c9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 004C0CC0  Em0110::vf1A4  size=460  [class]
void __thiscall Em0110::vf1A4(int param_1,int *param_2,uint param_3)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  float10 fVar6;
  
  uVar2 = param_3 >> 2 & 1;
  if (((param_3 & 2) != 0) || (uVar2 != 0)) {
    *(uint *)(param_1 + 0xdc0) = *(uint *)(param_1 + 0xdc0) | 0x2000;
  }
  if (*(int *)(param_1 + 0x12a4) != 0) {
    return;
  }
  if ((param_3 >> 3 & 1) != 0) {
    return;
  }
  if (*param_2 != 0xdf) {
    if (uVar2 == 0) {
      if ((param_3 & 1) != 0) {
        *(uint *)(param_1 + 0xdc0) = *(uint *)(param_1 + 0xdc0) | 0x1000;
        iVar3 = *param_2;
        *(undefined4 *)(param_1 + 0x10ac) = 0;
        *(undefined4 *)(param_1 + 0x10a8) = 0;
        *(int *)(param_1 + 0x10c0) = iVar3;
        return;
      }
      return;
    }
    switch(*param_2) {
    case 0x121:
    case 0x122:
    case 0x123:
    case 0x124:
    case 0x125:
    case 0x126:
      iVar3 = FUN_004b9f90();
      if (iVar3 != 0) {
        if (*(int *)(param_1 + 0x10ac) <= *(int *)(param_1 + 0x10a8)) {
          return;
        }
        FUN_004beea0(0x2000a);
        return;
      }
    case 0x116:
    case 0x117:
    case 0x118:
    case 0x11a:
      FUN_00a7c950();
      uVar5 = FUN_00a81330();
      FUN_00a7c970(uVar5);
      FUN_004beea0(0x30003);
      return;
    case 0x127:
      piVar4 = (int *)FUN_004ba100();
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 0x20))();
      }
    case 0x11f:
      if ((*(int *)(param_1 + 0x10b8) == 1) &&
         (fVar6 = (float10)FUN_004b5050(), fVar6 < (float10)0.5 != (fVar6 == (float10)0.5))) {
        FUN_00a7c950();
        uVar5 = FUN_00a81330();
        FUN_00a7c970(uVar5);
        *(undefined4 *)(param_1 + 0x10a8) = 0;
        sVar1 = FUN_00dde2d0(2,3);
        *(int *)(param_1 + 0x10ac) = (int)sVar1;
        FUN_004beea0(0x30003);
        return;
      }
    default:
      FUN_00a7c950();
      uVar5 = FUN_00a81330();
      FUN_00a7c970(uVar5);
      *(undefined4 *)(param_1 + 0x10ac) = 0;
      *(undefined4 *)(param_1 + 0x10a8) = 0;
      FUN_004beea0(0x30003);
      return;
    case 0x12a:
    case 300:
      return;
    }
  }
  return;
}

// 004C0EC0  FUN_004c0ec0  size=234  [between]
undefined4 __fastcall FUN_004c0ec0(int param_1)

{
  int iVar1;
  uint uVar2;
  float10 fVar3;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if ((iVar1 != 0) && ((*(uint *)(iVar1 + 0x4c0) & 1) != 0)) {
      if (*(int *)(param_1 + 0x4a0) != 1) {
        iVar1 = FUN_004b7fe0();
        if (iVar1 != 0) {
          FUN_004beea0(0xe000a);
          return 1;
        }
        if (*(int *)(param_1 + 0x10b8) == 0) {
          fVar3 = (float10)FUN_004b5050();
          if (fVar3 < (float10)0.75 != (fVar3 == (float10)0.75)) {
            FUN_004beea0(0xe000b);
            return 1;
          }
        }
      }
      if (*(int *)(param_1 + 0x10b8) == 1) {
        uVar2 = FUN_00dde2d0(0,100);
        if ((uVar2 & 1) == 0) {
          FUN_004beea0(0x20008);
          return 1;
        }
        if ((uVar2 & 1) == 1) {
          FUN_004beea0(0x20007);
          return 1;
        }
      }
      else {
        FUN_004beea0(0x2000e);
      }
      return 1;
    }
  }
  return 0;
}

// 004C0FB0  FUN_004c0fb0  size=102  [between]
undefined4 __fastcall FUN_004c0fb0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if ((((iVar1 != 0) && ((*(uint *)(iVar1 + 0x4c0) & 1) != 0)) &&
        ((*(uint *)(param_1 + 0xdc0) & 0x800) == 0)) && (*(int *)(param_1 + 0x10b8) != 1)) {
      iVar1 = FUN_004bb830();
      if (iVar1 != -1) {
        *(uint *)(param_1 + 0xdc0) = *(uint *)(param_1 + 0xdc0) | 0x800;
        FUN_004beea0(iVar1);
        return 1;
      }
    }
  }
  return 0;
}

// 004C1020  FUN_004c1020  size=245  [between]
undefined4 __fastcall FUN_004c1020(int param_1)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  undefined *puVar6;
  
  fVar1 = *(float *)(param_1 + 0xa90);
  bVar5 = false;
  if (!NAN(fVar1) && 36.0 < fVar1 != (fVar1 == 36.0)) {
    bVar5 = *(int *)(param_1 + 0x10bc) != 0x2000a;
  }
  piVar2 = *(int **)(param_1 + 0xa84);
  if (piVar2 != (int *)0x0) {
    puVar6 = &DAT_01be9db8;
    (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
    iVar3 = FUN_00dd6d80(puVar6);
    if (iVar3 != 0) {
      iVar3 = (**(code **)(*piVar2 + 0x354))();
      if (iVar3 == 0) {
        iVar3 = FUN_00a8cab0();
        if (iVar3 != 0x10c) goto LAB_004c10b8;
      }
      if (*(int *)(param_1 + 0x10bc) != 0x2000a) {
        iVar3 = FUN_004b9f90();
        if (iVar3 != 0) goto LAB_004c10a3;
      }
    }
  }
LAB_004c10b8:
  if (bVar5) {
    iVar3 = FUN_004b9f90();
    if (iVar3 != 0) {
      uVar4 = FUN_00dde2d0(0,100);
      if ((uVar4 & 3) != 0) {
LAB_004c10a3:
        FUN_004beea0(0x2000a);
        return 1;
      }
    }
  }
  uVar4 = FUN_00dde2d0(0,100);
  if ((uVar4 & 1) != 0) {
    FUN_004beea0(0x20007);
    return 1;
  }
  FUN_004beea0(0x20008);
  return 1;
}

// 004C1120  FUN_004c1120  size=456  [between]
undefined4 __thiscall FUN_004c1120(int param_1,int *param_2)

{
  int iVar1;
  float *pfVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_54;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined1 local_20 [28];
  
  iVar5 = 0;
  if (*param_2 != 0) {
    local_54 = 0;
    FUN_00905f80(param_2,&local_54);
    if ((local_54 != 0) && (0 < *(int *)(local_54 + 0x14))) {
      iVar6 = 0;
      iVar4 = local_54;
      do {
        iVar1 = *(int *)(iVar4 + 0x10) + iVar6;
        uVar3 = *(uint *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x28 + iVar6) + 0x1c) & 0x1f;
        if ((uVar3 == 1) || (uVar3 == 0x14)) {
          local_50 = *(float *)(iVar1 + 0x10);
          local_4c = *(float *)(iVar1 + 0x14);
          local_48 = *(float *)(iVar1 + 0x18);
          if ((ABS(local_48 * 0.0 + local_50 * 0.0 + local_4c) < 0.25) &&
             (pfVar2 = (float *)FUN_00a925a0(local_20), iVar4 = local_54,
             pfVar2[2] * local_48 + *pfVar2 * local_50 + pfVar2[1] * local_4c < 0.6)) {
            RayCastManager::getWork(param_2);
            *(float *)(param_1 + 0x11a0) = local_50;
            *(float *)(param_1 + 0x11a4) = local_4c;
            *(float *)(param_1 + 0x11a8) = local_48;
            *(undefined4 *)(param_1 + 0x11ac) = local_44;
            return 1;
          }
        }
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 0x30;
      } while (iVar5 < *(int *)(iVar4 + 0x14));
    }
  }
  local_40 = *(float *)(param_1 + 0x40);
  local_38 = *(float *)(param_1 + 0x48);
  local_34 = *(float *)(param_1 + 0x4c);
  local_3c = *(float *)(param_1 + 0x44) + 1.5;
  pfVar2 = (float *)FUN_00a8b8a0(local_20,0x40800000);
  local_30 = *pfVar2 + local_40;
  local_2c = pfVar2[1] + local_3c;
  local_28 = pfVar2[2] + local_38;
  local_24 = pfVar2[3] + local_34;
  iVar5 = FUN_009f8b40();
  FUN_0090f540(param_2,0,&local_40,&local_30,0x3fb9999a,iVar5 << 0x10 | 7,"em0110_wall");
  return 0;
}

// 004C12F0  FUN_004c12f0  size=112  [between]
void __fastcall FUN_004c12f0(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  if (*(int *)(param_1 + 0x624) == 0) {
    if (*(int *)(param_1 + 0xa84) != 0) {
      iVar1 = FUN_00a8cab0();
      if (iVar1 == 0x13) {
        *(int *)(param_1 + 0x624) = *(int *)(param_1 + 0x624) + 1;
      }
    }
  }
  else if ((*(int *)(param_1 + 0x624) == 1) && (*(int *)(param_1 + 0xa84) != 0)) {
    iVar1 = FUN_00a8cab0();
    if (iVar1 != 0x13) {
      fVar2 = (float10)FUN_004b58a0();
      if ((float10)2.3561945 < fVar2) {
        iVar1 = FUN_00a8c760(4);
        if (iVar1 != 0) {
          FUN_004beea0(0x20006);
          return;
        }
      }
    }
  }
  return;
}

// 004C1360  FUN_004c1360  size=1008  [between]
void __fastcall FUN_004c1360(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  iVar3 = param_1[0x187];
  if (iVar3 == 0) {
    FUN_00aa4080(0x2e,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    iVar3 = FUN_00a81330();
    if ((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
      FUN_00aa4080(0x2e,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    iVar3 = FUN_00a81330();
    if ((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
      FUN_00aa4080(0xc,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    param_1[0x42a] = 0;
    sVar2 = FUN_00dde2d0(2,3);
    param_1[0x42b] = (int)sVar2;
    param_1[0x188] = 0;
    param_1[0x189] = 0;
    if (param_1[0x476] != 0) {
      param_1[0x476] = 0;
      iVar3 = FUN_00a92f90();
      iVar4 = FUN_00e26e90();
      if (iVar4 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) | 1;
      }
      iVar3 = FUN_00a92f90();
      iVar4 = FUN_00e26e90();
      if (iVar4 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) & 0xfffffffd;
      }
    }
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (iVar3 != 1) {
    if (iVar3 != 2) {
      return;
    }
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 == 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x004c13b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  FUN_004be8c0(0x3f800000,0x3f800000);
  FUN_004beaa0();
  if ((((param_1[0x2a1] != 0) && (iVar3 = FUN_00a8c760(0), iVar3 != 0)) &&
      (fVar1 = (float)param_1[0x2a4], !NAN(fVar1) && 1.0 < fVar1 != (fVar1 == 1.0))) &&
     ((param_1[0x42e] != 1 && (param_1[0x189] == 0)))) {
    FUN_004b9650(0x3e4ccccd,0x3e32b8c2);
  }
  if (2.25 < (float)param_1[0x2a4]) {
LAB_004c15a4:
    uVar8 = 0;
  }
  else {
    fVar5 = (float10)FUN_00a8ec30(param_1[0x2a1] + 0x40);
    fVar5 = (float10)FUN_00ddba30((float)((float10)(float)param_1[0x25] - fVar5));
    if ((float10)0.6981317 <= ABS(fVar5)) goto LAB_004c15a4;
    uVar8 = 1;
  }
  uVar7 = 0x80;
  uVar6 = 0;
  FUN_00a92f90(0,0x80,uVar8);
  FUN_00e3a1a0(uVar6,uVar7,uVar8);
  fVar1 = (float)param_1[0x2a4];
  if (NAN(fVar1) || 49.0 < fVar1 == (fVar1 == 49.0)) {
    fVar5 = (float10)FUN_00a8ec30(param_1[0x2a1] + 0x40);
    fVar5 = (float10)FUN_00ddba30((float)((float10)(float)param_1[0x25] - fVar5));
    if (ABS(fVar5) <= (float10)2.3561945) goto LAB_004c16e7;
  }
  iVar3 = FUN_00a8c760(0xf);
  if (iVar3 != 0) {
    FUN_00aa4080(0x35,0,0x3f19999a,0x3f800000,0x8000000,0x3fd77777,0x3f800000);
    iVar3 = FUN_00a81330();
    if ((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
      FUN_00aa4080(0x35,0,0x3f19999a,0x3f800000,0x8000000,0x3fd77777,0x3f800000);
    }
    iVar3 = FUN_00a81330();
    if ((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
      FUN_00aa4080(0x10,0,0x3f19999a,0x3f800000,0x8000000,0x3fd77777,0x3f800000);
    }
    param_1[0x187] = 2;
    return;
  }
LAB_004c16e7:
  iVar3 = FUN_00a8c760(0xf);
  if ((iVar3 != 0) && (param_1[0x188] == 0)) {
    if ((((param_1[0x370] & 0x1000U) != 0) || (iVar3 = FUN_004bba50(1), iVar3 != 0)) &&
       (iVar3 = FUN_004bb830(), iVar3 != -1)) {
      FUN_004beea0(iVar3);
      return;
    }
    param_1[0x188] = 1;
  }
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004c174e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 004C1750  FUN_004c1750  size=941  [between]
void __fastcall FUN_004c1750(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  if (param_1[0x187] == 0) {
    sVar2 = FUN_00dde2d0(0,2);
    iVar4 = (int)sVar2;
    if ((param_1[0x370] & 0x2000000U) != 0) {
      iVar4 = 2;
    }
    if ((param_1[0x370] & 0x4000000U) == 0) {
      if (param_1[0x476] != 0) {
        param_1[0x476] = 0;
        iVar5 = FUN_00a92f90();
        iVar3 = FUN_00e26e90();
        if (iVar3 != 0) {
          *(uint *)(iVar5 + 0x280) = *(uint *)(iVar5 + 0x280) | 1;
        }
        iVar5 = FUN_00a92f90();
        iVar3 = FUN_00e26e90();
        if (iVar3 != 0) {
          *(uint *)(iVar5 + 0x280) = *(uint *)(iVar5 + 0x280) & 0xfffffffd;
        }
      }
    }
    else {
      if (param_1[0x476] != 1) {
        param_1[0x476] = 1;
        iVar4 = FUN_00a92f90();
        iVar5 = FUN_00e26e90();
        if (iVar5 != 0) {
          *(uint *)(iVar4 + 0x280) = *(uint *)(iVar4 + 0x280) & 0xfffffffe;
        }
        iVar4 = FUN_00a92f90();
        iVar5 = FUN_00e26e90();
        if (iVar5 != 0) {
          *(uint *)(iVar4 + 0x280) = *(uint *)(iVar4 + 0x280) | 2;
        }
      }
      iVar4 = 0;
    }
    FUN_00aa4080((&DAT_0163f0ac)[iVar4 * 3],0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000)
    ;
    uVar9 = (&DAT_0163f0b0)[iVar4 * 3];
    iVar5 = FUN_00a81330();
    if ((iVar5 != 0) && (iVar5 = FUN_00a7c8a0(), iVar5 != 0)) {
      FUN_00aa4080(uVar9,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    uVar9 = (&DAT_0163f0b4)[iVar4 * 3];
    iVar4 = FUN_00a81330();
    if ((iVar4 != 0) && (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) {
      FUN_00aa4080(uVar9,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x370] = param_1[0x370] & 0xfdfffbff;
    param_1[0x250] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_004be8c0(0x3f800000,0x3f800000);
  FUN_004beaa0();
  if ((((param_1[0x2a1] != 0) && (iVar4 = FUN_00a8c760(0), iVar4 != 0)) &&
      (fVar1 = (float)param_1[0x2a4], !NAN(fVar1) && 1.0 < fVar1 != (fVar1 == 1.0))) &&
     (param_1[0x42e] != 1)) {
    FUN_004b9650(0x3e4ccccd,0x3e32b8c2);
  }
  if ((float)param_1[0x2a4] <= 2.25) {
    fVar6 = (float10)FUN_00a8ec30(param_1[0x2a1] + 0x40);
    fVar6 = (float10)FUN_00ddba30((float)((float10)(float)param_1[0x25] - fVar6));
    if (ABS(fVar6) < (float10)0.6981317) {
      uVar9 = 1;
      goto LAB_004c19e1;
    }
  }
  uVar9 = 0;
LAB_004c19e1:
  uVar8 = 0x80;
  uVar7 = 0;
  FUN_00a92f90(0,0x80,uVar9);
  FUN_00e3a1a0(uVar7,uVar8,uVar9);
  if (((param_1[0x250] == 0) && (iVar4 = FUN_00a8c760(4), iVar4 != 0)) &&
     (((param_1[0x370] & 0x1000U) != 0 || (iVar4 = FUN_004bba50(1), iVar4 != 0)))) {
    param_1[0x250] = 1;
    iVar4 = FUN_004c0fb0();
    if (iVar4 != 0) {
      if (param_1[0x476] != -1) {
        param_1[0x476] = -1;
        iVar4 = FUN_00a92f90();
        iVar5 = FUN_00e26e90();
        if (iVar5 != 0) {
          *(uint *)(iVar4 + 0x280) = *(uint *)(iVar4 + 0x280) | 1;
        }
        iVar4 = FUN_00a92f90();
        iVar5 = FUN_00e26e90();
        if (iVar5 != 0) {
          *(uint *)(iVar4 + 0x280) = *(uint *)(iVar4 + 0x280) | 2;
        }
      }
      param_1[0x370] = param_1[0x370] & 0xfbffffff;
      return;
    }
  }
  iVar4 = FUN_00a94ce0(0);
  if (iVar4 == 0) {
    return;
  }
  if (param_1[0x476] != -1) {
    param_1[0x476] = -1;
    iVar4 = FUN_00a92f90();
    iVar5 = FUN_00e26e90();
    if (iVar5 != 0) {
      *(uint *)(iVar4 + 0x280) = *(uint *)(iVar4 + 0x280) | 1;
    }
    iVar4 = FUN_00a92f90();
    iVar5 = FUN_00e26e90();
    if (iVar5 != 0) {
      *(uint *)(iVar4 + 0x280) = *(uint *)(iVar4 + 0x280) | 2;
    }
  }
  param_1[0x370] = param_1[0x370] & 0xfbffffff;
                    /* WARNING: Could not recover jumptable at 0x004c1afb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 004C1B00  FUN_004c1b00  size=675  [between]
void __fastcall FUN_004c1b00(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x32,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    iVar4 = FUN_00a81330();
    if ((iVar4 != 0) && (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) {
      FUN_00aa4080(0x32,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    iVar4 = FUN_00a81330();
    if ((iVar4 != 0) && (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) {
      FUN_00aa4080(0xd,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    if (param_1[0x476] != 0) {
      param_1[0x476] = 0;
      iVar4 = FUN_00a92f90();
      iVar3 = FUN_00e26e90();
      if (iVar3 != 0) {
        *(uint *)(iVar4 + 0x280) = *(uint *)(iVar4 + 0x280) | 1;
      }
      iVar4 = FUN_00a92f90();
      iVar3 = FUN_00e26e90();
      if (iVar3 != 0) {
        *(uint *)(iVar4 + 0x280) = *(uint *)(iVar4 + 0x280) & 0xfffffffd;
      }
    }
    param_1[0x42a] = 0;
    sVar2 = FUN_00dde2d0(2,3);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x42b] = (int)sVar2;
    param_1[0x250] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  if (((param_1[0x250] == 0) && (iVar4 = FUN_00a8c760(4), iVar4 != 0)) &&
     (((param_1[0x370] & 0x1000U) != 0 || (iVar4 = FUN_004bba50(1), iVar4 != 0)))) {
    param_1[0x250] = 1;
    iVar4 = FUN_004c0fb0();
    if (iVar4 != 0) {
      return;
    }
    fVar1 = (float)param_1[0x2a4];
    if (!NAN(fVar1) && 100.0 < fVar1 != (fVar1 == 100.0)) {
      FUN_004bf1e0();
      return;
    }
  }
  if ((float)param_1[0x2a4] <= 2.25) {
    fVar5 = (float10)FUN_00a8ec30(param_1[0x2a1] + 0x40);
    fVar5 = (float10)FUN_00ddba30((float)((float10)(float)param_1[0x25] - fVar5));
    if (ABS(fVar5) < (float10)0.6981317) {
      uVar8 = 1;
      goto LAB_004c1d09;
    }
  }
  uVar8 = 0;
LAB_004c1d09:
  uVar7 = 0x80;
  uVar6 = 0;
  FUN_00a92f90(0,0x80,uVar8);
  FUN_00e3a1a0(uVar6,uVar7,uVar8);
  if ((((param_1[0x2a1] != 0) && (iVar4 = FUN_00a8c760(0), iVar4 != 0)) &&
      (fVar1 = (float)param_1[0x2a4], !NAN(fVar1) && 1.0 < fVar1 != (fVar1 == 1.0))) &&
     (param_1[0x42e] != 1)) {
    FUN_004b9650(0x3e4ccccd,0x3e32b8c2);
  }
  FUN_004be8c0(0x3f800000,0x3f800000);
  FUN_004beaa0();
  iVar4 = FUN_00a94ce0(0);
  if (iVar4 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004c1da1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 004C1DB0  FUN_004c1db0  size=672  [between]
void __fastcall FUN_004c1db0(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  float10 fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x33,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    iVar3 = FUN_00a81330();
    if ((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
      FUN_00aa4080(0x33,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    iVar3 = FUN_00a81330();
    if ((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
      FUN_00aa4080(0xe,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    param_1[0x42a] = 0;
    if (param_1[0x476] != 0) {
      param_1[0x476] = 0;
      iVar3 = FUN_00a92f90();
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) | 1;
      }
      iVar3 = FUN_00a92f90();
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) & 0xfffffffd;
      }
    }
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x250] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_004be8c0(0x3f800000,0x3f800000);
  FUN_004beaa0();
  if ((((param_1[0x2a1] != 0) && (iVar3 = FUN_00a8c760(0), iVar3 != 0)) &&
      (fVar1 = (float)param_1[0x2a4], !NAN(fVar1) && 1.0 < fVar1 != (fVar1 == 1.0))) &&
     (param_1[0x42e] != 1)) {
    FUN_004b9650(0x3e4ccccd,0x3e32b8c2);
  }
  if ((float)param_1[0x2a4] <= 2.25) {
    fVar5 = (float10)FUN_00a8ec30(param_1[0x2a1] + 0x40);
    fVar5 = (float10)FUN_00ddba30((float)((float10)(float)param_1[0x25] - fVar5));
    if (ABS(fVar5) < (float10)0.6981317) {
      uVar8 = 1;
      goto LAB_004c1fa8;
    }
  }
  uVar8 = 0;
LAB_004c1fa8:
  uVar7 = 0x80;
  uVar6 = 0;
  FUN_00a92f90(0,0x80,uVar8);
  FUN_00e3a1a0(uVar6,uVar7,uVar8);
  if (((param_1[0x250] == 0) && (iVar3 = FUN_00a8c760(4), iVar3 != 0)) &&
     (((param_1[0x370] & 0x1000U) != 0 || (iVar3 = FUN_004bba50(1), iVar3 != 0)))) {
    param_1[0x250] = 1;
    uVar4 = FUN_00dde2d0(0,100);
    if ((uVar4 & 3) != 0) {
      iVar3 = FUN_004c0fb0();
      if (iVar3 != 0) {
        return;
      }
      fVar1 = (float)param_1[0x2a4];
      if (!NAN(fVar1) && 100.0 < fVar1 != (fVar1 == 100.0)) {
        FUN_004bf1e0();
        return;
      }
    }
  }
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004c204e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 004C2050  FUN_004c2050  size=572  [between]
void __fastcall FUN_004c2050(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x34,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    iVar3 = FUN_00a81330();
    if ((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
      FUN_00aa4080(0x34,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    iVar3 = FUN_00a81330();
    if ((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
      FUN_00aa4080(0xf,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    param_1[0x42a] = 0;
    sVar2 = FUN_00dde2d0(2,3);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x42b] = (int)sVar2;
    param_1[0x250] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_004be8c0(0x3f800000,0x3f800000);
  FUN_004beaa0();
  if ((((param_1[0x2a1] != 0) && (iVar3 = FUN_00a8c760(0), iVar3 != 0)) &&
      (fVar1 = (float)param_1[0x2a4], !NAN(fVar1) && 1.0 < fVar1 != (fVar1 == 1.0))) &&
     (param_1[0x42e] != 1)) {
    FUN_004b9650(0x3e4ccccd,0x3e32b8c2);
  }
  if (((param_1[0x250] == 0) && (iVar3 = FUN_00a8c760(4), iVar3 != 0)) &&
     (((param_1[0x370] & 0x1000U) != 0 || (iVar3 = FUN_004bba50(1), iVar3 != 0)))) {
    param_1[0x250] = 1;
    uVar4 = FUN_00dde2d0(0,100);
    if ((uVar4 & 3) != 0) {
      iVar3 = FUN_004c0fb0();
      if (iVar3 != 0) {
        return;
      }
      fVar1 = (float)param_1[0x2a4];
      if (!NAN(fVar1) && 100.0 < fVar1 != (fVar1 == 100.0)) {
        if ((param_1[0x404] == 0x50001) && (uVar4 = FUN_00dde2d0(0,100), (uVar4 & 3) != 0)) {
          FUN_004beea0(0x10002);
        }
        FUN_004bf1e0();
        return;
      }
    }
  }
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004c228a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 004C2290  FUN_004c2290  size=603  [between]
void __fastcall FUN_004c2290(int *param_1)

{
  float fVar1;
  float fVar2;
  short sVar3;
  int iVar4;
  float *pfVar5;
  undefined1 local_20 [28];
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x35,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    iVar4 = FUN_00a81330();
    if ((iVar4 != 0) && (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) {
      FUN_00aa4080(0x35,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    iVar4 = FUN_00a81330();
    if ((iVar4 != 0) && (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) {
      FUN_00aa4080(0x10,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    param_1[0x42a] = 0;
    sVar3 = FUN_00dde2d0(2,3);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x42b] = (int)sVar3;
    param_1[0x188] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_004be8c0(0x3f800000,0x3f800000);
  FUN_004beaa0();
  if (param_1[0x2a1] == 0) goto LAB_004c24cd;
  iVar4 = FUN_00a8c760(0);
  if (((iVar4 != 0) && (fVar1 = (float)param_1[0x2a4], !NAN(fVar1) && 1.0 < fVar1 != (fVar1 == 1.0))
      ) && (param_1[0x42e] != 1)) {
    FUN_004b9650(0x3dcccccd,0x3d0efa35);
  }
  if (param_1[0x188] == 0) {
    iVar4 = FUN_00a8c760(10);
    if (iVar4 == 0) goto LAB_004c24cd;
    fVar1 = (float)param_1[0x10] - *(float *)(param_1[0x2a1] + 0x40);
    fVar2 = (float)param_1[0x12] - *(float *)(param_1[0x2a1] + 0x48);
    fVar1 = (SQRT(fVar2 * fVar2 + fVar1 * fVar1) - 7.0) * 0.04;
    param_1[0x248] = (int)fVar1;
    if (fVar1 < 0.0) {
      param_1[0x248] = 0;
    }
  }
  else {
    if (param_1[0x188] != 1) goto LAB_004c24cd;
    iVar4 = FUN_00a8c760(10);
    if (iVar4 != 0) {
      pfVar5 = (float *)FUN_00a8b8a0(local_20,param_1[0x248]);
      param_1[0x14] = (int)((float)param_1[0x14] + *pfVar5);
      param_1[0x15] = (int)(pfVar5[1] + (float)param_1[0x15]);
      param_1[0x16] = (int)(pfVar5[2] + (float)param_1[0x16]);
      param_1[0x17] = (int)(pfVar5[3] + (float)param_1[0x17]);
      goto LAB_004c24cd;
    }
  }
  param_1[0x188] = param_1[0x188] + 1;
LAB_004c24cd:
  iVar4 = FUN_00a94ce0(0);
  if (iVar4 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
  return;
}

// 004C24F0  FUN_004c24f0  size=395  [between]
void __fastcall FUN_004c24f0(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x36,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    iVar3 = FUN_00a81330();
    if ((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
      FUN_00aa4080(0x36,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    iVar3 = FUN_00a81330();
    if ((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
      FUN_00aa4080(0x11,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    param_1[0x42a] = 0;
    sVar2 = FUN_00dde2d0(2,3);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x42b] = (int)sVar2;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_004be8c0(0x3f800000,0x3f800000);
  FUN_004beaa0();
  if ((((param_1[0x2a1] != 0) && (iVar3 = FUN_00a8c760(0), iVar3 != 0)) &&
      (fVar1 = (float)param_1[0x2a4], !NAN(fVar1) && 1.0 < fVar1 != (fVar1 == 1.0))) &&
     (param_1[0x42e] != 1)) {
    FUN_004b9650(0x3dcccccd,0x3d0efa35);
  }
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004c2679. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 004C2680  FUN_004c2680  size=112  [between]
void __fastcall FUN_004c2680(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  if (*(int *)(param_1 + 0x624) == 0) {
    if (*(int *)(param_1 + 0xa84) != 0) {
      iVar1 = FUN_00a8cab0();
      if (iVar1 == 0x13) {
        *(int *)(param_1 + 0x624) = *(int *)(param_1 + 0x624) + 1;
      }
    }
  }
  else if ((*(int *)(param_1 + 0x624) == 1) && (*(int *)(param_1 + 0xa84) != 0)) {
    iVar1 = FUN_00a8cab0();
    if (iVar1 != 0x13) {
      fVar2 = (float10)FUN_004b58a0();
      if ((float10)2.3561945 < fVar2) {
        iVar1 = FUN_00a8c760(4);
        if (iVar1 != 0) {
          FUN_004beea0(0x20006);
          return;
        }
      }
    }
  }
  return;
}

// 004C26F0  FUN_004c26f0  size=749  [between]
void __fastcall FUN_004c26f0(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x38,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    iVar3 = FUN_00a81330();
    if ((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
      FUN_00aa4080(0x38,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    iVar3 = FUN_00a81330();
    if ((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
      FUN_00aa4080(0x12,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    param_1[0x42a] = 0;
    sVar2 = FUN_00dde2d0(2,3);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x42b] = (int)sVar2;
    param_1[0x189] = 0;
    if (param_1[0x42e] == 1) {
      if (param_1[0x476] != 1) {
        param_1[0x476] = 1;
        iVar3 = FUN_00a92f90();
        iVar4 = FUN_00e26e90();
        if (iVar4 != 0) {
          *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) & 0xfffffffe;
        }
        iVar3 = FUN_00a92f90();
        iVar4 = FUN_00e26e90();
        if (iVar4 != 0) {
          *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) | 2;
        }
      }
    }
    else if (param_1[0x476] != 0) {
      param_1[0x476] = 0;
      iVar3 = FUN_00a92f90();
      iVar4 = FUN_00e26e90();
      if (iVar4 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) | 1;
      }
      iVar3 = FUN_00a92f90();
      iVar4 = FUN_00e26e90();
      if (iVar4 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) & 0xfffffffd;
      }
    }
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_004be8c0(0x3f800000,0x3f800000);
  FUN_004beaa0();
  if ((float)param_1[0x2a4] <= 2.25) {
    fVar5 = (float10)FUN_00a8ec30(param_1[0x2a1] + 0x40);
    fVar5 = (float10)FUN_00ddba30((float)((float10)(float)param_1[0x25] - fVar5));
    if (ABS(fVar5) < (float10)0.6981317) {
      uVar8 = 1;
      goto LAB_004c290d;
    }
  }
  uVar8 = 0;
LAB_004c290d:
  uVar7 = 0x80;
  uVar6 = 0;
  FUN_00a92f90(0,0x80,uVar8);
  FUN_00e3a1a0(uVar6,uVar7,uVar8);
  if ((((param_1[0x2a1] != 0) && (iVar3 = FUN_00a8c760(0), iVar3 != 0)) &&
      (fVar1 = (float)param_1[0x2a4], !NAN(fVar1) && 1.0 < fVar1 != (fVar1 == 1.0))) &&
     ((param_1[0x42e] != 1 && (param_1[0x189] == 0)))) {
    FUN_004b9650(0x3dcccccd,0x3d0efa35);
  }
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 == 0) {
    return;
  }
  if (param_1[0x476] != -1) {
    param_1[0x476] = -1;
    iVar3 = FUN_00a92f90();
    iVar4 = FUN_00e26e90();
    if (iVar4 != 0) {
      *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) | 1;
    }
    iVar3 = FUN_00a92f90();
    iVar4 = FUN_00e26e90();
    if (iVar4 != 0) {
      *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) | 2;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x004c29db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 004C29E0  FUN_004c29e0  size=112  [between]
void __fastcall FUN_004c29e0(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  if (*(int *)(param_1 + 0x624) == 0) {
    if (*(int *)(param_1 + 0xa84) != 0) {
      iVar1 = FUN_00a8cab0();
      if (iVar1 == 0x13) {
        *(int *)(param_1 + 0x624) = *(int *)(param_1 + 0x624) + 1;
      }
    }
  }
  else if ((*(int *)(param_1 + 0x624) == 1) && (*(int *)(param_1 + 0xa84) != 0)) {
    iVar1 = FUN_00a8cab0();
    if (iVar1 != 0x13) {
      fVar2 = (float10)FUN_004b58a0();
      if ((float10)2.3561945 < fVar2) {
        iVar1 = FUN_00a8c760(4);
        if (iVar1 != 0) {
          FUN_004beea0(0x20006);
          return;
        }
      }
    }
  }
  return;
}

// 004C2A50  FUN_004c2a50  size=1167  [between]
void __fastcall FUN_004c2a50(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  iVar3 = param_1[0x187];
  if (iVar3 == 0) {
    FUN_00aa4080(0x39,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    iVar3 = FUN_00a81330();
    if ((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
      FUN_00aa4080(0x39,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    iVar3 = FUN_00a81330();
    if ((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
      FUN_00aa4080(0x13,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    param_1[0x42a] = 0;
    sVar2 = FUN_00dde2d0(2,3);
    param_1[0x42b] = (int)sVar2;
    if (param_1[0x42e] == 1) {
      if (param_1[0x476] != 1) {
        param_1[0x476] = 1;
        iVar3 = FUN_00a92f90();
        iVar4 = FUN_00e26e90();
        if (iVar4 != 0) {
          *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) & 0xfffffffe;
        }
        iVar3 = FUN_00a92f90();
        iVar4 = FUN_00e26e90();
        if (iVar4 != 0) {
          *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) | 2;
        }
      }
    }
    else if (param_1[0x476] != 0) {
      param_1[0x476] = 0;
      iVar3 = FUN_00a92f90();
      iVar4 = FUN_00e26e90();
      if (iVar4 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) | 1;
      }
      iVar3 = FUN_00a92f90();
      iVar4 = FUN_00e26e90();
      if (iVar4 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) & 0xfffffffd;
      }
    }
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (iVar3 != 1) {
    if (iVar3 != 2) {
      return;
    }
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 == 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x004c2aaf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  FUN_004be8c0(0x3f800000,0x3f800000);
  FUN_004beaa0();
  if ((((param_1[0x2a1] != 0) && (iVar3 = FUN_00a8c760(0), iVar3 != 0)) &&
      (fVar1 = (float)param_1[0x2a4], !NAN(fVar1) && 1.0 < fVar1 != (fVar1 == 1.0))) &&
     ((param_1[0x42e] != 1 && (param_1[0x189] == 0)))) {
    FUN_004b9650(0x3dcccccd,0x3d0efa35);
  }
  if ((float)param_1[0x2a4] <= 2.25) {
    fVar5 = (float10)FUN_00a8ec30(param_1[0x2a1] + 0x40);
    fVar5 = (float10)FUN_00ddba30((float)((float10)(float)param_1[0x25] - fVar5));
    if (ABS(fVar5) < (float10)0.6981317) {
      uVar8 = 1;
      goto LAB_004c2cf4;
    }
  }
  uVar8 = 0;
LAB_004c2cf4:
  uVar7 = 0x80;
  uVar6 = 0;
  FUN_00a92f90(0,0x80,uVar8);
  FUN_00e3a1a0(uVar6,uVar7,uVar8);
  iVar3 = FUN_00a8c760(0xf);
  if (iVar3 != 0) {
    fVar5 = (float10)FUN_00a8ec30(param_1[0x2a1] + 0x40);
    fVar5 = (float10)FUN_00ddba30((float)((float10)(float)param_1[0x25] - fVar5));
    if ((((float10)1.5707964 < ABS(fVar5)) || (169.0 < (float)param_1[0x2a4])) ||
       ((float)param_1[0x2a4] < 6.7599993)) {
      if (param_1[0x476] != -1) {
        param_1[0x476] = -1;
        iVar3 = FUN_00a92f90();
        iVar4 = FUN_00e26e90();
        if (iVar4 != 0) {
          *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) | 1;
        }
        iVar3 = FUN_00a92f90();
        iVar4 = FUN_00e26e90();
        if (iVar4 != 0) {
          *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) | 2;
        }
      }
      FUN_00aa4080(5,0,0x3f088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_004be9b0(5,0,0x3f088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_004bed90(4,0,0x3f088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = 2;
      FUN_004be8c0(0x3f800000,0x3f800000);
      FUN_004beaa0();
      return;
    }
  }
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 == 0) {
    return;
  }
  if (param_1[0x476] != -1) {
    param_1[0x476] = -1;
    iVar3 = FUN_00a92f90();
    iVar4 = FUN_00e26e90();
    if (iVar4 != 0) {
      *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) | 1;
    }
    iVar3 = FUN_00a92f90();
    iVar4 = FUN_00e26e90();
    if (iVar4 != 0) {
      *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) | 2;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x004c2ed9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 004C2EE0  FUN_004c2ee0  size=679  [between]
void __fastcall FUN_004c2ee0(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  code *pcVar5;
  float10 fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x3c,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    iVar3 = FUN_00a81330();
    if ((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
      FUN_00aa4080(0x3c,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    param_1[0x42a] = 0;
    sVar2 = FUN_00dde2d0(2,3);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x42b] = (int)sVar2;
    param_1[0x188] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  iVar3 = FUN_00a81330();
  if (iVar3 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_00a7c8a0();
    if (piVar4 != (int *)0x0) {
      iVar3 = param_1[0x188];
      if (iVar3 == 0) {
        iVar3 = FUN_00a8c760(10);
        if (iVar3 != 0) {
          param_1[0x188] = param_1[0x188] + 1;
          pcVar5 = *(code **)(*piVar4 + 0x1c);
LAB_004c302c:
          (*pcVar5)();
        }
      }
      else if (iVar3 == 1) {
        iVar3 = FUN_00a8c760(10);
        if (iVar3 == 0) {
          param_1[0x188] = param_1[0x188] + 1;
        }
      }
      else if ((iVar3 == 2) && (iVar3 = FUN_00a8c760(10), iVar3 != 0)) {
        param_1[0x188] = param_1[0x188] + 1;
        pcVar5 = *(code **)(*piVar4 + 0x20);
        goto LAB_004c302c;
      }
    }
  }
  if (2.25 < (float)param_1[0x2a4]) {
LAB_004c3078:
    uVar9 = 0;
  }
  else {
    fVar6 = (float10)FUN_00a8ec30(param_1[0x2a1] + 0x40);
    fVar6 = (float10)FUN_00ddba30((float)((float10)(float)param_1[0x25] - fVar6));
    if ((float10)0.6981317 <= ABS(fVar6)) goto LAB_004c3078;
    uVar9 = 1;
  }
  uVar8 = 0x80;
  uVar7 = 0;
  FUN_00a92f90(0,0x80,uVar9);
  FUN_00e3a1a0(uVar7,uVar8,uVar9);
  fVar1 = (float)param_1[0x2a4];
  if (NAN(fVar1) || 49.0 < fVar1 == (fVar1 == 49.0)) {
    fVar6 = (float10)FUN_00a8ec30(param_1[0x2a1] + 0x40);
    fVar6 = (float10)FUN_00ddba30((float)((float10)(float)param_1[0x25] - fVar6));
    if ((ABS(fVar6) <= (float10)2.3561945) && (iVar3 = FUN_004b8a30(), iVar3 != 0))
    goto LAB_004c3108;
  }
  iVar3 = FUN_00a8c760(0xf);
  if (iVar3 != 0) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0x20))();
    }
                    /* WARNING: Could not recover jumptable at 0x004c3106. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
LAB_004c3108:
  FUN_004be8c0(0x3f800000,0x3f800000);
  if ((((param_1[0x2a1] != 0) && (iVar3 = FUN_00a8c760(0), iVar3 != 0)) &&
      (fVar1 = (float)param_1[0x2a4], !NAN(fVar1) && 1.0 < fVar1 != (fVar1 == 1.0))) &&
     (param_1[0x42e] != 1)) {
    FUN_004b9650(0x3dcccccd,0x3d0efa35);
  }
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004c3185. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 004C3190  FUN_004c3190  size=2298  [between]
/* WARNING: Removing unreachable block (ram,0x004c36d7) */

void __fastcall FUN_004c3190(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  if (((param_1[0x370] & 0x2000U) != 0) && (param_1[0x187] != 6)) {
    FUN_00aa4080(0x41,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    iVar5 = FUN_00a81330();
    if ((iVar5 != 0) && (iVar5 = FUN_00a7c8a0(), iVar5 != 0)) {
      FUN_00aa4080(0x41,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    iVar5 = (**(code **)(*param_1 + 0x84))();
    fVar7 = (float10)FUN_00ddba30(*(float *)(iVar5 + 4) + 3.1415927);
    param_1[0x25] = (int)(float)fVar7;
    (**(code **)(*param_1 + 0x220))(0x42700000);
    param_1[0x187] = 6;
  }
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x3e,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_004be9b0(0x3e,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_004bed90(4,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x464] = 0;
    RayCastManager::getWork(param_1 + 0x458);
    if (param_1[0x42e] == 0) {
      sVar4 = FUN_00dde2d0(2,3);
      param_1[0x250] = (int)sVar4;
    }
    else {
      sVar4 = FUN_00dde2d0(3,5);
      param_1[0x250] = (int)sVar4;
    }
    param_1[599] = 0;
    param_1[0x256] = 0;
    if (param_1[0x42e] == 0) {
      FUN_004b57c0(0);
    }
    else if ((param_1[0x42e] == 2) && (param_1[0x476] != 1)) {
      param_1[0x476] = 1;
      iVar5 = FUN_00a92f90();
      iVar6 = FUN_00e26e90();
      if (iVar6 != 0) {
        *(uint *)(iVar5 + 0x280) = *(uint *)(iVar5 + 0x280) & 0xfffffffe;
      }
      iVar5 = FUN_00a92f90();
      iVar6 = FUN_00e26e90();
      if (iVar6 != 0) {
        *(uint *)(iVar5 + 0x280) = *(uint *)(iVar5 + 0x280) | 2;
      }
    }
    iVar5 = FUN_004b9b10();
    if (iVar5 == 0) {
      param_1[600] = param_1[0x10];
      param_1[0x259] = param_1[0x11];
      param_1[0x25a] = param_1[0x12];
      param_1[0x25b] = param_1[0x13];
    }
    else {
      FUN_00c9fdd0(&iStack_c);
      param_1[600] = iStack_c;
      param_1[0x259] = iStack_8;
      param_1[0x25a] = iStack_4;
      param_1[0x25b] = 0x3f800000;
    }
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x259] = param_1[0x11];
  case 1:
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      FUN_00aa4080(0x3f,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_004be9b0(0x3f,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_004be8c0(0x3f800000,0x3f800000);
      FUN_004beaa0();
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    iVar5 = FUN_00a8c760(0);
    if (iVar5 != 0) {
      FUN_004b9650(0x3e75c28f,0x3db2b8c2);
    }
    iVar5 = FUN_00a8c760(3);
    if (iVar5 != 0) {
      FUN_004b9380(0xd);
    }
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      FUN_00aa4080(0x40,0,0,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_004be9b0(0x40,0,0,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_004be8c0(0x3f800000,0x3f800000);
      FUN_004beaa0();
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 3:
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      param_1[0x256] = param_1[0x256] + 1;
    }
    iVar5 = FUN_004c1120(param_1 + 0x458);
    if ((iVar5 != 0) || (2 < param_1[0x256])) {
      param_1[0x256] = 0;
      param_1[0x187] = 4;
      param_1[0x251] = 0;
      fVar7 = (float10)FUN_00a8ec30(param_1[0x2a1] + 0x40);
      param_1[0x24a] = (int)(float)fVar7;
      iVar5 = param_1[0x2a1];
      fVar1 = *(float *)(iVar5 + 0x40);
      fVar2 = *(float *)(iVar5 + 0x44);
      fVar3 = *(float *)(iVar5 + 0x48);
      param_1[599] = 1;
      if ((fVar3 - (float)param_1[0x12]) * (float)param_1[0x46a] +
          (float)param_1[0x469] * (fVar2 - (float)param_1[0x11]) +
          (float)param_1[0x468] * (fVar1 - (float)param_1[0x10]) < 0.6) {
        param_1[0x24f] =
             (int)(((float)param_1[0x25a] - (float)param_1[0x12]) *
                   ((float)param_1[0x25a] - (float)param_1[0x12]) +
                  ((float)param_1[600] - (float)param_1[0x10]) *
                  ((float)param_1[600] - (float)param_1[0x10]));
        DAT_01dd0814 = DAT_01dd0814 * 0x19660d + 0x3c6ef35f;
        fVar7 = (float10)(DAT_01dd0814 >> 8) * (float10)5.960465e-08;
        fVar8 = (float10)fpatan((float10)(float)param_1[0x468],(float10)(float)param_1[0x46a]);
        fVar7 = (float10)FUN_00ddba30((float)(((float10)1 - (fVar7 + fVar7)) * (float10)0.5235988 +
                                             fVar8));
        param_1[0x24a] = (int)(float)fVar7;
      }
      if ((param_1[0x250] <= param_1[0x464]) || ((param_1[0x370] & 0x1000U) != 0)) {
        uVar11 = 1;
        uVar10 = 0x8000000;
        uVar9 = 0;
        FUN_00a92f90(0,0x8000000,1);
        FUN_00e3a1a0(uVar9,uVar10,uVar11);
        param_1[0x251] = 0;
        param_1[0x187] = 5;
        return;
      }
    }
    break;
  case 4:
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    iVar5 = FUN_00a8c760(0);
    if (iVar5 == 0) {
      if (0 < param_1[0x251]) {
        param_1[0x464] = param_1[0x464] + 1;
        param_1[0x187] = 3;
        return;
      }
    }
    else {
      param_1[0x251] = param_1[0x251] + 1;
      FUN_004b9650(0x3ecccccd,0x3fc90fdb);
    }
    break;
  case 5:
    fVar1 = (float)param_1[600] - (float)param_1[0x10];
    fVar1 = ((float)param_1[0x25a] - (float)param_1[0x12]) *
            ((float)param_1[0x25a] - (float)param_1[0x12]) + fVar1 * fVar1;
    iVar5 = FUN_00a8c760(0);
    if ((iVar5 != 0) && (20.25 < fVar1)) {
      FUN_004b94a0(param_1 + 600,0x3ecccccd,0x3fc90fdb);
    }
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      if ((fVar1 < 25.0) ||
         (((param_1[0x251] != 0 && ((float)param_1[0x24f] < fVar1)) || (2 < param_1[0x251])))) {
        param_1[0x24f] = (int)fVar1;
        fVar7 = (float10)FUN_004b58a0();
        if (((float10)1.5707964 <= fVar7) || ((float)param_1[0x2a4] <= 64.0)) {
          FUN_00aa4080(0x41,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
          uVar9 = 0x41;
        }
        else {
          FUN_00aa4080(0x42,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
          uVar9 = 0x42;
        }
        FUN_004be9b0(uVar9,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        FUN_004be8c0(0x3f800000,0x3f800000);
        FUN_004beaa0();
        param_1[0x187] = 6;
      }
      else {
        FUN_00aa4080(0x40,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        FUN_004be9b0(0x40,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      }
      if (param_1[0x251] != 0) {
        param_1[0x24f] = (int)fVar1;
      }
      param_1[0x251] = param_1[0x251] + 1;
      return;
    }
    break;
  case 6:
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      if (param_1[0x476] != -1) {
        param_1[0x476] = -1;
        iVar5 = FUN_00a92f90();
        iVar6 = FUN_00e26e90();
        if (iVar6 != 0) {
          *(uint *)(iVar5 + 0x280) = *(uint *)(iVar5 + 0x280) | 1;
        }
        iVar5 = FUN_00a92f90();
        iVar6 = FUN_00e26e90();
        if (iVar6 != 0) {
          *(uint *)(iVar5 + 0x280) = *(uint *)(iVar5 + 0x280) | 2;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x004c3a88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 004C3AB0  FUN_004c3ab0  size=834  [between]
void __fastcall FUN_004c3ab0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = param_1[0x187];
  if (iVar1 == 0) {
    if ((float)param_1[0x2a4] <= 36.0) {
      FUN_00aa4080(0xc,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_004be9b0(0xc,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_004bed90(8,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = 1;
      FUN_004be8c0(0x3f800000,0x3f800000);
      FUN_004beaa0();
      return;
    }
    FUN_00aa4080(0x43,0,0x3e4ccccd,0x3f800000,0x8000400,0xbf800000,0x3f800000);
    FUN_004be9b0(0x43,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_004bed90(0x29,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    iVar1 = FUN_004ba3a0(0x43,0);
    if (iVar1 != 0) {
      uVar3 = 0;
      uVar2 = FUN_00a95df0(0);
      FUN_00a92f90(iVar1,uVar2,uVar3);
      FUN_004b4c90(iVar1,uVar2,uVar3);
    }
    param_1[0x187] = 2;
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    return;
  }
  if (iVar1 == 1) {
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_00aa4080(0x43,0,0x3e4ccccd,0x3f800000,0x8000400,0xbf800000,0x3f800000);
      FUN_004be9b0(0x43,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_004bed90(0x29,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      iVar1 = FUN_004ba3a0(0x43,0);
      if (iVar1 != 0) {
        uVar3 = 0;
        uVar2 = FUN_00a95df0(0);
        FUN_00a92f90(iVar1,uVar2,uVar3);
        FUN_004b4c90(iVar1,uVar2,uVar3);
      }
      param_1[0x187] = 2;
      FUN_004be8c0(0x3f800000,0x3f800000);
      FUN_004beaa0();
      return;
    }
  }
  else if (iVar1 == 2) {
    iVar1 = FUN_00a8c760(0);
    if (iVar1 != 0) {
      FUN_004b94a0(param_1[0x2a1] + 0x40,0x3df5c28f,0x3d567750);
    }
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x004c3b37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 004C3E00  FUN_004c3e00  size=931  [between]
void __fastcall FUN_004c3e00(int *param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  undefined4 local_4;
  
  if (param_1[0x187] == 0) {
    local_4 = 0xbf800000;
    param_1[0x188] = param_1[0x477];
    if (param_1[0x477] < 0) {
      sVar2 = FUN_00dde2d0(0,2);
      param_1[0x188] = (int)sVar2;
    }
    iVar4 = param_1[0x188];
    if (iVar4 == 0) {
      local_4 = 0x3f6aaaab;
      FUN_00aa4080(0x32,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_004be9b0(0x32,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_004bed90(0xd,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    else if (iVar4 == 1) {
      local_4 = 0x3f155555;
      FUN_00aa4080(0x33,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_004be9b0(0x33,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_004bed90(0xe,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    else if (iVar4 == 2) {
      local_4 = 0x3f555555;
      FUN_00aa4080(0x2e,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_004be9b0(0x2e,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_004bed90(0xc,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    param_1[0x477] = -1;
    if (param_1[0x476] != 1) {
      param_1[0x476] = 1;
      iVar4 = FUN_00a92f90();
      iVar3 = FUN_00e26e90();
      if (iVar3 != 0) {
        *(uint *)(iVar4 + 0x280) = *(uint *)(iVar4 + 0x280) & 0xfffffffe;
      }
      iVar4 = FUN_00a92f90();
      iVar3 = FUN_00e26e90();
      if (iVar3 != 0) {
        *(uint *)(iVar4 + 0x280) = *(uint *)(iVar4 + 0x280) | 2;
      }
    }
    FUN_00a92f90();
    iVar4 = FUN_00e26e90();
    if (iVar4 != 0) {
      Animation::Motion::Unit::setCurrentTime(0,local_4);
    }
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_004be8c0(0x3f800000,0x3f800000);
  FUN_004beaa0();
  iVar4 = FUN_00a8c760(0);
  if (iVar4 != 0) {
    FUN_004b94a0(param_1[0x2a1] + 0x40,0x3df5c28f,0x3d567750);
  }
  fVar1 = (float)param_1[0x2a4];
  if (NAN(fVar1) || 49.0 < fVar1 == (fVar1 == 49.0)) {
    fVar5 = (float10)FUN_00a8ec30(param_1[0x2a1] + 0x40);
    fVar5 = (float10)FUN_00ddba30((float)((float10)(float)param_1[0x25] - fVar5));
    if (ABS(fVar5) <= (float10)2.3561945) goto LAB_004c4182;
  }
  iVar4 = FUN_00a8c760(0xf);
  if (iVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x004c4180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
LAB_004c4182:
  iVar4 = FUN_00a94ce0(0);
  if (iVar4 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004c41a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 004C41B0  FUN_004c41b0  size=307  [between]
void __thiscall FUN_004c41b0(int param_1,int param_2)

{
  int *piVar1;
  float10 fVar2;
  int iVar3;
  float10 fVar4;
  
  iVar3 = FUN_004bbc30(param_2);
  piVar1 = (int *)(param_1 + 0x1120);
  *piVar1 = *piVar1 - iVar3;
  if (*piVar1 < 0) {
    *(undefined4 *)(param_1 + 0x1120) = 0;
  }
  if ((*(int *)(param_1 + 0x1124) == 0) ||
     ((float10)*(int *)(param_1 + 0x1120) / (float10)*(int *)(param_1 + 0x1124) <= (float10)0)) {
    FUN_004b91b0(0,1);
  }
  fVar4 = (float10)FUN_00ddba30(*(float *)(param_2 + 0x30) - *(float *)(param_1 + 0x94));
  fVar2 = (float10)0;
  if (((fVar4 <= fVar2) && (0 < *(int *)(param_1 + 0x1128))) || (*(int *)(param_1 + 0x1130) < 1)) {
    piVar1 = (int *)(param_1 + 0x1128);
    *piVar1 = *piVar1 - iVar3;
    if (*piVar1 < 0) {
      *(undefined4 *)(param_1 + 0x1128) = 0;
    }
    if (*(int *)(param_1 + 0x112c) == 0) {
      FUN_004b91b0(1,1);
    }
    else {
      fVar4 = (float10)*(int *)(param_1 + 0x1128) / (float10)*(int *)(param_1 + 0x112c);
      if (fVar4 < fVar2 != (fVar4 == fVar2)) {
        FUN_004b91b0(1,1);
        return;
      }
    }
  }
  else {
    piVar1 = (int *)(param_1 + 0x1130);
    *piVar1 = *piVar1 - iVar3;
    if (*piVar1 < 0) {
      *(undefined4 *)(param_1 + 0x1130) = 0;
    }
    if (*(int *)(param_1 + 0x1134) == 0) {
      FUN_004b91b0(2,1);
      return;
    }
    fVar4 = (float10)*(int *)(param_1 + 0x1130) / (float10)*(int *)(param_1 + 0x1134);
    if (fVar4 < fVar2 != (fVar4 == fVar2)) {
      FUN_004b91b0(2,1);
      return;
    }
  }
  return;
}

// 004C4340  Em0110::vf19C  size=179  [class]
void __thiscall Em0110::vf19C(int *param_1,int param_2,undefined4 param_3)

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
    return;
  }
  (**(code **)(*param_1 + 0x1a8))(param_2,param_3,param_1);
  return;
}

// 004C4400  FUN_004c4400  size=892  [between]
undefined4 __thiscall FUN_004c4400(int *param_1,int param_2,undefined4 *param_3,uint *param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  
  param_1[0x22a] = param_1[0x41c];
  *param_3 = 0;
  uVar5 = 0xffffffff;
  *param_4 = 0;
  if ((*(byte *)(param_1 + 0x370) & 2) == 0) {
    iVar2 = FUN_00a8c760(0x10);
    if (iVar2 != 0) goto LAB_004c45ae;
    iVar2 = FUN_004bbd40();
    if (iVar2 != 0) goto LAB_004c45ae;
    if ((param_1[0x370] & 0x200U) == 0) {
      if ((*(uint *)(param_2 + 0x90) & 0x800000) == 0) {
        if ((*(uint *)(param_2 + 0x90) & 0x1000000) == 0) {
LAB_004c44e5:
          if ((*(uint *)(param_2 + 0x90) & 0x2000000) == 0) {
            bVar1 = *(byte *)(param_2 + 0x11);
            if (bVar1 < 10) {
              if (bVar1 < 7) {
                if (2 < bVar1) {
                  uVar5 = 0xffffffff;
                }
              }
              else {
                uVar5 = 0x30002;
              }
            }
            else {
              uVar5 = 0x30001;
            }
            iVar2 = FUN_004b62b0(uVar5);
          }
          else {
            iVar2 = 0x30000;
          }
        }
        else {
          iVar2 = (**(code **)(*param_1 + 0x1d8))();
          if (iVar2 == 0) {
            iVar2 = FUN_00a8c760(6);
            if (iVar2 == 0) goto LAB_004c44e5;
          }
          iVar2 = 0x30005;
        }
      }
      else {
        iVar2 = 0x30004;
        *param_4 = 0x800;
      }
      iVar3 = (**(code **)(*param_1 + 0x1d8))();
      if (iVar3 != 0) {
        if ((iVar2 < 0x30001) || (0x30002 < iVar2)) {
          (**(code **)(*param_1 + 0x314))();
          if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
            *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
          }
        }
        else {
          iVar2 = 0x30006;
        }
        if (*(int *)(param_2 + 0xec) != 0) {
          iVar2 = -1;
        }
      }
      if ((param_1[0x370] & 0x80000000U) != 0) {
        if ((iVar2 < 0x30001) || (0x30002 < iVar2)) {
          if (iVar2 != 0x1000f) {
            FUN_004bbfa0();
          }
        }
        else {
          iVar2 = 0x1000f;
        }
      }
    }
    else if ((*(uint *)(param_2 + 0x90) & 0x800000) == 0) {
      iVar2 = (-(uint)(*(byte *)(param_2 + 0x11) < 10) & 0xfffcffff) + 0x30000;
    }
    else {
      iVar2 = 0x30004;
      *param_4 = 0x800;
    }
  }
  else {
LAB_004c45ae:
    iVar2 = -1;
    *param_4 = *param_4 | 0x400;
  }
  if (param_1[0x128] == 1) {
    iVar3 = FUN_00a8eea0();
    if ((iVar3 < 1) && (param_1[0x139] == 0)) {
      param_1[0x139] = 1;
      FUN_004beea0(0x3000e);
      *param_4 = 0x81;
      return 1;
    }
  }
  iVar3 = FUN_004bbd40();
  if (((iVar3 == 0) && (param_1[0x4a9] == 0)) &&
     (((iVar2 == -1 || (iVar2 == 0x30002)) || (iVar2 == 0x30001)))) {
    if ((*(uint *)(param_2 + 0x8c) & 0x20000) == 0) {
      if ((*(uint *)(param_2 + 0x8c) & 0x20) == 0) goto LAB_004c4644;
      iVar2 = 0x3000c;
    }
    else {
      iVar2 = 0x3000b;
    }
  }
  else {
LAB_004c4644:
    if (iVar2 == -1) {
      if (*(int *)(param_2 + 0xec) == 0) {
        uVar4 = FUN_00a8cab0();
        if ((((uVar4 & 0xffff0000) != 0x50000) && (param_1[0x186] != 0xe000b)) &&
           (param_1[0x186] != 0xe000a)) {
          FUN_00aa4080(0x6d,1,0,0x3f800000,0x8000010,0xbf800000,0x3f800000);
          FUN_004be9b0(0x6d,1,0,0x3f800000,0x8000010,0xbf800000,0x3f800000);
        }
      }
      *param_4 = 0x400;
      return 0;
    }
  }
  uVar4 = FUN_00a8cab0();
  if ((uVar4 & 0xffff0000) == 0x20000) {
    param_1[0x432] = param_1[0x4b4];
  }
  else {
    iVar3 = FUN_00a81330();
    if (iVar3 != 0) {
      iVar3 = FUN_00a7c8a0();
      if ((iVar3 != 0) && ((*(uint *)(iVar3 + 0x4c0) & 1) != 0)) {
        uVar4 = FUN_00a8cab0();
        if ((uVar4 & 0xffff0000) != 0x30000) {
          param_1[0x432] = 0;
        }
        goto LAB_004c46be;
      }
    }
    param_1[0x432] = param_1[0x4b5];
  }
LAB_004c46be:
  FUN_004beea0(iVar2);
  FUN_004bbbc0();
  return 1;
}

// 004C4780  FUN_004c4780  size=71  [between]
undefined4 __thiscall FUN_004c4780(int *param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  *param_3 = 0;
  param_1[0x416] = param_1[0x416] + 1;
  if ((3 < param_1[0x416]) || (9 < *(byte *)(param_2 + 0x11))) {
    (**(code **)(*param_1 + 0x1f8))(1);
    FUN_004beea0(0x60006);
    uVar1 = 1;
  }
  return uVar1;
}

// 004C47D0  FUN_004c47d0  size=80  [between]
bool __thiscall FUN_004c47d0(int param_1,int *param_2)

{
  int iVar1;
  int extraout_ECX;
  
  if ((((param_2[0x24] & 0x8000U) == 0) && (*param_2 != 0x57)) && (*param_2 != 0x55)) {
    *(int *)(param_1 + 0x1068) = *(int *)(param_1 + 0x1068) + param_2[1];
    iVar1 = FUN_004bbf10();
    if (iVar1 < *(int *)(extraout_ECX + 0x1068)) {
      return true;
    }
    return *param_2 == 0x4f;
  }
  return false;
}

// 004C4820  FUN_004c4820  size=64  [between]
void __fastcall FUN_004c4820(int *param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*param_1 + 0x314);
  param_1[0x431] = 0;
  (*pcVar1)();
  if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
    *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
  }
  FUN_004beea0(0x40001);
  return;
}

// 004C4860  FUN_004c4860  size=64  [between]
void __fastcall FUN_004c4860(int param_1)

{
  if ((*(uint *)(param_1 + 0xdc0) & 0x80000000) == 0) {
    *(uint *)(param_1 + 0xdc0) = *(uint *)(param_1 + 0xdc0) | 0x80000000;
    *(undefined4 *)(param_1 + 0x11fc) = *(undefined4 *)(param_1 + 0x12fc);
    *(undefined4 *)(param_1 + 0x1204) = *(undefined4 *)(param_1 + 0x1300);
    *(undefined4 *)(param_1 + 0x1200) = 0;
    FUN_004beea0(0x1000f);
  }
  return;
}

// 004C48A0  FUN_004c48a0  size=829  [between]
void __fastcall FUN_004c48a0(int *param_1)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  float10 fVar4;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x57,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_004be9b0(0x57,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    iVar3 = FUN_00a81330();
    if ((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
      FUN_00aa3f60(4);
    }
    pcVar2 = *(code **)(*param_1 + 0x1f8);
    param_1[0x248] = 0x3f800000;
    param_1[0x187] = param_1[0x187] + 1;
    (*pcVar2)(1);
    param_1[0x25] = param_1[0x41d];
    param_1[0x416] = 0;
    param_1[0x417] = 0;
    param_1[0x370] = param_1[0x370] | 2;
    goto LAB_004c497e;
  case 1:
LAB_004c497e:
    FUN_00a92f90();
    iVar3 = FUN_00e26e90();
    if (iVar3 == 0) {
      fVar4 = (float10)-1.0;
    }
    else {
      fVar4 = (float10)FUN_00e36970(0);
    }
    fVar1 = (float)fVar4;
    iVar3 = FUN_00a8e520();
    if ((iVar3 == 0) || (NAN(fVar1) || 0.05 < fVar1 == (fVar1 == 0.05))) {
      iVar3 = 0x3f800000;
    }
    else {
      fVar1 = (float)param_1[0x248];
      param_1[0x248] = (int)(fVar1 * 0.925);
      if (0.1 <= fVar1 * 0.925) {
        iVar3 = param_1[0x248];
      }
      else {
        param_1[0x248] = 0x3dcccccd;
        iVar3 = param_1[0x248];
      }
    }
    FUN_00a96030(0,iVar3);
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      (**(code **)(*param_1 + 0x1d4))(0);
      iVar3 = (**(code **)(*param_1 + 800))(0x3d888889);
      if (iVar3 == 0) {
        FUN_00aa4080(0x58,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        FUN_004be9b0(0x58,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        param_1[0x187] = 3;
        return;
      }
      FUN_00aa4080(0x5f,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_004be9b0(0x5f,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = 4;
      return;
    }
    break;
  case 2:
    break;
  case 3:
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_00aa4080(0x5f,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_004be9b0(0x5f,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 4:
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x004c4bd6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 004C4C00  FUN_004c4c00  size=810  [between]
void __fastcall FUN_004c4c00(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  float10 fVar5;
  undefined4 local_18 [6];
  
  local_18[2] = 0x5b;
  local_18[5] = 0x5b;
  local_18[0] = 0x59;
  local_18[1] = 0x5a;
  local_18[3] = 0x59;
  local_18[4] = 0x5a;
  if (param_1[0x187] == 0) {
    param_1[0x250] = 0;
    if (1.5707964 <= ABS((float)param_1[0x245])) {
      uVar4 = FUN_00dde2d0(0,100);
      uVar4 = uVar4 & 1;
    }
    else {
      param_1[0x250] = 1;
      uVar4 = 2;
    }
    if (((param_1[0x404] == param_1[0x186]) && (param_1[0x250] != 1)) && (param_1[0x407] == uVar4))
    {
      uVar4 = uVar4 ^ 1;
    }
    FUN_00aa4080(local_18[uVar4],0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    uVar1 = local_18[uVar4 + 3];
    iVar3 = FUN_00a81330();
    if ((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
      FUN_00aa4080(uVar1,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    iVar3 = FUN_00a81330();
    if ((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
      FUN_00aa3f60(4);
    }
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x24f] = 0x41700000;
    param_1[0x407] = uVar4;
    param_1[0x188] = 0;
    param_1[0x24e] = 0x40a00000;
    param_1[0x24d] = 0x3f800000;
    param_1[0x24c] = 0x3f800000;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  fVar5 = (float10)FUN_004b63e0(param_1 + 0x24f,param_1 + 0x24e,param_1 + 0x24d,param_1 + 0x24c);
  FUN_00a96030(0,(float)fVar5);
  iVar3 = FUN_00a81330();
  if (((((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) &&
       ((*(uint *)(iVar3 + 0x4c0) & 1) != 0)) &&
      ((param_1[0x250] == 1 && (iVar3 = FUN_00a952e0(0,0x42480000), iVar3 != 0)))) &&
     (fVar5 = (float10)FUN_00dde300(0,0x3f800000),
     fVar5 < (float10)(float)param_1[0x44f] * (float10)0.5)) {
    FUN_004beea0(0x20006);
    return;
  }
  if (param_1[0x188] < 2) {
    iVar3 = param_1[0x432];
    if (iVar3 == 0) {
      iVar3 = 4;
    }
    iVar2 = param_1[0x431];
    if ((iVar3 < iVar2) && ((param_1[0x370] & 0x80000000U) == 0)) {
      fVar5 = (float10)FUN_00dde300(0,0x3f800000);
      if (fVar5 < (float10)((float)iVar2 * 0.1)) {
        param_1[0x431] = 0;
        if (param_1[0x42e] != 1) {
          FUN_004beea0(0x3000a);
          return;
        }
        FUN_004beea0(0x50001);
        return;
      }
      param_1[0x188] = param_1[0x188] + 1;
    }
  }
  FUN_004be8c0(0x3f800000,0x3f800000);
  FUN_004beaa0();
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004c4f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 004C4F30  FUN_004c4f30  size=640  [between]
void __fastcall FUN_004c4f30(int *param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  float10 fVar4;
  float local_10 [4];
  
  local_10[1] = 1.31722e-43;
  local_10[3] = 1.31722e-43;
  local_10[0] = 1.30321e-43;
  local_10[2] = 1.30321e-43;
  if (param_1[0x187] == 0) {
    if (1.5707964 <= ABS((float)param_1[0x245])) {
      uVar3 = FUN_00dde2d0(0,100);
      uVar3 = uVar3 & 1;
    }
    else {
      uVar3 = 1;
      param_1[0x250] = 1;
    }
    if (((param_1[0x404] == param_1[0x186]) && (param_1[0x250] != 1)) && (param_1[0x407] == uVar3))
    {
      uVar3 = uVar3 ^ 1;
    }
    FUN_00aa4080(local_10[uVar3],0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    fVar1 = local_10[uVar3 + 2];
    iVar2 = FUN_00a81330();
    if ((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
      FUN_00aa4080(fVar1,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    iVar2 = FUN_00a81330();
    if ((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
      FUN_00aa3f60(4);
    }
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x24f] = 0x41700000;
    param_1[0x407] = uVar3;
    param_1[0x188] = 0;
    param_1[0x24e] = 0x40a00000;
    param_1[0x24d] = 0x3f800000;
    param_1[0x24c] = 0x3f800000;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  fVar4 = (float10)FUN_004b63e0(param_1 + 0x24f,param_1 + 0x24e,param_1 + 0x24d,param_1 + 0x24c);
  FUN_00a96030(0,(float)fVar4);
  if (param_1[0x188] < 2) {
    iVar2 = param_1[0x432];
    if (iVar2 == 0) {
      iVar2 = 4;
    }
    local_10[0] = (float)param_1[0x431];
    if ((iVar2 < (int)local_10[0]) && ((param_1[0x370] & 0x80000000U) == 0)) {
      local_10[0] = (float)(int)local_10[0] * 0.1;
      fVar4 = (float10)FUN_00dde300(0,0x3f800000);
      if (fVar4 < (float10)local_10[0]) {
        if (param_1[0x42e] == 1) {
          FUN_004beea0(0x50001);
          return;
        }
        FUN_004beea0(0x3000a);
        return;
      }
      param_1[0x188] = param_1[0x188] + 1;
    }
  }
  FUN_004be8c0(0x3f800000,0x3f800000);
  FUN_004beaa0();
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004c51ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 004C51B0  FUN_004c51b0  size=827  [between]
void __fastcall FUN_004c51b0(int *param_1)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [92];
  
  iVar4 = 0;
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    iVar4 = FUN_00a7c8a0();
  }
  if (param_1[0x187] == 0) {
    switchD_0080dbae::default();
    local_90 = *(float *)(iVar4 + 0x40);
    local_88 = *(float *)(iVar4 + 0x48);
    local_a0 = 0.0;
    local_9c = 0.0;
    local_98 = 3.0;
    if (param_1[0x42b] <= param_1[0x42a]) {
      local_98 = 1.5;
    }
    D3DXVec3TransformNormal(&local_a0,&local_a0,param_1 + 4);
    local_a0 = (float)param_1[0x10] + local_a0;
    local_9c = (float)param_1[0x11] + local_9c;
    param_1[0x187] = param_1[0x187] + 1;
    local_98 = (float)param_1[0x12] + local_98;
    param_1[0x188] = 0;
    param_1[0x14] = (int)((float)param_1[0x14] + (local_90 - local_a0));
    param_1[0x16] = (int)((local_88 - local_98) + (float)param_1[0x16]);
    param_1[0x248] = 0x40400000;
    RayCastManager::getWork(param_1 + 0x458);
    if ((param_1[0x42e] == 1) && (param_1[0x42a] < param_1[0x42b])) {
      fStack_80 = (float)param_1[0x10];
      fStack_78 = (float)param_1[0x12];
      fStack_74 = (float)param_1[0x13];
      fStack_7c = (float)param_1[0x11] + 0.1;
      pfVar3 = (float *)FUN_00a8b8a0(auStack_70,0x40000000);
      local_90 = fStack_80 - *pfVar3;
      fStack_8c = fStack_7c - pfVar3[1];
      local_88 = fStack_78 - pfVar3[2];
      fStack_84 = fStack_74 - pfVar3[3];
      iVar2 = FUN_009f8b40();
      FUN_00468970(param_1 + 0x458,0,&fStack_80,&local_90,iVar2 << 0x10 | 7,0,0,0,
                   "em0110_back_check",0,0);
      HavokRayCastManager::set(auStack_60);
      FUN_004be8c0(0x3f800000,0x3f800000);
      FUN_004beaa0();
      return;
    }
    if (param_1[0x42b] <= param_1[0x42a]) {
      FUN_004beea0(0x40002);
      return;
    }
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_004be8c0(0x3f800000,0x3f800000);
  FUN_004beaa0();
  if ((((param_1[0x458] != 0) && (param_1[0x42e] == 1)) && (param_1[0x42a] < param_1[0x42b])) &&
     (param_1[0x188] == 0)) {
    param_1[0x188] = 2;
    iVar2 = FUN_00907560(param_1 + 0x458,0,0,0,0,0,0,0);
    if (iVar2 != 0) {
      param_1[0x188] = 1;
    }
    RayCastManager::getWork(param_1 + 0x458);
  }
  fVar1 = (float)param_1[0x248];
  param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
  if ((fVar1 - (float)param_1[0x244] < 0.0) && (param_1[0x42a] < param_1[0x42b])) {
    param_1[0x42a] = param_1[0x42a] + 1;
    if ((param_1[0x42e] == 1) && (param_1[0x188] == 1)) {
      param_1[0x370] = param_1[0x370] | 0x400;
      FUN_004beea0(0x50001);
      return;
    }
    param_1[0x370] = param_1[0x370] | 0x400;
    FUN_004beea0(0x50000);
    return;
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
  return;
}

// 004C54F0  FUN_004c54f0  size=864  [between]
void __fastcall FUN_004c54f0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  
  switch(param_1[0x187]) {
  case 0:
    if (param_1[0x476] != 0) {
      param_1[0x476] = 0;
      iVar3 = FUN_00a92f90();
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) | 1;
      }
      iVar3 = FUN_00a92f90();
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) & 0xfffffffd;
      }
    }
    FUN_00aa4080(0x61,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_004be9b0(0x61,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_004bed60(4);
    param_1[0x22a] = (int)((float)param_1[0x41c] * 0.5);
    FUN_00a92f90();
    iVar3 = FUN_00e26e90();
    if (iVar3 == 0) {
      fVar4 = (float10)-1.0;
    }
    else {
      fVar4 = (float10)FUN_00e36a50(0);
    }
    pcVar1 = *(code **)(*param_1 + 0x1d4);
    param_1[0x225] =
         (int)(float)(fVar4 * (float10)(float)param_1[0x22a] * (float10)60.0 * (float10)0.9);
    (*pcVar1)(1);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      fVar4 = (float10)FUN_00dde300(0,0x3f800000);
      fVar5 = (float10)FUN_004bdf30();
      if (fVar5 < (float10)(float)fVar4 != (fVar5 == (float10)(float)fVar4)) {
        param_1[0x22a] = param_1[0x41c];
        FUN_00aa3f60(0x62);
        FUN_004be980(0x62);
        FUN_004bed60(4);
        param_1[0x187] = param_1[0x187] + 1;
        return;
      }
      if ((param_1[0x370] & 0x80000000U) != 0) {
LAB_004c580e:
        param_1[0x187] = param_1[0x187] + 1;
        return;
      }
      FUN_004beea0(0x30007);
    }
    break;
  case 2:
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    iVar3 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar3 != 0) {
      (**(code **)(*param_1 + 0x1d4))(0);
      param_1[0x22a] = param_1[0x41c];
      FUN_00aa4080(0x5f,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_004be9b0(0x5f,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = 4;
      FUN_004bed60(4);
      return;
    }
    break;
  case 3:
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 == 0) {
      return;
    }
    FUN_00aa4080(0x5f,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_004be9b0(0x5f,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    goto LAB_004c580e;
  case 4:
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x004c584e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 004C5870  FUN_004c5870  size=745  [between]
void __fastcall FUN_004c5870(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  switch(param_1[0x187]) {
  case 0:
    if (param_1[0x476] != 1) {
      param_1[0x476] = 1;
      iVar3 = FUN_00a92f90();
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) & 0xfffffffe;
      }
      iVar3 = FUN_00a92f90();
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) | 2;
      }
    }
    pcVar1 = *(code **)(*param_1 + 0x314);
    param_1[0x225] = -0x41b33333;
    (*pcVar1)();
    if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
      *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
    }
    iVar3 = (**(code **)(*param_1 + 0x1d8))();
    if (iVar3 == 0) {
      FUN_00aa4080(99,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_004be9b0(99,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_004be8c0(0x3f800000,0x3f800000);
      FUN_004beaa0();
      param_1[0x187] = 2;
      return;
    }
    FUN_00aa4080(0x61,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_004be9b0(0x61,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_004bed60(4);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    iVar3 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar3 != 0) {
      (**(code **)(*param_1 + 0x1d4))(0);
      FUN_00aa4080(99,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_004be9b0(99,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_00aa4080(0x5f,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_004be9b0(0x5f,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 3:
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x004c5b57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 004C5B70  FUN_004c5b70  size=898  [between]
void __fastcall FUN_004c5b70(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  
  switch(param_1[0x187]) {
  case 0:
    if (param_1[0x476] != 0) {
      param_1[0x476] = 0;
      iVar3 = FUN_00a92f90();
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) | 1;
      }
      iVar3 = FUN_00a92f90();
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar3 + 0x280) = *(uint *)(iVar3 + 0x280) & 0xfffffffd;
      }
    }
    FUN_00aa4080(100,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_004be9b0(100,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_004bed60(4);
    param_1[0x22a] = param_1[0x41c];
    (**(code **)(*param_1 + 0x318))();
    iVar3 = param_1[0x1d9];
    if (*(int *)(iVar3 + 0x104) != 1) {
      *(undefined4 *)(iVar3 + 0x104) = 1;
      *(undefined4 *)(*(int *)(iVar3 + 0xd0) + 4) = 0;
    }
    (**(code **)(*param_1 + 0x1d4))(1);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0;
    param_1[0x188] = 0;
  case 1:
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)((float)param_1[0x244] + fVar1);
    if (((param_1[0x188] == 0) && (5.0 <= (float)param_1[0x244] + fVar1)) &&
       ((param_1[0x370] & 0x80000000U) == 0)) {
      param_1[0x188] = 1;
      fVar4 = (float10)FUN_00dde300(0,0x3f800000);
      fVar5 = (float10)FUN_004bdf30();
      if ((float10)(float)fVar4 < fVar5) {
        FUN_004beea0(0x30007);
        return;
      }
    }
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      (**(code **)(*param_1 + 0x314))();
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
      FUN_00aa3f60(0x62);
      FUN_004be980(0x62);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    iVar3 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar3 != 0) {
      (**(code **)(*param_1 + 0x1d4))(0);
      FUN_00aa4080(99,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_004be9b0(99,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 3:
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_00aa4080(0x5f,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_004be9b0(0x5f,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 4:
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x004c5ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 004C5F10  FUN_004c5f10  size=414  [between]
void __fastcall FUN_004c5f10(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0x187];
  if (iVar1 == 0) {
    FUN_00aa4080(0x69,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    iVar1 = FUN_00a81330();
    if ((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
      FUN_00aa4080(0x69,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    iVar1 = FUN_00a81330();
    if ((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
      FUN_00aa3f60(4);
    }
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (iVar1 != 1) {
    if (iVar1 != 2) {
      return;
    }
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 == 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x004c5f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  FUN_004be8c0(0x3f800000,0x3f800000);
  FUN_004beaa0();
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00aa4080(0x5f,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    iVar1 = FUN_00a81330();
    if ((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
      FUN_00aa4080(0x5f,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    param_1[0x187] = param_1[0x187] + 1;
  }
  return;
}

// 004C60B0  FUN_004c60b0  size=498  [between]
void __fastcall FUN_004c60b0(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  
  piVar1 = (int *)FUN_00ac8120();
  if (piVar1 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar4 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d70(puVar4);
    uVar3 = -(uint)(iVar2 != 0) & (uint)piVar1;
  }
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x59,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    iVar2 = FUN_00a81330();
    if (iVar2 != 0) {
      iVar2 = FUN_00a7c8a0();
      if (iVar2 != 0) {
        FUN_00aa4080(0x59,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      }
    }
    iVar2 = FUN_00a81330();
    if (iVar2 != 0) {
      iVar2 = FUN_00a7c8a0();
      if (iVar2 != 0) {
        FUN_00aa3f60(4);
      }
    }
    param_1[0x370] = param_1[0x370] | 0x1000000;
    if ((undefined4 *)param_1[0xdc] != (undefined4 *)0x0) {
      param_1[0xd9] = param_1[0xd9] | 0x400000;
      *(undefined4 *)param_1[0xdc] = 0;
    }
    if (param_1[0xdc] != 0) {
      *(undefined4 *)(param_1[0xdc] + 4) = 1;
      *(undefined4 *)(param_1[0xdc] + 8) = 1;
    }
    if (param_1[0xdc] != 0) {
      *(undefined4 *)(param_1[0xdc] + 0xc) = 1;
    }
    if (uVar3 != 0) {
      FUN_00b85350(0x42340000,0x3f800000,0x3dcccccd,0,1,0x3dcccccd);
    }
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_004be8c0(0x3f800000,0x3f800000);
  FUN_004beaa0();
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
    param_1[0x370] = param_1[0x370] & 0xfeffffff;
    if ((undefined4 *)param_1[0xdc] != (undefined4 *)0x0) {
      param_1[0xd9] = param_1[0xd9] & 0xffbfffff;
      *(undefined4 *)param_1[0xdc] = 1;
    }
    if (param_1[0xdc] != 0) {
      *(undefined4 *)(param_1[0xdc] + 4) = 0;
      *(undefined4 *)(param_1[0xdc] + 8) = 0;
    }
    if (param_1[0xdc] != 0) {
      *(undefined4 *)(param_1[0xdc] + 0xc) = 1;
    }
  }
  return;
}

// 004C62B0  FUN_004c62b0  size=268  [between]
void __fastcall FUN_004c62b0(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x6f,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    iVar1 = FUN_00a81330();
    if ((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
      FUN_00aa4080(0x70,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    iVar1 = FUN_00a81330();
    if ((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
      FUN_00aa3f60(4);
    }
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_004be8c0(0x3f800000,0x3f800000);
  FUN_004beaa0();
  *(undefined2 *)(param_1 + 0x209) = 4;
  param_1[0x20a] = 0x78;
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004c63ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 004C63C0  FUN_004c63c0  size=297  [between]
void __fastcall FUN_004c63c0(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x70,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    iVar1 = FUN_00a81330();
    if ((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
      FUN_00aa4080(0x71,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    iVar1 = FUN_00a81330();
    if ((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
      FUN_00aa3f60(4);
    }
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_004be8c0(0x3f800000,0x3f800000);
  FUN_004beaa0();
  iVar1 = FUN_00a8c760(0);
  if (iVar1 != 0) {
    FUN_004b94a0(param_1 + 0x498,0x3e3851ec,0x3da0d97c);
  }
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004c64e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 004C64F0  FUN_004c64f0  size=714  [between]
void __fastcall FUN_004c64f0(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  undefined4 uVar6;
  
  if (param_1[0x187] == 0) {
    iVar3 = param_1[0x42e];
    iVar2 = 100;
    if (iVar3 == 0) {
      iVar2 = param_1[0x4b6];
    }
    else if (iVar3 == 1) {
      iVar2 = param_1[0x4b7];
    }
    else if (iVar3 == 2) {
      iVar2 = param_1[0x4b8];
    }
    if (iVar2 >> 1 < param_1[0x41a]) {
      param_1[0x370] = param_1[0x370] | 0x8000;
      FUN_00aa4080(0x7c,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      uVar6 = 0x7c;
    }
    else {
      FUN_00aa4080(0x7a,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      uVar6 = 0x7a;
    }
    FUN_004be9b0(uVar6,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    iVar3 = FUN_00a81330();
    if ((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
      FUN_00aa3f60(4);
    }
    param_1[0x25] = param_1[0x41d];
    param_1[0x41b] = 0x43160000;
    param_1[0x370] = param_1[0x370] & 0xfbffffff;
    FUN_00c27f40(0,0xbf800000);
    (**(code **)(*param_1 + 0x314))();
    if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
      *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
    }
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  iVar3 = param_1[0x42e];
  iVar2 = 100;
  if (iVar3 == 0) {
    iVar2 = param_1[0x4b6];
  }
  else if (iVar3 == 1) {
    iVar2 = param_1[0x4b7];
  }
  else if (iVar3 == 2) {
    iVar2 = param_1[0x4b8];
  }
  if (((((param_1[0x370] & 0x8000U) == 0) && (iVar2 >> 2 < param_1[0x41a])) &&
      (iVar3 = FUN_00a8c760(4), iVar3 != 0)) && (param_1[0x418] < param_1[0x419])) {
    iVar3 = FUN_004b9b10();
    if (((iVar3 != 0) && (cVar1 = FUN_00ca30d0(param_1 + 0x10), cVar1 == '\0')) &&
       (param_1[0x418] < param_1[0x419])) {
      param_1[0x370] = param_1[0x370] | 0x20000000;
      param_1[0x418] = param_1[0x418] + 1;
      FUN_004beea0(0x3000a);
      return;
    }
    fVar4 = (float10)FUN_004bbff0();
    fVar5 = (float10)FUN_00dde300(0,0x3f800000);
    if (fVar5 < (float10)(float)fVar4 != (fVar5 == (float10)(float)fVar4)) {
      param_1[0x418] = param_1[0x418] + 1;
      param_1[0x370] = param_1[0x370] | 0x20000000;
      FUN_004beea0(0x3000a);
      return;
    }
    param_1[0x370] = param_1[0x370] | 0x8000;
  }
  FUN_004be8c0(0x3f800000,0x3f800000);
  FUN_004beaa0();
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004c67b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 004C67C0  FUN_004c67c0  size=154  [between]
void __fastcall FUN_004c67c0(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    FUN_00aa3f60(0x7a);
    iVar1 = FUN_00a81330();
    if ((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
      FUN_00aa3f60(0x7a);
    }
    iVar1 = FUN_00a81330();
    if ((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
      FUN_00aa3f60(4);
    }
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_004be8c0(0x3f800000,0x3f800000);
  FUN_004beaa0();
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004c6858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 004C6860  FUN_004c6860  size=348  [between]
void __fastcall FUN_004c6860(int *param_1)

{
  float fVar1;
  int iVar2;
  
  if (param_1[0x187] == 0) {
    FUN_00aa3f60(0x7b);
    iVar2 = FUN_00a81330();
    if ((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
      FUN_00aa3f60(0x7b);
    }
    iVar2 = FUN_00a81330();
    if ((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
      FUN_00aa3f60(4);
    }
    param_1[0x3fc] = 0x42f00000;
    param_1[0x370] = param_1[0x370] | 0x200;
    param_1[0x481] = 0;
    param_1[0x41a] = 0;
    param_1[0x370] = param_1[0x370] & 0xffff7fff;
    param_1[0x418] = 0;
    iVar2 = FUN_00a81330();
    if ((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
      FUN_004b6960(param_1[0x4cf]);
    }
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_004be8c0(0x3f800000,0x3f800000);
  FUN_004beaa0();
  iVar2 = FUN_00a8c760(4);
  if ((iVar2 != 0) && (iVar2 = FUN_00a8e520(), iVar2 == 0)) {
    param_1[0x248] = (int)((float)param_1[0x244] + (float)param_1[0x248]);
  }
  iVar2 = FUN_00a94ce0(0);
  if ((iVar2 == 0) && (fVar1 = (float)param_1[0x248], NAN(fVar1) || 8.0 < fVar1 == (fVar1 == 8.0)))
  {
    return;
  }
  param_1[0x370] = param_1[0x370] & 0xfffffdff;
                    /* WARNING: Could not recover jumptable at 0x004c69ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 004C69C0  FUN_004c69c0  size=443  [between]
void __fastcall FUN_004c69c0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a7c8a0();
  }
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x38,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    iVar1 = FUN_00a81330();
    if ((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
      FUN_00aa4080(0x38,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    iVar1 = FUN_00a81330();
    if ((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
      FUN_00aa4080(0x12,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x250] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  iVar1 = FUN_00a8c760(10);
  if (iVar1 == 0) {
    if ((param_1[0x250] != 0) && (iVar2 = FUN_00a93610(999), iVar2 != 0)) {
      FUN_00d7acc0();
    }
  }
  else if ((param_1[0x250] == 0) && (iVar2 = FUN_00a93610(999), iVar2 != 0)) {
    FUN_00d7b890();
  }
  param_1[0x250] = iVar1;
  FUN_004be8c0(0x3f800000,0x3f800000);
  FUN_004beaa0();
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = FUN_00a93610(999);
  if (iVar1 != 0) {
    FUN_00d7acc0();
  }
                    /* WARNING: Could not recover jumptable at 0x004c6b79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 004C6B80  FUN_004c6b80  size=320  [between]
void __fastcall FUN_004c6b80(int *param_1)

{
  int iVar1;
  float10 fVar2;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(5,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        FUN_00aa4080(5,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      }
    }
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        FUN_00aa4080(4,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      }
    }
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_004be8c0(0x3f800000,0x3f800000);
  FUN_004beaa0();
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      fVar2 = (float10)FUN_004b6000(iVar1);
      if (fVar2 < (float10)100.0) {
        FUN_004beea0(0x40003);
      }
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x004c6c9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 004C6CC0  FUN_004c6cc0  size=605  [between]
void __fastcall FUN_004c6cc0(int *param_1)

{
  undefined4 uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  
  if (param_1[0x187] == 0) {
    iVar3 = 0;
    if (((param_1[0x42e] != 1) && (iVar4 = FUN_004b8ad0(), iVar4 == 0)) &&
       (iVar4 = FUN_004b7fe0(), iVar4 == 0)) {
      sVar2 = FUN_00dde2d0(0,2);
      iVar3 = (int)sVar2;
    }
    FUN_00aa4080((&DAT_0163f108)[iVar3 * 3],0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000)
    ;
    uVar1 = *(undefined4 *)(&DAT_0163f10c + iVar3 * 0xc);
    iVar4 = FUN_00a81330();
    if ((iVar4 != 0) && (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) {
      FUN_00aa4080(uVar1,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    uVar1 = *(undefined4 *)(&DAT_0163f110 + iVar3 * 0xc);
    iVar3 = FUN_00a81330();
    if ((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
      FUN_00aa4080(uVar1,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  iVar3 = FUN_00a8c760(9);
  if (iVar3 != 0) {
    (**(code **)(*param_1 + 0x220))(0x40a00000);
  }
  FUN_004be8c0(0x3f800000,0x3f800000);
  FUN_004beaa0();
  if ((param_1[0x42e] == 2) && (iVar3 = FUN_004b7fe0(), iVar3 != 0)) {
    iVar3 = FUN_00a8c760(4);
    if (iVar3 == 0) {
      return;
    }
    FUN_004beea0(0xe000a);
    return;
  }
  if (param_1[0x42e] == 1) {
    iVar3 = FUN_00a8eea0();
    iVar4 = FUN_00a8eeb0();
    if ((float)iVar3 / (float)iVar4 < 0.5 != ((float)iVar3 / (float)iVar4 == 0.5)) {
      iVar3 = FUN_00a8c760(4);
      if (iVar3 == 0) {
        return;
      }
      param_1[0x370] = param_1[0x370] | 0x40000;
      return;
    }
  }
  if ((param_1[0x370] & 0x20000400U) == 0) {
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x004c6ee9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  else {
    iVar3 = FUN_00a952e0(0,0x42840000);
    if (iVar3 != 0) {
      param_1[0x370] = param_1[0x370] & 0xdfffffff;
      FUN_004beea0(0x20001);
    }
  }
  return;
}

// 004C6F20  FUN_004c6f20  size=360  [between]
void __fastcall FUN_004c6f20(int *param_1)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  float10 fVar4;
  undefined1 local_20 [28];
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0xc,0,0x3e4ccccd,0x3f800000,0x8038000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a8c760(0);
  if (iVar2 != 0) {
    FUN_004b94a0(param_1 + 0x470,0x3e0f5c29,0x3d32b8c2);
  }
  iVar2 = FUN_00a8c760(10);
  if (iVar2 != 0) {
    pfVar3 = (float *)FUN_00a8b8a0(local_20,(float)param_1[0x244] * -0.38);
    param_1[0x14] = (int)((float)param_1[0x14] + *pfVar3);
    param_1[0x15] = (int)(pfVar3[1] + (float)param_1[0x15]);
    param_1[0x16] = (int)(pfVar3[2] + (float)param_1[0x16]);
    param_1[0x17] = (int)(pfVar3[3] + (float)param_1[0x17]);
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    fVar1 = (float)param_1[0x2a4];
    if (!NAN(fVar1) && 25.0 < fVar1 != (fVar1 == 25.0)) {
      fVar4 = (float10)FUN_00a8ec30(param_1[0x2a1] + 0x40);
      fVar4 = (float10)FUN_00ddba30((float)((float10)(float)param_1[0x25] - fVar4));
      if (ABS(fVar4) < (float10)0.87266463 != (ABS(fVar4) == (float10)0.87266463)) {
        iVar2 = FUN_004ba1b0();
        if (iVar2 != 0) {
          FUN_004beea0(0x2000d);
          return;
        }
      }
    }
    (**(code **)(*param_1 + 0x34c))();
  }
  return;
}

// 004C7090  FUN_004c7090  size=360  [between]
void __fastcall FUN_004c7090(int *param_1)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  float10 fVar4;
  undefined1 local_20 [28];
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0xc,0,0x3e4ccccd,0x3f800000,0x8038000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a8c760(0);
  if (iVar2 != 0) {
    FUN_004b94a0(param_1 + 0x470,0x3e0f5c29,0x3d32b8c2);
  }
  iVar2 = FUN_00a8c760(10);
  if (iVar2 != 0) {
    pfVar3 = (float *)FUN_00a8b8a0(local_20,(float)param_1[0x244] * -0.38);
    param_1[0x14] = (int)((float)param_1[0x14] + *pfVar3);
    param_1[0x15] = (int)(pfVar3[1] + (float)param_1[0x15]);
    param_1[0x16] = (int)(pfVar3[2] + (float)param_1[0x16]);
    param_1[0x17] = (int)(pfVar3[3] + (float)param_1[0x17]);
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    fVar1 = (float)param_1[0x2a4];
    if (!NAN(fVar1) && 25.0 < fVar1 != (fVar1 == 25.0)) {
      fVar4 = (float10)FUN_00a8ec30(param_1[0x2a1] + 0x40);
      fVar4 = (float10)FUN_00ddba30((float)((float10)(float)param_1[0x25] - fVar4));
      if (ABS(fVar4) < (float10)0.87266463 != (ABS(fVar4) == (float10)0.87266463)) {
        iVar2 = FUN_004ba1b0();
        if (iVar2 != 0) {
          FUN_004beea0(0x2000d);
          return;
        }
      }
    }
    (**(code **)(*param_1 + 0x34c))();
  }
  return;
}

// 004C7200  Em0110::vf150  size=137  [class]
void Em0110::vf150(undefined4 param_1,int param_2)

{
  int *piVar1;
  
  if (param_2 != 0) {
    DAT_01bea090 = DAT_01bea090 & 0xffff7fff;
    FUN_00a7c970(param_2);
    switch(param_1) {
    case 0x43:
      FUN_00a8cb60(2);
      return;
    case 0x45:
      FUN_004beea0(0xe0002);
      return;
    case 0x47:
      FUN_00a8cb60(4);
      return;
    case 0x48:
      FUN_00a8cb60(3);
      return;
    case 0x49:
      piVar1 = (int *)FUN_00c1b9a0();
      (**(code **)(*piVar1 + 100))();
      FUN_004beea0(0xe000c);
    }
  }
  return;
}

// 004C72B0  FUN_004c72b0  size=892  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004c72b0(int *param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  float unaff_EBX;
  uint uVar7;
  float unaff_ESI;
  int unaff_EDI;
  undefined *puVar8;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  uVar7 = 0;
  if (param_1[0x187] == 0) {
    if (param_1[0x476] != 0) {
      param_1[0x476] = 0;
      iVar6 = FUN_00a92f90();
      iVar5 = FUN_00e26e90();
      if (iVar5 != 0) {
        *(uint *)(iVar6 + 0x280) = *(uint *)(iVar6 + 0x280) | 1;
      }
      iVar6 = FUN_00a92f90();
      iVar5 = FUN_00e26e90();
      if (iVar5 != 0) {
        *(uint *)(iVar6 + 0x280) = *(uint *)(iVar6 + 0x280) & 0xfffffffd;
      }
    }
    param_1[0x370] = param_1[0x370] | 2;
    FUN_00aa4080(0x32,0,0x3dcccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    iVar6 = FUN_00a81330();
    if ((iVar6 != 0) && (iVar6 = FUN_00a7c8a0(), iVar6 != 0)) {
      FUN_00aa4080(0x32,0,0x3dcccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    iVar6 = FUN_00a81330();
    if ((iVar6 != 0) && (iVar6 = FUN_00a7c8a0(), iVar6 != 0)) {
      FUN_00aa4080(0xd,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    FUN_00a92f90();
    iVar6 = FUN_00e26e90();
    if (iVar6 != 0) {
      Animation::Motion::Unit::setCurrentTime(0,0xbf800000);
    }
    FUN_00a92f90();
    FUN_00e36b50(0,0x10,0);
    iVar6 = _DAT_01bea264;
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x24f] = iVar6;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  iVar6 = FUN_00a8c760(0);
  if (iVar6 != 0) {
    FUN_004b94a0(param_1[0x2a1] + 0x40,0x3df5c28f,0x3d567750);
  }
  piVar1 = (int *)param_1[0x2a1];
  if (piVar1 != (int *)0x0) {
    puVar8 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar6 = FUN_00dd6d70(puVar8);
    uVar7 = -(uint)(iVar6 != 0) & (uint)piVar1;
  }
  local_20 = 0;
  local_1c = 0xbf000000;
  local_18 = 0x40400000;
  D3DXVec3TransformNormal(&local_20,&local_20,param_1 + 4);
  iVar6 = param_1[0x2a1];
  fVar2 = ((float)param_1[0x10] + unaff_ESI) - *(float *)(iVar6 + 0x40);
  fVar3 = ((float)param_1[0x12] + 0.0) - *(float *)(iVar6 + 0x48);
  fVar4 = ABS(((float)param_1[0x11] + unaff_EBX) - *(float *)(iVar6 + 0x44));
  if ((fVar4 < 2.5 != (fVar4 == 2.5)) &&
     (fVar2 = SQRT(fVar3 * fVar3 + fVar2 * fVar2), fVar2 < 5.0 != (fVar2 == 5.0))) {
    unaff_EDI = 1;
  }
  DAT_01bea090 = DAT_01bea090 & 0xffff7fff;
  iVar6 = FUN_00a8c760(10);
  if (((iVar6 != 0) && ((**(code **)(*param_1 + 0x220))(0x40000000), unaff_EDI != 0)) &&
     (uVar7 != 0)) {
    FUN_00b7ab80(0x40000000,0x3d4ccccd);
  }
  FUN_004be8c0(0x3f800000,0x3f800000);
  FUN_004beaa0();
  iVar6 = FUN_00a8c760(8);
  if ((iVar6 != 0) && (unaff_EDI != 0)) {
    if (uVar7 != 0) {
      FUN_00b7aa80();
    }
    param_1[0x370] = param_1[0x370] | 0x40000;
    DAT_01bea090 = DAT_01bea090 & 0xffff7fff;
    return;
  }
  iVar6 = FUN_00a94ce0(0);
  if (iVar6 == 0) {
    if (unaff_EDI != 0) {
      FUN_00b7b380(param_1[0x13c],uVar7 + 0x40,1);
      DAT_01bea090 = DAT_01bea090 | 0x8000;
      param_1[0x250] = param_1[0x250] + 1;
      _DAT_01beaa88 = _DAT_01beaa88 | 0x20000000;
    }
    return;
  }
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 004C7630  FUN_004c7630  size=1712  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004c7630(int *param_1)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  bool bVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int unaff_ESI;
  int unaff_EDI;
  float10 fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined *puVar12;
  undefined4 uVar13;
  float fStack_94;
  float fStack_90;
  float local_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  undefined1 auStack_58 [8];
  undefined1 local_50 [76];
  
  if ((_DAT_01b34e50 & 1) == 0) {
    _DAT_01b34e50 = _DAT_01b34e50 | 1;
    _DAT_01b34e30 = 3.5;
    _DAT_01b34e34 = 2.0;
    _DAT_01b34e40 = 0;
    _DAT_01b34e44 = 0xbf000000;
    _DAT_01b34e48 = 0x40400000;
  }
  bVar3 = false;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x37,0,0x3bda740e,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    iVar7 = FUN_00a81330();
    if ((iVar7 != 0) && (iVar7 = FUN_00a7c8a0(), iVar7 != 0)) {
      FUN_00aa4080(0x37,0,0x3bda740e,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    iVar7 = FUN_00a81330();
    if ((iVar7 != 0) && (iVar7 = FUN_00a7c8a0(), iVar7 != 0)) {
      FUN_00aa4080(4,0,0x3bda740e,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    param_1[0x42a] = 0;
    sVar5 = FUN_00dde2d0(2,3);
    param_1[0x248] = 0x3f800000;
    param_1[0x42b] = (int)sVar5;
    param_1[0x188] = 0;
    param_1[0x189] = 0;
    param_1[0x250] = 0;
    param_1[0x251] = 0;
    param_1[0x252] = 0;
    param_1[0x253] = 0;
    if (param_1[0x476] != 0) {
      param_1[0x476] = 0;
      iVar7 = FUN_00a92f90();
      iVar6 = FUN_00e26e90();
      if (iVar6 != 0) {
        *(uint *)(iVar7 + 0x280) = *(uint *)(iVar7 + 0x280) | 1;
      }
      iVar7 = FUN_00a92f90();
      iVar6 = FUN_00e26e90();
      if (iVar6 != 0) {
        *(uint *)(iVar7 + 0x280) = *(uint *)(iVar7 + 0x280) & 0xfffffffd;
      }
    }
    if ((int *)param_1[0x2a1] != (int *)0x0) {
      puVar12 = &DAT_01be9db8;
      (**(code **)(*(int *)param_1[0x2a1] + 4))(&DAT_01be9db8);
      iVar7 = FUN_00dd6d70(puVar12);
      if (iVar7 != 0) {
        FUN_00b7ec60();
      }
    }
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  iVar7 = FUN_00a92f90();
  if (iVar7 != 0) {
    local_88 = (float)param_1[0x248];
    FUN_00a92f90();
    iVar7 = FUN_00e26e90();
    if (iVar7 != 0) {
      Animation::Motion::Node::setLocalPlaybackRate(0,local_88);
    }
  }
  FUN_004be8c0(0x3f800000,0x3f800000);
  FUN_004beaa0();
  if ((((param_1[0x2a1] != 0) && (iVar7 = FUN_00a8c760(0), iVar7 != 0)) &&
      (fVar1 = (float)param_1[0x2a4], !NAN(fVar1) && 1.0 < fVar1 != (fVar1 == 1.0))) &&
     (param_1[0x189] == 0)) {
    FUN_004b9650(0x3e4ccccd,0x3e32b8c2);
  }
  if (2.25 < (float)param_1[0x2a4]) {
LAB_004c790f:
    uVar13 = 0;
  }
  else {
    fVar9 = (float10)FUN_00a8ec30(param_1[0x2a1] + 0x40);
    fVar9 = (float10)FUN_00ddba30((float)((float10)(float)param_1[0x25] - fVar9));
    if ((float10)0.6981317 <= ABS(fVar9)) goto LAB_004c790f;
    uVar13 = 1;
  }
  uVar11 = 0x80;
  uVar10 = 0;
  FUN_00a92f90(0,0x80,uVar13);
  FUN_00e3a1a0(uVar10,uVar11,uVar13);
  DAT_01bea090 = DAT_01bea090 & 0xffff7fff;
  iVar7 = FUN_00a94ce0(0);
  if ((iVar7 != 0) || (iVar7 = FUN_00a8c760(4), iVar7 != 0)) {
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  local_8c = 0.0;
  local_88 = 1.4013e-45;
  D3DXMatrixRotationY(local_50,param_1[0x25]);
  D3DXVec3TransformNormal(&fStack_78,&DAT_01b34e40,auStack_58);
  fStack_84 = (float)param_1[0x14] + fStack_84;
  iVar7 = param_1[0x2a1];
  fStack_80 = (float)param_1[0x15] + fStack_80;
  fStack_7c = (float)param_1[0x16] + fStack_7c;
  fStack_78 = (float)param_1[0x17] + fStack_78;
  fVar1 = fStack_84 - *(float *)(iVar7 + 0x40);
  fVar2 = fStack_7c - *(float *)(iVar7 + 0x48);
  if ((_DAT_01b34e30 * _DAT_01b34e30 <= fVar2 * fVar2 + fVar1 * fVar1) ||
     (_DAT_01b34e34 <= ABS(fStack_80 - *(float *)(iVar7 + 0x44)))) {
LAB_004c7a70:
    if (param_1[0x252] != 0) goto LAB_004c7a7d;
  }
  else {
    bVar3 = true;
    iVar7 = FUN_00a8c760(10);
    if (iVar7 == 0) goto LAB_004c7a70;
    unaff_ESI = 0;
    iVar7 = FUN_00c593a0(param_1[0x13c],0xffffffff,&DAT_01b34e40,_DAT_01b34e30,_DAT_01b34e34,0x15,9)
    ;
    if (iVar7 != 0) {
      *(undefined4 *)(iVar7 + 0x48) = 0;
      *(undefined4 *)(iVar7 + 0x40) = 0x3f4ccccd;
      *(undefined4 *)(iVar7 + 0x44) = 0x3ecccccd;
    }
    param_1[0x252] = param_1[0x252] + 1;
    param_1[0x253] = param_1[0x253] + 1;
  }
  unaff_EDI = 1;
LAB_004c7a7d:
  bVar4 = false;
  piVar8 = (int *)FUN_00ac8120();
  if ((((piVar8 == (int *)0x0) || (!bVar3)) || (unaff_EDI == 0)) ||
     ((piVar8[0x139] != 0 || (iVar7 = (**(code **)(*piVar8 + 0x1fc))(), iVar7 != 0)))) {
    param_1[0x4d3] = 0;
    DAT_01bea094 = DAT_01bea094 & 0xbfffffff;
    DAT_01bea090 = DAT_01bea090 & 0xff7f3bff;
  }
  else {
    FUN_00b7ab80(0x40400000,0x3d4ccccd);
    FUN_00b7b380(param_1[0x13c],piVar8 + 0x10,1);
    bVar4 = true;
    param_1[0x4d3] = 1;
    DAT_01bea094 = DAT_01bea094 | 0x40000000;
    DAT_01bea090 = DAT_01bea090 | 0x80c400;
    iVar7 = FUN_00a8c760(8);
    if (iVar7 != 0) {
      iVar7 = param_1[0x2a1];
      fStack_94 = (float)param_1[0x14] - *(float *)(iVar7 + 0x40);
      local_8c = (float)param_1[0x16] - *(float *)(iVar7 + 0x48);
      local_88 = (float)param_1[0x17] - *(float *)(iVar7 + 0x4c);
      fStack_90 = 0.0;
      fVar1 = fStack_94 * fStack_94 + local_8c * local_8c;
      if (fVar1 < 0.0 == (fVar1 == 0.0)) {
        FUN_00ddf460(&fStack_74,&fStack_94);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        fStack_6c = 0.0;
        fStack_74 = 0.0;
        fStack_70 = 1.0;
      }
      iVar7 = param_1[0x2a1];
      param_1[0x14] =
           (int)((fStack_74 * 3.5 - fStack_94) * 0.15 + fStack_94 + *(float *)(iVar7 + 0x40));
      param_1[0x15] =
           (int)((fStack_70 * 3.5 - fStack_90) * 0.15 + fStack_90 + *(float *)(iVar7 + 0x44));
      param_1[0x16] =
           (int)((fStack_6c * 3.5 - local_8c) * 0.15 + local_8c + *(float *)(iVar7 + 0x48));
      param_1[0x17] =
           (int)((fStack_68 * 3.5 - local_88) * 0.15 + local_88 + *(float *)(iVar7 + 0x4c));
    }
  }
  if ((unaff_ESI == 0) || (!bVar4)) {
    fVar1 = 1.0;
  }
  else {
    fVar1 = _DAT_01be942c / (float)param_1[0x244];
  }
  param_1[0x248] = (int)fVar1;
  if (unaff_EDI == 0) {
    return;
  }
  _DAT_01beaa88 = _DAT_01beaa88 | 0x10000000;
  return;
}

// 004C7CE0  FUN_004c7ce0  size=978  [callgraph]
void __fastcall FUN_004c7ce0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[0x187];
  if (iVar1 == 0) {
    if ((float)param_1[0x2a4] <= 25.0) {
      FUN_00aa4080(0xc,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_004be9b0(0xc,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_004bed90(8,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = 2;
    }
    else {
      FUN_00aa4080(0xa5,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_004be9b0(0xa5,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_004bed90(0x17,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
    }
    if (param_1[0x42e] == 0) {
      if (param_1[0x476] != 0) {
        param_1[0x476] = 0;
        iVar1 = FUN_00a92f90();
        iVar2 = FUN_00e26e90();
        if (iVar2 != 0) {
          *(uint *)(iVar1 + 0x280) = *(uint *)(iVar1 + 0x280) | 1;
        }
        iVar1 = FUN_00a92f90();
        iVar2 = FUN_00e26e90();
        if (iVar2 != 0) {
          *(uint *)(iVar1 + 0x280) = *(uint *)(iVar1 + 0x280) & 0xfffffffd;
          return;
        }
      }
    }
    else if ((param_1[0x42e] == 2) && (param_1[0x476] != 1)) {
      param_1[0x476] = 1;
      iVar1 = FUN_00a92f90();
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar1 + 0x280) = *(uint *)(iVar1 + 0x280) & 0xfffffffe;
      }
      iVar1 = FUN_00a92f90();
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar1 + 0x280) = *(uint *)(iVar1 + 0x280) | 2;
      }
    }
  }
  else if (iVar1 == 1) {
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x004c7ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  else if (iVar1 == 2) {
    iVar1 = FUN_00a8c760(0);
    if (iVar1 != 0) {
      FUN_004b94a0(param_1[0x2a1] + 0x40,0x3dcccccd,0x3c8efa35);
    }
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    iVar1 = FUN_00a94ce0(0);
    if ((iVar1 == 0) && (iVar1 = FUN_00a8c760(4), iVar1 == 0)) {
      return;
    }
    if (param_1[0x476] != -1) {
      param_1[0x476] = -1;
      iVar1 = FUN_00a92f90();
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar1 + 0x280) = *(uint *)(iVar1 + 0x280) | 1;
      }
      iVar1 = FUN_00a92f90();
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        *(uint *)(iVar1 + 0x280) = *(uint *)(iVar1 + 0x280) | 2;
      }
    }
    FUN_00aa4080(0xa5,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    iVar1 = FUN_00a81330();
    if ((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
      FUN_00aa4080(0xa5,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    iVar1 = FUN_00a81330();
    if ((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
      FUN_00aa4080(0x17,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    param_1[0x187] = 1;
    return;
  }
  return;
}

// 004C80C0  FUN_004c80c0  size=936  [callgraph]
void __fastcall FUN_004c80c0(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a7c8a0();
  }
  iVar1 = param_1[0x187];
  if (iVar1 == 0) {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00a7c8a0();
      if (piVar2 != (int *)0x0) {
        FUN_00a9e0d0(piVar2[0x13c]);
        (**(code **)(*piVar2 + 0x20))();
        FUN_009fdde0();
        FUN_00a7c950();
      }
    }
    (**(code **)(param_1[0x3a4] + 8))(0x3f800000,0,0);
    (**(code **)(param_1[0x3a4] + 0xc))();
    FUN_00a92f90();
    FUN_00e36b50(0,2,1);
    FUN_008e3c10();
    uStack_4c = 0x428d999a;
    uStack_48 = 0x42c80000;
    uStack_44 = 0xc3338000;
    (**(code **)(*param_1 + 0x7c))(&uStack_4c,&stack0xffffffa4);
    FUN_00aa4080(0xa9,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        FUN_00aa4080(0xa9,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
      }
    }
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        FUN_00aa4080(0x1e,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
      }
    }
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (iVar1 != 1) {
    if (iVar1 == 2) {
      FUN_004be8c0(0x3f800000,0x3f800000);
      FUN_004beaa0();
      iVar1 = FUN_00a94ce0(0);
      if (iVar1 != 0) {
        FUN_00a93090(6);
        FUN_008e6d00();
        FUN_004be3c0();
        FUN_004beea0(0x1000c);
      }
    }
    goto LAB_004c844b;
  }
  FUN_004be8c0(0x3f800000,0x3f800000);
  FUN_004beaa0();
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    local_30 = 0;
    local_2c = 0xbf20d97c;
    local_28 = 0;
    local_20 = 0x42140000;
    local_1c = 0x42b80000;
    local_18 = 0xc2ef0000;
    (**(code **)(*param_1 + 0x7c))(&local_20,&local_30);
    FUN_00aa4080(0xaa,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        FUN_00aa4080(0xaa,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
      }
    }
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        FUN_00aa4080(0x1f,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
      }
    }
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    param_1[0x187] = param_1[0x187] + 1;
  }
LAB_004c844b:
  (**(code **)(*param_1 + 0x220))(0x40a00000);
  return;
}

// 004C8470  FUN_004c8470  size=2855  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004c8470(int *param_1)

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
  float fVar10;
  float fVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  float10 fVar15;
  float10 fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uStack_54;
  undefined4 uStack_4c;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar12 = FUN_00a81330();
  piVar14 = (int *)0x0;
  if (iVar12 != 0) {
    piVar14 = (int *)FUN_00a7c8a0();
  }
  switch(param_1[0x187]) {
  case 0:
    if (param_1[0x1d9] != 0) {
      FUN_008e3c10();
    }
    FUN_00bee830();
    DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
    FUN_00aa4520(0x111,iVar12,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x250] = 0;
  case 1:
    iVar13 = FUN_00a12210(0xf00);
    if (iVar13 != 0) {
      param_1[0x14] = *(int *)(iVar13 + 0x40);
      param_1[0x15] = *(int *)(iVar13 + 0x44);
      param_1[0x16] = *(int *)(iVar13 + 0x48);
      param_1[0x17] = *(int *)(iVar13 + 0x4c);
      fVar1 = *(float *)(iVar13 + 0x10);
      fVar2 = *(float *)(iVar13 + 0x14);
      fVar3 = *(float *)(iVar13 + 0x18);
      fVar4 = *(float *)(iVar13 + 0x20);
      fVar5 = *(float *)(iVar13 + 0x24);
      fVar6 = *(float *)(iVar13 + 0x28);
      fVar11 = SQRT(*(float *)(iVar13 + 0x38) * *(float *)(iVar13 + 0x38) +
                    *(float *)(iVar13 + 0x34) * *(float *)(iVar13 + 0x34) +
                    *(float *)(iVar13 + 0x30) * *(float *)(iVar13 + 0x30));
      fVar7 = *(float *)(iVar13 + 0x28);
      fVar8 = *(float *)(iVar13 + 0x38);
      fVar16 = (float10)FUN_00ddbaa0(-(*(float *)(iVar13 + 0x18) / fVar11));
      fVar9 = *(float *)(iVar13 + 0x14);
      fVar10 = *(float *)(iVar13 + 0x10);
      fVar15 = (float10)fpatan((float10)(fVar7 / fVar11),(float10)(fVar8 / fVar11));
      param_1[0x24] = (int)(float)fVar15;
      param_1[0x25] = (int)(float)fVar16;
      fVar16 = (float10)fpatan((float10)fVar9 /
                               (float10)SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6),
                               (float10)fVar10 /
                               (float10)SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3));
      param_1[0x26] = (int)(float)fVar16;
    }
    FUN_00db3e80(0,0,&DAT_01bea1d0);
    FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e22f10(0);
    _DAT_01bea860 = 1;
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar13 = FUN_00a94ce0(0);
    if (iVar13 != 0) {
      FUN_00aa4520(0x106,iVar12,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      iVar12 = FUN_00a12210(0xf00);
      if (iVar12 != 0) {
        param_1[0x14] = *(int *)(iVar12 + 0x40);
        param_1[0x15] = *(int *)(iVar12 + 0x44);
        param_1[0x16] = *(int *)(iVar12 + 0x48);
        param_1[0x17] = *(int *)(iVar12 + 0x4c);
        fVar1 = *(float *)(iVar12 + 0x10);
        fVar2 = *(float *)(iVar12 + 0x14);
        fVar3 = *(float *)(iVar12 + 0x18);
        fVar4 = *(float *)(iVar12 + 0x20);
        fVar5 = *(float *)(iVar12 + 0x24);
        fVar6 = *(float *)(iVar12 + 0x28);
        fVar11 = SQRT(*(float *)(iVar12 + 0x38) * *(float *)(iVar12 + 0x38) +
                      *(float *)(iVar12 + 0x34) * *(float *)(iVar12 + 0x34) +
                      *(float *)(iVar12 + 0x30) * *(float *)(iVar12 + 0x30));
        fVar7 = *(float *)(iVar12 + 0x28);
        fVar8 = *(float *)(iVar12 + 0x38);
        fVar16 = (float10)FUN_00ddbaa0(-(*(float *)(iVar12 + 0x18) / fVar11));
        fVar9 = *(float *)(iVar12 + 0x14);
        fVar10 = *(float *)(iVar12 + 0x10);
        fVar15 = (float10)fpatan((float10)(fVar7 / fVar11),(float10)(fVar8 / fVar11));
        param_1[0x24] = (int)(float)fVar15;
        param_1[0x25] = (int)(float)fVar16;
        fVar16 = (float10)fpatan((float10)fVar9 /
                                 (float10)SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6),
                                 (float10)fVar10 /
                                 (float10)SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3));
        param_1[0x26] = (int)(float)fVar16;
      }
      FUN_00db3e80(0,0,&DAT_01bea1d0);
      FUN_00a92f90();
      FUN_00e26e90();
      FUN_00e22f10(0);
      _DAT_01bea860 = 1;
      FUN_00b94790(0x3f800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    (**(code **)(*param_1 + 0x220))(0x40a00000);
    iVar12 = FUN_00a12210(0xf00);
    if (iVar12 != 0) {
      param_1[0x14] = *(int *)(iVar12 + 0x40);
      param_1[0x15] = *(int *)(iVar12 + 0x44);
      param_1[0x16] = *(int *)(iVar12 + 0x48);
      param_1[0x17] = *(int *)(iVar12 + 0x4c);
      fVar1 = *(float *)(iVar12 + 0x10);
      fVar2 = *(float *)(iVar12 + 0x14);
      fVar3 = *(float *)(iVar12 + 0x18);
      fVar4 = *(float *)(iVar12 + 0x20);
      fVar5 = *(float *)(iVar12 + 0x24);
      fVar6 = *(float *)(iVar12 + 0x28);
      fVar11 = SQRT(*(float *)(iVar12 + 0x38) * *(float *)(iVar12 + 0x38) +
                    *(float *)(iVar12 + 0x34) * *(float *)(iVar12 + 0x34) +
                    *(float *)(iVar12 + 0x30) * *(float *)(iVar12 + 0x30));
      fVar7 = *(float *)(iVar12 + 0x28);
      fVar8 = *(float *)(iVar12 + 0x38);
      fVar16 = (float10)FUN_00ddbaa0(-(*(float *)(iVar12 + 0x18) / fVar11));
      fVar9 = *(float *)(iVar12 + 0x14);
      fVar10 = *(float *)(iVar12 + 0x10);
      fVar15 = (float10)fpatan((float10)(fVar7 / fVar11),(float10)(fVar8 / fVar11));
      param_1[0x24] = (int)(float)fVar15;
      param_1[0x25] = (int)(float)fVar16;
      fVar16 = (float10)fpatan((float10)fVar9 /
                               (float10)SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6),
                               (float10)fVar10 /
                               (float10)SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3));
      param_1[0x26] = (int)(float)fVar16;
    }
    FUN_00db3e80(0,0,&DAT_01bea1d0);
    FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e22f10(0);
    _DAT_01bea860 = 1;
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar12 = FUN_00a8c760(0x20);
    if (iVar12 != 0) {
      param_1[0x1029] = param_1[0x102a];
      FUN_00b89db0(1,0x3dcccccd);
      FUN_00a96030(0,0x3d4ccccd);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 3:
    (**(code **)(*param_1 + 0x220))(0x40a00000);
    iVar12 = FUN_00a12210(0xf00);
    if (iVar12 != 0) {
      param_1[0x14] = *(int *)(iVar12 + 0x40);
      param_1[0x15] = *(int *)(iVar12 + 0x44);
      param_1[0x16] = *(int *)(iVar12 + 0x48);
      param_1[0x17] = *(int *)(iVar12 + 0x4c);
      fVar1 = *(float *)(iVar12 + 0x10);
      fVar2 = *(float *)(iVar12 + 0x14);
      fVar3 = *(float *)(iVar12 + 0x18);
      fVar4 = *(float *)(iVar12 + 0x20);
      fVar5 = *(float *)(iVar12 + 0x24);
      fVar6 = *(float *)(iVar12 + 0x28);
      fVar11 = SQRT(*(float *)(iVar12 + 0x38) * *(float *)(iVar12 + 0x38) +
                    *(float *)(iVar12 + 0x34) * *(float *)(iVar12 + 0x34) +
                    *(float *)(iVar12 + 0x30) * *(float *)(iVar12 + 0x30));
      fVar7 = *(float *)(iVar12 + 0x28);
      fVar8 = *(float *)(iVar12 + 0x38);
      fVar16 = (float10)FUN_00ddbaa0(-(*(float *)(iVar12 + 0x18) / fVar11));
      fVar9 = *(float *)(iVar12 + 0x14);
      fVar10 = *(float *)(iVar12 + 0x10);
      fVar15 = (float10)fpatan((float10)(fVar7 / fVar11),(float10)(fVar8 / fVar11));
      param_1[0x24] = (int)(float)fVar15;
      param_1[0x25] = (int)(float)fVar16;
      fVar16 = (float10)fpatan((float10)fVar9 /
                               (float10)SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6),
                               (float10)fVar10 /
                               (float10)SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3));
      param_1[0x26] = (int)(float)fVar16;
    }
    FUN_00db3e80(0,0,&DAT_01bea1d0);
    FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e22f10(0);
    _DAT_01bea860 = 1;
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar12 = FUN_00a94ce0(0);
    if (iVar12 != 0) {
      uStack_34 = 0;
      uStack_30 = 0xbf20d97c;
      uStack_2c = 0;
      uStack_24 = 0x42140000;
      uStack_20 = 0x42b80000;
      uStack_1c = 0xc2ef0000;
      (**(code **)(*param_1 + 0x7c))(&uStack_24,&uStack_34);
      FUN_00aa4520(0x107,uStack_54,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
      FUN_00db3e80(0,0,&DAT_01bea1d0);
      FUN_00a92f90();
      FUN_00e26e90();
      FUN_00e22f10(0);
      _DAT_01bea860 = 1;
      FUN_00b94790(0x3f800000,0x3f800000);
      param_1[0x187] = 4;
      return;
    }
    if ((float)param_1[0x1029] <= 0.0) {
      param_1[0x1029] = -0x40800000;
      FUN_00a96030(0,0x3f800000);
      iVar12 = FUN_004b7e20(piVar14);
      if (iVar12 != 0) {
        FUN_004b4f60(1);
      }
    }
    else {
      FUN_00b7ab30(0x40a00000);
    }
    if ((float)param_1[0xd09] <= (float)param_1[0x1028]) {
      fVar1 = (float)param_1[0x1029] - 1.0;
      param_1[0x1029] = (int)fVar1;
      if (((fVar1 < (float)param_1[0x102a] - (float)param_1[0x102b]) &&
          ((float)param_1[0x102a] - (float)param_1[0x102c] < fVar1)) &&
         ((param_1[0x33e] & param_1[0x394]) != 0)) {
        uVar17 = 0;
        FUN_00a92f90(0);
        fVar16 = (float10)FUN_0043f390(uVar17);
        FUN_00b7ab30((float)(fVar16 * (float10)60.0));
        uVar17 = 0;
        FUN_00a92f90(0);
        fVar15 = (float10)FUN_00407b40(uVar17);
        param_1[0x24f] = (int)(float)fVar15;
        FUN_00b7dbe0(5);
        FUN_00b89c20(0x102,6,5,uStack_4c,(float)(fVar16 * (float10)60.0),0x41f00000,0x41f00000,0);
        DAT_01dc08d8 = 1;
        return;
      }
    }
    break;
  case 4:
    (**(code **)(*param_1 + 0x220))(0x40a00000);
    FUN_00db3e80(0,0,&DAT_01bea1d0);
    FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e22f10(0);
    _DAT_01bea860 = 1;
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar12 = FUN_00a94ce0(0);
    if (iVar12 != 0) {
      iVar12 = FUN_004b7e20(piVar14);
      if (iVar12 != 0) {
        FUN_004b4f60(0);
      }
      FUN_008e6d00();
      FUN_00ba6810(1,0);
      (**(code **)(*param_1 + 0x388))(0);
      FUN_00dc1270(0,0);
      return;
    }
    break;
  case 5:
    (**(code **)(*param_1 + 0x220))(0x40a00000);
    uVar17 = 0;
    FUN_00a92f90(0);
    fVar16 = (float10)FUN_0043f390(uVar17);
    FUN_00b7ab30((float)(fVar16 * (float10)60.0));
    uVar17 = 0;
    FUN_00a92f90(0);
    fVar15 = (float10)FUN_00407b40(uVar17);
    param_1[0x24f] = (int)(float)fVar15;
    FUN_00b7dbe0(5);
    FUN_00b89c20(0x102,6,5,iVar12,(float)(fVar16 * (float10)60.0),0x41f00000,0x41f00000,0);
    DAT_01dc08d8 = 1;
    return;
  case 6:
    FUN_00b7ab30(0);
    if ((piVar14 != (int *)0x0) &&
       (iVar13 = (**(code **)(*piVar14 + 0x14c))(0x45,param_1[0x13c]), iVar13 != 0)) {
      (**(code **)(*piVar14 + 0x150))(0x45,param_1[0x13c]);
      FUN_00a8caf0(0x103,0,0,0);
      return;
    }
    iVar13 = FUN_00a12210(0xf00);
    if (iVar13 != 0) {
      (**(code **)(*param_1 + 0x7c))(iVar13 + 0x40,iVar13 + 0x90);
    }
    uVar18 = 0x3f800000;
    uVar17 = 0;
    FUN_00a92f90(0,0x3f800000);
    fVar16 = (float10)FUN_00407b40(uVar17);
    FUN_00aa4520(0x106,iVar12,0,0,0x3f800000,0x8000000,
                 (float)((float10)(float)param_1[0x244] * (float10)0.016666668 + fVar16),uVar18);
    param_1[0x187] = 3;
    FUN_00db3e80(0,0,&DAT_01bea1d0);
    FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e22f10(0);
    _DAT_01bea860 = 1;
    FUN_00b94790(0x3f800000,0x3f800000);
    return;
  }
  return;
}

// 004C8FC0  FUN_004c8fc0  size=1176  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004c8fc0(int *param_1)

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
  float fVar10;
  float fVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  float10 fVar15;
  float10 fVar16;
  undefined *puVar17;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  iVar12 = FUN_00a81330();
  piVar14 = (int *)0x0;
  if (iVar12 != 0) {
    piVar14 = (int *)FUN_00a7c8a0();
  }
  iVar13 = param_1[0x187];
  if (iVar13 == 0) {
    FUN_00bee830();
    DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
    if (piVar14 != (int *)0x0) {
      puVar17 = &DAT_01b34e80;
      (**(code **)(*piVar14 + 4))(&DAT_01b34e80);
      iVar13 = FUN_00dd6d70(puVar17);
      if (iVar13 != 0) {
        piVar14[0x4ce] = 1;
        FUN_00cad200(1);
      }
    }
    FUN_008e3c10();
    FUN_00aa4520(0x108,iVar12,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    iVar13 = FUN_00a81330();
    if (iVar13 != 0) {
      FUN_00a81330();
      iVar13 = FUN_00a7c8a0();
      if (iVar13 != 0) {
        FUN_00aa4870(0x11017,0x12d,iVar12,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
        param_1[0x2e7] = 4;
      }
    }
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (iVar13 != 1) {
    if (iVar13 != 2) {
      return;
    }
    FUN_00db3e80(0,0,&DAT_01bea1d0);
    FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e22f10(0);
    _DAT_01bea860 = 1;
    FUN_00dc1270(0,0);
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar12 = FUN_00a94ce0(0);
    if (iVar12 == 0) {
      return;
    }
    if (piVar14 != (int *)0x0) {
      puVar17 = &DAT_01b34e80;
      (**(code **)(*piVar14 + 4))(&DAT_01b34e80);
      iVar12 = FUN_00dd6d70(puVar17);
      if (iVar12 != 0) {
        piVar14[0x4ce] = 0;
        FUN_00cad200(0);
      }
    }
    FUN_00ba6810(1,0);
    FUN_008e6d00();
    (**(code **)(*param_1 + 0x388))(0);
    return;
  }
  iVar13 = FUN_00a12210(0xf00);
  if (iVar13 != 0) {
    param_1[0x14] = *(int *)(iVar13 + 0x40);
    param_1[0x15] = *(int *)(iVar13 + 0x44);
    param_1[0x16] = *(int *)(iVar13 + 0x48);
    param_1[0x17] = *(int *)(iVar13 + 0x4c);
    fVar1 = *(float *)(iVar13 + 0x10);
    fVar2 = *(float *)(iVar13 + 0x14);
    fVar3 = *(float *)(iVar13 + 0x18);
    fVar4 = *(float *)(iVar13 + 0x20);
    fVar5 = *(float *)(iVar13 + 0x24);
    fVar6 = *(float *)(iVar13 + 0x28);
    fVar11 = SQRT(*(float *)(iVar13 + 0x38) * *(float *)(iVar13 + 0x38) +
                  *(float *)(iVar13 + 0x34) * *(float *)(iVar13 + 0x34) +
                  *(float *)(iVar13 + 0x30) * *(float *)(iVar13 + 0x30));
    fVar7 = *(float *)(iVar13 + 0x28);
    fVar8 = *(float *)(iVar13 + 0x38);
    fVar15 = (float10)FUN_00ddbaa0(-(*(float *)(iVar13 + 0x18) / fVar11));
    fVar9 = *(float *)(iVar13 + 0x14);
    fVar10 = *(float *)(iVar13 + 0x10);
    fVar16 = (float10)fpatan((float10)(fVar7 / fVar11),(float10)(fVar8 / fVar11));
    param_1[0x24] = (int)(float)fVar16;
    param_1[0x25] = (int)(float)fVar15;
    fVar15 = (float10)fpatan((float10)fVar9 /
                             (float10)SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6),
                             (float10)fVar10 /
                             (float10)SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3));
    param_1[0x26] = (int)(float)fVar15;
  }
  FUN_00db3e80(0,0,&DAT_01bea1d0);
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e22f10(0);
  _DAT_01bea860 = 1;
  FUN_00b94790(0x3f800000,0x3f800000);
  iVar13 = FUN_00a94ce0(0);
  if (iVar13 != 0) {
    local_30 = 0;
    local_2c = 0xbf20d97c;
    local_28 = 0;
    local_20 = 0x42140000;
    local_1c = 0x42b80000;
    local_18 = 0xc2ef0000;
    (**(code **)(*param_1 + 0x7c))(&local_20,&local_30);
    FUN_00aa4520(0x109,iVar12,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    iVar13 = FUN_00a81330();
    if (iVar13 != 0) {
      FUN_00a81330();
      iVar13 = FUN_00a7c8a0();
      if (iVar13 != 0) {
        FUN_00aa4870(0x11017,0x12e,iVar12,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
        param_1[0x2e7] = 4;
      }
    }
    FUN_00db3e80(0,0,&DAT_01bea1d0);
    FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e22f10(0);
    _DAT_01bea860 = 1;
    FUN_00b94790(0x3f800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  return;
}

// 004C9460  FUN_004c9460  size=643  [callgraph]
void __fastcall FUN_004c9460(int param_1)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  
  iVar3 = *(int *)(param_1 + 0x61c);
  if (iVar3 == 0) {
    FUN_00aa4080(7,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    iVar3 = FUN_00a81330();
    if ((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
      FUN_00aa4080(7,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    iVar3 = FUN_00a81330();
    if ((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
      FUN_00aa4120(4,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (iVar3 != 1) {
    if (iVar3 != 2) {
      return;
    }
    pfVar1 = (float *)(param_1 + 0x10e0);
    FUN_004b94a0(pfVar1,0x3dcccccd,0x3d567750);
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    fVar2 = (*(float *)(param_1 + 0x48) - *(float *)(param_1 + 0x10e8)) *
            *(float *)(param_1 + 0x10f8) +
            *(float *)(param_1 + 0x10f4) *
            (*(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x10e4)) +
            *(float *)(param_1 + 0x10f0) * (*(float *)(param_1 + 0x40) - *pfVar1);
    fVar4 = (float10)FUN_00a8ec30(pfVar1);
    fVar4 = (float10)FUN_00ddba30((float)((float10)*(float *)(param_1 + 0x94) - fVar4));
    if ((float10)0.7853982 <= ABS(fVar4)) {
      return;
    }
    if (10.889999 <= fVar2 * fVar2) {
      return;
    }
    FUN_004beea0(0x60000);
    FUN_004b9460();
    return;
  }
  FUN_004b94a0(param_1 + 0x10e0,0x3dcccccd,0x3d567750);
  FUN_004be8c0(0x3f800000,0x3f800000);
  FUN_004beaa0();
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    FUN_00aa4080(6,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    iVar3 = FUN_00a81330();
    if ((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
      FUN_00aa4080(6,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    }
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  return;
}

// 004C96F0  FUN_004c96f0  size=847  [callgraph]
void __fastcall FUN_004c96f0(int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  float fStack_20;
  int iStack_1c;
  float fStack_18;
  float fStack_14;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x89,0,0x3e4ccccd,0x3f800000,0x8038000,0xbf800000,0x3f800000);
    iVar3 = FUN_00a81330();
    if ((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
      FUN_00aa4080(0x89,0,0x3e4ccccd,0x3f800000,0x8038000,0xbf800000,0x3f800000);
    }
    iVar3 = FUN_00a81330();
    if ((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
      FUN_00aa4080(0x25,0,0x3e4ccccd,0x3f800000,0x8038000,0xbf800000,0x3f800000);
    }
    (**(code **)(*param_1 + 0x318))();
    iVar3 = param_1[0x1d9];
    if (*(int *)(iVar3 + 0x104) != 1) {
      *(undefined4 *)(iVar3 + 0x104) = 1;
      *(undefined4 *)(*(int *)(iVar3 + 0xd0) + 4) = 0;
    }
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x441] = 0x44610000;
    param_1[0x188] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_004be8c0(0x3f800000,0x3f800000);
  FUN_004beaa0();
  iVar3 = FUN_00a8c760(0);
  if (iVar3 != 0) {
    fVar4 = (float10)fpatan((float10)(float)param_1[0x43c],(float10)(float)param_1[0x43e]);
    fVar1 = (float)fVar4;
    iVar3 = (**(code **)(*param_1 + 0x84))();
    fVar2 = *(float *)(iVar3 + 4);
    fVar4 = (float10)FUN_00ddba30(fVar1 - fVar2);
    fVar4 = (float10)FUN_00ddba30((float)(fVar4 * (float10)0.4 + (float10)fVar2));
    param_1[0x25] = (int)(float)fVar4;
    iVar3 = (**(code **)(*param_1 + 0x84))();
    fVar4 = (float10)FUN_00ddba30(*(float *)(iVar3 + 4) - fVar1);
    if (ABS(fVar4) < (float10)0.017453292) {
      param_1[0x25] = (int)fVar1;
    }
  }
  iVar3 = FUN_00a12210(0xf00);
  if (iVar3 != 0) {
    fStack_20 = (float)param_1[0x10] - *(float *)(iVar3 + 0x40);
    fStack_18 = (float)param_1[0x12] - *(float *)(iVar3 + 0x48);
    fStack_14 = (float)param_1[0x13] - *(float *)(iVar3 + 0x4c);
    iVar3 = param_1[0x188];
    iStack_1c = 0;
    if (iVar3 == 0) {
      iVar3 = FUN_00a8c760(10);
      if (iVar3 != 0) {
        FUN_009f8ae0(param_1[0x440]);
        param_1[0x188] = param_1[0x188] + 1;
      }
    }
    else if (iVar3 == 1) {
      param_1[0x14] =
           (int)(((fStack_20 + (float)param_1[0x438]) - (float)param_1[0x14]) * 0.1 +
                (float)param_1[0x14]);
      param_1[0x15] =
           (int)(((float)param_1[0x15] - (float)param_1[0x15]) * 0.1 + (float)param_1[0x15]);
      param_1[0x16] =
           (int)((((float)param_1[0x43a] + fStack_18) - (float)param_1[0x16]) * 0.1 +
                (float)param_1[0x16]);
      param_1[0x17] =
           (int)((((float)param_1[0x43b] + fStack_14) - (float)param_1[0x17]) * 0.1 +
                (float)param_1[0x17]);
      iVar3 = FUN_00a8c760(10);
      if (iVar3 == 0) {
        param_1[0x188] = param_1[0x188] + 1;
      }
    }
    else if (iVar3 == 2) {
      param_1[0x14] = (int)(fStack_20 + (float)param_1[0x438]);
      param_1[0x15] = param_1[0x15];
      param_1[0x16] = (int)((float)param_1[0x43a] + fStack_18);
      param_1[0x17] = (int)((float)param_1[0x43b] + fStack_14);
      param_1[0x188] = param_1[0x188] + 1;
    }
  }
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    param_1[0x370] = param_1[0x370] | 0x800000;
    param_1[0x444] = (int)fStack_20;
    param_1[0x445] = iStack_1c;
    param_1[0x446] = (int)fStack_18;
    param_1[0x447] = (int)fStack_14;
    (**(code **)(*param_1 + 0x34c))();
  }
  return;
}

// 004C9A40  FUN_004c9a40  size=565  [callgraph]
void __fastcall FUN_004c9a40(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  float10 fVar8;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined4 local_20;
  float local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if ((*(int *)(param_1 + 0x61c) != 0) &&
     (iVar6 = FUN_00c19f60(*(undefined4 *)(param_1 + 0xb9c),2), iVar6 != 0)) {
    local_20 = *(undefined4 *)(param_1 + 0x40);
    local_18 = *(undefined4 *)(param_1 + 0x48);
    local_14 = *(undefined4 *)(param_1 + 0x4c);
    local_1c = *(float *)(param_1 + 0x44) + 9.0;
    cVar4 = FUN_00ca30d0(&local_20);
    fVar1 = *(float *)(param_1 + 0x44);
    fVar2 = *(float *)(*(int *)(param_1 + 0xa84) + 0x44);
    fVar8 = (float10)FUN_004bce00(*(int *)(param_1 + 0xa84) + 0x40);
    fVar3 = (float)fVar8;
    cVar5 = FUN_00ca30d0(*(int *)(param_1 + 0xa84) + 0x40);
    if ((cVar5 != '\0') && ((ABS(fVar1 - fVar2) < 4.0 && (fVar3 < 2.0)))) {
      *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0x920);
    }
    if (90.0 < *(float *)(param_1 + 0x920)) {
      if (cVar4 != '\0') {
        FUN_004beea0(0x60002);
        return;
      }
      FUN_004beea0(0x60005);
      return;
    }
    if ((2.0 < ABS(fVar3)) &&
       (fVar1 = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0x924),
       *(float *)(param_1 + 0x924) = fVar1, 30.0 < fVar1)) {
      fVar1 = *(float *)(param_1 + 0x10f4) * 0.0;
      if (fVar3 <= 0.0) {
        fVar2 = -1.5;
        uVar7 = 0x60003;
      }
      else {
        fVar2 = 1.5;
        uVar7 = 0x60004;
      }
      local_30 = (fVar1 - *(float *)(param_1 + 0x10f8)) * fVar2 + *(float *)(param_1 + 0x40);
      local_2c = ((*(float *)(param_1 + 0x10f8) * 0.0 - *(float *)(param_1 + 0x10f0) * 0.0) + 0.26)
                 * fVar2 + 2.0 + *(float *)(param_1 + 0x44);
      local_28 = (*(float *)(param_1 + 0x10f0) - fVar1) * fVar2 + *(float *)(param_1 + 0x48);
      local_24 = local_24 * fVar2 + *(float *)(param_1 + 0x4c);
      cVar4 = FUN_00ca30d0(&local_30);
      if (cVar4 != '\0') {
        FUN_004beea0(uVar7);
        return;
      }
    }
  }
  return;
}

// 004C9C80  FUN_004c9c80  size=276  [callgraph]
void __fastcall FUN_004c9c80(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x8a,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        FUN_00aa4080(0x8a,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      }
    }
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        FUN_00aa4080(0x26,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      }
    }
    FUN_004baad0();
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x920) = 0;
    *(undefined4 *)(param_1 + 0x924) = 0;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_004be8c0(0x3f800000,0x3f800000);
  FUN_004beaa0();
  return;
}

// 004C9DA0  FUN_004c9da0  size=294  [callgraph]
void __fastcall FUN_004c9da0(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x8e,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    iVar1 = FUN_00a81330();
    if ((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
      FUN_00aa4080(0x8e,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    }
    iVar1 = FUN_00a81330();
    if ((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
      FUN_00aa4080(0x26,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    }
    param_1[0x370] = param_1[0x370] | 0x800000;
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_004be8c0(0x3f800000,0x3f800000);
  FUN_004beaa0();
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004c9ec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 004C9ED0  FUN_004c9ed0  size=516  [callgraph]
void __fastcall FUN_004c9ed0(int *param_1)

{
  char cVar1;
  int iVar2;
  float10 fVar3;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x90,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    iVar2 = FUN_00a81330();
    if ((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
      FUN_00aa4080(0x90,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    }
    iVar2 = FUN_00a81330();
    if ((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
      FUN_00aa4080(0x26,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    }
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_004be8c0(0x3f800000,0x3f800000);
  FUN_004beaa0();
  local_20 = (float)param_1[0x10] + ((float)param_1[0x43e] - (float)param_1[0x43d] * 0.0) * 1.5;
  local_18 = (float)param_1[0x12] + ((float)param_1[0x43d] * 0.0 - (float)param_1[0x43c]) * 1.5;
  local_14 = local_14 * 1.5 + (float)param_1[0x13];
  local_1c = (float)param_1[0x11] +
             (((float)param_1[0x43c] * 0.0 - (float)param_1[0x43e] * 0.0) + 0.26) * 1.5 + 2.0;
  fVar3 = (float10)FUN_004bce00(param_1[0x2a1] + 0x40);
  iVar2 = FUN_00c19f60(param_1[0x2e7],2);
  if ((((float)fVar3 <= -0.5) && (iVar2 != 0)) && (cVar1 = FUN_00ca30d0(&local_20), cVar1 != '\0'))
  {
    return;
  }
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 004CA0E0  FUN_004ca0e0  size=518  [callgraph]
void __fastcall FUN_004ca0e0(int *param_1)

{
  char cVar1;
  int iVar2;
  float10 fVar3;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x8f,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    iVar2 = FUN_00a81330();
    if ((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
      FUN_00aa4080(0x8f,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    }
    iVar2 = FUN_00a81330();
    if ((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
      FUN_00aa4080(0x26,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    }
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_004be8c0(0x3f800000,0x3f800000);
  FUN_004beaa0();
  local_20 = (float)param_1[0x10] + ((float)param_1[0x43d] * 0.0 - (float)param_1[0x43e]) * 1.5;
  local_18 = (float)param_1[0x12] + ((float)param_1[0x43c] - (float)param_1[0x43d] * 0.0) * 1.5;
  local_14 = local_14 * 1.5 + (float)param_1[0x13];
  local_1c = (float)param_1[0x11] +
             (((float)param_1[0x43e] * 0.0 - (float)param_1[0x43c] * 0.0) + 0.26) * 1.5 + 2.0;
  fVar3 = (float10)FUN_004bce00(param_1[0x2a1] + 0x40);
  iVar2 = FUN_00c19f60(param_1[0x2e7],2);
  if (((0.5 <= (float)fVar3) && (iVar2 != 0)) && (cVar1 = FUN_00ca30d0(&local_20), cVar1 != '\0')) {
    return;
  }
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 004CA2F0  FUN_004ca2f0  size=947  [callgraph]
void __fastcall FUN_004ca2f0(int *param_1)

{
  int iVar1;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x8b,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_004be9b0(0x8b,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_004bed90(0x27,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    (**(code **)(*param_1 + 0x1d4))(1);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = -0x42333333;
    param_1[0x249] = 0;
  case 1:
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x314))();
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
      param_1[0x370] = param_1[0x370] & 0xff7fffff;
      FUN_009f8b10();
      iVar1 = (**(code **)(*param_1 + 800))(0x3d888889);
      if (iVar1 == 0) {
        FUN_00aa4080(0x8c,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
        FUN_004be9b0(0x8c,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
        FUN_004bed90(4,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
        iVar1 = FUN_00a12210(0);
        if (iVar1 != 0) {
          param_1[0x248] = (int)(*(float *)(iVar1 + 0x44) - (float)param_1[0x249]);
        }
        param_1[0x187] = 2;
        param_1[0x225] = param_1[0x248];
      }
      else {
        FUN_00aa4080(0x8d,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        FUN_004be9b0(0x8d,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        FUN_004bed90(4,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
        param_1[0x187] = 3;
      }
    }
    iVar1 = FUN_00a12210(0);
    if (iVar1 != 0) {
      param_1[0x249] = *(int *)(iVar1 + 0x44);
      return;
    }
    break;
  case 2:
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    iVar1 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar1 != 0) {
      FUN_00aa4080(0x8d,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_004be9b0(0x8d,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = 3;
      return;
    }
    break;
  case 3:
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x004ca69f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 004CA6C0  FUN_004ca6c0  size=741  [callgraph]
void __fastcall FUN_004ca6c0(int *param_1)

{
  int iVar1;
  
  switch(param_1[0x187]) {
  case 0:
    (**(code **)(*param_1 + 0x1d4))(1);
    (**(code **)(*param_1 + 0x314))();
    if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
      *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
    }
    param_1[0x370] = param_1[0x370] & 0xff7fffff;
    FUN_009f8b10();
    FUN_00aa4080(0x91,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_004be9b0(0x91,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_004bed90(0x28,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_00aa3f60(0x62);
      FUN_004be980(0x62);
      FUN_004bed60(4);
      param_1[0x187] = param_1[0x187] + 1;
    }
  case 2:
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    iVar1 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x1d4))(0);
      param_1[0x22a] = param_1[0x41c];
      FUN_00aa4080(99,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_004be9b0(99,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      iVar1 = FUN_00a81330();
      if ((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
        FUN_00aa3f60(4);
      }
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 3:
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_00aa4080(0x5f,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_004be9b0(0x5f,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 4:
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x004ca9a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 004CBA30  Em0110::vf50  size=141  [class]
void __fastcall Em0110::vf50(int param_1)

{
  int iVar1;
  
  if ((*(uint *)(param_1 + 0xdc0) & 0x8000000) != 0) {
    FUN_004b7970();
  }
  if ((*(int *)(param_1 + 0x764) == 0) || (*(int *)(*(int *)(param_1 + 0x764) + 0x10c) != 0)) {
    FUN_00a93170();
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    FUN_00a7c8a0();
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x7b0) != 0)) {
      FUN_008f3cb0(iVar1);
    }
  }
  FUN_004bf630();
  if (*(int *)(param_1 + 0x7b0) != 0) {
    FUN_008f3cb0(param_1);
  }
  BehaviorEmBase::vf50();
  return;
}

// 004CBAC0  Em0110::vf264  size=509  [class]
undefined4 __thiscall Em0110::vf264(int *param_1,float param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 uVar4;
  char *pcVar5;
  bool bVar6;
  
  FUN_0040ac60(param_2);
  FUN_00aa0920(param_1[0x2c3]);
  param_1[0x1f8] = 1;
  *(undefined4 *)(param_1[0x1f6] + 0x85c) = 0x3f000000;
  iVar2 = param_1[0x42e];
  param_2 = 1.0;
  if (iVar2 == 0) {
    iVar2 = param_1[0x4b9];
  }
  else if (iVar2 == 1) {
    iVar2 = param_1[0x4ba];
  }
  else if (iVar2 == 2) {
    iVar2 = param_1[0x4bb];
  }
  else {
    iVar2 = 1;
  }
  param_1[0x419] = iVar2;
  iVar2 = FUN_00d454c0();
  if (iVar2 != 0) {
    pcVar5 = "mistral02";
    pbVar3 = DAT_018b925c;
    if (DAT_018b9174 != 0x20a) {
      pcVar5 = "P170_MISTRAL02";
    }
    do {
      bVar1 = *pbVar3;
      bVar6 = bVar1 < (byte)*pcVar5;
      if (bVar1 != *pcVar5) {
LAB_004cbb90:
        iVar2 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_004cbb95;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar6 = bVar1 < (byte)pcVar5[1];
      if (bVar1 != pcVar5[1]) goto LAB_004cbb90;
      pcVar5 = pcVar5 + 2;
      pbVar3 = pbVar3 + 2;
    } while (bVar1 != 0);
    iVar2 = 0;
LAB_004cbb95:
    if (iVar2 == 0) {
      FUN_004be3c0();
      FUN_004b91b0(1,1);
      FUN_004b91b0(2,1);
      param_2 = 0.75;
    }
    else {
      pcVar5 = "mistral03";
      pbVar3 = DAT_018b925c;
      if (DAT_018b9174 != 0x20a) {
        pcVar5 = "P170_MISTRAL03";
      }
      do {
        bVar1 = *pbVar3;
        bVar6 = bVar1 < (byte)*pcVar5;
        if (bVar1 != *pcVar5) {
LAB_004cbbf0:
          iVar2 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
          goto LAB_004cbbf5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar6 = bVar1 < (byte)pcVar5[1];
        if (bVar1 != pcVar5[1]) goto LAB_004cbbf0;
        pbVar3 = pbVar3 + 2;
        pcVar5 = pcVar5 + 2;
      } while (bVar1 != 0);
      iVar2 = 0;
LAB_004cbbf5:
      if (iVar2 == 0) {
        FUN_004be5b0();
        FUN_004b91b0(0,1);
        FUN_004b91b0(1,1);
        FUN_004b91b0(2,1);
        param_2 = 0.5;
      }
    }
  }
  param_1[0x47e] = 1;
  if (param_2 < 1.0) {
    FUN_00a8eeb0();
    uVar4 = FUN_00fdbc60();
    FUN_00a8ee20(uVar4);
  }
  (**(code **)(*param_1 + 0x34c))();
  if (param_1[0x128] == 1) {
    FUN_004beea0(0x10001);
    param_1[0x1bb] = 0;
  }
  param_1[0x405] = 0x10002;
  param_1[0x47b] = 0x42900000;
  if (param_1[0x128] == 1) {
    FUN_00e5e0c0("em0110_voice_stop",param_1,0xffffffff,0);
  }
  return 1;
}

// 004CBCC0  Em0110::vf268  size=42  [class]
undefined4 __thiscall Em0110::vf268(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  if (*param_4 != 9) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x6ec) = 1;
  FUN_004beea0(0x10002);
  return 1;
}

// 004CBCF0  Em0110::vf30  size=185  [class]
void __fastcall Em0110::vf30(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      FUN_004cb450();
      FUN_00a7c950();
      if (*(int *)(param_1 + 0x7c4) != 0) {
        FUN_004bdf70(0);
        FUN_004bdf70(1);
        FUN_004bdf70(2);
      }
    }
  }
  iVar1 = FUN_00ac8120();
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x958) = (uint)(*(int *)(param_1 + 0x1350) != 0);
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      FUN_004caa70();
      FUN_004bdf70(3);
      FUN_00a7c950();
    }
  }
  BehaviorEmBase::vf30();
  return;
}

// 004CBDB0  FUN_004cbdb0  size=182  [callgraph]
void __thiscall FUN_004cbdb0(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_160 [348];
  
  uVar3 = 0;
  uVar1 = FUN_00a7c8a0(0);
  FUN_004039a0(param_2,uVar1,uVar3);
  FUN_00e03080(*(undefined4 *)(param_1 + 0x4f0),0);
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    FUN_00e03080(iVar2,1);
  }
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    FUN_00e03080(iVar2,2);
  }
  if ((*(int *)(param_1 + 0xa84) != 0) &&
     (iVar2 = *(int *)(*(int *)(param_1 + 0xa84) + 0x4f0), iVar2 != 0)) {
    FUN_00e03080(iVar2,3);
  }
  if (param_3 != 0) {
    FUN_00dffb20(param_3);
  }
  FUN_00a963e0(local_160);
  return;
}

// 004CBE70  FUN_004cbe70  size=150  [callgraph]
void __thiscall FUN_004cbe70(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_160 [348];
  
  uVar3 = 0;
  uVar1 = FUN_00a7c8a0(0);
  FUN_004039a0(param_2,uVar1,uVar3);
  FUN_00e03080(*(undefined4 *)(param_1 + 0x4f0),0);
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    FUN_00e03080(iVar2,1);
  }
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    FUN_00e03080(iVar2,2);
  }
  if (param_3 != 0) {
    FUN_00dffb20(param_3);
  }
  FUN_00a963e0(local_160);
  return;
}

// 004CBF10  FUN_004cbf10  size=68  [callgraph]
void __fastcall FUN_004cbf10(int param_1)

{
  undefined1 local_160 [348];
  
  if ((*(uint *)(param_1 + 0xdc0) & 0x200000) == 0) {
    FUN_004039a0(0x10,param_1,0);
    FUN_00a963e0(local_160);
    *(uint *)(param_1 + 0xdc0) = *(uint *)(param_1 + 0xdc0) | 0x200000;
  }
  return;
}

// 004CBF60  FUN_004cbf60  size=491  [callgraph]
undefined4 __fastcall FUN_004cbf60(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  float10 fVar6;
  int local_94;
  float local_90;
  int local_8c;
  int *local_88;
  undefined4 local_84;
  undefined4 local_80;
  float local_7c;
  undefined4 local_78;
  undefined4 local_74;
  int *local_70;
  undefined4 local_6c;
  undefined4 local_60;
  float local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  float local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  char *local_2c;
  undefined1 local_20 [28];
  
  if (*(int *)(param_1 + 0x10b8) != 1) {
    local_88 = (int *)(param_1 + 0x1234);
    iVar5 = 0;
    if (*local_88 != 0) {
      local_94 = 0;
      iVar1 = FUN_00907640(local_88,&local_94,0);
      if (((iVar1 != 0) && (local_94 != 0)) && (0 < *(int *)(local_94 + 0x14))) {
        local_8c = 0;
        do {
          iVar1 = *(int *)(*(int *)(local_94 + 0x10) + 0x28 + iVar5);
          if ((*(char *)(iVar1 + 0x18) != '\x01') ||
             (iVar1 = *(char *)(iVar1 + 0x10) + iVar1, iVar1 == 0)) {
LAB_004cc115:
            RayCastManager::getWork(local_88);
            uVar4 = FUN_00a8cab0();
            FUN_004beea0(0x1000b);
            *(undefined4 *)(param_1 + 0x1014) = uVar4;
            return 1;
          }
          iVar2 = FUN_009182b0(iVar1);
          if (iVar2 == 0) {
            local_84 = *(undefined4 *)(param_1 + 0x764);
            fVar6 = (float10)FUN_00913af0(iVar1);
            local_90 = (float)fVar6;
            fVar6 = (float10)hkBaseObject::hkBaseObject_217();
            if (fVar6 <= (float10)local_90) goto LAB_004cc115;
          }
          local_8c = local_8c + 1;
          iVar5 = iVar5 + 0x30;
        } while (local_8c < *(int *)(local_94 + 0x14));
      }
    }
    iVar5 = FUN_009f8b40();
    local_90 = *(float *)(*(int *)(param_1 + 0x764) + 0xfc) * 1.05;
    local_80 = *(undefined4 *)(param_1 + 0x40);
    local_78 = *(undefined4 *)(param_1 + 0x48);
    local_74 = *(undefined4 *)(param_1 + 0x4c);
    local_7c = local_90 + 0.25 + *(float *)(param_1 + 0x44);
    puVar3 = (undefined4 *)FUN_00a8b8a0(local_20,0x3f4ccccd);
    local_60 = local_80;
    local_70 = local_88;
    local_5c = local_7c;
    local_6c = 0;
    local_58 = local_78;
    local_3c = iVar5 << 0x10 | 7;
    local_54 = local_74;
    local_50 = *puVar3;
    local_4c = puVar3[1];
    local_48 = puVar3[2];
    local_44 = puVar3[3];
    local_38 = 0;
    local_34 = 0;
    local_40 = local_90;
    local_30 = 0;
    local_2c = "mist_jump";
    FUN_0090fb00(&local_70);
  }
  return 0;
}

// 004CC150  FUN_004cc150  size=53  [callgraph]
void __fastcall FUN_004cc150(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xa84);
  *(undefined4 *)(param_1 + 0x1000) = *(undefined4 *)(iVar1 + 0x40);
  *(undefined4 *)(param_1 + 0x1004) = *(undefined4 *)(iVar1 + 0x44);
  *(undefined4 *)(param_1 + 0x1008) = *(undefined4 *)(iVar1 + 0x48);
  *(undefined4 *)(param_1 + 0x100c) = *(undefined4 *)(iVar1 + 0x4c);
  FUN_004beea0(0x10005);
  return;
}

// 004CC190  FUN_004cc190  size=224  [callgraph]
void __fastcall FUN_004cc190(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  fVar2 = (float10)FUN_00a8ec30(*(int *)(param_1 + 0xa84) + 0x40);
  fVar2 = (float10)FUN_00ddba30((float)((float10)*(float *)(param_1 + 0x94) - fVar2));
  if ((float10)0.7853982 <= ABS(fVar2)) {
    fVar2 = (float10)FUN_00a8ec30(*(int *)(param_1 + 0xa84) + 0x40);
    fVar2 = (float10)FUN_00ddba30((float)((float10)*(float *)(param_1 + 0x94) - fVar2));
    if ((float10)2.3561945 < ABS(fVar2)) {
      FUN_004beea0(0x10004);
      return;
    }
    iVar1 = *(int *)(param_1 + 0xa84);
    *(undefined4 *)(param_1 + 0x1000) = *(undefined4 *)(iVar1 + 0x40);
    *(undefined4 *)(param_1 + 0x1004) = *(undefined4 *)(iVar1 + 0x44);
    *(undefined4 *)(param_1 + 0x1008) = *(undefined4 *)(iVar1 + 0x48);
    *(undefined4 *)(param_1 + 0x100c) = *(undefined4 *)(iVar1 + 0x4c);
    FUN_004beea0(0x10005);
    return;
  }
  if (*(float *)(param_1 + 0xa90) <= 25.0) {
    FUN_004beea0(0xe000b);
    return;
  }
  *(undefined4 *)(param_1 + 0x10a0) = *(undefined4 *)(param_1 + 0xa84);
  FUN_004beea0(0x10003);
  return;
}

// 004CC2D0  FUN_004cc2d0  size=128  [callgraph]
undefined4 FUN_004cc2d0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 == 0) {
      return 0;
    }
    if ((*(byte *)(iVar1 + 0x4c0) & 1) != 0) {
      return 0;
    }
    FUN_00a805f0();
    FUN_00a7c950();
  }
  iVar1 = FUN_00a81330();
  if ((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
    FUN_004cb520(3,param_1 == 0);
    return 1;
  }
  return 0;
}

// 004CC350  FUN_004cc350  size=693  [callgraph]
void __fastcall FUN_004cc350(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined1 local_20 [28];
  
  if (param_1[0x187] == 0) {
    iVar1 = FUN_00a81330();
    if (iVar1 == 0) {
LAB_004cc43a:
      FUN_00aa4080(0x10,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_004be9b0(0x10,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      uVar4 = 4;
    }
    else {
      iVar1 = FUN_00a7c8a0();
      if ((iVar1 == 0) || ((*(uint *)(iVar1 + 0x4c0) & 1) == 0)) goto LAB_004cc43a;
      FUN_00aa4080(0x36,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_004be9b0(0x36,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      uVar4 = 0x11;
    }
    FUN_004bed90(uVar4,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  iVar1 = FUN_00a8c760(4);
  iVar2 = FUN_00a8c760(0);
  if (iVar2 == 0) goto LAB_004cc5b1;
  if ((param_1[0x405] & 0xffff0000U) == 0x70000) {
    iVar2 = FUN_00a81330();
    if (iVar2 == 0) goto LAB_004cc5b1;
    iVar2 = FUN_00a7c8a0();
    if (iVar2 == 0) goto LAB_004cc5b1;
    puVar3 = (undefined1 *)(iVar2 + 0x40);
  }
  else if (param_1[0x405] == 0x1000a) {
    iVar2 = param_1[0x2a1] + 0x40;
    uVar4 = FUN_004b9b10(iVar2);
    FUN_004b9680(local_20,uVar4,iVar2);
    puVar3 = local_20;
  }
  else {
    puVar3 = (undefined1 *)(param_1[0x2a1] + 0x40);
  }
  FUN_004b94a0(puVar3,0x3dcccccd,0x3c8efa35);
LAB_004cc5b1:
  FUN_004be8c0(0x3f800000,0x3f800000);
  FUN_004beaa0();
  iVar2 = FUN_00a94ce0(0);
  if ((iVar2 != 0) || (iVar1 != 0)) {
    if (param_1[0x405] != -1) {
      FUN_004beea0(param_1[0x405]);
      return;
    }
    (**(code **)(*param_1 + 0x34c))();
  }
  return;
}

// 004CC610  FUN_004cc610  size=1819  [callgraph]
void __fastcall FUN_004cc610(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  undefined4 uVar7;
  float10 fVar8;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [92];
  
  switch(param_1[0x187]) {
  case 0:
    if (param_1[0x458] != 0) {
      RayCastManager::getWork(param_1 + 0x458);
    }
    pfVar6 = (float *)(param_1 + 0x45c);
    iVar5 = FUN_004bfb90(pfVar6);
    if (iVar5 == 0) {
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    if (param_1[0x186] == 0x1000e) {
      FUN_004bafa0();
    }
    param_1[0x370] = param_1[0x370] | 2;
    if (6.25 <= ((float)param_1[0x12] - (float)param_1[0x45e]) *
                ((float)param_1[0x12] - (float)param_1[0x45e]) +
                ((float)param_1[0x10] - *pfVar6) * ((float)param_1[0x10] - *pfVar6)) {
      if (param_1[0x404] == 0x1000b) {
        FUN_00aa4080(9,0,0x3e4ccccd,0x3f800000,0x8000000,0x3e088889,0x3f800000);
        FUN_004be9b0(9,0,0x3e4ccccd,0x3f800000,0x8000000,0x3e088889,0x3f800000);
        FUN_004bed90(5,0,0x3e4ccccd,0x3f800000,0x8000000,0x3e088889,0x3f800000);
        FUN_004cbf10();
        FUN_004be8c0(0x3f800000,0x3f800000);
        FUN_004beaa0();
        param_1[0x187] = 3;
        return;
      }
      fVar8 = (float10)FUN_004b5870(pfVar6);
      if (fVar8 <= (float10)2.5307274) {
        FUN_00aa4080(9,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        FUN_004be9b0(9,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        FUN_004bed90(5,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        param_1[0x187] = 1;
      }
      else {
        FUN_00aa4080(0xb,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        FUN_004be9b0(0xb,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        FUN_004bed90(7,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        param_1[0x187] = 2;
      }
      FUN_004b5020();
      goto switchD_004cc62f_caseD_1;
    }
    goto LAB_004cc6ac;
  case 1:
switchD_004cc62f_caseD_1:
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    FUN_004b94a0(param_1 + 0x45c,0x3e4ccccd,0x3e32b8c2);
    iVar5 = FUN_00a8c760(10);
    if (iVar5 != 0) {
      param_1[0x248] = 0;
      param_1[0x187] = 3;
      FUN_004cbf10();
      return;
    }
    break;
  case 2:
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    FUN_004b94a0(param_1 + 0x45c,0x3da3d70a,0x3cd67750);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      FUN_00aa4080(9,0,0x3e4ccccd,0x3f800000,0x8000000,0x3e088889,0x3f800000);
      FUN_004be9b0(9,0,0x3e4ccccd,0x3f800000,0x8000000,0x3e088889,0x3f800000);
      FUN_004bed90(5,0,0x3e4ccccd,0x3f800000,0x8000000,0x3e088889,0x3f800000);
      param_1[0x248] = 0;
      param_1[0x187] = 3;
      FUN_004cbf10();
      return;
    }
    break;
  case 3:
    if (param_1[0x42e] == 1) {
      iVar5 = (**(code **)(*param_1 + 0x84))();
      fVar1 = *(float *)(iVar5 + 4);
      fVar8 = (float10)FUN_00ddba30((float)param_1[0x45f] - fVar1);
      fVar8 = (float10)FUN_00ddba30((float)(fVar8 * (float10)0.15 + (float10)fVar1));
      param_1[0x25] = (int)(float)fVar8;
    }
    else {
      FUN_004b94a0(param_1 + 0x45c,0x3e4ccccd,0x3e32b8c2);
    }
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    iVar5 = FUN_004cbf60();
    if (iVar5 != 0) {
      return;
    }
    if (param_1[0x42e] == 1) {
      if ((param_1[0x458] != 0) && (iVar5 = FUN_00907560(param_1 + 0x458,0,0,0,0,0,0,0), iVar5 != 0)
         ) {
        iVar5 = FUN_00a8cab0();
        FUN_004beea0(0x1000b);
        param_1[0x405] = iVar5;
        return;
      }
      fStack_a0 = (float)param_1[0x10];
      fStack_98 = (float)param_1[0x12];
      fStack_94 = (float)param_1[0x13];
      fStack_9c = (float)param_1[0x11] + 0.1;
      pfVar6 = (float *)FUN_00a8b8a0(auStack_70,0x3fe66666);
      fStack_90 = *pfVar6 + fStack_a0;
      fStack_8c = pfVar6[1] + fStack_9c;
      fStack_88 = pfVar6[2] + fStack_98;
      fStack_84 = pfVar6[3] + fStack_94;
      uVar7 = FUN_009f8b40(0,0,0);
      uVar7 = FUN_00410130(7,uVar7);
      FUN_00468970(param_1 + 0x458,0,&fStack_a0,&fStack_90,uVar7,0,0,0,"em0110_dash_check",0,0);
      HavokRayCastManager::set(auStack_60);
    }
    fVar1 = (float)param_1[0x248];
    fVar8 = (float10)FUN_00fdc1f0();
    fVar8 = ((float10)1 - fVar8) * ((float10)0.4 - (float10)fVar1) + (float10)fVar1;
    param_1[0x248] = (int)(float)fVar8;
    FUN_00a8b8a0(&fStack_90,(float)(fVar8 * (float10)(float)param_1[0x244]));
    param_1[0x14] = (int)((float)param_1[0x14] + fStack_90);
    param_1[0x15] = (int)((float)param_1[0x15] + fStack_8c);
    param_1[0x16] = (int)((float)param_1[0x16] + fStack_88);
    param_1[0x17] = (int)((float)param_1[0x17] + fStack_84);
    fVar1 = (float)param_1[0x10];
    fVar2 = (float)param_1[0x45c];
    fVar3 = (float)param_1[0x12];
    fVar4 = (float)param_1[0x45e];
    if (param_1[0x404] == 0x1000b) {
      fStack_a0 = (float)param_1[0x45c] - (float)param_1[0x10];
      fStack_9c = (float)param_1[0x45d] - (float)param_1[0x11];
      fStack_98 = (float)param_1[0x45e] - (float)param_1[0x12];
      pfVar6 = (float *)FUN_00a925a0(auStack_80);
      if (pfVar6[2] * fStack_98 + fStack_a0 * *pfVar6 + pfVar6[1] * fStack_9c < 0.0)
      goto LAB_004cc6ac;
    }
    if (0.25 <= (fVar3 - fVar4) * (fVar3 - fVar4) + (fVar1 - fVar2) * (fVar1 - fVar2)) {
      return;
    }
LAB_004cc6ac:
    FUN_004b9460();
    param_1[0x25] = param_1[0x45f];
    if (param_1[0x186] == 0x1000e) {
      FUN_004beea0(0xe0009);
      return;
    }
    iVar5 = FUN_004ba9c0();
    if (iVar5 != 0) {
      FUN_004beea0(0xe0007);
      return;
    }
    FUN_004beea0(0xe0008);
  }
  return;
}

// 004CCD40  FUN_004ccd40  size=908  [callgraph]
undefined4 __fastcall FUN_004ccd40(int param_1)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  float10 fVar7;
  
  iVar4 = FUN_00a81330();
  if (((iVar4 != 0) && (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) &&
     ((*(uint *)(iVar4 + 0x4c0) & 1) != 0)) {
    fVar7 = (float10)FUN_00a8ec30(*(int *)(param_1 + 0xa84) + 0x40);
    fVar7 = (float10)FUN_00ddba30((float)((float10)*(float *)(param_1 + 0x94) - fVar7));
    if ((ABS(fVar7) < (float10)0.6981317) ||
       ((*(float *)(param_1 + 0xa90) <= 9.0 && (ABS(fVar7) < (float10)1.3089969)))) {
      iVar4 = *(int *)(param_1 + 0x10b8);
      if (iVar4 == 1) {
        if (*(float *)(param_1 + 0xa90) <= 100.0) {
          uVar5 = FUN_004c1020();
          return uVar5;
        }
      }
      else if (25.0 < *(float *)(param_1 + 0xa90)) {
        if (56.25 < *(float *)(param_1 + 0xa90)) {
          if (100.0 < *(float *)(param_1 + 0xa90)) {
            sVar2 = 2;
            if (iVar4 == 2) {
              sVar2 = 8;
            }
            sVar3 = FUN_00dde2d0(0,10);
            if ((sVar3 <= sVar2) && (*(int *)(param_1 + 0x4a0) != 1)) {
              if ((*(int *)(param_1 + 0x10b8) == 2) &&
                 ((sVar2 = FUN_00dde2d0(0,100), sVar2 < 0x5b && (*(int *)(param_1 + 0x11e0) < 2))))
              {
                FUN_004beea0(0x2000d);
                *(int *)(param_1 + 0x11e0) = *(int *)(param_1 + 0x11e0) + 1;
                return 1;
              }
              FUN_004beea0(0x2000c);
              *(undefined4 *)(param_1 + 0x11e0) = 0;
              return 1;
            }
          }
          else {
            uVar6 = FUN_00dde2d0(0,100);
            if ((uVar6 & 3) == 0) {
              FUN_004beea0(0x20005);
              return 1;
            }
            if (((*(float *)(param_1 + 0xa90) <= 100.0) && (*(int *)(param_1 + 0x10bc) != 0x2000a))
               && (iVar4 = FUN_004b9f90(), iVar4 != 0)) {
              bVar1 = FUN_00dde2d0(0,100);
              if (((bVar1 & 1) == 0) || (*(int *)(param_1 + 0x4a0) == 1)) {
                FUN_004beea0(0x2000a);
                return 1;
              }
              if ((*(int *)(param_1 + 0x10b8) == 2) &&
                 (uVar6 = FUN_00dde2d0(0,100), (uVar6 & 3) != 0)) {
                FUN_004beea0(0x2000d);
                return 1;
              }
              FUN_004beea0(0x2000c);
              return 1;
            }
          }
        }
        else if (*(int *)(param_1 + 0x4a0) != 1) {
          if (iVar4 == 2) {
            uVar6 = FUN_00dde2d0(0,100);
            if ((uVar6 & 3) == 0) {
              FUN_004beea0(0x2000c);
              return 1;
            }
            uVar5 = FUN_004c1020();
            return uVar5;
          }
          uVar6 = FUN_00dde2d0(0,100);
          if ((uVar6 & 7) == 0) {
            FUN_004beea0(0x2000c);
            return 1;
          }
        }
      }
      else {
        iVar4 = FUN_004b8a30();
        if (((iVar4 != 0) && (*(int *)(param_1 + 0x10bc) != 0x2000a)) &&
           (iVar4 = FUN_004b9f90(), iVar4 != 0)) {
          if ((*(int *)(param_1 + 0x10b8) == 2) && (uVar6 = FUN_00dde2d0(0,100), (uVar6 & 3) != 0))
          {
            bVar1 = FUN_00dde2d0(0,100);
            if ((bVar1 & 1) == 0) {
              FUN_004beea0(0x2000c);
              return 1;
            }
            FUN_004beea0(0x2000d);
            return 1;
          }
          FUN_004beea0(0x2000a);
          return 1;
        }
        uVar6 = FUN_00dde2d0(0,100);
        if ((uVar6 & 1) != 0) {
          sVar2 = FUN_00dde2d0(0,2);
          if (sVar2 == 0) {
            FUN_004beea0(0x20000);
          }
          else {
            if (sVar2 == 1) {
              FUN_004beea0(0x20002);
              return 1;
            }
            if (sVar2 == 2) {
              FUN_004beea0(0x20003);
              return 1;
            }
          }
          return 1;
        }
      }
    }
  }
  return 0;
}

// 004CD0D0  FUN_004cd0d0  size=94  [callgraph]
void __fastcall FUN_004cd0d0(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_00a8cab0();
  if ((uVar1 & 0xffff0000) != 0x20000) {
    iVar2 = (**(code **)(*param_1 + 0x1fc))();
    if (iVar2 == 0) {
      iVar2 = FUN_00a8cab0();
      if ((iVar2 != 0x50000) && ((float)param_1[0x2a4] <= 56.25)) {
        iVar2 = FUN_004ccd40();
        if (iVar2 != 0) {
          FUN_004beea0(0x50000);
        }
      }
    }
  }
  return;
}

// 004CD130  FUN_004cd130  size=2662  [callgraph]
void __fastcall FUN_004cd130(int *param_1)

{
  float fVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float *pfVar7;
  int *piVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  float10 fVar12;
  int local_38;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined1 local_20 [28];
  
  iVar6 = param_1[0x187];
  uVar11 = 0;
  if (iVar6 == 0) {
    param_1[0x370] = param_1[0x370] & 0xefffffff;
    FUN_00aa4080(0x34,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    iVar6 = FUN_00a81330();
    if ((iVar6 != 0) && (iVar6 = FUN_00a7c8a0(), iVar6 != 0)) {
      FUN_00aa4080(0x34,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    iVar6 = FUN_00a81330();
    if ((iVar6 != 0) && (iVar6 = FUN_00a7c8a0(), iVar6 != 0)) {
      FUN_00aa4080(0xf,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    param_1[0x250] = 0;
    param_1[0x251] = 0;
    if (16.0 < (float)param_1[0x2a4]) {
      if ((param_1[0x433] < 999) &&
         (fVar12 = (float10)FUN_004b5050(), fVar12 < (float10)0.5 == (fVar12 == (float10)0.5))) {
        FUN_00aa4080(0x3a,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        FUN_004be9b0(0x3a,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        FUN_004bed90(0x14,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        FUN_004bf9c0();
        piVar8 = (int *)FUN_004ba0e0();
        if (piVar8 != (int *)0x0) {
          FUN_00aa4080(0x15,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
          (**(code **)(*piVar8 + 0x20))();
        }
        param_1[0x433] = param_1[0x433] + 1;
        iVar6 = param_1[0x2a1];
        param_1[0x188] = 0;
        if ((*(float *)(iVar6 + 0x48) - (float)param_1[0x12]) * (float)param_1[0x456] +
            (*(float *)(iVar6 + 0x44) - (float)param_1[0x11]) * (float)param_1[0x455] +
            (float)param_1[0x454] * (*(float *)(iVar6 + 0x40) - (float)param_1[0x10]) <= 0.0) {
          fVar1 = -5.0;
        }
        else {
          fVar1 = 5.0;
        }
        param_1[600] = (int)((float)param_1[0x454] * fVar1);
        param_1[0x259] = (int)((float)param_1[0x455] * fVar1);
        param_1[0x25a] = (int)((float)param_1[0x456] * fVar1);
        param_1[0x25b] = (int)(fVar1 * (float)param_1[0x457]);
        param_1[600] = (int)((float)param_1[0x10] + (float)param_1[600]);
        param_1[0x259] = (int)((float)param_1[0x259] + (float)param_1[0x11]);
        param_1[0x25a] = (int)((float)param_1[0x25a] + (float)param_1[0x12]);
        param_1[0x25b] = (int)((float)param_1[0x13] + (float)param_1[0x25b]);
        param_1[0x187] = 2;
        FUN_004be8c0(0x3f800000,0x3f800000);
        FUN_004beaa0();
        return;
      }
      goto LAB_004cdb85;
    }
    param_1[0x370] = param_1[0x370] | 0x4002;
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (iVar6 != 1) {
    if (iVar6 != 2) {
      return;
    }
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    iVar6 = FUN_00a8c760(0);
    if (iVar6 != 0) {
      FUN_004b94a0(param_1 + 600,0x3f000000,0x3f32b8c2);
      if (36.0 < (float)param_1[0x2a4]) {
        fVar1 = (float)param_1[0x248] - (float)param_1[0x244] * 0.1;
      }
      else {
        fVar1 = (float)param_1[0x244] * 0.1 + (float)param_1[0x248];
      }
      param_1[0x248] = (int)fVar1;
      fVar1 = (float)param_1[0x248];
      if (0.0 < fVar1) {
        if (0.5 < fVar1) {
          fVar1 = 0.5;
        }
      }
      else {
        fVar1 = 0.0;
      }
      iVar6 = param_1[0x2a1];
      param_1[0x248] = (int)fVar1;
      local_30 = (float)param_1[0x10] - *(float *)(iVar6 + 0x40);
      local_2c = (float)param_1[0x11] - *(float *)(iVar6 + 0x44);
      local_28 = (float)param_1[0x12] - *(float *)(iVar6 + 0x48);
      local_24 = (float)param_1[0x13] - *(float *)(iVar6 + 0x4c);
      if (((local_30 == 0.0) && (local_2c == 0.0)) && (local_28 == 0.0)) {
        pfVar7 = (float *)FUN_00a925a0(local_20);
        fVar4 = *pfVar7 * -1.0;
        fVar3 = pfVar7[1] * -1.0;
        fVar1 = pfVar7[2] * -1.0;
        local_24 = pfVar7[3] * -1.0;
      }
      else {
        fVar1 = local_28 * local_28 + local_30 * local_30 + local_2c * local_2c;
        if (fVar1 < 0.0 == (fVar1 == 0.0)) {
          FUN_00ddf460(&local_30,&local_30);
          fVar1 = local_28;
          fVar3 = local_2c;
          fVar4 = local_30;
        }
        else {
          FUN_00dd5650(&DAT_0163d0ac);
          fVar1 = 0.0;
          fVar4 = 0.0;
          fVar3 = 1.0;
        }
      }
      fVar5 = (float)param_1[0x248] * (float)param_1[0x244];
      param_1[0x14] = (int)(fVar5 * fVar4 + (float)param_1[0x14]);
      param_1[0x15] = (int)(fVar3 * fVar5 + (float)param_1[0x15]);
      param_1[0x16] = (int)(fVar1 * fVar5 + (float)param_1[0x16]);
      param_1[0x17] = (int)(fVar5 * local_24 + (float)param_1[0x17]);
    }
    iVar6 = FUN_00a8c760(8);
    if (iVar6 != 0) {
      if (param_1[0x250] == 0) {
        fVar1 = (float)param_1[0x10] - *(float *)(param_1[0x2a1] + 0x40);
        fVar3 = (float)param_1[0x12] - *(float *)(param_1[0x2a1] + 0x48);
        fVar1 = SQRT(fVar3 * fVar3 + fVar1 * fVar1) - 2.0;
        param_1[0x248] = (int)fVar1;
        if (!NAN(fVar1) && 11.5 < fVar1 != (fVar1 == 11.5)) {
          param_1[0x248] = 0x41380000;
        }
        fVar1 = (float)param_1[0x248];
        param_1[0x248] = (int)(fVar1 * 0.05);
        if (fVar1 * 0.05 <= 0.0) {
          param_1[0x248] = 0;
        }
        param_1[0x250] = 1;
      }
      FUN_00a8b8a0(&local_30,(float)param_1[0x248] * (float)param_1[0x244]);
      param_1[0x14] = (int)(local_30 + (float)param_1[0x14]);
      param_1[0x15] = (int)(local_2c + (float)param_1[0x15]);
      param_1[0x16] = (int)(local_28 + (float)param_1[0x16]);
      param_1[0x17] = (int)(local_24 + (float)param_1[0x17]);
    }
    iVar6 = param_1[0x188];
    if (iVar6 == 0) {
      iVar6 = FUN_00a8c760(10);
      if (iVar6 != 0) {
        piVar8 = (int *)FUN_004ba0e0();
        if (piVar8 != (int *)0x0) {
          (**(code **)(*piVar8 + 0x1c))();
          uVar9 = 7;
          FUN_004ba0a0(7);
          FUN_004bda70(uVar9);
        }
        fVar1 = (float)param_1[0x10] - *(float *)(param_1[0x2a1] + 0x40);
        fVar3 = (float)param_1[0x12] - *(float *)(param_1[0x2a1] + 0x48);
        fVar1 = (SQRT(fVar3 * fVar3 + fVar1 * fVar1) - 2.0) * 0.05;
        param_1[0x248] = (int)fVar1;
        if (fVar1 <= 0.0) {
          param_1[0x248] = 0;
        }
        goto LAB_004cd59d;
      }
    }
    else if (iVar6 == 1) {
      iVar6 = FUN_00a8c760(10);
      if (iVar6 != 0) {
        iVar6 = FUN_00a81330();
        if (iVar6 != 0) {
          uVar9 = FUN_00a7c8a0();
          iVar6 = FUN_004b7dc0(uVar9);
          if (iVar6 != 0) {
            FUN_00404e40();
          }
        }
        goto LAB_004cd59d;
      }
    }
    else if ((iVar6 == 2) && (iVar6 = FUN_00a8c760(10), iVar6 != 0)) {
      piVar8 = (int *)FUN_004ba0e0();
      if (piVar8 != (int *)0x0) {
        iVar6 = FUN_004ba0a0();
        local_38 = 7;
        do {
          if (0x37 < uVar11) break;
          iVar10 = *(int *)((int)&DAT_0163f1f0 + uVar11);
          uVar11 = uVar11 + 4;
          if ((0xd < iVar10) || (*(int *)(iVar6 + (iVar10 * 9 + 0x372) * 4) == 0)) {
            FUN_004cb2c0(iVar10);
            local_38 = local_38 + -1;
          }
        } while (0 < local_38);
        *(undefined4 *)(iVar6 + 0xfc8) = 0;
        FUN_004bdf70(4);
        (**(code **)(*piVar8 + 0x20))();
        FUN_009fdde0();
      }
LAB_004cd59d:
      param_1[0x188] = param_1[0x188] + 1;
    }
    if (param_1[0x189] == 0) {
      iVar6 = FUN_00a8c760(3);
      if (iVar6 == 0) goto LAB_004cd5f1;
      FUN_008e5c50(0xd);
      param_1[0x370] = param_1[0x370] | 0x40000000;
    }
    else {
      if ((param_1[0x189] != 1) || (iVar6 = FUN_00a8c760(3), iVar6 != 0)) goto LAB_004cd5f1;
      FUN_004b93b0();
    }
    param_1[0x189] = param_1[0x189] + 1;
LAB_004cd5f1:
    iVar6 = FUN_00a94ce0(0);
    if (iVar6 == 0) {
      return;
    }
    if (param_1[0x189] != 2) {
      FUN_004b93b0();
    }
    pcVar2 = *(code **)(*param_1 + 0x34c);
    param_1[0x434] = 0x43960000;
    (*pcVar2)();
    return;
  }
  FUN_004be8c0(0x3f800000,0x3f800000);
  FUN_004beaa0();
  iVar6 = FUN_00a94ce0(0);
  if ((iVar6 == 0) && (iVar6 = FUN_00a8c760(0xf), iVar6 == 0)) {
    return;
  }
  param_1[0x433] = param_1[0x433] + 1;
  if (param_1[0x433] < 999) {
    iVar6 = FUN_00a8eea0();
    iVar10 = FUN_00a8eeb0();
    if ((float)iVar6 / (float)iVar10 < 0.5 == ((float)iVar6 / (float)iVar10 == 0.5)) {
      FUN_00aa4080(0x3a,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_004be9b0(0x3a,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_004bed90(0x14,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_004bf9c0();
      iVar6 = FUN_00a81330();
      if ((iVar6 != 0) && (piVar8 = (int *)FUN_00a7c8a0(), piVar8 != (int *)0x0)) {
        FUN_00aa4080(0x15,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        (**(code **)(*piVar8 + 0x20))();
      }
      param_1[0x187] = param_1[0x187] + 1;
      iVar6 = param_1[0x2a1];
      param_1[0x188] = 0;
      if ((*(float *)(iVar6 + 0x48) - (float)param_1[0x12]) * (float)param_1[0x456] +
          (*(float *)(iVar6 + 0x44) - (float)param_1[0x11]) * (float)param_1[0x455] +
          (*(float *)(iVar6 + 0x40) - (float)param_1[0x10]) * (float)param_1[0x454] <= 0.0) {
        fVar1 = -5.0;
      }
      else {
        fVar1 = 5.0;
      }
      param_1[600] = (int)((float)param_1[0x454] * fVar1);
      param_1[0x259] = (int)((float)param_1[0x455] * fVar1);
      param_1[0x25a] = (int)((float)param_1[0x456] * fVar1);
      param_1[0x25b] = (int)(fVar1 * (float)param_1[0x457]);
      param_1[600] = (int)((float)param_1[600] + (float)param_1[0x10]);
      param_1[0x259] = (int)((float)param_1[0x259] + (float)param_1[0x11]);
      param_1[0x25a] = (int)((float)param_1[0x25a] + (float)param_1[0x12]);
      param_1[0x25b] = (int)((float)param_1[0x13] + (float)param_1[0x25b]);
      return;
    }
  }
LAB_004cdb85:
  param_1[0x370] = param_1[0x370] | 0x40000;
  return;
}

// 004CDBA0  FUN_004cdba0  size=144  [callgraph]
undefined4 __fastcall FUN_004cdba0(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  *(undefined4 *)(param_1 + 0x684) = 0;
  FUN_00ac2080(1);
  piVar1 = *(int **)(param_1 + 0x67c);
  piVar2 = piVar1 + *(int *)(param_1 + 0x684) * 0x54;
  while( true ) {
    if (piVar1 == piVar2) {
      return 0;
    }
    if (((*(byte *)(piVar1 + 0x23) & 0x20) != 0) && (*piVar1 == 0x187)) break;
    piVar1 = piVar1 + 0x54;
  }
  *(int *)(param_1 + 0x1260) = piVar1[0x40];
  *(int *)(param_1 + 0x1264) = piVar1[0x41];
  *(int *)(param_1 + 0x1268) = piVar1[0x42];
  *(int *)(param_1 + 0x126c) = piVar1[0x43];
  FUN_004beea0(0x3000c);
  return 1;
}

// 004CDC30  FUN_004cdc30  size=446  [callgraph]
void __fastcall FUN_004cdc30(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  float10 fVar4;
  
  if ((((((*(byte *)((int)param_1 + 0xdc3) & 1) == 0) && (iVar2 = FUN_00a8cbe0(0xe0004), iVar2 == 0)
        ) && (iVar2 = FUN_00a8cbe0(0xe0005), iVar2 == 0)) &&
      ((iVar2 = FUN_00a8cbe0(0x2000b), iVar2 == 0 || (iVar2 = FUN_00a8cac0(), iVar2 < 2)))) &&
     ((param_1[0x128] != 1 || (param_1[0x139] == 0)))) {
    iVar2 = FUN_00a8cab0();
    if (iVar2 == 0xe0001) {
      iVar2 = FUN_00a81330();
      if (((iVar2 != 0) && (piVar3 = (int *)FUN_00a7c8a0(), piVar3 != (int *)0x0)) &&
         (iVar2 = (**(code **)(*piVar3 + 0x14c))(0x45,param_1[0x13c]), iVar2 != 0)) {
        (**(code **)(*piVar3 + 0x150))(0x45,param_1[0x13c]);
        FUN_004beea0(0xe0002);
      }
    }
    else {
      param_1[0x46e] = 0;
      param_1[0x431] = 0;
      fVar4 = (float10)FUN_004b5050();
      param_1[0x46f] = (int)(float)fVar4;
      if ((param_1[0x370] & 0x200U) != 0) {
        FUN_004c4860();
        param_1[0x482] = param_1[0x4c1];
        param_1[0x483] = param_1[0x4c3];
        param_1[0x484] = param_1[0x4c5];
        param_1[0x485] = param_1[0x4c7];
        param_1[0x486] = param_1[0x4c9];
        param_1[0x487] = param_1[0x4cb];
        return;
      }
      pcVar1 = *(code **)(*param_1 + 0x1fc);
      param_1[0x482] = param_1[0x4c2];
      param_1[0x483] = param_1[0x4c4];
      param_1[0x484] = param_1[0x4c6];
      param_1[0x485] = param_1[0x4c8];
      param_1[0x486] = param_1[0x4ca];
      param_1[0x487] = param_1[0x4cc];
      iVar2 = (*pcVar1)();
      if (iVar2 == 0) {
        (**(code **)(*param_1 + 0x1f8))(1);
        FUN_004beea0(0x30001);
        return;
      }
    }
  }
  return;
}

// 004CDDF0  FUN_004cddf0  size=1081  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004cddf0(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  float local_94;
  int *local_70;
  undefined4 local_6c;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  uint local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  char *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_20 [28];
  
  iVar9 = param_1[0x187];
  if (iVar9 == 0) {
    RayCastManager::getWork(param_1 + 0x458);
    fVar1 = (float)param_1[0x10];
    fVar2 = (float)param_1[0x11];
    fVar3 = (float)param_1[0x12];
    fVar4 = (float)param_1[0x13];
    pfVar11 = (float *)FUN_00a8b8a0(local_20,0x41000000);
    fVar5 = *pfVar11;
    fVar6 = pfVar11[1];
    fVar7 = pfVar11[2];
    fVar8 = pfVar11[3];
    iVar9 = FUN_009f8b40();
    local_40 = iVar9 << 0x10 | 7;
    local_6c = 0;
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    local_30 = "em0110_back_check";
    local_2c = 0;
    local_28 = 0;
    local_70 = param_1 + 0x458;
    local_60 = fVar1;
    local_5c = fVar2 + 0.1;
    local_58 = fVar3;
    local_54 = fVar4;
    local_50 = fVar1 - fVar5;
    local_4c = (fVar2 + 0.1) - fVar6;
    local_48 = fVar3 - fVar7;
    local_44 = fVar4 - fVar8;
    HavokRayCastManager::set(&local_70);
    param_1[0x431] = 0;
    FUN_008e5c50(0xd);
    param_1[0x370] = param_1[0x370] | 0x40000002;
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
  if (iVar9 == 1) {
    FUN_00a8e520();
    local_94 = 0.2;
    iVar9 = FUN_00a8e520();
    if (iVar9 != 0) {
      local_94 = (float)param_1[0x244] * 0.033333335;
    }
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    if ((param_1[0x458] == 0) || (iVar9 = FUN_00907560(param_1 + 0x458,0,0,0,0,0,0,0), iVar9 == 0))
    {
      FUN_00aa4080(0x18,0,local_94,0x3f800000,0x8038000,0xbf800000,0x3f800000);
      FUN_004be9b0(0x6e,0,local_94,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_004bed90(4,0,local_94,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      iVar9 = 0x3f000000;
    }
    else {
      FUN_00aa4080(0xd,0,local_94,0x3f800000,0x8038000,0xbf800000,0x3f800000);
      FUN_004be9b0(0xd,0,local_94,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_004bed90(4,0,local_94,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      iVar9 = 0x3e800000;
    }
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x24f] = iVar9;
  }
  else if (iVar9 != 2) {
    return;
  }
  iVar9 = FUN_00a8e520();
  if (iVar9 == 0) {
    fVar1 = 1.0;
  }
  else {
    fVar1 = (_DAT_01be942c / (float)param_1[0x244]) * (float)param_1[0x24f];
  }
  FUN_00a96030(0,fVar1);
  FUN_004be8c0(0x3f800000,0x3f800000);
  FUN_004beaa0();
  iVar9 = FUN_00a8c760(0);
  if (iVar9 != 0) {
    FUN_004b94a0(param_1[0x2a1] + 0x40,0x3dcccccd,0x3e0efa35);
  }
  iVar9 = FUN_00a8c760(9);
  if (iVar9 != 0) {
    (**(code **)(*param_1 + 0x220))(0x40a00000);
  }
  iVar9 = FUN_00a94ce0(0);
  if ((iVar9 == 0) && (iVar10 = FUN_00a8c760(4), iVar10 == 0)) {
    return;
  }
  if ((param_1[0x370] & 0x40000000U) != 0) {
    FUN_008e5c50(7);
    param_1[0x370] = param_1[0x370] & 0xbfffffff;
  }
  iVar10 = FUN_00a81330();
  if (((iVar10 == 0) || (iVar10 = FUN_00a7c8a0(), iVar10 == 0)) ||
     ((*(uint *)(iVar10 + 0x4c0) & 1) == 0)) {
    iVar10 = FUN_004bfee0();
  }
  else {
    iVar10 = FUN_004ccd40();
  }
  if ((iVar10 == 0) && (iVar9 != 0)) {
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  return;
}

// 004CE230  FUN_004ce230  size=895  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004ce230(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float local_c;
  
  if (param_1[0x187] == 0) {
    FUN_00a8e520();
    local_c = 0.2;
    iVar2 = FUN_00a8e520();
    if (iVar2 != 0) {
      local_c = (float)param_1[0x244] * 0.033333335;
    }
    FUN_00aa4080(0xd,0,local_c,0x3f800000,0x8038000,0xbf800000,0x3f800000);
    iVar2 = FUN_00a81330();
    if ((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
      FUN_00aa4080(0xd,0,local_c,0x3f800000,0x8038000,0xbf800000,0x3f800000);
    }
    iVar2 = FUN_00a81330();
    if ((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
      FUN_00aa3f60(4);
    }
    param_1[0x370] = param_1[0x370] | 0x4002;
    FUN_008e5c50(0xd);
    param_1[0x370] = param_1[0x370] | 0x40000000;
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = param_1[0x2a4];
    param_1[0x250] = 0;
    param_1[0x188] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  iVar2 = FUN_00a8e520();
  if (iVar2 == 0) {
    fVar1 = 1.0;
  }
  else {
    fVar1 = (_DAT_01be942c / (float)param_1[0x244]) * 0.5;
  }
  FUN_00a96030(0,fVar1);
  iVar2 = FUN_00a8c760(9);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x220))(0x40a00000);
  }
  FUN_004be8c0(0x3f800000,0x3f800000);
  FUN_004beaa0();
  iVar2 = FUN_00a8c760(0);
  if (iVar2 != 0) {
    FUN_004b94a0(param_1[0x2a1] + 0x40,0x3dcccccd,0x3e0efa35);
  }
  iVar2 = FUN_00a94ce0(0);
  iVar3 = FUN_00a8c760(4);
  if ((iVar3 != 0) || (iVar2 != 0)) {
    if ((param_1[0x370] & 0x40000000U) != 0) {
      FUN_008e5c50(7);
      param_1[0x370] = param_1[0x370] & 0xbfffffff;
    }
    fVar5 = (float10)FUN_00a8ec30(param_1[0x2a1] + 0x40);
    fVar5 = (float10)FUN_00ddba30((float)((float10)(float)param_1[0x25] - fVar5));
    if (param_1[0x42e] == 1) {
      iVar3 = FUN_00a8eea0();
      iVar4 = FUN_00a8eeb0();
      if ((float)iVar3 / (float)iVar4 < 0.5 != ((float)iVar3 / (float)iVar4 == 0.5)) {
        param_1[0x370] = param_1[0x370] | 0x40000;
        return;
      }
    }
    if (param_1[0x405] != -1) {
      FUN_004beea0(param_1[0x405]);
    }
    if (((param_1[0x370] & 0x20000000U) != 0) && (iVar3 = FUN_004ccd40(), iVar3 != 0)) {
      param_1[0x370] = param_1[0x370] & 0xdfffffff;
      return;
    }
    if ((param_1[0x370] & 0x400U) == 0) {
      if ((float)ABS(fVar5) < 0.6981317) {
        fVar1 = (float)param_1[0x2a4];
        if ((!NAN(fVar1) && 100.0 < fVar1 != (fVar1 == 100.0)) &&
           (iVar3 = FUN_004ba1b0(), iVar3 != 0)) {
          FUN_004bf1e0();
          return;
        }
        iVar3 = FUN_004ba1b0();
        if (iVar3 != 0) {
          if (((float)param_1[0x2a4] <= 16.0) && ((float)param_1[0x248] <= 16.0)) {
            FUN_004beea0(0x20004);
            return;
          }
          iVar3 = FUN_004ccd40();
          if (iVar3 != 0) {
            return;
          }
        }
      }
      if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x004ce5ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x34c))();
        return;
      }
    }
    else {
      FUN_004beea0(0x20001);
    }
  }
  return;
}

// 004CE5B0  FUN_004ce5b0  size=700  [callgraph]
void __fastcall FUN_004ce5b0(int *param_1)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  float10 fVar4;
  undefined4 uVar5;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0xd,0,0x3e4ccccd,0x3f800000,0x8038000,0xbf800000,0x3f800000);
    iVar3 = FUN_00a81330();
    if ((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
      FUN_00aa4080(0xd,0,0x3e4ccccd,0x3f800000,0x8038000,0xbf800000,0x3f800000);
    }
    iVar3 = FUN_00a81330();
    if ((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
      FUN_00aa3f60(4);
    }
    param_1[0x370] = param_1[0x370] | 0x4002;
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = param_1[0x2a4];
    param_1[0x250] = 0;
    param_1[0x188] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  iVar3 = FUN_00a8c760(9);
  if (iVar3 != 0) {
    (**(code **)(*param_1 + 0x220))(0x40a00000);
  }
  FUN_004be8c0(0x3f800000,0x3f800000);
  FUN_004beaa0();
  iVar3 = FUN_00a8c760(0);
  if (iVar3 != 0) {
    FUN_004b94a0(param_1[0x2a1] + 0x40,0x3dcccccd,0x3e0efa35);
  }
  bVar2 = false;
  iVar3 = FUN_00a8c760(4);
  if ((iVar3 != 0) && (param_1[0x250] == 0)) {
    param_1[0x250] = 1;
    bVar2 = true;
  }
  iVar3 = FUN_00a8c760(10);
  if (iVar3 != 0) {
    if (param_1[0x188] == 0) {
      uVar5 = 0xd;
    }
    else {
      if (param_1[0x188] != 1) goto LAB_004ce767;
      uVar5 = 7;
    }
    FUN_008e5c50(uVar5);
    param_1[0x188] = param_1[0x188] + 1;
  }
LAB_004ce767:
  if ((bVar2) || (iVar3 = FUN_00a94ce0(0), iVar3 != 0)) {
    FUN_009f8b10();
    fVar4 = (float10)FUN_00a8ec30(param_1[0x2a1] + 0x40);
    fVar4 = (float10)FUN_00ddba30((float)((float10)(float)param_1[0x25] - fVar4));
    if (param_1[0x405] != -1) {
      FUN_004beea0(param_1[0x405]);
    }
    if ((param_1[0x370] & 0x400U) == 0) {
      if ((float)ABS(fVar4) < 0.6981317) {
        fVar1 = (float)param_1[0x2a4];
        if ((!NAN(fVar1) && 100.0 < fVar1 != (fVar1 == 100.0)) &&
           (iVar3 = FUN_004ba1b0(), iVar3 != 0)) {
          FUN_004bf1e0();
          return;
        }
        iVar3 = FUN_004ba1b0();
        if (iVar3 != 0) {
          if (((float)param_1[0x2a4] <= 16.0) && ((float)param_1[0x248] <= 16.0)) {
            FUN_004beea0(0x20004);
            return;
          }
          iVar3 = FUN_004ccd40();
          if (iVar3 != 0) {
            return;
          }
        }
      }
                    /* WARNING: Could not recover jumptable at 0x004ce86a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    FUN_004beea0(0x20001);
  }
  return;
}

// 004CE870  FUN_004ce870  size=737  [callgraph]
void __fastcall FUN_004ce870(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uStack_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 uStack_17c;
  int *local_178;
  int *local_174;
  int local_164;
  undefined1 local_160 [348];
  
  iVar1 = param_1[0x187];
  if (iVar1 == 0) {
    local_174 = (int *)0x3f800000;
    local_178 = (int *)0xbf800000;
    uStack_17c = 0x8038000;
    local_180 = 0x3f800000;
    local_184 = 0x3e088889;
    uStack_188 = 0;
    FUN_00aa4080(0x72);
    local_174 = (int *)0x4ce900;
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      local_174 = (int *)0x4ce90b;
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        local_174 = (int *)0x3f800000;
        local_178 = (int *)0xbf800000;
        uStack_17c = 0x8000000;
        local_180 = 0x3f800000;
        local_184 = 0x3e088889;
        uStack_188 = 0;
        FUN_00aa4080(0x73);
      }
    }
    local_174 = (int *)0x4ce94c;
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      local_174 = (int *)0x4ce957;
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        local_174 = (int *)0x3f800000;
        local_178 = (int *)0xbf800000;
        uStack_17c = 0x8000000;
        local_180 = 0x3f800000;
        local_184 = 0x3e088889;
        uStack_188 = 0;
        FUN_00aa4080(4);
      }
    }
    local_174 = param_1 + 0x378;
    uStack_17c = 0x61;
    local_180 = 0x4ce9a0;
    local_178 = param_1;
    FUN_004117d0();
    local_174 = (int *)local_160;
    local_178 = (int *)0x4ce9ac;
    FUN_00a963e0();
    param_1[0x25] = param_1[0x41d];
    local_164 = 2;
    do {
      local_174 = (int *)0x4ce9cd;
      iVar1 = FUN_00a81330();
      if (iVar1 != 0) {
        local_174 = (int *)0x4ce9d8;
        piVar2 = (int *)FUN_00a7c8a0();
        if (piVar2 != (int *)0x0) {
          local_174 = (int *)&DAT_01be9d00;
          local_178 = (int *)0x4ce9ec;
          (**(code **)(*piVar2 + 4))();
          local_178 = (int *)0x4ce9f3;
          iVar1 = FUN_00dd6d80();
          if (iVar1 != 0) {
            local_174 = (int *)0x4ce9fe;
            FUN_00b1cbe0();
          }
        }
      }
      local_164 = local_164 + -1;
    } while (local_164 != 0);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (iVar1 != 1) {
    if (iVar1 != 2) {
      return;
    }
    if (param_1[0x39e] != 0) {
      return;
    }
    local_174 = (int *)0x4ce8af;
    FUN_004bc060();
    local_174 = (int *)0x4ce8ba;
    FUN_00a805f0();
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
  local_174 = (int *)0x3f800000;
  local_178 = (int *)0x3f800000;
  uStack_17c = 0x4cea20;
  FUN_004be8c0();
  local_174 = (int *)0x4cea27;
  FUN_004beaa0();
  local_174 = (int *)0x0;
  local_178 = (int *)0x4cea30;
  iVar1 = FUN_00a94ce0();
  if (iVar1 != 0) {
    local_174 = (int *)0x4cea41;
    (**(code **)(*param_1 + 0x20))();
    local_174 = (int *)0x4cea4c;
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      local_174 = (int *)0x4cea57;
      piVar2 = (int *)FUN_00a7c8a0();
      if (piVar2 != (int *)0x0) {
        local_174 = (int *)0x4cea64;
        (**(code **)(*piVar2 + 0x20))();
      }
    }
    local_174 = (int *)0x4cea6f;
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      local_174 = (int *)0x4cea7a;
      piVar2 = (int *)FUN_00a7c8a0();
      if (piVar2 != (int *)0x0) {
        local_174 = (int *)0x4cea87;
        (**(code **)(*piVar2 + 0x20))();
      }
    }
    local_174 = (int *)0x4cea92;
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      local_174 = (int *)0x4cea9d;
      piVar2 = (int *)FUN_00a7c8a0();
      if (piVar2 != (int *)0x0) {
        local_174 = (int *)0x4ceaaa;
        (**(code **)(*piVar2 + 0x20))();
      }
    }
    local_174 = (int *)0x0;
    local_178 = (int *)0x0;
    uStack_17c = 0x3f800000;
    local_180 = 0x4ceacb;
    (**(code **)(param_1[0x3a4] + 8))();
    local_180 = 0x4ceadc;
    (**(code **)(param_1[0x3a4] + 0xc))();
    local_180 = 1;
    local_184 = 0;
    uStack_188 = 0xb;
    (**(code **)(*param_1 + 0x344))();
    (**(code **)(*param_1 + 0x364))(0xffffffff);
    (**(code **)(param_1[0x378] + 8))(0,0,0);
    FUN_00eaa840();
    FUN_004117d0(0x62,param_1,param_1 + 0x378);
    FUN_00a963e0(&uStack_188);
    FUN_004bc060();
    param_1[0x187] = param_1[0x187] + 1;
  }
  return;
}

// 004CEB60  FUN_004ceb60  size=501  [callgraph]
void __fastcall FUN_004ceb60(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0xa3,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    iVar2 = FUN_00a81330();
    if ((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
      FUN_00aa4080(0xa3,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    iVar2 = FUN_00a81330();
    if ((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
      FUN_00aa4080(4,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    }
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x250] = 0;
    param_1[0x370] = param_1[0x370] | 0x4000;
    FUN_00c27f40(1,0xbf800000);
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_004be8c0(0x3f800000,0x3f800000);
  FUN_004beaa0();
  iVar2 = FUN_00a8c760(0);
  if (iVar2 != 0) {
    FUN_004b94a0(param_1[0x2a1] + 0x40,0x3e99999a,0x3e0efa35);
  }
  if (param_1[0x250] == 0) {
    iVar2 = FUN_004cc2d0(0);
    param_1[0x250] = iVar2;
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 == 0) {
    return;
  }
  if (((param_1[0x250] == 0) && (iVar2 = FUN_00a81330(), iVar2 != 0)) &&
     (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
    iVar4 = 3;
    do {
      if (0x37 < uVar3) break;
      iVar1 = *(int *)((int)&DAT_0163f1f0 + uVar3);
      uVar3 = uVar3 + 4;
      if ((0xd < iVar1) || (*(int *)(iVar2 + (iVar1 * 9 + 0x372) * 4) == 0)) {
        FUN_004cb2c0(iVar1);
        iVar4 = iVar4 + -1;
      }
    } while (0 < iVar4);
    *(undefined4 *)(iVar2 + 0xfc8) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x004ced53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 004CED60  FUN_004ced60  size=573  [callgraph]
void __fastcall FUN_004ced60(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0xa4,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    iVar2 = FUN_00a81330();
    if ((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
      FUN_00aa4080(0xa4,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    iVar2 = FUN_00a81330();
    if ((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
      FUN_00aa4080(4,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    }
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x250] = 0;
    param_1[0x251] = 0;
    param_1[0x370] = param_1[0x370] | 0x4000;
    FUN_00c27f40(1,0xbf800000);
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_004be8c0(0x3f800000,0x3f800000);
  FUN_004beaa0();
  if (param_1[0x250] == 0) {
    iVar2 = FUN_004cc2d0(0);
    param_1[0x250] = iVar2;
  }
  if (param_1[0x251] == 0) {
    iVar2 = FUN_004cc2d0(1);
    param_1[0x251] = iVar2;
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 == 0) {
    return;
  }
  if (((param_1[0x250] == 0) && (iVar2 = FUN_00a81330(), iVar2 != 0)) &&
     (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
    iVar3 = 3;
    do {
      if (0x37 < uVar4) break;
      iVar1 = *(int *)((int)&DAT_0163f1f0 + uVar4);
      uVar4 = uVar4 + 4;
      if ((0xd < iVar1) || (*(int *)(iVar2 + (iVar1 * 9 + 0x372) * 4) == 0)) {
        FUN_004cb2c0(iVar1);
        iVar3 = iVar3 + -1;
      }
    } while (0 < iVar3);
    *(undefined4 *)(iVar2 + 0xfc8) = 0;
  }
  if (((param_1[0x251] == 0) && (iVar2 = FUN_00a81330(), iVar2 != 0)) &&
     (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
    iVar3 = 3;
    uVar4 = 0;
    do {
      if (0x37 < uVar4) break;
      iVar1 = *(int *)((int)&DAT_0163f1b8 + uVar4);
      uVar4 = uVar4 + 4;
      if ((0xd < iVar1) || (*(int *)(iVar2 + (iVar1 * 9 + 0x372) * 4) == 0)) {
        FUN_004cb2c0(iVar1);
        iVar3 = iVar3 + -1;
      }
    } while (0 < iVar3);
    *(undefined4 *)(iVar2 + 0xfc8) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x004cef9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 004CEFA0  FUN_004cefa0  size=586  [callgraph]
void __fastcall FUN_004cefa0(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar3 = param_1[0x187];
  if (iVar3 == 0) {
    FUN_00aa4080(5,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    iVar3 = FUN_00a81330();
    if ((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
      FUN_00aa4080(4,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
    }
    param_1[0x370] = param_1[0x370] & 0xffffffbf;
    iVar3 = FUN_00a81330();
    if ((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
      FUN_00aa4080(0xd4,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    param_1[0x370] = param_1[0x370] | 0x10;
    param_1[0x187] = 1;
    iVar3 = FUN_00a81330();
    if ((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
      iVar4 = 0xe;
      uVar5 = 0;
      do {
        if (0x37 < uVar5) break;
        iVar2 = *(int *)((int)&DAT_0163f1f0 + uVar5);
        uVar5 = uVar5 + 4;
        if ((0xd < iVar2) || (*(int *)(iVar3 + (iVar2 * 9 + 0x372) * 4) == 0)) {
          FUN_004cb2c0(iVar2);
          iVar4 = iVar4 + -1;
        }
      } while (0 < iVar4);
      *(undefined4 *)(iVar3 + 0xfc8) = 0;
    }
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    FUN_00c27f40(1,0xbf800000);
  }
  else if (iVar3 == 1) {
    (**(code **)(*param_1 + 0x220))(0x40a00000);
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    iVar3 = FUN_00a81330();
    if (iVar3 != 0) {
      FUN_00a7c8a0();
    }
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x42c] = 0;
      param_1[0x370] = param_1[0x370] & 0xffffffef;
                    /* WARNING: Could not recover jumptable at 0x004cf077. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  else if (iVar3 == 2) {
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] <= 0.0) {
                    /* WARNING: Could not recover jumptable at 0x004cf000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 004CF1F0  FUN_004cf1f0  size=2059  [callgraph]
void __fastcall FUN_004cf1f0(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  float10 fVar7;
  undefined *puVar8;
  int iStack_3c;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar2 = FUN_00a81330();
  piVar5 = (int *)0x0;
  if (iVar2 != 0) {
    piVar5 = (int *)FUN_00a7c8a0();
  }
  (**(code **)(*param_1 + 0x220))(0x40a00000);
  switch(param_1[0x187]) {
  case 0:
    FUN_00a93090(2);
    FUN_008e3c10();
    FUN_00aa4080(0xab,0,0x3e4ccccd,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    FUN_004be9b0(0xab,0,0x3e4ccccd,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    FUN_004bed90(0x20,0,0x3e4ccccd,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    FUN_004bf9c0();
    iVar2 = FUN_00a81330();
    if ((iVar2 != 0) && (piVar5 = (int *)FUN_00a7c8a0(), piVar5 != (int *)0x0)) {
      (**(code **)(*piVar5 + 0x20))();
      FUN_00a9e290(&DAT_0163f288,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    param_1[0x370] = param_1[0x370] & 0xf7ffffff;
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x250] = 0;
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    return;
  case 1:
    iVar2 = FUN_00a8c760(10);
    if ((iVar2 != 0) && (piVar3 = (int *)FUN_004ba0e0(), piVar3 != (int *)0x0)) {
      (**(code **)(*piVar3 + 0x1c))();
      uVar4 = 7;
      FUN_004ba0a0(7);
      FUN_004bda70(uVar4);
    }
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    iVar2 = FUN_00a8c760(8);
    if (iVar2 != 0) {
      iVar2 = FUN_00a81330();
      if (iVar2 == 0) {
        FUN_004be3c0();
        iVar2 = FUN_00a81330();
        if (iVar2 == 0) goto LAB_004cf43c;
      }
      uVar4 = FUN_00a7c8a0();
      iVar2 = FUN_004b7dc0(uVar4);
      if (iVar2 != 0) {
        FUN_00404f80();
        fVar7 = (float10)FUN_00a958c0(0);
        FUN_00a95e60(0,(float)fVar7);
      }
    }
LAB_004cf43c:
    if ((param_1[0x250] == 0) && (iVar2 = FUN_00a952e0(0,0x42200000), iVar2 != 0)) {
      uStack_34 = 0;
      uStack_30 = 0x3f714639;
      uStack_2c = 0;
      uStack_24 = 0x42140000;
      uStack_20 = 0x42b80000;
      uStack_1c = 0xc2ef0000;
      (**(code **)(*param_1 + 0x7c))(&uStack_24,&uStack_34);
      (**(code **)(*piVar5 + 0x150))(0x46,param_1[0x13c]);
      FUN_004b56b0();
      FUN_00e5e1b0("bgm_Mystral_Scene2to3");
      param_1[0x250] = param_1[0x250] + 1;
    }
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 == 0) {
      return;
    }
    FUN_00aa4080(0xac,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    FUN_004be9b0(0xac,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    FUN_004bed90(0x21,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    iVar2 = FUN_004ba0e0();
    if (iVar2 != 0) {
      FUN_00a9e290(&DAT_0163f27c,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    iVar2 = FUN_00a81330();
    if (iVar2 == 0) goto LAB_004cf605;
    uVar4 = FUN_00a7c8a0();
    iVar2 = FUN_004b7dc0(uVar4);
    if (iVar2 == 0) goto LAB_004cf605;
    puVar8 = &DAT_0163f27c;
    goto LAB_004cf5fe;
  case 2:
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_00aa4080(0xad,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
      FUN_004be9b0(0xad,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
      FUN_004bed90(0x22,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
      piVar5 = (int *)FUN_004ba0e0();
      if (piVar5 != (int *)0x0) {
        iVar2 = FUN_004ba0a0();
        iStack_3c = 7;
        uVar6 = 0;
        do {
          if (0x37 < uVar6) break;
          iVar1 = *(int *)((int)&DAT_0163f1f0 + uVar6);
          uVar6 = uVar6 + 4;
          if ((0xd < iVar1) || (*(int *)(iVar2 + (iVar1 * 9 + 0x372) * 4) == 0)) {
            FUN_004cb2c0(iVar1);
            iStack_3c = iStack_3c + -1;
          }
        } while (0 < iStack_3c);
        *(undefined4 *)(iVar2 + 0xfc8) = 0;
        FUN_004bdf70(4);
        (**(code **)(*piVar5 + 0x20))();
        FUN_009fdde0();
      }
      iVar2 = FUN_00a81330();
      if (iVar2 != 0) {
        uVar4 = FUN_00a7c8a0();
        iVar2 = FUN_004b7dc0(uVar4);
        if (iVar2 != 0) {
          FUN_00a9e290(&DAT_0163f274,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        }
      }
      FUN_004be8c0(0x3f800000,0x3f800000);
      FUN_004beaa0();
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x188] = 0;
      return;
    }
    break;
  case 3:
    if (param_1[0x188] == 0) {
      FUN_004be5b0();
      param_1[0x188] = param_1[0x188] + 1;
    }
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 == 0) {
      return;
    }
    FUN_00aa4080(0xae,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    FUN_004be9b0(0xae,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    FUN_004bed90(0x23,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    FUN_004b93e0(0x12a,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    iVar2 = FUN_00a81330();
    if (iVar2 == 0) goto LAB_004cf605;
    uVar4 = FUN_00a7c8a0();
    iVar2 = FUN_004b7dc0(uVar4);
    if (iVar2 == 0) goto LAB_004cf605;
    puVar8 = &DAT_0163f26c;
LAB_004cf5fe:
    FUN_00a9e290(puVar8,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
LAB_004cf605:
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    param_1[0x187] = param_1[0x187] + 1;
    return;
  case 4:
    iVar2 = FUN_00a81330();
    if ((iVar2 != 0) && (piVar5 = (int *)FUN_00a7c8a0(), piVar5 != (int *)0x0)) {
      (**(code **)(*piVar5 + 0x1c))();
    }
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_008e6d00();
      FUN_00a93090(6);
      (**(code **)(*param_1 + 0x34c))();
      FUN_004bae40();
      iVar2 = FUN_00a81330();
      if (iVar2 != 0) {
        uVar4 = FUN_00a7c8a0();
        piVar5 = (int *)FUN_004b7dc0(uVar4);
        if (piVar5 != (int *)0x0) {
          piVar5[0x29d] = 0;
          (**(code **)(*piVar5 + 0x20))();
        }
      }
    }
  }
  return;
}

// 004CFA10  FUN_004cfa10  size=1876  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004cfa10(int *param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int local_148;
  int local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  
  iVar3 = FUN_00a81330();
  if (iVar3 == 0) {
    local_148 = 0;
  }
  else {
    local_148 = FUN_00a7c8a0();
  }
  iVar3 = FUN_00a81330();
  if (iVar3 != 0) {
    FUN_00a7c8a0();
  }
  FUN_00a96030(0,_DAT_01be942c / (float)param_1[0x244]);
  switch(param_1[0x187]) {
  case 0:
    FUN_00c187b0(5);
    FUN_00c18580(1,5);
    FUN_00951930();
    _DAT_01bea6c8 = param_1[0x24f];
    FUN_00dc1390(0x41c80000);
    param_1[0x1bb] = 0;
    FUN_004b9ff0(1);
    FUN_008e3c10();
    FUN_00a93090(2);
    FUN_00a96030(0,0x3f800000);
    param_1[0x188] = 0;
    param_1[0x250] = 0;
    FUN_00e5e1b0("bgm_Mystral_Finish_enter");
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_004cfb26;
  case 1:
LAB_004cfb26:
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    FUN_004b65f0();
    iVar3 = FUN_00a952e0(0,0x42ba0000);
    if (iVar3 != 0) {
      FUN_00c187b0(5);
      FUN_00c18580(1,5);
      FUN_00951930();
      FUN_00aa4080(0xaf,0,0x3d088889,0x3f800000,0x8100000,0xbf800000,0x3f800000);
      FUN_004be9b0(0xaf,0,0x3d088889,0x3f800000,0x8100000,0xbf800000,0x3f800000);
      FUN_004bed90(0x2e,0,0x3d088889,0x3f800000,0x8100000,0xbf800000,0x3f800000);
      iVar3 = FUN_00a81330();
      if ((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
        *(undefined4 *)(iVar3 + 0xcec) = 1;
      }
      iVar3 = FUN_00a81330();
      if ((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
        FUN_004b7370();
      }
      param_1[0x187] = param_1[0x187] + 1;
    }
    goto switchD_004cfa86_default;
  case 2:
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    FUN_004b65f0();
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 == 0) goto switchD_004cfa86_default;
    FUN_00aa4080(0xb0,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    FUN_004be9b0(0xb0,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    FUN_004bed90(0x2a,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    local_140 = 0;
    local_13c = 0;
    local_138 = 0;
    local_130 = 0x41880000;
    local_12c = 0x42100000;
    local_128 = 0xc2ac0000;
    (**(code **)(*param_1 + 0x7c))(&local_130,&local_140);
    break;
  case 3:
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    FUN_004b65f0();
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 == 0) goto switchD_004cfa86_default;
    FUN_00aa4080(0xb1,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    FUN_004be9b0(0xb1,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    FUN_004bed90(0x2b,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    FUN_004b93e0(299,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    uVar4 = FUN_00e01ca0();
    FUN_00e01540(0x160,4,uVar4);
    break;
  case 4:
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    FUN_004b65f0();
    iVar3 = FUN_00a8e520();
    if ((iVar3 != 0) && (param_1[0x250] == 0)) {
      param_1[0x250] = 1;
      FUN_00a930c0();
    }
    iVar3 = FUN_00a8c760(10);
    if (iVar3 != 0) {
      FUN_004ba6a0(0);
      iVar3 = FUN_00a81330();
      if (iVar3 != 0) {
        FUN_00a805f0();
      }
      iVar3 = FUN_004ba0c0();
      if ((iVar3 != 0) && (*(int *)(iVar3 + 0x370) != 0)) {
        FUN_00a1abe0(1);
      }
      FUN_004be1d0(1);
    }
    if ((param_1[0x250] < 1) || (iVar3 = FUN_00a8e520(), iVar3 != 0)) goto switchD_004cfa86_default;
    FUN_004be1d0(1);
    FUN_00aa4080(0xb2,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    FUN_004be9b0(0xb2,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    FUN_004bed90(0x2c,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    break;
  case 5:
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    FUN_004b65f0();
    iVar3 = FUN_00a8c760(0xb);
    if (iVar3 != 0) {
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x4d5] = 1;
      goto switchD_004cfa86_default;
    }
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 == 0) goto switchD_004cfa86_default;
    FUN_00a805f0();
    break;
  default:
    goto switchD_004cfa86_default;
  }
  param_1[0x187] = param_1[0x187] + 1;
switchD_004cfa86_default:
  if (((param_1[0x188] == 0) && (local_148 != 0)) && (iVar3 = FUN_00a8c760(0x30), iVar3 != 0)) {
    local_144 = 0;
    if (0 < *(short *)(local_148 + 0x324)) {
      iVar3 = 0;
      do {
        iVar2 = *(int *)(local_148 + 800);
        iVar5 = *(int *)(*(int *)(iVar2 + 0x60 + iVar3) + 0x40);
        if ((iVar5 != 0) && (iVar5 = FUN_00fdbbd0(iVar5,"_hide"), iVar5 != 0)) {
          puVar1 = (uint *)(iVar2 + 0x38 + iVar3);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
        local_144 = local_144 + 1;
        iVar3 = iVar3 + 0x70;
      } while (local_144 < *(short *)(local_148 + 0x324));
    }
    local_144 = 0;
    if (0 < *(short *)(local_148 + 0x324)) {
      iVar3 = 0;
      do {
        iVar2 = *(int *)(local_148 + 800);
        iVar5 = *(int *)(*(int *)(iVar2 + 0x60 + iVar3) + 0x40);
        if ((iVar5 != 0) && (iVar5 = FUN_00fdbbd0(iVar5,"_appear"), iVar5 != 0)) {
          puVar1 = (uint *)(iVar2 + 0x38 + iVar3);
          *puVar1 = *puVar1 | 1;
        }
        local_144 = local_144 + 1;
        iVar3 = iVar3 + 0x70;
      } while (local_144 < *(short *)(local_148 + 0x324));
    }
    local_144 = 0;
    if (0 < *(short *)(local_148 + 0x324)) {
      iVar3 = 0;
      do {
        iVar2 = *(int *)(local_148 + 800);
        iVar5 = *(int *)(*(int *)(iVar2 + 0x60 + iVar3) + 0x40);
        if ((iVar5 != 0) && (iVar5 = FUN_00fdbbd0(iVar5,"_break"), iVar5 != 0)) {
          puVar1 = (uint *)(iVar2 + 0x38 + iVar3);
          *puVar1 = *puVar1 & 0xfffffffe;
        }
        local_144 = local_144 + 1;
        iVar3 = iVar3 + 0x70;
      } while (local_144 < *(short *)(local_148 + 0x324));
    }
    param_1[0x188] = param_1[0x188] + 1;
  }
  return;
}

// 004D0180  FUN_004d0180  size=4247  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004d0180(int *param_1)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  int *piVar14;
  undefined4 uVar15;
  undefined4 unaff_EBX;
  int iVar16;
  int iVar17;
  float10 fVar18;
  float10 fVar19;
  undefined4 uVar20;
  int iStack_364;
  int iStack_35c;
  
  iVar13 = FUN_00a81330();
  iVar17 = 0;
  if (iVar13 != 0) {
    iVar17 = FUN_00a7c8a0();
  }
  (**(code **)(*param_1 + 0x220))(0x40a00000);
  switch(param_1[0x187]) {
  case 0:
    FUN_00bee830();
    DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
    FUN_00b7ec60();
    FUN_008e3c10();
    DAT_01bea060 = DAT_01bea060 | 0x4000000;
    FUN_00aa4520(0x112,iStack_364,0,0x3e4ccccd,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    FUN_00a96030(0,0);
    FUN_00db3e80(0x41c80000,0,&DAT_01bea1d0);
    param_1[0x188] = 0;
    param_1[0x256] = 0;
    param_1[0x255] = 0;
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    iVar13 = FUN_00a12210(0xf00);
    if (iVar13 != 0) {
      fVar18 = (float10)FUN_00ddba30(*(float *)(iVar13 + 0x94) + *(float *)(iVar17 + 0x94));
      fVar2 = *(float *)(iVar13 + 0x40);
      fVar3 = *(float *)(iVar13 + 0x44);
      fVar4 = *(float *)(iVar13 + 0x48);
      fVar5 = *(float *)(iVar13 + 0x4c);
      fVar19 = (float10)FUN_00fdc1f0();
      fVar19 = (float10)1 - fVar19;
      param_1[0x14] =
           (int)(float)(((float10)fVar2 - (float10)(float)param_1[0x14]) * fVar19 +
                       (float10)(float)param_1[0x14]);
      param_1[0x15] =
           (int)(float)(((float10)fVar3 - (float10)(float)param_1[0x15]) * fVar19 +
                       (float10)(float)param_1[0x15]);
      param_1[0x16] =
           (int)(float)(((float10)fVar4 - (float10)(float)param_1[0x16]) * fVar19 +
                       (float10)(float)param_1[0x16]);
      param_1[0x17] =
           (int)(float)(((float10)fVar5 - (float10)(float)param_1[0x17]) * fVar19 +
                       (float10)(float)param_1[0x17]);
      fVar2 = (float)param_1[0x25];
      fVar18 = (float10)FUN_00ddba30((float)fVar18 - fVar2);
      fVar18 = (float10)FUN_00ddba30((float)(fVar18 * (float10)(float)fVar19 + (float10)fVar2));
      param_1[0x25] = (int)(float)fVar18;
    }
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar13 = FUN_00a8cac0();
    if (iVar13 == 2) {
      FUN_00a96030(0,0x3f800000);
      FUN_00aa4520(0x112,iStack_364,0,0x3d088889,0x3f800000,0x8100000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    iVar13 = FUN_00a12210(0xf00);
    if (iVar13 != 0) {
      param_1[0x14] = *(int *)(iVar13 + 0x40);
      param_1[0x15] = *(int *)(iVar13 + 0x44);
      param_1[0x16] = *(int *)(iVar13 + 0x48);
      param_1[0x17] = *(int *)(iVar13 + 0x4c);
      fVar18 = (float10)FUN_00ddba30(*(float *)(iVar13 + 0x94) + *(float *)(iVar17 + 0x94));
      param_1[0x25] = (int)(float)fVar18;
    }
    FUN_00db3e80(0,0,&DAT_01bea1d0);
    FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e22f10(0);
    _DAT_01bea860 = 1;
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar13 = FUN_00a94ce0(0);
    if (iVar13 != 0) {
      FUN_00aa4520(0x10e,iStack_364,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 3:
    iVar13 = FUN_00a12210(0xf00);
    if (iVar13 != 0) {
      param_1[0x14] = *(int *)(iVar13 + 0x40);
      param_1[0x15] = *(int *)(iVar13 + 0x44);
      param_1[0x16] = *(int *)(iVar13 + 0x48);
      param_1[0x17] = *(int *)(iVar13 + 0x4c);
      fVar2 = *(float *)(iVar13 + 0x10);
      fVar3 = *(float *)(iVar13 + 0x14);
      fVar4 = *(float *)(iVar13 + 0x18);
      fVar5 = *(float *)(iVar13 + 0x20);
      fVar6 = *(float *)(iVar13 + 0x24);
      fVar7 = *(float *)(iVar13 + 0x28);
      fVar12 = SQRT(*(float *)(iVar13 + 0x38) * *(float *)(iVar13 + 0x38) +
                    *(float *)(iVar13 + 0x34) * *(float *)(iVar13 + 0x34) +
                    *(float *)(iVar13 + 0x30) * *(float *)(iVar13 + 0x30));
      fVar8 = *(float *)(iVar13 + 0x28);
      fVar9 = *(float *)(iVar13 + 0x38);
      fVar18 = (float10)FUN_00ddbaa0(-(*(float *)(iVar13 + 0x18) / fVar12));
      fVar10 = *(float *)(iVar13 + 0x14);
      fVar11 = *(float *)(iVar13 + 0x10);
      fVar19 = (float10)fpatan((float10)(fVar8 / fVar12),(float10)(fVar9 / fVar12));
      param_1[0x24] = (int)(float)fVar19;
      param_1[0x25] = (int)(float)fVar18;
      fVar18 = (float10)fpatan((float10)fVar10 /
                               (float10)SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar7 * fVar7),
                               (float10)fVar11 /
                               (float10)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar4 * fVar4));
      param_1[0x26] = (int)(float)fVar18;
    }
    FUN_00db3e80(0,0,&DAT_01bea1d0);
    FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e22f10(0);
    _DAT_01bea860 = 1;
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar13 = FUN_00a94ce0(0);
    if (iVar13 != 0) {
      FUN_00aa4520(0x10f,iStack_364,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
      FUN_00b7dbe0(0x23);
      FUN_00b7aa80();
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 4:
    iVar13 = FUN_00a12210(0xf00);
    if (iVar13 != 0) {
      param_1[0x14] = *(int *)(iVar13 + 0x40);
      param_1[0x15] = *(int *)(iVar13 + 0x44);
      param_1[0x16] = *(int *)(iVar13 + 0x48);
      param_1[0x17] = *(int *)(iVar13 + 0x4c);
      fVar2 = *(float *)(iVar13 + 0x10);
      fVar3 = *(float *)(iVar13 + 0x14);
      fVar4 = *(float *)(iVar13 + 0x18);
      fVar5 = *(float *)(iVar13 + 0x20);
      fVar6 = *(float *)(iVar13 + 0x24);
      fVar7 = *(float *)(iVar13 + 0x28);
      fVar12 = SQRT(*(float *)(iVar13 + 0x38) * *(float *)(iVar13 + 0x38) +
                    *(float *)(iVar13 + 0x34) * *(float *)(iVar13 + 0x34) +
                    *(float *)(iVar13 + 0x30) * *(float *)(iVar13 + 0x30));
      fVar8 = *(float *)(iVar13 + 0x28);
      fVar9 = *(float *)(iVar13 + 0x38);
      fVar18 = (float10)FUN_00ddbaa0(-(*(float *)(iVar13 + 0x18) / fVar12));
      fVar10 = *(float *)(iVar13 + 0x14);
      fVar11 = *(float *)(iVar13 + 0x10);
      fVar19 = (float10)fpatan((float10)(fVar8 / fVar12),(float10)(fVar9 / fVar12));
      param_1[0x24] = (int)(float)fVar19;
      param_1[0x25] = (int)(float)fVar18;
      fVar18 = (float10)fpatan((float10)fVar10 /
                               (float10)SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar7 * fVar7),
                               (float10)fVar11 /
                               (float10)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar4 * fVar4));
      param_1[0x26] = (int)(float)fVar18;
    }
    FUN_00db3e80(0,0,&DAT_01bea1d0);
    FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e22f10(0);
    _DAT_01bea860 = 1;
    FUN_00a96030(0,_DAT_01be942c / (float)param_1[0x244]);
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar13 = FUN_00a8c760(0x20);
    if ((iVar13 != 0) && (param_1[0x188] == 0)) {
      param_1[0x1029] = param_1[0x102a];
      param_1[0x188] = 1;
      param_1[0xd07] = 0;
      FUN_00b85350(0x40a00000,0x3e800000,0x3e800000,1,1,0x3dcccccd);
    }
    iVar13 = FUN_00a8c760(0xb);
    if (iVar13 == 0) {
      if (param_1[0x188] != 0) {
        param_1[0x1029] = -0x40800000;
        FUN_00b7ab30(0);
        FUN_00a9ed60(0x20110,&DAT_0163f2b0,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
        FUN_00e5e1b0("bgm_Mystral_Finish_exit");
        uVar15 = FUN_00e01ca0();
        FUN_00e01540(0x160,5,uVar15);
        param_1[0x14] = 0x4189999a;
        param_1[0x15] = 0x42100000;
        param_1[0x16] = -0x3d51ae14;
        param_1[0x24] = 0;
        param_1[0x25] = 0x40490fdb;
        param_1[0x26] = 0;
        param_1[0x250] = 0;
        param_1[0x252] = 0;
        FUN_00db3e80(0,0,&DAT_01bea1d0);
        uVar15 = 0;
        FUN_00a92f90(0);
        FUN_00404b90(uVar15);
        _DAT_01bea860 = 1;
        FUN_00a96030(0,0x3f800000);
        FUN_00b94790(0x3f800000,0x3f800000);
        FUN_00a33520(1,0x160,3);
        FUN_00a33520(0,0x160,4);
        FUN_00a33520(0,0x160,5);
        FUN_00a33520(0,0x160,6);
        param_1[0x187] = param_1[0x187] + 1;
        return;
      }
    }
    else {
      param_1[0x1029] = 0x40a00000;
      FUN_00b7ab30(0x40a00000);
    }
    if (0.5 < (float)param_1[0xd09]) {
      iVar13 = FUN_00a94ce0(0);
      if (iVar13 != 0) {
        FUN_00a9ed60(0x20110,&DAT_0163f2b0,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
        FUN_00e5e1b0("bgm_Mystral_Finish_exit");
        uVar15 = FUN_00e01ca0();
        FUN_00e01540(0x160,5,uVar15);
        param_1[0x14] = 0x4189999a;
        param_1[0x15] = 0x42100000;
        param_1[0x16] = -0x3d51ae14;
        param_1[0x24] = 0;
        param_1[0x25] = 0x40490fdb;
        param_1[0x26] = 0;
        param_1[0x250] = 0;
        param_1[0x252] = 0;
        param_1[599] = 0;
        FUN_00db3e80(0,0,&DAT_01bea1d0);
        uVar15 = 0;
        FUN_00a92f90(0);
        FUN_00404b90(uVar15);
        _DAT_01bea860 = 1;
        FUN_00a96030(0,0x3f800000);
        FUN_00b94790(0x3f800000,0x3f800000);
        FUN_00a33520(1,0x160,3);
        FUN_00a33520(0,0x160,4);
        FUN_00a33520(0,0x160,5);
        FUN_00a33520(0,0x160,6);
        param_1[0x187] = param_1[0x187] + 1;
        return;
      }
    }
    else {
      param_1[0x1029] = (int)((float)param_1[0x1029] - _DAT_01be942c);
      if ((param_1[0x33e] & param_1[0x394]) != 0) {
        (**(code **)(*param_1 + 0x220))(0x40a00000);
        uVar15 = 0;
        FUN_00a92f90(0);
        fVar18 = (float10)FUN_0043f390(uVar15);
        FUN_00b7ab30((float)(fVar18 * (float10)60.0));
        uVar15 = 0;
        FUN_00a92f90(0);
        fVar19 = (float10)FUN_00407b40(uVar15);
        FUN_00b89c20(0x105,0x65,0x23,unaff_EBX,
                     (float)(((float10)(float)fVar18 - fVar19) * (float10)60.0),0x41f00000,
                     0x41f00000,0);
        DAT_01dc08d8 = 1;
        return;
      }
    }
    break;
  case 5:
    if ((iVar17 != 0) && (param_1[599] < 0xb)) {
      param_1[599] = param_1[599] + 1;
      iVar13 = FUN_00a12210(0xf00);
      if (iVar13 != 0) {
        param_1[0x14] = *(int *)(iVar13 + 0x40);
        param_1[0x15] = *(int *)(iVar13 + 0x44);
        param_1[0x16] = *(int *)(iVar13 + 0x48);
        param_1[0x17] = *(int *)(iVar13 + 0x4c);
        thunk_FUN_00ddfff0(param_1 + 0x24,iVar13 + 0x10);
      }
    }
    FUN_00db3e80(0,0,&DAT_01bea1d0);
    FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e22f10(0);
    _DAT_01bea860 = 1;
    FUN_00b94790(0x3f800000,0x3f800000);
    if ((param_1[0x252] == 0) && (iVar13 = FUN_00a8c760(0x23), iVar13 != 0)) {
      param_1[0x252] = param_1[0x252] + 1;
      uVar20 = 0xd0450;
      uVar15 = FUN_00e03ea0("breaktank",0xd0450);
      iVar13 = FUN_00a18d70(uVar15,uVar20);
      if ((iVar13 != 0) && (iVar13 = FUN_00a7c8a0(), iVar13 != 0)) {
        iStack_35c = 0;
        if (0 < *(short *)(iVar13 + 0x324)) {
          iStack_364 = 0;
          do {
            iVar16 = *(int *)(iVar13 + 800) + iStack_364;
            iVar17 = *(int *)(*(int *)(iVar16 + 0x60) + 0x40);
            if ((iVar17 != 0) && (iVar17 = FUN_00fdbbd0(iVar17,"_hide"), iVar17 != 0)) {
              puVar1 = (uint *)(iVar16 + 0x38);
              *puVar1 = *puVar1 & 0xfffffffe;
            }
            iStack_364 = iStack_364 + 0x70;
            iStack_35c = iStack_35c + 1;
          } while (iStack_35c < *(short *)(iVar13 + 0x324));
        }
        iStack_35c = 0;
        if (0 < *(short *)(iVar13 + 0x324)) {
          iStack_364 = 0;
          do {
            iVar16 = *(int *)(iVar13 + 800) + iStack_364;
            iVar17 = *(int *)(*(int *)(iVar16 + 0x60) + 0x40);
            if ((iVar17 != 0) && (iVar17 = FUN_00fdbbd0(iVar17,"_appear"), iVar17 != 0)) {
              puVar1 = (uint *)(iVar16 + 0x38);
              *puVar1 = *puVar1 & 0xfffffffe;
            }
            iStack_364 = iStack_364 + 0x70;
            iStack_35c = iStack_35c + 1;
          } while (iStack_35c < *(short *)(iVar13 + 0x324));
        }
        iStack_35c = 0;
        if (0 < *(short *)(iVar13 + 0x324)) {
          iStack_364 = 0;
          do {
            iVar16 = *(int *)(iVar13 + 800) + iStack_364;
            iVar17 = *(int *)(*(int *)(iVar16 + 0x60) + 0x40);
            if ((iVar17 != 0) && (iVar17 = FUN_00fdbbd0(iVar17,"_break"), iVar17 != 0)) {
              puVar1 = (uint *)(iVar16 + 0x38);
              *puVar1 = *puVar1 | 1;
            }
            iStack_364 = iStack_364 + 0x70;
            iStack_35c = iStack_35c + 1;
          } while (iStack_35c < *(short *)(iVar13 + 0x324));
        }
      }
    }
    iVar13 = FUN_00a952e0(0,0x431a0000);
    if (iVar13 != 0) {
      FUN_00a33520(0,0x160,3);
      FUN_00a33520(1,0x160,4);
      FUN_00a33520(0,0x160,5);
      FUN_00a33520(0,0x160,6);
    }
    if ((param_1[0x255] == 0) && (iVar13 = FUN_00a8c760(0xb), iVar13 != 0)) {
      param_1[0x255] = 1;
      iVar13 = param_1[0x256];
      if (iVar13 == 0) {
        piVar14 = (int *)FUN_00c1b9a0();
      }
      else {
        piVar14 = (int *)FUN_00c1b9a0();
      }
      (**(code **)(*piVar14 + 0x44))(0xb,iVar13 != 0);
    }
    iVar13 = FUN_00a8c760(0x16);
    if ((iVar13 != 0) && (param_1[0x250] == 0)) {
      FUN_00d5ea40("P170_MIST_RESULT",1,0);
      param_1[0x250] = param_1[0x250] + 1;
      param_1[0x248] = 0x43f00000;
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x251] = 0;
      return;
    }
    break;
  case 6:
    FUN_00db3e80(0,0,&DAT_01bea1d0);
    FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e22f10(0);
    _DAT_01bea860 = 1;
    FUN_00b94790(0x3f800000,0x3f800000);
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
    iVar13 = FUN_00a94ce0(0);
    if ((iVar13 != 0) && (param_1[0x251] == 0)) {
      FUN_00a9ed60(0x20110,&DAT_0163f29c,0,0,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x251] = param_1[0x251] + 1;
    }
    if ((float)param_1[0x248] <= 0.0) {
      FUN_004168f0(5);
      FUN_008e6d00();
      FUN_00d5ea40("P170_MIST_DEAD",1,0);
      param_1[0x2dd] = 1;
      FUN_0049cc90(0x39);
      FUN_004168f0(6);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 7:
    FUN_00db3e80(0,0,&DAT_01bea1d0);
    FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e22f10(0);
    _DAT_01bea860 = 1;
    FUN_00dc1270(0x41a00000,0);
    FUN_00b94790(0x3f800000,0x3f800000);
    FUN_00b7e5d0();
    return;
  case 100:
    (**(code **)(*param_1 + 0x220))(0x40a00000);
    uVar15 = 0;
    FUN_00a92f90(0);
    fVar18 = (float10)FUN_0043f390(uVar15);
    FUN_00b7ab30((float)(fVar18 * (float10)60.0));
    uVar15 = 0;
    FUN_00a92f90(0);
    fVar19 = (float10)FUN_00407b40(uVar15);
    FUN_00b89c20(0x105,0x65,0x23,unaff_EBX,
                 (float)(((float10)(float)fVar18 - fVar19) * (float10)60.0),0x41f00000,0x41f00000,0)
    ;
    DAT_01dc08d8 = 1;
    return;
  case 0x65:
    FUN_00a9ed60(0x20110,&DAT_0163f2b0,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    FUN_00e5e1b0("bgm_Mystral_Finish_exit");
    uVar15 = FUN_00e01ca0();
    FUN_00e01540(0x160,5,uVar15);
    param_1[0x14] = 0x4189999a;
    param_1[0x15] = 0x42100000;
    param_1[0x16] = -0x3d51ae14;
    param_1[0x24] = 0;
    param_1[0x25] = 0x40490fdb;
    param_1[0x26] = 0;
    param_1[0x250] = 0;
    param_1[0x252] = 0;
    FUN_00db3e80(0,0,&DAT_01bea1d0);
    FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e22f10(0);
    _DAT_01bea860 = 1;
    FUN_00b94790(0x3f800000,0x3f800000);
    param_1[0x187] = 5;
    FUN_00a33520(1,0x160,3);
    FUN_00a33520(0,0x160,4);
    FUN_00a33520(0,0x160,5);
    FUN_00a33520(0,0x160,6);
  }
  return;
}

// 004D12C0  FUN_004d12c0  size=1037  [callgraph]
void __fastcall FUN_004d12c0(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    fVar1 = *(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x10e0);
    fVar2 = *(float *)(param_1 + 0x48) - *(float *)(param_1 + 0x10e8);
    if (fVar2 * fVar2 + fVar1 * fVar1 < 25.0) {
      FUN_004beea0(0x10009);
      FUN_004be8c0(0x3f800000,0x3f800000);
      FUN_004beaa0();
      return;
    }
    fVar4 = (float10)FUN_00a8ec30((float *)(param_1 + 0x10e0));
    fVar4 = (float10)FUN_00ddba30((float)((float10)*(float *)(param_1 + 0x94) - fVar4));
    if (ABS(fVar4) <= (float10)2.5307274) {
      FUN_00aa4080(9,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_004be9b0(9,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_004bed90(5,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      *(undefined4 *)(param_1 + 0x61c) = 1;
    }
    else {
      FUN_00aa4080(0xb,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_004be9b0(0xb,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_004bed90(7,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      *(undefined4 *)(param_1 + 0x61c) = 2;
    }
    FUN_004b5020();
  case 1:
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    FUN_004b94a0(param_1 + 0x10e0,0x3e4ccccd,0x3e32b8c2);
    iVar3 = FUN_00a8c760(10);
    if (iVar3 != 0) {
      *(undefined4 *)(param_1 + 0x920) = 0;
      *(undefined4 *)(param_1 + 0x61c) = 3;
      FUN_004cbf10();
      return;
    }
    break;
  case 2:
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    FUN_004b94a0(param_1 + 0x10e0,0x3da3d70a,0x3cd67750);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_00aa4080(9,0,0x3e4ccccd,0x3f800000,0x8000000,0x3e088889,0x3f800000);
      FUN_004be9b0(9,0,0x3e4ccccd,0x3f800000,0x8000000,0x3e088889,0x3f800000);
      FUN_004bed90(5,0,0x3e4ccccd,0x3f800000,0x8000000,0x3e088889,0x3f800000);
      *(undefined4 *)(param_1 + 0x920) = 0;
      *(undefined4 *)(param_1 + 0x61c) = 3;
      FUN_004cbf10();
      return;
    }
    break;
  case 3:
    FUN_004b94a0(param_1 + 0x10e0,0x3e4ccccd,0x3e32b8c2);
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    fVar1 = *(float *)(param_1 + 0x920);
    fVar4 = (float10)FUN_00fdc1f0();
    fVar4 = ((float10)1 - fVar4) * ((float10)0.4 - (float10)fVar1) + (float10)fVar1;
    *(float *)(param_1 + 0x920) = (float)fVar4;
    FUN_00a8b8a0(&local_20,(float)(fVar4 * (float10)*(float *)(param_1 + 0x910)));
    *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0x50) + local_20;
    *(float *)(param_1 + 0x54) = local_1c + *(float *)(param_1 + 0x54);
    *(float *)(param_1 + 0x58) = local_18 + *(float *)(param_1 + 0x58);
    *(float *)(param_1 + 0x5c) = local_14 + *(float *)(param_1 + 0x5c);
    fVar4 = (float10)FUN_004bcdc0(param_1 + 0x40);
    if (fVar4 < (float10)10.889999) {
      FUN_004beea0(0x60000);
      FUN_004b9460();
    }
  }
  return;
}

// 004D1EA0  Em0110::vf48  size=1045  [class]
void __fastcall Em0110::vf48(int *param_1)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  float fStack_4;
  
  BehaviorEmBase::vf48();
  FUN_00d89e60(0x24);
  if (((param_1[0x47e] != 0) && (param_1[0x42e] == 2)) && (iVar3 = FUN_00c19890(5,2), iVar3 == 0)) {
    FUN_00c18610(5,2);
  }
  if ((param_1[0x4a8] != 0) &&
     (fVar1 = (float)param_1[0x4a7], param_1[0x4a7] = (int)(fVar1 - (float)param_1[0x244]),
     fVar1 - (float)param_1[0x244] <= 0.0)) {
    (**(code **)(*param_1 + 0x110))(0);
  }
  if (param_1[0x128] == 1) {
    if (param_1[0x186] != 0x10001) {
LAB_004d1f3e:
      DAT_01dc08e8 = param_1[0x21d];
      DAT_01dc08e4 = param_1[0x21c];
      DAT_01dc08ec = 1;
      goto LAB_004d1f5f;
    }
  }
  else {
    if (param_1[0x4d5] == 0) goto LAB_004d1f3e;
LAB_004d1f5f:
    FUN_00cad2a0();
  }
  param_1[0x370] = param_1[0x370] & 0xffefffff;
  if ((*(byte *)(param_1 + 0x370) & 0x40) != 0) {
    pcVar2 = *(code **)(*param_1 + 0x1fc);
    param_1[0x420] = (int)((float)param_1[0x244] + (float)param_1[0x420]);
    iVar3 = (*pcVar2)();
    if (((iVar3 == 0) && (uVar4 = FUN_00a8cab0(), (uVar4 & 0xffff0000) != 0xe0000)) &&
       ((210.0 < (float)param_1[0x420] && (iVar3 = FUN_004bbd40(), iVar3 == 0)))) {
      param_1[0x370] = param_1[0x370] | 0x100000;
      param_1[0x370] = param_1[0x370] & 0xffffffbf;
      if (2 < param_1[0x42c]) {
        FUN_004beea0(0xe0006);
      }
      param_1[0x420] = 0;
      param_1[0x42c] = 0;
    }
  }
  param_1[0x370] = param_1[0x370] & 0xffffff7f;
  if (param_1[0x42e] != 1) {
    iVar3 = FUN_00a81330();
    if ((((iVar3 == 0) || (iVar3 = FUN_00a7c8a0(), iVar3 == 0)) ||
        ((*(uint *)(iVar3 + 0x4c0) & 1) == 0)) &&
       ((iVar3 = FUN_00a81330(), iVar3 != 0 && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)))) {
      iVar3 = FUN_00a81330();
      if (iVar3 != 0) {
        FUN_00a7c8a0();
      }
      uVar4 = FUN_004b72d0();
      if (uVar4 < 8) {
        fVar1 = (float)param_1[0x429];
        param_1[0x429] = (int)(fVar1 - (float)param_1[0x244]);
        if (fVar1 - (float)param_1[0x244] < 0.0) {
          param_1[0x370] = param_1[0x370] | 0x80;
          param_1[0x429] = (int)((float)param_1[0x429] + 60.0);
          iVar3 = FUN_004b5990();
          if (iVar3 != 0) {
            (**(code **)(*param_1 + 0x220))(0x40a00000);
            FUN_004bace0();
            param_1[0x370] = param_1[0x370] | 0x100;
            return;
          }
          param_1[0x370] = param_1[0x370] & 0xfffffeff;
        }
        goto LAB_004d211c;
      }
    }
    param_1[0x429] = 0x43340000;
  }
LAB_004d211c:
  if (((0 < param_1[0x41a]) &&
      (fVar1 = (float)param_1[0x41b], param_1[0x41b] = (int)(fVar1 - (float)param_1[0x244]),
      fVar1 - (float)param_1[0x244] <= 0.0)) &&
     (iVar3 = param_1[0x41a] + -1, param_1[0x41a] = iVar3, iVar3 < 1)) {
    param_1[0x481] = 0;
    param_1[0x41a] = 0;
    param_1[0x370] = param_1[0x370] & 0xffff7fff;
  }
  if (((param_1[0x370] & 0x800000U) == 0) &&
     (fVar1 = (float)param_1[0x441], !NAN(fVar1) && 0.0 < fVar1 != (fVar1 == 0.0))) {
    param_1[0x441] = (int)((float)param_1[0x441] - (float)param_1[0x244]);
  }
  param_1[0x434] = (int)((float)param_1[0x434] - (float)param_1[0x244]);
  param_1[0x435] = (int)((float)param_1[0x244] * 0.016666668 + (float)param_1[0x435]);
  if (param_1[0x186] != 0xe0007) {
    fStack_4 = 1.0;
    iVar3 = FUN_00a81330();
    if ((((iVar3 == 0) || (iVar3 = FUN_00a7c8a0(), iVar3 == 0)) ||
        ((*(uint *)(iVar3 + 0x4c0) & 1) == 0)) && (iVar3 = FUN_004bae70(), iVar3 < 2)) {
      fStack_4 = 2.0;
    }
    param_1[0x46d] = (int)(fStack_4 * (float)param_1[0x244] + (float)param_1[0x46d]);
  }
  iVar3 = FUN_00a81330();
  if (((iVar3 == 0) || (iVar3 = FUN_00a7c8a0(), iVar3 == 0)) ||
     ((*(uint *)(iVar3 + 0x4c0) & 1) == 0)) {
    param_1[0x46e] = (int)((float)param_1[0x46e] + (float)param_1[0x244]);
  }
  iVar3 = FUN_004b8ad0();
  if (iVar3 != 0) {
    FUN_004cd0d0();
  }
  if (((param_1[0x370] & 0x80000000U) != 0) &&
     (fVar1 = (float)param_1[0x47f], param_1[0x47f] = (int)(fVar1 - (float)param_1[0x244]),
     fVar1 - (float)param_1[0x244] <= 0.0)) {
    param_1[0x370] = param_1[0x370] & 0x7fffffff;
  }
  FUN_004bfd10();
  FUN_004bb0e0();
  return;
}

// 004D22C0  Em0110::vf358  size=96  [class]
void __thiscall Em0110::vf358(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 local_160 [348];
  
  uVar2 = 0;
  uVar1 = FUN_00a7c8a0(0);
  FUN_004039a0(param_2,uVar1,uVar2);
  FUN_00e03080(*(undefined4 *)(param_1 + 0x4f0),0);
  if (param_3 != 0) {
    FUN_00dffb20(param_3);
  }
  FUN_00a963e0(local_160);
  return;
}

// 004D2320  FUN_004d2320  size=831  [callgraph]
void __fastcall FUN_004d2320(int *param_1)

{
  int iVar1;
  float10 fVar2;
  
  if (param_1[0x128] != 1) {
    if (((param_1[0x186] & 0xffff0000U) == 0xe0000) && (iVar1 = FUN_004b7fe0(), iVar1 == 0)) {
      return;
    }
    iVar1 = (**(code **)(*param_1 + 800))(0x3d888889);
    if ((iVar1 != 0) && ((DAT_01bea060 & 0x2000000) == 0)) {
      iVar1 = param_1[0x42e];
      if (iVar1 == 0) {
        iVar1 = param_1[0x186];
        if (iVar1 == 0x1000e) {
          return;
        }
        if (iVar1 == 0x1000c) {
          return;
        }
        if (iVar1 == 0x1000b) {
          return;
        }
        fVar2 = (float10)FUN_004b5050();
        if (fVar2 < (float10)0.75 == (fVar2 == (float10)0.75)) {
          return;
        }
        iVar1 = FUN_004ba1b0();
        if (iVar1 != 0) {
          iVar1 = param_1[0x186];
          if (iVar1 == 0x10003) {
            return;
          }
          if (iVar1 == 0x10005) {
            return;
          }
          if (iVar1 == 0x10004) {
            return;
          }
          FUN_004bbfa0();
          FUN_004cc190();
          return;
        }
        FUN_004bbfa0();
        iVar1 = FUN_004ba180();
        if (iVar1 != 0) {
          FUN_004beea0(0x1000e);
          return;
        }
      }
      else {
        if (iVar1 != 1) {
          if (iVar1 != 2) {
            return;
          }
          iVar1 = param_1[0x186];
          if (iVar1 == 0xe000a) {
            return;
          }
          if (iVar1 == 0x10004) {
            return;
          }
          if (iVar1 == 0x10003) {
            return;
          }
          if (iVar1 == 0x10005) {
            return;
          }
          if (iVar1 == 0x1000c) {
            return;
          }
          if (iVar1 == 0xe0007) {
            return;
          }
          if (iVar1 == 0xe000c) {
            return;
          }
          if (iVar1 == 0x50000) {
            return;
          }
          if (iVar1 == 0x3000a) {
            return;
          }
          if (iVar1 == 0x1000b) {
            return;
          }
          iVar1 = (**(code **)(*(int *)param_1[0x2a1] + 0x1fc))();
          if (iVar1 != 0) {
            return;
          }
          iVar1 = FUN_004b7fe0();
          if (iVar1 == 0) {
            return;
          }
          FUN_004bbfa0();
          (**(code **)(*param_1 + 0x314))();
          if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
            *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
          }
          iVar1 = FUN_004ba1b0();
          if (iVar1 == 0) {
            FUN_004beea0(0x1000c);
            return;
          }
          fVar2 = (float10)FUN_004b58a0();
          if ((float10)1.3089969 <= fVar2) {
            fVar2 = (float10)FUN_004b58a0();
            if (fVar2 <= (float10)2.3561945) {
              FUN_004beea0(0x3000a);
              return;
            }
            FUN_004beea0(0x10004);
            return;
          }
          if (20.25 < (float)param_1[0x2a4]) {
            if (36.0 < (float)param_1[0x2a4]) {
              FUN_004bf1e0();
              return;
            }
            FUN_004beea0(0xe000a);
            return;
          }
          FUN_004beea0(0x50000);
          return;
        }
        iVar1 = param_1[0x186];
        if (iVar1 == 0x1000c) {
          return;
        }
        if (iVar1 == 0x50000) {
          return;
        }
        if (iVar1 == 0x50001) {
          return;
        }
        if (iVar1 == 0x30003) {
          return;
        }
        if (((((iVar1 == 0x2000b) || (iVar1 == 0x10003)) || (iVar1 == 0x10006)) ||
            (iVar1 == 0x1000b)) && (iVar1 = FUN_00a8c760(4), iVar1 == 0)) {
          return;
        }
        fVar2 = (float10)FUN_004b5050();
        if (fVar2 < (float10)0.5 == (fVar2 == (float10)0.5)) {
          return;
        }
        FUN_004bbfa0();
        iVar1 = FUN_004ba1b0();
        if ((iVar1 != 0) && (iVar1 = FUN_004be0f0(), 6 < iVar1)) {
          if (20.25 < (float)param_1[0x2a4]) {
            FUN_004bf1e0();
            param_1[0x370] = param_1[0x370] | 0x10000000;
            return;
          }
          FUN_004beea0(0x2000b);
          return;
        }
      }
      FUN_004beea0(0x1000c);
    }
  }
  return;
}

// 004D80F0  FUN_004d80f0  size=311  [callgraph]
void __fastcall FUN_004d80f0(int *param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  float10 fVar4;
  
  if ((param_1[0x370] & 0x80000U) == 0) {
    FUN_004bac60();
    param_1[0x370] = param_1[0x370] | 0x80000;
  }
  fVar1 = (float)param_1[0x24a];
  param_1[0x24a] = (int)((float)param_1[0x244] + fVar1);
  if ((5.0 < (float)param_1[0x244] + fVar1) && ((param_1[0x370] & 0x40U) == 0)) {
    param_1[0x24a] = 0;
    if ((param_1[0x370] & 0x100U) == 0) {
      iVar2 = FUN_00a81330();
      if (iVar2 != 0) {
        FUN_00a7c8a0();
      }
      iVar2 = FUN_004b72d0();
      if ((iVar2 != 0xe) && (iVar2 = FUN_004bf240(), iVar2 != 0)) {
        (**(code **)(*param_1 + 0x220))(0x40a00000);
        return;
      }
    }
    iVar2 = FUN_004d7ff0(0x41a00000,0);
    if (iVar2 == 0) {
      fVar4 = (float10)FUN_00a8ec30(param_1[0x2a1] + 0x40);
      fVar4 = (float10)FUN_00ddba30((float)((float10)(float)param_1[0x25] - fVar4));
      if (ABS(ABS(fVar4)) <= (float10)2.3561945) {
        if ((float10)0.7853982 <= ABS(ABS(fVar4))) {
          FUN_004cc150();
          return;
        }
      }
      else {
        uVar3 = FUN_00dde2d0(0,100);
        if ((uVar3 & 1) == 0) {
          FUN_004beea0(0x50001);
          return;
        }
        FUN_004beea0(0x10004);
      }
    }
  }
  return;
}

// 004D8230  FUN_004d8230  size=148  [callgraph]
void __fastcall FUN_004d8230(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00a8eea0();
  iVar2 = FUN_00a8eeb0();
  if (((float)iVar1 / (float)iVar2 < 0.1 != ((float)iVar1 / (float)iVar2 == 0.1)) &&
     (*(int *)(param_1 + 0x10b8) == 2)) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0xa84) + 0x1fc))();
    if (iVar1 != 0) {
      return;
    }
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if ((iVar1 != 0) && ((*(uint *)(iVar1 + 0x4c0) & 1) != 0)) {
      FUN_004d27e0();
      return;
    }
  }
  FUN_004d80f0();
  return;
}

// 004D82D0  Em0110::vf32C  size=1707  [class]
uint __fastcall Em0110::vf32C(int *param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  int unaff_EBX;
  int *piVar5;
  uint unaff_EDI;
  int *piVar6;
  float10 fVar7;
  undefined4 uVar8;
  int *piStack_30;
  int *local_2c;
  uint local_28;
  int local_24;
  float afStack_20 [3];
  float fStack_14;
  
  param_1[0x1a1] = 0;
  if ((*(byte *)(param_1 + 0x130) & 1) != 0) {
    iVar3 = FUN_00a81330();
    if ((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
      uVar4 = FUN_004d18c0();
      return uVar4;
    }
    iVar3 = FUN_00a81330();
    if ((((iVar3 == 0) || (iVar3 = FUN_00a7c8a0(), iVar3 == 0)) ||
        ((iVar3 = FUN_00a8ef10(), iVar3 != 0 && ((*(byte *)(param_1 + 0x370) & 8) != 0)))) ||
       (((*(byte *)((int)param_1 + 0xdc3) & 1) != 0 || (iVar3 = FUN_004d7440(), iVar3 == 0)))) {
      param_1[0x370] = param_1[0x370] & 0xfffffff7;
      piVar5 = (int *)0x0;
      FUN_00ac2080(0);
      local_24 = 0x41200000;
      piVar6 = (int *)param_1[0x19f];
      local_2c = piVar6 + param_1[0x1a1] * 0x54;
      local_28 = 0;
      if (piVar6 != local_2c) {
        do {
          iVar3 = *piVar6;
          if ((((iVar3 != 0) && (iVar3 != 1)) && (iVar3 != 2)) &&
             (((iVar3 != 0x1b0 && (iVar3 != 0x147)) &&
              (iVar3 = FUN_00a81330(), iVar3 != param_1[0x13c])))) {
            if (iVar3 != 0) {
              piVar5 = (int *)FUN_00a7c8a0();
            }
            if (*piVar6 == 0xe0) {
              if (((piVar5 != (int *)0x0) &&
                  (iVar3 = (**(code **)(*piVar5 + 0x14c))(0x56,param_1[0x13c]), iVar3 != 0)) &&
                 ((**(code **)(*piVar5 + 0x150))(0x56,param_1[0x13c]),
                 (*(byte *)(param_1 + 0x370) & 0x40) == 0)) {
                param_1[0x420] = 0;
                param_1[0x370] = param_1[0x370] | 0x40;
              }
            }
            else {
              iVar3 = FUN_00a8ef10();
              if ((iVar3 == 0) && (iVar3 = FUN_00a8f040(piVar6), iVar3 == 0)) {
                iVar3 = FUN_00a8eea0();
                if ((0 < iVar3) &&
                   ((piVar5 != (int *)0x0 && ((*(byte *)(piVar5 + 0x130) & 0x10) != 0)))) {
                  (**(code **)(*param_1 + 0x21c))(piVar5,(char)piVar6[4],0x3c23d70a,0);
                  local_24 = 0x40000000;
                }
                if ((param_1[0x128] == 1) && (param_1[0x186] == 0x10001)) {
                  uVar8 = 0;
                  goto LAB_004d84e5;
                }
                if ((*(byte *)((int)param_1 + 0xdc3) & 1) != 0) {
                  param_1[0x4d4] = piVar6[0x3b];
                  FUN_00a8e5d0(param_1,piVar6,1);
                  if ((*(byte *)((int)piVar6 + 0x92) & 1) != 0) {
                    (**(code **)(*param_1 + 0x198))(piVar5,piVar6,1);
                    return 1;
                  }
                  (**(code **)(*param_1 + 0x198))(piVar5,piVar6,0x100);
                  return 1;
                }
                fVar7 = (float10)FUN_00ddba30((float)piVar6[0xc] - (float)param_1[0x25]);
                param_1[0x245] = (int)(float)fVar7;
                param_1[0x41d] = 0;
                if (piVar5 != (int *)0x0) {
                  afStack_20[0] = (float)piVar5[0x10] - (float)param_1[0x10];
                  afStack_20[2] = (float)piVar5[0x12] - (float)param_1[0x12];
                  fStack_14 = (float)piVar5[0x13] - (float)param_1[0x13];
                  afStack_20[1] = 0.0;
                  if ((afStack_20[2] != 0.0) || (afStack_20[0] != 0.0)) {
                    fVar2 = afStack_20[2] * afStack_20[2] + afStack_20[0] * afStack_20[0];
                    if (fVar2 < 0.0 == (fVar2 == 0.0)) {
                      FUN_00ddf460(afStack_20,afStack_20);
                      fVar7 = (float10)fpatan((float10)afStack_20[0],(float10)afStack_20[2]);
                      param_1[0x41d] = (int)(float)fVar7;
                    }
                    else {
                      FUN_00dd5650(&DAT_0163d0ac);
                      fVar7 = (float10)fpatan((float10)0,(float10)0);
                      param_1[0x41d] = (int)(float)fVar7;
                    }
                  }
                }
                param_1[0x498] = piVar6[0x40];
                param_1[0x499] = piVar6[0x41];
                param_1[0x49a] = piVar6[0x42];
                param_1[0x49b] = piVar6[0x43];
                param_1[0x431] = param_1[0x431] + 1;
                param_1[0x480] = param_1[0x480] + 1;
                if (param_1[0x481] <= param_1[0x480]) {
                  FUN_004bbfa0();
                }
                if (*piVar6 == 0x4f) {
                  if (param_1[0x4a9] != 0) {
                    uVar8 = 1;
                    goto LAB_004d84e5;
                  }
                  if ((param_1[0x186] == 0xe0004) || (param_1[0x186] == 0xe0005)) {
                    if ((param_1[0x1d9] != 0) && (*(int *)(param_1[0x1d9] + 0x10c) == 0)) {
                      FUN_008e0ae0(1);
                    }
                    piStack_30 = param_1 + 0x40c;
                    local_24 = 2;
                    do {
                      iVar3 = FUN_00a81330();
                      if (iVar3 != 0) {
                        FUN_00a805f0();
                        iVar3 = FUN_004ba0a0();
                        if (iVar3 != 0) {
                          local_2c = (int *)0x3;
                          uVar4 = 0;
                          do {
                            if (0x37 < uVar4) break;
                            iVar1 = *(int *)((int)&DAT_0163f1f0 + uVar4);
                            local_28 = uVar4 + 4;
                            if ((0xd < iVar1) || (*(int *)(iVar3 + (iVar1 * 9 + 0x372) * 4) == 0)) {
                              FUN_004cb2c0(iVar1);
                              local_2c = (int *)((int)local_2c + -1);
                            }
                            uVar4 = local_28;
                          } while (0 < (int)local_2c);
                          *(undefined4 *)(iVar3 + 0xfc8) = 0;
                        }
                      }
                      FUN_00a7c950();
                      piStack_30 = piStack_30 + 1;
                      local_24 = local_24 + -1;
                    } while (local_24 != 0);
                    iVar3 = FUN_004ba1b0();
                    if (iVar3 == 0) {
                      FUN_004c4860();
                      uVar8 = FUN_004bbc30(piVar6);
                      (**(code **)(*param_1 + 0x30c))(uVar8,0);
                      if (param_1[0x128] == 1) {
                        iVar3 = FUN_00a8eea0();
                        if ((iVar3 < 1) && (param_1[0x139] == 0)) {
                          param_1[0x139] = 1;
                          FUN_004beea0(0x3000e);
                          (**(code **)(*param_1 + 0x198))(piVar5,piVar6,0x81);
                          return 1;
                        }
                      }
                      else {
                        iVar3 = FUN_00a8eea0();
                        if (iVar3 < 1) {
                          FUN_00a8ee20(1);
                        }
                      }
                      (**(code **)(*param_1 + 0x198))(piVar5,piVar6,1);
                      return 1;
                    }
                    FUN_004c4820(piVar6);
                    uVar8 = 0x29;
LAB_004d84e5:
                    (**(code **)(*param_1 + 0x198))(piVar5,piVar6,uVar8);
                    return 1;
                  }
                }
                iVar3 = FUN_004bbdd0(piVar6);
                if (iVar3 == 0) {
                  local_28 = 1;
                  local_2c = (int *)FUN_004bbc30(piVar6);
                  (**(code **)(*param_1 + 0x30c))(local_2c,0);
                  if ((param_1[0x128] != 1) && (iVar3 = FUN_00a8eea0(), iVar3 < 1)) {
                    FUN_00a8ee20(1);
                  }
                  FUN_004c41b0(piVar6);
                  (**(code **)(*param_1 + 0x220))(local_2c);
                  param_1[0x417] = param_1[0x417] + unaff_EBX;
                  fVar7 = (float10)FUN_00ddba30((float)piVar6[0xc] - (float)param_1[0x25]);
                  param_1[0x245] = (int)(float)fVar7;
                  piStack_30 = (int *)0x0;
                  FUN_004c4400(piVar6,&stack0xffffffc8,&piStack_30);
                  uVar4 = (uint)piStack_30 | 1;
                  if (param_1[0x4a9] != 0) {
                    uVar4 = 0x8000;
                  }
                  (**(code **)(*param_1 + 0x198))(piVar5,piVar6,uVar4);
                  return unaff_EDI;
                }
                if ((param_1[0x1d9] != 0) && (*(int *)(param_1[0x1d9] + 0x10c) == 0)) {
                  FUN_008e0ae0(1);
                }
                iVar3 = FUN_004c47d0(piVar6);
                if (iVar3 != 0) {
                  FUN_004c4820(piVar6);
                  (**(code **)(*param_1 + 0x198))(piVar5,piVar6,0x29);
                  return 1;
                }
                param_1[0x370] = param_1[0x370] & 0xfffffdff;
                FUN_004d5180(piVar6);
                (**(code **)(*param_1 + 0x198))(piVar5,piVar6,3);
                return 1;
              }
            }
          }
          piVar6 = piVar6 + 0x54;
        } while (piVar6 != local_2c);
      }
      iVar3 = FUN_004cdba0();
      uVar4 = 1;
      if (iVar3 == 0) {
        uVar4 = local_28;
      }
      return uVar4;
    }
  }
  return 0;
}

// 004D8980  FUN_004d8980  size=771  [callgraph]
void __fastcall FUN_004d8980(int *param_1)

{
  int iVar1;
  float10 fVar2;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x66,0,0x3dcccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_004be9b0(0x66,0,0x3dcccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    iVar1 = FUN_00a81330();
    if ((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
      FUN_00aa3f60(4);
    }
    (**(code **)(*param_1 + 0x1d4))(1);
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_004d8a36;
  case 1:
LAB_004d8a36:
    (**(code **)(*param_1 + 0x220))(0x40a00000);
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_00aa3f60(0x67);
      iVar1 = FUN_00a81330();
      if ((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
        FUN_00aa3f60(0x67);
      }
      iVar1 = FUN_00a81330();
      if ((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) {
        FUN_00aa3f60(4);
      }
      (**(code **)(*param_1 + 0x314))();
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    (**(code **)(*param_1 + 0x220))(0x40a00000);
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    iVar1 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x1d4))(0);
      FUN_00aa4080(0x68,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_004be9b0(0x68,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_004bed60(4);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 3:
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    iVar1 = FUN_00a94ce0(0);
    if ((iVar1 != 0) || (iVar1 = FUN_00a8c760(4), iVar1 != 0)) {
      fVar2 = (float10)FUN_00dde300(0,0x3f800000);
      if ((float10)0.8 <= fVar2) {
                    /* WARNING: Could not recover jumptable at 0x004d8c7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x34c))();
        return;
      }
      fVar2 = (float10)FUN_004b58a0();
      if ((float10)0.43633232 <= fVar2) {
        if (param_1[0x42e] != 1) {
          FUN_004d7ff0(0x41a00000,0);
          return;
        }
        FUN_004d7ff0(0x42700000,0);
        return;
      }
      FUN_004beea0(0x3000a);
      return;
    }
  }
  return;
}

// 004D91D0  FUN_004d91d0  size=1038  [callgraph]
void __fastcall FUN_004d91d0(int *param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  float10 fVar4;
  float10 fVar5;
  
  if (param_1[0x188] == 1) {
    param_1[0x188] = 2;
    iVar2 = FUN_00907560(param_1 + 0x458,0,0,0,0,0,0,0);
    param_1[0x250] = iVar2;
    RayCastManager::getWork(param_1 + 0x458);
  }
  fVar4 = (float10)FUN_00a8ec30(param_1[0x2a1] + 0x40);
  fVar4 = (float10)FUN_00ddba30((float)((float10)(float)param_1[0x25] - fVar4));
  fVar4 = ABS(fVar4);
  if ((float10)1.5707964 < fVar4) {
    fVar1 = (float)param_1[0x2a4];
    if (((!NAN(fVar1) && 9.0 < fVar1 != (fVar1 == 9.0)) && ((float10)2.5307274 < fVar4)) &&
       ((float)param_1[0x2a4] <= 9.0)) {
      uVar3 = FUN_00dde2d0(0,100);
      if ((uVar3 & 3) != 0) {
        FUN_004beea0(0x20006);
        return;
      }
      FUN_004beea0(0x10004);
      return;
    }
    FUN_004beea0(0x50001);
    return;
  }
  if ((20.25 <= (float)param_1[0x2a4]) || (param_1[0x404] == 0x50000)) {
    iVar2 = FUN_00a81330();
    if (iVar2 != 0) {
      FUN_00a7c8a0();
    }
    uVar3 = FUN_004b72d0();
    if ((6 < uVar3) &&
       (((float)param_1[0x434] < 0.0 ||
        (fVar4 = (float10)FUN_004b5050(), fVar4 < (float10)0.5 != (fVar4 == (float10)0.5))))) {
      param_1[0x370] = param_1[0x370] | 0x10000000;
      param_1[0x428] = param_1[0x2a1];
      FUN_004beea0(0x10003);
      return;
    }
    if ((param_1[0x370] & 0x100U) == 0) {
      iVar2 = FUN_00a81330();
      if (iVar2 != 0) {
        FUN_00a7c8a0();
      }
      iVar2 = FUN_004b72d0();
      if ((iVar2 != 0xe) && (iVar2 = FUN_004bf240(), iVar2 != 0)) {
        (**(code **)(*param_1 + 0x220))(0x40a00000);
        return;
      }
    }
    iVar2 = FUN_00a81330();
    if (iVar2 != 0) {
      FUN_00a7c8a0();
    }
  }
  else {
    iVar2 = FUN_00a81330();
    if (iVar2 != 0) {
      FUN_00a7c8a0();
    }
    uVar3 = FUN_004b72d0();
    if (6 < uVar3) {
      if ((0.0 <= (float)param_1[0x434]) &&
         (fVar5 = (float10)FUN_004b5050(), fVar5 < (float10)0.5 == (fVar5 == (float10)0.5))) {
        FUN_004beea0(0x50000);
        return;
      }
      if (1.5707964 < (float)fVar4) {
        FUN_004beea0(0x50001);
        param_1[0x405] = 0x2000b;
        return;
      }
      FUN_004beea0(0x2000b);
      return;
    }
    if (param_1[0x250] == 0) {
      if ((6.25 <= (float)param_1[0x2a4]) || (uVar3 = FUN_00dde2d0(0,100), (uVar3 & 1) == 0)) {
        FUN_004beea0(0x50000);
      }
      else {
        FUN_004beea0(0x50001);
      }
      goto LAB_004d9537;
    }
    if ((param_1[0x370] & 0x100U) == 0) {
      FUN_004ba0a0();
      iVar2 = FUN_004b72d0();
      if ((iVar2 != 0xe) && (iVar2 = FUN_004bf240(), iVar2 != 0)) {
        (**(code **)(*param_1 + 0x220))(0x40a00000);
        return;
      }
    }
    FUN_004ba0a0();
  }
  uVar3 = FUN_004b72d0();
  if (((uVar3 < 7) && (fVar4 = (float10)FUN_004ba310(), (float10)5.0 < fVar4)) &&
     (iVar2 = FUN_004d7ff0(0x42700000,0), iVar2 != 0)) {
    return;
  }
LAB_004d9537:
  fVar1 = (float)param_1[0x24b];
  param_1[0x24b] = (int)(fVar1 - (float)param_1[0x244]);
  if ((fVar1 - (float)param_1[0x244] <= 0.0) &&
     ((100.0 < (float)param_1[0x2a4] || (iVar2 = FUN_004c1020(), iVar2 == 0)))) {
    iVar2 = FUN_00a81330();
    if (iVar2 != 0) {
      FUN_00a7c8a0();
    }
    uVar3 = FUN_004b72d0();
    if (uVar3 < 0xe) {
      FUN_004d7ff0(0x42700000,1);
      return;
    }
    fVar1 = (float)param_1[0x2a4];
    if (!NAN(fVar1) && 210.25 < fVar1 != (fVar1 == 210.25)) {
      FUN_004bf1e0();
      return;
    }
    FUN_004beea0(0x10002);
  }
  return;
}

// 004D95E0  FUN_004d95e0  size=262  [callgraph]
void __fastcall FUN_004d95e0(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  param_1[0x24a] = (int)((float)param_1[0x244] + (float)param_1[0x24a]);
  if ((*(byte *)(param_1 + 0x370) & 0x40) == 0) {
    iVar1 = FUN_00a8eea0();
    iVar2 = FUN_00a8eeb0();
    if ((float)iVar1 / (float)iVar2 < 0.5 != ((float)iVar1 / (float)iVar2 == 0.5)) {
      iVar1 = FUN_004be0f0();
      if (iVar1 < 0xe) {
        FUN_004beea0(0x1000c);
        return;
      }
    }
    param_1[0x24a] = 0;
    if ((param_1[0x370] & 0x100U) == 0) {
      iVar1 = FUN_004bf240();
      if (iVar1 != 0) {
        (**(code **)(*param_1 + 0x220))(0x40a00000);
        return;
      }
    }
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        uVar3 = FUN_004b72d0();
        if (6 < uVar3) {
          param_1[0x370] = param_1[0x370] & 0xfff7ffff;
          FUN_004beea0(0x10006);
          return;
        }
      }
    }
    FUN_004d7ff0(0x42700000,0);
  }
  return;
}

// 004D96F0  Em0110::vf40  size=929  [class]
undefined4 __fastcall Em0110::vf40(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined1 local_80 [124];
  
  iVar2 = BehaviorEmBase::vf40();
  if (iVar2 == 0) {
    return 0;
  }
  param_1[0x2c0] = param_1[0x12a];
  FUN_009fd240();
  iVar2 = FUN_008ec660(param_1,0x3fe66666,0x3f000000,0x41700000,0x41a00000,0x78,7,0);
  param_1[0x1d9] = iVar2;
  FUN_008e6d00();
  piVar3 = (int *)FUN_008e0d60();
  param_1[0x490] = *piVar3;
  iVar2 = 0;
  param_1[0x491] = piVar3[1];
  param_1[0x492] = piVar3[2];
  param_1[0x493] = piVar3[3];
  param_1[0x494] = 0;
  do {
    FUN_004b91b0(iVar2,0);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  FUN_004bba90();
  iVar2 = FUN_00c5def0(param_1[0x13c]);
  param_1[0x25c] = iVar2;
  FUN_00405230();
  local_90 = 0;
  local_8c = 0x3e99999a;
  local_88 = 0;
  FUN_00c151f0(1,param_1[0x13c],0,&local_90,0,0x42c80000,0x3f000000,3,0);
  FUN_00c57830(local_80);
  param_1[0x1bb] = 1;
  FUN_004d7b30();
  FUN_00a929d0();
  DAT_01dc08dc = param_1[0x128];
  DAT_018b4414 = param_1[0x12d];
  DAT_01dc08e0 = 0;
  param_1[0x20b] = 5;
  param_1[0x20c] = 5;
  FUN_004b5d50();
  param_1[0xd9] = param_1[0xd9] & 0xffefffff;
  param_1[0x205] = 4;
  FUN_004b6140();
  param_1[0x370] = 0;
  param_1[0x400] = 0;
  param_1[0x401] = 0;
  param_1[0x402] = 0;
  param_1[0x403] = 0;
  param_1[0x424] = 0;
  param_1[0x425] = 0;
  param_1[0x426] = 0;
  param_1[0x427] = 0;
  param_1[0x3fc] = 0;
  param_1[0x404] = -1;
  param_1[0x41b] = 0;
  param_1[0x406] = -1;
  param_1[0x431] = 0;
  param_1[0x41c] = param_1[0x22a];
  param_1[0x416] = 0;
  param_1[0x417] = 0;
  param_1[0x418] = 0;
  param_1[0x41d] = 0;
  param_1[0x419] = 3;
  param_1[0x41f] = 0;
  param_1[0x41a] = 0;
  param_1[0x41e] = 0;
  param_1[0x420] = 0;
  param_1[0x42b] = 3;
  param_1[0x429] = 0;
  param_1[0x428] = 0;
  param_1[0x42a] = 0;
  param_1[0x42d] = 0x3f800000;
  param_1[0x42c] = 0;
  param_1[0x434] = 0;
  param_1[0x42e] = 0;
  param_1[0x42f] = -1;
  param_1[0x44f] = 0x3f800000;
  param_1[0x430] = 0;
  param_1[0x433] = 0;
  param_1[0x46d] = 0;
  param_1[0x440] = 0;
  param_1[0x205] = 4;
  param_1[0x474] = 0x42f00000;
  param_1[0x476] = -1;
  param_1[0x478] = 0;
  param_1[0x47c] = 0;
  param_1[0x475] = 0;
  param_1[0x48a] = 1;
  param_1[0x47b] = 0;
  param_1[0x4a4] = 0;
  param_1[0x47d] = 0;
  param_1[0x4a5] = 0;
  param_1[0x4ce] = 0;
  param_1[0x46f] = 0x3f800000;
  param_1[0x4d1] = 0;
  param_1[0x4a8] = 0;
  param_1[0x488] = 0x3f000000;
  param_1[0x4a9] = 0;
  param_1[0x4d3] = 0;
  param_1[0x489] = 0;
  param_1[0x4d4] = 0;
  param_1[0x47a] = 0;
  param_1[0x4d5] = 0;
  param_1[0x48b] = 0;
  param_1[0x4a6] = 0;
  FUN_004b8c60();
  (**(code **)(*param_1 + 0x34c))();
  FUN_004be1d0(0);
  param_1[0x4a7] = 0;
  param_1[0x21e] = 1;
  if ((*(byte *)(param_1 + 0x2c0) & 1) != 0) {
    pcVar1 = *(code **)(*param_1 + 0x110);
    param_1[0x4a7] = 0x42700000;
    (*pcVar1)(1);
    FUN_00aa92c0(0x208);
  }
  return 1;
}

// 004D9AA0  FUN_004d9aa0  size=136  [callgraph]
void __fastcall FUN_004d9aa0(int param_1)

{
  int iVar1;
  
  *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
  if (((*(int *)(param_1 + 0x61c) != 0) && ((*(byte *)(param_1 + 0xdc0) & 1) == 0)) &&
     (*(float *)(param_1 + 0x11ec) <= 0.0)) {
    if (*(int *)(param_1 + 0x1014) == -1) {
      iVar1 = FUN_004bfee0();
      if ((iVar1 == 0) && (*(float *)(param_1 + 0x920) <= 0.0)) {
        if (*(int *)(param_1 + 0x10b8) == 2) {
          FUN_004d8230();
          return;
        }
        iVar1 = FUN_004ba1b0();
        if (iVar1 != 0) {
          FUN_004d27e0();
          return;
        }
        FUN_004d80f0();
        return;
      }
    }
    else {
      FUN_004beea0(*(int *)(param_1 + 0x1014));
    }
  }
  return;
}

// 004DAB10  FUN_004dab10  size=612  [callgraph]
void __fastcall FUN_004dab10(int *param_1)

{
  float fVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  int iVar3;
  int *piVar4;
  uint uVar5;
  float10 fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  
  iVar3 = param_1[0x186];
  if (iVar3 < 0x20001) {
    if (iVar3 == 0x20000) {
      FUN_004c1360();
      return;
    }
    switch(iVar3) {
    case 0x10000:
      FUN_004bfff0();
      return;
    case 0x10001:
      FUN_004c0300();
      return;
    case 0x10002:
      FUN_004d2a20();
      return;
    case 0x10003:
      FUN_004d2db0();
      return;
    case 0x10004:
      FUN_004cc350();
      return;
    case 0x10005:
      FUN_004c0440();
      return;
    case 0x10006:
      FUN_004d37e0();
      return;
    case 0x10007:
      FUN_004cb580();
      return;
    case 0x10008:
      FUN_004d12c0();
      return;
    case 0x10009:
      FUN_004c9460();
      return;
    case 0x1000a:
      FUN_004c05e0();
      return;
    case 0x1000b:
      FUN_004d4b90();
      return;
    case 0x1000c:
    case 0x1000e:
      FUN_004cc610();
      return;
    case 0x1000d:
      if (param_1[0x187] == 0) {
        FUN_00aa4080(0x3f,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        iVar3 = FUN_00a81330();
        if ((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
          FUN_00aa4080(0x3f,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        }
        iVar3 = FUN_00a81330();
        if ((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
          FUN_00aa4080(4,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        }
        param_1[0x187] = param_1[0x187] + 1;
      }
      else if (param_1[0x187] != 1) {
        return;
      }
      FUN_004be8c0(0x3f800000,0x3f800000);
      FUN_004beaa0();
      iVar3 = FUN_00a94ce0(0);
      if (((iVar3 != 0) && (iVar3 = FUN_004ccd40(), iVar3 == 0)) &&
         (iVar3 = FUN_004c0fb0(), iVar3 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x004d5013. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x34c))();
        return;
      }
      return;
    case 0x1000f:
      FUN_004c0880();
      return;
    }
  }
  else if (iVar3 < 0x30001) {
    if (iVar3 == 0x30000) {
      FUN_004c48a0();
      return;
    }
    switch(iVar3) {
    case 0x20001:
      FUN_004c1750();
      return;
    case 0x20002:
      FUN_004c1b00();
      return;
    case 0x20003:
      FUN_004c1db0();
      return;
    case 0x20004:
      FUN_004c2050();
      return;
    case 0x20005:
      FUN_004c2290();
      return;
    case 0x20006:
      FUN_004c24f0();
      return;
    case 0x20007:
      FUN_004c26f0();
      return;
    case 0x20008:
      FUN_004c2a50();
      return;
    case 0x20009:
      FUN_004c2ee0();
      return;
    case 0x2000a:
      FUN_004c7ce0();
      return;
    case 0x2000b:
      FUN_004cd130();
      return;
    case 0x2000c:
      FUN_004c3190();
      return;
    case 0x2000d:
      FUN_004c3ab0();
      return;
    case 0x2000e:
      FUN_004c3e00();
      return;
    }
  }
  else if (iVar3 < 0x40001) {
    if (iVar3 == 0x40000) {
      FUN_004c64f0();
      return;
    }
    switch(iVar3) {
    case 0x30001:
      FUN_004c4c00();
      return;
    case 0x30002:
      FUN_004c4f30();
      return;
    case 0x30003:
      FUN_004c51b0();
      return;
    case 0x30004:
      FUN_004c54f0();
      return;
    case 0x30005:
      FUN_004c5870();
      return;
    case 0x30006:
      FUN_004c5b70();
      return;
    case 0x30007:
      FUN_004d8980();
      return;
    case 0x30008:
      FUN_004c5f10();
      return;
    case 0x3000a:
      FUN_004cddf0();
      return;
    case 0x3000b:
      FUN_004c62b0();
      return;
    case 0x3000c:
      FUN_004c63c0();
      return;
    case 0x3000e:
      FUN_004ce870();
      return;
    }
  }
  else if (iVar3 < 0x50001) {
    if (iVar3 == 0x50000) {
      FUN_004c6cc0();
      return;
    }
    switch(iVar3) {
    case 0x40001:
      FUN_004c6860();
      return;
    case 0x40002:
      FUN_004c67c0();
      return;
    case 0x40003:
      FUN_004c69c0();
      return;
    case 0x40004:
      FUN_004c6b80();
      return;
    }
  }
  else if (iVar3 < 0x60001) {
    if (iVar3 == 0x60000) {
      FUN_004c96f0();
      return;
    }
    switch(iVar3) {
    case 0x50001:
      FUN_004ce230();
      return;
    case 0x50002:
      FUN_004ce5b0();
      return;
    case 0x50003:
      FUN_004c6f20();
      return;
    case 0x50004:
      FUN_004c7090();
      return;
    }
  }
  else if (iVar3 < 0x70001) {
    if (iVar3 == 0x70000) {
      FUN_004d3a10();
      return;
    }
    switch(iVar3) {
    case 0x60001:
      FUN_004c9c80();
      return;
    case 0x60002:
      FUN_004c9da0();
      return;
    case 0x60003:
      FUN_004c9ed0();
      return;
    case 0x60004:
      FUN_004ca0e0();
      return;
    case 0x60005:
      FUN_004ca2f0();
      return;
    case 0x60006:
      FUN_004ca6c0();
      return;
    }
  }
  else if (iVar3 < 0xe0001) {
    if (iVar3 == 0xe0000) {
      Em0110MoveCheckLinearCastCollector::Em0110MoveCheckLinearCastCollector();
      return;
    }
    if (iVar3 == 0x70001) {
      FUN_004d4140();
      return;
    }
    if (iVar3 == 0x70002) {
      FUN_004d45f0();
      return;
    }
  }
  else if ((iVar3 < 0xf0001) && (iVar3 != 0xf0000)) {
    switch(iVar3) {
    case 0xe0001:
      FUN_004d6bd0();
      return;
    case 0xe0002:
      FUN_004c80c0();
      return;
    case 0xe0003:
      FUN_004cf1f0();
      return;
    case 0xe0004:
      FUN_004ceb60();
      return;
    case 0xe0005:
      FUN_004ced60();
      return;
    case 0xe0006:
      FUN_004cefa0();
      return;
    case 0xe0007:
      FUN_004d51d0();
      return;
    case 0xe0008:
      goto LAB_004d5b90;
    case 0xe0009:
      FUN_004d64e0();
      return;
    case 0xe000a:
      FUN_004c7630();
      return;
    case 0xe000b:
      FUN_004c72b0();
      return;
    case 0xe000c:
      FUN_004cfa10();
      return;
    default:
      break;
    }
  }
  return;
LAB_004d5b90:
  switch(param_1[0x187]) {
  case 0:
    iVar3 = FUN_00ac9790();
    param_1[0x48c] = iVar3;
    FUN_00aa4080(0x16,0,0,0x3f800000,0x8038000,0xbf800000,0x3f800000);
    FUN_004be9b0(0x16,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_004bed90(4,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    (**(code **)(*param_1 + 0x318))();
    iVar3 = param_1[0x1d9];
    if (*(int *)(iVar3 + 0x104) != 1) {
      *(undefined4 *)(iVar3 + 0x104) = 1;
      *(undefined4 *)(*(int *)(iVar3 + 0xd0) + 4) = 0;
    }
    param_1[0x370] = param_1[0x370] | 2;
    param_1[0x370] = param_1[0x370] | 0x4000;
    if (param_1[0x1d9] != 0) {
      FUN_008e0ae0(0);
    }
    param_1[0x4a9] = 1;
    *(ushort *)((int)param_1 + 0xa2) = *(ushort *)((int)param_1 + 0xa2) | 0x1000;
    param_1[600] = (int)((float)param_1[0x45c] - (float)param_1[0x14]);
    param_1[0x259] = (int)((float)param_1[0x45d] - (float)param_1[0x15]);
    param_1[0x25a] = (int)((float)param_1[0x45e] - (float)param_1[0x16]);
    param_1[0x25b] = (int)((float)param_1[0x45f] - (float)param_1[0x17]);
    param_1[0x460] = (int)((float)param_1[600] * 0.033333335);
    param_1[0x461] = (int)((float)param_1[0x259] * 0.033333335);
    param_1[0x462] = (int)((float)param_1[0x25a] * 0.033333335);
    param_1[0x463] = (int)((float)param_1[0x25b] * 0.033333335);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x251] = 0;
    param_1[0x48b] = 0;
    param_1[0x24e] = 0x40a00000;
    param_1[0x24f] = 0x41200000;
    goto LAB_004d5d5b;
  case 1:
LAB_004d5d5b:
    FUN_004b58d0();
    (**(code **)(*param_1 + 0x220))(0x40a00000);
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    if (0.0 < (float)param_1[0x24e]) {
      fVar1 = (float)param_1[0x24e] - (float)param_1[0x244];
      param_1[0x24e] = (int)fVar1;
      if (fVar1 < 0.0 != (fVar1 == 0.0)) {
        FUN_004b5cc0();
        param_1[0x24e] = -0x40800000;
      }
    }
    iVar3 = FUN_00a8c760(8);
    if (iVar3 != 0) {
      param_1[0x251] = param_1[0x251] + 1;
    }
    if (param_1[0x251] != 0) {
      FUN_004bab40();
    }
    FUN_00c27f40(1,0xbf800000);
    iVar3 = FUN_00a8c760(10);
    if ((iVar3 != 0) &&
       ((((float)param_1[600] != 0.0 || ((float)param_1[0x259] != 0.0)) ||
        ((float)param_1[0x25a] != 0.0)))) {
      fVar1 = (float)param_1[0x244];
      param_1[0x14] = (int)((float)param_1[0x14] + (float)param_1[0x460] * fVar1);
      param_1[0x15] = (int)((float)param_1[0x461] * fVar1 + (float)param_1[0x15]);
      param_1[0x16] = (int)((float)param_1[0x16] + (float)param_1[0x462] * fVar1);
      param_1[0x17] = (int)((float)param_1[0x463] * fVar1 + (float)param_1[0x17]);
      param_1[600] = (int)((float)param_1[600] - (float)param_1[0x460] * fVar1);
      param_1[0x259] = (int)((float)param_1[0x259] - (float)param_1[0x461] * fVar1);
      param_1[0x25a] = (int)((float)param_1[0x25a] - (float)param_1[0x462] * fVar1);
      param_1[0x25b] = (int)((float)param_1[0x25b] - (float)param_1[0x463] * fVar1);
      if ((((ABS((float)param_1[600]) <= 0.001) &&
           (ABS((float)param_1[0x259]) < 0.001 != (ABS((float)param_1[0x259]) == 0.001))) &&
          (ABS((float)param_1[0x25a]) < 0.001 != (ABS((float)param_1[0x25a]) == 0.001))) ||
         (fVar1 = (float)param_1[0x462] * (float)param_1[0x25a] +
                  (float)param_1[600] * (float)param_1[0x460] +
                  (float)param_1[0x259] * (float)param_1[0x461], fVar1 < 0.0 != (fVar1 == 0.0))) {
        param_1[600] = 0;
        param_1[0x259] = 0;
        param_1[0x25a] = 0;
        param_1[0x25b] = 0;
      }
    }
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_004bab40();
      *(ushort *)((int)param_1 + 0xa2) = *(ushort *)((int)param_1 + 0xa2) & 0xefff;
      FUN_00aa4080(5,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_004be9b0(5,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x370] = param_1[0x370] | 2;
      param_1[0x370] = param_1[0x370] | 0x4000;
      param_1[0x24f] = 0x42f00000;
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    FUN_004b58d0();
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    fVar1 = (float)param_1[0x24f];
    param_1[0x24f] = (int)(fVar1 - (float)param_1[0x244]);
    if (0.0 < fVar1 - (float)param_1[0x244]) {
      return;
    }
    param_1[0x370] = param_1[0x370] & 0xffffffbf;
    param_1[0x370] = param_1[0x370] | 0x10;
    FUN_004be9b0(0xd4,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    iVar3 = FUN_004ba0a0();
    if (iVar3 != 0) {
      iVar9 = 0xe;
      uVar5 = 0;
      do {
        if (0x37 < uVar5) break;
        iVar2 = *(int *)((int)&DAT_0163f1f0 + uVar5);
        uVar5 = uVar5 + 4;
        if ((0xd < iVar2) || (*(int *)(iVar3 + (iVar2 * 9 + 0x372) * 4) == 0)) {
          FUN_004cb2c0(iVar2);
          iVar9 = iVar9 + -1;
        }
      } while (0 < iVar9);
      *(undefined4 *)(iVar3 + 0xfc8) = 0;
    }
    goto LAB_004d60db;
  case 3:
    FUN_004b58d0();
    (**(code **)(*param_1 + 0x220))(0x40a00000);
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    iVar3 = FUN_00a81330();
    if (iVar3 != 0) {
      FUN_00a7c8a0();
    }
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      *(ushort *)((int)param_1 + 0xa2) = *(ushort *)((int)param_1 + 0xa2) & 0xefff;
      FUN_00aa4080(0xa2,0,0x3e4ccccd,0x3f800000,0x8000080,0xbf800000,0x3f800000);
      FUN_004be9b0(0xa2,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x370] = param_1[0x370] | 0x4002;
      param_1[0x42c] = 0;
      param_1[0x370] = param_1[0x370] & 0xffffffef;
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 4:
    FUN_004b58d0();
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    iVar3 = FUN_00a952e0(0,0x42540000);
    if (iVar3 == 0) {
      return;
    }
    iVar3 = FUN_004ba180();
    if (iVar3 == 0) {
      param_1[0x187] = 6;
      return;
    }
    FUN_004bf8d0();
    piVar4 = (int *)FUN_004ba0c0();
    if (piVar4 != (int *)0x0) {
      uVar8 = 0x3f800000;
      uVar7 = 0;
      FUN_00a92f90(0,0x3f800000);
      fVar6 = (float10)FUN_00407b40(uVar7);
      FUN_004bed90(0xb,0,0,0x3f800000,0x8000000,
                   (float)(fVar6 - (float10)(float)param_1[0x244] * (float10)0.016666668),uVar8);
      (**(code **)(*piVar4 + 0x1c))();
      (**(code **)(*piVar4 + 100))();
    }
    iVar3 = FUN_004ba0a0();
    if (iVar3 != 0) {
      FUN_004bda70(7);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
LAB_004d60db:
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 5:
    FUN_004b58d0();
    iVar3 = FUN_00a8c760(10);
    if (iVar3 != 0) {
      FUN_004cbe70(0,param_1 + 0x3a4);
    }
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    iVar3 = FUN_00a94ce0(0);
    if ((iVar3 != 0) || (iVar3 = FUN_00a8c760(4), iVar3 != 0)) {
      param_1[0x370] = param_1[0x370] & 0xfffffffd;
      FUN_00aa4080(0x17,0,0x3e088889,0x3f800000,0x8038000,0xbf800000,0x3f800000);
      FUN_004be9b0(0x17,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_004bed90(4,0,0,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_004be8c0(0x3f800000,0x3f800000);
      FUN_004beaa0();
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 6:
    FUN_004be8c0(0x3f800000,0x3f800000);
    FUN_004beaa0();
    iVar3 = FUN_00a8c760(0x10);
    if (iVar3 == 0) {
      param_1[0x4a9] = 0;
    }
    iVar3 = FUN_00a952e0(0,0x42b00000);
    if (((iVar3 != 0) && (param_1[0x1d9] != 0)) && (*(int *)(param_1[0x1d9] + 0x10c) == 0)) {
      (**(code **)(*param_1 + 0x314))();
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
      FUN_008e0ae0(1);
    }
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      (**(code **)(*param_1 + 0x314))();
      if (*(int *)(param_1[0x1d9] + 0x104) != 0) {
        *(undefined4 *)(param_1[0x1d9] + 0x104) = 0;
      }
      if (param_1[0x1d9] != 0) {
        FUN_008e0ae0(1);
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x34c);
      param_1[0x48a] = 1;
                    /* WARNING: Could not recover jumptable at 0x004d64b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}

// 004DAE90  Em0110::vf4C  size=156  [class]
void __fastcall Em0110::vf4C(int param_1)

{
  int iVar1;
  
  BehaviorEmBase::vf4C();
  if ((*(byte *)(param_1 + 0xdc0) & 4) != 0) {
    if (*(int *)(param_1 + 0x1078) == 0x119) {
      FUN_00a8caf0(0xe0000,0,0,0);
    }
    *(uint *)(param_1 + 0xdc0) = *(uint *)(param_1 + 0xdc0) & 0xfffffffb;
  }
  iVar1 = FUN_00ac4770();
  if (iVar1 == 0) {
    FUN_004d9ef0();
  }
  FUN_004dab10();
  iVar1 = FUN_00a94ce0(1);
  if (iVar1 != 0) {
    FUN_00a94bc0(1,0);
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        FUN_00a94bc0(1,0);
      }
    }
  }
  FUN_004ba410();
  return;
}

// 00AAD8F0  Em0110::Em0110  size=344  [class]
undefined4 * __fastcall Em0110::Em0110(undefined4 *param_1)

{
  int iVar1;
  
  BehaviorAppBase::BehaviorAppBase_34();
  *param_1 = vftable;
  param_1[0x370] = 0;
  param_1[0x374] = 0x43340000;
  param_1[0x375] = 0x44160000;
  param_1[0x371] = 0;
  param_1[0x376] = 0x43b40000;
  param_1[0x372] = 0;
  param_1[0x373] = 0;
  FUN_00a7c930();
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  FUN_00a7c930();
  FUN_00a7c930();
  FUN_00a7c930();
  FUN_00a7c930();
  iVar1 = 1;
  do {
    FUN_00a7c930();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  FUN_00a7c930();
  FUN_00a7c930();
  FUN_00a7c930();
  FUN_00a7c930();
  FUN_00a7c930();
  FUN_00a7c930();
  FUN_00a7c930();
  FUN_00a7c930();
  param_1[0x448] = 0;
  param_1[0x449] = 0;
  param_1[0x44a] = 0;
  param_1[1099] = 0;
  param_1[0x44c] = 0;
  param_1[0x44d] = 0;
  FUN_00904d60();
  FUN_00904d60();
  return param_1;
}

// 00AADA50  Em0110::vf04  size=6  [class]
undefined * Em0110::vf04(void)

{
  return &DAT_01b34e80;
}

// 00AADA60  Em0110::vf2F8  size=1  [class]
void Em0110::vf2F8(void)

{
  return;
}

// 00AADA70  Em0110::vf17C  size=6  [class]
undefined4 Em0110::vf17C(void)

{
  return 1;
}

// 00AB71D0  Em0110::vf00  size=87  [class]
undefined4 __thiscall Em0110::vf00(undefined4 param_1,byte param_2)

{
  FUN_00905ce0();
  FUN_00905ce0();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  cEnemyCautionStateManager::cEnemyCautionStateManager_3();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

