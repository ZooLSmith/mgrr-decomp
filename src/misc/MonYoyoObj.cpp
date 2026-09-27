// src/misc/MonYoyoObj.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0051BC80..00AB9740, 30 functions

#include "types.h"

// 0051BC80  FUN_0051bc80  size=190  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0051bc80(int param_1)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  
  _DAT_01beaa88 = _DAT_01beaa88 | 0x4000000;
  iVar2 = FUN_00a12210(0);
  if (iVar2 != 0) {
    fVar1 = *(float *)(iVar2 + 0x90);
    fVar3 = (float10)FUN_00dde300(0,*(float *)(param_1 + 0x1850) * 0.2);
    fVar3 = (float10)FUN_00ddba30((float)((fVar3 + (float10)*(float *)(param_1 + 0x1850)) *
                                          (float10)0.017453292 *
                                          (float10)*(float *)(param_1 + 0x910) + (float10)fVar1));
    *(float *)(iVar2 + 0x90) = (float)fVar3;
  }
  fVar3 = (float10)FUN_00fdc1f0();
  *(float *)(param_1 + 0x1850) =
       (float)(((float10)*(float *)(param_1 + 0x1854) - (float10)*(float *)(param_1 + 0x1850)) *
               fVar3 + (float10)*(float *)(param_1 + 0x1850));
  if (*(int *)(param_1 + 0x61c) == 0) {
    *(undefined4 *)(param_1 + 0x61c) = 1;
    *(undefined4 *)(param_1 + 0x1854) = 0x41000000;
  }
  return;
}

// 0051BD40  MonYoyoObj::vf54  size=36  [class]
void __fastcall MonYoyoObj::vf54(int param_1)

{
  if ((*(int *)(param_1 + 0x15d8) != 0) && (*(int *)(param_1 + 0x7b0) != 0)) {
    FUN_008f7700(param_1);
  }
  BehaviorEmBase::vf54();
  return;
}

// 0051BD70  MonYoyoObj::vf30  size=44  [class]
void __fastcall MonYoyoObj::vf30(int param_1)

{
  *(undefined4 *)(param_1 + 0x18a0) = 1;
  BehaviorEmBase::vf30();
  FUN_009577e0(0x23a6f56d,param_1 + 0x130,0,0);
  return;
}

// 0051BDA0  MonYoyoObj::thunk_vf19C  size=5  [class]
void __thiscall MonYoyoObj::thunk_vf19C(int *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_a0 [48];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  
  uVar1 = *(undefined4 *)(param_2 + 0x100);
  uVar2 = *(undefined4 *)(param_2 + 0x104);
  uVar3 = *(undefined4 *)(param_2 + 0x108);
  FUN_009dbcf0();
  FID_conflict__memcpy(auStack_a0,(void *)(param_2 + 0x40),0x40);
  uStack_70 = uVar1;
  uStack_6c = uVar2;
  uStack_68 = uVar3;
  if (*(short *)(param_2 + 0x84) == -1) {
    (**(code **)(*param_1 + 0x1ac))
              (*(undefined4 *)(param_2 + 0x144),param_2,*(undefined4 *)(param_2 + 300),auStack_a0);
    return;
  }
  (**(code **)(*param_1 + 0x1a8))(param_2,param_3,param_1);
  return;
}

// 0051BE00  FUN_0051be00  size=141  [between]
void __fastcall FUN_0051be00(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  FUN_00a7c950();
  *(ushort *)(param_1 + 0xa2) = *(ushort *)(param_1 + 0xa2) | 4;
  *(undefined4 *)(param_1 + 0x15d4) = 0;
  FUN_00a7c950();
  *(undefined4 *)(param_1 + 0x1804) = 0xffffffff;
  if (*(int *)(param_1 + 0x7b0) != 0) {
    FUN_008f40f0(param_1);
  }
  *(undefined4 *)(param_1 + 0x1690) = 0x41a00000;
  *(undefined4 *)(param_1 + 0x1694) = 1;
  FUN_00a8caf0(2,0,0,0);
  piVar2 = (int *)FUN_00c14bb0();
  iVar1 = *piVar2;
  uVar3 = FUN_009f8b40("r30b_hashira_COL");
  (**(code **)(iVar1 + 0x54))(uVar3);
  return;
}

// 0051BEC0  MonYoyoObj::vf150  size=83  [class]
void __thiscall MonYoyoObj::vf150(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 != 0) {
    FUN_00a7c950();
    uVar1 = FUN_00a7c7f0();
    FUN_00a7c960(uVar1);
    if (param_2 == 0x5b) {
      FUN_00a8caf0(3,0,0,0);
      *(undefined4 *)(param_1 + 0x18a8) = 0xbf800000;
    }
  }
  return;
}

// 0051BF20  MonYoyoObj::vf158  size=28  [class]
bool MonYoyoObj::vf158(int param_1,int param_2)

{
  if (param_2 == 0) {
    return true;
  }
  return param_1 == 0x5b;
}

// 0051BF40  MonYoyoObj::vf260  size=3  [class]
void MonYoyoObj::vf260(void)

{
  return;
}

// 0051BF50  MonYoyoObj::vf1C0  size=5  [class]
void __thiscall MonYoyoObj::vf1C0(int *param_1,int *param_2,int *param_3)

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

// 005213B0  MonYoyoObj::getAttackInfo  size=266  [class]
int __thiscall MonYoyoObj::getAttackInfo(int param_1,ushort *param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  iVar2 = FUN_00dd3500(0x110,&DAT_01b7bd48);
  if (iVar2 != 0) {
    iVar2 = CollisionAttackData::CollisionAttackData_3();
    if (iVar2 != 0) {
      puVar1 = *(uint **)(iVar2 + 8);
      puVar1[5] = *(uint *)(param_1 + 0x4f0);
      uVar3 = FUN_00a7c7f0();
      FUN_00a7c960(uVar3);
      uVar5 = 10;
      iVar4 = FUN_009c4bf0();
      if (iVar4 == 0) {
        uVar5 = 0x96;
      }
      iVar4 = FUN_009c4bf0();
      if (iVar4 == 1) {
        uVar5 = 300;
      }
      iVar4 = FUN_009c4bf0();
      if (iVar4 == 2) {
        uVar5 = 0x1c2;
      }
      iVar4 = FUN_009c4bf0();
      if (iVar4 == 3) {
        uVar5 = 600;
      }
      iVar4 = FUN_009c4bf0();
      if (iVar4 == 4) {
        uVar5 = 3000;
      }
      puVar1[1] = uVar5;
      puVar1[3] = 10;
      *(undefined1 *)(puVar1 + 4) = 0xf;
      puVar1[2] = 10;
      *puVar1 = (uint)*param_2;
      *(undefined2 *)(puVar1 + 0x21) = 0x4002;
      if (*param_2 == 4) {
        *puVar1 = 0x12f;
        *(undefined1 *)((int)puVar1 + 0x11) = 10;
        puVar1[0x23] = puVar1[0x23] | 0x20001000;
      }
      return iVar2;
    }
  }
  FUN_00dd5650(&DAT_01640dc0);
  return 0;
}

// 005214C0  MonYoyoObj::vf50  size=270  [class]
void __fastcall MonYoyoObj::vf50(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  float local_20;
  float fStack_1c;
  float fStack_18;
  
  iVar4 = FUN_00a81330();
  if (iVar4 != 0) {
    iVar4 = FUN_00a7c8a0();
    if (iVar4 != 0) {
      iVar5 = FUN_00a12210(param_1[0x601]);
      if (iVar5 != 0) {
        piVar7 = (int *)(iVar5 + 0x10);
        piVar8 = param_1 + 4;
        for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
          *piVar8 = *piVar7;
          piVar7 = piVar7 + 1;
          piVar8 = piVar8 + 1;
        }
        D3DXVec3TransformNormal(&local_20,param_1 + 0x604,(int *)(iVar5 + 0x10));
        fVar1 = *(float *)(iVar5 + 0x44);
        fVar2 = *(float *)(iVar5 + 0x48);
        param_1[0x10] = (int)(*(float *)(iVar5 + 0x40) + local_20);
        param_1[0x11] = (int)(fVar1 + fStack_1c);
        param_1[0x12] = (int)(fVar2 + fStack_18);
        fVar1 = *(float *)(iVar4 + 0x44);
        fVar2 = *(float *)(iVar4 + 0x48);
        fVar3 = *(float *)(iVar4 + 0x4c);
        param_1[0x620] = (int)((float)param_1[0x10] - *(float *)(iVar4 + 0x40));
        param_1[0x621] = (int)((float)param_1[0x11] - fVar1);
        param_1[0x622] = (int)((float)param_1[0x12] - fVar2);
        param_1[0x623] = (int)((float)param_1[0x13] - fVar3);
      }
    }
  }
  switchD_0080dbae::default();
  if ((param_1[0x576] == 0) && (param_1[0x1ec] != 0)) {
    FUN_008f3cb0(param_1);
  }
  BehaviorEmBase::vf50();
  if ((*(byte *)(param_1 + 0x130) & 1) != 0) {
    (**(code **)(*param_1 + 0x128))();
  }
  return;
}

// 00521670  FUN_00521670  size=391  [between]
/* WARNING: Removing unreachable block (ram,0x00521702) */
/* WARNING: Removing unreachable block (ram,0x00521704) */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
FUN_00521670(int *param_1,float *param_2,undefined4 param_3,float param_4,float param_5,int param_6)

{
  int *piVar1;
  float10 fVar2;
  float local_90 [3];
  float local_84;
  int local_80 [4];
  float local_70;
  int local_6c;
  float local_68;
  undefined4 uStack_64;
  undefined1 auStack_5c [88];
  
  local_70 = (float)param_1[0x10];
  local_6c = param_1[0x11];
  local_68 = (float)param_1[0x12];
  local_90[0] = *param_2 - local_70;
  local_90[2] = param_2[2] - local_68;
  local_84 = param_2[3] - (float)param_1[0x13];
  local_90[1] = 0.0;
  if (local_90[2] * local_90[2] + local_90[0] * local_90[0] <= 0.0) {
    return;
  }
  FUN_00ddf460(local_90,local_90);
  local_80[0] = 0;
  piVar1 = param_1 + 4;
  local_80[1] = 0;
  local_80[2] = 0x3f800000;
  D3DXVec3TransformNormal(local_80,local_80,piVar1);
  local_6c = 0;
  local_68 = 1.0;
  uStack_64 = 0;
  if (param_6 != 0) {
    fVar2 = (float10)(**(code **)(*param_1 + 0x24))();
    param_5 = (float)(fVar2 * (float10)param_5);
    fVar2 = (float10)(**(code **)(*param_1 + 0x24))(param_5);
    param_4 = (float)(fVar2 * (float10)param_4);
  }
  FUN_00de2bc0(auStack_5c,local_90 + 1,&stack0xffffff64,&local_6c,param_4,param_5);
  D3DXMatrixMultiply(piVar1,piVar1,auStack_5c);
  param_1[0x10] = (int)local_90[2];
  param_1[0x11] = (int)local_84;
  param_1[0x12] = local_80[0];
  FUN_00de28e0(piVar1,piVar1);
  return;
}

// 00521800  MonYoyoObj::vf14C  size=44  [class]
bool __thiscall MonYoyoObj::vf14C(int param_1,int param_2,int param_3)

{
  if (param_3 != 0) {
    FUN_00a7c8a0();
  }
  if (*(int *)(param_1 + 0x4e4) != 0) {
    return false;
  }
  return param_2 == 0x5b;
}

// 00521830  MonYoyoObj::vf33C  size=344  [class]
void __thiscall MonYoyoObj::vf33C(int param_1,undefined4 *param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar4 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_3 + 0x18) = 0x42380;
  uVar3 = 2;
  iVar5 = 5;
  do {
    bVar1 = (byte)uVar3;
    uVar6 = 0x80000000 >> (bVar1 - 2 & 0x1f);
    uVar2 = uVar3 - 2 >> 5;
    if (((*(uint *)(param_3 + 0x10 + uVar2 * 4) & uVar6) != 0) &&
       ((*(uint *)(param_3 + 8 + uVar2 * 4) & uVar6) == 0)) {
      iVar4 = iVar4 + 1;
    }
    uVar6 = 0x80000000 >> (bVar1 - 1 & 0x1f);
    uVar2 = uVar3 - 1 >> 5;
    if (((*(uint *)(param_3 + 0x10 + uVar2 * 4) & uVar6) != 0) &&
       ((*(uint *)(param_3 + 8 + uVar2 * 4) & uVar6) == 0)) {
      iVar4 = iVar4 + 1;
    }
    uVar2 = 0x80000000 >> (bVar1 & 0x1f);
    if (((*(uint *)(param_3 + 0x10 + (uVar3 >> 5) * 4) & uVar2) != 0) &&
       ((*(uint *)(param_3 + 8 + (uVar3 >> 5) * 4) & uVar2) == 0)) {
      iVar4 = iVar4 + 1;
    }
    uVar6 = 0x80000000 >> (bVar1 + 1 & 0x1f);
    uVar2 = uVar3 + 1 >> 5;
    if (((*(uint *)(param_3 + 0x10 + uVar2 * 4) & uVar6) != 0) &&
       ((*(uint *)(param_3 + 8 + uVar2 * 4) & uVar6) == 0)) {
      iVar4 = iVar4 + 1;
    }
    uVar6 = 0x80000000 >> (bVar1 + 2 & 0x1f);
    uVar2 = uVar3 + 2 >> 5;
    if (((*(uint *)(param_3 + 0x10 + uVar2 * 4) & uVar6) != 0) &&
       ((*(uint *)(param_3 + 8 + uVar2 * 4) & uVar6) == 0)) {
      iVar4 = iVar4 + 1;
    }
    uVar6 = 0x80000000 >> (bVar1 + 3 & 0x1f);
    uVar2 = uVar3 + 3 >> 5;
    if (((*(uint *)(param_3 + 0x10 + uVar2 * 4) & uVar6) != 0) &&
       ((*(uint *)(param_3 + 8 + uVar2 * 4) & uVar6) == 0)) {
      iVar4 = iVar4 + 1;
    }
    uVar3 = uVar3 + 6;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  if (((iVar4 != 1) && ((*(uint *)(param_3 + 0x10) & 0x80000000) != 0)) &&
     (*(int *)(param_3 + 8) < 0)) {
    *(undefined4 *)(param_3 + 0x18) = 0x42380;
    return;
  }
  *(undefined4 *)(param_3 + 0x18) = *(undefined4 *)(param_1 + 0x4b4);
  return;
}

// 00521990  MonYoyoObj::vf338  size=85  [class]
void __thiscall MonYoyoObj::vf338(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  if (0 < param_4) {
    piVar2 = (int *)(param_3 + 0x18);
    piVar1 = piVar2;
    iVar4 = param_4;
    do {
      if (*piVar1 == *(int *)(param_1 + 0x4b4)) {
        iVar3 = iVar3 + 1;
      }
      piVar1 = piVar1 + 9;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    if (1 < iVar3) {
      iVar3 = 0;
      do {
        if ((*piVar2 == *(int *)(param_1 + 0x4b4)) && (iVar3 != 0)) {
          *piVar2 = 0x42380;
        }
        iVar3 = iVar3 + 1;
        piVar2 = piVar2 + 9;
      } while (iVar3 < param_4);
    }
  }
  return;
}

// 005219F0  MonYoyoObj::vf334  size=328  [class]
void __thiscall MonYoyoObj::vf334(int *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float10 fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined *puVar10;
  undefined4 uVar11;
  
  BehaviorEmBase::vf334(param_2,param_3);
  iVar1 = FUN_00ac8a30();
  param_1[0x373] = param_1[0x373] | *(uint *)(iVar1 + 4);
  FUN_009fd240();
  FUN_00ac8d40(1);
  if (param_3 != (int *)0x0) {
    puVar10 = &DAT_01be9ca0;
    (**(code **)(*param_3 + 4))(&DAT_01be9ca0);
    iVar1 = FUN_00dd6d80(puVar10);
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00acdea0();
      if (piVar2 != (int *)0x0) {
        puVar10 = &DAT_01b34f68;
        (**(code **)(*piVar2 + 4))(&DAT_01b34f68);
        iVar1 = FUN_00dd6d80(puVar10);
        if ((iVar1 != 0) && (piVar2 != param_1)) {
          uVar3 = FUN_00a8cae0();
          uVar4 = FUN_00a8cad0(uVar3);
          uVar5 = FUN_00a8cac0(uVar4);
          uVar6 = FUN_00a8cab0(uVar5);
          FUN_00a8caf0(uVar6,uVar5,uVar4,uVar3);
          uVar11 = 0x3f800000;
          uVar9 = 0xbf800000;
          uVar3 = FUN_00a95d20(0);
          uVar8 = 0x3f800000;
          uVar6 = 0;
          uVar5 = 0;
          uVar4 = FUN_00a95df0(0);
          FUN_00a9e290(uVar4,uVar5,uVar6,uVar8,uVar3,uVar9,uVar11);
          fVar7 = (float10)FUN_00a958c0(0);
          FUN_00a92f90();
          iVar1 = FUN_00e26e90();
          if (iVar1 != 0) {
            Animation::Motion::Unit::setCurrentTime(0,(float)fVar7);
          }
        }
      }
    }
  }
  iVar1 = FUN_00a7c800();
  param_1[0x372] = **(int **)(iVar1 + 0x330);
  return;
}

// 0052F6A0  MonYoyoObj::vf44  size=196  [class]
void __fastcall MonYoyoObj::vf44(int param_1)

{
  int iVar1;
  
  FUN_00dd7270();
  FUN_00900ca0();
  FUN_00eaa6e0(0x3f800000,0);
  FUN_00900ca0();
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
  FUN_00a8c820();
  FUN_00a9d8a0();
  if (*(int *)(param_1 + 0x67c) != 0) {
    *(undefined4 *)(param_1 + 0x684) = 0;
    if (*(int *)(param_1 + 0x688) != 0) {
      FUN_00dd48d0(*(int *)(param_1 + 0x67c),0);
      *(undefined4 *)(param_1 + 0x688) = 0;
    }
    *(undefined4 *)(param_1 + 0x67c) = 0;
    *(undefined4 *)(param_1 + 0x680) = 0;
  }
  BehaviorEmBase::vf44();
  return;
}

// 0052F770  MonYoyoObj::vf48  size=677  [class]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall MonYoyoObj::vf48(int *param_1)

{
  float *pfVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  float10 fVar6;
  undefined4 uStack_178;
  int *piStack_174;
  undefined1 auStack_15c [12];
  undefined1 local_150 [24];
  float fStack_138;
  float fStack_134;
  float fStack_130;
  undefined1 auStack_128 [292];
  
  piStack_174 = (int *)0x52f786;
  iVar4 = FUN_00c13920();
  if (iVar4 == 0) {
LAB_0052f7ce:
    piVar5 = (int *)0x0;
  }
  else {
    piStack_174 = (int *)0x52f78f;
    piVar5 = (int *)FUN_00c13920();
    piStack_174 = (int *)0x0;
    uStack_178 = 0x52f79a;
    iVar4 = (**(code **)(*piVar5 + 0x28))();
    if (iVar4 == 0) goto LAB_0052f7ce;
    piStack_174 = (int *)0x52f7a5;
    piVar5 = (int *)FUN_00a7c8a0();
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piStack_174 = (int *)&DAT_01be9db8;
      uStack_178 = 0x52f7bd;
      (**(code **)(*piVar5 + 4))();
      uStack_178 = 0x52f7c4;
      iVar4 = FUN_00dd6d80();
      piVar5 = (int *)(-(uint)(iVar4 != 0) & (uint)piVar5);
    }
  }
  piStack_174 = param_1 + 4;
  uStack_178 = 0;
  D3DXMatrixInverse(local_150);
  pfVar1 = (float *)(param_1 + 0x624);
  D3DXVec3TransformNormal(pfVar1,piVar5 + 0x10,auStack_15c);
  *pfVar1 = *pfVar1 + fStack_138;
  param_1[0x625] = (int)((float)param_1[0x625] + fStack_134);
  param_1[0x626] = (int)((float)param_1[0x626] + fStack_130);
  param_1[0x244] = _DAT_01be942c;
  if ((piVar5 != (int *)0x0) &&
     ((iVar4 = (**(code **)(*piVar5 + 0x32c))(), iVar4 != 0 || (0.0 < (float)piVar5[0xd07])))) {
    FUN_00a92fb0();
    fVar6 = (float10)FUN_00e049b0();
    param_1[0x244] = (int)(float)fVar6;
  }
  (**(code **)(*param_1 + 0x32c))();
  FUN_004105d0();
  if (piVar5 != (int *)0x0) {
    FUN_00b88d00(auStack_128);
  }
  if (0.0 < (float)param_1[0x62a]) {
    bVar3 = true;
    if (param_1[0x62b] == 1) {
      iVar4 = (**(code **)(*piVar5 + 0x32c))();
      if (iVar4 != 0) {
        param_1[0x62b] = param_1[0x62b] + 1;
      }
    }
    else if ((param_1[0x62b] == 2) && (iVar4 = (**(code **)(*piVar5 + 0x32c))(), iVar4 == 0)) {
      param_1[0x62a] = -0x40800000;
      param_1[0x62b] = 0;
      param_1[0x62c] = 0;
      bVar3 = false;
      param_1[0x62e] = 0;
    }
    if (param_1[0x62b] == 1) {
      if (param_1[0x62c] == 0) {
        if (0.0 < (float)piVar5[0xd07]) {
          param_1[0x62c] = 1;
        }
      }
      else if ((param_1[0x62c] == 1) && ((float)piVar5[0xd07] <= 0.0)) {
        param_1[0x62b] = 0;
        param_1[0x62a] = -0x40800000;
        param_1[0x62c] = 0;
        param_1[0x62e] = 0;
        goto LAB_0052f9af;
      }
    }
    if (bVar3) {
      uStack_178 = 0;
      piStack_174 = (int *)0xc3960000;
      iVar4 = FUN_00c593a0(param_1[0x13c],0xffffffff,&uStack_178,0x44160000,0x44480000,0x1e,4);
      *(undefined4 *)(iVar4 + 0x40) = 0x3f99999a;
      *(undefined4 *)(iVar4 + 0x48) = 0;
      *(undefined4 *)(iVar4 + 0x44) = 0x3e99999a;
    }
  }
LAB_0052f9af:
  if (0.0 < (float)param_1[0x62a] != ((float)param_1[0x62a] == 0.0)) {
    fVar2 = (float)param_1[0x62a] - (float)param_1[0x244];
    param_1[0x62a] = (int)fVar2;
    if (fVar2 < 0.0 != (fVar2 == 0.0)) {
      param_1[0x62a] = -0x40800000;
      param_1[0x62b] = 0;
      param_1[0x62c] = 0;
      param_1[0x62e] = 0;
      BehaviorEmBase::vf48();
      return;
    }
  }
  BehaviorEmBase::vf48();
  return;
}

// 0052FA20  FUN_0052fa20  size=382  [callgraph]
void __fastcall FUN_0052fa20(int param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  float10 fVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  iVar2 = FUN_00c13920();
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_00c13920();
    iVar2 = (**(code **)(*piVar3 + 0x28))(0);
    if (iVar2 != 0) {
      piVar3 = (int *)FUN_00a7c8a0();
      if (piVar3 == (int *)0x0) {
        uVar4 = 0;
      }
      else {
        puVar6 = &DAT_01be9db8;
        (**(code **)(*piVar3 + 4))(&DAT_01be9db8);
        iVar2 = FUN_00dd6d80(puVar6);
        uVar4 = -(uint)(iVar2 != 0) & (uint)piVar3;
      }
      goto LAB_0052fa75;
    }
  }
  uVar4 = 0;
LAB_0052fa75:
  iVar2 = FUN_00a12210(0);
  if (iVar2 != 0) {
    fVar1 = *(float *)(iVar2 + 0x90);
    fVar5 = (float10)FUN_00dde300(0,*(float *)(param_1 + 0x1850) * 0.2);
    fVar5 = (float10)FUN_00ddba30((float)((fVar5 + (float10)*(float *)(param_1 + 0x1850)) *
                                          (float10)0.017453292 *
                                          (float10)*(float *)(param_1 + 0x910) + (float10)fVar1));
    *(float *)(iVar2 + 0x90) = (float)fVar5;
  }
  fVar5 = (float10)FUN_00fdc1f0();
  *(float *)(param_1 + 0x1850) =
       (float)(((float10)*(float *)(param_1 + 0x1854) - (float10)*(float *)(param_1 + 0x1850)) *
               fVar5 + (float10)*(float *)(param_1 + 0x1850));
  if ((*(int *)(param_1 + 0x61c) != 0) && (*(int *)(uVar4 + 0x3e1c) != 0)) {
    FUN_00a8caf0(4,0,0,0);
    return;
  }
  if (uVar4 != 0) {
    FUN_00b8c350(0x41700000);
  }
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar12 = 0x3f800000;
    uVar11 = 0xbf800000;
    *(undefined4 *)(param_1 + 0x61c) = 1;
    uVar10 = 0;
    uVar9 = 0x3f800000;
    uVar8 = 0;
    uVar7 = 0;
    puVar6 = &DAT_01640f3c;
    FUN_00a92f90(&DAT_01640f3c,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00e3ff90(puVar6,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12);
    *(undefined4 *)(param_1 + 0x18a8) = 0xbf800000;
    *(undefined4 *)(param_1 + 0x18b4) = 1;
  }
  return;
}

// 00534A80  MonYoyoObj::vf32C  size=482  [class]
undefined4 __fastcall MonYoyoObj::vf32C(int *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  float10 fVar9;
  undefined1 local_260 [144];
  uint local_1d0;
  int local_1cc;
  int local_160 [12];
  float local_130;
  
  param_1[0x1a1] = 0;
  FUN_00ac2080(0);
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x630);
  if (param_1[0x636] != 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  iVar7 = param_1[0x19f];
  bVar3 = false;
  iVar5 = param_1[0x1a1] * 0x150 + iVar7;
  FUN_00445db0();
  FUN_004105d0();
  iVar4 = -1;
  bVar2 = false;
  if (iVar7 != iVar5) {
    do {
      iVar1 = *(int *)(iVar7 + 4);
      if (iVar4 <= iVar1) {
        FUN_00448f50(iVar7);
        bVar2 = true;
        iVar4 = iVar1;
      }
      iVar7 = iVar7 + 0x150;
    } while (iVar7 != iVar5);
    if (bVar2) {
      FUN_0043e160(local_160);
      if ((((local_160[0] == 0) || (local_160[0] == 1)) || (local_160[0] == 2)) ||
         ((local_160[0] == 0x1b0 || (local_160[0] == 0x147)))) {
        uVar8 = 0;
      }
      else {
        uVar8 = 0;
        iVar7 = FUN_00a81330();
        if (iVar7 != 0) {
          uVar8 = FUN_00a7c8a0();
        }
        param_1[0x21c] = -1;
        uVar6 = 0x8001;
        fVar9 = (float10)FUN_00ddba30(local_130 - (float)param_1[0x25]);
        param_1[0x245] = (int)(float)fVar9;
        iVar7 = FUN_00ac8ca0(local_260);
        if (((iVar7 != 0) && (local_1cc != 0)) &&
           ((param_1[0x62d] != 0 && ((local_1d0 & 0x10000) == 0)))) {
          uVar6 = 0x8101;
          bVar3 = true;
        }
        (**(code **)(*param_1 + 0x198))(uVar8,local_160,uVar6);
        uVar8 = 1;
      }
      if ((local_1cc != 0) && (bVar3)) {
        FUN_00ac8d00(param_1,local_260,0);
      }
      if (param_1[0x636] != 0) {
        LeaveCriticalSection(lpCriticalSection);
      }
      return uVar8;
    }
  }
  if (param_1[0x636] != 0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  return 0;
}

// 00534C70  FUN_00534c70  size=745  [callgraph]
void __fastcall FUN_00534c70(int param_1)

{
  int *piVar1;
  float fVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  float fStack_a4;
  undefined4 local_98;
  undefined4 local_90;
  float local_8c;
  float local_88;
  float fStack_84;
  undefined1 auStack_80 [16];
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined1 local_50 [76];
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    *(undefined4 *)(param_1 + 0x61c) = 1;
    *(undefined4 *)(param_1 + 0x928) = 0x43340000;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) goto LAB_00534ecd;
  fVar2 = *(float *)(param_1 + 0x928) - *(float *)(param_1 + 0x910);
  *(float *)(param_1 + 0x928) = fVar2;
  if (fVar2 < 0.0) {
    sVar3 = FUN_00dde2d0(0,0x3c);
    *(float *)(param_1 + 0x928) = (float)(int)sVar3 + 30.0;
    local_98 = 0x3f800000;
    sVar3 = FUN_00dde2d0(0,1);
    if (sVar3 != 0) {
      local_98 = 0xbf800000;
    }
    sVar3 = FUN_00dde2d0(0xfffffffb,0xfffffffc);
    sVar4 = FUN_00dde2d0(0xfffffffe,2);
    local_88 = (float)(int)sVar4;
    local_90 = local_98;
    local_8c = (float)(int)sVar3;
    iVar5 = FUN_00a12210(0);
    D3DXVec3TransformNormal(&local_90,&local_90,iVar5 + 0x10);
    sVar3 = FUN_00dde2d0(0xffffffe2,0x1e);
    sVar4 = FUN_00dde2d0(0xffffffe2,0x1e);
    fStack_68 = (float)(int)sVar4 * 0.017453292;
    fStack_6c = (float)(int)sVar3 * 0.017453292;
    sVar3 = FUN_00dde2d0(0xffffffe2,0x1e);
    fStack_64 = (float)(int)sVar3 * 0.017453292;
    sVar3 = FUN_00dde2d0(0,0xffffffff);
    sVar4 = FUN_00dde2d0(0xfffffffd,3);
    fStack_84 = (float)(int)sVar4;
    local_8c = fStack_a4 * 0.5;
    local_88 = (float)(int)sVar3;
    iVar5 = FUN_00a12210(0);
    D3DXVec3TransformNormal(&local_8c,&local_8c,iVar5 + 0x10);
    sVar3 = FUN_00dde2d0(0xfffffff6,10);
    sVar4 = FUN_00dde2d0(0xfffffff6,10);
    fStack_68 = (float)(int)sVar4;
    fStack_6c = 0.0;
    fStack_70 = (float)(int)sVar3;
    FUN_0052fba0(&local_90,auStack_60,auStack_80,&fStack_70);
  }
LAB_00534ecd:
  FUN_004066f0();
  if (*(int *)(param_1 + 0x1864) != 0) {
    D3DXMatrixRotationZ(local_50,0x3fc90fdb);
    D3DXMatrixMultiply(auStack_58,auStack_58,param_1 + 0x10);
    Phantom::setTransform(local_50);
  }
  if (DAT_01885d68 != 1) {
    piVar1 = (int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (DAT_01b35fac != 0)) && (DAT_01885db8 == 0)) {
      FUN_00dd7320();
    }
  }
  return;
}

// 00538D00  MonYoyoObj::vf40  size=934  [class]
/* WARNING: Type propagation algorithm not settling */

undefined4 __fastcall MonYoyoObj::vf40(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int local_184 [5];
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  
  iVar3 = BehaviorEmBase::vf40();
  if (iVar3 != 0) {
    if (*(int *)(param_1 + 0x4b0) == 0xf00d5) {
      FUN_00acf600(0xf00df,"YoyoBody");
    }
    *(uint *)(param_1 + 0x364) = *(uint *)(param_1 + 0x364) & 0xfffffffd;
    FUN_00dd7240();
    uVar7 = 2;
    FUN_00a92fb0(2);
    FUN_00e08640(uVar7);
    *(undefined4 *)(param_1 + 0x15e0) = 0x43e10000;
    *(undefined4 *)(param_1 + 0x15d4) = 1;
    local_184[1] = 1;
    *(undefined4 *)(param_1 + 0x15e4) = 0x43340000;
    local_184[2] = 1;
    local_184[3] = 1;
    *(undefined4 *)(param_1 + 0x15d8) = 0;
    *(undefined4 *)(param_1 + 0x15dc) = 0;
    *(undefined4 *)(param_1 + 0x18a0) = 0;
    iVar3 = lib::StaticArray<Behavior::EffectIntegrationContainer,32>::
            StaticArray<Behavior::EffectIntegrationContainer,32>(local_184 + 1);
    if (iVar3 != 0) {
      *(undefined4 *)(param_1 + 0x7b4) = 0;
      uVar7 = FUN_00de3850(0,"_col.hkx",0);
      iVar3 = FUN_00dd3500(0x3c,&DAT_01b7bd48);
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = RigidBodyCollection::RigidBodyCollection_2();
      }
      *(int *)(param_1 + 0x7b0) = iVar3;
      if (iVar3 != 0) {
        local_184[0] = *(int *)(param_1 + 0x4f0);
        uVar4 = FUN_00de3ee0(uVar7);
        uVar7 = FUN_00de3cf0(uVar7);
        iVar3 = FUN_008f6410(local_184[0],uVar7,uVar4);
        if (iVar3 != 0) {
          FUN_008f2cd0(0);
          FUN_008f1600(0x80000000);
          FUN_008f1600(0x40);
          FUN_008f1600(0x20);
          uVar7 = (**(code **)(**(int **)(param_1 + 0x7b0) + 0x14))(local_184,0);
          FUN_00910ab0(uVar7);
        }
      }
      FUN_008f40f0(param_1);
      FUN_00410540(0x10,&DAT_01b7bd48);
      lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>_2(8);
      Behavior::addDefenseCollisionFromRigidBody_2(*(undefined4 *)(param_1 + 0x7b0),2);
      lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_2(0);
      FUN_00ac8e10(0);
      FUN_00ac8eb0(1,1);
      if (*(int *)(param_1 + 0x370) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x370) + 0xc) = 1;
      }
      FUN_00ac8d40(1);
      *(undefined4 *)(param_1 + 0x1854) = 0;
      *(undefined4 *)(param_1 + 0x1850) = 0;
      *(undefined4 *)(param_1 + 0x874) = 10;
      *(undefined4 *)(param_1 + 0x18a8) = 0;
      *(undefined4 *)(param_1 + 0x870) = 10;
      *(undefined4 *)(param_1 + 0x15e8) = 0;
      *(undefined4 *)(param_1 + 0x18ac) = 0;
      *(undefined4 *)(param_1 + 0x18b0) = 0;
      *(undefined4 *)(param_1 + 0x18b4) = 0;
      *(undefined4 *)(param_1 + 0x1880) = 0;
      *(undefined4 *)(param_1 + 0x1884) = 0;
      *(undefined4 *)(param_1 + 0x1888) = 0;
      *(undefined4 *)(param_1 + 0x640) = 2;
      lib::StaticArray<Collision*,250>::StaticArray<Collision*,250>(8);
      uStack_170 = 0;
      uStack_16c = 0x40600000;
      uStack_168 = 0;
      local_184[1] = 0;
      local_184[2] = 0xc0600000;
      local_184[3] = 0;
      piVar5 = (int *)FUN_00900480();
      local_184[0] = *piVar5;
      uVar7 = FUN_009f8b40(0);
      uVar7 = (**(code **)(local_184[0] + 0xc))
                        (param_1 + 0x40,&uStack_170,local_184 + 1,0x40e9999a,7,uVar7);
      lib::AllocatedArray<hkpPhantomListener*>::AllocatedArray<hkpPhantomListener*>(uVar7);
      FUN_00900bd0();
      *(undefined4 *)(param_1 + 0x1690) = 0;
      iVar3 = 0;
      *(undefined2 *)(param_1 + 0x168c) = 0;
      *(undefined4 *)(param_1 + 0x1694) = 0;
      if (*(int *)(param_1 + 0x370) != 0) {
        FUN_00a1abe0(1);
      }
      iVar8 = 0;
      if (0 < *(short *)(param_1 + 0x324)) {
        do {
          iVar2 = *(int *)(param_1 + 800);
          iVar6 = *(int *)(*(int *)(iVar2 + 0x60 + iVar3) + 0x40);
          if ((iVar6 != 0) && (iVar6 = FUN_00fdbbd0(iVar6,"damage"), iVar6 != 0)) {
            puVar1 = (uint *)(iVar2 + 0x38 + iVar3);
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          iVar8 = iVar8 + 1;
          iVar3 = iVar3 + 0x70;
        } while (iVar8 < *(short *)(param_1 + 0x324));
      }
      FUN_00a8caf0(0,0,0,0);
      FUN_004039a0(0,param_1,0);
      if (param_1 + 0x1750 != 0) {
        FUN_00dffb20(param_1 + 0x1750);
      }
      FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_184 + 2);
      return 1;
    }
  }
  return 0;
}

// 005390B0  FUN_005390b0  size=652  [callgraph]
void __thiscall FUN_005390b0(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined *puVar7;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float local_50;
  float local_4c;
  float fStack_48;
  float fStack_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float fStack_2c;
  float fStack_24;
  float fStack_18;
  
  iVar4 = FUN_00c13920();
  if (iVar4 != 0) {
    piVar5 = (int *)FUN_00c13920();
    iVar4 = (**(code **)(*piVar5 + 0x28))(0);
    if ((iVar4 != 0) && (piVar5 = (int *)FUN_00a7c8a0(), piVar5 != (int *)0x0)) {
      puVar7 = &DAT_01be9db8;
      (**(code **)(*piVar5 + 4))(&DAT_01be9db8);
      iVar4 = FUN_00dd6d80(puVar7);
      uVar6 = -(uint)(iVar4 != 0) & (uint)piVar5;
      goto LAB_00539106;
    }
  }
  uVar6 = 0;
LAB_00539106:
  local_40 = *(float *)(uVar6 + 0x40);
  local_38 = *(float *)(uVar6 + 0x48);
  local_34 = *(float *)(uVar6 + 0x4c);
  local_3c = *(float *)(uVar6 + 0x44) + 1.8;
  local_50 = *(float *)(param_1 + 0x40);
  local_4c = *(float *)(param_1 + 0x44);
  fStack_48 = *(float *)(param_1 + 0x48);
  fStack_44 = *(float *)(param_1 + 0x4c);
  fVar1 = local_40 - local_50;
  fStack_2c = local_3c - local_4c;
  fVar2 = local_38 - fStack_48;
  fStack_24 = local_34 - fStack_44;
  fStack_60 = *param_2 + local_50;
  fStack_5c = param_2[1] + local_4c;
  fStack_58 = param_2[2] + fStack_48;
  fStack_54 = param_2[3] + fStack_44;
  fStack_18 = fStack_58 - fStack_48;
  fVar3 = (fStack_18 * fVar2 + (fStack_5c - local_4c) * fStack_2c + fVar1 * (fStack_60 - local_50))
          / (fVar2 * fVar2 + fVar1 * fVar1 + fStack_2c * fStack_2c);
  fStack_70 = fStack_60 - (fVar1 * fVar3 + local_50);
  fStack_6c = fStack_5c - (fStack_2c * fVar3 + local_4c);
  fStack_68 = fStack_58 - (fVar2 * fVar3 + fStack_48);
  fStack_64 = fStack_54 - (fStack_24 * fVar3 + fStack_44);
  fVar1 = fStack_68 * fStack_68 + fStack_70 * fStack_70 + fStack_6c * fStack_6c;
  if (fVar1 < 0.0 == (fVar1 == 0.0)) {
    FUN_00ddf460(&fStack_70,&fStack_70);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    fStack_68 = 0.0;
    fStack_70 = 0.0;
    fStack_6c = 1.0;
  }
  fStack_70 = fStack_70 * 2.0;
  fStack_6c = fStack_6c * 2.0;
  fStack_68 = fStack_68 * 2.0;
  fStack_64 = fStack_64 * 2.0;
  fStack_60 = (local_50 + local_40) * 0.5 + fStack_70;
  fStack_5c = (local_4c + local_3c) * 0.5 + fStack_6c;
  fStack_58 = fStack_68 + (fStack_48 + local_38) * 0.5;
  fStack_54 = (fStack_44 + local_34) * 0.5 + fStack_64;
  FUN_00534f60(param_1 + 0x1600,&local_50,&fStack_60,&local_40);
  *(undefined4 *)(param_1 + 0x1660) = 0;
  return;
}

// 00539340  FUN_00539340  size=342  [callgraph]
void __fastcall FUN_00539340(int param_1)

{
  undefined4 uVar1;
  undefined4 local_160 [4];
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined2 local_140;
  undefined4 local_13c;
  uint local_c4;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_28;
  
  if (*(int *)(param_1 + 0x15dc) == 0) {
    FUN_00eaa6e0(0x41f00000,0);
    FUN_00eaa6e0(0x3f800000,0);
    FUN_004039a0(10,param_1,0);
    FUN_00a8c8b0(*(undefined4 *)(param_1 + 0x4b0),local_160);
    *(undefined4 *)(param_1 + 0x15dc) = 1;
    *(undefined4 *)(param_1 + 0x4e4) = 1;
    FUN_00410710();
    local_13c = *(undefined4 *)(param_1 + 0x4f0);
    local_40 = 0x40400000;
    local_c4 = local_c4 | 0x100000;
    local_3c = 0x3f800000;
    local_160[0] = 1;
    local_38 = 0x3f800000;
    local_150 = 0x10c;
    local_14c = 0x14;
    local_30 = 0x3d888889;
    local_144 = 0;
    local_148 = 0;
    local_140 = 0xa00;
    local_34 = 1;
    uVar1 = FUN_00a7c7f0();
    FUN_00a7c960(uVar1);
    local_50 = *(undefined4 *)(param_1 + 0x40);
    local_4c = *(undefined4 *)(param_1 + 0x44);
    local_48 = *(undefined4 *)(param_1 + 0x48);
    local_44 = *(undefined4 *)(param_1 + 0x4c);
    local_28 = FUN_009f8b40();
    Behavior::createAttackImpactWave(local_160);
  }
  return;
}

// 0053C5E0  FUN_0053c5e0  size=1192  [callgraph]
void __fastcall FUN_0053c5e0(int param_1)

{
  float fVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  float unaff_EBX;
  float10 fVar6;
  float local_3c;
  float local_30;
  float local_2c;
  float local_28;
  float fStack_24;
  
  iVar4 = FUN_00a12210(0);
  if (iVar4 != 0) {
    fVar1 = *(float *)(iVar4 + 0x90);
    fVar6 = (float10)FUN_00dde300(0,*(float *)(param_1 + 0x1850) * 0.2);
    fVar6 = (float10)FUN_00ddba30((float)((fVar6 + (float10)*(float *)(param_1 + 0x1850)) *
                                          (float10)0.017453292 *
                                          (float10)*(float *)(param_1 + 0x910) + (float10)fVar1));
    *(float *)(iVar4 + 0x90) = (float)fVar6;
  }
  fVar6 = (float10)FUN_00fdc1f0();
  iVar4 = *(int *)(param_1 + 0x61c);
  *(float *)(param_1 + 0x1850) =
       (float)(((float10)*(float *)(param_1 + 0x1854) - (float10)*(float *)(param_1 + 0x1850)) *
               fVar6 + (float10)*(float *)(param_1 + 0x1850));
  if (iVar4 == 0) {
    *(undefined4 *)(param_1 + 0x1854) = 0x41000000;
    *(undefined4 *)(param_1 + 0x920) = 0x42700000;
    *(undefined4 *)(param_1 + 0x924) = 0x42700000;
    *(undefined4 *)(param_1 + 0x61c) = 1;
    *(undefined4 *)(param_1 + 0x944) = 0;
    *(undefined4 *)(param_1 + 0x928) = 0;
    FUN_00e5e0c0("em01a0_se_atk_cars_hit_ground_stop",param_1,0xffffffff,0);
  }
  else if (iVar4 != 1) {
    if (iVar4 != 2) {
      return;
    }
    *(undefined4 *)(param_1 + 0x61c) = 3;
    return;
  }
  *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
  *(float *)(param_1 + 0x924) = *(float *)(param_1 + 0x924) - *(float *)(param_1 + 0x910);
  fVar1 = *(float *)(param_1 + 0x928) - *(float *)(param_1 + 0x910);
  *(float *)(param_1 + 0x928) = fVar1;
  if (fVar1 < 0.0) {
    *(undefined4 *)(param_1 + 0x928) = 0x41a00000;
    local_3c = 1.0;
    sVar2 = FUN_00dde2d0(0,1);
    if (sVar2 != 0) {
      local_3c = -1.0;
    }
    sVar2 = FUN_00dde2d0(0xfffffffd,3);
    sVar3 = FUN_00dde2d0(0xfffffffd,3);
    local_28 = (float)(int)sVar3;
    local_30 = local_3c + local_3c;
    local_2c = (float)(int)sVar2;
    iVar4 = FUN_00a12210(0);
    D3DXVec3TransformNormal(&local_30,&local_30,iVar4 + 0x10);
    FUN_00dde2d0(0xffffffe2,0x1e);
    FUN_00dde2d0(0xffffffe2,0x1e);
    FUN_00dde2d0(0xffffffe2,0x1e);
    sVar2 = FUN_00dde2d0(0,5);
    fVar1 = (float)(int)sVar2 * unaff_EBX;
    sVar2 = FUN_00dde2d0(0xfffffff6,0xffffffff);
    unaff_EBX = (float)(int)sVar2;
    sVar2 = FUN_00dde2d0(0,5);
    fStack_24 = (float)(int)sVar2;
    local_2c = fVar1;
    local_28 = unaff_EBX;
    iVar4 = FUN_00a12210(0);
    D3DXVec3TransformNormal(&local_2c,&local_2c,iVar4 + 0x10);
    FUN_00dde2d0(0xffffffe2,0x1e);
    FUN_00dde2d0(0xffffffe2,0x1e);
  }
  if (*(float *)(param_1 + 0x920) < 0.0) {
    FUN_00940b10();
    FUN_00539340();
    iVar4 = 0x14;
    do {
      local_3c = 1.0;
      sVar2 = FUN_00dde2d0(0,1);
      if (sVar2 != 0) {
        local_3c = -1.0;
      }
      sVar2 = FUN_00dde2d0(0xfffffffb,5);
      sVar3 = FUN_00dde2d0(0xfffffffb,5);
      local_28 = (float)(int)sVar3;
      local_30 = local_3c + local_3c;
      local_2c = (float)(int)sVar2;
      iVar5 = FUN_00a12210(0);
      D3DXVec3TransformNormal(&local_30,&local_30,iVar5 + 0x10);
      FUN_00dde2d0(0xffffffe2,0x1e);
      FUN_00dde2d0(0xffffffe2,0x1e);
      FUN_00dde2d0(0xffffffe2,0x1e);
      sVar2 = FUN_00dde2d0(0,5);
      fVar1 = (float)(int)sVar2 * unaff_EBX;
      sVar2 = FUN_00dde2d0(0xfffffffb,0xfffffffd);
      unaff_EBX = (float)(int)sVar2;
      sVar2 = FUN_00dde2d0(0,5);
      fStack_24 = (float)(int)sVar2;
      local_2c = fVar1;
      local_28 = unaff_EBX;
      iVar5 = FUN_00a12210(0);
      D3DXVec3TransformNormal(&local_2c,&local_2c,iVar5 + 0x10);
      FUN_00dde2d0(0xffffffe2,0x1e);
      FUN_00dde2d0(0xffffffe2,0x1e);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  if ((*(float *)(param_1 + 0x924) < 0.0) && (*(int *)(param_1 + 0x944) == 0)) {
    *(undefined4 *)(param_1 + 0x944) = 1;
    FUN_00940b10();
  }
  return;
}

// 0053CA90  MonYoyoObj::vf1A4  size=141  [class]
void __thiscall MonYoyoObj::vf1A4(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  
  Bh0064::vf1A4(param_2,param_3);
  iVar1 = FUN_00a81330();
  iVar2 = param_1;
  if (iVar1 != 0) {
    iVar2 = FUN_00a7c8a0(0xffffffff,0);
  }
  FUN_00e5e0c0("em01a0_se_atk_cars_hit",iVar2);
  *(undefined4 *)(param_1 + 0x1858) = 1;
  if ((param_3 & 0xe) != 0) {
    *(undefined4 *)(param_1 + 0x185c) = 1;
  }
  if (*(int *)(param_1 + 0x4b0) != 0xf00d5) {
    FUN_00eaa6e0(0x3f800000,0);
    *(undefined4 *)(param_1 + 0x15dc) = 1;
    FUN_00539340();
  }
  return;
}

// 0053F5F0  MonYoyoObj::vf4C  size=337  [class]
void __fastcall MonYoyoObj::vf4C(int *param_1)

{
  float fVar1;
  int iVar2;
  
  if (param_1[0x577] == 0) {
    FUN_00a5e650();
    BehaviorEmBase::vf4C();
    switch(param_1[0x186]) {
    case 0:
      FUN_00534c70();
      break;
    case 1:
      FUN_0051bc80();
      break;
    case 2:
      hkpAllCdPointCollector::hkpAllCdPointCollector_2();
      break;
    case 3:
      FUN_0052fa20();
      break;
    case 4:
      FUN_0053c5e0();
    }
    iVar2 = FUN_00a12210(0);
    param_1[0x14] = *(int *)(iVar2 + 0x40);
    param_1[0x15] = *(int *)(iVar2 + 0x44);
    param_1[0x16] = *(int *)(iVar2 + 0x48);
    param_1[0x17] = *(int *)(iVar2 + 0x4c);
  }
  else {
    if (param_1[0x1ec] != 0) {
      (**(code **)(*param_1 + 0x20))();
      FUN_00a9d8a0();
      if ((int *)param_1[0x1ec] != (int *)0x0) {
        (**(code **)(*(int *)param_1[0x1ec] + 0xdc))(0);
      }
      if (((int *)param_1[0x1ec] != (int *)0x0) &&
         (iVar2 = (**(code **)(*(int *)param_1[0x1ec] + 8))(), iVar2 != 0)) {
        HkRemovePhysicsSystem::HkRemovePhysicsSystem();
        if ((int *)param_1[0x1ec] != (int *)0x0) {
          (**(code **)(*(int *)param_1[0x1ec] + 4))(1);
          param_1[0x1ec] = 0;
        }
      }
      param_1[0x1ec] = 0;
    }
    fVar1 = (float)param_1[0x579];
    param_1[0x579] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      param_1[0x139] = 1;
    }
    fVar1 = (float)param_1[0x578];
    param_1[0x578] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] < 0.0) {
      param_1[0x577] = 0;
      FUN_009fdde0();
      return;
    }
  }
  return;
}

// 00AB1260  MonYoyoObj::vf04  size=6  [class]
undefined * MonYoyoObj::vf04(void)

{
  return &DAT_01b34f68;
}

// 00AB1270  MonYoyoObj::vf24  size=7  [class]
float10 __fastcall MonYoyoObj::vf24(int param_1)

{
  return (float10)*(float *)(param_1 + 0x910);
}

// 00AB9740  MonYoyoObj::vf00  size=76  [class]
undefined4 __thiscall MonYoyoObj::vf00(undefined4 param_1,byte param_2)

{
  FUN_00dd7270();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  cXml::cXml_7();
  cEnemyCautionStateManager::cEnemyCautionStateManager_3();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

