// src/enemy/em8220/Em8220.cpp
// Reconstructed from METAL GEAR RISING REVENGEANCE.exe (0x52E76F3A), 006E94B0..00ABA700, 255 functions

#include "mgrr.h"
#include "Em8220.h"

// 006E94B0  FUN_006e94b0  size=28  [callgraph]
undefined4 __fastcall FUN_006e94b0(int param_1)

{
  if (*(float *)(param_1 + 0xe90) <= -15.0) {
    return 1;
  }
  return 0;
}

// 006E94D0  FUN_006e94d0  size=28  [callgraph]
undefined4 __fastcall FUN_006e94d0(int param_1)

{
  if (*(float *)(param_1 + 0xe90) <= -15.0) {
    return 0;
  }
  return 1;
}

// 006E9510  FUN_006e9510  size=47  [callgraph]
float10 FUN_006e9510(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00a8eea0();
  iVar2 = FUN_00a8eeb0();
  return (float10)iVar1 / (float10)iVar2;
}

// 006E9560  FUN_006e9560  size=71  [callgraph]
void __thiscall FUN_006e9560(int param_1,undefined4 param_2)

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

// 006E96F0  FUN_006e96f0  size=30  [callgraph]
undefined4 __thiscall FUN_006e96f0(int param_1,float param_2)

{
  if (param_2 < *(float *)(param_1 + 0x19e0)) {
    return 1;
  }
  return 0;
}

// 006E9710  FUN_006e9710  size=32  [callgraph]
undefined4 __thiscall FUN_006e9710(int param_1,float param_2)

{
  if (*(float *)(param_1 + 0x19e0) < -param_2) {
    return 1;
  }
  return 0;
}

// 006E97E0  FUN_006e97e0  size=28  [callgraph]
void FUN_006e97e0(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00a7c7f0();
  FUN_00a7c960(uVar1);
  return;
}

// 006E9810  Em8220::vf50  size=32  [class]
void __fastcall Em8220::vf50(int param_1)

{
  FUN_00a93170();
  if (*(int *)(param_1 + 0x7b0) != 0) {
    FUN_008f3cb0(param_1);
  }
  BehaviorEmBase::vf50();
  return;
}

// 006E9830  Em8220::vf2F8  size=46  [class]
void __fastcall Em8220::vf2F8(int *param_1)

{
  if (param_1[0x294] != 0) {
    (**(code **)(*param_1 + 0x344))(7,0,0);
    param_1[0x1af] = 1;
  }
  FUN_009fdde0();
  return;
}

// 006E9860  Em8220::vf228  size=17  [class]
undefined4 __fastcall Em8220::vf228(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x6ec) == 0) {
    return 0;
  }
  uVar1 = BehaviorEmBase::vf228();
  return uVar1;
}

// 006E9880  Em8220::vf368  size=12  [class]
bool __fastcall Em8220::vf368(int param_1)

{
  return *(int *)(param_1 + 0x1ab8) != 0;
}

// 006E9890  FUN_006e9890  size=306  [between]
void __thiscall FUN_006e9890(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0x14a0) = *(undefined4 *)(param_2 + 0x14a0);
  *(undefined4 *)(param_1 + 0x14a4) = *(undefined4 *)(param_2 + 0x14a4);
  *(undefined4 *)(param_1 + 0x1618) = *(undefined4 *)(param_2 + 0x1618);
  *(undefined4 *)(param_1 + 0x1628) = *(undefined4 *)(param_2 + 0x1628);
  *(undefined4 *)(param_1 + 0x162c) = *(undefined4 *)(param_2 + 0x162c);
  *(undefined4 *)(param_1 + 0x1838) = *(undefined4 *)(param_2 + 0x1838);
  *(undefined4 *)(param_1 + 0x1840) = *(undefined4 *)(param_2 + 0x1840);
  *(undefined4 *)(param_1 + 0x1850) = *(undefined4 *)(param_2 + 0x1850);
  *(undefined4 *)(param_1 + 0x1854) = *(undefined4 *)(param_2 + 0x1854);
  *(undefined4 *)(param_1 + 0x1488) = *(undefined4 *)(param_2 + 0x1488);
  *(undefined4 *)(param_1 + 0x148c) = *(undefined4 *)(param_2 + 0x148c);
  *(undefined4 *)(param_1 + 0x14b4) = *(undefined4 *)(param_2 + 0x14b4);
  *(undefined4 *)(param_1 + 0x14b8) = *(undefined4 *)(param_2 + 0x14b8);
  *(undefined4 *)(param_1 + 0x1960) = *(undefined4 *)(param_2 + 0x1960);
  *(undefined4 *)(param_1 + 0x1848) = *(undefined4 *)(param_2 + 0x1848);
  *(undefined4 *)(param_1 + 0x184c) = *(undefined4 *)(param_2 + 0x184c);
  *(undefined4 *)(param_1 + 0x1490) = *(undefined4 *)(param_2 + 0x1490);
  *(undefined4 *)(param_1 + 0x18a0) = *(undefined4 *)(param_2 + 0x18a0);
  *(undefined4 *)(param_1 + 0x188c) = *(undefined4 *)(param_2 + 0x188c);
  *(undefined4 *)(param_1 + 0x1894) = *(undefined4 *)(param_2 + 0x1894);
  *(undefined4 *)(param_1 + 0x1890) = *(undefined4 *)(param_2 + 0x1890);
  *(undefined4 *)(param_1 + 0x18a4) = *(undefined4 *)(param_2 + 0x18a4);
  *(undefined4 *)(param_1 + 0x19e8) = *(undefined4 *)(param_2 + 0x19e8);
  FID_conflict__memcpy((void *)(param_1 + 0x1218),(void *)(param_2 + 0x1218),0x50);
  return;
}

// 006E9A30  FUN_006e9a30  size=174  [between]
void __fastcall FUN_006e9a30(int param_1)

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

// 006E9AF0  FUN_006e9af0  size=79  [between]
float10 __thiscall FUN_006e9af0(int param_1,float *param_2)

{
  if (*(int *)(param_1 + 0x1400) != 0) {
    return ((float10)param_2[2] - (float10)*(float *)(param_1 + 0x1418)) *
           (float10)*(float *)(param_1 + 0x1428) +
           (float10)*(float *)(param_1 + 0x1424) *
           ((float10)param_2[1] - (float10)*(float *)(param_1 + 0x1414)) +
           (float10)*(float *)(param_1 + 0x1420) *
           ((float10)*param_2 - (float10)*(float *)(param_1 + 0x1410));
  }
  return (float10)-1.0;
}

// 006E9B60  FUN_006e9b60  size=97  [between]
undefined4 __fastcall FUN_006e9b60(int param_1)

{
  float *pfVar1;
  float10 fVar2;
  undefined1 local_20 [28];
  
  if (*(int *)(param_1 + 0x1390) != 0) {
    pfVar1 = (float *)FUN_00a925a0(local_20);
    fVar2 = (float10)fcos((float10)1.0471975803375244);
    if ((float10)*(float *)(param_1 + 0x13b8) * (float10)pfVar1[2] +
        (float10)*(float *)(param_1 + 0x13b0) * (float10)*pfVar1 +
        (float10)*(float *)(param_1 + 0x13b4) * (float10)pfVar1[1] < -fVar2) {
      return 1;
    }
  }
  return 0;
}

// 006E9BD0  FUN_006e9bd0  size=183  [between]
float10 __thiscall FUN_006e9bd0(int param_1,undefined4 param_2,float param_3,float param_4)

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

// 006E9C90  FUN_006e9c90  size=195  [between]
float10 __thiscall
FUN_006e9c90(int param_1,undefined4 param_2,float param_3,float param_4,float param_5)

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

// 006E9D60  FUN_006e9d60  size=36  [between]
void __thiscall FUN_006e9d60(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_006e9bd0(*(int *)(param_1 + 0xa84) + 0x40,param_2,param_3);
  return;
}

// 006E9D90  FUN_006e9d90  size=44  [between]
void __thiscall FUN_006e9d90(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_006e9c90(*(int *)(param_1 + 0xa84) + 0x40,param_2,param_3,param_4);
  return;
}

// 006E9DC0  FUN_006e9dc0  size=37  [between]
float10 __thiscall FUN_006e9dc0(int param_1,undefined4 param_2)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00a8ec30(param_2);
  fVar1 = (float10)FUN_00ddba30((float)((float10)*(float *)(param_1 + 0x94) - fVar1));
  return ABS(fVar1);
}

// 006E9DF0  FUN_006e9df0  size=40  [between]
float10 __fastcall FUN_006e9df0(int param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00a8ec30(*(int *)(param_1 + 0xa84) + 0x40);
  fVar1 = (float10)FUN_00ddba30((float)((float10)*(float *)(param_1 + 0x94) - fVar1));
  return ABS(fVar1);
}

// 006E9E20  FUN_006e9e20  size=105  [between]
undefined4 __thiscall FUN_006e9e20(int param_1,float *param_2)

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

// 006E9E90  FUN_006e9e90  size=143  [between]
int __thiscall FUN_006e9e90(int *param_1,undefined4 param_2,float *param_3)

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
  fVar2 = (float10)FUN_00ddba30((float)(fVar2 - (float10)(float)(&DAT_0164752c)[iVar1]));
  *param_3 = (float)fVar2;
  return iVar1;
}

// 006E9F20  FUN_006e9f20  size=105  [between]
void __thiscall FUN_006e9f20(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    (**(code **)(*param_1 + 0x318))();
    iVar1 = param_1[0x1d9];
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x104) != 1)) {
      *(undefined4 *)(iVar1 + 0x104) = 1;
      *(undefined4 *)(*(int *)(iVar1 + 0xd0) + 4) = 0;
    }
  }
  else {
    (**(code **)(*param_1 + 0x314))();
    iVar1 = param_1[0x1d9];
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x104) != 0)) {
      *(undefined4 *)(iVar1 + 0x104) = 0;
      return;
    }
  }
  return;
}

// 006E9F90  FUN_006e9f90  size=87  [between]
void __thiscall FUN_006e9f90(int *param_1,int param_2)

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

// 006E9FF0  FUN_006e9ff0  size=45  [between]
undefined4 __fastcall FUN_006e9ff0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x618);
  if (iVar1 < 0x1000f) {
    if ((iVar1 != 0x1000e) && ((iVar1 < 0x10000 || (0x10001 < iVar1)))) {
      return 0;
    }
  }
  else if (iVar1 != 0x70000) {
    return 0;
  }
  return 1;
}

// 006EA0A0  FUN_006ea0a0  size=135  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006ea0a0(float *param_1)

{
  int iVar1;
  
  if ((_DAT_01b356e0 & 1) == 0) {
    _DAT_01b356e0 = _DAT_01b356e0 | 1;
    _DAT_01b356d0 = 0;
    _DAT_01b356d4 = 0;
    _DAT_01b356d8 = 0x40066666;
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      iVar1 = FUN_00a12210(0);
      if (iVar1 != 0) {
        D3DXVec3TransformNormal(param_1,&DAT_01b356d0,iVar1 + 0x10);
        *param_1 = *param_1 + *(float *)(iVar1 + 0x40);
        param_1[1] = *(float *)(iVar1 + 0x44) + param_1[1];
        param_1[2] = *(float *)(iVar1 + 0x48) + param_1[2];
      }
    }
  }
  return;
}

// 006EA130  FUN_006ea130  size=16  [between]
int __fastcall FUN_006ea130(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00ac89d0();
  if (iVar1 == 0) {
    iVar1 = param_1;
  }
  return iVar1;
}

// 006EA1F0  Em8220::vf294  size=1  [class]
void Em8220::vf294(void)

{
  return;
}

// 006EA200  Em8220::vf298  size=11  [class]
void __fastcall Em8220::vf298(int param_1)

{
  *(undefined4 *)(param_1 + 0xe98) = 1;
  return;
}

// 006EA210  Em8220::vf29C  size=11  [class]
void __fastcall Em8220::vf29C(int param_1)

{
  *(undefined4 *)(param_1 + 0xe98) = 1;
  return;
}

// 006EA220  Em8220::vf2A4  size=1  [class]
void Em8220::vf2A4(void)

{
  return;
}

// 006EA230  Em8220::vf2A8  size=1  [class]
void Em8220::vf2A8(void)

{
  return;
}

// 006EA240  Em8220::vf2AC  size=1  [class]
void Em8220::vf2AC(void)

{
  return;
}

// 006EA250  Em8220::vf2B0  size=1  [class]
void Em8220::vf2B0(void)

{
  return;
}

// 006EA280  FUN_006ea280  size=264  [between]
void __fastcall FUN_006ea280(int param_1)

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

// 006EA390  FUN_006ea390  size=62  [between]
undefined4 FUN_006ea390(void)

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

// 006EA3D0  FUN_006ea3d0  size=86  [between]
undefined4 __fastcall FUN_006ea3d0(int param_1)

{
  char cVar1;
  
  if (*(int *)(param_1 + 0x7d8) == 0) {
    return 0;
  }
  cVar1 = FUN_00c68aa0(5);
  if ((((cVar1 == '\0') && (cVar1 = FUN_00c68aa0(10), cVar1 == '\0')) &&
      (cVar1 = FUN_00c68aa0(8), cVar1 == '\0')) && (cVar1 = FUN_00c68aa0(7), cVar1 == '\0')) {
    return 0;
  }
  return 1;
}

// 006EA520  FUN_006ea520  size=145  [between]
/* WARNING: Removing unreachable block (ram,0x006ea543) */
/* WARNING: Removing unreachable block (ram,0x006ea599) */

void __fastcall FUN_006ea520(int param_1)

{
  DAT_01dd0814 = DAT_01dd0814 * 0x19660d + 0x3c6ef35f;
  *(float *)(param_1 + 0x19c0) = (1.0 - (float)(DAT_01dd0814 >> 8) * 5.960465e-08 * 2.0) * 5.0;
  *(undefined4 *)(param_1 + 0x19c4) = 0;
  DAT_01dd0814 = DAT_01dd0814 * 0x19660d + 0x3c6ef35f;
  *(float *)(param_1 + 0x19c8) = (1.0 - (float)(DAT_01dd0814 >> 8) * 5.960465e-08 * 2.0) * 5.0;
  return;
}

// 006EA5E0  FUN_006ea5e0  size=271  [between]
void __thiscall FUN_006ea5e0(int param_1,float *param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float local_20;
  float local_1c;
  float local_18;
  
  iVar5 = *(int *)(param_1 + 0x1950) + 1;
  if (9 < iVar5) {
    iVar5 = 0;
  }
  iVar5 = (iVar5 + 0x18b) * 0x10;
  fVar1 = *(float *)(iVar5 + param_1);
  iVar5 = iVar5 + param_1;
  fVar2 = *(float *)(iVar5 + 4);
  fVar3 = *(float *)(iVar5 + 8);
  fVar4 = *(float *)(iVar5 + 0xc);
  FUN_006ea0a0(&local_20);
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
  if (*(int *)(param_1 + 0x19ac) != 0) {
    *param_2 = *param_2 + *(float *)(param_1 + 0x19c0);
    param_2[1] = fVar1 + 0.25 + *(float *)(param_1 + 0x19c4);
    param_2[2] = *(float *)(param_1 + 0x19c8) + param_2[2];
    param_2[3] = *(float *)(param_1 + 0x19cc) + param_2[3];
    return;
  }
  return;
}

// 006EA6F0  FUN_006ea6f0  size=38  [between]
bool __fastcall FUN_006ea6f0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00ac4780();
  if (iVar1 == 4) {
    return false;
  }
  return *(int *)(param_1 + 0x1aa4) <= *(int *)(param_1 + 0x1aa0);
}

// 006EA770  Em8220::vf158  size=5  [class]
undefined4 Em8220::vf158(void)

{
  return 0;
}

// 006EA990  FUN_006ea990  size=23  [callgraph]
void FUN_006ea990(void)

{
  FUN_00c27f40(2,0x45e10000);
  return;
}

// 006EA9D0  FUN_006ea9d0  size=22  [callgraph]
void FUN_006ea9d0(void)

{
  int iVar1;
  
  iVar1 = FUN_008c6c00();
  if (iVar1 == 0) {
    FUN_008a2b40();
    return;
  }
  return;
}

// 006EA9F0  FUN_006ea9f0  size=547  [callgraph]
void __fastcall FUN_006ea9f0(int *param_1)

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
    FUN_00aa4520(0x14b,iVar2,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00b80920(iVar2,0x3f400000,0x3f400000,0x3f400000,0);
    FUN_00db3e80(0x41880000,0,&DAT_01bea1d0);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00b94790(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_00aa4520(0x14c,iVar2,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
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
      FUN_00aa4520(0x14d,iVar2,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
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

// 006EAC30  FUN_006eac30  size=22  [callgraph]
void FUN_006eac30(void)

{
  int iVar1;
  
  iVar1 = FUN_008c6c00();
  if (iVar1 == 0) {
    FUN_008a2b40();
    return;
  }
  return;
}

// 006EAC50  FUN_006eac50  size=303  [callgraph]
void __fastcall FUN_006eac50(int *param_1)

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
    FUN_00aa4520(0x14f,iVar2,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
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

// 006EADC0  FUN_006eadc0  size=39  [callgraph]
undefined4 FUN_006eadc0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if ((((iVar1 != 0x42) && (iVar1 != 99)) && (iVar1 != 0x44)) && (iVar1 != 0x39)) {
    return 0;
  }
  return 1;
}

// 006EAF60  FUN_006eaf60  size=239  [callgraph]
void __fastcall FUN_006eaf60(int *param_1)

{
  int iVar1;
  float10 fVar2;
  
  if (param_1[0x187] == 0) {
    iVar1 = FUN_006e9e90(param_1[0x2a1] + 0x40,param_1 + 0x248);
    FUN_00aa4080(*(undefined4 *)(&DAT_01647540 + iVar1 * 4),0,0x3e4ccccd,0x3f800000,0x8000000,
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
                    /* WARNING: Could not recover jumptable at 0x006eb04d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 006EB060  FUN_006eb060  size=239  [callgraph]
void __fastcall FUN_006eb060(int *param_1)

{
  int iVar1;
  float10 fVar2;
  
  if (param_1[0x187] == 0) {
    iVar1 = FUN_006e9e90(param_1[0x2a1] + 0x40,param_1 + 0x248);
    FUN_00aa4080(*(undefined4 *)(&DAT_01647550 + iVar1 * 4),0,0x3e4ccccd,0x3f800000,0x8000000,
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
                    /* WARNING: Could not recover jumptable at 0x006eb14d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 006EB180  FUN_006eb180  size=640  [callgraph]
void __fastcall FUN_006eb180(int *param_1)

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
    param_1[0x520] = 0;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      FUN_00aa4080(0x21,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      pcVar2 = *(code **)(*param_1 + 0x1d4);
      param_1[0x22a] = (int)((float)param_1[0x52f] * 1.8);
      param_1[0x225] = (int)((float)param_1[0x52f] * 1.8 * 16.0);
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
    goto LAB_006eb2fb;
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
LAB_006eb2fb:
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

// 006EB440  FUN_006eb440  size=123  [callgraph]
void __fastcall FUN_006eb440(int *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x006eb4b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 006EB4D0  FUN_006eb4d0  size=214  [callgraph]
void __fastcall FUN_006eb4d0(int param_1)

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

// 006EB5C0  FUN_006eb5c0  size=145  [callgraph]
void __fastcall FUN_006eb5c0(int *param_1)

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
                    /* WARNING: Could not recover jumptable at 0x006eb64f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

// 006EB6A0  FUN_006eb6a0  size=20  [callgraph]
void __fastcall FUN_006eb6a0(int *param_1)

{
  if (param_1[0x4d8] != 0) {
                    /* WARNING: Could not recover jumptable at 0x006eb6b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  return;
}

// 006EB6F0  FUN_006eb6f0  size=166  [callgraph]
void __fastcall FUN_006eb6f0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    FUN_00aa4080(5,0,0x3ed55555,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (iVar1 != 1) {
    return;
  }
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x1b40) = *(undefined4 *)(iVar1 + 0x40);
      *(undefined4 *)(param_1 + 0x1b44) = *(undefined4 *)(iVar1 + 0x44);
      *(undefined4 *)(param_1 + 0x1b48) = *(undefined4 *)(iVar1 + 0x48);
      *(undefined4 *)(param_1 + 0x1b4c) = *(undefined4 *)(iVar1 + 0x4c);
      *(undefined4 *)(param_1 + 0x1b50) = 1;
    }
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  return;
}

// 006EB7A0  FUN_006eb7a0  size=172  [callgraph]
undefined4 __fastcall FUN_006eb7a0(int param_1)

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
  local_4 = &PTR_s__EFD02_01882980;
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
    if (0x188299f < (int)local_4) {
      return 0;
    }
  } while( true );
}

// 006EB860  FUN_006eb860  size=415  [callgraph]
void __thiscall FUN_006eb860(int param_1,int param_2)

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
      *(undefined4 *)(param_1 + 0xea8 + local_c * 0x14) = 1;
      if (local_c == 7) {
        iVar3 = FUN_00a81330();
        if ((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), puVar2 = PTR_s__EFD01_0188299c, iVar3 != 0)) {
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
        puVar2 = (&PTR_s__EFD02_01882980)[local_c];
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
          FUN_00a1bd80((&PTR_s__EFD02_01882980)[local_c],1);
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

// 006EBAC0  FUN_006ebac0  size=125  [callgraph]
void __fastcall FUN_006ebac0(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(param_1[0x664],0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
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
                    /* WARNING: Could not recover jumptable at 0x006ebb3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 006EBC20  FUN_006ebc20  size=361  [callgraph]
void __fastcall FUN_006ebc20(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  float10 fVar5;
  
  puVar2 = (undefined4 *)(param_1 + 0x172c);
  iVar4 = 0xb;
  do {
    *(undefined2 *)(puVar2 + -3) = 0;
    *(undefined2 *)((int)puVar2 + -10) = 0;
    *puVar2 = 0;
    puVar2 = puVar2 + 5;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  *(undefined2 *)(param_1 + 0x1828) = 0;
  *(undefined1 *)(param_1 + 0x182a) = 0;
  *(undefined4 *)(param_1 + 0x182c) = 0;
  *(undefined4 *)(param_1 + 0x1830) = 0;
  *(undefined4 *)(param_1 + 0x1834) = 0;
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
    *(float *)(param_1 + 0x17fc) = (float)fVar5;
    fVar5 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x3c))(iVar1);
    *(float *)(param_1 + 0x1800) = (float)fVar5;
    fVar5 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x44))(iVar1);
    *(float *)(param_1 + 0x1804) = (float)fVar5;
    fVar5 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x4c))(iVar1);
    *(float *)(param_1 + 0x1808) = (float)fVar5;
    iVar1 = iVar4 + 0x3c;
    fVar5 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(iVar1);
    *(float *)(param_1 + 0x180c) = (float)fVar5;
    fVar5 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x3c))(iVar1);
    *(float *)(param_1 + 0x1810) = (float)fVar5;
    fVar5 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x44))(iVar1);
    *(float *)(param_1 + 0x1814) = (float)fVar5;
    fVar5 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x4c))(iVar1);
    *(float *)(param_1 + 0x1818) = (float)fVar5;
    iVar4 = iVar4 + 0x3d;
    fVar5 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(iVar4);
    *(float *)(param_1 + 0x181c) = (float)fVar5;
    fVar5 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x3c))(iVar4);
    *(float *)(param_1 + 0x1820) = (float)fVar5;
    fVar5 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x44))(iVar4);
    *(float *)(param_1 + 0x1824) = (float)fVar5;
  }
  return;
}

// 006EBEC0  FUN_006ebec0  size=42  [callgraph]
uint FUN_006ebec0(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  puVar2 = &DAT_01b35744;
  (**(code **)(*param_1 + 4))(&DAT_01b35744);
  iVar1 = FUN_00dd6d80(puVar2);
  return -(uint)(iVar1 != 0) & (uint)param_1;
}

// 006EBF70  FUN_006ebf70  size=27  [callgraph]
undefined4 __fastcall FUN_006ebf70(int param_1)

{
  if ((*(int *)(param_1 + 0x4a0) == 0) && ((*(byte *)(param_1 + 0xb00) & 2) != 0)) {
    return 1;
  }
  return 0;
}

// 006EBF90  FUN_006ebf90  size=38  [callgraph]
undefined4 __fastcall FUN_006ebf90(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x4a0) == 0) && ((*(byte *)(param_1 + 0xb00) & 2) != 0)) {
    iVar1 = FUN_00a8c760(4);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

// 006EBFC0  FUN_006ebfc0  size=23  [callgraph]
undefined4 __fastcall FUN_006ebfc0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xa84) != 0) {
    uVar1 = FUN_006e9e20(*(int *)(param_1 + 0xa84) + 0x40);
    return uVar1;
  }
  return 0;
}

// 006EC6A0  FUN_006ec6a0  size=27  [callgraph]
undefined4 __fastcall FUN_006ec6a0(int param_1)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0xe9c) & 0x20) == 0) {
    iVar1 = FUN_00a8c760(0x32);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}

// 006EC7A0  FUN_006ec7a0  size=30  [callgraph]
undefined4 __fastcall FUN_006ec7a0(int param_1)

{
  int iVar1;
  
  if ((*(uint *)(param_1 + 0xe9c) & 0x2000000) == 0) {
    iVar1 = FUN_00a8c760(6);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}

// 006EC7C0  FUN_006ec7c0  size=42  [callgraph]
undefined4 FUN_006ec7c0(void)

{
  int iVar1;
  
  iVar1 = FUN_00a82d50();
  if (iVar1 != 2) {
    iVar1 = FUN_00a82d50();
    if (iVar1 != 3) {
      return 0;
    }
  }
  return 1;
}

// 006EC7F0  Em8220::vf248  size=49  [class]
void __fastcall Em8220::vf248(int param_1)

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

// 006EC830  Em8220::vf268  size=185  [class]
undefined4 __thiscall
Em8220::vf268(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (*(int *)(param_1 + 0x4e4) != 0) {
switchD_006ec876_caseD_3:
    return 0;
  }
  local_20 = param_4[8];
  local_1c = param_4[9];
  local_18 = param_4[10];
  local_14 = 0x3f800000;
  switch(*param_4) {
  case 1:
    uVar1 = 2;
    break;
  case 2:
    uVar1 = 4;
    break;
  default:
    goto switchD_006ec876_caseD_3;
  case 9:
    *(undefined4 *)(param_1 + 0x1b00) = 0;
    return 1;
  case 0x15:
    FUN_00ac4710(param_4[0xb]);
    FUN_00a8d710(param_1 + 0x40);
    return 1;
  }
  FUN_00a883f0(uVar1,0,&local_20);
  return 1;
}

// 006EC920  Em8220::vf110  size=126  [class]
void __thiscall Em8220::vf110(int param_1,int param_2)

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
    *(uint *)(param_1 + 0xe9c) = *(uint *)(param_1 + 0xe9c) | 0x40000000;
    return;
  }
  *(uint *)(param_1 + 0xe9c) = *(uint *)(param_1 + 0xe9c) & 0xbfffffff;
  return;
}

// 006EC9A0  FUN_006ec9a0  size=252  [between]
undefined4 __fastcall FUN_006ec9a0(int param_1)

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
      uVar5 = 0x38370;
      pcVar4 = "ChainSaw";
    }
    else {
      if (*(int *)(param_1 + 0x4a0) != 1) {
        return 1;
      }
      uVar5 = 0x38371;
      pcVar4 = "RailGun";
    }
    iVar1 = FUN_00a82090(pcVar4,uVar5,0);
    if (iVar1 != 0) {
      uVar5 = FUN_00a7c7f0();
      FUN_00a7c960(uVar5);
      FUN_00ac8ad0(0,*(undefined4 *)(param_1 + 0x4f0),iVar1,0x66,0xffffffff,4);
      piVar2 = (int *)FUN_00a7c8a0();
      if (piVar2 != (int *)0x0) {
        puVar6 = &DAT_01b35744;
        (**(code **)(*piVar2 + 4))(&DAT_01b35744);
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

// 006ECAA0  FUN_006ecaa0  size=211  [between]
void __fastcall FUN_006ecaa0(int param_1)

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
        goto LAB_006ecb3b;
      }
      pcVar3 = *(code **)(**(int **)(param_1 + 0x754) + 0x24);
    }
    else {
      pcVar3 = *(code **)(**(int **)(param_1 + 0x754) + 0x2c);
    }
    uVar1 = (*pcVar3)(iVar2);
  }
LAB_006ecb3b:
  FUN_00a8edf0(uVar1);
  if ((*(int *)(param_1 + 0x4a0) == 0) && ((*(uint *)(param_1 + 0xb00) & 2) != 0)) {
    DAT_018b4414 = *(undefined4 *)(param_1 + 0x4b4);
    DAT_01dc08dc = 0;
    DAT_01dc08e0 = *(uint *)(param_1 + 0xb00);
  }
  return;
}

// 006ECB90  FUN_006ecb90  size=1554  [between]
void __fastcall FUN_006ecb90(int param_1)

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
  if (*(int **)(param_1 + 0x754) == (int *)0x0) goto LAB_006ed129;
  fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(iVar6 + 0x34);
  *(float *)(param_1 + 0x14a0) = (float)fVar7;
  fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x3c))(iVar6 + 0x34);
  *(float *)(param_1 + 0x14a4) = (float)fVar7;
  fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(iVar6 + 0x35);
  *(float *)(param_1 + 0x1618) = (float)fVar7;
  fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(iVar6 + 0x37);
  *(float *)(param_1 + 0x1628) = (float)fVar7;
  uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x24))(iVar6 + 0x37);
  *(undefined4 *)(param_1 + 0x162c) = uVar4;
  iVar1 = iVar6 + 0x39;
  uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x24))(iVar1);
  *(undefined4 *)(param_1 + 0x1838) = uVar4;
  uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x2c))(iVar1);
  *(undefined4 *)(param_1 + 0x1aa4) = uVar4;
  fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(iVar1);
  *(float *)(param_1 + 0x1840) = (float)fVar7;
  fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(iVar6 + 0x49);
  *(float *)(param_1 + 0x1850) = (float)fVar7;
  fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x3c))(iVar6 + 0x49);
  *(float *)(param_1 + 0x1854) = (float)fVar7;
  uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x24))(iVar6 + 0x31);
  *(undefined4 *)(param_1 + 0x1488) = uVar4;
  uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x2c))(iVar6 + 0x31);
  *(undefined4 *)(param_1 + 0x148c) = uVar4;
  fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(iVar6 + 0x32);
  *(float *)(param_1 + 0x14b4) = (float)fVar7;
  uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x24))(iVar6 + 0x32);
  *(undefined4 *)(param_1 + 0x14b8) = uVar4;
  fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(iVar6 + 0x56);
  *(float *)(param_1 + 0x19e8) = (float)fVar7;
  uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x24))(iVar6 + 0x47);
  *(undefined4 *)(param_1 + 0x1a78) = uVar4;
  fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(iVar6 + 0x47);
  *(float *)(param_1 + 0x1a70) = (float)fVar7;
  fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(iVar6 + 0x57);
  *(float *)(param_1 + 0x1a94) = (float)fVar7;
  fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(iVar6 + 0x58);
  *(float *)(param_1 + 0x1aac) = (float)fVar7;
  if (*(int *)(param_1 + 0x4a0) == 0) {
    if ((*(byte *)(param_1 + 0xb00) & 2) != 0) {
      pcVar5 = *(code **)(**(int **)(param_1 + 0x754) + 0x34);
      goto LAB_006ecdb0;
    }
    fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x3c))(iVar6 + 0x55);
  }
  else {
    pcVar5 = *(code **)(**(int **)(param_1 + 0x754) + 0x44);
LAB_006ecdb0:
    fVar7 = (float10)(*pcVar5)(iVar6 + 0x55);
  }
  *(float *)(param_1 + 0x1960) = (float)fVar7;
  iVar1 = **(int **)(param_1 + 0x754);
  if ((*(byte *)(param_1 + 0xb00) & 1) == 0) {
    iVar2 = iVar6 + 0x4b;
    if (*(int *)(param_1 + 0x4a0) == 0) {
      fVar7 = (float10)(**(code **)(iVar1 + 0x34))();
      *(float *)(param_1 + 0x1848) = (float)fVar7;
      fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x44))(iVar2);
      *(float *)(param_1 + 0x184c) = (float)fVar7;
      uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x24))(iVar6 + 0x33);
      *(undefined4 *)(param_1 + 0x1490) = uVar4;
      pcVar5 = *(code **)(**(int **)(param_1 + 0x754) + 0x34);
    }
    else {
      fVar7 = (float10)(**(code **)(iVar1 + 0x3c))(iVar2);
      *(float *)(param_1 + 0x1848) = (float)fVar7;
      fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x4c))(iVar2);
      *(float *)(param_1 + 0x184c) = (float)fVar7;
      uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x2c))(iVar6 + 0x33);
      *(undefined4 *)(param_1 + 0x1490) = uVar4;
      pcVar5 = *(code **)(**(int **)(param_1 + 0x754) + 0x3c);
    }
    fVar7 = (float10)(*pcVar5)(iVar6 + 0x50);
    *(float *)(param_1 + 0x18a0) = (float)fVar7;
    iVar1 = iVar6 + 0x4d;
    fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(iVar1);
    *(float *)(param_1 + 0x188c) = (float)fVar7;
    fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x3c))(iVar1);
    *(float *)(param_1 + 0x1894) = (float)fVar7;
    fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x44))(iVar1);
    iVar6 = iVar6 + 0x52;
  }
  else {
    iVar2 = iVar6 + 0x4c;
    if (*(int *)(param_1 + 0x4a0) == 0) {
      fVar7 = (float10)(**(code **)(iVar1 + 0x34))();
      *(float *)(param_1 + 0x1848) = (float)fVar7;
      fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x44))(iVar2);
      *(float *)(param_1 + 0x184c) = (float)fVar7;
      uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x24))(iVar6 + 0x33);
      *(undefined4 *)(param_1 + 0x1490) = uVar4;
      pcVar5 = *(code **)(**(int **)(param_1 + 0x754) + 0x34);
    }
    else {
      fVar7 = (float10)(**(code **)(iVar1 + 0x3c))(iVar2);
      *(float *)(param_1 + 0x1848) = (float)fVar7;
      fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x4c))(iVar2);
      *(float *)(param_1 + 0x184c) = (float)fVar7;
      uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x2c))(iVar6 + 0x33);
      *(undefined4 *)(param_1 + 0x1490) = uVar4;
      pcVar5 = *(code **)(**(int **)(param_1 + 0x754) + 0x3c);
    }
    fVar7 = (float10)(*pcVar5)(iVar6 + 0x51);
    *(float *)(param_1 + 0x18a0) = (float)fVar7;
    iVar1 = iVar6 + 0x4e;
    fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(iVar1);
    *(float *)(param_1 + 0x188c) = (float)fVar7;
    fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x3c))(iVar1);
    *(float *)(param_1 + 0x1894) = (float)fVar7;
    fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x44))(iVar1);
    iVar6 = iVar6 + 0x53;
  }
  *(float *)(param_1 + 0x1890) = (float)fVar7;
  fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0x754) + 0x34))(iVar6);
  *(float *)(param_1 + 0x18a4) = (float)fVar7;
  uVar4 = FUN_00ac84d0(0x25);
  *(undefined4 *)(param_1 + 0x1218) = uVar4;
  uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0xc))(0x25);
  *(undefined4 *)(param_1 + 0x121c) = uVar4;
  uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x14))(0x25);
  *(undefined4 *)(param_1 + 0x1220) = uVar4;
  uVar3 = (**(code **)(**(int **)(param_1 + 0x754) + 0x1c))(0x25);
  *(undefined1 *)(param_1 + 0x1224) = uVar3;
  uVar4 = FUN_00ac84d0(0x26);
  *(undefined4 *)(param_1 + 0x1228) = uVar4;
  uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0xc))(0x26);
  *(undefined4 *)(param_1 + 0x122c) = uVar4;
  uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x14))(0x26);
  *(undefined4 *)(param_1 + 0x1230) = uVar4;
  uVar3 = (**(code **)(**(int **)(param_1 + 0x754) + 0x1c))(0x26);
  *(undefined1 *)(param_1 + 0x1234) = uVar3;
  uVar4 = FUN_00ac84d0(0x24);
  *(undefined4 *)(param_1 + 0x1238) = uVar4;
  uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0xc))(0x24);
  *(undefined4 *)(param_1 + 0x123c) = uVar4;
  uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x14))(0x24);
  *(undefined4 *)(param_1 + 0x1240) = uVar4;
  uVar3 = (**(code **)(**(int **)(param_1 + 0x754) + 0x1c))(0x24);
  *(undefined1 *)(param_1 + 0x1244) = uVar3;
  uVar4 = FUN_00ac84d0(0x27);
  *(undefined4 *)(param_1 + 0x1248) = uVar4;
  uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0xc))(0x27);
  *(undefined4 *)(param_1 + 0x124c) = uVar4;
  uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x14))(0x27);
  *(undefined4 *)(param_1 + 0x1250) = uVar4;
  uVar3 = (**(code **)(**(int **)(param_1 + 0x754) + 0x1c))(0x27);
  *(undefined1 *)(param_1 + 0x1254) = uVar3;
  uVar4 = FUN_00ac84d0(0x28);
  *(undefined4 *)(param_1 + 0x1258) = uVar4;
  uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0xc))(0x28);
  *(undefined4 *)(param_1 + 0x125c) = uVar4;
  uVar4 = (**(code **)(**(int **)(param_1 + 0x754) + 0x14))(0x28);
  *(undefined4 *)(param_1 + 0x1260) = uVar4;
  uVar3 = (**(code **)(**(int **)(param_1 + 0x754) + 0x1c))(0x28);
  *(undefined1 *)(param_1 + 0x1264) = uVar3;
LAB_006ed129:
  *(int *)(param_1 + 0x1490) = *(int *)(param_1 + 0x1490) + *(int *)(param_1 + 0x1488);
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
    *(float *)(param_1 + 0x14b4) = afStack_14[iVar6] * *(float *)(param_1 + 0x14b4);
  }
  return;
}

// 006ED1C0  FUN_006ed1c0  size=628  [between]
void __fastcall FUN_006ed1c0(int param_1)

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
  local_80[8] = &DAT_016474a8;
  local_80[9] = &DAT_016474b4;
  local_80[10] = (undefined *)0x0;
  local_80[0xb] = &DAT_016474c0;
  local_80[0xc] = &DAT_016474cc;
  local_80[0xd] = (undefined *)0x0;
  local_80[0xe] = &DAT_016474d8;
  local_80[0xf] = &DAT_016474e4;
  local_80[0x10] = (undefined *)0x0;
  local_80[0x11] = &DAT_016474f0;
  local_80[0x12] = &DAT_016474fc;
  local_80[0x13] = (undefined *)0x0;
  local_80[0x14] = &DAT_01647508;
  local_80[0x15] = &DAT_01647514;
  local_80[0x16] = &DAT_01647520;
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
    puVar2 = (undefined4 *)(param_1 + 0xea8 + iVar9 * 0x14);
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
      if ((iVar6 != 0) && (iVar6 = FUN_00a7c8a0(), puVar3 = PTR_s__EFD01_0188299c, iVar6 != 0)) {
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
      puVar3 = (&PTR_s__EFD02_01882980)[iVar9];
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

// 006ED450  FUN_006ed450  size=170  [between]
void __fastcall FUN_006ed450(int param_1)

{
  undefined4 uVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  if ((((*(int *)(param_1 + 0x4a0) != 0) || ((*(byte *)(param_1 + 0xb00) & 2) == 0)) &&
      ((*(byte *)(param_1 + 0xb00) & 8) == 0)) && (*(int *)(param_1 + 0x1ab4) == 0)) {
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    uVar1 = FUN_0093c1f0((int)*(char *)(param_1 + 0xbab),*(undefined4 *)(param_1 + 0x4f0),4,2,
                         &local_20,&local_30,0x41200000,0x3f000000,0xbf800000);
    *(undefined4 *)(param_1 + 0x19e4) = uVar1;
    *(undefined4 *)(param_1 + 0x1ab4) = 1;
  }
  return;
}

// 006ED500  FUN_006ed500  size=1016  [between]
void __fastcall FUN_006ed500(int param_1)

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
  switch(*(undefined4 *)(param_1 + 0x1460)) {
  case 0:
    pfVar4 = (float *)FUN_00a925a0(local_70);
    local_120 = *pfVar4 + *(float *)(param_1 + 0x40);
    puVar6 = local_20;
    local_118 = *(float *)(param_1 + 0x48) + pfVar4[2];
    local_114 = *(float *)(param_1 + 0x4c) + pfVar4[3];
    local_11c = *(float *)(param_1 + 0x44) + pfVar4[1] + 1.0;
    uVar7 = 0x3fe66666;
    goto LAB_006ed5e8;
  case 1:
    pfVar4 = (float *)FUN_00a8b8a0(local_50,0xbf800000);
    local_120 = *(float *)(param_1 + 0x40) + *pfVar4;
    local_118 = *(float *)(param_1 + 0x48) + pfVar4[2];
    local_114 = *(float *)(param_1 + 0x4c) + pfVar4[3];
    puVar6 = local_a0;
    local_11c = *(float *)(param_1 + 0x44) + pfVar4[1] + 1.0;
    uVar7 = 0xbfe66666;
    goto LAB_006ed5e8;
  case 2:
    local_120 = *(float *)(param_1 + 0x40);
    local_118 = *(float *)(param_1 + 0x48);
    local_114 = *(float *)(param_1 + 0x4c);
    local_11c = *(float *)(param_1 + 0x44) + 1.0;
    pfVar4 = (float *)FUN_00a8b9b0(local_30,0x3fe66666);
    goto LAB_006ed5ef;
  case 3:
    local_120 = *(float *)(param_1 + 0x40);
    local_118 = *(float *)(param_1 + 0x48);
    local_114 = *(float *)(param_1 + 0x4c);
    local_11c = *(float *)(param_1 + 0x44) + 1.0;
    pfVar4 = (float *)FUN_00a8b9b0(local_90,0xbfe66666);
    goto LAB_006ed5ef;
  case 4:
    pfVar4 = (float *)FUN_00a925a0(local_80);
    local_120 = *(float *)(param_1 + 0x40) + *pfVar4;
    puVar6 = local_60;
    local_118 = *(float *)(param_1 + 0x48) + pfVar4[2];
    local_114 = *(float *)(param_1 + 0x4c) + pfVar4[3];
    local_11c = *(float *)(param_1 + 0x44) + pfVar4[1] + 3.1;
    uVar7 = 0x3fe66666;
LAB_006ed5e8:
    pfVar4 = (float *)FUN_00a8b8a0(puVar6,uVar7);
LAB_006ed5ef:
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
    local_11c = *(float *)(param_1 + 0x44) + 0.75;
    local_100 = *(float *)(iVar3 + 0x40);
    local_f8 = *(float *)(iVar3 + 0x48);
    local_f4 = *(float *)(iVar3 + 0x4c);
    local_fc = *(float *)(iVar3 + 0x44) + 0.75;
    local_104 = 0x3e800000;
  }
  local_d0 = local_100 - local_120;
  local_f0[1] = 0;
  local_b8 = 0;
  local_cc = local_fc - local_11c;
  local_b0 = 0;
  local_c8 = local_f8 - local_118;
  local_f0[0] = param_1 + 0x13f0;
  local_c4 = local_f4 - local_114;
  local_ac = "EM8220_obs";
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

// 006ED920  FUN_006ed920  size=495  [between]
void __fastcall FUN_006ed920(int *param_1)

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
  param_1[0x501] = 0;
  if ((*(byte *)(param_1 + 0x3a7) & 0x40) != 0) {
    iVar1 = (**(code **)(*param_1 + 0x84))();
    param_1[0x514] = *(int *)(iVar1 + 4);
    param_1[0x501] = 1;
  }
  fVar2 = (float10)FUN_00ddba30((float)param_1[0x2a7] - (float)param_1[0x514]);
  uStack_b8 = local_a4;
  if (fVar2 * fVar2 < (float10)0.37315634 != (fVar2 * fVar2 == (float10)0.37315634)) {
    param_1[0x501] = 1;
    uStack_b8 = 0x41c00000;
  }
  uStack_c0 = 0;
  uStack_bc = 0;
  fVar3 = (float)param_1[0x514];
  D3DXMatrixRotationY(auStack_50);
  D3DXVec3TransformNormal(afStack_c8,afStack_c8,auStack_58);
  fVar2 = (float10)FUN_00ddba30((float)param_1[0x514] + 0.034906585);
  param_1[0x514] = (int)(float)fVar2;
  param_1[0x50c] = param_1[0x10];
  param_1[0x50d] = (int)((float)param_1[0x11] + 2.8);
  param_1[0x50e] = param_1[0x12];
  param_1[0x50f] = (int)((float)param_1[0x13] + afStack_c8[0]);
  param_1[0x510] = (int)((float)param_1[0x50c] + fVar3);
  param_1[0x511] = (int)((float)param_1[0x50d] + unaff_EDI);
  param_1[0x512] = (int)((float)param_1[0x50e] + unaff_ESI);
  param_1[0x513] = (int)((float)param_1[0x50f] + afStack_c8[0]);
  iVar1 = FUN_009f8b40();
  local_a4 = param_1[0x50c];
  piStack_b4 = param_1 + 0x4fd;
  iStack_a0 = param_1[0x50d];
  iStack_9c = param_1[0x50e];
  uStack_84 = iVar1 << 0x10 | 7;
  iStack_98 = param_1[0x50f];
  uStack_b0 = 0;
  iStack_94 = param_1[0x510];
  uStack_80 = 0;
  iStack_90 = param_1[0x511];
  uStack_7c = 0;
  uStack_78 = 0;
  iStack_8c = param_1[0x512];
  pcStack_74 = "EM8220_Wall";
  uStack_70 = 0;
  iStack_88 = param_1[0x513];
  uStack_6c = 1;
  HavokRayCastManager::set(&piStack_b4);
  return;
}

// 006EDB10  FUN_006edb10  size=54  [between]
undefined4 __thiscall FUN_006edb10(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  if (*(int *)(param_1 + 0x1270) != 0) {
    fVar1 = *(float *)(param_1 + 0x1280) - *(float *)(param_1 + 0x40);
    fVar2 = *(float *)(param_1 + 0x1288) - *(float *)(param_1 + 0x48);
    *param_2 = fVar2 * fVar2 + fVar1 * fVar1;
    return 1;
  }
  return 0;
}

// 006EDC50  FUN_006edc50  size=333  [between]
float10 __thiscall FUN_006edc50(int param_1,float *param_2)

{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float local_20;
  float local_1c;
  float local_18;
  
  if (*(int *)(param_1 + 0x1400) != 0) {
    local_18 = *(float *)(param_1 + 0x1424) * 0.0;
    local_20 = local_18 - *(float *)(param_1 + 0x1428);
    local_1c = *(float *)(param_1 + 0x1428) * 0.0 - *(float *)(param_1 + 0x1420) * 0.0;
    local_18 = *(float *)(param_1 + 0x1420) - local_18;
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

// 006EDDC0  FUN_006eddc0  size=113  [between]
undefined4 __fastcall FUN_006eddc0(int param_1)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  
  if ((((*(int *)(param_1 + 0x1270) != 0) &&
       (fVar1 = *(float *)(param_1 + 0x1280) - *(float *)(param_1 + 0x40),
       fVar2 = *(float *)(param_1 + 0x1288) - *(float *)(param_1 + 0x48),
       fVar1 = fVar2 * fVar2 + fVar1 * fVar1, *(int *)(param_1 + 0x1330) == 0)) &&
      (fVar3 = (float10)fcos((float10)1.1344640254974365),
      (float10)*(float *)(param_1 + 0x1290) * (float10)0 + (float10)*(float *)(param_1 + 0x1294) +
      (float10)*(float *)(param_1 + 0x1298) * (float10)0 < fVar3)) &&
     (fVar1 < 6.25 != (fVar1 == 6.25))) {
    return 1;
  }
  return 0;
}

// 006EDE40  FUN_006ede40  size=501  [between]
undefined4 __fastcall FUN_006ede40(int param_1)

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
  
  if ((((*(int *)(param_1 + 0x1400) != 0) && (*(int *)(param_1 + 0xa84) != 0)) &&
      (fVar4 = (float10)FUN_006e9af0(*(int *)(param_1 + 0xa84) + 0x40), (float10)6.0 < fVar4)) &&
     ((fVar4 < (float10)12.5 && (fVar4 = (float10)FUN_006edc50(extraout_EDX), fVar4 < (float10)5.0))
     )) {
    iVar3 = *(int *)(param_1 + 0xa84);
    local_40 = *(float *)(iVar3 + 0x40) - *(float *)(param_1 + 0x1410);
    local_3c = *(float *)(iVar3 + 0x44) - *(float *)(param_1 + 0x1414);
    local_38 = *(float *)(iVar3 + 0x48) - *(float *)(param_1 + 0x1418);
    local_34 = *(float *)(iVar3 + 0x4c) - *(float *)(param_1 + 0x141c);
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
    if ((0.71 < *(float *)(param_1 + 0x1428) * local_38 +
                *(float *)(param_1 + 0x1420) * local_40 + *(float *)(param_1 + 0x1424) * local_3c)
       && (uVar2 = FUN_00dde2d0(0,100), (uVar2 & 1) == 0)) {
      local_30[0] = *(float *)(param_1 + 0x1410) - *(float *)(param_1 + 0x40);
      local_30[2] = *(float *)(param_1 + 0x1418) - *(float *)(param_1 + 0x48);
      local_24 = *(float *)(param_1 + 0x141c) - *(float *)(param_1 + 0x4c);
      local_30[1] = 0.0;
      iVar3 = hkpCdPointCollector::hkpCdPointCollector_14(local_30,local_20,1,0,0x3c23d70a);
      if ((iVar3 == 0) ||
         (local_20[0] = local_20[0] - *(float *)(param_1 + 0x1410),
         local_18 = local_18 - *(float *)(param_1 + 0x1418),
         local_18 * local_18 + local_20[0] * local_20[0] < 4.0)) {
        return 1;
      }
    }
  }
  return 0;
}

// 006EE040  FUN_006ee040  size=34  [between]
void __fastcall FUN_006ee040(int param_1)

{
  if (*(int *)(param_1 + 0x1390) != 0) {
    FUN_00e023a0(*(undefined4 *)(param_1 + 0x4f0),0x28,param_1 + 0x13a0);
  }
  return;
}

// 006EE0F0  FUN_006ee0f0  size=34  [between]
void __fastcall FUN_006ee0f0(int param_1)

{
  if ((*(byte *)(param_1 + 0xe9c) & 8) != 0) {
    FUN_008e5c50(7);
    *(uint *)(param_1 + 0xe9c) = *(uint *)(param_1 + 0xe9c) & 0xfffffff7;
  }
  return;
}

// 006EE120  FUN_006ee120  size=258  [between]
void __fastcall FUN_006ee120(int param_1)

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
  iVar1 = FUN_00a82d50();
  if (iVar1 == 1) {
    local_20 = *(undefined4 *)(param_1 + 0x1b40);
    local_1c = *(undefined4 *)(param_1 + 0x1b44);
    local_18 = *(undefined4 *)(param_1 + 0x1b48);
    local_14 = *(undefined4 *)(param_1 + 0x1b4c);
  }
  uVar2 = 1;
  if ((*(byte *)(param_1 + 0xe9c) & 0x80) == 0) {
    iVar1 = FUN_00a8c760(0x13);
    if (iVar1 == 0) {
      if (*(int *)(param_1 + 0x1b50) == 0) {
        iVar1 = FUN_00a82d50();
        if (iVar1 == 1) goto LAB_006ee1f3;
      }
      if ((*(int *)(param_1 + 0x4e4) == 0) && (*(int *)(param_1 + 0x19a8) == 0)) goto LAB_006ee1f5;
    }
  }
LAB_006ee1f3:
  uVar2 = 0;
LAB_006ee1f5:
  FUN_00a82640();
  FUN_00a83330(&local_20,uVar2);
  *(undefined4 *)(param_1 + 0x1b50) = 0;
  return;
}

// 006EE230  FUN_006ee230  size=289  [between]
undefined4 __thiscall FUN_006ee230(int param_1,undefined4 param_2)

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

// 006EE360  FUN_006ee360  size=995  [between]
void FUN_006ee360(float *param_1,float *param_2,float *param_3)

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

// 006EE750  FUN_006ee750  size=1387  [between]
void __thiscall FUN_006ee750(int *param_1,undefined4 *param_2)

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
  
  switch(param_1[0x6a2]) {
  case 0:
    FUN_00aa4080(0x20,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x3a7] = param_1[0x3a7] | 4;
    (**(code **)(*param_1 + 0x318))();
    iVar5 = param_1[0x1d9];
    if ((iVar5 != 0) && (*(int *)(iVar5 + 0x104) != 1)) {
      *(undefined4 *)(iVar5 + 0x104) = 1;
      *(undefined4 *)(*(int *)(iVar5 + 0xd0) + 4) = 0;
    }
    (**(code **)(*param_1 + 0x1d4))(1);
    param_1[0x6a2] = param_1[0x6a2] + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      FUN_00aa4080(0x21,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00a96030(0,0x3fe66666);
      param_1[0x249] = 0;
      FUN_00a92f90();
      iVar5 = FUN_00e26e90();
      if (iVar5 == 0) {
        param_1[0x6a2] = param_1[0x6a2] + 1;
        param_1[0x24a] = -0x40800000;
        return;
      }
      fVar7 = (float10)FUN_00e36a50(0);
      param_1[0x24a] = (int)(float)fVar7;
      param_1[0x6a2] = param_1[0x6a2] + 1;
      return;
    }
    break;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_006e9bd0(param_1 + 0x6bc,0x3ecccccd,0x3eb2b8c2);
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
      if (1.0 < (float)param_1[0x6bd] - (float)param_1[0x6bf]) {
        param_1[0x24a] = (int)((float)param_1[0x24a] * 0.5);
      }
      param_1[0x6a2] = param_1[0x6a2] + 1;
      param_1[0x24b] = 0;
      param_1[0x24c] = 0x3c888889;
      return;
    }
    break;
  case 3:
    param_1[0x24b] = (int)((float)param_1[0x244] * (float)param_1[0x24c] + (float)param_1[0x24b]);
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
      param_1[0x6a2] = param_1[0x6a2] + 1;
    }
    else {
      FUN_00aa4080(0x23,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x6a2] = 5;
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
      pcVar2 = *(code **)(*param_1 + 0x1d4);
      param_1[0x6a2] = param_1[0x6a2] + 1;
      (*pcVar2)(0);
      return;
    }
    break;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      *param_2 = 1;
      (**(code **)(*param_1 + 0x1d4))(0);
      return;
    }
  }
  return;
}

// 006EECE0  FUN_006eece0  size=231  [between]
void __thiscall FUN_006eece0(int *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00a8cab0();
  param_1[0x519] = iVar1;
  uVar2 = FUN_00a8cab0();
  if ((uVar2 & 0xffff0000) != 0x20000) {
    iVar1 = FUN_00a8cab0();
    if (iVar1 != 0x70005) {
      iVar1 = FUN_00a8cab0();
      if (iVar1 != 0x70003) {
        iVar1 = FUN_00a8cab0();
        if (iVar1 != 0x70004) goto LAB_006eed39;
      }
    }
  }
  iVar1 = FUN_00a8cab0();
  param_1[0x51a] = iVar1;
LAB_006eed39:
  if ((param_2 & 0xffff0000) == 0x20000) {
    FUN_00c27260(param_1[0x6a5]);
  }
  param_1[0x24] = 0;
  FUN_00a8caf0(param_2,0,0,0);
  if ((*(byte *)(param_1 + 0x3a7) & 8) != 0) {
    FUN_008e5c50(7);
    param_1[0x3a7] = param_1[0x3a7] & 0xfffffff7;
  }
  param_1[0x3a7] = param_1[0x3a7] & 0xffffcfda;
  (**(code **)(*param_1 + 0x1f8))((param_2 & 0xffff0000) == 0x30000);
  param_1[0x3a7] = param_1[0x3a7] & 0xefffbfff;
  return;
}

// 006EEDD0  FUN_006eedd0  size=75  [between]
void __thiscall FUN_006eedd0(int param_1,int param_2)

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

// 006EEE20  FUN_006eee20  size=176  [between]
void __fastcall FUN_006eee20(int *param_1)

{
  int iVar1;
  
  if ((((((param_1[0x186] & 0xffff0000U) == 0xf0000) || (param_1[0x187] == 0x20003)) ||
       (param_1[0x139] != 0)) ||
      ((param_1[0x301] != 0 || (iVar1 = FUN_00a8cbe0(0xe0000), iVar1 != 0)))) ||
     ((iVar1 = FUN_00a8cbe0(0xe0001), iVar1 != 0 ||
      ((iVar1 = FUN_006e9ff0(), iVar1 != 0 ||
       (iVar1 = (**(code **)(*param_1 + 0x1fc))(), iVar1 != 0)))))) {
    return;
  }
  iVar1 = FUN_00a8c760(4);
  if ((iVar1 == 0) && (iVar1 = FUN_00a8c760(0xf), iVar1 == 0)) {
    iVar1 = FUN_00a9f760(10);
    if (iVar1 == 0) {
      return;
    }
    FUN_006eece0(0x1000c);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006eeece. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 006EEED0  FUN_006eeed0  size=67  [between]
undefined4 __fastcall FUN_006eeed0(int param_1)

{
  if ((((*(int *)(param_1 + 0x4a0) == 0) && ((*(byte *)(param_1 + 0xb00) & 2) != 0)) &&
      (*(int *)(param_1 + 0x14cc) != 0)) &&
     ((*(float *)(param_1 + 0x1618) < *(float *)(param_1 + 0x1614) &&
      (*(int *)(param_1 + 0x1610) < 2)))) {
    return 1;
  }
  return 0;
}

// 006EEF20  FUN_006eef20  size=407  [between]
void __fastcall FUN_006eef20(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 local_8;
  int local_4;
  
  iVar2 = *(int *)(param_1 + 0x19a8);
  local_4 = 0;
  local_8 = 0;
  *(undefined4 *)(param_1 + 0x19ac) = 0;
  if (iVar2 == 0) {
    FUN_00ac81f0(param_1 + 0x40,&local_4,&local_8);
  }
  else {
    FUN_00ac8270(param_1 + 0x40,&local_4,&local_8);
  }
  if (*(int *)(param_1 + 0xa84) != 0) {
    FUN_00ac81f0(*(int *)(param_1 + 0xa84) + 0x40,(undefined4 *)(param_1 + 0x19ac),&local_8);
  }
  if (local_4 == 0) {
    fVar1 = *(float *)(param_1 + 0x19b4) - *(float *)(param_1 + 0x910);
    if (0.0 <= fVar1) goto LAB_006eef99;
  }
  else {
    fVar1 = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0x19b4);
    if (fVar1 < 0.0) {
LAB_006eef99:
      fVar1 = 0.0;
    }
  }
  *(float *)(param_1 + 0x19b4) = fVar1;
  fVar1 = *(float *)(param_1 + 0x19b4);
  if (NAN(fVar1) || 15.0 < fVar1 == (fVar1 == 15.0)) {
    if (*(float *)(param_1 + 0x19b4) <= -15.0) {
      *(undefined4 *)(param_1 + 0x19a8) = 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x19a8) = 1;
  }
  if ((iVar2 != 0) && (*(int *)(param_1 + 0x19a8) == 0)) {
    iVar2 = *(int *)(param_1 + 0x618);
    if (iVar2 < 0x1000f) {
      if ((iVar2 == 0x1000e) || ((0xffff < iVar2 && (iVar2 < 0x10002)))) {
LAB_006ef02b:
        if ((*(uint *)(param_1 + 0xe9c) & 0x80000) == 0) {
          FUN_006eece0(0x1000f);
        }
      }
    }
    else if (iVar2 == 0x70000) goto LAB_006ef02b;
  }
  if (*(int *)(param_1 + 0x19b0) != 0) {
    if (*(int *)(param_1 + 0x19a8) != 0) goto LAB_006ef05d;
    *(undefined4 *)(param_1 + 0x19b0) = 0;
  }
  if (*(int *)(param_1 + 0x19a8) == 0) {
    return;
  }
LAB_006ef05d:
  if (*(int *)(param_1 + 0x19b0) == 0) {
    iVar2 = *(int *)(param_1 + 0x618);
    if (iVar2 < 0x1000f) {
      if (iVar2 != 0x1000e) {
        if (iVar2 < 0x10000) {
          return;
        }
        if (0x10001 < iVar2) {
          return;
        }
      }
    }
    else if (iVar2 != 0x70000) {
      return;
    }
    if ((*(uint *)(param_1 + 0xe9c) & 0x80000) == 0) {
      *(undefined4 *)(param_1 + 0x19b0) = 1;
      FUN_006eece0(0x1000e);
    }
  }
  return;
}

// 006EF0C0  FUN_006ef0c0  size=608  [between]
void __fastcall FUN_006ef0c0(int param_1)

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
    fVar1 = *(float *)(param_1 + 0x19ec);
    if ((!NAN(fVar1) && 1.0 < fVar1 != (fVar1 == 1.0)) && (*(int *)(param_1 + 0x76c) != 0)) {
      FUN_009fb990();
    }
    fVar1 = *(float *)(param_1 + 0x19ec);
    fVar7 = (float10)FUN_00fdc1f0();
    *(float *)(param_1 + 0x19ec) = (float)((float10)fVar1 + -(float10)fVar1 * ((float10)1 - fVar7));
  }
  else {
    fVar1 = *(float *)(param_1 + 0x19ec);
    fVar8 = (float10)FUN_00fdc1f0();
    fVar7 = (float10)1;
    fVar8 = (fVar7 - fVar8) * (fVar7 - (float10)fVar1) + (float10)fVar1;
    *(float *)(param_1 + 0x19ec) = (float)fVar8;
    if ((float10)0.99 < fVar8) {
      *(float *)(param_1 + 0x19ec) = (float)fVar7;
    }
  }
  if (*(int *)(param_1 + 0x76c) != 0) {
    fVar1 = *(float *)(param_1 + 0x19ec);
    uVar5 = 0;
    *(float *)(*(int *)(param_1 + 0x76c) + 0xb94) = fVar1;
    if (*(int *)(*(int *)(param_1 + 0x76c) + 0x18) != 0) {
      iVar3 = 0;
      pfVar6 = (float *)(param_1 + 0x19f0);
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
  if ((iVar3 == 0) && ((*(uint *)(param_1 + 0xe9c) & 0x4000) == 0)) {
    iVar3 = 0;
  }
  else {
    iVar3 = 1;
  }
  iVar4 = FUN_00a81330();
  if ((iVar3 != 0) != (*(int *)(param_1 + 0x1958) != 0)) {
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
  *(int *)(param_1 + 0x1958) = iVar3;
  iVar3 = FUN_00a8c760(0x33);
  if (iVar3 == 0) {
    if (*(int *)(param_1 + 0x195c) != 0) {
      FUN_00ac9420("tentacle_a");
      FUN_00ac94e0("tentacle_b");
    }
    *(undefined4 *)(param_1 + 0x195c) = 0;
    return;
  }
  if (*(int *)(param_1 + 0x195c) == 0) {
    FUN_00ac9420("tentacle_b");
    FUN_00ac94e0("tentacle_a");
  }
  *(undefined4 *)(param_1 + 0x195c) = 1;
  return;
}

// 006EF3E0  FUN_006ef3e0  size=145  [between]
void __thiscall FUN_006ef3e0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar4 = 1;
  if ((*(uint *)(param_1 + 0xe9c) & 0x80000) != 0) {
    iVar4 = 2;
  }
  uVar2 = *(undefined1 *)(param_1 + 0x1224 + iVar4 * 0x10);
  uVar5 = *(undefined4 *)(param_1 + 0x121c + iVar4 * 0x10);
  puVar1 = (undefined4 *)(param_1 + 0x1218 + iVar4 * 0x10);
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

// 006EF480  FUN_006ef480  size=119  [between]
void __thiscall FUN_006ef480(int param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined1 *)(param_1 + 0x1224);
  uVar3 = *(undefined4 *)(param_1 + 0x1220);
  uVar2 = *(undefined4 *)(param_1 + 0x121c);
  param_2[1] = *(undefined4 *)(param_1 + 0x1218);
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

// 006EF500  FUN_006ef500  size=41  [between]
void __fastcall FUN_006ef500(int param_1)

{
  if (*(int *)(param_1 + 0x1098) != 0) {
    (**(code **)(*(int *)(param_1 + 0x1000) + 8))(0,0,0);
  }
  return;
}

// 006EF530  FUN_006ef530  size=47  [between]
void __thiscall FUN_006ef530(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x1148) != 0) {
    (**(code **)(*(int *)(param_1 + 0x10b0) + 8))(param_2,0,0);
  }
  return;
}

// 006EF560  FUN_006ef560  size=58  [between]
void __fastcall FUN_006ef560(int param_1)

{
  if ((*(uint *)(param_1 + 0xe9c) & 0x8000) == 0) {
    FUN_00e02240(*(undefined4 *)(param_1 + 0x4f0),3);
    *(uint *)(param_1 + 0xe9c) = *(uint *)(param_1 + 0xe9c) | 0x8000;
    FUN_00a85670(param_1,1);
  }
  return;
}

// 006EF5A0  FUN_006ef5a0  size=47  [between]
void __fastcall FUN_006ef5a0(int param_1)

{
  if ((*(byte *)(param_1 + 0xe9e) & 1) != 0) {
    FUN_00a8c9b0(0,2,0x3f800000,0);
    *(uint *)(param_1 + 0xe9c) = *(uint *)(param_1 + 0xe9c) & 0xfffeffff;
  }
  return;
}

// 006EF5D0  FUN_006ef5d0  size=90  [between]
undefined4 __fastcall FUN_006ef5d0(int param_1)

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

// 006EF630  Em8220::vf2A0  size=58  [class]
void __fastcall Em8220::vf2A0(int param_1)

{
  *(undefined4 *)(param_1 + 0xe98) = 1;
  if ((*(byte *)(param_1 + 0xb00) & 0x80) != 0) {
    FUN_00a82ac0(*(undefined4 *)(param_1 + 0x4f0),4,0,0xffffffff);
    *(undefined4 *)(param_1 + 0x814) = 4;
  }
  return;
}

// 006EF670  FUN_006ef670  size=213  [between]
undefined4 __thiscall FUN_006ef670(int *param_1,int param_2)

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

// 006EF750  FUN_006ef750  size=220  [between]
void __thiscall FUN_006ef750(int param_1,undefined4 param_2)

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

// 006EF830  FUN_006ef830  size=54  [between]
undefined4 __fastcall FUN_006ef830(int param_1)

{
  int iVar1;
  
  if (5.0 < *(float *)(param_1 + 0x1b08)) {
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

// 006EF870  FUN_006ef870  size=71  [between]
undefined4 __fastcall FUN_006ef870(int param_1)

{
  int iVar1;
  
  if (5.0 < *(float *)(param_1 + 0x1b08)) {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      iVar1 = FUN_00a7c8a0();
      if (iVar1 != 0) {
        FUN_006eece0(0xa0005);
        return 1;
      }
    }
  }
  return 0;
}

// 006EF8D0  FUN_006ef8d0  size=273  [between]
undefined4 __fastcall FUN_006ef8d0(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar1 = FUN_00ac8a50();
  if ((((((iVar1 != 0) || ((param_1[0x3a7] & 0x2000000U) != 0)) ||
        (iVar1 = FUN_00a8c760(6), iVar1 != 0)) ||
       ((param_1[0x139] != 0 || (iVar1 = (**(code **)(*param_1 + 0x1d8))(), iVar1 != 0)))) ||
      ((param_1[0x21c] < 1 || ((param_1[0x187] == 0 || (iVar1 = FUN_00a82e80(), iVar1 != 0)))))) ||
     ((iVar1 = FUN_006ebf70(), iVar1 != 0 || ((*(byte *)(param_1 + 0x130) & 1) == 0)))) {
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
  FUN_00c59410(param_1[0x13c],0xffffffff,&uStack_20,0x40000000,0x3f99999a,0x40490fdb,0x3f060a92,
               0x100a,10);
  return 1;
}

// 006EF9F0  Em8220::vf13C  size=110  [class]
bool __fastcall Em8220::vf13C(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00ac8a50();
  if ((iVar1 == 0) && ((param_1[0x3a7] & 0x2000000U) == 0)) {
    iVar1 = FUN_00a8c760(6);
    if ((iVar1 == 0) && (param_1[0x139] == 0)) {
      iVar1 = (**(code **)(*param_1 + 0x1d8))();
      if (((iVar1 == 0) && (0 < param_1[0x21c])) && (param_1[0x187] != 0)) {
        iVar1 = FUN_00a82e80();
        if (iVar1 == 0) {
          iVar1 = FUN_006ebf70();
          return iVar1 == 0;
        }
      }
    }
  }
  return false;
}

// 006EFA60  FUN_006efa60  size=229  [between]
void __thiscall FUN_006efa60(int param_1,undefined4 param_2)

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

// 006EFB50  FUN_006efb50  size=190  [between]
void __thiscall FUN_006efb50(int param_1,undefined4 param_2)

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
  local_40 = *(float *)(param_1 + 0x1b10) - *(float *)(param_1 + 0x40);
  local_2c = iVar1 << 0x10 | 7;
  local_28 = 0;
  local_3c = *(float *)(param_1 + 0x1b14) - *(float *)(param_1 + 0x44);
  local_24 = 0;
  local_20 = 0;
  local_38 = *(float *)(param_1 + 0x1b18) - *(float *)(param_1 + 0x48);
  local_34 = *(float *)(param_1 + 0x1b1c) - *(float *)(param_1 + 0x4c);
  local_1c = "Em8220_Patrol2";
  local_30 = 0x3dcccccd;
  FUN_0090fb00(&local_60);
  return;
}

// 006EFC10  FUN_006efc10  size=311  [between]
void __fastcall FUN_006efc10(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  undefined *puVar6;
  float afStack_20 [2];
  float fStack_18;
  
  piVar4 = (int *)FUN_00a9b930();
  if (piVar4 != (int *)0x0) {
    puVar6 = &DAT_01b35b90;
    (**(code **)(*piVar4 + 4))(&DAT_01b35b90);
    iVar5 = FUN_00dd6d80(puVar6);
    if (iVar5 != 0) {
      if (((*(uint *)(param_1 + 0xd44) & 0x800000) != 0) &&
         (fVar2 = ABS(*(float *)(param_1 + 0x44) - (float)piVar4[0x11]),
         fVar2 < 1.0 != (fVar2 == 1.0))) {
        FUN_00a8d230(afStack_20);
        fVar2 = *(float *)(param_1 + 0x40) - afStack_20[0];
        fVar3 = *(float *)(param_1 + 0x48) - fStack_18;
        iVar5 = (**(code **)(*piVar4 + 0x364))();
        if (iVar5 == 0) {
          fVar1 = 1.6899998;
        }
        else {
          fVar1 = 16.0;
        }
        if (fVar3 * fVar3 + fVar2 * fVar2 <= fVar1) {
          if (*(int *)(param_1 + 0x1b30) != 0) {
            return;
          }
          fVar2 = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0x1b2c);
          *(float *)(param_1 + 0x1b2c) = fVar2;
          if (fVar2 < 30.0) {
            return;
          }
          *(undefined4 *)(param_1 + 0x1b30) = 1;
          return;
        }
      }
      if ((*(int *)(param_1 + 0x1b30) != 0) &&
         (fVar2 = *(float *)(param_1 + 0x1b2c) - *(float *)(param_1 + 0x910),
         *(float *)(param_1 + 0x1b2c) = fVar2, fVar2 <= 0.0)) {
        *(undefined4 *)(param_1 + 0x1b30) = 0;
        *(undefined4 *)(param_1 + 0x1b2c) = 0;
        return;
      }
    }
  }
  return;
}

// 006EFD50  Em8220::vf130  size=726  [class]
undefined4 __thiscall Em8220::vf130(int param_1,ushort *param_2)

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
    FUN_00dd5650(&DAT_01647580);
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
    goto LAB_006efe52;
  case 6:
    *puVar1 = 0x149;
    puVar1[0x23] = puVar1[0x23] | 0x40000000;
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    goto LAB_006f0004;
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
    goto LAB_006efff6;
  case 0xe:
    *puVar1 = 0x14d;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
    *(undefined2 *)(puVar1 + 0x21) = 0x3301;
    break;
  case 0x10:
    *puVar1 = 0x14e;
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
LAB_006efe52:
    puVar1[0x24] = puVar1[0x24] | 0x2000000;
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    *(undefined2 *)(puVar1 + 0x21) = 0x3301;
    break;
  case 0x12:
    *puVar1 = 0x152;
    puVar1[0x24] = puVar1[0x24] | 0x4000000;
    *(undefined1 *)((int)puVar1 + 0x11) = 10;
    goto LAB_006f0004;
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
LAB_006efff6:
    puVar1[0x23] = puVar1[0x23] | 0x20000000;
    *(undefined1 *)((int)puVar1 + 0x11) = 7;
LAB_006f0004:
    *(undefined2 *)(puVar1 + 0x21) = 0x3301;
  }
  FUN_00aa56a0(puVar1);
  return unaff_EBX;
}

// 006F0080  Em8220::vf1A4  size=585  [class]
void __thiscall Em8220::vf1A4(int param_1,int *param_2,uint param_3)

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
  if ((*(uint *)(param_1 + 0xe9c) & 0x80000) == 0) {
    if (uVar5 != 0) {
      iVar2 = *param_2;
      if ((0x149 < iVar2) && ((iVar2 < 0x14c || (iVar2 == 0x152)))) {
        FUN_006eece0(0x30002);
        return;
      }
      if ((*(uint *)(param_1 + 0xe9c) & 0x4000000) != 0) {
        FUN_006eece0(0x30002);
        return;
      }
      FUN_006eece0(0x30003);
      return;
    }
    if (uVar4 == 0) {
      if ((param_3 & 1) != 0) {
        *(uint *)(param_1 + 0xe9c) = *(uint *)(param_1 + 0xe9c) | 1;
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
                FUN_006eece0(0x20009);
                return;
              }
            }
          }
        }
        else if (*param_2 == 0x14f) {
          *(int *)(param_1 + 0x1aa0) = *(int *)(param_1 + 0x1aa0) + 1;
          return;
        }
      }
    }
    else {
      iVar2 = *param_2;
      if ((0x149 < iVar2) && ((iVar2 < 0x14c || (iVar2 == 0x152)))) {
        FUN_006eece0(0x20009);
        return;
      }
    }
  }
  return;
}

// 006F02D0  Em8220::vf1A0  size=314  [class]
undefined4 __thiscall Em8220::vf1A0(int *param_1,int *param_2,int param_3)

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
        iVar2 = FUN_006ebec0(uVar1);
        if ((iVar2 == 0) || (*(int *)(iVar2 + 0x8f4) == 0)) {
          uVar1 = FUN_00a7c8a0();
          piVar3 = (int *)FUN_00602f90(uVar1);
          if (piVar3 == (int *)0x0) {
            return 0;
          }
          if ((param_1[0x3a7] & 0x100U) == 0) {
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

// 006F0410  FUN_006f0410  size=38  [between]
bool __fastcall FUN_006f0410(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x4a0) == 0) && ((*(byte *)(param_1 + 0xb00) & 2) != 0)) {
    return true;
  }
  iVar1 = FUN_00a90070(5);
  return iVar1 != 0;
}

// 006F0440  FUN_006f0440  size=269  [between]
undefined4 __fastcall FUN_006f0440(int param_1)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar4;
  float10 fVar5;
  float10 fVar6;
  
  if (*(int *)(param_1 + 0x1400) != 0) {
    fVar5 = (float10)FUN_006e9af0(param_1 + 0x40);
    fVar1 = (float)fVar5;
    if (*(int *)(param_1 + 0xa84) == 0) {
      fVar5 = (float10)-1.0;
      uVar4 = extraout_EDX;
    }
    else {
      fVar5 = (float10)FUN_006e9af0(*(int *)(param_1 + 0xa84) + 0x40);
      uVar4 = extraout_EDX_00;
    }
    fVar2 = (float)fVar5;
    fVar5 = (float10)FUN_006edc50(uVar4);
    if (*(int *)(param_1 + 0xa84) == 0) {
      fVar6 = (float10)-1.0;
    }
    else {
      fVar6 = (float10)FUN_006edc50(*(int *)(param_1 + 0xa84) + 0x40);
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

// 006F0550  FUN_006f0550  size=230  [between]
void __fastcall FUN_006f0550(int *param_1)

{
  bool bVar1;
  int iVar2;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x65,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a8c760(0);
  if (iVar2 != 0) {
    FUN_006e9bd0(param_1[0x2a1] + 0x40,0x3e3851ec,0x3db2b8c2);
  }
  if ((param_1[0x128] == 0) && ((*(byte *)(param_1 + 0x2c0) & 2) != 0)) {
    iVar2 = FUN_00a8c760(4);
    if (iVar2 != 0) {
      bVar1 = true;
      goto LAB_006f0614;
    }
  }
  bVar1 = false;
LAB_006f0614:
  iVar2 = FUN_00a94ce0(0);
  if ((iVar2 == 0) && (!bVar1)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006f0631. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 006F0640  FUN_006f0640  size=332  [between]
void __fastcall FUN_006f0640(int *param_1)

{
  bool bVar1;
  int iVar2;
  float10 fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x66,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a8c760(0);
  if (iVar2 != 0) {
    FUN_006e9bd0(param_1[0x2a1] + 0x40,0x3e3851ec,0x3db2b8c2);
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
      goto LAB_006f072e;
    }
  }
  bVar1 = false;
LAB_006f072e:
  iVar2 = FUN_00a94ce0(0);
  if ((iVar2 != 0) || (bVar1)) {
    fVar3 = (float10)FUN_00a8ec30(param_1[0x2a1] + 0x40);
    fVar3 = (float10)FUN_00ddba30((float)((float10)(float)param_1[0x25] - fVar3));
    if (ABS(fVar3) < (float10)2.3561945) {
                    /* WARNING: Could not recover jumptable at 0x006f078a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    FUN_006eece0(0x10003);
  }
  return;
}

// 006F0790  FUN_006f0790  size=532  [between]
void __fastcall FUN_006f0790(int *param_1)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  float10 fVar4;
  
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
      FUN_006e9bd0(param_1[0x2a1] + 0x40,0x3e3851ec,0x3d567750);
      param_1[0x250] = param_1[0x250] + 1;
    }
  }
  else if ((param_1[0x188] == 1) && (iVar3 = FUN_00a8c760(0), iVar3 != 0)) {
    FUN_006e9c90(param_1[0x2a1] + 0x40,0x40490fdb,0x3e4ccccd,0x3da0d97c);
    param_1[0x250] = param_1[0x250] + 1;
  }
  iVar3 = FUN_00a8c760(0xf);
  if ((iVar3 != 0) &&
     ((!NAN(fVar1) && 1.7453293 < fVar1 != (fVar1 == 1.7453293) ||
      (fVar1 = (float)param_1[0x2a4], !NAN(fVar1) && 64.0 < fVar1 != (fVar1 == 64.0))))) {
                    /* WARNING: Could not recover jumptable at 0x006f093a. Too many branches */
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
    FUN_006eece0(0x50000);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006f09a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 006F09E0  FUN_006f09e0  size=2360  [between]
void __fastcall FUN_006f09e0(int *param_1)

{
  float fVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  undefined4 uVar9;
  float local_4;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  switch(param_1[0x187]) {
  case 0:
    if (param_1[0x500] == 0) {
                    /* WARNING: Could not recover jumptable at 0x006f0a20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    param_1[0x501] = 0;
    param_1[0x514] = 0;
    param_1[0x500] = 0;
    param_1[0x515] = 0;
    param_1[0x3a7] = param_1[0x3a7] | 4;
    FUN_00a8d280();
    fVar1 = (float)param_1[0x504] - (float)param_1[0x10];
    fVar3 = (float)param_1[0x506] - (float)param_1[0x12];
    fVar4 = fVar3 * fVar3 + fVar1 * fVar1;
    if (fVar4 < 36.0 != (fVar4 == 36.0)) {
      (**(code **)(*param_1 + 0x318))();
      iVar5 = param_1[0x1d9];
      if ((iVar5 != 0) && (*(int *)(iVar5 + 0x104) != 1)) {
        *(undefined4 *)(iVar5 + 0x104) = 1;
        *(undefined4 *)(*(int *)(iVar5 + 0xd0) + 4) = 0;
      }
      FUN_00aa4080(0x6f,0,0x3d088889,0x3f800000,0x8000080,0xbf800000,0x3f800000);
      param_1[0x505] = param_1[0x15];
      param_1[600] = (int)((float)param_1[0x10] - (float)param_1[0x504]);
      param_1[0x259] = (int)((float)param_1[0x11] - (float)param_1[0x505]);
      param_1[0x25a] = (int)((float)param_1[0x12] - (float)param_1[0x506]);
      param_1[0x25b] = (int)((float)param_1[0x13] - (float)param_1[0x507]);
      fVar7 = (float10)fpatan((float10)(float)param_1[0x508],(float10)(float)param_1[0x50a]);
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
    FUN_006e9bd0(param_1 + 0x504,0x3e4ccccd,0x3db2b8c2);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      fVar7 = (float10)FUN_006e9dc0(param_1 + 0x504);
      if ((float10)0.7853982 <= fVar7) {
        FUN_006eece0(0x10006);
        return;
      }
      FUN_00aa4080(10,0,0x3d888889,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 2:
    FUN_006e9bd0(param_1 + 0x504,0x3e4ccccd,0x3db2b8c2);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_006eddc0();
    if (iVar5 != 0) {
      FUN_006eece0(0x10007);
      return;
    }
    fVar1 = (float)param_1[0x504] - (float)param_1[0x10];
    fVar1 = ((float)param_1[0x506] - (float)param_1[0x12]) *
            ((float)param_1[0x506] - (float)param_1[0x12]) + fVar1 * fVar1;
    if (fVar1 < 121.0 != (fVar1 == 121.0)) {
      FUN_00aa4080(0x6e,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_008e5c50(0xd);
      param_1[0x3a7] = param_1[0x3a7] | 8;
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 3:
    FUN_006e9bd0(param_1 + 0x504,0x3e4ccccd,0x3db2b8c2);
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
      param_1[0x505] = param_1[0x15];
      param_1[600] = (int)((float)param_1[0x10] - (float)param_1[0x504]);
      param_1[0x259] = (int)((float)param_1[0x11] - (float)param_1[0x505]);
      param_1[0x25a] = (int)((float)param_1[0x12] - (float)param_1[0x506]);
      param_1[0x25b] = (int)((float)param_1[0x13] - (float)param_1[0x507]);
      fVar7 = (float10)fpatan((float10)(float)param_1[0x508],(float10)(float)param_1[0x50a]);
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
         (int)(float)(fVar7 * (float10)(float)param_1[600] + (float10)(float)param_1[0x504]);
    param_1[0x15] =
         (int)(float)((float10)(float)param_1[0x505] + (float10)(float)param_1[0x259] * fVar7);
    param_1[0x16] =
         (int)(float)((float10)(float)param_1[0x25a] * fVar7 + (float10)(float)param_1[0x506]);
    param_1[0x17] =
         (int)(float)((float10)(float)param_1[0x25b] * fVar7 + (float10)(float)param_1[0x507]);
    param_1[0x25] =
         (int)(float)(fVar7 * (float10)(float)param_1[0x248] + (float10)(float)param_1[0x249]);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      FUN_008e5c50(0xd);
      param_1[0x3a7] = param_1[0x3a7] | 8;
      param_1[0x14] = param_1[0x504];
      param_1[0x16] = param_1[0x506];
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
      fVar7 = (float10)FUN_006e9df0();
      if ((float10)1.3089969 <= fVar7) {
        local_4 = (float)param_1[0x24];
        fVar7 = (float10)0.2617994 - (float10)local_4;
      }
      else {
        FUN_006e9d60(0x3eb33333,0x3eb2b8c2);
        iVar5 = param_1[0x2a1];
        fVar7 = (float10)*(float *)(iVar5 + 0x40) - (float10)(float)param_1[0x10];
        fVar8 = (float10)*(float *)(iVar5 + 0x48) - (float10)(float)param_1[0x12];
        fVar7 = (float10)fpatan(((float10)*(float *)(iVar5 + 0x44) + (float10)0.8) -
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
    FUN_006e9560((float)param_1[0x244] * 0.5);
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
      FUN_006ee0f0();
      iVar5 = FUN_006ee230(0x41200000);
      if (iVar5 == 0) {
        FUN_00aa4080(0x6d,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        param_1[0x187] = param_1[0x187] + 1;
        return;
      }
      FUN_00aa4080(0x6c,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    iVar5 = FUN_006e9b60();
    if (iVar5 != 0) {
      FUN_006ee040();
      FUN_006eece0(0x20009);
      return;
    }
    break;
  case 7:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00a8c760(0);
    if (iVar5 != 0) {
      FUN_006e9d60(0x3e4ccccd,0x3db2b8c2);
    }
    iVar5 = FUN_006ebf90();
    iVar6 = FUN_00a94ce0(0);
    if ((iVar6 != 0) || (iVar5 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x006f1316. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 006F1340  FUN_006f1340  size=431  [between]
void __fastcall FUN_006f1340(int *param_1)

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
        FUN_006e9bd0(param_1[0x2a1] + 0x40,0x3e4ccccd,0x3db2b8c2);
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
                    /* WARNING: Could not recover jumptable at 0x006f13fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  iVar2 = FUN_00a8c760(0);
  if (iVar2 != 0) {
    FUN_006e9bd0(param_1[0x2a1] + 0x40,0x3e4ccccd,0x3db2b8c2);
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    iVar2 = FUN_006ee230(0x3f800000);
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

// 006F14F0  FUN_006f14f0  size=89  [between]
void __fastcall FUN_006f14f0(int param_1)

{
  float10 fVar1;
  
  if (*(int *)(param_1 + 0x61c) == 2) {
    fVar1 = (float10)FUN_00a8ec30(*(int *)(param_1 + 0xa84) + 0x40);
    fVar1 = (float10)FUN_00ddba30((float)((float10)*(float *)(param_1 + 0x94) - fVar1));
    if (((float10)1.3089969 < ABS(fVar1)) && (*(int *)(param_1 + 0x1858) < 3)) {
      FUN_006eece0(0x10006);
      *(int *)(param_1 + 0x1858) = *(int *)(param_1 + 0x1858) + 1;
    }
  }
  return;
}

// 006F1550  FUN_006f1550  size=1257  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_006f1550(int *param_1)

{
  bool bVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  float10 fVar5;
  
  if ((_DAT_01b356e4 & 1) == 0) {
    _DAT_01b356e4 = _DAT_01b356e4 | 1;
    _DAT_018829d8 = 0x42100000;
    _DAT_018829dc = 0x20001;
    _DAT_018829e4 = 0x20002;
    _DAT_018829e0 = 0x42800000;
    _DAT_018829e8 = 0x41c80000;
  }
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  switch(param_1[0x187]) {
  case 0:
    if ((param_1[0x250] < 0) || (2 < param_1[0x250])) {
      sVar2 = FUN_00dde2d0(0,2);
      param_1[0x250] = (int)sVar2;
    }
    iVar4 = param_1[0x519];
    if (((iVar4 == 0x10006) || (iVar4 == 0x10007)) || (iVar4 == 0x10003)) {
      if ((*(float *)(&DAT_018829d8 + param_1[0x250] * 8) < (float)param_1[0x2a4]) ||
         (fVar5 = (float10)FUN_006e9df0(), (float10)0.7853982 <= fVar5)) {
        FUN_00aa4120(10,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
        FUN_00ac80a0(0x3f800000,0x3f800000);
        param_1[0x248] = 0x43700000;
        param_1[0x187] = 2;
        return;
      }
      iVar4 = FUN_006e96f0(0x41f00000);
      if (iVar4 == 0) {
        FUN_006eece0(*(undefined4 *)(&DAT_018829d4 + param_1[0x250] * 8));
        return;
      }
      goto LAB_006f193e;
    }
    param_1[0x616] = 0;
    FUN_00aa4080(0xb,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    sVar2 = FUN_00dde2d0(0,2);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x250] = (int)sVar2;
  case 1:
    FUN_006e9bd0(param_1[0x2a1] + 0x40,0x3e4ccccd,0x3db2b8c2);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      FUN_00aa4080(10,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      param_1[0x248] = 0x43700000;
    }
    iVar4 = FUN_00a8c760(4);
    if (((iVar4 != 0) && ((float)param_1[0x2a4] <= *(float *)(&DAT_018829d8 + param_1[0x250] * 8)))
       && (fVar5 = (float10)FUN_006e9df0(), fVar5 < (float10)0.7853982)) {
      FUN_006eece0(*(undefined4 *)(&DAT_018829d4 + param_1[0x250] * 8));
    }
    break;
  case 2:
    FUN_006e9bd0(param_1[0x2a1] + 0x40,0x3e4ccccd,0x3db2b8c2);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_006eddc0();
    if (iVar4 != 0) {
      FUN_006eece0(0x10007);
      return;
    }
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
    if (((float)param_1[0x2a4] <= 25.0) &&
       (fVar5 = (float10)FUN_006e9df0(), fVar5 < (float10)0.87266463)) {
      iVar4 = FUN_006f0410();
      if ((iVar4 != 0) && (uVar3 = FUN_00dde2d0(0,100), (uVar3 & 1) != 0)) {
        FUN_006eece0(0x20007);
        return;
      }
      FUN_006eece0(0x50000);
      return;
    }
    if ((*(float *)(&DAT_018829d8 + param_1[0x250] * 8) < (float)param_1[0x2a4]) ||
       (fVar5 = (float10)FUN_006e9df0(), (float10)0.7853982 <= fVar5)) {
      if (0.0 < (float)param_1[0x248]) {
        return;
      }
    }
    else {
      iVar4 = FUN_006e96f0(0x41f00000);
      if (iVar4 == 0) {
        FUN_006eece0(*(undefined4 *)(&DAT_018829d4 + param_1[0x250] * 8));
        return;
      }
    }
LAB_006f193e:
    FUN_00aa4080(0xc,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x187] = 3;
    return;
  case 3:
    iVar4 = FUN_00a8c760(0);
    if (iVar4 != 0) {
      FUN_006e9bd0(param_1[0x2a1] + 0x40,0x3e4ccccd,0x3db2b8c2);
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
      if ((*(byte *)(param_1 + 0x3a7) & 8) != 0) {
        FUN_008e5c50(7);
        param_1[0x3a7] = param_1[0x3a7] & 0xfffffff7;
      }
                    /* WARNING: Could not recover jumptable at 0x006f1a37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 006F1A50  FUN_006f1a50  size=89  [between]
void __fastcall FUN_006f1a50(int param_1)

{
  float10 fVar1;
  
  if (*(int *)(param_1 + 0x61c) == 2) {
    fVar1 = (float10)FUN_00a8ec30(*(int *)(param_1 + 0xa84) + 0x40);
    fVar1 = (float10)FUN_00ddba30((float)((float10)*(float *)(param_1 + 0x94) - fVar1));
    if (((float10)1.3089969 < ABS(fVar1)) && (*(int *)(param_1 + 0x1858) < 3)) {
      FUN_006eece0(0x10006);
      *(int *)(param_1 + 0x1858) = *(int *)(param_1 + 0x1858) + 1;
    }
  }
  return;
}

// 006F1AB0  FUN_006f1ab0  size=1371  [between]
void __fastcall FUN_006f1ab0(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  switch(param_1[0x187]) {
  case 0:
    iVar2 = param_1[0x519];
    if (((iVar2 == 0x10006) || (iVar2 == 0x10007)) || (iVar2 == 0x10003)) {
      if ((64.0 < (float)param_1[0x2a4]) ||
         (fVar4 = (float10)FUN_006e9df0(), (float10)0.7853982 <= fVar4)) {
        FUN_00aa4120(10,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
        FUN_00ac80a0(0x3f800000,0x3f800000);
        param_1[0x248] = 0x43700000;
        param_1[0x187] = 2;
        return;
      }
      iVar2 = FUN_006e96f0(0x41f00000);
      if (iVar2 != 0) goto LAB_006f1e95;
      goto LAB_006f1cb5;
    }
    param_1[0x616] = 0;
    FUN_00aa4080(0xb,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_006f1bd8;
  case 1:
LAB_006f1bd8:
    FUN_006e9bd0(param_1[0x2a1] + 0x40,0x3e4ccccd,0x3db2b8c2);
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
       (fVar4 = (float10)FUN_006e9df0(), fVar4 < (float10)0.7853982)) {
LAB_006f1cb5:
      FUN_008e5c50(0xd);
      param_1[0x3a7] = param_1[0x3a7] | 8;
      FUN_00aa4080(0x69,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x187] = 3;
      return;
    }
    break;
  case 2:
    FUN_006e9bd0(param_1[0x2a1] + 0x40,0x3e4ccccd,0x3db2b8c2);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_006eddc0();
    if (iVar2 != 0) {
      FUN_006eece0(0x10007);
      return;
    }
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
    if (((float)param_1[0x2a4] <= 25.0) &&
       (fVar4 = (float10)FUN_006e9df0(), fVar4 < (float10)0.87266463)) {
      iVar2 = FUN_006f0410();
      if ((iVar2 != 0) && (uVar1 = FUN_00dde2d0(0,100), (uVar1 & 1) != 0)) {
        FUN_006eece0(0x20007);
        return;
      }
      FUN_006eece0(0x50000);
      return;
    }
    if (((float)param_1[0x2a4] <= 64.0) &&
       (fVar4 = (float10)FUN_006e9df0(), fVar4 < (float10)0.7853982)) {
      iVar2 = FUN_006e96f0(0x41f00000);
      if (iVar2 != 0) goto LAB_006f1e95;
      FUN_008e5c50(0xd);
      param_1[0x3a7] = param_1[0x3a7] | 8;
      FUN_00aa4080(0x69,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
    }
    if ((float)param_1[0x248] <= 0.0) {
LAB_006f1e95:
      FUN_00aa4080(0xc,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x187] = 4;
      return;
    }
    break;
  case 3:
    iVar2 = FUN_00a8c760(0);
    if (iVar2 != 0) {
      FUN_006e9d60(0x3e4ccccd,0x3db2b8c2);
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      FUN_006ee0f0();
      iVar2 = FUN_006ee230(0x3f800000);
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
      FUN_006e9d60(0x3e4ccccd,0x3db2b8c2);
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_006ebf90();
    iVar3 = FUN_00a94ce0(0);
    if ((iVar3 != 0) || (iVar2 != 0)) {
      FUN_006ee0f0();
                    /* WARNING: Could not recover jumptable at 0x006f2006. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 006F2020  FUN_006f2020  size=210  [between]
void __fastcall FUN_006f2020(int *param_1)

{
  bool bVar1;
  int iVar2;
  
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
  if ((param_1[0x128] == 0) && ((*(byte *)(param_1 + 0x2c0) & 2) != 0)) {
    iVar2 = FUN_00a8c760(4);
    if (iVar2 != 0) {
      bVar1 = true;
      goto LAB_006f20d0;
    }
  }
  bVar1 = false;
LAB_006f20d0:
  iVar2 = FUN_00a94ce0(0);
  if ((iVar2 == 0) && (!bVar1)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006f20ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 006F2100  FUN_006f2100  size=73  [between]
void __fastcall FUN_006f2100(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a12210(0x66);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x1860) = *(undefined4 *)(iVar1 + 0x30);
    *(undefined4 *)(param_1 + 0x1864) = *(undefined4 *)(iVar1 + 0x34);
    *(undefined4 *)(param_1 + 0x1868) = *(undefined4 *)(iVar1 + 0x38);
    *(undefined4 *)(param_1 + 0x186c) = *(undefined4 *)(iVar1 + 0x3c);
    iVar1 = FUN_00a12210(0x66);
    *(undefined4 *)(param_1 + 0x93c) = *(undefined4 *)(iVar1 + 0x98);
  }
  return;
}

// 006F2150  FUN_006f2150  size=240  [between]
void __fastcall FUN_006f2150(int param_1)

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
      goto LAB_006f21e9;
    }
  }
  fVar4 = 0.0;
  fVar5 = 0.0;
  fVar3 = 0.0;
LAB_006f21e9:
  iVar6 = (*(int *)(param_1 + 0x1950) + 0x18b) * 0x10;
  *(float *)(iVar6 + param_1) = fVar3;
  iVar6 = iVar6 + param_1;
  *(float *)(iVar6 + 4) = fVar4;
  *(float *)(iVar6 + 8) = fVar5;
  *(float *)(iVar6 + 0xc) = local_14;
  *(int *)(param_1 + 0x1950) = *(int *)(param_1 + 0x1950) + 1;
  if (9 < *(int *)(param_1 + 0x1950)) {
    *(undefined4 *)(param_1 + 0x1950) = 0;
  }
  return;
}

// 006F2240  FUN_006f2240  size=105  [between]
float10 __fastcall FUN_006f2240(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  float10 fVar4;
  
  if ((*(uint *)(param_1 + 0xe9c) & 0x800) == 0) {
    iVar2 = *(int *)(param_1 + 0x183c) + 1;
    if (iVar2 < *(int *)(param_1 + 0x1838)) {
      fVar1 = ((float)iVar2 / (float)*(int *)(param_1 + 0x1838)) * 0.25;
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

// 006F22C0  FUN_006f22c0  size=964  [between]
void __thiscall FUN_006f22c0(int param_1,float *param_2,int param_3)

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
  pfStack_108 = (float *)0x6f22d8;
  iVar4 = FUN_00a12210();
  local_104 = (float *)0x2f;
  pfStack_108 = (float *)0x6f22e7;
  local_d8 = iVar4;
  local_d4 = FUN_00a12210();
  local_104 = (float *)0x2e;
  pfStack_108 = (float *)0x6f22f4;
  iVar5 = FUN_00a12210();
  if (((iVar5 != 0) && (iVar4 != 0)) && (local_d4 != 0)) {
    local_f0 = *param_2 - *(float *)(iVar5 + 0x40);
    local_ec = param_2[1] - *(float *)(iVar5 + 0x44);
    local_e8 = param_2[2] - *(float *)(iVar5 + 0x48);
    local_e4[0] = param_2[3] - *(float *)(iVar5 + 0x4c);
    fVar3 = local_e8 * local_e8 + local_f0 * local_f0 + local_ec * local_ec;
    if (fVar3 < 0.0 == (fVar3 == 0.0)) {
      pfStack_108 = &local_f0;
      puStack_10c = (undefined1 *)0x6f2388;
      local_104 = pfStack_108;
      FUN_00ddf460();
    }
    else {
      local_104 = (float *)&DAT_0163d0ac;
      pfStack_108 = (float *)0x6f239d;
      FUN_00dd5650();
      local_f0 = 0.0;
      local_ec = 1.0;
      local_e8 = 0.0;
    }
    local_104 = (float *)0x3e4ccccd;
    pfStack_108 = &local_f0;
    puVar2 = (undefined1 *)(param_1 + 0x1860);
    puStack_114 = (undefined1 *)0x6f23ce;
    puStack_110 = puVar2;
    puStack_10c = puVar2;
    FUN_006ee360();
    local_104 = (float *)0x6f23d5;
    switchD_0080dbae::default();
    if (*(int *)(iVar5 + 0xa8) != 0) {
      local_104 = (float *)(*(int *)(iVar5 + 0xa8) + 0x10);
      pfStack_108 = (float *)local_50;
      puStack_10c = (undefined1 *)0x6f23f0;
      D3DXMatrixTranspose();
      puStack_10c = auStack_58;
      puStack_114 = &stack0xffffff08;
      fStack_118 = 1.0206659e-38;
      puStack_110 = puVar2;
      D3DXVec3TransformNormal();
      fVar6 = (float10)fpatan((float10)local_f0,(float10)local_e8);
      local_104 = (float *)(float)(fVar6 + (float10)3.1415927);
      pfStack_108 = (float *)0x6f241c;
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
      puStack_10c = (undefined1 *)0x6f2476;
      D3DXMatrixTranspose();
      puStack_10c = auStack_58;
      puStack_114 = &stack0xffffff08;
      fStack_118 = 1.0206846e-38;
      puStack_110 = puVar2;
      D3DXVec3TransformNormal();
      fVar3 = local_ec;
      fStack_118 = -*(float *)((int)local_ec + 0x98);
      pfStack_11c = local_e4;
      pfStack_120 = (float *)0x6f24a3;
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

// 006F2690  FUN_006f2690  size=690  [between]
void __thiscall
FUN_006f2690(int *param_1,float *param_2,float *param_3,float *param_4,float param_5,float param_6)

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

// 006F2B00  FUN_006f2b00  size=241  [between]
void __fastcall FUN_006f2b00(int param_1)

{
  float10 fVar1;
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    fVar1 = (float10)FUN_00a8ec30(*(int *)(param_1 + 0xa84) + 0x40);
    fVar1 = (float10)FUN_00ddba30((float)((float10)*(float *)(param_1 + 0x94) - fVar1));
    if ((float10)1.0471976 < ABS(fVar1)) {
      FUN_006eece0(0x1000a);
      return;
    }
    if (((*(float *)(param_1 + 0xa90) <= 25.0) || (*(int *)(param_1 + 0x19a8) != 0)) ||
       (*(float *)(param_1 + 0x19d0) <= -30.0)) {
      if (*(int *)(param_1 + 0x1148) != 0) {
        (**(code **)(*(int *)(param_1 + 0x10b0) + 8))(0x41f00000,0,0);
      }
      if (*(int *)(param_1 + 0x1098) != 0) {
        (**(code **)(*(int *)(param_1 + 0x1000) + 8))(0,0,0);
        FUN_006eece0(0x50000);
        return;
      }
      FUN_006eece0(0x50000);
    }
  }
  return;
}

// 006F2C00  FUN_006f2c00  size=661  [between]
void __fastcall FUN_006f2c00(int *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  short sVar1;
  int iVar2;
  uint uVar3;
  
  switch(param_1[0x187]) {
  case 0:
    if (param_1[0x519] == 0x10009) {
      param_1[0x51f] = 0;
      if (0.2617994 < ABS((float)param_1[0x526])) {
        if (ABS((float)param_1[0x526]) < 2.1816616) {
          if ((float)param_1[0x526] <= 0.0) {
            param_1[0x51f] = 3;
          }
          else {
            param_1[0x51f] = 2;
          }
        }
        else {
          param_1[0x51f] = 1;
        }
      }
      else {
        param_1[0x51f] = 0;
      }
      iVar2 = 0;
      if (param_1[0x51f] == 1) {
        iVar2 = 2;
      }
      sVar1 = FUN_00dde2d0(0,1);
      uVar3 = iVar2 + sVar1;
      if (param_1[0x51d] == uVar3) {
        param_1[0x51e] = param_1[0x51e] + 1;
        if (2 < param_1[0x51e]) {
          uVar3 = (uint)(uVar3 == 0);
          goto LAB_006f2cd4;
        }
      }
      else {
LAB_006f2cd4:
        param_1[0x51e] = 0;
      }
      param_1[0x51d] = uVar3;
      FUN_00aa4080(*(undefined4 *)(&DAT_016475b4 + uVar3 * 4),0,0,0x3f800000,0x8000000,0xbf800000,
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
    if ((param_1[0x3a7] & 0x400U) == 0) {
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
      param_1[0x622] = (int)((float)param_1[0x629] * 60.0);
                    /* WARNING: Could not recover jumptable at 0x006f2e8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}

// 006F2EB0  FUN_006f2eb0  size=223  [between]
void __fastcall FUN_006f2eb0(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    iVar1 = FUN_006e9e90(*(int *)(param_1 + 0xa84) + 0x40,param_1 + 0x920);
    FUN_00aa4080(*(undefined4 *)(&DAT_016475c4 + iVar1 * 4),0,0x3e4ccccd,0x3f800000,0x8000000,
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
    FUN_006eece0(0x2000b);
  }
  return;
}

// 006F2F90  Em8220::vf14C  size=128  [class]
bool __thiscall Em8220::vf14C(int param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0x57:
    return true;
  case 0x58:
    break;
  case 0x59:
    if ((*(int *)(param_1 + 0x4a0) == 0) && ((*(byte *)(param_1 + 0xb00) & 2) != 0)) {
      return true;
    }
  default:
    return false;
  case 0x80:
    return *(int *)(param_1 + 0x4e4) == 0;
  }
  if ((*(int *)(param_1 + 0x4a0) == 0) && ((*(byte *)(param_1 + 0xb00) & 2) != 0)) {
    return false;
  }
  return true;
}

// 006F3050  Em8220::vf150  size=72  [class]
void Em8220::vf150(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 != 0) {
    uVar1 = FUN_00a7c7f0();
    FUN_00a7c960(uVar1);
    if (param_1 == 0x7f) {
      FUN_006eece0(0xf0000);
    }
    else if (param_1 == 0x80) {
      FUN_006eece0(0xf0001);
      return;
    }
  }
  return;
}

// 006F30A0  FUN_006f30a0  size=175  [between]
undefined4 __fastcall FUN_006f30a0(int *param_1)

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

// 006F3150  FUN_006f3150  size=204  [between]
undefined4 __fastcall FUN_006f3150(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if ((((param_1[0x139] == 0) && ((DAT_01bea060 & 0x2000000) == 0)) &&
      (iVar1 = (**(code **)(*param_1 + 0x1d8))(), iVar1 == 0)) &&
     ((param_1[0x186] == 0x60004 || (param_1[0x186] == 0x60005)))) {
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

// 006F3220  FUN_006f3220  size=142  [between]
void __fastcall FUN_006f3220(int *param_1)

{
  int iVar1;
  
  param_1[0x3a7] = param_1[0x3a7] & 0xffffffbf;
  (**(code **)(*param_1 + 0x314))();
  iVar1 = param_1[0x1d9];
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x104) != 0)) {
    *(undefined4 *)(iVar1 + 0x104) = 0;
  }
  param_1[0x3a7] = param_1[0x3a7] & 0xffffffdf;
  if (param_1[0x426] != 0) {
    (**(code **)(param_1[0x400] + 8))(0,0,0);
  }
  if (param_1[0x452] != 0) {
    (**(code **)(param_1[0x42c] + 8))(0,0,0);
    return;
  }
  return;
}

// 006F32B0  FUN_006f32b0  size=142  [between]
void __fastcall FUN_006f32b0(int param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  
  if ((*(uint *)(param_1 + 0xe9c) & 0x1000) != 0) {
    return;
  }
  iVar2 = FUN_00a9f6b0(1);
  if (iVar2 != 0) {
    return;
  }
  sVar1 = FUN_00dde2d0(0,2);
  uVar3 = (uint)sVar1;
  if (*(uint *)(param_1 + 0x146c) == uVar3) {
    *(int *)(param_1 + 0x1470) = *(int *)(param_1 + 0x1470) + 1;
    if (*(int *)(param_1 + 0x1470) < 3) goto LAB_006f3302;
    uVar3 = (uint)(uVar3 == 0);
  }
  *(undefined4 *)(param_1 + 0x1470) = 0;
LAB_006f3302:
  *(uint *)(param_1 + 0x146c) = uVar3;
  FUN_00aa4080(*(undefined4 *)(&DAT_016475d4 + uVar3 * 4),1,0,0x3f800000,0x8000010,0xbf800000,
               0x3f800000);
  return;
}

// 006F3340  FUN_006f3340  size=187  [between]
void __fastcall FUN_006f3340(int param_1)

{
  float fVar1;
  
  if ((0 < *(int *)(param_1 + 0x1480)) &&
     (fVar1 = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0x1494),
     *(float *)(param_1 + 0x1494) = fVar1, 75.0 <= fVar1)) {
    *(undefined4 *)(param_1 + 0x1494) = 0;
    *(undefined4 *)(param_1 + 0x1480) = 0;
    *(undefined4 *)(param_1 + 0x1484) = 0;
  }
  if ((*(byte *)(param_1 + 0xe9c) & 2) != 0) {
    fVar1 = *(float *)(param_1 + 0x14a8) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x14a8) = fVar1;
    if (fVar1 < 0.0 != (fVar1 == 0.0)) {
      *(uint *)(param_1 + 0xe9c) = *(uint *)(param_1 + 0xe9c) & 0xfffffffd;
    }
  }
  if ((*(uint *)(param_1 + 0xe9c) & 0x400) != 0) {
    fVar1 = *(float *)(param_1 + 0x1844) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x1844) = fVar1;
    if (fVar1 < 0.0 != (fVar1 == 0.0)) {
      *(uint *)(param_1 + 0xe9c) = *(uint *)(param_1 + 0xe9c) & 0xfffffbff;
    }
  }
  fVar1 = *(float *)(param_1 + 0x1a74) - *(float *)(param_1 + 0x910);
  *(float *)(param_1 + 0x1a74) = fVar1;
  if (fVar1 < 0.0 != (fVar1 == 0.0)) {
    *(undefined4 *)(param_1 + 0x1a7c) = 0;
  }
  return;
}

// 006F34F0  FUN_006f34f0  size=123  [between]
undefined4 __fastcall FUN_006f34f0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x1488);
  if ((*(int *)(param_1 + 0x4a0) == 0) && ((*(byte *)(param_1 + 0xb00) & 2) != 0)) {
    iVar1 = FUN_00a8eea0();
    iVar2 = FUN_00a8eeb0();
    if ((float)iVar1 / (float)iVar2 < 0.1 != ((float)iVar1 / (float)iVar2 == 0.1)) {
      iVar3 = iVar3 * 2;
    }
  }
  if ((*(int *)(param_1 + 0x1480) < iVar3) &&
     (*(int *)(param_1 + 0x1484) < *(int *)(param_1 + 0x148c))) {
    return 0;
  }
  return 1;
}

// 006F3570  FUN_006f3570  size=630  [between]
void __fastcall FUN_006f3570(int *param_1)

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
    goto LAB_006f367d;
  }
  param_1[0x51f] = 0;
  if (0.2617994 < ABS((float)param_1[0x526])) {
    if (ABS((float)param_1[0x526]) < 2.1816616) {
      if ((float)param_1[0x526] <= 0.0) {
        param_1[0x51f] = 3;
      }
      else {
        param_1[0x51f] = 2;
      }
    }
    else {
      param_1[0x51f] = 1;
    }
  }
  else {
    param_1[0x51f] = 0;
  }
  iVar3 = 0;
  if (param_1[0x51f] == 1) {
    iVar3 = 2;
  }
  sVar2 = FUN_00dde2d0(0,1);
  uVar4 = iVar3 + sVar2;
  if (param_1[0x51d] == uVar4) {
    param_1[0x51e] = param_1[0x51e] + 1;
    if (2 < param_1[0x51e]) {
      uVar4 = (uint)(uVar4 == 0);
      goto LAB_006f3638;
    }
  }
  else {
LAB_006f3638:
    param_1[0x51e] = 0;
  }
  param_1[0x51d] = uVar4;
  FUN_00aa4080(*(undefined4 *)(&DAT_016475e0 + uVar4 * 4),0,0,0x3f800000,0x8000000,0xbf800000,
               0x3f800000);
  param_1[0x187] = param_1[0x187] + 1;
LAB_006f367d:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  if (param_1[0x524] <= param_1[0x520]) {
    FUN_00a92f90();
    iVar3 = FUN_00e26e90();
    if (iVar3 == 0) {
      fVar5 = (float10)-1.0;
    }
    else {
      fVar5 = (float10)FUN_00e36970(0);
    }
    if ((float10)0.13333333333333333 <= fVar5) {
      if ((param_1[0x4a8] != 0) &&
         (((param_1[0x4b4] != 0 || (param_1[0x4c0] != 0)) && (iVar3 = FUN_006f0410(), iVar3 != 0))))
      {
        uVar4 = FUN_00dde2d0(0,100);
        if ((uVar4 & 1) != 0) {
          FUN_006eece0(0x50004);
          return;
        }
        if (param_1[0x128] != 0) {
          return;
        }
        FUN_006eece0(0x20002);
        return;
      }
      uVar4 = FUN_00dde2d0(0,100);
      if ((uVar4 & 1) != 0) {
        FUN_006eece0(0x50003);
        return;
      }
      if ((param_1[0x3a7] & 0x200000U) != 0) {
        return;
      }
      FUN_006eece0(0x20007);
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
  if (((param_1[0x3a7] & 0x80000000U) != 0) && (iVar3 = FUN_00a8c760(4), iVar3 != 0)) {
    bVar1 = true;
  }
  iVar3 = FUN_00a94ce0(0);
  if ((iVar3 == 0) && (!bVar1)) {
    return;
  }
  param_1[0x3a7] = param_1[0x3a7] & 0x7fffffff;
                    /* WARNING: Could not recover jumptable at 0x006f37e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 006F37F0  FUN_006f37f0  size=865  [between]
void __fastcall FUN_006f37f0(int *param_1)

{
  float fVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  float10 fVar5;
  
  uVar4 = 0;
  if ((param_1[0x3a7] & 0x100000U) != 0) {
    uVar4 = 0x40;
  }
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0xa0,0,0x3d888889,0x3f800000,uVar4 | 0x8000000,0xbf800000,0x3f800000);
    fVar5 = (float10)FUN_00ddba30((float)param_1[0x25] - (float)param_1[0x526]);
    param_1[0x25] = (int)(float)fVar5;
    (**(code **)(*param_1 + 0x318))();
    iVar3 = param_1[0x1d9];
    if ((iVar3 != 0) && (*(int *)(iVar3 + 0x104) != 1)) {
      *(undefined4 *)(iVar3 + 0x104) = 1;
      *(undefined4 *)(*(int *)(iVar3 + 0xd0) + 4) = 0;
    }
    param_1[0x3a7] = param_1[0x3a7] | 4;
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
LAB_006f3b06:
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
    goto LAB_006f3b06;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_006eece0(0x30007);
      return;
    }
  }
  return;
}

// 006F3B70  FUN_006f3b70  size=826  [between]
void __fastcall FUN_006f3b70(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  float10 fVar5;
  
  uVar4 = 0;
  if ((param_1[0x3a7] & 0x100000U) != 0) {
    uVar4 = 0x40;
  }
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0xa4,0,0x3d088889,0x3f800000,uVar4 | 0x8000000,0xbf800000,0x3f800000);
    (**(code **)(*param_1 + 0x1d4))(1);
    param_1[0x22a] = (int)((float)param_1[0x52f] * 0.5);
    FUN_00a92f90();
    iVar2 = FUN_00e26e90();
    if (iVar2 == 0) {
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
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      pcVar1 = *(code **)(*param_1 + 800);
      param_1[0x225] = -0x42333333;
      iVar2 = (*pcVar1)(0x3d888889);
      if (iVar2 == 0) {
        param_1[0x3a7] = param_1[0x3a7] | 0x10000000;
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
    iVar2 = (**(code **)(*param_1 + 800))(0x3d888889);
    if (iVar2 != 0) {
      param_1[0x3a7] = param_1[0x3a7] & 0xefffffff;
      FUN_00aa4080(0xa6,0,0x3d088889,0x3f800000,uVar4 | 0x8000000,0xbf800000,0x3f800000);
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
      if (((param_1[0x3a7] & 0x8000000U) != 0) && ((param_1[0x3a7] & 0x80000U) == 0)) {
        FUN_00aa4080(0xaa,0,0x3d088889,0x3f800000,uVar4 | 0x8000000,0xbf800000,0x3f800000);
        FUN_00ac80a0(0x3f800000,0x3f800000);
        param_1[0x187] = param_1[0x187] + 1;
        param_1[0x3a7] = param_1[0x3a7] | 0x8000000;
        return;
      }
      FUN_006eece0(0x30007);
      param_1[0x3a7] = param_1[0x3a7] | 0x8000000;
      return;
    }
    break;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_006ebf90();
    iVar3 = FUN_00a94ce0(0);
    if ((iVar3 != 0) || (iVar2 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x006f3ea5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 006F41D0  FUN_006f41d0  size=604  [between]
void __fastcall FUN_006f41d0(int *param_1)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_18;
  
  iVar4 = 0;
  iVar3 = FUN_00a81330();
  if (iVar3 != 0) {
    iVar4 = FUN_00a7c8a0();
  }
  if (param_1[0x187] == 0) {
    (**(code **)(*param_1 + 0x314))();
    iVar3 = param_1[0x1d9];
    if ((iVar3 != 0) && (*(int *)(iVar3 + 0x104) != 0)) {
      *(undefined4 *)(iVar3 + 0x104) = 0;
    }
    FUN_00aa4080(0x9d,0,0x3dcccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    switchD_0080dbae::default();
    fStack_20 = *(float *)(iVar4 + 0x40);
    fStack_18 = *(float *)(iVar4 + 0x48);
    fStack_30 = (float)param_1[0x10] - fStack_20;
    fStack_2c = (float)param_1[0x11] - *(float *)(iVar4 + 0x44);
    fStack_28 = (float)param_1[0x12] - fStack_18;
    fStack_24 = (float)param_1[0x13] - *(float *)(iVar4 + 0x4c);
    fVar1 = fStack_28 * fStack_28 + fStack_30 * fStack_30 + fStack_2c * fStack_2c;
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      FUN_00ddf460(&fStack_30,&fStack_30);
      fVar5 = (float10)fStack_2c;
      fVar6 = (float10)fStack_30;
      fVar8 = (float10)fStack_28;
    }
    else {
      FUN_00dd5650(&DAT_0163d0ac);
      fVar6 = (float10)0;
      fVar5 = (float10)1;
      fVar8 = fVar6;
    }
    fVar7 = (float10)2.5;
    fVar6 = fVar6 * fVar7;
    fStack_30 = (float)fVar6;
    fStack_2c = (float)(fVar5 * fVar7);
    fVar8 = fVar8 * fVar7;
    fStack_28 = (float)fVar8;
    fStack_24 = (float)((float10)fStack_24 * fVar7);
    param_1[0x14] = (int)(float)((float10)fStack_20 + fVar6);
    param_1[0x16] = (int)(float)(fVar8 + (float10)fStack_18);
    fVar6 = (float10)fpatan(-fVar6,-fVar8);
    fVar5 = (float10)FUN_00ddba30((float)(fVar6 - (float10)(float)param_1[0x25]));
    fVar6 = (float10)(float)fVar6;
    if ((float10)2.5307274 < ABS(fVar5)) {
      fVar6 = (float10)FUN_00ddba30((float)(fVar6 + (float10)3.1415927));
    }
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x25] = (int)(float)fVar6;
    param_1[0x188] = 0;
    param_1[0x248] = 0x40400000;
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
  if ((iVar3 != 0) || (bVar2)) {
    (**(code **)(*param_1 + 0x34c))();
  }
  return;
}

// 006F4430  FUN_006f4430  size=885  [between]
void __fastcall FUN_006f4430(int *param_1)

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

// 006F47B0  FUN_006f47b0  size=410  [between]
void __fastcall FUN_006f47b0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  if ((param_1[0x3a7] & 0x100000U) != 0) {
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
    FUN_006eece0(0x30007);
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

// 006F4950  FUN_006f4950  size=462  [between]
void __fastcall FUN_006f4950(int *param_1)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  if ((param_1[0x3a7] & 0x100000U) != 0) {
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
                    /* WARNING: Could not recover jumptable at 0x006f49e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    goto LAB_006f4a7e;
  }
  FUN_00aa4080(0xa9,0,0x3d088889,0x3f800000,uVar4,0xbf800000,0x3f800000);
  if (param_1[0x519] == 0x30001) {
    fVar1 = (float)param_1[0x528];
LAB_006f4a41:
    param_1[0x527] = (int)(fVar1 * 60.0);
  }
  else if (param_1[0x519] - 0x30004U < 2) {
    fVar1 = (float)param_1[0x529];
    goto LAB_006f4a41;
  }
  if (param_1[0x139] != 0) {
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_006eece0(0x60001);
    return;
  }
  param_1[0x187] = param_1[0x187] + 1;
LAB_006f4a7e:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar1 = (float)param_1[0x527];
  param_1[0x527] = (int)(fVar1 - (float)param_1[0x244]);
  if (fVar1 - (float)param_1[0x244] <= 0.0) {
    if ((param_1[0x3a7] & 0x80000U) != 0) {
      FUN_006eece0(0x70006);
      return;
    }
    FUN_00aa4080(0xaa,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x527] = 0;
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  return;
}

// 006F4C00  FUN_006f4c00  size=822  [between]
void __fastcall FUN_006f4c00(int *param_1)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  switch(param_1[0x187]) {
  case 0:
    if (param_1[0x519] == 0x30009) {
      param_1[0x51f] = 0;
      if (0.2617994 < ABS((float)param_1[0x526])) {
        if (ABS((float)param_1[0x526]) < 2.1816616) {
          if ((float)param_1[0x526] <= 0.0) {
            param_1[0x51f] = 3;
          }
          else {
            param_1[0x51f] = 2;
          }
        }
        else {
          param_1[0x51f] = 1;
        }
      }
      else {
        param_1[0x51f] = 0;
      }
      iVar3 = 0;
      if (param_1[0x51f] == 1) {
        iVar3 = 2;
      }
      sVar2 = FUN_00dde2d0(0,1);
      uVar4 = iVar3 + sVar2;
      if (param_1[0x51d] == uVar4) {
        param_1[0x51e] = param_1[0x51e] + 1;
        if (2 < param_1[0x51e]) {
          uVar4 = (uint)(uVar4 == 0);
          goto LAB_006f4ce3;
        }
      }
      else {
LAB_006f4ce3:
        param_1[0x51e] = 0;
      }
      param_1[0x51d] = uVar4;
      FUN_00aa4080(*(undefined4 *)(&DAT_016475f0 + uVar4 * 4),0,0,0x3f800000,0x8000000,0xbf800000,
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
      FUN_006f30a0();
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
      FUN_006f30a0();
    }
    if ((*(byte *)(param_1 + 0x3a7) & 2) == 0) {
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
                    /* WARNING: Could not recover jumptable at 0x006f4f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 006F5250  FUN_006f5250  size=360  [between]
void __fastcall FUN_006f5250(int *param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
  if (param_1[0x187] == 0) {
    sVar1 = FUN_00dde2d0(0,1);
    iVar3 = (int)sVar1;
    if ((param_1[0x519] == 0x3000d) && (iVar3 == param_1[0x250])) {
      param_1[0x250] = (uint)(param_1[0x250] == 0);
    }
    param_1[0x250] = iVar3;
    FUN_00aa4080(*(undefined4 *)(&DAT_01647600 + iVar3 * 4),0,0x3e088889,0x3f800000,0x8000000,
                 0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  if (param_1[0x520] < param_1[0x524]) {
    iVar3 = FUN_00a94ce0(0);
    if ((iVar3 == 0) && (iVar3 = FUN_00a8c760(4), iVar3 == 0)) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x006f53b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  if ((param_1[0x4a8] == 0) || ((param_1[0x4b4] == 0 && (param_1[0x4c0] == 0)))) {
    uVar2 = FUN_00dde2d0(0,100);
    if ((uVar2 & 1) != 0) {
      FUN_006eece0(0x50003);
      return;
    }
    if ((param_1[0x3a7] & 0x200000U) == 0) {
      FUN_006eece0(0x20007);
      return;
    }
  }
  else {
    uVar2 = FUN_00dde2d0(0,100);
    if ((uVar2 & 1) == 0) {
      if (param_1[0x128] == 0) {
        FUN_006eece0(0x20002);
        return;
      }
    }
    else {
      FUN_006eece0(0x50004);
    }
  }
  return;
}

// 006F53C0  FUN_006f53c0  size=1090  [between]
void __fastcall FUN_006f53c0(int *param_1)

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
  if ((param_1[0x3a7] & 0x100000U) != 0) {
    uVar9 = 0x40;
  }
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0xa0,0,0x3d888889,0x3f800000,uVar9 | 0x8000000,0xbf800000,0x3f800000);
    fVar10 = (float10)FUN_00ddba30((float)param_1[0x25] - (float)param_1[0x526]);
    param_1[0x25] = (int)(float)fVar10;
    (**(code **)(*param_1 + 0x318))();
    iVar8 = param_1[0x1d9];
    if ((iVar8 != 0) && (*(int *)(iVar8 + 0x104) != 1)) {
      *(undefined4 *)(iVar8 + 0x104) = 1;
      *(undefined4 *)(*(int *)(iVar8 + 0xd0) + 4) = 0;
    }
    param_1[0x3a7] = param_1[0x3a7] | 4;
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
    fVar5 = (float)param_1[0x6aa];
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
LAB_006f56c0:
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
    goto LAB_006f56c0;
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
      FUN_006eece0(0x30007);
      return;
    }
  }
  return;
}

// 006F5820  FUN_006f5820  size=291  [between]
void __fastcall FUN_006f5820(int *param_1)

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
    FUN_006e9bd0(param_1[0x2a1] + 0x40,0x3e333333,0x3d8efa35);
  }
  iVar1 = FUN_00a94ce0(0);
  if ((iVar1 == 0) && (iVar1 = FUN_00a8c760(4), iVar1 == 0)) {
    return;
  }
  fVar3 = (float10)FUN_00a8ec30(param_1[0x2a1] + 0x40);
  fVar3 = (float10)FUN_00ddba30((float)((float10)(float)param_1[0x25] - fVar3));
  if (ABS(fVar3) < (float10)0.61086524) {
                    /* WARNING: Could not recover jumptable at 0x006f5941. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  FUN_006eece0(0x10005);
  return;
}

// 006F5950  FUN_006f5950  size=745  [between]
void __fastcall FUN_006f5950(int *param_1)

{
  code *pcVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  undefined1 local_30 [12];
  undefined1 auStack_24 [32];
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0x20,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x520] = 0;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_00aa4080(0x21,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      pcVar1 = *(code **)(*param_1 + 0x1d4);
      param_1[0x22a] = (int)((float)param_1[0x52f] * 1.8);
      param_1[0x225] = (int)((float)param_1[0x52f] * 1.8 * 16.0);
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
    param_1[0x14] = (int)((float)param_1[0x14] + *pfVar2);
    param_1[0x15] = (int)(pfVar2[1] + (float)param_1[0x15]);
    param_1[0x16] = (int)(pfVar2[2] + (float)param_1[0x16]);
    param_1[0x17] = (int)(pfVar2[3] + (float)param_1[0x17]);
    return;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_006ebf90();
    iVar4 = FUN_00a94ce0(0);
    if ((iVar4 != 0) || (iVar3 != 0)) {
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 006F6040  FUN_006f6040  size=287  [between]
void __fastcall FUN_006f6040(int param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  float10 fVar4;
  
  fVar4 = (float10)FUN_00a8ec30(*(int *)(param_1 + 0xa84) + 0x40);
  fVar4 = (float10)FUN_00ddba30((float)((float10)*(float *)(param_1 + 0x94) - fVar4));
  if ((float10)0.7853982 <= ABS(fVar4)) {
    if (*(int *)(param_1 + 0x1858) < 4) {
      FUN_006eece0(0x10005);
      return;
    }
    FUN_006eece0(0x50000);
    return;
  }
  if (*(float *)(param_1 + 0xa90) <= 8.0) {
    FUN_006eece0(0x90000);
  }
  fVar1 = *(float *)(param_1 + 0xa90);
  if (NAN(fVar1) || 625.0 < fVar1 == (fVar1 == 625.0)) {
    if (*(float *)(param_1 + 0xa90) <= 12.5) {
      uVar3 = FUN_00dde2d0(1,99);
      if ((uVar3 & 1) == 0) {
        FUN_006eece0(0x90001);
        return;
      }
    }
    iVar2 = FUN_00aa4a90();
    if (((iVar2 == 0) || (*(int *)(param_1 + 0x1360) == 0)) || (*(int *)(param_1 + 0x1b54) != 0)) {
      FUN_006eece0(0x90002);
      return;
    }
  }
  else {
    iVar2 = FUN_00aa4a90();
    if (((iVar2 == 0) || (*(int *)(param_1 + 0x1360) == 0)) || (*(int *)(param_1 + 0x1b54) != 0)) {
      FUN_006eece0(0x90003);
      return;
    }
  }
  FUN_006eece0(0x90004);
  return;
}

// 006F6260  FUN_006f6260  size=415  [between]
void __fastcall FUN_006f6260(int *param_1)

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
    FUN_006e9bd0(param_1[0x2a1] + 0x40,0x3e19999a,0x3d0efa35);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if ((64.0 < (float)param_1[0x2a4]) && (param_1[0x66a] == 0)) {
      return;
    }
    uVar4 = 0x8000000;
    uVar3 = 0x3e4ccccd;
    uVar2 = 8;
    goto LAB_006f6324;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x006f63fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  default:
    goto switchD_006f6274_default;
  }
  FUN_006e9bd0(param_1[0x2a1] + 0x40,0x3e19999a,0x3d0efa35);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    uVar4 = 0;
    uVar3 = 0;
    uVar2 = 6;
LAB_006f6324:
    FUN_00aa4080(uVar2,0,uVar3,0x3f800000,uVar4,0xbf800000,0x3f800000);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
switchD_006f6274_default:
  return;
}

// 006F6410  FUN_006f6410  size=572  [between]
void __fastcall FUN_006f6410(int *param_1)

{
  int iVar1;
  float10 fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  switch(param_1[0x187]) {
  case 0:
    if ((param_1[0x519] == 0x10006) || (param_1[0x519] == 0x10007)) {
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
    FUN_006e9bd0(param_1[0x2a1] + 0x40,0x3e4ccccd,0x3db2b8c2);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
    iVar1 = FUN_006eddc0();
    if (iVar1 != 0) {
      FUN_006eece0(0x10007);
      return;
    }
    if (((100.0 < (float)param_1[0x2a4]) ||
        (fVar2 = (float10)FUN_006e9df0(),
        fVar2 < (float10)1.0471976 == (fVar2 == (float10)1.0471976))) && (param_1[0x66a] == 0)) {
      return;
    }
    uVar5 = 0x8000000;
    uVar4 = 0x3e4ccccd;
    uVar3 = 0xc;
    goto LAB_006f6536;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x006f6648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  default:
    goto switchD_006f6424_default;
  }
  FUN_006e9bd0(param_1[0x2a1] + 0x40,0x3e4ccccd,0x3db2b8c2);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 10;
LAB_006f6536:
    FUN_00aa4080(uVar3,0,uVar4,0x3f800000,uVar5,0xbf800000,0x3f800000);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
switchD_006f6424_default:
  return;
}

// 006F6660  FUN_006f6660  size=410  [between]
void __fastcall FUN_006f6660(int param_1)

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
    if (*(int *)(param_1 + 0x1464) == 0x20003) {
      *puVar1 = *(undefined4 *)(param_1 + 0x1410);
      *(undefined4 *)(param_1 + 0x964) = *(undefined4 *)(param_1 + 0x1414);
      *(undefined4 *)(param_1 + 0x968) = *(undefined4 *)(param_1 + 0x1418);
      *(undefined4 *)(param_1 + 0x96c) = *(undefined4 *)(param_1 + 0x141c);
    }
    iVar2 = FUN_006e9e90(puVar1,param_1 + 0x920);
    FUN_00aa4080(*(undefined4 *)(&DAT_01647608 + iVar2 * 4),0,0x3e4ccccd,0x3f800000,0x8000000,
                 0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  }
  else if (*(int *)(param_1 + 0x61c) != 1) {
    return;
  }
  iVar2 = FUN_00a8c760(0);
  if (iVar2 != 0) {
    FUN_006e9bd0(*(int *)(param_1 + 0xa84) + 0x40,0x3e19999a,0x3d0efa35);
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if ((iVar2 == 0) && (iVar2 = FUN_00a8c760(4), iVar2 == 0)) {
    return;
  }
  if ((*(int *)(param_1 + 0x1464) != 0x20004) || (30.25 < *(float *)(param_1 + 0xa90))) {
    FUN_006eece0(*(int *)(param_1 + 0x1464));
    return;
  }
  if ((((*(int *)(param_1 + 0x4a0) == 0) && ((*(byte *)(param_1 + 0xb00) & 2) != 0)) ||
      (iVar2 = FUN_00a90070(5), iVar2 != 0)) &&
     ((uVar3 = FUN_00dde2d0(0,100), (uVar3 & 1) != 0 && (*(int *)(param_1 + 0x1360) == 0)))) {
    FUN_006eece0(0x20007);
    return;
  }
  FUN_006eece0(0x50000);
  return;
}

// 006F6800  FUN_006f6800  size=594  [between]
void __fastcall FUN_006f6800(int *param_1)

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
    param_1[0x22a] = (int)((float)param_1[0x52f] * 1.8);
    param_1[0x225] = (int)((float)param_1[0x52f] * 1.8 * 16.0);
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
      param_1[0x3a7] = param_1[0x3a7] & 0xfffffffb;
      (**(code **)(*param_1 + 0x1d4))(0);
      param_1[0x187] = param_1[0x187] + 1;
    }
    fVar1 = (float)param_1[0x244];
    puVar5 = auStack_20;
    break;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if ((iVar4 != 0) || (iVar4 = FUN_00a8c760(4), iVar4 != 0)) {
      FUN_006eece0(param_1[0x519]);
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

// 006F6A70  FUN_006f6a70  size=139  [between]
void __fastcall FUN_006f6a70(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x61c) == 2) {
    if ((15.0 < *(float *)(param_1 + 0x19d0)) && (*(float *)(param_1 + 0xe90) <= -15.0)) {
      FUN_006eece0(0x10003);
    }
    iVar1 = FUN_00a82d50();
    if ((iVar1 == 2) || (iVar1 = FUN_00a82d50(), iVar1 == 3)) {
      FUN_006eece0(0xa0004);
      return;
    }
    iVar1 = FUN_00a82d50();
    if (iVar1 == 1) {
      FUN_006eece0(0x1000c);
    }
  }
  return;
}

// 006F6BA0  FUN_006f6ba0  size=253  [between]
void __fastcall FUN_006f6ba0(int *param_1)

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
    FUN_006e9bd0(param_1[0x2a1] + 0x40,0x3e333333,0x3d8efa35);
  }
  iVar1 = FUN_00a94ce0(0);
  if ((iVar1 == 0) && (iVar1 = FUN_00a8c760(4), iVar1 == 0)) {
    return;
  }
  fVar2 = (float10)FUN_00a8ec30(param_1[0x2a1] + 0x40);
  fVar2 = (float10)FUN_00ddba30((float)((float10)(float)param_1[0x25] - fVar2));
  if ((float10)0.61086524 <= ABS(fVar2)) {
    FUN_006eece0(0x10005);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006f6c9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 006F6CA0  FUN_006f6ca0  size=297  [between]
void __fastcall FUN_006f6ca0(int *param_1)

{
  uint uVar1;
  int iVar2;
  float10 fVar3;
  undefined4 uVar4;
  
  if (param_1[0x187] != 0) {
    if (param_1[0x187] != 1) {
      return;
    }
    goto LAB_006f6d17;
  }
  uVar1 = FUN_00dde2d0(1,100);
  if ((uVar1 & 1) == 0) {
    if (param_1[0x4b4] == 0) goto LAB_006f6d0a;
    uVar4 = 0x1c;
  }
  else if (param_1[0x4c0] == 0) {
    uVar4 = 0x1c;
  }
  else {
LAB_006f6d0a:
    uVar4 = 0x1d;
  }
  FUN_00aa4080(uVar4,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  param_1[0x187] = param_1[0x187] + 1;
LAB_006f6d17:
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a8c760(0);
  if (iVar2 != 0) {
    FUN_006e9bd0(param_1[0x2a1] + 0x40,0x3e333333,0x3d8efa35);
  }
  iVar2 = FUN_00a94ce0(0);
  if ((iVar2 == 0) && (iVar2 = FUN_00a8c760(4), iVar2 == 0)) {
    return;
  }
  fVar3 = (float10)FUN_00a8ec30(param_1[0x2a1] + 0x40);
  fVar3 = (float10)FUN_00ddba30((float)((float10)(float)param_1[0x25] - fVar3));
  if (ABS(fVar3) < (float10)0.61086524) {
                    /* WARNING: Could not recover jumptable at 0x006f6dc7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x34c))();
    return;
  }
  FUN_006eece0(0x10005);
  return;
}

// 006F6DD0  FUN_006f6dd0  size=460  [between]
void __fastcall FUN_006f6dd0(int *param_1)

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
    FUN_006e9bd0(param_1[0x2a1] + 0x40,0x3e19999a,0x3d0efa35);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (((100.0 < (float)param_1[0x2a4]) && (param_1[0x66a] == 0)) &&
       (0.0 < fVar1 - (float)param_1[0x244])) {
      return;
    }
    uVar5 = 0x8000000;
    uVar4 = 0x3e4ccccd;
    uVar3 = 8;
    goto LAB_006f6ea0;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x006f6f98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  default:
    goto switchD_006f6de4_default;
  }
  FUN_006e9bd0(param_1[0x2a1] + 0x40,0x3e19999a,0x3d0efa35);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 6;
LAB_006f6ea0:
    FUN_00aa4080(uVar3,0,uVar4,0x3f800000,uVar5,0xbf800000,0x3f800000);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
switchD_006f6de4_default:
  return;
}

// 006F6FB0  FUN_006f6fb0  size=166  [between]
void __fastcall FUN_006f6fb0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x61c) == 2) {
    iVar1 = FUN_00a82d50();
    if ((iVar1 == 2) || (iVar1 = FUN_00a82d50(), iVar1 == 3)) {
      FUN_006eece0(0xa0003);
      return;
    }
    iVar1 = FUN_00a82d50();
    if (iVar1 == 1) {
      FUN_006eece0(0x1000c);
      return;
    }
    if ((((*(float *)(param_1 + 0x19d0) < -15.0) || (-15.0 < *(float *)(param_1 + 0xe90))) &&
        (iVar1 = FUN_00aa4a90(), iVar1 != 0)) && (*(int *)(param_1 + 0x1b54) == 0)) {
      FUN_006eece0(0x90004);
    }
  }
  return;
}

// 006F7060  FUN_006f7060  size=579  [between]
void __fastcall FUN_006f7060(int *param_1)

{
  int iVar1;
  float10 fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  switch(param_1[0x187]) {
  case 0:
    iVar1 = param_1[0x519];
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
    FUN_006e9bd0(param_1[0x2a1] + 0x40,0x3e4ccccd,0x3db2b8c2);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
    iVar1 = FUN_006eddc0();
    if (iVar1 != 0) {
      FUN_006eece0(0x10007);
      return;
    }
    if (((144.0 < (float)param_1[0x2a4]) ||
        (fVar2 = (float10)FUN_006e9df0(),
        fVar2 < (float10)1.0471976 == (fVar2 == (float10)1.0471976))) && (param_1[0x66a] == 0)) {
      return;
    }
    uVar5 = 0x8000000;
    uVar4 = 0x3e4ccccd;
    uVar3 = 0xc;
    goto LAB_006f718d;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x006f729f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  default:
    goto switchD_006f7074_default;
  }
  FUN_006e9bd0(param_1[0x2a1] + 0x40,0x3e4ccccd,0x3db2b8c2);
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar1 = FUN_00a94ce0(0);
  if (iVar1 != 0) {
    uVar5 = 0;
    uVar4 = 0;
    uVar3 = 10;
LAB_006f718d:
    FUN_00aa4080(uVar3,0,uVar4,0x3f800000,uVar5,0xbf800000,0x3f800000);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
switchD_006f7074_default:
  return;
}

// 006F72C0  FUN_006f72c0  size=139  [between]
void __fastcall FUN_006f72c0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x61c) == 2) {
    if ((15.0 < *(float *)(param_1 + 0x19d0)) && (*(float *)(param_1 + 0xe90) <= -15.0)) {
      FUN_006eece0(0x90003);
    }
    iVar1 = FUN_00a82d50();
    if ((iVar1 == 2) || (iVar1 = FUN_00a82d50(), iVar1 == 3)) {
      FUN_006eece0(0xa0004);
      return;
    }
    iVar1 = FUN_00a82d50();
    if (iVar1 == 1) {
      FUN_006eece0(0x1000c);
    }
  }
  return;
}

// 006F7350  FUN_006f7350  size=1680  [between]
void __fastcall FUN_006f7350(int *param_1)

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
  
  iVar5 = param_1[0x6c0];
  switch(param_1[0x187]) {
  case 0:
    if (iVar5 != 0) {
      FUN_00aa4080(5,0,0,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x187] = 2;
      return;
    }
    param_1[0x187] = 1;
  case 1:
    FUN_00aa4080(0x20,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_008e59c0(2);
    param_1[0x3a7] = param_1[0x3a7] | 4;
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
                    /* WARNING: Could not recover jumptable at 0x006f79de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 006F7A00  FUN_006f7a00  size=280  [between]
void __fastcall FUN_006f7a00(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x61c) != 0) && (*(int *)(param_1 + 0x61c) != 3)) {
    iVar1 = FUN_00a82d50();
    if (iVar1 == 4) {
      if (*(float *)(param_1 + 0xaa0) <= 2.0943952) {
        FUN_006eece0(0x10003);
        return;
      }
      FUN_006eece0(0x10005);
      return;
    }
    iVar1 = FUN_00a82d50();
    if ((iVar1 == 2) || (iVar1 = FUN_00a82d50(), iVar1 == 3)) {
      iVar1 = FUN_00aa4a90();
      if ((iVar1 != 0) &&
         ((iVar1 = FUN_006e94d0(), iVar1 != 0 || (*(float *)(param_1 + 0x19d0) < -15.0)))) {
        FUN_006eece0(0xa0004);
        return;
      }
      FUN_006eece0(0xa0003);
      return;
    }
    iVar1 = FUN_006ef870();
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x1b10) = *(undefined4 *)(param_1 + 0x40);
      *(undefined4 *)(param_1 + 0x1b14) = *(undefined4 *)(param_1 + 0x44);
      *(undefined4 *)(param_1 + 0x1b18) = *(undefined4 *)(param_1 + 0x48);
      *(undefined4 *)(param_1 + 0x1b1c) = *(undefined4 *)(param_1 + 0x4c);
      *(undefined4 *)(param_1 + 0x1b20) = 1;
      return;
    }
    if (*(int *)(param_1 + 0x1b30) != 0) {
      FUN_00a88b50(4,1);
    }
  }
  return;
}

// 006F7B20  FUN_006f7b20  size=192  [between]
void __fastcall FUN_006f7b20(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    iVar1 = FUN_00a82d50();
    if (iVar1 == 4) {
      FUN_006eece0(0x10003);
      return;
    }
    iVar1 = FUN_00a82d50();
    if ((iVar1 == 2) || (iVar1 = FUN_00a82d50(), iVar1 == 3)) {
      iVar1 = FUN_00aa4a90();
      if ((iVar1 != 0) &&
         ((-15.0 < *(float *)(param_1 + 0xe90) || (*(float *)(param_1 + 0x19d0) < -15.0)))) {
        FUN_006eece0(0xa0004);
        return;
      }
      FUN_006eece0(0xa0003);
      return;
    }
    iVar1 = FUN_006ef870();
    if ((iVar1 == 0) && (*(int *)(param_1 + 0x1b30) != 0)) {
      FUN_00a88b50(4,1);
    }
  }
  return;
}

// 006F7BE0  FUN_006f7be0  size=314  [between]
void __fastcall FUN_006f7be0(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  iVar3 = FUN_00a8cac0();
  if (iVar3 == 0) {
    if (*(int *)(param_1 + 0x1b20) == 0) {
      FUN_006eece0(0xa0000);
      return;
    }
    iVar3 = FUN_00a9f760(6);
    if (iVar3 == 0) {
      FUN_00aa4080(7,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    *(undefined4 *)(param_1 + 0x940) = 0;
  }
  else if (iVar3 == 1) {
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94db0(7);
    if (iVar3 != 0) {
      FUN_00aa4080(6,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    }
    FUN_006e9bd0((float *)(param_1 + 0x1b10),0x3da3d70a,0x3c8efa35);
    fVar1 = *(float *)(param_1 + 0x1b10) - *(float *)(param_1 + 0x40);
    fVar2 = *(float *)(param_1 + 0x1b18) - *(float *)(param_1 + 0x48);
    if (fVar2 * fVar2 + fVar1 * fVar1 < 1.0) {
      FUN_006eece0(0xa0000);
      return;
    }
  }
  return;
}

// 006F7FD0  FUN_006f7fd0  size=232  [between]
void __fastcall FUN_006f7fd0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    iVar1 = FUN_00a82d50();
    if ((iVar1 != 1) || (3 < *(int *)(param_1 + 0x61c))) {
      iVar1 = FUN_00a82d50();
      if (iVar1 == 4) {
        FUN_00a8caf0(0x10003,0,0,0);
        return;
      }
      if (((*(float *)(param_1 + 0x19d0) < -15.0) || (-15.0 < *(float *)(param_1 + 0xe90))) &&
         (iVar1 = FUN_00aa4a90(), iVar1 != 0)) {
        FUN_006eece0(0xa0004);
        return;
      }
      if (25.0 < *(float *)(param_1 + 0xa90)) {
        return;
      }
      if (3 < *(int *)(param_1 + 0x61c)) {
        return;
      }
    }
    FUN_00aa4080(0xc,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(undefined4 *)(param_1 + 0x61c) = 4;
  }
  return;
}

// 006F80C0  FUN_006f80c0  size=95  [between]
void __fastcall FUN_006f80c0(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a8cac0();
  if (iVar1 == 0) {
    iVar1 = FUN_00a9f760(10);
    if (iVar1 != 0) {
      param_1[0x187] = 3;
    }
  }
  else if (iVar1 == 4) {
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x006f80fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    return;
  }
  FUN_006f6410();
  return;
}

// 006F8120  FUN_006f8120  size=142  [between]
void __fastcall FUN_006f8120(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x61c) != 0) && (*(int *)(param_1 + 0x61c) != 3)) {
    iVar1 = FUN_00a82d50();
    if (iVar1 == 4) {
      FUN_006eece0(0x1000d);
      return;
    }
    iVar1 = FUN_00a82d50();
    if ((iVar1 == 1) && (*(int *)(param_1 + 0x61c) < 4)) {
      *(undefined4 *)(param_1 + 0x61c) = 4;
      return;
    }
    if (((15.0 < *(float *)(param_1 + 0x19d0)) && (iVar1 = FUN_006e94b0(), iVar1 != 0)) &&
       (*(int *)(param_1 + 0x61c) < 4)) {
      FUN_006eece0(0xa0003);
    }
  }
  return;
}

// 006F81B0  FUN_006f81b0  size=208  [between]
void __fastcall FUN_006f81b0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    iVar1 = FUN_00a82d50();
    if (iVar1 == 4) {
      FUN_006eece0(0x10003);
      return;
    }
    iVar1 = FUN_00a82d50();
    if ((iVar1 == 2) || (iVar1 = FUN_00a82d50(), iVar1 == 3)) {
      iVar1 = FUN_00aa4a90();
      if ((iVar1 != 0) &&
         ((-15.0 < *(float *)(param_1 + 0xe90) || (*(float *)(param_1 + 0x19d0) < -15.0)))) {
        FUN_006eece0(0xa0004);
        return;
      }
      FUN_006eece0(0xa0003);
      return;
    }
    iVar1 = FUN_006ef830();
    if (iVar1 == 0) {
      FUN_006eece0(0xa0007);
      return;
    }
    if (*(int *)(param_1 + 0x1b30) != 0) {
      FUN_00a88b50(4,1);
    }
  }
  return;
}

// 006F8280  FUN_006f8280  size=543  [between]
void __fastcall FUN_006f8280(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  float local_20;
  undefined4 local_1c;
  float local_18;
  undefined4 local_14;
  
  iVar3 = FUN_00a81330();
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_00a7c8a0();
  }
  local_20 = *(float *)(iVar3 + 0x40);
  local_1c = *(undefined4 *)(iVar3 + 0x44);
  local_18 = *(float *)(iVar3 + 0x48);
  local_14 = *(undefined4 *)(iVar3 + 0x4c);
  uVar4 = FUN_00a8cac0();
  switch(uVar4) {
  case 0:
    iVar3 = FUN_00a9f760(6);
    if (iVar3 != 0) {
      *(undefined4 *)(param_1 + 0x61c) = 2;
      return;
    }
    FUN_00aa4080(7,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  case 1:
    FUN_006e9bd0(&local_20,0x3da3d70a,0x3c8efa35);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_00aa4080(6,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      return;
    }
    break;
  case 2:
    FUN_006e9bd0(iVar3 + 0x40,0x3da3d70a,0x3c8efa35);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar1 = local_20 - *(float *)(param_1 + 0x40);
    fVar2 = local_18 - *(float *)(param_1 + 0x48);
    if (fVar2 * fVar2 + fVar1 * fVar1 < 6.25) {
      FUN_00aa4080(8,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      return;
    }
    break;
  case 3:
    FUN_006e9bd0(iVar3 + 0x40,0x3da3d70a,0x3c8efa35);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_006eece0(0xa0006);
    }
  }
  return;
}

// 006F84B0  FUN_006f84b0  size=208  [between]
void __fastcall FUN_006f84b0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    iVar1 = FUN_00a82d50();
    if (iVar1 == 4) {
      FUN_006eece0(0x10003);
      return;
    }
    iVar1 = FUN_00a82d50();
    if ((iVar1 == 2) || (iVar1 = FUN_00a82d50(), iVar1 == 3)) {
      iVar1 = FUN_00aa4a90();
      if ((iVar1 != 0) &&
         ((-15.0 < *(float *)(param_1 + 0xe90) || (*(float *)(param_1 + 0x19d0) < -15.0)))) {
        FUN_006eece0(0xa0004);
        return;
      }
      FUN_006eece0(0xa0003);
      return;
    }
    iVar1 = FUN_006ef830();
    if (iVar1 == 0) {
      FUN_006eece0(0xa0007);
      return;
    }
    if (*(int *)(param_1 + 0x1b30) != 0) {
      FUN_00a88b50(4,1);
    }
  }
  return;
}

// 006F8580  FUN_006f8580  size=160  [between]
void __fastcall FUN_006f8580(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x61c) == 3) {
    iVar1 = FUN_00a82d50();
    if (iVar1 != 4) {
      iVar1 = FUN_00a82d50();
      if ((iVar1 != 2) && (iVar1 = FUN_00a82d50(), iVar1 != 3)) {
        FUN_006ef870();
        return;
      }
      iVar1 = FUN_00aa4a90();
      if ((iVar1 != 0) &&
         ((-15.0 < *(float *)(param_1 + 0xe90) || (*(float *)(param_1 + 0x19d0) < -15.0)))) {
        FUN_006eece0(0xa0004);
        return;
      }
      FUN_006eece0(0xa0003);
      return;
    }
    FUN_006eece0(0x10003);
  }
  return;
}

// 006F87E0  FUN_006f87e0  size=549  [between]
void __fastcall FUN_006f87e0(int *param_1)

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
  
  iVar2 = FUN_006eb7a0();
  if ((iVar2 == 0) && (param_1[0x6a4] != 0)) {
    param_1[0x6a4] = 0;
    FUN_00a8c9b0(0,0x197,0,0);
  }
  iVar2 = FUN_00a8ef10();
  if ((((iVar2 == 0) && (param_1[0x139] == 0)) &&
      (iVar2 = (**(code **)(*param_1 + 0x1fc))(), iVar2 == 0)) &&
     ((param_1[0x6ae] == 0 && (param_1[0x301] == 0)))) {
    fStack_30 = (float)param_1[0x660] - (float)param_1[0x10];
    fStack_2c = (float)param_1[0x661] - (float)param_1[0x11];
    fStack_28 = (float)param_1[0x662] - (float)param_1[0x12];
    fStack_24 = (float)param_1[0x663] - (float)param_1[0x13];
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
      fVar1 = (float)param_1[0x65e] * pfVar3[2] +
              *pfVar3 * (float)param_1[0x65c] + (float)param_1[0x65d] * pfVar3[1];
    }
    iVar2 = (**(code **)(*param_1 + 0x1d8))();
    if (iVar2 == 0) {
      param_1[0x664] = (-(uint)(0.0 <= fVar1) & 0xfffffffd) + 0x9e;
      if ((param_1[0x3a7] & 0x80000U) == 0) {
        uVar4 = 0x80006;
      }
      else {
        uVar4 = 0x80000;
      }
    }
    else if ((param_1[0x3a7] & 0x80000U) == 0) {
      uVar4 = 0x30005;
    }
    else {
      uVar4 = 0x80003;
    }
    FUN_006eece0(uVar4);
    param_1[0x3a7] = param_1[0x3a7] | 0x400000;
  }
  return;
}

// 006F8A10  FUN_006f8a10  size=475  [between]
bool __thiscall FUN_006f8a10(int *param_1,int *param_2,uint *param_3)

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
              iVar2 = FUN_006ec6a0();
              if (iVar2 == 0) {
                iVar2 = FUN_006f34f0();
                if ((iVar2 == 0) && (*(byte *)((int)param_2 + 0x11) < 7)) {
                  iVar2 = (**(code **)(*param_1 + 0x1d8))();
                  if (iVar2 == 0) goto LAB_006f8b6a;
                }
              }
              if (((param_1[0x3a7] & 2U) == 0) && ((param_1[0x3a7] & 0x400U) == 0)) {
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
            param_1[0x6aa] = 0x3ecccccd;
            if ((*param_2 == 0x4b) || (*param_2 == 0x4c)) {
              param_1[0x6aa] = 0x3f19999a;
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
LAB_006f8b6a:
  iVar2 = FUN_00a8eea0();
  if ((iVar2 < 1) && (param_1[0x139] == 0)) {
    param_1[0x664] = 0x136;
    FUN_006eece0(0x80002);
    return true;
  }
  if (iVar4 == -1) {
    FUN_006f32b0();
    *param_3 = 0x400;
  }
  else {
    FUN_006eece0(iVar4);
  }
  *param_3 = *param_3 | 1;
  (**(code **)(*param_1 + 0x220))(0x40a00000);
  return iVar4 != -1;
}

// 006F8BF0  Em8220::vf338  size=64  [class]
void __thiscall Em8220::vf338(int *param_1,undefined4 param_2,int param_3,int param_4)

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

// 006F8C30  FUN_006f8c30  size=654  [callgraph]
void __fastcall FUN_006f8c30(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int aiStack_30 [2];
  undefined1 auStack_28 [4];
  undefined4 local_24 [4];
  undefined4 uStack_14;
  
  if (*(int *)(param_1 + 0x19a4) == 0) {
    if ((*(byte *)(param_1 + 0xea4) & 4) == 0) {
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
        *(uint *)(param_1 + 0xe9c) = *(uint *)(param_1 + 0xe9c) & 0xff7fffff;
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
    *(undefined4 *)(param_1 + 0x19a4) = 1;
  }
  return;
}

// 006F8ED0  FUN_006f8ed0  size=347  [callgraph]
undefined4 FUN_006f8ed0(float *param_1,int param_2)

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
    if (*param_1 != 0.0) goto LAB_006f8f8c;
  }
  if ((param_1[1] == 0.0) && (param_1[2] == 0.0)) {
    return 0;
  }
LAB_006f8f8c:
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

// 006F9030  FUN_006f9030  size=121  [callgraph]
void __fastcall FUN_006f9030(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + 0xea8 + iVar1 * 0x14) == 0) {
      *(undefined4 *)(param_1 + 0xea8 + iVar1 * 0x14) = 1;
      FUN_006eb860(iVar1);
      if (((iVar1 == 6) || (iVar1 == 5)) && ((*(uint *)(param_1 + 0xe9c) & 0x800000) != 0)) {
        *(uint *)(param_1 + 0xe9c) = *(uint *)(param_1 + 0xe9c) & 0xff7fffff;
        FUN_00a93910(1);
      }
      if ((iVar1 == 4) && (*(int *)(param_1 + 0x19e4) != -1)) {
        FUN_00c52700(*(int *)(param_1 + 0x19e4),1);
      }
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 8);
  return;
}

// 006F90C0  FUN_006f90c0  size=36  [callgraph]
undefined4 __fastcall FUN_006f90c0(int param_1)

{
  int iVar1;
  
  if ((*(uint *)(param_1 + 0xe9c) & 0x600000) == 0) {
    iVar1 = FUN_00a81330();
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

// 006F9120  FUN_006f9120  size=95  [callgraph]
void __fastcall FUN_006f9120(int param_1)

{
  int iVar1;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  iVar1 = FUN_006f8ed0(&local_20,0);
  if (iVar1 != 0) {
    *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0x50) + local_20 * -0.1;
    *(float *)(param_1 + 0x54) = local_1c * -0.1 + *(float *)(param_1 + 0x54);
    *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x58) + local_18 * -0.1;
    *(float *)(param_1 + 0x5c) = local_14 * -0.1 + *(float *)(param_1 + 0x5c);
  }
  return;
}

// 006F9180  FUN_006f9180  size=44  [callgraph]
void __fastcall FUN_006f9180(int param_1)

{
  FUN_00a8ee20(0);
  *(undefined4 *)(param_1 + 0x4e4) = 1;
  FUN_006eece0(0x80002);
  *(undefined4 *)(param_1 + 0x1990) = 0x136;
  return;
}

// 006F91B0  FUN_006f91b0  size=504  [callgraph]
void __fastcall FUN_006f91b0(int param_1)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  
  if (((*(int *)(param_1 + 0x61c) != 0) && (*(float *)(param_1 + 0x920) <= 0.0)) &&
     (*(int *)(param_1 + 0x19a8) == 0)) {
    iVar2 = FUN_00a82d50();
    if (iVar2 == 1) {
      FUN_006f9180();
      return;
    }
    if (((*(float *)(param_1 + 0xa90) <= 225.0) && ((*(uint *)(param_1 + 0xe9c) & 0x200000) == 0))
       && ((10.0 < *(float *)(param_1 + 0x19d0) &&
           ((fVar1 = *(float *)(param_1 + 0xa90), !NAN(fVar1) && 49.0 < fVar1 != (fVar1 == 49.0) &&
            (fVar3 = (float10)FUN_00dde300(0,0x3f800000),
            fVar3 < (float10)*(float *)(param_1 + 0x1628) !=
            (fVar3 == (float10)*(float *)(param_1 + 0x1628)))))))) {
      if (*(int *)(param_1 + 0x1468) == 0x70005) {
        *(int *)(param_1 + 0x1630) = *(int *)(param_1 + 0x1630) + 1;
      }
      else {
        *(undefined4 *)(param_1 + 0x1630) = 0;
      }
      if (*(int *)(param_1 + 0x1630) < *(int *)(param_1 + 0x162c)) {
        FUN_006eece0(0x70005);
        return;
      }
    }
    if (*(int *)(param_1 + 0x4a0) == 0) {
      fVar3 = (float10)FUN_006e9df0();
      if ((float10)1.0471976 < fVar3) {
LAB_006f92c5:
        FUN_006eece0(0x70002);
        return;
      }
      fVar1 = *(float *)(param_1 + 0xa90);
      if ((NAN(fVar1) || 9.0 < fVar1 == (fVar1 == 9.0)) || (*(int *)(param_1 + 0x1ab0) < 1)) {
        fVar3 = (float10)FUN_006e9df0();
        if (fVar3 <= (float10)0.6981317) {
          if (81.0 < *(float *)(param_1 + 0xa90)) {
            return;
          }
          iVar2 = FUN_006f90c0();
          if (iVar2 == 0) {
            return;
          }
          FUN_006eece0(0x70003);
          return;
        }
        goto LAB_006f92c5;
      }
    }
    else {
      fVar3 = (float10)FUN_006e9df0();
      if ((float10)1.0471976 < fVar3) goto LAB_006f92c5;
      if (((*(int *)(param_1 + 0x1360) == 0) && (*(float *)(param_1 + 0xa90) <= 20736.0)) &&
         (0 < *(int *)(param_1 + 0x1ab0))) {
        if (0.0 < *(float *)(param_1 + 0x1888)) {
          return;
        }
        iVar2 = FUN_006f90c0();
        if (iVar2 == 0) {
          return;
        }
        FUN_006eece0(0x70004);
        return;
      }
    }
    FUN_006eece0(0x70001);
  }
  return;
}

// 006F93B0  FUN_006f93b0  size=262  [callgraph]
void __fastcall FUN_006f93b0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    uVar1 = 0;
    if ((*(uint *)(param_1 + 0xe9c) & 0x100000) != 0) {
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
  if ((*(float *)(param_1 + 0x19a0) <= 0.0) && ((*(uint *)(param_1 + 0xe9c) & 0x80000) != 0)) {
    if ((*(uint *)(param_1 + 0xe9c) & 0x600000) != 0) goto LAB_006f9462;
    iVar3 = FUN_00a81330();
    if (iVar3 == 0) goto LAB_006f9462;
  }
  if ((iVar2 == 0) || (*(int *)(iVar2 + 0x370) != 0)) {
    *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  }
LAB_006f9462:
  FUN_00a8ee20(0);
  *(undefined4 *)(param_1 + 0x4e4) = 1;
  FUN_006eece0(0x80002);
  *(undefined4 *)(param_1 + 0x1990) = 0x136;
  return;
}

// 006F94C0  FUN_006f94c0  size=285  [callgraph]
void __fastcall FUN_006f94c0(int *param_1)

{
  float fVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  int iVar2;
  float10 fVar3;
  
  if (param_1[0x187] != 0) {
    iVar2 = FUN_00a82d50();
    if (iVar2 == 1) {
      FUN_00a8ee20(0);
      param_1[0x139] = 1;
      FUN_006eece0(0x80002);
      param_1[0x664] = 0x136;
    }
    else {
      if ((((float)param_1[0x2a4] <= 225.0) && ((param_1[0x3a7] & 0x200000U) == 0)) &&
         (fVar1 = (float)param_1[0x2a4], !NAN(fVar1) && 49.0 < fVar1 != (fVar1 == 49.0))) {
        fVar3 = (float10)FUN_00dde300(0,0x3f800000);
        if ((fVar3 < (float10)(float)param_1[0x58a] != (fVar3 == (float10)(float)param_1[0x58a])) &&
           (param_1[0x58c] < param_1[0x58b])) {
          (**(code **)(*param_1 + 0x34c))();
        }
      }
      if (param_1[0x128] == 0) {
        if ((float)param_1[0x2a4] <= 6.25) {
          UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_1 + 0x34c);
          param_1[0x58c] = 0;
                    /* WARNING: Could not recover jumptable at 0x006f95ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE_00)();
          return;
        }
      }
      else if ((float)param_1[0x2a4] <= 100.0) {
        UNRECOVERED_JUMPTABLE_00 = *(code **)(*param_1 + 0x34c);
        param_1[0x58c] = 0;
                    /* WARNING: Could not recover jumptable at 0x006f95db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)();
        return;
      }
    }
  }
  return;
}

// 006F9680  FUN_006f9680  size=71  [callgraph]
void __fastcall FUN_006f9680(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x61c) != 0) {
    iVar1 = FUN_00a82d50();
    if (iVar1 == 1) {
      FUN_00a8ee20(0);
      *(undefined4 *)(param_1 + 0x4e4) = 1;
      FUN_006eece0(0x80002);
      *(undefined4 *)(param_1 + 0x1990) = 0x136;
    }
  }
  return;
}

// 006F9940  FUN_006f9940  size=141  [callgraph]
void __fastcall FUN_006f9940(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1[0x187] == 0) {
    uVar1 = 0x8000000;
    if ((param_1[0x3a7] & 0x100000U) != 0) {
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
                    /* WARNING: Could not recover jumptable at 0x006f99cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 006F9AA0  FUN_006f9aa0  size=582  [callgraph]
void __fastcall FUN_006f9aa0(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if ((param_1[0x3a7] & 0x100000U) != 0) {
    uVar2 = 0x40;
  }
  switch(param_1[0x187]) {
  case 0:
    FUN_00aa4080(0xa7,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x22a] = param_1[0x52f];
    (**(code **)(*param_1 + 0x318))();
    iVar1 = param_1[0x1d9];
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x104) != 1)) {
      *(undefined4 *)(iVar1 + 0x104) = 1;
      *(undefined4 *)(*(int *)(iVar1 + 0xd0) + 4) = 0;
    }
    param_1[0x3a7] = param_1[0x3a7] | 0x80000;
    param_1[0x668] = 0x44160000;
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
      param_1[0x3a7] = param_1[0x3a7] & 0xefffffff;
      (**(code **)(*param_1 + 0x1d4))(0);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar1 = FUN_00a94ce0(0);
    if (iVar1 != 0) {
      FUN_006eece0(0x30007);
      return;
    }
  }
  return;
}

// 006F9D00  FUN_006f9d00  size=114  [callgraph]
void __fastcall FUN_006f9d00(int *param_1)

{
  int iVar1;
  
  if (param_1[0x187] == 0) {
    iVar1 = param_1[0x665];
    if (((iVar1 != 0x1e) && (iVar1 != 0x1d)) && (iVar1 != 0x17)) {
      param_1[0x3a7] = param_1[0x3a7] | 0x80000;
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
                    /* WARNING: Could not recover jumptable at 0x006f9d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 006F9DF0  FUN_006f9df0  size=558  [callgraph]
void __thiscall
FUN_006f9df0(int param_1,short *param_2,undefined4 *param_3,undefined4 *param_4,undefined4 param_5,
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
  psVar7 = (short *)(param_1 + 0x1720);
  while ((*(int *)(psVar7 + 8) != 0 || (*psVar7 != 0))) {
    uVar2 = uVar2 + 1;
    psVar7 = psVar7 + 10;
    if (10 < uVar2) {
      return;
    }
  }
  puVar1 = (undefined2 *)(param_1 + (uVar2 * 5 + 0x5c8) * 4);
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
      if ((*(int *)(param_1 + 0x196c) == 0) && (param_6 != 0)) {
        FUN_00e02630(*(undefined4 *)(param_1 + 0x4f0),0xd,iVar3 + 0x10);
        *(undefined4 *)(param_1 + 0x196c) = 1;
      }
      if (**(char **)(param_2 + 4) != '\0') {
        FUN_00ac94e0(*(char **)(param_2 + 4));
      }
    }
  }
  return;
}

// 006FA020  FUN_006fa020  size=703  [callgraph]
void __thiscall FUN_006fa020(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

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
  
  uVar4 = *(uint *)(param_1 + 0x182c);
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
      *(char *)(param_1 + 0x1828) = *(char *)(param_1 + 0x1828) + '\x01';
      local_104 = (short *)(&DAT_016474a8 + iVar5 * 0xc);
      *(uint *)(param_1 + 0x182c) = *(uint *)(param_1 + 0x182c) | 1 << ((byte)iVar5 & 0x1f);
      uVar4 = 0;
      psVar9 = (short *)(param_1 + 0x1720);
      while ((*(int *)(psVar9 + 8) != 0 || (*psVar9 != 0))) {
        uVar4 = uVar4 + 1;
        psVar9 = psVar9 + 10;
        if (10 < uVar4) {
          return;
        }
      }
      puVar1 = (undefined2 *)(param_1 + (uVar4 * 5 + 0x5c8) * 4);
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
          if (*(int *)(param_1 + 0x196c) == 0) {
            FUN_00e02630(*(undefined4 *)(param_1 + 0x4f0),0xd,iVar5 + 0x10);
            *(undefined4 *)(param_1 + 0x196c) = 1;
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

// 006FA2E0  FUN_006fa2e0  size=703  [callgraph]
void __thiscall FUN_006fa2e0(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

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
  
  uVar4 = *(uint *)(param_1 + 0x1830);
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
      *(char *)(param_1 + 0x1829) = *(char *)(param_1 + 0x1829) + '\x01';
      local_104 = (short *)(&DAT_016474d8 + iVar5 * 0xc);
      *(uint *)(param_1 + 0x1830) = *(uint *)(param_1 + 0x1830) | 1 << ((byte)iVar5 & 0x1f);
      uVar4 = 0;
      psVar9 = (short *)(param_1 + 0x1720);
      while ((*(int *)(psVar9 + 8) != 0 || (*psVar9 != 0))) {
        uVar4 = uVar4 + 1;
        psVar9 = psVar9 + 10;
        if (10 < uVar4) {
          return;
        }
      }
      puVar1 = (undefined2 *)(param_1 + (uVar4 * 5 + 0x5c8) * 4);
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
          if (*(int *)(param_1 + 0x196c) == 0) {
            FUN_00e02630(*(undefined4 *)(param_1 + 0x4f0),0xd,iVar5 + 0x10);
            *(undefined4 *)(param_1 + 0x196c) = 1;
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

// 006FA5A0  FUN_006fa5a0  size=682  [callgraph]
void __thiscall FUN_006fa5a0(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

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
  
  uVar4 = *(uint *)(param_1 + 0x1834);
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
      *(char *)(param_1 + 0x182a) = *(char *)(param_1 + 0x182a) + '\x01';
      local_104 = (short *)(&DAT_01647508 + iVar5 * 0xc);
      *(uint *)(param_1 + 0x1834) = *(uint *)(param_1 + 0x1834) | 1 << ((byte)iVar5 & 0x1f);
      uVar4 = 0;
      psVar9 = (short *)(param_1 + 0x1720);
      while ((*(int *)(psVar9 + 8) != 0 || (*psVar9 != 0))) {
        uVar4 = uVar4 + 1;
        psVar9 = psVar9 + 10;
        if (10 < uVar4) {
          return;
        }
      }
      puVar1 = (undefined2 *)(param_1 + (uVar4 * 5 + 0x5c8) * 4);
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
          if (*(int *)(param_1 + 0x196c) == 0) {
            FUN_00e02630(*(undefined4 *)(param_1 + 0x4f0),0xd,iVar5 + 0x10);
            *(undefined4 *)(param_1 + 0x196c) = 1;
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

// 006FA850  FUN_006fa850  size=909  [callgraph]
void __thiscall FUN_006fa850(int param_1,float param_2)

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
  cVar1 = *(char *)(param_1 + 0x1828);
  while ((cVar1 < '\x04' && (*(float *)(param_1 + 0x17fc + cVar1 * 4) <= param_2))) {
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
    FUN_006fa020(&local_20,&local_30,0x437a0000);
    cVar1 = *(char *)(param_1 + 0x1828);
  }
  cVar1 = *(char *)(param_1 + 0x1829);
  while ((cVar1 < '\x04' && (*(float *)(param_1 + 0x180c + cVar1 * 4) <= param_2))) {
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
    FUN_006fa2e0(&local_30,&local_20,0x437a0000);
    cVar1 = *(char *)(param_1 + 0x1829);
  }
  cVar1 = *(char *)(param_1 + 0x182a);
  while ((cVar1 < '\x03' && (*(float *)(param_1 + 0x181c + cVar1 * 4) <= param_2))) {
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
    FUN_006fa5a0(&local_30,&local_20,0x437a0000);
    cVar1 = *(char *)(param_1 + 0x182a);
  }
  return;
}

// 006FAC80  FUN_006fac80  size=870  [callgraph]
void __fastcall FUN_006fac80(int param_1)

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
  puVar1 = &DAT_016474a8;
  do {
    if ((uVar2 & *(uint *)(param_1 + 0x182c)) == 0) {
      *(char *)(param_1 + 0x1828) = *(char *)(param_1 + 0x1828) + '\x01';
      *(uint *)(param_1 + 0x182c) = *(uint *)(param_1 + 0x182c) | uVar2;
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
      FUN_006f9df0(puVar1,&local_20,&local_30,0x437a0000,0);
    }
    puVar1 = puVar1 + 0xc;
    uVar2 = uVar2 << 1 | (uint)((int)uVar2 < 0);
  } while ((int)puVar1 < 0x16474d8);
  uVar2 = 1;
  puVar1 = &DAT_016474d8;
  do {
    if ((uVar2 & *(uint *)(param_1 + 0x1830)) == 0) {
      *(char *)(param_1 + 0x1829) = *(char *)(param_1 + 0x1829) + '\x01';
      *(uint *)(param_1 + 0x1830) = *(uint *)(param_1 + 0x1830) | uVar2;
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
      FUN_006f9df0(puVar1,&local_30,&local_20,0x437a0000,0);
    }
    puVar1 = puVar1 + 0xc;
    uVar2 = uVar2 << 1 | (uint)((int)uVar2 < 0);
  } while ((int)puVar1 < 0x1647508);
  uVar2 = 1;
  puVar1 = &DAT_01647508;
  do {
    if ((uVar2 & *(uint *)(param_1 + 0x1834)) == 0) {
      *(char *)(param_1 + 0x182a) = *(char *)(param_1 + 0x182a) + '\x01';
      *(uint *)(param_1 + 0x1834) = *(uint *)(param_1 + 0x1834) | uVar2;
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
      FUN_006f9df0(puVar1,&local_30,&local_20,0x437a0000,0);
    }
    puVar1 = puVar1 + 0xc;
    uVar2 = uVar2 << 1 | (uint)((int)uVar2 < 0);
  } while ((int)puVar1 < 0x164752c);
  return;
}

// 006FAFF0  FUN_006faff0  size=45  [callgraph]
void __fastcall FUN_006faff0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)(param_1 + 0x1730);
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

// 006FB300  Em8220::vf44  size=372  [class]
void __fastcall Em8220::vf44(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4a0) != 2) {
    FUN_006faff0();
    (**(code **)(*(int *)(param_1 + 0xf50) + 4))();
    FUN_00a5dc60();
    FUN_00a5dc60();
    FUN_00c57120(*(undefined4 *)(param_1 + 0x4f0));
    FUN_00c4d000(*(undefined4 *)(param_1 + 0x4f0));
    RayCastManager::getWork(param_1 + 0x13f0);
    RayCastManager::getWork(param_1 + 0x13f4);
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
  if (*(int *)(param_1 + 0xd80) != 0) {
    FUN_00dd4940(*(int *)(param_1 + 0xd80));
    *(undefined4 *)(param_1 + 0xd80) = 0;
  }
  RayCastManager::getWork(param_1 + 0x1b24);
  RayCastManager::getWork(param_1 + 0x1b28);
  BehaviorEmBase::vf44();
  return;
}

// 006FB480  Em8220::vf48  size=477  [class]
void __fastcall Em8220::vf48(int param_1)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  undefined *puVar4;
  
  EmBaseDLC::vf48();
  *(undefined4 *)(param_1 + 0x196c) = 0;
  if (((*(int *)(param_1 + 0x4a0) == 0) && ((*(byte *)(param_1 + 0xb00) & 2) != 0)) &&
     (*(int *)(param_1 + 0x4e4) == 0)) {
    DAT_01dc08e4 = *(undefined4 *)(param_1 + 0x870);
    DAT_01dc08e8 = *(undefined4 *)(param_1 + 0x874);
    DAT_01dc08ec = 1;
    FUN_00cad2a0();
  }
  FUN_006f3340();
  *(float *)(param_1 + 0x1624) = *(float *)(param_1 + 0x1624) - *(float *)(param_1 + 0x910);
  *(float *)(param_1 + 0x1888) = *(float *)(param_1 + 0x1888) - *(float *)(param_1 + 0x910);
  if (((*(uint *)(param_1 + 0xe9c) & 0x80000) != 0) &&
     (((*(uint *)(param_1 + 0xe9c) & 0x600000) != 0 || (iVar3 = FUN_00a81330(), iVar3 == 0)))) {
    *(float *)(param_1 + 0x19a0) = *(float *)(param_1 + 0x19a0) - *(float *)(param_1 + 0x910);
  }
  *(float *)(param_1 + 0x1954) = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0x1954);
  if (*(int *)(param_1 + 0x1360) == 0) {
    *(undefined4 *)(param_1 + 0x1954) = 0;
  }
  iVar3 = FUN_00ac48f0(0);
  if (iVar3 == 0) {
    *(uint *)(param_1 + 0xe9c) = *(uint *)(param_1 + 0xe9c) & 0xfffdffff;
  }
  else {
    *(uint *)(param_1 + 0xe9c) = *(uint *)(param_1 + 0xe9c) | 0x20000;
  }
  if ((*(uint *)(param_1 + 0xe9c) & 0x20000) == 0) {
    fVar2 = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0x1a98);
  }
  else {
    fVar2 = -1.0;
  }
  *(float *)(param_1 + 0x1a98) = fVar2;
  *(float *)(param_1 + 0x1ac0) = *(float *)(param_1 + 0x1ac0) - *(float *)(param_1 + 0x910);
  *(uint *)(param_1 + 0xe9c) = *(uint *)(param_1 + 0xe9c) & 0xdfffffff;
  piVar1 = *(int **)(param_1 + 0xa84);
  if (piVar1 != (int *)0x0) {
    puVar4 = &DAT_01be9c38;
    (**(code **)(*piVar1 + 4))(&DAT_01be9c38);
    iVar3 = FUN_00dd6d80(puVar4);
    if ((iVar3 != 0) &&
       (fVar2 = (float)piVar1[0x8c9] - *(float *)(param_1 + 0x44),
       *(float *)(param_1 + 0x19dc) = fVar2, 1.25 < fVar2)) {
      *(uint *)(param_1 + 0xe9c) = *(uint *)(param_1 + 0xe9c) | 0x20000000;
    }
  }
  if ((*(uint *)(param_1 + 0xe9c) & 0x20000000) == 0) {
    fVar2 = *(float *)(param_1 + 0x19e0) - *(float *)(param_1 + 0x910);
    if (fVar2 < 0.0) goto LAB_006fb62d;
  }
  else {
    fVar2 = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0x19e0);
    if (0.0 <= fVar2) goto LAB_006fb62d;
  }
  fVar2 = 0.0;
LAB_006fb62d:
  *(float *)(param_1 + 0x19e0) = fVar2;
  FUN_006eef20();
  FUN_006efc10();
  return;
}

// 006FB660  Em8220::vf264  size=322  [class]
undefined4 __thiscall Em8220::vf264(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  
  FUN_0040ac60(param_2);
  *(undefined4 *)(param_1 + 0x1ad0) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x1ad4) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x1ad8) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x1adc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1ae4) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x1ae0) = 0;
  *(undefined4 *)(param_1 + 0x1ae8) = 0;
  FUN_00aa0ba0(*(undefined4 *)(param_1 + 0xb08),*(undefined4 *)(param_1 + 0xb9c));
  *(undefined4 *)(param_1 + 0x1b00) = 0;
  if (*(int *)(param_1 + 0xb84) == 1) {
    FUN_00aa0ba0(*(undefined4 *)(param_1 + 0xb08),*(undefined4 *)(param_1 + 0xb9c));
    cVar2 = *(char *)(param_1 + 0xb24);
    if ((*(byte *)(param_1 + 0xb00) & 0x20) != 0) {
      *(undefined4 *)(param_1 + 0x1b00) = 1;
    }
    uVar3 = 0xe0001;
  }
  else {
    if (*(int *)(param_1 + 0xb84) != 2) goto LAB_006fb75f;
    cVar2 = *(char *)(param_1 + 0xb24);
    if ((*(byte *)(param_1 + 0xb00) & 0x20) != 0) {
      *(undefined4 *)(param_1 + 0x1b00) = 1;
    }
    uVar3 = 0xe0000;
  }
  FUN_006eece0(uVar3);
  if (cVar2 != -1) {
    iVar1 = FUN_00d46690(cVar2);
    if (iVar1 != 0) {
      FUN_00a5dcc0(iVar1);
    }
  }
LAB_006fb75f:
  FUN_00aa0920(*(undefined4 *)(param_1 + 0xb0c));
  if (((*(byte *)(param_1 + 0xb00) & 0x10) != 0) && (*(int *)(param_1 + 0x1b00) == 0)) {
    FUN_006eece0(0x10010);
  }
  FUN_006ea280();
  FUN_00a8d560(1);
  return 1;
}

// 006FB7B0  FUN_006fb7b0  size=508  [between]
void __fastcall FUN_006fb7b0(int param_1)

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
  if (*(int *)(param_1 + 0x13f0) != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x1270 + *(int *)(param_1 + 0x1460) * 0x30);
    local_8 = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    iVar4 = FUN_00907640((int *)(param_1 + 0x13f0),&local_8,0);
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
      iVar4 = *(int *)(param_1 + 0x1460);
      if ((((iVar4 == 5) || (iVar4 == 6)) || (iVar4 == 7)) &&
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
    uVar6 = *(int *)(param_1 + 0x1460) + 1U & 0x80000007;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xfffffff8) + 1;
    }
    *(uint *)(param_1 + 0x1460) = uVar6;
  }
  FUN_006ed500();
  if (*(int *)(param_1 + 0x1360) == 0) {
    fVar3 = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0x19d0);
    if (fVar3 < 0.0) {
      fVar3 = 0.0;
    }
  }
  else {
    fVar3 = *(float *)(param_1 + 0x19d0) - *(float *)(param_1 + 0x910);
    if (0.0 <= fVar3) {
      fVar3 = 0.0;
    }
  }
  *(float *)(param_1 + 0x19d0) = fVar3;
  if (*(int *)(param_1 + 0x13c0) == 0) {
    fVar3 = *(float *)(param_1 + 0xe90) - *(float *)(param_1 + 0x910);
    if (fVar3 < 0.0) goto LAB_006fb99e;
  }
  else {
    fVar3 = *(float *)(param_1 + 0xe90) + *(float *)(param_1 + 0x910);
    if (0.0 <= fVar3) {
LAB_006fb99e:
      *(float *)(param_1 + 0xe90) = fVar3;
      return;
    }
  }
  *(undefined4 *)(param_1 + 0xe90) = 0;
  return;
}

// 006FB9B0  FUN_006fb9b0  size=734  [between]
void __fastcall FUN_006fb9b0(int param_1)

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
    if (*(int *)(param_1 + 0x13f4) != 0) {
      RayCastManager::getWork(param_1 + 0x13f4);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x1400) == 0) {
    if (*(int *)(param_1 + 0x13f4) != 0) {
      local_54 = 0;
      iVar4 = FUN_009075e0(param_1 + 0x13f4,&local_54,&local_40,&local_30);
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
          *(float *)(param_1 + 0x1410) = local_20;
          *(float *)(param_1 + 0x1414) = fStack_1c;
          *(float *)(param_1 + 0x1418) = fStack_18;
          *(float *)(param_1 + 0x141c) = fStack_14;
          *(undefined4 *)(param_1 + 0x1420) = *puVar2;
          *(undefined4 *)(param_1 + 0x1424) = puVar2[1];
          *(undefined4 *)(param_1 + 0x1428) = puVar2[2];
          *(undefined4 *)(param_1 + 0x142c) = puVar2[3];
          iVar4 = *(int *)(param_1 + 0xa84);
          local_50 = *(float *)(iVar4 + 0x40) - *(float *)(param_1 + 0x1410);
          local_48 = *(float *)(iVar4 + 0x48) - *(float *)(param_1 + 0x1418);
          local_44 = *(float *)(iVar4 + 0x4c) - *(float *)(param_1 + 0x141c);
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
          if (0.7 <= *(float *)(param_1 + 0x1428) * local_48 +
                     local_50 * *(float *)(param_1 + 0x1420) +
                     *(float *)(param_1 + 0x1424) * local_4c) {
            *(undefined4 *)(param_1 + 0x1454) = 0x41f00000;
            *(undefined4 *)(param_1 + 0x1400) = 1;
            RayCastManager::getWork(param_1 + 0x13f4);
          }
        }
      }
    }
    FUN_006ed920();
  }
  else {
    fVar1 = *(float *)(param_1 + 0x1454) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x1454) = fVar1;
    if (fVar1 <= 0.0) {
      *(undefined4 *)(param_1 + 0x1400) = 0;
      *(undefined4 *)(param_1 + 0x1404) = 0;
      return;
    }
  }
  return;
}

// 006FBC90  FUN_006fbc90  size=83  [between]
void __fastcall FUN_006fbc90(int param_1)

{
  int iVar1;
  
  if ((((-15.0 < *(float *)(param_1 + 0xe90)) || (*(float *)(param_1 + 0x19d0) < -15.0)) &&
      (iVar1 = FUN_00aa4a90(), iVar1 != 0)) && (*(int *)(param_1 + 0x1b54) == 0)) {
    FUN_006eece0(0x1000d);
    return;
  }
  FUN_006eece0(0x10003);
  return;
}

// 006FBCF0  Em8220::vf34C  size=182  [class]
void __fastcall Em8220::vf34C(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1[0x6c0] == 0) {
    (**(code **)(*param_1 + 0x1f8))(0);
    (**(code **)(*param_1 + 0x1d4))(0);
    (**(code **)(*param_1 + 0x314))();
    iVar1 = param_1[0x1d9];
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x104) != 0)) {
      *(undefined4 *)(iVar1 + 0x104) = 0;
    }
    param_1[0x3a7] = param_1[0x3a7] & 0xffffffbf;
    uVar2 = 0x10000;
    if (param_1[0x128] == 1) {
      uVar2 = 0x10001;
    }
    iVar1 = FUN_006ef5d0();
    if (iVar1 == 0) {
      if (param_1[0x139] == 0) {
        if ((param_1[0x3a7] & 0x80000U) != 0) {
          uVar2 = 0x70000;
        }
      }
      else {
        uVar2 = 0x60000;
      }
    }
    else {
      uVar2 = 0x60005;
    }
    param_1[0x3a7] = param_1[0x3a7] & 0xf7ffffff;
    FUN_006eece0(uVar2);
  }
  return;
}

// 006FBDB0  FUN_006fbdb0  size=335  [between]
void __thiscall FUN_006fbdb0(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  if (param_1[0x301] != 0) {
    FUN_006eece0(0x60003);
    return;
  }
  if ((param_1[0x294] != 0) || (param_2 != 0)) {
    FUN_00ac8e10(1);
    if ((*(byte *)((int)param_1 + 0xe9e) & 1) != 0) {
      FUN_00a8c9b0(0,2,0x3f800000,0);
      param_1[0x3a7] = param_1[0x3a7] & 0xfffeffff;
    }
    if ((param_1[0x3a7] & 0x8000U) == 0) {
      FUN_00e02240(param_1[0x13c],3);
      param_1[0x3a7] = param_1[0x3a7] | 0x8000;
      FUN_00a85670(param_1,1);
    }
    (**(code **)(*param_1 + 0x20))();
    if (param_1[0x6a4] != 0) {
      param_1[0x6a4] = 0;
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
    FUN_006eece0(0x60002);
    if (param_1[0x1d9] != 0) {
      FUN_008e3c10();
    }
    iVar1 = FUN_00e5e0c0("em0220_se_dmg_explosion",param_1,0xffffffff,0);
    param_1[0x6a7] = iVar1;
    FUN_00940450(param_1[0x20f]);
    (**(code **)(*param_1 + 0x364))(0xffffffff);
  }
  return;
}

// 006FBF00  FUN_006fbf00  size=522  [between]
/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_006fbf00(int param_1)

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
  
  *(int *)(param_1 + 0x14c0) = *(int *)(param_1 + 0x14c0) + 1;
  fStack_394 = 5.60519e-45;
  puStack_398 = (undefined4 *)0x6fbf1d;
  iVar1 = FUN_00a12210();
  if (iVar1 != 0) {
    local_360 = 0;
    puStack_39c = &local_360;
    local_35c[0] = 0.0;
    local_35c[1] = 1.4;
    pfStack_3a0 = (float *)0x6fbf4a;
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
    local_35c[7] = *(float *)(param_1 + 0x1248);
    uStack_338 = *(undefined4 *)(param_1 + 0x124c);
    uStack_2b8 = uStack_2b8 | 0x10000000;
    uStack_334 = *(undefined1 *)(param_1 + 0x1254);
    uStack_33c = *(undefined4 *)(param_1 + 0x1250);
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

// 006FC110  FUN_006fc110  size=814  [between]
void __thiscall FUN_006fc110(int *param_1,int param_2)

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
    auStack_33c[1] = 0x38372;
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
    iStack_320 = param_1[0x497];
    iStack_328 = param_1[0x496];
    uStack_31c = (undefined1)param_1[0x499];
    iStack_324 = param_1[0x498];
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

// 006FC440  FUN_006fc440  size=710  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_006fc440(int param_1)

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
  
  if ((_DAT_01b35700 & 1) == 0) {
    _DAT_01b35700 = _DAT_01b35700 | 1;
    _DAT_01b356f0 = 0;
    _DAT_01b356f4 = 0;
    _DAT_01b356f8 = 0x40066666;
  }
  iVar5 = FUN_00a81330();
  if (((iVar5 != 0) && (iVar5 = FUN_00a7c8a0(), iVar5 != 0)) &&
     (iVar5 = FUN_00a12210(0), iVar5 != 0)) {
    D3DXVec3TransformNormal(local_370,&DAT_01b356f0,iVar5 + 0x10);
    fStack_37c = *(float *)(iVar5 + 0x40) + fStack_37c;
    fStack_378 = *(float *)(iVar5 + 0x44) + fStack_378;
    fStack_374 = *(float *)(iVar5 + 0x48) + fStack_374;
    fVar1 = *(float *)(param_1 + 0x1870) - fStack_37c;
    fVar4 = *(float *)(param_1 + 0x1874) - fStack_378;
    fVar3 = *(float *)(param_1 + 0x1878) - fStack_374;
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
    fVar7 = (float10)FUN_006f2240();
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
    FUN_006ef3e0(auStack_32c);
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

// 006FC710  FUN_006fc710  size=619  [between]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_006fc710(int param_1)

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
  
  if ((_DAT_01b35720 & 1) == 0) {
    _DAT_01b35720 = _DAT_01b35720 | 1;
    _DAT_01b35710 = 0;
    _DAT_01b35714 = 0;
    _DAT_01b35718 = 0x40066666;
  }
  iVar3 = FUN_00a81330();
  if (((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) &&
     (iVar3 = FUN_00a12210(0), iVar3 != 0)) {
    D3DXVec3TransformNormal(&local_360,&DAT_01b35710,iVar3 + 0x10);
    fStack_36c = *(float *)(iVar3 + 0x40) + fStack_36c;
    fStack_368 = *(float *)(iVar3 + 0x44) + fStack_368;
    fStack_364 = *(float *)(iVar3 + 0x48) + fStack_364;
    fVar8 = *(float *)(param_1 + 0x1870) - fStack_36c;
    fVar9 = *(float *)(param_1 + 0x1874) - fStack_368;
    fStack_374 = *(float *)(param_1 + 0x1878) - fStack_364;
    fVar2 = *(float *)(param_1 + 0x187c) - local_360;
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
    FUN_006ef480(auStack_32c);
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

// 006FC980  FUN_006fc980  size=76  [between]
undefined4 __fastcall FUN_006fc980(int param_1)

{
  int iVar1;
  
  if ((15.0 < *(float *)(param_1 + 0x19e0)) || (*(float *)(param_1 + 0x19d0) < -10.0)) {
    return 0;
  }
  if (((*(int *)(param_1 + 0x4a0) != 0) || ((*(byte *)(param_1 + 0xb00) & 2) == 0)) &&
     (iVar1 = FUN_00a90070(5), iVar1 == 0)) {
    return 0;
  }
  return 1;
}

// 006FC9D0  FUN_006fc9d0  size=255  [between]
void __fastcall FUN_006fc9d0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = FUN_00a81330();
  iVar1 = param_1 + 0x1b28;
  if (*(int *)(param_1 + 0x1b28) != 0) {
    iVar2 = FUN_00907640(iVar1,0,0);
    if (iVar2 != 0) {
      FUN_00a7c950();
    }
    RayCastManager::getWork(iVar1);
    return;
  }
  iVar3 = FUN_006ef670(iVar2);
  if (iVar3 != 0) {
    FUN_00a7c950();
    iVar2 = FUN_00c49730(*(undefined4 *)(param_1 + 0x4f0),*(undefined4 *)(param_1 + 0x94),0x3fc90fdb
                         ,0x41200000,0);
  }
  if (iVar2 != 0) {
    iVar3 = FUN_00a81330();
    if (iVar3 == iVar2) {
      *(float *)(param_1 + 0x1b08) = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0x1b08);
      return;
    }
    *(undefined4 *)(param_1 + 0x1b08) = 0;
    uVar4 = FUN_00a7c7f0();
    FUN_00a7c960(uVar4);
    FUN_006ef750(iVar1);
    return;
  }
  *(undefined4 *)(param_1 + 0x1b08) = 0;
  FUN_00a7c950();
  return;
}

// 006FCAD0  FUN_006fcad0  size=539  [between]
undefined4 __fastcall FUN_006fcad0(int param_1)

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
  if (((*(int *)(param_1 + 0x4a0) == 0) && ((*(uint *)(param_1 + 0xe9c) & 0x600000) == 0)) &&
     (iVar3 = FUN_00a81330(), iVar3 != 0)) {
    if (*(float *)(param_1 + 0xa90) <= 9.0) {
      FUN_006eece0(0x20002);
      return 1;
    }
    if ((*(float *)(param_1 + 0xa90) <= 64.0) && (iVar3 = FUN_006e9710(0x41700000), iVar3 != 0)) {
      FUN_006eece0(0x20000);
      return 1;
    }
    if (*(float *)(param_1 + 0xa90) <= 110.25) {
      FUN_006eece0(0x20001);
      return 1;
    }
    if (256.0 < *(float *)(param_1 + 0xa90)) {
      return 0;
    }
    iVar3 = FUN_006fc980();
    if (iVar3 == 0) {
      return 0;
    }
    sVar2 = FUN_00dde2d0(0,100);
    if ((0x41 < sVar2) && (iVar3 = FUN_00a8cab0(), iVar3 != 0x10003)) goto LAB_006fcc06;
    uVar4 = FUN_00dde2d0(0,100);
    if (((uVar4 & 1) != 0) && (*(int *)(param_1 + 0x4a0) == 0)) goto LAB_006fccd4;
  }
  else {
    if (((256.0 < *(float *)(param_1 + 0xa90)) ||
        (fVar1 = *(float *)(param_1 + 0xa90), NAN(fVar1) || 64.0 < fVar1 == (fVar1 == 64.0))) ||
       (iVar3 = FUN_006fc980(), iVar3 == 0)) {
      return 0;
    }
    sVar2 = FUN_00dde2d0(0,100);
    if ((0x41 < sVar2) && (iVar3 = FUN_00a8cab0(), iVar3 != 0x10003)) {
LAB_006fcc06:
      FUN_006eece0(0x20008);
      return 1;
    }
    uVar4 = FUN_00dde2d0(0,100);
    if ((((uVar4 & 1) != 0) && (*(int *)(param_1 + 0x4a0) == 0)) &&
       (iVar3 = FUN_006f90c0(), iVar3 != 0)) {
LAB_006fccd4:
      FUN_006eece0(0x20005);
      return 1;
    }
  }
  FUN_006eece0(0x20006);
  return 1;
}

// 006FCCF0  FUN_006fccf0  size=1106  [between]
void __fastcall FUN_006fccf0(int *param_1)

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
    if ((param_1[0x519] == 0x10006) || (param_1[0x519] == 0x10007)) {
      FUN_00aa4080(10,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x248] = 0;
      param_1[0x187] = 2;
      FUN_00ac80a0(0x3f800000,0x3f800000);
      return;
    }
    FUN_00aa4080(0xb,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x248] = 0;
    param_1[0x530] = 0;
    param_1[0x532] = 0;
    sVar5 = FUN_00dde2d0(4,6);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x531] = (int)sVar5;
  case 1:
    FUN_006e9bd0(param_1[0x2a1] + 0x40,0x3dcccccd,0x3d32b8c2);
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
    FUN_006e9bd0(param_1 + 600,0x3e75c28f,0x3db2b8c2);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    if (((float)param_1[0x2a4] <= 9.0) &&
       (fVar1 = (float)param_1[0x248], param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]),
       fVar1 - (float)param_1[0x244] <= 0.0)) {
      FUN_006fbf00();
      param_1[0x248] = 0x41200000;
    }
    bVar4 = false;
    fVar1 = (float)param_1[600] - (float)param_1[0x10];
    fVar1 = ((float)param_1[0x25a] - (float)param_1[0x12]) *
            ((float)param_1[0x25a] - (float)param_1[0x12]) + fVar1 * fVar1;
    if (((param_1[0x49c] != 0) && (param_1[0x49d] != 0)) &&
       (fVar3 = ((float)param_1[0x12] - (float)param_1[0x4a2]) *
                ((float)param_1[0x12] - (float)param_1[0x4a2]) +
                ((float)param_1[0x10] - (float)param_1[0x4a0]) *
                ((float)param_1[0x10] - (float)param_1[0x4a0]),
       fVar3 < 7.8399997 != (fVar3 == 7.8399997))) {
      bVar4 = true;
    }
    if ((!NAN(fVar1) && fVar1 < 2.25 != (fVar1 == 2.25)) || (bVar4)) {
      if ((param_1[0x530] < param_1[0x531]) && (param_1[0x532] < 3)) {
        param_1[0x532] = param_1[0x532] + 1;
        FUN_006eece0(0x10006);
        return;
      }
      FUN_00aa4080(0xc,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = 4;
      FUN_00ac80a0(0x3f800000,0x3f800000);
    }
    iVar6 = FUN_006eddc0();
    if (iVar6 != 0) {
      FUN_006eece0(0x10007);
      return;
    }
    break;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar6 = FUN_00a94ce0(0);
    if (iVar6 != 0) {
      pcVar2 = *(code **)(*param_1 + 0x34c);
      param_1[0x530] = 0;
      (*pcVar2)();
    }
  }
  return;
}

// 006FD290  FUN_006fd290  size=1250  [between]
void __fastcall FUN_006fd290(int *param_1)

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
    param_1[0x3a7] = param_1[0x3a7] | 0x40;
    uVar14 = 0x3e088889;
    uVar15 = 0xbf800000;
    param_1[0x250] = 0;
    param_1[0x251] = 0;
    if (param_1[0x519] == 0x20008) {
      uVar14 = 0x3eaaaaab;
      uVar15 = 0x3f8aaaab;
    }
    FUN_00aa4080(0x6a,0,uVar14,0x3f800000,0x8038000,uVar15,0x3f800000);
    param_1[0x3a7] = param_1[0x3a7] | 0x20;
    param_1[0x187] = param_1[0x187] + 1;
    goto LAB_006fd339;
  case 1:
LAB_006fd339:
    iVar16 = FUN_00a8c760(0x10);
    if (iVar16 != 0) {
      param_1[0x3a7] = param_1[0x3a7] & 0xffffffdf;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar16 = FUN_00a8c760(0);
    if (iVar16 != 0) {
      FUN_006e9bd0(param_1[0x2a1] + 0x40,0x3e99999a,0x3e567750);
    }
    iVar16 = FUN_00a94ce0(0);
    if (iVar16 != 0) {
      param_1[0x501] = 0;
      param_1[0x514] = 0;
      param_1[0x500] = 0;
      param_1[0x515] = 0;
      FUN_008e5c50(0xd);
      param_1[0x3a7] = param_1[0x3a7] | 8;
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
    FUN_006e9560((float)param_1[0x244] * 0.5);
    fVar12 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar12 - (float)param_1[0x244]);
    if (((fVar10 - fVar11) * (fVar4 - fVar5) +
         (fVar6 - fVar7) * (fVar13 - fVar1) + (fVar8 - fVar9) * (fVar2 - fVar3) < 0.0) ||
       (fVar12 - (float)param_1[0x244] <= 0.0)) {
      if ((*(byte *)(param_1 + 0x3a7) & 8) != 0) {
        FUN_008e5c50(7);
        param_1[0x3a7] = param_1[0x3a7] & 0xfffffff7;
      }
      iVar16 = FUN_006f0440();
      if (iVar16 != 0) {
        param_1[0x251] = 1;
      }
      iVar16 = FUN_006ee230(0x41200000);
      if ((iVar16 != 0) && (param_1[0x251] == 0)) {
        FUN_00aa4080(0x6c,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
        param_1[0x187] = param_1[0x187] + 1;
        return;
      }
      FUN_00aa4080(0x6d,0,0x3d888889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    iVar16 = FUN_006e9b60();
    if (iVar16 != 0) {
      FUN_006ee040();
      FUN_006eece0(0x20009);
      return;
    }
    break;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar16 = FUN_00a8c760(0);
    if (iVar16 != 0) {
      FUN_006e9bd0(param_1[0x2a1] + 0x40,0x3e23d70a,0x3d8efa35);
    }
    iVar16 = 0;
    if (param_1[0x251] != 0) {
      iVar16 = FUN_00a8c760(4);
    }
    iVar17 = FUN_00a94ce0(0);
    if ((iVar17 != 0) || (iVar16 != 0)) {
      if ((float)param_1[0x678] <= 15.0) {
        param_1[0x587] = param_1[0x587] + 1;
        if (param_1[0x251] != 0) {
          FUN_006eece0(0x20003);
          return;
        }
        if (((((*(byte *)(param_1 + 0x3a7) & 0x10) != 0) && (param_1[0x587] < param_1[0x588])) &&
            (fVar18 = (float10)FUN_006e9df0(), fVar18 < (float10)0.7853982)) &&
           ((*(byte *)(param_1 + 0x3a7) & 1) == 0)) {
          FUN_006eece0(0x20008);
          return;
        }
        param_1[0x587] = 0;
        param_1[0x3a7] = param_1[0x3a7] & 0xffffffef;
        if (((param_1[0x128] == 0) && (iVar16 = FUN_006f90c0(), iVar16 != 0)) &&
           ((fVar18 = (float10)FUN_006e9df0(), fVar18 < (float10)0.87266463 &&
            (fVar13 = (float)param_1[0x2a4], !NAN(fVar13) && 49.0 < fVar13 != (fVar13 == 49.0))))) {
          FUN_00dde300(0,0x3f800000);
        }
      }
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
  }
  return;
}

// 006FD790  FUN_006fd790  size=579  [between]
void __fastcall FUN_006fd790(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0x7f,0,0x3e088889,0x3f800000,0x8038000,0xbf800000,0x3f800000);
    param_1[0x60f] = param_1[0x60f] + 1;
    if ((param_1[0x60e] <= param_1[0x60f]) && (param_1[0x452] != 0)) {
      (**(code **)(param_1[0x42c] + 8))(0,0,0);
    }
    FUN_00c272a0(0x40a00000);
    FUN_006ea520();
    FUN_006fc440();
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
  FUN_006f22c0(param_1 + 0x61c,1);
  iVar5 = FUN_00a94ce0(0);
  if (iVar5 != 0) {
    if (param_1[0x60e] <= param_1[0x60f]) {
      if ((param_1[0x3a7] & 0x400U) == 0) {
        param_1[0x3a7] = param_1[0x3a7] | 0x400;
        param_1[0x611] = (int)((float)param_1[0x610] * 60.0);
        FUN_006eece0(0x10009);
      }
      if (param_1[0x426] != 0) {
        (**(code **)(param_1[0x400] + 8))(0,0,0);
      }
      param_1[0x60f] = 0;
      return;
    }
    iVar5 = FUN_00ac4780();
    if ((iVar5 != 4) && (param_1[0x6a9] <= param_1[0x6a8])) {
      param_1[0x622] = (int)((float)param_1[0x629] * 60.0);
      FUN_006ef500();
      FUN_006ef530(0);
      (**(code **)(*param_1 + 0x34c))();
      return;
    }
    FUN_006eece0(0x2000b);
  }
  return;
}

// 006FDAF0  Em8220::vf19C  size=179  [class]
void __thiscall Em8220::vf19C(int *param_1,int param_2,undefined4 param_3)

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

// 006FDBB0  FUN_006fdbb0  size=189  [between]
undefined4 __thiscall FUN_006fdbb0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  if (((*(int *)(param_1 + 0x4a0) == 0) && ((*(byte *)(param_1 + 0xb00) & 2) != 0)) &&
     ((*(uint *)(param_1 + 0xe9c) & 0x40000) == 0)) {
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
      goto LAB_006fdc43;
    }
  }
  else if (uVar1 == 0) goto LAB_006fdc43;
  if (*(int *)(param_2 + 0x94) == 0) {
    return 0;
  }
  FUN_006eb860(0xffffffff);
  FUN_006fac80();
  FUN_006ed450();
LAB_006fdc43:
  if ((*(int *)(param_2 + 0x94) != 0) && (iVar2 = FUN_00ac8cd0(param_2), iVar2 != 0)) {
    FUN_00ac8d00(param_1,param_2,0);
    return 1;
  }
  return 0;
}

// 006FDC70  FUN_006fdc70  size=1988  [between]
undefined4 __thiscall FUN_006fdc70(int *param_1,int *param_2,uint *param_3)

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
  int *local_8;
  
  param_1[0x3a7] = param_1[0x3a7] & 0x7fffffff;
  if ((param_1[0x3a7] & 0x80000U) != 0) {
    uVar7 = FUN_006f8a10(param_2,param_3);
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
  (**(code **)(*param_1 + 0x1d8))();
  if (((((*(byte *)((int)param_2 + 0x8e) & 1) != 0) || (*param_2 == 0x4b)) || (*param_2 == 0x4c)) &&
     (0 < param_1[0x3d2])) {
    *param_3 = *param_3 | 0x40;
    bVar5 = true;
  }
  iVar8 = *param_2;
  if (iVar8 == 0x92) {
    bVar4 = true;
    if ((param_1[0x128] == 0) && ((*(byte *)(param_1 + 0x2c0) & 2) != 0)) {
      param_1[0x3a7] = param_1[0x3a7] | 0x40000;
    }
    else {
      FUN_006ed450();
    }
    iVar8 = *param_2;
    if (iVar8 != 0x92) goto LAB_006fdd55;
LAB_006fdd63:
    *param_3 = *param_3 & 0xffffffbf | 0x20;
  }
  else {
LAB_006fdd55:
    if ((iVar8 == 0x4f) && (0 < param_1[0x3d2])) goto LAB_006fdd63;
  }
  if (((((param_1[0x128] != 0) || ((*(byte *)(param_1 + 0x2c0) & 2) == 0)) &&
       (iVar8 = FUN_00a8eea0(), 0 < iVar8)) &&
      ((param_1[0x139] == 0 && (param_1[0x69e] <= param_1[0x69f])))) &&
     ((param_1[0x3a7] & 0x80000U) == 0)) {
    *param_3 = *param_3 | 1;
    if (((*(byte *)(param_1 + 0x3a7) & 2) != 0) && (param_1[0x186] == 0x3000a)) {
      return 1;
    }
    param_1[0x3a7] = param_1[0x3a7] | 2;
    param_1[0x52b] = param_1[0x52e];
    param_1[0x52a] = (int)((float)param_1[0x52d] * 60.0);
    param_1[0x52c] = 0;
    param_1[0x69f] = 0;
    FUN_006eece0(0x3000a);
    return 1;
  }
  iVar8 = FUN_006ef5d0();
  if ((iVar8 != 0) && (param_1[0x6a0] == 0)) {
    param_1[0x6a0] = 1;
    FUN_00e5e1b0("bgm_BladeWolf_Finish");
  }
  if (((*(byte *)(param_2 + 0x23) & 1) != 0) && ((float)param_1[0x6b0] <= 0.0)) {
    FUN_00aa92c0(0x18e);
    iVar9 = FUN_00a8eea0();
    if ((0 < iVar9) || (param_1[0x139] != 0)) {
      if (((*(byte *)(param_1 + 0x3a7) & 2) == 0) || (param_1[0x186] != 0x3000a)) {
        param_1[0x3a7] = param_1[0x3a7] | 2;
        param_1[0x52b] = param_1[0x52e];
        param_1[0x52a] = (int)((float)param_1[0x52d] * 60.0);
        param_1[0x52c] = 0;
        param_1[0x69f] = 0;
        FUN_006eece0(0x3000a);
      }
      param_1[0x6b0] = param_1[0x6b1];
      *param_3 = *param_3 | 1;
      return 1;
    }
LAB_006fdf56:
    FUN_006eece0(0x60000);
    *param_3 = *param_3 | 1;
    return 1;
  }
  if ((*param_2 == 0x4f) && (param_1[0x139] == 0)) {
    iVar8 = FUN_006ef5d0();
    if (iVar8 != 0) {
      FUN_006eece0(0x60004);
      *param_3 = *param_3 | 1;
      return 1;
    }
    iVar8 = FUN_00a8eea0();
    if ((iVar8 < 1) && (param_1[0x139] == 0)) goto LAB_006fdf56;
    iVar8 = FUN_00a8cab0();
    if (iVar8 == 0x30002) {
      if ((*(byte *)(param_1 + 0x3a7) & 2) == 0) {
        param_1[0x3a7] = param_1[0x3a7] | 2;
        param_1[0x52a] = (int)((float)param_1[0x52d] * 60.0);
        param_1[0x52b] = param_1[0x52e];
        param_1[0x52c] = 0;
        FUN_006eece0(0x30009);
      }
      *param_3 = *param_3 | 1;
      return 1;
    }
  }
  else {
    if (((((*(byte *)(param_1 + 0x3a7) & 0x20) != 0) ||
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
    if (*param_2 == 0x92) {
      bVar3 = false;
    }
    if (((((*(byte *)(param_1 + 0x3a7) & 0x20) == 0) && (iVar8 = FUN_00a8c760(0x32), iVar8 == 0)) &&
        ((((*(byte *)(param_1 + 0x3a7) & 4) != 0 || (iVar8 = FUN_00a8c760(0x10), iVar8 != 0)) &&
         ((!bVar4 && (!bVar5)))))) ||
       ((iVar8 = FUN_006ef5d0(), iVar8 != 0 ||
        (((param_1[0x139] != 0 || (iVar8 = FUN_006eeed0(), iVar8 != 0)) || (*param_2 == 0x59)))))) {
      iVar9 = -1;
    }
    else if ((param_2[0x23] & 0x20000U) == 0) {
      if (bVar6) {
        iVar8 = FUN_006eadc0(param_2);
        if (iVar8 == 0) {
          iVar8 = (**(code **)(*param_1 + 0x1d8))();
          if ((iVar8 == 0) && (bVar3)) {
            iVar8 = FUN_00a8cab0();
            if ((iVar8 != 0x30007) && (iVar8 = FUN_00a8cab0(), iVar8 != 0x30008)) {
              iVar9 = 0x30008;
            }
          }
          else {
            uVar1 = param_2[0x24];
            if (((uVar1 & 0x800000) == 0) && (*param_2 != 0x92)) {
              if ((uVar1 & 0x1000000) == 0) {
                if ((*(byte *)((int)param_2 + 0x11) < 10) && ((uVar1 & 0x2000000) == 0))
                goto LAB_006fe1cd;
                iVar9 = 0x30001;
              }
              else {
                iVar9 = 0x30006;
              }
            }
            else if ((param_1[0x3a7] & 0x10000000U) == 0) {
              iVar9 = 0x30004;
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
LAB_006fe1cd:
        iVar8 = FUN_006ec6a0();
        if (((iVar8 != 0) ||
            ((((iVar8 = FUN_006f34f0(), iVar8 != 0 || (6 < *(byte *)((int)param_2 + 0x11))) ||
              (iVar8 = (**(code **)(*param_1 + 0x1d8))(), iVar8 != 0)) || (bVar4)))) &&
           (((param_1[0x3a7] & 2U) == 0 && ((param_1[0x3a7] & 0x400U) == 0)))) {
          iVar9 = (**(code **)(*param_1 + 0x1d8))();
          iVar9 = (-(uint)(iVar9 != 0) & 5) + 0x30000;
          iVar8 = (**(code **)(*param_1 + 0x1d8))();
          if ((iVar8 != 0) &&
             (((bVar6 && (local_8 != (int *)0x0)) &&
              (iVar8 = (**(code **)(*local_8 + 0x1d8))(), iVar8 == 0)))) {
            iVar9 = 0x30001;
          }
        }
      }
    }
    else {
      iVar9 = bVar2 + 0x3000b;
    }
  }
  iVar8 = FUN_006ef5d0();
  if ((((iVar8 != 0) && (iVar8 = FUN_006f34f0(), iVar8 != 0)) && (param_1[0x139] == 0)) &&
     (param_1[0x6ae] == 0)) {
    param_1[0x520] = 0;
    param_1[0x521] = 0;
    iVar9 = 0x30001;
  }
  iVar8 = FUN_00a8eea0();
  if (((iVar8 < 1) && (param_1[0x139] == 0)) && (param_1[0x6ae] == 0)) {
    if (*param_2 == 0x92) {
      uVar7 = 0x30008;
LAB_006fe2f2:
      FUN_006eece0(uVar7);
      *param_3 = *param_3 | 1;
      return 1;
    }
    if (((iVar9 == 0x30000) || (iVar9 == -1)) ||
       ((iVar8 = FUN_006ebf70(), iVar8 != 0 && (iVar9 == 0x30001)))) {
      uVar7 = 0x60000;
      goto LAB_006fe2f2;
    }
  }
  if (iVar9 == 0x30000) {
    iVar8 = FUN_006ef5d0();
    if (iVar8 == 0) {
      if ((param_1[0x3a7] & 2U) == 0) {
        if ((param_1[0x3a7] & 0x400U) != 0) {
          iVar9 = 0x10009;
        }
      }
      else {
        iVar9 = 0x30009;
      }
      goto LAB_006fe3e1;
    }
  }
  else {
    if (iVar9 != -1) {
      if ((*(byte *)(param_1 + 0x3a7) & 2) != 0) {
        param_1[0x3a7] = param_1[0x3a7] & 0xfffffffd;
        param_1[0x52a] = 0;
        param_1[0x52c] = 0;
      }
      if ((param_1[0x3a7] & 0x400U) != 0) {
        param_1[0x3a7] = param_1[0x3a7] & 0xfffffbff;
        param_1[0x611] = 0;
      }
      goto LAB_006fe3e1;
    }
    if (((((param_1[0x139] != 0) || (iVar9 = FUN_006ef5d0(), iVar9 == 0)) ||
         (param_1[0x186] == 0x60004)) ||
        ((param_1[0x186] == 0x60005 || (iVar9 = FUN_00416910(6), iVar9 != 0)))) ||
       (iVar9 = (**(code **)(*param_1 + 0x1d8))(), iVar9 != 0)) {
      FUN_006f32b0();
      *param_3 = 0x401;
      return 0;
    }
  }
  iVar9 = 0x60004;
LAB_006fe3e1:
  FUN_006eece0(iVar9);
  *param_3 = *param_3 | 1;
  if (*param_2 != 0x1c3) {
    return 1;
  }
  param_1[0x3a7] = param_1[0x3a7] | 0x80000000;
  return 1;
}

// 006FE440  FUN_006fe440  size=1010  [between]
void __fastcall FUN_006fe440(int *param_1)

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
    if (param_1[0x519] == 0x10007) {
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
    goto LAB_006fe596;
  case 1:
LAB_006fe596:
    FUN_006e9c90(param_1[0x2a1] + 0x40,param_1[0x249],0x3e4ccccd,0x3db2b8c2);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a94ce0(0);
    if (iVar4 != 0) {
      FUN_00aa4080(10,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    iVar4 = FUN_006eddc0();
    if (iVar4 != 0) {
      FUN_006eece0(0x10007);
      return;
    }
    iVar4 = FUN_006ede40();
    if (iVar4 != 0) {
      FUN_006eece0(0x20003);
      return;
    }
    FUN_006e9d90(param_1[0x249],0x3e800000,0x3e0efa35);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
    local_34 = -1.0;
    iVar4 = FUN_006edb10(&local_34);
    if (((iVar4 != 0) && (0.0 <= local_34)) && (local_34 < 9.0)) {
      fVar1 = (float)param_1[0x24a] - (float)param_1[0x244];
      param_1[0x24a] = (int)fVar1;
      if (fVar1 < 0.0 != (fVar1 == 0.0)) {
        param_1[0x248] = 0;
      }
    }
    if (param_1[0x66a] != 0) {
LAB_006fe70d:
      FUN_00aa4080(0xc,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    if (((float)param_1[0x248] <= 0.0) || ((float)param_1[0x24b] * 1.5625 < (float)param_1[0x2a4]))
    {
      uVar3 = FUN_00dde2d0(0,100);
      if (((uVar3 & 1) == 0) || ((param_1[0x128] != 0 || (iVar4 = FUN_006f90c0(), iVar4 == 0)))) {
        if ((100.0 < (float)param_1[0x2a4]) || (iVar4 = FUN_006fc980(), iVar4 == 0)) {
          if (625.0 < (float)param_1[0x2a4]) goto LAB_006fe70d;
          uVar6 = 0x20006;
        }
        else {
          uVar6 = 0x20004;
        }
      }
      else {
        uVar6 = 0x20005;
      }
      FUN_006eece0(uVar6);
      FUN_006eece0(0x10006);
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

// 006FE850  FUN_006fe850  size=1114  [between]
void __fastcall FUN_006fe850(int *param_1)

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
    if (param_1[0x519] == 0x10007) {
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
    goto LAB_006fe96a;
  case 1:
LAB_006fe96a:
    FUN_006e9c90(param_1[0x2a1] + 0x40,param_1[0x249],0x3e4ccccd,0x3db2b8c2);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar5 = FUN_00a94ce0(0);
    if (iVar5 != 0) {
      FUN_00aa4080(10,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    iVar5 = FUN_006eddc0();
    if (iVar5 != 0) {
      FUN_006eece0(0x10007);
      return;
    }
    fVar2 = (float)param_1[0x2a4];
    if (!NAN(fVar2) && 324.0 < fVar2 != (fVar2 == 324.0)) {
      FUN_006eece0(0x10003);
      return;
    }
    FUN_006e9d90(param_1[0x249],0x3e800000,0x3e0efa35);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
    local_34 = -1.0;
    iVar5 = FUN_006edb10(&local_34);
    if (((iVar5 != 0) && (0.0 <= local_34)) && (local_34 < 9.0)) {
      fVar2 = (float)param_1[0x24a] - (float)param_1[0x244];
      param_1[0x24a] = (int)fVar2;
      if (fVar2 < 0.0 != (fVar2 == 0.0)) {
        param_1[0x248] = 0;
      }
    }
    if (param_1[0x66a] != 0) {
      FUN_00aa4080(0xc,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
    if (((param_1[0x3a7] & 0x20000U) != 0) &&
       (fVar2 = (float)param_1[0x249], param_1[0x249] = (int)(fVar2 - (float)param_1[0x244]),
       fVar2 - (float)param_1[0x244] <= 0.0)) {
      uVar4 = FUN_00dde2d0(0,100);
      if (((uVar4 & 1) == 0) || ((param_1[0x128] != 0 || (iVar5 = FUN_006f90c0(), iVar5 == 0)))) {
        if ((100.0 < (float)param_1[0x2a4]) || (iVar5 = FUN_006fc980(), iVar5 == 0)) {
          if (625.0 < (float)param_1[0x2a4]) {
            FUN_00aa4080(0xc,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
            param_1[0x187] = param_1[0x187] + 1;
            goto LAB_006fec28;
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
      FUN_006eece0(uVar6);
      FUN_006eece0(0x10006);
    }
LAB_006fec28:
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

// 006FECC0  Em8220::vf33C  size=2710  [class]
void __thiscall Em8220::vf33C(int *param_1,int *param_2,uint *param_3)

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
  int iStack_60;
  int iStack_4c;
  int iStack_48;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  undefined1 auStack_20 [28];
  
  param_3[6] = 0x42000;
  iVar4 = (**(code **)(*param_1 + 0x1d8))();
  if (iVar4 == 0) {
    iVar5 = FUN_00a8c760(0x34);
    iVar4 = 0;
    if (iVar5 != 0) goto LAB_006fecfa;
  }
  else {
LAB_006fecfa:
    iVar4 = 1;
  }
  param_2[2] = iVar4;
  iVar4 = FUN_00a8c760(0x34);
  param_2[3] = (uint)(iVar4 != 0);
  *param_2 = 0;
  param_2[1] = 0;
  iStack_48 = param_1[0x667] + 1;
  FUN_006fa850(0x3f800000);
  iStack_60 = 0;
  bVar1 = false;
  iStack_4c = 0;
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
          iStack_4c = 1;
        }
        iStack_60 = iStack_60 + 1;
      }
    }
    if (bVar3) {
      if (uStack_68 < 0x20) {
        bVar13 = (param_1[0x3a8] & uStack_64) != 0;
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
          bVar13 = (param_1[0x3a9] & uStack_64) != 0;
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
        if (bVar13 == bVar14) goto LAB_006fee69;
      }
      bVar3 = false;
    }
LAB_006fee69:
    uStack_68 = uStack_68 + 1;
    uStack_64 = uStack_64 << 1 | (uint)((int)uStack_64 < 0);
  } while ((int)uStack_68 < 0x10);
  if (bVar1) {
    iStack_60 = iStack_60 + 1;
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
  if (((bVar1) && (2 < iStack_60)) &&
     (((iStack_4c != 0 || (3 < iStack_60)) &&
      (((1 < uStack_68 || (2 < uStack_64)) || (3 < iStack_60)))))) {
    if ((DAT_01bea060 & 0x2000000) == 0) {
      fStack_40 = (float)param_1[0x660] - (float)param_1[0x10];
      fStack_3c = (float)param_1[0x661] - (float)param_1[0x11];
      fStack_38 = (float)param_1[0x662] - (float)param_1[0x12];
      fStack_34 = (float)param_1[0x663] - (float)param_1[0x13];
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
      fVar2 = pfVar7[2] * fStack_38 + fStack_40 * *pfVar7 + pfVar7[1] * fStack_3c;
      if (ABS(fVar2) < 0.25) {
        pfVar7 = (float *)FUN_00a925a0(auStack_20);
        fVar2 = pfVar7[2] * (float)param_1[0x65e] +
                *pfVar7 * (float)param_1[0x65c] + pfVar7[1] * (float)param_1[0x65d];
      }
      bVar1 = 0.0 <= (float)param_1[0x65e] * 0.0 +
                     (float)param_1[0x65c] * 0.0 + (float)param_1[0x65d];
      iStack_4c = FUN_006f8ed0(&fStack_30,param_2);
      uVar6 = param_3[4] >> 0x1e & 1;
      if (((uVar6 == 0) || ((param_3[2] >> 0x1e & 1) == 0)) &&
         (((param_3[4] & 0x20000) == 0 || ((param_3[2] >> 0x11 & 1) == 0)))) {
        if (((uVar6 == 0) || ((~(*param_3 >> 0x1e) & 1) == 0)) &&
           (iVar4 = FUN_0043f830(0xe), iVar4 == 0)) {
          if ((1 < iStack_48) || (iVar4 = FUN_006ec7a0(), iVar4 != 0)) {
            iVar4 = FUN_0043f830(0);
            if ((iVar4 == 0) && (iVar4 = FUN_0043f860(0), iVar4 == 0)) {
              if ((((*(byte *)(param_1 + 0x3a8) & 4) != 0) || (iVar4 = FUN_0043f830(2), iVar4 == 0))
                 && (!bVar3)) {
                *param_2 = 0x21;
                param_3[6] = 0x28220;
                return;
              }
              *param_2 = 0x20;
              param_3[6] = 0x28220;
              return;
            }
            *param_2 = 0x16;
            param_3[6] = 0x28220;
            return;
          }
          iVar4 = FUN_0043f830(0);
          if (iVar4 != 0) {
            if (uStack_68 == 0) {
              *param_2 = 9;
              param_3[6] = 0x28220;
              return;
            }
            iVar4 = FUN_0043f830(7);
            *param_2 = 0xb - (uint)(iVar4 != 0);
            param_3[6] = 0x28220;
            return;
          }
          iVar4 = FUN_0043f830(7);
          if (iVar4 != 0) {
            *param_2 = 0x19;
            param_3[6] = 0x28220;
            return;
          }
          iVar4 = FUN_0043f830(6);
          if (iVar4 != 0) {
            *param_2 = 0x1a;
            param_3[6] = 0x28220;
            return;
          }
          iVar4 = FUN_0043f830(9);
          if (iVar4 != 0) {
            *param_2 = 0x1b;
            param_3[6] = 0x28220;
            return;
          }
          iVar4 = FUN_0043f830(8);
          if (iVar4 != 0) {
            *param_2 = 0x1c;
            param_3[6] = 0x28220;
            return;
          }
          iVar4 = FUN_0043f830(2);
          if (iVar4 == 0) {
            iVar4 = FUN_0043f830(0);
            if ((iVar4 == 0) && (iVar4 = FUN_0043f830(5), iVar4 != 0)) {
              *param_2 = 0x1e;
              param_3[6] = 0x28220;
              return;
            }
            param_3[6] = 0x28220;
            *param_2 = 0;
            return;
          }
          *param_2 = 0x1d;
          param_3[6] = 0x28220;
          return;
        }
        if ((iStack_48 < 2) && (iVar4 = FUN_006ec7a0(), iVar4 == 0)) {
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
                param_3[6] = 0x28220;
                return;
              }
              *param_2 = 8;
              param_3[6] = 0x28220;
              return;
            }
            iVar4 = FUN_0043f830(5);
            if ((iVar4 == 0) && (iVar4 = FUN_0043f860(5), iVar4 == 0)) {
              *param_2 = (uint)bVar1 * 2 + 3;
              param_3[6] = 0x28220;
              return;
            }
            *param_2 = (uint)bVar1 * 2 + 4;
            param_3[6] = 0x28220;
            return;
          }
          if (iStack_4c == 0) {
            iVar4 = FUN_0043f830(0xd);
            if ((((iVar4 != 0) || (iVar4 = FUN_0043f860(0xd), iVar4 != 0)) &&
                (iVar4 = FUN_0043f830(0xf), iVar4 == 0)) && (iVar4 = FUN_0043f860(0xf), iVar4 == 0))
            {
LAB_006ff546:
              *param_2 = (uint)(fVar2 < 0.0) * 2 + 0xc;
              param_3[6] = 0x28220;
              return;
            }
          }
          else if (fStack_28 * 0.0 + fStack_30 * 0.0 + fStack_2c < 0.0) goto LAB_006ff546;
          *param_2 = (uint)(fVar2 < 0.0) * 2 + 0xd;
          param_3[6] = 0x28220;
          return;
        }
        iVar4 = FUN_0043f860(5);
        if (((iVar4 == 0) || (iVar4 = FUN_0043f860(2), iVar4 == 0)) || (2 < uStack_64)) {
          bVar3 = false;
          if (iStack_4c == 0) {
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
              param_3[6] = 0x28220;
              return;
            }
            *param_2 = 0x14;
            param_3[6] = 0x28220;
            return;
          }
          iVar4 = FUN_0043f830(0xd);
          if ((iVar4 == 0) || (iVar4 = FUN_0043f830(0xf), iVar4 == 0)) {
            *param_2 = 0x13 - (uint)bVar3;
            param_3[6] = 0x28220;
            return;
          }
          iVar4 = FUN_0043f830(5);
          if ((iVar4 == 0) && (iVar4 = FUN_0043f860(5), iVar4 == 0)) {
            *param_2 = 0x10;
            param_3[6] = 0x28220;
            return;
          }
          *param_2 = 0x11;
          param_3[6] = 0x28220;
          return;
        }
      }
    }
    else if ((param_1[0x3a7] & 0x400000U) == 0) {
      iVar4 = FUN_00a81330();
      if (iVar4 != 0) {
        uVar8 = FUN_00a7c8a0();
        piVar9 = (int *)FUN_0055ce40(uVar8);
        if (piVar9 != (int *)0x0) {
          (**(code **)(*piVar9 + 0xd8))(1);
          if ((undefined4 *)piVar9[0xdc] != (undefined4 *)0x0) {
            piVar9[0xd9] = piVar9[0xd9] | 0x400000;
            *(undefined4 *)piVar9[0xdc] = 0;
          }
          FUN_00ac8b20(0);
          iStack_4c = piVar9[0x13c];
          DebrisExplodeManager::addHandle(&iStack_4c,0);
        }
      }
      param_1[0x3a7] = param_1[0x3a7] | 0x400000;
    }
  }
  return;
}

// 007008D0  FUN_007008d0  size=49  [callgraph]
bool __fastcall FUN_007008d0(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x4a0) != 0) || ((*(byte *)(param_1 + 0xb00) & 2) == 0)) {
    iVar1 = FUN_00a90070(5);
    if (iVar1 == 0) {
      return false;
    }
  }
  iVar1 = FUN_006fcad0();
  return iVar1 != 0;
}

// 00700910  FUN_00700910  size=787  [callgraph]
void __fastcall FUN_00700910(int *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  float10 fVar7;
  undefined *puVar8;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  undefined1 auStack_1b0 [4];
  float fStack_1ac;
  undefined1 auStack_1a8 [8];
  undefined1 auStack_1a0 [60];
  undefined1 auStack_164 [352];
  
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
    (**(code **)(*param_1 + 0x314))();
    iVar3 = param_1[0x1d9];
    if ((iVar3 != 0) && (*(int *)(iVar3 + 0x104) != 0)) {
      *(undefined4 *)(iVar3 + 0x104) = 0;
    }
    pcVar1 = *(code **)(*param_1 + 0xd0);
    param_1[0x139] = 1;
    (*pcVar1)(0);
    (**(code **)(*param_1 + 0x344))(7,3,1);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    break;
  case 2:
    FUN_00aa4080(0x145,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    break;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_00aa4080(0x146,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
    }
    break;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_00ac8ab0();
      (**(code **)(*param_1 + 0xd0))(1);
      FUN_006eece0(0x60003);
    }
  }
  bVar2 = false;
  if ((((uVar6 != 0) && (iVar3 = FUN_00a8c760(0x1c), iVar3 == 0)) && (1 < param_1[0x187])) &&
     (iVar3 = FUN_00a8cbe0(0x10000f), iVar3 != 0)) {
    FUN_00a8ce90(&fStack_1c0,auStack_1b0);
    fVar7 = (float10)FUN_00ddba30(*(float *)(uVar6 + 0x94) + fStack_1ac);
    param_1[0x25] = (int)(float)fVar7;
    D3DXMatrixRotationY(auStack_1a0,*(undefined4 *)(uVar6 + 0x94));
    D3DXVec3TransformNormal(&stack0xfffffe38,&stack0xfffffe38,auStack_1a8);
    bVar2 = true;
    param_1[0x14] = (int)(*(float *)(uVar6 + 0x50) + fStack_1c0);
    param_1[0x15] = (int)(*(float *)(uVar6 + 0x54) + fStack_1bc);
    param_1[0x16] = (int)(*(float *)(uVar6 + 0x58) + fStack_1b8);
    param_1[0x17] = (int)(*(float *)(uVar6 + 0x5c) + fStack_1b4);
  }
  (**(code **)(*param_1 + 0xd0))(!bVar2);
  iVar3 = FUN_00a8c760(0x1f);
  if (iVar3 != 0) {
    FUN_006eb860(0xffffffff);
    FUN_006fac80();
    FUN_006ed450();
    FUN_00c52700(param_1[0x679],1);
    if (param_1[0x6a4] == 0) {
      param_1[0x6a4] = 1;
      uVar5 = FUN_00a8c890(0);
      FUN_004117d0(0x197,param_1,uVar5);
      FUN_00a963e0(auStack_164);
    }
  }
  return;
}

// 00700C40  FUN_00700c40  size=802  [callgraph]
void __fastcall FUN_00700c40(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  float10 fVar7;
  undefined *puVar8;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  undefined1 auStack_1b0 [4];
  float fStack_1ac;
  undefined1 auStack_1a8 [8];
  undefined1 auStack_1a0 [64];
  undefined1 auStack_160 [348];
  
  uVar6 = 0;
  iVar2 = FUN_00a81330();
  if ((iVar2 != 0) && (piVar3 = (int *)FUN_00a7c8a0(), piVar3 != (int *)0x0)) {
    puVar8 = &DAT_01b35b90;
    (**(code **)(*piVar3 + 4))(&DAT_01b35b90);
    iVar2 = FUN_00dd6d80(puVar8);
    uVar6 = -(uint)(iVar2 != 0) & (uint)piVar3;
  }
  iVar2 = FUN_00a8cac0();
  if (iVar2 == 0) {
    if (uVar6 != 0) {
      uVar5 = FUN_009f8b40();
      FUN_00ac8a80(uVar5);
    }
    FUN_00aa4080(0x14f,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0xd9] = param_1[0xd9] & 0xffefffff;
    param_1[0x362] = 1;
    FUN_00a900b0(1);
    (**(code **)(*param_1 + 0x344))(7,3,1);
    param_1[0x139] = 1;
    FUN_00a7c950();
    iVar2 = FUN_00a82090("QTEKnife",0x11504,0);
    if ((iVar2 != 0) && (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) {
      uVar5 = FUN_00a7c7f0();
      FUN_00a7c960(uVar5);
      FUN_00ac8ad0(1,param_1[0x13c],iVar2,0,0,0xffffffff);
      *(uint *)(iVar4 + 0x364) = *(uint *)(iVar4 + 0x364) & 0xfffffffd;
      FUN_00aa4520(0x150,param_1[0x13c],0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    }
    param_1[0x187] = param_1[0x187] + 1;
  }
  else if (iVar2 != 1) goto LAB_00700e36;
  iVar2 = FUN_00a81330();
  if (iVar2 != 0) {
    FUN_00a81330();
    iVar2 = FUN_00a7c8a0();
    if (iVar2 != 0) {
      FUN_00a81330();
      piVar3 = (int *)FUN_00a7c8a0();
      (**(code **)(*piVar3 + 100))();
    }
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar2 = FUN_00a94ce0(0);
  if (iVar2 != 0) {
    FUN_00ac8ab0();
    FUN_006eece0(0x60003);
  }
LAB_00700e36:
  bVar1 = false;
  if (((uVar6 != 0) && (iVar2 = FUN_00a8c760(0x1c), iVar2 == 0)) &&
     (iVar2 = FUN_00a8cbe0(0x100010), iVar2 != 0)) {
    FUN_00a8ce90(&fStack_1c0,auStack_1b0);
    fVar7 = (float10)FUN_00ddba30(*(float *)(uVar6 + 0x94) + fStack_1ac);
    param_1[0x25] = (int)(float)fVar7;
    D3DXMatrixRotationY(auStack_1a0,*(undefined4 *)(uVar6 + 0x94));
    D3DXVec3TransformNormal(&stack0xfffffe38,&stack0xfffffe38,auStack_1a8);
    bVar1 = true;
    param_1[0x14] = (int)(fStack_1c0 + *(float *)(uVar6 + 0x50));
    param_1[0x15] = (int)(*(float *)(uVar6 + 0x54) + fStack_1bc);
    param_1[0x16] = (int)(*(float *)(uVar6 + 0x58) + fStack_1b8);
    param_1[0x17] = (int)(*(float *)(uVar6 + 0x5c) + fStack_1b4);
  }
  FUN_006e9f20(!bVar1);
  iVar2 = FUN_00a8c760(0x1f);
  if (iVar2 != 0) {
    FUN_006eb860(0xffffffff);
    FUN_006fac80();
    FUN_006ed450();
    FUN_00c52700(param_1[0x679],1);
    if (param_1[0x6a4] == 0) {
      param_1[0x6a4] = 1;
      uVar5 = FUN_00a8c890(0);
      FUN_004117d0(0x197,param_1,uVar5);
      FUN_00a963e0(auStack_160);
    }
  }
  return;
}

// 007010F0  FUN_007010f0  size=489  [callgraph]
void __fastcall FUN_007010f0(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0xb5,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    FUN_007007c0();
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
    if (param_1[0x301] != 0) {
      FUN_006eece0(0x60003);
      return;
    }
    if (param_1[0x294] != 0) {
      FUN_00ac8e10(1);
      if ((*(byte *)((int)param_1 + 0xe9e) & 1) != 0) {
        FUN_00a8c9b0(0,2,0x3f800000,0);
        param_1[0x3a7] = param_1[0x3a7] & 0xfffeffff;
      }
      if ((param_1[0x3a7] & 0x8000U) == 0) {
        FUN_00e02240(param_1[0x13c],3);
        param_1[0x3a7] = param_1[0x3a7] | 0x8000;
        FUN_00a85670(param_1,1);
      }
      (**(code **)(*param_1 + 0x20))();
      if (param_1[0x6a4] != 0) {
        param_1[0x6a4] = 0;
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
      FUN_006eece0(0x60002);
      if (param_1[0x1d9] != 0) {
        FUN_008e3c10();
      }
      iVar1 = FUN_00e5e0c0("em0220_se_dmg_explosion",param_1,0xffffffff,0);
      param_1[0x6a7] = iVar1;
      FUN_00940450(param_1[0x20f]);
      (**(code **)(*param_1 + 0x364))(0xffffffff);
    }
  }
  return;
}

// 00701770  FUN_00701770  size=232  [callgraph]
void __fastcall FUN_00701770(int param_1)

{
  float fVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x61c) != 0) &&
     ((((*(int *)(param_1 + 0x4a0) != 0 || ((*(byte *)(param_1 + 0xb00) & 2) == 0)) &&
       (iVar2 = FUN_00a90070(5), iVar2 == 0)) || (iVar2 = FUN_006fcad0(), iVar2 == 0)))) {
    fVar1 = *(float *)(param_1 + 0xa90);
    if (!NAN(fVar1) && 169.0 < fVar1 != (fVar1 == 169.0)) {
      FUN_006fbc90();
    }
    iVar2 = FUN_00a82d50();
    if ((iVar2 == 2) || (iVar2 = FUN_00a82d50(), iVar2 == 3)) {
      FUN_006eece0(0xa0003);
      return;
    }
    iVar2 = FUN_00a82d50();
    if (iVar2 == 1) {
      FUN_00aa4080(8,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      *(undefined4 *)(param_1 + 0x61c) = 3;
    }
  }
  return;
}

// 00701860  FUN_00701860  size=606  [callgraph]
void __fastcall FUN_00701860(int *param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  float10 fVar4;
  
  param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
  if (param_1[0x187] == 2) {
    iVar2 = FUN_00a82d50();
    if ((iVar2 == 2) || (iVar2 = FUN_00a82d50(), iVar2 == 3)) {
      FUN_006eece0(0xa0003);
    }
    else {
      iVar2 = FUN_00a82d50();
      if (iVar2 == 1) {
        FUN_006eece0(0x1000c);
        return;
      }
      if (((((float)param_1[0x674] < -15.0) || (-15.0 < (float)param_1[0x3a4])) &&
          (iVar2 = FUN_00aa4a90(), iVar2 != 0)) && (param_1[0x6d5] == 0)) {
        FUN_006eece0(0x1000d);
        return;
      }
      fVar1 = (float)param_1[0x6a6];
      if (NAN(fVar1) || 30.0 < fVar1 == (fVar1 == 30.0)) {
        fVar4 = (float10)FUN_006e9df0();
        if ((float10)1.3089969 <= fVar4) {
          FUN_006eece0(0x10006);
          return;
        }
        if (((((param_1[0x128] == 1) && ((float)param_1[0x622] <= 0.0)) &&
             ((param_1[0x4d8] == 0 &&
              ((fVar1 = (float)param_1[0x2a4], !NAN(fVar1) && 64.0 < fVar1 != (fVar1 == 64.0) &&
               ((float)param_1[0x2a4] <= 506.25)))))) && (iVar2 = FUN_006f90c0(), iVar2 != 0)) &&
           ((iVar2 = FUN_00c158c0(), iVar2 != 0 && ((float)param_1[0x6a6] <= 0.0)))) {
          param_1[0x60f] = 0;
          param_1[0x3a7] = param_1[0x3a7] & 0xfffff7ff;
          uVar3 = FUN_00dde2d0(0,100);
          if ((uVar3 & 3) == 0) {
            param_1[0x3a7] = param_1[0x3a7] | 0x800;
          }
          FUN_006eece0(0x2000a);
          return;
        }
        iVar2 = FUN_007008d0();
        if (iVar2 == 0) {
          fVar1 = (float)param_1[0x2a4];
          if ((((!NAN(fVar1) && 30.25 < fVar1 != (fVar1 == 30.25)) &&
               ((float)param_1[0x2a4] <= 64.0)) &&
              (fVar4 = (float10)FUN_006e9df0(),
              fVar4 < (float10)0.7853982 != (fVar4 == (float10)0.7853982))) &&
             (iVar2 = FUN_006fc980(), iVar2 != 0)) {
            FUN_006eece0(0x20004);
            return;
          }
          if ((float)param_1[0x2a4] < 25.0) {
                    /* WARNING: Could not recover jumptable at 0x00701abc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*param_1 + 0x34c))();
            return;
          }
        }
      }
      else if (((param_1[0x128] != 0) || ((*(byte *)(param_1 + 0x2c0) & 2) == 0)) &&
              ((float)param_1[0x2a4] <= 100.0)) {
        FUN_006eece0(0x10011);
        return;
      }
    }
  }
  return;
}

// 00701AC0  FUN_00701ac0  size=1060  [callgraph]
void __fastcall FUN_00701ac0(int param_1)

{
  float fVar1;
  char cVar2;
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
  
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    break;
  case 1:
    goto switchD_00701adb_caseD_1;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar4 = FUN_00a979f0(&local_4c);
    if (iVar4 != 0) {
      local_20 = local_4c;
      local_1c = local_48;
      local_18 = local_44;
      local_14 = 0x3f800000;
      FUN_006e9bd0(&local_20,0x3e99999a,0x3e32b8c2);
    }
    iVar4 = FUN_006eddc0();
    if ((iVar4 != 0) &&
       (fVar1 = *(float *)(param_1 + 0x910) + *(float *)(param_1 + 0x93c),
       *(float *)(param_1 + 0x93c) = fVar1, 30.0 <= fVar1)) {
      FUN_006eece0(0x10007);
      return;
    }
    local_50 = 0x40000000;
    iVar4 = FUN_006ea3d0();
    if (iVar4 != 0) {
      local_50 = 0x3f800000;
    }
    iVar4 = FUN_00a979d0();
    if (((iVar4 == 0) && (*(int *)(param_1 + 0x7d8) != 0)) &&
       (cVar2 = FUN_00c6c8f0(), cVar2 == '\0')) {
LAB_00701e4b:
      *(undefined4 *)(param_1 + 0x1b54) = 1;
      FUN_006eece0(0x10003);
      return;
    }
    iVar4 = FUN_006ea390();
    if ((iVar4 == 0) || (iVar4 = FUN_00a8d380(), iVar4 != 0)) {
      iVar4 = FUN_00aa09c0(*(int *)(param_1 + 0xa84) + 0x40,local_50,1);
      if (iVar4 == 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x93c) = 0;
      iVar4 = FUN_00a8d380();
      if (iVar4 == 0) {
        return;
      }
      goto LAB_00701e4b;
    }
    goto LAB_00701dd3;
  case 3:
    local_50 = 0;
    FUN_006ee750(&local_50);
    if (local_50 == 0) {
      return;
    }
    FUN_00c70800();
    iVar4 = FUN_006ea390();
    if ((iVar4 == 0) || (iVar4 = FUN_00a8d380(), iVar4 != 0)) {
      *(undefined4 *)(param_1 + 0x61c) = 2;
      FUN_00aa4080(10,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
      return;
    }
LAB_00701dd3:
    FUN_00a979f0(&local_4c);
    local_30 = local_4c;
    local_2c = local_48;
    local_28 = local_44;
    goto LAB_00701c85;
  default:
    goto switchD_00701adb_default;
  }
  FUN_00a8d330(param_1 + 0x40,*(int *)(param_1 + 0xa84) + 0x40);
  if (*(int *)(param_1 + 0x1464) == 0x10007) {
    FUN_00aa4080(10,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    *(undefined4 *)(param_1 + 0x61c) = 2;
    return;
  }
  FUN_00aa4080(0xb,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  *(undefined4 *)(param_1 + 0x93c) = 0;
switchD_00701adb_caseD_1:
  iVar4 = FUN_00a979f0(&local_4c);
  if (iVar4 != 0) {
    local_40 = local_4c;
    local_3c = local_48;
    local_38 = local_44;
    local_34 = 0x3f800000;
    FUN_006e9bd0(&local_40,0x3e800000,0x3dd67750);
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  local_50 = 0x40000000;
  iVar3 = FUN_006ea3d0();
  iVar4 = local_50;
  if (iVar3 != 0) {
    iVar4 = 0x3f800000;
  }
  iVar4 = FUN_00aa09c0(*(int *)(param_1 + 0xa84) + 0x40,iVar4,1);
  if (iVar4 != 0) {
    iVar4 = FUN_00a8d380();
    if (iVar4 != 0) {
      *(undefined4 *)(param_1 + 0x1b54) = 1;
      FUN_006eece0(0x10003);
      return;
    }
    iVar4 = FUN_006ea390();
    if (iVar4 != 0) {
      FUN_00a979f0(&local_4c);
      local_30 = local_4c;
      local_2c = local_48;
      local_28 = local_44;
LAB_00701c85:
      local_24 = 0x3f800000;
      FUN_007006c0(&local_30,0x40000000);
      *(undefined4 *)(param_1 + 0x61c) = 3;
      return;
    }
  }
  iVar4 = FUN_00a94ce0(0);
  if (iVar4 != 0) {
    FUN_00aa4080(10,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    return;
  }
switchD_00701adb_default:
  return;
}

// 00701F00  FUN_00701f00  size=1205  [callgraph]
void __fastcall FUN_00701f00(int *param_1)

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
    break;
  case 1:
    goto switchD_00701f1b_caseD_1;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a979f0(&local_4c);
    if (iVar3 != 0) {
      local_20 = local_4c;
      local_1c = local_48;
      local_18 = local_44;
      local_14 = 0x3f800000;
      FUN_006e9bd0(&local_20,0x3e99999a,0x3e32b8c2);
    }
    iVar3 = FUN_006eddc0();
    if ((iVar3 != 0) &&
       (fVar1 = (float)param_1[0x24f], param_1[0x24f] = (int)((float)param_1[0x244] + fVar1),
       30.0 <= (float)param_1[0x244] + fVar1)) {
      FUN_006eece0(0x10007);
      return;
    }
    local_50 = 0x40000000;
    iVar3 = FUN_006ea3d0();
    if (iVar3 != 0) {
      local_50 = 0x3f800000;
    }
    iVar3 = FUN_006ea390();
    if ((iVar3 == 0) || (iVar3 = FUN_00a8d380(), iVar3 != 0)) {
      iVar3 = FUN_00aa09c0(param_1[0x2a1] + 0x40,local_50,1);
      if (iVar3 != 0) {
        param_1[0x24f] = 0;
        iVar3 = FUN_00a8d380();
        if (iVar3 != 0) {
          param_1[0x6d5] = 1;
          goto LAB_0070227a;
        }
      }
      if (param_1[0x4d8] == 0) {
        FUN_006eece0(0x90003);
        return;
      }
      if (100.0 < (float)param_1[0x2a4]) {
        return;
      }
LAB_0070227a:
      FUN_00aa4080(0xc,0,0x3e4ccccd,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x187] = 4;
      return;
    }
    goto LAB_00702200;
  case 3:
    local_50 = 0;
    FUN_006ee750(&local_50);
    if (local_50 == 0) {
      return;
    }
    FUN_00c70800();
    iVar3 = FUN_006ea390();
    if ((iVar3 == 0) || (iVar3 = FUN_00a8d380(), iVar3 != 0)) {
      param_1[0x187] = 2;
      FUN_00aa4080(10,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
      return;
    }
LAB_00702200:
    FUN_00a979f0(&local_4c);
    local_30 = local_4c;
    local_2c = local_48;
    local_28 = local_44;
    goto LAB_007020d4;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      (**(code **)(*param_1 + 0x34c))();
    }
  default:
    goto switchD_00701f1b_default;
  }
  FUN_00a8d330(param_1 + 0x10,param_1[0x2a1] + 0x40);
  if (param_1[0x519] == 0x10007) {
    FUN_00aa4080(10,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    param_1[0x187] = 2;
    return;
  }
  param_1[0x24f] = 0;
  FUN_00aa4080(0xb,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
  param_1[0x187] = param_1[0x187] + 1;
switchD_00701f1b_caseD_1:
  iVar3 = FUN_00a979f0(&local_4c);
  if (iVar3 != 0) {
    local_40 = local_4c;
    local_3c = local_48;
    local_38 = local_44;
    local_34 = 0x3f800000;
    FUN_006e9bd0(&local_40,0x3e800000,0x3dd67750);
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  local_50 = 0x40000000;
  iVar2 = FUN_006ea3d0();
  iVar3 = local_50;
  if (iVar2 != 0) {
    iVar3 = 0x3f800000;
  }
  iVar3 = FUN_00aa09c0(param_1[0x2a1] + 0x40,iVar3,1);
  if (iVar3 != 0) {
    iVar3 = FUN_00a8d380();
    if (iVar3 != 0) {
      param_1[0x6d5] = 1;
      FUN_006eece0(0x10003);
      return;
    }
    iVar3 = FUN_006ea390();
    if (iVar3 != 0) {
      FUN_00a979f0(&local_4c);
      local_30 = local_4c;
      local_2c = local_48;
      local_28 = local_44;
LAB_007020d4:
      local_24 = 0x3f800000;
      FUN_007006c0(&local_30,0x40000000);
      param_1[0x187] = 3;
      return;
    }
  }
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 != 0) {
    FUN_00aa4080(10,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    return;
  }
switchD_00701f1b_default:
  return;
}

// 007023D0  FUN_007023d0  size=2834  [callgraph]
void __fastcall FUN_007023d0(int *param_1)

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
  iVar6 = param_1[0x6c0];
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
    goto LAB_00702856;
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
    param_1[0x538] = (int)fStack_3c;
    param_1[0x539] = (int)fStack_38;
    param_1[0x53a] = (int)fStack_34;
    param_1[0x53b] = 0x3f800000;
    FUN_007001c0(param_1 + 0x554,param_1 + 0x10,param_1 + 0x538,0x3fb33333,0);
    FUN_00aa4080(0x20,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    if (param_1[0x1d9] != 0) {
      FUN_008e0ae0(0);
    }
    param_1[0x187] = param_1[0x187] + 1;
  case 5:
    FUN_006e9bd0(param_1 + 0x538,0x3ecccccd,0x3eb2b8c2);
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
LAB_00702856:
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
        param_1[0x538] = (int)fStack_3c;
        param_1[0x539] = (int)fStack_38;
        param_1[0x53a] = (int)fStack_34;
        param_1[0x53b] = 0x3f800000;
        FUN_007001c0(param_1 + 0x554,param_1 + 0x10,param_1 + 0x538,0x41600000,0);
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
    FUN_006e9bd0(&fStack_24,0x3e4ccccd,0x3e0efa35);
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
        param_1[0x538] = (int)fStack_30;
        param_1[0x539] = iStack_2c;
        param_1[0x53a] = (int)fStack_28;
        param_1[0x53b] = 0x3f800000;
        (**(code **)(*param_1 + 0x318))();
        iVar6 = param_1[0x1d9];
        if ((iVar6 != 0) && (*(int *)(iVar6 + 0x104) != 1)) {
          *(undefined4 *)(iVar6 + 0x104) = 1;
          *(undefined4 *)(*(int *)(iVar6 + 0xd0) + 4) = 0;
        }
        FUN_007001c0(param_1 + 0x554,param_1 + 0x10,param_1 + 0x538,0x41600000,0);
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

// 00702F10  FUN_00702f10  size=990  [callgraph]
void __fastcall FUN_00702f10(int *param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  float *pfVar4;
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
  
  switch(param_1[0x187]) {
  case 0:
    FUN_00a8d710(param_1 + 0x10);
    iVar3 = FUN_00a9f760(6);
    if (iVar3 == 0) {
      FUN_00aa4120(7,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    param_1[0x187] = 2;
    return;
  case 1:
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_00aa4080(6,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
      param_1[0x187] = param_1[0x187] + 1;
    }
  case 2:
    FUN_00a8d790(&local_3c);
    cVar2 = FUN_00c9db20(0);
    iVar3 = FUN_00a97e60(0x40000000,1);
    if (iVar3 != 0) {
      if (cVar2 != '\0') {
        param_1[0x187] = 4;
      }
      cVar2 = FUN_00c9db60(1);
      if (cVar2 != '\0') {
        FUN_00a8d790(&local_3c);
        local_30 = local_3c;
        local_2c = local_38;
        local_28 = local_34;
        local_24 = 0x3f800000;
        FUN_007006c0(&local_30,0x40000000);
        param_1[0x187] = 3;
        return;
      }
    }
    local_20 = local_3c;
    local_1c = local_38;
    local_18 = local_34;
    local_14 = 0x3f800000;
    FUN_006e9bd0(&local_20,0x3da3d70a,0x3c8efa35);
    FUN_00ac80a0(0x3f800000,0x3f800000);
    return;
  case 3:
    local_40 = 0;
    FUN_006ee750(&local_40);
    if (local_40 != 0) {
      pcVar1 = *(code **)(*param_1 + 0x1d4);
      param_1[0x187] = 1;
      (*pcVar1)(0);
      FUN_00aa4120(7,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      return;
    }
    break;
  case 4:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_00aa4080(8,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x43f00000;
    return;
  case 5:
    iVar3 = FUN_00a9f760(5);
    if (iVar3 != 0) {
      param_1[0x248] = (int)((float)param_1[0x248] - (float)param_1[0x244]);
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94db0(8);
    if (iVar3 != 0) {
      FUN_00aa4080(5,0,0x3ed55555,0x3f800000,0,0xbf800000,0x3f800000);
    }
    if (240.0 <= (float)param_1[0x248]) {
      if ((float)param_1[0x248] < 420.0) {
        param_1[0x6d0] = -0x3f600000;
        param_1[0x6d1] = 0x3f4ccccd;
        goto LAB_0070326b;
      }
    }
    else {
      param_1[0x6d0] = 0x40a00000;
      param_1[0x6d1] = 0x3f4ccccd;
LAB_0070326b:
      pfVar4 = (float *)(param_1 + 0x6d0);
      param_1[0x6d2] = 0x40a00000;
      D3DXVec3TransformNormal(pfVar4,pfVar4,param_1 + 4);
      *pfVar4 = *pfVar4 + (float)param_1[0x10];
      param_1[0x6d1] = (int)((float)param_1[0x11] + (float)param_1[0x6d1]);
      param_1[0x6d2] = (int)((float)param_1[0x12] + (float)param_1[0x6d2]);
      param_1[0x6d4] = 1;
    }
    if ((float)param_1[0x248] <= 0.0) {
      FUN_00aa4120(7,0,0x3daaaaab,0x3f800000,0x8000000,0xbf800000,0x3f800000);
      param_1[0x187] = 1;
    }
  }
  return;
}

// 00703310  FUN_00703310  size=1389  [callgraph]
void __fastcall FUN_00703310(int *param_1)

{
  float fVar1;
  code *pcVar2;
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
    iVar3 = FUN_00a9f760(10);
    if (iVar3 != 0) {
      param_1[0x187] = 2;
      return;
    }
    param_1[0x24e] = 0;
    param_1[0x24f] = 0x41c80000;
    FUN_00aa4080(0xb,0,0x3e088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
  case 1:
    iVar3 = FUN_00a979f0(&local_4c);
    if (iVar3 != 0) {
      local_40 = local_4c;
      local_3c = local_48;
      local_38 = local_44;
      local_34 = 0x3f800000;
      FUN_006e9bd0(&local_40,0x3e800000,0x3dd67750);
    }
    local_50 = 0x40000000;
    iVar3 = FUN_006ea3d0();
    if (iVar3 != 0) {
      local_50 = 0x3f800000;
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00aa09c0(param_1[0x2a1] + 0x40,local_50,1);
    if (iVar3 != 0) {
      iVar3 = FUN_00a8d380();
      if (iVar3 != 0) {
        pcVar2 = *(code **)(*param_1 + 0x34c);
        param_1[0x6d5] = 1;
        (*pcVar2)();
        return;
      }
      iVar3 = FUN_006ea390();
      if (iVar3 != 0) {
        FUN_00a979f0(&local_4c);
        local_30 = local_4c;
        local_2c = local_48;
        local_28 = local_44;
LAB_007034b4:
        local_24 = 0x3f800000;
        FUN_007006c0(&local_30,0x40000000);
        param_1[0x187] = 3;
        return;
      }
    }
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      FUN_00aa4080(10,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
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
LAB_007035d3:
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
        FUN_006e9bd0(&local_20,0x3e99999a,0x3e32b8c2);
      }
      if ((param_1[0x1f6] != 0) && (*(int *)(param_1[0x1f6] + 0x82c) == 0)) {
        FUN_00a8d330(param_1 + 0x10,param_1[0x2a1] + 0x40);
        return;
      }
      iVar3 = FUN_006eddc0();
      if ((iVar3 != 0) &&
         (fVar1 = (float)param_1[0x24e], param_1[0x24e] = (int)(fVar1 + (float)param_1[0x244]),
         30.0 <= fVar1 + (float)param_1[0x244])) {
        FUN_006eece0(0x10007);
        return;
      }
      local_50 = 0x40000000;
      iVar3 = FUN_006ea3d0();
      if (iVar3 != 0) {
        local_50 = 0x3f800000;
      }
      iVar3 = FUN_006ea390();
      if ((iVar3 == 0) || (iVar3 = FUN_00a8d380(), iVar3 != 0)) {
        iVar3 = FUN_00aa09c0(param_1[0x2a1] + 0x40,local_50,1);
        if (iVar3 == 0) {
          return;
        }
        param_1[0x24e] = 0;
        iVar3 = FUN_00a8d380();
        if (iVar3 == 0) {
          return;
        }
        pcVar2 = *(code **)(*param_1 + 0x34c);
        param_1[0x6d5] = 1;
        (*pcVar2)();
        return;
      }
    }
    else {
      fVar1 = (float)param_1[0x24f];
      param_1[0x24f] = (int)(fVar1 - (float)param_1[0x244]);
      if (0.0 < fVar1 - (float)param_1[0x244]) goto LAB_007035d3;
    }
    FUN_00a979f0(&local_4c);
    local_30 = local_4c;
    local_2c = local_48;
    local_28 = local_44;
    goto LAB_007034b4;
  case 3:
    local_50 = 0;
    FUN_006ee750(&local_50);
    if (local_50 == 0) {
      return;
    }
    param_1[0x24f] = 0x41c80000;
    FUN_00c70800();
    iVar3 = FUN_006ea390();
    if ((iVar3 == 0) || (iVar3 = FUN_00a8d380(), iVar3 != 0)) {
      param_1[0x187] = 2;
      FUN_00aa4080(10,0,0x3d088889,0x3f800000,0,0xbf800000,0x3f800000);
      return;
    }
    FUN_00a979f0(&local_4c);
    local_30 = local_4c;
    local_2c = local_48;
    local_28 = local_44;
    goto LAB_007034b4;
  case 4:
    FUN_00aa4080(0xc,0,0x3d088889,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    param_1[0x187] = param_1[0x187] + 1;
    return;
  case 5:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar3 = FUN_00a94ce0(0);
    if (iVar3 != 0) {
      (**(code **)(*param_1 + 0x34c))();
    }
  }
  return;
}

// 007038A0  Em8220::vf334  size=2309  [class]
void __thiscall Em8220::vf334(int *param_1,int param_2,int *param_3)

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
      puVar12 = &DAT_01b35740;
      (**(code **)(*piVar4 + 4))(&DAT_01b35740);
      iVar5 = FUN_00dd6d80(puVar12);
      if (iVar5 == 0) {
        piVar4 = (int *)0x0;
      }
      else {
        if (piVar4 != param_1) {
          FUN_0040ac60(piVar4 + 0x2ac);
          param_1[0x667] = piVar4[0x667];
          param_1[0x65c] = piVar4[0x65c];
          param_1[0x65d] = piVar4[0x65d];
          param_1[0x65e] = piVar4[0x65e];
          param_1[0x65f] = piVar4[0x65f];
          param_1[0x660] = piVar4[0x660];
          param_1[0x661] = piVar4[0x661];
          param_1[0x662] = piVar4[0x662];
          param_1[0x663] = piVar4[0x663];
          param_1[0x6ae] = piVar4[0x6ae];
          FUN_006e9890(piVar4);
          iVar5 = piVar4[0x20f];
          param_1[0x147] = iVar5;
          param_1[0x20f] = iVar5;
          if ((piVar4[0x3a7] & 0x100000U) == 0) {
            param_1[0x3a7] = param_1[0x3a7] & 0xffefffff;
          }
          else {
            param_1[0x3a7] = param_1[0x3a7] | 0x100000;
          }
          if ((piVar4[0x3a7] & 0x4000000U) == 0) {
            param_1[0x3a7] = param_1[0x3a7] & 0xfbffffff;
          }
          else {
            param_1[0x3a7] = param_1[0x3a7] | 0x4000000;
          }
          uVar6 = FUN_00a8eea0();
          FUN_00a8ee20(uVar6);
          param_1[0x3aa] = piVar4[0x3aa];
          param_1[0x3af] = piVar4[0x3af];
          param_1[0x3b4] = piVar4[0x3b4];
          param_1[0x3b9] = piVar4[0x3b9];
          param_1[0x3be] = piVar4[0x3be];
          param_1[0x3c3] = piVar4[0x3c3];
          param_1[0x3c8] = piVar4[0x3c8];
          param_1[0x3cd] = piVar4[0x3cd];
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
  param_1[0x3d2] = 0;
  piVar4 = param_1 + 0x3aa;
  do {
    if (*piVar4 != 0) {
      if (((iVar5 == 6) || (iVar5 == 5)) && ((param_1[0x3a7] & 0x800000U) != 0)) {
        param_1[0x3a7] = param_1[0x3a7] & 0xff7fffff;
        FUN_00a93910(1);
      }
      param_1[0x3d2] = param_1[0x3d2] + 1;
      FUN_006eb860(iVar5);
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
          param_1[0x3a9] = param_1[0x3a9] | uVar3;
LAB_00703c1f:
          if (uVar10 < 0x20) {
            param_1[0x3a8] = param_1[0x3a8] | uVar3;
          }
        }
      }
      else {
        iVar5 = FUN_00a10040(uVar10);
        if (iVar5 == 1) goto LAB_00703c1f;
      }
      uVar10 = uVar10 + 1;
      uVar3 = uVar3 << 1 | (uint)((int)uVar3 < 0);
    } while ((int)uVar10 < 0x10);
  }
  if ((*(byte *)(param_1 + 0x3a8) & 4) != 0) {
    param_1[0x3a7] = param_1[0x3a7] | 0x200000;
  }
  if ((*(byte *)(param_1 + 0x3a8) & 0x10) != 0) {
    param_1[0x3a7] = param_1[0x3a7] | 0x400000;
  }
  param_1[0x6ac] = 4;
  uVar3 = param_1[0x3a8];
  if ((uVar3 & 0x40) != 0) {
    param_1[0x6ac] = 3;
  }
  if ((char)uVar3 < '\0') {
    param_1[0x6ac] = param_1[0x6ac] + -1;
  }
  if ((uVar3 & 0x100) != 0) {
    param_1[0x6ac] = param_1[0x6ac] + -1;
  }
  if ((uVar3 & 0x200) != 0) {
    param_1[0x6ac] = param_1[0x6ac] + -1;
  }
  pcVar1 = *(code **)(*param_1 + 0x1d8);
  iVar5 = -1;
  param_1[0x665] = 0;
  param_1[0x666] = 0;
  local_178 = (float)(*pcVar1)();
  piVar4 = (int *)FUN_00ac8a30();
  if (piVar4 != (int *)0x0) {
    param_1[0x665] = *piVar4;
    param_1[0x666] = piVar4[1];
    if (piVar4[2] != 0) {
      local_178 = 1.4013e-45;
    }
  }
  switch(param_1[0x665]) {
  case 1:
  case 0x15:
    iVar5 = 0x80002;
    param_1[0x664] = 0x136;
    break;
  case 3:
  case 0xd:
    iVar5 = 0x80002;
    param_1[0x664] = 0x101;
    break;
  case 4:
    iVar5 = 0x80002;
    param_1[0x664] = 0x102;
    break;
  case 5:
  case 0xc:
    iVar5 = 0x80002;
    param_1[0x664] = 0xfd;
    break;
  case 6:
  case 0xe:
    iVar5 = 0x80002;
    param_1[0x664] = 0xfe;
    break;
  case 7:
    iVar5 = 0x80002;
    param_1[0x664] = 0xff;
    break;
  case 8:
    iVar5 = 0x80002;
    param_1[0x664] = 0x100;
    break;
  case 9:
  case 0xf:
    iVar5 = 0x80002;
    param_1[0x664] = 0xb5;
    break;
  case 10:
  case 0xb:
    iVar5 = 0x80002;
    param_1[0x664] = 0xfb;
    break;
  case 0x10:
    iVar5 = 0x80002;
    param_1[0x664] = 0x13b;
    break;
  case 0x11:
    iVar5 = 0x80002;
    param_1[0x664] = 0x13c;
    break;
  case 0x12:
    iVar5 = 0x80002;
    param_1[0x664] = 0x13d;
    break;
  case 0x13:
  case 0x14:
    iVar5 = 0x80002;
    param_1[0x664] = 0x13e;
    break;
  case 0x16:
    iVar5 = 0x80002;
    param_1[0x664] = 0x141;
    break;
  case 0x17:
    iVar5 = 0x80001;
    param_1[0x664] = 0x9b;
    break;
  case 0x18:
    iVar5 = 0x80001;
    param_1[0x664] = 0x9e;
    break;
  case 0x19:
  case 0x1a:
    iVar5 = 0x80001;
    param_1[0x664] = 0xfb;
    break;
  case 0x1b:
  case 0x1c:
    iVar5 = 0x80001;
    param_1[0x664] = 0xfc;
    break;
  case 0x1d:
    iVar5 = 0x80001;
    param_1[0x664] = 0x9c;
    break;
  case 0x1e:
    iVar5 = 0x80001;
    param_1[0x664] = 0x9d;
    break;
  case 0x20:
    iVar5 = -1;
    FUN_006f32b0();
    break;
  case 0x21:
    iVar5 = 0x80001;
    param_1[0x664] = 0x131;
    break;
  case 0x22:
    iVar5 = 0x80005;
    param_1[0x6af] = 1;
  }
  if (param_1[0x665] == 0x1e) {
    param_1[0x3a7] = param_1[0x3a7] | 0x4000000;
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
    FUN_00dffb30(param_1 + 0x3d4);
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
  if ((param_1[0x666] == 1) && (iVar8 = FUN_006f8ed0(&fStack_170,0), iVar8 != 0)) {
    param_1[0x14] = (int)((float)param_1[0x14] + fStack_170 * -0.1);
    param_1[0x15] = (int)(fStack_16c * -0.1 + (float)param_1[0x15]);
    param_1[0x16] = (int)((float)param_1[0x16] + fStack_168 * -0.1);
    param_1[0x17] = (int)(fStack_164 * -0.1 + (float)param_1[0x17]);
  }
  if ((param_1[0x665] == 0x14) && (param_1[0x1d9] != 0)) {
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
  iVar8 = param_1[0x665];
  if (((iVar8 == 0x1a) || (iVar8 == 0x1c)) || (iVar8 == 0xb)) {
    param_1[0x3a7] = param_1[0x3a7] | 0x100000;
  }
  iVar8 = param_1[0x665];
  if (((iVar8 != 0x17) && (iVar8 != 0x18)) && ((iVar8 != 0x1d && (iVar8 != 0x1e)))) {
    param_1[0x667] = param_1[0x667] + 1;
  }
  FUN_006f8c30();
  if ((param_1[0x128] == 0) && ((*(byte *)(param_1 + 0x2c0) & 2) != 0)) {
    FUN_00ac8d40(1);
  }
  iVar8 = FUN_00a81330();
  if (((iVar8 != 0) && (iVar8 = FUN_00a7c8a0(), iVar8 != 0)) &&
     (*(undefined4 **)(iVar8 + 0x370) != (undefined4 *)0x0)) {
    *(uint *)(iVar8 + 0x364) = *(uint *)(iVar8 + 0x364) | 0x400000;
    **(undefined4 **)(iVar8 + 0x370) = 0;
  }
  param_1[0x3a7] = param_1[0x3a7] | 0x40000;
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
    if ((param_1[0x3a7] & 0x80000U) == 0) goto LAB_00704162;
    iVar5 = 0x80000;
  }
  FUN_006eece0(iVar5);
LAB_00704162:
  iVar5 = FUN_006eb7a0();
  if (((iVar5 == 0) || (param_1[0x139] != 0)) && (param_1[0x6a4] != 0)) {
    param_1[0x6a4] = 0;
    FUN_00a8c9b0(0,0x197,0,0);
  }
  return;
}

// 00704230  FUN_00704230  size=567  [between]
void __fastcall FUN_00704230(int param_1)

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
  *(undefined4 *)(param_1 + 0xf48) = 0;
  local_188 = 0;
  do {
    puVar1 = (undefined4 *)(param_1 + 0xea8 + local_188 * 0x14);
    if (*(int *)(param_1 + 0xea8 + local_188 * 0x14) == 0) {
      if ((float)puVar1[1] <= 1.0 - (float)iVar3 / (float)iVar4) {
        *puVar1 = 1;
        *(int *)(param_1 + 0xf48) = *(int *)(param_1 + 0xf48) + 1;
        FUN_006eb860(local_188);
        if (((local_188 == 6) || (local_188 == 5)) && ((*(uint *)(param_1 + 0xe9c) & 0x800000) != 0)
           ) {
          *(uint *)(param_1 + 0xe9c) = *(uint *)(param_1 + 0xe9c) & 0xff7fffff;
          FUN_00a93910(1);
        }
        if (local_188 == 4) {
          FUN_006ed450();
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
          FUN_006f9df0(iVar2,local_180,&local_170,0x437a0000,0);
          local_18c = local_18c + 1;
          iVar6 = iVar6 + 1;
        } while (iVar6 < 3);
        if (*(int *)(&DAT_01647488 + local_188 * 4) != 0xffff) {
          FUN_00aa92c0(*(int *)(&DAT_01647488 + local_188 * 4));
        }
        if (*(int *)(param_1 + 0x1a90) == 0) {
          *(undefined4 *)(param_1 + 0x1a90) = 1;
          uVar5 = FUN_00a8c890(0);
          FUN_004117d0(0x197,param_1,uVar5);
          FUN_00a963e0(local_160);
        }
      }
    }
    else {
      *(int *)(param_1 + 0xf48) = *(int *)(param_1 + 0xf48) + 1;
    }
    local_188 = local_188 + 1;
    if (7 < local_188) {
      return;
    }
  } while( true );
}

// 00704B80  FUN_00704b80  size=526  [between]
void __fastcall FUN_00704b80(int param_1)

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
  pfVar9 = (float *)(param_1 + 0x1728);
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
LAB_00704ce6:
                    iVar6 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
                    goto LAB_00704ceb;
                  }
                  if (bVar2 == 0) break;
                  bVar2 = pbVar5[1];
                  bVar13 = bVar2 < pbVar8[1];
                  if (bVar2 != pbVar8[1]) goto LAB_00704ce6;
                  pbVar8 = pbVar8 + 2;
                  pbVar5 = pbVar5 + 2;
                } while (bVar2 != 0);
                iVar6 = 0;
LAB_00704ceb:
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

// 00704D90  FUN_00704d90  size=109  [between]
void __fastcall FUN_00704d90(int param_1)

{
  undefined4 uVar1;
  undefined1 local_160 [348];
  
  FUN_006fac80();
  FUN_006eb860(0xffffffff);
  if (*(int *)(param_1 + 0x1a90) == 0) {
    *(undefined4 *)(param_1 + 0x1a90) = 1;
    uVar1 = FUN_00a8c890(0);
    FUN_004117d0(0x197,param_1,uVar1);
    FUN_00a963e0(local_160);
  }
  FUN_006ed450();
  FUN_00aa92c0(399);
  return;
}

// 00704E00  FUN_00704e00  size=436  [between]
undefined4 __fastcall FUN_00704e00(int *param_1)

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
LAB_00704ea1:
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
        goto LAB_00704ea1;
      }
    }
    piVar5 = piVar5 + 0x54;
  } while( true );
}

// 00704FC0  Em8220::vf40  size=3295  [class]
undefined4 __fastcall Em8220::vf40(int *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  uint uVar7;
  undefined4 *puVar8;
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
  
  iVar2 = EmBaseDLC::vf40();
  if (iVar2 == 0) {
    return 0;
  }
  param_1[0x3a7] = 0;
  FUN_00a7c950();
  FUN_00a7c950();
  param_1[0x514] = 0;
  param_1[0x501] = 0;
  param_1[0x515] = 0;
  param_1[0x500] = 0;
  param_1[0x525] = 0;
  param_1[0x526] = 0;
  param_1[0x518] = 0;
  param_1[0x527] = 0;
  param_1[0x519] = -1;
  param_1[0x528] = 0;
  param_1[0x51a] = -1;
  param_1[0x529] = 0;
  param_1[0x51b] = -1;
  param_1[0x52a] = 0;
  param_1[0x51c] = 0;
  param_1[0x520] = 0;
  param_1[0x52f] = param_1[0x22a];
  param_1[0x521] = 0;
  param_1[0x524] = 0;
  param_1[0x52b] = 0;
  param_1[0x585] = 0;
  param_1[0x52c] = 0;
  param_1[0x530] = 0;
  param_1[0x589] = 0x44160000;
  param_1[0x531] = 0;
  param_1[0x532] = 0;
  param_1[0x611] = 0;
  param_1[0x533] = 0;
  param_1[0x620] = 0;
  param_1[0x584] = 0;
  param_1[0x621] = 0;
  param_1[0x587] = 0;
  param_1[0x588] = 0;
  param_1[0x622] = 0x43340000;
  param_1[0x58c] = 0;
  param_1[0x60f] = 0;
  param_1[0x674] = 0;
  param_1[0x616] = 0;
  param_1[0x677] = 0;
  param_1[0x654] = 0;
  param_1[0x678] = 0;
  param_1[0x656] = 0;
  param_1[0x65a] = 1;
  param_1[0x67a] = 0x3f800000;
  param_1[0x65b] = 0;
  param_1[0x664] = 0;
  param_1[0x67b] = 0;
  param_1[0x665] = 0;
  param_1[0x69d] = 0;
  param_1[0x667] = 0;
  param_1[0x6a6] = 0;
  param_1[0x66a] = 0;
  param_1[0x66c] = 0;
  param_1[0x6aa] = 0x3f800000;
  param_1[0x679] = -1;
  param_1[0x69f] = 0;
  param_1[0x668] = 0x44160000;
  param_1[0x6a0] = 0;
  param_1[0x6a1] = 0;
  param_1[0x6a4] = 0;
  param_1[0x6a8] = 0;
  param_1[0x6ac] = 4;
  param_1[0x6ad] = 0;
  param_1[0x6ae] = 0;
  param_1[0x6af] = 0;
  param_1[0x6b0] = 0;
  param_1[0x3a6] = 0;
  param_1[0x6cc] = 0;
  param_1[0x6b1] = 0x44610000;
  param_1[0x6d4] = 0;
  param_1[0x6c2] = 0;
  param_1[0x6cb] = 0;
  param_1[0x6d0] = 0;
  param_1[0x6d1] = 0;
  param_1[0x6d2] = 0;
  param_1[0x6d3] = 0;
  param_1[0x6d5] = 0;
  param_1[0x3a4] = 0;
  param_1[0x6d6] = 0;
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
  param_1[0x650] = 0;
  param_1[0x651] = 0;
  param_1[0x652] = 0;
  param_1[0x653] = 0;
  param_1[0x49c] = 0;
  param_1[0x4a8] = 0;
  param_1[0x49d] = 0;
  param_1[0x49e] = 0;
  param_1[0x4a9] = 0;
  param_1[0x4aa] = 0;
  param_1[0x4b4] = 0;
  param_1[0x4b5] = 0;
  param_1[0x4b6] = 0;
  param_1[0x4c0] = 0;
  param_1[0x4c1] = 0;
  param_1[0x4c2] = 0;
  param_1[0x4cc] = 0;
  param_1[0x4cd] = 0;
  param_1[0x4ce] = 0;
  param_1[0x4d8] = 0;
  param_1[0x4d9] = 0;
  param_1[0x4da] = 0;
  param_1[0x4e4] = 0;
  param_1[0x4e5] = 0;
  param_1[0x4e6] = 0;
  param_1[0x4f0] = 0;
  param_1[0x4f1] = 0;
  param_1[0x4f2] = 0;
  if ((param_1[0x1db] != 0) && (uVar7 = 0, *(int *)(param_1[0x1db] + 0x18) != 0)) {
    iVar2 = 0;
    piVar6 = param_1 + 0x67c;
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
  FUN_00acf600(0x2822f,"Em8220Body");
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
  FUN_008e5610(0x100);
  FUN_008e5610(0x80);
  FUN_008e6d00();
  param_1[0x669] = 0;
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
        iVar3 = RigidBodyCollection::RigidBodyCollection_2();
      }
      param_1[0x1ec] = iVar3;
      if (iVar3 == 0) {
        return 0;
      }
      iVar2 = FUN_008f6410(param_1[0x13c],iVar2,local_1e0);
      if (iVar2 != 0) {
        FUN_008f2cd0(0);
        (**(code **)(*(int *)param_1[0x1ec] + 0x108))(0x1f);
        puVar4 = (undefined4 *)FUN_009f8b60();
        (**(code **)(*(int *)param_1[0x1ec] + 0x114))(*puVar4);
        FUN_008f1600(0x80000000);
        FUN_008f1600(0x20);
        FUN_008f18c0(0x100);
        FUN_008f1600(0x100);
        FUN_008f1600(0x80);
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
      param_1[0x3a7] = param_1[0x3a7] | 0x800000;
    }
    puVar4 = (undefined4 *)FUN_009f8b60();
    iVar2 = CollisionCapsule::CollisionCapsule(2,*puVar4,0);
    if (iVar2 == 0) {
      return 0;
    }
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
    param_1[0x669] = 1;
    FUN_006ecb90();
    piVar6 = (int *)FUN_00ac89d0();
    if (piVar6 == (int *)0x0) {
      piVar6 = param_1;
    }
    FUN_00e01ca0();
    uStack_50 = 0;
    uStack_1c = 0xffffffff;
    FUN_00dffad0(0);
    FUN_00e020f0(piVar6[0x13c]);
    FUN_00dffb30(param_1 + 0x3d4);
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
  uStack_1c0 = 0x3f000000;
  uStack_1cc = 0xffff;
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
  param_1[0x5c5] = 0x3c8efa35;
  local_200 = 0;
  local_1fc = 0x3e32b8c2;
  local_1f8 = 0;
  FUN_00a83270(&local_200,0x3f9c61aa,0x3f490fdb);
  iVar2 = FUN_006ec9a0();
  if (iVar2 == 0) {
    return 0;
  }
  FUN_006ea520();
  FUN_006ecaa0();
  FUN_006ed1c0();
  piVar6 = param_1;
  FUN_00c1cf50(param_1);
  FUN_00c54720(piVar6);
  param_1[0x20b] = 6;
  FUN_006ebc20();
  FUN_006e9a30();
  if ((param_1[0x128] == 0) && ((*(byte *)(param_1 + 0x2c0) & 2) != 0)) {
    iVar2 = param_1[0x13c];
  }
  else {
    if ((*(byte *)(param_1 + 0x2c0) & 0x40) == 0) {
      puVar4 = (undefined4 *)FUN_00dd3580(0x90,&DAT_01b7bd48);
      param_1[0x360] = (int)puVar4;
      if (puVar4 != (undefined4 *)0x0) {
        puVar8 = &DAT_018828f0;
        for (iVar2 = 0x24; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar4 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar4 = puVar4 + 1;
        }
        lib::AllocatedArray<cEnemySubState>::AllocatedArray<cEnemySubState>
                  (param_1[0x13c],5,param_1[0x360],4);
        FUN_00a88b50(1,0);
        param_1[0x34a] = 1;
      }
      goto LAB_00705b5b;
    }
    iVar2 = param_1[0x13c];
  }
  FUN_00a82ac0(iVar2,4,0,0xffffffff);
  param_1[0x351] = param_1[0x351] | 0x2000000;
  param_1[0x205] = 4;
LAB_00705b5b:
  FUN_00ac9420("tentacle_a");
  FUN_00ac94e0("tentacle_b");
  param_1[0x657] = 0;
  if (param_1[0x1db] != 0) {
    *(undefined4 *)(param_1[0x1db] + 0xbac) = 1;
    *(undefined4 *)(param_1[0x1db] + 0xbc0) = 0x3e3851ec;
  }
  (**(code **)(*param_1 + 0x34c))();
  param_1[0x6a3] = 0;
  if ((*(byte *)(param_1 + 0x2c0) & 0x10) != 0) {
    pcVar1 = *(code **)(*param_1 + 0x110);
    param_1[0x6a3] = 0x42700000;
    (*pcVar1)(1);
    FUN_00aa92c0(0x208);
    FUN_006eece0(0x10010);
  }
  if ((param_1[0x128] != 0) || ((*(byte *)(param_1 + 0x2c0) & 2) == 0)) {
    FUN_00ac9300("faceArmor");
    FUN_00ac9300("cover_a_DEC");
  }
  if ((param_1[0x128] != 0) || ((*(byte *)(param_1 + 0x2c0) & 2) == 0)) {
    param_1[0x36a] = 0;
    param_1[0x36c] = 0;
  }
  param_1[0x6b4] = param_1[0x14];
  param_1[0x6b5] = param_1[0x15];
  param_1[0x6b6] = param_1[0x16];
  param_1[0x6b7] = param_1[0x17];
  param_1[0x6b8] = param_1[0x24];
  param_1[0x6b9] = param_1[0x25];
  param_1[0x6ba] = param_1[0x26];
  param_1[0x6bb] = param_1[0x27];
  return 1;
}

// 00705CB0  Em8220::vf54  size=16  [class]
void Em8220::vf54(void)

{
  FUN_00704b80();
  BehaviorEmBase::vf54();
  return;
}

// 00705CC0  FUN_00705cc0  size=99  [between]
void __fastcall FUN_00705cc0(int param_1)

{
  int iVar1;
  undefined1 local_160 [348];
  
  iVar1 = FUN_00a81330();
  if (iVar1 != 0) {
    iVar1 = FUN_00a7c8a0();
    if (((iVar1 != 0) && (*(int *)(param_1 + 0x4a0) == 1)) && (*(int *)(param_1 + 0x1098) == 0)) {
      FUN_004117d0(1,iVar1,param_1 + 0x1000);
      FUN_00a963e0(local_160);
    }
  }
  return;
}

// 00705D30  FUN_00705d30  size=1315  [between]
void __fastcall FUN_00705d30(int param_1)

{
  float fVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  undefined4 unaff_ESI;
  float10 fVar5;
  undefined4 uVar6;
  float fVar7;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x19a8) != 0) {
    return;
  }
  if ((DAT_01bea060 & 0x2000000) != 0) {
    return;
  }
  fVar7 = 1.0;
  if ((*(int *)(param_1 + 0xdb0) == 1) || (*(int *)(param_1 + 0xdb0) == 0)) {
    fVar7 = 0.2;
  }
  iVar4 = FUN_00a82d50();
  if (iVar4 != 1) {
    iVar4 = FUN_006ec7c0();
    if (iVar4 != 0) {
      fVar7 = *(float *)(param_1 + 0xa90);
      if (NAN(fVar7) || 36.0 < fVar7 == (fVar7 == 36.0)) {
        return;
      }
      if (*(int *)(param_1 + 0x1b54) != 0) {
        return;
      }
      FUN_006eece0(0xa0003);
      return;
    }
    fVar7 = *(float *)(param_1 + 0x920) - fVar7 * *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x920) = fVar7;
    if (0.0 < fVar7) {
      return;
    }
    iVar4 = FUN_00464910();
    if (iVar4 != 0) {
      FUN_006f6040();
      return;
    }
    iVar4 = FUN_006f90c0();
    if (iVar4 != 0) {
      if (((*(int *)(param_1 + 0x1360) != 0) &&
          ((*(uint *)(param_1 + 0x1464) & 0xffff0000) != 0x50000)) &&
         (uVar3 = FUN_00dde2d0(0,100), (uVar3 & 1) != 0)) {
        uVar3 = FUN_00dde2d0(0,100);
        if ((uVar3 & 1) != 0) {
          FUN_006eece0(0x50001);
          return;
        }
        FUN_006eece0(0x50002);
        return;
      }
      iVar4 = FUN_006ebf70();
      if ((iVar4 == 0) &&
         (fVar7 = *(float *)(param_1 + 0x1a98), !NAN(fVar7) && 10.0 < fVar7 != (fVar7 == 10.0))) {
        if (*(float *)(param_1 + 0xa90) <= 81.0) {
          FUN_006eece0(0x10011);
          return;
        }
        FUN_006eece0(0x10003);
        return;
      }
      iVar4 = FUN_006e9710(0x41700000);
      if ((iVar4 != 0) && (iVar4 = FUN_006ede40(), iVar4 != 0)) {
        FUN_006eece0(0x20003);
        return;
      }
      fVar5 = (float10)FUN_006e9df0();
      fVar7 = (float)fVar5;
      if ((float10)1.0471976 < fVar5 != ((float10)1.0471976 == fVar5)) {
        uVar3 = FUN_00dde2d0(0,100);
        if (((uVar3 & 1) != 0) && (*(int *)(param_1 + 0x1270) == 0)) {
          FUN_006eece0(0x1000b);
          return;
        }
        fVar5 = (float10)fVar7;
      }
      if (fVar5 < (float10)0.7853982) {
        if ((((*(int *)(param_1 + 0x1360) == 0) &&
             (fVar7 = *(float *)(param_1 + 0xa90), !NAN(fVar7) && 64.0 < fVar7 != (fVar7 == 64.0)))
            && (*(float *)(param_1 + 0xa90) <= 506.25)) &&
           ((*(float *)(param_1 + 0x1888) <= 0.0 && (iVar4 = FUN_00c158c0(), iVar4 != 0)))) {
          *(undefined4 *)(param_1 + 0x183c) = 0;
          *(uint *)(param_1 + 0xe9c) = *(uint *)(param_1 + 0xe9c) & 0xfffff7ff;
          uVar3 = FUN_00dde2d0(0,100);
          if ((uVar3 & 3) == 0) {
            *(uint *)(param_1 + 0xe9c) = *(uint *)(param_1 + 0xe9c) | 0x800;
          }
          FUN_006eece0(0x2000a);
          return;
        }
        if (64.0 < *(float *)(param_1 + 0xa90)) {
          if (*(float *)(param_1 + 0xa90) <= 225.0) {
            if (((*(float *)(param_1 + 0x1624) <= 0.0) &&
                (fVar7 = *(float *)(param_1 + 0xa90), !NAN(fVar7) && 64.0 < fVar7 != (fVar7 == 64.0)
                )) && (iVar4 = FUN_006fc980(), iVar4 != 0)) {
              *(float *)(param_1 + 0x1624) = *(float *)(param_1 + 0x18a0) * 60.0;
              *(uint *)(param_1 + 0xe9c) = *(uint *)(param_1 + 0xe9c) | 0x10;
              sVar2 = FUN_00dde2d0(3,5);
              *(int *)(param_1 + 0x1620) = (int)sVar2;
              FUN_006eece0(0x20008);
              return;
            }
            fVar7 = *(float *)(param_1 + 0xa90);
            if (((!NAN(fVar7) && 49.0 < fVar7 != (fVar7 == 49.0)) &&
                (fVar5 = (float10)FUN_00dde300(0,0x3f800000),
                fVar5 < (float10)*(float *)(param_1 + 0x1628) !=
                (fVar5 == (float10)*(float *)(param_1 + 0x1628)))) &&
               (10.0 < *(float *)(param_1 + 0x19d0))) {
              if (*(int *)(param_1 + 0x1468) == 0x20007) {
                *(int *)(param_1 + 0x1630) = *(int *)(param_1 + 0x1630) + 1;
              }
              else {
                *(undefined4 *)(param_1 + 0x1630) = 0;
              }
              if (*(int *)(param_1 + 0x1630) < *(int *)(param_1 + 0x162c)) goto LAB_007061db;
            }
          }
        }
        else if ((16.0 < *(float *)(param_1 + 0xa90)) ||
                (fVar7 = *(float *)(param_1 + 0x924) - *(float *)(param_1 + 0x910),
                *(float *)(param_1 + 0x924) = fVar7, fVar7 <= 0.0)) {
          uVar3 = FUN_00dde2d0(0,100);
          if (((uVar3 & 1) != 0) && (*(int *)(param_1 + 0x1360) == 0)) {
LAB_007061db:
            FUN_006eece0(0x20007);
            return;
          }
          if (*(int *)(param_1 + 0x12a0) != 0) {
            FUN_006eece0(0x10008);
            return;
          }
          goto LAB_007060d6;
        }
        iVar4 = FUN_006e94d0();
        if (iVar4 != 0) {
          FUN_006fbc90();
          return;
        }
        fVar7 = *(float *)(param_1 + 0xa90);
        if (!NAN(fVar7) && 400.0 < fVar7 != (fVar7 == 400.0)) {
          FUN_006fbc90();
          return;
        }
        if (*(int *)(param_1 + 0x1360) == 0) {
          return;
        }
        fVar7 = *(float *)(param_1 + 0xa90);
        if (NAN(fVar7) || 49.0 < fVar7 == (fVar7 == 49.0)) {
          return;
        }
        FUN_006fbc90();
        return;
      }
      if (*(int *)(param_1 + 0x1858) < 4) {
        FUN_006eece0(0x10005);
        return;
      }
LAB_007060d6:
      FUN_006eece0(0x50000);
      return;
    }
    iVar4 = param_1;
    if (((*(int *)(param_1 + 0x1360) != 0) &&
        ((*(uint *)(param_1 + 0x1464) & 0xffff0000) != 0x50000)) &&
       (uVar3 = FUN_00dde2d0(0,100), (uVar3 & 1) != 0)) {
      uVar3 = FUN_00dde2d0(0,100);
      if ((uVar3 & 1) == 0) {
LAB_00701519:
        FUN_006eece0(0x50002);
        return;
      }
LAB_0070175e:
      FUN_006eece0(0x50001);
      return;
    }
    iVar4 = FUN_006ede40(unaff_ESI,iVar4);
    if (iVar4 != 0) {
      FUN_006eece0(0x20003);
      return;
    }
    fVar5 = (float10)FUN_00a8ec30(*(int *)(param_1 + 0xa84) + 0x40);
    fVar5 = (float10)FUN_00ddba30((float)((float10)*(float *)(param_1 + 0x94) - fVar5));
    fVar5 = ABS(fVar5);
    fVar7 = (float)fVar5;
    if ((float10)1.0471976 < fVar5 != ((float10)1.0471976 == fVar5)) {
      uVar3 = FUN_00dde2d0(0,100);
      if (((uVar3 & 1) != 0) && (*(int *)(param_1 + 0x1270) == 0)) {
        FUN_006eece0(0x1000b);
        return;
      }
      fVar5 = (float10)fVar7;
    }
    if ((float10)0.7853982 <= fVar5) {
      if (*(int *)(param_1 + 0x1858) < 4) {
        FUN_006eece0(0x10005);
        return;
      }
    }
    else {
      if (((*(int *)(param_1 + 0x4a0) != 0) || ((*(byte *)(param_1 + 0xb00) & 2) == 0)) &&
         (fVar1 = *(float *)(param_1 + 0x1a98), !NAN(fVar1) && 30.0 < fVar1 != (fVar1 == 30.0))) {
        if (144.0 < *(float *)(param_1 + 0xa90)) {
          FUN_006eece0(0x10003);
          return;
        }
        if (*(int *)(param_1 + 0x1464) != 0x10011) {
          FUN_006eece0(0x10011);
          return;
        }
      }
      if (25.0 < *(float *)(param_1 + 0xa90)) {
        if (((*(float *)(param_1 + 0xa90) <= 225.0) && (*(float *)(param_1 + 0x1624) <= 0.0)) &&
           (iVar4 = FUN_006fc980(), iVar4 != 0)) {
          *(float *)(param_1 + 0x1624) = *(float *)(param_1 + 0x18a0) * 60.0;
          *(uint *)(param_1 + 0xe9c) = *(uint *)(param_1 + 0xe9c) | 0x10;
          sVar2 = FUN_00dde2d0(3,5);
          *(int *)(param_1 + 0x1620) = (int)sVar2;
          FUN_006eece0(0x20008);
          return;
        }
        if (-15.0 < *(float *)(param_1 + 0xe90)) {
          FUN_006fbc90();
          return;
        }
        iVar4 = FUN_007008d0();
        if (iVar4 != 0) {
          return;
        }
        fVar1 = *(float *)(param_1 + 0xa90);
        if (!NAN(fVar1) && 144.0 < fVar1 != (fVar1 == 144.0)) {
          FUN_006fbc90();
          return;
        }
        fVar1 = *(float *)(param_1 + 0xa90);
        if (!NAN(fVar1) && 64.0 < fVar1 != (fVar1 == 64.0)) {
          FUN_006eece0(0x10002);
          return;
        }
        if (NAN(fVar7) || 0.34906584 < fVar7 == (fVar7 == 0.34906584)) {
          return;
        }
        iVar4 = FUN_006ebfc0();
        if (iVar4 != 0) goto LAB_00701519;
        goto LAB_0070175e;
      }
      if (*(int *)(param_1 + 0x12a0) != 0) {
        FUN_006eece0(0x10008);
        return;
      }
    }
    FUN_006eece0(0x50000);
    return;
  }
  if (*(int *)(param_1 + 0xe98) == 0) {
    iVar4 = FUN_00ac4690();
    if (iVar4 == 0) goto LAB_00705dd2;
    uVar6 = 0xa0000;
  }
  else {
    fVar7 = *(float *)(param_1 + 0x928) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x928) = fVar7;
    if (0.0 < fVar7) goto LAB_00705dd2;
    uVar6 = 0xa0002;
  }
  FUN_006eece0(uVar6);
LAB_00705dd2:
  if (*(int *)(param_1 + 0x1b30) == 0) {
    return;
  }
  FUN_00a88b50(4,1);
  return;
}

// 00706260  FUN_00706260  size=938  [between]
void __fastcall FUN_00706260(int param_1)

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
      if ((*(uint *)(param_1 + 0xe9c) & 0x800) == 0) {
        fVar1 = 12.0;
      }
      else {
        fVar1 = 50.0;
      }
      if (*(float *)(param_1 + 0x920) <= fVar1) {
        *(float *)(param_1 + 0x920) = fVar1;
        *(undefined4 *)(param_1 + 0x940) = 1;
        uVar2 = *(uint *)(param_1 + 0xe9c);
        if (*(int *)(param_1 + 0x4a0) == 1) {
          FUN_00eaa6e0(0,0);
          iVar4 = FUN_00a81330();
          if ((iVar4 != 0) && (iVar4 = FUN_00a7c8a0(), iVar4 != 0)) {
            FUN_004117d0(((uVar2 >> 0xb & 1) != 0) + '\x06',iVar4,param_1 + 0x10b0);
            FUN_00a963e0(local_160);
          }
        }
      }
    }
    FUN_00ac80a0(0x3f800000,0x3f800000);
    fVar6 = (float10)FUN_006f2240();
    if ((*(uint *)(param_1 + 0xe9c) & 0x800) == 0) {
      uVar3 = 0x40900000;
    }
    else {
      uVar3 = 0x40a00000;
    }
    FUN_006ea5e0(param_1 + 0x1870,uVar3,(float)fVar6);
    FUN_006f22c0(param_1 + 0x1870,0);
    fVar1 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x920) = fVar1;
    if (0.0 < fVar1) {
      return;
    }
    if ((*(uint *)(param_1 + 0xe9c) & 0x800) != 0) {
      FUN_006eece0(0x2000d);
      return;
    }
    FUN_006eece0(0x2000c);
    return;
  }
  FUN_00aa4080(0x7a,0,0x3d888889,0x3f800000,0,0xbf800000,0x3f800000);
  if (*(int *)(param_1 + 0x1464) == 0x1000a) {
    if (*(float *)(param_1 + 0x920) <= 9.0) {
      *(undefined4 *)(param_1 + 0x920) = 0x41100000;
    }
    goto LAB_00706597;
  }
  FUN_00705cc0();
  *(undefined4 *)(param_1 + 0x940) = 0;
  if ((*(uint *)(param_1 + 0xe9c) & 0x800) == 0) {
    if (*(int *)(param_1 + 0x183c) != 0) {
      fVar1 = *(float *)(param_1 + 0x188c);
      goto LAB_00706470;
    }
    *(float *)(param_1 + 0x920) = *(float *)(param_1 + 0x1894) * 60.0;
    *(undefined4 *)(param_1 + 0x940) = 0;
  }
  else {
    fVar1 = *(float *)(param_1 + 0x1890);
LAB_00706470:
    *(float *)(param_1 + 0x920) = fVar1 * 60.0;
  }
  if ((*(uint *)(param_1 + 0xe9c) & 0x800) == 0) {
    fVar1 = 12.0;
  }
  else {
    fVar1 = 50.0;
  }
  if (*(float *)(param_1 + 0x920) <= fVar1) {
    *(undefined4 *)(param_1 + 0x940) = 1;
    uVar2 = *(uint *)(param_1 + 0xe9c);
    if (*(int *)(param_1 + 0x4a0) != 1) goto LAB_00706597;
    FUN_00eaa6e0(0,0);
    cVar5 = ((uVar2 >> 0xb & 1) != 0) + '\x06';
    iVar4 = FUN_00a81330();
    if ((iVar4 == 0) || (iVar4 = FUN_00a7c8a0(), iVar4 == 0)) goto LAB_00706597;
  }
  else {
    if ((*(int *)(param_1 + 0x4a0) != 1) ||
       (((FUN_00eaa6e0(0,0), *(int *)(param_1 + 0x1148) != 0 || (iVar4 = FUN_00a81330(), iVar4 == 0)
         ) || (iVar4 = FUN_00a7c8a0(), iVar4 == 0)))) goto LAB_00706597;
    cVar5 = '\b';
  }
  FUN_004117d0(cVar5,iVar4,param_1 + 0x10b0);
  FUN_00a963e0(local_160);
LAB_00706597:
  FUN_006f2100();
  FUN_00ac80a0(0x3f800000,0x3f800000);
  fVar6 = (float10)FUN_006f2240();
  if ((*(uint *)(param_1 + 0xe9c) & 0x800) == 0) {
    uVar3 = 0x40900000;
  }
  else {
    uVar3 = 0x40a00000;
  }
  FUN_006ea5e0(param_1 + 0x1870,uVar3,(float)fVar6);
  FUN_006f22c0(param_1 + 0x1870,0);
  *(uint *)(param_1 + 0xe9c) = *(uint *)(param_1 + 0xe9c) | 0x20;
  *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
  return;
}

// 00706610  Em8220::vf32C  size=1523  [class]
float __fastcall Em8220::vf32C(int *param_1)

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
        if (((((iVar3 != 0) && (iVar3 != 1)) && (iVar3 != 2)) &&
            ((iVar3 != 0x1b0 && (iVar3 != 0x147)))) &&
           (iVar3 = FUN_00a81330(), piVar6 = local_60, iVar3 != param_1[0x13c])) {
          if (iVar3 != 0) {
            iVar2 = FUN_00a7c8a0();
            local_5c = iVar2;
          }
          iVar3 = FUN_006fdbb0(piVar7);
          if (iVar3 != 0) {
            if (iVar2 != 0) {
              param_1[0x660] = *(int *)(iVar2 + 0x40);
              param_1[0x661] = *(int *)(iVar2 + 0x44);
              param_1[0x662] = *(int *)(iVar2 + 0x48);
              param_1[0x663] = *(int *)(iVar2 + 0x4c);
            }
            param_1[0x65c] = piVar7[8];
            param_1[0x65d] = piVar7[9];
            local_58 = 1.4013e-45;
            param_1[0x65e] = piVar7[10];
            param_1[0x65f] = piVar7[0xb];
            (**(code **)(*param_1 + 0x198))(iVar2,piVar7,0x100);
            break;
          }
          if (param_1[0x6af] != 0) {
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
              param_1[0x526] = 0;
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
                    param_1[0x526] = (int)(float)-fVar8;
                  }
                  else {
                    fVar8 = (float10)FUN_00ddbb50(local_58);
                    param_1[0x526] = (int)(float)fVar8;
                  }
                }
              }
              if (*piVar7 == 0x93) {
                (**(code **)(*param_1 + 0x198))(iVar2,piVar7,0x40000);
                return 0.0;
              }
              local_58 = 1.4013e-45;
              iStack_50 = FUN_00a8eea0();
              if ((param_1[0x3a7] & 0x2000U) == 0) {
                piVar6 = (int *)piVar7[1];
                local_60 = piVar6;
                iVar2 = FUN_006ef5d0();
                if ((iVar2 != 0) &&
                   (piVar6 = (int *)((int)piVar6 / 5), local_60 = piVar6, (int)piVar6 < 2)) {
                  piVar6 = (int *)0x1;
                  local_60 = (int *)0x1;
                }
                if ((((piVar7[0x23] & 0x200U) != 0) && (iVar2 = FUN_006ebf70(), iVar2 != 0)) &&
                   (piVar6 = (int *)FUN_00fdbc60(), (int)piVar6 < 2)) {
                  piVar6 = (int *)0x1;
                }
                if ((*(byte *)(piVar7 + 0x23) & 0x10) == 0) {
                  (**(code **)(*param_1 + 0x30c))(piVar6,0);
                }
              }
              iVar2 = iStack_50;
              if ((piVar7[0x24] & 0x800U) != 0) {
                if (*piVar7 == 0x1c3) {
                  FUN_00a88320(piVar7[5],piVar7 + 0x40);
                }
                else if (param_1[0x139] == 0) {
                  FUN_00a88250(piVar7[5],piVar7 + 0x40);
                  piVar6 = (int *)FUN_00c206d0();
                  (**(code **)(*piVar6 + 4))(0,param_1[0x13c],param_1 + 0x10);
                }
              }
              iStack_50 = FUN_00a8eea0();
              iStack_50 = iVar2 - iStack_50;
              param_1[0x525] = 0;
              param_1[0x521] = param_1[0x521] + iStack_50;
              param_1[0x69f] = param_1[0x69f] + iStack_50;
              param_1[0x520] = param_1[0x520] + 1;
              param_1[0x52c] = param_1[0x52c] + 1;
              param_1[0x585] =
                   (int)((float)iStack_50 / (float)param_1[0x21d] + (float)param_1[0x585]);
              param_1[0x69d] = param_1[0x69c];
              iVar2 = FUN_006ebf70();
              if (iVar2 == 0) {
                if (((*(byte *)(piVar7 + 0x23) & 2) != 0) || (*piVar7 == 0x92)) goto LAB_00706afe;
                FUN_00704230();
              }
              else {
                FUN_006fa850(0xbf800000);
                if (*piVar7 == 0x92) {
LAB_00706afe:
                  FUN_00704d90();
                }
              }
              local_60 = (int *)0x0;
              iVar2 = FUN_006fdc70(piVar7,&local_60);
              if (iVar2 != 0) {
                FUN_006f3220();
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
                FUN_006ea990();
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

// 00706C20  FUN_00706c20  size=1325  [callgraph]
void __fastcall FUN_00706c20(int param_1)

{
  float fVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  undefined4 unaff_ESI;
  float10 fVar5;
  undefined4 uVar6;
  float fVar7;
  
  if (*(int *)(param_1 + 0x61c) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x19a8) != 0) {
    return;
  }
  if ((DAT_01bea060 & 0x2000000) != 0) {
    return;
  }
  fVar7 = 1.0;
  if ((*(int *)(param_1 + 0xdb0) == 1) || (*(int *)(param_1 + 0xdb0) == 0)) {
    fVar7 = 0.2;
  }
  iVar4 = FUN_00a82d50();
  if (iVar4 != 1) {
    iVar4 = FUN_006ec7c0();
    if (iVar4 != 0) {
      if (*(int *)(param_1 + 0x1b54) != 0) {
        return;
      }
      iVar4 = FUN_00aa4a90();
      if ((iVar4 != 0) &&
         ((iVar4 = FUN_006e94d0(), iVar4 != 0 || (*(float *)(param_1 + 0x19d0) < -15.0)))) {
        FUN_006eece0(0xa0004);
        return;
      }
      FUN_006eece0(0xa0003);
      return;
    }
    fVar7 = *(float *)(param_1 + 0x920) - *(float *)(param_1 + 0x910) * fVar7;
    *(float *)(param_1 + 0x920) = fVar7;
    if (0.0 < fVar7) {
      return;
    }
    iVar4 = FUN_00464910();
    if (iVar4 != 0) {
      FUN_006f6040();
      return;
    }
    iVar4 = FUN_006f90c0();
    if (iVar4 != 0) {
      if (((*(int *)(param_1 + 0x1360) != 0) &&
          ((*(uint *)(param_1 + 0x1464) & 0xffff0000) != 0x50000)) &&
         (uVar3 = FUN_00dde2d0(0,100), (uVar3 & 1) != 0)) {
        uVar3 = FUN_00dde2d0(0,100);
        if ((uVar3 & 1) != 0) {
          FUN_006eece0(0x50001);
          return;
        }
        FUN_006eece0(0x50002);
        return;
      }
      iVar4 = FUN_006ebf70();
      if ((iVar4 == 0) &&
         (fVar7 = *(float *)(param_1 + 0x1a98), !NAN(fVar7) && 30.0 < fVar7 != (fVar7 == 30.0))) {
        if (*(float *)(param_1 + 0xa90) <= 81.0) {
          FUN_006eece0(0x10011);
          return;
        }
        FUN_006eece0(0x10003);
        return;
      }
      iVar4 = FUN_006ede40();
      if (iVar4 != 0) {
        FUN_006eece0(0x20003);
        return;
      }
      fVar5 = (float10)FUN_006e9df0();
      fVar7 = (float)fVar5;
      if ((float10)1.0471976 < fVar5 != ((float10)1.0471976 == fVar5)) {
        uVar3 = FUN_00dde2d0(0,100);
        if (((uVar3 & 1) != 0) && (*(int *)(param_1 + 0x1270) == 0)) {
          FUN_006eece0(0x1000b);
          return;
        }
        fVar5 = (float10)fVar7;
      }
      if ((float10)0.7853982 <= fVar5) {
        if (*(int *)(param_1 + 0x1858) < 4) {
          FUN_006eece0(0x10005);
          return;
        }
      }
      else {
        if (25.0 < *(float *)(param_1 + 0xa90)) {
          if (*(float *)(param_1 + 0xa90) <= 225.0) {
            if ((*(float *)(param_1 + 0x1624) <= 0.0) && (iVar4 = FUN_006fc980(), iVar4 != 0)) {
              *(float *)(param_1 + 0x1624) = *(float *)(param_1 + 0x18a0) * 60.0;
              *(uint *)(param_1 + 0xe9c) = *(uint *)(param_1 + 0xe9c) | 0x10;
              sVar2 = FUN_00dde2d0(3,5);
              *(int *)(param_1 + 0x1620) = (int)sVar2;
              FUN_006eece0(0x20008);
              return;
            }
            fVar1 = *(float *)(param_1 + 0xa90);
            if (((NAN(fVar1) || 49.0 < fVar1 == (fVar1 == 49.0)) ||
                (fVar5 = (float10)FUN_00dde300(0,0x3f800000),
                fVar5 < (float10)*(float *)(param_1 + 0x1628) ==
                (fVar5 == (float10)*(float *)(param_1 + 0x1628)))) ||
               (*(float *)(param_1 + 0x19d0) <= 10.0)) {
              fVar1 = *(float *)(param_1 + 0xa90);
              if ((!NAN(fVar1) && 49.0 < fVar1 != (fVar1 == 49.0)) &&
                 (fVar5 = (float10)FUN_00dde300(0,0x3f800000),
                 fVar5 < (float10)*(float *)(param_1 + 0x1850) !=
                 (fVar5 == (float10)*(float *)(param_1 + 0x1850)))) {
                FUN_006e9df0();
              }
            }
            else {
              if (*(int *)(param_1 + 0x1468) == 0x20007) {
                *(int *)(param_1 + 0x1630) = *(int *)(param_1 + 0x1630) + 1;
              }
              else {
                *(undefined4 *)(param_1 + 0x1630) = 0;
              }
              if (((*(int *)(param_1 + 0x1630) < *(int *)(param_1 + 0x162c)) &&
                  (iVar4 = FUN_006f0410(), iVar4 != 0)) && (*(int *)(param_1 + 0x1360) == 0)) {
                FUN_006eece0(0x20007);
                return;
              }
            }
          }
          iVar4 = FUN_006e94d0();
          if (iVar4 != 0) {
            FUN_006fbc90();
            return;
          }
          iVar4 = FUN_007008d0();
          if (iVar4 != 0) {
            return;
          }
          fVar1 = *(float *)(param_1 + 0xa90);
          if (!NAN(fVar1) && 144.0 < fVar1 != (fVar1 == 144.0)) {
            FUN_006fbc90();
            return;
          }
          fVar1 = *(float *)(param_1 + 0xa90);
          if (!NAN(fVar1) && 64.0 < fVar1 != (fVar1 == 64.0)) {
            FUN_006eece0(0x10002);
            return;
          }
          if (NAN(fVar7) || 0.34906584 < fVar7 == (fVar7 == 0.34906584)) {
            return;
          }
          iVar4 = FUN_006ebfc0();
          if (iVar4 == 0) {
            FUN_006eece0(0x50001);
            return;
          }
          FUN_006eece0(0x50002);
          return;
        }
        iVar4 = FUN_006f0410();
        if (((iVar4 != 0) && (uVar3 = FUN_00dde2d0(0,100), (uVar3 & 1) != 0)) &&
           (*(int *)(param_1 + 0x1360) == 0)) {
          uVar3 = FUN_00dde2d0(0,100);
          if ((uVar3 & 7) != 0) {
            FUN_006eece0(0x20002);
            return;
          }
          FUN_006eece0(0x20007);
          return;
        }
        if (*(int *)(param_1 + 0x12a0) != 0) {
          FUN_006eece0(0x10008);
          return;
        }
      }
      FUN_006eece0(0x50000);
      return;
    }
    iVar4 = param_1;
    if (((*(int *)(param_1 + 0x1360) != 0) &&
        ((*(uint *)(param_1 + 0x1464) & 0xffff0000) != 0x50000)) &&
       (uVar3 = FUN_00dde2d0(0,100), (uVar3 & 1) != 0)) {
      uVar3 = FUN_00dde2d0(0,100);
      if ((uVar3 & 1) == 0) {
LAB_00701519:
        FUN_006eece0(0x50002);
        return;
      }
LAB_0070175e:
      FUN_006eece0(0x50001);
      return;
    }
    iVar4 = FUN_006ede40(unaff_ESI,iVar4);
    if (iVar4 != 0) {
      FUN_006eece0(0x20003);
      return;
    }
    fVar5 = (float10)FUN_00a8ec30(*(int *)(param_1 + 0xa84) + 0x40);
    fVar5 = (float10)FUN_00ddba30((float)((float10)*(float *)(param_1 + 0x94) - fVar5));
    fVar5 = ABS(fVar5);
    fVar7 = (float)fVar5;
    if ((float10)1.0471976 < fVar5 != ((float10)1.0471976 == fVar5)) {
      uVar3 = FUN_00dde2d0(0,100);
      if (((uVar3 & 1) != 0) && (*(int *)(param_1 + 0x1270) == 0)) {
        FUN_006eece0(0x1000b);
        return;
      }
      fVar5 = (float10)fVar7;
    }
    if ((float10)0.7853982 <= fVar5) {
      if (*(int *)(param_1 + 0x1858) < 4) {
        FUN_006eece0(0x10005);
        return;
      }
    }
    else {
      if (((*(int *)(param_1 + 0x4a0) != 0) || ((*(byte *)(param_1 + 0xb00) & 2) == 0)) &&
         (fVar1 = *(float *)(param_1 + 0x1a98), !NAN(fVar1) && 30.0 < fVar1 != (fVar1 == 30.0))) {
        if (144.0 < *(float *)(param_1 + 0xa90)) {
          FUN_006eece0(0x10003);
          return;
        }
        if (*(int *)(param_1 + 0x1464) != 0x10011) {
          FUN_006eece0(0x10011);
          return;
        }
      }
      if (25.0 < *(float *)(param_1 + 0xa90)) {
        if (((*(float *)(param_1 + 0xa90) <= 225.0) && (*(float *)(param_1 + 0x1624) <= 0.0)) &&
           (iVar4 = FUN_006fc980(), iVar4 != 0)) {
          *(float *)(param_1 + 0x1624) = *(float *)(param_1 + 0x18a0) * 60.0;
          *(uint *)(param_1 + 0xe9c) = *(uint *)(param_1 + 0xe9c) | 0x10;
          sVar2 = FUN_00dde2d0(3,5);
          *(int *)(param_1 + 0x1620) = (int)sVar2;
          FUN_006eece0(0x20008);
          return;
        }
        if (-15.0 < *(float *)(param_1 + 0xe90)) {
          FUN_006fbc90();
          return;
        }
        iVar4 = FUN_007008d0();
        if (iVar4 != 0) {
          return;
        }
        fVar1 = *(float *)(param_1 + 0xa90);
        if (!NAN(fVar1) && 144.0 < fVar1 != (fVar1 == 144.0)) {
          FUN_006fbc90();
          return;
        }
        fVar1 = *(float *)(param_1 + 0xa90);
        if (!NAN(fVar1) && 64.0 < fVar1 != (fVar1 == 64.0)) {
          FUN_006eece0(0x10002);
          return;
        }
        if (NAN(fVar7) || 0.34906584 < fVar7 == (fVar7 == 0.34906584)) {
          return;
        }
        iVar4 = FUN_006ebfc0();
        if (iVar4 != 0) goto LAB_00701519;
        goto LAB_0070175e;
      }
      if (*(int *)(param_1 + 0x12a0) != 0) {
        FUN_006eece0(0x10008);
        return;
      }
    }
    FUN_006eece0(0x50000);
    return;
  }
  if (*(int *)(param_1 + 0xe98) == 0) {
    iVar4 = FUN_00ac4690();
    if (iVar4 == 0) goto LAB_00706cc2;
    uVar6 = 0xa0000;
  }
  else {
    fVar7 = *(float *)(param_1 + 0x928) - *(float *)(param_1 + 0x910);
    *(float *)(param_1 + 0x928) = fVar7;
    if (0.0 < fVar7) goto LAB_00706cc2;
    uVar6 = 0xa0002;
  }
  FUN_006eece0(uVar6);
LAB_00706cc2:
  if (*(int *)(param_1 + 0x1b30) == 0) {
    return;
  }
  FUN_00a88b50(4,1);
  return;
}

// 00707150  FUN_00707150  size=872  [callgraph]
void __fastcall FUN_00707150(int *param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  float10 fVar4;
  undefined1 local_160 [348];
  
  uVar3 = 0;
  if ((param_1[0x3a7] & 0x100000U) != 0) {
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
      FUN_00705cc0();
      uVar3 = param_1[0x3a7];
      if (param_1[0x128] == 1) {
        FUN_00eaa6e0(0,0);
        iVar2 = FUN_00a81330();
        if ((iVar2 != 0) && (iVar2 = FUN_00a7c8a0(), iVar2 != 0)) {
          FUN_004117d0(((uVar3 >> 0xb & 1) != 0) + '\x06',iVar2,param_1 + 0x42c);
          FUN_00a963e0(local_160);
        }
      }
      param_1[0x248] = (int)((float)param_1[0x625] * 60.0);
      FUN_006f2100();
      FUN_00ac80a0(0x3f800000,0x3f800000);
      param_1[0x3a7] = param_1[0x3a7] | 0x20;
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    break;
  case 2:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    FUN_006ea5e0(param_1 + 0x61c,0x40900000,0);
    FUN_006f22c0(param_1 + 0x61c,1);
    fVar1 = (float)param_1[0x248];
    param_1[0x248] = (int)(fVar1 - (float)param_1[0x244]);
    if (fVar1 - (float)param_1[0x244] <= 0.0) {
      FUN_00aa4080(0x135,0,0x3e088889,0x3f800000,uVar3 | 0x8000000,0xbf800000,0x3f800000);
      FUN_006ef530(0);
      FUN_006ef500();
      FUN_006fc440();
      param_1[0x187] = param_1[0x187] + 1;
      return;
    }
    fVar4 = (float10)FUN_006e9df0();
    if ((float10)0.87266463 <= fVar4) {
      FUN_00aa4080(0x138,0,0x3e888889,0x3f800000,uVar3 | 0x8000000,0xbf800000,0x3f800000);
      FUN_006ef530(0x41f00000);
      FUN_006ef500();
      param_1[0x187] = 4;
      return;
    }
    break;
  case 3:
    FUN_00ac80a0(0x3f800000,0x3f800000);
    iVar2 = FUN_00a94ce0(0);
    if (iVar2 != 0) {
      param_1[0x622] = (int)((float)param_1[0x629] * 60.0);
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

// 00707560  FUN_00707560  size=531  [callgraph]
/* WARNING: Switch with 1 destination removed at 0x00707633 : 14 cases all go to same destination */
/* WARNING: Switch with 1 destination removed at 0x00707655 : 4 cases all go to same destination */
/* WARNING: Switch with 1 destination removed at 0x00707673 : 5 cases all go to same destination */
/* WARNING: Switch with 1 destination removed at 0x007076dc : 8 cases all go to same destination */

void __fastcall FUN_00707560(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x618);
  if (iVar1 < 0x20001) {
    switch(iVar1) {
    case 0x10000:
      FUN_00706c20();
      break;
    case 0x10001:
      FUN_00705d30();
      break;
    case 0x10002:
      FUN_00701770();
      break;
    case 0x10003:
      FUN_00701860();
      break;
    case 0x1000d:
      FUN_006f6a70();
    }
  }
  else if (iVar1 < 0x30001) {
    switch(iVar1) {
    case 0x20005:
      FUN_006f14f0();
      break;
    case 0x20006:
      FUN_006f1a50();
      break;
    case 0x2000b:
      FUN_006f2b00();
    }
  }
  else if ((0x50000 < iVar1) && (0x60000 < iVar1)) {
    if (iVar1 < 0x70001) {
      if (iVar1 == 0x70000) {
        FUN_006f91b0();
      }
    }
    else if (iVar1 < 0x80001) {
      if (iVar1 != 0x80000) {
        switch(iVar1) {
        case 0x70001:
          FUN_006f94c0();
          break;
        case 0x70002:
          FUN_006f9680();
        }
      }
    }
    else if (0x90000 < iVar1) {
      if (iVar1 < 0xa0001) {
        if (iVar1 == 0xa0000) {
          FUN_006f7a00();
        }
        else {
          switch(iVar1) {
          case 0x90002:
            FUN_006eb6a0();
            break;
          case 0x90003:
            FUN_006f6fb0();
            break;
          case 0x90004:
            FUN_006f72c0();
          }
        }
      }
      else if ((iVar1 < 0xe0001) && (iVar1 != 0xe0000)) {
        switch(iVar1) {
        case 0xa0001:
          FUN_006f7b20();
          break;
        case 0xa0003:
          FUN_006f7fd0();
          break;
        case 0xa0004:
          FUN_006f8120();
          break;
        case 0xa0005:
          FUN_006f81b0();
          break;
        case 0xa0006:
          FUN_006f84b0();
          break;
        case 0xa0007:
          FUN_006f8580();
        }
      }
    }
  }
  if (*(int *)(param_1 + 0x19a8) != 0) {
    FUN_006eee20();
  }
  FUN_006ef8d0();
  return;
}

// 00707850  FUN_00707850  size=725  [callgraph]
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00707850(int *param_1)

{
  float *pfVar1;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  float10 fVar9;
  int in_stack_fffffff4;
  int in_stack_fffffff8;
  float fVar10;
  undefined *puVar11;
  int in_stack_fffffffc;
  
  iVar3 = param_1[0x186];
  if (iVar3 < 0x20001) {
    if (iVar3 == 0x20000) {
      FUN_006f0550();
      return;
    }
    switch(iVar3) {
    case 0x10000:
      if (param_1[0x187] == 0) {
        FUN_00aa4080(5,0,0x3ecccccd,0x3f800000,0);
        uVar8 = param_1[0x519];
        param_1[0x248] = (int)((float)param_1[0x612] * 60.0);
        if ((uVar8 & 0xffff0000) == 0x30000) {
          param_1[0x248] = (int)((float)param_1[0x613] * 60.0);
        }
        if ((param_1[0x3a7] & 0x4000000U) != 0) {
          param_1[0x248] = (int)((float)param_1[0x613] * 60.0 * 3.0);
        }
        if (((int)uVar8 < 0x10004) || ((0x10006 < (int)uVar8 && (uVar8 != 0x1000a)))) {
          param_1[0x616] = 0;
        }
        else {
          param_1[0x616] = param_1[0x616] + 1;
        }
        param_1[0x187] = param_1[0x187] + 1;
        param_1[0x24f] = 0x42f00000;
      }
      else if (param_1[0x187] != 1) {
        return;
      }
      FUN_00ac80a0();
      return;
    case 0x10001:
      if (param_1[0x187] == 0) {
        FUN_00aa4080(5,0,0x3ecccccd,0x3f800000,0);
        uVar8 = param_1[0x519];
        param_1[0x248] = (int)((float)param_1[0x612] * 60.0);
        param_1[0x249] = 0x41f00000;
        if ((uVar8 & 0xffff0000) == 0x30000) {
          param_1[0x248] = (int)((float)param_1[0x613] * 60.0);
        }
        if ((param_1[0x3a7] & 0x4000000U) != 0) {
          param_1[0x248] = (int)((float)param_1[0x613] * 60.0 * 3.0);
        }
        if (((int)uVar8 < 0x10004) || ((0x10006 < (int)uVar8 && (uVar8 != 0x1000a)))) {
          param_1[0x616] = 0;
        }
        else {
          param_1[0x616] = param_1[0x616] + 1;
        }
        param_1[0x187] = param_1[0x187] + 1;
        param_1[0x24f] = 0x42f00000;
      }
      else if (param_1[0x187] != 1) {
        return;
      }
      FUN_00ac80a0();
      return;
    case 0x10002:
      FUN_006f6260();
      return;
    case 0x10003:
      FUN_006f6410();
      return;
    case 0x10004:
      FUN_006eaf60();
      return;
    case 0x10005:
      FUN_006eb060();
      return;
    case 0x10006:
      FUN_006f6660();
      return;
    case 0x10007:
      FUN_006f6800();
      return;
    case 0x10008:
      FUN_006eb180();
      return;
    case 0x10009:
      FUN_006f2c00();
      return;
    case 0x1000a:
      FUN_006f2eb0();
      return;
    case 0x1000b:
      FUN_006fe440();
      return;
    case 0x1000c:
      FUN_006eb440();
      return;
    case 0x1000d:
      FUN_00701ac0();
      return;
    case 0x1000e:
      FUN_006eb4d0();
      return;
    case 0x1000f:
      FUN_006eb5c0();
      return;
    case 0x10010:
      if (param_1[0x187] == 0) {
        FUN_00aa4080(5,0,0,0x3f800000,0x8000000);
        param_1[0x187] = param_1[0x187] + 1;
      }
      else if (param_1[0x187] != 1) {
        return;
      }
      FUN_00ac80a0();
      if ((param_1[0x3a7] & 0x40000000U) != 0) {
        return;
      }
      if (((param_1[0x2c0] & 0x100U) != 0) && (iVar3 = FUN_00ac4690(), iVar3 != 0)) {
        FUN_006eece0();
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x006f6b96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x34c))();
      return;
    case 0x10011:
      FUN_006fe850();
      return;
    }
  }
  else {
    if (iVar3 < 0x30001) {
      if (iVar3 == 0x30000) {
        FUN_006f3570();
        return;
      }
      switch(iVar3) {
      case 0x20001:
        FUN_006f0640();
        return;
      case 0x20002:
        FUN_006f0790();
        return;
      case 0x20003:
        FUN_006f09e0();
        return;
      case 0x20004:
        FUN_006f1340();
        return;
      case 0x20005:
        FUN_006f1550();
        return;
      case 0x20006:
        FUN_006f1ab0();
        return;
      case 0x20007:
        goto LAB_006fd160;
      case 0x20008:
        FUN_006fd290();
        return;
      case 0x20009:
        FUN_006f2020();
        return;
      case 0x2000a:
        if (param_1[0x187] == 0) {
          FUN_00aa4080(0x79,0,0x3e088889,0x3f800000,0x8000000);
          FUN_00c272a0();
          param_1[0x187] = param_1[0x187] + 1;
          param_1[0x6a8] = 0;
        }
        else if (param_1[0x187] != 1) {
          return;
        }
        FUN_00ac80a0();
        iVar3 = FUN_00a94ce0();
        if (iVar3 != 0) {
          FUN_006eece0();
        }
        return;
      case 0x2000b:
        FUN_00706260();
        return;
      case 0x2000c:
        FUN_006fd790();
        return;
      case 0x2000d:
        if (param_1[0x187] == 0) {
          FUN_00aa4080(0x7f,0,0x3eaaaaab,0x3f800000,0x8038000);
          param_1[0x60f] = param_1[0x60f] + 1;
          if (param_1[0x452] != 0) {
            (**(code **)(param_1[0x42c] + 8))(0);
          }
          FUN_006ea520();
          FUN_006fc710();
          param_1[0x187] = param_1[0x187] + 1;
        }
        else if (param_1[0x187] != 1) {
          return;
        }
        FUN_00ac80a0();
        iVar3 = FUN_00a94ce0();
        if (iVar3 != 0) {
          if ((param_1[0x3a7] & 0x400U) == 0) {
            param_1[0x3a7] = param_1[0x3a7] | 0x400;
            param_1[0x611] = (int)((float)param_1[0x610] * 60.0);
            FUN_006eece0();
          }
          if (param_1[0x426] != 0) {
            (**(code **)(param_1[0x400] + 8))(0);
          }
          param_1[0x60f] = 0;
        }
        return;
      default:
        return;
      }
    }
    if (iVar3 < 0x50001) {
      if (iVar3 == 0x50000) {
switchD_007079ad_caseD_0:
        FUN_006f5820();
        return;
      }
      switch(iVar3) {
      case 0x30001:
        FUN_006f37f0();
        return;
      case 0x30002:
        FUN_006f41d0();
        return;
      case 0x30003:
        FUN_006f4430();
        return;
      case 0x30004:
        FUN_006f3b70();
        return;
      case 0x30005:
        *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
        uVar8 = 0;
        if ((param_1[0x3a7] & 0x100000U) != 0) {
          uVar8 = 0x40;
        }
        switch(param_1[0x187]) {
        case 0:
          FUN_00aa4080(0xa7,0,0x3d088889,0x3f800000,uVar8 | 0x8000000,0xbf800000,0x3f800000);
          param_1[0x22a] = param_1[0x52f];
          (**(code **)(*param_1 + 0x318))();
          iVar3 = param_1[0x1d9];
          if ((iVar3 != 0) && (*(int *)(iVar3 + 0x104) != 1)) {
            *(undefined4 *)(iVar3 + 0x104) = 1;
            *(undefined4 *)(*(int *)(iVar3 + 0xd0) + 4) = 0;
          }
          (**(code **)(*param_1 + 0x1d4))(1);
          param_1[0x187] = param_1[0x187] + 1;
        case 1:
          FUN_00ac80a0(0x3f800000,0x3f800000);
          iVar3 = FUN_00a94ce0(0);
          if (iVar3 != 0) {
            (**(code **)(*param_1 + 0x314))();
            iVar3 = param_1[0x1d9];
            if ((iVar3 != 0) && (*(int *)(iVar3 + 0x104) != 0)) {
              *(undefined4 *)(iVar3 + 0x104) = 0;
            }
            FUN_00aa4080(0xa5,0,0x3d088889,0x3f800000,uVar8,0xbf800000,0x3f800000);
            FUN_00ac80a0(0x3f800000,0x3f800000);
            param_1[0x3a7] = param_1[0x3a7] | 0x10000000;
            param_1[0x187] = param_1[0x187] + 1;
            return;
          }
          break;
        case 2:
          FUN_00ac80a0(0x3f800000,0x3f800000);
          iVar3 = (**(code **)(*param_1 + 800))(0x3d888889);
          if (iVar3 != 0) {
            FUN_00aa4080(0xa6,0,0x3d088889,0x3f800000,uVar8 | 0x8000000,0xbf800000,0x3f800000);
            FUN_00ac80a0(0x3f800000,0x3f800000);
            param_1[0x3a7] = param_1[0x3a7] & 0xefffffff;
            (**(code **)(*param_1 + 0x1d4))(0);
            param_1[0x187] = param_1[0x187] + 1;
            return;
          }
          break;
        case 3:
          FUN_00ac80a0(0x3f800000,0x3f800000);
          iVar3 = FUN_00a94ce0(0);
          if (iVar3 != 0) {
            if (((param_1[0x3a7] & 0x8000000U) != 0) && ((param_1[0x3a7] & 0x80000U) == 0)) {
              FUN_00aa4080(0xaa,0,0x3d088889,0x3f800000,uVar8 | 0x8000000,0xbf800000,0x3f800000);
              FUN_00ac80a0(0x3f800000,0x3f800000);
              param_1[0x187] = param_1[0x187] + 1;
              param_1[0x3a7] = param_1[0x3a7] | 0x8000000;
              return;
            }
            FUN_006eece0(0x30007);
            param_1[0x3a7] = param_1[0x3a7] | 0x8000000;
            return;
          }
          break;
        case 4:
          FUN_00ac80a0(0x3f800000,0x3f800000);
          iVar3 = FUN_006ebf90();
          iVar5 = FUN_00a94ce0(0);
          if ((iVar5 != 0) || (iVar3 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x006f41aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*param_1 + 0x34c))();
            return;
          }
        }
        return;
      case 0x30006:
        FUN_006f47b0();
        return;
      case 0x30007:
        FUN_006f4950();
        return;
      case 0x30008:
        *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
        if (param_1[0x187] == 0) {
          uVar6 = 0xb2;
          if (2.1816616 < ABS((float)param_1[0x526])) {
            uVar6 = 0xb3;
          }
          FUN_00aa4080(uVar6,0,0x3d088889,0x3f800000,0x8000000);
          param_1[0x187] = param_1[0x187] + 1;
        }
        else if (param_1[0x187] != 1) {
          return;
        }
        iVar3 = FUN_00a8c760();
        if (iVar3 != 0) {
          FUN_00a8e520();
        }
        FUN_00a96030();
        FUN_00ac80a0();
        iVar3 = FUN_00a94ce0();
        if (iVar3 != 0) {
          FUN_006eece0();
        }
        return;
      case 0x30009:
      case 0x3000a:
        FUN_006f4c00();
        return;
      case 0x3000b:
        iVar3 = param_1[0x187];
        *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
        if (iVar3 == 0) {
          FUN_00aa4080(0xaf,0,0x3e888889,0x3f800000,0,0xbf800000);
          param_1[0x187] = param_1[0x187] + 1;
          param_1[0x248] = (int)((float)param_1[0x658] * 60.0);
        }
        else {
          bVar2 = true;
          if (iVar3 != 1) {
            if (iVar3 != 2) {
              return;
            }
            FUN_00ac80a0(0x3f800000);
            if (((param_1[0x128] != 0) || ((*(byte *)(param_1 + 0x2c0) & 2) == 0)) ||
               (iVar3 = FUN_00a8c760(), iVar3 == 0)) {
              bVar2 = false;
            }
            iVar3 = FUN_00a94ce0();
            if ((iVar3 == 0) && (!bVar2)) {
              return;
            }
                    /* WARNING: Could not recover jumptable at 0x006f4fd2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*param_1 + 0x34c))();
            return;
          }
        }
        FUN_00ac80a0(0x3f800000);
        fVar10 = (float)param_1[0x248];
        param_1[0x248] = (int)(fVar10 - (float)param_1[0x244]);
        if (fVar10 - (float)param_1[0x244] <= 0.0) {
          FUN_00aa4080(0xb0,0,0x3e088889,0x3f800000,0x8000000,0xbf800000);
          param_1[0x187] = param_1[0x187] + 1;
        }
        *(undefined2 *)(param_1 + 0x209) = 4;
        param_1[0x20a] = 0x78;
        return;
      case 0x3000c:
        iVar3 = param_1[0x187];
        *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 8;
        if (iVar3 == 0) {
          uVar6 = 0;
          if ((param_1[0x3a7] & 0x100000U) != 0) {
            uVar6 = 0x40;
          }
          FUN_00aa4080(0xb1,0,0x3e088889,0x3f800000,uVar6,0xbf800000);
          param_1[0x187] = param_1[0x187] + 1;
          param_1[0x248] = (int)((float)param_1[0x658] * 60.0);
        }
        else if (iVar3 != 1) {
          if (iVar3 != 2) {
            return;
          }
          FUN_00ac80a0(0x3f800000);
          if (((param_1[0x128] == 0) && ((*(byte *)(param_1 + 0x2c0) & 2) != 0)) &&
             (iVar3 = FUN_00a8c760(), iVar3 != 0)) {
            bVar2 = true;
          }
          else {
            bVar2 = false;
          }
          iVar3 = FUN_00a94ce0();
          if ((iVar3 == 0) && (!bVar2)) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x006f5132. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0x34c))();
          return;
        }
        uVar8 = 0;
        if ((param_1[0x3a7] & 0x100000U) != 0) {
          uVar8 = 0x40;
        }
        FUN_00ac80a0(0x3f800000);
        fVar10 = (float)param_1[0x248];
        param_1[0x248] = (int)(fVar10 - (float)param_1[0x244]);
        if (fVar10 - (float)param_1[0x244] <= 0.0) {
          if ((param_1[0x3a7] & 0x80000U) == 0) {
            uVar8 = 0x8000000;
            uVar6 = 0xaa;
          }
          else {
            uVar8 = uVar8 | 0x8000000;
            uVar6 = 0x140;
          }
          FUN_00aa4080(uVar6,0,0x3e4ccccd,0x3f800000,uVar8,0xbf800000);
          FUN_00ac80a0(0x3f800000);
          param_1[0x187] = param_1[0x187] + 1;
        }
        return;
      case 0x3000d:
        FUN_006f5250();
        return;
      case 0x3000e:
        FUN_006f53c0();
        return;
      }
    }
    else if (iVar3 < 0x60001) {
      if (iVar3 == 0x60000) {
        FUN_007010f0();
        return;
      }
      switch(iVar3) {
      case 0x50001:
      case 0x50002:
        goto switchD_007079ad_caseD_0;
      case 0x50003:
        if (param_1[0x187] == 0) {
          uVar6 = 0x1b;
          if (param_1[0x51f] == 2) {
            if (param_1[0x4b4] == 0) {
              uVar6 = 0x1d;
            }
          }
          else if ((param_1[0x51f] == 3) && (param_1[0x4c0] == 0)) {
            uVar6 = 0x1c;
          }
          param_1[0x520] = 0;
          FUN_00aa4080(uVar6,0,0x3e088889,0x3f800000,0x8038000);
          param_1[0x187] = param_1[0x187] + 1;
        }
        else if (param_1[0x187] != 1) {
          return;
        }
        FUN_00ac80a0();
        iVar3 = FUN_00a8c760();
        if (iVar3 != 0) {
          FUN_006e9bd0(param_1[0x2a1] + 0x40);
        }
        iVar3 = FUN_00a8c760();
        if (iVar3 != 0) {
          (**(code **)(*param_1 + 0x220))();
        }
        iVar3 = FUN_00a94ce0();
        if ((iVar3 != 0) || (iVar3 = FUN_00a8c760(), iVar3 != 0)) {
          FUN_00a8ec30();
          fVar9 = (float10)FUN_00ddba30();
          if ((float10)0.61086524 <= ABS(fVar9)) {
            FUN_006eece0();
            return;
          }
          uVar8 = FUN_00dde2d0();
          if (((uVar8 & 1) == 0) || (iVar3 = FUN_007008d0(), iVar3 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x007010ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*param_1 + 0x34c))();
            return;
          }
        }
        return;
      case 0x50004:
        FUN_006f5950();
        return;
      }
    }
    else if (iVar3 < 0x70001) {
      if (iVar3 == 0x70000) {
        FUN_006f93b0();
        return;
      }
      switch(iVar3) {
      case 0x60001:
        if (param_1[0x187] == 0) {
          FUN_00aa4080(0xa9,0,0x3d088889,0x3f800000,0);
          param_1[0x248] = 0x41f00000;
          FUN_007007c0();
          param_1[0x187] = param_1[0x187] + 1;
        }
        else if (param_1[0x187] != 1) {
          return;
        }
        FUN_00ac80a0();
        fVar10 = (float)param_1[0x248];
        param_1[0x248] = (int)(fVar10 - (float)param_1[0x244]);
        if (fVar10 - (float)param_1[0x244] <= 0.0) {
          param_1[0x1af] = 1;
          if (param_1[0x301] != 0) {
            FUN_006eece0();
            return;
          }
          if (param_1[0x294] != 0) {
            FUN_00ac8e10();
            if ((*(byte *)((int)param_1 + 0xe9e) & 1) != 0) {
              FUN_00a8c9b0(0,2);
              param_1[0x3a7] = param_1[0x3a7] & 0xfffeffff;
            }
            if ((param_1[0x3a7] & 0x8000U) == 0) {
              FUN_00e02240();
              param_1[0x3a7] = param_1[0x3a7] | 0x8000;
              FUN_00a85670();
            }
            (**(code **)(*param_1 + 0x20))();
            if (param_1[0x6a4] != 0) {
              param_1[0x6a4] = 0;
              FUN_00a8c9b0(0,0x197);
            }
            iVar3 = FUN_00a81330();
            if ((iVar3 != 0) && (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) {
              (**(code **)(*piVar4 + 0x20))();
            }
            param_1[0x1af] = 1;
            FUN_006eece0();
            if (param_1[0x1d9] != 0) {
              FUN_008e3c10();
            }
            iVar3 = FUN_00e5e0c0("em0220_se_dmg_explosion",param_1);
            param_1[0x6a7] = iVar3;
            FUN_00940450();
            (**(code **)(*param_1 + 0x364))();
          }
        }
        return;
      case 0x60002:
        if (param_1[0x187] == 0) {
          param_1[0x187] = 1;
          param_1[0x248] = 0x40000000;
          param_1[0x249] = 0x42700000;
        }
        else if (param_1[0x187] == 1) {
          if ((param_1[0x1af] == 0) &&
             (fVar10 = (float)param_1[0x248] - (float)param_1[0x244] * 0.016666668,
             param_1[0x248] = (int)fVar10, fVar10 < 0.0)) {
            param_1[0x1af] = 1;
          }
          fVar10 = (float)param_1[0x249] - (float)param_1[0x244];
          param_1[0x249] = (int)fVar10;
          if ((fVar10 < 0.0 != (fVar10 == 0.0)) && (iVar3 = thunk_FUN_00e58ed0(), iVar3 == 0)) {
            FUN_00a805f0();
            return;
          }
        }
        return;
      case 0x60003:
        param_1[0x139] = 1;
        if (param_1[0x187] == 0) {
          FUN_00ac8e10(1);
          FUN_00c4d1a0(param_1[0x13c],0);
          UNRECOVERED_JUMPTABLE = *(code **)(param_1[0x3d4] + 8);
          param_1[0xd9] = param_1[0xd9] & 0xffefffff;
          param_1[0x1af] = 1;
          param_1[0x362] = 1;
          (*UNRECOVERED_JUMPTABLE)(0x3f800000,0,0);
          (**(code **)(*param_1 + 0x344))(7,3,1);
          param_1[0x187] = param_1[0x187] + 1;
        }
        else if (param_1[0x187] != 1) {
          return;
        }
        FUN_00ac80a0(0x3f800000,0x3f800000);
        fVar9 = (float10)FUN_00ac8f80();
        fVar9 = fVar9 - (float10)0.011111111;
        fVar10 = (float)fVar9;
        if (fVar9 < (float10)0) {
          fVar10 = (float)(float10)0;
          (**(code **)(*param_1 + 0x20))();
          iVar3 = FUN_00a81330();
          if (iVar3 != 0) {
            FUN_00a805f0();
          }
          (**(code **)(*param_1 + 0x364))(0xffffffff);
          FUN_009fdde0();
          fVar9 = (float10)fVar10;
        }
        FUN_00ac8fd0((float)fVar9);
        iVar3 = FUN_00a81330();
        if ((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
          iVar7 = 0;
          iVar5 = 0;
          if (0 < *(short *)(iVar3 + 0x324)) {
            do {
              *(float *)(*(int *)(iVar3 + 800) + 0x1c + iVar7) = fVar10;
              iVar5 = iVar5 + 1;
              iVar7 = iVar7 + 0x70;
            } while (iVar5 < *(short *)(iVar3 + 0x324));
          }
        }
        iVar3 = FUN_00a81330();
        if ((iVar3 != 0) && (iVar3 = FUN_00a7c8a0(), iVar3 != 0)) {
          iVar7 = 0;
          iVar5 = 0;
          if (0 < *(short *)(iVar3 + 0x324)) {
            do {
              *(float *)(*(int *)(iVar3 + 800) + 0x1c + iVar7) = fVar10;
              iVar5 = iVar5 + 1;
              iVar7 = iVar7 + 0x70;
            } while (iVar5 < *(short *)(iVar3 + 0x324));
          }
        }
        return;
      case 0x60004:
      case 0x60005:
        iVar3 = param_1[0x187];
        if (iVar3 == 0) {
          fVar9 = (float10)FUN_00dde300();
          UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x314);
          param_1[0x139] = 0;
          param_1[0x248] = (int)(float)(fVar9 * (float10)5.0 * (float10)60.0 + (float10)1200.0);
          (*UNRECOVERED_JUMPTABLE)();
          iVar3 = param_1[0x1d9];
          if ((iVar3 != 0) && (*(int *)(iVar3 + 0x104) != 0)) {
            *(undefined4 *)(iVar3 + 0x104) = 0;
          }
          (**(code **)(*param_1 + 0x1d4))();
          if (param_1[0x186] == 0x60005) {
            FUN_00aa4080(0xac,0,0x3e99999a,0x3f800000,0);
            FUN_00ac80a0();
            param_1[0x187] = 2;
            return;
          }
          FUN_00aa4080(0xab,0,0x3e088889,0x3f800000,0x8000000);
          param_1[0x187] = param_1[0x187] + 1;
        }
        else if (iVar3 != 1) {
          if (iVar3 != 2) {
            return;
          }
          *(undefined2 *)(param_1 + 0x209) = 3;
          param_1[0x20a] = 0x78;
          FUN_00ac80a0();
          FUN_006f3150();
          return;
        }
        FUN_00ac80a0();
        iVar3 = FUN_00a94ce0();
        if (iVar3 != 0) {
          FUN_00aa4080(0xac,0,0x3d088889,0x3f800000,0);
          param_1[0x187] = param_1[0x187] + 1;
        }
        return;
      }
    }
    else {
      if (iVar3 < 0x80001) {
        if (iVar3 == 0x80000) {
          FUN_006f9940();
          return;
        }
        switch(iVar3) {
        case 0x70001:
          if (param_1[0x187] == 0) {
            uVar6 = 0;
            if ((param_1[0x3a7] & 0x100000U) != 0) {
              uVar6 = 0x40;
            }
            FUN_00aa4080(0x12e,0,0x3e888889,0x3f800000,uVar6);
            param_1[0x187] = param_1[0x187] + 1;
          }
          else if (param_1[0x187] != 1) {
            return;
          }
          FUN_006e9bd0(param_1[0x2a1] + 0x40);
          FUN_00ac80a0();
          return;
        case 0x70002:
          goto LAB_006f96d0;
        case 0x70003:
          if (param_1[0x187] == 0) {
            uVar6 = 0;
            if ((param_1[0x3a7] & 0x100000U) != 0) {
              uVar6 = 0x40;
            }
            FUN_00aa4080(0x132,0,0x3e088889,0x3f800000,uVar6);
            param_1[0x187] = param_1[0x187] + 1;
          }
          else if (param_1[0x187] != 1) {
            return;
          }
          FUN_00ac80a0();
          iVar3 = FUN_00a94ce0();
          if (iVar3 == 0) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x006f98a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0x34c))();
          return;
        case 0x70004:
          FUN_00707150();
          return;
        case 0x70005:
          if (param_1[0x187] == 0) {
            uVar8 = 0x8000000;
            fVar10 = (float)param_1[0x2a4];
            if (!NAN(fVar10) && 64.0 < fVar10 != (fVar10 == 64.0)) {
              uVar8 = 0x8000080;
            }
            if ((param_1[0x3a7] & 0x100000U) != 0) {
              uVar8 = uVar8 | 0x40;
            }
            FUN_00aa4080(0x139,0,0x3e088889,0x3f800000,uVar8);
            param_1[0x187] = param_1[0x187] + 1;
            param_1[0x250] = 0;
          }
          else if (param_1[0x187] != 1) {
            return;
          }
          iVar3 = FUN_00a8c760();
          if (iVar3 != 0) {
            FUN_006e9bd0(param_1[0x2a1] + 0x40);
          }
          iVar3 = FUN_00a8c760();
          if (iVar3 != 0) {
            param_1[0x250] = param_1[0x250] + 1;
            FUN_006fc110();
          }
          FUN_00ac80a0();
          iVar3 = FUN_00a94ce0();
          if (iVar3 == 0) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x006ff86b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0x34c))();
          return;
        case 0x70006:
          if (param_1[0x187] == 0) {
            uVar6 = 0x8000000;
            if ((param_1[0x3a7] & 0x100000U) != 0) {
              uVar6 = 0x8000040;
            }
            FUN_00aa4080(0x140,0,0x3e088889,0x3f800000,uVar6);
            param_1[0x187] = param_1[0x187] + 1;
          }
          else if (param_1[0x187] != 1) {
            return;
          }
          FUN_00ac80a0();
          iVar3 = FUN_00a94ce0();
          if (iVar3 == 0) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x006f993b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0x34c))();
          return;
        default:
          goto switchD_0070786d_default;
        }
      }
      if (iVar3 < 0x90001) {
        if (iVar3 == 0x90000) {
          FUN_006f6ba0();
          return;
        }
        switch(iVar3) {
        case 0x80001:
          if (param_1[0x187] == 0) {
            uVar6 = 0x8000000;
            if ((param_1[0x3a7] & 0x100000U) != 0) {
              uVar6 = 0x8000040;
            }
            FUN_00aa4080(param_1[0x664],0,0x3d888889,0x3f800000,uVar6);
            iVar3 = param_1[0x665];
            if (((iVar3 != 0x1e) && (iVar3 != 0x1d)) && (iVar3 != 0x17)) {
              param_1[0x3a7] = param_1[0x3a7] | 0x80000;
              param_1[0x36a] = -1;
              param_1[0x36c] = -1;
            }
            param_1[0x187] = param_1[0x187] + 1;
          }
          else if (param_1[0x187] != 1) {
            return;
          }
          FUN_00ac80a0();
          iVar3 = FUN_00a94ce0();
          if (iVar3 == 0) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x006f9a8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0x34c))();
          return;
        case 0x80002:
          if (param_1[0x187] == 0) {
            uVar6 = 0x8038000;
            if ((param_1[0x3a7] & 0x100000U) != 0) {
              uVar6 = 0x8038040;
            }
            FUN_00aa4120(param_1[0x664],0,0x3d888889,0x3f800000,uVar6,0xbf800000,0x3f800000);
            param_1[0x139] = 1;
            FUN_00a8ee20(0);
            param_1[0x187] = param_1[0x187] + 1;
            param_1[0x248] = 0x41700000;
            param_1[0x249] = 0x43960000;
            if (param_1[0x666] == 1) {
              param_1[0x666] = 0;
              fVar9 = (float10)FUN_00dde300(0,0x3f800000);
              FUN_00a92f90();
              iVar3 = FUN_00e26e90();
              if (iVar3 != 0) {
                Animation::Motion::Unit::setCurrentTime
                          (0,(float)(fVar9 * (float10)10.0 * (float10)0.016666668));
              }
            }
            FUN_009413c0(param_1[0x20f]);
            param_1[0x188] = 0;
          }
          else if (param_1[0x187] != 1) {
            return;
          }
          fVar10 = (float)param_1[0x248];
          param_1[0x248] = (int)(fVar10 - (float)param_1[0x244]);
          if (fVar10 - (float)param_1[0x244] <= 0.0) {
            FUN_007007c0();
          }
          FUN_00ac80a0(0x3f800000,0x3f800000);
          iVar3 = FUN_00a94ce0(0);
          if (iVar3 != 0) {
            if (param_1[0x301] != 0) {
              FUN_006eece0(0x60003);
              return;
            }
            if (param_1[0x294] != 0) {
              FUN_00ac8e10(1);
              if ((*(byte *)((int)param_1 + 0xe9e) & 1) != 0) {
                FUN_00a8c9b0(0,2,0x3f800000,0);
                param_1[0x3a7] = param_1[0x3a7] & 0xfffeffff;
              }
              if ((param_1[0x3a7] & 0x8000U) == 0) {
                FUN_00e02240(param_1[0x13c],3);
                param_1[0x3a7] = param_1[0x3a7] | 0x8000;
                FUN_00a85670(param_1,1);
              }
              (**(code **)(*param_1 + 0x20))();
              if (param_1[0x6a4] != 0) {
                param_1[0x6a4] = 0;
                FUN_00a8c9b0(0,0x197,0,0);
              }
              iVar3 = FUN_00a81330();
              if ((iVar3 != 0) && (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) {
                (**(code **)(*piVar4 + 0x20))();
              }
              param_1[0x1af] = 1;
              FUN_006eece0(0x60002);
              if (param_1[0x1d9] != 0) {
                FUN_008e3c10();
              }
              iVar3 = FUN_00e5e0c0("em0220_se_dmg_explosion",param_1,0xffffffff,0);
              param_1[0x6a7] = iVar3;
              FUN_00940450(param_1[0x20f]);
              (**(code **)(*param_1 + 0x364))(0xffffffff);
            }
          }
          return;
        case 0x80003:
          FUN_006f9aa0();
          return;
        case 0x80004:
          if (param_1[0x187] == 0) {
            FUN_00aa4080(0xa7,0,0x3d888889,0x3f800000,0x8000000);
            param_1[0x187] = param_1[0x187] + 1;
            param_1[0x248] = 0x41700000;
            param_1[0x139] = 1;
          }
          else if (param_1[0x187] != 1) {
            return;
          }
          fVar10 = (float)param_1[0x248];
          param_1[0x248] = (int)(fVar10 - (float)param_1[0x244]);
          if (fVar10 - (float)param_1[0x244] <= 0.0) {
            FUN_007007c0();
          }
          FUN_00ac80a0();
          iVar3 = FUN_00a94ce0();
          if (iVar3 != 0) {
            if (param_1[0x301] != 0) {
              FUN_006eece0();
              return;
            }
            if (param_1[0x294] != 0) {
              FUN_00ac8e10();
              if ((*(byte *)((int)param_1 + 0xe9e) & 1) != 0) {
                FUN_00a8c9b0(0,2);
                param_1[0x3a7] = param_1[0x3a7] & 0xfffeffff;
              }
              if ((param_1[0x3a7] & 0x8000U) == 0) {
                FUN_00e02240();
                param_1[0x3a7] = param_1[0x3a7] | 0x8000;
                FUN_00a85670();
              }
              (**(code **)(*param_1 + 0x20))();
              if (param_1[0x6a4] != 0) {
                param_1[0x6a4] = 0;
                FUN_00a8c9b0(0,0x197);
              }
              iVar3 = FUN_00a81330();
              if ((iVar3 != 0) && (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) {
                (**(code **)(*piVar4 + 0x20))();
              }
              param_1[0x1af] = 1;
              FUN_006eece0();
              if (param_1[0x1d9] != 0) {
                FUN_008e3c10();
              }
              iVar3 = FUN_00e5e0c0("em0220_se_dmg_explosion",param_1);
              param_1[0x6a7] = iVar3;
              FUN_00940450();
              (**(code **)(*param_1 + 0x364))();
            }
          }
          return;
        case 0x80005:
          goto LAB_006ff870;
        case 0x80006:
          FUN_006ebac0();
          return;
        case 0x80007:
          FUN_006f9d00();
          return;
        case 0x80008:
          if (param_1[0x187] == 0) {
            param_1[0x139] = 1;
            FUN_00a8ee20(0);
            param_1[0x187] = param_1[0x187] + 1;
            param_1[0x248] = 0x41700000;
            param_1[0x249] = 0x43960000;
            if (param_1[0x666] == 1) {
              param_1[0x666] = 0;
              fVar9 = (float10)FUN_00dde300(0,0x3f800000);
              FUN_00a92f90();
              iVar3 = FUN_00e26e90();
              if (iVar3 != 0) {
                Animation::Motion::Unit::setCurrentTime
                          (0,(float)(fVar9 * (float10)10.0 * (float10)0.016666668));
              }
            }
            FUN_009413c0(param_1[0x20f]);
            param_1[0x188] = 0;
          }
          else if (param_1[0x187] != 1) {
            return;
          }
          fVar10 = (float)param_1[0x248];
          param_1[0x248] = (int)(fVar10 - (float)param_1[0x244]);
          if (fVar10 - (float)param_1[0x244] <= 0.0) {
            FUN_007007c0();
          }
          FUN_00ac80a0(0x3f800000,0x3f800000);
          iVar3 = FUN_00a94ce0(0);
          if (iVar3 != 0) {
            if (param_1[0x301] != 0) {
              FUN_006eece0(0x60003);
              return;
            }
            if (param_1[0x294] != 0) {
              FUN_00ac8e10(1);
              if ((*(byte *)((int)param_1 + 0xe9e) & 1) != 0) {
                FUN_00a8c9b0(0,2,0x3f800000,0);
                param_1[0x3a7] = param_1[0x3a7] & 0xfffeffff;
              }
              if ((param_1[0x3a7] & 0x8000U) == 0) {
                FUN_00e02240(param_1[0x13c],3);
                param_1[0x3a7] = param_1[0x3a7] | 0x8000;
                FUN_00a85670(param_1,1);
              }
              (**(code **)(*param_1 + 0x20))();
              if (param_1[0x6a4] != 0) {
                param_1[0x6a4] = 0;
                FUN_00a8c9b0(0,0x197,0,0);
              }
              iVar3 = FUN_00a81330();
              if ((iVar3 != 0) && (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) {
                (**(code **)(*piVar4 + 0x20))();
              }
              param_1[0x1af] = 1;
              FUN_006eece0(0x60002);
              if (param_1[0x1d9] != 0) {
                FUN_008e3c10();
              }
              iVar3 = FUN_00e5e0c0("em0220_se_dmg_explosion",param_1,0xffffffff,0);
              param_1[0x6a7] = iVar3;
              FUN_00940450(param_1[0x20f]);
              (**(code **)(*param_1 + 0x364))(0xffffffff);
            }
          }
          return;
        default:
          goto switchD_0070786d_default;
        }
      }
      if (iVar3 < 0xa0001) {
        if (iVar3 == 0xa0000) {
          FUN_00702f10();
          return;
        }
        switch(iVar3) {
        case 0x90001:
          FUN_006f6ca0();
          return;
        case 0x90002:
          FUN_006f6dd0();
          return;
        case 0x90003:
          FUN_006f7060();
          return;
        case 0x90004:
          FUN_00701f00();
          return;
        }
      }
      else if (iVar3 < 0xe0001) {
        if (iVar3 == 0xe0000) {
          FUN_006f7350();
          return;
        }
        switch(iVar3) {
        case 0xa0001:
          FUN_006f7be0();
          return;
        case 0xa0002:
          (**(code **)(*param_1 + 0x220))();
          uVar6 = FUN_00a8cac0();
          switch(uVar6) {
          case 0:
            FUN_00aa4080(5,0,0x3e088889,0x3f800000,0,0xbf800000);
            UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x110);
            param_1[0x34a] = 0;
            (*UNRECOVERED_JUMPTABLE)();
            param_1[0x6a3] = 0x42700000;
            (**(code **)(*param_1 + 0x358))(0x208,0);
            param_1[0x248] = 0x42c90000;
            param_1[0x187] = param_1[0x187] + 1;
            param_1[0x3a6] = 0;
          case 1:
            FUN_00ac80a0(0x3f800000);
            param_1[0x6a3] = 0x42700000;
            fVar10 = (float)param_1[0x248];
            param_1[0x248] = (int)(fVar10 - (float)param_1[0x244]);
            if (fVar10 - (float)param_1[0x244] <= 0.0) {
              iVar3 = FUN_00a82d50();
              if (iVar3 != 1) {
                UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x110);
                param_1[0x6a3] = 0x42700000;
                (*UNRECOVERED_JUMPTABLE)();
                (**(code **)(*param_1 + 0x358))(0x208,0);
                (**(code **)(*param_1 + 0x34c))();
                param_1[0x34a] = 1;
                return;
              }
              (**(code **)(*param_1 + 0x7c))(param_1 + 0x6b4);
              param_1[0x248] = 0x42c90000;
              (**(code **)(*param_1 + 0x20))();
              if (param_1[0x1d9] != 0) {
                FUN_008e3c10();
              }
              iVar3 = FUN_00a81330();
              if ((iVar3 != 0) && (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) {
                (**(code **)(*piVar4 + 0x20))();
              }
              (**(code **)(*param_1 + 0x110))(0);
              param_1[0x187] = param_1[0x187] + 1;
              return;
            }
            break;
          case 2:
            FUN_00ac80a0(0x3f800000);
            param_1[0x6a3] = 0x42700000;
            fVar10 = (float)param_1[0x248];
            param_1[0x248] = (int)(fVar10 - (float)param_1[0x244]);
            if (fVar10 - (float)param_1[0x244] <= 0.0) {
              (**(code **)(*param_1 + 0x1c))();
              iVar3 = FUN_00a81330();
              if ((iVar3 != 0) && (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) {
                (**(code **)(*piVar4 + 0x1c))();
              }
              if (param_1[0x1d9] != 0) {
                FUN_008e6d00();
              }
              (**(code **)(*param_1 + 0x110))();
              (**(code **)(*param_1 + 0x358))(0x208,0);
              param_1[0x187] = param_1[0x187] + 1;
              return;
            }
            break;
          case 3:
            FUN_00ac80a0(0x3f800000);
            if ((param_1[0x3a7] & 0x40000000U) == 0) {
              UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x34c);
              param_1[0x34a] = 1;
                    /* WARNING: Could not recover jumptable at 0x006f7fb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*UNRECOVERED_JUMPTABLE)();
              return;
            }
          }
          return;
        case 0xa0003:
          FUN_006f80c0();
          return;
        case 0xa0004:
          FUN_00703310();
          return;
        case 0xa0005:
          FUN_006f8280();
          return;
        case 0xa0006:
          FUN_006eb6f0();
          return;
        case 0xa0007:
          uVar6 = FUN_00a8cac0();
          switch(uVar6) {
          case 0:
            FUN_00aa4120(5,0,0x3e088889,0x3f800000,0,0xbf800000,0x3f800000);
            FUN_00ac80a0(0x3f800000,0x3f800000);
            FUN_006efa60(param_1 + 0x6c9);
            param_1[0x187] = param_1[0x187] + 1;
            return;
          case 1:
            FUN_00ac80a0(0x3f800000,0x3f800000);
            piVar4 = param_1 + 0x6c9;
            iVar3 = FUN_00907640(piVar4,0,param_1 + 600);
            if (iVar3 != 0) {
              FUN_006efb50(piVar4);
              param_1[0x187] = param_1[0x187] + 1;
              return;
            }
            FUN_00a8d790(&stack0xfffffff4);
            param_1[0x6c4] = in_stack_fffffff4;
            param_1[0x6c5] = in_stack_fffffff8;
            param_1[0x6c6] = in_stack_fffffffc;
            param_1[0x6c7] = 0x3f800000;
            RayCastManager::getWork(piVar4);
            break;
          case 2:
            FUN_00ac80a0(0x3f800000,0x3f800000);
            iVar3 = FUN_00907640(param_1 + 0x6c9,0,param_1 + 600);
            RayCastManager::getWork(param_1 + 0x6c9);
            if (iVar3 != 0) {
              param_1[0x187] = param_1[0x187] + 1;
              param_1[0x248] = 0x43340000;
              return;
            }
            break;
          case 3:
            FUN_00ac80a0(0x3f800000,0x3f800000);
            fVar10 = (float)param_1[0x248];
            param_1[0x248] = (int)(fVar10 - (float)param_1[0x244]);
            if (fVar10 - (float)param_1[0x244] <= 0.0) {
              FUN_006eece0(0xa0002);
            }
          default:
            return;
          }
          FUN_006eece0(0xa0001);
          return;
        }
      }
      else {
        if (iVar3 == 0xe0001) {
          FUN_007023d0();
          return;
        }
        if (iVar3 == 0xf0000) {
          FUN_00700910();
          return;
        }
        if (iVar3 == 0xf0001) {
          FUN_00700c40();
          return;
        }
      }
    }
  }
switchD_0070786d_default:
  return;
LAB_006fd160:
  *(byte *)(param_1 + 0x36d) = *(byte *)(param_1 + 0x36d) | 2;
  if (param_1[0x187] == 0) {
    uVar6 = 0x8000000;
    fVar10 = (float)param_1[0x2a4];
    if (!NAN(fVar10) && 64.0 < fVar10 != (fVar10 == 64.0)) {
      uVar6 = 0x8000080;
    }
    FUN_00aa4080(0x75,0,0x3e088889,0x3f800000,uVar6);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x250] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  iVar3 = FUN_00a8c760();
  if (iVar3 != 0) {
    FUN_006e9bd0(param_1[0x2a1] + 0x40);
  }
  iVar3 = FUN_00a8c760();
  if (iVar3 != 0) {
    param_1[0x250] = param_1[0x250] + 1;
    FUN_006fc110();
  }
  FUN_00ac80a0(0x3f800000);
  if (((param_1[0x128] == 0) && ((*(byte *)(param_1 + 0x2c0) & 2) != 0)) &&
     (iVar3 = FUN_00a8c760(), iVar3 != 0)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  iVar3 = FUN_00a94ce0();
  if ((iVar3 == 0) && (!bVar2)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006fd28a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
LAB_006ff870:
  if (param_1[0x187] == 0) {
    FUN_00aa4080(0xd9,0,0,0x3f800000,0x8038000,0xbf800000,0x3f800000);
    FUN_00aa4080(0xdb,1,0,0x3f800000,0x8000010,0xbf800000,0x3f800000);
    iVar3 = param_1[0x248];
    FUN_00a92f90();
    iVar5 = FUN_00e26e90();
    if (iVar5 != 0) {
      Animation::Motion::Unit::setCurrentTime(0,iVar3);
    }
    if (param_1[0x1d9] != 0) {
      FUN_008e3c10();
    }
    param_1[0x3a7] = param_1[0x3a7] | 0x40000;
    (**(code **)(*param_1 + 0x344))(7,1,1);
    FUN_00c27f40(2,0x45e10000);
    param_1[0x187] = param_1[0x187] + 1;
    param_1[0x248] = 0x3f800000;
    param_1[0x188] = 0;
  }
  else if (param_1[0x187] != 1) {
    return;
  }
  if ((param_1[0x188] == 0) && (iVar3 = FUN_00ac82f0(), iVar3 == 0)) {
    param_1[0x1af] = 1;
    param_1[0x188] = 1;
    FUN_00a94bc0(1,0x3e088889);
    if (((char)param_1[0x3a9] < '\0') || ((param_1[0x3a9] & 0x200U) != 0)) {
      uVar6 = 0xd6;
    }
    else {
      uVar6 = 0xda;
    }
    FUN_00aa4080(uVar6,0,0,0x3f800000,0x8000000,0xbf800000,0x3f800000);
    if (param_1[0x294] == 0) {
      FUN_00a92f90();
      FUN_00e36b50(0,2,0);
    }
    FUN_00a96030(0,0x3f800000);
  }
  if (((param_1[0x188] == 1) && (iVar3 = FUN_00a8c760(10), iVar3 != 0)) && (param_1[0x1d9] != 0)) {
    FUN_008e6d00();
  }
  FUN_00ac80a0(0x3f800000,0x3f800000);
  iVar3 = FUN_00a94ce0(0);
  if (iVar3 == 0) {
    return;
  }
  if ((param_1[0x128] == 0) && ((*(byte *)(param_1 + 0x2c0) & 2) != 0)) {
    param_1[0x187] = 2;
    param_1[0x139] = 1;
    FUN_00a8ee20(0);
    param_1[0x1af] = 1;
    return;
  }
  if (param_1[0x301] == 0) {
    if (param_1[0x294] == 0) goto LAB_006ffc1e;
    FUN_00ac8e10(1);
    if ((*(byte *)((int)param_1 + 0xe9e) & 1) != 0) {
      FUN_00a8c9b0(0,2,0x3f800000,0);
      param_1[0x3a7] = param_1[0x3a7] & 0xfffeffff;
    }
    if ((param_1[0x3a7] & 0x8000U) == 0) {
      FUN_00e02240(param_1[0x13c],3);
      param_1[0x3a7] = param_1[0x3a7] | 0x8000;
      FUN_00a85670(param_1,1);
    }
    (**(code **)(*param_1 + 0x20))();
    if (param_1[0x6a4] != 0) {
      param_1[0x6a4] = 0;
      FUN_00a8c9b0(0,0x197,0,0);
    }
    iVar3 = FUN_00a81330();
    if ((iVar3 != 0) && (piVar4 = (int *)FUN_00a7c8a0(), piVar4 != (int *)0x0)) {
      (**(code **)(*piVar4 + 0x20))();
    }
    param_1[0x1af] = 1;
    FUN_006eece0(0x60002);
    if (param_1[0x1d9] != 0) {
      FUN_008e3c10();
    }
    iVar3 = FUN_00e5e0c0("em0220_se_dmg_explosion",param_1,0xffffffff,0);
    param_1[0x6a7] = iVar3;
    FUN_00940450(param_1[0x20f]);
    (**(code **)(*param_1 + 0x364))(0xffffffff);
  }
  else {
    FUN_006eece0(0x60003);
  }
  if (param_1[0x294] != 0) {
    return;
  }
LAB_006ffc1e:
  FUN_00a805f0();
  param_1[0x187] = param_1[0x187] + 1;
  return;
LAB_006f96d0:
  if (param_1[0x187] != 0) {
    if (param_1[0x187] != 1) {
      return;
    }
    goto LAB_006f9797;
  }
  uVar8 = 0;
  puVar11 = &DAT_0164762c;
  if ((param_1[0x3a7] & 0x100000U) != 0) {
    uVar8 = 0x40;
    puVar11 = &DAT_0164761c;
  }
  pfVar1 = (float *)(param_1 + 0x248);
  iVar3 = FUN_006e9e90(param_1[0x2a1] + 0x40,pfVar1);
  if (iVar3 == 2) {
    fVar10 = *pfVar1 + 1.5707964;
LAB_006f9745:
    fVar9 = (float10)FUN_00ddba30(fVar10);
    *pfVar1 = (float)fVar9;
  }
  else if (iVar3 == 3) {
    fVar10 = *pfVar1 - 1.5707964;
    goto LAB_006f9745;
  }
  FUN_00aa4080(*(undefined4 *)(puVar11 + iVar3 * 4),0,0x3e088889,0x3f800000,uVar8 | 0x8000000,
               0xbf800000,0x3f800000);
  param_1[0x187] = param_1[0x187] + 1;
LAB_006f9797:
  iVar3 = FUN_00a8c760();
  if (iVar3 != 0) {
    fVar9 = (float10)FUN_00fdc1f0();
    fVar9 = ((float10)1 - fVar9) * (float10)(float)param_1[0x248];
    param_1[0x25] = (int)(float)((float10)(float)param_1[0x25] + fVar9);
    param_1[0x248] = (int)(float)((float10)(float)param_1[0x248] - fVar9);
  }
  FUN_00ac80a0(0x3f800000);
  iVar3 = FUN_00a94ce0();
  if ((iVar3 == 0) && (iVar3 = FUN_00a8c760(), iVar3 == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006f981e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34c))();
  return;
}

// 00707C70  Em8220::vf4C  size=343  [class]
void __fastcall Em8220::vf4C(int *param_1)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  
  BehaviorEmBase::vf4C();
  if ((*(byte *)(param_1[0x13c] + 0x28) & 2) == 0) {
    if (param_1[0x2a1] != 0) {
      iVar2 = FUN_00a8d400(param_1[0x2a1] + 0x40);
      if (((param_1[0x6d6] != 0) && (iVar2 != 0)) &&
         (*(int *)(param_1[0x6d6] + 0xc) != *(int *)(iVar2 + 0xc))) {
        param_1[0x6d5] = 0;
      }
      param_1[0x6d6] = iVar2;
    }
    FUN_006fb7b0();
    FUN_006fb9b0();
    FUN_006f2150();
    iVar2 = FUN_00ac4770();
    if (iVar2 == 0) {
      FUN_00707560();
    }
    FUN_00707850();
    iVar2 = FUN_00a94ce0(1);
    if (iVar2 != 0) {
      FUN_00a94bc0(1,0);
    }
    FUN_006ef0c0();
    FUN_006ee120();
    FUN_006fc9d0();
    if (((param_1[0x3a7] & 0x40000000U) != 0) &&
       (fVar1 = (float)param_1[0x6a3], param_1[0x6a3] = (int)(fVar1 - (float)param_1[0x244]),
       fVar1 - (float)param_1[0x244] <= 0.0)) {
      (**(code **)(*param_1 + 0x110))(0);
    }
    iVar2 = FUN_00a82ec0(4);
    if (((iVar2 != 0) && ((param_1[0x2c0] & 0x200U) != 0)) &&
       (fVar3 = (float10)FUN_00c3c970(), (float10)75.0 <= fVar3)) {
      lib::AllocatedArray<cEnemySubState>::AllocatedArray<cEnemySubState>
                (param_1[0x13c],5,param_1[0x360],4);
      FUN_00a88b50(1,1);
      param_1[0x34a] = 1;
    }
  }
  return;
}

// 00AB5D20  Em8220::vf04  size=6  [class]
undefined * Em8220::vf04(void)

{
  return &DAT_01b35740;
}

// 00AB5D30  Em8220::vf140  size=7  [class]
float10 Em8220::vf140(void)

{
  return (float10)4.0;
}

// 00AB5D40  Em8220::vf144  size=7  [class]
float10 Em8220::vf144(void)

{
  return (float10)4.1;
}

// 00AB5D50  FUN_00ab5d50  size=143  [callgraph]
void FUN_00ab5d50(void)

{
  FUN_00905ce0();
  FUN_00905ce0();
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
  cEnemyCautionStateManager::cEnemyCautionStateManager_3();
  return;
}

// 00ABA700  Em8220::vf00  size=30  [class]
undefined4 __thiscall Em8220::vf00(undefined4 param_1,byte param_2)

{
  FUN_00ab5d50();
  if ((param_2 & 1) != 0) {
    FUN_00dd4920(param_1);
  }
  return param_1;
}

