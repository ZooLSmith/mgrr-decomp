// src/enemy/em0220/Em0220.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 00559E30..00AB6EF0, 253 functions

#include "types.h"

// 00559E30  FUN_00559e30  size=71  [callgraph]
void __thiscall FUN_00559e30(int param_1,undefined4 param_2)

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

// 00559FF0  FUN_00559ff0  size=30  [callgraph]
undefined4 __thiscall FUN_00559ff0(int param_1,float param_2)

{
  if (param_2 < *(float *)(param_1 + 0x1900)) {
    return 1;
  }
  return 0;
}

// 0055A010  FUN_0055a010  size=32  [callgraph]
undefined4 __thiscall FUN_0055a010(int param_1,float param_2)

{
  if (*(float *)(param_1 + 0x1900) < -param_2) {
    return 1;
  }
  return 0;
}

// 0055A030  FUN_0055a030  size=28  [callgraph]
void FUN_0055a030(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00a7c7f0();
  FUN_00a7c960(uVar1);
  return;
}

// 0055A1A0  Em0220::vf50  size=32  [class]
void __fastcall Em0220::vf50(int param_1)

{
  FUN_00a93170();
  if (*(int *)(param_1 + 0x7b0) != 0) {
    FUN_008f3cb0(param_1);
  }
  BehaviorEmBase::vf50();
  return;
}

// 0055A1C0  Em0220::vf2F8  size=46  [class]
void __fastcall Em0220::vf2F8(int *param_1)

{
  if (param_1[0x294] != 0) {
    (**(code **)(*param_1 + 0x344))(7,0,1);
    param_1[0x1af] = 1;
  }
  FUN_009fdde0();
  return;
}

// 0055A1F0  Em0220::vf268  size=32  [class]
undefined4 __thiscall Em0220::vf268(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  if (*param_4 != 9) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x19e8) = 0;
  return 1;
}

// 0055A210  Em0220::vf228  size=17  [class]
undefined4 __fastcall Em0220::vf228(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x6ec) == 0) {
    return 0;
  }
  uVar1 = BehaviorEmBase::vf228();
  return uVar1;
}

// 0055A230  Em0220::vf368  size=12  [class]
bool __fastcall Em0220::vf368(int param_1)

{
  return *(int *)(param_1 + 0x19d8) != 0;
}

// 0055A240  FUN_0055a240  size=306  [between]
void __thiscall FUN_0055a240(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0x13c0) = *(undefined4 *)(param_2 + 0x13c0);
  *(undefined4 *)(param_1 + 0x13c4) = *(undefined4 *)(param_2 + 0x13c4);
  *(undefined4 *)(param_1 + 0x1538) = *(undefined4 *)(param_2 + 0x1538);
  *(undefined4 *)(param_1 + 0x1548) = *(undefined4 *)(param_2 + 0x1548);
  *(undefined4 *)(param_1 + 0x154c) = *(undefined4 *)(param_2 + 0x154c);
  *(undefined4 *)(param_1 + 0x1758) = *(undefined4 *)(param_2 + 0x1758);
  *(undefined4 *)(param_1 + 0x1760) = *(undefined4 *)(param_2 + 0x1760);
  *(undefined4 *)(param_1 + 6000) = *(undefined4 *)(param_2 + 6000);
  *(undefined4 *)(param_1 + 0x1774) = *(undefined4 *)(param_2 + 0x1774);
  *(undefined4 *)(param_1 + 0x13a8) = *(undefined4 *)(param_2 + 0x13a8);
  *(undefined4 *)(param_1 + 0x13ac) = *(undefined4 *)(param_2 + 0x13ac);
  *(undefined4 *)(param_1 + 0x13d4) = *(undefined4 *)(param_2 + 0x13d4);
  *(undefined4 *)(param_1 + 0x13d8) = *(undefined4 *)(param_2 + 0x13d8);
  *(undefined4 *)(param_1 + 0x1880) = *(undefined4 *)(param_2 + 0x1880);
  *(undefined4 *)(param_1 + 0x1768) = *(undefined4 *)(param_2 + 0x1768);
  *(undefined4 *)(param_1 + 0x176c) = *(undefined4 *)(param_2 + 0x176c);
  *(undefined4 *)(param_1 + 0x13b0) = *(undefined4 *)(param_2 + 0x13b0);
  *(undefined4 *)(param_1 + 0x17c0) = *(undefined4 *)(param_2 + 0x17c0);
  *(undefined4 *)(param_1 + 0x17ac) = *(undefined4 *)(param_2 + 0x17ac);
  *(undefined4 *)(param_1 + 0x17b4) = *(undefined4 *)(param_2 + 0x17b4);
  *(undefined4 *)(param_1 + 0x17b0) = *(undefined4 *)(param_2 + 0x17b0);
  *(undefined4 *)(param_1 + 0x17c4) = *(undefined4 *)(param_2 + 0x17c4);
  *(undefined4 *)(param_1 + 0x1908) = *(undefined4 *)(param_2 + 0x1908);
  FID_conflict__memcpy((void *)(param_1 + 0x1138),(void *)(param_2 + 0x1138),0x50);
  return;
}

// 0055A3E0  FUN_0055a3e0  size=174  [between]
void __fastcall FUN_0055a3e0(int param_1)

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

// 0055A4A0  FUN_0055a4a0  size=79  [between]
float10 __thiscall FUN_0055a4a0(int param_1,float *param_2)

{
  if (*(int *)(param_1 + 0x1320) != 0) {
    return ((float10)param_2[2] - (float10)*(float *)(param_1 + 0x1338)) *
           (float10)*(float *)(param_1 + 0x1348) +
           (float10)*(float *)(param_1 + 0x1344) *
           ((float10)param_2[1] - (float10)*(float *)(param_1 + 0x1334)) +
           (float10)*(float *)(param_1 + 0x1340) *
           ((float10)*param_2 - (float10)*(float *)(param_1 + 0x1330));
  }
  return (float10)-1.0;
}

// 0055A510  FUN_0055a510  size=97  [between]
undefined4 __fastcall FUN_0055a510(int param_1)

{
  float *pfVar1;
  float10 fVar2;
  undefined1 local_20 [28];
  
  if (*(int *)(param_1 + 0x12b0) != 0) {
    pfVar1 = (float *)FUN_00a925a0(local_20);
    fVar2 = (float10)fcos((float10)1.0471975803375244);
    if ((float10)*(float *)(param_1 + 0x12d8) * (float10)pfVar1[2] +
        (float10)*(float *)(param_1 + 0x12d0) * (float10)*pfVar1 +
        (float10)*(float *)(param_1 + 0x12d4) * (float10)pfVar1[1] < -fVar2) {
      return 1;
    }
  }
  return 0;
}

// 0055A580  FUN_0055a580  size=183  [between]
float10 __thiscall FUN_0055a580(int param_1,undefined4 param_2,float param_3,float param_4)

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

// 0055A640  FUN_0055a640  size=195  [between]
float10 __thiscall
FUN_0055a640(int param_1,undefined4 param_2,float param_3,float param_4,float param_5)

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

// 0055A710  FUN_0055a710  size=36  [between]
void __thiscall FUN_0055a710(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0055a580(*(int *)(param_1 + 0xa84) + 0x40,param_2,param_3);
  return;
}

// 0055A740  FUN_0055a740  size=44  [between]
void __thiscall FUN_0055a740(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0055a640(*(int *)(param_1 + 0xa84) + 0x40,param_2,param_3,param_4);
  return;
}

// 0055A770  FUN_0055a770  size=37  [between]
float10 __thiscall FUN_0055a770(int param_1,undefined4 param_2)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00a8ec30(param_2);
  fVar1 = (float10)FUN_00ddba30((float)((float10)*(float *)(param_1 + 0x94) - fVar1));
  return ABS(fVar1);
}

// 0055A7A0  FUN_0055a7a0  size=40  [between]
float10 __fastcall FUN_0055a7a0(int param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00a8ec30(*(int *)(param_1 + 0xa84) + 0x40);
  fVar1 = (float10)FUN_00ddba30((float)((float10)*(float *)(param_1 + 0x94) - fVar1));
  return ABS(fVar1);
}

// 0055A7D0  FUN_0055a7d0  size=105  [between]
undefined4 __thiscall FUN_0055a7d0(int param_1,float *param_2)

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

// 0055A840  FUN_0055a840  size=143  [between]
int __thiscall FUN_0055a840(int *param_1,undefined4 param_2,float *param_3)

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
  fVar2 = (float10)FUN_00ddba30((float)(fVar2 - (float10)(float)(&DAT_01641878)[iVar1]));
  *param_3 = (float)fVar2;
  return iVar1;
}

// 0055A940  FUN_0055a940  size=87  [between]
void __thiscall FUN_0055a940(int *param_1,int param_2)

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

// 0055A9A0  FUN_0055a9a0  size=52  [between]
undefined4 __fastcall FUN_0055a9a0(int param_1)

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

// 0055AA40  FUN_0055aa40  size=135  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0055aa40(float *param_1)

{
  int iVar1;
  
  if ((_DAT_01b34fa0 & 1) == 0) {
    _DAT_01b34fa0 = _DAT_01b34fa0 | 1;
    _DAT_01b34f90 = 0;
    _DAT_01b34f94 = 0;
    _DAT_01b34f98 = 0x40066666;
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      iVar1 = FUN_00a12210(0);
      if (iVar1 != 0) {
        D3DXVec3TransformNormal(param_1,&DAT_01b34f90,iVar1 + 0x10);
        *param_1 = *param_1 + *(float *)(iVar1 + 0x40);
        param_1[1] = *(float *)(iVar1 + 0x44) + param_1[1];
        param_1[2] = *(float *)(iVar1 + 0x48) + param_1[2];
      }
    }
  }
  return;
}

// 0055AAD0  FUN_0055aad0  size=16  [between]
int __fastcall FUN_0055aad0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00ac89d0();
  if (iVar1 == 0) {
    iVar1 = param_1;
  }
  return iVar1;
}

// 0055ABA0  FUN_0055aba0  size=22  [between]
undefined4 __fastcall FUN_0055aba0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 100;
  if (*(int *)(param_1 + 0x754) != 0) {
    uVar1 = FUN_00ac84d0(0xb);
  }
  return uVar1;
}

// 0055ABD0  FUN_0055abd0  size=185  [between]
void __fastcall FUN_0055abd0(int *param_1)

{
  int iVar1;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x65,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a8c760(0);
  if (iVar1 != 0) {
    FUN_0055a580(param_1[0x2a1] + 0x40,0x3e3851ec,0x3db2b8c2);
  }
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0055ac87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 0055AD10  FUN_0055ad10  size=145  [between]
/* WARNING: Removing unreachable block (ram,0x0055ad33) */
/* WARNING: Removing unreachable block (ram,0x0055ad89) */

void __fastcall FUN_0055ad10(int param_1)

{
  DAT_01dd0814 = DAT_01dd0814 * 0x19660d + 0x3c6ef35f;
  *(float *)(param_1 + 0x18e0) = (1.0 - (float)(DAT_01dd0814 >> 8) * 5.960465e-08 * 2.0) * 5.0;
  *(undefined4 *)(param_1 + 0x18e4) = 0;
  DAT_01dd0814 = DAT_01dd0814 * 0x19660d + 0x3c6ef35f;
  *(float *)(param_1 + 0x18e8) = (1.0 - (float)(DAT_01dd0814 >> 8) * 5.960465e-08 * 2.0) * 5.0;
  return;
}

// 0055ADD0  FUN_0055add0  size=271  [between]
void __thiscall FUN_0055add0(int param_1,float *param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float local_20;
  float local_1c;
  float local_18;
  
  iVar5 = *(int *)(param_1 + 0x1870) + 1;
  if (9 < iVar5) {
    iVar5 = 0;
  }
  iVar5 = (iVar5 + 0x17d) * 0x10;
  fVar1 = *(float *)(iVar5 + param_1);
  iVar5 = iVar5 + param_1;
  fVar2 = *(float *)(iVar5 + 4);
  fVar3 = *(float *)(iVar5 + 8);
  fVar4 = *(float *)(iVar5 + 0xc);
  FUN_0055aa40(&local_20);
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
  if (*(int *)(param_1 + 0x18cc) != 0) {
    *param_2 = *param_2 + *(float *)(param_1 + 0x18e0);
    param_2[1] = fVar1 + 0.25 + *(float *)(param_1 + 0x18e4);
    param_2[2] = *(float *)(param_1 + 0x18e8) + param_2[2];
    param_2[3] = *(float *)(param_1 + 0x18ec) + param_2[3];
    return;
  }
  return;
}

// 0055AEE0  FUN_0055aee0  size=38  [between]
bool __fastcall FUN_0055aee0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00ac4780();
  if (iVar1 == 4) {
    return false;
  }
  return *(int *)(param_1 + 0x19c4) <= *(int *)(param_1 + 0x19c0);
}

// 0055AF60  Em0220::vf158  size=5  [class]
undefined4 Em0220::vf158(void)

{
  return 0;
}

// 0055AF70  FUN_0055af70  size=39  [callgraph]
void __thiscall FUN_0055af70(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x18f4) = param_2;
  uVar1 = FUN_00e678d0(2,param_2,0xffffffff);
  FUN_00e80d00(uVar1);
  return;
}

// 0055B030  FUN_0055b030  size=29  [callgraph]
void __fastcall FUN_0055b030(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00e5e0c0("Boss4000_121010",param_1,0xffffffff,0);
  *(undefined4 *)(param_1 + 0x19a4) = uVar1;
  return;
}

// 0055B050  FUN_0055b050  size=29  [callgraph]
void __fastcall FUN_0055b050(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00e5e0c0("Boss4000_131010",param_1,0xffffffff,0);
  *(undefined4 *)(param_1 + 0x19a4) = uVar1;
  return;
}

// 0055B180  FUN_0055b180  size=23  [callgraph]
void FUN_0055b180(void)

{
  FUN_00c27f40(2,0x45e10000);
  return;
}

// 0055B210  FUN_0055b210  size=690  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0055b210(int *param_1)

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

// 0055B4F0  FUN_0055b4f0  size=1  [callgraph]
void FUN_0055b4f0(void)

{
  return;
}

// 0055B500  FUN_0055b500  size=1  [callgraph]
void FUN_0055b500(void)

{
  return;
}

// 0055B520  FUN_0055b520  size=1  [callgraph]
void FUN_0055b520(void)

{
  return;
}

// 0055B570  FUN_0055b570  size=39  [callgraph]
undefined4 FUN_0055b570(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if ((((iVar1 != 0x42) && (iVar1 != 99)) && (iVar1 != 0x44)) && (iVar1 != 0x39)) {
    return 0;
  }
  return 1;
}

// 0055B650  FUN_0055b650  size=287  [callgraph]
void __fastcall FUN_0055b650(int *param_1)

{
  float fVar1;
  int iVar2;
  
  iVar2 = param_1[0x187];
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  if (iVar2 == 0) {
    FUN_00aa4080(0xaf,0,0x3e888889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = (int)((float)param_1[0x620] * 60.0);
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
                    /* WARNING: Could not recover jumptable at 0x0055b6a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
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

// 0055B7D0  FUN_0055b7d0  size=722  [callgraph]
void __fastcall FUN_0055b7d0(int *param_1)

{
  code *pcVar1;
  float *pfVar2;
  int iVar3;
  undefined1 local_30 [12];
  undefined1 auStack_24 [32];
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x20,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x4e8] = 0;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_00aa4080(0x21,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      pcVar1 = *(code **)(*param_1 + 0x1d4);
      param_1[0x22a] = (int)((float)param_1[0x4f7] * 1.8);
      param_1[0x225] = (int)((float)param_1[0x4f7] * 1.8 * 16.0);
      (*pcVar1)(1);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
    }
    (**(code **)(*param_1 + 0x220))(0x40a00000);
    return;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_00aa4080(0x22,0,0x3d888889,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
    }
    pfVar2 = (float *)FUN_00a8b8a0(local_30,(float)param_1[0x244] * 0.2);
    param_1[0x14] = (int)((float)param_1[0x14] + *pfVar2);
    param_1[0x15] = (int)(pfVar2[1] + (float)param_1[0x15]);
    param_1[0x16] = (int)(pfVar2[2] + (float)param_1[0x16]);
    param_1[0x17] = (int)(pfVar2[3] + (float)param_1[0x17]);
    (**(code **)(*param_1 + 0x220))(0x40a00000);
    return;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar3 != 0) {
      FUN_00aa4080(0x23,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      (**(code **)(*param_1 + 0x1d4))(0);
      param_1[0x187] = param_1[0x187] + 1;
    }
    pfVar2 = (float *)FUN_00a8b8a0(auStack_24,(float)param_1[0x244] * 0.2);
    param_1[0x14] = (int)(*pfVar2 + (float)param_1[0x14]);
    param_1[0x15] = (int)(pfVar2[1] + (float)param_1[0x15]);
    param_1[0x16] = (int)(pfVar2[2] + (float)param_1[0x16]);
    param_1[0x17] = (int)(pfVar2[3] + (float)param_1[0x17]);
    return;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 0055BB10  FUN_0055bb10  size=239  [callgraph]
void __fastcall FUN_0055bb10(int *param_1)

{
  int iVar1;
  float10 fVar2;
  
  if (param_1[0x187] == 0) {
    iVar1 = FUN_0055a840(param_1[0x2a1] + 0x40,param_1 + 0x248);
    FUN_00aa4080(*(undefined4 *)(&DAT_016419bc + iVar1 * 4),0,0x3e4ccccd,0x3f800000,0x8000000,
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
                    /* WARNING: Could not recover jumptable at 0x0055bbfd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 0055BC10  FUN_0055bc10  size=239  [callgraph]
void __fastcall FUN_0055bc10(int *param_1)

{
  int iVar1;
  float10 fVar2;
  
  if (param_1[0x187] == 0) {
    iVar1 = FUN_0055a840(param_1[0x2a1] + 0x40,param_1 + 0x248);
    FUN_00aa4080(*(undefined4 *)(&DAT_016419cc + iVar1 * 4),0,0x3e4ccccd,0x3f800000,0x8000000,
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
                    /* WARNING: Could not recover jumptable at 0x0055bcfd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 0055BD30  FUN_0055bd30  size=640  [callgraph]
void __fastcall FUN_0055bd30(int *param_1)

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
    param_1[0x4e8] = 0;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      FUN_00aa4080(0x21,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      pcVar2 = *(code **)(*param_1 + 0x1d4);
      param_1[0x22a] = (int)((float)param_1[0x4f7] * 1.8);
      param_1[0x225] = (int)((float)param_1[0x4f7] * 1.8 * 16.0);
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
    goto LAB_0055beab;
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
LAB_0055beab:
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

// 0055C010  FUN_0055c010  size=123  [callgraph]
void __fastcall FUN_0055c010(int *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0055c089. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 0055C0A0  FUN_0055c0a0  size=214  [callgraph]
void __fastcall FUN_0055c0a0(int param_1)

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

// 0055C190  FUN_0055c190  size=145  [callgraph]
void __fastcall FUN_0055c190(int *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0055c21f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

// 0055C2C0  FUN_0055c2c0  size=172  [callgraph]
undefined4 __fastcall FUN_0055c2c0(int param_1)

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
  local_4 = &PTR_s__EFD02_018814d0;
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
    if (0x18814ef < (int)local_4) {
      return 0;
    }
  } while( true );
}

// 0055C380  FUN_0055c380  size=415  [callgraph]
void __thiscall FUN_0055c380(int param_1,int param_2)

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
      *(undefined4 *)(param_1 + 0xdcc + local_c * 0x14) = 1;
      if (local_c == 7) {
        iVar3 = FUN_00a81330();
        if ((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), puVar2 = PTR_s__EFD01_018814ec, iVar3 != 0)) {
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
        puVar2 = (&PTR_s__EFD02_018814d0)[local_c];
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
          FUN_00a1bd80((&PTR_s__EFD02_018814d0)[local_c],1);
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

// 0055C5F0  FUN_0055c5f0  size=125  [callgraph]
void __fastcall FUN_0055c5f0(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(param_1[0x62c],0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
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
                    /* WARNING: Could not recover jumptable at 0x0055c66b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 0055C750  FUN_0055c750  size=361  [callgraph]
void __fastcall FUN_0055c750(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  float10 fVar5;
  
  puVar2 = (undefined4 *)(param_1 + 0x164c);
  iVar4 = 0xb;
  do {
    *(undefined2 *)(puVar2 + -3) = 0;
    *(undefined2 *)((int)puVar2 + -10) = 0;
    *puVar2 = 0;
    puVar2 = puVar2 + 5;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  *(undefined2 *)(param_1 + 0x1748) = 0;
  *(undefined1 *)(param_1 + 0x174a) = 0;
  *(undefined4 *)(param_1 + 0x174c) = 0;
  *(undefined4 *)(param_1 + 0x1750) = 0;
  *(undefined4 *)(param_1 + 0x1754) = 0;
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
    *(float *)(param_1 + 0x171c) = (float)fVar5;
    fVar5 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x3c))(iVar1);
    *(float *)(param_1 + 0x1720) = (float)fVar5;
    fVar5 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x44))(iVar1);
    *(float *)(param_1 + 0x1724) = (float)fVar5;
    fVar5 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x4c))(iVar1);
    *(float *)(param_1 + 0x1728) = (float)fVar5;
    iVar1 = iVar4 + 0x3c;
    fVar5 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(iVar1);
    *(float *)(param_1 + 0x172c) = (float)fVar5;
    fVar5 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x3c))(iVar1);
    *(float *)(param_1 + 0x1730) = (float)fVar5;
    fVar5 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x44))(iVar1);
    *(float *)(param_1 + 0x1734) = (float)fVar5;
    fVar5 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x4c))(iVar1);
    *(float *)(param_1 + 0x1738) = (float)fVar5;
    iVar4 = iVar4 + 0x3d;
    fVar5 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(iVar4);
    *(float *)(param_1 + 0x173c) = (float)fVar5;
    fVar5 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x3c))(iVar4);
    *(float *)(param_1 + 0x1740) = (float)fVar5;
    fVar5 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x44))(iVar4);
    *(float *)(param_1 + 0x1744) = (float)fVar5;
  }
  return;
}

// 0055CDA0  FUN_0055cda0  size=42  [callgraph]
uint FUN_0055cda0(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar2 = &DAT_01be9c28;
  (**(code **)(*param_1 + 4))(&DAT_01be9c28);
  iVar1 = FUN_00dd6d80(puVar2);
  return -(uint)(iVar1 != 0) & (uint)param_1;
}

// 0055CDD0  FUN_0055cdd0  size=42  [callgraph]
uint FUN_0055cdd0(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar2 = &DAT_01b35008;
  (**(code **)(*param_1 + 4))(&DAT_01b35008);
  iVar1 = FUN_00dd6d80(puVar2);
  return -(uint)(iVar1 != 0) & (uint)param_1;
}

// 0055CE40  FUN_0055ce40  size=42  [callgraph]
uint FUN_0055ce40(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar2 = &DAT_01be9c2c;
  (**(code **)(*param_1 + 4))(&DAT_01be9c2c);
  iVar1 = FUN_00dd6d80(puVar2);
  return -(uint)(iVar1 != 0) & (uint)param_1;
}

// 0055CEB0  FUN_0055ceb0  size=27  [callgraph]
undefined4 __fastcall FUN_0055ceb0(int param_1)

{
  if ((*(int *)(param_1 + 0x4a0) == 0) && ((*(byte *)(param_1 + 0xb00) & 2) != 0)) {
    return 1;
  }
  return 0;
}

// 0055CED0  FUN_0055ced0  size=23  [callgraph]
undefined4 __fastcall FUN_0055ced0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xa84) != 0) {
    uVar1 = FUN_0055a7d0(*(int *)(param_1 + 0xa84) + 0x40);
    return uVar1;
  }
  return 0;
}

// 0055D5E0  FUN_0055d5e0  size=27  [callgraph]
undefined4 __fastcall FUN_0055d5e0(int param_1)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0xdc0) & 0x20) == 0) {
    iVar1 = FUN_00a8c760(0x32);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}

// 0055D6E0  FUN_0055d6e0  size=30  [callgraph]
undefined4 __fastcall FUN_0055d6e0(int param_1)

{
  int iVar1;
  
  if ((*(uint *)(param_1 + 0xdc0) & 0x2000000) == 0) {
    iVar1 = FUN_00a8c760(6);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}

// 0055D700  Em0220::vf248  size=49  [class]
void __fastcall Em0220::vf248(int param_1)

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

// 0055D740  Em0220::vf110  size=126  [class]
void __thiscall Em0220::vf110(int param_1,int param_2)

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
    *(uint *)(param_1 + 0xdc0) = *(uint *)(param_1 + 0xdc0) | 0x40000000;
    return;
  }
  *(uint *)(param_1 + 0xdc0) = *(uint *)(param_1 + 0xdc0) & 0xbfffffff;
  return;
}

// 0055D7C0  FUN_0055d7c0  size=252  [between]
undefined4 __fastcall FUN_0055d7c0(int param_1)

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
      uVar5 = 0x30370;
      pcVar4 = "ChainSaw";
    }
    else {
      if (*(int *)(param_1 + 0x4a0) != 1) {
        return 1;
      }
      uVar5 = 0x30371;
      pcVar4 = "RailGun";
    }
    iVar1 = FUN_00a82090(pcVar4,uVar5,0);
    if (iVar1 != 0) {
      uVar5 = FUN_00a7c7f0();
      FUN_00a7c960(uVar5);
      FUN_00ac8ad0(0,*(undefined4 *)(param_1 + 0x4f0),iVar1,0x66,0xffffffff,4);
      piVar2 = (int *)FUN_00a7c8a0();
      if (piVar2 != (int *)0x0) {
        puVar6 = &DAT_01b35008;
        (**(code **)(*piVar2 + 4))(&DAT_01b35008);
        iVar1 = FUN_00dd6d70(puVar6);
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

// 0055D8C0  FUN_0055d8c0  size=211  [between]
void __fastcall FUN_0055d8c0(int param_1)

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
        goto LAB_0055d95b;
      }
      pcVar3 = *(code **)(**(int **)(param_1 + 0x754) + 0x24);
    }
    else {
      pcVar3 = *(code **)(**(int **)(param_1 + 0x754) + 0x2c);
    }
    uVar1 = (*pcVar3)(iVar2);
  }
LAB_0055d95b:
  FUN_00a8edf0(uVar1);
  if ((*(int *)(param_1 + 0x4a0) == 0) && ((*(uint *)(param_1 + 0xb00) & 2) != 0)) {
    DAT_018b4414 = *(undefined4 *)(param_1 + 0x4b4);
    DAT_01dc08dc = 0;
    DAT_01dc08e0 = *(uint *)(param_1 + 0xb00);
  }
  return;
}

// 0055D9B0  FUN_0055d9b0  size=1445  [between]
void __fastcall FUN_0055d9b0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  int iVar6;
  float10 fVar7;
  
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
  if (*(int **)(param_1 + 0x754) == (int *)0x0) goto LAB_0055df46;
  fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(iVar6 + 0x34);
  *(float *)(param_1 + 0x13c0) = (float)fVar7;
  fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x3c))(iVar6 + 0x34);
  *(float *)(param_1 + 0x13c4) = (float)fVar7;
  fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(iVar6 + 0x35);
  *(float *)(param_1 + 0x1538) = (float)fVar7;
  fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(iVar6 + 0x37);
  *(float *)(param_1 + 0x1548) = (float)fVar7;
  uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x24))(iVar6 + 0x37);
  *(undefined4 *)(param_1 + 0x154c) = uVar4;
  iVar1 = iVar6 + 0x39;
  uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x24))(iVar1);
  *(undefined4 *)(param_1 + 0x1758) = uVar4;
  uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x2c))(iVar1);
  *(undefined4 *)(param_1 + 0x19c4) = uVar4;
  fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(iVar1);
  *(float *)(param_1 + 0x1760) = (float)fVar7;
  fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(iVar6 + 0x49);
  *(float *)(param_1 + 6000) = (float)fVar7;
  fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x3c))(iVar6 + 0x49);
  *(float *)(param_1 + 0x1774) = (float)fVar7;
  uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x24))(iVar6 + 0x31);
  *(undefined4 *)(param_1 + 0x13a8) = uVar4;
  uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x2c))(iVar6 + 0x31);
  *(undefined4 *)(param_1 + 0x13ac) = uVar4;
  fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(iVar6 + 0x32);
  *(float *)(param_1 + 0x13d4) = (float)fVar7;
  uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x24))(iVar6 + 0x32);
  *(undefined4 *)(param_1 + 0x13d8) = uVar4;
  fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(iVar6 + 0x56);
  *(float *)(param_1 + 0x1908) = (float)fVar7;
  uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x24))(iVar6 + 0x47);
  *(undefined4 *)(param_1 + 0x1998) = uVar4;
  fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(iVar6 + 0x47);
  *(float *)(param_1 + 0x1990) = (float)fVar7;
  fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(iVar6 + 0x57);
  *(float *)(param_1 + 0x19b4) = (float)fVar7;
  fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(iVar6 + 0x58);
  *(float *)(param_1 + 0x19cc) = (float)fVar7;
  if (*(int *)(param_1 + 0x4a0) == 0) {
    if ((*(byte *)(param_1 + 0xb00) & 2) != 0) {
      pcVar5 = *(code **)(**(int **)(param_1 + 0x754) + 0x34);
      goto LAB_0055dbcd;
    }
    fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x3c))(iVar6 + 0x55);
  }
  else {
    pcVar5 = *(code **)(**(int **)(param_1 + 0x754) + 0x44);
LAB_0055dbcd:
    fVar7 = (float10)(*pcVar5)(iVar6 + 0x55);
  }
  *(float *)(param_1 + 0x1880) = (float)fVar7;
  iVar1 = **(int **)(param_1 + 0x754);
  if ((*(byte *)(param_1 + 0xb00) & 1) == 0) {
    iVar2 = iVar6 + 0x4b;
    if (*(int *)(param_1 + 0x4a0) == 0) {
      fVar7 = (float10)(**(code **)(iVar1 + 0x34))();
      *(float *)(param_1 + 0x1768) = (float)fVar7;
      fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x44))(iVar2);
      *(float *)(param_1 + 0x176c) = (float)fVar7;
      uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x24))(iVar6 + 0x33);
      *(undefined4 *)(param_1 + 0x13b0) = uVar4;
      pcVar5 = *(code **)(**(int **)(param_1 + 0x754) + 0x34);
    }
    else {
      fVar7 = (float10)(**(code **)(iVar1 + 0x3c))(iVar2);
      *(float *)(param_1 + 0x1768) = (float)fVar7;
      fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x4c))(iVar2);
      *(float *)(param_1 + 0x176c) = (float)fVar7;
      uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x2c))(iVar6 + 0x33);
      *(undefined4 *)(param_1 + 0x13b0) = uVar4;
      pcVar5 = *(code **)(**(int **)(param_1 + 0x754) + 0x3c);
    }
    fVar7 = (float10)(*pcVar5)(iVar6 + 0x50);
    *(float *)(param_1 + 0x17c0) = (float)fVar7;
    iVar1 = iVar6 + 0x4d;
    fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(iVar1);
    *(float *)(param_1 + 0x17ac) = (float)fVar7;
    fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x3c))(iVar1);
    *(float *)(param_1 + 0x17b4) = (float)fVar7;
    fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x44))(iVar1);
    iVar6 = iVar6 + 0x52;
  }
  else {
    iVar2 = iVar6 + 0x4c;
    if (*(int *)(param_1 + 0x4a0) == 0) {
      fVar7 = (float10)(**(code **)(iVar1 + 0x34))();
      *(float *)(param_1 + 0x1768) = (float)fVar7;
      fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x44))(iVar2);
      *(float *)(param_1 + 0x176c) = (float)fVar7;
      uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x24))(iVar6 + 0x33);
      *(undefined4 *)(param_1 + 0x13b0) = uVar4;
      pcVar5 = *(code **)(**(int **)(param_1 + 0x754) + 0x34);
    }
    else {
      fVar7 = (float10)(**(code **)(iVar1 + 0x3c))(iVar2);
      *(float *)(param_1 + 0x1768) = (float)fVar7;
      fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x4c))(iVar2);
      *(float *)(param_1 + 0x176c) = (float)fVar7;
      uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x2c))(iVar6 + 0x33);
      *(undefined4 *)(param_1 + 0x13b0) = uVar4;
      pcVar5 = *(code **)(**(int **)(param_1 + 0x754) + 0x3c);
    }
    fVar7 = (float10)(*pcVar5)(iVar6 + 0x51);
    *(float *)(param_1 + 0x17c0) = (float)fVar7;
    iVar1 = iVar6 + 0x4e;
    fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(iVar1);
    *(float *)(param_1 + 0x17ac) = (float)fVar7;
    fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x3c))(iVar1);
    *(float *)(param_1 + 0x17b4) = (float)fVar7;
    fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x44))(iVar1);
    iVar6 = iVar6 + 0x53;
  }
  *(float *)(param_1 + 0x17b0) = (float)fVar7;
  fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(iVar6);
  *(float *)(param_1 + 0x17c4) = (float)fVar7;
  uVar4 = FUN_00ac84d0(0x25);
  *(undefined4 *)(param_1 + 0x1138) = uVar4;
  uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0xc))(0x25);
  *(undefined4 *)(param_1 + 0x113c) = uVar4;
  uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x14))(0x25);
  *(undefined4 *)(param_1 + 0x1140) = uVar4;
  uVar3 = (**(code **)(**(int **)(param_1 + 0x754) + 0x1c))(0x25);
  *(undefined1 *)(param_1 + 0x1144) = uVar3;
  uVar4 = FUN_00ac84d0(0x26);
  *(undefined4 *)(param_1 + 0x1148) = uVar4;
  uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0xc))(0x26);
  *(undefined4 *)(param_1 + 0x114c) = uVar4;
  uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x14))(0x26);
  *(undefined4 *)(param_1 + 0x1150) = uVar4;
  uVar3 = (**(code **)(**(int **)(param_1 + 0x754) + 0x1c))(0x26);
  *(undefined1 *)(param_1 + 0x1154) = uVar3;
  uVar4 = FUN_00ac84d0(0x24);
  *(undefined4 *)(param_1 + 0x1158) = uVar4;
  uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0xc))(0x24);
  *(undefined4 *)(param_1 + 0x115c) = uVar4;
  uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x14))(0x24);
  *(undefined4 *)(param_1 + 0x1160) = uVar4;
  uVar3 = (**(code **)(**(int **)(param_1 + 0x754) + 0x1c))(0x24);
  *(undefined1 *)(param_1 + 0x1164) = uVar3;
  uVar4 = FUN_00ac84d0(0x27);
  *(undefined4 *)(param_1 + 0x1168) = uVar4;
  uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0xc))(0x27);
  *(undefined4 *)(param_1 + 0x116c) = uVar4;
  uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x14))(0x27);
  *(undefined4 *)(param_1 + 0x1170) = uVar4;
  uVar3 = (**(code **)(**(int **)(param_1 + 0x754) + 0x1c))(0x27);
  *(undefined1 *)(param_1 + 0x1174) = uVar3;
  uVar4 = FUN_00ac84d0(0x28);
  *(undefined4 *)(param_1 + 0x1178) = uVar4;
  uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0xc))(0x28);
  *(undefined4 *)(param_1 + 0x117c) = uVar4;
  uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x14))(0x28);
  *(undefined4 *)(param_1 + 0x1180) = uVar4;
  uVar3 = (**(code **)(**(int **)(param_1 + 0x754) + 0x1c))(0x28);
  *(undefined1 *)(param_1 + 0x1184) = uVar3;
LAB_0055df46:
  *(int *)(param_1 + 0x13b0) = *(int *)(param_1 + 0x13b0) + *(int *)(param_1 + 0x13a8);
  return;
}

// 0055DF70  FUN_0055df70  size=628  [between]
void __fastcall FUN_0055df70(int param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
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
  local_80[8] = &DAT_016417f4;
  local_80[9] = &DAT_01641800;
  local_80[10] = (undefined *)0x0;
  local_80[0xb] = &DAT_0164180c;
  local_80[0xc] = &DAT_01641818;
  local_80[0xd] = (undefined *)0x0;
  local_80[0xe] = &DAT_01641824;
  local_80[0xf] = &DAT_01641830;
  local_80[0x10] = (undefined *)0x0;
  local_80[0x11] = &DAT_0164183c;
  local_80[0x12] = &DAT_01641848;
  local_80[0x13] = (undefined *)0x0;
  local_80[0x14] = &DAT_01641854;
  local_80[0x15] = &DAT_01641860;
  local_80[0x16] = &DAT_0164186c;
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
    puVar2 = (undefined4 *)(param_1 + 0xdcc + iVar9 * 0x14);
    puVar3 = local_80[iVar9];
    *puVar2 = 0;
    fVar10 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(puVar3);
    puVar2[1] = (float)fVar10;
    puVar3 = local_80[iVar9 * 3 + 9];
    puVar4 = local_80[iVar9 * 3 + 10];
    puVar2[2] = local_80[iVar9 * 3 + 8];
    puVar2[3] = puVar3;
    puVar2[4] = puVar4;
    if (iVar9 == 7) {
      iVar6 = FUN_00a81330();
      if ((iVar6 != 0) && (iVar6 = FUN_00a7c8a0(), puVar3 = PTR_s__EFD01_018814ec, iVar6 != 0)) {
        iVar8 = 0;
        iStack_84 = 0;
        if (0 < *(short *)(iVar6 + 0x324)) {
          do {
            iVar5 = *(int *)(iVar6 + 800);
            iVar7 = *(int *)(*(int *)(iVar5 + 0x60 + iVar8) + 0x40);
            if ((iVar7 != 0) && (iVar7 = FUN_00fdbbd0(iVar7,puVar3), iVar7 != 0)) {
              puVar1 = (uint *)(iVar5 + 0x38 + iVar8);
              *puVar1 = *puVar1 & 0xfffffffe;
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
      puVar3 = (&PTR_s__EFD02_018814d0)[iVar9];
      if (0 < *(short *)(local_90 + 0x324)) {
        iVar8 = 0;
        do {
          iVar5 = *(int *)(local_90 + 800);
          iVar7 = *(int *)(*(int *)(iVar5 + 0x60 + iVar8) + 0x40);
          if ((iVar7 != 0) && (iVar7 = FUN_00fdbbd0(iVar7,puVar3), iVar7 != 0)) {
            puVar1 = (uint *)(iVar5 + 0x38 + iVar8);
            *puVar1 = *puVar1 & 0xfffffffe;
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

// 0055E200  FUN_0055e200  size=170  [between]
void __fastcall FUN_0055e200(int param_1)

{
  undefined4 uVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if ((((*(int *)(param_1 + 0x4a0) != 0) || ((*(byte *)(param_1 + 0xb00) & 2) == 0)) &&
      ((*(byte *)(param_1 + 0xb00) & 8) == 0)) && (*(int *)(param_1 + 0x19d4) == 0)) {
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    uVar1 = FUN_0093c1f0((int)*(char *)(param_1 + 0xbab),*(undefined4 *)(param_1 + 0x4f0),4,2,
                         &local_20,&local_30,0x41200000,0x3f000000,0xbf800000);
    *(undefined4 *)(param_1 + 0x1904) = uVar1;
    *(undefined4 *)(param_1 + 0x19d4) = 1;
  }
  return;
}

// 0055E2B0  FUN_0055e2b0  size=1006  [between]
void __fastcall FUN_0055e2b0(int param_1)

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
  switch(*(undefined4 *)(param_1 + 0x1380)) {
  case 0:
    pfVar4 = (float *)FUN_00a925a0(local_70);
    local_120 = *pfVar4 + *(float *)(param_1 + 0x40);
    puVar6 = local_20;
    local_118 = *(float *)(param_1 + 0x48) + pfVar4[2];
    local_114 = *(float *)(param_1 + 0x4c) + pfVar4[3];
    local_11c = *(float *)(param_1 + 0x44) + pfVar4[1] + 1.0;
    uVar7 = 0x3fe66666;
    goto LAB_0055e398;
  case 1:
    pfVar4 = (float *)FUN_00a8b8a0(local_50,0xbf800000);
    local_120 = *(float *)(param_1 + 0x40) + *pfVar4;
    local_118 = *(float *)(param_1 + 0x48) + pfVar4[2];
    local_114 = *(float *)(param_1 + 0x4c) + pfVar4[3];
    puVar6 = local_a0;
    local_11c = *(float *)(param_1 + 0x44) + pfVar4[1] + 1.0;
    uVar7 = 0xbfe66666;
    goto LAB_0055e398;
  case 2:
    local_120 = *(float *)(param_1 + 0x40);
    local_118 = *(float *)(param_1 + 0x48);
    local_114 = *(float *)(param_1 + 0x4c);
    local_11c = *(float *)(param_1 + 0x44) + 1.0;
    pfVar4 = (float *)FUN_00a8b9b0(local_30,0x3fe66666);
    goto LAB_0055e39f;
  case 3:
    local_120 = *(float *)(param_1 + 0x40);
    local_118 = *(float *)(param_1 + 0x48);
    local_114 = *(float *)(param_1 + 0x4c);
    local_11c = *(float *)(param_1 + 0x44) + 1.0;
    pfVar4 = (float *)FUN_00a8b9b0(local_90,0xbfe66666);
    goto LAB_0055e39f;
  case 4:
    pfVar4 = (float *)FUN_00a925a0(local_80);
    local_120 = *(float *)(param_1 + 0x40) + *pfVar4;
    puVar6 = local_60;
    local_118 = *(float *)(param_1 + 0x48) + pfVar4[2];
    local_114 = *(float *)(param_1 + 0x4c) + pfVar4[3];
    local_11c = *(float *)(param_1 + 0x44) + pfVar4[1] + 3.1;
    uVar7 = 0x3fe66666;
LAB_0055e398:
    pfVar4 = (float *)FUN_00a8b8a0(puVar6,uVar7);
LAB_0055e39f:
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
  local_f0[0] = param_1 + 0x1310;
  local_c4 = local_f4 - local_114;
  local_ac = "em0220_obs";
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

// 0055E6C0  FUN_0055e6c0  size=495  [between]
void __fastcall FUN_0055e6c0(int *param_1)

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
  param_1[0x4c9] = 0;
  if ((*(byte *)(param_1 + 0x370) & 0x40) != 0) {
    iVar1 = (**(code **)(*param_1 + 0x84))();
    param_1[0x4dc] = *(int *)(iVar1 + 4);
    param_1[0x4c9] = 1;
  }
  fVar2 = (float10)FUN_00ddba30((float)param_1[0x2a7] - (float)param_1[0x4dc]);
  uStack_b8 = local_a4;
  if (fVar2 * fVar2 < (float10)0.37315634 != (fVar2 * fVar2 == (float10)0.37315634)) {
    param_1[0x4c9] = 1;
    uStack_b8 = 0x41c00000;
  }
  uStack_c0 = 0;
  uStack_bc = 0;
  fVar3 = (float)param_1[0x4dc];
  D3DXMatrixRotationY(auStack_50);
  D3DXVec3TransformNormal(afStack_c8,afStack_c8,auStack_58);
  fVar2 = (float10)FUN_00ddba30((float)param_1[0x4dc] + 0.034906585);
  param_1[0x4dc] = (int)(float)fVar2;
  param_1[0x4d4] = param_1[0x10];
  param_1[0x4d5] = (int)((float)param_1[0x11] + 2.8);
  param_1[0x4d6] = param_1[0x12];
  param_1[0x4d7] = (int)((float)param_1[0x13] + afStack_c8[0]);
  param_1[0x4d8] = (int)((float)param_1[0x4d4] + fVar3);
  param_1[0x4d9] = (int)((float)param_1[0x4d5] + unaff_EDI);
  param_1[0x4da] = (int)((float)param_1[0x4d6] + unaff_ESI);
  param_1[0x4db] = (int)((float)param_1[0x4d7] + afStack_c8[0]);
  iVar1 = FUN_009f8b40();
  local_a4 = param_1[0x4d4];
  piStack_b4 = param_1 + 0x4c5;
  iStack_a0 = param_1[0x4d5];
  iStack_9c = param_1[0x4d6];
  uStack_84 = iVar1 << 0x10 | 7;
  iStack_98 = param_1[0x4d7];
  uStack_b0 = 0;
  iStack_94 = param_1[0x4d8];
  uStack_80 = 0;
  iStack_90 = param_1[0x4d9];
  uStack_7c = 0;
  uStack_78 = 0;
  iStack_8c = param_1[0x4da];
  pcStack_74 = "em0220_Wall";
  uStack_70 = 0;
  iStack_88 = param_1[0x4db];
  uStack_6c = 1;
  HavokRayCastManager::set(&piStack_b4);
  return;
}

// 0055E8B0  FUN_0055e8b0  size=54  [between]
undefined4 __thiscall FUN_0055e8b0(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  if (*(int *)(param_1 + 0x1190) != 0) {
    fVar1 = *(float *)(param_1 + 0x11a0) - *(float *)(param_1 + 0x40);
    fVar2 = *(float *)(param_1 + 0x11a8) - *(float *)(param_1 + 0x48);
    *param_2 = fVar2 * fVar2 + fVar1 * fVar1;
    return 1;
  }
  return 0;
}

// 0055E9F0  FUN_0055e9f0  size=333  [between]
float10 __thiscall FUN_0055e9f0(int param_1,float *param_2)

{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float local_20;
  float local_1c;
  float local_18;
  
  if (*(int *)(param_1 + 0x1320) != 0) {
    local_18 = *(float *)(param_1 + 0x1344) * 0.0;
    local_20 = local_18 - *(float *)(param_1 + 0x1348);
    local_1c = *(float *)(param_1 + 0x1348) * 0.0 - *(float *)(param_1 + 0x1340) * 0.0;
    local_18 = *(float *)(param_1 + 0x1340) - local_18;
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

// 0055EB60  FUN_0055eb60  size=113  [between]
undefined4 __fastcall FUN_0055eb60(int param_1)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  
  if ((((*(int *)(param_1 + 0x1190) != 0) &&
       (fVar1 = *(float *)(param_1 + 0x11a0) - *(float *)(param_1 + 0x40),
       fVar2 = *(float *)(param_1 + 0x11a8) - *(float *)(param_1 + 0x48),
       fVar1 = fVar2 * fVar2 + fVar1 * fVar1, *(int *)(param_1 + 0x1250) == 0)) &&
      (fVar3 = (float10)fcos((float10)1.1344640254974365),
      (float10)*(float *)(param_1 + 0x11b0) * (float10)0 + (float10)*(float *)(param_1 + 0x11b4) +
      (float10)*(float *)(param_1 + 0x11b8) * (float10)0 < fVar3)) &&
     (fVar1 < 6.25 != (fVar1 == 6.25))) {
    return 1;
  }
  return 0;
}

// 0055EBE0  FUN_0055ebe0  size=501  [between]
undefined4 __fastcall FUN_0055ebe0(int param_1)

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
  
  if ((((*(int *)(param_1 + 0x1320) != 0) && (*(int *)(param_1 + 0xa84) != 0)) &&
      (fVar4 = (float10)FUN_0055a4a0(*(int *)(param_1 + 0xa84) + 0x40), (float10)6.0 < fVar4)) &&
     ((fVar4 < (float10)12.5 && (fVar4 = (float10)FUN_0055e9f0(extraout_EDX), fVar4 < (float10)5.0))
     )) {
    iVar3 = *(int *)(param_1 + 0xa84);
    local_40 = *(float *)(iVar3 + 0x40) - *(float *)(param_1 + 0x1330);
    local_3c = *(float *)(iVar3 + 0x44) - *(float *)(param_1 + 0x1334);
    local_38 = *(float *)(iVar3 + 0x48) - *(float *)(param_1 + 0x1338);
    local_34 = *(float *)(iVar3 + 0x4c) - *(float *)(param_1 + 0x133c);
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
    if ((0.71 < *(float *)(param_1 + 0x1348) * local_38 +
                *(float *)(param_1 + 0x1340) * local_40 + *(float *)(param_1 + 0x1344) * local_3c)
       && (uVar2 = FUN_00dde2d0(0,100), (uVar2 & 1) == 0)) {
      local_30[0] = *(float *)(param_1 + 0x1330) - *(float *)(param_1 + 0x40);
      local_30[2] = *(float *)(param_1 + 0x1338) - *(float *)(param_1 + 0x48);
      local_24 = *(float *)(param_1 + 0x133c) - *(float *)(param_1 + 0x4c);
      local_30[1] = 0.0;
      iVar3 = hkpCdPointCollector::hkpCdPointCollector_14(local_30,local_20,1,0,0x3c23d70a);
      if ((iVar3 == 0) ||
         (local_20[0] = local_20[0] - *(float *)(param_1 + 0x1330),
         local_18 = local_18 - *(float *)(param_1 + 0x1338),
         local_18 * local_18 + local_20[0] * local_20[0] < 4.0)) {
        return 1;
      }
    }
  }
  return 0;
}

// 0055EDE0  FUN_0055ede0  size=34  [between]
void __fastcall FUN_0055ede0(int param_1)

{
  if (*(int *)(param_1 + 0x12b0) != 0) {
    FUN_00e023a0(*(undefined4 *)(param_1 + 0x4f0),0x28,param_1 + 0x12c0);
  }
  return;
}

// 0055EE90  FUN_0055ee90  size=34  [between]
void __fastcall FUN_0055ee90(int param_1)

{
  if ((*(byte *)(param_1 + 0xdc0) & 8) != 0) {
    FUN_008e5c50(7);
    *(uint *)(param_1 + 0xdc0) = *(uint *)(param_1 + 0xdc0) & 0xfffffff7;
  }
  return;
}

// 0055EEC0  FUN_0055eec0  size=165  [between]
void __fastcall FUN_0055eec0(int param_1)

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
  if ((*(byte *)(param_1 + 0xdc0) & 0x80) == 0) {
    iVar1 = FUN_00a8c760(0x13);
    if (((iVar1 == 0) && (*(int *)(param_1 + 0x4e4) == 0)) && (*(int *)(param_1 + 0x18c8) == 0))
    goto LAB_0055ef43;
  }
  uVar2 = 0;
LAB_0055ef43:
  FUN_00a82640();
  FUN_00a83330(&local_20,uVar2);
  return;
}

// 0055EF70  FUN_0055ef70  size=289  [between]
undefined4 __thiscall FUN_0055ef70(int param_1,undefined4 param_2)

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

// 0055F0A0  FUN_0055f0a0  size=995  [between]
void FUN_0055f0a0(float *param_1,float *param_2,float *param_3)

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

// 0055F490  FUN_0055f490  size=1325  [between]
void __thiscall FUN_0055f490(int *param_1,undefined4 *param_2)

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
  
  switch(param_1[0x66a]) {
  case 0:
    FUN_00aa4080(0x20,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x370] = param_1[0x370] | 4;
    (**(code **)(*param_1 + 0x318))();
    iVar5 = param_1[0x1d9];
    if ((iVar5 != 0) && (*(int *)(iVar5 + 0x104) != 1)) {
      *(undefined4 *)(iVar5 + 0x104) = 1;
      *(undefined4 *)(*(int *)(iVar5 + 0xd0) + 4) = 0;
    }
    param_1[0x66a] = param_1[0x66a] + 1;
    goto LAB_0055f523;
  case 1:
LAB_0055f523:
    FUN_0055a580(param_1 + 0x4fc,0x3ecccccd,0x3eb2b8c2);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      FUN_00aa4080(0x21,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00a96030(0,0x3fe66666);
      param_1[0x249] = 0;
      FUN_00a92f90();
      iVar5 = FUN_00e26e90();
      if (iVar5 == 0) {
        param_1[0x66a] = param_1[0x66a] + 1;
        param_1[0x24a] = -0x40800000;
        return;
      }
      fVar7 = (float10)FUN_00e36a50(0);
      param_1[0x24a] = (int)(float)fVar7;
      param_1[0x66a] = param_1[0x66a] + 1;
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
      param_1[0x66a] = param_1[0x66a] + 1;
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
      param_1[0x66a] = param_1[0x66a] + 1;
    }
    else {
      FUN_00aa4080(0x23,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x66a] = 5;
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
      param_1[0x66a] = param_1[0x66a] + 1;
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

// 0055F9E0  FUN_0055f9e0  size=231  [between]
void __thiscall FUN_0055f9e0(int *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00a8cab0();
  param_1[0x4e1] = iVar1;
  uVar2 = FUN_00a8cab0();
  if ((uVar2 & 0xffff0000) != 0x20000) {
    iVar1 = FUN_00a8cab0();
    if (iVar1 != 0x70005) {
      iVar1 = FUN_00a8cab0();
      if (iVar1 != 0x70003) {
        iVar1 = FUN_00a8cab0();
        if (iVar1 != 0x70004) goto LAB_0055fa39;
      }
    }
  }
  iVar1 = FUN_00a8cab0();
  param_1[0x4e2] = iVar1;
LAB_0055fa39:
  if ((param_2 & 0xffff0000) == 0x20000) {
    FUN_00c27260(param_1[0x66d]);
  }
  param_1[0x24] = 0;
  FUN_00a8caf0(param_2,0,0,0);
  if ((*(byte *)(param_1 + 0x370) & 8) != 0) {
    FUN_008e5c50(7);
    param_1[0x370] = param_1[0x370] & 0xfffffff7;
  }
  param_1[0x370] = param_1[0x370] & 0xffffcfda;
  (**(code **)(*param_1 + 0x1f8))((param_2 & 0xffff0000) == 0x30000);
  param_1[0x370] = param_1[0x370] & 0xefffbfff;
  return;
}

// 0055FAD0  FUN_0055fad0  size=75  [between]
void __thiscall FUN_0055fad0(int param_1,int param_2)

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

// 0055FB20  FUN_0055fb20  size=174  [between]
void __fastcall FUN_0055fb20(int *param_1)

{
  int iVar1;
  
  if ((((((param_1[0x186] & 0xffff0000U) != 0xf0000) && (param_1[0x187] != 0x20003)) &&
       (iVar1 = FUN_00a8cbe0(0xe0000), iVar1 == 0)) &&
      ((iVar1 = FUN_00a8cbe0(0xe0001), iVar1 == 0 && (iVar1 = FUN_00a8cbe0(0x1000c), iVar1 == 0))))
     && ((iVar1 = FUN_0055a9a0(), iVar1 == 0 &&
         (iVar1 = (**(code **)(*param_1 + 0x1fc))(), iVar1 == 0)))) {
    iVar1 = FUN_00a8c760(4);
    if ((iVar1 == 0) && (iVar1 = FUN_00a8c760(0xf), iVar1 == 0)) {
      iVar1 = FUN_00a9f760(10);
      if (iVar1 == 0) {
        return;
      }
      FUN_0055f9e0(0x1000e);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0055fbcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  return;
}

// 0055FBD0  FUN_0055fbd0  size=67  [between]
undefined4 __fastcall FUN_0055fbd0(int param_1)

{
  if ((((*(int *)(param_1 + 0x4a0) == 0) && ((*(byte *)(param_1 + 0xb00) & 2) != 0)) &&
      (*(int *)(param_1 + 0x13ec) != 0)) &&
     ((*(float *)(param_1 + 0x1538) < *(float *)(param_1 + 0x1534) &&
      (*(int *)(param_1 + 0x1530) < 2)))) {
    return 1;
  }
  return 0;
}

// 0055FC20  FUN_0055fc20  size=421  [between]
void __fastcall FUN_0055fc20(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 local_8;
  int local_4;
  
  iVar2 = *(int *)(param_1 + 0x18c8);
  local_4 = 0;
  local_8 = 0;
  *(undefined4 *)(param_1 + 0x18cc) = 0;
  if (iVar2 == 0) {
    FUN_00ac81f0(param_1 + 0x40,&local_4,&local_8);
  }
  else {
    FUN_00ac8270(param_1 + 0x40,&local_4,&local_8);
  }
  if (*(int *)(param_1 + 0xa84) != 0) {
    FUN_00ac81f0(*(int *)(param_1 + 0xa84) + 0x40,(undefined4 *)(param_1 + 0x18cc),&local_8);
  }
  if (local_4 == 0) {
    fVar1 = *(float *)(param_1 + 0x18d4) - *(float *)(param_1 + 0x910);
    if (0.0 <= fVar1) goto LAB_0055fc99;
  }
  else {
    fVar1 = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0x18d4);
    if (fVar1 < 0.0) {
LAB_0055fc99:
      fVar1 = 0.0;
    }
  }
  *(float *)(param_1 + 0x18d4) = fVar1;
  fVar1 = *(float *)(param_1 + 0x18d4);
  if (NAN(fVar1) || 15.0 < fVar1 == (fVar1 == 15.0)) {
    if (*(float *)(param_1 + 0x18d4) <= -15.0) {
      *(undefined4 *)(param_1 + 0x18c8) = 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x18c8) = 1;
  }
  if ((iVar2 != 0) && (*(int *)(param_1 + 0x18c8) == 0)) {
    iVar2 = *(int *)(param_1 + 0x618);
    if (iVar2 < 0x60005) {
      if ((iVar2 == 0x60004) || ((0xffff < iVar2 && ((iVar2 < 0x10002 || (iVar2 == 0x10010)))))) {
LAB_0055fd32:
        if ((*(uint *)(param_1 + 0xdc0) & 0x80000) == 0) {
          FUN_0055f9e0(0x10011);
        }
      }
    }
    else if (iVar2 == 0x70000) goto LAB_0055fd32;
  }
  if (*(int *)(param_1 + 0x18d0) != 0) {
    if (*(int *)(param_1 + 0x18c8) != 0) goto LAB_0055fd64;
    *(undefined4 *)(param_1 + 0x18d0) = 0;
  }
  if (*(int *)(param_1 + 0x18c8) == 0) {
    return;
  }
LAB_0055fd64:
  if (*(int *)(param_1 + 0x18d0) == 0) {
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
    if ((*(uint *)(param_1 + 0xdc0) & 0x80000) == 0) {
      *(undefined4 *)(param_1 + 0x18d0) = 1;
      FUN_0055f9e0(0x10010);
    }
  }
  return;
}

// 0055FDD0  FUN_0055fdd0  size=608  [between]
void __fastcall FUN_0055fdd0(int param_1)

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
    fVar1 = *(float *)(param_1 + 0x190c);
    if ((!NAN(fVar1) && 1.0 < fVar1 != (fVar1 == 1.0)) && (*(int *)(param_1 + 0x76c) != 0)) {
      FUN_009fb990();
    }
    fVar1 = *(float *)(param_1 + 0x190c);
    fVar7 = (float10)FUN_00fdc1f0();
    *(float *)(param_1 + 0x190c) = (float)((float10)fVar1 + -(float10)fVar1 * ((float10)1 - fVar7));
  }
  else {
    fVar1 = *(float *)(param_1 + 0x190c);
    fVar8 = (float10)FUN_00fdc1f0();
    fVar7 = (float10)1;
    fVar8 = (fVar7 - fVar8) * (fVar7 - (float10)fVar1) + (float10)fVar1;
    *(float *)(param_1 + 0x190c) = (float)fVar8;
    if ((float10)0.99 < fVar8) {
      *(float *)(param_1 + 0x190c) = (float)fVar7;
    }
  }
  if (*(int *)(param_1 + 0x76c) != 0) {
    fVar1 = *(float *)(param_1 + 0x190c);
    uVar5 = 0;
    *(float *)(*(int *)(param_1 + 0x76c) + 0xb94) = fVar1;
    if (*(int *)(*(int *)(param_1 + 0x76c) + 0x18) != 0) {
      iVar3 = 0;
      pfVar6 = (float *)(param_1 + 0x1910);
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
  if ((iVar3 == 0) && ((*(uint *)(param_1 + 0xdc0) & 0x4000) == 0)) {
    iVar3 = 0;
  }
  else {
    iVar3 = 1;
  }
  iVar4 = FUN_00a81330();
  if ((iVar3 != 0) != (*(int *)(param_1 + 0x1878) != 0)) {
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
  *(int *)(param_1 + 0x1878) = iVar3;
  iVar3 = FUN_00a8c760(0x33);
  if (iVar3 == 0) {
    if (*(int *)(param_1 + 0x187c) != 0) {
      FUN_00ac9420("tentacle_a");
      FUN_00ac94e0("tentacle_b");
    }
    *(undefined4 *)(param_1 + 0x187c) = 0;
    return;
  }
  if (*(int *)(param_1 + 0x187c) == 0) {
    FUN_00ac9420("tentacle_b");
    FUN_00ac94e0("tentacle_a");
  }
  *(undefined4 *)(param_1 + 0x187c) = 1;
  return;
}

// 005600F0  FUN_005600f0  size=145  [between]
void __thiscall FUN_005600f0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar4 = 1;
  if ((*(uint *)(param_1 + 0xdc0) & 0x80000) != 0) {
    iVar4 = 2;
  }
  uVar2 = *(undefined1 *)(param_1 + 0x1144 + iVar4 * 0x10);
  uVar5 = *(undefined4 *)(param_1 + 0x113c + iVar4 * 0x10);
  puVar1 = (undefined4 *)(param_1 + 0x1138 + iVar4 * 0x10);
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

// 00560190  FUN_00560190  size=119  [between]
void __thiscall FUN_00560190(int param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined1 *)(param_1 + 0x1144);
  uVar3 = *(undefined4 *)(param_1 + 0x1140);
  uVar2 = *(undefined4 *)(param_1 + 0x113c);
  param_2[1] = *(undefined4 *)(param_1 + 0x1138);
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

// 00560210  FUN_00560210  size=41  [between]
void __fastcall FUN_00560210(int param_1)

{
  if (*(int *)(param_1 + 0xfb8) != 0) {
    (**(code **)(*(int *)(param_1 + 0xf20) + 8))(0,0,0);
  }
  return;
}

// 00560240  FUN_00560240  size=47  [between]
void __thiscall FUN_00560240(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x1068) != 0) {
    (**(code **)(*(int *)(param_1 + 0xfd0) + 8))(param_2,0,0);
  }
  return;
}

// 00560270  FUN_00560270  size=44  [between]
void __fastcall FUN_00560270(int param_1)

{
  if ((*(uint *)(param_1 + 0xdc0) & 0x8000) == 0) {
    FUN_00e02240(*(undefined4 *)(param_1 + 0x4f0),3);
    *(uint *)(param_1 + 0xdc0) = *(uint *)(param_1 + 0xdc0) | 0x8000;
  }
  return;
}

// 005602A0  FUN_005602a0  size=47  [between]
void __fastcall FUN_005602a0(int param_1)

{
  if ((*(byte *)(param_1 + 0xdc2) & 1) != 0) {
    FUN_00a8c9b0(0,2,0x3f800000,0);
    *(uint *)(param_1 + 0xdc0) = *(uint *)(param_1 + 0xdc0) & 0xfffeffff;
  }
  return;
}

// 005602D0  FUN_005602d0  size=90  [between]
undefined4 __fastcall FUN_005602d0(int param_1)

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

// 00560330  Em0220::vf130  size=766  [class]
undefined4 __thiscall Em0220::vf130(int param_1,ushort *param_2)

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
  if ((iVar2 == 0) || (iVar2 = CollisionAttackData::CollisionAttackData_3(), iVar2 == 0)) {
    FUN_00dd5650(&DAT_01641a54);
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
    goto LAB_00560432;
  default:
    goto switchD_0056041b_caseD_5;
  case 6:
    *puVar1 = 0x149;
    puVar1[0x23] = puVar1[0x23] | 0x40000000;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    break;
  case 8:
    *puVar1 = 0x14a;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    *(undefined2 *)(puVar1 + 0x21) = 0x3300;
    return unaff_EBX;
  case 10:
    *puVar1 = 0x14b;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    *(undefined2 *)(puVar1 + 0x21) = 0x3300;
    return unaff_EBX;
  case 0xc:
    *puVar1 = 0x14c;
    goto LAB_00560606;
  case 0xe:
    *puVar1 = 0x14d;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    *(undefined2 *)(puVar1 + 0x21) = 0x3301;
    return unaff_EBX;
  case 0x10:
    *puVar1 = 0x14e;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
LAB_00560432:
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
LAB_00560440:
    *(undefined2 *)(puVar1 + 0x21) = 0x3301;
    return unaff_EBX;
  case 0x12:
    *puVar1 = 0x152;
    puVar1[0x24] = puVar1[0x24] | 0x4000000;
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    break;
  case 0x16:
    *puVar1 = 0x153;
    puVar1[0x23] = puVar1[0x23] | 0x2000;
    puVar1[0x24] = puVar1[0x24] | 0x4000000;
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    *(undefined2 *)(puVar1 + 0x21) = 0xffff;
    return unaff_EBX;
  case 0x18:
    *puVar1 = 0x147;
    *(undefined2 *)(puVar1 + 0x21) = 0xffff;
    puVar1[0x23] = puVar1[0x23] | 0x40000000;
    if (iVar2 == 0) {
      return unaff_EBX;
    }
    FUN_0041cc70(iVar2 + 0x10,0x40666666,0x40c90fdb,1,0,*(int *)(param_1 + 0x760) + 1);
    return unaff_EBX;
  case 0x1a:
    *puVar1 = 0x155;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    goto LAB_00560440;
  case 0x1c:
    *puVar1 = 0x156;
LAB_00560606:
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
  }
  *(undefined2 *)(puVar1 + 0x21) = 0x3301;
switchD_0056041b_caseD_5:
  return unaff_EBX;
}

// 00560680  Em0220::vf1A4  size=585  [class]
void __thiscall Em0220::vf1A4(int param_1,int *param_2,uint param_3)

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
  if ((*(uint *)(param_1 + 0xdc0) & 0x80000) == 0) {
    if (uVar5 != 0) {
      iVar2 = *param_2;
      if ((0x149 < iVar2) && ((iVar2 < 0x14c || (iVar2 == 0x152)))) {
        FUN_0055f9e0(0x30002);
        return;
      }
      if ((*(uint *)(param_1 + 0xdc0) & 0x4000000) != 0) {
        FUN_0055f9e0(0x30002);
        return;
      }
      FUN_0055f9e0(0x30003);
      return;
    }
    if (uVar4 == 0) {
      if ((param_3 & 1) != 0) {
        *(uint *)(param_1 + 0xdc0) = *(uint *)(param_1 + 0xdc0) | 1;
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
                FUN_0055f9e0(0x20009);
                return;
              }
            }
          }
        }
        else if (*param_2 == 0x14f) {
          *(int *)(param_1 + 0x19c0) = *(int *)(param_1 + 0x19c0) + 1;
          return;
        }
      }
    }
    else {
      iVar2 = *param_2;
      if ((0x149 < iVar2) && ((iVar2 < 0x14c || (iVar2 == 0x152)))) {
        FUN_0055f9e0(0x20009);
        return;
      }
    }
  }
  return;
}

// 005608D0  Em0220::vf1A0  size=306  [class]
undefined4 __thiscall Em0220::vf1A0(int *param_1,int *param_2,int param_3)

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
        iVar2 = FUN_0055cdd0(uVar1);
        if ((iVar2 == 0) || (*(int *)(iVar2 + 0x8f4) == 0)) {
          uVar1 = FUN_00a7c8a0();
          piVar3 = (int *)FUN_004b7d90(uVar1);
          if ((param_1[0x370] & 0x100U) == 0) {
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

// 00560A10  FUN_00560a10  size=52  [between]
undefined4 __fastcall FUN_00560a10(int param_1)

{
  if (((*(int *)(param_1 + 0x4a0) != 0) || ((*(byte *)(param_1 + 0xb00) & 2) == 0)) &&
     ((*(byte *)(param_1 + 0xdae) < 5 ||
      ((*(int *)(param_1 + 0xdb0) != 2 && (*(int *)(param_1 + 0xdb0) != -1)))))) {
    return 0;
  }
  return 1;
}

// 00560A50  FUN_00560a50  size=269  [between]
undefined4 __fastcall FUN_00560a50(int param_1)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar4;
  float10 fVar5;
  float10 fVar6;
  
  if (*(int *)(param_1 + 0x1320) != 0) {
    fVar5 = (float10)FUN_0055a4a0(param_1 + 0x40);
    fVar1 = (float)fVar5;
    if (*(int *)(param_1 + 0xa84) == 0) {
      fVar5 = (float10)-1.0;
      uVar4 = extraout_EDX;
    }
    else {
      fVar5 = (float10)FUN_0055a4a0(*(int *)(param_1 + 0xa84) + 0x40);
      uVar4 = extraout_EDX_00;
    }
    fVar2 = (float)fVar5;
    fVar5 = (float10)FUN_0055e9f0(uVar4);
    if (*(int *)(param_1 + 0xa84) == 0) {
      fVar6 = (float10)-1.0;
    }
    else {
      fVar6 = (float10)FUN_0055e9f0(*(int *)(param_1 + 0xa84) + 0x40);
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

// 00560B60  FUN_00560b60  size=289  [between]
void __fastcall FUN_00560b60(int *param_1)

{
  int iVar1;
  float10 fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x66,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a8c760(0);
  if (iVar1 != 0) {
    FUN_0055a580(param_1[0x2a1] + 0x40,0x3e3851ec,0x3db2b8c2);
  }
  if ((float)param_1[0x2a4] <= 9.0) {
    uVar5 = 1;
    uVar4 = 0x80;
    uVar3 = 0;
    FUN_00a92f90(0,0x80,1);
    FUN_00e3a1a0(uVar3,uVar4,uVar5);
  }
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 == 0) {
    return;
  }
  fVar2 = (float10)FUN_00a8ec30(param_1[0x2a1] + 0x40);
  fVar2 = (float10)FUN_00ddba30((float)((float10)(float)param_1[0x25] - fVar2));
  if ((float10)2.3561945 <= ABS(fVar2)) {
    FUN_0055f9e0(0x10003);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00560c7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00560C90  FUN_00560c90  size=478  [between]
void __fastcall FUN_00560c90(int *param_1)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x67,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x188] = 0;
    param_1[0x250] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar3 = (float10)FUN_00a8ec30(param_1[0x2a1] + 0x40);
  fVar3 = (float10)FUN_00ddba30((float)((float10)(float)param_1[0x25] - fVar3));
  fVar3 = (float10)FUN_00ddba30((float)(ABS(fVar3) + (float10)3.1415927));
  fVar1 = (float)fVar3;
  if (param_1[0x188] == 0) {
    iVar2 = FUN_00a8c760(0);
    if (iVar2 == 0) {
      if (param_1[0x250] != 0) {
        param_1[0x188] = param_1[0x188] + 1;
      }
    }
    else {
      FUN_0055a580(param_1[0x2a1] + 0x40,0x3e3851ec,0x3d567750);
      param_1[0x250] = param_1[0x250] + 1;
    }
  }
  else if ((param_1[0x188] == 1) && (iVar2 = FUN_00a8c760(0), iVar2 != 0)) {
    FUN_0055a640(param_1[0x2a1] + 0x40,0x40490fdb,0x3e4ccccd,0x3da0d97c);
    param_1[0x250] = param_1[0x250] + 1;
  }
  iVar2 = FUN_00a8c760(0xf);
  if ((iVar2 != 0) &&
     ((!NAN(fVar1) && 1.7453293 < fVar1 != (fVar1 == 1.7453293) ||
      (fVar1 = (float)param_1[0x2a4], !NAN(fVar1) && 64.0 < fVar1 != (fVar1 == 64.0))))) {
                    /* WARNING: Could not recover jumptable at 0x00560e2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 == 0) {
    return;
  }
  if ((float)param_1[0x2a4] <= 16.0) {
    FUN_0055f9e0(0x50000);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00560e6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00560E70  FUN_00560e70  size=2347  [between]
void __fastcall FUN_00560e70(int *param_1)

{
  float fVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  undefined4 uVar8;
  float local_4;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  switch(param_1[0x187]) {
  case 0:
    if (param_1[0x4c8] == 0) {
                    /* WARNING: Could not recover jumptable at 0x00560eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    param_1[0x4c9] = 0;
    param_1[0x4dc] = 0;
    param_1[0x4c8] = 0;
    param_1[0x4dd] = 0;
    param_1[0x370] = param_1[0x370] | 4;
    FUN_00a8d280();
    fVar1 = (float)param_1[0x4cc] - (float)param_1[0x10];
    fVar3 = (float)param_1[0x4ce] - (float)param_1[0x12];
    fVar4 = fVar3 * fVar3 + fVar1 * fVar1;
    if (fVar4 < 36.0 != (fVar4 == 36.0)) {
      (**(code **)(*param_1 + 0x318))();
      iVar5 = param_1[0x1d9];
      if ((iVar5 != 0) && (*(int *)(iVar5 + 0x104) != 1)) {
        *(undefined4 *)(iVar5 + 0x104) = 1;
        *(undefined4 *)(*(int *)(iVar5 + 0xd0) + 4) = 0;
      }
      FUN_00aa4080(0x6f,0,0x3d088889,0x3f800000,0x8000080,0xbf800000,0x3f800000);
      param_1[0x4cd] = param_1[0x15];
      param_1[600] = (int)((float)param_1[0x10] - (float)param_1[0x4cc]);
      param_1[0x259] = (int)((float)param_1[0x11] - (float)param_1[0x4cd]);
      param_1[0x25a] = (int)((float)param_1[0x12] - (float)param_1[0x4ce]);
      param_1[0x25b] = (int)((float)param_1[0x13] - (float)param_1[0x4cf]);
      fVar6 = (float10)fpatan((float10)(float)param_1[0x4d0],(float10)(float)param_1[0x4d2]);
      fVar6 = (float10)FUN_00ddba30((float)(fVar6 + (float10)3.1415927));
      param_1[0x249] = (int)(float)fVar6;
      fVar6 = (float10)FUN_00ddba30((float)((float10)(float)param_1[0x25] - fVar6));
      param_1[0x248] = (int)(float)fVar6;
      param_1[0x187] = 4;
      return;
    }
    fVar1 = fVar3 * fVar3 + fVar1 * fVar1;
    if (fVar1 < 121.0 != (fVar1 == 121.0)) {
      FUN_00aa4080(0x6e,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = 3;
      return;
    }
    iVar5 = FUN_00a9f760(10);
    if (iVar5 != 0) {
      FUN_00aa4080(10,0,0x3d888889,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x187] = 2;
      return;
    }
    FUN_00aa4080(0xb,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_0055a580(param_1 + 0x4cc,0x3e4ccccd,0x3db2b8c2);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      fVar6 = (float10)FUN_0055a770(param_1 + 0x4cc);
      if ((float10)0.7853982 <= fVar6) {
        FUN_0055f9e0(0x10006);
        return;
      }
      FUN_00aa4080(10,0,0x3d888889,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 2:
    FUN_0055a580(param_1 + 0x4cc,0x3e4ccccd,0x3db2b8c2);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_0055eb60();
    if (iVar5 != 0) {
      FUN_0055f9e0(0x10007);
      return;
    }
    fVar1 = (float)param_1[0x4cc] - (float)param_1[0x10];
    fVar1 = ((float)param_1[0x4ce] - (float)param_1[0x12]) *
            ((float)param_1[0x4ce] - (float)param_1[0x12]) + fVar1 * fVar1;
    if (fVar1 < 121.0 != (fVar1 == 121.0)) {
      FUN_00aa4080(0x6e,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_008e5c50(0xd);
      param_1[0x370] = param_1[0x370] | 8;
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 3:
    FUN_0055a580(param_1 + 0x4cc,0x3e4ccccd,0x3db2b8c2);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      (**(code **)(*param_1 + 0x318))();
      iVar5 = param_1[0x1d9];
      if ((iVar5 != 0) && (*(int *)(iVar5 + 0x104) != 1)) {
        *(undefined4 *)(iVar5 + 0x104) = 1;
        *(undefined4 *)(*(int *)(iVar5 + 0xd0) + 4) = 0;
      }
      FUN_00aa4080(0x6f,0,0x3d088889,0x3f800000,0x8000080,0xbf800000,0x3f800000);
      param_1[0x4cd] = param_1[0x15];
      param_1[600] = (int)((float)param_1[0x10] - (float)param_1[0x4cc]);
      param_1[0x259] = (int)((float)param_1[0x11] - (float)param_1[0x4cd]);
      param_1[0x25a] = (int)((float)param_1[0x12] - (float)param_1[0x4ce]);
      param_1[0x25b] = (int)((float)param_1[0x13] - (float)param_1[0x4cf]);
      fVar6 = (float10)fpatan((float10)(float)param_1[0x4d0],(float10)(float)param_1[0x4d2]);
      fVar6 = (float10)FUN_00ddba30((float)(fVar6 + (float10)3.1415927));
      param_1[0x249] = (int)(float)fVar6;
      fVar6 = (float10)FUN_00ddba30((float)((float10)(float)param_1[0x25] - fVar6));
      param_1[0x248] = (int)(float)fVar6;
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    uVar8 = 0;
    FUN_00a92f90(0);
    fVar6 = (float10)FUN_00407b40(uVar8);
    uVar8 = 0;
    FUN_00a92f90(0);
    fVar7 = (float10)FUN_0043f390(uVar8);
    fVar6 = (float10)1 - (float10)(float)fVar6 / fVar7;
    param_1[0x14] =
         (int)(float)(fVar6 * (float10)(float)param_1[600] + (float10)(float)param_1[0x4cc]);
    param_1[0x15] =
         (int)(float)((float10)(float)param_1[0x4cd] + (float10)(float)param_1[0x259] * fVar6);
    param_1[0x16] =
         (int)(float)((float10)(float)param_1[0x25a] * fVar6 + (float10)(float)param_1[0x4ce]);
    param_1[0x17] =
         (int)(float)((float10)(float)param_1[0x25b] * fVar6 + (float10)(float)param_1[0x4cf]);
    param_1[0x25] =
         (int)(float)(fVar6 * (float10)(float)param_1[0x248] + (float10)(float)param_1[0x249]);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      FUN_008e5c50(0xd);
      param_1[0x370] = param_1[0x370] | 8;
      param_1[0x14] = param_1[0x4cc];
      param_1[0x16] = param_1[0x4ce];
      param_1[0x25] = param_1[0x249];
      FUN_00aa4080(0x70,0,0x3d088889,0x3f800000,0x8038000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00a8c760(0);
    if (iVar5 != 0) {
      fVar6 = (float10)FUN_0055a7a0();
      if ((float10)1.3089969 <= fVar6) {
        local_4 = (float)param_1[0x24];
        fVar6 = (float10)0.2617994 - (float10)local_4;
      }
      else {
        FUN_0055a710(0x3eb33333,0x3eb2b8c2);
        iVar5 = param_1[0x2a1];
        fVar6 = (float10)*(float *)(iVar5 + 0x40) - (float10)(float)param_1[0x10];
        fVar7 = (float10)*(float *)(iVar5 + 0x48) - (float10)(float)param_1[0x12];
        fVar6 = (float10)fpatan(((float10)*(float *)(iVar5 + 0x44) + (float10)0.8) -
                                (float10)(float)param_1[0x11],SQRT(fVar7 * fVar7 + fVar6 * fVar6));
        if ((float10)0.2617994 <= -fVar6) {
          local_4 = (float)param_1[0x24];
          fVar6 = -fVar6 - (float10)local_4;
        }
        else {
          local_4 = (float)param_1[0x24];
          fVar6 = (float10)0.2617994 - (float10)local_4;
        }
      }
      fVar6 = (float10)FUN_00ddba30((float)fVar6);
      fVar6 = (float10)FUN_00ddba30((float)(fVar6 * (float10)0.35 + (float10)local_4));
      param_1[0x24] = (int)(float)fVar6;
    }
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
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
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      param_1[0x250] = param_1[0x250] + 1;
    }
    fVar1 = (float)param_1[0x15];
    FUN_00559e30((float)param_1[0x244] * 0.5);
    pcVar2 = *(code **)(*param_1 + 800);
    param_1[0x225] = (int)((fVar1 - (float)param_1[0x15]) * -0.1);
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
    iVar5 = (*pcVar2)(0x3d888889);
    if ((iVar5 != 0) || ((float)param_1[0x248] <= 0.0)) {
      param_1[0x24] = 0;
      (**(code **)(*param_1 + 0x314))();
      iVar5 = param_1[0x1d9];
      if ((iVar5 != 0) && (*(int *)(iVar5 + 0x104) != 0)) {
        *(undefined4 *)(iVar5 + 0x104) = 0;
      }
      FUN_0055ee90();
      iVar5 = FUN_0055ef70(0x41200000);
      if (iVar5 == 0) {
        FUN_00aa4080(0x6d,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        param_1[0x187] = param_1[0x187] + 1;
        return;
      }
      FUN_00aa4080(0x6c,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    iVar5 = FUN_0055a510();
    if (iVar5 != 0) {
      FUN_0055ede0();
      FUN_0055f9e0(0x20009);
      return;
    }
    break;
  case 7:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00a8c760(0);
    if (iVar5 != 0) {
      FUN_0055a710(0x3e4ccccd,0x3db2b8c2);
    }
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00561799. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 005617C0  FUN_005617c0  size=375  [between]
void __fastcall FUN_005617c0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_1[0x187];
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  if (iVar1 == 0) {
    FUN_00aa4080(0x69,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (iVar1 != 1) {
    if (iVar1 != 2) {
      return;
    }
    iVar1 = FUN_00a8c760(0);
    if (iVar1 != 0) {
      FUN_0055a580(param_1[0x2a1] + 0x40,0x3e4ccccd,0x3db2b8c2);
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 == 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00561849. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  iVar1 = FUN_00a8c760(0);
  if (iVar1 != 0) {
    FUN_0055a580(param_1[0x2a1] + 0x40,0x3e4ccccd,0x3db2b8c2);
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    iVar1 = FUN_0055ef70(0x3f800000);
    if (iVar1 == 0) {
      uVar2 = 0x72;
    }
    else {
      uVar2 = 0x73;
    }
    FUN_00aa4080(uVar2,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  return;
}

// 00561940  FUN_00561940  size=89  [between]
void __fastcall FUN_00561940(int param_1)

{
  float10 fVar1;
  
  if (*(int *)(param_1 + 0x61c) == 2) {
    fVar1 = (float10)FUN_00a8ec30(*(int *)(param_1 + 0xa84) + 0x40);
    fVar1 = (float10)FUN_00ddba30((float)((float10)*(float *)(param_1 + 0x94) - fVar1));
    if (((float10)1.3089969 < ABS(fVar1)) && (*(int *)(param_1 + 0x1778) < 3)) {
      FUN_0055f9e0(0x10006);
      *(int *)(param_1 + 0x1778) = *(int *)(param_1 + 0x1778) + 1;
    }
  }
  return;
}

// 005619A0  FUN_005619a0  size=1182  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005619a0(int *param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  
  if ((_DAT_01b34fa4 & 1) == 0) {
    _DAT_01b34fa4 = _DAT_01b34fa4 | 1;
    _DAT_01881528 = 0x42100000;
    _DAT_0188152c = 0x20001;
    _DAT_01881534 = 0x20002;
    _DAT_01881530 = 0x42800000;
    _DAT_01881538 = 0x41c80000;
  }
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  switch(param_1[0x187]) {
  case 0:
    if ((param_1[0x250] < 0) || (2 < param_1[0x250])) {
      sVar1 = FUN_00dde2d0(0,2);
      param_1[0x250] = (int)sVar1;
    }
    iVar3 = param_1[0x4e1];
    if (((iVar3 == 0x10006) || (iVar3 == 0x10007)) || (iVar3 == 0x10003)) {
      if ((*(float *)(&DAT_01881528 + param_1[0x250] * 8) < (float)param_1[0x2a4]) ||
         (fVar4 = (float10)FUN_0055a7a0(), (float10)0.7853982 <= fVar4)) {
        FUN_00aa4120(10,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
        FUN_00ac80a0(0x3f800000,0x3f800000);
        param_1[0x248] = 0x43700000;
        param_1[0x187] = 2;
        return;
      }
      iVar3 = FUN_00559ff0(0x41f00000);
      if (iVar3 == 0) {
        FUN_0055f9e0(*(undefined4 *)(&DAT_01881524 + param_1[0x250] * 8));
        return;
      }
      goto LAB_00561d83;
    }
    param_1[0x5de] = 0;
    FUN_00aa4080(0xb,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    sVar1 = FUN_00dde2d0(0,2);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x250] = (int)sVar1;
  case 1:
    FUN_0055a580(param_1[0x2a1] + 0x40,0x3e4ccccd,0x3db2b8c2);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_00aa4080(10,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x248] = 0x43700000;
    }
    iVar3 = FUN_00a8c760(4);
    if (((iVar3 != 0) && ((float)param_1[0x2a4] <= *(float *)(&DAT_01881528 + param_1[0x250] * 8)))
       && (fVar4 = (float10)FUN_0055a7a0(), fVar4 < (float10)0.7853982)) {
      FUN_0055f9e0(*(undefined4 *)(&DAT_01881524 + param_1[0x250] * 8));
    }
    break;
  case 2:
    FUN_0055a580(param_1[0x2a1] + 0x40,0x3e4ccccd,0x3db2b8c2);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_0055eb60();
    if (iVar3 != 0) {
      FUN_0055f9e0(0x10007);
      return;
    }
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
    if (((float)param_1[0x2a4] <= 25.0) &&
       (fVar4 = (float10)FUN_0055a7a0(), fVar4 < (float10)0.87266463)) {
      iVar3 = FUN_00560a10();
      if ((iVar3 != 0) && (uVar2 = FUN_00dde2d0(0,100), (uVar2 & 1) != 0)) {
        FUN_0055f9e0(0x20007);
        return;
      }
      FUN_0055f9e0(0x50000);
      return;
    }
    if ((*(float *)(&DAT_01881528 + param_1[0x250] * 8) < (float)param_1[0x2a4]) ||
       (fVar4 = (float10)FUN_0055a7a0(), (float10)0.7853982 <= fVar4)) {
      if (0.0 < (float)param_1[0x248]) {
        return;
      }
    }
    else {
      iVar3 = FUN_00559ff0(0x41f00000);
      if (iVar3 == 0) {
        FUN_0055f9e0(*(undefined4 *)(&DAT_01881524 + param_1[0x250] * 8));
        return;
      }
    }
LAB_00561d83:
    FUN_00aa4080(0xc,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x187] = 3;
    return;
  case 3:
    iVar3 = FUN_00a8c760(0);
    if (iVar3 != 0) {
      FUN_0055a580(param_1[0x2a1] + 0x40,0x3e4ccccd,0x3db2b8c2);
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_0055ee90();
                    /* WARNING: Could not recover jumptable at 0x00561e3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00561E50  FUN_00561e50  size=89  [between]
void __fastcall FUN_00561e50(int param_1)

{
  float10 fVar1;
  
  if (*(int *)(param_1 + 0x61c) == 2) {
    fVar1 = (float10)FUN_00a8ec30(*(int *)(param_1 + 0xa84) + 0x40);
    fVar1 = (float10)FUN_00ddba30((float)((float10)*(float *)(param_1 + 0x94) - fVar1));
    if (((float10)1.3089969 < ABS(fVar1)) && (*(int *)(param_1 + 0x1778) < 3)) {
      FUN_0055f9e0(0x10006);
      *(int *)(param_1 + 0x1778) = *(int *)(param_1 + 0x1778) + 1;
    }
  }
  return;
}

// 00561EB0  FUN_00561eb0  size=1342  [between]
void __fastcall FUN_00561eb0(int *param_1)

{
  uint uVar1;
  int iVar2;
  float10 fVar3;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  switch(param_1[0x187]) {
  case 0:
    iVar2 = param_1[0x4e1];
    if (((iVar2 == 0x10006) || (iVar2 == 0x10007)) || (iVar2 == 0x10003)) {
      if ((64.0 < (float)param_1[0x2a4]) ||
         (fVar3 = (float10)FUN_0055a7a0(), (float10)0.7853982 <= fVar3)) {
        FUN_00aa4120(10,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
        FUN_00ac80a0(0x3f800000,0x3f800000);
        param_1[0x248] = 0x43700000;
        param_1[0x187] = 2;
        return;
      }
      iVar2 = FUN_00559ff0(0x41f00000);
      if (iVar2 != 0) goto LAB_0056228a;
      goto LAB_005620ae;
    }
    param_1[0x5de] = 0;
    FUN_00aa4080(0xb,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_00561fd1;
  case 1:
LAB_00561fd1:
    FUN_0055a580(param_1[0x2a1] + 0x40,0x3e4ccccd,0x3db2b8c2);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_00aa4080(10,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x248] = 0x43700000;
    }
    iVar2 = FUN_00a8c760(4);
    if (((iVar2 != 0) && ((float)param_1[0x2a4] <= 100.0)) &&
       (fVar3 = (float10)FUN_0055a7a0(), fVar3 < (float10)0.7853982)) {
LAB_005620ae:
      FUN_008e5c50(0xd);
      param_1[0x370] = param_1[0x370] | 8;
      FUN_00aa4080(0x69,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x187] = 3;
      return;
    }
    break;
  case 2:
    FUN_0055a580(param_1[0x2a1] + 0x40,0x3e4ccccd,0x3db2b8c2);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_0055eb60();
    if (iVar2 != 0) {
      FUN_0055f9e0(0x10007);
      return;
    }
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
    if (((float)param_1[0x2a4] <= 25.0) &&
       (fVar3 = (float10)FUN_0055a7a0(), fVar3 < (float10)0.87266463)) {
      iVar2 = FUN_00560a10();
      if ((iVar2 != 0) && (uVar1 = FUN_00dde2d0(0,100), (uVar1 & 1) != 0)) {
        FUN_0055f9e0(0x20007);
        return;
      }
      FUN_0055f9e0(0x50000);
      return;
    }
    if (((float)param_1[0x2a4] <= 64.0) &&
       (fVar3 = (float10)FUN_0055a7a0(), fVar3 < (float10)0.7853982)) {
      iVar2 = FUN_00559ff0(0x41f00000);
      if (iVar2 != 0) goto LAB_0056228a;
      FUN_008e5c50(0xd);
      param_1[0x370] = param_1[0x370] | 8;
      FUN_00aa4080(0x69,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
    }
    if ((float)param_1[0x248] <= 0.0) {
LAB_0056228a:
      FUN_00aa4080(0xc,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x187] = 4;
      return;
    }
    break;
  case 3:
    iVar2 = FUN_00a8c760(0);
    if (iVar2 != 0) {
      FUN_0055a710(0x3e4ccccd,0x3db2b8c2);
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_0055ee90();
      iVar2 = FUN_0055ef70(0x3f800000);
      if (iVar2 == 0) {
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
    iVar2 = FUN_00a8c760(0);
    if (iVar2 != 0) {
      FUN_0055a710(0x3e4ccccd,0x3db2b8c2);
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_0055ee90();
                    /* WARNING: Could not recover jumptable at 0x005623ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00562410  FUN_00562410  size=73  [between]
void __fastcall FUN_00562410(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a12210(0x66);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x1780) = *(undefined4 *)(iVar1 + 0x30);
    *(undefined4 *)(param_1 + 0x1784) = *(undefined4 *)(iVar1 + 0x34);
    *(undefined4 *)(param_1 + 0x1788) = *(undefined4 *)(iVar1 + 0x38);
    *(undefined4 *)(param_1 + 0x178c) = *(undefined4 *)(iVar1 + 0x3c);
    iVar1 = FUN_00a12210(0x66);
    *(undefined4 *)(param_1 + 0x93c) = *(undefined4 *)(iVar1 + 0x98);
  }
  return;
}

// 00562460  FUN_00562460  size=240  [between]
void __fastcall FUN_00562460(int param_1)

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
    puVar7 = &DAT_01be9db8;
    (**(code **)(*piVar2 + 4))(&DAT_01be9db8);
    iVar6 = FUN_00dd6d70(puVar7);
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
      goto LAB_005624f9;
    }
  }
  fVar4 = 0.0;
  fVar5 = 0.0;
  fVar3 = 0.0;
LAB_005624f9:
  iVar6 = (*(int *)(param_1 + 0x1870) + 0x17d) * 0x10;
  *(float *)(iVar6 + param_1) = fVar3;
  iVar6 = iVar6 + param_1;
  *(float *)(iVar6 + 4) = fVar4;
  *(float *)(iVar6 + 8) = fVar5;
  *(float *)(iVar6 + 0xc) = local_14;
  *(int *)(param_1 + 0x1870) = *(int *)(param_1 + 0x1870) + 1;
  if (9 < *(int *)(param_1 + 0x1870)) {
    *(undefined4 *)(param_1 + 0x1870) = 0;
  }
  return;
}

// 00562550  FUN_00562550  size=105  [between]
float10 __fastcall FUN_00562550(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  float10 fVar4;
  
  if ((*(uint *)(param_1 + 0xdc0) & 0x800) == 0) {
    iVar2 = *(int *)(param_1 + 0x175c) + 1;
    if (iVar2 < *(int *)(param_1 + 0x1758)) {
      fVar1 = ((float)iVar2 / (float)*(int *)(param_1 + 0x1758)) * 0.25;
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

// 005625D0  FUN_005625d0  size=964  [between]
void __thiscall FUN_005625d0(int param_1,float *param_2,int param_3)

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
  pfStack_108 = (float *)0x5625e8;
  iVar4 = FUN_00a12210();
  local_104 = (float *)0x2f;
  pfStack_108 = (float *)0x5625f7;
  local_d8 = iVar4;
  local_d4 = FUN_00a12210();
  local_104 = (float *)0x2e;
  pfStack_108 = (float *)0x562604;
  iVar5 = FUN_00a12210();
  if (((iVar5 != 0) && (iVar4 != 0)) && (local_d4 != 0)) {
    local_f0 = *param_2 - *(float *)(iVar5 + 0x40);
    local_ec = param_2[1] - *(float *)(iVar5 + 0x44);
    local_e8 = param_2[2] - *(float *)(iVar5 + 0x48);
    local_e4[0] = param_2[3] - *(float *)(iVar5 + 0x4c);
    fVar3 = local_e8 * local_e8 + local_f0 * local_f0 + local_ec * local_ec;
    if (fVar3 < 0.0 == (fVar3 == 0.0)) {
      pfStack_108 = &local_f0;
      puStack_10c = (undefined1 *)0x562698;
      local_104 = pfStack_108;
      FUN_00ddf460();
    }
    else {
      local_104 = (float *)&DAT_0163d0ac;
      pfStack_108 = (float *)0x5626ad;
      FUN_00dd5650();
      local_f0 = 0.0;
      local_ec = 1.0;
      local_e8 = 0.0;
    }
    local_104 = (float *)0x3e4ccccd;
    pfStack_108 = &local_f0;
    puVar2 = (undefined1 *)(param_1 + 0x1780);
    puStack_114 = (undefined1 *)0x5626de;
    puStack_110 = puVar2;
    puStack_10c = puVar2;
    FUN_0055f0a0();
    local_104 = (float *)0x5626e5;
    switchD_0080dbae::default();
    if (*(int *)(iVar5 + 0xa8) != 0) {
      local_104 = (float *)(*(int *)(iVar5 + 0xa8) + 0x10);
      pfStack_108 = (float *)local_50;
      puStack_10c = (undefined1 *)0x562700;
      D3DXMatrixTranspose();
      puStack_10c = auStack_58;
      puStack_114 = &stack0xffffff08;
      fStack_118 = 7.91187e-39;
      puStack_110 = puVar2;
      D3DXVec3TransformNormal();
      fVar6 = (float10)fpatan((float10)local_f0,(float10)local_e8);
      local_104 = (float *)(float)(fVar6 + (float10)3.1415927);
      pfStack_108 = (float *)0x56272c;
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
      puStack_10c = (undefined1 *)0x562786;
      D3DXMatrixTranspose();
      puStack_10c = auStack_58;
      puStack_114 = &stack0xffffff08;
      fStack_118 = 7.912058e-39;
      puStack_110 = puVar2;
      D3DXVec3TransformNormal();
      fVar3 = local_ec;
      fStack_118 = -*(float *)((int)local_ec + 0x98);
      pfStack_11c = local_e4;
      pfStack_120 = (float *)0x5627b3;
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

// 005629A0  FUN_005629a0  size=690  [between]
void __thiscall
FUN_005629a0(int *param_1,float *param_2,float *param_3,float *param_4,float param_5,float param_6)

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

// 00562C60  FUN_00562c60  size=245  [between]
void __fastcall FUN_00562c60(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(5,0,0x3ecccccd,0x3f800000,0,0xbf800000,0x3f800000);
    uVar1 = *(uint *)(param_1 + 0x1384);
    *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x1768) * 60.0;
    *(undefined4 *)(param_1 + 0x924) = 0x41f00000;
    if ((uVar1 & 0xffff0000) == 0x30000) {
      *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x176c) * 60.0;
    }
    if ((*(uint *)(param_1 + 0xdc0) & 0x4000000) != 0) {
      *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x176c) * 60.0 * 3.0;
    }
    if (((int)uVar1 < 0x10004) || ((0x10006 < (int)uVar1 && (uVar1 != 0x1000a)))) {
      *(undefined4 *)(param_1 + 0x1778) = 0;
    }
    else {
      *(int *)(param_1 + 0x1778) = *(int *)(param_1 + 0x1778) + 1;
    }
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 00562D60  FUN_00562d60  size=151  [between]
void __fastcall FUN_00562d60(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x79,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00c272a0(0x40a00000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x19c0) = 0;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    FUN_0055f9e0(0x2000b);
  }
  return;
}

// 00562E00  FUN_00562e00  size=241  [between]
void __fastcall FUN_00562e00(int param_1)

{
  float10 fVar1;
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    fVar1 = (float10)FUN_00a8ec30(*(int *)(param_1 + 0xa84) + 0x40);
    fVar1 = (float10)FUN_00ddba30((float)((float10)*(float *)(param_1 + 0x94) - fVar1));
    if ((float10)1.0471976 < ABS(fVar1)) {
      FUN_0055f9e0(0x1000a);
      return;
    }
    if (((*(float *)(param_1 + 0xa90) <= 25.0) || (*(int *)(param_1 + 0x18c8) != 0)) ||
       (*(float *)(param_1 + 0x18f0) <= -30.0)) {
      if (*(int *)(param_1 + 0x1068) != 0) {
        (**(code **)(*(int *)(param_1 + 0xfd0) + 8))(0x41f00000,0,0);
      }
      if (*(int *)(param_1 + 0xfb8) != 0) {
        (**(code **)(*(int *)(param_1 + 0xf20) + 8))(0,0,0);
        FUN_0055f9e0(0x50000);
        return;
      }
      FUN_0055f9e0(0x50000);
    }
  }
  return;
}

// 00562F00  FUN_00562f00  size=661  [between]
void __fastcall FUN_00562f00(int *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  short sVar1;
  int iVar2;
  uint uVar3;
  
  switch(param_1[0x187]) {
  case 0:
    if (param_1[0x4e1] == 0x10009) {
      param_1[0x4e7] = 0;
      if (0.2617994 < ABS((float)param_1[0x4ee])) {
        if (ABS((float)param_1[0x4ee]) < 2.1816616) {
          if ((float)param_1[0x4ee] <= 0.0) {
            param_1[0x4e7] = 3;
          }
          else {
            param_1[0x4e7] = 2;
          }
        }
        else {
          param_1[0x4e7] = 1;
        }
      }
      else {
        param_1[0x4e7] = 0;
      }
      iVar2 = 0;
      if (param_1[0x4e7] == 1) {
        iVar2 = 2;
      }
      sVar1 = FUN_00dde2d0(0,1);
      uVar3 = iVar2 + sVar1;
      if (param_1[0x4e5] == uVar3) {
        param_1[0x4e6] = param_1[0x4e6] + 1;
        if (2 < param_1[0x4e6]) {
          uVar3 = (uint)(uVar3 == 0);
          goto LAB_00562fd4;
        }
      }
      else {
LAB_00562fd4:
        param_1[0x4e6] = 0;
      }
      param_1[0x4e5] = uVar3;
      FUN_00aa4080(*(undefined4 *)(&DAT_01641a90 + uVar3 * 4),0,0,0x3f800000,0x8000000,0xbf800000,
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
    if ((param_1[0x370] & 0x400U) == 0) {
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
      param_1[0x5ea] = (int)((float)param_1[0x5f1] * 60.0);
                    /* WARNING: Could not recover jumptable at 0x0056318f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}

// 005631B0  FUN_005631b0  size=223  [between]
void __fastcall FUN_005631b0(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    iVar1 = FUN_0055a840(*(int *)(param_1 + 0xa84) + 0x40,param_1 + 0x920);
    FUN_00aa4080(*(undefined4 *)(&DAT_01641aa0 + iVar1 * 4),0,0x3e4ccccd,0x3f800000,0x8000000,
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
    FUN_0055f9e0(0x2000b);
  }
  return;
}

// 00563290  Em0220::vf14C  size=94  [class]
undefined4 __thiscall Em0220::vf14C(int param_1,int param_2)

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

// 005632F0  Em0220::vf150  size=119  [class]
void Em0220::vf150(int param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  
  if (param_2 != 0) {
    uVar1 = FUN_00a7c7f0();
    FUN_00a7c960(uVar1);
    if (param_1 == 0x57) {
      FUN_0055f9e0(0xf0006);
    }
    else {
      if (param_1 == 0x58) {
        piVar2 = (int *)FUN_00c1b9a0();
        (**(code **)(*piVar2 + 100))();
        FUN_0055f9e0(0xf0007);
        return;
      }
      if (param_1 == 0x59) {
        piVar2 = (int *)FUN_00c1b9a0();
        (**(code **)(*piVar2 + 100))();
        FUN_0055f9e0(0xf0008);
        return;
      }
    }
  }
  return;
}

// 00563370  FUN_00563370  size=200  [between]
undefined4 __fastcall FUN_00563370(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if ((((param_1[0x139] == 0) && ((DAT_01bea060 & 0x2000000) == 0)) &&
      (iVar1 = (**(code **)(*param_1 + 0x1d8))(), iVar1 == 0)) &&
     ((0 < param_1[0x21c] && (param_1[0x186] == 0x3000a)))) {
    piVar2 = (int *)FUN_00ac8120();
    if ((piVar2 != (int *)0x0) && (iVar1 = (**(code **)(*piVar2 + 0x1d8))(), iVar1 != 0)) {
      return 0;
    }
    uVar3 = 0x1c;
    iVar1 = FUN_00ac4d60(2);
    if (iVar1 != 0) {
      uVar3 = 2;
    }
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    FUN_00c593a0(param_1[0x13c],0xffffffff,&uStack_20,0x40200000,0x3fc00000,uVar3,8);
    return 1;
  }
  return 0;
}

// 00563440  FUN_00563440  size=204  [between]
undefined4 __fastcall FUN_00563440(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if ((((param_1[0x139] == 0) && ((DAT_01bea060 & 0x2000000) == 0)) &&
      (iVar1 = (**(code **)(*param_1 + 0x1d8))(), iVar1 == 0)) &&
     ((param_1[0x186] == 0x60003 || (param_1[0x186] == 0x60004)))) {
    piVar2 = (int *)FUN_00ac8120();
    if ((piVar2 != (int *)0x0) && (iVar1 = (**(code **)(*piVar2 + 0x1d8))(), iVar1 != 0)) {
      return 0;
    }
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    iVar1 = FUN_00c593a0(param_1[0x13c],0xffffffff,&uStack_20,0x40200000,0x3fc00000,0x1c,9);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x48) = 0;
      *(undefined4 *)(iVar1 + 0x40) = 0x3f4ccccd;
      *(undefined4 *)(iVar1 + 0x44) = 0x3ecccccd;
    }
    return 1;
  }
  return 0;
}

// 00563510  FUN_00563510  size=311  [between]
void __thiscall FUN_00563510(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_00a8cab0();
  if (iVar1 == 0xf0003) {
    piVar2 = (int *)FUN_00e678d0(2,0xc005,0xffffffff);
    if (((*param_2 == *piVar2) && (param_2[1] == piVar2[1])) && (param_2[2] == piVar2[2])) {
      *(undefined4 *)(param_1 + 0x6ec) = 1;
      FUN_0055f9e0(0xf0004);
      return;
    }
  }
  piVar2 = (int *)FUN_00e678d0(2,0xc001,0xffffffff);
  if (((*param_2 == *piVar2) && (param_2[1] == piVar2[1])) && (param_2[2] == piVar2[2])) {
    *(undefined4 *)(param_1 + 0x18f4) = 0xc002;
    uVar3 = FUN_00e678d0(2,0xc002,0xffffffff);
    FUN_00e80d00(uVar3);
    *(undefined4 *)(param_1 + 0x18f8) = 3;
    FUN_00c18610(3,0);
    return;
  }
  piVar2 = (int *)FUN_00e678d0(2,0xc005,0xffffffff);
  if (((*param_2 == *piVar2) && (param_2[1] == piVar2[1])) && (param_2[2] == piVar2[2])) {
    *(undefined4 *)(param_1 + 0x18f4) = 0xc003;
    uVar3 = FUN_00e678d0(2,0xc003,0xffffffff);
    FUN_00e80d00(uVar3);
    *(undefined4 *)(param_1 + 0x18f8) = 2;
    FUN_00c18610(2,0);
  }
  return;
}

// 00563650  FUN_00563650  size=522  [between]
void __fastcall FUN_00563650(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x61c);
  if (iVar3 == 0) {
    *(uint *)(param_1 + 0xdc0) = *(uint *)(param_1 + 0xdc0) | 4;
    *(undefined4 *)(param_1 + 0x17b8) = 0;
    if ((*(int *)(param_1 + 0x1384) == 0x10007) || (*(int *)(param_1 + 0x1384) == 0x10006)) {
      FUN_00aa4080(10,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      *(undefined4 *)(param_1 + 0x61c) = 2;
      return;
    }
    if ((*(byte *)(param_1 + 0x1530) & 1) == 0) {
      FUN_00e5e1b0("bgm_BladeWolf_RunAway1");
      FUN_0055b030();
    }
    else {
      FUN_00e5e1b0("bgm_BladeWolf_RunAway2");
      FUN_0055b050();
    }
    FUN_00aa4080(0xb,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (iVar3 != 1) {
    if (iVar3 != 2) {
      return;
    }
    FUN_0055a580((float *)(param_1 + 0x13f0),0x3ea3d70a,0x3e32b8c2);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_0055eb60();
    if (iVar3 != 0) {
      FUN_0055f9e0(0x10007);
      *(uint *)(param_1 + 0xdc0) = *(uint *)(param_1 + 0xdc0) | 4;
      return;
    }
    fVar1 = *(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x13f0);
    fVar2 = *(float *)(param_1 + 0x48) - *(float *)(param_1 + 0x13f8);
    fVar1 = fVar2 * fVar2 + fVar1 * fVar1;
    if (fVar1 < 12.25 == (fVar1 == 12.25)) {
      return;
    }
    FUN_0055f9e0(0xf0001);
    *(uint *)(param_1 + 0xdc0) = *(uint *)(param_1 + 0xdc0) | 4;
    return;
  }
  FUN_0055a580(param_1 + 0x13f0,0x3e23d70a,0x3d8efa35);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 == 0) {
    return;
  }
  FUN_00aa4080(10,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
  *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  return;
}

// 00563860  FUN_00563860  size=1255  [between]
void __fastcall FUN_00563860(int *param_1)

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
    param_1[0x370] = param_1[0x370] | 0x2004;
    (**(code **)(*param_1 + 0x318))();
    iVar3 = param_1[0x1d9];
    if ((iVar3 != 0) && (*(int *)(iVar3 + 0x104) != 1)) {
      *(undefined4 *)(iVar3 + 0x104) = 1;
      *(undefined4 *)(*(int *)(iVar3 + 0xd0) + 4) = 0;
    }
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_00563909;
  case 1:
LAB_00563909:
    FUN_00da9630(1,1);
    puVar7 = local_20;
    uVar2 = (**(code **)(*param_1 + 0x204))(puVar7,0);
    FUN_00da9660(1,uVar2,puVar7);
    FUN_0055a580(param_1 + 0x500,0x3ecccccd,0x3eb2b8c2);
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
      param_1[0x622] = iVar3;
      if ((int *)param_1[0x2a1] != (int *)0x0) {
        puVar6 = &DAT_01be9db8;
        (**(code **)(*(int *)param_1[0x2a1] + 4))(&DAT_01be9db8);
        iVar3 = FUN_00dd6d70(puVar6);
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
      FUN_0055f9e0(0xf0002);
      return;
    }
  }
  return;
}

// 00563D60  FUN_00563d60  size=1363  [between]
void __fastcall FUN_00563d60(int *param_1)

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
    param_1[0x370] = param_1[0x370] | 0x2004;
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
       (iVar4 = thunk_FUN_00e58ed0(param_1[0x669]), iVar4 == 0)) {
      FUN_00aa4080(0x25,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      if ((*(byte *)(param_1 + 0x54c) & 1) == 0) {
        FUN_0055af70(0xc001);
        uVar5 = 0x23;
      }
      else {
        FUN_0055af70(0xc005);
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
        if ((*(byte *)(param_1 + 0x54c) & 1) == 0) {
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
    uVar5 = FUN_00e678d0(2,param_1[0x63d],0xffffffff);
    iVar4 = FUN_00e7a6e0(uVar5);
    if (iVar4 == 0) {
      param_1[0x248] = 0;
      if (param_1[0x63d] == 0xc003) {
        param_1[0x248] = 0x41f00000;
      }
      param_1[0x54c] = param_1[0x54c] + 1;
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
    if ((param_1[0x63d] == 0xc003) && (iVar4 = FUN_00c19c30(param_1[0x63e],0), iVar4 != 0)) {
      FUN_0055a940(iVar4);
      return;
    }
    break;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00c18f70(param_1[0x63e],0);
    if (iVar4 == 0) {
      if (0.0 < (float)param_1[0x249]) {
        fVar1 = (float)param_1[0x249] - (float)param_1[0x244];
        param_1[0x249] = (int)fVar1;
        if (fVar1 < 0.0 != (fVar1 == 0.0)) {
          sVar3 = FUN_00dde2d0(0,3);
          if ((&PTR_s_Boss1000_171010_01881500)[sVar3] != (undefined *)0x0) {
            iVar4 = FUN_00e5e0c0((&PTR_s_Boss1000_171010_01881500)[sVar3],param_1,0xffffffff,0);
            param_1[0x669] = iVar4;
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
        if (param_1[0x63d] == 0xc003) {
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
      if (param_1[0x63d] != 0xc003) {
        param_1[0x1bb] = 1;
        FUN_0055f9e0(0xf0004);
        return;
      }
      FUN_0055f9e0(0xf0003);
      return;
    }
  }
  return;
}

// 005642D0  FUN_005642d0  size=423  [between]
void __fastcall FUN_005642d0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_24 [32];
  
  (**(code **)(*param_1 + 0x220))(0x40a00000);
  if (param_1[0x187] == 0) {
    param_1[0x370] = param_1[0x370] | 4;
    param_1[0x63d] = 0xc005;
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
      FUN_0055f9e0(0xf0004);
      return;
    }
  }
  return;
}

// 00564480  FUN_00564480  size=2487  [between]
void __fastcall FUN_00564480(int *param_1)

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
    param_1[0x370] = param_1[0x370] | 4;
    iVar6 = thunk_FUN_00e58ed0(param_1[0x669]);
    if (iVar6 == 0) {
      if (param_1[0x4e1] != 0xf0003) {
        sVar5 = FUN_00dde2d0(0,4);
        if ((&PTR_s_Boss1000_151010_01881510)[sVar5] != (undefined *)0x0) {
          iVar6 = FUN_00e5e0c0((&PTR_s_Boss1000_151010_01881510)[sVar5],param_1,0xffffffff,0);
          param_1[0x669] = iVar6;
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
    iVar6 = thunk_FUN_00e58ed0(param_1[0x669]);
    if (iVar6 == 0) {
      param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
    }
    if ((float)param_1[0x248] <= 0.0) {
      param_1[0x248] = 0x41400000;
      if (param_1[0x4e1] != 0xf0003) {
        sVar5 = FUN_00dde2d0(0,4);
        if ((&PTR_s_Boss1000_151010_01881510)[sVar5] != (undefined *)0x0) {
          iVar6 = FUN_00e5e0c0((&PTR_s_Boss1000_151010_01881510)[sVar5],param_1,0xffffffff,0);
          param_1[0x669] = iVar6;
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
      param_1[0x370] = param_1[0x370] | 4;
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
    FUN_0055a580(param_1 + 0x4fc,0x3ecccccd,0x3eb2b8c2);
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
      if (param_1[0x622] != 0) {
        FUN_0055fad0(1);
      }
      (**(code **)(*param_1 + 0x34c))();
    }
  }
  return;
}

// 00564E60  FUN_00564e60  size=1097  [between]
void __fastcall FUN_00564e60(int *param_1)

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
    puVar5 = &DAT_01be9db8;
    (**(code **)(*piVar4 + 4))(&DAT_01be9db8);
    iVar2 = FUN_00dd6d70(puVar5);
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
    param_1[0x370] = param_1[0x370] & 0xfffffdff;
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_00564f3f;
  case 1:
LAB_00564f3f:
    iVar2 = FUN_00a8c760(0x10);
    if (iVar2 == 0) {
      param_1[0x370] = param_1[0x370] | 0x20;
    }
    else {
      param_1[0x370] = param_1[0x370] | 4;
      param_1[0x370] = param_1[0x370] & 0xffffffdf;
    }
switchD_00564ea1_caseD_2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a8c760(0);
    if (iVar2 != 0) {
      FUN_0055a640(param_1[0x2a1] + 0x40,param_1[0x249],0x3f000000,0x3edf66f3);
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
    goto switchD_00564ea1_caseD_2;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if ((param_1[0x370] & 0x200U) != 0) {
      param_1[0x252] = param_1[0x252] + 1;
    }
    if (piVar4 == (int *)0x0) {
      if (0 < param_1[0x252]) goto LAB_0056508f;
    }
    else if ((((float)param_1[0x249] == 0.0) || (0 < param_1[0x252])) &&
            (iVar2 = (**(code **)(*piVar4 + 0x360))(), iVar2 != 0)) {
LAB_0056508f:
      param_1[0x251] = param_1[0x251] + 1;
    }
    if (param_1[0x251] == 0) {
      param_1[0x370] = param_1[0x370] | 0x100;
    }
    else {
      param_1[0x370] = param_1[0x370] & 0xfffffeff;
    }
    param_1[0x370] = param_1[0x370] & 0xfffffdff;
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x250] = param_1[0x250] + 1;
      if (((param_1[0x250] < 10) && ((float)param_1[0x249] != 0.0)) &&
         ((param_1[0x252] < 1 && (param_1[0x632] == 0)))) {
        iVar2 = FUN_0055ced0();
        iVar3 = FUN_0055ced0();
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
        FUN_0055ee90();
        param_1[0x187] = 2;
        return;
      }
      FUN_00aa4080(0xcd,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      FUN_0055ee90();
      param_1[0x187] = 4;
      return;
    }
    break;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a8c760(0);
    if (iVar2 != 0) {
      FUN_0055a710(0x3e23d70a,0x3db2b8c2);
    }
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x005652a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 005652C0  FUN_005652c0  size=998  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005652c0(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  float10 fVar6;
  float10 extraout_ST0;
  undefined *puVar7;
  int *local_68;
  int local_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  undefined1 auStack_50 [76];
  
  iVar2 = FUN_00a81330();
  uVar5 = 0;
  local_64 = iVar2;
  if ((iVar2 != 0) && (local_68 = (int *)FUN_00a7c8a0(), local_68 != (int *)0x0)) {
    puVar7 = &DAT_01b35000;
    (**(code **)(*local_68 + 4))(&DAT_01b35000);
    iVar3 = FUN_00dd6d70(puVar7);
    uVar5 = -(uint)(iVar3 != 0) & (uint)local_68;
  }
  iVar3 = param_1[0x187];
  if (iVar3 == 0) {
    FUN_00b94790(0x3f800000,0x3f800000);
    DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
    DAT_01bea060 = DAT_01bea060 | 0x2000000;
    param_1[0x248] = 0x41200000;
    param_1[0x187] = param_1[0x187] + 1;
  }
  else {
    if (iVar3 == 1) {
      FUN_00b94790(0x3f800000,0x3f800000);
      fVar1 = (float)param_1[0x248] - _DAT_01be942c;
      param_1[0x248] = (int)fVar1;
      if (uVar5 == 0) goto LAB_00565362;
      if (0.0 < fVar1) {
        return;
      }
      FUN_00bee830();
      FUN_00aa4520(0xcf,iVar2,0,0,0x3f800000,0x8100000,0xbf800000,0x3f800000);
      FUN_00db3e80(0,0,&DAT_01bea1d0);
      FUN_00a92f90();
      FUN_00e26e90();
      FUN_00e22f10(0);
      param_1[0x250] = 0;
      FUN_00b80920(local_64,0x40400000,0x3fc00000,0x3f800000,0);
      iVar2 = FUN_0055aba0();
      param_1[0x249] = (int)(float)iVar2;
      param_1[0x24b] = (int)((float)iVar2 * 0.0076923077);
      param_1[0x24a] = 0;
      param_1[0x250] = 0;
      local_64 = iVar2;
      iVar3 = FUN_00a8eea0();
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x251] = iVar3;
      param_1[0x252] = iVar2;
    }
    else if (iVar3 != 2) {
      return;
    }
    if (uVar5 == 0) {
LAB_00565362:
      param_1[0x24] = 0;
      FUN_00ba6810(1,0);
      return;
    }
    FUN_00db3e80(0,0,&DAT_01bea1d0);
    FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e22f10(0);
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar2 = FUN_00a8c760(0x2f);
    if (iVar2 != 0) {
      param_1[0x461] = 1;
    }
    iVar2 = FUN_00a12210(0xf00);
    if (iVar2 != 0) {
      fVar6 = (float10)FUN_00ddba30(*(float *)(uVar5 + 0x94) + *(float *)(iVar2 + 0x94));
      param_1[0x25] = (int)(float)fVar6;
      if (*(int *)(uVar5 + 0x940) == 0) {
        D3DXMatrixRotationY(auStack_50,*(undefined4 *)(uVar5 + 0x94));
        D3DXVec3TransformNormal(&local_68,iVar2 + 0x50,&fStack_58);
        *(float *)(uVar5 + 0x50) = (float)param_1[0x14] - fStack_60;
        *(float *)(uVar5 + 0x54) = (float)param_1[0x15] - fStack_5c;
        *(float *)(uVar5 + 0x58) = (float)param_1[0x16] - fStack_58;
        *(float *)(uVar5 + 0x5c) = (float)param_1[0x17] - fStack_54;
      }
    }
    iVar2 = FUN_00a8c760(0x16);
    if (iVar2 != 0) {
      param_1[0x250] = param_1[0x250] + 1;
    }
    if ((param_1[0x250] != 0) && (0.0 < (float)param_1[0x249])) {
      param_1[0x249] = (int)((float)param_1[0x249] - (float)param_1[0x244] * (float)param_1[0x24b]);
      fVar1 = (float)param_1[0x244] * (float)param_1[0x24b] + (float)param_1[0x24a];
      param_1[0x24a] = (int)fVar1;
      if (!NAN(fVar1) && 1.0 < fVar1 != (fVar1 == 1.0)) {
        local_64 = FUN_00fdbc60();
        param_1[0x24a] = (int)(float)(extraout_ST0 - (float10)local_64);
        (**(code **)(*param_1 + 0x30c))(local_64,0);
      }
    }
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      if (param_1[0x250] == 0) {
        uVar4 = FUN_0055aba0();
        (**(code **)(*param_1 + 0x30c))(uVar4,0);
        param_1[0x250] = param_1[0x250] + 1;
      }
      FUN_00a7c950();
      FUN_00ba6810(1,1);
      iVar2 = FUN_00a8eea0();
      if (iVar2 < 1) {
        FUN_00a8caf0(0xdb,0,0,0);
        return;
      }
      FUN_00a8caf0(0xcd,0,0,0);
      return;
    }
  }
  return;
}

// 005656B0  FUN_005656b0  size=1639  [between]
void __fastcall FUN_005656b0(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  int unaff_EDI;
  uint uVar5;
  float10 fVar6;
  float10 fVar7;
  undefined4 uVar8;
  undefined *puVar9;
  int *local_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  undefined1 auStack_74 [16];
  undefined1 auStack_64 [8];
  undefined1 auStack_5c [8];
  undefined1 auStack_54 [80];
  
  iVar2 = FUN_00a81330();
  uVar5 = 0;
  if ((iVar2 != 0) && (local_84 = (int *)FUN_00a7c8a0(), local_84 != (int *)0x0)) {
    puVar9 = &DAT_01b35000;
    (**(code **)(*local_84 + 4))(&DAT_01b35000);
    iVar3 = FUN_00dd6d70(puVar9);
    uVar5 = -(uint)(iVar3 != 0) & (uint)local_84;
  }
  (**(code **)(*param_1 + 0x220))(0x40a00000);
  switch(param_1[0x187]) {
  case 0:
    FUN_00b80920(iVar2,0x40400000,0x3fc00000,0x3f800000,0);
    FUN_00aa4520(0xe7,iVar2,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    DAT_01bea060 = DAT_01bea060 | 0x2000000;
    DAT_01bea090 = DAT_01bea090 & 0xffffffbf;
    param_1[0x188] = 0;
    param_1[0x250] = 0;
    param_1[0x256] = 0;
    param_1[599] = 0;
    if ((*(int *)(uVar5 + 0x4a0) == 0) && ((*(byte *)(uVar5 + 0xb00) & 2) != 0)) {
      param_1[599] = 1;
    }
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 1:
    break;
  case 2:
    FUN_00a9ed60(0x20220,&DAT_01641ae8,0,0x3e2aaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x25] = param_1[0x24f];
    goto LAB_00565bbf;
  case 3:
LAB_00565bbf:
    FUN_00db3e80(0,0,&DAT_01bea1d0);
    FUN_00a92f90();
    FUN_00e26e90();
    FUN_00e22f10(0);
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      if (param_1[599] == 0) {
        FUN_00ba6810(1,1);
      }
      else {
        FUN_00a7c950();
        DAT_01bea060 = DAT_01bea060 & 0xfdffffff;
        param_1[0x187] = 4;
        FUN_00aa4080(5,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
      }
    }
    iVar2 = FUN_00a8c760(0xb);
    if (iVar2 == 0) {
      return;
    }
    if (param_1[599] == 0) {
      return;
    }
    pfVar4 = (float *)FUN_00a8b8a0(auStack_64,0x40400000);
    local_84 = (int *)((float)param_1[0x10] + *pfVar4);
    fStack_80 = (float)param_1[0x11] + pfVar4[1];
    fStack_7c = (float)param_1[0x12] + pfVar4[2];
    fStack_78 = (float)param_1[0x13] + pfVar4[3];
    FUN_00e5e080("Boss4000_151010",&local_84,0,0xffffffff,0);
    return;
  case 4:
    FUN_00b94790(0x3f800000,0x3f800000);
    FUN_00b7e5d0();
    return;
  default:
    goto switchD_00565726_default;
  }
  FUN_00db3e80(0,0,&DAT_01bea1d0);
  FUN_00a92f90();
  FUN_00e26e90();
  FUN_00e22f10(0);
  FUN_00b94790(0x3f800000,0x3f800000);
  param_1[0x461] = 1;
  if (param_1[0x256] == 0) {
    if ((uVar5 != 0) && (iVar3 = FUN_00a12210(0xf00), iVar3 != 0)) {
      D3DXMatrixRotationY(auStack_54,param_1[0x25]);
      D3DXVec3TransformNormal(&stack0xffffff74,unaff_EDI + 0x50,auStack_5c);
      param_1[0x14] = (int)(*(float *)(uVar5 + 0x50) - (float)local_84);
      param_1[0x15] = (int)(*(float *)(uVar5 + 0x54) - fStack_80);
      param_1[0x16] = (int)(*(float *)(uVar5 + 0x58) - fStack_7c);
      param_1[0x17] = (int)(*(float *)(uVar5 + 0x5c) - fStack_78);
    }
    param_1[0x256] = param_1[0x256] + 1;
  }
  if (((param_1[0x188] == 1) && (iVar3 = FUN_00a8c760(0x20), iVar3 != 0)) && (param_1[0x250] == 0))
  {
    param_1[0x1029] = param_1[0x102a];
    param_1[0x250] = 1;
    FUN_00b89db0(1,0x3dcccccd);
  }
  uVar8 = 0;
  if ((float)param_1[0x1029] <= 0.0) {
    param_1[0x1029] = -0x40800000;
  }
  else {
    uVar8 = 0x40a00000;
  }
  FUN_00b7ab30(uVar8);
  if ((float)param_1[0xd09] <= (float)param_1[0x1028]) {
    fVar1 = (float)param_1[0x1029] - 1.0;
    param_1[0x1029] = (int)fVar1;
    if (((fVar1 < (float)param_1[0x102a] - (float)param_1[0x102b]) &&
        ((float)param_1[0x102a] - (float)param_1[0x102c] < fVar1)) &&
       ((param_1[0x33e] & param_1[0x394]) != 0)) {
      (**(code **)(*param_1 + 0x220))(0x40a00000);
      uVar8 = 0;
      FUN_00a92f90(0);
      fVar6 = (float10)FUN_0043f390(uVar8);
      FUN_00b7ab30((float)(fVar6 * (float10)60.0));
      uVar8 = 0;
      FUN_00a92f90(0);
      fVar7 = (float10)FUN_00407b40(uVar8);
      FUN_00b89c20(0x11d,2,0x13,iVar2,(float)(((float10)(float)fVar6 - fVar7) * (float10)60.0),
                   0x41f00000,0x41f00000,0);
      param_1[0x24f] = param_1[0x25];
      DAT_01dc08d8 = 1;
      return;
    }
  }
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    if (param_1[0x188] == 0) {
      FUN_00aa4520(0xe8,iVar2,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00b7dbe0(0x13);
      param_1[0x188] = param_1[0x188] + 1;
    }
    else if (param_1[0x188] == 1) {
      if (param_1[599] == 0) {
        FUN_00ba6810(1,1);
      }
      else {
        FUN_004168f0(6);
        param_1[0x187] = 4;
        FUN_00aa4080(5,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
      }
    }
  }
  if (((param_1[599] != 0) && (param_1[0x188] == 1)) && (iVar2 = FUN_00a8c760(0xb), iVar2 != 0)) {
    pfVar4 = (float *)FUN_00a8b8a0(auStack_74,0x40400000);
    local_84 = (int *)(*pfVar4 + (float)param_1[0x10]);
    fStack_80 = (float)param_1[0x11] + pfVar4[1];
    fStack_7c = (float)param_1[0x12] + pfVar4[2];
    fStack_78 = (float)param_1[0x13] + pfVar4[3];
    FUN_00e5e080("Boss4000_151010",&local_84,0,0xffffffff,0);
    return;
  }
switchD_00565726_default:
  return;
}

// 00565D40  FUN_00565d40  size=142  [between]
void __fastcall FUN_00565d40(int *param_1)

{
  int iVar1;
  
  param_1[0x370] = param_1[0x370] & 0xffffffbf;
  (**(code **)(*param_1 + 0x314))();
  iVar1 = param_1[0x1d9];
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x104) != 0)) {
    *(undefined4 *)(iVar1 + 0x104) = 0;
  }
  param_1[0x370] = param_1[0x370] & 0xffffffdf;
  if (param_1[0x3ee] != 0) {
    (**(code **)(param_1[0x3c8] + 8))(0,0,0);
  }
  if (param_1[0x41a] != 0) {
    (**(code **)(param_1[0x3f4] + 8))(0,0,0);
    return;
  }
  return;
}

// 00565DD0  FUN_00565dd0  size=142  [between]
void __fastcall FUN_00565dd0(int param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  
  if ((*(uint *)(param_1 + 0xdc0) & 0x1000) != 0) {
    return;
  }
  iVar2 = FUN_00a9f6b0(1);
  if (iVar2 != 0) {
    return;
  }
  sVar1 = FUN_00dde2d0(0,2);
  uVar3 = (uint)sVar1;
  if (*(uint *)(param_1 + 0x138c) == uVar3) {
    *(int *)(param_1 + 0x1390) = *(int *)(param_1 + 0x1390) + 1;
    if (*(int *)(param_1 + 0x1390) < 3) goto LAB_00565e22;
    uVar3 = (uint)(uVar3 == 0);
  }
  *(undefined4 *)(param_1 + 0x1390) = 0;
LAB_00565e22:
  *(uint *)(param_1 + 0x138c) = uVar3;
  FUN_00aa4080(*(undefined4 *)(&DAT_01641b00 + uVar3 * 4),1,0,0x3f800000,0x8000010,0xbf800000,
               0x3f800000);
  return;
}

// 00565E60  FUN_00565e60  size=187  [between]
void __fastcall FUN_00565e60(int param_1)

{
  float fVar1;
  
  if ((0 < *(int *)(param_1 + 0x13a0)) &&
     (fVar1 = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0x13b4),
     *(float *)(param_1 + 0x13b4) = fVar1, 75.0 <= fVar1)) {
    *(undefined4 *)(param_1 + 0x13b4) = 0;
    *(undefined4 *)(param_1 + 0x13a0) = 0;
    *(undefined4 *)(param_1 + 0x13a4) = 0;
  }
  if ((*(byte *)(param_1 + 0xdc0) & 2) != 0) {
    fVar1 = *(float *)(param_1 + 0x13c8) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x13c8) = fVar1;
    if (fVar1 < 0.0 != (fVar1 == 0.0)) {
      *(uint *)(param_1 + 0xdc0) = *(uint *)(param_1 + 0xdc0) & 0xfffffffd;
    }
  }
  if ((*(uint *)(param_1 + 0xdc0) & 0x400) != 0) {
    fVar1 = *(float *)(param_1 + 0x1764) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x1764) = fVar1;
    if (fVar1 < 0.0 != (fVar1 == 0.0)) {
      *(uint *)(param_1 + 0xdc0) = *(uint *)(param_1 + 0xdc0) & 0xfffffbff;
    }
  }
  fVar1 = *(float *)(param_1 + 0x1994) - *(float *)(param_1 + 0x910);
  *(float *)(param_1 + 0x1994) = fVar1;
  if (fVar1 < 0.0 != (fVar1 == 0.0)) {
    *(undefined4 *)(param_1 + 0x199c) = 0;
  }
  return;
}

// 00566010  FUN_00566010  size=123  [between]
undefined4 __fastcall FUN_00566010(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x13a8);
  if ((*(int *)(param_1 + 0x4a0) == 0) && ((*(byte *)(param_1 + 0xb00) & 2) != 0)) {
    iVar1 = FUN_00a8eea0();
    iVar2 = FUN_00a8eeb0();
    if ((float)iVar1 / (float)iVar2 < 0.1 != ((float)iVar1 / (float)iVar2 == 0.1)) {
      iVar3 = iVar3 * 2;
    }
  }
  if ((*(int *)(param_1 + 0x13a0) < iVar3) &&
     (*(int *)(param_1 + 0x13a4) < *(int *)(param_1 + 0x13ac))) {
    return 0;
  }
  return 1;
}

// 00566090  FUN_00566090  size=543  [between]
void __fastcall FUN_00566090(int *param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  float10 fVar4;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  if (param_1[0x187] != 0) {
    if (param_1[0x187] != 1) {
      return;
    }
    goto LAB_0056619d;
  }
  param_1[0x4e7] = 0;
  if (0.2617994 < ABS((float)param_1[0x4ee])) {
    if (ABS((float)param_1[0x4ee]) < 2.1816616) {
      if ((float)param_1[0x4ee] <= 0.0) {
        param_1[0x4e7] = 3;
      }
      else {
        param_1[0x4e7] = 2;
      }
    }
    else {
      param_1[0x4e7] = 1;
    }
  }
  else {
    param_1[0x4e7] = 0;
  }
  iVar2 = 0;
  if (param_1[0x4e7] == 1) {
    iVar2 = 2;
  }
  sVar1 = FUN_00dde2d0(0,1);
  uVar3 = iVar2 + sVar1;
  if (param_1[0x4e5] == uVar3) {
    param_1[0x4e6] = param_1[0x4e6] + 1;
    if (2 < param_1[0x4e6]) {
      uVar3 = (uint)(uVar3 == 0);
      goto LAB_00566158;
    }
  }
  else {
LAB_00566158:
    param_1[0x4e6] = 0;
  }
  param_1[0x4e5] = uVar3;
  FUN_00aa4080(*(undefined4 *)(&DAT_01641b18 + uVar3 * 4),0,0,0x3f800000,0x8000000,0xbf800000,
               0x3f800000);
  param_1[0x187] = param_1[0x187] + 1;
LAB_0056619d:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  if (param_1[0x4ec] <= param_1[0x4e8]) {
    FUN_00a92f90();
    iVar2 = FUN_00e26e90();
    if (iVar2 == 0) {
      fVar4 = (float10)-1.0;
    }
    else {
      fVar4 = (float10)FUN_00e36970(0);
    }
    if ((float10)0.13333333333333333 <= fVar4) {
      if ((param_1[0x470] != 0) &&
         (((param_1[0x47c] != 0 || (param_1[0x488] != 0)) && (iVar2 = FUN_00560a10(), iVar2 != 0))))
      {
        uVar3 = FUN_00dde2d0(0,100);
        if ((uVar3 & 1) != 0) {
          FUN_0055f9e0(0x50004);
          return;
        }
        if (param_1[0x128] != 0) {
          return;
        }
        FUN_0055f9e0(0x20002);
        return;
      }
      uVar3 = FUN_00dde2d0(0,100);
      if ((uVar3 & 1) != 0) {
        FUN_0055f9e0(0x50003);
        return;
      }
      if ((param_1[0x370] & 0x200000U) != 0) {
        return;
      }
      FUN_0055f9e0(0x20007);
      return;
    }
  }
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x005662ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 005662B0  FUN_005662b0  size=865  [between]
void __fastcall FUN_005662b0(int *param_1)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  float10 fVar5;
  
  uVar4 = 0;
  if ((param_1[0x370] & 0x100000U) != 0) {
    uVar4 = 0x40;
  }
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0xa0,0,0x3d888889,0x3f800000,uVar4 | 0x8000000,0xbf800000,0x3f800000);
    fVar5 = (float10)FUN_00ddba30((float)param_1[0x25] - (float)param_1[0x4ee]);
    param_1[0x25] = (int)(float)fVar5;
    (**(code **)(*param_1 + 0x318))();
    iVar3 = param_1[0x1d9];
    if ((iVar3 != 0) && (*(int *)(iVar3 + 0x104) != 1)) {
      *(undefined4 *)(iVar3 + 0x104) = 1;
      *(undefined4 *)(*(int *)(iVar3 + 0xd0) + 4) = 0;
    }
    param_1[0x370] = param_1[0x370] | 4;
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
LAB_005665c6:
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
    goto LAB_005665c6;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_0055f9e0(0x30007);
      return;
    }
  }
  return;
}

// 00566630  FUN_00566630  size=813  [between]
void __fastcall FUN_00566630(int *param_1)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  float10 fVar4;
  
  uVar3 = 0;
  if ((param_1[0x370] & 0x100000U) != 0) {
    uVar3 = 0x40;
  }
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0xa4,0,0x3d088889,0x3f800000,uVar3 | 0x8000000,0xbf800000,0x3f800000);
    (**(code **)(*param_1 + 0x1d4))(1);
    param_1[0x22a] = (int)((float)param_1[0x4f7] * 0.5);
    FUN_00a92f90();
    iVar2 = FUN_00e26e90();
    if (iVar2 == 0) {
      fVar4 = (float10)-1.0;
    }
    else {
      fVar4 = (float10)FUN_00e36a50(0);
    }
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x225] =
         (int)(float)(fVar4 * (float10)(float)param_1[0x22a] * (float10)60.0 * (float10)0.875);
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      pcVar1 = *(code **)(*param_1 + 800);
      param_1[0x225] = -0x42333333;
      iVar2 = (*pcVar1)(0x3d888889);
      if (iVar2 == 0) {
        param_1[0x370] = param_1[0x370] | 0x10000000;
        FUN_00aa4080(0xa5,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
        param_1[0x187] = param_1[0x187] + 1;
      }
      else {
        FUN_00aa4080(0xa6,0,0x3d088889,0x3f800000,uVar3 | 0x8000000,0xbf800000,0x3f800000);
        (**(code **)(*param_1 + 0x1d4))(0);
        param_1[0x187] = 3;
      }
      FUN_00ac80a0(0x3f800000,0x3f800000);
      return;
    }
    break;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar2 != 0) {
      param_1[0x370] = param_1[0x370] & 0xefffffff;
      FUN_00aa4080(0xa6,0,0x3d088889,0x3f800000,uVar3 | 0x8000000,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      (**(code **)(*param_1 + 0x1d4))(0);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      if (((param_1[0x370] & 0x8000000U) != 0) && ((param_1[0x370] & 0x80000U) == 0)) {
        FUN_00aa4080(0xaa,0,0x3d088889,0x3f800000,uVar3 | 0x8000000,0xbf800000,0x3f800000);
        FUN_00ac80a0(0x3f800000,0x3f800000);
        param_1[0x187] = param_1[0x187] + 1;
        param_1[0x370] = param_1[0x370] | 0x8000000;
        return;
      }
      FUN_0055f9e0(0x30007);
      param_1[0x370] = param_1[0x370] | 0x8000000;
      return;
    }
    break;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00566958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00566980  FUN_00566980  size=739  [between]
void __fastcall FUN_00566980(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  uVar2 = 0;
  if ((param_1[0x370] & 0x100000U) != 0) {
    uVar2 = 0x40;
  }
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0xa7,0,0x3d088889,0x3f800000,uVar2 | 0x8000000,0xbf800000,0x3f800000);
    param_1[0x22a] = param_1[0x4f7];
    (**(code **)(*param_1 + 0x318))();
    iVar1 = param_1[0x1d9];
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x104) != 1)) {
      *(undefined4 *)(iVar1 + 0x104) = 1;
      *(undefined4 *)(*(int *)(iVar1 + 0xd0) + 4) = 0;
    }
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
      FUN_00aa4080(0xa5,0,0x3d088889,0x3f800000,uVar2,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x370] = param_1[0x370] | 0x10000000;
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
      param_1[0x370] = param_1[0x370] & 0xefffffff;
      (**(code **)(*param_1 + 0x1d4))(0);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      if (((param_1[0x370] & 0x8000000U) != 0) && ((param_1[0x370] & 0x80000U) == 0)) {
        FUN_00aa4080(0xaa,0,0x3d088889,0x3f800000,uVar2 | 0x8000000,0xbf800000,0x3f800000);
        FUN_00ac80a0(0x3f800000,0x3f800000);
        param_1[0x187] = param_1[0x187] + 1;
        param_1[0x370] = param_1[0x370] | 0x8000000;
        return;
      }
      FUN_0055f9e0(0x30007);
      param_1[0x370] = param_1[0x370] | 0x8000000;
      return;
    }
    break;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00566c5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00566C80  FUN_00566c80  size=560  [between]
void __fastcall FUN_00566c80(int *param_1)

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

// 00566EB0  FUN_00566eb0  size=841  [between]
void __fastcall FUN_00566eb0(int *param_1)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  undefined4 uVar10;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_3c;
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [32];
  
  iVar5 = 0;
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    iVar5 = FUN_00a7c8a0();
  }
  (**(code **)(*param_1 + 0x220))(0x40a00000);
  iVar2 = param_1[0x187];
  if (iVar2 == 0) {
    FUN_00aa4080(0x9b,0,0x3dcccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    switchD_0080dbae::default();
    fStack_44 = *(float *)(iVar5 + 0x40);
    fStack_3c = *(float *)(iVar5 + 0x48);
    fStack_54 = (float)param_1[0x10] - fStack_44;
    fStack_50 = (float)param_1[0x11] - *(float *)(iVar5 + 0x44);
    fStack_4c = (float)param_1[0x12] - fStack_3c;
    fStack_48 = (float)param_1[0x13] - *(float *)(iVar5 + 0x4c);
    fVar1 = fStack_4c * fStack_4c + fStack_54 * fStack_54 + fStack_50 * fStack_50;
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      FUN_00ddf460(&fStack_54,&fStack_54);
      fVar8 = (float10)fStack_50;
      fVar6 = (float10)fStack_54;
      fVar9 = (float10)fStack_4c;
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      fVar6 = (float10)0;
      fVar8 = (float10)1;
      fVar9 = fVar6;
    }
    fVar7 = (float10)3.0;
    fVar6 = fVar6 * fVar7;
    fStack_54 = (float)fVar6;
    fStack_50 = (float)(fVar8 * fVar7);
    fVar9 = fVar9 * fVar7;
    fStack_4c = (float)fVar9;
    fStack_48 = (float)((float10)fStack_48 * fVar7);
    param_1[0x14] = (int)(float)((float10)fStack_44 + fVar6);
    param_1[0x16] = (int)(float)(fVar9 + (float10)fStack_3c);
    fVar6 = (float10)fpatan(-fVar6,-fVar9);
    fVar8 = (float10)FUN_00ddba30((float)(fVar6 - (float10)(float)param_1[0x25]));
    fVar6 = (float10)(float)fVar6;
    if ((float10)2.5307274 < ABS(fVar8)) {
      fVar6 = (float10)FUN_00ddba30((float)(fVar6 + (float10)3.1415927));
    }
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x25] = (int)(float)fVar6;
    param_1[0x248] = 0x40400000;
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
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar1 = (float)param_1[0x248];
  param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
  if (fVar1 - (float)param_1[0x244] <= 0.0) {
    fVar8 = (float10)FUN_00a8ec30(param_1[0x2a1] + 0x40);
    fVar8 = (float10)FUN_00ddba30((float)((float10)(float)param_1[0x25] - fVar8));
    if ((float10)1.7453293 <= ABS(fVar8)) {
      uVar10 = 0x1d;
      if (iVar5 != 0) {
        pfVar3 = (float *)FUN_00a925a0(auStack_34);
        pfVar4 = (float *)FUN_00a92640(auStack_24);
        if (pfVar4[2] * pfVar3[2] + *pfVar4 * *pfVar3 + pfVar4[1] * pfVar3[1] < 0.0) {
          uVar10 = 0x1c;
        }
      }
    }
    else {
      uVar10 = 0x1b;
    }
    FUN_00aa4080(uVar10,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  return;
}

// 00567200  FUN_00567200  size=410  [between]
void __fastcall FUN_00567200(int *param_1)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  if ((param_1[0x370] & 0x100000U) != 0) {
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
    FUN_0055f9e0(0x30007);
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

// 005673A0  FUN_005673a0  size=409  [between]
void __fastcall FUN_005673a0(int *param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if ((param_1[0x370] & 0x100000U) != 0) {
    uVar3 = 0x40;
  }
  iVar2 = param_1[0x187];
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  if (iVar2 != 0) {
    if (iVar2 != 1) {
      if (iVar2 != 2) {
        return;
      }
      FUN_00ac80a0(0x3f800000,0x3f800000);
      iVar2 = FUN_00a94ce0(0);
      if (iVar2 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00567409. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    goto LAB_0056749b;
  }
  FUN_00aa4080(0xa9,0,0x3d088889,0x3f800000,uVar3,0xbf800000,0x3f800000);
  if (param_1[0x4e1] == 0x30001) {
    fVar1 = (float)param_1[0x4f0];
LAB_0056745f:
    param_1[0x4ef] = (int)(fVar1 * 60.0);
  }
  else if (param_1[0x4e1] - 0x30004U < 2) {
    fVar1 = (float)param_1[0x4f1];
    goto LAB_0056745f;
  }
  if (param_1[0x139] != 0) {
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_0055f9e0(0x60001);
    return;
  }
  param_1[0x187] = param_1[0x187] + 1;
LAB_0056749b:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar1 = (float)param_1[0x4ef];
  param_1[0x4ef] = (int)(fVar1 - (float)param_1[0x244]);
  if (fVar1 - (float)param_1[0x244] <= 0.0) {
    if ((param_1[0x370] & 0x80000U) != 0) {
      FUN_0055f9e0(0x70006);
      return;
    }
    FUN_00aa4080(0xaa,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x4ef] = 0;
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  return;
}

// 00567540  FUN_00567540  size=215  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00567540(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  
  *(byte *)(param_1 + 0xdb4) = *(byte *)(param_1 + 0xdb4) | 8;
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar3 = 0xb2;
    if (2.1816616 < ABS(*(float *)(param_1 + 0x13b8))) {
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
      goto LAB_005675dc;
    }
  }
  fVar1 = 1.0;
LAB_005675dc:
  FUN_00a96030(0,fVar1);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    FUN_0055f9e0(0x30007);
  }
  return;
}

// 00567620  FUN_00567620  size=774  [between]
void __fastcall FUN_00567620(int *param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  switch(param_1[0x187]) {
  case 0:
    if (param_1[0x4e1] == 0x30009) {
      param_1[0x4e7] = 0;
      if (0.2617994 < ABS((float)param_1[0x4ee])) {
        if (ABS((float)param_1[0x4ee]) < 2.1816616) {
          if ((float)param_1[0x4ee] <= 0.0) {
            param_1[0x4e7] = 3;
          }
          else {
            param_1[0x4e7] = 2;
          }
        }
        else {
          param_1[0x4e7] = 1;
        }
      }
      else {
        param_1[0x4e7] = 0;
      }
      iVar2 = 0;
      if (param_1[0x4e7] == 1) {
        iVar2 = 2;
      }
      sVar1 = FUN_00dde2d0(0,1);
      uVar3 = iVar2 + sVar1;
      if (param_1[0x4e5] == uVar3) {
        param_1[0x4e6] = param_1[0x4e6] + 1;
        if (2 < param_1[0x4e6]) {
          uVar3 = (uint)(uVar3 == 0);
          goto LAB_00567703;
        }
      }
      else {
LAB_00567703:
        param_1[0x4e6] = 0;
      }
      param_1[0x4e5] = uVar3;
      FUN_00aa4080(*(undefined4 *)(&DAT_01641b2c + uVar3 * 4),0,0,0x3f800000,0x8000000,0xbf800000,
                   0x3f800000);
      iVar2 = 0x3eaaaaab;
    }
    else {
      FUN_00aa4120(0xab,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      iVar2 = 0x3e4ccccd;
    }
    param_1[0x248] = iVar2;
    (**(code **)(*param_1 + 0x1f8))(1);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (((param_1[0x128] != 0) || ((*(byte *)(param_1 + 0x2c0) & 2) == 0)) &&
       (param_1[0x186] == 0x3000a)) {
      *(undefined2 *)(param_1 + 0x209) = 3;
      param_1[0x20a] = 0x78;
      FUN_00563370();
    }
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
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
      FUN_00563370();
    }
    if ((*(byte *)(param_1 + 0x370) & 2) == 0) {
      FUN_00aa4080(0xad,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00567921. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00567940  FUN_00567940  size=367  [between]
void __fastcall FUN_00567940(int *param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  iVar2 = param_1[0x187];
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  if (iVar2 == 0) {
    uVar4 = 0;
    if ((param_1[0x370] & 0x100000U) != 0) {
      uVar4 = 0x40;
    }
    FUN_00aa4080(0xb1,0,0x3e088889,0x3f800000,uVar4,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = (int)((float)param_1[0x620] * 60.0);
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
                    /* WARNING: Could not recover jumptable at 0x00567994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  uVar3 = 0;
  if ((param_1[0x370] & 0x100000U) != 0) {
    uVar3 = 0x40;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar1 = (float)param_1[0x248];
  param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
  if (fVar1 - (float)param_1[0x244] <= 0.0) {
    if ((param_1[0x370] & 0x80000U) == 0) {
      uVar3 = 0x8000000;
      uVar4 = 0xaa;
    }
    else {
      uVar3 = uVar3 | 0x8000000;
      uVar4 = 0x140;
    }
    FUN_00aa4080(uVar4,0,0x3e4ccccd,0x3f800000,uVar3,0xbf800000,0x3f800000);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  return;
}

// 00567AB0  FUN_00567ab0  size=360  [between]
void __fastcall FUN_00567ab0(int *param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  if (param_1[0x187] == 0) {
    sVar1 = FUN_00dde2d0(0,1);
    iVar3 = (int)sVar1;
    if ((param_1[0x4e1] == 0x3000d) && (iVar3 == param_1[0x250])) {
      param_1[0x250] = (uint)(param_1[0x250] == 0);
    }
    param_1[0x250] = iVar3;
    FUN_00aa4080(*(undefined4 *)(&DAT_01641b3c + iVar3 * 4),0,0x3e088889,0x3f800000,0x8000000,
                 0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  if (param_1[0x4e8] < param_1[0x4ec]) {
    iVar3 = FUN_00a94ce0(0);
    if ((iVar3 == 0) && (iVar3 = FUN_00a8c760(4), iVar3 == 0)) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00567c16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  if ((param_1[0x470] == 0) || ((param_1[0x47c] == 0 && (param_1[0x488] == 0)))) {
    uVar2 = FUN_00dde2d0(0,100);
    if ((uVar2 & 1) != 0) {
      FUN_0055f9e0(0x50003);
      return;
    }
    if ((param_1[0x370] & 0x200000U) == 0) {
      FUN_0055f9e0(0x20007);
      return;
    }
  }
  else {
    uVar2 = FUN_00dde2d0(0,100);
    if ((uVar2 & 1) == 0) {
      if (param_1[0x128] == 0) {
        FUN_0055f9e0(0x20002);
        return;
      }
    }
    else {
      FUN_0055f9e0(0x50004);
    }
  }
  return;
}

// 00567C20  FUN_00567c20  size=1090  [between]
void __fastcall FUN_00567c20(int *param_1)

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
  if ((param_1[0x370] & 0x100000U) != 0) {
    uVar9 = 0x40;
  }
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0xa0,0,0x3d888889,0x3f800000,uVar9 | 0x8000000,0xbf800000,0x3f800000);
    fVar10 = (float10)FUN_00ddba30((float)param_1[0x25] - (float)param_1[0x4ee]);
    param_1[0x25] = (int)(float)fVar10;
    (**(code **)(*param_1 + 0x318))();
    iVar8 = param_1[0x1d9];
    if ((iVar8 != 0) && (*(int *)(iVar8 + 0x104) != 1)) {
      *(undefined4 *)(iVar8 + 0x104) = 1;
      *(undefined4 *)(*(int *)(iVar8 + 0xd0) + 4) = 0;
    }
    param_1[0x370] = param_1[0x370] | 4;
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
    fVar5 = (float)param_1[0x672];
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
LAB_00567f20:
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
    goto LAB_00567f20;
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
      FUN_0055f9e0(0x30007);
      return;
    }
  }
  return;
}

// 00568080  FUN_00568080  size=291  [between]
void __fastcall FUN_00568080(int *param_1)

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
    FUN_0055a580(param_1[0x2a1] + 0x40,0x3e333333,0x3d8efa35);
  }
  iVar1 = FUN_00a94ce0(0);
  if ((iVar1 == 0) && (iVar1 = FUN_00a8c760(4), iVar1 == 0)) {
    return;
  }
  fVar3 = (float10)FUN_00a8ec30(param_1[0x2a1] + 0x40);
  fVar3 = (float10)FUN_00ddba30((float)((float10)(float)param_1[0x25] - fVar3));
  if (ABS(fVar3) < (float10)0.61086524) {
                    /* WARNING: Could not recover jumptable at 0x005681a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  FUN_0055f9e0(0x10005);
  return;
}

// 005681B0  FUN_005681b0  size=168  [between]
void __fastcall FUN_005681b0(int param_1)

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
      iVar2 = thunk_FUN_00e58ed0(*(undefined4 *)(param_1 + 0x19bc));
      if (iVar2 == 0) {
        FUN_00a805f0();
        return;
      }
    }
  }
  return;
}

// 00568260  FUN_00568260  size=412  [between]
void __fastcall FUN_00568260(int *param_1)

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
    FUN_00563440();
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

// 00568400  FUN_00568400  size=236  [between]
void __fastcall FUN_00568400(int param_1)

{
  float fVar1;
  uint uVar2;
  float10 fVar3;
  
  fVar3 = (float10)FUN_00a8ec30(*(int *)(param_1 + 0xa84) + 0x40);
  fVar3 = (float10)FUN_00ddba30((float)((float10)*(float *)(param_1 + 0x94) - fVar3));
  if ((float10)0.7853982 <= ABS(fVar3)) {
    if (*(int *)(param_1 + 0x1778) < 4) {
      FUN_0055f9e0(0x10005);
      return;
    }
    FUN_0055f9e0(0x50000);
    return;
  }
  if (*(float *)(param_1 + 0xa90) <= 8.0) {
    FUN_0055f9e0(0x90000);
  }
  fVar1 = *(float *)(param_1 + 0xa90);
  if (!NAN(fVar1) && 625.0 < fVar1 != (fVar1 == 625.0)) {
    if (*(int *)(param_1 + 0x1280) != 0) {
      FUN_0055f9e0(0x90004);
      return;
    }
    FUN_0055f9e0(0x90003);
    return;
  }
  if (*(float *)(param_1 + 0xa90) <= 12.5) {
    uVar2 = FUN_00dde2d0(1,99);
    if ((uVar2 & 1) == 0) {
      FUN_0055f9e0(0x90001);
      return;
    }
  }
  FUN_0055f9e0(0x90002);
  return;
}

// 005684F0  FUN_005684f0  size=233  [between]
void __fastcall FUN_005684f0(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(5,0,0x3ecccccd,0x3f800000,0,0xbf800000,0x3f800000);
    uVar1 = *(uint *)(param_1 + 0x1384);
    *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x1768) * 60.0;
    if ((uVar1 & 0xffff0000) == 0x30000) {
      *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x176c) * 60.0;
    }
    if ((*(uint *)(param_1 + 0xdc0) & 0x4000000) != 0) {
      *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x176c) * 60.0 * 3.0;
    }
    if (((int)uVar1 < 0x10004) || ((0x10006 < (int)uVar1 && (uVar1 != 0x1000a)))) {
      *(undefined4 *)(param_1 + 0x1778) = 0;
    }
    else {
      *(int *)(param_1 + 0x1778) = *(int *)(param_1 + 0x1778) + 1;
    }
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 005685E0  FUN_005685e0  size=415  [between]
void __fastcall FUN_005685e0(int *param_1)

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
    FUN_0055a580(param_1[0x2a1] + 0x40,0x3e19999a,0x3d0efa35);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if ((64.0 < (float)param_1[0x2a4]) && (param_1[0x632] == 0)) {
      return;
    }
    uVar4 = 0x8000000;
    uVar3 = 0x3e4ccccd;
    uVar2 = 8;
    goto LAB_005686a4;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0056877b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  default:
    goto switchD_005685f4_default;
  }
  FUN_0055a580(param_1[0x2a1] + 0x40,0x3e19999a,0x3d0efa35);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    uVar4 = 0;
    uVar3 = 0;
    uVar2 = 6;
LAB_005686a4:
    FUN_00aa4080(uVar2,0,uVar3,0x3f800000,uVar4,0xbf800000,0x3f800000);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
switchD_005685f4_default:
  return;
}

// 00568790  FUN_00568790  size=572  [between]
void __fastcall FUN_00568790(int *param_1)

{
  int iVar1;
  float10 fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  switch(param_1[0x187]) {
  case 0:
    if ((param_1[0x4e1] == 0x10006) || (param_1[0x4e1] == 0x10007)) {
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
    FUN_0055a580(param_1[0x2a1] + 0x40,0x3e4ccccd,0x3db2b8c2);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
    iVar1 = FUN_0055eb60();
    if (iVar1 != 0) {
      FUN_0055f9e0(0x10007);
      return;
    }
    if (((100.0 < (float)param_1[0x2a4]) ||
        (fVar2 = (float10)FUN_0055a7a0(),
        fVar2 < (float10)1.0471976 == (fVar2 == (float10)1.0471976))) && (param_1[0x632] == 0)) {
      return;
    }
    uVar5 = 0x8000000;
    uVar4 = 0x3e4ccccd;
    uVar3 = 0xc;
    goto LAB_005688b6;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x005689c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  default:
    goto switchD_005687a4_default;
  }
  FUN_0055a580(param_1[0x2a1] + 0x40,0x3e4ccccd,0x3db2b8c2);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 10;
LAB_005688b6:
    FUN_00aa4080(uVar3,0,uVar4,0x3f800000,uVar5,0xbf800000,0x3f800000);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
switchD_005687a4_default:
  return;
}

// 005689E0  FUN_005689e0  size=381  [between]
void __fastcall FUN_005689e0(int param_1)

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
    if (*(int *)(param_1 + 0x1384) == 0x20003) {
      *puVar1 = *(undefined4 *)(param_1 + 0x1330);
      *(undefined4 *)(param_1 + 0x964) = *(undefined4 *)(param_1 + 0x1334);
      *(undefined4 *)(param_1 + 0x968) = *(undefined4 *)(param_1 + 0x1338);
      *(undefined4 *)(param_1 + 0x96c) = *(undefined4 *)(param_1 + 0x133c);
    }
    iVar2 = FUN_0055a840(puVar1,param_1 + 0x920);
    FUN_00aa4080(*(undefined4 *)(&DAT_01641b4c + iVar2 * 4),0,0x3e4ccccd,0x3f800000,0x8000000,
                 0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  iVar2 = FUN_00a8c760(0);
  if (iVar2 != 0) {
    FUN_0055a580(*(int *)(param_1 + 0xa84) + 0x40,0x3e19999a,0x3d0efa35);
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if ((iVar2 == 0) && (iVar2 = FUN_00a8c760(4), iVar2 == 0)) {
    return;
  }
  if ((*(int *)(param_1 + 0x1384) != 0x20004) || (30.25 < *(float *)(param_1 + 0xa90))) {
    FUN_0055f9e0(*(int *)(param_1 + 0x1384));
    return;
  }
  iVar2 = FUN_00560a10();
  if ((iVar2 != 0) && (uVar3 = FUN_00dde2d0(0,100), (uVar3 & 1) != 0)) {
    FUN_0055f9e0(0x20007);
    return;
  }
  FUN_0055f9e0(0x50000);
  return;
}

// 00568B60  FUN_00568b60  size=623  [between]
void __fastcall FUN_00568b60(int *param_1)

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
    param_1[0x22a] = (int)((float)param_1[0x4f7] * 1.8);
    param_1[0x225] = (int)((float)param_1[0x4f7] * 1.8 * 16.0);
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
      param_1[0x370] = param_1[0x370] & 0xfffffffb;
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
       (iVar4 = param_1[0x4e1], FUN_0055f9e0(iVar4), iVar4 == 0xf0000)) {
      param_1[0x370] = param_1[0x370] | 4;
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

// 00568DE0  FUN_00568de0  size=169  [between]
void __fastcall FUN_00568de0(int param_1)

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
    FUN_0055f9e0(0x1000c);
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  return;
}

// 00568EA0  FUN_00568ea0  size=1588  [between]
void __fastcall FUN_00568ea0(int *param_1)

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
    param_1[0x370] = param_1[0x370] | 4;
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
                    /* WARNING: Could not recover jumptable at 0x005694ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 005694F0  FUN_005694f0  size=39  [between]
void __fastcall FUN_005694f0(int param_1)

{
  if ((*(int *)(param_1 + 0x61c) == 2) && (15.0 < *(float *)(param_1 + 0x18f0))) {
    FUN_0055f9e0(0x10003);
  }
  return;
}

// 00569520  FUN_00569520  size=115  [between]
void __fastcall FUN_00569520(int *param_1)

{
  if (param_1[0x187] == 0) {
    FUN_00aa4080(5,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  if ((param_1[0x370] & 0x40000000U) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00569591. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 005695A0  FUN_005695a0  size=253  [between]
void __fastcall FUN_005695a0(int *param_1)

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
    FUN_0055a580(param_1[0x2a1] + 0x40,0x3e333333,0x3d8efa35);
  }
  iVar1 = FUN_00a94ce0(0);
  if ((iVar1 == 0) && (iVar1 = FUN_00a8c760(4), iVar1 == 0)) {
    return;
  }
  fVar2 = (float10)FUN_00a8ec30(param_1[0x2a1] + 0x40);
  fVar2 = (float10)FUN_00ddba30((float)((float10)(float)param_1[0x25] - fVar2));
  if ((float10)0.61086524 <= ABS(fVar2)) {
    FUN_0055f9e0(0x10005);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0056969b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 005696A0  FUN_005696a0  size=297  [between]
void __fastcall FUN_005696a0(int *param_1)

{
  uint uVar1;
  int iVar2;
  float10 fVar3;
  undefined4 uVar4;
  
  if (param_1[0x187] != 0) {
    if (param_1[0x187] != 1) {
      return;
    }
    goto LAB_00569717;
  }
  uVar1 = FUN_00dde2d0(1,100);
  if ((uVar1 & 1) == 0) {
    if (param_1[0x47c] == 0) goto LAB_0056970a;
    uVar4 = 0x1c;
  }
  else if (param_1[0x488] == 0) {
    uVar4 = 0x1c;
  }
  else {
LAB_0056970a:
    uVar4 = 0x1d;
  }
  FUN_00aa4080(uVar4,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  param_1[0x187] = param_1[0x187] + 1;
LAB_00569717:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a8c760(0);
  if (iVar2 != 0) {
    FUN_0055a580(param_1[0x2a1] + 0x40,0x3e333333,0x3d8efa35);
  }
  iVar2 = FUN_00a94ce0(0);
  if ((iVar2 == 0) && (iVar2 = FUN_00a8c760(4), iVar2 == 0)) {
    return;
  }
  fVar3 = (float10)FUN_00a8ec30(param_1[0x2a1] + 0x40);
  fVar3 = (float10)FUN_00ddba30((float)((float10)(float)param_1[0x25] - fVar3));
  if (ABS(fVar3) < (float10)0.61086524) {
                    /* WARNING: Could not recover jumptable at 0x005697c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  FUN_0055f9e0(0x10005);
  return;
}

// 005697D0  FUN_005697d0  size=460  [between]
void __fastcall FUN_005697d0(int *param_1)

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
    FUN_0055a580(param_1[0x2a1] + 0x40,0x3e19999a,0x3d0efa35);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (((100.0 < (float)param_1[0x2a4]) && (param_1[0x632] == 0)) &&
       (0.0 < fVar1 - (float)param_1[0x244])) {
      return;
    }
    uVar5 = 0x8000000;
    uVar4 = 0x3e4ccccd;
    uVar3 = 8;
    goto LAB_005698a0;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00569998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  default:
    goto switchD_005697e4_default;
  }
  FUN_0055a580(param_1[0x2a1] + 0x40,0x3e19999a,0x3d0efa35);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 6;
LAB_005698a0:
    FUN_00aa4080(uVar3,0,uVar4,0x3f800000,uVar5,0xbf800000,0x3f800000);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
switchD_005697e4_default:
  return;
}

// 005699B0  FUN_005699b0  size=579  [between]
void __fastcall FUN_005699b0(int *param_1)

{
  int iVar1;
  float10 fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  switch(param_1[0x187]) {
  case 0:
    iVar1 = param_1[0x4e1];
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
    FUN_0055a580(param_1[0x2a1] + 0x40,0x3e4ccccd,0x3db2b8c2);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
    iVar1 = FUN_0055eb60();
    if (iVar1 != 0) {
      FUN_0055f9e0(0x10007);
      return;
    }
    if (((144.0 < (float)param_1[0x2a4]) ||
        (fVar2 = (float10)FUN_0055a7a0(),
        fVar2 < (float10)1.0471976 == (fVar2 == (float10)1.0471976))) && (param_1[0x632] == 0)) {
      return;
    }
    uVar5 = 0x8000000;
    uVar4 = 0x3e4ccccd;
    uVar3 = 0xc;
    goto LAB_00569add;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00569bef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  default:
    goto switchD_005699c4_default;
  }
  FUN_0055a580(param_1[0x2a1] + 0x40,0x3e4ccccd,0x3db2b8c2);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 10;
LAB_00569add:
    FUN_00aa4080(uVar3,0,uVar4,0x3f800000,uVar5,0xbf800000,0x3f800000);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
switchD_005699c4_default:
  return;
}

// 00569C10  FUN_00569c10  size=1701  [between]
void __fastcall FUN_00569c10(int *param_1)

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
  
  iVar5 = param_1[0x67a];
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
    param_1[0x370] = param_1[0x370] | 4;
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
                    /* WARNING: Could not recover jumptable at 0x0056a2b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 0056A2E0  FUN_0056a2e0  size=537  [between]
void __fastcall FUN_0056a2e0(int *param_1)

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
  
  iVar2 = FUN_0055c2c0();
  if ((iVar2 == 0) && (param_1[0x66c] != 0)) {
    param_1[0x66c] = 0;
    FUN_00a8c9b0(0,0x197,0,0);
  }
  iVar2 = FUN_00a8ef10();
  if ((((iVar2 == 0) && (param_1[0x139] == 0)) &&
      (iVar2 = (**(code **)(*param_1 + 0x1fc))(), iVar2 == 0)) && (param_1[0x676] == 0)) {
    fStack_30 = (float)param_1[0x628] - (float)param_1[0x10];
    fStack_2c = (float)param_1[0x629] - (float)param_1[0x11];
    fStack_28 = (float)param_1[0x62a] - (float)param_1[0x12];
    fStack_24 = (float)param_1[0x62b] - (float)param_1[0x13];
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
      fVar1 = (float)param_1[0x626] * pfVar3[2] +
              (float)param_1[0x624] * *pfVar3 + (float)param_1[0x625] * pfVar3[1];
    }
    iVar2 = (**(code **)(*param_1 + 0x1d8))();
    if (iVar2 == 0) {
      param_1[0x62c] = (-(uint)(0.0 <= fVar1) & 0xfffffffd) + 0x9e;
      if ((param_1[0x370] & 0x80000U) == 0) {
        uVar4 = 0x80006;
      }
      else {
        uVar4 = 0x80000;
      }
    }
    else if ((param_1[0x370] & 0x80000U) == 0) {
      uVar4 = 0x30005;
    }
    else {
      uVar4 = 0x80003;
    }
    FUN_0055f9e0(uVar4);
    param_1[0x370] = param_1[0x370] | 0x400000;
  }
  return;
}

// 0056A500  FUN_0056a500  size=475  [between]
bool __thiscall FUN_0056a500(int *param_1,int *param_2,uint *param_3)

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
              iVar2 = FUN_0055d5e0();
              if (iVar2 == 0) {
                iVar2 = FUN_00566010();
                if ((iVar2 == 0) && (*(byte *)((int)param_2 + 0x11) < 7)) {
                  iVar2 = (**(code **)(*param_1 + 0x1d8))();
                  if (iVar2 == 0) goto LAB_0056a65a;
                }
              }
              if (((param_1[0x370] & 2U) == 0) && ((param_1[0x370] & 0x400U) == 0)) {
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
            param_1[0x672] = 0x3ecccccd;
            if ((*param_2 == 0x4b) || (*param_2 == 0x4c)) {
              param_1[0x672] = 0x3f19999a;
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
LAB_0056a65a:
  iVar2 = FUN_00a8eea0();
  if ((iVar2 < 1) && (param_1[0x139] == 0)) {
    param_1[0x62c] = 0x136;
    FUN_0055f9e0(0x80002);
    return true;
  }
  if (iVar4 == -1) {
    FUN_00565dd0();
    *param_3 = 0x400;
  }
  else {
    FUN_0055f9e0(iVar4);
  }
  *param_3 = *param_3 | 1;
  (**(code **)(*param_1 + 0x220))(0x40a00000);
  return iVar4 != -1;
}

// 0056A6E0  Em0220::vf338  size=64  [class]
void __thiscall Em0220::vf338(int *param_1,undefined4 param_2,int param_3,int param_4)

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

// 0056A720  FUN_0056a720  size=654  [callgraph]
void __fastcall FUN_0056a720(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int aiStack_30 [2];
  undefined1 auStack_28 [4];
  undefined4 local_24 [4];
  undefined4 uStack_14;
  
  if (*(int *)(param_1 + 0x18c4) == 0) {
    if ((*(byte *)(param_1 + 0xdc8) & 4) == 0) {
      local_24[0] = 0;
      iVar1 = FUN_00a54ae0(local_24,param_1 + 0x494,"_col.hkx");
      if (iVar1 != 0) {
        iVar2 = FUN_00dd3500(0x3c,&DAT_01b7bd48);
        if (iVar2 == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = RigidBodyCollection::RigidBodyCollection_2();
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
        *(uint *)(param_1 + 0xdc0) = *(uint *)(param_1 + 0xdc0) & 0xff7fffff;
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
    *(undefined4 *)(param_1 + 0x18c4) = 1;
  }
  return;
}

// 0056A9C0  FUN_0056a9c0  size=347  [callgraph]
undefined4 FUN_0056a9c0(float *param_1,int param_2)

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
    if (*param_1 != 0.0) goto LAB_0056aa7c;
  }
  if ((param_1[1] == 0.0) && (param_1[2] == 0.0)) {
    return 0;
  }
LAB_0056aa7c:
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

// 0056AB20  FUN_0056ab20  size=121  [callgraph]
void __fastcall FUN_0056ab20(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + 0xdcc + iVar1 * 0x14) == 0) {
      *(undefined4 *)(param_1 + 0xdcc + iVar1 * 0x14) = 1;
      FUN_0055c380(iVar1);
      if (((iVar1 == 6) || (iVar1 == 5)) && ((*(uint *)(param_1 + 0xdc0) & 0x800000) != 0)) {
        *(uint *)(param_1 + 0xdc0) = *(uint *)(param_1 + 0xdc0) & 0xff7fffff;
        FUN_00a93910(1);
      }
      if ((iVar1 == 4) && (*(int *)(param_1 + 0x1904) != -1)) {
        FUN_00c52700(*(int *)(param_1 + 0x1904),1);
      }
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 8);
  return;
}

// 0056ABB0  FUN_0056abb0  size=36  [callgraph]
undefined4 __fastcall FUN_0056abb0(int param_1)

{
  int iVar1;
  
  if ((*(uint *)(param_1 + 0xdc0) & 0x600000) == 0) {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

// 0056AC10  FUN_0056ac10  size=95  [callgraph]
void __fastcall FUN_0056ac10(int param_1)

{
  int iVar1;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  iVar1 = FUN_0056a9c0(&local_20,0);
  if (iVar1 != 0) {
    *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0x50) + local_20 * -0.1;
    *(float *)(param_1 + 0x54) = local_1c * -0.1 + *(float *)(param_1 + 0x54);
    *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x58) + local_18 * -0.1;
    *(float *)(param_1 + 0x5c) = local_14 * -0.1 + *(float *)(param_1 + 0x5c);
  }
  return;
}

// 0056AC70  FUN_0056ac70  size=467  [callgraph]
void __fastcall FUN_0056ac70(int param_1)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  
  if (((*(int *)(param_1 + 0x61c) == 0) || (0.0 < *(float *)(param_1 + 0x920))) ||
     (*(int *)(param_1 + 0x18c8) != 0)) {
    return;
  }
  if (((*(float *)(param_1 + 0xa90) <= 225.0) && ((*(uint *)(param_1 + 0xdc0) & 0x200000) == 0)) &&
     ((10.0 < *(float *)(param_1 + 0x18f0) &&
      ((fVar1 = *(float *)(param_1 + 0xa90), !NAN(fVar1) && 49.0 < fVar1 != (fVar1 == 49.0) &&
       (fVar3 = (float10)FUN_00dde300(0,0x3f800000),
       fVar3 < (float10)*(float *)(param_1 + 0x1548) !=
       (fVar3 == (float10)*(float *)(param_1 + 0x1548)))))))) {
    if (*(int *)(param_1 + 5000) == 0x70005) {
      *(int *)(param_1 + 0x1550) = *(int *)(param_1 + 0x1550) + 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x1550) = 0;
    }
    if (*(int *)(param_1 + 0x1550) < *(int *)(param_1 + 0x154c)) {
      FUN_0055f9e0(0x70005);
      return;
    }
  }
  if (*(int *)(param_1 + 0x4a0) == 0) {
    fVar3 = (float10)FUN_0055a7a0();
    if (fVar3 <= (float10)1.0471976) {
      fVar1 = *(float *)(param_1 + 0xa90);
      if ((!NAN(fVar1) && 9.0 < fVar1 != (fVar1 == 9.0)) && (0 < *(int *)(param_1 + 0x19d0)))
      goto LAB_0056ad97;
      fVar3 = (float10)FUN_0055a7a0();
      if (fVar3 <= (float10)0.6981317) {
        if (81.0 < *(float *)(param_1 + 0xa90)) {
          return;
        }
        iVar2 = FUN_0056abb0();
        if (iVar2 == 0) {
          return;
        }
        FUN_0055f9e0(0x70003);
        return;
      }
    }
  }
  else {
    fVar3 = (float10)FUN_0055a7a0();
    if (fVar3 <= (float10)1.0471976) {
      if ((*(float *)(param_1 + 0xa90) <= 20736.0) && (0 < *(int *)(param_1 + 0x19d0))) {
        if (0.0 < *(float *)(param_1 + 0x17a8)) {
          return;
        }
        iVar2 = FUN_0056abb0();
        if (iVar2 == 0) {
          return;
        }
        FUN_0055f9e0(0x70004);
        return;
      }
LAB_0056ad97:
      FUN_0055f9e0(0x70001);
      return;
    }
  }
  FUN_0055f9e0(0x70002);
  return;
}

// 0056AE50  FUN_0056ae50  size=243  [callgraph]
void __fastcall FUN_0056ae50(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar1 = 0;
    if ((*(uint *)(param_1 + 0xdc0) & 0x100000) != 0) {
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
  if ((*(float *)(param_1 + 0x18c0) <= 0.0) && ((*(uint *)(param_1 + 0xdc0) & 0x80000) != 0)) {
    if ((*(uint *)(param_1 + 0xdc0) & 0x600000) != 0) goto LAB_0056af02;
    iVar3 = FUN_00a81330();
    if (iVar3 == 0) goto LAB_0056af02;
  }
  if ((iVar2 == 0) || (*(int *)(iVar2 + 0x370) != 0)) {
    *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  }
LAB_0056af02:
  *(undefined4 *)(param_1 + 0x18b0) = 0x136;
  FUN_0055f9e0(0x80002);
  return;
}

// 0056AF50  FUN_0056af50  size=224  [callgraph]
void __fastcall FUN_0056af50(int *param_1)

{
  float fVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  float10 fVar2;
  
  if (param_1[0x187] != 0) {
    if ((((float)param_1[0x2a4] <= 225.0) && ((param_1[0x370] & 0x200000U) == 0)) &&
       (fVar1 = (float)param_1[0x2a4], !NAN(fVar1) && 49.0 < fVar1 != (fVar1 == 49.0))) {
      fVar2 = (float10)FUN_00dde300(0,0x3f800000);
      if ((fVar2 < (float10)(float)param_1[0x552] != (fVar2 == (float10)(float)param_1[0x552])) &&
         (param_1[0x554] < param_1[0x553])) {
        (**(code **)(*param_1 + 0x34c))();
      }
    }
    if (param_1[0x128] == 0) {
      if ((float)param_1[0x2a4] <= 6.25) {
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_1 + 0x34c);
        param_1[0x554] = 0;
                    /* WARNING: Could not recover jumptable at 0x0056b002. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)();
        return;
      }
    }
    else if ((float)param_1[0x2a4] <= 100.0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_1 + 0x34c);
      param_1[0x554] = 0;
                    /* WARNING: Could not recover jumptable at 0x0056b02c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
  }
  return;
}

// 0056B030  FUN_0056b030  size=155  [callgraph]
void __fastcall FUN_0056b030(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar1 = 0;
    if ((*(uint *)(param_1 + 0xdc0) & 0x100000) != 0) {
      uVar1 = 0x40;
    }
    FUN_00aa4080(0x12e,0,0x3e888889,0x3f800000,uVar1,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_0055a580(*(int *)(param_1 + 0xa84) + 0x40,0x3da3d70a,0x3c8efa35);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 0056B0D0  FUN_0056b0d0  size=336  [callgraph]
void __fastcall FUN_0056b0d0(int *param_1)

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
    goto LAB_0056b197;
  }
  uVar4 = 0;
  local_4 = &DAT_01641b78;
  if ((param_1[0x370] & 0x100000U) != 0) {
    uVar4 = 0x40;
    local_4 = &DAT_01641b68;
  }
  pfVar1 = (float *)(param_1 + 0x248);
  iVar3 = FUN_0055a840(param_1[0x2a1] + 0x40,pfVar1);
  if (iVar3 == 2) {
    fVar2 = *pfVar1 + 1.5707964;
LAB_0056b145:
    fVar5 = (float10)FUN_00ddba30(fVar2);
    *pfVar1 = (float)fVar5;
  }
  else if (iVar3 == 3) {
    fVar2 = *pfVar1 - 1.5707964;
    goto LAB_0056b145;
  }
  FUN_00aa4080(*(undefined4 *)(local_4 + iVar3 * 4),0,0x3e088889,0x3f800000,uVar4 | 0x8000000,
               0xbf800000,0x3f800000);
  param_1[0x187] = param_1[0x187] + 1;
LAB_0056b197:
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
                    /* WARNING: Could not recover jumptable at 0x0056b21e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 0056B220  FUN_0056b220  size=138  [callgraph]
void __fastcall FUN_0056b220(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1[0x187] == 0) {
    uVar1 = 0;
    if ((param_1[0x370] & 0x100000U) != 0) {
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
                    /* WARNING: Could not recover jumptable at 0x0056b2a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 0056B2B0  FUN_0056b2b0  size=141  [callgraph]
void __fastcall FUN_0056b2b0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1[0x187] == 0) {
    uVar1 = 0x8000000;
    if ((param_1[0x370] & 0x100000U) != 0) {
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
                    /* WARNING: Could not recover jumptable at 0x0056b33b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 0056B340  FUN_0056b340  size=141  [callgraph]
void __fastcall FUN_0056b340(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1[0x187] == 0) {
    uVar1 = 0x8000000;
    if ((param_1[0x370] & 0x100000U) != 0) {
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
                    /* WARNING: Could not recover jumptable at 0x0056b3cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 0056B3D0  FUN_0056b3d0  size=193  [callgraph]
void __fastcall FUN_0056b3d0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1[0x187] == 0) {
    uVar1 = 0x8000000;
    if ((param_1[0x370] & 0x100000U) != 0) {
      uVar1 = 0x8000040;
    }
    FUN_00aa4080(param_1[0x62c],0,0x3d888889,0x3f800000,uVar1,0xbf800000,0x3f800000);
    iVar2 = param_1[0x62d];
    if (((iVar2 != 0x1e) && (iVar2 != 0x1d)) && (iVar2 != 0x17)) {
      param_1[0x370] = param_1[0x370] | 0x80000;
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
                    /* WARNING: Could not recover jumptable at 0x0056b48f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 0056B4A0  FUN_0056b4a0  size=582  [callgraph]
void __fastcall FUN_0056b4a0(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if ((param_1[0x370] & 0x100000U) != 0) {
    uVar2 = 0x40;
  }
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0xa7,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x22a] = param_1[0x4f7];
    (**(code **)(*param_1 + 0x318))();
    iVar1 = param_1[0x1d9];
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x104) != 1)) {
      *(undefined4 *)(iVar1 + 0x104) = 1;
      *(undefined4 *)(*(int *)(iVar1 + 0xd0) + 4) = 0;
    }
    param_1[0x370] = param_1[0x370] | 0x80000;
    param_1[0x630] = 0x44160000;
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
      param_1[0x370] = param_1[0x370] & 0xefffffff;
      (**(code **)(*param_1 + 0x1d4))(0);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_0055f9e0(0x30007);
      return;
    }
  }
  return;
}

// 0056B700  FUN_0056b700  size=114  [callgraph]
void __fastcall FUN_0056b700(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    iVar1 = param_1[0x62d];
    if (((iVar1 != 0x1e) && (iVar1 != 0x1d)) && (iVar1 != 0x17)) {
      param_1[0x370] = param_1[0x370] | 0x80000;
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
                    /* WARNING: Could not recover jumptable at 0x0056b770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 0056B7F0  FUN_0056b7f0  size=558  [callgraph]
void __thiscall
FUN_0056b7f0(int param_1,short *param_2,undefined4 *param_3,undefined4 *param_4,undefined4 param_5,
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
  psVar7 = (short *)(param_1 + 0x1640);
  while ((*(int *)(psVar7 + 8) != 0 || (*psVar7 != 0))) {
    uVar2 = uVar2 + 1;
    psVar7 = psVar7 + 10;
    if (10 < uVar2) {
      return;
    }
  }
  puVar1 = (undefined2 *)(param_1 + 0x1640 + uVar2 * 0x14);
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
      if ((*(int *)(param_1 + 0x188c) == 0) && (param_6 != 0)) {
        FUN_00e02630(*(undefined4 *)(param_1 + 0x4f0),0xd,iVar3 + 0x10);
        *(undefined4 *)(param_1 + 0x188c) = 1;
      }
      if (**(char **)(param_2 + 4) != '\0') {
        FUN_00ac94e0(*(char **)(param_2 + 4));
      }
    }
  }
  return;
}

// 0056BA20  FUN_0056ba20  size=703  [callgraph]
void __thiscall FUN_0056ba20(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

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
  
  uVar4 = *(uint *)(param_1 + 0x174c);
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
      *(char *)(param_1 + 0x1748) = *(char *)(param_1 + 0x1748) + '\x01';
      local_104 = (short *)(&DAT_016417f4 + iVar5 * 0xc);
      *(uint *)(param_1 + 0x174c) = *(uint *)(param_1 + 0x174c) | 1 << ((byte)iVar5 & 0x1f);
      uVar4 = 0;
      psVar9 = (short *)(param_1 + 0x1640);
      while ((*(int *)(psVar9 + 8) != 0 || (*psVar9 != 0))) {
        uVar4 = uVar4 + 1;
        psVar9 = psVar9 + 10;
        if (10 < uVar4) {
          return;
        }
      }
      puVar1 = (undefined2 *)(param_1 + 0x1640 + uVar4 * 0x14);
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
          if (*(int *)(param_1 + 0x188c) == 0) {
            FUN_00e02630(*(undefined4 *)(param_1 + 0x4f0),0xd,iVar5 + 0x10);
            *(undefined4 *)(param_1 + 0x188c) = 1;
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

// 0056BCE0  FUN_0056bce0  size=703  [callgraph]
void __thiscall FUN_0056bce0(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

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
  
  uVar4 = *(uint *)(param_1 + 0x1750);
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
      *(char *)(param_1 + 0x1749) = *(char *)(param_1 + 0x1749) + '\x01';
      local_104 = (short *)(&DAT_01641824 + iVar5 * 0xc);
      *(uint *)(param_1 + 0x1750) = *(uint *)(param_1 + 0x1750) | 1 << ((byte)iVar5 & 0x1f);
      uVar4 = 0;
      psVar9 = (short *)(param_1 + 0x1640);
      while ((*(int *)(psVar9 + 8) != 0 || (*psVar9 != 0))) {
        uVar4 = uVar4 + 1;
        psVar9 = psVar9 + 10;
        if (10 < uVar4) {
          return;
        }
      }
      puVar1 = (undefined2 *)(param_1 + 0x1640 + uVar4 * 0x14);
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
          if (*(int *)(param_1 + 0x188c) == 0) {
            FUN_00e02630(*(undefined4 *)(param_1 + 0x4f0),0xd,iVar5 + 0x10);
            *(undefined4 *)(param_1 + 0x188c) = 1;
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

// 0056BFA0  FUN_0056bfa0  size=682  [callgraph]
void __thiscall FUN_0056bfa0(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

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
  
  uVar4 = *(uint *)(param_1 + 0x1754);
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
      *(char *)(param_1 + 0x174a) = *(char *)(param_1 + 0x174a) + '\x01';
      local_104 = (short *)(&DAT_01641854 + iVar5 * 0xc);
      *(uint *)(param_1 + 0x1754) = *(uint *)(param_1 + 0x1754) | 1 << ((byte)iVar5 & 0x1f);
      uVar4 = 0;
      psVar9 = (short *)(param_1 + 0x1640);
      while ((*(int *)(psVar9 + 8) != 0 || (*psVar9 != 0))) {
        uVar4 = uVar4 + 1;
        psVar9 = psVar9 + 10;
        if (10 < uVar4) {
          return;
        }
      }
      puVar1 = (undefined2 *)(param_1 + 0x1640 + uVar4 * 0x14);
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
          if (*(int *)(param_1 + 0x188c) == 0) {
            FUN_00e02630(*(undefined4 *)(param_1 + 0x4f0),0xd,iVar5 + 0x10);
            *(undefined4 *)(param_1 + 0x188c) = 1;
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

// 0056C250  FUN_0056c250  size=909  [callgraph]
void __thiscall FUN_0056c250(int param_1,float param_2)

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
  cVar1 = *(char *)(param_1 + 0x1748);
  while ((cVar1 < '\x04' && (*(float *)(param_1 + 0x171c + cVar1 * 4) <= param_2))) {
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
    FUN_0056ba20(&local_20,&local_30,0x437a0000);
    cVar1 = *(char *)(param_1 + 0x1748);
  }
  cVar1 = *(char *)(param_1 + 0x1749);
  while ((cVar1 < '\x04' && (*(float *)(param_1 + 0x172c + cVar1 * 4) <= param_2))) {
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
    FUN_0056bce0(&local_30,&local_20,0x437a0000);
    cVar1 = *(char *)(param_1 + 0x1749);
  }
  cVar1 = *(char *)(param_1 + 0x174a);
  while ((cVar1 < '\x03' && (*(float *)(param_1 + 0x173c + cVar1 * 4) <= param_2))) {
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
    FUN_0056bfa0(&local_30,&local_20,0x437a0000);
    cVar1 = *(char *)(param_1 + 0x174a);
  }
  return;
}

// 0056C5E0  FUN_0056c5e0  size=148  [callgraph]
void __fastcall FUN_0056c5e0(int param_1)

{
  short sVar1;
  int iVar2;
  undefined1 *puVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  
  FUN_0056c250(0x3f800000);
  piVar6 = (int *)(param_1 + 0x164c);
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

// 0056C680  FUN_0056c680  size=870  [callgraph]
void __fastcall FUN_0056c680(int param_1)

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
  puVar1 = &DAT_016417f4;
  do {
    if ((uVar2 & *(uint *)(param_1 + 0x174c)) == 0) {
      *(char *)(param_1 + 0x1748) = *(char *)(param_1 + 0x1748) + '\x01';
      *(uint *)(param_1 + 0x174c) = *(uint *)(param_1 + 0x174c) | uVar2;
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
      FUN_0056b7f0(puVar1,&local_20,&local_30,0x437a0000,0);
    }
    puVar1 = puVar1 + 0xc;
    uVar2 = uVar2 << 1 | (uint)((int)uVar2 < 0);
  } while ((int)puVar1 < 0x1641824);
  uVar2 = 1;
  puVar1 = &DAT_01641824;
  do {
    if ((uVar2 & *(uint *)(param_1 + 0x1750)) == 0) {
      *(char *)(param_1 + 0x1749) = *(char *)(param_1 + 0x1749) + '\x01';
      *(uint *)(param_1 + 0x1750) = *(uint *)(param_1 + 0x1750) | uVar2;
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
      FUN_0056b7f0(puVar1,&local_30,&local_20,0x437a0000,0);
    }
    puVar1 = puVar1 + 0xc;
    uVar2 = uVar2 << 1 | (uint)((int)uVar2 < 0);
  } while ((int)puVar1 < 0x1641854);
  uVar2 = 1;
  puVar1 = &DAT_01641854;
  do {
    if ((uVar2 & *(uint *)(param_1 + 0x1754)) == 0) {
      *(char *)(param_1 + 0x174a) = *(char *)(param_1 + 0x174a) + '\x01';
      *(uint *)(param_1 + 0x1754) = *(uint *)(param_1 + 0x1754) | uVar2;
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
      FUN_0056b7f0(puVar1,&local_30,&local_20,0x437a0000,0);
    }
    puVar1 = puVar1 + 0xc;
    uVar2 = uVar2 << 1 | (uint)((int)uVar2 < 0);
  } while ((int)puVar1 < 0x1641878);
  return;
}

// 0056C9F0  FUN_0056c9f0  size=45  [callgraph]
void __fastcall FUN_0056c9f0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)(param_1 + 0x1650);
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

// 0056D590  Em0220::vf44  size=309  [class]
void __fastcall Em0220::vf44(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4a0) != 2) {
    FUN_0056c9f0();
    (**(code **)(*(int *)(param_1 + 0xe70) + 4))();
    FUN_00a5dc60();
    FUN_00a5dc60();
    FUN_00c57120(*(undefined4 *)(param_1 + 0x4f0));
    FUN_00c4d000(*(undefined4 *)(param_1 + 0x4f0));
    RayCastManager::getWork(param_1 + 0x1310);
    RayCastManager::getWork(param_1 + 0x1314);
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

// 0056D6D0  Em0220::vf48  size=482  [class]
void __fastcall Em0220::vf48(int param_1)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  undefined *puVar4;
  
  BehaviorEmBase::vf48();
  *(undefined4 *)(param_1 + 0x188c) = 0;
  if (((*(int *)(param_1 + 0x4a0) == 0) && ((*(byte *)(param_1 + 0xb00) & 2) != 0)) &&
     (*(int *)(param_1 + 0x4e4) == 0)) {
    DAT_01dc08e4 = *(undefined4 *)(param_1 + 0x870);
    DAT_01dc08e8 = *(undefined4 *)(param_1 + 0x874);
    DAT_01dc08ec = 1;
    FUN_00cad2a0();
  }
  FUN_00565e60();
  *(float *)(param_1 + 0x1544) = *(float *)(param_1 + 0x1544) - *(float *)(param_1 + 0x910);
  *(float *)(param_1 + 0x17a8) = *(float *)(param_1 + 0x17a8) - *(float *)(param_1 + 0x910);
  if ((*(uint *)(param_1 + 0xdc0) & 0x80000) != 0) {
    if ((*(uint *)(param_1 + 0xdc0) & 0x600000) == 0) {
      iVar3 = FUN_00a81330();
      if (iVar3 != 0) goto LAB_0056d788;
    }
    *(float *)(param_1 + 0x18c0) = *(float *)(param_1 + 0x18c0) - *(float *)(param_1 + 0x910);
  }
LAB_0056d788:
  *(float *)(param_1 + 0x1874) = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0x1874);
  if (*(int *)(param_1 + 0x1280) == 0) {
    *(undefined4 *)(param_1 + 0x1874) = 0;
  }
  iVar3 = FUN_00ac48f0(0);
  if (iVar3 == 0) {
    *(uint *)(param_1 + 0xdc0) = *(uint *)(param_1 + 0xdc0) & 0xfffdffff;
  }
  else {
    *(uint *)(param_1 + 0xdc0) = *(uint *)(param_1 + 0xdc0) | 0x20000;
  }
  if ((*(uint *)(param_1 + 0xdc0) & 0x20000) == 0) {
    fVar2 = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0x19b8);
  }
  else {
    fVar2 = -1.0;
  }
  *(float *)(param_1 + 0x19b8) = fVar2;
  *(float *)(param_1 + 0x19e0) = *(float *)(param_1 + 0x19e0) - *(float *)(param_1 + 0x910);
  *(uint *)(param_1 + 0xdc0) = *(uint *)(param_1 + 0xdc0) & 0xdfffffff;
  piVar1 = *(int **)(param_1 + 0xa84);
  if (piVar1 != (int *)0x0) {
    puVar4 = &DAT_01be9db8;
    (**(code **)(*piVar1 + 4))(&DAT_01be9db8);
    iVar3 = FUN_00dd6d70(puVar4);
    if ((iVar3 != 0) &&
       (fVar2 = (float)piVar1[0x8c9] - *(float *)(param_1 + 0x44),
       *(float *)(param_1 + 0x18fc) = fVar2, 1.25 < fVar2)) {
      *(uint *)(param_1 + 0xdc0) = *(uint *)(param_1 + 0xdc0) | 0x20000000;
    }
  }
  if ((*(uint *)(param_1 + 0xdc0) & 0x20000000) == 0) {
    fVar2 = *(float *)(param_1 + 0x1900) - *(float *)(param_1 + 0x910);
    if (fVar2 < 0.0) goto LAB_0056d8a2;
  }
  else {
    fVar2 = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0x1900);
    if (0.0 <= fVar2) {
LAB_0056d8a2:
      *(float *)(param_1 + 0x1900) = fVar2;
      FUN_0055fc20();
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x1900) = 0;
  FUN_0055fc20();
  return;
}

// 0056D8C0  FUN_0056d8c0  size=469  [between]
void __fastcall FUN_0056d8c0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int local_8;
  int local_4;
  
  iVar7 = 0;
  if (*(int *)(param_1 + 0x1310) != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x1190 + *(int *)(param_1 + 0x1380) * 0x30);
    local_8 = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    iVar4 = FUN_00907640((int *)(param_1 + 0x1310),&local_8,0);
    if (((iVar4 != 0) && (*puVar1 = 1, local_8 != 0)) && (0 < *(int *)(local_8 + 0x14))) {
      FUN_0112bcf0();
      puVar2 = *(undefined4 **)(local_8 + 0x10);
      puVar1[4] = *puVar2;
      puVar1[5] = puVar2[1];
      puVar1[6] = puVar2[2];
      puVar1[7] = puVar2[3];
      puVar1[8] = puVar2[4];
      puVar1[9] = puVar2[5];
      puVar1[10] = puVar2[6];
      puVar1[0xb] = puVar2[7];
      iVar4 = puVar2[10];
      if ((*(char *)(iVar4 + 0x18) == '\x01') &&
         (local_4 = *(char *)(iVar4 + 0x10) + iVar4, local_4 != 0)) {
        uVar5 = FUN_009182b0(local_4);
        puVar1[1] = uVar5;
        iVar7 = FUN_008f7780(local_4);
        iVar4 = FUN_0055cda0(iVar7);
        if (iVar4 != 0) {
          puVar1[2] = (uint)(*(int *)(iVar4 + 0x884) != 0);
        }
      }
      if (((*(int *)(param_1 + 0x1380) == 5) || (*(int *)(param_1 + 0x1380) == 6)) &&
         ((iVar7 != 0 ||
          ((iVar7 = FUN_00445cc0(puVar2[10]), iVar7 != 0 &&
           (iVar7 = FUN_008f7780(iVar7), iVar7 != 0)))))) {
        iVar7 = FUN_009f8b40();
        iVar4 = FUN_009f8b40();
        if (iVar4 == iVar7) {
          *puVar1 = 0;
          puVar1[1] = 0;
          puVar1[2] = 0;
        }
      }
    }
    uVar6 = *(int *)(param_1 + 0x1380) + 1U & 0x80000007;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xfffffff8) + 1;
    }
    *(uint *)(param_1 + 0x1380) = uVar6;
  }
  FUN_0055e2b0();
  if (*(int *)(param_1 + 0x1280) == 0) {
    *(uint *)(param_1 + 0xd44) = *(uint *)(param_1 + 0xd44) | 0x2000000;
  }
  else {
    *(uint *)(param_1 + 0xd44) = *(uint *)(param_1 + 0xd44) & 0xfdffffff;
  }
  if (*(int *)(param_1 + 0x1280) == 0) {
    fVar3 = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0x18f0);
    if (0.0 <= fVar3) {
LAB_0056da87:
      *(float *)(param_1 + 0x18f0) = fVar3;
      return;
    }
  }
  else {
    fVar3 = *(float *)(param_1 + 0x18f0) - *(float *)(param_1 + 0x910);
    if (fVar3 < 0.0) goto LAB_0056da87;
  }
  *(undefined4 *)(param_1 + 0x18f0) = 0;
  return;
}

// 0056DAA0  FUN_0056daa0  size=734  [between]
void __fastcall FUN_0056daa0(int param_1)

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
    if (*(int *)(param_1 + 0x1314) != 0) {
      RayCastManager::getWork(param_1 + 0x1314);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x1320) == 0) {
    if (*(int *)(param_1 + 0x1314) != 0) {
      local_54 = 0;
      iVar4 = FUN_009075e0(param_1 + 0x1314,&local_54,&local_40,&local_30);
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
          *(float *)(param_1 + 0x1330) = local_20;
          *(float *)(param_1 + 0x1334) = fStack_1c;
          *(float *)(param_1 + 0x1338) = fStack_18;
          *(float *)(param_1 + 0x133c) = fStack_14;
          *(undefined4 *)(param_1 + 0x1340) = *puVar2;
          *(undefined4 *)(param_1 + 0x1344) = puVar2[1];
          *(undefined4 *)(param_1 + 0x1348) = puVar2[2];
          *(undefined4 *)(param_1 + 0x134c) = puVar2[3];
          iVar4 = *(int *)(param_1 + 0xa84);
          local_50 = *(float *)(iVar4 + 0x40) - *(float *)(param_1 + 0x1330);
          local_48 = *(float *)(iVar4 + 0x48) - *(float *)(param_1 + 0x1338);
          local_44 = *(float *)(iVar4 + 0x4c) - *(float *)(param_1 + 0x133c);
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
          if (0.7 <= *(float *)(param_1 + 0x1348) * local_48 +
                     local_50 * *(float *)(param_1 + 0x1340) +
                     *(float *)(param_1 + 0x1344) * local_4c) {
            *(undefined4 *)(param_1 + 0x1374) = 0x41f00000;
            *(undefined4 *)(param_1 + 0x1320) = 1;
            RayCastManager::getWork(param_1 + 0x1314);
          }
        }
      }
    }
    FUN_0055e6c0();
  }
  else {
    fVar1 = *(float *)(param_1 + 0x1374) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x1374) = fVar1;
    if (fVar1 <= 0.0) {
      *(undefined4 *)(param_1 + 0x1320) = 0;
      *(undefined4 *)(param_1 + 0x1324) = 0;
      return;
    }
  }
  return;
}

// 0056DD80  FUN_0056dd80  size=86  [between]
void __fastcall FUN_0056dd80(int param_1)

{
  int iVar1;
  
  if (((*(int *)(param_1 + 0x4a0) != 0) || ((*(byte *)(param_1 + 0xb00) & 2) == 0)) &&
     ((*(int *)(param_1 + 0x12e0) != 0 || (*(float *)(param_1 + 0x18f0) < -15.0)))) {
    iVar1 = FUN_00aa4a90();
    if (iVar1 != 0) {
      FUN_0055f9e0(0x1000f);
      return;
    }
  }
  FUN_0055f9e0(0x10003);
  return;
}

// 0056DDE0  Em0220::vf34C  size=182  [class]
void __fastcall Em0220::vf34C(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1[0x67a] == 0) {
    (**(code **)(*param_1 + 0x1f8))(0);
    (**(code **)(*param_1 + 0x1d4))(0);
    (**(code **)(*param_1 + 0x314))();
    iVar1 = param_1[0x1d9];
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x104) != 0)) {
      *(undefined4 *)(iVar1 + 0x104) = 0;
    }
    param_1[0x370] = param_1[0x370] & 0xffffffbf;
    uVar2 = 0x10000;
    if (param_1[0x128] == 1) {
      uVar2 = 0x10001;
    }
    iVar1 = FUN_005602d0();
    if (iVar1 == 0) {
      if (param_1[0x139] == 0) {
        if ((param_1[0x370] & 0x80000U) != 0) {
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
    param_1[0x370] = param_1[0x370] & 0xf7ffffff;
    FUN_0055f9e0(uVar2);
  }
  return;
}

// 0056DEA0  FUN_0056dea0  size=316  [between]
void __thiscall FUN_0056dea0(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  if ((param_1[0x294] != 0) || (param_2 != 0)) {
    FUN_00ac8e10(1);
    if ((*(byte *)((int)param_1 + 0xdc2) & 1) != 0) {
      FUN_00a8c9b0(0,2,0x3f800000,0);
      param_1[0x370] = param_1[0x370] & 0xfffeffff;
    }
    if ((param_1[0x370] & 0x8000U) == 0) {
      FUN_00e02240(param_1[0x13c],3);
      param_1[0x370] = param_1[0x370] | 0x8000;
    }
    (**(code **)(*param_1 + 0x20))();
    if (param_1[0x66c] != 0) {
      param_1[0x66c] = 0;
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
    FUN_0055f9e0(0x60002);
    if (param_1[0x1d9] != 0) {
      FUN_008e3c10();
    }
    iVar1 = FUN_00e5e0c0("em0220_se_dmg_explosion",param_1,0xffffffff,0);
    param_1[0x66f] = iVar1;
    FUN_00940450(param_1[0x20f]);
    if ((param_1[0x128] != 0) || ((*(byte *)(param_1 + 0x2c0) & 2) == 0)) {
      (**(code **)(*param_1 + 0x364))(0xffffffff);
    }
  }
  return;
}

// 0056DFE0  FUN_0056dfe0  size=150  [between]
void __fastcall FUN_0056dfe0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  
  if (((((param_1[0x186] & 0xffff0000U) != 0xf0000) && (param_1[0x187] != 0x20003)) &&
      ((*(byte *)(param_1 + 0x370) & 2) == 0)) && ((DAT_01bea060 & 0x2000000) == 0)) {
    iVar2 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar2 != 0) {
      iVar2 = FUN_0055fbd0();
      if (iVar2 != 0) {
        pcVar1 = *(code **)(*param_1 + 0x314);
        param_1[0x54d] = 0;
        (*pcVar1)();
        iVar2 = param_1[0x1d9];
        if ((iVar2 != 0) && (*(int *)(iVar2 + 0x104) != 0)) {
          *(undefined4 *)(iVar2 + 0x104) = 0;
        }
        FUN_0055f9e0(0xf0000);
      }
    }
  }
  return;
}

// 0056E080  FUN_0056e080  size=87  [between]
undefined4 __fastcall FUN_0056e080(int param_1)

{
  if ((*(int *)(param_1 + 0x4a0) == 0) &&
     (((*(byte *)(param_1 + 0xb00) & 2) != 0 ||
      ((4 < *(byte *)(param_1 + 0xdae) &&
       ((*(int *)(param_1 + 0xdb0) == 2 || (*(int *)(param_1 + 0xdb0) == -1)))))))) {
    FUN_0055f9e0(0xf0005);
    FUN_00c27260(*(undefined4 *)(param_1 + 0x19b4));
    return 1;
  }
  return 0;
}

// 0056E0E0  FUN_0056e0e0  size=522  [between]
/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_0056e0e0(int param_1)

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
  
  *(int *)(param_1 + 0x13e0) = *(int *)(param_1 + 0x13e0) + 1;
  fStack_394 = 5.60519e-45;
  puStack_398 = (undefined4 *)0x56e0fd;
  iVar1 = FUN_00a12210();
  if (iVar1 != 0) {
    local_360 = 0;
    puStack_39c = &local_360;
    local_35c[0] = 0.0;
    local_35c[1] = 1.4;
    pfStack_3a0 = (float *)0x56e12a;
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
    local_35c[7] = *(float *)(param_1 + 0x1168);
    uStack_338 = *(undefined4 *)(param_1 + 0x116c);
    uStack_2b8 = uStack_2b8 | 0x10000000;
    uStack_334 = *(undefined1 *)(param_1 + 0x1174);
    uStack_33c = *(undefined4 *)(param_1 + 0x1170);
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

// 0056E2F0  FUN_0056e2f0  size=814  [between]
void __thiscall FUN_0056e2f0(int *param_1,int param_2)

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
      puVar12 = &DAT_01be9db8;
      (**(code **)(*piVar4 + 4))(&DAT_01be9db8);
      iVar6 = FUN_00dd6d70(puVar12);
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
    auStack_33c[1] = 0x30372;
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
    iStack_320 = param_1[0x45f];
    iStack_328 = param_1[0x45e];
    uStack_31c = (undefined1)param_1[0x461];
    iStack_324 = param_1[0x460];
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

// 0056E620  FUN_0056e620  size=710  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0056e620(int param_1)

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
  
  if ((_DAT_01b34fc0 & 1) == 0) {
    _DAT_01b34fc0 = _DAT_01b34fc0 | 1;
    _DAT_01b34fb0 = 0;
    _DAT_01b34fb4 = 0;
    _DAT_01b34fb8 = 0x40066666;
  }
  iVar5 = FUN_00a81330();
  if (((iVar5 != 0) && (iVar5 = FUN_00a7c8a0(), iVar5 != 0)) &&
     (iVar5 = FUN_00a12210(0), iVar5 != 0)) {
    D3DXVec3TransformNormal(local_370,&DAT_01b34fb0,iVar5 + 0x10);
    fStack_37c = *(float *)(iVar5 + 0x40) + fStack_37c;
    fStack_378 = *(float *)(iVar5 + 0x44) + fStack_378;
    fStack_374 = *(float *)(iVar5 + 0x48) + fStack_374;
    fVar1 = *(float *)(param_1 + 0x1790) - fStack_37c;
    fVar4 = *(float *)(param_1 + 0x1794) - fStack_378;
    fVar3 = *(float *)(param_1 + 0x1798) - fStack_374;
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
    fVar7 = (float10)FUN_00562550();
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
    FUN_005600f0(auStack_32c);
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

// 0056E8F0  FUN_0056e8f0  size=619  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0056e8f0(int param_1)

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
  
  if ((_DAT_01b34fe0 & 1) == 0) {
    _DAT_01b34fe0 = _DAT_01b34fe0 | 1;
    _DAT_01b34fd0 = 0;
    _DAT_01b34fd4 = 0;
    _DAT_01b34fd8 = 0x40066666;
  }
  iVar3 = FUN_00a81330();
  if (((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) &&
     (iVar3 = FUN_00a12210(0), iVar3 != 0)) {
    D3DXVec3TransformNormal(&local_360,&DAT_01b34fd0,iVar3 + 0x10);
    fStack_36c = *(float *)(iVar3 + 0x40) + fStack_36c;
    fStack_368 = *(float *)(iVar3 + 0x44) + fStack_368;
    fStack_364 = *(float *)(iVar3 + 0x48) + fStack_364;
    fVar8 = *(float *)(param_1 + 0x1790) - fStack_36c;
    fVar9 = *(float *)(param_1 + 0x1794) - fStack_368;
    fStack_374 = *(float *)(param_1 + 0x1798) - fStack_364;
    fVar2 = *(float *)(param_1 + 0x179c) - local_360;
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
    FUN_00560190(auStack_32c);
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

// 0056EB60  FUN_0056eb60  size=90  [between]
undefined4 __fastcall FUN_0056eb60(int param_1)

{
  if (((*(float *)(param_1 + 0x1900) <= 15.0) && (-10.0 <= *(float *)(param_1 + 0x18f0))) &&
     (((*(int *)(param_1 + 0x4a0) == 0 && ((*(byte *)(param_1 + 0xb00) & 2) != 0)) ||
      ((4 < *(byte *)(param_1 + 0xdae) &&
       ((*(int *)(param_1 + 0xdb0) == 2 || (*(int *)(param_1 + 0xdb0) == -1)))))))) {
    return 1;
  }
  return 0;
}

// 0056EBC0  FUN_0056ebc0  size=539  [between]
undefined4 __fastcall FUN_0056ebc0(int param_1)

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
  if (((*(int *)(param_1 + 0x4a0) == 0) && ((*(uint *)(param_1 + 0xdc0) & 0x600000) == 0)) &&
     (iVar3 = FUN_00a81330(), iVar3 != 0)) {
    if (*(float *)(param_1 + 0xa90) <= 9.0) {
      FUN_0055f9e0(0x20002);
      return 1;
    }
    if ((*(float *)(param_1 + 0xa90) <= 64.0) && (iVar3 = FUN_0055a010(0x41700000), iVar3 != 0)) {
      FUN_0055f9e0(0x20000);
      return 1;
    }
    if (*(float *)(param_1 + 0xa90) <= 110.25) {
      FUN_0055f9e0(0x20001);
      return 1;
    }
    if (256.0 < *(float *)(param_1 + 0xa90)) {
      return 0;
    }
    iVar3 = FUN_0056eb60();
    if (iVar3 == 0) {
      return 0;
    }
    sVar2 = FUN_00dde2d0(0,100);
    if ((0x41 < sVar2) && (iVar3 = FUN_00a8cab0(), iVar3 != 0x10003)) goto LAB_0056ecf6;
    uVar4 = FUN_00dde2d0(0,100);
    if (((uVar4 & 1) != 0) && (*(int *)(param_1 + 0x4a0) == 0)) goto LAB_0056edc4;
  }
  else {
    if (((256.0 < *(float *)(param_1 + 0xa90)) ||
        (fVar1 = *(float *)(param_1 + 0xa90), NAN(fVar1) || 64.0 < fVar1 == (fVar1 == 64.0))) ||
       (iVar3 = FUN_0056eb60(), iVar3 == 0)) {
      return 0;
    }
    sVar2 = FUN_00dde2d0(0,100);
    if ((0x41 < sVar2) && (iVar3 = FUN_00a8cab0(), iVar3 != 0x10003)) {
LAB_0056ecf6:
      FUN_0055f9e0(0x20008);
      return 1;
    }
    uVar4 = FUN_00dde2d0(0,100);
    if ((((uVar4 & 1) != 0) && (*(int *)(param_1 + 0x4a0) == 0)) &&
       (iVar3 = FUN_0056abb0(), iVar3 != 0)) {
LAB_0056edc4:
      FUN_0055f9e0(0x20005);
      return 1;
    }
  }
  FUN_0055f9e0(0x20006);
  return 1;
}

// 0056EDE0  FUN_0056ede0  size=1106  [between]
void __fastcall FUN_0056ede0(int *param_1)

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
    if ((param_1[0x4e1] == 0x10006) || (param_1[0x4e1] == 0x10007)) {
      FUN_00aa4080(10,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x248] = 0;
      param_1[0x187] = 2;
      FUN_00ac80a0(0x3f800000,0x3f800000);
      return;
    }
    FUN_00aa4080(0xb,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x248] = 0;
    param_1[0x4f8] = 0;
    param_1[0x4fa] = 0;
    sVar5 = FUN_00dde2d0(4,6);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x4f9] = (int)sVar5;
  case 1:
    FUN_0055a580(param_1[0x2a1] + 0x40,0x3dcccccd,0x3d32b8c2);
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
    FUN_0055a580(param_1 + 600,0x3e75c28f,0x3db2b8c2);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (((float)param_1[0x2a4] <= 9.0) &&
       (fVar1 = (float)param_1[0x248], param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]),
       fVar1 - (float)param_1[0x244] <= 0.0)) {
      FUN_0056e0e0();
      param_1[0x248] = 0x41200000;
    }
    bVar4 = false;
    fVar1 = (float)param_1[600] - (float)param_1[0x10];
    fVar1 = ((float)param_1[0x25a] - (float)param_1[0x12]) *
            ((float)param_1[0x25a] - (float)param_1[0x12]) + fVar1 * fVar1;
    if (((param_1[0x464] != 0) && (param_1[0x465] != 0)) &&
       (fVar3 = ((float)param_1[0x12] - (float)param_1[0x46a]) *
                ((float)param_1[0x12] - (float)param_1[0x46a]) +
                ((float)param_1[0x10] - (float)param_1[0x468]) *
                ((float)param_1[0x10] - (float)param_1[0x468]),
       fVar3 < 7.8399997 != (fVar3 == 7.8399997))) {
      bVar4 = true;
    }
    if ((!NAN(fVar1) && fVar1 < 2.25 != (fVar1 == 2.25)) || (bVar4)) {
      if ((param_1[0x4f8] < param_1[0x4f9]) && (param_1[0x4fa] < 3)) {
        param_1[0x4fa] = param_1[0x4fa] + 1;
        FUN_0055f9e0(0x10006);
        return;
      }
      FUN_00aa4080(0xc,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = 4;
      FUN_00ac80a0(0x3f800000,0x3f800000);
    }
    iVar6 = FUN_0055eb60();
    if (iVar6 != 0) {
      FUN_0055f9e0(0x10007);
      return;
    }
    break;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar6 = FUN_00a94ce0(0);
    if (iVar6 != 0) {
      pcVar2 = *(code **)(*param_1 + 0x34c);
      param_1[0x4f8] = 0;
      (*pcVar2)();
    }
  }
  return;
}

// 0056F250  FUN_0056f250  size=258  [between]
void __fastcall FUN_0056f250(int *param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  if (param_1[0x187] == 0) {
    uVar3 = 0x8000000;
    fVar1 = (float)param_1[0x2a4];
    if (!NAN(fVar1) && 64.0 < fVar1 != (fVar1 == 64.0)) {
      uVar3 = 0x8000080;
    }
    FUN_00aa4080(0x75,0,0x3e088889,0x3f800000,uVar3,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x250] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  iVar2 = FUN_00a8c760(0);
  if (iVar2 != 0) {
    FUN_0055a580(param_1[0x2a1] + 0x40,0x3e75c28f,0x3db2b8c2);
  }
  iVar2 = FUN_00a8c760(8);
  if (iVar2 != 0) {
    iVar2 = param_1[0x250];
    param_1[0x250] = iVar2 + 1;
    FUN_0056e2f0(iVar2);
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0056f350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 0056F360  FUN_0056f360  size=1272  [between]
void __fastcall FUN_0056f360(int *param_1)

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
    param_1[0x370] = param_1[0x370] | 0x40;
    uVar14 = 0x3e088889;
    uVar15 = 0xbf800000;
    param_1[0x250] = 0;
    param_1[0x251] = 0;
    if (param_1[0x4e1] == 0x20008) {
      uVar14 = 0x3eaaaaab;
      uVar15 = 0x3f8aaaab;
    }
    FUN_00aa4080(0x6a,0,uVar14,0x3f800000,0x8038000,uVar15,0x3f800000);
    param_1[0x370] = param_1[0x370] | 0x20;
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_0056f409;
  case 1:
LAB_0056f409:
    iVar16 = FUN_00a8c760(0x10);
    if (iVar16 != 0) {
      param_1[0x370] = param_1[0x370] & 0xffffffdf;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar16 = FUN_00a8c760(0);
    if (iVar16 != 0) {
      FUN_0055a580(param_1[0x2a1] + 0x40,0x3e99999a,0x3e567750);
    }
    iVar16 = FUN_00a94ce0(0);
    if (iVar16 != 0) {
      param_1[0x4c9] = 0;
      param_1[0x4dc] = 0;
      param_1[0x4c8] = 0;
      param_1[0x4dd] = 0;
      FUN_008e5c50(0xd);
      param_1[0x370] = param_1[0x370] | 8;
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
    FUN_00559e30((float)param_1[0x244] * 0.5);
    fVar12 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar12 - (float)param_1[0x244]);
    if (((fVar10 - fVar11) * (fVar4 - fVar5) +
         (fVar6 - fVar7) * (fVar13 - fVar1) + (fVar8 - fVar9) * (fVar2 - fVar3) < 0.0) ||
       (fVar12 - (float)param_1[0x244] <= 0.0)) {
      if ((*(byte *)(param_1 + 0x370) & 8) != 0) {
        FUN_008e5c50(7);
        param_1[0x370] = param_1[0x370] & 0xfffffff7;
      }
      iVar16 = FUN_00560a50();
      if (iVar16 != 0) {
        param_1[0x251] = 1;
      }
      iVar16 = FUN_0055ef70(0x41200000);
      if ((iVar16 != 0) && (param_1[0x251] == 0)) {
        FUN_00aa4080(0x6c,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        param_1[0x187] = param_1[0x187] + 1;
        return;
      }
      FUN_00aa4080(0x6d,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    iVar16 = FUN_0055a510();
    if (iVar16 != 0) {
      FUN_0055ede0();
      FUN_0055f9e0(0x20009);
      return;
    }
    break;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar16 = FUN_00a8c760(0);
    if (iVar16 != 0) {
      FUN_0055a580(param_1[0x2a1] + 0x40,0x3e23d70a,0x3d8efa35);
    }
    iVar16 = 0;
    if (param_1[0x251] != 0) {
      iVar16 = FUN_00a8c760(4);
    }
    iVar17 = FUN_00a94ce0(0);
    if ((iVar17 != 0) || (iVar16 != 0)) {
      if ((float)param_1[0x640] <= 15.0) {
        param_1[0x54f] = param_1[0x54f] + 1;
        if (param_1[0x251] != 0) {
          FUN_0055f9e0(0x20003);
          return;
        }
        if (((((*(byte *)(param_1 + 0x370) & 0x10) != 0) && (param_1[0x54f] < param_1[0x550])) &&
            (fVar18 = (float10)FUN_0055a7a0(), fVar18 < (float10)0.7853982)) &&
           ((*(byte *)(param_1 + 0x370) & 1) == 0)) {
          FUN_0055f9e0(0x20008);
          return;
        }
        param_1[0x54f] = 0;
        param_1[0x370] = param_1[0x370] & 0xffffffef;
        if ((((param_1[0x128] == 0) && (iVar16 = FUN_0056abb0(), iVar16 != 0)) &&
            ((fVar18 = (float10)FUN_0055a7a0(), fVar18 < (float10)0.87266463 &&
             ((fVar13 = (float)param_1[0x2a4], !NAN(fVar13) && 49.0 < fVar13 != (fVar13 == 49.0) &&
              (fVar18 = (float10)FUN_00dde300(0,0x3f800000),
              fVar18 < (float10)(float)param_1[0x5dd] != (fVar18 == (float10)(float)param_1[0x5dd]))
              ))))) && (iVar16 = FUN_0056e080(), iVar16 != 0)) {
          return;
        }
      }
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 0056F870  FUN_0056f870  size=304  [between]
void __fastcall FUN_0056f870(int *param_1)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x77,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    (**(code **)(*param_1 + 0x314))();
    iVar2 = param_1[0x1d9];
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x104) != 0)) {
      *(undefined4 *)(iVar2 + 0x104) = 0;
    }
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if ((iVar2 != 0) &&
     (((((param_1[0x128] != 0 || ((param_1[0x370] & 0x600000U) != 0)) ||
        (iVar2 = FUN_00a81330(), iVar2 == 0)) ||
       ((param_1[0x4e1] == 0xf0005 ||
        (fVar3 = (float10)FUN_0055a7a0(), (float10)0.87266463 <= fVar3)))) ||
      ((fVar1 = (float)param_1[0x2a4], NAN(fVar1) || 49.0 < fVar1 == (fVar1 == 49.0) ||
       ((fVar3 = (float10)FUN_00dde300(0,0x3f800000),
        fVar3 < (float10)(float)param_1[0x5dd] == (fVar3 == (float10)(float)param_1[0x5dd]) ||
        (iVar2 = FUN_0056e080(), iVar2 == 0)))))))) {
                    /* WARNING: Could not recover jumptable at 0x0056f99e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  return;
}

// 0056F9A0  FUN_0056f9a0  size=579  [between]
void __fastcall FUN_0056f9a0(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x7f,0,0x3e088889,0x3f800000,0x8038000,0xbf800000,0x3f800000);
    param_1[0x5d7] = param_1[0x5d7] + 1;
    if ((param_1[0x5d6] <= param_1[0x5d7]) && (param_1[0x41a] != 0)) {
      (**(code **)(param_1[0x3f4] + 8))(0,0,0);
    }
    FUN_00c272a0(0x40a00000);
    FUN_0055ad10();
    FUN_0056e620();
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
  FUN_005625d0(param_1 + 0x5e4,1);
  iVar5 = FUN_00a94ce0(0);
  if (iVar5 != 0) {
    if (param_1[0x5d6] <= param_1[0x5d7]) {
      if ((param_1[0x370] & 0x400U) == 0) {
        param_1[0x370] = param_1[0x370] | 0x400;
        param_1[0x5d9] = (int)((float)param_1[0x5d8] * 60.0);
        FUN_0055f9e0(0x10009);
      }
      if (param_1[0x3ee] != 0) {
        (**(code **)(param_1[0x3c8] + 8))(0,0,0);
      }
      param_1[0x5d7] = 0;
      return;
    }
    iVar5 = FUN_00ac4780();
    if ((iVar5 != 4) && (param_1[0x671] <= param_1[0x670])) {
      param_1[0x5ea] = (int)((float)param_1[0x5f1] * 60.0);
      FUN_00560210();
      FUN_00560240(0);
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    FUN_0055f9e0(0x2000b);
  }
  return;
}

// 0056FBF0  FUN_0056fbf0  size=268  [between]
void __fastcall FUN_0056fbf0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    FUN_00aa4080(0x7f,0,0x3eaaaaab,0x3f800000,0x8038000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x175c) = *(int *)(param_1 + 0x175c) + 1;
    if (*(int *)(param_1 + 0x1068) != 0) {
      (**(code **)(*(int *)(param_1 + 0xfd0) + 8))(0,0,0);
    }
    FUN_0055ad10();
    FUN_0056e8f0();
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    if ((*(uint *)(param_1 + 0xdc0) & 0x400) == 0) {
      *(uint *)(param_1 + 0xdc0) = *(uint *)(param_1 + 0xdc0) | 0x400;
      *(float *)(param_1 + 0x1764) = *(float *)(param_1 + 0x1760) * 60.0;
      FUN_0055f9e0(0x10009);
    }
    if (*(int *)(param_1 + 0xfb8) != 0) {
      (**(code **)(*(int *)(param_1 + 0xf20) + 8))(0,0,0);
    }
    *(undefined4 *)(param_1 + 0x175c) = 0;
  }
  return;
}

// 0056FD00  FUN_0056fd00  size=1336  [between]
void __fastcall FUN_0056fd00(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  float10 fVar4;
  undefined *puVar5;
  int iStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  undefined1 local_50 [76];
  
  iVar1 = FUN_00a81330();
  iVar3 = 0;
  if (iVar1 != 0) {
    iVar3 = FUN_00a7c8a0();
  }
  if (param_1[0x187] == 0) {
    FUN_00ac8d40(1);
    iVar1 = FUN_00a81330();
    if (((iVar1 != 0) && (iVar1 = FUN_00a7c8a0(), iVar1 != 0)) &&
       (*(undefined4 **)(iVar1 + 0x370) != (undefined4 *)0x0)) {
      *(uint *)(iVar1 + 0x364) = *(uint *)(iVar1 + 0x364) | 0x400000;
      **(undefined4 **)(iVar1 + 0x370) = 0;
    }
    param_1[0x676] = 1;
    param_1[0x370] = param_1[0x370] | 0x41004;
    if ((int *)param_1[0x2a1] != (int *)0x0) {
      puVar5 = &DAT_01be9db8;
      (**(code **)(*(int *)param_1[0x2a1] + 4))(&DAT_01be9db8);
      iVar1 = FUN_00dd6d70(puVar5);
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
  if (((iVar3 != 0) && (iVar1 = FUN_00ac82f0(), iVar1 == 0)) &&
     ((iVar1 = FUN_00a8c760(0x1c), iVar1 == 0 && (iVar1 = FUN_00a12210(0xf00), iVar1 != 0)))) {
    D3DXMatrixRotationY(local_50,*(undefined4 *)(iVar3 + 0x94));
    D3DXVec3TransformNormal(&stack0xffffff98,iVar1 + 0x50,&fStack_58);
    param_1[0x14] = (int)(fStack_60 + *(float *)(iVar3 + 0x50));
    param_1[0x15] = (int)(*(float *)(iVar3 + 0x54) + fStack_5c);
    param_1[0x16] = (int)(*(float *)(iVar3 + 0x58) + fStack_58);
    param_1[0x17] = (int)(*(float *)(iVar3 + 0x5c) + fStack_54);
    fVar4 = (float10)FUN_00ddba30(*(float *)(iVar1 + 0x94) + *(float *)(iVar3 + 0x94));
    param_1[0x25] = (int)(float)fVar4;
  }
  if (((param_1[0x128] != 0) || ((*(byte *)(param_1 + 0x2c0) & 2) == 0)) &&
     (iVar1 = FUN_00a8c760(0x1f), iVar1 != 0)) {
    FUN_0055c380(0xffffffff);
    FUN_0056c680();
    FUN_0055e200();
    FUN_00c52700(param_1[0x641],1);
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
      FUN_0056c5e0();
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
        if (param_1[0x294] != 0) {
          FUN_00ac8e10(1);
          if ((*(byte *)((int)param_1 + 0xdc2) & 1) != 0) {
            FUN_00a8c9b0(0,2,0x3f800000,0);
            param_1[0x370] = param_1[0x370] & 0xfffeffff;
          }
          if ((param_1[0x370] & 0x8000U) == 0) {
            FUN_00e02240(param_1[0x13c],3);
            param_1[0x370] = param_1[0x370] | 0x8000;
          }
          (**(code **)(*param_1 + 0x20))();
          if (param_1[0x66c] != 0) {
            param_1[0x66c] = 0;
            FUN_00a8c9b0(0,0x197,0,0);
          }
          iVar1 = FUN_00a81330();
          if ((iVar1 != 0) && (piVar2 = (int *)FUN_00a7c8a0(), piVar2 != (int *)0x0)) {
            (**(code **)(*piVar2 + 0x20))();
          }
          param_1[0x1af] = 1;
          FUN_0055f9e0(0x60002);
          if (param_1[0x1d9] != 0) {
            FUN_008e3c10();
          }
          iVar1 = FUN_00e5e0c0("em0220_se_dmg_explosion",param_1,0xffffffff,0);
          param_1[0x66f] = iVar1;
          FUN_00940450(param_1[0x20f]);
          if ((param_1[0x128] != 0) || ((*(byte *)(param_1 + 0x2c0) & 2) == 0)) {
            (**(code **)(*param_1 + 0x364))(0xffffffff);
          }
        }
      }
      (**(code **)(*param_1 + 0x344))(7,0,1);
      FUN_00c27f40(2,0x45e10000);
      param_1[0x188] = param_1[0x188] + 1;
      return;
    }
  }
  return;
}

// 00570250  Em0220::vf19C  size=179  [class]
void __thiscall Em0220::vf19C(int *param_1,int param_2,undefined4 param_3)

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

// 00570310  FUN_00570310  size=189  [between]
undefined4 __thiscall FUN_00570310(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  if (((*(int *)(param_1 + 0x4a0) == 0) && ((*(byte *)(param_1 + 0xb00) & 2) != 0)) &&
     ((*(uint *)(param_1 + 0xdc0) & 0x40000) == 0)) {
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
      goto LAB_005703a3;
    }
  }
  else if (uVar1 == 0) goto LAB_005703a3;
  if (*(int *)(param_2 + 0x94) == 0) {
    return 0;
  }
  FUN_0055c380(0xffffffff);
  FUN_0056c680();
  FUN_0055e200();
LAB_005703a3:
  if ((*(int *)(param_2 + 0x94) != 0) && (iVar2 = FUN_00ac8cd0(param_2), iVar2 != 0)) {
    FUN_00ac8d00(param_1,param_2,0);
    return 1;
  }
  return 0;
}

// 005703D0  FUN_005703d0  size=1935  [between]
undefined4 __thiscall FUN_005703d0(int *param_1,int *param_2,undefined4 *param_3)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  bool bVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  int *local_8;
  
  piVar6 = param_2;
  if ((param_1[0x370] & 0x80000U) != 0) {
    uVar7 = FUN_0056a500(param_2,param_3);
    return uVar7;
  }
  iVar9 = -1;
  iVar8 = FUN_00a81330();
  local_8 = (int *)0x0;
  if (iVar8 != 0) {
    local_8 = (int *)FUN_00a7c8a0();
  }
  bVar5 = false;
  iVar8 = (**(code **)(*param_1 + 0x1d8))();
  if (((((*(byte *)((int)param_2 + 0x8e) & 1) != 0) || (*param_2 == 0x4b)) || (*param_2 == 0x4c)) &&
     (0 < param_1[0x39b])) {
    bVar5 = true;
  }
  bVar10 = *param_2 == 0x92;
  param_2 = (int *)iVar8;
  if (bVar10) {
    param_2 = (int *)0x1;
    FUN_0056c250(0x3f800000);
    FUN_0056ab20();
  }
  if ((((param_1[0x128] != 0) || ((*(byte *)(param_1 + 0x2c0) & 2) == 0)) &&
      ((iVar8 = FUN_00a8eea0(), 0 < iVar8 &&
       ((param_1[0x139] == 0 && (param_1[0x666] <= param_1[0x667])))))) &&
     ((param_1[0x370] & 0x80000U) == 0)) {
    *param_3 = 1;
    if (((*(byte *)(param_1 + 0x370) & 2) != 0) && (param_1[0x186] == 0x3000a)) {
      return 1;
    }
    param_1[0x370] = param_1[0x370] | 2;
    param_1[0x4f3] = param_1[0x4f6];
    param_1[0x4f2] = (int)((float)param_1[0x4f5] * 60.0);
    param_1[0x4f4] = 0;
    param_1[0x667] = 0;
    FUN_0055f9e0(0x3000a);
    return 1;
  }
  iVar8 = FUN_005602d0();
  if ((iVar8 != 0) && (param_1[0x668] == 0)) {
    param_1[0x668] = 1;
    FUN_00e5e1b0("bgm_BladeWolf_Finish");
  }
  if (((*(byte *)(piVar6 + 0x23) & 1) == 0) || (0.0 < (float)param_1[0x678])) {
    if ((*piVar6 != 0x4f) || (param_1[0x139] != 0)) {
      if (((((*(byte *)(param_1 + 0x370) & 0x20) != 0) ||
           (iVar8 = (**(code **)(*param_1 + 0x1fc))(), iVar8 != 0)) || (bVar10)) ||
         (bVar3 = false, bVar5)) {
        bVar3 = true;
      }
      iVar8 = FUN_00a8c760(5);
      if (iVar8 == 0) {
        iVar8 = FUN_00a8c760(6);
        bVar4 = 0;
        if (iVar8 != 0) goto LAB_00570722;
      }
      else {
LAB_00570722:
        bVar4 = 1;
      }
      if ((((piVar6[0x24] & 0x18000000U) == 0) && (*piVar6 != 0x4b)) && (*piVar6 != 0x4c)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (((((*(byte *)(param_1 + 0x370) & 0x20) == 0) && (iVar8 = FUN_00a8c760(0x32), iVar8 == 0))
          && ((((*(byte *)(param_1 + 0x370) & 4) != 0 || (iVar8 = FUN_00a8c760(0x10), iVar8 != 0))
              && (!bVar10)))) ||
         ((((iVar8 = FUN_005602d0(), iVar8 != 0 || (param_1[0x139] != 0)) ||
           (iVar8 = FUN_0055fbd0(), iVar8 != 0)) || (*piVar6 == 0x59)))) {
        iVar9 = -1;
      }
      else if ((piVar6[0x23] & 0x20000U) == 0) {
        if (bVar3) {
          iVar8 = FUN_0055b570(piVar6);
          if (iVar8 == 0) {
            iVar8 = (**(code **)(*param_1 + 0x1d8))();
            if ((iVar8 == 0) && (bVar2)) {
              iVar8 = FUN_00a8cab0();
              if ((iVar8 != 0x30007) && (iVar8 = FUN_00a8cab0(), iVar8 != 0x30008)) {
                iVar9 = 0x30008;
              }
              param_2 = (int *)0x1;
            }
            else {
              uVar1 = piVar6[0x24];
              if ((uVar1 & 0x800000) == 0) {
                if ((uVar1 & 0x1000000) == 0) {
                  if ((*(byte *)((int)piVar6 + 0x11) < 10) && ((uVar1 & 0x2000000) == 0))
                  goto LAB_005708b9;
                  iVar9 = 0x30001;
                  param_2 = (int *)0x1;
                }
                else {
                  iVar9 = 0x30006;
                  param_2 = (int *)0x1;
                }
              }
              else if ((param_1[0x370] & 0x10000000U) == 0) {
                iVar9 = 0x30004;
                param_2 = (int *)0x1;
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
LAB_005708b9:
          iVar8 = FUN_0055d5e0();
          if ((iVar8 != 0) ||
             ((((iVar8 = FUN_00566010(), iVar8 != 0 || (6 < *(byte *)((int)piVar6 + 0x11))) ||
               (iVar8 = (**(code **)(*param_1 + 0x1d8))(), iVar8 != 0)) || (bVar10)))) {
            if (((param_1[0x370] & 2U) == 0) && ((param_1[0x370] & 0x400U) == 0)) {
              iVar9 = (**(code **)(*param_1 + 0x1d8))();
              iVar9 = (-(uint)(iVar9 != 0) & 5) + 0x30000;
              iVar8 = (**(code **)(*param_1 + 0x1d8))();
              if ((iVar8 != 0) &&
                 (((bVar3 && (local_8 != (int *)0x0)) &&
                  (iVar8 = (**(code **)(*local_8 + 0x1d8))(), iVar8 == 0)))) {
                iVar9 = 0x30001;
              }
            }
            param_2 = (int *)0x1;
          }
        }
      }
      else {
        iVar9 = bVar4 + 0x3000b;
      }
LAB_00570954:
      iVar8 = FUN_005602d0();
      if ((((iVar8 != 0) && (iVar8 = FUN_00566010(), iVar8 != 0)) && (param_1[0x139] == 0)) &&
         (param_1[0x676] == 0)) {
        param_1[0x4e8] = 0;
        param_1[0x4e9] = 0;
        iVar9 = 0x30001;
      }
      iVar8 = FUN_00a8eea0();
      if (((iVar8 < 1) && (param_1[0x139] == 0)) && (param_1[0x676] == 0)) {
        if ((iVar9 == 0x30000) || (iVar9 == -1)) {
LAB_005709ef:
          FUN_0055f9e0(0x60000);
          *param_3 = 1;
          return 1;
        }
        iVar8 = FUN_0055ceb0();
        if ((iVar8 != 0) && (iVar9 == 0x30001)) goto LAB_005709ca;
      }
      if (iVar9 == 0x30000) {
        iVar8 = FUN_005602d0();
        if (iVar8 == 0) {
          if ((param_1[0x370] & 2U) == 0) {
            if ((param_1[0x370] & 0x400U) != 0) {
              iVar9 = 0x10009;
            }
          }
          else {
            iVar9 = 0x30009;
          }
          goto LAB_00570aee;
        }
      }
      else {
        if (iVar9 != -1) {
          if ((*(byte *)(param_1 + 0x370) & 2) != 0) {
            param_1[0x370] = param_1[0x370] & 0xfffffffd;
            param_1[0x4f2] = 0;
            param_1[0x4f4] = 0;
          }
          if ((param_1[0x370] & 0x400U) != 0) {
            param_1[0x370] = param_1[0x370] & 0xfffffbff;
            param_1[0x5d9] = 0;
          }
          goto LAB_00570aee;
        }
        if ((((param_1[0x139] != 0) || (iVar9 = FUN_005602d0(), iVar9 == 0)) ||
            (param_1[0x186] == 0x60003)) ||
           (((param_1[0x186] == 0x60004 || (iVar9 = FUN_00416910(6), iVar9 != 0)) ||
            (iVar9 = (**(code **)(*param_1 + 0x1d8))(), iVar9 != 0)))) {
          FUN_00565dd0();
          *param_3 = 0x401;
          return 0;
        }
      }
      iVar9 = 0x60003;
LAB_00570aee:
      FUN_0055f9e0(iVar9);
      *param_3 = 1;
      if (param_2 != (int *)0x0) {
        if (bVar10) {
          *param_3 = 0x21;
          return 1;
        }
        if (bVar5) {
          *param_3 = 0x41;
          return 1;
        }
      }
      return 1;
    }
    iVar8 = FUN_005602d0();
    if (iVar8 == 0) {
      iVar8 = FUN_00a8eea0();
      if ((iVar8 < 1) && (param_1[0x139] == 0)) goto LAB_005709ef;
      iVar8 = FUN_00a8cab0();
      if (iVar8 == 0x30002) {
        if ((*(byte *)(param_1 + 0x370) & 2) != 0) goto LAB_005709d6;
        param_1[0x370] = param_1[0x370] | 2;
        param_1[0x4f3] = param_1[0x4f6];
        param_1[0x4f4] = 0;
        param_1[0x4f2] = (int)((float)param_1[0x4f5] * 60.0);
        uVar7 = 0x30009;
        goto LAB_005709d1;
      }
      goto LAB_00570954;
    }
    uVar7 = 0x60003;
  }
  else {
    FUN_00aa92c0(0x18e);
    iVar9 = FUN_00a8eea0();
    if ((0 < iVar9) || (param_1[0x139] != 0)) {
      if (((*(byte *)(param_1 + 0x370) & 2) == 0) || (param_1[0x186] != 0x3000a)) {
        param_1[0x370] = param_1[0x370] | 2;
        param_1[0x4f2] = (int)((float)param_1[0x4f5] * 60.0);
        param_1[0x4f3] = param_1[0x4f6];
        param_1[0x4f4] = 0;
        param_1[0x667] = 0;
        FUN_0055f9e0(0x3000a);
      }
      param_1[0x678] = param_1[0x679];
      *param_3 = 1;
      return 1;
    }
LAB_005709ca:
    uVar7 = 0x60000;
  }
LAB_005709d1:
  FUN_0055f9e0(uVar7);
LAB_005709d6:
  *param_3 = 1;
  return 1;
}

// 00570B60  FUN_00570b60  size=1010  [between]
void __fastcall FUN_00570b60(int *param_1)

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
    if (param_1[0x4e1] == 0x10007) {
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
    goto LAB_00570cb6;
  case 1:
LAB_00570cb6:
    FUN_0055a640(param_1[0x2a1] + 0x40,param_1[0x249],0x3e4ccccd,0x3db2b8c2);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      FUN_00aa4080(10,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    iVar4 = FUN_0055eb60();
    if (iVar4 != 0) {
      FUN_0055f9e0(0x10007);
      return;
    }
    iVar4 = FUN_0055ebe0();
    if (iVar4 != 0) {
      FUN_0055f9e0(0x20003);
      return;
    }
    FUN_0055a740(param_1[0x249],0x3e800000,0x3e0efa35);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
    local_34 = -1.0;
    iVar4 = FUN_0055e8b0(&local_34);
    if (((iVar4 != 0) && (0.0 <= local_34)) && (local_34 < 9.0)) {
      fVar1 = (float)param_1[0x24a] - (float)param_1[0x244];
      param_1[0x24a] = (int)fVar1;
      if (fVar1 < 0.0 != (fVar1 == 0.0)) {
        param_1[0x248] = 0;
      }
    }
    if (param_1[0x632] != 0) {
LAB_00570e2d:
      FUN_00aa4080(0xc,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    if (((float)param_1[0x248] <= 0.0) || ((float)param_1[0x24b] * 1.5625 < (float)param_1[0x2a4]))
    {
      uVar3 = FUN_00dde2d0(0,100);
      if (((uVar3 & 1) == 0) || ((param_1[0x128] != 0 || (iVar4 = FUN_0056abb0(), iVar4 == 0)))) {
        if ((100.0 < (float)param_1[0x2a4]) || (iVar4 = FUN_0056eb60(), iVar4 == 0)) {
          if (625.0 < (float)param_1[0x2a4]) goto LAB_00570e2d;
          uVar6 = 0x20006;
        }
        else {
          uVar6 = 0x20004;
        }
      }
      else {
        uVar6 = 0x20005;
      }
      FUN_0055f9e0(uVar6);
      FUN_0055f9e0(0x10006);
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

// 00570F70  FUN_00570f70  size=1114  [between]
void __fastcall FUN_00570f70(int *param_1)

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
    if (param_1[0x4e1] == 0x10007) {
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
    goto LAB_0057108a;
  case 1:
LAB_0057108a:
    FUN_0055a640(param_1[0x2a1] + 0x40,param_1[0x249],0x3e4ccccd,0x3db2b8c2);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      FUN_00aa4080(10,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    iVar5 = FUN_0055eb60();
    if (iVar5 != 0) {
      FUN_0055f9e0(0x10007);
      return;
    }
    fVar2 = (float)param_1[0x2a4];
    if (!NAN(fVar2) && 324.0 < fVar2 != (fVar2 == 324.0)) {
      FUN_0055f9e0(0x10003);
      return;
    }
    FUN_0055a740(param_1[0x249],0x3e800000,0x3e0efa35);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
    local_34 = -1.0;
    iVar5 = FUN_0055e8b0(&local_34);
    if (((iVar5 != 0) && (0.0 <= local_34)) && (local_34 < 9.0)) {
      fVar2 = (float)param_1[0x24a] - (float)param_1[0x244];
      param_1[0x24a] = (int)fVar2;
      if (fVar2 < 0.0 != (fVar2 == 0.0)) {
        param_1[0x248] = 0;
      }
    }
    if (param_1[0x632] != 0) {
      FUN_00aa4080(0xc,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
    if (((param_1[0x370] & 0x20000U) != 0) &&
       (fVar2 = (float)param_1[0x249], param_1[0x249] = (int)(fVar2 - (float)param_1[0x244]),
       fVar2 - (float)param_1[0x244] <= 0.0)) {
      uVar4 = FUN_00dde2d0(0,100);
      if (((uVar4 & 1) == 0) || ((param_1[0x128] != 0 || (iVar5 = FUN_0056abb0(), iVar5 == 0)))) {
        if ((100.0 < (float)param_1[0x2a4]) || (iVar5 = FUN_0056eb60(), iVar5 == 0)) {
          if (625.0 < (float)param_1[0x2a4]) {
            FUN_00aa4080(0xc,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
            param_1[0x187] = param_1[0x187] + 1;
            goto LAB_00571348;
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
      FUN_0055f9e0(uVar6);
      FUN_0055f9e0(0x10006);
    }
LAB_00571348:
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

// 005713E0  Em0220::vf33C  size=2868  [class]
void __thiscall Em0220::vf33C(int *param_1,int *param_2,uint *param_3)

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
    if (iVar5 != 0) goto LAB_00571441;
  }
  else {
LAB_00571441:
    iVar4 = 1;
  }
  param_2[2] = iVar4;
  iVar4 = FUN_00a8c760(0x34);
  param_2[3] = (uint)(iVar4 != 0);
  *param_2 = 0;
  param_2[1] = 0;
  iVar4 = param_1[0x62f] + 1;
  FUN_0056c250(0x3f800000);
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
        bVar13 = (param_1[0x371] & uStack_64) != 0;
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
          bVar13 = (param_1[0x372] & uStack_64) != 0;
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
        if (bVar13 == bVar14) goto LAB_005715a9;
      }
      bVar3 = false;
    }
LAB_005715a9:
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
      fStack_40 = (float)param_1[0x628] - (float)param_1[0x10];
      fStack_3c = (float)param_1[0x629] - (float)param_1[0x11];
      fStack_38 = (float)param_1[0x62a] - (float)param_1[0x12];
      fStack_34 = (float)param_1[0x62b] - (float)param_1[0x13];
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
        fVar2 = pfVar7[2] * (float)param_1[0x626] +
                *pfVar7 * (float)param_1[0x624] + pfVar7[1] * (float)param_1[0x625];
      }
      bVar1 = 0.0 <= (float)param_1[0x626] * 0.0 +
                     (float)param_1[0x624] * 0.0 + (float)param_1[0x625];
      aiStack_48[0] = FUN_0056a9c0(&fStack_30,param_2);
      uVar6 = param_3[4] >> 0x1e & 1;
      if (((uVar6 == 0) || ((param_3[2] >> 0x1e & 1) == 0)) &&
         (((param_3[4] & 0x20000) == 0 || ((param_3[2] >> 0x11 & 1) == 0)))) {
        if (((uVar6 == 0) || ((~(*param_3 >> 0x1e) & 1) == 0)) &&
           (iVar5 = FUN_0043f830(0xe), iVar5 == 0)) {
          if ((1 < iVar4) || (iVar4 = FUN_0055d6e0(), iVar4 != 0)) {
            iVar4 = FUN_0043f830(0);
            if ((iVar4 == 0) && (iVar4 = FUN_0043f860(0), iVar4 == 0)) {
              if ((((*(byte *)(param_1 + 0x371) & 4) != 0) || (iVar4 = FUN_0043f830(2), iVar4 == 0))
                 && (!bVar3)) {
                *param_2 = 0x21;
                param_3[6] = 0x20220;
                return;
              }
              *param_2 = 0x20;
              param_3[6] = 0x20220;
              return;
            }
            *param_2 = 0x16;
            param_3[6] = 0x20220;
            return;
          }
          iVar4 = FUN_0043f830(0);
          if (iVar4 != 0) {
            if (uStack_68 == 0) {
              *param_2 = 9;
              param_3[6] = 0x20220;
              return;
            }
            iVar4 = FUN_0043f830(7);
            *param_2 = 0xb - (uint)(iVar4 != 0);
            param_3[6] = 0x20220;
            return;
          }
          iVar4 = FUN_0043f830(7);
          if (iVar4 != 0) {
            *param_2 = 0x19;
            param_3[6] = 0x20220;
            return;
          }
          iVar4 = FUN_0043f830(6);
          if (iVar4 != 0) {
            *param_2 = 0x1a;
            param_3[6] = 0x20220;
            return;
          }
          iVar4 = FUN_0043f830(9);
          if (iVar4 != 0) {
            *param_2 = 0x1b;
            param_3[6] = 0x20220;
            return;
          }
          iVar4 = FUN_0043f830(8);
          if (iVar4 != 0) {
            *param_2 = 0x1c;
            param_3[6] = 0x20220;
            return;
          }
          iVar4 = FUN_0043f830(2);
          if (iVar4 == 0) {
            iVar4 = FUN_0043f830(0);
            if ((iVar4 == 0) && (iVar4 = FUN_0043f830(5), iVar4 != 0)) {
              *param_2 = 0x1e;
              param_3[6] = 0x20220;
              return;
            }
            param_3[6] = 0x20220;
            *param_2 = 0;
            return;
          }
          *param_2 = 0x1d;
          param_3[6] = 0x20220;
          return;
        }
        if ((iVar4 < 2) && (iVar4 = FUN_0055d6e0(), iVar4 == 0)) {
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
                param_3[6] = 0x20220;
                return;
              }
              *param_2 = 8;
              param_3[6] = 0x20220;
              return;
            }
            iVar4 = FUN_0043f830(5);
            if ((iVar4 == 0) && (iVar4 = FUN_0043f860(5), iVar4 == 0)) {
              *param_2 = (uint)bVar1 * 2 + 3;
              param_3[6] = 0x20220;
              return;
            }
            *param_2 = (uint)bVar1 * 2 + 4;
            param_3[6] = 0x20220;
            return;
          }
          if (aiStack_48[0] == 0) {
            iVar4 = FUN_0043f830(0xd);
            if ((((iVar4 != 0) || (iVar4 = FUN_0043f860(0xd), iVar4 != 0)) &&
                (iVar4 = FUN_0043f830(0xf), iVar4 == 0)) && (iVar4 = FUN_0043f860(0xf), iVar4 == 0))
            {
LAB_00571c86:
              *param_2 = (uint)(fVar2 < 0.0) * 2 + 0xc;
              param_3[6] = 0x20220;
              return;
            }
          }
          else if (fStack_28 * 0.0 + fStack_30 * 0.0 + fStack_2c < 0.0) goto LAB_00571c86;
          *param_2 = (uint)(fVar2 < 0.0) * 2 + 0xd;
          param_3[6] = 0x20220;
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
              param_3[6] = 0x20220;
              return;
            }
            *param_2 = 0x14;
            param_3[6] = 0x20220;
            return;
          }
          iVar4 = FUN_0043f830(0xd);
          if ((iVar4 == 0) || (iVar4 = FUN_0043f830(0xf), iVar4 == 0)) {
            *param_2 = 0x13 - (uint)bVar3;
            param_3[6] = 0x20220;
            return;
          }
          iVar4 = FUN_0043f830(5);
          if ((iVar4 == 0) && (iVar4 = FUN_0043f860(5), iVar4 == 0)) {
            *param_2 = 0x10;
            param_3[6] = 0x20220;
            return;
          }
          *param_2 = 0x11;
          param_3[6] = 0x20220;
          return;
        }
      }
    }
    else {
      if ((param_1[0x370] & 0x400000U) == 0) {
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
        param_1[0x370] = param_1[0x370] | 0x400000;
      }
      if ((((iVar4 < 3) && (((param_3[4] & 0x40000000) == 0 || ((param_3[2] >> 0x1e & 1) == 0)))) &&
          (((param_3[4] & 0x20000) == 0 || ((param_3[2] >> 0x11 & 1) == 0)))) &&
         (((iVar4 = FUN_00a8cab0(), iVar4 == 0xf0007 || (iVar4 = FUN_00a8cab0(), iVar4 == 0xf0008))
          || (iVar4 = FUN_00a8cab0(), iVar4 == 0x80005)))) {
        param_3[6] = 0x20220;
        *param_2 = 0x22;
      }
    }
  }
  return;
}

// 00571F20  FUN_00571f20  size=269  [callgraph]
void __fastcall FUN_00571f20(int *param_1)

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
    if ((param_1[0x370] & 0x100000U) != 0) {
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
    FUN_0055a580(param_1[0x2a1] + 0x40,0x3e75c28f,0x3db2b8c2);
  }
  iVar2 = FUN_00a8c760(8);
  if (iVar2 != 0) {
    iVar2 = param_1[0x250];
    param_1[0x250] = iVar2 + 1;
    FUN_0056e2f0(iVar2);
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0057202b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00572030  FUN_00572030  size=943  [callgraph]
void __fastcall FUN_00572030(int *param_1)

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
    param_1[0x370] = param_1[0x370] | 0x40000;
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
    if (((char)param_1[0x372] < '\0') || ((param_1[0x372] & 0x200U) != 0)) {
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
  if (iVar2 != 0) {
    if ((param_1[0x128] == 0) && ((*(byte *)(param_1 + 0x2c0) & 2) != 0)) {
      param_1[0x187] = 2;
      param_1[0x139] = 1;
      FUN_00a8ee20(0);
      param_1[0x1af] = 1;
      return;
    }
    if (param_1[0x294] != 0) {
      FUN_00ac8e10(1);
      if ((*(byte *)((int)param_1 + 0xdc2) & 1) != 0) {
        FUN_00a8c9b0(0,2,0x3f800000,0);
        param_1[0x370] = param_1[0x370] & 0xfffeffff;
      }
      if ((param_1[0x370] & 0x8000U) == 0) {
        FUN_00e02240(param_1[0x13c],3);
        param_1[0x370] = param_1[0x370] | 0x8000;
      }
      (**(code **)(*param_1 + 0x20))();
      if (param_1[0x66c] != 0) {
        param_1[0x66c] = 0;
        FUN_00a8c9b0(0,0x197,0,0);
      }
      iVar2 = FUN_00a81330();
      if ((iVar2 != 0) && (piVar3 = (int *)FUN_00a7c8a0(), piVar3 != (int *)0x0)) {
        (**(code **)(*piVar3 + 0x20))();
      }
      param_1[0x1af] = 1;
      FUN_0055f9e0(0x60002);
      if (param_1[0x1d9] != 0) {
        FUN_008e3c10();
      }
      iVar2 = FUN_00e5e0c0("em0220_se_dmg_explosion",param_1,0xffffffff,0);
      param_1[0x66f] = iVar2;
      FUN_00940450(param_1[0x20f]);
      if ((param_1[0x128] != 0) || ((*(byte *)(param_1 + 0x2c0) & 2) == 0)) {
        (**(code **)(*param_1 + 0x364))(0xffffffff);
      }
      if (param_1[0x294] != 0) {
        return;
      }
    }
    FUN_00a805f0();
    param_1[0x187] = param_1[0x187] + 1;
  }
  return;
}

// 00572C50  FUN_00572c50  size=1326  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00572e68) */
/* WARNING: Removing unreachable block (ram,0x00572fe8) */

void FUN_00572c50(undefined4 param_1,float *param_2,float *param_3,float param_4,float param_5)

{
  float fVar1;
  undefined1 *puVar2;
  float fVar3;
  float *pfVar4;
  float fVar5;
  float unaff_retaddr;
  undefined1 **ppuVar6;
  float fVar7;
  undefined1 **ppuVar8;
  float fVar9;
  undefined1 *puStack_cc;
  undefined *puStack_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  int local_b8;
  float *local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
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
  
  local_b4 = &local_60;
  local_6c = *param_2;
  local_b8 = 0;
  local_b0 = 8;
  local_68 = param_2[1];
  local_a8 = 0.0;
  local_ac = 1;
  local_64 = param_2[2];
  local_94 = *param_3;
  local_90 = param_3[1];
  local_8c = param_3[2];
  local_78 = local_94 - local_6c;
  local_74 = local_90 - local_68;
  local_70 = local_8c - local_64;
  local_7c = SQRT(local_70 * local_70 + local_78 * local_78 + local_74 * local_74);
  local_a4 = local_7c * 0.33333334;
  if (param_4 < local_a4) {
    local_a4 = param_4;
  }
  if (local_a4 < param_5) {
    local_a4 = param_5;
  }
  local_7c = local_7c * 0.16666667;
  local_a0 = (local_6c + local_94) * 0.5;
  local_98 = (local_8c + local_64) * 0.5;
  if (local_90 <= local_68) {
    local_9c = local_68 + local_a4;
  }
  else {
    local_9c = local_90 + local_a4;
    if (local_90 + 5.0 < local_68) {
      local_9c = local_a4 * 0.5 + local_90;
    }
  }
  local_78 = local_78 * 0.16666667;
  local_74 = local_74 * 0.16666667;
  local_70 = local_70 * 0.16666667;
  local_88 = local_a0 - local_78;
  local_84 = local_9c - local_74;
  local_80 = local_98 - local_70;
  local_c4 = local_88 - local_6c;
  local_c0 = local_84 - local_68;
  local_bc = local_80 - local_64;
  fVar7 = local_bc * local_bc + local_c0 * local_c0 + local_c4 * local_c4;
  local_60 = local_6c;
  local_5c = local_68;
  local_58 = local_64;
  if (fVar7 < 0.0 != (fVar7 == 0.0)) {
    puStack_c8 = &DAT_0163d0ac;
    puStack_cc = (undefined1 *)0x572e7a;
    FUN_00dd5650();
    local_c4 = 0.0;
    local_c0 = 1.0;
    local_bc = 0.0;
  }
  puStack_c8 = (undefined *)&local_c4;
  puStack_cc = (undefined1 *)&local_c4;
  ppuVar8 = &puStack_cc;
  ppuVar6 = &puStack_cc;
  D3DXVec3Normalize();
  pfVar4 = local_b4;
  if ((int)local_b4 < local_b8) {
    pfVar4 = (float *)((int)local_bc + (int)local_b4 * 0xc);
    if (pfVar4 != (float *)0x0) {
      *pfVar4 = (float)puStack_cc * local_84 + local_74;
      pfVar4[1] = (float)puStack_c8 * local_84 + local_70;
      pfVar4[2] = local_c4 * local_84 + local_6c;
    }
    pfVar4 = (float *)((int)local_b4 + 1);
    if ((int)pfVar4 < local_b8) {
      pfVar4 = (float *)((int)local_bc + (int)pfVar4 * 0xc);
      if (pfVar4 != (float *)0x0) {
        *pfVar4 = local_90;
        pfVar4[1] = local_8c;
        pfVar4[2] = local_88;
      }
      pfVar4 = (float *)((int)local_b4 + 2);
      if ((int)pfVar4 < local_b8) {
        pfVar4 = (float *)((int)local_bc + (int)pfVar4 * 0xc);
        if (pfVar4 != (float *)0x0) {
          *pfVar4 = local_a8;
          pfVar4[1] = local_a4;
          pfVar4[2] = local_a0;
        }
        pfVar4 = (float *)((int)local_b4 + 3);
      }
    }
  }
  local_b4 = pfVar4;
  local_90 = local_80 + local_a8;
  local_8c = local_7c + local_a4;
  local_88 = local_78 + local_a0;
  puStack_cc = (undefined1 *)(local_9c - local_90);
  puStack_c8 = (undefined *)(local_98 - local_8c);
  local_c4 = local_94 - local_88;
  fVar7 = local_c4 * local_c4 +
          (float)puStack_cc * (float)puStack_cc + (float)puStack_c8 * (float)puStack_c8;
  if (fVar7 < 0.0 != (fVar7 == 0.0)) {
    FUN_00dd5650(&DAT_0163d0ac);
    puStack_cc = (undefined1 *)0x0;
    puStack_c8 = (undefined *)0x3f800000;
    local_c4 = 0.0;
  }
  D3DXVec3Normalize();
  fVar7 = (float)ppuVar6 * local_8c;
  fVar9 = (float)ppuVar8 * local_8c;
  puStack_cc = (undefined1 *)((float)puStack_cc * local_8c);
  if (param_2 == (float *)0x0) {
    fVar1 = fVar7 * 0.01;
    puVar2 = (undefined1 *)((float)puStack_cc * 0.01);
    fVar3 = (local_a0 - fVar9 * 0.01) + unaff_retaddr;
  }
  else {
    fVar3 = local_a0 - fVar9;
    fVar1 = fVar7;
    puVar2 = puStack_cc;
  }
  fVar5 = local_bc;
  if ((int)local_bc < (int)local_c0) {
    pfVar4 = (float *)((int)local_c4 + (int)local_bc * 0xc);
    if (pfVar4 != (float *)0x0) {
      *pfVar4 = local_98;
      pfVar4[1] = local_94;
      pfVar4[2] = local_90;
    }
    fVar5 = (float)((int)local_bc + 1);
    if ((int)fVar5 < (int)local_c0) {
      pfVar4 = (float *)((int)local_c4 + (int)fVar5 * 0xc);
      if (pfVar4 != (float *)0x0) {
        *pfVar4 = local_a4 - fVar1;
        pfVar4[1] = fVar3;
        pfVar4[2] = local_9c - (float)puVar2;
      }
      fVar5 = (float)((int)local_bc + 2);
      if ((int)fVar5 < (int)local_c0) {
        pfVar4 = (float *)((int)local_c4 + (int)fVar5 * 0xc);
        if (pfVar4 == (float *)0x0) {
          fVar5 = (float)((int)local_bc + 3);
        }
        else {
          *pfVar4 = local_a4;
          pfVar4[1] = local_a0;
          pfVar4[2] = local_9c;
          fVar5 = (float)((int)local_bc + 3);
        }
      }
    }
  }
  local_bc = fVar5;
  FUN_00a5e090(&puStack_c8);
  if ((local_c4 != 0.0) && (local_bc = 0.0, local_b8 != 0)) {
    FUN_00dd48d0(local_c4,0,fVar7,fVar9);
  }
  return;
}

// 00573180  FUN_00573180  size=1273  [callgraph]
/* WARNING: Removing unreachable block (ram,0x00573398) */
/* WARNING: Removing unreachable block (ram,0x00573518) */

void FUN_00573180(undefined4 param_1,float *param_2,float *param_3,float param_4,float param_5)

{
  float *pfVar1;
  float fVar2;
  undefined1 **ppuVar3;
  float fVar4;
  undefined1 **ppuVar5;
  float fVar6;
  undefined1 *puStack_cc;
  undefined *puStack_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  int local_b8;
  float *local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
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
  
  local_b4 = &local_60;
  local_6c = *param_2;
  local_b8 = 0;
  local_b0 = 8;
  local_68 = param_2[1];
  local_a8 = 0.0;
  local_ac = 1;
  local_64 = param_2[2];
  local_88 = *param_3;
  local_84 = param_3[1];
  local_80 = param_3[2];
  local_78 = local_88 - local_6c;
  local_74 = local_84 - local_68;
  local_70 = local_80 - local_64;
  local_7c = SQRT(local_70 * local_70 + local_78 * local_78 + local_74 * local_74);
  local_a4 = local_7c * 0.33333334;
  if (param_4 < local_a4) {
    local_a4 = param_4;
  }
  if (local_a4 < param_5) {
    local_a4 = param_5;
  }
  local_7c = local_7c * 0.16666667;
  local_a0 = (local_6c + local_88) * 0.5;
  local_98 = (local_80 + local_64) * 0.5;
  if (local_84 <= local_68) {
    local_9c = local_68 + local_a4;
  }
  else {
    local_9c = local_84 + local_a4;
    if (local_84 + 5.0 < local_68) {
      local_9c = local_a4 * 0.5 + local_84;
    }
  }
  local_78 = local_78 * 0.16666667;
  local_74 = local_74 * 0.16666667;
  local_70 = local_70 * 0.16666667;
  local_94 = local_a0 - local_78;
  local_90 = local_9c - local_74;
  local_8c = local_98 - local_70;
  local_c4 = local_94 - local_6c;
  local_c0 = local_90 - local_68;
  local_bc = local_8c - local_64;
  fVar4 = local_bc * local_bc + local_c4 * local_c4 + local_c0 * local_c0;
  local_60 = local_6c;
  local_5c = local_68;
  local_58 = local_64;
  if (fVar4 < 0.0 != (fVar4 == 0.0)) {
    puStack_c8 = &DAT_0163d0ac;
    puStack_cc = (undefined1 *)0x5733aa;
    FUN_00dd5650();
    local_c4 = 0.0;
    local_c0 = 1.0;
    local_bc = 0.0;
  }
  puStack_c8 = (undefined *)&local_c4;
  puStack_cc = (undefined1 *)&local_c4;
  ppuVar5 = &puStack_cc;
  ppuVar3 = &puStack_cc;
  D3DXVec3Normalize();
  pfVar1 = local_b4;
  if ((int)local_b4 < local_b8) {
    pfVar1 = (float *)((int)local_bc + (int)local_b4 * 0xc);
    if (pfVar1 != (float *)0x0) {
      *pfVar1 = (float)puStack_cc * local_84 + local_74;
      pfVar1[1] = (float)puStack_c8 * local_84 + local_70;
      pfVar1[2] = local_c4 * local_84 + local_6c;
    }
    pfVar1 = (float *)((int)local_b4 + 1);
    if ((int)pfVar1 < local_b8) {
      pfVar1 = (float *)((int)local_bc + (int)pfVar1 * 0xc);
      if (pfVar1 != (float *)0x0) {
        *pfVar1 = local_9c;
        pfVar1[1] = local_98;
        pfVar1[2] = local_94;
      }
      pfVar1 = (float *)((int)local_b4 + 2);
      if ((int)pfVar1 < local_b8) {
        pfVar1 = (float *)((int)local_bc + (int)pfVar1 * 0xc);
        if (pfVar1 != (float *)0x0) {
          *pfVar1 = local_a8;
          pfVar1[1] = local_a4;
          pfVar1[2] = local_a0;
        }
        pfVar1 = (float *)((int)local_b4 + 3);
      }
    }
  }
  local_b4 = pfVar1;
  local_9c = local_80 + local_a8;
  local_98 = local_7c + local_a4;
  local_94 = local_78 + local_a0;
  puStack_cc = (undefined1 *)(local_90 - local_9c);
  puStack_c8 = (undefined *)(local_8c - local_98);
  local_c4 = local_88 - local_94;
  fVar4 = local_c4 * local_c4 +
          (float)puStack_cc * (float)puStack_cc + (float)puStack_c8 * (float)puStack_c8;
  if (fVar4 < 0.0 != (fVar4 == 0.0)) {
    FUN_00dd5650(&DAT_0163d0ac);
    puStack_cc = (undefined1 *)0x0;
    puStack_c8 = (undefined *)0x3f800000;
    local_c4 = 0.0;
  }
  D3DXVec3Normalize();
  fVar4 = (float)ppuVar3 * local_8c;
  fVar6 = (float)ppuVar5 * local_8c;
  puStack_cc = (undefined1 *)((float)puStack_cc * local_8c);
  fVar2 = local_bc;
  if ((int)local_bc < (int)local_c0) {
    pfVar1 = (float *)((int)local_c4 + (int)local_bc * 0xc);
    if (pfVar1 != (float *)0x0) {
      *pfVar1 = local_a4;
      pfVar1[1] = local_a0;
      pfVar1[2] = local_9c;
    }
    fVar2 = (float)((int)local_bc + 1);
    if ((int)fVar2 < (int)local_c0) {
      pfVar1 = (float *)((int)local_c4 + (int)fVar2 * 0xc);
      if (pfVar1 != (float *)0x0) {
        *pfVar1 = local_98 - fVar4;
        pfVar1[1] = local_94 - fVar6;
        pfVar1[2] = local_90 - (float)puStack_cc;
      }
      fVar2 = (float)((int)local_bc + 2);
      if ((int)fVar2 < (int)local_c0) {
        pfVar1 = (float *)((int)local_c4 + (int)fVar2 * 0xc);
        if (pfVar1 == (float *)0x0) {
          fVar2 = (float)((int)local_bc + 3);
        }
        else {
          *pfVar1 = local_98;
          pfVar1[1] = local_94;
          pfVar1[2] = local_90;
          fVar2 = (float)((int)local_bc + 3);
        }
      }
    }
  }
  local_bc = fVar2;
  FUN_00a5e090(&puStack_c8);
  if ((local_c4 != 0.0) && (local_bc = 0.0, local_b8 != 0)) {
    FUN_00dd48d0(local_c4,0,fVar4,fVar6);
  }
  return;
}

// 00573680  FUN_00573680  size=52  [callgraph]
void __thiscall FUN_00573680(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x19a8) = 0;
  FUN_00572c50(param_1 + 0x14d0,param_1 + 0x40,param_2,param_3,0,1);
  return;
}

// 005736C0  FUN_005736c0  size=81  [callgraph]
void __fastcall FUN_005736c0(int param_1)

{
  undefined4 uVar1;
  undefined1 local_120 [284];
  
  if ((*(int *)(param_1 + 0x4a0) == 1) && (*(int *)(param_1 + 0xfb8) == 0)) {
    FUN_00e01eb0(param_1 + 0xf20);
    uVar1 = FUN_00a81330(1,local_120);
    FUN_00e028c0(uVar1);
  }
  return;
}

// 00573720  FUN_00573720  size=134  [callgraph]
void __thiscall FUN_00573720(int param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 local_120 [284];
  
  if (*(int *)(param_1 + 0x4a0) == 1) {
    FUN_00eaa6e0(0,0);
    if ((*(int *)(param_1 + 0x1068) == 0) || (param_3 == 0)) {
      FUN_00e01eb0(param_1 + 0xfd0);
      if (param_3 == 0) {
        cVar1 = (param_2 != 0) + '\x06';
      }
      else {
        cVar1 = '\b';
      }
      uVar2 = FUN_00a81330(cVar1,local_120);
      FUN_00e028c0(uVar2);
    }
  }
  return;
}

// 005737B0  FUN_005737b0  size=62  [callgraph]
void __fastcall FUN_005737b0(int param_1)

{
  int iVar1;
  undefined1 local_160 [348];
  
  iVar1 = FUN_00ac89d0();
  if (iVar1 == 0) {
    iVar1 = param_1;
  }
  FUN_004117d0(0,iVar1,param_1 + 0xe70);
  FUN_00a963e0(local_160);
  return;
}

// 005737F0  FUN_005737f0  size=74  [callgraph]
void __fastcall FUN_005737f0(int param_1)

{
  undefined4 uVar1;
  undefined1 local_160 [348];
  
  if (*(int *)(param_1 + 0x19b0) == 0) {
    *(undefined4 *)(param_1 + 0x19b0) = 1;
    uVar1 = FUN_00a8c890(0);
    FUN_004117d0(0x197,param_1,uVar1);
    FUN_00a963e0(local_160);
  }
  return;
}

// 00573840  FUN_00573840  size=58  [callgraph]
bool __fastcall FUN_00573840(int param_1)

{
  int iVar1;
  
  if (((*(int *)(param_1 + 0x4a0) != 0) || ((*(byte *)(param_1 + 0xb00) & 2) == 0)) &&
     ((*(byte *)(param_1 + 0xdae) < 5 ||
      ((*(int *)(param_1 + 0xdb0) != 2 && (*(int *)(param_1 + 0xdb0) != -1)))))) {
    return false;
  }
  iVar1 = FUN_0056ebc0();
  return iVar1 != 0;
}

// 00573880  FUN_00573880  size=890  [callgraph]
void __fastcall FUN_00573880(int param_1)

{
  float fVar1;
  uint uVar2;
  undefined4 uVar3;
  float10 fVar4;
  undefined1 local_120 [284];
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    if (*(int *)(param_1 + 0x61c) != 1) {
      return;
    }
    if (*(int *)(param_1 + 0x940) == 0) {
      if ((*(uint *)(param_1 + 0xdc0) & 0x800) == 0) {
        fVar1 = 12.0;
      }
      else {
        fVar1 = 50.0;
      }
      if (*(float *)(param_1 + 0x920) <= fVar1) {
        *(float *)(param_1 + 0x920) = fVar1;
        *(undefined4 *)(param_1 + 0x940) = 1;
        uVar2 = *(uint *)(param_1 + 0xdc0);
        if (*(int *)(param_1 + 0x4a0) == 1) {
          FUN_00eaa6e0(0,0);
          FUN_00e01eb0(param_1 + 0xfd0);
          uVar3 = FUN_00a81330(((uVar2 >> 0xb & 1) != 0) + '\x06',local_120);
          FUN_00e028c0(uVar3);
        }
      }
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar4 = (float10)FUN_00562550();
    if ((*(uint *)(param_1 + 0xdc0) & 0x800) == 0) {
      uVar3 = 0x40900000;
    }
    else {
      uVar3 = 0x40a00000;
    }
    FUN_0055add0(param_1 + 0x1790,uVar3,(float)fVar4);
    FUN_005625d0(param_1 + 0x1790,0);
    fVar1 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x920) = fVar1;
    if (0.0 < fVar1) {
      return;
    }
    if ((*(uint *)(param_1 + 0xdc0) & 0x800) != 0) {
      FUN_0055f9e0(0x2000d);
      return;
    }
    FUN_0055f9e0(0x2000c);
    return;
  }
  FUN_00aa4080(0x7a,0,0x3d888889,0x3f800000,0,0xbf800000,0x3f800000);
  if (*(int *)(param_1 + 0x1384) == 0x1000a) {
    if (*(float *)(param_1 + 0x920) <= 9.0) {
      *(undefined4 *)(param_1 + 0x920) = 0x41100000;
    }
    goto LAB_00573b87;
  }
  FUN_005736c0();
  *(undefined4 *)(param_1 + 0x940) = 0;
  if ((*(uint *)(param_1 + 0xdc0) & 0x800) == 0) {
    if (*(int *)(param_1 + 0x175c) != 0) {
      fVar1 = *(float *)(param_1 + 0x17ac);
      goto LAB_00573a78;
    }
    *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x17b4) * 60.0;
    *(undefined4 *)(param_1 + 0x940) = 0;
  }
  else {
    fVar1 = *(float *)(param_1 + 0x17b0);
LAB_00573a78:
    *(float *)(param_1 + 0x920) = fVar1 * 60.0;
  }
  if ((*(uint *)(param_1 + 0xdc0) & 0x800) == 0) {
    fVar1 = 12.0;
  }
  else {
    fVar1 = 50.0;
  }
  if (*(float *)(param_1 + 0x920) <= fVar1) {
    *(undefined4 *)(param_1 + 0x940) = 1;
    uVar2 = *(uint *)(param_1 + 0xdc0);
    if (*(int *)(param_1 + 0x4a0) == 1) {
      FUN_00eaa6e0(0,0);
      FUN_00e01eb0(param_1 + 0xfd0);
      uVar3 = FUN_00a81330(((uVar2 >> 0xb & 1) != 0) + '\x06',local_120);
      FUN_00e028c0(uVar3);
    }
  }
  else if (*(int *)(param_1 + 0x4a0) == 1) {
    FUN_00eaa6e0(0,0);
    if (*(int *)(param_1 + 0x1068) == 0) {
      FUN_00e01eb0(param_1 + 0xfd0);
      uVar3 = FUN_00a81330(8,local_120);
      FUN_00e028c0(uVar3);
    }
  }
LAB_00573b87:
  FUN_00562410();
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar4 = (float10)FUN_00562550();
  if ((*(uint *)(param_1 + 0xdc0) & 0x800) == 0) {
    uVar3 = 0x40900000;
  }
  else {
    uVar3 = 0x40a00000;
  }
  FUN_0055add0(param_1 + 0x1790,uVar3,(float)fVar4);
  FUN_005625d0(param_1 + 0x1790,0);
  *(uint *)(param_1 + 0xdc0) = *(uint *)(param_1 + 0xdc0) | 0x20;
  *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  return;
}

// 00573C00  FUN_00573c00  size=380  [callgraph]
void __fastcall FUN_00573c00(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  float10 fVar4;
  
  if (param_1[0x187] == 0) {
    uVar3 = 0x1b;
    if (param_1[0x4e7] == 2) {
      if (param_1[0x47c] == 0) {
        uVar3 = 0x1d;
      }
    }
    else if ((param_1[0x4e7] == 3) && (param_1[0x488] == 0)) {
      uVar3 = 0x1c;
    }
    param_1[0x4e8] = 0;
    FUN_00aa4080(uVar3,0,0x3e088889,0x3f800000,0x8038000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a8c760(0);
  if (iVar1 != 0) {
    FUN_0055a580(param_1[0x2a1] + 0x40,0x3e800000,0x3e0efa35);
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
      FUN_0055f9e0(0x10005);
      return;
    }
    uVar2 = FUN_00dde2d0(0,100);
    if (((uVar2 & 1) == 0) || (iVar1 = FUN_00573840(), iVar1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00573d7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 00573D80  FUN_00573d80  size=639  [callgraph]
void __fastcall FUN_00573d80(int param_1)

{
  float fVar1;
  float fVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  float10 fVar6;
  
  if (((*(int *)(param_1 + 0x1280) != 0) && ((*(uint *)(param_1 + 0x1384) & 0xffff0000) != 0x50000))
     && (uVar4 = FUN_00dde2d0(0,100), (uVar4 & 1) != 0)) {
    uVar4 = FUN_00dde2d0(0,100);
    if ((uVar4 & 1) == 0) {
LAB_00573dc9:
      FUN_0055f9e0(0x50002);
      return;
    }
LAB_00573ff2:
    FUN_0055f9e0(0x50001);
    return;
  }
  iVar5 = FUN_0055ebe0();
  if (iVar5 != 0) {
    FUN_0055f9e0(0x20003);
    return;
  }
  fVar6 = (float10)FUN_00a8ec30(*(int *)(param_1 + 0xa84) + 0x40);
  fVar6 = (float10)FUN_00ddba30((float)((float10)*(float *)(param_1 + 0x94) - fVar6));
  fVar6 = ABS(fVar6);
  fVar1 = (float)fVar6;
  if ((float10)1.0471976 < fVar6 != ((float10)1.0471976 == fVar6)) {
    uVar4 = FUN_00dde2d0(0,100);
    if (((uVar4 & 1) != 0) && (*(int *)(param_1 + 0x1190) == 0)) {
      FUN_0055f9e0(0x1000d);
      return;
    }
    fVar6 = (float10)fVar1;
  }
  if ((float10)0.7853982 <= fVar6) {
    if (*(int *)(param_1 + 0x1778) < 4) {
      FUN_0055f9e0(0x10005);
      return;
    }
  }
  else {
    if (((*(int *)(param_1 + 0x4a0) != 0) || ((*(byte *)(param_1 + 0xb00) & 2) == 0)) &&
       (fVar2 = *(float *)(param_1 + 0x19b8), !NAN(fVar2) && 30.0 < fVar2 != (fVar2 == 30.0))) {
      if (144.0 < *(float *)(param_1 + 0xa90)) {
        FUN_0055f9e0(0x10003);
        return;
      }
      if (*(int *)(param_1 + 0x1384) != 0x10013) {
        FUN_0055f9e0(0x10013);
        return;
      }
    }
    if (25.0 < *(float *)(param_1 + 0xa90)) {
      if (((*(float *)(param_1 + 0xa90) <= 225.0) && (*(float *)(param_1 + 0x1544) <= 0.0)) &&
         (iVar5 = FUN_0056eb60(), iVar5 != 0)) {
        *(float *)(param_1 + 0x1544) = *(float *)(param_1 + 0x17c0) * 60.0;
        *(uint *)(param_1 + 0xdc0) = *(uint *)(param_1 + 0xdc0) | 0x10;
        sVar3 = FUN_00dde2d0(3,5);
        *(int *)(param_1 + 0x1540) = (int)sVar3;
        FUN_0055f9e0(0x20008);
        return;
      }
      iVar5 = FUN_00573840();
      if (iVar5 != 0) {
        return;
      }
      fVar2 = *(float *)(param_1 + 0xa90);
      if (!NAN(fVar2) && 144.0 < fVar2 != (fVar2 == 144.0)) {
        FUN_0056dd80();
        return;
      }
      fVar2 = *(float *)(param_1 + 0xa90);
      if (!NAN(fVar2) && 64.0 < fVar2 != (fVar2 == 64.0)) {
        FUN_0055f9e0(0x10002);
        return;
      }
      if (NAN(fVar1) || 0.34906584 < fVar1 == (fVar1 == 0.34906584)) {
        return;
      }
      iVar5 = FUN_0055ced0();
      if (iVar5 != 0) goto LAB_00573dc9;
      goto LAB_00573ff2;
    }
    if (*(int *)(param_1 + 0x11c0) != 0) {
      FUN_0055f9e0(0x10008);
      return;
    }
  }
  FUN_0055f9e0(0x50000);
  return;
}

// 00574000  FUN_00574000  size=93  [callgraph]
void __fastcall FUN_00574000(int param_1)

{
  float fVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    if ((((*(int *)(param_1 + 0x4a0) == 0) && ((*(byte *)(param_1 + 0xb00) & 2) != 0)) ||
        ((4 < *(byte *)(param_1 + 0xdae) &&
         ((*(int *)(param_1 + 0xdb0) == 2 || (*(int *)(param_1 + 0xdb0) == -1)))))) &&
       (iVar2 = FUN_0056ebc0(), iVar2 != 0)) {
      return;
    }
    fVar1 = *(float *)(param_1 + 0xa90);
    if (!NAN(fVar1) && 169.0 < fVar1 != (fVar1 == 169.0)) {
      FUN_0056dd80();
      return;
    }
  }
  return;
}

// 00574060  FUN_00574060  size=513  [callgraph]
void __fastcall FUN_00574060(int param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  float10 fVar4;
  
  *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
  if (*(int *)(param_1 + 0x61c) == 2) {
    if (((*(int *)(param_1 + 0x4a0) != 0) || ((*(byte *)(param_1 + 0xb00) & 2) == 0)) &&
       (*(float *)(param_1 + 0x18f0) < -15.0)) {
      iVar2 = FUN_00aa4a90();
      if (iVar2 != 0) {
        FUN_0055f9e0(0x1000f);
      }
    }
    fVar1 = *(float *)(param_1 + 0x19b8);
    if (NAN(fVar1) || 30.0 < fVar1 == (fVar1 == 30.0)) {
      fVar4 = (float10)FUN_00a8ec30(*(int *)(param_1 + 0xa84) + 0x40);
      fVar4 = (float10)FUN_00ddba30((float)((float10)*(float *)(param_1 + 0x94) - fVar4));
      if ((float10)1.3089969 <= ABS(fVar4)) {
        FUN_0055f9e0(0x10006);
        return;
      }
      if (((*(int *)(param_1 + 0x4a0) == 1) && (*(float *)(param_1 + 0x17a8) <= 0.0)) &&
         ((*(int *)(param_1 + 0x1280) == 0 &&
          ((fVar1 = *(float *)(param_1 + 0xa90), !NAN(fVar1) && 64.0 < fVar1 != (fVar1 == 64.0) &&
           (*(float *)(param_1 + 0xa90) <= 506.25)))))) {
        iVar2 = FUN_0056abb0();
        if (iVar2 != 0) {
          iVar2 = FUN_00c158c0();
          if ((iVar2 != 0) && (*(float *)(param_1 + 0x19b8) <= 0.0)) {
            *(undefined4 *)(param_1 + 0x175c) = 0;
            *(uint *)(param_1 + 0xdc0) = *(uint *)(param_1 + 0xdc0) & 0xfffff7ff;
            uVar3 = FUN_00dde2d0(0,100);
            if ((uVar3 & 3) == 0) {
              *(uint *)(param_1 + 0xdc0) = *(uint *)(param_1 + 0xdc0) | 0x800;
            }
            FUN_0055f9e0(0x2000a);
            return;
          }
        }
      }
      iVar2 = FUN_00573840();
      if ((iVar2 == 0) &&
         ((fVar1 = *(float *)(param_1 + 0xa90), !NAN(fVar1) && 30.25 < fVar1 != (fVar1 == 30.25) &&
          (*(float *)(param_1 + 0xa90) <= 64.0)))) {
        fVar4 = (float10)FUN_0055a7a0();
        if (fVar4 < (float10)0.7853982 != (fVar4 == (float10)0.7853982)) {
          iVar2 = FUN_0056eb60();
          if (iVar2 != 0) {
            FUN_0055f9e0(0x20004);
          }
        }
      }
    }
    else if (((*(int *)(param_1 + 0x4a0) != 0) || ((*(byte *)(param_1 + 0xb00) & 2) == 0)) &&
            (*(float *)(param_1 + 0xa90) <= 100.0)) {
      FUN_0055f9e0(0x10013);
      return;
    }
  }
  return;
}

// 00574270  FUN_00574270  size=918  [callgraph]
void __fastcall FUN_00574270(int param_1)

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
    if (*(int *)(param_1 + 0x1384) == 0x10007) {
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
      FUN_0055a580(&local_40,0x3e800000,0x3dd67750);
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00aa09c0(*(int *)(param_1 + 0xa84) + 0x40,0x40200000,1);
    if ((iVar1 != 0) && (iVar1 = FUN_00a8d380(), iVar1 != 0)) {
      FUN_0055f9e0(0x10003);
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
      FUN_0055a580(&local_30,0x3e99999a,0x3e32b8c2);
    }
    iVar1 = FUN_00932720();
    if ((iVar1 == 0x410) && (iVar1 = FUN_0055eb60(), iVar1 != 0)) {
      FUN_0055f9e0(0x10007);
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
        FUN_0055f9e0(0x10003);
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
        FUN_00573680(&local_20,0x40000000);
        *(undefined4 *)(param_1 + 0x61c) = 3;
        return;
      }
    }
    break;
  case 3:
    local_50 = 0;
    FUN_0055f490(&local_50);
    if (local_50 != 0) {
      FUN_00c70800();
      *(undefined4 *)(param_1 + 0x61c) = 2;
      FUN_00aa4080(10,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    }
  }
  return;
}

// 00574620  FUN_00574620  size=1084  [callgraph]
void __fastcall FUN_00574620(int *param_1)

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
    if (param_1[0x4e1] == 0x10007) {
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
      FUN_0055a580(&local_40,0x3e800000,0x3dd67750);
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00aa09c0(param_1[0x2a1] + 0x40,0x40200000,1);
    if ((iVar2 != 0) && (iVar2 = FUN_00a8d380(), iVar2 != 0)) {
      FUN_0055f9e0(0x10003);
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
      FUN_0055a580(&local_30,0x3e99999a,0x3e32b8c2);
    }
    iVar2 = FUN_00932720();
    if ((iVar2 == 0x410) && (iVar2 = FUN_0055eb60(), iVar2 != 0)) {
      FUN_0055f9e0(0x10007);
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
      if (iVar2 != 0) goto LAB_005748c0;
      iVar2 = FUN_00a8d3d0(5);
      if (((iVar2 != 0) || (iVar2 = FUN_00a8d3d0(10), iVar2 != 0)) ||
         ((iVar2 = FUN_00a8d3d0(8), iVar2 != 0 || (iVar2 = FUN_00a8d3d0(7), iVar2 != 0)))) {
        FUN_00a979f0(&local_4c);
        local_20 = local_4c;
        local_1c = local_48;
        local_18 = local_44;
        local_14 = 0x3f800000;
        FUN_00573680(&local_20,0x40000000);
        param_1[0x187] = 3;
        return;
      }
    }
    if (param_1[0x4a0] == 0) {
      FUN_0055f9e0(0x90003);
      return;
    }
    if ((float)param_1[0x2a4] <= 100.0) {
LAB_005748c0:
      FUN_00aa4080(0xc,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x187] = 4;
      return;
    }
    break;
  case 3:
    local_50 = 0;
    FUN_0055f490(&local_50);
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

// 00574A70  FUN_00574a70  size=2834  [callgraph]
void __fastcall FUN_00574a70(int *param_1)

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
  iVar6 = param_1[0x67a];
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
    goto LAB_00574ef6;
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
    param_1[0x500] = (int)fStack_3c;
    param_1[0x501] = (int)fStack_38;
    param_1[0x502] = (int)fStack_34;
    param_1[0x503] = 0x3f800000;
    FUN_00573180(param_1 + 0x51c,param_1 + 0x10,param_1 + 0x500,0x3fb33333,0);
    FUN_00aa4080(0x20,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    if (param_1[0x1d9] != 0) {
      FUN_008e0ae0(0);
    }
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_0055a580(param_1 + 0x500,0x3ecccccd,0x3eb2b8c2);
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
LAB_00574ef6:
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
        param_1[0x500] = (int)fStack_3c;
        param_1[0x501] = (int)fStack_38;
        param_1[0x502] = (int)fStack_34;
        param_1[0x503] = 0x3f800000;
        FUN_00573180(param_1 + 0x51c,param_1 + 0x10,param_1 + 0x500,0x41600000,0);
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
    FUN_0055a580(&fStack_24,0x3e4ccccd,0x3e0efa35);
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
        param_1[0x500] = (int)fStack_30;
        param_1[0x501] = iStack_2c;
        param_1[0x502] = (int)fStack_28;
        param_1[0x503] = 0x3f800000;
        (**(code **)(*param_1 + 0x318))();
        iVar6 = param_1[0x1d9];
        if ((iVar6 != 0) && (*(int *)(iVar6 + 0x104) != 1)) {
          *(undefined4 *)(iVar6 + 0x104) = 1;
          *(undefined4 *)(*(int *)(iVar6 + 0xd0) + 4) = 0;
        }
        FUN_00573180(param_1 + 0x51c,param_1 + 0x10,param_1 + 0x500,0x41600000,0);
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

// 005755B0  Em0220::vf334  size=2289  [class]
void __thiscall Em0220::vf334(int *param_1,int param_2,int *param_3)

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
  int local_178;
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
  
  BehaviorEmBase::vf334(param_2,param_3);
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
      puVar12 = &DAT_01b35000;
      (**(code **)(*piVar4 + 4))(&DAT_01b35000);
      iVar5 = FUN_00dd6d80(puVar12);
      if (iVar5 == 0) {
        piVar4 = (int *)0x0;
      }
      else {
        if (piVar4 != param_1) {
          FUN_0040ac60(piVar4 + 0x2ac);
          param_1[0x62f] = piVar4[0x62f];
          param_1[0x624] = piVar4[0x624];
          param_1[0x625] = piVar4[0x625];
          param_1[0x626] = piVar4[0x626];
          param_1[0x627] = piVar4[0x627];
          param_1[0x628] = piVar4[0x628];
          param_1[0x629] = piVar4[0x629];
          param_1[0x62a] = piVar4[0x62a];
          param_1[0x62b] = piVar4[0x62b];
          param_1[0x676] = piVar4[0x676];
          FUN_0055a240(piVar4);
          iVar5 = piVar4[0x20f];
          param_1[0x147] = iVar5;
          param_1[0x20f] = iVar5;
          if ((piVar4[0x370] & 0x100000U) == 0) {
            param_1[0x370] = param_1[0x370] & 0xffefffff;
          }
          else {
            param_1[0x370] = param_1[0x370] | 0x100000;
          }
          if ((piVar4[0x370] & 0x4000000U) == 0) {
            param_1[0x370] = param_1[0x370] & 0xfbffffff;
          }
          else {
            param_1[0x370] = param_1[0x370] | 0x4000000;
          }
          uVar6 = FUN_00a8eea0();
          FUN_00a8ee20(uVar6);
          param_1[0x373] = piVar4[0x373];
          param_1[0x378] = piVar4[0x378];
          param_1[0x37d] = piVar4[0x37d];
          param_1[0x382] = piVar4[0x382];
          param_1[0x387] = piVar4[0x387];
          param_1[0x38c] = piVar4[0x38c];
          param_1[0x391] = piVar4[0x391];
          param_1[0x396] = piVar4[0x396];
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
      iVar5 = FUN_00a92f90();
      if ((iVar5 == 0) || (iVar5 = FUN_00a92f90(), (*(byte *)(iVar5 + 0x94) & 1) == 0)) {
        fVar11 = (float10)-1.0;
      }
      else {
        uVar13 = 0;
        FUN_00a92f90(0);
        fVar11 = (float10)FUN_00407b40(uVar13);
      }
      FUN_00a9e290(uVar6,0,0,0x3f800000,0x8000000,(float)fVar11,0x3f800000);
    }
  }
  puVar7 = (undefined4 *)FUN_009f8b60();
  FUN_00ac8a80(*puVar7);
  FUN_009fd240();
  if (*(int *)(param_2 + 0x370) != 0) {
    FUN_00a1abe0(0);
  }
  iVar5 = 0;
  param_1[0x39b] = 0;
  piVar4 = param_1 + 0x373;
  do {
    if (*piVar4 != 0) {
      if (((iVar5 == 6) || (iVar5 == 5)) && ((param_1[0x370] & 0x800000U) != 0)) {
        param_1[0x370] = param_1[0x370] & 0xff7fffff;
        FUN_00a93910(1);
      }
      param_1[0x39b] = param_1[0x39b] + 1;
      FUN_0055c380(iVar5);
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
          param_1[0x372] = param_1[0x372] | uVar3;
LAB_0057591b:
          if (uVar10 < 0x20) {
            param_1[0x371] = param_1[0x371] | uVar3;
          }
        }
      }
      else {
        iVar5 = FUN_00a10040(uVar10);
        if (iVar5 == 1) goto LAB_0057591b;
      }
      uVar10 = uVar10 + 1;
      uVar3 = uVar3 << 1 | (uint)((int)uVar3 < 0);
    } while ((int)uVar10 < 0x10);
  }
  if ((*(byte *)(param_1 + 0x371) & 4) != 0) {
    param_1[0x370] = param_1[0x370] | 0x200000;
  }
  if ((*(byte *)(param_1 + 0x371) & 0x10) != 0) {
    param_1[0x370] = param_1[0x370] | 0x400000;
  }
  param_1[0x674] = 4;
  uVar3 = param_1[0x371];
  if ((uVar3 & 0x40) != 0) {
    param_1[0x674] = 3;
  }
  if ((char)uVar3 < '\0') {
    param_1[0x674] = param_1[0x674] + -1;
  }
  if ((uVar3 & 0x100) != 0) {
    param_1[0x674] = param_1[0x674] + -1;
  }
  if ((uVar3 & 0x200) != 0) {
    param_1[0x674] = param_1[0x674] + -1;
  }
  pcVar1 = *(code **)(*param_1 + 0x1d8);
  iVar5 = -1;
  param_1[0x62d] = 0;
  param_1[0x62e] = 0;
  local_178 = (*pcVar1)();
  piVar4 = (int *)FUN_00ac8a30();
  if (piVar4 != (int *)0x0) {
    param_1[0x62d] = *piVar4;
    param_1[0x62e] = piVar4[1];
    if (piVar4[2] != 0) {
      local_178 = 1;
    }
  }
  switch(param_1[0x62d]) {
  case 1:
  case 0x15:
    iVar5 = 0x80002;
    param_1[0x62c] = 0x136;
    break;
  case 3:
  case 0xd:
    iVar5 = 0x80002;
    param_1[0x62c] = 0x101;
    break;
  case 4:
    iVar5 = 0x80002;
    param_1[0x62c] = 0x102;
    break;
  case 5:
  case 0xc:
    iVar5 = 0x80002;
    param_1[0x62c] = 0xfd;
    break;
  case 6:
  case 0xe:
    iVar5 = 0x80002;
    param_1[0x62c] = 0xfe;
    break;
  case 7:
    iVar5 = 0x80002;
    param_1[0x62c] = 0xff;
    break;
  case 8:
    iVar5 = 0x80002;
    param_1[0x62c] = 0x100;
    break;
  case 9:
  case 0xf:
    iVar5 = 0x80002;
    param_1[0x62c] = 0xb5;
    break;
  case 10:
  case 0xb:
    iVar5 = 0x80002;
    param_1[0x62c] = 0xfb;
    break;
  case 0x10:
    iVar5 = 0x80002;
    param_1[0x62c] = 0x13b;
    break;
  case 0x11:
    iVar5 = 0x80002;
    param_1[0x62c] = 0x13c;
    break;
  case 0x12:
    iVar5 = 0x80002;
    param_1[0x62c] = 0x13d;
    break;
  case 0x13:
  case 0x14:
    iVar5 = 0x80002;
    param_1[0x62c] = 0x13e;
    break;
  case 0x16:
    iVar5 = 0x80002;
    param_1[0x62c] = 0x141;
    break;
  case 0x17:
    iVar5 = 0x80001;
    param_1[0x62c] = 0x9b;
    break;
  case 0x18:
    iVar5 = 0x80001;
    param_1[0x62c] = 0x9e;
    break;
  case 0x19:
  case 0x1a:
    iVar5 = 0x80001;
    param_1[0x62c] = 0xfb;
    break;
  case 0x1b:
  case 0x1c:
    iVar5 = 0x80001;
    param_1[0x62c] = 0xfc;
    break;
  case 0x1d:
    iVar5 = 0x80001;
    param_1[0x62c] = 0x9c;
    break;
  case 0x1e:
    iVar5 = 0x80001;
    param_1[0x62c] = 0x9d;
    break;
  case 0x20:
    iVar5 = -1;
    FUN_00565dd0();
    break;
  case 0x21:
    iVar5 = 0x80001;
    param_1[0x62c] = 0x131;
    break;
  case 0x22:
    iVar5 = 0x80005;
    param_1[0x677] = 1;
  }
  if (param_1[0x62d] == 0x1e) {
    param_1[0x370] = param_1[0x370] | 0x4000000;
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
    FUN_00dffb30(param_1 + 0x39c);
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
  if ((param_1[0x62e] == 1) && (iVar8 = FUN_0056a9c0(&fStack_170,0), iVar8 != 0)) {
    param_1[0x14] = (int)((float)param_1[0x14] + fStack_170 * -0.1);
    param_1[0x15] = (int)(fStack_16c * -0.1 + (float)param_1[0x15]);
    param_1[0x16] = (int)((float)param_1[0x16] + fStack_168 * -0.1);
    param_1[0x17] = (int)(fStack_164 * -0.1 + (float)param_1[0x17]);
  }
  if ((param_1[0x62d] == 0x14) && (param_1[0x1d9] != 0)) {
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
  if (local_178 != 0) {
    if (iVar5 == 0x80002) {
      iVar5 = 0x80004;
    }
    else if (iVar5 == 0x80001) {
      iVar5 = 0x80003;
    }
  }
  iVar8 = param_1[0x62d];
  if (((iVar8 == 0x1a) || (iVar8 == 0x1c)) || (iVar8 == 0xb)) {
    param_1[0x370] = param_1[0x370] | 0x100000;
  }
  iVar8 = param_1[0x62d];
  if (((iVar8 != 0x17) && (iVar8 != 0x18)) && ((iVar8 != 0x1d && (iVar8 != 0x1e)))) {
    param_1[0x62f] = param_1[0x62f] + 1;
  }
  FUN_0056a720();
  if ((param_1[0x128] == 0) && ((*(byte *)(param_1 + 0x2c0) & 2) != 0)) {
    FUN_00ac8d40(1);
  }
  iVar8 = FUN_00a81330();
  if (((iVar8 != 0) && (iVar8 = FUN_00a7c8a0(), iVar8 != 0)) &&
     (*(undefined4 **)(iVar8 + 0x370) != (undefined4 *)0x0)) {
    *(uint *)(iVar8 + 0x364) = *(uint *)(iVar8 + 0x364) | 0x400000;
    **(undefined4 **)(iVar8 + 0x370) = 0;
  }
  param_1[0x370] = param_1[0x370] | 0x40000;
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
    if ((param_1[0x370] & 0x80000U) == 0) goto LAB_00575e5e;
    iVar5 = 0x80000;
  }
  FUN_0055f9e0(iVar5);
LAB_00575e5e:
  iVar5 = FUN_0055c2c0();
  if (((iVar5 == 0) || (param_1[0x139] != 0)) && (param_1[0x66c] != 0)) {
    param_1[0x66c] = 0;
    FUN_00a8c9b0(0,0x197,0,0);
  }
  return;
}

// 00575F30  FUN_00575f30  size=567  [callgraph]
void __fastcall FUN_00575f30(int param_1)

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
  *(undefined4 *)(param_1 + 0xe6c) = 0;
  local_188 = 0;
  do {
    puVar1 = (undefined4 *)(param_1 + 0xdcc + local_188 * 0x14);
    if (*(int *)(param_1 + 0xdcc + local_188 * 0x14) == 0) {
      if ((float)puVar1[1] <= 1.0 - (float)iVar3 / (float)iVar4) {
        *puVar1 = 1;
        *(int *)(param_1 + 0xe6c) = *(int *)(param_1 + 0xe6c) + 1;
        FUN_0055c380(local_188);
        if (((local_188 == 6) || (local_188 == 5)) && ((*(uint *)(param_1 + 0xdc0) & 0x800000) != 0)
           ) {
          *(uint *)(param_1 + 0xdc0) = *(uint *)(param_1 + 0xdc0) & 0xff7fffff;
          FUN_00a93910(1);
        }
        if (local_188 == 4) {
          FUN_0055e200();
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
          FUN_0056b7f0(iVar2,local_180,&local_170,0x437a0000,0);
          local_18c = local_18c + 1;
          iVar6 = iVar6 + 1;
        } while (iVar6 < 3);
        if (*(int *)(&DAT_016417d4 + local_188 * 4) != 0xffff) {
          FUN_00aa92c0(*(int *)(&DAT_016417d4 + local_188 * 4));
        }
        if (*(int *)(param_1 + 0x19b0) == 0) {
          *(undefined4 *)(param_1 + 0x19b0) = 1;
          uVar5 = FUN_00a8c890(0);
          FUN_004117d0(0x197,param_1,uVar5);
          FUN_00a963e0(local_160);
        }
      }
    }
    else {
      *(int *)(param_1 + 0xe6c) = *(int *)(param_1 + 0xe6c) + 1;
    }
    local_188 = local_188 + 1;
    if (7 < local_188) {
      return;
    }
  } while( true );
}

// 00576170  FUN_00576170  size=848  [callgraph]
void __fastcall FUN_00576170(int *param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  float10 fVar5;
  undefined1 local_120 [284];
  
  uVar4 = 0;
  if ((param_1[0x370] & 0x100000U) != 0) {
    uVar4 = 0x40;
  }
  switch(param_1[0x187]) {
  case 0:
    uVar4 = uVar4 | 0x8000000;
    FUN_00aa4080(0x133,0,0x3e088889,0x3f800000,uVar4,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_00aa4080(0x134,0,0x3d088889,0x3f800000,uVar4,0xbf800000,0x3f800000);
      FUN_005736c0();
      uVar4 = param_1[0x370];
      if (param_1[0x128] == 1) {
        FUN_00eaa6e0(0,0);
        FUN_00e01eb0(param_1 + 0x3f4);
        uVar2 = FUN_00a81330(((uVar4 >> 0xb & 1) != 0) + '\x06',local_120);
        FUN_00e028c0(uVar2);
      }
      param_1[0x248] = (int)((float)param_1[0x5ed] * 60.0);
      FUN_00562410();
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x370] = param_1[0x370] | 0x20;
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_0055add0(param_1 + 0x5e4,0x40900000,0);
    FUN_005625d0(param_1 + 0x5e4,1);
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] <= 0.0) {
      FUN_00aa4080(0x135,0,0x3e088889,0x3f800000,uVar4 | 0x8000000,0xbf800000,0x3f800000);
      FUN_00560240(0);
      FUN_00560210();
      FUN_0056e620();
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    fVar5 = (float10)FUN_0055a7a0();
    if ((float10)0.87266463 <= fVar5) {
      FUN_00aa4080(0x138,0,0x3e888889,0x3f800000,uVar4 | 0x8000000,0xbf800000,0x3f800000);
      FUN_00560240(0x41f00000);
      FUN_00560210();
      param_1[0x187] = 4;
      return;
    }
    break;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      param_1[0x5ea] = (int)((float)param_1[0x5f1] * 60.0);
      FUN_00aa4080(0x138,0,0x3d888889,0x3f800000,uVar4 | 0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 005764E0  FUN_005764e0  size=526  [callgraph]
void __fastcall FUN_005764e0(int param_1)

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
  pfVar9 = (float *)(param_1 + 0x1648);
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
LAB_00576646:
                    iVar6 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
                    goto LAB_0057664b;
                  }
                  if (bVar2 == 0) break;
                  bVar2 = pbVar5[1];
                  bVar13 = bVar2 < pbVar8[1];
                  if (bVar2 != pbVar8[1]) goto LAB_00576646;
                  pbVar8 = pbVar8 + 2;
                  pbVar5 = pbVar5 + 2;
                } while (bVar2 != 0);
                iVar6 = 0;
LAB_0057664b:
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

// 005766F0  FUN_005766f0  size=109  [callgraph]
void __fastcall FUN_005766f0(int param_1)

{
  undefined4 uVar1;
  undefined1 local_160 [348];
  
  FUN_0056c680();
  FUN_0055c380(0xffffffff);
  if (*(int *)(param_1 + 0x19b0) == 0) {
    *(undefined4 *)(param_1 + 0x19b0) = 1;
    uVar1 = FUN_00a8c890(0);
    FUN_004117d0(0x197,param_1,uVar1);
    FUN_00a963e0(local_160);
  }
  FUN_0055e200();
  FUN_00aa92c0(399);
  return;
}

// 00577DD0  Em0220::vf40  size=2870  [class]
undefined4 __fastcall Em0220::vf40(int *param_1)

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
  int aiStack_1f0 [2];
  undefined4 uStack_1e8;
  undefined4 local_1e4;
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
  
  iVar2 = BehaviorEmBase::vf40();
  if (iVar2 != 0) {
    param_1[0x370] = 0;
    FUN_00a7c950();
    FUN_00a7c950();
    param_1[0x4dc] = 0;
    param_1[0x4c9] = 0;
    param_1[0x4dd] = 0;
    param_1[0x4c8] = 0;
    param_1[0x4ed] = 0;
    param_1[0x4ee] = 0;
    param_1[0x4e0] = 0;
    param_1[0x4ef] = 0;
    param_1[0x4e1] = -1;
    param_1[0x4f0] = 0;
    param_1[0x4e2] = -1;
    param_1[0x4f1] = 0;
    param_1[0x4e3] = -1;
    param_1[0x4f2] = 0;
    param_1[0x4e4] = 0;
    param_1[0x4e8] = 0;
    param_1[0x4f7] = param_1[0x22a];
    param_1[0x4e9] = 0;
    param_1[0x4ec] = 0;
    param_1[0x4f3] = 0;
    param_1[0x54d] = 0;
    param_1[0x4f4] = 0;
    param_1[0x4f8] = 0;
    param_1[0x551] = 0x44160000;
    param_1[0x4f9] = 0;
    param_1[0x4fa] = 0;
    param_1[0x5d9] = 0;
    param_1[0x4fb] = 0;
    param_1[0x5e8] = 0;
    param_1[0x54c] = 0;
    param_1[0x5e9] = 0;
    param_1[0x54f] = 0;
    param_1[0x550] = 0;
    param_1[0x5ea] = 0x43340000;
    param_1[0x554] = 0;
    param_1[0x5d7] = 0;
    param_1[0x63c] = 0;
    param_1[0x5de] = 0;
    param_1[0x63f] = 0;
    param_1[0x61c] = 0;
    param_1[0x640] = 0;
    param_1[0x61e] = 0;
    param_1[0x622] = 1;
    param_1[0x642] = 0x3f800000;
    param_1[0x623] = 0;
    param_1[0x62c] = 0;
    param_1[0x643] = 0;
    param_1[0x62d] = 0;
    param_1[0x665] = 0;
    param_1[0x62f] = 0;
    param_1[0x66e] = 0;
    param_1[0x632] = 0;
    param_1[0x634] = 0;
    param_1[0x672] = 0x3f800000;
    param_1[0x641] = -1;
    param_1[0x667] = 0;
    param_1[0x630] = 0x44160000;
    param_1[0x668] = 0;
    param_1[0x669] = 0;
    param_1[0x66c] = 0;
    param_1[0x670] = 0;
    param_1[0x674] = 4;
    param_1[0x675] = 0;
    param_1[0x676] = 0;
    param_1[0x677] = 0;
    param_1[0x678] = 0;
    param_1[0x679] = 0x44610000;
    param_1[0x5f4] = 0;
    param_1[0x5f5] = 0;
    param_1[0x5f6] = 0;
    param_1[0x5f7] = 0;
    param_1[0x5f8] = 0;
    param_1[0x5f9] = 0;
    param_1[0x5fa] = 0;
    param_1[0x5fb] = 0;
    param_1[0x5fc] = 0;
    param_1[0x5fd] = 0;
    param_1[0x5fe] = 0;
    param_1[0x5ff] = 0;
    param_1[0x600] = 0;
    param_1[0x601] = 0;
    param_1[0x602] = 0;
    param_1[0x603] = 0;
    param_1[0x604] = 0;
    param_1[0x605] = 0;
    param_1[0x606] = 0;
    param_1[0x607] = 0;
    param_1[0x608] = 0;
    param_1[0x609] = 0;
    param_1[0x60a] = 0;
    param_1[0x60b] = 0;
    param_1[0x60c] = 0;
    param_1[0x60d] = 0;
    param_1[0x60e] = 0;
    param_1[0x60f] = 0;
    param_1[0x610] = 0;
    param_1[0x611] = 0;
    param_1[0x612] = 0;
    param_1[0x613] = 0;
    param_1[0x614] = 0;
    param_1[0x615] = 0;
    param_1[0x616] = 0;
    param_1[0x617] = 0;
    param_1[0x618] = 0;
    param_1[0x619] = 0;
    param_1[0x61a] = 0;
    param_1[0x61b] = 0;
    param_1[0x464] = 0;
    param_1[0x470] = 0;
    param_1[0x465] = 0;
    param_1[0x466] = 0;
    param_1[0x471] = 0;
    param_1[0x472] = 0;
    param_1[0x47c] = 0;
    param_1[0x47d] = 0;
    param_1[0x47e] = 0;
    param_1[0x488] = 0;
    param_1[0x489] = 0;
    param_1[0x48a] = 0;
    param_1[0x494] = 0;
    param_1[0x495] = 0;
    param_1[0x496] = 0;
    param_1[0x4a0] = 0;
    param_1[0x4a1] = 0;
    param_1[0x4a2] = 0;
    param_1[0x4ac] = 0;
    param_1[0x4ad] = 0;
    param_1[0x4ae] = 0;
    param_1[0x4b8] = 0;
    param_1[0x4b9] = 0;
    param_1[0x4ba] = 0;
    if ((param_1[0x1db] != 0) && (uVar7 = 0, *(int *)(param_1[0x1db] + 0x18) != 0)) {
      iVar2 = 0;
      piVar6 = param_1 + 0x644;
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
    FUN_00acf600(0x2022f,"Em0220Body");
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
    param_1[0x631] = 0;
    local_1e0 = FUN_00a8d2a0();
    if ((param_1[0xcc] != 0) && (*(int *)(param_1[0xcc] + 0xcc) == 0)) {
      local_1e4 = 0;
      iVar2 = FUN_00a54ae0(&local_1e4,param_1 + 0x125,"_col.hkx");
      if (iVar2 != 0) {
        iVar3 = FUN_00dd3500(0x3c,&DAT_01b7bd48);
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = RigidBodyCollection::RigidBodyCollection_2();
        }
        param_1[0x1ec] = iVar3;
        iVar2 = FUN_008f6410(param_1[0x13c],iVar2,local_1e4);
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
            (**(code **)(*(int *)param_1[0x1ec] + 300))(&uStack_1e8,iVar3);
            if ((aiStack_1f0[0] != 0) && (iVar2 = FUN_009124a0(), iVar2 != 0)) {
              uVar5 = FUN_009124a0(&DAT_01640b88);
              iVar2 = FUN_00fdbbd0(uVar5);
              if (iVar2 != 0) {
                Behavior::addDefenseCollisionFromRigidBody(aiStack_1f0,2,uStack_1e8);
              }
            }
            iVar3 = iVar3 + 1;
            iVar2 = (**(code **)(*(int *)param_1[0x1ec] + 0xc))();
          } while (iVar3 < iVar2);
        }
        lib::StaticArray<Collision*,256>::StaticArray<Collision*,256>_2(1);
        FUN_00a938c0(1);
        param_1[0x370] = param_1[0x370] | 0x800000;
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
        FUN_00a93a00(iVar2,local_1e0);
        FUN_00d7b0f0();
        FUN_00d7b890();
      }
      param_1[0x631] = 1;
      FUN_0055d9b0();
      piVar6 = (int *)FUN_00ac89d0();
      if (piVar6 == (int *)0x0) {
        piVar6 = param_1;
      }
      FUN_00e01ca0();
      uStack_50 = 0;
      uStack_1c = 0xffffffff;
      FUN_00dffad0(0);
      FUN_00e020f0(piVar6[0x13c]);
      FUN_00dffb30(param_1 + 0x39c);
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
    uStack_1c8 = 0;
    uStack_1ac = 0;
    uStack_1c4 = 0;
    uStack_1a8 = 0;
    uStack_1a0 = 0;
    uStack_194 = 0;
    uStack_19c = 0;
    uStack_1bc = 0;
    uStack_198 = 0;
    uVar5 = 0x42c80000;
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
    param_1[0x58d] = 0x3c8efa35;
    local_200 = 0;
    local_1fc = 0x3e32b8c2;
    local_1f8 = 0;
    FUN_00a83270(&local_200,0x3f9c61aa,0x3f490fdb);
    iVar2 = FUN_0055d7c0();
    if (iVar2 != 0) {
      FUN_0055ad10();
      FUN_0055d8c0();
      FUN_0055df70();
      piVar6 = param_1;
      FUN_00c1cf50(param_1);
      FUN_00c54720(piVar6);
      param_1[0x20b] = 6;
      FUN_0055c750();
      FUN_0055a3e0();
      if ((param_1[0x128] != 0) || ((*(byte *)(param_1 + 0x2c0) & 2) == 0)) {
        param_1[0x205] = 4;
        FUN_00a82ac0(param_1[0x13c],4,0,0xffffffff);
      }
      FUN_00ac9420("tentacle_a");
      FUN_00ac94e0("tentacle_b");
      param_1[0x61f] = 0;
      if (param_1[0x1db] != 0) {
        *(undefined4 *)(param_1[0x1db] + 0xbac) = 1;
        *(undefined4 *)(param_1[0x1db] + 0xbc0) = 0x3e3851ec;
      }
      (**(code **)(*param_1 + 0x34c))();
      param_1[0x66b] = 0;
      if ((*(byte *)(param_1 + 0x2c0) & 0x10) != 0) {
        pcVar1 = *(code **)(*param_1 + 0x110);
        param_1[0x66b] = 0x42700000;
        (*pcVar1)(1);
        FUN_00aa92c0(0x208);
        FUN_0055f9e0(0x10012);
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

// 00578910  Em0220::vf54  size=16  [class]
void Em0220::vf54(void)

{
  FUN_005764e0();
  BehaviorEmBase::vf54();
  return;
}

// 00578920  Em0220::vf264  size=983  [class]
undefined4 __thiscall Em0220::vf264(int param_1,undefined4 param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  FUN_0040ac60(param_2);
  uVar6 = 0;
  if ((*(int *)(param_1 + 0x4a0) == 0) && ((*(byte *)(param_1 + 0xb00) & 2) != 0)) {
    FUN_00aa0ba0(*(undefined4 *)(param_1 + 0xb08),*(undefined4 *)(param_1 + 0xb9c));
    if (((*(int *)(param_1 + 0x808) != 0) && (iVar5 = FUN_00c9dab0(), iVar5 != 0)) &&
       (*(int *)(iVar5 + 8) == 2)) {
      *(undefined4 *)(param_1 + 0x13ec) = 1;
      do {
        puVar7 = (undefined4 *)(*(int *)(iVar5 + 0xc) + uVar6);
        cVar4 = FUN_00c9d9a0(1);
        if (cVar4 == '\0') {
          *(undefined4 *)(param_1 + 0x1400) = *puVar7;
          *(undefined4 *)(param_1 + 0x1404) = puVar7[1];
          *(undefined4 *)(param_1 + 0x1408) = puVar7[2];
          *(undefined4 *)(param_1 + 0x140c) = 0x3f800000;
        }
        else {
          *(undefined4 *)(param_1 + 0x13f0) = *puVar7;
          *(undefined4 *)(param_1 + 0x13f4) = puVar7[1];
          *(undefined4 *)(param_1 + 0x13f8) = puVar7[2];
          *(undefined4 *)(param_1 + 0x13fc) = 0x3f800000;
        }
        uVar6 = uVar6 + 0x10;
      } while (uVar6 < 0x20);
      local_20 = *(float *)(param_1 + 0x13f0) - *(float *)(param_1 + 0x1400);
      pfVar1 = (float *)(param_1 + 0x1400);
      local_18 = *(float *)(param_1 + 0x13f8) - *(float *)(param_1 + 0x1408);
      local_14 = *(float *)(param_1 + 0x13fc) - *(float *)(param_1 + 0x140c);
      local_1c = 0.0;
      fVar2 = local_18 * local_18 + local_20 * local_20;
      if (fVar2 < 0.0 == (fVar2 == 0.0)) {
        FUN_00ddf460(&local_20,&local_20);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        local_18 = 0.0;
        local_1c = 1.0;
        local_20 = 0.0;
      }
      fVar2 = local_20 * 0.15;
      local_18 = local_18 * 0.15;
      local_14 = local_14 * 0.15;
      *pfVar1 = *pfVar1 - fVar2;
      *(float *)(param_1 + 0x1404) = *(float *)(param_1 + 0x1404) - local_1c * 0.15;
      *(float *)(param_1 + 0x1408) = *(float *)(param_1 + 0x1408) - local_18;
      *(float *)(param_1 + 0x140c) = *(float *)(param_1 + 0x140c) - local_14;
      fVar3 = local_1c * 0.15 * 0.0;
      local_20 = local_18 - fVar3;
      local_1c = fVar2 * 0.0 - local_18 * 0.0;
      local_18 = fVar3 - fVar2;
      fVar2 = local_18 * local_18 + local_20 * local_20 + local_1c * local_1c;
      if (fVar2 < 0.0 == (fVar2 == 0.0)) {
        FUN_00ddf460(&local_20,&local_20);
      }
      else {
        FUN_00dd5650(&DAT_0163d0ac);
        local_18 = 0.0;
        local_20 = 0.0;
        local_1c = 1.0;
      }
      local_20 = local_20 * 0.18;
      local_1c = local_1c * 0.18;
      local_18 = local_18 * 0.18;
      local_14 = local_14 * 0.18;
      *pfVar1 = *pfVar1 + local_20;
      *(float *)(param_1 + 0x1404) = *(float *)(param_1 + 0x1404) + local_1c;
      *(float *)(param_1 + 0x1408) = *(float *)(param_1 + 0x1408) + local_18;
      *(float *)(param_1 + 0x140c) = local_14 + *(float *)(param_1 + 0x140c);
      FUN_00572c50(param_1 + 0x1410,param_1 + 0x13f0,pfVar1,0x40900000,0x40800000,0);
    }
    cVar4 = '\x02';
  }
  else {
    *(undefined4 *)(param_1 + 0x19e8) = 0;
    if (*(int *)(param_1 + 0xb84) == 1) {
      FUN_00aa0ba0(*(undefined4 *)(param_1 + 0xb08),*(undefined4 *)(param_1 + 0xb9c));
      cVar4 = *(char *)(param_1 + 0xb24);
      if ((*(byte *)(param_1 + 0xb00) & 0x20) != 0) {
        *(undefined4 *)(param_1 + 0x19e8) = 1;
      }
      uVar8 = 0xe0001;
    }
    else {
      if (*(int *)(param_1 + 0xb84) != 2) goto LAB_00578c9f;
      cVar4 = *(char *)(param_1 + 0xb24);
      if ((*(byte *)(param_1 + 0xb00) & 0x20) != 0) {
        *(undefined4 *)(param_1 + 0x19e8) = 1;
      }
      uVar8 = 0xe0000;
    }
    FUN_0055f9e0(uVar8);
    if (cVar4 == -1) goto LAB_00578c9f;
  }
  iVar5 = FUN_00d46690(cVar4);
  if (iVar5 != 0) {
    FUN_00a5dcc0(iVar5);
  }
LAB_00578c9f:
  if ((*(int *)(param_1 + 0x4a0) == 0) && ((*(byte *)(param_1 + 0xb00) & 2) != 0)) {
    FUN_0055f9e0(0x1000b);
  }
  FUN_00aa0920(*(undefined4 *)(param_1 + 0xb0c));
  if (((*(byte *)(param_1 + 0xb00) & 0x10) != 0) && (*(int *)(param_1 + 0x19e8) == 0)) {
    FUN_0055f9e0(0x10012);
  }
  return 1;
}

// 00578D00  FUN_00578d00  size=116  [between]
void __fastcall FUN_00578d00(int param_1)

{
  undefined1 local_160 [348];
  
  if ((*(byte *)(param_1 + 0xdc2) & 1) == 0) {
    FUN_004039a0(2,param_1,0);
    FUN_00a963e0(local_160);
    FUN_00e5e0c0("em0220_se_dmg_spark",param_1,0xffffffff,0);
    *(uint *)(param_1 + 0xdc0) = *(uint *)(param_1 + 0xdc0) | 0x10000;
    (**(code **)(*(int *)(param_1 + 0xe70) + 8))(0x3f800000,0,0);
  }
  return;
}

// 00578D80  FUN_00578d80  size=1093  [between]
void __fastcall FUN_00578d80(int param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  float10 fVar5;
  
  if (((*(int *)(param_1 + 0x61c) != 0) && (*(int *)(param_1 + 0x18c8) == 0)) &&
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
        FUN_00568400();
        return;
      }
      iVar3 = FUN_0056abb0();
      if (iVar3 == 0) {
        FUN_00573d80();
        return;
      }
      if (((*(int *)(param_1 + 0x1280) != 0) &&
          ((*(uint *)(param_1 + 0x1384) & 0xffff0000) != 0x50000)) &&
         (uVar4 = FUN_00dde2d0(0,100), (uVar4 & 1) != 0)) {
        uVar4 = FUN_00dde2d0(0,100);
        if ((uVar4 & 1) == 0) {
          FUN_0055f9e0(0x50002);
          return;
        }
        FUN_0055f9e0(0x50001);
        return;
      }
      iVar3 = FUN_0055ceb0();
      if ((iVar3 == 0) &&
         (fVar1 = *(float *)(param_1 + 0x19b8), !NAN(fVar1) && 10.0 < fVar1 != (fVar1 == 10.0))) {
        if (81.0 < *(float *)(param_1 + 0xa90)) {
          FUN_0055f9e0(0x10003);
          return;
        }
        FUN_0055f9e0(0x10013);
        return;
      }
      iVar3 = FUN_0055a010(0x41700000);
      if ((iVar3 == 0) || (iVar3 = FUN_0055ebe0(), iVar3 == 0)) {
        fVar5 = (float10)FUN_0055a7a0();
        if ((float10)1.0471976 < fVar5 != ((float10)1.0471976 == fVar5)) {
          uVar4 = FUN_00dde2d0(0,100);
          if (((uVar4 & 1) != 0) && (*(int *)(param_1 + 0x1190) == 0)) {
            FUN_0055f9e0(0x1000d);
            return;
          }
          fVar5 = (float10)(float)fVar5;
        }
        if ((float10)0.7853982 <= fVar5) {
          if (*(int *)(param_1 + 0x1778) < 4) {
            FUN_0055f9e0(0x10005);
            return;
          }
LAB_00578f58:
          FUN_0055f9e0(0x50000);
          return;
        }
        if ((((*(int *)(param_1 + 0x1280) == 0) &&
             (fVar1 = *(float *)(param_1 + 0xa90), !NAN(fVar1) && 64.0 < fVar1 != (fVar1 == 64.0)))
            && (*(float *)(param_1 + 0xa90) <= 506.25)) &&
           ((*(float *)(param_1 + 0x17a8) <= 0.0 && (iVar3 = FUN_00c158c0(), iVar3 != 0)))) {
          *(undefined4 *)(param_1 + 0x175c) = 0;
          *(uint *)(param_1 + 0xdc0) = *(uint *)(param_1 + 0xdc0) & 0xfffff7ff;
          uVar4 = FUN_00dde2d0(0,100);
          if ((uVar4 & 3) == 0) {
            *(uint *)(param_1 + 0xdc0) = *(uint *)(param_1 + 0xdc0) | 0x800;
          }
          FUN_0055f9e0(0x2000a);
          return;
        }
        if (64.0 < *(float *)(param_1 + 0xa90)) {
          if (*(float *)(param_1 + 0xa90) <= 225.0) {
            if (((*(float *)(param_1 + 0x1544) <= 0.0) &&
                (fVar1 = *(float *)(param_1 + 0xa90), !NAN(fVar1) && 64.0 < fVar1 != (fVar1 == 64.0)
                )) && (iVar3 = FUN_0056eb60(), iVar3 != 0)) {
              *(float *)(param_1 + 0x1544) = *(float *)(param_1 + 0x17c0) * 60.0;
              *(uint *)(param_1 + 0xdc0) = *(uint *)(param_1 + 0xdc0) | 0x10;
              sVar2 = FUN_00dde2d0(3,5);
              *(int *)(param_1 + 0x1540) = (int)sVar2;
              FUN_0055f9e0(0x20008);
              return;
            }
            fVar1 = *(float *)(param_1 + 0xa90);
            if (((!NAN(fVar1) && 49.0 < fVar1 != (fVar1 == 49.0)) &&
                (fVar5 = (float10)FUN_00dde300(0,0x3f800000),
                fVar5 < (float10)*(float *)(param_1 + 0x1548) !=
                (fVar5 == (float10)*(float *)(param_1 + 0x1548)))) &&
               (10.0 < *(float *)(param_1 + 0x18f0))) {
              if (*(int *)(param_1 + 5000) == 0x20007) {
                *(int *)(param_1 + 0x1550) = *(int *)(param_1 + 0x1550) + 1;
              }
              else {
                *(undefined4 *)(param_1 + 0x1550) = 0;
              }
              if (*(int *)(param_1 + 0x1550) < *(int *)(param_1 + 0x154c)) goto LAB_00579167;
            }
          }
        }
        else if ((16.0 < *(float *)(param_1 + 0xa90)) ||
                (fVar1 = *(float *)(param_1 + 0x924) - *(float *)(param_1 + 0x910),
                *(float *)(param_1 + 0x924) = fVar1, fVar1 <= 0.0)) {
          uVar4 = FUN_00dde2d0(0,100);
          if ((uVar4 & 1) != 0) {
LAB_00579167:
            FUN_0055f9e0(0x20007);
            return;
          }
          if (*(int *)(param_1 + 0x11c0) != 0) {
            FUN_0055f9e0(0x10008);
            return;
          }
          goto LAB_00578f58;
        }
        fVar1 = *(float *)(param_1 + 0xa90);
        if (!NAN(fVar1) && 400.0 < fVar1 != (fVar1 == 400.0)) {
          FUN_0056dd80();
          return;
        }
        if ((*(int *)(param_1 + 0x1280) != 0) &&
           (fVar1 = *(float *)(param_1 + 0xa90), !NAN(fVar1) && 49.0 < fVar1 != (fVar1 == 49.0))) {
          FUN_0056dd80();
          return;
        }
      }
      else {
        FUN_0055f9e0(0x20003);
      }
    }
  }
  return;
}

// 005791D0  Em0220::vf32C  size=1471  [class]
int __fastcall Em0220::vf32C(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  int *piVar7;
  uint uVar8;
  int *piVar9;
  float10 fVar10;
  undefined4 uVar11;
  int *local_64;
  int local_60;
  int local_5c;
  int local_58;
  undefined4 local_50;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [28];
  
  iVar4 = FUN_00a8ef10();
  if ((iVar4 != 0) || ((*(byte *)(param_1 + 0x130) & 1) == 0)) {
    return 0;
  }
  iVar4 = 0;
  local_5c = 0;
  local_60 = 0;
  local_58 = 1;
  do {
    if (local_5c != 0) {
      return 1;
    }
    param_1[0x1a1] = 0;
    FUN_00ac2080(local_58);
    local_50 = 0x41200000;
    piVar9 = (int *)param_1[0x19f];
    local_64 = piVar9 + param_1[0x1a1] * 0x54;
    for (; piVar9 != local_64; piVar9 = piVar9 + 0x54) {
      iVar5 = *piVar9;
      if (((((iVar5 != 0) && (iVar5 != 1)) && (iVar5 != 2)) &&
          ((iVar5 != 0x1b0 && (iVar5 != 0x147)))) &&
         (iVar5 = FUN_00a81330(), iVar5 != param_1[0x13c])) {
        if (iVar5 != 0) {
          iVar4 = FUN_00a7c8a0();
          local_60 = iVar4;
        }
        iVar5 = FUN_00570310(piVar9);
        if (iVar5 != 0) {
          if (iVar4 != 0) {
            param_1[0x628] = *(int *)(iVar4 + 0x40);
            param_1[0x629] = *(int *)(iVar4 + 0x44);
            param_1[0x62a] = *(int *)(iVar4 + 0x48);
            param_1[0x62b] = *(int *)(iVar4 + 0x4c);
          }
          param_1[0x624] = piVar9[8];
          param_1[0x625] = piVar9[9];
          local_5c = 1;
          param_1[0x626] = piVar9[10];
          param_1[0x627] = piVar9[0xb];
          (**(code **)(*param_1 + 0x198))(iVar4,piVar9,0x100);
          break;
        }
        if (param_1[0x677] != 0) {
          return 0;
        }
        if ((*piVar9 == 0x57) && (piVar9[1] == 0)) {
          (**(code **)(*param_1 + 0x198))(iVar4,piVar9,1);
        }
        else {
          iVar5 = FUN_00a8f040(piVar9);
          if (iVar5 == 0) {
            iVar5 = FUN_00a8eea0();
            if ((((0 < iVar5) && (iVar4 != 0)) && ((*(byte *)(iVar4 + 0x4c0) & 0x10) != 0)) &&
               (piVar9[0x4a] == 0)) {
              (**(code **)(*param_1 + 0x21c))(iVar4,(char)piVar9[4],0x3c23d70a,0);
              local_50 = 0x40000000;
              FUN_0043fa90();
            }
            fVar10 = (float10)FUN_00ddba30((float)piVar9[0xc] - (float)param_1[0x25]);
            param_1[0x245] = (int)(float)fVar10;
            param_1[0x4ee] = 0;
            if (iVar4 != 0) {
              fStack_40 = *(float *)(iVar4 + 0x40) - (float)param_1[0x10];
              fStack_38 = *(float *)(iVar4 + 0x48) - (float)param_1[0x12];
              fStack_34 = *(float *)(iVar4 + 0x4c) - (float)param_1[0x13];
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
                pfVar6 = (float *)FUN_00a925a0(auStack_30);
                fVar1 = pfVar6[2] * fStack_38 + fStack_40 * *pfVar6 + pfVar6[1] * fStack_3c;
                pfVar6 = (float *)FUN_00a925a0(auStack_20);
                fVar2 = pfVar6[2] * fStack_3c - fStack_38 * pfVar6[1];
                fVar3 = fStack_38 * *pfVar6 - fStack_40 * pfVar6[2];
                fStack_38 = fStack_40 * pfVar6[1] - *pfVar6 * fStack_3c;
                fStack_40 = fVar2;
                fStack_3c = fVar3;
                if (fVar3 <= 0.0) {
                  fVar10 = (float10)FUN_00ddbb50(fVar1);
                  param_1[0x4ee] = (int)(float)-fVar10;
                }
                else {
                  fVar10 = (float10)FUN_00ddbb50(fVar1);
                  param_1[0x4ee] = (int)(float)fVar10;
                }
              }
            }
            if (*piVar9 == 0x93) {
              (**(code **)(*param_1 + 0x198))(iVar4,piVar9,0x40000);
              return 0;
            }
            local_5c = 1;
            iVar4 = FUN_00a8eea0();
            if ((param_1[0x370] & 0x2000U) == 0) {
              local_64 = (int *)piVar9[1];
              iVar5 = FUN_005602d0();
              if ((iVar5 != 0) && (local_64 = (int *)((int)local_64 / 5), (int)local_64 < 2)) {
                local_64 = (int *)0x1;
              }
              piVar7 = local_64;
              if ((((piVar9[0x23] & 0x200U) != 0) && (iVar5 = FUN_0055ceb0(), iVar5 != 0)) &&
                 (piVar7 = (int *)FUN_00fdbc60(), (int)piVar7 < 2)) {
                piVar7 = (int *)0x1;
              }
              if ((*(byte *)(piVar9 + 0x23) & 0x10) == 0) {
                (**(code **)(*param_1 + 0x30c))(piVar7,0);
              }
            }
            (**(code **)(*param_1 + 0x220))(local_50);
            iVar5 = FUN_00a8eea0();
            iVar4 = iVar4 - iVar5;
            param_1[0x4ed] = 0;
            param_1[0x4e9] = param_1[0x4e9] + iVar4;
            param_1[0x667] = param_1[0x667] + iVar4;
            param_1[0x4e8] = param_1[0x4e8] + 1;
            param_1[0x4f4] = param_1[0x4f4] + 1;
            param_1[0x54d] = (int)((float)iVar4 / (float)param_1[0x21d] + (float)param_1[0x54d]);
            param_1[0x665] = param_1[0x664];
            iVar4 = FUN_0055ceb0();
            if (iVar4 == 0) {
              if ((*(byte *)(piVar9 + 0x23) & 2) == 0) {
                FUN_00575f30();
              }
              else {
                FUN_005766f0();
              }
            }
            else {
              FUN_0056c250(0xbf800000);
            }
            uVar11 = 0;
            iVar4 = FUN_005703d0(piVar9,&stack0xffffff98);
            if (iVar4 != 0) {
              FUN_00565d40();
            }
            iVar4 = FUN_00a8eea0();
            if ((iVar4 < 1) && (param_1[0x139] == 0)) {
              uVar8 = (uint)piVar9[0x24] >> 0xb & 1;
              uVar11 = 0;
              if ((piVar9[0x23] & 0x100000U) != 0) {
                uVar11 = 2;
              }
              if ((piVar9[0x24] & 0x200U) != 0) {
                uVar11 = 4;
              }
              (**(code **)(*param_1 + 0x344))(7,uVar11,uVar8);
              FUN_0055b180();
              if ((uVar8 != 0) && ((*(byte *)((int)piVar9 + 0x92) & 1) != 0)) {
                piVar7 = (int *)FUN_00c209f0();
                (**(code **)(*piVar7 + 0x14))(0xe);
              }
              uVar11 = 0x80;
              param_1[0x139] = 1;
            }
            (**(code **)(*param_1 + 0x198))(local_64,piVar9,uVar11);
            iVar4 = local_60;
            break;
          }
        }
      }
    }
    local_58 = local_58 + -1;
    if (local_58 < 0) {
      return local_5c;
    }
  } while( true );
}

// 00579790  FUN_00579790  size=649  [callgraph]
void __fastcall FUN_00579790(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *local_4;
  
  local_4 = param_1;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0xb5,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00578d00();
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
  if (((param_1[0x250] == 0) && (param_1[0x128] == 0)) && ((*(byte *)(param_1 + 0x2c0) & 2) != 0)) {
    iVar1 = FUN_00a8c760(0xe);
    if (iVar1 != 0) {
      iVar1 = FUN_00e5e0c0("Boss4000_151010",param_1,0xffffffff,0);
      param_1[0x250] = param_1[0x250] + 1;
      param_1[0x669] = iVar1;
    }
  }
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    param_1[0x1af] = 1;
    if ((param_1[0x128] == 0) && ((*(byte *)(param_1 + 0x2c0) & 2) != 0)) {
      local_4 = (int *)param_1[0x13c];
      param_1[0x187] = param_1[0x187] + 1;
      DebrisExplodeManager::addHandle(&local_4,1);
      return;
    }
    if (param_1[0x294] != 0) {
      FUN_00ac8e10(1);
      if ((*(byte *)((int)param_1 + 0xdc2) & 1) != 0) {
        FUN_00a8c9b0(0,2,0x3f800000,0);
        param_1[0x370] = param_1[0x370] & 0xfffeffff;
      }
      if ((param_1[0x370] & 0x8000U) == 0) {
        FUN_00e02240(param_1[0x13c],3);
        param_1[0x370] = param_1[0x370] | 0x8000;
      }
      (**(code **)(*param_1 + 0x20))();
      if (param_1[0x66c] != 0) {
        param_1[0x66c] = 0;
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
      FUN_0055f9e0(0x60002);
      if (param_1[0x1d9] != 0) {
        FUN_008e3c10();
      }
      iVar1 = FUN_00e5e0c0("em0220_se_dmg_explosion",param_1,0xffffffff,0);
      param_1[0x66f] = iVar1;
      FUN_00940450(param_1[0x20f]);
      if ((param_1[0x128] != 0) || ((*(byte *)(param_1 + 0x2c0) & 2) == 0)) {
        (**(code **)(*param_1 + 0x364))(0xffffffff);
      }
    }
  }
  return;
}

// 00579C30  FUN_00579c30  size=1121  [callgraph]
void __fastcall FUN_00579c30(int param_1)

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
  if (*(int *)(param_1 + 0x18c8) != 0) {
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
    FUN_00568400();
    return;
  }
  iVar4 = FUN_0056abb0();
  if (iVar4 == 0) {
    FUN_00573d80();
    return;
  }
  if (((*(int *)(param_1 + 0x1280) != 0) && ((*(uint *)(param_1 + 0x1384) & 0xffff0000) != 0x50000))
     && (uVar5 = FUN_00dde2d0(0,100), (uVar5 & 1) != 0)) {
    uVar5 = FUN_00dde2d0(0,100);
    if ((uVar5 & 1) == 0) {
LAB_00579d07:
      FUN_0055f9e0(0x50002);
      return;
    }
LAB_0057a084:
    FUN_0055f9e0(0x50001);
    return;
  }
  iVar4 = FUN_0055ceb0();
  if ((iVar4 == 0) &&
     (fVar1 = *(float *)(param_1 + 0x19b8), !NAN(fVar1) && 30.0 < fVar1 != (fVar1 == 30.0))) {
    if (81.0 < *(float *)(param_1 + 0xa90)) {
      FUN_0055f9e0(0x10003);
      return;
    }
    FUN_0055f9e0(0x10013);
    return;
  }
  iVar4 = FUN_0055ebe0();
  if (iVar4 != 0) {
    FUN_0055f9e0(0x20003);
    return;
  }
  fVar6 = (float10)FUN_0055a7a0();
  fVar1 = (float)fVar6;
  if ((float10)1.0471976 < fVar6 != ((float10)1.0471976 == fVar6)) {
    uVar5 = FUN_00dde2d0(0,100);
    if (((uVar5 & 1) != 0) && (*(int *)(param_1 + 0x1190) == 0)) {
      FUN_0055f9e0(0x1000d);
      return;
    }
    fVar6 = (float10)fVar1;
  }
  if ((float10)0.7853982 <= fVar6) {
    if (*(int *)(param_1 + 0x1778) < 4) {
      FUN_0055f9e0(0x10005);
      return;
    }
  }
  else {
    iVar4 = FUN_0055ceb0();
    if ((((iVar4 != 0) && ((*(byte *)(param_1 + 0xdc3) & 1) == 0)) &&
        (1 < *(int *)(param_1 + 0x1530))) && (iVar4 = FUN_0056e080(), iVar4 != 0)) {
      *(uint *)(param_1 + 0xdc0) = *(uint *)(param_1 + 0xdc0) | 0x1000000;
      return;
    }
    if (25.0 < *(float *)(param_1 + 0xa90)) {
      if (*(float *)(param_1 + 0xa90) <= 225.0) {
        if ((*(float *)(param_1 + 0x1544) <= 0.0) && (iVar4 = FUN_0056eb60(), iVar4 != 0)) {
          *(float *)(param_1 + 0x1544) = *(float *)(param_1 + 0x17c0) * 60.0;
          *(uint *)(param_1 + 0xdc0) = *(uint *)(param_1 + 0xdc0) | 0x10;
          sVar3 = FUN_00dde2d0(3,5);
          *(int *)(param_1 + 0x1540) = (int)sVar3;
          FUN_0055f9e0(0x20008);
          return;
        }
        fVar2 = *(float *)(param_1 + 0xa90);
        if (((NAN(fVar2) || 49.0 < fVar2 == (fVar2 == 49.0)) ||
            (fVar6 = (float10)FUN_00dde300(0,0x3f800000),
            fVar6 < (float10)*(float *)(param_1 + 0x1548) ==
            (fVar6 == (float10)*(float *)(param_1 + 0x1548)))) ||
           (*(float *)(param_1 + 0x18f0) <= 10.0)) {
          fVar2 = *(float *)(param_1 + 0xa90);
          if (((!NAN(fVar2) && 49.0 < fVar2 != (fVar2 == 49.0)) &&
              (fVar6 = (float10)FUN_00dde300(0,0x3f800000),
              fVar6 < (float10)*(float *)(param_1 + 6000) !=
              (fVar6 == (float10)*(float *)(param_1 + 6000)))) &&
             ((fVar6 = (float10)FUN_0055a7a0(),
              fVar6 < (float10)0.87266463 != (fVar6 == (float10)0.87266463) &&
              ((iVar4 = FUN_0055a010(0x41700000), iVar4 != 0 && (iVar4 = FUN_0056e080(), iVar4 != 0)
               ))))) {
            return;
          }
        }
        else {
          if (*(int *)(param_1 + 5000) == 0x20007) {
            *(int *)(param_1 + 0x1550) = *(int *)(param_1 + 0x1550) + 1;
          }
          else {
            *(undefined4 *)(param_1 + 0x1550) = 0;
          }
          if ((*(int *)(param_1 + 0x1550) < *(int *)(param_1 + 0x154c)) &&
             (iVar4 = FUN_00560a10(), iVar4 != 0)) {
            FUN_0055f9e0(0x20007);
            return;
          }
        }
      }
      iVar4 = FUN_00573840();
      if (iVar4 != 0) {
        return;
      }
      fVar2 = *(float *)(param_1 + 0xa90);
      if (!NAN(fVar2) && 144.0 < fVar2 != (fVar2 == 144.0)) {
        FUN_0056dd80();
        return;
      }
      fVar2 = *(float *)(param_1 + 0xa90);
      if (!NAN(fVar2) && 64.0 < fVar2 != (fVar2 == 64.0)) {
        FUN_0055f9e0(0x10002);
        return;
      }
      if (NAN(fVar1) || 0.34906584 < fVar1 == (fVar1 == 0.34906584)) {
        return;
      }
      iVar4 = FUN_0055ced0();
      if (iVar4 != 0) goto LAB_00579d07;
      goto LAB_0057a084;
    }
    iVar4 = FUN_00560a10();
    if ((iVar4 != 0) && (uVar5 = FUN_00dde2d0(0,100), (uVar5 & 1) != 0)) {
      uVar5 = FUN_00dde2d0(0,100);
      if ((uVar5 & 7) == 0) {
        FUN_0055f9e0(0x20007);
        return;
      }
      FUN_0055f9e0(0x20002);
      return;
    }
    if (*(int *)(param_1 + 0x11c0) != 0) {
      FUN_0055f9e0(0x10008);
      return;
    }
  }
  FUN_0055f9e0(0x50000);
  return;
}

// 0057B620  Em0220::vf4C  size=169  [class]
void __fastcall Em0220::vf4C(int *param_1)

{
  float fVar1;
  int iVar2;
  
  BehaviorEmBase::vf4C();
  if ((*(byte *)(param_1[0x13c] + 0x28) & 2) == 0) {
    FUN_0056d8c0();
    FUN_0056daa0();
    FUN_00562460();
    iVar2 = FUN_00ac4770();
    if (iVar2 == 0) {
      FUN_0057a890();
    }
    FUN_0057aae0();
    iVar2 = FUN_00a94ce0(1);
    if (iVar2 != 0) {
      FUN_00a94bc0(1,0);
    }
    FUN_0055fdd0();
    FUN_0055eec0();
    if (((param_1[0x370] & 0x40000000U) != 0) &&
       (fVar1 = (float)param_1[0x66b], param_1[0x66b] = (int)(fVar1 - (float)param_1[0x244]),
       fVar1 - (float)param_1[0x244] <= 0.0)) {
      (**(code **)(*param_1 + 0x110))(0);
    }
  }
  return;
}

// 00AAD190  Em0220::Em0220  size=335  [class]
undefined4 * __fastcall Em0220::Em0220(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  BehaviorAppBase::BehaviorAppBase_34();
  *param_1 = vftable;
  param_1[0x370] = 0;
  param_1[0x371] = 0;
  param_1[0x372] = 0;
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  cEspControler::cEspControler();
  FUN_00a7c930();
  FUN_00a7c930();
  param_1[0x464] = 0;
  param_1[0x465] = 0;
  param_1[0x466] = 0;
  param_1[0x470] = 0;
  param_1[0x471] = 0;
  param_1[0x472] = 0;
  param_1[0x47c] = 0;
  param_1[0x47d] = 0;
  param_1[0x47e] = 0;
  param_1[0x488] = 0;
  param_1[0x489] = 0;
  param_1[0x48a] = 0;
  param_1[0x494] = 0;
  param_1[0x495] = 0;
  param_1[0x496] = 0;
  param_1[0x4a0] = 0;
  param_1[0x4a1] = 0;
  param_1[0x4a2] = 0;
  param_1[0x4ac] = 0;
  param_1[0x4ad] = 0;
  param_1[0x4ae] = 0;
  param_1[0x4b8] = 0;
  param_1[0x4b9] = 0;
  param_1[0x4ba] = 0;
  FUN_00904d60();
  FUN_00904d60();
  FUN_00a603a0();
  FUN_00a603a0();
  FUN_00a603a0();
  FUN_00a831e0();
  iVar2 = 10;
  puVar1 = param_1 + 0x594;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 5;
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  return param_1;
}

// 00AAD2E0  Em0220::vf04  size=6  [class]
undefined * Em0220::vf04(void)

{
  return &DAT_01b35000;
}

// 00AAD2F0  FUN_00aad2f0  size=110  [callgraph]
void FUN_00aad2f0(void)

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
  cEnemyCautionStateManager::cEnemyCautionStateManager_3();
  return;
}

// 00AB6EF0  Em0220::vf00  size=30  [class]
undefined4 __thiscall Em0220::vf00(undefined4 param_1,byte param_2)

{
  FUN_00aad2f0();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

