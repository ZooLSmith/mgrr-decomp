// src/collision/RayCastWork.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00905560..00909AC0, 23 functions

#include "types.h"

// 00905560  FUN_00905560  size=86  [callgraph]
void FUN_00905560(int param_1)

{
  int iVar1;
  
  if (DAT_01b35f90 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_01b35f78);
  }
  if ((((*(char *)(param_1 + 0x18) == '\x01') &&
       (iVar1 = *(char *)(param_1 + 0x10) + param_1, iVar1 != 0)) ||
      ((*(char *)(param_1 + 0x18) == '\x02' &&
       (iVar1 = *(char *)(param_1 + 0x10) + param_1, iVar1 != 0)))) && (*(short *)(iVar1 + 6) != 0))
  {
    FUN_010060a0();
  }
  if (DAT_01b35f90 != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_01b35f78);
  }
  return;
}

// 009055D0  RayCastWork::vf00  size=6  [class]
undefined * RayCastWork::vf00(void)

{
  return &DAT_01b35de0;
}

// 009055E0  RayCastWork::vf24  size=3  [class]
void RayCastWork::vf24(void)

{
  return;
}

// 009055F0  RayCastWork::vf28  size=3  [class]
void RayCastWork::vf28(void)

{
  return;
}

// 00905600  RayCastWork::vf2C  size=3  [class]
void RayCastWork::vf2C(void)

{
  return;
}

// 00905610  RayCastWork::vf30  size=3  [class]
void RayCastWork::vf30(void)

{
  return;
}

// 00905620  RayCastWork::vf34  size=3  [class]
void RayCastWork::vf34(void)

{
  return;
}

// 00905630  RayCastWork::vf38  size=3  [class]
void RayCastWork::vf38(void)

{
  return;
}

// 00905640  FUN_00905640  size=89  [callgraph]
void __thiscall FUN_00905640(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  (**(code **)(*param_1 + 0x14))();
  iVar1 = param_1[9];
  iVar2 = param_1[10];
  iVar3 = param_1[0xb];
  *param_2 = param_1[8];
  param_2[1] = iVar1;
  param_2[2] = iVar2;
  param_2[3] = iVar3;
  iVar1 = param_1[0xd];
  iVar2 = param_1[0xe];
  iVar3 = param_1[0xf];
  param_2[4] = param_1[0xc];
  param_2[5] = iVar1;
  param_2[6] = iVar2;
  param_2[7] = iVar3;
  *(char *)(param_2 + 8) = (char)param_1[0x10];
  iVar1 = param_1[0x11];
  param_2[0xc] = (int)(param_1 + 0x18);
  param_2[9] = iVar1;
  param_2[0xd] = 1;
  param_2[0xe] = 0;
  *(undefined2 *)(param_2 + 0xf) = 0;
  param_1[0x30] = param_1[8];
  param_1[0x31] = param_1[9];
  param_1[0x32] = param_1[10];
  param_1[0x33] = param_1[0xb];
  param_1[0x34] = param_1[0xc];
  param_1[0x35] = param_1[0xd];
  param_1[0x36] = param_1[0xe];
  param_1[0x37] = param_1[0xf];
  return;
}

// 009056A0  FUN_009056a0  size=114  [callgraph]
void __thiscall
FUN_009056a0(int param_1,undefined4 *param_2,undefined4 *param_3,uint param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *(undefined4 *)(param_1 + 0x20) = *param_2;
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  *(uint *)(param_1 + 0x44) = param_4 | 0x8000;
  *(undefined4 *)(param_1 + 0x50) = param_5;
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  *(undefined4 *)(param_1 + 0x38) = uVar3;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x54) = param_6;
  *(undefined4 *)(param_1 + 0x58) = param_7;
  *(undefined1 *)(param_1 + 0x40) = 0;
  return;
}

// 00905720  FUN_00905720  size=369  [callgraph]
void __thiscall
FUN_00905720(int *param_1,float *param_2,int *param_3,int *param_4,int *param_5,int *param_6,
            int *param_7,int *param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float fStack_24;
  
  if (param_8 != (int *)0x0) {
    *param_8 = 0;
  }
  iVar5 = (**(code **)(*param_1 + 0xc))();
  if (iVar5 == 0) {
    if (param_2 != (float *)0x0) {
      *param_2 = (float)param_1[0x34];
      param_2[1] = (float)param_1[0x35];
      param_2[2] = (float)param_1[0x36];
    }
    if (param_3 != (int *)0x0) {
      *param_3 = 0;
      param_3[1] = 0x3f800000;
      param_3[2] = 0;
    }
  }
  else {
    if (param_2 != (float *)0x0) {
      fStack_24 = (float)param_1[0x1c];
      if (fStack_24 == 0.0) {
        fStack_24 = 0.001;
      }
      fVar1 = (float)param_1[0x31];
      fVar2 = (float)param_1[0x32];
      fVar3 = (float)param_1[0x35];
      fVar4 = (float)param_1[0x36];
      *param_2 = ((float)param_1[0x34] - (float)param_1[0x30]) * fStack_24 + (float)param_1[0x30];
      param_2[1] = (fVar3 - fVar1) * fStack_24 + fVar1;
      param_2[2] = (fVar4 - fVar2) * fStack_24 + fVar2;
    }
    if (param_3 != (int *)0x0) {
      *param_3 = param_1[0x18];
      param_3[1] = param_1[0x19];
      param_3[2] = param_1[0x1a];
    }
    if (param_4 != (int *)0x0) {
      iVar5 = param_1[0x2c];
      if ((*(char *)(iVar5 + 0x18) == '\x01') &&
         (iVar5 = *(char *)(iVar5 + 0x10) + iVar5, iVar5 != 0)) {
        *param_4 = iVar5;
      }
      else {
        *param_4 = 0;
      }
    }
    if (param_5 != (int *)0x0) {
      iVar5 = param_1[0x2c];
      if ((*(char *)(iVar5 + 0x18) == '\x02') &&
         (iVar5 = *(char *)(iVar5 + 0x10) + iVar5, iVar5 != 0)) {
        *param_5 = iVar5;
      }
      else {
        *param_5 = 0;
      }
    }
    if (param_8 != (int *)0x0) {
      *param_8 = (int)(param_1 + 0x18);
    }
  }
  if (param_6 != (int *)0x0) {
    *param_6 = param_1[0x30];
    param_6[1] = param_1[0x31];
    param_6[2] = param_1[0x32];
  }
  if (param_7 != (int *)0x0) {
    *param_7 = param_1[0x34];
    param_7[1] = param_1[0x35];
    param_7[2] = param_1[0x36];
  }
  return;
}

// 009058A0  FUN_009058a0  size=35  [callgraph]
void __fastcall FUN_009058a0(int param_1)

{
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0xffffffff;
  return;
}

// 009058D0  FUN_009058d0  size=47  [callgraph]
void __fastcall FUN_009058d0(int *param_1)

{
  int iVar1;
  
  if ((char)param_1[5] == '\0') {
    iVar1 = (**(code **)(*param_1 + 0xc))();
    if (iVar1 != 0) {
      FUN_00905560(param_1[0x2c]);
    }
                    /* WARNING: Could not recover jumptable at 0x009058fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x1c))();
    return;
  }
  return;
}

// 00905900  FUN_00905900  size=114  [callgraph]
void __thiscall
FUN_00905900(int param_1,undefined4 *param_2,undefined4 *param_3,uint param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *(undefined4 *)(param_1 + 0x20) = *param_2;
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  *(uint *)(param_1 + 0x44) = param_4 | 0x8000;
  *(undefined4 *)(param_1 + 0x50) = param_5;
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  *(undefined4 *)(param_1 + 0x38) = uVar3;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x54) = param_6;
  *(undefined4 *)(param_1 + 0x58) = param_7;
  *(undefined1 *)(param_1 + 0x40) = 0;
  return;
}

// 00905980  FUN_00905980  size=84  [callgraph]
void __thiscall FUN_00905980(int param_1,int *param_2,undefined4 *param_3,undefined4 *param_4)

{
  if (param_2 != (int *)0x0) {
    *param_2 = param_1 + 0x60;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 0x380);
    param_3[1] = *(undefined4 *)(param_1 + 900);
    param_3[2] = *(undefined4 *)(param_1 + 0x388);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = *(undefined4 *)(param_1 + 0x390);
    param_4[1] = *(undefined4 *)(param_1 + 0x394);
    param_4[2] = *(undefined4 *)(param_1 + 0x398);
  }
  return;
}

// 00906660  RayCastWork::RayCastWork  size=57  [class]
void __fastcall RayCastWork::RayCastWork(int *param_1)

{
  int iVar1;
  
  *param_1 = (int)RayCastSingleHitWork::vftable;
  if ((char)param_1[5] == '\0') {
    iVar1 = FUN_009066c0();
    if (iVar1 != 0) {
      FUN_00905560(param_1[0x2c]);
    }
    (**(code **)(*param_1 + 0x1c))();
  }
  *param_1 = (int)vftable;
  return;
}

// 00906810  RayCastWork::get  size=101  [class]
void __thiscall
RayCastWork::get(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                undefined4 param_9)

{
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  if (*(int *)(param_1 + 4) != 1) {
    if (*(int *)(param_1 + 4) != 2) {
      FUN_00dd5650("RayCastWork::get");
      return;
    }
    FUN_00905980(param_6,param_7,param_8);
    return;
  }
  FUN_00905720(param_2,param_3,param_4,param_5,param_7,param_8,param_9);
  return;
}

// 009068B0  RayCastWork::vf04  size=31  [class]
undefined4 * __thiscall RayCastWork::vf04(undefined4 *param_1,byte param_2)

{
  *param_1 = vftable;
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

// 00908250  FUN_00908250  size=192  [callgraph]
undefined4 __thiscall FUN_00908250(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 4) = param_4;
  if (param_2 < 0) {
    *(undefined1 *)(param_1 + 0x14) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0x15) = 1;
  }
  if (*(short *)(param_1 + 10) != param_2) {
    *(short *)(param_1 + 10) = (short)param_2;
    *(undefined2 *)(param_1 + 0xc) = 0;
    *(undefined1 *)(param_1 + 0x19) = 1;
  }
  if ((*(char *)(param_1 + 0x1d) != '\0') || (*(char *)(param_1 + 0x1e) != '\0')) {
    *(undefined1 *)(param_1 + 0x1b) = 1;
  }
  if (-1 < param_2) {
    if (*(char *)(param_1 + 0x1c) != '\0') {
      FUN_00dd5650(&DAT_0164c3d0,param_3);
      return 0;
    }
    *(undefined1 *)(param_1 + 0x1c) = 1;
    iVar2 = FUN_00dd7ad0();
    if (*(int *)(&DAT_01b35e7c + iVar2 * 0x14) <= *(int *)(&DAT_01b35e80 + iVar2 * 0x14)) {
      FUN_00dd5650(&DAT_0164c398,&DAT_016416fa);
      return 1;
    }
    piVar1 = (int *)(*(int *)(&DAT_01b35e78 + iVar2 * 0x14) +
                    *(int *)(&DAT_01b35e80 + iVar2 * 0x14) * 4);
    if (piVar1 != (int *)0x0) {
      *piVar1 = param_1;
    }
    *(int *)(&DAT_01b35e80 + iVar2 * 0x14) = *(int *)(&DAT_01b35e80 + iVar2 * 0x14) + 1;
  }
  return 1;
}

// 00908310  RayCastWork::set  size=161  [class]
undefined4 __thiscall
RayCastWork::set(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  int iVar1;
  
  iVar1 = FUN_00908250(param_2,param_9,param_10,param_12);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 4) != 1) {
    if (*(int *)(param_1 + 4) != 2) {
      FUN_00dd5650("RayCastWork::set");
      return 1;
    }
    FUN_00905900(param_3,param_4,param_5,param_6,param_7,param_8);
    return 1;
  }
  FUN_009056a0(param_3,param_4,param_5,param_6,param_7,param_8);
  return 1;
}

// 009083C0  FUN_009083c0  size=2859  [callgraph]
undefined4 __thiscall
FUN_009083c0(int param_1,undefined4 param_2,float param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  LPVOID pvVar6;
  uint *puVar7;
  int unaff_EBX;
  
  iVar5 = FUN_00908250(param_2,param_7,param_8,0);
  if (iVar5 == 0) {
    return 0;
  }
  pvVar6 = TlsGetValue(DAT_01f8fc4c);
  iVar5 = (**(code **)(**(int **)((int)pvVar6 + 0x2c) + 4))(0x160);
  *(undefined2 *)(iVar5 + 4) = 0x160;
  iVar5 = hkpSimpleShapePhantom::~hkpSimpleShapePhantom(param_2,param_4,param_5);
  FUN_01006780("setClosestPoints");
  FUN_008f8ac0(iVar5);
  if (iVar5 != 0) {
    FUN_004066f0();
    puVar7 = *(uint **)(iVar5 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 1) == 0)) {
      *puVar7 = *puVar7 | 1;
      puVar7[2] = 0;
    }
    pvVar4 = ThreadLocalStoragePointer;
    iVar2 = _tls_index;
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    FUN_004066f0();
    puVar7 = *(uint **)(iVar5 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 2) == 0)) {
      *puVar7 = *puVar7 | 2;
      puVar7[3] = 0;
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)pvVar4 + iVar2 * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    FUN_004066f0();
    puVar7 = *(uint **)(iVar5 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 4) == 0)) {
      *puVar7 = *puVar7 | 4;
      puVar7[4] = 0;
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)pvVar4 + iVar2 * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    FUN_004066f0();
    puVar7 = *(uint **)(iVar5 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 8) == 0)) {
      *puVar7 = *puVar7 | 8;
      puVar7[5] = 0;
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)pvVar4 + iVar2 * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    FUN_004066f0();
    puVar7 = *(uint **)(iVar5 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 0x10) == 0)) {
      *puVar7 = *puVar7 | 0x10;
      puVar7[6] = 0;
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)pvVar4 + iVar2 * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    FUN_004066f0();
    puVar7 = *(uint **)(iVar5 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 0x20) == 0)) {
      *puVar7 = *puVar7 | 0x20;
      puVar7[7] = 0;
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)pvVar4 + iVar2 * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    FUN_004066f0();
    puVar7 = *(uint **)(iVar5 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 0x40) == 0)) {
      *puVar7 = *puVar7 | 0x40;
      puVar7[8] = 0;
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)pvVar4 + iVar2 * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    FUN_004066f0();
    puVar7 = *(uint **)(iVar5 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 0x200) == 0)) {
      *puVar7 = *puVar7 | 0x200;
      puVar7[0xb] = 0;
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)pvVar4 + iVar2 * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    FUN_004066f0();
    puVar7 = *(uint **)(iVar5 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 0x400) == 0)) {
      *puVar7 = *puVar7 | 0x400;
      puVar7[0xc] = 0;
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)pvVar4 + iVar2 * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    FUN_004066f0();
    puVar7 = *(uint **)(iVar5 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 0x8000) == 0)) {
      *puVar7 = *puVar7 | 0x8000;
      puVar7[0x11] = 0xffffffff;
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)pvVar4 + iVar2 * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    FUN_004066f0();
    puVar7 = *(uint **)(iVar5 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 0x800) == 0)) {
      *puVar7 = *puVar7 | 0x800;
      puVar7[0xd] = 0;
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)pvVar4 + iVar2 * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    FUN_004066f0();
    puVar7 = *(uint **)(iVar5 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 0x1000) == 0)) {
      *puVar7 = *puVar7 | 0x1000;
      puVar7[0xe] = 0;
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)pvVar4 + iVar2 * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    FUN_004066f0();
    puVar7 = *(uint **)(iVar5 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 0x2000) == 0)) {
      *puVar7 = *puVar7 | 0x2000;
      puVar7[0xf] = 0;
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)pvVar4 + iVar2 * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    FUN_004066f0();
    puVar7 = *(uint **)(iVar5 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 0x4000) == 0)) {
      *puVar7 = *puVar7 | 0x4000;
      puVar7[0x10] = 0xffffffff;
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)pvVar4 + iVar2 * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    FUN_004066f0();
    puVar7 = *(uint **)(iVar5 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 0x20000) == 0)) {
      *puVar7 = *puVar7 | 0x20000;
      puVar7[0x13] = 0;
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)pvVar4 + iVar2 * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    FUN_004066f0();
    puVar7 = *(uint **)(iVar5 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 0x40000) == 0)) {
      *puVar7 = *puVar7 | 0x40000;
      puVar7[0x14] = 0;
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)pvVar4 + iVar2 * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    FUN_004066f0();
    puVar7 = *(uint **)(iVar5 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 0x80000) == 0)) {
      *puVar7 = *puVar7 | 0x80000;
      puVar7[0x15] = 0;
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)pvVar4 + iVar2 * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    FUN_004066f0();
    puVar7 = *(uint **)(iVar5 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 0x100000) == 0)) {
      *puVar7 = *puVar7 | 0x100000;
      puVar7[0x16] = 0;
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)pvVar4 + iVar2 * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    FUN_004066f0();
    puVar7 = *(uint **)(iVar5 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 0x800000) == 0)) {
      *puVar7 = *puVar7 | 0x800000;
      puVar7[0x19] = 0;
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)pvVar4 + iVar2 * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    FUN_004066f0();
    puVar7 = *(uint **)(iVar5 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 0x200000) == 0)) {
      *puVar7 = *puVar7 | 0x200000;
      puVar7[0x17] = 0;
    }
    FUN_00406760();
    FUN_004066f0();
    puVar7 = *(uint **)(iVar5 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 0x400000) == 0)) {
      *puVar7 = *puVar7 | 0x400000;
      puVar7[0x18] = 0;
    }
    FUN_00406760();
    FUN_004066f0();
    puVar7 = *(uint **)(iVar5 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 0x1000000) == 0)) {
      *puVar7 = *puVar7 | 0x1000000;
      puVar7[0x1a] = 0;
    }
    FUN_00406760();
    FUN_004066f0();
    puVar7 = *(uint **)(iVar5 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 0x2000000) == 0)) {
      *puVar7 = *puVar7 | 0x2000000;
      puVar7[0x1b] = 0;
    }
    FUN_00406760();
    FUN_004066f0();
    puVar7 = *(uint **)(iVar5 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 0x4000000) == 0)) {
      *puVar7 = *puVar7 | 0x4000000;
      puVar7[0x1c] = 0;
    }
    FUN_00406760();
    FUN_004066f0();
    puVar7 = *(uint **)(iVar5 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 0x8000000) == 0)) {
      *puVar7 = *puVar7 | 0x8000000;
      puVar7[0x1d] = 0;
    }
    FUN_00406760();
    FUN_004066f0();
    puVar7 = *(uint **)(iVar5 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 0x10000000) == 0)) {
      *puVar7 = *puVar7 | 0x10000000;
      puVar7[0x1e] = 0;
    }
    FUN_00406760();
    FUN_004066f0();
    puVar7 = *(uint **)(iVar5 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 0x20000000) == 0)) {
      *puVar7 = *puVar7 | 0x20000000;
      puVar7[0x1f] = 0;
    }
    FUN_00406760();
    FUN_004066f0();
    puVar7 = *(uint **)(iVar5 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 0x40000000) == 0)) {
      *puVar7 = *puVar7 | 0x40000000;
      puVar7[0x20] = 0;
    }
    FUN_00406760();
    FUN_004066f0();
    iVar2 = *(int *)(iVar5 + 0xc);
    if ((iVar2 != 0) && ((*(uint *)(iVar2 + 4) & 1) == 0)) {
      *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 1;
      *(undefined4 *)(iVar2 + 0x88) = 0;
    }
    FUN_00406760();
    FUN_004066f0();
    iVar2 = *(int *)(iVar5 + 0xc);
    if ((iVar2 != 0) && ((*(uint *)(iVar2 + 4) >> 1 & 1) == 0)) {
      *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 2;
      *(undefined4 *)(iVar2 + 0x8c) = 0;
    }
    FUN_00406760();
    FUN_004066f0();
    iVar2 = *(int *)(iVar5 + 0xc);
    if ((iVar2 != 0) && ((*(uint *)(iVar2 + 4) >> 2 & 1) == 0)) {
      *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 4;
      *(undefined4 *)(iVar2 + 0x90) = 0;
    }
    FUN_00406760();
    FUN_004066f0();
    iVar2 = *(int *)(iVar5 + 0xc);
    if ((iVar2 != 0) && ((*(uint *)(iVar2 + 4) >> 3 & 1) == 0)) {
      *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 8;
      *(undefined4 *)(iVar2 + 0x94) = 0;
    }
    FUN_00406760();
    FUN_004066f0();
    iVar2 = *(int *)(iVar5 + 0xc);
    if ((iVar2 != 0) && ((*(uint *)(iVar2 + 4) >> 6 & 1) == 0)) {
      *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 0x40;
      *(undefined4 *)(iVar2 + 0xa0) = 0;
    }
    FUN_00406760();
    FUN_004066f0();
    iVar2 = *(int *)(iVar5 + 0xc);
    if ((iVar2 != 0) && ((*(uint *)(iVar2 + 4) >> 7 & 1) == 0)) {
      *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 0x80;
      *(undefined4 *)(iVar2 + 0xa4) = 0;
    }
    FUN_00406760();
    FUN_004066f0();
    iVar2 = *(int *)(iVar5 + 0xc);
    if ((iVar2 != 0) && ((*(uint *)(iVar2 + 4) >> 4 & 1) == 0)) {
      *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 0x10;
      *(undefined4 *)(iVar2 + 0x98) = 0;
    }
    FUN_00406760();
    FUN_004066f0();
    puVar7 = *(uint **)(iVar5 + 0xc);
    if ((puVar7 != (uint *)0x0) && (-1 < (int)*puVar7)) {
      *puVar7 = *puVar7 | 0x80000000;
      puVar7[0x21] = 0;
    }
    FUN_00406760();
    FUN_004066f0();
    iVar2 = *(int *)(iVar5 + 0xc);
    if ((iVar2 != 0) && ((*(uint *)(iVar2 + 4) >> 5 & 1) == 0)) {
      *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 0x20;
      *(undefined4 *)(iVar2 + 0x9c) = 0;
    }
    FUN_00406760();
    FUN_004066f0();
    iVar2 = *(int *)(iVar5 + 0xc);
    if ((iVar2 != 0) && ((*(uint *)(iVar2 + 4) >> 8 & 1) == 0)) {
      *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 0x100;
      *(undefined4 *)(iVar2 + 0xa8) = 0;
    }
    FUN_00406760();
    FUN_004066f0();
    puVar7 = (uint *)(-(uint)(*(uint *)(iVar5 + 0xc) != 0) & *(uint *)(iVar5 + 0xc));
    *puVar7 = *puVar7 | 0x20;
    puVar7[7] = 1;
    FUN_00406760();
    param_1 = unaff_EBX;
  }
  FUN_004066f0();
  if ((iVar5 != 0) && (uVar3 = *(uint *)(iVar5 + 0xc), uVar3 != 0)) {
    puVar7 = (uint *)(-(uint)(uVar3 != 0) & uVar3);
    *puVar7 = *puVar7 | 1;
    puVar7[2] = puVar7[2] | 0x10;
  }
  FUN_00406760();
  FUN_010060a0();
  if (iVar5 == 0) {
    return 0;
  }
  if (param_3 == 0.0) {
    *(undefined1 *)(param_1 + 0x1f) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x1f) = 1;
  }
  FUN_00904cf0(iVar5,param_3);
  return 1;
}

// 00908EF0  FUN_00908ef0  size=2994  [callgraph]
undefined4
FUN_00908ef0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            uint param_5,uint param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  LPVOID pvVar5;
  uint *puVar6;
  uint uVar7;
  
  iVar4 = FUN_00908250(param_1,param_9,param_10,0);
  if (iVar4 == 0) {
    return 0;
  }
  pvVar5 = TlsGetValue(DAT_01f8fc4c);
  iVar4 = (**(code **)(**(int **)((int)pvVar5 + 0x2c) + 4))(0x160);
  *(undefined2 *)(iVar4 + 4) = 0x160;
  iVar4 = hkpSimpleShapePhantom::~hkpSimpleShapePhantom(param_1,param_2,param_4);
  FUN_01006780("setLinearCast");
  FUN_008f8ac0(iVar4);
  if (iVar4 != 0) {
    FUN_004066f0();
    puVar6 = *(uint **)(iVar4 + 0xc);
    if ((puVar6 != (uint *)0x0) && ((*puVar6 & 1) == 0)) {
      *puVar6 = *puVar6 | 1;
      puVar6[2] = 0;
    }
    pvVar3 = ThreadLocalStoragePointer;
    iVar2 = _tls_index;
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    FUN_004066f0();
    puVar6 = *(uint **)(iVar4 + 0xc);
    if ((puVar6 != (uint *)0x0) && ((*puVar6 & 2) == 0)) {
      *puVar6 = *puVar6 | 2;
      puVar6[3] = 0;
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)pvVar3 + iVar2 * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    FUN_004066f0();
    puVar6 = *(uint **)(iVar4 + 0xc);
    if ((puVar6 != (uint *)0x0) && ((*puVar6 & 4) == 0)) {
      *puVar6 = *puVar6 | 4;
      puVar6[4] = 0;
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)pvVar3 + iVar2 * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    FUN_004066f0();
    puVar6 = *(uint **)(iVar4 + 0xc);
    if ((puVar6 != (uint *)0x0) && ((*puVar6 & 8) == 0)) {
      *puVar6 = *puVar6 | 8;
      puVar6[5] = 0;
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)pvVar3 + iVar2 * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    FUN_004066f0();
    puVar6 = *(uint **)(iVar4 + 0xc);
    if ((puVar6 != (uint *)0x0) && ((*puVar6 & 0x10) == 0)) {
      *puVar6 = *puVar6 | 0x10;
      puVar6[6] = 0;
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)pvVar3 + iVar2 * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    FUN_004066f0();
    puVar6 = *(uint **)(iVar4 + 0xc);
    if ((puVar6 != (uint *)0x0) && ((*puVar6 & 0x20) == 0)) {
      *puVar6 = *puVar6 | 0x20;
      puVar6[7] = 0;
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)pvVar3 + iVar2 * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    FUN_004066f0();
    puVar6 = *(uint **)(iVar4 + 0xc);
    if ((puVar6 != (uint *)0x0) && ((*puVar6 & 0x40) == 0)) {
      *puVar6 = *puVar6 | 0x40;
      puVar6[8] = 0;
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)pvVar3 + iVar2 * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    FUN_004066f0();
    puVar6 = *(uint **)(iVar4 + 0xc);
    if ((puVar6 != (uint *)0x0) && ((*puVar6 & 0x200) == 0)) {
      *puVar6 = *puVar6 | 0x200;
      puVar6[0xb] = 0;
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)pvVar3 + iVar2 * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    FUN_004066f0();
    puVar6 = *(uint **)(iVar4 + 0xc);
    if ((puVar6 != (uint *)0x0) && ((*puVar6 & 0x400) == 0)) {
      *puVar6 = *puVar6 | 0x400;
      puVar6[0xc] = 0;
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)pvVar3 + iVar2 * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    FUN_004066f0();
    puVar6 = *(uint **)(iVar4 + 0xc);
    if ((puVar6 != (uint *)0x0) && ((*puVar6 & 0x8000) == 0)) {
      *puVar6 = *puVar6 | 0x8000;
      puVar6[0x11] = 0xffffffff;
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)pvVar3 + iVar2 * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    FUN_004066f0();
    puVar6 = *(uint **)(iVar4 + 0xc);
    if ((puVar6 != (uint *)0x0) && ((*puVar6 & 0x800) == 0)) {
      *puVar6 = *puVar6 | 0x800;
      puVar6[0xd] = 0;
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)pvVar3 + iVar2 * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    FUN_004066f0();
    puVar6 = *(uint **)(iVar4 + 0xc);
    if ((puVar6 != (uint *)0x0) && ((*puVar6 & 0x1000) == 0)) {
      *puVar6 = *puVar6 | 0x1000;
      puVar6[0xe] = 0;
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)pvVar3 + iVar2 * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    FUN_004066f0();
    puVar6 = *(uint **)(iVar4 + 0xc);
    if ((puVar6 != (uint *)0x0) && ((*puVar6 & 0x2000) == 0)) {
      *puVar6 = *puVar6 | 0x2000;
      puVar6[0xf] = 0;
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)pvVar3 + iVar2 * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    FUN_004066f0();
    puVar6 = *(uint **)(iVar4 + 0xc);
    if ((puVar6 != (uint *)0x0) && ((*puVar6 & 0x4000) == 0)) {
      *puVar6 = *puVar6 | 0x4000;
      puVar6[0x10] = 0xffffffff;
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)pvVar3 + iVar2 * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    FUN_004066f0();
    puVar6 = *(uint **)(iVar4 + 0xc);
    if ((puVar6 != (uint *)0x0) && ((*puVar6 & 0x20000) == 0)) {
      *puVar6 = *puVar6 | 0x20000;
      puVar6[0x13] = 0;
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)pvVar3 + iVar2 * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    FUN_004066f0();
    puVar6 = *(uint **)(iVar4 + 0xc);
    if ((puVar6 != (uint *)0x0) && ((*puVar6 & 0x40000) == 0)) {
      *puVar6 = *puVar6 | 0x40000;
      puVar6[0x14] = 0;
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)pvVar3 + iVar2 * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    FUN_004066f0();
    puVar6 = *(uint **)(iVar4 + 0xc);
    if ((puVar6 != (uint *)0x0) && ((*puVar6 & 0x80000) == 0)) {
      *puVar6 = *puVar6 | 0x80000;
      puVar6[0x15] = 0;
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)pvVar3 + iVar2 * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    FUN_004066f0();
    puVar6 = *(uint **)(iVar4 + 0xc);
    if ((puVar6 != (uint *)0x0) && ((*puVar6 & 0x100000) == 0)) {
      *puVar6 = *puVar6 | 0x100000;
      puVar6[0x16] = 0;
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)pvVar3 + iVar2 * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    FUN_004066f0();
    puVar6 = *(uint **)(iVar4 + 0xc);
    if ((puVar6 != (uint *)0x0) && ((*puVar6 & 0x800000) == 0)) {
      *puVar6 = *puVar6 | 0x800000;
      puVar6[0x19] = 0;
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)pvVar3 + iVar2 * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    FUN_004066f0();
    puVar6 = *(uint **)(iVar4 + 0xc);
    if ((puVar6 != (uint *)0x0) && ((*puVar6 & 0x200000) == 0)) {
      *puVar6 = *puVar6 | 0x200000;
      puVar6[0x17] = 0;
    }
    FUN_00406760();
    FUN_004066f0();
    puVar6 = *(uint **)(iVar4 + 0xc);
    if ((puVar6 != (uint *)0x0) && ((*puVar6 & 0x400000) == 0)) {
      *puVar6 = *puVar6 | 0x400000;
      puVar6[0x18] = 0;
    }
    FUN_00406760();
    FUN_004066f0();
    puVar6 = *(uint **)(iVar4 + 0xc);
    if ((puVar6 != (uint *)0x0) && ((*puVar6 & 0x1000000) == 0)) {
      *puVar6 = *puVar6 | 0x1000000;
      puVar6[0x1a] = 0;
    }
    FUN_00406760();
    FUN_004066f0();
    puVar6 = *(uint **)(iVar4 + 0xc);
    if ((puVar6 != (uint *)0x0) && ((*puVar6 & 0x2000000) == 0)) {
      *puVar6 = *puVar6 | 0x2000000;
      puVar6[0x1b] = 0;
    }
    FUN_00406760();
    FUN_004066f0();
    puVar6 = *(uint **)(iVar4 + 0xc);
    if ((puVar6 != (uint *)0x0) && ((*puVar6 & 0x4000000) == 0)) {
      *puVar6 = *puVar6 | 0x4000000;
      puVar6[0x1c] = 0;
    }
    FUN_00406760();
    FUN_004066f0();
    puVar6 = *(uint **)(iVar4 + 0xc);
    if ((puVar6 != (uint *)0x0) && ((*puVar6 & 0x8000000) == 0)) {
      *puVar6 = *puVar6 | 0x8000000;
      puVar6[0x1d] = 0;
    }
    FUN_00406760();
    FUN_004066f0();
    puVar6 = *(uint **)(iVar4 + 0xc);
    if ((puVar6 != (uint *)0x0) && ((*puVar6 & 0x10000000) == 0)) {
      *puVar6 = *puVar6 | 0x10000000;
      puVar6[0x1e] = 0;
    }
    FUN_00406760();
    FUN_004066f0();
    puVar6 = *(uint **)(iVar4 + 0xc);
    if ((puVar6 != (uint *)0x0) && ((*puVar6 & 0x20000000) == 0)) {
      *puVar6 = *puVar6 | 0x20000000;
      puVar6[0x1f] = 0;
    }
    FUN_00406760();
    FUN_004066f0();
    puVar6 = *(uint **)(iVar4 + 0xc);
    if ((puVar6 != (uint *)0x0) && ((*puVar6 & 0x40000000) == 0)) {
      *puVar6 = *puVar6 | 0x40000000;
      puVar6[0x20] = 0;
    }
    FUN_00406760();
    FUN_004066f0();
    iVar2 = *(int *)(iVar4 + 0xc);
    if ((iVar2 != 0) && ((*(uint *)(iVar2 + 4) & 1) == 0)) {
      *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 1;
      *(undefined4 *)(iVar2 + 0x88) = 0;
    }
    FUN_00406760();
    FUN_004066f0();
    iVar2 = *(int *)(iVar4 + 0xc);
    if ((iVar2 != 0) && ((*(uint *)(iVar2 + 4) >> 1 & 1) == 0)) {
      *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 2;
      *(undefined4 *)(iVar2 + 0x8c) = 0;
    }
    FUN_00406760();
    FUN_004066f0();
    iVar2 = *(int *)(iVar4 + 0xc);
    if ((iVar2 != 0) && ((*(uint *)(iVar2 + 4) >> 2 & 1) == 0)) {
      *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 4;
      *(undefined4 *)(iVar2 + 0x90) = 0;
    }
    FUN_00406760();
    FUN_004066f0();
    iVar2 = *(int *)(iVar4 + 0xc);
    if ((iVar2 != 0) && ((*(uint *)(iVar2 + 4) >> 3 & 1) == 0)) {
      *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 8;
      *(undefined4 *)(iVar2 + 0x94) = 0;
    }
    FUN_00406760();
    FUN_004066f0();
    iVar2 = *(int *)(iVar4 + 0xc);
    if ((iVar2 != 0) && ((*(uint *)(iVar2 + 4) >> 6 & 1) == 0)) {
      *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 0x40;
      *(undefined4 *)(iVar2 + 0xa0) = 0;
    }
    FUN_00406760();
    FUN_004066f0();
    iVar2 = *(int *)(iVar4 + 0xc);
    if ((iVar2 != 0) && ((*(uint *)(iVar2 + 4) >> 7 & 1) == 0)) {
      *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 0x80;
      *(undefined4 *)(iVar2 + 0xa4) = 0;
    }
    FUN_00406760();
    FUN_004066f0();
    iVar2 = *(int *)(iVar4 + 0xc);
    if ((iVar2 != 0) && ((*(uint *)(iVar2 + 4) >> 4 & 1) == 0)) {
      *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 0x10;
      *(undefined4 *)(iVar2 + 0x98) = 0;
    }
    FUN_00406760();
    FUN_004066f0();
    puVar6 = *(uint **)(iVar4 + 0xc);
    if ((puVar6 != (uint *)0x0) && (-1 < (int)*puVar6)) {
      *puVar6 = *puVar6 | 0x80000000;
      puVar6[0x21] = 0;
    }
    FUN_00406760();
    FUN_004066f0();
    iVar2 = *(int *)(iVar4 + 0xc);
    if ((iVar2 != 0) && ((*(uint *)(iVar2 + 4) >> 5 & 1) == 0)) {
      *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 0x20;
      *(undefined4 *)(iVar2 + 0x9c) = 0;
    }
    FUN_00406760();
    FUN_004066f0();
    iVar2 = *(int *)(iVar4 + 0xc);
    if ((iVar2 != 0) && ((*(uint *)(iVar2 + 4) >> 8 & 1) == 0)) {
      *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 0x100;
      *(undefined4 *)(iVar2 + 0xa8) = 0;
    }
    FUN_00406760();
    FUN_004066f0();
    puVar6 = (uint *)(-(uint)(*(uint *)(iVar4 + 0xc) != 0) & *(uint *)(iVar4 + 0xc));
    *puVar6 = *puVar6 | 0x20;
    puVar6[7] = 1;
    FUN_00406760();
  }
  FUN_004066f0();
  if ((iVar4 != 0) && (uVar7 = *(uint *)(iVar4 + 0xc), uVar7 != 0)) {
    puVar6 = (uint *)(-(uint)(uVar7 != 0) & uVar7);
    *puVar6 = *puVar6 | 1;
    puVar6[2] = puVar6[2] | 0x10;
  }
  FUN_00406760();
  FUN_004066f0();
  if ((iVar4 != 0) && (uVar7 = *(uint *)(iVar4 + 0xc), uVar7 != 0)) {
    puVar6 = (uint *)(-(uint)(uVar7 != 0) & uVar7);
    *puVar6 = *puVar6 | 2;
    puVar6[3] = puVar6[3] | param_6;
  }
  FUN_00406760();
  if (param_5 != 0) {
    FUN_004066f0();
    if ((iVar4 != 0) && (uVar7 = *(uint *)(iVar4 + 0xc), uVar7 != 0)) {
      puVar6 = (uint *)(-(uint)(uVar7 != 0) & uVar7);
      *puVar6 = *puVar6 | 1;
      puVar6[2] = puVar6[2] | 0x40;
    }
    FUN_00406760();
    if (iVar4 != 0) {
      FUN_004066f0();
      puVar6 = (uint *)(-(uint)(*(uint *)(iVar4 + 0xc) != 0) & *(uint *)(iVar4 + 0xc));
      *puVar6 = *puVar6 | 4;
      puVar6[4] = param_5;
      FUN_00406760();
    }
  }
  FUN_010060a0();
  if (iVar4 == 0) {
    return 0;
  }
  if (param_6 != 0) {
    FUN_004066f0();
    uVar7 = -(uint)(*(uint *)(iVar4 + 0xc) != 0) & *(uint *)(iVar4 + 0xc);
    puVar6 = (uint *)(uVar7 + 4);
    *puVar6 = *puVar6 | 0x100;
    *(uint *)(uVar7 + 0xa8) = param_6;
    FUN_00406760();
  }
  FUN_00904d20(iVar4,param_3);
  return 1;
}

// 00909AC0  FUN_00909ac0  size=2829  [callgraph]
undefined4
FUN_00909ac0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  LPVOID pvVar6;
  uint *puVar7;
  
  iVar5 = FUN_00908250(param_1,param_6,param_7,0);
  if (iVar5 == 0) {
    return 0;
  }
  pvVar6 = TlsGetValue(DAT_01f8fc4c);
  iVar5 = (**(code **)(**(int **)((int)pvVar6 + 0x2c) + 4))(0x160);
  *(undefined2 *)(iVar5 + 4) = 0x160;
  iVar5 = hkpSimpleShapePhantom::~hkpSimpleShapePhantom(param_1,param_3,param_4);
  FUN_01006780("setPenetration");
  FUN_008f8ac0(iVar5);
  if (iVar5 != 0) {
    FUN_004066f0();
    puVar7 = *(uint **)(iVar5 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 1) == 0)) {
      *puVar7 = *puVar7 | 1;
      puVar7[2] = 0;
    }
    pvVar4 = ThreadLocalStoragePointer;
    iVar2 = _tls_index;
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    FUN_004066f0();
    puVar7 = *(uint **)(iVar5 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 2) == 0)) {
      *puVar7 = *puVar7 | 2;
      puVar7[3] = 0;
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)pvVar4 + iVar2 * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    FUN_004066f0();
    puVar7 = *(uint **)(iVar5 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 4) == 0)) {
      *puVar7 = *puVar7 | 4;
      puVar7[4] = 0;
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)pvVar4 + iVar2 * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    FUN_004066f0();
    puVar7 = *(uint **)(iVar5 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 8) == 0)) {
      *puVar7 = *puVar7 | 8;
      puVar7[5] = 0;
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)pvVar4 + iVar2 * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    FUN_004066f0();
    puVar7 = *(uint **)(iVar5 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 0x10) == 0)) {
      *puVar7 = *puVar7 | 0x10;
      puVar7[6] = 0;
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)pvVar4 + iVar2 * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    FUN_004066f0();
    puVar7 = *(uint **)(iVar5 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 0x20) == 0)) {
      *puVar7 = *puVar7 | 0x20;
      puVar7[7] = 0;
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)pvVar4 + iVar2 * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    FUN_004066f0();
    puVar7 = *(uint **)(iVar5 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 0x40) == 0)) {
      *puVar7 = *puVar7 | 0x40;
      puVar7[8] = 0;
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)pvVar4 + iVar2 * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    FUN_004066f0();
    puVar7 = *(uint **)(iVar5 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 0x200) == 0)) {
      *puVar7 = *puVar7 | 0x200;
      puVar7[0xb] = 0;
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)pvVar4 + iVar2 * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    FUN_004066f0();
    puVar7 = *(uint **)(iVar5 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 0x400) == 0)) {
      *puVar7 = *puVar7 | 0x400;
      puVar7[0xc] = 0;
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)pvVar4 + iVar2 * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    FUN_004066f0();
    puVar7 = *(uint **)(iVar5 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 0x8000) == 0)) {
      *puVar7 = *puVar7 | 0x8000;
      puVar7[0x11] = 0xffffffff;
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)pvVar4 + iVar2 * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    FUN_004066f0();
    puVar7 = *(uint **)(iVar5 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 0x800) == 0)) {
      *puVar7 = *puVar7 | 0x800;
      puVar7[0xd] = 0;
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)pvVar4 + iVar2 * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    FUN_004066f0();
    puVar7 = *(uint **)(iVar5 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 0x1000) == 0)) {
      *puVar7 = *puVar7 | 0x1000;
      puVar7[0xe] = 0;
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)pvVar4 + iVar2 * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    FUN_004066f0();
    puVar7 = *(uint **)(iVar5 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 0x2000) == 0)) {
      *puVar7 = *puVar7 | 0x2000;
      puVar7[0xf] = 0;
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)pvVar4 + iVar2 * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    FUN_004066f0();
    puVar7 = *(uint **)(iVar5 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 0x4000) == 0)) {
      *puVar7 = *puVar7 | 0x4000;
      puVar7[0x10] = 0xffffffff;
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)pvVar4 + iVar2 * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    FUN_004066f0();
    puVar7 = *(uint **)(iVar5 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 0x20000) == 0)) {
      *puVar7 = *puVar7 | 0x20000;
      puVar7[0x13] = 0;
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)pvVar4 + iVar2 * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    FUN_004066f0();
    puVar7 = *(uint **)(iVar5 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 0x40000) == 0)) {
      *puVar7 = *puVar7 | 0x40000;
      puVar7[0x14] = 0;
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)pvVar4 + iVar2 * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    FUN_004066f0();
    puVar7 = *(uint **)(iVar5 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 0x80000) == 0)) {
      *puVar7 = *puVar7 | 0x80000;
      puVar7[0x15] = 0;
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)pvVar4 + iVar2 * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    FUN_004066f0();
    puVar7 = *(uint **)(iVar5 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 0x100000) == 0)) {
      *puVar7 = *puVar7 | 0x100000;
      puVar7[0x16] = 0;
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)pvVar4 + iVar2 * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    FUN_004066f0();
    puVar7 = *(uint **)(iVar5 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 0x800000) == 0)) {
      *puVar7 = *puVar7 | 0x800000;
      puVar7[0x19] = 0;
    }
    if (DAT_01885d68 != 1) {
      piVar1 = (int *)(*(int *)((int)pvVar4 + iVar2 * 4) + 4);
      *piVar1 = *piVar1 + -1;
      if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
        FUN_00dd7320();
      }
    }
    FUN_004066f0();
    puVar7 = *(uint **)(iVar5 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 0x200000) == 0)) {
      *puVar7 = *puVar7 | 0x200000;
      puVar7[0x17] = 0;
    }
    FUN_00406760();
    FUN_004066f0();
    puVar7 = *(uint **)(iVar5 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 0x400000) == 0)) {
      *puVar7 = *puVar7 | 0x400000;
      puVar7[0x18] = 0;
    }
    FUN_00406760();
    FUN_004066f0();
    puVar7 = *(uint **)(iVar5 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 0x1000000) == 0)) {
      *puVar7 = *puVar7 | 0x1000000;
      puVar7[0x1a] = 0;
    }
    FUN_00406760();
    FUN_004066f0();
    puVar7 = *(uint **)(iVar5 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 0x2000000) == 0)) {
      *puVar7 = *puVar7 | 0x2000000;
      puVar7[0x1b] = 0;
    }
    FUN_00406760();
    FUN_004066f0();
    puVar7 = *(uint **)(iVar5 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 0x4000000) == 0)) {
      *puVar7 = *puVar7 | 0x4000000;
      puVar7[0x1c] = 0;
    }
    FUN_00406760();
    FUN_004066f0();
    puVar7 = *(uint **)(iVar5 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 0x8000000) == 0)) {
      *puVar7 = *puVar7 | 0x8000000;
      puVar7[0x1d] = 0;
    }
    FUN_00406760();
    FUN_004066f0();
    puVar7 = *(uint **)(iVar5 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 0x10000000) == 0)) {
      *puVar7 = *puVar7 | 0x10000000;
      puVar7[0x1e] = 0;
    }
    FUN_00406760();
    FUN_004066f0();
    puVar7 = *(uint **)(iVar5 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 0x20000000) == 0)) {
      *puVar7 = *puVar7 | 0x20000000;
      puVar7[0x1f] = 0;
    }
    FUN_00406760();
    FUN_004066f0();
    puVar7 = *(uint **)(iVar5 + 0xc);
    if ((puVar7 != (uint *)0x0) && ((*puVar7 & 0x40000000) == 0)) {
      *puVar7 = *puVar7 | 0x40000000;
      puVar7[0x20] = 0;
    }
    FUN_00406760();
    FUN_004066f0();
    iVar2 = *(int *)(iVar5 + 0xc);
    if ((iVar2 != 0) && ((*(uint *)(iVar2 + 4) & 1) == 0)) {
      *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 1;
      *(undefined4 *)(iVar2 + 0x88) = 0;
    }
    FUN_00406760();
    FUN_004066f0();
    iVar2 = *(int *)(iVar5 + 0xc);
    if ((iVar2 != 0) && ((*(uint *)(iVar2 + 4) >> 1 & 1) == 0)) {
      *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 2;
      *(undefined4 *)(iVar2 + 0x8c) = 0;
    }
    FUN_00406760();
    FUN_004066f0();
    iVar2 = *(int *)(iVar5 + 0xc);
    if ((iVar2 != 0) && ((*(uint *)(iVar2 + 4) >> 2 & 1) == 0)) {
      *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 4;
      *(undefined4 *)(iVar2 + 0x90) = 0;
    }
    FUN_00406760();
    FUN_004066f0();
    iVar2 = *(int *)(iVar5 + 0xc);
    if ((iVar2 != 0) && ((*(uint *)(iVar2 + 4) >> 3 & 1) == 0)) {
      *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 8;
      *(undefined4 *)(iVar2 + 0x94) = 0;
    }
    FUN_00406760();
    FUN_004066f0();
    iVar2 = *(int *)(iVar5 + 0xc);
    if ((iVar2 != 0) && ((*(uint *)(iVar2 + 4) >> 6 & 1) == 0)) {
      *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 0x40;
      *(undefined4 *)(iVar2 + 0xa0) = 0;
    }
    FUN_00406760();
    FUN_004066f0();
    iVar2 = *(int *)(iVar5 + 0xc);
    if ((iVar2 != 0) && ((*(uint *)(iVar2 + 4) >> 7 & 1) == 0)) {
      *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 0x80;
      *(undefined4 *)(iVar2 + 0xa4) = 0;
    }
    FUN_00406760();
    FUN_004066f0();
    iVar2 = *(int *)(iVar5 + 0xc);
    if ((iVar2 != 0) && ((*(uint *)(iVar2 + 4) >> 4 & 1) == 0)) {
      *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 0x10;
      *(undefined4 *)(iVar2 + 0x98) = 0;
    }
    FUN_00406760();
    FUN_004066f0();
    puVar7 = *(uint **)(iVar5 + 0xc);
    if ((puVar7 != (uint *)0x0) && (-1 < (int)*puVar7)) {
      *puVar7 = *puVar7 | 0x80000000;
      puVar7[0x21] = 0;
    }
    FUN_00406760();
    FUN_004066f0();
    iVar2 = *(int *)(iVar5 + 0xc);
    if ((iVar2 != 0) && ((*(uint *)(iVar2 + 4) >> 5 & 1) == 0)) {
      *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 0x20;
      *(undefined4 *)(iVar2 + 0x9c) = 0;
    }
    FUN_00406760();
    FUN_004066f0();
    iVar2 = *(int *)(iVar5 + 0xc);
    if ((iVar2 != 0) && ((*(uint *)(iVar2 + 4) >> 8 & 1) == 0)) {
      *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) | 0x100;
      *(undefined4 *)(iVar2 + 0xa8) = 0;
    }
    FUN_00406760();
    FUN_004066f0();
    puVar7 = (uint *)(-(uint)(*(uint *)(iVar5 + 0xc) != 0) & *(uint *)(iVar5 + 0xc));
    *puVar7 = *puVar7 | 0x20;
    puVar7[7] = 1;
    FUN_00406760();
  }
  FUN_004066f0();
  if ((iVar5 != 0) && (uVar3 = *(uint *)(iVar5 + 0xc), uVar3 != 0)) {
    puVar7 = (uint *)(-(uint)(uVar3 != 0) & uVar3);
    *puVar7 = *puVar7 | 1;
    puVar7[2] = puVar7[2] | 0x10;
  }
  FUN_00406760();
  FUN_010060a0();
  if (iVar5 == 0) {
    return 0;
  }
  FUN_00904c60(iVar5);
  return 1;
}

