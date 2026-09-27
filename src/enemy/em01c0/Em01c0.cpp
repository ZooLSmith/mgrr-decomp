// src/enemy/em01c0/Em01c0.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00542D50..005463E0, 41 functions

#include "mgrr.h"

// 00542D50  Em01c0::getAttackInfo  size=384  [class]
undefined4 __thiscall Em01c0::getAttackInfo(int param_1,ushort *param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 unaff_BP;
  undefined4 unaff_ESI;
  uint unaff_EDI;
  uint uVar6;
  
  iVar2 = FUN_00dd3500(0x110,&DAT_01b7c0b8);
  if ((iVar2 == 0) || (iVar2 = CollisionAttackData::CollisionAttackData_3(), iVar2 == 0)) {
    FUN_00dd5650(&DAT_01641194);
    return 0;
  }
  puVar1 = *(uint **)(iVar2 + 8);
  puVar1[5] = *(uint *)(param_1 + 0x4f0);
  uVar3 = FUN_00a7c7f0();
  FUN_00a7c960(uVar3);
  uVar6 = (uint)*param_2;
  uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 8))(uVar6);
  (**(code **)(**(int **)(param_1 + 0x754) + 0x10))(uVar6);
  (**(code **)(**(int **)(param_1 + 0x754) + 0x20))(uVar6);
  uVar5 = (**(code **)(**(int **)(param_1 + 0x754) + 0x18))(uVar6);
  puVar1[2] = uVar5;
  puVar1[1] = uVar4;
  puVar1[3] = unaff_EDI;
  *(undefined1 *)(puVar1 + 4) = unaff_BP;
  *puVar1 = uVar6;
  switch(uVar6) {
  case 4:
    *puVar1 = 0xe9;
    break;
  default:
    goto switchD_00542e19_caseD_5;
  case 6:
    *puVar1 = 0xea;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    *(undefined2 *)(puVar1 + 0x21) = 0x2203;
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    return unaff_ESI;
  case 8:
    *puVar1 = 0xeb;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    *(undefined2 *)(puVar1 + 0x21) = 0x2203;
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    return unaff_ESI;
  case 10:
    *puVar1 = 0xec;
  }
  puVar1[0x23] = puVar1[0x23] | 0x20000000;
  puVar1[0x24] = puVar1[0x24] | 0x2000000;
  *(undefined2 *)(puVar1 + 0x21) = 0x2203;
  *(undefined1 *)((int)puVar1 + 0x11) = 10;
switchD_00542e19_caseD_5:
  return unaff_ESI;
}

// 00542F00  Em01c0::createWindAtk  size=305  [class]
void __fastcall Em01c0::createWindAtk(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  
  iVar2 = FUN_00dd3500(0x110,&DAT_01b7c0b8);
  if (iVar2 != 0) {
    iVar2 = CollisionAttackData::CollisionAttackData_3();
    if (iVar2 != 0) {
      puVar3 = *(undefined4 **)(iVar2 + 8);
      *(undefined4 *)(iVar2 + 4) = 1;
      *(undefined1 *)(puVar3 + 4) = 1;
      puVar3[1] = 0;
      puVar3[3] = 0;
      puVar3[2] = 0x32;
      *puVar3 = 0xe8;
      puVar3[0x23] = puVar3[0x23] | 0x400000;
      *(undefined1 *)((int)puVar3 + 0x11) = 10;
      puVar3 = (undefined4 *)FUN_009f8b60();
      piVar4 = (int *)FUN_00602cb0(5,*puVar3,iVar2);
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 0x6c))(param_1 + 0x40);
        piVar1 = (int *)piVar4[0x21c];
        piVar4[0x21d] = 0x3f800000;
        puVar3 = (undefined4 *)FUN_009f8b60();
        (**(code **)(*piVar1 + 0x20))(0xb,*puVar3,0);
        piVar5 = (int *)FUN_00d773c0();
        (**(code **)(*piVar5 + 8))(piVar1);
        FUN_00d7b0f0();
        FUN_00d77c50(piVar4[0x13c],0xffffffff);
        piVar1[0x144] = 0x3dcccccd;
        FUN_00d77580(0x3f000000,0x40a80000,0x3f266666);
        piVar1[0xe0] = 0xe8;
        FUN_00d7b890();
        return;
      }
      return;
    }
  }
  FUN_00dd5650(&DAT_016411c4);
  return;
}

// 00543040  FUN_00543040  size=318  [callgraph]
void __fastcall FUN_00543040(int param_1)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  fVar1 = *(float *)(param_1 + 0xdf8);
  fVar5 = (float10)FUN_00ddba30(*(float *)(param_1 + 0xdf0) - fVar1);
  fVar6 = fVar5 * (float10)0.1;
  if (((float10)0.006981317 < ABS(fVar6)) &&
     (bVar2 = fVar6 <= (float10)0, fVar6 = (float10)0.006981317, bVar2)) {
    fVar6 = (float10)-0.006981317;
  }
  fVar6 = (float10)FUN_00ddba30((float)(fVar6 + (float10)fVar1));
  *(float *)(param_1 + 0xdf8) = (float)fVar6;
  fVar1 = *(float *)(param_1 + 0xdf4);
  fVar7 = (float10)FUN_00ddba30(*(float *)(param_1 + 0xdec) - fVar1);
  fVar6 = fVar7 * (float10)0.1;
  if (((float10)0.006981317 < ABS(fVar6)) &&
     (bVar2 = fVar6 <= (float10)0, fVar6 = (float10)0.006981317, bVar2)) {
    fVar6 = (float10)-0.006981317;
  }
  fVar6 = (float10)FUN_00ddba30((float)(fVar6 + (float10)fVar1));
  *(float *)(param_1 + 0xdf4) = (float)fVar6;
  if ((ABS((float)fVar5) < 0.05235988) && (ABS((float)fVar7) < 0.05235988)) {
    *(uint *)(param_1 + 0xdc0) = *(uint *)(param_1 + 0xdc0) | 4;
  }
  iVar3 = FUN_00a12210(0x43);
  iVar4 = FUN_00a12210(0x44);
  *(undefined4 *)(iVar3 + 0x94) = *(undefined4 *)(param_1 + 0xdf4);
  *(undefined4 *)(iVar4 + 0x90) = *(undefined4 *)(param_1 + 0xdf8);
  return;
}

// 00543180  FUN_00543180  size=318  [callgraph]
void __fastcall FUN_00543180(int param_1)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  fVar1 = *(float *)(param_1 + 0xe10);
  fVar5 = (float10)FUN_00ddba30(*(float *)(param_1 + 0xe08) - fVar1);
  fVar6 = fVar5 * (float10)0.1;
  if (((float10)0.027925268 < ABS(fVar6)) &&
     (bVar2 = fVar6 <= (float10)0, fVar6 = (float10)0.027925268, bVar2)) {
    fVar6 = (float10)-0.027925268;
  }
  fVar6 = (float10)FUN_00ddba30((float)(fVar6 + (float10)fVar1));
  *(float *)(param_1 + 0xe10) = (float)fVar6;
  fVar1 = *(float *)(param_1 + 0xe0c);
  fVar7 = (float10)FUN_00ddba30(*(float *)(param_1 + 0xe04) - fVar1);
  fVar6 = fVar7 * (float10)0.1;
  if (((float10)0.027925268 < ABS(fVar6)) &&
     (bVar2 = fVar6 <= (float10)0, fVar6 = (float10)0.027925268, bVar2)) {
    fVar6 = (float10)-0.027925268;
  }
  fVar6 = (float10)FUN_00ddba30((float)(fVar6 + (float10)fVar1));
  *(float *)(param_1 + 0xe0c) = (float)fVar6;
  if ((ABS((float)fVar5) < 0.05235988) && (ABS((float)fVar7) < 0.05235988)) {
    *(uint *)(param_1 + 0xdc0) = *(uint *)(param_1 + 0xdc0) | 0xc;
  }
  iVar3 = FUN_00a12210(0x40);
  iVar4 = FUN_00a12210(0x41);
  *(undefined4 *)(iVar3 + 0x94) = *(undefined4 *)(param_1 + 0xe0c);
  *(undefined4 *)(iVar4 + 0x90) = *(undefined4 *)(param_1 + 0xe10);
  return;
}

// 005432C0  FUN_005432c0  size=189  [callgraph]
void __fastcall FUN_005432c0(int param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_00a93530(4);
  if (iVar2 != 0) {
    bVar1 = false;
    if (((char)*(uint *)(param_1 + 0xdc0) < '\0') && ((*(uint *)(param_1 + 0xdc0) & 0x40) == 0)) {
      bVar1 = true;
    }
    if ((*(int *)(iVar2 + 0x35c) != 0) != bVar1) {
      if (bVar1) {
        FUN_00d7b890();
        FUN_00a8d280();
      }
      else {
        FUN_00d7acc0();
      }
    }
  }
  iVar2 = FUN_00a93530(6);
  if (iVar2 != 0) {
    bVar1 = false;
    if (((char)*(uint *)(param_1 + 0xdc0) < '\0') && ((*(uint *)(param_1 + 0xdc0) & 0x40) != 0)) {
      bVar1 = true;
    }
    if ((*(int *)(iVar2 + 0x35c) != 0) != bVar1) {
      if (!bVar1) {
        FUN_00d7acc0();
        *(uint *)(param_1 + 0xdc0) = *(uint *)(param_1 + 0xdc0) & 0xfffffc7f;
        return;
      }
      FUN_00d7b890();
      FUN_00a8d280();
    }
  }
  *(uint *)(param_1 + 0xdc0) = *(uint *)(param_1 + 0xdc0) & 0xfffffc7f;
  return;
}

// 00543420  FUN_00543420  size=142  [callgraph]
void __fastcall FUN_00543420(int param_1)

{
  float fVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0xa84) != 0) {
    iVar2 = FUN_00ac4640(1);
    if (iVar2 != 0) {
      iVar2 = FUN_00ac4670(*(int *)(param_1 + 0xa84) + 0x40,1);
      if (iVar2 == 0) goto LAB_00543469;
    }
    FUN_00a8caf0(1,0,0,0);
    *(uint *)(param_1 + 0xdc0) = *(uint *)(param_1 + 0xdc0) & 0xffffdfff;
    return;
  }
LAB_00543469:
  iVar2 = FUN_00ac4690();
  if ((iVar2 != 0) &&
     (fVar1 = *(float *)(param_1 + 0xdc8) - *(float *)(param_1 + 0x910),
     *(float *)(param_1 + 0xdc8) = fVar1, fVar1 < -30.0)) {
    FUN_00a8caf0(5,0,0,0);
    *(uint *)(param_1 + 0xdc0) = *(uint *)(param_1 + 0xdc0) & 0xffffdfff;
  }
  return;
}

// 005434B0  FUN_005434b0  size=49  [callgraph]
void __fastcall FUN_005434b0(int param_1)

{
  if (*(int *)(param_1 + 0x61c) == 0) {
    *(uint *)(param_1 + 0xdc0) = *(uint *)(param_1 + 0xdc0) | 0x2000;
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 005434F0  FUN_005434f0  size=260  [callgraph]
void __fastcall FUN_005434f0(int param_1)

{
  float fVar1;
  int iVar2;
  
  if (((*(int *)(param_1 + 0xa84) != 0) && (iVar2 = FUN_00ac4640(1), iVar2 != 0)) &&
     (iVar2 = FUN_00ac4670(*(int *)(param_1 + 0xa84) + 0x40,1), iVar2 == 0)) {
    fVar1 = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0xdc8);
    *(float *)(param_1 + 0xdc8) = fVar1;
    if (fVar1 <= 30.0) {
      return;
    }
    FUN_00a8caf0(5,0,0,0);
    return;
  }
  if ((30.0 < *(float *)(param_1 + 0xdcc)) && ((*(uint *)(param_1 + 0xdc0) & 0x800) == 0)) {
    FUN_00a8caf0(3,0,0,0);
    return;
  }
  if (225.0 < *(float *)(param_1 + 0xa90)) {
    if (0.0 < *(float *)(param_1 + 0x924)) {
      *(float *)(param_1 + 0x924) =
           *(float *)(param_1 + 0x924) - *(float *)(param_1 + 0x910) * 0.016666668;
    }
  }
  else {
    fVar1 = *(float *)(param_1 + 0x910) * 0.016666668 + *(float *)(param_1 + 0x924);
    *(float *)(param_1 + 0x924) = fVar1;
    if (1.5 <= fVar1) {
      FUN_00a8caf0(2,0,0,0);
      return;
    }
  }
  return;
}

// 00543600  FUN_00543600  size=249  [callgraph]
void __fastcall FUN_00543600(int param_1)

{
  short sVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    *(undefined4 *)(param_1 + 0x61c) = 1;
    *(undefined4 *)(param_1 + 0x920) = 0x41200000;
    *(undefined4 *)(param_1 + 0x940) = 0;
    *(undefined4 *)(param_1 + 0x944) = 0;
    *(undefined4 *)(param_1 + 0x924) = 0;
    *(undefined4 *)(param_1 + 0xdc8) = 0;
    *(undefined4 *)(param_1 + 0xdcc) = 0;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  *(uint *)(param_1 + 0xdc0) = *(uint *)(param_1 + 0xdc0) | 3;
  *(float *)(param_1 + 0x920) =
       *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910) * 0.016666668;
  if (((*(float *)(param_1 + 0xea4) <= 0.0) && (iVar2 = FUN_00ac4770(), iVar2 == 0)) &&
     (*(float *)(param_1 + 0xa90) < 144.0)) {
    sVar1 = FUN_00dde2d0(2,4);
    iVar2 = FUN_00542150((int)sVar1,*(int *)(param_1 + 0xa84) + 0x40);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0xea4) = 0x41200000;
    }
  }
  if (0.0 < *(float *)(param_1 + 0xe94)) {
    *(uint *)(param_1 + 0xdc0) = *(uint *)(param_1 + 0xdc0) | 0x1000;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00543700  FUN_00543700  size=156  [callgraph]
float10 __thiscall FUN_00543700(int param_1,float param_2,float param_3,float param_4)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)FUN_00a8ec30(param_2);
  if ((*(byte *)(param_1 + 0xdc0) & 0x40) != 0) {
    fVar1 = (float10)FUN_00ddba30((float)(fVar1 + (float10)3.1415927));
  }
  param_2 = (float)fVar1;
  fVar1 = (float10)FUN_00ddba30((float)(fVar1 - (float10)*(float *)(param_1 + 0x94)));
  fVar1 = fVar1 * (float10)param_3 * (float10)*(float *)(param_1 + 0x910);
  fVar2 = (float10)param_4;
  if (fVar1 <= -fVar2) {
    fVar1 = -fVar2;
  }
  if (fVar2 < fVar1) {
    fVar1 = fVar2;
  }
  fVar1 = (float10)FUN_00ddba30((float)(fVar1 + (float10)*(float *)(param_1 + 0x94)));
  *(float *)(param_1 + 0x94) = (float)fVar1;
  fVar1 = (float10)FUN_00ddba30((float)(fVar1 - (float10)param_2));
  return ABS(fVar1);
}

// 005437E0  FUN_005437e0  size=281  [callgraph]
void __fastcall FUN_005437e0(int param_1)

{
  float fVar1;
  float fVar2;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  local_20 = *(float *)(param_1 + 0xe70);
  local_18 = *(float *)(param_1 + 0xe78);
  local_14 = *(float *)(param_1 + 0xe7c);
  local_1c = 0.0;
  fVar2 = *(float *)(param_1 + 0xe38) * *(float *)(param_1 + 0x910);
  fVar1 = local_20 * local_20 + local_18 * local_18;
  if (fVar1 < 0.0 == (fVar1 == 0.0)) {
    FUN_00ddf460(&local_20,&local_20);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    local_18 = 0.0;
    local_20 = 0.0;
    local_1c = 1.0;
  }
  local_20 = local_20 * fVar2;
  local_1c = fVar2 * local_1c;
  local_18 = local_18 * fVar2;
  local_14 = local_14 * fVar2;
  if ((*(byte *)(param_1 + 0xdc0) & 0x40) != 0) {
    fVar2 = -fVar2;
  }
  *(float *)(param_1 + 0xe34) = fVar2 + *(float *)(param_1 + 0xe34);
  *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0x50) + local_20;
  *(float *)(param_1 + 0x54) = local_1c + *(float *)(param_1 + 0x54);
  *(float *)(param_1 + 0x58) = local_18 + *(float *)(param_1 + 0x58);
  *(float *)(param_1 + 0x5c) = local_14 + *(float *)(param_1 + 0x5c);
  if (*(float *)(param_1 + 0x910) * 0.07 < ABS(*(float *)(param_1 + 0xe34))) {
    *(uint *)(param_1 + 0xdc0) = *(uint *)(param_1 + 0xdc0) | 0x80;
  }
  return;
}

// 00543900  FUN_00543900  size=94  [callgraph]
void __thiscall FUN_00543900(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined1 local_20 [28];
  
  if (param_2 == (undefined4 *)0x0) {
    if ((*(byte *)(param_1 + 0xdc0) & 0x40) == 0) {
      uVar1 = 0x3f800000;
    }
    else {
      uVar1 = 0xbf800000;
    }
    param_2 = (undefined4 *)FUN_00a8b8a0(local_20,uVar1);
  }
  *(undefined4 *)(param_1 + 0xe70) = *param_2;
  *(undefined4 *)(param_1 + 0xe74) = param_2[1];
  *(undefined4 *)(param_1 + 0xe78) = param_2[2];
  *(undefined4 *)(param_1 + 0xe7c) = param_2[3];
  return;
}

// 00543960  FUN_00543960  size=47  [callgraph]
void __fastcall FUN_00543960(int param_1)

{
  if (((*(uint *)(param_1 + 0xdc0) & 0x400) == 0) && (*(int *)(param_1 + 0x7b0) != 0)) {
    *(uint *)(param_1 + 0xdc0) = *(uint *)(param_1 + 0xdc0) | 0x400;
    FUN_008f03a0(0x10000,1);
  }
  return;
}

// 00543990  FUN_00543990  size=50  [callgraph]
void __fastcall FUN_00543990(int param_1)

{
  if (((*(uint *)(param_1 + 0xdc0) & 0x400) != 0) && (*(int *)(param_1 + 0x7b0) != 0)) {
    *(uint *)(param_1 + 0xdc0) = *(uint *)(param_1 + 0xdc0) & 0xfffffbff;
    FUN_008f03a0(0x10000,0);
  }
  return;
}

// 005439D0  FUN_005439d0  size=427  [callgraph]
void __thiscall FUN_005439d0(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  undefined3 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 uStack_44;
  undefined1 auStack_40 [4];
  undefined4 uStack_3c;
  undefined1 auStack_30 [44];
  
  iVar3 = FUN_00dd3500(0x110,&DAT_01b7c0b8);
  if (iVar3 != 0) {
    iVar3 = CollisionAttackData::CollisionAttackData_3();
    if (iVar3 != 0) {
      puVar5 = *(undefined4 **)(iVar3 + 8);
      *(undefined4 *)(iVar3 + 4) = 1;
      uStack_3c = (**(code **)(**(int **)(param_1 + 0x754) + 8))(0xc);
      uStack_3c = (**(code **)(**(int **)(param_1 + 0x754) + 0x10))(0xc);
      uVar2 = (**(code **)(**(int **)(param_1 + 0x754) + 0x20))(0xc);
      uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x18))(0xc);
      puVar5[1] = CONCAT13(uVar2,unaff_EBX);
      *(char *)(puVar5 + 4) = (char)((uint)unaff_ESI >> 0x18);
      puVar5[3] = uStack_44;
      puVar5[2] = uVar4;
      *puVar5 = 0xed;
      puVar5[0x24] = puVar5[0x24] | 0x2000000;
      puVar5[0x23] = puVar5[0x23] | 0x200000;
      *(undefined1 *)((int)puVar5 + 0x11) = 10;
      puVar5 = (undefined4 *)FUN_009f8b60();
      piVar6 = (int *)FUN_00602cb0(5,*puVar5,iVar3);
      if (piVar6 != (int *)0x0) {
        FUN_005423c0(auStack_40,auStack_30,param_2,1);
        (**(code **)(*piVar6 + 0x6c))(auStack_40);
        piVar1 = (int *)piVar6[0x21c];
        piVar6[0x21d] = 0x3f800000;
        puVar5 = (undefined4 *)FUN_009f8b60();
        (**(code **)(*piVar1 + 0x20))(0xb,*puVar5,0);
        piVar7 = (int *)FUN_00d773c0();
        (**(code **)(*piVar7 + 8))(piVar1);
        FUN_00d7b0f0();
        FUN_00d77c50(piVar6[0x13c],0xffffffff);
        piVar1[0x144] = 0x3dcccccd;
        FUN_00d77580(0x3f000000,0x402ccccd,0x3f266666);
        piVar1[0xe0] = 0xed;
        FUN_00d7b890();
      }
      return;
    }
  }
  FUN_00dd5650(&DAT_01641210);
  return;
}

// 00543B80  FUN_00543b80  size=151  [callgraph]
void __thiscall FUN_00543b80(undefined4 param_1,int param_2)

{
  undefined4 local_40 [4];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20 [7];
  
  local_40[0] = 0x3fcccccd;
  param_2 = param_2 + -1;
  local_40[1] = 0x3fd9999a;
  local_40[2] = 0xbf19999a;
  local_20[0] = 0;
  local_20[1] = 0x3fc90fdb;
  local_20[2] = 0;
  local_30 = local_40[param_2 * 4];
  local_2c = local_40[param_2 * 4 + 1];
  local_28 = local_40[param_2 * 4 + 2];
  local_24 = local_40[param_2 * 4 + 3];
  local_40[0] = local_20[param_2 * 4];
  local_40[1] = local_20[param_2 * 4 + 1];
  local_40[2] = local_20[param_2 * 4 + 2];
  local_40[3] = local_20[param_2 * 4 + 3];
  FUN_00e02d10(param_1,0xc,local_40 + 4,local_40);
  return;
}

// 00543C20  FUN_00543c20  size=40  [callgraph]
void __fastcall FUN_00543c20(int param_1)

{
  if ((*(byte *)(param_1 + 0xdc0) & 0x10) != 0) {
    *(uint *)(param_1 + 0xdc0) = *(uint *)(param_1 + 0xdc0) & 0xffffffef;
    FUN_00a8c9b0(0,5,0x3f800000,0);
  }
  return;
}

// 00543C50  FUN_00543c50  size=40  [callgraph]
void __fastcall FUN_00543c50(int param_1)

{
  if ((*(byte *)(param_1 + 0xdc0) & 0x20) != 0) {
    *(uint *)(param_1 + 0xdc0) = *(uint *)(param_1 + 0xdc0) & 0xffffffdf;
    FUN_00a8c9b0(0,6,0x3f800000,0);
  }
  return;
}

// 00543C90  FUN_00543c90  size=177  [callgraph]
void __fastcall FUN_00543c90(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xe84) != 0) {
    *(undefined4 *)(param_1 + 0xe8c) = 0;
    if (*(int *)(param_1 + 0xe90) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0xe84),0);
      *(undefined4 *)(param_1 + 0xe90) = 0;
    }
    *(undefined4 *)(param_1 + 0xe84) = 0;
    *(undefined4 *)(param_1 + 0xe88) = 0;
  }
  FUN_00a92a00();
  iVar1 = param_1;
  FUN_00c1cf50(param_1);
  FUN_00c1d1c0(iVar1);
  FUN_00c57120(*(undefined4 *)(param_1 + 0x4f0));
  if (*(int *)(param_1 + 0x764) != 0) {
    FUN_008e3c10();
    FUN_008e1c60();
  }
  if (*(int *)(param_1 + 0x7b0) != 0) {
    HkRemovePhysicsSystem::HkRemovePhysicsSystem();
    if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x7b0) + 4))(1);
      *(undefined4 *)(param_1 + 0x7b0) = 0;
    }
  }
  FUN_00a9d8a0();
  BehaviorEmBase::vf44();
  return;
}

// 00543D50  FUN_00543d50  size=261  [callgraph]
void __fastcall FUN_00543d50(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  
  BehaviorEmBase::vf48();
  *(uint *)(param_1 + 0xdc0) = *(uint *)(param_1 + 0xdc0) & 0xffffeff0;
  *(undefined4 *)(param_1 + 0xe34) = 0;
  if (64.0 < *(float *)(param_1 + 0xa90)) {
    if (*(float *)(param_1 + 0xdcc) <= 0.0) goto LAB_00543db0;
    fVar1 = *(float *)(param_1 + 0xdcc) - *(float *)(param_1 + 0x910) * 3.0;
  }
  else {
    fVar1 = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0xdcc);
  }
  *(float *)(param_1 + 0xdcc) = fVar1;
LAB_00543db0:
  if (0.34906584 <= ABS(*(float *)(param_1 + 0xa9c))) {
    if (ABS(*(float *)(param_1 + 0xa9c)) <= 2.7925267) {
      if (*(float *)(param_1 + 0xa9c) <= 0.0) {
        *(undefined4 *)(param_1 + 0xdd0) = 3;
      }
      else {
        *(undefined4 *)(param_1 + 0xdd0) = 2;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0xdd0) = 1;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xdd0) = 0;
  }
  *(uint *)(param_1 + 0xdc0) = *(uint *)(param_1 + 0xdc0) & 0xfffff7ff;
  if (*(int *)(param_1 + 0xa84) != 0) {
    iVar2 = FUN_00a8d9d0();
    if (iVar2 != 0) {
      iVar2 = *(int *)(param_1 + 0x4f0);
      iVar3 = FUN_00a8da10();
      if (iVar3 == iVar2) {
        *(uint *)(param_1 + 0xdc0) = *(uint *)(param_1 + 0xdc0) | 0x800;
      }
    }
  }
  return;
}

// 00543E60  FUN_00543e60  size=39  [callgraph]
void __fastcall FUN_00543e60(int param_1)

{
  FUN_00a93170();
  BehaviorEmBase::vf50();
  if (*(int *)(param_1 + 0x7b0) != 0) {
    FUN_008f5990(param_1);
  }
  FUN_005432c0();
  return;
}

// 00543F40  FUN_00543f40  size=794  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00544065) */
/* WARNING: Removing unreachable block (ram,0x005441c0) */

void __fastcall FUN_00543f40(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float unaff_EBX;
  float10 fVar7;
  float10 fVar8;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float fStack_44;
  float local_40;
  float local_3c;
  float local_38;
  float fStack_34;
  float local_30;
  float local_2c;
  float local_28;
  
  if (*(int *)(param_1 + 0xa84) != 0) {
    iVar4 = FUN_00a12210(0x43);
    iVar5 = FUN_00a12210(0x44);
    iVar6 = FUN_00a12210(0);
    if (iVar6 == 0) {
      iVar6 = *(int *)(param_1 + 0xa84);
    }
    local_5c = *(float *)(iVar6 + 0x40);
    local_58 = *(float *)(iVar6 + 0x44);
    local_54 = *(float *)(iVar6 + 0x48);
    local_68 = local_5c - *(float *)(iVar4 + 0x40);
    local_64 = local_58 - *(float *)(iVar4 + 0x44);
    local_60 = local_54 - *(float *)(iVar4 + 0x48);
    FID_conflict__memcpy(&local_50,(void *)(param_1 + 0x10),0x40);
    fVar3 = local_48 * local_60 + local_4c * local_64 + local_50 * local_68;
    fVar2 = local_38 * local_60 + local_3c * local_64 + local_40 * local_68;
    local_60 = local_30 * local_68 + local_2c * local_64 + local_28 * local_60;
    fVar1 = local_60 * local_60 + fVar3 * fVar3 + fVar2 * fVar2;
    local_68 = fVar3;
    local_64 = fVar2;
    if (fVar1 < 0.0 != (fVar1 == 0.0)) {
      FUN_00dd5650(&DAT_0163d0ac);
      local_68 = 0.0;
      local_64 = 1.0;
      local_60 = 0.0;
    }
    D3DXVec3Normalize(&local_68,&local_68);
    fVar8 = (float10)fpatan((float10)fStack_70,(float10)local_68);
    fVar8 = (float10)FUN_00ddba30((float)(fVar8 + (float10)*(float *)(param_1 + 0xdfc)));
    *(float *)(param_1 + 0xdec) = (float)fVar8;
    if (fVar8 <= (float10)3.1415927) {
      if (fVar8 < (float10)-3.1415927) {
        *(float *)(param_1 + 0xdec) = (float)(float10)-3.1415927;
      }
    }
    else {
      *(float *)(param_1 + 0xdec) = (float)(float10)3.1415927;
    }
    fStack_70 = local_64 - *(float *)(iVar5 + 0x40);
    fStack_6c = local_60 - *(float *)(iVar5 + 0x44);
    local_68 = local_5c - *(float *)(iVar5 + 0x48);
    FID_conflict__memcpy(&local_58,(void *)(param_1 + 0x10),0x40);
    fVar3 = local_50 * local_68 + local_58 * fStack_70 + local_54 * fStack_6c;
    fVar2 = local_40 * local_68 + local_48 * fStack_70 + fStack_44 * fStack_6c;
    local_68 = fStack_34 * fStack_6c + local_38 * fStack_70 + local_30 * local_68;
    fVar1 = local_68 * local_68 + fVar3 * fVar3 + fVar2 * fVar2;
    fStack_70 = fVar3;
    fStack_6c = fVar2;
    if (fVar1 < 0.0 != (fVar1 == 0.0)) {
      FUN_00dd5650(&DAT_0163d0ac);
      fStack_70 = 0.0;
      fStack_6c = 1.0;
      local_68 = 0.0;
    }
    D3DXVec3Normalize(&fStack_70,&fStack_70);
    fVar8 = (float10)fpatan((float10)fStack_74,
                            SQRT((float10)unaff_EBX * (float10)unaff_EBX +
                                 (float10)fStack_70 * (float10)fStack_70));
    fVar8 = (float10)FUN_00ddba30((float)((float10)*(float *)(param_1 + 0xe00) - fVar8));
    *(float *)(param_1 + 0xdf0) = (float)fVar8;
    fVar7 = (float10)0.2617994;
    if ((fVar7 < fVar8) || (fVar7 = (float10)-0.34906584, fVar8 < fVar7)) {
      *(float *)(param_1 + 0xdf0) = (float)fVar7;
      return;
    }
  }
  return;
}

// 00544260  FUN_00544260  size=794  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00544385) */
/* WARNING: Removing unreachable block (ram,0x005444e0) */

void __fastcall FUN_00544260(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float unaff_EBX;
  float10 fVar7;
  float10 fVar8;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float fStack_44;
  float local_40;
  float local_3c;
  float local_38;
  float fStack_34;
  float local_30;
  float local_2c;
  float local_28;
  
  if (*(int *)(param_1 + 0xa84) != 0) {
    iVar4 = FUN_00a12210(0x40);
    iVar5 = FUN_00a12210(0x41);
    iVar6 = FUN_00a12210(0);
    if (iVar6 == 0) {
      iVar6 = *(int *)(param_1 + 0xa84);
    }
    local_5c = *(float *)(iVar6 + 0x40);
    local_58 = *(float *)(iVar6 + 0x44);
    local_54 = *(float *)(iVar6 + 0x48);
    local_68 = local_5c - *(float *)(iVar4 + 0x40);
    local_64 = local_58 - *(float *)(iVar4 + 0x44);
    local_60 = local_54 - *(float *)(iVar4 + 0x48);
    FID_conflict__memcpy(&local_50,(void *)(param_1 + 0x10),0x40);
    fVar3 = local_48 * local_60 + local_4c * local_64 + local_50 * local_68;
    fVar2 = local_38 * local_60 + local_3c * local_64 + local_40 * local_68;
    local_60 = local_30 * local_68 + local_2c * local_64 + local_28 * local_60;
    fVar1 = local_60 * local_60 + fVar3 * fVar3 + fVar2 * fVar2;
    local_68 = fVar3;
    local_64 = fVar2;
    if (fVar1 < 0.0 != (fVar1 == 0.0)) {
      FUN_00dd5650(&DAT_0163d0ac);
      local_68 = 0.0;
      local_64 = 1.0;
      local_60 = 0.0;
    }
    D3DXVec3Normalize(&local_68,&local_68);
    fVar8 = (float10)fpatan((float10)fStack_70,(float10)local_68);
    fVar8 = (float10)FUN_00ddba30((float)(fVar8 + (float10)*(float *)(param_1 + 0xe14)));
    *(float *)(param_1 + 0xe04) = (float)fVar8;
    if (fVar8 <= (float10)3.1415927) {
      if (fVar8 < (float10)-3.1415927) {
        *(float *)(param_1 + 0xe04) = (float)(float10)-3.1415927;
      }
    }
    else {
      *(float *)(param_1 + 0xe04) = (float)(float10)3.1415927;
    }
    fStack_70 = local_64 - *(float *)(iVar5 + 0x40);
    fStack_6c = local_60 - *(float *)(iVar5 + 0x44);
    local_68 = local_5c - *(float *)(iVar5 + 0x48);
    FID_conflict__memcpy(&local_58,(void *)(param_1 + 0x10),0x40);
    fVar3 = local_50 * local_68 + local_58 * fStack_70 + local_54 * fStack_6c;
    fVar2 = local_40 * local_68 + local_48 * fStack_70 + fStack_44 * fStack_6c;
    local_68 = fStack_34 * fStack_6c + local_38 * fStack_70 + local_30 * local_68;
    fVar1 = local_68 * local_68 + fVar3 * fVar3 + fVar2 * fVar2;
    fStack_70 = fVar3;
    fStack_6c = fVar2;
    if (fVar1 < 0.0 != (fVar1 == 0.0)) {
      FUN_00dd5650(&DAT_0163d0ac);
      fStack_70 = 0.0;
      fStack_6c = 1.0;
      local_68 = 0.0;
    }
    D3DXVec3Normalize(&fStack_70,&fStack_70);
    fVar8 = (float10)fpatan((float10)fStack_74,
                            SQRT((float10)unaff_EBX * (float10)unaff_EBX +
                                 (float10)fStack_70 * (float10)fStack_70));
    fVar8 = (float10)FUN_00ddba30((float)((float10)*(float *)(param_1 + 0xe18) - fVar8));
    *(float *)(param_1 + 0xe08) = (float)fVar8;
    fVar7 = (float10)0.2617994;
    if ((fVar7 < fVar8) || (fVar7 = (float10)-0.34906584, fVar8 < fVar7)) {
      *(float *)(param_1 + 0xe08) = (float)fVar7;
      return;
    }
  }
  return;
}

// 00544580  FUN_00544580  size=537  [callgraph]
void __fastcall FUN_00544580(int param_1)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  undefined4 *puVar4;
  float10 fVar5;
  float10 fVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  float fVar9;
  float fVar10;
  float *pfStack_398;
  float *pfStack_394;
  undefined1 auStack_388 [12];
  float fStack_37c;
  float fStack_378;
  float fStack_374;
  float local_370 [5];
  undefined1 auStack_35c [4];
  float fStack_358;
  float fStack_354;
  float local_350 [7];
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined2 uStack_328;
  uint uStack_2ac;
  undefined4 uStack_238;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  
  pfStack_394 = (float *)0x42;
  pfStack_398 = (float *)0x544597;
  iVar3 = FUN_00a12210();
  if (iVar3 != 0) {
    pfVar1 = (float *)(iVar3 + 0x10);
    local_350[0] = 0.0;
    pfStack_398 = local_350;
    local_350[1] = 0.31;
    local_350[2] = 1.32;
    pfStack_394 = pfVar1;
    D3DXVec3TransformNormal(local_370);
    fStack_37c = *(float *)(iVar3 + 0x40) + fStack_37c;
    puVar8 = auStack_35c;
    puVar7 = &stack0xfffffc74;
    fStack_378 = *(float *)(iVar3 + 0x44) + fStack_378;
    fStack_374 = *(float *)(iVar3 + 0x48) + fStack_374;
    D3DXVec3TransformNormal(puVar7,puVar8,pfVar1);
    pfStack_398 = (float *)((float)pfStack_398 + *(float *)(iVar3 + 0x40));
    pfStack_394 = (float *)(*(float *)(iVar3 + 0x44) + (float)pfStack_394);
    fStack_374 = SQRT(*(float *)(iVar3 + 0x14) * *(float *)(iVar3 + 0x14) + *pfVar1 * *pfVar1 +
                      *(float *)(iVar3 + 0x18) * *(float *)(iVar3 + 0x18));
    local_370[0] = SQRT(*(float *)(iVar3 + 0x20) * *(float *)(iVar3 + 0x20) +
                        *(float *)(iVar3 + 0x24) * *(float *)(iVar3 + 0x24) +
                        *(float *)(iVar3 + 0x28) * *(float *)(iVar3 + 0x28));
    fVar2 = SQRT(*(float *)(iVar3 + 0x38) * *(float *)(iVar3 + 0x38) +
                 *(float *)(iVar3 + 0x34) * *(float *)(iVar3 + 0x34) +
                 *(float *)(iVar3 + 0x30) * *(float *)(iVar3 + 0x30));
    fVar10 = *(float *)(iVar3 + 0x28) / fVar2;
    fVar9 = *(float *)(iVar3 + 0x38) / fVar2;
    fVar5 = (float10)FUN_00ddbaa0(-(*(float *)(iVar3 + 0x18) / fVar2),puVar7,puVar8,fVar9,fVar10);
    fVar6 = (float10)fpatan((float10)fVar10,(float10)fVar9);
    fStack_358 = (float)fVar6;
    fStack_354 = (float)fVar5;
    fVar5 = (float10)fpatan((float10)*(float *)(iVar3 + 0x14) / (float10)local_370[0],
                            (float10)*pfVar1 / (float10)fStack_374);
    local_350[0] = (float)fVar5;
    FUN_004105d0();
    FUN_00410710();
    FUN_0041cf30();
    FUN_00416e30(auStack_388,&pfStack_398,&fStack_358,0x40000000,0x43480000);
    uStack_2ac = uStack_2ac | 0x10000000;
    uStack_1dc = 0x3f7f7cee;
    uStack_1e0 = 0xbba3d70a;
    uStack_334 = 100;
    uStack_32c = 10;
    uStack_330 = 0x32;
    uStack_238 = 0x43;
    uStack_328 = 0xa0a;
    puVar4 = (undefined4 *)FUN_009f8b60();
    uStack_1d8 = *puVar4;
    FUN_00ad3be0(*(undefined4 *)(param_1 + 0x4f0),local_350 + 2);
  }
  return;
}

// 005447A0  FUN_005447a0  size=520  [callgraph]
void __fastcall FUN_005447a0(int param_1)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  undefined4 *puVar4;
  float10 fVar5;
  float10 fVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  float fVar9;
  float fVar10;
  float *pfStack_398;
  float *pfStack_394;
  undefined1 auStack_388 [12];
  float fStack_37c;
  float fStack_378;
  float fStack_374;
  float local_370 [5];
  undefined1 auStack_35c [4];
  float fStack_358;
  float fStack_354;
  float local_350 [7];
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined2 uStack_328;
  uint uStack_2ac;
  undefined4 uStack_238;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  
  pfStack_394 = (float *)0x44;
  pfStack_398 = (float *)0x5447b7;
  iVar3 = FUN_00a12210();
  if (iVar3 != 0) {
    pfVar1 = (float *)(iVar3 + 0x10);
    local_350[0] = 0.0;
    pfStack_398 = local_350;
    local_350[1] = 0.31;
    local_350[2] = 1.32;
    pfStack_394 = pfVar1;
    D3DXVec3TransformNormal(local_370);
    fStack_37c = *(float *)(iVar3 + 0x40) + fStack_37c;
    puVar8 = auStack_35c;
    puVar7 = &stack0xfffffc74;
    fStack_378 = *(float *)(iVar3 + 0x44) + fStack_378;
    fStack_374 = *(float *)(iVar3 + 0x48) + fStack_374;
    D3DXVec3TransformNormal(puVar7,puVar8,pfVar1);
    pfStack_398 = (float *)(*(float *)(iVar3 + 0x40) + (float)pfStack_398);
    pfStack_394 = (float *)(*(float *)(iVar3 + 0x44) + (float)pfStack_394);
    fStack_374 = SQRT(*(float *)(iVar3 + 0x14) * *(float *)(iVar3 + 0x14) + *pfVar1 * *pfVar1 +
                      *(float *)(iVar3 + 0x18) * *(float *)(iVar3 + 0x18));
    local_370[0] = SQRT(*(float *)(iVar3 + 0x20) * *(float *)(iVar3 + 0x20) +
                        *(float *)(iVar3 + 0x24) * *(float *)(iVar3 + 0x24) +
                        *(float *)(iVar3 + 0x28) * *(float *)(iVar3 + 0x28));
    fVar2 = SQRT(*(float *)(iVar3 + 0x38) * *(float *)(iVar3 + 0x38) +
                 *(float *)(iVar3 + 0x34) * *(float *)(iVar3 + 0x34) +
                 *(float *)(iVar3 + 0x30) * *(float *)(iVar3 + 0x30));
    fVar10 = *(float *)(iVar3 + 0x28) / fVar2;
    fVar9 = *(float *)(iVar3 + 0x38) / fVar2;
    fVar5 = (float10)FUN_00ddbaa0(-(*(float *)(iVar3 + 0x18) / fVar2),puVar7,puVar8,fVar9,fVar10);
    fVar6 = (float10)fpatan((float10)fVar10,(float10)fVar9);
    fStack_358 = (float)fVar6;
    fStack_354 = (float)fVar5;
    fVar5 = (float10)fpatan((float10)*(float *)(iVar3 + 0x14) / (float10)local_370[0],
                            (float10)*pfVar1 / (float10)fStack_374);
    local_350[0] = (float)fVar5;
    FUN_004105d0();
    FUN_00410710();
    FUN_0041cf30();
    FUN_00416e30(auStack_388,&pfStack_398,&fStack_358,0x40000000,0x43480000);
    uStack_2ac = uStack_2ac | 0x10000000;
    uStack_1dc = 0x3f7f7cee;
    uStack_334 = 10;
    uStack_32c = 10;
    uStack_330 = 0x32;
    uStack_238 = 0x42;
    uStack_328 = 0x300;
    puVar4 = (undefined4 *)FUN_009f8b60();
    uStack_1d8 = *puVar4;
    FUN_00ad3be0(*(undefined4 *)(param_1 + 0x4f0),local_350 + 2);
  }
  return;
}

// 005449B0  FUN_005449b0  size=358  [callgraph]
void __thiscall FUN_005449b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_360;
  undefined4 local_35c;
  undefined4 local_358;
  undefined4 local_350;
  float local_34c;
  undefined4 local_348;
  undefined4 local_344;
  undefined4 local_340;
  undefined4 local_33c;
  undefined4 local_338;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined2 uStack_31c;
  undefined4 uStack_318;
  uint uStack_2a0;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_1cc;
  
  local_340 = 0xbeb2b8c2;
  local_33c = param_3;
  local_338 = 0;
  iVar1 = FUN_00a12210(0x2a);
  local_350 = *(undefined4 *)(iVar1 + 0x40);
  local_348 = *(undefined4 *)(iVar1 + 0x48);
  local_344 = *(undefined4 *)(iVar1 + 0x4c);
  local_34c = *(float *)(iVar1 + 0x44) + 1.0;
  local_360 = 0;
  local_35c = 0;
  local_358 = 0x41700000;
  D3DXVec3TransformNormal(&local_360,&local_360,param_1 + 0x10);
  FUN_004105d0();
  FUN_00410710();
  FUN_0041cf30();
  uStack_228 = 0x29;
  local_338 = 0x30340;
  uStack_22c = 0x44;
  uStack_1cc = FUN_009f8b40();
  uStack_318 = *(undefined4 *)(param_1 + 0x4f0);
  uStack_2a0 = uStack_2a0 | 0x10000000;
  uStack_328 = 0;
  uStack_320 = 0;
  uStack_324 = 0;
  uStack_31c = 0;
  uStack_32c = 0x188;
  uVar2 = FUN_00a7c7f0();
  FUN_00a7c960(uVar2);
  FUN_00416e30(&local_35c,&stack0xfffffc94,&local_34c,param_2,0x44480000);
  FUN_00ad3be0(*(undefined4 *)(param_1 + 0x4f0),&local_33c);
  return;
}

// 00544B20  FUN_00544b20  size=582  [callgraph]
void __fastcall FUN_00544b20(int *param_1)

{
  float fVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  undefined1 local_20 [28];
  
  switch(param_1[0x187]) {
  case 0:
    if (0.7853982 <= ABS((float)param_1[0x2a7])) {
      param_1[0x370] = param_1[0x370] | 0x40;
    }
    else {
      param_1[0x370] = param_1[0x370] & 0xffffffbf;
    }
    param_1[0x187] = 2;
    param_1[0x38f] = 0x3d23d70a;
    param_1[0x390] = 0x3d23d70a;
    param_1[0x391] = 0x3e0a3d71;
    param_1[0x248] = 0x3fc00000;
    param_1[0x249] = 0x3f000000;
  case 1:
    param_1[0x249] = (int)((float)param_1[0x249] - (float)param_1[0x244] * 0.016666668);
  case 2:
    if (((float)param_1[0x38e] < (float)param_1[0x391]) &&
       (fVar1 = (float)param_1[0x38f] * (float)param_1[0x244] + (float)param_1[0x38e],
       param_1[0x38e] = (int)fVar1, (float)param_1[0x391] <= fVar1)) {
      param_1[0x38e] = param_1[0x391];
    }
    if ((*(byte *)(param_1 + 0x370) & 0x40) == 0) {
      uVar2 = 0x3f800000;
    }
    else {
      uVar2 = 0xbf800000;
    }
    piVar4 = (int *)FUN_00a8b8a0(local_20,uVar2);
    param_1[0x39c] = *piVar4;
    param_1[0x39d] = piVar4[1];
    param_1[0x39e] = piVar4[2];
    param_1[0x39f] = piVar4[3];
    (**(code **)(*param_1 + 0x14))();
    if ((param_1[0x370] & 0x100U) != 0) {
      param_1[0x187] = 1;
    }
    uVar3 = (uint)param_1[0x370] >> 6 & 1;
    fVar1 = (float)param_1[0x248] - (float)param_1[0x244] * 0.016666668;
    param_1[0x248] = (int)fVar1;
    if ((((uVar3 == 0) && (param_1[0x374] != 0)) || ((uVar3 != 0 && (param_1[0x374] != 1)))) ||
       (fVar1 <= 0.0)) {
      param_1[0x187] = 3;
      return;
    }
    if ((float)param_1[0x249] <= 0.0) {
      param_1[0x187] = 3;
      return;
    }
    break;
  case 3:
    FUN_005425a0();
    if ((*(byte *)(param_1 + 0x370) & 0x40) == 0) {
      uVar2 = 0x3f800000;
    }
    else {
      uVar2 = 0xbf800000;
    }
    piVar4 = (int *)FUN_00a8b8a0(local_20,uVar2);
    param_1[0x39c] = *piVar4;
    param_1[0x39d] = piVar4[1];
    param_1[0x39e] = piVar4[2];
    param_1[0x39f] = piVar4[3];
    (**(code **)(*param_1 + 0x14))();
    if ((float)param_1[0x38e] * (float)param_1[0x244] <= (float)param_1[0x244] * 0.01) {
      (**(code **)(*param_1 + 0x34c))();
    }
  }
  return;
}

// 00544D80  FUN_00544d80  size=166  [callgraph]
void __fastcall FUN_00544d80(int param_1)

{
  float fVar1;
  int iVar2;
  
  iVar2 = FUN_00ac4670(*(int *)(param_1 + 0xa84) + 0x40,1);
  if (iVar2 == 0) {
    if (*(float *)(param_1 + 0xdc8) <= 0.0) goto LAB_00544dc7;
    fVar1 = *(float *)(param_1 + 0xdc8) - *(float *)(param_1 + 0x910);
  }
  else {
    fVar1 = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0xdc8);
  }
  *(float *)(param_1 + 0xdc8) = fVar1;
LAB_00544dc7:
  if (30.0 < *(float *)(param_1 + 0xdc8)) {
    *(uint *)(param_1 + 0xdc0) = *(uint *)(param_1 + 0xdc0) & 0xffffdfff;
    FUN_00a8caf0(1,0,0,0);
    if (((*(uint *)(param_1 + 0xdc0) & 0x400) != 0) && (*(int *)(param_1 + 0x7b0) != 0)) {
      *(uint *)(param_1 + 0xdc0) = *(uint *)(param_1 + 0xdc0) & 0xfffffbff;
      FUN_008f03a0(0x10000,0);
    }
  }
  return;
}

// 00544E30  FUN_00544e30  size=978  [callgraph]
void __fastcall FUN_00544e30(int *param_1)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  int iVar6;
  float10 fVar7;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  undefined1 local_20 [28];
  
  iVar6 = param_1[0x187];
  if (iVar6 == 0) {
    FUN_00a8d710(param_1 + 0x10);
    param_1[0x394] = param_1[0x10];
    param_1[0x395] = param_1[0x11];
    param_1[0x396] = param_1[0x12];
    param_1[0x397] = param_1[0x13];
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x38f] = 0x3c03126f;
    param_1[0x390] = 0x3c23d70a;
    param_1[0x391] = 0x3d99999a;
    if (((param_1[0x370] & 0x400U) == 0) && (param_1[0x1ec] != 0)) {
      param_1[0x370] = param_1[0x370] | 0x400;
      FUN_008f03a0(0x10000,1);
    }
    param_1[0x372] = 0;
    param_1[0x370] = param_1[0x370] | 0x2000;
  }
  else if (iVar6 != 1) {
    if (iVar6 != 2) {
      return;
    }
    FUN_00a8d790(&local_5c);
    local_50 = local_5c;
    local_4c = local_58;
    local_48 = local_54;
    local_44 = 0x3f800000;
    fVar7 = (float10)FUN_00543700(&local_50,0x3c23d70a,0x3c0efa35);
    if (fVar7 < (float10)0.08726646) {
      param_1[0x187] = 1;
    }
    fVar1 = (float)param_1[0x38e] - (float)param_1[0x390] * (float)param_1[0x244];
    param_1[0x38e] = (int)fVar1;
    if (fVar1 <= 0.0) {
      param_1[0x38e] = 0;
    }
    if ((*(byte *)(param_1 + 0x370) & 0x40) == 0) {
      uVar2 = 0x3f800000;
    }
    else {
      uVar2 = 0xbf800000;
    }
    piVar5 = (int *)FUN_00a8b8a0(local_20,uVar2);
    param_1[0x39c] = *piVar5;
    param_1[0x39d] = piVar5[1];
    param_1[0x39e] = piVar5[2];
    param_1[0x39f] = piVar5[3];
    (**(code **)(*param_1 + 0x14))();
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  FUN_00a8d790(&local_5c);
  local_40 = local_5c;
  local_3c = local_58;
  local_38 = local_54;
  local_34 = 0x3f800000;
  fVar7 = (float10)FUN_00543700(&local_40,0x3ccccccd,0x3c8efa35);
  if ((float10)1.6580628 < fVar7) {
    if ((*(byte *)(param_1 + 0x370) & 0x40) == 0) {
      param_1[0x370] = param_1[0x370] | 0x40;
    }
    else {
      param_1[0x370] = param_1[0x370] & 0xffffffbf;
    }
    local_30 = local_5c;
    local_2c = local_58;
    local_28 = local_54;
    local_24 = 0x3f800000;
    fVar7 = (float10)FUN_00543700(&local_30,0x3ccccccd,0x3c8efa35);
  }
  if (fVar7 <= (float10)1.3089969) {
    if (((float)param_1[0x38e] < (float)param_1[0x391]) &&
       (fVar1 = (float)param_1[0x38f] * (float)param_1[0x244] + (float)param_1[0x38e],
       param_1[0x38e] = (int)fVar1, (float)param_1[0x391] <= fVar1)) {
      param_1[0x38e] = param_1[0x391];
    }
    if ((*(byte *)(param_1 + 0x370) & 0x40) == 0) {
      uVar2 = 0x3f800000;
    }
    else {
      uVar2 = 0xbf800000;
    }
    piVar5 = (int *)FUN_00a8b8a0(local_20,uVar2);
    param_1[0x39c] = *piVar5;
    param_1[0x39d] = piVar5[1];
    param_1[0x39e] = piVar5[2];
    param_1[0x39f] = piVar5[3];
    (**(code **)(*param_1 + 0x14))();
    fVar1 = local_5c - (float)param_1[0x394];
    fVar4 = local_54 - (float)param_1[0x396];
    fVar3 = (local_58 - (float)param_1[0x11]) * (local_58 - (float)param_1[0x395]) +
            fVar1 * (local_5c - (float)param_1[0x10]) + fVar4 * (local_54 - (float)param_1[0x12]);
    if (fVar3 < 0.0 == (fVar3 == 0.0)) {
      iVar6 = FUN_00a97e60(SQRT(fVar4 * fVar4 + fVar1 * fVar1) * 0.2,1);
      if (iVar6 == 0) {
        return;
      }
    }
    else {
      FUN_00c9da70();
    }
    param_1[0x394] = (int)local_5c;
    param_1[0x395] = (int)local_58;
    param_1[0x396] = (int)local_54;
    param_1[0x397] = 0x3f800000;
    return;
  }
  param_1[0x187] = param_1[0x187] + 1;
  return;
}

// 00545540  FUN_00545540  size=421  [callgraph]
/* WARNING: Removing unreachable block (ram,0x005455d3) */

float * __thiscall FUN_00545540(int param_1,float *param_2)

{
  undefined4 *puVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  undefined4 *puVar9;
  float unaff_EBX;
  float *pfVar10;
  float *pfVar11;
  float unaff_ESI;
  float *pfVar12;
  float *pfVar13;
  float unaff_retaddr;
  float fVar14;
  float fVar15;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  pfVar12 = (float *)0x0;
  pfVar10 = (float *)0x0;
  local_c = *(float *)(param_1 + 0x40);
  local_8 = *(undefined4 *)(param_1 + 0x44);
  local_4 = *(undefined4 *)(param_1 + 0x48);
  local_18 = *(float *)(param_1 + 0x40) - *param_2;
  local_14 = *(float *)(param_1 + 0x44) - param_2[1];
  local_10 = *(float *)(param_1 + 0x48) - param_2[2];
  fVar15 = local_10 * local_10 + local_14 * local_14 + local_18 * local_18;
  if (fVar15 < 0.0 != (fVar15 == 0.0)) {
    FUN_00dd5650(&DAT_0163d0ac);
    local_18 = 0.0;
    local_14 = 1.0;
    local_10 = 0.0;
  }
  D3DXVec3Normalize(&local_18,&local_18);
  puVar9 = *(undefined4 **)(param_1 + 0xe84);
  puVar1 = puVar9 + *(int *)(param_1 + 0xe8c);
  pfVar11 = pfVar10;
  if (puVar9 != puVar1) {
    do {
      pfVar2 = (float *)*puVar9;
      pfVar11 = pfVar10;
      pfVar13 = pfVar12;
      fVar14 = unaff_ESI;
      fVar15 = unaff_EBX;
      if ((pfVar2 != (float *)0x0) && (param_2 != pfVar2)) {
        fVar6 = *pfVar2 - local_14;
        fVar5 = pfVar2[1] - local_10;
        fVar4 = pfVar2[2] - local_c;
        fVar3 = fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6;
        pfVar13 = pfVar2;
        fVar14 = fVar3;
        fVar7 = unaff_ESI;
        pfVar8 = pfVar12;
        if (((fVar4 * local_18 + fVar5 * 0.0 + fVar6 * 0.0 < 0.0) &&
            (pfVar11 = pfVar2, pfVar13 = pfVar12, fVar15 = fVar3, fVar14 = unaff_ESI,
            fVar7 = unaff_EBX, pfVar8 = pfVar10, fVar3 <= unaff_retaddr)) ||
           ((pfVar8 != (float *)0x0 && (fVar7 <= fVar3)))) {
          pfVar11 = pfVar10;
          pfVar13 = pfVar12;
          fVar14 = unaff_ESI;
          fVar15 = unaff_EBX;
        }
      }
      puVar9 = puVar9 + 1;
      pfVar10 = pfVar11;
      pfVar12 = pfVar13;
      unaff_ESI = fVar14;
      unaff_EBX = fVar15;
    } while (puVar9 != puVar1);
    if (pfVar13 != (float *)0x0) {
      return pfVar13;
    }
  }
  return pfVar11;
}

// 005456F0  FUN_005456f0  size=46  [callgraph]
void __fastcall FUN_005456f0(undefined4 param_1)

{
  undefined1 local_160 [348];
  
  FUN_004039a0(2,param_1,0);
  FUN_00a963e0(local_160);
  return;
}

// 00545720  FUN_00545720  size=46  [callgraph]
void __fastcall FUN_00545720(undefined4 param_1)

{
  undefined1 local_160 [348];
  
  FUN_004039a0(1,param_1,0);
  FUN_00a963e0(local_160);
  return;
}

// 00545750  FUN_00545750  size=50  [callgraph]
void __thiscall FUN_00545750(undefined4 param_1,undefined4 param_2)

{
  undefined1 local_160 [348];
  
  FUN_004039a0(param_2,param_1,0);
  FUN_00a963e0(local_160);
  return;
}

// 00545790  FUN_00545790  size=46  [callgraph]
void __fastcall FUN_00545790(undefined4 param_1)

{
  undefined1 local_160 [348];
  
  FUN_004039a0(9,param_1,0);
  FUN_00a963e0(local_160);
  return;
}

// 005457C0  FUN_005457c0  size=65  [callgraph]
void __fastcall FUN_005457c0(int param_1)

{
  undefined1 local_160 [348];
  
  if ((*(byte *)(param_1 + 0xdc0) & 0x10) == 0) {
    *(uint *)(param_1 + 0xdc0) = *(uint *)(param_1 + 0xdc0) | 0x10;
    FUN_004039a0(5,param_1,0);
    FUN_00a963e0(local_160);
  }
  return;
}

// 00545810  FUN_00545810  size=65  [callgraph]
void __fastcall FUN_00545810(int param_1)

{
  undefined1 local_160 [348];
  
  if ((*(byte *)(param_1 + 0xdc0) & 0x20) == 0) {
    *(uint *)(param_1 + 0xdc0) = *(uint *)(param_1 + 0xdc0) | 0x20;
    FUN_004039a0(6,param_1,0);
    FUN_00a963e0(local_160);
  }
  return;
}

// 00545A60  FUN_00545a60  size=401  [callgraph]
void __thiscall FUN_00545a60(int *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  undefined1 local_1f0 [48];
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined1 auStack_160 [348];
  
  uVar1 = *(undefined4 *)(param_2 + 0x100);
  uVar2 = *(undefined4 *)(param_2 + 0x104);
  uVar3 = *(undefined4 *)(param_2 + 0x108);
  FUN_009dbcf0();
  FID_conflict__memcpy(local_1f0,(void *)(param_2 + 0x40),0x40);
  local_1c0 = uVar1;
  local_1bc = uVar2;
  local_1b8 = uVar3;
  if ((*(uint *)(param_2 + 0x8c) & 0x10000000) == 0) {
    if (*(short *)(param_2 + 0x84) == -1) {
      (**(code **)(*param_1 + 0x1ac))
                (*(undefined4 *)(param_2 + 0x144),param_2,*(undefined4 *)(param_2 + 300),local_1f0);
    }
    else {
      (**(code **)(*param_1 + 0x1a8))(param_2,param_3,param_1);
    }
  }
  iVar5 = FUN_00a8eea0();
  iVar6 = FUN_00a8eeb0();
  fVar4 = (float)iVar5 / (float)iVar6;
  if (0.25 < fVar4) {
    if ((fVar4 <= 0.5) && (0.5 < (float)param_1[0x371])) {
      FUN_004039a0(7,param_1,0);
      FUN_00a963e0(auStack_160);
      param_1[0x371] = (int)fVar4;
      return;
    }
  }
  else if (0.25 < (float)param_1[0x371]) {
    FUN_004039a0(8,param_1,0);
    FUN_00a963e0(auStack_160);
    param_1[0x371] = (int)fVar4;
    return;
  }
  param_1[0x371] = (int)fVar4;
  return;
}

// 00545C00  FUN_00545c00  size=303  [callgraph]
void __fastcall FUN_00545c00(int param_1)

{
  float fVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x4e4) == 0) {
    if ((*(byte *)(param_1 + 0xdc0) & 1) != 0) {
      FUN_00543f40();
    }
    fVar1 = 1.0;
    if (0.0 < *(float *)(param_1 + 0xddc)) {
      if ((*(uint *)(param_1 + 0xdc0) & 0x1000) != 0) {
        fVar1 = 3.0;
      }
      fVar1 = *(float *)(param_1 + 0xddc) - *(float *)(param_1 + 0x910) * 0.016666668 * fVar1;
      *(float *)(param_1 + 0xddc) = fVar1;
      if ((fVar1 < 0.0 != (fVar1 == 0.0)) &&
         (((*(uint *)(param_1 + 0xdc0) & 1) == 0 || ((*(uint *)(param_1 + 0xdc0) & 4) == 0)))) {
        *(undefined4 *)(param_1 + 0xddc) = 0x3f800000;
      }
    }
    if ((*(uint *)(param_1 + 0xdc0) & 1) == 0) {
      if ((*(uint *)(param_1 + 0xdc0) & 0x10) != 0) {
        *(uint *)(param_1 + 0xdc0) = *(uint *)(param_1 + 0xdc0) & 0xffffffef;
        FUN_00a8c9b0(0,5,0x3f800000,0);
      }
    }
    else if (*(float *)(param_1 + 0xddc) < 3.0) {
      FUN_005457c0();
    }
    if ((((*(byte *)(param_1 + 0xdc0) & 4) != 0) && (*(float *)(param_1 + 0xddc) <= 0.0)) &&
       (iVar2 = FUN_00ac4770(), iVar2 == 0)) {
      FUN_00544580();
      FUN_00543c20();
      *(undefined4 *)(param_1 + 0xddc) = 0x41000000;
      FUN_005420e0(param_1 + 0xdec);
      FUN_005420e0(param_1 + 0xe04);
      return;
    }
  }
  return;
}

// 00545D30  FUN_00545d30  size=413  [callgraph]
void __fastcall FUN_00545d30(int param_1)

{
  float fVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x4e4) == 0) {
    if ((*(uint *)(param_1 + 0xdc0) & 2) == 0) {
      if ((*(uint *)(param_1 + 0xdc0) & 0x2000) != 0) {
        FUN_00541fa0();
      }
    }
    else {
      FUN_00544260();
    }
    FUN_00543180();
    if ((0.0 < *(float *)(param_1 + 0xde8)) && (*(float *)(param_1 + 0xe94) <= 0.0)) {
      fVar1 = *(float *)(param_1 + 0xde8) - *(float *)(param_1 + 0x910) * 0.016666668;
      *(float *)(param_1 + 0xde8) = fVar1;
      if ((fVar1 < 0.0 != (fVar1 == 0.0)) &&
         (((*(uint *)(param_1 + 0xdc0) & 2) == 0 || ((*(uint *)(param_1 + 0xdc0) & 8) == 0)))) {
        *(undefined4 *)(param_1 + 0xde8) = 0x3f800000;
      }
    }
    if ((*(uint *)(param_1 + 0xdc0) & 2) == 0) {
      if ((*(uint *)(param_1 + 0xdc0) & 0x20) != 0) {
        *(uint *)(param_1 + 0xdc0) = *(uint *)(param_1 + 0xdc0) & 0xffffffdf;
        FUN_00a8c9b0(0,6,0x3f800000,0);
      }
    }
    else if (*(float *)(param_1 + 0xde8) < 3.0) {
      FUN_00545810();
    }
    if (((((*(byte *)(param_1 + 0xdc0) & 8) != 0) && (*(float *)(param_1 + 0xde8) <= 0.0)) &&
        (iVar2 = FUN_00ac4770(), iVar2 == 0)) &&
       (fVar1 = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0xde4),
       *(float *)(param_1 + 0xde4) = fVar1, 8.0 < fVar1)) {
      *(int *)(param_1 + 0xde0) = *(int *)(param_1 + 0xde0) + 1;
      *(undefined4 *)(param_1 + 0xde4) = 0;
      if ((*(int *)(param_1 + 0xde0) < 0x1f) &&
         ((*(int *)(param_1 + 0xde0) < 0xb || ((*(byte *)(param_1 + 0xdc0) & 2) != 0)))) {
        FUN_005447a0();
        FUN_005420e0(param_1 + 0xe04);
        return;
      }
      *(undefined4 *)(param_1 + 0xde0) = 0;
      *(undefined4 *)(param_1 + 0xde8) = 0x40a00000;
      *(undefined4 *)(param_1 + 0xe18) = 0;
      *(undefined4 *)(param_1 + 0xe14) = 0;
      FUN_00543c50();
      return;
    }
  }
  return;
}

// 00545ED0  FUN_00545ed0  size=1279  [callgraph]
void __fastcall FUN_00545ed0(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  short sVar5;
  int iVar6;
  int *piVar7;
  float10 fVar8;
  undefined4 uVar9;
  float local_2c;
  float local_28;
  float local_24;
  undefined1 local_20 [28];
  
  switch(param_1[0x187]) {
  case 0:
    break;
  case 1:
    goto switchD_00545eed_caseD_1;
  case 2:
    fVar1 = (float)param_1[0x38e] - (float)param_1[0x390] * (float)param_1[0x244];
    param_1[0x38e] = (int)fVar1;
    if (fVar1 <= 0.0) {
      param_1[0x38e] = 0;
    }
    if ((*(byte *)(param_1 + 0x370) & 0x40) == 0) {
      uVar9 = 0x3f800000;
    }
    else {
      uVar9 = 0xbf800000;
    }
    piVar7 = (int *)FUN_00a8b8a0(local_20,uVar9);
    param_1[0x39c] = *piVar7;
    param_1[0x39d] = piVar7[1];
    param_1[0x39e] = piVar7[2];
    param_1[0x39f] = piVar7[3];
    (**(code **)(*param_1 + 0x14))();
    if ((float)param_1[0x244] * 0.01 < (float)param_1[0x244] * (float)param_1[0x38e]) {
      return;
    }
    (**(code **)(*param_1 + 0x34c))();
    return;
  case 3:
    fVar8 = (float10)FUN_00543700(param_1 + 0x398,0x3c23d70a,0x3c0efa35);
    if (fVar8 < (float10)0.08726646) {
      param_1[0x187] = 1;
    }
    fVar1 = (float)param_1[0x38e] - (float)param_1[0x390] * (float)param_1[0x244];
    param_1[0x38e] = (int)fVar1;
    if (fVar1 <= 0.0) {
      param_1[0x38e] = 0;
    }
    if ((*(byte *)(param_1 + 0x370) & 0x40) == 0) {
      uVar9 = 0x3f800000;
    }
    else {
      uVar9 = 0xbf800000;
    }
    goto LAB_00546395;
  default:
    goto switchD_00545eed_default;
  }
  uVar9 = FUN_00a8d400(param_1 + 0x10);
  iVar6 = FUN_00545540(param_1[0x2a1] + 0x40,0x41200000,uVar9);
  if (((iVar6 == 0) || (param_1[0x1f6] == 0)) || (cVar4 = FUN_00c70730(uVar9,iVar6), cVar4 == '\0'))
  {
    FUN_00a8caf0(3,0,0,0);
    return;
  }
  param_1[0x394] = param_1[0x10];
  param_1[0x395] = param_1[0x11];
  param_1[0x396] = param_1[0x12];
  param_1[0x397] = param_1[0x13];
  param_1[0x187] = param_1[0x187] + 1;
  param_1[0x38f] = 0x3c03126f;
  param_1[0x390] = 0x3c23d70a;
  param_1[0x391] = 0x3d99999a;
switchD_00545eed_caseD_1:
  param_1[0x370] = param_1[0x370] | 3;
  if (((float)param_1[0x3a9] <= 0.0) && ((float)param_1[0x2a4] < 144.0)) {
    sVar5 = FUN_00dde2d0(2,4);
    iVar6 = FUN_00542150((int)sVar5,param_1[0x2a1] + 0x40);
    if (iVar6 != 0) {
      param_1[0x3a9] = 0x41200000;
    }
  }
  if (0.0 < (float)param_1[0x3a5]) {
    param_1[0x370] = param_1[0x370] | 0x1000;
  }
  FUN_00a979f0(&local_2c);
  param_1[0x398] = (int)local_2c;
  param_1[0x399] = (int)local_28;
  param_1[0x39a] = (int)local_24;
  param_1[0x39b] = 0x3f800000;
  cVar4 = FUN_00c6c8f0();
  if ((cVar4 == '\0') || (*(int *)(param_1[0x1f6] + 0x814) == *(int *)(param_1[0x1f6] + 0x818))) {
    iVar6 = FUN_00c68b80();
    param_1[0x250] = param_1[0x250] + -1;
    if (param_1[0x250] < 1) {
      param_1[0x250] = 10;
      FUN_00c70ca0(param_1 + 0x10);
    }
    if (iVar6 == 0) {
      fVar3 = local_2c - (float)param_1[0x10];
      fVar2 = local_24 - (float)param_1[0x12];
      fVar1 = (local_24 - (float)param_1[0x396]) * fVar2 +
              (local_28 - (float)param_1[0x11]) * (local_28 - (float)param_1[0x395]) +
              (local_2c - (float)param_1[0x394]) * fVar3;
      if ((fVar1 < 0.0 == (fVar1 == 0.0)) && (2.25 <= fVar3 * fVar3 + fVar2 * fVar2))
      goto LAB_00546166;
    }
    if (*(int *)(param_1[0x1f6] + 0x814) == *(int *)(param_1[0x1f6] + 0x818)) {
      param_1[0x187] = param_1[0x187] + 1;
    }
    else {
      FUN_00c70800();
      param_1[0x394] = (int)local_2c;
      param_1[0x395] = (int)local_28;
      param_1[0x396] = (int)local_24;
      param_1[0x397] = 0x3f800000;
    }
  }
LAB_00546166:
  fVar8 = (float10)FUN_00543700(param_1 + 0x398,0x3ccccccd,0x3c8efa35);
  if ((float10)2.3561945 < fVar8) {
    if ((*(byte *)(param_1 + 0x370) & 0x40) == 0) {
      param_1[0x370] = param_1[0x370] | 0x40;
    }
    else {
      param_1[0x370] = param_1[0x370] & 0xffffffbf;
    }
    fVar8 = (float10)FUN_00543700(param_1 + 0x398,0x3ccccccd,0x3c8efa35);
  }
  if ((float10)1.3089969 < fVar8) {
    param_1[0x187] = 3;
    return;
  }
  if (((float)param_1[0x38e] < (float)param_1[0x391]) &&
     (fVar1 = (float)param_1[0x38f] * (float)param_1[0x244] + (float)param_1[0x38e],
     param_1[0x38e] = (int)fVar1, (float)param_1[0x391] <= fVar1)) {
    param_1[0x38e] = param_1[0x391];
  }
  if ((*(byte *)(param_1 + 0x370) & 0x40) == 0) {
    uVar9 = 0x3f800000;
  }
  else {
    uVar9 = 0xbf800000;
  }
LAB_00546395:
  piVar7 = (int *)FUN_00a8b8a0(local_20,uVar9);
  param_1[0x39c] = *piVar7;
  param_1[0x39d] = piVar7[1];
  param_1[0x39e] = piVar7[2];
  param_1[0x39f] = piVar7[3];
  (**(code **)(*param_1 + 0x14))();
switchD_00545eed_default:
  return;
}

// 005463E0  FUN_005463e0  size=335  [callgraph]
void __fastcall FUN_005463e0(int *param_1)

{
  float fVar1;
  int iVar2;
  undefined1 local_160 [348];
  
  switch(param_1[0x187]) {
  case 0:
    FUN_005424d0();
    FUN_00543c50();
    FUN_00543c20();
    FUN_004039a0(9,param_1,0);
    FUN_00a963e0(local_160);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x42f00000;
    return;
  case 1:
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] <= 0.0) {
      param_1[0x187] = 2;
      return;
    }
    break;
  case 2:
    FUN_00a8c9b0(0,9,0x3f800000,0);
    Em01c0::createWindAtk();
    FUN_004039a0(10,param_1,0);
    FUN_00a963e0(local_160);
    (**(code **)(*param_1 + 0x20))();
    (**(code **)(*param_1 + 200))(0);
    (**(code **)(*(int *)param_1[0x1ec] + 0xdc))(0);
    (**(code **)(*param_1 + 0x318))();
    FUN_00c4d1a0(param_1[0x13c],0);
    param_1[0x187] = param_1[0x187] + 1;
    return;
  case 3:
    iVar2 = FUN_00a8c890(0);
    if (*(int *)(iVar2 + 0x98) == 0) {
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 4:
    FUN_00a805f0();
  }
  return;
}

