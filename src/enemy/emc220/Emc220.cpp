// src/enemy/emc220/Emc220.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 0081FDC0..00AB9F60, 250 functions

#include "mgrr.h"
#include "Emc220.h"

// 0081FDC0  FUN_0081fdc0  size=71  [callgraph]
void __thiscall FUN_0081fdc0(int param_1,undefined4 param_2)

{
  float *pfVar1;
  undefined1 local_20 [28];
  
  pfVar1 = (float *)FUN_00a8b8a0(local_20,param_2);
  *(float *)(param_1 + 0x50) = *pfVar1 + *(float *)(param_1 + 0x50);
  *(float *)(param_1 + 0x54) = pfVar1[1] + *(float *)(param_1 + 0x54);
  *(float *)(param_1 + 0x58) = pfVar1[2] + *(float *)(param_1 + 0x58);
  *(float *)(param_1 + 0x5c) = pfVar1[3] + *(float *)(param_1 + 0x5c);
  return;
}

// 0081FF50  FUN_0081ff50  size=30  [callgraph]
undefined4 __thiscall FUN_0081ff50(int param_1,float param_2)

{
  if (param_2 < *(float *)(param_1 + 0x19d0)) {
    return 1;
  }
  return 0;
}

// 0081FF70  FUN_0081ff70  size=32  [callgraph]
undefined4 __thiscall FUN_0081ff70(int param_1,float param_2)

{
  if (*(float *)(param_1 + 0x19d0) < -param_2) {
    return 1;
  }
  return 0;
}

// 0081FFC0  FUN_0081ffc0  size=28  [callgraph]
void FUN_0081ffc0(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00a7c7f0();
  FUN_00a7c960(uVar1);
  return;
}

// 0081FFF0  Emc220::vf50  size=32  [class]
void __fastcall Emc220::vf50(int param_1)

{
  FUN_00a93170();
  if (*(int *)(param_1 + 0x7b0) != 0) {
    FUN_008f3cb0(param_1);
  }
  BehaviorEmBase::vf50();
  return;
}

// 00820010  Emc220::vf2F8  size=46  [class]
void __fastcall Emc220::vf2F8(int *param_1)

{
  if (param_1[0x294] != 0) {
    (**(code **)(*param_1 + 0x344))(7,0,1);
    param_1[0x1af] = 1;
  }
  E3_EnemyBoardDebrisSokushi::vf4C();
  return;
}

// 00820040  Emc220::vf268  size=32  [class]
undefined4 __thiscall Emc220::vf268(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  if (*param_4 != 9) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x1abc) = 0;
  return 1;
}

// 00820060  Emc220::vf228  size=17  [class]
undefined4 __fastcall Emc220::vf228(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x6ec) == 0) {
    return 0;
  }
  uVar1 = BehaviorEmBase::vf228();
  return uVar1;
}

// 00820080  Emc220::vf368  size=12  [class]
bool __fastcall Emc220::vf368(int param_1)

{
  return *(int *)(param_1 + 0x1aa8) != 0;
}

// 00820090  FUN_00820090  size=306  [between]
void __thiscall FUN_00820090(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0x1490) = *(undefined4 *)(param_2 + 0x1490);
  *(undefined4 *)(param_1 + 0x1494) = *(undefined4 *)(param_2 + 0x1494);
  *(undefined4 *)(param_1 + 0x1608) = *(undefined4 *)(param_2 + 0x1608);
  *(undefined4 *)(param_1 + 0x1618) = *(undefined4 *)(param_2 + 0x1618);
  *(undefined4 *)(param_1 + 0x161c) = *(undefined4 *)(param_2 + 0x161c);
  *(undefined4 *)(param_1 + 0x1828) = *(undefined4 *)(param_2 + 0x1828);
  *(undefined4 *)(param_1 + 0x1830) = *(undefined4 *)(param_2 + 0x1830);
  *(undefined4 *)(param_1 + 0x1840) = *(undefined4 *)(param_2 + 0x1840);
  *(undefined4 *)(param_1 + 0x1844) = *(undefined4 *)(param_2 + 0x1844);
  *(undefined4 *)(param_1 + 0x1478) = *(undefined4 *)(param_2 + 0x1478);
  *(undefined4 *)(param_1 + 0x147c) = *(undefined4 *)(param_2 + 0x147c);
  *(undefined4 *)(param_1 + 0x14a4) = *(undefined4 *)(param_2 + 0x14a4);
  *(undefined4 *)(param_1 + 0x14a8) = *(undefined4 *)(param_2 + 0x14a8);
  *(undefined4 *)(param_1 + 0x1950) = *(undefined4 *)(param_2 + 0x1950);
  *(undefined4 *)(param_1 + 0x1838) = *(undefined4 *)(param_2 + 0x1838);
  *(undefined4 *)(param_1 + 0x183c) = *(undefined4 *)(param_2 + 0x183c);
  *(undefined4 *)(param_1 + 0x1480) = *(undefined4 *)(param_2 + 0x1480);
  *(undefined4 *)(param_1 + 0x1890) = *(undefined4 *)(param_2 + 0x1890);
  *(undefined4 *)(param_1 + 0x187c) = *(undefined4 *)(param_2 + 0x187c);
  *(undefined4 *)(param_1 + 0x1884) = *(undefined4 *)(param_2 + 0x1884);
  *(undefined4 *)(param_1 + 0x1880) = *(undefined4 *)(param_2 + 0x1880);
  *(undefined4 *)(param_1 + 0x1894) = *(undefined4 *)(param_2 + 0x1894);
  *(undefined4 *)(param_1 + 0x19d8) = *(undefined4 *)(param_2 + 0x19d8);
  FID_conflict__memcpy((void *)(param_1 + 0x1208),(void *)(param_2 + 0x1208),0x50);
  return;
}

// 00820230  FUN_00820230  size=174  [between]
void __fastcall FUN_00820230(int param_1)

{
  undefined4 uVar1;
  int iVar2;
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
  local_20 = 0x160011;
  local_1c = 0x170012;
  local_18 = 0x180013;
  local_14 = 0x190014;
  local_10 = 0x20001b;
  local_c = 0x21001c;
  local_8 = 0x22001d;
  local_4 = 0x23001e;
  uVar1 = FUN_00dd3580(0x20,&DAT_01b7bd48);
  *(undefined4 *)(param_1 + 0x788) = uVar1;
  do {
    FUN_00a8c720(*(undefined2 *)(&local_20 + iVar2),*(undefined2 *)((int)&local_20 + iVar2 * 4 + 2))
    ;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 8);
  FUN_00a95e20(*(undefined4 *)(param_1 + 0x788),*(undefined4 *)(param_1 + 0x78c));
  return;
}

// 008202F0  FUN_008202f0  size=79  [between]
float10 __thiscall FUN_008202f0(int param_1,float *param_2)

{
  if (*(int *)(param_1 + 0x13f0) != 0) {
    return ((float10)param_2[2] - (float10)*(float *)(param_1 + 0x1408)) *
           (float10)*(float *)(param_1 + 0x1418) +
           (float10)*(float *)(param_1 + 0x1414) *
           ((float10)param_2[1] - (float10)*(float *)(param_1 + 0x1404)) +
           (float10)*(float *)(param_1 + 0x1410) *
           ((float10)*param_2 - (float10)*(float *)(param_1 + 0x1400));
  }
  return (float10)-1.0;
}

// 00820360  FUN_00820360  size=97  [between]
undefined4 __fastcall FUN_00820360(int param_1)

{
  float *pfVar1;
  float10 fVar2;
  undefined1 local_20 [28];
  
  if (*(int *)(param_1 + 0x1380) != 0) {
    pfVar1 = (float *)FUN_00a925a0(local_20);
    fVar2 = (float10)fcos((float10)1.0471975803375244);
    if ((float10)*(float *)(param_1 + 0x13a8) * (float10)pfVar1[2] +
        (float10)*(float *)(param_1 + 0x13a0) * (float10)*pfVar1 +
        (float10)*(float *)(param_1 + 0x13a4) * (float10)pfVar1[1] < -fVar2) {
      return 1;
    }
  }
  return 0;
}

// 008203D0  FUN_008203d0  size=183  [between]
float10 __thiscall FUN_008203d0(int param_1,undefined4 param_2,float param_3,float param_4)

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

// 00820490  FUN_00820490  size=195  [between]
float10 __thiscall
FUN_00820490(int param_1,undefined4 param_2,float param_3,float param_4,float param_5)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = (float10)FUN_00a8ec30(param_2);
  fVar1 = (float10)FUN_00ddba30((float)(fVar1 + (float10)param_3));
  if (param_4 != 0.0) {
    fVar2 = (float10)FUN_00ddba30((float)(fVar1 - (float10)*(float *)(param_1 + 0x94)));
    fVar3 = (float10)FUN_00fdc1f0();
    fVar2 = ((float10)1 - fVar3) * (float10)(float)fVar2;
    fVar3 = (float10)param_5;
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

// 00820560  FUN_00820560  size=36  [between]
void __thiscall FUN_00820560(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_008203d0(*(int *)(param_1 + 0xa84) + 0x40,param_2,param_3);
  return;
}

// 00820590  FUN_00820590  size=44  [between]
void __thiscall FUN_00820590(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00820490(*(int *)(param_1 + 0xa84) + 0x40,param_2,param_3,param_4);
  return;
}

// 008205C0  FUN_008205c0  size=37  [between]
float10 __thiscall FUN_008205c0(int param_1,undefined4 param_2)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00a8ec30(param_2);
  fVar1 = (float10)FUN_00ddba30((float)((float10)*(float *)(param_1 + 0x94) - fVar1));
  return ABS(fVar1);
}

// 008205F0  FUN_008205f0  size=40  [between]
float10 __fastcall FUN_008205f0(int param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00a8ec30(*(int *)(param_1 + 0xa84) + 0x40);
  fVar1 = (float10)FUN_00ddba30((float)((float10)*(float *)(param_1 + 0x94) - fVar1));
  return ABS(fVar1);
}

// 00820620  FUN_00820620  size=105  [between]
undefined4 __thiscall FUN_00820620(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  undefined1 local_20 [28];
  
  fVar1 = *param_2;
  fVar2 = *(float *)(param_1 + 0x40);
  fVar3 = param_2[1];
  fVar4 = *(float *)(param_1 + 0x44);
  fVar5 = param_2[2];
  fVar6 = *(float *)(param_1 + 0x48);
  pfVar7 = (float *)FUN_00a92640(local_20);
  if (pfVar7[2] * (fVar5 - fVar6) + (fVar1 - fVar2) * *pfVar7 + pfVar7[1] * (fVar3 - fVar4) < 0.0) {
    return 1;
  }
  return 0;
}

// 00820690  FUN_00820690  size=143  [between]
int __thiscall FUN_00820690(int *param_1,undefined4 param_2,float *param_3)

{
  int iVar1;
  float10 fVar2;
  
  fVar2 = (float10)FUN_00a8ec30(param_2);
  iVar1 = (**(code **)(*param_1 + 0x84))();
  fVar2 = (float10)FUN_00ddba30((float)fVar2 - *(float *)(iVar1 + 4));
  if (fVar2 <= (float10)2.1816616) {
    if ((float10)-2.1816616 <= fVar2) {
      if (fVar2 <= (float10)0) {
        iVar1 = 1;
      }
      else {
        iVar1 = 0;
      }
    }
    else {
      iVar1 = 3;
    }
  }
  else {
    iVar1 = 2;
  }
  fVar2 = (float10)FUN_00ddba30((float)(fVar2 - (float10)(float)(&DAT_016487d4)[iVar1]));
  *param_3 = (float)fVar2;
  return iVar1;
}

// 00820790  FUN_00820790  size=87  [between]
void __thiscall FUN_00820790(int *param_1,int param_2)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined1 local_20 [28];
  
  if (param_2 != 0) {
    param_1 = (int *)FUN_00a7c8a0();
  }
  if (param_1 != (int *)0x0) {
    FUN_00da9630(1,1);
    puVar2 = local_20;
    uVar1 = (**(code **)(*param_1 + 0x204))(puVar2,0);
    FUN_00da9660(1,uVar1,puVar2);
  }
  return;
}

// 008207F0  FUN_008207f0  size=52  [between]
undefined4 __fastcall FUN_008207f0(int param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(param_1 + 0x618);
  if (iVar1 < 0x60005) {
    if (iVar1 == 0x60004) {
      return 1;
    }
    if (iVar1 < 0x10000) {
      return 0;
    }
    if (iVar1 < 0x10002) {
      return 1;
    }
    bVar2 = iVar1 == 0x10010;
  }
  else {
    bVar2 = iVar1 == 0x70000;
  }
  if (bVar2) {
    return 1;
  }
  return 0;
}

// 00820890  FUN_00820890  size=135  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00820890(float *param_1)

{
  int iVar1;
  
  if ((_DAT_01b359b0 & 1) == 0) {
    _DAT_01b359b0 = _DAT_01b359b0 | 1;
    _DAT_01b359a0 = 0;
    _DAT_01b359a4 = 0;
    _DAT_01b359a8 = 0x40066666;
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      iVar1 = FUN_00a12210(0);
      if (iVar1 != 0) {
        D3DXVec3TransformNormal(param_1,&DAT_01b359a0,iVar1 + 0x10);
        *param_1 = *param_1 + *(float *)(iVar1 + 0x40);
        param_1[1] = *(float *)(iVar1 + 0x44) + param_1[1];
        param_1[2] = *(float *)(iVar1 + 0x48) + param_1[2];
      }
    }
  }
  return;
}

// 00820920  FUN_00820920  size=16  [between]
int __fastcall FUN_00820920(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00ac89d0();
  if (iVar1 == 0) {
    iVar1 = param_1;
  }
  return iVar1;
}

// 008209F0  FUN_008209f0  size=65  [between]
void __fastcall FUN_008209f0(int param_1)

{
  if (*(int *)(param_1 + 0x754) != 0) {
    FUN_00ac84d0(0xb);
  }
  if (*(int *)(param_1 + 0xe80) != 0) {
    FUN_00aa28e0();
    FUN_00fdbc60();
    return;
  }
  return;
}

// 00820AD0  FUN_00820ad0  size=145  [between]
/* WARNING: Removing unreachable block (ram,0x00820af3) */
/* WARNING: Removing unreachable block (ram,0x00820b49) */

void __fastcall FUN_00820ad0(int param_1)

{
  DAT_01dd0814 = DAT_01dd0814 * 0x19660d + 0x3c6ef35f;
  *(float *)(param_1 + 0x19b0) = (1.0 - (float)(DAT_01dd0814 >> 8) * 5.960465e-08 * 2.0) * 5.0;
  *(undefined4 *)(param_1 + 0x19b4) = 0;
  DAT_01dd0814 = DAT_01dd0814 * 0x19660d + 0x3c6ef35f;
  *(float *)(param_1 + 0x19b8) = (1.0 - (float)(DAT_01dd0814 >> 8) * 5.960465e-08 * 2.0) * 5.0;
  return;
}

// 00820B90  FUN_00820b90  size=271  [between]
void __thiscall FUN_00820b90(int param_1,float *param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float local_20;
  float local_1c;
  float local_18;
  
  iVar5 = *(int *)(param_1 + 0x1940) + 1;
  if (9 < iVar5) {
    iVar5 = 0;
  }
  iVar5 = (iVar5 + 0x18a) * 0x10;
  fVar1 = *(float *)(iVar5 + param_1);
  iVar5 = iVar5 + param_1;
  fVar2 = *(float *)(iVar5 + 4);
  fVar3 = *(float *)(iVar5 + 8);
  fVar4 = *(float *)(iVar5 + 0xc);
  FUN_00820890(&local_20);
  iVar5 = *(int *)(param_1 + 0xa84);
  local_20 = *(float *)(iVar5 + 0x40) - local_20;
  local_1c = *(float *)(iVar5 + 0x44) - local_1c;
  local_18 = *(float *)(iVar5 + 0x48) - local_18;
  param_4 = (SQRT(local_18 * local_18 + local_1c * local_1c + local_20 * local_20) / param_3) * 1.25
            * param_4;
  *param_2 = *(float *)(iVar5 + 0x40) + fVar1 * param_4;
  param_2[1] = param_4 * fVar2 * 0.1 + *(float *)(iVar5 + 0x44);
  param_2[2] = fVar3 * param_4 + *(float *)(iVar5 + 0x48);
  param_2[3] = fVar4 * param_4 + *(float *)(iVar5 + 0x4c);
  fVar1 = param_2[1];
  param_2[1] = fVar1 + 0.25;
  if (*(int *)(param_1 + 0x199c) != 0) {
    *param_2 = *param_2 + *(float *)(param_1 + 0x19b0);
    param_2[1] = fVar1 + 0.25 + *(float *)(param_1 + 0x19b4);
    param_2[2] = *(float *)(param_1 + 0x19b8) + param_2[2];
    param_2[3] = *(float *)(param_1 + 0x19bc) + param_2[3];
    return;
  }
  return;
}

// 00820CA0  FUN_00820ca0  size=38  [between]
bool __fastcall FUN_00820ca0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00ac4780();
  if (iVar1 == 4) {
    return false;
  }
  return *(int *)(param_1 + 0x1a94) <= *(int *)(param_1 + 0x1a90);
}

// 00820D20  Emc220::vf158  size=5  [class]
undefined4 Emc220::vf158(void)

{
  return 0;
}

// 00820D30  FUN_00820d30  size=39  [callgraph]
void __thiscall FUN_00820d30(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x19c4) = param_2;
  uVar1 = FUN_00e678d0(2,param_2,0xffffffff);
  FUN_00e80d00(uVar1);
  return;
}

// 00820DF0  FUN_00820df0  size=29  [callgraph]
void __fastcall FUN_00820df0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00e5e0c0("Boss4000_121010",param_1,0xffffffff,0);
  *(undefined4 *)(param_1 + 0x1a74) = uVar1;
  return;
}

// 00820E10  FUN_00820e10  size=29  [callgraph]
void __fastcall FUN_00820e10(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00e5e0c0("Boss4000_131010",param_1,0xffffffff,0);
  *(undefined4 *)(param_1 + 0x1a74) = uVar1;
  return;
}

// 00820F40  FUN_00820f40  size=23  [callgraph]
void FUN_00820f40(void)

{
  FUN_00c27f40(2,0x45e10000);
  return;
}

// 00820FE0  FUN_00820fe0  size=690  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00820fe0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  float unaff_ESI;
  float unaff_EDI;
  int iVar3;
  float fVar4;
  undefined1 auStack_5c [8];
  undefined1 auStack_54 [80];
  
  iVar1 = FUN_00a81330();
  iVar3 = 0;
  if (iVar1 != 0) {
    iVar3 = FUN_00a7c8a0();
  }
  (**(code **)(*param_1 + 0x220))();
  iVar1 = param_1[0x187];
  if (iVar1 == 0) {
    param_1[0x248] = 0x41200000;
    FUN_00a93090(2);
    uVar2 = FUN_009f8b40();
    FUN_00ac8a80(uVar2);
    (**(code **)(*param_1 + 0x318))();
    iVar1 = param_1[0x1d9];
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x104) != 1)) {
      *(undefined4 *)(iVar1 + 0x104) = 1;
      *(undefined4 *)(*(int *)(iVar1 + 0xd0) + 4) = 0;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_008e0ae0(0);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x250] = 0;
    return;
  }
  if (iVar1 == 1) {
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar4 = (float)param_1[0x248] - _DAT_01be942c;
    param_1[0x248] = (int)fVar4;
    if (fVar4 <= 0.0) {
      FUN_00aa4080(0xcf,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      iVar1 = FUN_00a12210(0xf00);
      if (iVar1 != 0) {
        fVar4 = (float)param_1[0x25];
        D3DXMatrixRotationY(auStack_54);
        D3DXVec3TransformNormal(&stack0xffffff94,iVar1 + 0x50,auStack_5c);
        param_1[0x14] = (int)(*(float *)(iVar3 + 0x50) - fVar4);
        param_1[0x15] = (int)(*(float *)(iVar3 + 0x54) - 5.0);
        param_1[0x16] = (int)(*(float *)(iVar3 + 0x58) - unaff_EDI);
        param_1[0x17] = (int)(*(float *)(iVar3 + 0x5c) - unaff_ESI);
        switchD_0080dbae::default();
      }
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
  }
  else if (iVar1 == 2) {
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a8c760(10);
    if (iVar1 != 0) {
      FUN_008e0ae0(1);
      (**(code **)(*param_1 + 0x314))();
      iVar1 = param_1[0x1d9];
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0x104) != 0)) {
        *(undefined4 *)(iVar1 + 0x104) = 0;
      }
      FUN_00ac8ab0();
      FUN_00a93090(6);
      param_1[0x250] = param_1[0x250] + 1;
      param_1[0x225] = -0x42333333;
    }
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_008e0ae0(1);
      (**(code **)(*param_1 + 0x314))();
      iVar1 = param_1[0x1d9];
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0x104) != 0)) {
        *(undefined4 *)(iVar1 + 0x104) = 0;
      }
      FUN_00ac8ab0();
      FUN_00a93090(6);
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 008212C0  FUN_008212c0  size=1  [callgraph]
void FUN_008212c0(void)

{
  return;
}

// 00821310  FUN_00821310  size=39  [callgraph]
undefined4 FUN_00821310(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if ((((iVar1 != 0x42) && (iVar1 != 99)) && (iVar1 != 0x44)) && (iVar1 != 0x39)) {
    return 0;
  }
  return 1;
}

// 008214A0  FUN_008214a0  size=239  [callgraph]
void __fastcall FUN_008214a0(int *param_1)

{
  int iVar1;
  float10 fVar2;
  
  if (param_1[0x187] == 0) {
    iVar1 = FUN_00820690(param_1[0x2a1] + 0x40,param_1 + 0x248);
    FUN_00aa4080(*(undefined4 *)(&DAT_01648804 + iVar1 * 4),0,0x3e4ccccd,0x3f800000,0x8000000,
                 0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  iVar1 = FUN_00a8c760(0);
  if (iVar1 != 0) {
    fVar2 = (float10)FUN_00fdc1f0();
    fVar2 = ((float10)1 - fVar2) * (float10)(float)param_1[0x248];
    param_1[0x25] = (int)(float)((float10)(float)param_1[0x25] + fVar2);
    param_1[0x248] = (int)(float)((float10)(float)param_1[0x248] - fVar2);
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if ((iVar1 == 0) && (iVar1 = FUN_00a8c760(4), iVar1 == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0082158d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 008215A0  FUN_008215a0  size=239  [callgraph]
void __fastcall FUN_008215a0(int *param_1)

{
  int iVar1;
  float10 fVar2;
  
  if (param_1[0x187] == 0) {
    iVar1 = FUN_00820690(param_1[0x2a1] + 0x40,param_1 + 0x248);
    FUN_00aa4080(*(undefined4 *)(&DAT_01648814 + iVar1 * 4),0,0x3e4ccccd,0x3f800000,0x8000000,
                 0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  iVar1 = FUN_00a8c760(0);
  if (iVar1 != 0) {
    fVar2 = (float10)FUN_00fdc1f0();
    fVar2 = ((float10)1 - fVar2) * (float10)(float)param_1[0x248];
    param_1[0x25] = (int)(float)((float10)(float)param_1[0x25] + fVar2);
    param_1[0x248] = (int)(float)((float10)(float)param_1[0x248] - fVar2);
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if ((iVar1 == 0) && (iVar1 = FUN_00a8c760(4), iVar1 == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0082168d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 008216C0  FUN_008216c0  size=640  [callgraph]
void __fastcall FUN_008216c0(int *param_1)

{
  float fVar1;
  code *pcVar2;
  float *pfVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 local_30 [16];
  undefined1 auStack_20 [28];
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x20,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x51c] = 0;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      FUN_00aa4080(0x21,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      pcVar2 = *(code **)(*param_1 + 0x1d4);
      param_1[0x22a] = (int)((float)param_1[0x52b] * 1.8);
      param_1[0x225] = (int)((float)param_1[0x52b] * 1.8 * 16.0);
      (*pcVar2)(1);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      FUN_00aa4080(0x22,0,0x3d888889,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
    }
    fVar1 = (float)param_1[0x244];
    puVar5 = local_30;
    goto LAB_0082183b;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar4 != 0) {
      FUN_00aa4080(0x23,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      (**(code **)(*param_1 + 0x1d4))(0);
      param_1[0x187] = param_1[0x187] + 1;
    }
    fVar1 = (float)param_1[0x244];
    puVar5 = auStack_20;
LAB_0082183b:
    pfVar3 = (float *)FUN_00a8b8a0(puVar5,fVar1 * 0.2);
    param_1[0x14] = (int)(*pfVar3 + (float)param_1[0x14]);
    param_1[0x15] = (int)(pfVar3[1] + (float)param_1[0x15]);
    param_1[0x16] = (int)(pfVar3[2] + (float)param_1[0x16]);
    param_1[0x17] = (int)(pfVar3[3] + (float)param_1[0x17]);
    return;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 008219A0  FUN_008219a0  size=123  [callgraph]
void __fastcall FUN_008219a0(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0xc,0,0x3e4ccccd,0x4d000000,0,0xbf800000,0x3f800000);
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
                    /* WARNING: Could not recover jumptable at 0x00821a19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00821A30  FUN_00821a30  size=214  [callgraph]
void __fastcall FUN_00821a30(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x61c);
  if (iVar1 == 0) {
    FUN_00aa4080(0xba,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined2 *)(param_1 + 0x824) = 1;
    *(undefined4 *)(param_1 + 0x828) = 0x78;
  }
  else if (iVar1 != 1) {
    if (iVar1 != 2) {
      return;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00aa4080(0xbb,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  return;
}

// 00821B20  FUN_00821b20  size=145  [callgraph]
void __fastcall FUN_00821b20(int *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0xbc,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
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
  *(undefined2 *)(param_1 + 0x209) = 2;
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x34c);
  param_1[0x20a] = 0x78;
                    /* WARNING: Could not recover jumptable at 0x00821baf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

// 00821C50  FUN_00821c50  size=172  [callgraph]
undefined4 __fastcall FUN_00821c50(int param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined **local_4;
  
  iVar2 = FUN_00ac89d0();
  if ((iVar2 == 0) && (iVar2 = param_1, param_1 == 0)) {
    return 0;
  }
  local_4 = &PTR_s__EFD02_018834b8;
  do {
    puVar1 = *local_4;
    iVar5 = 0;
    if (0 < *(short *)(iVar2 + 0x324)) {
      iVar4 = 0;
      do {
        iVar3 = *(int *)(*(int *)(*(int *)(iVar2 + 800) + 0x60 + iVar4) + 0x40);
        if ((iVar3 != 0) && (iVar3 = FUN_00fdbbd0(iVar3,puVar1), iVar3 != 0)) {
          if ((iVar5 != -1) &&
             ((iVar5 = iVar5 * 0x70 + *(int *)(iVar2 + 800), iVar5 != 0 &&
              ((*(byte *)(iVar5 + 0x38) & 1) != 0)))) {
            return 1;
          }
          break;
        }
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + 0x70;
      } while (iVar5 < *(short *)(iVar2 + 0x324));
    }
    local_4 = local_4 + 1;
    if (0x18834d7 < (int)local_4) {
      return 0;
    }
  } while( true );
}

// 00821D10  FUN_00821d10  size=415  [callgraph]
void __thiscall FUN_00821d10(int param_1,int param_2)

{
  uint *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_10;
  int local_c;
  
  local_10 = FUN_00ac89d0();
  if (local_10 == 0) {
    local_10 = param_1;
  }
  local_c = 0;
  do {
    if ((param_2 == -1) || (param_2 == local_c)) {
      *(undefined4 *)(param_1 + (local_c * 5 + 0x3a7) * 4) = 1;
      if (local_c == 7) {
        iVar3 = FUN_00a81330();
        if ((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), puVar2 = PTR_s__EFD01_018834d4, iVar3 != 0)) {
          iVar7 = 0;
          if (0 < *(short *)(iVar3 + 0x324)) {
            iVar6 = 0;
            do {
              iVar5 = *(int *)(iVar3 + 800);
              iVar4 = *(int *)(*(int *)(iVar5 + 0x60 + iVar6) + 0x40);
              if ((iVar4 != 0) && (iVar4 = FUN_00fdbbd0(iVar4,puVar2), iVar4 != 0)) {
                puVar1 = (uint *)(iVar5 + 0x38 + iVar6);
                *puVar1 = *puVar1 | 1;
              }
              iVar7 = iVar7 + 1;
              iVar6 = iVar6 + 0x70;
            } while (iVar7 < *(short *)(iVar3 + 0x324));
          }
          if (*(undefined4 **)(iVar3 + 0x370) != (undefined4 *)0x0) {
            *(uint *)(iVar3 + 0x364) = *(uint *)(iVar3 + 0x364) | 0x400000;
            **(undefined4 **)(iVar3 + 0x370) = 0;
          }
        }
      }
      else {
        puVar2 = (&PTR_s__EFD02_018834b8)[local_c];
        iVar3 = 0;
        if (0 < *(short *)(local_10 + 0x324)) {
          iVar7 = 0;
          do {
            iVar6 = *(int *)(local_10 + 800);
            iVar5 = *(int *)(*(int *)(iVar6 + 0x60 + iVar7) + 0x40);
            if ((iVar5 != 0) && (iVar5 = FUN_00fdbbd0(iVar5,puVar2), iVar5 != 0)) {
              puVar1 = (uint *)(iVar6 + 0x38 + iVar7);
              *puVar1 = *puVar1 | 1;
            }
            iVar3 = iVar3 + 1;
            iVar7 = iVar7 + 0x70;
          } while (iVar3 < *(short *)(local_10 + 0x324));
        }
        if (*(int *)(local_10 + 0x370) != 0) {
          FUN_00a1bd80((&PTR_s__EFD02_018834b8)[local_c],1);
        }
        if ((local_c == 5) && (*(int *)(local_10 + 0x370) != 0)) {
          FUN_00a1bd80("tentacle",1);
        }
      }
    }
    local_c = local_c + 1;
  } while (local_c < 8);
  return;
}

// 00821F80  FUN_00821f80  size=125  [callgraph]
void __fastcall FUN_00821f80(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(param_1[0x660],0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
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
                    /* WARNING: Could not recover jumptable at 0x00821ffb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 008220E0  FUN_008220e0  size=361  [callgraph]
void __fastcall FUN_008220e0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  float10 fVar5;
  
  puVar2 = (undefined4 *)(param_1 + 0x171c);
  iVar4 = 0xb;
  do {
    *(undefined2 *)(puVar2 + -3) = 0;
    *(undefined2 *)((int)puVar2 + -10) = 0;
    *puVar2 = 0;
    puVar2 = puVar2 + 5;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  *(undefined2 *)(param_1 + 0x1818) = 0;
  *(undefined1 *)(param_1 + 0x181a) = 0;
  *(undefined4 *)(param_1 + 0x181c) = 0;
  *(undefined4 *)(param_1 + 0x1820) = 0;
  *(undefined4 *)(param_1 + 0x1824) = 0;
  iVar4 = 0;
  uVar3 = FUN_00ac4780();
  switch(uVar3) {
  case 0:
    iVar4 = 0x2e;
    break;
  case 1:
    iVar4 = 0;
    break;
  case 2:
    iVar4 = 0x60;
    break;
  case 3:
    iVar4 = 0x92;
    break;
  case 4:
    iVar4 = 0xc4;
  }
  if (*(int **)(param_1 + 0x754) != (int *)0x0) {
    iVar1 = iVar4 + 0x3b;
    fVar5 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(iVar1);
    *(float *)(param_1 + 0x17ec) = (float)fVar5;
    fVar5 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x3c))(iVar1);
    *(float *)(param_1 + 0x17f0) = (float)fVar5;
    fVar5 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x44))(iVar1);
    *(float *)(param_1 + 0x17f4) = (float)fVar5;
    fVar5 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x4c))(iVar1);
    *(float *)(param_1 + 0x17f8) = (float)fVar5;
    iVar1 = iVar4 + 0x3c;
    fVar5 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(iVar1);
    *(float *)(param_1 + 0x17fc) = (float)fVar5;
    fVar5 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x3c))(iVar1);
    *(float *)(param_1 + 0x1800) = (float)fVar5;
    fVar5 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x44))(iVar1);
    *(float *)(param_1 + 0x1804) = (float)fVar5;
    fVar5 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x4c))(iVar1);
    *(float *)(param_1 + 0x1808) = (float)fVar5;
    iVar4 = iVar4 + 0x3d;
    fVar5 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(iVar4);
    *(float *)(param_1 + 0x180c) = (float)fVar5;
    fVar5 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x3c))(iVar4);
    *(float *)(param_1 + 0x1810) = (float)fVar5;
    fVar5 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x44))(iVar4);
    *(float *)(param_1 + 0x1814) = (float)fVar5;
  }
  return;
}

// 00822380  FUN_00822380  size=42  [callgraph]
uint FUN_00822380(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar2 = &DAT_01b35a14;
  (**(code **)(*param_1 + 4))(&DAT_01b35a14);
  iVar1 = FUN_00dd6d80(puVar2);
  return -(uint)(iVar1 != 0) & (uint)param_1;
}

// 00822410  FUN_00822410  size=27  [callgraph]
undefined4 __fastcall FUN_00822410(int param_1)

{
  if ((*(int *)(param_1 + 0x4a0) == 0) && ((*(byte *)(param_1 + 0xb00) & 2) != 0)) {
    return 1;
  }
  return 0;
}

// 00822430  FUN_00822430  size=23  [callgraph]
undefined4 __fastcall FUN_00822430(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xa84) != 0) {
    uVar1 = FUN_00820620(*(int *)(param_1 + 0xa84) + 0x40);
    return uVar1;
  }
  return 0;
}

// 00822B40  FUN_00822b40  size=27  [callgraph]
undefined4 __fastcall FUN_00822b40(int param_1)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0xe90) & 0x20) == 0) {
    iVar1 = FUN_00a8c760(0x32);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}

// 00822C40  FUN_00822c40  size=48  [callgraph]
undefined4 __fastcall FUN_00822c40(int param_1)

{
  int iVar1;
  
  if ((*(uint *)(param_1 + 0xe90) & 0x2000000) == 0) {
    iVar1 = FUN_00a8c760(6);
    if (iVar1 == 0) {
      iVar1 = FUN_00a8c760(5);
      if (iVar1 == 0) {
        return 0;
      }
    }
  }
  return 1;
}

// 00822C80  Emc220::vf248  size=49  [class]
void __fastcall Emc220::vf248(int param_1)

{
  int iVar1;
  
  FUN_00e00900();
  iVar1 = FUN_00ac89d0();
  if (iVar1 == 0) {
    iVar1 = param_1;
  }
  FUN_00e03080(*(undefined4 *)(iVar1 + 0x4f0),0);
  return;
}

// 00822CC0  Emc220::vf110  size=126  [class]
void __thiscall Emc220::vf110(int param_1,int param_2)

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
  if (param_2 != 0) {
    *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) | 0x40000000;
    return;
  }
  *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) & 0xbfffffff;
  return;
}

// 00822D40  FUN_00822d40  size=252  [between]
undefined4 __fastcall FUN_00822d40(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined *puVar6;
  
  iVar1 = FUN_00ac8a50();
  if (iVar1 == 0) {
    iVar1 = lib::StaticArray<Constraints,32>::StaticArray<Constraints,32>();
    if (iVar1 == 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0x4a0) == 0) {
      uVar5 = 0x3c370;
      pcVar4 = "ChainSaw";
    }
    else {
      if (*(int *)(param_1 + 0x4a0) != 1) {
        return 1;
      }
      uVar5 = 0x3c371;
      pcVar4 = "RailGun";
    }
    iVar1 = FUN_00a82090(pcVar4,uVar5,0);
    if (iVar1 != 0) {
      uVar5 = FUN_00a7c7f0();
      FUN_00a7c960(uVar5);
      FUN_00ac8ad0(0,*(undefined4 *)(param_1 + 0x4f0),iVar1,0x66,0xffffffff,4);
      piVar2 = (int *)FUN_00a7c8a0();
      if (piVar2 != (int *)0x0) {
        puVar6 = &DAT_01b35a14;
        (**(code **)(*piVar2 + 4))(&DAT_01b35a14);
        iVar1 = FUN_00dd6d80(puVar6);
        if (iVar1 != 0) {
          iVar1 = FUN_00ac89d0();
          piVar2[0x146] = iVar1;
          uVar5 = FUN_00a7c7f0();
          FUN_00a7c960(uVar5);
          iVar1 = *(int *)(param_1 + 0x83c);
          piVar2[0x147] = iVar1;
          piVar2[0x20f] = iVar1;
          puVar3 = (undefined4 *)FUN_009f8b60();
          FUN_009f8ae0(*puVar3);
        }
      }
    }
  }
  return 1;
}

// 00822E40  FUN_00822e40  size=211  [between]
void __fastcall FUN_00822e40(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  
  uVar1 = 300;
  if (*(int *)(param_1 + 0x754) != 0) {
    iVar4 = 0;
    uVar1 = FUN_00ac4780();
    switch(uVar1) {
    case 0:
      iVar4 = 0x2e;
      break;
    case 1:
      iVar4 = 0;
      break;
    case 2:
      iVar4 = 0x60;
      break;
    case 3:
      iVar4 = 0x92;
      break;
    case 4:
      iVar4 = 0xc4;
    }
    iVar2 = iVar4 + 0x2f;
    if ((*(uint *)(param_1 + 0xb00) & 1) == 0) {
      iVar2 = iVar4 + 0x2e;
    }
    if (*(int *)(param_1 + 0x4a0) == 0) {
      if ((*(uint *)(param_1 + 0xb00) & 2) != 0) {
        uVar1 = (**(code **)(**(int **)(param_1 + 0x754) + 0x24))(iVar4 + 0x2d);
        goto LAB_00822edb;
      }
      pcVar3 = *(code **)(**(int **)(param_1 + 0x754) + 0x24);
    }
    else {
      pcVar3 = *(code **)(**(int **)(param_1 + 0x754) + 0x2c);
    }
    uVar1 = (*pcVar3)(iVar2);
  }
LAB_00822edb:
  FUN_00a8edf0(uVar1);
  if ((*(int *)(param_1 + 0x4a0) == 0) && ((*(uint *)(param_1 + 0xb00) & 2) != 0)) {
    DAT_018b4414 = *(undefined4 *)(param_1 + 0x4b4);
    DAT_01dc08dc = 0;
    DAT_01dc08e0 = *(uint *)(param_1 + 0xb00);
  }
  return;
}

// 00822F30  FUN_00822f30  size=1554  [between]
void __fastcall FUN_00822f30(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  int iVar6;
  float10 fVar7;
  float afStack_14 [5];
  
  iVar6 = 0;
  uVar4 = FUN_00ac4780();
  switch(uVar4) {
  case 0:
    iVar6 = 0x2e;
    break;
  case 1:
    iVar6 = 0;
    break;
  case 2:
    iVar6 = 0x60;
    break;
  case 3:
    iVar6 = 0x92;
    break;
  case 4:
    iVar6 = 0xc4;
  }
  if (*(int **)(param_1 + 0x754) == (int *)0x0) goto LAB_008234c9;
  fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(iVar6 + 0x34);
  *(float *)(param_1 + 0x1490) = (float)fVar7;
  fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x3c))(iVar6 + 0x34);
  *(float *)(param_1 + 0x1494) = (float)fVar7;
  fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(iVar6 + 0x35);
  *(float *)(param_1 + 0x1608) = (float)fVar7;
  fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(iVar6 + 0x37);
  *(float *)(param_1 + 0x1618) = (float)fVar7;
  uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x24))(iVar6 + 0x37);
  *(undefined4 *)(param_1 + 0x161c) = uVar4;
  iVar1 = iVar6 + 0x39;
  uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x24))(iVar1);
  *(undefined4 *)(param_1 + 0x1828) = uVar4;
  uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x2c))(iVar1);
  *(undefined4 *)(param_1 + 0x1a94) = uVar4;
  fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(iVar1);
  *(float *)(param_1 + 0x1830) = (float)fVar7;
  fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(iVar6 + 0x49);
  *(float *)(param_1 + 0x1840) = (float)fVar7;
  fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x3c))(iVar6 + 0x49);
  *(float *)(param_1 + 0x1844) = (float)fVar7;
  uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x24))(iVar6 + 0x31);
  *(undefined4 *)(param_1 + 0x1478) = uVar4;
  uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x2c))(iVar6 + 0x31);
  *(undefined4 *)(param_1 + 0x147c) = uVar4;
  fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(iVar6 + 0x32);
  *(float *)(param_1 + 0x14a4) = (float)fVar7;
  uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x24))(iVar6 + 0x32);
  *(undefined4 *)(param_1 + 0x14a8) = uVar4;
  fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(iVar6 + 0x56);
  *(float *)(param_1 + 0x19d8) = (float)fVar7;
  uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x24))(iVar6 + 0x47);
  *(undefined4 *)(param_1 + 0x1a68) = uVar4;
  fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(iVar6 + 0x47);
  *(float *)(param_1 + 0x1a60) = (float)fVar7;
  fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(iVar6 + 0x57);
  *(float *)(param_1 + 0x1a84) = (float)fVar7;
  fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(iVar6 + 0x58);
  *(float *)(param_1 + 0x1a9c) = (float)fVar7;
  if (*(int *)(param_1 + 0x4a0) == 0) {
    if ((*(byte *)(param_1 + 0xb00) & 2) != 0) {
      pcVar5 = *(code **)(**(int **)(param_1 + 0x754) + 0x34);
      goto LAB_00823150;
    }
    fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x3c))(iVar6 + 0x55);
  }
  else {
    pcVar5 = *(code **)(**(int **)(param_1 + 0x754) + 0x44);
LAB_00823150:
    fVar7 = (float10)(*pcVar5)(iVar6 + 0x55);
  }
  *(float *)(param_1 + 0x1950) = (float)fVar7;
  iVar1 = **(int **)(param_1 + 0x754);
  if ((*(byte *)(param_1 + 0xb00) & 1) == 0) {
    iVar2 = iVar6 + 0x4b;
    if (*(int *)(param_1 + 0x4a0) == 0) {
      fVar7 = (float10)(**(code **)(iVar1 + 0x34))();
      *(float *)(param_1 + 0x1838) = (float)fVar7;
      fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x44))(iVar2);
      *(float *)(param_1 + 0x183c) = (float)fVar7;
      uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x24))(iVar6 + 0x33);
      *(undefined4 *)(param_1 + 0x1480) = uVar4;
      pcVar5 = *(code **)(**(int **)(param_1 + 0x754) + 0x34);
    }
    else {
      fVar7 = (float10)(**(code **)(iVar1 + 0x3c))(iVar2);
      *(float *)(param_1 + 0x1838) = (float)fVar7;
      fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x4c))(iVar2);
      *(float *)(param_1 + 0x183c) = (float)fVar7;
      uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x2c))(iVar6 + 0x33);
      *(undefined4 *)(param_1 + 0x1480) = uVar4;
      pcVar5 = *(code **)(**(int **)(param_1 + 0x754) + 0x3c);
    }
    fVar7 = (float10)(*pcVar5)(iVar6 + 0x50);
    *(float *)(param_1 + 0x1890) = (float)fVar7;
    iVar1 = iVar6 + 0x4d;
    fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(iVar1);
    *(float *)(param_1 + 0x187c) = (float)fVar7;
    fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x3c))(iVar1);
    *(float *)(param_1 + 0x1884) = (float)fVar7;
    fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x44))(iVar1);
    iVar6 = iVar6 + 0x52;
  }
  else {
    iVar2 = iVar6 + 0x4c;
    if (*(int *)(param_1 + 0x4a0) == 0) {
      fVar7 = (float10)(**(code **)(iVar1 + 0x34))();
      *(float *)(param_1 + 0x1838) = (float)fVar7;
      fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x44))(iVar2);
      *(float *)(param_1 + 0x183c) = (float)fVar7;
      uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x24))(iVar6 + 0x33);
      *(undefined4 *)(param_1 + 0x1480) = uVar4;
      pcVar5 = *(code **)(**(int **)(param_1 + 0x754) + 0x34);
    }
    else {
      fVar7 = (float10)(**(code **)(iVar1 + 0x3c))(iVar2);
      *(float *)(param_1 + 0x1838) = (float)fVar7;
      fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x4c))(iVar2);
      *(float *)(param_1 + 0x183c) = (float)fVar7;
      uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x2c))(iVar6 + 0x33);
      *(undefined4 *)(param_1 + 0x1480) = uVar4;
      pcVar5 = *(code **)(**(int **)(param_1 + 0x754) + 0x3c);
    }
    fVar7 = (float10)(*pcVar5)(iVar6 + 0x51);
    *(float *)(param_1 + 0x1890) = (float)fVar7;
    iVar1 = iVar6 + 0x4e;
    fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(iVar1);
    *(float *)(param_1 + 0x187c) = (float)fVar7;
    fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x3c))(iVar1);
    *(float *)(param_1 + 0x1884) = (float)fVar7;
    fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x44))(iVar1);
    iVar6 = iVar6 + 0x53;
  }
  *(float *)(param_1 + 0x1880) = (float)fVar7;
  fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(iVar6);
  *(float *)(param_1 + 0x1894) = (float)fVar7;
  uVar4 = FUN_00ac84d0(0x25);
  *(undefined4 *)(param_1 + 0x1208) = uVar4;
  uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0xc))(0x25);
  *(undefined4 *)(param_1 + 0x120c) = uVar4;
  uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x14))(0x25);
  *(undefined4 *)(param_1 + 0x1210) = uVar4;
  uVar3 = (**(code **)(**(int **)(param_1 + 0x754) + 0x1c))(0x25);
  *(undefined1 *)(param_1 + 0x1214) = uVar3;
  uVar4 = FUN_00ac84d0(0x26);
  *(undefined4 *)(param_1 + 0x1218) = uVar4;
  uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0xc))(0x26);
  *(undefined4 *)(param_1 + 0x121c) = uVar4;
  uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x14))(0x26);
  *(undefined4 *)(param_1 + 0x1220) = uVar4;
  uVar3 = (**(code **)(**(int **)(param_1 + 0x754) + 0x1c))(0x26);
  *(undefined1 *)(param_1 + 0x1224) = uVar3;
  uVar4 = FUN_00ac84d0(0x24);
  *(undefined4 *)(param_1 + 0x1228) = uVar4;
  uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0xc))(0x24);
  *(undefined4 *)(param_1 + 0x122c) = uVar4;
  uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x14))(0x24);
  *(undefined4 *)(param_1 + 0x1230) = uVar4;
  uVar3 = (**(code **)(**(int **)(param_1 + 0x754) + 0x1c))(0x24);
  *(undefined1 *)(param_1 + 0x1234) = uVar3;
  uVar4 = FUN_00ac84d0(0x27);
  *(undefined4 *)(param_1 + 0x1238) = uVar4;
  uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0xc))(0x27);
  *(undefined4 *)(param_1 + 0x123c) = uVar4;
  uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x14))(0x27);
  *(undefined4 *)(param_1 + 0x1240) = uVar4;
  uVar3 = (**(code **)(**(int **)(param_1 + 0x754) + 0x1c))(0x27);
  *(undefined1 *)(param_1 + 0x1244) = uVar3;
  uVar4 = FUN_00ac84d0(0x28);
  *(undefined4 *)(param_1 + 0x1248) = uVar4;
  uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0xc))(0x28);
  *(undefined4 *)(param_1 + 0x124c) = uVar4;
  uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x14))(0x28);
  *(undefined4 *)(param_1 + 0x1250) = uVar4;
  uVar3 = (**(code **)(**(int **)(param_1 + 0x754) + 0x1c))(0x28);
  *(undefined1 *)(param_1 + 0x1254) = uVar3;
LAB_008234c9:
  *(int *)(param_1 + 0x1480) = *(int *)(param_1 + 0x1480) + *(int *)(param_1 + 0x1478);
  if ((*(int *)(param_1 + 0x4a0) != 0) || ((*(byte *)(param_1 + 0xb00) & 2) == 0)) {
    iVar6 = FUN_00ac4780();
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    else if (4 < iVar6) {
      iVar6 = 4;
    }
    afStack_14[0] = 2.0;
    afStack_14[1] = 3.0;
    afStack_14[2] = 6.0;
    afStack_14[3] = 40.0;
    afStack_14[4] = 40.0;
    *(float *)(param_1 + 0x14a4) = afStack_14[iVar6] * *(float *)(param_1 + 0x14a4);
  }
  return;
}

// 00823560  FUN_00823560  size=627  [between]
void __fastcall FUN_00823560(int param_1)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  int local_90;
  int iStack_84;
  undefined *local_80 [32];
  
  local_80[0] = (undefined *)0x3e;
  local_80[1] = (undefined *)0x3f;
  local_80[2] = (undefined *)0x40;
  local_80[3] = (undefined *)0x41;
  local_80[4] = (undefined *)0x42;
  local_80[5] = (undefined *)0x43;
  local_80[6] = (undefined *)0x44;
  local_80[7] = (undefined *)0x45;
  local_80[8] = &DAT_01648750;
  local_80[9] = &DAT_0164875c;
  local_80[10] = (undefined *)0x0;
  local_80[0xb] = &DAT_01648768;
  local_80[0xc] = &DAT_01648774;
  local_80[0xd] = (undefined *)0x0;
  local_80[0xe] = &DAT_01648780;
  local_80[0xf] = &DAT_0164878c;
  local_80[0x10] = (undefined *)0x0;
  local_80[0x11] = &DAT_01648798;
  local_80[0x12] = &DAT_016487a4;
  local_80[0x13] = (undefined *)0x0;
  local_80[0x14] = &DAT_016487b0;
  local_80[0x15] = &DAT_016487bc;
  local_80[0x16] = &DAT_016487c8;
  local_80[0x17] = (undefined *)0x0;
  local_80[0x18] = (undefined *)0x0;
  local_80[0x19] = (undefined *)0x0;
  local_80[0x1a] = (undefined *)0x0;
  local_80[0x1b] = (undefined *)0x0;
  local_80[0x1c] = (undefined *)0x0;
  local_80[0x1d] = (undefined *)0x0;
  local_80[0x1e] = (undefined *)0x0;
  local_80[0x1f] = (undefined *)0x0;
  local_90 = FUN_00ac89d0();
  if (local_90 == 0) {
    local_90 = param_1;
  }
  iVar9 = 0;
  do {
    iVar6 = 0;
    puVar1 = (undefined4 *)(param_1 + (iVar9 * 5 + 0x3a7) * 4);
    puVar3 = local_80[iVar9];
    *puVar1 = 0;
    fVar10 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(puVar3);
    puVar1[1] = (float)fVar10;
    puVar3 = local_80[iVar9 * 3 + 9];
    puVar4 = local_80[iVar9 * 3 + 10];
    puVar1[2] = local_80[iVar9 * 3 + 8];
    puVar1[3] = puVar3;
    puVar1[4] = puVar4;
    if (iVar9 == 7) {
      iVar6 = FUN_00a81330();
      if ((iVar6 != 0) && (iVar6 = FUN_00a7c8a0(), puVar3 = PTR_s__EFD01_018834d4, iVar6 != 0)) {
        iVar8 = 0;
        iStack_84 = 0;
        if (0 < *(short *)(iVar6 + 0x324)) {
          do {
            iVar5 = *(int *)(iVar6 + 800);
            iVar7 = *(int *)(*(int *)(iVar5 + 0x60 + iVar8) + 0x40);
            if ((iVar7 != 0) && (iVar7 = FUN_00fdbbd0(iVar7,puVar3), iVar7 != 0)) {
              puVar2 = (uint *)(iVar5 + 0x38 + iVar8);
              *puVar2 = *puVar2 & 0xfffffffe;
            }
            iStack_84 = iStack_84 + 1;
            iVar8 = iVar8 + 0x70;
          } while (iStack_84 < *(short *)(iVar6 + 0x324));
        }
        if (*(undefined4 **)(iVar6 + 0x370) != (undefined4 *)0x0) {
          *(uint *)(iVar6 + 0x364) = *(uint *)(iVar6 + 0x364) & 0xffbfffff;
          **(undefined4 **)(iVar6 + 0x370) = 1;
        }
      }
    }
    else {
      puVar3 = (&PTR_s__EFD02_018834b8)[iVar9];
      if (0 < *(short *)(local_90 + 0x324)) {
        iVar8 = 0;
        do {
          iVar5 = *(int *)(local_90 + 800);
          iVar7 = *(int *)(*(int *)(iVar5 + 0x60 + iVar8) + 0x40);
          if ((iVar7 != 0) && (iVar7 = FUN_00fdbbd0(iVar7,puVar3), iVar7 != 0)) {
            puVar2 = (uint *)(iVar5 + 0x38 + iVar8);
            *puVar2 = *puVar2 & 0xfffffffe;
          }
          iVar6 = iVar6 + 1;
          iVar8 = iVar8 + 0x70;
        } while (iVar6 < *(short *)(local_90 + 0x324));
      }
    }
    iVar9 = iVar9 + 1;
  } while (iVar9 < 8);
  FUN_00ac8d40(0);
  return;
}

// 008237F0  FUN_008237f0  size=170  [between]
void __fastcall FUN_008237f0(int param_1)

{
  undefined4 uVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if ((((*(int *)(param_1 + 0x4a0) != 0) || ((*(byte *)(param_1 + 0xb00) & 2) == 0)) &&
      ((*(byte *)(param_1 + 0xb00) & 8) == 0)) && (*(int *)(param_1 + 0x1aa4) == 0)) {
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    uVar1 = FUN_0093c1f0((int)*(char *)(param_1 + 0xbab),*(undefined4 *)(param_1 + 0x4f0),4,2,
                         &local_20,&local_30,0x41200000,0x3f000000,0xbf800000);
    *(undefined4 *)(param_1 + 0x19d4) = uVar1;
    *(undefined4 *)(param_1 + 0x1aa4) = 1;
  }
  return;
}

// 008238A0  FUN_008238a0  size=1006  [between]
void __fastcall FUN_008238a0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  undefined4 local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  int local_f0 [4];
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  undefined4 local_c0;
  uint local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  char *local_ac;
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined1 local_20 [28];
  
  local_104 = 0x3f000000;
  iVar2 = FUN_009f8b40();
  uVar5 = 0;
  switch(*(undefined4 *)(param_1 + 0x1450)) {
  case 0:
    pfVar4 = (float *)FUN_00a925a0(local_70);
    local_120 = *pfVar4 + *(float *)(param_1 + 0x40);
    puVar6 = local_20;
    local_118 = *(float *)(param_1 + 0x48) + pfVar4[2];
    local_114 = *(float *)(param_1 + 0x4c) + pfVar4[3];
    local_11c = *(float *)(param_1 + 0x44) + pfVar4[1] + 1.0;
    uVar7 = 0x3fe66666;
    goto LAB_00823988;
  case 1:
    pfVar4 = (float *)FUN_00a8b8a0(local_50,0xbf800000);
    local_120 = *(float *)(param_1 + 0x40) + *pfVar4;
    local_118 = *(float *)(param_1 + 0x48) + pfVar4[2];
    local_114 = *(float *)(param_1 + 0x4c) + pfVar4[3];
    puVar6 = local_a0;
    local_11c = *(float *)(param_1 + 0x44) + pfVar4[1] + 1.0;
    uVar7 = 0xbfe66666;
    goto LAB_00823988;
  case 2:
    local_120 = *(float *)(param_1 + 0x40);
    local_118 = *(float *)(param_1 + 0x48);
    local_114 = *(float *)(param_1 + 0x4c);
    local_11c = *(float *)(param_1 + 0x44) + 1.0;
    pfVar4 = (float *)FUN_00a8b9b0(local_30,0x3fe66666);
    goto LAB_0082398f;
  case 3:
    local_120 = *(float *)(param_1 + 0x40);
    local_118 = *(float *)(param_1 + 0x48);
    local_114 = *(float *)(param_1 + 0x4c);
    local_11c = *(float *)(param_1 + 0x44) + 1.0;
    pfVar4 = (float *)FUN_00a8b9b0(local_90,0xbfe66666);
    goto LAB_0082398f;
  case 4:
    pfVar4 = (float *)FUN_00a925a0(local_80);
    local_120 = *(float *)(param_1 + 0x40) + *pfVar4;
    puVar6 = local_60;
    local_118 = *(float *)(param_1 + 0x48) + pfVar4[2];
    local_114 = *(float *)(param_1 + 0x4c) + pfVar4[3];
    local_11c = *(float *)(param_1 + 0x44) + pfVar4[1] + 3.1;
    uVar7 = 0x3fe66666;
LAB_00823988:
    pfVar4 = (float *)FUN_00a8b8a0(puVar6,uVar7);
LAB_0082398f:
    local_100 = *pfVar4 + local_120;
    local_fc = pfVar4[1] + local_11c;
    local_f8 = pfVar4[2] + local_118;
    local_f4 = pfVar4[3] + local_114;
    break;
  case 5:
    iVar3 = FUN_00a12210(5);
    if (*(int *)(param_1 + 0x4a0) == 1) {
      iVar3 = FUN_00a12210(0x66);
    }
    if (iVar3 == 0) {
      iVar3 = param_1;
    }
    local_120 = *(float *)(iVar3 + 0x40);
    uVar5 = 8;
    local_118 = *(float *)(iVar3 + 0x48);
    local_114 = *(float *)(iVar3 + 0x4c);
    iVar1 = *(int *)(param_1 + 0xa84);
    local_11c = *(float *)(iVar3 + 0x44) + 0.1;
    local_100 = *(float *)(iVar1 + 0x40);
    local_f8 = *(float *)(iVar1 + 0x48);
    local_f4 = *(float *)(iVar1 + 0x4c);
    local_fc = *(float *)(iVar1 + 0x44) + 1.2;
    break;
  case 6:
    iVar3 = FUN_00a12210(0);
    if (iVar3 == 0) {
      iVar3 = param_1;
    }
    local_120 = *(float *)(iVar3 + 0x40);
    local_11c = *(float *)(iVar3 + 0x44);
    local_118 = *(float *)(iVar3 + 0x48);
    local_114 = *(float *)(iVar3 + 0x4c);
    pfVar4 = (float *)FUN_00a8b8a0(local_40,0x40000000);
    local_100 = *pfVar4 + local_120;
    local_fc = pfVar4[1] + local_11c;
    local_f8 = pfVar4[2] + local_118;
    local_f4 = pfVar4[3] + local_114;
    local_104 = 0x3d4ccccd;
    break;
  case 7:
    local_120 = *(float *)(param_1 + 0x40);
    iVar3 = *(int *)(param_1 + 0xa84);
    uVar5 = 0x10;
    local_118 = *(float *)(param_1 + 0x48);
    local_114 = *(float *)(param_1 + 0x4c);
    local_11c = *(float *)(param_1 + 0x44) + 0.25;
    local_100 = *(float *)(iVar3 + 0x40);
    local_f8 = *(float *)(iVar3 + 0x48);
    local_f4 = *(float *)(iVar3 + 0x4c);
    local_fc = *(float *)(iVar3 + 0x44) + 0.25;
  }
  local_d0 = local_100 - local_120;
  local_f0[1] = 0;
  local_b8 = 0;
  local_cc = local_fc - local_11c;
  local_b0 = 0;
  local_c8 = local_f8 - local_118;
  local_f0[0] = param_1 + 0x13e0;
  local_c4 = local_f4 - local_114;
  local_ac = "EMC220_obs";
  local_c0 = local_104;
  local_e0 = local_120;
  local_dc = local_11c;
  local_d8 = local_118;
  local_d4 = local_114;
  local_bc = iVar2 << 0x10 | 7;
  local_b4 = uVar5;
  FUN_0090fb00(local_f0);
  return;
}

// 00823CB0  FUN_00823cb0  size=495  [between]
void __fastcall FUN_00823cb0(int *param_1)

{
  int iVar1;
  float unaff_ESI;
  float unaff_EDI;
  float10 fVar2;
  float fVar3;
  float afStack_c8 [2];
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  int *piStack_b4;
  undefined4 uStack_b0;
  int local_a4;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  char *pcStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [76];
  
  local_a4 = 0x41400000;
  param_1[0x4fd] = 0;
  if ((*(byte *)(param_1 + 0x3a4) & 0x40) != 0) {
    iVar1 = (**(code **)(*param_1 + 0x84))();
    param_1[0x510] = *(int *)(iVar1 + 4);
    param_1[0x4fd] = 1;
  }
  fVar2 = (float10)FUN_00ddba30((float)param_1[0x2a7] - (float)param_1[0x510]);
  uStack_b8 = local_a4;
  if (fVar2 * fVar2 < (float10)0.37315634 != (fVar2 * fVar2 == (float10)0.37315634)) {
    param_1[0x4fd] = 1;
    uStack_b8 = 0x41c00000;
  }
  uStack_c0 = 0;
  uStack_bc = 0;
  fVar3 = (float)param_1[0x510];
  D3DXMatrixRotationY(auStack_50);
  D3DXVec3TransformNormal(afStack_c8,afStack_c8,auStack_58);
  fVar2 = (float10)FUN_00ddba30((float)param_1[0x510] + 0.034906585);
  param_1[0x510] = (int)(float)fVar2;
  param_1[0x508] = param_1[0x10];
  param_1[0x509] = (int)((float)param_1[0x11] + 2.8);
  param_1[0x50a] = param_1[0x12];
  param_1[0x50b] = (int)((float)param_1[0x13] + afStack_c8[0]);
  param_1[0x50c] = (int)((float)param_1[0x508] + fVar3);
  param_1[0x50d] = (int)((float)param_1[0x509] + unaff_EDI);
  param_1[0x50e] = (int)((float)param_1[0x50a] + unaff_ESI);
  param_1[0x50f] = (int)((float)param_1[0x50b] + afStack_c8[0]);
  iVar1 = FUN_009f8b40();
  local_a4 = param_1[0x508];
  piStack_b4 = param_1 + 0x4f9;
  iStack_a0 = param_1[0x509];
  iStack_9c = param_1[0x50a];
  uStack_84 = iVar1 << 0x10 | 7;
  iStack_98 = param_1[0x50b];
  uStack_b0 = 0;
  iStack_94 = param_1[0x50c];
  uStack_80 = 0;
  iStack_90 = param_1[0x50d];
  uStack_7c = 0;
  uStack_78 = 0;
  iStack_8c = param_1[0x50e];
  pcStack_74 = "EMC220_Wall";
  uStack_70 = 0;
  iStack_88 = param_1[0x50f];
  uStack_6c = 1;
  HavokRayCastManager::set(&piStack_b4);
  return;
}

// 00823EA0  FUN_00823ea0  size=54  [between]
undefined4 __thiscall FUN_00823ea0(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  if (*(int *)(param_1 + 0x1260) != 0) {
    fVar1 = *(float *)(param_1 + 0x1270) - *(float *)(param_1 + 0x40);
    fVar2 = *(float *)(param_1 + 0x1278) - *(float *)(param_1 + 0x48);
    *param_2 = fVar2 * fVar2 + fVar1 * fVar1;
    return 1;
  }
  return 0;
}

// 00823FE0  FUN_00823fe0  size=333  [between]
float10 __thiscall FUN_00823fe0(int param_1,float *param_2)

{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float local_20;
  float local_1c;
  float local_18;
  
  if (*(int *)(param_1 + 0x13f0) != 0) {
    local_18 = *(float *)(param_1 + 0x1414) * 0.0;
    local_20 = local_18 - *(float *)(param_1 + 0x1418);
    local_1c = *(float *)(param_1 + 0x1418) * 0.0 - *(float *)(param_1 + 0x1410) * 0.0;
    local_18 = *(float *)(param_1 + 0x1410) - local_18;
    if (((local_20 != 0.0) || (local_1c != 0.0)) || (local_18 != 0.0)) {
      fVar1 = local_18 * local_18 + local_20 * local_20 + local_1c * local_1c;
      if (fVar1 < 0.0 == (fVar1 == 0.0)) {
        FUN_00ddf460(&local_20,&local_20);
        fVar2 = (float10)local_1c;
        fVar3 = (float10)local_20;
        fVar4 = (float10)local_18;
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        fVar3 = (float10)0;
        fVar2 = (float10)1;
        fVar4 = fVar3;
      }
      return ABS(((float10)param_2[1] - (float10)*(float *)(param_1 + 0x44)) * fVar2 +
                 ((float10)*param_2 - (float10)*(float *)(param_1 + 0x40)) * fVar3 +
                 ((float10)param_2[2] - (float10)*(float *)(param_1 + 0x48)) * fVar4);
    }
  }
  return (float10)-1.0;
}

// 00824150  FUN_00824150  size=113  [between]
undefined4 __fastcall FUN_00824150(int param_1)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  
  if ((((*(int *)(param_1 + 0x1260) != 0) &&
       (fVar1 = *(float *)(param_1 + 0x1270) - *(float *)(param_1 + 0x40),
       fVar2 = *(float *)(param_1 + 0x1278) - *(float *)(param_1 + 0x48),
       fVar1 = fVar2 * fVar2 + fVar1 * fVar1, *(int *)(param_1 + 0x1320) == 0)) &&
      (fVar3 = (float10)fcos((float10)1.1344640254974365),
      (float10)*(float *)(param_1 + 0x1280) * (float10)0 + (float10)*(float *)(param_1 + 0x1284) +
      (float10)*(float *)(param_1 + 0x1288) * (float10)0 < fVar3)) &&
     (fVar1 < 6.25 != (fVar1 == 6.25))) {
    return 1;
  }
  return 0;
}

// 008241D0  FUN_008241d0  size=501  [between]
undefined4 __fastcall FUN_008241d0(int param_1)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  undefined4 extraout_EDX;
  float10 fVar4;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30 [3];
  float local_24;
  float local_20 [2];
  float local_18;
  
  if ((((*(int *)(param_1 + 0x13f0) != 0) && (*(int *)(param_1 + 0xa84) != 0)) &&
      (fVar4 = (float10)FUN_008202f0(*(int *)(param_1 + 0xa84) + 0x40), (float10)6.0 < fVar4)) &&
     ((fVar4 < (float10)12.5 && (fVar4 = (float10)FUN_00823fe0(extraout_EDX), fVar4 < (float10)5.0))
     )) {
    iVar3 = *(int *)(param_1 + 0xa84);
    local_40 = *(float *)(iVar3 + 0x40) - *(float *)(param_1 + 0x1400);
    local_3c = *(float *)(iVar3 + 0x44) - *(float *)(param_1 + 0x1404);
    local_38 = *(float *)(iVar3 + 0x48) - *(float *)(param_1 + 0x1408);
    local_34 = *(float *)(iVar3 + 0x4c) - *(float *)(param_1 + 0x140c);
    fVar1 = local_38 * local_38 + local_40 * local_40 + local_3c * local_3c;
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      FUN_00ddf460(&local_40,&local_40);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_40 = 0.0;
      local_3c = 1.0;
      local_38 = 0.0;
    }
    if ((0.71 < *(float *)(param_1 + 0x1418) * local_38 +
                *(float *)(param_1 + 0x1410) * local_40 + *(float *)(param_1 + 0x1414) * local_3c)
       && (uVar2 = FUN_00dde2d0(0,100), (uVar2 & 1) == 0)) {
      local_30[0] = *(float *)(param_1 + 0x1400) - *(float *)(param_1 + 0x40);
      local_30[2] = *(float *)(param_1 + 0x1408) - *(float *)(param_1 + 0x48);
      local_24 = *(float *)(param_1 + 0x140c) - *(float *)(param_1 + 0x4c);
      local_30[1] = 0.0;
      iVar3 = hkpCdPointCollector::hkpCdPointCollector(local_30,local_20,1,0,0x3c23d70a);
      if ((iVar3 == 0) ||
         (local_20[0] = local_20[0] - *(float *)(param_1 + 0x1400),
         local_18 = local_18 - *(float *)(param_1 + 0x1408),
         local_18 * local_18 + local_20[0] * local_20[0] < 4.0)) {
        return 1;
      }
    }
  }
  return 0;
}

// 008243D0  FUN_008243d0  size=34  [between]
void __fastcall FUN_008243d0(int param_1)

{
  if (*(int *)(param_1 + 0x1380) != 0) {
    FUN_00e023a0(*(undefined4 *)(param_1 + 0x4f0),0x28,param_1 + 0x1390);
  }
  return;
}

// 00824480  FUN_00824480  size=34  [between]
void __fastcall FUN_00824480(int param_1)

{
  if ((*(byte *)(param_1 + 0xe90) & 8) != 0) {
    FUN_008e5c50(7);
    *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) & 0xfffffff7;
  }
  return;
}

// 008244B0  FUN_008244b0  size=165  [between]
void __fastcall FUN_008244b0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = *(int *)(param_1 + 0xa84);
  local_20 = *(undefined4 *)(iVar1 + 0x40);
  local_1c = *(undefined4 *)(iVar1 + 0x44);
  local_18 = *(undefined4 *)(iVar1 + 0x48);
  local_14 = *(undefined4 *)(iVar1 + 0x4c);
  iVar1 = FUN_00a12210(0);
  if (iVar1 != 0) {
    local_20 = *(undefined4 *)(iVar1 + 0x40);
    local_1c = *(undefined4 *)(iVar1 + 0x44);
    local_18 = *(undefined4 *)(iVar1 + 0x48);
    local_14 = *(undefined4 *)(iVar1 + 0x4c);
  }
  uVar2 = 1;
  if ((*(byte *)(param_1 + 0xe90) & 0x80) == 0) {
    iVar1 = FUN_00a8c760(0x13);
    if (((iVar1 == 0) && (*(int *)(param_1 + 0x4e4) == 0)) && (*(int *)(param_1 + 0x1998) == 0))
    goto LAB_00824533;
  }
  uVar2 = 0;
LAB_00824533:
  FUN_00a82640();
  FUN_00a83330(&local_20,uVar2);
  return;
}

// 00824560  FUN_00824560  size=289  [between]
undefined4 __thiscall FUN_00824560(int param_1,undefined4 param_2)

{
  int iVar1;
  float fVar2;
  float *pfVar3;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined1 local_20 [28];
  
  pfVar3 = (float *)FUN_00a8b8a0(local_20,param_2);
  iVar1 = *(int *)(param_1 + 0xa84);
  local_30 = *(float *)(iVar1 + 0x40) - (*(float *)(param_1 + 0x40) + *pfVar3);
  local_2c = *(float *)(iVar1 + 0x44) - (*(float *)(param_1 + 0x44) + pfVar3[1]);
  local_28 = *(float *)(iVar1 + 0x48) - (*(float *)(param_1 + 0x48) + pfVar3[2]);
  local_24 = *(float *)(iVar1 + 0x4c) - (*(float *)(param_1 + 0x4c) + pfVar3[3]);
  fVar2 = local_28 * local_28 + local_30 * local_30 + local_2c * local_2c;
  if (fVar2 < 0.0 == (fVar2 == 0.0)) {
    FUN_00ddf460(&local_30,&local_30);
  }
  else {
    FUN_00dd5650(&DAT_0163d0ac);
    local_30 = 0.0;
    local_2c = 1.0;
    local_28 = 0.0;
  }
  pfVar3 = (float *)FUN_00a925a0(local_20);
  if (-0.15 <= pfVar3[2] * local_28 + *pfVar3 * local_30 + pfVar3[1] * local_2c) {
    return 0;
  }
  return 1;
}

// 00824690  FUN_00824690  size=995  [between]
void FUN_00824690(float *param_1,float *param_2,float *param_3)

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
      fVar7 = (float10)fsin(fVar6);
      fVar8 = (float10)(float)((float10)1 - fVar5);
      fVar9 = (float10)fsin(((float10)1 - fVar8) * fVar6);
      fVar6 = (float10)fsin(fVar6 * fVar8);
      fVar8 = (float10)local_20;
      local_20 = (float)(fVar8 * fVar9);
      fVar10 = (float10)local_1c;
      local_1c = (float)(fVar10 * fVar9);
      fVar11 = (float10)local_18;
      local_18 = (float)(fVar11 * fVar9);
      fVar12 = (float10)local_14;
      local_14 = (float)(fVar12 * fVar9);
      fVar13 = (float10)local_30;
      local_30 = (float)(fVar13 * fVar6);
      local_2c = (float)((float10)local_2c * fVar6);
      local_28 = (float)((float10)local_28 * fVar6);
      fVar14 = (float10)local_24;
      local_24 = (float)(fVar14 * fVar6);
      fVar8 = (fVar13 * fVar6 + fVar8 * fVar9) / fVar7;
      *param_1 = (float)fVar8;
      fVar10 = (fVar10 * fVar9 + (float10)local_2c) / fVar7;
      param_1[1] = (float)fVar10;
      fVar11 = ((float10)local_28 + fVar11 * fVar9) / fVar7;
      param_1[2] = (float)fVar11;
      param_1[3] = (float)((fVar14 * fVar6 + fVar12 * fVar9) / fVar7);
      fVar6 = fVar10 * fVar10 + fVar8 * fVar8 + fVar11 * fVar11;
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

// 00824A80  FUN_00824a80  size=1325  [between]
void __thiscall FUN_00824a80(int *param_1,undefined4 *param_2)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  undefined4 uVar8;
  int local_18;
  float local_14;
  int local_10;
  float local_c [2];
  float local_4;
  
  switch(param_1[0x69e]) {
  case 0:
    FUN_00aa4080(0x20,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x3a4] = param_1[0x3a4] | 4;
    (**(code **)(*param_1 + 0x318))();
    iVar5 = param_1[0x1d9];
    if ((iVar5 != 0) && (*(int *)(iVar5 + 0x104) != 1)) {
      *(undefined4 *)(iVar5 + 0x104) = 1;
      *(undefined4 *)(*(int *)(iVar5 + 0xd0) + 4) = 0;
    }
    param_1[0x69e] = param_1[0x69e] + 1;
    goto LAB_00824b13;
  case 1:
LAB_00824b13:
    FUN_008203d0(param_1 + 0x530,0x3ecccccd,0x3eb2b8c2);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      FUN_00aa4080(0x21,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00a96030(0,0x3fe66666);
      param_1[0x249] = 0;
      FUN_00a92f90();
      iVar5 = FUN_00e26e90();
      if (iVar5 == 0) {
        param_1[0x69e] = param_1[0x69e] + 1;
        param_1[0x24a] = -0x40800000;
        return;
      }
      fVar7 = (float10)FUN_00e36a50(0);
      param_1[0x24a] = (int)(float)fVar7;
      param_1[0x69e] = param_1[0x69e] + 1;
      return;
    }
    break;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    uVar8 = 0;
    FUN_00a92f90(0);
    fVar6 = (float10)FUN_00407b40(uVar8);
    fVar6 = fVar6 / (float10)(float)param_1[0x24a];
    param_1[0x249] = (int)(float)fVar6;
    fVar7 = (float10)1;
    if (fVar7 < fVar6 != (fVar7 == fVar6)) {
      param_1[0x249] = (int)(float)fVar7;
    }
    FUN_00a581b0(&local_18,0,param_1[0x249]);
    FUN_00a585a0(local_c,0,param_1[0x249]);
    fVar1 = (float)param_1[0x25];
    fVar7 = (float10)fpatan((float10)local_c[0],(float10)local_4);
    fVar7 = (float10)FUN_00ddba30((float)(fVar7 - (float10)fVar1));
    fVar7 = (float10)FUN_00ddba30((float)(fVar7 * (float10)0.25 + (float10)fVar1));
    param_1[0x25] = (int)(float)fVar7;
    param_1[0x14] = local_18;
    param_1[0x15] = (int)local_14;
    param_1[0x16] = local_10;
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      FUN_00aa4080(0x22,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x69e] = param_1[0x69e] + 1;
      param_1[0x24a] = (int)((float)param_1[0x24a] * 0.4);
      param_1[0x24b] = 0;
      param_1[0x24c] = 0x3c888889;
      return;
    }
    break;
  case 3:
    param_1[0x24b] = (int)((float)param_1[0x24c] * (float)param_1[0x244] + (float)param_1[0x24b]);
    fVar7 = (float10)FUN_00fdc1f0();
    param_1[0x24c] = (int)(float)(fVar7 * (float10)(float)param_1[0x24c]);
    fVar1 = (float)param_1[0x24b] / (float)param_1[0x24a];
    bVar3 = NAN(fVar1);
    bVar4 = 1.0 < fVar1 == (fVar1 == 1.0);
    if (!bVar3 && !bVar4) {
      fVar1 = 1.0;
    }
    FUN_00a581b0(&local_18,0,fVar1 + 1.0);
    FUN_00a585a0(local_c,0,fVar1 + 1.0);
    fVar1 = (float)param_1[0x25];
    fVar7 = (float10)fpatan((float10)local_c[0],(float10)local_4);
    fVar7 = (float10)FUN_00ddba30((float)(fVar7 - (float10)fVar1));
    fVar7 = (float10)FUN_00ddba30((float)(fVar7 * (float10)0.25 + (float10)fVar1));
    param_1[0x25] = (int)(float)fVar7;
    fVar1 = (float)param_1[0x15];
    pcVar2 = *(code **)(*param_1 + 800);
    param_1[0x14] = local_18;
    param_1[0x15] = (int)local_14;
    param_1[0x16] = local_10;
    param_1[0x225] = (int)-(fVar1 - local_14);
    iVar5 = (*pcVar2)(0x3d888889);
    if (iVar5 == 0) {
      if (bVar3 || bVar4) {
        return;
      }
      param_1[0x69e] = param_1[0x69e] + 1;
    }
    else {
      FUN_00aa4080(0x23,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x69e] = 5;
    }
    (**(code **)(*param_1 + 0x314))();
    iVar5 = param_1[0x1d9];
    if ((iVar5 != 0) && (*(int *)(iVar5 + 0x104) != 0)) {
      *(undefined4 *)(iVar5 + 0x104) = 0;
    }
    return;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar5 != 0) {
      FUN_00aa4080(0x23,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x69e] = param_1[0x69e] + 1;
      return;
    }
    break;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      *param_2 = 1;
      return;
    }
  }
  return;
}

// 00824FD0  FUN_00824fd0  size=231  [between]
void __thiscall FUN_00824fd0(int *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00a8cab0();
  param_1[0x515] = iVar1;
  uVar2 = FUN_00a8cab0();
  if ((uVar2 & 0xffff0000) != 0x20000) {
    iVar1 = FUN_00a8cab0();
    if (iVar1 != 0x70005) {
      iVar1 = FUN_00a8cab0();
      if (iVar1 != 0x70003) {
        iVar1 = FUN_00a8cab0();
        if (iVar1 != 0x70004) goto LAB_00825029;
      }
    }
  }
  iVar1 = FUN_00a8cab0();
  param_1[0x516] = iVar1;
LAB_00825029:
  if ((param_2 & 0xffff0000) == 0x20000) {
    FUN_00c27260(param_1[0x6a1]);
  }
  param_1[0x24] = 0;
  FUN_00a8caf0(param_2,0,0,0);
  if ((*(byte *)(param_1 + 0x3a4) & 8) != 0) {
    FUN_008e5c50(7);
    param_1[0x3a4] = param_1[0x3a4] & 0xfffffff7;
  }
  param_1[0x3a4] = param_1[0x3a4] & 0xffffcfda;
  (**(code **)(*param_1 + 0x1f8))((param_2 & 0xffff0000) == 0x30000);
  param_1[0x3a4] = param_1[0x3a4] & 0xefffbfff;
  return;
}

// 008250C0  FUN_008250c0  size=75  [between]
void __thiscall FUN_008250c0(int param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  
  if (*(int **)(param_1 + 0xa84) != (int *)0x0) {
    puVar2 = &DAT_01be9c38;
    (**(code **)(**(int **)(param_1 + 0xa84) + 4))(&DAT_01be9c38);
    iVar1 = FUN_00dd6d80(puVar2);
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

// 00825110  FUN_00825110  size=174  [between]
void __fastcall FUN_00825110(int *param_1)

{
  int iVar1;
  
  if ((((((param_1[0x186] & 0xffff0000U) != 0xf0000) && (param_1[0x187] != 0x20003)) &&
       (iVar1 = FUN_00a8cbe0(0xe0000), iVar1 == 0)) &&
      ((iVar1 = FUN_00a8cbe0(0xe0001), iVar1 == 0 && (iVar1 = FUN_00a8cbe0(0x1000c), iVar1 == 0))))
     && ((iVar1 = FUN_008207f0(), iVar1 == 0 &&
         (iVar1 = (**(code **)(*param_1 + 0x1fc))(), iVar1 == 0)))) {
    iVar1 = FUN_00a8c760(4);
    if ((iVar1 == 0) && (iVar1 = FUN_00a8c760(0xf), iVar1 == 0)) {
      iVar1 = FUN_00a9f760(10);
      if (iVar1 == 0) {
        return;
      }
      FUN_00824fd0(0x1000e);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x008251bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  return;
}

// 008251C0  FUN_008251c0  size=67  [between]
undefined4 __fastcall FUN_008251c0(int param_1)

{
  if ((((*(int *)(param_1 + 0x4a0) == 0) && ((*(byte *)(param_1 + 0xb00) & 2) != 0)) &&
      (*(int *)(param_1 + 0x14bc) != 0)) &&
     ((*(float *)(param_1 + 0x1608) < *(float *)(param_1 + 0x1604) &&
      (*(int *)(param_1 + 0x1600) < 2)))) {
    return 1;
  }
  return 0;
}

// 00825210  FUN_00825210  size=421  [between]
void __fastcall FUN_00825210(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 local_8;
  int local_4;
  
  iVar2 = *(int *)(param_1 + 0x1998);
  local_4 = 0;
  local_8 = 0;
  *(undefined4 *)(param_1 + 0x199c) = 0;
  if (iVar2 == 0) {
    FUN_00ac81f0(param_1 + 0x40,&local_4,&local_8);
  }
  else {
    FUN_00ac8270(param_1 + 0x40,&local_4,&local_8);
  }
  if (*(int *)(param_1 + 0xa84) != 0) {
    FUN_00ac81f0(*(int *)(param_1 + 0xa84) + 0x40,(undefined4 *)(param_1 + 0x199c),&local_8);
  }
  if (local_4 == 0) {
    fVar1 = *(float *)(param_1 + 0x19a4) - *(float *)(param_1 + 0x910);
    if (0.0 <= fVar1) goto LAB_00825289;
  }
  else {
    fVar1 = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0x19a4);
    if (fVar1 < 0.0) {
LAB_00825289:
      fVar1 = 0.0;
    }
  }
  *(float *)(param_1 + 0x19a4) = fVar1;
  fVar1 = *(float *)(param_1 + 0x19a4);
  if (NAN(fVar1) || 15.0 < fVar1 == (fVar1 == 15.0)) {
    if (*(float *)(param_1 + 0x19a4) <= -15.0) {
      *(undefined4 *)(param_1 + 0x1998) = 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x1998) = 1;
  }
  if ((iVar2 != 0) && (*(int *)(param_1 + 0x1998) == 0)) {
    iVar2 = *(int *)(param_1 + 0x618);
    if (iVar2 < 0x60005) {
      if ((iVar2 == 0x60004) || ((0xffff < iVar2 && ((iVar2 < 0x10002 || (iVar2 == 0x10010)))))) {
LAB_00825322:
        if ((*(uint *)(param_1 + 0xe90) & 0x80000) == 0) {
          FUN_00824fd0(0x10011);
        }
      }
    }
    else if (iVar2 == 0x70000) goto LAB_00825322;
  }
  if (*(int *)(param_1 + 0x19a0) != 0) {
    if (*(int *)(param_1 + 0x1998) != 0) goto LAB_00825354;
    *(undefined4 *)(param_1 + 0x19a0) = 0;
  }
  if (*(int *)(param_1 + 0x1998) == 0) {
    return;
  }
LAB_00825354:
  if (*(int *)(param_1 + 0x19a0) == 0) {
    iVar2 = *(int *)(param_1 + 0x618);
    if (iVar2 < 0x60005) {
      if (iVar2 != 0x60004) {
        if (iVar2 < 0x10000) {
          return;
        }
        if ((0x10001 < iVar2) && (iVar2 != 0x10010)) {
          return;
        }
      }
    }
    else if (iVar2 != 0x70000) {
      return;
    }
    if ((*(uint *)(param_1 + 0xe90) & 0x80000) == 0) {
      *(undefined4 *)(param_1 + 0x19a0) = 1;
      FUN_00824fd0(0x10010);
    }
  }
  return;
}

// 008253C0  FUN_008253c0  size=608  [between]
void __fastcall FUN_008253c0(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  float *pfVar6;
  float10 fVar7;
  float10 fVar8;
  undefined4 local_14;
  
  iVar3 = FUN_00a8c760(0x30);
  if (iVar3 == 0) {
    fVar1 = *(float *)(param_1 + 0x19dc);
    if ((!NAN(fVar1) && 1.0 < fVar1 != (fVar1 == 1.0)) && (*(int *)(param_1 + 0x76c) != 0)) {
      FUN_009fb990();
    }
    fVar1 = *(float *)(param_1 + 0x19dc);
    fVar7 = (float10)FUN_00fdc1f0();
    *(float *)(param_1 + 0x19dc) = (float)((float10)fVar1 + -(float10)fVar1 * ((float10)1 - fVar7));
  }
  else {
    fVar1 = *(float *)(param_1 + 0x19dc);
    fVar8 = (float10)FUN_00fdc1f0();
    fVar7 = (float10)1;
    fVar8 = (fVar7 - fVar8) * (fVar7 - (float10)fVar1) + (float10)fVar1;
    *(float *)(param_1 + 0x19dc) = (float)fVar8;
    if ((float10)0.99 < fVar8) {
      *(float *)(param_1 + 0x19dc) = (float)fVar7;
    }
  }
  if (*(int *)(param_1 + 0x76c) != 0) {
    fVar1 = *(float *)(param_1 + 0x19dc);
    uVar5 = 0;
    *(float *)(*(int *)(param_1 + 0x76c) + 0xb94) = fVar1;
    if (*(int *)(*(int *)(param_1 + 0x76c) + 0x18) != 0) {
      iVar3 = 0;
      pfVar6 = (float *)(param_1 + 0x19e0);
      do {
        fVar2 = *pfVar6;
        if (*pfVar6 < fVar1) {
          fVar2 = fVar1;
        }
        *(float *)(*(int *)(*(int *)(param_1 + 0x76c) + 0x1c) + 0xfc + iVar3) = fVar2;
        uVar5 = uVar5 + 1;
        pfVar6 = pfVar6 + 1;
        iVar3 = iVar3 + 0x100;
      } while (uVar5 < *(uint *)(*(int *)(param_1 + 0x76c) + 0x18));
    }
  }
  iVar3 = FUN_00a8c760(0x31);
  if ((iVar3 == 0) && ((*(uint *)(param_1 + 0xe90) & 0x4000) == 0)) {
    iVar3 = 0;
  }
  else {
    iVar3 = 1;
  }
  iVar4 = FUN_00a81330();
  if ((iVar3 != 0) != (*(int *)(param_1 + 0x1948) != 0)) {
    if ((iVar3 == 0) || (iVar4 == 0)) {
      FUN_00ac8b20(0);
      FUN_00ac8ad0(0,*(undefined4 *)(param_1 + 0x4f0),iVar4,0x66,0xffffffff,4);
    }
    else {
      FUN_00ac8b20(0);
      FUN_00ac8ad0(0,*(undefined4 *)(param_1 + 0x4f0),iVar4,0x2f,0xffffffff,4);
      iVar4 = FUN_00ac8c70(iVar4);
      if (iVar4 != 0) {
        *(undefined4 *)(iVar4 + 0x20) = 0x40490fdb;
        *(undefined4 *)(iVar4 + 0x24) = 0;
        *(undefined4 *)(iVar4 + 0x28) = 0;
        *(undefined4 *)(iVar4 + 0x2c) = local_14;
        *(undefined4 *)(iVar4 + 0x30) = 0;
        *(undefined4 *)(iVar4 + 0x34) = 0;
        *(undefined4 *)(iVar4 + 0x38) = 0xbe19999a;
        *(undefined4 *)(iVar4 + 0x3c) = local_14;
      }
    }
  }
  *(int *)(param_1 + 0x1948) = iVar3;
  iVar3 = FUN_00a8c760(0x33);
  if (iVar3 == 0) {
    if (*(int *)(param_1 + 0x194c) != 0) {
      FUN_00ac9420("tentacle_a");
      FUN_00ac94e0("tentacle_b");
    }
    *(undefined4 *)(param_1 + 0x194c) = 0;
    return;
  }
  if (*(int *)(param_1 + 0x194c) == 0) {
    FUN_00ac9420("tentacle_b");
    FUN_00ac94e0("tentacle_a");
  }
  *(undefined4 *)(param_1 + 0x194c) = 1;
  return;
}

// 008256E0  FUN_008256e0  size=145  [between]
void __thiscall FUN_008256e0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar4 = 1;
  if ((*(uint *)(param_1 + 0xe90) & 0x80000) != 0) {
    iVar4 = 2;
  }
  uVar2 = *(undefined1 *)(param_1 + 0x1214 + iVar4 * 0x10);
  uVar5 = *(undefined4 *)(param_1 + 0x120c + iVar4 * 0x10);
  puVar1 = (undefined4 *)(param_1 + 0x1208 + iVar4 * 0x10);
  uVar3 = puVar1[2];
  param_2[1] = *puVar1;
  param_2[3] = uVar5;
  *(undefined1 *)(param_2 + 4) = uVar2;
  param_2[2] = uVar3;
  *(undefined1 *)((int)param_2 + 0x11) = 10;
  param_2[0x24] = param_2[0x24] | 0x2000000;
  param_2[0x23] = param_2[0x23] | 0x2080;
  param_2[0x23] = param_2[0x23] & 0xefffffff;
  param_2[0x23] = param_2[0x23] | 0x10;
  *param_2 = 0x14f;
  param_2[5] = *(undefined4 *)(param_1 + 0x4f0);
  uVar5 = FUN_00a7c7f0();
  FUN_00a7c960(uVar5);
  return;
}

// 00825780  FUN_00825780  size=119  [between]
void __thiscall FUN_00825780(int param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined1 *)(param_1 + 0x1214);
  uVar3 = *(undefined4 *)(param_1 + 0x1210);
  uVar2 = *(undefined4 *)(param_1 + 0x120c);
  param_2[1] = *(undefined4 *)(param_1 + 0x1208);
  param_2[3] = uVar2;
  *(undefined1 *)(param_2 + 4) = uVar1;
  param_2[2] = uVar3;
  *(undefined1 *)((int)param_2 + 0x11) = 10;
  param_2[0x24] = param_2[0x24] | 0x2000000;
  param_2[0x23] = param_2[0x23] | 0x2080;
  param_2[0x23] = param_2[0x23] & 0xefffffff;
  param_2[0x23] = param_2[0x23] | 0x10;
  *param_2 = 0x14f;
  param_2[5] = *(undefined4 *)(param_1 + 0x4f0);
  uVar3 = FUN_00a7c7f0();
  FUN_00a7c960(uVar3);
  return;
}

// 00825800  FUN_00825800  size=41  [between]
void __fastcall FUN_00825800(int param_1)

{
  if (*(int *)(param_1 + 0x1088) != 0) {
    (**(code **)(*(int *)(param_1 + 0xff0) + 8))(0,0,0);
  }
  return;
}

// 00825830  FUN_00825830  size=47  [between]
void __thiscall FUN_00825830(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x1138) != 0) {
    (**(code **)(*(int *)(param_1 + 0x10a0) + 8))(param_2,0,0);
  }
  return;
}

// 00825860  FUN_00825860  size=44  [between]
void __fastcall FUN_00825860(int param_1)

{
  if ((*(uint *)(param_1 + 0xe90) & 0x8000) == 0) {
    FUN_00e02240(*(undefined4 *)(param_1 + 0x4f0),3);
    *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) | 0x8000;
  }
  return;
}

// 00825890  FUN_00825890  size=47  [between]
void __fastcall FUN_00825890(int param_1)

{
  if ((*(byte *)(param_1 + 0xe92) & 1) != 0) {
    FUN_00a8c9b0(0,2,0x3f800000,0);
    *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) & 0xfffeffff;
  }
  return;
}

// 008258C0  FUN_008258c0  size=90  [between]
undefined4 __fastcall FUN_008258c0(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x4a0) == 0) && ((*(byte *)(param_1 + 0xb00) & 2) != 0)) {
    iVar1 = FUN_00a8eea0();
    iVar2 = FUN_00a8eeb0();
    if ((float)iVar1 / (float)iVar2 < 0.1 != ((float)iVar1 / (float)iVar2 == 0.1)) {
      return 1;
    }
  }
  return 0;
}

// 00825920  Emc220::getAttackInfo  size=726  [class]
undefined4 __thiscall Emc220::getAttackInfo(int param_1,ushort *param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 unaff_EBX;
  uint unaff_EBP;
  undefined1 uStack_8;
  
  iVar2 = FUN_00dd3500(0x110,&DAT_01b7c0b8);
  if ((iVar2 == 0) || (iVar2 = CollisionAttackData::CollisionAttackData(), iVar2 == 0)) {
    FUN_00dd5650(&DAT_01648840);
    return 0;
  }
  puVar1 = *(uint **)(iVar2 + 8);
  puVar1[5] = *(uint *)(param_1 + 0x4f0);
  uVar3 = FUN_00a7c7f0();
  FUN_00a7c960(uVar3);
  uVar4 = FUN_00ac8520(*param_2);
  (**(code **)(**(int **)(param_1 + 0x754) + 0x10))(*param_2);
  (**(code **)(**(int **)(param_1 + 0x754) + 0x20))(*param_2);
  uVar5 = (**(code **)(**(int **)(param_1 + 0x754) + 0x18))(*param_2);
  puVar1[3] = unaff_EBP;
  puVar1[1] = uVar4;
  *(undefined1 *)(puVar1 + 4) = uStack_8;
  puVar1[2] = uVar5;
  *puVar1 = (uint)*param_2;
  iVar2 = FUN_00a12210(0xffe);
  switch(*param_2) {
  case 4:
    *puVar1 = 0x148;
    puVar1[0x23] = puVar1[0x23] | 0x40000000;
    goto LAB_00825a22;
  case 6:
    *puVar1 = 0x149;
    puVar1[0x23] = puVar1[0x23] | 0x40000000;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    goto LAB_00825bd4;
  case 8:
    *puVar1 = 0x14a;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    *(undefined2 *)(puVar1 + 0x21) = 0x3300;
    break;
  case 10:
    *puVar1 = 0x14b;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    *(undefined2 *)(puVar1 + 0x21) = 0x3300;
    break;
  case 0xc:
    *puVar1 = 0x14c;
    goto LAB_00825bc6;
  case 0xe:
    *puVar1 = 0x14d;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    *(undefined2 *)(puVar1 + 0x21) = 0x3301;
    break;
  case 0x10:
    *puVar1 = 0x14e;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
LAB_00825a22:
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    *(undefined2 *)(puVar1 + 0x21) = 0x3301;
    break;
  case 0x12:
    *puVar1 = 0x152;
    puVar1[0x24] = puVar1[0x24] | 0x4000000;
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    goto LAB_00825bd4;
  case 0x16:
    *puVar1 = 0x153;
    puVar1[0x23] = puVar1[0x23] | 0x2000;
    puVar1[0x24] = puVar1[0x24] | 0x4000000;
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    *(undefined2 *)(puVar1 + 0x21) = 0xffff;
    break;
  case 0x18:
    *puVar1 = 0x147;
    *(undefined2 *)(puVar1 + 0x21) = 0xffff;
    puVar1[0x23] = puVar1[0x23] | 0x40000000;
    if (iVar2 != 0) {
      FUN_0041cc70(iVar2 + 0x10,0x40666666,0x40c90fdb,1,0,*(int *)(param_1 + 0x760) + 1);
    }
    break;
  case 0x1a:
    *puVar1 = 0x155;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    *(undefined2 *)(puVar1 + 0x21) = 0x3301;
    break;
  case 0x1c:
    *puVar1 = 0x156;
LAB_00825bc6:
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
LAB_00825bd4:
    *(undefined2 *)(puVar1 + 0x21) = 0x3301;
  }
  FUN_00aa56a0(puVar1);
  return unaff_EBX;
}

// 00825C50  Emc220::vf1A4  size=585  [class]
void __thiscall Emc220::vf1A4(int param_1,int *param_2,uint param_3)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  uint uVar4;
  uint uVar5;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined1 local_20 [28];
  
  uVar5 = param_3 >> 2 & 1;
  uVar4 = param_3 >> 1 & 1;
  if (((uVar4 != 0) || (uVar5 != 0)) || ((param_3 & 8) != 0)) {
    FUN_00a7c960(param_2 + 0x48);
  }
  if ((*(uint *)(param_1 + 0xe90) & 0x80000) == 0) {
    if (uVar5 != 0) {
      iVar2 = *param_2;
      if ((0x149 < iVar2) && ((iVar2 < 0x14c || (iVar2 == 0x152)))) {
        FUN_00824fd0(0x30002);
        return;
      }
      if ((*(uint *)(param_1 + 0xe90) & 0x4000000) != 0) {
        FUN_00824fd0(0x30002);
        return;
      }
      FUN_00824fd0(0x30003);
      return;
    }
    if (uVar4 == 0) {
      if ((param_3 & 1) != 0) {
        *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) | 1;
        if (*param_2 == 0x14a) {
          iVar2 = FUN_00a81330();
          if ((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
            local_30 = *(float *)(iVar2 + 0x40) - *(float *)(param_1 + 0x40);
            local_28 = *(float *)(iVar2 + 0x48) - *(float *)(param_1 + 0x48);
            local_24 = *(float *)(iVar2 + 0x4c) - *(float *)(param_1 + 0x4c);
            local_2c = 0.0;
            if ((local_30 != 0.0) || (local_28 != 0.0)) {
              fVar1 = local_30 * local_30 + local_28 * local_28;
              if (fVar1 < 0.0 == (fVar1 == 0.0)) {
                FUN_00ddf460(&local_30,&local_30);
              }
              else {
                FUN_00dd5650(&DAT_0163d0ac);
                local_30 = 0.0;
                local_2c = 1.0;
                local_28 = 0.0;
              }
              pfVar3 = (float *)FUN_00a925a0(local_20);
              if (0.97 <= pfVar3[2] * local_28 + *pfVar3 * local_30 + pfVar3[1] * local_2c) {
                FUN_00824fd0(0x20009);
                return;
              }
            }
          }
        }
        else if (*param_2 == 0x14f) {
          *(int *)(param_1 + 0x1a90) = *(int *)(param_1 + 0x1a90) + 1;
          return;
        }
      }
    }
    else {
      iVar2 = *param_2;
      if ((0x149 < iVar2) && ((iVar2 < 0x14c || (iVar2 == 0x152)))) {
        FUN_00824fd0(0x20009);
        return;
      }
    }
  }
  return;
}

// 00825EA0  Emc220::vf1A0  size=314  [class]
undefined4 __thiscall Emc220::vf1A0(int *param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  if (param_3 != 0) {
    uVar1 = FUN_00a7c7f0();
    FUN_00a7c960(uVar1);
    if (*param_2 == 0x152) {
      iVar2 = (**(code **)(*param_1 + 0x274))();
      if (iVar2 == 0) {
        iVar2 = FUN_00a81330();
        if (iVar2 == 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = FUN_00a7c8a0();
        }
        iVar2 = FUN_00822380(uVar1);
        if ((iVar2 == 0) || (*(int *)(iVar2 + 0x8f4) == 0)) {
          uVar1 = FUN_00a7c8a0();
          piVar3 = (int *)FUN_00602f90(uVar1);
          if (piVar3 == (int *)0x0) {
            return 0;
          }
          if ((param_1[0x3a4] & 0x100U) == 0) {
            return 0;
          }
          iVar2 = (**(code **)(*piVar3 + 0x14c))(0x57,param_1[0x13c]);
          if (iVar2 == 0) {
            return 0;
          }
          (**(code **)(*piVar3 + 0x150))(0x57,param_1[0x13c]);
          (**(code **)(*param_1 + 0x150))(0x57,piVar3[0x13c]);
          FUN_00b7ab80(0x41200000,0x3d4ccccd);
          (**(code **)(*param_1 + 0x220))(0x40a00000);
          return 1;
        }
      }
      return 1;
    }
    if (*param_2 == 0x153) {
      return 1;
    }
  }
  return 0;
}

// 00825FE0  FUN_00825fe0  size=38  [between]
bool __fastcall FUN_00825fe0(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x4a0) == 0) && ((*(byte *)(param_1 + 0xb00) & 2) != 0)) {
    return true;
  }
  iVar1 = FUN_00a90070(5);
  return iVar1 != 0;
}

// 00826010  FUN_00826010  size=269  [between]
undefined4 __fastcall FUN_00826010(int param_1)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar4;
  float10 fVar5;
  float10 fVar6;
  
  if (*(int *)(param_1 + 0x13f0) != 0) {
    fVar5 = (float10)FUN_008202f0(param_1 + 0x40);
    fVar1 = (float)fVar5;
    if (*(int *)(param_1 + 0xa84) == 0) {
      fVar5 = (float10)-1.0;
      uVar4 = extraout_EDX;
    }
    else {
      fVar5 = (float10)FUN_008202f0(*(int *)(param_1 + 0xa84) + 0x40);
      uVar4 = extraout_EDX_00;
    }
    fVar2 = (float)fVar5;
    fVar5 = (float10)FUN_00823fe0(uVar4);
    if (*(int *)(param_1 + 0xa84) == 0) {
      fVar6 = (float10)-1.0;
    }
    else {
      fVar6 = (float10)FUN_00823fe0(*(int *)(param_1 + 0xa84) + 0x40);
      fVar5 = (float10)(float)fVar5;
    }
    if ((((fVar1 < 10.0 == (fVar1 == 10.0)) || (fVar1 < 3.0)) || (fVar2 < 12.5 == (fVar2 == 12.5)))
       || ((fVar2 < 4.5 || ((float10)8.0 < fVar5)))) {
      return 0;
    }
    fVar3 = (float10)0;
    if ((fVar3 < fVar5 != (fVar3 == fVar5)) && ((fVar6 <= (float10)8.0 && (fVar3 <= fVar6)))) {
      return 1;
    }
  }
  return 0;
}

// 00826120  FUN_00826120  size=236  [between]
void __fastcall FUN_00826120(int *param_1)

{
  bool bVar1;
  int iVar2;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  if (param_1[0x187] == 0) {
    param_1[0x6ae] = param_1[0x6ae] + -1;
    FUN_00aa4080(0x65,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a8c760(0);
  if (iVar2 != 0) {
    FUN_008203d0(param_1[0x2a1] + 0x40,0x3e3851ec,0x3db2b8c2);
  }
  if ((param_1[0x128] == 0) && ((*(byte *)(param_1 + 0x2c0) & 2) != 0)) {
    iVar2 = FUN_00a8c760(4);
    if (iVar2 != 0) {
      bVar1 = true;
      goto LAB_008261ea;
    }
  }
  bVar1 = false;
LAB_008261ea:
  iVar2 = FUN_00a94ce0(0);
  if ((iVar2 == 0) && (!bVar1)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00826207. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00826210  FUN_00826210  size=338  [between]
void __fastcall FUN_00826210(int *param_1)

{
  bool bVar1;
  int iVar2;
  float10 fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  if (param_1[0x187] == 0) {
    param_1[0x6ae] = param_1[0x6ae] + -1;
    FUN_00aa4080(0x66,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a8c760(0);
  if (iVar2 != 0) {
    FUN_008203d0(param_1[0x2a1] + 0x40,0x3e3851ec,0x3db2b8c2);
  }
  if ((float)param_1[0x2a4] <= 9.0) {
    uVar6 = 1;
    uVar5 = 0x80;
    uVar4 = 0;
    FUN_00a92f90(0,0x80,1);
    FUN_00e3a1a0(uVar4,uVar5,uVar6);
  }
  if ((param_1[0x128] == 0) && ((*(byte *)(param_1 + 0x2c0) & 2) != 0)) {
    iVar2 = FUN_00a8c760(4);
    if (iVar2 != 0) {
      bVar1 = true;
      goto LAB_00826304;
    }
  }
  bVar1 = false;
LAB_00826304:
  iVar2 = FUN_00a94ce0(0);
  if ((iVar2 != 0) || (bVar1)) {
    fVar3 = (float10)FUN_00a8ec30(param_1[0x2a1] + 0x40);
    fVar3 = (float10)FUN_00ddba30((float)((float10)(float)param_1[0x25] - fVar3));
    if (ABS(fVar3) < (float10)2.3561945) {
                    /* WARNING: Could not recover jumptable at 0x00826360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    FUN_00824fd0(0x10003);
  }
  return;
}

// 00826370  FUN_00826370  size=538  [between]
void __fastcall FUN_00826370(int *param_1)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  float10 fVar4;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  if (param_1[0x187] == 0) {
    param_1[0x6ae] = param_1[0x6ae] + -1;
    FUN_00aa4080(0x67,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x188] = 0;
    param_1[0x250] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  bVar2 = true;
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar4 = (float10)FUN_00a8ec30(param_1[0x2a1] + 0x40);
  fVar4 = (float10)FUN_00ddba30((float)((float10)(float)param_1[0x25] - fVar4));
  fVar4 = (float10)FUN_00ddba30((float)(ABS(fVar4) + (float10)3.1415927));
  fVar1 = (float)fVar4;
  if (param_1[0x188] == 0) {
    iVar3 = FUN_00a8c760(0);
    if (iVar3 == 0) {
      if (param_1[0x250] != 0) {
        param_1[0x188] = param_1[0x188] + 1;
      }
    }
    else {
      FUN_008203d0(param_1[0x2a1] + 0x40,0x3e3851ec,0x3d567750);
      param_1[0x250] = param_1[0x250] + 1;
    }
  }
  else if ((param_1[0x188] == 1) && (iVar3 = FUN_00a8c760(0), iVar3 != 0)) {
    FUN_00820490(param_1[0x2a1] + 0x40,0x40490fdb,0x3e4ccccd,0x3da0d97c);
    param_1[0x250] = param_1[0x250] + 1;
  }
  iVar3 = FUN_00a8c760(0xf);
  if ((iVar3 != 0) &&
     ((!NAN(fVar1) && 1.7453293 < fVar1 != (fVar1 == 1.7453293) ||
      (fVar1 = (float)param_1[0x2a4], !NAN(fVar1) && 64.0 < fVar1 != (fVar1 == 64.0))))) {
                    /* WARNING: Could not recover jumptable at 0x00826520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  if (((param_1[0x128] != 0) || ((*(byte *)(param_1 + 0x2c0) & 2) == 0)) ||
     (iVar3 = FUN_00a8c760(4), iVar3 == 0)) {
    bVar2 = false;
  }
  iVar3 = FUN_00a94ce0(0);
  if ((iVar3 == 0) && (!bVar2)) {
    return;
  }
  if ((float)param_1[0x2a4] <= 16.0) {
    FUN_00824fd0(0x50000);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00826588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00826590  FUN_00826590  size=2395  [between]
void __fastcall FUN_00826590(int *param_1)

{
  float fVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  undefined4 uVar9;
  float local_4;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  switch(param_1[0x187]) {
  case 0:
    if (param_1[0x4fc] == 0) {
                    /* WARNING: Could not recover jumptable at 0x008265d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    param_1[0x6ae] = param_1[0x6ae] + 5;
    param_1[0x510] = 0;
    param_1[0x4fd] = 0;
    param_1[0x511] = 0;
    param_1[0x4fc] = 0;
    param_1[0x3a4] = param_1[0x3a4] | 4;
    FUN_00a8d280();
    fVar1 = (float)param_1[0x500] - (float)param_1[0x10];
    fVar3 = (float)param_1[0x502] - (float)param_1[0x12];
    fVar4 = fVar3 * fVar3 + fVar1 * fVar1;
    if (fVar4 < 36.0 != (fVar4 == 36.0)) {
      (**(code **)(*param_1 + 0x318))();
      iVar6 = param_1[0x1d9];
      if ((iVar6 != 0) && (*(int *)(iVar6 + 0x104) != 1)) {
        *(undefined4 *)(iVar6 + 0x104) = 1;
        *(undefined4 *)(*(int *)(iVar6 + 0xd0) + 4) = 0;
      }
      FUN_00aa4080(0x6f,0,0x3d088889,0x3f800000,0x8000080,0xbf800000,0x3f800000);
      param_1[0x501] = param_1[0x15];
      param_1[600] = (int)((float)param_1[0x10] - (float)param_1[0x500]);
      param_1[0x259] = (int)((float)param_1[0x11] - (float)param_1[0x501]);
      param_1[0x25a] = (int)((float)param_1[0x12] - (float)param_1[0x502]);
      param_1[0x25b] = (int)((float)param_1[0x13] - (float)param_1[0x503]);
      fVar7 = (float10)fpatan((float10)(float)param_1[0x504],(float10)(float)param_1[0x506]);
      fVar7 = (float10)FUN_00ddba30((float)(fVar7 + (float10)3.1415927));
      param_1[0x249] = (int)(float)fVar7;
      fVar7 = (float10)FUN_00ddba30((float)((float10)(float)param_1[0x25] - fVar7));
      param_1[0x248] = (int)(float)fVar7;
      param_1[0x187] = 4;
      return;
    }
    fVar1 = fVar3 * fVar3 + fVar1 * fVar1;
    if (fVar1 < 121.0 != (fVar1 == 121.0)) {
      FUN_00aa4080(0x6e,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = 3;
      return;
    }
    iVar6 = FUN_00a9f760(10);
    if (iVar6 != 0) {
      FUN_00aa4080(10,0,0x3d888889,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x187] = 2;
      return;
    }
    FUN_00aa4080(0xb,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_008203d0(param_1 + 0x500,0x3e4ccccd,0x3db2b8c2);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar6 = FUN_00a94ce0(0);
    if (iVar6 != 0) {
      fVar7 = (float10)FUN_008205c0(param_1 + 0x500);
      if ((float10)0.7853982 <= fVar7) {
        FUN_00824fd0(0x10006);
        return;
      }
      FUN_00aa4080(10,0,0x3d888889,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 2:
    FUN_008203d0(param_1 + 0x500,0x3e4ccccd,0x3db2b8c2);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar6 = FUN_00824150();
    if (iVar6 != 0) {
      FUN_00824fd0(0x10007);
      return;
    }
    fVar1 = (float)param_1[0x500] - (float)param_1[0x10];
    fVar1 = ((float)param_1[0x502] - (float)param_1[0x12]) *
            ((float)param_1[0x502] - (float)param_1[0x12]) + fVar1 * fVar1;
    if (fVar1 < 121.0 != (fVar1 == 121.0)) {
      FUN_00aa4080(0x6e,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_008e5c50(0xd);
      param_1[0x3a4] = param_1[0x3a4] | 8;
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 3:
    FUN_008203d0(param_1 + 0x500,0x3e4ccccd,0x3db2b8c2);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar6 = FUN_00a94ce0(0);
    if (iVar6 != 0) {
      (**(code **)(*param_1 + 0x318))();
      iVar6 = param_1[0x1d9];
      if ((iVar6 != 0) && (*(int *)(iVar6 + 0x104) != 1)) {
        *(undefined4 *)(iVar6 + 0x104) = 1;
        *(undefined4 *)(*(int *)(iVar6 + 0xd0) + 4) = 0;
      }
      FUN_00aa4080(0x6f,0,0x3d088889,0x3f800000,0x8000080,0xbf800000,0x3f800000);
      param_1[0x501] = param_1[0x15];
      param_1[600] = (int)((float)param_1[0x10] - (float)param_1[0x500]);
      param_1[0x259] = (int)((float)param_1[0x11] - (float)param_1[0x501]);
      param_1[0x25a] = (int)((float)param_1[0x12] - (float)param_1[0x502]);
      param_1[0x25b] = (int)((float)param_1[0x13] - (float)param_1[0x503]);
      fVar7 = (float10)fpatan((float10)(float)param_1[0x504],(float10)(float)param_1[0x506]);
      fVar7 = (float10)FUN_00ddba30((float)(fVar7 + (float10)3.1415927));
      param_1[0x249] = (int)(float)fVar7;
      fVar7 = (float10)FUN_00ddba30((float)((float10)(float)param_1[0x25] - fVar7));
      param_1[0x248] = (int)(float)fVar7;
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    uVar9 = 0;
    FUN_00a92f90(0);
    fVar7 = (float10)FUN_00407b40(uVar9);
    uVar9 = 0;
    FUN_00a92f90(0);
    fVar8 = (float10)FUN_0043f390(uVar9);
    fVar7 = (float10)1 - (float10)(float)fVar7 / fVar8;
    param_1[0x14] =
         (int)(float)(fVar7 * (float10)(float)param_1[600] + (float10)(float)param_1[0x500]);
    param_1[0x15] =
         (int)(float)((float10)(float)param_1[0x501] + (float10)(float)param_1[0x259] * fVar7);
    param_1[0x16] =
         (int)(float)((float10)(float)param_1[0x25a] * fVar7 + (float10)(float)param_1[0x502]);
    param_1[0x17] =
         (int)(float)((float10)(float)param_1[0x25b] * fVar7 + (float10)(float)param_1[0x503]);
    param_1[0x25] =
         (int)(float)(fVar7 * (float10)(float)param_1[0x248] + (float10)(float)param_1[0x249]);
    iVar6 = FUN_00a94ce0(0);
    if (iVar6 != 0) {
      FUN_008e5c50(0xd);
      param_1[0x3a4] = param_1[0x3a4] | 8;
      param_1[0x14] = param_1[0x500];
      param_1[0x16] = param_1[0x502];
      param_1[0x25] = param_1[0x249];
      FUN_00aa4080(0x70,0,0x3d088889,0x3f800000,0x8038000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar6 = FUN_00a8c760(0);
    if (iVar6 != 0) {
      fVar7 = (float10)FUN_008205f0();
      if ((float10)1.3089969 <= fVar7) {
        local_4 = (float)param_1[0x24];
        fVar7 = (float10)0.2617994 - (float10)local_4;
      }
      else {
        FUN_00820560(0x3eb33333,0x3eb2b8c2);
        iVar6 = param_1[0x2a1];
        fVar7 = (float10)*(float *)(iVar6 + 0x40) - (float10)(float)param_1[0x10];
        fVar8 = (float10)*(float *)(iVar6 + 0x48) - (float10)(float)param_1[0x12];
        fVar7 = (float10)fpatan(((float10)*(float *)(iVar6 + 0x44) + (float10)0.8) -
                                (float10)(float)param_1[0x11],SQRT(fVar8 * fVar8 + fVar7 * fVar7));
        if ((float10)0.2617994 <= -fVar7) {
          local_4 = (float)param_1[0x24];
          fVar7 = -fVar7 - (float10)local_4;
        }
        else {
          local_4 = (float)param_1[0x24];
          fVar7 = (float10)0.2617994 - (float10)local_4;
        }
      }
      fVar7 = (float10)FUN_00ddba30((float)fVar7);
      fVar7 = (float10)FUN_00ddba30((float)(fVar7 * (float10)0.35 + (float10)local_4));
      param_1[0x24] = (int)(float)fVar7;
    }
    iVar6 = FUN_00a94ce0(0);
    if (iVar6 != 0) {
      param_1[0x248] = 0x42f00000;
      param_1[0x250] = 0;
      param_1[600] = param_1[0x10];
      param_1[0x259] = param_1[0x11];
      param_1[0x25a] = param_1[0x12];
      param_1[0x25b] = param_1[0x13];
      FUN_00aa4080(0x71,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 6:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar6 = FUN_00a94ce0(0);
    if (iVar6 != 0) {
      param_1[0x250] = param_1[0x250] + 1;
    }
    fVar1 = (float)param_1[0x15];
    FUN_0081fdc0((float)param_1[0x244] * 0.5);
    pcVar2 = *(code **)(*param_1 + 800);
    param_1[0x225] = (int)((fVar1 - (float)param_1[0x15]) * -0.1);
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
    iVar6 = (*pcVar2)(0x3d888889);
    if ((iVar6 != 0) || ((float)param_1[0x248] <= 0.0)) {
      param_1[0x24] = 0;
      (**(code **)(*param_1 + 0x314))();
      iVar6 = param_1[0x1d9];
      if ((iVar6 != 0) && (*(int *)(iVar6 + 0x104) != 0)) {
        *(undefined4 *)(iVar6 + 0x104) = 0;
      }
      FUN_00824480();
      iVar6 = FUN_00824560(0x41200000);
      if (iVar6 == 0) {
        FUN_00aa4080(0x6d,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        param_1[0x187] = param_1[0x187] + 1;
        return;
      }
      FUN_00aa4080(0x6c,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    iVar6 = FUN_00820360();
    if (iVar6 != 0) {
      FUN_008243d0();
      FUN_00824fd0(0x20009);
      return;
    }
    break;
  case 7:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar6 = FUN_00a8c760(0);
    if (iVar6 != 0) {
      FUN_00820560(0x3e4ccccd,0x3db2b8c2);
    }
    if (((param_1[0x128] == 0) && ((*(byte *)(param_1 + 0x2c0) & 2) != 0)) &&
       (iVar6 = FUN_00a8c760(4), iVar6 != 0)) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    iVar6 = FUN_00a94ce0(0);
    if ((iVar6 != 0) || (bVar5)) {
                    /* WARNING: Could not recover jumptable at 0x00826ee9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00826F10  FUN_00826f10  size=431  [between]
void __fastcall FUN_00826f10(int *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = param_1[0x187];
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  if (iVar2 == 0) {
    FUN_00aa4080(0x69,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else {
    bVar1 = true;
    if (iVar2 != 1) {
      if (iVar2 != 2) {
        return;
      }
      iVar2 = FUN_00a8c760(0);
      if (iVar2 != 0) {
        FUN_008203d0(param_1[0x2a1] + 0x40,0x3e4ccccd,0x3db2b8c2);
      }
      FUN_00ac80a0(0x3f800000,0x3f800000);
      if (((param_1[0x128] != 0) || ((*(byte *)(param_1 + 0x2c0) & 2) == 0)) ||
         (iVar2 = FUN_00a8c760(4), iVar2 == 0)) {
        bVar1 = false;
      }
      iVar2 = FUN_00a94ce0(0);
      if ((iVar2 == 0) && (!bVar1)) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00826fcb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  iVar2 = FUN_00a8c760(0);
  if (iVar2 != 0) {
    FUN_008203d0(param_1[0x2a1] + 0x40,0x3e4ccccd,0x3db2b8c2);
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    iVar2 = FUN_00824560(0x3f800000);
    if (iVar2 == 0) {
      uVar3 = 0x72;
    }
    else {
      uVar3 = 0x73;
    }
    FUN_00aa4080(uVar3,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  return;
}

// 008270C0  FUN_008270c0  size=89  [between]
void __fastcall FUN_008270c0(int param_1)

{
  float10 fVar1;
  
  if (*(int *)(param_1 + 0x61c) == 2) {
    fVar1 = (float10)FUN_00a8ec30(*(int *)(param_1 + 0xa84) + 0x40);
    fVar1 = (float10)FUN_00ddba30((float)((float10)*(float *)(param_1 + 0x94) - fVar1));
    if (((float10)1.3089969 < ABS(fVar1)) && (*(int *)(param_1 + 0x1848) < 3)) {
      FUN_00824fd0(0x10006);
      *(int *)(param_1 + 0x1848) = *(int *)(param_1 + 0x1848) + 1;
    }
  }
  return;
}

// 00827120  FUN_00827120  size=1257  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00827120(int *param_1)

{
  bool bVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  float10 fVar5;
  
  if ((_DAT_01b359b4 & 1) == 0) {
    _DAT_01b359b4 = _DAT_01b359b4 | 1;
    _DAT_01883510 = 0x42100000;
    _DAT_01883514 = 0x20001;
    _DAT_0188351c = 0x20002;
    _DAT_01883518 = 0x42800000;
    _DAT_01883520 = 0x41c80000;
  }
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  switch(param_1[0x187]) {
  case 0:
    if ((param_1[0x250] < 0) || (2 < param_1[0x250])) {
      sVar2 = FUN_00dde2d0(0,2);
      param_1[0x250] = (int)sVar2;
    }
    iVar4 = param_1[0x515];
    if (((iVar4 == 0x10006) || (iVar4 == 0x10007)) || (iVar4 == 0x10003)) {
      if ((*(float *)(&DAT_01883510 + param_1[0x250] * 8) < (float)param_1[0x2a4]) ||
         (fVar5 = (float10)FUN_008205f0(), (float10)0.7853982 <= fVar5)) {
        FUN_00aa4120(10,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
        FUN_00ac80a0(0x3f800000,0x3f800000);
        param_1[0x248] = 0x43700000;
        param_1[0x187] = 2;
        return;
      }
      iVar4 = FUN_0081ff50(0x41f00000);
      if (iVar4 == 0) {
        FUN_00824fd0(*(undefined4 *)(&DAT_0188350c + param_1[0x250] * 8));
        return;
      }
      goto LAB_0082750e;
    }
    param_1[0x612] = 0;
    FUN_00aa4080(0xb,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    sVar2 = FUN_00dde2d0(0,2);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x250] = (int)sVar2;
  case 1:
    FUN_008203d0(param_1[0x2a1] + 0x40,0x3e4ccccd,0x3db2b8c2);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      FUN_00aa4080(10,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x248] = 0x43700000;
    }
    iVar4 = FUN_00a8c760(4);
    if (((iVar4 != 0) && ((float)param_1[0x2a4] <= *(float *)(&DAT_01883510 + param_1[0x250] * 8)))
       && (fVar5 = (float10)FUN_008205f0(), fVar5 < (float10)0.7853982)) {
      FUN_00824fd0(*(undefined4 *)(&DAT_0188350c + param_1[0x250] * 8));
    }
    break;
  case 2:
    FUN_008203d0(param_1[0x2a1] + 0x40,0x3e4ccccd,0x3db2b8c2);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00824150();
    if (iVar4 != 0) {
      FUN_00824fd0(0x10007);
      return;
    }
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
    if (((float)param_1[0x2a4] <= 25.0) &&
       (fVar5 = (float10)FUN_008205f0(), fVar5 < (float10)0.87266463)) {
      iVar4 = FUN_00825fe0();
      if ((iVar4 != 0) && (uVar3 = FUN_00dde2d0(0,100), (uVar3 & 1) != 0)) {
        FUN_00824fd0(0x20007);
        return;
      }
      FUN_00824fd0(0x50000);
      return;
    }
    if ((*(float *)(&DAT_01883510 + param_1[0x250] * 8) < (float)param_1[0x2a4]) ||
       (fVar5 = (float10)FUN_008205f0(), (float10)0.7853982 <= fVar5)) {
      if (0.0 < (float)param_1[0x248]) {
        return;
      }
    }
    else {
      iVar4 = FUN_0081ff50(0x41f00000);
      if (iVar4 == 0) {
        FUN_00824fd0(*(undefined4 *)(&DAT_0188350c + param_1[0x250] * 8));
        return;
      }
    }
LAB_0082750e:
    FUN_00aa4080(0xc,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x187] = 3;
    return;
  case 3:
    iVar4 = FUN_00a8c760(0);
    if (iVar4 != 0) {
      FUN_008203d0(param_1[0x2a1] + 0x40,0x3e4ccccd,0x3db2b8c2);
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (((param_1[0x128] == 0) && ((*(byte *)(param_1 + 0x2c0) & 2) != 0)) &&
       (iVar4 = FUN_00a8c760(4), iVar4 != 0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    iVar4 = FUN_00a94ce0(0);
    if ((iVar4 != 0) || (bVar1)) {
      if ((*(byte *)(param_1 + 0x3a4) & 8) != 0) {
        FUN_008e5c50(7);
        param_1[0x3a4] = param_1[0x3a4] & 0xfffffff7;
      }
                    /* WARNING: Could not recover jumptable at 0x00827607. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00827620  FUN_00827620  size=89  [between]
void __fastcall FUN_00827620(int param_1)

{
  float10 fVar1;
  
  if (*(int *)(param_1 + 0x61c) == 2) {
    fVar1 = (float10)FUN_00a8ec30(*(int *)(param_1 + 0xa84) + 0x40);
    fVar1 = (float10)FUN_00ddba30((float)((float10)*(float *)(param_1 + 0x94) - fVar1));
    if (((float10)1.3089969 < ABS(fVar1)) && (*(int *)(param_1 + 0x1848) < 3)) {
      FUN_00824fd0(0x10006);
      *(int *)(param_1 + 0x1848) = *(int *)(param_1 + 0x1848) + 1;
    }
  }
  return;
}

// 00827680  FUN_00827680  size=1395  [between]
void __fastcall FUN_00827680(int *param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  bVar1 = true;
  switch(param_1[0x187]) {
  case 0:
    iVar3 = param_1[0x515];
    if (((iVar3 == 0x10006) || (iVar3 == 0x10007)) || (iVar3 == 0x10003)) {
      if ((64.0 < (float)param_1[0x2a4]) ||
         (fVar4 = (float10)FUN_008205f0(), (float10)0.7853982 <= fVar4)) {
        FUN_00aa4120(10,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
        FUN_00ac80a0(0x3f800000,0x3f800000);
        param_1[0x248] = 0x43700000;
        param_1[0x187] = 2;
        return;
      }
      iVar3 = FUN_0081ff50(0x41f00000);
      if (iVar3 != 0) goto LAB_00827a65;
      goto LAB_00827885;
    }
    param_1[0x612] = 0;
    FUN_00aa4080(0xb,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_008277a8;
  case 1:
LAB_008277a8:
    FUN_008203d0(param_1[0x2a1] + 0x40,0x3e4ccccd,0x3db2b8c2);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_00aa4080(10,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x248] = 0x43700000;
    }
    iVar3 = FUN_00a8c760(4);
    if (((iVar3 != 0) && ((float)param_1[0x2a4] <= 100.0)) &&
       (fVar4 = (float10)FUN_008205f0(), fVar4 < (float10)0.7853982)) {
LAB_00827885:
      FUN_008e5c50(0xd);
      param_1[0x3a4] = param_1[0x3a4] | 8;
      FUN_00aa4080(0x69,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x187] = 3;
      return;
    }
    break;
  case 2:
    FUN_008203d0(param_1[0x2a1] + 0x40,0x3e4ccccd,0x3db2b8c2);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00824150();
    if (iVar3 != 0) {
      FUN_00824fd0(0x10007);
      return;
    }
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
    if (((float)param_1[0x2a4] <= 25.0) &&
       (fVar4 = (float10)FUN_008205f0(), fVar4 < (float10)0.87266463)) {
      iVar3 = FUN_00825fe0();
      if ((iVar3 != 0) && (uVar2 = FUN_00dde2d0(0,100), (uVar2 & 1) != 0)) {
        FUN_00824fd0(0x20007);
        return;
      }
      FUN_00824fd0(0x50000);
      return;
    }
    if (((float)param_1[0x2a4] <= 64.0) &&
       (fVar4 = (float10)FUN_008205f0(), fVar4 < (float10)0.7853982)) {
      iVar3 = FUN_0081ff50(0x41f00000);
      if (iVar3 != 0) goto LAB_00827a65;
      FUN_008e5c50(0xd);
      param_1[0x3a4] = param_1[0x3a4] | 8;
      FUN_00aa4080(0x69,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
    }
    if ((float)param_1[0x248] <= 0.0) {
LAB_00827a65:
      FUN_00aa4080(0xc,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x187] = 4;
      return;
    }
    break;
  case 3:
    iVar3 = FUN_00a8c760(0);
    if (iVar3 != 0) {
      FUN_00820560(0x3e4ccccd,0x3db2b8c2);
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_00824480();
      iVar3 = FUN_00824560(0x3f800000);
      if (iVar3 == 0) {
        FUN_00aa4080(0x72,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        param_1[0x187] = param_1[0x187] + 1;
        return;
      }
      FUN_00aa4080(0x73,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 4:
    iVar3 = FUN_00a8c760(0);
    if (iVar3 != 0) {
      FUN_00820560(0x3e4ccccd,0x3db2b8c2);
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (((param_1[0x128] != 0) || ((*(byte *)(param_1 + 0x2c0) & 2) == 0)) ||
       (iVar3 = FUN_00a8c760(4), iVar3 == 0)) {
      bVar1 = false;
    }
    iVar3 = FUN_00a94ce0(0);
    if ((iVar3 != 0) || (bVar1)) {
      FUN_00824480();
                    /* WARNING: Could not recover jumptable at 0x00827bee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00827C10  FUN_00827c10  size=73  [between]
void __fastcall FUN_00827c10(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a12210(0x66);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x1850) = *(undefined4 *)(iVar1 + 0x30);
    *(undefined4 *)(param_1 + 0x1854) = *(undefined4 *)(iVar1 + 0x34);
    *(undefined4 *)(param_1 + 0x1858) = *(undefined4 *)(iVar1 + 0x38);
    *(undefined4 *)(param_1 + 0x185c) = *(undefined4 *)(iVar1 + 0x3c);
    iVar1 = FUN_00a12210(0x66);
    *(undefined4 *)(param_1 + 0x93c) = *(undefined4 *)(iVar1 + 0x98);
  }
  return;
}

// 00827C60  FUN_00827c60  size=240  [between]
void __fastcall FUN_00827c60(int param_1)

{
  float fVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined *puVar7;
  float local_14;
  
  piVar2 = *(int **)(param_1 + 0xa84);
  if (piVar2 != (int *)0x0) {
    puVar7 = &DAT_01be9c38;
    (**(code **)(*piVar2 + 4))(&DAT_01be9c38);
    iVar6 = FUN_00dd6d80(puVar7);
    if (iVar6 != 0) {
      fVar3 = (float)piVar2[0x14] - (float)piVar2[0x240];
      fVar4 = (float)piVar2[0x15] - (float)piVar2[0x241];
      fVar5 = (float)piVar2[0x16] - (float)piVar2[0x242];
      local_14 = (float)piVar2[0x17] - (float)piVar2[0x243];
      if (0.0 < (float)piVar2[0x244]) {
        fVar1 = (float)piVar2[0x244];
        fVar3 = fVar3 * fVar1;
        fVar4 = fVar4 * fVar1;
        fVar5 = fVar5 * fVar1;
        local_14 = fVar1 * local_14;
      }
      goto LAB_00827cf9;
    }
  }
  fVar4 = 0.0;
  fVar5 = 0.0;
  fVar3 = 0.0;
LAB_00827cf9:
  iVar6 = (*(int *)(param_1 + 0x1940) + 0x18a) * 0x10;
  *(float *)(iVar6 + param_1) = fVar3;
  iVar6 = iVar6 + param_1;
  *(float *)(iVar6 + 4) = fVar4;
  *(float *)(iVar6 + 8) = fVar5;
  *(float *)(iVar6 + 0xc) = local_14;
  *(int *)(param_1 + 0x1940) = *(int *)(param_1 + 0x1940) + 1;
  if (9 < *(int *)(param_1 + 0x1940)) {
    *(undefined4 *)(param_1 + 0x1940) = 0;
  }
  return;
}

// 00827D50  FUN_00827d50  size=105  [between]
float10 __fastcall FUN_00827d50(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  float10 fVar4;
  
  if ((*(uint *)(param_1 + 0xe90) & 0x800) == 0) {
    iVar2 = *(int *)(param_1 + 0x182c) + 1;
    if (iVar2 < *(int *)(param_1 + 0x1828)) {
      fVar1 = ((float)iVar2 / (float)*(int *)(param_1 + 0x1828)) * 0.25;
      uVar3 = FUN_00ac4780();
      switch(uVar3) {
      case 0:
      case 1:
        fVar4 = (float10)fVar1 * (float10)fVar1;
        return fVar4 * fVar4;
      case 2:
        return (float10)fVar1 * (float10)fVar1;
      case 3:
      case 4:
        break;
      default:
        return (float10)fVar1;
      }
    }
  }
  return (float10)1;
}

// 00827DD0  FUN_00827dd0  size=964  [between]
void __thiscall FUN_00827dd0(int param_1,float *param_2,int param_3)

{
  float *pfVar1;
  undefined1 *puVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int unaff_ESI;
  float10 fVar6;
  undefined1 **ppuStack_124;
  float *pfStack_120;
  float *pfStack_11c;
  float fStack_118;
  undefined1 *puStack_114;
  undefined1 *puStack_110;
  undefined1 *puStack_10c;
  float *pfStack_108;
  float *local_104;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4 [3];
  int local_d8;
  int local_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 auStack_b8 [64];
  undefined1 auStack_78 [32];
  undefined1 auStack_58 [8];
  undefined1 local_50 [76];
  
  local_104 = (float *)0x66;
  pfStack_108 = (float *)0x827de8;
  iVar4 = FUN_00a12210();
  local_104 = (float *)0x2f;
  pfStack_108 = (float *)0x827df7;
  local_d8 = iVar4;
  local_d4 = FUN_00a12210();
  local_104 = (float *)0x2e;
  pfStack_108 = (float *)0x827e04;
  iVar5 = FUN_00a12210();
  if (((iVar5 != 0) && (iVar4 != 0)) && (local_d4 != 0)) {
    local_f0 = *param_2 - *(float *)(iVar5 + 0x40);
    local_ec = param_2[1] - *(float *)(iVar5 + 0x44);
    local_e8 = param_2[2] - *(float *)(iVar5 + 0x48);
    local_e4[0] = param_2[3] - *(float *)(iVar5 + 0x4c);
    fVar3 = local_e8 * local_e8 + local_f0 * local_f0 + local_ec * local_ec;
    if (fVar3 < 0.0 == (fVar3 == 0.0)) {
      pfStack_108 = &local_f0;
      puStack_10c = (undefined1 *)0x827e98;
      local_104 = pfStack_108;
      FUN_00ddf460();
    }
    else {
      local_104 = (float *)&DAT_0163d0ac;
      pfStack_108 = (float *)0x827ead;
      FUN_00dd5650();
      local_f0 = 0.0;
      local_ec = 1.0;
      local_e8 = 0.0;
    }
    local_104 = (float *)0x3e4ccccd;
    pfStack_108 = &local_f0;
    puVar2 = (undefined1 *)(param_1 + 0x1850);
    puStack_114 = (undefined1 *)0x827ede;
    puStack_110 = puVar2;
    puStack_10c = puVar2;
    FUN_00824690();
    local_104 = (float *)0x827ee5;
    switchD_0080dbae::default();
    if (*(int *)(iVar5 + 0xa8) != 0) {
      local_104 = (float *)(*(int *)(iVar5 + 0xa8) + 0x10);
      pfStack_108 = (float *)local_50;
      puStack_10c = (undefined1 *)0x827f00;
      D3DXMatrixTranspose();
      puStack_10c = auStack_58;
      puStack_114 = &stack0xffffff08;
      fStack_118 = 1.19842e-38;
      puStack_110 = puVar2;
      D3DXVec3TransformNormal();
      fVar6 = (float10)fpatan((float10)local_f0,(float10)local_e8);
      local_104 = (float *)(float)(fVar6 + (float10)3.1415927);
      pfStack_108 = (float *)0x827f2c;
      fVar6 = (float10)FUN_00ddba30();
      *(float *)(iVar5 + 0x94) = (float)fVar6;
      if (param_3 == 0) {
        fVar6 = (float10)fpatan((float10)local_ec,
                                SQRT((float10)local_e8 * (float10)local_e8 +
                                     (float10)local_f0 * (float10)local_f0));
        *(float *)(iVar5 + 0x90) = (float)--fVar6;
        *(undefined4 *)(iVar5 + 0x98) = 0;
      }
    }
    iVar4 = *(int *)(local_d8 + 0xa8);
    if (iVar4 != 0) {
      local_104 = (float *)(iVar4 + 0x10);
      pfStack_108 = (float *)local_50;
      puStack_10c = (undefined1 *)0x827f86;
      D3DXMatrixTranspose();
      puStack_10c = auStack_58;
      puStack_114 = &stack0xffffff08;
      fStack_118 = 1.1984388e-38;
      puStack_110 = puVar2;
      D3DXVec3TransformNormal();
      fVar3 = local_ec;
      fStack_118 = -*(float *)((int)local_ec + 0x98);
      pfStack_11c = local_e4;
      pfStack_120 = (float *)0x827fb3;
      D3DXMatrixRotationZ();
      pfStack_120 = &local_ec;
      ppuStack_124 = &puStack_10c;
      D3DXVec3TransformNormal(ppuStack_124);
      fVar6 = (float10)fpatan((float10)fStack_118,(float10)(float)puStack_110);
      *(float *)((int)fVar3 + 0x94) = (float)fVar6;
      if (param_3 == 0) {
        fVar6 = (float10)fpatan((float10)(float)puStack_114,
                                SQRT((float10)(float)puStack_110 * (float10)(float)puStack_110 +
                                     (float10)fStack_118 * (float10)fStack_118));
        *(float *)((int)fVar3 + 0x90) = (float)-fVar6;
      }
      if (*(int *)(iVar5 + 0xa8) != 0) {
        uStack_c0 = 0;
        uStack_c4 = 0;
        uStack_c8 = 0;
        uStack_cc = 0;
        local_d4 = 0;
        local_d8 = 0;
        local_e4[2] = 0.0;
        local_e4[1] = 0.0;
        local_e8 = 0.0;
        local_ec = 0.0;
        local_f0 = 0.0;
        uStack_bc = 0x3f800000;
        uStack_d0 = 0x3f800000;
        local_e4[0] = 1.0;
        if (*(float *)(iVar5 + 0x98) != 0.0) {
          D3DXMatrixRotationZ(auStack_b8,*(undefined4 *)(iVar5 + 0x98));
          D3DXMatrixMultiply(&stack0xffffff00,&uStack_c0,&stack0xffffff00);
        }
        if (*(float *)(iVar5 + 0x94) != 0.0) {
          D3DXMatrixRotationY(auStack_b8,*(undefined4 *)(iVar5 + 0x94));
          D3DXMatrixMultiply(&stack0xffffff00,&uStack_c0,&stack0xffffff00);
        }
        if (*(float *)(iVar5 + 0x90) != 0.0) {
          D3DXMatrixRotationX(auStack_b8,*(undefined4 *)(iVar5 + 0x90));
          D3DXMatrixMultiply(&stack0xffffff00,&uStack_c0,&stack0xffffff00);
        }
        D3DXVec3TransformNormal(&fStack_118,unaff_ESI + 0x50,&stack0xffffff08);
        D3DXVec3TransformNormal(&ppuStack_124,&ppuStack_124,puStack_10c + 0x10);
        fStack_118 = *(float *)(iVar5 + 0x40) + fStack_118;
        puStack_114 = (undefined1 *)((float)puStack_114 + *(float *)(iVar5 + 0x44));
        puStack_110 = (undefined1 *)((float)puStack_110 + *(float *)(iVar5 + 0x48));
        puStack_10c = (undefined1 *)((float)puStack_10c + *(float *)(iVar5 + 0x4c));
      }
      pfVar1 = (float *)((int)fVar3 + 0x50);
      *pfVar1 = fStack_118 - *(float *)(iVar4 + 0x40);
      *(float *)((int)fVar3 + 0x54) = (float)puStack_114 - *(float *)(iVar4 + 0x44);
      *(float *)((int)fVar3 + 0x58) = (float)puStack_110 - *(float *)(iVar4 + 0x48);
      *(float *)((int)fVar3 + 0x5c) = (float)puStack_10c - *(float *)(iVar4 + 0x4c);
      D3DXVec3TransformNormal(pfVar1,pfVar1,auStack_78);
    }
  }
  return;
}

// 008281A0  FUN_008281a0  size=690  [between]
void __thiscall
FUN_008281a0(int *param_1,float *param_2,float *param_3,float *param_4,float param_5,float param_6)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  *param_2 = 0.0;
  *param_3 = 0.0;
  iVar3 = FUN_00a12210(0x66);
  if (iVar3 != 0) {
    local_20 = *param_4 - *(float *)(iVar3 + 0x40);
    local_1c = param_4[1] - *(float *)(iVar3 + 0x44);
    local_18 = param_4[2] - *(float *)(iVar3 + 0x48);
    local_14 = param_4[3] - *(float *)(iVar3 + 0x4c);
    if (((local_20 != 0.0) || (local_1c != 0.0)) || (local_18 != 0.0)) {
      fVar1 = local_18 * local_18 + local_20 * local_20 + local_1c * local_1c;
      if (fVar1 < 0.0 == (fVar1 == 0.0)) {
        FUN_00ddf460(&local_20,&local_20);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        local_20 = 0.0;
        local_1c = 1.0;
        local_18 = 0.0;
      }
      fVar2 = local_18;
      fVar1 = local_20;
      iVar3 = (**(code **)(*param_1 + 0x84))();
      fVar6 = (float10)fpatan((float10)fVar1,(float10)fVar2);
      fVar6 = (float10)FUN_00ddba30((float)(fVar6 - (float10)*(float *)(iVar3 + 4)));
      fVar6 = fVar6 / (float10)param_6;
      *param_3 = (float)fVar6;
      if ((float10)-1.0 < fVar6) {
        if (fVar6 <= (float10)1) {
          *param_3 = (float)fVar6;
        }
        else {
          *param_3 = (float)(float10)1;
        }
      }
      else {
        *param_3 = (float)(float10)-1.0;
      }
    }
  }
  iVar3 = FUN_00a12210(0x66);
  if (iVar3 != 0) {
    local_20 = *param_4 - *(float *)(iVar3 + 0x40);
    local_1c = param_4[1] - *(float *)(iVar3 + 0x44);
    local_18 = param_4[2] - *(float *)(iVar3 + 0x48);
    local_14 = param_4[3] - *(float *)(iVar3 + 0x4c);
    if (((local_20 != 0.0) || (local_1c != 0.0)) || (local_18 != 0.0)) {
      fVar1 = local_18 * local_18 + local_20 * local_20 + local_1c * local_1c;
      if (fVar1 < 0.0 == (fVar1 == 0.0)) {
        FUN_00ddf460(&local_20,&local_20);
        fVar6 = (float10)local_1c;
        fVar4 = (float10)local_20;
        fVar7 = (float10)local_18;
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        fVar4 = (float10)0;
        fVar6 = (float10)1;
        fVar7 = fVar4;
      }
      fVar5 = (float10)0;
      fVar6 = (float10)fpatan(fVar6,SQRT(fVar7 * fVar7 + fVar4 * fVar4));
      fVar6 = -fVar6 / (float10)param_5;
      *param_2 = (float)fVar6;
      if ((fVar5 < fVar6) && (fVar5 = fVar6, (float10)1 < fVar6)) {
        *param_2 = (float)(float10)1;
        return;
      }
      *param_2 = (float)fVar5;
      return;
    }
  }
  return;
}

// 00828460  FUN_00828460  size=245  [between]
void __fastcall FUN_00828460(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(5,0,0x3ecccccd,0x3f800000,0,0xbf800000,0x3f800000);
    uVar1 = *(uint *)(param_1 + 0x1454);
    *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x1838) * 60.0;
    *(undefined4 *)(param_1 + 0x924) = 0x41f00000;
    if ((uVar1 & 0xffff0000) == 0x30000) {
      *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x183c) * 60.0;
    }
    if ((*(uint *)(param_1 + 0xe90) & 0x4000000) != 0) {
      *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x183c) * 60.0 * 3.0;
    }
    if (((int)uVar1 < 0x10004) || ((0x10006 < (int)uVar1 && (uVar1 != 0x1000a)))) {
      *(undefined4 *)(param_1 + 0x1848) = 0;
    }
    else {
      *(int *)(param_1 + 0x1848) = *(int *)(param_1 + 0x1848) + 1;
    }
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00828560  FUN_00828560  size=151  [between]
void __fastcall FUN_00828560(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x79,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00c272a0(0x40a00000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x1a90) = 0;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00824fd0(0x2000b);
  }
  return;
}

// 00828600  FUN_00828600  size=241  [between]
void __fastcall FUN_00828600(int param_1)

{
  float10 fVar1;
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    fVar1 = (float10)FUN_00a8ec30(*(int *)(param_1 + 0xa84) + 0x40);
    fVar1 = (float10)FUN_00ddba30((float)((float10)*(float *)(param_1 + 0x94) - fVar1));
    if ((float10)1.0471976 < ABS(fVar1)) {
      FUN_00824fd0(0x1000a);
      return;
    }
    if (((*(float *)(param_1 + 0xa90) <= 25.0) || (*(int *)(param_1 + 0x1998) != 0)) ||
       (*(float *)(param_1 + 0x19c0) <= -30.0)) {
      if (*(int *)(param_1 + 0x1138) != 0) {
        (**(code **)(*(int *)(param_1 + 0x10a0) + 8))(0x41f00000,0,0);
      }
      if (*(int *)(param_1 + 0x1088) != 0) {
        (**(code **)(*(int *)(param_1 + 0xff0) + 8))(0,0,0);
        FUN_00824fd0(0x50000);
        return;
      }
      FUN_00824fd0(0x50000);
    }
  }
  return;
}

// 00828700  FUN_00828700  size=661  [between]
void __fastcall FUN_00828700(int *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  short sVar1;
  int iVar2;
  uint uVar3;
  
  switch(param_1[0x187]) {
  case 0:
    if (param_1[0x515] == 0x10009) {
      param_1[0x51b] = 0;
      if (0.2617994 < ABS((float)param_1[0x522])) {
        if (ABS((float)param_1[0x522]) < 2.1816616) {
          if ((float)param_1[0x522] <= 0.0) {
            param_1[0x51b] = 3;
          }
          else {
            param_1[0x51b] = 2;
          }
        }
        else {
          param_1[0x51b] = 1;
        }
      }
      else {
        param_1[0x51b] = 0;
      }
      iVar2 = 0;
      if (param_1[0x51b] == 1) {
        iVar2 = 2;
      }
      sVar1 = FUN_00dde2d0(0,1);
      uVar3 = iVar2 + sVar1;
      if (param_1[0x519] == uVar3) {
        param_1[0x51a] = param_1[0x51a] + 1;
        if (2 < param_1[0x51a]) {
          uVar3 = (uint)(uVar3 == 0);
          goto LAB_008287d4;
        }
      }
      else {
LAB_008287d4:
        param_1[0x51a] = 0;
      }
      param_1[0x519] = uVar3;
      FUN_00aa4080(*(undefined4 *)(&DAT_01648874 + uVar3 * 4),0,0,0x3f800000,0x8000000,0xbf800000,
                   0x3f800000);
      iVar2 = 0x3eaaaaab;
    }
    else {
      FUN_00aa4080(0x85,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      iVar2 = 0x3d088889;
    }
    param_1[0x248] = iVar2;
    (**(code **)(*param_1 + 0x1f8))(1);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_00aa4080(0x86,0,param_1[0x248],0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if ((param_1[0x3a4] & 0x400U) == 0) {
      FUN_00aa4080(0x87,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x34c);
      param_1[0x61e] = (int)((float)param_1[0x625] * 60.0);
                    /* WARNING: Could not recover jumptable at 0x0082898f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}

// 008289B0  FUN_008289b0  size=223  [between]
void __fastcall FUN_008289b0(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    iVar1 = FUN_00820690(*(int *)(param_1 + 0xa84) + 0x40,param_1 + 0x920);
    FUN_00aa4080(*(undefined4 *)(&DAT_01648884 + iVar1 * 4),0,0x3e4ccccd,0x3f800000,0x8000000,
                 0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  iVar1 = FUN_00a8c760(0);
  if (iVar1 != 0) {
    fVar2 = (float10)FUN_00fdc1f0();
    fVar2 = ((float10)1 - fVar2) * (float10)*(float *)(param_1 + 0x920);
    *(float *)(param_1 + 0x94) = (float)((float10)*(float *)(param_1 + 0x94) + fVar2);
    *(float *)(param_1 + 0x920) = (float)((float10)*(float *)(param_1 + 0x920) - fVar2);
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_00824fd0(0x2000b);
  }
  return;
}

// 00828A90  Emc220::vf14C  size=94  [class]
undefined4 __thiscall Emc220::vf14C(int param_1,int param_2)

{
  if (param_2 != 0x57) {
    if (param_2 == 0x58) {
      if ((*(int *)(param_1 + 0x4a0) == 0) && ((*(byte *)(param_1 + 0xb00) & 2) != 0)) {
        return 0;
      }
      return 1;
    }
    if (((param_2 != 0x59) || (*(int *)(param_1 + 0x4a0) != 0)) ||
       ((*(byte *)(param_1 + 0xb00) & 2) == 0)) {
      return 0;
    }
  }
  return 1;
}

// 00828AF0  Emc220::vf150  size=119  [class]
void Emc220::vf150(int param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  
  if (param_2 != 0) {
    uVar1 = FUN_00a7c7f0();
    FUN_00a7c960(uVar1);
    if (param_1 == 0x57) {
      FUN_00824fd0(0xf0006);
    }
    else {
      if (param_1 == 0x58) {
        piVar2 = (int *)FUN_00c1b9a0();
        (**(code **)(*piVar2 + 100))();
        FUN_00824fd0(0xf0007);
        return;
      }
      if (param_1 == 0x59) {
        piVar2 = (int *)FUN_00c1b9a0();
        (**(code **)(*piVar2 + 100))();
        FUN_00824fd0(0xf0008);
        return;
      }
    }
  }
  return;
}

// 00828B70  FUN_00828b70  size=175  [between]
undefined4 __fastcall FUN_00828b70(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if ((((param_1[0x139] == 0) && ((DAT_01bea060 & 0x2000000) == 0)) &&
      (iVar1 = (**(code **)(*param_1 + 0x1d8))(), iVar1 == 0)) &&
     ((0 < param_1[0x21c] && (param_1[0x186] == 0x3000a)))) {
    piVar2 = (int *)FUN_00a9b930();
    if ((piVar2 != (int *)0x0) && (iVar1 = (**(code **)(*piVar2 + 0x1d8))(), iVar1 != 0)) {
      return 0;
    }
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    FUN_00c593a0(param_1[0x13c],0xffffffff,&uStack_20,0x40200000,0x3fc00000,2,8);
    return 1;
  }
  return 0;
}

// 00828C20  FUN_00828c20  size=204  [between]
undefined4 __fastcall FUN_00828c20(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if ((((param_1[0x139] == 0) && ((DAT_01bea060 & 0x2000000) == 0)) &&
      (iVar1 = (**(code **)(*param_1 + 0x1d8))(), iVar1 == 0)) &&
     ((param_1[0x186] == 0x60003 || (param_1[0x186] == 0x60004)))) {
    piVar2 = (int *)FUN_00a9b930();
    if ((piVar2 != (int *)0x0) && (iVar1 = (**(code **)(*piVar2 + 0x1d8))(), iVar1 != 0)) {
      return 0;
    }
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    iVar1 = FUN_00c593a0(param_1[0x13c],0xffffffff,&uStack_20,0x40200000,0x3fc00000,2,9);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x48) = 0;
      *(undefined4 *)(iVar1 + 0x40) = 0x3f4ccccd;
      *(undefined4 *)(iVar1 + 0x44) = 0x3ecccccd;
    }
    return 1;
  }
  return 0;
}

// 00828CF0  FUN_00828cf0  size=311  [between]
void __thiscall FUN_00828cf0(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_00a8cab0();
  if (iVar1 == 0xf0003) {
    piVar2 = (int *)FUN_00e678d0(2,0xc005,0xffffffff);
    if (((*param_2 == *piVar2) && (param_2[1] == piVar2[1])) && (param_2[2] == piVar2[2])) {
      *(undefined4 *)(param_1 + 0x6ec) = 1;
      FUN_00824fd0(0xf0004);
      return;
    }
  }
  piVar2 = (int *)FUN_00e678d0(2,0xc001,0xffffffff);
  if (((*param_2 == *piVar2) && (param_2[1] == piVar2[1])) && (param_2[2] == piVar2[2])) {
    *(undefined4 *)(param_1 + 0x19c4) = 0xc002;
    uVar3 = FUN_00e678d0(2,0xc002,0xffffffff);
    FUN_00e80d00(uVar3);
    *(undefined4 *)(param_1 + 0x19c8) = 3;
    FUN_00c18610(3,0);
    return;
  }
  piVar2 = (int *)FUN_00e678d0(2,0xc005,0xffffffff);
  if (((*param_2 == *piVar2) && (param_2[1] == piVar2[1])) && (param_2[2] == piVar2[2])) {
    *(undefined4 *)(param_1 + 0x19c4) = 0xc003;
    uVar3 = FUN_00e678d0(2,0xc003,0xffffffff);
    FUN_00e80d00(uVar3);
    *(undefined4 *)(param_1 + 0x19c8) = 2;
    FUN_00c18610(2,0);
  }
  return;
}

// 00828E30  FUN_00828e30  size=522  [between]
void __fastcall FUN_00828e30(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x61c);
  if (iVar3 == 0) {
    *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) | 4;
    *(undefined4 *)(param_1 + 0x1888) = 0;
    if ((*(int *)(param_1 + 0x1454) == 0x10007) || (*(int *)(param_1 + 0x1454) == 0x10006)) {
      FUN_00aa4080(10,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      *(undefined4 *)(param_1 + 0x61c) = 2;
      return;
    }
    if ((*(byte *)(param_1 + 0x1600) & 1) == 0) {
      FUN_00e5e1b0("bgm_BladeWolf_RunAway1");
      FUN_00820df0();
    }
    else {
      FUN_00e5e1b0("bgm_BladeWolf_RunAway2");
      FUN_00820e10();
    }
    FUN_00aa4080(0xb,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (iVar3 != 1) {
    if (iVar3 != 2) {
      return;
    }
    FUN_008203d0((float *)(param_1 + 0x14c0),0x3ea3d70a,0x3e32b8c2);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00824150();
    if (iVar3 != 0) {
      FUN_00824fd0(0x10007);
      *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) | 4;
      return;
    }
    fVar1 = *(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x14c0);
    fVar2 = *(float *)(param_1 + 0x48) - *(float *)(param_1 + 0x14c8);
    fVar1 = fVar2 * fVar2 + fVar1 * fVar1;
    if (fVar1 < 12.25 == (fVar1 == 12.25)) {
      return;
    }
    FUN_00824fd0(0xf0001);
    *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) | 4;
    return;
  }
  FUN_008203d0(param_1 + 0x14c0,0x3e23d70a,0x3d8efa35);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 == 0) {
    return;
  }
  FUN_00aa4080(10,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
  *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  return;
}

// 00829040  FUN_00829040  size=1255  [between]
void __fastcall FUN_00829040(int *param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined1 local_20 [4];
  float fStack_1c;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x27,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_008e59c0(2);
    param_1[0x3a4] = param_1[0x3a4] | 0x2004;
    (**(code **)(*param_1 + 0x318))();
    iVar3 = param_1[0x1d9];
    if ((iVar3 != 0) && (*(int *)(iVar3 + 0x104) != 1)) {
      *(undefined4 *)(iVar3 + 0x104) = 1;
      *(undefined4 *)(*(int *)(iVar3 + 0xd0) + 4) = 0;
    }
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_008290e9;
  case 1:
LAB_008290e9:
    FUN_00da9630(1,1);
    puVar7 = local_20;
    uVar2 = (**(code **)(*param_1 + 0x204))(puVar7,0);
    FUN_00da9660(1,uVar2,puVar7);
    FUN_008203d0(param_1 + 0x534,0x3ecccccd,0x3eb2b8c2);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_00aa4080(0x28,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00a96030(0,0x3f99999a);
      FUN_00a581b0(&fStack_30,0,0);
      param_1[600] = (int)((float)param_1[0x14] - fStack_30);
      param_1[0x259] = (int)((float)param_1[0x15] - fStack_2c);
      param_1[0x25a] = (int)((float)param_1[0x16] - fStack_28);
      param_1[0x249] = 0;
      FUN_00a92f90();
      iVar3 = FUN_00e26e90();
      if (iVar3 != 0) {
        fVar4 = (float10)FUN_00e36a50(0);
        param_1[0x24a] = (int)(float)fVar4;
        param_1[0x187] = param_1[0x187] + 1;
        return;
      }
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x24a] = -0x40800000;
      return;
    }
    break;
  case 2:
    FUN_00da9630(1,1);
    puVar7 = local_20;
    uVar2 = (**(code **)(*param_1 + 0x204))(puVar7,0);
    FUN_00da9660(1,uVar2,puVar7);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00a92f90();
    iVar3 = FUN_00e26e90();
    if (iVar3 == 0) {
      fVar4 = (float10)-1.0;
    }
    else {
      fVar4 = (float10)FUN_00e36970(0);
    }
    fVar5 = (float10)2.0;
    fVar4 = (fVar4 * fVar5) / (float10)(float)param_1[0x24a];
    param_1[0x249] = (int)(float)fVar4;
    if (fVar5 <= fVar4) {
      param_1[0x249] = (int)(float)fVar5;
    }
    FUN_00a581b0(&fStack_30,0,param_1[0x249]);
    iVar3 = FUN_00a8c760(0);
    if (iVar3 != 0) {
      FUN_00a585a0(&fStack_24,0,param_1[0x249]);
      fVar1 = (float)param_1[0x25];
      fVar4 = (float10)fpatan((float10)fStack_24,(float10)fStack_1c);
      fVar4 = (float10)FUN_00ddba30((float)(fVar4 - (float10)fVar1));
      fVar4 = (float10)FUN_00ddba30((float)(fVar4 * (float10)0.25 + (float10)fVar1));
      param_1[0x25] = (int)(float)fVar4;
    }
    param_1[0x14] = (int)(fStack_30 + (float)param_1[600]);
    param_1[0x15] = (int)((float)param_1[0x259] + fStack_2c);
    param_1[0x16] = (int)((float)param_1[0x25a] + fStack_28);
    fVar4 = (float10)FUN_00fdc1f0();
    param_1[600] = (int)(float)(fVar4 * (float10)(float)param_1[600]);
    param_1[0x259] = (int)(float)((float10)(float)param_1[0x259] * fVar4);
    param_1[0x25a] = (int)(float)((float10)(float)param_1[0x25a] * fVar4);
    param_1[0x25b] = (int)(float)(fVar4 * (float10)(float)param_1[0x25b]);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_00aa4080(0x29,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00a96030(0,0x3f800000);
      (**(code **)(*param_1 + 0x314))();
      iVar3 = param_1[0x1d9];
      if ((iVar3 != 0) && (*(int *)(iVar3 + 0x104) != 0)) {
        *(undefined4 *)(iVar3 + 0x104) = 0;
      }
      iVar3 = FUN_00ac9790();
      param_1[0x656] = iVar3;
      if ((int *)param_1[0x2a1] != (int *)0x0) {
        puVar6 = &DAT_01be9c38;
        (**(code **)(*(int *)param_1[0x2a1] + 4))(&DAT_01be9c38);
        iVar3 = FUN_00dd6d80(puVar6);
        if (iVar3 != 0) {
          FUN_00b7ec60();
        }
      }
      param_1[0x1bb] = 0;
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 3:
    FUN_00da9630(1,1);
    puVar7 = local_20;
    uVar2 = (**(code **)(*param_1 + 0x204))(puVar7,0);
    FUN_00da9660(1,uVar2,puVar7);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    (**(code **)(*param_1 + 0x220))(0x40a00000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_00824fd0(0xf0002);
      return;
    }
  }
  return;
}

// 00829540  FUN_00829540  size=1363  [between]
void __fastcall FUN_00829540(int *param_1)

{
  float fVar1;
  int *piVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined1 auStack_64 [16];
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  (**(code **)(*param_1 + 0x220))(0x40a00000);
  switch(param_1[0x187]) {
  case 0:
    param_1[0x3a4] = param_1[0x3a4] | 0x2004;
    FUN_00aa4080(5,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x41200000;
    param_1[0x249] = 0x42280000;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00da9630(1,1);
    puVar6 = auStack_64;
    uVar5 = (**(code **)(*param_1 + 0x204))(puVar6,0);
    FUN_00da9660(1,uVar5,puVar6);
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if ((fVar1 - (float)param_1[0x244] <= 0.0) &&
       (iVar4 = thunk_FUN_00e58ed0(param_1[0x69d]), iVar4 == 0)) {
      FUN_00aa4080(0x25,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      if ((*(byte *)(param_1 + 0x580) & 1) == 0) {
        FUN_00820d30(0xc001);
        uVar5 = 0x23;
      }
      else {
        FUN_00820d30(0xc005);
        uVar5 = 0x25;
      }
      FUN_00c81e40(uVar5);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    if (0.0 < (float)param_1[0x249]) {
      fVar1 = (float)param_1[0x249] - (float)param_1[0x244];
      param_1[0x249] = (int)fVar1;
      if ((fVar1 < 0.0 != (fVar1 == 0.0)) && (piVar2 = (int *)param_1[0x2a1], piVar2 != (int *)0x0))
      {
        if ((*(byte *)(param_1 + 0x580) & 1) == 0) {
          uStack_34 = 0;
          uStack_30 = 0x3e5f66f3;
          uStack_2c = 0;
          uStack_24 = 0x42c00000;
          uStack_20 = 0x4103ae14;
          uStack_1c = 0xc388199a;
          (**(code **)(*piVar2 + 0x7c))(&uStack_24,&uStack_34);
        }
        else {
          uStack_54 = 0;
          uStack_50 = 0x3fea927f;
          uStack_4c = 0;
          uStack_44 = 0x42a24ccd;
          uStack_40 = 0x410ccccd;
          uStack_3c = 0xc383c000;
          (**(code **)(*piVar2 + 0x7c))(&uStack_44,&uStack_54);
        }
      }
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      FUN_00aa4080(5,0,0x3dcccccd,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x248] = 0x42700000;
      return;
    }
    break;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    uVar5 = FUN_00e678d0(2,param_1[0x671],0xffffffff);
    iVar4 = FUN_00e7a6e0(uVar5);
    if (iVar4 == 0) {
      param_1[0x248] = 0;
      if (param_1[0x671] == 0xc003) {
        param_1[0x248] = 0x41f00000;
      }
      param_1[0x580] = param_1[0x580] + 1;
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 4:
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] <= 0.0) {
      param_1[0x187] = 5;
      param_1[0x248] = 0x42400000;
      param_1[0x249] = 0x44160000;
    }
    if ((param_1[0x671] == 0xc003) && (iVar4 = FUN_00c19c30(param_1[0x672],0), iVar4 != 0)) {
      FUN_00820790(iVar4);
      return;
    }
    break;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00c18f70(param_1[0x672],0);
    if (iVar4 == 0) {
      if (0.0 < (float)param_1[0x249]) {
        fVar1 = (float)param_1[0x249] - (float)param_1[0x244];
        param_1[0x249] = (int)fVar1;
        if (fVar1 < 0.0 != (fVar1 == 0.0)) {
          sVar3 = FUN_00dde2d0(0,3);
          if ((&PTR_s_Boss1000_171010_018834e8)[sVar3] != (undefined *)0x0) {
            iVar4 = FUN_00e5e0c0((&PTR_s_Boss1000_171010_018834e8)[sVar3],param_1,0xffffffff,0);
            param_1[0x69d] = iVar4;
            return;
          }
        }
      }
    }
    else {
      fVar1 = (float)param_1[0x248];
      param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
      if (fVar1 - (float)param_1[0x244] <= 0.0) {
        param_1[0x248] = 0x42400000;
        if (param_1[0x671] == 0xc003) {
          FUN_00e5e1b0("bgm_BladeWolf_ComeBack2");
          uVar5 = 0x26;
        }
        else {
          FUN_00e5e1b0("bgm_BladeWolf_ComeBack1");
          uVar5 = 0x24;
        }
        FUN_00c81e40(uVar5);
        param_1[0x187] = param_1[0x187] + 1;
        return;
      }
    }
    break;
  case 6:
    FUN_00da9630(1,1);
    puVar6 = auStack_64;
    uVar5 = (**(code **)(*param_1 + 0x204))(puVar6,0);
    FUN_00da9660(1,uVar5,puVar6);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] <= 0.0) {
      if (param_1[0x671] != 0xc003) {
        param_1[0x1bb] = 1;
        FUN_00824fd0(0xf0004);
        return;
      }
      FUN_00824fd0(0xf0003);
      return;
    }
  }
  return;
}

// 00829AB0  FUN_00829ab0  size=423  [between]
void __fastcall FUN_00829ab0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_24 [32];
  
  (**(code **)(*param_1 + 0x220))(0x40a00000);
  if (param_1[0x187] == 0) {
    param_1[0x3a4] = param_1[0x3a4] | 4;
    param_1[0x671] = 0xc005;
    uVar2 = FUN_00e678d0(2,0xc005,0xffffffff);
    FUN_00e80d00(uVar2);
    FUN_00aa4080(0x25,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x250] = 0;
    FUN_00da9630(1,1);
    puVar3 = auStack_24;
    uVar2 = (**(code **)(*param_1 + 0x204))(puVar3,0);
    FUN_00da9660(1,uVar2,puVar3);
  }
  else if (param_1[0x187] == 1) {
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94db0(0x25);
    if (iVar1 != 0) {
      FUN_00aa4080(5,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
    }
    FUN_00da9630(1,1);
    puVar3 = auStack_24;
    uVar2 = (**(code **)(*param_1 + 0x204))(puVar3,0);
    FUN_00da9660(1,uVar2,puVar3);
    uVar2 = FUN_00e678d0(2,0xc005,0xffffffff);
    iVar1 = FUN_00e7a6e0(uVar2);
    if (iVar1 == 0) {
      param_1[0x1bb] = 1;
      FUN_00824fd0(0xf0004);
      return;
    }
  }
  return;
}

// 00829C60  FUN_00829c60  size=2487  [between]
void __fastcall FUN_00829c60(int *param_1)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  short sVar5;
  int iVar6;
  undefined4 uVar7;
  float10 fVar8;
  float10 fVar9;
  undefined1 *puVar10;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  undefined1 local_30 [4];
  float fStack_2c;
  undefined1 local_20 [28];
  
  switch(param_1[0x187]) {
  case 0:
    param_1[0x248] = 0x41400000;
    param_1[0x3a4] = param_1[0x3a4] | 4;
    iVar6 = thunk_FUN_00e58ed0(param_1[0x69d]);
    if (iVar6 == 0) {
      if (param_1[0x515] != 0xf0003) {
        sVar5 = FUN_00dde2d0(0,4);
        if ((&PTR_s_Boss1000_151010_018834f8)[sVar5] != (undefined *)0x0) {
          iVar6 = FUN_00e5e0c0((&PTR_s_Boss1000_151010_018834f8)[sVar5],param_1,0xffffffff,0);
          param_1[0x69d] = iVar6;
        }
      }
      FUN_00da9630(1,1);
      puVar10 = local_30;
      uVar7 = (**(code **)(*param_1 + 0x204))(puVar10,0);
      FUN_00da9660(1,uVar7,puVar10);
      param_1[0x187] = 2;
      return;
    }
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00da9630(1,1);
    puVar10 = local_30;
    uVar7 = (**(code **)(*param_1 + 0x204))(puVar10,0);
    FUN_00da9660(1,uVar7,puVar10);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar6 = thunk_FUN_00e58ed0(param_1[0x69d]);
    if (iVar6 == 0) {
      param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
    }
    if ((float)param_1[0x248] <= 0.0) {
      param_1[0x248] = 0x41400000;
      if (param_1[0x515] != 0xf0003) {
        sVar5 = FUN_00dde2d0(0,4);
        if ((&PTR_s_Boss1000_151010_018834f8)[sVar5] != (undefined *)0x0) {
          iVar6 = FUN_00e5e0c0((&PTR_s_Boss1000_151010_018834f8)[sVar5],param_1,0xffffffff,0);
          param_1[0x69d] = iVar6;
        }
      }
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    FUN_00da9630(1,1);
    puVar10 = local_30;
    uVar7 = (**(code **)(*param_1 + 0x204))(puVar10,0);
    FUN_00da9660(1,uVar7,puVar10);
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] <= 0.0) {
      FUN_00aa4080(0x20,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_008e59c0(2);
      param_1[0x3a4] = param_1[0x3a4] | 4;
      (**(code **)(*param_1 + 0x318))();
      iVar6 = param_1[0x1d9];
      if ((iVar6 != 0) && (*(int *)(iVar6 + 0x104) != 1)) {
        *(undefined4 *)(iVar6 + 0x104) = 1;
        *(undefined4 *)(*(int *)(iVar6 + 0xd0) + 4) = 0;
      }
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 3:
    FUN_00da9630(1,1);
    puVar10 = local_30;
    uVar7 = (**(code **)(*param_1 + 0x204))(puVar10,0);
    FUN_00da9660(1,uVar7,puVar10);
    FUN_008203d0(param_1 + 0x530,0x3ecccccd,0x3eb2b8c2);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar6 = FUN_00a94ce0(0);
    if (iVar6 != 0) {
      FUN_00aa4080(0x21,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00a96030(0,0x3f99999a);
      FUN_00a581b0(&fStack_40,0,0x40000000);
      uVar7 = 0;
      param_1[600] = (int)((float)param_1[0x14] - fStack_40);
      param_1[0x259] = (int)((float)param_1[0x15] - fStack_3c);
      param_1[0x25a] = (int)((float)param_1[0x16] - fStack_38);
      param_1[0x249] = 0;
      FUN_00a92f90(0);
      fVar9 = (float10)FUN_0043f390(uVar7);
      param_1[0x24a] = (int)(float)fVar9;
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 4:
    FUN_00da9630(1,1);
    puVar10 = local_20;
    uVar7 = (**(code **)(*param_1 + 0x204))(puVar10,0);
    FUN_00da9660(1,uVar7,puVar10);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    uVar7 = 0;
    FUN_00a92f90(0);
    fVar8 = (float10)FUN_00407b40(uVar7);
    fVar8 = fVar8 / (float10)(float)param_1[0x24a];
    param_1[0x249] = (int)(float)fVar8;
    fVar9 = (float10)1;
    if (fVar9 < fVar8 != (fVar9 == fVar8)) {
      param_1[0x249] = (int)(float)fVar9;
    }
    FUN_00a581b0(&fStack_40,0,2.0 - (float)param_1[0x249]);
    FUN_00a585a0(&fStack_34,0,2.0 - (float)param_1[0x249]);
    fVar9 = (float10)fpatan((float10)fStack_34,(float10)fStack_2c);
    fVar9 = (float10)FUN_00ddba30((float)(fVar9 - (float10)3.1415927));
    fVar1 = (float)param_1[0x25];
    fVar9 = (float10)FUN_00ddba30((float)(fVar9 - (float10)fVar1));
    fVar9 = (float10)FUN_00ddba30((float)(fVar9 * (float10)0.25 + (float10)fVar1));
    param_1[0x25] = (int)(float)fVar9;
    param_1[0x14] = (int)((float)param_1[600] + fStack_40);
    param_1[0x15] = (int)((float)param_1[0x259] + fStack_3c);
    param_1[0x16] = (int)((float)param_1[0x25a] + fStack_38);
    fVar9 = (float10)FUN_00fdc1f0();
    param_1[600] = (int)(float)((float10)(float)param_1[600] * fVar9);
    param_1[0x259] = (int)(float)(fVar9 * (float10)(float)param_1[0x259]);
    param_1[0x25a] = (int)(float)((float10)(float)param_1[0x25a] * fVar9);
    param_1[0x25b] = (int)(float)(fVar9 * (float10)(float)param_1[0x25b]);
    iVar6 = FUN_00a94ce0(0);
    if (iVar6 != 0) {
      FUN_00aa4080(0x22,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00a96030(0,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x24b] = 0;
      param_1[0x24c] = 0x3c888889;
      return;
    }
    break;
  case 5:
    FUN_00da9630(1,1);
    puVar10 = local_20;
    uVar7 = (**(code **)(*param_1 + 0x204))(puVar10,0);
    FUN_00da9660(1,uVar7,puVar10);
    param_1[0x24b] = (int)((float)param_1[0x24c] * (float)param_1[0x244] + (float)param_1[0x24b]);
    fVar9 = (float10)FUN_00fdc1f0();
    param_1[0x24c] = (int)(float)(fVar9 * (float10)(float)param_1[0x24c]);
    fVar1 = (float)param_1[0x24b] / (float)param_1[0x24a];
    bVar3 = NAN(fVar1);
    bVar4 = 1.0 < fVar1 != (fVar1 == 1.0);
    if (!bVar3 && bVar4) {
      fVar1 = 1.0;
    }
    FUN_00a581b0(&fStack_40,0,1.0 - fVar1);
    FUN_00a585a0(&fStack_34,0,1.0 - fVar1);
    fVar9 = (float10)fpatan((float10)fStack_34,(float10)fStack_2c);
    fVar9 = (float10)FUN_00ddba30((float)(fVar9 - (float10)3.1415927));
    fVar1 = (float)param_1[0x25];
    fVar9 = (float10)FUN_00ddba30((float)(fVar9 - (float10)fVar1));
    fVar9 = (float10)FUN_00ddba30((float)(fVar9 * (float10)0.25 + (float10)fVar1));
    param_1[0x25] = (int)(float)fVar9;
    fVar1 = (float)param_1[0x15];
    pcVar2 = *(code **)(*param_1 + 800);
    param_1[0x14] = (int)fStack_40;
    param_1[0x15] = (int)fStack_3c;
    param_1[0x16] = (int)fStack_38;
    param_1[0x225] = (int)-(fVar1 - fStack_3c);
    iVar6 = (*pcVar2)(0x3d888889);
    if (iVar6 == 0) {
      if (!bVar3 && bVar4) {
        pcVar2 = *(code **)(*param_1 + 0x314);
        param_1[0x187] = param_1[0x187] + 1;
        (*pcVar2)();
        iVar6 = param_1[0x1d9];
        if ((iVar6 != 0) && (*(int *)(iVar6 + 0x104) != 0)) {
          *(undefined4 *)(iVar6 + 0x104) = 0;
          return;
        }
      }
    }
    else {
      FUN_00aa4080(0x23,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      pcVar2 = *(code **)(*param_1 + 0x314);
      param_1[0x187] = 7;
      (*pcVar2)();
      iVar6 = param_1[0x1d9];
      if ((iVar6 != 0) && (*(int *)(iVar6 + 0x104) != 0)) {
        *(undefined4 *)(iVar6 + 0x104) = 0;
        return;
      }
    }
    break;
  case 6:
    FUN_00da9630(1,1);
    puVar10 = local_20;
    uVar7 = (**(code **)(*param_1 + 0x204))(puVar10,0);
    FUN_00da9660(1,uVar7,puVar10);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar6 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar6 != 0) {
      FUN_00aa4080(0x23,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 7:
    FUN_00da9630(1,1);
    puVar10 = local_20;
    uVar7 = (**(code **)(*param_1 + 0x204))(puVar10,0);
    FUN_00da9660(1,uVar7,puVar10);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar6 = FUN_00a94ce0(0);
    if (iVar6 != 0) {
      FUN_008e5ac0(2);
      param_1[0x248] = 0x40a00000;
      FUN_00aa4080(5,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 8:
    FUN_00da9630(1,1);
    puVar10 = local_20;
    uVar7 = (**(code **)(*param_1 + 0x204))(puVar10,0);
    FUN_00da9660(1,uVar7,puVar10);
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if ((float)param_1[0x248] <= 0.0) {
      if (param_1[0x656] != 0) {
        FUN_008250c0(1);
      }
      (**(code **)(*param_1 + 0x34c))();
    }
  }
  return;
}

// 0082A640  FUN_0082a640  size=1097  [between]
void __fastcall FUN_0082a640(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined *puVar5;
  
  piVar4 = (int *)param_1[0x2a1];
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    puVar5 = &DAT_01b35b20;
    (**(code **)(*piVar4 + 4))(&DAT_01b35b20);
    iVar2 = FUN_00dd6d80(puVar5);
    piVar4 = (int *)(-(uint)(iVar2 != 0) & (uint)piVar4);
  }
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0xc9,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[600] = param_1[0x10];
    param_1[0x259] = param_1[0x11];
    param_1[0x25a] = param_1[0x12];
    param_1[0x25b] = param_1[0x13];
    param_1[0x250] = 0;
    param_1[0x251] = 0;
    param_1[0x248] = 0x3f97e9d8;
    param_1[0x252] = 0;
    param_1[0x249] = -0x40681628;
    param_1[0x3a4] = param_1[0x3a4] & 0xfffffdff;
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_0082a71f;
  case 1:
LAB_0082a71f:
    iVar2 = FUN_00a8c760(0x10);
    if (iVar2 == 0) {
      param_1[0x3a4] = param_1[0x3a4] | 0x20;
    }
    else {
      param_1[0x3a4] = param_1[0x3a4] | 4;
      param_1[0x3a4] = param_1[0x3a4] & 0xffffffdf;
    }
switchD_0082a681_caseD_2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a8c760(0);
    if (iVar2 != 0) {
      FUN_00820490(param_1[0x2a1] + 0x40,param_1[0x249],0x3f000000,0x3edf66f3);
    }
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x248] = (int)((float)param_1[0x248] * 0.78);
      FUN_00aa4080(0xcc,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x187] = 3;
      return;
    }
    break;
  case 2:
    goto switchD_0082a681_caseD_2;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if ((param_1[0x3a4] & 0x200U) != 0) {
      param_1[0x252] = param_1[0x252] + 1;
    }
    if (piVar4 == (int *)0x0) {
      if (0 < param_1[0x252]) goto LAB_0082a86f;
    }
    else if ((((float)param_1[0x249] == 0.0) || (0 < param_1[0x252])) &&
            (iVar2 = (**(code **)(*piVar4 + 0x360))(), iVar2 != 0)) {
LAB_0082a86f:
      param_1[0x251] = param_1[0x251] + 1;
    }
    if (param_1[0x251] == 0) {
      param_1[0x3a4] = param_1[0x3a4] | 0x100;
    }
    else {
      param_1[0x3a4] = param_1[0x3a4] & 0xfffffeff;
    }
    param_1[0x3a4] = param_1[0x3a4] & 0xfffffdff;
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x250] = param_1[0x250] + 1;
      if (((param_1[0x250] < 10) && ((float)param_1[0x249] != 0.0)) &&
         ((param_1[0x252] < 1 && (param_1[0x666] == 0)))) {
        iVar2 = FUN_00822430();
        iVar3 = FUN_00822430();
        fVar1 = (float)param_1[0x248];
        if (iVar3 != 0) {
          fVar1 = -fVar1;
        }
        param_1[0x249] = (int)fVar1;
        FUN_00aa4080((iVar2 != 0) + -0x36,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        FUN_00ac80a0(0x3f800000,0x3f800000);
        if (64.0 < (float)param_1[0x2a4]) {
          FUN_00a92f90();
          FUN_00e36b50(0,0x10,0);
          FUN_00a92f90();
          FUN_00e36b50(0,8,0);
        }
        else {
          param_1[0x249] = 0;
        }
        FUN_00824480();
        param_1[0x187] = 2;
        return;
      }
      FUN_00aa4080(0xcd,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      FUN_00824480();
      param_1[0x187] = 4;
      return;
    }
    break;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a8c760(0);
    if (iVar2 != 0) {
      FUN_00820560(0x3e23d70a,0x3db2b8c2);
    }
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0082aa83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 0082AE90  FUN_0082ae90  size=142  [between]
void __fastcall FUN_0082ae90(int *param_1)

{
  int iVar1;
  
  param_1[0x3a4] = param_1[0x3a4] & 0xffffffbf;
  (**(code **)(*param_1 + 0x314))();
  iVar1 = param_1[0x1d9];
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x104) != 0)) {
    *(undefined4 *)(iVar1 + 0x104) = 0;
  }
  param_1[0x3a4] = param_1[0x3a4] & 0xffffffdf;
  if (param_1[0x422] != 0) {
    (**(code **)(param_1[0x3fc] + 8))(0,0,0);
  }
  if (param_1[0x44e] != 0) {
    (**(code **)(param_1[0x428] + 8))(0,0,0);
    return;
  }
  return;
}

// 0082AF20  FUN_0082af20  size=142  [between]
void __fastcall FUN_0082af20(int param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  
  if ((*(uint *)(param_1 + 0xe90) & 0x1000) != 0) {
    return;
  }
  iVar2 = FUN_00a9f6b0(1);
  if (iVar2 != 0) {
    return;
  }
  sVar1 = FUN_00dde2d0(0,2);
  uVar3 = (uint)sVar1;
  if (*(uint *)(param_1 + 0x145c) == uVar3) {
    *(int *)(param_1 + 0x1460) = *(int *)(param_1 + 0x1460) + 1;
    if (*(int *)(param_1 + 0x1460) < 3) goto LAB_0082af72;
    uVar3 = (uint)(uVar3 == 0);
  }
  *(undefined4 *)(param_1 + 0x1460) = 0;
LAB_0082af72:
  *(uint *)(param_1 + 0x145c) = uVar3;
  FUN_00aa4080(*(undefined4 *)(&DAT_01648898 + uVar3 * 4),1,0,0x3f800000,0x8000010,0xbf800000,
               0x3f800000);
  return;
}

// 0082AFB0  FUN_0082afb0  size=187  [between]
void __fastcall FUN_0082afb0(int param_1)

{
  float fVar1;
  
  if ((0 < *(int *)(param_1 + 0x1470)) &&
     (fVar1 = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0x1484),
     *(float *)(param_1 + 0x1484) = fVar1, 75.0 <= fVar1)) {
    *(undefined4 *)(param_1 + 0x1484) = 0;
    *(undefined4 *)(param_1 + 0x1470) = 0;
    *(undefined4 *)(param_1 + 0x1474) = 0;
  }
  if ((*(byte *)(param_1 + 0xe90) & 2) != 0) {
    fVar1 = *(float *)(param_1 + 0x1498) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x1498) = fVar1;
    if (fVar1 < 0.0 != (fVar1 == 0.0)) {
      *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) & 0xfffffffd;
    }
  }
  if ((*(uint *)(param_1 + 0xe90) & 0x400) != 0) {
    fVar1 = *(float *)(param_1 + 0x1834) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x1834) = fVar1;
    if (fVar1 < 0.0 != (fVar1 == 0.0)) {
      *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) & 0xfffffbff;
    }
  }
  fVar1 = *(float *)(param_1 + 0x1a64) - *(float *)(param_1 + 0x910);
  *(float *)(param_1 + 0x1a64) = fVar1;
  if (fVar1 < 0.0 != (fVar1 == 0.0)) {
    *(undefined4 *)(param_1 + 0x1a6c) = 0;
  }
  return;
}

// 0082B160  FUN_0082b160  size=123  [between]
undefined4 __fastcall FUN_0082b160(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x1478);
  if ((*(int *)(param_1 + 0x4a0) == 0) && ((*(byte *)(param_1 + 0xb00) & 2) != 0)) {
    iVar1 = FUN_00a8eea0();
    iVar2 = FUN_00a8eeb0();
    if ((float)iVar1 / (float)iVar2 < 0.1 != ((float)iVar1 / (float)iVar2 == 0.1)) {
      iVar3 = iVar3 * 2;
    }
  }
  if ((*(int *)(param_1 + 0x1470) < iVar3) &&
     (*(int *)(param_1 + 0x1474) < *(int *)(param_1 + 0x147c))) {
    return 0;
  }
  return 1;
}

// 0082B1E0  FUN_0082b1e0  size=590  [between]
void __fastcall FUN_0082b1e0(int *param_1)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  float10 fVar5;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  if (param_1[0x187] != 0) {
    if (param_1[0x187] != 1) {
      return;
    }
    goto LAB_0082b2ed;
  }
  param_1[0x51b] = 0;
  if (0.2617994 < ABS((float)param_1[0x522])) {
    if (ABS((float)param_1[0x522]) < 2.1816616) {
      if ((float)param_1[0x522] <= 0.0) {
        param_1[0x51b] = 3;
      }
      else {
        param_1[0x51b] = 2;
      }
    }
    else {
      param_1[0x51b] = 1;
    }
  }
  else {
    param_1[0x51b] = 0;
  }
  iVar3 = 0;
  if (param_1[0x51b] == 1) {
    iVar3 = 2;
  }
  sVar2 = FUN_00dde2d0(0,1);
  uVar4 = iVar3 + sVar2;
  if (param_1[0x519] == uVar4) {
    param_1[0x51a] = param_1[0x51a] + 1;
    if (2 < param_1[0x51a]) {
      uVar4 = (uint)(uVar4 == 0);
      goto LAB_0082b2a8;
    }
  }
  else {
LAB_0082b2a8:
    param_1[0x51a] = 0;
  }
  param_1[0x519] = uVar4;
  FUN_00aa4080(*(undefined4 *)(&DAT_016488a4 + uVar4 * 4),0,0,0x3f800000,0x8000000,0xbf800000,
               0x3f800000);
  param_1[0x187] = param_1[0x187] + 1;
LAB_0082b2ed:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  if (param_1[0x520] <= param_1[0x51c]) {
    FUN_00a92f90();
    iVar3 = FUN_00e26e90();
    if (iVar3 == 0) {
      fVar5 = (float10)-1.0;
    }
    else {
      fVar5 = (float10)FUN_00e36970(0);
    }
    if ((float10)0.13333333333333333 <= fVar5) {
      if ((param_1[0x4a4] != 0) &&
         (((param_1[0x4b0] != 0 || (param_1[0x4bc] != 0)) && (iVar3 = FUN_00825fe0(), iVar3 != 0))))
      {
        uVar4 = FUN_00dde2d0(0,100);
        if ((uVar4 & 1) != 0) {
          FUN_00824fd0(0x50004);
          return;
        }
        if (param_1[0x128] != 0) {
          return;
        }
        FUN_00824fd0(0x20002);
        return;
      }
      uVar4 = FUN_00dde2d0(0,100);
      if ((uVar4 & 1) != 0) {
        FUN_00824fd0(0x50003);
        return;
      }
      if ((param_1[0x3a4] & 0x200000U) != 0) {
        return;
      }
      FUN_00824fd0(0x20007);
      return;
    }
  }
  if (((param_1[0x128] == 0) && ((*(byte *)(param_1 + 0x2c0) & 2) != 0)) &&
     (iVar3 = FUN_00a8c760(4), iVar3 != 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  iVar3 = FUN_00a94ce0(0);
  if ((iVar3 == 0) && (!bVar1)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0082b42c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 0082B430  FUN_0082b430  size=865  [between]
void __fastcall FUN_0082b430(int *param_1)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  float10 fVar5;
  
  uVar4 = 0;
  if ((param_1[0x3a4] & 0x100000U) != 0) {
    uVar4 = 0x40;
  }
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0xa0,0,0x3d888889,0x3f800000,uVar4 | 0x8000000,0xbf800000,0x3f800000);
    fVar5 = (float10)FUN_00ddba30((float)param_1[0x25] - (float)param_1[0x522]);
    param_1[0x25] = (int)(float)fVar5;
    (**(code **)(*param_1 + 0x318))();
    iVar3 = param_1[0x1d9];
    if ((iVar3 != 0) && (*(int *)(iVar3 + 0x104) != 1)) {
      *(undefined4 *)(iVar3 + 0x104) = 1;
      *(undefined4 *)(*(int *)(iVar3 + 0xd0) + 4) = 0;
    }
    param_1[0x3a4] = param_1[0x3a4] | 4;
    (**(code **)(*param_1 + 0x1d4))(1);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    param_1[600] = param_1[0x14];
    param_1[0x259] = param_1[0x15];
    param_1[0x25a] = param_1[0x16];
    param_1[0x25b] = param_1[0x17];
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[600] = (int)((float)param_1[0x14] - (float)param_1[600]);
    param_1[0x259] = (int)((float)param_1[0x15] - (float)param_1[0x259]);
    param_1[0x25a] = (int)((float)param_1[0x16] - (float)param_1[0x25a]);
    param_1[0x25b] = (int)((float)param_1[0x17] - (float)param_1[0x25b]);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      (**(code **)(*param_1 + 0x314))();
      iVar3 = param_1[0x1d9];
      if ((iVar3 != 0) && (*(int *)(iVar3 + 0x104) != 0)) {
        *(undefined4 *)(iVar3 + 0x104) = 0;
      }
      fVar1 = (float)param_1[0x244];
      param_1[600] = (int)((float)param_1[600] / fVar1);
      param_1[0x259] = (int)((float)param_1[0x259] / fVar1);
      param_1[0x25a] = (int)((float)param_1[0x25a] / fVar1);
      param_1[0x25b] = (int)((float)param_1[0x25b] / fVar1);
      param_1[0x225] = param_1[0x259];
      pcVar2 = *(code **)(*param_1 + 800);
      param_1[0x259] = 0;
      iVar3 = (*pcVar2)(0x3d888889);
      if (iVar3 == 0) {
        FUN_00aa4080(0xa1,0,0x3d088889,0x3f800000,uVar4,0xbf800000,0x3f800000);
        param_1[0x187] = param_1[0x187] + 1;
      }
      else {
        FUN_00aa4080(0xa2,0,0x3d088889,0x3f800000,uVar4 | 0x8000000,0xbf800000,0x3f800000);
        (**(code **)(*param_1 + 0x1d4))(0);
        param_1[0x187] = 3;
      }
LAB_0082b746:
      FUN_00ac80a0(0x3f800000,0x3f800000);
      return;
    }
    break;
  case 2:
    param_1[0x14] = (int)((float)param_1[600] + (float)param_1[0x14]);
    param_1[0x15] = (int)((float)param_1[0x259] + (float)param_1[0x15]);
    param_1[0x16] = (int)((float)param_1[0x25a] + (float)param_1[0x16]);
    param_1[0x17] = (int)((float)param_1[0x25b] + (float)param_1[0x17]);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar3 == 0) {
      return;
    }
    (**(code **)(*param_1 + 0x1d4))(0);
    FUN_00aa4080(0xa2,0,0x3d088889,0x3f800000,uVar4 | 0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_0082b746;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_00824fd0(0x30007);
      return;
    }
  }
  return;
}

// 0082B7B0  FUN_0082b7b0  size=857  [between]
void __fastcall FUN_0082b7b0(int *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  float10 fVar5;
  
  uVar4 = 0;
  if ((param_1[0x3a4] & 0x100000U) != 0) {
    uVar4 = 0x40;
  }
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0xa4,0,0x3d088889,0x3f800000,uVar4 | 0x8000000,0xbf800000,0x3f800000);
    (**(code **)(*param_1 + 0x1d4))(1);
    param_1[0x22a] = (int)((float)param_1[0x52b] * 0.5);
    FUN_00a92f90();
    iVar3 = FUN_00e26e90();
    if (iVar3 == 0) {
      fVar5 = (float10)-1.0;
    }
    else {
      fVar5 = (float10)FUN_00e36a50(0);
    }
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x225] =
         (int)(float)(fVar5 * (float10)(float)param_1[0x22a] * (float10)60.0 * (float10)0.875);
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      pcVar1 = *(code **)(*param_1 + 800);
      param_1[0x225] = -0x42333333;
      iVar3 = (*pcVar1)(0x3d888889);
      if (iVar3 == 0) {
        param_1[0x3a4] = param_1[0x3a4] | 0x10000000;
        FUN_00aa4080(0xa5,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
        param_1[0x187] = param_1[0x187] + 1;
      }
      else {
        FUN_00aa4080(0xa6,0,0x3d088889,0x3f800000,uVar4 | 0x8000000,0xbf800000,0x3f800000);
        (**(code **)(*param_1 + 0x1d4))(0);
        param_1[0x187] = 3;
      }
      FUN_00ac80a0(0x3f800000,0x3f800000);
      return;
    }
    break;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar3 != 0) {
      param_1[0x3a4] = param_1[0x3a4] & 0xefffffff;
      FUN_00aa4080(0xa6,0,0x3d088889,0x3f800000,uVar4 | 0x8000000,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      (**(code **)(*param_1 + 0x1d4))(0);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      if (((param_1[0x3a4] & 0x8000000U) != 0) && ((param_1[0x3a4] & 0x80000U) == 0)) {
        FUN_00aa4080(0xaa,0,0x3d088889,0x3f800000,uVar4 | 0x8000000,0xbf800000,0x3f800000);
        FUN_00ac80a0(0x3f800000,0x3f800000);
        param_1[0x187] = param_1[0x187] + 1;
        param_1[0x3a4] = param_1[0x3a4] | 0x8000000;
        return;
      }
      FUN_00824fd0(0x30007);
      param_1[0x3a4] = param_1[0x3a4] | 0x8000000;
      return;
    }
    break;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (((param_1[0x128] == 0) && ((*(byte *)(param_1 + 0x2c0) & 2) != 0)) &&
       (iVar3 = FUN_00a8c760(4), iVar3 != 0)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    iVar3 = FUN_00a94ce0(0);
    if ((iVar3 != 0) || (bVar2)) {
                    /* WARNING: Could not recover jumptable at 0x0082bb04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 0082BB20  FUN_0082bb20  size=780  [between]
void __fastcall FUN_0082bb20(int *param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  uVar3 = 0;
  if ((param_1[0x3a4] & 0x100000U) != 0) {
    uVar3 = 0x40;
  }
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0xa7,0,0x3d088889,0x3f800000,uVar3 | 0x8000000,0xbf800000,0x3f800000);
    param_1[0x22a] = param_1[0x52b];
    (**(code **)(*param_1 + 0x318))();
    iVar2 = param_1[0x1d9];
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x104) != 1)) {
      *(undefined4 *)(iVar2 + 0x104) = 1;
      *(undefined4 *)(*(int *)(iVar2 + 0xd0) + 4) = 0;
    }
    (**(code **)(*param_1 + 0x1d4))(1);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      (**(code **)(*param_1 + 0x314))();
      iVar2 = param_1[0x1d9];
      if ((iVar2 != 0) && (*(int *)(iVar2 + 0x104) != 0)) {
        *(undefined4 *)(iVar2 + 0x104) = 0;
      }
      FUN_00aa4080(0xa5,0,0x3d088889,0x3f800000,uVar3,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x3a4] = param_1[0x3a4] | 0x10000000;
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar2 != 0) {
      FUN_00aa4080(0xa6,0,0x3d088889,0x3f800000,uVar3 | 0x8000000,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x3a4] = param_1[0x3a4] & 0xefffffff;
      (**(code **)(*param_1 + 0x1d4))(0);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      if (((param_1[0x3a4] & 0x8000000U) != 0) && ((param_1[0x3a4] & 0x80000U) == 0)) {
        FUN_00aa4080(0xaa,0,0x3d088889,0x3f800000,uVar3 | 0x8000000,0xbf800000,0x3f800000);
        FUN_00ac80a0(0x3f800000,0x3f800000);
        param_1[0x187] = param_1[0x187] + 1;
        param_1[0x3a4] = param_1[0x3a4] | 0x8000000;
        return;
      }
      FUN_00824fd0(0x30007);
      param_1[0x3a4] = param_1[0x3a4] | 0x8000000;
      return;
    }
    break;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (((param_1[0x128] == 0) && ((*(byte *)(param_1 + 0x2c0) & 2) != 0)) &&
       (iVar2 = FUN_00a8c760(4), iVar2 != 0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    iVar2 = FUN_00a94ce0(0);
    if ((iVar2 != 0) || (bVar1)) {
                    /* WARNING: Could not recover jumptable at 0x0082be26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 0082BE40  FUN_0082be40  size=560  [between]
void __fastcall FUN_0082be40(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_18;
  
  iVar3 = 0;
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    iVar3 = FUN_00a7c8a0();
  }
  if (param_1[0x187] == 0) {
    (**(code **)(*param_1 + 0x314))();
    iVar2 = param_1[0x1d9];
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x104) != 0)) {
      *(undefined4 *)(iVar2 + 0x104) = 0;
    }
    FUN_00aa4080(0x9d,0,0x3dcccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    switchD_0080dbae::default();
    fStack_20 = *(float *)(iVar3 + 0x40);
    fStack_18 = *(float *)(iVar3 + 0x48);
    fStack_30 = (float)param_1[0x10] - fStack_20;
    fStack_2c = (float)param_1[0x11] - *(float *)(iVar3 + 0x44);
    fStack_28 = (float)param_1[0x12] - fStack_18;
    fStack_24 = (float)param_1[0x13] - *(float *)(iVar3 + 0x4c);
    fVar1 = fStack_28 * fStack_28 + fStack_30 * fStack_30 + fStack_2c * fStack_2c;
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      FUN_00ddf460(&fStack_30,&fStack_30);
      fVar4 = (float10)fStack_2c;
      fVar5 = (float10)fStack_30;
      fVar7 = (float10)fStack_28;
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      fVar5 = (float10)0;
      fVar4 = (float10)1;
      fVar7 = fVar5;
    }
    fVar6 = (float10)2.5;
    fVar5 = fVar5 * fVar6;
    fStack_30 = (float)fVar5;
    fStack_2c = (float)(fVar4 * fVar6);
    fVar7 = fVar7 * fVar6;
    fStack_28 = (float)fVar7;
    fStack_24 = (float)((float10)fStack_24 * fVar6);
    param_1[0x14] = (int)(float)((float10)fStack_20 + fVar5);
    param_1[0x16] = (int)(float)(fVar7 + (float10)fStack_18);
    fVar5 = (float10)fpatan(-fVar5,-fVar7);
    fVar4 = (float10)FUN_00ddba30((float)(fVar5 - (float10)(float)param_1[0x25]));
    fVar5 = (float10)(float)fVar5;
    if ((float10)2.5307274 < ABS(fVar4)) {
      fVar5 = (float10)FUN_00ddba30((float)(fVar5 + (float10)3.1415927));
    }
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x25] = (int)(float)fVar5;
    param_1[0x188] = 0;
    param_1[0x248] = 0x40400000;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34c))();
  }
  return;
}

// 0082C070  FUN_0082c070  size=885  [between]
void __fastcall FUN_0082c070(int *param_1)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  undefined4 uVar11;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_3c;
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [32];
  
  iVar6 = 0;
  iVar3 = FUN_00a81330();
  if (iVar3 != 0) {
    iVar6 = FUN_00a7c8a0();
  }
  (**(code **)(*param_1 + 0x220))(0x40a00000);
  iVar3 = param_1[0x187];
  if (iVar3 == 0) {
    FUN_00aa4080(0x9b,0,0x3dcccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    switchD_0080dbae::default();
    fStack_44 = *(float *)(iVar6 + 0x40);
    fStack_3c = *(float *)(iVar6 + 0x48);
    fStack_54 = (float)param_1[0x10] - fStack_44;
    fStack_50 = (float)param_1[0x11] - *(float *)(iVar6 + 0x44);
    fStack_4c = (float)param_1[0x12] - fStack_3c;
    fStack_48 = (float)param_1[0x13] - *(float *)(iVar6 + 0x4c);
    fVar1 = fStack_4c * fStack_4c + fStack_54 * fStack_54 + fStack_50 * fStack_50;
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      FUN_00ddf460(&fStack_54,&fStack_54);
      fVar9 = (float10)fStack_50;
      fVar7 = (float10)fStack_54;
      fVar10 = (float10)fStack_4c;
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      fVar7 = (float10)0;
      fVar9 = (float10)1;
      fVar10 = fVar7;
    }
    fVar8 = (float10)3.0;
    fVar7 = fVar7 * fVar8;
    fStack_54 = (float)fVar7;
    fStack_50 = (float)(fVar9 * fVar8);
    fVar10 = fVar10 * fVar8;
    fStack_4c = (float)fVar10;
    fStack_48 = (float)((float10)fStack_48 * fVar8);
    param_1[0x14] = (int)(float)((float10)fStack_44 + fVar7);
    param_1[0x16] = (int)(float)(fVar10 + (float10)fStack_3c);
    fVar7 = (float10)fpatan(-fVar7,-fVar10);
    fVar9 = (float10)FUN_00ddba30((float)(fVar7 - (float10)(float)param_1[0x25]));
    fVar7 = (float10)(float)fVar7;
    if ((float10)2.5307274 < ABS(fVar9)) {
      fVar7 = (float10)FUN_00ddba30((float)(fVar7 + (float10)3.1415927));
    }
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x25] = (int)(float)fVar7;
    param_1[0x248] = 0x40400000;
  }
  else if (iVar3 != 1) {
    if (iVar3 != 2) {
      return;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (((param_1[0x128] == 0) && ((*(byte *)(param_1 + 0x2c0) & 2) != 0)) &&
       (iVar3 = FUN_00a8c760(4), iVar3 != 0)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    iVar3 = FUN_00a94ce0(0);
    if ((iVar3 == 0) && (!bVar2)) {
      return;
    }
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar1 = (float)param_1[0x248];
  param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
  if (fVar1 - (float)param_1[0x244] <= 0.0) {
    fVar9 = (float10)FUN_00a8ec30(param_1[0x2a1] + 0x40);
    fVar9 = (float10)FUN_00ddba30((float)((float10)(float)param_1[0x25] - fVar9));
    if ((float10)1.7453293 <= ABS(fVar9)) {
      uVar11 = 0x1d;
      if (iVar6 != 0) {
        pfVar4 = (float *)FUN_00a925a0(auStack_34);
        pfVar5 = (float *)FUN_00a92640(auStack_24);
        if (pfVar5[2] * pfVar4[2] + *pfVar5 * *pfVar4 + pfVar5[1] * pfVar4[1] < 0.0) {
          uVar11 = 0x1c;
        }
      }
    }
    else {
      uVar11 = 0x1b;
    }
    FUN_00aa4080(uVar11,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  return;
}

// 0082C3F0  FUN_0082c3f0  size=410  [between]
void __fastcall FUN_0082c3f0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  if ((param_1[0x3a4] & 0x100000U) != 0) {
    uVar3 = 0x40;
  }
  iVar2 = param_1[0x187];
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  if (iVar2 == 0) {
    pcVar1 = *(code **)(*param_1 + 0x314);
    param_1[0x225] = -0x41b33333;
    (*pcVar1)();
    iVar2 = param_1[0x1d9];
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x104) != 0)) {
      *(undefined4 *)(iVar2 + 0x104) = 0;
    }
    iVar2 = (**(code **)(*param_1 + 0x1d8))();
    if (iVar2 == 0) {
      FUN_00aa4080(0xa6,0,0,0x3f800000,uVar3 | 0x8000000,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x187] = 2;
      return;
    }
    FUN_00aa4080(0xa5,0,0,0x3f800000,uVar3 | 0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (iVar2 != 1) {
    if (iVar2 != 2) {
      return;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 == 0) {
      return;
    }
    FUN_00824fd0(0x30007);
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = (**(code **)(*param_1 + 800))(0x3d888889);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x1d4))(0);
    FUN_00aa4080(0xa6,0,0,0x3f800000,uVar3 | 0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  return;
}

// 0082C590  FUN_0082c590  size=462  [between]
void __fastcall FUN_0082c590(int *param_1)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  if ((param_1[0x3a4] & 0x100000U) != 0) {
    uVar4 = 0x40;
  }
  iVar3 = param_1[0x187];
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  if (iVar3 != 0) {
    bVar2 = true;
    if (iVar3 != 1) {
      if (iVar3 != 2) {
        return;
      }
      FUN_00ac80a0(0x3f800000,0x3f800000);
      if (((param_1[0x128] != 0) || ((*(byte *)(param_1 + 0x2c0) & 2) == 0)) ||
         (iVar3 = FUN_00a8c760(4), iVar3 == 0)) {
        bVar2 = false;
      }
      iVar3 = FUN_00a94ce0(0);
      if ((iVar3 == 0) && (!bVar2)) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x0082c627. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    goto LAB_0082c6be;
  }
  FUN_00aa4080(0xa9,0,0x3d088889,0x3f800000,uVar4,0xbf800000,0x3f800000);
  if (param_1[0x515] == 0x30001) {
    fVar1 = (float)param_1[0x524];
LAB_0082c681:
    param_1[0x523] = (int)(fVar1 * 60.0);
  }
  else if (param_1[0x515] - 0x30004U < 2) {
    fVar1 = (float)param_1[0x525];
    goto LAB_0082c681;
  }
  if (param_1[0x139] != 0) {
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00824fd0(0x60001);
    return;
  }
  param_1[0x187] = param_1[0x187] + 1;
LAB_0082c6be:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar1 = (float)param_1[0x523];
  param_1[0x523] = (int)(fVar1 - (float)param_1[0x244]);
  if (fVar1 - (float)param_1[0x244] <= 0.0) {
    if ((param_1[0x3a4] & 0x80000U) != 0) {
      FUN_00824fd0(0x70006);
      return;
    }
    FUN_00aa4080(0xaa,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x523] = 0;
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  return;
}

// 0082C760  FUN_0082c760  size=215  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0082c760(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  
  *(byte *)(param_1 + 0xdb4) = *(byte *)(param_1 + 0xdb4) | 8;
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar3 = 0xb2;
    if (2.1816616 < ABS(*(float *)(param_1 + 0x1488))) {
      uVar3 = 0xb3;
    }
    FUN_00aa4080(uVar3,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  iVar2 = FUN_00a8c760(10);
  if (iVar2 != 0) {
    iVar2 = FUN_00a8e520();
    if (iVar2 != 0) {
      fVar1 = _DAT_01be942c / *(float *)(param_1 + 0x910);
      fVar1 = fVar1 + fVar1;
      goto LAB_0082c7fc;
    }
  }
  fVar1 = 1.0;
LAB_0082c7fc:
  FUN_00a96030(0,fVar1);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    FUN_00824fd0(0x30007);
  }
  return;
}

// 0082C840  FUN_0082c840  size=822  [between]
void __fastcall FUN_0082c840(int *param_1)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  switch(param_1[0x187]) {
  case 0:
    if (param_1[0x515] == 0x30009) {
      param_1[0x51b] = 0;
      if (0.2617994 < ABS((float)param_1[0x522])) {
        if (ABS((float)param_1[0x522]) < 2.1816616) {
          if ((float)param_1[0x522] <= 0.0) {
            param_1[0x51b] = 3;
          }
          else {
            param_1[0x51b] = 2;
          }
        }
        else {
          param_1[0x51b] = 1;
        }
      }
      else {
        param_1[0x51b] = 0;
      }
      iVar3 = 0;
      if (param_1[0x51b] == 1) {
        iVar3 = 2;
      }
      sVar2 = FUN_00dde2d0(0,1);
      uVar4 = iVar3 + sVar2;
      if (param_1[0x519] == uVar4) {
        param_1[0x51a] = param_1[0x51a] + 1;
        if (2 < param_1[0x51a]) {
          uVar4 = (uint)(uVar4 == 0);
          goto LAB_0082c923;
        }
      }
      else {
LAB_0082c923:
        param_1[0x51a] = 0;
      }
      param_1[0x519] = uVar4;
      FUN_00aa4080(*(undefined4 *)(&DAT_016488b4 + uVar4 * 4),0,0,0x3f800000,0x8000000,0xbf800000,
                   0x3f800000);
      iVar3 = 0x3eaaaaab;
    }
    else {
      FUN_00aa4120(0xab,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      iVar3 = 0x3e4ccccd;
    }
    param_1[0x248] = iVar3;
    (**(code **)(*param_1 + 0x1f8))(1);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (((param_1[0x128] != 0) || ((*(byte *)(param_1 + 0x2c0) & 2) == 0)) &&
       (param_1[0x186] == 0x3000a)) {
      *(undefined2 *)(param_1 + 0x209) = 3;
      param_1[0x20a] = 0x78;
      FUN_00828b70();
    }
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_00aa4080(0xac,0,param_1[0x248],0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (((param_1[0x128] != 0) || ((*(byte *)(param_1 + 0x2c0) & 2) == 0)) &&
       (param_1[0x186] == 0x3000a)) {
      *(undefined2 *)(param_1 + 0x209) = 3;
      param_1[0x20a] = 0x78;
      FUN_00828b70();
    }
    if ((*(byte *)(param_1 + 0x3a4) & 2) == 0) {
      FUN_00aa4080(0xad,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (((param_1[0x128] == 0) && ((*(byte *)(param_1 + 0x2c0) & 2) != 0)) &&
       (iVar3 = FUN_00a8c760(4), iVar3 != 0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    iVar3 = FUN_00a94ce0(0);
    if ((iVar3 != 0) || (bVar1)) {
                    /* WARNING: Could not recover jumptable at 0x0082cb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 0082CB90  FUN_0082cb90  size=339  [between]
void __fastcall FUN_0082cb90(int *param_1)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = param_1[0x187];
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  if (iVar3 == 0) {
    FUN_00aa4080(0xaf,0,0x3e888889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = (int)((float)param_1[0x654] * 60.0);
  }
  else {
    bVar2 = true;
    if (iVar3 != 1) {
      if (iVar3 != 2) {
        return;
      }
      FUN_00ac80a0(0x3f800000,0x3f800000);
      if (((param_1[0x128] != 0) || ((*(byte *)(param_1 + 0x2c0) & 2) == 0)) ||
         (iVar3 = FUN_00a8c760(4), iVar3 == 0)) {
        bVar2 = false;
      }
      iVar3 = FUN_00a94ce0(0);
      if ((iVar3 == 0) && (!bVar2)) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x0082cc12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar1 = (float)param_1[0x248];
  param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
  if (fVar1 - (float)param_1[0x244] <= 0.0) {
    FUN_00aa4080(0xb0,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  *(undefined2 *)(param_1 + 0x209) = 4;
  param_1[0x20a] = 0x78;
  return;
}

// 0082CCF0  FUN_0082ccf0  size=412  [between]
void __fastcall FUN_0082ccf0(int *param_1)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  
  iVar3 = param_1[0x187];
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  if (iVar3 == 0) {
    uVar5 = 0;
    if ((param_1[0x3a4] & 0x100000U) != 0) {
      uVar5 = 0x40;
    }
    FUN_00aa4080(0xb1,0,0x3e088889,0x3f800000,uVar5,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = (int)((float)param_1[0x654] * 60.0);
  }
  else if (iVar3 != 1) {
    if (iVar3 != 2) {
      return;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (((param_1[0x128] == 0) && ((*(byte *)(param_1 + 0x2c0) & 2) != 0)) &&
       (iVar3 = FUN_00a8c760(4), iVar3 != 0)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    iVar3 = FUN_00a94ce0(0);
    if ((iVar3 == 0) && (!bVar2)) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0082cd72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  uVar4 = 0;
  if ((param_1[0x3a4] & 0x100000U) != 0) {
    uVar4 = 0x40;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar1 = (float)param_1[0x248];
  param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
  if (fVar1 - (float)param_1[0x244] <= 0.0) {
    if ((param_1[0x3a4] & 0x80000U) == 0) {
      uVar4 = 0x8000000;
      uVar5 = 0xaa;
    }
    else {
      uVar4 = uVar4 | 0x8000000;
      uVar5 = 0x140;
    }
    FUN_00aa4080(uVar5,0,0x3e4ccccd,0x3f800000,uVar4,0xbf800000,0x3f800000);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  return;
}

// 0082CE90  FUN_0082ce90  size=360  [between]
void __fastcall FUN_0082ce90(int *param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  if (param_1[0x187] == 0) {
    sVar1 = FUN_00dde2d0(0,1);
    iVar3 = (int)sVar1;
    if ((param_1[0x515] == 0x3000d) && (iVar3 == param_1[0x250])) {
      param_1[0x250] = (uint)(param_1[0x250] == 0);
    }
    param_1[0x250] = iVar3;
    FUN_00aa4080(*(undefined4 *)(&DAT_016488c4 + iVar3 * 4),0,0x3e088889,0x3f800000,0x8000000,
                 0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  if (param_1[0x51c] < param_1[0x520]) {
    iVar3 = FUN_00a94ce0(0);
    if ((iVar3 == 0) && (iVar3 = FUN_00a8c760(4), iVar3 == 0)) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0082cff6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  if ((param_1[0x4a4] == 0) || ((param_1[0x4b0] == 0 && (param_1[0x4bc] == 0)))) {
    uVar2 = FUN_00dde2d0(0,100);
    if ((uVar2 & 1) != 0) {
      FUN_00824fd0(0x50003);
      return;
    }
    if ((param_1[0x3a4] & 0x200000U) == 0) {
      FUN_00824fd0(0x20007);
      return;
    }
  }
  else {
    uVar2 = FUN_00dde2d0(0,100);
    if ((uVar2 & 1) == 0) {
      if (param_1[0x128] == 0) {
        FUN_00824fd0(0x20002);
        return;
      }
    }
    else {
      FUN_00824fd0(0x50004);
    }
  }
  return;
}

// 0082D000  FUN_0082d000  size=1090  [between]
void __fastcall FUN_0082d000(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  code *pcVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  float10 fVar10;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  uVar9 = 0;
  if ((param_1[0x3a4] & 0x100000U) != 0) {
    uVar9 = 0x40;
  }
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0xa0,0,0x3d888889,0x3f800000,uVar9 | 0x8000000,0xbf800000,0x3f800000);
    fVar10 = (float10)FUN_00ddba30((float)param_1[0x25] - (float)param_1[0x522]);
    param_1[0x25] = (int)(float)fVar10;
    (**(code **)(*param_1 + 0x318))();
    iVar8 = param_1[0x1d9];
    if ((iVar8 != 0) && (*(int *)(iVar8 + 0x104) != 1)) {
      *(undefined4 *)(iVar8 + 0x104) = 1;
      *(undefined4 *)(*(int *)(iVar8 + 0xd0) + 4) = 0;
    }
    param_1[0x3a4] = param_1[0x3a4] | 4;
    (**(code **)(*param_1 + 0x1d4))(1);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x250] = 0;
  case 1:
    fVar1 = (float)param_1[0x14];
    fVar2 = (float)param_1[0x15];
    fVar3 = (float)param_1[0x16];
    fVar4 = (float)param_1[0x17];
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[600] = (int)((float)param_1[0x14] - fVar1);
    param_1[0x259] = (int)((float)param_1[0x15] - fVar2);
    param_1[0x25a] = (int)((float)param_1[0x16] - fVar3);
    param_1[0x25b] = (int)((float)param_1[0x17] - fVar4);
    fVar5 = (float)param_1[0x6a6];
    param_1[600] = (int)((float)param_1[600] * fVar5);
    param_1[0x259] = (int)(fVar5 * (float)param_1[0x259]);
    param_1[0x25a] = (int)(fVar5 * (float)param_1[0x25a]);
    param_1[0x25b] = (int)(fVar5 * (float)param_1[0x25b]);
    param_1[0x259] = (int)((float)param_1[0x259] * 0.85);
    param_1[0x14] = (int)((float)param_1[600] + fVar1);
    param_1[0x15] = (int)(fVar2 + (float)param_1[0x259]);
    param_1[0x16] = (int)(fVar3 + (float)param_1[0x25a]);
    param_1[0x17] = (int)(fVar4 + (float)param_1[0x25b]);
    FUN_00a96030(0,0x3fb33333);
    iVar8 = FUN_00a94ce0(0);
    if (iVar8 != 0) {
      (**(code **)(*param_1 + 0x314))();
      iVar8 = param_1[0x1d9];
      if ((iVar8 != 0) && (*(int *)(iVar8 + 0x104) != 0)) {
        *(undefined4 *)(iVar8 + 0x104) = 0;
      }
      fVar1 = (float)param_1[0x244];
      param_1[600] = (int)((float)param_1[600] / fVar1);
      param_1[0x259] = (int)((float)param_1[0x259] / fVar1);
      param_1[0x25a] = (int)((float)param_1[0x25a] / fVar1);
      param_1[0x25b] = (int)((float)param_1[0x25b] / fVar1);
      param_1[0x225] = param_1[0x259];
      pcVar6 = *(code **)(*param_1 + 800);
      param_1[0x259] = 0;
      iVar8 = (*pcVar6)(0x3d888889);
      if (iVar8 == 0) {
        FUN_00aa4080(0xa1,0,0x3d088889,0x3f800000,uVar9,0xbf800000,0x3f800000);
        param_1[0x187] = param_1[0x187] + 1;
      }
      else {
        FUN_00aa4080(0xa2,0,0x3d088889,0x3f800000,uVar9 | 0x8000000,0xbf800000,0x3f800000);
        (**(code **)(*param_1 + 0x1d4))(0);
        param_1[0x187] = 3;
      }
LAB_0082d300:
      FUN_00ac80a0(0x3f800000,0x3f800000);
      return;
    }
    break;
  case 2:
    param_1[0x14] = (int)((float)param_1[600] + (float)param_1[0x14]);
    param_1[0x15] = (int)((float)param_1[0x259] + (float)param_1[0x15]);
    param_1[0x16] = (int)((float)param_1[0x25a] + (float)param_1[0x16]);
    param_1[0x17] = (int)((float)param_1[0x25b] + (float)param_1[0x17]);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar8 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar8 == 0) {
      return;
    }
    (**(code **)(*param_1 + 0x1d4))(0);
    FUN_00aa4080(0xa2,0,0x3d088889,0x3f800000,uVar9 | 0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x250] = 0;
    goto LAB_0082d300;
  case 3:
    iVar8 = FUN_00a8c760(10);
    if (iVar8 != 0) {
      param_1[0x250] = param_1[0x250] + 1;
    }
    if (param_1[0x250] == 0) {
      uVar7 = 0x3f19999a;
    }
    else {
      uVar7 = 0x3f800000;
    }
    FUN_00a96030(0,uVar7);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar8 = FUN_00a94ce0(0);
    if (iVar8 != 0) {
      FUN_00824fd0(0x30007);
      return;
    }
  }
  return;
}

// 0082D460  FUN_0082d460  size=291  [between]
void __fastcall FUN_0082d460(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  
  if (param_1[0x187] == 0) {
    uVar2 = 0;
    iVar1 = FUN_00a8cab0();
    if (iVar1 == 0x50000) {
      uVar2 = 0x1b;
    }
    else if (iVar1 == 0x50001) {
      uVar2 = 0x1d;
    }
    else if (iVar1 == 0x50002) {
      uVar2 = 0x1c;
    }
    FUN_00aa4080(uVar2,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a8c760(0);
  if (iVar1 != 0) {
    FUN_008203d0(param_1[0x2a1] + 0x40,0x3e333333,0x3d8efa35);
  }
  iVar1 = FUN_00a94ce0(0);
  if ((iVar1 == 0) && (iVar1 = FUN_00a8c760(4), iVar1 == 0)) {
    return;
  }
  fVar3 = (float10)FUN_00a8ec30(param_1[0x2a1] + 0x40);
  fVar3 = (float10)FUN_00ddba30((float)((float10)(float)param_1[0x25] - fVar3));
  if (ABS(fVar3) < (float10)0.61086524) {
                    /* WARNING: Could not recover jumptable at 0x0082d581. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  FUN_00824fd0(0x10005);
  return;
}

// 0082D590  FUN_0082d590  size=769  [between]
void __fastcall FUN_0082d590(int *param_1)

{
  code *pcVar1;
  bool bVar2;
  float *pfVar3;
  int iVar4;
  undefined1 local_30 [12];
  undefined1 auStack_24 [32];
  
  bVar2 = true;
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x20,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x51c] = 0;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      FUN_00aa4080(0x21,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      pcVar1 = *(code **)(*param_1 + 0x1d4);
      param_1[0x22a] = (int)((float)param_1[0x52b] * 1.8);
      param_1[0x225] = (int)((float)param_1[0x52b] * 1.8 * 16.0);
      (*pcVar1)(1);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
    }
    (**(code **)(*param_1 + 0x220))(0x40a00000);
    return;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      FUN_00aa4080(0x22,0,0x3d888889,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
    }
    pfVar3 = (float *)FUN_00a8b8a0(local_30,(float)param_1[0x244] * 0.2);
    param_1[0x14] = (int)((float)param_1[0x14] + *pfVar3);
    param_1[0x15] = (int)(pfVar3[1] + (float)param_1[0x15]);
    param_1[0x16] = (int)(pfVar3[2] + (float)param_1[0x16]);
    param_1[0x17] = (int)(pfVar3[3] + (float)param_1[0x17]);
    (**(code **)(*param_1 + 0x220))(0x40a00000);
    return;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar4 != 0) {
      FUN_00aa4080(0x23,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      (**(code **)(*param_1 + 0x1d4))(0);
      param_1[0x187] = param_1[0x187] + 1;
    }
    pfVar3 = (float *)FUN_00a8b8a0(auStack_24,(float)param_1[0x244] * 0.2);
    param_1[0x14] = (int)((float)param_1[0x14] + *pfVar3);
    param_1[0x15] = (int)(pfVar3[1] + (float)param_1[0x15]);
    param_1[0x16] = (int)(pfVar3[2] + (float)param_1[0x16]);
    param_1[0x17] = (int)(pfVar3[3] + (float)param_1[0x17]);
    return;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (((param_1[0x128] != 0) || ((*(byte *)(param_1 + 0x2c0) & 2) == 0)) ||
       (iVar4 = FUN_00a8c760(4), iVar4 == 0)) {
      bVar2 = false;
    }
    iVar4 = FUN_00a94ce0(0);
    if ((iVar4 != 0) || (bVar2)) {
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 0082D8B0  FUN_0082d8b0  size=168  [between]
void __fastcall FUN_0082d8b0(int param_1)

{
  float fVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    *(undefined4 *)(param_1 + 0x61c) = 1;
    *(undefined4 *)(param_1 + 0x920) = 0x40000000;
    *(undefined4 *)(param_1 + 0x924) = 0x42700000;
  }
  else if (*(int *)(param_1 + 0x61c) == 1) {
    if ((*(int *)(param_1 + 0x6bc) == 0) &&
       (fVar1 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910) * 0.016666668,
       *(float *)(param_1 + 0x920) = fVar1, fVar1 < 0.0)) {
      *(undefined4 *)(param_1 + 0x6bc) = 1;
    }
    fVar1 = *(float *)(param_1 + 0x924) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x924) = fVar1;
    if (fVar1 < 0.0 != (fVar1 == 0.0)) {
      iVar2 = thunk_FUN_00e58ed0(*(undefined4 *)(param_1 + 0x1a8c));
      if (iVar2 == 0) {
        FUN_00a805f0();
        return;
      }
    }
  }
  return;
}

// 0082D960  FUN_0082d960  size=412  [between]
void __fastcall FUN_0082d960(int *param_1)

{
  code *pcVar1;
  int iVar2;
  float10 fVar3;
  
  iVar2 = param_1[0x187];
  if (iVar2 == 0) {
    fVar3 = (float10)FUN_00dde300(0,0x3f800000);
    pcVar1 = *(code **)(*param_1 + 0x314);
    param_1[0x139] = 0;
    param_1[0x248] = (int)(float)(fVar3 * (float10)5.0 * (float10)60.0 + (float10)1200.0);
    (*pcVar1)();
    iVar2 = param_1[0x1d9];
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x104) != 0)) {
      *(undefined4 *)(iVar2 + 0x104) = 0;
    }
    (**(code **)(*param_1 + 0x1d4))(0);
    if (param_1[0x186] == 0x60004) {
      FUN_00aa4080(0xac,0,0x3e99999a,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x187] = 2;
      return;
    }
    FUN_00aa4080(0xab,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (iVar2 != 1) {
    if (iVar2 != 2) {
      return;
    }
    *(undefined2 *)(param_1 + 0x209) = 3;
    param_1[0x20a] = 0x78;
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00828c20();
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    FUN_00aa4080(0xac,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  return;
}

// 0082DB00  FUN_0082db00  size=236  [between]
void __fastcall FUN_0082db00(int param_1)

{
  float fVar1;
  uint uVar2;
  float10 fVar3;
  
  fVar3 = (float10)FUN_00a8ec30(*(int *)(param_1 + 0xa84) + 0x40);
  fVar3 = (float10)FUN_00ddba30((float)((float10)*(float *)(param_1 + 0x94) - fVar3));
  if ((float10)0.7853982 <= ABS(fVar3)) {
    if (*(int *)(param_1 + 0x1848) < 4) {
      FUN_00824fd0(0x10005);
      return;
    }
    FUN_00824fd0(0x50000);
    return;
  }
  if (*(float *)(param_1 + 0xa90) <= 8.0) {
    FUN_00824fd0(0x90000);
  }
  fVar1 = *(float *)(param_1 + 0xa90);
  if (!NAN(fVar1) && 625.0 < fVar1 != (fVar1 == 625.0)) {
    if (*(int *)(param_1 + 0x1350) != 0) {
      FUN_00824fd0(0x90004);
      return;
    }
    FUN_00824fd0(0x90003);
    return;
  }
  if (*(float *)(param_1 + 0xa90) <= 12.5) {
    uVar2 = FUN_00dde2d0(1,99);
    if ((uVar2 & 1) == 0) {
      FUN_00824fd0(0x90001);
      return;
    }
  }
  FUN_00824fd0(0x90002);
  return;
}

// 0082DBF0  FUN_0082dbf0  size=233  [between]
void __fastcall FUN_0082dbf0(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(5,0,0x3ecccccd,0x3f800000,0,0xbf800000,0x3f800000);
    uVar1 = *(uint *)(param_1 + 0x1454);
    *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x1838) * 60.0;
    if ((uVar1 & 0xffff0000) == 0x30000) {
      *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x183c) * 60.0;
    }
    if ((*(uint *)(param_1 + 0xe90) & 0x4000000) != 0) {
      *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x183c) * 60.0 * 3.0;
    }
    if (((int)uVar1 < 0x10004) || ((0x10006 < (int)uVar1 && (uVar1 != 0x1000a)))) {
      *(undefined4 *)(param_1 + 0x1848) = 0;
    }
    else {
      *(int *)(param_1 + 0x1848) = *(int *)(param_1 + 0x1848) + 1;
    }
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0082DCE0  FUN_0082dce0  size=415  [between]
void __fastcall FUN_0082dce0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(7,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 1:
    break;
  case 2:
    FUN_008203d0(param_1[0x2a1] + 0x40,0x3e19999a,0x3d0efa35);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if ((64.0 < (float)param_1[0x2a4]) && (param_1[0x666] == 0)) {
      return;
    }
    uVar4 = 0x8000000;
    uVar3 = 0x3e4ccccd;
    uVar2 = 8;
    goto LAB_0082dda4;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0082de7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  default:
    goto switchD_0082dcf4_default;
  }
  FUN_008203d0(param_1[0x2a1] + 0x40,0x3e19999a,0x3d0efa35);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    uVar4 = 0;
    uVar3 = 0;
    uVar2 = 6;
LAB_0082dda4:
    FUN_00aa4080(uVar2,0,uVar3,0x3f800000,uVar4,0xbf800000,0x3f800000);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
switchD_0082dcf4_default:
  return;
}

// 0082DE90  FUN_0082de90  size=572  [between]
void __fastcall FUN_0082de90(int *param_1)

{
  int iVar1;
  float10 fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  switch(param_1[0x187]) {
  case 0:
    if ((param_1[0x515] == 0x10006) || (param_1[0x515] == 0x10007)) {
      FUN_00aa4080(10,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x187] = 2;
      return;
    }
    FUN_00aa4080(0xb,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 1:
    break;
  case 2:
    FUN_008203d0(param_1[0x2a1] + 0x40,0x3e4ccccd,0x3db2b8c2);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
    iVar1 = FUN_00824150();
    if (iVar1 != 0) {
      FUN_00824fd0(0x10007);
      return;
    }
    if (((100.0 < (float)param_1[0x2a4]) ||
        (fVar2 = (float10)FUN_008205f0(),
        fVar2 < (float10)1.0471976 == (fVar2 == (float10)1.0471976))) && (param_1[0x666] == 0)) {
      return;
    }
    uVar5 = 0x8000000;
    uVar4 = 0x3e4ccccd;
    uVar3 = 0xc;
    goto LAB_0082dfb6;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0082e0c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  default:
    goto switchD_0082dea4_default;
  }
  FUN_008203d0(param_1[0x2a1] + 0x40,0x3e4ccccd,0x3db2b8c2);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 10;
LAB_0082dfb6:
    FUN_00aa4080(uVar3,0,uVar4,0x3f800000,uVar5,0xbf800000,0x3f800000);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
switchD_0082dea4_default:
  return;
}

// 0082E0E0  FUN_0082e0e0  size=401  [between]
void __fastcall FUN_0082e0e0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    iVar2 = *(int *)(param_1 + 0xa84);
    puVar1 = (undefined4 *)(param_1 + 0x960);
    *puVar1 = *(undefined4 *)(iVar2 + 0x40);
    *(undefined4 *)(param_1 + 0x964) = *(undefined4 *)(iVar2 + 0x44);
    *(undefined4 *)(param_1 + 0x968) = *(undefined4 *)(iVar2 + 0x48);
    *(undefined4 *)(param_1 + 0x96c) = *(undefined4 *)(iVar2 + 0x4c);
    if (*(int *)(param_1 + 0x1454) == 0x20003) {
      *puVar1 = *(undefined4 *)(param_1 + 0x1400);
      *(undefined4 *)(param_1 + 0x964) = *(undefined4 *)(param_1 + 0x1404);
      *(undefined4 *)(param_1 + 0x968) = *(undefined4 *)(param_1 + 0x1408);
      *(undefined4 *)(param_1 + 0x96c) = *(undefined4 *)(param_1 + 0x140c);
    }
    iVar2 = FUN_00820690(puVar1,param_1 + 0x920);
    FUN_00aa4080(*(undefined4 *)(&DAT_016488cc + iVar2 * 4),0,0x3e4ccccd,0x3f800000,0x8000000,
                 0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  iVar2 = FUN_00a8c760(0);
  if (iVar2 != 0) {
    FUN_008203d0(*(int *)(param_1 + 0xa84) + 0x40,0x3e19999a,0x3d0efa35);
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if ((iVar2 == 0) && (iVar2 = FUN_00a8c760(4), iVar2 == 0)) {
    return;
  }
  if ((*(int *)(param_1 + 0x1454) != 0x20004) || (30.25 < *(float *)(param_1 + 0xa90))) {
    FUN_00824fd0(*(int *)(param_1 + 0x1454));
    return;
  }
  if ((((*(int *)(param_1 + 0x4a0) == 0) && ((*(byte *)(param_1 + 0xb00) & 2) != 0)) ||
      (iVar2 = FUN_00a90070(5), iVar2 != 0)) && (uVar3 = FUN_00dde2d0(0,100), (uVar3 & 1) != 0)) {
    FUN_00824fd0(0x20007);
    return;
  }
  FUN_00824fd0(0x50000);
  return;
}

// 0082E280  FUN_0082e280  size=623  [between]
void __fastcall FUN_0082e280(int *param_1)

{
  float fVar1;
  code *pcVar2;
  float *pfVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 local_30 [16];
  undefined1 auStack_20 [28];
  
  switch(param_1[0x187]) {
  case 0:
    (**(code **)(*param_1 + 0x314))();
    iVar4 = param_1[0x1d9];
    if ((iVar4 != 0) && (*(int *)(iVar4 + 0x104) != 0)) {
      *(undefined4 *)(iVar4 + 0x104) = 0;
    }
    FUN_00aa4080(0x21,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    pcVar2 = *(code **)(*param_1 + 0x1d4);
    param_1[0x22a] = (int)((float)param_1[0x52b] * 1.8);
    param_1[0x225] = (int)((float)param_1[0x52b] * 1.8 * 16.0);
    (*pcVar2)(1);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    return;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      FUN_00aa4080(0x22,0,0x3d888889,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
    }
    fVar1 = (float)param_1[0x244];
    puVar5 = local_30;
    break;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar4 != 0) {
      FUN_00aa4080(0x23,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x3a4] = param_1[0x3a4] & 0xfffffffb;
      (**(code **)(*param_1 + 0x1d4))(0);
      param_1[0x187] = param_1[0x187] + 1;
    }
    fVar1 = (float)param_1[0x244];
    puVar5 = auStack_20;
    break;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (((iVar4 != 0) || (iVar4 = FUN_00a8c760(4), iVar4 != 0)) &&
       (iVar4 = param_1[0x515], FUN_00824fd0(iVar4), iVar4 == 0xf0000)) {
      param_1[0x3a4] = param_1[0x3a4] | 4;
    }
  default:
    return;
  }
  pfVar3 = (float *)FUN_00a8b8a0(puVar5,fVar1 * 0.2);
  param_1[0x14] = (int)(*pfVar3 + (float)param_1[0x14]);
  param_1[0x15] = (int)(pfVar3[1] + (float)param_1[0x15]);
  param_1[0x16] = (int)(pfVar3[2] + (float)param_1[0x16]);
  param_1[0x17] = (int)(pfVar3[3] + (float)param_1[0x17]);
  return;
}

// 0082E500  FUN_0082e500  size=169  [between]
void __fastcall FUN_0082e500(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x61c);
  if (iVar1 == 0) {
    FUN_00aa4080(5,0,0,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x920) = 0x41200000;
  }
  else if (iVar1 != 1) {
    if (iVar1 != 2) {
      return;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 == 0) {
      return;
    }
    FUN_00824fd0(0x1000c);
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  return;
}

// 0082E5B0  FUN_0082e5b0  size=1588  [between]
void __fastcall FUN_0082e5b0(int *param_1)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  undefined4 uVar8;
  float local_18;
  float local_14;
  float local_10;
  float local_c [2];
  float local_4;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x20,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_008e59c0(2);
    param_1[0x3a4] = param_1[0x3a4] | 4;
    (**(code **)(*param_1 + 0x318))();
    iVar5 = param_1[0x1d9];
    if ((iVar5 != 0) && (*(int *)(iVar5 + 0x104) != 1)) {
      *(undefined4 *)(iVar5 + 0x104) = 1;
      *(undefined4 *)(*(int *)(iVar5 + 0xd0) + 4) = 0;
    }
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      FUN_00aa4080(0x21,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00a96030(0,0x3f99999a);
      FUN_00a581b0(&local_18,0,0);
      param_1[600] = (int)((float)param_1[0x14] - local_18);
      param_1[0x259] = (int)((float)param_1[0x15] - local_14);
      param_1[0x25a] = (int)((float)param_1[0x16] - local_10);
      param_1[0x249] = 0;
      FUN_00a92f90();
      iVar5 = FUN_00e26e90();
      if (iVar5 != 0) {
        fVar7 = (float10)FUN_00e36a50(0);
        param_1[0x24a] = (int)(float)fVar7;
        param_1[0x187] = param_1[0x187] + 1;
        return;
      }
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x24a] = -0x40800000;
      return;
    }
    break;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    uVar8 = 0;
    FUN_00a92f90(0);
    fVar6 = (float10)FUN_00407b40(uVar8);
    fVar6 = fVar6 / (float10)(float)param_1[0x24a];
    param_1[0x249] = (int)(float)fVar6;
    fVar7 = (float10)1;
    if (fVar7 < fVar6 != (fVar7 == fVar6)) {
      param_1[0x249] = (int)(float)fVar7;
    }
    FUN_00a581b0(&local_18,0,(float)param_1[0x249] * 0.5);
    FUN_00a585a0(local_c,0,(float)param_1[0x249] * 0.5);
    fVar1 = (float)param_1[0x25];
    fVar7 = (float10)fpatan((float10)local_c[0],(float10)local_4);
    fVar7 = (float10)FUN_00ddba30((float)(fVar7 - (float10)fVar1));
    fVar7 = (float10)FUN_00ddba30((float)(fVar7 * (float10)0.25 + (float10)fVar1));
    param_1[0x25] = (int)(float)fVar7;
    param_1[0x14] = (int)((float)param_1[600] + local_18);
    param_1[0x15] = (int)((float)param_1[0x259] + local_14);
    param_1[0x16] = (int)((float)param_1[0x25a] + local_10);
    fVar7 = (float10)FUN_00fdc1f0();
    param_1[600] = (int)(float)((float10)(float)param_1[600] * fVar7);
    param_1[0x259] = (int)(float)(fVar7 * (float10)(float)param_1[0x259]);
    param_1[0x25a] = (int)(float)(fVar7 * (float10)(float)param_1[0x25a]);
    param_1[0x25b] = (int)(float)(fVar7 * (float10)(float)param_1[0x25b]);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      FUN_00aa4080(0x22,0,0x3d888889,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00a96030(0,0x3f800000);
      param_1[0x24a] = (int)((float)param_1[0x24a] * 0.8);
      param_1[0x24b] = 0;
      param_1[0x24c] = 0x3c888889;
      param_1[600] = 0;
      param_1[0x259] = 0;
      param_1[0x25a] = 0;
      param_1[0x25b] = 0;
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 3:
    param_1[0x24b] = (int)((float)param_1[0x244] * (float)param_1[0x24c] + (float)param_1[0x24b]);
    fVar7 = (float10)FUN_00fdc1f0();
    param_1[0x24c] = (int)(float)(fVar7 * (float10)(float)param_1[0x24c]);
    fVar1 = (float)param_1[0x24b] / (float)param_1[0x24a];
    bVar3 = NAN(fVar1);
    bVar4 = 1.0 < fVar1 != (fVar1 == 1.0);
    if (!bVar3 && bVar4) {
      fVar1 = 1.0;
    }
    fVar1 = (fVar1 + 1.0) * 0.5;
    FUN_00a581b0(&local_18,0,fVar1);
    FUN_00a585a0(local_c,0,fVar1);
    fVar1 = (float)param_1[0x25];
    fVar7 = (float10)fpatan((float10)local_c[0],(float10)local_4);
    fVar7 = (float10)FUN_00ddba30((float)(fVar7 - (float10)fVar1));
    fVar7 = (float10)FUN_00ddba30((float)(fVar7 * (float10)0.25 + (float10)fVar1));
    param_1[0x25] = (int)(float)fVar7;
    fVar1 = (float)param_1[0x15];
    pcVar2 = *(code **)(*param_1 + 800);
    param_1[0x14] = (int)local_18;
    param_1[0x15] = (int)local_14;
    param_1[0x16] = (int)local_10;
    param_1[0x225] = (int)-(fVar1 - local_14);
    iVar5 = (*pcVar2)(0x3d888889);
    if (iVar5 == 0) {
      if (!bVar3 && bVar4) {
        pcVar2 = *(code **)(*param_1 + 0x314);
        param_1[0x187] = param_1[0x187] + 1;
        (*pcVar2)();
        iVar5 = param_1[0x1d9];
        if ((iVar5 != 0) && (*(int *)(iVar5 + 0x104) != 0)) {
          *(undefined4 *)(iVar5 + 0x104) = 0;
          return;
        }
      }
    }
    else {
      FUN_00aa4080(0x23,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      pcVar2 = *(code **)(*param_1 + 0x314);
      param_1[0x187] = 5;
      (*pcVar2)();
      iVar5 = param_1[0x1d9];
      if ((iVar5 != 0) && (*(int *)(iVar5 + 0x104) != 0)) {
        *(undefined4 *)(iVar5 + 0x104) = 0;
        return;
      }
    }
    break;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar5 != 0) {
      FUN_00aa4080(0x23,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      FUN_008e5ac0(2);
                    /* WARNING: Could not recover jumptable at 0x0082ebda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 0082EC00  FUN_0082ec00  size=39  [between]
void __fastcall FUN_0082ec00(int param_1)

{
  if ((*(int *)(param_1 + 0x61c) == 2) && (15.0 < *(float *)(param_1 + 0x19c0))) {
    FUN_00824fd0(0x10003);
  }
  return;
}

// 0082EC30  FUN_0082ec30  size=115  [between]
void __fastcall FUN_0082ec30(int *param_1)

{
  if (param_1[0x187] == 0) {
    FUN_00aa4080(5,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  if ((param_1[0x3a4] & 0x40000000U) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0082eca1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 0082ECB0  FUN_0082ecb0  size=253  [between]
void __fastcall FUN_0082ecb0(int *param_1)

{
  int iVar1;
  float10 fVar2;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x1b,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a8c760(0);
  if (iVar1 != 0) {
    FUN_008203d0(param_1[0x2a1] + 0x40,0x3e333333,0x3d8efa35);
  }
  iVar1 = FUN_00a94ce0(0);
  if ((iVar1 == 0) && (iVar1 = FUN_00a8c760(4), iVar1 == 0)) {
    return;
  }
  fVar2 = (float10)FUN_00a8ec30(param_1[0x2a1] + 0x40);
  fVar2 = (float10)FUN_00ddba30((float)((float10)(float)param_1[0x25] - fVar2));
  if ((float10)0.61086524 <= ABS(fVar2)) {
    FUN_00824fd0(0x10005);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0082edab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 0082EDB0  FUN_0082edb0  size=297  [between]
void __fastcall FUN_0082edb0(int *param_1)

{
  uint uVar1;
  int iVar2;
  float10 fVar3;
  undefined4 uVar4;
  
  if (param_1[0x187] != 0) {
    if (param_1[0x187] != 1) {
      return;
    }
    goto LAB_0082ee27;
  }
  uVar1 = FUN_00dde2d0(1,100);
  if ((uVar1 & 1) == 0) {
    if (param_1[0x4b0] == 0) goto LAB_0082ee1a;
    uVar4 = 0x1c;
  }
  else if (param_1[0x4bc] == 0) {
    uVar4 = 0x1c;
  }
  else {
LAB_0082ee1a:
    uVar4 = 0x1d;
  }
  FUN_00aa4080(uVar4,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  param_1[0x187] = param_1[0x187] + 1;
LAB_0082ee27:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a8c760(0);
  if (iVar2 != 0) {
    FUN_008203d0(param_1[0x2a1] + 0x40,0x3e333333,0x3d8efa35);
  }
  iVar2 = FUN_00a94ce0(0);
  if ((iVar2 == 0) && (iVar2 = FUN_00a8c760(4), iVar2 == 0)) {
    return;
  }
  fVar3 = (float10)FUN_00a8ec30(param_1[0x2a1] + 0x40);
  fVar3 = (float10)FUN_00ddba30((float)((float10)(float)param_1[0x25] - fVar3));
  if (ABS(fVar3) < (float10)0.61086524) {
                    /* WARNING: Could not recover jumptable at 0x0082eed7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  FUN_00824fd0(0x10005);
  return;
}

// 0082EEE0  FUN_0082eee0  size=460  [between]
void __fastcall FUN_0082eee0(int *param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(7,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x42f00000;
    break;
  case 1:
    break;
  case 2:
    FUN_008203d0(param_1[0x2a1] + 0x40,0x3e19999a,0x3d0efa35);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (((100.0 < (float)param_1[0x2a4]) && (param_1[0x666] == 0)) &&
       (0.0 < fVar1 - (float)param_1[0x244])) {
      return;
    }
    uVar5 = 0x8000000;
    uVar4 = 0x3e4ccccd;
    uVar3 = 8;
    goto LAB_0082efb0;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0082f0a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  default:
    goto switchD_0082eef4_default;
  }
  FUN_008203d0(param_1[0x2a1] + 0x40,0x3e19999a,0x3d0efa35);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 6;
LAB_0082efb0:
    FUN_00aa4080(uVar3,0,uVar4,0x3f800000,uVar5,0xbf800000,0x3f800000);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
switchD_0082eef4_default:
  return;
}

// 0082F0C0  FUN_0082f0c0  size=579  [between]
void __fastcall FUN_0082f0c0(int *param_1)

{
  int iVar1;
  float10 fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  switch(param_1[0x187]) {
  case 0:
    iVar1 = param_1[0x515];
    if (((iVar1 == 0x10006) || (iVar1 == 0x10007)) || (iVar1 == 0x90004)) {
      FUN_00aa4080(10,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x187] = 2;
      return;
    }
    FUN_00aa4080(0xb,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 1:
    break;
  case 2:
    FUN_008203d0(param_1[0x2a1] + 0x40,0x3e4ccccd,0x3db2b8c2);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
    iVar1 = FUN_00824150();
    if (iVar1 != 0) {
      FUN_00824fd0(0x10007);
      return;
    }
    if (((144.0 < (float)param_1[0x2a4]) ||
        (fVar2 = (float10)FUN_008205f0(),
        fVar2 < (float10)1.0471976 == (fVar2 == (float10)1.0471976))) && (param_1[0x666] == 0)) {
      return;
    }
    uVar5 = 0x8000000;
    uVar4 = 0x3e4ccccd;
    uVar3 = 0xc;
    goto LAB_0082f1ed;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0082f2ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  default:
    goto switchD_0082f0d4_default;
  }
  FUN_008203d0(param_1[0x2a1] + 0x40,0x3e4ccccd,0x3db2b8c2);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 10;
LAB_0082f1ed:
    FUN_00aa4080(uVar3,0,uVar4,0x3f800000,uVar5,0xbf800000,0x3f800000);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
switchD_0082f0d4_default:
  return;
}

// 0082F320  FUN_0082f320  size=1701  [between]
void __fastcall FUN_0082f320(int *param_1)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  undefined4 uVar8;
  float local_18;
  float local_14;
  float local_10;
  float local_c [2];
  float local_4;
  
  iVar5 = param_1[0x6af];
  switch(param_1[0x187]) {
  case 0:
    if (param_1[0x1d9] != 0) {
      FUN_008e59c0(2);
    }
    if (iVar5 != 0) {
      FUN_00aa4080(5,0,0,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x187] = 2;
      return;
    }
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00aa4080(0x20,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_008e59c0(2);
    param_1[0x3a4] = param_1[0x3a4] | 4;
    (**(code **)(*param_1 + 0x318))();
    iVar5 = param_1[0x1d9];
    if ((iVar5 != 0) && (*(int *)(iVar5 + 0x104) != 1)) {
      *(undefined4 *)(iVar5 + 0x104) = 1;
      *(undefined4 *)(*(int *)(iVar5 + 0xd0) + 4) = 0;
    }
    param_1[0x187] = 3;
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (iVar5 == 0) {
      param_1[0x187] = 1;
      return;
    }
    break;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      FUN_00aa4080(0x21,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00a96030(0,0x3f99999a);
      FUN_00a581b0(&local_18,0,0);
      uVar8 = 0;
      param_1[600] = (int)((float)param_1[0x14] - local_18);
      param_1[0x259] = (int)((float)param_1[0x15] - local_14);
      param_1[0x25a] = (int)((float)param_1[0x16] - local_10);
      param_1[0x249] = 0;
      FUN_00a92f90(0);
      fVar7 = (float10)FUN_0043f390(uVar8);
      param_1[0x24a] = (int)(float)fVar7;
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    uVar8 = 0;
    FUN_00a92f90(0);
    fVar6 = (float10)FUN_00407b40(uVar8);
    fVar6 = fVar6 / (float10)(float)param_1[0x24a];
    param_1[0x249] = (int)(float)fVar6;
    fVar7 = (float10)1;
    if (fVar7 < fVar6 != (fVar7 == fVar6)) {
      param_1[0x249] = (int)(float)fVar7;
    }
    FUN_00a581b0(&local_18,0,(float)param_1[0x249] * 0.5);
    FUN_00a585a0(local_c,0,(float)param_1[0x249] * 0.5);
    fVar1 = (float)param_1[0x25];
    fVar7 = (float10)fpatan((float10)local_c[0],(float10)local_4);
    fVar7 = (float10)FUN_00ddba30((float)(fVar7 - (float10)fVar1));
    fVar7 = (float10)FUN_00ddba30((float)(fVar7 * (float10)0.25 + (float10)fVar1));
    param_1[0x25] = (int)(float)fVar7;
    param_1[0x14] = (int)(local_18 + (float)param_1[600]);
    param_1[0x15] = (int)((float)param_1[0x259] + local_14);
    param_1[0x16] = (int)((float)param_1[0x25a] + local_10);
    fVar7 = (float10)FUN_00fdc1f0();
    param_1[600] = (int)(float)(fVar7 * (float10)(float)param_1[600]);
    param_1[0x259] = (int)(float)((float10)(float)param_1[0x259] * fVar7);
    param_1[0x25a] = (int)(float)(fVar7 * (float10)(float)param_1[0x25a]);
    param_1[0x25b] = (int)(float)(fVar7 * (float10)(float)param_1[0x25b]);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      FUN_00aa4080(0x22,0,0x3d888889,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00a96030(0,0x3f800000);
      param_1[0x24a] = (int)((float)param_1[0x24a] * 0.8);
      param_1[0x24b] = 0;
      param_1[0x24c] = 0x3c888889;
      param_1[600] = 0;
      param_1[0x259] = 0;
      param_1[0x25a] = 0;
      param_1[0x25b] = 0;
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 5:
    param_1[0x24b] = (int)((float)param_1[0x244] * (float)param_1[0x24c] + (float)param_1[0x24b]);
    fVar7 = (float10)FUN_00fdc1f0();
    param_1[0x24c] = (int)(float)(fVar7 * (float10)(float)param_1[0x24c]);
    fVar1 = (float)param_1[0x24b] / (float)param_1[0x24a];
    bVar3 = NAN(fVar1);
    bVar4 = 1.0 < fVar1 != (fVar1 == 1.0);
    if (!bVar3 && bVar4) {
      fVar1 = 1.0;
    }
    fVar1 = (fVar1 + 1.0) * 0.5;
    FUN_00a581b0(&local_18,0,fVar1);
    FUN_00a585a0(local_c,0,fVar1);
    fVar1 = (float)param_1[0x25];
    fVar7 = (float10)fpatan((float10)local_c[0],(float10)local_4);
    fVar7 = (float10)FUN_00ddba30((float)(fVar7 - (float10)fVar1));
    fVar7 = (float10)FUN_00ddba30((float)(fVar7 * (float10)0.25 + (float10)fVar1));
    param_1[0x25] = (int)(float)fVar7;
    fVar1 = (float)param_1[0x15];
    pcVar2 = *(code **)(*param_1 + 800);
    param_1[0x14] = (int)local_18;
    param_1[0x15] = (int)local_14;
    param_1[0x16] = (int)local_10;
    param_1[0x225] = (int)-(fVar1 - local_14);
    iVar5 = (*pcVar2)(0x3d888889);
    if (iVar5 == 0) {
      if (!bVar3 && bVar4) {
        pcVar2 = *(code **)(*param_1 + 0x314);
        param_1[0x187] = param_1[0x187] + 1;
        (*pcVar2)();
        iVar5 = param_1[0x1d9];
        if ((iVar5 != 0) && (*(int *)(iVar5 + 0x104) != 0)) {
          *(undefined4 *)(iVar5 + 0x104) = 0;
          return;
        }
      }
    }
    else {
      FUN_00aa4080(0x23,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      pcVar2 = *(code **)(*param_1 + 0x314);
      param_1[0x187] = 7;
      (*pcVar2)();
      iVar5 = param_1[0x1d9];
      if ((iVar5 != 0) && (*(int *)(iVar5 + 0x104) != 0)) {
        *(undefined4 *)(iVar5 + 0x104) = 0;
        return;
      }
    }
    break;
  case 6:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar5 != 0) {
      FUN_00aa4080(0x23,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 7:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      FUN_008e5ac0(2);
                    /* WARNING: Could not recover jumptable at 0x0082f9c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 0082F9F0  FUN_0082f9f0  size=537  [between]
void __fastcall FUN_0082f9f0(int *param_1)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  undefined4 uVar4;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined1 auStack_20 [28];
  
  iVar2 = FUN_00821c50();
  if ((iVar2 == 0) && (param_1[0x6a0] != 0)) {
    param_1[0x6a0] = 0;
    FUN_00a8c9b0(0,0x197,0,0);
  }
  iVar2 = FUN_00a8ef10();
  if ((((iVar2 == 0) && (param_1[0x139] == 0)) &&
      (iVar2 = (**(code **)(*param_1 + 0x1fc))(), iVar2 == 0)) && (param_1[0x6aa] == 0)) {
    fStack_30 = (float)param_1[0x65c] - (float)param_1[0x10];
    fStack_2c = (float)param_1[0x65d] - (float)param_1[0x11];
    fStack_28 = (float)param_1[0x65e] - (float)param_1[0x12];
    fStack_24 = (float)param_1[0x65f] - (float)param_1[0x13];
    fVar1 = fStack_28 * fStack_28 + fStack_30 * fStack_30 + fStack_2c * fStack_2c;
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      FUN_00ddf460(&fStack_30,&fStack_30);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      fStack_30 = 0.0;
      fStack_2c = 1.0;
      fStack_28 = 0.0;
    }
    pfVar3 = (float *)FUN_00a925a0(auStack_20);
    fVar1 = pfVar3[2] * fStack_28 + *pfVar3 * fStack_30 + pfVar3[1] * fStack_2c;
    if (ABS(fVar1) < 0.25) {
      pfVar3 = (float *)FUN_00a925a0(auStack_20);
      fVar1 = (float)param_1[0x65a] * pfVar3[2] +
              (float)param_1[0x658] * *pfVar3 + (float)param_1[0x659] * pfVar3[1];
    }
    iVar2 = (**(code **)(*param_1 + 0x1d8))();
    if (iVar2 == 0) {
      param_1[0x660] = (-(uint)(0.0 <= fVar1) & 0xfffffffd) + 0x9e;
      if ((param_1[0x3a4] & 0x80000U) == 0) {
        uVar4 = 0x80006;
      }
      else {
        uVar4 = 0x80000;
      }
    }
    else if ((param_1[0x3a4] & 0x80000U) == 0) {
      uVar4 = 0x30005;
    }
    else {
      uVar4 = 0x80003;
    }
    FUN_00824fd0(uVar4);
    param_1[0x3a4] = param_1[0x3a4] | 0x400000;
  }
  return;
}

// 0082FC10  FUN_0082fc10  size=475  [between]
bool __thiscall FUN_0082fc10(int *param_1,int *param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = (int *)0x0;
  iVar4 = -1;
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_00a7c8a0();
  }
  if (param_1[0x139] == 0) {
    if ((param_2[0x23] & 0x20000U) == 0) {
      uVar1 = param_2[0x24];
      if ((uVar1 & 0x800000) == 0) {
        if ((uVar1 & 0x1000000) == 0) {
          if ((((uVar1 & 0x10000000) == 0) && (*param_2 != 0x4b)) && (*param_2 != 0x4c)) {
            if ((uVar1 & 0x2000000) == 0) {
              iVar2 = FUN_00822b40();
              if (iVar2 == 0) {
                iVar2 = FUN_0082b160();
                if ((iVar2 == 0) && (*(byte *)((int)param_2 + 0x11) < 7)) {
                  iVar2 = (**(code **)(*param_1 + 0x1d8))();
                  if (iVar2 == 0) goto LAB_0082fd6a;
                }
              }
              if (((param_1[0x3a4] & 2U) == 0) && ((param_1[0x3a4] & 0x400U) == 0)) {
                iVar2 = (**(code **)(*param_1 + 0x1d8))();
                iVar4 = (-(uint)(iVar2 != 0) & 0xfffb0005) + 0x80000;
                iVar2 = (**(code **)(*param_1 + 0x1d8))();
                if ((iVar2 != 0) && (piVar3 != (int *)0x0)) {
                  iVar2 = (**(code **)(*piVar3 + 0x1d8))();
                  if (iVar2 == 0) {
                    iVar4 = 0x30001;
                  }
                }
              }
            }
            else {
              iVar4 = 0x30001;
            }
          }
          else {
            iVar4 = 0x3000e;
            param_1[0x6a6] = 0x3ecccccd;
            if ((*param_2 == 0x4b) || (*param_2 == 0x4c)) {
              param_1[0x6a6] = 0x3f19999a;
            }
          }
        }
        else {
          iVar4 = 0x30006;
        }
      }
      else {
        iVar4 = 0x30004;
      }
    }
    else {
      iVar4 = 0x3000c;
    }
  }
LAB_0082fd6a:
  iVar2 = FUN_00a8eea0();
  if ((iVar2 < 1) && (param_1[0x139] == 0)) {
    param_1[0x660] = 0x136;
    FUN_00824fd0(0x80002);
    return true;
  }
  if (iVar4 == -1) {
    FUN_0082af20();
    *param_3 = 0x400;
  }
  else {
    FUN_00824fd0(iVar4);
  }
  *param_3 = *param_3 | 1;
  (**(code **)(*param_1 + 0x220))(0x40a00000);
  return iVar4 != -1;
}

// 0082FDF0  Emc220::vf338  size=64  [class]
void __thiscall Emc220::vf338(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < param_4) {
    piVar1 = (int *)(param_3 + 0x18);
    do {
      if (*piVar1 == param_1[0x12d]) {
        iVar2 = iVar2 + 1;
      }
      piVar1 = piVar1 + 9;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
    if (iVar2 != 0) {
      return;
    }
  }
  (**(code **)(*param_1 + 0x364))(0xffffffff);
  return;
}

// 0082FE30  FUN_0082fe30  size=654  [callgraph]
void __fastcall FUN_0082fe30(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int aiStack_30 [2];
  undefined1 auStack_28 [4];
  undefined4 local_24 [4];
  undefined4 uStack_14;
  
  if (*(int *)(param_1 + 0x1994) == 0) {
    if ((*(byte *)(param_1 + 0xe98) & 4) == 0) {
      local_24[0] = 0;
      iVar1 = FUN_00a54ae0(local_24,param_1 + 0x494,"_col.hkx");
      if (iVar1 != 0) {
        iVar2 = FUN_00dd3500(0x3c,&DAT_01b7bd48);
        if (iVar2 == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = RigidBodyCollision::RigidBodyCollision();
        }
        *(undefined4 *)(param_1 + 0x7b0) = uVar3;
        iVar1 = FUN_008f6410(*(undefined4 *)(param_1 + 0x4f0),iVar1,local_24[0]);
        if (iVar1 != 0) {
          FUN_008f2cd0(0);
          (**(code **)(**(int **)(param_1 + 0x7b0) + 0x108))(0x1f);
          puVar4 = (undefined4 *)FUN_009f8b60();
          (**(code **)(**(int **)(param_1 + 0x7b0) + 0x114))(*puVar4);
          FUN_008f1600(0x80000000);
          FUN_008f1600(0x20);
          FUN_008f18c0(0x100);
        }
      }
      if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
        iVar1 = (**(code **)(**(int **)(param_1 + 0x7b0) + 0xc))();
        lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>_2(iVar1 + 2);
        iVar2 = 0;
        iVar1 = (**(code **)(**(int **)(param_1 + 0x7b0) + 0xc))();
        if (0 < iVar1) {
          do {
            (**(code **)(**(int **)(param_1 + 0x7b0) + 300))(auStack_28,iVar2);
            if ((aiStack_30[0] != 0) && (iVar1 = FUN_009124a0(), iVar1 != 0)) {
              uVar3 = FUN_009124a0(&DAT_01640b88);
              iVar1 = FUN_00fdbbd0(uVar3);
              if (iVar1 != 0) {
                uVar3 = FUN_00a8d2a0();
                Behavior::addDefenseCollisionFromRigidBody(aiStack_30,2,uVar3);
              }
            }
            iVar2 = iVar2 + 1;
            iVar1 = (**(code **)(**(int **)(param_1 + 0x7b0) + 0xc))();
          } while (iVar2 < iVar1);
        }
        lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_2(1);
        *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) & 0xff7fffff;
        FUN_00a93910(1);
      }
    }
    else {
      lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>_2(1);
    }
    uVar3 = FUN_00a8d2a0();
    puVar4 = (undefined4 *)FUN_009f8b60();
    iVar1 = CollisionCapsule::CollisionCapsule(2,*puVar4,0);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x380) = 0;
      FUN_00d77c50(*(undefined4 *)(param_1 + 0x4f0),0);
      *(undefined4 *)(iVar1 + 0x594) = 0x40166666;
      *(undefined4 *)(iVar1 + 0x590) = 0x3f400000;
      *(undefined4 *)(iVar1 + 0x570) = 0;
      *(undefined4 *)(iVar1 + 0x574) = 0xbec00000;
      *(undefined4 *)(iVar1 + 0x578) = 0;
      *(undefined4 *)(iVar1 + 0x57c) = uStack_14;
      *(undefined4 *)(iVar1 + 0x580) = 0x3fc90fdb;
      *(undefined4 *)(iVar1 + 0x584) = 0;
      *(undefined4 *)(iVar1 + 0x588) = 0;
      *(undefined4 *)(iVar1 + 0x58c) = uStack_14;
      FUN_00d771d0(1);
      FUN_00a93a00(iVar1,uVar3);
      FUN_00d7b0f0();
      FUN_00d7b890();
    }
    *(undefined4 *)(param_1 + 0x1994) = 1;
  }
  return;
}

// 008300D0  FUN_008300d0  size=347  [callgraph]
undefined4 FUN_008300d0(float *param_1,int param_2)

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
    if (*param_1 != 0.0) goto LAB_0083018c;
  }
  if ((param_1[1] == 0.0) && (param_1[2] == 0.0)) {
    return 0;
  }
LAB_0083018c:
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

// 00830230  FUN_00830230  size=117  [callgraph]
void __fastcall FUN_00830230(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = iVar2 * 5 + 0x3a7;
    if (*(int *)(param_1 + iVar1 * 4) == 0) {
      *(undefined4 *)(param_1 + iVar1 * 4) = 1;
      FUN_00821d10(iVar2);
      if (((iVar2 == 6) || (iVar2 == 5)) && ((*(uint *)(param_1 + 0xe90) & 0x800000) != 0)) {
        *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) & 0xff7fffff;
        FUN_00a93910(1);
      }
      if ((iVar2 == 4) && (*(int *)(param_1 + 0x19d4) != -1)) {
        FUN_00c52700(*(int *)(param_1 + 0x19d4),1);
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 8);
  return;
}

// 008302B0  FUN_008302b0  size=36  [callgraph]
undefined4 __fastcall FUN_008302b0(int param_1)

{
  int iVar1;
  
  if ((*(uint *)(param_1 + 0xe90) & 0x600000) == 0) {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

// 00830310  FUN_00830310  size=95  [callgraph]
void __fastcall FUN_00830310(int param_1)

{
  int iVar1;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  iVar1 = FUN_008300d0(&local_20,0);
  if (iVar1 != 0) {
    *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0x50) + local_20 * -0.1;
    *(float *)(param_1 + 0x54) = local_1c * -0.1 + *(float *)(param_1 + 0x54);
    *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x58) + local_18 * -0.1;
    *(float *)(param_1 + 0x5c) = local_14 * -0.1 + *(float *)(param_1 + 0x5c);
  }
  return;
}

// 00830370  FUN_00830370  size=467  [callgraph]
void __fastcall FUN_00830370(int param_1)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  
  if (((*(int *)(param_1 + 0x61c) == 0) || (0.0 < *(float *)(param_1 + 0x920))) ||
     (*(int *)(param_1 + 0x1998) != 0)) {
    return;
  }
  if (((*(float *)(param_1 + 0xa90) <= 225.0) && ((*(uint *)(param_1 + 0xe90) & 0x200000) == 0)) &&
     ((10.0 < *(float *)(param_1 + 0x19c0) &&
      ((fVar1 = *(float *)(param_1 + 0xa90), !NAN(fVar1) && 49.0 < fVar1 != (fVar1 == 49.0) &&
       (fVar3 = (float10)FUN_00dde300(0,0x3f800000),
       fVar3 < (float10)*(float *)(param_1 + 0x1618) !=
       (fVar3 == (float10)*(float *)(param_1 + 0x1618)))))))) {
    if (*(int *)(param_1 + 0x1458) == 0x70005) {
      *(int *)(param_1 + 0x1620) = *(int *)(param_1 + 0x1620) + 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x1620) = 0;
    }
    if (*(int *)(param_1 + 0x1620) < *(int *)(param_1 + 0x161c)) {
      FUN_00824fd0(0x70005);
      return;
    }
  }
  if (*(int *)(param_1 + 0x4a0) == 0) {
    fVar3 = (float10)FUN_008205f0();
    if (fVar3 <= (float10)1.0471976) {
      fVar1 = *(float *)(param_1 + 0xa90);
      if ((!NAN(fVar1) && 9.0 < fVar1 != (fVar1 == 9.0)) && (0 < *(int *)(param_1 + 0x1aa0)))
      goto LAB_00830497;
      fVar3 = (float10)FUN_008205f0();
      if (fVar3 <= (float10)0.6981317) {
        if (81.0 < *(float *)(param_1 + 0xa90)) {
          return;
        }
        iVar2 = FUN_008302b0();
        if (iVar2 == 0) {
          return;
        }
        FUN_00824fd0(0x70003);
        return;
      }
    }
  }
  else {
    fVar3 = (float10)FUN_008205f0();
    if (fVar3 <= (float10)1.0471976) {
      if ((*(float *)(param_1 + 0xa90) <= 20736.0) && (0 < *(int *)(param_1 + 0x1aa0))) {
        if (0.0 < *(float *)(param_1 + 0x1878)) {
          return;
        }
        iVar2 = FUN_008302b0();
        if (iVar2 == 0) {
          return;
        }
        FUN_00824fd0(0x70004);
        return;
      }
LAB_00830497:
      FUN_00824fd0(0x70001);
      return;
    }
  }
  FUN_00824fd0(0x70002);
  return;
}

// 00830550  FUN_00830550  size=243  [callgraph]
void __fastcall FUN_00830550(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar1 = 0;
    if ((*(uint *)(param_1 + 0xe90) & 0x100000) != 0) {
      uVar1 = 0x40;
    }
    FUN_00aa4080(0x12d,0,0x3e888889,0x3f800000,uVar1,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x920) = 0x42b40000;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  iVar2 = FUN_00ac89d0();
  if ((*(float *)(param_1 + 0x1990) <= 0.0) && ((*(uint *)(param_1 + 0xe90) & 0x80000) != 0)) {
    if ((*(uint *)(param_1 + 0xe90) & 0x600000) != 0) goto LAB_00830602;
    iVar3 = FUN_00a81330();
    if (iVar3 == 0) goto LAB_00830602;
  }
  if ((iVar2 == 0) || (*(int *)(iVar2 + 0x370) != 0)) {
    *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  }
LAB_00830602:
  *(undefined4 *)(param_1 + 0x1980) = 0x136;
  FUN_00824fd0(0x80002);
  return;
}

// 00830650  FUN_00830650  size=224  [callgraph]
void __fastcall FUN_00830650(int *param_1)

{
  float fVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  float10 fVar2;
  
  if (param_1[0x187] != 0) {
    if ((((float)param_1[0x2a4] <= 225.0) && ((param_1[0x3a4] & 0x200000U) == 0)) &&
       (fVar1 = (float)param_1[0x2a4], !NAN(fVar1) && 49.0 < fVar1 != (fVar1 == 49.0))) {
      fVar2 = (float10)FUN_00dde300(0,0x3f800000);
      if ((fVar2 < (float10)(float)param_1[0x586] != (fVar2 == (float10)(float)param_1[0x586])) &&
         (param_1[0x588] < param_1[0x587])) {
        (**(code **)(*param_1 + 0x34c))();
      }
    }
    if (param_1[0x128] == 0) {
      if ((float)param_1[0x2a4] <= 6.25) {
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_1 + 0x34c);
        param_1[0x588] = 0;
                    /* WARNING: Could not recover jumptable at 0x00830702. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)();
        return;
      }
    }
    else if ((float)param_1[0x2a4] <= 100.0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_1 + 0x34c);
      param_1[0x588] = 0;
                    /* WARNING: Could not recover jumptable at 0x0083072c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
  }
  return;
}

// 00830730  FUN_00830730  size=155  [callgraph]
void __fastcall FUN_00830730(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar1 = 0;
    if ((*(uint *)(param_1 + 0xe90) & 0x100000) != 0) {
      uVar1 = 0x40;
    }
    FUN_00aa4080(0x12e,0,0x3e888889,0x3f800000,uVar1,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_008203d0(*(int *)(param_1 + 0xa84) + 0x40,0x3da3d70a,0x3c8efa35);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 008307D0  FUN_008307d0  size=336  [callgraph]
void __fastcall FUN_008307d0(int *param_1)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  float10 fVar5;
  undefined *local_4;
  
  if (param_1[0x187] != 0) {
    if (param_1[0x187] != 1) {
      return;
    }
    goto LAB_00830897;
  }
  uVar4 = 0;
  local_4 = &DAT_016488ec;
  if ((param_1[0x3a4] & 0x100000U) != 0) {
    uVar4 = 0x40;
    local_4 = &DAT_016488dc;
  }
  pfVar1 = (float *)(param_1 + 0x248);
  iVar3 = FUN_00820690(param_1[0x2a1] + 0x40,pfVar1);
  if (iVar3 == 2) {
    fVar2 = *pfVar1 + 1.5707964;
LAB_00830845:
    fVar5 = (float10)FUN_00ddba30(fVar2);
    *pfVar1 = (float)fVar5;
  }
  else if (iVar3 == 3) {
    fVar2 = *pfVar1 - 1.5707964;
    goto LAB_00830845;
  }
  FUN_00aa4080(*(undefined4 *)(local_4 + iVar3 * 4),0,0x3e088889,0x3f800000,uVar4 | 0x8000000,
               0xbf800000,0x3f800000);
  param_1[0x187] = param_1[0x187] + 1;
LAB_00830897:
  iVar3 = FUN_00a8c760(0);
  if (iVar3 != 0) {
    fVar5 = (float10)FUN_00fdc1f0();
    fVar5 = ((float10)1 - fVar5) * (float10)(float)param_1[0x248];
    param_1[0x25] = (int)(float)((float10)(float)param_1[0x25] + fVar5);
    param_1[0x248] = (int)(float)((float10)(float)param_1[0x248] - fVar5);
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if ((iVar3 == 0) && (iVar3 = FUN_00a8c760(4), iVar3 == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0083091e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00830920  FUN_00830920  size=138  [callgraph]
void __fastcall FUN_00830920(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1[0x187] == 0) {
    uVar1 = 0;
    if ((param_1[0x3a4] & 0x100000U) != 0) {
      uVar1 = 0x40;
    }
    FUN_00aa4080(0x132,0,0x3e088889,0x3f800000,uVar1,0xbf800000,0x3f800000);
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
                    /* WARNING: Could not recover jumptable at 0x008309a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 008309B0  FUN_008309b0  size=141  [callgraph]
void __fastcall FUN_008309b0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1[0x187] == 0) {
    uVar1 = 0x8000000;
    if ((param_1[0x3a4] & 0x100000U) != 0) {
      uVar1 = 0x8000040;
    }
    FUN_00aa4080(0x140,0,0x3e088889,0x3f800000,uVar1,0xbf800000,0x3f800000);
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
                    /* WARNING: Could not recover jumptable at 0x00830a3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00830A40  FUN_00830a40  size=141  [callgraph]
void __fastcall FUN_00830a40(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1[0x187] == 0) {
    uVar1 = 0x8000000;
    if ((param_1[0x3a4] & 0x100000U) != 0) {
      uVar1 = 0x8000040;
    }
    FUN_00aa4080(0x131,0,0x3d888889,0x3f800000,uVar1,0xbf800000,0x3f800000);
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
                    /* WARNING: Could not recover jumptable at 0x00830acb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00830AD0  FUN_00830ad0  size=193  [callgraph]
void __fastcall FUN_00830ad0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1[0x187] == 0) {
    uVar1 = 0x8000000;
    if ((param_1[0x3a4] & 0x100000U) != 0) {
      uVar1 = 0x8000040;
    }
    FUN_00aa4080(param_1[0x660],0,0x3d888889,0x3f800000,uVar1,0xbf800000,0x3f800000);
    iVar2 = param_1[0x661];
    if (((iVar2 != 0x1e) && (iVar2 != 0x1d)) && (iVar2 != 0x17)) {
      param_1[0x3a4] = param_1[0x3a4] | 0x80000;
      param_1[0x36a] = -1;
      param_1[0x36c] = -1;
    }
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
                    /* WARNING: Could not recover jumptable at 0x00830b8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00830BA0  FUN_00830ba0  size=582  [callgraph]
void __fastcall FUN_00830ba0(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if ((param_1[0x3a4] & 0x100000U) != 0) {
    uVar2 = 0x40;
  }
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0xa7,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x22a] = param_1[0x52b];
    (**(code **)(*param_1 + 0x318))();
    iVar1 = param_1[0x1d9];
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x104) != 1)) {
      *(undefined4 *)(iVar1 + 0x104) = 1;
      *(undefined4 *)(*(int *)(iVar1 + 0xd0) + 4) = 0;
    }
    param_1[0x3a4] = param_1[0x3a4] | 0x80000;
    param_1[0x664] = 0x44160000;
    param_1[0x36a] = -1;
    param_1[0x36c] = -1;
    (**(code **)(*param_1 + 0x1d4))(1);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x314))();
      iVar1 = param_1[0x1d9];
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0x104) != 0)) {
        *(undefined4 *)(iVar1 + 0x104) = 0;
      }
      FUN_00aa4080(0xa5,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar1 != 0) {
      FUN_00aa4080(0xa6,0,0x3d088889,0x3f800000,uVar2 | 0x8000000,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x3a4] = param_1[0x3a4] & 0xefffffff;
      (**(code **)(*param_1 + 0x1d4))(0);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_00824fd0(0x30007);
      return;
    }
  }
  return;
}

// 00830E00  FUN_00830e00  size=114  [callgraph]
void __fastcall FUN_00830e00(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    iVar1 = param_1[0x661];
    if (((iVar1 != 0x1e) && (iVar1 != 0x1d)) && (iVar1 != 0x17)) {
      param_1[0x3a4] = param_1[0x3a4] | 0x80000;
      param_1[0x36a] = -1;
      param_1[0x36c] = -1;
    }
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
                    /* WARNING: Could not recover jumptable at 0x00830e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00830EF0  FUN_00830ef0  size=558  [callgraph]
void __thiscall
FUN_00830ef0(int param_1,short *param_2,undefined4 *param_3,undefined4 *param_4,undefined4 param_5,
            int param_6)

{
  undefined2 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  short *psVar7;
  int *piVar8;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined1 local_e4 [4];
  uint local_e0 [12];
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_34;
  undefined4 local_30;
  
  uVar2 = 0;
  psVar7 = (short *)(param_1 + 0x1710);
  while ((*(int *)(psVar7 + 8) != 0 || (*psVar7 != 0))) {
    uVar2 = uVar2 + 1;
    psVar7 = psVar7 + 10;
    if (10 < uVar2) {
      return;
    }
  }
  puVar1 = (undefined2 *)(param_1 + 0x1710 + uVar2 * 0x14);
  if ((puVar1 != (undefined2 *)0x0) && (param_2 != (short *)0x0)) {
    *(undefined4 *)(puVar1 + 2) = param_5;
    *puVar1 = 1;
    *(short **)(puVar1 + 6) = param_2;
    *(undefined4 *)(puVar1 + 4) = 0x3f800000;
    iVar3 = FUN_00a12210((int)*param_2);
    if (iVar3 != 0) {
      local_110 = *(undefined4 *)(iVar3 + 0x40);
      piVar8 = (int *)(puVar1 + 8);
      local_10c = *(undefined4 *)(iVar3 + 0x44);
      local_108 = *(undefined4 *)(iVar3 + 0x48);
      local_104 = *(undefined4 *)(iVar3 + 0x4c);
      local_100 = 0;
      local_fc = 0;
      local_f8 = 0;
      if (*piVar8 == 0) {
        FUN_0118f7b0();
        local_50 = 0x3f800000;
        uStack_a8 = param_3[2];
        local_4c = 0x3ecccccd;
        local_b0 = *param_3;
        local_48 = 0x3ecccccd;
        uStack_ac = param_3[1];
        local_40 = 0x3f4ccccd;
        local_34 = 0x41a00000;
        local_30 = 0x42f00000;
        uStack_98 = param_4[2];
        uStack_9c = param_4[1];
        uStack_a4 = 0x3f800000;
        local_a0 = *param_4;
        uStack_94 = 0x3f800000;
        iVar4 = FUN_009f8b40();
        local_e0[0] = iVar4 << 0x10 | 0xb;
        piVar5 = (int *)FUN_00910da0();
        uVar6 = (**(code **)(*piVar5 + 8))(local_e4,local_e0,&local_110,&local_100,0x3e4ccccd,1);
        FUN_00910ab0(uVar6);
        FUN_00917bd0(*piVar8,1);
        FUN_00917bd0(*piVar8,2);
        FUN_00917bd0(*piVar8,0x20);
        FUN_00917bd0(*piVar8,8);
      }
      else {
        FUN_00912060(&local_110);
        FUN_00912140(&local_100);
      }
      if ((*(int *)(param_1 + 0x195c) == 0) && (param_6 != 0)) {
        FUN_00e02630(*(undefined4 *)(param_1 + 0x4f0),0xd,iVar3 + 0x10);
        *(undefined4 *)(param_1 + 0x195c) = 1;
      }
      if (**(char **)(param_2 + 4) != '\0') {
        FUN_00ac94e0(*(char **)(param_2 + 4));
      }
    }
  }
  return;
}

// 00831120  FUN_00831120  size=703  [callgraph]
void __thiscall FUN_00831120(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined2 *puVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  short *psVar9;
  int *piVar10;
  bool bVar11;
  int local_120 [7];
  short *local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined1 local_e4 [4];
  uint local_e0 [12];
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_34;
  undefined4 local_30;
  
  uVar4 = *(uint *)(param_1 + 0x181c);
  local_120[1] = 0;
  local_120[2] = 0;
  local_120[3] = 0;
  bVar11 = (uVar4 & 1) == 0;
  local_120[0] = 0;
  uVar3 = (uint)bVar11;
  if ((uVar4 & 2) == 0) {
    local_120[(short)(ushort)bVar11] = 1;
    uVar3 = uVar3 + 1;
  }
  if ((uVar4 & 4) == 0) {
    local_120[(short)uVar3] = 2;
    uVar3 = uVar3 + 1;
  }
  if ((uVar4 & 8) == 0) {
    local_120[(short)uVar3] = 3;
    uVar3 = uVar3 + 1;
  }
  if ((short)uVar3 != 0) {
    sVar2 = FUN_00dde2d0(0,uVar3 - 1);
    iVar5 = local_120[sVar2];
    if (-1 < iVar5) {
      *(char *)(param_1 + 0x1818) = *(char *)(param_1 + 0x1818) + '\x01';
      local_104 = (short *)(&DAT_01648750 + iVar5 * 0xc);
      *(uint *)(param_1 + 0x181c) = *(uint *)(param_1 + 0x181c) | 1 << ((byte)iVar5 & 0x1f);
      uVar4 = 0;
      psVar9 = (short *)(param_1 + 0x1710);
      while ((*(int *)(psVar9 + 8) != 0 || (*psVar9 != 0))) {
        uVar4 = uVar4 + 1;
        psVar9 = psVar9 + 10;
        if (10 < uVar4) {
          return;
        }
      }
      puVar1 = (undefined2 *)(param_1 + 0x1710 + uVar4 * 0x14);
      if ((puVar1 != (undefined2 *)0x0) && (local_104 != (short *)0x0)) {
        *(undefined4 *)(puVar1 + 2) = param_4;
        *puVar1 = 1;
        *(short **)(puVar1 + 6) = local_104;
        *(undefined4 *)(puVar1 + 4) = 0x3f800000;
        iVar5 = FUN_00a12210((int)*local_104);
        if (iVar5 != 0) {
          local_120[0] = *(int *)(iVar5 + 0x40);
          piVar10 = (int *)(puVar1 + 8);
          local_120[1] = *(undefined4 *)(iVar5 + 0x44);
          local_120[2] = *(undefined4 *)(iVar5 + 0x48);
          local_120[3] = *(undefined4 *)(iVar5 + 0x4c);
          local_100 = 0;
          local_fc = 0;
          local_f8 = 0;
          if (*piVar10 == 0) {
            FUN_0118f7b0();
            local_50 = 0x3f800000;
            uStack_a8 = param_2[2];
            local_4c = 0x3ecccccd;
            local_b0 = *param_2;
            local_48 = 0x3ecccccd;
            uStack_ac = param_2[1];
            local_40 = 0x3f4ccccd;
            local_34 = 0x41a00000;
            local_30 = 0x42f00000;
            uStack_98 = param_3[2];
            uStack_9c = param_3[1];
            uStack_a4 = 0x3f800000;
            local_a0 = *param_3;
            uStack_94 = 0x3f800000;
            iVar6 = FUN_009f8b40();
            local_e0[0] = iVar6 << 0x10 | 0xb;
            piVar7 = (int *)FUN_00910da0();
            uVar8 = (**(code **)(*piVar7 + 8))(local_e4,local_e0,local_120,&local_100,0x3e4ccccd,1);
            FUN_00910ab0(uVar8);
            FUN_00917bd0(*piVar10,1);
            FUN_00917bd0(*piVar10,2);
            FUN_00917bd0(*piVar10,0x20);
            FUN_00917bd0(*piVar10,8);
          }
          else {
            FUN_00912060(local_120);
            FUN_00912140(&local_100);
          }
          if (*(int *)(param_1 + 0x195c) == 0) {
            FUN_00e02630(*(undefined4 *)(param_1 + 0x4f0),0xd,iVar5 + 0x10);
            *(undefined4 *)(param_1 + 0x195c) = 1;
          }
          if (**(char **)(local_104 + 4) != '\0') {
            FUN_00ac94e0(*(char **)(local_104 + 4));
          }
        }
      }
    }
  }
  return;
}

// 008313E0  FUN_008313e0  size=703  [callgraph]
void __thiscall FUN_008313e0(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined2 *puVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  short *psVar9;
  int *piVar10;
  bool bVar11;
  int local_120 [7];
  short *local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined1 local_e4 [4];
  uint local_e0 [12];
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_34;
  undefined4 local_30;
  
  uVar4 = *(uint *)(param_1 + 0x1820);
  local_120[1] = 0;
  local_120[2] = 0;
  local_120[3] = 0;
  bVar11 = (uVar4 & 1) == 0;
  local_120[0] = 0;
  uVar3 = (uint)bVar11;
  if ((uVar4 & 2) == 0) {
    local_120[(short)(ushort)bVar11] = 1;
    uVar3 = uVar3 + 1;
  }
  if ((uVar4 & 4) == 0) {
    local_120[(short)uVar3] = 2;
    uVar3 = uVar3 + 1;
  }
  if ((uVar4 & 8) == 0) {
    local_120[(short)uVar3] = 3;
    uVar3 = uVar3 + 1;
  }
  if ((short)uVar3 != 0) {
    sVar2 = FUN_00dde2d0(0,uVar3 - 1);
    iVar5 = local_120[sVar2];
    if (-1 < iVar5) {
      *(char *)(param_1 + 0x1819) = *(char *)(param_1 + 0x1819) + '\x01';
      local_104 = (short *)(&DAT_01648780 + iVar5 * 0xc);
      *(uint *)(param_1 + 0x1820) = *(uint *)(param_1 + 0x1820) | 1 << ((byte)iVar5 & 0x1f);
      uVar4 = 0;
      psVar9 = (short *)(param_1 + 0x1710);
      while ((*(int *)(psVar9 + 8) != 0 || (*psVar9 != 0))) {
        uVar4 = uVar4 + 1;
        psVar9 = psVar9 + 10;
        if (10 < uVar4) {
          return;
        }
      }
      puVar1 = (undefined2 *)(param_1 + 0x1710 + uVar4 * 0x14);
      if ((puVar1 != (undefined2 *)0x0) && (local_104 != (short *)0x0)) {
        *(undefined4 *)(puVar1 + 2) = param_4;
        *puVar1 = 1;
        *(short **)(puVar1 + 6) = local_104;
        *(undefined4 *)(puVar1 + 4) = 0x3f800000;
        iVar5 = FUN_00a12210((int)*local_104);
        if (iVar5 != 0) {
          local_120[0] = *(int *)(iVar5 + 0x40);
          piVar10 = (int *)(puVar1 + 8);
          local_120[1] = *(undefined4 *)(iVar5 + 0x44);
          local_120[2] = *(undefined4 *)(iVar5 + 0x48);
          local_120[3] = *(undefined4 *)(iVar5 + 0x4c);
          local_100 = 0;
          local_fc = 0;
          local_f8 = 0;
          if (*piVar10 == 0) {
            FUN_0118f7b0();
            local_50 = 0x3f800000;
            uStack_a8 = param_2[2];
            local_4c = 0x3ecccccd;
            local_b0 = *param_2;
            local_48 = 0x3ecccccd;
            uStack_ac = param_2[1];
            local_40 = 0x3f4ccccd;
            local_34 = 0x41a00000;
            local_30 = 0x42f00000;
            uStack_98 = param_3[2];
            uStack_9c = param_3[1];
            uStack_a4 = 0x3f800000;
            local_a0 = *param_3;
            uStack_94 = 0x3f800000;
            iVar6 = FUN_009f8b40();
            local_e0[0] = iVar6 << 0x10 | 0xb;
            piVar7 = (int *)FUN_00910da0();
            uVar8 = (**(code **)(*piVar7 + 8))(local_e4,local_e0,local_120,&local_100,0x3e4ccccd,1);
            FUN_00910ab0(uVar8);
            FUN_00917bd0(*piVar10,1);
            FUN_00917bd0(*piVar10,2);
            FUN_00917bd0(*piVar10,0x20);
            FUN_00917bd0(*piVar10,8);
          }
          else {
            FUN_00912060(local_120);
            FUN_00912140(&local_100);
          }
          if (*(int *)(param_1 + 0x195c) == 0) {
            FUN_00e02630(*(undefined4 *)(param_1 + 0x4f0),0xd,iVar5 + 0x10);
            *(undefined4 *)(param_1 + 0x195c) = 1;
          }
          if (**(char **)(local_104 + 4) != '\0') {
            FUN_00ac94e0(*(char **)(local_104 + 4));
          }
        }
      }
    }
  }
  return;
}

// 008316A0  FUN_008316a0  size=682  [callgraph]
void __thiscall FUN_008316a0(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined2 *puVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  short *psVar9;
  int *piVar10;
  bool bVar11;
  int local_120 [7];
  short *local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined1 local_e4 [4];
  uint local_e0 [12];
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_34;
  undefined4 local_30;
  
  uVar4 = *(uint *)(param_1 + 0x1824);
  local_120[1] = 0;
  local_120[2] = 0;
  bVar11 = (uVar4 & 1) == 0;
  local_120[0] = 0;
  uVar3 = (uint)bVar11;
  if ((uVar4 & 2) == 0) {
    local_120[(short)(ushort)bVar11] = 1;
    uVar3 = uVar3 + 1;
  }
  if ((uVar4 & 4) == 0) {
    local_120[(short)uVar3] = 2;
    uVar3 = uVar3 + 1;
  }
  if ((short)uVar3 != 0) {
    sVar2 = FUN_00dde2d0(0,uVar3 - 1);
    iVar5 = local_120[sVar2];
    if (-1 < iVar5) {
      *(char *)(param_1 + 0x181a) = *(char *)(param_1 + 0x181a) + '\x01';
      local_104 = (short *)(&DAT_016487b0 + iVar5 * 0xc);
      *(uint *)(param_1 + 0x1824) = *(uint *)(param_1 + 0x1824) | 1 << ((byte)iVar5 & 0x1f);
      uVar4 = 0;
      psVar9 = (short *)(param_1 + 0x1710);
      while ((*(int *)(psVar9 + 8) != 0 || (*psVar9 != 0))) {
        uVar4 = uVar4 + 1;
        psVar9 = psVar9 + 10;
        if (10 < uVar4) {
          return;
        }
      }
      puVar1 = (undefined2 *)(param_1 + 0x1710 + uVar4 * 0x14);
      if ((puVar1 != (undefined2 *)0x0) && (local_104 != (short *)0x0)) {
        *(undefined4 *)(puVar1 + 2) = param_4;
        *puVar1 = 1;
        *(short **)(puVar1 + 6) = local_104;
        *(undefined4 *)(puVar1 + 4) = 0x3f800000;
        iVar5 = FUN_00a12210((int)*local_104);
        if (iVar5 != 0) {
          local_120[0] = *(int *)(iVar5 + 0x40);
          piVar10 = (int *)(puVar1 + 8);
          local_120[1] = *(undefined4 *)(iVar5 + 0x44);
          local_120[2] = *(undefined4 *)(iVar5 + 0x48);
          local_120[3] = *(undefined4 *)(iVar5 + 0x4c);
          local_100 = 0;
          local_fc = 0;
          local_f8 = 0;
          if (*piVar10 == 0) {
            FUN_0118f7b0();
            local_50 = 0x3f800000;
            uStack_a8 = param_2[2];
            local_4c = 0x3ecccccd;
            local_b0 = *param_2;
            local_48 = 0x3ecccccd;
            uStack_ac = param_2[1];
            local_40 = 0x3f4ccccd;
            local_34 = 0x41a00000;
            local_30 = 0x42f00000;
            uStack_98 = param_3[2];
            uStack_9c = param_3[1];
            uStack_a4 = 0x3f800000;
            local_a0 = *param_3;
            uStack_94 = 0x3f800000;
            iVar6 = FUN_009f8b40();
            local_e0[0] = iVar6 << 0x10 | 0xb;
            piVar7 = (int *)FUN_00910da0();
            uVar8 = (**(code **)(*piVar7 + 8))(local_e4,local_e0,local_120,&local_100,0x3e4ccccd,1);
            FUN_00910ab0(uVar8);
            FUN_00917bd0(*piVar10,1);
            FUN_00917bd0(*piVar10,2);
            FUN_00917bd0(*piVar10,0x20);
            FUN_00917bd0(*piVar10,8);
          }
          else {
            FUN_00912060(local_120);
            FUN_00912140(&local_100);
          }
          if (*(int *)(param_1 + 0x195c) == 0) {
            FUN_00e02630(*(undefined4 *)(param_1 + 0x4f0),0xd,iVar5 + 0x10);
            *(undefined4 *)(param_1 + 0x195c) = 1;
          }
          if (**(char **)(local_104 + 4) != '\0') {
            FUN_00ac94e0(*(char **)(local_104 + 4));
          }
        }
      }
    }
  }
  return;
}

// 00831950  FUN_00831950  size=909  [callgraph]
void __thiscall FUN_00831950(int param_1,float param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  
  if (param_2 <= 0.0) {
    iVar2 = FUN_00a8eea0();
    iVar3 = FUN_00a8eeb0();
    param_2 = 1.0 - (float)iVar2 / (float)iVar3;
  }
  cVar1 = *(char *)(param_1 + 0x1818);
  while ((cVar1 < '\x04' && (*(float *)(param_1 + 0x17ec + cVar1 * 4) <= param_2))) {
    fVar4 = (float10)FUN_00dde300(0xc1200000,0x41200000);
    local_30 = (float)fVar4;
    fVar4 = (float10)FUN_00dde300(0xc1200000,0x41200000);
    local_2c = (float)fVar4;
    fVar4 = (float10)FUN_00dde300(0xc1200000,0x41200000);
    local_28 = (float)fVar4;
    local_24 = 0x3f800000;
    fVar4 = (float10)FUN_00dde300(0xc0a00000,0x40a00000);
    local_20 = (float)fVar4;
    local_1c = 5.0;
    fVar4 = (float10)FUN_00dde300(0xc0a00000,0x40a00000);
    local_18 = (float)fVar4;
    local_14 = 0x3f800000;
    FUN_00831120(&local_20,&local_30,0x437a0000);
    cVar1 = *(char *)(param_1 + 0x1818);
  }
  cVar1 = *(char *)(param_1 + 0x1819);
  while ((cVar1 < '\x04' && (*(float *)(param_1 + 0x17fc + cVar1 * 4) <= param_2))) {
    fVar4 = (float10)FUN_00dde300(0xc1200000,0x41200000);
    local_20 = (float)fVar4;
    fVar4 = (float10)FUN_00dde300(0xc1200000,0x41200000);
    local_1c = (float)fVar4;
    fVar4 = (float10)FUN_00dde300(0xc1200000,0x41200000);
    local_18 = (float)fVar4;
    local_14 = 0x3f800000;
    fVar4 = (float10)FUN_00dde300(0xc0a00000,0x40a00000);
    local_30 = (float)fVar4;
    local_2c = 5.0;
    fVar4 = (float10)FUN_00dde300(0xc0a00000,0x40a00000);
    local_28 = (float)fVar4;
    local_24 = 0x3f800000;
    FUN_008313e0(&local_30,&local_20,0x437a0000);
    cVar1 = *(char *)(param_1 + 0x1819);
  }
  cVar1 = *(char *)(param_1 + 0x181a);
  while ((cVar1 < '\x03' && (*(float *)(param_1 + 0x180c + cVar1 * 4) <= param_2))) {
    fVar4 = (float10)FUN_00dde300(0xc1200000,0x41200000);
    local_20 = (float)fVar4;
    fVar4 = (float10)FUN_00dde300(0xc1200000,0x41200000);
    local_1c = (float)fVar4;
    fVar4 = (float10)FUN_00dde300(0xc1200000,0x41200000);
    local_18 = (float)fVar4;
    local_14 = 0x3f800000;
    fVar4 = (float10)FUN_00dde300(0xc0a00000,0x40a00000);
    local_30 = (float)fVar4;
    local_2c = 5.0;
    fVar4 = (float10)FUN_00dde300(0xc0a00000,0x40a00000);
    local_28 = (float)fVar4;
    local_24 = 0x3f800000;
    FUN_008316a0(&local_30,&local_20,0x437a0000);
    cVar1 = *(char *)(param_1 + 0x181a);
  }
  return;
}

// 00831CE0  FUN_00831ce0  size=148  [callgraph]
void __fastcall FUN_00831ce0(int param_1)

{
  short sVar1;
  int iVar2;
  undefined1 *puVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  
  FUN_00831950(0x3f800000);
  piVar6 = (int *)(param_1 + 0x171c);
  iVar5 = 0xb;
  do {
    if ((piVar6[1] != 0) || ((short)piVar6[-3] != 0)) {
      if ((short *)*piVar6 == (short *)0x0) {
        sVar1 = -1;
      }
      else {
        sVar1 = *(short *)*piVar6;
      }
      iVar2 = FUN_00a12210((int)sVar1);
      if (iVar2 != 0) {
        *(ushort *)(iVar2 + 0xa2) = *(ushort *)(iVar2 + 0xa2) & 0xfffb;
      }
      if (*piVar6 == 0) {
        puVar3 = &DAT_016416fa;
      }
      else {
        puVar3 = *(undefined1 **)(*piVar6 + 4);
      }
      FUN_00ac94e0(puVar3);
      piVar6[-3] = 0;
      *piVar6 = 0;
      if (piVar6[1] != 0) {
        piVar4 = (int *)FUN_00910da0();
        (**(code **)(*piVar4 + 0x2c))(piVar6 + 1);
      }
    }
    piVar6 = piVar6 + 5;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return;
}

// 00831D80  FUN_00831d80  size=870  [callgraph]
void __fastcall FUN_00831d80(int param_1)

{
  undefined *puVar1;
  uint uVar2;
  float10 fVar3;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  
  uVar2 = 1;
  puVar1 = &DAT_01648750;
  do {
    if ((uVar2 & *(uint *)(param_1 + 0x181c)) == 0) {
      *(char *)(param_1 + 0x1818) = *(char *)(param_1 + 0x1818) + '\x01';
      *(uint *)(param_1 + 0x181c) = *(uint *)(param_1 + 0x181c) | uVar2;
      fVar3 = (float10)FUN_00dde300(0xc0a00000,0x40a00000);
      local_20 = (float)fVar3;
      local_1c = 5.0;
      fVar3 = (float10)FUN_00dde300(0xc0a00000,0x40a00000);
      local_18 = (float)fVar3;
      local_14 = 0x3f800000;
      fVar3 = (float10)FUN_00dde300(0xc1200000,0x41200000);
      local_30 = (float)fVar3;
      fVar3 = (float10)FUN_00dde300(0xc1200000,0x41200000);
      local_2c = (float)fVar3;
      fVar3 = (float10)FUN_00dde300(0xc1200000,0x41200000);
      local_28 = (float)fVar3;
      local_24 = 0x3f800000;
      FUN_00830ef0(puVar1,&local_20,&local_30,0x437a0000,0);
    }
    puVar1 = puVar1 + 0xc;
    uVar2 = uVar2 << 1 | (uint)((int)uVar2 < 0);
  } while ((int)puVar1 < 0x1648780);
  uVar2 = 1;
  puVar1 = &DAT_01648780;
  do {
    if ((uVar2 & *(uint *)(param_1 + 0x1820)) == 0) {
      *(char *)(param_1 + 0x1819) = *(char *)(param_1 + 0x1819) + '\x01';
      *(uint *)(param_1 + 0x1820) = *(uint *)(param_1 + 0x1820) | uVar2;
      fVar3 = (float10)FUN_00dde300(0xc0a00000,0x40a00000);
      local_30 = (float)fVar3;
      local_2c = 5.0;
      fVar3 = (float10)FUN_00dde300(0xc0a00000,0x40a00000);
      local_28 = (float)fVar3;
      local_24 = 0x3f800000;
      fVar3 = (float10)FUN_00dde300(0xc1200000,0x41200000);
      local_20 = (float)fVar3;
      fVar3 = (float10)FUN_00dde300(0xc1200000,0x41200000);
      local_1c = (float)fVar3;
      fVar3 = (float10)FUN_00dde300(0xc1200000,0x41200000);
      local_18 = (float)fVar3;
      local_14 = 0x3f800000;
      FUN_00830ef0(puVar1,&local_30,&local_20,0x437a0000,0);
    }
    puVar1 = puVar1 + 0xc;
    uVar2 = uVar2 << 1 | (uint)((int)uVar2 < 0);
  } while ((int)puVar1 < 0x16487b0);
  uVar2 = 1;
  puVar1 = &DAT_016487b0;
  do {
    if ((uVar2 & *(uint *)(param_1 + 0x1824)) == 0) {
      *(char *)(param_1 + 0x181a) = *(char *)(param_1 + 0x181a) + '\x01';
      *(uint *)(param_1 + 0x1824) = *(uint *)(param_1 + 0x1824) | uVar2;
      fVar3 = (float10)FUN_00dde300(0xc0a00000,0x40a00000);
      local_30 = (float)fVar3;
      local_2c = 5.0;
      fVar3 = (float10)FUN_00dde300(0xc0a00000,0x40a00000);
      local_28 = (float)fVar3;
      local_24 = 0x3f800000;
      fVar3 = (float10)FUN_00dde300(0xc1200000,0x41200000);
      local_20 = (float)fVar3;
      fVar3 = (float10)FUN_00dde300(0xc1200000,0x41200000);
      local_1c = (float)fVar3;
      fVar3 = (float10)FUN_00dde300(0xc1200000,0x41200000);
      local_18 = (float)fVar3;
      local_14 = 0x3f800000;
      FUN_00830ef0(puVar1,&local_30,&local_20,0x437a0000,0);
    }
    puVar1 = puVar1 + 0xc;
    uVar2 = uVar2 << 1 | (uint)((int)uVar2 < 0);
  } while ((int)puVar1 < 0x16487d4);
  return;
}

// 008320F0  FUN_008320f0  size=45  [callgraph]
void __fastcall FUN_008320f0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)(param_1 + 0x1720);
  iVar3 = 0xb;
  do {
    if (*piVar2 != 0) {
      piVar1 = (int *)FUN_00910da0();
      (**(code **)(*piVar1 + 0x2c))(piVar2);
    }
    piVar2 = piVar2 + 5;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}

// 00832400  Emc220::vf44  size=309  [class]
void __fastcall Emc220::vf44(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4a0) != 2) {
    FUN_008320f0();
    (**(code **)(*(int *)(param_1 + 0xf40) + 4))();
    FUN_00a5dc60();
    FUN_00a5dc60();
    FUN_00c57120(*(undefined4 *)(param_1 + 0x4f0));
    FUN_00c4d000(*(undefined4 *)(param_1 + 0x4f0));
    RayCastManager::getWork(param_1 + 0x13e0);
    RayCastManager::getWork(param_1 + 0x13e4);
    DAT_01dc08dc = *(undefined4 *)(param_1 + 0x4a0);
    DAT_01dc08e0 = *(undefined4 *)(param_1 + 0xb00);
    DAT_018b4414 = *(undefined4 *)(param_1 + 0x4b4);
    iVar1 = param_1;
    FUN_00c1cf50(param_1);
    FUN_00c1d1c0(iVar1);
    FUN_00a92a00();
    FUN_00c57120(*(undefined4 *)(param_1 + 0x4f0));
    FUN_00c4d000(*(undefined4 *)(param_1 + 0x4f0));
    if (*(int *)(param_1 + 0x7b0) != 0) {
      HkRemovePhysicsSystem::HkRemovePhysicsSystem();
    }
    FUN_00a944d0();
    FUN_00a9d8a0();
    if (*(int **)(param_1 + 0x7b0) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x7b0) + 4))(1);
      *(undefined4 *)(param_1 + 0x7b0) = 0;
    }
  }
  if (*(int *)(param_1 + 0x764) != 0) {
    FUN_008e3c10();
    FUN_008e1c60();
  }
  BehaviorEmBase::vf44();
  return;
}

// 00832540  Emc220::vf48  size=482  [class]
void __fastcall Emc220::vf48(int param_1)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  undefined *puVar4;
  
  EmBaseDLC::vf48();
  *(undefined4 *)(param_1 + 0x195c) = 0;
  if (((*(int *)(param_1 + 0x4a0) == 0) && ((*(byte *)(param_1 + 0xb00) & 2) != 0)) &&
     (*(int *)(param_1 + 0x4e4) == 0)) {
    DAT_01dc08e4 = *(undefined4 *)(param_1 + 0x870);
    DAT_01dc08e8 = *(undefined4 *)(param_1 + 0x874);
    DAT_01dc08ec = 1;
    FUN_00cad2a0();
  }
  FUN_0082afb0();
  *(float *)(param_1 + 0x1614) = *(float *)(param_1 + 0x1614) - *(float *)(param_1 + 0x910);
  *(float *)(param_1 + 0x1878) = *(float *)(param_1 + 0x1878) - *(float *)(param_1 + 0x910);
  if ((*(uint *)(param_1 + 0xe90) & 0x80000) != 0) {
    if ((*(uint *)(param_1 + 0xe90) & 0x600000) == 0) {
      iVar3 = FUN_00a81330();
      if (iVar3 != 0) goto LAB_008325f8;
    }
    *(float *)(param_1 + 0x1990) = *(float *)(param_1 + 0x1990) - *(float *)(param_1 + 0x910);
  }
LAB_008325f8:
  *(float *)(param_1 + 0x1944) = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0x1944);
  if (*(int *)(param_1 + 0x1350) == 0) {
    *(undefined4 *)(param_1 + 0x1944) = 0;
  }
  iVar3 = FUN_00ac48f0(0);
  if (iVar3 == 0) {
    *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) & 0xfffdffff;
  }
  else {
    *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) | 0x20000;
  }
  if ((*(uint *)(param_1 + 0xe90) & 0x20000) == 0) {
    fVar2 = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0x1a88);
  }
  else {
    fVar2 = -1.0;
  }
  *(float *)(param_1 + 0x1a88) = fVar2;
  *(float *)(param_1 + 0x1ab0) = *(float *)(param_1 + 0x1ab0) - *(float *)(param_1 + 0x910);
  *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) & 0xdfffffff;
  piVar1 = *(int **)(param_1 + 0xa84);
  if (piVar1 != (int *)0x0) {
    puVar4 = &DAT_01be9c38;
    (**(code **)(*piVar1 + 4))(&DAT_01be9c38);
    iVar3 = FUN_00dd6d80(puVar4);
    if ((iVar3 != 0) &&
       (fVar2 = (float)piVar1[0x8c9] - *(float *)(param_1 + 0x44),
       *(float *)(param_1 + 0x19cc) = fVar2, 1.25 < fVar2)) {
      *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) | 0x20000000;
    }
  }
  if ((*(uint *)(param_1 + 0xe90) & 0x20000000) == 0) {
    fVar2 = *(float *)(param_1 + 0x19d0) - *(float *)(param_1 + 0x910);
    if (fVar2 < 0.0) goto LAB_00832712;
  }
  else {
    fVar2 = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0x19d0);
    if (0.0 <= fVar2) {
LAB_00832712:
      *(float *)(param_1 + 0x19d0) = fVar2;
      FUN_00825210();
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x19d0) = 0;
  FUN_00825210();
  return;
}

// 00832730  Emc220::setEmSetInfo  size=278  [class]
undefined4 __thiscall Emc220::setEmSetInfo(int param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  
  FUN_0040ac60(param_2);
  if ((*(int *)(param_1 + 0x4a0) == 0) && ((*(byte *)(param_1 + 0xb00) & 2) != 0)) {
    FUN_00aa0ba0(*(undefined4 *)(param_1 + 0xb08),*(undefined4 *)(param_1 + 0xb9c));
  }
  else {
    *(undefined4 *)(param_1 + 0x1abc) = 0;
    if (*(int *)(param_1 + 0xb84) == 1) {
      FUN_00aa0ba0(*(undefined4 *)(param_1 + 0xb08),*(undefined4 *)(param_1 + 0xb9c));
      cVar2 = *(char *)(param_1 + 0xb24);
      if ((*(byte *)(param_1 + 0xb00) & 0x20) != 0) {
        *(undefined4 *)(param_1 + 0x1abc) = 1;
      }
      uVar3 = 0xe0001;
    }
    else {
      if (*(int *)(param_1 + 0xb84) != 2) goto LAB_00832811;
      cVar2 = *(char *)(param_1 + 0xb24);
      if ((*(byte *)(param_1 + 0xb00) & 0x20) != 0) {
        *(undefined4 *)(param_1 + 0x1abc) = 1;
      }
      uVar3 = 0xe0000;
    }
    FUN_00824fd0(uVar3);
    if ((cVar2 != -1) && (iVar1 = FUN_00d46690(cVar2), iVar1 != 0)) {
      FUN_00a5dcc0(iVar1);
    }
  }
LAB_00832811:
  FUN_00aa0920(*(undefined4 *)(param_1 + 0xb0c));
  if (((*(byte *)(param_1 + 0xb00) & 0x10) != 0) && (*(int *)(param_1 + 0x1abc) == 0)) {
    FUN_00824fd0(0x10012);
  }
  return 1;
}

// 00832850  FUN_00832850  size=468  [between]
void __fastcall FUN_00832850(int param_1)

{
  undefined4 *puVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  int local_8;
  int local_4;
  
  iVar6 = 0;
  if (*(int *)(param_1 + 0x13e0) != 0) {
    local_8 = 0;
    puVar7 = (undefined4 *)((*(int *)(param_1 + 0x1450) * 3 + 0x126) * 0x10 + param_1);
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    iVar3 = FUN_00907640((int *)(param_1 + 0x13e0),&local_8,0);
    if (((iVar3 != 0) && (*puVar7 = 1, local_8 != 0)) && (0 < *(int *)(local_8 + 0x14))) {
      FUN_0112bcf0();
      puVar1 = *(undefined4 **)(local_8 + 0x10);
      puVar7[4] = *puVar1;
      puVar7[5] = puVar1[1];
      puVar7[6] = puVar1[2];
      puVar7[7] = puVar1[3];
      puVar7[8] = puVar1[4];
      puVar7[9] = puVar1[5];
      puVar7[10] = puVar1[6];
      puVar7[0xb] = puVar1[7];
      iVar3 = puVar1[10];
      if ((*(char *)(iVar3 + 0x18) == '\x01') &&
         (local_4 = *(char *)(iVar3 + 0x10) + iVar3, local_4 != 0)) {
        uVar4 = FUN_009182b0(local_4);
        puVar7[1] = uVar4;
        iVar6 = FUN_008f7780(local_4);
        iVar3 = FUN_0055cda0(iVar6);
        if (iVar3 != 0) {
          puVar7[2] = (uint)(*(int *)(iVar3 + 0x884) != 0);
        }
      }
      if (((*(int *)(param_1 + 0x1450) == 5) || (*(int *)(param_1 + 0x1450) == 6)) &&
         ((iVar6 != 0 ||
          ((iVar6 = FUN_00445cc0(puVar1[10]), iVar6 != 0 &&
           (iVar6 = FUN_008f7780(iVar6), iVar6 != 0)))))) {
        iVar6 = FUN_009f8b40();
        iVar3 = FUN_009f8b40();
        if (iVar3 == iVar6) {
          *puVar7 = 0;
          puVar7[1] = 0;
          puVar7[2] = 0;
        }
      }
    }
    uVar5 = *(int *)(param_1 + 0x1450) + 1U & 0x80000007;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xfffffff8) + 1;
    }
    *(uint *)(param_1 + 0x1450) = uVar5;
  }
  FUN_008238a0();
  if (*(int *)(param_1 + 0x1350) == 0) {
    *(uint *)(param_1 + 0xd44) = *(uint *)(param_1 + 0xd44) | 0x2000000;
  }
  else {
    *(uint *)(param_1 + 0xd44) = *(uint *)(param_1 + 0xd44) & 0xfdffffff;
  }
  if (*(int *)(param_1 + 0x1350) == 0) {
    fVar2 = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0x19c0);
    if (0.0 <= fVar2) {
LAB_00832a16:
      *(float *)(param_1 + 0x19c0) = fVar2;
      return;
    }
  }
  else {
    fVar2 = *(float *)(param_1 + 0x19c0) - *(float *)(param_1 + 0x910);
    if (fVar2 < 0.0) goto LAB_00832a16;
  }
  *(undefined4 *)(param_1 + 0x19c0) = 0;
  return;
}

// 00832A30  FUN_00832a30  size=734  [between]
void __fastcall FUN_00832a30(int param_1)

{
  float fVar1;
  undefined4 *puVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
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
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  iVar4 = FUN_00a8cab0();
  if (iVar4 == 0x20003) {
    if (*(int *)(param_1 + 0x13e4) != 0) {
      RayCastManager::getWork(param_1 + 0x13e4);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x13f0) == 0) {
    if (*(int *)(param_1 + 0x13e4) != 0) {
      local_54 = 0;
      iVar4 = FUN_009075e0(param_1 + 0x13e4,&local_54,&local_40,&local_30);
      if (((iVar4 != 0) && (local_54 != 0)) && (FUN_0112c170(), 0 < *(int *)(local_54 + 0x14))) {
        puVar2 = *(undefined4 **)(local_54 + 0x10);
        iVar4 = FUN_00445ca0(puVar2[0x14]);
        if ((((iVar4 != 0) && (iVar5 = FUN_009182b0(iVar4), iVar5 != 0)) &&
            (bVar3 = FUN_009184c0(iVar4), (bVar3 & 0x1f) != 0x14)) &&
           (((iVar4 = FUN_008f7780(iVar4), iVar4 == 0 || (iVar4 = FUN_0055cda0(iVar4), iVar4 == 0))
            || (*(int *)(iVar4 + 0x884) == 0)))) {
          fVar1 = (float)puVar2[4];
          local_20 = (local_30 - local_40) * fVar1 + local_40;
          fStack_1c = (local_2c - local_3c) * fVar1 + local_3c;
          fStack_18 = (local_28 - local_38) * fVar1 + local_38;
          fStack_14 = (local_24 - local_34) * fVar1 + local_34;
          *(float *)(param_1 + 0x1400) = local_20;
          *(float *)(param_1 + 0x1404) = fStack_1c;
          *(float *)(param_1 + 0x1408) = fStack_18;
          *(float *)(param_1 + 0x140c) = fStack_14;
          *(undefined4 *)(param_1 + 0x1410) = *puVar2;
          *(undefined4 *)(param_1 + 0x1414) = puVar2[1];
          *(undefined4 *)(param_1 + 0x1418) = puVar2[2];
          *(undefined4 *)(param_1 + 0x141c) = puVar2[3];
          iVar4 = *(int *)(param_1 + 0xa84);
          local_50 = *(float *)(iVar4 + 0x40) - *(float *)(param_1 + 0x1400);
          local_48 = *(float *)(iVar4 + 0x48) - *(float *)(param_1 + 0x1408);
          local_44 = *(float *)(iVar4 + 0x4c) - *(float *)(param_1 + 0x140c);
          local_4c = 0.0;
          fVar1 = local_50 * local_50 + local_48 * local_48;
          if (fVar1 < 0.0 == (fVar1 == 0.0)) {
            FUN_00ddf460(&local_50,&local_50);
          }
          else {
            FUN_00dd5650(&DAT_0163d0ac);
            local_50 = 0.0;
            local_4c = 1.0;
            local_48 = 0.0;
          }
          if (0.7 <= *(float *)(param_1 + 0x1418) * local_48 +
                     local_50 * *(float *)(param_1 + 0x1410) +
                     *(float *)(param_1 + 0x1414) * local_4c) {
            *(undefined4 *)(param_1 + 0x1444) = 0x41f00000;
            *(undefined4 *)(param_1 + 0x13f0) = 1;
            RayCastManager::getWork(param_1 + 0x13e4);
          }
        }
      }
    }
    FUN_00823cb0();
  }
  else {
    fVar1 = *(float *)(param_1 + 0x1444) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x1444) = fVar1;
    if (fVar1 <= 0.0) {
      *(undefined4 *)(param_1 + 0x13f0) = 0;
      *(undefined4 *)(param_1 + 0x13f4) = 0;
      return;
    }
  }
  return;
}

// 00832D10  FUN_00832d10  size=86  [between]
void __fastcall FUN_00832d10(int param_1)

{
  int iVar1;
  
  if (((*(int *)(param_1 + 0x4a0) != 0) || ((*(byte *)(param_1 + 0xb00) & 2) == 0)) &&
     ((*(int *)(param_1 + 0x13b0) != 0 || (*(float *)(param_1 + 0x19c0) < -15.0)))) {
    iVar1 = FUN_00aa4a90();
    if (iVar1 != 0) {
      FUN_00824fd0(0x1000f);
      return;
    }
  }
  FUN_00824fd0(0x10003);
  return;
}

// 00832D70  Emc220::vf34C  size=182  [class]
void __fastcall Emc220::vf34C(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1[0x6af] == 0) {
    (**(code **)(*param_1 + 0x1f8))(0);
    (**(code **)(*param_1 + 0x1d4))(0);
    (**(code **)(*param_1 + 0x314))();
    iVar1 = param_1[0x1d9];
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x104) != 0)) {
      *(undefined4 *)(iVar1 + 0x104) = 0;
    }
    param_1[0x3a4] = param_1[0x3a4] & 0xffffffbf;
    uVar2 = 0x10000;
    if (param_1[0x128] == 1) {
      uVar2 = 0x10001;
    }
    iVar1 = FUN_008258c0();
    if (iVar1 == 0) {
      if (param_1[0x139] == 0) {
        if ((param_1[0x3a4] & 0x80000U) != 0) {
          uVar2 = 0x70000;
        }
      }
      else {
        uVar2 = 0x60000;
      }
    }
    else {
      uVar2 = 0x60004;
    }
    param_1[0x3a4] = param_1[0x3a4] & 0xf7ffffff;
    FUN_00824fd0(uVar2);
  }
  return;
}

// 00832E30  FUN_00832e30  size=386  [between]
void __thiscall FUN_00832e30(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  if ((param_1[0x128] == 0) && ((*(byte *)(param_1 + 0x2c0) & 2) != 0)) {
    FUN_00824fd0(0x60000);
    FUN_00a8cb60(2);
    param_1[0x139] = 1;
    FUN_00a8ee20(0);
    param_1[0x1af] = 1;
    return;
  }
  if ((param_1[0x294] != 0) || (param_2 != 0)) {
    FUN_00ac8e10(1);
    if ((*(byte *)((int)param_1 + 0xe92) & 1) != 0) {
      FUN_00a8c9b0(0,2,0x3f800000,0);
      param_1[0x3a4] = param_1[0x3a4] & 0xfffeffff;
    }
    if ((param_1[0x3a4] & 0x8000U) == 0) {
      FUN_00e02240(param_1[0x13c],3);
      param_1[0x3a4] = param_1[0x3a4] | 0x8000;
    }
    (**(code **)(*param_1 + 0x20))();
    if (param_1[0x6a0] != 0) {
      param_1[0x6a0] = 0;
      FUN_00a8c9b0(0,0x197,0,0);
    }
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_00a7c8a0();
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x20))();
      }
    }
    param_1[0x1af] = 1;
    FUN_00824fd0(0x60002);
    if (param_1[0x1d9] != 0) {
      FUN_008e3c10();
    }
    iVar1 = FUN_00e5e0c0("em0220_se_dmg_explosion",param_1,0xffffffff,0);
    param_1[0x6a3] = iVar1;
    FUN_00940450(param_1[0x20f]);
    if ((param_1[0x128] != 0) || ((*(byte *)(param_1 + 0x2c0) & 2) == 0)) {
      (**(code **)(*param_1 + 0x364))(0xffffffff);
    }
  }
  return;
}

// 00832FC0  FUN_00832fc0  size=150  [between]
void __fastcall FUN_00832fc0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  if (((((param_1[0x186] & 0xffff0000U) != 0xf0000) && (param_1[0x187] != 0x20003)) &&
      ((*(byte *)(param_1 + 0x3a4) & 2) == 0)) && ((DAT_01bea060 & 0x2000000) == 0)) {
    iVar2 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar2 != 0) {
      iVar2 = FUN_008251c0();
      if (iVar2 != 0) {
        pcVar1 = *(code **)(*param_1 + 0x314);
        param_1[0x581] = 0;
        (*pcVar1)();
        iVar2 = param_1[0x1d9];
        if ((iVar2 != 0) && (*(int *)(iVar2 + 0x104) != 0)) {
          *(undefined4 *)(iVar2 + 0x104) = 0;
        }
        FUN_00824fd0(0xf0000);
      }
    }
  }
  return;
}

// 00833060  FUN_00833060  size=87  [between]
undefined4 __fastcall FUN_00833060(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4a0) == 0) {
    if (((*(byte *)(param_1 + 0xb00) & 2) == 0) && (iVar1 = FUN_00a90070(5), iVar1 == 0)) {
      return 0;
    }
    if (DAT_018b9174 != 0xc75) {
      FUN_00824fd0(0xf0005);
      FUN_00c27260(*(undefined4 *)(param_1 + 0x1a84));
      return 1;
    }
  }
  return 0;
}

// 008330C0  FUN_008330c0  size=522  [between]
/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_008330c0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puStack_3a4;
  float *pfStack_3a0;
  undefined4 *puStack_39c;
  undefined4 *puStack_398;
  float fStack_394;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 auStack_374 [2];
  undefined4 auStack_36c [3];
  undefined4 local_360;
  float local_35c [8];
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined1 uStack_334;
  undefined1 uStack_333;
  undefined4 uStack_330;
  uint uStack_2b8;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_1e4;
  
  *(int *)(param_1 + 0x14b0) = *(int *)(param_1 + 0x14b0) + 1;
  fStack_394 = 5.60519e-45;
  puStack_398 = (undefined4 *)0x8330dd;
  iVar1 = FUN_00a12210();
  if (iVar1 != 0) {
    local_360 = 0;
    puStack_39c = &local_360;
    local_35c[0] = 0.0;
    local_35c[1] = 1.4;
    pfStack_3a0 = (float *)0x83310a;
    puStack_398 = puStack_39c;
    fStack_394 = (float)(iVar1 + 0x10);
    D3DXVec3TransformNormal();
    pfStack_3a0 = local_35c + 4;
    local_35c[4] = 0.0;
    local_35c[5] = 0.0;
    puStack_3a4 = auStack_36c;
    local_35c[6] = 0.0;
    thunk_FUN_00dde510(local_35c,local_35c + 1);
    local_35c[0] = -local_35c[0] - 0.17453292;
    puStack_3a4 = &uStack_37c;
    local_35c[2] = 0.0;
    uStack_37c = 0;
    uStack_378 = 0xbe800000;
    auStack_374[0] = 0;
    pfStack_3a0 = (float *)(iVar1 + 0x10);
    D3DXVec3TransformNormal(puStack_3a4);
    puStack_398 = (undefined4 *)0x0;
    fStack_394 = 0.0;
    D3DXVec3TransformNormal(&puStack_398,&puStack_398,param_1 + 0x10);
    puStack_3a4 = (undefined4 *)((float)puStack_3a4 + *(float *)(param_1 + 0x40));
    pfStack_3a0 = (float *)(*(float *)(param_1 + 0x44) + (float)pfStack_3a0);
    puStack_39c = (undefined4 *)(*(float *)(param_1 + 0x48) + (float)puStack_39c);
    FUN_004105d0();
    FUN_00410710();
    FUN_0041cf30();
    uStack_240 = 0x15;
    local_35c[3] = 2.8127e-40;
    uStack_244 = 0x67;
    puVar2 = (undefined4 *)FUN_009f8b60();
    uStack_1e4 = *puVar2;
    local_35c[7] = *(float *)(param_1 + 0x1238);
    uStack_338 = *(undefined4 *)(param_1 + 0x123c);
    uStack_2b8 = uStack_2b8 | 0x10000000;
    uStack_334 = *(undefined1 *)(param_1 + 0x1244);
    uStack_33c = *(undefined4 *)(param_1 + 0x1240);
    uStack_330 = *(undefined4 *)(param_1 + 0x4f0);
    uStack_333 = 10;
    local_35c[6] = 4.70836e-43;
    uVar3 = FUN_00a7c7f0();
    FUN_00a7c960(uVar3);
    FUN_00416e30(&fStack_394,&puStack_3a4,auStack_374,0x3fb33333,0x44480000);
    FUN_00ad3be0(*(undefined4 *)(param_1 + 0x4f0),local_35c + 2);
  }
  return;
}

// 008332D0  FUN_008332d0  size=814  [between]
void __thiscall FUN_008332d0(int *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  float unaff_EBX;
  float unaff_ESI;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  undefined *puVar12;
  float fStack_384;
  float local_380;
  float fStack_37c;
  float fStack_378;
  float fStack_374;
  float fStack_370;
  float fStack_36c;
  float fStack_368;
  float fStack_364;
  float local_360;
  float local_35c;
  undefined4 local_358;
  undefined4 local_354;
  float fStack_34c;
  float fStack_348;
  float local_344;
  uint auStack_33c [4];
  undefined4 uStack_32c;
  int iStack_328;
  int iStack_324;
  int iStack_320;
  undefined1 uStack_31c;
  undefined1 uStack_31b;
  int iStack_318;
  uint uStack_2a0;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_1cc;
  undefined2 uStack_1c2;
  
  iVar5 = FUN_00a12210(0xffffffff);
  if (iVar5 != 0) {
    piVar4 = (int *)param_1[0x2a1];
    local_344 = (float)piVar4[0x11];
    local_35c = local_344;
    if (piVar4 != (int *)0x0) {
      puVar12 = &DAT_01be9c38;
      (**(code **)(*piVar4 + 4))(&DAT_01be9c38);
      iVar6 = FUN_00dd6d80(puVar12);
      local_35c = local_344;
      if (iVar6 != 0) {
        local_35c = (float)piVar4[0x8c9];
      }
    }
    iVar6 = param_1[0x2a1];
    local_360 = *(float *)(iVar6 + 0x40);
    local_358 = *(undefined4 *)(iVar6 + 0x48);
    local_354 = *(undefined4 *)(iVar6 + 0x4c);
    local_35c = local_35c + 1.2;
    local_380 = 0.0;
    fStack_37c = 1.5;
    fStack_378 = 1.5;
    D3DXVec3TransformNormal(&local_380,&local_380,iVar5 + 0x10);
    fVar1 = *(float *)(iVar5 + 0x40);
    fVar2 = *(float *)(iVar5 + 0x44);
    fVar3 = *(float *)(iVar5 + 0x48);
    FUN_004105d0();
    FUN_00410710();
    FUN_0041cf30();
    fStack_37c = fStack_36c - (fVar1 + unaff_ESI);
    auStack_33c[1] = 0x3c372;
    uStack_22c = 0x69;
    fStack_378 = fStack_368 - (fVar2 + unaff_EBX);
    fStack_374 = fStack_364 - (fVar3 + fStack_384);
    fStack_370 = local_360 - local_380;
    fVar1 = fStack_374 * fStack_374 + fStack_37c * fStack_37c + fStack_378 * fStack_378;
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      FUN_00ddf460(&fStack_37c,&fStack_37c);
      fVar9 = (float10)fStack_37c;
      fVar11 = (float10)fStack_374;
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      fVar9 = (float10)0;
      fStack_37c = (float)fVar9;
      fStack_378 = 1.0;
      fStack_374 = (float)fVar9;
      fVar11 = fVar9;
    }
    fVar10 = (float10)fpatan((float10)fStack_378,SQRT(fVar11 * fVar11 + fVar9 * fVar9));
    fStack_34c = (float)-fVar10;
    fVar9 = (float10)fpatan(fVar9,fVar11);
    fStack_348 = (float)(((float10)param_2 - (float10)1.5) * (float10)0.05235988 + fVar9);
    local_344 = 0.0;
    iVar6 = (**(code **)(*param_1 + 0x84))();
    fVar9 = (float10)FUN_00ddba30(*(float *)(iVar6 + 4) - fStack_348);
    if ((float10)0.61086524 < ABS(fVar9)) {
      iVar6 = (**(code **)(*param_1 + 0x84))();
      fStack_348 = *(float *)(iVar6 + 4);
    }
    uStack_228 = 0x3c;
    puVar7 = (undefined4 *)FUN_009f8b60();
    uStack_1cc = *puVar7;
    iStack_320 = param_1[0x493];
    iStack_328 = param_1[0x492];
    uStack_31c = (undefined1)param_1[0x495];
    iStack_324 = param_1[0x494];
    iStack_318 = param_1[0x13c];
    uStack_2a0 = uStack_2a0 | 0x10000180;
    uStack_31b = 7;
    uStack_32c = 0x151;
    uVar8 = FUN_00a7c7f0();
    FUN_00a7c960(uVar8);
    auStack_33c[0] = auStack_33c[0] | 4;
    uStack_1c2 = *(undefined2 *)(iVar5 + 0xa0);
    FUN_00416e30(&stack0xfffffc74,&fStack_36c,&fStack_34c,0x3ec28f5c,0x437a0000);
    iVar5 = FUN_00ad3be0(param_1[0x13c],auStack_33c);
    if (iVar5 != 0) {
      *(undefined4 *)(iVar5 + 0xbf4) = 0;
      *(undefined4 *)(iVar5 + 0xbf8) = 0x3f000000;
      *(undefined4 *)(iVar5 + 0xbfc) = 0x3e99999a;
    }
  }
  return;
}

// 00833600  FUN_00833600  size=710  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00833600(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined4 *puVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float fStack_37c;
  float fStack_378;
  float fStack_374;
  float local_370 [3];
  float fStack_364;
  float fStack_360;
  float fStack_35c;
  float fStack_358;
  undefined4 uStack_354;
  float fStack_34c;
  float fStack_348;
  float fStack_344;
  float fStack_340;
  uint auStack_33c [4];
  undefined1 auStack_32c [256];
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_1cc;
  undefined2 uStack_1c2;
  
  if ((_DAT_01b359d0 & 1) == 0) {
    _DAT_01b359d0 = _DAT_01b359d0 | 1;
    _DAT_01b359c0 = 0;
    _DAT_01b359c4 = 0;
    _DAT_01b359c8 = 0x40066666;
  }
  iVar5 = FUN_00a81330();
  if (((iVar5 != 0) && (iVar5 = FUN_00a7c8a0(), iVar5 != 0)) &&
     (iVar5 = FUN_00a12210(0), iVar5 != 0)) {
    D3DXVec3TransformNormal(local_370,&DAT_01b359c0,iVar5 + 0x10);
    fStack_37c = *(float *)(iVar5 + 0x40) + fStack_37c;
    fStack_378 = *(float *)(iVar5 + 0x44) + fStack_378;
    fStack_374 = *(float *)(iVar5 + 0x48) + fStack_374;
    fVar1 = *(float *)(param_1 + 0x1860) - fStack_37c;
    fVar4 = *(float *)(param_1 + 0x1864) - fStack_378;
    fVar3 = *(float *)(param_1 + 0x1868) - fStack_374;
    fVar2 = fVar3 * fVar3 + fVar1 * fVar1 + fVar4 * fVar4;
    if (fVar2 < 0.0 == (fVar2 == 0.0)) {
      FUN_00ddf460(&stack0xfffffc74,&stack0xfffffc74);
      fVar7 = (float10)fVar4;
      fVar8 = (float10)fVar1;
      fVar9 = (float10)fVar3;
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      fVar8 = (float10)0;
      fVar7 = (float10)1;
      fVar9 = fVar8;
    }
    fVar7 = (float10)fpatan(fVar7,SQRT(fVar9 * fVar9 + fVar8 * fVar8));
    fStack_35c = (float)-fVar7;
    fVar7 = (float10)fpatan(fVar8,fVar9);
    fStack_358 = (float)fVar7;
    uStack_354 = 0;
    fVar1 = *(float *)(iVar5 + 0x30);
    fVar2 = *(float *)(iVar5 + 0x34);
    fVar3 = *(float *)(iVar5 + 0x38);
    fVar4 = *(float *)(iVar5 + 0x3c);
    fVar7 = (float10)fpatan((float10)fVar1,(float10)fVar3);
    fStack_360 = (float)fVar7;
    fVar7 = (float10)FUN_00827d50();
    fStack_364 = (float)((float10)1 - fVar7);
    fVar7 = (float10)FUN_00ddba30(fStack_360 - fStack_358);
    fVar7 = (float10)FUN_00ddba30((float)(fVar7 * (float10)fStack_364 + (float10)fStack_358));
    fStack_358 = (float)fVar7;
    FUN_004105d0();
    FUN_00410710();
    FUN_0041cf30();
    uStack_22c = 0x70;
    uStack_228 = 0x3d;
    puVar6 = (undefined4 *)FUN_009f8b60();
    uStack_1cc = *puVar6;
    FUN_008256e0(auStack_32c);
    fStack_34c = fStack_37c + fVar1;
    auStack_33c[0] = auStack_33c[0] | 4;
    uStack_1c2 = *(undefined2 *)(iVar5 + 0xa0);
    fStack_348 = fStack_378 + fVar2;
    fStack_344 = fStack_374 + fVar3;
    fStack_340 = fVar4 + local_370[0];
    FUN_00416e30(&fStack_37c,&fStack_34c,&fStack_35c,0x40900000,0x437a0000);
    FUN_00ad3be0(*(undefined4 *)(param_1 + 0x4f0),auStack_33c);
  }
  return;
}

// 008338D0  FUN_008338d0  size=619  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_008338d0(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 *puVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float fVar8;
  float fVar9;
  float fStack_374;
  float fStack_36c;
  float fStack_368;
  float fStack_364;
  float local_360;
  float fStack_35c;
  float fStack_358;
  float fStack_354;
  float fStack_350;
  float fStack_34c;
  float fStack_348;
  undefined4 uStack_344;
  uint auStack_33c [4];
  undefined1 auStack_32c [256];
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_1cc;
  undefined2 uStack_1c2;
  
  if ((_DAT_01b359f0 & 1) == 0) {
    _DAT_01b359f0 = _DAT_01b359f0 | 1;
    _DAT_01b359e0 = 0;
    _DAT_01b359e4 = 0;
    _DAT_01b359e8 = 0x40066666;
  }
  iVar3 = FUN_00a81330();
  if (((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) &&
     (iVar3 = FUN_00a12210(0), iVar3 != 0)) {
    D3DXVec3TransformNormal(&local_360,&DAT_01b359e0,iVar3 + 0x10);
    fStack_36c = *(float *)(iVar3 + 0x40) + fStack_36c;
    fStack_368 = *(float *)(iVar3 + 0x44) + fStack_368;
    fStack_364 = *(float *)(iVar3 + 0x48) + fStack_364;
    fVar8 = *(float *)(param_1 + 0x1860) - fStack_36c;
    fVar9 = *(float *)(param_1 + 0x1864) - fStack_368;
    fStack_374 = *(float *)(param_1 + 0x1868) - fStack_364;
    fVar2 = *(float *)(param_1 + 0x186c) - local_360;
    fVar1 = fStack_374 * fStack_374 + fVar8 * fVar8 + fVar9 * fVar9;
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      FUN_00ddf460(&stack0xfffffc84,&stack0xfffffc84);
      fVar5 = (float10)fVar8;
      fVar7 = (float10)fStack_374;
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      fVar5 = (float10)0;
      fVar8 = (float)fVar5;
      fVar9 = 1.0;
      fStack_374 = (float)fVar5;
      fVar7 = fVar5;
    }
    fVar6 = (float10)fpatan((float10)fVar9,SQRT(fVar7 * fVar7 + fVar5 * fVar5));
    fStack_34c = (float)-fVar6;
    fVar5 = (float10)fpatan(fVar5,fVar7);
    fStack_348 = (float)fVar5;
    uStack_344 = 0;
    FUN_004105d0();
    FUN_00410710();
    FUN_0041cf30();
    uStack_22c = 0x72;
    uStack_228 = 0x3d;
    puVar4 = (undefined4 *)FUN_009f8b60();
    uStack_1cc = *puVar4;
    FUN_00825780(auStack_32c);
    fStack_35c = fStack_36c + fVar8;
    uStack_1c2 = *(undefined2 *)(iVar3 + 0xa0);
    auStack_33c[0] = auStack_33c[0] | 4;
    fStack_358 = fStack_368 + fVar9;
    fStack_354 = fStack_364 + fStack_374;
    fStack_350 = fVar2 + local_360;
    FUN_00416e30(&fStack_36c,&fStack_35c,&fStack_34c,0x40a00000,0x437a0000);
    FUN_00ad3be0(*(undefined4 *)(param_1 + 0x4f0),auStack_33c);
  }
  return;
}

// 00833B40  FUN_00833b40  size=90  [between]
undefined4 __fastcall FUN_00833b40(int param_1)

{
  int iVar1;
  
  if ((*(float *)(param_1 + 0x19d0) <= 15.0) && (-10.0 <= *(float *)(param_1 + 0x19c0))) {
    if (((*(int *)(param_1 + 0x4a0) != 0) || ((*(byte *)(param_1 + 0xb00) & 2) == 0)) &&
       (iVar1 = FUN_00a90070(5), iVar1 == 0)) {
      return 0;
    }
    if (*(int *)(param_1 + 0x1ab8) < 5) {
      return 1;
    }
  }
  return 0;
}

// 00833BA0  FUN_00833ba0  size=539  [between]
undefined4 __fastcall FUN_00833ba0(int param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  float10 fVar5;
  
  fVar5 = (float10)FUN_00a8ec30(*(int *)(param_1 + 0xa84) + 0x40);
  fVar5 = (float10)FUN_00ddba30((float)((float10)*(float *)(param_1 + 0x94) - fVar5));
  if (ABS(fVar5) < (float10)0.43633232 == (ABS(fVar5) == (float10)0.43633232)) {
    return 0;
  }
  if (((*(int *)(param_1 + 0x4a0) == 0) && ((*(uint *)(param_1 + 0xe90) & 0x600000) == 0)) &&
     (iVar3 = FUN_00a81330(), iVar3 != 0)) {
    if (*(float *)(param_1 + 0xa90) <= 9.0) {
      FUN_00824fd0(0x20002);
      return 1;
    }
    if ((*(float *)(param_1 + 0xa90) <= 64.0) && (iVar3 = FUN_0081ff70(0x41700000), iVar3 != 0)) {
      FUN_00824fd0(0x20000);
      return 1;
    }
    if (*(float *)(param_1 + 0xa90) <= 110.25) {
      FUN_00824fd0(0x20001);
      return 1;
    }
    if (256.0 < *(float *)(param_1 + 0xa90)) {
      return 0;
    }
    iVar3 = FUN_00833b40();
    if (iVar3 == 0) {
      return 0;
    }
    sVar2 = FUN_00dde2d0(0,100);
    if ((0x41 < sVar2) && (iVar3 = FUN_00a8cab0(), iVar3 != 0x10003)) goto LAB_00833cd6;
    uVar4 = FUN_00dde2d0(0,100);
    if (((uVar4 & 1) != 0) && (*(int *)(param_1 + 0x4a0) == 0)) goto LAB_00833da4;
  }
  else {
    if (((256.0 < *(float *)(param_1 + 0xa90)) ||
        (fVar1 = *(float *)(param_1 + 0xa90), NAN(fVar1) || 64.0 < fVar1 == (fVar1 == 64.0))) ||
       (iVar3 = FUN_00833b40(), iVar3 == 0)) {
      return 0;
    }
    sVar2 = FUN_00dde2d0(0,100);
    if ((0x41 < sVar2) && (iVar3 = FUN_00a8cab0(), iVar3 != 0x10003)) {
LAB_00833cd6:
      FUN_00824fd0(0x20008);
      return 1;
    }
    uVar4 = FUN_00dde2d0(0,100);
    if ((((uVar4 & 1) != 0) && (*(int *)(param_1 + 0x4a0) == 0)) &&
       (iVar3 = FUN_008302b0(), iVar3 != 0)) {
LAB_00833da4:
      FUN_00824fd0(0x20005);
      return 1;
    }
  }
  FUN_00824fd0(0x20006);
  return 1;
}

// 00833DC0  FUN_00833dc0  size=1112  [between]
void __fastcall FUN_00833dc0(int *param_1)

{
  float fVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  short sVar5;
  int iVar6;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  switch(param_1[0x187]) {
  case 0:
    param_1[0x6ae] = param_1[0x6ae] + -1;
    if ((param_1[0x515] == 0x10006) || (param_1[0x515] == 0x10007)) {
      FUN_00aa4080(10,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x248] = 0;
      param_1[0x187] = 2;
      FUN_00ac80a0(0x3f800000,0x3f800000);
      return;
    }
    FUN_00aa4080(0xb,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x248] = 0;
    param_1[0x52c] = 0;
    param_1[0x52e] = 0;
    sVar5 = FUN_00dde2d0(4,6);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x52d] = (int)sVar5;
  case 1:
    FUN_008203d0(param_1[0x2a1] + 0x40,0x3dcccccd,0x3d32b8c2);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar6 = FUN_00a94ce0(0);
    if (iVar6 != 0) {
      FUN_00aa4080(10,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    iVar6 = param_1[0x2a1];
    local_20 = *(float *)(iVar6 + 0x40) - (float)param_1[0x10];
    local_1c = *(float *)(iVar6 + 0x44) - (float)param_1[0x11];
    local_18 = *(float *)(iVar6 + 0x48) - (float)param_1[0x12];
    local_14 = *(float *)(iVar6 + 0x4c) - (float)param_1[0x13];
    fVar1 = local_18 * local_18 + local_20 * local_20 + local_1c * local_1c;
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      FUN_00ddf460(&local_20,&local_20);
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      local_18 = 0.0;
      local_20 = 0.0;
      local_1c = 1.0;
    }
    iVar6 = param_1[0x2a1];
    local_20 = local_20 * 6.5;
    local_1c = local_1c * 6.5;
    local_18 = local_18 * 6.5;
    local_14 = local_14 * 6.5;
    param_1[600] = (int)(*(float *)(iVar6 + 0x40) + local_20);
    param_1[0x259] = (int)(*(float *)(iVar6 + 0x44) + local_1c);
    param_1[0x25a] = (int)(*(float *)(iVar6 + 0x48) + local_18);
    param_1[0x25b] = (int)(local_14 + *(float *)(iVar6 + 0x4c));
    param_1[0x187] = param_1[0x187] + 1;
  case 3:
    FUN_008203d0(param_1 + 600,0x3e75c28f,0x3db2b8c2);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (((float)param_1[0x2a4] <= 9.0) &&
       (fVar1 = (float)param_1[0x248], param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]),
       fVar1 - (float)param_1[0x244] <= 0.0)) {
      FUN_008330c0();
      param_1[0x248] = 0x41200000;
    }
    bVar4 = false;
    fVar1 = (float)param_1[600] - (float)param_1[0x10];
    fVar1 = ((float)param_1[0x25a] - (float)param_1[0x12]) *
            ((float)param_1[0x25a] - (float)param_1[0x12]) + fVar1 * fVar1;
    if (((param_1[0x498] != 0) && (param_1[0x499] != 0)) &&
       (fVar3 = ((float)param_1[0x12] - (float)param_1[0x49e]) *
                ((float)param_1[0x12] - (float)param_1[0x49e]) +
                ((float)param_1[0x10] - (float)param_1[0x49c]) *
                ((float)param_1[0x10] - (float)param_1[0x49c]),
       fVar3 < 7.8399997 != (fVar3 == 7.8399997))) {
      bVar4 = true;
    }
    if ((!NAN(fVar1) && fVar1 < 2.25 != (fVar1 == 2.25)) || (bVar4)) {
      if ((param_1[0x52c] < param_1[0x52d]) && (param_1[0x52e] < 3)) {
        param_1[0x52e] = param_1[0x52e] + 1;
        FUN_00824fd0(0x10006);
        return;
      }
      FUN_00aa4080(0xc,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = 4;
      FUN_00ac80a0(0x3f800000,0x3f800000);
    }
    iVar6 = FUN_00824150();
    if (iVar6 != 0) {
      FUN_00824fd0(0x10007);
      return;
    }
    break;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar6 = FUN_00a94ce0(0);
    if (iVar6 != 0) {
      pcVar2 = *(code **)(*param_1 + 0x34c);
      param_1[0x52c] = 0;
      (*pcVar2)();
    }
  }
  return;
}

// 00834230  FUN_00834230  size=309  [between]
void __fastcall FUN_00834230(int *param_1)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  if (param_1[0x187] == 0) {
    param_1[0x6ae] = param_1[0x6ae] + -1;
    fVar1 = (float)param_1[0x2a4];
    uVar4 = 0x8000000;
    if (!NAN(fVar1) && 64.0 < fVar1 != (fVar1 == 64.0)) {
      uVar4 = 0x8000080;
    }
    FUN_00aa4080(0x75,0,0x3e088889,0x3f800000,uVar4,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x250] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  iVar3 = FUN_00a8c760(0);
  if (iVar3 != 0) {
    FUN_008203d0(param_1[0x2a1] + 0x40,0x3e75c28f,0x3db2b8c2);
  }
  iVar3 = FUN_00a8c760(8);
  if (iVar3 != 0) {
    iVar3 = param_1[0x250];
    param_1[0x250] = iVar3 + 1;
    FUN_008332d0(iVar3);
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  if ((param_1[0x128] == 0) && ((*(byte *)(param_1 + 0x2c0) & 2) != 0)) {
    iVar3 = FUN_00a8c760(4);
    if (iVar3 != 0) {
      bVar2 = true;
      goto LAB_00834343;
    }
  }
  bVar2 = false;
LAB_00834343:
  iVar3 = FUN_00a94ce0(0);
  if ((iVar3 == 0) && (!bVar2)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00834360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00834370  FUN_00834370  size=1279  [between]
void __fastcall FUN_00834370(int *param_1)

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
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  float10 fVar18;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  switch(param_1[0x187]) {
  case 0:
    param_1[0x6ae] = param_1[0x6ae] + 5;
    param_1[0x3a4] = param_1[0x3a4] | 0x40;
    uVar14 = 0x3e088889;
    uVar15 = 0xbf800000;
    param_1[0x250] = 0;
    param_1[0x251] = 0;
    if (param_1[0x515] == 0x20008) {
      uVar14 = 0x3eaaaaab;
      uVar15 = 0x3f8aaaab;
    }
    FUN_00aa4080(0x6a,0,uVar14,0x3f800000,0x8038000,uVar15,0x3f800000);
    param_1[0x3a4] = param_1[0x3a4] | 0x20;
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_00834420;
  case 1:
LAB_00834420:
    iVar16 = FUN_00a8c760(0x10);
    if (iVar16 != 0) {
      param_1[0x3a4] = param_1[0x3a4] & 0xffffffdf;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar16 = FUN_00a8c760(0);
    if (iVar16 != 0) {
      FUN_008203d0(param_1[0x2a1] + 0x40,0x3e99999a,0x3e567750);
    }
    iVar16 = FUN_00a94ce0(0);
    if (iVar16 != 0) {
      param_1[0x4fd] = 0;
      param_1[0x510] = 0;
      param_1[0x4fc] = 0;
      param_1[0x511] = 0;
      FUN_008e5c50(0xd);
      param_1[0x3a4] = param_1[0x3a4] | 8;
      param_1[0x248] = 0x41a80000;
      param_1[600] = param_1[0x10];
      param_1[0x259] = param_1[0x11];
      param_1[0x25a] = param_1[0x12];
      param_1[0x25b] = param_1[0x13];
      FUN_00aa4080(0x6b,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar16 = FUN_00a94ce0(0);
    if (iVar16 != 0) {
      param_1[0x250] = param_1[0x250] + 1;
    }
    iVar16 = param_1[0x2a1];
    fVar13 = *(float *)(iVar16 + 0x40);
    fVar1 = (float)param_1[0x10];
    fVar2 = *(float *)(iVar16 + 0x44);
    fVar3 = (float)param_1[0x11];
    fVar4 = *(float *)(iVar16 + 0x48);
    fVar5 = (float)param_1[0x12];
    fVar6 = *(float *)(iVar16 + 0x40);
    fVar7 = (float)param_1[600];
    fVar8 = *(float *)(iVar16 + 0x44);
    fVar9 = (float)param_1[0x259];
    fVar10 = *(float *)(iVar16 + 0x48);
    fVar11 = (float)param_1[0x25a];
    FUN_0081fdc0((float)param_1[0x244] * 0.5);
    fVar12 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar12 - (float)param_1[0x244]);
    if (((fVar10 - fVar11) * (fVar4 - fVar5) +
         (fVar6 - fVar7) * (fVar13 - fVar1) + (fVar8 - fVar9) * (fVar2 - fVar3) < 0.0) ||
       (fVar12 - (float)param_1[0x244] <= 0.0)) {
      if ((*(byte *)(param_1 + 0x3a4) & 8) != 0) {
        FUN_008e5c50(7);
        param_1[0x3a4] = param_1[0x3a4] & 0xfffffff7;
      }
      iVar16 = FUN_00826010();
      if (iVar16 != 0) {
        param_1[0x251] = 1;
      }
      iVar16 = FUN_00824560(0x41200000);
      if ((iVar16 != 0) && (param_1[0x251] == 0)) {
        FUN_00aa4080(0x6c,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        param_1[0x187] = param_1[0x187] + 1;
        return;
      }
      FUN_00aa4080(0x6d,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    iVar16 = FUN_00820360();
    if (iVar16 != 0) {
      FUN_008243d0();
      FUN_00824fd0(0x20009);
      return;
    }
    break;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar16 = FUN_00a8c760(0);
    if (iVar16 != 0) {
      FUN_008203d0(param_1[0x2a1] + 0x40,0x3e23d70a,0x3d8efa35);
    }
    iVar16 = 0;
    if (param_1[0x251] != 0) {
      iVar16 = FUN_00a8c760(4);
    }
    iVar17 = FUN_00a94ce0(0);
    if ((iVar17 != 0) || (iVar16 != 0)) {
      if ((float)param_1[0x674] <= 15.0) {
        param_1[0x583] = param_1[0x583] + 1;
        if (param_1[0x251] != 0) {
          FUN_00824fd0(0x20003);
          return;
        }
        if (((((*(byte *)(param_1 + 0x3a4) & 0x10) != 0) && (param_1[0x583] < param_1[0x584])) &&
            (fVar18 = (float10)FUN_008205f0(), fVar18 < (float10)0.7853982)) &&
           ((*(byte *)(param_1 + 0x3a4) & 1) == 0)) {
          FUN_00824fd0(0x20008);
          return;
        }
        param_1[0x583] = 0;
        param_1[0x3a4] = param_1[0x3a4] & 0xffffffef;
        if ((((param_1[0x128] == 0) && (iVar16 = FUN_008302b0(), iVar16 != 0)) &&
            ((fVar18 = (float10)FUN_008205f0(), fVar18 < (float10)0.87266463 &&
             ((fVar13 = (float)param_1[0x2a4], !NAN(fVar13) && 49.0 < fVar13 != (fVar13 == 49.0) &&
              (fVar18 = (float10)FUN_00dde300(0,0x3f800000),
              fVar18 < (float10)(float)param_1[0x611] != (fVar18 == (float10)(float)param_1[0x611]))
              ))))) && (iVar16 = FUN_00833060(), iVar16 != 0)) {
          return;
        }
      }
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00834880  FUN_00834880  size=349  [between]
void __fastcall FUN_00834880(int *param_1)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  float10 fVar4;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x77,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    (**(code **)(*param_1 + 0x314))();
    iVar3 = param_1[0x1d9];
    if ((iVar3 != 0) && (*(int *)(iVar3 + 0x104) != 0)) {
      *(undefined4 *)(iVar3 + 0x104) = 0;
    }
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  if (((param_1[0x128] == 0) && ((*(byte *)(param_1 + 0x2c0) & 2) != 0)) &&
     (iVar3 = FUN_00a8c760(4), iVar3 != 0)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  iVar3 = FUN_00a94ce0(0);
  if ((iVar3 == 0) && (!bVar2)) {
    return;
  }
  if (((param_1[0x128] == 0) && ((param_1[0x3a4] & 0x600000U) == 0)) &&
     ((iVar3 = FUN_00a81330(), iVar3 != 0 &&
      ((((param_1[0x515] != 0xf0005 &&
         (fVar4 = (float10)FUN_008205f0(), fVar4 < (float10)0.87266463)) &&
        (fVar1 = (float)param_1[0x2a4], !NAN(fVar1) && 49.0 < fVar1 != (fVar1 == 49.0))) &&
       ((fVar4 = (float10)FUN_00dde300(0,0x3f800000),
        fVar4 < (float10)(float)param_1[0x611] != (fVar4 == (float10)(float)param_1[0x611]) &&
        (iVar3 = FUN_00833060(), iVar3 != 0)))))))) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x008349d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 008349E0  FUN_008349e0  size=579  [between]
void __fastcall FUN_008349e0(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x7f,0,0x3e088889,0x3f800000,0x8038000,0xbf800000,0x3f800000);
    param_1[0x60b] = param_1[0x60b] + 1;
    if ((param_1[0x60a] <= param_1[0x60b]) && (param_1[0x44e] != 0)) {
      (**(code **)(param_1[0x428] + 8))(0,0,0);
    }
    FUN_00c272a0(0x40a00000);
    FUN_00820ad0();
    FUN_00833600();
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  fVar1 = (float)param_1[0x14];
  fVar2 = (float)param_1[0x15];
  fVar3 = (float)param_1[0x16];
  fVar4 = (float)param_1[0x17];
  FUN_00ac80a0(0x3f800000,0x3f800000);
  param_1[0x14] = (int)(((float)param_1[0x14] - fVar1) * 0.2 + fVar1);
  param_1[0x15] = (int)(((float)param_1[0x15] - fVar2) * 0.2 + fVar2);
  param_1[0x16] = (int)(((float)param_1[0x16] - fVar3) * 0.2 + fVar3);
  param_1[0x17] = (int)(((float)param_1[0x17] - fVar4) * 0.2 + fVar4);
  FUN_00827dd0(param_1 + 0x618,1);
  iVar5 = FUN_00a94ce0(0);
  if (iVar5 != 0) {
    if (param_1[0x60a] <= param_1[0x60b]) {
      if ((param_1[0x3a4] & 0x400U) == 0) {
        param_1[0x3a4] = param_1[0x3a4] | 0x400;
        param_1[0x60d] = (int)((float)param_1[0x60c] * 60.0);
        FUN_00824fd0(0x10009);
      }
      if (param_1[0x422] != 0) {
        (**(code **)(param_1[0x3fc] + 8))(0,0,0);
      }
      param_1[0x60b] = 0;
      return;
    }
    iVar5 = FUN_00ac4780();
    if ((iVar5 != 4) && (param_1[0x6a5] <= param_1[0x6a4])) {
      param_1[0x61e] = (int)((float)param_1[0x625] * 60.0);
      FUN_00825800();
      FUN_00825830(0);
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    FUN_00824fd0(0x2000b);
  }
  return;
}

// 00834C30  FUN_00834c30  size=268  [between]
void __fastcall FUN_00834c30(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x7f,0,0x3eaaaaab,0x3f800000,0x8038000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x182c) = *(int *)(param_1 + 0x182c) + 1;
    if (*(int *)(param_1 + 0x1138) != 0) {
      (**(code **)(*(int *)(param_1 + 0x10a0) + 8))(0,0,0);
    }
    FUN_00820ad0();
    FUN_008338d0();
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    if ((*(uint *)(param_1 + 0xe90) & 0x400) == 0) {
      *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) | 0x400;
      *(float *)(param_1 + 0x1834) = *(float *)(param_1 + 0x1830) * 60.0;
      FUN_00824fd0(0x10009);
    }
    if (*(int *)(param_1 + 0x1088) != 0) {
      (**(code **)(*(int *)(param_1 + 0xff0) + 8))(0,0,0);
    }
    *(undefined4 *)(param_1 + 0x182c) = 0;
  }
  return;
}

// 00834D40  FUN_00834d40  size=1046  [between]
void __fastcall FUN_00834d40(int *param_1)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  undefined *puVar4;
  int iStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  undefined1 local_50 [76];
  
  iVar1 = FUN_00a81330();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = FUN_00a7c8a0();
  }
  if (param_1[0x187] == 0) {
    FUN_00ac8d40(1);
    iVar1 = FUN_00a81330();
    if (((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) &&
       (*(undefined4 **)(iVar1 + 0x370) != (undefined4 *)0x0)) {
      *(uint *)(iVar1 + 0x364) = *(uint *)(iVar1 + 0x364) | 0x400000;
      **(undefined4 **)(iVar1 + 0x370) = 0;
    }
    param_1[0x6aa] = 1;
    param_1[0x3a4] = param_1[0x3a4] | 0x41004;
    if ((int *)param_1[0x2a1] != (int *)0x0) {
      puVar4 = &DAT_01be9c38;
      (**(code **)(*(int *)param_1[0x2a1] + 4))(&DAT_01be9c38);
      iVar1 = FUN_00dd6d80(puVar4);
      if (iVar1 != 0) {
        FUN_00b7ec60();
      }
    }
    FUN_00aa4080(0xd8,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
    if (param_1[0x1d9] != 0) {
      FUN_008e3c10();
    }
    (**(code **)(*param_1 + 0x318))();
    iVar1 = param_1[0x1d9];
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x104) != 1)) {
      *(undefined4 *)(iVar1 + 0x104) = 1;
      *(undefined4 *)(*(int *)(iVar1 + 0xd0) + 4) = 0;
    }
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x188] = 0;
    param_1[0x189] = 0;
    param_1[0x250] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  if (((iVar2 != 0) && (iVar1 = FUN_00ac82f0(), iVar1 == 0)) &&
     ((iVar1 = FUN_00a8c760(0x1c), iVar1 == 0 && (iVar1 = FUN_00a12210(0xf00), iVar1 != 0)))) {
    D3DXMatrixRotationY(local_50,*(undefined4 *)(iVar2 + 0x94));
    D3DXVec3TransformNormal(&stack0xffffff98,iVar1 + 0x50,&fStack_58);
    param_1[0x14] = (int)(fStack_60 + *(float *)(iVar2 + 0x50));
    param_1[0x15] = (int)(*(float *)(iVar2 + 0x54) + fStack_5c);
    param_1[0x16] = (int)(*(float *)(iVar2 + 0x58) + fStack_58);
    param_1[0x17] = (int)(*(float *)(iVar2 + 0x5c) + fStack_54);
    fVar3 = (float10)FUN_00ddba30(*(float *)(iVar1 + 0x94) + *(float *)(iVar2 + 0x94));
    param_1[0x25] = (int)(float)fVar3;
  }
  if (((param_1[0x128] != 0) || ((*(byte *)(param_1 + 0x2c0) & 2) == 0)) &&
     (iVar1 = FUN_00a8c760(0x1f), iVar1 != 0)) {
    FUN_00821d10(0xffffffff);
    FUN_00831d80();
    FUN_008237f0();
    FUN_00c52700(param_1[0x675],1);
  }
  iVar1 = FUN_00ac82f0();
  if (iVar1 == 0) {
    if (param_1[0x250] != 0) {
      param_1[0x250] = 0;
      FUN_00aa4080(0xda,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x188] = 1;
      param_1[0x1af] = 1;
      FUN_00ac80a0(0x3f800000,0x3f800000);
    }
  }
  else {
    if ((param_1[0x128] != 0) || ((*(byte *)(param_1 + 0x2c0) & 2) == 0)) {
      FUN_00831ce0();
    }
    param_1[0x250] = param_1[0x250] + 1;
  }
  if (((param_1[0x188] == 1) && (iVar1 = FUN_00a8c760(10), iVar1 != 0)) && (param_1[0x1d9] != 0)) {
    param_1[0x1af] = 1;
    FUN_008e6d00();
  }
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    if (param_1[0x188] == 0) {
      FUN_00aa4080(0xd9,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x188] = param_1[0x188] + 1;
    }
    else if (param_1[0x188] == 1) {
      if ((param_1[0x128] == 0) && ((*(byte *)(param_1 + 0x2c0) & 2) != 0)) {
        param_1[0x139] = 1;
        FUN_00a8ee20(0);
        iStack_64 = param_1[0x13c];
        param_1[0x1af] = 1;
        DebrisExplodeManager::addHandle(&iStack_64,1);
        param_1[0x187] = param_1[0x187] + 1;
      }
      else {
        param_1[0x139] = 1;
        FUN_00a8ee20(0);
        param_1[0x1af] = 1;
        FUN_00832e30(0);
      }
      (**(code **)(*param_1 + 0x344))(7,0,1);
      FUN_00c27f40(2,0x45e10000);
      param_1[0x188] = param_1[0x188] + 1;
      return;
    }
  }
  return;
}

// 00835170  Emc220::vf19C  size=179  [class]
void __thiscall Emc220::vf19C(int *param_1,int param_2,undefined4 param_3)

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

// 00835230  FUN_00835230  size=197  [between]
undefined4 __thiscall FUN_00835230(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  if (((*(int *)(param_1 + 0x4a0) == 0) && ((*(byte *)(param_1 + 0xb00) & 2) != 0)) &&
     ((*(uint *)(param_1 + 0xe90) & 0x40000) == 0)) {
    return 0;
  }
  uVar1 = *(uint *)(param_2 + 0x90) >> 0x11 & 1;
  if (((*(uint *)(param_2 + 0x8c) & 0x600) == 0) && ((*(uint *)(param_2 + 0x90) & 0x40000) == 0)) {
    if (uVar1 == 0) {
      iVar2 = FUN_00ac82f0();
      if (iVar2 == 0) {
        return 0;
      }
      iVar2 = FUN_00a8e520();
      if (iVar2 == 0) {
        return 0;
      }
      goto LAB_008352c3;
    }
  }
  else if (uVar1 == 0) goto LAB_008352c3;
  if (*(int *)(param_2 + 0x94) == 0) {
    return 0;
  }
  FUN_00821d10(0xffffffff);
  FUN_00831d80();
  FUN_008237f0();
LAB_008352c3:
  if ((*(int *)(param_2 + 0x94) != 0) && (iVar2 = FUN_00ac8cd0(param_2), iVar2 != 0)) {
    FUN_00ac8d00(param_1,param_2,0);
    FUN_00a9ba90(param_2);
    return 1;
  }
  return 0;
}

// 00835300  FUN_00835300  size=2078  [between]
undefined4 __thiscall FUN_00835300(int *param_1,int *param_2,uint *param_3)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iStack_18;
  int *local_8;
  
  if ((param_1[0x3a4] & 0x80000U) != 0) {
    uVar7 = FUN_0082fc10(param_2,param_3);
    return uVar7;
  }
  iVar9 = -1;
  iVar8 = FUN_00a81330();
  local_8 = (int *)0x0;
  if (iVar8 != 0) {
    local_8 = (int *)FUN_00a7c8a0();
  }
  bVar5 = false;
  bVar4 = false;
  iStack_18 = (**(code **)(*param_1 + 0x1d8))();
  if (((((*(byte *)((int)param_2 + 0x8e) & 1) != 0) || (*param_2 == 0x4b)) || (*param_2 == 0x4c)) &&
     (0 < param_1[0x3cf])) {
    *param_3 = *param_3 | 0x40;
    bVar5 = true;
  }
  iVar8 = *param_2;
  if (iVar8 == 0x92) {
    bVar4 = true;
    iStack_18 = 1;
    FUN_00831950(0x3f800000);
    FUN_00830230();
    if ((param_1[0x128] == 0) && ((*(byte *)(param_1 + 0x2c0) & 2) != 0)) {
      param_1[0x3a4] = param_1[0x3a4] | 0x40000;
    }
    else {
      FUN_008237f0();
    }
    iVar8 = *param_2;
    if (iVar8 != 0x92) goto LAB_008353f8;
LAB_00835406:
    bVar4 = true;
    iStack_18 = 1;
    *param_3 = *param_3 & 0xffffffbf | 0x20;
  }
  else {
LAB_008353f8:
    if ((iVar8 == 0x4f) && (0 < param_1[0x3cf])) goto LAB_00835406;
  }
  if (((((param_1[0x128] != 0) || ((*(byte *)(param_1 + 0x2c0) & 2) == 0)) &&
       (iVar8 = FUN_00a8eea0(), 0 < iVar8)) &&
      ((param_1[0x139] == 0 && (param_1[0x69a] <= param_1[0x69b])))) &&
     ((param_1[0x3a4] & 0x80000U) == 0)) {
    *param_3 = *param_3 | 1;
    if (((*(byte *)(param_1 + 0x3a4) & 2) != 0) && (param_1[0x186] == 0x3000a)) {
      return 1;
    }
    param_1[0x3a4] = param_1[0x3a4] | 2;
    param_1[0x527] = param_1[0x52a];
    param_1[0x526] = (int)((float)param_1[0x529] * 60.0);
    param_1[0x528] = 0;
    param_1[0x69b] = 0;
    FUN_00824fd0(0x3000a);
    return 1;
  }
  iVar8 = FUN_008258c0();
  if ((iVar8 != 0) && (param_1[0x69c] == 0)) {
    param_1[0x69c] = 1;
    FUN_00e5e1b0("bgm_pc20_BladeWolf_Finish");
  }
  if (((*(byte *)(param_2 + 0x23) & 1) != 0) && ((float)param_1[0x6ac] <= 0.0)) {
    FUN_00aa92c0(0x18e);
    iVar9 = FUN_00a8eea0();
    if ((0 < iVar9) || (param_1[0x139] != 0)) {
      if (((*(byte *)(param_1 + 0x3a4) & 2) == 0) || (param_1[0x186] != 0x3000a)) {
        param_1[0x3a4] = param_1[0x3a4] | 2;
        param_1[0x527] = param_1[0x52a];
        param_1[0x526] = (int)((float)param_1[0x529] * 60.0);
        param_1[0x528] = 0;
        param_1[0x69b] = 0;
        FUN_00824fd0(0x3000a);
      }
      param_1[0x6ac] = param_1[0x6ad];
      *param_3 = *param_3 | 1;
      return 1;
    }
LAB_00835606:
    FUN_00824fd0(0x60000);
    *param_3 = *param_3 | 1;
    return 1;
  }
  if ((*param_2 == 0x4f) && (param_1[0x139] == 0)) {
    iVar8 = FUN_008258c0();
    if (iVar8 != 0) {
      FUN_00824fd0(0x60003);
      *param_3 = *param_3 | 1;
      return 1;
    }
    iVar8 = FUN_00a8eea0();
    if ((iVar8 < 1) && (param_1[0x139] == 0)) goto LAB_00835606;
    iVar8 = FUN_00a8cab0();
    if (iVar8 == 0x30002) {
      if ((*(byte *)(param_1 + 0x3a4) & 2) == 0) {
        param_1[0x3a4] = param_1[0x3a4] | 2;
        param_1[0x526] = (int)((float)param_1[0x529] * 60.0);
        param_1[0x527] = param_1[0x52a];
        param_1[0x528] = 0;
        FUN_00824fd0(0x30009);
      }
      *param_3 = *param_3 | 1;
      return 1;
    }
  }
  else {
    if (((((*(byte *)(param_1 + 0x3a4) & 0x20) != 0) ||
         (iVar8 = (**(code **)(*param_1 + 0x1fc))(), iVar8 != 0)) || (bVar4)) ||
       (bVar6 = false, bVar5)) {
      bVar6 = true;
    }
    iVar8 = FUN_00a8c760(5);
    if ((iVar8 == 0) && (iVar8 = FUN_00a8c760(6), iVar8 == 0)) {
      bVar2 = 0;
    }
    else {
      bVar2 = 1;
    }
    if ((((param_2[0x24] & 0x18000000U) == 0) && (*param_2 != 0x4b)) && (*param_2 != 0x4c)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (((((*(byte *)(param_1 + 0x3a4) & 0x20) == 0) && (iVar8 = FUN_00a8c760(0x32), iVar8 == 0)) &&
        ((((*(byte *)(param_1 + 0x3a4) & 4) != 0 || (iVar8 = FUN_00a8c760(0x10), iVar8 != 0)) &&
         ((!bVar4 && (!bVar5)))))) ||
       (((iVar8 = FUN_008258c0(), iVar8 != 0 && (*param_2 != 0x92)) ||
        (((param_1[0x139] != 0 || (iVar8 = FUN_008251c0(), iVar8 != 0)) || (*param_2 == 0x59)))))) {
      iVar9 = -1;
    }
    else if ((param_2[0x23] & 0x20000U) == 0) {
      if (bVar6) {
        iVar8 = FUN_00821310(param_2);
        if (iVar8 == 0) {
          iVar8 = (**(code **)(*param_1 + 0x1d8))();
          if ((iVar8 == 0) && (bVar3)) {
            iVar8 = FUN_00a8cab0();
            if ((iVar8 != 0x30007) && (iVar8 = FUN_00a8cab0(), iVar8 != 0x30008)) {
              iVar9 = 0x30008;
            }
            iStack_18 = 1;
          }
          else {
            uVar1 = param_2[0x24];
            if ((uVar1 & 0x800000) == 0) {
              if ((uVar1 & 0x1000000) == 0) {
                if ((*(byte *)((int)param_2 + 0x11) < 10) && ((uVar1 & 0x2000000) == 0))
                goto LAB_0083588c;
                iVar9 = 0x30001;
                iStack_18 = 1;
              }
              else {
                iVar9 = 0x30006;
                iStack_18 = 1;
              }
            }
            else if ((param_1[0x3a4] & 0x10000000U) == 0) {
              iVar9 = 0x30004;
              iStack_18 = 1;
            }
            else {
              iVar9 = (**(code **)(*param_1 + 0x1d8))();
              iVar9 = (-(uint)(iVar9 != 0) & 5) + 0x30000;
            }
          }
        }
        else {
          iVar9 = 0x3000d;
        }
      }
      else {
LAB_0083588c:
        iVar8 = FUN_00822b40();
        if ((iVar8 != 0) ||
           ((((iVar8 = FUN_0082b160(), iVar8 != 0 || (6 < *(byte *)((int)param_2 + 0x11))) ||
             (iVar8 = (**(code **)(*param_1 + 0x1d8))(), iVar8 != 0)) || (bVar4)))) {
          if (((param_1[0x3a4] & 2U) == 0) && ((param_1[0x3a4] & 0x400U) == 0)) {
            iVar9 = (**(code **)(*param_1 + 0x1d8))();
            iVar9 = (-(uint)(iVar9 != 0) & 5) + 0x30000;
            iVar8 = (**(code **)(*param_1 + 0x1d8))();
            if ((iVar8 != 0) &&
               (((bVar6 && (local_8 != (int *)0x0)) &&
                (iVar8 = (**(code **)(*local_8 + 0x1d8))(), iVar8 == 0)))) {
              iVar9 = 0x30001;
            }
          }
          iStack_18 = 1;
        }
      }
    }
    else {
      iVar9 = bVar2 + 0x3000b;
    }
  }
  iVar8 = FUN_008258c0();
  if ((((iVar8 != 0) && (iVar8 = FUN_0082b160(), iVar8 != 0)) && (param_1[0x139] == 0)) &&
     (param_1[0x6aa] == 0)) {
    param_1[0x51c] = 0;
    param_1[0x51d] = 0;
    iVar9 = 0x30001;
  }
  iVar8 = FUN_00a8eea0();
  if (((iVar8 < 1) && (param_1[0x139] == 0)) && (param_1[0x6aa] == 0)) {
    if (*param_2 == 0x92) {
      uVar7 = 0x30008;
LAB_008359b9:
      FUN_00824fd0(uVar7);
      *param_3 = *param_3 | 1;
      return 1;
    }
    if (((iVar9 == 0x30000) || (iVar9 == -1)) ||
       ((iVar8 = FUN_00822410(), iVar8 != 0 && (iVar9 == 0x30001)))) {
      uVar7 = 0x60000;
      goto LAB_008359b9;
    }
  }
  if (iVar9 == 0x30000) {
    iVar8 = FUN_008258c0();
    if (iVar8 == 0) {
      if ((param_1[0x3a4] & 2U) == 0) {
        if ((param_1[0x3a4] & 0x400U) != 0) {
          iVar9 = 0x10009;
        }
      }
      else {
        iVar9 = 0x30009;
      }
      goto LAB_00835ab0;
    }
  }
  else {
    if (iVar9 != -1) {
      if ((*(byte *)(param_1 + 0x3a4) & 2) != 0) {
        param_1[0x3a4] = param_1[0x3a4] & 0xfffffffd;
        param_1[0x526] = 0;
        param_1[0x528] = 0;
      }
      if ((param_1[0x3a4] & 0x400U) != 0) {
        param_1[0x3a4] = param_1[0x3a4] & 0xfffffbff;
        param_1[0x60d] = 0;
      }
      goto LAB_00835ab0;
    }
    if (((((param_1[0x139] != 0) || (iVar9 = FUN_008258c0(), iVar9 == 0)) ||
         (param_1[0x186] == 0x60003)) ||
        ((param_1[0x186] == 0x60004 || (iVar9 = FUN_00416910(6), iVar9 != 0)))) ||
       (iVar9 = (**(code **)(*param_1 + 0x1d8))(), iVar9 != 0)) {
      FUN_0082af20();
      *param_3 = 0x401;
      return 0;
    }
  }
  iVar9 = 0x60003;
LAB_00835ab0:
  FUN_00824fd0(iVar9);
  *param_3 = *param_3 | 1;
  if (iStack_18 != 0) {
    if (bVar4) {
      *param_3 = *param_3 | 0x20;
      return 1;
    }
    if (bVar5) {
      *param_3 = *param_3 | 0x40;
      return 1;
    }
  }
  return 1;
}

// 00835B20  FUN_00835b20  size=1010  [between]
void __fastcall FUN_00835b20(int *param_1)

{
  float fVar1;
  float *pfVar2;
  uint uVar3;
  int iVar4;
  float10 fVar5;
  undefined4 uVar6;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined1 local_20 [28];
  
  switch(param_1[0x187]) {
  case 0:
    if (param_1[0x515] == 0x10007) {
      FUN_00aa4080(10,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x187] = 2;
      return;
    }
    FUN_00aa4080(0xb,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    local_30 = *(float *)(param_1[0x2a1] + 0x40) - (float)param_1[0x10];
    local_28 = *(float *)(param_1[0x2a1] + 0x48) - (float)param_1[0x12];
    pfVar2 = (float *)FUN_00a925a0(local_20);
    local_2c = pfVar2[2] * local_30 - *pfVar2 * local_28;
    fVar5 = (float10)FUN_00dde300(0,0x3f800000);
    param_1[0x248] = (int)(float)((fVar5 + (float10)1.5) * (float10)60.0);
    param_1[0x249] = 0x3fc90fdb;
    param_1[0x24a] = 0x41700000;
    param_1[0x24b] = param_1[0x2a4];
    if (0.0 < local_2c) {
      param_1[0x249] = -0x4036f025;
    }
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_00835c76;
  case 1:
LAB_00835c76:
    FUN_00820490(param_1[0x2a1] + 0x40,param_1[0x249],0x3e4ccccd,0x3db2b8c2);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      FUN_00aa4080(10,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    iVar4 = FUN_00824150();
    if (iVar4 != 0) {
      FUN_00824fd0(0x10007);
      return;
    }
    iVar4 = FUN_008241d0();
    if (iVar4 != 0) {
      FUN_00824fd0(0x20003);
      return;
    }
    FUN_00820590(param_1[0x249],0x3e800000,0x3e0efa35);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
    local_34 = -1.0;
    iVar4 = FUN_00823ea0(&local_34);
    if (((iVar4 != 0) && (0.0 <= local_34)) && (local_34 < 9.0)) {
      fVar1 = (float)param_1[0x24a] - (float)param_1[0x244];
      param_1[0x24a] = (int)fVar1;
      if (fVar1 < 0.0 != (fVar1 == 0.0)) {
        param_1[0x248] = 0;
      }
    }
    if (param_1[0x666] != 0) {
LAB_00835ded:
      FUN_00aa4080(0xc,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    if (((float)param_1[0x248] <= 0.0) || ((float)param_1[0x24b] * 1.5625 < (float)param_1[0x2a4]))
    {
      uVar3 = FUN_00dde2d0(0,100);
      if (((uVar3 & 1) == 0) || ((param_1[0x128] != 0 || (iVar4 = FUN_008302b0(), iVar4 == 0)))) {
        if ((100.0 < (float)param_1[0x2a4]) || (iVar4 = FUN_00833b40(), iVar4 == 0)) {
          if (625.0 < (float)param_1[0x2a4]) goto LAB_00835ded;
          uVar6 = 0x20006;
        }
        else {
          uVar6 = 0x20004;
        }
      }
      else {
        uVar6 = 0x20005;
      }
      FUN_00824fd0(uVar6);
      FUN_00824fd0(0x10006);
      return;
    }
    break;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00835F30  FUN_00835f30  size=1114  [between]
void __fastcall FUN_00835f30(int *param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  float local_34;
  float local_30;
  float local_28;
  undefined1 local_20 [28];
  
  switch(param_1[0x187]) {
  case 0:
    if (param_1[0x515] == 0x10007) {
      FUN_00aa4080(10,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x187] = 2;
      return;
    }
    FUN_00aa4080(0xb,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    local_30 = *(float *)(param_1[0x2a1] + 0x40) - (float)param_1[0x10];
    local_28 = *(float *)(param_1[0x2a1] + 0x48) - (float)param_1[0x12];
    pfVar3 = (float *)FUN_00a925a0(local_20);
    fVar2 = pfVar3[2];
    fVar1 = *pfVar3;
    param_1[0x248] = 0x43700000;
    param_1[0x249] = 0x41700000;
    if (0.0 < fVar2 * local_30 - fVar1 * local_28) {
      param_1[0x249] = -0x4036f025;
    }
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_0083604a;
  case 1:
LAB_0083604a:
    FUN_00820490(param_1[0x2a1] + 0x40,param_1[0x249],0x3e4ccccd,0x3db2b8c2);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      FUN_00aa4080(10,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    iVar5 = FUN_00824150();
    if (iVar5 != 0) {
      FUN_00824fd0(0x10007);
      return;
    }
    fVar2 = (float)param_1[0x2a4];
    if (!NAN(fVar2) && 324.0 < fVar2 != (fVar2 == 324.0)) {
      FUN_00824fd0(0x10003);
      return;
    }
    FUN_00820590(param_1[0x249],0x3e800000,0x3e0efa35);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
    local_34 = -1.0;
    iVar5 = FUN_00823ea0(&local_34);
    if (((iVar5 != 0) && (0.0 <= local_34)) && (local_34 < 9.0)) {
      fVar2 = (float)param_1[0x24a] - (float)param_1[0x244];
      param_1[0x24a] = (int)fVar2;
      if (fVar2 < 0.0 != (fVar2 == 0.0)) {
        param_1[0x248] = 0;
      }
    }
    if (param_1[0x666] != 0) {
      FUN_00aa4080(0xc,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
    if (((param_1[0x3a4] & 0x20000U) != 0) &&
       (fVar2 = (float)param_1[0x249], param_1[0x249] = (int)(fVar2 - (float)param_1[0x244]),
       fVar2 - (float)param_1[0x244] <= 0.0)) {
      uVar4 = FUN_00dde2d0(0,100);
      if (((uVar4 & 1) == 0) || ((param_1[0x128] != 0 || (iVar5 = FUN_008302b0(), iVar5 == 0)))) {
        if ((100.0 < (float)param_1[0x2a4]) || (iVar5 = FUN_00833b40(), iVar5 == 0)) {
          if (625.0 < (float)param_1[0x2a4]) {
            FUN_00aa4080(0xc,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
            param_1[0x187] = param_1[0x187] + 1;
            goto LAB_00836308;
          }
          uVar6 = 0x20006;
        }
        else {
          uVar6 = 0x20004;
        }
      }
      else {
        uVar6 = 0x20005;
      }
      FUN_00824fd0(uVar6);
      FUN_00824fd0(0x10006);
    }
LAB_00836308:
    if ((float)param_1[0x248] <= 0.0) {
      FUN_00aa4080(0xc,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 008363A0  Emc220::vf33C  size=2868  [class]
void __thiscall Emc220::vf33C(int *param_1,int *param_2,uint *param_3)

{
  bool bVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  float *pfVar7;
  undefined4 uVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;
  uint uStack_68;
  uint uStack_64;
  int iStack_5c;
  int aiStack_48 [2];
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  undefined1 auStack_20 [28];
  
  param_3[6] = 0x42220;
  if ((param_1[0x128] == 0) && ((*(byte *)(param_1 + 0x2c0) & 2) != 0)) {
    FUN_00941240(param_1[0x20f],1);
  }
  iVar4 = (**(code **)(*param_1 + 0x1d8))();
  if (iVar4 == 0) {
    iVar5 = FUN_00a8c760(0x34);
    iVar4 = 0;
    if (iVar5 != 0) goto LAB_00836401;
  }
  else {
LAB_00836401:
    iVar4 = 1;
  }
  param_2[2] = iVar4;
  iVar4 = FUN_00a8c760(0x34);
  param_2[3] = (uint)(iVar4 != 0);
  *param_2 = 0;
  param_2[1] = 0;
  iVar4 = param_1[0x663] + 1;
  FUN_00831950(0x3f800000);
  iStack_5c = 0;
  bVar1 = false;
  aiStack_48[0] = 0;
  bVar3 = true;
  uStack_68 = 0;
  uStack_64 = 1;
  do {
    uVar11 = 0x80000000 >> ((byte)uStack_68 & 0x1f);
    uVar10 = uStack_68 >> 5;
    uVar6 = param_3[uVar10 + 4] & uVar11;
    if ((uVar6 == 0) || ((param_3[uVar10 + 2] & uVar11) == 0)) {
      if ((uStack_68 == 1) || (uStack_68 == 0xe)) {
        bVar1 = true;
      }
      if ((uStack_68 != 1) && (((int)uStack_68 < 10 || (0xf < (int)uStack_68)))) {
        if ((uVar6 == 0) || ((param_3[uVar10] & uVar11) != 0)) {
          aiStack_48[0] = 1;
        }
        iStack_5c = iStack_5c + 1;
      }
    }
    if (bVar3) {
      if (uStack_68 < 0x20) {
        bVar13 = (param_1[0x3a5] & uStack_64) != 0;
      }
      else {
        bVar13 = false;
      }
      if (uVar6 == 0) {
        bVar14 = false;
      }
      else {
        bVar14 = (param_3[uVar10] & uVar11) == 0;
      }
      if (bVar13 == bVar14) {
        if (uStack_68 < 0x20) {
          bVar13 = (param_1[0x3a6] & uStack_64) != 0;
        }
        else {
          bVar13 = false;
        }
        if (uVar6 == 0) {
          bVar14 = false;
        }
        else {
          bVar14 = (param_3[uVar10 + 2] & uVar11) != 0;
        }
        if (bVar13 == bVar14) goto LAB_00836569;
      }
      bVar3 = false;
    }
LAB_00836569:
    uStack_68 = uStack_68 + 1;
    uStack_64 = uStack_64 << 1 | (uint)((int)uStack_64 < 0);
  } while ((int)uStack_68 < 0x10);
  if (bVar1) {
    iStack_5c = iStack_5c + 1;
  }
  uStack_64 = 0;
  uStack_68 = 0;
  uVar6 = param_3[4];
  uVar10 = uVar6 >> 0x18 & 1;
  if ((uVar10 == 0) || ((*(byte *)((int)param_3 + 0xb) & 1) == 0)) {
    uStack_64 = 1;
  }
  uVar11 = uVar6 >> 0x19 & 1;
  if ((uVar11 == 0) || ((param_3[2] >> 0x19 & 1) == 0)) {
    uStack_64 = uStack_64 + 1;
  }
  uVar12 = uVar6 >> 0x16 & 1;
  if ((uVar12 == 0) || ((param_3[2] >> 0x16 & 1) == 0)) {
    uStack_64 = uStack_64 + 1;
  }
  uVar6 = uVar6 >> 0x17 & 1;
  if ((uVar6 == 0) || ((param_3[2] >> 0x17 & 1) == 0)) {
    uStack_64 = uStack_64 + 1;
  }
  if (((uVar10 == 0) || ((~*(byte *)((int)param_3 + 3) & 1) == 0)) &&
     ((uVar10 == 0 || ((*(byte *)((int)param_3 + 0xb) & 1) == 0)))) {
    uStack_68 = 1;
  }
  if ((uVar11 == 0) ||
     (((~(*param_3 >> 0x19) & 1) == 0 && ((uVar11 == 0 || ((param_3[2] >> 0x19 & 1) == 0)))))) {
    uStack_68 = uStack_68 + 1;
  }
  if ((uVar12 == 0) ||
     (((~(*param_3 >> 0x16) & 1) == 0 && ((uVar12 == 0 || ((param_3[2] >> 0x16 & 1) == 0)))))) {
    uStack_68 = uStack_68 + 1;
  }
  if ((uVar6 == 0) ||
     (((~(*param_3 >> 0x17) & 1) == 0 && ((uVar6 == 0 || ((param_3[2] >> 0x17 & 1) == 0)))))) {
    uStack_68 = uStack_68 + 1;
  }
  if (((bVar1) && (2 < iStack_5c)) &&
     (((aiStack_48[0] != 0 || (3 < iStack_5c)) &&
      (((1 < uStack_68 || (2 < uStack_64)) || (3 < iStack_5c)))))) {
    if ((DAT_01bea060 & 0x2000000) == 0) {
      fStack_40 = (float)param_1[0x65c] - (float)param_1[0x10];
      fStack_3c = (float)param_1[0x65d] - (float)param_1[0x11];
      fStack_38 = (float)param_1[0x65e] - (float)param_1[0x12];
      fStack_34 = (float)param_1[0x65f] - (float)param_1[0x13];
      fVar2 = fStack_38 * fStack_38 + fStack_40 * fStack_40 + fStack_3c * fStack_3c;
      if (fVar2 < 0.0 == (fVar2 == 0.0)) {
        FUN_00ddf460(&fStack_40,&fStack_40);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        fStack_40 = 0.0;
        fStack_3c = 1.0;
        fStack_38 = 0.0;
      }
      pfVar7 = (float *)FUN_00a925a0(auStack_20);
      fVar2 = pfVar7[2] * fStack_38 + *pfVar7 * fStack_40 + pfVar7[1] * fStack_3c;
      if (ABS(fVar2) < 0.25) {
        pfVar7 = (float *)FUN_00a925a0(auStack_20);
        fVar2 = pfVar7[2] * (float)param_1[0x65a] +
                *pfVar7 * (float)param_1[0x658] + pfVar7[1] * (float)param_1[0x659];
      }
      bVar1 = 0.0 <= (float)param_1[0x65a] * 0.0 +
                     (float)param_1[0x658] * 0.0 + (float)param_1[0x659];
      aiStack_48[0] = FUN_008300d0(&fStack_30,param_2);
      uVar6 = param_3[4] >> 0x1e & 1;
      if (((uVar6 == 0) || ((param_3[2] >> 0x1e & 1) == 0)) &&
         (((param_3[4] & 0x20000) == 0 || ((param_3[2] >> 0x11 & 1) == 0)))) {
        if (((uVar6 == 0) || ((~(*param_3 >> 0x1e) & 1) == 0)) &&
           (iVar5 = FUN_0043f830(0xe), iVar5 == 0)) {
          if ((1 < iVar4) || (iVar4 = FUN_00822c40(), iVar4 != 0)) {
            iVar4 = FUN_0043f830(0);
            if ((iVar4 == 0) && (iVar4 = FUN_0043f860(0), iVar4 == 0)) {
              if ((((*(byte *)(param_1 + 0x3a5) & 4) != 0) || (iVar4 = FUN_0043f830(2), iVar4 == 0))
                 && (!bVar3)) {
                *param_2 = 0x21;
                param_3[6] = 0x2c220;
                return;
              }
              *param_2 = 0x20;
              param_3[6] = 0x2c220;
              return;
            }
            *param_2 = 0x16;
            param_3[6] = 0x2c220;
            return;
          }
          iVar4 = FUN_0043f830(0);
          if (iVar4 != 0) {
            if (uStack_68 == 0) {
              *param_2 = 9;
              param_3[6] = 0x2c220;
              return;
            }
            iVar4 = FUN_0043f830(7);
            *param_2 = 0xb - (uint)(iVar4 != 0);
            param_3[6] = 0x2c220;
            return;
          }
          iVar4 = FUN_0043f830(7);
          if (iVar4 != 0) {
            *param_2 = 0x19;
            param_3[6] = 0x2c220;
            return;
          }
          iVar4 = FUN_0043f830(6);
          if (iVar4 != 0) {
            *param_2 = 0x1a;
            param_3[6] = 0x2c220;
            return;
          }
          iVar4 = FUN_0043f830(9);
          if (iVar4 != 0) {
            *param_2 = 0x1b;
            param_3[6] = 0x2c220;
            return;
          }
          iVar4 = FUN_0043f830(8);
          if (iVar4 != 0) {
            *param_2 = 0x1c;
            param_3[6] = 0x2c220;
            return;
          }
          iVar4 = FUN_0043f830(2);
          if (iVar4 == 0) {
            iVar4 = FUN_0043f830(0);
            if ((iVar4 == 0) && (iVar4 = FUN_0043f830(5), iVar4 != 0)) {
              *param_2 = 0x1e;
              param_3[6] = 0x2c220;
              return;
            }
            param_3[6] = 0x2c220;
            *param_2 = 0;
            return;
          }
          *param_2 = 0x1d;
          param_3[6] = 0x2c220;
          return;
        }
        if ((iVar4 < 2) && (iVar4 = FUN_00822c40(), iVar4 == 0)) {
          iVar4 = FUN_0043f830(0xd);
          if ((iVar4 != 0) && (iVar4 = FUN_0043f830(0xf), iVar4 != 0)) {
            iVar4 = FUN_0043f830(10);
            if (((((iVar4 != 0) && (iVar4 = FUN_0043f830(0xb), iVar4 != 0)) &&
                 (iVar4 = FUN_0043f830(0xc), iVar4 != 0)) &&
                ((iVar4 = FUN_0043f860(10), iVar4 == 0 && (iVar4 = FUN_0043f860(0xb), iVar4 == 0))))
               && (iVar4 = FUN_0043f860(0xc), iVar4 == 0)) {
              pfVar7 = (float *)FUN_00a92640(auStack_20);
              if (0.0 <= pfVar7[2] * fStack_28 + fStack_30 * *pfVar7 + pfVar7[1] * fStack_2c) {
                *param_2 = 7;
                param_3[6] = 0x2c220;
                return;
              }
              *param_2 = 8;
              param_3[6] = 0x2c220;
              return;
            }
            iVar4 = FUN_0043f830(5);
            if ((iVar4 == 0) && (iVar4 = FUN_0043f860(5), iVar4 == 0)) {
              *param_2 = (uint)bVar1 * 2 + 3;
              param_3[6] = 0x2c220;
              return;
            }
            *param_2 = (uint)bVar1 * 2 + 4;
            param_3[6] = 0x2c220;
            return;
          }
          if (aiStack_48[0] == 0) {
            iVar4 = FUN_0043f830(0xd);
            if ((((iVar4 != 0) || (iVar4 = FUN_0043f860(0xd), iVar4 != 0)) &&
                (iVar4 = FUN_0043f830(0xf), iVar4 == 0)) && (iVar4 = FUN_0043f860(0xf), iVar4 == 0))
            {
LAB_00836c46:
              *param_2 = (uint)(fVar2 < 0.0) * 2 + 0xc;
              param_3[6] = 0x2c220;
              return;
            }
          }
          else if (fStack_28 * 0.0 + fStack_30 * 0.0 + fStack_2c < 0.0) goto LAB_00836c46;
          *param_2 = (uint)(fVar2 < 0.0) * 2 + 0xd;
          param_3[6] = 0x2c220;
          return;
        }
        iVar4 = FUN_0043f860(5);
        if (((iVar4 == 0) || (iVar4 = FUN_0043f860(2), iVar4 == 0)) || (2 < uStack_64)) {
          bVar3 = false;
          if (aiStack_48[0] == 0) {
            iVar4 = FUN_0043f830(0xd);
            if (((iVar4 != 0) || (iVar4 = FUN_0043f860(0xd), iVar4 != 0)) &&
               ((iVar4 = FUN_0043f830(0xf), iVar4 == 0 && (iVar4 = FUN_0043f860(0xf), iVar4 == 0))))
            {
              bVar3 = true;
            }
          }
          else if (0.0 <= fStack_28 * 0.0 + fStack_30 * 0.0 + fStack_2c) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          iVar4 = FUN_0043f830(10);
          if (((iVar4 != 0) && (iVar4 = FUN_0043f830(0xb), iVar4 != 0)) &&
             (iVar4 = FUN_0043f830(0xc), iVar4 != 0)) {
            if (!bVar3) {
              *param_2 = 0x15;
              param_3[6] = 0x2c220;
              return;
            }
            *param_2 = 0x14;
            param_3[6] = 0x2c220;
            return;
          }
          iVar4 = FUN_0043f830(0xd);
          if ((iVar4 == 0) || (iVar4 = FUN_0043f830(0xf), iVar4 == 0)) {
            *param_2 = 0x13 - (uint)bVar3;
            param_3[6] = 0x2c220;
            return;
          }
          iVar4 = FUN_0043f830(5);
          if ((iVar4 == 0) && (iVar4 = FUN_0043f860(5), iVar4 == 0)) {
            *param_2 = 0x10;
            param_3[6] = 0x2c220;
            return;
          }
          *param_2 = 0x11;
          param_3[6] = 0x2c220;
          return;
        }
      }
    }
    else {
      if ((param_1[0x3a4] & 0x400000U) == 0) {
        iVar5 = FUN_00a81330();
        if (iVar5 != 0) {
          uVar8 = FUN_00a7c8a0();
          piVar9 = (int *)FUN_0055ce40(uVar8);
          if (piVar9 != (int *)0x0) {
            (**(code **)(*piVar9 + 0xd8))(1);
            if ((undefined4 *)piVar9[0xdc] != (undefined4 *)0x0) {
              piVar9[0xd9] = piVar9[0xd9] | 0x400000;
              *(undefined4 *)piVar9[0xdc] = 0;
            }
            FUN_00ac8b20(0);
            aiStack_48[0] = piVar9[0x13c];
            DebrisExplodeManager::addHandle(aiStack_48,0);
          }
        }
        param_1[0x3a4] = param_1[0x3a4] | 0x400000;
      }
      if ((((iVar4 < 3) && (((param_3[4] & 0x40000000) == 0 || ((param_3[2] >> 0x1e & 1) == 0)))) &&
          (((param_3[4] & 0x20000) == 0 || ((param_3[2] >> 0x11 & 1) == 0)))) &&
         (((iVar4 = FUN_00a8cab0(), iVar4 == 0xf0007 || (iVar4 = FUN_00a8cab0(), iVar4 == 0xf0008))
          || (iVar4 = FUN_00a8cab0(), iVar4 == 0x80005)))) {
        param_3[6] = 0x2c220;
        *param_2 = 0x22;
      }
    }
  }
  return;
}

// 00836EE0  FUN_00836ee0  size=269  [callgraph]
void __fastcall FUN_00836ee0(int *param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  
  if (param_1[0x187] == 0) {
    uVar3 = 0x8000000;
    fVar1 = (float)param_1[0x2a4];
    if (!NAN(fVar1) && 64.0 < fVar1 != (fVar1 == 64.0)) {
      uVar3 = 0x8000080;
    }
    if ((param_1[0x3a4] & 0x100000U) != 0) {
      uVar3 = uVar3 | 0x40;
    }
    FUN_00aa4080(0x139,0,0x3e088889,0x3f800000,uVar3,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x250] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  iVar2 = FUN_00a8c760(0);
  if (iVar2 != 0) {
    FUN_008203d0(param_1[0x2a1] + 0x40,0x3e75c28f,0x3db2b8c2);
  }
  iVar2 = FUN_00a8c760(8);
  if (iVar2 != 0) {
    iVar2 = param_1[0x250];
    param_1[0x250] = iVar2 + 1;
    FUN_008332d0(iVar2);
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00836feb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00836FF0  FUN_00836ff0  size=1003  [callgraph]
void __fastcall FUN_00836ff0(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0xd9,0,0,0x3f800000,0x8038000,0xbf800000,0x3f800000);
    FUN_00aa4080(0xdb,1,0,0x3f800000,0x8000010,0xbf800000,0x3f800000);
    iVar2 = param_1[0x248];
    FUN_00a92f90();
    iVar1 = FUN_00e26e90();
    if (iVar1 != 0) {
      Animation::Motion::Unit::setCurrentTime(0,iVar2);
    }
    if (param_1[0x1d9] != 0) {
      FUN_008e3c10();
    }
    param_1[0x3a4] = param_1[0x3a4] | 0x40000;
    (**(code **)(*param_1 + 0x344))(7,1,1);
    FUN_00c27f40(2,0x45e10000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x3f800000;
    param_1[0x188] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  if ((param_1[0x188] == 0) && (iVar2 = FUN_00ac82f0(), iVar2 == 0)) {
    param_1[0x1af] = 1;
    param_1[0x188] = 1;
    FUN_00a94bc0(1,0x3e088889);
    if (((char)param_1[0x3a6] < '\0') || ((param_1[0x3a6] & 0x200U) != 0)) {
      uVar4 = 0xd6;
    }
    else {
      uVar4 = 0xda;
    }
    FUN_00aa4080(uVar4,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    if (param_1[0x294] == 0) {
      FUN_00a92f90();
      FUN_00e36b50(0,2,0);
    }
    FUN_00a96030(0,0x3f800000);
  }
  if (((param_1[0x188] == 1) && (iVar2 = FUN_00a8c760(10), iVar2 != 0)) && (param_1[0x1d9] != 0)) {
    FUN_008e6d00();
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 == 0) {
    return;
  }
  if (param_1[0x128] == 0) {
    if ((*(byte *)(param_1 + 0x2c0) & 2) != 0) {
      param_1[0x187] = 2;
      param_1[0x139] = 1;
      FUN_00a8ee20(0);
      param_1[0x1af] = 1;
      return;
    }
    if ((*(byte *)(param_1 + 0x2c0) & 2) == 0) goto LAB_00837295;
    FUN_00824fd0(0x60000);
    FUN_00a8cb60(2);
    param_1[0x139] = 1;
    FUN_00a8ee20(0);
    param_1[0x1af] = 1;
  }
  else {
LAB_00837295:
    if (param_1[0x294] == 0) goto LAB_008373c5;
    FUN_00ac8e10(1);
    if ((*(byte *)((int)param_1 + 0xe92) & 1) != 0) {
      FUN_00a8c9b0(0,2,0x3f800000,0);
      param_1[0x3a4] = param_1[0x3a4] & 0xfffeffff;
    }
    if ((param_1[0x3a4] & 0x8000U) == 0) {
      FUN_00e02240(param_1[0x13c],3);
      param_1[0x3a4] = param_1[0x3a4] | 0x8000;
    }
    (**(code **)(*param_1 + 0x20))();
    if (param_1[0x6a0] != 0) {
      param_1[0x6a0] = 0;
      FUN_00a8c9b0(0,0x197,0,0);
    }
    iVar2 = FUN_00a81330();
    if ((iVar2 != 0) && (piVar3 = (int *)FUN_00a7c8a0(), piVar3 != (int *)0x0)) {
      (**(code **)(*piVar3 + 0x20))();
    }
    param_1[0x1af] = 1;
    FUN_00824fd0(0x60002);
    if (param_1[0x1d9] != 0) {
      FUN_008e3c10();
    }
    iVar2 = FUN_00e5e0c0("em0220_se_dmg_explosion",param_1,0xffffffff,0);
    param_1[0x6a3] = iVar2;
    FUN_00940450(param_1[0x20f]);
    if ((param_1[0x128] != 0) || ((*(byte *)(param_1 + 0x2c0) & 2) == 0)) {
      (**(code **)(*param_1 + 0x364))(0xffffffff);
    }
  }
  if (param_1[0x294] != 0) {
    return;
  }
LAB_008373c5:
  FUN_00a805f0();
  param_1[0x187] = param_1[0x187] + 1;
  return;
}

// 00837F40  FUN_00837f40  size=116  [callgraph]
void __fastcall FUN_00837f40(int param_1)

{
  undefined1 local_160 [348];
  
  if ((*(byte *)(param_1 + 0xe92) & 1) == 0) {
    FUN_004039a0(2,param_1,0);
    FUN_00a963e0(local_160);
    FUN_00e5e0c0("em0220_se_dmg_spark",param_1,0xffffffff,0);
    *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) | 0x10000;
    (**(code **)(*(int *)(param_1 + 0xf40) + 8))(0x3f800000,0,0);
  }
  return;
}

// 00837FC0  FUN_00837fc0  size=62  [callgraph]
void __fastcall FUN_00837fc0(int param_1)

{
  int iVar1;
  undefined1 local_160 [348];
  
  iVar1 = FUN_00ac89d0();
  if (iVar1 == 0) {
    iVar1 = param_1;
  }
  FUN_004117d0(0,iVar1,param_1 + 0xf40);
  FUN_00a963e0(local_160);
  return;
}

// 00838000  FUN_00838000  size=74  [callgraph]
void __fastcall FUN_00838000(int param_1)

{
  undefined4 uVar1;
  undefined1 local_160 [348];
  
  if (*(int *)(param_1 + 0x1a80) == 0) {
    *(undefined4 *)(param_1 + 0x1a80) = 1;
    uVar1 = FUN_00a8c890(0);
    FUN_004117d0(0x197,param_1,uVar1);
    FUN_00a963e0(local_160);
  }
  return;
}

// 00838050  FUN_00838050  size=49  [callgraph]
bool __fastcall FUN_00838050(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x4a0) != 0) || ((*(byte *)(param_1 + 0xb00) & 2) == 0)) {
    iVar1 = FUN_00a90070(5);
    if (iVar1 == 0) {
      return false;
    }
  }
  iVar1 = FUN_00833ba0();
  return iVar1 != 0;
}

// 00838090  FUN_00838090  size=380  [callgraph]
void __fastcall FUN_00838090(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  float10 fVar4;
  
  if (param_1[0x187] == 0) {
    uVar3 = 0x1b;
    if (param_1[0x51b] == 2) {
      if (param_1[0x4b0] == 0) {
        uVar3 = 0x1d;
      }
    }
    else if ((param_1[0x51b] == 3) && (param_1[0x4bc] == 0)) {
      uVar3 = 0x1c;
    }
    param_1[0x51c] = 0;
    FUN_00aa4080(uVar3,0,0x3e088889,0x3f800000,0x8038000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a8c760(0);
  if (iVar1 != 0) {
    FUN_008203d0(param_1[0x2a1] + 0x40,0x3e800000,0x3e0efa35);
  }
  iVar1 = FUN_00a8c760(9);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x220))(0x40a00000);
  }
  iVar1 = FUN_00a94ce0(0);
  if ((iVar1 != 0) || (iVar1 = FUN_00a8c760(4), iVar1 != 0)) {
    fVar4 = (float10)FUN_00a8ec30(param_1[0x2a1] + 0x40);
    fVar4 = (float10)FUN_00ddba30((float)((float10)(float)param_1[0x25] - fVar4));
    if ((float10)0.61086524 <= ABS(fVar4)) {
      FUN_00824fd0(0x10005);
      return;
    }
    uVar2 = FUN_00dde2d0(0,100);
    if (((uVar2 & 1) == 0) || (iVar1 = FUN_00838050(), iVar1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0083820a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00838210  FUN_00838210  size=639  [callgraph]
void __fastcall FUN_00838210(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *local_4;
  
  local_4 = param_1;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0xb5,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00837f40();
    if ((param_1[0x128] == 0) && ((*(byte *)(param_1 + 0x2c0) & 2) != 0)) {
      DAT_01bea094 = DAT_01bea094 | 0x40000000;
      DAT_01bea090 = DAT_01bea090 | 0x80c400;
    }
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x250] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a8c760(10);
  if (iVar1 != 0) {
    param_1[0x1af] = 1;
  }
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    param_1[0x1af] = 1;
    if (param_1[0x128] == 0) {
      if ((*(byte *)(param_1 + 0x2c0) & 2) != 0) {
        local_4 = (int *)param_1[0x13c];
        param_1[0x187] = param_1[0x187] + 1;
        DebrisExplodeManager::addHandle(&local_4,1);
        return;
      }
      if ((*(byte *)(param_1 + 0x2c0) & 2) != 0) {
        FUN_00824fd0(0x60000);
        FUN_00a8cb60(2);
        param_1[0x139] = 1;
        FUN_00a8ee20(0);
        param_1[0x1af] = 1;
        return;
      }
    }
    if (param_1[0x294] != 0) {
      FUN_00ac8e10(1);
      if ((*(byte *)((int)param_1 + 0xe92) & 1) != 0) {
        FUN_00a8c9b0(0,2,0x3f800000,0);
        param_1[0x3a4] = param_1[0x3a4] & 0xfffeffff;
      }
      if ((param_1[0x3a4] & 0x8000U) == 0) {
        FUN_00e02240(param_1[0x13c],3);
        param_1[0x3a4] = param_1[0x3a4] | 0x8000;
      }
      (**(code **)(*param_1 + 0x20))();
      if (param_1[0x6a0] != 0) {
        param_1[0x6a0] = 0;
        FUN_00a8c9b0(0,0x197,0,0);
      }
      iVar1 = FUN_00a81330();
      if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
        (**(code **)(*piVar2 + 0x20))();
      }
      param_1[0x1af] = 1;
      FUN_00824fd0(0x60002);
      if (param_1[0x1d9] != 0) {
        FUN_008e3c10();
      }
      iVar1 = FUN_00e5e0c0("em0220_se_dmg_explosion",param_1,0xffffffff,0);
      param_1[0x6a3] = iVar1;
      FUN_00940450(param_1[0x20f]);
      if ((param_1[0x128] != 0) || ((*(byte *)(param_1 + 0x2c0) & 2) == 0)) {
        (**(code **)(*param_1 + 0x364))(0xffffffff);
      }
    }
  }
  return;
}

// 00838490  FUN_00838490  size=583  [callgraph]
void __fastcall FUN_00838490(int *param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  int *local_4;
  
  local_4 = param_1;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0xa9,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x248] = 0x41f00000;
    FUN_00837f40();
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar1 = (float)param_1[0x248];
  param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
  if (fVar1 - (float)param_1[0x244] <= 0.0) {
    param_1[0x1af] = 1;
    if (param_1[0x128] == 0) {
      if ((*(byte *)(param_1 + 0x2c0) & 2) != 0) {
        local_4 = (int *)param_1[0x13c];
        param_1[0x187] = param_1[0x187] + 1;
        DebrisExplodeManager::addHandle(&local_4,1);
        return;
      }
      if ((*(byte *)(param_1 + 0x2c0) & 2) != 0) {
        FUN_00824fd0(0x60000);
        FUN_00a8cb60(2);
        param_1[0x139] = 1;
        FUN_00a8ee20(0);
        param_1[0x1af] = 1;
        return;
      }
    }
    if (param_1[0x294] != 0) {
      FUN_00ac8e10(1);
      if ((*(byte *)((int)param_1 + 0xe92) & 1) != 0) {
        FUN_00a8c9b0(0,2,0x3f800000,0);
        param_1[0x3a4] = param_1[0x3a4] & 0xfffeffff;
      }
      if ((param_1[0x3a4] & 0x8000U) == 0) {
        FUN_00e02240(param_1[0x13c],3);
        param_1[0x3a4] = param_1[0x3a4] | 0x8000;
      }
      (**(code **)(*param_1 + 0x20))();
      if (param_1[0x6a0] != 0) {
        param_1[0x6a0] = 0;
        FUN_00a8c9b0(0,0x197,0,0);
      }
      iVar2 = FUN_00a81330();
      if ((iVar2 != 0) && (piVar3 = (int *)FUN_00a7c8a0(), piVar3 != (int *)0x0)) {
        (**(code **)(*piVar3 + 0x20))();
      }
      param_1[0x1af] = 1;
      FUN_00824fd0(0x60002);
      if (param_1[0x1d9] != 0) {
        FUN_008e3c10();
      }
      iVar2 = FUN_00e5e0c0("em0220_se_dmg_explosion",param_1,0xffffffff,0);
      param_1[0x6a3] = iVar2;
      FUN_00940450(param_1[0x20f]);
      if ((param_1[0x128] != 0) || ((*(byte *)(param_1 + 0x2c0) & 2) == 0)) {
        (**(code **)(*param_1 + 0x364))(0xffffffff);
      }
    }
  }
  return;
}

// 008386E0  FUN_008386e0  size=639  [callgraph]
void __fastcall FUN_008386e0(int param_1)

{
  float fVar1;
  float fVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  float10 fVar6;
  
  if (((*(int *)(param_1 + 0x1350) != 0) && ((*(uint *)(param_1 + 0x1454) & 0xffff0000) != 0x50000))
     && (uVar4 = FUN_00dde2d0(0,100), (uVar4 & 1) != 0)) {
    uVar4 = FUN_00dde2d0(0,100);
    if ((uVar4 & 1) == 0) {
LAB_00838729:
      FUN_00824fd0(0x50002);
      return;
    }
LAB_00838952:
    FUN_00824fd0(0x50001);
    return;
  }
  iVar5 = FUN_008241d0();
  if (iVar5 != 0) {
    FUN_00824fd0(0x20003);
    return;
  }
  fVar6 = (float10)FUN_00a8ec30(*(int *)(param_1 + 0xa84) + 0x40);
  fVar6 = (float10)FUN_00ddba30((float)((float10)*(float *)(param_1 + 0x94) - fVar6));
  fVar6 = ABS(fVar6);
  fVar1 = (float)fVar6;
  if ((float10)1.0471976 < fVar6 != ((float10)1.0471976 == fVar6)) {
    uVar4 = FUN_00dde2d0(0,100);
    if (((uVar4 & 1) != 0) && (*(int *)(param_1 + 0x1260) == 0)) {
      FUN_00824fd0(0x1000d);
      return;
    }
    fVar6 = (float10)fVar1;
  }
  if ((float10)0.7853982 <= fVar6) {
    if (*(int *)(param_1 + 0x1848) < 4) {
      FUN_00824fd0(0x10005);
      return;
    }
  }
  else {
    if (((*(int *)(param_1 + 0x4a0) != 0) || ((*(byte *)(param_1 + 0xb00) & 2) == 0)) &&
       (fVar2 = *(float *)(param_1 + 0x1a88), !NAN(fVar2) && 30.0 < fVar2 != (fVar2 == 30.0))) {
      if (144.0 < *(float *)(param_1 + 0xa90)) {
        FUN_00824fd0(0x10003);
        return;
      }
      if (*(int *)(param_1 + 0x1454) != 0x10013) {
        FUN_00824fd0(0x10013);
        return;
      }
    }
    if (25.0 < *(float *)(param_1 + 0xa90)) {
      if (((*(float *)(param_1 + 0xa90) <= 225.0) && (*(float *)(param_1 + 0x1614) <= 0.0)) &&
         (iVar5 = FUN_00833b40(), iVar5 != 0)) {
        *(float *)(param_1 + 0x1614) = *(float *)(param_1 + 0x1890) * 60.0;
        *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) | 0x10;
        sVar3 = FUN_00dde2d0(3,5);
        *(int *)(param_1 + 0x1610) = (int)sVar3;
        FUN_00824fd0(0x20008);
        return;
      }
      iVar5 = FUN_00838050();
      if (iVar5 != 0) {
        return;
      }
      fVar2 = *(float *)(param_1 + 0xa90);
      if (!NAN(fVar2) && 144.0 < fVar2 != (fVar2 == 144.0)) {
        FUN_00832d10();
        return;
      }
      fVar2 = *(float *)(param_1 + 0xa90);
      if (!NAN(fVar2) && 64.0 < fVar2 != (fVar2 == 64.0)) {
        FUN_00824fd0(0x10002);
        return;
      }
      if (NAN(fVar1) || 0.34906584 < fVar1 == (fVar1 == 0.34906584)) {
        return;
      }
      iVar5 = FUN_00822430();
      if (iVar5 != 0) goto LAB_00838729;
      goto LAB_00838952;
    }
    if (*(int *)(param_1 + 0x1290) != 0) {
      FUN_00824fd0(0x10008);
      return;
    }
  }
  FUN_00824fd0(0x50000);
  return;
}

// 00838960  FUN_00838960  size=81  [callgraph]
void __fastcall FUN_00838960(int param_1)

{
  float fVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    return;
  }
  if ((((*(int *)(param_1 + 0x4a0) == 0) && ((*(byte *)(param_1 + 0xb00) & 2) != 0)) ||
      (iVar2 = FUN_00a90070(5), iVar2 != 0)) && (iVar2 = FUN_00833ba0(), iVar2 != 0)) {
    return;
  }
  fVar1 = *(float *)(param_1 + 0xa90);
  if (NAN(fVar1) || 169.0 < fVar1 == (fVar1 == 169.0)) {
    return;
  }
  FUN_00832d10();
  return;
}

// 008389C0  FUN_008389c0  size=513  [callgraph]
void __fastcall FUN_008389c0(int param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  float10 fVar4;
  
  *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
  if (*(int *)(param_1 + 0x61c) == 2) {
    if (((*(int *)(param_1 + 0x4a0) != 0) || ((*(byte *)(param_1 + 0xb00) & 2) == 0)) &&
       (*(float *)(param_1 + 0x19c0) < -15.0)) {
      iVar2 = FUN_00aa4a90();
      if (iVar2 != 0) {
        FUN_00824fd0(0x1000f);
      }
    }
    fVar1 = *(float *)(param_1 + 0x1a88);
    if (NAN(fVar1) || 30.0 < fVar1 == (fVar1 == 30.0)) {
      fVar4 = (float10)FUN_00a8ec30(*(int *)(param_1 + 0xa84) + 0x40);
      fVar4 = (float10)FUN_00ddba30((float)((float10)*(float *)(param_1 + 0x94) - fVar4));
      if ((float10)1.3089969 <= ABS(fVar4)) {
        FUN_00824fd0(0x10006);
        return;
      }
      if (((*(int *)(param_1 + 0x4a0) == 1) && (*(float *)(param_1 + 0x1878) <= 0.0)) &&
         ((*(int *)(param_1 + 0x1350) == 0 &&
          ((fVar1 = *(float *)(param_1 + 0xa90), !NAN(fVar1) && 64.0 < fVar1 != (fVar1 == 64.0) &&
           (*(float *)(param_1 + 0xa90) <= 506.25)))))) {
        iVar2 = FUN_008302b0();
        if (iVar2 != 0) {
          iVar2 = FUN_00c158c0();
          if ((iVar2 != 0) && (*(float *)(param_1 + 0x1a88) <= 0.0)) {
            *(undefined4 *)(param_1 + 0x182c) = 0;
            *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) & 0xfffff7ff;
            uVar3 = FUN_00dde2d0(0,100);
            if ((uVar3 & 3) == 0) {
              *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) | 0x800;
            }
            FUN_00824fd0(0x2000a);
            return;
          }
        }
      }
      iVar2 = FUN_00838050();
      if ((iVar2 == 0) &&
         ((fVar1 = *(float *)(param_1 + 0xa90), !NAN(fVar1) && 30.25 < fVar1 != (fVar1 == 30.25) &&
          (*(float *)(param_1 + 0xa90) <= 64.0)))) {
        fVar4 = (float10)FUN_008205f0();
        if (fVar4 < (float10)0.7853982 != (fVar4 == (float10)0.7853982)) {
          iVar2 = FUN_00833b40();
          if (iVar2 != 0) {
            FUN_00824fd0(0x20004);
          }
        }
      }
    }
    else if (((*(int *)(param_1 + 0x4a0) != 0) || ((*(byte *)(param_1 + 0xb00) & 2) == 0)) &&
            (*(float *)(param_1 + 0xa90) <= 100.0)) {
      FUN_00824fd0(0x10013);
      return;
    }
  }
  return;
}

// 00838BD0  FUN_00838bd0  size=918  [callgraph]
void __fastcall FUN_00838bd0(int param_1)

{
  int iVar1;
  int iVar2;
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
    if (*(int *)(param_1 + 0x1454) == 0x10007) {
      FUN_00aa4080(10,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      *(undefined4 *)(param_1 + 0x61c) = 2;
      return;
    }
    FUN_00aa4080(0xb,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 1:
    iVar1 = FUN_00a979f0(&local_4c);
    if (iVar1 != 0) {
      local_40 = local_4c;
      local_3c = local_48;
      local_38 = local_44;
      local_34 = 0x3f800000;
      FUN_008203d0(&local_40,0x3e800000,0x3dd67750);
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00aa09c0(*(int *)(param_1 + 0xa84) + 0x40,0x40200000,1);
    if ((iVar1 != 0) && (iVar1 = FUN_00a8d380(), iVar1 != 0)) {
      FUN_00824fd0(0x10003);
      return;
    }
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_00aa4080(10,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      return;
    }
    break;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a979f0(&local_4c);
    if (iVar1 != 0) {
      local_30 = local_4c;
      local_2c = local_48;
      local_28 = local_44;
      local_24 = 0x3f800000;
      FUN_008203d0(&local_30,0x3e99999a,0x3e32b8c2);
    }
    iVar1 = FUN_00932720();
    if ((iVar1 == 0x410) && (iVar1 = FUN_00824150(), iVar1 != 0)) {
      FUN_00824fd0(0x10007);
      return;
    }
    local_50 = 0x40200000;
    iVar1 = FUN_00a8d3d0(5);
    if ((((iVar1 != 0) || (iVar1 = FUN_00a8d3d0(10), iVar1 != 0)) ||
        (iVar1 = FUN_00a8d3d0(8), iVar1 != 0)) ||
       (iVar2 = FUN_00a8d3d0(7), iVar1 = local_50, iVar2 != 0)) {
      iVar1 = 0x3f800000;
    }
    iVar1 = FUN_00aa09c0(*(int *)(param_1 + 0xa84) + 0x40,iVar1,1);
    if (iVar1 != 0) {
      iVar1 = FUN_00a8d380();
      if (iVar1 != 0) {
        FUN_00824fd0(0x10003);
        return;
      }
      iVar1 = FUN_00a8d3d0(5);
      if (((iVar1 != 0) || (iVar1 = FUN_00a8d3d0(10), iVar1 != 0)) ||
         ((iVar1 = FUN_00a8d3d0(8), iVar1 != 0 || (iVar1 = FUN_00a8d3d0(7), iVar1 != 0)))) {
        FUN_00a979f0(&local_4c);
        local_20 = local_4c;
        local_1c = local_48;
        local_18 = local_44;
        local_14 = 0x3f800000;
        FUN_00837e60(&local_20,0x40000000);
        *(undefined4 *)(param_1 + 0x61c) = 3;
        return;
      }
    }
    break;
  case 3:
    local_50 = 0;
    FUN_00824a80(&local_50);
    if (local_50 != 0) {
      FUN_00c70800();
      *(undefined4 *)(param_1 + 0x61c) = 2;
      FUN_00aa4080(10,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    }
  }
  return;
}

// 00838F80  FUN_00838f80  size=1084  [callgraph]
void __fastcall FUN_00838f80(int *param_1)

{
  int iVar1;
  int iVar2;
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
    if (param_1[0x515] == 0x10007) {
      FUN_00aa4080(10,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x187] = 2;
      return;
    }
    FUN_00aa4080(0xb,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    iVar2 = FUN_00a979f0(&local_4c);
    if (iVar2 != 0) {
      local_40 = local_4c;
      local_3c = local_48;
      local_38 = local_44;
      local_34 = 0x3f800000;
      FUN_008203d0(&local_40,0x3e800000,0x3dd67750);
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00aa09c0(param_1[0x2a1] + 0x40,0x40200000,1);
    if ((iVar2 != 0) && (iVar2 = FUN_00a8d380(), iVar2 != 0)) {
      FUN_00824fd0(0x10003);
      return;
    }
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_00aa4080(10,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a979f0(&local_4c);
    if (iVar2 != 0) {
      local_30 = local_4c;
      local_2c = local_48;
      local_28 = local_44;
      local_24 = 0x3f800000;
      FUN_008203d0(&local_30,0x3e99999a,0x3e32b8c2);
    }
    iVar2 = FUN_00932720();
    if ((iVar2 == 0x410) && (iVar2 = FUN_00824150(), iVar2 != 0)) {
      FUN_00824fd0(0x10007);
      return;
    }
    local_50 = 0x40200000;
    iVar2 = FUN_00a8d3d0(5);
    if ((((iVar2 != 0) || (iVar2 = FUN_00a8d3d0(10), iVar2 != 0)) ||
        (iVar2 = FUN_00a8d3d0(8), iVar2 != 0)) ||
       (iVar1 = FUN_00a8d3d0(7), iVar2 = local_50, iVar1 != 0)) {
      iVar2 = 0x3f800000;
    }
    iVar2 = FUN_00aa09c0(param_1[0x2a1] + 0x40,iVar2,1);
    if (iVar2 != 0) {
      iVar2 = FUN_00a8d380();
      if (iVar2 != 0) goto LAB_00839220;
      iVar2 = FUN_00a8d3d0(5);
      if (((iVar2 != 0) || (iVar2 = FUN_00a8d3d0(10), iVar2 != 0)) ||
         ((iVar2 = FUN_00a8d3d0(8), iVar2 != 0 || (iVar2 = FUN_00a8d3d0(7), iVar2 != 0)))) {
        FUN_00a979f0(&local_4c);
        local_20 = local_4c;
        local_1c = local_48;
        local_18 = local_44;
        local_14 = 0x3f800000;
        FUN_00837e60(&local_20,0x40000000);
        param_1[0x187] = 3;
        return;
      }
    }
    if (param_1[0x4d4] == 0) {
      FUN_00824fd0(0x90003);
      return;
    }
    if ((float)param_1[0x2a4] <= 100.0) {
LAB_00839220:
      FUN_00aa4080(0xc,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x187] = 4;
      return;
    }
    break;
  case 3:
    local_50 = 0;
    FUN_00824a80(&local_50);
    if (local_50 != 0) {
      FUN_00c70800();
      param_1[0x187] = 2;
      FUN_00aa4080(10,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
      return;
    }
    break;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      (**(code **)(*param_1 + 0x34c))();
    }
  }
  return;
}

// 008393D0  FUN_008393d0  size=2834  [callgraph]
void __fastcall FUN_008393d0(int *param_1)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  float *pfVar9;
  undefined4 uVar10;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  int iStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  
  (**(code **)(*param_1 + 0x220))(0x40a00000);
  iVar6 = param_1[0x6af];
  switch(param_1[0x187]) {
  case 0:
    if (param_1[0x1d9] != 0) {
      FUN_008e59c0(2);
    }
    if (iVar6 != 0) {
      FUN_00aa4080(5,0,0,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x187] = 2;
      return;
    }
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00aa4080(0xb,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x187] = 3;
    return;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (iVar6 == 0) {
      param_1[0x187] = 1;
      return;
    }
    break;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar6 = FUN_00a94db0(0xb);
    if (iVar6 != 0) {
      FUN_00aa4080(10,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
    }
    pfVar9 = &fStack_24;
    FUN_00a92f90(pfVar9);
    FUN_0044fd10(pfVar9);
    fVar1 = SQRT(fStack_1c * fStack_1c + fStack_20 * fStack_20 + fStack_24 * fStack_24) *
            (float)param_1[0x244];
    fVar8 = (float10)FUN_00a581b0(&fStack_3c,fVar1,param_1[0x249]);
    param_1[0x249] = (int)(float)fVar8;
    FUN_00a585a0(&fStack_30,fVar1,(float)fVar8);
    fVar1 = (float)param_1[0x25];
    fVar8 = (float10)fpatan((float10)fStack_30,(float10)fStack_28);
    fVar8 = (float10)FUN_00ddba30((float)(fVar8 - (float10)fVar1));
    fVar8 = (float10)FUN_00ddba30((float)(fVar8 * (float10)0.2 + (float10)fVar1));
    param_1[0x25] = (int)(float)fVar8;
    param_1[0x14] = (int)fStack_3c;
    param_1[0x16] = (int)fStack_34;
    iVar6 = FUN_00a54a60(param_1[0x249]);
    if (iVar6 == 0) {
      return;
    }
    iVar6 = FUN_00a8d820();
    if (iVar6 == 0) {
      pcVar2 = *(code **)(*param_1 + 0x20);
      param_1[0x187] = 0xb;
      (*pcVar2)();
      return;
    }
    goto LAB_00839856;
  case 4:
    FUN_00a8d6c0(param_1 + 0x10);
    iVar6 = FUN_00a8d770();
    if ((iVar6 == 0) || (cVar5 = FUN_00c9d9a0(1), cVar5 == '\0')) {
      FUN_00aa4120(10,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x187] = 10;
      return;
    }
    (**(code **)(*param_1 + 0x318))();
    iVar6 = param_1[0x1d9];
    if ((iVar6 != 0) && (*(int *)(iVar6 + 0x104) != 1)) {
      *(undefined4 *)(iVar6 + 0x104) = 1;
      *(undefined4 *)(*(int *)(iVar6 + 0xd0) + 4) = 0;
    }
    FUN_00c9da70();
    FUN_00a8d790(&fStack_3c);
    param_1[0x534] = (int)fStack_3c;
    param_1[0x535] = (int)fStack_38;
    param_1[0x536] = (int)fStack_34;
    param_1[0x537] = 0x3f800000;
    FUN_00837960(param_1 + 0x550,param_1 + 0x10,param_1 + 0x534,0x3fb33333,0);
    FUN_00aa4080(0x20,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    if (param_1[0x1d9] != 0) {
      FUN_008e0ae0(0);
    }
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_008203d0(param_1 + 0x534,0x3ecccccd,0x3eb2b8c2);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar6 = FUN_00a94ce0(0);
    if (iVar6 != 0) {
      FUN_00aa4080(0x21,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00a96030(0,0x3f99999a);
      FUN_00a581b0(&fStack_3c,0,0x40000000);
      uVar10 = 0;
      param_1[600] = (int)((float)param_1[0x14] - fStack_3c);
      param_1[0x259] = (int)((float)param_1[0x15] - fStack_38);
      param_1[0x25a] = (int)((float)param_1[0x16] - fStack_34);
      param_1[0x249] = 0;
      FUN_00a92f90(0);
      fVar8 = (float10)FUN_0043f390(uVar10);
      param_1[0x24a] = (int)(float)fVar8;
LAB_00839856:
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 6:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    uVar10 = 0;
    FUN_00a92f90(0);
    fVar7 = (float10)FUN_00407b40(uVar10);
    fVar7 = fVar7 / (float10)(float)param_1[0x24a];
    param_1[0x249] = (int)(float)fVar7;
    fVar8 = (float10)1;
    if (fVar8 < fVar7 != (fVar8 == fVar7)) {
      param_1[0x249] = (int)(float)fVar8;
    }
    FUN_00a581b0(&fStack_3c,0,param_1[0x249]);
    FUN_00a585a0(&fStack_30,0,param_1[0x249]);
    fVar1 = (float)param_1[0x25];
    fVar8 = (float10)fpatan((float10)fStack_30,(float10)fStack_28);
    fVar8 = (float10)FUN_00ddba30((float)(fVar8 - (float10)fVar1));
    fVar8 = (float10)FUN_00ddba30((float)(fVar8 * (float10)0.2 + (float10)fVar1));
    param_1[0x25] = (int)(float)fVar8;
    param_1[0x14] = (int)fStack_3c;
    param_1[0x15] = (int)fStack_38;
    param_1[0x16] = (int)fStack_34;
    iVar6 = FUN_00a94ce0(0);
    if (iVar6 != 0) {
      FUN_00aa4080(0x22,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00a96030(0,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x24b] = 0;
      param_1[0x24c] = 0x3c888889;
      return;
    }
    break;
  case 7:
    param_1[0x24b] = (int)((float)param_1[0x24c] * (float)param_1[0x244] + (float)param_1[0x24b]);
    fVar8 = (float10)FUN_00fdc1f0();
    param_1[0x24c] = (int)(float)(fVar8 * (float10)(float)param_1[0x24c]);
    fVar1 = (float)param_1[0x24b] / (float)param_1[0x24a];
    bVar3 = NAN(fVar1);
    bVar4 = 1.0 < fVar1 != (fVar1 == 1.0);
    if (!bVar3 && bVar4) {
      fVar1 = 1.0;
    }
    FUN_00a581b0(&fStack_3c,0,fVar1 + 1.0);
    FUN_00a585a0(&fStack_30,0,fVar1 + 1.0);
    fVar1 = (float)param_1[0x25];
    fVar8 = (float10)fpatan((float10)fStack_30,(float10)fStack_28);
    fVar8 = (float10)FUN_00ddba30((float)(fVar8 - (float10)fVar1));
    fVar8 = (float10)FUN_00ddba30((float)(fVar8 * (float10)0.2 + (float10)fVar1));
    param_1[0x25] = (int)(float)fVar8;
    param_1[0x14] = (int)fStack_3c;
    param_1[0x15] = (int)fStack_38;
    param_1[0x16] = (int)fStack_34;
    if (!bVar3 && bVar4) {
      FUN_00aa4080(0x23,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x187] = 9;
      return;
    }
    break;
  case 8:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar6 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar6 != 0) {
      FUN_00aa4080(0x23,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 9:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar6 = FUN_00a94ce0(0);
    if (iVar6 != 0) {
      iVar6 = FUN_00a8d770();
      if ((iVar6 == 0) || (cVar5 = FUN_00c9d9a0(1), cVar5 == '\0')) {
        FUN_00c9da70();
        FUN_00aa4080(10,0,0x3e4ccccd,0x3f800000,0,0xbf800000,0x3f800000);
        param_1[0x187] = 10;
        if (param_1[0x1d9] != 0) {
          FUN_008e0ae0(1);
          return;
        }
      }
      else {
        FUN_00c9da70();
        FUN_00a8d790(&fStack_3c);
        param_1[0x534] = (int)fStack_3c;
        param_1[0x535] = (int)fStack_38;
        param_1[0x536] = (int)fStack_34;
        param_1[0x537] = 0x3f800000;
        FUN_00837960(param_1 + 0x550,param_1 + 0x10,param_1 + 0x534,0x41600000,0);
        FUN_00aa4080(0x20,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        if (param_1[0x1d9] != 0) {
          FUN_008e0ae0(0);
        }
        pcVar2 = *(code **)(*param_1 + 0x314);
        param_1[0x187] = 5;
        (*pcVar2)();
        iVar6 = param_1[0x1d9];
        if ((iVar6 != 0) && (*(int *)(iVar6 + 0x104) != 0)) {
          *(undefined4 *)(iVar6 + 0x104) = 0;
          return;
        }
      }
    }
    break;
  case 10:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00a8d790(&fStack_3c);
    fStack_24 = fStack_3c;
    fStack_20 = fStack_38;
    fStack_1c = fStack_34;
    uStack_18 = 0x3f800000;
    FUN_008203d0(&fStack_24,0x3e4ccccd,0x3e0efa35);
    iVar6 = FUN_00a97e60(0x40400000,1);
    if (iVar6 != 0) {
      iVar6 = FUN_00a8d800();
      if (iVar6 == 0) {
        pcVar2 = *(code **)(*param_1 + 0x20);
        param_1[0x187] = 0xb;
        (*pcVar2)();
        return;
      }
      iVar6 = FUN_00a8d770();
      if ((iVar6 != 0) && (cVar5 = FUN_00c9d9a0(1), cVar5 != '\0')) {
        FUN_00c9da70();
        FUN_00a8d790(&fStack_30);
        param_1[0x534] = (int)fStack_30;
        param_1[0x535] = iStack_2c;
        param_1[0x536] = (int)fStack_28;
        param_1[0x537] = 0x3f800000;
        (**(code **)(*param_1 + 0x318))();
        iVar6 = param_1[0x1d9];
        if ((iVar6 != 0) && (*(int *)(iVar6 + 0x104) != 1)) {
          *(undefined4 *)(iVar6 + 0x104) = 1;
          *(undefined4 *)(*(int *)(iVar6 + 0xd0) + 4) = 0;
        }
        FUN_00837960(param_1 + 0x550,param_1 + 0x10,param_1 + 0x534,0x41600000,0);
        FUN_00aa4080(0x20,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        if (param_1[0x1d9] != 0) {
          FUN_008e0ae0(0);
        }
        param_1[0x187] = 5;
      }
    }
  }
  return;
}

// 00839F10  Emc220::vf334  size=2307  [class]
void __thiscall Emc220::vf334(int *param_1,int param_2,int *param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  float *pfVar9;
  uint uVar10;
  float10 fVar11;
  undefined *puVar12;
  undefined4 uVar13;
  float local_178;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  undefined1 auStack_160 [272];
  undefined4 uStack_50;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_1c;
  
  EmBaseDLC::vf334(param_2,param_3);
  if (param_3 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    puVar12 = &DAT_01be9ca0;
    (**(code **)(*param_3 + 4))(&DAT_01be9ca0);
    iVar5 = FUN_00dd6d80(puVar12);
    uVar3 = -(uint)(iVar5 != 0) & (uint)param_3;
  }
  bVar2 = false;
  if (uVar3 != 0) {
    piVar4 = (int *)FUN_00acdea0();
    if (piVar4 != (int *)0x0) {
      puVar12 = &DAT_01b35a10;
      (**(code **)(*piVar4 + 4))(&DAT_01b35a10);
      iVar5 = FUN_00dd6d80(puVar12);
      if (iVar5 == 0) {
        piVar4 = (int *)0x0;
      }
      else {
        if (piVar4 != param_1) {
          FUN_0040ac60(piVar4 + 0x2ac);
          param_1[0x663] = piVar4[0x663];
          param_1[0x658] = piVar4[0x658];
          param_1[0x659] = piVar4[0x659];
          param_1[0x65a] = piVar4[0x65a];
          param_1[0x65b] = piVar4[0x65b];
          param_1[0x65c] = piVar4[0x65c];
          param_1[0x65d] = piVar4[0x65d];
          param_1[0x65e] = piVar4[0x65e];
          param_1[0x65f] = piVar4[0x65f];
          param_1[0x6aa] = piVar4[0x6aa];
          FUN_00820090(piVar4);
          iVar5 = piVar4[0x20f];
          param_1[0x147] = iVar5;
          param_1[0x20f] = iVar5;
          if ((piVar4[0x3a4] & 0x100000U) == 0) {
            param_1[0x3a4] = param_1[0x3a4] & 0xffefffff;
          }
          else {
            param_1[0x3a4] = param_1[0x3a4] | 0x100000;
          }
          if ((piVar4[0x3a4] & 0x4000000U) == 0) {
            param_1[0x3a4] = param_1[0x3a4] & 0xfbffffff;
          }
          else {
            param_1[0x3a4] = param_1[0x3a4] | 0x4000000;
          }
          uVar6 = FUN_00a8eea0();
          FUN_00a8ee20(uVar6);
          param_1[0x3a7] = piVar4[0x3a7];
          param_1[0x3ac] = piVar4[0x3ac];
          param_1[0x3b1] = piVar4[0x3b1];
          param_1[0x3b6] = piVar4[0x3b6];
          param_1[0x3bb] = piVar4[0x3bb];
          param_1[0x3c0] = piVar4[0x3c0];
          param_1[0x3c5] = piVar4[0x3c5];
          param_1[0x3ca] = piVar4[0x3ca];
        }
        iVar5 = FUN_00a92f90();
        if (iVar5 != 0) {
          FUN_00a92f90();
          iVar5 = FUN_00e26e90();
          if (iVar5 == 0) {
            fVar11 = (float10)-1.0;
          }
          else {
            fVar11 = (float10)FUN_00e36970(0);
          }
          param_1[0x248] = (int)(float)fVar11;
        }
      }
    }
    iVar5 = FUN_00ac8a30();
    if (((iVar5 != 0) && (piVar4 != (int *)0x0)) && (*(int *)(iVar5 + 0xc) != 0)) {
      bVar2 = true;
      uVar6 = FUN_00a95df0(0);
      local_178 = -1.0;
      iVar5 = FUN_00a92f90();
      if ((iVar5 != 0) && (iVar5 = FUN_00a92f90(), (*(byte *)(iVar5 + 0x94) & 1) != 0)) {
        uVar13 = 0;
        FUN_00a92f90(0);
        fVar11 = (float10)FUN_00407b40(uVar13);
        local_178 = (float)fVar11;
      }
      FUN_00a9e290(uVar6,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00a95e60(0,local_178);
    }
  }
  puVar7 = (undefined4 *)FUN_009f8b60();
  FUN_00ac8a80(*puVar7);
  FUN_009fd240();
  if (*(int *)(param_2 + 0x370) != 0) {
    FUN_00a1abe0(0);
  }
  iVar5 = 0;
  param_1[0x3cf] = 0;
  piVar4 = param_1 + 0x3a7;
  do {
    if (*piVar4 != 0) {
      if (((iVar5 == 6) || (iVar5 == 5)) && ((param_1[0x3a4] & 0x800000U) != 0)) {
        param_1[0x3a4] = param_1[0x3a4] & 0xff7fffff;
        FUN_00a93910(1);
      }
      param_1[0x3cf] = param_1[0x3cf] + 1;
      FUN_00821d10(iVar5);
    }
    iVar5 = iVar5 + 1;
    piVar4 = piVar4 + 5;
  } while (iVar5 < 8);
  iVar5 = FUN_00ac8a30();
  if (iVar5 != 0) {
    uVar10 = 0;
    uVar3 = 1;
    do {
      iVar5 = FUN_00a10040(uVar10);
      if (iVar5 == 2) {
        if (uVar10 < 0x20) {
          param_1[0x3a6] = param_1[0x3a6] | uVar3;
LAB_0083a28f:
          if (uVar10 < 0x20) {
            param_1[0x3a5] = param_1[0x3a5] | uVar3;
          }
        }
      }
      else {
        iVar5 = FUN_00a10040(uVar10);
        if (iVar5 == 1) goto LAB_0083a28f;
      }
      uVar10 = uVar10 + 1;
      uVar3 = uVar3 << 1 | (uint)((int)uVar3 < 0);
    } while ((int)uVar10 < 0x10);
  }
  if ((*(byte *)(param_1 + 0x3a5) & 4) != 0) {
    param_1[0x3a4] = param_1[0x3a4] | 0x200000;
  }
  if ((*(byte *)(param_1 + 0x3a5) & 0x10) != 0) {
    param_1[0x3a4] = param_1[0x3a4] | 0x400000;
  }
  param_1[0x6a8] = 4;
  uVar3 = param_1[0x3a5];
  if ((uVar3 & 0x40) != 0) {
    param_1[0x6a8] = 3;
  }
  if ((char)uVar3 < '\0') {
    param_1[0x6a8] = param_1[0x6a8] + -1;
  }
  if ((uVar3 & 0x100) != 0) {
    param_1[0x6a8] = param_1[0x6a8] + -1;
  }
  if ((uVar3 & 0x200) != 0) {
    param_1[0x6a8] = param_1[0x6a8] + -1;
  }
  pcVar1 = *(code **)(*param_1 + 0x1d8);
  iVar5 = -1;
  param_1[0x661] = 0;
  param_1[0x662] = 0;
  local_178 = (float)(*pcVar1)();
  piVar4 = (int *)FUN_00ac8a30();
  if (piVar4 != (int *)0x0) {
    param_1[0x661] = *piVar4;
    param_1[0x662] = piVar4[1];
    if (piVar4[2] != 0) {
      local_178 = 1.4013e-45;
    }
  }
  switch(param_1[0x661]) {
  case 1:
  case 0x15:
    iVar5 = 0x80002;
    param_1[0x660] = 0x136;
    break;
  case 3:
  case 0xd:
    iVar5 = 0x80002;
    param_1[0x660] = 0x101;
    break;
  case 4:
    iVar5 = 0x80002;
    param_1[0x660] = 0x102;
    break;
  case 5:
  case 0xc:
    iVar5 = 0x80002;
    param_1[0x660] = 0xfd;
    break;
  case 6:
  case 0xe:
    iVar5 = 0x80002;
    param_1[0x660] = 0xfe;
    break;
  case 7:
    iVar5 = 0x80002;
    param_1[0x660] = 0xff;
    break;
  case 8:
    iVar5 = 0x80002;
    param_1[0x660] = 0x100;
    break;
  case 9:
  case 0xf:
    iVar5 = 0x80002;
    param_1[0x660] = 0xb5;
    break;
  case 10:
  case 0xb:
    iVar5 = 0x80002;
    param_1[0x660] = 0xfb;
    break;
  case 0x10:
    iVar5 = 0x80002;
    param_1[0x660] = 0x13b;
    break;
  case 0x11:
    iVar5 = 0x80002;
    param_1[0x660] = 0x13c;
    break;
  case 0x12:
    iVar5 = 0x80002;
    param_1[0x660] = 0x13d;
    break;
  case 0x13:
  case 0x14:
    iVar5 = 0x80002;
    param_1[0x660] = 0x13e;
    break;
  case 0x16:
    iVar5 = 0x80002;
    param_1[0x660] = 0x141;
    break;
  case 0x17:
    iVar5 = 0x80001;
    param_1[0x660] = 0x9b;
    break;
  case 0x18:
    iVar5 = 0x80001;
    param_1[0x660] = 0x9e;
    break;
  case 0x19:
  case 0x1a:
    iVar5 = 0x80001;
    param_1[0x660] = 0xfb;
    break;
  case 0x1b:
  case 0x1c:
    iVar5 = 0x80001;
    param_1[0x660] = 0xfc;
    break;
  case 0x1d:
    iVar5 = 0x80001;
    param_1[0x660] = 0x9c;
    break;
  case 0x1e:
    iVar5 = 0x80001;
    param_1[0x660] = 0x9d;
    break;
  case 0x20:
    iVar5 = -1;
    FUN_0082af20();
    break;
  case 0x21:
    iVar5 = 0x80001;
    param_1[0x660] = 0x131;
    break;
  case 0x22:
    iVar5 = 0x80005;
    param_1[0x6ab] = 1;
  }
  if (param_1[0x661] == 0x1e) {
    param_1[0x3a4] = param_1[0x3a4] | 0x4000000;
  }
  if ((iVar5 == -1) || (iVar5 == 0x80001)) {
    piVar4 = (int *)FUN_00ac89d0();
    if (piVar4 == (int *)0x0) {
      piVar4 = param_1;
    }
    FUN_00e01ca0();
    uStack_50 = 0;
    uStack_1c = 0xffffffff;
    FUN_00dffad0(0);
    FUN_00e020f0(piVar4[0x13c]);
    FUN_00dffb30(param_1 + 0x3d0);
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    FUN_00a963e0(auStack_160);
  }
  if ((param_1[0x662] == 1) && (iVar8 = FUN_008300d0(&fStack_170,0), iVar8 != 0)) {
    param_1[0x14] = (int)((float)param_1[0x14] + fStack_170 * -0.1);
    param_1[0x15] = (int)(fStack_16c * -0.1 + (float)param_1[0x15]);
    param_1[0x16] = (int)(fStack_168 * -0.1 + (float)param_1[0x16]);
    param_1[0x17] = (int)(fStack_164 * -0.1 + (float)param_1[0x17]);
  }
  if ((param_1[0x661] == 0x14) && (param_1[0x1d9] != 0)) {
    pfVar9 = (float *)FUN_008e0d60();
    fStack_170 = *pfVar9;
    fStack_168 = pfVar9[2];
    fStack_164 = pfVar9[3];
    fStack_16c = pfVar9[1] * 0.7;
    FUN_008e0d30(&fStack_170);
  }
  if ((iVar5 == 0x80001) && (param_1[0x139] != 0)) {
    iVar5 = 0x80002;
  }
  if (local_178 != 0.0) {
    if (iVar5 == 0x80002) {
      iVar5 = 0x80004;
    }
    else if (iVar5 == 0x80001) {
      iVar5 = 0x80003;
    }
  }
  iVar8 = param_1[0x661];
  if (((iVar8 == 0x1a) || (iVar8 == 0x1c)) || (iVar8 == 0xb)) {
    param_1[0x3a4] = param_1[0x3a4] | 0x100000;
  }
  iVar8 = param_1[0x661];
  if (((iVar8 != 0x17) && (iVar8 != 0x18)) && ((iVar8 != 0x1d && (iVar8 != 0x1e)))) {
    param_1[0x663] = param_1[0x663] + 1;
  }
  FUN_0082fe30();
  if ((param_1[0x128] == 0) && ((*(byte *)(param_1 + 0x2c0) & 2) != 0)) {
    FUN_00ac8d40(1);
  }
  iVar8 = FUN_00a81330();
  if (((iVar8 != 0) && (iVar8 = FUN_00a7c8a0(), iVar8 != 0)) &&
     (*(undefined4 **)(iVar8 + 0x370) != (undefined4 *)0x0)) {
    *(uint *)(iVar8 + 0x364) = *(uint *)(iVar8 + 0x364) | 0x400000;
    **(undefined4 **)(iVar8 + 0x370) = 0;
  }
  param_1[0x3a4] = param_1[0x3a4] | 0x40000;
  if ((iVar5 == 0x80002) || (iVar5 == 0x80004)) {
    pcVar1 = *(code **)(*param_1 + 0x344);
    param_1[0x139] = 1;
    (*pcVar1)(7,1,1);
    FUN_00c27f40(2,0x45e10000);
  }
  if (bVar2) {
    iVar5 = (param_1[0x139] != 0) + 0x80007;
  }
  else if (iVar5 == -1) {
    if ((param_1[0x3a4] & 0x80000U) == 0) goto LAB_0083a7d0;
    iVar5 = 0x80000;
  }
  FUN_00824fd0(iVar5);
LAB_0083a7d0:
  iVar5 = FUN_00821c50();
  if (((iVar5 == 0) || (param_1[0x139] != 0)) && (param_1[0x6a0] != 0)) {
    param_1[0x6a0] = 0;
    FUN_00a8c9b0(0,0x197,0,0);
  }
  return;
}

// 0083A8A0  FUN_0083a8a0  size=563  [between]
void __fastcall FUN_0083a8a0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  float10 fVar7;
  int *local_18c;
  int local_188;
  float local_180 [3];
  undefined4 local_174;
  float local_170;
  float local_16c;
  float local_168;
  undefined4 local_164;
  undefined1 local_160 [348];
  
  iVar3 = FUN_00a8eea0();
  iVar4 = FUN_00a8eeb0();
  *(undefined4 *)(param_1 + 0xf3c) = 0;
  local_188 = 0;
  do {
    iVar6 = local_188 * 5 + 0x3a7;
    puVar1 = (undefined4 *)(param_1 + iVar6 * 4);
    if (*(int *)(param_1 + iVar6 * 4) == 0) {
      if ((float)puVar1[1] <= 1.0 - (float)iVar3 / (float)iVar4) {
        *puVar1 = 1;
        *(int *)(param_1 + 0xf3c) = *(int *)(param_1 + 0xf3c) + 1;
        FUN_00821d10(local_188);
        if (((local_188 == 6) || (local_188 == 5)) && ((*(uint *)(param_1 + 0xe90) & 0x800000) != 0)
           ) {
          *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) & 0xff7fffff;
          FUN_00a93910(1);
        }
        if (local_188 == 4) {
          FUN_008237f0();
        }
        iVar6 = 0;
        local_18c = puVar1 + 2;
        do {
          iVar2 = *local_18c;
          if (iVar2 == 0) break;
          fVar7 = (float10)FUN_00dde300(0xc0a00000,0x40a00000);
          local_180[0] = (float)fVar7;
          local_180[1] = 5.0;
          fVar7 = (float10)FUN_00dde300(0xc0a00000,0x40a00000);
          local_180[2] = (float)fVar7;
          local_174 = 0x3f800000;
          fVar7 = (float10)FUN_00dde300(0xc1200000,0x41200000);
          local_170 = (float)fVar7;
          fVar7 = (float10)FUN_00dde300(0xc1200000,0x41200000);
          local_16c = (float)fVar7;
          fVar7 = (float10)FUN_00dde300(0xc1200000,0x41200000);
          local_168 = (float)fVar7;
          local_164 = 0x3f800000;
          FUN_00830ef0(iVar2,local_180,&local_170,0x437a0000,0);
          local_18c = local_18c + 1;
          iVar6 = iVar6 + 1;
        } while (iVar6 < 3);
        if (*(int *)(&DAT_01648730 + local_188 * 4) != 0xffff) {
          FUN_00aa92c0(*(int *)(&DAT_01648730 + local_188 * 4));
        }
        if (*(int *)(param_1 + 0x1a80) == 0) {
          *(undefined4 *)(param_1 + 0x1a80) = 1;
          uVar5 = FUN_00a8c890(0);
          FUN_004117d0(0x197,param_1,uVar5);
          FUN_00a963e0(local_160);
        }
      }
    }
    else {
      *(int *)(param_1 + 0xf3c) = *(int *)(param_1 + 0xf3c) + 1;
    }
    local_188 = local_188 + 1;
    if (7 < local_188) {
      return;
    }
  } while( true );
}

// 0083AAE0  FUN_0083aae0  size=725  [between]
void __fastcall FUN_0083aae0(int *param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  float10 fVar5;
  
  if (param_1[0x187] == 0) {
    uVar2 = 0x8038000;
    if ((param_1[0x3a4] & 0x100000U) != 0) {
      uVar2 = 0x8038040;
    }
    FUN_00aa4120(param_1[0x660],0,0x3d888889,0x3f800000,uVar2,0xbf800000,0x3f800000);
    param_1[0x139] = 1;
    FUN_00a8ee20(0);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x41700000;
    param_1[0x249] = 0x43960000;
    if (param_1[0x662] == 1) {
      param_1[0x662] = 0;
      fVar5 = (float10)FUN_00dde300(0,0x3f800000);
      FUN_00a92f90();
      iVar3 = FUN_00e26e90();
      if (iVar3 != 0) {
        Animation::Motion::Unit::setCurrentTime
                  (0,(float)(fVar5 * (float10)10.0 * (float10)0.016666668));
      }
    }
    FUN_009413c0(param_1[0x20f]);
    param_1[0x188] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  fVar1 = (float)param_1[0x248];
  param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
  if (fVar1 - (float)param_1[0x244] <= 0.0) {
    FUN_00837f40();
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    if ((param_1[0x128] == 0) && ((*(byte *)(param_1 + 0x2c0) & 2) != 0)) {
      FUN_00824fd0(0x60000);
      FUN_00a8cb60(2);
      param_1[0x139] = 1;
      FUN_00a8ee20(0);
      param_1[0x1af] = 1;
      return;
    }
    if (param_1[0x294] != 0) {
      FUN_00ac8e10(1);
      if ((*(byte *)((int)param_1 + 0xe92) & 1) != 0) {
        FUN_00a8c9b0(0,2,0x3f800000,0);
        param_1[0x3a4] = param_1[0x3a4] & 0xfffeffff;
      }
      if ((param_1[0x3a4] & 0x8000U) == 0) {
        FUN_00e02240(param_1[0x13c],3);
        param_1[0x3a4] = param_1[0x3a4] | 0x8000;
      }
      (**(code **)(*param_1 + 0x20))();
      if (param_1[0x6a0] != 0) {
        param_1[0x6a0] = 0;
        FUN_00a8c9b0(0,0x197,0,0);
      }
      iVar3 = FUN_00a81330();
      if (iVar3 != 0) {
        piVar4 = (int *)FUN_00a7c8a0();
        if (piVar4 != (int *)0x0) {
          (**(code **)(*piVar4 + 0x20))();
        }
      }
      param_1[0x1af] = 1;
      FUN_00824fd0(0x60002);
      if (param_1[0x1d9] != 0) {
        FUN_008e3c10();
      }
      iVar3 = FUN_00e5e0c0("em0220_se_dmg_explosion",param_1,0xffffffff,0);
      param_1[0x6a3] = iVar3;
      FUN_00940450(param_1[0x20f]);
      if ((param_1[0x128] != 0) || ((*(byte *)(param_1 + 0x2c0) & 2) == 0)) {
        (**(code **)(*param_1 + 0x364))(0xffffffff);
      }
    }
  }
  return;
}

// 0083ADC0  FUN_0083adc0  size=549  [between]
void __fastcall FUN_0083adc0(int *param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0xa7,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x248] = 0x41700000;
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x139] = 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  fVar1 = (float)param_1[0x248];
  param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
  if (fVar1 - (float)param_1[0x244] <= 0.0) {
    FUN_00837f40();
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    if ((param_1[0x128] == 0) && ((*(byte *)(param_1 + 0x2c0) & 2) != 0)) {
      FUN_00824fd0(0x60000);
      FUN_00a8cb60(2);
      param_1[0x139] = 1;
      FUN_00a8ee20(0);
      param_1[0x1af] = 1;
      return;
    }
    if (param_1[0x294] != 0) {
      FUN_00ac8e10(1);
      if ((*(byte *)((int)param_1 + 0xe92) & 1) != 0) {
        FUN_00a8c9b0(0,2,0x3f800000,0);
        param_1[0x3a4] = param_1[0x3a4] & 0xfffeffff;
      }
      if ((param_1[0x3a4] & 0x8000U) == 0) {
        FUN_00e02240(param_1[0x13c],3);
        param_1[0x3a4] = param_1[0x3a4] | 0x8000;
      }
      (**(code **)(*param_1 + 0x20))();
      if (param_1[0x6a0] != 0) {
        param_1[0x6a0] = 0;
        FUN_00a8c9b0(0,0x197,0,0);
      }
      iVar2 = FUN_00a81330();
      if (iVar2 != 0) {
        piVar3 = (int *)FUN_00a7c8a0();
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 0x20))();
        }
      }
      param_1[0x1af] = 1;
      FUN_00824fd0(0x60002);
      if (param_1[0x1d9] != 0) {
        FUN_008e3c10();
      }
      iVar2 = FUN_00e5e0c0("em0220_se_dmg_explosion",param_1,0xffffffff,0);
      param_1[0x6a3] = iVar2;
      FUN_00940450(param_1[0x20f]);
      if ((param_1[0x128] != 0) || ((*(byte *)(param_1 + 0x2c0) & 2) == 0)) {
        (**(code **)(*param_1 + 0x364))(0xffffffff);
      }
    }
  }
  return;
}

// 0083AFF0  FUN_0083aff0  size=641  [between]
void __fastcall FUN_0083aff0(int *param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  float10 fVar4;
  
  if (param_1[0x187] == 0) {
    param_1[0x139] = 1;
    FUN_00a8ee20(0);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x41700000;
    param_1[0x249] = 0x43960000;
    if (param_1[0x662] == 1) {
      param_1[0x662] = 0;
      fVar4 = (float10)FUN_00dde300(0,0x3f800000);
      FUN_00a92f90();
      iVar2 = FUN_00e26e90();
      if (iVar2 != 0) {
        Animation::Motion::Unit::setCurrentTime
                  (0,(float)(fVar4 * (float10)10.0 * (float10)0.016666668));
      }
    }
    FUN_009413c0(param_1[0x20f]);
    param_1[0x188] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  fVar1 = (float)param_1[0x248];
  param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
  if (fVar1 - (float)param_1[0x244] <= 0.0) {
    FUN_00837f40();
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    if ((param_1[0x128] == 0) && ((*(byte *)(param_1 + 0x2c0) & 2) != 0)) {
      FUN_00824fd0(0x60000);
      FUN_00a8cb60(2);
      param_1[0x139] = 1;
      FUN_00a8ee20(0);
      param_1[0x1af] = 1;
      return;
    }
    if (param_1[0x294] != 0) {
      FUN_00ac8e10(1);
      if ((*(byte *)((int)param_1 + 0xe92) & 1) != 0) {
        FUN_00a8c9b0(0,2,0x3f800000,0);
        param_1[0x3a4] = param_1[0x3a4] & 0xfffeffff;
      }
      if ((param_1[0x3a4] & 0x8000U) == 0) {
        FUN_00e02240(param_1[0x13c],3);
        param_1[0x3a4] = param_1[0x3a4] | 0x8000;
      }
      (**(code **)(*param_1 + 0x20))();
      if (param_1[0x6a0] != 0) {
        param_1[0x6a0] = 0;
        FUN_00a8c9b0(0,0x197,0,0);
      }
      iVar2 = FUN_00a81330();
      if (iVar2 != 0) {
        piVar3 = (int *)FUN_00a7c8a0();
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 0x20))();
        }
      }
      param_1[0x1af] = 1;
      FUN_00824fd0(0x60002);
      if (param_1[0x1d9] != 0) {
        FUN_008e3c10();
      }
      iVar2 = FUN_00e5e0c0("em0220_se_dmg_explosion",param_1,0xffffffff,0);
      param_1[0x6a3] = iVar2;
      FUN_00940450(param_1[0x20f]);
      if ((param_1[0x128] != 0) || ((*(byte *)(param_1 + 0x2c0) & 2) == 0)) {
        (**(code **)(*param_1 + 0x364))(0xffffffff);
      }
    }
  }
  return;
}

// 0083B280  FUN_0083b280  size=526  [between]
void __fastcall FUN_0083b280(int param_1)

{
  float fVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  float *pfVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int *piVar12;
  bool bVar13;
  int local_ac;
  int local_a8;
  int local_a4;
  byte *local_a0;
  undefined1 local_90 [64];
  undefined4 local_50 [19];
  
  local_ac = FUN_00ac89d0();
  if (local_ac == 0) {
    local_ac = param_1;
  }
  local_a8 = 0;
  pfVar9 = (float *)(param_1 + 0x1718);
  local_a4 = 0xb;
  do {
    if ((pfVar9[2] != 0.0) || (*(short *)(pfVar9 + -2) != 0)) {
      if (*(short *)(pfVar9 + -2) == 1) {
        *(undefined2 *)(pfVar9 + -2) = 2;
      }
      local_a8 = local_a8 + 1;
      if ((short *)pfVar9[1] == (short *)0x0) {
        sVar3 = -1;
      }
      else {
        sVar3 = *(short *)pfVar9[1];
      }
      iVar4 = FUN_00a12210((int)sVar3);
      if (iVar4 != 0) {
        *(ushort *)(iVar4 + 0xa2) = *(ushort *)(iVar4 + 0xa2) | 4;
        FUN_0091df60(local_90);
        FUN_01005140(local_50);
        puVar10 = local_50;
        puVar11 = (undefined4 *)(iVar4 + 0x10);
        for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar11 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar11 = puVar11 + 1;
        }
        fVar1 = pfVar9[-1] - *(float *)(param_1 + 0x910);
        pfVar9[-1] = fVar1;
        if (fVar1 <= 0.0) {
          pfVar9[-1] = 0.0;
          fVar1 = *pfVar9;
          *pfVar9 = fVar1 - 0.05;
          if (fVar1 - 0.05 < 0.0) {
            *pfVar9 = 0.0;
          }
        }
        if (pfVar9[-1] <= 0.0) {
          if (pfVar9[1] == 0.0) {
            local_a0 = &DAT_016416fa;
          }
          else {
            local_a0 = *(byte **)((int)pfVar9[1] + 4);
          }
          iVar7 = 0;
          if (0 < *(short *)(local_ac + 0x324)) {
            piVar12 = (int *)(*(int *)(local_ac + 800) + 0x60);
            do {
              pbVar8 = *(byte **)(*piVar12 + 0x40);
              pbVar5 = local_a0;
              if (pbVar8 != (byte *)0x0) {
                do {
                  bVar2 = *pbVar5;
                  bVar13 = bVar2 < *pbVar8;
                  if (bVar2 != *pbVar8) {
LAB_0083b3e6:
                    iVar6 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
                    goto LAB_0083b3eb;
                  }
                  if (bVar2 == 0) break;
                  bVar2 = pbVar5[1];
                  bVar13 = bVar2 < pbVar8[1];
                  if (bVar2 != pbVar8[1]) goto LAB_0083b3e6;
                  pbVar8 = pbVar8 + 2;
                  pbVar5 = pbVar5 + 2;
                } while (bVar2 != 0);
                iVar6 = 0;
LAB_0083b3eb:
                if (iVar6 == 0) {
                  if ((iVar7 != -1) && (iVar7 = iVar7 * 0x70 + *(int *)(local_ac + 800), iVar7 != 0)
                     ) {
                    if (*pfVar9 <= 0.0) {
                      *(uint *)(iVar7 + 0x38) = *(uint *)(iVar7 + 0x38) & 0xfffffffe;
                      pfVar9[-2] = 0.0;
                      pfVar9[1] = 0.0;
                      if (pfVar9[2] != 0.0) {
                        piVar12 = (int *)FUN_00910da0();
                        (**(code **)(*piVar12 + 0x2c))(pfVar9 + 2);
                      }
                      *(ushort *)(iVar4 + 0xa2) = *(ushort *)(iVar4 + 0xa2) & 0xfffb;
                    }
                    else {
                      *(float *)(iVar7 + 0x1c) = *pfVar9;
                    }
                  }
                  break;
                }
              }
              iVar7 = iVar7 + 1;
              piVar12 = piVar12 + 0x1c;
            } while (iVar7 < *(short *)(local_ac + 0x324));
          }
        }
      }
    }
    pfVar9 = pfVar9 + 5;
    local_a4 = local_a4 + -1;
    if (local_a4 == 0) {
      if (local_a8 < 1) {
        *(uint *)(local_ac + 0x364) = *(uint *)(local_ac + 0x364) | 2;
        return;
      }
      *(uint *)(local_ac + 0x364) = *(uint *)(local_ac + 0x364) & 0xfffffffd;
      return;
    }
  } while( true );
}

// 0083B490  FUN_0083b490  size=109  [between]
void __fastcall FUN_0083b490(int param_1)

{
  undefined4 uVar1;
  undefined1 local_160 [348];
  
  FUN_00831d80();
  FUN_00821d10(0xffffffff);
  if (*(int *)(param_1 + 0x1a80) == 0) {
    *(undefined4 *)(param_1 + 0x1a80) = 1;
    uVar1 = FUN_00a8c890(0);
    FUN_004117d0(0x197,param_1,uVar1);
    FUN_00a963e0(local_160);
  }
  FUN_008237f0();
  FUN_00aa92c0(399);
  return;
}

// 0083B500  FUN_0083b500  size=436  [between]
undefined4 __fastcall FUN_0083b500(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined *puVar6;
  int local_4;
  
  if ((((int *)param_1[0xdc] != (int *)0x0) && (*(int *)param_1[0xdc] != 0)) ||
     ((*(byte *)(param_1 + 0x130) & 1) == 0)) {
    return 0;
  }
  local_4 = 0;
  param_1[0x1a1] = 0;
  FUN_00ac2080(0);
  piVar5 = (int *)param_1[0x19f];
  piVar4 = piVar5 + param_1[0x1a1] * 0x54;
  do {
    if (piVar5 == piVar4) {
      return 0;
    }
    iVar1 = *piVar5;
    if (((iVar1 == 0) || (iVar1 == 1)) || ((iVar1 == 2 || ((iVar1 == 0x1b0 || (iVar1 == 0x147))))))
    {
LAB_0083b5a1:
      iVar3 = 0;
      piVar2 = (int *)FUN_00c13920();
      iVar1 = (**(code **)(*piVar2 + 0x28))(0);
      if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
        puVar6 = &DAT_01be9c38;
        (**(code **)(*piVar2 + 4))(&DAT_01be9c38);
        iVar1 = FUN_00dd6d80(puVar6);
        if (iVar1 != 0) {
          iVar3 = (**(code **)(*piVar2 + 0x32c))();
        }
      }
      if ((((piVar5[0x23] & 0x200U) != 0) || ((iVar3 != 0 && (iVar1 = FUN_00a8e520(), iVar1 != 0))))
         && (piVar5[0x25] != 0)) {
        if (local_4 != 0) {
          param_1[0x238] = *(int *)(local_4 + 0x40);
          param_1[0x239] = *(int *)(local_4 + 0x44);
          param_1[0x23a] = *(int *)(local_4 + 0x48);
          param_1[0x23b] = *(int *)(local_4 + 0x4c);
        }
        param_1[0x234] = piVar5[8];
        param_1[0x235] = piVar5[9];
        param_1[0x236] = piVar5[10];
        param_1[0x237] = piVar5[0xb];
        FUN_00a8e5d0(param_1,piVar5,0);
        (**(code **)(*param_1 + 0x198))(local_4,piVar5,0x100);
        param_1[0x23d] = 1;
        return 1;
      }
    }
    else {
      iVar1 = FUN_00a81330();
      if (iVar1 != param_1[0x13c]) {
        if (iVar1 != 0) {
          local_4 = FUN_00a7c8a0();
        }
        goto LAB_0083b5a1;
      }
    }
    piVar5 = piVar5 + 0x54;
  } while( true );
}

// 0083B6C0  Emc220::startup  size=2899  [class]
undefined4 __fastcall Emc220::startup(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  uint uVar7;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  int iStack_1f0;
  undefined4 uStack_1ec;
  undefined1 auStack_1e8 [4];
  int local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined1 auStack_1d0 [4];
  undefined2 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined1 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined1 auStack_160 [272];
  undefined4 uStack_50;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_1c;
  
  iVar2 = EmBaseDLC::startup();
  if (iVar2 != 0) {
    param_1[0x3a4] = 0;
    FUN_00a7c950();
    FUN_00a7c950();
    param_1[0x510] = 0;
    param_1[0x4fd] = 0;
    param_1[0x511] = 0;
    param_1[0x4fc] = 0;
    param_1[0x521] = 0;
    param_1[0x522] = 0;
    param_1[0x514] = 0;
    param_1[0x523] = 0;
    param_1[0x515] = -1;
    param_1[0x524] = 0;
    param_1[0x516] = -1;
    param_1[0x525] = 0;
    param_1[0x517] = -1;
    param_1[0x526] = 0;
    param_1[0x518] = 0;
    param_1[0x51c] = 0;
    param_1[0x52b] = param_1[0x22a];
    param_1[0x51d] = 0;
    param_1[0x520] = 0;
    param_1[0x527] = 0;
    param_1[0x581] = 0;
    param_1[0x528] = 0;
    param_1[0x52c] = 0;
    param_1[0x585] = 0x44160000;
    param_1[0x52d] = 0;
    param_1[0x52e] = 0;
    param_1[0x60d] = 0;
    param_1[0x52f] = 0;
    param_1[0x61c] = 0;
    param_1[0x580] = 0;
    param_1[0x61d] = 0;
    param_1[0x584] = 0;
    param_1[0x588] = 0;
    param_1[0x61e] = 0x43340000;
    param_1[0x60b] = 0;
    param_1[0x612] = 0;
    param_1[0x670] = 0;
    param_1[0x650] = 0;
    param_1[0x673] = 0;
    param_1[0x652] = 0;
    param_1[0x674] = 0;
    param_1[0x656] = 1;
    param_1[0x657] = 0;
    param_1[0x676] = 0x3f800000;
    param_1[0x660] = 0;
    param_1[0x661] = 0;
    param_1[0x677] = 0;
    param_1[0x663] = 0;
    param_1[0x699] = 0;
    param_1[0x666] = 0;
    param_1[0x6a2] = 0;
    param_1[0x668] = 0;
    param_1[0x675] = -1;
    param_1[0x6a6] = 0x3f800000;
    param_1[0x69b] = 0;
    param_1[0x69c] = 0;
    param_1[0x664] = 0x44160000;
    param_1[0x69d] = 0;
    param_1[0x6a0] = 0;
    param_1[0x6a4] = 0;
    param_1[0x6ac] = 0;
    param_1[0x6a8] = 4;
    param_1[0x6a9] = 0;
    param_1[0x6aa] = 0;
    param_1[0x6ab] = 0;
    param_1[0x583] = 0;
    param_1[0x6ad] = 0x44610000;
    param_1[0x628] = 0;
    param_1[0x629] = 0;
    param_1[0x62a] = 0;
    param_1[0x62b] = 0;
    param_1[0x62c] = 0;
    param_1[0x62d] = 0;
    param_1[0x62e] = 0;
    param_1[0x62f] = 0;
    param_1[0x630] = 0;
    param_1[0x631] = 0;
    param_1[0x632] = 0;
    param_1[0x633] = 0;
    param_1[0x634] = 0;
    param_1[0x635] = 0;
    param_1[0x636] = 0;
    param_1[0x637] = 0;
    param_1[0x638] = 0;
    param_1[0x639] = 0;
    param_1[0x63a] = 0;
    param_1[0x63b] = 0;
    param_1[0x63c] = 0;
    param_1[0x63d] = 0;
    param_1[0x63e] = 0;
    param_1[0x63f] = 0;
    param_1[0x640] = 0;
    param_1[0x641] = 0;
    param_1[0x642] = 0;
    param_1[0x643] = 0;
    param_1[0x644] = 0;
    param_1[0x645] = 0;
    param_1[0x646] = 0;
    param_1[0x647] = 0;
    param_1[0x648] = 0;
    param_1[0x649] = 0;
    param_1[0x64a] = 0;
    param_1[0x64b] = 0;
    param_1[0x64c] = 0;
    param_1[0x64d] = 0;
    param_1[0x64e] = 0;
    param_1[0x64f] = 0;
    param_1[0x498] = 0;
    param_1[0x4a4] = 0;
    param_1[0x499] = 0;
    param_1[0x49a] = 0;
    param_1[0x4a5] = 0;
    param_1[0x4a6] = 0;
    param_1[0x4b0] = 0;
    param_1[0x4b1] = 0;
    param_1[0x4b2] = 0;
    param_1[0x4bc] = 0;
    param_1[0x4bd] = 0;
    param_1[0x4be] = 0;
    param_1[0x4c8] = 0;
    param_1[0x4c9] = 0;
    param_1[0x4ca] = 0;
    param_1[0x4d4] = 0;
    param_1[0x4d5] = 0;
    param_1[0x4d6] = 0;
    param_1[0x4e0] = 0;
    param_1[0x4e1] = 0;
    param_1[0x4e2] = 0;
    param_1[0x4ec] = 0;
    param_1[0x4ed] = 0;
    param_1[0x4ee] = 0;
    if ((param_1[0x1db] != 0) && (uVar7 = 0, *(int *)(param_1[0x1db] + 0x18) != 0)) {
      iVar2 = 0;
      piVar6 = param_1 + 0x678;
      do {
        uVar7 = uVar7 + 1;
        *piVar6 = *(int *)(*(int *)(param_1[0x1db] + 0x1c) + 0xfc + iVar2);
        piVar6 = piVar6 + 1;
        iVar2 = iVar2 + 0x100;
      } while (uVar7 < *(uint *)(param_1[0x1db] + 0x18));
    }
    param_1[0x2c0] = param_1[0x12a];
    param_1[0x2bd] = param_1[0x128];
    if ((param_1[0x128] == 0) && ((param_1[0x12a] & 2U) != 0)) {
      FUN_00c81e90(0x23);
      FUN_00c81e90(0x24);
      FUN_00c81e90(0x25);
      FUN_00c81e90(0x26);
    }
    else {
      FUN_00e5e0c0("em0220_voice_stop",param_1,0xffffffff,0);
    }
    FUN_00acf600(0x2c22f,"Emc220Body");
    local_1e4 = param_1[300];
    FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e272b0(local_1e4,0x20220);
    FUN_00ac8e10(0);
    FUN_00ac8eb0(1,1);
    local_1dc = 0x3f666666;
    local_1d8 = 0x3f99999a;
    local_1d4 = 0x3f8ccccd;
    local_200 = 0x3e4ccccd;
    local_1fc = 0x40400000;
    local_1f8 = 0x40000000;
    FUN_00a8e4d0(&local_200,&local_1dc);
    FUN_00a929d0();
    iVar2 = FUN_008ec660(param_1,0x40000000,0x3f266666,0x41700000,0x41a00000,0x78,7,0);
    local_200 = 0x3fc90fdb;
    local_1fc = 0;
    local_1f8 = 0;
    param_1[0x1d9] = iVar2;
    FUN_008e0b20(&local_200);
    local_200 = 0;
    local_1fc = 0xbeb33334;
    local_1f8 = 0x3f000000;
    FUN_008e0d30(&local_200);
    FUN_008e6d00();
    param_1[0x665] = 0;
    local_1e4 = FUN_00a8d2a0();
    if ((param_1[0xcc] != 0) && (*(int *)(param_1[0xcc] + 0xcc) == 0)) {
      local_1e0 = 0;
      iVar2 = FUN_00a54ae0(&local_1e0,param_1 + 0x125,"_col.hkx");
      if (iVar2 != 0) {
        iVar3 = FUN_00dd3500(0x3c,&DAT_01b7bd48);
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = RigidBodyCollision::RigidBodyCollision();
        }
        param_1[0x1ec] = iVar3;
        iVar2 = FUN_008f6410(param_1[0x13c],iVar2,local_1e0);
        if (iVar2 != 0) {
          FUN_008f2cd0(0);
          (**(code **)(*(int *)param_1[0x1ec] + 0x108))(0x1f);
          puVar4 = (undefined4 *)FUN_009f8b60();
          (**(code **)(*(int *)param_1[0x1ec] + 0x114))(*puVar4);
          FUN_008f1600(0x80000000);
          FUN_008f1600(0x20);
          FUN_008f18c0(0x100);
        }
      }
      if ((int *)param_1[0x1ec] != (int *)0x0) {
        iVar2 = (**(code **)(*(int *)param_1[0x1ec] + 0xc))();
        lib::StaticArray<Collision*,64>::StaticArray<Collision*,64>_2(iVar2 + 2);
        iVar3 = 0;
        iVar2 = (**(code **)(*(int *)param_1[0x1ec] + 0xc))();
        if (0 < iVar2) {
          do {
            (**(code **)(*(int *)param_1[0x1ec] + 300))(auStack_1e8,iVar3);
            if ((iStack_1f0 != 0) && (iVar2 = FUN_009124a0(), iVar2 != 0)) {
              uVar5 = FUN_009124a0(&DAT_01640b88);
              iVar2 = FUN_00fdbbd0(uVar5);
              if (iVar2 != 0) {
                Behavior::addDefenseCollisionFromRigidBody(&iStack_1f0,2,uStack_1ec);
              }
            }
            iVar3 = iVar3 + 1;
            iVar2 = (**(code **)(*(int *)param_1[0x1ec] + 0xc))();
          } while (iVar3 < iVar2);
        }
        lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_2(1);
        FUN_00a938c0(1);
        param_1[0x3a4] = param_1[0x3a4] | 0x800000;
      }
      puVar4 = (undefined4 *)FUN_009f8b60();
      iVar2 = CollisionCapsule::CollisionCapsule(2,*puVar4,0);
      if (iVar2 != 0) {
        *(undefined4 *)(iVar2 + 0x380) = 0;
        FUN_00d77c50(param_1[0x13c],0);
        *(undefined4 *)(iVar2 + 0x594) = 0x3f599998;
        *(undefined4 *)(iVar2 + 0x590) = 0x3f400000;
        *(undefined4 *)(iVar2 + 0x570) = 0;
        *(undefined4 *)(iVar2 + 0x574) = 0xbec00000;
        *(undefined4 *)(iVar2 + 0x578) = 0;
        *(undefined4 *)(iVar2 + 0x57c) = uStack_1f4;
        *(undefined4 *)(iVar2 + 0x580) = 0x3fc90fdb;
        *(undefined4 *)(iVar2 + 0x584) = 0;
        *(undefined4 *)(iVar2 + 0x588) = 0;
        *(undefined4 *)(iVar2 + 0x58c) = uStack_1f4;
        FUN_00d771d0(1);
        FUN_00a93a00(iVar2,local_1e4);
        FUN_00d7b0f0();
        FUN_00d7b890();
      }
      param_1[0x665] = 1;
      FUN_00822f30();
      piVar6 = (int *)FUN_00ac89d0();
      if (piVar6 == (int *)0x0) {
        piVar6 = param_1;
      }
      FUN_00e01ca0();
      uStack_50 = 0;
      uStack_1c = 0xffffffff;
      FUN_00dffad0(0);
      FUN_00e020f0(piVar6[0x13c]);
      FUN_00dffb30(param_1 + 0x3d0);
      uStack_40 = 0;
      uStack_3c = 0;
      uStack_38 = 0;
      uStack_34 = 0;
      uStack_30 = 0;
      uStack_2c = 0;
      uStack_28 = 0;
      uStack_24 = 0;
      FUN_00a963e0(auStack_160);
    }
    iVar2 = FUN_00c5def0(param_1[0x13c]);
    param_1[0x25c] = iVar2;
    FUN_00a7c930();
    FUN_00a7c950();
    uStack_1b8 = 0x41400000;
    uStack_1cc = 0xffff;
    uStack_1c0 = 0x3f000000;
    uStack_1b0 = 0;
    uStack_1ac = 0;
    uStack_1c8 = 0;
    uStack_1a8 = 0;
    uStack_1c4 = 0;
    uStack_194 = 0;
    uStack_1a0 = 0;
    uStack_1bc = 0;
    uStack_19c = 0;
    uVar5 = 0x42c80000;
    uStack_198 = 0;
    uStack_188 = 0;
    uStack_18c = 0;
    uStack_184 = 0;
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_174 = 0;
    uStack_16c = 1;
    uStack_170 = 0xffffffff;
    if ((param_1[0x128] != 0) || ((*(byte *)(param_1 + 0x2c0) & 2) == 0)) {
      uVar5 = 0x41700000;
    }
    local_200 = 0;
    local_1fc = 0;
    local_1f8 = 0x3e99999a;
    FUN_00c151f0(1,param_1[0x13c],0,&local_200,0,uVar5,0x3f000000,2,0);
    FUN_00c57830(auStack_1d0);
    param_1[0x1bb] = 1;
    FUN_00a82610(param_1[0x13c],5,0xffffffff);
    param_1[0x5c1] = 0x3c8efa35;
    local_200 = 0;
    local_1fc = 0x3e32b8c2;
    local_1f8 = 0;
    FUN_00a83270(&local_200,0x3f9c61aa,0x3f490fdb);
    iVar2 = FUN_00822d40();
    if (iVar2 != 0) {
      FUN_00820ad0();
      FUN_00822e40();
      FUN_00823560();
      piVar6 = param_1;
      FUN_00c1cf50(param_1);
      FUN_00c54720(piVar6);
      param_1[0x20b] = 6;
      FUN_008220e0();
      FUN_00820230();
      if ((param_1[0x128] != 0) || ((*(byte *)(param_1 + 0x2c0) & 2) == 0)) {
        param_1[0x205] = 4;
        FUN_00a82ac0(param_1[0x13c],4,0,0xffffffff);
      }
      FUN_00ac9420("tentacle_a");
      FUN_00ac94e0("tentacle_b");
      param_1[0x653] = 0;
      if (param_1[0x1db] != 0) {
        *(undefined4 *)(param_1[0x1db] + 0xbac) = 1;
        *(undefined4 *)(param_1[0x1db] + 0xbc0) = 0x3e3851ec;
      }
      (**(code **)(*param_1 + 0x34c))();
      param_1[0x69f] = 0;
      if ((*(byte *)(param_1 + 0x2c0) & 0x10) != 0) {
        pcVar1 = *(code **)(*param_1 + 0x110);
        param_1[0x69f] = 0x42700000;
        (*pcVar1)(1);
        FUN_00aa92c0(0x208);
        FUN_00824fd0(0x10012);
      }
      if ((param_1[0x128] != 0) || ((*(byte *)(param_1 + 0x2c0) & 2) == 0)) {
        FUN_00ac9300("faceArmor");
        FUN_00ac9300("cover_a_DEC");
      }
      if ((param_1[0x128] != 0) || ((*(byte *)(param_1 + 0x2c0) & 2) == 0)) {
        param_1[0x36a] = 0;
        param_1[0x36c] = 0;
      }
      return 1;
    }
  }
  return 0;
}

// 0083C220  Emc220::vf54  size=16  [class]
void Emc220::vf54(void)

{
  FUN_0083b280();
  BehaviorEmBase::vf54();
  return;
}

// 0083C230  FUN_0083c230  size=99  [between]
void __fastcall FUN_0083c230(int param_1)

{
  int iVar1;
  undefined1 local_160 [348];
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (((iVar1 != 0) && (*(int *)(param_1 + 0x4a0) == 1)) && (*(int *)(param_1 + 0x1088) == 0)) {
      FUN_004117d0(1,iVar1,param_1 + 0xff0);
      FUN_00a963e0(local_160);
    }
  }
  return;
}

// 0083C2A0  FUN_0083c2a0  size=1093  [between]
void __fastcall FUN_0083c2a0(int param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  float10 fVar5;
  
  if (((*(int *)(param_1 + 0x61c) != 0) && (*(int *)(param_1 + 0x1998) == 0)) &&
     ((DAT_01bea060 & 0x2000000) == 0)) {
    iVar3 = *(int *)(param_1 + 0xdb0);
    fVar1 = 1.0;
    if ((iVar3 == 1) || (iVar3 == 0)) {
      fVar1 = 0.2;
    }
    fVar1 = *(float *)(param_1 + 0x920) - fVar1 * *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x920) = fVar1;
    if (fVar1 <= 0.0) {
      if ((iVar3 == 1) || (iVar3 == 0)) {
        FUN_0082db00();
        return;
      }
      iVar3 = FUN_008302b0();
      if (iVar3 == 0) {
        FUN_008386e0();
        return;
      }
      if (((*(int *)(param_1 + 0x1350) != 0) &&
          ((*(uint *)(param_1 + 0x1454) & 0xffff0000) != 0x50000)) &&
         (uVar4 = FUN_00dde2d0(0,100), (uVar4 & 1) != 0)) {
        uVar4 = FUN_00dde2d0(0,100);
        if ((uVar4 & 1) == 0) {
          FUN_00824fd0(0x50002);
          return;
        }
        FUN_00824fd0(0x50001);
        return;
      }
      iVar3 = FUN_00822410();
      if ((iVar3 == 0) &&
         (fVar1 = *(float *)(param_1 + 0x1a88), !NAN(fVar1) && 10.0 < fVar1 != (fVar1 == 10.0))) {
        if (81.0 < *(float *)(param_1 + 0xa90)) {
          FUN_00824fd0(0x10003);
          return;
        }
        FUN_00824fd0(0x10013);
        return;
      }
      iVar3 = FUN_0081ff70(0x41700000);
      if ((iVar3 == 0) || (iVar3 = FUN_008241d0(), iVar3 == 0)) {
        fVar5 = (float10)FUN_008205f0();
        if ((float10)1.0471976 < fVar5 != ((float10)1.0471976 == fVar5)) {
          uVar4 = FUN_00dde2d0(0,100);
          if (((uVar4 & 1) != 0) && (*(int *)(param_1 + 0x1260) == 0)) {
            FUN_00824fd0(0x1000d);
            return;
          }
          fVar5 = (float10)(float)fVar5;
        }
        if ((float10)0.7853982 <= fVar5) {
          if (*(int *)(param_1 + 0x1848) < 4) {
            FUN_00824fd0(0x10005);
            return;
          }
LAB_0083c478:
          FUN_00824fd0(0x50000);
          return;
        }
        if ((((*(int *)(param_1 + 0x1350) == 0) &&
             (fVar1 = *(float *)(param_1 + 0xa90), !NAN(fVar1) && 64.0 < fVar1 != (fVar1 == 64.0)))
            && (*(float *)(param_1 + 0xa90) <= 506.25)) &&
           ((*(float *)(param_1 + 0x1878) <= 0.0 && (iVar3 = FUN_00c158c0(), iVar3 != 0)))) {
          *(undefined4 *)(param_1 + 0x182c) = 0;
          *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) & 0xfffff7ff;
          uVar4 = FUN_00dde2d0(0,100);
          if ((uVar4 & 3) == 0) {
            *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) | 0x800;
          }
          FUN_00824fd0(0x2000a);
          return;
        }
        if (64.0 < *(float *)(param_1 + 0xa90)) {
          if (*(float *)(param_1 + 0xa90) <= 225.0) {
            if (((*(float *)(param_1 + 0x1614) <= 0.0) &&
                (fVar1 = *(float *)(param_1 + 0xa90), !NAN(fVar1) && 64.0 < fVar1 != (fVar1 == 64.0)
                )) && (iVar3 = FUN_00833b40(), iVar3 != 0)) {
              *(float *)(param_1 + 0x1614) = *(float *)(param_1 + 0x1890) * 60.0;
              *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) | 0x10;
              sVar2 = FUN_00dde2d0(3,5);
              *(int *)(param_1 + 0x1610) = (int)sVar2;
              FUN_00824fd0(0x20008);
              return;
            }
            fVar1 = *(float *)(param_1 + 0xa90);
            if (((!NAN(fVar1) && 49.0 < fVar1 != (fVar1 == 49.0)) &&
                (fVar5 = (float10)FUN_00dde300(0,0x3f800000),
                fVar5 < (float10)*(float *)(param_1 + 0x1618) !=
                (fVar5 == (float10)*(float *)(param_1 + 0x1618)))) &&
               (10.0 < *(float *)(param_1 + 0x19c0))) {
              if (*(int *)(param_1 + 0x1458) == 0x20007) {
                *(int *)(param_1 + 0x1620) = *(int *)(param_1 + 0x1620) + 1;
              }
              else {
                *(undefined4 *)(param_1 + 0x1620) = 0;
              }
              if (*(int *)(param_1 + 0x1620) < *(int *)(param_1 + 0x161c)) goto LAB_0083c687;
            }
          }
        }
        else if ((16.0 < *(float *)(param_1 + 0xa90)) ||
                (fVar1 = *(float *)(param_1 + 0x924) - *(float *)(param_1 + 0x910),
                *(float *)(param_1 + 0x924) = fVar1, fVar1 <= 0.0)) {
          uVar4 = FUN_00dde2d0(0,100);
          if ((uVar4 & 1) != 0) {
LAB_0083c687:
            FUN_00824fd0(0x20007);
            return;
          }
          if (*(int *)(param_1 + 0x1290) != 0) {
            FUN_00824fd0(0x10008);
            return;
          }
          goto LAB_0083c478;
        }
        fVar1 = *(float *)(param_1 + 0xa90);
        if (!NAN(fVar1) && 400.0 < fVar1 != (fVar1 == 400.0)) {
          FUN_00832d10();
          return;
        }
        if ((*(int *)(param_1 + 0x1350) != 0) &&
           (fVar1 = *(float *)(param_1 + 0xa90), !NAN(fVar1) && 49.0 < fVar1 != (fVar1 == 49.0))) {
          FUN_00832d10();
          return;
        }
      }
      else {
        FUN_00824fd0(0x20003);
      }
    }
  }
  return;
}

// 0083C6F0  FUN_0083c6f0  size=938  [between]
void __fastcall FUN_0083c6f0(int param_1)

{
  float fVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  float10 fVar6;
  undefined1 local_160 [348];
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    if (*(int *)(param_1 + 0x61c) != 1) {
      return;
    }
    if (*(int *)(param_1 + 0x940) == 0) {
      if ((*(uint *)(param_1 + 0xe90) & 0x800) == 0) {
        fVar1 = 12.0;
      }
      else {
        fVar1 = 50.0;
      }
      if (*(float *)(param_1 + 0x920) <= fVar1) {
        *(float *)(param_1 + 0x920) = fVar1;
        *(undefined4 *)(param_1 + 0x940) = 1;
        uVar2 = *(uint *)(param_1 + 0xe90);
        if (*(int *)(param_1 + 0x4a0) == 1) {
          FUN_00eaa6e0(0,0);
          iVar4 = FUN_00a81330();
          if ((iVar4 != 0) && (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) {
            FUN_004117d0(((uVar2 >> 0xb & 1) != 0) + '\x06',iVar4,param_1 + 0x10a0);
            FUN_00a963e0(local_160);
          }
        }
      }
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar6 = (float10)FUN_00827d50();
    if ((*(uint *)(param_1 + 0xe90) & 0x800) == 0) {
      uVar3 = 0x40900000;
    }
    else {
      uVar3 = 0x40a00000;
    }
    FUN_00820b90(param_1 + 0x1860,uVar3,(float)fVar6);
    FUN_00827dd0(param_1 + 0x1860,0);
    fVar1 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x920) = fVar1;
    if (0.0 < fVar1) {
      return;
    }
    if ((*(uint *)(param_1 + 0xe90) & 0x800) != 0) {
      FUN_00824fd0(0x2000d);
      return;
    }
    FUN_00824fd0(0x2000c);
    return;
  }
  FUN_00aa4080(0x7a,0,0x3d888889,0x3f800000,0,0xbf800000,0x3f800000);
  if (*(int *)(param_1 + 0x1454) == 0x1000a) {
    if (*(float *)(param_1 + 0x920) <= 9.0) {
      *(undefined4 *)(param_1 + 0x920) = 0x41100000;
    }
    goto LAB_0083ca27;
  }
  FUN_0083c230();
  *(undefined4 *)(param_1 + 0x940) = 0;
  if ((*(uint *)(param_1 + 0xe90) & 0x800) == 0) {
    if (*(int *)(param_1 + 0x182c) != 0) {
      fVar1 = *(float *)(param_1 + 0x187c);
      goto LAB_0083c900;
    }
    *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x1884) * 60.0;
    *(undefined4 *)(param_1 + 0x940) = 0;
  }
  else {
    fVar1 = *(float *)(param_1 + 0x1880);
LAB_0083c900:
    *(float *)(param_1 + 0x920) = fVar1 * 60.0;
  }
  if ((*(uint *)(param_1 + 0xe90) & 0x800) == 0) {
    fVar1 = 12.0;
  }
  else {
    fVar1 = 50.0;
  }
  if (*(float *)(param_1 + 0x920) <= fVar1) {
    *(undefined4 *)(param_1 + 0x940) = 1;
    uVar2 = *(uint *)(param_1 + 0xe90);
    if (*(int *)(param_1 + 0x4a0) != 1) goto LAB_0083ca27;
    FUN_00eaa6e0(0,0);
    cVar5 = ((uVar2 >> 0xb & 1) != 0) + '\x06';
    iVar4 = FUN_00a81330();
    if ((iVar4 == 0) || (iVar4 = FUN_00a7c8a0(), iVar4 == 0)) goto LAB_0083ca27;
  }
  else {
    if ((*(int *)(param_1 + 0x4a0) != 1) ||
       (((FUN_00eaa6e0(0,0), *(int *)(param_1 + 0x1138) != 0 || (iVar4 = FUN_00a81330(), iVar4 == 0)
         ) || (iVar4 = FUN_00a7c8a0(), iVar4 == 0)))) goto LAB_0083ca27;
    cVar5 = '\b';
  }
  FUN_004117d0(cVar5,iVar4,param_1 + 0x10a0);
  FUN_00a963e0(local_160);
LAB_0083ca27:
  FUN_00827c10();
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar6 = (float10)FUN_00827d50();
  if ((*(uint *)(param_1 + 0xe90) & 0x800) == 0) {
    uVar3 = 0x40900000;
  }
  else {
    uVar3 = 0x40a00000;
  }
  FUN_00820b90(param_1 + 0x1860,uVar3,(float)fVar6);
  FUN_00827dd0(param_1 + 0x1860,0);
  *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) | 0x20;
  *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  return;
}

// 0083CAA0  Emc220::vf32C  size=1401  [class]
float __fastcall Emc220::vf32C(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  float10 fVar8;
  int *local_60;
  int local_5c;
  float local_58;
  int local_54;
  int iStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [28];
  
  iVar2 = FUN_00a8ef10();
  if ((iVar2 != 0) || ((*(byte *)(param_1 + 0x130) & 1) == 0)) {
    return 0.0;
  }
  iVar2 = 0;
  local_58 = 0.0;
  local_5c = 0;
  local_54 = 1;
  do {
    if (local_58 != 0.0) {
      return 1.4013e-45;
    }
    param_1[0x1a1] = 0;
    FUN_00ac2080(local_54);
    piVar7 = (int *)param_1[0x19f];
    piVar6 = piVar7 + param_1[0x1a1] * 0x54;
    local_60 = piVar6;
    if (piVar7 != piVar6) {
      do {
        iVar3 = *piVar7;
        if (iVar3 == 0x1b0) {
          (**(code **)(*param_1 + 0x370))(piVar7);
          piVar6 = local_60;
        }
        else if ((((iVar3 != 0) && (iVar3 != 1)) && (iVar3 != 2)) &&
                ((iVar3 != 0x147 &&
                 (iVar3 = FUN_00a81330(), piVar6 = local_60, iVar3 != param_1[0x13c])))) {
          if (iVar3 != 0) {
            iVar2 = FUN_00a7c8a0();
            local_5c = iVar2;
          }
          iVar3 = FUN_00835230(piVar7);
          if (iVar3 != 0) {
            if (iVar2 != 0) {
              param_1[0x65c] = *(int *)(iVar2 + 0x40);
              param_1[0x65d] = *(int *)(iVar2 + 0x44);
              param_1[0x65e] = *(int *)(iVar2 + 0x48);
              param_1[0x65f] = *(int *)(iVar2 + 0x4c);
            }
            param_1[0x658] = piVar7[8];
            param_1[0x659] = piVar7[9];
            local_58 = 1.4013e-45;
            param_1[0x65a] = piVar7[10];
            param_1[0x65b] = piVar7[0xb];
            (**(code **)(*param_1 + 0x198))(iVar2,piVar7,0x100);
            break;
          }
          if (param_1[0x6ab] != 0) {
            return 0.0;
          }
          if ((*piVar7 == 0x57) && (piVar7[1] == 0)) {
            (**(code **)(*param_1 + 0x198))(iVar2,piVar7,1);
            piVar6 = local_60;
          }
          else {
            iVar3 = FUN_00a8f040(piVar7);
            piVar6 = local_60;
            if (iVar3 == 0) {
              iVar3 = FUN_00a8eea0();
              if (((0 < iVar3) && (iVar2 != 0)) && ((*(byte *)(iVar2 + 0x4c0) & 0x10) != 0)) {
                (**(code **)(*param_1 + 0x21c))(iVar2,(char)piVar7[4],0x3c23d70a,0);
                FUN_0043fa90();
              }
              fVar8 = (float10)FUN_00ddba30((float)piVar7[0xc] - (float)param_1[0x25]);
              param_1[0x245] = (int)(float)fVar8;
              param_1[0x522] = 0;
              if (iVar2 != 0) {
                fStack_40 = *(float *)(iVar2 + 0x40) - (float)param_1[0x10];
                fStack_38 = *(float *)(iVar2 + 0x48) - (float)param_1[0x12];
                fStack_34 = *(float *)(iVar2 + 0x4c) - (float)param_1[0x13];
                fStack_3c = 0.0;
                if ((fStack_40 != 0.0) || (fStack_38 != 0.0)) {
                  fVar1 = fStack_40 * fStack_40 + fStack_38 * fStack_38;
                  if (fVar1 < 0.0 == (fVar1 == 0.0)) {
                    FUN_00ddf460(&fStack_40,&fStack_40);
                  }
                  else {
                    FUN_00dd5650(&DAT_0163d0ac);
                    fStack_40 = 0.0;
                    fStack_3c = 1.0;
                    fStack_38 = 0.0;
                  }
                  pfVar4 = (float *)FUN_00a925a0(auStack_30);
                  local_58 = pfVar4[2] * fStack_38 + fStack_40 * *pfVar4 + pfVar4[1] * fStack_3c;
                  pfVar4 = (float *)FUN_00a925a0(auStack_20);
                  fStack_4c = pfVar4[2] * fStack_3c - fStack_38 * pfVar4[1];
                  fStack_48 = fStack_38 * *pfVar4 - fStack_40 * pfVar4[2];
                  fStack_44 = fStack_40 * pfVar4[1] - fStack_3c * *pfVar4;
                  fStack_40 = fStack_4c;
                  fStack_3c = fStack_48;
                  fStack_38 = fStack_44;
                  if (fStack_48 <= 0.0) {
                    fVar8 = (float10)FUN_00ddbb50(local_58);
                    param_1[0x522] = (int)(float)-fVar8;
                  }
                  else {
                    fVar8 = (float10)FUN_00ddbb50(local_58);
                    param_1[0x522] = (int)(float)fVar8;
                  }
                }
              }
              if (*piVar7 == 0x93) {
                (**(code **)(*param_1 + 0x198))(iVar2,piVar7,0x40000);
                return 0.0;
              }
              local_58 = 1.4013e-45;
              iStack_50 = FUN_00a8eea0();
              if ((param_1[0x3a4] & 0x2000U) == 0) {
                piVar6 = (int *)piVar7[1];
                local_60 = piVar6;
                iVar2 = FUN_008258c0();
                if ((iVar2 != 0) &&
                   (piVar6 = (int *)((int)piVar6 / 5), local_60 = piVar6, (int)piVar6 < 2)) {
                  piVar6 = (int *)0x1;
                  local_60 = (int *)0x1;
                }
                if ((((piVar7[0x23] & 0x200U) != 0) && (iVar2 = FUN_00822410(), iVar2 != 0)) &&
                   (piVar6 = (int *)FUN_00fdbc60(), (int)piVar6 < 2)) {
                  piVar6 = (int *)0x1;
                }
                if ((*(byte *)(piVar7 + 0x23) & 0x10) == 0) {
                  (**(code **)(*param_1 + 0x30c))(piVar6,0);
                }
              }
              iVar2 = iStack_50;
              iStack_50 = FUN_00a8eea0();
              iStack_50 = iVar2 - iStack_50;
              param_1[0x521] = 0;
              param_1[0x51d] = param_1[0x51d] + iStack_50;
              param_1[0x69b] = param_1[0x69b] + iStack_50;
              param_1[0x51c] = param_1[0x51c] + 1;
              param_1[0x528] = param_1[0x528] + 1;
              param_1[0x581] =
                   (int)((float)iStack_50 / (float)param_1[0x21d] + (float)param_1[0x581]);
              param_1[0x699] = param_1[0x698];
              iVar2 = FUN_00822410();
              if (iVar2 == 0) {
                if ((*(byte *)(piVar7 + 0x23) & 2) == 0) {
                  FUN_0083a8a0();
                }
                else {
                  FUN_0083b490();
                }
              }
              else {
                FUN_00831950(0xbf800000);
              }
              local_60 = (int *)0x0;
              iVar2 = FUN_00835300(piVar7,&local_60);
              if (iVar2 != 0) {
                FUN_0082ae90();
              }
              iVar2 = FUN_00a8eea0();
              if ((iVar2 < 1) && (param_1[0x139] == 0)) {
                uVar5 = 0;
                if ((piVar7[0x23] & 0x100000U) != 0) {
                  uVar5 = 2;
                }
                if ((piVar7[0x24] & 0x200U) != 0) {
                  uVar5 = 4;
                }
                (**(code **)(*param_1 + 0x344))(7,uVar5,(uint)piVar7[0x24] >> 0xb & 1);
                FUN_00820f40();
                local_60 = (int *)((uint)local_60 | 0x80);
                param_1[0x139] = 1;
              }
              (**(code **)(*param_1 + 0x198))(local_5c,piVar7,local_60);
              iVar2 = local_5c;
              break;
            }
          }
        }
        piVar7 = piVar7 + 0x54;
      } while (piVar7 != piVar6);
    }
    local_54 = local_54 + -1;
    if (local_54 < 0) {
      return local_58;
    }
  } while( true );
}

// 0083D020  FUN_0083d020  size=1121  [callgraph]
void __fastcall FUN_0083d020(int param_1)

{
  float fVar1;
  float fVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  float10 fVar6;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x1998) != 0) {
    return;
  }
  if ((DAT_01bea060 & 0x2000000) != 0) {
    return;
  }
  iVar4 = *(int *)(param_1 + 0xdb0);
  fVar1 = 1.0;
  if ((iVar4 == 1) || (iVar4 == 0)) {
    fVar1 = 0.2;
  }
  fVar1 = *(float *)(param_1 + 0x920) - fVar1 * *(float *)(param_1 + 0x910);
  *(float *)(param_1 + 0x920) = fVar1;
  if (0.0 < fVar1) {
    return;
  }
  if ((iVar4 == 1) || (iVar4 == 0)) {
    FUN_0082db00();
    return;
  }
  iVar4 = FUN_008302b0();
  if (iVar4 == 0) {
    FUN_008386e0();
    return;
  }
  if (((*(int *)(param_1 + 0x1350) != 0) && ((*(uint *)(param_1 + 0x1454) & 0xffff0000) != 0x50000))
     && (uVar5 = FUN_00dde2d0(0,100), (uVar5 & 1) != 0)) {
    uVar5 = FUN_00dde2d0(0,100);
    if ((uVar5 & 1) == 0) {
LAB_0083d0f7:
      FUN_00824fd0(0x50002);
      return;
    }
LAB_0083d474:
    FUN_00824fd0(0x50001);
    return;
  }
  iVar4 = FUN_00822410();
  if ((iVar4 == 0) &&
     (fVar1 = *(float *)(param_1 + 0x1a88), !NAN(fVar1) && 30.0 < fVar1 != (fVar1 == 30.0))) {
    if (81.0 < *(float *)(param_1 + 0xa90)) {
      FUN_00824fd0(0x10003);
      return;
    }
    FUN_00824fd0(0x10013);
    return;
  }
  iVar4 = FUN_008241d0();
  if (iVar4 != 0) {
    FUN_00824fd0(0x20003);
    return;
  }
  fVar6 = (float10)FUN_008205f0();
  fVar1 = (float)fVar6;
  if ((float10)1.0471976 < fVar6 != ((float10)1.0471976 == fVar6)) {
    uVar5 = FUN_00dde2d0(0,100);
    if (((uVar5 & 1) != 0) && (*(int *)(param_1 + 0x1260) == 0)) {
      FUN_00824fd0(0x1000d);
      return;
    }
    fVar6 = (float10)fVar1;
  }
  if ((float10)0.7853982 <= fVar6) {
    if (*(int *)(param_1 + 0x1848) < 4) {
      FUN_00824fd0(0x10005);
      return;
    }
  }
  else {
    iVar4 = FUN_00822410();
    if ((((iVar4 != 0) && ((*(byte *)(param_1 + 0xe93) & 1) == 0)) &&
        (1 < *(int *)(param_1 + 0x1600))) && (iVar4 = FUN_00833060(), iVar4 != 0)) {
      *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) | 0x1000000;
      return;
    }
    if (25.0 < *(float *)(param_1 + 0xa90)) {
      if (*(float *)(param_1 + 0xa90) <= 225.0) {
        if ((*(float *)(param_1 + 0x1614) <= 0.0) && (iVar4 = FUN_00833b40(), iVar4 != 0)) {
          *(float *)(param_1 + 0x1614) = *(float *)(param_1 + 0x1890) * 60.0;
          *(uint *)(param_1 + 0xe90) = *(uint *)(param_1 + 0xe90) | 0x10;
          sVar3 = FUN_00dde2d0(3,5);
          *(int *)(param_1 + 0x1610) = (int)sVar3;
          FUN_00824fd0(0x20008);
          return;
        }
        fVar2 = *(float *)(param_1 + 0xa90);
        if (((NAN(fVar2) || 49.0 < fVar2 == (fVar2 == 49.0)) ||
            (fVar6 = (float10)FUN_00dde300(0,0x3f800000),
            fVar6 < (float10)*(float *)(param_1 + 0x1618) ==
            (fVar6 == (float10)*(float *)(param_1 + 0x1618)))) ||
           (*(float *)(param_1 + 0x19c0) <= 10.0)) {
          fVar2 = *(float *)(param_1 + 0xa90);
          if (((!NAN(fVar2) && 49.0 < fVar2 != (fVar2 == 49.0)) &&
              (fVar6 = (float10)FUN_00dde300(0,0x3f800000),
              fVar6 < (float10)*(float *)(param_1 + 0x1840) !=
              (fVar6 == (float10)*(float *)(param_1 + 0x1840)))) &&
             ((fVar6 = (float10)FUN_008205f0(),
              fVar6 < (float10)0.87266463 != (fVar6 == (float10)0.87266463) &&
              ((iVar4 = FUN_0081ff70(0x41700000), iVar4 != 0 && (iVar4 = FUN_00833060(), iVar4 != 0)
               ))))) {
            return;
          }
        }
        else {
          if (*(int *)(param_1 + 0x1458) == 0x20007) {
            *(int *)(param_1 + 0x1620) = *(int *)(param_1 + 0x1620) + 1;
          }
          else {
            *(undefined4 *)(param_1 + 0x1620) = 0;
          }
          if ((*(int *)(param_1 + 0x1620) < *(int *)(param_1 + 0x161c)) &&
             (iVar4 = FUN_00825fe0(), iVar4 != 0)) {
            FUN_00824fd0(0x20007);
            return;
          }
        }
      }
      iVar4 = FUN_00838050();
      if (iVar4 != 0) {
        return;
      }
      fVar2 = *(float *)(param_1 + 0xa90);
      if (!NAN(fVar2) && 144.0 < fVar2 != (fVar2 == 144.0)) {
        FUN_00832d10();
        return;
      }
      fVar2 = *(float *)(param_1 + 0xa90);
      if (!NAN(fVar2) && 64.0 < fVar2 != (fVar2 == 64.0)) {
        FUN_00824fd0(0x10002);
        return;
      }
      if (NAN(fVar1) || 0.34906584 < fVar1 == (fVar1 == 0.34906584)) {
        return;
      }
      iVar4 = FUN_00822430();
      if (iVar4 != 0) goto LAB_0083d0f7;
      goto LAB_0083d474;
    }
    iVar4 = FUN_00825fe0();
    if ((iVar4 != 0) && (uVar5 = FUN_00dde2d0(0,100), (uVar5 & 1) != 0)) {
      uVar5 = FUN_00dde2d0(0,100);
      if ((uVar5 & 7) == 0) {
        FUN_00824fd0(0x20007);
        return;
      }
      FUN_00824fd0(0x20002);
      return;
    }
    if (*(int *)(param_1 + 0x1290) != 0) {
      FUN_00824fd0(0x10008);
      return;
    }
  }
  FUN_00824fd0(0x50000);
  return;
}

// 0083D490  FUN_0083d490  size=872  [callgraph]
void __fastcall FUN_0083d490(int *param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  float10 fVar4;
  undefined1 local_160 [348];
  
  uVar3 = 0;
  if ((param_1[0x3a4] & 0x100000U) != 0) {
    uVar3 = 0x40;
  }
  switch(param_1[0x187]) {
  case 0:
    uVar3 = uVar3 | 0x8000000;
    FUN_00aa4080(0x133,0,0x3e088889,0x3f800000,uVar3,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_00aa4080(0x134,0,0x3d088889,0x3f800000,uVar3,0xbf800000,0x3f800000);
      FUN_0083c230();
      uVar3 = param_1[0x3a4];
      if (param_1[0x128] == 1) {
        FUN_00eaa6e0(0,0);
        iVar2 = FUN_00a81330();
        if ((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
          FUN_004117d0(((uVar3 >> 0xb & 1) != 0) + '\x06',iVar2,param_1 + 0x428);
          FUN_00a963e0(local_160);
        }
      }
      param_1[0x248] = (int)((float)param_1[0x621] * 60.0);
      FUN_00827c10();
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x3a4] = param_1[0x3a4] | 0x20;
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00820b90(param_1 + 0x618,0x40900000,0);
    FUN_00827dd0(param_1 + 0x618,1);
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] <= 0.0) {
      FUN_00aa4080(0x135,0,0x3e088889,0x3f800000,uVar3 | 0x8000000,0xbf800000,0x3f800000);
      FUN_00825830(0);
      FUN_00825800();
      FUN_00833600();
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    fVar4 = (float10)FUN_008205f0();
    if ((float10)0.87266463 <= fVar4) {
      FUN_00aa4080(0x138,0,0x3e888889,0x3f800000,uVar3 | 0x8000000,0xbf800000,0x3f800000);
      FUN_00825830(0x41f00000);
      FUN_00825800();
      param_1[0x187] = 4;
      return;
    }
    break;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x61e] = (int)((float)param_1[0x625] * 60.0);
      FUN_00aa4080(0x138,0,0x3d888889,0x3f800000,uVar3 | 0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 0083D8A0  FUN_0083d8a0  size=414  [callgraph]
/* WARNING: Switch with 1 destination removed at 0x0083d973 : 14 cases all go to same destination */
/* WARNING: Switch with 1 destination removed at 0x0083d991 : 4 cases all go to same destination */
/* WARNING: Switch with 1 destination removed at 0x0083d9ab : 4 cases all go to same destination */
/* WARNING: Switch with 1 destination removed at 0x0083d9f4 : 8 cases all go to same destination */

uint __fastcall FUN_0083d8a0(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x618);
  uVar1 = uVar2;
  if ((int)uVar2 < 0x20001) {
    if ((uVar2 != 0x20000) && (uVar1 = uVar2 - 0x10000, uVar2 - 0x10000 < 0x14)) {
      uVar1 = (uint)*(byte *)(uVar2 + 0x82da58);
      switch(uVar2) {
      case 0x10000:
        uVar1 = FUN_0083d020();
        break;
      case 0x10001:
        uVar1 = FUN_0083c2a0();
        break;
      case 0x10002:
        uVar1 = FUN_00838960();
        break;
      case 0x10003:
        uVar1 = FUN_008389c0();
        break;
      case 0x1000f:
        uVar1 = FUN_0082ec00();
      }
    }
  }
  else if ((int)uVar2 < 0x30001) {
    if (uVar2 != 0x30000) {
      uVar1 = uVar2 - 0x20001;
      switch(uVar2) {
      case 0x20005:
        uVar1 = FUN_008270c0();
        break;
      case 0x20006:
        uVar1 = FUN_00827620();
        break;
      case 0x2000b:
        uVar1 = FUN_00828600();
      }
    }
  }
  else if ((int)uVar2 < 0x50001) {
    if (uVar2 != 0x50000) {
      uVar1 = uVar2 - 0x30001;
    }
  }
  else if ((int)uVar2 < 0x60001) {
    if (uVar2 != 0x60000) {
      uVar1 = uVar2 - 0x50001;
    }
  }
  else if ((int)uVar2 < 0x70001) {
    if (uVar2 == 0x70000) {
      uVar1 = FUN_00830370();
    }
    else {
      uVar1 = uVar2 - 0x60001;
    }
  }
  else if ((int)uVar2 < 0x80001) {
    if (uVar2 != 0x80000) {
      uVar1 = uVar2 - 0x70001;
      switch(uVar2 - 0x70001) {
      case 0:
        uVar1 = FUN_00830650();
      }
    }
  }
  else if ((int)uVar2 < 0x90001) {
    if ((uVar2 != 0x90000) && (uVar1 = uVar2 - 0x80001, uVar2 - 0x80001 < 8)) {
      uVar1 = (uint)*(byte *)(uVar2 + 0x7bdadb);
    }
  }
  else if (((int)uVar2 < 0xe0001) && (uVar2 != 0xe0000)) {
    uVar1 = uVar2 - 0x90001;
  }
  if (((*(int *)(param_1 + 0x4a0) == 0) && ((*(byte *)(param_1 + 0xb00) & 2) != 0)) &&
     (*(int *)(param_1 + 0x4e4) == 0)) {
    uVar1 = FUN_00832fc0();
  }
  if (*(int *)(param_1 + 0x1998) != 0) {
    uVar2 = FUN_00825110();
    return uVar2;
  }
  return uVar1;
}

// 0083DAF0  FUN_0083daf0  size=710  [callgraph]
void __fastcall FUN_0083daf0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x618);
  if (iVar1 < 0x20001) {
    if (iVar1 == 0x20000) {
      FUN_00826120();
      return;
    }
    switch(iVar1) {
    case 0x10000:
      FUN_0082dbf0();
      return;
    case 0x10001:
      FUN_00828460();
      return;
    case 0x10002:
      FUN_0082dce0();
      return;
    case 0x10003:
      FUN_0082de90();
      return;
    case 0x10004:
      FUN_008214a0();
      return;
    case 0x10005:
      FUN_008215a0();
      return;
    case 0x10006:
      FUN_0082e0e0();
      return;
    case 0x10007:
      FUN_0082e280();
      return;
    case 0x10008:
      FUN_008216c0();
      return;
    case 0x10009:
      FUN_00828700();
      return;
    case 0x1000a:
      FUN_008289b0();
      return;
    case 0x1000b:
      FUN_0082e500();
      return;
    case 0x1000c:
      FUN_0082e5b0();
      return;
    case 0x1000d:
      FUN_00835b20();
      return;
    case 0x1000e:
      FUN_008219a0();
      return;
    case 0x1000f:
      FUN_00838bd0();
      return;
    case 0x10010:
      FUN_00821a30();
      return;
    case 0x10011:
      FUN_00821b20();
      return;
    case 0x10012:
      FUN_0082ec30();
      return;
    case 0x10013:
      FUN_00835f30();
      return;
    }
  }
  else if (iVar1 < 0x30001) {
    if (iVar1 == 0x30000) {
      FUN_0082b1e0();
      return;
    }
    switch(iVar1) {
    case 0x20001:
      FUN_00826210();
      return;
    case 0x20002:
      FUN_00826370();
      return;
    case 0x20003:
      FUN_00826590();
      return;
    case 0x20004:
      FUN_00826f10();
      return;
    case 0x20005:
      FUN_00827120();
      return;
    case 0x20006:
      FUN_00827680();
      return;
    case 0x20007:
      FUN_00834230();
      return;
    case 0x20008:
      FUN_00834370();
      return;
    case 0x20009:
      FUN_00834880();
      return;
    case 0x2000a:
      FUN_00828560();
      return;
    case 0x2000b:
      FUN_0083c6f0();
      return;
    case 0x2000c:
      FUN_008349e0();
      return;
    case 0x2000d:
      FUN_00834c30();
      return;
    }
  }
  else if (iVar1 < 0x50001) {
    if (iVar1 == 0x50000) {
switchD_0083dc5b_caseD_0:
      FUN_0082d460();
      return;
    }
    switch(iVar1) {
    case 0x30001:
      FUN_0082b430();
      return;
    case 0x30002:
      FUN_0082be40();
      return;
    case 0x30003:
      FUN_0082c070();
      return;
    case 0x30004:
      FUN_0082b7b0();
      return;
    case 0x30005:
      FUN_0082bb20();
      return;
    case 0x30006:
      FUN_0082c3f0();
      return;
    case 0x30007:
      FUN_0082c590();
      return;
    case 0x30008:
      FUN_0082c760();
      return;
    case 0x30009:
    case 0x3000a:
      FUN_0082c840();
      return;
    case 0x3000b:
      FUN_0082cb90();
      return;
    case 0x3000c:
      FUN_0082ccf0();
      return;
    case 0x3000d:
      FUN_0082ce90();
      return;
    case 0x3000e:
      FUN_0082d000();
      return;
    }
  }
  else if (iVar1 < 0x60001) {
    if (iVar1 == 0x60000) {
      FUN_00838210();
      return;
    }
    switch(iVar1) {
    case 0x50001:
    case 0x50002:
      goto switchD_0083dc5b_caseD_0;
    case 0x50003:
      FUN_00838090();
      return;
    case 0x50004:
      FUN_0082d590();
      return;
    }
  }
  else if (iVar1 < 0x70001) {
    if (iVar1 == 0x70000) {
      FUN_00830550();
      return;
    }
    switch(iVar1) {
    case 0x60001:
      FUN_00838490();
      return;
    case 0x60002:
      FUN_0082d8b0();
      return;
    case 0x60003:
    case 0x60004:
      FUN_0082d960();
      return;
    }
  }
  else if (iVar1 < 0x80001) {
    if (iVar1 == 0x80000) {
      FUN_00830a40();
      return;
    }
    switch(iVar1) {
    case 0x70001:
      FUN_00830730();
      return;
    case 0x70002:
      FUN_008307d0();
      return;
    case 0x70003:
      FUN_00830920();
      return;
    case 0x70004:
      FUN_0083d490();
      return;
    case 0x70005:
      FUN_00836ee0();
      return;
    case 0x70006:
      FUN_008309b0();
      return;
    }
  }
  else if (iVar1 < 0x90001) {
    if (iVar1 == 0x90000) {
      FUN_0082ecb0();
      return;
    }
    switch(iVar1) {
    case 0x80001:
      FUN_00830ad0();
      return;
    case 0x80002:
      FUN_0083aae0();
      return;
    case 0x80003:
      FUN_00830ba0();
      return;
    case 0x80004:
      FUN_0083adc0();
      return;
    case 0x80005:
      FUN_00836ff0();
      return;
    case 0x80006:
      FUN_00821f80();
      return;
    case 0x80007:
      FUN_00830e00();
      return;
    case 0x80008:
      FUN_0083aff0();
      return;
    }
  }
  else if (iVar1 < 0xe0001) {
    if (iVar1 == 0xe0000) {
      FUN_0082f320();
      return;
    }
    switch(iVar1) {
    case 0x90001:
      FUN_0082edb0();
      return;
    case 0x90002:
      FUN_0082eee0();
      return;
    case 0x90003:
      FUN_0082f0c0();
      return;
    case 0x90004:
      FUN_00838f80();
      return;
    }
  }
  else if (iVar1 < 0xf0001) {
    if (iVar1 == 0xf0000) {
      FUN_00828e30();
      return;
    }
    if (iVar1 == 0xe0001) {
      FUN_008393d0();
      return;
    }
  }
  else {
    switch(iVar1) {
    case 0xf0001:
      FUN_00829040();
      return;
    case 0xf0002:
      FUN_00829540();
      return;
    case 0xf0003:
      FUN_00829ab0();
      return;
    case 0xf0004:
      FUN_00829c60();
      return;
    case 0xf0005:
      FUN_0082a640();
      return;
    case 0xf0006:
      FUN_00820fe0();
      return;
    case 0xf0007:
    case 0xf0008:
      FUN_00834d40();
      return;
    }
  }
  return;
}

// 0083DF00  Emc220::vf4C  size=169  [class]
void __fastcall Emc220::vf4C(int *param_1)

{
  float fVar1;
  int iVar2;
  
  BehaviorEmBase::vf4C();
  if ((*(byte *)(param_1[0x13c] + 0x28) & 2) == 0) {
    FUN_00832850();
    FUN_00832a30();
    FUN_00827c60();
    iVar2 = FUN_00ac4770();
    if (iVar2 == 0) {
      FUN_0083d8a0();
    }
    FUN_0083daf0();
    iVar2 = FUN_00a94ce0(1);
    if (iVar2 != 0) {
      FUN_00a94bc0(1,0);
    }
    FUN_008253c0();
    FUN_008244b0();
    if (((param_1[0x3a4] & 0x40000000U) != 0) &&
       (fVar1 = (float)param_1[0x69f], param_1[0x69f] = (int)(fVar1 - (float)param_1[0x244]),
       fVar1 - (float)param_1[0x244] <= 0.0)) {
      (**(code **)(*param_1 + 0x110))(0);
    }
  }
  return;
}

// 00AB3590  Emc220::Emc220  size=352  [class]
undefined4 * __fastcall Emc220::Emc220(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  BehaviorEmBase::BehaviorEmBase();
  *param_1 = EmBaseDLC::vftable;
  cEspControler::cEspControler();
  *param_1 = vftable;
  param_1[0x3a4] = 0;
  param_1[0x3a5] = 0;
  param_1[0x3a6] = 0;
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  FUN_00a7c930();
  FUN_00a7c930();
  param_1[0x498] = 0;
  param_1[0x499] = 0;
  param_1[0x49a] = 0;
  param_1[0x4a4] = 0;
  param_1[0x4a5] = 0;
  param_1[0x4a6] = 0;
  param_1[0x4b0] = 0;
  param_1[0x4b1] = 0;
  param_1[0x4b2] = 0;
  param_1[0x4bc] = 0;
  param_1[0x4bd] = 0;
  param_1[0x4be] = 0;
  param_1[0x4c8] = 0;
  param_1[0x4c9] = 0;
  param_1[0x4ca] = 0;
  param_1[0x4d4] = 0;
  param_1[0x4d5] = 0;
  param_1[0x4d6] = 0;
  param_1[0x4e0] = 0;
  param_1[0x4e1] = 0;
  param_1[0x4e2] = 0;
  param_1[0x4ec] = 0;
  param_1[0x4ed] = 0;
  param_1[0x4ee] = 0;
  FUN_00904d60();
  FUN_00904d60();
  FUN_00a603a0();
  FUN_00a603a0();
  FUN_00a603a0();
  FUN_00a831e0();
  iVar2 = 10;
  puVar1 = param_1 + 0x5c8;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 5;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return param_1;
}

// 00AB36F0  Emc220::vf04  size=6  [class]
undefined * Emc220::vf04(void)

{
  return &DAT_01b35a10;
}

// 00AB3700  FUN_00ab3700  size=121  [callgraph]
void FUN_00ab3700(void)

{
  cXml::cXml_7();
  cXml::cXml_7();
  cXml::cXml_7();
  FUN_00905ce0();
  FUN_00905ce0();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  cEspControler::~cEspControler();
  cEnemyCautionStateManager::~cEnemyCautionStateManager();
  return;
}

// 00AB9F60  Emc220::destruct  size=30  [class]
undefined4 __thiscall Emc220::destruct(undefined4 param_1,byte param_2)

{
  FUN_00ab3700();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

